// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 19

// log2tabled<30> @ 14f39cb90

int __cdecl oo2::log2tabled<30>(uint param_1)

{
  return c_rr_log2_table[param_1 >> 0x11];
}

// log2tabled_big<30> @ 14f39cbb0

int __cdecl oo2::log2tabled_big<30>(uint param_1)

{
  return c_rr_log2_table[param_1 >> 0x11];
}

// CodeLenOfArrayU8 @ 14f39cbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl oo2::CodeLenOfArrayU8(uchar *param_1,long64 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulong64 uVar3;
  longlong lVar4;
  undefined1 auStack_448 [32];
  uint local_418 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_448;
  CountHistoArrayU8(param_1,param_2,local_418,0x100,false);
  if ((int)param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = 0;
    lVar4 = 0;
    do {
      uVar1 = local_418[lVar4];
      if (uVar1 != 0) {
        uVar2 = uVar2 + (ulonglong)
                        (uint)c_rr_log2_table
                              [uVar1 * (int)(0x40000000 / (param_2 & 0xffffffffU)) >> 0x11] *
                        (ulonglong)uVar1;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < 0x100);
    uVar3 = uVar2 >> 0xd;
  }
  return uVar3;
}

// CodeLenOfHistogram256 @ 14f39cc90

uint __cdecl oo2::CodeLenOfHistogram256(uint *param_1,int param_2,uchar *param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = simd_dotproduct_s32_s8_256((int *)param_1,param_2 < 0x8000,(schar *)param_3,param_4);
  return uVar1;
}

// CountHistoArrayU8 @ 14f39ccc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2::CountHistoArrayU8(uchar *param_1,long64 param_2,uint *param_3,int param_4,bool param_5)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 auStack_1068 [32];
  uchar *local_1048;
  long64 local_1040;
  uint *local_1038;
  ulonglong local_1030;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14f39ccce;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1068;
  if (param_2 < 0xc0) {
    if (!param_5) {
      memset(param_3,0,(longlong)param_4 << 2);
    }
    puVar1 = (uint *)(param_1 + param_2);
    puVar3 = (uint *)(param_1 + (param_2 & 0xfffffffffffffffc));
    for (; param_1 < puVar3; param_1 = (uchar *)((longlong)param_1 + 4)) {
      uVar2 = *(uint *)param_1;
      param_3[uVar2 & 0xff] = param_3[uVar2 & 0xff] + 1;
      param_3[uVar2 >> 8 & 0xff] = param_3[uVar2 >> 8 & 0xff] + 1;
      param_3[uVar2 >> 0x10 & 0xff] = param_3[uVar2 >> 0x10 & 0xff] + 1;
      param_3[uVar2 >> 0x18] = param_3[uVar2 >> 0x18] + 1;
    }
    for (; param_1 < puVar1; param_1 = (uchar *)((longlong)param_1 + 1)) {
      param_3[(byte)*(uint *)param_1] = param_3[(byte)*(uint *)param_1] + 1;
    }
  }
  else {
    local_1030 = (ulonglong)param_5 << 0x10 | (longlong)param_4;
    local_1048 = param_1;
    local_1040 = param_2;
    local_1038 = param_3;
    oodle_histo_x64_generic(&local_1048);
  }
  return;
}

// CountHistoArrayU8_Simple @ 14f39cde0

void __cdecl
oo2::CountHistoArrayU8_Simple(uchar *param_1,long64 param_2,uint *param_3,int param_4,bool param_5)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  if (!param_5) {
    memset(param_3,0,(longlong)param_4 << 2);
  }
  puVar1 = (uint *)(param_1 + param_2);
  puVar3 = (uint *)(param_1 + (param_2 & 0xfffffffffffffffc));
  for (; param_1 < puVar3; param_1 = (uchar *)((longlong)param_1 + 4)) {
    uVar2 = *(uint *)param_1;
    param_3[uVar2 & 0xff] = param_3[uVar2 & 0xff] + 1;
    param_3[uVar2 >> 8 & 0xff] = param_3[uVar2 >> 8 & 0xff] + 1;
    param_3[uVar2 >> 0x10 & 0xff] = param_3[uVar2 >> 0x10 & 0xff] + 1;
    param_3[uVar2 >> 0x18] = param_3[uVar2 >> 0x18] + 1;
  }
  for (; param_1 < puVar1; param_1 = (uchar *)((longlong)param_1 + 1)) {
    param_3[(byte)*(uint *)param_1] = param_3[(byte)*(uint *)param_1] + 1;
  }
  return;
}

