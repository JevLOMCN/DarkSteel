// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// FUN_14f6d9ad0 @ 14f6d9ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f6d9ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  
  lVar4 = EVP_CIPHER_CTX_get_cipher_data();
  iVar2 = EVP_CIPHER_CTX_key_length(param_1);
  if (param_4 == 0) {
    uVar3 = aesni_set_decrypt_key(param_2,iVar2 << 3,lVar4);
  }
  else {
    uVar3 = aesni_set_encrypt_key();
  }
  puVar1 = (undefined8 *)(lVar4 + 0xf4);
  SHA1_Init(puVar1);
  *(undefined8 *)(lVar4 + 0x154) = *puVar1;
  *(undefined8 *)(lVar4 + 0x15c) = *(undefined8 *)(lVar4 + 0xfc);
  *(undefined8 *)(lVar4 + 0x218) = 0xffffffffffffffff;
  *(undefined8 *)(lVar4 + 0x164) = *(undefined8 *)(lVar4 + 0x104);
  *(undefined8 *)(lVar4 + 0x16c) = *(undefined8 *)(lVar4 + 0x10c);
  *(undefined8 *)(lVar4 + 0x174) = *(undefined8 *)(lVar4 + 0x114);
  *(undefined8 *)(lVar4 + 0x17c) = *(undefined8 *)(lVar4 + 0x11c);
  *(undefined8 *)(lVar4 + 0x184) = *(undefined8 *)(lVar4 + 0x124);
  *(undefined8 *)(lVar4 + 0x18c) = *(undefined8 *)(lVar4 + 300);
  *(undefined8 *)(lVar4 + 0x194) = *(undefined8 *)(lVar4 + 0x134);
  *(undefined8 *)(lVar4 + 0x19c) = *(undefined8 *)(lVar4 + 0x13c);
  *(undefined8 *)(lVar4 + 0x1a4) = *(undefined8 *)(lVar4 + 0x144);
  *(undefined8 *)(lVar4 + 0x1ac) = *(undefined8 *)(lVar4 + 0x14c);
  *(undefined8 *)(lVar4 + 0x1b4) = *puVar1;
  *(undefined8 *)(lVar4 + 0x1bc) = *(undefined8 *)(lVar4 + 0xfc);
  *(undefined8 *)(lVar4 + 0x1c4) = *(undefined8 *)(lVar4 + 0x104);
  *(undefined8 *)(lVar4 + 0x1cc) = *(undefined8 *)(lVar4 + 0x10c);
  *(undefined8 *)(lVar4 + 0x1d4) = *(undefined8 *)(lVar4 + 0x114);
  *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0x11c);
  *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x124);
  *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 300);
  *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x134);
  *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x13c);
  *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x144);
  *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 0x14c);
  return ~uVar3 >> 0x1f;
}

