// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 1

// ConstructOperators @ 14c938400

void __thiscall
UE::Geometry::FBiHarmonicDiffusionMeshSmoother::ConstructOperators
          (FBiHarmonicDiffusionMeshSmoother *this,ELaplacianWeightScheme param_1,
          FDynamicMesh3 *param_2,bool *param_3,FVertexLinearization *param_4,
          SparseMatrix<double,0,int> *param_5,SparseMatrix<double,0,int> *param_6)

{
  double *pdVar1;
  bool bVar2;
  SparseMatrix<double,0,int> local_168;
  SparseMatrix<double,0,int> local_118;
  SparseMatrix<double,0,int> local_c8;
  Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>,Eigen::SparseMatrix<double,0,int>,2>
  local_78;
  SparseMatrixBase<Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_>_> local_30 [8];
  SparseMatrix<double,0,int> *local_28;
  
  *param_3 = true;
  local_118._padding_._0_1_ = 0;
  local_118.m_innerNonZeros = (int *)0x0;
  local_118.m_data.m_values = (double *)0x0;
  local_118.m_data.m_indices = (int *)0x0;
  local_118.m_data.m_allocatedSize = 0;
  local_118.m_innerSize = 0;
  local_118.m_data.m_size = 0;
  FMemory_Free((void *)0x0);
  local_118.m_outerIndex = FMemory_Malloc(4,0x10);
  if (local_118.m_outerIndex == (int *)0x0) {
    ::operator_new(0xffffffffffffffff);
  }
  local_118.m_outerSize = 0;
  if (local_118.m_innerNonZeros != (int *)0x0) {
    FMemory_Free(local_118.m_innerNonZeros);
  }
  memset(local_118.m_outerIndex,0,local_118.m_outerSize * 4 + 4);
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
  ConstructLaplacian(param_1,param_2,(FVertexLinearization *)&this->field_0x10,&local_118,&local_c8)
  ;
  bVar2 = bIsSymmetricLaplacian(param_1);
  pdVar1 = __real_bff0000000000000;
  local_168._padding_._0_1_ = 0;
  if (bVar2) {
    local_168.m_outerIndex = (int *)local_118.m_innerSize;
    local_168.m_innerNonZeros = (int *)local_118.m_outerSize;
    local_168.m_data.m_indices = (int *)&local_118;
    local_168.m_data.m_allocatedSize = (long64)&local_118;
    local_168.m_data.m_values = __real_bff0000000000000;
    local_168.m_outerSize = local_168.m_outerSize & 0xffffffffffffff00;
    Eigen::SparseMatrix<double,0,int>::
    operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>,Eigen::SparseMatrix<double,0,int>_>
              (param_5,(Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>,Eigen::SparseMatrix<double,0,int>,2>
                        *)&local_168);
    local_168.m_outerIndex = (int *)local_118.m_innerSize;
    local_168.m_innerNonZeros = (int *)local_118.m_outerSize;
    local_168.m_data.m_indices = (int *)&local_118;
    local_168.m_data.m_allocatedSize = (long64)&local_c8;
    local_168.m_data.m_values = pdVar1;
    local_168._padding_._0_1_ = 0;
    local_168.m_outerSize = local_168.m_outerSize & 0xffffffffffffff00;
    Eigen::SparseMatrix<double,0,int>::
    operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>,Eigen::SparseMatrix<double,0,int>_>
              (param_6,(Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>,Eigen::SparseMatrix<double,0,int>,2>
                        *)&local_168);
  }
  else {
    local_30[0].m_isRValue = false;
    local_28 = &local_118;
    local_168.m_innerSize = 0;
    local_168.m_outerIndex = (int *)0x0;
    local_168.m_innerNonZeros = (int *)0x0;
    local_168.m_data.m_values = (double *)0x0;
    local_168.m_data.m_indices = (int *)0x0;
    local_168.m_data.m_size = 0;
    local_168.m_outerSize = 0;
    local_168.m_data.m_allocatedSize = 0;
    Eigen::SparseMatrix<double,0,int>::
    operator=<Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_>_>(&local_168,local_30);
    pdVar1 = __real_bff0000000000000;
    local_78.m_lhs.m_lhs.m_rows.m_value = local_168.m_innerSize;
    local_78.m_lhs.m_lhs.m_cols.m_value = local_168.m_outerSize;
    local_78.m_lhs.m_rhs = &local_168;
    local_78.m_rhs = &local_118;
    local_78.m_lhs.m_lhs.m_functor.m_other = (double)__real_bff0000000000000;
    local_78._padding_._0_1_ = 0;
    local_78.m_lhs._padding_._0_1_ = 0;
    Eigen::SparseMatrix<double,0,int>::
    operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>,Eigen::SparseMatrix<double,0,int>_>
              (param_5,&local_78);
    local_78.m_lhs.m_lhs.m_rows.m_value = local_168.m_innerSize;
    local_78.m_lhs.m_lhs.m_cols.m_value = local_168.m_outerSize;
    local_78.m_lhs.m_rhs = &local_168;
    local_78.m_rhs = &local_c8;
    local_78.m_lhs.m_lhs.m_functor.m_other = (double)pdVar1;
    local_78._padding_._0_1_ = 0;
    local_78.m_lhs._padding_._0_1_ = 0;
    Eigen::SparseMatrix<double,0,int>::
    operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>,Eigen::SparseMatrix<double,0,int>_>
              (param_6,&local_78);
    FMemory_Free(local_168.m_outerIndex);
    FMemory_Free(local_168.m_innerNonZeros);
    operator_delete__(local_168.m_data.m_values);
    operator_delete__(local_168.m_data.m_indices);
  }
  Eigen::SparseMatrix<double,0,int>::makeCompressed(param_5);
  Eigen::SparseMatrix<double,0,int>::makeCompressed(param_6);
  FMemory_Free(local_c8.m_outerIndex);
  FMemory_Free(local_c8.m_innerNonZeros);
  operator_delete__(local_c8.m_data.m_values);
  operator_delete__(local_c8.m_data.m_indices);
  FMemory_Free(local_118.m_outerIndex);
  FMemory_Free(local_118.m_innerNonZeros);
  operator_delete__(local_118.m_data.m_values);
  operator_delete__(local_118.m_data.m_indices);
  return;
}

