// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// ssl3_cbc_digest_record @ 14f6a2ea0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
ssl3_cbc_digest_record
          (undefined8 param_1,undefined8 param_2,ulonglong *param_3,undefined8 *param_4,
          void *param_5,longlong param_6,ulonglong param_7,void *param_8,ulonglong param_9,
          char param_10)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  void *pvVar8;
  undefined1 uVar9;
  int iVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong _Size;
  byte bVar21;
  size_t sVar22;
  longlong lVar23;
  ulonglong uVar24;
  size_t _Size_00;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined1 auStack_408 [32];
  char local_3e8;
  code *local_3e0;
  size_t local_3d8;
  longlong local_3d0;
  code *local_3c8;
  ulonglong local_3c0;
  undefined8 *local_3b8;
  ulonglong local_3b0;
  ulonglong local_3a8;
  uint local_3a0 [2];
  void *local_398;
  ulonglong local_390;
  size_t local_388;
  void *local_380;
  ulonglong local_378;
  ulonglong local_370;
  ulonglong local_368;
  ulonglong local_360;
  ulonglong local_358;
  undefined1 *local_350;
  longlong local_348;
  ulonglong local_340;
  undefined8 local_338;
  undefined8 local_330;
  ulonglong *local_328;
  undefined1 local_318 [216];
  undefined1 auStack_240 [24];
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  ulonglong local_1e8 [16];
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined1 local_15b [115];
  uint local_e8 [32];
  ulonglong local_68;
  undefined1 uVar10;
  undefined1 uVar11;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_408;
  lVar23 = 0x28;
  sVar22 = 8;
  local_398 = param_5;
  _Size = 0x40;
  local_380 = param_8;
  local_388 = 0x28;
  local_3d8 = 8;
  local_3e8 = '\x01';
  if (0xfffff < param_7) {
    return 0;
  }
  local_3b8 = param_4;
  local_338 = param_1;
  local_330 = param_2;
  local_328 = param_3;
  uVar13 = EVP_MD_CTX_md();
  iVar12 = EVP_MD_type(uVar13);
  if (iVar12 < 0x2a2) {
    if (iVar12 == 0x2a1) {
      iVar12 = SHA384_Init(local_318);
      if (iVar12 < 1) {
        return 0;
      }
      uVar26 = 0x30;
      sVar22 = 0x10;
      local_3c8 = (code *)&LAB_14f6a3ac0;
      local_3e0 = SHA512_Transform;
      local_3c0 = 0x30;
      local_3d8 = 0x10;
      _Size = 0x80;
    }
    else if (iVar12 == 4) {
      iVar12 = MD5_Init(local_318);
      if (iVar12 < 1) {
        return 0;
      }
      uVar26 = 0x10;
      local_3e8 = '\0';
      lVar23 = 0x30;
      local_3c0 = 0x10;
      local_388 = 0x30;
      local_3c8 = (code *)&LAB_14f6a38b0;
      local_3e0 = MD5_Transform;
    }
    else if (iVar12 == 0x40) {
      iVar12 = SHA1_Init(local_318);
      if (iVar12 < 1) {
        return 0;
      }
      uVar26 = 0x14;
      local_3c8 = (code *)&LAB_14f6a3930;
      local_3c0 = 0x14;
      local_3e0 = SHA1_Transform;
    }
    else {
      if (iVar12 != 0x2a0) goto LAB_14f6a3065;
      iVar12 = SHA256_Init(local_318);
      if (iVar12 < 1) {
        return 0;
      }
      uVar26 = 0x20;
      local_3c8 = FUN_14f6a39d0;
      local_3c0 = 0x20;
      local_3e0 = SHA256_Transform;
    }
  }
  else if (iVar12 == 0x2a2) {
    iVar12 = SHA512_Init(local_318);
    if (iVar12 < 1) {
      return 0;
    }
    sVar22 = 0x10;
    local_3c0 = 0x40;
    uVar26 = 0x40;
    local_3d8 = 0x10;
    local_3c8 = (code *)&LAB_14f6a3ac0;
    _Size = 0x80;
    local_3e0 = SHA512_Transform;
  }
  else {
    if (iVar12 != 0x2a3) {
LAB_14f6a3065:
      if (param_3 == (ulonglong *)0x0) {
        return 0;
      }
      *param_3 = 0;
      return 0;
    }
    iVar12 = SHA224_Init(local_318);
    if (iVar12 < 1) {
      return 0;
    }
    uVar26 = 0x1c;
    local_3c8 = FUN_14f6a39d0;
    local_3c0 = 0x1c;
    local_3e0 = SHA256_Transform;
  }
  uVar20 = 0xd;
  if (param_10 == '\0') {
    local_3d0 = (_Size + 0xff + uVar26) / _Size + 1;
  }
  else {
    local_3d0 = 2;
    uVar20 = param_9 + 0xb + lVar23;
  }
  uVar15 = 0;
  local_3b0 = 0;
  uVar24 = param_6 + (uVar20 - uVar26);
  uVar14 = ((param_7 - 1) + (uVar20 - uVar26) + sVar22 + _Size) / _Size;
  local_378 = uVar24 / _Size;
  local_3a8 = uVar24 % _Size;
  local_370 = (uVar24 + sVar22) / _Size;
  uVar19 = uVar15;
  if ((ulonglong)(param_10 != '\0') + local_3d0 < uVar14) {
    local_3b0 = uVar14 - local_3d0;
    uVar19 = local_3b0 * _Size;
  }
  iVar12 = (int)uVar24 * 8;
  if (param_10 == '\0') {
    iVar12 = iVar12 + (int)_Size * 8;
    memset(local_1e8,0,_Size);
    if (0x80 < param_9) {
      return 0;
    }
    memcpy(local_1e8,local_380,param_9);
    do {
      *(ulonglong *)((longlong)local_1e8 + uVar15) =
           *(ulonglong *)((longlong)local_1e8 + uVar15) ^ ___xmm_36363636363636363636363636363636;
      *(ulonglong *)((longlong)local_1e8 + uVar15 + 8) =
           *(ulonglong *)((longlong)local_1e8 + uVar15 + 8) ^ _UNK_1506bff78;
      *(ulonglong *)((longlong)local_1e8 + uVar15 + 0x10) =
           ___xmm_36363636363636363636363636363636 ^
           *(ulonglong *)((longlong)local_1e8 + uVar15 + 0x10);
      *(ulonglong *)((longlong)local_1e8 + uVar15 + 0x18) =
           _UNK_1506bff78 ^ *(ulonglong *)((longlong)local_1e8 + uVar15 + 0x18);
      uVar15 = uVar15 + 0x20;
    } while (uVar15 < _Size);
    (*local_3e0)(local_318);
  }
  uVar9 = (undefined1)((uint)iVar12 >> 8);
  uVar10 = (undefined1)((uint)iVar12 >> 0x10);
  uVar11 = (undefined1)((uint)iVar12 >> 0x18);
  if (local_3e8 == '\0') {
    memset(auStack_240 + 8,0,sVar22);
    auStack_240[sVar22] = (char)iVar12;
    auStack_240[sVar22 + 3] = uVar11;
    auStack_240[sVar22 + 2] = uVar10;
    auStack_240[sVar22 + 1] = uVar9;
  }
  else {
    memset(auStack_240 + 8,0,sVar22 - 4);
    auStack_240[sVar22 + 7] = (char)iVar12;
    auStack_240[sVar22 + 4] = uVar11;
    auStack_240[sVar22 + 5] = uVar10;
    auStack_240[sVar22 + 6] = uVar9;
  }
  pvVar8 = local_398;
  if (uVar19 != 0) {
    if (param_10 == '\0') {
      local_160 = *(undefined4 *)(local_3b8 + 1);
      local_168 = *local_3b8;
      local_15c = *(undefined1 *)((longlong)local_3b8 + 0xc);
      memcpy(local_15b,local_398,_Size - 0xd);
      (*local_3e0)(local_318);
      pcVar7 = local_3e0;
      if (1 < uVar19 / _Size) {
        lVar23 = uVar19 / _Size - 1;
        lVar25 = (longlong)pvVar8 + -0xd;
        do {
          lVar25 = lVar25 + _Size;
          (*pcVar7)(local_318,lVar25);
          lVar23 = lVar23 + -1;
          sVar22 = local_3d8;
        } while (lVar23 != 0);
      }
    }
    else {
      if (uVar20 <= _Size) {
        return 0;
      }
      _Size_00 = uVar20 - _Size;
      local_390 = _Size_00;
      (*local_3e0)(local_318,local_3b8);
      memcpy(&local_168,(void *)((longlong)local_3b8 + _Size),_Size_00);
      pvVar8 = local_398;
      memcpy((void *)((longlong)&local_168 + _Size_00),local_398,_Size - _Size_00);
      (*local_3e0)(local_318);
      pcVar7 = local_3e0;
      if (1 < uVar19 / _Size - 1) {
        lVar25 = (longlong)pvVar8 - local_390;
        lVar23 = uVar19 / _Size - 2;
        do {
          lVar25 = lVar25 + _Size;
          (*pcVar7)(local_318,lVar25);
          lVar23 = lVar23 + -1;
          sVar22 = local_3d8;
        } while (lVar23 != 0);
      }
    }
  }
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_340 = local_3d0 + local_3b0;
  if (local_3b0 <= local_340) {
    local_390 = local_3a8 >> 0x3f;
    local_368 = local_3a8 + 1;
    local_360 = local_368 >> 0x3f;
    local_358 = _Size - sVar22;
    local_350 = auStack_240 + (local_3a8 - _Size) + sVar22 + 8;
    local_348 = (longlong)local_e8 + local_3a8;
    local_3a8 = -local_3a8;
    do {
      uVar26 = 0;
      bVar2 = (char)((byte)((local_3b0 ^ local_378) - 1 >> 0x38) &
                    ~(byte)((local_3b0 ^ local_378) >> 0x38)) >> 7;
      bVar3 = (char)((byte)((local_3b0 ^ local_370) - 1 >> 0x38) &
                    ~(byte)((local_3b0 ^ local_370) >> 0x38)) >> 7;
      uVar27 = CONCAT22(CONCAT11(bVar3,bVar3),CONCAT11(bVar3,bVar3));
      do {
        bVar21 = 0;
        if (uVar19 < uVar20) {
          bVar21 = *(byte *)(uVar19 + (longlong)local_3b8);
        }
        else if (uVar19 < param_7 + uVar20) {
          bVar21 = *(byte *)((longlong)local_398 + (uVar19 - uVar20));
        }
        lVar23 = local_3a8 + uVar26;
        uVar19 = uVar19 + 1;
        bVar18 = (byte)(uVar26 >> 0x3f);
        bVar1 = (((byte)((ulonglong)lVar23 >> 0x3f) ^ (byte)local_390 | (byte)local_390 ^ bVar18) ^
                bVar18) - 1 & bVar2;
        uVar16 = (uint)bVar1;
        uVar17 = ~uVar16;
        bVar21 = (bVar1 & 0x80 | (byte)uVar17 & bVar21) &
                 ~((((byte)(uVar26 - local_368 >> 0x3f) ^ (byte)local_360 | (byte)local_360 ^ bVar18
                    ) ^ bVar18) - 1 & bVar2) & (~bVar3 | bVar2);
        if (local_358 <= uVar26) {
          uVar16 = (uint)bVar3;
          uVar17 = ~uVar16;
          bVar21 = bVar21 & (byte)uVar17 | local_350[lVar23] & bVar3;
        }
        local_3d0 = CONCAT44(local_3d0._4_4_,uVar17);
        local_3d8 = CONCAT44(local_3d8._4_4_,uVar16);
        uVar26 = uVar26 + 1;
        *(byte *)(lVar23 + local_348) = bVar21;
      } while (uVar26 < _Size);
      (*local_3e0)(local_318,local_e8);
      (*local_3c8)(local_318,local_e8);
      uVar26 = 0;
      if (0x1f < local_3c0) {
        do {
          uVar16 = *(uint *)((longlong)&local_220 + uVar26);
          uVar17 = *(uint *)((longlong)&local_220 + uVar26 + 4);
          uVar4 = *(uint *)((longlong)local_e8 + uVar26 + 4);
          uVar5 = *(uint *)((longlong)local_e8 + uVar26 + 8);
          uVar6 = *(uint *)((longlong)local_e8 + uVar26 + 0xc);
          *(uint *)((longlong)&local_228 + uVar26) =
               *(uint *)((longlong)local_e8 + uVar26) & uVar27 |
               *(uint *)((longlong)&local_228 + uVar26);
          *(uint *)((longlong)&local_228 + uVar26 + 4) =
               uVar4 & uVar27 | *(uint *)((longlong)&local_228 + uVar26 + 4);
          *(uint *)((longlong)&local_220 + uVar26) = uVar5 & uVar27 | uVar16;
          *(uint *)((longlong)&local_220 + uVar26 + 4) = uVar6 & uVar27 | uVar17;
          uVar16 = *(uint *)((longlong)&local_210 + uVar26);
          uVar17 = *(uint *)((longlong)&local_210 + uVar26 + 4);
          uVar4 = *(uint *)((longlong)local_e8 + uVar26 + 0x14);
          uVar5 = *(uint *)((longlong)local_e8 + uVar26 + 0x18);
          uVar6 = *(uint *)((longlong)local_e8 + uVar26 + 0x1c);
          *(uint *)((longlong)&local_218 + uVar26) =
               *(uint *)((longlong)local_e8 + uVar26 + 0x10) & uVar27 |
               *(uint *)((longlong)&local_218 + uVar26);
          *(uint *)((longlong)&local_218 + uVar26 + 4) =
               uVar4 & uVar27 | *(uint *)((longlong)&local_218 + uVar26 + 4);
          *(uint *)((longlong)&local_210 + uVar26) = uVar5 & uVar27 | uVar16;
          *(uint *)((longlong)&local_210 + uVar26 + 4) = uVar6 & uVar27 | uVar17;
          uVar26 = uVar26 + 0x20;
        } while (uVar26 < (local_3c0 & 0xffffffffffffffe0));
      }
      for (; uVar26 < local_3c0; uVar26 = uVar26 + 1) {
        *(byte *)((longlong)&local_228 + uVar26) =
             *(byte *)((longlong)&local_228 + uVar26) |
             *(byte *)((longlong)local_e8 + uVar26) & bVar3;
      }
      local_3b0 = local_3b0 + 1;
      uVar26 = local_3c0;
    } while (local_3b0 <= local_340);
  }
  uVar20 = 0;
  lVar23 = EVP_MD_CTX_new();
  if (lVar23 != 0) {
    uVar13 = EVP_MD_CTX_md(local_338);
    iVar12 = EVP_DigestInit_ex(lVar23,uVar13,0);
    sVar22 = local_388;
    if (0 < iVar12) {
      if (param_10 == '\0') {
        do {
          *(ulonglong *)((longlong)local_1e8 + uVar20) =
               *(ulonglong *)((longlong)local_1e8 + uVar20) ^
               __xmm_6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a._0_8_;
          *(ulonglong *)((longlong)local_1e8 + uVar20 + 8) =
               *(ulonglong *)((longlong)local_1e8 + uVar20 + 8) ^
               __xmm_6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a._8_8_;
          *(ulonglong *)((longlong)local_1e8 + uVar20 + 0x10) =
               __xmm_6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a._0_8_ ^
               *(ulonglong *)((longlong)local_1e8 + uVar20 + 0x10);
          *(ulonglong *)((longlong)local_1e8 + uVar20 + 0x18) =
               __xmm_6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a._8_8_ ^
               *(ulonglong *)((longlong)local_1e8 + uVar20 + 0x18);
          uVar20 = uVar20 + 0x20;
        } while (uVar20 < _Size);
        iVar12 = EVP_DigestUpdate(lVar23,local_1e8,_Size);
        if (iVar12 < 1) goto LAB_14f6a3766;
        iVar12 = EVP_DigestUpdate(lVar23,&local_228,uVar26);
      }
      else {
        memset(local_1e8,0x5c,local_388);
        iVar12 = EVP_DigestUpdate(lVar23,local_380,param_9);
        if ((iVar12 < 1) || (iVar12 = EVP_DigestUpdate(lVar23,local_1e8,sVar22), iVar12 < 1))
        goto LAB_14f6a3766;
        iVar12 = EVP_DigestUpdate(lVar23,&local_228,uVar26);
      }
      if (0 < iVar12) {
        iVar12 = EVP_DigestFinal(lVar23,local_330,local_3a0);
        if ((iVar12 != 0) && (local_328 != (ulonglong *)0x0)) {
          *local_328 = (ulonglong)local_3a0[0];
        }
        EVP_MD_CTX_free(lVar23);
        return 1;
      }
    }
  }
