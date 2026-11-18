// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 31

// ~TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_> @ 14c899760

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
::
~TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
          (TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TIterativeMatrixSolver_V__BiCGSTAB_V__SparseMatrix_N_0A_H_Eigen__V__IncompleteLUT_NH_2__Eigen___Geometry_UE__6B_
  ;
  FMemory_Free(*(void **)&(this->MatrixSolver).field_0x158);
  FMemory_Free(*(void **)&(this->MatrixSolver).field_0x148);
  FMemory_Free(*(void **)&(this->MatrixSolver).field_0x100);
  FMemory_Free(*(void **)&(this->MatrixSolver).field_0x108);
  operator_delete__(*(void **)&(this->MatrixSolver).field_0x110);
  operator_delete__(*(void **)&(this->MatrixSolver).field_0x118);
  Eigen::internal::generic_matrix_wrapper<Eigen::SparseMatrix<double,0,int>,0>::
  ~generic_matrix_wrapper<Eigen::SparseMatrix<double,0,int>,0>
            ((generic_matrix_wrapper<Eigen::SparseMatrix<double,0,int>,0> *)
             &(this->MatrixSolver).field_0x8);
  this->_padding_ = (longlong)&___7IMatrixSolverBase_Geometry_UE__6B_;
  return;
}

// ~TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_> @ 14c8997e0

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
::
~TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
          (TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TIterativeMatrixSolver_V__ConjugateGradient_V__SparseMatrix_N_0A_H_Eigen___02V__DiagonalPreconditioner_N_2__Eigen___Geometry_UE__6B_
  ;
  FMemory_Free(*(void **)&(this->MatrixSolver).field_0xe0);
  Eigen::internal::generic_matrix_wrapper<Eigen::SparseMatrix<double,0,int>,0>::
  ~generic_matrix_wrapper<Eigen::SparseMatrix<double,0,int>,0>
            ((generic_matrix_wrapper<Eigen::SparseMatrix<double,0,int>,0> *)
             &(this->MatrixSolver).field_0x8);
  this->_padding_ = (longlong)&___7IMatrixSolverBase_Geometry_UE__6B_;
  return;
}

// operator() @ 14c8a7e10

void __thiscall
`UE::Geometry::
TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
::Solve'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  assign_op<double,double> local_res10 [24];
  Solve<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_>
  local_58;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_> local_48;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_28;
  
  plVar2 = *(longlong **)((longlong)this + 0x10);
  local_58.m_dec =
       (BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_> *)
       (*(longlong *)((longlong)this + 8) + 0x10);
  lVar3 = 0x10;
  if (param_1 != 0) {
    lVar1 = 0x10;
    if (param_1 != 1) {
      lVar1 = 0x20;
    }
    plVar2 = (longlong *)((longlong)plVar2 + lVar1);
  }
  local_48._padding_ = (longlong)(int)plVar2[1];
  if ((int)plVar2[1] < 1) {
    local_48._padding_ = 0;
    local_48._padding_ = 0;
  }
  else {
    local_48._padding_ = *plVar2;
  }
  local_58.m_rhs = &local_48;
  plVar2 = *(longlong **)this;
  if (param_1 != 0) {
    if (param_1 != 1) {
      lVar3 = 0x20;
    }
    plVar2 = (longlong *)((longlong)plVar2 + lVar3);
  }
  local_28._padding_ = (longlong)(int)plVar2[1];
  if ((int)plVar2[1] < 1) {
    local_28._padding_ = 0;
    local_28._padding_ = 0;
  }
  else {
    local_28._padding_ = *plVar2;
  }
  Eigen::internal::
  call_assignment_no_alias<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,Eigen::Solve<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_>,Eigen::internal::assign_op<double,double>_>
            (&local_28,&local_58,local_res10);
  return;
}

// operator() @ 14c8a7ed0

void __thiscall
`UE::Geometry::
TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
::Solve'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  assign_op<double,double> local_res10 [24];
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_>_>,Eigen::internal::assign_op<double,double>,0>
  local_98;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_78;
  evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_>_>
  local_58;
  evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> local_48;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_> local_30;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  lVar4 = 0x10;
  plVar3 = *(longlong **)((longlong)this + 0x10);
  if (param_1 != 0) {
    lVar2 = 0x10;
    if (param_1 != 1) {
      lVar2 = 0x20;
    }
    plVar3 = (longlong *)((longlong)plVar3 + lVar2);
  }
  local_30._padding_ = (longlong)(int)plVar3[1];
  if ((int)plVar3[1] < 1) {
    local_30._padding_ = 0;
    local_30._padding_ = 0;
  }
  else {
    local_30._padding_ = *plVar3;
  }
  plVar3 = *(longlong **)this;
  if (param_1 != 0) {
    if (param_1 != 1) {
      lVar4 = 0x20;
    }
    plVar3 = (longlong *)((longlong)plVar3 + lVar4);
  }
  local_78._padding_ = (longlong)(int)plVar3[1];
  if ((int)plVar3[1] < 1) {
    local_78._padding_ = 0;
    local_78._padding_ = 0;
  }
  else {
    local_78._padding_ = *plVar3;
  }
  local_98.m_dst = &local_48;
  local_98.m_src = &local_58;
  local_98.m_functor = local_res10;
  local_58.m_functor.m_other = 0.0;
  local_98.m_dstExpr = &local_78;
  local_48._0_8_ = local_78._padding_;
  local_48._16_8_ = local_78._padding_;
  Eigen::internal::
  dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,-1,1,0,-1,1>_>_>,Eigen::internal::assign_op<double,double>,0>,3,0>
  ::run(&local_98);
  Eigen::
  ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>::
  _solve_vector_with_guess_impl<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>
            ((ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>
              *)(lVar1 + 0x10),&local_30,&local_78);
  return;
}

