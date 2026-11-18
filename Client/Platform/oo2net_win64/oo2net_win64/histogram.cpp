// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2net_win64
// Functions: 20

// log2tabled<30> @ 14ff60a10

int __cdecl oo2net::log2tabled<30>(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  uVar3 = param_1 << (0x20U - (char)iVar1 & 0x1f);
  uVar2 = uVar3 >> 0x1a;
  return ((0x1e - iVar1) * 0x2000 -
         (int)((ulonglong)((uint)c_log2table_bk[uVar2 + 1] - (uint)c_log2table_bk[uVar2]) *
               (ulonglong)(uVar3 << 6) + 0x9fffffff >> 0x20)) - (uint)c_log2table_bk[uVar2];
}

// log2tabled_bk<30> @ 14ff60a70

int __cdecl oo2net::log2tabled_bk<30>(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  uVar3 = param_1 << (0x20U - (char)iVar1 & 0x1f);
  uVar2 = uVar3 >> 0x1a;
  return ((0x1e - iVar1) * 0x2000 -
         (int)((ulonglong)((uint)c_log2table_bk[uVar2 + 1] - (uint)c_log2table_bk[uVar2]) *
               (ulonglong)(uVar3 << 6) + 0x9fffffff >> 0x20)) - (uint)c_log2table_bk[uVar2];
}

// CodeLenOfArrayU8 @ 14ff60ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulong64 __cdecl oo2net::CodeLenOfArrayU8(uchar *param_1,long64 param_2)

{
  ulong64 uVar1;
  undefined1 auStack_448 [32];
  uint local_418 [256];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_448;
  CountHistoArrayU8(param_1,param_2,local_418,0x100,false);
  uVar1 = rrCodeLenOfHistogramT(local_418,0x100,(uint)param_2);
  return uVar1;
}

// CodeLenOfHistogram256 @ 14ff60b50

uint __cdecl oo2net::CodeLenOfHistogram256(uint *param_1,int param_2,uchar *param_3,int param_4)

{
  uint uVar1;
  
  uVar1 = simd_dotproduct_s32_s8_256((int *)param_1,param_2 < 0x8000,(schar *)param_3,param_4);
  return uVar1;
}

