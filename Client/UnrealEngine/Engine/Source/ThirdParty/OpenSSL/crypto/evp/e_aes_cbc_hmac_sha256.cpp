// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// FUN_14f6db300 @ 14f6db300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_14f6db300(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

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
  SHA256_Init(puVar1);
  *(undefined8 *)(lVar4 + 0x164) = *puVar1;
  *(undefined8 *)(lVar4 + 0x16c) = *(undefined8 *)(lVar4 + 0xfc);
  *(undefined8 *)(lVar4 + 0x248) = 0xffffffffffffffff;
  *(undefined8 *)(lVar4 + 0x174) = *(undefined8 *)(lVar4 + 0x104);
  *(undefined8 *)(lVar4 + 0x17c) = *(undefined8 *)(lVar4 + 0x10c);
  *(undefined8 *)(lVar4 + 0x184) = *(undefined8 *)(lVar4 + 0x114);
  *(undefined8 *)(lVar4 + 0x18c) = *(undefined8 *)(lVar4 + 0x11c);
  *(undefined8 *)(lVar4 + 0x194) = *(undefined8 *)(lVar4 + 0x124);
  *(undefined8 *)(lVar4 + 0x19c) = *(undefined8 *)(lVar4 + 300);
  *(undefined8 *)(lVar4 + 0x1a4) = *(undefined8 *)(lVar4 + 0x134);
  *(undefined8 *)(lVar4 + 0x1ac) = *(undefined8 *)(lVar4 + 0x13c);
  *(undefined8 *)(lVar4 + 0x1b4) = *(undefined8 *)(lVar4 + 0x144);
  *(undefined8 *)(lVar4 + 0x1bc) = *(undefined8 *)(lVar4 + 0x14c);
  *(undefined8 *)(lVar4 + 0x1c4) = *(undefined8 *)(lVar4 + 0x154);
  *(undefined8 *)(lVar4 + 0x1cc) = *(undefined8 *)(lVar4 + 0x15c);
  *(undefined8 *)(lVar4 + 0x1d4) = *puVar1;
  *(undefined8 *)(lVar4 + 0x1dc) = *(undefined8 *)(lVar4 + 0xfc);
  *(undefined8 *)(lVar4 + 0x1e4) = *(undefined8 *)(lVar4 + 0x104);
  *(undefined8 *)(lVar4 + 0x1ec) = *(undefined8 *)(lVar4 + 0x10c);
  *(undefined8 *)(lVar4 + 500) = *(undefined8 *)(lVar4 + 0x114);
  *(undefined8 *)(lVar4 + 0x1fc) = *(undefined8 *)(lVar4 + 0x11c);
  *(undefined8 *)(lVar4 + 0x204) = *(undefined8 *)(lVar4 + 0x124);
  *(undefined8 *)(lVar4 + 0x20c) = *(undefined8 *)(lVar4 + 300);
  *(undefined8 *)(lVar4 + 0x214) = *(undefined8 *)(lVar4 + 0x134);
  *(undefined8 *)(lVar4 + 0x21c) = *(undefined8 *)(lVar4 + 0x13c);
  *(undefined8 *)(lVar4 + 0x224) = *(undefined8 *)(lVar4 + 0x144);
  *(undefined8 *)(lVar4 + 0x22c) = *(undefined8 *)(lVar4 + 0x14c);
  *(undefined8 *)(lVar4 + 0x234) = *(undefined8 *)(lVar4 + 0x154);
  *(undefined8 *)(lVar4 + 0x23c) = *(undefined8 *)(lVar4 + 0x15c);
  return ~uVar3 >> 0x1f;
}

