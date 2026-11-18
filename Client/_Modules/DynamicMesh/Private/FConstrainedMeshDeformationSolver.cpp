// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 21

// FConstrainedMeshDeformationSolver<UE::Geometry::FDynamicGraph3<double>_> @ 14c85cd30

FConstrainedMeshDeformationSolver * __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::
FConstrainedMeshDeformationSolver<UE::Geometry::FDynamicGraph3<double>_>
          (FConstrainedMeshDeformationSolver *this,FDynamicGraph3<double> *param_1,
          EMatrixSolverType param_2)

{
  SparseMatrix<double,0,int> local_b8;
  SparseMatrix<double,0,int> local_68;
  
  *(undefined8 *)&this->ConstraintPositionMap = 0;
  *(undefined8 *)&(this->ConstraintPositionMap).field_0x8 = 0;
  *(undefined8 *)&(this->ConstraintPositionMap).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FConstrainedMeshDeformationSolver_Geometry_UE__6B_;
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x28 = 0;
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x34 = 0;
  *(undefined8 *)&(this->ConstraintPositionMap).field_0x40 = 0;
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x48 = 0;
  *(undefined8 *)&this->ConstraintWeightMap = 0;
  *(undefined8 *)&(this->ConstraintWeightMap).field_0x8 = 0;
  *(undefined8 *)&(this->ConstraintWeightMap).field_0x20 = 0;
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x28 = 0;
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x34 = 0;
  *(undefined8 *)&(this->ConstraintWeightMap).field_0x40 = 0;
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x48 = 0;
  this->bConstraintPositionsDirty = true;
  this->bConstraintWeightsDirty = true;
  this->VertexCount = (int)param_1->_padding_;
  *(undefined8 *)&this->BoundaryPositions = 0;
  *(undefined8 *)&(this->BoundaryPositions).field_0x8 = 0;
  *(undefined8 *)&(this->BoundaryPositions).field_0x10 = 0;
  *(undefined8 *)&(this->BoundaryPositions).field_0x18 = 0;
  *(undefined8 *)&(this->BoundaryPositions).field_0x20 = 0;
  *(undefined8 *)&(this->BoundaryPositions).field_0x28 = 0;
  (this->ConstrainedSolver).Ptr = (FConstrainedSolver *)0x0;
  (this->VtxLinearization)._padding_ = 0;
  (this->VtxLinearization)._padding_ = 0;
  (this->VtxLinearization)._padding_ = 0;
  (this->VtxLinearization)._padding_ = 0;
  (this->VtxLinearization).NumBndryVerts = 0;
  Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&this->BoundaryOperator);
  local_68._padding_._0_1_ = 0;
  local_68.m_innerNonZeros = (int *)0x0;
  local_68.m_data.m_values = (double *)0x0;
  local_68.m_data.m_indices = (int *)0x0;
  local_68.m_data.m_allocatedSize = 0;
  local_68.m_innerSize = 0;
  local_68.m_data.m_size = 0;
  FMemory_Free((void *)0x0);
  local_68.m_outerIndex = FMemory_Malloc(4,0x10);
  if (local_68.m_outerIndex == (int *)0x0) {
    ::operator_new(0xffffffffffffffff);
  }
  local_68.m_outerSize = 0;
  if (local_68.m_innerNonZeros != (int *)0x0) {
    FMemory_Free(local_68.m_innerNonZeros);
  }
  memset(local_68.m_outerIndex,0,local_68.m_outerSize * 4 + 4);
  local_b8._padding_._0_1_ = 0;
  local_b8.m_innerNonZeros = (int *)0x0;
  local_b8.m_data.m_values = (double *)0x0;
  local_b8.m_data.m_indices = (int *)0x0;
  local_b8.m_data.m_allocatedSize = 0;
  local_b8.m_innerSize = 0;
  local_b8.m_data.m_size = 0;
  FMemory_Free((void *)0x0);
  local_b8.m_outerIndex = FMemory_Malloc(4,0x10);
  if (local_b8.m_outerIndex == (int *)0x0) {
    ::operator_new(0xffffffffffffffff);
  }
  local_b8.m_outerSize = 0;
  if (local_b8.m_innerNonZeros != (int *)0x0) {
    FMemory_Free(local_b8.m_innerNonZeros);
  }
  memset(local_b8.m_outerIndex,0,local_b8.m_outerSize * 4 + 4);
  ConstructUniformLaplacian<UE::Geometry::FDynamicGraph3<double>_>
            (param_1,&this->VtxLinearization,&local_68,&local_b8);
  Init<UE::Geometry::FDynamicGraph3<double>_>(this,param_1,Uniform,param_2,&local_68,&local_b8);
  FMemory_Free(local_b8.m_outerIndex);
  FMemory_Free(local_b8.m_innerNonZeros);
  operator_delete__(local_b8.m_data.m_values);
  operator_delete__(local_b8.m_data.m_indices);
  FMemory_Free(local_68.m_outerIndex);
  FMemory_Free(local_68.m_innerNonZeros);
  operator_delete__(local_68.m_data.m_values);
  operator_delete__(local_68.m_data.m_indices);
  return this;
}

// ExtractInteriorVertexPositions<UE::Geometry::FDynamicGraph3<double>_> @ 14c86c520

void __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::
ExtractInteriorVertexPositions<UE::Geometry::FDynamicGraph3<double>_>
          (FConstrainedMeshDeformationSolver *this,FDynamicGraph3<double> *param_1,
          FSOAPositions *param_2)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ulonglong uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  TVector3Arrays<double>::SetZero((TVector3Arrays<double> *)param_2,this->InternalVertexCount);
  uVar7 = 0;
  if (0 < this->InternalVertexCount) {
    lVar8 = 0;
    lVar10 = 0;
    uVar17 = (undefined4)__real_7fefffffffffffff;
    uVar4 = (ulonglong)__real_7fefffffffffffff >> 0x20;
    do {
      uVar9 = ~uVar7 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar7 < (int)(this->VtxLinearization)._padding_) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar6 = *(uint *)(lVar10 + (this->VtxLinearization)._padding_);
      if ((((int)uVar6 < 0) ||
          ((int)param_1->_padding_ * 0x200 + *(int *)((longlong)&param_1->_padding_ + 4) <=
           (int)uVar6)) ||
         (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        (param_1->_padding_ + (ulonglong)(uVar6 >> 9) * 8) +
                                      (ulonglong)(uVar6 & 0x1ff) * 2) - 1U))) {
        uVar15 = 0;
        uVar16 = 0;
        uVar13 = 0;
        uVar14 = 0;
        uVar11 = uVar17;
        uVar12 = (int)uVar4;
      }
      else {
        uVar6 = uVar6 * 3;
        pFVar2 = (param_1->Vertices).Data.Blocks.AllocatorInstance.Data;
        uVar1 = *(undefined8 *)
                 (*(longlong *)(pFVar2 + (ulonglong)(uVar6 + 2 >> 9) * 8) +
                 (ulonglong)(uVar6 + 2 & 0x1ff) * 8);
        uVar15 = (undefined4)uVar1;
        uVar16 = (undefined4)((ulonglong)uVar1 >> 0x20);
        uVar1 = *(undefined8 *)
                 (*(longlong *)(pFVar2 + (ulonglong)(uVar6 + 1 >> 9) * 8) +
                 (ulonglong)(uVar6 + 1 & 0x1ff) * 8);
        uVar13 = (undefined4)uVar1;
        uVar14 = (undefined4)((ulonglong)uVar1 >> 0x20);
        uVar1 = *(undefined8 *)
                 (*(longlong *)(pFVar2 + (ulonglong)(uVar6 >> 9) * 8) +
                 (ulonglong)(uVar6 & 0x1ff) * 8);
        uVar11 = (int)uVar1;
        uVar12 = (int)((ulonglong)uVar1 >> 0x20);
      }
      uVar6 = 0;
      if ((int)uVar7 < *(int *)&param_2->field_0x8) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(ulonglong *)(*(longlong *)param_2 + lVar8) = CONCAT44(uVar12,uVar11);
      uVar6 = 0;
      if ((int)uVar7 < *(int *)&param_2->field_0x18) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(ulonglong *)(*(longlong *)&param_2->field_0x10 + lVar8) = CONCAT44(uVar14,uVar13);
      uVar6 = 0;
      if ((int)uVar7 < *(int *)&param_2->field_0x28) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar7 = uVar7 + 1;
      lVar10 = lVar10 + 4;
      *(ulonglong *)(*(longlong *)&param_2->field_0x20 + lVar8) = CONCAT44(uVar16,uVar15);
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < this->InternalVertexCount);
  }
  return;
}

