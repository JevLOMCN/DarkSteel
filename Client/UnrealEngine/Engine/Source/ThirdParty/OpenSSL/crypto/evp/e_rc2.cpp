// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 16

// FUN_14f6d92a0 @ 14f6d92a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d92a0(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined4 *)EVP_CIPHER_CTX_get_cipher_data();
  uVar1 = EVP_CIPHER_CTX_key_length(param_1);
  lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  RC2_set_key(lVar3 + 4,uVar1,param_2,*puVar2);
  return 1;
}

// FUN_14f6d9310 @ 14f6d9310

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d9310(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int local_res10 [2];
  
  uVar4 = 0;
  if (param_2 != 0) {
    iVar1 = EVP_CIPHER_CTX_ctrl(param_1,2,0,local_res10);
    if (0 < iVar1) {
      if (local_res10[0] == 0x80) {
        uVar4 = 0x3a;
      }
      else if (local_res10[0] == 0x40) {
        uVar4 = 0x78;
      }
      else {
        uVar4 = 0;
        if (local_res10[0] == 0x28) {
          uVar4 = 0xa0;
        }
      }
    }
    uVar2 = EVP_CIPHER_CTX_iv_length(param_1);
    uVar3 = EVP_CIPHER_CTX_original_iv(param_1);
    uVar3 = ASN1_TYPE_set_int_octetstring(param_2,uVar4,uVar3,uVar2);
    return uVar3;
  }
  return 0;
}

// FUN_14f6d93d0 @ 14f6d93d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_14f6d93d0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  int local_38 [2];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = EVP_CIPHER_CTX_iv_length();
  if (0x10 < uVar1) {
    OPENSSL_die("assertion failed: l <= sizeof(iv)","crypto\\evp\\e_rc2.c",0x83);
  }
  uVar2 = ASN1_TYPE_get_int_octetstring(param_2,local_38,local_30,uVar1);
  if (uVar2 == uVar1) {
    if (local_38[0] == 0x3a) {
      uVar1 = 0x80;
    }
    else if (local_38[0] == 0x78) {
      uVar1 = 0x40;
    }
    else {
      if (local_38[0] != 0xa0) {
        local_48 = (undefined1 *)CONCAT44(local_48._4_4_,0x74);
        ERR_put_error(6,0x6d,0x6c,"crypto\\evp\\e_rc2.c");
        return 0xffffffff;
      }
      uVar1 = 0x28;
    }
    if (0 < (int)uVar2) {
      local_48 = local_30;
      local_40 = 0xffffffff;
      iVar3 = EVP_CipherInit_ex(param_1,0,0,0);
      if (iVar3 == 0) {
        return 0xffffffff;
      }
    }
    iVar3 = EVP_CIPHER_CTX_ctrl(param_1,3,uVar1);
    if (0 < iVar3) {
      iVar3 = EVP_CIPHER_CTX_set_key_length(param_1,uVar1 >> 3);
      if (iVar3 < 1) {
        return 0xffffffff;
      }
      return uVar2;
    }
  }
  return 0xffffffff;
}

// FUN_14f6d9510 @ 14f6d9510

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d9510(undefined8 param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    param_3 = EVP_CIPHER_CTX_key_length();
    param_3 = param_3 << 3;
  }
  else {
    if (param_2 == 2) {
      puVar1 = (undefined4 *)EVP_CIPHER_CTX_get_cipher_data();
      *param_4 = *puVar1;
      return 1;
    }
    if (param_2 != 3) {
      return 0xffffffff;
    }
    if (param_3 < 1) {
      return 0;
    }
  }
  piVar2 = (int *)EVP_CIPHER_CTX_get_cipher_data(param_1);
  *piVar2 = param_3;
  return 1;
}