// FUN_14f6db430 @ 14f6db430

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_14f6db430(undefined8 param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  char *pcVar12;
  undefined1 *puVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  ulonglong local_110;
  longlong local_108;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c8;
  uint local_80 [10];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x14f6db447;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_f0 = param_3;
  local_e0 = param_1;
  lVar5 = EVP_CIPHER_CTX_get_cipher_data();
  uVar6 = 0;
  uVar10 = 0;
  local_e8 = 0;
  uVar15 = (ulonglong)(0x40 - *(int *)(lVar5 + 0x23c));
  uVar20 = *(ulonglong *)(lVar5 + 0x248);
  *(undefined8 *)(lVar5 + 0x248) = 0xffffffffffffffff;
  if ((param_4 & 0xf) == 0) {
    local_d8 = uVar15;
    iVar3 = EVP_CIPHER_CTX_encrypting(param_1);
    lVar7 = local_f0;
    if (iVar3 == 0) {
      local_118 = EVP_CIPHER_CTX_iv_noconst(local_e0);
      local_110 = local_110 & 0xffffffff00000000;
      aesni_cbc_encrypt(param_3,param_2,param_4,lVar5);
      if (uVar20 != 0xffffffffffffffff) {
        puVar1 = (undefined8 *)(lVar5 + 0x1fc);
        uVar15 = 0x10;
        if (CONCAT11(*(undefined1 *)(uVar20 + 0x24c + lVar5),*(undefined1 *)(uVar20 + 0x24d + lVar5)
                    ) < 0x302) {
          uVar15 = uVar6;
        }
        if (uVar15 + 0x21 <= param_4) {
          lVar11 = param_4 - uVar15;
          param_2 = param_2 + uVar15;
          uVar4 = (int)lVar11 - 0x21;
          bVar8 = *(byte *)(lVar11 + -1 + param_2);
          uVar9 = 0xff - uVar4 >> 0x18 | uVar4 & 0xff;
          local_e0 = CONCAT44(local_e0._4_4_,uVar9);
          uVar4 = 0xffffffff -
                  ((int)((uVar9 - bVar8 ^ (uint)bVar8 | uVar9 ^ bVar8) ^ uVar9) >> 0x1f);
          local_e8 = CONCAT44(local_e8._4_4_,uVar4) & 0xffffffff00000001;
          uVar4 = uVar4 & bVar8 | ~uVar4 & uVar9;
          local_f0 = CONCAT44(local_f0._4_4_,uVar4);
          lVar7 = lVar11 - (ulonglong)(uVar4 + 0x21);
          *(char *)(uVar20 + 0x24f + lVar5) = (char)lVar7;
          *(char *)(uVar20 + 0x24e + lVar5) = (char)((ulonglong)lVar7 >> 8);
          *(undefined8 *)(lVar5 + 0x1d4) = *(undefined8 *)(lVar5 + 0xf4);
          *(undefined8 *)(lVar5 + 0x1dc) = *(undefined8 *)(lVar5 + 0xfc);
          *(undefined8 *)(lVar5 + 0x1e4) = *(undefined8 *)(lVar5 + 0x104);
          *(undefined8 *)(lVar5 + 0x1ec) = *(undefined8 *)(lVar5 + 0x10c);
          *(undefined8 *)(lVar5 + 500) = *(undefined8 *)(lVar5 + 0x114);
          *(undefined8 *)(lVar5 + 0x1fc) = *(undefined8 *)(lVar5 + 0x11c);
          *(undefined8 *)(lVar5 + 0x204) = *(undefined8 *)(lVar5 + 0x124);
          *(undefined8 *)(lVar5 + 0x20c) = *(undefined8 *)(lVar5 + 300);
          *(undefined8 *)(lVar5 + 0x214) = *(undefined8 *)(lVar5 + 0x134);
          *(undefined8 *)(lVar5 + 0x21c) = *(undefined8 *)(lVar5 + 0x13c);
          *(undefined4 *)(lVar5 + 0x224) = *(undefined4 *)(lVar5 + 0x144);
          *(undefined4 *)(lVar5 + 0x228) = *(undefined4 *)(lVar5 + 0x148);
          *(undefined4 *)(lVar5 + 0x22c) = *(undefined4 *)(lVar5 + 0x14c);
          *(undefined4 *)(lVar5 + 0x230) = *(undefined4 *)(lVar5 + 0x150);
          *(undefined4 *)(lVar5 + 0x234) = *(undefined4 *)(lVar5 + 0x154);
          *(undefined4 *)(lVar5 + 0x238) = *(undefined4 *)(lVar5 + 0x158);
          *(undefined4 *)(lVar5 + 0x23c) = *(undefined4 *)(lVar5 + 0x15c);
          *(undefined4 *)(lVar5 + 0x240) = *(undefined4 *)(lVar5 + 0x160);
          local_f8 = lVar7;
          FUN_14f6dc320((undefined8 *)(lVar5 + 0x1d4),lVar5 + 0x250,uVar20);
          uVar20 = lVar11 - 0x20;
          if (0x13f < uVar20) {
            lVar7 = (ulonglong)(0x40 - *(int *)(lVar5 + 0x23c)) +
                    (lVar11 - 0x160U & 0xffffffffffffffc0);
            FUN_14f6dc320(lVar5 + 0x1d4,param_2,lVar7);
            param_2 = param_2 + lVar7;
            uVar20 = uVar20 - lVar7;
            lVar7 = local_f8 - lVar7;
            local_f8 = lVar7;
          }
          uVar4 = *(uint *)(lVar5 + 0x23c);
          uVar9 = (int)lVar7 * 8 + *(int *)(lVar5 + 500);
          local_80[0] = 0;
          local_80[1] = 0;
          local_80[2] = 0;
          local_80[3] = 0;
          local_80[4] = 0;
          local_80[5] = 0;
          local_80[6] = 0;
          local_80[7] = 0;
          uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                  uVar9 * 0x1000000;
          uVar15 = (ulonglong)uVar9;
          uVar17 = uVar6;
          local_d8 = uVar15;
          if (uVar20 != 0) {
            local_d0 = (-0x48 - param_2) - lVar7;
            local_c8 = -(param_2 + lVar7);
            do {
              bVar8 = (byte)((ulonglong)((byte *)(param_2 + uVar17) + local_c8) >> 0x38);
              uVar9 = uVar4 + 1;
              *(byte *)((ulonglong)uVar4 + (longlong)puVar1) =
                   ~(byte)(lVar7 - uVar17 >> 0x38) & ~bVar8 & 0x80 |
                   *(byte *)(param_2 + uVar17) & bVar8;
              uVar4 = uVar9;
              if (uVar9 == 0x40) {
                uVar4 = (uint)((lVar7 - uVar17) + 7 >> 0x20);
                *(uint *)(lVar5 + 0x238) =
                     *(uint *)(lVar5 + 0x238) | (uint)uVar15 & (int)uVar4 >> 0x1f;
                sha256_block_data_order(lVar5 + 0x1d4,puVar1,1);
                uVar4 = (int)(uVar4 & (uint)(param_2 + uVar17 + local_d0 >> 0x20)) >> 0x1f;
                local_80[0] = local_80[0] | *(uint *)(lVar5 + 0x1d4) & uVar4;
                local_80[1] = local_80[1] | *(uint *)(lVar5 + 0x1d8) & uVar4;
                local_80[2] = local_80[2] | *(uint *)(lVar5 + 0x1dc) & uVar4;
                local_80[3] = local_80[3] | *(uint *)(lVar5 + 0x1e0) & uVar4;
                local_80[4] = local_80[4] | *(uint *)(lVar5 + 0x1e4) & uVar4;
                local_80[5] = local_80[5] | *(uint *)(lVar5 + 0x1e8) & uVar4;
                local_80[6] = local_80[6] | *(uint *)(lVar5 + 0x1ec) & uVar4;
                local_80[7] = local_80[7] | *(uint *)(lVar5 + 0x1f0) & uVar4;
                uVar15 = local_d8;
                uVar4 = uVar10;
              }
              uVar9 = (uint)uVar15;
              uVar17 = uVar17 + 1;
              lVar7 = local_f8;
            } while (uVar17 < uVar20);
          }
          uVar15 = (ulonglong)uVar4;
          if (uVar15 < 0x40) {
            lVar7 = 0x40 - uVar15;
            uVar17 = uVar17 + lVar7;
            puVar13 = (undefined1 *)(uVar15 + (longlong)puVar1);
            for (; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar13 = 0;
              puVar13 = puVar13 + 1;
            }
          }
          if (0x38 < uVar4) {
            uVar4 = (uint)((local_f8 - uVar17) + 8 >> 0x20);
            *(uint *)(lVar5 + 0x238) = *(uint *)(lVar5 + 0x238) | uVar9 & (int)uVar4 >> 0x1f;
            sha256_block_data_order(lVar5 + 0x1d4,puVar1,1);
            uVar4 = (int)(uVar4 & (uint)((uVar17 - local_f8) + -0x49 >> 0x20)) >> 0x1f;
            local_80[0] = local_80[0] | *(uint *)(lVar5 + 0x1d4) & uVar4;
            local_80[1] = local_80[1] | *(uint *)(lVar5 + 0x1d8) & uVar4;
            local_80[2] = local_80[2] | *(uint *)(lVar5 + 0x1dc) & uVar4;
            local_80[3] = local_80[3] | *(uint *)(lVar5 + 0x1e0) & uVar4;
            local_80[4] = local_80[4] | *(uint *)(lVar5 + 0x1e4) & uVar4;
            local_80[5] = local_80[5] | *(uint *)(lVar5 + 0x1e8) & uVar4;
            local_80[6] = local_80[6] | *(uint *)(lVar5 + 0x1ec) & uVar4;
            local_80[7] = local_80[7] | *(uint *)(lVar5 + 0x1f0) & uVar4;
            *puVar1 = 0;
            uVar17 = uVar17 + 0x40;
            *(undefined8 *)(lVar5 + 0x204) = 0;
            *(undefined8 *)(lVar5 + 0x20c) = 0;
            *(undefined8 *)(lVar5 + 0x214) = 0;
            *(undefined8 *)(lVar5 + 0x21c) = 0;
            *(undefined8 *)(lVar5 + 0x224) = 0;
            *(undefined8 *)(lVar5 + 0x22c) = 0;
            *(undefined8 *)(lVar5 + 0x234) = 0;
          }
          puVar2 = (uint *)(lVar5 + 0x1d4);
          *(int *)(lVar5 + 0x238) = (int)local_d8;
          sha256_block_data_order(puVar2,puVar1,1);
          lVar7 = local_f8;
          uVar4 = (uint)((longlong)((uVar17 - local_f8) + -0x49) >> 0x3f);
          local_80[0] = *puVar2 & uVar4 | local_80[0];
          local_80[1] = *(uint *)(lVar5 + 0x1d8) & uVar4 | local_80[1];
          local_80[1] = local_80[1] >> 0x18 | (local_80[1] & 0xff0000) >> 8 |
                        (local_80[1] & 0xff00) << 8 | local_80[1] << 0x18;
          local_80[0] = local_80[0] >> 0x18 | (local_80[0] & 0xff0000) >> 8 |
                        (local_80[0] & 0xff00) << 8 | local_80[0] << 0x18;
          local_80[2] = *(uint *)(lVar5 + 0x1dc) & uVar4 | local_80[2];
          local_80[3] = *(uint *)(lVar5 + 0x1e0) & uVar4 | local_80[3];
          local_80[3] = local_80[3] >> 0x18 | (local_80[3] & 0xff0000) >> 8 |
                        (local_80[3] & 0xff00) << 8 | local_80[3] << 0x18;
          local_80[2] = local_80[2] >> 0x18 | (local_80[2] & 0xff0000) >> 8 |
                        (local_80[2] & 0xff00) << 8 | local_80[2] << 0x18;
          local_80[4] = *(uint *)(lVar5 + 0x1e4) & uVar4 | local_80[4];
          local_80[5] = *(uint *)(lVar5 + 0x1e8) & uVar4 | local_80[5];
          local_80[5] = local_80[5] >> 0x18 | (local_80[5] & 0xff0000) >> 8 |
                        (local_80[5] & 0xff00) << 8 | local_80[5] << 0x18;
          local_80[4] = local_80[4] >> 0x18 | (local_80[4] & 0xff0000) >> 8 |
                        (local_80[4] & 0xff00) << 8 | local_80[4] << 0x18;
          local_80[6] = *(uint *)(lVar5 + 0x1ec) & uVar4 | local_80[6];
          *(undefined8 *)puVar2 = *(undefined8 *)(lVar5 + 0x164);
          *(undefined8 *)(lVar5 + 0x1dc) = *(undefined8 *)(lVar5 + 0x16c);
          local_80[7] = *(uint *)(lVar5 + 0x1f0) & uVar4 | local_80[7];
          *(undefined8 *)(lVar5 + 0x1e4) = *(undefined8 *)(lVar5 + 0x174);
          *(undefined8 *)(lVar5 + 0x1ec) = *(undefined8 *)(lVar5 + 0x17c);
          local_80[7] = local_80[7] >> 0x18 | (local_80[7] & 0xff0000) >> 8 |
                        (local_80[7] & 0xff00) << 8 | local_80[7] << 0x18;
          local_80[6] = local_80[6] >> 0x18 | (local_80[6] & 0xff0000) >> 8 |
                        (local_80[6] & 0xff00) << 8 | local_80[6] << 0x18;
          *(undefined8 *)(lVar5 + 500) = *(undefined8 *)(lVar5 + 0x184);
          *(undefined8 *)(lVar5 + 0x1fc) = *(undefined8 *)(lVar5 + 0x18c);
          *(undefined8 *)(lVar5 + 0x204) = *(undefined8 *)(lVar5 + 0x194);
          *(undefined8 *)(lVar5 + 0x20c) = *(undefined8 *)(lVar5 + 0x19c);
          *(undefined8 *)(lVar5 + 0x214) = *(undefined8 *)(lVar5 + 0x1a4);
          *(undefined8 *)(lVar5 + 0x21c) = *(undefined8 *)(lVar5 + 0x1ac);
          *(undefined4 *)(lVar5 + 0x224) = *(undefined4 *)(lVar5 + 0x1b4);
          *(undefined4 *)(lVar5 + 0x228) = *(undefined4 *)(lVar5 + 0x1b8);
          *(undefined4 *)(lVar5 + 0x22c) = *(undefined4 *)(lVar5 + 0x1bc);
          *(undefined4 *)(lVar5 + 0x230) = *(undefined4 *)(lVar5 + 0x1c0);
          *(undefined4 *)(lVar5 + 0x234) = *(undefined4 *)(lVar5 + 0x1c4);
          *(undefined4 *)(lVar5 + 0x238) = *(undefined4 *)(lVar5 + 0x1c8);
          *(undefined4 *)(lVar5 + 0x23c) = *(undefined4 *)(lVar5 + 0x1cc);
          *(undefined4 *)(lVar5 + 0x240) = *(undefined4 *)(lVar5 + 0x1d0);
          FUN_14f6dc320(puVar2,local_80,0x20);
          SHA256_Final(local_80,puVar2);
          param_2 = param_2 + lVar7;
          lVar5 = param_2 + -1 + ((uVar20 - (local_e0 & 0xffffffff)) - lVar7);
          iVar3 = (int)param_2 - (int)lVar5;
          if ((int)local_e0 + 0x20U != 0) {
            uVar20 = uVar6;
            uVar15 = uVar6;
            do {
              bVar8 = *(byte *)(lVar5 + uVar20);
              iVar14 = (int)uVar20;
              uVar10 = (iVar14 - iVar3) - 0x20;
              uVar20 = uVar20 + 1;
              uVar4 = (int)(uVar10 & (iVar3 - iVar14) - 1U) >> 0x1f;
              uVar10 = (uint)uVar6 | (bVar8 ^ (uint)local_f0) & ~((int)uVar10 >> 0x1f) |
                       (*(byte *)(uVar15 + (longlong)local_80) ^ bVar8) & uVar4;
              uVar6 = (ulonglong)uVar10;
              uVar15 = uVar15 + (uVar4 & 1);
            } while (uVar20 < (int)local_e0 + 0x20U);
          }
          return 0xffffffffU - ((int)-uVar10 >> 0x1f) & (uint)local_e8;
        }
        goto LAB_14f6db4a9;
      }
      FUN_14f6dc320(lVar5 + 0x1d4,param_2,param_4);
    }
    else {
      uVar17 = uVar6;
      uVar16 = param_4;
      if (uVar20 != 0xffffffffffffffff) {
        if (param_4 != (uVar20 + 0x30 & 0xfffffffffffffff0)) goto LAB_14f6db4a9;
        uVar16 = uVar20;
        local_e8 = uVar6;
        if (0x301 < *(uint *)(lVar5 + 0x250)) {
          local_e8 = 0x10;
          uVar17 = local_e8;
        }
      }
      uVar20 = uVar6;
      if ((((_DAT_15540a9f8 & 0x20000000) != 0) ||
          (((DAT_15540a9f4 >> 0x1c & 1) != 0 &&
           ((OPENSSL_ia32cap_P & 0x40000000) != 0 || (DAT_15540a9f4 & 0x800) != 0)))) &&
         (uVar15 + uVar17 < uVar16)) {
        uVar18 = (uVar16 - uVar15) - uVar17;
        uVar19 = uVar18 >> 6;
        if (uVar19 != 0) {
          FUN_14f6dc320(lVar5 + 0x1d4U,uVar17 + local_f0,uVar15);
          lVar11 = uVar15 + lVar7 + local_e8;
          local_118 = EVP_CIPHER_CTX_iv_noconst(local_e0);
          local_110 = lVar5 + 0x1d4U;
          local_108 = lVar11;
          aesni_cbc_sha256_enc(lVar7,param_2,uVar19,lVar5);
          uVar20 = uVar19 * 0x40;
          uVar6 = local_d8 + uVar20;
          iVar3 = (int)(uVar18 >> 0x1d) + *(int *)(lVar5 + 0x1f8);
          uVar10 = (uint)(uVar19 << 9);
          *(int *)(lVar5 + 500) = *(int *)(lVar5 + 500) + uVar10;
          *(int *)(lVar5 + 0x1f8) = iVar3;
          if (*(uint *)(lVar5 + 500) < uVar10) {
            *(int *)(lVar5 + 0x1f8) = iVar3 + 1;
          }
        }
      }
      puVar1 = (undefined8 *)(lVar5 + 0x1d4);
      FUN_14f6dc320(puVar1,lVar7 + uVar6 + local_e8,uVar16 - (uVar6 + local_e8));
      if (uVar16 == param_4) {
        local_118 = EVP_CIPHER_CTX_iv_noconst(local_e0);
        local_110 = CONCAT44(local_110._4_4_,1);
        aesni_cbc_encrypt(lVar7 + uVar20,param_2 + uVar20,param_4 - uVar20,lVar5);
      }
      else {
        if (lVar7 != param_2) {
          memcpy((void *)(param_2 + uVar20),(void *)(lVar7 + uVar20),uVar16 - uVar20);
        }
        lVar7 = param_2 + uVar16;
        SHA256_Final(lVar7,puVar1);
        *puVar1 = *(undefined8 *)(lVar5 + 0x164);
        *(undefined8 *)(lVar5 + 0x1dc) = *(undefined8 *)(lVar5 + 0x16c);
        *(undefined8 *)(lVar5 + 0x1e4) = *(undefined8 *)(lVar5 + 0x174);
        *(undefined8 *)(lVar5 + 0x1ec) = *(undefined8 *)(lVar5 + 0x17c);
        *(undefined8 *)(lVar5 + 500) = *(undefined8 *)(lVar5 + 0x184);
        *(undefined8 *)(lVar5 + 0x1fc) = *(undefined8 *)(lVar5 + 0x18c);
        *(undefined8 *)(lVar5 + 0x204) = *(undefined8 *)(lVar5 + 0x194);
        *(undefined8 *)(lVar5 + 0x20c) = *(undefined8 *)(lVar5 + 0x19c);
        *(undefined8 *)(lVar5 + 0x214) = *(undefined8 *)(lVar5 + 0x1a4);
        *(undefined8 *)(lVar5 + 0x21c) = *(undefined8 *)(lVar5 + 0x1ac);
        *(undefined4 *)(lVar5 + 0x224) = *(undefined4 *)(lVar5 + 0x1b4);
        *(undefined4 *)(lVar5 + 0x228) = *(undefined4 *)(lVar5 + 0x1b8);
        *(undefined4 *)(lVar5 + 0x22c) = *(undefined4 *)(lVar5 + 0x1bc);
        *(undefined4 *)(lVar5 + 0x230) = *(undefined4 *)(lVar5 + 0x1c0);
        *(undefined4 *)(lVar5 + 0x234) = *(undefined4 *)(lVar5 + 0x1c4);
        *(undefined4 *)(lVar5 + 0x238) = *(undefined4 *)(lVar5 + 0x1c8);
        *(undefined4 *)(lVar5 + 0x23c) = *(undefined4 *)(lVar5 + 0x1cc);
        *(undefined4 *)(lVar5 + 0x240) = *(undefined4 *)(lVar5 + 0x1d0);
        FUN_14f6dc320(puVar1,lVar7,0x20);
        SHA256_Final(lVar7,puVar1);
        uVar16 = uVar16 + 0x20;
        if (uVar16 < param_4) {
          pcVar12 = (char *)(param_2 + uVar16);
          for (lVar7 = param_4 - uVar16; lVar7 != 0; lVar7 = lVar7 + -1) {
            *pcVar12 = ((char)param_4 - (char)uVar16) + -1;
            pcVar12 = pcVar12 + 1;
          }
        }
        local_118 = EVP_CIPHER_CTX_iv_noconst(local_e0);
        local_110 = CONCAT44(local_110._4_4_,1);
        aesni_cbc_encrypt(param_2 + uVar20,param_2 + uVar20,param_4 - uVar20,lVar5);
      }
    }
    uVar10 = 1;
  }
  else {
LAB_14f6db4a9:
    uVar10 = 0;
  }
  return uVar10;
}

