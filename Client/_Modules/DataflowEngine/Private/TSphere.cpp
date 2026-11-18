// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 1

// TransformBy @ 1462e6720

TSphere<double> * __thiscall
UE::Math::TSphere<double>::TransformBy
          (TSphere<double> *this,TSphere<double> *__return_storage_ptr__,TMatrix<double> *param_1)

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
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  
  dVar11 = __real_3ff0000000000000;
  auVar13 = *(undefined1 (*) [16])&(this->Center).field0_0x0;
  dVar2 = auVar13._8_8_;
  dVar4 = param_1->M[1][1];
  dVar15 = param_1->M[1][2];
  dVar3 = auVar13._0_8_;
  dVar1 = (this->Center).field0_0x0._s_0.Z;
  dVar5 = param_1->M[0][1];
  auVar12._8_4_ = auVar13._0_4_;
  auVar12._0_8_ = dVar3;
  auVar12._12_4_ = auVar13._4_4_;
  dVar6 = param_1->M[2][1];
  dVar14 = __real_3ff0000000000000 * param_1->M[3][1];
  dVar7 = param_1->M[0][2];
  dVar8 = param_1->M[3][2];
  dVar10 = param_1->M[2][2];
  (__return_storage_ptr__->Center).field0_0x0._s_0.X =
       dVar2 * param_1->M[1][0] + dVar3 * param_1->M[0][0] + dVar1 * param_1->M[2][0] +
       __real_3ff0000000000000 * param_1->M[3][0];
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y =
       dVar2 * dVar4 + auVar12._8_8_ * dVar5 + dVar1 * dVar6 + dVar14;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z =
       dVar15 * dVar2 + dVar3 * dVar7 + dVar10 * dVar1 + dVar8 * dVar11;
  dVar1 = param_1->M[2][1];
  dVar2 = param_1->M[2][0];
  dVar3 = param_1->M[0][1];
  dVar4 = param_1->M[0][2];
  dVar15 = param_1->M[1][0];
  dVar5 = param_1->M[1][1];
  dVar6 = param_1->M[0][0];
  dVar7 = param_1->M[1][2];
  dVar8 = param_1->M[2][2];
  auVar13._0_8_ = dVar2 * dVar2;
  auVar13._8_8_ = 0;
  dVar1 = dVar1 * dVar1 + auVar13._0_8_ + dVar8 * dVar8;
  dVar15 = dVar5 * dVar5 + dVar15 * dVar15 + dVar7 * dVar7;
  dVar2 = dVar3 * dVar3 + dVar6 * dVar6 + dVar4 * dVar4;
  if (dVar1 <= dVar15) {
    dVar1 = dVar15;
  }
  if (dVar1 <= dVar2) {
    dVar1 = dVar2;
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = dVar1;
  auVar13 = sqrtpd(auVar13,auVar9);
  __return_storage_ptr__->W = auVar13._0_8_ * this->W;
  return __return_storage_ptr__;
}

