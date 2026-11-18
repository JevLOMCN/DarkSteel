// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// _mul_1x1 @ 140e60380

/* WARNING: Removing unreachable block (ram,0x000140e605fa) */
/* WARNING: Removing unreachable block (ram,0x000140e605c3) */
/* WARNING: Removing unreachable block (ram,0x000140e6058c) */
/* WARNING: Removing unreachable block (ram,0x000140e60555) */
/* WARNING: Removing unreachable block (ram,0x000140e6051e) */
/* WARNING: Removing unreachable block (ram,0x000140e604e7) */
/* WARNING: Removing unreachable block (ram,0x000140e604b0) */

ulonglong _mul_1x1(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong in_RAX;
  ulonglong unaff_RBP;
  ulonglong local_88 [4];
  ulonglong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_88[1] = in_RAX & 0x1fffffffffffffff;
  local_88[2] = local_88[1] * 2;
  local_68 = local_88[1] * 4;
  local_88[0] = 0;
  local_28 = local_68 ^ in_RAX * 8;
  local_88[3] = local_88[1] ^ local_88[2];
  local_60 = local_88[1] ^ local_68;
  local_50 = local_88[1] ^ local_88[2] ^ local_68;
  local_58 = local_88[2] ^ local_68;
  local_40 = local_88[1] ^ local_68 ^ local_28;
  local_38 = local_88[2] ^ local_68 ^ local_28;
  local_48 = in_RAX * 8;
  local_30 = local_50 ^ local_28;
  local_20 = local_40 ^ local_68;
  local_18 = local_38 ^ local_68;
  local_10 = local_30 ^ local_68;
  return ((longlong)in_RAX >> 0x3f & unaff_RBP) << 0x3f ^
         ((longlong)(in_RAX * 2) >> 0x3f & unaff_RBP) << 0x3e ^
         ((longlong)(in_RAX * 4) >> 0x3f & unaff_RBP) << 0x3d ^
         local_88[param_3 & unaff_RBP >> 4] << 4 ^ local_88[param_3 & unaff_RBP >> 0xc] << 0xc ^
         local_88[param_3 & unaff_RBP >> 0x14] << 0x14 ^
         local_88[param_3 & unaff_RBP >> 0x1c] << 0x1c ^
         local_88[param_3 & unaff_RBP >> 0x24] << 0x24 ^
         local_88[param_3 & unaff_RBP >> 0x2c] << 0x2c ^
         local_88[param_3 & unaff_RBP >> 0x34] << 0x34 ^
         local_88[param_3 & unaff_RBP >> 0x3c] << 0x3c ^
         local_88[param_3 & unaff_RBP] ^ local_88[param_3 & unaff_RBP >> 8] << 8 ^
         local_88[param_3 & unaff_RBP >> 0x10] << 0x10 ^
         local_88[param_3 & unaff_RBP >> 0x18] << 0x18 ^
         local_88[param_3 & unaff_RBP >> 0x20] << 0x20 ^
         local_88[param_3 & unaff_RBP >> 0x28] << 0x28 ^
         local_88[param_3 & unaff_RBP >> 0x30] << 0x30 ^
         local_88[param_3 & unaff_RBP >> 0x38] << 0x38;
}

// bn_GF2m_mul_2x2 @ 140e60650

/* WARNING: Removing unreachable block (ram,0x000140e606a2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void bn_GF2m_mul_2x2(undefined1 (*param_1) [16],ulonglong param_2,ulonglong param_3,
                    ulonglong param_4,ulonglong param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  
  if ((_OPENSSL_ia32cap_P >> 0x21 & 1) == 0) {
    uVar10 = _mul_1x1(param_1,param_2,0xf,param_4,param_1,param_2,param_3,param_4,param_5);
    uVar14 = param_2;
    uVar11 = _mul_1x1();
    uVar13 = uVar14;
    uVar12 = _mul_1x1();
    *(ulonglong *)*param_1 = uVar11;
    *(ulonglong *)(param_1[1] + 8) = param_2;
    uVar14 = uVar13 ^ uVar14 ^ uVar10 ^ param_2;
    *(ulonglong *)param_1[1] = uVar14;
    *(ulonglong *)(*param_1 + 8) = uVar12 ^ uVar13 ^ uVar11 ^ param_2 ^ uVar14;
    return;
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_4;
  auVar2 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar3 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar2 = auVar2 ^ auVar6 << uVar1;
    }
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_3;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_5;
  auVar3 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar4 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar3 = auVar3 ^ auVar7 << uVar1;
    }
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2 ^ param_3;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_4 ^ param_5;
  auVar6 = (undefined1  [16])0x0;
  for (uVar1 = 0; uVar1 < 0x40; uVar1 = uVar1 + 1) {
    if ((auVar5 & (undefined1  [16])0x1 << uVar1) != (undefined1  [16])0x0) {
      auVar6 = auVar6 ^ auVar8 << uVar1;
    }
  }
  auVar15._0_8_ =
       CONCAT44(auVar6._4_4_ ^ auVar2._4_4_ ^ auVar3._4_4_,
                auVar6._0_4_ ^ auVar2._0_4_ ^ auVar3._0_4_);
  auVar15._8_4_ = auVar6._8_4_ ^ auVar2._8_4_ ^ auVar3._8_4_;
  auVar15._12_4_ = auVar6._12_4_ ^ auVar2._12_4_ ^ auVar3._12_4_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = auVar15._0_8_;
  *param_1 = auVar3 ^ auVar9 << 0x40;
  param_1[1] = auVar2 ^ auVar15 >> 0x40;
  return;
}

// L$vanilla_mul_2x2 @ 140e606c0

void L_vanilla_mul_2x2(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = _mul_1x1(param_1,param_2,0xf,param_4,param_1,param_2,param_3,param_4,param_5);
  uVar5 = param_2;
  uVar2 = _mul_1x1();
  uVar4 = uVar5;
  uVar3 = _mul_1x1();
  *param_1 = uVar2;
  param_1[3] = param_2;
  uVar5 = uVar4 ^ uVar5 ^ uVar1 ^ param_2;
  param_1[2] = uVar5;
  param_1[1] = uVar3 ^ uVar4 ^ uVar2 ^ param_2 ^ uVar5;
  return;
}

