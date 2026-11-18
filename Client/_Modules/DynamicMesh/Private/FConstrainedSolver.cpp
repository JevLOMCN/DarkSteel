// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 8

// FConstrainedSolver @ 14c8968b0

FConstrainedSolver * __thiscall
UE::Geometry::FConstrainedSolver::FConstrainedSolver
          (FConstrainedSolver *this,
          TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
          *param_1,EMatrixSolverType param_2)

{
  TUniquePtr<UE::Geometry::IMatrixSolverBase,TDefaultDelete<UE::Geometry::IMatrixSolverBase>_>
  *pTVar1;
  SparseMatrix<double,0,int> *pSVar2;
  SparseMatrix<double,0,int> *pSVar3;
  IMatrixSolverBase *pIVar4;
  TUniquePtr<UE::Geometry::IMatrixSolverBase,TDefaultDelete<UE::Geometry::IMatrixSolverBase>_> TVar5
  ;
  undefined8 *local_res8;
  
  FSOAPositions::FSOAPositions(&this->ConstraintPositions,(int)param_1->Ptr->m_outerSize);
  (this->SymmetricMatrixPtr).Ptr = (SparseMatrix<double,0,int> *)0x0;
  Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&this->WeightsSqrdMatrix);
  Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&this->LHSMatrix);
  pTVar1 = &this->MatrixSolver;
  pTVar1->Ptr = (IMatrixSolverBase *)0x0;
  pSVar2 = param_1->Ptr;
  param_1->Ptr = (SparseMatrix<double,0,int> *)0x0;
  pSVar3 = (this->SymmetricMatrixPtr).Ptr;
  if ((pSVar3 != pSVar2) &&
     ((this->SymmetricMatrixPtr).Ptr = pSVar2, pSVar3 != (SparseMatrix<double,0,int> *)0x0)) {
    FMemory_Free(pSVar3->m_outerIndex);
    FMemory_Free(pSVar3->m_innerNonZeros);
    operator_delete__((pSVar3->m_data).m_values);
    operator_delete__((pSVar3->m_data).m_indices);
    ::operator_delete(pSVar3,0x48);
  }
  this->bMatrixSolverDirty = true;
  TVar5 = ConstructMatrixSolver((EMatrixSolverType *)&local_res8);
  if ((IMatrixSolverBase *)pTVar1 != TVar5.Ptr) {
    pIVar4 = pTVar1->Ptr;
    pTVar1->Ptr = (IMatrixSolverBase *)*TVar5.Ptr;
    *TVar5.Ptr = (IMatrixSolverBase)0x0;
    if (pIVar4 != (IMatrixSolverBase *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    (**(code **)*local_res8)(local_res8,1);
  }
  return this;
}

// ClearWeights @ 14c8c7470

void __thiscall UE::Geometry::FConstrainedSolver::ClearWeights(FConstrainedSolver *this)

{
  longlong lVar1;
  int *_Dst;
  SparseMatrix<double,0,int> *pSVar2;
  
  lVar1 = (this->WeightsSqrdMatrix).m_outerSize;
  (this->WeightsSqrdMatrix).m_data.m_size = 0;
  memset((this->WeightsSqrdMatrix).m_outerIndex,0,lVar1 * 4 + 4);
  _Dst = (this->WeightsSqrdMatrix).m_innerNonZeros;
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,(this->WeightsSqrdMatrix).m_outerSize << 2);
  }
  pSVar2 = (this->SymmetricMatrixPtr).Ptr;
  Eigen::SparseMatrix<double,0,int>::resize
            (&this->WeightsSqrdMatrix,pSVar2->m_innerSize,pSVar2->m_outerSize);
  this->bMatrixSolverDirty = true;
  return;
}

// SetConstraintWeights @ 14c915ae0