// FUN_14f6d9bf0 @ 14f6d9bf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_14f6d9bf0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined4 *puVar10;
  byte bVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  char *pcVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong local_c8;
  undefined8 local_c0;
  uint local_b8;
  ulonglong local_b0;
  undefined4 *local_a8;
  longlong local_a0;
  longlong local_98;
  uint local_80 [10];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f6d9c07;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_c0 = param_1;
  local_a8 = param_3;
  lVar9 = EVP_CIPHER_CTX_get_cipher_data();
  uVar14 = 0;
  local_b0 = 0;
  uVar16 = 0;
  uVar21 = (ulonglong)(0x40 - *(int *)(lVar9 + 0x210));
  uVar22 = *(ulonglong *)(lVar9 + 0x218);
  *(undefined8 *)(lVar9 + 0x218) = 0xffffffffffffffff;
  if ((param_4 & 0xf) != 0) {
    return 0;
  }
  iVar7 = EVP_CIPHER_CTX_encrypting(local_c0);
  if (iVar7 == 0) {
    if (uVar22 != 0xffffffffffffffff) {
      puVar1 = (undefined8 *)(lVar9 + 0x1d0);
      if (CONCAT11(*(undefined1 *)(uVar22 + 0x21c + lVar9),*(undefined1 *)(uVar22 + 0x21d + lVar9))
          < 0x302) {
        if (0x14 < param_4) goto LAB_14f6d9eff;
      }
      else if (0x24 < param_4) {
        puVar10 = (undefined4 *)EVP_CIPHER_CTX_iv_noconst(local_c0);
        uVar3 = *param_3;
        uVar4 = param_3[1];
        uVar5 = param_3[2];
        uVar6 = param_3[3];
        param_3 = param_3 + 4;
        param_2 = param_2 + 4;
        param_4 = param_4 - 0x10;
        *puVar10 = uVar3;
        puVar10[1] = uVar4;
        puVar10[2] = uVar5;
        puVar10[3] = uVar6;
LAB_14f6d9eff:
        local_e8 = EVP_CIPHER_CTX_iv_noconst(local_c0);
        local_e0 = (ulonglong)local_e0._4_4_ << 0x20;
        aesni_cbc_encrypt(param_3,param_2,param_4,lVar9);
        bVar11 = *(byte *)((param_4 - 1) + (longlong)param_2);
        uVar8 = (int)param_4 - 0x15;
        uVar15 = 0xff - uVar8 >> 0x18 | uVar8 & 0xff;
        local_b0 = CONCAT44(local_b0._4_4_,uVar15);
        uVar8 = 0xffffffff -
                ((int)((uVar15 - bVar11 ^ (uint)bVar11 | uVar15 ^ bVar11) ^ uVar15) >> 0x1f);
        local_c0 = CONCAT44(local_c0._4_4_,uVar8) & 0xffffffff00000001;
        local_b8 = uVar8 & bVar11 | ~uVar8 & uVar15;
        lVar17 = param_4 - (local_b8 + 0x15);
        *(char *)(uVar22 + 0x21f + lVar9) = (char)lVar17;
        *(char *)(uVar22 + 0x21e + lVar9) = (char)((ulonglong)lVar17 >> 8);
        *(undefined8 *)(lVar9 + 0x1b4) = *(undefined8 *)(lVar9 + 0xf4);
        *(undefined8 *)(lVar9 + 0x1bc) = *(undefined8 *)(lVar9 + 0xfc);
        *(undefined8 *)(lVar9 + 0x1c4) = *(undefined8 *)(lVar9 + 0x104);
        *(undefined8 *)(lVar9 + 0x1cc) = *(undefined8 *)(lVar9 + 0x10c);
        *(undefined8 *)(lVar9 + 0x1d4) = *(undefined8 *)(lVar9 + 0x114);
        *(undefined8 *)(lVar9 + 0x1dc) = *(undefined8 *)(lVar9 + 0x11c);
        *(undefined8 *)(lVar9 + 0x1e4) = *(undefined8 *)(lVar9 + 0x124);
        *(undefined8 *)(lVar9 + 0x1ec) = *(undefined8 *)(lVar9 + 300);
        *(undefined4 *)(lVar9 + 500) = *(undefined4 *)(lVar9 + 0x134);
        *(undefined4 *)(lVar9 + 0x1f8) = *(undefined4 *)(lVar9 + 0x138);
        *(undefined4 *)(lVar9 + 0x1fc) = *(undefined4 *)(lVar9 + 0x13c);
        *(undefined4 *)(lVar9 + 0x200) = *(undefined4 *)(lVar9 + 0x140);
        *(undefined4 *)(lVar9 + 0x204) = *(undefined4 *)(lVar9 + 0x144);
        *(undefined4 *)(lVar9 + 0x208) = *(undefined4 *)(lVar9 + 0x148);
        *(undefined4 *)(lVar9 + 0x20c) = *(undefined4 *)(lVar9 + 0x14c);
        *(undefined4 *)(lVar9 + 0x210) = *(undefined4 *)(lVar9 + 0x150);
        local_c8 = lVar17;
        FUN_14f6daa40((undefined8 *)(lVar9 + 0x1b4),lVar9 + 0x220,uVar22);
        uVar22 = param_4 - 0x14;
        if (0x13f < uVar22) {
          lVar17 = (ulonglong)(0x40 - *(int *)(lVar9 + 0x210)) +
                   (param_4 - 0x154 & 0xffffffffffffffc0);
          FUN_14f6daa40(lVar9 + 0x1b4,param_2,lVar17);
          param_2 = (undefined4 *)((longlong)param_2 + lVar17);
          uVar22 = uVar22 - lVar17;
          lVar17 = local_c8 - lVar17;
          local_c8 = lVar17;
        }
        uVar8 = *(uint *)(lVar9 + 0x210);
        uVar15 = (int)lVar17 * 8 + *(int *)(lVar9 + 0x1c8);
        local_80[0] = 0;
        local_80[1] = 0;
        local_80[2] = 0;
        local_80[3] = 0;
        local_80[4] = 0;
        uVar15 = uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 |
                 uVar15 * 0x1000000;
        puVar10 = (undefined4 *)(ulonglong)uVar15;
        uVar21 = uVar14;
        local_a8 = puVar10;
        if (uVar22 != 0) {
          local_a0 = (-0x48 - (longlong)param_2) - lVar17;
          local_98 = -((longlong)param_2 + lVar17);
          do {
            bVar11 = (byte)((ulonglong)((byte *)((longlong)param_2 + uVar21) + local_98) >> 0x38);
            uVar15 = uVar8 + 1;
            *(byte *)((ulonglong)uVar8 + (longlong)puVar1) =
                 ~(byte)(lVar17 - uVar21 >> 0x38) & ~bVar11 & 0x80 |
                 bVar11 & *(byte *)((longlong)param_2 + uVar21);
            uVar8 = uVar15;
            if (uVar15 == 0x40) {
              uVar8 = (uint)((lVar17 - uVar21) + 7 >> 0x20);
              *(uint *)(lVar9 + 0x20c) =
                   *(uint *)(lVar9 + 0x20c) | (uint)puVar10 & (int)uVar8 >> 0x1f;
              sha1_block_data_order(lVar9 + 0x1b4,puVar1,1);
              uVar8 = (int)(uVar8 & (uint)((longlong)param_2 + local_a0 + uVar21 >> 0x20)) >> 0x1f;
              local_80[0] = local_80[0] | *(uint *)(lVar9 + 0x1b4) & uVar8;
              local_80[1] = local_80[1] | *(uint *)(lVar9 + 0x1b8) & uVar8;
              local_80[2] = local_80[2] | *(uint *)(lVar9 + 0x1bc) & uVar8;
              local_80[3] = local_80[3] | *(uint *)(lVar9 + 0x1c0) & uVar8;
              local_80[4] = local_80[4] | *(uint *)(lVar9 + 0x1c4) & uVar8;
              puVar10 = local_a8;
              uVar8 = uVar16;
            }
            uVar15 = (uint)puVar10;
            uVar21 = uVar21 + 1;
            lVar17 = local_c8;
          } while (uVar21 < uVar22);
        }
        uVar12 = (ulonglong)uVar8;
        if (uVar12 < 0x40) {
          lVar17 = 0x40 - uVar12;
          uVar21 = uVar21 + lVar17;
          puVar19 = (undefined1 *)(uVar12 + (longlong)puVar1);
          for (; lVar17 != 0; lVar17 = lVar17 + -1) {
            *puVar19 = 0;
            puVar19 = puVar19 + 1;
          }
        }
        if (0x38 < uVar8) {
          uVar8 = (uint)((local_c8 - uVar21) + 8 >> 0x20);
          *(uint *)(lVar9 + 0x20c) = *(uint *)(lVar9 + 0x20c) | uVar15 & (int)uVar8 >> 0x1f;
          sha1_block_data_order(lVar9 + 0x1b4,puVar1,1);
          uVar8 = (int)(uVar8 & (uint)((uVar21 - local_c8) + -0x49 >> 0x20)) >> 0x1f;
          local_80[0] = local_80[0] | *(uint *)(lVar9 + 0x1b4) & uVar8;
          local_80[1] = local_80[1] | *(uint *)(lVar9 + 0x1b8) & uVar8;
          local_80[2] = local_80[2] | *(uint *)(lVar9 + 0x1bc) & uVar8;
          local_80[3] = local_80[3] | *(uint *)(lVar9 + 0x1c0) & uVar8;
          local_80[4] = local_80[4] | *(uint *)(lVar9 + 0x1c4) & uVar8;
          *puVar1 = 0;
          uVar21 = uVar21 + 0x40;
          *(undefined8 *)(lVar9 + 0x1d8) = 0;
          *(undefined8 *)(lVar9 + 0x1e0) = 0;
          *(undefined8 *)(lVar9 + 0x1e8) = 0;
          *(undefined8 *)(lVar9 + 0x1f0) = 0;
          *(undefined8 *)(lVar9 + 0x1f8) = 0;
          *(undefined8 *)(lVar9 + 0x200) = 0;
          *(undefined8 *)(lVar9 + 0x208) = 0;
        }
        *(int *)(lVar9 + 0x20c) = (int)local_a8;
        puVar2 = (uint *)(lVar9 + 0x1b4);
        sha1_block_data_order(puVar2,puVar1,1);
        lVar17 = local_c8;
        uVar8 = (uint)((longlong)((uVar21 - local_c8) + -0x49) >> 0x3f);
        local_80[0] = *puVar2 & uVar8 | local_80[0];
        local_80[1] = *(uint *)(lVar9 + 0x1b8) & uVar8 | local_80[1];
        local_80[1] = local_80[1] >> 0x18 | (local_80[1] & 0xff0000) >> 8 |
                      (local_80[1] & 0xff00) << 8 | local_80[1] << 0x18;
        local_80[0] = local_80[0] >> 0x18 | (local_80[0] & 0xff0000) >> 8 |
                      (local_80[0] & 0xff00) << 8 | local_80[0] << 0x18;
        local_80[2] = *(uint *)(lVar9 + 0x1bc) & uVar8 | local_80[2];
        local_80[3] = *(uint *)(lVar9 + 0x1c0) & uVar8 | local_80[3];
        local_80[3] = local_80[3] >> 0x18 | (local_80[3] & 0xff0000) >> 8 |
                      (local_80[3] & 0xff00) << 8 | local_80[3] << 0x18;
        local_80[2] = local_80[2] >> 0x18 | (local_80[2] & 0xff0000) >> 8 |
                      (local_80[2] & 0xff00) << 8 | local_80[2] << 0x18;
        *(undefined8 *)puVar2 = *(undefined8 *)(lVar9 + 0x154);
        *(undefined8 *)(lVar9 + 0x1bc) = *(undefined8 *)(lVar9 + 0x15c);
        local_80[4] = *(uint *)(lVar9 + 0x1c4) & uVar8 | local_80[4];
        *(undefined8 *)(lVar9 + 0x1c4) = *(undefined8 *)(lVar9 + 0x164);
        *(undefined8 *)(lVar9 + 0x1cc) = *(undefined8 *)(lVar9 + 0x16c);
        local_80[4] = local_80[4] >> 0x18 | (local_80[4] & 0xff0000) >> 8 |
                      (local_80[4] & 0xff00) << 8 | local_80[4] << 0x18;
        *(undefined8 *)(lVar9 + 0x1d4) = *(undefined8 *)(lVar9 + 0x174);
        *(undefined8 *)(lVar9 + 0x1dc) = *(undefined8 *)(lVar9 + 0x17c);
        *(undefined8 *)(lVar9 + 0x1e4) = *(undefined8 *)(lVar9 + 0x184);
        *(undefined8 *)(lVar9 + 0x1ec) = *(undefined8 *)(lVar9 + 0x18c);
        *(undefined4 *)(lVar9 + 500) = *(undefined4 *)(lVar9 + 0x194);
        *(undefined4 *)(lVar9 + 0x1f8) = *(undefined4 *)(lVar9 + 0x198);
        *(undefined4 *)(lVar9 + 0x1fc) = *(undefined4 *)(lVar9 + 0x19c);
        *(undefined4 *)(lVar9 + 0x200) = *(undefined4 *)(lVar9 + 0x1a0);
        *(undefined4 *)(lVar9 + 0x204) = *(undefined4 *)(lVar9 + 0x1a4);
        *(undefined4 *)(lVar9 + 0x208) = *(undefined4 *)(lVar9 + 0x1a8);
        *(undefined4 *)(lVar9 + 0x20c) = *(undefined4 *)(lVar9 + 0x1ac);
        *(undefined4 *)(lVar9 + 0x210) = *(undefined4 *)(lVar9 + 0x1b0);
        FUN_14f6daa40(puVar2,local_80,0x14);
        SHA1_Final(local_80,puVar2);
        lVar23 = (longlong)param_2 + lVar17;
        lVar9 = lVar23 + -1 + ((uVar22 - (local_b0 & 0xffffffff)) - lVar17);
        iVar7 = (int)lVar23 - (int)lVar9;
        uVar22 = uVar14;
        uVar21 = uVar14;
        if ((int)local_b0 + 0x14U != 0) {
          do {
            bVar11 = *(byte *)(lVar9 + uVar22);
            uVar16 = ((int)uVar22 - iVar7) - 0x14;
            uVar12 = uVar22 + 1;
            uVar8 = (int)(uVar16 & (iVar7 - (int)uVar22) - 1U) >> 0x1f;
            uVar16 = (uint)uVar14 | (bVar11 ^ local_b8) & ~((int)uVar16 >> 0x1f) |
                     (*(byte *)(uVar21 + (longlong)local_80) ^ bVar11) & uVar8;
            uVar14 = (ulonglong)uVar16;
            uVar22 = uVar12;
            uVar21 = uVar21 + (uVar8 & 1);
          } while (uVar12 < (int)local_b0 + 0x14U);
        }
        return 0xffffffffU - ((int)-uVar16 >> 0x1f) & (uint)local_c0;
      }
      return 0;
    }
    local_e8 = EVP_CIPHER_CTX_iv_noconst(local_c0);
    local_e0 = local_e0 & 0xffffffff00000000;
    aesni_cbc_encrypt(param_3,param_2,param_4,lVar9);
    FUN_14f6daa40(lVar9 + 0x1b4,param_2,param_4);
  }
  else {
    uVar12 = uVar14;
    uVar20 = param_4;
    if (uVar22 != 0xffffffffffffffff) {
      if (param_4 != (uVar22 + 0x24 & 0xfffffffffffffff0)) {
        return 0;
      }
      uVar20 = uVar22;
      local_b0 = uVar14;
      if (0x301 < *(uint *)(lVar9 + 0x220)) {
        local_b0 = 0x10;
        uVar12 = local_b0;
      }
    }
    uVar22 = uVar14;
    if (uVar12 + uVar21 < uVar20) {
      uVar12 = (uVar20 - uVar21) - local_b0;
      uVar13 = uVar12 >> 6;
      if (uVar13 != 0) {
        FUN_14f6daa40(lVar9 + 0x1b4U,(longlong)param_3 + local_b0,uVar21);
        lVar17 = (longlong)param_3 + local_b0 + uVar21;
        local_e8 = EVP_CIPHER_CTX_iv_noconst(local_c0);
        param_3 = local_a8;
        local_e0 = lVar9 + 0x1b4U;
        local_d8 = lVar17;
        aesni_cbc_sha1_enc(local_a8,param_2,uVar13,lVar9);
        uVar14 = uVar13 * 0x40;
        iVar7 = (int)(uVar12 >> 0x1d) + *(int *)(lVar9 + 0x1cc);
        uVar16 = (uint)(uVar13 << 9);
        *(int *)(lVar9 + 0x1c8) = *(int *)(lVar9 + 0x1c8) + uVar16;
        *(int *)(lVar9 + 0x1cc) = iVar7;
        uVar22 = uVar21 + uVar14;
        if (*(uint *)(lVar9 + 0x1c8) < uVar16) {
          *(int *)(lVar9 + 0x1cc) = iVar7 + 1;
        }
      }
    }
    puVar1 = (undefined8 *)(lVar9 + 0x1b4);
    FUN_14f6daa40(puVar1,(longlong)param_3 + uVar22 + local_b0,uVar20 - (uVar22 + local_b0));
    if (uVar20 == param_4) {
      local_e8 = EVP_CIPHER_CTX_iv_noconst(local_c0);
      local_e0 = CONCAT44(local_e0._4_4_,1);
      aesni_cbc_encrypt((longlong)param_3 + uVar14,(longlong)param_2 + uVar14,param_4 - uVar14,lVar9
                       );
    }
    else {
      if (param_3 != param_2) {
        memcpy((void *)((longlong)param_2 + uVar14),(void *)((longlong)param_3 + uVar14),
               uVar20 - uVar14);
      }
      lVar17 = (longlong)param_2 + uVar20;
      SHA1_Final(lVar17,puVar1);
      *puVar1 = *(undefined8 *)(lVar9 + 0x154);
      *(undefined8 *)(lVar9 + 0x1bc) = *(undefined8 *)(lVar9 + 0x15c);
      *(undefined8 *)(lVar9 + 0x1c4) = *(undefined8 *)(lVar9 + 0x164);
      *(undefined8 *)(lVar9 + 0x1cc) = *(undefined8 *)(lVar9 + 0x16c);
      *(undefined8 *)(lVar9 + 0x1d4) = *(undefined8 *)(lVar9 + 0x174);
      *(undefined8 *)(lVar9 + 0x1dc) = *(undefined8 *)(lVar9 + 0x17c);
      *(undefined8 *)(lVar9 + 0x1e4) = *(undefined8 *)(lVar9 + 0x184);
      *(undefined8 *)(lVar9 + 0x1ec) = *(undefined8 *)(lVar9 + 0x18c);
      *(undefined4 *)(lVar9 + 500) = *(undefined4 *)(lVar9 + 0x194);
      *(undefined4 *)(lVar9 + 0x1f8) = *(undefined4 *)(lVar9 + 0x198);
      *(undefined4 *)(lVar9 + 0x1fc) = *(undefined4 *)(lVar9 + 0x19c);
      *(undefined4 *)(lVar9 + 0x200) = *(undefined4 *)(lVar9 + 0x1a0);
      *(undefined4 *)(lVar9 + 0x204) = *(undefined4 *)(lVar9 + 0x1a4);
      *(undefined4 *)(lVar9 + 0x208) = *(undefined4 *)(lVar9 + 0x1a8);
      *(undefined4 *)(lVar9 + 0x20c) = *(undefined4 *)(lVar9 + 0x1ac);
      *(undefined4 *)(lVar9 + 0x210) = *(undefined4 *)(lVar9 + 0x1b0);
      FUN_14f6daa40(puVar1,lVar17,0x14);
      SHA1_Final(lVar17,puVar1);
      uVar20 = uVar20 + 0x14;
      if (uVar20 < param_4) {
        pcVar18 = (char *)((longlong)param_2 + uVar20);
        for (lVar17 = param_4 - uVar20; lVar17 != 0; lVar17 = lVar17 + -1) {
          *pcVar18 = ((char)param_4 - (char)uVar20) + -1;
          pcVar18 = pcVar18 + 1;
        }
      }
      local_e8 = EVP_CIPHER_CTX_iv_noconst(local_c0);
      local_e0 = CONCAT44(local_e0._4_4_,1);
      aesni_cbc_encrypt((longlong)param_2 + uVar14,(longlong)param_2 + uVar14,param_4 - uVar14,lVar9
                       );
    }
  }
  return 1;
}

