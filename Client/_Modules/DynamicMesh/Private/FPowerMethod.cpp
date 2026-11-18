// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 9

// ~FPowerMethod @ 14c89a590

void __thiscall UE::Geometry::FPowerMethod::~FPowerMethod(FPowerMethod *this)

{
  IMatrixSolverBase *pIVar1;
  
  this->_padding_ = (longlong)&___7FPowerMethod_Geometry_UE__6B_;
  if ((this->Parms).InitialSolution.bIsSet != false) {
    FMemory_Free(*(void **)&(this->Parms).InitialSolution.TypedValue);
  }
  pIVar1 = (this->Solver).Ptr;
  if (pIVar1 != (IMatrixSolverBase *)0x0) {
    (**(code **)*pIVar1)(pIVar1,1);
  }
  if ((this->OpMatrixB).bIsSet != false) {
    MatrixOperator::~MatrixOperator(&(this->OpMatrixB).TypedValue);
  }
  MatrixOperator::~MatrixOperator(&this->OpMatrixA);
  return;
}

// ~MatrixOperator @ 14c89a840

void __thiscall UE::Geometry::FPowerMethod::MatrixOperator::~MatrixOperator(MatrixOperator *this)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->Rows != 0) {
    plVar1 = *(longlong **)&(this->Rows).field_0x28;
    plVar2 = (longlong *)&(this->Rows).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->Factorize != 0) {
    plVar1 = *(longlong **)&(this->Factorize).field_0x28;
    plVar2 = (longlong *)&(this->Factorize).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->Product != 0) {
    plVar1 = *(longlong **)&(this->Product).field_0x28;
    plVar2 = (longlong *)&(this->Product).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00014c89a89e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x10))();
    return;
  }
  return;
}

// Converged @ 14c8d4880

bool __thiscall
UE::Geometry::FPowerMethod::Converged
          (FPowerMethod *this,double param_1,Matrix<double,_1,1,0,_1,1> *param_2)

