// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// ComputeResult @ 14c724620

double __thiscall
UE::Geometry::TDistLine3Line3<double>::ComputeResult(TDistLine3Line3<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  double dVar13;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar14;
  
  dVar20 = this->DistanceSquared;
  if (dVar20 < 0.0) {
    dVar19 = (this->Line1).Direction.field0_0x0._s_0.X;
    dVar1 = (this->Line1).Direction.field0_0x0._s_0.Y;
    dVar20 = (this->Line2).Direction.field0_0x0._s_0.X;
    dVar2 = (this->Line2).Origin.field0_0x0._s_0.X;
    dVar3 = (this->Line1).Origin.field0_0x0._s_0.Y;
    dVar4 = (this->Line1).Origin.field0_0x0._s_0.Z;
    dVar10 = dVar4 - (this->Line2).Origin.field0_0x0._s_0.Z;
    dVar5 = (this->Line1).Origin.field0_0x0._s_0.X;
    dVar11 = dVar3 - (this->Line2).Origin.field0_0x0._s_0.Y;
    dVar9 = dVar5 - dVar2;
    dVar6 = (this->Line1).Direction.field0_0x0._s_0.Z;
    dVar13 = dVar1 * (this->Line2).Direction.field0_0x0._s_0.Y + dVar19 * dVar20 +
             dVar6 * (this->Line2).Direction.field0_0x0._s_0.Z;
    dVar16 = dVar1 * dVar11 + dVar19 * dVar9;
    uVar12 = SUB84(dVar13,0) ^ (uint)__xmm_80000000000000008000000000000000;
    uVar15 = (uint)((ulonglong)dVar13 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    dVar14 = (double)CONCAT44(uVar15,uVar12);
    dVar13 = dVar6 * dVar10 + dVar16;
    dVar17 = __real_3ff0000000000000 - (double)CONCAT44(uVar15,uVar12) * dVar14;
    dVar17 = (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    bVar7 = dVar17 < __real_3e45798ee2308c3a;
    if (bVar7) {
      dVar1 = (this->Line1).Origin.field0_0x0._s_0.X;
      dVar13 = (this->Line1).Origin.field0_0x0._s_0.Y;
      this->Line1Parameter = 0.0;
      dVar19 = (this->Line1).Origin.field0_0x0._s_0.Z;
      (this->Line1ClosestPoint).field0_0x0._s_0.X = dVar1;
      (this->Line1ClosestPoint).field0_0x0._s_0.Y = dVar13;
      (this->Line1ClosestPoint).field0_0x0._s_0.Z = dVar19;
      dVar19 = (dVar3 - (this->Line2).Origin.field0_0x0._s_0.Y) *
               (this->Line2).Direction.field0_0x0._s_0.Y + dVar20 * dVar9 +
               (dVar4 - (this->Line2).Origin.field0_0x0._s_0.Z) *
               (this->Line2).Direction.field0_0x0._s_0.Z;
      this->Line2Parameter = dVar19;
      dVar13 = dVar19 * (this->Line2).Direction.field0_0x0._s_0.Y +
               (this->Line2).Origin.field0_0x0._s_0.Y;
      dVar1 = dVar19 * (this->Line2).Direction.field0_0x0._s_0.Z +
              (this->Line2).Origin.field0_0x0._s_0.Z;
      (this->Line2ClosestPoint).field0_0x0._s_0.X = dVar20 * dVar19 + dVar2;
      (this->Line2ClosestPoint).field0_0x0._s_0.Y = dVar13;
      (this->Line2ClosestPoint).field0_0x0._s_0.Z = dVar1;
      dVar20 = (this->Line2ClosestPoint).field0_0x0._s_0.X;
      dVar19 = (dVar13 - dVar3) * (this->Line1).Direction.field0_0x0._s_0.Y +
               (dVar20 - dVar5) * (this->Line1).Direction.field0_0x0._s_0.X +
               (dVar1 - dVar4) * dVar6;
      dVar13 = (dVar19 * (this->Line1).Direction.field0_0x0._s_0.Y + dVar3) - dVar13;
      dVar20 = (dVar19 * (this->Line1).Direction.field0_0x0._s_0.X + dVar5) - dVar20;
      dVar1 = (dVar19 * dVar6 + dVar4) - dVar1;
      dVar20 = dVar13 * dVar13 + dVar20 * dVar20 + dVar1 * dVar1;
    }
    else {
      dVar20 = dVar20 * dVar9 + (this->Line2).Direction.field0_0x0._s_0.Y * dVar11 +
               (this->Line2).Direction.field0_0x0._s_0.Z * dVar10;
      uVar12 = SUB84(dVar20,0) ^ (uint)__xmm_80000000000000008000000000000000;
      uVar15 = (uint)((ulonglong)dVar20 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
      dVar18 = ((double)CONCAT44(uVar15,uVar12) * dVar14 - dVar13) *
               (__real_3ff0000000000000 / dVar17);
      dVar2 = (dVar13 * dVar14 + dVar20) * (__real_3ff0000000000000 / dVar17);
      dVar20 = ((dVar10 + dVar10) * dVar6 + dVar16 + dVar16 + dVar2 * dVar14 + dVar18) * dVar18 +
               (dVar18 * dVar14 + dVar2 +
               (double)CONCAT44(uVar15,uVar12) + (double)CONCAT44(uVar15,uVar12)) * dVar2 +
               dVar9 * dVar9 + dVar11 * dVar11 + dVar10 * dVar10;
      (this->Line1ClosestPoint).field0_0x0._s_0.X = dVar19 * dVar18 + dVar5;
      (this->Line1ClosestPoint).field0_0x0._s_0.Y = dVar1 * dVar18 + dVar3;
      (this->Line1ClosestPoint).field0_0x0._s_0.Z = dVar6 * dVar18 + dVar4;
      dVar1 = (this->Line2).Direction.field0_0x0._s_0.Y;
      dVar3 = (this->Line2).Origin.field0_0x0._s_0.Y;
      dVar19 = dVar2 * (this->Line2).Direction.field0_0x0._s_0.Z +
               (this->Line2).Origin.field0_0x0._s_0.Z;
      (this->Line2ClosestPoint).field0_0x0._s_0.X =
           dVar2 * (this->Line2).Direction.field0_0x0._s_0.X +
           (this->Line2).Origin.field0_0x0._s_0.X;
      auVar8._8_4_ = SUB84(dVar19,0);
      auVar8._0_8_ = dVar2 * dVar1 + dVar3;
      auVar8._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(this->Line2ClosestPoint).field0_0x0 + 8) = auVar8;
      this->Line1Parameter = dVar18;
      this->Line2Parameter = dVar2;
    }
    this->bIsParallel = bVar7;
    if (dVar20 <= 0.0) {
      dVar20 = 0.0;
    }
    this->DistanceSquared = dVar20;
  }
  return dVar20;
}

