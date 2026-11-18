// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 7

// operator() @ 14c8a5cc0

void __thiscall
`UE::Geometry::FSpectralConformalMeshUVSolver::SolveParameterization'::__l2::<lambda_1>::operator()
          (void *this,Matrix<double,_1,1,0,_1,1> *param_1,Matrix<double,_1,1,0,_1,1> *param_2)

{
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *peVar1;
  longlong lVar2;
  longlong lVar3;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> eVar4;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *peVar5;
  longlong lVar6;
  assign_op<double,double> local_res8 [8];
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_res10;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_res18;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>,0>
  local_78;
  void *local_58;
  undefined8 uStack_50;
  CwiseBinaryOp<Eigen::internal::scalar_difference_op<double,double>,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::Matrix<double,_1,1,0,_1,1>,0>_const_,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::Matrix<double,_1,1,0,_1,1>,0>_const_>
  local_48;
  
  local_78.m_src = *(evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> **)((longlong)this + 8);
  local_78.m_dst =
       (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)((ulonglong)local_58 & 0xffffffffffffff00);
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_78.m_functor = (assign_op<double,double> *)param_1;
  Eigen::internal::
  call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Product<Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_const_>,Eigen::Matrix<double,_1,1,0,_1,1>,0>,Eigen::internal::assign_op<double,double>_>
            ((Matrix<double,_1,1,0,_1,1> *)&local_58,
             (Product<Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_const_>,Eigen::Matrix<double,_1,1,0,_1,1>,0>
              *)&local_78,local_res8);
  local_48.m_lhs.m_lhs = *(SparseMatrix<double,0,int> **)this;
  local_48.m_rhs.m_lhs = *(SparseMatrix<double,0,int> **)((longlong)this + 8);
  local_48.m_rhs.m_rhs = (Matrix<double,_1,1,0,_1,1> *)&local_58;
  local_78.m_dst = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)0x0;
  local_78.m_src = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)0x0;
  local_48.m_lhs.m_rhs = param_1;
  Eigen::internal::
  call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<double,double>,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::Matrix<double,_1,1,0,_1,1>,0>_const_,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::Matrix<double,_1,1,0,_1,1>,0>_const_>,Eigen::internal::assign_op<double,double>_>
            ((Matrix<double,_1,1,0,_1,1> *)&local_78,&local_48,local_res8);
  peVar5 = local_78.m_dst;
  local_res10 = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)local_78.m_dst;
  if (*(evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> **)&param_2->field_0x8 != local_78.m_src) {
    Eigen::DenseStorage<double,-1,-1,1,0>::resize
              ((DenseStorage<double,_1,_1,1,0> *)param_2,(long64)local_78.m_src,
               (long64)local_78.m_src,1);
  }
  local_res18 = *(evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)param_2;
  local_78.m_dst = &local_res18;
  local_78.m_src = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)(local_res8 + 8);
  local_78.m_functor = local_res8;
  lVar2 = *(longlong *)&param_2->field_0x8;
  lVar6 = 0;
  lVar3 = (lVar2 / 2) * 2;
  if (0 < lVar3) {
    do {
      eVar4 = ((evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)((longlong)local_res10 + lVar6 * 8))
              [1];
      peVar1 = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)((longlong)local_res18 + lVar6 * 8);
      *peVar1 = *(evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)
                 ((longlong)local_res10 + lVar6 * 8);
      peVar1[1] = eVar4;
      lVar6 = lVar6 + 2;
    } while (lVar6 < lVar3);
  }
  local_78.m_dstExpr = param_2;
  Eigen::internal::unaligned_dense_assignment_loop<0>::
  run<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>,0>_>
            (&local_78,lVar3,lVar2);
  FMemory_Free(peVar5);
  FMemory_Free(local_58);
  return;
}

// ConstructSystemMatrices @ 14c8d24b0

void __thiscall
UE::Geometry::FSpectralConformalMeshUVSolver::ConstructSystemMatrices
          (FSpectralConformalMeshUVSolver *this,SparseMatrix<double,0,int> *param_1,
          SparseMatrix<double,0,int> *param_2,SparseMatrix<double,0,int> *param_3)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar6;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var7;
  SparseMatrix<double,0,int> *pSVar8;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Dst;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var9;
  byte bVar10;
  ulonglong uVar11;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var12;
  ulonglong uVar13;
  longlong lVar14;
  ulong64 uVar15;
  size_t sVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  scalar_sum_op<double,double> local_res8;
  undefined1 local_268 [8];
  vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_> local_260;
  undefined1 local_248 [4];
  int local_244;
  TBitArray<FDefaultBitArrayAllocator> *local_240;
  ulong64 local_238;
  longlong local_230;
  int local_228;
  int local_220;
  uint uStack_21c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_218;
  uint local_210;
  uint uStack_20c;
  uint uStack_208;
  undefined4 uStack_204;
  longlong *local_200;
  undefined1 auStack_1f8 [20];
  uint uStack_1e4;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1c0;
  undefined8 uStack_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_198;
  int local_178;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_170;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_168;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_160;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_158;
  longlong *local_150;
  int iStack_148;
  uint uStack_144;
  longlong *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  undefined4 uStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  SparseMatrix<double,0,int> local_120;
  SparseMatrix<double,0,int> local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_90;
  undefined4 local_54;
  
  iVar20 = (int)this->_padding_;
  local_244 = iVar20;
  FConformalMeshUVSolver::ConstructConformalEnergyMatrix
            ((FConformalMeshUVSolver *)this,param_1,this->bPreserveIrregularity,
             __real_3e45798ee0000000,(SparseMatrix<double,0,int> *)0x0,
             (SparseMatrix<double,0,int> *)0x0);
  Eigen::SparseMatrix<double,0,int>::makeCompressed(param_1);
  local_228 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  local_260._Mypair._Myval2._Myfirst = (Triplet<double,int> *)0x0;
  local_260._Mypair._Myval2._Mylast = (Triplet<double,int> *)0x0;
  local_260._Mypair._Myval2._Myend = (Triplet<double,int> *)0x0;
  local_238 = (ulong64)(local_228 * 2);
  std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::reserve
            (&local_260,local_238);
  plVar17 = &this->_padding_;
  local_198._padding_._0_4_ = 0;
  plVar18 = &this->_padding_;
  local_198._padding_._4_4_ = 1;
  local_198.UnvisitedBitMask = 0xffffffff;
  local_198.CurrentBitIndex = 0;
  local_198.BaseBitIndex = 0;
  local_1d0 = plVar17;
  local_198.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar18;
  if ((int)this->_padding_ != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_198);
  }
  auStack_1f8._0_8_ = CONCAT44(local_198._padding_._4_4_,(undefined4)local_198._padding_);
  TStack_1c0.CurrentBitIndex = local_198.CurrentBitIndex;
  TStack_1c0.UnvisitedBitMask = local_198.UnvisitedBitMask;
  TStack_1c0._28_4_ = local_198._28_4_;
  TStack_1c0.BaseBitIndex = local_198.BaseBitIndex;
  auStack_1f8._8_8_ = local_198.Array;
  local_1d8 = CONCAT44(local_1d8._4_4_,
                       (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4));
  uStack_1e0 = TStack_1c0._24_8_;
  auStack_1f8._16_4_ = local_198.UnvisitedBitMask;
  uStack_1e4 = local_198.CurrentBitIndex;
  TStack_1c0.Array = local_198.Array;
  uStack_1a0 = local_1d8;
  local_200 = plVar17;
  local_1c8 = plVar17;
  TStack_1c0._padding_ = auStack_1f8._0_8_;
  pTVar6 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
           TConstSetBitIterator<FDefaultBitArrayAllocator>
                     (&local_90,(TBitArray<FDefaultBitArrayAllocator> *)plVar18,(int)this->_padding_
                     );
  auStack_1f8._0_8_ = pTVar6->_padding_;
  local_240 = pTVar6->Array;
  auVar26._0_4_ = pTVar6->UnvisitedBitMask;
  auVar26._4_4_ = pTVar6->CurrentBitIndex;
  auVar26._8_4_ = pTVar6->BaseBitIndex;
  auVar26._12_4_ = *(undefined4 *)&pTVar6->field_0x1c;
  local_230 = CONCAT44(local_230._4_4_,auVar26._4_4_);
  iVar19 = auVar26._4_4_;
  auStack_1f8._8_8_ = local_240;
  unique0x10000d39 = auVar26;
  while( true ) {
    plVar18 = local_1c8;
    if ((int)local_1c8[1] - *(int *)((longlong)local_1c8 + 0x34) != (int)uStack_1a0) {
      local_268[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,UE::Solvers::FUVConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_268);
    }
    _Var12 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
             local_260._Mypair._Myval2._Mylast;
    if (((TStack_1c0.CurrentBitIndex == iVar19) && (TStack_1c0.Array == local_240)) &&
       (plVar18 == plVar17)) break;
    iVar19 = *(int *)((longlong)TStack_1c0.CurrentBitIndex * 0x38 + 0xc + *plVar18);
    if (local_260._Mypair._Myval2._Mylast == local_260._Mypair._Myval2._Myend) {
      lVar14 = (longlong)local_260._Mypair._Myval2._Mylast -
               (longlong)local_260._Mypair._Myval2._Myfirst >> 4;
      if (lVar14 == 0xfffffffffffffff) goto LAB_14c8d2f1a;
      uVar13 = lVar14 + 1;
      uVar11 = (longlong)local_260._Mypair._Myval2._Myend -
               (longlong)local_260._Mypair._Myval2._Myfirst >> 4;
      if (0xfffffffffffffff - (uVar11 >> 1) < uVar11) {
        uVar24 = 0xfffffffffffffff;
      }
      else {
        uVar11 = (uVar11 >> 1) + uVar11;
        uVar24 = uVar13;
        if (uVar13 <= uVar11) {
          uVar24 = uVar11;
        }
        if (0xfffffffffffffff < uVar24) goto LAB_14c8d2f14;
      }
      _Var7 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )std::_Allocate<16,std::_Default_allocate_traits>(uVar24 * 0x10);
      ((Triplet<double,int> *)((longlong)_Var7 + lVar14 * 0x10))->m_row = iVar19;
      ((int *)((longlong)_Var7 + 4))[lVar14 * 4] = iVar19;
      ((double *)((longlong)_Var7 + 8))[lVar14 * 2] = 1.0;
      if (_Var12 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                     )local_260._Mypair._Myval2._Mylast) {
        sVar16 = (longlong)local_260._Mypair._Myval2._Mylast -
                 (longlong)local_260._Mypair._Myval2._Myfirst;
        _Var9 = _Var7;
        _Var12 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                  )local_260._Mypair._Myval2._Myfirst;
      }
      else {
        memmove((void *)_Var7,local_260._Mypair._Myval2._Myfirst,
                (longlong)_Var12 - (longlong)local_260._Mypair._Myval2._Myfirst);
        _Var9 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                 )((Triplet<double,int> *)((longlong)_Var7 + lVar14 * 0x10) + 1);
        sVar16 = (longlong)local_260._Mypair._Myval2._Mylast - (longlong)_Var12;
      }
      memmove((void *)_Var9,(void *)_Var12,sVar16);
      if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
          local_260._Mypair._Myval2._Myfirst !=
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)0x0
         ) {
        std::allocator<Eigen::Triplet<double,int>_>::deallocate
                  ((allocator<Eigen::Triplet<double,int>_> *)&local_260,
                   local_260._Mypair._Myval2._Myfirst,
                   (longlong)local_260._Mypair._Myval2._Myend -
                   (longlong)local_260._Mypair._Myval2._Myfirst >> 4);
      }
      local_260._Mypair._Myval2._Myend = (Triplet<double,int> *)(uVar24 * 0x10 + (longlong)_Var7);
      _Var12 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                )(uVar13 * 0x10 + (longlong)_Var7);
      iVar20 = local_244;
      local_260._Mypair._Myval2._Myfirst = (Triplet<double,int> *)_Var7;
    }
    else {
      (local_260._Mypair._Myval2._Mylast)->m_row = iVar19;
      *(int *)((longlong)local_260._Mypair._Myval2._Mylast + 4) = iVar19;
      *(double *)((longlong)local_260._Mypair._Myval2._Mylast + 8) = 1.0;
      _Var12 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                )((longlong)local_260._Mypair._Myval2._Mylast + 0x10);
    }
    iVar19 = iVar19 + iVar20;
    if (_Var12 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                   )local_260._Mypair._Myval2._Myend) {
      lVar14 = (longlong)_Var12 - (longlong)local_260._Mypair._Myval2._Myfirst >> 4;
      local_260._Mypair._Myval2._Mylast = (Triplet<double,int> *)_Var12;
      if (lVar14 == 0xfffffffffffffff) goto LAB_14c8d2f1a;
      uVar13 = lVar14 + 1;
      uVar11 = (longlong)local_260._Mypair._Myval2._Myend -
               (longlong)local_260._Mypair._Myval2._Myfirst >> 4;
      if (0xfffffffffffffff - (uVar11 >> 1) < uVar11) {
        uVar24 = 0xfffffffffffffff;
      }
      else {
        uVar11 = (uVar11 >> 1) + uVar11;
        uVar24 = uVar13;
        if (uVar13 <= uVar11) {
          uVar24 = uVar11;
        }
        if (0xfffffffffffffff < uVar24) goto LAB_14c8d2f14;
      }
      _Var7 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )std::_Allocate<16,std::_Default_allocate_traits>(uVar24 * 0x10);
      ((Triplet<double,int> *)((longlong)_Var7 + lVar14 * 0x10))->m_row = iVar19;
      ((int *)((longlong)_Var7 + 4))[lVar14 * 4] = iVar19;
      ((double *)((longlong)_Var7 + 8))[lVar14 * 2] = 1.0;
      if (_Var12 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                     )local_260._Mypair._Myval2._Mylast) {
        sVar16 = (longlong)local_260._Mypair._Myval2._Mylast -
                 (longlong)local_260._Mypair._Myval2._Myfirst;
        _Var9 = _Var7;
        _Var12 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                  )local_260._Mypair._Myval2._Myfirst;
      }
      else {
        memmove((void *)_Var7,local_260._Mypair._Myval2._Myfirst,
                (longlong)_Var12 - (longlong)local_260._Mypair._Myval2._Myfirst);
        _Var9 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                 )((Triplet<double,int> *)((longlong)_Var7 + lVar14 * 0x10) + 1);
        sVar16 = (longlong)local_260._Mypair._Myval2._Mylast - (longlong)_Var12;
      }
      memmove((void *)_Var9,(void *)_Var12,sVar16);
      if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
          local_260._Mypair._Myval2._Myfirst !=
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)0x0
         ) {
        std::allocator<Eigen::Triplet<double,int>_>::deallocate
                  ((allocator<Eigen::Triplet<double,int>_> *)&local_260,
                   local_260._Mypair._Myval2._Myfirst,
                   (longlong)local_260._Mypair._Myval2._Myend -
                   (longlong)local_260._Mypair._Myval2._Myfirst >> 4);
      }
      local_260._Mypair._Myval2._Myend = (Triplet<double,int> *)(uVar24 * 0x10 + (longlong)_Var7);
      local_260._Mypair._Myval2._Mylast = (Triplet<double,int> *)(uVar13 * 0x10 + (longlong)_Var7);
      iVar20 = local_244;
      local_260._Mypair._Myval2._Myfirst = (Triplet<double,int> *)_Var7;
    }
    else {
      *(int *)_Var12 = iVar19;
      *(int *)((longlong)_Var12 + 4) = iVar19;
      *(double *)((longlong)_Var12 + 8) = 1.0;
      local_260._Mypair._Myval2._Mylast = (Triplet<double,int> *)((longlong)_Var12 + 0x10);
    }
    TStack_1c0.UnvisitedBitMask = TStack_1c0.UnvisitedBitMask & ~TStack_1c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1c0);
    plVar17 = local_1d0;
    iVar19 = (int)local_230;
  }
  local_230 = (longlong)(iVar20 * 2);
  pSVar8 = Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>
                     (&local_120,local_230,local_230);
  Eigen::SparseMatrix<double,0,int>::operator=(param_2,pSVar8);
  FMemory_Free(local_120.m_outerIndex);
  FMemory_Free(local_120.m_innerNonZeros);
  operator_delete__(local_120.m_data.m_values);
  operator_delete__(local_120.m_data.m_indices);
  local_res8 = SUB81(this,0);
  local_170 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )local_260._Mypair._Myval2._Mylast;
  local_168 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )local_260._Mypair._Myval2._Myfirst;
  Eigen::internal::
  set_from_triplets<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>,Eigen::SparseMatrix<double,0,int>,Eigen::internal::scalar_sum_op<double,double>_>
            (&local_168,&local_170,param_2,local_res8);
  Eigen::SparseMatrix<double,0,int>::makeCompressed(param_2);
  _Var7 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)0x0
  ;
  _Var12 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
           0x0;
  if (local_238 != 0) {
    if (0xfffffffffffffff < local_238) {
LAB_14c8d2f1a:
                    /* WARNING: Subroutine does not return */
      std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::_Xlength
                ();
    }
    uVar15 = local_238 * 0x10;
    _Var7 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
            std::_Allocate<16,std::_Default_allocate_traits>(uVar15);
    _Var12 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
             ((longlong)_Var7 + uVar15);
  }
  iStack_148 = 0;
  pTStack_218 = (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_;
  iVar20 = (int)this->_padding_;
  local_130 = 0;
  uStack_144 = 1;
  auVar25._0_8_ = (double)local_228;
  auVar25._8_8_ = 0;
  auVar26 = sqrtpd(auVar26,auVar25);
  dVar4 = __real_3ff0000000000000 / auVar26._0_8_;
  iStack_134 = 0;
  if (iVar20 != 0) {
    plVar18 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar18 = (longlong *)pTStack_218;
    }
    uVar1 = (uint)*plVar18;
    while (uVar1 == 0) {
      lVar14 = (longlong)iStack_148;
      local_130 = local_130 + 0x20;
      iStack_148 = iStack_148 + 1;
      iStack_134 = iVar20;
      if ((int)(iVar20 + -1 + (iVar20 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148) goto LAB_14c8d2a0f;
      uVar1 = *(uint *)((longlong)plVar18 + lVar14 * 4 + 4);
    }
    uStack_144 = -uVar1 & uVar1;
    uVar13 = (ulonglong)uStack_144 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_178 = (int)lVar14;
    iStack_134 = local_178 + -1 + local_130;
    if (iVar20 < iStack_134) {
      iStack_134 = iVar20;
    }
  }
LAB_14c8d2a0f:
  uStack_12c = local_54;
  iStack_128 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  uVar1 = (uint)this->_padding_;
  iVar19 = (int)uVar1 >> 5;
  bVar10 = (byte)uVar1 & 0x1f;
  uStack_21c = 1 << bVar10;
  uVar23 = -1 << bVar10;
  uVar21 = uVar1 & 0xffffffe0;
  uStack_138 = 0xffffffff;
  auStack_1f8._0_8_ = CONCAT44(uStack_144,iStack_148);
  uStack_1e4 = iStack_134;
  auStack_1f8._16_4_ = 0xffffffff;
  uStack_1e0._4_4_ = local_54;
  uStack_1e0._0_4_ = local_130;
  local_1d8 = CONCAT44(uStack_124,iStack_128);
  local_220 = iVar19;
  local_210 = uVar23;
  uStack_20c = uVar1;
  uStack_208 = uVar21;
  local_200 = plVar17;
  auStack_1f8._8_8_ = pTStack_218;
  local_150 = plVar17;
  local_140 = (longlong *)pTStack_218;
  if ((((int)uVar1 < 0) || (iVar20 < (int)uVar1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = (uint)this->_padding_;
  if (uVar1 != uVar2) {
    plVar17 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar17 = &this->_padding_;
    }
    uVar23 = uVar23 & *(uint *)((longlong)plVar17 + (longlong)iVar19 * 4);
    while (uVar23 == 0) {
      uStack_208 = uVar21 + 0x20;
      local_220 = iVar19 + 1;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < local_220)
      goto LAB_14c8d2b5c;
      uVar23 = *(uint *)((longlong)plVar17 + (longlong)iVar19 * 4 + 4);
      local_210 = 0xffffffff;
      iVar19 = local_220;
      uVar21 = uStack_208;
    }
    uStack_21c = -uVar23 & uVar23;
    uVar13 = (ulonglong)uStack_21c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uStack_20c = (int)lVar14 + -1 + uVar21;
    if ((int)uVar2 < (int)uStack_20c) {
LAB_14c8d2b5c:
      uStack_20c = uVar2;
    }
  }
  uVar1 = uStack_20c;
  TStack_1c0._padding_ = CONCAT44(uStack_21c,local_220);
  TStack_1c0.CurrentBitIndex = uStack_20c;
  TStack_1c0.UnvisitedBitMask = local_210;
  TStack_1c0._28_4_ = uStack_204;
  TStack_1c0.BaseBitIndex = uStack_208;
  TStack_1c0.Array = pTStack_218;
  local_240 = pTStack_218;
  _Var9 = _Var7;
  do {
    plVar17 = local_200;
    if ((int)local_200[1] - *(int *)((longlong)local_200 + 0x34) != (int)local_1d8) {
      `TSparseArray<TSparseSetElement<TTuple<int,UE::Solvers::FUVConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_248);
    }
    if (((uStack_1e4 == uVar1) &&
        ((TBitArray<FDefaultBitArrayAllocator> *)auStack_1f8._8_8_ == local_240)) &&
       (plVar17 == local_1d0)) {
      pSVar8 = Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&local_d8,local_230,2);
      Eigen::SparseMatrix<double,0,int>::operator=(param_3,pSVar8);
      FMemory_Free(local_d8.m_outerIndex);
      FMemory_Free(local_d8.m_innerNonZeros);
      operator_delete__(local_d8.m_data.m_values);
      operator_delete__(local_d8.m_data.m_indices);
      local_res8 = SUB41(uVar1,0);
      local_160 = _Var7;
      local_158 = _Var9;
      Eigen::internal::
      set_from_triplets<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>,Eigen::SparseMatrix<double,0,int>,Eigen::internal::scalar_sum_op<double,double>_>
                (&local_158,&local_160,param_3,local_res8);
      Eigen::SparseMatrix<double,0,int>::makeCompressed(param_3);
      if (_Var9 != (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                    )0x0) {
        uVar15 = (longlong)_Var12 - (longlong)_Var9 & 0xfffffffffffffff0;
        _Var12 = _Var9;
        if (0xfff < uVar15) {
          _Var12 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                     *)((longlong)_Var9 + -8);
          uVar15 = uVar15 + 0x27;
          if (0x1f < ((longlong)_Var9 - (longlong)_Var12) - 8U) goto LAB_14c8d2efa;
        }
        ::operator_delete((void *)_Var12,uVar15);
      }
      if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
          local_260._Mypair._Myval2._Myfirst !=
          (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)0x0
         ) {
        uVar15 = (longlong)local_260._Mypair._Myval2._Myend -
                 (longlong)local_260._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
        _Var12 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                  )local_260._Mypair._Myval2._Myfirst;
        if (0xfff < uVar15) {
          _Var12 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                     *)((longlong)local_260._Mypair._Myval2._Myfirst + -8);
          uVar15 = uVar15 + 0x27;
          if (0x1f < ((longlong)local_260._Mypair._Myval2._Myfirst - (longlong)_Var12) - 8U) {
LAB_14c8d2efa:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)_Var12,uVar15);
      }
      return;
    }
    iVar20 = *(int *)((longlong)(int)uStack_1e4 * 0x38 + 0xc + *plVar17);
    if (_Var7 == _Var12) {
      local_238 = (longlong)_Var7 - (longlong)_Var9;
      lVar14 = (longlong)local_238 >> 4;
      if (lVar14 == 0xfffffffffffffff) goto LAB_14c8d2f1a;
      uVar11 = (longlong)_Var12 - (longlong)_Var9 >> 4;
      uVar13 = lVar14 + 1;
      if (0xfffffffffffffff - (uVar11 >> 1) < uVar11) {
        uVar22 = 0xfffffffffffffff;
      }
      else {
        uVar24 = (uVar11 >> 1) + uVar11;
        uVar22 = uVar13;
        if (uVar13 <= uVar24) {
          uVar22 = uVar24;
        }
        if (0xfffffffffffffff < uVar22) {
LAB_14c8d2f14:
                    /* WARNING: Subroutine does not return */
          std::_Throw_bad_array_new_length();
        }
      }
      _Dst = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
             std::_Allocate<16,std::_Default_allocate_traits>(uVar22 * 0x10);
      *(int *)((longlong)_Dst + lVar14 * 0x10) = iVar20;
      ((int *)((longlong)_Dst + 4))[lVar14 * 4] = 0;
      *(double *)((int *)((longlong)_Dst + 8) + lVar14 * 4) = dVar4;
      memmove((void *)_Dst,(void *)_Var9,local_238);
      if (_Var9 != (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                    )0x0) {
        uVar15 = uVar11 * 0x10;
        _Var12 = _Var9;
        if (0xfff < uVar15) {
          _Var12 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                     *)((longlong)_Var9 + -8);
          uVar15 = uVar15 + 0x27;
          if (0x1f < ((longlong)_Var9 - (longlong)_Var12) - 8U) goto LAB_14c8d2efa;
        }
        ::operator_delete((void *)_Var12,uVar15);
      }
      _Var12 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                )((longlong)_Dst + uVar22 * 0x10);
      _Var7 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )(uVar13 * 0x10 + (longlong)_Dst);
    }
    else {
      *(int *)_Var7 = iVar20;
      *(int *)((longlong)_Var7 + 4) = 0;
      *(double *)((longlong)_Var7 + 8) = dVar4;
      _Var7 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )((longlong)_Var7 + 0x10);
      _Dst = _Var9;
    }
    iVar20 = iVar20 + local_244;
    if (_Var7 == _Var12) {
      local_238 = (longlong)_Var7 - (longlong)_Dst;
      lVar14 = (longlong)local_238 >> 4;
      if (lVar14 == 0xfffffffffffffff) goto LAB_14c8d2f1a;
      uVar11 = (longlong)_Var12 - (longlong)_Dst >> 4;
      uVar13 = lVar14 + 1;
      if (0xfffffffffffffff - (uVar11 >> 1) < uVar11) {
        uVar22 = 0xfffffffffffffff;
      }
      else {
        uVar24 = (uVar11 >> 1) + uVar11;
        uVar22 = uVar13;
        if (uVar13 <= uVar24) {
          uVar22 = uVar24;
        }
        if (0xfffffffffffffff < uVar22) goto LAB_14c8d2f14;
      }
      _Var9 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )std::_Allocate<16,std::_Default_allocate_traits>(uVar22 * 0x10);
      *(int *)((longlong)_Var9 + lVar14 * 0x10) = iVar20;
      ((int *)((longlong)_Var9 + 4))[lVar14 * 4] = 1;
      *(double *)((int *)((longlong)_Var9 + 8) + lVar14 * 4) = dVar4;
      memmove((void *)_Var9,(void *)_Dst,local_238);
      if (_Dst != (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                   )0x0) {
        uVar15 = uVar11 * 0x10;
        _Var12 = _Dst;
        if (0xfff < uVar15) {
          _Var12 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                     *)((longlong)_Dst + -8);
          uVar15 = uVar15 + 0x27;
          if (0x1f < ((longlong)_Dst - (longlong)_Var12) - 8U) goto LAB_14c8d2efa;
        }
        ::operator_delete((void *)_Var12,uVar15);
      }
      _Var12 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                )(uVar22 * 0x10 + (longlong)_Var9);
      _Var7 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )(uVar13 * 0x10 + (longlong)_Var9);
    }
    else {
      *(int *)_Var7 = iVar20;
      *(int *)((longlong)_Var7 + 4) = 1;
      *(double *)((longlong)_Var7 + 8) = dVar4;
      _Var7 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )((longlong)_Var7 + 0x10);
      _Var9 = _Dst;
    }
    auStack_1f8._16_4_ = auStack_1f8._16_4_ & ~auStack_1f8._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1f8);
  } while( true );
}