// operator() @ 14c8a8130

void __thiscall
`UE::Geometry::
TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
::SolveWithGuess'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  assign_op<double,double> local_res10 [24];
  SolveWithGuess<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_>
  local_88;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_> local_70;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_> local_50;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_30;
  
  plVar2 = *(longlong **)((longlong)this + 0x18);
  local_88.m_dec =
       (BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_> *)
       (*(longlong *)((longlong)this + 8) + 0x10);
  lVar3 = 0x10;
  if (param_1 != 0) {
    lVar1 = 0x10;
    if (param_1 != 1) {
      lVar1 = 0x20;
    }
    plVar2 = (longlong *)((longlong)plVar2 + lVar1);
  }
  local_50._padding_ = (longlong)(int)plVar2[1];
  if ((int)plVar2[1] < 1) {
    local_50._padding_ = 0;
    local_50._padding_ = 0;
  }
  else {
    local_50._padding_ = *plVar2;
  }
  plVar2 = *(longlong **)((longlong)this + 0x10);
  if (param_1 != 0) {
    lVar1 = 0x10;
    if (param_1 != 1) {
      lVar1 = 0x20;
    }
    plVar2 = (longlong *)((longlong)plVar2 + lVar1);
  }
  local_70._padding_ = (longlong)(int)plVar2[1];
  if ((int)plVar2[1] < 1) {
    local_70._padding_ = 0;
    local_70._padding_ = 0;
  }
  else {
    local_70._padding_ = *plVar2;
  }
  local_88.m_rhs = &local_70;
  local_88.m_guess = &local_50;
  plVar2 = *(longlong **)this;
  if (param_1 != 0) {
    if (param_1 != 1) {
      lVar3 = 0x20;
    }
    plVar2 = (longlong *)((longlong)plVar2 + lVar3);
  }
  local_30._padding_ = (longlong)(int)plVar2[1];
  if ((int)plVar2[1] < 1) {
    local_30._padding_ = 0;
    local_30._padding_ = 0;
  }
  else {
    local_30._padding_ = *plVar2;
  }
  Eigen::internal::
  call_assignment_no_alias<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,Eigen::SolveWithGuess<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_>,Eigen::internal::assign_op<double,double>_>
            (&local_30,&local_88,local_res10);
  return;
}

// operator() @ 14c8a8230

void __thiscall
`UE::Geometry::
TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
::SolveWithGuess'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  assign_op<double,double> local_res10 [8];
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_>,Eigen::internal::assign_op<double,double>,0>
  local_98;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_78;
  evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> local_58;
  evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_> local_40;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_> local_28;
  
  lVar2 = *(longlong *)((longlong)this + 8);
  plVar4 = *(longlong **)((longlong)this + 0x18);
  lVar5 = 0x10;
  if (param_1 != 0) {
    lVar3 = 0x10;
    if (param_1 != 1) {
      lVar3 = 0x20;
    }
    plVar4 = (longlong *)((longlong)plVar4 + lVar3);
  }
  iVar1 = (int)plVar4[1];
  local_40._0_8_ = 0;
  if (0 < iVar1) {
    local_40._0_8_ = *plVar4;
  }
  plVar4 = *(longlong **)((longlong)this + 0x10);
  local_40._16_8_ = (longlong)iVar1;
  if (iVar1 < 1) {
    local_40._16_8_ = 0;
  }
  if (param_1 != 0) {
    lVar3 = 0x10;
    if (param_1 != 1) {
      lVar3 = 0x20;
    }
    plVar4 = (longlong *)((longlong)plVar4 + lVar3);
  }
  local_28._padding_ = (longlong)(int)plVar4[1];
  if ((int)plVar4[1] < 1) {
    local_28._padding_ = 0;
    local_28._padding_ = 0;
  }
  else {
    local_28._padding_ = *plVar4;
  }
  plVar4 = *(longlong **)this;
  if (param_1 != 0) {
    if (param_1 != 1) {
      lVar5 = 0x20;
    }
    plVar4 = (longlong *)((longlong)plVar4 + lVar5);
  }
  local_78._padding_ = (longlong)(int)plVar4[1];
  if ((int)plVar4[1] < 1) {
    local_78._padding_ = 0;
    local_78._padding_ = 0;
  }
  else {
    local_78._padding_ = *plVar4;
  }
  local_98.m_dst = &local_58;
  local_98.m_src = &local_40;
  local_98.m_functor = local_res10;
  local_98.m_dstExpr = &local_78;
  local_58._0_8_ = local_78._padding_;
  local_58._16_8_ = local_78._padding_;
  Eigen::internal::
  dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>_>,Eigen::internal::assign_op<double,double>,0>,3,0>
  ::run(&local_98);
  Eigen::
  ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>::
  _solve_vector_with_guess_impl<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>
            ((ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>
              *)(lVar2 + 0x10),&local_28,&local_78);
  return;
}

