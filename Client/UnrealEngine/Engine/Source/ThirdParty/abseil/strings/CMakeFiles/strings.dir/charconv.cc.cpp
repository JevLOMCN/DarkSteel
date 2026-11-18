// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 58

// FUN_14f8f8110 @ 14f8f8110

longlong * FUN_14f8f8110(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined8 uVar12;
  char local_res8 [8];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_38._8_8_;
  local_38 = auVar4 << 0x40;
  uVar1 = (uint)param_2[1];
  if ((int)uVar1 < -0x156) goto LAB_14f8f825a;
  if (0x134 < (int)uVar1) goto LAB_14f8f823b;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulonglong *)(&DAT_153534a40 + (longlong)(int)uVar1 * 8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_2;
  local_38 = auVar2 * auVar3;
  iVar11 = ((int)(uVar1 * 0x3526a) >> 0x10) + -0x3f;
  if (param_2[3] == 0) {
    if (0x1b < uVar1) {
      iVar8 = 0x3f;
      goto LAB_14f8f818e;
    }
    local_28 = local_38;
    iVar8 = FUN_14f8f9c00(local_28);
    uVar12 = 1;
  }
  else {
    iVar8 = 0x3a;
LAB_14f8f818e:
    uVar12 = 0;
    iVar7 = FUN_14f8fa8f0(iVar8,local_38);
    iVar11 = iVar11 + iVar7;
  }
  local_28 = local_38;
  iVar7 = iVar8 + -0x18;
  if (iVar8 + -0x18 < -0x95 - iVar11) {
    iVar7 = -0x95 - iVar11;
  }
  iVar11 = iVar7 + iVar11;
  lVar9 = FUN_14f8fa610(local_28,iVar7,uVar12,local_res8);
  if ((local_res8[0] == '\0') && (cVar6 = FUN_14f8f9fb0(lVar9,iVar11,param_2), cVar6 != '\0')) {
    lVar9 = lVar9 + 1;
  }
  auVar4 = local_38;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_38._8_8_;
  local_38 = auVar5 << 0x40;
  lVar10 = 0x800000;
  iVar8 = iVar11 + 1;
  if (lVar9 != 0x1000000) {
    lVar10 = lVar9;
    iVar8 = iVar11;
  }
  if (0x68 < iVar8) {
LAB_14f8f823b:
    local_38._0_12_ = ZEXT412(99999) << 0x40;
    *param_1 = 0;
    param_1[1] = local_38._8_8_;
    return param_1;
  }
  if (lVar10 != 0) {
    local_38._12_4_ = auVar4._12_4_;
    local_38._8_4_ = iVar8;
    local_38._0_8_ = lVar10;
    *param_1 = lVar10;
    param_1[1] = local_38._8_8_;
    return param_1;
  }
LAB_14f8f825a:
  local_38._0_12_ = ZEXT412(0xfffe7961) << 0x40;
  *param_1 = 0;
  param_1[1] = local_38._8_8_;
  return param_1;
}

// FUN_14f8f82a0 @ 14f8f82a0

longlong * FUN_14f8f82a0(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined8 uVar12;
  char local_res8 [8];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_38._8_8_;
  local_38 = auVar4 << 0x40;
  uVar1 = (uint)param_2[1];
  if ((int)uVar1 < -0x156) goto LAB_14f8f83f8;
  if (0x134 < (int)uVar1) goto LAB_14f8f83d9;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *(ulonglong *)(&DAT_153534a40 + (longlong)(int)uVar1 * 8);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_2;
  local_38 = auVar2 * auVar3;
  iVar11 = ((int)(uVar1 * 0x3526a) >> 0x10) + -0x3f;
  if (param_2[3] == 0) {
    if (0x1b < uVar1) {
      iVar8 = 0x3f;
      goto LAB_14f8f831e;
    }
    local_28 = local_38;
    iVar8 = FUN_14f8f9c00(local_28);
    uVar12 = 1;
  }
  else {
    iVar8 = 0x3a;
LAB_14f8f831e:
    uVar12 = 0;
    iVar7 = FUN_14f8fa8f0(iVar8,local_38);
    iVar11 = iVar11 + iVar7;
  }
  local_28 = local_38;
  iVar7 = iVar8 + -0x35;
  if (iVar8 + -0x35 < -0x432 - iVar11) {
    iVar7 = -0x432 - iVar11;
  }
  iVar11 = iVar7 + iVar11;
  lVar9 = FUN_14f8fa610(local_28,iVar7,uVar12,local_res8);
  if ((local_res8[0] == '\0') && (cVar6 = FUN_14f8f9fb0(lVar9,iVar11,param_2), cVar6 != '\0')) {
    lVar9 = lVar9 + 1;
  }
  auVar4 = local_38;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_38._8_8_;
  local_38 = auVar5 << 0x40;
  lVar10 = 0x10000000000000;
  iVar8 = iVar11 + 1;
  if (lVar9 != 0x20000000000000) {
    lVar10 = lVar9;
    iVar8 = iVar11;
  }
  if (0x3cb < iVar8) {
LAB_14f8f83d9:
    local_38._0_12_ = ZEXT412(99999) << 0x40;
    *param_1 = 0;
    param_1[1] = local_38._8_8_;
    return param_1;
  }
  if (lVar10 != 0) {
    local_38._12_4_ = auVar4._12_4_;
    local_38._8_4_ = iVar8;
    local_38._0_8_ = lVar10;
    *param_1 = lVar10;
    param_1[1] = local_38._8_8_;
    return param_1;
  }
LAB_14f8f83f8:
  local_38._0_12_ = ZEXT412(0xfffe7961) << 0x40;
  *param_1 = 0;
  param_1[1] = local_38._8_8_;
  return param_1;
}

// FUN_14f8f8440 @ 14f8f8440

