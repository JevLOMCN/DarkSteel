// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 37

// X448 @ 14f7971f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool X448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = x448_int(param_1,param_3,param_2,param_4,0x14f7971fa);
  return iVar1 == -1;
}

// X448_public_from_private @ 14f797220

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X448_public_from_private(void)

{
  x448_derive_public_key();
  return;
}

// FUN_14f797240 @ 14f797240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f797240(longlong param_1,longlong param_2,int param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  int *piVar24;
  int *piVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  int local_190;
  int iStack_18c;
  undefined8 local_188;
  longlong local_180;
  undefined1 *local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  undefined8 local_150;
  int local_148 [15];
  int iStack_10c;
  int local_108;
  int local_104;
  int local_100;
  undefined1 local_fc [52];
  undefined1 local_c8 [64];
  ulonglong local_88;
  
  uVar18 = _UNK_1534e60cc;
  uVar17 = _UNK_1534e60c8;
  uVar16 = _UNK_1534e60c4;
  uVar15 = ___xmm_1ffffffe1ffffffe1ffffffe1ffffffe;
  uVar14 = _UNK_1534e60bc;
  uVar13 = _UNK_1534e60b8;
  uVar12 = _UNK_1534e60b4;
  uVar11 = ___xmm_1ffffffc1ffffffc1ffffffc1ffffffc;
  iVar10 = _UNK_150b50dec;
  iVar9 = _UNK_150b50de8;
  iVar8 = _UNK_150b50de4;
  iVar7 = ___xmm_00000008000000080000000800000008;
  iVar6 = _UNK_150631e0c;
  iVar5 = _UNK_150631e08;
  iVar3 = __xmm_00000003000000020000000100000000._4_4_;
  iVar2 = (int)__xmm_00000003000000020000000100000000;
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  lVar31 = (longlong)&local_188 - param_1;
  lVar32 = (longlong)&local_188 + (4 - param_1);
  lVar4 = -param_1;
  piVar24 = (int *)(param_1 + 0x44);
  lVar30 = 4;
  lVar29 = (longlong)&local_180 - param_1;
  lVar27 = 4;
  piVar25 = piVar24;
  local_170 = lVar29;
  local_168 = param_1;
  local_160 = lVar31;
  local_158 = lVar32;
  do {
    *(int *)((longlong)&iStack_18c + lVar4 + (longlong)piVar25) = piVar25[-1] - piVar25[-0x11];
    *(int *)(lVar31 + (longlong)piVar25) = *piVar25 - piVar25[-0x10];
    *(int *)(lVar32 + (longlong)piVar25) = piVar25[1] - piVar25[-0xf];
    *(int *)(lVar29 + (longlong)piVar25) = piVar25[2] - piVar25[-0xe];
    piVar25 = piVar25 + 4;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  uVar26 = 0;
  piVar25 = local_148;
  do {
    iVar23 = uVar26 + 4;
    uVar33 = -(uint)(uVar26 + (int)__xmm_00000003000000020000000100000000 ==
                    ___xmm_00000008000000080000000800000008);
    uVar35 = -(uint)(uVar26 + __xmm_00000003000000020000000100000000._4_4_ == _UNK_150b50de4);
    uVar37 = -(uint)(uVar26 + _UNK_150631e08 == _UNK_150b50de8);
    uVar39 = -(uint)(uVar26 + _UNK_150631e0c == _UNK_150b50dec);
    uVar26 = uVar26 + 8;
    uVar34 = -(uint)(iVar23 + (int)__xmm_00000003000000020000000100000000 ==
                    ___xmm_00000008000000080000000800000008);
    uVar36 = -(uint)(iVar23 + __xmm_00000003000000020000000100000000._4_4_ == _UNK_150b50de4);
    uVar38 = -(uint)(iVar23 + _UNK_150631e08 == _UNK_150b50de8);
    uVar40 = -(uint)(iVar23 + _UNK_150631e0c == _UNK_150b50dec);
    *piVar25 = (~uVar33 & ___xmm_1ffffffe1ffffffe1ffffffe1ffffffe |
               ___xmm_1ffffffc1ffffffc1ffffffc1ffffffc & uVar33) + *piVar25;
    piVar25[1] = (~uVar35 & _UNK_1534e60c4 | _UNK_1534e60b4 & uVar35) + piVar25[1];
    piVar25[2] = (~uVar37 & _UNK_1534e60c8 | _UNK_1534e60b8 & uVar37) + piVar25[2];
    piVar25[3] = (~uVar39 & _UNK_1534e60cc | _UNK_1534e60bc & uVar39) + piVar25[3];
    auVar1 = *(undefined1 (*) [16])(piVar25 + 4);
    piVar25[4] = (~uVar34 & ___xmm_1ffffffe1ffffffe1ffffffe1ffffffe |
                 ___xmm_1ffffffc1ffffffc1ffffffc1ffffffc & uVar34) + auVar1._0_4_;
    piVar25[5] = (~uVar36 & _UNK_1534e60c4 | _UNK_1534e60b4 & uVar36) + auVar1._4_4_;
    piVar25[6] = (~uVar38 & _UNK_1534e60c8 | _UNK_1534e60b8 & uVar38) + auVar1._8_4_;
    piVar25[7] = (~uVar40 & _UNK_1534e60cc | _UNK_1534e60bc & uVar40) + auVar1._12_4_;
    piVar25 = piVar25 + 8;
  } while (uVar26 < 0x10);
  local_198 = param_2;
  local_190 = param_3;
  FUN_14f799000(local_148);
  gf_mul(&local_108,local_198,local_148);
  lVar27 = 4;
  piVar25 = piVar24;
  do {
    *(int *)((longlong)&iStack_18c + lVar4 + (longlong)piVar25) = piVar25[-0x11] + piVar25[-1];
    *(int *)(lVar31 + (longlong)piVar25) = piVar25[-0x10] + *piVar25;
    *(int *)(lVar32 + (longlong)piVar25) = piVar25[-0xf] + piVar25[1];
    *(int *)(lVar29 + (longlong)piVar25) = piVar25[-0xe] + piVar25[2];
    piVar25 = piVar25 + 4;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  local_150 = param_1 + 0x40;
  gf_mul(local_150,local_198 + 0x40,local_148);
  gf_mul(param_1,local_198 + 0x80,param_1 + 0xc0);
  lVar22 = local_158;
  lVar21 = local_160;
  lVar20 = local_168;
  lVar19 = local_170;
  lVar27 = -param_1;
  local_198 = (longlong)&local_108 + lVar27;
  lVar29 = -param_1;
  local_188 = (longlong)&local_104 + lVar29;
  lVar31 = -param_1;
  local_180 = (longlong)&local_100 + lVar31;
  lVar32 = -param_1;
  local_178 = local_fc + lVar32;
  lVar28 = 4;
  piVar25 = piVar24;
  do {
    *(int *)(((longlong)&iStack_10c - param_1) + (longlong)piVar25) =
         *(int *)((longlong)&local_150 + lVar27 + 4 + (longlong)piVar25) + piVar25[-1];
    *(int *)(((longlong)&local_108 - param_1) + (longlong)piVar25) =
         *(int *)((longlong)local_148 + lVar29 + (longlong)piVar25) + *piVar25;
    *(int *)(((longlong)&local_104 - param_1) + (longlong)piVar25) =
         *(int *)((longlong)local_148 + lVar31 + 4 + (longlong)piVar25) + piVar25[1];
    *(int *)(((longlong)&local_100 - param_1) + (longlong)piVar25) =
         *(int *)((longlong)local_148 + lVar32 + 8 + (longlong)piVar25) + piVar25[2];
    piVar25 = piVar25 + 4;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  lVar28 = 4;
  do {
    *(int *)((longlong)&iStack_18c + lVar4 + (longlong)piVar24) =
         piVar24[-1] - *(int *)((longlong)&local_150 + lVar27 + 4 + (longlong)piVar24);
    *(int *)(lVar21 + (longlong)piVar24) =
         *piVar24 - *(int *)((longlong)local_148 + lVar29 + (longlong)piVar24);
    *(int *)(lVar22 + (longlong)piVar24) =
         piVar24[1] - *(int *)((longlong)local_148 + lVar31 + 4 + (longlong)piVar24);
    *(int *)(lVar19 + (longlong)piVar24) =
         piVar24[2] - *(int *)((longlong)local_148 + lVar32 + 8 + (longlong)piVar24);
    piVar24 = piVar24 + 4;
    lVar28 = lVar28 + -1;
  } while (lVar28 != 0);
  uVar26 = 0;
  piVar24 = local_148;
  do {
    iVar23 = uVar26 + 4;
    uVar33 = -(uint)(uVar26 + iVar2 == iVar7);
    uVar35 = -(uint)(uVar26 + iVar3 == iVar8);
    uVar37 = -(uint)(uVar26 + iVar5 == iVar9);
    uVar39 = -(uint)(uVar26 + iVar6 == iVar10);
    uVar26 = uVar26 + 8;
    uVar34 = -(uint)(iVar23 + iVar2 == iVar7);
    uVar36 = -(uint)(iVar23 + iVar3 == iVar8);
    uVar38 = -(uint)(iVar23 + iVar5 == iVar9);
    uVar40 = -(uint)(iVar23 + iVar6 == iVar10);
    *piVar24 = (uVar11 & uVar33 | ~uVar33 & uVar15) + *piVar24;
    piVar24[1] = (uVar12 & uVar35 | ~uVar35 & uVar16) + piVar24[1];
    piVar24[2] = (uVar13 & uVar37 | ~uVar37 & uVar17) + piVar24[2];
    piVar24[3] = (uVar14 & uVar39 | ~uVar39 & uVar18) + piVar24[3];
    auVar1 = *(undefined1 (*) [16])(piVar24 + 4);
    piVar24[4] = (uVar11 & uVar34 | ~uVar34 & uVar15) + auVar1._0_4_;
    piVar24[5] = (uVar12 & uVar36 | ~uVar36 & uVar16) + auVar1._4_4_;
    piVar24[6] = (uVar13 & uVar38 | ~uVar38 & uVar17) + auVar1._8_4_;
    piVar24[7] = (uVar14 & uVar40 | ~uVar40 & uVar18) + auVar1._12_4_;
    piVar24 = piVar24 + 8;
  } while (uVar26 < 0x10);
  FUN_14f799000(local_148);
  local_170 = lVar20 + 0x80;
  FUN_14f798ed0(lVar20 + 0x40,local_170,lVar20);
  FUN_14f798b00(lVar20 + 0x40,2);
  FUN_14f799000(lVar20 + 0x40);
  lVar4 = local_150;
  piVar24 = (int *)(lVar20 + 0x84);
  do {
    iVar2 = piVar24[-0x1e];
    iVar3 = piVar24[2];
    *(int *)(local_198 + -0x84 + (longlong)piVar24) = piVar24[-0x21] + piVar24[-1];
    *(int *)(local_188 + -0x84 + (longlong)piVar24) = piVar24[-0x20] + *piVar24;
    *(int *)(local_180 + -0x84 + (longlong)piVar24) = piVar24[-0x1f] + piVar24[1];
    piVar24 = piVar24 + 4;
    *(int *)(local_178 + -0x94 + (longlong)piVar24) = iVar2 + iVar3;
    lVar30 = lVar30 + -1;
  } while (lVar30 != 0);
  gf_mul(local_170,&local_108,local_150);
  lVar27 = local_168;
  gf_mul(local_168,lVar4,local_148);
  gf_mul(lVar4,&local_108,local_c8);
  if (local_190 == 0) {
    gf_mul(lVar27 + 0xc0,local_148,local_c8);
  }
  return;
}

// FUN_14f797720 @ 14f797720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f797720(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f797732;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  gf_mul(&local_68,param_1 + 0x80,param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0x80) = local_68;
  *(undefined8 *)(param_1 + 0x88) = uStack_60;
  *(undefined8 *)(param_1 + 0x90) = local_58;
  *(undefined8 *)(param_1 + 0x98) = uStack_50;
  *(undefined4 *)(param_1 + 0xa0) = local_48;
  *(undefined4 *)(param_1 + 0xa4) = uStack_44;
  *(undefined4 *)(param_1 + 0xa8) = uStack_40;
  *(undefined4 *)(param_1 + 0xac) = uStack_3c;
  *(undefined4 *)(param_1 + 0xb0) = local_38;
  *(undefined4 *)(param_1 + 0xb4) = uStack_34;
  *(undefined4 *)(param_1 + 0xb8) = uStack_30;
  *(undefined4 *)(param_1 + 0xbc) = uStack_2c;
  FUN_14f797240(param_1,param_2,param_3);
  return;
}

// FUN_14f7977e0 @ 14f7977e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f7977e0(longlong param_1,undefined4 param_2)

{
  FUN_14f798cc0(param_1,param_1 + 0x40,param_2);
  FUN_14f798bb0(param_1 + 0x80,param_2);
  return;
}

// FUN_14f797880 @ 14f797880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f797880(byte *param_1,byte *param_2,size_t param_3,longlong param_4,longlong param_5)

{
  byte bVar1;
  byte *pbVar2;
  size_t sVar3;
  
  memset(param_1,0,param_3);
  for (; param_4 != 0; param_4 = param_4 + -1) {
    pbVar2 = param_1;
    for (sVar3 = param_3; sVar3 != 0; sVar3 = sVar3 - 1) {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      *pbVar2 = *pbVar2 | (char)(~(byte)((ulonglong)param_5 >> 0x38) &
                                (byte)((ulonglong)(param_5 + -1) >> 0x38)) >> 7 & bVar1;
      pbVar2 = pbVar2 + 1;
    }
    param_5 = param_5 + -1;
  }
  return;
}

// FUN_14f797940 @ 14f797940

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f797940(byte *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = (longlong)param_4;
  memset(param_1,0,0xc0);
  lVar6 = lVar4;
  for (lVar3 = (longlong)param_3; lVar3 != 0; lVar3 = lVar3 + -1) {
    lVar6 = lVar6 + -1;
    lVar5 = 0xc0;
    pbVar2 = param_1;
    do {
      bVar1 = *param_2;
      param_2 = param_2 + 1;
      *pbVar2 = *pbVar2 | (char)(~(byte)((ulonglong)lVar4 >> 0x38) &
                                (byte)((ulonglong)lVar6 >> 0x38)) >> 7 & bVar1;
      lVar5 = lVar5 + -1;
      pbVar2 = pbVar2 + 1;
    } while (lVar5 != 0);
    lVar4 = lVar4 + -1;
  }
  return;
}

// curve448_base_double_scalarmul_non_secret @ 14f797aa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void curve448_base_double_scalarmul_non_secret
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  undefined1 auStack_e68 [32];
  int local_e48;
  int local_e44 [155];
  int local_bd8;
  int local_bd4 [227];
  undefined1 local_848 [2048];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e68;
  FUN_14f799a20(&local_e48,param_2,5);
  FUN_14f799a20(&local_bd8,param_4,3);
  uVar8 = 0;
  uVar6 = 0;
  FUN_14f7996d0(local_848,param_3,3);
  if (local_bd8 < 0) {
    lVar4 = 2;
    puVar3 = (undefined8 *)&curve448_point_identity;
    do {
      uVar7 = puVar3[1];
      *param_1 = *puVar3;
      param_1[1] = uVar7;
      uVar7 = puVar3[3];
      param_1[2] = puVar3[2];
      param_1[3] = uVar7;
      uVar7 = puVar3[5];
      param_1[4] = puVar3[4];
      param_1[5] = uVar7;
      uVar7 = puVar3[7];
      param_1[6] = puVar3[6];
      param_1[7] = uVar7;
      uVar7 = puVar3[9];
      param_1[8] = puVar3[8];
      param_1[9] = uVar7;
      uVar7 = puVar3[0xb];
      param_1[10] = puVar3[10];
      param_1[0xb] = uVar7;
      uVar7 = puVar3[0xd];
      param_1[0xc] = puVar3[0xc];
      param_1[0xd] = uVar7;
      uVar7 = puVar3[0xf];
      param_1[0xe] = puVar3[0xe];
      param_1[0xf] = uVar7;
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 0x10;
      param_1 = param_1 + 0x10;
    } while (lVar4 != 0);
  }
  else {
    if (local_e48 < local_bd8) {
      FUN_14f799200(param_1,local_848 + ((longlong)local_bd4[0] >> 1) * 0x100);
      uVar6 = 1;
    }
    else if (local_bd8 == local_e48) {
      FUN_14f799200(param_1,local_848 + ((longlong)local_bd4[0] >> 1) * 0x100);
      FUN_14f797240(param_1,curve448_wnaf_base + ((longlong)local_e44[0] >> 1) * 0xc0,local_bd8);
      uVar6 = 1;
      uVar8 = 1;
    }
    else {
      FUN_14f7990e0(param_1,curve448_wnaf_base + ((longlong)local_e44[0] >> 1) * 0xc0);
      uVar8 = 1;
      local_bd8 = local_e48;
    }
    iVar5 = local_bd8 + -1;
    if (-1 < iVar5) {
      piVar9 = local_e44 + (ulonglong)uVar8 * 2;
      piVar10 = local_bd4 + (ulonglong)uVar6 * 2;
      do {
        iVar1 = piVar10[-1];
        iVar2 = piVar9[-1];
        if (((iVar5 == 0) || (iVar5 == iVar1)) || (iVar5 == iVar2)) {
          uVar7 = 0;
        }
        else {
          uVar7 = 1;
        }
        FUN_14f7992c0(param_1,param_1,uVar7);
        if (iVar5 == iVar1) {
          iVar1 = *piVar10;
          if (iVar1 < 1) {
            FUN_14f79a110(param_1,local_848 + ((longlong)-iVar1 >> 1) * 0x100);
          }
          else {
            FUN_14f797720(param_1,local_848 + ((longlong)iVar1 >> 1) * 0x100);
          }
          piVar10 = piVar10 + 2;
        }
        if (iVar5 == iVar2) {
          iVar1 = *piVar9;
          if (iVar1 < 1) {
            FUN_14f799be0(param_1,curve448_wnaf_base + ((longlong)-iVar1 >> 1) * 0xc0);
          }
          else {
            FUN_14f797240(param_1,curve448_wnaf_base + ((longlong)iVar1 >> 1) * 0xc0);
          }
          piVar9 = piVar9 + 2;
        }
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
    OPENSSL_cleanse(&local_bd8,0x390);
    OPENSSL_cleanse(&local_e48,0x268);
    OPENSSL_cleanse(local_848,0x800);
  }
  return;
}

// curve448_point_decode_like_eddsa_and_mul_by_ratio @ 14f797e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint curve448_point_decode_like_eddsa_and_mul_by_ratio(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [64];
  undefined1 local_148 [64];
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  byte local_50;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f797e1f;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_88 = *param_2;
  uStack_80 = param_2[1];
  local_78 = param_2[2];
  uStack_70 = param_2[3];
  local_50 = *(byte *)(param_2 + 7) & 0x7f;
  local_68 = *(undefined4 *)(param_2 + 4);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_60 = *(undefined4 *)(param_2 + 5);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar11 = *(byte *)(param_2 + 7) & 0x80;
  local_58 = param_2[6];
  uVar8 = gf_deserialize(param_1 + 0x40,&local_88,1);
  bVar7 = local_50;
  gf_sqr(param_1,param_1 + 0x40);
  puVar1 = (undefined8 *)(param_1 + 0x80);
  gf_sub(puVar1,&DAT_1534e5f70,param_1);
  lVar2 = param_1 + 0xc0;
  gf_mulw_unsigned(lVar2,param_1,0x98a9);
  gf_sub(lVar2,&DAT_1534e5f30,lVar2);
  gf_sub(lVar2,&DAT_1534e5f70,lVar2);
  gf_mul(param_1,puVar1,lVar2);
  uVar9 = gf_isr(lVar2,param_1);
  gf_mul(param_1,lVar2,puVar1);
  uVar10 = gf_lobit(param_1);
  FUN_14f798bb0(param_1,0xffffffffU - ((int)(uVar11 - 1 & ~uVar11) >> 0x1f) ^ uVar10);
  uVar3 = _UNK_1534e5f78;
  *puVar1 = _DAT_1534e5f70;
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  uVar3 = _UNK_1534e5f88;
  *(undefined8 *)(param_1 + 0x90) = _DAT_1534e5f80;
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  uVar6 = _UNK_1534e5f9c;
  uVar5 = _UNK_1534e5f98;
  uVar4 = _UNK_1534e5f94;
  *(undefined4 *)(param_1 + 0xa0) = _DAT_1534e5f90;
  *(undefined4 *)(param_1 + 0xa4) = uVar4;
  *(undefined4 *)(param_1 + 0xa8) = uVar5;
  *(undefined4 *)(param_1 + 0xac) = uVar6;
  uVar6 = _UNK_1534e5fac;
  uVar5 = _UNK_1534e5fa8;
  uVar4 = _UNK_1534e5fa4;
  *(undefined4 *)(param_1 + 0xb0) = _DAT_1534e5fa0;
  *(undefined4 *)(param_1 + 0xb4) = uVar4;
  *(undefined4 *)(param_1 + 0xb8) = uVar5;
  *(undefined4 *)(param_1 + 0xbc) = uVar6;
  gf_sqr(local_c8,param_1);
  gf_sqr(local_188,param_1 + 0x40);
  gf_add(local_108,local_c8,local_188);
  gf_add(lVar2,param_1 + 0x40,param_1);
  gf_sqr(local_148,lVar2);
  gf_sub(local_148,local_148,local_108);
  gf_sub(lVar2,local_188,local_c8);
  gf_sqr(param_1,puVar1);
  gf_add(puVar1,param_1,param_1);
  gf_sub(local_188,puVar1,local_108);
  gf_mul(param_1,local_188,local_148);
  gf_mul(puVar1,lVar2,local_188);
  gf_mul(param_1 + 0x40,lVar2,local_108);
  gf_mul(lVar2,local_148,local_108);
  OPENSSL_cleanse(local_188,0x40);
  OPENSSL_cleanse(local_148,0x40);
  OPENSSL_cleanse(local_c8,0x40);
  OPENSSL_cleanse(local_108,0x40);
  OPENSSL_cleanse(&local_88,0x39);
  return uVar8 & uVar9 & (int)(bVar7 - 1 & ~(uint)bVar7) >> 0x1f;
}

// curve448_point_destroy @ 14f7980c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void curve448_point_destroy(undefined8 param_1)

{
  OPENSSL_cleanse(param_1,0x100);
  return;
}

// curve448_point_double @ 14f7980f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void curve448_point_double(undefined8 param_1,undefined8 param_2)

{
  FUN_14f7992c0(param_1,param_2,0);
  return;
}

// curve448_point_eq @ 14f798110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void curve448_point_eq(longlong param_1,longlong param_2)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98 [64];
  undefined1 local_58 [64];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f798120;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  gf_mul(local_58,param_1 + 0x40,param_2);
  gf_mul(local_98,param_2 + 0x40,param_1);
  gf_eq(local_58,local_98);
  return;
}