// FUN_14f6da400 @ 14f6da400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14f6da400(undefined8 param_1,int param_2,int param_3,undefined8 *param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  undefined1 auStack_b8 [32];
  uint local_98;
  ulonglong local_88 [10];
  
  local_88[8] = __security_cookie.value ^ (ulonglong)auStack_b8;
  lVar5 = EVP_CIPHER_CTX_get_cipher_data();
  if (param_2 == 0x16) {
    if (param_3 != 0xd) {
      return 0xffffffff;
    }
    uVar2 = (uint)CONCAT11(*(undefined1 *)((longlong)param_4 + 0xb),
                           *(undefined1 *)((longlong)param_4 + 0xc));
    iVar3 = EVP_CIPHER_CTX_encrypting(param_1);
    if (iVar3 != 0) {
      *(ulonglong *)(lVar5 + 0x218) = (ulonglong)uVar2;
      uVar4 = (uint)CONCAT11(*(undefined1 *)((longlong)param_4 + 9),
                             *(undefined1 *)((longlong)param_4 + 10));
      *(uint *)(lVar5 + 0x220) = uVar4;
      if (0x301 < uVar4) {
        if (uVar2 < 0x10) {
          return 0;
        }
        uVar2 = uVar2 - 0x10;
        *(char *)((longlong)param_4 + 0xc) = (char)uVar2;
        *(char *)((longlong)param_4 + 0xb) = (char)(uVar2 >> 8);
      }
      *(undefined8 *)(lVar5 + 0x1b4) = *(undefined8 *)(lVar5 + 0xf4);
      *(undefined8 *)(lVar5 + 0x1bc) = *(undefined8 *)(lVar5 + 0xfc);
      *(undefined8 *)(lVar5 + 0x1c4) = *(undefined8 *)(lVar5 + 0x104);
      *(undefined8 *)(lVar5 + 0x1cc) = *(undefined8 *)(lVar5 + 0x10c);
      *(undefined8 *)(lVar5 + 0x1d4) = *(undefined8 *)(lVar5 + 0x114);
      *(undefined8 *)(lVar5 + 0x1dc) = *(undefined8 *)(lVar5 + 0x11c);
      *(undefined8 *)(lVar5 + 0x1e4) = *(undefined8 *)(lVar5 + 0x124);
      *(undefined8 *)(lVar5 + 0x1ec) = *(undefined8 *)(lVar5 + 300);
      *(undefined8 *)(lVar5 + 500) = *(undefined8 *)(lVar5 + 0x134);
      *(undefined8 *)(lVar5 + 0x1fc) = *(undefined8 *)(lVar5 + 0x13c);
      *(undefined8 *)(lVar5 + 0x204) = *(undefined8 *)(lVar5 + 0x144);
      *(undefined8 *)(lVar5 + 0x20c) = *(undefined8 *)(lVar5 + 0x14c);
      FUN_14f6daa40((undefined8 *)(lVar5 + 0x1b4),param_4,0xd);
      return (ulonglong)((uVar2 + 0x24 & 0xfffffff0) - uVar2);
    }
    *(undefined8 *)(lVar5 + 0x220) = *param_4;
    *(undefined4 *)(lVar5 + 0x228) = *(undefined4 *)(param_4 + 1);
    *(undefined1 *)(lVar5 + 0x22c) = *(undefined1 *)((longlong)param_4 + 0xc);
    *(undefined8 *)(lVar5 + 0x218) = 0xd;
    return 0x14;
  }
  if (param_2 == 0x17) {
    local_88[0] = 0;
    local_88[1] = 0;
    local_88[2] = 0;
    local_88[3] = 0;
    local_88[4] = 0;
    local_88[5] = 0;
    local_88[6] = 0;
    local_88[7] = 0;
    if (param_3 < 0x41) {
      memcpy(local_88,param_4,(longlong)param_3);
    }
    else {
      SHA1_Init(lVar5 + 0xf4);
      FUN_14f6daa40(lVar5 + 0xf4,param_4,(longlong)param_3);
      SHA1_Final(local_88,lVar5 + 0xf4);
    }
    lVar10 = 2;
    lVar8 = 2;
    puVar13 = local_88;
    do {
      *puVar13 = ___xmm_36363636363636363636363636363636 ^ *puVar13;
      puVar13[1] = _UNK_1506bff78 ^ puVar13[1];
      puVar13[2] = ___xmm_36363636363636363636363636363636 ^ puVar13[2];
      puVar13[3] = _UNK_1506bff78 ^ puVar13[3];
      lVar8 = lVar8 + -1;
      puVar13 = puVar13 + 4;
    } while (lVar8 != 0);
    lVar8 = lVar5 + 0xf4;
    SHA1_Init(lVar8);
    puVar13 = local_88;
    lVar11 = 0x40;
    if ((ulonglong)*(uint *)(lVar5 + 0x150) != 0) {
      uVar6 = 0x40 - (ulonglong)*(uint *)(lVar5 + 0x150);
      if (0x40 < uVar6) {
        uVar6 = 0x40;
      }
      SHA1_Update(lVar8,local_88,uVar6);
      puVar13 = (ulonglong *)((longlong)local_88 + uVar6);
      lVar11 = 0x40 - uVar6;
    }
    uVar6 = (ulonglong)((uint)lVar11 & 0x3f);
    uVar12 = lVar11 - uVar6;
    if (uVar12 != 0) {
      sha1_block_data_order(lVar8,puVar13,uVar12 >> 6);
      puVar13 = (ulonglong *)((longlong)puVar13 + uVar12);
      iVar3 = (int)(uVar12 >> 0x1d) + *(int *)(lVar5 + 0x10c);
      uVar2 = (int)uVar12 * 8;
      *(int *)(lVar5 + 0x108) = *(int *)(lVar5 + 0x108) + uVar2;
      *(int *)(lVar5 + 0x10c) = iVar3;
      if (*(uint *)(lVar5 + 0x108) < uVar2) {
        *(int *)(lVar5 + 0x10c) = iVar3 + 1;
      }
    }
    if (uVar6 != 0) {
      SHA1_Update(lVar8,puVar13,uVar6);
    }
    puVar13 = local_88;
    do {
      *puVar13 = __xmm_6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a._0_8_ ^ *puVar13;
      puVar13[1] = __xmm_6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a._8_8_ ^ puVar13[1];
      puVar13[2] = __xmm_6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a._0_8_ ^ puVar13[2];
      puVar13[3] = __xmm_6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a._8_8_ ^ puVar13[3];
      lVar10 = lVar10 + -1;
      puVar13 = puVar13 + 4;
    } while (lVar10 != 0);
    lVar8 = lVar5 + 0x154;
    SHA1_Init(lVar8);
    puVar13 = local_88;
    lVar10 = 0x40;
    if ((ulonglong)*(uint *)(lVar5 + 0x1b0) != 0) {
      uVar6 = 0x40 - (ulonglong)*(uint *)(lVar5 + 0x1b0);
      if (0x40 < uVar6) {
        uVar6 = 0x40;
      }
      SHA1_Update(lVar8,local_88,uVar6);
      puVar13 = (ulonglong *)((longlong)local_88 + uVar6);
      lVar10 = 0x40 - uVar6;
    }
    uVar6 = (ulonglong)((uint)lVar10 & 0x3f);
    uVar12 = lVar10 - uVar6;
    if (uVar12 != 0) {
      sha1_block_data_order(lVar8,puVar13,uVar12 >> 6);
      puVar13 = (ulonglong *)((longlong)puVar13 + uVar12);
      iVar3 = (int)(uVar12 >> 0x1d) + *(int *)(lVar5 + 0x16c);
      uVar2 = (int)uVar12 * 8;
      *(int *)(lVar5 + 0x168) = *(int *)(lVar5 + 0x168) + uVar2;
      *(int *)(lVar5 + 0x16c) = iVar3;
      if (*(uint *)(lVar5 + 0x168) < uVar2) {
        *(int *)(lVar5 + 0x16c) = iVar3 + 1;
      }
    }
    if (uVar6 != 0) {
      SHA1_Update(lVar8,puVar13,uVar6);
    }
    OPENSSL_cleanse(local_88,0x40);
    return 1;
  }
  if (param_2 == 0x19) {
    if (0x1f < param_3) {
      uVar1 = CONCAT11(*(undefined1 *)(param_4[1] + 0xb),*(undefined1 *)(param_4[1] + 0xc));
      uVar2 = (uint)uVar1;
      iVar3 = EVP_CIPHER_CTX_encrypting(param_1);
      if ((iVar3 != 0) &&
         (0x301 < CONCAT11(*(undefined1 *)(param_4[1] + 9),*(undefined1 *)(param_4[1] + 10)))) {
        if (uVar1 == 0) {
          uVar4 = *(uint *)(param_4 + 3) >> 2;
          if (1 < uVar4 - 1) {
            return 0xffffffff;
          }
          uVar2 = *(uint *)(param_4 + 2);
        }
        else {
          if (uVar2 < 0x1000) {
            return 0;
          }
          uVar4 = 1;
          if ((0x1fff < uVar2) && (uVar4 = 1, (DAT_15540a9f8 & 0x20) != 0)) {
            uVar4 = 2;
          }
        }
        *(undefined8 *)(lVar5 + 0x1b4) = *(undefined8 *)(lVar5 + 0xf4);
        *(undefined8 *)(lVar5 + 0x1bc) = *(undefined8 *)(lVar5 + 0xfc);
        *(undefined8 *)(lVar5 + 0x1c4) = *(undefined8 *)(lVar5 + 0x104);
        *(undefined8 *)(lVar5 + 0x1cc) = *(undefined8 *)(lVar5 + 0x10c);
        *(undefined8 *)(lVar5 + 0x1d4) = *(undefined8 *)(lVar5 + 0x114);
        *(undefined8 *)(lVar5 + 0x1dc) = *(undefined8 *)(lVar5 + 0x11c);
        *(undefined8 *)(lVar5 + 0x1e4) = *(undefined8 *)(lVar5 + 0x124);
        *(undefined8 *)(lVar5 + 0x1ec) = *(undefined8 *)(lVar5 + 300);
        *(undefined8 *)(lVar5 + 500) = *(undefined8 *)(lVar5 + 0x134);
        *(undefined8 *)(lVar5 + 0x1fc) = *(undefined8 *)(lVar5 + 0x13c);
        *(undefined8 *)(lVar5 + 0x204) = *(undefined8 *)(lVar5 + 0x144);
        *(undefined8 *)(lVar5 + 0x20c) = *(undefined8 *)(lVar5 + 0x14c);
        FUN_14f6daa40((undefined8 *)(lVar5 + 0x1b4),param_4[1],0xd);
        bVar7 = (char)uVar4 + 1;
        uVar9 = uVar2 >> (bVar7 & 0x1f);
        uVar2 = (uVar9 - (uVar9 << (bVar7 & 0x1f))) + uVar2;
        if ((uVar9 < uVar2) && ((uVar2 + 0x16 & 0x3f) < uVar4 * 4 - 1)) {
          uVar9 = uVar9 + 1;
          uVar2 = uVar2 + uVar4 * -4 + 1;
        }
        *(uint *)(param_4 + 3) = uVar4 * 4;
        iVar3 = (uVar9 + 0x24 & 0xfffffff0) + 0x15;
        uVar2 = ((iVar3 << (bVar7 & 0x1f)) + (uVar2 + 0x24 & 0xfffffff0)) - iVar3;
        goto LAB_14f6da473;
      }
    }
  }
  else {
    if (param_2 == 0x1a) {
      local_98 = *(uint *)(param_4 + 3) >> 2;
      uVar6 = FUN_14f6dab00(lVar5,*param_4,param_4[1],param_4[2]);
      return uVar6;
    }
    if (param_2 == 0x1c) {
      uVar2 = param_3 + 0x24U & 0xfffffff0;
LAB_14f6da473:
      return (ulonglong)(uVar2 + 0x15);
    }
  }
  return 0xffffffff;
}

