// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// ClipSegment @ 14caf4aa0

EClipSegmentType __thiscall
UE::Geometry::TPlane3<double>::ClipSegment
          (TPlane3<double> *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  EClipSegmentType EVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  double dVar13;
  uint uVar15;
  double dVar14;
  
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (this->Normal).field0_0x0._s_0.X;
  dVar9 = (param_2->field0_0x0)._s_0.X;
  dVar11 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  dVar14 = (this->Normal).field0_0x0._s_0.Y;
  dVar3 = (this->Normal).field0_0x0._s_0.Z;
  dVar13 = (dVar14 * dVar5 + dVar1 * (param_1->field0_0x0)._s_0.X +
           dVar3 * (param_1->field0_0x0)._s_0.Z) - this->Constant;
  dVar8 = (dVar11 * dVar14 + dVar9 * dVar1 + dVar2 * dVar3) - this->Constant;
  if ((0.0 < dVar13) || (0.0 < dVar8)) {
    if (dVar8 * dVar13 <= 0.0) {
      dVar9 = dVar9 - (param_1->field0_0x0)._s_0.X;
      dVar2 = dVar2 - (param_1->field0_0x0)._s_0.Z;
      dVar11 = dVar11 - dVar5;
      auVar6._0_8_ = dVar9 * dVar9;
      auVar6._8_8_ = 0;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar11 * dVar11 + auVar6._0_8_ + dVar2 * dVar2;
      auVar7 = sqrtpd(auVar6,auVar7);
      if (auVar7._0_8_ <= 0.0) {
        dVar5 = 0.0;
        dVar10 = 0.0;
        dVar8 = 0.0;
      }
      else {
        dVar8 = __real_3ff0000000000000 / auVar7._0_8_;
        dVar5 = dVar8 * dVar9;
        dVar10 = dVar8 * dVar11;
        dVar8 = dVar8 * dVar2;
      }
      dVar1 = dVar1 * dVar5 + dVar14 * dVar10 + dVar3 * dVar8;
      if (__real_3e45798ee2308c3a <=
          (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        uVar12 = SUB84(dVar13 / dVar1,0) ^ (uint)__xmm_80000000000000008000000000000000;
        uVar15 = (uint)((ulonglong)(dVar13 / dVar1) >> 0x20) ^
                 __xmm_80000000000000008000000000000000._4_4_;
        dVar14 = (double)CONCAT44(uVar15,uVar12);
        if ((0.0 < dVar14) && (dVar14 < dVar5 * dVar9 + dVar10 * dVar11 + dVar8 * dVar2)) {
          dVar11 = dVar10 * dVar14 + (param_1->field0_0x0)._s_0.Y;
          dVar5 = (double)CONCAT44(uVar15,uVar12) * dVar5 + (param_1->field0_0x0)._s_0.X;
          dVar9 = dVar8 * dVar14 + (param_1->field0_0x0)._s_0.Z;
          if (dVar1 < 0.0) {
            (param_2->field0_0x0)._s_0.X = dVar5;
            (param_2->field0_0x0)._s_0.Y = dVar11;
            (param_2->field0_0x0)._s_0.Z = dVar9;
            return SecondClipped;
          }
          (param_1->field0_0x0)._s_0.X = dVar5;
          (param_1->field0_0x0)._s_0.Y = dVar11;
          (param_1->field0_0x0)._s_0.Z = dVar9;
          return FirstClipped;
        }
      }
    }
    EVar4 = NotClipped;
  }
  else {
    EVar4 = FullyClipped;
  }
  return EVar4;
}