// curve448_point_mul_by_ratio_and_encode_like_eddsa @ 14f7981a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void curve448_point_mul_by_ratio_and_encode_like_eddsa(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined1 local_218 [64];
  undefined1 local_1d8 [64];
  undefined1 local_198 [64];
  undefined1 local_158 [64];
  undefined8 local_118 [8];
  undefined1 local_d8 [64];
  undefined1 local_98 [128];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f7981b8;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  lVar15 = 2;
  puVar14 = local_118;
  do {
    uVar9 = param_2[1];
    uVar10 = param_2[2];
    uVar11 = param_2[3];
    *puVar14 = *param_2;
    puVar14[1] = uVar9;
    uVar9 = param_2[4];
    uVar12 = param_2[5];
    puVar14[2] = uVar10;
    puVar14[3] = uVar11;
    uVar10 = param_2[6];
    uVar11 = param_2[7];
    puVar14[4] = uVar9;
    puVar14[5] = uVar12;
    uVar9 = param_2[8];
    uVar12 = param_2[9];
    puVar14[6] = uVar10;
    puVar14[7] = uVar11;
    uVar10 = param_2[10];
    uVar11 = param_2[0xb];
    puVar14[8] = uVar9;
    puVar14[9] = uVar12;
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    uVar2 = *(undefined4 *)((longlong)param_2 + 100);
    uVar3 = *(undefined4 *)(param_2 + 0xd);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x6c);
    puVar14[10] = uVar10;
    puVar14[0xb] = uVar11;
    uVar5 = *(undefined4 *)(param_2 + 0xe);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x74);
    uVar7 = *(undefined4 *)(param_2 + 0xf);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x7c);
    *(undefined4 *)(puVar14 + 0xc) = uVar1;
    *(undefined4 *)((longlong)puVar14 + 100) = uVar2;
    *(undefined4 *)(puVar14 + 0xd) = uVar3;
    *(undefined4 *)((longlong)puVar14 + 0x6c) = uVar4;
    *(undefined4 *)(puVar14 + 0xe) = uVar5;
    *(undefined4 *)((longlong)puVar14 + 0x74) = uVar6;
    *(undefined4 *)(puVar14 + 0xf) = uVar7;
    *(undefined4 *)((longlong)puVar14 + 0x7c) = uVar8;
    lVar15 = lVar15 + -1;
    puVar14 = puVar14 + 0x10;
    param_2 = param_2 + 0x10;
  } while (lVar15 != 0);
  gf_sqr(local_218,local_118);
  gf_sqr(local_1d8,local_d8);
  gf_add(&local_258,local_218,local_1d8);
  gf_add(&local_298,local_d8,local_118);
  gf_sqr(local_198,&local_298);
  gf_sub(local_198,local_198,&local_258);
  gf_sub(&local_298,local_1d8,local_218);
  gf_sqr(local_218,local_98);
  gf_add(local_1d8,local_218,local_218);
  gf_sub(local_1d8,local_1d8,&local_298);
  gf_mul(local_218,local_1d8,local_198);
  gf_mul(local_198,&local_298,&local_258);
  gf_mul(&local_298,&local_258,local_1d8);
  OPENSSL_cleanse(&local_258,0x40);
  gf_sqr(local_158,&local_298);
  gf_isr(&local_258,local_158);
  gf_sqr(local_158,&local_258);
  gf_mul(&local_258,local_158,&local_298);
  local_298 = local_258;
  uStack_290 = uStack_250;
  local_288 = local_248;
  uStack_280 = uStack_240;
  local_278 = local_238;
  uStack_274 = uStack_234;
  uStack_270 = uStack_230;
  uStack_26c = uStack_22c;
  local_268 = local_228;
  uStack_264 = uStack_224;
  uStack_260 = uStack_220;
  uStack_25c = uStack_21c;
  gf_mul(local_1d8,local_218,&local_298);
  gf_mul(local_218,local_198,&local_298);
  *(undefined1 *)(param_1 + 0x38) = 0;
  gf_serialize(param_1,local_218,1);
  bVar13 = gf_lobit(local_1d8);
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) | bVar13 & 0x80;
  OPENSSL_cleanse(local_218,0x40);
  OPENSSL_cleanse(local_198,0x40);
  OPENSSL_cleanse(&local_298,0x40);
  OPENSSL_cleanse(local_1d8,0x40);
  OPENSSL_cleanse(local_118,0x100);
  return;
}

// curve448_point_mul_by_ratio_and_encode_like_x448 @ 14f798450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void curve448_point_mul_by_ratio_and_encode_like_x448(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [64];
  undefined8 local_118 [8];
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f798468;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  lVar14 = 2;
  puVar13 = local_118;
  do {
    uVar9 = param_2[1];
    uVar10 = param_2[2];
    uVar11 = param_2[3];
    *puVar13 = *param_2;
    puVar13[1] = uVar9;
    uVar9 = param_2[4];
    uVar12 = param_2[5];
    puVar13[2] = uVar10;
    puVar13[3] = uVar11;
    uVar10 = param_2[6];
    uVar11 = param_2[7];
    puVar13[4] = uVar9;
    puVar13[5] = uVar12;
    uVar9 = param_2[8];
    uVar12 = param_2[9];
    puVar13[6] = uVar10;
    puVar13[7] = uVar11;
    uVar10 = param_2[10];
    uVar11 = param_2[0xb];
    puVar13[8] = uVar9;
    puVar13[9] = uVar12;
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    uVar2 = *(undefined4 *)((longlong)param_2 + 100);
    uVar3 = *(undefined4 *)(param_2 + 0xd);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x6c);
    puVar13[10] = uVar10;
    puVar13[0xb] = uVar11;
    uVar5 = *(undefined4 *)(param_2 + 0xe);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x74);
    uVar7 = *(undefined4 *)(param_2 + 0xf);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x7c);
    *(undefined4 *)(puVar13 + 0xc) = uVar1;
    *(undefined4 *)((longlong)puVar13 + 100) = uVar2;
    *(undefined4 *)(puVar13 + 0xd) = uVar3;
    *(undefined4 *)((longlong)puVar13 + 0x6c) = uVar4;
    *(undefined4 *)(puVar13 + 0xe) = uVar5;
    *(undefined4 *)((longlong)puVar13 + 0x74) = uVar6;
    *(undefined4 *)(puVar13 + 0xf) = uVar7;
    *(undefined4 *)((longlong)puVar13 + 0x7c) = uVar8;
    lVar14 = lVar14 + -1;
    puVar13 = puVar13 + 0x10;
    param_2 = param_2 + 0x10;
  } while (lVar14 != 0);
  gf_sqr(local_158,local_118);
  gf_isr(&local_198,local_158);
  gf_sqr(local_158,&local_198);
  gf_mul(&local_198,local_158,local_118);
  local_58 = local_198;
  uStack_50 = uStack_190;
  local_48 = local_188;
  uStack_40 = uStack_180;
  local_38 = local_178;
  uStack_34 = uStack_174;
  uStack_30 = uStack_170;
  uStack_2c = uStack_16c;
  local_28 = local_168;
  uStack_24 = uStack_164;
  uStack_20 = uStack_160;
  uStack_1c = uStack_15c;
  gf_mul(local_98,&local_58,local_d8);
  gf_sqr(local_d8,local_98);
  gf_serialize(param_1,local_d8,1);
  OPENSSL_cleanse(local_118,0x100);
  return;
}