longlong * FUN_14f8f8440(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  ulonglong local_18 [2];
  
  local_18[0] = *param_2;
  iVar1 = (int)param_2[1];
  if (__isa_available < 5) {
    lVar5 = 0x3f;
    if (local_18[0] != 0) {
      for (; local_18[0] >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    if (local_18[0] != 0) {
      iVar3 = 0x3f - (int)lVar5;
    }
    else {
      iVar3 = 0x40;
    }
  }
  else {
    iVar3 = (int)LZCOUNT(local_18[0]);
  }
  local_18[1] = 0;
  iVar2 = 0x28 - iVar3;
  if (0x28 - iVar3 < -0x95 - iVar1) {
    iVar2 = -0x95 - iVar1;
  }
  lVar4 = FUN_14f8fa610(local_18,iVar2,CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1),local_res8);
  *param_1 = 0;
  lVar5 = 0x800000;
  iVar3 = iVar2 + iVar1 + 1;
  if (lVar4 != 0x1000000) {
    lVar5 = lVar4;
    iVar3 = iVar2 + iVar1;
  }
  if (iVar3 < 0x69) {
    if (lVar5 != 0) {
      *(int *)(param_1 + 1) = iVar3;
      *param_1 = lVar5;
      return param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0xfffe7961;
    return param_1;
  }
  *(undefined4 *)(param_1 + 1) = 99999;
  return param_1;
}

// FUN_14f8f8530 @ 14f8f8530

longlong * FUN_14f8f8530(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  ulonglong local_18 [2];
  
  local_18[0] = *param_2;
  iVar1 = (int)param_2[1];
  if (__isa_available < 5) {
    lVar5 = 0x3f;
    if (local_18[0] != 0) {
      for (; local_18[0] >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    if (local_18[0] != 0) {
      iVar3 = 0x3f - (int)lVar5;
    }
    else {
      iVar3 = 0x40;
    }
  }
  else {
    iVar3 = (int)LZCOUNT(local_18[0]);
  }
  local_18[1] = 0;
  iVar2 = 0xb - iVar3;
  if (0xb - iVar3 < -0x432 - iVar1) {
    iVar2 = -0x432 - iVar1;
  }
  lVar4 = FUN_14f8fa610(local_18,iVar2,CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1),local_res8);
  *param_1 = 0;
  lVar5 = 0x10000000000000;
  iVar3 = iVar2 + iVar1 + 1;
  if (lVar4 != 0x20000000000000) {
    lVar5 = lVar4;
    iVar3 = iVar2 + iVar1;
  }
  if (iVar3 < 0x3cc) {
    if (lVar5 != 0) {
      *(int *)(param_1 + 1) = iVar3;
      *param_1 = lVar5;
      return param_1;
    }
    *(undefined4 *)(param_1 + 1) = 0xfffe7961;
    return param_1;
  }
  *(undefined4 *)(param_1 + 1) = 99999;
  return param_1;
}

// Compare<84,84> @ 14f8f86f0

/* int __cdecl absl::lts_20240722::strings_internal::Compare<84,84>(class
   absl::lts_20240722::strings_internal::BigUnsigned<84> const & __ptr64,class
   absl::lts_20240722::strings_internal::BigUnsigned<84> const & __ptr64) */

int __cdecl
absl::lts_20240722::strings_internal::Compare<84,84>
          (BigUnsigned<84> *param_1,BigUnsigned<84> *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  BigUnsigned<84> *pBVar8;
  
  iVar1 = *(int *)param_2;
  iVar2 = *(int *)param_1;
  iVar7 = iVar2;
  if (iVar2 < iVar1) {
    iVar7 = iVar1;
  }
  iVar7 = iVar7 + -1;
  if (-1 < iVar7) {
    lVar3 = (longlong)iVar7;
    pBVar8 = param_2 + lVar3 * 4 + 4;
    do {
      uVar6 = 0;
      if ((lVar3 < 0) || (iVar2 <= iVar7)) {
        uVar5 = 0;
        if (-1 < lVar3) goto LAB_14f8f8739;
LAB_14f8f8755:
        uVar4 = 0;
      }
      else {
        uVar5 = *(uint *)(pBVar8 + ((longlong)param_1 - (longlong)param_2));
LAB_14f8f8739:
        uVar6 = uVar5;
        if (iVar1 <= iVar7) goto LAB_14f8f8755;
        uVar4 = *(uint *)pBVar8;
        if (uVar5 < uVar4) {
          return -1;
        }
      }
      if (uVar4 < uVar6) {
        return 1;
      }
      iVar7 = iVar7 + -1;
      pBVar8 = pBVar8 + -4;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return 0;
}

// FUN_14f8f8790 @ 14f8f8790

undefined8 FUN_14f8f8790(ulonglong *param_1,char param_2,float *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  ulonglong uVar9;
  float fVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulonglong uStack_40;
  
  uVar13 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 < -0x40) {
    if (param_2 == '\0') {
      uVar14 = 0;
      uVar15 = 0;
    }
    else {
      uVar14 = (undefined4)__real_8000000000000000;
      uVar15 = (undefined4)((ulonglong)__real_8000000000000000 >> 0x20);
    }
    *param_3 = (float)(double)CONCAT44(uVar15,uVar14);
    *param_4 = 0x22;
    return 1;
  }
  if (iVar2 < 0x27) {
    if (__isa_available < 5) {
      lVar12 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      if (uVar13 != 0) {
        iVar8 = 0x3f - (int)lVar12;
      }
      else {
        iVar8 = 0x40;
      }
    }
    else {
      iVar8 = (int)LZCOUNT(uVar13);
    }
    uVar13 = uVar13 << ((byte)iVar8 & 0x3f);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(&DAT_153534a40 + (longlong)iVar2 * 8);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar13;
    auVar7 = auVar3 * auVar5;
    uStack_40 = auVar7._8_8_;
    uVar9 = auVar7._0_8_;
    if (((uStack_40 & 0x3fffffffff) == 0x3fffffffff) && (-uVar9 - 1 < uVar13)) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)(&DAT_153535ea0 + (longlong)iVar2 * 8);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar13;
      uVar1 = uVar9 + SUB168(auVar4 * auVar6,8);
      if (uVar1 < uVar9) {
        uStack_40 = uStack_40 + 1;
      }
      if ((((uStack_40 & 0x3fffffffff) == 0x3fffffffff) && (uVar1 == 0xffffffffffffffff)) &&
         (-SUB168(auVar4 * auVar6,0) - 1U < uVar13)) {
        return 0;
      }
      auVar7._8_8_ = uStack_40;
      auVar7._0_8_ = uVar1;
    }
    uVar9 = auVar7._8_8_;
    lVar12 = (longlong)(((iVar2 * 0x3526a >> 0x10) - iVar8) + 0xbf) - (uVar9 >> 0x3f ^ 1);
    uVar13 = uVar9 >> (0x26U - (auVar7[0xf] >> 7) & 0x3f);
    if (((auVar7._0_8_ != 0) || ((uVar9 & 0x3fffffffff) != 0)) || (((byte)uVar13 & 3) != 1)) {
      uVar13 = ((uint)uVar13 & 1) + uVar13 >> 1;
      lVar11 = lVar12 + 1;
      if ((uVar13 & 0xffffffffff000000) == 0) {
        lVar11 = lVar12;
      }
      if (lVar11 - 1U < 0xfe) {
        fVar10 = (float)((uint)uVar13 & 0x7fffff | (int)lVar11 << 0x17);
        if (param_2 != '\0') {
          fVar10 = (float)((uint)fVar10 | 0x80000000);
        }
        *param_3 = fVar10;
        return 1;
      }
    }
    return 0;
  }
  if (param_2 == '\0') {
    *param_3 = __real_7f7fffff;
    *param_4 = 0x22;
    return 1;
  }
  *param_3 = __real_ff7fffff;
  *param_4 = 0x22;
  return 1;
}

// FUN_14f8f89a0 @ 14f8f89a0

undefined8 FUN_14f8f89a0(ulonglong *param_1,char param_2,ulonglong *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lStack_30;
  
  uVar12 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 < -0x156) {
    if (param_2 == '\0') {
      *param_3 = 0;
      *param_4 = 0x22;
      return 1;
    }
    *param_3 = __real_8000000000000000;
    *param_4 = 0x22;
    return 1;
  }
  if (iVar2 < 0x135) {
    if (__isa_available < 5) {
      lVar11 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      if (uVar12 != 0) {
        iVar8 = 0x3f - (int)lVar11;
      }
      else {
        iVar8 = 0x40;
      }
    }
    else {
      iVar8 = (int)LZCOUNT(uVar12);
    }
    uVar12 = uVar12 << ((byte)iVar8 & 0x3f);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(&DAT_153534a40 + (longlong)iVar2 * 8);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar12;
    auVar7 = auVar3 * auVar5;
    lStack_30 = auVar7._8_8_;
    uVar9 = auVar7._0_8_;
    if (((auVar7._8_4_ & 0x1ff) == 0x1ff) && (-uVar9 - 1 < uVar12)) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = *(ulonglong *)(&DAT_153535ea0 + (longlong)iVar2 * 8);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar12;
      uVar1 = SUB168(auVar4 * auVar6,8) + uVar9;
      if (uVar1 < uVar9) {
        lStack_30 = lStack_30 + 1;
      }
      if (((((uint)lStack_30 & 0x1ff) == 0x1ff) && (uVar1 == 0xffffffffffffffff)) &&
         (-SUB168(auVar4 * auVar6,0) - 1U < uVar12)) {
        return 0;
      }
      auVar7._8_8_ = lStack_30;
      auVar7._0_8_ = uVar1;
    }
    uVar12 = auVar7._8_8_;
    lVar11 = (longlong)(((iVar2 * 0x3526a >> 0x10) - iVar8) + 0x43f) - (uVar12 >> 0x3f ^ 1);
    uVar9 = uVar12 >> (9U - (auVar7[0xf] >> 7) & 0x3f);
    if (((auVar7._0_8_ != 0) || ((uVar12 & 0x1ff) != 0)) || (((byte)uVar9 & 3) != 1)) {
      uVar12 = ((uint)uVar9 & 1) + uVar9 >> 1;
      lVar10 = lVar11 + 1;
      if ((uVar12 & 0xffe0000000000000) == 0) {
        lVar10 = lVar11;
      }
      if (lVar10 - 1U < 0x7fe) {
        uVar12 = lVar10 << 0x34 | uVar12 & 0xfffffffffffff;
        if (param_2 != '\0') {
          uVar12 = uVar12 | 0x8000000000000000;
        }
        *param_3 = uVar12;
        return 1;
      }
    }
    return 0;
  }
  if (param_2 == '\0') {
    *param_3 = __real_7fefffffffffffff;
    *param_4 = 0x22;
    return 1;
  }
  *param_3 = __real_ffefffffffffffff;
  *param_4 = 0x22;
  return 1;
}

// FUN_14f8f8bf0 @ 14f8f8bf0

void FUN_14f8f8bf0(ulonglong *param_1,int param_2,longlong param_3,float *param_4)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 99999) {
    *(undefined4 *)(param_3 + 8) = 0x22;
    if ((char)param_2 != '\0') {
      *param_4 = __real_ff7fffff;
      return;
    }
    *param_4 = __real_7f7fffff;
    return;
  }
  uVar2 = *param_1;
  if ((uVar2 != 0) && (iVar1 != -99999)) {
    param_2 = param_2 * -0x80000000;
    if (0x7fffff < (uint)uVar2) {
      param_2 = param_2 + (iVar1 + 0x96) * 0x800000;
      uVar2 = (ulonglong)((uint)uVar2 & 0x7fffff);
    }
    *param_4 = (float)(param_2 + (int)uVar2);
    return;
  }
  *(undefined4 *)(param_3 + 8) = 0x22;
  if ((char)param_2 != '\0') {
    *param_4 = (float)__real_8000000000000000;
    return;
  }
  *param_4 = 0.0;
  return;
}

// FUN_14f8f8c90 @ 14f8f8c90

void FUN_14f8f8c90(ulonglong *param_1,byte param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == 99999) {
    *(undefined4 *)(param_3 + 8) = 0x22;
    if (param_2 != 0) {
      *param_4 = __real_ffefffffffffffff;
      return;
    }
    *param_4 = __real_7fefffffffffffff;
    return;
  }
  uVar2 = *param_1;
  if ((uVar2 != 0) && (iVar1 != -99999)) {
    lVar3 = (ulonglong)param_2 << 0x3f;
    if (0xfffffffffffff < uVar2) {
      lVar3 = lVar3 + ((longlong)(iVar1 + 0x433) << 0x34);
      uVar2 = uVar2 & 0xfffffffffffff;
    }
    *param_4 = lVar3 + uVar2;
    return;
  }
  *(undefined4 *)(param_3 + 8) = 0x22;
  if (param_2 != 0) {
    *param_4 = __real_8000000000000000;
    return;
  }
  *param_4 = 0;
  return;
}