// EVP_aes_128_cbc_hmac_sha1 @ 14f6da970

undefined * EVP_aes_128_cbc_hmac_sha1(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_154df8980;
  }
  return puVar1;
}

// EVP_aes_256_cbc_hmac_sha1 @ 14f6da9a0

undefined * EVP_aes_256_cbc_hmac_sha1(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    puVar1 = &DAT_154df89e0;
  }
  return puVar1;
}

// FUN_14f6daa40 @ 14f6daa40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6daa40(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  
  if ((ulonglong)*(uint *)(param_1 + 0x5c) != 0) {
    uVar1 = 0x40 - (ulonglong)*(uint *)(param_1 + 0x5c);
    if (param_3 < uVar1) {
      uVar1 = param_3;
    }
    SHA1_Update(param_1,param_2,uVar1);
    param_2 = param_2 + uVar1;
    param_3 = param_3 - uVar1;
  }
  uVar1 = (ulonglong)((uint)param_3 & 0x3f);
  param_3 = param_3 - uVar1;
  if (param_3 != 0) {
    sha1_block_data_order(param_1,param_2,param_3 >> 6);
    param_2 = param_2 + param_3;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (int)(param_3 >> 0x1d);
    uVar2 = (int)param_3 * 8;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + uVar2;
    if (*(uint *)(param_1 + 0x14) < uVar2) {
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
  }
  if (uVar1 != 0) {
    SHA1_Update(param_1,param_2,uVar1);
  }
  return;
}