void __thiscall
UE::Geometry::FConstrainedSolver::SetConstraintWeights
          (FConstrainedSolver *this,
          TMap<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  double dVar3;
  undefined4 uVar4;
  code *pcVar5;
  TMap<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var11;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Dst;
  longlong lVar12;
  ulonglong uVar13;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var14;
  ulonglong uVar15;
  ulong64 uVar16;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Src;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  scalar_sum_op<double,double> local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_bc;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_a0;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_98;
  TMap<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  
  ClearWeights(this);
  _Var11 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
           0x0;
  _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
           0x0;
  iVar8 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  if (iVar8 != 0) {
    if (0xfffffffffffffff < (ulonglong)(longlong)iVar8) {
LAB_14c915ee7:
                    /* WARNING: Subroutine does not return */
      std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::_Xlength
                ();
    }
    uVar16 = (longlong)iVar8 * 0x10;
    _Var11 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
             std::_Allocate<16,std::_Default_allocate_traits>(uVar16);
    _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
             ((longlong)_Var11 + uVar16);
  }
  iVar8 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar17 = 0;
  iVar19 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar8 != 0) {
    puVar20 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar21 = *puVar20;
    while (uVar21 == 0) {
      lVar12 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar10 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14c915bcf;
      uVar21 = puVar20[lVar12 + 1];
    }
    uVar9 = -uVar21 & uVar21;
    uVar13 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = iVar19 + -1 + (int)lVar12;
    if (iVar8 < iVar10) {
      iVar10 = iVar8;
    }
  }
LAB_14c915bcf:
  uVar21 = *(uint *)&param_1->field_0x28;
  uVar23 = uVar21 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar9,iVar17);
  TStack_88.CurrentBitIndex = iVar10;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar21 >> 5;
  TStack_88._28_4_ = iVar10;
  TStack_88.BaseBitIndex = iVar19;
  uStack_68 = CONCAT44(uStack_bc,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_res20 = uVar21;
  local_90 = param_1;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar8 < (int)uVar21)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = *(uint *)&param_1->field_0x28;
  _Src = _Var11;
  if (uVar21 != uVar9) {
    puVar18 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar21 == 0) {
      lVar12 = (longlong)iVar17;
      uVar23 = uVar23 + 0x20;
      iVar17 = iVar17 + 1;
      uVar21 = uVar9;
      local_res20 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14c915cf0;
      uVar21 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar13 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar21 = (int)lVar12 + -1 + uVar23;
    local_res20 = uVar21;
    if ((int)uVar9 < (int)uVar21) {
      uVar21 = uVar9;
      local_res20 = uVar9;
    }
  }
