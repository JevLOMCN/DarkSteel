// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// GetUnitAxis @ 144928860

TVector<double> * __thiscall
UE::Math::TMatrix<double>::GetUnitAxis
          (TMatrix<double> *this,TVector<double> *__return_storage_ptr__,Type param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  TVector<double> *pTVar5;
  double dVar6;
  TVector<double> local_38 [2];
  
  pTVar5 = GetScaledAxis(this,local_38,param_1);
  uVar4 = TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar1 = (pTVar5->field0_0x0)._s_0.X;
  dVar2 = (pTVar5->field0_0x0)._s_0.Y;
  dVar3 = (pTVar5->field0_0x0)._s_0.Z;
  dVar6 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
  if (dVar6 == __real_3ff0000000000000) {
    dVar2 = (pTVar5->field0_0x0)._s_0.Y;
    dVar1 = (pTVar5->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  if (dVar6 < __real_3e45798ee0000000) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  dVar6 = __real_3ff0000000000000 / SQRT(dVar6);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 * dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 * dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 * dVar6;
  return __return_storage_ptr__;
}

// TMatrix<float><double> @ 1452891e0

TMatrix<float> * __thiscall
UE::Math::TMatrix<float>::TMatrix<float><double>(TMatrix<float> *this,TMatrix<double> *param_1)

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
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar1 = param_1->M[0][0];
  dVar2 = param_1->M[0][1];
  dVar3 = param_1->M[0][2];
  dVar4 = param_1->M[0][3];
  dVar5 = param_1->M[1][2];
  dVar6 = param_1->M[1][3];
  dVar7 = param_1->M[1][1];
  dVar8 = param_1->M[2][0];
  dVar9 = param_1->M[2][1];
  dVar10 = param_1->M[2][2];
  dVar11 = param_1->M[2][3];
  dVar12 = param_1->M[3][0];
  dVar13 = param_1->M[3][1];
  dVar14 = param_1->M[3][2];
  dVar15 = param_1->M[3][3];
  this->M[1][0] = (float)param_1->M[1][0];
  this->M[1][1] = (float)dVar7;
  this->M[1][2] = (float)dVar5;
  this->M[1][3] = (float)dVar6;
  this->M[3][0] = (float)dVar12;
  this->M[3][1] = (float)dVar13;
  this->M[3][2] = (float)dVar14;
  this->M[3][3] = (float)dVar15;
  this->M[0][0] = (float)dVar1;
  this->M[0][1] = (float)dVar2;
  this->M[0][2] = (float)dVar3;
  this->M[0][3] = (float)dVar4;
  this->M[2][0] = (float)dVar8;
  this->M[2][1] = (float)dVar9;
  this->M[2][2] = (float)dVar10;
  this->M[2][3] = (float)dVar11;
  return this;
}

