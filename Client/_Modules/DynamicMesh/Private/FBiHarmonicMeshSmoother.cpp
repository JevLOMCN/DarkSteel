// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// ComputeSmoothedMeshPositions @ 14c8cca90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FBiHarmonicMeshSmoother::ComputeSmoothedMeshPositions
          (FBiHarmonicMeshSmoother *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  TVector3Arrays<double> *pTVar8;
  int iVar9;
  assign_op<double,double> local_res8 [8];
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_res18 [2];
  TVector3Arrays<double> local_118;
  undefined1 local_e8 [16];
  TArray<double,TSizedDefaultAllocator<32>_> local_d8;
  TArray<double,TSizedDefaultAllocator<32>_> local_c8;
  evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> local_b8;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>,0>
  local_a0;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_80;
  undefined1 *local_60;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_58;
  
  if (this->field_0xa9 != '\0') {
    FConstrainedSolver::SetConstraintWeights
              (*(FConstrainedSolver **)&this->field_0x110,
               (TMap<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_> *)
               &this->field_0x58);
    this->field_0xa9 = 0;
  }
  if (this->field_0xa8 != '\0') {
    FConstrainedSolver::SetContraintPositions
              (*(FConstrainedSolver **)&this->field_0x110,
               (TMap<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
                *)&this->field_0x8);
    this->field_0xa8 = 0;
  }
  iVar3 = *(int *)&this->field_0xb0;
  iVar9 = 0;
  local_118.XVector.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.XVector.ArrayNum = 0;
  local_118.XVector.ArrayMax = 0;
  local_118.YVector.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.YVector.ArrayNum = 0;
  local_118.YVector.ArrayMax = 0;
  local_118.ZVector.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ZVector.ArrayNum = 0;
  local_118.ZVector.ArrayMax = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_118.XVector,iVar3,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_118.YVector,iVar3,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_118.ZVector,iVar3,Default);
  if (*(int *)&this->field_0xb0 == *(int *)&this->field_0xac) {
    TVector3Arrays<double>::SetZero(&local_118,*(int *)&this->field_0xb0);
  }
  else {
    puVar2 = &this->field_0x118;
    do {
      if (iVar9 == 0) {
        lVar7 = 0xe0;
      }
      else {
        lVar7 = 0xf0;
        if (iVar9 != 1) {
          lVar7 = 0x100;
        }
      }
      local_58._padding_ = (longlong)*(int *)(&this->field_0x8 + lVar7);
      if (*(int *)(&this->field_0x8 + lVar7) < 1) {
        local_58._padding_ = 0;
        local_58._padding_ = 0;
      }
      else {
        local_58._padding_ = *(longlong *)(&this->field_0x0 + lVar7);
        local_a0.m_dst =
             (evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> *)
             local_58._padding_;
        local_a0.m_src = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)local_58._padding_;
      }
      local_58._padding_ = (longlong)local_a0.m_functor;
      if (iVar9 == 0) {
        pTVar8 = &local_118;
      }
      else {
        pTVar8 = (TVector3Arrays<double> *)&local_118.ZVector;
        if (iVar9 == 1) {
          pTVar8 = (TVector3Arrays<double> *)&local_118.YVector;
        }
      }
      iVar3 = (pTVar8->XVector).ArrayNum;
      local_80._padding_ = (longlong)iVar3;
      if (iVar3 < 1) {
        local_80._padding_ = 0;
        local_80._padding_ = 0;
      }
      else {
        local_80._padding_ = *(longlong *)&(pTVar8->XVector).AllocatorInstance;
      }
      lVar7 = *(longlong *)&this->field_0x128;
      local_b8._0_8_ = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)0x0;
      local_b8._8_8_ = 0;
      local_60 = puVar2;
      if (lVar7 != 0) {
        Eigen::DenseStorage<double,-1,-1,1,0>::resize
                  ((DenseStorage<double,_1,_1,1,0> *)&local_b8,lVar7,lVar7,1);
      }
      Eigen::internal::
      generic_product_impl_base<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>,Eigen::internal::generic_product_impl<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>,Eigen::SparseShape,Eigen::DenseShape,7>_>
      ::evalTo<Eigen::Matrix<double,_1,1,0,_1,1>_>
                ((Matrix<double,_1,1,0,_1,1> *)&local_b8,(SparseMatrix<double,0,int> *)puVar2,
                 &local_58);
      uVar5 = local_b8._0_8_;
      local_b8._0_8_ = local_80._padding_;
      local_b8._16_8_ = local_80._padding_;
      local_a0.m_dst = &local_b8;
      local_a0.m_src = local_res18;
      local_a0.m_functor = local_res8;
      local_a0.m_dstExpr = &local_80;
      local_res18[0] = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)uVar5;
      Eigen::internal::
      dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,-1,1,0,-1,1>_>,Eigen::internal::assign_op<double,double>,0>,3,0>
      ::run(&local_a0);
      FMemory_Free((void *)uVar5);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 3);
  }
  iVar3 = *(int *)&this->field_0xb0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<double,TSizedDefaultAllocator<32>_> *)local_e8,iVar3,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_d8,iVar3,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_c8,iVar3,Default);
  bVar6 = FConstrainedSolver::Solve
                    (*(FConstrainedSolver **)&this->field_0x110,(FSOAPositions *)&local_118,
                     (FSOAPositions *)local_e8);
  FConstrainedMeshDeformationSolver::UpdateWithPostFixConstraints
            ((FConstrainedMeshDeformationSolver *)this,(FSOAPositions *)local_e8);
  uVar4 = *(uint *)&this->field_0xc0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar4) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar4,&param_1->AllocatorInstance,0,piVar1);
  }
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,uVar4,&param_1->AllocatorInstance,&param_1->ArrayNum,piVar1);
  FConstrainedMeshDeformationSolver::CopyInternalPositions
            ((FConstrainedMeshDeformationSolver *)this,(FSOAPositions *)local_e8,param_1);
  FConstrainedMeshDeformationSolver::CopyBoundaryPositions
            ((FConstrainedMeshDeformationSolver *)this,param_1);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  if (local_118.ZVector.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.ZVector.AllocatorInstance.Data);
  }
  if (local_118.YVector.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.YVector.AllocatorInstance.Data);
  }
  if (local_118.XVector.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.XVector.AllocatorInstance.Data);
  }
  return bVar6;
}

