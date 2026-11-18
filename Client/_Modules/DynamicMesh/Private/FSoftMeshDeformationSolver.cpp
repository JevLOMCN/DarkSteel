// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 14

// FSoftMeshDeformationSolver @ 14c897d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSoftMeshDeformationSolver * __thiscall
UE::Geometry::FSoftMeshDeformationSolver::FSoftMeshDeformationSolver
          (FSoftMeshDeformationSolver *this,FDynamicMesh3 *param_1)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  long64 lVar4;
  long64 lVar5;
  int *piVar6;
  double *pdVar7;
  int *piVar8;
  long64 lVar9;
  long64 lVar10;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var11;
  IMatrixSolverBase *pIVar12;
  SparseMatrix<double,0,int> *pSVar13;
  TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
  TVar14;
  FConstrainedSolver *this_00;
  _Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_> _Var15;
  undefined1 auStackY_278 [32];
  scalar_sum_op<double,double> local_248;
  TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
  local_240;
  SparseMatrix<double,0,int> local_238;
  Transpose<Eigen::SparseMatrix<double,0,int>_> local_1e8;
  SparseMatrix<double,1,int> local_1d8;
  SparseMatrix<double,0,int> local_188;
  SparseMatrix<double,1,int> local_138;
  FEigenSparseMatrixAssembler local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_278;
  _Var15 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
           0x0;
  plVar1 = &(this->VtxLinearization)._padding_;
  *(undefined8 *)&this->ConstraintMap = 0;
  *(undefined8 *)&(this->ConstraintMap).field_0x8 = 0;
  *(undefined8 *)&(this->ConstraintMap).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FSoftMeshDeformationSolver_Geometry_UE__6B_;
  piVar3 = (int *)((longlong)&(this->VtxLinearization)._padding_ + 4);
  *(undefined4 *)&(this->ConstraintMap).field_0x28 = 0;
  *(undefined4 *)&(this->ConstraintMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstraintMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConstraintMap).field_0x34 = 0;
  *(undefined8 *)&(this->ConstraintMap).field_0x40 = 0;
  *(undefined4 *)&(this->ConstraintMap).field_0x48 = 0;
  this->bConstraintPositionsDirty = true;
  this->bConstraintWeightsDirty = true;
  (this->VtxLinearization)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->VtxLinearization)._padding_ + 4) = 0;
  (this->VtxLinearization).NumBndryVerts = 0;
  (this->ConstrainedSolver).Ptr = (FConstrainedSolver *)0x0;
  this->LaplacianScale = 1.0;
  *plVar1 = 0;
  *piVar3 = 0;
  *(undefined4 *)&(this->VtxLinearization)._padding_ = 0;
  *(undefined4 *)&(this->VtxLinearization)._padding_ = 0;
  if (*piVar3 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)plVar1,0,piVar3);
  }
  FElementLinearization::Populate<UE::Geometry::FRefCountVector::IndexEnumerable>
            ((FElementLinearization *)&this->VtxLinearization,
             (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed,(param_1->VertexRefCounts).UsedCount,
             (IndexEnumerable)&param_1->VertexRefCounts);
  FVertexLinearization::RemapBoundaryVerts<UE::Geometry::FDynamicMesh3>
            (&this->VtxLinearization,param_1);
  iVar2 = (int)(this->VtxLinearization)._padding_;
  FEigenSparseMatrixAssembler::FEigenSparseMatrixAssembler(&local_e8,iVar2,iVar2);
  MeshDeformation::ConstructFullCotangentLaplacian<double>
            (param_1,&this->VtxLinearization,(TSparseMatrixAssembler<double> *)&local_e8,
             ClampedMagnitude,VoronoiArea);
  local_238._padding_._0_1_ = 0;
  local_238.m_innerNonZeros = (int *)0x0;
  local_238.m_data.m_values = (double *)0x0;
  local_238.m_data.m_indices = (int *)0x0;
  local_238.m_data.m_allocatedSize = 0;
  local_238.m_innerSize = 0;
  local_238.m_data.m_size = 0;
  FMemory_Free((void *)0x0);
  local_238.m_outerIndex = FMemory_Malloc(4,0x10);
  if (local_238.m_outerIndex == (int *)0x0) {
    ::operator_new(0xffffffffffffffff);
  }
  local_238.m_outerSize = 0;
  if (local_238.m_innerNonZeros != (int *)0x0) {
    FMemory_Free(local_238.m_innerNonZeros);
  }
  memset(local_238.m_outerIndex,0,local_238.m_outerSize * 4 + 4);
  local_240.Ptr = (SparseMatrix<double,0,int> *)local_e8.EntryTriplets._Mypair._Myval2._Mylast;
  local_1e8._padding_ = (longlong)local_e8.EntryTriplets._Mypair._Myval2._Myfirst;
  Eigen::internal::
  set_from_triplets<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>,Eigen::SparseMatrix<double,0,int>,Eigen::internal::scalar_sum_op<double,double>_>
            ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              *)&local_1e8,
             (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
              *)&local_240,local_e8.Matrix.Ptr,local_248);
  Eigen::SparseMatrix<double,0,int>::makeCompressed(local_e8.Matrix.Ptr);
  piVar3 = (local_e8.Matrix.Ptr)->m_outerIndex;
  lVar4 = (local_e8.Matrix.Ptr)->m_innerSize;
  (local_e8.Matrix.Ptr)->m_outerIndex = local_238.m_outerIndex;
  lVar5 = (local_e8.Matrix.Ptr)->m_outerSize;
  (local_e8.Matrix.Ptr)->m_innerSize = local_238.m_innerSize;
  piVar6 = (local_e8.Matrix.Ptr)->m_innerNonZeros;
  (local_e8.Matrix.Ptr)->m_outerSize = local_238.m_outerSize;
  pdVar7 = ((local_e8.Matrix.Ptr)->m_data).m_values;
  (local_e8.Matrix.Ptr)->m_innerNonZeros = local_238.m_innerNonZeros;
  piVar8 = ((local_e8.Matrix.Ptr)->m_data).m_indices;
  ((local_e8.Matrix.Ptr)->m_data).m_values = local_238.m_data.m_values;
  lVar9 = ((local_e8.Matrix.Ptr)->m_data).m_size;
  ((local_e8.Matrix.Ptr)->m_data).m_indices = local_238.m_data.m_indices;
  lVar10 = ((local_e8.Matrix.Ptr)->m_data).m_allocatedSize;
  ((local_e8.Matrix.Ptr)->m_data).m_size = local_238.m_data.m_size;
  ((local_e8.Matrix.Ptr)->m_data).m_allocatedSize = local_238.m_data.m_allocatedSize;
  local_238.m_outerSize = lVar5;
  local_238.m_innerSize = lVar4;
  local_238.m_outerIndex = piVar3;
  local_238.m_innerNonZeros = piVar6;
  local_238.m_data.m_values = pdVar7;
  local_238.m_data.m_indices = piVar8;
  local_238.m_data.m_size = lVar9;
  local_238.m_data.m_allocatedSize = lVar10;
  pSVar13 = ::operator_new(0x48);
  TVar14.Ptr = (SparseMatrix<double,0,int> *)_Var15;
  if (pSVar13 != (SparseMatrix<double,0,int> *)0x0) {
    TVar14.Ptr = Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>
                           (pSVar13,local_238.m_innerSize,local_238.m_outerSize);
  }
  local_1e8.m_matrix = &local_238;
  local_1e8._padding_ = local_1e8._padding_ & 0xffffffffffffff00;
  local_240.Ptr = TVar14.Ptr;
  Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>
            (&local_188,local_238.m_outerSize,local_238.m_outerSize);
  local_1d8._padding_._0_1_ = 0;
  local_1d8.m_innerSize = 0;
  local_1d8.m_outerIndex = (int *)0x0;
  local_1d8.m_data.m_indices = (int *)0x0;
  local_1d8.m_data.m_size = 0;
  local_1d8.m_outerSize = 0;
  local_1d8.m_innerNonZeros = (int *)0x0;
  local_1d8.m_data.m_values = (double *)0x0;
  local_1d8.m_data.m_allocatedSize = 0;
  Eigen::SparseMatrix<double,1,int>::operator=<Eigen::SparseMatrix<double,0,int>_>
            (&local_1d8,(SparseMatrixBase<Eigen::SparseMatrix<double,0,int>_> *)&local_238);
  Eigen::SparseMatrix<double,1,int>::SparseMatrix<double,1,int>
            (&local_138,local_238.m_outerSize,local_238.m_outerSize);
  Eigen::internal::
  conservative_sparse_sparse_product_impl<Eigen::SparseMatrix<double,1,int>,Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_>,Eigen::SparseMatrix<double,1,int>_>
            (&local_1d8,&local_1e8,&local_138,false);
  Eigen::SparseMatrix<double,0,int>::operator=<Eigen::SparseMatrix<double,1,int>_>
            (&local_188,(SparseMatrixBase<Eigen::SparseMatrix<double,1,int>_> *)&local_138);
  FMemory_Free(local_138.m_outerIndex);
  FMemory_Free(local_138.m_innerNonZeros);
  operator_delete__(local_138.m_data.m_values);
  operator_delete__(local_138.m_data.m_indices);
  FMemory_Free(local_1d8.m_outerIndex);
  FMemory_Free(local_1d8.m_innerNonZeros);
  operator_delete__(local_1d8.m_data.m_values);
  operator_delete__(local_1d8.m_data.m_indices);
  piVar3 = *(int **)((longlong)TVar14.Ptr + 0x18);
  piVar6 = *(int **)((longlong)TVar14.Ptr + 0x20);
  pdVar7 = ((CompressedStorage<double,int> *)((longlong)TVar14.Ptr + 0x28))->m_values;
  pSVar13 = ((TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
              *)((longlong)TVar14.Ptr + 0x30))->Ptr;
  *(int **)((longlong)TVar14.Ptr + 0x18) = local_188.m_outerIndex;
  *(long64 *)((longlong)TVar14.Ptr + 0x10) = local_188.m_innerSize;
  *(long64 *)((longlong)TVar14.Ptr + 8) = local_188.m_outerSize;
  *(int **)((longlong)TVar14.Ptr + 0x20) = local_188.m_innerNonZeros;
  ((CompressedStorage<double,int> *)((longlong)TVar14.Ptr + 0x28))->m_values =
       local_188.m_data.m_values;
  ((TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
    *)((longlong)TVar14.Ptr + 0x30))->Ptr = (SparseMatrix<double,0,int> *)local_188.m_data.m_indices
  ;
  (TVar14.Ptr + 0x38)->_padding_ = local_188.m_data.m_size;
  *(long64 *)((longlong)TVar14.Ptr + 0x40) = local_188.m_data.m_allocatedSize;
  FMemory_Free(piVar3);
  FMemory_Free(piVar6);
  operator_delete__(pdVar7);
  operator_delete__(pSVar13);
  this_00 = ::operator_new(0xd8);
  if (this_00 != (FConstrainedSolver *)0x0) {
    _Var15 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
             FConstrainedSolver::FConstrainedSolver(this_00,&local_240,LU);
    TVar14.Ptr = local_240.Ptr;
  }
  _Var11 = (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
           (this->ConstrainedSolver).Ptr;
  if ((_Var11 != _Var15) &&
     ((this->ConstrainedSolver).Ptr = (FConstrainedSolver *)_Var15,
     _Var11 != (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>
                )0x0)) {
    pIVar12 = ((TUniquePtr<UE::Geometry::IMatrixSolverBase,TDefaultDelete<UE::Geometry::IMatrixSolverBase>_>
                *)((longlong)_Var11 + 0xd0))->Ptr;
    if (pIVar12 != (IMatrixSolverBase *)0x0) {
      (**(code **)*pIVar12)(pIVar12,1);
    }
    FMemory_Free(*(int **)((longlong)_Var11 + 0x98));
    FMemory_Free(*(int **)((longlong)_Var11 + 0xa0));
    operator_delete__(((CompressedStorage<double,int> *)((longlong)_Var11 + 0xa8))->m_values);
    operator_delete__(*(int **)((longlong)_Var11 + 0xb0));
    FMemory_Free(*(int **)((longlong)_Var11 + 0x50));
    FMemory_Free(*(int **)((longlong)_Var11 + 0x58));
    operator_delete__(((CompressedStorage<double,int> *)((longlong)_Var11 + 0x60))->m_values);
    operator_delete__(*(int **)((longlong)_Var11 + 0x68));
    pSVar13 = ((TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
                *)((longlong)_Var11 + 0x30))->Ptr;
    if (pSVar13 != (SparseMatrix<double,0,int> *)0x0) {
      FMemory_Free(pSVar13->m_outerIndex);
      FMemory_Free(pSVar13->m_innerNonZeros);
      operator_delete__((pSVar13->m_data).m_values);
      operator_delete__((pSVar13->m_data).m_indices);
      ::operator_delete(pSVar13,0x48);
    }
    if (*(int **)((longlong)_Var11 + 0x20) != (int *)0x0) {
      FMemory::Free(*(int **)((longlong)_Var11 + 0x20));
    }
    if (*(void **)((longlong)_Var11 + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)_Var11 + 0x10));
    }
    if (*(void **)_Var11 != (void *)0x0) {
      FMemory::Free(*(void **)_Var11);
    }
    ::operator_delete((void *)_Var11,0xd8);
  }
  if ((_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)
      TVar14.Ptr !=
      (_Vector_iterator<std::_Vector_val<std::_Simple_types<Eigen::Triplet<double,int>_>_>_>)0x0) {
    FMemory_Free(*(int **)((longlong)TVar14.Ptr + 0x18));
    FMemory_Free(*(int **)((longlong)TVar14.Ptr + 0x20));
    operator_delete__(((CompressedStorage<double,int> *)((longlong)TVar14.Ptr + 0x28))->m_values);
    operator_delete__(((TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
                        *)((longlong)TVar14.Ptr + 0x30))->Ptr);
    ::operator_delete(TVar14.Ptr,0x48);
  }
  FMemory_Free(local_238.m_outerIndex);
  FMemory_Free(local_238.m_innerNonZeros);
  operator_delete__(local_238.m_data.m_values);
  operator_delete__(local_238.m_data.m_indices);
  FEigenSparseMatrixAssembler::~FEigenSparseMatrixAssembler(&local_e8);
  return this;
}