// ExtractInteriorVertexPositions<UE::Geometry::FDynamicMesh3> @ 14c86c800

void __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::
ExtractInteriorVertexPositions<UE::Geometry::FDynamicMesh3>
          (FConstrainedMeshDeformationSolver *this,FDynamicMesh3 *param_1,FSOAPositions *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  
  TVector3Arrays<double>::SetZero((TVector3Arrays<double> *)param_2,this->InternalVertexCount);
  uVar10 = 0;
  if (0 < this->InternalVertexCount) {
    lVar11 = 0;
    lVar13 = 0;
    do {
      uVar12 = ~uVar10 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar10 < (int)(this->VtxLinearization)._padding_) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = *(uint *)(lVar13 + (this->VtxLinearization)._padding_);
      uVar9 = (ulonglong)(uVar8 & 0x1ff);
      lVar3 = *(longlong *)
               ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar8 >> 9) * 8);
      puVar1 = (undefined8 *)(lVar3 + uVar9 * 0x18);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar2 = *(undefined8 *)(lVar3 + 0x10 + uVar9 * 0x18);
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&param_2->field_0x8) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)(*(longlong *)param_2 + lVar11) = uVar5;
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&param_2->field_0x18) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined8 *)(*(longlong *)&param_2->field_0x10 + lVar11) = uVar6;
      uVar8 = 0;
      if ((int)uVar10 < *(int *)&param_2->field_0x28) {
        uVar8 = uVar12;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar10 = uVar10 + 1;
      lVar13 = lVar13 + 4;
      *(undefined8 *)(*(longlong *)&param_2->field_0x20 + lVar11) = uVar2;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < this->InternalVertexCount);
  }
  return;
}

// Init<UE::Geometry::FDynamicGraph3<double>_> @ 14c8702f0

void __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::Init<UE::Geometry::FDynamicGraph3<double>_>
          (FConstrainedMeshDeformationSolver *this,FDynamicGraph3<double> *param_1,
          ELaplacianWeightScheme param_2,EMatrixSolverType param_3,
          SparseMatrix<double,0,int> *param_4,SparseMatrix<double,0,int> *param_5)

