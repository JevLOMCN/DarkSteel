// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 5

// MakeClampedToRelativeWorldMatrix @ 1417e1440

FDFMatrix * __cdecl
FDFMatrix::MakeClampedToRelativeWorldMatrix
          (FDFMatrix *__return_storage_ptr__,TVector<float> *param_1,TMatrix<double> *param_2)

{
  undefined8 uVar1;
  float fVar2;
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
  double dVar16;
  double dVar17;
  
  dVar16 = param_2->M[3][3];
  dVar5 = param_2->M[1][2];
  dVar6 = param_2->M[1][3];
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar7 = param_2->M[1][0];
  dVar8 = param_2->M[1][1];
  dVar9 = param_2->M[2][2];
  dVar10 = param_2->M[2][3];
  dVar11 = param_2->M[2][0];
  dVar12 = param_2->M[2][1];
  dVar4 = param_2->M[3][0] - (double)(param_1->field0_0x0)._s_0.X;
  if (__real_413fffff00000000 <= dVar4) {
    dVar4 = __real_413fffff00000000;
  }
  dVar17 = param_2->M[3][1] - (double)(param_1->field0_0x0)._s_0.Y;
  if (dVar4 <= __real_c13fffff00000000) {
    dVar4 = __real_c13fffff00000000;
  }
  dVar3 = param_2->M[3][2] - (double)(param_1->field0_0x0)._s_0.Z;
  dVar13 = param_2->M[0][2];
  dVar14 = param_2->M[0][3];
  if (__real_413fffff00000000 <= dVar3) {
    dVar3 = __real_413fffff00000000;
  }
  if (__real_413fffff00000000 <= dVar17) {
    dVar17 = __real_413fffff00000000;
  }
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  if (dVar3 <= __real_c13fffff00000000) {
    dVar3 = __real_c13fffff00000000;
  }
  if (dVar17 <= __real_c13fffff00000000) {
    dVar17 = __real_c13fffff00000000;
  }
  dVar15 = param_2->M[0][1];
  (__return_storage_ptr__->M).M[0][0] = (float)param_2->M[0][0];
  (__return_storage_ptr__->M).M[0][1] = (float)dVar15;
  (__return_storage_ptr__->M).M[0][2] = (float)dVar13;
  (__return_storage_ptr__->M).M[0][3] = (float)dVar14;
  (__return_storage_ptr__->M).M[1][0] = (float)dVar7;
  (__return_storage_ptr__->M).M[1][1] = (float)dVar8;
  (__return_storage_ptr__->M).M[1][2] = (float)dVar5;
  (__return_storage_ptr__->M).M[1][3] = (float)dVar6;
  (__return_storage_ptr__->M).M[2][0] = (float)dVar11;
  (__return_storage_ptr__->M).M[2][1] = (float)dVar12;
  (__return_storage_ptr__->M).M[2][2] = (float)dVar9;
  (__return_storage_ptr__->M).M[2][3] = (float)dVar10;
  (__return_storage_ptr__->M).M[3][0] = (float)dVar4;
  (__return_storage_ptr__->M).M[3][1] = (float)dVar17;
  (__return_storage_ptr__->M).M[3][2] = (float)dVar3;
  (__return_storage_ptr__->M).M[3][3] = (float)dVar16;
  *(undefined8 *)&(__return_storage_ptr__->PostTranslation).field0_0x0 = uVar1;
  (__return_storage_ptr__->PostTranslation).field0_0x0._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// MakeClampedToRelativeWorldMatrixDouble @ 1417e1560

TMatrix<double> * __cdecl
FDFMatrix::MakeClampedToRelativeWorldMatrixDouble
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1,TMatrix<double> *param_2
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = __real_c13fffff00000000;
  dVar5 = __real_413fffff00000000;
  dVar1 = param_2->M[0][1];
  dVar2 = param_2->M[0][2];
  dVar3 = param_2->M[0][3];
  __return_storage_ptr__->M[0][0] = param_2->M[0][0];
  __return_storage_ptr__->M[0][1] = dVar1;
  dVar1 = param_2->M[1][0];
  dVar4 = param_2->M[1][1];
  __return_storage_ptr__->M[0][2] = dVar2;
  __return_storage_ptr__->M[0][3] = dVar3;
  dVar2 = param_2->M[1][2];
  dVar3 = param_2->M[1][3];
  __return_storage_ptr__->M[1][0] = dVar1;
  __return_storage_ptr__->M[1][1] = dVar4;
  dVar1 = param_2->M[2][0];
  dVar4 = param_2->M[2][1];
  __return_storage_ptr__->M[1][2] = dVar2;
  __return_storage_ptr__->M[1][3] = dVar3;
  dVar2 = param_2->M[2][2];
  dVar3 = param_2->M[2][3];
  __return_storage_ptr__->M[2][0] = dVar1;
  __return_storage_ptr__->M[2][1] = dVar4;
  dVar1 = param_2->M[3][0];
  dVar4 = param_2->M[3][1];
  __return_storage_ptr__->M[2][2] = dVar2;
  __return_storage_ptr__->M[2][3] = dVar3;
  dVar2 = param_2->M[3][2];
  dVar3 = param_2->M[3][3];
  __return_storage_ptr__->M[3][0] = dVar1;
  __return_storage_ptr__->M[3][1] = dVar4;
  dVar1 = param_2->M[3][0] - (param_1->field0_0x0)._s_0.X;
  __return_storage_ptr__->M[3][2] = dVar2;
  __return_storage_ptr__->M[3][3] = dVar3;
  dVar2 = param_2->M[3][2] - (param_1->field0_0x0)._s_0.Z;
  if (dVar5 <= dVar1) {
    dVar1 = dVar5;
  }
  if (dVar5 <= dVar2) {
    dVar2 = dVar5;
  }
  if (dVar1 <= dVar6) {
    dVar1 = dVar6;
  }
  if (dVar2 <= dVar6) {
    dVar2 = dVar6;
  }
  __return_storage_ptr__->M[3][0] = dVar1;
  dVar1 = param_2->M[3][1] - (param_1->field0_0x0)._s_0.Y;
  __return_storage_ptr__->M[3][2] = dVar2;
  if (dVar5 <= dVar1) {
    dVar1 = dVar5;
  }
  if (dVar1 <= dVar6) {
    dVar1 = dVar6;
  }
  __return_storage_ptr__->M[3][1] = dVar1;
  return __return_storage_ptr__;
}

