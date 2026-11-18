// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 3

// FSoftMeshDeformer @ 14c8982f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FSoftMeshDeformer * __thiscall
UE::Geometry::FSoftMeshDeformer::FSoftMeshDeformer(FSoftMeshDeformer *this,FDynamicMesh3 *param_1)

{
  FSOAPositions *this_00;
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  SparseMatrix<double,0,int> *pSVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double *pdVar8;
  bool bVar9;
  uint uVar10;
  FSoftMeshDeformer *pFVar11;
  longlong lVar12;
  FSOAPositions *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  FSOAPositions *pFVar19;
  ulonglong uVar20;
  assign_op<double,double> local_res18 [8];
  FSOAPositions *local_res20;
  TArray<double,TSizedDefaultAllocator<32>_> local_158;
  TArray<double,TSizedDefaultAllocator<32>_> local_148;
  TArray<double,TSizedDefaultAllocator<32>_> local_138;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_128;
  DenseStorage<double,_1,_1,1,0> local_120;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_110;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>,0>
  local_f0;
  evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> local_d0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  SparseMatrix<double,0,int> *local_98;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_90;
  undefined8 local_60;
  
  FSoftMeshDeformationSolver::FSoftMeshDeformationSolver((FSoftMeshDeformationSolver *)this,param_1)
  ;
  uVar18 = 0;
  this_00 = &this->OriginalPositions;
  pFVar19 = &this->LaplacianVectors;
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FSoftMeshDeformer_Geometry_UE__6B_;
  puVar2 = &(this->LaplacianVectors).field_0x10;
  iVar17 = (int)this->_padding_;
  puVar3 = &(this->LaplacianVectors).field_0x20;
  *(undefined8 *)pFVar19 = 0;
  *(undefined8 *)&(this->LaplacianVectors).field_0x8 = 0;
  *(undefined8 *)puVar2 = 0;
  *(undefined8 *)&(this->LaplacianVectors).field_0x18 = 0;
  *(undefined8 *)puVar3 = 0;
  *(undefined8 *)&(this->LaplacianVectors).field_0x28 = 0;
  *(undefined8 *)&this_00->field_0x0 = 0;
  *(undefined8 *)&(this->OriginalPositions).field_0x8 = 0;
  *(undefined8 *)&(this->OriginalPositions).field_0x10 = 0;
  *(undefined8 *)&(this->OriginalPositions).field_0x18 = 0;
  *(undefined8 *)&(this->OriginalPositions).field_0x20 = 0;
  *(undefined8 *)&(this->OriginalPositions).field_0x28 = 0;
  local_158.ArrayNum = 0;
  local_158.ArrayMax = 0;
  local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.ArrayNum = 0;
  local_148.ArrayMax = 0;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  local_res20 = pFVar19;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_158,iVar17,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_148,iVar17,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_138,iVar17,Default);
  if (pFVar19 != (FSOAPositions *)&local_158) {
    if (*(void **)pFVar19 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar19);
    }
    *(FScriptContainerElement **)pFVar19 = local_158.AllocatorInstance.Data;
    *(int *)&(this->LaplacianVectors).field_0x8 = local_158.ArrayNum;
    *(int *)&(this->LaplacianVectors).field_0xc = local_158.ArrayMax;
    local_158.ArrayNum = 0;
    local_158.ArrayMax = 0;
    local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if ((TArray<double,TSizedDefaultAllocator<32>_> *)puVar2 != &local_148) {
    if (*(void **)puVar2 != (void *)0x0) {
      FMemory::Free(*(void **)puVar2);
    }
    *(FScriptContainerElement **)puVar2 = local_148.AllocatorInstance.Data;
    *(int *)&(this->LaplacianVectors).field_0x18 = local_148.ArrayNum;
    *(int *)&(this->LaplacianVectors).field_0x1c = local_148.ArrayMax;
    local_148.ArrayNum = 0;
    local_148.ArrayMax = 0;
    local_148.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if ((TArray<double,TSizedDefaultAllocator<32>_> *)puVar3 != &local_138) {
    if (*(void **)puVar3 != (void *)0x0) {
      FMemory::Free(*(void **)puVar3);
    }
    *(FScriptContainerElement **)puVar3 = local_138.AllocatorInstance.Data;
    *(int *)&(this->LaplacianVectors).field_0x28 = local_138.ArrayNum;
    *(int *)&(this->LaplacianVectors).field_0x2c = local_138.ArrayMax;
    local_138.ArrayNum = 0;
    local_138.ArrayMax = 0;
    local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.AllocatorInstance.Data);
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  TVector3Arrays<double>::SetZero((TVector3Arrays<double> *)this_00,iVar17);
  uVar14 = uVar18;
  uVar20 = uVar18;
  if (0 < iVar17) {
    do {
      uVar15 = (uint)uVar14;
      uVar16 = ~uVar15 >> 0x1f;
      uVar10 = 0;
      if ((int)uVar15 < (int)this->_padding_) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FSoftMeshDeformer *)(*pcVar5)();
        return pFVar11;
      }
      uVar10 = *(uint *)(this->_padding_ + uVar20 * 4);
      uVar14 = (ulonglong)(uVar10 & 0x1ff);
      lVar12 = *(longlong *)
                ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar10 >> 9) * 8);
      local_60 = *(undefined8 *)(lVar12 + 0x10 + uVar14 * 0x18);
      puVar1 = (undefined8 *)(lVar12 + uVar14 * 0x18);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar10 = 0;
      if ((int)uVar15 < *(int *)&(this->OriginalPositions).field_0x8) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FSoftMeshDeformer *)(*pcVar5)();
        return pFVar11;
      }
      *(undefined8 *)(*(longlong *)&this_00->field_0x0 + uVar20 * 8) = uVar6;
      uVar10 = 0;
      if ((int)uVar15 < *(int *)&(this->OriginalPositions).field_0x18) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FSoftMeshDeformer *)(*pcVar5)();
        return pFVar11;
      }
      *(undefined8 *)(*(longlong *)&(this->OriginalPositions).field_0x10 + uVar20 * 8) = uVar7;
      uVar10 = 0;
      if ((int)uVar15 < *(int *)&(this->OriginalPositions).field_0x28) {
        uVar10 = uVar16;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        pFVar11 = (FSoftMeshDeformer *)(*pcVar5)();
        return pFVar11;
      }
      *(undefined8 *)(*(longlong *)&(this->OriginalPositions).field_0x20 + uVar20 * 8) = local_60;
      uVar20 = uVar20 + 1;
      uVar14 = (ulonglong)(uVar15 + 1);
      pFVar19 = local_res20;
    } while ((longlong)uVar20 < (longlong)iVar17);
  }
  pSVar4 = *(SparseMatrix<double,0,int> **)(this->_padding_ + 0x30);
  do {
    iVar17 = (int)uVar18;
    pFVar13 = this_00;
    if (iVar17 != 0) {
      lVar12 = 0x10;
      if (iVar17 != 1) {
        lVar12 = 0x20;
      }
      pFVar13 = (FSOAPositions *)(&this_00->field_0x0 + lVar12);
    }
    local_90._padding_ = (longlong)*(int *)(&pFVar13->field_0x0 + 8);
    if (*(int *)(&pFVar13->field_0x0 + 8) < 1) {
      local_90._padding_ = 0;
      local_90._padding_ = 0;
    }
    else {
      local_90._padding_ = *(longlong *)&pFVar13->field_0x0;
      local_b8 = local_90._padding_;
      lStack_b0 = local_90._padding_;
    }
    local_90._padding_ = local_a8;
    pFVar13 = pFVar19;
    if (iVar17 != 0) {
      lVar12 = 0x10;
      if (iVar17 != 1) {
        lVar12 = 0x20;
      }
      pFVar13 = (FSOAPositions *)((longlong)&pFVar19->field_0x0 + lVar12);
    }
    local_110._padding_ = (longlong)*(int *)&pFVar13->field_0x8;
    if (*(int *)&pFVar13->field_0x8 < 1) {
      local_110._padding_ = 0;
      local_110._padding_ = 0;
    }
    else {
      local_110._padding_ = *(longlong *)pFVar13;
    }
    lVar12 = pSVar4->m_innerSize;
    local_120.m_data = (double *)0x0;
    local_120.m_rows = 0;
    local_98 = pSVar4;
    if (lVar12 != 0) {
      Eigen::DenseStorage<double,-1,-1,1,0>::resize(&local_120,lVar12,lVar12,1);
    }
    Eigen::internal::
    generic_product_impl_base<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>,Eigen::internal::generic_product_impl<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>,Eigen::SparseShape,Eigen::DenseShape,7>_>
    ::evalTo<Eigen::Matrix<double,_1,1,0,_1,1>_>
              ((Matrix<double,_1,1,0,_1,1> *)&local_120,pSVar4,&local_90);
    pdVar8 = local_120.m_data;
    local_d0._0_8_ = local_110._padding_;
    local_d0._16_8_ = local_110._padding_;
    local_f0.m_dst = &local_d0;
    local_f0.m_src = &local_128;
    local_f0.m_functor = local_res18;
    local_f0.m_dstExpr = &local_110;
    local_128 = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)local_120.m_data;
    Eigen::internal::
    dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,-1,1,0,-1,1>_>,Eigen::internal::assign_op<double,double>,0>,3,0>
    ::run(&local_f0);
    FMemory_Free(pdVar8);
    uVar18 = (ulonglong)(iVar17 + 1U);
  } while ((int)(iVar17 + 1U) < 3);
  return this;
}