{
  TUniquePtr<UE::Geometry::FConstrainedSolver,TDefaultDelete<UE::Geometry::FConstrainedSolver>_>
  *this_00;
  undefined8 uVar1;
  int iVar2;
  void *_Src;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  FDynamicGraph3<double> *pFVar6;
  bool bVar7;
  uint uVar8;
  SparseMatrix<double,0,int> *this_01;
  TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
  this_02;
  FConstrainedSolver *pFVar9;
  FConstrainedSolver *pFVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  FConstrainedSolver *pFVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
  local_res8;
  FDynamicGraph3<double> *local_res10;
  ELaplacianWeightScheme local_res18;
  EMatrixSolverType local_res20;
  ForAnyElementType local_1a8;
  int local_1a0;
  int local_19c;
  longlong local_198;
  Product<Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_const_>,Eigen::SparseMatrix<double,0,int>,2>
  local_190;
  undefined4 local_16f;
  undefined2 local_16b;
  undefined1 local_169;
  undefined1 local_160;
  uint7 uStack_15f;
  SparseMatrix<double,0,int> *pSStack_158;
  Product<Eigen::SparseMatrix<double,0,int>,Eigen::SparseMatrix<double,0,int>,2> local_150;
  Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>,Eigen::SparseMatrix<double,0,int>,2>
  local_138;
  Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,1,_1,_1>_const_>_const_,Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_const_>_const_>,Eigen::SparseMatrix<double,0,int>,2>
  local_f0 [2];
  
  iVar2 = (this->VtxLinearization).NumBndryVerts;
  pFVar10 = (FConstrainedSolver *)0x0;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  this->InternalVertexCount = this->VertexCount - iVar2;
  local_1a0 = (int)(this->VtxLinearization)._padding_;
  lVar12 = (longlong)local_1a0;
  _Src = (void *)(this->VtxLinearization)._padding_;
  uVar14 = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (local_1a0 == 0) {
    local_19c = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_1a0,0,&local_1a8,local_1a0,&local_19c);
    memcpy(local_1a8.Data,_Src,lVar12 << 2);
  }
  TVector3Arrays<double>::SetZero((TVector3Arrays<double> *)&this->BoundaryPositions,iVar2);
  pFVar6 = local_res10;
  local_198 = (longlong)iVar2;
  if (0 < iVar2) {
    uVar22 = (undefined4)__real_7fefffffffffffff;
    uVar5 = (ulonglong)__real_7fefffffffffffff >> 0x20;
    pFVar9 = pFVar10;
    pFVar15 = pFVar10;
    do {
      uVar11 = (uint)pFVar9;
      uVar13 = this->InternalVertexCount + uVar11;
      uVar8 = uVar14;
      if ((int)uVar13 < local_1a0) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = *(uint *)(local_1a8.Data + (longlong)(int)uVar13 * 4);
      if ((((int)uVar8 < 0) ||
          ((int)pFVar6->_padding_ * 0x200 + *(int *)((longlong)&pFVar6->_padding_ + 4) <= (int)uVar8
          )) || (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (pFVar6->_padding_ + (ulonglong)(uVar8 >> 9) * 8) +
                                             (ulonglong)(uVar8 & 0x1ff) * 2) - 1U))) {
        uVar20 = 0;
        uVar21 = 0;
        uVar18 = 0;
        uVar19 = 0;
        uVar16 = uVar22;
        uVar17 = (int)uVar5;
      }
      else {
        uVar8 = uVar8 * 3;
        pFVar3 = (pFVar6->Vertices).Data.Blocks.AllocatorInstance.Data;
        uVar1 = *(undefined8 *)
                 (*(longlong *)(pFVar3 + (ulonglong)(uVar8 + 2 >> 9) * 8) +
                 (ulonglong)(uVar8 + 2 & 0x1ff) * 8);
        uVar20 = (undefined4)uVar1;
        uVar21 = (undefined4)((ulonglong)uVar1 >> 0x20);
        uVar1 = *(undefined8 *)
                 (*(longlong *)(pFVar3 + (ulonglong)(uVar8 + 1 >> 9) * 8) +
                 (ulonglong)(uVar8 + 1 & 0x1ff) * 8);
        uVar18 = (undefined4)uVar1;
        uVar19 = (undefined4)((ulonglong)uVar1 >> 0x20);
        uVar1 = *(undefined8 *)
                 (*(longlong *)(pFVar3 + (ulonglong)(uVar8 >> 9) * 8) +
                 (ulonglong)(uVar8 & 0x1ff) * 8);
        uVar16 = (int)uVar1;
        uVar17 = (int)((ulonglong)uVar1 >> 0x20);
      }
      uVar13 = ~uVar11 >> 0x1f;
      uVar8 = uVar14;
      if ((int)uVar11 < *(int *)&(this->BoundaryPositions).field_0x8) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(ulonglong *)(*(longlong *)&(this->BoundaryPositions).field_0x0 + (longlong)pFVar15 * 8) =
           CONCAT44(uVar17,uVar16);
      uVar8 = uVar14;
      if ((int)uVar11 < *(int *)&(this->BoundaryPositions).field_0x18) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(ulonglong *)(*(longlong *)&(this->BoundaryPositions).field_0x10 + (longlong)pFVar15 * 8) =
           CONCAT44(uVar19,uVar18);
      uVar8 = 0;
      if ((int)uVar11 < *(int *)&(this->BoundaryPositions).field_0x28) {
        uVar8 = uVar13;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = (FConstrainedSolver *)(ulonglong)(uVar11 + 1);
      *(ulonglong *)(*(longlong *)&(this->BoundaryPositions).field_0x20 + (longlong)pFVar15 * 8) =
           CONCAT44(uVar21,uVar20);
      pFVar15 = (FConstrainedSolver *)&(pFVar15->ConstraintPositions).field_0x1;
    } while ((longlong)pFVar15 < local_198);
  }
  if (local_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  this_01 = ::operator_new(0x48);
  this_02.Ptr = (SparseMatrix<double,0,int> *)pFVar10;
  if (this_01 != (SparseMatrix<double,0,int> *)0x0) {
    this_02.Ptr = Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>
                            (this_01,param_4->m_innerSize,param_4->m_outerSize);
  }
  this_00 = &this->ConstrainedSolver;
  local_res8.Ptr = this_02.Ptr;
  if ((local_res18 & ~Valence) == Uniform) {
    local_150._padding_._0_1_ = 0;
    local_150.m_lhs = param_4;
    local_150.m_rhs = param_4;
    Eigen::SparseMatrix<double,0,int>::
    operator=<Eigen::SparseMatrix<double,0,int>,Eigen::SparseMatrix<double,0,int>_>
              (this_02.Ptr,&local_150);
    local_138.m_lhs.m_lhs.m_rows.m_value = param_4->m_innerSize;
    local_138.m_lhs.m_lhs.m_cols.m_value = param_4->m_outerSize;
    local_138.m_rhs = param_5;
    local_138.m_lhs.m_lhs.m_functor.m_other = __real_bff0000000000000;
    local_138._padding_._0_1_ = 0;
    local_138.m_lhs._padding_._0_1_ = 0;
    local_138.m_lhs.m_rhs = param_4;
    Eigen::SparseMatrix<double,0,int>::
    operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>,Eigen::SparseMatrix<double,0,int>_>
              (&this->BoundaryOperator,&local_138);
  }
  else {
    local_190.m_lhs._padding_._1_4_ = local_16f;
    local_190.m_lhs._padding_._5_2_ = local_16b;
    local_190.m_lhs._padding_._7_1_ = local_169;
    local_190._padding_._0_1_ = 0;
    local_190.m_lhs._padding_._0_1_ = 0;
    local_190.m_lhs.m_matrix = param_4;
    local_190.m_rhs = param_4;
    Eigen::SparseMatrix<double,0,int>::
    operator=<Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_const_>,Eigen::SparseMatrix<double,0,int>_>
              (this_02.Ptr,&local_190);
    local_f0[0].m_lhs.m_lhs.m_rows.m_value = param_4->m_outerSize;
    local_f0[0].m_lhs.m_lhs.m_cols.m_value = param_4->m_innerSize;
    local_160 = 0;
    pSStack_158 = param_4;
    local_f0[0].m_lhs.m_rhs._padding_ = (ulonglong)uStack_15f << 8;
    local_f0[0].m_rhs = param_5;
    local_f0[0].m_lhs.m_lhs.m_functor.m_other = __real_bff0000000000000;
    local_f0[0]._padding_._0_1_ = 0;
    local_f0[0].m_lhs._padding_._0_1_ = 0;
    local_f0[0].m_lhs.m_rhs.m_matrix = param_4;
    Eigen::SparseMatrix<double,0,int>::
    operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,1,_1,_1>_const_>_const_,Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_const_>_const_>,Eigen::SparseMatrix<double,0,int>_>
              (&this->BoundaryOperator,local_f0);
  }
  pFVar9 = ::operator_new(0xd8);
  if (pFVar9 != (FConstrainedSolver *)0x0) {
    pFVar10 = FConstrainedSolver::FConstrainedSolver(pFVar9,&local_res8,local_res20);
    this_02.Ptr = local_res8.Ptr;
  }
  pFVar9 = this_00->Ptr;
  if (pFVar9 != pFVar10) {
    this_00->Ptr = pFVar10;
    TDefaultDelete<UE::Geometry::FConstrainedSolver>::operator()
              ((TDefaultDelete<UE::Geometry::FConstrainedSolver> *)this_00,pFVar9);
  }
  if ((FConstrainedSolver *)this_02.Ptr != (FConstrainedSolver *)0x0) {
    FMemory_Free(*(void **)&(((FConstrainedSolver *)this_02.Ptr)->ConstraintPositions).field_0x18);
    FMemory_Free(*(void **)&(((FConstrainedSolver *)this_02.Ptr)->ConstraintPositions).field_0x20);
    operator_delete__(*(void **)&(((FConstrainedSolver *)this_02.Ptr)->ConstraintPositions).
                                 field_0x28);
    operator_delete__((((FConstrainedSolver *)this_02.Ptr)->SymmetricMatrixPtr).Ptr);
    ::operator_delete(this_02.Ptr,0x48);
  }
  return;
}

// Init<UE::Geometry::FDynamicMesh3> @ 14c870860

void __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::Init<UE::Geometry::FDynamicMesh3>
          (FConstrainedMeshDeformationSolver *this,FDynamicMesh3 *param_1,
          ELaplacianWeightScheme param_2,EMatrixSolverType param_3,
          SparseMatrix<double,0,int> *param_4,SparseMatrix<double,0,int> *param_5)

