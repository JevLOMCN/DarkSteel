// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 19

// TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_> @ 14c895cf0

TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_> *
__thiscall
UE::Geometry::
TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
          (TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
           *this)

{
  this->bSetup = false;
  this->_padding_ =
       (longlong)
       &
       ___7__TMatrixSolver_V__SparseLU_V__SparseMatrix_N_0A_H_Eigen__V__COLAMDOrdering_H_2__Eigen___Geometry_UE__6B_
  ;
  *(undefined1 *)&(this->MatrixSolver)._padding_ = 0;
  (this->MatrixSolver).m_lastError._Mypair._Myval2._Bx._Ptr = (char *)0x0;
  *(undefined8 *)((longlong)&(this->MatrixSolver).m_lastError._Mypair._Myval2._Bx + 8) = 0;
  (this->MatrixSolver).m_lastError._Mypair._Myval2._Mysize = 0;
  (this->MatrixSolver).m_lastError._Mypair._Myval2._Myres = 0xf;
  (this->MatrixSolver).m_lastError._Mypair._Myval2._Bx._Buf[0] = '\0';
  Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&(this->MatrixSolver).m_mat);
  *(undefined1 *)&(this->MatrixSolver).m_Ustore = 0;
  *(undefined8 *)&(this->MatrixSolver).m_Ustore.field_0x8 = 0;
  *(undefined8 *)&(this->MatrixSolver).m_Ustore.field_0x10 = 0;
  *(undefined8 *)&(this->MatrixSolver).m_Ustore.field_0x18 = 0;
  *(undefined8 *)&(this->MatrixSolver).m_Ustore.field_0x20 = 0;
  *(undefined8 *)&(this->MatrixSolver).m_Ustore.field_0x28 = 0;
  *(undefined8 *)&(this->MatrixSolver).m_Ustore.field_0x30 = 0;
  *(undefined8 *)&(this->MatrixSolver).m_Ustore.field_0x38 = 0;
  (this->MatrixSolver).m_diagpivotthresh = 1.0;
  *(undefined8 *)&(this->MatrixSolver).m_perm_c.m_indices = 0;
  *(undefined8 *)&(this->MatrixSolver).m_perm_c.m_indices.field_0x8 = 0;
  *(undefined8 *)&(this->MatrixSolver).m_perm_r.m_indices = 0;
  *(undefined8 *)&(this->MatrixSolver).m_perm_r.m_indices.field_0x8 = 0;
  *(undefined8 *)&(this->MatrixSolver).m_etree = 0;
  *(undefined8 *)&(this->MatrixSolver).m_etree.field_0x8 = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.xsup = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.xsup.field_0x8 = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.supno = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.supno.field_0x8 = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.lusup = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.lusup.field_0x8 = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.lsub = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.lsub.field_0x8 = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.xlusup = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.xlusup.field_0x8 = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.xlsub = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.xlsub.field_0x8 = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.ucol = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.ucol.field_0x8 = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.usub = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.usub.field_0x8 = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.xusub = 0;
  *(undefined8 *)&(this->MatrixSolver).m_glu.xusub.field_0x8 = 0;
  (this->MatrixSolver).m_symmetricmode = false;
  (this->MatrixSolver).m_detPermR = 1;
  (this->MatrixSolver).m_perfv.panel_size = 0x10;
  (this->MatrixSolver).m_perfv.relax = 1;
  (this->MatrixSolver).m_perfv.maxsuper = 0x80;
  (this->MatrixSolver).m_perfv.rowblk = 0x10;
  (this->MatrixSolver).m_perfv.colblk = 8;
  (this->MatrixSolver).m_perfv.fillfactor = 0x14;
  return this;
}

// ~TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_> @ 14c899820

void __thiscall
UE::Geometry::
TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
~TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
          (TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TMatrixSolver_V__SparseLU_V__SparseMatrix_N_0A_H_Eigen__V__COLAMDOrdering_H_2__Eigen___Geometry_UE__6B_
  ;
  Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>::
  ~SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>(&this->MatrixSolver);
  this->_padding_ = (longlong)&___7IMatrixSolverBase_Geometry_UE__6B_;
  return;
}

// ~TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_> @ 14c899860