// FUN_14f6dbcf0 @ 14f6dbcf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14f6dbcf0(undefined8 param_1,int param_2,uint param_3,undefined8 *param_4)

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
  ulonglong *puVar11;
  ulonglong uVar12;
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
    if (iVar3 == 0) {
      *(undefined8 *)(lVar5 + 0x250) = *param_4;
      *(undefined4 *)(lVar5 + 600) = *(undefined4 *)(param_4 + 1);
      *(undefined1 *)(lVar5 + 0x25c) = *(undefined1 *)((longlong)param_4 + 0xc);
      *(undefined8 *)(lVar5 + 0x248) = 0xd;
      return 0x20;
    }
    *(ulonglong *)(lVar5 + 0x248) = (ulonglong)uVar2;
    uVar4 = (uint)CONCAT11(*(undefined1 *)((longlong)param_4 + 9),
                           *(undefined1 *)((longlong)param_4 + 10));
    *(uint *)(lVar5 + 0x250) = uVar4;
    if (0x301 < uVar4) {
      if (uVar2 < 0x10) {
        return 0;
      }
      uVar2 = uVar2 - 0x10;
      *(char *)((longlong)param_4 + 0xc) = (char)uVar2;
      *(char *)((longlong)param_4 + 0xb) = (char)(uVar2 >> 8);
    }
    *(undefined8 *)(lVar5 + 0x1d4) = *(undefined8 *)(lVar5 + 0xf4);
    *(undefined8 *)(lVar5 + 0x1dc) = *(undefined8 *)(lVar5 + 0xfc);
    *(undefined8 *)(lVar5 + 0x1e4) = *(undefined8 *)(lVar5 + 0x104);
    *(undefined8 *)(lVar5 + 0x1ec) = *(undefined8 *)(lVar5 + 0x10c);
    *(undefined8 *)(lVar5 + 500) = *(undefined8 *)(lVar5 + 0x114);
    *(undefined8 *)(lVar5 + 0x1fc) = *(undefined8 *)(lVar5 + 0x11c);
    *(undefined8 *)(lVar5 + 0x204) = *(undefined8 *)(lVar5 + 0x124);
    *(undefined8 *)(lVar5 + 0x20c) = *(undefined8 *)(lVar5 + 300);
    *(undefined8 *)(lVar5 + 0x214) = *(undefined8 *)(lVar5 + 0x134);
    *(undefined8 *)(lVar5 + 0x21c) = *(undefined8 *)(lVar5 + 0x13c);
    *(undefined8 *)(lVar5 + 0x224) = *(undefined8 *)(lVar5 + 0x144);
    *(undefined8 *)(lVar5 + 0x22c) = *(undefined8 *)(lVar5 + 0x14c);
    *(undefined8 *)(lVar5 + 0x234) = *(undefined8 *)(lVar5 + 0x154);
    *(undefined8 *)(lVar5 + 0x23c) = *(undefined8 *)(lVar5 + 0x15c);
    FUN_14f6dc320((undefined8 *)(lVar5 + 0x1d4),param_4,0xd);
    return (ulonglong)((uVar2 + 0x30 & 0xfffffff0) - uVar2);
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
    if (-1 < (int)param_3) {
      if (param_3 < 0x41) {
        memcpy(local_88,param_4,(longlong)(int)param_3);
      }
      else {
        SHA256_Init(lVar5 + 0xf4);
        FUN_14f6dc320(lVar5 + 0xf4,param_4,(longlong)(int)param_3);
        SHA256_Final(local_88,lVar5 + 0xf4);
      }
      lVar10 = 2;
      lVar8 = 2;
      puVar11 = local_88;
      do {
        *puVar11 = *puVar11 ^ ___xmm_36363636363636363636363636363636;
        puVar11[1] = puVar11[1] ^ _UNK_1506bff78;
        puVar11[2] = puVar11[2] ^ ___xmm_36363636363636363636363636363636;
        puVar11[3] = puVar11[3] ^ _UNK_1506bff78;
        lVar8 = lVar8 + -1;
        puVar11 = puVar11 + 4;
      } while (lVar8 != 0);
      SHA256_Init(lVar5 + 0xf4);
      FUN_14f6dc320(lVar5 + 0xf4,local_88,0x40);
      puVar11 = local_88;
      do {
        *puVar11 = __xmm_6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a._0_8_ ^ *puVar11;
        puVar11[1] = __xmm_6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a._8_8_ ^ puVar11[1];
        puVar11[2] = __xmm_6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a._0_8_ ^ puVar11[2];
        puVar11[3] = __xmm_6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a6a._8_8_ ^ puVar11[3];
        lVar10 = lVar10 + -1;
        puVar11 = puVar11 + 4;
      } while (lVar10 != 0);
      lVar8 = lVar5 + 0x164;
      SHA256_Init(lVar8);
      puVar11 = local_88;
      lVar10 = 0x40;
      if ((ulonglong)*(uint *)(lVar5 + 0x1cc) != 0) {
        uVar6 = 0x40 - (ulonglong)*(uint *)(lVar5 + 0x1cc);
        if (0x40 < uVar6) {
          uVar6 = 0x40;
        }
        SHA256_Update(lVar8,local_88,uVar6);
        puVar11 = (ulonglong *)((longlong)local_88 + uVar6);
        lVar10 = 0x40 - uVar6;
      }
      uVar6 = (ulonglong)((uint)lVar10 & 0x3f);
      uVar12 = lVar10 - uVar6;
      if (uVar12 != 0) {
        sha256_block_data_order(lVar8,puVar11,uVar12 >> 6);
        puVar11 = (ulonglong *)((longlong)puVar11 + uVar12);
        iVar3 = (int)(uVar12 >> 0x1d) + *(int *)(lVar5 + 0x188);
        uVar2 = (int)uVar12 * 8;
        *(int *)(lVar5 + 0x184) = *(int *)(lVar5 + 0x184) + uVar2;
        *(int *)(lVar5 + 0x188) = iVar3;
        if (*(uint *)(lVar5 + 0x184) < uVar2) {
          *(int *)(lVar5 + 0x188) = iVar3 + 1;
        }
      }
      if (uVar6 != 0) {
        SHA256_Update(lVar8,puVar11,uVar6);
      }
      OPENSSL_cleanse(local_88,0x40);
      return 1;
    }
  }
  else if (param_2 == 0x19) {
    if ((-1 < (int)param_3) && (0x1f < param_3)) {
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
        *(undefined8 *)(lVar5 + 0x1d4) = *(undefined8 *)(lVar5 + 0xf4);
        *(undefined8 *)(lVar5 + 0x1dc) = *(undefined8 *)(lVar5 + 0xfc);
        *(undefined8 *)(lVar5 + 0x1e4) = *(undefined8 *)(lVar5 + 0x104);
        *(undefined8 *)(lVar5 + 0x1ec) = *(undefined8 *)(lVar5 + 0x10c);
        *(undefined8 *)(lVar5 + 500) = *(undefined8 *)(lVar5 + 0x114);
        *(undefined8 *)(lVar5 + 0x1fc) = *(undefined8 *)(lVar5 + 0x11c);
        *(undefined8 *)(lVar5 + 0x204) = *(undefined8 *)(lVar5 + 0x124);
        *(undefined8 *)(lVar5 + 0x20c) = *(undefined8 *)(lVar5 + 300);
        *(undefined8 *)(lVar5 + 0x214) = *(undefined8 *)(lVar5 + 0x134);
        *(undefined8 *)(lVar5 + 0x21c) = *(undefined8 *)(lVar5 + 0x13c);
        *(undefined8 *)(lVar5 + 0x224) = *(undefined8 *)(lVar5 + 0x144);
        *(undefined8 *)(lVar5 + 0x22c) = *(undefined8 *)(lVar5 + 0x14c);
        *(undefined8 *)(lVar5 + 0x234) = *(undefined8 *)(lVar5 + 0x154);
        *(undefined8 *)(lVar5 + 0x23c) = *(undefined8 *)(lVar5 + 0x15c);
        FUN_14f6dc320((undefined8 *)(lVar5 + 0x1d4),param_4[1],0xd);
        bVar7 = (char)uVar4 + 1;
        uVar9 = uVar2 >> (bVar7 & 0x1f);
        uVar2 = (uVar9 - (uVar9 << (bVar7 & 0x1f))) + uVar2;
        if ((uVar9 < uVar2) && ((uVar2 + 0x16 & 0x3f) < uVar4 * 4 - 1)) {
          uVar9 = uVar9 + 1;
          uVar2 = uVar2 + uVar4 * -4 + 1;
        }
        *(uint *)(param_4 + 3) = uVar4 * 4;
        iVar3 = (uVar9 + 0x30 & 0xfffffff0) + 0x15;
        uVar2 = ((iVar3 << (bVar7 & 0x1f)) + (uVar2 + 0x30 & 0xfffffff0)) - iVar3;
        goto LAB_14f6dbd63;
      }
    }
  }
  else {
    if (param_2 == 0x1a) {
      local_98 = *(uint *)(param_4 + 3) >> 2;
      uVar6 = FUN_14f6dc3e0(lVar5,*param_4,param_4[1],param_4[2]);
      return uVar6;
    }
    if (param_2 == 0x1c) {
      uVar2 = param_3 + 0x30 & 0xfffffff0;
LAB_14f6dbd63:
      return (ulonglong)(uVar2 + 0x15);
    }
  }
  return 0xffffffff;
}

