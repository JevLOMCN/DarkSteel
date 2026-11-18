// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// IsScaleNonUniform @ 147d1a4d0

bool __thiscall FRenderTransform::IsScaleNonUniform(FRenderTransform *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = this->TransformRows[0].field0_0x0._s_0.X;
  fVar1 = this->TransformRows[0].field0_0x0._s_0.Y;
  fVar2 = this->TransformRows[0].field0_0x0._s_0.Z;
  fVar4 = this->TransformRows[1].field0_0x0._s_0.X;
  fVar3 = this->TransformRows[1].field0_0x0._s_0.Z;
  fVar5 = SQRT(fVar1 * fVar1 + fVar6 * fVar6 + fVar2 * fVar2);
  fVar6 = this->TransformRows[1].field0_0x0._s_0.Y;
  fVar1 = this->TransformRows[2].field0_0x0._s_0.X;
  fVar2 = this->TransformRows[2].field0_0x0._s_0.Z;
  fVar4 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar6 = this->TransformRows[2].field0_0x0._s_0.Y;
  fVar6 = SQRT(fVar6 * fVar6 + fVar1 * fVar1 + fVar2 * fVar2);
  if ((((float)((uint)(fVar5 - fVar4) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)
      && ((float)((uint)(fVar5 - fVar6) & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77
         )) && ((float)((uint)(fVar4 - fVar6) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
                __real_322bcc77)) {
    return false;
  }
  return true;
}

// Orthogonalize @ 147d1cb70

void __thiscall FRenderTransform::Orthogonalize(FRenderTransform *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_b8;
  float fStack_b4;
  float local_a8;
  float fStack_a4;
  float local_98;
  
  uVar1 = *(undefined8 *)&this->TransformRows[1].field0_0x0;
  uVar2 = *(undefined8 *)&this->TransformRows[0].field0_0x0;
  fVar9 = this->TransformRows[1].field0_0x0._s_0.Z;
  fVar4 = (float)((ulonglong)uVar2 >> 0x20);
  uVar3 = *(undefined8 *)&this->TransformRows[2].field0_0x0;
  fVar6 = this->TransformRows[0].field0_0x0._s_0.Z;
  local_98 = (float)uVar2;
  if (((local_98 != 0.0) || (fVar4 != 0.0)) || (fVar6 != 0.0)) {
    fStack_b4 = (float)((ulonglong)uVar1 >> 0x20);
    local_b8 = (float)uVar1;
    if (((local_b8 != 0.0) || (fStack_b4 != 0.0)) || (fVar9 != 0.0)) {
      local_a8 = (float)uVar3;
      fVar8 = this->TransformRows[2].field0_0x0._s_0.Z;
      fStack_a4 = (float)((ulonglong)uVar3 >> 0x20);
      fVar7 = __real_3f800000 / (fVar4 * fVar4 + local_98 * local_98 + fVar6 * fVar6);
      fVar5 = (local_b8 * local_98 + fVar4 * fStack_b4 + fVar9 * fVar6) * fVar7;
      local_b8 = local_b8 - fVar5 * local_98;
      fStack_b4 = fStack_b4 - fVar5 * fVar4;
      fVar9 = fVar9 - fVar5 * fVar6;
      this->TransformRows[1].field0_0x0._s_0.X = local_b8;
      this->TransformRows[1].field0_0x0._s_0.Y = fStack_b4;
      this->TransformRows[1].field0_0x0._s_0.Z = fVar9;
      fVar7 = (fStack_a4 * fVar4 + local_a8 * local_98 + fVar8 * fVar6) * fVar7;
      local_a8 = local_a8 - fVar7 * local_98;
      fStack_a4 = fStack_a4 - fVar7 * fVar4;
      fVar8 = fVar8 - fVar7 * fVar6;
      fVar6 = (fStack_a4 * fStack_b4 + local_a8 * local_b8 + fVar8 * fVar9) /
              (fStack_b4 * fStack_b4 + local_b8 * local_b8 + fVar9 * fVar9);
      this->TransformRows[2].field0_0x0._s_0.X = local_a8 - fVar6 * local_b8;
      this->TransformRows[2].field0_0x0._s_0.Y = fStack_a4 - fVar6 * fStack_b4;
      this->TransformRows[2].field0_0x0._s_0.Z = fVar8 - fVar6 * fVar9;
    }
  }
  return;
}

// FRenderTransform @ 147d79040

FRenderTransform * __thiscall
FRenderTransform::FRenderTransform(FRenderTransform *this,TMatrix<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = param_1->M[0][1];
  dVar2 = param_1->M[0][2];
  this->TransformRows[0].field0_0x0._s_0.X = (float)param_1->M[0][0];
  this->TransformRows[0].field0_0x0._s_0.Y = (float)dVar1;
  this->TransformRows[0].field0_0x0._s_0.Z = (float)dVar2;
  dVar1 = param_1->M[1][1];
  dVar2 = param_1->M[1][2];
  this->TransformRows[1].field0_0x0._s_0.X = (float)param_1->M[1][0];
  this->TransformRows[1].field0_0x0._s_0.Y = (float)dVar1;
  this->TransformRows[1].field0_0x0._s_0.Z = (float)dVar2;
  dVar1 = param_1->M[2][1];
  dVar2 = param_1->M[2][2];
  this->TransformRows[2].field0_0x0._s_0.X = (float)param_1->M[2][0];
  this->TransformRows[2].field0_0x0._s_0.Y = (float)dVar1;
  this->TransformRows[2].field0_0x0._s_0.Z = (float)dVar2;
  dVar1 = param_1->M[3][1];
  dVar2 = param_1->M[3][2];
  (this->Origin).field0_0x0._s_0.X = (float)param_1->M[3][0];
  (this->Origin).field0_0x0._s_0.Y = (float)dVar1;
  (this->Origin).field0_0x0._s_0.Z = (float)dVar2;
  return this;
}

// operator* @ 147d7e110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRenderTransform * __thiscall
FRenderTransform::operator*
          (FRenderTransform *this,FRenderTransform *__return_storage_ptr__,FRenderTransform *param_1
          )

{
  undefined1 auStack_f8 [32];
  TMatrix<float> local_d8;
  TMatrix<float> local_98;
  TMatrix<float> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_58.M[3][0] = (this->Origin).field0_0x0._s_0.X;
  local_58.M[3][1] = (this->Origin).field0_0x0._s_0.Y;
  local_58.M[2] =
       (float  [4])
       insertps(*(undefined1 (*) [16])(this->TransformRows + 2),
                *(undefined1 (*) [16])(this->TransformRows + 2),8);
  local_58.M[3][2] = (this->Origin).field0_0x0._s_0.Z;
  local_58.M[0] =
       (float  [4])
       insertps(*(undefined1 (*) [16])this->TransformRows,*(undefined1 (*) [16])this->TransformRows,
                8);
  local_58.M[1] =
       (float  [4])
       insertps(*(undefined1 (*) [16])(this->TransformRows + 1),
                *(undefined1 (*) [16])(this->TransformRows + 1),8);
  local_98.M[2] =
       (float  [4])
       insertps(*(undefined1 (*) [16])(param_1->TransformRows + 2),
                *(undefined1 (*) [16])(param_1->TransformRows + 2),8);
  local_58.M[3][3] = __real_3f800000;
  local_98.M[3][0] = (param_1->Origin).field0_0x0._s_0.X;
  local_98.M[3][1] = (param_1->Origin).field0_0x0._s_0.Y;
  local_98.M[0] =
       (float  [4])
       insertps(*(undefined1 (*) [16])param_1->TransformRows,
                *(undefined1 (*) [16])param_1->TransformRows,8);
  local_98.M[1] =
       (float  [4])
       insertps(*(undefined1 (*) [16])(param_1->TransformRows + 1),
                *(undefined1 (*) [16])(param_1->TransformRows + 1),8);
  local_98.M[3][2] = (param_1->Origin).field0_0x0._s_0.Z;
  local_98.M[3][3] = __real_3f800000;
  VectorMatrixMultiply(&local_d8,&local_58,&local_98);
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.X = local_d8.M[0][0];
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.Y = local_d8.M[0][1];
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.Z = local_d8.M[0][2];
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.X = local_d8.M[1][0];
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.Y = local_d8.M[1][1];
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.Z = local_d8.M[1][2];
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.X = local_d8.M[2][0];
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.Y = local_d8.M[2][1];
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.Z = local_d8.M[2][2];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = local_d8.M[3][0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = local_d8.M[3][1];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_d8.M[3][2];
  return __return_storage_ptr__;
}