// Reset @ 14c9146d0

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
::Reset(TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
        *this)

{
  this->bSetup = false;
  return;
}

// Reset @ 14c9146e0

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
::Reset(TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
        *this)

{
  this->bSetup = false;
  return;
}

// SetIterations @ 14c916e40

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
::SetIterations(TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
                *this,int param_1)

{
  *(longlong *)&(this->MatrixSolver).field_0x168 = (longlong)param_1;
  return;
}

// SetIterations @ 14c916e60

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
::SetIterations(TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
                *this,int param_1)

{
  *(longlong *)&(this->MatrixSolver).field_0xf8 = (longlong)param_1;
  return;
}

// SetTolerance @ 14c917320

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
::SetTolerance(TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
               *this,double param_1)

{
  *(double *)&(this->MatrixSolver).field_0x170 = param_1;
  return;
}

// SetTolerance @ 14c917330

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
::SetTolerance(TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
               *this,double param_1)

{
  *(double *)&(this->MatrixSolver).field_0x100 = param_1;
  return;
}

// SetUp @ 14c917420

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
::SetUp(TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
        *this,SparseMatrix<double,0,int> *param_1,bool param_2)

{
  int iVar1;
  
  if ((this->MatrixSolver).field_0xd8 != '\0') {
    FMemory_Free(*(void **)&(this->MatrixSolver).field_0xa8);
    FMemory_Free(*(void **)&(this->MatrixSolver).field_0xb0);
    operator_delete__(*(void **)&(this->MatrixSolver).field_0xb8);
    operator_delete__(*(void **)&(this->MatrixSolver).field_0xc0);
  }
  Eigen::Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<-1>_>::
  Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<_1>_><Eigen::SparseMatrix<double,0,int>_>
            ((Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<_1>_> *)
             &(this->MatrixSolver).field_0x50,
             (SparseMatrixBase<Eigen::SparseMatrix<double,0,int>_> *)param_1);
  Eigen::IncompleteLUT<double,int>::
  analyzePattern<Eigen::Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<_1>_>_>
            ((IncompleteLUT<double,int> *)&(this->MatrixSolver).field_0xe0,
             (Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<_1>_> *)
             &(this->MatrixSolver).field_0x50);
  *(undefined4 *)&(this->MatrixSolver).field_0x188 =
       *(undefined4 *)&(this->MatrixSolver).field_0x140;
  *(undefined1 *)&this->MatrixSolver = 1;
  (this->MatrixSolver).field_0x18c = 1;
  if ((this->MatrixSolver).field_0xd8 != '\0') {
    FMemory_Free(*(void **)&(this->MatrixSolver).field_0xa8);
    FMemory_Free(*(void **)&(this->MatrixSolver).field_0xb0);
    operator_delete__(*(void **)&(this->MatrixSolver).field_0xb8);
    operator_delete__(*(void **)&(this->MatrixSolver).field_0xc0);
  }
  Eigen::Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<-1>_>::
  Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<_1>_><Eigen::SparseMatrix<double,0,int>_>
            ((Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<_1>_> *)
             &(this->MatrixSolver).field_0x50,
             (SparseMatrixBase<Eigen::SparseMatrix<double,0,int>_> *)param_1);
  Eigen::IncompleteLUT<double,int>::
  factorize<Eigen::Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<_1>_>_>
            ((IncompleteLUT<double,int> *)&(this->MatrixSolver).field_0xe0,
             (Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<_1>_> *)
             &(this->MatrixSolver).field_0x50);
  iVar1 = *(int *)&(this->MatrixSolver).field_0x140;
  *(int *)&(this->MatrixSolver).field_0x188 = iVar1;
  (this->MatrixSolver).field_0x18d = 1;
  this->bSetup = iVar1 == 0;
  return;
}