// EVP_aes_128_cbc_hmac_sha256 @ 14f6dc1f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * EVP_aes_128_cbc_hmac_sha256(void)

{
  int iVar1;
  
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    iVar1 = aesni_cbc_sha256_enc(0,0,0,0,0,0,0);
    if (iVar1 != 0) {
      return &DAT_154df8a40;
    }
  }
  return (undefined *)0x0;
}

// EVP_aes_256_cbc_hmac_sha256 @ 14f6dc250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined * EVP_aes_256_cbc_hmac_sha256(void)

{
  int iVar1;
  
  if ((DAT_15540a9f4 & 0x2000000) != 0) {
    iVar1 = aesni_cbc_sha256_enc(0,0,0,0,0,0,0);
    if (iVar1 != 0) {
      return &DAT_154df8aa0;
    }
  }
  return (undefined *)0x0;
}

// FUN_14f6dc320 @ 14f6dc320

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6dc320(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  
  if ((ulonglong)*(uint *)(param_1 + 0x68) != 0) {
    uVar1 = 0x40 - (ulonglong)*(uint *)(param_1 + 0x68);
    if (param_3 < uVar1) {
      uVar1 = param_3;
    }
    SHA256_Update(param_1,param_2,uVar1);
    param_2 = param_2 + uVar1;
    param_3 = param_3 - uVar1;
  }
  uVar1 = (ulonglong)((uint)param_3 & 0x3f);
  param_3 = param_3 - uVar1;
  if (param_3 != 0) {
    sha256_block_data_order(param_1,param_2,param_3 >> 6);
    param_2 = param_2 + param_3;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + (int)(param_3 >> 0x1d);
    uVar2 = (int)param_3 * 8;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + uVar2;
    if (*(uint *)(param_1 + 0x20) < uVar2) {
      *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    }
  }
  if (uVar1 != 0) {
    SHA256_Update(param_1,param_2,uVar1);
  }
  return;
}