// ~FSoftMeshDeformationSolver @ 14c89a650

void __thiscall
UE::Geometry::FSoftMeshDeformationSolver::~FSoftMeshDeformationSolver
          (FSoftMeshDeformationSolver *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FSoftMeshDeformationSolver_Geometry_UE__6B_;
  TDefaultDelete<UE::Geometry::FConstrainedSolver>::operator()
            ((TDefaultDelete<UE::Geometry::FConstrainedSolver> *)&this->ConstrainedSolver,
             (this->ConstrainedSolver).Ptr);
  pvVar1 = (void *)(this->VtxLinearization)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->VtxLinearization)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->ConstraintMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConstraintMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Solvers::FPositionConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Solvers::FPositionConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Solvers::FPositionConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConstraintMap);
  this->_padding_ = (longlong)&___7IConstrainedMeshSolver_Solvers_UE__6B_;
  return;
}

// AddConstraint @ 14c8b70b0

void __thiscall
UE::Geometry::FSoftMeshDeformationSolver::AddConstraint
          (FSoftMeshDeformationSolver *this,int param_1,double param_2,TVector<double> *param_3,
          bool param_4)

{
  code *pcVar1;
  bool bVar2;
  int local_res8 [2];
  FPositionConstraint local_48;
  
  bVar2 = FElementLinearization::IsValidId((FElementLinearization *)&this->VtxLinearization,param_1)
  ;
  if (bVar2) {
    local_res8[0] =
         FElementLinearization::GetIndex((FElementLinearization *)&this->VtxLinearization,param_1);
    local_48.Position.field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
    local_48.Position.field0_0x0._s_0.Y = (param_3->field0_0x0)._s_0.Y;
    local_48.Position.field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    local_48.bPostFix = param_4;
    local_48.ElementID = param_1;
    local_48.ConstraintIndex = local_res8[0];
    local_48.Weight = param_2;
    TMapBase<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
    ::Emplace<int_const_&,UE::Solvers::FPositionConstraint_const_&>
              ((TMapBase<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
                *)&this->ConstraintMap,local_res8,&local_48);
    this->bConstraintPositionsDirty = true;
    this->bConstraintWeightsDirty = true;
  }
  else {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_7716163460299488917>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\ConstrainedMeshDeformationSolver.cpp"
                       ,0x16b,"VtxLinearization.IsValidId(VtxId)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ClearConstraintPositions @ 14c8c6d60

void __thiscall
UE::Geometry::FSoftMeshDeformationSolver::ClearConstraintPositions(FSoftMeshDeformationSolver *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\ConstrainedMeshDeformationSolver.h"
                     ,0xf1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ClearConstraintWeights @ 14c8c6e70

void __thiscall
UE::Geometry::FSoftMeshDeformationSolver::ClearConstraintWeights(FSoftMeshDeformationSolver *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\ConstrainedMeshDeformationSolver.h"
                     ,0xf0,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ClearConstraints @ 14c8c70d0

void __thiscall
UE::Geometry::FSoftMeshDeformationSolver::ClearConstraints(FSoftMeshDeformationSolver *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->ConstraintMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,UE::Solvers::FPositionConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,UE::Solvers::FPositionConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>,FDefaultSetAllocator>
                      *)&this->ConstraintMap);
  }
  puVar1 = &(this->ConstraintMap).field_0xc;
  *(undefined4 *)&(this->ConstraintMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&this->ConstraintMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ConstraintMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConstraintMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ConstraintMap).field_0x2c;
  *(undefined4 *)&(this->ConstraintMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ConstraintMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ConstraintMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ConstraintMap).field_0x48 = 1;
    TSet<TTuple<int,UE::Solvers::FPositionConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,UE::Solvers::FPositionConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>,FDefaultSetAllocator>
              *)&this->ConstraintMap);
  }
  this->bConstraintPositionsDirty = true;
  this->bConstraintWeightsDirty = true;
  return;
}

