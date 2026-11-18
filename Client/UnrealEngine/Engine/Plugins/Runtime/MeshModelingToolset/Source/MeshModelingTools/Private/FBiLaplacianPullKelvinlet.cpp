// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// Evaluate @ 14cc556b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::Geometry::FBiLaplacianPullKelvinlet::Evaluate
          (FBiLaplacianPullKelvinlet *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  
  dVar1 = (this->F).field0_0x0._s_0.X;
  dVar2 = (this->F).field0_0x0._s_0.Z;
  dVar6 = __real_3ff0000000000000 / (double)this->_padding_;
  dVar4 = dVar6 * (param_1->field0_0x0)._s_0.X;
  dVar5 = dVar6 * (param_1->field0_0x0)._s_0.Y;
  dVar6 = dVar6 * (param_1->field0_0x0)._s_0.Z;
  auVar8._0_8_ = dVar4 * dVar4;
  auVar8._8_8_ = 0;
  dVar10 = dVar5 * dVar5 + auVar8._0_8_ + dVar6 * dVar6;
  dVar3 = dVar10 + __real_3ff0000000000000;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar3;
  auVar9 = sqrtpd(auVar8,auVar9);
  dVar7 = auVar9._0_8_ * dVar3;
  dVar11 = dVar7 * dVar7 * dVar7 * dVar3;
  dVar7 = (this->F).field0_0x0._s_0.Y;
  dVar10 = (__real_4063b00000000000 / dVar11 - (__real_4073b00000000000 / dVar11) * dVar10) -
           (__real_405a400000000000 / dVar11) * (double)this->_padding_ * dVar3;
  dVar3 = this->c;
  dVar11 = (dVar7 * dVar5 + dVar1 * dVar4 + dVar2 * dVar6) *
           (((double)this->_padding_ * ___real_408d880000000000) / dVar11);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar1 * dVar10 + dVar11 * dVar4) * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar2 * dVar10 + dVar11 * dVar6) * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar7 * dVar10 + dVar11 * dVar5) * dVar3;
  return __return_storage_ptr__;
}