// FUN_14f6dab00 @ 14f6dab00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14f6dab00(uint *param_1,undefined1 *param_2,longlong param_3,uint param_4,int param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int iVar10;
  undefined1 **ppuVar11;
  byte bVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  longlong *plVar27;
  longlong *plVar28;
  ulonglong uVar29;
  uint *puVar30;
  longlong lVar31;
  undefined1 auStack_7b8 [32];
  undefined1 local_798;
  undefined1 local_797;
  undefined1 local_796;
  uint local_794;
  uint local_790;
  uint local_78c;
  uint local_788;
  uint local_784;
  uint *local_780;
  undefined1 *local_778;
  uint local_770;
  ulonglong local_768;
  longlong *local_760;
  undefined1 *local_758;
  int local_750;
  uint local_74c;
  longlong local_748;
  uint auStack_740 [2];
  longlong local_738 [14];
  undefined8 local_6c8;
  undefined4 local_6c0 [30];
  longlong local_648;
  undefined1 *local_640;
  undefined4 local_638 [2];
  undefined4 local_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  longlong local_618 [34];
  undefined8 local_508;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  uint auStack_4cc [16];
  uint auStack_48c [225];
  undefined1 local_108 [32];
  undefined1 local_e8 [64];
  uint auStack_a8 [24];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f6dab1d;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_7b8;
  uVar15 = 0;
  local_78c = 0;
  uVar21 = param_5 * 4;
  local_760 = (longlong *)CONCAT44(local_760._4_4_,uVar21);
  local_780 = param_1;
  local_758 = param_2;
  iVar10 = RAND_bytes(&local_508,param_5 << 6);
  if (iVar10 < 1) {
    uVar22 = 0;
  }
  else {
    bVar12 = (char)param_5 + 1;
    local_790 = param_4 >> (bVar12 & 0x1f);
    lVar31 = -(ulonglong)((uint)local_108 & 0x1f);
    local_778 = local_e8 + lVar31;
    uVar23 = (param_4 - (local_790 << (bVar12 & 0x1f))) + local_790;
    local_768 = (ulonglong)uVar23;
    if ((local_790 < uVar23) && ((uVar23 + 0x16 & 0x3f) < uVar21 - 1)) {
      local_790 = local_790 + 1;
      local_768 = (ulonglong)(uVar23 + param_5 * -4 + 1);
    }
    uVar14 = local_768;
    uVar23 = local_790;
    uVar24 = (uint)local_768;
    local_748 = param_3;
    local_648 = param_3;
    local_640 = local_758 + 0x15;
    *(ulonglong *)(local_758 + 5) = local_508;
    *(ulonglong *)(local_758 + 0xd) = CONCAT44(uStack_4fc,uStack_500);
    local_630 = (undefined4)local_508;
    uStack_62c = local_508._4_4_;
    uStack_628 = uStack_500;
    uStack_624 = uStack_4fc;
    if (1 < uVar21) {
      plVar27 = local_738;
      ppuVar11 = &local_640;
      plVar28 = &local_748;
      uVar22 = (ulonglong)(uVar21 - 1);
      plVar16 = local_618;
      puVar25 = &local_4f8;
      do {
        lVar1 = *plVar28;
        uVar3 = *puVar25;
        uVar9 = puVar25[1];
        *plVar27 = lVar1 + (ulonglong)local_790;
        plVar28 = plVar28 + 2;
        plVar16[-1] = lVar1 + (ulonglong)local_790;
        plVar27 = plVar27 + 2;
        puVar13 = *ppuVar11;
        ppuVar11 = ppuVar11 + 5;
        puVar13 = puVar13 + ((local_790 + 0x24 & 0xfffffff0) + 0x15);
        *plVar16 = (longlong)puVar13;
        *(undefined8 *)(puVar13 + -0x10) = uVar3;
        *(undefined8 *)(puVar13 + -8) = uVar9;
        uVar6 = *(undefined4 *)((longlong)puVar25 + 4);
        uVar7 = *(undefined4 *)(puVar25 + 1);
        uVar8 = *(undefined4 *)((longlong)puVar25 + 0xc);
        *(undefined4 *)(plVar16 + 2) = *(undefined4 *)puVar25;
        *(undefined4 *)((longlong)plVar16 + 0x14) = uVar6;
        *(undefined4 *)(plVar16 + 3) = uVar7;
        *(undefined4 *)((longlong)plVar16 + 0x1c) = uVar8;
        uVar22 = uVar22 - 1;
        plVar16 = plVar16 + 5;
        puVar25 = puVar25 + 2;
        param_1 = local_780;
      } while (uVar22 != 0);
    }
    local_508 = *(ulonglong *)(param_1 + 0x74);
    if (uVar21 != 0) {
      local_74c = param_1[0x70];
      puVar30 = (uint *)((longlong)auStack_a8 + lVar31);
      local_794 = param_1[0x6d];
      local_770 = param_1[0x6f];
      local_788 = param_1[0x71];
      local_798 = (undefined1)param_1[0x76];
      local_797 = *(undefined1 *)((longlong)param_1 + 0x1d9);
      local_796 = *(undefined1 *)((longlong)param_1 + 0x1da);
      local_784 = param_1[0x6e];
      puVar25 = &local_508;
      local_750 = uVar21 - 1;
      uVar22 = uVar15;
      puVar17 = &uStack_500;
      uVar26 = local_508 >> 0x38 | (local_508 & 0xff000000000000) >> 0x28 |
               (local_508 & 0xff0000000000) >> 0x18 | (local_508 & 0xff00000000) >> 8 |
               (local_508 & 0xff000000) << 8 | (local_508 & 0xff0000) << 0x18 |
               (local_508 & 0xff00) << 0x28 | local_508 << 0x38;
      uVar29 = uVar15;
      do {
        puVar30[-8] = local_784;
        uVar20 = local_790;
        if ((int)uVar22 == local_750) {
          uVar20 = uVar24;
        }
        puVar30[8] = local_74c;
        uVar19 = (int)uVar22 + 1;
        uVar22 = (ulonglong)uVar19;
        puVar30[0x10] = local_788;
        *(char *)(puVar17 + 1) = (char)uVar20;
        *puVar30 = local_770;
        puVar2 = *(undefined8 **)((longlong)auStack_740 + (uVar29 - 8));
        puVar30[-0x10] = local_794;
        puVar30 = puVar30 + 1;
        *(ulonglong *)(puVar17 + -2) =
             uVar26 >> 0x38 | (uVar26 & 0xff000000000000) >> 0x28 |
             (uVar26 & 0xff0000000000) >> 0x18 | (uVar26 & 0xff00000000) >> 8 |
             (uVar26 & 0xff000000) << 8 | (uVar26 & 0xff0000) << 0x18 | (uVar26 & 0xff00) << 0x28 |
             uVar26 << 0x38;
        *(undefined1 *)puVar17 = local_798;
        *(undefined1 *)((longlong)puVar17 + 1) = local_797;
        *(undefined1 *)((longlong)puVar17 + 2) = local_796;
        *(char *)((longlong)puVar17 + 3) = (char)(uVar20 >> 8);
        uVar3 = puVar2[1];
        *(undefined8 *)((longlong)puVar17 + 5) = *puVar2;
        *(undefined8 *)((longlong)puVar17 + 0xd) = uVar3;
        uVar3 = puVar2[3];
        *(undefined8 *)((longlong)puVar17 + 0x15) = puVar2[2];
        *(undefined8 *)((longlong)puVar17 + 0x1d) = uVar3;
        uVar6 = *(undefined4 *)((longlong)puVar2 + 0x24);
        uVar7 = *(undefined4 *)(puVar2 + 5);
        uVar8 = *(undefined4 *)((longlong)puVar2 + 0x2c);
        *(undefined4 *)((longlong)puVar17 + 0x25) = *(undefined4 *)(puVar2 + 4);
        *(undefined4 *)((longlong)puVar17 + 0x29) = uVar6;
        *(undefined4 *)((longlong)puVar17 + 0x2d) = uVar7;
        *(undefined4 *)((longlong)puVar17 + 0x31) = uVar8;
        *(undefined2 *)((longlong)puVar17 + 0x35) = *(undefined2 *)(puVar2 + 6);
        *(undefined1 *)((longlong)puVar17 + 0x37) = *(undefined1 *)((longlong)puVar2 + 0x32);
        *(longlong *)((longlong)auStack_740 + (uVar29 - 8)) = (longlong)puVar2 + 0x33;
        *(undefined8 **)((longlong)local_6c0 + (uVar29 - 8)) = puVar25;
        puVar25 = puVar25 + 0x10;
        *(uint *)((longlong)auStack_740 + uVar29) = uVar20 - 0x33 >> 6;
        *(undefined4 *)((longlong)local_6c0 + uVar29) = 1;
        puVar17 = puVar17 + 0x20;
        uVar26 = uVar26 + 1;
        uVar29 = uVar29 + 0x10;
        param_1 = local_780;
      } while (uVar19 < uVar21);
    }
    sha1_multi_block(local_778,&local_6c8,param_5);
    puVar13 = local_778;
    if (uVar23 <= uVar24) {
      uVar24 = uVar23;
    }
    uVar20 = uVar24 - 0x33 >> 6;
    uVar24 = local_78c;
    if (0x20 < uVar20) {
      uVar22 = uVar15;
      if (uVar21 != 0) {
        puVar17 = local_638;
        uVar26 = (ulonglong)uVar21;
        uVar14 = uVar15;
        do {
          *(undefined8 *)((longlong)local_6c0 + (uVar14 - 8)) =
               *(undefined8 *)((longlong)auStack_740 + (uVar14 - 8));
          *(undefined4 *)((longlong)local_6c0 + uVar14) = 0x20;
          uVar14 = uVar14 + 0x10;
          *puVar17 = 0x80;
          puVar17 = puVar17 + 10;
          uVar26 = uVar26 - 1;
        } while (uVar26 != 0);
      }
      do {
        sha1_multi_block(puVar13,&local_6c8,param_5);
        aesni_multi_cbc_encrypt(&local_648,param_1,param_5);
        if (uVar21 != 0) {
          uVar26 = (ulonglong)uVar21;
          ppuVar11 = &local_640;
          uVar14 = uVar15;
          do {
            plVar27 = (longlong *)((longlong)auStack_740 + (uVar14 - 8));
            *plVar27 = *plVar27 + 0x800;
            *ppuVar11 = *ppuVar11 + 0x800;
            uVar3 = *(undefined8 *)((longlong)auStack_740 + (uVar14 - 8));
            *(int *)((longlong)auStack_740 + uVar14) =
                 *(int *)((longlong)auStack_740 + uVar14) + -0x20;
            ppuVar11[-1] = ppuVar11[-1] + 0x800;
            *(undefined8 *)((longlong)local_6c0 + (uVar14 - 8)) = uVar3;
            puVar4 = *ppuVar11;
            *(undefined4 *)((longlong)local_6c0 + uVar14) = 0x20;
            uVar14 = uVar14 + 0x10;
            *(undefined4 *)(ppuVar11 + 1) = 0x80;
            uVar6 = *(undefined4 *)(puVar4 + -0xc);
            uVar7 = *(undefined4 *)(puVar4 + -8);
            uVar8 = *(undefined4 *)(puVar4 + -4);
            *(undefined4 *)(ppuVar11 + 2) = *(undefined4 *)(puVar4 + -0x10);
            *(undefined4 *)((longlong)ppuVar11 + 0x14) = uVar6;
            *(undefined4 *)(ppuVar11 + 3) = uVar7;
            *(undefined4 *)((longlong)ppuVar11 + 0x1c) = uVar8;
            uVar26 = uVar26 - 1;
            ppuVar11 = ppuVar11 + 5;
          } while (uVar26 != 0);
        }
        uVar24 = (int)uVar22 + 0x800;
        uVar20 = uVar20 - 0x20;
        uVar14 = local_768;
        uVar22 = (ulonglong)uVar24;
        uVar23 = local_790;
      } while (0x20 < uVar20);
    }
    local_78c = uVar24;
    puVar13 = local_778;
    sha1_multi_block(local_778,&local_748,param_5);
    memset(&local_508,0,0x400);
    local_794 = 0;
    if (uVar21 != 0) {
      lVar31 = 0;
      puVar25 = &local_508;
      uVar22 = uVar15;
      do {
        uVar23 = local_790;
        if ((int)uVar15 == uVar21 - 1) {
          uVar23 = (uint)local_768;
        }
        uVar24 = ((uVar23 + *(int *)((longlong)auStack_740 + lVar31) * -0x40) - local_78c) - 0x33;
        memcpy(puVar25,(void *)((ulonglong)(uint)(*(int *)((longlong)auStack_740 + lVar31) * 0x40) +
                               *(longlong *)((longlong)auStack_740 + lVar31 + -8)),(ulonglong)uVar24
              );
        *(undefined1 *)((longlong)&local_508 + uVar22 + uVar24) = 0x80;
        uVar23 = uVar23 * 8 + 0x268;
        uVar23 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                 uVar23 * 0x1000000;
        if (uVar24 < 0x38) {
          *(uint *)((longlong)auStack_4cc + uVar22) = uVar23;
          *(undefined4 *)((longlong)local_6c0 + lVar31) = 1;
        }
        else {
          *(uint *)((longlong)auStack_48c + uVar22) = uVar23;
          *(undefined4 *)((longlong)local_6c0 + lVar31) = 2;
        }
        *(undefined8 **)((longlong)local_6c0 + lVar31 + -8) = puVar25;
        local_794 = local_794 + 1;
        uVar15 = (ulonglong)local_794;
        puVar25 = puVar25 + 0x10;
        uVar22 = uVar22 + 0x80;
        lVar31 = lVar31 + 0x10;
        puVar13 = local_778;
        uVar14 = local_768;
        param_1 = local_780;
        uVar23 = local_790;
      } while (local_794 < uVar21);
    }
    uVar15 = 0;
    sha1_multi_block(puVar13,&local_6c8,param_5);
    memset(&local_508,0,0x400);
    uVar24 = 0;
    if (uVar21 != 0) {
      local_770 = param_1[0x57];
      puVar17 = local_6c0;
      uVar23 = param_1[0x55];
      uVar24 = param_1[0x56];
      puVar25 = &local_508;
      local_784 = param_1[0x58];
      uVar20 = param_1[0x59];
      uVar22 = (ulonglong)uVar21;
      puVar30 = (uint *)(puVar13 + 0x40);
      puVar18 = (uint *)((longlong)&local_508 + 4);
      do {
        uVar21 = puVar30[-0x10];
        *(undefined8 **)(puVar17 + -2) = puVar25;
        puVar25 = puVar25 + 0x10;
        puVar30[-0x10] = uVar23;
        *(undefined1 *)(puVar18 + 4) = 0x80;
        puVar18[0xe] = 0xa0020000;
        *puVar17 = 1;
        puVar17 = puVar17 + 4;
        puVar18[-1] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
        uVar21 = puVar30[-8];
        puVar30[-8] = uVar24;
        *puVar18 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                   uVar21 << 0x18;
        uVar21 = *puVar30;
        *puVar30 = local_770;
        puVar18[1] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        uVar21 = puVar30[8];
        puVar30[8] = local_784;
        puVar18[2] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        uVar21 = puVar30[0x10];
        puVar30[0x10] = uVar20;
        puVar18[3] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        uVar22 = uVar22 - 1;
        puVar30 = puVar30 + 1;
        puVar18 = puVar18 + 0x20;
      } while (uVar22 != 0);
      param_1 = local_780;
      uVar23 = local_790;
      uVar24 = (uint)local_760;
    }
    sha1_multi_block(puVar13,&local_6c8,param_5);
    local_794 = 0;
    uVar22 = uVar15;
    if (uVar24 != 0) {
      plVar27 = &local_648;
      local_780 = (uint *)(puVar13 + 0x40);
      do {
        puVar13 = local_758;
        uVar21 = uVar23;
        if ((int)uVar15 == uVar24 - 1) {
          uVar21 = (uint)uVar14;
        }
        local_760 = plVar27;
        memcpy((void *)plVar27[1],(void *)*plVar27,(ulonglong)(uVar21 - local_78c));
        *plVar27 = plVar27[1];
        puVar30 = (uint *)(local_758 + (uVar21 + 0x15));
        uVar20 = local_780[-0x10];
        *puVar30 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                   uVar20 << 0x18;
        uVar20 = local_780[-8];
        puVar30[1] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar20 = *local_780;
        puVar30[2] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar20 = local_780[8];
        puVar30[3] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar20 = local_780[0x10];
        local_780 = local_780 + 1;
        puVar30[4] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        iVar5 = -(uVar21 + 0x14 & 0xf);
        iVar10 = iVar5 + 0xf;
        uVar15 = (ulonglong)(iVar5 + 0x10);
        local_758 = (undefined1 *)((longlong)(puVar30 + 5) + uVar15);
        puVar30 = puVar30 + 5;
        for (; uVar15 != 0; uVar15 = uVar15 - 1) {
          *(char *)puVar30 = (char)iVar10;
          puVar30 = (uint *)((longlong)puVar30 + 1);
        }
        iVar10 = uVar21 + 0x14 + iVar10;
        *(uint *)(local_760 + 2) = (iVar10 + 1) - local_78c >> 4;
        plVar27 = local_760 + 5;
        *puVar13 = (char)param_1[0x76];
        puVar13[1] = *(undefined1 *)((longlong)param_1 + 0x1d9);
        puVar13[2] = *(undefined1 *)((longlong)param_1 + 0x1da);
        puVar13[3] = (char)((uint)(iVar10 + 0x11) >> 8);
        puVar13[4] = (char)(iVar10 + 0x11);
        local_794 = local_794 + 1;
        uVar15 = (ulonglong)local_794;
        uVar22 = uVar22 + (iVar10 + 0x16);
        puVar13 = local_778;
        uVar14 = local_768;
        local_760 = plVar27;
      } while (local_794 < uVar24);
    }
    aesni_multi_cbc_encrypt(&local_648,param_1,param_5);
    OPENSSL_cleanse(&local_508,0x400);
    OPENSSL_cleanse(puVar13,0xa0);
  }
  return uVar22;
}