LAB_14c915cf0:
  do {
    pTVar6 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_88.CurrentBitIndex == uVar21) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    {
      local_res10 = SUB81(param_1,0);
      local_a0 = _Var11;
      local_98 = _Src;
      Eigen::internal::
      set_from_triplets<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>,Eigen::SparseMatrix<double,0,int>,Eigen::internal::scalar_sum_op<double,double>_>
                (&local_98,&local_a0,&this->WeightsSqrdMatrix,local_res10);
      Eigen::SparseMatrix<double,0,int>::makeCompressed(&this->WeightsSqrdMatrix);
      UpdateSolverWithContraints(this);
      if (_Src != (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                   )0x0) {
        uVar16 = (longlong)_Var14 - (longlong)_Src & 0xfffffffffffffff0;
        _Var14 = _Src;
        if (0xfff < uVar16) {
          _Var14 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                     *)((longlong)_Src + -8);
          uVar16 = uVar16 + 0x27;
          if (0x1f < ((longlong)_Src - (longlong)_Var14) - 8U) {
LAB_14c915ec7:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)_Var14,uVar16);
      }
      return;
    }
    lVar12 = *(longlong *)pTVar6;
    dVar3 = *(double *)(lVar12 + 8 + (longlong)TStack_88.CurrentBitIndex * 0x18);
    uVar4 = *(undefined4 *)(lVar12 + (longlong)TStack_88.CurrentBitIndex * 0x18);
    dVar3 = dVar3 * dVar3;
    if (_Var11 == _Var14) {
      lVar12 = (longlong)_Var11 - (longlong)_Src >> 4;
      if (lVar12 == 0xfffffffffffffff) goto LAB_14c915ee7;
      uVar15 = (longlong)_Var14 - (longlong)_Src >> 4;
      uVar13 = lVar12 + 1;
      if (0xfffffffffffffff - (uVar15 >> 1) < uVar15) {
        uVar22 = 0xfffffffffffffff;
      }
      else {
        uVar2 = (uVar15 >> 1) + uVar15;
        uVar22 = uVar13;
        if (uVar13 <= uVar2) {
          uVar22 = uVar2;
        }
        if (0xfffffffffffffff < uVar22) {
                    /* WARNING: Subroutine does not return */
          std::_Throw_bad_array_new_length();
        }
      }
      _Dst = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
             std::_Allocate<16,std::_Default_allocate_traits>(uVar22 * 0x10);
      *(undefined4 *)((longlong)_Dst + lVar12 * 0x10) = uVar4;
      ((undefined4 *)((longlong)_Dst + 4))[lVar12 * 4] = uVar4;
      *(double *)((undefined4 *)((longlong)_Dst + 8) + lVar12 * 4) = dVar3;
      memmove((void *)_Dst,(void *)_Src,(longlong)_Var11 - (longlong)_Src);
      if (_Src != (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                   )0x0) {
        uVar16 = uVar15 * 0x10;
        _Var14 = _Src;
        if (0xfff < uVar16) {
          _Var14 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                     *)((longlong)_Src + -8);
          uVar16 = uVar16 + 0x27;
          if (0x1f < ((longlong)_Src - (longlong)_Var14) - 8U) goto LAB_14c915ec7;
        }
        ::operator_delete((void *)_Var14,uVar16);
      }
      _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                )(uVar22 * 0x10 + (longlong)_Dst);
      _Var11 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                )(uVar13 * 0x10 + (longlong)_Dst);
      uVar21 = local_res20;
    }
    else {
      *(undefined4 *)_Var11 = uVar4;
      *(undefined4 *)((longlong)_Var11 + 4) = uVar4;
      *(double *)((longlong)_Var11 + 8) = dVar3;
      _Var11 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                )((longlong)_Var11 + 0x10);
      _Dst = _Src;
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    _Src = _Dst;
  } while( true );
}

// SetConstraintWeights @ 14c915f00

void __thiscall
UE::Geometry::FConstrainedSolver::SetConstraintWeights
          (FConstrainedSolver *this,
          TMap<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
          *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  double dVar3;
  undefined4 uVar4;
  code *pcVar5;
  TMap<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
  *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var11;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Dst;
  longlong lVar12;
  ulonglong uVar13;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var14;
  ulonglong uVar15;
  ulong64 uVar16;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Src;
  int iVar17;
  undefined1 *puVar18;
  int iVar19;
  uint *puVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  scalar_sum_op<double,double> local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_bc;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_a0;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_98;
  TMap<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  
  ClearWeights(this);
  _Var11 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
           0x0;
  _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
           0x0;
  iVar8 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  if (iVar8 != 0) {
    if (0xfffffffffffffff < (ulonglong)(longlong)iVar8) {
LAB_14c91630a:
                    /* WARNING: Subroutine does not return */
      std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::_Xlength
                ();
    }
    uVar16 = (longlong)iVar8 * 0x10;
    _Var11 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
             std::_Allocate<16,std::_Default_allocate_traits>(uVar16);
    _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
             ((longlong)_Var11 + uVar16);
  }
  iVar8 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar17 = 0;
  iVar19 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar8 != 0) {
    puVar20 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar21 = *puVar20;
    while (uVar21 == 0) {
      lVar12 = (longlong)iVar17;
      iVar19 = iVar19 + 0x20;
      iVar17 = iVar17 + 1;
      iVar10 = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14c915fef;
      uVar21 = puVar20[lVar12 + 1];
    }
    uVar9 = -uVar21 & uVar21;
    uVar13 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = iVar19 + -1 + (int)lVar12;
    if (iVar8 < iVar10) {
      iVar10 = iVar8;
    }
  }