// SetUp @ 14c917540

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
::SetUp(TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
        *this,SparseMatrix<double,0,int> *param_1)

{
  double dVar1;
  long64 lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  if ((this->MatrixSolver).field_0xd8 != '\0') {
    FMemory_Free(*(void **)&(this->MatrixSolver).field_0xa8);
    FMemory_Free(*(void **)&(this->MatrixSolver).field_0xb0);
    operator_delete__(*(void **)&(this->MatrixSolver).field_0xb8);
    operator_delete__(*(void **)&(this->MatrixSolver).field_0xc0);
  }
  Eigen::Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<-1>_>::
  Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<_1>_><Eigen::SparseMatrix<double,0,int>_>
            ((Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<_1>_> *)
             &(this->MatrixSolver).field_0x50,
             (SparseMatrixBase<Eigen::SparseMatrix<double,0,int>_> *)param_1);
  *(undefined1 *)&this->MatrixSolver = 1;
  (this->MatrixSolver).field_0x11c = 1;
  *(undefined4 *)&(this->MatrixSolver).field_0x118 = 0;
  if ((this->MatrixSolver).field_0xd8 != '\0') {
    FMemory_Free(*(void **)&(this->MatrixSolver).field_0xa8);
    FMemory_Free(*(void **)&(this->MatrixSolver).field_0xb0);
    operator_delete__(*(void **)&(this->MatrixSolver).field_0xb8);
    operator_delete__(*(void **)&(this->MatrixSolver).field_0xc0);
  }
  Eigen::Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<-1>_>::
  Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<_1>_><Eigen::SparseMatrix<double,0,int>_>
            ((Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<_1>_> *)
             &(this->MatrixSolver).field_0x50,
             (SparseMatrixBase<Eigen::SparseMatrix<double,0,int>_> *)param_1);
  lVar2 = *(long64 *)&(this->MatrixSolver).field_0x58;
  Eigen::DenseStorage<double,-1,-1,1,0>::resize
            ((DenseStorage<double,_1,_1,1,0> *)&(this->MatrixSolver).field_0xe0,lVar2,lVar2,1);
  dVar5 = __real_3ff0000000000000;
  iVar8 = 0;
  if (0 < *(longlong *)&(this->MatrixSolver).field_0x58) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      lVar7 = *(longlong *)&(this->MatrixSolver).field_0x70;
      lVar3 = *(longlong *)&(this->MatrixSolver).field_0x88;
      lVar4 = *(longlong *)&(this->MatrixSolver).field_0x78;
      lVar6 = (longlong)*(int *)(lVar10 + lVar7);
      if (lVar3 == 0) {
        lVar7 = (longlong)*(int *)(lVar10 + 4 + lVar7);
      }
      else {
        lVar7 = *(int *)(lVar10 + lVar3) + lVar6;
      }
      for (; lVar6 < lVar7; lVar6 = lVar6 + 1) {
        if (*(int *)(lVar4 + lVar6 * 4) == iVar8) {
          if (((lVar6 < lVar7) && (*(int *)(lVar4 + lVar6 * 4) == iVar8)) &&
             (dVar1 = *(double *)(*(longlong *)&(this->MatrixSolver).field_0x80 + lVar6 * 8),
             dVar1 != 0.0)) {
            *(double *)(lVar9 + *(longlong *)&(this->MatrixSolver).field_0xe0) = dVar5 / dVar1;
            goto LAB_14c917691;
          }
          break;
        }
      }
      *(undefined8 *)(lVar9 + *(longlong *)&(this->MatrixSolver).field_0xe0) = 0x3ff0000000000000;
LAB_14c917691:
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 4;
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar8 < *(longlong *)&(this->MatrixSolver).field_0x58);
  }
  (this->MatrixSolver).field_0xf0 = 1;
  (this->MatrixSolver).field_0x11d = 1;
  *(undefined4 *)&(this->MatrixSolver).field_0x118 = 0;
  this->bSetup = true;
  return;
}