{
  double dVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  longlong *plVar6;
  scalar_max_op<double,double,0> local_res8 [8];
  Matrix<double,_1,1,0,_1,1> local_d8;
  Matrix<double,_1,1,0,_1,1> local_c8;
  undefined1 local_b8 [32];
  double local_98;
  void *local_88;
  CwiseUnaryOp<Eigen::internal::scalar_abs_op<double>,Eigen::ArrayWrapper<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<double,double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_const_,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_const_>_const_>_const_>
  local_80;
  
  local_d8._0_8_ = (void *)0x0;
  local_d8._8_8_ = 0;
  Core::Private::Function::CheckCallable(*(void **)&(this->OpMatrixA).Product);
  plVar2 = *(longlong **)&(this->OpMatrixA).Product.field_0x28;
  pcVar3 = *(code **)&(this->OpMatrixA).Product;
  plVar6 = (longlong *)&(this->OpMatrixA).Product.field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar6 = plVar2;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  (*pcVar3)(uVar5,param_2,&local_d8);
  local_98 = param_1;
  local_80.m_xpr.m_expression.m_rhs.m_lhs.m_functor.m_other = param_1;
  if ((this->OpMatrixB).bIsSet == false) {
    local_80.m_xpr.m_expression.m_lhs = &local_d8;
    local_80.m_xpr.m_expression.m_rhs.m_lhs.m_rows.m_value = *(long64 *)&param_2->field_0x8;
    local_b8._16_8_ = local_d8._0_8_;
    local_88 = *(void **)param_2;
    local_80.m_xpr.m_expression.m_rhs.m_rhs = param_2;
    dVar4 = Eigen::internal::
            redux_impl<Eigen::internal::scalar_max_op<double,double,0>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<double>,Eigen::ArrayWrapper<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<double,double>,Eigen::Matrix<double,-1,1,0,-1,1>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,-1,1,0,-1,1>_const_>_const_,Eigen::Matrix<double,-1,1,0,-1,1>_const_>_const_>_const_>_const_>_>,3,0>
            ::
            run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<double>,Eigen::ArrayWrapper<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<double,double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_const_,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_const_>_const_>_const_>_>
                      ((redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<double>,Eigen::ArrayWrapper<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<double,double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_const_,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_const_>_const_>_const_>_>
                        *)local_b8,local_res8,&local_80);
    this->IterationTol = dVar4;
  }
  else {
    local_c8._0_8_ = (void *)0x0;
    local_c8._8_8_ = 0;
    Core::Private::Function::CheckCallable(*(void **)&(this->OpMatrixB).TypedValue.Product);
    pcVar3 = *(code **)&(this->OpMatrixB).TypedValue.Product;
    plVar2 = *(longlong **)&(this->OpMatrixB).TypedValue.Product.field_0x28;
    plVar6 = (longlong *)&(this->OpMatrixB).TypedValue.Product.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar6 = plVar2;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar3)(uVar5,param_2,&local_c8);
    local_80.m_xpr.m_expression.m_lhs = &local_d8;
    local_80.m_xpr.m_expression.m_rhs.m_lhs.m_rows.m_value = local_c8._8_8_;
    local_80.m_xpr.m_expression.m_rhs.m_rhs = &local_c8;
    local_b8._16_8_ = local_d8._0_8_;
    local_88 = (void *)local_c8._0_8_;
    dVar4 = Eigen::internal::
            redux_impl<Eigen::internal::scalar_max_op<double,double,0>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<double>,Eigen::ArrayWrapper<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<double,double>,Eigen::Matrix<double,-1,1,0,-1,1>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,-1,1,0,-1,1>_const_>_const_,Eigen::Matrix<double,-1,1,0,-1,1>_const_>_const_>_const_>_const_>_>,3,0>
            ::
            run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<double>,Eigen::ArrayWrapper<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<double,double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_const_,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_const_>_const_>_const_>_>
                      ((redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs_op<double>,Eigen::ArrayWrapper<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<double,double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_const_,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_const_>_const_>_const_>_>
                        *)local_b8,local_res8,&local_80);
    this->IterationTol = dVar4;
    FMemory_Free((void *)local_c8._0_8_);
  }
  dVar4 = this->IterationTol;
  dVar1 = (this->Parms).Tolerance;
  FMemory_Free((void *)local_d8._0_8_);
  return dVar4 < dVar1;
}

// Iteration @ 14c902e40

bool __thiscall
UE::Geometry::FPowerMethod::Iteration
          (FPowerMethod *this,Matrix<double,_1,1,0,_1,1> *param_1,bool param_2)

{
  char cVar1;
  longlong lVar2;
  IMatrixSolverBase *pIVar3;
  assign_op<double,double> local_res8 [8];
  Matrix<double,_1,1,0,_1,1> local_18;
  
  if ((this->OpMatrixB).bIsSet == false) {
    if (param_2) {
      Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Eigen::Matrix<double,-1,1,0,-1,1>_const_&,Eigen::Matrix<double,-1,1,0,-1,1>_&)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Eigen::Matrix<double,_1,1,0,_1,1>_const_&,Eigen::Matrix<double,_1,1,0,_1,1>_&)>
                    *)&this->OpMatrixA,param_1,param_1);
      return true;
    }
    pIVar3 = (this->Solver).Ptr;
  }
  else {
    lVar2 = 0x10;
    if (!param_2) {
      lVar2 = 0xa0;
    }
    Core::Private::Function::
    TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Eigen::Matrix<double,-1,1,0,-1,1>_const_&,Eigen::Matrix<double,-1,1,0,-1,1>_&)>
    ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(Eigen::Matrix<double,_1,1,0,_1,1>_const_&,Eigen::Matrix<double,_1,1,0,_1,1>_&)>
                  *)((longlong)&this->_padding_ + lVar2),param_1,param_1);
    pIVar3 = (this->Solver).Ptr;
  }
  local_18._0_8_ = (void *)0x0;
  local_18._8_8_ = 0;
  (**(code **)((longlong)*pIVar3 + 0x20))(0,param_1,&local_18);
  cVar1 = (**(code **)((longlong)*(this->Solver).Ptr + 0x38))();
  if (cVar1 == '\0') {
    FMemory_Free((void *)local_18._0_8_);
    return false;
  }
  Eigen::internal::
  call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::internal::assign_op<double,double>_>
            (param_1,&local_18,local_res8);
  FMemory_Free((void *)local_18._0_8_);
  return true;
}