LAB_14c915fef:
  uVar21 = *(uint *)&param_1->field_0x28;
  uVar23 = uVar21 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar9,iVar17);
  TStack_88.CurrentBitIndex = iVar10;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar21 >> 5;
  TStack_88._28_4_ = iVar10;
  TStack_88.BaseBitIndex = iVar19;
  uStack_68 = CONCAT44(uStack_bc,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_res20 = uVar21;
  local_90 = param_1;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar8 < (int)uVar21)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = *(uint *)&param_1->field_0x28;
  _Src = _Var11;
  if (uVar21 != uVar9) {
    puVar18 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar17 * 4);
    while (uVar21 == 0) {
      lVar12 = (longlong)iVar17;
      uVar23 = uVar23 + 0x20;
      iVar17 = iVar17 + 1;
      uVar21 = uVar9;
      local_res20 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14c916110;
      uVar21 = *(uint *)(puVar18 + lVar12 * 4 + 4);
    }
    uVar13 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar21 = (int)lVar12 + -1 + uVar23;
    local_res20 = uVar21;
    if ((int)uVar9 < (int)uVar21) {
      uVar21 = uVar9;
      local_res20 = uVar9;
    }
  }
LAB_14c916110:
  do {
    pTVar6 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<int,UE::Solvers::FPositionConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_88.CurrentBitIndex == uVar21) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    {
      local_res10 = SUB81(param_1,0);
      local_a0 = _Var11;
      local_98 = _Src;
      Eigen::internal::
      set_from_triplets<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>,Eigen::SparseMatrix<double,0,int>,Eigen::internal::scalar_sum_op<double,double>_>
                (&local_98,&local_a0,&this->WeightsSqrdMatrix,local_res10);
      Eigen::SparseMatrix<double,0,int>::makeCompressed(&this->WeightsSqrdMatrix);
      UpdateSolverWithContraints(this);
      if (_Src != (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                   )0x0) {
        uVar16 = (longlong)_Var14 - (longlong)_Src & 0xfffffffffffffff0;
        _Var14 = _Src;
        if (0xfff < uVar16) {
          _Var14 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                     *)((longlong)_Src + -8);
          uVar16 = uVar16 + 0x27;
          if (0x1f < ((longlong)_Src - (longlong)_Var14) - 8U) {
LAB_14c9162ea:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
        }
        ::operator_delete((void *)_Var14,uVar16);
      }
      return;
    }
    lVar12 = *(longlong *)pTVar6;
    dVar3 = *(double *)((longlong)TStack_88.CurrentBitIndex * 0x40 + 0x30 + lVar12);
    uVar4 = *(undefined4 *)((longlong)TStack_88.CurrentBitIndex * 0x40 + lVar12);
    dVar3 = dVar3 * dVar3;
    if (_Var11 == _Var14) {
      lVar12 = (longlong)_Var11 - (longlong)_Src >> 4;
      if (lVar12 == 0xfffffffffffffff) goto LAB_14c91630a;
      uVar15 = (longlong)_Var14 - (longlong)_Src >> 4;
      uVar13 = lVar12 + 1;
      if (0xfffffffffffffff - (uVar15 >> 1) < uVar15) {
        uVar22 = 0xfffffffffffffff;
      }
      else {
        uVar2 = (uVar15 >> 1) + uVar15;
        uVar22 = uVar13;
        if (uVar13 <= uVar2) {
          uVar22 = uVar2;
        }
        if (0xfffffffffffffff < uVar22) {
                    /* WARNING: Subroutine does not return */
          std::_Throw_bad_array_new_length();
        }
      }
      _Dst = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
             std::_Allocate<16,std::_Default_allocate_traits>(uVar22 * 0x10);
      *(undefined4 *)((longlong)_Dst + lVar12 * 0x10) = uVar4;
      ((undefined4 *)((longlong)_Dst + 4))[lVar12 * 4] = uVar4;
      *(double *)((undefined4 *)((longlong)_Dst + 8) + lVar12 * 4) = dVar3;
      memmove((void *)_Dst,(void *)_Src,(longlong)_Var11 - (longlong)_Src);
      if (_Src != (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                   )0x0) {
        uVar16 = uVar15 * 0x10;
        _Var14 = _Src;
        if (0xfff < uVar16) {
          _Var14 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                     *)((longlong)_Src + -8);
          uVar16 = uVar16 + 0x27;
          if (0x1f < ((longlong)_Src - (longlong)_Var14) - 8U) goto LAB_14c9162ea;
        }
        ::operator_delete((void *)_Var14,uVar16);
      }
      _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                )(uVar22 * 0x10 + (longlong)_Dst);
      _Var11 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                )(uVar13 * 0x10 + (longlong)_Dst);
      uVar21 = local_res20;
    }
    else {
      *(undefined4 *)_Var11 = uVar4;
      *(undefined4 *)((longlong)_Var11 + 4) = uVar4;
      *(double *)((longlong)_Var11 + 8) = dVar3;
      _Var11 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                )((longlong)_Var11 + 0x10);
      _Dst = _Src;
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    _Src = _Dst;
  } while( true );
}