// RR_GET32_NATIVE @ 14f39cea0

uint __cdecl oo2::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// histo_add @ 14f39ceb0

void __cdecl oo2::histo_add(Histo256 *param_1,Histo256 *param_2,Histo256 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = 0x10;
  do {
    uVar1 = *(uint *)((longlong)param_2 + 4);
    uVar2 = *(uint *)((longlong)param_2 + 8);
    uVar3 = *(uint *)((longlong)param_2 + 0xc);
    uVar4 = *(uint *)((longlong)param_3 + 4);
    uVar5 = *(uint *)((longlong)param_3 + 8);
    uVar6 = *(uint *)((longlong)param_3 + 0xc);
    param_1->counts[0] = param_3->counts[0] + param_2->counts[0];
    *(uint *)((longlong)param_1 + 4) = uVar4 + uVar1;
    *(uint *)((longlong)param_1 + 8) = uVar5 + uVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar6 + uVar3;
    uVar1 = *(uint *)((longlong)param_2 + 0x14);
    uVar2 = *(uint *)((longlong)param_2 + 0x18);
    uVar3 = *(uint *)((longlong)param_2 + 0x1c);
    uVar4 = *(uint *)((longlong)param_3 + 0x14);
    uVar5 = *(uint *)((longlong)param_3 + 0x18);
    uVar6 = *(uint *)((longlong)param_3 + 0x1c);
    *(uint *)((longlong)param_1 + 0x10) =
         *(uint *)((longlong)param_3 + 0x10) + *(uint *)((longlong)param_2 + 0x10);
    *(uint *)((longlong)param_1 + 0x14) = uVar4 + uVar1;
    *(uint *)((longlong)param_1 + 0x18) = uVar5 + uVar2;
    *(uint *)((longlong)param_1 + 0x1c) = uVar6 + uVar3;
    uVar1 = *(uint *)((longlong)param_2 + 0x24);
    uVar2 = *(uint *)((longlong)param_2 + 0x28);
    uVar3 = *(uint *)((longlong)param_2 + 0x2c);
    uVar4 = *(uint *)((longlong)param_3 + 0x24);
    uVar5 = *(uint *)((longlong)param_3 + 0x28);
    uVar6 = *(uint *)((longlong)param_3 + 0x2c);
    *(uint *)((longlong)param_1 + 0x20) =
         *(uint *)((longlong)param_3 + 0x20) + *(uint *)((longlong)param_2 + 0x20);
    *(uint *)((longlong)param_1 + 0x24) = uVar4 + uVar1;
    *(uint *)((longlong)param_1 + 0x28) = uVar5 + uVar2;
    *(uint *)((longlong)param_1 + 0x2c) = uVar6 + uVar3;
    uVar1 = *(uint *)((longlong)param_3 + 0x34);
    uVar2 = *(uint *)((longlong)param_3 + 0x38);
    uVar3 = *(uint *)((longlong)param_3 + 0x3c);
    uVar4 = *(uint *)((longlong)param_2 + 0x34);
    uVar5 = *(uint *)((longlong)param_2 + 0x38);
    uVar6 = *(uint *)((longlong)param_2 + 0x3c);
    *(uint *)((longlong)param_1 + 0x30) =
         *(uint *)((longlong)param_3 + 0x30) + *(uint *)((longlong)param_2 + 0x30);
    *(uint *)((longlong)param_1 + 0x34) = uVar1 + uVar4;
    *(uint *)((longlong)param_1 + 0x38) = uVar2 + uVar5;
    *(uint *)((longlong)param_1 + 0x3c) = uVar3 + uVar6;
    lVar7 = lVar7 + -1;
    param_1 = (Histo256 *)((longlong)param_1 + 0x40);
    param_2 = (Histo256 *)((longlong)param_2 + 0x40);
    param_3 = (Histo256 *)((longlong)param_3 + 0x40);
  } while (lVar7 != 0);
  return;
}