void __thiscall
UE::Geometry::
TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
~TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
          (TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
           *this)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TMatrixSolver_V__SparseQR_V__SparseMatrix_N_0A_H_Eigen__V__COLAMDOrdering_H_2__Eigen___Geometry_UE__6B_
  ;
  Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>::
  ~SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>(&this->MatrixSolver);
  this->_padding_ = (longlong)&___7IMatrixSolverBase_Geometry_UE__6B_;
  return;
}

// operator() @ 14c8a7fd0

void __thiscall
`UE::Geometry::
TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
Solve'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  assign_op<double,double> local_res10 [24];
  Solve<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_>
  local_58;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_> local_48;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_28;
  
  plVar2 = *(longlong **)((longlong)this + 0x10);
  local_58.m_dec =
       (SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_> *)
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
  call_assignment_no_alias<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,Eigen::Solve<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_>,Eigen::internal::assign_op<double,double>_>
            (&local_28,&local_58,local_res10);
  return;
}

// operator() @ 14c8a8090

void __thiscall
`UE::Geometry::
TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
Solve'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_28;
  longlong lStack_20;
  
  puVar2 = *(undefined8 **)((longlong)this + 0x10);
  lVar3 = 0x10;
  if (param_1 != 0) {
    lVar1 = 0x10;
    if (param_1 != 1) {
      lVar1 = 0x20;
    }
    puVar2 = (undefined8 *)((longlong)puVar2 + lVar1);
  }
  lStack_20 = (longlong)*(int *)(puVar2 + 1);
  if (*(int *)(puVar2 + 1) < 1) {
    local_28 = 0;
    lStack_20 = 0;
  }
  else {
    local_28 = *puVar2;
  }
  puVar2 = *(undefined8 **)this;
  if (param_1 != 0) {
    if (param_1 != 1) {
      lVar3 = 0x20;
    }
    puVar2 = (undefined8 *)((longlong)puVar2 + lVar3);
  }
  lStack_40 = (longlong)*(int *)(puVar2 + 1);
  if (*(int *)(puVar2 + 1) < 1) {
    local_48 = 0;
    lStack_40 = 0;
  }
  else {
    local_48 = *puVar2;
  }
  Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>::
  _solve_impl<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>
            ((SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_> *)
             (*(longlong *)((longlong)this + 8) + 0x10),
             (MatrixBase<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>_>
              *)&local_28,
             (MatrixBase<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> *)
             &local_48);
  return;
}

// Reset @ 14c9146f0

void __thiscall
UE::Geometry::
TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
Reset(TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
      *this)

{
  this->bSetup = false;
  return;
}

// Reset @ 14c914700

void __thiscall
UE::Geometry::
TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
Reset(TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
      *this)

{
  this->bSetup = false;
  return;
}

// SetUp @ 14c917720

void __thiscall
UE::Geometry::
TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
SetUp(TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
      *this,SparseMatrix<double,0,int> *param_1,bool param_2)

{
  (this->MatrixSolver).m_symmetricmode = param_2;
  if (param_1->m_innerSize != 0) {
    Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>::analyzePattern
              (&this->MatrixSolver,param_1);
    Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>::factorize
              (&this->MatrixSolver,param_1);
    this->bSetup = (this->MatrixSolver).m_info == Success;
  }
  return;
}

// SetUp @ 14c917780

void __thiscall
UE::Geometry::
TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
SetUp(TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
      *this,SparseMatrix<double,0,int> *param_1,bool param_2)

{
  if (param_1->m_innerSize != 0) {
    Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>::analyzePattern
              (&this->MatrixSolver,param_1);
    Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>::factorize
              (&this->MatrixSolver,param_1);
    this->bSetup = (this->MatrixSolver).m_info == Success;
  }
  return;
}

// Solve @ 14c918bf0

void __thiscall
UE::Geometry::
TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
Solve(TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
      *this,Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> *param_1,
     Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  assign_op<double,double> local_res8 [32];
  Solve<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>
  local_18;
  
  if (this->bSetup == false) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2763816875224727489>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\MatrixSolver.h"
                       ,0x3f,"bSetup");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_18.m_dec = &this->MatrixSolver;
    local_18.m_rhs = param_1;
    Eigen::internal::
    call_assignment_no_alias<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,Eigen::Solve<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::assign_op<double,double>_>
              (param_2,&local_18,local_res8);
  }
  return;
}

// Solve @ 14c918c60