// SetInitialSolution @ 14c916cf0

void __thiscall
UE::Geometry::FSpectralConformalMeshUVSolver::SetInitialSolution
          (FSpectralConformalMeshUVSolver *this,FRandomStream *param_1)

{
  FScriptContainerElement *pFVar1;
  
  if ((this->InitialUVs).field0_0x0.TypedValue.ArrayMax != -1) {
    pFVar1 = (this->InitialUVs).field0_0x0.TypedValue.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (this->InitialUVs).field0_0x0.TypedValue.ArrayMax = -1;
    (this->InitialUVs).field0_0x0.TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0
    ;
    (this->InitialUVs).field0_0x0.TypedValue.ArrayNum = 0;
  }
  if ((TOptional<FRandomStream> *)param_1 != &this->RandomStream) {
    (this->RandomStream).TypedValue = *param_1;
    (this->RandomStream).bIsSet = true;
  }
  return;
}

// SetInitialSolution @ 14c916d60

void __thiscall
UE::Geometry::FSpectralConformalMeshUVSolver::SetInitialSolution
          (FSpectralConformalMeshUVSolver *this,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TOptional<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  
  if ((this->RandomStream).bIsSet != false) {
    (this->RandomStream).bIsSet = false;
  }
  pTVar2 = &this->InitialUVs;
  if (param_1 != (TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *)pTVar2) {
    pFVar4 = (pTVar2->field0_0x0).TypedValue.AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    (pTVar2->field0_0x0).TypedValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar3 = param_1->ArrayNum;
    pFVar4 = (param_1->AllocatorInstance).Data;
    piVar1 = &(this->InitialUVs).field0_0x0.TypedValue.ArrayMax;
    (this->InitialUVs).field0_0x0.TypedValue.ArrayNum = iVar3;
    if (iVar3 == 0) {
      *piVar1 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar3,0,(ForAnyElementType *)pTVar2,iVar3,piVar1);
      memcpy((pTVar2->field0_0x0).TypedValue.AllocatorInstance.Data,pFVar4,(longlong)iVar3 << 4);
    }
    if (*piVar1 == -1) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x171,
                         L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  return;
}