// curve448_point_valid @ 14f7985b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint curve448_point_valid(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [64];
  undefined1 local_a8 [64];
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 local_20;
  
  local_20 = 0x14f7985c8;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  gf_mul(local_a8,param_1,param_1 + 0x40);
  gf_mul(local_e8,param_1 + 0x80,param_1 + 0xc0);
  uVar1 = gf_eq(local_a8,local_e8);
  gf_sqr(local_a8,param_1);
  gf_sqr(local_e8,param_1 + 0x40);
  gf_sub(local_a8,local_e8,local_a8);
  gf_sqr(local_e8,param_1 + 0xc0);
  gf_mulw_unsigned(local_68,local_e8,0x98aa);
  gf_sub(local_68,&DAT_1534e5f30,local_68);
  gf_sqr(local_e8,param_1 + 0x80);
  gf_add(local_e8,local_e8,local_68);
  uVar2 = gf_eq(local_a8,local_e8);
  uVar3 = gf_eq(param_1 + 0x80,&DAT_1534e5f30);
  return ~uVar3 & uVar1 & uVar2;
}

// curve448_precomputed_scalarmul @ 14f798710

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void curve448_precomputed_scalarmul(longlong param_1,longlong param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  undefined1 auStack_1a8 [32];
  uint local_188;
  uint local_184;
  uint local_180 [14];
  byte local_148 [128];
  uint local_c8 [16];
  uint local_88 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x14f79872f;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  curve448_scalar_add(local_180,param_3);
  curve448_scalar_halve(local_180);
  iVar11 = 0x12;
  do {
    iVar15 = iVar11;
    if (iVar15 != 0x12) {
      FUN_14f7992c0(param_1);
    }
    uVar16 = 0;
    do {
      uVar10 = 0;
      iVar11 = uVar16 * 0x5a + iVar15;
      uVar12 = iVar11 - 1;
      if (uVar12 < 0x1be) {
        uVar10 = local_180[uVar12 >> 5] >> ((byte)uVar12 & 0x1f) & 1;
      }
      uVar12 = iVar11 + 0x11;
      if (uVar12 < 0x1be) {
        uVar10 = uVar10 | (local_180[uVar12 >> 5] >> ((byte)uVar12 & 0x1f) & 1) * 2;
      }
      uVar12 = iVar11 + 0x23;
      if (uVar12 < 0x1be) {
        uVar10 = uVar10 | (local_180[uVar12 >> 5] >> ((byte)uVar12 & 0x1f) & 1) << 2;
      }
      uVar12 = iVar11 + 0x35;
      if (uVar12 < 0x1be) {
        uVar10 = uVar10 | (local_180[uVar12 >> 5] >> ((byte)uVar12 & 0x1f) & 1) << 3;
      }
      uVar12 = iVar11 + 0x47;
      if (uVar12 < 0x1be) {
        uVar10 = uVar10 | (local_180[uVar12 >> 5] >> ((byte)uVar12 & 0x1f) & 1) << 4;
      }
      uVar12 = ((int)uVar10 >> 4) - 1;
      lVar9 = (longlong)(int)((uVar12 ^ uVar10) & 0xf);
      pbVar8 = (byte *)((ulonglong)(uVar16 << 4) * 0xc0 + param_2);
      memset(local_148,0,0xc0);
      lVar14 = 0x10;
      lVar13 = lVar9;
      do {
        lVar13 = lVar13 + -1;
        bVar2 = (char)(~(byte)((ulonglong)lVar9 >> 0x38) & (byte)((ulonglong)lVar13 >> 0x38)) >> 7;
        uVar7 = 0;
        local_184 = (uint)bVar2;
        local_188 = ~(uint)bVar2;
        do {
          bVar1 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          local_148[uVar7] = local_148[uVar7] | bVar2 & bVar1;
          uVar7 = uVar7 + 1;
        } while (uVar7 < 0xc0);
        lVar9 = lVar9 + -1;
        lVar14 = lVar14 + -1;
      } while (lVar14 != 0);
      FUN_14f798cc0(local_148,local_148 + 0x40,uVar12);
      gf_sub(local_88,&DAT_1534e5f30);
      uVar7 = 0;
      local_184 = ~uVar12;
      do {
        *(uint *)((longlong)local_c8 + uVar7) =
             *(uint *)((longlong)local_88 + uVar7) & uVar12 |
             local_184 & *(uint *)((longlong)local_c8 + uVar7);
        uVar7 = uVar7 + 4;
      } while (uVar7 < 0x40);
      local_188 = uVar12;
      if ((iVar15 == 0x12) && (uVar16 == 0)) {
        gf_add(param_1 + 0x40,local_148 + 0x40,local_148);
        gf_sub(param_1,local_148 + 0x40,local_148);
        gf_mul(param_1 + 0xc0);
        uVar3 = _UNK_1534e5f78;
        *(undefined8 *)(param_1 + 0x80) = _DAT_1534e5f70;
        *(undefined8 *)(param_1 + 0x88) = uVar3;
        uVar3 = _UNK_1534e5f88;
        *(undefined8 *)(param_1 + 0x90) = _DAT_1534e5f80;
        *(undefined8 *)(param_1 + 0x98) = uVar3;
        uVar6 = _UNK_1534e5f9c;
        uVar5 = _UNK_1534e5f98;
        uVar4 = _UNK_1534e5f94;
        *(undefined4 *)(param_1 + 0xa0) = _DAT_1534e5f90;
        *(undefined4 *)(param_1 + 0xa4) = uVar4;
        *(undefined4 *)(param_1 + 0xa8) = uVar5;
        *(undefined4 *)(param_1 + 0xac) = uVar6;
        uVar3 = _UNK_1534e5fa8;
        *(undefined8 *)(param_1 + 0xb0) = _DAT_1534e5fa0;
        *(undefined8 *)(param_1 + 0xb8) = uVar3;
      }
      else {
        FUN_14f797240(param_1);
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < 5);
    iVar11 = iVar15 + -1;
  } while (iVar15 + -1 != 0);
  OPENSSL_cleanse(local_148,0xc0);
  OPENSSL_cleanse(local_180,iVar15 + 0x37);
  return;
}

// FUN_14f798a60 @ 14f798a60

void FUN_14f798a60(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (((param_3 + 0xf < param_1) || (param_1 + 0xf < param_3)) &&
     ((param_2 + 0xf < param_1 || (param_1 + 0xf < param_2)))) {
    lVar11 = 2;
    piVar10 = param_3 + 4;
    do {
      iVar4 = piVar10[-3];
      iVar5 = piVar10[-2];
      iVar6 = piVar10[-1];
      piVar2 = (int *)((longlong)param_2 + (-0x10 - (longlong)param_3) + (longlong)piVar10);
      iVar7 = piVar2[1];
      iVar8 = piVar2[2];
      iVar9 = piVar2[3];
      piVar1 = piVar10 + 8;
      piVar3 = (int *)((longlong)param_1 + (-0x30 - (longlong)param_3) + (longlong)piVar1);
      *piVar3 = *piVar2 + piVar10[-4];
      piVar3[1] = iVar7 + iVar4;
      piVar3[2] = iVar8 + iVar5;
      piVar3[3] = iVar9 + iVar6;
      piVar2 = (int *)((longlong)param_2 + (-0x20 - (longlong)param_3) + (longlong)piVar1);
      iVar4 = piVar2[1];
      iVar5 = piVar2[2];
      iVar6 = piVar2[3];
      iVar7 = piVar10[1];
      iVar8 = piVar10[2];
      iVar9 = piVar10[3];
      piVar3 = (int *)((longlong)param_1 + (-0x20 - (longlong)param_3) + (longlong)piVar1);
      *piVar3 = *piVar2 + *piVar10;
      piVar3[1] = iVar4 + iVar7;
      piVar3[2] = iVar5 + iVar8;
      piVar3[3] = iVar6 + iVar9;
      lVar11 = lVar11 + -1;
      piVar10 = piVar1;
    } while (lVar11 != 0);
    return;
  }
  lVar12 = (longlong)param_2 - (longlong)param_3;
  lVar13 = 0x10;
  lVar11 = (longlong)param_1 - (longlong)param_3;
  do {
    *(int *)((longlong)param_3 + lVar11) = *(int *)((longlong)param_3 + lVar12) + *param_3;
    param_3 = param_3 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  return;
}

// FUN_14f798b00 @ 14f798b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f798b00(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  
  iVar10 = _UNK_150b50dec;
  iVar9 = _UNK_150b50de8;
  iVar8 = _UNK_150b50de4;
  iVar7 = ___xmm_00000008000000080000000800000008;
  iVar6 = _UNK_150631e0c;
  iVar5 = _UNK_150631e08;
  iVar4 = __xmm_00000003000000020000000100000000._4_4_;
  iVar3 = (int)__xmm_00000003000000020000000100000000;
  uVar11 = param_2 * 0xfffffff;
  uVar2 = param_2 * 0xffffffe;
  uVar12 = 0;
  do {
    iVar1 = uVar12 + 4;
    iVar13 = uVar12 + iVar3;
    iVar16 = uVar12 + iVar4;
    iVar19 = uVar12 + iVar5;
    iVar22 = uVar12 + iVar6;
    uVar12 = uVar12 + 8;
    uVar14 = -(uint)(iVar13 == iVar7);
    uVar17 = -(uint)(iVar16 == iVar8);
    uVar20 = -(uint)(iVar19 == iVar9);
    uVar23 = -(uint)(iVar22 == iVar10);
    uVar15 = -(uint)(iVar1 + iVar3 == iVar7);
    uVar18 = -(uint)(iVar1 + iVar4 == iVar8);
    uVar21 = -(uint)(iVar1 + iVar5 == iVar9);
    uVar24 = -(uint)(iVar1 + iVar6 == iVar10);
    *param_1 = (~uVar14 & uVar11 | uVar14 & uVar2) + *param_1;
    param_1[1] = (~uVar17 & uVar11 | uVar17 & uVar2) + param_1[1];
    param_1[2] = (~uVar20 & uVar11 | uVar20 & uVar2) + param_1[2];
    param_1[3] = (~uVar23 & uVar11 | uVar23 & uVar2) + param_1[3];
    param_1[4] = (~uVar15 & uVar11 | uVar15 & uVar2) + param_1[4];
    param_1[5] = (~uVar18 & uVar11 | uVar18 & uVar2) + param_1[5];
    param_1[6] = (~uVar21 & uVar11 | uVar21 & uVar2) + param_1[6];
    param_1[7] = (~uVar24 & uVar11 | uVar24 & uVar2) + param_1[7];
    param_1 = param_1 + 8;
  } while (uVar12 < 0x10);
  return;
}

// FUN_14f798bb0 @ 14f798bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f798bb0(uint *param_1,uint param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined1 auStack_88 [48];
  uint local_58 [16];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f798bc0;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  gf_sub(local_58,&DAT_1534e5f30,param_1);
  lVar2 = 0x10;
  puVar1 = param_1;
  do {
    *puVar1 = *(uint *)(auStack_88 + (0x2c - (longlong)param_1) + (longlong)(puVar1 + 1)) & param_2
              | ~param_2 & *puVar1;
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (lVar2 != 0);
  return;
}

// FUN_14f798c50 @ 14f798c50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f798c50(longlong param_1,longlong param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  uint *puVar2;
  longlong lVar3;
  
  lVar3 = 0x10;
  puVar2 = param_3;
  do {
    puVar1 = puVar2 + 1;
    *(uint *)((param_1 - (longlong)param_3) + -4 + (longlong)puVar1) =
         param_4 & *puVar2 |
         *(uint *)((param_2 - (longlong)param_3) + -4 + (longlong)puVar1) & ~param_4;
    lVar3 = lVar3 + -1;
    puVar2 = puVar1;
  } while (lVar3 != 0);
  return;
}

// FUN_14f798cc0 @ 14f798cc0

void FUN_14f798cc0(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if ((param_2 <= param_1 + 0xf) && (param_1 <= param_2 + 0xf)) {
    lVar8 = 0x10;
    puVar7 = param_2;
    do {
      uVar4 = *(uint *)((longlong)puVar7 + ((longlong)param_1 - (longlong)param_2));
      uVar6 = (uVar4 ^ *puVar7) & param_3;
      *(uint *)((longlong)puVar7 + ((longlong)param_1 - (longlong)param_2)) = uVar4 ^ uVar6;
      *puVar7 = *puVar7 ^ uVar6;
      lVar8 = lVar8 + -1;
      puVar7 = puVar7 + 1;
    } while (lVar8 != 0);
    return;
  }
  lVar8 = 2;
  puVar7 = param_2 + 4;
  do {
    puVar2 = (uint *)((longlong)param_1 + (-0x10 - (longlong)param_2) + (longlong)puVar7);
    uVar4 = puVar2[1];
    uVar6 = puVar2[2];
    uVar5 = puVar2[3];
    puVar1 = puVar7 + 8;
    uVar9 = (*puVar2 ^ puVar7[-4]) & param_3;
    uVar10 = (uVar4 ^ puVar7[-3]) & param_3;
    uVar11 = (uVar6 ^ puVar7[-2]) & param_3;
    uVar12 = (uVar5 ^ puVar7[-1]) & param_3;
    puVar3 = (uint *)((longlong)param_1 + (-0x30 - (longlong)param_2) + (longlong)puVar1);
    *puVar3 = uVar9 ^ *puVar2;
    puVar3[1] = uVar10 ^ uVar4;
    puVar3[2] = uVar11 ^ uVar6;
    puVar3[3] = uVar12 ^ uVar5;
    puVar7[-4] = uVar9 ^ puVar7[-4];
    puVar7[-3] = uVar10 ^ puVar7[-3];
    puVar7[-2] = uVar11 ^ puVar7[-2];
    puVar7[-1] = uVar12 ^ puVar7[-1];
    puVar2 = (uint *)((longlong)param_1 + (-0x20 - (longlong)param_2) + (longlong)puVar1);
    uVar4 = puVar2[1];
    uVar6 = puVar2[2];
    uVar5 = puVar2[3];
    uVar9 = (*puVar7 ^ *puVar2) & param_3;
    uVar10 = (puVar7[1] ^ uVar4) & param_3;
    uVar11 = (puVar7[2] ^ uVar6) & param_3;
    uVar12 = (puVar7[3] ^ uVar5) & param_3;
    puVar3 = (uint *)((longlong)param_1 + (-0x20 - (longlong)param_2) + (longlong)puVar1);
    *puVar3 = uVar9 ^ *puVar2;
    puVar3[1] = uVar10 ^ uVar4;
    puVar3[2] = uVar11 ^ uVar6;
    puVar3[3] = uVar12 ^ uVar5;
    *puVar7 = uVar9 ^ *puVar7;
    puVar7[1] = uVar10 ^ puVar7[1];
    puVar7[2] = uVar11 ^ puVar7[2];
    puVar7[3] = uVar12 ^ puVar7[3];
    lVar8 = lVar8 + -1;
    puVar7 = puVar1;
  } while (lVar8 != 0);
  return;
}

// FUN_14f798dd0 @ 14f798dd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f798dd0(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f798de0;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  gf_sqr(local_58);
  gf_isr(&local_98,local_58);
  gf_sqr(local_58,&local_98);
  gf_mul(&local_98,local_58,param_2);
  *param_1 = local_98;
  param_1[1] = uStack_90;
  param_1[2] = local_88;
  param_1[3] = uStack_80;
  param_1[4] = local_78;
  param_1[5] = uStack_70;
  param_1[6] = local_68;
  param_1[7] = uStack_60;
  return;
}