// ~FSoftMeshDeformer @ 14c89a6d0

void __thiscall UE::Geometry::FSoftMeshDeformer::~FSoftMeshDeformer(FSoftMeshDeformer *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FSoftMeshDeformer_Geometry_UE__6B_;
  pvVar1 = *(void **)&(this->OriginalPositions).field_0x20;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->OriginalPositions).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if (*(void **)&this->OriginalPositions != (void *)0x0) {
    FMemory::Free(*(void **)&this->OriginalPositions);
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
  FSoftMeshDeformationSolver::~FSoftMeshDeformationSolver((FSoftMeshDeformationSolver *)this);
  return;
}

// Deform @ 14c8d7430

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FSoftMeshDeformer::Deform
          (FSoftMeshDeformer *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *pvVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  bool bVar13;
  undefined1 uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong lVar25;
  bool local_res18;
  undefined1 local_res20 [8];
  uint local_188;
  undefined1 local_180 [16];
  ForAnyElementType local_170;
  int local_168;
  int local_164;
  ForAnyElementType local_160;
  int local_158;
  int local_154;
  undefined1 local_150 [16];
  TArray<double,TSizedDefaultAllocator<32>_> local_140;
  TArray<double,TSizedDefaultAllocator<32>_> local_130;
  int local_120;
  int local_11c;
  longlong *local_118;
  longlong *local_110;
  int iStack_108;
  uint uStack_104;
  longlong *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  undefined4 uStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  undefined8 uStack_b8;
  undefined4 local_94;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    FConstrainedSolver::SetConstraintWeights
              ((FConstrainedSolver *)this->_padding_,
               (TMap<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
                *)&this->_padding_);
    *(undefined1 *)((longlong)&this->_padding_ + 1) = 0;
  }
  if ((char)this->_padding_ != '\0') {
    FConstrainedSolver::SetContraintPositions
              ((FConstrainedSolver *)this->_padding_,
               (TMap<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
                *)&this->_padding_);
    *(undefined1 *)&this->_padding_ = 0;
  }
  iVar19 = (int)this->_padding_;
  local_150._0_8_ = (FScriptContainerElement *)0x0;
  local_150._8_8_ = 0;
  local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_140.ArrayNum = 0;
  local_140.ArrayMax = 0;
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<double,TSizedDefaultAllocator<32>_> *)local_150,iVar19,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_140,iVar19,Default);
  TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_130,iVar19,Default);
  if (__real_3ff0000000000000 == (double)this->_padding_) {
    local_res18 = FConstrainedSolver::SolveWithGuess
                            ((FConstrainedSolver *)this->_padding_,&this->OriginalPositions,
                             &this->LaplacianVectors,(FSOAPositions *)local_150);
  }
  else {
    local_180._8_4_ = *(undefined4 *)&(this->LaplacianVectors).field_0x8;
    lVar22 = (longlong)(int)local_180._8_4_;
    pvVar10 = *(void **)&this->LaplacianVectors;
    local_180._0_8_ = (FScriptContainerElement *)0x0;
    if (local_180._8_4_ == 0) {
      local_180._12_4_ = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_180._8_4_,0,(ForAnyElementType *)local_180,local_180._8_4_,
                 (int *)(local_180 + 0xc));
      memcpy((void *)local_180._0_8_,pvVar10,lVar22 << 3);
    }
    local_168 = *(int *)&(this->LaplacianVectors).field_0x18;
    lVar22 = (longlong)local_168;
    pvVar10 = *(void **)&(this->LaplacianVectors).field_0x10;
    local_170.Data = (FScriptContainerElement *)0x0;
    if (local_168 == 0) {
      local_164 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_168,0,&local_170,local_168,&local_164);
      memcpy(local_170.Data,pvVar10,lVar22 << 3);
    }
    local_160.Data = (FScriptContainerElement *)0x0;
    local_158 = *(int *)&(this->LaplacianVectors).field_0x28;
    lVar22 = (longlong)local_158;
    pvVar10 = *(void **)&(this->LaplacianVectors).field_0x20;
    if (local_158 == 0) {
      local_154 = 0;
      iVar19 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_158,0,&local_160,local_158,&local_154);
      memcpy(local_160.Data,pvVar10,lVar22 << 3);
      iVar19 = local_158;
    }
    if ((local_168 != local_180._8_4_) || (iVar15 = local_180._8_4_, iVar19 != local_180._8_4_)) {
      iVar15 = -1;
    }
    uVar18 = 0;
    if (0 < iVar15) {
      lVar22 = 0;
      lVar25 = 0;
      do {
        uVar21 = ~uVar18 >> 0x1f;
        uVar16 = 0;
        if ((int)uVar18 < iVar19) {
          uVar16 = uVar21;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar12 = (code *)swi(3);
          uVar14 = (*pcVar12)();
          return (bool)uVar14;
        }
        dVar3 = *(double *)(local_160.Data + lVar25);
        uVar16 = 0;
        if ((int)uVar18 < local_168) {
          uVar16 = uVar21;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar12 = (code *)swi(3);
          uVar14 = (*pcVar12)();
          return (bool)uVar14;
        }
        dVar4 = *(double *)(local_170.Data + lVar22 * 8);
        uVar16 = 0;
        if ((int)uVar18 < (int)local_180._8_4_) {
          uVar16 = uVar21;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar12 = (code *)swi(3);
          uVar14 = (*pcVar12)();
          return (bool)uVar14;
        }
        dVar5 = (double)this->_padding_;
        dVar6 = *(double *)(local_180._0_8_ + lVar22 * 8);
        uVar17 = 0;
        uVar16 = uVar17;
        if ((int)uVar18 < (int)local_180._8_4_) {
          uVar16 = uVar21;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar12 = (code *)swi(3);
          uVar14 = (*pcVar12)();
          return (bool)uVar14;
        }
        *(double *)(local_180._0_8_ + lVar22 * 8) = dVar6 * dVar5;
        uVar16 = uVar17;
        if ((int)uVar18 < local_168) {
          uVar16 = uVar21;
        }
        if ((uVar16 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar12 = (code *)swi(3);
          uVar14 = (*pcVar12)();
          return (bool)uVar14;
        }
        *(double *)(local_170.Data + lVar22 * 8) = dVar4 * dVar5;
        if ((int)uVar18 < local_158) {
          uVar17 = uVar21;
        }
        if ((uVar17 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar12 = (code *)swi(3);
          uVar14 = (*pcVar12)();
          return (bool)uVar14;
        }
        uVar18 = uVar18 + 1;
        lVar25 = lVar25 + 8;
        *(double *)(local_160.Data + lVar22 * 8) = dVar3 * dVar5;
        lVar22 = lVar22 + 1;
        iVar19 = local_158;
      } while (lVar22 < iVar15);
    }
    local_res18 = FConstrainedSolver::SolveWithGuess
                            ((FConstrainedSolver *)this->_padding_,&this->OriginalPositions,
                             (FSOAPositions *)local_180,(FSOAPositions *)local_150);
    if (local_160.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data);
    }
    if (local_170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data);
    }
    if ((FScriptContainerElement *)local_180._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_180._0_8_);
    }
  }
  iVar19 = (int)this->_padding_;
  local_100 = &this->_padding_;
  local_118 = &this->_padding_;
  iStack_108 = 0;
  uStack_104 = 1;
  local_f0 = 0;
  iStack_f4 = 0;
  if (iVar19 != 0) {
    plVar24 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar24 = local_100;
    }
    uVar18 = (uint)*plVar24;
    iStack_108 = 0;
    local_f0 = 0;
    while (uVar18 == 0) {
      lVar22 = (longlong)iStack_108;
      local_f0 = local_f0 + 0x20;
      iStack_108 = iStack_108 + 1;
      if ((int)(iVar19 + -1 + (iVar19 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_108) goto LAB_14c8d79a2;
      uVar18 = *(uint *)((longlong)plVar24 + lVar22 * 4 + 4);
    }
    uStack_104 = -uVar18 & uVar18;
    uVar2 = (ulonglong)uStack_104 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_120 = (int)lVar22;
    iStack_f4 = local_f0 + -1 + local_120;
    if (iVar19 < iStack_f4) {
LAB_14c8d79a2:
      iStack_f4 = iVar19;
    }
  }
  local_188 = (uint)this->_padding_;
  uStack_ec = local_94;
  iStack_e8 = (int)this->_padding_ - *(int *)((longlong)&this->_padding_ + 4);
  uVar18 = local_188 & 0xffffffe0;
  uStack_f8 = 0xffffffff;
  TStack_d8.CurrentBitIndex = iStack_f4;
  TStack_d8.UnvisitedBitMask = 0xffffffff;
  TStack_d8._padding_ = CONCAT44(uStack_104,iStack_108);
  iVar19 = (int)local_188 >> 5;
  TStack_d8._28_4_ = local_94;
  TStack_d8.BaseBitIndex = local_f0;
  uStack_b8 = CONCAT44(uStack_e4,iStack_e8);
  local_110 = local_118;
  local_e0 = local_118;
  TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_100;
  if (((int)local_188 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar12 = (code *)swi(3);
    uVar14 = (*pcVar12)();
    return (bool)uVar14;
  }
  plVar24 = local_118;
  uVar16 = (uint)this->_padding_;
  if (local_188 != uVar16) {
    plVar23 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar23 = &this->_padding_;
    }
    uVar21 = -1 << ((byte)local_188 & 0x1f) & *(uint *)((longlong)plVar23 + (longlong)iVar19 * 4);
    while (uVar21 == 0) {
      lVar22 = (longlong)iVar19;
      uVar18 = uVar18 + 0x20;
      iVar19 = iVar19 + 1;
      local_188 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19)
      goto LAB_14c8d7ac0;
      uVar21 = *(uint *)((longlong)plVar23 + lVar22 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_11c = (int)lVar22;
    local_188 = local_11c + -1 + uVar18;
    if ((int)uVar16 < (int)local_188) {
      local_188 = uVar16;
    }
  }
LAB_14c8d7ac0:
  while( true ) {
    plVar23 = local_e0;
    if ((int)local_e0[1] - *(int *)((longlong)local_e0 + 0x34) != (int)uStack_b8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,UE::Solvers::FPositionConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_d8.CurrentBitIndex == local_188) &&
        (TStack_d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&this->_padding_)) &&
       (plVar23 == plVar24)) break;
    lVar22 = *plVar23;
    lVar25 = (longlong)TStack_d8.CurrentBitIndex * 0x40;
    uVar18 = *(uint *)(lVar25 + lVar22);
    lVar20 = (longlong)(int)uVar18;
    if (*(char *)(lVar25 + 0x28 + lVar22) != '\0') {
      uVar7 = *(undefined8 *)(lVar25 + 0x10 + lVar22);
      uVar21 = ~uVar18 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar18 < (int)local_150._8_4_) {
        uVar16 = uVar21;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      *(undefined8 *)(local_150._0_8_ + lVar20 * 8) = uVar7;
      uVar7 = *(undefined8 *)(lVar25 + 0x18 + lVar22);
      uVar16 = 0;
      if ((int)uVar18 < local_140.ArrayNum) {
        uVar16 = uVar21;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      *(undefined8 *)(local_140.AllocatorInstance.Data + lVar20 * 8) = uVar7;
      uVar7 = *(undefined8 *)(lVar25 + 0x20 + lVar22);
      uVar16 = 0;
      if ((int)uVar18 < local_130.ArrayNum) {
        uVar16 = uVar21;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      *(undefined8 *)(local_130.AllocatorInstance.Data + lVar20 * 8) = uVar7;
    }
    TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
  }
  uVar18 = (uint)this->_padding_;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar18) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar18,&param_1->AllocatorInstance,0,piVar1);
  }
  Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,uVar18,&param_1->AllocatorInstance,&param_1->ArrayNum,piVar1);
  lVar22 = (longlong)(int)this->_padding_;
  uVar18 = 0;
  if (0 < lVar22) {
    lVar25 = 0;
    do {
      uVar21 = ~uVar18 >> 0x1f;
      uVar16 = 0;
      if ((int)uVar18 < (int)this->_padding_) {
        uVar16 = uVar21;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      uVar16 = *(uint *)(this->_padding_ + lVar25 * 4);
      lVar20 = (longlong)(int)uVar16;
      uVar17 = 0;
      if ((int)uVar18 < local_130.ArrayNum) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      uVar7 = *(undefined8 *)(local_130.AllocatorInstance.Data + lVar25 * 8);
      uVar17 = 0;
      if ((int)uVar18 < local_140.ArrayNum) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      uVar8 = *(undefined8 *)(local_140.AllocatorInstance.Data + lVar25 * 8);
      uVar17 = 0;
      if ((int)uVar18 < (int)local_150._8_4_) {
        uVar17 = uVar21;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      uVar9 = *(undefined8 *)(local_150._0_8_ + lVar25 * 8);
      uVar21 = 0;
      if ((int)uVar16 < param_1->ArrayNum) {
        uVar21 = ~uVar16 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar12 = (code *)swi(3);
        uVar14 = (*pcVar12)();
        return (bool)uVar14;
      }
      uVar18 = uVar18 + 1;
      lVar25 = lVar25 + 1;
      pFVar11 = (param_1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar11 + lVar20 * 0x18) = uVar9;
      *(undefined8 *)(pFVar11 + lVar20 * 0x18 + 8) = uVar8;
      *(undefined8 *)(pFVar11 + lVar20 * 0x18 + 0x10) = uVar7;
    } while (lVar25 < lVar22);
  }
  if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_140.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_150._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_150._0_8_);
  }
  return local_res18;
}

