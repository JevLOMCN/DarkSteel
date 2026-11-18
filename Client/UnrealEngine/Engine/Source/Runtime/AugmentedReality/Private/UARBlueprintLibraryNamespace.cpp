// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 2

// operator* @ 14cf456d0

TVector<double> * __cdecl
UARBlueprintLibraryNamespace::operator*
          (TVector<double> *__return_storage_ptr__,FSquareMatrix3 *param_1,TVector<double> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar7 = (param_2->field0_0x0)._s_0.X;
  dVar8 = (param_2->field0_0x0)._s_0.Y;
  fVar1 = param_1->M[1][1];
  fVar2 = param_1->M[0][1];
  fVar3 = param_1->M[2][1];
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (double)param_1->M[1][0] * dVar8 + (double)param_1->M[0][0] * dVar7 +
       (double)param_1->M[2][0] * (param_2->field0_0x0)._s_0.Z;
  fVar4 = param_1->M[1][2];
  fVar5 = param_1->M[0][2];
  fVar6 = param_1->M[2][2];
  dVar9 = (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (double)fVar1 * dVar8 + (double)fVar2 * dVar7 + (double)fVar3 * (param_2->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (double)fVar4 * dVar8 + (double)fVar5 * dVar7 + (double)fVar6 * dVar9;
  return __return_storage_ptr__;
}

// Invert @ 14cf57070

FSquareMatrix3 * __cdecl
UARBlueprintLibraryNamespace::Invert(FSquareMatrix3 *__return_storage_ptr__,FSquareMatrix3 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar1 = param_1->M[0][2];
  fVar2 = param_1->M[0][0];
  fVar3 = param_1->M[0][1];
  fVar4 = param_1->M[2][2];
  fVar5 = param_1->M[1][1];
  fVar6 = param_1->M[2][1];
  fVar7 = param_1->M[1][2];
  fVar8 = param_1->M[2][0];
  fVar11 = fVar5 * fVar4 - fVar7 * fVar6;
  fVar9 = param_1->M[1][0];
  fVar12 = fVar8 * fVar7 - fVar9 * fVar4;
  fVar13 = fVar9 * fVar6 - fVar8 * fVar5;
  fVar10 = fVar12 * fVar3 + fVar11 * fVar2 + fVar13 * fVar1;
  if ((float)((uint)fVar10 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_358637bd) {
    *(float *)((longlong)(__return_storage_ptr__->M + 0) + 0) = 1.0;
    *(float *)((longlong)(__return_storage_ptr__->M + 0) + 4) = 0.0;
    *(undefined8 *)(__return_storage_ptr__->M[0] + 2) = 0;
    *(float *)((longlong)(__return_storage_ptr__->M + 2) + 0) = 0.0;
    *(float *)((longlong)(__return_storage_ptr__->M + 2) + 4) = 0.0;
    *(float *)((longlong)(__return_storage_ptr__->M + 1) + 4) = 1.0;
    *(float *)((longlong)(__return_storage_ptr__->M + 1) + 8) = 0.0;
    __return_storage_ptr__->M[2][2] = 1.0;
  }
  else {
    fVar10 = __real_3f800000 / fVar10;
    __return_storage_ptr__->M[0][0] = fVar10 * fVar11;
    __return_storage_ptr__->M[0][1] = (fVar1 * fVar6 - fVar3 * fVar4) * fVar10;
    __return_storage_ptr__->M[1][0] = fVar10 * fVar12;
    __return_storage_ptr__->M[0][2] = (fVar3 * fVar7 - fVar1 * fVar5) * fVar10;
    __return_storage_ptr__->M[1][1] = (fVar2 * fVar4 - fVar1 * fVar8) * fVar10;
    __return_storage_ptr__->M[2][0] = fVar10 * fVar13;
    __return_storage_ptr__->M[1][2] = (fVar1 * fVar9 - fVar2 * fVar7) * fVar10;
    __return_storage_ptr__->M[2][1] = (fVar3 * fVar8 - fVar2 * fVar6) * fVar10;
    __return_storage_ptr__->M[2][2] = (fVar2 * fVar5 - fVar3 * fVar9) * fVar10;
  }
  return __return_storage_ptr__;
}

