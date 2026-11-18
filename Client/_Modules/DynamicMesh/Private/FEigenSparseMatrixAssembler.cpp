// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 4

// FEigenSparseMatrixAssembler @ 14c7b28e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FEigenSparseMatrixAssembler * __thiscall
UE::Geometry::FEigenSparseMatrixAssembler::FEigenSparseMatrixAssembler
          (FEigenSparseMatrixAssembler *this,int param_1,int param_2)

{
  TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
  *pTVar1;
  longlong lVar2;
  longlong lVar3;
  SparseMatrix<double,0,int> *pSVar4;
  SparseMatrix<double,0,int> *pSVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  pSVar5 = (SparseMatrix<double,0,int> *)0x0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_V<lambda_32_>___TSparseMatrixAssembler_N_Solvers_UE___00_0A__Function_Private_Core_UE__6B_
  ;
  this->_padding_ = (longlong)this;
  if (&this->_padding_ != (longlong *)0x0) {
    this->_padding_ =
         (longlong)
         Core::Private::Function::
         TFunctionRefCaller<UE::Solvers::TSparseMatrixAssembler<double>::<lambda_32_>,void,UE::Solvers::TSparseMatrixAssembler<double>::FTupleData_const_*,int>
         ::Call;
  }
  pTVar1 = &this->Matrix;
  (this->EntryTriplets)._Mypair._Myval2._Myfirst = (Triplet<double,int> *)0x0;
  (this->EntryTriplets)._Mypair._Myval2._Mylast = (Triplet<double,int> *)0x0;
  (this->EntryTriplets)._Mypair._Myval2._Myend = (Triplet<double,int> *)0x0;
  pTVar1->Ptr = (SparseMatrix<double,0,int> *)0x0;
  pSVar4 = ::operator_new(0x48);
  if (pSVar4 != (SparseMatrix<double,0,int> *)0x0) {
    pSVar5 = Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>
                       (pSVar4,(longlong)param_1,(longlong)param_2);
  }
  if (pTVar1 == (TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
                 *)local_78) {
    if (pSVar5 == (SparseMatrix<double,0,int> *)0x0) goto LAB_14c7b2a00;
    FMemory_Free(pSVar5->m_outerIndex);
    FMemory_Free(pSVar5->m_innerNonZeros);
    operator_delete__((pSVar5->m_data).m_values);
    operator_delete__((pSVar5->m_data).m_indices);
  }
  else {
    pSVar4 = pTVar1->Ptr;
    pTVar1->Ptr = pSVar5;
    if (pSVar4 == (SparseMatrix<double,0,int> *)0x0) goto LAB_14c7b2a00;
    FMemory_Free(pSVar4->m_outerIndex);
    FMemory_Free(pSVar4->m_innerNonZeros);
    operator_delete__((pSVar4->m_data).m_values);
    operator_delete__((pSVar4->m_data).m_indices);
    pSVar5 = pSVar4;
  }
  ::operator_delete(pSVar5,0x48);
LAB_14c7b2a00:
  local_68 = this->_padding_;
  lVar3 = this->_padding_;
  local_58 = this->_padding_;
  lStack_50 = this->_padding_;
  lVar2 = this->_padding_;
  plStack_40 = (longlong *)this->_padding_;
  this->_padding_ =
       (longlong)
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FEigenSparseMatrixAssembler::FEigenSparseMatrixAssembler'::__l2::<lambda_1>,void,int>
       ::Call;
  this->_padding_ = lStack_60;
  *(undefined4 *)&this->_padding_ = 0x528caf98;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = (longlong)this;
  *(undefined4 *)&this->_padding_ = (undefined4)local_48;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_48._4_4_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  local_48 = lVar2;
  lStack_60 = lVar3;
  if (local_68 != 0) {
    plVar6 = &local_58;
    if (plStack_40 != (longlong *)0x0) {
      plVar6 = plStack_40;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  local_68 = this->_padding_;
  lVar3 = this->_padding_;
  local_58 = this->_padding_;
  lStack_50 = this->_padding_;
  lVar2 = this->_padding_;
  plStack_40 = (longlong *)this->_padding_;
  this->_padding_ =
       (longlong)
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FEigenSparseMatrixAssembler::FEigenSparseMatrixAssembler'::__l2::<lambda_2>,void,int,int,double>
       ::Call;
  this->_padding_ = lStack_60;
  *(undefined4 *)&this->_padding_ = 0x528cafb8;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = (longlong)this;
  *(undefined4 *)&this->_padding_ = (undefined4)local_48;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_48._4_4_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  local_48 = lVar2;
  lStack_60 = lVar3;
  if (local_68 != 0) {
    plVar6 = &local_58;
    if (plStack_40 != (longlong *)0x0) {
      plVar6 = plStack_40;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  local_68 = this->_padding_;
  lVar3 = this->_padding_;
  local_58 = this->_padding_;
  lStack_50 = this->_padding_;
  lVar2 = this->_padding_;
  plStack_40 = (longlong *)this->_padding_;
  this->_padding_ =
       (longlong)
       Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FEigenSparseMatrixAssembler::FEigenSparseMatrixAssembler'::__l2::<lambda_3>,void,UE::Solvers::TSparseMatrixAssembler<double>::FTupleData_const_*,int>
       ::Call;
  this->_padding_ = lStack_60;
  *(undefined4 *)&this->_padding_ = 0x528cafd8;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = (longlong)this;
  *(undefined4 *)&this->_padding_ = (undefined4)local_48;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = local_48._4_4_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  local_48 = lVar2;
  if (local_68 != 0) {
    plVar6 = &local_58;
    if (plStack_40 != (longlong *)0x0) {
      plVar6 = plStack_40;
    }
    lStack_60 = lVar3;
    (**(code **)(*plVar6 + 0x10))();
  }
  return this;
}

// operator() @ 14c7cb2d0

void __thiscall
`UE::Geometry::FEigenSparseMatrixAssembler::FEigenSparseMatrixAssembler'::__l2::<lambda_2>::
operator()(void *this,int param_1,int param_2,double param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  Triplet<double,int> *pTVar3;
  Triplet<double,int> *_Dst;
  ulonglong uVar4;
  Triplet<double,int> *_Dst_00;
  Triplet<double,int> *_Src;
  longlong lVar5;
  vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_> *this_00;
  size_t _Size;
  ulonglong uVar6;
  
  lVar2 = *(longlong *)this;
  this_00 = (vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_> *)
            (lVar2 + 0x98);
  _Src = *(Triplet<double,int> **)(lVar2 + 0xa0);
  if (_Src != *(Triplet<double,int> **)(lVar2 + 0xa8)) {
    _Src->m_row = param_1;
    _Src->m_col = param_2;
    _Src->m_value = param_3;
    *(longlong *)(lVar2 + 0xa0) = *(longlong *)(lVar2 + 0xa0) + 0x10;
    return;
  }
  pTVar3 = (this_00->_Mypair)._Myval2._Myfirst;
  lVar5 = (longlong)_Src - (longlong)pTVar3 >> 4;
  if (lVar5 == 0xfffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::_Xlength()
    ;
  }
  uVar4 = (longlong)*(Triplet<double,int> **)(lVar2 + 0xa8) - (longlong)pTVar3 >> 4;
  uVar1 = lVar5 + 1;
  if (0xfffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar6 = 0xfffffffffffffff;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar6 = uVar1;
    if (uVar1 <= uVar4) {
      uVar6 = uVar4;
    }
    if (0xfffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::_Throw_bad_array_new_length();
    }
  }
  _Dst = std::_Allocate<16,std::_Default_allocate_traits>(uVar6 << 4);
  _Dst[lVar5].m_row = param_1;
  _Dst[lVar5].m_col = param_2;
  _Dst[lVar5].m_value = param_3;
  pTVar3 = (this_00->_Mypair)._Myval2._Myfirst;
  if (_Src == *(Triplet<double,int> **)(lVar2 + 0xa0)) {
    _Size = (longlong)*(Triplet<double,int> **)(lVar2 + 0xa0) - (longlong)pTVar3;
    _Dst_00 = _Dst;
    _Src = pTVar3;
  }
  else {
    memmove(_Dst,pTVar3,(longlong)_Src - (longlong)pTVar3);
    _Size = *(longlong *)(lVar2 + 0xa0) - (longlong)_Src;
    _Dst_00 = _Dst + lVar5 + 1;
  }
  memmove(_Dst_00,_Src,_Size);
  std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
  _Change_array(this_00,_Dst,uVar1,uVar6);
  return;
}

// ExtractResult @ 14c802de0

void __thiscall
UE::Geometry::FEigenSparseMatrixAssembler::ExtractResult
          (FEigenSparseMatrixAssembler *this,SparseMatrix<double,0,int> *param_1)

{
  SparseMatrix<double,0,int> *pSVar1;
  int *piVar2;
  long64 lVar3;
  double *pdVar4;
  double *pdVar5;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_res8;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_res10;
  
  local_res8 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                )(this->EntryTriplets)._Mypair._Myval2._Mylast;
  local_res10 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                 )(this->EntryTriplets)._Mypair._Myval2._Myfirst;
  Eigen::internal::
  set_from_triplets<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>,Eigen::SparseMatrix<double,0,int>,Eigen::internal::scalar_sum_op<double,double>_>
            (&local_res10,&local_res8,(this->Matrix).Ptr,
             (scalar_sum_op<double,double>)local_res8._0_1_);
  Eigen::SparseMatrix<double,0,int>::makeCompressed((this->Matrix).Ptr);
  pSVar1 = (this->Matrix).Ptr;
  piVar2 = param_1->m_outerIndex;
  param_1->m_outerIndex = pSVar1->m_outerIndex;
  pSVar1->m_outerIndex = piVar2;
  lVar3 = param_1->m_innerSize;
  param_1->m_innerSize = pSVar1->m_innerSize;
  pSVar1->m_innerSize = lVar3;
  lVar3 = param_1->m_outerSize;
  param_1->m_outerSize = pSVar1->m_outerSize;
  pSVar1->m_outerSize = lVar3;
  piVar2 = param_1->m_innerNonZeros;
  param_1->m_innerNonZeros = pSVar1->m_innerNonZeros;
  pdVar4 = (pSVar1->m_data).m_values;
  pSVar1->m_innerNonZeros = piVar2;
  pdVar5 = (param_1->m_data).m_values;
  (param_1->m_data).m_values = pdVar4;
  (pSVar1->m_data).m_values = pdVar5;
  piVar2 = (param_1->m_data).m_indices;
  (param_1->m_data).m_indices = (pSVar1->m_data).m_indices;
  (pSVar1->m_data).m_indices = piVar2;
  lVar3 = (param_1->m_data).m_size;
  (param_1->m_data).m_size = (pSVar1->m_data).m_size;
  (pSVar1->m_data).m_size = lVar3;
  lVar3 = (param_1->m_data).m_allocatedSize;
  (param_1->m_data).m_allocatedSize = (pSVar1->m_data).m_allocatedSize;
  (pSVar1->m_data).m_allocatedSize = lVar3;
  return;
}

// ~FEigenSparseMatrixAssembler @ 14c89a1f0

void __thiscall
UE::Geometry::FEigenSparseMatrixAssembler::~FEigenSparseMatrixAssembler
          (FEigenSparseMatrixAssembler *this)

{
  SparseMatrix<double,0,int> *pSVar1;
  
  std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
  ~vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>
            (&this->EntryTriplets);
  pSVar1 = (this->Matrix).Ptr;
  if (pSVar1 != (SparseMatrix<double,0,int> *)0x0) {
    FMemory_Free(pSVar1->m_outerIndex);
    FMemory_Free(pSVar1->m_innerNonZeros);
    operator_delete__((pSVar1->m_data).m_values);
    operator_delete__((pSVar1->m_data).m_indices);
    ::operator_delete(pSVar1,0x48);
  }
  Solvers::TSparseMatrixAssembler<double>::~TSparseMatrixAssembler<double>
            ((TSparseMatrixAssembler<double> *)this);
  return;
}