// MakeToRelativeWorldMatrix @ 1417e2820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FDFMatrix * __cdecl
FDFMatrix::MakeToRelativeWorldMatrix
          (FDFMatrix *__return_storage_ptr__,TVector<float> *param_1,TMatrix<double> *param_2)

{
  undefined8 uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_148 [32];
  undefined1 local_128 [16];
  undefined1 local_118 [112];
  undefined1 local_a8 [16];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_98.M[0][2] = 0.0;
  local_98.M[0][3] = 0.0;
  local_98.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_98.M[0][1] = _UNK_150689518;
  local_98.M[1][2] = 0.0;
  local_98.M[1][3] = 0.0;
  local_98.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_98.M[2][3] = _UNK_150689518;
  dVar5 = (double)(float)*(undefined8 *)&param_1->field0_0x0;
  dVar6 = (double)(float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
  local_98.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_98.M[1][1] = _UNK_15061cbc8;
  local_98.M[3][0]._0_4_ = SUB84(dVar5,0) ^ (uint)__xmm_80000000000000008000000000000000;
  local_98.M[3][0]._4_4_ =
       (uint)((ulonglong)dVar5 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  local_98.M[3][1]._0_4_ = SUB84(dVar6,0) ^ _UNK_15066df78;
  local_98.M[3][1]._4_4_ = (uint)((ulonglong)dVar6 >> 0x20) ^ _UNK_15066df7c;
  local_98.M[3][2] =
       (double)(float)((uint)(param_1->field0_0x0)._s_0.Z ^ __xmm_80000000800000008000000080000000);
  local_98.M[2][0] = 0.0;
  local_98.M[2][1] = 0.0;
  local_98.M[3][3] = __real_3ff0000000000000;
  VectorMatrixMultiply((TMatrix<double> *)local_118,param_2,&local_98);
  uVar3 = local_118._96_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar4 = local_118._100_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_413fffff00000000 <= (double)CONCAT44(uVar4,uVar3) &&
        (double)CONCAT44(uVar4,uVar3) != __real_413fffff00000000) ||
      (uVar3 = local_118._104_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar4 = local_118._108_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_413fffff00000000 <= (double)CONCAT44(uVar4,uVar3) &&
      (double)CONCAT44(uVar4,uVar3) != __real_413fffff00000000)) ||
     (uVar3 = local_a8._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar4 = local_a8._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_413fffff00000000 <= (double)CONCAT44(uVar4,uVar3) &&
     (double)CONCAT44(uVar4,uVar3) != __real_413fffff00000000)) {
    `CheckMatrixPrecision'::__l2::<lambda_1>::operator()(local_128);
  }
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  *(ulonglong *)(__return_storage_ptr__->M).M[0] =
       CONCAT44((float)(double)local_118._8_8_,(float)(double)local_118._0_8_);
  *(ulonglong *)((__return_storage_ptr__->M).M[0] + 2) =
       CONCAT44((float)(double)local_118._24_8_,(float)(double)local_118._16_8_);
  (__return_storage_ptr__->M).M[1][0] = (float)(double)local_118._32_8_;
  (__return_storage_ptr__->M).M[1][1] = (float)(double)local_118._40_8_;
  (__return_storage_ptr__->M).M[1][2] = (float)(double)local_118._48_8_;
  (__return_storage_ptr__->M).M[1][3] = (float)(double)local_118._56_8_;
  (__return_storage_ptr__->M).M[2][0] = (float)(double)local_118._64_8_;
  (__return_storage_ptr__->M).M[2][1] = (float)(double)local_118._72_8_;
  (__return_storage_ptr__->M).M[2][2] = (float)(double)local_118._80_8_;
  (__return_storage_ptr__->M).M[2][3] = (float)(double)local_118._88_8_;
  *(ulonglong *)(__return_storage_ptr__->M).M[3] =
       CONCAT44((float)local_118._104_8_,(float)local_118._96_8_);
  *(ulonglong *)((__return_storage_ptr__->M).M[3] + 2) =
       CONCAT44((float)local_a8._8_8_,(float)local_a8._0_8_);
  *(undefined8 *)&(__return_storage_ptr__->PostTranslation).field0_0x0 = uVar1;
  (__return_storage_ptr__->PostTranslation).field0_0x0._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// MakeToRelativeWorldMatrixDouble @ 1417e29b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __cdecl
FDFMatrix::MakeToRelativeWorldMatrixDouble
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1,TMatrix<double> *param_2
          )

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_148 [32];
  undefined1 local_128 [16];
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_98.M[0][2] = 0.0;
  local_98.M[0][3] = 0.0;
  local_98.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_98.M[0][1] = _UNK_150689518;
  local_98.M[1][2] = 0.0;
  local_98.M[1][3] = 0.0;
  local_98.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_98.M[1][1] = _UNK_15061cbc8;
  local_98.M[2][0] = 0.0;
  local_98.M[2][1] = 0.0;
  local_98.M[3][0]._0_4_ =
       *(uint *)&param_1->field0_0x0 ^ (uint)__xmm_80000000000000008000000000000000;
  local_98.M[3][0]._4_4_ =
       *(uint *)((longlong)&param_1->field0_0x0 + 4) ^ __xmm_80000000000000008000000000000000._4_4_;
  local_98.M[3][1]._0_4_ = *(uint *)((longlong)&param_1->field0_0x0 + 8) ^ _UNK_15066df78;
  local_98.M[3][1]._4_4_ = *(uint *)((longlong)&param_1->field0_0x0 + 0xc) ^ _UNK_15066df7c;
  local_98.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_98.M[2][3] = _UNK_150689518;
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  local_98.M[3][2] =
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar1 ^ (uint)__xmm_80000000000000008000000000000000);
  local_98.M[3][3] = __real_3ff0000000000000;
  VectorMatrixMultiply(&local_118,param_2,&local_98);
  uVar2 = SUB84(local_118.M[3][0],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar3 = (uint)((ulonglong)local_118.M[3][0] >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_413fffff00000000 <= (double)CONCAT44(uVar3,uVar2) &&
        (double)CONCAT44(uVar3,uVar2) != __real_413fffff00000000) ||
      (uVar2 = SUB84(local_118.M[3][1],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar3 = (uint)((ulonglong)local_118.M[3][1] >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_413fffff00000000 <= (double)CONCAT44(uVar3,uVar2) &&
      (double)CONCAT44(uVar3,uVar2) != __real_413fffff00000000)) ||
     (uVar2 = SUB84(local_118.M[3][2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar3 = (uint)((ulonglong)local_118.M[3][2] >> 0x20) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_413fffff00000000 <= (double)CONCAT44(uVar3,uVar2) &&
     (double)CONCAT44(uVar3,uVar2) != __real_413fffff00000000)) {
    `CheckMatrixPrecision'::__l2::<lambda_1>::operator()(local_128);
  }
  __return_storage_ptr__->M[0][0] = local_118.M[0][0];
  __return_storage_ptr__->M[0][1] = local_118.M[0][1];
  __return_storage_ptr__->M[0][2] = local_118.M[0][2];
  __return_storage_ptr__->M[0][3] = local_118.M[0][3];
  __return_storage_ptr__->M[1][0] = local_118.M[1][0];
  __return_storage_ptr__->M[1][1] = local_118.M[1][1];
  __return_storage_ptr__->M[1][2] = local_118.M[1][2];
  __return_storage_ptr__->M[1][3] = local_118.M[1][3];
  __return_storage_ptr__->M[2][0] = local_118.M[2][0];
  __return_storage_ptr__->M[2][1] = local_118.M[2][1];
  __return_storage_ptr__->M[2][2] = local_118.M[2][2];
  __return_storage_ptr__->M[2][3] = local_118.M[2][3];
  __return_storage_ptr__->M[3][0] = local_118.M[3][0];
  __return_storage_ptr__->M[3][1] = local_118.M[3][1];
  __return_storage_ptr__->M[3][2] = local_118.M[3][2];
  __return_storage_ptr__->M[3][3] = local_118.M[3][3];
  return __return_storage_ptr__;
}

