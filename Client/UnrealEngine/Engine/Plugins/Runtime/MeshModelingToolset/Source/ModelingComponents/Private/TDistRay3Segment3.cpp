// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// ComputeResult @ 14caf7b50

double __thiscall
UE::Geometry::TDistRay3Segment3<double>::ComputeResult(TDistRay3Segment3<double> *this)

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
  double dVar13;
  double dVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  uint uVar19;
  double dVar18;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  
  if (0.0 <= this->DistanceSquared) {
    return this->DistanceSquared;
  }
  dVar1 = (this->Ray).Origin.field0_0x0._s_0.Y;
  dVar14 = (this->Segment).Direction.field0_0x0._s_0.X;
  dVar18 = (this->Segment).Direction.field0_0x0._s_0.Z;
  dVar8 = dVar1 - (this->Segment).Center.field0_0x0._s_0.Y;
  dVar2 = (this->Segment).Direction.field0_0x0._s_0.Y;
  dVar3 = (this->Ray).Origin.field0_0x0._s_0.Z;
  dVar13 = dVar3 - (this->Segment).Center.field0_0x0._s_0.Z;
  dVar4 = (this->Ray).Direction.field0_0x0._s_0.X;
  dVar9 = (this->Ray).Origin.field0_0x0._s_0.X - (this->Segment).Center.field0_0x0._s_0.X;
  dVar5 = (this->Ray).Direction.field0_0x0._s_0.Z;
  dVar6 = (this->Ray).Direction.field0_0x0._s_0.Y;
  dVar17 = dVar6 * dVar2 + dVar4 * dVar14 + dVar5 * dVar18;
  uVar15 = (uint)__xmm_80000000000000008000000000000000;
  uVar19 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar10 = dVar6 * dVar8 + dVar4 * dVar9;
  uVar24 = SUB84(dVar17,0) ^ uVar15;
  uVar25 = (uint)((ulonglong)dVar17 >> 0x20) ^ uVar19;
  dVar2 = dVar2 * dVar8 + dVar14 * dVar9 + dVar18 * dVar13;
  dVar17 = dVar5 * dVar13 + dVar10;
  dVar18 = __real_3ff0000000000000 -
           (double)CONCAT44(uVar25,uVar24) * (double)CONCAT44(uVar25,uVar24);
  dVar14 = (this->Segment).Extent;
  uVar28 = SUB84(dVar18,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar29 = (uint)((ulonglong)dVar18 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar20 = SUB84(dVar14,0);
  uVar21 = (uint)((ulonglong)dVar14 >> 0x20);
  dVar18 = dVar14;
  if ((double)CONCAT44(uVar29,uVar28) < __real_3e45798ee2308c3a) {
    if (0.0 <= (double)CONCAT44(uVar25,uVar24) && (double)CONCAT44(uVar25,uVar24) != 0.0) {
      dVar18 = (double)CONCAT44(uVar21 ^ uVar19,uVar20 ^ uVar15);
    }
    dVar17 = dVar18 * (double)CONCAT44(uVar25,uVar24) + dVar17;
    dVar14 = (dVar18 - (dVar2 + dVar2)) * dVar18;
    uVar15 = SUB84(dVar17,0) ^ uVar15;
    uVar19 = (uint)((ulonglong)dVar17 >> 0x20) ^ uVar19;
    dVar16 = (double)CONCAT44(uVar19,uVar15);
    if (dVar16 <= 0.0) {
      dVar16 = 0.0;
    }
    else {
      dVar14 = dVar14 - (double)CONCAT44(uVar19,uVar15) * dVar16;
    }
    goto LAB_14caf7eef;
  }
  dVar12 = dVar14 * (double)CONCAT44(uVar29,uVar28);
  dVar16 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ uVar19,SUB84(dVar2,0) ^ uVar15) *
           (double)CONCAT44(uVar25,uVar24) - dVar17;
  uVar26 = SUB84(dVar12,0) ^ uVar15;
  uVar27 = (uint)((ulonglong)dVar12 >> 0x20) ^ uVar19;
  dVar11 = dVar17 * (double)CONCAT44(uVar25,uVar24) + dVar2;
  if (dVar16 < 0.0) {
    if ((double)CONCAT44(uVar27,uVar26) <= dVar11 && dVar11 != (double)CONCAT44(uVar27,uVar26)) {
      if ((dVar12 < dVar11) &&
         (dVar17 = dVar14 * (double)CONCAT44(uVar25,uVar24) + dVar17,
         dVar16 = (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^ uVar19,
                                   SUB84(dVar17,0) ^ uVar15), 0.0 < dVar16)) {
        dVar14 = (dVar14 - (dVar2 + dVar2)) * dVar14;
        goto LAB_14caf7e64;
      }
    }
    else {
      uVar28 = uVar20 ^ uVar15;
      uVar29 = uVar21 ^ uVar19;
      dVar18 = (double)CONCAT44(uVar29,uVar28);
      dVar16 = dVar14 * (double)CONCAT44(uVar25,uVar24) - dVar17;
      if (0.0 < dVar16) {
        dVar14 = ((double)CONCAT44(uVar29,uVar28) - (dVar2 + dVar2)) *
                 (double)CONCAT44(uVar29,uVar28) - dVar16 * dVar16;
        goto LAB_14caf7eef;
      }
    }
    dVar16 = 0.0;
    dVar18 = (double)CONCAT44(uVar21 ^ uVar19,uVar20 ^ uVar15);
    if (((double)CONCAT44(uVar21 ^ uVar19,uVar20 ^ uVar15) <= dVar2) &&
       (dVar18 = dVar14, dVar2 <= dVar14)) {
      dVar18 = dVar2;
    }
    dVar14 = (dVar18 - (dVar2 + dVar2)) * dVar18;
  }
  else {
    uVar22 = SUB84(dVar2 + dVar2,0) ^ uVar15;
    uVar23 = (uint)((ulonglong)(dVar2 + dVar2) >> 0x20) ^ uVar19;
    if (dVar11 < (double)CONCAT44(uVar27,uVar26)) {
      uVar20 = uVar20 ^ uVar15;
      uVar21 = uVar21 ^ uVar19;
      dVar18 = (double)CONCAT44(uVar21,uVar20);
      dVar17 = dVar18 * (double)CONCAT44(uVar25,uVar24) + dVar17;
      dVar14 = ((double)CONCAT44(uVar21,uVar20) + (double)CONCAT44(uVar23,uVar22)) *
               (double)CONCAT44(uVar21,uVar20);
      dVar16 = (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) ^ uVar19,SUB84(dVar17,0) ^ uVar15)
      ;
      if (0.0 < dVar16) {
LAB_14caf7e64:
        dVar14 = dVar14 - dVar16 * dVar16;
        goto LAB_14caf7eef;
      }
    }
    else {
      if (dVar11 <= dVar12) {
        dVar18 = __real_3ff0000000000000 / (double)CONCAT44(uVar29,uVar28);
        dVar16 = dVar16 * dVar18;
        dVar18 = dVar18 * dVar11;
        dVar14 = ((dVar13 + dVar13) * dVar5 + dVar10 + dVar10 +
                 dVar18 * (double)CONCAT44(uVar25,uVar24) + dVar16) * dVar16 +
                 (dVar16 * (double)CONCAT44(uVar25,uVar24) + dVar18 +
                 (double)CONCAT44(uVar23,uVar22)) * dVar18;
        goto LAB_14caf7eef;
      }
      dVar17 = dVar14 * (double)CONCAT44(uVar25,uVar24) + dVar17;
      dVar14 = (dVar14 + (double)CONCAT44(uVar23,uVar22)) * dVar14;
      uVar15 = SUB84(dVar17,0) ^ uVar15;
      uVar19 = (uint)((ulonglong)dVar17 >> 0x20) ^ uVar19;
      dVar16 = (double)CONCAT44(uVar19,uVar15);
      if (0.0 < dVar16) {
        dVar14 = dVar14 - (double)CONCAT44(uVar19,uVar15) * dVar16;
        goto LAB_14caf7eef;
      }
    }
    dVar16 = 0.0;
  }