// SetContraintPositions @ 14c916320

void __thiscall
UE::Geometry::FConstrainedSolver::SetContraintPositions
          (FConstrainedSolver *this,
          TMap<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
          *param_1)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  TMap<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
  *pTVar18;
  longlong lVar19;
  undefined1 local_res8 [8];
  TMap<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
  *local_res10;
  int local_res18;
  int local_res20;
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  
  local_res10 = param_1;
  TVector3Arrays<double>::SetZero
            ((TVector3Arrays<double> *)this,(int)((this->SymmetricMatrixPtr).Ptr)->m_outerSize);
  iVar4 = *(int *)&param_1->field_0x28;
  puVar2 = &param_1->field_0x10;
  iVar14 = 0;
  iVar16 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar12 = *puVar17;
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14c9163ce;
      uVar12 = puVar17[lVar9 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar1 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = iVar16 + -1 + local_res18;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14c9163ce:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar10 = uVar12 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar7,iVar14);
  TStack_88.CurrentBitIndex = iVar8;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_88._28_4_ = iVar8;
  TStack_88.BaseBitIndex = iVar16;
  uStack_68 = CONCAT44(uStack_94,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&param_1->field_0x28;
  pTVar18 = param_1;
  if (uVar12 != uVar7) {
    puVar15 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar14;
      uVar10 = uVar10 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14c9164e0;
      uVar12 = *(uint *)(puVar15 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    uVar12 = local_res20 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_14c9164e0:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_68) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,UE::Solvers::FPositionConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_88.CurrentBitIndex == uVar12) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (param_1 == pTVar18)
       ) {
      return;
    }
    lVar9 = *(longlong *)param_1;
    lVar19 = (longlong)TStack_88.CurrentBitIndex * 0x40;
    uVar7 = *(uint *)(lVar19 + lVar9);
    lVar11 = (longlong)(int)uVar7;
    uVar3 = *(undefined8 *)(lVar19 + 0x10 + lVar9);
    uVar13 = ~uVar7 >> 0x1f;
    uVar10 = 0;
    if ((int)uVar7 < *(int *)&(this->ConstraintPositions).field_0x8) {
      uVar10 = uVar13;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) break;
    *(undefined8 *)(*(longlong *)&this->ConstraintPositions + lVar11 * 8) = uVar3;
    uVar3 = *(undefined8 *)(lVar19 + 0x18 + lVar9);
    uVar10 = 0;
    if ((int)uVar7 < *(int *)&(this->ConstraintPositions).field_0x18) {
      uVar10 = uVar13;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined8 *)(*(longlong *)&(this->ConstraintPositions).field_0x10 + lVar11 * 8) = uVar3;
    uVar3 = *(undefined8 *)(lVar19 + 0x20 + lVar9);
    uVar10 = 0;
    if ((int)uVar7 < *(int *)&(this->ConstraintPositions).field_0x28) {
      uVar10 = uVar13;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined8 *)(*(longlong *)&(this->ConstraintPositions).field_0x20 + lVar11 * 8) = uVar3;
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    pTVar18 = local_res10;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// Solve @ 14c918f50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FConstrainedSolver::Solve
          (FConstrainedSolver *this,FSOAPositions *param_1,FSOAPositions *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  IMatrixSolverBase *pIVar3;
  char cVar4;
  undefined1 uVar5;
  FString *pFVar6;
  FSOAPositions *pFVar7;
  longlong lVar8;
  FConstrainedSolver *pFVar9;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar10;
  int iVar11;
  assign_op<double,double> local_res8 [8];
  assign_op<double,double> local_res20 [8];
  TArray<double,TSizedDefaultAllocator<32>_> local_138;
  TArray<double,TSizedDefaultAllocator<32>_> local_128;
  TArray<double,TSizedDefaultAllocator<32>_> local_118;
  FString local_108;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>,0>
  local_f8;
  double local_d8;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_d0;
  FScriptContainerElement *local_c8;
  longlong lStack_c0;
  longlong local_b8;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_a8;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_> local_80;
  SparseMatrix<double,0,int> *local_60;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_> local_58;
  
  cVar4 = (**(code **)((longlong)*(this->MatrixSolver).Ptr + 0x38))();
  if (cVar4 != '\0') {
    GetGlobalLogSingleton();
    pFVar6 = ::FString::FString(&local_108,L"Post-setup solve time");
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    iVar11 = 0;
    iVar1 = (int)((this->SymmetricMatrixPtr).Ptr)->m_outerSize;
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    local_128.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.ArrayNum = 0;
    local_128.ArrayMax = 0;
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0;
    TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_138,iVar1,Default);
    TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_128,iVar1,Default);
    TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_118,iVar1,Default);
    local_d8 = __real_3ff0000000000000;
    do {
      pFVar7 = param_1;
      if (iVar11 != 0) {
        lVar8 = 0x10;
        if (iVar11 != 1) {
          lVar8 = 0x20;
        }
        pFVar7 = (FSOAPositions *)(&param_1->field_0x0 + lVar8);
      }
      local_80._padding_ = (longlong)*(int *)&pFVar7->field_0x8;
      if (*(int *)&pFVar7->field_0x8 < 1) {
        local_80._padding_ = 0;
        local_80._padding_ = 0;
      }
      else {
        local_80._padding_ = *(longlong *)pFVar7;
        local_f8.m_dst =
             (evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> *)
             local_80._padding_;
        local_f8.m_src = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)local_80._padding_;
      }
      pFVar9 = this;
      if (iVar11 != 0) {
        lVar8 = 0x10;
        if (iVar11 != 1) {
          lVar8 = 0x20;
        }
        pFVar9 = (FConstrainedSolver *)(&(this->ConstraintPositions).field_0x0 + lVar8);
      }
      iVar1 = *(int *)&(pFVar9->ConstraintPositions).field_0x8;
      local_58._padding_ = (longlong)iVar1;
      if (iVar1 < 1) {
        local_58._padding_ = 0;
        local_58._padding_ = 0;
      }
      else {
        local_58._padding_ = *(longlong *)&pFVar9->ConstraintPositions;
        local_c8 = (FScriptContainerElement *)local_58._padding_;
        lStack_c0 = local_58._padding_;
      }
      local_80._padding_ = (longlong)local_f8.m_functor;
      local_58._padding_ = local_b8;
      if (iVar11 == 0) {
        pTVar10 = &local_138;
      }
      else {
        pTVar10 = &local_118;
        if (iVar11 == 1) {
          pTVar10 = &local_128;
        }
      }
      local_a8._padding_ = (longlong)pTVar10->ArrayNum;
      if (pTVar10->ArrayNum < 1) {
        local_a8._padding_ = 0;
        local_a8._padding_ = 0;
      }
      else {
        local_a8._padding_ = (longlong)(pTVar10->AllocatorInstance).Data;
      }
      local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = 0;
      local_108.Data.ArrayMax = 0;
      local_60 = &this->WeightsSqrdMatrix;
      Eigen::internal::
      call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>,Eigen::internal::assign_op<double,double>_>
                ((Matrix<double,_1,1,0,_1,1> *)&local_108,&local_80,local_res8);
      Eigen::internal::
      generic_product_impl_base<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>,Eigen::internal::generic_product_impl<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>,Eigen::SparseShape,Eigen::DenseShape,7>_>
      ::scaleAndAddTo<Eigen::Matrix<double,_1,1,0,_1,1>_>
                ((Matrix<double,_1,1,0,_1,1> *)&local_108,&this->WeightsSqrdMatrix,&local_58,
                 &local_d8);
      local_d0 = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)
                 local_108.Data.AllocatorInstance.Data;
      local_c8 = (FScriptContainerElement *)local_a8._padding_;
      local_b8 = local_a8._padding_;
      local_f8.m_dst =
           (evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> *)
           &local_c8;
      local_f8.m_src = &local_d0;
      local_f8.m_functor = local_res20;
      local_f8.m_dstExpr = &local_a8;
      Eigen::internal::
      dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,-1,1,0,-1,1>_>,Eigen::internal::assign_op<double,double>,0>,3,0>
      ::run(&local_f8);
      FMemory_Free(local_108.Data.AllocatorInstance.Data);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
    pIVar3 = (this->MatrixSolver).Ptr;
    (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,&local_138,param_2);
    uVar5 = (**(code **)((longlong)*(this->MatrixSolver).Ptr + 0x38))();
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
    if (local_128.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.AllocatorInstance.Data);
    }
    if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_138.AllocatorInstance.Data);
    }
    return (bool)uVar5;
  }
  return false;
}