// FUN_14f6dc3e0 @ 14f6dc3e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_14f6dc3e0(uint *param_1,undefined1 *param_2,longlong param_3,uint param_4,int param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 **ppuVar10;
  undefined1 *puVar11;
  byte bVar12;
  undefined1 *puVar13;
  longlong lVar14;
  uint *puVar15;
  uint uVar16;
  longlong *plVar17;
  undefined4 *puVar18;
  ulonglong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong *plVar29;
  uint *puVar30;
  ulonglong uVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  undefined1 auStack_828 [32];
  undefined1 local_808;
  undefined1 local_807;
  undefined1 local_806;
  uint local_804;
  uint local_800;
  uint local_7fc;
  uint local_7f8;
  uint local_7f4;
  uint local_7f0;
  uint local_7ec;
  uint local_7e8;
  uint local_7e4;
  undefined1 *local_7e0;
  uint *local_7d8;
  ulonglong local_7d0;
  undefined1 *local_7c8;
  uint local_7c0;
  longlong *local_7b8;
  longlong local_7a8;
  uint auStack_7a0 [2];
  longlong local_798 [14];
  undefined8 local_728;
  undefined4 local_720 [30];
  longlong local_6a8;
  undefined1 *local_6a0;
  undefined4 local_698 [2];
  undefined4 local_690;
  undefined4 uStack_68c;
  undefined4 uStack_688;
  undefined4 uStack_684;
  longlong local_678 [34];
  undefined8 local_568;
  undefined4 uStack_560;
  undefined4 uStack_55c;
  undefined8 local_558;
  undefined8 uStack_550;
  uint auStack_52c [16];
  uint auStack_4ec [225];
  undefined1 local_168 [32];
  undefined1 local_148 [64];
  uint auStack_108 [48];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f6dc3fd;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_828;
  uVar25 = 0;
  local_7fc = 0;
  uVar21 = param_5 * 4;
  local_7b8 = (longlong *)CONCAT44(local_7b8._4_4_,uVar21);
  local_7d8 = param_1;
  local_7c8 = param_2;
  iVar9 = RAND_bytes(&local_568,param_5 << 6);
  if (iVar9 < 1) {
    puVar32 = (undefined1 *)0x0;
  }
  else {
    bVar12 = (char)param_5 + 1;
    local_800 = param_4 >> (bVar12 & 0x1f);
    lVar14 = -(ulonglong)((uint)local_168 & 0x1f);
    puVar11 = local_148 + lVar14;
    uVar22 = (param_4 - (local_800 << (bVar12 & 0x1f))) + local_800;
    local_7d0 = (ulonglong)uVar22;
    if ((local_800 < uVar22) && ((uVar22 + 0x16 & 0x3f) < uVar21 - 1)) {
      local_800 = local_800 + 1;
      local_7d0 = (ulonglong)(uVar22 + param_5 * -4 + 1);
    }
    uVar19 = local_7d0;
    uVar22 = local_800;
    uVar23 = (uint)local_7d0;
    local_7a8 = param_3;
    local_6a8 = param_3;
    local_6a0 = local_7c8 + 0x15;
    *(ulonglong *)(local_7c8 + 5) = local_568;
    *(ulonglong *)(local_7c8 + 0xd) = CONCAT44(uStack_55c,uStack_560);
    local_690 = (undefined4)local_568;
    uStack_68c = local_568._4_4_;
    uStack_688 = uStack_560;
    uStack_684 = uStack_55c;
    if (1 < uVar21) {
      plVar26 = local_798;
      ppuVar10 = &local_6a0;
      plVar29 = &local_7a8;
      uVar31 = (ulonglong)(uVar21 - 1);
      plVar17 = local_678;
      puVar24 = &local_558;
      do {
        lVar1 = *plVar29;
        uVar3 = *puVar24;
        uVar8 = puVar24[1];
        *plVar26 = lVar1 + (ulonglong)local_800;
        plVar29 = plVar29 + 2;
        plVar17[-1] = lVar1 + (ulonglong)local_800;
        plVar26 = plVar26 + 2;
        puVar13 = *ppuVar10;
        ppuVar10 = ppuVar10 + 5;
        puVar13 = puVar13 + ((local_800 + 0x30 & 0xfffffff0) + 0x15);
        *plVar17 = (longlong)puVar13;
        *(undefined8 *)(puVar13 + -0x10) = uVar3;
        *(undefined8 *)(puVar13 + -8) = uVar8;
        uVar5 = *(undefined4 *)((longlong)puVar24 + 4);
        uVar6 = *(undefined4 *)(puVar24 + 1);
        uVar7 = *(undefined4 *)((longlong)puVar24 + 0xc);
        *(undefined4 *)(plVar17 + 2) = *(undefined4 *)puVar24;
        *(undefined4 *)((longlong)plVar17 + 0x14) = uVar5;
        *(undefined4 *)(plVar17 + 3) = uVar6;
        *(undefined4 *)((longlong)plVar17 + 0x1c) = uVar7;
        uVar31 = uVar31 - 1;
        plVar17 = plVar17 + 5;
        puVar24 = puVar24 + 2;
        param_1 = local_7d8;
      } while (uVar31 != 0);
    }
    local_568 = *(ulonglong *)(param_1 + 0x7f);
    if (uVar21 != 0) {
      local_7f4 = param_1[0x79];
      puVar24 = &local_568;
      local_804 = param_1[0x75];
      puVar15 = (uint *)((longlong)auStack_108 + lVar14);
      local_7c0 = param_1[0x78];
      uVar20 = param_1[0x76];
      local_7f0 = param_1[0x7a];
      local_7ec = param_1[0x7b];
      local_7e8 = param_1[0x7c];
      local_808 = (undefined1)param_1[0x81];
      local_807 = *(undefined1 *)((longlong)param_1 + 0x205);
      local_806 = *(undefined1 *)((longlong)param_1 + 0x206);
      local_7f8 = uVar21 - 1;
      local_7e4 = param_1[0x77];
      uVar31 = uVar25;
      puVar18 = &uStack_560;
      uVar27 = local_568 >> 0x38 | (local_568 & 0xff000000000000) >> 0x28 |
               (local_568 & 0xff0000000000) >> 0x18 | (local_568 & 0xff00000000) >> 8 |
               (local_568 & 0xff000000) << 8 | (local_568 & 0xff0000) << 0x18 |
               (local_568 & 0xff00) << 0x28 | local_568 << 0x38;
      do {
        *puVar15 = local_7e4;
        uVar16 = local_800;
        if ((uint)uVar25 == local_7f8) {
          uVar16 = uVar23;
        }
        puVar15[0x10] = local_7f4;
        uVar28 = (uint)uVar25 + 1;
        uVar25 = (ulonglong)uVar28;
        puVar15[0x18] = local_7f0;
        puVar15[0x20] = local_7ec;
        puVar15[0x28] = local_7e8;
        *(char *)(puVar18 + 1) = (char)uVar16;
        puVar15[8] = local_7c0;
        puVar2 = *(undefined8 **)((longlong)auStack_7a0 + (uVar31 - 8));
        puVar15[-0x10] = local_804;
        puVar15[-8] = uVar20;
        puVar15 = puVar15 + 1;
        *(ulonglong *)(puVar18 + -2) =
             uVar27 >> 0x38 | (uVar27 & 0xff000000000000) >> 0x28 |
             (uVar27 & 0xff0000000000) >> 0x18 | (uVar27 & 0xff00000000) >> 8 |
             (uVar27 & 0xff000000) << 8 | (uVar27 & 0xff0000) << 0x18 | (uVar27 & 0xff00) << 0x28 |
             uVar27 << 0x38;
        *(undefined1 *)puVar18 = local_808;
        *(undefined1 *)((longlong)puVar18 + 1) = local_807;
        *(undefined1 *)((longlong)puVar18 + 2) = local_806;
        *(char *)((longlong)puVar18 + 3) = (char)(uVar16 >> 8);
        uVar3 = puVar2[1];
        *(undefined8 *)((longlong)puVar18 + 5) = *puVar2;
        *(undefined8 *)((longlong)puVar18 + 0xd) = uVar3;
        uVar3 = puVar2[3];
        *(undefined8 *)((longlong)puVar18 + 0x15) = puVar2[2];
        *(undefined8 *)((longlong)puVar18 + 0x1d) = uVar3;
        uVar5 = *(undefined4 *)((longlong)puVar2 + 0x24);
        uVar6 = *(undefined4 *)(puVar2 + 5);
        uVar7 = *(undefined4 *)((longlong)puVar2 + 0x2c);
        *(undefined4 *)((longlong)puVar18 + 0x25) = *(undefined4 *)(puVar2 + 4);
        *(undefined4 *)((longlong)puVar18 + 0x29) = uVar5;
        *(undefined4 *)((longlong)puVar18 + 0x2d) = uVar6;
        *(undefined4 *)((longlong)puVar18 + 0x31) = uVar7;
        *(undefined2 *)((longlong)puVar18 + 0x35) = *(undefined2 *)(puVar2 + 6);
        *(undefined1 *)((longlong)puVar18 + 0x37) = *(undefined1 *)((longlong)puVar2 + 0x32);
        *(longlong *)((longlong)auStack_7a0 + (uVar31 - 8)) = (longlong)puVar2 + 0x33;
        *(undefined8 **)((longlong)local_720 + (uVar31 - 8)) = puVar24;
        puVar24 = puVar24 + 0x10;
        *(uint *)((longlong)auStack_7a0 + uVar31) = uVar16 - 0x33 >> 6;
        *(undefined4 *)((longlong)local_720 + uVar31) = 1;
        uVar31 = uVar31 + 0x10;
        puVar18 = puVar18 + 0x20;
        uVar27 = uVar27 + 1;
        param_1 = local_7d8;
      } while (uVar28 < uVar21);
    }
    local_7e0 = puVar11;
    sha256_multi_block(puVar11,&local_728,param_5);
    if (uVar22 <= uVar23) {
      uVar23 = uVar22;
    }
    uVar20 = uVar23 - 0x33 >> 6;
    uVar23 = local_7fc;
    if (0x20 < uVar20) {
      if (uVar21 != 0) {
        puVar18 = local_698;
        uVar25 = (ulonglong)uVar21;
        lVar14 = 0;
        do {
          *(undefined8 *)((longlong)&local_728 + lVar14) =
               *(undefined8 *)((longlong)auStack_7a0 + lVar14 + -8);
          *(undefined4 *)((longlong)local_720 + lVar14) = 0x20;
          lVar14 = lVar14 + 0x10;
          *puVar18 = 0x80;
          puVar18 = puVar18 + 10;
          uVar25 = uVar25 - 1;
          puVar11 = local_7e0;
        } while (uVar25 != 0);
      }
      uVar25 = 0;
      do {
        sha256_multi_block(puVar11,&local_728,param_5);
        aesni_multi_cbc_encrypt(&local_6a8,param_1,param_5);
        if (uVar21 != 0) {
          uVar31 = (ulonglong)uVar21;
          ppuVar10 = &local_6a0;
          uVar19 = 0;
          do {
            plVar26 = (longlong *)((longlong)auStack_7a0 + (uVar19 - 8));
            *plVar26 = *plVar26 + 0x800;
            *ppuVar10 = *ppuVar10 + 0x800;
            uVar3 = *(undefined8 *)((longlong)auStack_7a0 + (uVar19 - 8));
            *(int *)((longlong)auStack_7a0 + uVar19) =
                 *(int *)((longlong)auStack_7a0 + uVar19) + -0x20;
            ppuVar10[-1] = ppuVar10[-1] + 0x800;
            *(undefined8 *)((longlong)&local_728 + uVar19) = uVar3;
            puVar11 = *ppuVar10;
            *(undefined4 *)((longlong)local_720 + uVar19) = 0x20;
            uVar19 = uVar19 + 0x10;
            *(undefined4 *)(ppuVar10 + 1) = 0x80;
            uVar5 = *(undefined4 *)(puVar11 + -0xc);
            uVar6 = *(undefined4 *)(puVar11 + -8);
            uVar7 = *(undefined4 *)(puVar11 + -4);
            *(undefined4 *)(ppuVar10 + 2) = *(undefined4 *)(puVar11 + -0x10);
            *(undefined4 *)((longlong)ppuVar10 + 0x14) = uVar5;
            *(undefined4 *)(ppuVar10 + 3) = uVar6;
            *(undefined4 *)((longlong)ppuVar10 + 0x1c) = uVar7;
            uVar31 = uVar31 - 1;
            ppuVar10 = ppuVar10 + 5;
            puVar11 = local_7e0;
          } while (uVar31 != 0);
        }
        uVar23 = (int)uVar25 + 0x800;
        uVar25 = (ulonglong)uVar23;
        uVar20 = uVar20 - 0x20;
        uVar19 = local_7d0;
        uVar22 = local_800;
      } while (0x20 < uVar20);
    }
    local_7fc = uVar23;
    sha256_multi_block(puVar11,&local_7a8,param_5);
    memset(&local_568,0,0x400);
    puVar11 = (undefined1 *)0x0;
    local_804 = 0;
    if (uVar21 != 0) {
      puVar24 = &local_568;
      puVar13 = puVar11;
      puVar32 = puVar11;
      puVar33 = puVar11;
      do {
        uVar22 = local_800;
        if ((int)puVar13 == uVar21 - 1) {
          uVar22 = (uint)local_7d0;
        }
        uVar23 = ((uVar22 + *(int *)((longlong)auStack_7a0 + (longlong)puVar33) * -0x40) - local_7fc
                 ) - 0x33;
        memcpy(puVar24,(void *)((ulonglong)
                                (uint)(*(int *)((longlong)auStack_7a0 + (longlong)puVar33) * 0x40) +
                               *(longlong *)((longlong)&local_7a8 + (longlong)puVar33)),
               (ulonglong)uVar23);
        *(undefined1 *)((longlong)&local_568 + (longlong)(puVar32 + uVar23)) = 0x80;
        uVar22 = uVar22 * 8 + 0x268;
        uVar22 = uVar22 >> 0x18 | (uVar22 & 0xff0000) >> 8 | (uVar22 & 0xff00) << 8 |
                 uVar22 * 0x1000000;
        if (uVar23 < 0x38) {
          *(uint *)((longlong)auStack_52c + (longlong)puVar32) = uVar22;
          *(undefined4 *)((longlong)local_720 + (longlong)puVar33) = 1;
        }
        else {
          *(uint *)((longlong)auStack_4ec + (longlong)puVar32) = uVar22;
          *(undefined4 *)((longlong)local_720 + (longlong)puVar33) = 2;
        }
        *(undefined8 **)((longlong)&local_728 + (longlong)puVar33) = puVar24;
        local_804 = local_804 + 1;
        puVar13 = (undefined1 *)(ulonglong)local_804;
        puVar24 = puVar24 + 0x10;
        puVar32 = puVar32 + 0x80;
        puVar33 = puVar33 + 0x10;
        uVar19 = local_7d0;
        param_1 = local_7d8;
        uVar22 = local_800;
      } while (local_804 < uVar21);
    }
    puVar13 = local_7e0;
    sha256_multi_block(local_7e0,&local_728,param_5);
    memset(&local_568,0,0x400);
    uVar23 = 0;
    if (uVar21 != 0) {
      local_7c0 = param_1[0x5a];
      uVar22 = param_1[0x59];
      puVar18 = local_720;
      local_7e4 = param_1[0x5b];
      puVar24 = &local_568;
      local_7e8 = param_1[0x5c];
      local_7ec = param_1[0x5d];
      local_7f0 = param_1[0x5e];
      local_7f4 = param_1[0x5f];
      local_7f8 = param_1[0x60];
      uVar25 = (ulonglong)uVar21;
      puVar15 = (uint *)(puVar13 + 0x40);
      puVar30 = (uint *)((longlong)&local_568 + 4);
      do {
        uVar21 = puVar15[-0x10];
        *(undefined8 **)(puVar18 + -2) = puVar24;
        puVar24 = puVar24 + 0x10;
        puVar15[-0x10] = uVar22;
        *(undefined1 *)(puVar30 + 7) = 0x80;
        puVar30[0xe] = 0x30000;
        *puVar18 = 1;
        puVar18 = puVar18 + 4;
        puVar30[-1] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                      uVar21 << 0x18;
        uVar21 = puVar15[-8];
        puVar15[-8] = local_7c0;
        *puVar30 = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                   uVar21 << 0x18;
        uVar21 = *puVar15;
        *puVar15 = local_7e4;
        puVar30[1] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        uVar21 = puVar15[8];
        puVar15[8] = local_7e8;
        puVar30[2] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        uVar21 = puVar15[0x10];
        puVar15[0x10] = local_7ec;
        puVar30[3] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        uVar21 = puVar15[0x18];
        puVar15[0x18] = local_7f0;
        puVar30[4] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        uVar21 = puVar15[0x20];
        puVar15[0x20] = local_7f4;
        puVar30[5] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        uVar21 = puVar15[0x28];
        puVar30[6] = uVar21 >> 0x18 | (uVar21 & 0xff0000) >> 8 | (uVar21 & 0xff00) << 8 |
                     uVar21 << 0x18;
        puVar15[0x28] = local_7f8;
        uVar25 = uVar25 - 1;
        puVar15 = puVar15 + 1;
        puVar30 = puVar30 + 0x20;
      } while (uVar25 != 0);
      puVar13 = local_7e0;
      uVar19 = local_7d0;
      param_1 = local_7d8;
      uVar22 = local_800;
      uVar23 = (uint)local_7b8;
    }
    sha256_multi_block(puVar13,&local_728,param_5);
    local_804 = 0;
    puVar32 = puVar11;
    if (uVar23 != 0) {
      local_7b8 = &local_6a8;
      local_7d8 = (uint *)(puVar13 + 0x40);
      puVar32 = (undefined1 *)0x0;
      puVar33 = local_7c8;
      do {
        local_7c8 = puVar33;
        puVar13 = local_7c8;
        puVar15 = local_7d8;
        uVar21 = uVar22;
        if ((int)puVar11 == uVar23 - 1) {
          uVar21 = (uint)uVar19;
        }
        memcpy((void *)local_7b8[1],(void *)*local_7b8,(ulonglong)(uVar21 - local_7fc));
        puVar30 = (uint *)(local_7c8 + (uVar21 + 0x15));
        *local_7b8 = local_7b8[1];
        uVar20 = puVar15[-0x10];
        *puVar30 = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                   uVar20 << 0x18;
        uVar20 = puVar15[-8];
        puVar30[1] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar20 = *puVar15;
        puVar30[2] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar20 = puVar15[8];
        puVar30[3] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar20 = puVar15[0x10];
        puVar30[4] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar20 = puVar15[0x18];
        puVar30[5] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar20 = puVar15[0x20];
        puVar30[6] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        uVar20 = puVar15[0x28];
        puVar30[7] = uVar20 >> 0x18 | (uVar20 & 0xff0000) >> 8 | (uVar20 & 0xff00) << 8 |
                     uVar20 << 0x18;
        iVar4 = -(uVar21 + 0x20 & 0xf);
        iVar9 = iVar4 + 0xf;
        uVar25 = (ulonglong)(iVar4 + 0x10);
        puVar33 = (undefined1 *)((longlong)(puVar30 + 8) + uVar25);
        puVar15 = puVar30 + 8;
        for (; uVar25 != 0; uVar25 = uVar25 - 1) {
          *(char *)puVar15 = (char)iVar9;
          puVar15 = (uint *)((longlong)puVar15 + 1);
        }
        iVar9 = uVar21 + 0x20 + iVar9;
        local_7d8 = local_7d8 + 1;
        *(uint *)(local_7b8 + 2) = (iVar9 + 1) - local_7fc >> 4;
        local_7b8 = local_7b8 + 5;
        *puVar13 = (char)param_1[0x81];
        puVar13[1] = *(undefined1 *)((longlong)param_1 + 0x205);
        puVar13[2] = *(undefined1 *)((longlong)param_1 + 0x206);
        puVar13[3] = (char)((uint)(iVar9 + 0x11) >> 8);
        puVar13[4] = (char)(iVar9 + 0x11);
        local_804 = local_804 + 1;
        puVar11 = (undefined1 *)(ulonglong)local_804;
        puVar32 = puVar32 + (iVar9 + 0x16);
        puVar13 = local_7e0;
        uVar19 = local_7d0;
        local_7c8 = puVar32;
      } while (local_804 < uVar23);
    }
    aesni_multi_cbc_encrypt(&local_6a8,param_1,param_5);
    OPENSSL_cleanse(&local_568,0x400);
    OPENSSL_cleanse(puVar13,0x100);
  }
  return puVar32;
}