{
  TUniquePtr<UE::Geometry::FConstrainedSolver,TDefaultDelete<UE::Geometry::FConstrainedSolver>_>
  *this_00;
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
  this_01;
  FConstrainedSolver *pFVar8;
  FConstrainedSolver *pFVar9;
  uint uVar10;
  longlong lVar11;
  SparseMatrix<double,0,int> *pSVar12;
  FConstrainedSolver *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  TUniquePtr<Eigen::SparseMatrix<double,0,int>,TDefaultDelete<Eigen::SparseMatrix<double,0,int>_>_>
  local_res8;
  FDynamicMesh3 *local_res10;
  ELaplacianWeightScheme local_res18;
  EMatrixSolverType local_res20;
  ForAnyElementType local_178;
  int local_170;
  int local_16c;
  Product<Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_const_>,Eigen::SparseMatrix<double,0,int>,2>
  local_168;
  undefined4 local_147;
  undefined2 local_143;
  undefined1 local_141;
  undefined1 local_138;
  uint7 uStack_137;
  SparseMatrix<double,0,int> *pSStack_130;
  Product<Eigen::SparseMatrix<double,0,int>,Eigen::SparseMatrix<double,0,int>,2> local_128;
  Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>,Eigen::SparseMatrix<double,0,int>,2>
  local_110;
  Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,1,_1,_1>_const_>_const_,Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_const_>_const_>,Eigen::SparseMatrix<double,0,int>,2>
  local_c8;
  undefined8 local_68;
  
  iVar2 = (this->VtxLinearization).NumBndryVerts;
  pSVar12 = (SparseMatrix<double,0,int> *)(longlong)iVar2;
  pFVar9 = (FConstrainedSolver *)0x0;
  local_178.Data = (FScriptContainerElement *)0x0;
  this->InternalVertexCount = this->VertexCount - iVar2;
  local_170 = (int)(this->VtxLinearization)._padding_;
  lVar11 = (longlong)local_170;
  _Src = (void *)(this->VtxLinearization)._padding_;
  uVar14 = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (local_170 == 0) {
    local_16c = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_170,0,&local_178,local_170,&local_16c);
    memcpy(local_178.Data,_Src,lVar11 << 2);
  }
  TVector3Arrays<double>::SetZero((TVector3Arrays<double> *)&this->BoundaryPositions,iVar2);
  pFVar8 = pFVar9;
  pFVar13 = pFVar9;
  local_res8.Ptr = pSVar12;
  if (0 < iVar2) {
    do {
      uVar10 = (uint)pFVar8;
      uVar16 = this->InternalVertexCount + uVar10;
      uVar7 = uVar14;
      if ((int)uVar16 < local_170) {
        uVar7 = ~uVar16 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar17 = ~uVar10 >> 0x1f;
      uVar15 = (ulonglong)(*(uint *)(local_178.Data + (longlong)(int)uVar16 * 4) & 0x1ff);
      lVar11 = *(longlong *)
                ((local_res10->Vertices).Blocks.AllocatorInstance.Data +
                (ulonglong)(*(uint *)(local_178.Data + (longlong)(int)uVar16 * 4) >> 9) * 8);
      local_68 = *(undefined8 *)(lVar11 + 0x10 + uVar15 * 0x18);
      puVar1 = (undefined8 *)(lVar11 + uVar15 * 0x18);
      uVar4 = *puVar1;
      uVar5 = puVar1[1];
      uVar7 = uVar14;
      if ((int)uVar10 < *(int *)&(this->BoundaryPositions).field_0x8) {
        uVar7 = uVar17;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)(*(longlong *)&(this->BoundaryPositions).field_0x0 + (longlong)pFVar13 * 8) =
           uVar4;
      uVar7 = uVar14;
      if ((int)uVar10 < *(int *)&(this->BoundaryPositions).field_0x18) {
        uVar7 = uVar17;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)(*(longlong *)&(this->BoundaryPositions).field_0x10 + (longlong)pFVar13 * 8) =
           uVar5;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)&(this->BoundaryPositions).field_0x28) {
        uVar7 = uVar17;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined8 *)(*(longlong *)&(this->BoundaryPositions).field_0x20 + (longlong)pFVar13 * 8) =
           local_68;
      pFVar13 = (FConstrainedSolver *)&(pFVar13->ConstraintPositions).field_0x1;
      pFVar8 = (FConstrainedSolver *)(ulonglong)(uVar10 + 1);
      param_3 = local_res20;
    } while ((longlong)pFVar13 < (longlong)pSVar12);
  }
  if (local_178.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data);
  }
  pSVar12 = ::operator_new(0x48);
  this_01.Ptr = (SparseMatrix<double,0,int> *)pFVar9;
  if (pSVar12 != (SparseMatrix<double,0,int> *)0x0) {
    this_01.Ptr = Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>
                            (pSVar12,param_4->m_innerSize,param_4->m_outerSize);
  }
  this_00 = &this->ConstrainedSolver;
  local_res8.Ptr = this_01.Ptr;
  if ((local_res18 & ~Valence) == Uniform) {
    local_128._padding_._0_1_ = 0;
    local_128.m_lhs = param_4;
    local_128.m_rhs = param_4;
    Eigen::SparseMatrix<double,0,int>::
    operator=<Eigen::SparseMatrix<double,0,int>,Eigen::SparseMatrix<double,0,int>_>
              (this_01.Ptr,&local_128);
    local_110.m_lhs.m_lhs.m_rows.m_value = param_4->m_innerSize;
    local_110.m_lhs.m_lhs.m_cols.m_value = param_4->m_outerSize;
    local_110.m_rhs = param_5;
    local_110.m_lhs.m_lhs.m_functor.m_other = __real_bff0000000000000;
    local_110._padding_._0_1_ = 0;
    local_110.m_lhs._padding_._0_1_ = 0;
    local_110.m_lhs.m_rhs = param_4;
    Eigen::SparseMatrix<double,0,int>::
    operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>,Eigen::SparseMatrix<double,0,int>_>
              (&this->BoundaryOperator,&local_110);
  }
  else {
    local_168.m_lhs._padding_._1_4_ = local_147;
    local_168.m_lhs._padding_._5_2_ = local_143;
    local_168.m_lhs._padding_._7_1_ = local_141;
    local_168._padding_._0_1_ = 0;
    local_168.m_lhs._padding_._0_1_ = 0;
    local_168.m_lhs.m_matrix = param_4;
    local_168.m_rhs = param_4;
    Eigen::SparseMatrix<double,0,int>::
    operator=<Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_const_>,Eigen::SparseMatrix<double,0,int>_>
              (this_01.Ptr,&local_168);
    local_c8.m_lhs.m_lhs.m_rows.m_value = param_4->m_outerSize;
    local_c8.m_lhs.m_lhs.m_cols.m_value = param_4->m_innerSize;
    local_138 = 0;
    pSStack_130 = param_4;
    local_c8.m_lhs.m_rhs._padding_ = (ulonglong)uStack_137 << 8;
    local_c8.m_rhs = param_5;
    local_c8.m_lhs.m_lhs.m_functor.m_other = __real_bff0000000000000;
    local_c8._padding_._0_1_ = 0;
    local_c8.m_lhs._padding_._0_1_ = 0;
    local_c8.m_lhs.m_rhs.m_matrix = param_4;
    Eigen::SparseMatrix<double,0,int>::
    operator=<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,1,_1,_1>_const_>_const_,Eigen::Transpose<Eigen::SparseMatrix<double,0,int>_const_>_const_>,Eigen::SparseMatrix<double,0,int>_>
              (&this->BoundaryOperator,&local_c8);
  }
  pFVar8 = ::operator_new(0xd8);
  if (pFVar8 != (FConstrainedSolver *)0x0) {
    pFVar9 = FConstrainedSolver::FConstrainedSolver(pFVar8,&local_res8,param_3);
    this_01.Ptr = local_res8.Ptr;
  }
  pFVar8 = this_00->Ptr;
  if (pFVar8 != pFVar9) {
    this_00->Ptr = pFVar9;
    TDefaultDelete<UE::Geometry::FConstrainedSolver>::operator()
              ((TDefaultDelete<UE::Geometry::FConstrainedSolver> *)this_00,pFVar8);
  }
  if ((FConstrainedSolver *)this_01.Ptr != (FConstrainedSolver *)0x0) {
    FMemory_Free(*(void **)&(((FConstrainedSolver *)this_01.Ptr)->ConstraintPositions).field_0x18);
    FMemory_Free(*(void **)&(((FConstrainedSolver *)this_01.Ptr)->ConstraintPositions).field_0x20);
    operator_delete__(*(void **)&(((FConstrainedSolver *)this_01.Ptr)->ConstraintPositions).
                                 field_0x28);
    operator_delete__((((FConstrainedSolver *)this_01.Ptr)->SymmetricMatrixPtr).Ptr);
    ::operator_delete(this_01.Ptr,0x48);
  }
  return;
}

