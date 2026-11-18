// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// FUN_14f6d8610 @ 14f6d8610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_14f6d8610(undefined8 param_1,int param_2,int param_3,void *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong auStack_98 [4];
  ulonglong local_78 [9];
  undefined8 uStack_30;
  
  uStack_30 = 0x14f6d8621;
  local_78[8] = __security_cookie.value ^ (ulonglong)auStack_98;
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_2 == 0x16) {
    if (param_3 == 0xd) {
      uVar6 = (uint)CONCAT11(*(undefined1 *)((longlong)param_4 + 0xb),
                             *(undefined1 *)((longlong)param_4 + 0xc));
      iVar2 = EVP_CIPHER_CTX_encrypting(param_1);
      if (iVar2 == 0) {
        if (uVar6 < 0x10) {
          return 0xffffffff;
        }
        uVar6 = uVar6 - 0x10;
        *(char *)((longlong)param_4 + 0xc) = (char)uVar6;
        *(char *)((longlong)param_4 + 0xb) = (char)(uVar6 >> 8);
      }
      *(ulonglong *)(lVar3 + 0x520) = (ulonglong)uVar6;
      *(undefined8 *)(lVar3 + 0x4c0) = *(undefined8 *)(lVar3 + 0x408);
      *(undefined8 *)(lVar3 + 0x4c8) = *(undefined8 *)(lVar3 + 0x410);
      *(undefined8 *)(lVar3 + 0x4d0) = *(undefined8 *)(lVar3 + 0x418);
      *(undefined8 *)(lVar3 + 0x4d8) = *(undefined8 *)(lVar3 + 0x420);
      *(undefined8 *)(lVar3 + 0x4e0) = *(undefined8 *)(lVar3 + 0x428);
      *(undefined8 *)(lVar3 + 0x4e8) = *(undefined8 *)(lVar3 + 0x430);
      *(undefined8 *)(lVar3 + 0x4f0) = *(undefined8 *)(lVar3 + 0x438);
      *(undefined8 *)(lVar3 + 0x4f8) = *(undefined8 *)(lVar3 + 0x440);
      *(undefined8 *)(lVar3 + 0x500) = *(undefined8 *)(lVar3 + 0x448);
      *(undefined8 *)(lVar3 + 0x508) = *(undefined8 *)(lVar3 + 0x450);
      *(undefined8 *)(lVar3 + 0x510) = *(undefined8 *)(lVar3 + 0x458);
      *(undefined4 *)(lVar3 + 0x518) = *(undefined4 *)(lVar3 + 0x460);
      MD5_Update((undefined8 *)(lVar3 + 0x4c0),param_4,0xd);
      return 0x10;
    }
  }
  else if (param_2 == 0x17) {
    local_78[0] = 0;
    local_78[1] = 0;
    local_78[2] = 0;
    local_78[3] = 0;
    local_78[4] = 0;
    local_78[5] = 0;
    local_78[6] = 0;
    local_78[7] = 0;
    if (param_3 < 0x41) {
      memcpy(local_78,param_4,(longlong)param_3);
    }
    else {
      MD5_Init(lVar3 + 0x408);
      MD5_Update(lVar3 + 0x408,param_4,(longlong)param_3);
      MD5_Final(local_78,lVar3 + 0x408);
    }
    lVar7 = 2;
    lVar5 = 2;
    puVar1 = auStack_98;
    do {
      puVar4 = puVar1 + 4;
      *puVar4 = *puVar4 ^ ___xmm_36363636363636363636363636363636;
      puVar1[5] = puVar1[5] ^ _UNK_1506bff78;
      puVar1[6] = puVar1[6] ^ ___xmm_36363636363636363636363636363636;
      puVar1[7] = puVar1[7] ^ _UNK_1506bff78;
      lVar5 = lVar5 + -1;
      puVar1 = puVar4;
    } while (lVar5 != 0);
    MD5_Init(lVar3 + 0x408);
    MD5_Update(lVar3 + 0x408,local_78,0x40);
    puVar1 = auStack_98;
    do {
      puVar4 = puVar1 + 4;
      *puVar4 = __xmm_6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a._0_8_ ^ *puVar4;
      puVar1[5] = __xmm_6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a._8_8_ ^ puVar1[5];
      puVar1[6] = __xmm_6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a._0_8_ ^ puVar1[6];
      puVar1[7] = __xmm_6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a._8_8_ ^ puVar1[7];
      lVar7 = lVar7 + -1;
      puVar1 = puVar4;
    } while (lVar7 != 0);
    MD5_Init(lVar3 + 0x464);
    MD5_Update(lVar3 + 0x464,local_78,0x40);
    OPENSSL_cleanse(local_78,0x40);
    return 1;
  }
  return 0xffffffff;
}

