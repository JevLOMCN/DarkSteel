// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 4

// ConstructSystemMatrices @ 14c8d1dd0

void __thiscall
UE::Geometry::FLeastSquaresConformalMeshUVSolver::ConstructSystemMatrices
          (FLeastSquaresConformalMeshUVSolver *this,SparseMatrix<double,0,int> *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  SparseMatrix<double,0,int> *pSVar5;
  int *piVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  uint uVar10;
  double *pdVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  longlong lVar22;
  int iVar23;
  uint *puVar24;
  int iVar25;
  int iVar26;
  int local_res8 [2];
  uint uStack_1f4;
  undefined8 uStack_1e0;
  uint uStack_1d0;
  int iStack_1cc;
  undefined4 uStack_1bc;
  OuterVectorInnerIterator local_1a8;
  OuterVectorInnerIterator local_158;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  SparseMatrix<double,0,int> *local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  SparseMatrix<double,0,int> *local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [8];
  SparseMatrix<double,0,int> *local_a0;
  longlong local_98;
  undefined8 local_90;
  long64 local_80;
  undefined1 local_78 [8];
  SparseMatrix<double,0,int> *local_70;
  longlong local_68;
  undefined8 local_60;
  long64 local_50;
  
  iVar4 = *(int *)&this->field_0x68;
  FConformalMeshUVSolver::ConstructConformalEnergyMatrix
            ((FConformalMeshUVSolver *)this,param_1,false,__real_3e45798ee0000000,
             (SparseMatrix<double,0,int> *)0x0,(SparseMatrix<double,0,int> *)0x0);
  iVar26 = *(int *)&this->field_0x30;
  puVar1 = &this->field_0x18;
  iVar23 = 0;
  puVar2 = &this->field_0x8;
  iVar20 = 0;
  uVar10 = 1;
  TStack_100.CurrentBitIndex = iVar20;
  if (iVar26 != 0) {
    puVar24 = *(uint **)&this->field_0x28;
    if (*(uint **)&this->field_0x28 == (uint *)0x0) {
      puVar24 = (uint *)puVar1;
    }
    uVar10 = *puVar24;
    iVar20 = 0;
    while (uVar10 == 0) {
      lVar12 = (longlong)iVar20;
      iVar23 = iVar23 + 0x20;
      iVar20 = iVar20 + 1;
      uVar10 = 1;
      TStack_100.CurrentBitIndex = iVar26;
      if ((int)(iVar26 + -1 + (iVar26 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14c8d1eb0;
      uVar10 = puVar24[lVar12 + 1];
    }
    uVar10 = -uVar10 & uVar10;
    uVar3 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    TStack_100.CurrentBitIndex = iVar23 + -1 + (int)lVar12;
    if (iVar26 < TStack_100.CurrentBitIndex) {
      TStack_100.CurrentBitIndex = iVar26;
    }
  }
LAB_14c8d1eb0:
  uStack_1f4 = *(uint *)&this->field_0x30;
  uVar19 = uStack_1f4 & 0xffffffe0;
  iVar25 = (int)uStack_1f4 >> 5;
  uStack_1e0 = CONCAT44(uVar10,iVar20);
  TStack_100._28_4_ = TStack_100.CurrentBitIndex;
  TStack_100.BaseBitIndex = iVar23;
  TStack_100._padding_ = uStack_1e0;
  uStack_e0 = CONCAT44(uStack_1bc,*(int *)&this->field_0x10 - *(int *)&this->field_0x3c);
  TStack_100.UnvisitedBitMask = 0xffffffff;
  local_108 = (longlong *)puVar2;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uStack_1f4 < 0) || (iVar26 < (int)uStack_1f4)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = *(uint *)&this->field_0x30;
  if (uStack_1f4 != uVar10) {
    puVar21 = *(undefined1 **)&this->field_0x28;
    if (*(undefined1 **)&this->field_0x28 == (undefined1 *)0x0) {
      puVar21 = puVar1;
    }
    uVar18 = -1 << ((byte)uStack_1f4 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar25 * 4);
    while (uVar18 == 0) {
      uVar19 = uVar19 + 0x20;
      lVar12 = (longlong)iVar25;
      iVar25 = iVar25 + 1;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_14c8d1feb;
      uVar18 = *(uint *)(puVar21 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uStack_1f4 = (int)lVar12 + -1 + uVar19;
    if ((int)uVar10 < (int)uStack_1f4) {
LAB_14c8d1feb:
      uStack_1f4 = uVar10;
    }
  }
  do {
    plVar8 = local_108;
    if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
      `TSparseArray<TSparseSetElement<TTuple<int,UE::Solvers::FUVConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_100.CurrentBitIndex == uStack_1f4) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (plVar8 == (longlong *)puVar2)) {
      Eigen::SparseMatrix<double,0,int>::makeCompressed(param_1);
      return;
    }
    local_1a8.m_end = param_1->m_outerSize;
    local_1a8.m_eval =
         (unary_evaluator<Eigen::Block<Eigen::SparseMatrix<double,0,int>,1,_1,0>,Eigen::internal::IteratorBased,double>
          *)&local_d8;
    local_d0 = 0;
    local_a8[0] = 0;
    local_a0 = param_1;
    local_90 = 0;
    iVar26 = *(int *)((longlong)TStack_100.CurrentBitIndex * 0x38 + 0xc + *plVar8);
    lVar12 = (longlong)iVar26;
    local_80 = local_1a8.m_end;
    local_98 = lVar12;
    local_d8 = param_1;
    local_c8 = local_a8;
    local_1a8.m_it.m_values = (param_1->m_data).m_values;
    local_1a8.m_it.m_indices = (param_1->m_data).m_indices;
    local_1a8.m_it.m_id = (long64)*param_1->m_outerIndex;
    local_1a8.m_outerPos = 0;
    local_1a8.m_it.m_outer.m_value = 0;
    if (param_1->m_innerNonZeros == (int *)0x0) {
      local_1a8.m_it.m_end = (long64)param_1->m_outerIndex[1];
    }
    else {
      local_1a8.m_it.m_end = *param_1->m_innerNonZeros + local_1a8.m_it.m_id;
    }
    local_res8[0] = iVar26;
    local_1a8.m_innerIndex = lVar12;
    if (local_1a8.m_it.m_id < local_1a8.m_it.m_end) {
      do {
        lVar13 = local_1a8.m_it.m_id + 1;
        if (lVar12 <= local_1a8.m_it.m_indices[local_1a8.m_it.m_id]) break;
        local_1a8.m_it.m_id = lVar13;
      } while (lVar13 < local_1a8.m_it.m_end);
      if ((local_1a8.m_it.m_end <= local_1a8.m_it.m_id) ||
         (lVar13 = local_1a8.m_outerPos, pdVar11 = local_1a8.m_it.m_values,
         lVar16 = local_1a8.m_it.m_id, local_1a8.m_it.m_indices[local_1a8.m_it.m_id] != lVar12))
      goto LAB_14c8d2129;
    }
    else {
LAB_14c8d2129:
      Eigen::internal::
      unary_evaluator<Eigen::Block<Eigen::SparseMatrix<double,0,int>,1,-1,0>,Eigen::internal::IteratorBased,double>
      ::OuterVectorInnerIterator::operator++(&local_1a8);
      lVar13 = local_1a8.m_outerPos;
      pdVar11 = local_1a8.m_it.m_values;
      lVar16 = local_1a8.m_it.m_id;
    }
    while (lVar13 < local_1a8.m_end) {
      pdVar11[lVar16] = 0.0;
      lVar17 = lVar13;
      do {
        do {
          lVar13 = lVar17 + 1;
          if (local_1a8.m_end <= lVar13) goto LAB_14c8d21ba;
          pSVar5 = *(SparseMatrix<double,0,int> **)&(local_1a8.m_eval)->m_argImpl;
          pdVar11 = (pSVar5->m_data).m_values;
          piVar6 = (pSVar5->m_data).m_indices;
          lVar16 = (longlong)pSVar5->m_outerIndex[lVar13];
          if (pSVar5->m_innerNonZeros == (int *)0x0) {
            lVar22 = (longlong)pSVar5->m_outerIndex[lVar17 + 2];
          }
          else {
            lVar22 = pSVar5->m_innerNonZeros[lVar13] + lVar16;
          }
          lVar17 = lVar13;
        } while (lVar22 <= lVar16);
        do {
          lVar14 = lVar16 + 1;
          if (local_1a8.m_innerIndex <= piVar6[lVar16]) break;
          lVar16 = lVar14;
        } while (lVar14 < lVar22);
      } while ((lVar22 <= lVar16) || (piVar6[lVar16] != local_1a8.m_innerIndex));
    }
LAB_14c8d21ba:
    local_158.m_end = param_1->m_outerSize;
    local_78[0] = 0;
    local_158.m_eval =
         (unary_evaluator<Eigen::Block<Eigen::SparseMatrix<double,0,int>,1,_1,0>,Eigen::internal::IteratorBased,double>
          *)&local_c0;
    local_b8 = 0;
    iVar26 = iVar4 + iVar26;
    local_70 = param_1;
    local_60 = 0;
    local_50 = local_158.m_end;
    local_c0 = param_1;
    local_b0 = local_78;
    lVar13 = (longlong)iVar26;
    local_68 = lVar13;
    local_158.m_it.m_values = (param_1->m_data).m_values;
    local_158.m_it.m_indices = (param_1->m_data).m_indices;
    local_158.m_outerPos = 0;
    local_158.m_it.m_id = (long64)*param_1->m_outerIndex;
    local_158.m_it.m_outer.m_value = 0;
    if (param_1->m_innerNonZeros == (int *)0x0) {
      local_158.m_it.m_end = (long64)param_1->m_outerIndex[1];
    }
    else {
      local_158.m_it.m_end = *param_1->m_innerNonZeros + local_158.m_it.m_id;
    }
    local_158.m_innerIndex = lVar13;
    if (local_158.m_it.m_id < local_158.m_it.m_end) {
      do {
        lVar16 = local_158.m_it.m_id + 1;
        if (lVar13 <= local_158.m_it.m_indices[local_158.m_it.m_id]) break;
        local_158.m_it.m_id = lVar16;
      } while (lVar16 < local_158.m_it.m_end);
      if ((local_158.m_it.m_end <= local_158.m_it.m_id) ||
         (lVar16 = local_158.m_outerPos, pdVar11 = local_158.m_it.m_values,
         lVar17 = local_158.m_it.m_id, local_158.m_it.m_indices[local_158.m_it.m_id] != lVar13))
      goto LAB_14c8d2299;
    }
    else {
LAB_14c8d2299:
      Eigen::internal::
      unary_evaluator<Eigen::Block<Eigen::SparseMatrix<double,0,int>,1,-1,0>,Eigen::internal::IteratorBased,double>
      ::OuterVectorInnerIterator::operator++(&local_158);
      lVar16 = local_158.m_outerPos;
      pdVar11 = local_158.m_it.m_values;
      lVar17 = local_158.m_it.m_id;
    }
    while (lVar16 < local_158.m_end) {
      pdVar11[lVar17] = 0.0;
      lVar22 = lVar16;
      do {
        do {
          lVar16 = lVar22 + 1;
          if (local_158.m_end <= lVar16) goto LAB_14c8d232d;
          pSVar5 = *(SparseMatrix<double,0,int> **)&(local_158.m_eval)->m_argImpl;
          pdVar11 = (pSVar5->m_data).m_values;
          piVar6 = (pSVar5->m_data).m_indices;
          lVar17 = (longlong)pSVar5->m_outerIndex[lVar16];
          if (pSVar5->m_innerNonZeros == (int *)0x0) {
            lVar14 = (longlong)pSVar5->m_outerIndex[lVar22 + 2];
          }
          else {
            lVar14 = pSVar5->m_innerNonZeros[lVar16] + lVar17;
          }
          lVar22 = lVar16;
        } while (lVar14 <= lVar17);
        do {
          lVar15 = lVar17 + 1;
          if (local_158.m_innerIndex <= piVar6[lVar17]) break;
          lVar17 = lVar15;
        } while (lVar15 < lVar14);
      } while ((lVar14 <= lVar17) || (piVar6[lVar17] != local_158.m_innerIndex));
    }
LAB_14c8d232d:
    iVar23 = param_1->m_outerIndex[lVar12];
    lVar16 = (longlong)iVar23;
    if (param_1->m_innerNonZeros == (int *)0x0) {
      iVar23 = param_1->m_outerIndex[lVar12 + 1];
    }
    else {
      iVar23 = param_1->m_innerNonZeros[lVar12] + iVar23;
    }
    lVar17 = (longlong)iVar23;
    if (lVar16 < lVar17) {
      lVar22 = lVar17 + -1;
      if (lVar16 < lVar22) {
        lVar14 = lVar16;
        do {
          lVar15 = lVar14 + lVar22 >> 1;
          lVar16 = lVar15 + 1;
          if (local_res8[0] <= (param_1->m_data).m_indices[lVar15]) {
            lVar16 = lVar14;
            lVar22 = lVar15;
          }
          lVar14 = lVar16;
        } while (lVar16 < lVar22);
      }
      if ((lVar17 <= lVar16) || ((param_1->m_data).m_indices[lVar16] != lVar12)) goto LAB_14c8d23b9;
      pdVar11 = (param_1->m_data).m_values + lVar16;
    }
    else {
LAB_14c8d23b9:
      pdVar11 = Eigen::SparseMatrix<double,0,int>::insert(param_1,lVar12,lVar12);
    }
    *pdVar11 = 1.0;
    iVar23 = param_1->m_outerIndex[lVar13];
    lVar12 = (longlong)iVar23;
    if (param_1->m_innerNonZeros == (int *)0x0) {
      iVar23 = param_1->m_outerIndex[lVar13 + 1];
    }
    else {
      iVar23 = param_1->m_innerNonZeros[lVar13] + iVar23;
    }
    lVar16 = (longlong)iVar23;
    if (lVar12 < lVar16) {
      lVar17 = lVar16 + -1;
      if (lVar12 < lVar17) {
        lVar22 = lVar12;
        do {
          lVar14 = lVar22 + lVar17 >> 1;
          lVar12 = lVar14 + 1;
          if (iVar26 <= (param_1->m_data).m_indices[lVar14]) {
            lVar12 = lVar22;
            lVar17 = lVar14;
          }
          lVar22 = lVar12;
        } while (lVar12 < lVar17);
      }
      if ((lVar16 <= lVar12) || ((param_1->m_data).m_indices[lVar12] != lVar13)) goto LAB_14c8d2450;
      pdVar11 = (param_1->m_data).m_values + lVar12;
    }
    else {
LAB_14c8d2450:
      pdVar11 = Eigen::SparseMatrix<double,0,int>::insert(param_1,lVar13,lVar13);
    }
    *pdVar11 = 1.0;
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  } while( true );
}

// SolveParameterization @ 14c919b60

bool __thiscall
UE::Geometry::FLeastSquaresConformalMeshUVSolver::SolveParameterization
          (FLeastSquaresConformalMeshUVSolver *this,SparseMatrix<double,0,int> *param_1,
          EMatrixSolverType param_2,Matrix<double,_1,1,0,_1,1> *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  longlong *plVar8;
  char cVar9;
  bool bVar10;
  undefined1 uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  DenseStorage<double,_1,_1,1,0> local_d0;
  longlong *local_c0;
  undefined1 *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  double local_80;
  longlong local_78;
  longlong *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar4 = *(int *)&this->field_0x68;
  ConstructMatrixSolver((EMatrixSolverType *)&local_c0);
  (**(code **)(*local_c0 + 0x28))(local_c0,param_1,0);
  cVar9 = (**(code **)(*local_c0 + 0x38))(local_c0);
  if (cVar9 == '\0') {
    uVar11 = 0;
  }
  else {
    local_78 = (longlong)(iVar4 * 2);
    local_d0.m_data = (double *)0x0;
    local_d0.m_rows = 0;
    Eigen::DenseStorage<double,-1,-1,1,0>::resize(&local_d0,local_78,local_78,1);
    local_80 = 0.0;
    std::fill_n<double_*,__int64,double>(local_d0.m_data,local_d0.m_rows,&local_80);
    iVar5 = *(int *)&this->field_0x30;
    puVar1 = &this->field_0x18;
    iStack_b0 = 0;
    puVar2 = &this->field_0x8;
    uStack_ac = 1;
    local_98 = 0;
    iStack_9c = 0;
    if (iVar5 != 0) {
      puVar16 = *(uint **)&this->field_0x28;
      if (*(uint **)&this->field_0x28 == (uint *)0x0) {
        puVar16 = (uint *)puVar1;
      }
      uVar13 = *puVar16;
      while (uVar13 == 0) {
        lVar12 = (longlong)iStack_b0;
        local_98 = local_98 + 0x20;
        iStack_b0 = iStack_b0 + 1;
        iStack_9c = iVar5;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14c919c9e;
        uVar13 = puVar16[lVar12 + 1];
      }
      uStack_ac = -uVar13 & uVar13;
      uVar3 = (ulonglong)uStack_ac * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_88 = (int)lVar12;
      iStack_9c = local_98 + -1 + local_88;
      if (iVar5 < iStack_9c) {
        iStack_9c = iVar5;
      }
    }
LAB_14c919c9e:
    iStack_90 = *(int *)&this->field_0x10 - *(int *)&this->field_0x3c;
    uVar13 = *(uint *)&this->field_0x30;
    uStack_a0 = 0xffffffff;
    uVar18 = uVar13 & 0xffffffe0;
    TStack_68._padding_ = CONCAT44(uStack_ac,iStack_b0);
    TStack_68.CurrentBitIndex = iStack_9c;
    TStack_68.UnvisitedBitMask = 0xffffffff;
    iVar14 = (int)uVar13 >> 5;
    TStack_68._28_4_ = iStack_9c;
    TStack_68.BaseBitIndex = local_98;
    uStack_48 = CONCAT44(uStack_8c,iStack_90);
    local_b8 = puVar2;
    local_a8 = puVar1;
    iStack_94 = iStack_9c;
    local_70 = (longlong *)puVar2;
    TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      uVar11 = (*pcVar7)();
      return (bool)uVar11;
    }
    uVar6 = *(uint *)&this->field_0x30;
    if (uVar13 != uVar6) {
      puVar15 = *(undefined1 **)&this->field_0x28;
      if (*(undefined1 **)&this->field_0x28 == (undefined1 *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
      while (uVar13 == 0) {
        lVar12 = (longlong)iVar14;
        uVar18 = uVar18 + 0x20;
        iVar14 = iVar14 + 1;
        uVar13 = uVar6;
        if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14c919db0;
        uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      uVar13 = (int)lVar12 + -1 + uVar18;
      if ((int)uVar6 < (int)uVar13) {
        uVar13 = uVar6;
      }
    }
LAB_14c919db0:
    while( true ) {
      plVar8 = local_70;
      if ((int)local_70[1] - *(int *)((longlong)local_70 + 0x34) != (int)uStack_48) {
        `TSparseArray<TSparseSetElement<TTuple<int,UE::Solvers::FUVConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_68.CurrentBitIndex == uVar13) &&
          (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (plVar8 == (longlong *)puVar2)) break;
      lVar12 = *plVar8;
      lVar17 = (longlong)TStack_68.CurrentBitIndex * 0x38;
      iVar5 = *(int *)(lVar17 + 0xc + lVar12);
      local_d0.m_data[iVar5] = *(double *)(lVar17 + 0x10 + lVar12);
      local_d0.m_data[iVar5 + iVar4] = *(double *)(lVar17 + 0x18 + lVar12);
      TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    }
    Eigen::DenseStorage<double,-1,-1,1,0>::resize
              ((DenseStorage<double,_1,_1,1,0> *)param_3,local_78,local_78,1);
    (**(code **)(*local_c0 + 0x20))(local_c0,&local_d0,param_3);
    uVar11 = (**(code **)(*local_c0 + 0x38))(local_c0);
    FMemory_Free(local_d0.m_data);
  }
  if (local_c0 != (longlong *)0x0) {
    (**(code **)*local_c0)(local_c0,1);
  }
  return (bool)uVar11;
}

// SolveUVs @ 14c91a6a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FLeastSquaresConformalMeshUVSolver::SolveUVs
          (FLeastSquaresConformalMeshUVSolver *this,FDynamicMesh3 *param_1,
          TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TVector2<double> TVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  void *local_a8;
  undefined8 uStack_a0;
  SparseMatrix<double,0,int> local_98;
  
  local_98._padding_._0_1_ = 0;
  local_98.m_innerNonZeros = (int *)0x0;
  local_98.m_data.m_values = (double *)0x0;
  local_98.m_data.m_indices = (int *)0x0;
  local_98.m_data.m_allocatedSize = 0;
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
  ConstructSystemMatrices(this,&local_98);
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  bVar7 = SolveParameterization(this,&local_98,LU,(Matrix<double,_1,1,0,_1,1> *)&local_a8);
  if (!bVar7) {
    bVar7 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8826420370400607857>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\MeshUVSolver.cpp"
                       ,399,"bSolveOK");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    bVar7 = SolveParameterization(this,&local_98,QR,(Matrix<double,_1,1,0,_1,1> *)&local_a8);
  }
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::SetNum
            (param_2,*(int *)(*(longlong *)&this->field_0x88 + 0x20) * 0x200 +
                     *(int *)(*(longlong *)&this->field_0x88 + 0x24),Default);
  if (bVar7 == false) {
    bVar9 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8826420370400607849>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\MeshUVSolver.cpp"
                       ,0x197,"bSolveOK");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    uVar12 = 0;
    if (0 < *(int *)&this->field_0x68) {
      lVar13 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar12 < *(int *)&this->field_0x68) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        TVar6.field0_0x0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
        uVar10 = *(uint *)(lVar13 + *(longlong *)&this->field_0x60);
        uVar11 = 0;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 4;
        ((TVector2<double>_u_0 *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10))
        ->_s_0 = (TVector2<double>_u_0_s_0)TVar6.field0_0x0;
      } while ((int)uVar12 < *(int *)&this->field_0x68);
    }
  }
  else {
    iVar3 = *(int *)&this->field_0x68;
    uVar12 = 0;
    if (0 < iVar3) {
      lVar13 = 0;
      lVar14 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar12 < *(int *)&this->field_0x68) {
          uVar10 = ~uVar12 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        uVar1 = *(undefined8 *)(lVar13 + (longlong)local_a8);
        uVar10 = *(uint *)(lVar14 + *(longlong *)&this->field_0x60);
        uVar2 = *(undefined8 *)(lVar13 + (longlong)iVar3 * 8 + (longlong)local_a8);
        uVar11 = 0;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar11 = ~uVar10 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          uVar8 = (*pcVar5)();
          return (bool)uVar8;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 4;
        lVar13 = lVar13 + 8;
        *(undefined8 *)(pFVar4 + (longlong)(int)uVar10 * 0x10) = uVar1;
        *(undefined8 *)(pFVar4 + (longlong)(int)uVar10 * 0x10 + 8) = uVar2;
      } while ((int)uVar12 < *(int *)&this->field_0x68);
    }
  }
  FMemory_Free(local_a8);
  FMemory_Free(local_98.m_outerIndex);
  FMemory_Free(local_98.m_innerNonZeros);
  operator_delete__(local_98.m_data.m_values);
  operator_delete__(local_98.m_data.m_indices);
  return bVar7;
}

// ~FLeastSquaresConformalMeshUVSolver @ 14c9368b0

void __thiscall
UE::Geometry::FLeastSquaresConformalMeshUVSolver::~FLeastSquaresConformalMeshUVSolver
          (FLeastSquaresConformalMeshUVSolver *this)

{
  *(undefined ***)this = &___7FConformalMeshUVSolver_Geometry_UE__6B_;
  FConstrainedMeshUVSolver::~FConstrainedMeshUVSolver((FConstrainedMeshUVSolver *)this);
  return;
}