// SolveWithGuess @ 14c91b550

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FConstrainedSolver::SolveWithGuess
          (FConstrainedSolver *this,FSOAPositions *param_1,FSOAPositions *param_2,
          FSOAPositions *param_3)

{
  int iVar1;
  IMatrixSolverBase *pIVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  FString *pFVar7;
  FSOAPositions *pFVar8;
  longlong lVar9;
  FConstrainedSolver *pFVar10;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar11;
  int iVar12;
  assign_op<double,double> local_res8 [8];
  assign_op<double,double> local_148 [8];
  TArray<double,TSizedDefaultAllocator<32>_> local_140;
  TArray<double,TSizedDefaultAllocator<32>_> local_130;
  TArray<double,TSizedDefaultAllocator<32>_> local_120;
  FString local_110;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>,0>
  local_100;
  double local_e0;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_d8;
  FScriptContainerElement *local_d0;
  longlong lStack_c8;
  longlong local_c0;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_b0;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_> local_88;
  SparseMatrix<double,0,int> *local_68;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_> local_60;
  
  cVar4 = (**(code **)((longlong)*(this->MatrixSolver).Ptr + 8))();
  if (cVar4 == '\0') {
    bVar6 = Solve(this,param_2,param_3);
    return bVar6;
  }
  pIVar2 = (this->MatrixSolver).Ptr;
  GetGlobalLogSingleton();
  pFVar7 = ::FString::FString(&local_110,L"Post-setup solve time");
  pFVar3 = (pFVar7->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  iVar12 = 0;
  iVar1 = (int)((this->SymmetricMatrixPtr).Ptr)->m_outerSize;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_140,iVar1,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_130,iVar1,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_120,iVar1,Default);
  local_e0 = __real_3ff0000000000000;
  do {
    pFVar8 = param_2;
    if (iVar12 != 0) {
      lVar9 = 0x10;
      if (iVar12 != 1) {
        lVar9 = 0x20;
      }
      pFVar8 = (FSOAPositions *)(&param_2->field_0x0 + lVar9);
    }
    local_88._padding_ = (longlong)*(int *)&pFVar8->field_0x8;
    if (*(int *)&pFVar8->field_0x8 < 1) {
      local_88._padding_ = 0;
      local_88._padding_ = 0;
    }
    else {
      local_88._padding_ = *(longlong *)pFVar8;
      local_100.m_dst =
           (evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> *)
           local_88._padding_;
      local_100.m_src = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)local_88._padding_;
    }
    pFVar10 = this;
    if (iVar12 != 0) {
      lVar9 = 0x10;
      if (iVar12 != 1) {
        lVar9 = 0x20;
      }
      pFVar10 = (FConstrainedSolver *)(&(this->ConstraintPositions).field_0x0 + lVar9);
    }
    iVar1 = *(int *)&(pFVar10->ConstraintPositions).field_0x8;
    local_60._padding_ = (longlong)iVar1;
    if (iVar1 < 1) {
      local_60._padding_ = 0;
      local_60._padding_ = 0;
    }
    else {
      local_60._padding_ = *(longlong *)&pFVar10->ConstraintPositions;
      local_d0 = (FScriptContainerElement *)local_60._padding_;
      lStack_c8 = local_60._padding_;
    }
    local_88._padding_ = (longlong)local_100.m_functor;
    local_60._padding_ = local_c0;
    if (iVar12 == 0) {
      pTVar11 = &local_140;
    }
    else {
      pTVar11 = &local_120;
      if (iVar12 == 1) {
        pTVar11 = &local_130;
      }
    }
    local_b0._padding_ = (longlong)pTVar11->ArrayNum;
    if (pTVar11->ArrayNum < 1) {
      local_b0._padding_ = 0;
      local_b0._padding_ = 0;
    }
    else {
      local_b0._padding_ = (longlong)(pTVar11->AllocatorInstance).Data;
    }
    local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_110.Data.ArrayNum = 0;
    local_110.Data.ArrayMax = 0;
    local_68 = &this->WeightsSqrdMatrix;
    Eigen::internal::
    call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>_const_,0,Eigen::Stride<0,0>_>,Eigen::internal::assign_op<double,double>_>
              ((Matrix<double,_1,1,0,_1,1> *)&local_110,&local_88,local_res8);
    Eigen::internal::
    generic_product_impl_base<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>,Eigen::internal::generic_product_impl<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>_const_,0,Eigen::Stride<0,0>_>,Eigen::SparseShape,Eigen::DenseShape,7>_>
    ::scaleAndAddTo<Eigen::Matrix<double,_1,1,0,_1,1>_>
              ((Matrix<double,_1,1,0,_1,1> *)&local_110,&this->WeightsSqrdMatrix,&local_60,&local_e0
              );
    local_d8 = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)local_110.Data.AllocatorInstance.Data;
    local_d0 = (FScriptContainerElement *)local_b0._padding_;
    local_c0 = local_b0._padding_;
    local_100.m_dst =
         (evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> *)
         &local_d0;
    local_100.m_src = &local_d8;
    local_100.m_functor = local_148;
    local_100.m_dstExpr = &local_b0;
    Eigen::internal::
    dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,-1,1,0,-1,1>_>,Eigen::internal::assign_op<double,double>,0>,3,0>
    ::run(&local_100);
    FMemory_Free(local_110.Data.AllocatorInstance.Data);
    iVar12 = iVar12 + 1;
  } while (iVar12 < 3);
  (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,param_1,&local_140,param_3);
  uVar5 = (**(code **)((longlong)*pIVar2 + 0x38))(pIVar2);
  if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
  if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  return (bool)uVar5;
}

