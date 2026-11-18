// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 2

// Make @ 1430d67c0

TMatrix<double> * __cdecl
UE::Math::TRotationMatrix<double>::Make
          (TMatrix<double> *__return_storage_ptr__,TQuat<double> *param_1)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar12 = TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar11 = TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar10 = TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar9 = __real_3ff0000000000000;
  dVar1 = param_1->X;
  dVar2 = param_1->Y;
  dVar3 = param_1->Z;
  dVar5 = dVar3 + dVar3;
  dVar7 = dVar2 + dVar2;
  dVar6 = (dVar1 + dVar1) * dVar1;
  dVar4 = param_1->W;
  dVar8 = (dVar1 + dVar1) * dVar4;
  __return_storage_ptr__->M[0][0] = __real_3ff0000000000000 - (dVar5 * dVar3 + dVar7 * dVar2);
  __return_storage_ptr__->M[0][1] = dVar5 * dVar4 + dVar7 * dVar1;
  __return_storage_ptr__->M[0][2] = dVar5 * dVar1 - dVar7 * dVar4;
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][0] = dVar7 * dVar1 - dVar5 * dVar4;
  __return_storage_ptr__->M[1][1] = dVar9 - (dVar5 * dVar3 + dVar6);
  __return_storage_ptr__->M[1][2] = dVar8 + dVar5 * dVar2;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][0] = dVar7 * dVar4 + dVar5 * dVar1;
  __return_storage_ptr__->M[2][1] = dVar5 * dVar2 - dVar8;
  __return_storage_ptr__->M[2][2] = dVar9 - (dVar7 * dVar2 + dVar6);
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[3][0] = (double)uVar10;
  __return_storage_ptr__->M[3][1] = (double)uVar11;
  __return_storage_ptr__->M[3][2] = (double)uVar12;
  __return_storage_ptr__->M[3][3] = 1.0;
  return __return_storage_ptr__;
}

// Make @ 1430d6960

TMatrix<double> * __cdecl
UE::Math::TRotationMatrix<double>::Make
          (TMatrix<double> *__return_storage_ptr__,TRotator<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TRotationMatrix<double> *pTVar5;
  TRotationMatrix<double> local_88;
  
  pTVar5 = TRotationMatrix<double>(&local_88,param_1);
  dVar1 = *(double *)&pTVar5->field_0x8;
  dVar2 = *(double *)&pTVar5->field_0x10;
  dVar3 = *(double *)&pTVar5->field_0x18;
  __return_storage_ptr__->M[0][0] = *(double *)pTVar5;
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar1 = *(double *)&pTVar5->field_0x20;
  dVar4 = *(double *)&pTVar5->field_0x28;
  __return_storage_ptr__->M[0][2] = dVar2;
  __return_storage_ptr__->M[0][3] = dVar3;
  dVar2 = *(double *)&pTVar5->field_0x30;
  dVar3 = *(double *)&pTVar5->field_0x38;
  __return_storage_ptr__->M[1][0] = dVar1;
  __return_storage_ptr__->M[1][1] = dVar4;
  dVar1 = *(double *)&pTVar5->field_0x40;
  dVar4 = *(double *)&pTVar5->field_0x48;
  __return_storage_ptr__->M[1][2] = dVar2;
  __return_storage_ptr__->M[1][3] = dVar3;
  dVar2 = *(double *)&pTVar5->field_0x50;
  dVar3 = *(double *)&pTVar5->field_0x58;
  __return_storage_ptr__->M[2][0] = dVar1;
  __return_storage_ptr__->M[2][1] = dVar4;
  dVar1 = *(double *)&pTVar5->field_0x60;
  dVar4 = *(double *)&pTVar5->field_0x68;
  __return_storage_ptr__->M[2][2] = dVar2;
  __return_storage_ptr__->M[2][3] = dVar3;
  dVar2 = *(double *)&pTVar5->field_0x70;
  dVar3 = *(double *)&pTVar5->field_0x78;
  __return_storage_ptr__->M[3][0] = dVar1;
  __return_storage_ptr__->M[3][1] = dVar4;
  __return_storage_ptr__->M[3][2] = dVar2;
  __return_storage_ptr__->M[3][3] = dVar3;
  return __return_storage_ptr__;
}