LAB_14f6a3766:
  EVP_MD_CTX_free(lVar23);
  return 0;
}

// ssl3_cbc_record_digest_supported @ 14f6a3860

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_cbc_record_digest_supported(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = EVP_MD_CTX_md();
  iVar1 = EVP_MD_type(uVar2);
  if ((iVar1 != 4) && (iVar1 != 0x40)) {
    if (3 < iVar1 - 0x2a0U) {
      return 0;
    }
  }
  return 1;
}

// FUN_14f6a39d0 @ 14f6a39d0

void FUN_14f6a39d0(undefined1 *param_1,undefined1 *param_2)

{
  *param_2 = param_1[3];
  param_2[1] = param_1[2];
  param_2[2] = param_1[1];
  param_2[3] = *param_1;
  param_2[4] = param_1[7];
  param_2[5] = param_1[6];
  param_2[6] = param_1[5];
  param_2[7] = param_1[4];
  param_2[8] = param_1[0xb];
  param_2[9] = param_1[10];
  param_2[10] = param_1[9];
  param_2[0xb] = param_1[8];
  param_2[0xc] = param_1[0xf];
  param_2[0xd] = param_1[0xe];
  param_2[0xe] = param_1[0xd];
  param_2[0xf] = param_1[0xc];
  param_2[0x10] = param_1[0x13];
  param_2[0x11] = param_1[0x12];
  param_2[0x12] = param_1[0x11];
  param_2[0x13] = param_1[0x10];
  param_2[0x14] = param_1[0x17];
  param_2[0x15] = param_1[0x16];
  param_2[0x16] = param_1[0x15];
  param_2[0x17] = param_1[0x14];
  param_2[0x18] = param_1[0x1b];
  param_2[0x19] = param_1[0x1a];
  param_2[0x1a] = param_1[0x19];
  param_2[0x1b] = param_1[0x18];
  param_2[0x1c] = param_1[0x1f];
  param_2[0x1d] = param_1[0x1e];
  param_2[0x1e] = param_1[0x1d];
  param_2[0x1f] = param_1[0x1c];
  return;
}

