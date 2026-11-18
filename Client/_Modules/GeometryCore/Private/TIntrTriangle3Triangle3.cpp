// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 6

// Find @ 14339da10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TIntrTriangle3Triangle3<double>::Find(TIntrTriangle3Triangle3<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  TVector<double> *pTVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  EIntersectionType EVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  double dVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auStackY_398 [32];
  undefined8 local_358;
  undefined4 local_350;
  double local_348 [3];
  TVector<double>_u_0 local_330;
  double local_318;
  TVector<double>_u_0 local_310;
  double local_2f8;
  TVector2<double>_u_0 local_2f0;
  TVector<double>_u_0 local_2e0;
  TVector<double>_u_0 local_2c8;
  TVector<double>_u_0 local_2b0;
  TVector2<double>_u_0 local_298;
  TVector2<double>_u_0 local_288;
  TVector2<double>_u_0 local_278 [2];
  double local_258;
  TVector<double> local_248;
  TVector<double> local_230;
  TVector<double>_u_0 local_218;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double dStack_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  double local_188;
  undefined1 local_180;
  undefined8 local_17c;
  int local_174;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
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
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_398;
  if (this->Result != NotComputed) {
    return this->Result != NoIntersection;
  }
  this->Result = NoIntersection;
  pTVar14 = VectorUtil::Normal<double>
                      (&local_248,(TVector<double> *)this,(this->Triangle0).V + 1,
                       (this->Triangle0).V + 2);
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar1 = (this->Triangle0).V[0].field0_0x0._s_0.Y;
  dVar2 = (this->Triangle0).V[0].field0_0x0._s_0.X;
  dVar23 = (this->Triangle0).V[0].field0_0x0._s_0.Z;
  local_310._s_0.X = (pTVar14->field0_0x0)._s_0.X;
  local_310._s_0.Y = (pTVar14->field0_0x0)._s_0.Y;
  local_310._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
  local_2f8 = local_310._s_0.X * dVar2 + local_310._s_0.Y * dVar1 + local_310._s_0.Z * dVar23;
  if (((local_310._s_0.X == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) &&
      (local_310._s_0.Y == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y)) &&
     (local_310._s_0.Z == UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)) {
    pTVar14 = VectorUtil::Normal<double>
                        (&local_230,(this->Triangle1).V,(this->Triangle1).V + 1,
                         (this->Triangle1).V + 2);
    local_258 = (pTVar14->field0_0x0)._s_0.Z;
    if ((((pTVar14->field0_0x0)._s_0.X == (double)uVar8) &&
        ((pTVar14->field0_0x0)._s_0.Y == (double)uVar9)) && (local_258 == (double)uVar10)) {
      return false;
    }
    local_218._s_0.X = (this->Triangle1).V[0].field0_0x0._s_0.X;
    local_218._s_0.Y = (this->Triangle1).V[0].field0_0x0._s_0.Y;
    local_180 = this->bReportCoplanarIntersection;
    local_218._s_0.Z = (this->Triangle1).V[0].field0_0x0._s_0.Z;
    dStack_200 = (this->Triangle1).V[1].field0_0x0._s_0.X;
    local_17c = 0;
    local_1f8 = (this->Triangle1).V[1].field0_0x0._s_0.Y;
    dStack_1f0 = (this->Triangle1).V[1].field0_0x0._s_0.Z;
    local_174 = 0;
    local_1e8 = (this->Triangle1).V[2].field0_0x0._s_0.X;
    dStack_1e0 = (this->Triangle1).V[2].field0_0x0._s_0.Y;
    local_1d8 = (this->Triangle1).V[2].field0_0x0._s_0.Z;
    local_1c0 = (this->Triangle0).V[0].field0_0x0._s_0.Z;
    dStack_1b8 = (this->Triangle0).V[1].field0_0x0._s_0.X;
    local_1d0 = (this->Triangle0).V[0].field0_0x0._s_0.X;
    dStack_1c8 = (this->Triangle0).V[0].field0_0x0._s_0.Y;
    local_1a0 = (this->Triangle0).V[2].field0_0x0._s_0.X;
    dStack_198 = (this->Triangle0).V[2].field0_0x0._s_0.Y;
    local_1b0 = (this->Triangle0).V[1].field0_0x0._s_0.Y;
    dStack_1a8 = (this->Triangle0).V[1].field0_0x0._s_0.Z;
    local_188 = this->Tolerance;
    local_190 = (this->Triangle0).V[2].field0_0x0._s_0.Z;
    bVar11 = Find((TIntrTriangle3Triangle3<double> *)&local_218._s_0);
    this->Result = (EIntersectionResult)local_17c;
    this->Type = local_17c._4_4_;
    this->Quantity = local_174;
    this->Points[0].field0_0x0._s_0.X = local_170;
    this->Points[0].field0_0x0._s_0.Y = dStack_168;
    this->Points[0].field0_0x0._s_0.Z = local_160;
    this->Points[1].field0_0x0._s_0.X = local_158;
    this->Points[1].field0_0x0._s_0.Y = dStack_150;
    this->Points[1].field0_0x0._s_0.Z = local_148;
    this->Points[2].field0_0x0._s_0.X = local_140;
    this->Points[2].field0_0x0._s_0.Y = dStack_138;
    this->Points[2].field0_0x0._s_0.Z = local_130;
    this->Points[3].field0_0x0._s_0.X = local_128;
    this->Points[3].field0_0x0._s_0.Y = dStack_120;
    this->Points[3].field0_0x0._s_0.Z = local_118;
    this->Points[4].field0_0x0._s_0.X = local_110;
    this->Points[4].field0_0x0._s_0.Y = dStack_108;
    this->Points[4].field0_0x0._s_0.Z = local_100;
    this->Points[5].field0_0x0._s_0.X = local_f8;
    this->Points[5].field0_0x0._s_0.Y = dStack_f0;
    this->Points[5].field0_0x0._s_0.Z = local_e8;
    return bVar11;
  }
  dVar3 = this->Tolerance;
  uVar16 = 0;
  EVar17 = Empty;
  iVar20 = 0;
  iVar13 = 0;
  iVar22 = 0;
  uVar19 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_348[0] = (local_310._s_0.Y * (this->Triangle1).V[0].field0_0x0._s_0.Y +
                  local_310._s_0.X * (this->Triangle1).V[0].field0_0x0._s_0.X +
                 local_310._s_0.Z * (this->Triangle1).V[0].field0_0x0._s_0.Z) - local_2f8;
  uVar25 = (uint)((ulonglong)dVar3 >> 0x20);
  if (local_348[0] <= dVar3) {
    if ((double)CONCAT44(uVar25 ^ uVar19,
                         SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000) <=
        local_348[0]) {
      local_358._0_4_ = 0;
      iVar22 = 1;
    }
    else {
      local_358._0_4_ = 0xffffffff;
      iVar13 = 1;
      iVar20 = 0;
    }
  }
  else {
    local_358._0_4_ = 1;
    iVar20 = 1;
    iVar22 = 0;
    iVar13 = 0;
  }
  uVar24 = SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar25 = uVar25 ^ uVar19;
  local_348[1] = (local_310._s_0.Y * (this->Triangle1).V[1].field0_0x0._s_0.Y +
                  local_310._s_0.X * (this->Triangle1).V[1].field0_0x0._s_0.X +
                 local_310._s_0.Z * (this->Triangle1).V[1].field0_0x0._s_0.Z) - local_2f8;
  if (local_348[1] <= dVar3) {
    if ((double)CONCAT44(uVar25,uVar24) <= local_348[1]) {
      local_358 = (double)(ulonglong)(uint)local_358;
      iVar22 = iVar22 + 1;
    }
    else {
      local_358 = (double)CONCAT44(0xffffffff,(uint)local_358);
      iVar13 = iVar13 + 1;
    }
  }
  else {
    local_358 = (double)CONCAT44(1,(uint)local_358);
    iVar20 = iVar20 + 1;
  }
  local_348[2] = (local_310._s_0.Y * (this->Triangle1).V[2].field0_0x0._s_0.Y +
                  local_310._s_0.X * (this->Triangle1).V[2].field0_0x0._s_0.X +
                 local_310._s_0.Z * (this->Triangle1).V[2].field0_0x0._s_0.Z) - local_2f8;
  if (local_348[2] <= dVar3) {
    if ((double)CONCAT44(uVar25,uVar24) <= local_348[2]) {
      local_350 = 0;
      iVar22 = iVar22 + 1;
    }
    else {
      local_350 = 0xffffffff;
      iVar13 = iVar13 + 1;
    }
  }
  else {
    local_350 = 1;
    iVar20 = iVar20 + 1;
  }
  if (iVar20 == 3) {
    return false;
  }
  if (iVar13 == 3) {
    return false;
  }
  if (iVar22 == 3) {
    if (this->bReportCoplanarIntersection == false) {
      return false;
    }
    bVar11 = GetCoplanarIntersection
                       (this,(TPlane3<double> *)&local_310._s_0,&this->Triangle0,&this->Triangle1);
    return bVar11;
  }
  uVar21 = uVar16;
  if ((iVar20 == 0) || (iVar13 == 0)) {
    uVar15 = uVar16;
    uVar18 = uVar16;
    if (iVar22 == 2) {
      do {
        uVar19 = (int)uVar18 + 1;
        if (*(int *)((longlong)&local_358 + uVar15 * 4) != 0) {
          iVar20 = (int)uVar18 + 2;
          bVar11 = IntersectsSegment(this,(TPlane3<double> *)&local_310._s_0,&this->Triangle0,
                                     (this->Triangle1).V +
                                     (iVar20 + (iVar20 / 3 + (iVar20 >> 0x1f) +
                                               (int)(((longlong)iVar20 / 3 +
                                                      ((longlong)iVar20 >> 0x3f) & 0xffffffffU) >>
                                                    0x1f)) * -3),
                                     (this->Triangle1).V +
                                     (int)(uVar19 + ((int)uVar19 / 3 + ((int)uVar19 >> 0x1f) +
                                                    (int)(((longlong)(int)uVar19 / 3 +
                                                           ((longlong)(int)uVar19 >> 0x3f) &
                                                          0xffffffffU) >> 0x1f)) * -3));
          return bVar11;
        }
        uVar15 = uVar15 + 1;
        uVar18 = (ulonglong)uVar19;
      } while ((longlong)uVar15 < 3);
      goto LAB_14339dec0;
    }
    do {
      iVar13 = (int)uVar18;
      if (*(int *)((longlong)&local_358 + uVar15 * 4) == 0) {
        VectorUtil::MakePerpVectors<double>
                  ((TVector<double> *)&local_310._s_0,(TVector<double> *)&local_2c8._s_0,
                   (TVector<double> *)&local_2b0._s_0);
        dVar3 = (this->Triangle1).V[iVar13].field0_0x0._s_0.X - dVar2;
        dVar23 = (this->Triangle1).V[iVar13].field0_0x0._s_0.Z - dVar23;
        local_358 = (this->Triangle0).V[2].field0_0x0._s_0.X - dVar2;
        dVar5 = (this->Triangle1).V[iVar13].field0_0x0._s_0.Y - dVar1;
        dVar6 = (this->Triangle0).V[1].field0_0x0._s_0.Y - dVar1;
        local_318 = (this->Triangle0).V[2].field0_0x0._s_0.Y - dVar1;
        dVar2 = (this->Triangle0).V[1].field0_0x0._s_0.X - dVar2;
        dVar1 = (this->Triangle0).V[1].field0_0x0._s_0.Z - (this->Triangle0).V[0].field0_0x0._s_0.Z;
        dVar7 = (this->Triangle0).V[2].field0_0x0._s_0.Z - (this->Triangle0).V[0].field0_0x0._s_0.Z;
        local_2f0._s_0.X =
             dVar5 * local_2c8._s_0.Y + dVar3 * local_2c8._s_0.X + dVar23 * local_2c8._s_0.Z;
        local_298 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
        local_2f0._s_0.Y =
             dVar5 * local_2b0._s_0.Y + dVar3 * local_2b0._s_0.X + dVar23 * local_2b0._s_0.Z;
        local_288._s_0.X =
             dVar6 * local_2c8._s_0.Y + dVar2 * local_2c8._s_0.X + dVar1 * local_2c8._s_0.Z;
        local_288._s_0.Y =
             dVar2 * local_2b0._s_0.X + dVar6 * local_2b0._s_0.Y + dVar1 * local_2b0._s_0.Z;
        local_278[0]._0_8_ =
             local_318 * local_2c8._s_0.Y + local_358 * local_2c8._s_0.X + dVar7 * local_2c8._s_0.Z;
        local_278[0]._8_8_ =
             local_318 * local_2b0._s_0.Y + local_358 * local_2b0._s_0.X + dVar7 * local_2b0._s_0.Z;
        iVar20 = TTriangle2<double>::IsInsideOrOn_Oriented
                           ((TVector2<double> *)&local_298._s_0,(TVector2<double> *)&local_288._s_0,
                            (TVector2<double> *)&local_278[0]._s_0,
                            (TVector2<double> *)&local_2f0._s_0,0.0);
        if (0 < iVar20) {
          return false;
        }
        this->Result = Intersects;
        this->Type = Point;
        this->Quantity = 1;
        pTVar14 = (this->Triangle1).V + iVar13;
        dVar1 = (pTVar14->field0_0x0)._s_0.Y;
        this->Points[0].field0_0x0._s_0.X = (pTVar14->field0_0x0)._s_0.X;
        this->Points[0].field0_0x0._s_0.Y = dVar1;
        this->Points[0].field0_0x0._s_0.Z = (this->Triangle1).V[iVar13].field0_0x0._s_0.Z;
        return true;
      }
      uVar15 = uVar15 + 1;
      uVar18 = (ulonglong)(iVar13 + 1);
    } while ((longlong)uVar15 < 3);
  }
  if (iVar22 == 0) {
    iVar22 = -1;
    uVar15 = uVar16;
    uVar18 = uVar16;
    if (iVar20 == 1) {
      iVar22 = 1;
    }
    do {
      iVar20 = (int)uVar18;
      uVar19 = iVar20 + 1;
      if (*(int *)((longlong)&local_358 + uVar15 * 4) == iVar22) {
        iVar22 = iVar20 + 2;
        uVar25 = iVar22 + (iVar22 / 3 + (iVar22 >> 0x1f) +
                          (int)(((longlong)iVar22 / 3 + ((longlong)iVar22 >> 0x3f) & 0xffffffffU) >>
                               0x1f)) * -3;
        uVar19 = uVar19 + ((int)uVar19 / 3 + ((int)uVar19 >> 0x1f) +
                          (int)(((longlong)(int)uVar19 / 3 + ((longlong)(int)uVar19 >> 0x3f) &
                                0xffffffffU) >> 0x1f)) * -3;
        if ((2 < uVar25) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          uVar12 = (*pcVar4)();
          return (bool)uVar12;
        }
        dVar1 = local_348[iVar20] / (local_348[iVar20] - local_348[(int)uVar25]);
        local_330._s_0.Y =
             ((this->Triangle1).V[(int)uVar25].field0_0x0._s_0.Y -
             (this->Triangle1).V[iVar20].field0_0x0._s_0.Y) * dVar1 +
             (this->Triangle1).V[iVar20].field0_0x0._s_0.Y;
        local_330._s_0.X =
             ((this->Triangle1).V[(int)uVar25].field0_0x0._s_0.X -
             (this->Triangle1).V[iVar20].field0_0x0._s_0.X) * dVar1 +
             (this->Triangle1).V[iVar20].field0_0x0._s_0.X;
        local_330._s_0.Z =
             ((this->Triangle1).V[(int)uVar25].field0_0x0._s_0.Z -
             (this->Triangle1).V[iVar20].field0_0x0._s_0.Z) * dVar1 +
             (this->Triangle1).V[iVar20].field0_0x0._s_0.Z;
        if ((2 < uVar19) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L""), bVar11)) {
          pcVar4 = (code *)swi(3);
          uVar12 = (*pcVar4)();
          return (bool)uVar12;
        }
        dVar1 = local_348[iVar20] / (local_348[iVar20] - local_348[(int)uVar19]);
        local_2e0._s_0.Y =
             ((this->Triangle1).V[(int)uVar19].field0_0x0._s_0.Y -
             (this->Triangle1).V[iVar20].field0_0x0._s_0.Y) * dVar1 +
             (this->Triangle1).V[iVar20].field0_0x0._s_0.Y;
        local_2e0._s_0.X =
             ((this->Triangle1).V[(int)uVar19].field0_0x0._s_0.X -
             (this->Triangle1).V[iVar20].field0_0x0._s_0.X) * dVar1 +
             (this->Triangle1).V[iVar20].field0_0x0._s_0.X;
        local_2e0._s_0.Z =
             ((this->Triangle1).V[(int)uVar19].field0_0x0._s_0.Z -
             (this->Triangle1).V[iVar20].field0_0x0._s_0.Z) * dVar1 +
             (this->Triangle1).V[iVar20].field0_0x0._s_0.Z;
        iVar20 = IntersectTriangleWithCoplanarSegment
                           ((TPlane3<double> *)&local_310._s_0,&this->Triangle0,
                            (TVector<double> *)&local_330._s_0,(TVector<double> *)&local_2e0._s_0,
                            this->Points,this->Points + 1,this->Tolerance);
        this->Quantity = iVar20;
        if (0 < iVar20) {
          this->Result = (iVar20 < 1) + Intersects;
          this->Type = (iVar20 == 2) + Point;
          return 0 < iVar20;
        }
        goto LAB_14339e3b2;
      }
      uVar15 = uVar15 + 1;
      uVar18 = (ulonglong)uVar19;
    } while ((longlong)uVar15 < 3);
  }