// FUN_14f798e80 @ 14f798e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f798e80(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (0 < param_3) {
    gf_mulw_unsigned();
    return;
  }
  gf_mulw_unsigned(param_1,param_2,-param_3);
  gf_sub(param_1,&DAT_1534e5f30,param_1);
  return;
}

// FUN_14f798ed0 @ 14f798ed0

void FUN_14f798ed0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (((param_3 + 0xf < param_1) || (param_1 + 0xf < param_3)) &&
     ((param_2 + 0xf < param_1 || (param_1 + 0xf < param_2)))) {
    lVar11 = 2;
    piVar10 = param_3 + 4;
    do {
      iVar4 = piVar10[-3];
      iVar5 = piVar10[-2];
      iVar6 = piVar10[-1];
      piVar2 = (int *)((longlong)param_2 + (-0x10 - (longlong)param_3) + (longlong)piVar10);
      iVar7 = piVar2[1];
      iVar8 = piVar2[2];
      iVar9 = piVar2[3];
      piVar1 = piVar10 + 8;
      piVar3 = (int *)((longlong)param_1 + (-0x30 - (longlong)param_3) + (longlong)piVar1);
      *piVar3 = *piVar2 - piVar10[-4];
      piVar3[1] = iVar7 - iVar4;
      piVar3[2] = iVar8 - iVar5;
      piVar3[3] = iVar9 - iVar6;
      piVar2 = (int *)((longlong)param_2 + (-0x20 - (longlong)param_3) + (longlong)piVar1);
      iVar4 = piVar2[1];
      iVar5 = piVar2[2];
      iVar6 = piVar2[3];
      iVar7 = piVar10[1];
      iVar8 = piVar10[2];
      iVar9 = piVar10[3];
      piVar3 = (int *)((longlong)param_1 + (-0x20 - (longlong)param_3) + (longlong)piVar1);
      *piVar3 = *piVar2 - *piVar10;
      piVar3[1] = iVar4 - iVar7;
      piVar3[2] = iVar5 - iVar8;
      piVar3[3] = iVar6 - iVar9;
      lVar11 = lVar11 + -1;
      piVar10 = piVar1;
    } while (lVar11 != 0);
    return;
  }
  lVar12 = (longlong)param_2 - (longlong)param_3;
  lVar13 = 0x10;
  lVar11 = (longlong)param_1 - (longlong)param_3;
  do {
    *(int *)((longlong)param_3 + lVar11) = *(int *)((longlong)param_3 + lVar12) - *param_3;
    param_3 = param_3 + 1;
    lVar13 = lVar13 + -1;
  } while (lVar13 != 0);
  return;
}

// FUN_14f798f70 @ 14f798f70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f798f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0x14f798f7a;
  FUN_14f798ed0();
  FUN_14f798b00(param_1,2,param_3,param_4,uVar1);
  FUN_14f799000(param_1);
  return;
}

// FUN_14f798fb0 @ 14f798fb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f798fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_4;
  FUN_14f798ed0();
  iVar1 = (int)uVar2;
  FUN_14f798b00(param_1,uVar2 & 0xffffffff);
  if (2 < iVar1 + 1) {
    FUN_14f799000(param_1);
    return;
  }
  return;
}

// FUN_14f799000 @ 14f799000

void FUN_14f799000(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = param_1[0xf];
  param_1[8] = param_1[8] + (uVar1 >> 0x1c);
  puVar2 = param_1 + 0xd;
  uVar3 = 0xd;
  do {
    puVar2[2] = (param_1[uVar3 + 1] >> 0x1c) + (puVar2[2] & 0xfffffff);
    puVar2[1] = (param_1[uVar3] >> 0x1c) + (puVar2[1] & 0xfffffff);
    *puVar2 = (param_1[uVar3 - 1] >> 0x1c) + (*puVar2 & 0xfffffff);
    puVar2[-1] = (param_1[uVar3 - 2] >> 0x1c) + (puVar2[-1] & 0xfffffff);
    puVar2[-2] = (param_1[uVar3 - 3] >> 0x1c) + (puVar2[-2] & 0xfffffff);
    bVar4 = uVar3 != 3;
    puVar2 = puVar2 + -5;
    uVar3 = uVar3 - 5;
  } while (bVar4);
  *param_1 = (*param_1 & 0xfffffff) + (uVar1 >> 0x1c);
  return;
}

// FUN_14f7990e0 @ 14f7990e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f7990e0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  gf_add(param_1 + 0x40,param_2 + 0x40,param_2);
  gf_sub(param_1,param_2 + 0x40,param_2);
  gf_mul(param_1 + 0xc0,param_1 + 0x40,param_1);
  uVar1 = _UNK_1534e5f78;
  *(undefined8 *)(param_1 + 0x80) = _DAT_1534e5f70;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  uVar1 = _UNK_1534e5f88;
  *(undefined8 *)(param_1 + 0x90) = _DAT_1534e5f80;
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  uVar1 = _UNK_1534e5f98;
  *(undefined8 *)(param_1 + 0xa0) = _DAT_1534e5f90;
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  uVar1 = _UNK_1534e5fa8;
  *(undefined8 *)(param_1 + 0xb0) = _DAT_1534e5fa0;
  *(undefined8 *)(param_1 + 0xb8) = uVar1;
  return;
}

// FUN_14f799200 @ 14f799200

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f799200(longlong param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f799212;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  gf_add(local_68,param_2 + 0x40,param_2);
  gf_sub(param_1 + 0x40,param_2 + 0x40,param_2);
  gf_mul(param_1 + 0xc0,param_1 + 0x40,local_68);
  gf_mul(param_1,param_2 + 0xc0,param_1 + 0x40);
  gf_mul(param_1 + 0x40,param_2 + 0xc0,local_68);
  gf_sqr(param_1 + 0x80,param_2 + 0xc0);
  return;
}

