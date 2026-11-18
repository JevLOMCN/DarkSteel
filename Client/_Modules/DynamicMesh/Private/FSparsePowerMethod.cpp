// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 4

// FSparsePowerMethod @ 14c8987f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSparsePowerMethod * __thiscall
UE::Geometry::FSparsePowerMethod::FSparsePowerMethod
          (FSparsePowerMethod *this,SparseMatrix<double,0,int> *param_1,FMatrixHints *param_2,
          Parameters *param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double *_Dst;
  longlong *plVar5;
  undefined1 uVar6;
  size_t _Size;
  undefined1 auStack_98 [45];
  undefined2 local_6b;
  undefined1 local_69;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  *(undefined ***)this = &___7FPowerMethod_Geometry_UE__6B_;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  this->field_0x130 = 0;
  *(undefined8 *)&this->field_0x140 = 0;
  *(double *)&this->field_0x148 = param_3->Tolerance;
  iVar2 = param_3->MaxIterations;
  this->field_0x168 = 0;
  *(int *)&this->field_0x150 = iVar2;
  bVar1 = (param_3->InitialSolution).bIsSet;
  this->field_0x168 = bVar1;
  if (bVar1 != false) {
    _Dst = Eigen::internal::conditional_aligned_new_auto<double,1>
                     (*(ulong64 *)&(param_3->InitialSolution).TypedValue.field_0x8);
    *(double **)&this->field_0x158 = _Dst;
    *(undefined8 *)&this->field_0x160 =
         *(undefined8 *)&(param_3->InitialSolution).TypedValue.field_0x8;
    _Size = *(longlong *)&(param_3->InitialSolution).TypedValue.field_0x8 << 3;
    if (_Size != 0) {
      memcpy(_Dst,*(void **)&(param_3->InitialSolution).TypedValue,_Size);
    }
  }
  *(undefined8 *)&this->field_0x170 = 0;
  *(undefined ***)this = &___7FSparsePowerMethod_Geometry_UE__6B_;
  *(undefined4 *)&this->field_0x178 = 0xffffffff;
  bVar1 = param_2->bIsPSD;
  if ((param_2->bIsSymmetric == false) && (bVar1 == false)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  local_68 = *(longlong *)&this->field_0x10;
  uVar4 = *(undefined8 *)&this->field_0x18;
  local_58 = *(longlong *)&this->field_0x20;
  uStack_50 = *(undefined8 *)&this->field_0x28;
  uVar3 = *(undefined8 *)&this->field_0x30;
  plStack_40 = *(longlong **)&this->field_0x38;
  *(code **)&this->field_0x10 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FSparsePowerMethod::CreateSparseMatrixOperator'::__l2::<lambda_1>,void,Eigen::Matrix<double,-1,1,0,-1,1>_const_&,Eigen::Matrix<double,-1,1,0,-1,1>_&>
       ::Call;
  *(undefined8 *)&this->field_0x18 = uStack_60;
  *(undefined4 *)&this->field_0x20 = 0x528d0108;
  *(undefined4 *)&this->field_0x24 = 1;
  *(SparseMatrix<double,0,int> **)&this->field_0x28 = param_1;
  *(undefined4 *)&this->field_0x30 = (undefined4)local_48;
  *(undefined4 *)&this->field_0x34 = local_48._4_4_;
  *(undefined4 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x3c = 0;
  local_48 = uVar3;
  uStack_60 = uVar4;
  if (local_68 != 0) {
    plVar5 = &local_58;
    if (plStack_40 != (longlong *)0x0) {
      plVar5 = plStack_40;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  local_68 = *(longlong *)&this->field_0x40;
  uVar4 = *(undefined8 *)&this->field_0x48;
  local_58 = *(longlong *)&this->field_0x50;
  uStack_50 = *(undefined8 *)&this->field_0x58;
  uVar3 = *(undefined8 *)&this->field_0x60;
  plStack_40 = *(longlong **)&this->field_0x68;
  local_48 = (ulonglong)CONCAT12(local_69,local_6b) << 0x28;
  *(code **)&this->field_0x40 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FSparsePowerMethod::CreateSparseMatrixOperator'::__l2::<lambda_2>,TUniquePtr<UE::Geometry::IMatrixSolverBase,TDefaultDelete<UE::Geometry::IMatrixSolverBase>_>_>
       ::Call;
  *(undefined8 *)&this->field_0x48 = uStack_60;
  local_48 = CONCAT44(local_48._4_4_,-(uint)(bVar1 != false)) & 0xffffffff00000004;
  local_48._0_5_ = CONCAT14(uVar6,(undefined4)local_48);
  *(undefined4 *)&this->field_0x50 = 0x528d0128;
  *(undefined4 *)&this->field_0x54 = 1;
  *(SparseMatrix<double,0,int> **)&this->field_0x58 = param_1;
  *(undefined4 *)&this->field_0x60 = (undefined4)local_48;
  *(undefined4 *)&this->field_0x64 = local_48._4_4_;
  *(undefined4 *)&this->field_0x68 = 0;
  *(undefined4 *)&this->field_0x6c = 0;
  local_48 = uVar3;
  uStack_60 = uVar4;
  if (local_68 != 0) {
    plVar5 = &local_58;
    if (plStack_40 != (longlong *)0x0) {
      plVar5 = plStack_40;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  local_68 = *(longlong *)&this->field_0x70;
  uVar4 = *(undefined8 *)&this->field_0x78;
  local_58 = *(longlong *)&this->field_0x80;
  uStack_50 = *(undefined8 *)&this->field_0x88;
  uVar3 = *(undefined8 *)&this->field_0x90;
  plStack_40 = *(longlong **)&this->field_0x98;
  *(code **)&this->field_0x70 =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FSparsePowerMethod::CreateSparseMatrixOperator'::__l2::<lambda_3>,int>
       ::Call;
  *(undefined8 *)&this->field_0x78 = uStack_60;
  *(undefined4 *)&this->field_0x80 = 0x528d0148;
  *(undefined4 *)&this->field_0x84 = 1;
  *(SparseMatrix<double,0,int> **)&this->field_0x88 = param_1;
  *(undefined4 *)&this->field_0x90 = (undefined4)local_48;
  *(undefined4 *)&this->field_0x94 = local_48._4_4_;
  *(undefined4 *)&this->field_0x98 = 0;
  *(undefined4 *)&this->field_0x9c = 0;
  local_48 = uVar3;
  if (local_68 != 0) {
    plVar5 = &local_58;
    if (plStack_40 != (longlong *)0x0) {
      plVar5 = plStack_40;
    }
    uStack_60 = uVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  return this;
}

// ~FSparsePowerMethod @ 14c89a760

void __thiscall UE::Geometry::FSparsePowerMethod::~FSparsePowerMethod(FSparsePowerMethod *this)

{
  *(undefined ***)this = &___7FSparsePowerMethod_Geometry_UE__6B_;
  FPowerMethod::~FPowerMethod((FPowerMethod *)this);
  return;
}

// operator() @ 14c89fa60

void __thiscall
`UE::Geometry::FSparsePowerMethod::CreateSparseMatrixOperator'::__l2::<lambda_1>::operator()
          (void *this,Matrix<double,_1,1,0,_1,1> *param_1,Matrix<double,_1,1,0,_1,1> *param_2)

{
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *peVar1;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *peVar2;
  SparseMatrix<double,0,int> *pSVar3;
  longlong lVar4;
  longlong lVar5;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> eVar6;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *peVar7;
  longlong lVar8;
  assign_op<double,double> local_res8 [8];
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_res10;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_res18 [2];
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>,0>
  local_48;
  
  pSVar3 = *(SparseMatrix<double,0,int> **)this;
  local_48.m_dst = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)0x0;
  local_48.m_src = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)0x0;
  lVar4 = pSVar3->m_innerSize;
  if (lVar4 != 0) {
    Eigen::DenseStorage<double,-1,-1,1,0>::resize
              ((DenseStorage<double,_1,_1,1,0> *)&local_48,lVar4,lVar4,1);
  }
  peVar1 = local_48.m_src;
  peVar7 = local_48.m_dst;
  local_res10 = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)0x0;
  std::fill_n<double_*,__int64,double>
            ((double *)local_48.m_dst,(long64)local_48.m_src,(double *)&local_res10);
  local_res10 = __real_3ff0000000000000;
  Eigen::internal::
  generic_product_impl_base<Eigen::SparseMatrix<double,0,int>,Eigen::Matrix<double,-1,1,0,-1,1>,Eigen::internal::generic_product_impl<Eigen::SparseMatrix<double,0,int>,Eigen::Matrix<double,-1,1,0,-1,1>,Eigen::SparseShape,Eigen::DenseShape,7>_>
  ::scaleAndAddTo<Eigen::Matrix<double,_1,1,0,_1,1>_>
            ((Matrix<double,_1,1,0,_1,1> *)&local_48,pSVar3,param_1,(double *)&local_res10);
  local_res10 = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)peVar7;
  if (*(evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> **)&param_2->field_0x8 != peVar1) {
    Eigen::DenseStorage<double,-1,-1,1,0>::resize
              ((DenseStorage<double,_1,_1,1,0> *)param_2,(long64)peVar1,(long64)peVar1,1);
  }
  local_res18[0] = *(evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)param_2;
  local_48.m_dst = local_res18;
  local_48.m_src = &local_res10;
  local_48.m_functor = local_res8;
  lVar4 = *(longlong *)&param_2->field_0x8;
  lVar8 = 0;
  lVar5 = (lVar4 / 2) * 2;
  if (0 < lVar5) {
    do {
      peVar1 = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)((longlong)local_res10 + lVar8 * 8);
      eVar6 = peVar1[1];
      peVar2 = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)
               ((longlong)local_res18[0] + lVar8 * 8);
      *peVar2 = *peVar1;
      peVar2[1] = eVar6;
      lVar8 = lVar8 + 2;
    } while (lVar8 < lVar5);
  }
  local_48.m_dstExpr = param_2;
  Eigen::internal::unaligned_dense_assignment_loop<0>::
  run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>,0>_>
            (&local_48,lVar5,lVar4);
  FMemory_Free(peVar7);
  return;
}

// CreateSparseMatrixOperator @ 14c8d6800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Geometry::FSparsePowerMethod::CreateSparseMatrixOperator
          (SparseMatrix<double,0,int> *param_1,FMatrixHints *param_2,MatrixOperator *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 uVar5;
  undefined1 auStack_88 [45];
  undefined2 local_5b;
  undefined1 local_59;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar1 = param_2->bIsPSD;
  if ((param_2->bIsSymmetric == false) && (bVar1 == false)) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  local_58 = *(longlong *)&param_3->Product;
  uVar3 = *(undefined8 *)&(param_3->Product).field_0x8;
  local_48 = *(longlong *)&(param_3->Product).field_0x10;
  uStack_40 = *(undefined8 *)&(param_3->Product).field_0x18;
  uVar2 = *(undefined8 *)&(param_3->Product).field_0x20;
  plStack_30 = *(longlong **)&(param_3->Product).field_0x28;
  *(code **)&param_3->Product =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FSparsePowerMethod::CreateSparseMatrixOperator'::__l2::<lambda_1>,void,Eigen::Matrix<double,-1,1,0,-1,1>_const_&,Eigen::Matrix<double,-1,1,0,-1,1>_&>
       ::Call;
  *(undefined8 *)&(param_3->Product).field_0x8 = uStack_50;
  *(undefined4 *)&(param_3->Product).field_0x10 = 0x528d0108;
  *(undefined4 *)&(param_3->Product).field_0x14 = 1;
  *(SparseMatrix<double,0,int> **)&(param_3->Product).field_0x18 = param_1;
  *(undefined4 *)&(param_3->Product).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(param_3->Product).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(param_3->Product).field_0x28 = 0;
  *(undefined4 *)&(param_3->Product).field_0x2c = 0;
  local_38 = uVar2;
  uStack_50 = uVar3;
  if (local_58 != 0) {
    plVar4 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar4 = plStack_30;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  local_58 = *(longlong *)&param_3->Factorize;
  uVar3 = *(undefined8 *)&(param_3->Factorize).field_0x8;
  local_48 = *(longlong *)&(param_3->Factorize).field_0x10;
  uStack_40 = *(undefined8 *)&(param_3->Factorize).field_0x18;
  uVar2 = *(undefined8 *)&(param_3->Factorize).field_0x20;
  plStack_30 = *(longlong **)&(param_3->Factorize).field_0x28;
  local_38 = (ulonglong)CONCAT12(local_59,local_5b) << 0x28;
  *(code **)&param_3->Factorize =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FSparsePowerMethod::CreateSparseMatrixOperator'::__l2::<lambda_2>,TUniquePtr<UE::Geometry::IMatrixSolverBase,TDefaultDelete<UE::Geometry::IMatrixSolverBase>_>_>
       ::Call;
  *(undefined8 *)&(param_3->Factorize).field_0x8 = uStack_50;
  local_38 = CONCAT44(local_38._4_4_,-(uint)(bVar1 != false)) & 0xffffffff00000004;
  local_38._0_5_ = CONCAT14(uVar5,(undefined4)local_38);
  *(undefined4 *)&(param_3->Factorize).field_0x10 = 0x528d0128;
  *(undefined4 *)&(param_3->Factorize).field_0x14 = 1;
  *(SparseMatrix<double,0,int> **)&(param_3->Factorize).field_0x18 = param_1;
  *(undefined4 *)&(param_3->Factorize).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(param_3->Factorize).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(param_3->Factorize).field_0x28 = 0;
  *(undefined4 *)&(param_3->Factorize).field_0x2c = 0;
  local_38 = uVar2;
  uStack_50 = uVar3;
  if (local_58 != 0) {
    plVar4 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar4 = plStack_30;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  local_58 = *(longlong *)&param_3->Rows;
  uVar3 = *(undefined8 *)&(param_3->Rows).field_0x8;
  local_48 = *(longlong *)&(param_3->Rows).field_0x10;
  uStack_40 = *(undefined8 *)&(param_3->Rows).field_0x18;
  uVar2 = *(undefined8 *)&(param_3->Rows).field_0x20;
  plStack_30 = *(longlong **)&(param_3->Rows).field_0x28;
  *(code **)&param_3->Rows =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FSparsePowerMethod::CreateSparseMatrixOperator'::__l2::<lambda_3>,int>
       ::Call;
  *(undefined8 *)&(param_3->Rows).field_0x8 = uStack_50;
  *(undefined4 *)&(param_3->Rows).field_0x10 = 0x528d0148;
  *(undefined4 *)&(param_3->Rows).field_0x14 = 1;
  *(SparseMatrix<double,0,int> **)&(param_3->Rows).field_0x18 = param_1;
  *(undefined4 *)&(param_3->Rows).field_0x20 = (undefined4)local_38;
  *(undefined4 *)&(param_3->Rows).field_0x24 = local_38._4_4_;
  *(undefined4 *)&(param_3->Rows).field_0x28 = 0;
  *(undefined4 *)&(param_3->Rows).field_0x2c = 0;
  local_38 = uVar2;
  if (local_58 != 0) {
    plVar4 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar4 = plStack_30;
    }
    uStack_50 = uVar3;
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