LAB_14339dec0:
  while( true ) {
    iVar20 = (int)uVar21;
    uVar19 = iVar20 + 1;
    if (*(int *)((longlong)&local_358 + uVar16 * 4) == 0) break;
    uVar16 = uVar16 + 1;
    uVar21 = (ulonglong)uVar19;
    if (2 < (longlong)uVar16) {
      bVar11 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1723295107135832340>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Intersection\\IntrTriangle3Triangle3.h"
                          ,0x114,"false");
      if (!bVar11) {
        return false;
      }
      pcVar4 = (code *)swi(3);
      uVar12 = (*pcVar4)();
      return (bool)uVar12;
    }
  }
  iVar22 = iVar20 + 2;
  uVar25 = iVar22 + (iVar22 / 3 + (iVar22 >> 0x1f) +
                    (int)(((longlong)iVar22 / 3 + ((longlong)iVar22 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    ) * -3;
  uVar19 = uVar19 + ((int)uVar19 / 3 + ((int)uVar19 >> 0x1f) +
                    (int)(((longlong)(int)uVar19 / 3 + ((longlong)(int)uVar19 >> 0x3f) & 0xffffffffU
                          ) >> 0x1f)) * -3;
  if ((2 < uVar25) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  if ((2 < uVar25) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  if ((2 < uVar19) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidIndex(Index)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                          ,0x7a2,L""), bVar11)) {
    pcVar4 = (code *)swi(3);
    uVar12 = (*pcVar4)();
    return (bool)uVar12;
  }
  dVar1 = local_348[(int)uVar25] / (local_348[(int)uVar25] - local_348[(int)uVar19]);
  local_330._s_0.Y =
       ((this->Triangle1).V[(int)uVar19].field0_0x0._s_0.Y -
       (this->Triangle1).V[(int)uVar25].field0_0x0._s_0.Y) * dVar1 +
       (this->Triangle1).V[(int)uVar25].field0_0x0._s_0.Y;
  local_330._s_0.X =
       ((this->Triangle1).V[(int)uVar19].field0_0x0._s_0.X -
       (this->Triangle1).V[(int)uVar25].field0_0x0._s_0.X) * dVar1 +
       (this->Triangle1).V[(int)uVar25].field0_0x0._s_0.X;
  local_330._s_0.Z =
       ((this->Triangle1).V[(int)uVar19].field0_0x0._s_0.Z -
       (this->Triangle1).V[(int)uVar25].field0_0x0._s_0.Z) * dVar1 +
       (this->Triangle1).V[(int)uVar25].field0_0x0._s_0.Z;
  iVar20 = IntersectTriangleWithCoplanarSegment
                     ((TPlane3<double> *)&local_310._s_0,&this->Triangle0,
                      (this->Triangle1).V + iVar20,(TVector<double> *)&local_330._s_0,this->Points,
                      this->Points + 1,this->Tolerance);
  this->Quantity = iVar20;
  EVar17 = Empty;
  if (0 < iVar20) {
    EVar17 = (iVar20 == 2) + Point;
  }
LAB_14339e3b2:
  this->Result = (iVar20 < 1) + Intersects;
  this->Type = EVar17;
  return 0 < iVar20;
}

// GetCoplanarIntersection @ 1433a3170

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
UE::Geometry::TIntrTriangle3Triangle3<double>::GetCoplanarIntersection
          (TIntrTriangle3Triangle3<double> *this,TPlane3<double> *param_1,
          TTriangle3<double> *param_2,TTriangle3<double> *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  double *pdVar11;
  double *pdVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_1d8 [48];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  double dStack_160;
  TVector2<double>_u_0 local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  double local_e8 [12];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  uVar1 = *(undefined8 *)&(param_1->Normal).field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&(param_1->Normal).field0_0x0 + 8);
  uVar17 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar19 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar15 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar16 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar18 = uVar17;
  uVar20 = uVar19;
  if ((double)CONCAT44(uVar19,uVar17) <= (double)CONCAT44(uVar16,uVar15) &&
      (double)CONCAT44(uVar16,uVar15) != (double)CONCAT44(uVar19,uVar17)) {
    uVar18 = uVar15;
    uVar20 = uVar16;
  }
  iVar13 = 0;
  bVar10 = (double)CONCAT44(uVar16,uVar15) != (double)CONCAT44(uVar19,uVar17);
  bVar9 = (double)CONCAT44(uVar19,uVar17) <= (double)CONCAT44(uVar16,uVar15);
  uVar1 = *(undefined8 *)((longlong)&(param_1->Normal).field0_0x0 + 0x10);
  uVar15 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar16 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  cVar14 = bVar9 && bVar10;
  if ((double)CONCAT44(uVar16,uVar15) < (double)CONCAT44(uVar20,uVar18) ||
      (double)CONCAT44(uVar16,uVar15) == (double)CONCAT44(uVar20,uVar18)) {
    if (!bVar9 || !bVar10) {
      uVar1 = *(undefined8 *)((longlong)&param_2->V[0].field0_0x0 + 8);
      local_158._0_4_ = (undefined4)uVar1;
      local_158._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)((longlong)&param_2->V[0].field0_0x0 + 0x10);
      local_158._8_4_ = (undefined4)uVar1;
      local_158._12_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)((longlong)&param_3->V[0].field0_0x0 + 8);
      local_128 = (undefined4)uVar1;
      uStack_124 = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)((longlong)&param_3->V[0].field0_0x0 + 0x10);
      uStack_120 = (undefined4)uVar1;
      uStack_11c = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)((longlong)&param_2->V[1].field0_0x0 + 8);
      uVar23 = (undefined4)uVar1;
      uVar24 = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)((longlong)&param_2->V[1].field0_0x0 + 0x10);
      uVar21 = (undefined4)uVar1;
      uVar22 = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)((longlong)&param_3->V[1].field0_0x0 + 8);
      uVar26 = (undefined4)uVar1;
      uVar27 = (undefined4)((ulonglong)uVar1 >> 0x20);
      dVar3 = *(double *)((longlong)&param_3->V[1].field0_0x0 + 0x10);
      dVar25 = *(double *)((longlong)&param_2->V[2].field0_0x0 + 8);
      uVar1 = *(undefined8 *)((longlong)&param_2->V[2].field0_0x0 + 0x10);
      uStack_130 = (undefined4)uVar1;
      uStack_12c = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)((longlong)&param_3->V[2].field0_0x0 + 8);
      local_118 = (undefined4)uVar1;
      uStack_114 = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)((longlong)&param_3->V[2].field0_0x0 + 0x10);
      uStack_170._0_4_ = (undefined4)uVar1;
      uStack_170._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      goto LAB_1433a324b;
    }
    uVar1 = *(undefined8 *)&param_2->V[0].field0_0x0;
    local_158._0_4_ = (undefined4)uVar1;
    local_158._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    if (!bVar9 || !bVar10) goto LAB_1433a320a;
    uVar1 = *(undefined8 *)((longlong)&param_2->V[0].field0_0x0 + 0x10);
    local_158._8_4_ = (undefined4)uVar1;
    local_158._12_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)&param_3->V[0].field0_0x0 + 0x10);
    uStack_120 = (undefined4)uVar1;
    uStack_11c = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)&param_2->V[1].field0_0x0 + 0x10);
    uVar21 = (undefined4)uVar1;
    uVar22 = (undefined4)((ulonglong)uVar1 >> 0x20);
    dVar3 = *(double *)((longlong)&param_3->V[1].field0_0x0 + 0x10);
    uVar1 = *(undefined8 *)((longlong)&param_2->V[2].field0_0x0 + 0x10);
    uStack_130 = (undefined4)uVar1;
    uStack_12c = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)&param_3->V[2].field0_0x0 + 0x10);
    uStack_170._0_4_ = (undefined4)uVar1;
    uStack_170._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  else {
    uVar1 = *(undefined8 *)&param_2->V[0].field0_0x0;
    local_158._0_4_ = (undefined4)uVar1;
    local_158._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    cVar14 = '\x02';
LAB_1433a320a:
    uVar1 = *(undefined8 *)((longlong)&param_2->V[0].field0_0x0 + 8);
    local_158._8_4_ = (undefined4)uVar1;
    local_158._12_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)&param_3->V[0].field0_0x0 + 8);
    uStack_120 = (undefined4)uVar1;
    uStack_11c = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)&param_2->V[1].field0_0x0 + 8);
    uVar21 = (undefined4)uVar1;
    uVar22 = (undefined4)((ulonglong)uVar1 >> 0x20);
    dVar3 = *(double *)((longlong)&param_3->V[1].field0_0x0 + 8);
    uVar1 = *(undefined8 *)((longlong)&param_2->V[2].field0_0x0 + 8);
    uStack_130 = (undefined4)uVar1;
    uStack_12c = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)&param_3->V[2].field0_0x0 + 8);
    uStack_170._0_4_ = (undefined4)uVar1;
    uStack_170._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  uVar1 = *(undefined8 *)&param_3->V[2].field0_0x0;
  local_118 = (undefined4)uVar1;
  uStack_114 = (undefined4)((ulonglong)uVar1 >> 0x20);
  dVar25 = *(double *)&param_2->V[2].field0_0x0;
  uVar1 = *(undefined8 *)&param_3->V[1].field0_0x0;
  uVar26 = (undefined4)uVar1;
  uVar27 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)&param_2->V[1].field0_0x0;
  uVar23 = (undefined4)uVar1;
  uVar24 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)&param_3->V[0].field0_0x0;
  local_128 = (undefined4)uVar1;
  uStack_124 = (undefined4)((ulonglong)uVar1 >> 0x20);