void __thiscall
UE::Geometry::
TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
Solve(TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
      *this,Matrix<double,_1,1,0,_1,1> *param_1,Matrix<double,_1,1,0,_1,1> *param_2)

{
  code *pcVar1;
  bool bVar2;
  assign_op<double,double> local_res8 [32];
  Solve<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>,Eigen::Matrix<double,_1,1,0,_1,1>_>
  local_18;
  
  if (this->bSetup == false) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2763816875224727497>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\MatrixSolver.h"
                       ,0x37,"bSetup");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_18.m_dec = &this->MatrixSolver;
    local_18.m_rhs = param_1;
    Eigen::internal::
    call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Solve<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>,Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>_>
              (param_2,&local_18,local_res8);
  }
  return;
}

// Solve @ 14c918cd0

void __thiscall
UE::Geometry::
TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
Solve(TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
      *this,FSOAPositions *param_1,FSOAPositions *param_2)

{
  code *pcVar1;
  bool bVar2;
  <lambda_1> local_res8;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  FSOAPositions **local_30;
  FSOAPositions *local_28;
  TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
  *local_20;
  FSOAPositions *local_18;
  
  if (this->bSetup == false) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2763816875224727480>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\MatrixSolver.h"
                       ,0x48,"bSetup");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::Solve'::__l5::<lambda_1>,void,int>
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

// Solve @ 14c918d90

void __thiscall
UE::Geometry::
TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
Solve(TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
      *this,Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> *param_1,
     Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bSetup != false) {
    Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>::
    _solve_impl<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>
              (&this->MatrixSolver,
               (MatrixBase<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> *)
               param_1,(MatrixBase<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>
                        *)param_2);
    return;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_2763816875224727489>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\MatrixSolver.h"
                     ,0x3f,"bSetup");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// Solve @ 14c918df0

void __thiscall
UE::Geometry::
TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
Solve(TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
      *this,Matrix<double,_1,1,0,_1,1> *param_1,Matrix<double,_1,1,0,_1,1> *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->bSetup == false) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2763816875224727497>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\MatrixSolver.h"
                       ,0x37,"bSetup");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    lVar1 = (this->MatrixSolver).m_pmat.m_outerSize;
    if (*(longlong *)&param_2->field_0x8 != lVar1) {
      Eigen::DenseStorage<double,-1,-1,1,0>::resize
                ((DenseStorage<double,_1,_1,1,0> *)param_2,lVar1,lVar1,1);
    }
    Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>::
    _solve_impl<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Matrix<double,_1,1,0,_1,1>_>
              (&this->MatrixSolver,(MatrixBase<Eigen::Matrix<double,_1,1,0,_1,1>_> *)param_1,
               (MatrixBase<Eigen::Matrix<double,_1,1,0,_1,1>_> *)param_2);
  }
  return;
}

// Solve @ 14c918e90

void __thiscall
UE::Geometry::
TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
Solve(TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
      *this,FSOAPositions *param_1,FSOAPositions *param_2)

{
  code *pcVar1;
  bool bVar2;
  <lambda_1> local_res8;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  FSOAPositions **local_30;
  FSOAPositions *local_28;
  TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
  *local_20;
  FSOAPositions *local_18;
  
  if (this->bSetup == false) {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2763816875224727480>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\MatrixSolver.h"
                       ,0x48,"bSetup");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_38 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::Solve'::__l5::<lambda_1>,void,int>
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

// bIsIterative @ 14c926df0

bool __thiscall
UE::Geometry::
TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
bIsIterative(TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
             *this)

{
  return false;
}

// bIsIterative @ 14c926e00

bool __thiscall
UE::Geometry::
TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
bIsIterative(TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
             *this)

{
  return false;
}

// bSucceeded @ 14c926e50

bool __thiscall
UE::Geometry::
TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
bSucceeded(TMatrixSolver<Eigen::SparseLU<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
           *this)

{
  if ((this->bSetup != false) && ((this->MatrixSolver).m_info == Success)) {
    return true;
  }
  return false;
}

// bSucceeded @ 14c926e70

bool __thiscall
UE::Geometry::
TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>::
bSucceeded(TMatrixSolver<Eigen::SparseQR<Eigen::SparseMatrix<double,0,int>,Eigen::COLAMDOrdering<int>_>_>
           *this)

{
  if ((this->bSetup != false) && ((this->MatrixSolver).m_info == Success)) {
    return true;
  }
  return false;
}