// SetUp @ 14c917710

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
::SetUp(TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
        *this,SparseMatrix<double,0,int> *param_1,bool param_2)

{
  double dVar1;
  long64 lVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  if ((this->MatrixSolver).field_0xd8 != '\0') {
    FMemory_Free(*(void **)&(this->MatrixSolver).field_0xa8);
    FMemory_Free(*(void **)&(this->MatrixSolver).field_0xb0);
    operator_delete__(*(void **)&(this->MatrixSolver).field_0xb8);
    operator_delete__(*(void **)&(this->MatrixSolver).field_0xc0);
  }
  Eigen::Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<-1>_>::
  Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<_1>_><Eigen::SparseMatrix<double,0,int>_>
            ((Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<_1>_> *)
             &(this->MatrixSolver).field_0x50,
             (SparseMatrixBase<Eigen::SparseMatrix<double,0,int>_> *)param_1);
  *(undefined1 *)&this->MatrixSolver = 1;
  (this->MatrixSolver).field_0x11c = 1;
  *(undefined4 *)&(this->MatrixSolver).field_0x118 = 0;
  if ((this->MatrixSolver).field_0xd8 != '\0') {
    FMemory_Free(*(void **)&(this->MatrixSolver).field_0xa8);
    FMemory_Free(*(void **)&(this->MatrixSolver).field_0xb0);
    operator_delete__(*(void **)&(this->MatrixSolver).field_0xb8);
    operator_delete__(*(void **)&(this->MatrixSolver).field_0xc0);
  }
  Eigen::Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<-1>_>::
  Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<_1>_><Eigen::SparseMatrix<double,0,int>_>
            ((Ref<Eigen::SparseMatrix<double,0,int>_const_,0,Eigen::OuterStride<_1>_> *)
             &(this->MatrixSolver).field_0x50,
             (SparseMatrixBase<Eigen::SparseMatrix<double,0,int>_> *)param_1);
  lVar2 = *(long64 *)&(this->MatrixSolver).field_0x58;
  Eigen::DenseStorage<double,-1,-1,1,0>::resize
            ((DenseStorage<double,_1,_1,1,0> *)&(this->MatrixSolver).field_0xe0,lVar2,lVar2,1);
  dVar5 = __real_3ff0000000000000;
  iVar8 = 0;
  if (0 < *(longlong *)&(this->MatrixSolver).field_0x58) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      lVar7 = *(longlong *)&(this->MatrixSolver).field_0x70;
      lVar3 = *(longlong *)&(this->MatrixSolver).field_0x88;
      lVar4 = *(longlong *)&(this->MatrixSolver).field_0x78;
      lVar6 = (longlong)*(int *)(lVar10 + lVar7);
      if (lVar3 == 0) {
        lVar7 = (longlong)*(int *)(lVar10 + 4 + lVar7);
      }
      else {
        lVar7 = *(int *)(lVar10 + lVar3) + lVar6;
      }
      for (; lVar6 < lVar7; lVar6 = lVar6 + 1) {
        if (*(int *)(lVar4 + lVar6 * 4) == iVar8) {
          if (((lVar6 < lVar7) && (*(int *)(lVar4 + lVar6 * 4) == iVar8)) &&
             (dVar1 = *(double *)(*(longlong *)&(this->MatrixSolver).field_0x80 + lVar6 * 8),
             dVar1 != 0.0)) {
            *(double *)(lVar9 + *(longlong *)&(this->MatrixSolver).field_0xe0) = dVar5 / dVar1;
            goto LAB_14c917691;
          }
          break;
        }
      }
      *(undefined8 *)(lVar9 + *(longlong *)&(this->MatrixSolver).field_0xe0) = 0x3ff0000000000000;
LAB_14c917691:
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 4;
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar8 < *(longlong *)&(this->MatrixSolver).field_0x58);
  }
  (this->MatrixSolver).field_0xf0 = 1;
  (this->MatrixSolver).field_0x11d = 1;
  *(undefined4 *)&(this->MatrixSolver).field_0x118 = 0;
  this->bSetup = true;
  return;
}

