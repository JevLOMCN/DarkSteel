// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 14

// FQuadraticProgramming @ 14c897b50

FQuadraticProgramming * __thiscall
UE::Geometry::FQuadraticProgramming::FQuadraticProgramming
          (FQuadraticProgramming *this,SparseMatrix<double,0,int> *param_1,
          Matrix<double,_1,1,0,_1,1> *param_2)

{
  this->MatrixQ = param_1;
  this->FixedRowIndices = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  this->FixedValuesSparse = (SparseMatrix<double,0,int> *)0x0;
  this->FixedValuesDense = (Matrix<double,_1,_1,0,_1,_1> *)0x0;
  (this->VariableRowIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VariableRowIndices).ArrayNum = 0;
  (this->VariableRowIndices).ArrayMax = 0;
  (this->Solver).Ptr = (IMatrixSolverBase *)0x0;
  this->SolveTimeElapsedInSec = 0.0;
  this->VectorF = param_2;
  this->bFixedConstraintsSet = false;
  this->bUseParallel = true;
  return this;
}

// operator() @ 14c8b0c70

void __thiscall
`UE::Geometry::FQuadraticProgramming::Solve'::__l5::<lambda_3>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double *pdVar2;
  undefined8 uVar3;
  longlong *plVar4;
  SparseMatrix<double,0,int> *pSVar5;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> eVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  assign_op<double,double> local_res8 [8];
  assign_op<double,double> local_res18 [8];
  assign_op<double,double> local_res20 [8];
  assign_op<double,double> local_258;
  assign_op<double,double> local_257;
  assign_op<double,double> local_256 [6];
  DenseStorage<double,_1,_1,1,0> local_250;
  DenseStorage<double,_1,_1,1,0> local_240;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_230;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_228;
  longlong local_220;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_218;
  undefined8 uStack_210;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_208;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_200;
  long64 lStack_1f8;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>,0>
  local_1f0;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Block<Eigen::Matrix<double,_1,_1,0,_1,_1>,_1,1,1>_>,Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>,0>
  local_1d0;
  longlong local_1b0;
  Matrix<double,_1,_1,0,_1,_1> *pMStack_1a8;
  SparseMatrix<double,0,int> *local_1a0;
  DenseStorage<double,_1,_1,1,0> *pDStack_198;
  scalar_sum_op<double,double> local_190;
  undefined7 uStack_18f;
  evaluator<Eigen::Block<Eigen::Matrix<double,_1,_1,0,_1,_1>,_1,1,1>_> local_188;
  Block<Eigen::SparseMatrix<double,0,int>_const_,_1,1,1> local_170;
  undefined1 local_150 [32];
  undefined8 local_130;
  longlong local_128;
  longlong local_120;
  undefined1 local_118 [32];
  undefined8 local_f8;
  longlong local_f0;
  longlong local_e8;
  Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>,Eigen::Matrix<double,_1,1,0,_1,1>,0>
  local_e0;
  CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::Matrix<double,_1,1,0,_1,1>,0>_const_>_const_>
  local_a0;
  
  uVar16 = 0;
  if (*(longlong *)(*(longlong *)this + 0x20) != 0) {
    plVar4 = *(longlong **)((longlong)this + 8);
    uVar12 = 0;
    if (param_1 < (int)plVar4[1]) {
      uVar12 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    param_1 = *(uint *)(*plVar4 + (longlong)param_1 * 4);
  }
  local_240.m_data = (double *)0x0;
  local_240.m_rows = 0;
  lVar18 = (longlong)param_1;
  lVar14 = *(longlong *)(*(longlong *)this + 0x20);
  local_220 = lVar18;
  if (lVar14 == 0) {
    local_150._24_8_ = *(longlong *)(*(longlong *)this + 0x28);
    local_130 = 0;
    local_150._8_8_ = *(longlong *)(local_150._24_8_ + 8);
    local_150._0_8_ = *(longlong *)local_150._24_8_ + lVar18 * local_150._8_8_ * 8;
    local_128 = lVar18;
    local_120 = local_150._8_8_;
    Eigen::internal::
    call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Block<Eigen::Matrix<double,_1,_1,0,_1,_1>_const_,_1,1,1>,Eigen::internal::assign_op<double,double>_>
              ((Matrix<double,_1,1,0,_1,1> *)&local_240,
               (Block<Eigen::Matrix<double,_1,_1,0,_1,_1>_const_,_1,1,1> *)local_150,local_res18);
  }
  else {
    local_170._0_1_ = 0;
    local_170._8_8_ = lVar14;
    local_170._16_8_ = lVar18;
    Eigen::DenseStorage<double,-1,-1,1,0>::resize
              (&local_240,*(long64 *)(lVar14 + 0x10),*(long64 *)(lVar14 + 0x10),1);
    Eigen::internal::
    call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Block<Eigen::SparseMatrix<double,0,int>_const_,_1,1,1>,Eigen::internal::assign_op<double,double>_>
              ((Matrix<double,_1,1,0,_1,1> *)&local_240,&local_170,local_res8);
  }
  pSVar5 = *(SparseMatrix<double,0,int> **)((longlong)this + 0x18);
  local_250.m_data = (double *)0x0;
  local_250.m_rows = 0;
  if (*(longlong *)(*(longlong *)this + 8) == 0) {
    local_e0.m_lhs.m_lhs.m_rows.m_value = pSVar5->m_innerSize;
    local_e0.m_lhs.m_lhs.m_cols.m_value = pSVar5->m_outerSize;
    local_e0.m_rhs = (Matrix<double,_1,1,0,_1,1> *)&local_240;
    local_e0.m_lhs.m_lhs.m_functor.m_other = __real_bff0000000000000;
    local_e0.m_lhs._padding_._0_1_ = 0;
    local_200 = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)0x0;
    lStack_1f8 = 0;
    local_e0.m_lhs.m_rhs = pSVar5;
    Eigen::internal::
    call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>,Eigen::Matrix<double,_1,1,0,_1,1>,0>,Eigen::internal::assign_op<double,double>_>
              ((Matrix<double,_1,1,0,_1,1> *)&local_200,&local_e0,&local_258);
    eVar9 = local_200;
    local_230 = local_200;
    if (local_250.m_rows != lStack_1f8) {
      Eigen::DenseStorage<double,-1,-1,1,0>::resize(&local_250,lStack_1f8,lStack_1f8,1);
    }
    local_1f0.m_dst = &local_228;
    local_1f0.m_src = &local_230;
    local_1f0.m_functor = &local_257;
    local_1f0.m_dstExpr = (Matrix<double,_1,1,0,_1,1> *)&local_250;
    local_228 = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)local_250.m_data;
    lVar14 = (local_250.m_rows / 2) * 2;
    uVar13 = uVar16;
    if (0 < lVar14) {
      do {
        pdVar1 = (double *)((longlong)local_230 + uVar13 * 8);
        dVar8 = pdVar1[1];
        pdVar2 = (double *)((longlong)local_250.m_data + uVar13 * 8);
        *pdVar2 = *pdVar1;
        pdVar2[1] = dVar8;
        uVar13 = uVar13 + 2;
      } while ((longlong)uVar13 < lVar14);
    }
    Eigen::internal::unaligned_dense_assignment_loop<0>::
    run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>,0>_>
              (&local_1f0,lVar14,local_250.m_rows);
    FMemory_Free((void *)eVar9);
  }
  else {
    pMStack_1a8 = *(Matrix<double,_1,_1,0,_1,_1> **)((longlong)this + 0x10);
    pDStack_198 = &local_240;
    local_a0.m_lhs.m_rows.m_value = pSVar5->m_innerSize;
    local_a0.m_lhs.m_functor.m_other = __real_bff0000000000000;
    local_a0.m_rhs._padding_ = local_1b0;
    local_a0.m_lhs.m_cols.m_value = 1;
    local_a0.m_rhs.m_functor = local_190;
    local_a0.m_rhs._33_7_ = uStack_18f;
    local_1a0 = pSVar5;
    local_a0.m_rhs.m_lhs = pMStack_1a8;
    local_a0.m_rhs.m_rhs.m_lhs = pSVar5;
    local_a0.m_rhs.m_rhs.m_rhs = (Matrix<double,_1,1,0,_1,1> *)pDStack_198;
    Eigen::internal::
    call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::Matrix<double,_1,1,0,_1,1>,0>_const_>_const_>,Eigen::internal::assign_op<double,double>_>
              ((Matrix<double,_1,1,0,_1,1> *)&local_250,&local_a0,local_res20);
  }
  local_218 = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)0x0;
  uStack_210 = 0;
  (**(code **)(**(longlong **)(*(longlong *)this + 0x40) + 0x20))
            (*(longlong **)(*(longlong *)this + 0x40),&local_250,&local_218);
  cVar11 = (**(code **)(**(longlong **)(*(longlong *)this + 0x40) + 0x38))();
  if (cVar11 == '\0') {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_7799773043189874472>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\QuadraticProgramming.cpp"
                        ,0xd8,"Solver->bSucceeded()");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar4 = *(longlong **)((longlong)this + 0x30);
    uVar12 = 0;
    if (param_1 < (int)plVar4[1]) {
      uVar12 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(undefined1 *)(lVar18 + *plVar4) = 0;
  }
  else if (**(char **)((longlong)this + 0x20) == '\0') {
    lVar14 = *(longlong *)this;
    uVar13 = uVar16;
    uVar17 = uVar16;
    uVar19 = uVar16;
    if (0 < *(int *)(*(longlong *)(lVar14 + 0x18) + 8)) {
      do {
        uVar15 = (uint)uVar13;
        plVar4 = *(longlong **)(lVar14 + 0x18);
        plVar6 = *(longlong **)((longlong)this + 0x28);
        uVar3 = *(undefined8 *)(uVar19 + (longlong)local_240.m_data);
        uVar12 = 0;
        if ((int)uVar15 < (int)plVar4[1]) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar14 = *(longlong *)this;
        *(undefined8 *)
         (*plVar6 + (local_220 * plVar6[1] + (longlong)*(int *)(uVar17 + *plVar4)) * 8) = uVar3;
        uVar13 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 4;
        uVar19 = uVar19 + 8;
      } while ((int)(uVar15 + 1) < *(int *)(*(longlong *)(lVar14 + 0x18) + 8));
    }
    uVar13 = uVar16;
    uVar17 = uVar16;
    if (0 < *(int *)(lVar14 + 0x38)) {
      do {
        uVar15 = (uint)uVar16;
        plVar4 = *(longlong **)((longlong)this + 0x28);
        uVar3 = *(undefined8 *)(uVar17 + (longlong)local_218);
        uVar12 = 0;
        if ((int)uVar15 < *(int *)(lVar14 + 0x38)) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        plVar6 = (longlong *)(lVar14 + 0x30);
        uVar16 = (ulonglong)(uVar15 + 1);
        lVar14 = *(longlong *)this;
        *(undefined8 *)
         (*plVar4 + (local_220 * plVar4[1] + (longlong)*(int *)(uVar13 + *plVar6)) * 8) = uVar3;
        uVar13 = uVar13 + 4;
        uVar17 = uVar17 + 8;
      } while ((int)(uVar15 + 1) < *(int *)(lVar14 + 0x38));
    }
  }
  else {
    local_118._24_8_ = *(longlong *)((longlong)this + 0x28);
    local_118._8_8_ = *(longlong *)(local_118._24_8_ + 8);
    local_f8 = 0;
    local_188._0_8_ = *(longlong *)local_118._24_8_ + lVar18 * local_118._8_8_ * 8;
    local_e8 = *(longlong *)(local_118._24_8_ + 8);
    local_208 = local_218;
    local_188._16_8_ = *(longlong *)(local_118._24_8_ + 8);
    local_1d0.m_src = &local_208;
    local_1d0.m_functor = local_256;
    local_1d0.m_dstExpr = (Block<Eigen::Matrix<double,_1,_1,0,_1,_1>,_1,1,1> *)local_118;
    local_1d0.m_dst = &local_188;
    local_118._0_8_ = local_188._0_8_;
    local_f0 = lVar18;
    Eigen::internal::
    dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Block<Eigen::Matrix<double,-1,-1,0,-1,-1>,-1,1,1>_>,Eigen::internal::evaluator<Eigen::Matrix<double,-1,1,0,-1,1>_>,Eigen::internal::assign_op<double,double>,0>,3,0>
    ::run(&local_1d0);
  }
  FMemory_Free((void *)local_218);
  FMemory_Free(local_250.m_data);
  FMemory_Free(local_240.m_data);
  return;
}

// GetSolveTimeElapsedInSec @ 14c8f7d50

double __thiscall
UE::Geometry::FQuadraticProgramming::GetSolveTimeElapsedInSec(FQuadraticProgramming *this)

{
  return this->SolveTimeElapsedInSec;
}

// GetVariableRowIndices @ 14c8f9920

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::FQuadraticProgramming::GetVariableRowIndices
          (FQuadraticProgramming *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar1 = (this->VariableRowIndices).ArrayNum;
  _Src = (this->VariableRowIndices).AllocatorInstance.Data;
  __return_storage_ptr__->ArrayNum = iVar1;
  if (iVar1 == 0) {
    __return_storage_ptr__->ArrayMax = 0;
    return __return_storage_ptr__;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,iVar1,0,&__return_storage_ptr__->AllocatorInstance,iVar1,
             &__return_storage_ptr__->ArrayMax);
  memcpy((__return_storage_ptr__->AllocatorInstance).Data,_Src,(longlong)iVar1 << 2);
  return __return_storage_ptr__;
}

// PreFactorize @ 14c90f830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UE::Geometry::FQuadraticProgramming::PreFactorize(FQuadraticProgramming *this)

{
  TUniquePtr<UE::Geometry::IMatrixSolverBase,TDefaultDelete<UE::Geometry::IMatrixSolverBase>_>
  *pTVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar5;
  IMatrixSolverBase *pIVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  TUniquePtr<UE::Geometry::IMatrixSolverBase,TDefaultDelete<UE::Geometry::IMatrixSolverBase>_>
  TVar13;
  ForElementType<unsigned_int> FVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  int iVar21;
  longlong lVar22;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [4];
  uint local_c4;
  undefined4 local_c0;
  undefined8 *local_b8 [2];
  SparseMatrix<double,0,int> local_a8;
  ForElementType<unsigned_int> local_58;
  uint local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if (this->bFixedConstraintsSet == false) {
    bVar8 = false;
  }
  else {
    local_c4 = (uint)this->MatrixQ->m_innerSize;
    iVar21 = local_c4 - this->FixedRowIndices->ArrayNum;
    uVar16 = local_c4 + 0x1f >> 5;
    local_58.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_3c = 0x80;
    local_40 = local_c4;
    if (local_c4 + 0x1f >> 5 != 0) {
      if (4 < uVar16) {
        TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
        ResizeAllocation(&local_58,0,uVar16,4);
        local_3c = uVar16 << 5;
      }
      FVar14 = (ForElementType<unsigned_int>)&local_58;
      if (local_58.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_58.SecondaryData;
      }
      if (uVar16 < 9) {
        iVar15 = -1;
      }
      else {
        iVar15 = 0xff;
      }
      memset((void *)FVar14,iVar15,(ulonglong)uVar16 << 2);
      uVar16 = local_40 & 0x8000001f;
      if ((int)uVar16 < 0) {
        uVar16 = (uVar16 - 1 | 0xffffffe0) + 1;
      }
      if (uVar16 != 0) {
        FVar14 = (ForElementType<unsigned_int>)&local_58;
        if (local_58.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_58.SecondaryData;
        }
        puVar2 = (uint *)((longlong)FVar14 +
                         (longlong)((int)(local_40 + ((int)local_40 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar2 = *puVar2 & 0xffffffffU >> (0x20U - (char)uVar16 & 0x1f);
      }
    }
    pTVar5 = this->FixedRowIndices;
    pFVar20 = (pTVar5->AllocatorInstance).Data;
    iVar15 = pTVar5->ArrayNum;
    pFVar3 = pFVar20 + (longlong)iVar15 * 4;
    while( true ) {
      if (pTVar5->ArrayNum != iVar15) {
        local_c8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_c8);
      }
      if (pFVar20 == pFVar3) break;
      iVar4 = *(int *)pFVar20;
      if (((iVar4 < 0) || ((int)local_40 <= iVar4)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5be,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      FVar14 = (ForElementType<unsigned_int>)&local_58;
      if (local_58.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar14 = local_58.SecondaryData;
      }
      iVar11 = iVar4;
      if (iVar4 < 0) {
        iVar11 = iVar4 + 0x1f;
      }
      puVar2 = (uint *)((longlong)FVar14 + (longlong)(iVar11 >> 5) * 4);
      *puVar2 = *puVar2 & ~(1 << ((byte)iVar4 & 0x1f));
      pFVar20 = pFVar20 + 4;
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->VariableRowIndices,iVar21,Default);
    uVar16 = local_c4;
    uVar18 = 0;
    uVar17 = 0;
    if (0 < (int)local_c4) {
      uVar19 = 1;
      lVar22 = 0;
      do {
        if (((int)local_40 <= (int)uVar17) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          uVar9 = (*pcVar7)();
          return (bool)uVar9;
        }
        FVar14 = (ForElementType<unsigned_int>)&local_58;
        if (local_58.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar14 = local_58.SecondaryData;
        }
        if ((*(uint *)((longlong)FVar14 + (ulonglong)(uVar17 >> 5) * 4) & uVar19) != 0) {
          uVar12 = 0;
          if ((int)uVar18 < (this->VariableRowIndices).ArrayNum) {
            uVar12 = ~uVar18 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          uVar18 = uVar18 + 1;
          *(uint *)((this->VariableRowIndices).AllocatorInstance.Data + lVar22) = uVar17;
          lVar22 = lVar22 + 4;
        }
        uVar17 = uVar17 + 1;
        uVar19 = uVar19 << 1 | (uint)((int)uVar19 < 0);
      } while ((int)uVar17 < (int)uVar16);
    }
    local_a8._padding_._0_1_ = 0;
    local_a8.m_innerNonZeros = (int *)0x0;
    local_a8.m_data.m_values = (double *)0x0;
    local_a8.m_data.m_indices = (int *)0x0;
    local_a8.m_data.m_allocatedSize = 0;
    local_a8.m_innerSize = 0;
    local_a8.m_data.m_size = 0;
    FMemory_Free((void *)0x0);
    local_a8.m_outerIndex = FMemory_Malloc(4,0x10);
    if (local_a8.m_outerIndex == (int *)0x0) {
      ::operator_new(0xffffffffffffffff);
    }
    local_a8.m_outerSize = 0;
    if (local_a8.m_innerNonZeros != (int *)0x0) {
      FMemory_Free(local_a8.m_innerNonZeros);
    }
    memset(local_a8.m_outerIndex,0,local_a8.m_outerSize * 4 + 4);
    SliceSparseMatrix(this->MatrixQ,&this->VariableRowIndices,&this->VariableRowIndices,&local_a8);
    local_c0 = 4;
    TVar13 = ConstructMatrixSolver((EMatrixSolverType *)local_b8);
    pTVar1 = &this->Solver;
    if ((IMatrixSolverBase *)pTVar1 != TVar13.Ptr) {
      pIVar6 = pTVar1->Ptr;
      pTVar1->Ptr = (IMatrixSolverBase *)*TVar13.Ptr;
      *TVar13.Ptr = (IMatrixSolverBase)0x0;
      if (pIVar6 != (IMatrixSolverBase *)0x0) {
        (**(code **)*pIVar6)(pIVar6,1);
      }
    }
    if (local_b8[0] != (undefined8 *)0x0) {
      (**(code **)*local_b8[0])(local_b8[0],1);
    }
    (**(code **)((longlong)*pTVar1->Ptr + 0x28))(pTVar1->Ptr,&local_a8,1);
    cVar10 = (**(code **)((longlong)*pTVar1->Ptr + 0x38))();
    if (cVar10 == '\0') {
      bVar8 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_7799773043189874564>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\QuadraticProgramming.cpp"
                         ,0x7c,"Solver->bSucceeded()");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      pIVar6 = pTVar1->Ptr;
      pTVar1->Ptr = (IMatrixSolverBase *)0x0;
      if (pIVar6 != (IMatrixSolverBase *)0x0) {
        (**(code **)*pIVar6)(pIVar6,1);
      }
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    FMemory_Free(local_a8.m_outerIndex);
    FMemory_Free(local_a8.m_innerNonZeros);
    operator_delete__(local_a8.m_data.m_values);
    operator_delete__(local_a8.m_data.m_indices);
    if (local_58.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_58.SecondaryData);
    }
  }
  return bVar8;
}

// SetEnableParallelization @ 14c916a00

void __thiscall
UE::Geometry::FQuadraticProgramming::SetEnableParallelization
          (FQuadraticProgramming *this,bool param_1)

{
  this->bUseParallel = param_1;
  return;
}

// SetFixedConstraints @ 14c916c00

bool __thiscall
UE::Geometry::FQuadraticProgramming::SetFixedConstraints
          (FQuadraticProgramming *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          Matrix<double,_1,_1,0,_1,_1> *param_2)

{
  longlong lVar1;
  
  if ((param_1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
     (param_2 != (Matrix<double,_1,_1,0,_1,_1> *)0x0)) {
    if (((longlong)param_1->ArrayNum == *(longlong *)&param_2->field_0x8) &&
       ((lVar1 = this->MatrixQ->m_innerSize, param_1->ArrayNum <= lVar1 &&
        (*(longlong *)&param_2->field_0x8 <= lVar1)))) {
      this->FixedRowIndices = param_1;
      this->FixedValuesDense = param_2;
      this->FixedValuesSparse = (SparseMatrix<double,0,int> *)0x0;
      this->bFixedConstraintsSet = true;
      return true;
    }
  }
  return false;
}

// SetFixedConstraints @ 14c916c50

bool __thiscall
UE::Geometry::FQuadraticProgramming::SetFixedConstraints
          (FQuadraticProgramming *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          SparseMatrix<double,0,int> *param_2)

{
  longlong lVar1;
  
  if ((param_1 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
     (param_2 != (SparseMatrix<double,0,int> *)0x0)) {
    if (((longlong)param_1->ArrayNum == param_2->m_innerSize) &&
       ((lVar1 = this->MatrixQ->m_innerSize, param_1->ArrayNum <= lVar1 &&
        (param_2->m_innerSize <= lVar1)))) {
      this->FixedRowIndices = param_1;
      this->FixedValuesSparse = param_2;
      this->FixedValuesDense = (Matrix<double,_1,_1,0,_1,_1> *)0x0;
      this->bFixedConstraintsSet = true;
      return true;
    }
  }
  return false;
}

// Solve @ 14c919450

bool __thiscall
UE::Geometry::FQuadraticProgramming::Solve
          (FQuadraticProgramming *this,Matrix<double,_1,_1,0,_1,_1> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  ulonglong uVar6;
  FDateTime FVar7;
  uint uVar8;
  long64 lVar9;
  SparseMatrix<double,0,int> *pSVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  int iVar13;
  <lambda_1> local_res8 [8];
  char local_res18 [8];
  undefined1 local_res20 [8];
  bool local_168 [4];
  uint local_164;
  ForAnyElementType local_160;
  undefined8 local_158;
  undefined1 local_150 [8];
  TArray<bool,TSizedDefaultAllocator<32>_> local_148;
  double local_138;
  longlong local_130;
  TArray<int,TSizedDefaultAllocator<32>_> local_128;
  Matrix<double,_1,_1,0,_1,_1> local_118;
  TArrayView<std::nullptr_t,int> local_100;
  code *local_f0;
  FQuadraticProgramming **local_e8;
  SparseMatrix<double,0,int> local_d8;
  FQuadraticProgramming *local_88;
  ForAnyElementType *local_80;
  void **local_78;
  SparseMatrix<double,0,int> *local_70;
  char *local_68;
  Matrix<double,_1,_1,0,_1,_1> *local_60;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_58;
  SparseCompressedBase<Eigen::Block<Eigen::SparseMatrix<double,0,int>_const_,_1,1,1>_> local_48 [8];
  SparseMatrix<double,0,int> *local_40;
  longlong local_38;
  
  local_res18[0] = param_2;
  FDateTime::UtcNow();
  if (this->bFixedConstraintsSet == false) goto LAB_14c919838;
  if ((this->Solver).Ptr == (IMatrixSolverBase *)0x0) {
    local_res8[0] = (<lambda_1>)0x0;
    bVar3 = `UE::Geometry::FQuadraticProgramming::Solve'::__l6::<lambda_1>::operator()(local_res8);
    if (!bVar3) {
      return false;
    }
  }
  if (this->FixedValuesSparse == (SparseMatrix<double,0,int> *)0x0) {
    if (this->FixedValuesDense == (Matrix<double,_1,_1,0,_1,_1> *)0x0) {
LAB_14c9194bc:
      local_res20[0] = 0;
      bVar3 = `UE::Geometry::FQuadraticProgramming::Solve'::__l9::<lambda_2>::operator()
                        (local_res20);
      if (!bVar3) {
        return false;
      }
    }
  }
  else if (this->FixedValuesDense != (Matrix<double,_1,_1,0,_1,_1> *)0x0) goto LAB_14c9194bc;
  if (this->FixedValuesSparse == (SparseMatrix<double,0,int> *)0x0) {
    iVar13 = *(int *)&this->FixedValuesDense->field_0x10;
  }
  else {
    iVar13 = (int)this->FixedValuesSparse->m_outerSize;
  }
  Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&local_d8);
  SliceSparseMatrix(this->MatrixQ,&this->VariableRowIndices,this->FixedRowIndices,&local_d8);
  uVar6 = 0;
  local_118._16_8_ = 0;
  local_118._0_8_ = (void *)0x0;
  local_118._8_8_ = 0;
  if (this->VectorF != (Matrix<double,_1,1,0,_1,1> *)0x0) {
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 0;
    local_128.ArrayMax = 0;
    SliceDenseMatrix<double,_1,1>(this->VectorF,&this->VariableRowIndices,&local_128,&local_118);
  }
  if (local_res18[0] == '\0') {
    lVar9 = this->MatrixQ->m_innerSize;
  }
  else {
    lVar9 = (long64)(this->VariableRowIndices).ArrayNum;
  }
  Eigen::PlainObjectBase<Eigen::Matrix<double,-1,-1,0,-1,-1>_>::resize
            ((PlainObjectBase<Eigen::Matrix<double,_1,_1,0,_1,_1>_> *)param_1,lVar9,(longlong)iVar13
            );
  local_138 = 0.0;
  std::fill_n<double_*,__int64,double>
            (*(double **)param_1,
             *(longlong *)&param_1->field_0x8 * *(longlong *)&param_1->field_0x10,&local_138);
  pSVar10 = this->FixedValuesSparse;
  local_160.Data = (FScriptContainerElement *)0x0;
  local_158 = 0;
  if ((pSVar10 != (SparseMatrix<double,0,int> *)0x0) &&
     (local_164 = 0, uVar12 = uVar6, 0 < pSVar10->m_outerSize)) {
    do {
      uVar8 = (uint)uVar6;
      if (this->VectorF == (Matrix<double,_1,1,0,_1,1> *)0x0) {
        local_38 = (longlong)(int)uVar12;
        local_48[0] = (SparseCompressedBase<Eigen::Block<Eigen::SparseMatrix<double,0,int>_const_,_1,1,1>_>
                       )0x0;
        local_40 = pSVar10;
        lVar9 = Eigen::
                SparseCompressedBase<Eigen::Block<Eigen::SparseMatrix<double,0,int>_const_,-1,1,1>_>
                ::nonZeros(local_48);
        uVar8 = local_164;
        if (0 < lVar9) {
          if (((local_160.Data <= (FScriptContainerElement *)&local_164) &&
              ((FScriptContainerElement *)&local_164 <
               local_160.Data + (longlong)local_158._4_4_ * 4)) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          iVar5 = (int)local_158;
          if ((int)local_158 == local_158._4_4_) {
            iVar5 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&local_160,(int *)((longlong)&local_158 + 4));
          }
          local_158 = CONCAT44(local_158._4_4_,iVar5 + 1);
          *(uint *)(local_160.Data + (longlong)iVar5 * 4) = local_164;
          uVar8 = local_164;
        }
      }
      pSVar10 = this->FixedValuesSparse;
      local_164 = uVar8 + 1;
      uVar6 = (ulonglong)local_164;
      uVar12 = (longlong)(int)local_164;
    } while ((longlong)(int)local_164 < pSVar10->m_outerSize);
  }
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_168[0] = true;
  TArray<bool,TSizedDefaultAllocator<32>_>::Init(&local_148,local_168,*(int *)&param_1->field_0x10);
  local_80 = &local_160;
  if (this->FixedValuesSparse != (SparseMatrix<double,0,int> *)0x0) {
    iVar13 = (int)local_158;
  }
  local_78 = (void **)&local_118;
  local_70 = &local_d8;
  local_100.DataPtr = (void **)0x0;
  local_68 = local_res18;
  local_100.ArrayNum = 0;
  local_58 = &local_148;
  local_f0 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FQuadraticProgramming::Solve'::__l5::<lambda_3>,void,int>
             ::Call;
  local_e8 = &local_88;
  local_88 = this;
  local_60 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar13,1,(TFunctionRef<void___cdecl(int)> *)&local_f0,local_res8[0]
             ,(uint)(this->bUseParallel == false),&local_100);
  iVar13 = local_148.ArrayNum;
  uVar6 = (ulonglong)local_148.ArrayNum;
  pFVar1 = local_148.AllocatorInstance.Data + uVar6;
  FVar11.Data = local_148.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar6 != iVar13) {
      `TCheckedPointerIterator<bool,int,0>::operator!='::__l2::<lambda_1>::operator()(local_150);
      uVar6 = local_148._8_8_ & 0xffffffff;
    }
    if (FVar11.Data == pFVar1) break;
    if (*FVar11.Data == (FScriptContainerElement)0x0) {
      if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.AllocatorInstance.Data);
      }
      if (local_160.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data);
      }
      FMemory_Free((void *)local_118._0_8_);
      FMemory_Free(local_d8.m_outerIndex);
      FMemory_Free(local_d8.m_innerNonZeros);
      operator_delete__(local_d8.m_data.m_values);
      operator_delete__(local_d8.m_data.m_indices);
      return false;
    }
    FVar11.Data = FVar11.Data + 1;
  }
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  if (local_160.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data);
  }
  FMemory_Free((void *)local_118._0_8_);
  FMemory_Free(local_d8.m_outerIndex);
  FMemory_Free(local_d8.m_innerNonZeros);
  operator_delete__(local_d8.m_data.m_values);
  operator_delete__(local_d8.m_data.m_indices);
