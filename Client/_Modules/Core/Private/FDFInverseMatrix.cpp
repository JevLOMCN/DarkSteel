// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// MakeFromRelativeWorldMatrix @ 1417e20a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FDFInverseMatrix * __cdecl
FDFInverseMatrix::MakeFromRelativeWorldMatrix
          (FDFInverseMatrix *__return_storage_ptr__,TVector<float> *param_1,TMatrix<double> *param_2
          )

{
  undefined8 uVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_148 [32];
  undefined1 local_128 [16];
  undefined1 local_118 [112];
  undefined1 local_a8 [16];
  undefined1 local_98 [112];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_98._16_8_ = 0.0;
  local_98._24_8_ = 0.0;
  local_98._0_8_ = ___xmm_00000000000000003ff0000000000000;
  local_98._8_8_ = _UNK_150689518;
  local_98._32_8_ = ___xmm_3ff00000000000000000000000000000;
  local_98._40_8_ = _UNK_15061cbc8;
  local_98._48_8_ = 0.0;
  local_98._56_8_ = 0.0;
  dVar3 = (double)(float)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20);
  local_98._64_8_ = 0.0;
  local_98._72_8_ = 0.0;
  local_28 = (double)(param_1->field0_0x0)._s_0.Z;
  local_98._104_4_ = SUB84(dVar3,0);
  local_98._96_8_ = (double)(float)*(undefined8 *)&param_1->field0_0x0;
  local_98._108_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_20 = __real_3ff0000000000000;
  local_98._80_8_ = ___xmm_00000000000000003ff0000000000000;
  local_98._88_8_ = _UNK_150689518;
  VectorMatrixMultiply((TMatrix<double> *)local_118,(TMatrix<double> *)local_98,param_2);
  uVar4 = local_118._96_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = local_118._100_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_413fffff00000000 <= (double)CONCAT44(uVar5,uVar4) &&
        (double)CONCAT44(uVar5,uVar4) != __real_413fffff00000000) ||
      (uVar4 = local_118._104_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar5 = local_118._108_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_413fffff00000000 <= (double)CONCAT44(uVar5,uVar4) &&
      (double)CONCAT44(uVar5,uVar4) != __real_413fffff00000000)) ||
     (uVar4 = local_a8._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar5 = local_a8._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_413fffff00000000 <= (double)CONCAT44(uVar5,uVar4) &&
     (double)CONCAT44(uVar5,uVar4) != __real_413fffff00000000)) {
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
  *(undefined8 *)&(__return_storage_ptr__->PreTranslation).field0_0x0 = uVar1;
  (__return_storage_ptr__->PreTranslation).field0_0x0._s_0.Z = fVar2;
  return __return_storage_ptr__;
}

// MakeFromRelativeWorldMatrixDouble @ 1417e2220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TMatrix<double> * __cdecl
FDFInverseMatrix::MakeFromRelativeWorldMatrixDouble
          (TMatrix<double> *__return_storage_ptr__,TVector<double> *param_1,TMatrix<double> *param_2
          )

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_148 [32];
  undefined1 local_128 [16];
  TMatrix<double> local_118;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_98.M[0][2] = 0.0;
  local_98.M[0][3] = 0.0;
  local_98.M[1][2] = 0.0;
  local_98.M[1][3] = 0.0;
  local_98.M[3][0] = (param_1->field0_0x0)._s_0.X;
  local_98.M[3][1] = (param_1->field0_0x0)._s_0.Y;
  local_98.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_98.M[1][1] = _UNK_15061cbc8;
  local_98.M[3][2] = (param_1->field0_0x0)._s_0.Z;
  local_98.M[2][0] = 0.0;
  local_98.M[2][1] = 0.0;
  local_98.M[3][3] = __real_3ff0000000000000;
  local_98.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_98.M[0][1] = _UNK_150689518;
  local_98.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_98.M[2][3] = _UNK_150689518;
  VectorMatrixMultiply(&local_118,&local_98,param_2);
  uVar1 = SUB84(local_118.M[3][0],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar2 = (uint)((ulonglong)local_118.M[3][0] >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((__real_413fffff00000000 <= (double)CONCAT44(uVar2,uVar1) &&
        (double)CONCAT44(uVar2,uVar1) != __real_413fffff00000000) ||
      (uVar1 = SUB84(local_118.M[3][1],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar2 = (uint)((ulonglong)local_118.M[3][1] >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      __real_413fffff00000000 <= (double)CONCAT44(uVar2,uVar1) &&
      (double)CONCAT44(uVar2,uVar1) != __real_413fffff00000000)) ||
     (uVar1 = SUB84(local_118.M[3][2],0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
     uVar2 = (uint)((ulonglong)local_118.M[3][2] >> 0x20) &
             __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
     __real_413fffff00000000 <= (double)CONCAT44(uVar2,uVar1) &&
     (double)CONCAT44(uVar2,uVar1) != __real_413fffff00000000)) {
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