// SolveParameterization @ 14c919eb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014c91a04c) */
/* WARNING: Removing unreachable block (ram,0x00014c91a060) */
/* WARNING: Removing unreachable block (ram,0x00014c91a064) */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Geometry::FSpectralConformalMeshUVSolver::SolveParameterization
          (FSpectralConformalMeshUVSolver *this,SparseMatrix<double,0,int> *param_1,
          SparseMatrix<double,0,int> *param_2,SparseMatrix<double,0,int> *param_3,
          Matrix<double,_1,1,0,_1,1> *param_4)

{
  undefined1 *this_00;
  size_t _Size;
  code *pcVar1;
  long64 lVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  FSparsePowerMethod *this_01;
  FSparsePowerMethod *pFVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStackY_2d8 [32];
  FMatrixHints local_2a8;
  assign_op<double,double> local_2a6 [6];
  DenseStorage<double,_1,_1,1,0> local_2a0;
  DenseStorage<double,_1,_1,1,0> local_290;
  undefined1 local_280 [24];
  ulong64 local_268;
  bool local_260;
  longlong local_258;
  Matrix<double,_1,1,0,_1,1> *local_250;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_248 [2];
  SparseMatrix<double,0,int> local_238;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<_void___cdecl_UE::Geometry::RandomDenseMatrix<double,_1,1>(Eigen::Matrix<double,_1,1,0,_1,1>_&,int,int,FRandomStream_const_&)_::_2_::<lambda_1>,Eigen::Matrix<double,_1,1,0,_1,1>_>_>,Eigen::internal::assign_op<double,double>,0>
  local_1e8;
  undefined1 local_1c8 [8];
  evaluator<Eigen::CwiseNullaryOp<_void___cdecl_UE::Geometry::RandomDenseMatrix<double,_1,1>(Eigen::Matrix<double,_1,1,0,_1,1>_&,int,int,FRandomStream_const_&)_::_2_::<lambda_1>,Eigen::Matrix<double,_1,1,0,_1,1>_>_>
  local_1c0;
  SparseMatrix<double,0,int> local_1a8;
  CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::SparseMatrix<double,0,int>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>_const_>
  local_158;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_e0;
  code *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  SparseMatrix<double,0,int> *pSStack_c0;
  SparseMatrix<double,0,int> *local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong local_98 [3];
  longlong *local_80;
  longlong local_78;
  longlong local_68 [3];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_250 = param_4;
  Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>
            (&local_1a8,param_1->m_innerSize,param_1->m_outerSize);
  Eigen::SparseMatrix<double,0,int>::setIdentity(&local_1a8);
  local_158.m_rhs.m_lhs.m_rows.m_value = local_1a8.m_innerSize;
  uVar10 = 0;
  local_158.m_rhs.m_lhs.m_cols.m_value = local_1a8.m_outerSize;
  local_158.m_rhs.m_rhs = &local_1a8;
  local_158.m_rhs.m_lhs.m_functor.m_other = __real_3e45798ee2308c3a;
  local_158._padding_._0_1_ = 0;
  local_158.m_rhs._padding_._0_1_ = 0;
  local_238._padding_._0_1_ = 0;
  local_238.m_outerSize = 0;
  local_238.m_innerSize = 0;
  local_238.m_outerIndex = (int *)0x0;
  local_238.m_innerNonZeros = (int *)0x0;
  local_238.m_data.m_values = (double *)0x0;
  local_238.m_data.m_indices = (int *)0x0;
  local_238.m_data.m_size = 0;
  local_238.m_data.m_allocatedSize = 0;
  local_158.m_lhs = param_1;
  Eigen::internal::
  assign_sparse_to_sparse<Eigen::SparseMatrix<double,0,int>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::SparseMatrix<double,0,int>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>_const_>_>
            (&local_238,&local_158);
  local_d8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FSpectralConformalMeshUVSolver::SolveParameterization'::__l2::<lambda_1>,void,Eigen::Matrix<double,-1,1,0,-1,1>_const_&,Eigen::Matrix<double,-1,1,0,-1,1>_&>
             ::Call;
  uStack_d0 = uStack_100;
  local_b8 = param_3;
  plStack_b0 = (longlong *)0x0;
  local_a8 = 0;
  local_80 = (longlong *)0x0;
  local_78 = 0;
  local_50 = (longlong *)0x0;
  local_c8 = 0x528d00e8;
  uStack_c4 = 1;
  pSStack_c0 = param_2;
  uStack_e0 = 0;
  local_50 = (longlong *)0x0;
  local_78 = 0;
  local_80 = (longlong *)0x0;
  local_a8 = 0;
  plStack_b0 = (longlong *)0x0;
  uStack_c4 = 1;
  local_c8 = 0x528d00e8;
  local_d8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FSpectralConformalMeshUVSolver::SolveParameterization'::__l2::<lambda_1>,void,Eigen::Matrix<double,-1,1,0,-1,1>_const_&,Eigen::Matrix<double,-1,1,0,-1,1>_&>
             ::Call;
  uStack_e0 = 0;
  local_108 = 0;
  local_280._0_8_ = __real_3ddb7cdfd9d7bdbb;
  local_280._8_4_ = 1000;
  local_260 = false;
  if ((this->InitialUVs).field0_0x0.TypedValue.ArrayMax == -1) {
LAB_14c91a0d9:
    if ((this->RandomStream).bIsSet != false) {
      iVar7 = (int)this->_padding_ * 2;
      local_1c0.m_functor.InRandomStream = &(this->RandomStream).TypedValue;
      local_2a0.m_data = (double *)0x0;
      local_2a0.m_rows = 0;
      if (iVar7 != 0) {
        pSStack_c0 = param_2;
        local_b8 = param_3;
        Eigen::DenseStorage<double,-1,-1,1,0>::resize(&local_2a0,(longlong)iVar7,(longlong)iVar7,1);
        param_2 = pSStack_c0;
        param_3 = local_b8;
      }
      local_248[0] = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)local_2a0.m_data;
      local_1e8.m_dst = local_248;
      local_1e8.m_src = &local_1c0;
      local_1e8.m_functor = local_2a6;
      local_1e8.m_dstExpr = (Matrix<double,_1,1,0,_1,1> *)&local_2a0;
      pSStack_c0 = param_2;
      local_b8 = param_3;
      Eigen::internal::
      dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Matrix<double,-1,1,0,-1,1>_>,Eigen::internal::evaluator<Eigen::CwiseNullaryOp<`UE::Geometry::RandomDenseMatrix<double,-1,1>'::__l2::<lambda_1>,Eigen::Matrix<double,-1,1,0,-1,1>_>_>,Eigen::internal::assign_op<double,double>,0>,1,0>
      ::run(&local_1e8);
      if (local_260 != false) {
        FMemory_Free((void *)local_280._16_8_);
      }
      local_280._16_8_ = Eigen::internal::conditional_aligned_new_auto<double,1>(local_2a0.m_rows);
      local_268 = local_2a0.m_rows;
      if (local_2a0.m_rows * 8 != 0) {
        memcpy((void *)local_280._16_8_,local_2a0.m_data,local_2a0.m_rows * 8);
      }
      local_260 = true;
      FMemory_Free(local_2a0.m_data);
      param_2 = pSStack_c0;
      param_3 = local_b8;
    }
  }
  else {
    if ((this->InitialUVs).field0_0x0.TypedValue.ArrayNum !=
        *(int *)(this->_padding_ + 0x20) * 0x200 + *(int *)(this->_padding_ + 0x24)) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8826420370400607742>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\MeshUVSolver.cpp"
                         ,0x202,"InitialUVs.GetValue().Num() == Mesh.MaxVertexID()");
      param_2 = pSStack_c0;
      param_3 = local_b8;
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      goto LAB_14c91a0d9;
    }
    iVar7 = (int)this->_padding_;
    local_290.m_data = (double *)0x0;
    local_290.m_rows = 0;
    Eigen::DenseStorage<double,-1,-1,1,0>::resize
              (&local_290,(longlong)(iVar7 * 2),(longlong)(iVar7 * 2),1);
    uVar13 = uVar10;
    local_258 = (longlong)iVar7;
    if (0 < iVar7) {
      do {
        uVar12 = (uint)uVar13;
        uVar5 = 0;
        if ((int)uVar12 < (int)this->_padding_) {
          uVar5 = ~uVar12 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        uVar5 = *(uint *)(this->_padding_ + uVar10 * 4);
        if ((this->InitialUVs).field0_0x0.TypedValue.ArrayMax == -1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        uVar6 = 0;
        if ((int)uVar5 < (this->InitialUVs).field0_0x0.TypedValue.ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        local_290.m_data[uVar10] =
             *(double *)
              ((this->InitialUVs).field0_0x0.TypedValue.AllocatorInstance.Data +
              (longlong)(int)uVar5 * 0x10);
        if ((this->InitialUVs).field0_0x0.TypedValue.ArrayMax == -1) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            );
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        uVar6 = 0;
        if ((int)uVar5 < (this->InitialUVs).field0_0x0.TypedValue.ArrayNum) {
          uVar6 = ~uVar5 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        uVar11 = uVar10 + 1;
        local_290.m_data[local_258 + uVar10] =
             *(double *)
              ((this->InitialUVs).field0_0x0.TypedValue.AllocatorInstance.Data +
              (longlong)(int)uVar5 * 0x10 + 8);
        uVar10 = uVar11;
        uVar13 = (ulonglong)(uVar12 + 1);
      } while ((longlong)uVar11 < local_258);
    }
    if (local_260 != false) {
      FMemory_Free((void *)local_280._16_8_);
    }
    lVar2 = local_290.m_rows;
    local_280._16_8_ = Eigen::internal::conditional_aligned_new_auto<double,1>(local_290.m_rows);
    _Size = lVar2 * 8;
    local_268 = lVar2;
    if (_Size != 0) {
      memcpy((void *)local_280._16_8_,local_290.m_data,_Size);
    }
    local_260 = true;
    FMemory_Free(local_290.m_data);
    param_4 = local_250;
    param_2 = pSStack_c0;
    param_3 = local_b8;
  }
  pFVar8 = (FSparsePowerMethod *)0x0;
  local_2a8.bIsSymmetric = true;
  local_2a8.bIsPSD = true;
  pSStack_c0 = param_2;
  local_b8 = param_3;
  this_01 = ::operator_new(0x180);
  if (this_01 != (FSparsePowerMethod *)0x0) {
    pFVar8 = FSparsePowerMethod::FSparsePowerMethod
                       (this_01,&local_238,&local_2a8,(Parameters *)local_280);
  }
  this_00 = &pFVar8->field_0xa0;
  if (&local_d8 != (code **)this_00) {
    if (pFVar8->field_0x130 != '\0') {
      FPowerMethod::MatrixOperator::~MatrixOperator((MatrixOperator *)this_00);
    }
    *(code **)this_00 = local_d8;
    *(undefined8 *)&pFVar8->field_0xc8 = 0;
    if (local_d8 != (code *)0x0) {
      plVar9 = (longlong *)&local_c8;
      if (plStack_b0 != (longlong *)0x0) {
        plVar9 = plStack_b0;
      }
      (**(code **)*plVar9)();
    }
    *(longlong *)&pFVar8->field_0xd0 = local_a8;
    *(undefined8 *)&pFVar8->field_0xf8 = 0;
    if (local_a8 != 0) {
      plVar9 = local_98;
      if (local_80 != (longlong *)0x0) {
        plVar9 = local_80;
      }
      (**(code **)*plVar9)();
    }
    *(longlong *)&pFVar8->field_0x100 = local_78;
    *(undefined8 *)&pFVar8->field_0x128 = 0;
    if (local_78 != 0) {
      plVar9 = local_68;
      if (local_50 != (longlong *)0x0) {
        plVar9 = local_50;
      }
      (**(code **)*plVar9)();
    }
    pFVar8->field_0x130 = 1;
  }
  iVar7 = (**(code **)(*(longlong *)pFVar8 + 8))(pFVar8,local_1c8,param_4,0);
  if (iVar7 != 0) {
    if (iVar7 != 1) {
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8826420370400607710>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\MeshUVSolver.cpp"
                         ,0x222,
                         "SolveStatus == FPowerMethod::ESolveStatus::Success || SolveStatus == FPowerMethod::ESolveStatus::NotConverged"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (1 < (byte)LogTemp._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      bVar3 = false;
      goto LAB_14c91a58c;
    }
    if (1 < (byte)LogTemp._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
    }
  }
  bVar3 = true;
LAB_14c91a58c:
  (*(code *)**(undefined8 **)pFVar8)(pFVar8,1);
  FMemory_Free((void *)0x0);
  if (local_260 != false) {
    FMemory_Free((void *)local_280._16_8_);
  }
  if (local_78 != 0) {
    plVar9 = local_68;
    if (local_50 != (longlong *)0x0) {
      plVar9 = local_50;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_a8 != 0) {
    plVar9 = local_98;
    if (local_80 != (longlong *)0x0) {
      plVar9 = local_80;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  if (local_d8 != (code *)0x0) {
    plVar9 = (longlong *)&local_c8;
    if (plStack_b0 != (longlong *)0x0) {
      plVar9 = plStack_b0;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  FMemory_Free(local_238.m_outerIndex);
  FMemory_Free(local_238.m_innerNonZeros);
  operator_delete__(local_238.m_data.m_values);
  operator_delete__(local_238.m_data.m_indices);
  FMemory_Free(local_1a8.m_outerIndex);
  FMemory_Free(local_1a8.m_innerNonZeros);
  operator_delete__(local_1a8.m_data.m_values);
  operator_delete__(local_1a8.m_data.m_indices);
  return bVar3;
}

// SolveUVs @ 14c91aa70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FSpectralConformalMeshUVSolver::SolveUVs
          (FSpectralConformalMeshUVSolver *this,FDynamicMesh3 *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TVector2<double> TVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  void *local_148;
  undefined8 uStack_140;
  SparseMatrix<double,0,int> local_138;
  SparseMatrix<double,0,int> local_e8;
  SparseMatrix<double,0,int> local_98;
  
  uVar13 = 0;
  local_98._padding_._0_1_ = 0;
  local_98.m_data.m_indices = (int *)0x0;
  local_98.m_data.m_allocatedSize = 0;
  local_98.m_innerNonZeros = (int *)0x0;
  local_98.m_data.m_values = (double *)0x0;
  local_98.m_innerSize = 0;
  local_98.m_data.m_size = 0;
  FMemory_Free((void *)0x0);
  local_98.m_outerIndex = FMemory_Malloc(4,0x10);
  if (local_98.m_outerIndex == (int *)0x0) {
    ::operator_new(0xffffffffffffffff);
  }
  local_98.m_outerSize = 0;
  if (local_98.m_innerNonZeros != (int *)0x0) {
    FMemory_Free(local_98.m_innerNonZeros);
  }
  memset(local_98.m_outerIndex,0,local_98.m_outerSize * 4 + 4);
  local_e8._padding_._0_1_ = 0;
  local_e8.m_innerNonZeros = (int *)0x0;
  local_e8.m_data.m_values = (double *)0x0;
  local_e8.m_data.m_indices = (int *)0x0;
  local_e8.m_data.m_allocatedSize = 0;
  local_e8.m_innerSize = 0;
  local_e8.m_data.m_size = 0;
  FMemory_Free((void *)0x0);
  local_e8.m_outerIndex = FMemory_Malloc(4,0x10);
  if (local_e8.m_outerIndex == (int *)0x0) {
    ::operator_new(0xffffffffffffffff);
  }
  local_e8.m_outerSize = 0;
  if (local_e8.m_innerNonZeros != (int *)0x0) {
    FMemory_Free(local_e8.m_innerNonZeros);
  }
  memset(local_e8.m_outerIndex,0,local_e8.m_outerSize * 4 + 4);
  local_138._padding_._0_1_ = 0;
  local_138.m_innerNonZeros = (int *)0x0;
  local_138.m_data.m_values = (double *)0x0;
  local_138.m_data.m_indices = (int *)0x0;
  local_138.m_data.m_allocatedSize = 0;
  local_138.m_innerSize = 0;
  local_138.m_data.m_size = 0;
  FMemory_Free((void *)0x0);
  local_138.m_outerIndex = FMemory_Malloc(4,0x10);
  if (local_138.m_outerIndex == (int *)0x0) {
    ::operator_new(0xffffffffffffffff);
  }
  local_138.m_outerSize = 0;
  if (local_138.m_innerNonZeros != (int *)0x0) {
    FMemory_Free(local_138.m_innerNonZeros);
  }
  memset(local_138.m_outerIndex,0,local_138.m_outerSize * 4 + 4);
  ConstructSystemMatrices(this,&local_98,&local_e8,&local_138);
  local_148 = (void *)0x0;
  uStack_140 = 0;
  bVar7 = SolveParameterization
                    (this,&local_98,&local_e8,&local_138,(Matrix<double,_1,1,0,_1,1> *)&local_148);
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,*(int *)(this->_padding_ + 0x20) * 0x200 + *(int *)(this->_padding_ + 0x24),
             Default);
  if (bVar7) {
    iVar3 = (int)this->_padding_;
    uVar14 = uVar13;
    uVar15 = uVar13;
    if (0 < iVar3) {
      do {
        uVar12 = (uint)uVar13;
        uVar10 = 0;
        if ((int)uVar12 < (int)this->_padding_) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        uVar10 = *(uint *)(uVar15 + this->_padding_);
        uVar1 = *(undefined8 *)((longlong)local_148 + uVar14);
        uVar2 = *(undefined8 *)((longlong)local_148 + uVar14 + (longlong)iVar3 * 8);
        uVar11 = 0;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar13 = (ulonglong)(uVar12 + 1);
        *(undefined8 *)(pFVar4 + (longlong)(int)uVar10 * 0x10) = uVar1;
        *(undefined8 *)(pFVar4 + (longlong)(int)uVar10 * 0x10 + 8) = uVar2;
        uVar14 = uVar14 + 8;
        uVar15 = uVar15 + 4;
      } while ((int)(uVar12 + 1) < (int)this->_padding_);
    }
  }
  else {
    bVar8 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8826420370400607676>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\MeshUVSolver.cpp"
                       ,0x244,"bSolveOK");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return (bool)uVar9;
    }
    uVar14 = uVar13;
    if (0 < (int)this->_padding_) {
      do {
        uVar12 = (uint)uVar13;
        uVar10 = 0;
        if ((int)uVar12 < (int)this->_padding_) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        TVar6.field0_0x0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
        uVar10 = *(uint *)(uVar14 + this->_padding_);
        uVar11 = 0;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return (bool)uVar9;
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        ((TVector2<double>_u_0 *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10))
        ->_s_0 = (TVector2<double>_u_0_s_0)TVar6.field0_0x0;
        uVar14 = uVar14 + 4;
      } while ((int)(uVar12 + 1) < (int)this->_padding_);
    }
  }
  FMemory_Free(local_148);
  FMemory_Free(local_138.m_outerIndex);
  FMemory_Free(local_138.m_innerNonZeros);
  operator_delete__(local_138.m_data.m_values);
  operator_delete__(local_138.m_data.m_indices);
  FMemory_Free(local_e8.m_outerIndex);
  FMemory_Free(local_e8.m_innerNonZeros);
  operator_delete__(local_e8.m_data.m_values);
  operator_delete__(local_e8.m_data.m_indices);
  FMemory_Free(local_98.m_outerIndex);
  FMemory_Free(local_98.m_innerNonZeros);
  operator_delete__(local_98.m_data.m_values);
  operator_delete__(local_98.m_data.m_indices);
  return bVar7;
}

// ~FSpectralConformalMeshUVSolver @ 14c9368d0

void __thiscall
UE::Geometry::FSpectralConformalMeshUVSolver::~FSpectralConformalMeshUVSolver
          (FSpectralConformalMeshUVSolver *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FSpectralConformalMeshUVSolver_Geometry_UE__6B_;
  if (((this->InitialUVs).field0_0x0.TypedValue.ArrayMax != -1) &&
     (pFVar1 = (this->InitialUVs).field0_0x0.TypedValue.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FConformalMeshUVSolver_Geometry_UE__6B_;
  FConstrainedMeshUVSolver::~FConstrainedMeshUVSolver((FConstrainedMeshUVSolver *)this);
  return;
}