LAB_14c919838:
  FVar7 = FDateTime::UtcNow();
  this->SolveTimeElapsedInSec =
       (double)(*(longlong *)FVar7.Ticks - local_130) * __real_3e7ad7f29abcaf48;
  return true;
}

// Solve @ 14c919880

bool __thiscall
UE::Geometry::FQuadraticProgramming::Solve
          (FQuadraticProgramming *this,SparseMatrix<double,0,int> *param_1,bool param_2,
          double param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Dst;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var6;
  longlong lVar7;
  ulonglong uVar8;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var9;
  ulonglong uVar10;
  ulong64 uVar11;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Src;
  longlong lVar12;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  scalar_sum_op<double,double> local_88;
  int local_84;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_80;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_78;
  void *local_70;
  longlong lStack_68;
  longlong local_60;
  
  local_60 = 0;
  local_70 = (void *)0x0;
  lStack_68 = 0;
  bVar5 = Solve(this,(Matrix<double,_1,_1,0,_1,_1> *)&local_70,param_2);
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (bVar5) {
    _Dst = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
           0x0;
    _Var6 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
            0x0;
    local_84 = 0;
    _Var9 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
            0x0;
    lVar7 = lStack_68;
    lVar12 = local_60;
    if (0 < local_60) {
      local_80 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                  )0x0;
      do {
        iVar16 = 0;
        lVar14 = 0;
        _Src = _Dst;
        _Var13 = local_80;
        if (0 < lVar7) {
          do {
            uVar2 = *(undefined8 *)((longlong)local_70 + (lVar7 * (longlong)_Var13 + lVar14) * 8);
            uVar17 = (uint)uVar2 & uVar3;
            uVar18 = (uint)((ulonglong)uVar2 >> 0x20) & uVar4;
            _Dst = _Src;
            if (param_3 <= (double)CONCAT44(uVar18,uVar17) &&
                (double)CONCAT44(uVar18,uVar17) != param_3) {
              if (_Var6 == _Var9) {
                local_78 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                            )((longlong)_Var6 - (longlong)_Src);
                lVar7 = (longlong)local_78 >> 4;
                if (lVar7 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  std::
                  vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
                  _Xlength();
                }
                uVar10 = (longlong)_Var9 - (longlong)_Src >> 4;
                uVar8 = lVar7 + 1;
                if (0xfffffffffffffff - (uVar10 >> 1) < uVar10) {
                  uVar15 = 0xfffffffffffffff;
                }
                else {
                  uVar1 = (uVar10 >> 1) + uVar10;
                  uVar15 = uVar8;
                  if (uVar8 <= uVar1) {
                    uVar15 = uVar1;
                  }
                  if (0xfffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
                    std::_Throw_bad_array_new_length();
                  }
                }
                _Dst = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                        )std::_Allocate<16,std::_Default_allocate_traits>(uVar15 * 0x10);
                *(int *)((longlong)_Dst + lVar7 * 0x10) = iVar16;
                *(int *)((longlong)_Dst + 4 + lVar7 * 0x10) = local_84;
                *(undefined8 *)((longlong)_Dst + 8 + lVar7 * 0x10) = uVar2;
                memmove((void *)_Dst,(void *)_Src,(size_t)local_78);
                if (_Src != (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                             )0x0) {
                  uVar11 = uVar10 * 0x10;
                  _Var9 = _Src;
                  if (0xfff < uVar11) {
                    _Var9 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                              *)((longlong)_Src + -8);
                    uVar11 = uVar11 + 0x27;
                    if (0x1f < ((longlong)_Src - (longlong)_Var9) - 8U) goto LAB_14c919b30;
                  }
                  ::operator_delete((void *)_Var9,uVar11);
                }
                _Var9 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         )(uVar15 * 0x10 + (longlong)_Dst);
                _Var6 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         )(uVar8 * 0x10 + (longlong)_Dst);
                lVar7 = lStack_68;
                _Var13 = local_80;
              }
              else {
                *(undefined8 *)((longlong)_Var6 + 8) = uVar2;
                *(int *)_Var6 = iVar16;
                *(int *)((longlong)_Var6 + 4) = local_84;
                _Var6 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         )((longlong)_Var6 + 0x10);
                lVar7 = lStack_68;
              }
            }
            iVar16 = iVar16 + 1;
            lVar14 = lVar14 + 1;
            _Src = _Dst;
            lVar12 = local_60;
          } while (iVar16 < lVar7);
        }
        local_84 = local_84 + 1;
        local_80 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                    )((longlong)_Var13 + 1);
      } while (local_84 < lVar12);
    }
    Eigen::SparseMatrix<double,0,int>::resize(param_1,lVar7,lVar12);
    local_80 = _Dst;
    local_78 = _Var6;
    Eigen::internal::
    set_from_triplets<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>,Eigen::SparseMatrix<double,0,int>,Eigen::internal::scalar_sum_op<double,double>_>
              (&local_80,&local_78,param_1,local_88);
    bVar5 = true;
    if (_Dst != (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                 )0x0) {
      uVar11 = (longlong)_Var9 - (longlong)_Dst & 0xfffffffffffffff0;
      _Var9 = _Dst;
      if (0xfff < uVar11) {
        _Var9 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                  *)((longlong)_Dst + -8);
        uVar11 = uVar11 + 0x27;
        if (0x1f < ((longlong)_Dst - (longlong)_Var9) - 8U) {
LAB_14c919b30:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
      }
      ::operator_delete((void *)_Var9,uVar11);
    }
  }
  else {
    bVar5 = false;
  }
  FMemory_Free(local_70);
  return bVar5;
}