// FUN_14f6d8870 @ 14f6d8870

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6d8870(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = EVP_CIPHER_CTX_get_cipher_data();
  uVar2 = EVP_CIPHER_CTX_key_length(param_1);
  RC4_set_key(lVar3,uVar2,param_2);
  puVar1 = (undefined8 *)(lVar3 + 0x408);
  MD5_Init(puVar1);
  *(undefined8 *)(lVar3 + 0x520) = 0xffffffffffffffff;
  *(undefined8 *)(lVar3 + 0x464) = *puVar1;
  *(undefined8 *)(lVar3 + 0x46c) = *(undefined8 *)(lVar3 + 0x410);
  *(undefined8 *)(lVar3 + 0x474) = *(undefined8 *)(lVar3 + 0x418);
  *(undefined8 *)(lVar3 + 0x47c) = *(undefined8 *)(lVar3 + 0x420);
  *(undefined8 *)(lVar3 + 0x484) = *(undefined8 *)(lVar3 + 0x428);
  *(undefined8 *)(lVar3 + 0x48c) = *(undefined8 *)(lVar3 + 0x430);
  *(undefined8 *)(lVar3 + 0x494) = *(undefined8 *)(lVar3 + 0x438);
  *(undefined8 *)(lVar3 + 0x49c) = *(undefined8 *)(lVar3 + 0x440);
  *(undefined8 *)(lVar3 + 0x4a4) = *(undefined8 *)(lVar3 + 0x448);
  *(undefined8 *)(lVar3 + 0x4ac) = *(undefined8 *)(lVar3 + 0x450);
  *(undefined8 *)(lVar3 + 0x4b4) = *(undefined8 *)(lVar3 + 0x458);
  *(undefined4 *)(lVar3 + 0x4bc) = *(undefined4 *)(lVar3 + 0x460);
  *(undefined8 *)(lVar3 + 0x4c0) = *puVar1;
  *(undefined8 *)(lVar3 + 0x4c8) = *(undefined8 *)(lVar3 + 0x410);
  *(undefined8 *)(lVar3 + 0x4d0) = *(undefined8 *)(lVar3 + 0x418);
  *(undefined8 *)(lVar3 + 0x4d8) = *(undefined8 *)(lVar3 + 0x420);
  *(undefined8 *)(lVar3 + 0x4e0) = *(undefined8 *)(lVar3 + 0x428);
  *(undefined8 *)(lVar3 + 0x4e8) = *(undefined8 *)(lVar3 + 0x430);
  *(undefined8 *)(lVar3 + 0x4f0) = *(undefined8 *)(lVar3 + 0x438);
  *(undefined8 *)(lVar3 + 0x4f8) = *(undefined8 *)(lVar3 + 0x440);
  *(undefined8 *)(lVar3 + 0x500) = *(undefined8 *)(lVar3 + 0x448);
  *(undefined8 *)(lVar3 + 0x508) = *(undefined8 *)(lVar3 + 0x450);
  *(undefined8 *)(lVar3 + 0x510) = *(undefined8 *)(lVar3 + 0x458);
  *(undefined4 *)(lVar3 + 0x518) = *(undefined4 *)(lVar3 + 0x460);
  return 1;
}

