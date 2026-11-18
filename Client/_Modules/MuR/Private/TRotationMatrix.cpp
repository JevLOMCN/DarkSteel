// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 6

// MakeFromXY @ 14a9ac780

TMatrix<float> * __cdecl
UE::Math::TRotationMatrix<float>::MakeFromXY
          (TMatrix<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float local_88;
  
  uVar1 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar5 = (param_1->field0_0x0)._s_0.X;
  fVar7 = (param_1->field0_0x0)._s_0.Z;
  fVar11 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = fVar11 * fVar11 + fVar5 * fVar5 + fVar7 * fVar7;
  if (fVar3 == __real_3f800000) {
    local_88 = (float)*(undefined8 *)&param_1->field0_0x0;
    uVar9 = (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
    uVar10 = local_88;
    uVar6 = fVar7;
  }
  else {
    uVar9 = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar10 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar6 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 <= fVar3) {
      fVar3 = __real_3f800000 / SQRT(fVar3);
      uVar10 = fVar3 * fVar5;
      uVar9 = fVar3 * fVar11;
      uVar6 = fVar3 * fVar7;
    }
  }
  fVar5 = (param_2->field0_0x0)._s_0.X;
  fVar7 = (param_2->field0_0x0)._s_0.Y;
  fVar11 = (param_2->field0_0x0)._s_0.Z;
  fVar3 = fVar7 * fVar7 + fVar5 * fVar5 + fVar11 * fVar11;
  if (fVar3 == __real_3f800000) {
    local_88 = (float)*(undefined8 *)&param_2->field0_0x0;
    uVar2 = (float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
    uVar4 = fVar11;
  }
  else {
    uVar2 = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    local_88 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar4 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 <= fVar3) {
      fVar3 = __real_3f800000 / SQRT(fVar3);
      local_88 = fVar3 * fVar5;
      uVar2 = fVar3 * fVar7;
      uVar4 = fVar3 * fVar11;
    }
  }
  if ((float)((uint)((float)((uint)((float)uVar2 * (float)uVar9 + (float)uVar10 * local_88 +
                                   (float)uVar4 * (float)uVar6) &
                            __xmm_7fffffff7fffffff7fffffff7fffffff) - __real_3f800000) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    if (__real_3f7ff972 <= (float)(uVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      uVar4 = 0.0;
      local_88 = __real_3f800000;
    }
    else {
      local_88 = 0.0;
      uVar4 = __real_3f800000;
    }
    uVar2 = 0.0;
  }
  fVar11 = (float)uVar9 * (float)uVar4 - (float)uVar2 * (float)uVar6;
  fVar7 = (float)uVar2 * (float)uVar10 - local_88 * (float)uVar9;
  fVar3 = local_88 * (float)uVar6 - (float)uVar10 * (float)uVar4;
  fVar5 = fVar3 * fVar3 + fVar11 * fVar11 + fVar7 * fVar7;
  uVar4 = fVar3;
  uVar2 = fVar11;
  uVar8 = fVar7;
  if ((fVar5 != __real_3f800000) &&
     (uVar4 = TVector<float>::ZeroVector.field0_0x0._s_0.Y,
     uVar2 = TVector<float>::ZeroVector.field0_0x0._s_0.X,
     uVar8 = TVector<float>::ZeroVector.field0_0x0._s_0.Z, __real_322bcc77 <= fVar5)) {
    fVar5 = __real_3f800000 / SQRT(fVar5);
    uVar4 = fVar5 * fVar3;
    uVar2 = fVar5 * fVar11;
    uVar8 = fVar5 * fVar7;
  }
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[0][0] = (float)uVar10;
  __return_storage_ptr__->M[0][1] = (float)uVar9;
  __return_storage_ptr__->M[3][2] = (float)uVar1;
  __return_storage_ptr__->M[2][0] = (float)uVar2;
  __return_storage_ptr__->M[1][0] = (float)uVar4 * (float)uVar6 - (float)uVar8 * (float)uVar9;
  __return_storage_ptr__->M[3][3] = 1.0;
  __return_storage_ptr__->M[2][1] = (float)uVar4;
  uVar1 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->M[0][2] = (float)uVar6;
  __return_storage_ptr__->M[1][1] = (float)uVar8 * (float)uVar10 - (float)uVar2 * (float)uVar6;
  __return_storage_ptr__->M[2][2] = (float)uVar8;
  __return_storage_ptr__->M[1][2] = (float)uVar2 * (float)uVar9 - (float)uVar4 * (float)uVar10;
  __return_storage_ptr__->M[3][1] = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  __return_storage_ptr__->M[3][0] = (float)uVar1;
  return __return_storage_ptr__;
}

// MakeFromXZ @ 14a9acb30

TMatrix<float> * __cdecl
UE::Math::TRotationMatrix<float>::MakeFromXZ
          (TMatrix<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float local_88;
  
  uVar2 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar6 = (param_1->field0_0x0)._s_0.X;
  fVar10 = (param_1->field0_0x0)._s_0.Z;
  fVar12 = (param_1->field0_0x0)._s_0.Y;
  fVar4 = fVar12 * fVar12 + fVar6 * fVar6 + fVar10 * fVar10;
  if (fVar4 == __real_3f800000) {
    local_88 = (float)*(undefined8 *)&param_1->field0_0x0;
    uVar9 = (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
    uVar11 = local_88;
    uVar8 = fVar10;
  }
  else {
    uVar9 = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar11 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar8 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 <= fVar4) {
      fVar4 = __real_3f800000 / SQRT(fVar4);
      uVar11 = fVar4 * fVar6;
      uVar9 = fVar4 * fVar12;
      uVar8 = fVar4 * fVar10;
    }
  }
  fVar6 = (param_2->field0_0x0)._s_0.X;
  fVar10 = (param_2->field0_0x0)._s_0.Y;
  fVar12 = (param_2->field0_0x0)._s_0.Z;
  fVar4 = fVar10 * fVar10 + fVar6 * fVar6 + fVar12 * fVar12;
  if (fVar4 == __real_3f800000) {
    local_88 = (float)*(undefined8 *)&param_2->field0_0x0;
    uVar3 = (float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
    uVar5 = fVar12;
  }
  else {
    uVar3 = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    local_88 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar5 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 <= fVar4) {
      fVar4 = __real_3f800000 / SQRT(fVar4);
      local_88 = fVar4 * fVar6;
      uVar3 = fVar4 * fVar10;
      uVar5 = fVar4 * fVar12;
    }
  }
  if ((float)((uint)((float)((uint)((float)uVar3 * (float)uVar9 + (float)uVar11 * local_88 +
                                   (float)uVar5 * (float)uVar8) &
                            __xmm_7fffffff7fffffff7fffffff7fffffff) - __real_3f800000) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    if (__real_3f7ff972 <= (float)(uVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      uVar5 = 0.0;
      local_88 = __real_3f800000;
    }
    else {
      local_88 = 0.0;
      uVar5 = __real_3f800000;
    }
    uVar3 = 0.0;
  }
  fVar12 = (float)uVar3 * (float)uVar8 - (float)uVar9 * (float)uVar5;
  fVar10 = local_88 * (float)uVar9 - (float)uVar3 * (float)uVar11;
  fVar4 = (float)uVar11 * (float)uVar5 - local_88 * (float)uVar8;
  fVar6 = fVar4 * fVar4 + fVar12 * fVar12 + fVar10 * fVar10;
  uVar5 = fVar4;
  uVar3 = fVar12;
  uVar7 = fVar10;
  if ((fVar6 != __real_3f800000) &&
     (uVar5 = TVector<float>::ZeroVector.field0_0x0._s_0.Y,
     uVar3 = TVector<float>::ZeroVector.field0_0x0._s_0.X,
     uVar7 = TVector<float>::ZeroVector.field0_0x0._s_0.Z, __real_322bcc77 <= fVar6)) {
    fVar6 = __real_3f800000 / SQRT(fVar6);
    uVar5 = fVar6 * fVar4;
    uVar3 = fVar6 * fVar12;
    uVar7 = fVar6 * fVar10;
  }
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[1][0] = (float)uVar3;
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[1][1] = (float)uVar5;
  uVar1 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->M[3][2] = (float)uVar2;
  __return_storage_ptr__->M[1][2] = (float)uVar7;
  __return_storage_ptr__->M[3][3] = 1.0;
  __return_storage_ptr__->M[2][0] = (float)uVar7 * (float)uVar9 - (float)uVar5 * (float)uVar8;
  uVar2 = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  __return_storage_ptr__->M[0][0] = (float)uVar11;
  __return_storage_ptr__->M[0][1] = (float)uVar9;
  __return_storage_ptr__->M[3][1] = (float)uVar2;
  __return_storage_ptr__->M[0][2] = (float)uVar8;
  __return_storage_ptr__->M[2][1] = (float)uVar3 * (float)uVar8 - (float)uVar7 * (float)uVar11;
  __return_storage_ptr__->M[2][2] = (float)uVar5 * (float)uVar11 - (float)uVar3 * (float)uVar9;
  __return_storage_ptr__->M[3][0] = (float)uVar1;
  return __return_storage_ptr__;
}

// MakeFromYX @ 14a9aced0

TMatrix<float> * __cdecl
UE::Math::TRotationMatrix<float>::MakeFromYX
          (TMatrix<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float local_88;
  
  uVar1 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar4 = (param_1->field0_0x0)._s_0.X;
  fVar9 = (param_1->field0_0x0)._s_0.Z;
  fVar11 = (param_1->field0_0x0)._s_0.Y;
  fVar2 = fVar11 * fVar11 + fVar4 * fVar4 + fVar9 * fVar9;
  if (fVar2 == __real_3f800000) {
    local_88 = (float)*(undefined8 *)&param_1->field0_0x0;
    uVar7 = (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
    uVar10 = local_88;
    uVar5 = fVar9;
  }
  else {
    uVar7 = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar10 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar5 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 <= fVar2) {
      fVar2 = __real_3f800000 / SQRT(fVar2);
      uVar10 = fVar2 * fVar4;
      uVar7 = fVar2 * fVar11;
      uVar5 = fVar2 * fVar9;
    }
  }
  fVar4 = (param_2->field0_0x0)._s_0.X;
  fVar9 = (param_2->field0_0x0)._s_0.Y;
  fVar11 = (param_2->field0_0x0)._s_0.Z;
  fVar2 = fVar9 * fVar9 + fVar4 * fVar4 + fVar11 * fVar11;
  if (fVar2 == __real_3f800000) {
    local_88 = (float)*(undefined8 *)&param_2->field0_0x0;
    uVar3 = fVar11;
    uVar6 = (float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  }
  else {
    local_88 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar3 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    uVar6 = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    if (__real_322bcc77 <= fVar2) {
      fVar2 = __real_3f800000 / SQRT(fVar2);
      local_88 = fVar2 * fVar4;
      uVar3 = fVar2 * fVar11;
      uVar6 = fVar2 * fVar9;
    }
  }
  if ((float)((uint)((float)((uint)((float)uVar6 * (float)uVar7 + (float)uVar10 * local_88 +
                                   (float)uVar3 * (float)uVar5) &
                            __xmm_7fffffff7fffffff7fffffff7fffffff) - __real_3f800000) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    if (__real_3f7ff972 <= (float)(uVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      uVar3 = 0.0;
      local_88 = __real_3f800000;
    }
    else {
      local_88 = 0.0;
      uVar3 = __real_3f800000;
    }
    uVar6 = 0.0;
  }
  fVar11 = (float)uVar6 * (float)uVar5 - (float)uVar7 * (float)uVar3;
  fVar9 = local_88 * (float)uVar7 - (float)uVar6 * (float)uVar10;
  fVar2 = (float)uVar10 * (float)uVar3 - local_88 * (float)uVar5;
  fVar4 = fVar2 * fVar2 + fVar11 * fVar11 + fVar9 * fVar9;
  uVar3 = fVar11;
  uVar6 = fVar9;
  uVar8 = fVar2;
  if ((fVar4 != __real_3f800000) &&
     (uVar3 = TVector<float>::ZeroVector.field0_0x0._s_0.X,
     uVar6 = TVector<float>::ZeroVector.field0_0x0._s_0.Z,
     uVar8 = TVector<float>::ZeroVector.field0_0x0._s_0.Y, __real_322bcc77 <= fVar4)) {
    fVar4 = __real_3f800000 / SQRT(fVar4);
    uVar3 = fVar4 * fVar11;
    uVar6 = fVar4 * fVar9;
    uVar8 = fVar4 * fVar2;
  }
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[1][0] = (float)uVar10;
  __return_storage_ptr__->M[2][0] = (float)uVar3;
  __return_storage_ptr__->M[3][2] = (float)uVar1;
  __return_storage_ptr__->M[2][1] = (float)uVar8;
  __return_storage_ptr__->M[0][0] = (float)uVar6 * (float)uVar7 - (float)uVar8 * (float)uVar5;
  __return_storage_ptr__->M[3][3] = 1.0;
  __return_storage_ptr__->M[0][1] = (float)uVar3 * (float)uVar5 - (float)uVar6 * (float)uVar10;
  __return_storage_ptr__->M[1][1] = (float)uVar7;
  __return_storage_ptr__->M[1][2] = (float)uVar5;
  uVar1 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->M[2][2] = (float)uVar6;
  __return_storage_ptr__->M[3][0] = (float)uVar1;
  __return_storage_ptr__->M[0][2] = (float)uVar8 * (float)uVar10 - (float)uVar3 * (float)uVar7;
  __return_storage_ptr__->M[3][1] = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  return __return_storage_ptr__;
}

// MakeFromYZ @ 14a9ad280

TMatrix<float> * __cdecl
UE::Math::TRotationMatrix<float>::MakeFromYZ
          (TMatrix<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float local_88;
  
  uVar1 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar5 = (param_1->field0_0x0)._s_0.X;
  fVar8 = (param_1->field0_0x0)._s_0.Z;
  fVar12 = (param_1->field0_0x0)._s_0.Y;
  fVar4 = fVar12 * fVar12 + fVar5 * fVar5 + fVar8 * fVar8;
  if (fVar4 == __real_3f800000) {
    local_88 = (float)*(undefined8 *)&param_1->field0_0x0;
    uVar10 = (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
    uVar11 = local_88;
    uVar7 = fVar8;
  }
  else {
    uVar10 = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar11 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar7 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 <= fVar4) {
      fVar4 = __real_3f800000 / SQRT(fVar4);
      uVar11 = fVar4 * fVar5;
      uVar10 = fVar4 * fVar12;
      uVar7 = fVar4 * fVar8;
    }
  }
  fVar5 = (param_2->field0_0x0)._s_0.X;
  fVar8 = (param_2->field0_0x0)._s_0.Y;
  fVar12 = (param_2->field0_0x0)._s_0.Z;
  fVar4 = fVar8 * fVar8 + fVar5 * fVar5 + fVar12 * fVar12;
  if (fVar4 == __real_3f800000) {
    local_88 = (float)*(undefined8 *)&param_2->field0_0x0;
    uVar3 = (float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
    uVar6 = fVar12;
  }
  else {
    uVar3 = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    local_88 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar6 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 <= fVar4) {
      fVar4 = __real_3f800000 / SQRT(fVar4);
      local_88 = fVar4 * fVar5;
      uVar3 = fVar4 * fVar8;
      uVar6 = fVar4 * fVar12;
    }
  }
  if ((float)((uint)((float)((uint)((float)uVar3 * (float)uVar10 + (float)uVar11 * local_88 +
                                   (float)uVar6 * (float)uVar7) &
                            __xmm_7fffffff7fffffff7fffffff7fffffff) - __real_3f800000) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    if (__real_3f7ff972 <= (float)(uVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      uVar6 = 0.0;
      local_88 = __real_3f800000;
    }
    else {
      local_88 = 0.0;
      uVar6 = __real_3f800000;
    }
    uVar3 = 0.0;
  }
  fVar12 = (float)uVar10 * (float)uVar6 - (float)uVar3 * (float)uVar7;
  fVar8 = (float)uVar3 * (float)uVar11 - local_88 * (float)uVar10;
  fVar4 = local_88 * (float)uVar7 - (float)uVar11 * (float)uVar6;
  fVar5 = fVar4 * fVar4 + fVar12 * fVar12 + fVar8 * fVar8;
  uVar3 = fVar12;
  uVar6 = fVar8;
  uVar9 = fVar4;
  if ((fVar5 != __real_3f800000) &&
     (uVar3 = TVector<float>::ZeroVector.field0_0x0._s_0.X,
     uVar6 = TVector<float>::ZeroVector.field0_0x0._s_0.Z,
     uVar9 = TVector<float>::ZeroVector.field0_0x0._s_0.Y, __real_322bcc77 <= fVar5)) {
    fVar5 = __real_3f800000 / SQRT(fVar5);
    uVar3 = fVar5 * fVar12;
    uVar6 = fVar5 * fVar8;
    uVar9 = fVar5 * fVar4;
  }
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[0][0] = (float)uVar3;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[0][2] = (float)uVar6;
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[0][1] = (float)uVar9;
  __return_storage_ptr__->M[3][2] = (float)uVar1;
  __return_storage_ptr__->M[3][3] = 1.0;
  __return_storage_ptr__->M[2][0] = (float)uVar9 * (float)uVar7 - (float)uVar6 * (float)uVar10;
  uVar2 = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  __return_storage_ptr__->M[1][0] = (float)uVar11;
  uVar1 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->M[2][2] = (float)uVar3 * (float)uVar10 - (float)uVar9 * (float)uVar11;
  __return_storage_ptr__->M[1][1] = (float)uVar10;
  __return_storage_ptr__->M[2][1] = (float)uVar6 * (float)uVar11 - (float)uVar3 * (float)uVar7;
  __return_storage_ptr__->M[1][2] = (float)uVar7;
  __return_storage_ptr__->M[3][0] = (float)uVar1;
  __return_storage_ptr__->M[3][1] = (float)uVar2;
  return __return_storage_ptr__;
}

// MakeFromZX @ 14a9ad620

TMatrix<float> * __cdecl
UE::Math::TRotationMatrix<float>::MakeFromZX
          (TMatrix<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float local_88;
  
  uVar1 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar5 = (param_1->field0_0x0)._s_0.X;
  fVar7 = (param_1->field0_0x0)._s_0.Z;
  fVar11 = (param_1->field0_0x0)._s_0.Y;
  fVar3 = fVar11 * fVar11 + fVar5 * fVar5 + fVar7 * fVar7;
  if (fVar3 == __real_3f800000) {
    local_88 = (float)*(undefined8 *)&param_1->field0_0x0;
    uVar9 = (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
    uVar10 = local_88;
    uVar6 = fVar7;
  }
  else {
    uVar9 = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar10 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar6 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 <= fVar3) {
      fVar3 = __real_3f800000 / SQRT(fVar3);
      uVar10 = fVar3 * fVar5;
      uVar9 = fVar3 * fVar11;
      uVar6 = fVar3 * fVar7;
    }
  }
  fVar5 = (param_2->field0_0x0)._s_0.X;
  fVar7 = (param_2->field0_0x0)._s_0.Y;
  fVar11 = (param_2->field0_0x0)._s_0.Z;
  fVar3 = fVar7 * fVar7 + fVar5 * fVar5 + fVar11 * fVar11;
  if (fVar3 == __real_3f800000) {
    local_88 = (float)*(undefined8 *)&param_2->field0_0x0;
    uVar2 = (float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
    uVar4 = fVar11;
  }
  else {
    uVar2 = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    local_88 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar4 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 <= fVar3) {
      fVar3 = __real_3f800000 / SQRT(fVar3);
      local_88 = fVar3 * fVar5;
      uVar2 = fVar3 * fVar7;
      uVar4 = fVar3 * fVar11;
    }
  }
  if ((float)((uint)((float)((uint)((float)uVar2 * (float)uVar9 + (float)uVar10 * local_88 +
                                   (float)uVar4 * (float)uVar6) &
                            __xmm_7fffffff7fffffff7fffffff7fffffff) - __real_3f800000) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    if (__real_3f7ff972 <= (float)(uVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      uVar4 = 0.0;
      local_88 = __real_3f800000;
    }
    else {
      local_88 = 0.0;
      uVar4 = __real_3f800000;
    }
    uVar2 = 0.0;
  }
  fVar11 = (float)uVar9 * (float)uVar4 - (float)uVar2 * (float)uVar6;
  fVar7 = (float)uVar2 * (float)uVar10 - local_88 * (float)uVar9;
  fVar3 = local_88 * (float)uVar6 - (float)uVar10 * (float)uVar4;
  fVar5 = fVar3 * fVar3 + fVar11 * fVar11 + fVar7 * fVar7;
  uVar4 = fVar3;
  uVar2 = fVar11;
  uVar8 = fVar7;
  if ((fVar5 != __real_3f800000) &&
     (uVar4 = TVector<float>::ZeroVector.field0_0x0._s_0.Y,
     uVar2 = TVector<float>::ZeroVector.field0_0x0._s_0.X,
     uVar8 = TVector<float>::ZeroVector.field0_0x0._s_0.Z, __real_322bcc77 <= fVar5)) {
    fVar5 = __real_3f800000 / SQRT(fVar5);
    uVar4 = fVar5 * fVar3;
    uVar2 = fVar5 * fVar11;
    uVar8 = fVar5 * fVar7;
  }
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[1][0] = (float)uVar2;
  __return_storage_ptr__->M[1][1] = (float)uVar4;
  __return_storage_ptr__->M[3][2] = (float)uVar1;
  __return_storage_ptr__->M[2][0] = (float)uVar10;
  __return_storage_ptr__->M[0][0] = (float)uVar4 * (float)uVar6 - (float)uVar8 * (float)uVar9;
  __return_storage_ptr__->M[3][3] = 1.0;
  __return_storage_ptr__->M[2][1] = (float)uVar9;
  uVar1 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->M[0][1] = (float)uVar8 * (float)uVar10 - (float)uVar2 * (float)uVar6;
  __return_storage_ptr__->M[1][2] = (float)uVar8;
  __return_storage_ptr__->M[2][2] = (float)uVar6;
  __return_storage_ptr__->M[0][2] = (float)uVar2 * (float)uVar9 - (float)uVar4 * (float)uVar10;
  __return_storage_ptr__->M[3][1] = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  __return_storage_ptr__->M[3][0] = (float)uVar1;
  return __return_storage_ptr__;
}

// MakeFromZY @ 14a9ad9d0

TMatrix<float> * __cdecl
UE::Math::TRotationMatrix<float>::MakeFromZY
          (TMatrix<float> *__return_storage_ptr__,TVector<float> *param_1,TVector<float> *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float local_88;
  
  uVar2 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar6 = (param_1->field0_0x0)._s_0.X;
  fVar10 = (param_1->field0_0x0)._s_0.Z;
  fVar12 = (param_1->field0_0x0)._s_0.Y;
  fVar4 = fVar12 * fVar12 + fVar6 * fVar6 + fVar10 * fVar10;
  if (fVar4 == __real_3f800000) {
    local_88 = (float)*(undefined8 *)&param_1->field0_0x0;
    uVar9 = (float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
    uVar11 = local_88;
    uVar8 = fVar10;
  }
  else {
    uVar9 = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    uVar11 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar8 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 <= fVar4) {
      fVar4 = __real_3f800000 / SQRT(fVar4);
      uVar11 = fVar4 * fVar6;
      uVar9 = fVar4 * fVar12;
      uVar8 = fVar4 * fVar10;
    }
  }
  fVar6 = (param_2->field0_0x0)._s_0.X;
  fVar10 = (param_2->field0_0x0)._s_0.Y;
  fVar12 = (param_2->field0_0x0)._s_0.Z;
  fVar4 = fVar10 * fVar10 + fVar6 * fVar6 + fVar12 * fVar12;
  if (fVar4 == __real_3f800000) {
    local_88 = (float)*(undefined8 *)&param_2->field0_0x0;
    uVar3 = (float)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
    uVar5 = fVar12;
  }
  else {
    uVar3 = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
    local_88 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
    uVar5 = TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    if (__real_322bcc77 <= fVar4) {
      fVar4 = __real_3f800000 / SQRT(fVar4);
      local_88 = fVar4 * fVar6;
      uVar3 = fVar4 * fVar10;
      uVar5 = fVar4 * fVar12;
    }
  }
  if ((float)((uint)((float)((uint)((float)uVar3 * (float)uVar9 + (float)uVar11 * local_88 +
                                   (float)uVar5 * (float)uVar8) &
                            __xmm_7fffffff7fffffff7fffffff7fffffff) - __real_3f800000) &
             __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
    if (__real_3f7ff972 <= (float)(uVar8 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      uVar5 = 0.0;
      local_88 = __real_3f800000;
    }
    else {
      local_88 = 0.0;
      uVar5 = __real_3f800000;
    }
    uVar3 = 0.0;
  }
  fVar12 = (float)uVar3 * (float)uVar8 - (float)uVar9 * (float)uVar5;
  fVar10 = local_88 * (float)uVar9 - (float)uVar3 * (float)uVar11;
  fVar4 = (float)uVar11 * (float)uVar5 - local_88 * (float)uVar8;
  fVar6 = fVar4 * fVar4 + fVar12 * fVar12 + fVar10 * fVar10;
  uVar5 = fVar4;
  uVar3 = fVar12;
  uVar7 = fVar10;
  if ((fVar6 != __real_3f800000) &&
     (uVar5 = TVector<float>::ZeroVector.field0_0x0._s_0.Y,
     uVar3 = TVector<float>::ZeroVector.field0_0x0._s_0.X,
     uVar7 = TVector<float>::ZeroVector.field0_0x0._s_0.Z, __real_322bcc77 <= fVar6)) {
    fVar6 = __real_3f800000 / SQRT(fVar6);
    uVar5 = fVar6 * fVar4;
    uVar3 = fVar6 * fVar12;
    uVar7 = fVar6 * fVar10;
  }
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[0][0] = (float)uVar3;
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[0][1] = (float)uVar5;
  uVar1 = TVector<float>::ZeroVector.field0_0x0._s_0.X;
  __return_storage_ptr__->M[3][2] = (float)uVar2;
  __return_storage_ptr__->M[0][2] = (float)uVar7;
  __return_storage_ptr__->M[3][3] = 1.0;
  __return_storage_ptr__->M[1][0] = (float)uVar7 * (float)uVar9 - (float)uVar5 * (float)uVar8;
  uVar2 = TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  __return_storage_ptr__->M[2][0] = (float)uVar11;
  __return_storage_ptr__->M[2][1] = (float)uVar9;
  __return_storage_ptr__->M[3][1] = (float)uVar2;
  __return_storage_ptr__->M[1][1] = (float)uVar3 * (float)uVar8 - (float)uVar7 * (float)uVar11;
  __return_storage_ptr__->M[1][2] = (float)uVar5 * (float)uVar11 - (float)uVar3 * (float)uVar9;
  __return_storage_ptr__->M[2][2] = (float)uVar8;
  __return_storage_ptr__->M[3][0] = (float)uVar1;
  return __return_storage_ptr__;
}

