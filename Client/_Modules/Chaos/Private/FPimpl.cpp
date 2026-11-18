// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 16

// Solve<Eigen::DiagonalPreconditioner<float>_> @ 143bc81e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FPimpl::
Solve<Eigen::DiagonalPreconditioner<float>_>
          (FPimpl *this,TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,
          TArrayView<Chaos::TVector<float,3>,int> *param_2,int param_3,float param_4,bool param_5,
          int *param_6,float *param_7)

{
  float fVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_1f8 [32];
  assign_op<float,float> local_1d8 [8];
  evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,_1,1>_>_>
  local_1d0;
  Map<Eigen::Matrix<float,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_1c8;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,_1,1>_>_>,Eigen::internal::assign_op<float,float>,0>
  local_1a8;
  TVector<float,3> *local_188 [2];
  longlong local_178;
  Map<Eigen::Matrix<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_> local_170;
  undefined1 local_150 [8];
  undefined1 local_148 [168];
  void *local_a0;
  void *local_98;
  void *local_90;
  bool local_78;
  DenseStorage<float,_1,_1,1,0> local_70;
  undefined1 local_60;
  longlong local_58;
  float local_50;
  float local_4c;
  int local_48;
  int local_40;
  undefined2 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FPimpl::Solve<Eigen::DiagonalPreconditioner<float>_>(TArrayView<Chaos::TVector<float,3>_const_,int>_const&___ptr64,TArrayView<Chaos::TVector<float,3>,int>_const&___ptr64,int,float,bool,int*___ptr64,float*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId118,"ChaosBlockSparseLinearSystem_CGSolve",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
               ,0x76);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FPimpl::Solve<Eigen::DiagonalPreconditioner<float>_>(TArrayView<Chaos::TVector<float,3>_const_,int>_const&___ptr64,TArrayView<Chaos::TVector<float,3>,int>_const&___ptr64,int,float,bool,int*___ptr64,float*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId118);
  }
  if ((param_2->ArrayNum != param_1->ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Num() == RHS.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                         ,0x77,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_170._padding_ = (longlong)param_1->DataPtr;
  local_150[0] = 0;
  local_170._padding_ = (longlong)(param_1->ArrayNum * 3);
  local_1c8._padding_ = (longlong)param_2->DataPtr;
  local_1c8._padding_ = (longlong)(param_2->ArrayNum * 3);
  Eigen::SparseMatrix<float,1,int>::SparseMatrix<float,1,int>
            ((SparseMatrix<float,1,int> *)local_148,0,0);
  Eigen::Ref<Eigen::SparseMatrix<float,1,int>_const_,0,Eigen::OuterStride<-1>_>::
  Ref<Eigen::SparseMatrix<float,1,int>_const_,0,Eigen::OuterStride<_1>_><Eigen::SparseMatrix<float,1,int>_>
            ((Ref<Eigen::SparseMatrix<float,1,int>_const_,0,Eigen::OuterStride<_1>_> *)
             (local_148 + 0x48),(SparseMatrixBase<Eigen::SparseMatrix<float,1,int>_> *)local_148);
  local_70.m_data = (float *)0x0;
  local_70.m_rows = 0;
  local_60 = 0;
  local_50 = param_4;
  local_150[0] = 0;
  local_3c = 0;
  local_58 = (longlong)param_3;
  if (local_78 != false) {
    FMemory_Free((void *)local_148._160_8_);
    FMemory_Free(local_a0);
    operator_delete__(local_98);
    operator_delete__(local_90);
  }
  Eigen::Ref<Eigen::SparseMatrix<float,1,int>_const_,0,Eigen::OuterStride<-1>_>::
  Ref<Eigen::SparseMatrix<float,1,int>_const_,0,Eigen::OuterStride<_1>_><Eigen::SparseMatrix<float,1,int>_>
            ((Ref<Eigen::SparseMatrix<float,1,int>_const_,0,Eigen::OuterStride<_1>_> *)
             (local_148 + 0x48),(SparseMatrixBase<Eigen::SparseMatrix<float,1,int>_> *)this);
  Eigen::DenseStorage<float,-1,-1,1,0>::resize(&local_70,local_148._88_8_,local_148._88_8_,1);
  fVar3 = __real_3f800000;
  iVar8 = 0;
  if (0 < (longlong)local_148._80_8_) {
    lVar9 = 0;
    do {
      lVar7 = (longlong)*(int *)(lVar9 + local_148._104_8_);
      if (local_148._128_8_ == 0) {
        lVar6 = (longlong)*(int *)(lVar9 + 4 + local_148._104_8_);
      }
      else {
        lVar6 = *(int *)(lVar9 + local_148._128_8_) + lVar7;
      }
      for (; lVar7 < lVar6; lVar7 = lVar7 + 1) {
        if (*(int *)(local_148._112_8_ + lVar7 * 4) == iVar8) {
          if (((lVar7 < lVar6) && (*(int *)(local_148._112_8_ + lVar7 * 4) == iVar8)) &&
             (fVar1 = *(float *)(local_148._120_8_ + lVar7 * 4), fVar1 != 0.0)) {
            *(float *)(lVar9 + (longlong)local_70.m_data) = fVar3 / fVar1;
            goto LAB_143bc83e1;
          }
          break;
        }
      }
      *(undefined4 *)(lVar9 + (longlong)local_70.m_data) = 0x3f800000;
LAB_143bc83e1:
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar8 < (longlong)local_148._80_8_);
  }
  local_188[0] = (TVector<float,3> *)local_1c8._padding_;
  local_178 = local_1c8._padding_;
  local_1a8.m_dst =
       (evaluator<Eigen::Map<Eigen::Matrix<float,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> *)local_188;
  local_1a8.m_src = &local_1d0;
  local_1a8.m_functor = local_1d8;
  local_1a8.m_dstExpr = &local_1c8;
  local_60 = 1;
  local_150[0] = 1;
  local_3c = 0x101;
  local_40 = 0;
  local_1d0.m_functor.m_other = 0.0;
  Eigen::internal::
  dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,-1,1,0,-1,1>_>_>,Eigen::internal::assign_op<float,float>,0>,3,0>
  ::run(&local_1a8);
  Eigen::ConjugateGradient<Eigen::SparseMatrix<float,1,int>,3,Eigen::DiagonalPreconditioner<float>_>
  ::
  _solve_vector_with_guess_impl<Eigen::Map<Eigen::Matrix<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<float,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>
            ((ConjugateGradient<Eigen::SparseMatrix<float,1,int>,3,Eigen::DiagonalPreconditioner<float>_>
              *)local_150,&local_170,&local_1c8);
  if (param_6 != (int *)0x0) {
    *param_6 = local_48;
  }
  if (param_7 != (float *)0x0) {
    *param_7 = local_4c;
  }
  bVar4 = local_40 == 0;
  FMemory_Free(local_70.m_data);
  Eigen::internal::generic_matrix_wrapper<Eigen::SparseMatrix<float,1,int>,0>::
  ~generic_matrix_wrapper<Eigen::SparseMatrix<float,1,int>,0>
            ((generic_matrix_wrapper<Eigen::SparseMatrix<float,1,int>,0> *)local_148);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// Solve<Eigen::DiagonalPreconditioner<double>_> @ 143bc8530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FPimpl::
Solve<Eigen::DiagonalPreconditioner<double>_>
          (FPimpl *this,TArrayView<Chaos::TVector<double,3>_const_,int> *param_1,
          TArrayView<Chaos::TVector<double,3>,int> *param_2,int param_3,double param_4,bool param_5,
          int *param_6,double *param_7)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_208 [32];
  assign_op<double,double> local_1e8 [8];
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_1e0;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_>_>,Eigen::internal::assign_op<double,double>,0>
  local_1c0;
  evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_>_>
  local_1a0;
  TVector<double,3> *local_190 [2];
  longlong local_180;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_> local_178;
  undefined1 local_158 [8];
  undefined1 local_150 [168];
  void *local_a8;
  void *local_a0;
  void *local_98;
  bool local_80;
  DenseStorage<double,_1,_1,1,0> local_78;
  undefined1 local_68;
  longlong local_60;
  double local_58;
  double local_50;
  int local_48;
  int local_40;
  undefined2 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_208;
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FPimpl::Solve<Eigen::DiagonalPreconditioner<double>_>(TArrayView<Chaos::TVector<double,3>_const_,int>_const&___ptr64,TArrayView<Chaos::TVector<double,3>,int>_const&___ptr64,int,double,bool,int*___ptr64,double*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId118,"ChaosBlockSparseLinearSystem_CGSolve",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
               ,0x76);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FPimpl::Solve<Eigen::DiagonalPreconditioner<double>_>(TArrayView<Chaos::TVector<double,3>_const_,int>_const&___ptr64,TArrayView<Chaos::TVector<double,3>,int>_const&___ptr64,int,double,bool,int*___ptr64,double*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId118);
  }
  if ((param_2->ArrayNum != param_1->ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Num() == RHS.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                         ,0x77,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  local_178._padding_ = (longlong)param_1->DataPtr;
  local_158[0] = 0;
  local_178._padding_ = (longlong)(param_1->ArrayNum * 3);
  local_1e0._padding_ = (longlong)param_2->DataPtr;
  local_1e0._padding_ = (longlong)(param_2->ArrayNum * 3);
  Eigen::SparseMatrix<double,1,int>::SparseMatrix<double,1,int>
            ((SparseMatrix<double,1,int> *)local_150,0,0);
  Eigen::Ref<Eigen::SparseMatrix<double,1,int>_const_,0,Eigen::OuterStride<-1>_>::
  Ref<Eigen::SparseMatrix<double,1,int>_const_,0,Eigen::OuterStride<_1>_><Eigen::SparseMatrix<double,1,int>_>
            ((Ref<Eigen::SparseMatrix<double,1,int>_const_,0,Eigen::OuterStride<_1>_> *)
             (local_150 + 0x48),(SparseMatrixBase<Eigen::SparseMatrix<double,1,int>_> *)local_150);
  local_78.m_data = (double *)0x0;
  local_78.m_rows = 0;
  local_68 = 0;
  local_58 = param_4;
  local_158[0] = 0;
  local_3c = 0;
  local_60 = (longlong)param_3;
  if (local_80 != false) {
    FMemory_Free((void *)local_150._160_8_);
    FMemory_Free(local_a8);
    operator_delete__(local_a0);
    operator_delete__(local_98);
  }
  Eigen::Ref<Eigen::SparseMatrix<double,1,int>_const_,0,Eigen::OuterStride<-1>_>::
  Ref<Eigen::SparseMatrix<double,1,int>_const_,0,Eigen::OuterStride<_1>_><Eigen::SparseMatrix<double,1,int>_>
            ((Ref<Eigen::SparseMatrix<double,1,int>_const_,0,Eigen::OuterStride<_1>_> *)
             (local_150 + 0x48),(SparseMatrixBase<Eigen::SparseMatrix<double,1,int>_> *)this);
  Eigen::DenseStorage<double,-1,-1,1,0>::resize(&local_78,local_150._88_8_,local_150._88_8_,1);
  dVar3 = __real_3ff0000000000000;
  iVar8 = 0;
  if (0 < (longlong)local_150._80_8_) {
    lVar10 = 0;
    lVar9 = 0;
    do {
      lVar7 = (longlong)*(int *)(lVar9 + local_150._104_8_);
      if (local_150._128_8_ == 0) {
        lVar6 = (longlong)*(int *)(lVar9 + 4 + local_150._104_8_);
      }
      else {
        lVar6 = *(int *)(lVar9 + local_150._128_8_) + lVar7;
      }
      for (; lVar7 < lVar6; lVar7 = lVar7 + 1) {
        if (*(int *)(local_150._112_8_ + lVar7 * 4) == iVar8) {
          if (((lVar7 < lVar6) && (*(int *)(local_150._112_8_ + lVar7 * 4) == iVar8)) &&
             (dVar1 = *(double *)(local_150._120_8_ + lVar7 * 8), dVar1 != 0.0)) {
            *(double *)(lVar10 + (longlong)local_78.m_data) = dVar3 / dVar1;
            goto LAB_143bc873d;
          }
          break;
        }
      }
      *(undefined8 *)(lVar10 + (longlong)local_78.m_data) = 0x3ff0000000000000;
LAB_143bc873d:
      iVar8 = iVar8 + 1;
      lVar9 = lVar9 + 4;
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar8 < (longlong)local_150._80_8_);
  }
  local_190[0] = (TVector<double,3> *)local_1e0._padding_;
  local_180 = local_1e0._padding_;
  local_1c0.m_dst =
       (evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> *)local_190;
  local_1c0.m_src = &local_1a0;
  local_1c0.m_functor = local_1e8;
  local_1c0.m_dstExpr = &local_1e0;
  local_1a0.m_functor.m_other = 0.0;
  local_68 = 1;
  local_158[0] = 1;
  local_3c = 0x101;
  local_40 = 0;
  Eigen::internal::
  dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,-1,1,0,-1,1>_>_>,Eigen::internal::assign_op<double,double>,0>,3,0>
  ::run(&local_1c0);
  Eigen::
  ConjugateGradient<Eigen::SparseMatrix<double,1,int>,3,Eigen::DiagonalPreconditioner<double>_>::
  _solve_vector_with_guess_impl<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>
            ((ConjugateGradient<Eigen::SparseMatrix<double,1,int>,3,Eigen::DiagonalPreconditioner<double>_>
              *)local_158,&local_178,&local_1e0);
  if (param_6 != (int *)0x0) {
    *param_6 = local_48;
  }
  if (param_7 != (double *)0x0) {
    *param_7 = local_50;
  }
  bVar4 = local_40 == 0;
  FMemory_Free(local_78.m_data);
  Eigen::internal::generic_matrix_wrapper<Eigen::SparseMatrix<double,1,int>,0>::
  ~generic_matrix_wrapper<Eigen::SparseMatrix<double,1,int>,0>
            ((generic_matrix_wrapper<Eigen::SparseMatrix<double,1,int>,0> *)local_150);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// Solve<Eigen::IncompleteCholesky<float,3,Eigen::AMDOrdering<int>_>_> @ 143bc8890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FPimpl::
Solve<Eigen::IncompleteCholesky<float,3,Eigen::AMDOrdering<int>_>_>
          (FPimpl *this,TArrayView<Chaos::TVector<float,3>_const_,int> *param_1,
          TArrayView<Chaos::TVector<float,3>,int> *param_2,int param_3,float param_4,bool param_5,
          int *param_6,float *param_7)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 auStack_258 [32];
  assign_op<float,float> local_238 [8];
  evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,_1,1>_>_>
  local_230;
  Map<Eigen::Matrix<float,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_228;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,_1,1,0,_1,1>_>_>,Eigen::internal::assign_op<float,float>,0>
  local_208;
  TVector<float,3> *local_1e8 [2];
  longlong local_1d8;
  Map<Eigen::Matrix<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_> local_1d0;
  undefined1 local_1b0 [8];
  generic_matrix_wrapper<Eigen::SparseMatrix<float,1,int>,0> local_1a8;
  undefined1 local_d0;
  SparseMatrix<float,0,int> local_c8;
  void *local_80;
  undefined8 uStack_78;
  float local_70;
  undefined2 local_6c;
  void *local_60;
  undefined8 uStack_58;
  longlong local_50;
  float local_48;
  float local_44;
  int local_40;
  ComputationInfo local_38;
  undefined2 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_258;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FPimpl::Solve<Eigen::IncompleteCholesky<float,3,Eigen::AMDOrdering<int>_>_>(TArrayView<Chaos::TVector<float,3>_const_,int>_const&___ptr64,TArrayView<Chaos::TVector<float,3>,int>_const&___ptr64,int,float,bool,int*___ptr64,float*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId118,"ChaosBlockSparseLinearSystem_CGSolve",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
               ,0x76);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FPimpl::Solve<Eigen::IncompleteCholesky<float,3,Eigen::AMDOrdering<int>_>_>(TArrayView<Chaos::TVector<float,3>_const_,int>_const&___ptr64,TArrayView<Chaos::TVector<float,3>,int>_const&___ptr64,int,float,bool,int*___ptr64,float*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId118);
  }
  if ((param_2->ArrayNum != param_1->ArrayNum) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Num() == RHS.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                         ,0x77,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_1d0._padding_ = (longlong)param_1->DataPtr;
  local_1b0[0] = 0;
  local_1d0._padding_ = (longlong)(param_1->ArrayNum * 3);
  local_228._padding_ = (longlong)param_2->DataPtr;
  local_228._padding_ = (longlong)(param_2->ArrayNum * 3);
  Eigen::SparseMatrix<float,1,int>::SparseMatrix<float,1,int>
            ((SparseMatrix<float,1,int> *)(local_1b0 + 8),0,0);
  Eigen::Ref<Eigen::SparseMatrix<float,1,int>_const_,0,Eigen::OuterStride<-1>_>::
  Ref<Eigen::SparseMatrix<float,1,int>_const_,0,Eigen::OuterStride<_1>_><Eigen::SparseMatrix<float,1,int>_>
            ((Ref<Eigen::SparseMatrix<float,1,int>_const_,0,Eigen::OuterStride<_1>_> *)
             (local_1b0 + 0x50),
             (SparseMatrixBase<Eigen::SparseMatrix<float,1,int>_> *)(local_1b0 + 8));
  local_d0 = 0;
  Eigen::SparseMatrix<float,0,int>::SparseMatrix<float,0,int>
            ((SparseMatrix<float,0,int> *)(local_1b0 + 0xe8));
  local_70 = 0.001;
  local_80 = (void *)0x0;
  uStack_78 = 0;
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_6c._0_1_ = false;
  local_6c._1_1_ = false;
  local_48 = param_4;
  local_1b0[0] = 0;
  local_34._0_1_ = false;
  local_34._1_1_ = false;
  local_50 = (longlong)param_3;
  Eigen::
  IterativeSolverBase<Eigen::ConjugateGradient<Eigen::SparseMatrix<float,1,int>,3,Eigen::IncompleteCholesky<float,3,Eigen::AMDOrdering<int>_>_>_>
  ::compute<Eigen::SparseMatrix<float,1,int>_>
            ((IterativeSolverBase<Eigen::ConjugateGradient<Eigen::SparseMatrix<float,1,int>,3,Eigen::IncompleteCholesky<float,3,Eigen::AMDOrdering<int>_>_>_>
              *)local_1b0,(EigenBase<Eigen::SparseMatrix<float,1,int>_> *)this);
  local_1e8[0] = (TVector<float,3> *)local_228._padding_;
  local_1d8 = local_228._padding_;
  local_208.m_dst =
       (evaluator<Eigen::Map<Eigen::Matrix<float,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> *)local_1e8;
  local_208.m_src = &local_230;
  local_208.m_functor = local_238;
  local_208.m_dstExpr = &local_228;
  local_230.m_functor.m_other = 0.0;
  Eigen::internal::
  dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<float,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<float>,Eigen::Matrix<float,-1,1,0,-1,1>_>_>,Eigen::internal::assign_op<float,float>,0>,3,0>
  ::run(&local_208);
  Eigen::
  ConjugateGradient<Eigen::SparseMatrix<float,1,int>,3,Eigen::IncompleteCholesky<float,3,Eigen::AMDOrdering<int>_>_>
  ::
  _solve_vector_with_guess_impl<Eigen::Map<Eigen::Matrix<float,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<float,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>
            ((ConjugateGradient<Eigen::SparseMatrix<float,1,int>,3,Eigen::IncompleteCholesky<float,3,Eigen::AMDOrdering<int>_>_>
              *)local_1b0,&local_1d0,&local_228);
  if (param_6 != (int *)0x0) {
    *param_6 = local_40;
  }
  if (param_7 != (float *)0x0) {
    *param_7 = local_44;
  }
  FMemory_Free(local_60);
  FMemory_Free(local_80);
  FMemory_Free(local_c8.m_outerIndex);
  FMemory_Free(local_c8.m_innerNonZeros);
  operator_delete__(local_c8.m_data.m_values);
  operator_delete__(local_c8.m_data.m_indices);
  Eigen::internal::generic_matrix_wrapper<Eigen::SparseMatrix<float,1,int>,0>::
  ~generic_matrix_wrapper<Eigen::SparseMatrix<float,1,int>,0>
            ((generic_matrix_wrapper<Eigen::SparseMatrix<float,1,int>,0> *)(local_1b0 + 8));
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return local_38 == Success;
}

// Solve<Eigen::IncompleteCholesky<double,3,Eigen::AMDOrdering<int>_>_> @ 143bc8b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FPimpl::
Solve<Eigen::IncompleteCholesky<double,3,Eigen::AMDOrdering<int>_>_>
          (FPimpl *this,TArrayView<Chaos::TVector<double,3>_const_,int> *param_1,
          TArrayView<Chaos::TVector<double,3>,int> *param_2,int param_3,double param_4,bool param_5,
          int *param_6,double *param_7)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 auStack_268 [32];
  assign_op<double,double> local_248 [8];
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_240;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_>_>,Eigen::internal::assign_op<double,double>,0>
  local_220;
  evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_>_>
  local_200;
  TVector<double,3> *local_1f0 [2];
  longlong local_1e0;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_> local_1d8;
  undefined1 local_1b8 [8];
  generic_matrix_wrapper<Eigen::SparseMatrix<double,1,int>,0> local_1b0;
  undefined1 local_d8;
  SparseMatrix<double,0,int> local_d0;
  void *local_88;
  undefined8 uStack_80;
  double local_78;
  undefined2 local_70;
  void *local_68;
  undefined8 uStack_60;
  longlong local_58;
  double local_50;
  double local_48;
  int local_40;
  ComputationInfo local_38;
  undefined2 local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_268;
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_bool___cdecl_Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FPimpl::Solve<Eigen::IncompleteCholesky<double,3,Eigen::AMDOrdering<int>_>_>(TArrayView<Chaos::TVector<double,3>_const_,int>_const&___ptr64,TArrayView<Chaos::TVector<double,3>,int>_const&___ptr64,int,double,bool,int*___ptr64,double*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId118,"ChaosBlockSparseLinearSystem_CGSolve",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
               ,0x76);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_bool___cdecl_Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FPimpl::Solve<Eigen::IncompleteCholesky<double,3,Eigen::AMDOrdering<int>_>_>(TArrayView<Chaos::TVector<double,3>_const_,int>_const&___ptr64,TArrayView<Chaos::TVector<double,3>,int>_const&___ptr64,int,double,bool,int*___ptr64,double*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId118);
  }
  if ((param_2->ArrayNum != param_1->ArrayNum) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result.Num() == RHS.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                         ,0x77,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_1d8._padding_ = (longlong)param_1->DataPtr;
  local_1b8[0] = 0;
  local_1d8._padding_ = (longlong)(param_1->ArrayNum * 3);
  local_240._padding_ = (longlong)param_2->DataPtr;
  local_240._padding_ = (longlong)(param_2->ArrayNum * 3);
  Eigen::SparseMatrix<double,1,int>::SparseMatrix<double,1,int>
            ((SparseMatrix<double,1,int> *)(local_1b8 + 8),0,0);
  Eigen::Ref<Eigen::SparseMatrix<double,1,int>_const_,0,Eigen::OuterStride<-1>_>::
  Ref<Eigen::SparseMatrix<double,1,int>_const_,0,Eigen::OuterStride<_1>_><Eigen::SparseMatrix<double,1,int>_>
            ((Ref<Eigen::SparseMatrix<double,1,int>_const_,0,Eigen::OuterStride<_1>_> *)
             (local_1b8 + 0x50),
             (SparseMatrixBase<Eigen::SparseMatrix<double,1,int>_> *)(local_1b8 + 8));
  local_d8 = 0;
  Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>
            ((SparseMatrix<double,0,int> *)(local_1b8 + 0xe8));
  local_70._0_1_ = false;
  local_70._1_1_ = false;
  local_88 = (void *)0x0;
  uStack_80 = 0;
  local_78 = __real_3f50624dd2f1a9fc;
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_1b8[0] = 0;
  local_50 = param_4;
  local_34._0_1_ = false;
  local_34._1_1_ = false;
  local_58 = (longlong)param_3;
  Eigen::
  IterativeSolverBase<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,1,int>,3,Eigen::IncompleteCholesky<double,3,Eigen::AMDOrdering<int>_>_>_>
  ::compute<Eigen::SparseMatrix<double,1,int>_>
            ((IterativeSolverBase<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,1,int>,3,Eigen::IncompleteCholesky<double,3,Eigen::AMDOrdering<int>_>_>_>
              *)local_1b8,(EigenBase<Eigen::SparseMatrix<double,1,int>_> *)this);
  local_1f0[0] = (TVector<double,3> *)local_240._padding_;
  local_1e0 = local_240._padding_;
  local_220.m_dst =
       (evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> *)local_1f0;
  local_220.m_src = &local_200;
  local_220.m_functor = local_248;
  local_220.m_dstExpr = &local_240;
  local_200.m_functor.m_other = 0.0;
  Eigen::internal::
  dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,-1,1,0,-1,1>_>_>,Eigen::internal::assign_op<double,double>,0>,3,0>
  ::run(&local_220);
  Eigen::
  ConjugateGradient<Eigen::SparseMatrix<double,1,int>,3,Eigen::IncompleteCholesky<double,3,Eigen::AMDOrdering<int>_>_>
  ::
  _solve_vector_with_guess_impl<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>
            ((ConjugateGradient<Eigen::SparseMatrix<double,1,int>,3,Eigen::IncompleteCholesky<double,3,Eigen::AMDOrdering<int>_>_>
              *)local_1b8,&local_1d8,&local_240);
  if (param_6 != (int *)0x0) {
    *param_6 = local_40;
  }
  if (param_7 != (double *)0x0) {
    *param_7 = local_48;
  }
  FMemory_Free(local_68);
  FMemory_Free(local_88);
  FMemory_Free(local_d0.m_outerIndex);
  FMemory_Free(local_d0.m_innerNonZeros);
  operator_delete__(local_d0.m_data.m_values);
  operator_delete__(local_d0.m_data.m_indices);
  Eigen::internal::generic_matrix_wrapper<Eigen::SparseMatrix<double,1,int>,0>::
  ~generic_matrix_wrapper<Eigen::SparseMatrix<double,1,int>,0>
            ((generic_matrix_wrapper<Eigen::SparseMatrix<double,1,int>,0> *)(local_1b8 + 8));
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return local_38 == Success;
}

// FPimpl @ 143be2310

FPimpl * __thiscall Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FPimpl::FPimpl(FPimpl *this)

{
  Eigen::SparseMatrix<float,1,int>::SparseMatrix<float,1,int>(&this->AMatrix);
  (this->MatrixBuilderTriplets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MatrixBuilderTriplets).ArrayNum = 0;
  (this->MatrixBuilderTriplets).ArrayMax = 0;
  this->TripletBuilderNum = (atomic<int>)0x0;
  return this;
}

// FPimpl @ 143be2340

FPimpl * __thiscall Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FPimpl::FPimpl(FPimpl *this)

{
  Eigen::SparseMatrix<double,1,int>::SparseMatrix<double,1,int>(&this->AMatrix);
  (this->MatrixBuilderTriplets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MatrixBuilderTriplets).ArrayNum = 0;
  (this->MatrixBuilderTriplets).ArrayMax = 0;
  this->TripletBuilderNum = (atomic<int>)0x0;
  return this;
}

// ~FPimpl @ 143be3470

void __thiscall Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FPimpl::~FPimpl(FPimpl *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MatrixBuilderTriplets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMemory_Free((this->AMatrix).m_outerIndex);
  FMemory_Free((this->AMatrix).m_innerNonZeros);
  operator_delete__((this->AMatrix).m_data.m_values);
  operator_delete__((this->AMatrix).m_data.m_indices);
  return;
}

// ~FPimpl @ 143be34c0

void __thiscall Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FPimpl::~FPimpl(FPimpl *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->MatrixBuilderTriplets).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMemory_Free((this->AMatrix).m_outerIndex);
  FMemory_Free((this->AMatrix).m_innerNonZeros);
  operator_delete__((this->AMatrix).m_data.m_values);
  operator_delete__((this->AMatrix).m_data.m_indices);
  return;
}