// CountHistoArrayU8 @ 14ff60b80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
oo2net::CountHistoArrayU8(uchar *param_1,long64 param_2,uint *param_3,int param_4,bool param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
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
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  uint *puVar21;
  undefined1 auStack_1048 [32];
  int local_1028 [256];
  int aiStack_c28 [256];
  int aiStack_828 [256];
  int aiStack_428 [256];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x14ff60b92;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1048;
  uVar20 = (ulonglong)param_4;
  if (param_2 < 0xc0) {
    if (!param_5) {
      memset(param_3,0,uVar20 * 4);
    }
    puVar1 = (uint *)(param_1 + param_2);
    puVar21 = (uint *)(param_1 + (param_2 & 0xfffffffffffffffc));
    for (; param_1 < puVar21; param_1 = (uchar *)((longlong)param_1 + 4)) {
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
    memset(local_1028,0,0x1000);
    puVar1 = (uint *)(param_1 + param_2);
    puVar21 = (uint *)(param_1 + (param_2 & 0xfffffffffffffffc));
    for (; param_1 < puVar21; param_1 = (uchar *)((longlong)param_1 + 4)) {
      uVar2 = *(uint *)param_1;
      local_1028[uVar2 & 0xff] = local_1028[uVar2 & 0xff] + 1;
      aiStack_c28[uVar2 >> 8 & 0xff] = aiStack_c28[uVar2 >> 8 & 0xff] + 1;
      aiStack_828[uVar2 >> 0x10 & 0xff] = aiStack_828[uVar2 >> 0x10 & 0xff] + 1;
      aiStack_428[uVar2 >> 0x18] = aiStack_428[uVar2 >> 0x18] + 1;
    }
    for (; param_1 < puVar1; param_1 = (uchar *)((longlong)param_1 + 1)) {
      local_1028[(byte)*(uint *)param_1] = local_1028[(byte)*(uint *)param_1] + 1;
    }
    lVar19 = 0;
    iVar17 = 0;
    uVar18 = uVar20 & 0xfffffffffffffffc;
    if (param_5) {
      if (0 < (longlong)uVar18) {
        iVar17 = (int)(uVar18 - 1 >> 2) * 4 + 4;
        do {
          puVar1 = param_3 + lVar19;
          uVar2 = puVar1[1];
          uVar3 = puVar1[2];
          uVar4 = puVar1[3];
          iVar5 = local_1028[lVar19 + 1];
          iVar6 = local_1028[lVar19 + 2];
          iVar7 = local_1028[lVar19 + 3];
          iVar8 = aiStack_c28[lVar19 + 1];
          iVar9 = aiStack_c28[lVar19 + 2];
          iVar10 = aiStack_c28[lVar19 + 3];
          iVar11 = aiStack_828[lVar19 + 1];
          iVar12 = aiStack_828[lVar19 + 2];
          iVar13 = aiStack_828[lVar19 + 3];
          iVar14 = aiStack_428[lVar19 + 1];
          iVar15 = aiStack_428[lVar19 + 2];
          iVar16 = aiStack_428[lVar19 + 3];
          puVar21 = param_3 + lVar19;
          *puVar21 = local_1028[lVar19] + *puVar1 + aiStack_c28[lVar19] + aiStack_828[lVar19] +
                     aiStack_428[lVar19];
          puVar21[1] = iVar5 + uVar2 + iVar8 + iVar11 + iVar14;
          puVar21[2] = iVar6 + uVar3 + iVar9 + iVar12 + iVar15;
          puVar21[3] = iVar7 + uVar4 + iVar10 + iVar13 + iVar16;
          lVar19 = lVar19 + 4;
        } while (lVar19 < (longlong)uVar18);
      }
      for (lVar19 = (longlong)iVar17; lVar19 < (longlong)uVar20; lVar19 = lVar19 + 1) {
        param_3[lVar19] =
             param_3[lVar19] +
             aiStack_c28[lVar19] + aiStack_428[lVar19] + local_1028[lVar19] + aiStack_828[lVar19];
      }
    }
    else {
      if (0 < (longlong)uVar18) {
        iVar17 = (int)(uVar18 - 1 >> 2) * 4 + 4;
        do {
          iVar5 = aiStack_c28[lVar19 + 1];
          iVar6 = aiStack_c28[lVar19 + 2];
          iVar7 = aiStack_c28[lVar19 + 3];
          iVar8 = local_1028[lVar19 + 1];
          iVar9 = local_1028[lVar19 + 2];
          iVar10 = local_1028[lVar19 + 3];
          iVar11 = aiStack_828[lVar19 + 1];
          iVar12 = aiStack_828[lVar19 + 2];
          iVar13 = aiStack_828[lVar19 + 3];
          iVar14 = aiStack_428[lVar19 + 1];
          iVar15 = aiStack_428[lVar19 + 2];
          iVar16 = aiStack_428[lVar19 + 3];
          puVar1 = param_3 + lVar19;
          *puVar1 = aiStack_c28[lVar19] + local_1028[lVar19] + aiStack_828[lVar19] +
                    aiStack_428[lVar19];
          puVar1[1] = iVar5 + iVar8 + iVar11 + iVar14;
          puVar1[2] = iVar6 + iVar9 + iVar12 + iVar15;
          puVar1[3] = iVar7 + iVar10 + iVar13 + iVar16;
          lVar19 = lVar19 + 4;
        } while (lVar19 < (longlong)uVar18);
      }
      for (lVar19 = (longlong)iVar17; lVar19 < (longlong)uVar20; lVar19 = lVar19 + 1) {
        param_3[lVar19] =
             aiStack_c28[lVar19] + aiStack_428[lVar19] + local_1028[lVar19] + aiStack_828[lVar19];
      }
    }
  }
  return;
}

// CountHistoArrayU8_Simple @ 14ff60e40

void __cdecl
oo2net::CountHistoArrayU8_Simple
          (uchar *param_1,long64 param_2,uint *param_3,int param_4,bool param_5)

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

// RR_GET32_NATIVE @ 14ff60f00

uint __cdecl oo2net::RR_GET32_NATIVE(void *param_1)

{
  return *(uint *)param_1;
}

// histo_add @ 14ff60f10

void __cdecl oo2net::histo_add(Histo256 *param_1,Histo256 *param_2,Histo256 *param_3)

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

// histo_add @ 14ff60f20

void __cdecl oo2net::histo_add(uchar *param_1,long64 param_2,Histo256 *param_3)

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

// histo_count @ 14ff60f60

void __cdecl oo2net::histo_count(Histo256 *param_1,uchar *param_2,long64 param_3)

{
  CountHistoArrayU8(param_2,param_3,param_1->counts,0x100,false);
  return;
}

// histo_remove @ 14ff60fa0

void __cdecl oo2net::histo_remove(uchar *param_1,long64 param_2,Histo256 *param_3)

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

// histo_slide @ 14ff60fd0

void __cdecl oo2net::histo_slide(uchar *param_1,long64 param_2,Histo256 *param_3,Histo256 *param_4)

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

// histo_sub @ 14ff61000

void __cdecl oo2net::histo_sub(Histo256 *param_1,Histo256 *param_2,Histo256 *param_3)

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

// histo_sum @ 14ff61010

uint __cdecl oo2net::histo_sum(Histo256 *param_1)

{
  uint uVar1;
  
  uVar1 = simd_horizontal_sum_s32((int *)param_1,0x100);
  return uVar1;
}

// rrClz32 @ 14ff61020

uint __cdecl oo2net::rrClz32(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return 0x1f - iVar1;
}

// rrCodeLenOfHistogramPow2External @ 14ff61040

ulong64 __cdecl
oo2net::rrCodeLenOfHistogramPow2External(uint *param_1,int param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar4 = (longlong)param_2;
  uVar5 = 0;
  if (0 < param_2) {
    lVar6 = (longlong)param_1 - (longlong)param_3;
    do {
      uVar1 = *(uint *)(lVar6 + (longlong)param_3);
      if (uVar1 != 0) {
        uVar7 = *param_3 << (0x1eU - (char)param_4 & 0x1f);
        iVar2 = 0x1f;
        if (uVar7 != 0) {
          for (; uVar7 >> iVar2 == 0; iVar2 = iVar2 + -1) {
          }
        }
        uVar7 = uVar7 << (0x20U - (char)iVar2 & 0x1f);
        uVar3 = uVar7 >> 0x1a;
        uVar5 = uVar5 + (ulonglong)
                        (((0x1e - iVar2) * 0x2000 -
                         (int)((ulonglong)
                               ((uint)c_log2table_bk[uVar3 + 1] - (uint)c_log2table_bk[uVar3]) *
                               (ulonglong)(uVar7 << 6) + 0x9fffffff >> 0x20)) -
                        (uint)c_log2table_bk[uVar3]) * (ulonglong)uVar1;
      }
      param_3 = param_3 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return uVar5 >> 0xd;
}

// rrCodeLenOfHistogramT @ 14ff61120

ulong64 __cdecl oo2net::rrCodeLenOfHistogramT(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if (param_3 != 0) {
    uVar4 = 0;
    uVar5 = uVar4;
    if (0 < param_2) {
      do {
        uVar1 = param_1[uVar4];
        if (uVar1 != 0) {
          uVar6 = uVar1 * (0x40000000 / param_3);
          iVar2 = 0x1f;
          if (uVar6 != 0) {
            for (; uVar6 >> iVar2 == 0; iVar2 = iVar2 + -1) {
            }
          }
          uVar6 = uVar6 << (0x20U - (char)iVar2 & 0x1f);
          uVar3 = uVar6 >> 0x1a;
          uVar5 = uVar5 + (ulonglong)
                          (((0x1e - iVar2) * 0x2000 -
                           (int)((ulonglong)
                                 ((uint)c_log2table_bk[uVar3 + 1] - (uint)c_log2table_bk[uVar3]) *
                                 (ulonglong)(uVar6 << 6) + 0x9fffffff >> 0x20)) -
                          (uint)c_log2table_bk[uVar3]) * (ulonglong)uVar1;
        }
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)param_2);
    }
    return uVar5 >> 0xd;
  }
  return 0;
}

// rrEntropyOfHistogram @ 14ff61220

float __cdecl oo2net::rrEntropyOfHistogram(uint *param_1,int param_2)

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

// rrEntropyOfHistogramT @ 14ff612b0

float __cdecl oo2net::rrEntropyOfHistogramT(uint *param_1,int param_2,uint param_3)

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

// rrSumOfHistogram @ 14ff61320

uint __cdecl oo2net::rrSumOfHistogram(uint *param_1,int param_2)

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
    if (puVar4 <= param_1) goto LAB_14ff69fe8;
  }
  uVar24 = uVar24 + *param_1;
LAB_14ff69fe8:
  return uVar22 + uVar18 + uVar24;
}

