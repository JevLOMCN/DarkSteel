// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// EVP_PBE_scrypt @ 14f7a7400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
EVP_PBE_scrypt(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
              ulonglong param_5,ulonglong param_6,ulonglong param_7,ulonglong param_8,
              longlong param_9,undefined4 param_10)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar14;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 local_68;
  
  uVar14 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  local_68 = 0;
  if (param_6 == 0) {
    return 0;
  }
  if (param_7 == 0) {
    return 0;
  }
  if (param_5 < 2) {
    return 0;
  }
  if ((param_5 & param_5 - 1) != 0) {
    return 0;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_6;
  if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x3fffffff)) / auVar3,0) < param_7) {
    uVar7 = CONCAT44(uVar14,0xae);
LAB_14f7a7474:
    ERR_put_error(6,0xb5,0xac,"crypto\\evp\\pbe_scrypt.c",uVar7);
    return 0;
  }
  if ((param_6 << 4 < 0x40) && ((ulonglong)(1L << ((byte)(param_6 << 4) & 0x3f)) <= param_5)) {
    uVar7 = CONCAT44(uVar14,0xb9);
    goto LAB_14f7a7474;
  }
  uVar9 = param_6 * param_7 * 0x80;
  if (0x7fffffff < uVar9) {
    uVar7 = CONCAT44(uVar14,0xcb);
LAB_14f7a7527:
    ERR_put_error(6,0xb5,0xac,"crypto\\evp\\pbe_scrypt.c",uVar7);
    return 0;
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_6;
  if (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x1ffffffffffffff)) / auVar4,0) < param_5 + 2) {
    uVar7 = CONCAT44(uVar14,0xd5);
    goto LAB_14f7a7527;
  }
  uVar10 = (param_5 + 2) * param_6 * 0x80;
  if (~uVar10 < uVar9) {
    uVar7 = CONCAT44(uVar14,0xdc);
    goto LAB_14f7a7527;
  }
  uVar10 = uVar10 + uVar9;
  uVar8 = 0x2000000;
  if (param_8 != 0) {
    uVar8 = param_8;
  }
  if (uVar8 < uVar10) {
    ERR_put_error(6,0xb5,0xac,"crypto\\evp\\pbe_scrypt.c",CONCAT44(uVar14,0xe8));
    return 0;
  }
  if (param_9 == 0) {
    return 1;
  }
  lVar6 = CRYPTO_malloc(uVar10,"crypto\\evp\\pbe_scrypt.c",0xf0);
  if (lVar6 == 0) {
    ERR_put_error(6,0xb5,0x41,"crypto\\evp\\pbe_scrypt.c",CONCAT44(uVar14,0xf2));
    return 0;
  }
  lVar1 = lVar6 + uVar9;
  uVar7 = EVP_sha256();
  uVar12 = CONCAT44(uVar14,1);
  iVar5 = PKCS5_PBKDF2_HMAC(param_1,param_2,param_3,param_4,uVar12,uVar7,(int)uVar9,lVar6);
  uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
  if (iVar5 != 0) {
    if (param_7 != 0) {
      lVar2 = param_6 * 0x80 + lVar1;
      lVar11 = lVar6;
      do {
        lVar13 = lVar2;
        FUN_14f7a7f30(lVar11,param_6,param_5,lVar1,lVar2,param_6 * 0x100 + lVar1);
        uVar14 = (undefined4)((ulonglong)lVar13 >> 0x20);
        lVar11 = lVar11 + param_6 * 0x80;
        param_7 = param_7 - 1;
      } while (param_7 != 0);
    }
    uVar7 = EVP_sha256();
    uVar12 = CONCAT44(uVar14,1);
    iVar5 = PKCS5_PBKDF2_HMAC(param_1,param_2,lVar6,uVar9 & 0xffffffff,uVar12,uVar7,param_10,param_9
                             );
    uVar14 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if (iVar5 != 0) {
      local_68 = 1;
      goto LAB_14f7a7726;
    }
  }
  ERR_put_error(6,0xb5,0xb5,"crypto\\evp\\pbe_scrypt.c",CONCAT44(uVar14,0x105));