// AddMatrixEntry @ 143becb20

void __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FPimpl::AddMatrixEntry
          (FPimpl *this,int param_1,int param_2,PMatrix<float,3,3> *param_3)

{
  atomic<int> *paVar1;
  float fVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  float fVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  atomic<int> aVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  float *pfVar18;
  PMatrix<float,3,3> *pPVar19;
  longlong local_78;
  longlong local_70;
  
  iVar11 = param_1 * 3;
  iVar6 = param_2 * 3;
  if (param_1 == param_2) {
    LOCK();
    paVar1 = &this->TripletBuilderNum;
    aVar14 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 9);
    uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    fVar7 = __real_322bcc77;
    UNLOCK();
    uVar17 = (int)aVar14 + 2;
    pfVar13 = (float *)&param_3->field_0x8;
    pfVar18 = (float *)&param_3->field_0x20;
    local_78 = 3;
    lVar16 = ((longlong)(int)aVar14 + 2) * 0xc;
    do {
      if ((fVar7 < (float)((uint)(pfVar13[-2] - pfVar18[-8]) & uVar8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("FMath::IsNearlyEqual(AEntry.M[I][J], AEntry.M[J][I])",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                             ,0x52,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar15 = (longlong)iVar11;
      if (((this->AMatrix).m_outerSize <= lVar15) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("BlockSize * Index0 + I < AMatrix.rows()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                             ,0x53,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((this->AMatrix).m_innerSize <= (longlong)iVar6) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("BlockSize * Index1 + J < AMatrix.cols()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                             ,0x54,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar2 = pfVar13[-2];
      uVar10 = 0;
      if ((int)(uVar17 - 2) < (this->MatrixBuilderTriplets).ArrayNum) {
        uVar10 = ~(uVar17 - 2) >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->MatrixBuilderTriplets).AllocatorInstance.Data;
      *(int *)(pFVar4 + lVar16 + -0x18) = iVar11;
      *(int *)(pFVar4 + lVar16 + -0x14) = iVar6;
      *(float *)(pFVar4 + lVar16 + -0x10) = fVar2;
      if ((fVar7 < (float)((uint)(pfVar13[-1] - pfVar18[-4]) & uVar8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("FMath::IsNearlyEqual(AEntry.M[I][J], AEntry.M[J][I])",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                             ,0x52,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((this->AMatrix).m_outerSize <= lVar15) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("BlockSize * Index0 + I < AMatrix.rows()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                             ,0x53,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((this->AMatrix).m_innerSize <= (longlong)(iVar6 + 1)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("BlockSize * Index1 + J < AMatrix.cols()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                             ,0x54,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar2 = pfVar13[-1];
      uVar10 = 0;
      if ((int)(uVar17 - 1) < (this->MatrixBuilderTriplets).ArrayNum) {
        uVar10 = ~(uVar17 - 1) >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->MatrixBuilderTriplets).AllocatorInstance.Data;
      *(int *)(pFVar4 + lVar16 + -0xc) = iVar11;
      *(int *)(pFVar4 + lVar16 + -8) = iVar6 + 1;
      *(float *)(pFVar4 + lVar16 + -4) = fVar2;
      if ((fVar7 < (float)((uint)(*pfVar13 - *pfVar18) & uVar8)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("FMath::IsNearlyEqual(AEntry.M[I][J], AEntry.M[J][I])",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                             ,0x52,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((this->AMatrix).m_outerSize <= lVar15) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("BlockSize * Index0 + I < AMatrix.rows()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                             ,0x53,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((this->AMatrix).m_innerSize <= (longlong)(iVar6 + 2)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("BlockSize * Index1 + J < AMatrix.cols()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                             ,0x54,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar2 = *pfVar13;
      uVar10 = 0;
      if ((int)uVar17 < (this->MatrixBuilderTriplets).ArrayNum) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->MatrixBuilderTriplets).AllocatorInstance.Data;
      uVar17 = uVar17 + 3;
      pfVar18 = pfVar18 + 1;
      pfVar13 = pfVar13 + 4;
      *(int *)(pFVar4 + lVar16) = iVar11;
      iVar11 = iVar11 + 1;
      *(int *)(pFVar4 + lVar16 + 4) = iVar6 + 2;
      *(float *)(pFVar4 + lVar16 + 8) = fVar2;
      lVar16 = lVar16 + 0x24;
      local_78 = local_78 + -1;
    } while (local_78 != 0);
  }
  else {
    LOCK();
    paVar1 = &this->TripletBuilderNum;
    aVar14 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 0x12);
    UNLOCK();
    lVar16 = (longlong)(int)aVar14;
    local_70 = 3;
    do {
      lVar15 = lVar16 * 0xc;
      local_78 = 3;
      pPVar19 = param_3;
      iVar12 = iVar6;
      do {
        if (((this->AMatrix).m_outerSize <= (longlong)iVar11) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("BlockSize * Index0 + I < AMatrix.rows()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                               ,0x61,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((this->AMatrix).m_innerSize <= (longlong)iVar12) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("BlockSize * Index1 + J < AMatrix.cols()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                               ,0x62,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((this->AMatrix).m_innerSize <= (longlong)iVar11) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("BlockSize * Index0 + I < AMatrix.cols()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                               ,99,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((this->AMatrix).m_outerSize <= (longlong)iVar12) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("BlockSize * Index1 + J < AMatrix.rows()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                               ,100,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar3 = *(undefined4 *)pPVar19;
        uVar17 = 0;
        if ((int)aVar14 < (this->MatrixBuilderTriplets).ArrayNum) {
          uVar17 = ~(uint)aVar14 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->MatrixBuilderTriplets).AllocatorInstance.Data;
        *(int *)(pFVar4 + lVar15) = iVar11;
        *(int *)(pFVar4 + lVar15 + 4) = iVar12;
        *(undefined4 *)(pFVar4 + lVar15 + 8) = uVar3;
        uVar3 = *(undefined4 *)pPVar19;
        uVar17 = 0;
        if ((int)((int)aVar14 + 1U) < (this->MatrixBuilderTriplets).ArrayNum) {
          uVar17 = ~((int)aVar14 + 1U) >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->MatrixBuilderTriplets).AllocatorInstance.Data;
        aVar14 = (atomic<int>)((int)aVar14 + 2);
        lVar16 = lVar16 + 2;
        pPVar19 = (PMatrix<float,3,3> *)&pPVar19->field_0x4;
        *(int *)(pFVar4 + lVar15 + 0xc) = iVar12;
        iVar12 = iVar12 + 1;
        *(int *)(pFVar4 + lVar15 + 0x10) = iVar11;
        *(undefined4 *)(pFVar4 + lVar15 + 0x14) = uVar3;
        lVar15 = lVar15 + 0x18;
        local_78 = local_78 + -1;
      } while (local_78 != 0);
      iVar11 = iVar11 + 1;
      param_3 = (PMatrix<float,3,3> *)&param_3->field_0x10;
      local_70 = local_70 + -1;
    } while (local_70 != 0);
  }
  return;
}

// AddMatrixEntry @ 143bed150

void __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FPimpl::AddMatrixEntry
          (FPimpl *this,int param_1,int param_2,PMatrix<double,3,3> *param_3)

{
  atomic<int> *paVar1;
  double dVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  double *pdVar14;
  atomic<int> aVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  double *pdVar19;
  PMatrix<double,3,3> *pPVar20;
  longlong local_78;
  longlong local_70;
  
  iVar12 = param_1 * 3;
  iVar6 = param_2 * 3;
  if (param_1 == param_2) {
    LOCK();
    paVar1 = &this->TripletBuilderNum;
    aVar15 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 9);
    uVar9 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar8 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar7 = __real_3e45798ee2308c3a;
    UNLOCK();
    uVar18 = (int)aVar15 + 2;
    pdVar14 = (double *)&param_3->field_0x10;
    pdVar19 = (double *)&param_3->field_0x40;
    local_78 = 3;
    lVar17 = ((longlong)(int)aVar15 + 2) * 0x10;
    do {
      if ((dVar7 < (double)CONCAT44((uint)((ulonglong)(pdVar14[-2] - pdVar19[-8]) >> 0x20) & uVar9,
                                    SUB84(pdVar14[-2] - pdVar19[-8],0) & uVar8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("FMath::IsNearlyEqual(AEntry.M[I][J], AEntry.M[J][I])",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                              ,0x52,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar16 = (longlong)iVar12;
      if (((this->AMatrix).m_outerSize <= lVar16) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("BlockSize * Index0 + I < AMatrix.rows()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                              ,0x53,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((this->AMatrix).m_innerSize <= (longlong)iVar6) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("BlockSize * Index1 + J < AMatrix.cols()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                              ,0x54,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      dVar2 = pdVar14[-2];
      uVar11 = 0;
      if ((int)(uVar18 - 2) < (this->MatrixBuilderTriplets).ArrayNum) {
        uVar11 = ~(uVar18 - 2) >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->MatrixBuilderTriplets).AllocatorInstance.Data;
      *(int *)(pFVar4 + lVar17 + -0x20) = iVar12;
      *(int *)(pFVar4 + lVar17 + -0x1c) = iVar6;
      *(double *)(pFVar4 + lVar17 + -0x18) = dVar2;
      if ((dVar7 < (double)CONCAT44((uint)((ulonglong)(pdVar14[-1] - pdVar19[-4]) >> 0x20) & uVar9,
                                    SUB84(pdVar14[-1] - pdVar19[-4],0) & uVar8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("FMath::IsNearlyEqual(AEntry.M[I][J], AEntry.M[J][I])",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                              ,0x52,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((this->AMatrix).m_outerSize <= lVar16) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("BlockSize * Index0 + I < AMatrix.rows()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                              ,0x53,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((this->AMatrix).m_innerSize <= (longlong)(iVar6 + 1)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("BlockSize * Index1 + J < AMatrix.cols()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                              ,0x54,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      dVar2 = pdVar14[-1];
      uVar11 = 0;
      if ((int)(uVar18 - 1) < (this->MatrixBuilderTriplets).ArrayNum) {
        uVar11 = ~(uVar18 - 1) >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->MatrixBuilderTriplets).AllocatorInstance.Data;
      *(int *)(pFVar4 + lVar17 + -0x10) = iVar12;
      *(int *)(pFVar4 + lVar17 + -0xc) = iVar6 + 1;
      *(double *)(pFVar4 + lVar17 + -8) = dVar2;
      if ((dVar7 < (double)CONCAT44((uint)((ulonglong)(*pdVar14 - *pdVar19) >> 0x20) & uVar9,
                                    SUB84(*pdVar14 - *pdVar19,0) & uVar8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("FMath::IsNearlyEqual(AEntry.M[I][J], AEntry.M[J][I])",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                              ,0x52,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((this->AMatrix).m_outerSize <= lVar16) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("BlockSize * Index0 + I < AMatrix.rows()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                              ,0x53,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (((this->AMatrix).m_innerSize <= (longlong)(iVar6 + 2)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("BlockSize * Index1 + J < AMatrix.cols()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                              ,0x54,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      dVar2 = *pdVar14;
      uVar11 = 0;
      if ((int)uVar18 < (this->MatrixBuilderTriplets).ArrayNum) {
        uVar11 = ~uVar18 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->MatrixBuilderTriplets).AllocatorInstance.Data;
      uVar18 = uVar18 + 3;
      pdVar19 = pdVar19 + 1;
      pdVar14 = pdVar14 + 4;
      *(int *)(pFVar4 + lVar17) = iVar12;
      iVar12 = iVar12 + 1;
      *(int *)(pFVar4 + lVar17 + 4) = iVar6 + 2;
      *(double *)(pFVar4 + lVar17 + 8) = dVar2;
      lVar17 = lVar17 + 0x30;
      local_78 = local_78 + -1;
    } while (local_78 != 0);
  }
  else {
    LOCK();
    paVar1 = &this->TripletBuilderNum;
    aVar15 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + 0x12);
    UNLOCK();
    lVar17 = (longlong)(int)aVar15;
    local_70 = 3;
    do {
      lVar16 = lVar17 << 4;
      local_78 = 3;
      pPVar20 = param_3;
      iVar13 = iVar6;
      do {
        if (((this->AMatrix).m_outerSize <= (longlong)iVar12) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("BlockSize * Index0 + I < AMatrix.rows()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                                ,0x61,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((this->AMatrix).m_innerSize <= (longlong)iVar13) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("BlockSize * Index1 + J < AMatrix.cols()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                                ,0x62,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((this->AMatrix).m_innerSize <= (longlong)iVar12) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("BlockSize * Index0 + I < AMatrix.cols()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                                ,99,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((this->AMatrix).m_outerSize <= (longlong)iVar13) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("BlockSize * Index1 + J < AMatrix.rows()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
                                ,100,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar3 = *(undefined8 *)pPVar20;
        uVar18 = 0;
        if ((int)aVar15 < (this->MatrixBuilderTriplets).ArrayNum) {
          uVar18 = ~(uint)aVar15 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->MatrixBuilderTriplets).AllocatorInstance.Data;
        *(int *)(pFVar4 + lVar16) = iVar12;
        *(int *)(pFVar4 + lVar16 + 4) = iVar13;
        *(undefined8 *)(pFVar4 + lVar16 + 8) = uVar3;
        uVar3 = *(undefined8 *)pPVar20;
        uVar18 = 0;
        if ((int)((int)aVar15 + 1U) < (this->MatrixBuilderTriplets).ArrayNum) {
          uVar18 = ~((int)aVar15 + 1U) >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->MatrixBuilderTriplets).AllocatorInstance.Data;
        aVar15 = (atomic<int>)((int)aVar15 + 2);
        lVar17 = lVar17 + 2;
        pPVar20 = (PMatrix<double,3,3> *)&pPVar20->field_0x8;
        *(int *)(pFVar4 + lVar16 + 0x10) = iVar13;
        iVar13 = iVar13 + 1;
        *(int *)(pFVar4 + lVar16 + 0x14) = iVar12;
        *(undefined8 *)(pFVar4 + lVar16 + 0x18) = uVar3;
        lVar16 = lVar16 + 0x20;
        local_78 = local_78 + -1;
      } while (local_78 != 0);
      iVar12 = iVar12 + 1;
      param_3 = (PMatrix<double,3,3> *)&param_3->field_0x20;
      local_70 = local_70 + -1;
    } while (local_70 != 0);
  }
  return;
}

// BuildMatrix @ 143bf12b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FPimpl::BuildMatrix(FPimpl *this)

{
  bool bVar1;
  Triplet<float,int> *local_res8;
  Triplet<float,int> *local_res10;
  
  TArray<Eigen::Triplet<float,int>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->MatrixBuilderTriplets,(int)this->TripletBuilderNum,No);
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FPimpl::BuildMatrix(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId111,"ChaosBlockSparseLinearSystem_BuildMatrix",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
               ,0x6f);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FPimpl::BuildMatrix(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId111);
  }
  local_res10 = (Triplet<float,int> *)(this->MatrixBuilderTriplets).AllocatorInstance.Data;
  local_res8 = local_res10 + (this->MatrixBuilderTriplets).ArrayNum;
  Eigen::internal::
  set_from_triplets<Eigen::Triplet<float,int>_*,Eigen::SparseMatrix<float,1,int>,Eigen::internal::scalar_sum_op<float,float>_>
            (&local_res10,&local_res8,&this->AMatrix,local_res8._0_1_);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BuildMatrix @ 143bf1370

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FPimpl::BuildMatrix(FPimpl *this)

{
  bool bVar1;
  Triplet<double,int> *local_res8;
  Triplet<double,int> *local_res10;
  
  TArray<Eigen::Triplet<double,int>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->MatrixBuilderTriplets,(int)this->TripletBuilderNum,No);
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FPimpl::BuildMatrix(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId111,"ChaosBlockSparseLinearSystem_BuildMatrix",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Math\\BlockSparseLinearSystem.cpp"
               ,0x6f);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FPimpl::BuildMatrix(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId111);
  }
  local_res10 = (Triplet<double,int> *)(this->MatrixBuilderTriplets).AllocatorInstance.Data;
  local_res8 = local_res10 + (this->MatrixBuilderTriplets).ArrayNum;
  Eigen::internal::
  set_from_triplets<Eigen::Triplet<double,int>_*,Eigen::SparseMatrix<double,1,int>,Eigen::internal::scalar_sum_op<double,double>_>
            (&local_res10,&local_res8,&this->AMatrix,local_res8._0_1_);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ReserveForParallelAdd @ 143c121a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FPimpl::ReserveForParallelAdd
          (FPimpl *this,int param_1,int param_2)

{
  TArray<Eigen::Triplet<float,int>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->MatrixBuilderTriplets,(int)this->TripletBuilderNum + (param_1 + param_2 * 2) * 9
             ,Default);
  return;
}

// ReserveForParallelAdd @ 143c121c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FPimpl::ReserveForParallelAdd
          (FPimpl *this,int param_1,int param_2)

{
  TArray<Eigen::Triplet<double,int>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->MatrixBuilderTriplets,(int)this->TripletBuilderNum + (param_1 + param_2 * 2) * 9
             ,Default);
  return;
}

// Reset @ 143c12420

void __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<float,3>::FPimpl::Reset(FPimpl *this,int param_1)

{
  LOCK();
  this->TripletBuilderNum = (atomic<int>)0x0;
  UNLOCK();
  (this->MatrixBuilderTriplets).ArrayNum = 0;
  if ((this->MatrixBuilderTriplets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->MatrixBuilderTriplets).AllocatorInstance,0,
               &(this->MatrixBuilderTriplets).ArrayMax);
  }
  Eigen::SparseMatrix<float,1,int>::resize
            (&this->AMatrix,(longlong)(param_1 * 3),(longlong)(param_1 * 3));
  return;
}

// Reset @ 143c12490

void __thiscall
Chaos::TBlockSparseSymmetricLinearSystem<double,3>::FPimpl::Reset(FPimpl *this,int param_1)

{
  LOCK();
  this->TripletBuilderNum = (atomic<int>)0x0;
  UNLOCK();
  (this->MatrixBuilderTriplets).ArrayNum = 0;
  if ((this->MatrixBuilderTriplets).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->MatrixBuilderTriplets).AllocatorInstance,0,
               &(this->MatrixBuilderTriplets).ArrayMax);
  }
  Eigen::SparseMatrix<double,1,int>::resize
            (&this->AMatrix,(longlong)(param_1 * 3),(longlong)(param_1 * 3));
  return;
}