// histo_add @ 14f39cec0

void __cdecl oo2::histo_add(uchar *param_1,long64 param_2,Histo256 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (0 < param_2) {
    do {
      pbVar1 = param_1 + lVar2;
      lVar2 = lVar2 + 1;
      param_3->counts[*pbVar1] = param_3->counts[*pbVar1] + 1;
    } while (lVar2 < param_2);
  }
  return;
}

// histo_count @ 14f39cf00

void __cdecl oo2::histo_count(Histo256 *param_1,uchar *param_2,long64 param_3)

{
  CountHistoArrayU8(param_2,param_3,param_1->counts,0x100,false);
  return;
}

// histo_remove @ 14f39cf40

void __cdecl oo2::histo_remove(uchar *param_1,long64 param_2,Histo256 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (0 < param_2) {
    do {
      pbVar1 = param_1 + lVar2;
      lVar2 = lVar2 + 1;
      param_3->counts[*pbVar1] = param_3->counts[*pbVar1] - 1;
    } while (lVar2 < param_2);
  }
  return;
}

// histo_slide @ 14f39cf70

void __cdecl oo2::histo_slide(uchar *param_1,long64 param_2,Histo256 *param_3,Histo256 *param_4)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (0 < param_2) {
    do {
      bVar1 = param_1[lVar2];
      lVar2 = lVar2 + 1;
      param_3->counts[bVar1] = param_3->counts[bVar1] - 1;
      param_4->counts[bVar1] = param_4->counts[bVar1] + 1;
    } while (lVar2 < param_2);
  }
  return;
}

// histo_sub @ 14f39cfa0

void __cdecl oo2::histo_sub(Histo256 *param_1,Histo256 *param_2,Histo256 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = 0x10;
  do {
    uVar1 = *(uint *)((longlong)param_3 + 4);
    uVar2 = *(uint *)((longlong)param_3 + 8);
    uVar3 = *(uint *)((longlong)param_3 + 0xc);
    uVar4 = *(uint *)((longlong)param_2 + 4);
    uVar5 = *(uint *)((longlong)param_2 + 8);
    uVar6 = *(uint *)((longlong)param_2 + 0xc);
    param_1->counts[0] = param_2->counts[0] - param_3->counts[0];
    *(uint *)((longlong)param_1 + 4) = uVar4 - uVar1;
    *(uint *)((longlong)param_1 + 8) = uVar5 - uVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar6 - uVar3;
    uVar1 = *(uint *)((longlong)param_3 + 0x14);
    uVar2 = *(uint *)((longlong)param_3 + 0x18);
    uVar3 = *(uint *)((longlong)param_3 + 0x1c);
    uVar4 = *(uint *)((longlong)param_2 + 0x14);
    uVar5 = *(uint *)((longlong)param_2 + 0x18);
    uVar6 = *(uint *)((longlong)param_2 + 0x1c);
    *(uint *)((longlong)param_1 + 0x10) =
         *(uint *)((longlong)param_2 + 0x10) - *(uint *)((longlong)param_3 + 0x10);
    *(uint *)((longlong)param_1 + 0x14) = uVar4 - uVar1;
    *(uint *)((longlong)param_1 + 0x18) = uVar5 - uVar2;
    *(uint *)((longlong)param_1 + 0x1c) = uVar6 - uVar3;
    uVar1 = *(uint *)((longlong)param_3 + 0x24);
    uVar2 = *(uint *)((longlong)param_3 + 0x28);
    uVar3 = *(uint *)((longlong)param_3 + 0x2c);
    uVar4 = *(uint *)((longlong)param_2 + 0x24);
    uVar5 = *(uint *)((longlong)param_2 + 0x28);
    uVar6 = *(uint *)((longlong)param_2 + 0x2c);
    *(uint *)((longlong)param_1 + 0x20) =
         *(uint *)((longlong)param_2 + 0x20) - *(uint *)((longlong)param_3 + 0x20);
    *(uint *)((longlong)param_1 + 0x24) = uVar4 - uVar1;
    *(uint *)((longlong)param_1 + 0x28) = uVar5 - uVar2;
    *(uint *)((longlong)param_1 + 0x2c) = uVar6 - uVar3;
    uVar1 = *(uint *)((longlong)param_2 + 0x34);
    uVar2 = *(uint *)((longlong)param_2 + 0x38);
    uVar3 = *(uint *)((longlong)param_2 + 0x3c);
    uVar4 = *(uint *)((longlong)param_3 + 0x34);
    uVar5 = *(uint *)((longlong)param_3 + 0x38);
    uVar6 = *(uint *)((longlong)param_3 + 0x3c);
    *(uint *)((longlong)param_1 + 0x30) =
         *(uint *)((longlong)param_2 + 0x30) - *(uint *)((longlong)param_3 + 0x30);
    *(uint *)((longlong)param_1 + 0x34) = uVar1 - uVar4;
    *(uint *)((longlong)param_1 + 0x38) = uVar2 - uVar5;
    *(uint *)((longlong)param_1 + 0x3c) = uVar3 - uVar6;
    lVar7 = lVar7 + -1;
    param_1 = (Histo256 *)((longlong)param_1 + 0x40);
    param_2 = (Histo256 *)((longlong)param_2 + 0x40);
    param_3 = (Histo256 *)((longlong)param_3 + 0x40);
  } while (lVar7 != 0);
  return;
}