// FUN_14f6d95b0 @ 14f6d95b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d95b0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x14f6d95cf;
  uVar1 = 1;
  if (0x3fffffff < param_4) {
    uVar5 = param_4 >> 0x1e;
    param_4 = param_4 + uVar5 * -0x40000000;
    do {
      uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
      uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      uVar3 = EVP_CIPHER_CTX_iv_noconst(param_1);
      lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      uVar6 = CONCAT44(uVar2,uVar1);
      RC2_cbc_encrypt(param_3,param_2,0x40000000,lVar4 + 4,uVar3,uVar6);
      uVar1 = (undefined4)((ulonglong)uVar6 >> 0x20);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (param_4 != 0) {
    uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
    uVar6 = EVP_CIPHER_CTX_iv_noconst(param_1);
    lVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    RC2_cbc_encrypt(param_3,param_2,param_4 & 0xffffffff,lVar4 + 4,uVar6,CONCAT44(uVar1,uVar2));
  }
  return 1;
}

// FUN_14f6d96c0 @ 14f6d96c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d96c0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
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
      lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      RC2_cfb64_encrypt(param_3,param_2,uVar4 & 0xffffffff,lVar3 + 4,uVar2,local_res20,uVar1);
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

// FUN_14f6d97c0 @ 14f6d97c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d97c0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = EVP_CIPHER_CTX_cipher();
  uVar4 = (ulonglong)*(int *)(lVar2 + 4);
  if (uVar4 <= param_4) {
    lVar2 = param_3;
    do {
      uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      lVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      RC2_ecb_encrypt(lVar2,(param_2 - param_3) + lVar2,lVar3 + 4,uVar1);
      lVar2 = lVar2 + uVar4;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar4);
  }
  return 1;
}

// FUN_14f6d9870 @ 14f6d9870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d9870(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar3 = param_4 >> 0x1e;
    param_4 = param_4 + uVar3 * -0x40000000;
    do {
      local_res20[0] = EVP_CIPHER_CTX_num(param_1);
      uVar1 = EVP_CIPHER_CTX_iv_noconst(param_1);
      lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      RC2_ofb64_encrypt(param_3,param_2,0x40000000,lVar2 + 4,uVar1,local_res20);
      EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = EVP_CIPHER_CTX_num(param_1);
    uVar1 = EVP_CIPHER_CTX_iv_noconst(param_1);
    lVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    RC2_ofb64_encrypt(param_3,param_2,param_4 & 0xffffffff,lVar2 + 4,uVar1,local_res20);
    EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
  }
  return 1;
}

// EVP_rc2_40_cbc @ 14f6d9990

undefined * EVP_rc2_40_cbc(void)

{
  return &DAT_1534a7fc0;
}

// EVP_rc2_64_cbc @ 14f6d99a0

undefined * EVP_rc2_64_cbc(void)

{
  return &DAT_1534a7f60;
}

// EVP_rc2_cbc @ 14f6d99b0

undefined * EVP_rc2_cbc(void)

{
  return &DAT_1534a8020;
}

// EVP_rc2_cfb64 @ 14f6d99c0

undefined * EVP_rc2_cfb64(void)

{
  return &DAT_1534a8080;
}

// EVP_rc2_ecb @ 14f6d99d0

undefined * EVP_rc2_ecb(void)

{
  return &DAT_1534a8140;
}

// EVP_rc2_ofb @ 14f6d99e0

undefined * EVP_rc2_ofb(void)

{
  return &DAT_1534a80e0;
}

// FUN_14f6d99f0 @ 14f6d99f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f6d99f0(int param_1)

{
  if (param_1 == 0x3a) {
    return 0x80;
  }
  if (param_1 == 0x78) {
    return 0x40;
  }
  if (param_1 == 0xa0) {
    return 0x28;
  }
  ERR_put_error(6,0x6d,0x6c,"crypto\\evp\\e_rc2.c",0x74);
  return 0;
}

// FUN_14f6d9a60 @ 14f6d9a60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f6d9a60(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_res10 [6];
  
  iVar1 = EVP_CIPHER_CTX_ctrl(param_1,2,0,local_res10,0x14f6d9a6a);
  if (iVar1 < 1) {
    return 0;
  }
  if (local_res10[0] == 0x80) {
    return 0x3a;
  }
  if (local_res10[0] == 0x40) {
    return 0x78;
  }
  uVar2 = 0;
  if (local_res10[0] == 0x28) {
    uVar2 = 0xa0;
  }
  return uVar2;
}