// FUN_14f6d8980 @ 14f6d8980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f6d8980(ulonglong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong local_70;
  ulonglong local_60 [2];
  ulonglong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f6d8997;
  local_50 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_60[0] = param_1;
  puVar3 = (uint *)EVP_CIPHER_CTX_get_cipher_data();
  lVar9 = 0x40;
  uVar10 = (ulonglong)(0x40 - puVar3[0x146]);
  uVar12 = *(ulonglong *)(puVar3 + 0x148);
  uVar8 = (ulonglong)(0x1f - (*puVar3 & 0x1f));
  if ((uVar12 == 0xffffffffffffffff) || (param_4 == uVar12 + 0x10)) {
    iVar2 = EVP_CIPHER_CTX_encrypting(local_60[0]);
    if (iVar2 == 0) {
      if (uVar8 < uVar10) {
        lVar9 = 0x80;
      }
      uVar8 = uVar8 + lVar9;
      if (((uVar8 < param_4) && (uVar11 = param_4 - uVar8 >> 6, uVar11 != 0)) &&
         ((OPENSSL_ia32cap_P & 0x100000) == 0)) {
        RC4(puVar3,uVar8,param_3,param_2);
        MD5_Update(puVar3 + 0x130,param_2,uVar10);
        local_78 = param_2 + uVar10;
        local_70 = uVar11;
        rc4_md5_enc(puVar3,uVar8 + param_3,uVar8 + param_2,puVar3 + 0x130);
        lVar6 = uVar8 + uVar11 * 0x40;
        uVar5 = (int)(uVar11 << 9) + puVar3[0x134];
        if (uVar5 < puVar3[0x134]) {
          puVar3[0x135] = puVar3[0x135] + 1;
        }
        puVar3[0x135] = puVar3[0x135] + (int)(param_4 - uVar8 >> 0x1d);
        puVar3[0x134] = uVar5;
        lVar9 = uVar10 + uVar11 * 0x40;
      }
      else {
        lVar6 = 0;
        lVar9 = lVar6;
      }
      RC4(puVar3,param_4 - lVar6,param_3 + lVar6,param_2 + lVar6);
      if (uVar12 == 0xffffffffffffffff) {
        MD5_Update(puVar3 + 0x130,param_2 + lVar9,param_4 - lVar9);
      }
      else {
        puVar1 = puVar3 + 0x130;
        MD5_Update(puVar1,param_2 + lVar9,uVar12 - lVar9);
        MD5_Final(local_60,puVar1);
        *(undefined8 *)puVar1 = *(undefined8 *)(puVar3 + 0x119);
        *(undefined8 *)(puVar3 + 0x132) = *(undefined8 *)(puVar3 + 0x11b);
        *(undefined8 *)(puVar3 + 0x134) = *(undefined8 *)(puVar3 + 0x11d);
        *(undefined8 *)(puVar3 + 0x136) = *(undefined8 *)(puVar3 + 0x11f);
        *(undefined8 *)(puVar3 + 0x138) = *(undefined8 *)(puVar3 + 0x121);
        *(undefined8 *)(puVar3 + 0x13a) = *(undefined8 *)(puVar3 + 0x123);
        *(undefined8 *)(puVar3 + 0x13c) = *(undefined8 *)(puVar3 + 0x125);
        *(undefined8 *)(puVar3 + 0x13e) = *(undefined8 *)(puVar3 + 0x127);
        puVar3[0x140] = puVar3[0x129];
        puVar3[0x141] = puVar3[0x12a];
        puVar3[0x142] = puVar3[299];
        puVar3[0x143] = puVar3[300];
        *(undefined8 *)(puVar3 + 0x144) = *(undefined8 *)(puVar3 + 0x12d);
        puVar3[0x146] = puVar3[0x12f];
        MD5_Update(puVar1,local_60,0x10);
        MD5_Final(local_60,puVar1);
        iVar2 = CRYPTO_memcmp(param_2 + uVar12,local_60,0x10);
        if (iVar2 != 0) goto LAB_14f6d8d59;
      }
    }
    else {
      if (uVar12 == 0xffffffffffffffff) {
        uVar12 = param_4;
      }
      local_60[0] = uVar10 + 0x40;
      if (uVar8 <= uVar10) {
        local_60[0] = uVar10;
      }
      if (((local_60[0] < uVar12) &&
          (uVar10 = uVar12 - local_60[0], uVar11 = uVar10 >> 6, uVar11 != 0)) &&
         ((OPENSSL_ia32cap_P & 0x100000) == 0)) {
        MD5_Update(puVar3 + 0x130,param_3,local_60[0]);
        RC4(puVar3,uVar8,param_3,param_2);
        local_78 = local_60[0] + param_3;
        local_70 = uVar11;
        rc4_md5_enc(puVar3,uVar8 + param_3,param_2 + uVar8,puVar3 + 0x130);
        lVar9 = uVar8 + uVar11 * 0x40;
        lVar6 = local_60[0] + uVar11 * 0x40;
        uVar7 = (int)(uVar10 >> 0x1d) + puVar3[0x135];
        puVar3[0x135] = uVar7;
        uVar5 = (uint)(uVar11 << 9);
        puVar3[0x134] = puVar3[0x134] + uVar5;
        if (puVar3[0x134] < uVar5) {
          puVar3[0x135] = uVar7 + 1;
        }
      }
      else {
        lVar6 = 0;
        lVar9 = lVar6;
      }
      puVar1 = puVar3 + 0x130;
      MD5_Update(puVar1,lVar6 + param_3,uVar12 - lVar6);
      if (uVar12 == param_4) {
        RC4(puVar3,param_4 - lVar9,lVar9 + param_3,param_2 + lVar9);
      }
      else {
        if (param_3 != param_2) {
          memcpy((void *)(param_2 + lVar9),(void *)(lVar9 + param_3),uVar12 - lVar9);
        }
        lVar6 = param_2 + uVar12;
        MD5_Final(lVar6,puVar1);
        *(undefined8 *)puVar1 = *(undefined8 *)(puVar3 + 0x119);
        *(undefined8 *)(puVar3 + 0x132) = *(undefined8 *)(puVar3 + 0x11b);
        *(undefined8 *)(puVar3 + 0x134) = *(undefined8 *)(puVar3 + 0x11d);
        *(undefined8 *)(puVar3 + 0x136) = *(undefined8 *)(puVar3 + 0x11f);
        *(undefined8 *)(puVar3 + 0x138) = *(undefined8 *)(puVar3 + 0x121);
        *(undefined8 *)(puVar3 + 0x13a) = *(undefined8 *)(puVar3 + 0x123);
        *(undefined8 *)(puVar3 + 0x13c) = *(undefined8 *)(puVar3 + 0x125);
        *(undefined8 *)(puVar3 + 0x13e) = *(undefined8 *)(puVar3 + 0x127);
        puVar3[0x140] = puVar3[0x129];
        puVar3[0x141] = puVar3[0x12a];
        puVar3[0x142] = puVar3[299];
        puVar3[0x143] = puVar3[300];
        *(undefined8 *)(puVar3 + 0x144) = *(undefined8 *)(puVar3 + 0x12d);
        puVar3[0x146] = puVar3[0x12f];
        MD5_Update(puVar1,lVar6,0x10);
        MD5_Final(lVar6,puVar1);
        RC4(puVar3,param_4 - lVar9,param_2 + lVar9,param_2 + lVar9);
      }
    }
    puVar3[0x148] = 0xffffffff;
    puVar3[0x149] = 0xffffffff;
    uVar4 = 1;
  }
  else {
LAB_14f6d8d59:
    uVar4 = 0;
  }
  return uVar4;
}

// EVP_rc4_hmac_md5 @ 14f6d8db0

undefined * EVP_rc4_hmac_md5(void)

{
  return &DAT_154df8920;
}