// Solve @ 14c918960

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
::Solve(TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
        *this,Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> *param_1,
       Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> *param_2)

{
  assign_op<double,double> local_res8 [32];
  Solve<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>
  local_18;
  
  if (this->bSetup != false) {
    local_18.m_dec = &this->MatrixSolver;
    local_18.m_rhs = param_1;
    Eigen::internal::
    call_assignment_no_alias<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,Eigen::Solve<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::assign_op<double,double>_>
              (param_2,&local_18,local_res8);
  }
  return;
}

// Solve @ 14c9189a0

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
::Solve(TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
        *this,Matrix<double,_1,1,0,_1,1> *param_1,Matrix<double,_1,1,0,_1,1> *param_2)

{
  assign_op<double,double> local_res8 [32];
  Solve<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>,Eigen::Matrix<double,_1,1,0,_1,1>_>
  local_18;
  
  if (this->bSetup != false) {
    local_18.m_dec = &this->MatrixSolver;
    local_18.m_rhs = param_1;
    Eigen::internal::
    call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Solve<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>,Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>_>
              (param_2,&local_18,local_res8);
  }
  return;
}

// Solve @ 14c9189e0

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
::Solve(TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
        *this,FSOAPositions *param_1,FSOAPositions *param_2)

{
  <lambda_1> local_res8;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  FSOAPositions **local_30;
  FSOAPositions *local_28;
  TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
  *local_20;
  FSOAPositions *local_18;
  
  if (this->bSetup != false) {
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>::Solve'::__l5::<lambda_1>,void,int>
               ::Call;
    local_30 = &local_28;
    local_48.DataPtr = (void **)0x0;
    local_48.ArrayNum = 0;
    local_28 = param_2;
    local_20 = this;
    local_18 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",3,1,(TFunctionRef<void___cdecl(int)> *)&local_38,local_res8,None,
               &local_48);
  }
  return;
}

// Solve @ 14c918a60

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
::Solve(TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
        *this,Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> *param_1,
       Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> *param_2)

{
  assign_op<double,double> local_res8 [8];
  evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_>_>
  local_58;
  evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> local_48;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_>_>,Eigen::internal::assign_op<double,double>,0>
  local_30;
  
  if (this->bSetup != false) {
    local_48._0_8_ = param_2->_padding_;
    local_48._16_8_ = param_2->_padding_;
    local_30.m_dst = &local_48;
    local_30.m_src = &local_58;
    local_30.m_functor = local_res8;
    local_58.m_functor.m_other = 0.0;
    local_30.m_dstExpr = param_2;
    Eigen::internal::
    dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,-1,1,0,-1,1>_>_>,Eigen::internal::assign_op<double,double>,0>,3,0>
    ::run(&local_30);
    Eigen::
    ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>::
    _solve_vector_with_guess_impl<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>
              (&this->MatrixSolver,param_1,param_2);
  }
  return;
}

