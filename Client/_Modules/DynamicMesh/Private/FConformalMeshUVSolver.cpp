// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 4

// ConstructConformalEnergyMatrix @ 14c8d01a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FConformalMeshUVSolver::ConstructConformalEnergyMatrix
          (FConformalMeshUVSolver *this,SparseMatrix<double,0,int> *param_1,bool param_2,
          double param_3,SparseMatrix<double,0,int> *param_4,SparseMatrix<double,0,int> *param_5)

{
  int *piVar1;
  long64 lVar2;
  double *pdVar3;
  double *pdVar4;
  TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
  TVar5;
  longlong *plVar6;
  SparseMatrix<double,0,int> *pSVar7;
  SparseMatrix<double,0,int> *pSVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStackY_258 [32];
  scalar_sum_op<double,double> local_228;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_220;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
  local_218 [2];
  SparseMatrix<double,0,int> local_208;
  SparseMatrix<double,0,int> local_1b8;
  SparseMatrixBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<double,double>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>_>
  local_168 [8];
  undefined1 local_160;
  long64 local_150;
  long64 local_148;
  undefined8 local_140;
  SparseMatrix<double,0,int> *local_138;
  SparseMatrix<double,0,int> *local_128;
  undefined1 local_118 [48];
  longlong local_e8;
  longlong local_d8 [3];
  longlong *local_c0;
  longlong local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
  local_88;
  vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_> local_80;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_258;
  FEigenDNCPSparseMatrixAssembler::FEigenDNCPSparseMatrixAssembler
            ((FEigenDNCPSparseMatrixAssembler *)local_118,*(int *)&this->field_0x68);
  MeshDeformation::ConstructFullCotangentLaplacian<double>
            (*(FDynamicMesh3 **)&this->field_0x88,(FVertexLinearization *)&this->field_0x60,
             (TSparseMatrixAssembler<double> *)local_118,param_2 + ClampedMagnitude,NoArea);
  local_1b8._padding_._0_1_ = 0;
  local_1b8.m_innerNonZeros = (int *)0x0;
  local_1b8.m_data.m_values = (double *)0x0;
  local_1b8.m_data.m_indices = (int *)0x0;
  local_1b8.m_data.m_allocatedSize = 0;
  local_1b8.m_innerSize = 0;
  local_1b8.m_data.m_size = 0;
  FMemory_Free((void *)0x0);
  local_1b8.m_outerIndex = FMemory_Malloc(4,0x10);
  if (local_1b8.m_outerIndex == (int *)0x0) {
    ::operator_new(0xffffffffffffffff);
  }
  local_1b8.m_outerSize = 0;
  if (local_1b8.m_innerNonZeros != (int *)0x0) {
    FMemory_Free(local_1b8.m_innerNonZeros);
  }
  memset(local_1b8.m_outerIndex,0,local_1b8.m_outerSize * 4 + 4);
  local_218[0] = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                  )local_80._Mypair._Myval2._Mylast;
  local_220 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )local_80._Mypair._Myval2._Myfirst;
  pSVar7 = &local_1b8;
  if (param_4 != (SparseMatrix<double,0,int> *)0x0) {
    pSVar7 = param_4;
  }
  Eigen::internal::
  set_from_triplets<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>,Eigen::SparseMatrix<double,0,int>,Eigen::internal::scalar_sum_op<double,double>_>
            (&local_220,local_218,local_88.Ptr,local_228);
  Eigen::SparseMatrix<double,0,int>::makeCompressed(local_88.Ptr);
  TVar5.Ptr = local_88.Ptr;
  piVar1 = pSVar7->m_outerIndex;
  pSVar7->m_outerIndex = (local_88.Ptr)->m_outerIndex;
  (TVar5.Ptr)->m_outerIndex = piVar1;
  lVar2 = pSVar7->m_innerSize;
  pSVar7->m_innerSize = (TVar5.Ptr)->m_innerSize;
  (TVar5.Ptr)->m_innerSize = lVar2;
  lVar2 = pSVar7->m_outerSize;
  pSVar7->m_outerSize = (TVar5.Ptr)->m_outerSize;
  (TVar5.Ptr)->m_outerSize = lVar2;
  piVar1 = pSVar7->m_innerNonZeros;
  pSVar7->m_innerNonZeros = (TVar5.Ptr)->m_innerNonZeros;
  pdVar3 = ((TVar5.Ptr)->m_data).m_values;
  (TVar5.Ptr)->m_innerNonZeros = piVar1;
  pdVar4 = (pSVar7->m_data).m_values;
  (pSVar7->m_data).m_values = pdVar3;
  ((TVar5.Ptr)->m_data).m_values = pdVar4;
  piVar1 = (pSVar7->m_data).m_indices;
  (pSVar7->m_data).m_indices = ((TVar5.Ptr)->m_data).m_indices;
  ((TVar5.Ptr)->m_data).m_indices = piVar1;
  lVar2 = (pSVar7->m_data).m_size;
  (pSVar7->m_data).m_size = ((TVar5.Ptr)->m_data).m_size;
  ((TVar5.Ptr)->m_data).m_size = lVar2;
  lVar2 = (pSVar7->m_data).m_allocatedSize;
  (pSVar7->m_data).m_allocatedSize = ((TVar5.Ptr)->m_data).m_allocatedSize;
  ((TVar5.Ptr)->m_data).m_allocatedSize = lVar2;
  local_208._padding_._0_1_ = 0;
  local_208.m_innerNonZeros = (int *)0x0;
  local_208.m_data.m_values = (double *)0x0;
  local_208.m_data.m_indices = (int *)0x0;
  local_208.m_data.m_allocatedSize = 0;
  local_208.m_innerSize = 0;
  local_208.m_data.m_size = 0;
  FMemory_Free((void *)0x0);
  local_208.m_outerIndex = FMemory_Malloc(4,0x10);
  if (local_208.m_outerIndex == (int *)0x0) {
    ::operator_new(0xffffffffffffffff);
  }
  local_208.m_outerSize = 0;
  if (local_208.m_innerNonZeros != (int *)0x0) {
    FMemory_Free(local_208.m_innerNonZeros);
  }
  memset(local_208.m_outerIndex,0,local_208.m_outerSize * 4 + 4);
  pSVar8 = &local_208;
  if (param_5 != (SparseMatrix<double,0,int> *)0x0) {
    pSVar8 = param_5;
  }
  if (param_2) {
    ConstructWeightedVectorAreaMatrix(this,pSVar8,(double *)&local_220,param_3);
    uVar9 = local_220._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    uVar10 = local_220._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
  }
  else {
    ConstructVectorAreaMatrix(this,pSVar8);
    uVar9 = (uint)__real_bff0000000000000;
    uVar10 = (uint)((ulonglong)__real_bff0000000000000 >> 0x20);
  }
  local_150 = pSVar7->m_innerSize;
  local_148 = pSVar7->m_outerSize;
  local_140 = CONCAT44(uVar10,uVar9);
  local_168[0].m_isRValue = false;
  local_160 = 0;
  local_138 = pSVar7;
  local_128 = pSVar8;
  Eigen::SparseMatrix<double,0,int>::
  operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<double,double>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>_>
            (param_1,local_168);
  FMemory_Free(local_208.m_outerIndex);
  FMemory_Free(local_208.m_innerNonZeros);
  operator_delete__(local_208.m_data.m_values);
  operator_delete__(local_208.m_data.m_indices);
  FMemory_Free(local_1b8.m_outerIndex);
  FMemory_Free(local_1b8.m_innerNonZeros);
  operator_delete__(local_1b8.m_data.m_values);
  operator_delete__(local_1b8.m_data.m_indices);
  std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
  ~vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>(&local_80);
  if (local_88.Ptr != (SparseMatrix<double,0,int> *)0x0) {
    FMemory_Free((local_88.Ptr)->m_outerIndex);
    FMemory_Free((local_88.Ptr)->m_innerNonZeros);
    operator_delete__(((local_88.Ptr)->m_data).m_values);
    operator_delete__(((local_88.Ptr)->m_data).m_indices);
    ::operator_delete(local_88.Ptr,0x48);
  }
  if (local_b8 != 0) {
    plVar6 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar6 = local_90;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_e8 != 0) {
    plVar6 = local_d8;
    if (local_c0 != (longlong *)0x0) {
      plVar6 = local_c0;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (local_118._0_8_ != 0) {
    plVar6 = (longlong *)(local_118 + 0x10);
    if ((longlong *)local_118._40_8_ != (longlong *)0x0) {
      plVar6 = (longlong *)local_118._40_8_;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  return;
}

// ConstructVectorAreaMatrix @ 14c8d3530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FConformalMeshUVSolver::ConstructVectorAreaMatrix
          (FConformalMeshUVSolver *this,SparseMatrix<double,0,int> *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var8;
  ulonglong uVar9;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  ulong64 uVar14;
  FEdgeLoop *pFVar15;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var16;
  FEdgeLoop *pFVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  size_t sVar22;
  ulonglong uVar23;
  undefined1 auStackY_198 [32];
  scalar_sum_op<double,double> local_168 [8];
  vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_> local_160;
  undefined1 local_148 [4];
  int local_144;
  int local_140;
  uint local_13c;
  int local_138;
  int local_134;
  uint local_130;
  longlong local_128;
  FEdgeLoop *local_120;
  FConformalMeshUVSolver *local_118;
  FEdgeLoop *local_110;
  SparseMatrix<double,0,int> *local_108;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_100;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_f8 [2]
  ;
  undefined1 local_e8 [104];
  longlong *local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  bool local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_138 = *(int *)&this->field_0x68;
  local_e8._0_8_ = *(undefined8 *)&this->field_0x88;
  local_e8._8_8_ = (FEdgeLoop *)0x0;
  local_e8._16_8_ = 0;
  local_e8._24_8_ = (FEdgeSpan *)0x0;
  local_e8._32_4_ = 0;
  local_e8._36_4_ = 0;
  local_e8[0x28] = false;
  local_e8[0x29] = false;
  local_e8[0x2a] = false;
  local_e8._44_4_ = Compute;
  local_e8._48_4_ = ConvertToOpenSpan;
  local_e8._64_8_ = 0;
  local_80 = (longlong *)0x0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70._0_4_ = 0;
  local_70._4_4_ = 0;
  local_68 = false;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58._0_4_ = 0;
  local_58._4_4_ = 0;
  local_118 = this;
  local_108 = param_1;
  FMeshBoundaryLoops::Compute((FMeshBoundaryLoops *)local_e8);
  uVar5 = local_e8._16_4_;
  uVar9 = (ulonglong)(int)local_e8._16_4_;
  iVar18 = 0;
  pFVar17 = (FEdgeLoop *)(local_e8._8_8_ + uVar9 * 0x40);
  pFVar15 = (FEdgeLoop *)local_e8._8_8_;
  while( true ) {
    if ((int)uVar9 != uVar5) {
      local_148[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FEdgeLoop,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_148);
      uVar9 = local_e8._16_8_ & 0xffffffff;
    }
    if (pFVar15 == pFVar17) break;
    pTVar4 = &pFVar15->Vertices;
    pFVar15 = pFVar15 + 1;
    iVar18 = iVar18 + pTVar4->ArrayNum * 4;
  }
  local_160._Mypair._Myval2._Myend = (Triplet<double,int> *)0x0;
  local_160._Mypair._Myval2._Myfirst = (Triplet<double,int> *)0x0;
  local_160._Mypair._Myval2._Mylast = (Triplet<double,int> *)0x0;
  std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::reserve
            (&local_160,(longlong)iVar18);
  uVar9 = (ulonglong)(int)local_e8._16_4_;
  pFVar15 = (FEdgeLoop *)(local_e8._8_8_ + uVar9 * 0x40);
  local_130 = local_e8._16_4_;
  pFVar17 = (FEdgeLoop *)local_e8._8_8_;
  local_110 = pFVar15;
  do {
    local_120 = pFVar17;
    if (local_e8._16_4_ != (int)uVar9) {
      local_168[0] = (scalar_sum_op<double,double>)0x0;
      `TCheckedPointerIterator<UE::Geometry::FEdgeLoop,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_168);
    }
    if (pFVar17 == pFVar15) {
      Eigen::SparseMatrix<double,0,int>::resize
                (local_108,(longlong)(local_138 * 2),(longlong)(local_138 * 2));
      local_100 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                   )local_160._Mypair._Myval2._Mylast;
      local_f8[0] = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                     )local_160._Mypair._Myval2._Myfirst;
      Eigen::internal::
      set_from_triplets<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>,Eigen::SparseMatrix<double,0,int>,Eigen::internal::scalar_sum_op<double,double>_>
                (local_f8,&local_100,local_108,local_168[0]);
      std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
      ~vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>(&local_160);
      if (local_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data);
      }
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      if (local_e8._64_8_ != 0) {
        plVar12 = (longlong *)(local_e8 + 0x50);
        if (local_80 != (longlong *)0x0) {
          plVar12 = local_80;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      DestructItems<UE::Geometry::FEdgeSpan,int>((FEdgeSpan *)local_e8._24_8_,local_e8._32_4_);
      if ((FEdgeSpan *)local_e8._24_8_ != (FEdgeSpan *)0x0) {
        FMemory::Free((void *)local_e8._24_8_);
      }
      DestructItems<UE::Geometry::FEdgeLoop,int>((FEdgeLoop *)local_e8._8_8_,local_e8._16_4_);
      if ((FEdgeLoop *)local_e8._8_8_ != (FEdgeLoop *)0x0) {
        FMemory::Free((void *)local_e8._8_8_);
      }
      return;
    }
    local_134 = (pFVar17->Vertices).ArrayNum;
    local_13c = 0;
    if (0 < local_134) {
      local_128 = 0;
      do {
        lVar20 = local_128;
        uVar1 = local_13c;
        uVar13 = (int)(local_13c + 1) % local_134;
        uVar7 = 0;
        if ((int)uVar13 < (pFVar17->Vertices).ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar7 = *(uint *)((pFVar17->Vertices).AllocatorInstance.Data + (longlong)(int)uVar13 * 4);
        uVar13 = 0;
        if ((int)uVar1 < (pFVar17->Vertices).ArrayNum) {
          uVar13 = ~uVar1 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar1 = *(uint *)((pFVar17->Vertices).AllocatorInstance.Data + lVar20);
        uVar13 = 0;
        if ((int)uVar7 < *(int *)&this->field_0x78) {
          uVar13 = ~uVar7 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar18 = local_138;
        iVar2 = *(int *)(*(longlong *)&this->field_0x70 + (longlong)(int)uVar7 * 4);
        uVar7 = 0;
        if ((int)uVar1 < *(int *)&this->field_0x78) {
          uVar7 = ~uVar1 >> 0x1f;
        }
        iVar19 = local_138 + iVar2;
        local_144 = iVar19;
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        _Var16 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                  )local_160._Mypair._Myval2._Mylast;
        local_140 = *(int *)(*(longlong *)&this->field_0x70 + (longlong)(int)uVar1 * 4);
        iVar18 = local_140 + iVar18;
        if (local_160._Mypair._Myval2._Mylast == local_160._Mypair._Myval2._Myend) {
          lVar20 = (longlong)local_160._Mypair._Myval2._Mylast -
                   (longlong)local_160._Mypair._Myval2._Myfirst >> 4;
          if (lVar20 == 0xfffffffffffffff) goto LAB_14c8d3e5f;
          uVar9 = lVar20 + 1;
          uVar11 = (longlong)local_160._Mypair._Myval2._Myend -
                   (longlong)local_160._Mypair._Myval2._Myfirst >> 4;
          if (0xfffffffffffffff - (uVar11 >> 1) < uVar11) {
            uVar23 = 0xfffffffffffffff;
          }
          else {
            uVar11 = uVar11 + (uVar11 >> 1);
            uVar23 = uVar9;
            if (uVar9 <= uVar11) {
              uVar23 = uVar11;
            }
            if (0xfffffffffffffff < uVar23) goto LAB_14c8d3e65;
          }
          _Var8 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                   )std::_Allocate<16,std::_Default_allocate_traits>(uVar23 * 0x10);
          lVar20 = lVar20 * 0x10;
          ((Triplet<double,int> *)(lVar20 + (longlong)_Var8))->m_row = iVar2;
          *(int *)(lVar20 + 4 + (longlong)_Var8) = iVar18;
          *(undefined8 *)(lVar20 + 8 + (longlong)_Var8) = 0x3ff0000000000000;
          if (_Var16 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         )local_160._Mypair._Myval2._Mylast) {
            sVar22 = (longlong)local_160._Mypair._Myval2._Mylast -
                     (longlong)local_160._Mypair._Myval2._Myfirst;
            _Var10 = _Var8;
            _Var16 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_160._Mypair._Myval2._Myfirst;
          }
          else {
            memmove((void *)_Var8,local_160._Mypair._Myval2._Myfirst,
                    (longlong)_Var16 - (longlong)local_160._Mypair._Myval2._Myfirst);
            sVar22 = (longlong)local_160._Mypair._Myval2._Mylast - (longlong)_Var16;
            _Var10 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )(lVar20 + 0x10 + (longlong)_Var8);
          }
          memmove((void *)_Var10,(void *)_Var16,sVar22);
          if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )local_160._Mypair._Myval2._Myfirst !=
              (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )0x0) {
            uVar14 = (longlong)local_160._Mypair._Myval2._Myend -
                     (longlong)local_160._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
            _Var16 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_160._Mypair._Myval2._Myfirst;
            if (0xfff < uVar14) {
              _Var16 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         *)((longlong)local_160._Mypair._Myval2._Myfirst + -8);
              uVar14 = uVar14 + 0x27;
              if (0x1f < ((longlong)local_160._Mypair._Myval2._Myfirst - (longlong)_Var16) - 8U)
              goto LAB_14c8d3d6a;
            }
            ::operator_delete((void *)_Var16,uVar14);
          }
          local_160._Mypair._Myval2._Myend =
               (Triplet<double,int> *)((longlong)_Var8 + uVar23 * 0x10);
          _Var16 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                    )(uVar9 * 0x10 + (longlong)_Var8);
          iVar19 = local_144;
          local_160._Mypair._Myval2._Myfirst = (Triplet<double,int> *)_Var8;
        }
        else {
          (local_160._Mypair._Myval2._Mylast)->m_row = iVar2;
          *(int *)((longlong)local_160._Mypair._Myval2._Mylast + 4) = iVar18;
          *(double *)((longlong)local_160._Mypair._Myval2._Mylast + 8) = 1.0;
          _Var16 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                    )((longlong)local_160._Mypair._Myval2._Mylast + 0x10);
        }
        if (_Var16 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                       )local_160._Mypair._Myval2._Myend) {
          lVar20 = (longlong)_Var16 - (longlong)local_160._Mypair._Myval2._Myfirst >> 4;
          local_160._Mypair._Myval2._Mylast = (Triplet<double,int> *)_Var16;
          if (lVar20 == 0xfffffffffffffff) goto LAB_14c8d3e5f;
          uVar9 = lVar20 + 1;
          uVar11 = (longlong)local_160._Mypair._Myval2._Myend -
                   (longlong)local_160._Mypair._Myval2._Myfirst >> 4;
          if (0xfffffffffffffff - (uVar11 >> 1) < uVar11) {
            uVar23 = 0xfffffffffffffff;
          }
          else {
            uVar11 = uVar11 + (uVar11 >> 1);
            uVar23 = uVar9;
            if (uVar9 <= uVar11) {
              uVar23 = uVar11;
            }
            if (0xfffffffffffffff < uVar23) goto LAB_14c8d3e65;
          }
          _Var8 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                   )std::_Allocate<16,std::_Default_allocate_traits>(uVar23 * 0x10);
          lVar21 = lVar20 * 0x10;
          ((Triplet<double,int> *)(lVar21 + (longlong)_Var8))->m_row = local_140;
          *(int *)(lVar21 + 4 + (longlong)_Var8) = local_144;
          *(undefined8 *)(lVar21 + 8 + (longlong)_Var8) = 0xbff0000000000000;
          if (_Var16 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         )local_160._Mypair._Myval2._Mylast) {
            sVar22 = (longlong)local_160._Mypair._Myval2._Mylast -
                     (longlong)local_160._Mypair._Myval2._Myfirst;
            _Var10 = _Var8;
            _Var16 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_160._Mypair._Myval2._Myfirst;
          }
          else {
            memmove((void *)_Var8,local_160._Mypair._Myval2._Myfirst,
                    (longlong)_Var16 - (longlong)local_160._Mypair._Myval2._Myfirst);
            sVar22 = (longlong)local_160._Mypair._Myval2._Mylast - (longlong)_Var16;
            _Var10 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )((Triplet<double,int> *)((longlong)_Var8 + 0x10) + lVar20);
          }
          memmove((void *)_Var10,(void *)_Var16,sVar22);
          if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )local_160._Mypair._Myval2._Myfirst !=
              (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )0x0) {
            uVar14 = (longlong)local_160._Mypair._Myval2._Myend -
                     (longlong)local_160._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
            _Var16 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_160._Mypair._Myval2._Myfirst;
            if (0xfff < uVar14) {
              _Var16 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         *)((longlong)local_160._Mypair._Myval2._Myfirst + -8);
              uVar14 = uVar14 + 0x27;
              if (0x1f < ((longlong)local_160._Mypair._Myval2._Myfirst - (longlong)_Var16) - 8U)
              goto LAB_14c8d3d6a;
            }
            ::operator_delete((void *)_Var16,uVar14);
          }
          local_160._Mypair._Myval2._Myend =
               (Triplet<double,int> *)((longlong)_Var8 + uVar23 * 0x10);
          _Var16 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                    )(uVar9 * 0x10 + (longlong)_Var8);
          local_160._Mypair._Myval2._Myfirst = (Triplet<double,int> *)_Var8;
        }
        else {
          *(int *)_Var16 = local_140;
          *(int *)((longlong)_Var16 + 4) = iVar19;
          *(double *)((longlong)_Var16 + 8) = -1.0;
          _Var16 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                    )((longlong)_Var16 + 0x10);
        }
        if (_Var16 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                       )local_160._Mypair._Myval2._Myend) {
          lVar20 = (longlong)_Var16 - (longlong)local_160._Mypair._Myval2._Myfirst >> 4;
          local_160._Mypair._Myval2._Mylast = (Triplet<double,int> *)_Var16;
          if (lVar20 == 0xfffffffffffffff) goto LAB_14c8d3e5f;
          uVar9 = lVar20 + 1;
          uVar11 = (longlong)local_160._Mypair._Myval2._Myend -
                   (longlong)local_160._Mypair._Myval2._Myfirst >> 4;
          if (0xfffffffffffffff - (uVar11 >> 1) < uVar11) {
            uVar23 = 0xfffffffffffffff;
          }
          else {
            uVar11 = (uVar11 >> 1) + uVar11;
            uVar23 = uVar9;
            if (uVar9 <= uVar11) {
              uVar23 = uVar11;
            }
            if (0xfffffffffffffff < uVar23) goto LAB_14c8d3e65;
          }
          _Var8 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                   )std::_Allocate<16,std::_Default_allocate_traits>(uVar23 * 0x10);
          lVar21 = lVar20 * 0x10;
          ((Triplet<double,int> *)(lVar21 + (longlong)_Var8))->m_row = iVar18;
          *(int *)(lVar21 + 4 + (longlong)_Var8) = iVar2;
          *(undefined8 *)(lVar21 + 8 + (longlong)_Var8) = 0x3ff0000000000000;
          if (_Var16 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         )local_160._Mypair._Myval2._Mylast) {
            sVar22 = (longlong)local_160._Mypair._Myval2._Mylast -
                     (longlong)local_160._Mypair._Myval2._Myfirst;
            _Var10 = _Var8;
            _Var16 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_160._Mypair._Myval2._Myfirst;
          }
          else {
            memmove((void *)_Var8,local_160._Mypair._Myval2._Myfirst,
                    (longlong)_Var16 - (longlong)local_160._Mypair._Myval2._Myfirst);
            sVar22 = (longlong)local_160._Mypair._Myval2._Mylast - (longlong)_Var16;
            _Var10 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )((Triplet<double,int> *)((longlong)_Var8 + 0x10) + lVar20);
          }
          memmove((void *)_Var10,(void *)_Var16,sVar22);
          if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )local_160._Mypair._Myval2._Myfirst !=
              (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )0x0) {
            uVar14 = (longlong)local_160._Mypair._Myval2._Myend -
                     (longlong)local_160._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
            _Var16 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_160._Mypair._Myval2._Myfirst;
            if (0xfff < uVar14) {
              _Var16 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         *)((longlong)local_160._Mypair._Myval2._Myfirst + -8);
              uVar14 = uVar14 + 0x27;
              if (0x1f < ((longlong)local_160._Mypair._Myval2._Myfirst - (longlong)_Var16) - 8U)
              goto LAB_14c8d3d6a;
            }
            ::operator_delete((void *)_Var16,uVar14);
          }
          local_160._Mypair._Myval2._Myend =
               (Triplet<double,int> *)(uVar23 * 0x10 + (longlong)_Var8);
          _Var16 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                    )(uVar9 * 0x10 + (longlong)_Var8);
          local_160._Mypair._Myval2._Myfirst = (Triplet<double,int> *)_Var8;
        }
        else {
          *(int *)_Var16 = iVar18;
          *(int *)((longlong)_Var16 + 4) = iVar2;
          *(double *)((longlong)_Var16 + 8) = 1.0;
          _Var16 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                    )((longlong)_Var16 + 0x10);
        }
        if (_Var16 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                       )local_160._Mypair._Myval2._Myend) {
          lVar20 = (longlong)_Var16 - (longlong)local_160._Mypair._Myval2._Myfirst >> 4;
          local_160._Mypair._Myval2._Mylast = (Triplet<double,int> *)_Var16;
          if (lVar20 == 0xfffffffffffffff) {
LAB_14c8d3e5f:
                    /* WARNING: Subroutine does not return */
            std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
            _Xlength();
          }
          uVar9 = lVar20 + 1;
          uVar11 = (longlong)local_160._Mypair._Myval2._Myend -
                   (longlong)local_160._Mypair._Myval2._Myfirst >> 4;
          if (0xfffffffffffffff - (uVar11 >> 1) < uVar11) {
            uVar23 = 0xfffffffffffffff;
          }
          else {
            uVar11 = (uVar11 >> 1) + uVar11;
            uVar23 = uVar9;
            if (uVar9 <= uVar11) {
              uVar23 = uVar11;
            }
            if (0xfffffffffffffff < uVar23) {
LAB_14c8d3e65:
                    /* WARNING: Subroutine does not return */
              std::_Throw_bad_array_new_length();
            }
          }
          _Var8 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                   )std::_Allocate<16,std::_Default_allocate_traits>(uVar23 * 0x10);
          lVar21 = lVar20 * 0x10;
          ((Triplet<double,int> *)(lVar21 + (longlong)_Var8))->m_row = local_144;
          *(int *)(lVar21 + 4 + (longlong)_Var8) = local_140;
          *(undefined8 *)(lVar21 + 8 + (longlong)_Var8) = 0xbff0000000000000;
          if (_Var16 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         )local_160._Mypair._Myval2._Mylast) {
            sVar22 = (longlong)local_160._Mypair._Myval2._Mylast -
                     (longlong)local_160._Mypair._Myval2._Myfirst;
            _Var10 = _Var8;
            _Var16 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_160._Mypair._Myval2._Myfirst;
          }
          else {
            memmove((void *)_Var8,local_160._Mypair._Myval2._Myfirst,
                    (longlong)_Var16 - (longlong)local_160._Mypair._Myval2._Myfirst);
            sVar22 = (longlong)local_160._Mypair._Myval2._Mylast - (longlong)_Var16;
            _Var10 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )((Triplet<double,int> *)((longlong)_Var8 + 0x10) + lVar20);
          }
          memmove((void *)_Var10,(void *)_Var16,sVar22);
          if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )local_160._Mypair._Myval2._Myfirst !=
              (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )0x0) {
            uVar14 = (longlong)local_160._Mypair._Myval2._Myend -
                     (longlong)local_160._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
            _Var16 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_160._Mypair._Myval2._Myfirst;
            if (0xfff < uVar14) {
              _Var16 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         *)((longlong)local_160._Mypair._Myval2._Myfirst + -8);
              uVar14 = uVar14 + 0x27;
              if (0x1f < ((longlong)local_160._Mypair._Myval2._Myfirst - (longlong)_Var16) - 8U) {
LAB_14c8d3d6a:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)_Var16,uVar14);
          }
          local_160._Mypair._Myval2._Myend =
               (Triplet<double,int> *)(uVar23 * 0x10 + (longlong)_Var8);
          local_160._Mypair._Myval2._Mylast =
               (Triplet<double,int> *)(uVar9 * 0x10 + (longlong)_Var8);
          local_160._Mypair._Myval2._Myfirst = (Triplet<double,int> *)_Var8;
        }
        else {
          *(int *)_Var16 = local_144;
          *(int *)((longlong)_Var16 + 4) = local_140;
          *(double *)((longlong)_Var16 + 8) = -1.0;
          local_160._Mypair._Myval2._Mylast = (Triplet<double,int> *)((longlong)_Var16 + 0x10);
        }
        local_13c = local_13c + 1;
        local_128 = local_128 + 4;
        pFVar15 = local_110;
        this = local_118;
        pFVar17 = local_120;
      } while ((int)local_13c < local_134);
    }
    uVar9 = (ulonglong)local_130;
    pFVar17 = pFVar17 + 1;
  } while( true );
}

// ConstructWeightedVectorAreaMatrix @ 14c8d3e80

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FConformalMeshUVSolver::ConstructWeightedVectorAreaMatrix
          (FConformalMeshUVSolver *this,SparseMatrix<double,0,int> *param_1,double *param_2,
          double param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  double dVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint uVar7;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var8;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var9;
  ulonglong uVar10;
  ulong64 uVar11;
  uint uVar12;
  FRefCountVector *pFVar13;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  size_t sVar19;
  int iVar20;
  ulonglong uVar21;
  double dVar22;
  uint uVar23;
  uint uVar24;
  scalar_sum_op<double,double> local_res8;
  vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_> local_128;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  TArray<double,TSizedDefaultAllocator<32>_> local_100;
  IndexIterator local_f0;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_c8;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> local_c0;
  BaseIterator local_b8;
  IndexIterator local_a8;
  IndexIterator local_98 [6];
  
  iVar20 = *(int *)&this->field_0x68;
  local_128._Mypair._Myval2._Myfirst = (Triplet<double,int> *)0x0;
  local_128._Mypair._Myval2._Mylast = (Triplet<double,int> *)0x0;
  local_128._Mypair._Myval2._Myend = (Triplet<double,int> *)0x0;
  local_108 = iVar20;
  std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::reserve
            (&local_128,(longlong)(*(int *)(*(longlong *)&this->field_0x88 + 0x170) * 0xc));
  local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_100.ArrayNum = 0;
  local_100.ArrayMax = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum
            (&local_100,
             *(int *)(*(longlong *)&this->field_0x88 + 0x140) * 0x200 +
             *(int *)(*(longlong *)&this->field_0x88 + 0x144),Default);
  *param_2 = -1.0;
  lVar16 = *(longlong *)&this->field_0x88;
  pFVar13 = (FRefCountVector *)(lVar16 + 0x140);
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_b8,pFVar13,0,
             (pFVar13->RefCounts).CurBlock * 0x200 + *(int *)(lVar16 + 0x144));
  iVar18 = (pFVar13->RefCounts).CurBlock * 0x200 + *(int *)(lVar16 + 0x144);
  FRefCountVector::IndexIterator::IndexIterator(&local_a8,pFVar13,iVar18,iVar18);
  iVar18 = local_b8.Index;
  while (iVar18 != local_a8._8_4_) {
    uVar12 = local_b8.Index;
    dVar3 = FDynamicMesh3::GetTriArea(*(FDynamicMesh3 **)&this->field_0x88,uVar12);
    dVar22 = *param_2;
    if (*param_2 <= dVar3) {
      dVar22 = dVar3;
    }
    uVar23 = 0;
    if ((int)uVar12 < local_100.ArrayNum) {
      uVar23 = ~uVar12 >> 0x1f;
    }
    *param_2 = dVar22;
    if ((uVar23 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(double *)(local_100.AllocatorInstance.Data + (longlong)(int)uVar12 * 8) = dVar3;
    FRefCountVector::BaseIterator::goto_next(&local_b8);
    iVar18 = local_b8.Index;
  }
  lVar16 = *(longlong *)&this->field_0x88;
  pFVar13 = (FRefCountVector *)(lVar16 + 0x140);
  FRefCountVector::IndexIterator::IndexIterator
            (&local_f0,pFVar13,0,(pFVar13->RefCounts).CurBlock * 0x200 + *(int *)(lVar16 + 0x144));
  iVar18 = (pFVar13->RefCounts).CurBlock * 0x200 + *(int *)(lVar16 + 0x144);
  FRefCountVector::IndexIterator::IndexIterator(local_98,pFVar13,iVar18,iVar18);
  dVar3 = __real_3ff0000000000000;
  if (local_f0._8_4_ != local_98[0]._8_4_) {
    uVar12 = (uint)__xmm_80000000000000008000000000000000;
    uVar4 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    do {
      uVar5 = local_f0._8_4_;
      lVar16 = *(longlong *)
                (*(longlong *)(*(longlong *)&this->field_0x88 + 0x130) +
                (ulonglong)((uint)local_f0._8_4_ >> 9) * 8);
      local_d0 = *(undefined4 *)(lVar16 + 8 + (ulonglong)(local_f0._8_4_ & 0x1ff) * 0xc);
      local_d8 = *(undefined8 *)(lVar16 + (ulonglong)(local_f0._8_4_ & 0x1ff) * 0xc);
      uVar23 = 0;
      if ((int)local_f0._8_4_ < local_100.ArrayNum) {
        uVar23 = (uint)~local_f0._8_4_ >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_e0 = 0;
      dVar22 = *(double *)(local_100.AllocatorInstance.Data + (longlong)(int)uVar5 * 8);
      if (*(double *)(local_100.AllocatorInstance.Data + (longlong)(int)uVar5 * 8) <= param_3) {
        dVar22 = param_3;
      }
      local_104 = 1;
      dVar22 = dVar3 / (dVar22 / *param_2);
      do {
        uVar23 = *(uint *)((longlong)&local_d8 + local_e0 * 4);
        uVar24 = *(uint *)((longlong)&local_d8 +
                          (longlong)
                          (local_104 +
                          (local_104 / 3 + (local_104 >> 0x1f) +
                          (int)(((longlong)local_104 / 3 + ((longlong)local_104 >> 0x3f) &
                                0xffffffffU) >> 0x1f)) * -3) * 4);
        uVar7 = 0;
        if ((int)uVar24 < *(int *)&this->field_0x78) {
          uVar7 = ~uVar24 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar18 = *(int *)(*(longlong *)&this->field_0x70 + (longlong)(int)uVar24 * 4);
        uVar24 = 0;
        if ((int)uVar23 < *(int *)&this->field_0x78) {
          uVar24 = ~uVar23 >> 0x1f;
        }
        iVar15 = iVar20 + iVar18;
        local_10c = iVar15;
        if ((uVar24 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                  )local_128._Mypair._Myval2._Mylast;
        local_110 = *(int *)(*(longlong *)&this->field_0x70 + (longlong)(int)uVar23 * 4);
        iVar20 = local_110 + iVar20;
        if (local_128._Mypair._Myval2._Mylast == local_128._Mypair._Myval2._Myend) {
          lVar16 = (longlong)local_128._Mypair._Myval2._Mylast -
                   (longlong)local_128._Mypair._Myval2._Myfirst >> 4;
          if (lVar16 == 0xfffffffffffffff) goto LAB_14c8d485f;
          uVar1 = lVar16 + 1;
          uVar10 = (longlong)local_128._Mypair._Myval2._Myend -
                   (longlong)local_128._Mypair._Myval2._Myfirst >> 4;
          if (0xfffffffffffffff - (uVar10 >> 1) < uVar10) {
            uVar21 = 0xfffffffffffffff;
          }
          else {
            uVar10 = (uVar10 >> 1) + uVar10;
            uVar21 = uVar1;
            if (uVar1 <= uVar10) {
              uVar21 = uVar10;
            }
            if (0xfffffffffffffff < uVar21) goto LAB_14c8d4865;
          }
          _Var8 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                   )std::_Allocate<16,std::_Default_allocate_traits>(uVar21 * 0x10);
          lVar16 = lVar16 * 0x10;
          ((Triplet<double,int> *)(lVar16 + (longlong)_Var8))->m_row = iVar18;
          *(int *)(lVar16 + 4 + (longlong)_Var8) = iVar20;
          *(double *)(lVar16 + 8 + (longlong)_Var8) = dVar22;
          if (_Var14 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         )local_128._Mypair._Myval2._Mylast) {
            sVar19 = (longlong)local_128._Mypair._Myval2._Mylast -
                     (longlong)local_128._Mypair._Myval2._Myfirst;
            _Var9 = _Var8;
            _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_128._Mypair._Myval2._Myfirst;
          }
          else {
            memmove((void *)_Var8,local_128._Mypair._Myval2._Myfirst,
                    (longlong)_Var14 - (longlong)local_128._Mypair._Myval2._Myfirst);
            sVar19 = (longlong)local_128._Mypair._Myval2._Mylast - (longlong)_Var14;
            _Var9 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                     )(lVar16 + 0x10 + (longlong)_Var8);
          }
          memmove((void *)_Var9,(void *)_Var14,sVar19);
          if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )local_128._Mypair._Myval2._Myfirst !=
              (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )0x0) {
            uVar11 = (longlong)local_128._Mypair._Myval2._Myend -
                     (longlong)local_128._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
            _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_128._Mypair._Myval2._Myfirst;
            if (0xfff < uVar11) {
              _Var14 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         *)((longlong)local_128._Mypair._Myval2._Myfirst + -8);
              uVar11 = uVar11 + 0x27;
              if (0x1f < ((longlong)local_128._Mypair._Myval2._Myfirst - (longlong)_Var14) - 8U)
              goto LAB_14c8d47b1;
            }
            ::operator_delete((void *)_Var14,uVar11);
          }
          local_128._Mypair._Myval2._Myend =
               (Triplet<double,int> *)((longlong)_Var8 + uVar21 * 0x10);
          _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                    )(uVar1 * 0x10 + (longlong)_Var8);
          iVar15 = local_10c;
          local_128._Mypair._Myval2._Myfirst = (Triplet<double,int> *)_Var8;
        }
        else {
          (local_128._Mypair._Myval2._Mylast)->m_row = iVar18;
          *(int *)((longlong)local_128._Mypair._Myval2._Mylast + 4) = iVar20;
          *(double *)((longlong)local_128._Mypair._Myval2._Mylast + 8) = dVar22;
          _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                    )((longlong)local_128._Mypair._Myval2._Mylast + 0x10);
        }
        uVar23 = SUB84(dVar22,0) ^ uVar12;
        uVar24 = (uint)((ulonglong)dVar22 >> 0x20) ^ (uint)uVar4;
        if (_Var14 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                       )local_128._Mypair._Myval2._Myend) {
          lVar16 = (longlong)_Var14 - (longlong)local_128._Mypair._Myval2._Myfirst >> 4;
          local_128._Mypair._Myval2._Mylast = (Triplet<double,int> *)_Var14;
          if (lVar16 == 0xfffffffffffffff) goto LAB_14c8d485f;
          uVar1 = lVar16 + 1;
          uVar10 = (longlong)local_128._Mypair._Myval2._Myend -
                   (longlong)local_128._Mypair._Myval2._Myfirst >> 4;
          if (0xfffffffffffffff - (uVar10 >> 1) < uVar10) {
            uVar21 = 0xfffffffffffffff;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
            uVar21 = uVar1;
            if (uVar1 <= uVar10) {
              uVar21 = uVar10;
            }
            if (0xfffffffffffffff < uVar21) goto LAB_14c8d4865;
          }
          _Var8 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                   )std::_Allocate<16,std::_Default_allocate_traits>(uVar21 * 0x10);
          lVar17 = lVar16 * 0x10;
          ((Triplet<double,int> *)(lVar17 + (longlong)_Var8))->m_row = local_10c;
          *(int *)(lVar17 + 4 + (longlong)_Var8) = local_110;
          *(ulonglong *)(lVar17 + 8 + (longlong)_Var8) = CONCAT44(uVar24,uVar23);
          if (_Var14 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         )local_128._Mypair._Myval2._Mylast) {
            sVar19 = (longlong)local_128._Mypair._Myval2._Mylast -
                     (longlong)local_128._Mypair._Myval2._Myfirst;
            _Var9 = _Var8;
            _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_128._Mypair._Myval2._Myfirst;
          }
          else {
            memmove((void *)_Var8,local_128._Mypair._Myval2._Myfirst,
                    (longlong)_Var14 - (longlong)local_128._Mypair._Myval2._Myfirst);
            sVar19 = (longlong)local_128._Mypair._Myval2._Mylast - (longlong)_Var14;
            _Var9 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                     )((Triplet<double,int> *)((longlong)_Var8 + 0x10) + lVar16);
          }
          memmove((void *)_Var9,(void *)_Var14,sVar19);
          if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )local_128._Mypair._Myval2._Myfirst !=
              (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )0x0) {
            uVar11 = (longlong)local_128._Mypair._Myval2._Myend -
                     (longlong)local_128._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
            _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_128._Mypair._Myval2._Myfirst;
            if (0xfff < uVar11) {
              _Var14 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         *)((longlong)local_128._Mypair._Myval2._Myfirst + -8);
              uVar11 = uVar11 + 0x27;
              if (0x1f < ((longlong)local_128._Mypair._Myval2._Myfirst - (longlong)_Var14) - 8U)
              goto LAB_14c8d47b1;
            }
            ::operator_delete((void *)_Var14,uVar11);
          }
          local_128._Mypair._Myval2._Myend =
               (Triplet<double,int> *)(uVar21 * 0x10 + (longlong)_Var8);
          _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                    )(uVar1 * 0x10 + (longlong)_Var8);
          local_128._Mypair._Myval2._Myfirst = (Triplet<double,int> *)_Var8;
        }
        else {
          *(int *)_Var14 = iVar15;
          *(int *)((longlong)_Var14 + 4) = local_110;
          *(ulonglong *)((longlong)_Var14 + 8) = CONCAT44(uVar24,uVar23);
          _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                    )((longlong)_Var14 + 0x10);
        }
        if (_Var14 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                       )local_128._Mypair._Myval2._Myend) {
          lVar16 = (longlong)_Var14 - (longlong)local_128._Mypair._Myval2._Myfirst >> 4;
          local_128._Mypair._Myval2._Mylast = (Triplet<double,int> *)_Var14;
          if (lVar16 == 0xfffffffffffffff) goto LAB_14c8d485f;
          uVar1 = lVar16 + 1;
          uVar10 = (longlong)local_128._Mypair._Myval2._Myend -
                   (longlong)local_128._Mypair._Myval2._Myfirst >> 4;
          if (0xfffffffffffffff - (uVar10 >> 1) < uVar10) {
            uVar21 = 0xfffffffffffffff;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
            uVar21 = uVar1;
            if (uVar1 <= uVar10) {
              uVar21 = uVar10;
            }
            if (0xfffffffffffffff < uVar21) goto LAB_14c8d4865;
          }
          _Var8 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                   )std::_Allocate<16,std::_Default_allocate_traits>(uVar21 * 0x10);
          lVar17 = lVar16 * 0x10;
          ((Triplet<double,int> *)(lVar17 + (longlong)_Var8))->m_row = iVar20;
          *(int *)(lVar17 + 4 + (longlong)_Var8) = iVar18;
          *(double *)(lVar17 + 8 + (longlong)_Var8) = dVar22;
          if (_Var14 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         )local_128._Mypair._Myval2._Mylast) {
            sVar19 = (longlong)local_128._Mypair._Myval2._Mylast -
                     (longlong)local_128._Mypair._Myval2._Myfirst;
            _Var9 = _Var8;
            _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_128._Mypair._Myval2._Myfirst;
          }
          else {
            memmove((void *)_Var8,local_128._Mypair._Myval2._Myfirst,
                    (longlong)_Var14 - (longlong)local_128._Mypair._Myval2._Myfirst);
            sVar19 = (longlong)local_128._Mypair._Myval2._Mylast - (longlong)_Var14;
            _Var9 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                     )((Triplet<double,int> *)((longlong)_Var8 + 0x10) + lVar16);
          }
          memmove((void *)_Var9,(void *)_Var14,sVar19);
          if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )local_128._Mypair._Myval2._Myfirst !=
              (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )0x0) {
            uVar11 = (longlong)local_128._Mypair._Myval2._Myend -
                     (longlong)local_128._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
            _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_128._Mypair._Myval2._Myfirst;
            if (0xfff < uVar11) {
              _Var14 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         *)((longlong)local_128._Mypair._Myval2._Myfirst + -8);
              uVar11 = uVar11 + 0x27;
              if (0x1f < ((longlong)local_128._Mypair._Myval2._Myfirst - (longlong)_Var14) - 8U)
              goto LAB_14c8d47b1;
            }
            ::operator_delete((void *)_Var14,uVar11);
          }
          local_128._Mypair._Myval2._Myend =
               (Triplet<double,int> *)((longlong)_Var8 + uVar21 * 0x10);
          _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                    )(uVar1 * 0x10 + (longlong)_Var8);
          local_128._Mypair._Myval2._Myfirst = (Triplet<double,int> *)_Var8;
        }
        else {
          *(int *)_Var14 = iVar20;
          *(int *)((longlong)_Var14 + 4) = iVar18;
          *(double *)((longlong)_Var14 + 8) = dVar22;
          _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                    )((longlong)_Var14 + 0x10);
        }
        if (_Var14 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                       )local_128._Mypair._Myval2._Myend) {
          lVar16 = (longlong)_Var14 - (longlong)local_128._Mypair._Myval2._Myfirst >> 4;
          local_128._Mypair._Myval2._Mylast = (Triplet<double,int> *)_Var14;
          if (lVar16 == 0xfffffffffffffff) {
LAB_14c8d485f:
                    /* WARNING: Subroutine does not return */
            std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
            _Xlength();
          }
          uVar1 = lVar16 + 1;
          uVar10 = (longlong)local_128._Mypair._Myval2._Myend -
                   (longlong)local_128._Mypair._Myval2._Myfirst >> 4;
          if (0xfffffffffffffff - (uVar10 >> 1) < uVar10) {
            uVar21 = 0xfffffffffffffff;
          }
          else {
            uVar10 = (uVar10 >> 1) + uVar10;
            uVar21 = uVar1;
            if (uVar1 <= uVar10) {
              uVar21 = uVar10;
            }
            if (0xfffffffffffffff < uVar21) {
LAB_14c8d4865:
                    /* WARNING: Subroutine does not return */
              std::_Throw_bad_array_new_length();
            }
          }
          _Var8 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                   )std::_Allocate<16,std::_Default_allocate_traits>(uVar21 * 0x10);
          lVar17 = lVar16 * 0x10;
          ((Triplet<double,int> *)(lVar17 + (longlong)_Var8))->m_row = local_110;
          *(int *)(lVar17 + 4 + (longlong)_Var8) = local_10c;
          *(ulonglong *)(lVar17 + 8 + (longlong)_Var8) = CONCAT44(uVar24,uVar23);
          if (_Var14 == (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         )local_128._Mypair._Myval2._Mylast) {
            sVar19 = (longlong)local_128._Mypair._Myval2._Mylast -
                     (longlong)local_128._Mypair._Myval2._Myfirst;
            _Var9 = _Var8;
            _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_128._Mypair._Myval2._Myfirst;
          }
          else {
            memmove((void *)_Var8,local_128._Mypair._Myval2._Myfirst,
                    (longlong)_Var14 - (longlong)local_128._Mypair._Myval2._Myfirst);
            sVar19 = (longlong)local_128._Mypair._Myval2._Mylast - (longlong)_Var14;
            _Var9 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                     )((Triplet<double,int> *)((longlong)_Var8 + 0x10) + lVar16);
          }
          memmove((void *)_Var9,(void *)_Var14,sVar19);
          if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )local_128._Mypair._Myval2._Myfirst !=
              (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              )0x0) {
            uVar11 = (longlong)local_128._Mypair._Myval2._Myend -
                     (longlong)local_128._Mypair._Myval2._Myfirst & 0xfffffffffffffff0;
            _Var14 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                      )local_128._Mypair._Myval2._Myfirst;
            if (0xfff < uVar11) {
              _Var14 = *(_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                         *)((longlong)local_128._Mypair._Myval2._Myfirst + -8);
              uVar11 = uVar11 + 0x27;
              if (0x1f < ((longlong)local_128._Mypair._Myval2._Myfirst - (longlong)_Var14) - 8U) {
LAB_14c8d47b1:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
            }
            ::operator_delete((void *)_Var14,uVar11);
          }
          local_128._Mypair._Myval2._Myend =
               (Triplet<double,int> *)((longlong)_Var8 + uVar21 * 0x10);
          local_128._Mypair._Myval2._Mylast =
               (Triplet<double,int> *)(uVar1 * 0x10 + (longlong)_Var8);
          local_128._Mypair._Myval2._Myfirst = (Triplet<double,int> *)_Var8;
        }
        else {
          *(int *)_Var14 = local_110;
          *(int *)((longlong)_Var14 + 4) = local_10c;
          *(ulonglong *)((longlong)_Var14 + 8) = CONCAT44(uVar24,uVar23);
          local_128._Mypair._Myval2._Mylast = (Triplet<double,int> *)((longlong)_Var14 + 0x10);
        }
        local_104 = local_104 + 1;
        local_e0 = local_e0 + 1;
        iVar20 = local_108;
      } while (local_e0 < 3);
      local_f0._8_4_ = local_f0._8_4_ + 1;
      if ((int)local_f0._8_4_ < (int)local_f0._12_4_) {
        do {
          if ((*(short *)(*(longlong *)
                           (*(longlong *)(local_f0._0_8_ + 8) +
                           (ulonglong)((uint)local_f0._8_4_ >> 9) * 8) +
                         (ulonglong)(local_f0._8_4_ & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)
                          (*(longlong *)(local_f0._0_8_ + 8) +
                          (ulonglong)((uint)local_f0._8_4_ >> 9) * 8) +
                        (ulonglong)(local_f0._8_4_ & 0x1ff) * 2) != -1)) break;
          local_f0._8_4_ = local_f0._8_4_ + 1;
        } while ((int)local_f0._8_4_ < (int)local_f0._12_4_);
      }
    } while (local_f0._8_4_ != local_98[0]._8_4_);
  }
  Eigen::SparseMatrix<double,0,int>::resize(param_1,(longlong)(iVar20 * 2),(longlong)(iVar20 * 2));
  local_res8 = SUB81(this,0);
  local_c8 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
             local_128._Mypair._Myval2._Mylast;
  local_c0 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
             local_128._Mypair._Myval2._Myfirst;
  Eigen::internal::
  set_from_triplets<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>,Eigen::SparseMatrix<double,0,int>,Eigen::internal::scalar_sum_op<double,double>_>
            (&local_c0,&local_c8,param_1,local_res8);
  if (local_100.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.AllocatorInstance.Data);
  }
  std::vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>::
  ~vector<Eigen::Triplet<double,int>,std::allocator<Eigen::Triplet<double,int>_>_>(&local_128);
  return;
}

// ~FConformalMeshUVSolver @ 14c936890

void __thiscall
UE::Geometry::FConformalMeshUVSolver::~FConformalMeshUVSolver(FConformalMeshUVSolver *this)

{
  *(undefined ***)this = &___7FConformalMeshUVSolver_Geometry_UE__6B_;
  FConstrainedMeshUVSolver::~FConstrainedMeshUVSolver((FConstrainedMeshUVSolver *)this);
  return;
}