// FConstrainedMeshDeformationSolver @ 14c8962d0

FConstrainedMeshDeformationSolver * __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::FConstrainedMeshDeformationSolver
          (FConstrainedMeshDeformationSolver *this,FDynamicMesh3 *param_1,
          ELaplacianWeightScheme param_2,EMatrixSolverType param_3)

{
  FVertexLinearization *pFVar1;
  bool bVar2;
  SparseMatrix<double,0,int> local_b8;
  SparseMatrix<double,0,int> local_68;
  
  *(undefined8 *)&this->ConstraintPositionMap = 0;
  pFVar1 = &this->VtxLinearization;
  *(undefined8 *)&(this->ConstraintPositionMap).field_0x8 = 0;
  *(undefined8 *)&(this->ConstraintPositionMap).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FConstrainedMeshDeformationSolver_Geometry_UE__6B_;
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x28 = 0;
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x34 = 0;
  *(undefined8 *)&(this->ConstraintPositionMap).field_0x40 = 0;
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x48 = 0;
  *(undefined8 *)&this->ConstraintWeightMap = 0;
  *(undefined8 *)&(this->ConstraintWeightMap).field_0x8 = 0;
  *(undefined8 *)&(this->ConstraintWeightMap).field_0x20 = 0;
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x28 = 0;
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x34 = 0;
  *(undefined8 *)&(this->ConstraintWeightMap).field_0x40 = 0;
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x48 = 0;
  this->bConstraintPositionsDirty = true;
  this->bConstraintWeightsDirty = true;
  this->VertexCount = (param_1->VertexRefCounts).UsedCount;
  *(undefined8 *)&this->BoundaryPositions = 0;
  *(undefined8 *)&(this->BoundaryPositions).field_0x8 = 0;
  *(undefined8 *)&(this->BoundaryPositions).field_0x10 = 0;
  *(undefined8 *)&(this->BoundaryPositions).field_0x18 = 0;
  *(undefined8 *)&(this->BoundaryPositions).field_0x20 = 0;
  *(undefined8 *)&(this->BoundaryPositions).field_0x28 = 0;
  (this->ConstrainedSolver).Ptr = (FConstrainedSolver *)0x0;
  pFVar1->_padding_ = 0;
  (this->VtxLinearization)._padding_ = 0;
  (this->VtxLinearization)._padding_ = 0;
  (this->VtxLinearization)._padding_ = 0;
  (this->VtxLinearization).NumBndryVerts = 0;
  Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&this->BoundaryOperator);
  local_68._padding_._0_1_ = 0;
  local_68.m_innerNonZeros = (int *)0x0;
  local_68.m_data.m_values = (double *)0x0;
  local_68.m_data.m_indices = (int *)0x0;
  local_68.m_data.m_allocatedSize = 0;
  local_68.m_innerSize = 0;
  local_68.m_data.m_size = 0;
  FMemory_Free((void *)0x0);
  local_68.m_outerIndex = FMemory_Malloc(4,0x10);
  if (local_68.m_outerIndex == (int *)0x0) {
    ::operator_new(0xffffffffffffffff);
  }
  local_68.m_outerSize = 0;
  if (local_68.m_innerNonZeros != (int *)0x0) {
    FMemory_Free(local_68.m_innerNonZeros);
  }
  memset(local_68.m_outerIndex,0,local_68.m_outerSize * 4 + 4);
  local_b8._padding_._0_1_ = 0;
  local_b8.m_innerNonZeros = (int *)0x0;
  local_b8.m_data.m_values = (double *)0x0;
  local_b8.m_data.m_indices = (int *)0x0;
  local_b8.m_data.m_allocatedSize = 0;
  local_b8.m_innerSize = 0;
  local_b8.m_data.m_size = 0;
  FMemory_Free((void *)0x0);
  local_b8.m_outerIndex = FMemory_Malloc(4,0x10);
  if (local_b8.m_outerIndex == (int *)0x0) {
    ::operator_new(0xffffffffffffffff);
  }
  local_b8.m_outerSize = 0;
  if (local_b8.m_innerNonZeros != (int *)0x0) {
    FMemory_Free(local_b8.m_innerNonZeros);
  }
  memset(local_b8.m_outerIndex,0,local_b8.m_outerSize * 4 + 4);
  switch(param_2) {
  default:
    ConstructUniformLaplacian<UE::Geometry::FDynamicMesh3>(param_1,pFVar1,&local_68,&local_b8);
    break;
  case Umbrella:
    ConstructUmbrellaLaplacian(param_1,pFVar1,&local_68,&local_b8);
    break;
  case Valence:
    ConstructValenceWeightedLaplacian(param_1,pFVar1,&local_68,&local_b8);
    break;
  case MeanValue:
    ConstructMeanValueWeightLaplacian(param_1,pFVar1,&local_68,&local_b8);
    break;
  case Cotangent:
    bVar2 = false;
    goto LAB_14c896503;
  case ClampedCotangent:
    bVar2 = true;
LAB_14c896503:
    ConstructScaledCotangentLaplacian(param_1,pFVar1,&local_68,&local_b8,bVar2);
    break;
  case IDTCotanget:
    ConstructIDTCotangentLaplacian(param_1,pFVar1,&local_68,&local_b8,true);
  }
  Init<UE::Geometry::FDynamicMesh3>(this,param_1,param_2,param_3,&local_68,&local_b8);
  FMemory_Free(local_b8.m_outerIndex);
  FMemory_Free(local_b8.m_innerNonZeros);
  operator_delete__(local_b8.m_data.m_values);
  operator_delete__(local_b8.m_data.m_indices);
  FMemory_Free(local_68.m_outerIndex);
  FMemory_Free(local_68.m_innerNonZeros);
  operator_delete__(local_68.m_data.m_values);
  operator_delete__(local_68.m_data.m_indices);
  return this;
}

// ~FConstrainedMeshDeformationSolver @ 14c899f20

