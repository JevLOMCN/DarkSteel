// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 1

// Evaluate @ 14cc55be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TVector<double> * __thiscall
UE::Geometry::FSharpBiLaplacianPullKelvinlet::Evaluate
          (FSharpBiLaplacianPullKelvinlet *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 in_XMM5 [16];
  
  dVar6 = __real_3ff0000000000000 / (double)this->_padding_;
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  dVar7 = dVar6 * (param_1->field0_0x0)._s_0.X;
  dVar8 = dVar6 * (param_1->field0_0x0)._s_0.Y;
  dVar6 = dVar6 * (param_1->field0_0x0)._s_0.Z;
  dVar16 = dVar8 * dVar8 + dVar7 * dVar7 + dVar6 * dVar6;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar16;
  auVar15 = sqrtpd(in_XMM4,auVar15);
  auVar9._0_8_ = dVar16 + __real_3ff0000000000000;
  auVar9._8_8_ = 0;
  dVar14 = auVar15._0_8_;
  auVar15 = sqrtpd(in_XMM5,auVar9);
  dVar11 = auVar15._0_8_ * auVar9._0_8_;
  dVar12 = dVar11 * auVar9._0_8_;
  dVar13 = dVar12 * dVar12;
  dVar12 = dVar12 * auVar9._0_8_ * auVar9._0_8_;
  if (dVar14 < __real_4014000000000000) {
    dVar1 = (this->F).field0_0x0._s_0.Z;
    dVar2 = (double)this->_padding_;
    dVar3 = (this->F).field0_0x0._s_0.Y;
    auVar10._0_8_ = __real_4022000000000000 / dVar13;
    auVar10._8_8_ = 0;
    dVar4 = (this->F).field0_0x0._s_0.X;
    dVar13 = ((dVar14 * __real_4060000000000000 * dVar13 -
              ((((dVar16 * __real_4060000000000000 + ___real_407c000000000000) * dVar16 +
                ___real_4081800000000000) * dVar16 + ___real_4071800000000000) * dVar16 +
              __real_4041800000000000) * dVar11) * (dVar2 + dVar2) +
             ((((((dVar16 * __real_4080000000000000 + ___real_40a2000000000000) * dVar16 +
                 ___real_40af800000000000) * dVar16 + ___real_40aa400000000000) * dVar16 +
               ___real_4093b00000000000) * dVar16 + __real_405a400000000000) * auVar15._0_8_ -
             dVar14 * __real_4080000000000000 * dVar13)) * auVar10._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar16;
    auVar15 = sqrtpd(auVar10,auVar5);
    dVar11 = this->c;
    dVar16 = (dVar12 * __real_4060000000000000 -
             ((((dVar16 * __real_4060000000000000 + ___real_4082000000000000) * dVar16 +
               ___real_408f800000000000) * dVar16 + ___real_408a400000000000) * dVar16 +
             __real_4073b00000000000) * auVar15._0_8_) * (dVar2 / (dVar12 * auVar15._0_8_)) *
             (dVar3 * dVar8 + dVar4 * dVar7 + dVar1 * dVar6) * __real_4032000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar7 * dVar16 + dVar4 * dVar13) * dVar11;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar8 * dVar16 + dVar3 * dVar13) * dVar11;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar6 * dVar16 + dVar1 * dVar13) * dVar11;
  }
  return __return_storage_ptr__;
}