// SolveWithFixedConstraints @ 14c91af40

bool __cdecl
UE::Geometry::FQuadraticProgramming::SolveWithFixedConstraints
          (SparseMatrix<double,0,int> *param_1,Matrix<double,_1,1,0,_1,1> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,SparseMatrix<double,0,int> *param_4,
          SparseMatrix<double,0,int> *param_5,bool param_6,double param_7,
          TArray<int,TSizedDefaultAllocator<32>_> *param_8)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType _Src;
  bool bVar2;
  longlong lVar3;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  FQuadraticProgramming local_68;
  
  local_68.SolveTimeElapsedInSec = 0.0;
  local_68.bFixedConstraintsSet = false;
  local_68.FixedRowIndices = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_68.FixedValuesSparse = (SparseMatrix<double,0,int> *)0x0;
  local_68.FixedValuesDense = (Matrix<double,_1,_1,0,_1,_1> *)0x0;
  local_68.VariableRowIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.VariableRowIndices.ArrayNum = 0;
  local_68.VariableRowIndices.ArrayMax = 0;
  local_68.Solver.Ptr = (IMatrixSolverBase *)0x0;
  local_68.bUseParallel = true;
  local_68.MatrixQ = param_1;
  local_68.VectorF = param_2;
  if ((param_3 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
     (param_4 != (SparseMatrix<double,0,int> *)0x0)) {
    if (((longlong)param_3->ArrayNum == param_4->m_innerSize) &&
       (((longlong)param_3->ArrayNum <= param_1->m_innerSize &&
        (param_4->m_innerSize <= param_1->m_innerSize)))) {
      local_68.bFixedConstraintsSet = true;
      local_68.FixedRowIndices = param_3;
      local_68.FixedValuesSparse = param_4;
      bVar2 = PreFactorize(&local_68);
      _Src.Data = local_68.VariableRowIndices.AllocatorInstance.Data;
      if (bVar2) {
        lVar3 = (longlong)local_68.VariableRowIndices.ArrayNum;
        local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.ArrayNum = local_68.VariableRowIndices.ArrayNum;
        if (local_68.VariableRowIndices.ArrayNum == 0) {
          local_78._8_8_ = local_68.VariableRowIndices._8_8_ & 0xffffffff;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_68.VariableRowIndices.ArrayNum,0,&local_78.AllocatorInstance,
                     local_68.VariableRowIndices.ArrayNum,&local_78.ArrayMax);
          memcpy(local_78.AllocatorInstance.Data,_Src.Data,lVar3 << 2);
        }
        if (param_8 != &local_78) {
          pFVar1 = (param_8->AllocatorInstance).Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_8->AllocatorInstance).Data = local_78.AllocatorInstance.Data;
          param_8->ArrayNum = local_78.ArrayNum;
          param_8->ArrayMax = local_78.ArrayMax;
          local_78.ArrayNum = 0;
          local_78.ArrayMax = 0;
          local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.AllocatorInstance.Data);
        }
        bVar2 = Solve(&local_68,param_5,param_6,param_7);
        goto LAB_14c91b0b7;
      }
    }
  }
  bVar2 = false;
