// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// operator()<Eigen::SparseMatrix<double,0,int>_> @ 14c85f3c0

void __thiscall
Eigen::AMDOrdering<int>::operator()<Eigen::SparseMatrix<double,0,int>_>
          (AMDOrdering<int> *this,SparseMatrix<double,0,int> *param_1,
          PermutationMatrix<_1,_1,int> *param_2)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  SparseMatrix<double,0,int> local_c8;
  SparseMatrix<double,0,int> local_78;
  SparseMatrixBase<Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_const_>_> local_28 [8];
  SparseMatrix<double,0,int> *local_20;
  SparseMatrix<double,0,int> *local_18;
  
  uVar3 = 0;
  local_78._padding_._0_1_ = 0;
  local_78.m_data.m_indices = (int *)0x0;
  local_78.m_innerNonZeros = (int *)0x0;
  local_78.m_data.m_values = (double *)0x0;
  local_78.m_data.m_allocatedSize = 0;
  local_78.m_innerSize = 0;
  local_78.m_data.m_size = 0;
  FMemory_Free((void *)0x0);
  local_78.m_outerIndex = FMemory_Malloc(4,0x10);
  if (local_78.m_outerIndex == (int *)0x0) {
    ::operator_new(0xffffffffffffffff);
  }
  local_78.m_outerSize = 0;
  if (local_78.m_innerNonZeros != (int *)0x0) {
    FMemory_Free(local_78.m_innerNonZeros);
  }
  memset(local_78.m_outerIndex,0,local_78.m_outerSize * 4 + 4);
  local_c8._padding_._0_1_ = 0;
  local_c8.m_innerNonZeros = (int *)0x0;
  local_c8.m_data.m_values = (double *)0x0;
  local_c8.m_data.m_indices = (int *)0x0;
  local_c8.m_data.m_allocatedSize = 0;
  local_c8.m_innerSize = 0;
  local_c8.m_data.m_size = 0;
  FMemory_Free((void *)0x0);
  local_c8.m_outerIndex = FMemory_Malloc(4,0x10);
  if (local_c8.m_outerIndex == (int *)0x0) {
    ::operator_new(0xffffffffffffffff);
  }
  local_c8.m_outerSize = 0;
  if (local_c8.m_innerNonZeros != (int *)0x0) {
    FMemory_Free(local_c8.m_innerNonZeros);
  }
  memset(local_c8.m_outerIndex,0,local_c8.m_outerSize * 4 + 4);
  local_28[0].m_isRValue = false;
  local_20 = param_1;
  SparseMatrix<double,0,int>::operator=<Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_const_>_>
            (&local_c8,local_28);
  piVar2 = local_c8.m_innerNonZeros;
  uVar5 = uVar3;
  lVar7 = local_c8.m_innerSize;
  if (0 < local_c8.m_innerSize) {
    do {
      lVar1 = (longlong)*(int *)(uVar3 + (longlong)local_c8.m_outerIndex);
      if (piVar2 == (int *)0x0) {
        lVar6 = (longlong)*(int *)(uVar3 + 4 + (longlong)local_c8.m_outerIndex);
      }
      else {
        lVar6 = *(int *)(uVar3 + (longlong)piVar2) + lVar1;
      }
      if (lVar1 < lVar6) {
        memset(local_c8.m_data.m_values + lVar1,0,(lVar6 - lVar1) * 8);
        piVar2 = local_c8.m_innerNonZeros;
        lVar7 = local_c8.m_innerSize;
      }
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 4;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < lVar7);
  }
  local_20 = &local_c8;
  local_28[0].m_isRValue = false;
  local_18 = param_1;
  SparseMatrix<double,0,int>::
  operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::SparseMatrix<double,0,int>_const_,Eigen::SparseMatrix<double,0,int>_const_>_>
            (&local_78,
             (SparseMatrixBase<Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::SparseMatrix<double,0,int>_const_,Eigen::SparseMatrix<double,0,int>_const_>_>
              *)local_28);
  FMemory_Free(local_c8.m_outerIndex);
  FMemory_Free(local_c8.m_innerNonZeros);
  operator_delete__(local_c8.m_data.m_values);
  operator_delete__(local_c8.m_data.m_indices);
  internal::minimum_degree_ordering<double,int>(&local_78,param_2);
  FMemory_Free(local_78.m_outerIndex);
  FMemory_Free(local_78.m_innerNonZeros);
  operator_delete__(local_78.m_data.m_values);
  operator_delete__(local_78.m_data.m_indices);
  return;
}

