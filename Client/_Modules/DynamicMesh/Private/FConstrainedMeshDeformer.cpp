// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 4

// FConstrainedMeshDeformer<UE::Geometry::FDynamicGraph3<double>_> @ 14c85cfc0

FConstrainedMeshDeformer * __thiscall
UE::Geometry::FConstrainedMeshDeformer::
FConstrainedMeshDeformer<UE::Geometry::FDynamicGraph3<double>_>
          (FConstrainedMeshDeformer *this,FDynamicGraph3<double> *param_1)

{
  FSOAPositions *this_00;
  FSOAPositions *pFVar1;
  SparseMatrix<double,0,int> *pSVar2;
  undefined8 uVar3;
  longlong lVar4;
  FSOAPositions *pFVar5;
  int iVar6;
  assign_op<double,double> local_res8 [8];
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_res18 [2];
  evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> local_b8;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>,0>
  local_a0;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_80;
  SparseMatrix<double,0,int> *local_60;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_58;
  
  FConstrainedMeshDeformationSolver::
  FConstrainedMeshDeformationSolver<UE::Geometry::FDynamicGraph3<double>_>
            ((FConstrainedMeshDeformationSolver *)this,param_1,LU);
  this_00 = &this->LaplacianVectors;
  this->_padding_ = (longlong)&___7FConstrainedMeshDeformer_Geometry_UE__6B_;
  FSOAPositions::FSOAPositions(this_00,(int)this->_padding_);
  pFVar1 = &this->OriginalInteriorPositions;
  iVar6 = 0;
  *(undefined8 *)pFVar1 = 0;
  *(undefined8 *)&(this->OriginalInteriorPositions).field_0x8 = 0;
  *(undefined8 *)&(this->OriginalInteriorPositions).field_0x10 = 0;
  *(undefined8 *)&(this->OriginalInteriorPositions).field_0x18 = 0;
  *(undefined8 *)&(this->OriginalInteriorPositions).field_0x20 = 0;
  *(undefined8 *)&(this->OriginalInteriorPositions).field_0x28 = 0;
  FConstrainedMeshDeformationSolver::
  ExtractInteriorVertexPositions<UE::Geometry::FDynamicGraph3<double>_>
            ((FConstrainedMeshDeformationSolver *)this,param_1,pFVar1);
  pSVar2 = *(SparseMatrix<double,0,int> **)(this->_padding_ + 0x30);
  do {
    pFVar5 = pFVar1;
    if (iVar6 != 0) {
      lVar4 = 0x10;
      if (iVar6 != 1) {
        lVar4 = 0x20;
      }
      pFVar5 = (FSOAPositions *)(&pFVar1->field_0x0 + lVar4);
    }
    local_58._padding_ = (longlong)*(int *)&pFVar5->field_0x8;
    if (*(int *)&pFVar5->field_0x8 < 1) {
      local_58._padding_ = 0;
      local_58._padding_ = 0;
    }
    else {
      local_58._padding_ = *(longlong *)pFVar5;
      local_a0.m_dst =
           (evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> *)
           local_58._padding_;
      local_a0.m_src = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)local_58._padding_;
    }
    local_58._padding_ = (longlong)local_a0.m_functor;
    pFVar5 = this_00;
    if (iVar6 != 0) {
      lVar4 = 0x10;
      if (iVar6 != 1) {
        lVar4 = 0x20;
      }
      pFVar5 = (FSOAPositions *)(&this_00->field_0x0 + lVar4);
    }
    local_80._padding_ = (longlong)*(int *)&pFVar5->field_0x8;
    if (*(int *)&pFVar5->field_0x8 < 1) {
      local_80._padding_ = 0;
      local_80._padding_ = 0;
    }
    else {
      local_80._padding_ = *(longlong *)pFVar5;
    }
    lVar4 = pSVar2->m_innerSize;
    local_b8._0_8_ = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)0x0;
    local_b8._8_8_ = 0;
    local_60 = pSVar2;
    if (lVar4 != 0) {
      Eigen::DenseStorage<double,-1,-1,1,0>::resize
                ((DenseStorage<double,_1,_1,1,0> *)&local_b8,lVar4,lVar4,1);
    }
    Eigen::internal::
    generic_product_impl_base<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>,Eigen::internal::generic_product_impl<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>,Eigen::SparseShape,Eigen::DenseShape,7>_>
    ::evalTo<Eigen::Matrix<double,_1,1,0,_1,1>_>
              ((Matrix<double,_1,1,0,_1,1> *)&local_b8,pSVar2,&local_58);
    uVar3 = local_b8._0_8_;
    local_b8._0_8_ = local_80._padding_;
    local_b8._16_8_ = local_80._padding_;
    local_a0.m_dst = &local_b8;
    local_a0.m_src = local_res18;
    local_a0.m_functor = local_res8;
    local_a0.m_dstExpr = &local_80;
    local_res18[0] = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)uVar3;
    Eigen::internal::
    dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,-1,1,0,-1,1>_>,Eigen::internal::assign_op<double,double>,0>,3,0>
    ::run(&local_a0);
    FMemory_Free((void *)uVar3);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  return this;
}

