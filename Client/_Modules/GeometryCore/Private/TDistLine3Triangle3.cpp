// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// ComputeResult @ 143391820

double __thiscall
UE::Geometry::TDistLine3Triangle3<double>::ComputeResult(TDistLine3Triangle3<double> *this)

{
  double dVar1;
  double dVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  bool bVar16;
  longlong lVar17;
  double *pdVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  TVector<double>_u_0 TStack_1e8;
  double local_1d0;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  TVector<double>_u_0 local_198;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double dStack_f8;
  double local_f0;
  
  dVar2 = __real_3ff0000000000000;
  dVar1 = this->DistanceSquared;
  uVar23 = SUB84(dVar1,0);
  uVar24 = (undefined4)((ulonglong)dVar1 >> 0x20);
  if (dVar1 < 0.0) {
    dVar1 = (this->Triangle).V[0].field0_0x0._s_0.X;
    dVar29 = (this->Triangle).V[0].field0_0x0._s_0.Y;
    dVar25 = (this->Triangle).V[1].field0_0x0._s_0.Y - dVar29;
    dVar10 = (this->Triangle).V[1].field0_0x0._s_0.Z - (this->Triangle).V[0].field0_0x0._s_0.Z;
    dVar11 = (this->Triangle).V[1].field0_0x0._s_0.X - dVar1;
    dVar12 = (this->Triangle).V[2].field0_0x0._s_0.Y - dVar29;
    dVar13 = (this->Triangle).V[2].field0_0x0._s_0.Z - (this->Triangle).V[0].field0_0x0._s_0.Z;
    dVar14 = (this->Triangle).V[2].field0_0x0._s_0.X - dVar1;
    dVar30 = dVar13 * dVar25 - dVar12 * dVar10;
    dVar28 = dVar14 * dVar10 - dVar13 * dVar11;
    dVar32 = dVar12 * dVar11 - dVar14 * dVar25;
    auVar26._0_8_ = dVar32 * dVar32;
    auVar26._8_8_ = 0;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = dVar28 * dVar28 + dVar30 * dVar30 + auVar26._0_8_;
    auVar27 = sqrtpd(auVar26,auVar27);
    if (auVar27._0_8_ <= 0.0) {
      dVar32 = 0.0;
      dVar28 = 0.0;
      dVar30 = 0.0;
    }
    else {
      dVar4 = __real_3ff0000000000000 / auVar27._0_8_;
      dVar30 = dVar30 * dVar4;
      dVar28 = dVar28 * dVar4;
      dVar32 = dVar32 * dVar4;
    }
    dVar4 = (this->Line).Direction.field0_0x0._s_0.X;
    dVar28 = dVar28 * (this->Line).Direction.field0_0x0._s_0.Y + dVar30 * dVar4 +
             dVar32 * (this->Line).Direction.field0_0x0._s_0.Z;
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar28 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar28,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar28 = (this->Line).Origin.field0_0x0._s_0.X;
      dVar1 = dVar28 - dVar1;
      dVar30 = (this->Line).Origin.field0_0x0._s_0.Y;
      dVar29 = dVar30 - dVar29;
      dVar32 = (this->Line).Origin.field0_0x0._s_0.Z;
      dVar5 = dVar32 - (this->Triangle).V[0].field0_0x0._s_0.Z;
      VectorUtil::MakePerpVectors<double>
                (&(this->Line).Direction,(TVector<double> *)&local_1c8._s_0,
                 (TVector<double> *)&local_1b0._s_0);
      dVar9 = dVar11 * local_1c8._s_0.X + dVar25 * local_1c8._s_0.Y + local_1c8._s_0.Z * dVar10;
      dVar33 = dVar14 * local_1c8._s_0.X + dVar12 * local_1c8._s_0.Y + dVar13 * local_1c8._s_0.Z;
      dVar8 = local_1c8._s_0.Y * dVar29 + local_1c8._s_0.X * dVar1 + local_1c8._s_0.Z * dVar5;
      dVar31 = dVar11 * local_1b0._s_0.X + dVar25 * local_1b0._s_0.Y + local_1b0._s_0.Z * dVar10;
      dVar6 = dVar14 * local_1b0._s_0.X + dVar12 * local_1b0._s_0.Y + dVar13 * local_1b0._s_0.Z;
      dVar7 = local_1b0._s_0.Y * dVar29 + local_1b0._s_0.X * dVar1 + local_1b0._s_0.Z * dVar5;
      dVar34 = dVar2 / (dVar6 * dVar9 - dVar31 * dVar33);
      dVar33 = (dVar6 * dVar8 - dVar7 * dVar33) * dVar34;
      dVar34 = (dVar7 * dVar9 - dVar31 * dVar8) * dVar34;
      dVar6 = (dVar2 - dVar33) - dVar34;
      if (((0.0 <= dVar6) && (0.0 <= dVar33)) && (0.0 <= dVar34)) {
        dVar2 = (this->Line).Direction.field0_0x0._s_0.Y;
        dVar7 = (this->Line).Direction.field0_0x0._s_0.Z;
        dVar29 = ((dVar4 * dVar14 + dVar2 * dVar12 + dVar7 * dVar13) * dVar34 +
                 (dVar4 * dVar11 + dVar2 * dVar25 + dVar7 * dVar10) * dVar33) -
                 (dVar4 * dVar1 + dVar2 * dVar29 + dVar7 * dVar5);
        this->LineParam = dVar29;
        (this->TriangleBaryCoords).field0_0x0._s_0.X = dVar6;
        (this->TriangleBaryCoords).field0_0x0._s_0.Y = dVar33;
        (this->TriangleBaryCoords).field0_0x0._s_0.Z = dVar34;
        dVar1 = (this->Line).Direction.field0_0x0._s_0.Z;
        dVar2 = (this->Line).Direction.field0_0x0._s_0.Y;
        (this->LineClosest).field0_0x0._s_0.X = dVar29 * dVar4 + dVar28;
        (this->LineClosest).field0_0x0._s_0.Y = dVar29 * dVar2 + dVar30;
        (this->LineClosest).field0_0x0._s_0.Z = dVar29 * dVar1 + dVar32;
        uVar23 = 0;
        uVar24 = 0;
        dVar1 = (this->Triangle).V[0].field0_0x0._s_0.Y;
        dVar2 = (this->Triangle).V[0].field0_0x0._s_0.Z;
        (this->TriangleClosest).field0_0x0._s_0.X =
             dVar11 * dVar33 + (this->Triangle).V[0].field0_0x0._s_0.X + dVar14 * dVar34;
        (this->TriangleClosest).field0_0x0._s_0.Y = dVar25 * dVar33 + dVar1 + dVar12 * dVar34;
        (this->TriangleClosest).field0_0x0._s_0.Z = dVar10 * dVar33 + dVar2 + dVar13 * dVar34;
        this->DistanceSquared = 0.0;
        goto LAB_143391fbd;
      }
    }
    uVar15 = __real_bff0000000000000;
    dVar1 = __real_3fe0000000000000;
    uVar23 = (undefined4)__real_7fefffffffffffff;
    uVar24 = (undefined4)((ulonglong)__real_7fefffffffffffff >> 0x20);
    pdVar18 = &(this->Triangle).V[0].field0_0x0._s_0.Y;
    lVar17 = 0x30;
    lVar22 = 3;
    lVar20 = 3;
    lVar19 = 2;
    lVar21 = 0;
    do {
      dVar29 = ((TVector<double>_u_0_s_0 *)(pdVar18 + -1))->X;
      dVar25 = *pdVar18;
      dVar10 = *(double *)((longlong)&(this->Triangle).V[0].field0_0x0 + lVar17);
      dVar11 = pdVar18[1];
      dVar12 = *(double *)((longlong)&(this->Triangle).V[0].field0_0x0 + lVar17 + 8);
      TStack_1e8._s_0.X = dVar29 - *(double *)((longlong)&(this->Triangle).V[0].field0_0x0 + lVar17)
      ;
      TStack_1e8._s_0.Y =
           dVar25 - *(double *)((longlong)&(this->Triangle).V[0].field0_0x0 + lVar17 + 8);
      local_1d0 = 0.0;
      dVar13 = *(double *)((longlong)&(this->Triangle).V[0].field0_0x0 + lVar17 + 0x10);
      TStack_1e8._s_0.Z =
           dVar11 - *(double *)((longlong)&(this->Triangle).V[0].field0_0x0 + lVar17 + 0x10);
      dVar14 = Normalize<double>((TVector<double> *)&TStack_1e8._s_0,0.0);
      local_198._s_0.X = (this->Line).Origin.field0_0x0._s_0.X;
      local_198._s_0.Y = (this->Line).Origin.field0_0x0._s_0.Y;
      local_198._s_0.Z = (this->Line).Origin.field0_0x0._s_0.Z;
      dStack_180 = (this->Line).Direction.field0_0x0._s_0.X;
      local_178 = (this->Line).Direction.field0_0x0._s_0.Y;
      dStack_170 = (this->Line).Direction.field0_0x0._s_0.Z;
      dVar14 = dVar14 * dVar1;
      dStack_150 = TStack_1e8._s_0.X;
      local_130 = uVar15;
      local_148 = TStack_1e8._s_0.Y;
      dStack_140 = TStack_1e8._s_0.Z;
      local_1d0 = dVar14;
      local_168 = (dVar29 + dVar10) * dVar1;
      dStack_160 = (dVar25 + dVar12) * dVar1;
      local_158 = (dVar11 + dVar13) * dVar1;
      local_138 = dVar14;
      dVar29 = TDistLine3Segment3<double>::ComputeResult
                         ((TDistLine3Segment3<double> *)&local_198._s_0);
      if (dVar29 < (double)CONCAT44(uVar24,uVar23)) {
        this->LineParam = local_128;
        (this->LineClosest).field0_0x0._s_0.X = local_118;
        (this->LineClosest).field0_0x0._s_0.Y = dStack_110;
        (this->LineClosest).field0_0x0._s_0.Z = local_108;
        (this->TriangleClosest).field0_0x0._s_0.X = local_100;
        (this->TriangleClosest).field0_0x0._s_0.Y = dStack_f8;
        (this->TriangleClosest).field0_0x0._s_0.Z = local_f0;
        dVar25 = (dVar2 - local_120 / dVar14) * dVar1;
        *(double *)((longlong)(&this->Triangle + 1) + (lVar19 + 8) * 8) = dVar25;
        *(double *)((longlong)(&this->Triangle + 1) + (lVar21 + 8) * 8) = dVar2 - dVar25;
        if ((2 < (ulonglong)(lVar22 - lVar19)) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                ,0x7a2,L""), bVar16)) {
          pcVar3 = (code *)swi(3);
          dVar1 = (double)(*pcVar3)();
          return dVar1;
        }
        *(undefined8 *)((longlong)this + (lVar22 - lVar19) * 8 + 0xb8) = 0;
        uVar23 = SUB84(dVar29,0);
        uVar24 = (int)((ulonglong)dVar29 >> 0x20);
      }
      lVar17 = (-0x38 - (longlong)this) + (longlong)pdVar18;
      pdVar18 = pdVar18 + 3;
      lVar22 = lVar22 + -1;
      lVar20 = lVar20 + -1;
      lVar19 = lVar21;
      lVar21 = lVar21 + 1;
    } while (lVar20 != 0);
    this->DistanceSquared = (double)CONCAT44(uVar24,uVar23);
  }
LAB_143391fbd:
  return (double)CONCAT44(uVar24,uVar23);
}

