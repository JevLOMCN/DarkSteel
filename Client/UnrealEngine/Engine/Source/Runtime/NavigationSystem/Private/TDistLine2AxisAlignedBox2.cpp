// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 3

// DoQuery1D @ 146deddb0

void __cdecl
UE::Geometry::TDistLine2AxisAlignedBox2<double>::DoQuery1D
          (int param_1,int param_2,TVector2<double> *param_3,TVector2<double> *param_4,
          TVector2<double> *param_5,TVector2<double> *param_6,TVector2<double> *param_7,
          double *param_8)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  TVector2<double>_u_0 TVar5;
  double dVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  lVar8 = (longlong)param_1;
  lVar9 = (longlong)param_2;
  lVar2 = lVar8 * 8;
  puVar1 = (undefined8 *)((longlong)&param_5->field0_0x0 + lVar2);
  if ((uint)param_1 < 2) {
    uVar13 = (undefined4)*puVar1;
    uVar15 = (undefined4)((ulonglong)*puVar1 >> 0x20);
    uVar3 = *(undefined8 *)((longlong)&param_3->field0_0x0 + lVar2);
    uVar17 = (undefined4)uVar3;
    uVar18 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  else {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x4b9,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar13 = (undefined4)*puVar1;
    uVar15 = (undefined4)((ulonglong)*puVar1 >> 0x20);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x4b9,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar3 = *(undefined8 *)((longlong)&param_3->field0_0x0 + lVar2);
    uVar17 = (undefined4)uVar3;
    uVar18 = (undefined4)((ulonglong)uVar3 >> 0x20);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x4b9,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  dVar6 = ((double)CONCAT44(uVar15,uVar13) - (double)CONCAT44(uVar18,uVar17)) /
          (param_4->field0_0x0).XY[lVar8];
  *param_8 = dVar6;
  dVar10 = dVar6 * (param_4->field0_0x0)._s_0.Y + (param_3->field0_0x0)._s_0.Y;
  TVar5._8_4_ = SUB84(dVar10,0);
  TVar5._s_0.X = dVar6 * (param_4->field0_0x0)._s_0.X + (param_3->field0_0x0)._s_0.X;
  TVar5._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  param_7->field0_0x0 = TVar5;
  if ((uint)param_1 < 2) {
    uVar13 = (undefined4)*puVar1;
    uVar15 = (undefined4)((ulonglong)*puVar1 >> 0x20);
  }
  else {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x4b9,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar13 = (undefined4)*puVar1;
    uVar15 = (undefined4)((ulonglong)*puVar1 >> 0x20);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x4b0,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (param_6->field0_0x0).XY[lVar8] = (double)CONCAT44(uVar15,uVar13);
  if ((uint)param_2 < 2) {
    dVar10 = (param_3->field0_0x0).XY[lVar9];
    if ((param_5->field0_0x0).XY[lVar9] <= (param_3->field0_0x0).XY[lVar9]) {
      dVar10 = (param_5->field0_0x0).XY[lVar9];
    }
    uVar3 = *(undefined8 *)((longlong)&param_5->field0_0x0 + lVar9 * 8);
    uVar11 = (uint)uVar3 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar12 = (uint)((ulonglong)uVar3 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    if (dVar10 <= (double)CONCAT44(uVar12,uVar11)) {
      dVar10 = (double)CONCAT44(uVar12,uVar11);
    }
    (param_6->field0_0x0).XY[lVar9] = dVar10;
  }
  else {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x4b9,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar2 = lVar9 * 8;
    dVar10 = *(double *)((longlong)&param_5->field0_0x0 + lVar2);
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x4b9,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar3 = *(undefined8 *)((longlong)&param_5->field0_0x0 + lVar2);
    uVar11 = (uint)uVar3 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar12 = (uint)((ulonglong)uVar3 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x4b9,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    dVar6 = *(double *)((longlong)&param_3->field0_0x0 + lVar2);
    uVar14 = SUB84(dVar6,0);
    uVar16 = (uint)((ulonglong)dVar6 >> 0x20);
    if (dVar10 <= dVar6) {
      uVar14 = SUB84(dVar10,0);
      uVar16 = (uint)((ulonglong)dVar10 >> 0x20);
    }
    if ((double)CONCAT44(uVar16,uVar14) <= (double)CONCAT44(uVar12,uVar11)) {
      uVar14 = uVar11;
      uVar16 = uVar12;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector2D.h"
                       ,0x4b0,L"");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (param_6->field0_0x0).XY[lVar9] = (double)CONCAT44(uVar16,uVar14);
  }
  return;
}

// DoQuery2D @ 146dee0a0

void __cdecl
UE::Geometry::TDistLine2AxisAlignedBox2<double>::DoQuery2D
          (TVector2<double> *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,TVector2<double> *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TVector2<double>_u_0 TVar4;
  TVector2<double>_u_0 TVar5;
  TVector2<double>_u_0 TVar6;
  TVector2<double>_u_0 TVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  uint uVar13;
  double dVar12;
  uint uVar14;
  
  uVar14 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar10 = (param_2->field0_0x0)._s_0.Y;
  dVar12 = dVar1 - (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_3->field0_0x0)._s_0.X;
  dVar9 = dVar2 * dVar12;
  uVar11 = SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar13 = (uint)((ulonglong)dVar3 >> 0x20) ^ uVar14;
  dVar8 = (double)CONCAT44(uVar13,uVar11) - (param_1->field0_0x0)._s_0.X;
  if (dVar10 * dVar8 - dVar9 < 0.0) {
    dVar12 = dVar3 - (param_1->field0_0x0)._s_0.X;
    uVar11 = SUB84(dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar14 = (uint)((ulonglong)dVar1 >> 0x20) ^ uVar14;
    dVar8 = (double)CONCAT44(uVar14,uVar11) - (param_1->field0_0x0)._s_0.Y;
    if (0.0 < dVar12 * dVar10 - dVar2 * dVar8) {
      if (dVar12 * dVar10 - dVar9 < 0.0) {
        dVar12 = dVar12 / dVar2;
        *param_6 = dVar12;
        dVar1 = dVar12 * (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
        TVar7._8_4_ = SUB84(dVar1,0);
        TVar7._s_0.X = dVar12 * (param_2->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
        TVar7._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
        param_5->field0_0x0 = TVar7;
        (param_4->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
        (param_4->field0_0x0)._s_0.Y =
             *param_6 * (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
      }
      else {
        dVar10 = (dVar1 - (param_1->field0_0x0)._s_0.Y) / dVar10;
        *param_6 = dVar10;
        dVar1 = dVar10 * (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
        TVar6._8_4_ = SUB84(dVar1,0);
        TVar6._s_0.X = dVar10 * (param_2->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
        TVar6._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
        param_5->field0_0x0 = TVar6;
        (param_4->field0_0x0)._s_0.X =
             (param_2->field0_0x0)._s_0.X * *param_6 + (param_1->field0_0x0)._s_0.X;
        (param_4->field0_0x0)._s_0.Y = (param_3->field0_0x0)._s_0.Y;
      }
    }
    else {
      dVar1 = (dVar2 * dVar12 + dVar10 * dVar8) / (dVar10 * dVar10 + dVar2 * dVar2);
      *param_6 = dVar1;
      dVar2 = dVar1 * (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
      TVar5._8_4_ = SUB84(dVar2,0);
      TVar5._s_0.X = dVar1 * (param_2->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
      TVar5._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
      param_5->field0_0x0 = TVar5;
      (param_4->field0_0x0)._s_0.X = dVar3;
      (param_4->field0_0x0)._s_0.Y = (double)CONCAT44(uVar14,uVar11);
    }
  }
  else {
    dVar2 = (dVar2 * dVar8 + dVar10 * dVar12) / (dVar10 * dVar10 + dVar2 * dVar2);
    *param_6 = dVar2;
    dVar10 = dVar2 * (param_2->field0_0x0)._s_0.Y + (param_1->field0_0x0)._s_0.Y;
    TVar4._8_4_ = SUB84(dVar10,0);
    TVar4._s_0.X = dVar2 * (param_2->field0_0x0)._s_0.X + (param_1->field0_0x0)._s_0.X;
    TVar4._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    param_5->field0_0x0 = TVar4;
    (param_4->field0_0x0)._s_0.X = (double)CONCAT44(uVar13,uVar11);
    (param_4->field0_0x0)._s_0.Y = dVar1;
  }
  return;
}

// DoQuery @ 146dee2e0

void __cdecl
UE::Geometry::TDistLine2AxisAlignedBox2<double>::DoQuery
          (TVector2<double> *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,TVector2<double> *param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar8 = (uint)__xmm_80000000000000008000000000000000;
  uVar9 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar1 = *(double *)&param_2->field0_0x0;
  uVar12 = SUB84(dVar1,0);
  uVar13 = (uint)((ulonglong)dVar1 >> 0x20);
  uVar14 = (uint)*(undefined8 *)&param_1->field0_0x0;
  uVar15 = (uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
  if (dVar1 < 0.0) {
    uVar14 = uVar14 ^ uVar8;
    uVar15 = uVar15 ^ uVar9;
    uVar12 = uVar12 ^ uVar8;
    uVar13 = uVar13 ^ uVar9;
    (param_1->field0_0x0)._s_0.X = (double)CONCAT44(uVar15,uVar14);
    (param_2->field0_0x0)._s_0.X = (double)CONCAT44(uVar13,uVar12);
  }
  dVar2 = *(double *)((longlong)&param_2->field0_0x0 + 8);
  uVar10 = SUB84(dVar2,0);
  uVar11 = (uint)((ulonglong)dVar2 >> 0x20);
  if (dVar2 < 0.0) {
    uVar3 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    uVar10 = uVar10 ^ uVar8;
    uVar11 = uVar11 ^ uVar9;
    (param_2->field0_0x0)._s_0.Y = (double)CONCAT44(uVar11,uVar10);
    (param_1->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar9,(uint)uVar3 ^ uVar8);
  }
  if ((double)CONCAT44(uVar13,uVar12) < 0.0 || (double)CONCAT44(uVar13,uVar12) == 0.0) {
    if ((double)CONCAT44(uVar11,uVar10) < 0.0 || (double)CONCAT44(uVar11,uVar10) == 0.0) {
      dVar7 = (param_1->field0_0x0)._s_0.X;
      dVar6 = (param_1->field0_0x0)._s_0.Y;
      *param_6 = 0.0;
      (param_5->field0_0x0)._s_0.X = dVar7;
      (param_5->field0_0x0)._s_0.Y = dVar6;
      dVar7 = (param_3->field0_0x0)._s_0.X;
      dVar6 = (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar9,SUB84(dVar7,0) ^ uVar8);
      if ((double)CONCAT44(uVar15,uVar14) <= dVar7) {
        dVar7 = (double)CONCAT44(uVar15,uVar14);
      }
      if (dVar7 <= dVar6) {
        dVar7 = dVar6;
      }
      (param_4->field0_0x0)._s_0.X = dVar7;
      dVar7 = (param_3->field0_0x0)._s_0.Y;
      uVar4 = SUB84(dVar7,0) ^ uVar8;
      uVar5 = (uint)((ulonglong)dVar7 >> 0x20) ^ uVar9;
      dVar6 = (param_1->field0_0x0)._s_0.Y;
      if (dVar6 <= dVar7) {
        dVar7 = dVar6;
      }
      if (dVar7 <= (double)CONCAT44(uVar5,uVar4)) {
        dVar7 = (double)CONCAT44(uVar5,uVar4);
      }
      (param_4->field0_0x0)._s_0.Y = dVar7;
    }
    else {
      DoQuery1D(1,0,param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  else if ((double)CONCAT44(uVar11,uVar10) < 0.0 || (double)CONCAT44(uVar11,uVar10) == 0.0) {
    DoQuery1D(0,1,param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    DoQuery2D(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  dVar7 = *param_6;
  dVar6 = (param_1->field0_0x0)._s_0.Y;
  (param_5->field0_0x0)._s_0.X =
       dVar7 * (double)CONCAT44(uVar13,uVar12) + (double)CONCAT44(uVar15,uVar14);
  (param_5->field0_0x0)._s_0.Y = dVar7 * (double)CONCAT44(uVar11,uVar10) + dVar6;
  if (dVar1 < 0.0) {
    (param_4->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_4->field0_0x0 >> 0x20) ^ uVar9,
                          (uint)*(undefined8 *)&param_4->field0_0x0 ^ uVar8);
    (param_5->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_5->field0_0x0 >> 0x20) ^ uVar9,
                          (uint)*(undefined8 *)&param_5->field0_0x0 ^ uVar8);
  }
  if (dVar2 < 0.0) {
    uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
    (param_4->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar9,(uint)uVar3 ^ uVar8);
    uVar3 = *(undefined8 *)((longlong)&param_5->field0_0x0 + 8);
    (param_5->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar9,(uint)uVar3 ^ uVar8);
  }
  return;
}