LAB_1433a324b:
  uStack_190 = CONCAT44(uStack_12c,uStack_130);
  uStack_1a0 = CONCAT44(uVar22,uVar21);
  local_1a8 = CONCAT44(uVar24,uVar23);
  local_178 = CONCAT44(uVar27,uVar26);
  local_168 = CONCAT44(uStack_114,local_118);
  dStack_160 = (double)CONCAT44(uStack_170._4_4_,(undefined4)uStack_170);
  local_198._0_4_ = SUB84(dVar25,0);
  local_198._4_4_ = (undefined4)((ulonglong)dVar25 >> 0x20);
  local_148 = uVar23;
  uStack_144 = uVar24;
  uStack_140 = uVar21;
  uStack_13c = uVar22;
  if (((double)CONCAT44(uStack_12c,uStack_130) - (double)CONCAT44(local_158._12_4_,local_158._8_4_))
      * ((double)CONCAT44(uVar24,uVar23) - (double)CONCAT44(local_158._4_4_,local_158._0_4_)) -
      ((double)CONCAT44(uVar22,uVar21) - (double)CONCAT44(local_158._12_4_,local_158._8_4_)) *
      (dVar25 - (double)CONCAT44(local_158._4_4_,local_158._0_4_)) < 0.0) {
    local_148 = (undefined4)local_198;
    uStack_144 = local_198._4_4_;
    uStack_140 = uStack_130;
    uStack_13c = uStack_12c;
    local_198._0_4_ = uVar23;
    local_198._4_4_ = uVar24;
    uStack_130 = uVar21;
    uStack_12c = uVar22;
  }
  local_108 = local_178;
  dStack_100 = dVar3;
  if (0.0 <= ((double)CONCAT44(uStack_170._4_4_,(undefined4)uStack_170) -
             (double)CONCAT44(uStack_11c,uStack_120)) *
             ((double)CONCAT44(uVar27,uVar26) - (double)CONCAT44(uStack_124,local_128)) -
             (dVar3 - (double)CONCAT44(uStack_11c,uStack_120)) *
             ((double)CONCAT44(uStack_114,local_118) - (double)CONCAT44(uStack_124,local_128))) {
    uStack_170._0_4_ = SUB84(dVar3,0);
    uStack_170._4_4_ = (undefined4)((ulonglong)dVar3 >> 0x20);
    local_118 = uVar26;
    uStack_114 = uVar27;
    local_108 = local_168;
    dStack_100 = dStack_160;
  }
  local_f8 = 0;
  local_f0 = 0;
  local_138 = (undefined4)local_198;
  uStack_134 = local_198._4_4_;
  local_198 = dVar25;
  uStack_10c = uStack_170._4_4_;
  uStack_110 = (undefined4)uStack_170;
  uStack_170 = dVar3;
  bVar9 = TIntrTriangle2Triangle2<double>::Find((TIntrTriangle2Triangle2<double> *)&local_158._s_0);
  dVar25 = __real_3ff0000000000000;
  bVar10 = false;
  if (bVar9) {
    this->Quantity = (int)local_f8;
    if (cVar14 == '\0') {
      dVar3 = (param_1->Normal).field0_0x0._s_0.X;
      if (0 < (int)local_f8) {
        pdVar12 = local_e8 + 1;
        pdVar11 = &this->Points[0].field0_0x0._s_0.Z;
        do {
          dVar4 = pdVar12[-1];
          iVar13 = iVar13 + 1;
          dVar5 = *pdVar12;
          pdVar12 = pdVar12 + 2;
          ((TVector<double>_u_0_s_0 *)(pdVar11 + -2))->X =
               ((param_1->Constant - dVar4 * (param_1->Normal).field0_0x0._s_0.Y) -
               dVar5 * (param_1->Normal).field0_0x0._s_0.Z) * (dVar25 / dVar3);
          pdVar11[-1] = dVar4;
          *pdVar11 = dVar5;
          pdVar11 = pdVar11 + 3;
        } while (iVar13 < this->Quantity);
      }
    }
    else if (cVar14 == '\x01') {
      dVar3 = (param_1->Normal).field0_0x0._s_0.Y;
      if (0 < (int)local_f8) {
        pdVar12 = local_e8 + 1;
        pdVar11 = &this->Points[0].field0_0x0._s_0.Z;
        do {
          dVar4 = pdVar12[-1];
          iVar13 = iVar13 + 1;
          dVar5 = *pdVar12;
          dVar6 = (param_1->Normal).field0_0x0._s_0.X;
          pdVar12 = pdVar12 + 2;
          dVar7 = param_1->Constant;
          dVar8 = (param_1->Normal).field0_0x0._s_0.Z;
          ((TVector<double>_u_0_s_0 *)(pdVar11 + -2))->X = dVar4;
          pdVar11[-1] = ((dVar7 - dVar4 * dVar6) - dVar5 * dVar8) * (dVar25 / dVar3);
          *pdVar11 = dVar5;
          pdVar11 = pdVar11 + 3;
        } while (iVar13 < this->Quantity);
      }
    }
    else {
      dVar3 = (param_1->Normal).field0_0x0._s_0.Z;
      if (0 < (int)local_f8) {
        pdVar12 = local_e8 + 1;
        pdVar11 = &this->Points[0].field0_0x0._s_0.Z;
        do {
          dVar4 = pdVar12[-1];
          iVar13 = iVar13 + 1;
          dVar5 = *pdVar12;
          dVar6 = (param_1->Normal).field0_0x0._s_0.X;
          pdVar12 = pdVar12 + 2;
          dVar7 = param_1->Constant;
          dVar8 = (param_1->Normal).field0_0x0._s_0.Y;
          ((TVector<double>_u_0_s_0 *)(pdVar11 + -2))->X = dVar4;
          pdVar11[-1] = dVar5;
          *pdVar11 = ((dVar7 - dVar4 * dVar6) - dVar5 * dVar8) * (dVar25 / dVar3);
          pdVar11 = pdVar11 + 3;
        } while (iVar13 < this->Quantity);
      }
    }
    this->Result = Intersects;
    bVar10 = true;
    this->Type = Polygon;
  }
  return bVar10;
}