// Deform @ 14c8d7420

bool __thiscall
UE::Geometry::FSoftMeshDeformationSolver::Deform
          (FSoftMeshDeformationSolver *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  return false;
}

// GetLaplacianScale @ 14c8f4960

double __thiscall
UE::Geometry::FSoftMeshDeformationSolver::GetLaplacianScale
          (FSoftMeshDeformationSolver *this,int param_1)

{
  return this->LaplacianScale;
}

// HasLaplacianScale @ 14c8fa330

bool __thiscall
UE::Geometry::FSoftMeshDeformationSolver::HasLaplacianScale(FSoftMeshDeformationSolver *this)

{
  if (__real_3ff0000000000000 != this->LaplacianScale) {
    return true;
  }
  return false;
}

// IsConstrained @ 14c901e70

bool __thiscall
UE::Geometry::FSoftMeshDeformationSolver::IsConstrained
          (FSoftMeshDeformationSolver *this,int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  bVar1 = FElementLinearization::IsValidId((FElementLinearization *)&this->VtxLinearization,param_1)
  ;
  if (!bVar1) {
    return false;
  }
  uVar2 = FElementLinearization::GetIndex((FElementLinearization *)&this->VtxLinearization,param_1);
  if (*(int *)&(this->ConstraintMap).field_0x8 != *(int *)&(this->ConstraintMap).field_0x34) {
    puVar4 = *(undefined1 **)&(this->ConstraintMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->ConstraintMap).field_0x38;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(*(int *)&(this->ConstraintMap).field_0x48 - 1U & uVar2) *
                              4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)((longlong)iVar3 * 0x40 + *(longlong *)&this->ConstraintMap) == uVar2)
        goto LAB_14c901efb;
        iVar3 = *(int *)((longlong)iVar3 * 0x40 + 0x38 + *(longlong *)&this->ConstraintMap);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14c901efb:
  return iVar3 != -1;
}

