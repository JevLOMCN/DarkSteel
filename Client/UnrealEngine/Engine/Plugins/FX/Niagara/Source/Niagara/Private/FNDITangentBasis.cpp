// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// TransformAndEnsureValid<FNDITransformHandler> @ 148f442e0

void __thiscall
NDIStaticMeshLocal::FNDITangentBasis::TransformAndEnsureValid<FNDITransformHandler>
          (FNDITangentBasis *this,FNDITransformHandler *param_1,TMatrix<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = (this->TangentY).field0_0x0._s_0.X;
  fVar5 = (this->TangentY).field0_0x0._s_0.Y;
  fVar1 = (this->TangentY).field0_0x0._s_0.Z;
  if (fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1 <= __real_3a83126f) {
    *(undefined8 *)&(this->TangentX).field0_0x0 = 0x3f800000;
    *(undefined8 *)((longlong)&(this->TangentX).field0_0x0 + 8) = 0;
    *(undefined8 *)((longlong)&(this->TangentY).field0_0x0 + 4) = 0x3f800000;
    *(undefined8 *)&(this->TangentZ).field0_0x0 = 0;
    (this->TangentZ).field0_0x0._s_0.Z = 1.0;
  }
  fVar6 = __real_3f800000;
  fVar2 = (this->TangentX).field0_0x0._s_0.X;
  fVar5 = (this->TangentX).field0_0x0._s_0.Y;
  fVar1 = (this->TangentX).field0_0x0._s_0.Z;
  fVar3 = fVar2 * param_2->M[0][0] + fVar5 * param_2->M[1][0] + fVar1 * param_2->M[2][0] +
          param_2->M[3][0] * 0.0;
  fVar4 = fVar2 * param_2->M[0][1] + fVar5 * param_2->M[1][1] + fVar1 * param_2->M[2][1] +
          param_2->M[3][1] * 0.0;
  fVar5 = fVar2 * param_2->M[0][2] + fVar5 * param_2->M[1][2] + fVar1 * param_2->M[2][2] +
          param_2->M[3][2] * 0.0;
  fVar2 = __real_3f800000 / SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
  *(ulonglong *)&(this->TangentX).field0_0x0 = CONCAT44(fVar4 * fVar2,fVar3 * fVar2);
  (this->TangentX).field0_0x0._s_0.Z = fVar5 * fVar2;
  fVar2 = (this->TangentY).field0_0x0._s_0.X;
  fVar5 = (this->TangentY).field0_0x0._s_0.Y;
  fVar1 = (this->TangentY).field0_0x0._s_0.Z;
  fVar3 = fVar2 * param_2->M[0][0] + fVar5 * param_2->M[1][0] + fVar1 * param_2->M[2][0] +
          param_2->M[3][0] * 0.0;
  fVar4 = fVar2 * param_2->M[0][1] + fVar5 * param_2->M[1][1] + fVar1 * param_2->M[2][1] +
          param_2->M[3][1] * 0.0;
  fVar5 = fVar2 * param_2->M[0][2] + fVar5 * param_2->M[1][2] + fVar1 * param_2->M[2][2] +
          param_2->M[3][2] * 0.0;
  fVar2 = fVar6 / SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5);
  *(ulonglong *)&(this->TangentY).field0_0x0 = CONCAT44(fVar4 * fVar2,fVar3 * fVar2);
  (this->TangentY).field0_0x0._s_0.Z = fVar5 * fVar2;
  fVar2 = (this->TangentZ).field0_0x0._s_0.X;
  fVar5 = (this->TangentZ).field0_0x0._s_0.Y;
  fVar1 = (this->TangentZ).field0_0x0._s_0.Z;
  fVar3 = fVar2 * param_2->M[0][0] + fVar5 * param_2->M[1][0] + fVar1 * param_2->M[2][0] +
          param_2->M[3][0] * 0.0;
  fVar4 = fVar2 * param_2->M[0][1] + fVar5 * param_2->M[1][1] + fVar1 * param_2->M[2][1] +
          param_2->M[3][1] * 0.0;
  fVar2 = fVar2 * param_2->M[0][2] + fVar5 * param_2->M[1][2] + fVar1 * param_2->M[2][2] +
          param_2->M[3][2] * 0.0;
  fVar6 = fVar6 / SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2);
  *(ulonglong *)&(this->TangentZ).field0_0x0 = CONCAT44(fVar4 * fVar6,fVar3 * fVar6);
  (this->TangentZ).field0_0x0._s_0.Z = fVar2 * fVar6;
  return;
}

