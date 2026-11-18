// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// Find @ 14339d200

bool __thiscall
UE::Geometry::TIntrSegment2Triangle2<double>::Find
          (TIntrSegment2Triangle2<double> *this,double param_1)

{
  TVector2<double> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  double *pdVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  FVector3i_u_0 local_e8;
  TVector2<double>_u_0 local_d8;
  TVector<double>_u_0 local_c8 [8];
  
  uVar25 = __xmm_80000000000000008000000000000000._4_4_;
  uVar23 = (uint)__xmm_80000000000000008000000000000000;
  uVar27 = SUB84(param_1,0);
  if (this->Result != NotComputed) {
    return this->Result == Intersects;
  }
  pdVar15 = &(this->Triangle).V[0].field0_0x0._s_0.Y;
  iVar14 = 0;
  uVar28 = (uint)((ulonglong)param_1 >> 0x20);
  if ((this->Segment).Extent == 0.0) {
    dVar2 = (this->Segment).Center.field0_0x0._s_0.X;
    lVar12 = 0x20;
    dVar3 = (this->Segment).Center.field0_0x0._s_0.Y;
    iVar16 = iVar14;
    iVar17 = iVar14;
    do {
      dVar4 = *pdVar15;
      dVar5 = ((TVector2<double>_u_0_s_0 *)(pdVar15 + -1))->X;
      dVar20 = dVar4 - *(double *)((longlong)&(this->Triangle).V[0].field0_0x0 + lVar12 + 8);
      dVar22 = *(double *)((longlong)&(this->Triangle).V[0].field0_0x0 + lVar12) - dVar5;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = dVar22 * dVar22 + dVar20 * dVar20;
      auVar19 = sqrtpd(in_XMM2,auVar19);
      if (auVar19._0_8_ <= 0.0) {
        iVar13 = iVar14 + 1;
        pTVar1 = (this->Triangle).V +
                 (iVar13 + (iVar13 / 3 + (iVar13 >> 0x1f) +
                           (int)(((longlong)iVar13 / 3 + ((longlong)iVar13 >> 0x3f) & 0xffffffffU)
                                >> 0x1f)) * -3);
        dVar20 = (pTVar1->field0_0x0)._s_0.X;
        dVar7 = (pTVar1->field0_0x0)._s_0.Y;
        dVar21 = dVar20 - dVar5;
        dVar22 = dVar7 - dVar4;
        dVar18 = SQRT(dVar22 * dVar22 + dVar21 * dVar21);
        if (dVar18 <= 0.0) {
          dVar3 = (this->Segment).Center.field0_0x0._s_0.Y - (this->Triangle).V[0].field0_0x0._s_0.Y
          ;
          dVar2 = dVar2 - (this->Triangle).V[0].field0_0x0._s_0.X;
          if (dVar3 * dVar3 + dVar2 * dVar2 <= param_1 * param_1) goto LAB_14339d4e1;
          goto LAB_14339d440;
        }
        dVar18 = __real_3ff0000000000000 / dVar18;
        dVar22 = dVar18 * dVar22;
        dVar18 = dVar18 * dVar21;
        dVar20 = (dVar3 - dVar7) * dVar22 + (dVar2 - dVar20) * dVar18;
        dVar20 = (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) ^
                                  __xmm_80000000000000008000000000000000._4_4_,
                                  SUB84(dVar20,0) ^ (uint)__xmm_80000000000000008000000000000000);
        if ((double)CONCAT44(uVar28 ^ __xmm_80000000000000008000000000000000._4_4_,
                             uVar27 ^ (uint)__xmm_80000000000000008000000000000000) <= dVar20) {
          if (param_1 < dVar20) {
            iVar17 = iVar17 + 1;
          }
        }
        else {
          iVar16 = iVar16 + 1;
        }
      }
      else {
        dVar18 = __real_3ff0000000000000 / auVar19._0_8_;
        dVar22 = dVar18 * dVar22;
        dVar18 = dVar18 * dVar20;
      }
      iVar14 = iVar14 + 1;
      in_XMM2._0_8_ = dVar18 * (dVar2 - dVar5) + dVar22 * (dVar3 - dVar4);
      in_XMM2._8_8_ = 0;
      if ((double)CONCAT44(uVar28 ^ __xmm_80000000000000008000000000000000._4_4_,
                           uVar27 ^ (uint)__xmm_80000000000000008000000000000000) <= in_XMM2._0_8_)
      {
        if (param_1 < in_XMM2._0_8_) {
          iVar17 = iVar17 + 1;
        }
      }
      else {
        iVar16 = iVar16 + 1;
      }
      lVar12 = (-0x30 - (longlong)this) + (longlong)pdVar15;
      pdVar15 = pdVar15 + 2;
    } while (iVar14 < 3);
    if ((iVar17 == 0) || (iVar16 == 0)) {
LAB_14339d4e1:
      dVar2 = (this->Segment).Center.field0_0x0._s_0.X;
      dVar3 = (this->Segment).Center.field0_0x0._s_0.Y;
      this->Type = Segment;
      this->Result = Intersects;
      (this->Point0).field0_0x0._s_0.X = dVar2;
      (this->Point0).field0_0x0._s_0.Y = dVar3;
      this->Quantity = 2;
      (this->Point1).field0_0x0._s_0.X = dVar2;
      (this->Point1).field0_0x0._s_0.Y = dVar3;
      this->Param0 = 0.0;
      this->Param1 = 0.0;
      return true;
    }
LAB_14339d440:
    this->Result = NoIntersection;
    this->Type = Empty;
    return false;
  }
  dVar2 = (this->Segment).Center.field0_0x0._s_0.Y;
  iVar16 = 0;
  dVar3 = (this->Segment).Center.field0_0x0._s_0.X;
  iVar17 = 0;
  dVar4 = (this->Segment).Direction.field0_0x0._s_0.X;
  dVar5 = (this->Segment).Direction.field0_0x0._s_0.Y;
  local_c8[0]._0_8_ =
       ((this->Triangle).V[0].field0_0x0._s_0.X - dVar3) * dVar5 - (*pdVar15 - dVar2) * dVar4;
  if ((double)local_c8[0]._0_8_ <= param_1) {
    if ((double)CONCAT44(uVar28 ^ __xmm_80000000000000008000000000000000._4_4_,
                         uVar27 ^ (uint)__xmm_80000000000000008000000000000000) <=
        (double)local_c8[0]._0_8_) {
      local_c8[0]._s_0.X = 0.0;
      local_e8._s_0.X = 0;
    }
    else {
      local_e8._s_0.X = -1;
      iVar17 = 1;
      iVar16 = iVar14;
    }
  }
  else {
    local_e8._s_0.X = 1;
    iVar16 = 1;
    iVar17 = iVar14;
  }
  dVar22 = (double)CONCAT44(uVar28 ^ __xmm_80000000000000008000000000000000._4_4_,
                            uVar27 ^ (uint)__xmm_80000000000000008000000000000000);
  local_c8[0]._8_8_ =
       ((this->Triangle).V[1].field0_0x0._s_0.X - dVar3) * dVar5 -
       ((this->Triangle).V[1].field0_0x0._s_0.Y - dVar2) * dVar4;
  if ((double)local_c8[0]._8_8_ <= param_1) {
    if (dVar22 <= (double)local_c8[0]._8_8_) {
      local_c8[0]._s_0.Y = 0.0;
      local_e8._s_0.Y = 0;
    }
    else {
      local_e8._s_0.Y = -1;
      iVar17 = iVar17 + 1;
    }
  }
  else {
    local_e8._s_0.Y = 1;
    iVar16 = iVar16 + 1;
  }
  local_c8[0]._16_8_ =
       ((this->Triangle).V[2].field0_0x0._s_0.X - dVar3) * dVar5 -
       ((this->Triangle).V[2].field0_0x0._s_0.Y - dVar2) * dVar4;
  if ((double)local_c8[0]._16_8_ <= param_1) {
    if (dVar22 <= (double)local_c8[0]._16_8_) {
      local_c8[0]._s_0.Z = 0.0;
      local_e8._s_0.Z = 0;
    }
    else {
      local_e8._s_0.Z = -1;
      iVar17 = iVar17 + 1;
    }
  }
  else {
    local_e8._s_0.Z = 1;
    iVar16 = iVar16 + 1;
  }
  if ((iVar16 == 3) || (iVar17 == 3)) {
    this->Quantity = 0;
    this->Type = Empty;
    goto LAB_14339d815;
  }
  TIntrLine2Triangle2<double>::GetInterval
            ((TVector2<double> *)this,&(this->Segment).Direction,&this->Triangle,
             (TVector<double> *)&local_c8[0]._s_0,(FVector3i *)&local_e8._s_0,
             (TVector2<double> *)&local_d8._s_0);
  dVar2 = (this->Segment).Extent;
  uVar30 = (uint)((ulonglong)dVar2 >> 0x20);
  uVar29 = (uint)((ulonglong)local_d8._0_8_ >> 0x20);
  uVar23 = SUB84(dVar2,0) ^ uVar23;
  uVar25 = uVar30 ^ uVar25;
  uVar27 = SUB84(local_d8._s_0.Y,0);
  uVar28 = (uint)((ulonglong)local_d8._8_8_ >> 0x20);
  if ((local_d8._s_0.Y < local_d8._s_0.X) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("u0 <= u1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Intersection\\Intersector1.h"
                          ,0x2e,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  if ((dVar2 <= (double)CONCAT44(uVar25,uVar23) && (double)CONCAT44(uVar25,uVar23) != dVar2) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("v0 <= v1",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Intersection\\Intersector1.h"
                          ,0x2f,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar11 = (*pcVar6)();
    return (bool)uVar11;
  }
  if ((local_d8._s_0.Y < (double)CONCAT44(uVar25,uVar23)) || (dVar2 < local_d8._s_0.X)) {
    this->Quantity = 0;
LAB_14339d808:
    this->Type = Empty;
  }
  else {
    if (local_d8._s_0.Y < (double)CONCAT44(uVar25,uVar23) ||
        local_d8._s_0.Y == (double)CONCAT44(uVar25,uVar23)) {
      this->Quantity = 1;
      uVar24 = uVar27;
      uVar26 = uVar28;
    }
    else {
      uVar24 = SUB84(local_d8._s_0.X,0);
      uVar26 = uVar29;
      uVar8 = 0;
      uVar9 = 0;
      if (dVar2 <= local_d8._s_0.X) {
LAB_14339d74a:
        uVar28 = uVar9;
        uVar27 = uVar8;
        iVar14 = 1;
      }
      else {
        uVar24 = uVar23;
        uVar26 = uVar25;
        if ((double)CONCAT44(uVar25,uVar23) <= local_d8._s_0.X) {
          uVar24 = SUB84(local_d8._s_0.X,0);
          uVar26 = uVar29;
        }
        if (dVar2 < local_d8._s_0.Y) {
          uVar27 = SUB84(dVar2,0);
          uVar28 = uVar30;
        }
        iVar14 = 2;
        uVar8 = uVar27;
        uVar9 = uVar28;
        if ((double)CONCAT44(uVar26,uVar24) == (double)CONCAT44(uVar28,uVar27)) goto LAB_14339d74a;
      }
      this->Quantity = iVar14;
      if (iVar14 == 2) {
        this->Param0 = (double)CONCAT44(uVar26,uVar24);
        this->Type = Segment;
        dVar2 = (this->Segment).Direction.field0_0x0._s_0.Y;
        dVar3 = (this->Segment).Center.field0_0x0._s_0.Y;
        (this->Point0).field0_0x0._s_0.X =
             (double)CONCAT44(uVar26,uVar24) * (this->Segment).Direction.field0_0x0._s_0.X +
             (this->Segment).Center.field0_0x0._s_0.X;
        (this->Point0).field0_0x0._s_0.Y = (double)CONCAT44(uVar26,uVar24) * dVar2 + dVar3;
        this->Param1 = (double)CONCAT44(uVar28,uVar27);
        dVar2 = (this->Segment).Direction.field0_0x0._s_0.Y;
        dVar3 = (this->Segment).Center.field0_0x0._s_0.Y;
        (this->Point1).field0_0x0._s_0.X =
             (double)CONCAT44(uVar28,uVar27) * (this->Segment).Direction.field0_0x0._s_0.X +
             (this->Segment).Center.field0_0x0._s_0.X;
        (this->Point1).field0_0x0._s_0.Y = (double)CONCAT44(uVar28,uVar27) * dVar2 + dVar3;
        goto LAB_14339d815;
      }
      if (iVar14 != 1) goto LAB_14339d808;
    }
    this->Param0 = (double)CONCAT44(uVar26,uVar24);
    this->Type = Point;
    dVar2 = (this->Segment).Direction.field0_0x0._s_0.Y;
    dVar3 = (this->Segment).Center.field0_0x0._s_0.Y;
    (this->Point0).field0_0x0._s_0.X =
         (double)CONCAT44(uVar26,uVar24) * (this->Segment).Direction.field0_0x0._s_0.X +
         (this->Segment).Center.field0_0x0._s_0.X;
    (this->Point0).field0_0x0._s_0.Y = (double)CONCAT44(uVar26,uVar24) * dVar2 + dVar3;
  }
LAB_14339d815:
  this->Result = NoIntersection - (this->Type != Empty);
  return this->Type != Empty;
}

