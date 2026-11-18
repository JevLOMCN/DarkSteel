// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// Evaluate @ 14cc55840

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::Geometry::FLaplacianPullKelvinlet::Evaluate
          (FLaplacianPullKelvinlet *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  
  dVar1 = (this->F).field0_0x0._s_0.X;
  dVar2 = (this->F).field0_0x0._s_0.Z;
  dVar9 = __real_3ff0000000000000 / (double)this->_padding_;
  dVar7 = dVar9 * (param_1->field0_0x0)._s_0.X;
  dVar8 = dVar9 * (param_1->field0_0x0)._s_0.Y;
  dVar9 = dVar9 * (param_1->field0_0x0)._s_0.Z;
  auVar10._0_8_ = dVar7 * dVar7;
  auVar10._8_8_ = 0;
  dVar6 = dVar8 * dVar8 + auVar10._0_8_ + dVar9 * dVar9;
  dVar4 = dVar6 + __real_3ff0000000000000;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = dVar4;
  auVar11 = sqrtpd(auVar10,auVar11);
  dVar12 = auVar11._0_8_ * dVar4;
  dVar12 = dVar12 * auVar11._0_8_ * dVar12;
  dVar3 = (this->F).field0_0x0._s_0.Y;
  dVar5 = __real_401e000000000000 / dVar12 -
          ((__real_4000000000000000 / dVar12) * dVar6 + __real_4014000000000000 / dVar12) *
          dVar4 * (double)this->_padding_;
  dVar4 = this->c;
  dVar12 = (dVar3 * dVar8 + dVar1 * dVar7 + dVar2 * dVar9) *
           (((dVar6 * __real_4018000000000000 + ___real_4035000000000000) * (double)this->_padding_)
           / dVar12);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar1 * dVar5 + dVar12 * dVar7) * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar2 * dVar5 + dVar12 * dVar9) * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar3 * dVar5 + dVar12 * dVar8) * dVar4;
  return __return_storage_ptr__;
}