// Deform @ 14c8d7210

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FBiHarmonicMeshSmoother::Deform
          (FBiHarmonicMeshSmoother *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  TVector3Arrays<double> *pTVar8;
  int iVar9;
  assign_op<double,double> aaStackX_8 [8];
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> aeStackX_18 [2];
  TVector3Arrays<double> TStack_118;
  undefined1 auStack_e8 [16];
  TArray<double,TSizedDefaultAllocator<32>_> TStack_d8;
  TArray<double,TSizedDefaultAllocator<32>_> TStack_c8;
  evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> eStack_b8;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>,0>
  gStack_a0;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> MStack_80;
  undefined1 *puStack_60;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> MStack_58;
  
  if (this->field_0xa9 != '\0') {
    FConstrainedSolver::SetConstraintWeights
              (*(FConstrainedSolver **)&this->field_0x110,
               (TMap<int,double,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,double,0>_> *)
               &this->field_0x58);
    this->field_0xa9 = 0;
  }
  if (this->field_0xa8 != '\0') {
    FConstrainedSolver::SetContraintPositions
              (*(FConstrainedSolver **)&this->field_0x110,
               (TMap<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
                *)&this->field_0x8);
    this->field_0xa8 = 0;
  }
  iVar3 = *(int *)&this->field_0xb0;
  iVar9 = 0;
  TStack_118.XVector.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_118.XVector.ArrayNum = 0;
  TStack_118.XVector.ArrayMax = 0;
  TStack_118.YVector.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_118.YVector.ArrayNum = 0;
  TStack_118.YVector.ArrayMax = 0;
  TStack_118.ZVector.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_118.ZVector.ArrayNum = 0;
  TStack_118.ZVector.ArrayMax = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&TStack_118.XVector,iVar3,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&TStack_118.YVector,iVar3,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&TStack_118.ZVector,iVar3,Default);
  if (*(int *)&this->field_0xb0 == *(int *)&this->field_0xac) {
    TVector3Arrays<double>::SetZero(&TStack_118,*(int *)&this->field_0xb0);
  }
  else {
    puVar2 = &this->field_0x118;
    do {
      if (iVar9 == 0) {
        lVar7 = 0xe0;
      }
      else {
        lVar7 = 0xf0;
        if (iVar9 != 1) {
          lVar7 = 0x100;
        }
      }
      MStack_58._padding_ = (longlong)*(int *)(&this->field_0x8 + lVar7);
      if (*(int *)(&this->field_0x8 + lVar7) < 1) {
        MStack_58._padding_ = 0;
        MStack_58._padding_ = 0;
      }
      else {
        MStack_58._padding_ = *(longlong *)(&this->field_0x0 + lVar7);
        gStack_a0.m_dst =
             (evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> *)
             MStack_58._padding_;
        gStack_a0.m_src = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> *)MStack_58._padding_;
      }
      MStack_58._padding_ = (longlong)gStack_a0.m_functor;
      if (iVar9 == 0) {
        pTVar8 = &TStack_118;
      }
      else {
        pTVar8 = (TVector3Arrays<double> *)&TStack_118.ZVector;
        if (iVar9 == 1) {
          pTVar8 = (TVector3Arrays<double> *)&TStack_118.YVector;
        }
      }
      iVar3 = (pTVar8->XVector).ArrayNum;
      MStack_80._padding_ = (longlong)iVar3;
      if (iVar3 < 1) {
        MStack_80._padding_ = 0;
        MStack_80._padding_ = 0;
      }
      else {
        MStack_80._padding_ = *(longlong *)&(pTVar8->XVector).AllocatorInstance;
      }
      lVar7 = *(longlong *)&this->field_0x128;
      eStack_b8._0_8_ = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)0x0;
      eStack_b8._8_8_ = 0;
      puStack_60 = puVar2;
      if (lVar7 != 0) {
        Eigen::DenseStorage<double,-1,-1,1,0>::resize
                  ((DenseStorage<double,_1,_1,1,0> *)&eStack_b8,lVar7,lVar7,1);
      }
      Eigen::internal::
      generic_product_impl_base<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>,Eigen::internal::generic_product_impl<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>,Eigen::SparseShape,Eigen::DenseShape,7>_>
      ::evalTo<Eigen::Matrix<double,_1,1,0,_1,1>_>
                ((Matrix<double,_1,1,0,_1,1> *)&eStack_b8,(SparseMatrix<double,0,int> *)puVar2,
                 &MStack_58);
      uVar5 = eStack_b8._0_8_;
      eStack_b8._0_8_ = MStack_80._padding_;
      eStack_b8._16_8_ = MStack_80._padding_;
      gStack_a0.m_dst = &eStack_b8;
      gStack_a0.m_src = aeStackX_18;
      gStack_a0.m_functor = aaStackX_8;
      gStack_a0.m_dstExpr = &MStack_80;
      aeStackX_18[0] = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)uVar5;
      Eigen::internal::
      dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,-1,1,0,-1,1>_>,Eigen::internal::assign_op<double,double>,0>,3,0>
      ::run(&gStack_a0);
      FMemory_Free((void *)uVar5);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 3);
  }
  iVar3 = *(int *)&this->field_0xb0;
  auStack_e8._0_8_ = (FScriptContainerElement *)0x0;
  auStack_e8._8_8_ = 0;
  TStack_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_d8.ArrayNum = 0;
  TStack_d8.ArrayMax = 0;
  TStack_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_c8.ArrayNum = 0;
  TStack_c8.ArrayMax = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<double,TSizedDefaultAllocator<32>_> *)auStack_e8,iVar3,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&TStack_d8,iVar3,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&TStack_c8,iVar3,Default);
  bVar6 = FConstrainedSolver::Solve
                    (*(FConstrainedSolver **)&this->field_0x110,(FSOAPositions *)&TStack_118,
                     (FSOAPositions *)auStack_e8);
  FConstrainedMeshDeformationSolver::UpdateWithPostFixConstraints
            ((FConstrainedMeshDeformationSolver *)this,(FSOAPositions *)auStack_e8);
  uVar4 = *(uint *)&this->field_0xc0;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar4) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar4,&param_1->AllocatorInstance,0,piVar1);
  }
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,uVar4,&param_1->AllocatorInstance,&param_1->ArrayNum,piVar1);
  FConstrainedMeshDeformationSolver::CopyInternalPositions
            ((FConstrainedMeshDeformationSolver *)this,(FSOAPositions *)auStack_e8,param_1);
  FConstrainedMeshDeformationSolver::CopyBoundaryPositions
            ((FConstrainedMeshDeformationSolver *)this,param_1);
  if (TStack_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_c8.AllocatorInstance.Data);
  }
  if (TStack_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_d8.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)auStack_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_e8._0_8_);
  }
  if (TStack_118.ZVector.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_118.ZVector.AllocatorInstance.Data);
  }
  if (TStack_118.YVector.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_118.YVector.AllocatorInstance.Data);
  }
  if (TStack_118.XVector.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_118.XVector.AllocatorInstance.Data);
  }
  return bVar6;
}