// UpdateConstraintPosition @ 14c9216c0

bool __thiscall
UE::Geometry::FSoftMeshDeformationSolver::UpdateConstraintPosition
          (FSoftMeshDeformationSolver *this,int param_1,TVector<double> *param_2,bool param_3)

{
  code *pcVar1;
  double dVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  uint *puVar8;
  atomic<unsigned_char> *paVar9;
  uint *puVar10;
  undefined1 *puVar11;
  int iVar12;
  
  bVar3 = FElementLinearization::IsValidId((FElementLinearization *)&this->VtxLinearization,param_1)
  ;
  if (bVar3) {
    uVar5 = FElementLinearization::GetIndex
                      ((FElementLinearization *)&this->VtxLinearization,param_1);
    if (*(int *)&(this->ConstraintMap).field_0x8 != *(int *)&(this->ConstraintMap).field_0x34) {
      puVar11 = *(undefined1 **)&(this->ConstraintMap).field_0x40;
      if (puVar11 == (undefined1 *)0x0) {
        puVar11 = &(this->ConstraintMap).field_0x38;
      }
      uVar6 = *(uint *)(puVar11 +
                       (ulonglong)(*(int *)&(this->ConstraintMap).field_0x48 - 1U & uVar5) * 4);
      if (uVar6 != 0xffffffff) {
        do {
          puVar10 = (uint *)((longlong)(int)uVar6 * 0x40 + *(longlong *)&this->ConstraintMap);
          if (*puVar10 == uVar5) {
            puVar8 = puVar10 + 2;
            if (puVar10 == (uint *)0x0) {
              puVar8 = (uint *)0x0;
            }
            if (puVar8 != (uint *)0x0) {
              dVar2 = (param_2->field0_0x0)._s_0.Y;
              *(double *)(puVar8 + 2) = (param_2->field0_0x0)._s_0.X;
              *(double *)(puVar8 + 4) = dVar2;
              *(double *)(puVar8 + 6) = (param_2->field0_0x0)._s_0.Z;
              *(bool *)(puVar8 + 8) = param_3;
              this->bConstraintPositionsDirty = true;
              return true;
            }
            break;
          }
          uVar6 = puVar10[0xe];
        } while (uVar6 != 0xffffffff);
      }
    }
    pcVar7 = "Found != nullptr";
    iVar12 = 0x182;
    paVar9 = &bGEnsureHasExecuted<_7716163460299488894>;
  }
  else {
    pcVar7 = "VtxLinearization.IsValidId(VtxId)";
    iVar12 = 0x17e;
    paVar9 = &bGEnsureHasExecuted<_7716163460299488898>;
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (paVar9,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\ConstrainedMeshDeformationSolver.cpp"
                     ,iVar12,pcVar7);
  if (!bVar3) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar4 = (*pcVar1)();
  return (bool)uVar4;
}

// UpdateConstraintWeight @ 14c921a40

bool __thiscall
UE::Geometry::FSoftMeshDeformationSolver::UpdateConstraintWeight
          (FSoftMeshDeformationSolver *this,int param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint *puVar7;
  atomic<unsigned_char> *paVar8;
  uint *puVar9;
  undefined1 *puVar10;
  int iVar11;
  
  bVar2 = FElementLinearization::IsValidId((FElementLinearization *)&this->VtxLinearization,param_1)
  ;
  if (bVar2) {
    uVar4 = FElementLinearization::GetIndex
                      ((FElementLinearization *)&this->VtxLinearization,param_1);
    if (*(int *)&(this->ConstraintMap).field_0x8 != *(int *)&(this->ConstraintMap).field_0x34) {
      puVar10 = *(undefined1 **)&(this->ConstraintMap).field_0x40;
      if (puVar10 == (undefined1 *)0x0) {
        puVar10 = &(this->ConstraintMap).field_0x38;
      }
      uVar5 = *(uint *)(puVar10 +
                       (ulonglong)(*(int *)&(this->ConstraintMap).field_0x48 - 1U & uVar4) * 4);
      if (uVar5 != 0xffffffff) {
        do {
          puVar9 = (uint *)((longlong)(int)uVar5 * 0x40 + *(longlong *)&this->ConstraintMap);
          if (*puVar9 == uVar4) {
            puVar7 = puVar9 + 2;
            if (puVar9 == (uint *)0x0) {
              puVar7 = (uint *)0x0;
            }
            if (puVar7 != (uint *)0x0) {
              *(double *)(puVar7 + 10) = param_2;
              this->bConstraintWeightsDirty = true;
              return true;
            }
            break;
          }
          uVar5 = puVar9[0xe];
        } while (uVar5 != 0xffffffff);
      }
    }
    pcVar6 = "Found != nullptr";
    iVar11 = 0x193;
    paVar8 = &bGEnsureHasExecuted<_7716163460299488877>;
  }
  else {
    pcVar6 = "VtxLinearization.IsValidId(VtxId)";
    iVar11 = 399;
    paVar8 = &bGEnsureHasExecuted<_7716163460299488881>;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (paVar8,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\ConstrainedMeshDeformationSolver.cpp"
                     ,iVar11,pcVar6);
  if (!bVar2) {
    return false;
  }
  pcVar1 = (code *)swi(3);
  uVar3 = (*pcVar1)();
  return (bool)uVar3;
}

// UpdateLaplacianScale @ 14c922550

void __thiscall
UE::Geometry::FSoftMeshDeformationSolver::UpdateLaplacianScale
          (FSoftMeshDeformationSolver *this,double param_1)

{
  this->LaplacianScale = param_1;
  return;
}

// UpdateSolverConstraints @ 14c9238e0

void __thiscall
UE::Geometry::FSoftMeshDeformationSolver::UpdateSolverConstraints(FSoftMeshDeformationSolver *this)

{
  if (this->bConstraintWeightsDirty != false) {
    FConstrainedSolver::SetConstraintWeights((this->ConstrainedSolver).Ptr,&this->ConstraintMap);
    this->bConstraintWeightsDirty = false;
  }
  if (this->bConstraintPositionsDirty != false) {
    FConstrainedSolver::SetContraintPositions((this->ConstrainedSolver).Ptr,&this->ConstraintMap);
    this->bConstraintPositionsDirty = false;
  }
  return;
}