// Solve @ 14c918af0

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
::Solve(TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
        *this,Matrix<double,_1,1,0,_1,1> *param_1,Matrix<double,_1,1,0,_1,1> *param_2)

{
  longlong lVar1;
  double local_res8;
  
  if (this->bSetup != false) {
    lVar1 = *(longlong *)&(this->MatrixSolver).field_0x58;
    if (*(longlong *)&param_2->field_0x8 != lVar1) {
      Eigen::DenseStorage<double,-1,-1,1,0>::resize
                ((DenseStorage<double,_1,_1,1,0> *)param_2,lVar1,lVar1,1);
    }
    local_res8 = 0.0;
    std::fill_n<double_*,__int64,double>
              (*(double **)param_2,*(long64 *)&param_2->field_0x8,&local_res8);
    Eigen::
    ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>::
    _solve_vector_with_guess_impl<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Matrix<double,_1,1,0,_1,1>_>
              (&this->MatrixSolver,param_1,param_2);
  }
  return;
}

// Solve @ 14c918b70

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
::Solve(TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
        *this,FSOAPositions *param_1,FSOAPositions *param_2)

{
  <lambda_1> local_res8;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  FSOAPositions **local_30;
  FSOAPositions *local_28;
  TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
  *local_20;
  FSOAPositions *local_18;
  
  if (this->bSetup != false) {
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>::Solve'::__l5::<lambda_1>,void,int>
               ::Call;
    local_30 = &local_28;
    local_48.DataPtr = (void **)0x0;
    local_48.ArrayNum = 0;
    local_28 = param_2;
    local_20 = this;
    local_18 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",3,1,(TFunctionRef<void___cdecl(int)> *)&local_38,local_res8,None,
               &local_48);
  }
  return;
}

// SolveWithGuess @ 14c91b2c0

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
::SolveWithGuess(TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
                 *this,Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> *param_1,
                Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> *param_2,
                Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> *param_3)

{
  assign_op<double,double> local_res8 [32];
  SolveWithGuess<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>
  local_28;
  
  if (this->bSetup != false) {
    local_28.m_dec = &this->MatrixSolver;
    local_28.m_rhs = param_2;
    local_28.m_guess = param_1;
    Eigen::internal::
    call_assignment_no_alias<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,Eigen::SolveWithGuess<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::assign_op<double,double>_>
              (param_3,&local_28,local_res8);
  }
  return;
}

// SolveWithGuess @ 14c91b300

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
::SolveWithGuess(TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
                 *this,Matrix<double,_1,1,0,_1,1> *param_1,Matrix<double,_1,1,0,_1,1> *param_2,
                Matrix<double,_1,1,0,_1,1> *param_3)

{
  assign_op<double,double> local_res8 [32];
  SolveWithGuess<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>,Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Matrix<double,_1,1,0,_1,1>_>
  local_28;
  
  if (this->bSetup != false) {
    local_28.m_dec = &this->MatrixSolver;
    local_28.m_rhs = param_2;
    local_28.m_guess = param_1;
    Eigen::internal::
    call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::SolveWithGuess<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>,Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>_>
              (param_3,&local_28,local_res8);
  }
  return;
}

// SolveWithGuess @ 14c91b340

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
::SolveWithGuess(TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
                 *this,FSOAPositions *param_1,FSOAPositions *param_2,FSOAPositions *param_3)

{
  <lambda_1> local_res8;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  FSOAPositions **local_30;
  FSOAPositions *local_28;
  TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
  *local_20;
  FSOAPositions *local_18;
  FSOAPositions *local_10;
  
  if (this->bSetup != false) {
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>::SolveWithGuess'::__l5::<lambda_1>,void,int>
               ::Call;
    local_30 = &local_28;
    local_48.DataPtr = (void **)0x0;
    local_48.ArrayNum = 0;
    local_28 = param_3;
    local_20 = this;
    local_18 = param_2;
    local_10 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",3,1,(TFunctionRef<void___cdecl(int)> *)&local_38,local_res8,None,
               &local_48);
  }
  return;
}

