// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// TPlane3<double> @ 143566e50

TPlane3<double> * __thiscall
UE::Geometry::TPlane3<double>::TPlane3<double>
          (TPlane3<double> *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar7 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar9 = (param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar10 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_3->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  dVar6 = (param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar2 = dVar9 * dVar7 - dVar3 * dVar10;
  dVar8 = 0.0;
  dVar3 = dVar3 * dVar1 - dVar6 * dVar7;
  auVar4._0_8_ = dVar2 * dVar2;
  auVar4._8_8_ = 0;
  dVar1 = dVar6 * dVar10 - dVar9 * dVar1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = dVar3 * dVar3 + auVar4._0_8_ + dVar1 * dVar1;
  auVar5 = sqrtpd(auVar4,auVar5);
  if (auVar5._0_8_ <= 0.0) {
    dVar3 = 0.0;
    dVar6 = 0.0;
  }
  else {
    dVar6 = __real_3ff0000000000000 / auVar5._0_8_;
    dVar8 = dVar6 * dVar1;
    dVar3 = dVar6 * dVar3;
    dVar6 = dVar6 * dVar2;
  }
  (this->Normal).field0_0x0._s_0.X = dVar6;
  (this->Normal).field0_0x0._s_0.Y = dVar3;
  (this->Normal).field0_0x0._s_0.Z = dVar8;
  this->Constant =
       dVar3 * (param_1->field0_0x0)._s_0.Y + dVar6 * (param_1->field0_0x0)._s_0.X +
       dVar8 * (param_1->field0_0x0)._s_0.Z;
  return this;
}