LAB_14f7a7726:
  CRYPTO_clear_free(lVar6,uVar10,"crypto\\evp\\pbe_scrypt.c",0x107);
  return local_68;
}

// FUN_14f7a7780 @ 14f7a7780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f7a7780(uint *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_c8 [32];
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88 [7];
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint auStack_4c [5];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x14f7a77a7;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_90 = param_1;
  local_98 = 4;
  local_88[2] = (uint)*(undefined8 *)(param_1 + 2);
  local_88[3] = (uint)((ulonglong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uStack_6c = (uint)((ulonglong)*(undefined8 *)(param_1 + 6) >> 0x20);
  local_88[6] = (uint)*(undefined8 *)(param_1 + 6);
  local_88[5] = (uint)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20);
  local_88[4] = (uint)*(undefined8 *)(param_1 + 4);
  uStack_5c = (uint)((ulonglong)*(undefined8 *)(param_1 + 10) >> 0x20);
  uStack_60 = (uint)*(undefined8 *)(param_1 + 10);
  uStack_64 = (uint)((ulonglong)*(undefined8 *)(param_1 + 8) >> 0x20);
  local_68 = (uint)*(undefined8 *)(param_1 + 8);
  auStack_4c[0] = (uint)((ulonglong)*(undefined8 *)(param_1 + 0xe) >> 0x20);
  uStack_50 = (uint)*(undefined8 *)(param_1 + 0xe);
  uStack_54 = (uint)((ulonglong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  local_58 = (uint)*(undefined8 *)(param_1 + 0xc);
  local_a4 = local_88[2];
  local_88[1] = (uint)((ulonglong)*(undefined8 *)param_1 >> 0x20);
  local_a8 = local_88[1];
  local_88[0] = (uint)*(undefined8 *)param_1;
  local_a0 = local_88[0];
  do {
    local_88[4] = local_88[4] ^ ((local_a0 + local_58) * 0x80 | local_a0 + local_58 >> 0x19);
    local_68 = local_68 ^ ((local_a0 + local_88[4]) * 0x200 | local_a0 + local_88[4] >> 0x17);
    local_9c = local_58 ^ ((local_68 + local_88[4]) * 0x2000 | local_68 + local_88[4] >> 0x13);
    local_a0 = local_a0 ^ (local_68 + local_9c >> 0xe | (local_68 + local_9c) * 0x40000);
    uStack_64 = uStack_64 ^ ((local_a8 + local_88[5]) * 0x80 | local_a8 + local_88[5] >> 0x19);
    uStack_54 = uStack_54 ^ ((uStack_64 + local_88[5]) * 0x200 | uStack_64 + local_88[5] >> 0x17);
    local_a8 = local_a8 ^ ((uStack_54 + uStack_64) * 0x2000 | uStack_54 + uStack_64 >> 0x13);
    uVar9 = local_a8 + uStack_54;
    local_88[5] = local_88[5] ^ (uVar9 >> 0xe | uVar9 * 0x40000);
    uStack_50 = uStack_50 ^ ((local_88[6] + uStack_60) * 0x80 | local_88[6] + uStack_60 >> 0x19);
    local_a4 = local_a4 ^ ((uStack_50 + uStack_60) * 0x200 | uStack_50 + uStack_60 >> 0x17);
    local_88[6] = local_88[6] ^ ((local_a4 + uStack_50) * 0x2000 | local_a4 + uStack_50 >> 0x13);
    uVar9 = local_a4 + local_88[6];
    uStack_60 = uStack_60 ^ (uVar9 >> 0xe | uVar9 * 0x40000);
    local_88[3] = local_88[3] ^
                  ((uStack_5c + auStack_4c[0]) * 0x80 | uStack_5c + auStack_4c[0] >> 0x19);
    uStack_6c = uStack_6c ^
                ((local_88[3] + auStack_4c[0]) * 0x200 | local_88[3] + auStack_4c[0] >> 0x17);
    uStack_5c = uStack_5c ^ ((uStack_6c + local_88[3]) * 0x2000 | uStack_6c + local_88[3] >> 0x13);
    uVar9 = uStack_6c + uStack_5c;
    auStack_4c[0] = auStack_4c[0] ^ (uVar9 >> 0xe | uVar9 * 0x40000);
    local_a8 = local_a8 ^ ((local_88[3] + local_a0) * 0x80 | local_88[3] + local_a0 >> 0x19);
    local_a4 = local_a4 ^ ((local_a8 + local_a0) * 0x200 | local_a8 + local_a0 >> 0x17);
    local_88[3] = local_88[3] ^ ((local_a4 + local_a8) * 0x2000 | local_a4 + local_a8 >> 0x13);
    local_a0 = local_a0 ^ (local_a4 + local_88[3] >> 0xe | (local_a4 + local_88[3]) * 0x40000);
    local_88[6] = local_88[6] ^
                  ((local_88[5] + local_88[4]) * 0x80 | local_88[5] + local_88[4] >> 0x19);
    local_88[1] = local_a8;
    local_88[0] = local_a0;
    uStack_6c = uStack_6c ^
                ((local_88[6] + local_88[5]) * 0x200 | local_88[6] + local_88[5] >> 0x17);
    local_88[4] = local_88[4] ^
                  ((uStack_6c + local_88[6]) * 0x2000 | uStack_6c + local_88[6] >> 0x13);
    local_88[5] = local_88[5] ^
                  (uStack_6c + local_88[4] >> 0xe | (uStack_6c + local_88[4]) * 0x40000);
    uStack_5c = uStack_5c ^ ((uStack_60 + uStack_64) * 0x80 | uStack_60 + uStack_64 >> 0x19);
    local_68 = local_68 ^ ((uStack_5c + uStack_60) * 0x200 | uStack_5c + uStack_60 >> 0x17);
    uStack_64 = uStack_64 ^ ((uStack_5c + local_68) * 0x2000 | uStack_5c + local_68 >> 0x13);
    uStack_60 = uStack_60 ^ (uStack_64 + local_68 >> 0xe | (uStack_64 + local_68) * 0x40000);
    local_58 = local_9c ^ ((auStack_4c[0] + uStack_50) * 0x80 | auStack_4c[0] + uStack_50 >> 0x19);
    uStack_54 = uStack_54 ^ ((auStack_4c[0] + local_58) * 0x200 | auStack_4c[0] + local_58 >> 0x17);
    uStack_50 = uStack_50 ^ ((uStack_54 + local_58) * 0x2000 | uStack_54 + local_58 >> 0x13);
    auStack_4c[0] =
         auStack_4c[0] ^ (uStack_50 + uStack_54 >> 0xe | (uStack_50 + uStack_54) * 0x40000);
    local_98 = local_98 + -1;
  } while (local_98 != 0);
  local_88[2] = local_a4;
  if ((auStack_4c < param_1) || (iVar13 = 0, param_1 + 0xf < local_88)) {
    lVar12 = 2;
    puVar10 = param_1 + 4;
    do {
      piVar2 = (int *)(((longlong)&local_98 - (longlong)param_1) + (longlong)puVar10);
      iVar13 = piVar2[1];
      iVar3 = piVar2[2];
      iVar4 = piVar2[3];
      piVar1 = (int *)(((longlong)local_88 - (longlong)param_1) + (longlong)puVar10);
      iVar5 = *piVar1;
      iVar6 = piVar1[1];
      iVar7 = piVar1[2];
      iVar8 = piVar1[3];
      puVar10[-4] = *piVar2 + puVar10[-4];
      puVar10[-3] = iVar13 + puVar10[-3];
      puVar10[-2] = iVar3 + puVar10[-2];
      puVar10[-1] = iVar4 + puVar10[-1];
      *puVar10 = iVar5 + *puVar10;
      puVar10[1] = iVar6 + puVar10[1];
      puVar10[2] = iVar7 + puVar10[2];
      puVar10[3] = iVar8 + puVar10[3];
      lVar12 = lVar12 + -1;
      puVar10 = puVar10 + 8;
      iVar13 = 0x10;
    } while (lVar12 != 0);
  }
  uVar11 = (ulonglong)iVar13;
  if (uVar11 < 0x10) {
    puVar10 = param_1 + uVar11;
    lVar12 = 0x10 - uVar11;
    do {
      *puVar10 = *puVar10 + *(int *)((longlong)puVar10 + ((longlong)local_88 - (longlong)param_1));
      puVar10 = puVar10 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  OPENSSL_cleanse(local_88,0x40);
  return;
}

// FUN_14f7a7ac0 @ 14f7a7ac0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f7a7ac0(longlong param_1,ulonglong *param_2,longlong param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined1 auVar3 [16];
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_138 [32];
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  longlong local_108;
  ulonglong *local_100;
  ulonglong local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  uint local_d8 [11];
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  undefined1 auStack_60 [24];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_f8 = 0;
  local_98 = param_2[param_3 * 0x10 + -8];
  uStack_90 = (param_2 + param_3 * 0x10 + -8)[1];
  local_88 = param_2[param_3 * 0x10 + -6];
  uStack_80 = (param_2 + param_3 * 0x10 + -6)[1];
  local_e0 = param_3 * 2;
  local_78 = param_2[param_3 * 0x10 + -4];
  uStack_70 = (param_2 + param_3 * 0x10 + -4)[1];
  local_68 = param_2[param_3 * 0x10 + -2];
  auStack_60._0_8_ = (param_2 + param_3 * 0x10 + -2)[1];
  local_f0 = param_3;
  local_e8 = param_1;
  if (local_e0 != 0) {
    do {
      uVar12 = 0;
      if (((uint *)((longlong)param_2 + 0x3cU) < &local_98) || (auStack_60 + 4 < param_2)) {
        do {
          uVar9 = param_2[1];
          *(ulonglong *)((longlong)&local_98 + uVar12 * 4) =
               *param_2 ^ *(ulonglong *)((longlong)&local_98 + uVar12 * 4);
          *(ulonglong *)((longlong)&uStack_90 + uVar12 * 4) =
               uVar9 ^ *(ulonglong *)((longlong)&uStack_90 + uVar12 * 4);
          puVar2 = param_2 + 2;
          uVar9 = param_2[3];
          param_2 = param_2 + 4;
          *(ulonglong *)((longlong)&local_88 + uVar12 * 4) =
               *puVar2 ^ *(ulonglong *)((longlong)&local_88 + uVar12 * 4);
          *(ulonglong *)((longlong)&uStack_80 + uVar12 * 4) =
               uVar9 ^ *(ulonglong *)((longlong)&uStack_80 + uVar12 * 4);
          uVar12 = uVar12 + 8;
        } while (uVar12 < 0x10);
      }
      else {
        do {
          uVar9 = *param_2;
          param_2 = (ulonglong *)((longlong)param_2 + 4);
          puVar1 = (uint *)((longlong)&local_98 + uVar12 * 4);
          *puVar1 = *puVar1 ^ (uint)uVar9;
          uVar12 = uVar12 + 1;
        } while (uVar12 < 0x10);
      }
      local_d8[2] = (uint)uStack_90;
      local_d8[7] = (uint)(uStack_80 >> 0x20);
      local_d8[6] = (uint)uStack_80;
      local_d8[5] = (uint)(local_88 >> 0x20);
      local_d8[4] = (uint)local_88;
      uStack_ac = (uint)(uStack_70 >> 0x20);
      local_d8[10] = (uint)uStack_70;
      local_d8[9] = (uint)(local_78 >> 0x20);
      local_d8[8] = (uint)local_78;
      uStack_9c = SUB84(auStack_60._0_8_,4);
      uStack_a0 = (uint)auStack_60._0_8_;
      uStack_a4 = (uint)(local_68 >> 0x20);
      uVar12 = local_68 & 0xffffffff;
      local_114 = local_d8[2];
      local_d8[1] = (uint)(local_98 >> 0x20);
      local_118 = local_d8[1];
      local_d8[0] = (uint)local_98;
      local_d8[3] = (uint)(uStack_90 >> 0x20);
      local_110 = local_d8[0];
      local_108 = 4;
      do {
        uVar10 = local_110 + (uint)uVar12;
        local_d8[4] = local_d8[4] ^ (uVar10 * 0x80 | uVar10 >> 0x19);
        local_d8[8] = local_d8[8] ^
                      ((local_110 + local_d8[4]) * 0x200 | local_110 + local_d8[4] >> 0x17);
        local_10c = (uint)uVar12 ^
                    ((local_d8[8] + local_d8[4]) * 0x2000 | local_d8[8] + local_d8[4] >> 0x13);
        local_110 = local_110 ^
                    (local_d8[8] + local_10c >> 0xe | (local_d8[8] + local_10c) * 0x40000);
        local_d8[9] = local_d8[9] ^
                      ((local_118 + local_d8[5]) * 0x80 | local_118 + local_d8[5] >> 0x19);
        uStack_a4 = uStack_a4 ^
                    ((local_d8[9] + local_d8[5]) * 0x200 | local_d8[9] + local_d8[5] >> 0x17);
        local_118 = local_118 ^
                    ((uStack_a4 + local_d8[9]) * 0x2000 | uStack_a4 + local_d8[9] >> 0x13);
        uVar10 = local_118 + uStack_a4;
        local_d8[5] = local_d8[5] ^ (uVar10 >> 0xe | uVar10 * 0x40000);
        uStack_a0 = uStack_a0 ^
                    ((local_d8[6] + local_d8[10]) * 0x80 | local_d8[6] + local_d8[10] >> 0x19);
        local_114 = local_114 ^
                    ((uStack_a0 + local_d8[10]) * 0x200 | uStack_a0 + local_d8[10] >> 0x17);
        local_d8[6] = local_d8[6] ^
                      ((local_114 + uStack_a0) * 0x2000 | local_114 + uStack_a0 >> 0x13);
        uVar10 = local_114 + local_d8[6];
        local_d8[10] = local_d8[10] ^ (uVar10 >> 0xe | uVar10 * 0x40000);
        local_d8[3] = local_d8[3] ^ ((uStack_ac + uStack_9c) * 0x80 | uStack_ac + uStack_9c >> 0x19)
        ;
        local_d8[7] = local_d8[7] ^
                      ((local_d8[3] + uStack_9c) * 0x200 | local_d8[3] + uStack_9c >> 0x17);
        uStack_ac = uStack_ac ^
                    ((local_d8[7] + local_d8[3]) * 0x2000 | local_d8[7] + local_d8[3] >> 0x13);
        uVar10 = local_d8[7] + uStack_ac;
        uStack_9c = uStack_9c ^ (uVar10 >> 0xe | uVar10 * 0x40000);
        local_118 = local_118 ^ ((local_d8[3] + local_110) * 0x80 | local_d8[3] + local_110 >> 0x19)
        ;
        local_114 = local_114 ^ ((local_118 + local_110) * 0x200 | local_118 + local_110 >> 0x17);
        local_d8[3] = local_d8[3] ^
                      ((local_114 + local_118) * 0x2000 | local_114 + local_118 >> 0x13);
        local_110 = local_110 ^
                    (local_114 + local_d8[3] >> 0xe | (local_114 + local_d8[3]) * 0x40000);
        local_d8[6] = local_d8[6] ^
                      ((local_d8[5] + local_d8[4]) * 0x80 | local_d8[5] + local_d8[4] >> 0x19);
        local_d8[1] = local_118;
        local_d8[0] = local_110;
        local_d8[7] = local_d8[7] ^
                      ((local_d8[6] + local_d8[5]) * 0x200 | local_d8[6] + local_d8[5] >> 0x17);
        local_d8[4] = local_d8[4] ^
                      ((local_d8[7] + local_d8[6]) * 0x2000 | local_d8[7] + local_d8[6] >> 0x13);
        local_d8[5] = local_d8[5] ^
                      (local_d8[7] + local_d8[4] >> 0xe | (local_d8[7] + local_d8[4]) * 0x40000);
        uStack_ac = uStack_ac ^
                    ((local_d8[10] + local_d8[9]) * 0x80 | local_d8[10] + local_d8[9] >> 0x19);
        local_d8[8] = local_d8[8] ^
                      ((uStack_ac + local_d8[10]) * 0x200 | uStack_ac + local_d8[10] >> 0x17);
        local_d8[9] = local_d8[9] ^
                      ((uStack_ac + local_d8[8]) * 0x2000 | uStack_ac + local_d8[8] >> 0x13);
        local_d8[10] = local_d8[10] ^
                       (local_d8[9] + local_d8[8] >> 0xe | (local_d8[9] + local_d8[8]) * 0x40000);
        uVar10 = local_10c ^ ((uStack_9c + uStack_a0) * 0x80 | uStack_9c + uStack_a0 >> 0x19);
        uVar12 = (ulonglong)uVar10;
        uStack_a4 = uStack_a4 ^ ((uStack_9c + uVar10) * 0x200 | uStack_9c + uVar10 >> 0x17);
        uStack_a0 = uStack_a0 ^ ((uStack_a4 + uVar10) * 0x2000 | uStack_a4 + uVar10 >> 0x13);
        uStack_9c = uStack_9c ^ (uStack_a0 + uStack_a4 >> 0xe | (uStack_a0 + uStack_a4) * 0x40000);
        local_108 = local_108 + -1;
      } while (local_108 != 0);
      local_d8[2] = local_114;
      lVar11 = 0;
      _local_a8 = CONCAT44(uStack_a4,uVar10);
      do {
        iVar4 = *(int *)((longlong)&uStack_90 + lVar11);
        iVar5 = *(int *)((longlong)&uStack_90 + lVar11 + 4);
        iVar6 = *(int *)((longlong)local_d8 + lVar11 + 4);
        iVar7 = *(int *)((longlong)local_d8 + lVar11 + 8);
        iVar8 = *(int *)((longlong)local_d8 + lVar11 + 0xc);
        *(int *)((longlong)&local_98 + lVar11) =
             *(int *)((longlong)local_d8 + lVar11) + *(int *)((longlong)&local_98 + lVar11);
        *(int *)((longlong)&local_98 + lVar11 + 4) =
             iVar6 + *(int *)((longlong)&local_98 + lVar11 + 4);
        *(int *)((longlong)&uStack_90 + lVar11) = iVar7 + iVar4;
        *(int *)((longlong)&uStack_90 + lVar11 + 4) = iVar8 + iVar5;
        auVar3 = *(undefined1 (*) [16])((longlong)&local_88 + lVar11);
        iVar4 = *(int *)((longlong)local_d8 + lVar11 + 0x14);
        iVar5 = *(int *)((longlong)local_d8 + lVar11 + 0x18);
        iVar6 = *(int *)((longlong)local_d8 + lVar11 + 0x1c);
        *(int *)((longlong)&local_88 + lVar11) =
             *(int *)((longlong)local_d8 + lVar11 + 0x10) + auVar3._0_4_;
        *(int *)((longlong)&local_88 + lVar11 + 4) = iVar4 + auVar3._4_4_;
        *(int *)((longlong)&uStack_80 + lVar11) = iVar5 + auVar3._8_4_;
        *(int *)((longlong)&uStack_80 + lVar11 + 4) = iVar6 + auVar3._12_4_;
        lVar11 = lVar11 + 0x20;
      } while (lVar11 < 0x40);
      local_100 = param_2;
      OPENSSL_cleanse(local_d8,0x40);
      uVar12 = local_f8 + 1;
      lVar11 = ((ulonglong)((uint)local_f8 & 1) * local_f0 + (local_f8 >> 1)) * 0x40;
      *(ulonglong *)(lVar11 + local_e8) = local_98;
      ((ulonglong *)(lVar11 + local_e8))[1] = uStack_90;
      puVar2 = (ulonglong *)(lVar11 + 0x10 + local_e8);
      *puVar2 = local_88;
      puVar2[1] = uStack_80;
      puVar2 = (ulonglong *)(lVar11 + 0x20 + local_e8);
      *puVar2 = local_78;
      puVar2[1] = uStack_70;
      puVar2 = (ulonglong *)(lVar11 + 0x30 + local_e8);
      *puVar2 = local_68;
      puVar2[1] = auStack_60._0_8_;
      local_f8 = uVar12;
    } while (uVar12 < local_e0);
  }
  OPENSSL_cleanse(&local_98,0x40);
  return;
}

// FUN_14f7a7f30 @ 14f7a7f30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7a7f30(byte *param_1,longlong param_2,ulonglong param_3,ulonglong *param_4,uint *param_5
                  ,uint *param_6)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  uVar10 = param_2 * 0x20;
  pbVar4 = param_1;
  puVar8 = param_6;
  for (uVar12 = uVar10; uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar8 = (uint)*pbVar4;
    *puVar8 = *puVar8 | (uint)pbVar4[1] << 8;
    *puVar8 = *puVar8 | (uint)pbVar4[2] << 0x10;
    *puVar8 = *puVar8 | (uint)pbVar4[3] << 0x18;
    puVar8 = puVar8 + 1;
    pbVar4 = pbVar4 + 4;
  }
  if (1 < param_3) {
    lVar13 = param_3 - 1;
    do {
      FUN_14f7a7ac0(puVar8,puVar8 + param_2 * -0x20,param_2);
      puVar8 = puVar8 + param_2 * 0x20;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  FUN_14f7a7ac0(param_4,(uint *)((param_3 * 0x80 + -0x80) * param_2 + (longlong)param_6),param_2);
  uVar9 = 0;
  for (uVar12 = param_3; uVar12 != 0; uVar12 = uVar12 - 1) {
    puVar6 = (ulonglong *)
             (param_6 +
             ((ulonglong)(uint)param_4[param_2 * 0x10 + -8] % param_3 & 0xffffffff) * param_2 * 0x20
             );
    if (uVar10 != 0) {
      if (((uVar10 < 8) ||
          ((param_5 <= (uint *)((longlong)puVar6 + (uVar10 - 1) * 4) &&
           (puVar6 <= param_5 + param_2 * 0x20 + -1)))) ||
         ((param_5 <= (uint *)((longlong)param_4 + param_2 * 0x80 + -4) &&
          (param_4 <= param_5 + param_2 * 0x20 + -1)))) {
        puVar8 = param_5;
        uVar11 = uVar10;
        do {
          uVar5 = *puVar6;
          puVar6 = (ulonglong *)((longlong)puVar6 + 4);
          *puVar8 = *(uint *)((longlong)puVar8 + ((longlong)param_4 - (longlong)param_5)) ^
                    (uint)uVar5;
          uVar11 = uVar11 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar11 != 0);
      }
      else {
        puVar7 = (ulonglong *)(param_5 + 4);
        uVar11 = uVar9;
        do {
          uVar5 = puVar6[1];
          uVar11 = uVar11 + 8;
          puVar1 = (ulonglong *)((longlong)param_4 + (-0x10 - (longlong)param_5) + (longlong)puVar7)
          ;
          uVar3 = puVar1[1];
          puVar7[-2] = *puVar1 ^ *puVar6;
          puVar7[-1] = uVar3 ^ uVar5;
          puVar1 = (ulonglong *)
                   ((longlong)param_4 + (-0x20 - (longlong)param_5) + (longlong)(puVar7 + 4));
          uVar3 = puVar1[1];
          uVar5 = puVar6[3];
          *puVar7 = *puVar1 ^ puVar6[2];
          puVar7[1] = uVar3 ^ uVar5;
          puVar6 = puVar6 + 4;
          puVar7 = puVar7 + 4;
        } while (uVar11 < uVar10);
      }
    }
    FUN_14f7a7ac0(param_4,param_5,param_2);
  }
  if (uVar10 != 0) {
    do {
      uVar2 = *(uint *)((longlong)param_4 + uVar9 * 4);
      *param_1 = (byte)uVar2;
      uVar9 = uVar9 + 1;
      param_1[1] = (byte)(uVar2 >> 8);
      param_1[2] = (byte)(uVar2 >> 0x10);
      param_1[3] = (byte)(uVar2 >> 0x18);
      param_1 = param_1 + 4;
    } while (uVar9 < uVar10);
  }
  return;
}