// IntersectTriangleWithCoplanarSegment @ 1433ba200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
UE::Geometry::TIntrTriangle3Triangle3<double>::IntersectTriangleWithCoplanarSegment
          (TPlane3<double> *param_1,TTriangle3<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,TVector<double> *param_5,TVector<double> *param_6,double param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  TVector<double> *pTVar5;
  double *pdVar6;
  bool bVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  double *pdVar11;
  longlong lVar12;
  char cVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_198 [32];
  TVector<double> *local_178 [2];
  longlong local_168;
  double adStack_160 [3];
  TVector2<double>_u_0 local_148;
  double local_138;
  double local_130;
  double local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  int local_e8;
  longlong local_e0;
  double dStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulonglong local_a8;
  
  dVar8 = __real_3ff0000000000000;
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_198;
  uVar1 = *(undefined8 *)&(param_1->Normal).field0_0x0;
  uVar2 = *(undefined8 *)((longlong)&(param_1->Normal).field0_0x0 + 8);
  dVar19 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar15 = (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar17 = (uint)((ulonglong)uVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar20 = dVar19;
  if (dVar19 <= (double)CONCAT44(uVar17,uVar15) && (double)CONCAT44(uVar17,uVar15) != dVar19) {
    dVar20 = (double)CONCAT44(uVar17,uVar15);
  }
  lVar12 = 0;
  uVar14 = 2;
  bVar9 = (double)CONCAT44(uVar17,uVar15) != dVar19;
  bVar7 = dVar19 <= (double)CONCAT44(uVar17,uVar15);
  uVar1 = *(undefined8 *)((longlong)&(param_1->Normal).field0_0x0 + 0x10);
  uVar15 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar17 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  cVar13 = bVar7 && bVar9;
  if ((double)CONCAT44(uVar17,uVar15) < dVar20 || (double)CONCAT44(uVar17,uVar15) == dVar20) {
    if (!bVar7 || !bVar9) {
      uVar1 = *(undefined8 *)((longlong)&param_2->V[0].field0_0x0 + 8);
      local_120 = (undefined4)uVar1;
      uStack_11c = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)((longlong)&param_2->V[0].field0_0x0 + 0x10);
      uStack_118 = (undefined4)uVar1;
      uStack_114 = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)((longlong)&param_2->V[1].field0_0x0 + 8);
      uVar23 = (undefined4)uVar1;
      uVar24 = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)((longlong)&param_2->V[1].field0_0x0 + 0x10);
      uVar25 = (undefined4)uVar1;
      uVar26 = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)((longlong)&param_2->V[2].field0_0x0 + 8);
      local_100 = (undefined4)uVar1;
      uStack_fc = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)((longlong)&param_2->V[2].field0_0x0 + 0x10);
      uStack_f8 = (undefined4)uVar1;
      uStack_f4 = (undefined4)((ulonglong)uVar1 >> 0x20);
      uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      uVar16 = (undefined4)uVar1;
      uVar18 = (undefined4)((ulonglong)uVar1 >> 0x20);
      dVar3 = (param_3->field0_0x0)._s_0.Z;
      dVar19 = (param_4->field0_0x0)._s_0.Y;
      dVar20 = (param_4->field0_0x0)._s_0.Z;
      goto LAB_1433ba2f0;
    }
    uVar1 = *(undefined8 *)&param_2->V[0].field0_0x0;
    local_120 = (undefined4)uVar1;
    uStack_11c = (undefined4)((ulonglong)uVar1 >> 0x20);
    if (!bVar7 || !bVar9) goto LAB_1433ba2bd;
    uVar1 = *(undefined8 *)((longlong)&param_2->V[0].field0_0x0 + 0x10);
    uStack_118 = (undefined4)uVar1;
    uStack_114 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)&param_2->V[1].field0_0x0 + 0x10);
    uVar25 = (undefined4)uVar1;
    uVar26 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)&param_2->V[2].field0_0x0 + 0x10);
    uStack_f8 = (undefined4)uVar1;
    uStack_f4 = (undefined4)((ulonglong)uVar1 >> 0x20);
    dVar3 = (param_3->field0_0x0)._s_0.Z;
    dVar20 = (param_4->field0_0x0)._s_0.Z;
  }
  else {
    uVar1 = *(undefined8 *)&param_2->V[0].field0_0x0;
    local_120 = (undefined4)uVar1;
    uStack_11c = (undefined4)((ulonglong)uVar1 >> 0x20);
    cVar13 = '\x02';
LAB_1433ba2bd:
    uVar1 = *(undefined8 *)((longlong)&param_2->V[0].field0_0x0 + 8);
    uStack_118 = (undefined4)uVar1;
    uStack_114 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)&param_2->V[1].field0_0x0 + 8);
    uVar25 = (undefined4)uVar1;
    uVar26 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uVar1 = *(undefined8 *)((longlong)&param_2->V[2].field0_0x0 + 8);
    uStack_f8 = (undefined4)uVar1;
    uStack_f4 = (undefined4)((ulonglong)uVar1 >> 0x20);
    dVar3 = (param_3->field0_0x0)._s_0.Y;
    dVar20 = (param_4->field0_0x0)._s_0.Y;
  }
  dVar19 = (param_4->field0_0x0)._s_0.X;
  uVar16 = (undefined4)*(undefined8 *)&param_3->field0_0x0;
  uVar18 = (undefined4)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20);
  uVar1 = *(undefined8 *)&param_2->V[2].field0_0x0;
  local_100 = (undefined4)uVar1;
  uStack_fc = (undefined4)((ulonglong)uVar1 >> 0x20);
  uVar1 = *(undefined8 *)&param_2->V[1].field0_0x0;
  uVar23 = (undefined4)uVar1;
  uVar24 = (undefined4)((ulonglong)uVar1 >> 0x20);
