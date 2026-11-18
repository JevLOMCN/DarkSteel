// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// ComputeResult @ 14caf7850

double __thiscall UE::Geometry::TDistLine3Ray3<double>::ComputeResult(TDistLine3Ray3<double> *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  double dVar14;
  uint uVar15;
  double dVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  uint uVar20;
  uint uVar21;
  
  if (0.0 <= this->DistanceSquared) {
    return this->DistanceSquared;
  }
  dVar1 = (this->Line).Origin.field0_0x0._s_0.Y;
  dVar2 = (this->Line).Direction.field0_0x0._s_0.Z;
  dVar3 = (this->Ray).Direction.field0_0x0._s_0.X;
  dVar14 = (this->Ray).Direction.field0_0x0._s_0.Y;
  dVar9 = (this->Line).Origin.field0_0x0._s_0.X - (this->Ray).Origin.field0_0x0._s_0.X;
  uVar15 = (uint)__xmm_80000000000000008000000000000000;
  uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar4 = (this->Line).Direction.field0_0x0._s_0.X;
  dVar5 = (this->Line).Direction.field0_0x0._s_0.Y;
  dVar6 = (this->Ray).Direction.field0_0x0._s_0.Z;
  dVar7 = (this->Line).Origin.field0_0x0._s_0.Z;
  dVar10 = dVar1 - (this->Ray).Origin.field0_0x0._s_0.Y;
  dVar18 = dVar7 - (this->Ray).Origin.field0_0x0._s_0.Z;
  dVar19 = dVar5 * dVar14 + dVar4 * dVar3 + dVar2 * dVar6;
  dVar11 = dVar5 * dVar10 + dVar4 * dVar9;
  uVar20 = SUB84(dVar19,0) ^ uVar15;
  uVar21 = (uint)((ulonglong)dVar19 >> 0x20) ^ uVar17;
  dVar19 = dVar2 * dVar18 + dVar11;
  dVar16 = __real_3ff0000000000000 -
           (double)CONCAT44(uVar21,uVar20) * (double)CONCAT44(uVar21,uVar20);
  uVar12 = SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = (uint)((ulonglong)dVar16 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar13,uVar12)) {
    dVar14 = dVar3 * dVar9 + dVar14 * dVar10 + dVar6 * dVar18;
    dVar3 = dVar19 * (double)CONCAT44(uVar21,uVar20) + dVar14;
    if (0.0 <= dVar3) {
      dVar6 = __real_3ff0000000000000 / (double)CONCAT44(uVar13,uVar12);
      dVar16 = ((double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^ uVar17,SUB84(dVar14,0) ^ uVar15
                                ) * (double)CONCAT44(uVar21,uVar20) - dVar19) * dVar6;
      dVar6 = dVar6 * dVar3;
      dVar19 = ((dVar18 + dVar18) * dVar2 + dVar11 + dVar11 +
               dVar6 * (double)CONCAT44(uVar21,uVar20) + dVar16) * dVar16 +
               ((dVar16 * (double)CONCAT44(uVar21,uVar20) + dVar6) - (dVar14 + dVar14)) * dVar6;
      goto LAB_14caf7a62;
    }
  }
  dVar6 = 0.0;
  uVar15 = SUB84(dVar19,0) ^ uVar15;
  uVar17 = (uint)((ulonglong)dVar19 >> 0x20) ^ uVar17;
  dVar16 = (double)CONCAT44(uVar17,uVar15);
  dVar19 = (double)CONCAT44(uVar17,uVar15) * dVar19;
LAB_14caf7a62:
  dVar3 = dVar18 * dVar18 + dVar19 + dVar10 * dVar10 + dVar9 * dVar9;
  (this->LineClosestPoint).field0_0x0._s_0.X =
       dVar4 * dVar16 + (this->Line).Origin.field0_0x0._s_0.X;
  (this->LineClosestPoint).field0_0x0._s_0.Y = dVar5 * dVar16 + dVar1;
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  (this->LineClosestPoint).field0_0x0._s_0.Z = dVar2 * dVar16 + dVar7;
  dVar2 = (this->Ray).Direction.field0_0x0._s_0.Y;
  dVar14 = (this->Ray).Direction.field0_0x0._s_0.Z;
  dVar4 = (this->Ray).Origin.field0_0x0._s_0.Y;
  dVar1 = (this->Ray).Origin.field0_0x0._s_0.Z;
  (this->RayClosestPoint).field0_0x0._s_0.X =
       dVar6 * (this->Ray).Direction.field0_0x0._s_0.X + (this->Ray).Origin.field0_0x0._s_0.X;
  dVar1 = dVar6 * dVar14 + dVar1;
  auVar8._8_4_ = SUB84(dVar1,0);
  auVar8._0_8_ = dVar6 * dVar2 + dVar4;
  auVar8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->RayClosestPoint).field0_0x0 + 8) = auVar8;
  this->RayParameter = dVar6;
  this->DistanceSquared = dVar3;
  this->LineParameter = dVar16;
  return dVar3;
}

