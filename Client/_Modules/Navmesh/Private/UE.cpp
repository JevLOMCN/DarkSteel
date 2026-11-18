// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Navmesh
// Functions: 13

// drawTrajectory @ 14465d560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Detour::Private::drawTrajectory
          (duDebugDraw *param_1,double *param_2,double *param_3,Trajectory2D *param_4,uint param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  float fVar7;
  undefined4 extraout_EAX;
  uint uVar8;
  longlong lVar9;
  double *pdVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  float *pfVar16;
  double dVar17;
  float fVar18;
  undefined1 auVar19 [16];
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  undefined1 auStack_1d8 [32];
  float local_1b8;
  double local_1b0;
  double local_1a8;
  double adStack_1a0 [27];
  ulonglong local_c8;
  
  fVar7 = __real_3f800000;
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  bVar6 = param_4->nspine;
  uVar11 = (ulonglong)bVar6;
  auVar19._0_4_ = param_4->spine[0];
  lVar14 = 0;
  fVar18 = param_4->spine[1];
  fVar2 = param_4->spine[(ulonglong)((uint)bVar6 + (uint)bVar6) - 1];
  local_1b8 = param_4->spine[(ulonglong)((uint)bVar6 + (uint)bVar6) - 2] - auVar19._0_4_;
  if (uVar11 < 4) {
    if (bVar6 == 0) goto LAB_14465d8fc;
    uVar28 = SUB84(*param_2,0);
    uVar29 = (undefined4)((ulonglong)*param_2 >> 0x20);
    uVar34 = SUB84(*param_3,0);
    uVar35 = (undefined4)((ulonglong)*param_3 >> 0x20);
    uVar30 = SUB84(param_2[1],0);
    uVar31 = (undefined4)((ulonglong)param_2[1] >> 0x20);
    uVar36 = SUB84(param_3[1],0);
    uVar37 = (undefined4)((ulonglong)param_3[1] >> 0x20);
    uVar32 = SUB84(param_2[2],0);
    uVar33 = (undefined4)((ulonglong)param_2[2] >> 0x20);
    uVar38 = SUB84(param_3[2],0);
    uVar39 = (undefined4)((ulonglong)param_3[2] >> 0x20);
  }
  else {
    dVar17 = param_2[1];
    uVar30 = SUB84(dVar17,0);
    uVar31 = (undefined4)((ulonglong)dVar17 >> 0x20);
    fVar27 = fVar2 - fVar18;
    dVar24 = *param_2;
    uVar28 = SUB84(dVar24,0);
    uVar29 = (undefined4)((ulonglong)dVar24 >> 0x20);
    local_1b0 = param_3[1] - dVar17;
    dVar4 = param_2[2];
    uVar32 = SUB84(dVar4,0);
    uVar33 = (undefined4)((ulonglong)dVar4 >> 0x20);
    pfVar16 = param_4->spine + 5;
    pdVar10 = adStack_1a0 + 4;
    dVar5 = param_3[2];
    uVar38 = SUB84(dVar5,0);
    uVar39 = (undefined4)((ulonglong)dVar5 >> 0x20);
    fVar40 = __real_3f800000 / local_1b8;
    lVar9 = (uVar11 - 4 >> 2) + 1;
    lVar14 = lVar9 * 4;
    dVar20 = *param_3 - dVar24;
    dVar5 = dVar5 - dVar4;
    do {
      fVar21 = (((Trajectory2D *)(pfVar16 + -5))->spine[0] - auVar19._0_4_) * fVar40;
      dVar25 = (double)fVar21;
      fVar22 = (pfVar16[-3] - auVar19._0_4_) * fVar40;
      pdVar10[-1] = dVar25 * dVar20 + dVar24;
      fVar3 = pfVar16[-4];
      pdVar10[1] = dVar25 * dVar5 + dVar4;
      dVar26 = (double)fVar22;
      fVar23 = pfVar16[-1];
      *pdVar10 = (double)(fVar3 - (fVar27 * fVar21 + fVar18)) + dVar25 * local_1b0 + dVar17;
      fVar21 = (fVar23 - auVar19._0_4_) * fVar40;
      pdVar10[2] = dVar26 * dVar20 + dVar24;
      fVar3 = pfVar16[-2];
      pdVar10[4] = dVar26 * dVar5 + dVar4;
      dVar25 = (double)fVar21;
      fVar23 = pfVar16[1];
      pdVar10[3] = (double)(fVar3 - (fVar27 * fVar22 + fVar18)) + dVar26 * local_1b0 + dVar17;
      fVar23 = (fVar23 - auVar19._0_4_) * fVar40;
      pdVar10[5] = dVar25 * dVar20 + dVar24;
      fVar3 = *pfVar16;
      pdVar10[7] = dVar25 * dVar5 + dVar4;
      dVar26 = (double)fVar23;
      pdVar10[6] = (double)(fVar3 - (fVar27 * fVar21 + fVar18)) + dVar25 * local_1b0 + dVar17;
      pdVar10[8] = dVar26 * dVar20 + dVar24;
      pdVar10[10] = dVar26 * dVar5 + dVar4;
      pfVar1 = pfVar16 + 2;
      pfVar16 = pfVar16 + 8;
      pdVar10[9] = (double)(*pfVar1 - (fVar27 * fVar23 + fVar18)) + dVar26 * local_1b0 + dVar17;
      pdVar10 = pdVar10 + 0xc;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    uVar34 = SUB84(*param_3,0);
    uVar35 = (undefined4)((ulonglong)*param_3 >> 0x20);
    uVar36 = SUB84(param_3[1],0);
    uVar37 = (undefined4)((ulonglong)param_3[1] >> 0x20);
    if ((longlong)uVar11 <= lVar14) goto LAB_14465d8fc;
  }
  pdVar10 = adStack_1a0 + lVar14 * 3 + 4;
  do {
    fVar40 = (param_4->spine[lVar14 * 2] - auVar19._0_4_) * (__real_3f800000 / local_1b8);
    dVar17 = (double)fVar40;
    pdVar10[-1] = dVar17 * ((double)CONCAT44(uVar35,uVar34) - (double)CONCAT44(uVar29,uVar28)) +
                  (double)CONCAT44(uVar29,uVar28);
    fVar27 = param_4->spine[lVar14 * 2 + 1];
    lVar14 = lVar14 + 1;
    pdVar10[1] = dVar17 * ((double)CONCAT44(uVar39,uVar38) - (double)CONCAT44(uVar33,uVar32)) +
                 (double)CONCAT44(uVar33,uVar32);
    *pdVar10 = (double)(fVar27 - ((fVar2 - fVar18) * fVar40 + fVar18)) +
               dVar17 * ((double)CONCAT44(uVar37,uVar36) - (double)CONCAT44(uVar31,uVar30)) +
               (double)CONCAT44(uVar31,uVar30);
    pdVar10 = pdVar10 + 3;
  } while (lVar14 < (longlong)uVar11);
LAB_14465d8fc:
  dVar17 = getPathLen(adStack_1a0 + 3,(uint)bVar6);
  auVar19._0_4_ = (float)dVar17 * ___real_40555555;
  iVar12 = (int)auVar19._0_4_;
  if ((iVar12 != -0x80000000) && ((float)iVar12 != auVar19._0_4_)) {
    auVar19._4_4_ = auVar19._0_4_;
    auVar19._8_8_ = 0;
    uVar8 = movmskps(extraout_EAX,auVar19);
    auVar19._0_4_ = (float)(int)(iVar12 + (uVar8 & 1 ^ 1));
  }
  iVar15 = 0;
  iVar12 = (int)auVar19._0_4_ * 2;
  if (0 < iVar12) {
    local_1b8 = fVar7 / (float)iVar12;
    do {
      dVar24 = (double)((float)iVar15 * local_1b8 * (float)dVar17);
      if (bVar6 != 0) {
        if (bVar6 == 1) {
          local_1a8 = adStack_1a0[3];
          adStack_1a0[0] = adStack_1a0[4];
          adStack_1a0[1] = adStack_1a0[5];
        }
        else if (0.0 < dVar24) {
          iVar13 = 0;
          auVar19._0_4_ = 0.0;
          if (0 < (int)(bVar6 - 1)) {
            pdVar10 = adStack_1a0 + 4;
            uVar28 = SUB84(adStack_1a0[4],0);
            uVar29 = (int)((ulonglong)adStack_1a0[4] >> 0x20);
            do {
              dVar4 = pdVar10[3];
              dVar26 = dVar4 - (double)CONCAT44(uVar29,uVar28);
              dVar25 = pdVar10[2] - pdVar10[-1];
              dVar5 = pdVar10[4] - pdVar10[1];
              dVar20 = (double)auVar19._0_4_;
              fVar18 = SQRT((float)(dVar26 * dVar26 + dVar25 * dVar25 + dVar5 * dVar5));
              auVar19._0_4_ = fVar18 + auVar19._0_4_;
              if ((dVar20 <= dVar24) && (dVar24 <= (double)auVar19._0_4_)) {
                dVar24 = (dVar24 - dVar20) / (double)fVar18;
                local_1a8 = dVar24 * dVar25 + pdVar10[-1];
                adStack_1a0[0] = dVar24 * dVar26 + (double)CONCAT44(uVar29,uVar28);
                adStack_1a0[1] = dVar24 * dVar5 + pdVar10[1];
                goto LAB_14465db00;
              }
              iVar13 = iVar13 + 1;
              pdVar10 = pdVar10 + 3;
              uVar28 = SUB84(dVar4,0);
              uVar29 = (int)((ulonglong)dVar4 >> 0x20);
            } while (iVar13 < (int)(bVar6 - 1));
          }
          uVar11 = (ulonglong)((uint)bVar6 + (uint)bVar6 * 2);
          local_1a8 = adStack_1a0[uVar11];
          adStack_1a0[0] = adStack_1a0[uVar11 + 1];
          adStack_1a0[1] = adStack_1a0[uVar11 + 2];
        }
        else {
          local_1a8 = adStack_1a0[3];
          adStack_1a0[0] = adStack_1a0[4];
          adStack_1a0[1] = adStack_1a0[5];
        }
      }
LAB_14465db00:
      (**(code **)((longlong)*param_1 + 0x58))(param_1,&local_1a8,param_5);
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar12);
  }
  return;
}

// drawTrajectorySlice @ 14465db90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Detour::Private::drawTrajectorySlice
          (duDebugDraw *param_1,double *param_2,double *param_3,Trajectory2D *param_4,
          double *param_5,uint param_6)

{
  int iVar1;
  ForElementType<dtNavLinkBuilder::TrajectorySample> FVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ForElementType<dtNavLinkBuilder::TrajectorySample> FVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  uint local_158;
  uint local_154;
  int local_150;
  longlong local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar17 = param_6 & 0xffffff | 0x32000000;
  dVar4 = (double)(float)((uint)param_4->radiusOverflow ^ __xmm_80000000800000008000000080000000);
  dVar19 = (double)param_4->radiusOverflow;
  dVar5 = dVar4 * *param_5 + *param_2;
  dVar6 = dVar4 * param_5[1] + param_2[1];
  dVar4 = dVar4 * param_5[2] + param_2[2];
  dVar7 = *param_5 * dVar19 + *param_3;
  dVar8 = param_5[1] * dVar19 + param_3[1];
  dVar19 = param_5[2] * dVar19 + param_3[2];
  local_154 = uVar17;
  uVar10 = duLerpCol(param_6,duColor::black,0x60);
  fVar18 = __real_3f800000;
  local_158 = uVar10 & 0xffffff | 0x32000000;
  (**(code **)((longlong)*param_1 + 0x18))(param_1,3,__real_3f800000);
  uVar10 = local_158;
  local_150 = (param_4->samples).ArrayNum;
  lVar13 = (longlong)local_150;
  uVar16 = 0;
  fVar21 = fVar18;
  local_148 = lVar13;
  if (0 < local_150) {
    iVar11 = local_150 + -1;
    lVar15 = 0;
    do {
      iVar1 = (param_4->samples).ArrayNum;
      uVar12 = 0;
      if ((int)uVar16 < iVar1) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_168 = (longlong)(int)uVar16;
        local_160 = (longlong)iVar1;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FVar2 = (param_4->samples).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<dtNavLinkBuilder::TrajectorySample>)&param_4->samples;
      if (FVar2 != (ForElementType<dtNavLinkBuilder::TrajectorySample>)0x0) {
        FVar14 = FVar2;
      }
      dVar20 = (double)((float)(int)uVar16 * (fVar18 / (float)iVar11));
      local_140 = (dVar7 - dVar5) * dVar20 + dVar5;
      local_130 = (dVar19 - dVar4) * dVar20 + dVar4;
      dStack_120 = (dVar8 - dVar6) * dVar20 + dVar6;
      dStack_138 = (double)*(float *)((longlong)FVar14 + lVar15) + dStack_120;
      dStack_120 = (double)*(float *)((uchar *)((longlong)FVar14 + 4) + lVar15) + dStack_120;
      local_128 = local_140;
      local_118 = local_130;
      if (0 < (int)uVar16) {
        (**(code **)((longlong)*param_1 + 0x58))(param_1,&local_140,uVar10);
        (**(code **)((longlong)*param_1 + 0x58))(param_1,&local_128,uVar17);
        (**(code **)((longlong)*param_1 + 0x58))(param_1,&local_f8,uVar17);
        (**(code **)((longlong)*param_1 + 0x58))(param_1,&local_110,uVar10);
        (**(code **)((longlong)*param_1 + 0x58))(param_1,&local_110,uVar10);
        (**(code **)((longlong)*param_1 + 0x58))(param_1,&local_f8,uVar17);
        (**(code **)((longlong)*param_1 + 0x58))(param_1,&local_128,uVar17);
        (**(code **)((longlong)*param_1 + 0x58))(param_1,&local_140,uVar10);
      }
      local_110 = local_140;
      dStack_108 = dStack_138;
      uVar16 = uVar16 + 1;
      lVar15 = lVar15 + 0xc;
      local_f8 = local_128;
      dStack_f0 = dStack_120;
      lVar13 = lVar13 + -1;
      fVar21 = __real_3f800000;
      local_100 = local_130;
      local_e8 = local_118;
    } while (lVar13 != 0);
  }
  lVar13 = local_148;
  (**(code **)((longlong)*param_1 + 0x70))(param_1);
  uVar17 = local_158 >> 1 & 0x7f7f7f | local_158 & 0xff000000;
  uVar16 = (param_6 & 0xfefefe) >> 1 | local_154 & 0xff000000;
  (**(code **)((longlong)*param_1 + 0x18))(param_1,1,__real_40000000);
  uVar10 = 0;
  if (0 < lVar13) {
    local_158 = local_150 - 1;
    lVar15 = 0;
    fVar18 = (float)(int)local_158;
    do {
      iVar11 = (param_4->samples).ArrayNum;
      uVar12 = 0;
      if ((int)uVar10 < iVar11) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_168 = (longlong)(int)uVar10;
        local_160 = (longlong)iVar11;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FVar2 = (param_4->samples).AllocatorInstance.SecondaryData;
      FVar14 = (ForElementType<dtNavLinkBuilder::TrajectorySample>)&param_4->samples;
      if (FVar2 != (ForElementType<dtNavLinkBuilder::TrajectorySample>)0x0) {
        FVar14 = FVar2;
      }
      dVar20 = (double)((float)(int)uVar10 * (fVar21 / fVar18));
      local_140 = dVar20 * (dVar7 - dVar5) + dVar5;
      dStack_120 = dVar20 * (dVar8 - dVar6) + dVar6;
      local_130 = dVar20 * (dVar19 - dVar4) + dVar4;
      dStack_138 = (double)*(float *)((longlong)FVar14 + lVar15) + dStack_120;
      dStack_120 = (double)*(float *)((uchar *)((longlong)FVar14 + 4) + lVar15) + dStack_120;
      local_128 = local_140;
      local_118 = local_130;
      if ((uVar10 == 0) || (uVar10 == local_158)) {
        (**(code **)((longlong)*param_1 + 0x58))(param_1,&local_140,uVar17);
        (**(code **)((longlong)*param_1 + 0x58))(param_1,&local_128,uVar16);
      }
      if (0 < (int)uVar10) {
        (**(code **)((longlong)*param_1 + 0x58))(param_1,&local_140,uVar17);
        (**(code **)((longlong)*param_1 + 0x58))(param_1,&local_110,uVar17);
        (**(code **)((longlong)*param_1 + 0x58))(param_1,&local_128,uVar16);
        (**(code **)((longlong)*param_1 + 0x58))(param_1,&local_f8,uVar16);
      }
      local_110 = local_140;
      dStack_108 = dStack_138;
      uVar10 = uVar10 + 1;
      local_100 = local_130;
      lVar15 = lVar15 + 0xc;
      local_e8 = local_118;
      local_f8 = local_128;
      dStack_f0 = dStack_120;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  (**(code **)((longlong)*param_1 + 0x70))(param_1);
  return;
}

// getPathLen @ 144675720

double __cdecl UE::Detour::Private::getPathLen(double *param_1,int param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  double *pdVar18;
  double *pdVar19;
  double *pdVar20;
  double *pdVar21;
  double *pdVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  longlong lVar26;
  double *pdVar27;
  longlong lVar28;
  longlong lVar29;
  
  if (1 < param_2) {
    lVar29 = 0;
    lVar28 = (longlong)param_2 + -1;
    dVar25 = 0.0;
    dVar23 = 0.0;
    if (3 < lVar28) {
      pdVar27 = param_1 + 5;
      lVar26 = ((longlong)param_2 - 5U >> 2) + 1;
      lVar29 = lVar26 * 4;
      do {
        pdVar1 = pdVar27 + -1;
        pdVar2 = pdVar27 + -4;
        pdVar3 = pdVar27 + -2;
        pdVar4 = pdVar27 + -5;
        dVar23 = *pdVar27;
        pdVar5 = pdVar27 + -3;
        pdVar6 = pdVar27 + 7;
        pdVar7 = pdVar27 + 4;
        pdVar8 = pdVar27 + 3;
        dVar24 = *pdVar27;
        pdVar9 = pdVar27 + 1;
        pdVar10 = pdVar27 + -2;
        pdVar11 = pdVar27 + 2;
        pdVar12 = pdVar27 + -1;
        pdVar13 = pdVar27 + 6;
        pdVar14 = pdVar27 + 3;
        pdVar15 = pdVar27 + 4;
        pdVar16 = pdVar27 + 1;
        pdVar17 = pdVar27 + 5;
        pdVar18 = pdVar27 + 2;
        pdVar19 = pdVar27 + 8;
        pdVar20 = pdVar27 + 5;
        pdVar21 = pdVar27 + 9;
        pdVar22 = pdVar27 + 6;
        pdVar27 = pdVar27 + 0xc;
        dVar25 = dVar25 + (double)SQRT((float)((*pdVar1 - *pdVar2) * (*pdVar1 - *pdVar2) +
                                               (*pdVar3 - *pdVar4) * (*pdVar3 - *pdVar4) +
                                              (dVar23 - *pdVar5) * (dVar23 - *pdVar5))) +
                 (double)SQRT((float)((*pdVar11 - *pdVar12) * (*pdVar11 - *pdVar12) +
                                      (*pdVar9 - *pdVar10) * (*pdVar9 - *pdVar10) +
                                     (*pdVar8 - dVar24) * (*pdVar8 - dVar24))) +
                 (double)SQRT((float)((*pdVar17 - *pdVar18) * (*pdVar17 - *pdVar18) +
                                      (*pdVar15 - *pdVar16) * (*pdVar15 - *pdVar16) +
                                     (*pdVar13 - *pdVar14) * (*pdVar13 - *pdVar14))) +
                 (double)SQRT((float)((*pdVar6 - *pdVar7) * (*pdVar6 - *pdVar7) +
                                      (*pdVar19 - *pdVar20) * (*pdVar19 - *pdVar20) +
                                     (*pdVar21 - *pdVar22) * (*pdVar21 - *pdVar22)));
        lVar26 = lVar26 + -1;
        dVar23 = dVar25;
      } while (lVar26 != 0);
    }
    if (lVar29 < lVar28) {
      lVar28 = lVar28 - lVar29;
      pdVar27 = param_1 + lVar29 * 3 + 5;
      do {
        pdVar1 = pdVar27 + -1;
        pdVar2 = pdVar27 + -4;
        dVar25 = *pdVar27;
        pdVar3 = pdVar27 + -3;
        pdVar4 = pdVar27 + -2;
        pdVar5 = pdVar27 + -5;
        pdVar27 = pdVar27 + 3;
        dVar23 = dVar23 + (double)SQRT((float)((*pdVar1 - *pdVar2) * (*pdVar1 - *pdVar2) +
                                               (*pdVar4 - *pdVar5) * (*pdVar4 - *pdVar5) +
                                              (dVar25 - *pdVar3) * (dVar25 - *pdVar3)));
        lVar28 = lVar28 + -1;
      } while (lVar28 != 0);
    }
    return dVar23;
  }
  return 0.0;
}

// getPointAlongPath @ 1446759d0

void __cdecl
UE::Detour::Private::getPointAlongPath
          (double param_1,double *param_2,int param_3,double *param_4,double *param_5)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  
  if (param_3 == 0) {
    return;
  }
  if (param_3 == 1) {
    if (param_5 != (double *)0x0) {
      *param_5 = 1.0;
      param_5[1] = 0.0;
      param_5[2] = 0.0;
    }
  }
  else {
    if (0.0 < param_1) {
      iVar4 = 0;
      fVar8 = 0.0;
      pdVar1 = param_2;
      if (0 < param_3 + -1) {
        do {
          pdVar2 = pdVar1 + 3;
          dVar9 = *pdVar2 - *pdVar1;
          dVar7 = (double)fVar8;
          fVar6 = SQRT((float)((pdVar1[4] - pdVar1[1]) * (pdVar1[4] - pdVar1[1]) + dVar9 * dVar9 +
                              (pdVar1[5] - pdVar1[2]) * (pdVar1[5] - pdVar1[2])));
          fVar8 = fVar6 + fVar8;
          if ((dVar7 <= param_1) && (param_1 <= (double)fVar8)) {
            dVar7 = (param_1 - dVar7) / (double)fVar6;
            *param_4 = dVar7 * dVar9 + *pdVar1;
            param_4[1] = (pdVar1[4] - pdVar1[1]) * dVar7 + pdVar1[1];
            param_4[2] = (pdVar1[5] - pdVar1[2]) * dVar7 + pdVar1[2];
            if (param_5 == (double *)0x0) {
              return;
            }
            *param_5 = *pdVar2 - *pdVar1;
            param_5[1] = pdVar1[4] - pdVar1[1];
            param_5[2] = pdVar1[5] - pdVar1[2];
            return;
          }
          iVar4 = iVar4 + 1;
          pdVar1 = pdVar2;
        } while (iVar4 < param_3 + -1);
      }
      lVar5 = (longlong)(param_3 * 3);
      *param_4 = param_2[lVar5 + -3];
      param_4[1] = param_2[lVar5 + -2];
      param_4[2] = param_2[lVar5 + -1];
      if (param_5 == (double *)0x0) {
        return;
      }
      lVar3 = (longlong)((param_3 + -2) * 3);
      *param_5 = param_2[lVar5 + -3] - param_2[lVar3];
      param_5[1] = param_2[lVar5 + -2] - param_2[lVar3 + 1];
      param_5[2] = param_2[lVar5 + -1] - param_2[lVar3 + 2];
      return;
    }
    if (param_5 != (double *)0x0) {
      *param_5 = param_2[3] - *param_2;
      param_5[1] = param_2[4] - param_2[1];
      param_5[2] = param_2[5] - param_2[2];
    }
  }
  *param_4 = *param_2;
  param_4[1] = param_2[1];
  param_4[2] = param_2[2];
  return;
}

// ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<dtNavLinkBuilder::JumpLink>_> @ 144681dc0

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<dtNavLinkBuilder::JumpLink>_>
          (uint param_1,uint param_2,ForElementType<dtNavLinkBuilder::JumpLink> *param_3,
          int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_4;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<dtNavLinkBuilder::JumpLink>::ResizeAllocation(param_3,uVar2,iVar8,uVar7);
    *param_4 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<dtNavLinkBuilder::Edge>_> @ 144681e90

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<dtNavLinkBuilder::Edge>_>
          (ushort param_1,ForElementType<dtNavLinkBuilder::Edge> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x21) {
      iVar8 = 0x20;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x21) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<dtNavLinkBuilder::Edge>
    ::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<dtNavLinkBuilder::GroundSample>_> @ 144681f60

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<dtNavLinkBuilder::GroundSample>_>
          (ushort param_1,ForElementType<dtNavLinkBuilder::GroundSample> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x11) {
      iVar8 = 0x10;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x11) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::
    ForElementType<dtNavLinkBuilder::GroundSample>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<dtNavLinkBuilder::TrajectorySample>_> @ 144682030

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<dtNavLinkBuilder::TrajectorySample>_>
          (ushort param_1,ForElementType<dtNavLinkBuilder::TrajectorySample> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 9) {
      iVar8 = 8;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 9) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<dtNavLinkBuilder::TrajectorySample>::ResizeAllocation(param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_dtNavLinkBuilder::GroundSampleFlag>_> @ 144682100

int __cdecl
UE::Core::Private::
ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_dtNavLinkBuilder::GroundSampleFlag>_>
          (ushort param_1,ForElementType<dtNavLinkBuilder::GroundSampleFlag> *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar2 = *param_3;
  uVar1 = uVar2 + 1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar7 = (ulonglong)(byte)param_1;
    if (uVar1 < 0x41) {
      iVar8 = 0x40;
    }
    else {
      uVar5 = (ulonglong)(int)uVar1;
      uVar3 = uVar2;
      if (uVar2 < 0x41) {
        uVar3 = 0;
      }
      if (uVar3 == 0) {
        uVar6 = 4;
        if (4 < uVar5) {
          uVar6 = uVar5;
        }
      }
      else {
        uVar6 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
      }
      uVar4 = FMemory::QuantizeSize(uVar7 * uVar6,0);
      iVar8 = (int)(uVar4 / uVar7);
      if (iVar8 < (int)uVar1) {
        iVar8 = 0x7fffffff;
      }
    }
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_dtNavLinkBuilder::GroundSampleFlag>::ResizeAllocation
              (param_2,uVar2,iVar8,uVar7);
    *param_3 = iVar8;
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<dtNavLinkBuilder::Edge>_> @ 1446821d0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<dtNavLinkBuilder::Edge>_>
          (uint param_1,uint param_2,int param_3,ForElementType<dtNavLinkBuilder::Edge> *param_4,
          int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x21) {
      iVar1 = 0x20;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<dtNavLinkBuilder::Edge>
    ::ResizeAllocation(param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<dtNavLinkBuilder::TrajectorySample>_> @ 144682250

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<dtNavLinkBuilder::TrajectorySample>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<dtNavLinkBuilder::TrajectorySample> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 9) {
      iVar1 = 8;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::
    ForElementType<dtNavLinkBuilder::TrajectorySample>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_dtNavLinkBuilder::GroundSampleFlag>_> @ 1446822d0

void __cdecl
UE::Core::Private::
ReallocTo<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_dtNavLinkBuilder::GroundSampleFlag>_>
          (uint param_1,uint param_2,int param_3,
          ForElementType<dtNavLinkBuilder::GroundSampleFlag> *param_4,int param_5,int *param_6)

{
  int iVar1;
  ulong64 uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1;
  iVar1 = 0;
  if (param_3 != 0) {
    if ((uint)param_3 < 0x41) {
      iVar1 = 0x40;
    }
    else {
      uVar2 = FMemory::QuantizeSize((longlong)param_3 * uVar3,0);
      iVar1 = (int)(uVar2 / uVar3);
      if (iVar1 < param_3) {
        iVar1 = 0x7fffffff;
      }
    }
  }
  if (iVar1 != *param_6) {
    *param_6 = iVar1;
    TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::
    ForElementType<enum_dtNavLinkBuilder::GroundSampleFlag>::ResizeAllocation
              (param_4,param_5,iVar1,uVar3);
  }
  return;
}

// rcMarkBorderRegions @ 1446c08a0

void __cdecl
UE::Recast::Private::rcMarkBorderRegions
          (rcBorderSize param_1,int param_2,int param_3,rcCompactHeightfield *param_4,
          ushort *param_5,ushort *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_1.low;
  iVar3 = param_1.high;
  if ((0 < iVar1) || (0 < iVar3)) {
    iVar2 = iVar1;
    if (param_2 < iVar1) {
      iVar2 = param_2;
    }
    paintRectRegion(0,iVar2,0,param_3,*param_6 | 0x8000,param_4,param_5);
    *param_6 = *param_6 + 1;
    iVar2 = iVar3;
    if (param_2 < iVar3) {
      iVar2 = param_2;
    }
    paintRectRegion(param_2 - iVar2,param_2,0,param_3,*param_6 | 0x8000,param_4,param_5);
    *param_6 = *param_6 + 1;
    if (param_3 < iVar1) {
      iVar1 = param_3;
    }
    paintRectRegion(0,param_2,0,iVar1,*param_6 | 0x8000,param_4,param_5);
    *param_6 = *param_6 + 1;
    if (param_3 < iVar3) {
      iVar3 = param_3;
    }
    paintRectRegion(0,param_2,param_3 - iVar3,param_3,*param_6 | 0x8000,param_4,param_5);
    *param_6 = *param_6 + 1;
    param_4->borderSize = param_1;
  }
  return;
}