LAB_14c91b0b7:
  if (local_68.Solver.Ptr != (IMatrixSolverBase *)0x0) {
    (**(code **)*local_68.Solver.Ptr)(local_68.Solver.Ptr,1);
  }
  if (local_68.VariableRowIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.VariableRowIndices.AllocatorInstance.Data);
  }
  return bVar2;
}

// SolveWithFixedConstraints @ 14c91b100

bool __cdecl
UE::Geometry::FQuadraticProgramming::SolveWithFixedConstraints
          (SparseMatrix<double,0,int> *param_1,Matrix<double,_1,1,0,_1,1> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,SparseMatrix<double,0,int> *param_4,
          Matrix<double,_1,_1,0,_1,_1> *param_5,bool param_6,
          TArray<int,TSizedDefaultAllocator<32>_> *param_7)

{
  FScriptContainerElement *pFVar1;
  ForAnyElementType _Src;
  bool bVar2;
  longlong lVar3;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  FQuadraticProgramming local_68;
  
  local_68.SolveTimeElapsedInSec = 0.0;
  local_68.bFixedConstraintsSet = false;
  local_68.FixedRowIndices = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_68.FixedValuesSparse = (SparseMatrix<double,0,int> *)0x0;
  local_68.FixedValuesDense = (Matrix<double,_1,_1,0,_1,_1> *)0x0;
  local_68.VariableRowIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.VariableRowIndices.ArrayNum = 0;
  local_68.VariableRowIndices.ArrayMax = 0;
  local_68.Solver.Ptr = (IMatrixSolverBase *)0x0;
  local_68.bUseParallel = true;
  local_68.MatrixQ = param_1;
  local_68.VectorF = param_2;
  if ((param_3 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
     (param_4 != (SparseMatrix<double,0,int> *)0x0)) {
    if (((longlong)param_3->ArrayNum == param_4->m_innerSize) &&
       (((longlong)param_3->ArrayNum <= param_1->m_innerSize &&
        (param_4->m_innerSize <= param_1->m_innerSize)))) {
      local_68.bFixedConstraintsSet = true;
      local_68.FixedRowIndices = param_3;
      local_68.FixedValuesSparse = param_4;
      bVar2 = PreFactorize(&local_68);
      _Src.Data = local_68.VariableRowIndices.AllocatorInstance.Data;
      if (bVar2) {
        lVar3 = (longlong)local_68.VariableRowIndices.ArrayNum;
        local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.ArrayNum = local_68.VariableRowIndices.ArrayNum;
        if (local_68.VariableRowIndices.ArrayNum == 0) {
          local_78._8_8_ = local_68.VariableRowIndices._8_8_ & 0xffffffff;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_68.VariableRowIndices.ArrayNum,0,&local_78.AllocatorInstance,
                     local_68.VariableRowIndices.ArrayNum,&local_78.ArrayMax);
          memcpy(local_78.AllocatorInstance.Data,_Src.Data,lVar3 << 2);
        }
        if (param_7 != &local_78) {
          pFVar1 = (param_7->AllocatorInstance).Data;
          if (pFVar1 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar1);
          }
          (param_7->AllocatorInstance).Data = local_78.AllocatorInstance.Data;
          param_7->ArrayNum = local_78.ArrayNum;
          param_7->ArrayMax = local_78.ArrayMax;
          local_78.ArrayNum = 0;
          local_78.ArrayMax = 0;
          local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.AllocatorInstance.Data);
        }
        bVar2 = Solve(&local_68,param_5,param_6);
        goto LAB_14c91b272;
      }
    }
  }
  bVar2 = false;
LAB_14c91b272:
  if (local_68.Solver.Ptr != (IMatrixSolverBase *)0x0) {
    (**(code **)*local_68.Solver.Ptr)(local_68.Solver.Ptr,1);
  }
  if (local_68.VariableRowIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.VariableRowIndices.AllocatorInstance.Data);
  }
  return bVar2;
}

// operator() @ 150574920

bool __thiscall
`UE::Geometry::FQuadraticProgramming::Solve'::__l6::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7799773043189874547>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7799773043189874547>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150574aa0

bool __thiscall
`UE::Geometry::FQuadraticProgramming::Solve'::__l9::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7799773043189874540>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7799773043189874540>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

