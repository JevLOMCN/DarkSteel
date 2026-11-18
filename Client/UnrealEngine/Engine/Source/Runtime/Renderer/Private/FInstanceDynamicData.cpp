// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ComputePrevLocalToWorld @ 1449024c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRenderTransform * __thiscall
FInstanceDynamicData::ComputePrevLocalToWorld
          (FInstanceDynamicData *this,FRenderTransform *__return_storage_ptr__,
          FRenderTransform *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1a8 [32];
  float local_188;
  float fStack_184;
  float local_178;
  float fStack_174;
  float local_168;
  TMatrix<float> local_158;
  TMatrix<float> local_118;
  TMatrix<float> local_d8;
  ulonglong local_98;
  
  fVar12 = __real_3f800000;
  local_98 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  auVar4 = *(undefined1 (*) [16])((this->PrevLocalToPrimitive).TransformRows + 2);
  local_d8.M[3][0] = (this->PrevLocalToPrimitive).Origin.field0_0x0._s_0.X;
  local_d8.M[3][1] = (this->PrevLocalToPrimitive).Origin.field0_0x0._s_0.Y;
  auVar5 = *(undefined1 (*) [16])(this->PrevLocalToPrimitive).TransformRows;
  auVar6 = *(undefined1 (*) [16])((this->PrevLocalToPrimitive).TransformRows + 1);
  local_d8.M[2] = (float  [4])insertps(auVar4,auVar4,8);
  local_d8.M[3][2] = (this->PrevLocalToPrimitive).Origin.field0_0x0._s_0.Z;
  local_d8.M[0] = (float  [4])insertps(auVar5,auVar5,8);
  local_118.M[2] =
       (float  [4])
       insertps(*(undefined1 (*) [16])(param_1->TransformRows + 2),
                *(undefined1 (*) [16])(param_1->TransformRows + 2),8);
  local_d8.M[1] = (float  [4])insertps(auVar6,auVar6,8);
  local_118.M[3][2] = (param_1->Origin).field0_0x0._s_0.Z;
  local_d8.M[3][3] = __real_3f800000;
  local_118.M[3][0] = (param_1->Origin).field0_0x0._s_0.X;
  local_118.M[3][1] = (param_1->Origin).field0_0x0._s_0.Y;
  local_118.M[0] =
       (float  [4])
       insertps(*(undefined1 (*) [16])param_1->TransformRows,
                *(undefined1 (*) [16])param_1->TransformRows,8);
  local_118.M[1] =
       (float  [4])
       insertps(*(undefined1 (*) [16])(param_1->TransformRows + 1),
                *(undefined1 (*) [16])(param_1->TransformRows + 1),8);
  local_118.M[3][3] = __real_3f800000;
  VectorMatrixMultiply(&local_158,&local_d8,&local_118);
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.X = local_158.M[0][0];
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.Y = local_158.M[0][1];
  __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.Z = local_158.M[0][2];
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.X = local_158.M[1][0];
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.Y = local_158.M[1][1];
  __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.Z = local_158.M[1][2];
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.X = local_158.M[2][0];
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.Y = local_158.M[2][1];
  __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.Z = local_158.M[2][2];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = local_158.M[3][0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = local_158.M[3][1];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = local_158.M[3][2];
  uVar1 = *(undefined8 *)&__return_storage_ptr__->TransformRows[1].field0_0x0;
  uVar2 = *(undefined8 *)&__return_storage_ptr__->TransformRows[0].field0_0x0;
  fVar11 = __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.Z;
  fVar7 = (float)((ulonglong)uVar2 >> 0x20);
  fVar9 = __return_storage_ptr__->TransformRows[0].field0_0x0._s_0.Z;
  uVar3 = *(undefined8 *)&__return_storage_ptr__->TransformRows[2].field0_0x0;
  local_168 = (float)uVar2;
  if (((local_168 != 0.0) || (fVar7 != 0.0)) || (fVar9 != 0.0)) {
    fStack_184 = (float)((ulonglong)uVar1 >> 0x20);
    local_188 = (float)uVar1;
    if (((local_188 != 0.0) || (fStack_184 != 0.0)) || (fVar11 != 0.0)) {
      local_178 = (float)uVar3;
      fVar10 = __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.Z;
      fStack_174 = (float)((ulonglong)uVar3 >> 0x20);
      fVar12 = fVar12 / (fVar7 * fVar7 + local_168 * local_168 + fVar9 * fVar9);
      fVar8 = (fStack_184 * fVar7 + local_188 * local_168 + fVar11 * fVar9) * fVar12;
      local_188 = local_188 - fVar8 * local_168;
      fStack_184 = fStack_184 - fVar8 * fVar7;
      fVar11 = fVar11 - fVar8 * fVar9;
      __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.X = local_188;
      __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.Y = fStack_184;
      __return_storage_ptr__->TransformRows[1].field0_0x0._s_0.Z = fVar11;
      fVar12 = (fStack_174 * fVar7 + local_178 * local_168 + fVar10 * fVar9) * fVar12;
      local_178 = local_178 - fVar12 * local_168;
      fStack_174 = fStack_174 - fVar12 * fVar7;
      fVar10 = fVar10 - fVar12 * fVar9;
      fVar9 = (fStack_174 * fStack_184 + local_178 * local_188 + fVar10 * fVar11) /
              (fStack_184 * fStack_184 + local_188 * local_188 + fVar11 * fVar11);
      __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.X = local_178 - fVar9 * local_188;
      __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.Y = fStack_174 - fVar9 * fStack_184;
      __return_storage_ptr__->TransformRows[2].field0_0x0._s_0.Z = fVar10 - fVar9 * fVar11;
    }
  }
  return __return_storage_ptr__;
}