LAB_1433ba2f0:
  local_130 = 0.0;
  dVar22 = dVar20 - dVar3;
  local_138 = dVar19 - (double)CONCAT44(uVar18,uVar16);
  local_148._s_0.X = (dVar19 + (double)CONCAT44(uVar18,uVar16)) * __real_3fe0000000000000;
  local_148._s_0.Y = (dVar20 + dVar3) * __real_3fe0000000000000;
  auVar21._0_8_ = dVar22 * dVar22 + local_138 * local_138;
  auVar21._8_8_ = 0;
  auVar21 = sqrtpd(auVar21,auVar21);
  local_128 = auVar21._0_8_;
  if (local_128 <= 0.0) {
    local_128 = 0.0;
    local_138 = 0.0;
  }
  else {
    local_138 = (__real_3ff0000000000000 / local_128) * local_138;
    local_130 = (__real_3ff0000000000000 / local_128) * dVar22;
  }
  local_128 = local_128 * __real_3fe0000000000000;
  local_f0 = 0;
  local_110 = CONCAT44(uVar24,uVar23);
  uStack_108 = CONCAT44(uVar26,uVar25);
  local_e8 = 0;
  bVar9 = TIntrSegment2Triangle2<double>::Find
                    ((TIntrSegment2Triangle2<double> *)&local_148._s_0,param_7);
  if (bVar9) {
    local_168 = local_e0;
    adStack_160[0] = dStack_d8;
    if (local_e8 == 2) {
      adStack_160[1] = (double)local_d0;
      adStack_160[2] = (double)uStack_c8;
    }
    else {
      uVar14 = 1;
    }
    local_178[0] = param_5;
    local_178[1] = param_6;
    if (cVar13 == '\0') {
      dVar8 = dVar8 / (param_1->Normal).field0_0x0._s_0.X;
      if (3 < uVar14) {
        pdVar11 = adStack_160;
        do {
          dVar20 = pdVar11[-1];
          dVar19 = *pdVar11;
          pTVar5 = local_178[lVar12];
          (pTVar5->field0_0x0)._s_0.X =
               ((param_1->Constant - dVar20 * (param_1->Normal).field0_0x0._s_0.Y) -
               dVar19 * (param_1->Normal).field0_0x0._s_0.Z) * dVar8;
          (pTVar5->field0_0x0)._s_0.Y = dVar20;
          (pTVar5->field0_0x0)._s_0.Z = dVar19;
          dVar20 = pdVar11[1];
          dVar19 = pdVar11[2];
          pTVar5 = local_178[lVar12 + 1];
          (pTVar5->field0_0x0)._s_0.X =
               ((param_1->Constant - dVar20 * (param_1->Normal).field0_0x0._s_0.Y) -
               dVar19 * (param_1->Normal).field0_0x0._s_0.Z) * dVar8;
          (pTVar5->field0_0x0)._s_0.Y = dVar20;
          (pTVar5->field0_0x0)._s_0.Z = dVar19;
          dVar20 = pdVar11[3];
          dVar19 = pdVar11[4];
          pdVar6 = (double *)(&local_168)[lVar12];
          *pdVar6 = ((param_1->Constant - dVar20 * (param_1->Normal).field0_0x0._s_0.Y) -
                    dVar19 * (param_1->Normal).field0_0x0._s_0.Z) * dVar8;
          pdVar6[1] = dVar20;
          pdVar6[2] = dVar19;
          dVar20 = pdVar11[5];
          dVar19 = pdVar11[6];
          pdVar11 = pdVar11 + 8;
          pdVar6 = (double *)adStack_160[lVar12];
          lVar12 = lVar12 + 4;
          *pdVar6 = ((param_1->Constant - dVar20 * (param_1->Normal).field0_0x0._s_0.Y) -
                    dVar19 * (param_1->Normal).field0_0x0._s_0.Z) * dVar8;
          pdVar6[1] = dVar20;
          pdVar6[2] = dVar19;
        } while (lVar12 < (longlong)(uVar14 - 3));
      }
      if (lVar12 < (longlong)uVar14) {
        pdVar11 = adStack_160 + lVar12 * 2;
        do {
          dVar20 = pdVar11[-1];
          dVar19 = *pdVar11;
          pdVar11 = pdVar11 + 2;
          pTVar5 = local_178[lVar12];
          lVar12 = lVar12 + 1;
          (pTVar5->field0_0x0)._s_0.X =
               ((param_1->Constant - dVar20 * (param_1->Normal).field0_0x0._s_0.Y) -
               dVar19 * (param_1->Normal).field0_0x0._s_0.Z) * dVar8;
          (pTVar5->field0_0x0)._s_0.Y = dVar20;
          (pTVar5->field0_0x0)._s_0.Z = dVar19;
        } while (lVar12 < (longlong)uVar14);
      }
    }
    else if (cVar13 == '\x01') {
      dVar8 = dVar8 / (param_1->Normal).field0_0x0._s_0.Y;
      if (3 < uVar14) {
        pdVar11 = adStack_160;
        do {
          dVar20 = pdVar11[-1];
          dVar19 = *pdVar11;
          dVar3 = (param_1->Normal).field0_0x0._s_0.X;
          pTVar5 = local_178[lVar12];
          dVar22 = (param_1->Normal).field0_0x0._s_0.Z;
          dVar4 = param_1->Constant;
          (pTVar5->field0_0x0)._s_0.X = dVar20;
          (pTVar5->field0_0x0)._s_0.Y = ((dVar4 - dVar20 * dVar3) - dVar19 * dVar22) * dVar8;
          (pTVar5->field0_0x0)._s_0.Z = dVar19;
          dVar20 = pdVar11[1];
          dVar19 = pdVar11[2];
          dVar3 = (param_1->Normal).field0_0x0._s_0.X;
          pTVar5 = local_178[lVar12 + 1];
          dVar22 = (param_1->Normal).field0_0x0._s_0.Z;
          dVar4 = param_1->Constant;
          (pTVar5->field0_0x0)._s_0.X = dVar20;
          (pTVar5->field0_0x0)._s_0.Y = ((dVar4 - dVar20 * dVar3) - dVar19 * dVar22) * dVar8;
          (pTVar5->field0_0x0)._s_0.Z = dVar19;
          dVar20 = pdVar11[3];
          dVar19 = pdVar11[4];
          dVar3 = (param_1->Normal).field0_0x0._s_0.X;
          pdVar6 = (double *)(&local_168)[lVar12];
          dVar22 = (param_1->Normal).field0_0x0._s_0.Z;
          dVar4 = param_1->Constant;
          *pdVar6 = dVar20;
          pdVar6[1] = ((dVar4 - dVar20 * dVar3) - dVar19 * dVar22) * dVar8;
          pdVar6[2] = dVar19;
          dVar20 = pdVar11[5];
          dVar19 = pdVar11[6];
          dVar3 = (param_1->Normal).field0_0x0._s_0.X;
          pdVar11 = pdVar11 + 8;
          pdVar6 = (double *)adStack_160[lVar12];
          dVar22 = param_1->Constant;
          lVar12 = lVar12 + 4;
          dVar4 = (param_1->Normal).field0_0x0._s_0.Z;
          *pdVar6 = dVar20;
          pdVar6[1] = ((dVar22 - dVar20 * dVar3) - dVar19 * dVar4) * dVar8;
          pdVar6[2] = dVar19;
        } while (lVar12 < (longlong)(uVar14 - 3));
      }
      if (lVar12 < (longlong)uVar14) {
        pdVar11 = adStack_160 + lVar12 * 2;
        do {
          dVar20 = pdVar11[-1];
          dVar19 = *pdVar11;
          dVar3 = (param_1->Normal).field0_0x0._s_0.X;
          pdVar11 = pdVar11 + 2;
          pTVar5 = local_178[lVar12];
          dVar22 = param_1->Constant;
          lVar12 = lVar12 + 1;
          dVar4 = (param_1->Normal).field0_0x0._s_0.Z;
          (pTVar5->field0_0x0)._s_0.X = dVar20;
          (pTVar5->field0_0x0)._s_0.Y = ((dVar22 - dVar20 * dVar3) - dVar19 * dVar4) * dVar8;
          (pTVar5->field0_0x0)._s_0.Z = dVar19;
        } while (lVar12 < (longlong)uVar14);
      }
    }
    else {
      dVar8 = dVar8 / (param_1->Normal).field0_0x0._s_0.Z;
      if (3 < uVar14) {
        pdVar11 = adStack_160;
        do {
          dVar20 = pdVar11[-1];
          dVar19 = *pdVar11;
          dVar3 = (param_1->Normal).field0_0x0._s_0.X;
          pTVar5 = local_178[lVar12];
          dVar22 = (param_1->Normal).field0_0x0._s_0.Y;
          dVar4 = param_1->Constant;
          (pTVar5->field0_0x0)._s_0.X = dVar20;
          (pTVar5->field0_0x0)._s_0.Y = dVar19;
          (pTVar5->field0_0x0)._s_0.Z = ((dVar4 - dVar20 * dVar3) - dVar19 * dVar22) * dVar8;
          dVar20 = pdVar11[1];
          dVar19 = pdVar11[2];
          dVar3 = (param_1->Normal).field0_0x0._s_0.X;
          pTVar5 = local_178[lVar12 + 1];
          dVar22 = (param_1->Normal).field0_0x0._s_0.Y;
          dVar4 = param_1->Constant;
          (pTVar5->field0_0x0)._s_0.X = dVar20;
          (pTVar5->field0_0x0)._s_0.Y = dVar19;
          (pTVar5->field0_0x0)._s_0.Z = ((dVar4 - dVar20 * dVar3) - dVar19 * dVar22) * dVar8;
          dVar20 = pdVar11[3];
          dVar19 = pdVar11[4];
          dVar3 = (param_1->Normal).field0_0x0._s_0.X;
          pdVar6 = (double *)(&local_168)[lVar12];
          dVar22 = (param_1->Normal).field0_0x0._s_0.Y;
          dVar4 = param_1->Constant;
          *pdVar6 = dVar20;
          pdVar6[1] = dVar19;
          pdVar6[2] = ((dVar4 - dVar20 * dVar3) - dVar19 * dVar22) * dVar8;
          dVar20 = pdVar11[5];
          dVar19 = pdVar11[6];
          dVar3 = (param_1->Normal).field0_0x0._s_0.X;
          pdVar11 = pdVar11 + 8;
          pdVar6 = (double *)adStack_160[lVar12];
          dVar22 = param_1->Constant;
          lVar12 = lVar12 + 4;
          dVar4 = (param_1->Normal).field0_0x0._s_0.Y;
          *pdVar6 = dVar20;
          pdVar6[1] = dVar19;
          pdVar6[2] = ((dVar22 - dVar20 * dVar3) - dVar19 * dVar4) * dVar8;
        } while (lVar12 < (longlong)(uVar14 - 3));
      }
      if (lVar12 < (longlong)uVar14) {
        pdVar11 = adStack_160 + lVar12 * 2;
        do {
          dVar20 = pdVar11[-1];
          dVar19 = *pdVar11;
          dVar3 = (param_1->Normal).field0_0x0._s_0.X;
          pdVar11 = pdVar11 + 2;
          pTVar5 = local_178[lVar12];
          dVar22 = param_1->Constant;
          lVar12 = lVar12 + 1;
          dVar4 = (param_1->Normal).field0_0x0._s_0.Y;
          (pTVar5->field0_0x0)._s_0.X = dVar20;
          (pTVar5->field0_0x0)._s_0.Y = dVar19;
          (pTVar5->field0_0x0)._s_0.Z = ((dVar22 - dVar20 * dVar3) - dVar19 * dVar4) * dVar8;
        } while (lVar12 < (longlong)uVar14);
      }
    }
    iVar10 = (int)uVar14;
  }
  else {
    iVar10 = 0;
  }
  return iVar10;
}

// Intersects @ 1433ba970