// histo_sum @ 14f39cfb0

uint __cdecl oo2::histo_sum(Histo256 *param_1)

{
  uint uVar1;
  
  uVar1 = simd_horizontal_sum_s32((int *)param_1,0x100);
  return uVar1;
}

// rrCodeLenOfHistogramPow2External @ 14f39cfc0

ulong64 __cdecl
oo2::rrCodeLenOfHistogramPow2External(uint *param_1,int param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = (longlong)param_2;
  uVar4 = 0;
  if (0 < param_2) {
    lVar2 = (longlong)param_1 - (longlong)param_3;
    do {
      uVar1 = *(uint *)(lVar2 + (longlong)param_3);
      if (uVar1 != 0) {
        uVar4 = uVar4 + (ulonglong)
                        (uint)c_rr_log2_table[(*param_3 << (0x1eU - (char)param_4 & 0x1f)) >> 0x11]
                        * (ulonglong)uVar1;
      }
      param_3 = param_3 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return uVar4 >> 0xd;
}

// rrCodeLenOfHistogramT @ 14f39d040

ulong64 __cdecl oo2::rrCodeLenOfHistogramT(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar2 = 0;
    uVar3 = uVar2;
    if (0 < param_2) {
      do {
        uVar1 = param_1[uVar2];
        if (uVar1 != 0) {
          uVar3 = uVar3 + (ulonglong)(uint)c_rr_log2_table[uVar1 * (0x40000000 / param_3) >> 0x11] *
                          (ulonglong)uVar1;
        }
        uVar2 = uVar2 + 1;
      } while ((longlong)uVar2 < (longlong)param_2);
    }
    return uVar3 >> 0xd;
  }
  return 0;
}

// rrEntropyOfHistogram @ 14f39d0c0

float __cdecl oo2::rrEntropyOfHistogram(uint *param_1,int param_2)

{
  uint uVar1;
  ulong64 uVar2;
  
  uVar1 = simd_horizontal_sum_s32((int *)param_1,param_2);
  if (uVar1 == 0) {
    return 0.0;
  }
  uVar2 = rrCodeLenOfHistogramT(param_1,param_2,uVar1);
  return (float)uVar2 / (float)uVar1;
}

// rrEntropyOfHistogramT @ 14f39d150

float __cdecl oo2::rrEntropyOfHistogramT(uint *param_1,int param_2,uint param_3)

{
  ulong64 uVar1;
  
  if (param_3 == 0) {
    return 0.0;
  }
  uVar1 = rrCodeLenOfHistogramT(param_1,param_2,param_3);
  if (-1 < (longlong)uVar1) {
    return (float)(longlong)uVar1 / (float)param_3;
  }
  return (float)uVar1 / (float)param_3;
}

// rrSumOfHistogram @ 14f39d1c0

uint __cdecl oo2::rrSumOfHistogram(uint *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  
  lVar17 = (longlong)param_2;
  iVar29 = 0;
  iVar30 = 0;
  iVar31 = 0;
  iVar32 = 0;
  lVar19 = lVar17 * 4;
  puVar4 = param_1 + lVar17;
  if (0xf < lVar17) {
    do {
      uVar22 = *param_1;
      puVar5 = param_1 + 1;
      puVar6 = param_1 + 2;
      puVar7 = param_1 + 3;
      lVar19 = lVar19 + -0x40;
      puVar1 = param_1 + 4;
      puVar8 = param_1 + 5;
      puVar9 = param_1 + 6;
      puVar10 = param_1 + 7;
      puVar2 = param_1 + 8;
      puVar11 = param_1 + 9;
      puVar12 = param_1 + 10;
      puVar13 = param_1 + 0xb;
      puVar3 = param_1 + 0xc;
      puVar14 = param_1 + 0xd;
      puVar15 = param_1 + 0xe;
      puVar16 = param_1 + 0xf;
      param_1 = param_1 + 0x10;
      iVar29 = iVar29 + *puVar3 + *puVar2 + *puVar1 + uVar22;
      iVar30 = iVar30 + *puVar14 + *puVar11 + *puVar8 + *puVar5;
      iVar31 = iVar31 + *puVar15 + *puVar12 + *puVar9 + *puVar6;
      iVar32 = iVar32 + *puVar16 + *puVar13 + *puVar10 + *puVar7;
    } while (0x3f < lVar19);
  }
  for (uVar20 = (longlong)puVar4 - (longlong)param_1; 0xf < (longlong)(uVar20 & 0xfffffffffffffffc);
      uVar20 = uVar20 - 0x10) {
    uVar22 = *param_1;
    puVar1 = param_1 + 1;
    puVar2 = param_1 + 2;
    puVar3 = param_1 + 3;
    param_1 = param_1 + 4;
    iVar29 = iVar29 + uVar22;
    iVar30 = iVar30 + *puVar1;
    iVar31 = iVar31 + *puVar2;
    iVar32 = iVar32 + *puVar3;
  }
  uVar21 = 0;
  uVar18 = 0;
  uVar22 = 0;
  uVar24 = iVar32 + iVar30 + iVar31 + iVar29;
  uVar20 = (ulonglong)((longlong)puVar4 + (3 - (longlong)param_1)) >> 2;
  if (puVar4 < param_1) {
    uVar20 = uVar21;
  }
  if ((uVar20 != 0) && (7 < uVar20)) {
    iVar25 = 0;
    iVar26 = 0;
    iVar27 = 0;
    iVar28 = 0;
    iVar29 = 0;
    iVar30 = 0;
    iVar31 = 0;
    iVar32 = 0;
    uVar23 = uVar21;
    do {
      uVar23 = uVar23 + 8;
      iVar25 = iVar25 + *param_1;
      iVar26 = iVar26 + param_1[1];
      iVar27 = iVar27 + param_1[2];
      iVar28 = iVar28 + param_1[3];
      puVar1 = param_1 + 4;
      puVar2 = param_1 + 5;
      puVar3 = param_1 + 6;
      puVar5 = param_1 + 7;
      param_1 = param_1 + 8;
      iVar29 = iVar29 + *puVar1;
      iVar30 = iVar30 + *puVar2;
      iVar31 = iVar31 + *puVar3;
      iVar32 = iVar32 + *puVar5;
    } while (uVar23 < (uVar20 & 0xfffffffffffffff8));
    uVar24 = uVar24 + iVar29 + iVar25 + iVar31 + iVar27 + iVar30 + iVar26 + iVar32 + iVar28;
  }
  if (puVar4 <= param_1) {
    return uVar24;
  }
  if (7 < ((longlong)puVar4 + (3 - (longlong)param_1) & 0xfffffffffffffffcU)) {
    uVar20 = uVar21;
    do {
      uVar18 = (int)uVar21 + *param_1;
      uVar21 = (ulonglong)uVar18;
      uVar22 = (int)uVar20 + param_1[1];
      uVar20 = (ulonglong)uVar22;
      param_1 = param_1 + 2;
    } while (param_1 < puVar4 + -1);
    if (puVar4 <= param_1) goto LAB_14f3bac68;
  }
  uVar24 = uVar24 + *param_1;
LAB_14f3bac68:
  return uVar22 + uVar18 + uVar24;
}

