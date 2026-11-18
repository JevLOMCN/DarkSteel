// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// ComputeResult @ 1433914a0

double __thiscall
UE::Geometry::TDistLine3Segment3<double>::ComputeResult(TDistLine3Segment3<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  uint uVar16;
  uint uVar17;
  uint uVar20;
  double dVar18;
  double dVar19;
  uint uVar21;
  double dVar22;
  double dVar23;
  uint uVar24;
  uint uVar25;
  
  if (0.0 <= this->DistanceSquared) {
    return this->DistanceSquared;
  }
  dVar1 = (this->Line).Origin.field0_0x0._s_0.Y;
  dVar18 = (this->Segment).Direction.field0_0x0._s_0.Y;
  dVar9 = (this->Line).Origin.field0_0x0._s_0.X - (this->Segment).Center.field0_0x0._s_0.X;
  dVar23 = (this->Segment).Direction.field0_0x0._s_0.Z;
  dVar2 = (this->Segment).Direction.field0_0x0._s_0.X;
  dVar3 = (this->Line).Direction.field0_0x0._s_0.Z;
  dVar4 = (this->Line).Origin.field0_0x0._s_0.Z;
  dVar11 = dVar1 - (this->Segment).Center.field0_0x0._s_0.Y;
  dVar22 = dVar4 - (this->Segment).Center.field0_0x0._s_0.Z;
  dVar5 = (this->Line).Direction.field0_0x0._s_0.X;
  dVar6 = (this->Line).Direction.field0_0x0._s_0.Y;
  dVar10 = dVar6 * dVar18 + dVar5 * dVar2 + dVar3 * dVar23;
  uVar17 = (uint)__xmm_80000000000000008000000000000000;
  uVar24 = SUB84(dVar10,0) ^ uVar17;
  uVar21 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar25 = (uint)((ulonglong)dVar10 >> 0x20) ^ uVar21;
  dVar8 = dVar6 * dVar11 + dVar5 * dVar9;
  dVar15 = dVar3 * dVar22 + dVar8;
  dVar10 = __real_3ff0000000000000 -
           (double)CONCAT44(uVar25,uVar24) * (double)CONCAT44(uVar25,uVar24);
  uVar13 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar14 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar10 = (double)CONCAT44(uVar14,uVar13);
  if ((double)CONCAT44(uVar14,uVar13) < __real_3e45798ee2308c3a) {
    dVar10 = 0.0;
    uVar17 = SUB84(dVar15,0) ^ uVar17;
    uVar21 = (uint)((ulonglong)dVar15 >> 0x20) ^ uVar21;
    dVar18 = (double)CONCAT44(uVar21,uVar17);
    dVar23 = (double)CONCAT44(uVar21,uVar17) * dVar15;
  }
  else {
    dVar19 = (this->Segment).Extent;
    uVar13 = SUB84(dVar19,0);
    uVar14 = (uint)((ulonglong)dVar19 >> 0x20);
    dVar12 = dVar19 * dVar10;
    dVar23 = dVar2 * dVar9 + dVar18 * dVar11 + dVar23 * dVar22;
    uVar16 = SUB84(dVar23,0) ^ uVar17;
    uVar20 = (uint)((ulonglong)dVar23 >> 0x20) ^ uVar21;
    dVar18 = (double)CONCAT44(uVar20,uVar16);
    dVar23 = dVar15 * (double)CONCAT44(uVar25,uVar24) + dVar23;
    dVar2 = (double)CONCAT44(uVar20,uVar16) + dVar18;
    if (dVar23 < (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar21,
                                  SUB84(dVar12,0) ^ uVar17)) {
      uVar13 = uVar13 ^ uVar17;
      uVar14 = uVar14 ^ uVar21;
      dVar19 = (double)CONCAT44(uVar14,uVar13);
      dVar23 = ((double)CONCAT44(uVar14,uVar13) + dVar2) * (double)CONCAT44(uVar14,uVar13);
    }
    else {
      if (dVar23 <= dVar12) {
        dVar10 = __real_3ff0000000000000 / dVar10;
        dVar18 = (dVar18 * (double)CONCAT44(uVar25,uVar24) - dVar15) * dVar10;
        dVar10 = dVar10 * dVar23;
        dVar23 = ((dVar22 + dVar22) * dVar3 + dVar8 + dVar8 +
                 dVar10 * (double)CONCAT44(uVar25,uVar24) + dVar18) * dVar18 +
                 (dVar18 * (double)CONCAT44(uVar25,uVar24) + dVar10 + dVar2) * dVar10;
        goto LAB_143391730;
      }
      dVar23 = (dVar2 + dVar19) * dVar19;
    }
    dVar10 = (double)CONCAT44(uVar14,uVar13);
    dVar15 = dVar19 * (double)CONCAT44(uVar25,uVar24) + dVar15;
    uVar17 = SUB84(dVar15,0) ^ uVar17;
    uVar21 = (uint)((ulonglong)dVar15 >> 0x20) ^ uVar21;
    dVar18 = (double)CONCAT44(uVar21,uVar17);
    dVar23 = dVar23 - (double)CONCAT44(uVar21,uVar17) * dVar18;
  }
LAB_143391730:
  dVar23 = dVar22 * dVar22 + dVar23 + dVar11 * dVar11 + dVar9 * dVar9;
  (this->LineClosest).field0_0x0._s_0.X = dVar5 * dVar18 + (this->Line).Origin.field0_0x0._s_0.X;
  (this->LineClosest).field0_0x0._s_0.Y = dVar6 * dVar18 + dVar1;
  if (dVar23 <= 0.0) {
    dVar23 = 0.0;
  }
  (this->LineClosest).field0_0x0._s_0.Z = dVar3 * dVar18 + dVar4;
  dVar2 = (this->Segment).Direction.field0_0x0._s_0.Y;
  dVar3 = (this->Segment).Direction.field0_0x0._s_0.Z;
  dVar4 = (this->Segment).Center.field0_0x0._s_0.Y;
  dVar1 = (this->Segment).Center.field0_0x0._s_0.Z;
  (this->SegmentClosest).field0_0x0._s_0.X =
       dVar10 * (this->Segment).Direction.field0_0x0._s_0.X +
       (this->Segment).Center.field0_0x0._s_0.X;
  dVar1 = dVar10 * dVar3 + dVar1;
  auVar7._8_4_ = SUB84(dVar1,0);
  auVar7._0_8_ = dVar10 * dVar2 + dVar4;
  auVar7._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->SegmentClosest).field0_0x0 + 8) = auVar7;
  this->SegmentParameter = dVar10;
  this->DistanceSquared = dVar23;
  this->LineParameter = dVar18;
  return dVar23;
}

