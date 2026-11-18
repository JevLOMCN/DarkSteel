// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// TInverseRotationMatrix<double> @ 144a59000

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TInverseRotationMatrix<double> * __thiscall
UE::Math::TInverseRotationMatrix<double>::TInverseRotationMatrix<double>
          (TInverseRotationMatrix<double> *this,TRotator<double> *param_1)

{
  uint extraout_XMM0_Da;
  uint extraout_XMM0_Da_00;
  uint extraout_XMM0_Da_01;
  uint extraout_XMM0_Db;
  uint extraout_XMM0_Db_00;
  uint extraout_XMM0_Db_01;
  undefined1 auStack_248 [32];
  TMatrix<double> local_228;
  TMatrix<double> local_1a8;
  TMatrix<double> local_128;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_248;
  __libm_sse2_sincos_();
  local_128.M[0][1] =
       (double)CONCAT44(extraout_XMM0_Db ^ __xmm_80000000000000008000000000000000._4_4_,
                        extraout_XMM0_Da ^ (uint)__xmm_80000000000000008000000000000000);
  local_128.M[1][2] = 0.0;
  local_128.M[1][3] = 0.0;
  local_128.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_128.M[2][3] = _UNK_150689518;
  local_128.M[0][2] = 0.0;
  local_128.M[0][3] = 0.0;
  local_128.M[2][0] = 0.0;
  local_128.M[2][1] = 0.0;
  local_128.M[3][0] = 0.0;
  local_128.M[3][1] = 0.0;
  local_128.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_128.M[3][3] = _UNK_15061cbc8;
  __libm_sse2_sincos_();
  local_228.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_228.M[1][1] = _UNK_15061cbc8;
  local_228.M[0][1] = 0.0;
  local_228.M[0][3] = 0.0;
  local_228.M[0][2] =
       (double)CONCAT44(extraout_XMM0_Db_00 ^ __xmm_80000000000000008000000000000000._4_4_,
                        extraout_XMM0_Da_00 ^ (uint)__xmm_80000000000000008000000000000000);
  local_228.M[2][1] = 0.0;
  local_228.M[2][3] = 0.0;
  local_228.M[1][2] = 0.0;
  local_228.M[1][3] = 0.0;
  local_228.M[3][0] = 0.0;
  local_228.M[3][1] = 0.0;
  local_228.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_228.M[3][3] = _UNK_15061cbc8;
  VectorMatrixMultiply(&local_a8,&local_128,&local_228);
  __libm_sse2_sincos_();
  local_1a8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_1a8.M[0][1] = _UNK_150689518;
  local_1a8.M[2][1] =
       (double)CONCAT44(extraout_XMM0_Db_01 ^ __xmm_80000000000000008000000000000000._4_4_,
                        extraout_XMM0_Da_01 ^ (uint)__xmm_80000000000000008000000000000000);
  local_1a8.M[0][2] = 0.0;
  local_1a8.M[0][3] = 0.0;
  local_1a8.M[3][0] = 0.0;
  local_1a8.M[3][1] = 0.0;
  local_1a8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
  local_1a8.M[3][3] = _UNK_15061cbc8;
  local_1a8.M[1][0] = 0.0;
  local_1a8.M[2][3] = 0.0;
  local_1a8.M[1][3] = 0.0;
  local_1a8.M[2][0] = 0.0;
  VectorMatrixMultiply((TMatrix<double> *)this,&local_a8,&local_1a8);
  return this;
}