// FConstrainedMeshDeformer @ 14c896620

FConstrainedMeshDeformer * __thiscall
UE::Geometry::FConstrainedMeshDeformer::FConstrainedMeshDeformer
          (FConstrainedMeshDeformer *this,FDynamicMesh3 *param_1,ELaplacianWeightScheme param_2)

{
  FSOAPositions *this_00;
  FSOAPositions *pFVar1;
  SparseMatrix<double,0,int> *pSVar2;
  undefined8 uVar3;
  longlong lVar4;
  FSOAPositions *pFVar5;
  int iVar6;
  assign_op<double,double> local_res8 [8];
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_res20;
  evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> local_b8;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>,0>
  local_a0;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_80;
  SparseMatrix<double,0,int> *local_60;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_58;
  
  FConstrainedMeshDeformationSolver::FConstrainedMeshDeformationSolver
            ((FConstrainedMeshDeformationSolver *)this,param_1,param_2,LU);
  this_00 = &this->LaplacianVectors;
  this->_padding_ = (longlong)&___7FConstrainedMeshDeformer_Geometry_UE__6B_;
  FSOAPositions::FSOAPositions(this_00,(int)this->_padding_);
  pFVar1 = &this->OriginalInteriorPositions;
  iVar6 = 0;
  *(undefined8 *)pFVar1 = 0;
  *(undefined8 *)&(this->OriginalInteriorPositions).field_0x8 = 0;
  *(undefined8 *)&(this->OriginalInteriorPositions).field_0x10 = 0;
  *(undefined8 *)&(this->OriginalInteriorPositions).field_0x18 = 0;
  *(undefined8 *)&(this->OriginalInteriorPositions).field_0x20 = 0;
  *(undefined8 *)&(this->OriginalInteriorPositions).field_0x28 = 0;
  FConstrainedMeshDeformationSolver::ExtractInteriorVertexPositions<UE::Geometry::FDynamicMesh3>
            ((FConstrainedMeshDeformationSolver *)this,param_1,pFVar1);
  pSVar2 = *(SparseMatrix<double,0,int> **)(this->_padding_ + 0x30);
  do {
    pFVar5 = pFVar1;
    if (iVar6 != 0) {
      lVar4 = 0x10;
      if (iVar6 != 1) {
        lVar4 = 0x20;
      }
      pFVar5 = (FSOAPositions *)(&pFVar1->field_0x0 + lVar4);
    }
    local_58._padding_ = (longlong)*(int *)&pFVar5->field_0x8;
    if (*(int *)&pFVar5->field_0x8 < 1) {
      local_58._padding_ = 0;
      local_58._padding_ = 0;
    }
    else {
      local_58._padding_ = *(longlong *)pFVar5;
      local_a0.m_dst =
           (evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> *)
           local_58._padding_;
      local_a0.m_src = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)local_58._padding_;
    }
    local_58._padding_ = (longlong)local_a0.m_functor;
    pFVar5 = this_00;
    if (iVar6 != 0) {
      lVar4 = 0x10;
      if (iVar6 != 1) {
        lVar4 = 0x20;
      }
      pFVar5 = (FSOAPositions *)(&this_00->field_0x0 + lVar4);
    }
    local_80._padding_ = (longlong)*(int *)&pFVar5->field_0x8;
    if (*(int *)&pFVar5->field_0x8 < 1) {
      local_80._padding_ = 0;
      local_80._padding_ = 0;
    }
    else {
      local_80._padding_ = *(longlong *)pFVar5;
    }
    lVar4 = pSVar2->m_innerSize;
    local_b8._0_8_ = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)0x0;
    local_b8._8_8_ = 0;
    local_60 = pSVar2;
    if (lVar4 != 0) {
      Eigen::DenseStorage<double,-1,-1,1,0>::resize
                ((DenseStorage<double,_1,_1,1,0> *)&local_b8,lVar4,lVar4,1);
    }
    Eigen::internal::
    generic_product_impl_base<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>,Eigen::internal::generic_product_impl<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>,Eigen::SparseShape,Eigen::DenseShape,7>_>
    ::evalTo<Eigen::Matrix<double,_1,1,0,_1,1>_>
              ((Matrix<double,_1,1,0,_1,1> *)&local_b8,pSVar2,&local_58);
    uVar3 = local_b8._0_8_;
    local_b8._0_8_ = local_80._padding_;
    local_b8._16_8_ = local_80._padding_;
    local_a0.m_dst = &local_b8;
    local_a0.m_src = &local_res20;
    local_a0.m_functor = local_res8;
    local_a0.m_dstExpr = &local_80;
    local_res20 = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)uVar3;
    Eigen::internal::
    dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,-1,1,0,-1,1>_>,Eigen::internal::assign_op<double,double>,0>,3,0>
    ::run(&local_a0);
    FMemory_Free((void *)uVar3);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  return this;
}