bool __cdecl
UE::Geometry::TIntrTriangle3Triangle3<double>::Intersects
          (TTriangle3<double> *param_1,TTriangle3<double> *param_2,double param_3)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TVector<double> *pTVar5;
  double *pdVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  TVector<double>_u_0 local_198;
  undefined1 local_178 [24];
  TVector<double>_u_0 local_160;
  double local_148;
  double local_140;
  double local_138;
  undefined1 local_128 [24];
  TVector<double>_u_0 local_110;
  double local_f8;
  double local_f0;
  double local_e8;
  
  dVar18 = param_1->V[0].field0_0x0._s_0.Y;
  local_178._8_8_ = param_1->V[1].field0_0x0._s_0.Y - dVar18;
  dVar15 = param_1->V[0].field0_0x0._s_0.X;
  local_178._0_8_ = param_1->V[1].field0_0x0._s_0.X - dVar15;
  dVar21 = param_1->V[0].field0_0x0._s_0.Z;
  local_160._s_0.Y = param_1->V[2].field0_0x0._s_0.Y - param_1->V[1].field0_0x0._s_0.Y;
  local_178._16_8_ = param_1->V[1].field0_0x0._s_0.Z - dVar21;
  local_148 = dVar15 - param_1->V[2].field0_0x0._s_0.X;
  local_160._s_0.X = param_1->V[2].field0_0x0._s_0.X - param_1->V[1].field0_0x0._s_0.X;
  local_138 = dVar21 - param_1->V[2].field0_0x0._s_0.Z;
  local_160._s_0.Z = param_1->V[2].field0_0x0._s_0.Z - param_1->V[1].field0_0x0._s_0.Z;
  local_140 = dVar18 - param_1->V[2].field0_0x0._s_0.Y;
  UnitCross<double>((TVector<double> *)&local_198._s_0,(TVector<double> *)local_178,
                    (TVector<double> *)&local_160._s_0);
  uVar4 = local_198._s_0.Z;
  uVar3 = local_198._s_0.Y;
  uVar2 = local_198._s_0.X;
  dVar25 = param_2->V[1].field0_0x0._s_0.X;
  dVar1 = param_2->V[1].field0_0x0._s_0.Z;
  dVar16 = param_2->V[0].field0_0x0._s_0.Z;
  local_f8 = param_2->V[0].field0_0x0._s_0.X;
  dVar14 = dVar18 * local_198._s_0.Y + dVar15 * local_198._s_0.X + dVar21 * local_198._s_0.Z;
  dVar22 = param_2->V[1].field0_0x0._s_0.Y * local_198._s_0.Y + dVar25 * local_198._s_0.X +
           dVar1 * local_198._s_0.Z;
  dVar17 = param_2->V[2].field0_0x0._s_0.Y * local_198._s_0.Y +
           param_2->V[2].field0_0x0._s_0.X * local_198._s_0.X +
           param_2->V[2].field0_0x0._s_0.Z * local_198._s_0.Z;
  local_f0 = param_2->V[0].field0_0x0._s_0.Y;
  dVar18 = local_f0 * local_198._s_0.Y + local_f8 * local_198._s_0.X + dVar16 * local_198._s_0.Z;
  dVar23 = dVar18;
  if ((dVar18 <= dVar22) && (dVar23 = dVar22, dVar22 <= dVar18)) {
    dVar23 = dVar18;
  }
  if (dVar22 <= dVar18) {
    dVar18 = dVar22;
  }
  dVar22 = dVar23;
  if ((dVar18 <= dVar17) && (dVar22 = dVar17, dVar17 <= dVar23)) {
    dVar22 = dVar23;
  }
  if (dVar17 <= dVar18) {
    dVar18 = dVar17;
  }
  if ((dVar18 - param_3 <= dVar14) && (dVar14 <= dVar22 + param_3)) {
    local_128._8_8_ = param_2->V[1].field0_0x0._s_0.Y - local_f0;
    local_128._0_8_ = dVar25 - local_f8;
    local_110._s_0.X = param_2->V[2].field0_0x0._s_0.X - dVar25;
    local_128._16_8_ = dVar1 - dVar16;
    local_110._s_0.Z = param_2->V[2].field0_0x0._s_0.Z - dVar1;
    local_110._s_0.Y = param_2->V[2].field0_0x0._s_0.Y - param_2->V[1].field0_0x0._s_0.Y;
    local_f0 = local_f0 - param_2->V[2].field0_0x0._s_0.Y;
    local_f8 = local_f8 - param_2->V[2].field0_0x0._s_0.X;
    local_e8 = dVar16 - param_2->V[2].field0_0x0._s_0.Z;
    UnitCross<double>((TVector<double> *)&local_198._s_0,(TVector<double> *)local_128,
                      (TVector<double> *)&local_110._s_0);
    dVar14 = local_198._s_0.Z * (double)uVar3 - local_198._s_0.Y * (double)uVar4;
    dVar18 = local_198._s_0.X * (double)uVar4 - local_198._s_0.Z * (double)uVar2;
    dVar23 = local_198._s_0.Y * (double)uVar2 - local_198._s_0.X * (double)uVar3;
    auVar12._0_8_ = dVar14 * dVar14;
    auVar12._8_8_ = 0;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = dVar18 * dVar18 + auVar12._0_8_ + dVar23 * dVar23;
    auVar13 = sqrtpd(auVar12,auVar13);
    if (auVar13._0_8_ <= 0.0) {
      dVar14 = 0.0;
      dVar18 = 0.0;
      dVar17 = 0.0;
    }
    else {
      dVar17 = __real_3ff0000000000000 / auVar13._0_8_;
      dVar14 = dVar14 * dVar17;
      dVar18 = dVar17 * dVar18;
      dVar17 = dVar17 * dVar23;
    }
    if (dVar18 * dVar18 + dVar14 * dVar14 + dVar17 * dVar17 < param_3) {
      lVar10 = 0;
      pdVar6 = (double *)(local_178 + 0x10);
      lVar7 = lVar10;
      do {
        dVar18 = (double)uVar3 * *pdVar6 - (double)uVar4 * pdVar6[-1];
        dVar25 = (double)uVar4 * pdVar6[-2] - (double)uVar2 * *pdVar6;
        dVar21 = (double)uVar2 * pdVar6[-1] - (double)uVar3 * pdVar6[-2];
        dVar15 = SQRT(dVar25 * dVar25 + dVar18 * dVar18 + dVar21 * dVar21);
        if (dVar15 <= 0.0) {
          dVar21 = 0.0;
          dVar25 = 0.0;
          dVar18 = 0.0;
        }
        else {
          dVar15 = __real_3ff0000000000000 / dVar15;
          dVar21 = dVar21 * dVar15;
          dVar25 = dVar25 * dVar15;
          dVar18 = dVar18 * dVar15;
        }
        dVar14 = param_1->V[1].field0_0x0._s_0.Y * dVar25 + param_1->V[1].field0_0x0._s_0.X * dVar18
                 + param_1->V[1].field0_0x0._s_0.Z * dVar21;
        dVar1 = param_1->V[2].field0_0x0._s_0.Y * dVar25 + param_1->V[2].field0_0x0._s_0.X * dVar18
                + param_1->V[2].field0_0x0._s_0.Z * dVar21;
        dVar15 = param_1->V[0].field0_0x0._s_0.Y * dVar25 + param_1->V[0].field0_0x0._s_0.X * dVar18
                 + param_1->V[0].field0_0x0._s_0.Z * dVar21;
        dVar16 = dVar15;
        if ((dVar15 <= dVar14) && (dVar16 = dVar14, dVar14 <= dVar15)) {
          dVar16 = dVar15;
        }
        if (dVar14 <= dVar15) {
          dVar15 = dVar14;
        }
        dVar14 = dVar16;
        if ((dVar15 <= dVar1) && (dVar14 = dVar1, dVar1 <= dVar16)) {
          dVar14 = dVar16;
        }
        if (dVar1 <= dVar15) {
          dVar15 = dVar1;
        }
        dVar1 = param_2->V[1].field0_0x0._s_0.Y * dVar25 + param_2->V[1].field0_0x0._s_0.X * dVar18
                + param_2->V[1].field0_0x0._s_0.Z * dVar21;
        dVar16 = param_2->V[2].field0_0x0._s_0.Y * dVar25 + param_2->V[2].field0_0x0._s_0.X * dVar18
                 + param_2->V[2].field0_0x0._s_0.Z * dVar21;
        dVar18 = param_2->V[0].field0_0x0._s_0.Y * dVar25 + param_2->V[0].field0_0x0._s_0.X * dVar18
                 + param_2->V[0].field0_0x0._s_0.Z * dVar21;
        dVar21 = dVar18;
        if ((dVar18 <= dVar1) && (dVar21 = dVar1, dVar1 <= dVar18)) {
          dVar21 = dVar18;
        }
        if (dVar18 <= dVar1) {
          dVar1 = dVar18;
        }
        dVar18 = dVar21;
        if ((dVar1 <= dVar16) && (dVar18 = dVar16, dVar16 <= dVar21)) {
          dVar18 = dVar21;
        }
        if (dVar1 <= dVar16) {
          dVar16 = dVar1;
        }
        if (dVar14 < dVar16 - param_3) {
          return false;
        }
        if (dVar18 < dVar15 - param_3) {
          return false;
        }
        lVar7 = lVar7 + 1;
        pdVar6 = pdVar6 + 3;
      } while (lVar7 < 3);
      pdVar6 = (double *)(local_128 + 0x10);
      while( true ) {
        dVar18 = local_198._s_0.Y * *pdVar6 - local_198._s_0.Z * pdVar6[-1];
        dVar25 = local_198._s_0.Z * pdVar6[-2] - local_198._s_0.X * *pdVar6;
        dVar21 = local_198._s_0.X * pdVar6[-1] - local_198._s_0.Y * pdVar6[-2];
        dVar15 = SQRT(dVar25 * dVar25 + dVar18 * dVar18 + dVar21 * dVar21);
        if (dVar15 <= 0.0) {
          dVar21 = 0.0;
          dVar25 = 0.0;
          dVar18 = 0.0;
        }
        else {
          dVar15 = __real_3ff0000000000000 / dVar15;
          dVar21 = dVar21 * dVar15;
          dVar25 = dVar25 * dVar15;
          dVar18 = dVar18 * dVar15;
        }
        dVar15 = dVar25 * param_1->V[1].field0_0x0._s_0.Y + dVar18 * param_1->V[1].field0_0x0._s_0.X
                 + dVar21 * param_1->V[1].field0_0x0._s_0.Z;
        dVar1 = param_1->V[2].field0_0x0._s_0.Y * dVar25 + param_1->V[2].field0_0x0._s_0.X * dVar18
                + param_1->V[2].field0_0x0._s_0.Z * dVar21;
        dVar14 = param_1->V[0].field0_0x0._s_0.Y * dVar25 + param_1->V[0].field0_0x0._s_0.X * dVar18
                 + param_1->V[0].field0_0x0._s_0.Z * dVar21;
        dVar16 = dVar14;
        if ((dVar14 <= dVar15) && (dVar16 = dVar15, dVar15 <= dVar14)) {
          dVar16 = dVar14;
        }
        if (dVar15 <= dVar14) {
          dVar14 = dVar15;
        }
        dVar15 = dVar16;
        if ((dVar14 <= dVar1) && (dVar15 = dVar1, dVar1 <= dVar16)) {
          dVar15 = dVar16;
        }
        if (dVar1 <= dVar14) {
          dVar14 = dVar1;
        }
        dVar16 = param_2->V[1].field0_0x0._s_0.Y * dVar25 + param_2->V[1].field0_0x0._s_0.X * dVar18
                 + param_2->V[1].field0_0x0._s_0.Z * dVar21;
        dVar1 = param_2->V[2].field0_0x0._s_0.Y * dVar25 + param_2->V[2].field0_0x0._s_0.X * dVar18
                + param_2->V[2].field0_0x0._s_0.Z * dVar21;
        dVar18 = param_2->V[0].field0_0x0._s_0.Y * dVar25 + param_2->V[0].field0_0x0._s_0.X * dVar18
                 + param_2->V[0].field0_0x0._s_0.Z * dVar21;
        dVar21 = dVar18;
        if ((dVar18 <= dVar16) && (dVar21 = dVar16, dVar16 <= dVar18)) {
          dVar21 = dVar18;
        }
        if (dVar16 <= dVar18) {
          dVar18 = dVar16;
        }
        dVar25 = dVar21;
        if ((dVar18 <= dVar1) && (dVar25 = dVar1, dVar1 <= dVar21)) {
          dVar25 = dVar21;
        }
        if (dVar1 <= dVar18) {
          dVar18 = dVar1;
        }
        if ((dVar15 < dVar18 - param_3) || (dVar25 < dVar14 - param_3)) break;
        lVar10 = lVar10 + 1;
        pdVar6 = pdVar6 + 3;
        if (2 < lVar10) {
          return true;
        }
      }
    }
    else {
      dVar18 = param_2->V[0].field0_0x0._s_0.Y;
      dVar14 = param_2->V[0].field0_0x0._s_0.X;
      dVar22 = local_198._s_0.Y * dVar18 + local_198._s_0.X * dVar14 + local_198._s_0.Z * dVar16;
      dVar17 = local_198._s_0.Y * param_1->V[1].field0_0x0._s_0.Y +
               local_198._s_0.X * param_1->V[1].field0_0x0._s_0.X +
               local_198._s_0.Z * param_1->V[1].field0_0x0._s_0.Z;
      dVar21 = local_198._s_0.Y * param_1->V[0].field0_0x0._s_0.Y + local_198._s_0.X * dVar15 +
               local_198._s_0.Z * dVar21;
      dVar15 = local_198._s_0.Y * param_1->V[2].field0_0x0._s_0.Y +
               local_198._s_0.X * param_1->V[2].field0_0x0._s_0.X +
               local_198._s_0.Z * param_1->V[2].field0_0x0._s_0.Z;
      dVar23 = dVar21;
      if ((dVar21 <= dVar17) && (dVar21 <= dVar17)) {
        dVar23 = dVar17;
      }
      if (dVar17 <= dVar21) {
        dVar21 = dVar17;
      }
      dVar17 = dVar23;
      if ((dVar21 <= dVar15) && (dVar17 = dVar15, dVar15 <= dVar23)) {
        dVar17 = dVar23;
      }
      if (dVar15 <= dVar21) {
        dVar21 = dVar15;
      }
      if ((dVar21 - param_3 <= dVar22) && (dVar22 <= dVar17 + param_3)) {
        iVar11 = 0;
        do {
          uVar9 = 0;
          do {
            pTVar5 = UnitCross<double>((TVector<double> *)&local_198._s_0,
                                       (TVector<double> *)(local_178 + uVar9 * 0x18),
                                       (TVector<double> *)(local_128 + (longlong)iVar11 * 0x18));
            dVar23 = (pTVar5->field0_0x0)._s_0.X;
            dVar17 = (pTVar5->field0_0x0)._s_0.Y;
            local_198._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
            dVar19 = dVar17 * param_1->V[1].field0_0x0._s_0.Y +
                     dVar23 * param_1->V[1].field0_0x0._s_0.X +
                     local_198._s_0.Z * param_1->V[1].field0_0x0._s_0.Z;
            dVar15 = param_1->V[2].field0_0x0._s_0.Y * dVar17 +
                     param_1->V[2].field0_0x0._s_0.X * dVar23 +
                     param_1->V[2].field0_0x0._s_0.Z * local_198._s_0.Z;
            dVar22 = param_1->V[0].field0_0x0._s_0.Y * dVar17 +
                     param_1->V[0].field0_0x0._s_0.X * dVar23 +
                     param_1->V[0].field0_0x0._s_0.Z * local_198._s_0.Z;
            dVar21 = dVar22;
            if ((dVar22 <= dVar19) && (dVar21 = dVar19, dVar19 <= dVar22)) {
              dVar21 = dVar22;
            }
            if (dVar19 <= dVar22) {
              dVar22 = dVar19;
            }
            dVar19 = dVar21;
            if ((dVar22 <= dVar15) && (dVar19 = dVar15, dVar15 <= dVar21)) {
              dVar19 = dVar21;
            }
            if (dVar15 <= dVar22) {
              dVar22 = dVar15;
            }
            dVar24 = param_2->V[1].field0_0x0._s_0.Y * dVar17 + dVar25 * dVar23 +
                     dVar1 * local_198._s_0.Z;
            dVar20 = param_2->V[2].field0_0x0._s_0.Y * dVar17 +
                     param_2->V[2].field0_0x0._s_0.X * dVar23 +
                     param_2->V[2].field0_0x0._s_0.Z * local_198._s_0.Z;
            dVar15 = dVar18 * dVar17 + dVar14 * dVar23 + dVar16 * local_198._s_0.Z;
            dVar21 = dVar15;
            if ((dVar15 <= dVar24) && (dVar21 = dVar24, dVar24 <= dVar15)) {
              dVar21 = dVar15;
            }
            if (dVar24 <= dVar15) {
              dVar15 = dVar24;
            }
            dVar23 = dVar21;
            if ((dVar15 <= dVar20) && (dVar23 = dVar20, dVar20 <= dVar21)) {
              dVar23 = dVar21;
            }
            if (dVar20 <= dVar15) {
              dVar15 = dVar20;
            }
            if (dVar19 < dVar15 - param_3) {
              return false;
            }
            if (dVar23 < dVar22 - param_3) {
              return false;
            }
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
          } while ((int)uVar8 < 3);
          iVar11 = iVar11 + 1;
          if (2 < iVar11) {
            return true;
          }
        } while( true );
      }
    }
  }
  return false;
}