// Normalize @ 14c90ca40

void __thiscall
UE::Geometry::FPowerMethod::Normalize(FPowerMethod *this,Matrix<double,_1,1,0,_1,1> *param_1)

{
  longlong lVar1;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> eVar2;
  undefined1 auVar3 [16];
  double dVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 in_XMM2 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  scalar_sum_op<double,double> local_res10 [8];
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_res18;
  undefined1 local_38 [16];
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_>_>,Eigen::internal::div_assign_op<double,double>,0>
  local_28;
  
  lVar1 = *(longlong *)&param_1->field_0x8;
  if (lVar1 != 0) {
    eVar2 = *(evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)param_1;
    local_38._8_8_ = eVar2;
    local_28.m_src =
         (evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_>_>
          *)param_1;
    dVar4 = Eigen::internal::
            redux_impl<Eigen::internal::scalar_sum_op<double,double>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<double>,Eigen::Matrix<double,-1,1,0,-1,1>_const_>_>,3,0>
            ::
            run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_>
                      ((redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_>
                        *)local_38,local_res10,
                       (CwiseUnaryOp<Eigen::internal::scalar_abs2_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_>
                        *)&local_28);
    if (0.0 < dVar4) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = dVar4;
      auVar7 = sqrtpd(in_XMM2,auVar7);
      local_28.m_dst = &local_res18;
      local_28.m_src =
           (evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_>_>
            *)local_38;
      local_28.m_functor = (div_assign_op<double,double> *)local_res10;
      lVar6 = 0;
      lVar5 = (lVar1 / 2) * 2;
      auVar8._0_8_ = auVar7._0_8_;
      if (0 < lVar5) {
        while( true ) {
          auVar3._8_4_ = auVar7._0_4_;
          auVar3._0_8_ = auVar7._0_8_;
          auVar3._12_4_ = auVar7._4_4_;
          auVar7 = divpd(*(undefined1 (*) [16])((longlong)eVar2 + lVar6 * 8),auVar3);
          *(undefined1 (*) [16])((longlong)eVar2 + lVar6 * 8) = auVar7;
          lVar6 = lVar6 + 2;
          if (lVar5 <= lVar6) break;
          auVar8._8_8_ = 0;
          auVar7 = auVar8;
        }
      }
      local_res18 = eVar2;
      local_38._0_8_ = auVar8._0_8_;
      local_28.m_dstExpr = param_1;
      Eigen::internal::unaligned_dense_assignment_loop<0>::
      run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_>_>,Eigen::internal::div_assign_op<double,double>,0>_>
                (&local_28,lVar5,lVar1);
    }
  }
  return;
}

// RayleighQuotient @ 14c911360

double __thiscall
UE::Geometry::FPowerMethod::RayleighQuotient(FPowerMethod *this,Matrix<double,_1,1,0,_1,1> *param_1)