void __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::~FConstrainedMeshDeformationSolver
          (FConstrainedMeshDeformationSolver *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FConstrainedMeshDeformationSolver_Geometry_UE__6B_;
  FMemory_Free((this->BoundaryOperator).m_outerIndex);
  FMemory_Free((this->BoundaryOperator).m_innerNonZeros);
  operator_delete__((this->BoundaryOperator).m_data.m_values);
  operator_delete__((this->BoundaryOperator).m_data.m_indices);
  TDefaultDelete<UE::Geometry::FConstrainedSolver>::operator()
            ((TDefaultDelete<UE::Geometry::FConstrainedSolver> *)&this->ConstrainedSolver,
             (this->ConstrainedSolver).Ptr);
  pvVar1 = *(void **)&(this->BoundaryPositions).field_0x20;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)&(this->BoundaryPositions).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  if (*(void **)&this->BoundaryPositions != (void *)0x0) {
    FMemory::Free(*(void **)&this->BoundaryPositions);
  }
  pvVar1 = (void *)(this->VtxLinearization)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->VtxLinearization)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConstraintWeightMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,double>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConstraintWeightMap);
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ConstraintPositionMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Solvers::FPositionConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Solvers::FPositionConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Solvers::FPositionConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ConstraintPositionMap);
  this->_padding_ = (longlong)&___7IConstrainedMeshSolver_Solvers_UE__6B_;
  return;
}

// AddConstraint @ 14c8b6e40

void __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::AddConstraint
          (FConstrainedMeshDeformationSolver *this,int param_1,double param_2,
          TVector<double> *param_3,bool param_4)

{
  undefined8 uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  int local_a8 [2];
  double local_a0;
  int *local_98;
  double *local_90;
  int local_88;
  int iStack_84;
  double dStack_80;
  undefined8 uStack_78;
  bool local_68;
  undefined3 uStack_67;
  undefined4 uStack_64;
  int local_58 [2];
  FPositionConstraint local_50;
  
  iVar2 = (int)(this->VtxLinearization)._padding_;
  if (param_1 <= iVar2) {
    uVar6 = 0;
    if (param_1 < iVar2) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar2 = *(int *)((this->VtxLinearization)._padding_ + (longlong)param_1 * 4);
    if ((iVar2 != -1) && (iVar2 < this->InternalVertexCount)) {
      this->bConstraintPositionsDirty = true;
      this->bConstraintWeightsDirty = true;
      dStack_80 = (param_3->field0_0x0)._s_0.X;
      uVar4 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
      local_68 = param_4;
      uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
      uStack_78._0_4_ = (undefined4)uVar4;
      uStack_78._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_50.ConstraintIndex = iVar2;
      local_50.ElementID = param_1;
      local_50.Position.field0_0x0._16_4_ = (undefined4)uVar1;
      local_50.Position.field0_0x0._20_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
      local_50.Position.field0_0x0._8_4_ = (undefined4)uStack_78;
      local_50.Position.field0_0x0._12_4_ = uStack_78._4_4_;
      local_50.bPostFix = param_4;
      local_50._33_3_ = uStack_67;
      local_50._36_4_ = uStack_64;
      local_88 = param_1;
      iStack_84 = iVar2;
      uStack_78 = uVar4;
      local_58[0] = iVar2;
      local_50.Position.field0_0x0._s_0.X = dStack_80;
      local_50.Weight = param_2;
      TMapBase<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
      ::Emplace<int,UE::Solvers::FPositionConstraint>
                ((TMapBase<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
                  *)&this->ConstraintPositionMap,local_58,&local_50);
      local_98 = local_a8;
      local_90 = &local_a0;
      local_a8[0] = iVar2;
      local_a0 = param_2;
      TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_&&,double_&&>_>
                ((TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>
                  *)&this->ConstraintWeightMap,
                 (TPairInitializer<int_&&,double_&&> *)&stack0x00000010,(bool *)&local_98);
    }
  }
  return;
}

// ClearConstraintPositions @ 14c8c6ca0

void __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::ClearConstraintPositions
          (FConstrainedMeshDeformationSolver *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->ConstraintPositionMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,UE::Solvers::FPositionConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,UE::Solvers::FPositionConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>,FDefaultSetAllocator>
                      *)&this->ConstraintPositionMap);
  }
  puVar1 = &(this->ConstraintPositionMap).field_0xc;
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&this->ConstraintPositionMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ConstraintPositionMap).field_0x2c;
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ConstraintPositionMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ConstraintPositionMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ConstraintPositionMap).field_0x48 = 1;
    TSet<TTuple<int,UE::Solvers::FPositionConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,UE::Solvers::FPositionConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>,FDefaultSetAllocator>
              *)&this->ConstraintPositionMap);
  }
  this->bConstraintPositionsDirty = true;
  return;
}

// ClearConstraintWeights @ 14c8c6da0

void __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::ClearConstraintWeights
          (FConstrainedMeshDeformationSolver *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->ConstraintWeightMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>
                    *)&this->ConstraintWeightMap);
  }
  puVar1 = &(this->ConstraintWeightMap).field_0xc;
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->ConstraintWeightMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ConstraintWeightMap).field_0x2c;
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ConstraintWeightMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ConstraintWeightMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ConstraintWeightMap).field_0x48 = 1;
    TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>
                *)&this->ConstraintWeightMap);
  }
  this->bConstraintWeightsDirty = true;
  return;
}

// ClearConstraints @ 14c8c6eb0

void __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::ClearConstraints
          (FConstrainedMeshDeformationSolver *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < *(int *)&(this->ConstraintPositionMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,UE::Solvers::FPositionConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,UE::Solvers::FPositionConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>,FDefaultSetAllocator>
                      *)&this->ConstraintPositionMap);
  }
  puVar1 = &(this->ConstraintPositionMap).field_0xc;
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,8,0,(ForAnyElementType *)&this->ConstraintPositionMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ConstraintPositionMap).field_0x2c;
  *(undefined4 *)&(this->ConstraintPositionMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ConstraintPositionMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ConstraintPositionMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ConstraintPositionMap).field_0x48 = 1;
    TSet<TTuple<int,UE::Solvers::FPositionConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,UE::Solvers::FPositionConstraint>,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>,FDefaultSetAllocator>
              *)&this->ConstraintPositionMap);
  }
  this->bConstraintPositionsDirty = true;
  bVar3 = 1 < *(int *)&(this->ConstraintWeightMap).field_0x48;
  if (!bVar3) {
    TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>
                    *)&this->ConstraintWeightMap);
  }
  puVar1 = &(this->ConstraintWeightMap).field_0xc;
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->ConstraintWeightMap,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x34 = 0;
  iVar2 = *(int *)&(this->ConstraintWeightMap).field_0x2c;
  *(undefined4 *)&(this->ConstraintWeightMap).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->ConstraintWeightMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ConstraintWeightMap).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->ConstraintWeightMap).field_0x48 = 1;
    TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>::Rehash
              ((TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>
                *)&this->ConstraintWeightMap);
  }
  this->bConstraintWeightsDirty = true;
  return;
}

// CopyBoundaryPositions @ 14c8d5870