// IntersectsSegment @ 1433bb440

bool __thiscall
UE::Geometry::TIntrTriangle3Triangle3<double>::IntersectsSegment
          (TIntrTriangle3Triangle3<double> *this,TPlane3<double> *param_1,
          TTriangle3<double> *param_2,TVector<double> *param_3,TVector<double> *param_4)

{
  int iVar1;
  
  iVar1 = IntersectTriangleWithCoplanarSegment
                    (param_1,param_2,param_3,param_4,this->Points,this->Points + 1,this->Tolerance);
  this->Quantity = iVar1;
  if (0 < iVar1) {
    this->Result = Intersects;
    this->Type = (iVar1 == 2) + Point;
    return true;
  }
  this->Result = NoIntersection;
  this->Type = Empty;
  return false;
}

// Test @ 1433d83d0

/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UE::Geometry::TIntrTriangle3Triangle3<double>::Test(TIntrTriangle3Triangle3<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  TVector<double> *pTVar9;
  double *pdVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  TVector<double>_u_0 local_198;
  double local_180;
  undefined1 local_178 [24];
  TVector<double>_u_0 local_160;
  double local_148;
  double local_140;
  double local_138;
  undefined1 local_128 [24];
  TVector<double>_u_0 local_110;
  double local_f8;
  double local_f0;
  double local_e8;
  undefined1 auVar24 [16];
  
  dVar1 = (this->Triangle0).V[1].field0_0x0._s_0.Y;
  dVar28 = (this->Triangle0).V[0].field0_0x0._s_0.X;
  local_178._0_8_ = (this->Triangle0).V[1].field0_0x0._s_0.X - dVar28;
  dVar31 = (this->Triangle0).V[0].field0_0x0._s_0.Y;
  local_178._8_8_ = dVar1 - dVar31;
  dVar16 = (this->Triangle0).V[0].field0_0x0._s_0.Z;
  local_178._16_8_ = (this->Triangle0).V[1].field0_0x0._s_0.Z - dVar16;
  local_160._s_0.Y = (this->Triangle0).V[2].field0_0x0._s_0.Y - dVar1;
  local_160._s_0.X =
       (this->Triangle0).V[2].field0_0x0._s_0.X - (this->Triangle0).V[1].field0_0x0._s_0.X;
  local_148 = dVar28 - (this->Triangle0).V[2].field0_0x0._s_0.X;
  local_160._s_0.Z =
       (this->Triangle0).V[2].field0_0x0._s_0.Z - (this->Triangle0).V[1].field0_0x0._s_0.Z;
  local_138 = dVar16 - (this->Triangle0).V[2].field0_0x0._s_0.Z;
  local_140 = dVar31 - (this->Triangle0).V[2].field0_0x0._s_0.Y;
  UnitCross<double>((TVector<double> *)&local_198._s_0,(TVector<double> *)local_178,
                    (TVector<double> *)&local_160._s_0);
  uVar8 = local_198._s_0.Z;
  uVar7 = local_198._s_0.Y;
  uVar6 = local_198._s_0.X;
  local_180 = (this->Triangle1).V[1].field0_0x0._s_0.X;
  dVar2 = (this->Triangle1).V[0].field0_0x0._s_0.Z;
  dVar3 = (this->Triangle1).V[1].field0_0x0._s_0.Z;
  dVar22 = local_198._s_0.Y * dVar31 + local_198._s_0.X * dVar28 + local_198._s_0.Z * dVar16;
  dVar29 = (this->Triangle1).V[1].field0_0x0._s_0.Y * local_198._s_0.Y +
           local_180 * local_198._s_0.X + dVar3 * local_198._s_0.Z;
  dVar25 = (this->Triangle1).V[2].field0_0x0._s_0.X * local_198._s_0.X +
           (this->Triangle1).V[2].field0_0x0._s_0.Y * local_198._s_0.Y +
           (this->Triangle1).V[2].field0_0x0._s_0.Z * local_198._s_0.Z;
  local_f8 = (this->Triangle1).V[0].field0_0x0._s_0.X;
  local_f0 = (this->Triangle1).V[0].field0_0x0._s_0.Y;
  dVar31 = local_f0 * local_198._s_0.Y + local_f8 * local_198._s_0.X + dVar2 * local_198._s_0.Z;
  dVar21 = dVar31;
  if ((dVar31 <= dVar29) && (dVar21 = dVar29, dVar29 <= dVar31)) {
    dVar21 = dVar31;
  }
  if (dVar29 <= dVar31) {
    dVar31 = dVar29;
  }
  dVar29 = dVar21;
  if ((dVar31 <= dVar25) && (dVar29 = dVar25, dVar25 <= dVar21)) {
    dVar29 = dVar21;
  }
  dVar21 = this->Tolerance;
  if (dVar25 <= dVar31) {
    dVar31 = dVar25;
  }
  if ((dVar31 - dVar21 <= dVar22) && (dVar22 <= dVar21 + dVar29)) {
    dVar31 = (this->Triangle1).V[2].field0_0x0._s_0.Y;
    local_128._8_8_ = (this->Triangle1).V[1].field0_0x0._s_0.Y - local_f0;
    dVar22 = (this->Triangle1).V[2].field0_0x0._s_0.Z;
    local_128._0_8_ = local_180 - local_f8;
    local_110._s_0.Y = dVar31 - (this->Triangle1).V[1].field0_0x0._s_0.Y;
    local_128._16_8_ = dVar3 - dVar2;
    local_f8 = local_f8 - (this->Triangle1).V[2].field0_0x0._s_0.X;
    local_110._s_0.X = (this->Triangle1).V[2].field0_0x0._s_0.X - local_180;
    local_e8 = dVar2 - dVar22;
    local_110._s_0.Z = dVar22 - dVar3;
    local_f0 = local_f0 - dVar31;
    UnitCross<double>((TVector<double> *)&local_198._s_0,(TVector<double> *)local_128,
                      (TVector<double> *)&local_110._s_0);
    dVar31 = local_180;
    dVar22 = local_198._s_0.Z * (double)uVar7 - local_198._s_0.Y * (double)uVar8;
    dVar25 = local_198._s_0.X * (double)uVar8 - local_198._s_0.Z * (double)uVar6;
    dVar29 = local_198._s_0.Y * (double)uVar6 - local_198._s_0.X * (double)uVar7;
    auVar17._0_8_ = dVar22 * dVar22;
    auVar17._8_8_ = 0;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar25 * dVar25 + auVar17._0_8_ + dVar29 * dVar29;
    auVar18 = sqrtpd(auVar17,auVar18);
    if (auVar18._0_8_ <= 0.0) {
      dVar23 = 0.0;
      dVar25 = 0.0;
      dVar20 = 0.0;
    }
    else {
      dVar20 = __real_3ff0000000000000 / auVar18._0_8_;
      dVar23 = dVar20 * dVar22;
      dVar25 = dVar20 * dVar25;
      dVar20 = dVar20 * dVar29;
    }
    if (dVar25 * dVar25 + dVar23 * dVar23 + dVar20 * dVar20 < dVar21) {
      if (this->bReportCoplanarIntersection != false) {
        lVar15 = 0;
        pdVar10 = (double *)(local_178 + 0x10);
        lVar11 = lVar15;
        do {
          auVar24._8_8_ = 0;
          auVar24._0_8_ = dVar22;
          dVar1 = (double)uVar7 * *pdVar10 - pdVar10[-1] * (double)uVar8;
          dVar28 = pdVar10[-1] * (double)uVar6 - pdVar10[-2] * (double)uVar7;
          dVar31 = pdVar10[-2] * (double)uVar8 - (double)uVar6 * *pdVar10;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = dVar31 * dVar31 + dVar1 * dVar1 + dVar28 * dVar28;
          auVar18 = sqrtpd(auVar24,auVar4);
          if (auVar18._0_8_ <= 0.0) {
            dVar28 = 0.0;
            dVar31 = 0.0;
            dVar1 = 0.0;
          }
          else {
            dVar16 = __real_3ff0000000000000 / auVar18._0_8_;
            dVar28 = dVar28 * dVar16;
            dVar31 = dVar31 * dVar16;
            dVar1 = dVar1 * dVar16;
          }
          dVar16 = (this->Triangle0).V[1].field0_0x0._s_0.Y * dVar31 +
                   (this->Triangle0).V[1].field0_0x0._s_0.X * dVar1 +
                   (this->Triangle0).V[1].field0_0x0._s_0.Z * dVar28;
          dVar2 = (this->Triangle0).V[2].field0_0x0._s_0.Y * dVar31 +
                  (this->Triangle0).V[2].field0_0x0._s_0.X * dVar1 +
                  (this->Triangle0).V[2].field0_0x0._s_0.Z * dVar28;
          dVar22 = dVar31 * (this->Triangle0).V[0].field0_0x0._s_0.Y +
                   dVar1 * (this->Triangle0).V[0].field0_0x0._s_0.X +
                   dVar28 * (this->Triangle0).V[0].field0_0x0._s_0.Z;
          dVar3 = dVar22;
          if ((dVar22 <= dVar16) && (dVar3 = dVar16, dVar16 <= dVar22)) {
            dVar3 = dVar22;
          }
          if (dVar16 <= dVar22) {
            dVar22 = dVar16;
          }
          dVar16 = dVar3;
          if ((dVar22 <= dVar2) && (dVar16 = dVar2, dVar2 <= dVar3)) {
            dVar16 = dVar3;
          }
          if (dVar2 <= dVar22) {
            dVar22 = dVar2;
          }
          dVar3 = (this->Triangle1).V[1].field0_0x0._s_0.Y * dVar31 +
                  (this->Triangle1).V[1].field0_0x0._s_0.X * dVar1 +
                  (this->Triangle1).V[1].field0_0x0._s_0.Z * dVar28;
          dVar2 = (this->Triangle1).V[2].field0_0x0._s_0.Y * dVar31 +
                  (this->Triangle1).V[2].field0_0x0._s_0.X * dVar1 +
                  (this->Triangle1).V[2].field0_0x0._s_0.Z * dVar28;
          dVar1 = (this->Triangle1).V[0].field0_0x0._s_0.Y * dVar31 +
                  (this->Triangle1).V[0].field0_0x0._s_0.X * dVar1 +
                  (this->Triangle1).V[0].field0_0x0._s_0.Z * dVar28;
          dVar28 = dVar1;
          if ((dVar1 <= dVar3) && (dVar28 = dVar3, dVar3 <= dVar1)) {
            dVar28 = dVar1;
          }
          if (dVar3 <= dVar1) {
            dVar1 = dVar3;
          }
          dVar31 = dVar28;
          if ((dVar1 <= dVar2) && (dVar31 = dVar2, dVar2 <= dVar28)) {
            dVar31 = dVar28;
          }
          if (dVar2 <= dVar1) {
            dVar1 = dVar2;
          }
          if (dVar16 < dVar1 - dVar21) {
            return false;
          }
          dVar22 = dVar22 - dVar21;
          if (dVar31 < dVar22) {
            return false;
          }
          lVar11 = lVar11 + 1;
          pdVar10 = pdVar10 + 3;
        } while (lVar11 < 3);
        pdVar10 = (double *)(local_128 + 0x10);
        while( true ) {
          dVar28 = *pdVar10 * local_198._s_0.Y - pdVar10[-1] * local_198._s_0.Z;
          dVar31 = pdVar10[-1] * local_198._s_0.X - pdVar10[-2] * local_198._s_0.Y;
          dVar1 = pdVar10[-2] * local_198._s_0.Z - *pdVar10 * local_198._s_0.X;
          auVar19._0_8_ = dVar1 * dVar1;
          auVar19._8_8_ = 0;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = dVar28 * dVar28 + auVar19._0_8_ + dVar31 * dVar31;
          auVar18 = sqrtpd(auVar19,auVar5);
          if (auVar18._0_8_ <= 0.0) {
            dVar31 = 0.0;
            dVar1 = 0.0;
            dVar16 = 0.0;
          }
          else {
            dVar16 = __real_3ff0000000000000 / auVar18._0_8_;
            dVar31 = dVar16 * dVar31;
            dVar1 = dVar16 * dVar1;
            dVar16 = dVar16 * dVar28;
          }
          dVar28 = (this->Triangle0).V[1].field0_0x0._s_0.X * dVar16 +
                   (this->Triangle0).V[1].field0_0x0._s_0.Y * dVar1 +
                   (this->Triangle0).V[1].field0_0x0._s_0.Z * dVar31;
          dVar2 = (this->Triangle0).V[2].field0_0x0._s_0.X * dVar16 +
                  (this->Triangle0).V[2].field0_0x0._s_0.Y * dVar1 +
                  (this->Triangle0).V[2].field0_0x0._s_0.Z * dVar31;
          dVar22 = dVar16 * (this->Triangle0).V[0].field0_0x0._s_0.X +
                   dVar1 * (this->Triangle0).V[0].field0_0x0._s_0.Y +
                   dVar31 * (this->Triangle0).V[0].field0_0x0._s_0.Z;
          dVar3 = dVar22;
          if ((dVar22 <= dVar28) && (dVar3 = dVar28, dVar28 <= dVar22)) {
            dVar3 = dVar22;
          }
          if (dVar28 <= dVar22) {
            dVar22 = dVar28;
          }
          dVar28 = dVar3;
          if ((dVar22 <= dVar2) && (dVar28 = dVar2, dVar2 <= dVar3)) {
            dVar28 = dVar3;
          }
          if (dVar2 <= dVar22) {
            dVar22 = dVar2;
          }
          dVar3 = (this->Triangle1).V[1].field0_0x0._s_0.X * dVar16 +
                  (this->Triangle1).V[1].field0_0x0._s_0.Y * dVar1 +
                  (this->Triangle1).V[1].field0_0x0._s_0.Z * dVar31;
          dVar2 = (this->Triangle1).V[2].field0_0x0._s_0.X * dVar16 +
                  (this->Triangle1).V[2].field0_0x0._s_0.Y * dVar1 +
                  (this->Triangle1).V[2].field0_0x0._s_0.Z * dVar31;
          dVar1 = (this->Triangle1).V[0].field0_0x0._s_0.X * dVar16 +
                  (this->Triangle1).V[0].field0_0x0._s_0.Y * dVar1 +
                  (this->Triangle1).V[0].field0_0x0._s_0.Z * dVar31;
          dVar31 = dVar1;
          if ((dVar1 <= dVar3) && (dVar31 = dVar3, dVar3 <= dVar1)) {
            dVar31 = dVar1;
          }
          if (dVar3 <= dVar1) {
            dVar1 = dVar3;
          }
          dVar16 = dVar31;
          if ((dVar1 <= dVar2) && (dVar16 = dVar2, dVar2 <= dVar31)) {
            dVar16 = dVar31;
          }
          if (dVar2 <= dVar1) {
            dVar1 = dVar2;
          }
          if ((dVar28 < dVar1 - dVar21) || (dVar16 < dVar22 - dVar21)) break;
          lVar15 = lVar15 + 1;
          pdVar10 = pdVar10 + 3;
          if (2 < lVar15) {
            this->Type = Plane;
            return true;
          }
        }
      }
    }
    else {
      dVar22 = (this->Triangle1).V[0].field0_0x0._s_0.Y;
      dVar25 = (this->Triangle1).V[0].field0_0x0._s_0.X;
      dVar29 = *(double *)((longlong)&(this->Triangle0).V[1].field0_0x0 + 8);
      uVar32 = SUB84(dVar29,0);
      uVar33 = (undefined4)((ulonglong)dVar29 >> 0x20);
      dVar20 = local_198._s_0.Y * dVar22 + local_198._s_0.X * dVar25 + local_198._s_0.Z * dVar2;
      dVar23 = local_198._s_0.Y * dVar29 +
               local_198._s_0.X * (this->Triangle0).V[1].field0_0x0._s_0.X +
               local_198._s_0.Z * (this->Triangle0).V[1].field0_0x0._s_0.Z;
      dVar16 = local_198._s_0.Y * (this->Triangle0).V[0].field0_0x0._s_0.Y +
               local_198._s_0.X * dVar28 + local_198._s_0.Z * dVar16;
      dVar28 = local_198._s_0.Y * (this->Triangle0).V[2].field0_0x0._s_0.Y +
               local_198._s_0.X * (this->Triangle0).V[2].field0_0x0._s_0.X +
               local_198._s_0.Z * (this->Triangle0).V[2].field0_0x0._s_0.Z;
      dVar29 = dVar16;
      if ((dVar16 <= dVar23) && (dVar29 = dVar23, dVar23 <= dVar16)) {
        dVar29 = dVar16;
      }
      if (dVar23 <= dVar16) {
        dVar16 = dVar23;
      }
      dVar23 = dVar29;
      if ((dVar16 <= dVar28) && (dVar23 = dVar28, dVar28 <= dVar29)) {
        dVar23 = dVar29;
      }
      if (dVar16 <= dVar28) {
        dVar28 = dVar16;
      }
      if ((dVar28 - dVar21 <= dVar20) && (dVar20 <= dVar21 + dVar23)) {
        iVar14 = 0;
        do {
          uVar13 = 0;
          do {
            pTVar9 = UnitCross<double>((TVector<double> *)&local_198._s_0,
                                       (TVector<double> *)(local_178 + uVar13 * 0x18),
                                       (TVector<double> *)(local_128 + (longlong)iVar14 * 0x18));
            dVar29 = (pTVar9->field0_0x0)._s_0.X;
            dVar23 = (pTVar9->field0_0x0)._s_0.Y;
            local_198._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
            dVar26 = (double)CONCAT44(uVar33,uVar32) * dVar23 +
                     (this->Triangle0).V[1].field0_0x0._s_0.X * dVar29 +
                     (this->Triangle0).V[1].field0_0x0._s_0.Z * local_198._s_0.Z;
            dVar28 = (this->Triangle0).V[2].field0_0x0._s_0.Y * dVar23 +
                     (this->Triangle0).V[2].field0_0x0._s_0.X * dVar29 +
                     (this->Triangle0).V[2].field0_0x0._s_0.Z * local_198._s_0.Z;
            dVar20 = dVar23 * (this->Triangle0).V[0].field0_0x0._s_0.Y +
                     dVar29 * (this->Triangle0).V[0].field0_0x0._s_0.X +
                     local_198._s_0.Z * (this->Triangle0).V[0].field0_0x0._s_0.Z;
            dVar16 = dVar20;
            if ((dVar20 <= dVar26) && (dVar16 = dVar26, dVar26 <= dVar20)) {
              dVar16 = dVar20;
            }
            if (dVar26 <= dVar20) {
              dVar20 = dVar26;
            }
            dVar26 = dVar16;
            if ((dVar20 <= dVar28) && (dVar26 = dVar28, dVar28 <= dVar16)) {
              dVar26 = dVar16;
            }
            if (dVar28 <= dVar20) {
              dVar20 = dVar28;
            }
            dVar30 = (this->Triangle1).V[1].field0_0x0._s_0.Y * dVar23 + dVar31 * dVar29 +
                     dVar3 * local_198._s_0.Z;
            dVar27 = (this->Triangle1).V[2].field0_0x0._s_0.X * dVar29 +
                     (this->Triangle1).V[2].field0_0x0._s_0.Y * dVar23 +
                     (this->Triangle1).V[2].field0_0x0._s_0.Z * local_198._s_0.Z;
            dVar28 = dVar22 * dVar23 + dVar25 * dVar29 + dVar2 * local_198._s_0.Z;
            dVar16 = dVar28;
            if ((dVar28 <= dVar30) && (dVar16 = dVar30, dVar30 <= dVar28)) {
              dVar16 = dVar28;
            }
            if (dVar30 <= dVar28) {
              dVar28 = dVar30;
            }
            dVar29 = dVar16;
            if ((dVar28 <= dVar27) && (dVar29 = dVar27, dVar27 <= dVar16)) {
              dVar29 = dVar16;
            }
            if (dVar27 <= dVar28) {
              dVar28 = dVar27;
            }
            if (dVar26 < dVar28 - dVar21) {
              return false;
            }
            if (dVar29 < dVar20 - dVar21) {
              return false;
            }
            uVar32 = SUB84(dVar1,0);
            uVar33 = (undefined4)((ulonglong)dVar1 >> 0x20);
            uVar12 = (int)uVar13 + 1;
            uVar13 = (ulonglong)uVar12;
          } while ((int)uVar12 < 3);
          iVar14 = iVar14 + 1;
          if (2 < iVar14) {
            this->Type = Unknown;
            return true;
          }
        } while( true );
      }
    }
  }
  return false;
}