// SafeCastMatrix @ 1417f8290

TMatrix<float> * __cdecl
FDFMatrix::SafeCastMatrix(TMatrix<float> *__return_storage_ptr__,TMatrix<double> *param_1)

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
  undefined1 local_38 [48];
  
  dVar1 = param_1->M[3][0];
  if (((__real_413fffff00000000 <
        (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
      (dVar1 = param_1->M[3][1],
      __real_413fffff00000000 <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
     (dVar1 = param_1->M[3][2],
     __real_413fffff00000000 <
     (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
    `CheckMatrixPrecision'::__l2::<lambda_1>::operator()(local_38);
  }
  dVar1 = param_1->M[0][2];
  dVar2 = param_1->M[0][3];
  dVar3 = param_1->M[3][0];
  dVar4 = param_1->M[3][1];
  dVar5 = param_1->M[3][2];
  dVar6 = param_1->M[3][3];
  dVar7 = param_1->M[1][2];
  dVar8 = param_1->M[1][3];
  dVar9 = param_1->M[1][0];
  dVar10 = param_1->M[1][1];
  dVar11 = param_1->M[2][2];
  dVar12 = param_1->M[2][3];
  dVar13 = param_1->M[2][0];
  dVar14 = param_1->M[2][1];
  *(ulonglong *)__return_storage_ptr__->M[0] =
       CONCAT44((float)param_1->M[0][1],(float)param_1->M[0][0]);
  *(ulonglong *)(__return_storage_ptr__->M[0] + 2) = CONCAT44((float)dVar2,(float)dVar1);
  __return_storage_ptr__->M[1][0] = (float)dVar9;
  __return_storage_ptr__->M[1][1] = (float)dVar10;
  __return_storage_ptr__->M[1][2] = (float)dVar7;
  __return_storage_ptr__->M[1][3] = (float)dVar8;
  __return_storage_ptr__->M[3][0] = (float)dVar3;
  __return_storage_ptr__->M[3][1] = (float)dVar4;
  __return_storage_ptr__->M[3][2] = (float)dVar5;
  __return_storage_ptr__->M[3][3] = (float)dVar6;
  *(ulonglong *)__return_storage_ptr__->M[2] = CONCAT44((float)dVar14,(float)dVar13);
  *(ulonglong *)(__return_storage_ptr__->M[2] + 2) = CONCAT44((float)dVar12,(float)dVar11);
  return __return_storage_ptr__;
}

