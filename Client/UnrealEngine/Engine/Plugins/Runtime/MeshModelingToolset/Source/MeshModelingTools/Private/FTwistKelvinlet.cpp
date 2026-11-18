// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// Evaluate @ 14cc55ed0

TVector<double> * __thiscall
UE::Geometry::FTwistKelvinlet::Evaluate
          (FTwistKelvinlet *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  
  dVar7 = __real_3fd999999999999a;
  dVar12 = __real_3ff0000000000000 / (double)this->_padding_;
  dVar5 = dVar12 * (param_1->field0_0x0)._s_0.Y;
  dVar6 = dVar12 * (param_1->field0_0x0)._s_0.Z;
  dVar12 = dVar12 * (param_1->field0_0x0)._s_0.X;
  auVar9._0_8_ = dVar12 * dVar12;
  auVar9._8_8_ = 0;
  dVar4 = dVar5 * dVar5 + auVar9._0_8_ + dVar6 * dVar6 + __real_3ff0000000000000;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar4;
  auVar10 = sqrtpd(auVar9,auVar10);
  dVar8 = auVar10._0_8_ * dVar4;
  dVar11 = __real_3ff8000000000000 / (dVar4 * dVar8) + __real_3ff0000000000000 / dVar8;
  dVar4 = (this->F).Row2.field0_0x0._s_0.X;
  dVar8 = (this->F).Row1.field0_0x0._s_0.X;
  dVar1 = (this->F).Row2.field0_0x0._s_0.Z;
  dVar2 = (this->F).Row1.field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (dVar5 * (this->F).Row0.field0_0x0._s_0.Y + dVar12 * (this->F).Row0.field0_0x0._s_0.X +
       dVar6 * (this->F).Row0.field0_0x0._s_0.Z) * dVar11 * __real_3fd999999999999a;
  dVar3 = (this->F).Row1.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (dVar5 * (this->F).Row2.field0_0x0._s_0.Y + dVar12 * dVar4 + dVar6 * dVar1) * dVar11 * dVar7;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (dVar5 * dVar3 + dVar12 * dVar8 + dVar6 * dVar2) * dVar11 * dVar7;
  return __return_storage_ptr__;
}