bool __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::CopyBoundaryPositions
          (FConstrainedMeshDeformationSolver *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  
  if (param_1->ArrayNum != (int)(this->VtxLinearization)._padding_) {
    return false;
  }
  iVar8 = this->VertexCount - this->InternalVertexCount;
  uVar13 = 0;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      uVar11 = this->InternalVertexCount + uVar13;
      uVar9 = 0;
      if ((int)uVar11 < (int)(this->VtxLinearization)._padding_) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar12 = ~uVar13 >> 0x1f;
      uVar9 = *(uint *)((this->VtxLinearization)._padding_ + (longlong)(int)uVar11 * 4);
      lVar14 = (longlong)(int)uVar9;
      uVar11 = 0;
      if ((int)uVar13 < *(int *)&(this->BoundaryPositions).field_0x28) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar1 = *(undefined8 *)(*(longlong *)&(this->BoundaryPositions).field_0x20 + lVar10 * 8);
      uVar11 = 0;
      if ((int)uVar13 < *(int *)&(this->BoundaryPositions).field_0x18) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar2 = *(undefined8 *)(*(longlong *)&(this->BoundaryPositions).field_0x10 + lVar10 * 8);
      uVar11 = 0;
      if ((int)uVar13 < *(int *)&(this->BoundaryPositions).field_0x8) {
        uVar11 = uVar12;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      uVar3 = *(undefined8 *)(*(longlong *)&this->BoundaryPositions + lVar10 * 8);
      uVar11 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar11 = ~uVar9 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      uVar13 = uVar13 + 1;
      lVar10 = lVar10 + 1;
      *(undefined8 *)(pFVar4 + lVar14 * 0x18) = uVar3;
      *(undefined8 *)(pFVar4 + lVar14 * 0x18 + 8) = uVar2;
      *(undefined8 *)(pFVar4 + lVar14 * 0x18 + 0x10) = uVar1;
    } while (lVar10 < iVar8);
  }
  return true;
}

// CopyInternalPositions @ 14c8d5da0

bool __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::CopyInternalPositions
          (FConstrainedMeshDeformationSolver *this,FSOAPositions *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  
  iVar4 = *(int *)&param_1->field_0x8;
  if (((((*(int *)&param_1->field_0x18 != iVar4) ||
        (iVar14 = iVar4, *(int *)&param_1->field_0x28 != iVar4)) && (iVar14 = -1, iVar4 != -1)) ||
      ((*(int *)&param_1->field_0x18 != iVar14 || (*(int *)&param_1->field_0x28 != iVar14)))) ||
     (param_2->ArrayNum != (int)(this->VtxLinearization)._padding_)) {
    return false;
  }
  uVar11 = 0;
  if (0 < this->InternalVertexCount) {
    lVar12 = 0;
    lVar15 = 0;
    do {
      uVar13 = ~uVar11 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar11 < (int)(this->VtxLinearization)._padding_) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      uVar9 = *(uint *)(lVar15 + (this->VtxLinearization)._padding_);
      lVar16 = (longlong)(int)uVar9;
      uVar10 = 0;
      if ((int)uVar11 < *(int *)&param_1->field_0x28) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      uVar1 = *(undefined8 *)(*(longlong *)&param_1->field_0x20 + lVar12);
      uVar10 = 0;
      if ((int)uVar11 < *(int *)&param_1->field_0x18) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      uVar2 = *(undefined8 *)(*(longlong *)&param_1->field_0x10 + lVar12);
      uVar10 = 0;
      if ((int)uVar11 < *(int *)&param_1->field_0x8) {
        uVar10 = uVar13;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      uVar3 = *(undefined8 *)(*(longlong *)param_1 + lVar12);
      uVar13 = 0;
      if ((int)uVar9 < param_2->ArrayNum) {
        uVar13 = ~uVar9 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      pFVar5 = (param_2->AllocatorInstance).Data;
      uVar11 = uVar11 + 1;
      lVar15 = lVar15 + 4;
      lVar12 = lVar12 + 8;
      *(undefined8 *)(pFVar5 + lVar16 * 0x18) = uVar3;
      *(undefined8 *)(pFVar5 + lVar16 * 0x18 + 8) = uVar2;
      *(undefined8 *)(pFVar5 + lVar16 * 0x18 + 0x10) = uVar1;
    } while ((int)uVar11 < this->InternalVertexCount);
  }
  return true;
}

// Deform @ 14c8d7220

bool __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::Deform
          (FConstrainedMeshDeformationSolver *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  return false;
}

// IsConstrained @ 14c901cb0

bool __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::IsConstrained
          (FConstrainedMeshDeformationSolver *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  bool bVar7;
  
  bVar7 = false;
  iVar5 = (int)(this->VtxLinearization)._padding_;
  if (iVar5 < param_1) {
    return false;
  }
  uVar4 = 0;
  if (param_1 < iVar5) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar4 = *(uint *)((this->VtxLinearization)._padding_ + (longlong)param_1 * 4);
  if ((uVar4 != 0xffffffff) && ((int)uVar4 < this->InternalVertexCount)) {
    if (*(int *)&(this->ConstraintWeightMap).field_0x8 !=
        *(int *)&(this->ConstraintWeightMap).field_0x34) {
      puVar6 = *(undefined1 **)&(this->ConstraintWeightMap).field_0x40;
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &(this->ConstraintWeightMap).field_0x38;
      }
      iVar5 = *(int *)(puVar6 + (ulonglong)
                                (*(int *)&(this->ConstraintWeightMap).field_0x48 - 1U & uVar4) * 4);
      if (iVar5 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this->ConstraintWeightMap + (longlong)iVar5 * 0x18) == uVar4)
          goto LAB_14c901d9c;
          iVar5 = *(int *)(*(longlong *)&this->ConstraintWeightMap + 0x10 + (longlong)iVar5 * 0x18);
        } while (iVar5 != -1);
      }
    }
    iVar5 = -1;
LAB_14c901d9c:
    bVar7 = iVar5 != -1;
  }
  return bVar7;
}

// SetMaxIterations @ 14c916e80

bool __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::SetMaxIterations
          (FConstrainedMeshDeformationSolver *this,int param_1)

{
  FConstrainedSolver *pFVar1;
  IMatrixSolverBase *pIVar2;
  char cVar3;
  
  pFVar1 = (this->ConstrainedSolver).Ptr;
  cVar3 = (**(code **)((longlong)*(pFVar1->MatrixSolver).Ptr + 8))();
  if ((cVar3 != '\0') && (pIVar2 = (pFVar1->MatrixSolver).Ptr, pIVar2 != (IMatrixSolverBase *)0x0))
  {
    (**(code **)((longlong)*pIVar2 + 0x40))(pIVar2,param_1);
    return true;
  }
  return false;
}

// SetTolerance @ 14c917340

bool __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::SetTolerance
          (FConstrainedMeshDeformationSolver *this,double param_1)

{
  FConstrainedSolver *pFVar1;
  IMatrixSolverBase *pIVar2;
  char cVar3;
  
  pFVar1 = (this->ConstrainedSolver).Ptr;
  cVar3 = (**(code **)((longlong)*(pFVar1->MatrixSolver).Ptr + 8))();
  if ((cVar3 != '\0') && (pIVar2 = (pFVar1->MatrixSolver).Ptr, pIVar2 != (IMatrixSolverBase *)0x0))
  {
    (**(code **)((longlong)*pIVar2 + 0x48))(pIVar2,SUB84(param_1,0));
    return true;
  }
  return false;
}

// UpdateConstraintPosition @ 14c921480

