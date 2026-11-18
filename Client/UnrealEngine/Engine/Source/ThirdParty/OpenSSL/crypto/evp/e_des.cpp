// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 14

// FUN_14f6d6d60 @ 14f6d6d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d6d60(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = EVP_CIPHER_CTX_get_cipher_data();
  *(undefined8 *)(lVar1 + 0x80) = 0;
  uVar2 = EVP_CIPHER_CTX_get_cipher_data(param_1);
  DES_set_key_unchecked(param_2,uVar2);
  return 1;
}

// FUN_14f6d6dc0 @ 14f6d6dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d6dc0(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if (param_2 != 6) {
    return 0xffffffff;
  }
  iVar1 = RAND_priv_bytes(param_4,8);
  if (iVar1 < 1) {
    return 0;
  }
  DES_set_odd_parity(param_4);
  return 1;
}

// FUN_14f6d6e20 @ 14f6d6e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d6e20(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
      DES_ecb_encrypt(lVar2,(param_2 - param_3) + lVar2,uVar3,uVar1);
      lVar2 = lVar2 + uVar4;
    } while ((ulonglong)(lVar2 - param_3) <= param_4 - uVar4);
  }
  return 1;
}

// FUN_14f6d6ed0 @ 14f6d6ed0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d6ed0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

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
      DES_ofb64_encrypt(param_3,param_2,0x40000000,uVar2,uVar1,local_res20);
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
    DES_ofb64_encrypt(param_3,param_2,param_4 & 0xffffffff,uVar2,uVar1,local_res20);
    EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
  }
  return 1;
}

// FUN_14f6d6ff0 @ 14f6d6ff0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d6ff0(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x14f6d7009;
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  if (*(longlong *)(lVar3 + 0x80) == 0) {
    if (0x3fffffff < param_4) {
      uVar6 = param_4 >> 0x1e;
      param_4 = param_4 + uVar6 * -0x40000000;
      do {
        uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
        uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
        uVar5 = EVP_CIPHER_CTX_get_cipher_data(param_1);
        uVar7 = CONCAT44(uVar2,uVar1);
        DES_ncbc_encrypt(param_3,param_2,0x40000000,uVar5,uVar4,uVar7);
        param_3 = param_3 + 0x40000000;
        param_2 = param_2 + 0x40000000;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar1 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (param_4 != 0) {
      uVar2 = EVP_CIPHER_CTX_encrypting(param_1);
      uVar7 = EVP_CIPHER_CTX_iv_noconst(param_1);
      uVar4 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      DES_ncbc_encrypt(param_3,param_2,param_4 & 0xffffffff,uVar4,uVar7,CONCAT44(uVar1,uVar2));
    }
  }
  else {
    uVar4 = EVP_CIPHER_CTX_iv_noconst(param_1);
    (**(code **)(lVar3 + 0x80))(param_3,param_2,param_4,lVar3,uVar4,uVar7);
  }
  return 1;
}

// FUN_14f6d7130 @ 14f6d7130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d7130(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 local_res20 [2];
  
  if (0x3fffffff < param_4) {
    uVar4 = param_4 >> 0x1e;
    param_4 = param_4 + uVar4 * -0x40000000;
    do {
      local_res20[0] = EVP_CIPHER_CTX_num(param_1);
      uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      uVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
      uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      DES_cfb64_encrypt(param_3,param_2,0x40000000,uVar3,uVar2,local_res20,uVar1);
      EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_4 != 0) {
    local_res20[0] = EVP_CIPHER_CTX_num(param_1);
    uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
    uVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
    uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    DES_cfb64_encrypt(param_3,param_2,param_4 & 0xffffffff,uVar3,uVar2,local_res20,uVar1);
    EVP_CIPHER_CTX_set_num(param_1,local_res20[0]);
  }
  return 1;
}

// FUN_14f6d7280 @ 14f6d7280

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d7280(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  byte local_48;
  byte local_47 [15];
  
  uVar4 = param_4;
  if (0x7ffffff < param_4) {
    uVar4 = 0x8000000;
  }
  if (param_4 != 0) {
    do {
      if (param_4 < uVar4) {
        return 1;
      }
      uVar7 = 0;
      if ((uVar4 & 0x1fffffffffffffff) != 0) {
        do {
          bVar6 = (byte)uVar7;
          uVar5 = uVar7 >> 3;
          local_48 = -(((byte)(1 << (7 - (bVar6 & 7) & 0x1f)) & *(byte *)(uVar5 + param_3)) != 0) &
                     0x80;
          uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
          uVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
          uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
          DES_cfb_encrypt(&local_48,local_47,1,1,uVar3,uVar2,uVar1);
          uVar7 = uVar7 + 1;
          *(byte *)(uVar5 + param_2) =
               ~(byte)(0x80 >> (bVar6 & 7)) & *(byte *)(uVar5 + param_2) |
               (local_47[0] & 0x80) >> (bVar6 & 7);
        } while (uVar7 < uVar4 * 8);
      }
      param_4 = param_4 - uVar4;
      param_3 = param_3 + uVar4;
      param_2 = param_2 + uVar4;
      uVar7 = param_4;
      if (uVar4 <= param_4) {
        uVar7 = uVar4;
      }
      uVar4 = uVar7;
    } while (param_4 != 0);
    return 1;
  }
  return 1;
}

// FUN_14f6d7420 @ 14f6d7420

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d7420(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f6d743f;
  if (0x3fffffff < param_4) {
    uVar4 = param_4 >> 0x1e;
    param_4 = param_4 + uVar4 * -0x40000000;
    do {
      uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
      uVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
      uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
      DES_cfb_encrypt(param_3,param_2,8,0x40000000,uVar3,uVar2,uVar1);
      param_3 = param_3 + 0x40000000;
      param_2 = param_2 + 0x40000000;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (param_4 != 0) {
    uVar1 = EVP_CIPHER_CTX_encrypting(param_1);
    uVar2 = EVP_CIPHER_CTX_iv_noconst(param_1);
    uVar3 = EVP_CIPHER_CTX_get_cipher_data(param_1);
    DES_cfb_encrypt(param_3,param_2,8,param_4 & 0xffffffff,uVar3,uVar2,uVar1,uVar5);
  }
  return 1;
}

// EVP_des_cbc @ 14f6d7540

undefined * EVP_des_cbc(void)

{
  return &DAT_1534a76b0;
}

// EVP_des_cfb1 @ 14f6d7550

undefined * EVP_des_cfb1(void)

{
  return &DAT_1534a7830;
}

// EVP_des_cfb64 @ 14f6d7560

undefined * EVP_des_cfb64(void)

{
  return &DAT_1534a7710;
}

// EVP_des_cfb8 @ 14f6d7570

undefined * EVP_des_cfb8(void)

{
  return &DAT_1534a7890;
}

// EVP_des_ecb @ 14f6d7580

undefined * EVP_des_ecb(void)

{
  return &DAT_1534a77d0;
}

// EVP_des_ofb @ 14f6d7590

undefined * EVP_des_ofb(void)

{
  return &DAT_1534a7770;
}