// ~FConstrainedMeshDeformer @ 14c89a030

void __thiscall
UE::Geometry::FConstrainedMeshDeformer::~FConstrainedMeshDeformer(FConstrainedMeshDeformer *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FConstrainedMeshDeformer_Geometry_UE__6B_;
  pvVar1 = *(void **)&(this->OriginalInteriorPositions).field_0x20;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->OriginalInteriorPositions).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if (*(void **)&this->OriginalInteriorPositions != (void *)0x0) {
    FMemory::Free(*(void **)&this->OriginalInteriorPositions);
  }
  pvVar1 = *(void **)&(this->LaplacianVectors).field_0x20;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->LaplacianVectors).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if (*(void **)&this->LaplacianVectors != (void *)0x0) {
    FMemory::Free(*(void **)&this->LaplacianVectors);
  }
  FConstrainedMeshDeformationSolver::~FConstrainedMeshDeformationSolver
            ((FConstrainedMeshDeformationSolver *)this);
  return;
}

// Deform @ 14c8d7230

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FConstrainedMeshDeformer::Deform
          (FConstrainedMeshDeformer *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  undefined1 local_48 [16];
  TArray<double,TSizedDefaultAllocator<32>_> local_38;
  TArray<double,TSizedDefaultAllocator<32>_> local_28;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    FConstrainedSolver::SetConstraintWeights
              ((FConstrainedSolver *)this->_padding_,
               (TMap<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_> *)
               &this->_padding_);
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  }
  if ((char)this->_padding_ != '\0') {
    FConstrainedSolver::SetContraintPositions
              ((FConstrainedSolver *)this->_padding_,
               (TMap<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
                *)&this->_padding_);
    *(undefined1 *)&this->_padding_ = 0;
  }
  iVar2 = (int)this->_padding_;
  if (iVar2 == 0) {
    return false;
  }
  local_48._0_8_ = (FScriptContainerElement *)0x0;
  local_48._8_8_ = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<double,TSizedDefaultAllocator<32>_> *)local_48,iVar2,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_38,iVar2,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_28,iVar2,Default);
  bVar4 = FConstrainedSolver::SolveWithGuess
                    ((FConstrainedSolver *)this->_padding_,&this->OriginalInteriorPositions,
                     &this->LaplacianVectors,(FSOAPositions *)local_48);
  FConstrainedMeshDeformationSolver::UpdateWithPostFixConstraints
            ((FConstrainedMeshDeformationSolver *)this,(FSOAPositions *)local_48);
  uVar3 = (uint)this->_padding_;
  if (-1 < (int)uVar3) {
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (*piVar1 != uVar3) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar3,&param_1->AllocatorInstance,0,piVar1);
    }
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar3,&param_1->AllocatorInstance,&param_1->ArrayNum,piVar1);
    FConstrainedMeshDeformationSolver::CopyInternalPositions
              ((FConstrainedMeshDeformationSolver *)this,(FSOAPositions *)local_48,param_1);
    FConstrainedMeshDeformationSolver::CopyBoundaryPositions
              ((FConstrainedMeshDeformationSolver *)this,param_1);
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_48._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_48._0_8_);
    }
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