bool __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::UpdateConstraintPosition
          (FConstrainedMeshDeformationSolver *this,int param_1,TVector<double> *param_2,bool param_3
          )

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  FPositionConstraint *pFVar8;
  
  bVar6 = false;
  iVar1 = (int)(this->VtxLinearization)._padding_;
  if (iVar1 < param_1) {
    bVar6 = false;
  }
  else {
    uVar7 = 0;
    if (param_1 < iVar1) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    iVar1 = *(int *)((this->VtxLinearization)._padding_ + (longlong)param_1 * 4);
    if ((iVar1 != -1) && (iVar1 < this->InternalVertexCount)) {
      pFVar8 = TMapBase<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
               ::Find((TMapBase<int,UE::Solvers::FPositionConstraint,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Solvers::FPositionConstraint,0>_>
                       *)&this->ConstraintPositionMap,iVar1);
      if (pFVar8 == (FPositionConstraint *)0x0) {
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7716163460299489159>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Solvers\\Internal\\ConstrainedMeshDeformationSolver.cpp"
                           ,0x79,"Found != nullptr");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
      }
      else {
        dVar3 = (param_2->field0_0x0)._s_0.Y;
        bVar6 = true;
        (pFVar8->Position).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
        (pFVar8->Position).field0_0x0._s_0.Y = dVar3;
        (pFVar8->Position).field0_0x0._s_0.Z = (param_2->field0_0x0)._s_0.Z;
        pFVar8->bPostFix = param_3;
        this->bConstraintPositionsDirty = true;
      }
    }
  }
  return bVar6;
}

// UpdateConstraintWeight @ 14c9217f0

bool __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::UpdateConstraintWeight
          (FConstrainedMeshDeformationSolver *this,int param_1,double param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  bool bVar7;
  int local_38 [2];
  double local_30;
  int *local_28;
  double *local_20;
  
  bVar7 = false;
  iVar5 = (int)(this->VtxLinearization)._padding_;
  if (iVar5 < param_1) {
    bVar7 = false;
  }
  else {
    uVar4 = 0;
    if (param_1 < iVar5) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    local_38[0] = *(int *)((this->VtxLinearization)._padding_ + (longlong)param_1 * 4);
    if ((local_38[0] != -1) && (local_38[0] < this->InternalVertexCount)) {
      local_28 = local_38;
      local_20 = &local_30;
      this->bConstraintWeightsDirty = true;
      local_30 = param_2;
      TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>::
      Emplace<TPairInitializer<int_&&,double_&&>_>
                ((TSet<TTuple<int,double>,TDefaultMapHashableKeyFuncs<int,double,0>,FDefaultSetAllocator>
                  *)&this->ConstraintWeightMap,
                 (TPairInitializer<int_&&,double_&&> *)&stack0x00000010,(bool *)&local_28);
      if (*(int *)&(this->ConstraintPositionMap).field_0x8 !=
          *(int *)&(this->ConstraintPositionMap).field_0x34) {
        puVar6 = *(undefined1 **)&(this->ConstraintPositionMap).field_0x40;
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &(this->ConstraintPositionMap).field_0x38;
        }
        iVar5 = *(int *)(puVar6 + (ulonglong)
                                  (*(int *)&(this->ConstraintPositionMap).field_0x48 - 1U & param_1)
                                  * 4);
        if (iVar5 != -1) {
          do {
            if (*(int *)((longlong)iVar5 * 0x40 + *(longlong *)&this->ConstraintPositionMap) ==
                param_1) goto LAB_14c92190a;
            iVar5 = *(int *)((longlong)iVar5 * 0x40 + 0x38 +
                            *(longlong *)&this->ConstraintPositionMap);
          } while (iVar5 != -1);
        }
      }
      iVar5 = -1;
LAB_14c92190a:
      bVar7 = iVar5 != -1;
    }
  }
  return bVar7;
}

// UpdateSolverConstraints @ 14c923880

void __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::UpdateSolverConstraints
          (FConstrainedMeshDeformationSolver *this)

{
  if (this->bConstraintWeightsDirty != false) {
    FConstrainedSolver::SetConstraintWeights
              ((this->ConstrainedSolver).Ptr,&this->ConstraintWeightMap);
    this->bConstraintWeightsDirty = false;
  }
  if (this->bConstraintPositionsDirty != false) {
    FConstrainedSolver::SetContraintPositions
              ((this->ConstrainedSolver).Ptr,&this->ConstraintPositionMap);
    this->bConstraintPositionsDirty = false;
  }
  return;
}

// UpdateWithPostFixConstraints @ 14c924850

void __thiscall
UE::Geometry::FConstrainedMeshDeformationSolver::UpdateWithPostFixConstraints
          (FConstrainedMeshDeformationSolver *this,FSOAPositions *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  iVar4 = *(int *)&(this->ConstraintPositionMap).field_0x28;
  puVar1 = &(this->ConstraintPositionMap).field_0x10;
  iVar15 = 0;
  iVar17 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar18 = *(uint **)&(this->ConstraintPositionMap).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar13 = *puVar18;
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14c9248fd;
      uVar13 = puVar18[lVar9 + 1];
    }
    uVar7 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = iVar17 + -1 + (int)lVar9;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14c9248fd:
  uVar13 = *(uint *)&(this->ConstraintPositionMap).field_0x28;
  uVar11 = uVar13 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uVar7,iVar15);
  TStack_70.CurrentBitIndex = iVar8;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iVar8;
  TStack_70.BaseBitIndex = iVar17;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->ConstraintPositionMap).field_0x8 -
                       *(int *)&(this->ConstraintPositionMap).field_0x34);
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->ConstraintPositionMap).field_0x28;
  if (uVar13 != uVar7) {
    puVar16 = *(undefined1 **)&(this->ConstraintPositionMap).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar13 == 0) {
      lVar9 = (longlong)iVar15;
      uVar11 = uVar11 + 0x20;
      iVar15 = iVar15 + 1;
      uVar13 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14c924a10;
      uVar13 = *(uint *)(puVar16 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar13 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar13) {
      uVar13 = uVar7;
    }
  }
LAB_14c924a10:
  do {
    if (*(int *)&(this->ConstraintPositionMap).field_0x8 -
        *(int *)&(this->ConstraintPositionMap).field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,UE::Solvers::FPositionConstraint>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_70.CurrentBitIndex == uVar13) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    lVar9 = *(longlong *)&this->ConstraintPositionMap;
    lVar10 = (longlong)TStack_70.CurrentBitIndex * 0x40;
    uVar7 = *(uint *)(lVar10 + lVar9);
    lVar12 = (longlong)(int)uVar7;
    if (*(char *)(lVar10 + 0x28 + lVar9) != '\0') {
      uVar3 = *(undefined8 *)(lVar10 + 0x10 + lVar9);
      uVar14 = ~uVar7 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar7 < *(int *)&param_1->field_0x8) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined8 *)(*(longlong *)param_1 + lVar12 * 8) = uVar3;
      uVar3 = *(undefined8 *)(lVar10 + 0x18 + lVar9);
      uVar11 = 0;
      if ((int)uVar7 < *(int *)&param_1->field_0x18) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined8 *)(*(longlong *)&param_1->field_0x10 + lVar12 * 8) = uVar3;
      uVar3 = *(undefined8 *)(lVar10 + 0x20 + lVar9);
      uVar11 = 0;
      if ((int)uVar7 < *(int *)&param_1->field_0x28) {
        uVar11 = uVar14;
      }
      if ((uVar11 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      *(undefined8 *)(*(longlong *)&param_1->field_0x20 + lVar12 * 8) = uVar3;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