// FUN_14f7992c0 @ 14f7992c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f7992c0(longlong param_1,longlong param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  longlong lVar20;
  int *piVar21;
  int iVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  int aiStack_1f8 [22];
  undefined8 uStack_1a0;
  undefined1 auStack_198 [32];
  int local_178 [15];
  undefined1 local_13c [20];
  int local_128 [16];
  int local_e8 [4];
  undefined1 auStack_d8 [44];
  undefined1 local_ac [20];
  int local_98 [16];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_198;
  uStack_1a0 = 0x14f799314;
  gf_sqr(local_e8);
  uStack_1a0 = 0x14f799322;
  gf_sqr(local_178,param_2 + 0x40);
  uVar23 = 0;
  lVar20 = 2;
  uVar19 = uVar23;
  do {
    iVar2 = *(int *)((longlong)local_e8 + uVar19 + 4);
    iVar3 = *(int *)((longlong)local_e8 + uVar19 + 8);
    iVar4 = *(int *)(auStack_d8 + (uVar19 - 4));
    iVar5 = *(int *)((longlong)local_178 + uVar19 + 4);
    iVar6 = *(int *)((longlong)local_178 + uVar19 + 8);
    iVar7 = *(int *)((longlong)local_178 + uVar19 + 0xc);
    iVar8 = *(int *)((longlong)local_178 + uVar19 + 0x10);
    iVar9 = *(int *)((longlong)local_178 + uVar19 + 0x14);
    iVar18 = *(int *)((longlong)local_178 + uVar19 + 0x18);
    iVar22 = *(int *)((longlong)local_178 + uVar19 + 0x1c);
    auVar26 = *(undefined1 (*) [16])(auStack_d8 + uVar19);
    *(int *)((longlong)local_98 + uVar19) =
         *(int *)((longlong)local_178 + uVar19) + *(int *)((longlong)local_e8 + uVar19);
    *(int *)((longlong)local_98 + uVar19 + 4) = iVar5 + iVar2;
    *(int *)((longlong)local_98 + uVar19 + 8) = iVar6 + iVar3;
    *(int *)((longlong)local_98 + uVar19 + 0xc) = iVar7 + iVar4;
    *(int *)((longlong)local_98 + uVar19 + 0x10) = iVar8 + auVar26._0_4_;
    *(int *)((longlong)local_98 + uVar19 + 0x14) = iVar9 + auVar26._4_4_;
    *(int *)((longlong)local_98 + uVar19 + 0x18) = iVar18 + auVar26._8_4_;
    *(int *)((longlong)local_98 + uVar19 + 0x1c) = iVar22 + auVar26._12_4_;
    lVar20 = lVar20 + -1;
    uVar19 = uVar19 + 0x20;
  } while (lVar20 != 0);
  puVar1 = (undefined1 *)(param_1 + 0xc0);
  uStack_1a0 = 0x14f79937c;
  FUN_14f798a60(puVar1,param_2 + 0x40,param_2);
  uStack_1a0 = 0x14f799389;
  gf_sqr(local_128,puVar1);
  iVar9 = _UNK_150b50dec;
  iVar8 = _UNK_150b50de8;
  iVar7 = _UNK_150b50de4;
  iVar6 = ___xmm_00000008000000080000000800000008;
  iVar5 = _UNK_150631e0c;
  iVar4 = _UNK_150631e08;
  iVar3 = __xmm_00000003000000020000000100000000._4_4_;
  iVar2 = (int)__xmm_00000003000000020000000100000000;
  lVar20 = 2;
  uVar19 = uVar23;
  do {
    iVar18 = *(int *)((longlong)local_98 + uVar19 + 4);
    iVar22 = *(int *)((longlong)local_98 + uVar19 + 8);
    iVar10 = *(int *)((longlong)local_98 + uVar19 + 0xc);
    iVar11 = *(int *)((longlong)local_98 + uVar19 + 0x10);
    iVar12 = *(int *)((longlong)local_98 + uVar19 + 0x14);
    iVar13 = *(int *)((longlong)local_98 + uVar19 + 0x18);
    iVar14 = *(int *)((longlong)local_98 + uVar19 + 0x1c);
    *(int *)((longlong)local_128 + uVar19) =
         *(int *)((longlong)local_128 + uVar19) - *(int *)((longlong)local_98 + uVar19);
    *(int *)((longlong)local_128 + uVar19 + 4) = *(int *)((longlong)local_128 + uVar19 + 4) - iVar18
    ;
    *(int *)((longlong)local_128 + uVar19 + 8) = *(int *)((longlong)local_128 + uVar19 + 8) - iVar22
    ;
    *(int *)((longlong)local_128 + uVar19 + 0xc) =
         *(int *)((longlong)local_128 + uVar19 + 0xc) - iVar10;
    *(int *)((longlong)local_128 + uVar19 + 0x10) =
         *(int *)((longlong)local_128 + uVar19 + 0x10) - iVar11;
    *(int *)((longlong)local_128 + uVar19 + 0x14) =
         *(int *)((longlong)local_128 + uVar19 + 0x14) - iVar12;
    *(int *)((longlong)local_128 + uVar19 + 0x18) =
         *(int *)((longlong)local_128 + uVar19 + 0x18) - iVar13;
    *(int *)((longlong)local_128 + uVar19 + 0x1c) =
         *(int *)((longlong)local_128 + uVar19 + 0x1c) - iVar14;
    lVar20 = lVar20 + -1;
    uVar19 = uVar19 + 0x20;
  } while (lVar20 != 0);
  piVar21 = local_128;
  uVar19 = uVar23;
  do {
    iVar22 = (int)uVar19;
    iVar18 = iVar22 + 4;
    auVar26._0_4_ =
         -(uint)(iVar22 + (int)__xmm_00000003000000020000000100000000 ==
                ___xmm_00000008000000080000000800000008);
    auVar26._4_4_ = -(uint)(iVar22 + __xmm_00000003000000020000000100000000._4_4_ == _UNK_150b50de4)
    ;
    auVar26._8_4_ = -(uint)(iVar22 + _UNK_150631e08 == _UNK_150b50de8);
    auVar26._12_4_ = -(uint)(iVar22 + _UNK_150631e0c == _UNK_150b50dec);
    uVar19 = (ulonglong)(iVar22 + 8U);
    auVar26 = ~auVar26 & ___xmm_2ffffffd2ffffffd2ffffffd2ffffffd |
              ___xmm_2ffffffa2ffffffa2ffffffa2ffffffa & auVar26;
    auVar27._0_4_ =
         -(uint)(iVar18 + (int)__xmm_00000003000000020000000100000000 ==
                ___xmm_00000008000000080000000800000008);
    auVar27._4_4_ = -(uint)(iVar18 + __xmm_00000003000000020000000100000000._4_4_ == _UNK_150b50de4)
    ;
    auVar27._8_4_ = -(uint)(iVar18 + _UNK_150631e08 == _UNK_150b50de8);
    auVar27._12_4_ = -(uint)(iVar18 + _UNK_150631e0c == _UNK_150b50dec);
    *piVar21 = auVar26._0_4_ + *piVar21;
    piVar21[1] = auVar26._4_4_ + piVar21[1];
    piVar21[2] = auVar26._8_4_ + piVar21[2];
    piVar21[3] = auVar26._12_4_ + piVar21[3];
    auVar27 = ~auVar27 & ___xmm_2ffffffd2ffffffd2ffffffd2ffffffd |
              ___xmm_2ffffffa2ffffffa2ffffffa2ffffffa & auVar27;
    auVar26 = *(undefined1 (*) [16])(piVar21 + 4);
    piVar21[4] = auVar27._0_4_ + auVar26._0_4_;
    piVar21[5] = auVar27._4_4_ + auVar26._4_4_;
    piVar21[6] = auVar27._8_4_ + auVar26._8_4_;
    piVar21[7] = auVar27._12_4_ + auVar26._12_4_;
    piVar21 = piVar21 + 8;
  } while (iVar22 + 8U < 0x10);
  uStack_1a0 = 0x14f79947f;
  FUN_14f799000(local_128);
  if (((local_ac < puVar1) || ((int *)(param_1 + 0xfcU) < local_e8)) &&
     ((local_13c < puVar1 || ((int *)(param_1 + 0xfcU) < local_178)))) {
    lVar20 = 2;
    uVar19 = uVar23;
    do {
      iVar18 = *(int *)((longlong)local_e8 + uVar19 + 4);
      iVar22 = *(int *)((longlong)local_e8 + uVar19 + 8);
      iVar10 = *(int *)(auStack_d8 + (uVar19 - 4));
      iVar11 = *(int *)((longlong)local_178 + uVar19 + 4);
      iVar12 = *(int *)((longlong)local_178 + uVar19 + 8);
      iVar13 = *(int *)((longlong)local_178 + uVar19 + 0xc);
      iVar14 = *(int *)((longlong)local_178 + uVar19 + 0x10);
      iVar15 = *(int *)((longlong)local_178 + uVar19 + 0x14);
      iVar16 = *(int *)((longlong)local_178 + uVar19 + 0x18);
      iVar17 = *(int *)((longlong)local_178 + uVar19 + 0x1c);
      auVar26 = *(undefined1 (*) [16])(auStack_d8 + uVar19);
      piVar21 = (int *)(puVar1 + uVar19);
      *piVar21 = *(int *)((longlong)local_178 + uVar19) - *(int *)((longlong)local_e8 + uVar19);
      piVar21[1] = iVar11 - iVar18;
      piVar21[2] = iVar12 - iVar22;
      piVar21[3] = iVar13 - iVar10;
      piVar21 = (int *)(param_1 + 0xb0 + uVar19 + 0x20);
      *piVar21 = iVar14 - auVar26._0_4_;
      piVar21[1] = iVar15 - auVar26._4_4_;
      piVar21[2] = iVar16 - auVar26._8_4_;
      piVar21[3] = iVar17 - auVar26._12_4_;
      lVar20 = lVar20 + -1;
      uVar19 = uVar19 + 0x20;
    } while (lVar20 != 0);
  }
  else {
    lVar20 = 0x10;
    uVar19 = uVar23;
    do {
      *(int *)(puVar1 + uVar19) =
           *(int *)((longlong)local_178 + uVar19) - *(int *)((longlong)local_e8 + uVar19);
      uVar19 = uVar19 + 4;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  uStack_1a0 = 0x14f799513;
  FUN_14f798b00(puVar1,2);
  uStack_1a0 = 0x14f79951b;
  FUN_14f799000(puVar1);
  uStack_1a0 = 0x14f79952a;
  gf_sqr(param_1,param_2 + 0x80);
  uStack_1a0 = 0x14f79953c;
  FUN_14f798a60(param_1 + 0x80,param_1,param_1);
  lVar20 = 4;
  piVar21 = (int *)(param_1 + 0x80);
  do {
    *(int *)(((longlong)aiStack_1f8 - param_1) + (longlong)piVar21) = *piVar21 - piVar21[0x10];
    *(int *)((longlong)aiStack_1f8 + (4 - param_1) + (longlong)piVar21) = piVar21[1] - piVar21[0x11]
    ;
    *(int *)((longlong)aiStack_1f8 + (8 - param_1) + (longlong)piVar21) = piVar21[2] - piVar21[0x12]
    ;
    *(int *)((longlong)aiStack_1f8 + (0xc - param_1) + (longlong)piVar21) =
         piVar21[3] - piVar21[0x13];
    piVar21 = piVar21 + 4;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  piVar21 = local_178;
  do {
    iVar22 = (int)uVar23;
    iVar18 = iVar22 + 4;
    auVar24._0_4_ = -(uint)(iVar22 + iVar2 == iVar6);
    auVar24._4_4_ = -(uint)(iVar22 + iVar3 == iVar7);
    auVar24._8_4_ = -(uint)(iVar22 + iVar4 == iVar8);
    auVar24._12_4_ = -(uint)(iVar22 + iVar5 == iVar9);
    uVar23 = (ulonglong)(iVar22 + 8U);
    auVar26 = ___xmm_3ffffff83ffffff83ffffff83ffffff8 & auVar24 |
              ~auVar24 & ___xmm_3ffffffc3ffffffc3ffffffc3ffffffc;
    auVar25._0_4_ = -(uint)(iVar18 + iVar2 == iVar6);
    auVar25._4_4_ = -(uint)(iVar18 + iVar3 == iVar7);
    auVar25._8_4_ = -(uint)(iVar18 + iVar4 == iVar8);
    auVar25._12_4_ = -(uint)(iVar18 + iVar5 == iVar9);
    *piVar21 = auVar26._0_4_ + *piVar21;
    piVar21[1] = auVar26._4_4_ + piVar21[1];
    piVar21[2] = auVar26._8_4_ + piVar21[2];
    piVar21[3] = auVar26._12_4_ + piVar21[3];
    auVar27 = ___xmm_3ffffff83ffffff83ffffff83ffffff8 & auVar25 |
              ~auVar25 & ___xmm_3ffffffc3ffffffc3ffffffc3ffffffc;
    auVar26 = *(undefined1 (*) [16])(piVar21 + 4);
    piVar21[4] = auVar27._0_4_ + auVar26._0_4_;
    piVar21[5] = auVar27._4_4_ + auVar26._4_4_;
    piVar21[6] = auVar27._8_4_ + auVar26._8_4_;
    piVar21[7] = auVar27._12_4_ + auVar26._12_4_;
    piVar21 = piVar21 + 8;
  } while (iVar22 + 8U < 0x10);
  uStack_1a0 = 0x14f799647;
  FUN_14f799000(local_178);
  uStack_1a0 = 0x14f799659;
  gf_mul(param_1,local_178,local_128);
  uStack_1a0 = 0x14f79966d;
  gf_mul(param_1 + 0x80,puVar1,local_178);
  uStack_1a0 = 0x14f79967d;
  gf_mul(param_1 + 0x40,puVar1,local_98);
  if (param_3 == 0) {
    uStack_1a0 = 0x14f799693;
    gf_mul(puVar1,local_128,local_98);
  }
  return;
}

// FUN_14f7996d0 @ 14f7996d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f7996d0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined1 local_228 [64];
  undefined1 local_1e8 [64];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [64];
  undefined1 local_128 [64];
  undefined1 local_e8 [64];
  undefined1 local_a8 [64];
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f7996eb;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_288;
  FUN_14f799980();
  if (param_3 != 0) {
    FUN_14f7992c0(local_228,param_2,0);
    gf_sub(local_128,local_1e8,local_228);
    gf_add(local_e8,local_228,local_1e8);
    gf_mulw_unsigned(local_a8,local_168,0x13154);
    gf_sub(local_a8,&DAT_1534e5f30,local_a8);
    gf_add(local_68,&local_1a8,&local_1a8);
    gf_mul(&local_268,&local_1a8,param_1 + 0xc0);
    local_1a8 = local_268;
    uStack_1a0 = uStack_260;
    local_198 = local_258;
    uStack_190 = uStack_250;
    local_188 = local_248;
    uStack_184 = uStack_244;
    uStack_180 = uStack_240;
    uStack_17c = uStack_23c;
    local_178 = local_238;
    uStack_174 = uStack_234;
    uStack_170 = uStack_230;
    uStack_16c = uStack_22c;
    FUN_14f797240(local_228,param_1,0);
    gf_sub(param_1 + 0x100,local_1e8,local_228);
    gf_add(param_1 + 0x140,local_228,local_1e8);
    gf_mulw_unsigned(param_1 + 0x180,local_168,0x13154);
    gf_sub(param_1 + 0x180,&DAT_1534e5f30,param_1 + 0x180);
    gf_add(param_1 + 0x1c0,&local_1a8,&local_1a8);
    iVar1 = 1 << ((byte)param_3 & 0x1f);
    if (2 < iVar1) {
      param_1 = param_1 + 0x280;
      uVar2 = (ulonglong)(iVar1 - 2);
      do {
        gf_mul(&local_268,&local_1a8,local_68);
        local_1a8 = local_268;
        uStack_1a0 = uStack_260;
        local_198 = local_258;
        uStack_190 = uStack_250;
        local_188 = local_248;
        uStack_184 = uStack_244;
        uStack_180 = uStack_240;
        uStack_17c = uStack_23c;
        local_178 = local_238;
        uStack_174 = uStack_234;
        uStack_170 = uStack_230;
        uStack_16c = uStack_22c;
        FUN_14f797240(local_228,local_128,0);
        gf_sub(param_1 + -0x80,local_1e8,local_228);
        gf_add(param_1 + -0x40,local_228,local_1e8);
        gf_mulw_unsigned(param_1,local_168,0x13154);
        gf_sub(param_1,&DAT_1534e5f30,param_1);
        gf_add(param_1 + 0x40,&local_1a8,&local_1a8);
        param_1 = param_1 + 0x100;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    OPENSSL_cleanse(local_228,0x100);
    OPENSSL_cleanse(local_128,0x100);
  }
  return;
}

// FUN_14f799980 @ 14f799980

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f799980(longlong param_1,longlong param_2)

{
  gf_sub(param_1,param_2 + 0x40,param_2);
  gf_add(param_1 + 0x40,param_2,param_2 + 0x40);
  gf_mulw_unsigned(param_1 + 0x80,param_2 + 0xc0,0x13154);
  gf_sub(param_1 + 0x80,&DAT_1534e5f30,param_1 + 0x80);
  gf_add(param_1 + 0xc0,param_2 + 0x80,param_2 + 0x80);
  return;
}

// FUN_14f799a20 @ 14f799a20

int FUN_14f799a20(undefined8 *param_1,ushort *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  
  uVar14 = 0;
  uVar13 = (ulonglong)*param_2;
  uVar15 = 1;
  bVar4 = (byte)(param_3 + 1U);
  iVar16 = 0;
  iVar2 = (int)(0x1be / (ulonglong)(param_3 + 1U));
  iVar11 = iVar2 + 1;
  lVar17 = (longlong)iVar11;
  *(undefined4 *)(param_1 + (iVar2 + 2)) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + (longlong)(iVar2 + 2) * 8 + 4) = 0;
  do {
    if (uVar15 < 0x1c) {
      uVar13 = uVar13 + ((*(uint *)(param_2 + (ulonglong)(uVar15 >> 1) * 2) >>
                         (sbyte)((uVar15 & 1) << 4)) << 0x10);
    }
    if ((short)uVar13 != 0) {
      bVar1 = bVar4 & 0x1f;
      uVar10 = 1 << bVar1 | 1U >> 0x20 - bVar1;
      do {
        uVar7 = (uint)uVar13;
        if (uVar7 == 0) {
          iVar12 = 0x20;
        }
        else {
          uVar8 = uVar13 & 0xffffffff;
          bVar18 = (uVar13 & 0xffff) != 0;
          if (bVar18) {
            uVar8 = (ulonglong)(uVar7 << 0x10);
          }
          iVar3 = 0xf;
          if (!bVar18) {
            iVar3 = 0x1f;
          }
          if ((uVar8 & 0xffffff) != 0) {
            uVar8 = (ulonglong)(uint)((int)uVar8 << 8);
            iVar3 = iVar3 + -8;
          }
          if ((uVar8 & 0xfffffff) != 0) {
            uVar8 = (ulonglong)(uint)((int)uVar8 << 4);
            iVar3 = iVar3 + -4;
          }
          uVar5 = (int)uVar8 * 4;
          if (uVar5 != 0) {
            uVar8 = (ulonglong)uVar5;
            iVar3 = iVar3 + -2;
          }
          iVar12 = iVar3 + -1;
          if ((uVar8 & 0x7fffffff) == 0) {
            iVar12 = iVar3;
          }
        }
        uVar7 = uVar7 >> ((byte)iVar12 & 0x1f);
        uVar6 = uVar7 & (1 << (bVar4 & 0x1f)) - 1U;
        uVar5 = uVar6 - uVar10;
        if ((uVar10 & uVar7) == 0) {
          uVar5 = uVar6;
        }
        iVar11 = iVar11 + -1;
        *(uint *)((longlong)param_1 + lVar17 * 8 + 4) = uVar5;
        uVar13 = uVar13 - (longlong)(int)((1 << ((byte)iVar12 & 0x1f)) * uVar5);
        *(int *)(param_1 + lVar17) = iVar16 + iVar12;
        lVar17 = lVar17 + -1;
      } while ((short)uVar13 != 0);
    }
    uVar13 = uVar13 >> 0x10;
    uVar15 = uVar15 + 1;
    iVar16 = iVar16 + 0x10;
  } while (uVar15 < 0x1e);
  uVar15 = (iVar2 + 3) - (iVar11 + 1);
  puVar9 = param_1;
  if (uVar15 != 0) {
    do {
      uVar10 = uVar14 + iVar11 + 1;
      uVar14 = uVar14 + 1;
      *puVar9 = param_1[uVar10];
      puVar9 = puVar9 + 1;
    } while (uVar14 < uVar15);
  }
  return uVar15 - 1;
}

// FUN_14f799be0 @ 14f799be0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14f799be0(longlong param_1,longlong param_2,int param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  int local_190;
  int iStack_18c;
  undefined8 local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  int aiStack_14c [16];
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  int aiStack_fc [13];
  undefined1 local_c8 [64];
  ulonglong local_88;
  
  uVar18 = _UNK_1534e60cc;
  uVar17 = _UNK_1534e60c8;
  uVar16 = _UNK_1534e60c4;
  uVar15 = ___xmm_1ffffffe1ffffffe1ffffffe1ffffffe;
  uVar14 = _UNK_1534e60bc;
  uVar13 = _UNK_1534e60b8;
  uVar12 = _UNK_1534e60b4;
  uVar11 = ___xmm_1ffffffc1ffffffc1ffffffc1ffffffc;
  iVar10 = _UNK_150b50dec;
  iVar9 = _UNK_150b50de8;
  iVar8 = _UNK_150b50de4;
  iVar7 = ___xmm_00000008000000080000000800000008;
  iVar6 = _UNK_150631e0c;
  iVar5 = _UNK_150631e08;
  iVar4 = __xmm_00000003000000020000000100000000._4_4_;
  iVar3 = (int)__xmm_00000003000000020000000100000000;
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  lVar24 = (longlong)&local_188 - param_1;
  lVar26 = (longlong)&local_188 + (4 - param_1);
  lVar2 = -param_1;
  piVar21 = (int *)(param_1 + 0x44);
  lVar27 = (longlong)&local_180 - param_1;
  lVar25 = 4;
  lVar23 = 4;
  piVar20 = piVar21;
  local_170 = lVar24;
  local_168 = lVar26;
  local_160 = lVar27;
  local_158 = param_1;
  do {
    *(int *)((longlong)piVar20 + (longlong)&iStack_18c + lVar2) = piVar20[-1] - piVar20[-0x11];
    *(int *)((longlong)piVar20 + lVar24) = *piVar20 - piVar20[-0x10];
    *(int *)((longlong)piVar20 + lVar26) = piVar20[1] - piVar20[-0xf];
    *(int *)((longlong)piVar20 + lVar27) = piVar20[2] - piVar20[-0xe];
    piVar20 = piVar20 + 4;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  uVar22 = 0;
  piVar20 = aiStack_14c + 1;
  do {
    iVar19 = uVar22 + 4;
    uVar33 = -(uint)(uVar22 + (int)__xmm_00000003000000020000000100000000 ==
                    ___xmm_00000008000000080000000800000008);
    uVar35 = -(uint)(uVar22 + __xmm_00000003000000020000000100000000._4_4_ == _UNK_150b50de4);
    uVar37 = -(uint)(uVar22 + _UNK_150631e08 == _UNK_150b50de8);
    uVar39 = -(uint)(uVar22 + _UNK_150631e0c == _UNK_150b50dec);
    uVar22 = uVar22 + 8;
    uVar34 = -(uint)(iVar19 + (int)__xmm_00000003000000020000000100000000 ==
                    ___xmm_00000008000000080000000800000008);
    uVar36 = -(uint)(iVar19 + __xmm_00000003000000020000000100000000._4_4_ == _UNK_150b50de4);
    uVar38 = -(uint)(iVar19 + _UNK_150631e08 == _UNK_150b50de8);
    uVar40 = -(uint)(iVar19 + _UNK_150631e0c == _UNK_150b50dec);
    *piVar20 = (~uVar33 & ___xmm_1ffffffe1ffffffe1ffffffe1ffffffe |
               ___xmm_1ffffffc1ffffffc1ffffffc1ffffffc & uVar33) + *piVar20;
    piVar20[1] = (~uVar35 & _UNK_1534e60c4 | _UNK_1534e60b4 & uVar35) + piVar20[1];
    piVar20[2] = (~uVar37 & _UNK_1534e60c8 | _UNK_1534e60b8 & uVar37) + piVar20[2];
    piVar20[3] = (~uVar39 & _UNK_1534e60cc | _UNK_1534e60bc & uVar39) + piVar20[3];
    auVar1 = *(undefined1 (*) [16])(piVar20 + 4);
    piVar20[4] = (~uVar34 & ___xmm_1ffffffe1ffffffe1ffffffe1ffffffe |
                 ___xmm_1ffffffc1ffffffc1ffffffc1ffffffc & uVar34) + auVar1._0_4_;
    piVar20[5] = (~uVar36 & _UNK_1534e60c4 | _UNK_1534e60b4 & uVar36) + auVar1._4_4_;
    piVar20[6] = (~uVar38 & _UNK_1534e60c8 | _UNK_1534e60b8 & uVar38) + auVar1._8_4_;
    piVar20[7] = (~uVar40 & _UNK_1534e60cc | _UNK_1534e60bc & uVar40) + auVar1._12_4_;
    piVar20 = piVar20 + 8;
  } while (uVar22 < 0x10);
  local_198 = param_2;
  local_190 = param_3;
  FUN_14f799000(aiStack_14c + 1);
  gf_mul(&local_108,local_198 + 0x40,aiStack_14c + 1);
  lVar23 = 4;
  piVar20 = piVar21;
  do {
    *(int *)((longlong)piVar20 + (longlong)&iStack_18c + lVar2) = piVar20[-0x11] + piVar20[-1];
    *(int *)((longlong)piVar20 + lVar24) = piVar20[-0x10] + *piVar20;
    *(int *)((longlong)piVar20 + lVar26) = piVar20[-0xf] + piVar20[1];
    *(int *)((longlong)piVar20 + lVar27) = piVar20[-0xe] + piVar20[2];
    piVar20 = piVar20 + 4;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  gf_mul(param_1 + 0x40,local_198,aiStack_14c + 1);
  gf_mul(param_1,local_198 + 0x80,param_1 + 0xc0);
  lVar23 = local_158;
  local_198 = (longlong)&local_108 + -param_1;
  local_188 = (longlong)&iStack_104 - param_1;
  local_180 = (longlong)aiStack_fc + (-4 - param_1);
  local_178 = (longlong)aiStack_fc - param_1;
  lVar24 = 4;
  piVar20 = piVar21;
  do {
    *(int *)((longlong)piVar20 + ((longlong)&iStack_10c - param_1)) =
         *(int *)((longlong)piVar20 + local_198 + -0x44) + piVar20[-1];
    *(int *)((longlong)piVar20 + ((longlong)&local_108 - param_1)) =
         *(int *)((longlong)piVar20 + local_188 + -0x44) + *piVar20;
    *(int *)((longlong)piVar20 + ((longlong)&iStack_104 - param_1)) =
         *(int *)((longlong)piVar20 + local_180 + -0x44) + piVar20[1];
    *(int *)((longlong)piVar20 + (longlong)aiStack_fc + (-4 - param_1)) =
         *(int *)((longlong)piVar20 + local_178 + -0x44) + piVar20[2];
    piVar20 = piVar20 + 4;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  lVar24 = 4;
  do {
    *(int *)((longlong)piVar21 + (longlong)&iStack_18c + lVar2) =
         piVar21[-1] - *(int *)((longlong)aiStack_14c + -param_1 + (longlong)piVar21);
    *(int *)((longlong)piVar21 + local_170) =
         *piVar21 - *(int *)((longlong)piVar21 + local_188 + -0x44);
    *(int *)((longlong)piVar21 + local_168) =
         piVar21[1] - *(int *)((longlong)piVar21 + local_180 + -0x44);
    *(int *)((longlong)piVar21 + local_160) =
         piVar21[2] - *(int *)((longlong)piVar21 + local_178 + -0x44);
    piVar21 = piVar21 + 4;
    lVar24 = lVar24 + -1;
  } while (lVar24 != 0);
  uVar33 = 0;
  piVar21 = aiStack_14c + 1;
  uVar22 = uVar33;
  do {
    iVar19 = uVar22 + 4;
    iVar28 = uVar22 + iVar3;
    iVar29 = uVar22 + iVar4;
    iVar30 = uVar22 + iVar5;
    iVar31 = uVar22 + iVar6;
    uVar22 = uVar22 + 8;
    uVar34 = -(uint)(iVar28 == iVar7);
    uVar36 = -(uint)(iVar29 == iVar8);
    uVar38 = -(uint)(iVar30 == iVar9);
    uVar40 = -(uint)(iVar31 == iVar10);
    uVar35 = -(uint)(iVar19 + iVar3 == iVar7);
    uVar37 = -(uint)(iVar19 + iVar4 == iVar8);
    uVar39 = -(uint)(iVar19 + iVar5 == iVar9);
    uVar32 = -(uint)(iVar19 + iVar6 == iVar10);
    *piVar21 = (~uVar34 & uVar15 | uVar34 & uVar11) + *piVar21;
    piVar21[1] = (~uVar36 & uVar16 | uVar36 & uVar12) + piVar21[1];
    piVar21[2] = (~uVar38 & uVar17 | uVar38 & uVar13) + piVar21[2];
    piVar21[3] = (~uVar40 & uVar18 | uVar40 & uVar14) + piVar21[3];
    auVar1 = *(undefined1 (*) [16])(piVar21 + 4);
    piVar21[4] = (~uVar35 & uVar15 | uVar35 & uVar11) + auVar1._0_4_;
    piVar21[5] = (~uVar37 & uVar16 | uVar37 & uVar12) + auVar1._4_4_;
    piVar21[6] = (~uVar39 & uVar17 | uVar39 & uVar13) + auVar1._8_4_;
    piVar21[7] = (~uVar32 & uVar18 | uVar32 & uVar14) + auVar1._12_4_;
    piVar21 = piVar21 + 8;
  } while (uVar22 < 0x10);
  FUN_14f799000(aiStack_14c + 1);
  FUN_14f798a60(lVar23 + 0x40,lVar23 + 0x80,lVar23);
  piVar21 = (int *)(lVar23 + 0x84);
  do {
    *(int *)(local_198 + -0x84 + (longlong)piVar21) = piVar21[-1] - piVar21[-0x21];
    *(int *)(local_188 + -0x84 + (longlong)piVar21) = *piVar21 - piVar21[-0x20];
    *(int *)(local_180 + -0x84 + (longlong)piVar21) = piVar21[1] - piVar21[-0x1f];
    *(int *)(local_178 + -0x84 + (longlong)piVar21) = piVar21[2] - piVar21[-0x1e];
    piVar21 = piVar21 + 4;
    lVar25 = lVar25 + -1;
  } while (lVar25 != 0);
  piVar21 = &local_108;
  do {
    iVar19 = uVar33 + 4;
    iVar28 = uVar33 + iVar3;
    iVar29 = uVar33 + iVar4;
    iVar30 = uVar33 + iVar5;
    iVar31 = uVar33 + iVar6;
    uVar33 = uVar33 + 8;
    uVar22 = -(uint)(iVar28 == iVar7);
    uVar35 = -(uint)(iVar29 == iVar8);
    uVar37 = -(uint)(iVar30 == iVar9);
    uVar39 = -(uint)(iVar31 == iVar10);
    uVar34 = -(uint)(iVar19 + iVar3 == iVar7);
    uVar36 = -(uint)(iVar19 + iVar4 == iVar8);
    uVar38 = -(uint)(iVar19 + iVar5 == iVar9);
    uVar40 = -(uint)(iVar19 + iVar6 == iVar10);
    *piVar21 = (~uVar22 & uVar15 | uVar22 & uVar11) + *piVar21;
    piVar21[1] = (~uVar35 & uVar16 | uVar35 & uVar12) + piVar21[1];
    piVar21[2] = (~uVar37 & uVar17 | uVar37 & uVar13) + piVar21[2];
    piVar21[3] = (~uVar39 & uVar18 | uVar39 & uVar14) + piVar21[3];
    auVar1 = *(undefined1 (*) [16])(piVar21 + 4);
    piVar21[4] = (~uVar34 & uVar15 | uVar34 & uVar11) + auVar1._0_4_;
    piVar21[5] = (~uVar36 & uVar16 | uVar36 & uVar12) + auVar1._4_4_;
    piVar21[6] = (~uVar38 & uVar17 | uVar38 & uVar13) + auVar1._8_4_;
    piVar21[7] = (~uVar40 & uVar18 | uVar40 & uVar14) + auVar1._12_4_;
    piVar21 = piVar21 + 8;
  } while (uVar33 < 0x10);
  FUN_14f799000(&local_108);
  gf_mul(lVar23 + 0x80,&local_108,lVar23 + 0x40);
  gf_mul(lVar23,lVar23 + 0x40,aiStack_14c + 1);
  gf_mul(lVar23 + 0x40,&local_108,local_c8);
  if (local_190 == 0) {
    gf_mul(lVar23 + 0xc0,aiStack_14c + 1,local_c8);
  }
  return;
}

// FUN_14f79a110 @ 14f79a110

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f79a110(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f79a122;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  gf_mul(&local_68,param_1 + 0x80,param_2 + 0xc0);
  *(undefined8 *)(param_1 + 0x80) = local_68;
  *(undefined8 *)(param_1 + 0x88) = uStack_60;
  *(undefined8 *)(param_1 + 0x90) = local_58;
  *(undefined8 *)(param_1 + 0x98) = uStack_50;
  *(undefined4 *)(param_1 + 0xa0) = local_48;
  *(undefined4 *)(param_1 + 0xa4) = uStack_44;
  *(undefined4 *)(param_1 + 0xa8) = uStack_40;
  *(undefined4 *)(param_1 + 0xac) = uStack_3c;
  *(undefined4 *)(param_1 + 0xb0) = local_38;
  *(undefined4 *)(param_1 + 0xb4) = uStack_34;
  *(undefined4 *)(param_1 + 0xb8) = uStack_30;
  *(undefined4 *)(param_1 + 0xbc) = uStack_2c;
  FUN_14f799be0(param_1,param_2,param_3);
  return;
}

// x448_derive_public_key @ 14f79a1e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void x448_derive_public_key(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [64];
  undefined1 local_148 [256];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  uint local_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = *(undefined8 *)(param_2 + 4);
  uStack_30 = *(undefined8 *)(param_2 + 6);
  local_28 = param_2[8];
  uStack_24 = param_2[9];
  uStack_20 = param_2[10];
  uStack_1c = param_2[0xb];
  local_18 = *(ulonglong *)(param_2 + 0xc) | 0x8000000000000000;
  local_48 = *param_2 & 0xfffffffc;
  curve448_scalar_decode_long(local_188,&local_48,0x38);
  uVar1 = 1;
  do {
    curve448_scalar_halve(local_188,local_188);
    uVar1 = uVar1 * 2;
  } while (uVar1 < 2);
  curve448_precomputed_scalarmul(local_148,curve448_precomputed_base,local_188);
  curve448_point_mul_by_ratio_and_encode_like_x448(param_1,local_148);
  OPENSSL_cleanse(local_148,0x100);
  return;
}

// x448_int @ 14f79a2e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint x448_int(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  int *piVar33;
  int *piVar34;
  byte bVar35;
  int iVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  int aiStack_2e8 [8];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  int local_1c8 [4];
  int aiStack_1b8 [12];
  int local_188 [16];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [64];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)aiStack_2e8;
  uVar38 = 0;
  gf_deserialize(&local_148,param_2,1,0);
  uVar27 = _UNK_1534e60cc;
  uVar26 = _UNK_1534e60c8;
  uVar25 = _UNK_1534e60c4;
  uVar24 = ___xmm_1ffffffe1ffffffe1ffffffe1ffffffe;
  uVar23 = _UNK_1534e60bc;
  uVar22 = _UNK_1534e60b8;
  uVar21 = _UNK_1534e60b4;
  uVar29 = ___xmm_1ffffffc1ffffffc1ffffffc1ffffffc;
  iVar20 = _UNK_150b50dec;
  iVar19 = _UNK_150b50de8;
  iVar18 = _UNK_150b50de4;
  iVar17 = ___xmm_00000008000000080000000800000008;
  iVar16 = _UNK_150631e0c;
  iVar15 = _UNK_150631e08;
  iVar14 = __xmm_00000003000000020000000100000000._4_4_;
  iVar13 = (int)__xmm_00000003000000020000000100000000;
  uVar41 = 0x1bf;
  local_2c8 = _DAT_1534e5f30;
  uStack_2c0 = _UNK_1534e5f38;
  local_2b8 = _DAT_1534e5f40;
  uStack_2b0 = _UNK_1534e5f48;
  local_2a8 = _DAT_1534e5f50;
  uStack_2a0 = _UNK_1534e5f58;
  local_298 = _DAT_1534e5f60;
  uStack_290 = _UNK_1534e5f68;
  local_248 = local_148;
  uStack_240 = uStack_140;
  local_238 = local_138;
  uStack_230 = uStack_130;
  local_228 = local_128;
  uStack_220 = uStack_120;
  local_218 = local_118;
  uStack_210 = uStack_110;
  local_288 = _DAT_1534e5f70;
  uStack_280 = _UNK_1534e5f78;
  local_278 = _DAT_1534e5f80;
  uStack_270 = _UNK_1534e5f88;
  local_268 = _DAT_1534e5f90;
  uStack_260 = _UNK_1534e5f98;
  local_258 = _DAT_1534e5fa0;
  uStack_250 = _UNK_1534e5fa8;
  local_208 = _DAT_1534e5f70;
  uStack_200 = _UNK_1534e5f78;
  local_1f8 = _DAT_1534e5f80;
  uStack_1f0 = _UNK_1534e5f88;
  local_1e8 = _DAT_1534e5f90;
  uStack_1e0 = _UNK_1534e5f98;
  local_1d8 = _DAT_1534e5fa0;
  uStack_1d0 = _UNK_1534e5fa8;
  uVar30 = uVar38;
  do {
    bVar35 = *(byte *)((ulonglong)(uVar41 >> 3) + param_3);
    if (uVar41 >> 3 == 0) {
      bVar35 = bVar35 & 0xfc;
    }
    else if (uVar41 == 0x1bf) {
      bVar35 = 0xff;
    }
    uVar40 = -(bVar35 >> ((byte)uVar41 & 7) & 1);
    uVar39 = (uint)uVar30 ^ uVar40;
    auVar50._4_4_ = uVar39;
    auVar50._0_4_ = uVar39;
    auVar50._8_4_ = uVar39;
    auVar50._12_4_ = uVar39;
    uVar30 = uVar38;
    do {
      auVar49 = (*(undefined1 (*) [16])((longlong)&local_288 + uVar30) ^
                *(undefined1 (*) [16])((longlong)&local_248 + uVar30)) & auVar50;
      *(undefined1 (*) [16])((longlong)&local_248 + uVar30) =
           auVar49 ^ *(undefined1 (*) [16])((longlong)&local_248 + uVar30);
      *(undefined1 (*) [16])((longlong)&local_288 + uVar30) =
           auVar49 ^ *(undefined1 (*) [16])((longlong)&local_288 + uVar30);
      auVar49 = (*(undefined1 (*) [16])((longlong)&local_278 + uVar30) ^
                *(undefined1 (*) [16])((longlong)&local_238 + uVar30)) & auVar50;
      *(undefined1 (*) [16])((longlong)&local_278 + uVar30) =
           auVar49 ^ *(undefined1 (*) [16])((longlong)&local_278 + uVar30);
      *(undefined1 (*) [16])((longlong)&local_238 + uVar30) =
           auVar49 ^ *(undefined1 (*) [16])((longlong)&local_238 + uVar30);
      uVar30 = uVar30 + 0x20;
      uVar31 = uVar38;
    } while (uVar30 < 0x40);
    do {
      auVar49 = (*(undefined1 (*) [16])((longlong)&local_2c8 + uVar31) ^
                *(undefined1 (*) [16])((longlong)&local_208 + uVar31)) & auVar50;
      *(undefined1 (*) [16])((longlong)&local_208 + uVar31) =
           auVar49 ^ *(undefined1 (*) [16])((longlong)&local_208 + uVar31);
      *(undefined1 (*) [16])((longlong)&local_2c8 + uVar31) =
           auVar49 ^ *(undefined1 (*) [16])((longlong)&local_2c8 + uVar31);
      auVar49 = (*(undefined1 (*) [16])((longlong)&local_2b8 + uVar31) ^
                *(undefined1 (*) [16])((longlong)&local_1f8 + uVar31)) & auVar50;
      *(undefined1 (*) [16])((longlong)&local_2b8 + uVar31) =
           auVar49 ^ *(undefined1 (*) [16])((longlong)&local_2b8 + uVar31);
      *(undefined1 (*) [16])((longlong)&local_1f8 + uVar31) =
           auVar49 ^ *(undefined1 (*) [16])((longlong)&local_1f8 + uVar31);
      uVar31 = uVar31 + 0x20;
    } while (uVar31 < 0x40);
    uVar30 = (ulonglong)uVar40;
    lVar32 = 2;
    uVar31 = uVar38;
    do {
      iVar28 = *(int *)((longlong)&local_288 + uVar31 + 4);
      iVar36 = *(int *)((longlong)&uStack_280 + uVar31);
      iVar1 = *(int *)((longlong)&uStack_280 + uVar31 + 4);
      iVar2 = *(int *)((longlong)&local_2c8 + uVar31 + 4);
      iVar3 = *(int *)((longlong)&uStack_2c0 + uVar31);
      iVar4 = *(int *)((longlong)&uStack_2c0 + uVar31 + 4);
      iVar5 = *(int *)((longlong)&local_2b8 + uVar31);
      iVar6 = *(int *)((longlong)&local_2b8 + uVar31 + 4);
      iVar7 = *(int *)((longlong)&uStack_2b0 + uVar31);
      iVar8 = *(int *)((longlong)&uStack_2b0 + uVar31 + 4);
      iVar9 = *(int *)((longlong)&local_278 + uVar31);
      iVar10 = *(int *)((longlong)&local_278 + uVar31 + 4);
      iVar11 = *(int *)((longlong)&uStack_270 + uVar31);
      iVar12 = *(int *)((longlong)&uStack_270 + uVar31 + 4);
      *(int *)((longlong)local_1c8 + uVar31) =
           *(int *)((longlong)&local_2c8 + uVar31) + *(int *)((longlong)&local_288 + uVar31);
      *(int *)((longlong)local_1c8 + uVar31 + 4) = iVar2 + iVar28;
      *(int *)((longlong)local_1c8 + uVar31 + 8) = iVar3 + iVar36;
      *(int *)((longlong)local_1c8 + uVar31 + 0xc) = iVar4 + iVar1;
      *(int *)((longlong)aiStack_1b8 + uVar31) = iVar5 + iVar9;
      *(int *)((longlong)aiStack_1b8 + uVar31 + 4) = iVar6 + iVar10;
      *(int *)((longlong)aiStack_1b8 + uVar31 + 8) = iVar7 + iVar11;
      *(int *)((longlong)aiStack_1b8 + uVar31 + 0xc) = iVar8 + iVar12;
      lVar32 = lVar32 + -1;
      uVar31 = uVar31 + 0x20;
    } while (lVar32 != 0);
    lVar32 = 2;
    uVar31 = uVar38;
    do {
      iVar28 = *(int *)((longlong)&local_2c8 + uVar31 + 4);
      iVar36 = *(int *)((longlong)&uStack_2c0 + uVar31);
      iVar1 = *(int *)((longlong)&uStack_2c0 + uVar31 + 4);
      iVar2 = *(int *)((longlong)&local_288 + uVar31 + 4);
      iVar3 = *(int *)((longlong)&uStack_280 + uVar31);
      iVar4 = *(int *)((longlong)&uStack_280 + uVar31 + 4);
      iVar5 = *(int *)((longlong)&local_278 + uVar31);
      iVar6 = *(int *)((longlong)&local_278 + uVar31 + 4);
      iVar7 = *(int *)((longlong)&uStack_270 + uVar31);
      iVar8 = *(int *)((longlong)&uStack_270 + uVar31 + 4);
      iVar9 = *(int *)((longlong)&local_2b8 + uVar31);
      iVar10 = *(int *)((longlong)&local_2b8 + uVar31 + 4);
      iVar11 = *(int *)((longlong)&uStack_2b0 + uVar31);
      iVar12 = *(int *)((longlong)&uStack_2b0 + uVar31 + 4);
      *(int *)((longlong)local_188 + uVar31) =
           *(int *)((longlong)&local_288 + uVar31) - *(int *)((longlong)&local_2c8 + uVar31);
      *(int *)((longlong)local_188 + uVar31 + 4) = iVar2 - iVar28;
      *(int *)((longlong)local_188 + uVar31 + 8) = iVar3 - iVar36;
      *(int *)((longlong)local_188 + uVar31 + 0xc) = iVar4 - iVar1;
      *(int *)((longlong)local_188 + uVar31 + 0x10) = iVar5 - iVar9;
      *(int *)((longlong)local_188 + uVar31 + 0x14) = iVar6 - iVar10;
      *(int *)((longlong)local_188 + uVar31 + 0x18) = iVar7 - iVar11;
      *(int *)((longlong)local_188 + uVar31 + 0x1c) = iVar8 - iVar12;
      lVar32 = lVar32 + -1;
      uVar31 = uVar31 + 0x20;
    } while (lVar32 != 0);
    piVar34 = local_188;
    uVar31 = uVar38;
    do {
      iVar36 = (int)uVar31;
      iVar28 = iVar36 + 4;
      uVar39 = -(uint)(iVar36 + iVar13 == iVar17);
      uVar43 = -(uint)(iVar36 + iVar14 == iVar18);
      uVar45 = -(uint)(iVar36 + iVar15 == iVar19);
      uVar47 = -(uint)(iVar36 + iVar16 == iVar20);
      uVar31 = (ulonglong)(iVar36 + 8U);
      uVar42 = -(uint)(iVar28 + iVar13 == iVar17);
      uVar44 = -(uint)(iVar28 + iVar14 == iVar18);
      uVar46 = -(uint)(iVar28 + iVar15 == iVar19);
      uVar48 = -(uint)(iVar28 + iVar16 == iVar20);
      *piVar34 = (~uVar39 & uVar24 | uVar29 & uVar39) + *piVar34;
      piVar34[1] = (~uVar43 & uVar25 | uVar21 & uVar43) + piVar34[1];
      piVar34[2] = (~uVar45 & uVar26 | uVar22 & uVar45) + piVar34[2];
      piVar34[3] = (~uVar47 & uVar27 | uVar23 & uVar47) + piVar34[3];
      auVar50 = *(undefined1 (*) [16])(piVar34 + 4);
      piVar34[4] = (~uVar42 & uVar24 | uVar29 & uVar42) + auVar50._0_4_;
      piVar34[5] = (~uVar44 & uVar25 | uVar21 & uVar44) + auVar50._4_4_;
      piVar34[6] = (~uVar46 & uVar26 | uVar22 & uVar46) + auVar50._8_4_;
      piVar34[7] = (~uVar48 & uVar27 | uVar23 & uVar48) + auVar50._12_4_;
      piVar34 = piVar34 + 8;
    } while (iVar36 + 8U < 0x10);
    FUN_14f799000(local_188);
    lVar32 = 2;
    uVar31 = uVar38;
    do {
      iVar28 = *(int *)((longlong)&local_208 + uVar31 + 4);
      iVar36 = *(int *)((longlong)&uStack_200 + uVar31);
      iVar1 = *(int *)((longlong)&uStack_200 + uVar31 + 4);
      iVar2 = *(int *)((longlong)&local_248 + uVar31 + 4);
      iVar3 = *(int *)((longlong)&uStack_240 + uVar31);
      iVar4 = *(int *)((longlong)&uStack_240 + uVar31 + 4);
      iVar5 = *(int *)((longlong)&local_238 + uVar31);
      iVar6 = *(int *)((longlong)&local_238 + uVar31 + 4);
      iVar7 = *(int *)((longlong)&uStack_230 + uVar31);
      iVar8 = *(int *)((longlong)&uStack_230 + uVar31 + 4);
      iVar9 = *(int *)((longlong)&local_1f8 + uVar31);
      iVar10 = *(int *)((longlong)&local_1f8 + uVar31 + 4);
      iVar11 = *(int *)((longlong)&uStack_1f0 + uVar31);
      iVar12 = *(int *)((longlong)&uStack_1f0 + uVar31 + 4);
      *(int *)((longlong)&local_2c8 + uVar31) =
           *(int *)((longlong)&local_248 + uVar31) - *(int *)((longlong)&local_208 + uVar31);
      *(int *)((longlong)&local_2c8 + uVar31 + 4) = iVar2 - iVar28;
      *(int *)((longlong)&uStack_2c0 + uVar31) = iVar3 - iVar36;
      *(int *)((longlong)&uStack_2c0 + uVar31 + 4) = iVar4 - iVar1;
      *(int *)((longlong)&local_2b8 + uVar31) = iVar5 - iVar9;
      *(int *)((longlong)&local_2b8 + uVar31 + 4) = iVar6 - iVar10;
      *(int *)((longlong)&uStack_2b0 + uVar31) = iVar7 - iVar11;
      *(int *)((longlong)&uStack_2b0 + uVar31 + 4) = iVar8 - iVar12;
      lVar32 = lVar32 + -1;
      uVar31 = uVar31 + 0x20;
      uVar37 = uVar38;
      piVar34 = aiStack_2e8;
    } while (lVar32 != 0);
    do {
      piVar33 = piVar34 + 8;
      iVar36 = (int)uVar37;
      iVar28 = iVar36 + 4;
      uVar39 = -(uint)(iVar36 + iVar13 == iVar17);
      uVar43 = -(uint)(iVar36 + iVar14 == iVar18);
      uVar45 = -(uint)(iVar36 + iVar15 == iVar19);
      uVar47 = -(uint)(iVar36 + iVar16 == iVar20);
      uVar42 = -(uint)(iVar28 + iVar13 == iVar17);
      uVar44 = -(uint)(iVar28 + iVar14 == iVar18);
      uVar46 = -(uint)(iVar28 + iVar15 == iVar19);
      uVar48 = -(uint)(iVar28 + iVar16 == iVar20);
      *piVar33 = (uVar29 & uVar39 | ~uVar39 & uVar24) + *piVar33;
      piVar34[9] = (uVar21 & uVar43 | ~uVar43 & uVar25) + piVar34[9];
      piVar34[10] = (uVar22 & uVar45 | ~uVar45 & uVar26) + piVar34[10];
      piVar34[0xb] = (uVar23 & uVar47 | ~uVar47 & uVar27) + piVar34[0xb];
      auVar50 = *(undefined1 (*) [16])(piVar34 + 0xc);
      piVar34[0xc] = (uVar29 & uVar42 | ~uVar42 & uVar24) + auVar50._0_4_;
      piVar34[0xd] = (uVar21 & uVar44 | ~uVar44 & uVar25) + auVar50._4_4_;
      piVar34[0xe] = (uVar22 & uVar46 | ~uVar46 & uVar26) + auVar50._8_4_;
      piVar34[0xf] = (uVar23 & uVar48 | ~uVar48 & uVar27) + auVar50._12_4_;
      uVar37 = (ulonglong)(iVar36 + 8U);
      piVar34 = piVar33;
    } while (iVar36 + 8U < 0x10);
    FUN_14f799000(&local_2c8);
    gf_mul(&local_288,local_1c8,&local_2c8);
    lVar32 = 2;
    uVar31 = uVar38;
    do {
      iVar28 = *(int *)((longlong)&local_248 + uVar31 + 4);
      iVar36 = *(int *)((longlong)&uStack_240 + uVar31);
      iVar1 = *(int *)((longlong)&uStack_240 + uVar31 + 4);
      iVar2 = *(int *)((longlong)&local_208 + uVar31 + 4);
      iVar3 = *(int *)((longlong)&uStack_200 + uVar31);
      iVar4 = *(int *)((longlong)&uStack_200 + uVar31 + 4);
      iVar5 = *(int *)((longlong)&local_1f8 + uVar31);
      iVar6 = *(int *)((longlong)&local_1f8 + uVar31 + 4);
      iVar7 = *(int *)((longlong)&uStack_1f0 + uVar31);
      iVar8 = *(int *)((longlong)&uStack_1f0 + uVar31 + 4);
      auVar50 = *(undefined1 (*) [16])((longlong)&local_238 + uVar31);
      *(int *)((longlong)&local_2c8 + uVar31) =
           *(int *)((longlong)&local_208 + uVar31) + *(int *)((longlong)&local_248 + uVar31);
      *(int *)((longlong)&local_2c8 + uVar31 + 4) = iVar2 + iVar28;
      *(int *)((longlong)&uStack_2c0 + uVar31) = iVar3 + iVar36;
      *(int *)((longlong)&uStack_2c0 + uVar31 + 4) = iVar4 + iVar1;
      *(int *)((longlong)&local_2b8 + uVar31) = iVar5 + auVar50._0_4_;
      *(int *)((longlong)&local_2b8 + uVar31 + 4) = iVar6 + auVar50._4_4_;
      *(int *)((longlong)&uStack_2b0 + uVar31) = iVar7 + auVar50._8_4_;
      *(int *)((longlong)&uStack_2b0 + uVar31 + 4) = iVar8 + auVar50._12_4_;
      lVar32 = lVar32 + -1;
      uVar31 = uVar31 + 0x20;
    } while (lVar32 != 0);
    gf_mul(&local_248,local_188,&local_2c8);
    lVar32 = 2;
    uVar31 = uVar38;
    do {
      iVar28 = *(int *)((longlong)&local_248 + uVar31 + 4);
      iVar36 = *(int *)((longlong)&uStack_240 + uVar31);
      iVar1 = *(int *)((longlong)&uStack_240 + uVar31 + 4);
      iVar2 = *(int *)((longlong)&local_288 + uVar31 + 4);
      iVar3 = *(int *)((longlong)&uStack_280 + uVar31);
      iVar4 = *(int *)((longlong)&uStack_280 + uVar31 + 4);
      iVar5 = *(int *)((longlong)&local_278 + uVar31);
      iVar6 = *(int *)((longlong)&local_278 + uVar31 + 4);
      iVar7 = *(int *)((longlong)&uStack_270 + uVar31);
      iVar8 = *(int *)((longlong)&uStack_270 + uVar31 + 4);
      iVar9 = *(int *)((longlong)&local_238 + uVar31);
      iVar10 = *(int *)((longlong)&local_238 + uVar31 + 4);
      iVar11 = *(int *)((longlong)&uStack_230 + uVar31);
      iVar12 = *(int *)((longlong)&uStack_230 + uVar31 + 4);
      *(int *)((longlong)&local_208 + uVar31) =
           *(int *)((longlong)&local_288 + uVar31) - *(int *)((longlong)&local_248 + uVar31);
      *(int *)((longlong)&local_208 + uVar31 + 4) = iVar2 - iVar28;
      *(int *)((longlong)&uStack_200 + uVar31) = iVar3 - iVar36;
      *(int *)((longlong)&uStack_200 + uVar31 + 4) = iVar4 - iVar1;
      *(int *)((longlong)&local_1f8 + uVar31) = iVar5 - iVar9;
      *(int *)((longlong)&local_1f8 + uVar31 + 4) = iVar6 - iVar10;
      *(int *)((longlong)&uStack_1f0 + uVar31) = iVar7 - iVar11;
      *(int *)((longlong)&uStack_1f0 + uVar31 + 4) = iVar8 - iVar12;
      lVar32 = lVar32 + -1;
      uVar31 = uVar31 + 0x20;
    } while (lVar32 != 0);
    piVar34 = (int *)&local_208;
    uVar31 = uVar38;
    do {
      iVar36 = (int)uVar31;
      iVar28 = iVar36 + 4;
      uVar39 = -(uint)(iVar36 + iVar13 == iVar17);
      uVar43 = -(uint)(iVar36 + iVar14 == iVar18);
      uVar45 = -(uint)(iVar36 + iVar15 == iVar19);
      uVar47 = -(uint)(iVar36 + iVar16 == iVar20);
      uVar31 = (ulonglong)(iVar36 + 8U);
      uVar42 = -(uint)(iVar28 + iVar13 == iVar17);
      uVar44 = -(uint)(iVar28 + iVar14 == iVar18);
      uVar46 = -(uint)(iVar28 + iVar15 == iVar19);
      uVar48 = -(uint)(iVar28 + iVar16 == iVar20);
      *piVar34 = (~uVar39 & uVar24 | uVar29 & uVar39) + *piVar34;
      piVar34[1] = (~uVar43 & uVar25 | uVar21 & uVar43) + piVar34[1];
      piVar34[2] = (~uVar45 & uVar26 | uVar22 & uVar45) + piVar34[2];
      piVar34[3] = (~uVar47 & uVar27 | uVar23 & uVar47) + piVar34[3];
      auVar50 = *(undefined1 (*) [16])(piVar34 + 4);
      piVar34[4] = (~uVar42 & uVar24 | uVar29 & uVar42) + auVar50._0_4_;
      piVar34[5] = (~uVar44 & uVar25 | uVar21 & uVar44) + auVar50._4_4_;
      piVar34[6] = (~uVar46 & uVar26 | uVar22 & uVar46) + auVar50._8_4_;
      piVar34[7] = (~uVar48 & uVar27 | uVar23 & uVar48) + auVar50._12_4_;
      piVar34 = piVar34 + 8;
    } while (iVar36 + 8U < 0x10);
    FUN_14f799000(&local_208);
    gf_sqr(&local_2c8,&local_208);
    gf_mul(&local_208,&local_148,&local_2c8);
    lVar32 = 2;
    uVar31 = uVar38;
    do {
      iVar28 = *(int *)((longlong)&local_288 + uVar31 + 4);
      iVar36 = *(int *)((longlong)&uStack_280 + uVar31);
      iVar1 = *(int *)((longlong)&uStack_280 + uVar31 + 4);
      iVar2 = *(int *)((longlong)&local_248 + uVar31 + 4);
      iVar3 = *(int *)((longlong)&uStack_240 + uVar31);
      iVar4 = *(int *)((longlong)&uStack_240 + uVar31 + 4);
      iVar5 = *(int *)((longlong)&local_238 + uVar31);
      iVar6 = *(int *)((longlong)&local_238 + uVar31 + 4);
      iVar7 = *(int *)((longlong)&uStack_230 + uVar31);
      iVar8 = *(int *)((longlong)&uStack_230 + uVar31 + 4);
      auVar50 = *(undefined1 (*) [16])((longlong)&local_278 + uVar31);
      *(int *)((longlong)&local_2c8 + uVar31) =
           *(int *)((longlong)&local_248 + uVar31) + *(int *)((longlong)&local_288 + uVar31);
      *(int *)((longlong)&local_2c8 + uVar31 + 4) = iVar2 + iVar28;
      *(int *)((longlong)&uStack_2c0 + uVar31) = iVar3 + iVar36;
      *(int *)((longlong)&uStack_2c0 + uVar31 + 4) = iVar4 + iVar1;
      *(int *)((longlong)&local_2b8 + uVar31) = iVar5 + auVar50._0_4_;
      *(int *)((longlong)&local_2b8 + uVar31 + 4) = iVar6 + auVar50._4_4_;
      *(int *)((longlong)&uStack_2b0 + uVar31) = iVar7 + auVar50._8_4_;
      *(int *)((longlong)&uStack_2b0 + uVar31 + 4) = iVar8 + auVar50._12_4_;
      lVar32 = lVar32 + -1;
      uVar31 = uVar31 + 0x20;
    } while (lVar32 != 0);
    gf_sqr(&local_248,&local_2c8);
    gf_sqr(&local_2c8,local_1c8);
    gf_sqr(local_1c8,local_188);
    gf_mul(&local_288,&local_2c8,local_1c8);
    lVar32 = 2;
    uVar31 = uVar38;
    do {
      iVar28 = *(int *)((longlong)local_1c8 + uVar31 + 4);
      iVar36 = *(int *)((longlong)local_1c8 + uVar31 + 8);
      iVar1 = *(int *)((longlong)local_1c8 + uVar31 + 0xc);
      iVar2 = *(int *)((longlong)&local_2c8 + uVar31 + 4);
      iVar3 = *(int *)((longlong)&uStack_2c0 + uVar31);
      iVar4 = *(int *)((longlong)&uStack_2c0 + uVar31 + 4);
      iVar5 = *(int *)((longlong)&local_2b8 + uVar31);
      iVar6 = *(int *)((longlong)&local_2b8 + uVar31 + 4);
      iVar7 = *(int *)((longlong)&uStack_2b0 + uVar31);
      iVar8 = *(int *)((longlong)&uStack_2b0 + uVar31 + 4);
      iVar9 = *(int *)((longlong)aiStack_1b8 + uVar31);
      iVar10 = *(int *)((longlong)aiStack_1b8 + uVar31 + 4);
      iVar11 = *(int *)((longlong)aiStack_1b8 + uVar31 + 8);
      iVar12 = *(int *)((longlong)aiStack_1b8 + uVar31 + 0xc);
      *(int *)((longlong)local_188 + uVar31) =
           *(int *)((longlong)&local_2c8 + uVar31) - *(int *)((longlong)local_1c8 + uVar31);
      *(int *)((longlong)local_188 + uVar31 + 4) = iVar2 - iVar28;
      *(int *)((longlong)local_188 + uVar31 + 8) = iVar3 - iVar36;
      *(int *)((longlong)local_188 + uVar31 + 0xc) = iVar4 - iVar1;
      *(int *)((longlong)local_188 + uVar31 + 0x10) = iVar5 - iVar9;
      *(int *)((longlong)local_188 + uVar31 + 0x14) = iVar6 - iVar10;
      *(int *)((longlong)local_188 + uVar31 + 0x18) = iVar7 - iVar11;
      *(int *)((longlong)local_188 + uVar31 + 0x1c) = iVar8 - iVar12;
      lVar32 = lVar32 + -1;
      uVar31 = uVar31 + 0x20;
    } while (lVar32 != 0);
    piVar34 = local_188;
    uVar31 = uVar38;
    do {
      iVar36 = (int)uVar31;
      iVar28 = iVar36 + 4;
      uVar31 = (ulonglong)(iVar36 + 8U);
      uVar39 = -(uint)(iVar36 + iVar13 == iVar17);
      uVar43 = -(uint)(iVar36 + iVar14 == iVar18);
      uVar45 = -(uint)(iVar36 + iVar15 == iVar19);
      uVar47 = -(uint)(iVar36 + iVar16 == iVar20);
      uVar42 = -(uint)(iVar28 + iVar13 == iVar17);
      uVar44 = -(uint)(iVar28 + iVar14 == iVar18);
      uVar46 = -(uint)(iVar28 + iVar15 == iVar19);
      uVar48 = -(uint)(iVar28 + iVar16 == iVar20);
      *piVar34 = (~uVar39 & uVar24 | uVar39 & uVar29) + *piVar34;
      piVar34[1] = (~uVar43 & uVar25 | uVar43 & uVar21) + piVar34[1];
      piVar34[2] = (~uVar45 & uVar26 | uVar45 & uVar22) + piVar34[2];
      piVar34[3] = (~uVar47 & uVar27 | uVar47 & uVar23) + piVar34[3];
      auVar50 = *(undefined1 (*) [16])(piVar34 + 4);
      piVar34[4] = (~uVar42 & uVar24 | uVar42 & uVar29) + auVar50._0_4_;
      piVar34[5] = (~uVar44 & uVar25 | uVar44 & uVar21) + auVar50._4_4_;
      piVar34[6] = (~uVar46 & uVar26 | uVar46 & uVar22) + auVar50._8_4_;
      piVar34[7] = (~uVar48 & uVar27 | uVar48 & uVar23) + auVar50._12_4_;
      piVar34 = piVar34 + 8;
    } while (iVar36 + 8U < 0x10);
    FUN_14f799000(local_188);
    gf_mulw_unsigned(local_1c8,local_188,0x98a9);
    lVar32 = 2;
    uVar31 = uVar38;
    do {
      iVar28 = *(int *)((longlong)&local_2c8 + uVar31 + 4);
      iVar36 = *(int *)((longlong)&uStack_2c0 + uVar31);
      iVar1 = *(int *)((longlong)&uStack_2c0 + uVar31 + 4);
      *(int *)((longlong)local_1c8 + uVar31) =
           *(int *)((longlong)&local_2c8 + uVar31) + *(int *)((longlong)local_1c8 + uVar31);
      *(int *)((longlong)local_1c8 + uVar31 + 4) =
           iVar28 + *(int *)((longlong)local_1c8 + uVar31 + 4);
      *(int *)((longlong)local_1c8 + uVar31 + 8) =
           iVar36 + *(int *)((longlong)local_1c8 + uVar31 + 8);
      *(int *)((longlong)local_1c8 + uVar31 + 0xc) =
           iVar1 + *(int *)((longlong)local_1c8 + uVar31 + 0xc);
      auVar50 = *(undefined1 (*) [16])((longlong)aiStack_1b8 + uVar31);
      iVar28 = *(int *)((longlong)&local_2b8 + uVar31 + 4);
      iVar36 = *(int *)((longlong)&uStack_2b0 + uVar31);
      iVar1 = *(int *)((longlong)&uStack_2b0 + uVar31 + 4);
      *(int *)((longlong)aiStack_1b8 + uVar31) =
           *(int *)((longlong)&local_2b8 + uVar31) + auVar50._0_4_;
      *(int *)((longlong)aiStack_1b8 + uVar31 + 4) = iVar28 + auVar50._4_4_;
      *(int *)((longlong)aiStack_1b8 + uVar31 + 8) = iVar36 + auVar50._8_4_;
      *(int *)((longlong)aiStack_1b8 + uVar31 + 0xc) = iVar1 + auVar50._12_4_;
      lVar32 = lVar32 + -1;
      uVar31 = uVar31 + 0x20;
    } while (lVar32 != 0);
    gf_mul(&local_2c8,local_188,local_1c8);
    uVar41 = uVar41 - 1;
  } while (-1 < (int)uVar41);
  auVar49._4_4_ = uVar40;
  auVar49._0_4_ = uVar40;
  auVar49._8_4_ = uVar40;
  auVar49._12_4_ = uVar40;
  uVar30 = uVar38;
  do {
    auVar50 = (*(undefined1 (*) [16])((longlong)&local_288 + uVar30) ^
              *(undefined1 (*) [16])((longlong)&local_248 + uVar30)) & auVar49;
    *(undefined1 (*) [16])((longlong)&local_248 + uVar30) =
         auVar50 ^ *(undefined1 (*) [16])((longlong)&local_248 + uVar30);
    *(undefined1 (*) [16])((longlong)&local_288 + uVar30) =
         auVar50 ^ *(undefined1 (*) [16])((longlong)&local_288 + uVar30);
    auVar50 = (*(undefined1 (*) [16])((longlong)&local_278 + uVar30) ^
              *(undefined1 (*) [16])((longlong)&local_238 + uVar30)) & auVar49;
    *(undefined1 (*) [16])((longlong)&local_278 + uVar30) =
         auVar50 ^ *(undefined1 (*) [16])((longlong)&local_278 + uVar30);
    *(undefined1 (*) [16])((longlong)&local_238 + uVar30) =
         auVar50 ^ *(undefined1 (*) [16])((longlong)&local_238 + uVar30);
    uVar30 = uVar30 + 0x20;
  } while (uVar30 < 0x40);
  do {
    auVar50 = (*(undefined1 (*) [16])((longlong)&local_2c8 + uVar38) ^
              *(undefined1 (*) [16])((longlong)&local_208 + uVar38)) & auVar49;
    *(undefined1 (*) [16])((longlong)&local_208 + uVar38) =
         auVar50 ^ *(undefined1 (*) [16])((longlong)&local_208 + uVar38);
    *(undefined1 (*) [16])((longlong)&local_2c8 + uVar38) =
         auVar50 ^ *(undefined1 (*) [16])((longlong)&local_2c8 + uVar38);
    auVar50 = (*(undefined1 (*) [16])((longlong)&local_2b8 + uVar38) ^
              *(undefined1 (*) [16])((longlong)&local_1f8 + uVar38)) & auVar49;
    *(undefined1 (*) [16])((longlong)&local_2b8 + uVar38) =
         auVar50 ^ *(undefined1 (*) [16])((longlong)&local_2b8 + uVar38);
    *(undefined1 (*) [16])((longlong)&local_1f8 + uVar38) =
         auVar50 ^ *(undefined1 (*) [16])((longlong)&local_1f8 + uVar38);
    uVar38 = uVar38 + 0x20;
  } while (uVar38 < 0x40);
  gf_sqr(local_c8,&local_2c8);
  gf_isr(&local_108,local_c8);
  gf_sqr(local_c8,&local_108);
  gf_mul(&local_108,local_c8,&local_2c8);
  local_2c8 = local_108;
  uStack_2c0 = uStack_100;
  local_2b8 = local_f8;
  uStack_2b0 = uStack_f0;
  local_2a8 = local_e8;
  uStack_2a0 = uStack_e0;
  local_298 = local_d8;
  uStack_290 = uStack_d0;
  gf_mul(&local_148,&local_288,&local_2c8);
  gf_serialize(param_1,&local_148,1);
  uVar29 = gf_eq(&local_148,&DAT_1534e5f30);
  OPENSSL_cleanse(&local_148,0x40);
  OPENSSL_cleanse(&local_288,0x40);
  OPENSSL_cleanse(&local_2c8,0x40);
  OPENSSL_cleanse(&local_248,0x40);
  OPENSSL_cleanse(&local_208,0x40);
  OPENSSL_cleanse(local_1c8,0x40);
  OPENSSL_cleanse(local_188,0x40);
  return ~uVar29;
}