LAB_14caf7eef:
  (this->RayClosestPoint).field0_0x0._s_0.X = dVar4 * dVar16 + (this->Ray).Origin.field0_0x0._s_0.X;
  (this->RayClosestPoint).field0_0x0._s_0.Y = dVar6 * dVar16 + dVar1;
  (this->RayClosestPoint).field0_0x0._s_0.Z = dVar5 * dVar16 + dVar3;
  dVar2 = (this->Segment).Direction.field0_0x0._s_0.Y;
  dVar3 = (this->Segment).Direction.field0_0x0._s_0.Z;
  dVar4 = (this->Segment).Center.field0_0x0._s_0.Y;
  dVar1 = (this->Segment).Center.field0_0x0._s_0.Z;
  (this->SegmentClosestPoint).field0_0x0._s_0.X =
       dVar18 * (this->Segment).Direction.field0_0x0._s_0.X +
       (this->Segment).Center.field0_0x0._s_0.X;
  dVar1 = dVar18 * dVar3 + dVar1;
  dVar14 = dVar9 * dVar9 + dVar8 * dVar8 + dVar13 * dVar13 + dVar14;
  auVar7._8_4_ = SUB84(dVar1,0);
  auVar7._0_8_ = dVar18 * dVar2 + dVar4;
  auVar7._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->SegmentClosestPoint).field0_0x0 + 8) = auVar7;
  if (dVar14 <= 0.0) {
    dVar14 = 0.0;
  }
  this->DistanceSquared = dVar14;
  this->SegmentParameter = dVar18;
  this->RayParameter = dVar16;
  return dVar14;
}