// SolveWithGuess @ 14c91b3c0

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
::SolveWithGuess(TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
                 *this,Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> *param_1,
                Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> *param_2,
                Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> *param_3)

{
  assign_op<double,double> local_res8 [8];
  evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> local_58;
  evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> local_40;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::assign_op<double,double>,0>
  local_28;
  
  if (this->bSetup != false) {
    local_40._0_8_ = param_1->_padding_;
    local_40._16_8_ = param_1->_padding_;
    local_58._0_8_ = param_3->_padding_;
    local_58._16_8_ = param_3->_padding_;
    local_28.m_dst = &local_58;
    local_28.m_src = &local_40;
    local_28.m_functor = local_res8;
    local_28.m_dstExpr = param_3;
    Eigen::internal::
    dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::assign_op<double,double>,0>,3,0>
    ::run(&local_28);
    Eigen::
    ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>::
    _solve_vector_with_guess_impl<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>
              (&this->MatrixSolver,param_2,param_3);
  }
  return;
}

// SolveWithGuess @ 14c91b450

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
::SolveWithGuess(TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
                 *this,Matrix<double,_1,1,0,_1,1> *param_1,Matrix<double,_1,1,0,_1,1> *param_2,
                Matrix<double,_1,1,0,_1,1> *param_3)

{
  longlong lVar1;
  assign_op<double,double> local_res8 [8];
  
  if (this->bSetup != false) {
    lVar1 = *(longlong *)&(this->MatrixSolver).field_0x58;
    if (*(longlong *)&param_3->field_0x8 != lVar1) {
      Eigen::DenseStorage<double,-1,-1,1,0>::resize
                ((DenseStorage<double,_1,_1,1,0> *)param_3,lVar1,lVar1,1);
    }
    Eigen::internal::
    call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::internal::assign_op<double,double>_>
              (param_3,param_1,local_res8);
    Eigen::
    ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>::
    _solve_vector_with_guess_impl<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Matrix<double,_1,1,0,_1,1>_>
              (&this->MatrixSolver,param_2,param_3);
  }
  return;
}

// SolveWithGuess @ 14c91b4d0

void __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
::SolveWithGuess(TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
                 *this,FSOAPositions *param_1,FSOAPositions *param_2,FSOAPositions *param_3)

{
  <lambda_1> local_res8;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  FSOAPositions **local_30;
  FSOAPositions *local_28;
  TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
  *local_20;
  FSOAPositions *local_18;
  FSOAPositions *local_10;
  
  if (this->bSetup != false) {
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>::SolveWithGuess'::__l5::<lambda_1>,void,int>
               ::Call;
    local_30 = &local_28;
    local_48.DataPtr = (void **)0x0;
    local_48.ArrayNum = 0;
    local_28 = param_3;
    local_20 = this;
    local_18 = param_2;
    local_10 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",3,1,(TFunctionRef<void___cdecl(int)> *)&local_38,local_res8,None,
               &local_48);
  }
  return;
}

// bIsIterative @ 14c926dd0

bool __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
::bIsIterative(TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
               *this)

{
  return true;
}

// bIsIterative @ 14c926de0

bool __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
::bIsIterative(TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
               *this)

{
  return true;
}

// bSucceeded @ 14c926e10

bool __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
::bSucceeded(TIterativeMatrixSolver<Eigen::BiCGSTAB<Eigen::SparseMatrix<double,0,int>,Eigen::IncompleteLUT<double,int>_>_>
             *this)

{
  if ((this->bSetup != false) && (*(int *)&(this->MatrixSolver).field_0x188 == 0)) {
    return true;
  }
  return false;
}

// bSucceeded @ 14c926e30

bool __thiscall
UE::Geometry::
TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
::bSucceeded(TIterativeMatrixSolver<Eigen::ConjugateGradient<Eigen::SparseMatrix<double,0,int>,3,Eigen::DiagonalPreconditioner<double>_>_>
             *this)

{
  if ((this->bSetup != false) && (*(int *)&(this->MatrixSolver).field_0x118 == 0)) {
    return true;
  }
  return false;
}

