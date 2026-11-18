// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// TransformUnitVector @ 148fce7d0

void __thiscall
FNDITransformHandler::TransformUnitVector
          (FNDITransformHandler *this,TVector<float> *param_1,TMatrix<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = (param_1->field0_0x0)._s_0.X;
  fVar5 = (param_1->field0_0x0)._s_0.Y;
  fVar1 = (param_1->field0_0x0)._s_0.Z;
  fVar3 = fVar5 * param_2->M[1][0] + fVar2 * param_2->M[0][0] + fVar1 * param_2->M[2][0] +
          param_2->M[3][0] * 0.0;
  fVar4 = fVar5 * param_2->M[1][1] + fVar2 * param_2->M[0][1] + fVar1 * param_2->M[2][1] +
          param_2->M[3][1] * 0.0;
  fVar5 = fVar5 * param_2->M[1][2] + fVar2 * param_2->M[0][2] + fVar1 * param_2->M[2][2] +
          param_2->M[3][2] * 0.0;
  fVar2 = __real_3f800000 / SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
  *(ulonglong *)&param_1->field0_0x0 = CONCAT44(fVar2 * fVar4,fVar2 * fVar3);
  (param_1->field0_0x0)._s_0.Z = fVar2 * fVar5;
  return;
}

