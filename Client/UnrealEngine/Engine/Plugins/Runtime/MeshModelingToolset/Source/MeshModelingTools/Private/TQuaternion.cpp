// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// TQuaternion<double> @ 14ccb9940

TQuaternion<double> * __thiscall
UE::Geometry::TQuaternion<double>::TQuaternion<double>
          (TQuaternion<double> *this,TQuaternion<double> *param_1,TQuaternion<double> *param_2,
          double param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar8 = __real_3ff0000000000000;
  (this->field0_0x0)._s_0.Z = 0.0;
  (this->field0_0x0)._s_0.Y = 0.0;
  (this->field0_0x0)._s_0.X = 0.0;
  (this->field0_0x0)._s_0.W = 1.0;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar5 = (param_1->field0_0x0)._s_0.W;
  auVar1 = *(undefined1 (*) [16])((longlong)&param_2->field0_0x0 + 0x10);
  dVar7 = (param_2->field0_0x0)._s_0.X;
  dVar6 = (param_2->field0_0x0)._s_0.Y;
  dVar14 = SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3 + dVar5 * dVar5);
  if (dVar14 <= 0.0) {
    dVar5 = 0.0;
    dVar3 = 0.0;
    dVar4 = 0.0;
    dVar2 = 0.0;
  }
  else {
    dVar14 = dVar8 / dVar14;
    dVar2 = dVar2 * dVar14;
    dVar4 = dVar4 * dVar14;
    dVar3 = dVar3 * dVar14;
    dVar5 = dVar5 * dVar14;
  }
  dVar14 = auVar1._0_8_;
  dVar13 = auVar1._8_8_;
  dVar15 = SQRT(dVar13 * dVar13 + dVar14 * dVar14 + dVar6 * dVar6 + dVar7 * dVar7);
  if (dVar15 <= 0.0) {
    dVar13 = 0.0;
    dVar14 = 0.0;
    dVar6 = 0.0;
    dVar7 = 0.0;
  }
  else {
    dVar15 = dVar8 / dVar15;
    dVar7 = dVar7 * dVar15;
    dVar6 = dVar6 * dVar15;
    dVar14 = dVar14 * dVar15;
    dVar13 = dVar13 * dVar15;
  }
  dVar15 = dVar14 * dVar3 + dVar13 * dVar5 + dVar6 * dVar4 + dVar7 * dVar2;
  if (dVar15 < __real_bfefae147ae147ae) {
    uVar11 = (uint)__xmm_80000000000000008000000000000000;
    uVar12 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar2 = (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ uVar12,SUB84(dVar2,0) ^ uVar11);
    dVar4 = (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) ^ uVar12,SUB84(dVar4,0) ^ uVar11);
    dVar3 = (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^ uVar12,SUB84(dVar3,0) ^ uVar11);
    dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^ uVar12,SUB84(dVar5,0) ^ uVar11);
  }
  dVar15 = acos(dVar15);
  if ((double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
      __real_3e45798ee2308c3a) {
    (this->field0_0x0)._s_0.X = dVar2;
    (this->field0_0x0)._s_0.Y = dVar4;
    (this->field0_0x0)._s_0.Z = dVar3;
    (this->field0_0x0)._s_0.W = dVar5;
  }
  else {
    dVar9 = sin(dVar15);
    dVar10 = sin(dVar15 - dVar15 * param_3);
    dVar10 = dVar10 * (dVar8 / dVar9);
    dVar15 = sin(dVar15 * param_3);
    dVar15 = dVar15 * (dVar8 / dVar9);
    (this->field0_0x0)._s_0.X = dVar15 * dVar7 + dVar10 * dVar2;
    (this->field0_0x0)._s_0.Y = dVar15 * dVar6 + dVar10 * dVar4;
    (this->field0_0x0)._s_0.Z = dVar15 * dVar14 + dVar10 * dVar3;
    (this->field0_0x0)._s_0.W = dVar15 * dVar13 + dVar10 * dVar5;
  }
  Normalize(this,0.0);
  return this;
}

