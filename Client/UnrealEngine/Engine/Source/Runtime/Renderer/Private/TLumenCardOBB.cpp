// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Transform @ 144c64ae0

TLumenCardOBB<double> * __thiscall
TLumenCardOBB<double>::Transform
          (TLumenCardOBB<double> *this,TLumenCardOBB<double> *__return_storage_ptr__,
          TMatrix<double> *param_1,bool *param_2)

{
  TVector<double> *pTVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  TVector<double> *pTVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dStack_d0;
  
  dVar5 = __real_3ff0000000000000;
  dVar6 = (this->Origin).field0_0x0._s_0.X;
  dVar4 = (this->Origin).field0_0x0._s_0.Y;
  dVar2 = (this->Origin).field0_0x0._s_0.Z;
  dVar9 = param_1->M[0][0];
  dVar25 = param_1->M[0][1];
  dVar10 = param_1->M[2][0];
  dVar8 = param_1->M[2][1];
  dVar11 = param_1->M[1][0];
  dVar12 = param_1->M[1][1];
  dVar13 = param_1->M[3][0];
  dVar14 = param_1->M[3][1];
  dVar26 = param_1->M[0][2];
  dVar15 = param_1->M[1][2];
  dVar16 = param_1->M[2][2];
  dVar17 = param_1->M[3][2];
  dVar24 = dVar14 * __real_3ff0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       dVar11 * dVar4 + dVar9 * dVar6 + dVar10 * dVar2 + dVar13 * __real_3ff0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y =
       dVar12 * dVar4 + dVar25 * dVar6 + dVar8 * dVar2 + dVar24;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
       dVar15 * dVar4 + dVar26 * dVar6 + dVar16 * dVar2 + dVar17 * dVar5;
  dVar22 = __real_3ee4f8b580000000;
  dVar5 = (this->AxisX).field0_0x0._s_0.X;
  dVar24 = (this->AxisX).field0_0x0._s_0.Y;
  dVar2 = (this->AxisX).field0_0x0._s_0.Z;
  dVar4 = dVar11 * dVar24 + dVar9 * dVar5 + dVar10 * dVar2 + dVar13 * 0.0;
  dVar6 = dVar12 * dVar24 + dVar25 * dVar5 + dVar8 * dVar2 + dVar14 * 0.0;
  auVar3._8_4_ = SUB84(dVar6,0);
  auVar3._0_8_ = dVar4;
  auVar3._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  dVar18 = (this->AxisY).field0_0x0._s_0.X;
  dVar19 = (this->AxisY).field0_0x0._s_0.Y;
  dVar6 = (this->AxisY).field0_0x0._s_0.Z;
  dVar5 = dVar15 * dVar24 + dVar26 * dVar5 + dVar16 * dVar2 + dVar17 * 0.0;
  dVar2 = (this->AxisZ).field0_0x0._s_0.Z;
  dVar24 = dVar11 * dVar19 + dVar9 * dVar18 + dVar10 * dVar6 + dVar13 * 0.0;
  dVar7 = dVar12 * dVar19 + dVar25 * dVar18 + dVar8 * dVar6 + dVar14 * 0.0;
  dVar20 = (this->AxisZ).field0_0x0._s_0.X;
  dVar21 = (this->AxisZ).field0_0x0._s_0.Y;
  dVar6 = dVar15 * dVar19 + dVar26 * dVar18 + dVar16 * dVar6 + dVar17 * 0.0;
  dStack_d0 = auVar3._8_8_;
  dVar26 = dVar15 * dVar21 + dVar26 * dVar20 + dVar16 * dVar2 + dVar17 * 0.0;
  dVar10 = dVar11 * dVar21 + dVar9 * dVar20 + dVar10 * dVar2 + dVar13 * 0.0;
  dVar2 = dVar12 * dVar21 + dVar25 * dVar20 + dVar8 * dVar2 + dVar14 * 0.0;
  pTVar1 = &__return_storage_ptr__->AxisZ;
  pTVar23 = &__return_storage_ptr__->AxisY;
  dVar9 = SQRT(dVar7 * dVar7 + dVar24 * dVar24 + dVar6 * dVar6);
  dVar25 = dVar9;
  if (dVar9 <= __real_3ee4f8b580000000) {
    dVar25 = __real_3ee4f8b580000000;
  }
  dVar8 = SQRT(dVar2 * dVar2 + dVar10 * dVar10 + dVar26 * dVar26);
  dVar25 = __real_3ff0000000000000 / dVar25;
  (pTVar23->field0_0x0)._s_0.X = dVar25 * dVar24;
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.Y = dVar25 * dVar7;
  dVar24 = dVar8;
  if (dVar8 <= dVar22) {
    dVar24 = dVar22;
  }
  (__return_storage_ptr__->AxisY).field0_0x0._s_0.Z = dVar25 * dVar6;
  dVar24 = __real_3ff0000000000000 / dVar24;
  dVar2 = dVar24 * dVar2;
  dVar26 = dVar24 * dVar26;
  (pTVar1->field0_0x0)._s_0.X = dVar24 * dVar10;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Y = dVar2;
  (__return_storage_ptr__->AxisZ).field0_0x0._s_0.Z = dVar26;
  dVar6 = (__return_storage_ptr__->AxisY).field0_0x0._s_0.Y;
  dVar24 = (__return_storage_ptr__->AxisY).field0_0x0._s_0.Z;
  dVar7 = (pTVar1->field0_0x0)._s_0.X;
  dVar10 = (pTVar23->field0_0x0)._s_0.X;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.X = dVar24 * dVar2 - dVar6 * dVar26;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.Y = dVar10 * dVar26 - dVar7 * dVar24;
  (__return_storage_ptr__->AxisX).field0_0x0._s_0.Z = dVar7 * dVar6 - dVar10 * dVar2;
  UE::Math::TVector<double>::CreateOrthonormalBasis(&__return_storage_ptr__->AxisX,pTVar23,pTVar1);
  if (param_2 != (bool *)0x0) {
    *param_2 = dVar4 * (__return_storage_ptr__->AxisX).field0_0x0._s_0.X +
               dStack_d0 * (__return_storage_ptr__->AxisX).field0_0x0._s_0.Y +
               dVar5 * (__return_storage_ptr__->AxisX).field0_0x0._s_0.Z < __real_0000000000000000;
  }
  dVar8 = dVar8 * (this->Extent).field0_0x0._s_0.Z;
  dVar2 = (this->Extent).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Extent).field0_0x0._s_0.X =
       SQRT(dStack_d0 * dStack_d0 + dVar4 * dVar4 + dVar5 * dVar5) *
       (this->Extent).field0_0x0._s_0.X;
  (__return_storage_ptr__->Extent).field0_0x0._s_0.Y = dVar9 * dVar2;
  (__return_storage_ptr__->Extent).field0_0x0._s_0.Z = dVar8;
  if (dVar8 <= __real_3ff0000000000000) {
    dVar8 = __real_3ff0000000000000;
  }
  (__return_storage_ptr__->Extent).field0_0x0._s_0.Z = dVar8;
  return __return_storage_ptr__;
}