// UpdateSolverWithContraints @ 14c923940

void __thiscall
UE::Geometry::FConstrainedSolver::UpdateSolverWithContraints(FConstrainedSolver *this)

{
  FScriptContainerElement *pFVar1;
  IMatrixSolverBase *pIVar2;
  FString *pFVar3;
  undefined1 local_28 [16];
  SparseMatrix<double,0,int> *local_18;
  
  GetGlobalLogSingleton();
  pFVar3 = ::FString::FString((FString *)local_28,L"Matrix setup time");
  pFVar1 = (pFVar3->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  local_28._8_8_ = (this->SymmetricMatrixPtr).Ptr;
  local_18 = &this->WeightsSqrdMatrix;
  local_28[0] = false;
  Eigen::SparseMatrix<double,0,int>::
  operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::SparseMatrix<double,0,int>_const_,Eigen::SparseMatrix<double,0,int>_const_>_>
            (&this->LHSMatrix,
             (SparseMatrixBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::SparseMatrix<double,0,int>_const_,Eigen::SparseMatrix<double,0,int>_const_>_>
              *)local_28);
  Eigen::SparseMatrix<double,0,int>::makeCompressed(&this->LHSMatrix);
  (**(code **)((longlong)*(this->MatrixSolver).Ptr + 0x30))();
  pIVar2 = (this->MatrixSolver).Ptr;
  (**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,&this->LHSMatrix,1);
  this->bMatrixSolverDirty = false;
  return;
}