{
  code *pcVar1;
  longlong *plVar2;
  double dVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  scalar_sum_op<double,double> local_res8 [8];
  Matrix<double,_1,1,0,_1,1> local_88;
  Matrix<double,_1,1,0,_1,1> local_78;
  undefined1 local_68 [16];
  void *local_58;
  CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<double,double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_,Eigen::Matrix<double,_1,1,0,_1,1>_const_>
  local_50 [2];
  
  local_50[0].m_lhs = param_1;
  if ((this->OpMatrixB).bIsSet == false) {
    local_50[0].m_rhs = param_1;
    if (*(longlong *)&param_1->field_0x8 == 0) {
      uVar8 = 0;
      uVar9 = 0;
    }
    else {
      local_68._8_8_ = *(undefined8 *)param_1;
      local_58 = (void *)local_68._8_8_;
      dVar3 = Eigen::internal::
              redux_impl<Eigen::internal::scalar_sum_op<double,double>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<double,double>,Eigen::Matrix<double,-1,1,0,-1,1>_const_,Eigen::Matrix<double,-1,1,0,-1,1>_const_>_>,3,0>
              ::
              run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<double,double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_>
                        ((redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<double,double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_>
                          *)local_68,local_res8,local_50);
      uVar8 = SUB84(dVar3,0);
      uVar9 = (uint)((ulonglong)dVar3 >> 0x20);
    }
  }
  else {
    local_88._0_8_ = (void *)0x0;
    local_88._8_8_ = 0;
    Core::Private::Function::CheckCallable(*(void **)&(this->OpMatrixB).TypedValue.Product);
    pcVar1 = *(code **)&(this->OpMatrixB).TypedValue.Product;
    plVar2 = *(longlong **)&(this->OpMatrixB).TypedValue.Product.field_0x28;
    plVar5 = (longlong *)&(this->OpMatrixB).TypedValue.Product.field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar5 = plVar2;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(uVar4,param_1,&local_88);
    uVar4 = local_88._0_8_;
    local_50[0].m_rhs = &local_88;
    if (local_88._8_8_ == 0) {
      uVar8 = 0;
      uVar9 = 0;
      FMemory_Free((void *)local_88._0_8_);
    }
    else {
      local_68._8_8_ = *(undefined8 *)param_1;
      local_58 = (void *)local_88._0_8_;
      dVar3 = Eigen::internal::
              redux_impl<Eigen::internal::scalar_sum_op<double,double>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<double,double>,Eigen::Matrix<double,-1,1,0,-1,1>_const_,Eigen::Matrix<double,-1,1,0,-1,1>_const_>_>,3,0>
              ::
              run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<double,double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_>
                        ((redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<double,double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_>
                          *)local_68,local_res8,local_50);
      uVar8 = SUB84(dVar3,0);
      uVar9 = (uint)((ulonglong)dVar3 >> 0x20);
      FMemory_Free((void *)uVar4);
    }
  }
  uVar7 = 0;
  uVar6 = 0;
  if ((double)CONCAT44(uVar9 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       uVar8 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
      __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar9 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       uVar8 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ==
      __real_3e45798ee2308c3a) {
    uVar8 = (uint)__real_3ff0000000000000;
    uVar9 = (uint)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  local_78._0_8_ = (void *)0x0;
  local_78._8_8_ = 0;
  Core::Private::Function::CheckCallable(*(void **)&(this->OpMatrixA).Product);
  plVar2 = *(longlong **)&(this->OpMatrixA).Product.field_0x28;
  pcVar1 = *(code **)&(this->OpMatrixA).Product;
  plVar5 = (longlong *)&(this->OpMatrixA).Product.field_0x10;
  if (plVar2 != (longlong *)0x0) {
    plVar5 = plVar2;
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar1)(uVar4,param_1,&local_78);
  uVar4 = local_78._0_8_;
  local_50[0].m_rhs = &local_78;
  local_50[0].m_lhs = param_1;
  if (local_78._8_8_ != 0) {
    local_68._8_8_ = *(undefined8 *)param_1;
    local_58 = (void *)local_78._0_8_;
    dVar3 = Eigen::internal::
            redux_impl<Eigen::internal::scalar_sum_op<double,double>,Eigen::internal::redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<double,double>,Eigen::Matrix<double,-1,1,0,-1,1>_const_,Eigen::Matrix<double,-1,1,0,-1,1>_const_>_>,3,0>
            ::
            run<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<double,double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_>
                      ((redux_evaluator<Eigen::CwiseBinaryOp<Eigen::internal::scalar_conj_product_op<double,double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_>
                        *)local_68,local_res8,local_50);
    uVar6 = SUB84(dVar3,0);
    uVar7 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  FMemory_Free((void *)uVar4);
  return (double)CONCAT44(uVar7,uVar6) / (double)CONCAT44(uVar9,uVar8);
}

// SetupSolver @ 14c918820

bool __thiscall UE::Geometry::FPowerMethod::SetupSolver(FPowerMethod *this,bool param_1)

{
  TUniquePtr<UE::Geometry::IMatrixSolverBase,TDefaultDelete<UE::Geometry::IMatrixSolverBase>_>
  *pTVar1;
  IMatrixSolverBase *pIVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  TUniquePtr<UE::Geometry::IMatrixSolverBase,TDefaultDelete<UE::Geometry::IMatrixSolverBase>_> TVar7
  ;
  TUniquePtr<UE::Geometry::IMatrixSolverBase,TDefaultDelete<UE::Geometry::IMatrixSolverBase>_>
  local_18;
  TUniquePtr<UE::Geometry::IMatrixSolverBase,TDefaultDelete<UE::Geometry::IMatrixSolverBase>_>
  local_10;
  
  pTVar1 = &this->Solver;
  pIVar2 = pTVar1->Ptr;
  pTVar1->Ptr = (IMatrixSolverBase *)0x0;
  if (pIVar2 != (IMatrixSolverBase *)0x0) {
    (**(code **)*pIVar2)(pIVar2,1);
  }
  if (param_1) {
    if ((this->OpMatrixB).bIsSet == false) {
      return true;
    }
    Core::Private::Function::CheckCallable(*(void **)&(this->OpMatrixB).TypedValue.Factorize);
    pcVar3 = *(code **)&(this->OpMatrixB).TypedValue.Factorize;
    plVar4 = *(longlong **)&(this->OpMatrixB).TypedValue.Factorize.field_0x28;
    plVar6 = (longlong *)&(this->OpMatrixB).TypedValue.Factorize.field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = plVar4;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar3)(&local_18,uVar5);
    TVar7.Ptr = local_18.Ptr;
    if (pTVar1 != &local_18) {
      pIVar2 = pTVar1->Ptr;
      pTVar1->Ptr = local_18.Ptr;
      local_18.Ptr = (IMatrixSolverBase *)0x0;
      TVar7.Ptr = (IMatrixSolverBase *)0x0;
      if (pIVar2 != (IMatrixSolverBase *)0x0) {
        (**(code **)*pIVar2)(pIVar2,1);
        TVar7.Ptr = local_18.Ptr;
      }
    }
  }
  else {
    Core::Private::Function::CheckCallable(*(void **)&(this->OpMatrixA).Factorize);
    plVar4 = *(longlong **)&(this->OpMatrixA).Factorize.field_0x28;
    pcVar3 = *(code **)&(this->OpMatrixA).Factorize;
    plVar6 = (longlong *)&(this->OpMatrixA).Factorize.field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar6 = plVar4;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar3)(&local_10,uVar5);
    TVar7.Ptr = local_10.Ptr;
    if (pTVar1 != &local_10) {
      pIVar2 = pTVar1->Ptr;
      pTVar1->Ptr = local_10.Ptr;
      local_10.Ptr = (IMatrixSolverBase *)0x0;
      TVar7.Ptr = (IMatrixSolverBase *)0x0;
      if (pIVar2 != (IMatrixSolverBase *)0x0) {
        (**(code **)*pIVar2)(pIVar2,1);
        TVar7.Ptr = local_10.Ptr;
      }
    }
  }
  if (TVar7.Ptr != (IMatrixSolverBase *)0x0) {
    (**(code **)*TVar7.Ptr)(TVar7.Ptr,1);
  }
  return pTVar1->Ptr != (IMatrixSolverBase *)0x0;
}

// Solve @ 14c919210

ESolveStatus __thiscall
UE::Geometry::FPowerMethod::Solve
          (FPowerMethod *this,double *param_1,Matrix<double,_1,1,0,_1,1> *param_2,bool param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  ESolveStatus EVar5;
  int iVar6;
  Matrix<double,_1,1,0,_1,1> *pMVar7;
  longlong lVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  assign_op<double,double> local_res8 [8];
  FRandomStream local_88;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_80;
  evaluator<Eigen::CwiseNullaryOp<_void___cdecl_UE::Geometry::RandomDenseMatrix<double,_1,1>(Eigen::Matrix<double,_1,1,0,_1,1>_&,int,int,FRandomStream_const_&)_::_2_::<lambda_1>,Eigen::Matrix<double,_1,1,0,_1,1>_>_>
  local_78;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<_void___cdecl_UE::Geometry::RandomDenseMatrix<double,_1,1>(Eigen::Matrix<double,_1,1,0,_1,1>_&,int,int,FRandomStream_const_&)_::_2_::<lambda_1>,Eigen::Matrix<double,_1,1,0,_1,1>_>_>,Eigen::internal::assign_op<double,double>,0>
  local_68 [2];
  
  cVar4 = (**(code **)(this->_padding_ + 0x38))(this,param_3);
  if (cVar4 == '\0') {
    EVar5 = InvalidParameters;
  }
  else {
    cVar4 = (**(code **)(this->_padding_ + 0x30))(this,param_3);
    if (cVar4 == '\0') {
LAB_14c919411:
      EVar5 = NumericalIssue;
    }
    else {
      if ((this->Parms).InitialSolution.bIsSet == false) {
        iVar6 = Core::Private::Function::
                TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,int___cdecl(void)>
                ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,int___cdecl(void)>
                              *)&(this->OpMatrixA).Rows);
        lVar8 = (longlong)iVar6;
        local_88.InitialSeed = rand();
        local_78.m_functor.InRandomStream = &local_88;
        local_88.Seed = local_88.InitialSeed;
        if (*(longlong *)&param_2->field_0x8 != lVar8) {
          Eigen::DenseStorage<double,-1,-1,1,0>::resize
                    ((DenseStorage<double,_1,_1,1,0> *)param_2,lVar8,lVar8,1);
        }
        local_80 = *(evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)param_2;
        local_68[0].m_dst = &local_80;
        local_68[0].m_src = &local_78;
        local_68[0].m_functor = local_res8;
        local_68[0].m_dstExpr = param_2;
        Eigen::internal::
        dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<double,-1,1,0,-1,1>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<`UE::Geometry::RandomDenseMatrix<double,-1,1>'::__l2::<lambda_1>,Eigen::Matrix<double,-1,1,0,-1,1>_>_>,Eigen::internal::assign_op<double,double>,0>,1,0>
        ::run(local_68);
      }
      else {
        pMVar7 = TOptional<Eigen::Matrix<double,-1,1,0,-1,1>_>::GetValue
                           (&(this->Parms).InitialSolution);
        Eigen::internal::
        call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::internal::assign_op<double,double>_>
                  (param_2,pMVar7,local_res8);
      }
      iVar6 = (this->Parms).MaxIterations;
      this->IterationNum = 0;
      uVar3 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar2 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar1 = __real_3e45798ee2308c3a;
      if (0 < iVar6) {
        do {
          cVar4 = (**(code **)(this->_padding_ + 0x28))(this,param_2,param_3);
          if (cVar4 == '\0') goto LAB_14c919411;
          local_68[0].m_src =
               (evaluator<Eigen::CwiseNullaryOp<_void___cdecl_UE::Geometry::RandomDenseMatrix<double,_1,1>(Eigen::Matrix<double,_1,1,0,_1,1>_&,int,int,FRandomStream_const_&)_::_2_::<lambda_1>,Eigen::Matrix<double,_1,1,0,_1,1>_>_>
                *)param_2;
          if (*(longlong *)&param_2->field_0x8 == 0) {
            uVar10 = 0;
            uVar11 = 0;
          }
          else {
            local_78.m_wrapper =
                 (nullary_wrapper<double,_void___cdecl_UE::Geometry::RandomDenseMatrix<double,_1,1>(Eigen::Matrix<double,_1,1,0,_1,1>_&,int,int,FRandomStream_const_&)_::_2_::<lambda_1>,1,0,0>
                  )param_2->field_0x0;
            local_78._9_7_ = *(undefined7 *)&param_2->field_0x1;
            dVar9 = Eigen::internal::
                    redux_impl<Eigen::internal::scalar_sum_op<double,double>,Eigen::internal::redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<double>,Eigen::Matrix<double,-1,1,0,-1,1>_const_>_>,3,0>
                    ::
                    run<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_>
                              ((redux_evaluator<Eigen::CwiseUnaryOp<Eigen::internal::scalar_abs2_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_>
                                *)&local_78,(scalar_sum_op<double,double> *)local_res8,
                               (CwiseUnaryOp<Eigen::internal::scalar_abs2_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_>
                                *)local_68);
            uVar10 = SUB84(dVar9,0);
            uVar11 = (uint)((ulonglong)dVar9 >> 0x20);
          }
          iVar6 = _finite((double)CONCAT44(uVar11,uVar10));
          if ((iVar6 == 0) ||
             ((double)CONCAT44(uVar11 & uVar3,uVar10 & uVar2) < dVar1 ||
              (double)CONCAT44(uVar11 & uVar3,uVar10 & uVar2) == dVar1)) goto LAB_14c919411;
          (**(code **)(this->_padding_ + 0x20))(this,param_2);
          dVar9 = (double)(**(code **)(this->_padding_ + 0x18))(this,param_2);
          *param_1 = dVar9;
          iVar6 = _finite(dVar9);
          if (iVar6 == 0) goto LAB_14c919411;
          cVar4 = (**(code **)(this->_padding_ + 0x10))(this,*param_1,param_2);
          if (cVar4 != '\0') {
            return Success;
          }
          this->IterationNum = this->IterationNum + 1;
        } while (this->IterationNum < (this->Parms).MaxIterations);
      }
      EVar5 = NotConverged;
    }
  }
  return EVar5;
}

// VerifyUserParameters @ 14c926050

bool __thiscall UE::Geometry::FPowerMethod::VerifyUserParameters(FPowerMethod *this,bool param_1)

{
  longlong lVar1;
  int iVar2;
  TFunction<int___cdecl(void)> *this_00;
  
  if (*(longlong *)&(this->OpMatrixA).Product == 0) {
    return false;
  }
  this_00 = &(this->OpMatrixA).Rows;
  if (*(longlong *)&this_00->field_0x0 == 0) {
    return false;
  }
  if ((this->OpMatrixB).bIsSet == false) {
    if (param_1) goto LAB_14c926096;
    lVar1 = *(longlong *)&(this->OpMatrixA).Factorize;
  }
  else {
    if (*(longlong *)&(this->OpMatrixB).TypedValue.Product == 0) {
      return false;
    }
    if (!param_1) goto LAB_14c926096;
    lVar1 = *(longlong *)&(this->OpMatrixB).TypedValue.Factorize;
  }
  if (lVar1 == 0) {
    return false;
  }
LAB_14c926096:
  if (((this->Parms).MaxIterations < 2) ||
     ((this->Parms).Tolerance <= 0.0 && (this->Parms).Tolerance != 0.0)) {
    return false;
  }
  if (((this->Parms).InitialSolution.bIsSet != false) &&
     (iVar2 = Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,int___cdecl(void)>::
              operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,int___cdecl(void)>
                          *)this_00),
     *(longlong *)&(this->Parms).InitialSolution.TypedValue.field_0x8 != (longlong)iVar2)) {
    return false;
  }
  return true;
}