// FUN_14f8f8d40 @ 14f8f8d40

ulonglong *
FUN_14f8f8d40(ulonglong *param_1,char *param_2,char *param_3,float *param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  ulonglong *puVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  char cVar14;
  chars_format cVar15;
  undefined8 uVar16;
  int iVar17;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  ulonglong uStack_50;
  char local_48 [48];
  
  uVar7 = param_5;
  cVar14 = '\0';
  *param_1 = (ulonglong)param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((param_2 != param_3) && (*param_2 == '-')) {
    param_2 = param_2 + 1;
    cVar14 = '\x01';
  }
  cVar15 = (chars_format)param_3;
  if ((param_5 & 4) == 0) {
    if ((((longlong)param_3 - (longlong)param_2 < 2) || (*param_2 != '0')) ||
       ((param_2[1] + 0xa8U & 0xdf) != 0)) {
      puVar11 = (ulonglong *)
                absl::lts_20240722::strings_internal::ParseFloat<10>(local_48,param_2,cVar15);
      local_78 = *puVar11;
      uStack_70 = puVar11[1];
      local_68 = (undefined4)puVar11[2];
      uStack_64 = *(undefined4 *)((longlong)puVar11 + 0x14);
      uStack_60 = (undefined4)puVar11[3];
      uStack_5c = *(undefined4 *)((longlong)puVar11 + 0x1c);
      local_58 = puVar11[4];
      uStack_50 = puVar11[5];
      if (uStack_50 != 0) {
        *param_1 = uStack_50;
        cVar8 = FUN_14f8f9420(&local_78,cVar14,param_4);
        if (cVar8 != '\0') {
          return param_1;
        }
        lVar13 = CONCAT44(uStack_5c,uStack_60);
        if (lVar13 == 0) {
          cVar8 = FUN_14f8f8790(&local_78,cVar14,param_4,param_1 + 1);
          if (cVar8 != '\0') {
            return param_1;
          }
          lVar13 = CONCAT44(uStack_5c,uStack_60);
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_98._8_8_;
        local_98 = auVar3 << 0x40;
        if ((int)(uint)uStack_70 < -0x156) {
LAB_14f8f9015:
          local_98._0_12_ = ZEXT412(0xfffe7961) << 0x40;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = local_98._8_8_;
          local_88 = auVar6 << 0x40;
        }
        else {
          if ((int)(uint)uStack_70 < 0x135) {
            iVar17 = ((int)((uint)uStack_70 * 0x3526a) >> 0x10) + -0x3f;
            auVar1._8_8_ = 0;
            auVar1._0_8_ = *(ulonglong *)
                            (&DAT_153533f90 + (longlong)(int)((uint)uStack_70 + 0x156) * 8);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = local_78;
            local_98 = auVar1 * auVar2;
            if (lVar13 == 0) {
              if (0x1b < (uint)uStack_70) {
                iVar10 = 0x3f;
                goto LAB_14f8f8f5d;
              }
              local_88 = local_98;
              iVar10 = FUN_14f8f9c00(local_88);
              uVar16 = 1;
            }
            else {
              iVar10 = 0x3a;
LAB_14f8f8f5d:
              uVar16 = 0;
              iVar9 = FUN_14f8fa8f0(iVar10,local_98);
              iVar17 = iVar17 + iVar9;
            }
            local_88 = local_98;
            iVar9 = iVar10 + -0x18;
            if (iVar10 + -0x18 < -0x95 - iVar17) {
              iVar9 = -0x95 - iVar17;
            }
            iVar17 = iVar9 + iVar17;
            lVar13 = FUN_14f8fa610(local_88,iVar9,uVar16,&param_5);
            if (((char)param_5 == '\0') &&
               (cVar8 = FUN_14f8f9fb0(lVar13,iVar17,&local_78), cVar8 != '\0')) {
              lVar13 = lVar13 + 1;
            }
            auVar3 = local_98;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_98._8_8_;
            local_98 = auVar4 << 0x40;
            local_88._0_8_ = 0x800000;
            iVar10 = iVar17 + 1;
            if (lVar13 != 0x1000000) {
              local_88._0_8_ = lVar13;
              iVar10 = iVar17;
            }
            if (iVar10 < 0x69) {
              if (local_88._0_8_ != 0) {
                local_98._12_4_ = auVar3._12_4_;
                local_98._8_8_ = CONCAT44(local_98._12_4_,iVar10);
                local_98._0_8_ = local_88._0_8_;
                local_88._8_8_ = CONCAT44(local_98._12_4_,iVar10);
                goto LAB_14f8f8e2b;
              }
              goto LAB_14f8f9015;
            }
          }
          local_98._0_12_ = ZEXT412(99999) << 0x40;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = local_98._8_8_;
          local_88 = auVar5 << 0x40;
        }
        goto LAB_14f8f8e2b;
      }
    }
    else {
      puVar11 = (ulonglong *)
                absl::lts_20240722::strings_internal::ParseFloat<16>(local_48,param_2 + 2,cVar15);
      local_78 = *puVar11;
      uStack_70 = puVar11[1];
      uStack_64 = *(undefined4 *)((longlong)puVar11 + 0x14);
      uStack_60 = (undefined4)puVar11[3];
      uStack_5c = *(undefined4 *)((longlong)puVar11 + 0x1c);
      local_58 = puVar11[4];
      uStack_50 = puVar11[5];
      if ((puVar11[5] != 0) && ((int)puVar11[2] == 0)) {
        *param_1 = puVar11[5];
        local_68 = 0;
        goto LAB_14f8f8dff;
      }
      if (uVar7 != 1) {
        *param_1 = (ulonglong)(param_2 + 1);
        if (cVar14 != '\0') {
          *param_4 = (float)__real_8000000000000000;
          return param_1;
        }
        *param_4 = 0.0;
        return param_1;
      }
    }
LAB_14f8f9073:
    *(undefined4 *)(param_1 + 1) = 0x16;
  }
  else {
    puVar11 = (ulonglong *)
              absl::lts_20240722::strings_internal::ParseFloat<16>(local_48,param_2,cVar15);
    local_78 = *puVar11;
    uStack_70 = puVar11[1];
    local_68 = (undefined4)puVar11[2];
    uStack_64 = *(undefined4 *)((longlong)puVar11 + 0x14);
    uStack_60 = (undefined4)puVar11[3];
    uStack_5c = *(undefined4 *)((longlong)puVar11 + 0x1c);
    local_58 = puVar11[4];
    uStack_50 = puVar11[5];
    if (puVar11[5] == 0) goto LAB_14f8f9073;
    *param_1 = puVar11[5];
LAB_14f8f8dff:
    cVar8 = FUN_14f8f9420(&local_78,cVar14,param_4);
    if (cVar8 != '\0') {
      return param_1;
    }
    pauVar12 = (undefined1 (*) [16])FUN_14f8f8440(local_88,&local_78);
    local_88 = *pauVar12;
LAB_14f8f8e2b:
    FUN_14f8f8bf0(local_88,cVar14,param_1,param_4);
  }
  return param_1;
}

// FUN_14f8f90b0 @ 14f8f90b0

ulonglong *
FUN_14f8f90b0(ulonglong *param_1,char *param_2,char *param_3,undefined8 *param_4,uint param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  ulonglong *puVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  char cVar14;
  chars_format cVar15;
  undefined8 uVar16;
  int iVar17;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  ulonglong uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  ulonglong uStack_50;
  char local_48 [48];
  
  uVar7 = param_5;
  cVar14 = '\0';
  *param_1 = (ulonglong)param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((param_2 != param_3) && (*param_2 == '-')) {
    param_2 = param_2 + 1;
    cVar14 = '\x01';
  }
  cVar15 = (chars_format)param_3;
  if ((param_5 & 4) == 0) {
    if ((((longlong)param_3 - (longlong)param_2 < 2) || (*param_2 != '0')) ||
       ((param_2[1] + 0xa8U & 0xdf) != 0)) {
      puVar11 = (ulonglong *)
                absl::lts_20240722::strings_internal::ParseFloat<10>(local_48,param_2,cVar15);
      local_78 = *puVar11;
      uStack_70 = puVar11[1];
      local_68 = (undefined4)puVar11[2];
      uStack_64 = *(undefined4 *)((longlong)puVar11 + 0x14);
      uStack_60 = (undefined4)puVar11[3];
      uStack_5c = *(undefined4 *)((longlong)puVar11 + 0x1c);
      local_58 = puVar11[4];
      uStack_50 = puVar11[5];
      if (uStack_50 != 0) {
        *param_1 = uStack_50;
        cVar8 = FUN_14f8f9550(&local_78,cVar14,param_4);
        if (cVar8 != '\0') {
          return param_1;
        }
        lVar13 = CONCAT44(uStack_5c,uStack_60);
        if (lVar13 == 0) {
          cVar8 = FUN_14f8f89a0(&local_78,cVar14,param_4,param_1 + 1);
          if (cVar8 != '\0') {
            return param_1;
          }
          lVar13 = CONCAT44(uStack_5c,uStack_60);
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_98._8_8_;
        local_98 = auVar3 << 0x40;
        if ((int)(uint)uStack_70 < -0x156) {
LAB_14f8f938b:
          local_98._0_12_ = ZEXT412(0xfffe7961) << 0x40;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = local_98._8_8_;
          local_88 = auVar6 << 0x40;
        }
        else {
          if ((int)(uint)uStack_70 < 0x135) {
            iVar17 = ((int)((uint)uStack_70 * 0x3526a) >> 0x10) + -0x3f;
            auVar1._8_8_ = 0;
            auVar1._0_8_ = *(ulonglong *)
                            (&DAT_153533f90 + (longlong)(int)((uint)uStack_70 + 0x156) * 8);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = local_78;
            local_98 = auVar1 * auVar2;
            if (lVar13 == 0) {
              if (0x1b < (uint)uStack_70) {
                iVar10 = 0x3f;
                goto LAB_14f8f92c5;
              }
              local_88 = local_98;
              iVar10 = FUN_14f8f9c00(local_88);
              uVar16 = 1;
            }
            else {
              iVar10 = 0x3a;
LAB_14f8f92c5:
              uVar16 = 0;
              iVar9 = FUN_14f8fa8f0(iVar10,local_98);
              iVar17 = iVar17 + iVar9;
            }
            local_88 = local_98;
            iVar9 = iVar10 + -0x35;
            if (iVar10 + -0x35 < -0x432 - iVar17) {
              iVar9 = -0x432 - iVar17;
            }
            iVar17 = iVar9 + iVar17;
            lVar13 = FUN_14f8fa610(local_88,iVar9,uVar16,&param_5);
            if (((char)param_5 == '\0') &&
               (cVar8 = FUN_14f8f9fb0(lVar13,iVar17,&local_78), cVar8 != '\0')) {
              lVar13 = lVar13 + 1;
            }
            auVar3 = local_98;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_98._8_8_;
            local_98 = auVar4 << 0x40;
            local_88._0_8_ = 0x10000000000000;
            iVar10 = iVar17 + 1;
            if (lVar13 != 0x20000000000000) {
              local_88._0_8_ = lVar13;
              iVar10 = iVar17;
            }
            if (iVar10 < 0x3cc) {
              if (local_88._0_8_ != 0) {
                local_98._12_4_ = auVar3._12_4_;
                local_98._8_8_ = CONCAT44(local_98._12_4_,iVar10);
                local_98._0_8_ = local_88._0_8_;
                local_88._8_8_ = CONCAT44(local_98._12_4_,iVar10);
                goto LAB_14f8f919b;
              }
              goto LAB_14f8f938b;
            }
          }
          local_98._0_12_ = ZEXT412(99999) << 0x40;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = local_98._8_8_;
          local_88 = auVar5 << 0x40;
        }
        goto LAB_14f8f919b;
      }
    }
    else {
      puVar11 = (ulonglong *)
                absl::lts_20240722::strings_internal::ParseFloat<16>(local_48,param_2 + 2,cVar15);
      local_78 = *puVar11;
      uStack_70 = puVar11[1];
      uStack_64 = *(undefined4 *)((longlong)puVar11 + 0x14);
      uStack_60 = (undefined4)puVar11[3];
      uStack_5c = *(undefined4 *)((longlong)puVar11 + 0x1c);
      local_58 = puVar11[4];
      uStack_50 = puVar11[5];
      if ((puVar11[5] != 0) && ((int)puVar11[2] == 0)) {
        *param_1 = puVar11[5];
        local_68 = 0;
        goto LAB_14f8f916f;
      }
      if (uVar7 != 1) {
        *param_1 = (ulonglong)(param_2 + 1);
        if (cVar14 != '\0') {
          *param_4 = __real_8000000000000000;
          return param_1;
        }
        *param_4 = 0;
        return param_1;
      }
    }
LAB_14f8f93e9:
    *(undefined4 *)(param_1 + 1) = 0x16;
  }
  else {
    puVar11 = (ulonglong *)
              absl::lts_20240722::strings_internal::ParseFloat<16>(local_48,param_2,cVar15);
    local_78 = *puVar11;
    uStack_70 = puVar11[1];
    local_68 = (undefined4)puVar11[2];
    uStack_64 = *(undefined4 *)((longlong)puVar11 + 0x14);
    uStack_60 = (undefined4)puVar11[3];
    uStack_5c = *(undefined4 *)((longlong)puVar11 + 0x1c);
    local_58 = puVar11[4];
    uStack_50 = puVar11[5];
    if (puVar11[5] == 0) goto LAB_14f8f93e9;
    *param_1 = puVar11[5];
LAB_14f8f916f:
    cVar8 = FUN_14f8f9550(&local_78,cVar14,param_4);
    if (cVar8 != '\0') {
      return param_1;
    }
    pauVar12 = (undefined1 (*) [16])FUN_14f8f8530(local_88,&local_78);
    local_88 = *pauVar12;
LAB_14f8f919b:
    FUN_14f8f8c90(local_88,cVar14,param_1,param_4);
  }
  return param_1;
}

// FUN_14f8f9420 @ 14f8f9420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f8f9420(longlong *param_1,char param_2,float *param_3)

{
  void *_Src;
  undefined8 uVar1;
  ulonglong _Size;
  float extraout_XMM0_Da;
  float fVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((int)param_1[2] == 2) {
    _Src = (void *)param_1[3];
    if (_Src == (void *)0x0) {
      local_98[0] = 0;
    }
    else {
      _Size = param_1[4] - (longlong)_Src;
      if (0x7f < (longlong)_Size) {
        _Size = 0x7f;
      }
      if (0 < (longlong)_Size) {
        memmove(local_98,_Src,_Size);
      }
      if (0x7f < _Size) {
                    /* WARNING: Subroutine does not return */
        __report_rangecheckfailure();
      }
      local_98[_Size] = 0;
    }
    nanf(local_98);
    fVar2 = extraout_XMM0_Da;
    if (param_2 != '\0') {
      fVar2 = (float)((uint)extraout_XMM0_Da ^ __xmm_80000000800000008000000080000000);
    }
    uVar1 = 1;
    *param_3 = fVar2;
  }
  else if ((int)param_1[2] == 1) {
    if (param_2 == '\0') {
      uVar1 = 1;
      *param_3 = __real_7f800000;
    }
    else {
      *param_3 = __real_ff800000;
      uVar1 = 1;
    }
  }
  else if (*param_1 == 0) {
    if (param_2 == '\0') {
      uVar1 = 1;
      *param_3 = 0.0;
    }
    else {
      uVar1 = 1;
      *param_3 = (float)__real_8000000000000000;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// FUN_14f8f9550 @ 14f8f9550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f8f9550(longlong *param_1,char param_2,undefined8 *param_3)

{
  void *_Src;
  undefined8 uVar1;
  ulonglong _Size;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((int)param_1[2] == 2) {
    _Src = (void *)param_1[3];
    if (_Src == (void *)0x0) {
      local_98[0] = 0;
    }
    else {
      _Size = param_1[4] - (longlong)_Src;
      if (0x7f < (longlong)_Size) {
        _Size = 0x7f;
      }
      if (0 < (longlong)_Size) {
        memmove(local_98,_Src,_Size);
      }
      if (0x7f < _Size) {
                    /* WARNING: Subroutine does not return */
        __report_rangecheckfailure();
      }
      local_98[_Size] = 0;
    }
    nan(local_98);
    uVar2 = extraout_XMM0_Qa;
    if (param_2 != '\0') {
      uVar2 = CONCAT44((uint)((ulonglong)extraout_XMM0_Qa >> 0x20) ^
                       __xmm_80000000000000008000000000000000._4_4_,
                       (uint)extraout_XMM0_Qa ^ (uint)__xmm_80000000000000008000000000000000);
    }
    uVar1 = 1;
    *param_3 = uVar2;
  }
  else if ((int)param_1[2] == 1) {
    if (param_2 == '\0') {
      uVar1 = 1;
      *param_3 = __real_7ff0000000000000;
    }
    else {
      *param_3 = __real_fff0000000000000;
      uVar1 = 1;
    }
  }
  else if (*param_1 == 0) {
    if (param_2 == '\0') {
      uVar1 = 1;
      *param_3 = 0;
    }
    else {
      uVar1 = 1;
      *param_3 = __real_8000000000000000;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

// _Adl_verify_range<unsigned_int*___ptr64,unsigned_int*___ptr64> @ 14f8f96c0

/* void __cdecl std::_Adl_verify_range<unsigned int * __ptr64,unsigned int * __ptr64>(unsigned int *
   __ptr64 const & __ptr64,unsigned int * __ptr64 const & __ptr64) */

void __cdecl
std::_Adl_verify_range<unsigned_int*___ptr64,unsigned_int*___ptr64>(uint **param_1,uint **param_2)

{
  return;
}

// _Copy_backward_unchecked<unsigned_int*___ptr64,unsigned_int*___ptr64> @ 14f8f96d0

/* unsigned int * __ptr64 __cdecl std::_Copy_backward_unchecked<unsigned int * __ptr64,unsigned int
   * __ptr64>(unsigned int * __ptr64,unsigned int * __ptr64,unsigned int * __ptr64) */

uint * __cdecl
std::_Copy_backward_unchecked<unsigned_int*___ptr64,unsigned_int*___ptr64>
          (uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  
  puVar1 = memmove((void *)((longlong)param_3 - ((longlong)param_2 - (longlong)param_1)),param_1,
                   (longlong)param_2 - (longlong)param_1);
  return puVar1;
}

// _Copy_memmove_n<char_const*___ptr64,char*___ptr64> @ 14f8f96f0

/* char * __ptr64 __cdecl std::_Copy_memmove_n<char const * __ptr64,char * __ptr64>(char const *
   __ptr64,unsigned __int64,char * __ptr64) */

char * __cdecl
std::_Copy_memmove_n<char_const*___ptr64,char*___ptr64>
          (char *param_1,__uint64 param_2,char *param_3)

{
  memmove(param_3,param_1,param_2);
  return param_3 + param_2;
}

// _Get_unwrapped<unsigned_int*___ptr64&___ptr64> @ 14f8f9730

/* UNKNOWN __cdecl std::_Get_unwrapped<unsigned int * __ptr64 & __ptr64>(unsigned int * __ptr64 &
   __ptr64) */

uint * __cdecl std::_Get_unwrapped<unsigned_int*___ptr64&___ptr64>(uint **param_1)

{
  return *param_1;
}

// _Get_unwrapped_n<unsigned_int*___ptr64&___ptr64,int> @ 14f8f9740

/* UNKNOWN __cdecl std::_Get_unwrapped_n<unsigned int * __ptr64 & __ptr64,int>(unsigned int *
   __ptr64 & __ptr64,int) */

uint * __cdecl std::_Get_unwrapped_n<unsigned_int*___ptr64&___ptr64,int>(uint **param_1,int param_2)

{
  return *param_1;
}

// _Get_unwrapped_n<unsigned_int*___ptr64&___ptr64,__int64> @ 14f8f9750

/* UNKNOWN __cdecl std::_Get_unwrapped_n<unsigned int * __ptr64 & __ptr64,__int64>(unsigned int *
   __ptr64 & __ptr64,__int64) */

uint * __cdecl
std::_Get_unwrapped_n<unsigned_int*___ptr64&___ptr64,__int64>(uint **param_1,__int64 param_2)

{
  return *param_1;
}

// _Get_unwrapped_n<char_const*___ptr64&___ptr64,__int64> @ 14f8f9760

/* UNKNOWN __cdecl std::_Get_unwrapped_n<char const * __ptr64 & __ptr64,__int64>(char const *
   __ptr64 & __ptr64,__int64) */

char * __cdecl
std::_Get_unwrapped_n<char_const*___ptr64&___ptr64,__int64>(char **param_1,__int64 param_2)

{
  return *param_1;
}

// _Idl_distance<unsigned_int*___ptr64,unsigned_int*___ptr64> @ 14f8f9770

/* UNKNOWN __cdecl std::_Idl_distance<unsigned int * __ptr64,unsigned int * __ptr64>(unsigned int *
   __ptr64 const & __ptr64,unsigned int * __ptr64 const & __ptr64) */

longlong __cdecl
std::_Idl_distance<unsigned_int*___ptr64,unsigned_int*___ptr64>(uint **param_1,uint **param_2)

{
  return (longlong)*param_2 - (longlong)*param_1 >> 2;
}

// _Seek_wrapped<char*___ptr64,char*___ptr64&___ptr64> @ 14f8f9790

/* void __cdecl std::_Seek_wrapped<char * __ptr64,char * __ptr64 & __ptr64>(char * __ptr64 &
   __ptr64,char * __ptr64 & __ptr64) */

void __cdecl std::_Seek_wrapped<char*___ptr64,char*___ptr64&___ptr64>(char **param_1,char **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Seek_wrapped<unsigned_int*___ptr64,unsigned_int*___ptr64&___ptr64> @ 14f8f97a0

/* void __cdecl std::_Seek_wrapped<unsigned int * __ptr64,unsigned int * __ptr64 & __ptr64>(unsigned
   int * __ptr64 & __ptr64,unsigned int * __ptr64 & __ptr64) */

void __cdecl
std::_Seek_wrapped<unsigned_int*___ptr64,unsigned_int*___ptr64&___ptr64>
          (uint **param_1,uint **param_2)

{
  *param_1 = *param_2;
  return;
}

// _Seek_wrapped<unsigned_int*___ptr64,unsigned_int*___ptr64> @ 14f8f97b0

/* void __cdecl std::_Seek_wrapped<unsigned int * __ptr64,unsigned int * __ptr64>(unsigned int *
   __ptr64 & __ptr64,unsigned int * __ptr64 && __ptr64) */

void __cdecl
std::_Seek_wrapped<unsigned_int*___ptr64,unsigned_int*___ptr64>(uint **param_1,uint **param_2)

{
  *param_1 = *param_2;
  return;
}

// _To_address<unsigned_int*___ptr64> @ 14f8f97c0

/* UNKNOWN __cdecl std::_To_address<unsigned int * __ptr64>(unsigned int * __ptr64 const & __ptr64)
    */

uint * __cdecl std::_To_address<unsigned_int*___ptr64>(uint **param_1)

{
  return *param_1;
}

// bit_cast<float,unsigned_int,0> @ 14f8f97d0

/* float __cdecl std::bit_cast<float,unsigned int,0>(unsigned int const & __ptr64) */

float __cdecl std::bit_cast<float,unsigned_int,0>(uint *param_1)

{
  return (float)*param_1;
}

// bit_cast<double,unsigned___int64,0> @ 14f8f97f0

/* double __cdecl std::bit_cast<double,unsigned __int64,0>(unsigned __int64 const & __ptr64) */

double __cdecl std::bit_cast<double,unsigned___int64,0>(__uint64 *param_1)

{
  return (double)*param_1;
}

// copy_backward<unsigned_int*___ptr64,unsigned_int*___ptr64> @ 14f8f9810

/* unsigned int * __ptr64 __cdecl std::copy_backward<unsigned int * __ptr64,unsigned int *
   __ptr64>(unsigned int * __ptr64,unsigned int * __ptr64,unsigned int * __ptr64) */

uint * __cdecl
std::copy_backward<unsigned_int*___ptr64,unsigned_int*___ptr64>
          (uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  
  puVar1 = memmove((void *)((longlong)param_3 - ((longlong)param_2 - (longlong)param_1)),param_1,
                   (longlong)param_2 - (longlong)param_1);
  return puVar1;
}

// copy_n<char_const*___ptr64,__int64,char*___ptr64> @ 14f8f9830

/* char * __ptr64 __cdecl std::copy_n<char const * __ptr64,__int64,char * __ptr64>(char const *
   __ptr64,__int64,char * __ptr64) */

char * __cdecl
std::copy_n<char_const*___ptr64,__int64,char*___ptr64>(char *param_1,__int64 param_2,char *param_3)

{
  if (0 < param_2) {
    memmove(param_3,param_1,param_2);
    return param_3 + param_2;
  }
  return param_3;
}

// fill_n<unsigned_int*___ptr64,int,unsigned_int> @ 14f8f9880

/* unsigned int * __ptr64 __cdecl std::fill_n<unsigned int * __ptr64,int,unsigned int>(unsigned int
   * __ptr64,int,unsigned int const & __ptr64) */

uint * __cdecl
std::fill_n<unsigned_int*___ptr64,int,unsigned_int>(uint *param_1,int param_2,uint *param_3)

{
  if (0 < param_2) {
    if (*param_3 == 0) {
      memset(param_1,0,(longlong)param_2 * 4);
      return param_1 + param_2;
    }
    do {
      param_2 = param_2 + -1;
      *param_1 = *param_3;
      param_1 = param_1 + 1;
    } while (0 < param_2);
  }
  return param_1;
}

// forward<unsigned_int*___ptr64&___ptr64> @ 14f8f98f0

/* unsigned int * __ptr64 & __ptr64 __cdecl std::forward<unsigned int * __ptr64 & __ptr64>(unsigned
   int * __ptr64 & __ptr64) */

uint ** __cdecl std::forward<unsigned_int*___ptr64&___ptr64>(uint **param_1)

{
  return param_1;
}

// forward<unsigned_int*___ptr64> @ 14f8f9900

/* unsigned int * __ptr64 && __ptr64 __cdecl std::forward<unsigned int * __ptr64>(unsigned int *
   __ptr64 & __ptr64) */

uint ** __cdecl std::forward<unsigned_int*___ptr64>(uint **param_1)

{
  return param_1;
}

// min<int> @ 14f8f9910

/* int const & __ptr64 __cdecl std::min<int>(int const & __ptr64,int const & __ptr64) */

int * __cdecl std::min<int>(int *param_1,int *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}

// min<__int64> @ 14f8f9930

/* __int64 const & __ptr64 __cdecl std::min<__int64>(__int64 const & __ptr64,__int64 const &
   __ptr64) */

__int64 * __cdecl std::min<__int64>(__int64 *param_1,__int64 *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}

// to_address<unsigned_int> @ 14f8f9950

/* unsigned int * __ptr64 __cdecl std::to_address<unsigned int>(unsigned int * __ptr64 const) */

uint * __cdecl std::to_address<unsigned_int>(uint *param_1)

{
  return param_1;
}

// BigUnsigned<84> @ 14f8f9960

/* public: __cdecl absl::lts_20240722::strings_internal::BigUnsigned<84>::BigUnsigned<84>(void)
   __ptr64 */

BigUnsigned<84> * __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::BigUnsigned<84>(BigUnsigned<84> *this)

{
  *(undefined4 *)this = 0;
  memset(this + 4,0,0x150);
  return this;
}

// BigUnsigned<84> @ 14f8f9990

/* public: __cdecl absl::lts_20240722::strings_internal::BigUnsigned<84>::BigUnsigned<84>(unsigned
   __int64) __ptr64 */

BigUnsigned<84> * __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::BigUnsigned<84>
          (BigUnsigned<84> *this,__uint64 param_1)

{
  uint uVar1;
  
  if (param_1 >> 0x20 == 0) {
    uVar1 = (uint)(param_1 != 0);
  }
  else {
    uVar1 = 2;
  }
  *(__uint64 *)(this + 4) = param_1;
  *(uint *)this = uVar1;
  memset(this + 0xc,0,0x148);
  return this;
}

// operator<< @ 14f8f9a00

/* class absl::lts_20240722::uint128 __cdecl absl::lts_20240722::operator<<(class
   absl::lts_20240722::uint128,int) */

uint128 * __cdecl
absl::lts_20240722::operator<<(uint128 *__return_storage_ptr__,uint128 *param_1,int param_2)

{
  ulong64 uVar1;
  byte bVar2;
  ulong64 local_18;
  ulong64 uStack_10;
  
  bVar2 = (byte)param_2;
  if (0x3f < param_2) {
    uVar1 = param_1->lo_;
    __return_storage_ptr__->lo_ = 0;
    __return_storage_ptr__->hi_ = uVar1 << (bVar2 - 0x40 & 0x3f);
    return __return_storage_ptr__;
  }
  if (param_2 == 0) {
    local_18 = param_1->lo_;
    uStack_10 = param_1->hi_;
  }
  else {
    local_18 = param_1->lo_ << (bVar2 & 0x3f);
    uStack_10 = param_1->lo_ >> (0x40 - bVar2 & 0x3f) | param_1->hi_ << (bVar2 & 0x3f);
  }
  __return_storage_ptr__->lo_ = local_18;
  __return_storage_ptr__->hi_ = uStack_10;
  return __return_storage_ptr__;
}

// operator== @ 14f8f9aa0

/* bool __cdecl absl::lts_20240722::operator==(class absl::lts_20240722::uint128,class
   absl::lts_20240722::uint128) */

bool __cdecl absl::lts_20240722::operator==(uint128 *param_1,uint128 *param_2)

{
  if ((param_1->lo_ == param_2->lo_) && (param_1->hi_ == param_2->hi_)) {
    return true;
  }
  return false;
}

// operator++ @ 14f8f9ac0

/* public: class absl::lts_20240722::uint128 & __ptr64 __cdecl
   absl::lts_20240722::uint128::operator++(void) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::operator++(uint128 *this)

{
  ulonglong uVar1;
  
  uVar1 = this->lo_ + 1;
  if (uVar1 < this->lo_) {
    this->lo_ = uVar1;
    this->hi_ = this->hi_ + 1;
    return this;
  }
  this->lo_ = uVar1;
  this->hi_ = this->hi_;
  return this;
}

// operator& @ 14f8f9b20

/* class absl::lts_20240722::uint128 __cdecl absl::lts_20240722::operator&(class
   absl::lts_20240722::uint128,class absl::lts_20240722::uint128) */

uint128 * __cdecl
absl::lts_20240722::operator&(uint128 *__return_storage_ptr__,uint128 *param_1,uint128 *param_2)

{
  __return_storage_ptr__->lo_ = param_1->lo_ & param_2->lo_;
  __return_storage_ptr__->hi_ = param_1->hi_ & param_2->hi_;
  return __return_storage_ptr__;
}

// operator& @ 14f8f9b50

/* enum absl::lts_20240722::chars_format __cdecl absl::lts_20240722::operator&(enum
   absl::lts_20240722::chars_format,enum absl::lts_20240722::chars_format) */

chars_format __cdecl absl::lts_20240722::operator&(chars_format param_1,chars_format param_2)

{
  return param_1 & param_2;
}

// operator>>= @ 14f8f9b60

/* public: class absl::lts_20240722::uint128 & __ptr64 __cdecl
   absl::lts_20240722::uint128::operator>>=(int) __ptr64 */

uint128 * __thiscall absl::lts_20240722::uint128::operator>>=(uint128 *this,int param_1)

{
  byte bVar1;
  ulong64 local_18;
  ulonglong uStack_10;
  
  bVar1 = (byte)param_1;
  if (0x3f < param_1) {
    this->lo_ = this->hi_ >> (bVar1 - 0x40 & 0x3f);
    this->hi_ = 0;
    return this;
  }
  if (param_1 == 0) {
    local_18 = this->lo_;
    uStack_10 = this->hi_;
  }
  else {
    local_18 = this->hi_ << (0x40 - bVar1 & 0x3f) | this->lo_ >> (bVar1 & 0x3f);
    uStack_10 = this->hi_ >> (bVar1 & 0x3f);
  }
  this->lo_ = local_18;
  this->hi_ = uStack_10;
  return this;
}

// FUN_14f8f9c00 @ 14f8f9c00

int FUN_14f8f9c00(ulonglong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  if (param_1[1] != 0) {
    if (4 < __isa_available) {
      return 0x80 - (int)LZCOUNT(uVar3);
    }
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    if (uVar3 == 0) {
      return 0x40;
    }
    return 0x80 - (0x3f - (int)lVar1);
  }
  if (4 < __isa_available) {
    return 0x40 - (int)LZCOUNT(uVar2);
  }
  lVar1 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  if (uVar2 == 0) {
    return 0;
  }
  return 0x40 - (0x3f - (int)lVar1);
}

// GetWord @ 14f8f9c90

/* public: unsigned int __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<84>::GetWord(int)const __ptr64 */

uint __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::GetWord(BigUnsigned<84> *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    return *(uint *)(this + (longlong)param_1 * 4 + 4);
  }
  return 0;
}

// MultiplyBy @ 14f8f9d60

/* private: void __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<84>::MultiplyBy(int,unsigned int const *
   __ptr64) __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::MultiplyBy
          (BigUnsigned<84> *this,int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = param_1 + -2 + iVar1;
  if (0x53 < iVar2) {
    iVar2 = 0x53;
  }
  for (; -1 < iVar2; iVar2 = iVar2 + -1) {
    MultiplyStep(this,iVar1,param_2,param_1,iVar2);
  }
  return;
}

// MultiplyBy @ 14f8f9de0

/* public: void __cdecl absl::lts_20240722::strings_internal::BigUnsigned<84>::MultiplyBy(unsigned
   int) __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::MultiplyBy
          (BigUnsigned<84> *this,uint param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  BigUnsigned<84> *pBVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if ((*(int *)this != 0) && (param_1 != 1)) {
    if (param_1 == 0) {
      if (*(int *)this < 1) {
        *(undefined4 *)this = 0;
        return;
      }
      memset(this + 4,0,(longlong)*(int *)this << 2);
      *(undefined4 *)this = 0;
      return;
    }
    uVar3 = 0;
    uVar6 = uVar3;
    pBVar4 = this;
    if (0 < *(int *)this) {
      do {
        pBVar4 = pBVar4 + 4;
        uVar5 = (int)uVar6 + 1;
        uVar2 = uVar3 + (ulonglong)*(uint *)pBVar4 * (ulonglong)param_1;
        *(uint *)pBVar4 = (uint)uVar2;
        iVar1 = *(int *)this;
        uVar3 = uVar2 >> 0x20;
        uVar6 = (ulonglong)uVar5;
      } while ((int)uVar5 < iVar1);
      if ((uVar3 != 0) && (iVar1 < 0x54)) {
        *(int *)(this + (longlong)iVar1 * 4 + 4) = (int)(uVar2 >> 0x20);
        *(int *)this = *(int *)this + 1;
      }
    }
  }
  return;
}

// MultiplyBy @ 14f8f9e50

/* public: void __cdecl absl::lts_20240722::strings_internal::BigUnsigned<84>::MultiplyBy(unsigned
   __int64) __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::MultiplyBy
          (BigUnsigned<84> *this,__uint64 param_1)

{
  int iVar1;
  int iVar2;
  __uint64 local_res10;
  
  local_res10 = param_1;
  if ((int)(param_1 >> 0x20) != 0) {
    iVar1 = *(int *)this;
    iVar2 = iVar1;
    if (0x53 < iVar1) {
      iVar2 = 0x53;
    }
    for (; -1 < iVar2; iVar2 = iVar2 + -1) {
      MultiplyStep(this,iVar1,(uint *)&local_res10,2,iVar2);
    }
    return;
  }
  MultiplyBy(this,(uint)param_1);
  return;
}

// MultiplyByFiveToTheNth @ 14f8f9ee0

/* public: void __cdecl
   absl::lts_20240722::strings_internal::BigUnsigned<84>::MultiplyByFiveToTheNth(int) __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::MultiplyByFiveToTheNth
          (BigUnsigned<84> *this,int param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  BigUnsigned<84> *pBVar5;
  ulonglong uVar6;
  int iVar7;
  
  if (0xc < param_1) {
    uVar6 = (ulonglong)(uint)param_1 / 0xd;
    param_1 = param_1 + (int)uVar6 * -0xd;
    uVar4 = DAT_153536994;
    do {
      if ((*(int *)this != 0) && (uVar4 != 1)) {
        if (uVar4 == 0) {
          SetToZero(this);
          uVar4 = DAT_153536994;
        }
        else {
          uVar3 = 0;
          iVar7 = 0;
          pBVar5 = this;
          if (0 < *(int *)this) {
            do {
              pBVar5 = pBVar5 + 4;
              iVar7 = iVar7 + 1;
              uVar2 = uVar3 + (ulonglong)*(uint *)pBVar5 * (ulonglong)uVar4;
              *(uint *)pBVar5 = (uint)uVar2;
              iVar1 = *(int *)this;
              uVar3 = uVar2 >> 0x20;
            } while (iVar7 < iVar1);
            uVar4 = DAT_153536994;
            if ((uVar3 != 0) && (iVar1 < 0x54)) {
              *(int *)(this + (longlong)iVar1 * 4 + 4) = (int)(uVar2 >> 0x20);
              *(int *)this = *(int *)this + 1;
              uVar4 = DAT_153536994;
            }
          }
        }
      }
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (0 < param_1) {
    MultiplyBy(this,*(uint *)((longlong)&kFiveToNth + (longlong)param_1 * 4));
  }
  return;
}

// FUN_14f8f9fb0 @ 14f8f9fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_14f8f9fb0(longlong param_1,int param_2,ParsedFloat *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  BigUnsigned<84> *pBVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStackY_348 [32];
  ulonglong local_318 [2];
  uint local_308;
  uint local_304 [87];
  uint local_1a8;
  ulonglong local_1a4;
  undefined1 local_19c [340];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_348;
  param_2 = param_2 + -1;
  uVar1 = param_1 * 2 + 1;
  uVar16 = 0;
  uVar15 = 0;
  local_308 = 0;
  memset(local_304,0,0x150);
  uVar2 = absl::lts_20240722::strings_internal::BigUnsigned<84>::ReadFloatMantissa
                    ((BigUnsigned<84> *)&local_308,param_3,0x300);
  if ((int)uVar2 < 0) {
    absl::lts_20240722::strings_internal::BigUnsigned<84>::FiveToTheNth((int)&local_1a8);
    uVar17 = local_1a8;
    local_318[0] = uVar1;
    if ((int)(uVar1 >> 0x20) == 0) {
      if (((local_1a8 != 0) && ((int)uVar1 != 1)) && (0 < (int)local_1a8)) {
        uVar9 = uVar16;
        puVar10 = &local_1a4;
        uVar12 = uVar16;
        do {
          uVar17 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar17;
          uVar8 = uVar9 + (ulonglong)(uint)*puVar10 * (uVar1 & 0xffffffff);
          *(uint *)puVar10 = (uint)uVar8;
          uVar9 = uVar8 >> 0x20;
          puVar10 = (ulonglong *)((longlong)puVar10 + 4);
        } while ((int)uVar17 < (int)local_1a8);
        if ((uVar9 != 0) && ((int)local_1a8 < 0x54)) {
          *(int *)(local_19c + (longlong)(int)local_1a8 * 4 + -8) = (int)(uVar8 >> 0x20);
          local_1a8 = local_1a8 + 1;
        }
      }
    }
    else {
      uVar13 = local_1a8;
      if (0x53 < (int)local_1a8) {
        uVar13 = 0x53;
      }
      for (; -1 < (int)uVar13; uVar13 = uVar13 - 1) {
        absl::lts_20240722::strings_internal::BigUnsigned<84>::MultiplyStep
                  ((BigUnsigned<84> *)&local_1a8,uVar17,(uint *)local_318,2,uVar13);
      }
    }
    pBVar6 = (BigUnsigned<84> *)&local_1a8;
    iVar7 = param_2 - uVar2;
    if (param_2 < (int)uVar2) {
      pBVar6 = (BigUnsigned<84> *)&local_308;
      iVar7 = uVar2 - param_2;
    }
    absl::lts_20240722::strings_internal::BigUnsigned<84>::ShiftLeft(pBVar6,iVar7);
    uVar2 = local_308;
    if ((int)local_308 < (int)local_1a8) {
      uVar2 = local_1a8;
    }
    iVar7 = uVar2 - 1;
    if (-1 < iVar7) {
      lVar5 = (longlong)iVar7;
      do {
        if ((lVar5 < 0) || ((int)local_308 <= iVar7)) {
          uVar9 = uVar16;
          uVar2 = uVar15;
          if (-1 < lVar5) goto LAB_14f8fa3b9;
        }
        else {
          uVar2 = local_304[lVar5];
LAB_14f8fa3b9:
          uVar9 = uVar16;
          if ((iVar7 < (int)local_1a8) &&
             (uVar9 = (ulonglong)*(uint *)(local_19c + lVar5 * 4 + -8),
             uVar2 < *(uint *)(local_19c + lVar5 * 4 + -8))) goto LAB_14f8fa21f;
        }
        if ((uint)uVar9 < uVar2) goto LAB_14f8fa3e5;
        iVar7 = iVar7 + -1;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
  }
  else {
    uVar9 = (ulonglong)local_308;
    uVar17 = uVar2;
    uVar13 = local_308;
    if (0xc < (int)uVar2) {
      uVar12 = (ulonglong)uVar2 / 0xd;
      uVar17 = uVar2 + (int)uVar12 * -0xd;
      uVar11 = DAT_153536994;
      do {
        iVar7 = (int)uVar9;
        if ((iVar7 != 0) && (uVar11 != 1)) {
          if (uVar11 == 0) {
            uVar9 = uVar16;
            if (0 < iVar7) {
              memset(local_304,0,(longlong)iVar7 << 2);
            }
LAB_14f8fa0cb:
            local_308 = (uint)uVar9;
          }
          else if (0 < iVar7) {
            uVar8 = uVar16;
            puVar4 = local_304;
            uVar14 = uVar16;
            do {
              uVar13 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar13;
              uVar3 = uVar8 + (ulonglong)*puVar4 * (ulonglong)uVar11;
              *puVar4 = (uint)uVar3;
              uVar9 = (ulonglong)(int)local_308;
              uVar8 = uVar3 >> 0x20;
              puVar4 = puVar4 + 1;
            } while ((int)uVar13 < (int)local_308);
            if ((uVar8 != 0) && ((int)local_308 < 0x54)) {
              local_304[uVar9] = (uint)(uVar3 >> 0x20);
              uVar9 = (ulonglong)(local_308 + 1);
              uVar11 = DAT_153536994;
              goto LAB_14f8fa0cb;
            }
          }
        }
        uVar13 = (uint)uVar9;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
    if (0 < (int)uVar17) {
      uVar17 = *(uint *)((longlong)&absl::lts_20240722::strings_internal::kFiveToNth +
                        (longlong)(int)uVar17 * 4);
      if ((uVar13 != 0) && (uVar17 != 1)) {
        if (uVar17 == 0) {
          if (0 < (int)uVar13) {
            memset(local_304,0,(longlong)(int)uVar13 << 2);
          }
          local_308 = 0;
        }
        else if (0 < (int)uVar13) {
          puVar4 = local_304;
          uVar9 = uVar16;
          uVar12 = uVar16;
          do {
            uVar13 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar13;
            uVar8 = uVar9 + (ulonglong)*puVar4 * (ulonglong)uVar17;
            *puVar4 = (uint)uVar8;
            uVar9 = uVar8 >> 0x20;
            puVar4 = puVar4 + 1;
          } while ((int)uVar13 < (int)local_308);
          if ((uVar9 != 0) && ((int)local_308 < 0x54)) {
            local_304[(int)local_308] = (uint)(uVar8 >> 0x20);
            local_308 = local_308 + 1;
          }
        }
      }
    }
    local_1a8 = (uVar1 >> 0x20 != 0) + 1;
    local_1a4 = uVar1;
    memset(local_19c,0,0x148);
    if (param_2 < (int)uVar2) {
      param_2 = uVar2 - param_2;
      pBVar6 = (BigUnsigned<84> *)&local_308;
    }
    else {
      param_2 = param_2 - uVar2;
      pBVar6 = (BigUnsigned<84> *)&local_1a8;
    }
    absl::lts_20240722::strings_internal::BigUnsigned<84>::ShiftLeft(pBVar6,param_2);
    uVar2 = local_308;
    if ((int)local_308 < (int)local_1a8) {
      uVar2 = local_1a8;
    }
    iVar7 = uVar2 - 1;
    if (-1 < iVar7) {
      lVar5 = (longlong)iVar7;
      do {
        if ((lVar5 < 0) || ((int)local_308 <= iVar7)) {
          uVar9 = uVar16;
          uVar2 = uVar15;
          if (-1 < lVar5) goto LAB_14f8fa20e;
        }
        else {
          uVar2 = local_304[lVar5];
LAB_14f8fa20e:
          uVar9 = uVar16;
          if ((iVar7 < (int)local_1a8) &&
             (uVar9 = (ulonglong)*(uint *)(local_19c + lVar5 * 4 + -8),
             uVar2 < *(uint *)(local_19c + lVar5 * 4 + -8))) {
LAB_14f8fa21f:
            return uVar9 & 0xffffffffffffff00;
          }
        }
        if ((uint)uVar9 < uVar2) {
LAB_14f8fa3e5:
          return CONCAT71((int7)(uVar9 >> 8),1);
        }
        iVar7 = iVar7 + -1;
        lVar5 = lVar5 + -1;
      } while (-1 < lVar5);
    }
  }
  return (ulonglong)((byte)(uVar1 >> 1) & 1);
}

// SetToZero @ 14f8fa470

/* public: void __cdecl absl::lts_20240722::strings_internal::BigUnsigned<84>::SetToZero(void)
   __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::SetToZero(BigUnsigned<84> *this)

{
  if (0 < *(int *)this) {
    memset(this + 4,0,(longlong)*(int *)this << 2);
    *(undefined4 *)this = 0;
    return;
  }
  *(undefined4 *)this = 0;
  return;
}

// ShiftLeft @ 14f8fa4c0

/* public: void __cdecl absl::lts_20240722::strings_internal::BigUnsigned<84>::ShiftLeft(int)
   __ptr64 */

void __thiscall
absl::lts_20240722::strings_internal::BigUnsigned<84>::ShiftLeft(BigUnsigned<84> *this,int param_1)

{
  BigUnsigned<84> *pBVar1;
  uint uVar2;
  int iVar3;
  sbyte sVar4;
  uint uVar5;
  BigUnsigned<84> *pBVar7;
  longlong lVar8;
  ulonglong uVar6;
  
  if (0 < param_1) {
    iVar3 = *(int *)this;
    uVar5 = (uint)param_1 >> 5;
    uVar6 = (ulonglong)uVar5;
    if (0x53 < uVar5) {
      if (0 < iVar3) {
        memset(this + 4,0,(longlong)iVar3 << 2);
      }
      *(undefined4 *)this = 0;
      return;
    }
    iVar3 = iVar3 + uVar5;
    if (0x54 < iVar3) {
      iVar3 = 0x54;
    }
    *(int *)this = iVar3;
    if ((param_1 & 0x1fU) == 0) {
      memmove(this + (((longlong)iVar3 * 4 + 4) -
                     (longlong)(this + ((((longlong)iVar3 - uVar6) + 1) * 4 - (longlong)(this + 4)))
                     ),this + 4,
              (size_t)(this + ((((longlong)iVar3 - uVar6) + 1) * 4 - (longlong)(this + 4))));
    }
    else {
      if (0x53 < iVar3) {
        iVar3 = 0x53;
      }
      sVar4 = (sbyte)(param_1 & 0x1fU);
      if ((longlong)uVar6 < (longlong)iVar3) {
        lVar8 = (longlong)iVar3 - uVar6;
        pBVar7 = this + lVar8 * 4;
        do {
          pBVar1 = pBVar7 + 4;
          uVar2 = *(uint *)pBVar7;
          pBVar7 = pBVar7 + -4;
          *(uint *)(pBVar7 + uVar6 * 4 + 8) =
               *(uint *)pBVar1 << sVar4 | uVar2 >> (0x20U - sVar4 & 0x1f);
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      *(int *)(this + uVar6 * 4 + 4) = *(int *)(this + 4) << sVar4;
      iVar3 = *(int *)this;
      if ((iVar3 < 0x54) && (*(int *)(this + (longlong)iVar3 * 4 + 4) != 0)) {
        *(int *)this = iVar3 + 1;
      }
    }
    if (uVar5 != 0) {
      memset(this + 4,0,uVar6 * 4);
    }
  }
  return;
}

// FUN_14f8fa610 @ 14f8fa610

ulong64 FUN_14f8fa610(uint128 *param_1,int param_2,char param_3,char *param_4)

{
  byte bVar1;
  int iVar2;
  ulonglong *puVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  
  if (0 < param_2) {
    *param_4 = '\x01';
    if (param_2 < 0x80) {
      bVar1 = (byte)param_2;
      if (param_2 < 0x40) {
        local_58 = 1L << (bVar1 & 0x3f);
        uStack_50 = (ulonglong)(1 >> (-bVar1 & 0x3f));
        puVar3 = &local_48;
        local_48 = local_58;
        uStack_40 = uStack_50;
      }
      else {
        local_58 = 0;
        puVar3 = &local_58;
        uStack_50 = 1L << (bVar1 - 0x40 & 0x3f);
      }
      uStack_50 = puVar3[1];
      local_58 = *puVar3 - 1;
      if (*puVar3 == 0) {
        uStack_50 = uStack_50 - 1;
      }
      iVar2 = param_2 + -1;
      bVar1 = (byte)iVar2;
      if (iVar2 < 0x40) {
        if (iVar2 == 0) {
          local_48 = 1;
          uStack_40 = 0;
        }
        else {
          local_48 = 1L << (bVar1 & 0x3f);
          uStack_40 = 1L >> (0x40 - bVar1 & 0x3f);
        }
      }
      else {
        local_48 = 0;
        uStack_40 = 1L << (bVar1 - 0x40 & 0x3f);
      }
      uVar6 = param_1->lo_ & local_58;
      uVar5 = param_1->hi_ & uStack_50;
      absl::lts_20240722::uint128::operator>>=(param_1,param_2);
      bVar7 = uStack_40 < uVar5;
      if (uStack_40 == uVar5) {
        bVar7 = local_48 < uVar6;
      }
      if (bVar7) {
        uVar4 = param_1->lo_ + 1;
      }
      else {
        if ((uVar6 == local_48) && (uVar5 == uStack_40)) {
          uVar5 = param_1->lo_;
          if (((uVar5 & 1) != 0) || (param_3 == '\0')) {
            uVar6 = uVar5 + 1;
            if (uVar6 < uVar5) {
              param_1->lo_ = uVar6;
              param_1->hi_ = param_1->hi_ + 1;
            }
            else {
              param_1->lo_ = uVar6;
              param_1->hi_ = param_1->hi_;
            }
          }
        }
        else if (param_3 == '\0') {
          if (local_48 == 0) {
            uStack_40 = uStack_40 - 1;
          }
          if ((uVar6 == local_48 - 1) && (uVar5 == uStack_40)) {
            *param_4 = '\0';
          }
        }
        uVar4 = param_1->lo_;
      }
      return uVar4;
    }
    return 0;
  }
  param_2 = -param_2;
  *param_4 = param_3;
  if (param_2 < 0x40) {
    if (param_2 != 0) {
      return param_1->lo_ << ((byte)param_2 & 0x3f);
    }
    return param_1->lo_;
  }
  return 0;
}

// FUN_14f8fa8f0 @ 14f8fa8f0

int FUN_14f8fa8f0(int param_1,uint128 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  uVar2 = param_2->lo_;
  uVar3 = param_2->hi_;
  if (param_2->hi_ == 0) {
    if (__isa_available < 5) {
      lVar1 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      if (uVar2 != 0) {
        iVar4 = 0x40 - (0x3f - (int)lVar1);
      }
      else {
        iVar4 = 0;
      }
    }
    else {
      iVar4 = 0x40 - (int)LZCOUNT(uVar2);
    }
  }
  else {
    if (__isa_available < 5) {
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      if (uVar3 != 0) {
        iVar4 = 0x3f - (int)lVar1;
      }
      else {
        iVar4 = 0x40;
      }
    }
    else {
      iVar4 = (int)LZCOUNT(uVar3);
    }
    iVar4 = 0x80 - iVar4;
  }
  absl::lts_20240722::uint128::operator>>=(param_2,iVar4 - param_1);
  return iVar4 - param_1;
}

// from_chars @ 14f8fa990

/* struct absl::lts_20240722::from_chars_result __cdecl absl::lts_20240722::from_chars(char const *
   __ptr64,char const * __ptr64,float & __ptr64,enum absl::lts_20240722::chars_format) */

char * __cdecl
absl::lts_20240722::from_chars(char *param_1,char *param_2,float *param_3,chars_format param_4)

{
  FUN_14f8f8d40();
  return param_1;
}

// from_chars @ 14f8fa9c0

/* struct absl::lts_20240722::from_chars_result __cdecl absl::lts_20240722::from_chars(char const *
   __ptr64,char const * __ptr64,double & __ptr64,enum absl::lts_20240722::chars_format) */

char * __cdecl
absl::lts_20240722::from_chars(char *param_1,char *param_2,double *param_3,chars_format param_4)

{
  FUN_14f8f90b0();
  return param_1;
}

// max @ 14f8fa9f0

/* public: static float __cdecl std::numeric_limits<float>::max(void) */

float __cdecl std::numeric_limits<float>::max(void)

{
  return __real_7f7fffff;
}

// size @ 14f8faa00

/* public: int __cdecl absl::lts_20240722::strings_internal::BigUnsigned<84>::size(void)const
   __ptr64 */

int __thiscall absl::lts_20240722::strings_internal::BigUnsigned<84>::size(BigUnsigned<84> *this)

{
  return *(int *)this;
}

