// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// Evaluate @ 14cc559f0

TVector<double> * __thiscall
UE::Geometry::FPinchKelvinlet::Evaluate
          (FPinchKelvinlet *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 in_XMM4 [16];
  undefined1 auVar12 [16];
  
  dVar11 = (double)this->_padding_;
  dVar7 = __real_3ff0000000000000 / (double)this->_padding_;
  dVar8 = (double)this->_padding_ * this->c;
  dVar5 = dVar7 * (param_1->field0_0x0)._s_0.X;
  dVar6 = dVar7 * (param_1->field0_0x0)._s_0.Y;
  dVar7 = dVar7 * (param_1->field0_0x0)._s_0.Z;
  dVar1 = dVar6 * dVar6 + dVar5 * dVar5 + dVar7 * dVar7 + __real_3ff0000000000000;
  dVar3 = dVar6 * (this->F).Row0.field0_0x0._s_0.Y + dVar5 * (this->F).Row0.field0_0x0._s_0.X +
          dVar7 * (this->F).Row0.field0_0x0._s_0.Z;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = dVar1;
  auVar12 = sqrtpd(in_XMM4,auVar12);
  dVar4 = dVar6 * (this->F).Row1.field0_0x0._s_0.Y + dVar5 * (this->F).Row1.field0_0x0._s_0.X +
          dVar7 * (this->F).Row1.field0_0x0._s_0.Z;
  dVar10 = auVar12._0_8_ * dVar1;
  dVar2 = dVar6 * (this->F).Row2.field0_0x0._s_0.Y + dVar5 * (this->F).Row2.field0_0x0._s_0.X +
          dVar7 * (this->F).Row2.field0_0x0._s_0.Z;
  dVar9 = __real_3ff0000000000000 / (dVar1 * dVar10);
  dVar1 = ((dVar11 + dVar11) - __real_3ff0000000000000) / dVar10 - dVar9 * __real_3ff8000000000000;
  dVar11 = (dVar4 * dVar6 + dVar3 * dVar5 + dVar2 * dVar7) * dVar11 *
           dVar9 * __real_c008000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar1 * dVar3 + dVar5 * dVar11) * dVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar6 * dVar11 + dVar1 * dVar4) * dVar8;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar7 * dVar11 + dVar1 * dVar2) * dVar8;
  return __return_storage_ptr__;
}

