// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 8

// FMeshDiffusionIntegrator @ 14c897310

FMeshDiffusionIntegrator * __thiscall
UE::Geometry::FMeshDiffusionIntegrator::FMeshDiffusionIntegrator
          (FMeshDiffusionIntegrator *this,FDynamicMesh3 *param_1,ELaplacianWeightScheme param_2,
          FProgressCancel *param_3)

{
  this->_padding_ = (longlong)&___7FMeshDiffusionIntegrator_Geometry_UE__6B_;
  (this->VtxLinearization)._padding_ = 0;
  (this->VtxLinearization)._padding_ = 0;
  (this->VtxLinearization)._padding_ = 0;
  (this->VtxLinearization)._padding_ = 0;
  (this->VtxLinearization).NumBndryVerts = 0;
  Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&this->DiffusionOperator);
  Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>(&this->BoundaryOperator);
  (this->EdgeVerts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeVerts).ArrayNum = 0;
  (this->EdgeVerts).ArrayMax = 0;
  *(undefined8 *)&this->BoundaryPositions = 0;
  *(undefined8 *)&(this->BoundaryPositions).field_0x8 = 0;
  *(undefined8 *)&(this->BoundaryPositions).field_0x10 = 0;
  *(undefined8 *)&(this->BoundaryPositions).field_0x18 = 0;
  *(undefined8 *)&(this->BoundaryPositions).field_0x20 = 0;
  *(undefined8 *)&(this->BoundaryPositions).field_0x28 = 0;
  *(undefined8 *)this->Tmp = 0;
  *(undefined8 *)&this->Tmp[0].field_0x8 = 0;
  *(undefined8 *)&this->Tmp[0].field_0x10 = 0;
  *(undefined8 *)&this->Tmp[0].field_0x18 = 0;
  *(undefined8 *)&this->Tmp[0].field_0x20 = 0;
  *(undefined8 *)&this->Tmp[0].field_0x28 = 0;
  *(undefined8 *)(this->Tmp + 1) = 0;
  *(undefined8 *)&this->Tmp[1].field_0x8 = 0;
  *(undefined8 *)&this->Tmp[1].field_0x10 = 0;
  *(undefined8 *)&this->Tmp[1].field_0x18 = 0;
  *(undefined8 *)&this->Tmp[1].field_0x20 = 0;
  *(undefined8 *)&this->Tmp[1].field_0x28 = 0;
  this->Id = 0;
  this->bIsSymmetric = false;
  this->MinDiagonalValue = 0.0;
  this->VertexCount = (param_1->VertexRefCounts).UsedCount;
  this->ProgressCancel = param_3;
  return this;
}

// ~FMeshDiffusionIntegrator @ 14c89a2f0

void __thiscall
UE::Geometry::FMeshDiffusionIntegrator::~FMeshDiffusionIntegrator(FMeshDiffusionIntegrator *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  FSOAPositions *pFVar3;
  longlong lVar4;
  
  this->_padding_ = (longlong)&___7FMeshDiffusionIntegrator_Geometry_UE__6B_;
  lVar4 = 2;
  pFVar3 = (FSOAPositions *)&this->Id;
  do {
    lVar4 = lVar4 + -1;
    if (*(void **)&pFVar3[-1].field_0x20 != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar3[-1].field_0x20);
    }
    if (*(void **)&pFVar3[-1].field_0x10 != (void *)0x0) {
      FMemory::Free(*(void **)&pFVar3[-1].field_0x10);
    }
    pvVar1 = *(void **)(pFVar3 + -1);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    pFVar3 = pFVar3 + -1;
  } while (lVar4 != 0);
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
  pFVar2 = (this->EdgeVerts).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FMemory_Free((this->BoundaryOperator).m_outerIndex);
  FMemory_Free((this->BoundaryOperator).m_innerNonZeros);
  operator_delete__((this->BoundaryOperator).m_data.m_values);
  operator_delete__((this->BoundaryOperator).m_data.m_indices);
  FMemory_Free((this->DiffusionOperator).m_outerIndex);
  FMemory_Free((this->DiffusionOperator).m_innerNonZeros);
  operator_delete__((this->DiffusionOperator).m_data.m_values);
  operator_delete__((this->DiffusionOperator).m_data.m_indices);
  pvVar1 = (void *)(this->VtxLinearization)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = (void *)(this->VtxLinearization)._padding_;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  return;
}

// CopyBoundaryPositions @ 14c8d5b10

bool __thiscall
UE::Geometry::FMeshDiffusionIntegrator::CopyBoundaryPositions
          (FMeshDiffusionIntegrator *this,
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

// CopyInternalPositions @ 14c8d6050

bool __thiscall
UE::Geometry::FMeshDiffusionIntegrator::CopyInternalPositions
          (FMeshDiffusionIntegrator *this,FSOAPositions *param_1,
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
     ((int)(this->VtxLinearization)._padding_ != param_2->ArrayNum)) {
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

// GetPositions @ 14c8f51d0

void __thiscall
UE::Geometry::FMeshDiffusionIntegrator::GetPositions
          (FMeshDiffusionIntegrator *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = (uint)(this->VtxLinearization)._padding_;
  if (-1 < (int)uVar2) {
    piVar1 = &param_1->ArrayMax;
    param_1->ArrayNum = 0;
    if (*piVar1 != uVar2) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar2,&param_1->AllocatorInstance,0,piVar1);
    }
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar2,&param_1->AllocatorInstance,&param_1->ArrayNum,piVar1);
    CopyInternalPositions(this,this->Tmp + this->Id,param_1);
    CopyBoundaryPositions(this,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
}

// Initialize @ 14c8fbf50

void __thiscall
UE::Geometry::FMeshDiffusionIntegrator::Initialize
          (FMeshDiffusionIntegrator *this,FDynamicMesh3 *param_1,ELaplacianWeightScheme param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  double dVar24;
  double dVar25;
  ulonglong uVar15;
  
  (**(code **)(this->_padding_ + 8))
            (this,param_2,param_1,&this->bIsSymmetric,&this->VtxLinearization,
             &this->DiffusionOperator,&this->BoundaryOperator);
  iVar4 = (this->VtxLinearization).NumBndryVerts;
  iVar12 = this->VertexCount - iVar4;
  this->InternalVertexCount = iVar12;
  TVector3Arrays<double>::SetZero((TVector3Arrays<double> *)this->Tmp,iVar12);
  TVector3Arrays<double>::SetZero
            ((TVector3Arrays<double> *)(this->Tmp + 1),this->InternalVertexCount);
  uVar14 = 0;
  uVar15 = 0;
  plVar1 = &(this->VtxLinearization)._padding_;
  if (0 < this->InternalVertexCount) {
    lVar22 = 0;
    lVar21 = 0;
    uVar18 = uVar14;
    do {
      uVar16 = ~uVar18 >> 0x1f;
      uVar23 = 0;
      if ((int)uVar18 < (int)*plVar1) {
        uVar23 = uVar16;
      }
      if ((uVar23 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar23 = *(uint *)(lVar21 + (this->VtxLinearization)._padding_);
      uVar17 = (ulonglong)(uVar23 & 0x1ff);
      lVar20 = *(longlong *)
                ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar23 >> 9) * 8);
      uVar3 = *(undefined8 *)(lVar20 + 0x10 + uVar17 * 0x18);
      puVar2 = (undefined8 *)(lVar20 + uVar17 * 0x18);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      uVar23 = 0;
      if ((int)uVar18 < *(int *)&this->Tmp[0].field_0x8) {
        uVar23 = uVar16;
      }
      if ((uVar23 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined8 *)(lVar22 + *(longlong *)&this->Tmp[0].field_0x0) = uVar8;
      uVar23 = 0;
      if ((int)uVar18 < *(int *)&this->Tmp[0].field_0x18) {
        uVar23 = uVar16;
      }
      if ((uVar23 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined8 *)(lVar22 + *(longlong *)&this->Tmp[0].field_0x10) = uVar9;
      uVar23 = 0;
      if ((int)uVar18 < *(int *)&this->Tmp[0].field_0x28) {
        uVar23 = uVar16;
      }
      if ((uVar23 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar18 = uVar18 + 1;
      lVar21 = lVar21 + 4;
      *(undefined8 *)(lVar22 + *(longlong *)&this->Tmp[0].field_0x20) = uVar3;
      lVar22 = lVar22 + 8;
    } while ((int)uVar18 < this->InternalVertexCount);
  }
  TVector3Arrays<double>::SetZero((TVector3Arrays<double> *)&this->BoundaryPositions,iVar4);
  uVar17 = uVar15;
  if (0 < iVar4) {
    do {
      uVar23 = this->InternalVertexCount + uVar14;
      uVar18 = 0;
      if ((int)uVar23 < (int)*plVar1) {
        uVar18 = ~uVar23 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar16 = ~uVar14 >> 0x1f;
      uVar18 = *(uint *)((this->VtxLinearization)._padding_ + (longlong)(int)uVar23 * 4);
      uVar19 = (ulonglong)(uVar18 & 0x1ff);
      lVar21 = *(longlong *)
                ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8);
      uVar3 = *(undefined8 *)(lVar21 + 0x10 + uVar19 * 0x18);
      puVar2 = (undefined8 *)(lVar21 + uVar19 * 0x18);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      uVar18 = 0;
      if ((int)uVar14 < *(int *)&(this->BoundaryPositions).field_0x8) {
        uVar18 = uVar16;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined8 *)(*(longlong *)&(this->BoundaryPositions).field_0x0 + uVar17 * 8) = uVar8;
      uVar18 = 0;
      if ((int)uVar14 < *(int *)&(this->BoundaryPositions).field_0x18) {
        uVar18 = uVar16;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined8 *)(*(longlong *)&(this->BoundaryPositions).field_0x10 + uVar17 * 8) = uVar9;
      uVar18 = 0;
      if ((int)uVar14 < *(int *)&(this->BoundaryPositions).field_0x28) {
        uVar18 = uVar16;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar14 = uVar14 + 1;
      *(undefined8 *)(*(longlong *)&(this->BoundaryPositions).field_0x20 + uVar17 * 8) = uVar3;
      uVar17 = uVar17 + 1;
    } while ((longlong)uVar17 < (longlong)iVar4);
  }
  iVar4 = (int)(this->DiffusionOperator).m_innerSize;
  this->MinDiagonalValue = 0.0;
  if (0 < iVar4) {
    dVar25 = 0.0;
    uVar17 = uVar15;
    do {
      piVar5 = (this->DiffusionOperator).m_innerNonZeros;
      piVar6 = (this->DiffusionOperator).m_outerIndex;
      if (piVar5 == (int *)0x0) {
        iVar12 = piVar6[uVar17 + 1];
      }
      else {
        iVar12 = piVar5[uVar17] + piVar6[uVar17];
      }
      lVar21 = (longlong)piVar6[uVar17];
      lVar22 = (longlong)iVar12;
      iVar12 = (int)uVar15;
      if (lVar21 < lVar22) {
        piVar5 = (this->DiffusionOperator).m_data.m_indices;
        if (iVar12 == piVar5[lVar22 + -1]) {
          dVar24 = (this->DiffusionOperator).m_data.m_values[lVar22 + -1];
        }
        else {
          lVar20 = lVar22 + -1;
          lVar13 = lVar21;
          if (lVar21 < lVar20) {
            do {
              lVar11 = lVar13 + lVar20 >> 1;
              lVar21 = lVar11 + 1;
              if (iVar12 <= piVar5[lVar11]) {
                lVar21 = lVar13;
                lVar20 = lVar11;
              }
              lVar13 = lVar21;
            } while (lVar21 < lVar20);
            if (lVar22 <= lVar21) goto LAB_14c8fc438;
          }
          if (piVar5[lVar21] != iVar12) goto LAB_14c8fc438;
          dVar24 = (this->DiffusionOperator).m_data.m_values[lVar21];
        }
      }
      else {
LAB_14c8fc438:
        dVar24 = 0.0;
      }
      if (dVar24 <= dVar25) {
        dVar25 = dVar24;
      }
      uVar15 = (ulonglong)(iVar12 + 1);
      uVar17 = uVar17 + 1;
      this->MinDiagonalValue = dVar25;
    } while ((longlong)uVar17 < (longlong)iVar4);
  }
  return;
}

// Integrate_BackwardEuler @ 14c8ffa50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshDiffusionIntegrator::Integrate_BackwardEuler
          (FMeshDiffusionIntegrator *this,EMatrixSolverType param_1,int param_2,double param_3)

{
  int iVar1;
  FProgressCancel *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  FSOAPositions *pFVar8;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar9;
  FSOAPositions *pFVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar22;
  uint uVar23;
  assign_op<double,double> local_res8 [8];
  EMatrixSolverType local_res10;
  int local_res18;
  add_assign_op<double,double> local_3f8;
  assign_op<double,double> local_3f7;
  assign_op<double,double> local_3f6;
  add_assign_op<double,double> local_3f5;
  assign_op<double,double> local_3f4 [4];
  longlong *local_3f0;
  TArray<double,TSizedDefaultAllocator<32>_> local_3e8;
  TArray<double,TSizedDefaultAllocator<32>_> local_3d8;
  TArray<double,TSizedDefaultAllocator<32>_> local_3c8;
  SparseMatrix<double,0,int> local_3b8;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_368;
  undefined8 uStack_360;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_358;
  undefined8 uStack_350;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_348;
  longlong *local_340;
  evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_> local_338;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_330;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_310;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>,0>
  local_2f0;
  generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>,Eigen::internal::assign_op<double,double>,0>
  local_2d0;
  FScriptContainerElement *local_2b0 [2];
  longlong local_2a0;
  FScriptContainerElement *local_298 [2];
  longlong local_288;
  longlong local_280;
  longlong lStack_278;
  longlong local_270;
  longlong local_260;
  longlong lStack_258;
  longlong local_250;
  longlong local_240;
  longlong lStack_238;
  longlong local_230;
  longlong local_220;
  longlong lStack_218;
  longlong local_210;
  CwiseBinaryOp<Eigen::internal::scalar_difference_op<double,double>,Eigen::SparseMatrix<double,0,int>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>_const_>
  local_200;
  SparseMatrix<double,0,int> local_1a8;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_150;
  Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,0>
  local_130;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_c8;
  Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,0>
  local_a8;
  ulonglong uVar21;
  
  local_res10 = param_1;
  local_res18 = param_2;
  Eigen::SparseMatrix<double,0,int>::SparseMatrix<double,0,int>
            (&local_1a8,(this->DiffusionOperator).m_innerSize,(this->DiffusionOperator).m_outerSize)
  ;
  Eigen::SparseMatrix<double,0,int>::setIdentity(&local_1a8);
  uVar22 = SUB84(param_3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar23 = (uint)((ulonglong)param_3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  local_200.m_rhs.m_rhs = &this->DiffusionOperator;
  local_200.m_lhs = &local_1a8;
  local_200.m_rhs.m_lhs.m_functor.m_other = (double)CONCAT44(uVar23,uVar22);
  local_200.m_rhs.m_lhs.m_rows.m_value = (this->DiffusionOperator).m_innerSize;
  uVar21 = 0;
  local_200.m_rhs.m_lhs.m_cols.m_value = (this->DiffusionOperator).m_outerSize;
  local_200._padding_._0_1_ = 0;
  local_200.m_rhs._padding_._0_1_ = 0;
  local_3b8._padding_._0_1_ = 0;
  local_3b8.m_outerSize = 0;
  local_3b8.m_innerSize = 0;
  local_3b8.m_outerIndex = (int *)0x0;
  local_3b8.m_innerNonZeros = (int *)0x0;
  local_3b8.m_data.m_values = (double *)0x0;
  local_3b8.m_data.m_indices = (int *)0x0;
  local_3b8.m_data.m_size = 0;
  local_3b8.m_data.m_allocatedSize = 0;
  Eigen::internal::
  assign_sparse_to_sparse<Eigen::SparseMatrix<double,0,int>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_difference_op<double,double>,Eigen::SparseMatrix<double,0,int>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>_const_>_>
            (&local_3b8,&local_200);
  if (local_3b8.m_innerNonZeros != (int *)0x0) {
    lVar16 = 1;
    iVar15 = local_3b8.m_outerIndex[1];
    local_3b8.m_outerIndex[1] = *local_3b8.m_innerNonZeros;
    if (1 < local_3b8.m_outerSize) {
      lVar13 = 4;
      do {
        lVar19 = (longlong)iVar15;
        iVar15 = *(int *)(lVar13 + 4 + (longlong)local_3b8.m_outerIndex);
        if ((lVar19 != local_3b8.m_outerIndex[lVar16] &&
             -1 < lVar19 - local_3b8.m_outerIndex[lVar16]) &&
           (0 < local_3b8.m_innerNonZeros[lVar16])) {
          uVar17 = uVar21;
          lVar18 = lVar19 * 8;
          lVar19 = lVar19 * 4;
          do {
            local_3b8.m_data.m_indices[(longlong)local_3b8.m_outerIndex[lVar16] + uVar17] =
                 *(int *)(lVar19 + (longlong)local_3b8.m_data.m_indices);
            lVar12 = (longlong)local_3b8.m_outerIndex[lVar16] + uVar17;
            uVar17 = uVar17 + 1;
            local_3b8.m_data.m_values[lVar12] =
                 *(double *)(lVar18 + (longlong)local_3b8.m_data.m_values);
            lVar18 = lVar18 + 8;
            lVar19 = lVar19 + 4;
          } while ((longlong)uVar17 < (longlong)local_3b8.m_innerNonZeros[lVar16]);
        }
        lVar13 = lVar13 + 4;
        local_3b8.m_outerIndex[lVar16 + 1] =
             local_3b8.m_innerNonZeros[lVar16] + local_3b8.m_outerIndex[lVar16];
        lVar16 = lVar16 + 1;
      } while (lVar16 < local_3b8.m_outerSize);
    }
    FMemory_Free(local_3b8.m_innerNonZeros);
    local_3b8.m_innerNonZeros = (int *)0x0;
    Eigen::internal::CompressedStorage<double,int>::resize
              (&local_3b8.m_data,(longlong)local_3b8.m_outerIndex[local_3b8.m_outerSize],0.0);
    if (local_3b8.m_data.m_size < local_3b8.m_data.m_allocatedSize) {
      Eigen::internal::CompressedStorage<double,int>::reallocate
                (&local_3b8.m_data,local_3b8.m_data.m_size);
    }
  }
  ConstructMatrixSolver((EMatrixSolverType *)&local_3f0);
  plVar14 = local_3f0;
  local_340 = local_3f0;
  (**(code **)(*local_3f0 + 0x28))(local_3f0,&local_3b8,this->bIsSymmetric);
  cVar5 = (**(code **)(*plVar14 + 0x38))(plVar14);
  if (cVar5 != '\0') {
    iVar15 = this->InternalVertexCount;
    local_3e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3e8.ArrayNum = 0;
    local_3e8.ArrayMax = 0;
    local_3d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3d8.ArrayNum = 0;
    local_3d8.ArrayMax = 0;
    local_3c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3c8.ArrayNum = 0;
    local_3c8.ArrayMax = 0;
    TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_3e8,iVar15,Default);
    TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_3d8,iVar15,Default);
    TArray<double,TSizedDefaultAllocator<32>_>::SetNum(&local_3c8,iVar15,Default);
    cVar5 = (**(code **)(*plVar14 + 8))(plVar14);
    this->Id = 0;
    plVar14 = local_3f0;
    if (cVar5 == '\0') {
      if (0 < param_2) {
        do {
          iVar15 = 0;
          pFVar2 = this->ProgressCancel;
          if (pFVar2 != (FProgressCancel *)0x0) {
            if (pFVar2->WasCancelled != false) break;
            Core::Private::Function::CheckCallable(*(void **)&pFVar2->CancelF);
            plVar3 = *(longlong **)&(pFVar2->CancelF).field_0x28;
            pcVar4 = *(code **)&pFVar2->CancelF;
            plVar11 = (longlong *)&(pFVar2->CancelF).field_0x10;
            if (plVar3 != (longlong *)0x0) {
              plVar11 = plVar3;
            }
            uVar7 = (**(code **)(*plVar11 + 8))();
            bVar6 = (bool)(*pcVar4)(uVar7);
            pFVar2->WasCancelled = bVar6;
            if (bVar6 != false) break;
          }
          iVar1 = this->Id;
          this->Id = 1 - iVar1;
          do {
            pFVar10 = this->Tmp + iVar1;
            if (iVar15 != 0) {
              lVar16 = 0x10;
              if (iVar15 != 1) {
                lVar16 = 0x20;
              }
              pFVar10 = (FSOAPositions *)((longlong)&this->Tmp[iVar1].field_0x0 + lVar16);
            }
            local_c8._padding_ = (longlong)*(int *)&pFVar10->field_0x8;
            if (*(int *)&pFVar10->field_0x8 < 1) {
              local_c8._padding_ = 0;
              local_c8._padding_ = 0;
            }
            else {
              local_c8._padding_ = *(longlong *)pFVar10;
              local_240 = local_c8._padding_;
              lStack_238 = local_c8._padding_;
            }
            local_a8.m_lhs.m_lhs.m_rows.m_value = (this->BoundaryOperator).m_innerSize;
            local_a8.m_lhs.m_lhs.m_cols.m_value = (this->BoundaryOperator).m_outerSize;
            pFVar10 = &this->BoundaryPositions;
            if (iVar15 != 0) {
              lVar16 = 0x10;
              if (iVar15 != 1) {
                lVar16 = 0x20;
              }
              pFVar10 = (FSOAPositions *)(&(this->BoundaryPositions).field_0x0 + lVar16);
            }
            local_a8.m_rhs._padding_ = (longlong)*(int *)&pFVar10->field_0x8;
            if (*(int *)&pFVar10->field_0x8 < 1) {
              local_a8.m_rhs._padding_ = 0;
              local_a8.m_rhs._padding_ = 0;
            }
            else {
              local_a8.m_rhs._padding_ = *(longlong *)pFVar10;
              local_220 = local_a8.m_rhs._padding_;
              lStack_218 = local_a8.m_rhs._padding_;
            }
            local_a8.m_lhs.m_lhs.m_functor.m_other = (double)CONCAT44(uVar23,uVar22);
            local_a8.m_lhs._padding_._0_1_ = 0;
            local_c8._padding_ = local_230;
            local_a8.m_rhs._padding_ = local_210;
            if (iVar15 == 0) {
              pTVar9 = &local_3e8;
            }
            else {
              pTVar9 = &local_3c8;
              if (iVar15 == 1) {
                pTVar9 = &local_3d8;
              }
            }
            local_310._padding_ = (longlong)pTVar9->ArrayNum;
            if (pTVar9->ArrayNum < 1) {
              local_310._padding_ = 0;
              local_310._padding_ = 0;
            }
            else {
              local_310._padding_ = (longlong)(pTVar9->AllocatorInstance).Data;
            }
            local_358 = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)0x0;
            uStack_350 = 0;
            local_a8.m_lhs.m_rhs = &this->BoundaryOperator;
            Eigen::internal::
            call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,Eigen::internal::assign_op<double,double>_>
                      ((Matrix<double,_1,1,0,_1,1> *)&local_358,&local_c8,&local_3f6);
            Eigen::internal::
            call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,0>,Eigen::internal::add_assign_op<double,double>_>
                      ((Matrix<double,_1,1,0,_1,1> *)&local_358,&local_a8,&local_3f5);
            local_338 = local_358;
            local_298[0] = (FScriptContainerElement *)local_310._padding_;
            local_288 = local_310._padding_;
            local_2d0.m_dst =
                 (evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> *)
                 local_298;
            local_2d0.m_src = &local_338;
            local_2d0.m_functor = local_3f4;
            local_2d0.m_dstExpr = &local_310;
            Eigen::internal::
            dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,-1,1,0,-1,1>_>,Eigen::internal::assign_op<double,double>,0>,3,0>
            ::run(&local_2d0);
            FMemory_Free((void *)local_358);
            plVar14 = local_3f0;
            iVar15 = iVar15 + 1;
          } while (iVar15 < 3);
          (**(code **)(*local_3f0 + 0x10))(local_3f0,&local_3e8,this->Tmp + this->Id);
          uVar20 = (int)uVar21 + 1;
          uVar21 = (ulonglong)uVar20;
        } while ((int)uVar20 < local_res18);
      }
    }
    else if (0 < param_2) {
      do {
        iVar15 = 0;
        pFVar2 = this->ProgressCancel;
        if (pFVar2 != (FProgressCancel *)0x0) {
          if (pFVar2->WasCancelled != false) break;
          Core::Private::Function::CheckCallable(*(void **)&pFVar2->CancelF);
          plVar3 = *(longlong **)&(pFVar2->CancelF).field_0x28;
          pcVar4 = *(code **)&pFVar2->CancelF;
          plVar11 = (longlong *)&(pFVar2->CancelF).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar11 = plVar3;
          }
          uVar7 = (**(code **)(*plVar11 + 8))();
          bVar6 = (bool)(*pcVar4)(uVar7);
          pFVar2->WasCancelled = bVar6;
          if (bVar6 != false) break;
        }
        iVar1 = this->Id;
        this->Id = 1 - iVar1;
        pFVar10 = this->Tmp + iVar1;
        do {
          pFVar8 = pFVar10;
          if (iVar15 != 0) {
            lVar16 = 0x10;
            if (iVar15 != 1) {
              lVar16 = 0x20;
            }
            pFVar8 = (FSOAPositions *)((longlong)&pFVar10->field_0x0 + lVar16);
          }
          local_150._padding_ = (longlong)*(int *)&pFVar8->field_0x8;
          if (*(int *)&pFVar8->field_0x8 < 1) {
            local_150._padding_ = 0;
            local_150._padding_ = 0;
          }
          else {
            local_150._padding_ = *(longlong *)pFVar8;
            local_280 = local_150._padding_;
            lStack_278 = local_150._padding_;
          }
          local_130.m_lhs.m_lhs.m_rows.m_value = (this->BoundaryOperator).m_innerSize;
          local_130.m_lhs.m_lhs.m_cols.m_value = (this->BoundaryOperator).m_outerSize;
          pFVar8 = &this->BoundaryPositions;
          if (iVar15 != 0) {
            lVar16 = 0x10;
            if (iVar15 != 1) {
              lVar16 = 0x20;
            }
            pFVar8 = (FSOAPositions *)(&(this->BoundaryPositions).field_0x0 + lVar16);
          }
          local_130.m_rhs._padding_ = (longlong)*(int *)&pFVar8->field_0x8;
          if (*(int *)&pFVar8->field_0x8 < 1) {
            local_130.m_rhs._padding_ = 0;
            local_130.m_rhs._padding_ = 0;
          }
          else {
            local_130.m_rhs._padding_ = *(longlong *)pFVar8;
            local_260 = local_130.m_rhs._padding_;
            lStack_258 = local_130.m_rhs._padding_;
          }
          local_130.m_lhs.m_lhs.m_functor.m_other = (double)CONCAT44(uVar23,uVar22);
          local_130.m_lhs._padding_._0_1_ = 0;
          local_150._padding_ = local_270;
          local_130.m_rhs._padding_ = local_250;
          if (iVar15 == 0) {
            pTVar9 = &local_3e8;
          }
          else {
            pTVar9 = &local_3c8;
            if (iVar15 == 1) {
              pTVar9 = &local_3d8;
            }
          }
          local_330._padding_ = (longlong)pTVar9->ArrayNum;
          if (pTVar9->ArrayNum < 1) {
            local_330._padding_ = 0;
            local_330._padding_ = 0;
          }
          else {
            local_330._padding_ = (longlong)(pTVar9->AllocatorInstance).Data;
          }
          local_368 = (evaluator<Eigen::Matrix<double,_1,1,0,_1,1>_>)0x0;
          uStack_360 = 0;
          local_130.m_lhs.m_rhs = &this->BoundaryOperator;
          Eigen::internal::
          call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,Eigen::internal::assign_op<double,double>_>
                    ((Matrix<double,_1,1,0,_1,1> *)&local_368,&local_150,local_res8);
          Eigen::internal::
          call_assignment_no_alias<Eigen::Matrix<double,_1,1,0,_1,1>,Eigen::Product<Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,_1,0,_1,_1>_const_>_const_,Eigen::SparseMatrix<double,0,int>_const_>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,0>,Eigen::internal::add_assign_op<double,double>_>
                    ((Matrix<double,_1,1,0,_1,1> *)&local_368,&local_130,&local_3f8);
          local_348 = local_368;
          local_2b0[0] = (FScriptContainerElement *)local_330._padding_;
          local_2a0 = local_330._padding_;
          local_2f0.m_dst =
               (evaluator<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_> *)
               local_2b0;
          local_2f0.m_src = &local_348;
          local_2f0.m_functor = &local_3f7;
          local_2f0.m_dstExpr = &local_330;
          Eigen::internal::
          dense_assignment_loop<Eigen::internal::generic_dense_assignment_kernel<Eigen::internal::evaluator<Eigen::Map<Eigen::Matrix<double,-1,1,0,-1,1>,0,Eigen::Stride<0,0>_>_>,Eigen::internal::evaluator<Eigen::Matrix<double,-1,1,0,-1,1>_>,Eigen::internal::assign_op<double,double>,0>,3,0>
          ::run(&local_2f0);
          FMemory_Free((void *)local_368);
          plVar14 = local_3f0;
          iVar15 = iVar15 + 1;
        } while (iVar15 < 3);
        (**(code **)(*local_340 + 0x50))(local_340,pFVar10,&local_3e8,this->Tmp + this->Id);
        uVar20 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar20;
      } while ((int)uVar20 < local_res18);
    }
    if (local_3c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.AllocatorInstance.Data);
    }
    if (local_3d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.AllocatorInstance.Data);
    }
    if (local_3e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3e8.AllocatorInstance.Data);
    }
  }
  if (plVar14 != (longlong *)0x0) {
    (**(code **)*plVar14)(plVar14,1);
  }
  FMemory_Free(local_3b8.m_outerIndex);
  FMemory_Free(local_3b8.m_innerNonZeros);
  operator_delete__(local_3b8.m_data.m_values);
  operator_delete__(local_3b8.m_data.m_indices);
  FMemory_Free(local_1a8.m_outerIndex);
  FMemory_Free(local_1a8.m_innerNonZeros);
  operator_delete__(local_1a8.m_data.m_values);
  operator_delete__(local_1a8.m_data.m_indices);
  return;
}

// Integrate_ForwardEuler @ 14c9002e0

void __thiscall
UE::Geometry::FMeshDiffusionIntegrator::Integrate_ForwardEuler
          (FMeshDiffusionIntegrator *this,int param_1,double param_2)

{
  SparseMatrix<double,0,int> *pSVar1;
  SparseMatrix<double,0,int> *pSVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  FProgressCancel *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  undefined8 uVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  assign_op<double,double> local_res8 [8];
  assign_op<double,double> local_res10 [8];
  assign_op<double,double> local_res18 [16];
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_188;
  longlong local_168;
  ulonglong uStack_160;
  longlong local_158;
  longlong local_148;
  ulonglong uStack_140;
  longlong local_138;
  Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_> local_128;
  CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,0>_const_,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,0>_const_>_const_>_const_>
  local_108;
  
  iVar14 = 0;
  this->Id = 0;
  if (__real_3ff0000000000000 <= param_2) {
    param_2 = __real_3ff0000000000000;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  dVar9 = param_2 / this->MinDiagonalValue;
  uVar15 = SUB84(dVar9,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar16 = (uint)((ulonglong)dVar9 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  if (0 < param_1) {
    do {
      pFVar6 = this->ProgressCancel;
      if (pFVar6 != (FProgressCancel *)0x0) {
        if (pFVar6->WasCancelled != false) {
          return;
        }
        Core::Private::Function::CheckCallable(*(void **)&pFVar6->CancelF);
        plVar7 = *(longlong **)&(pFVar6->CancelF).field_0x28;
        pcVar8 = *(code **)&pFVar6->CancelF;
        plVar12 = (longlong *)&(pFVar6->CancelF).field_0x10;
        if (plVar7 != (longlong *)0x0) {
          plVar12 = plVar7;
        }
        uVar11 = (**(code **)(*plVar12 + 8))();
        bVar10 = (bool)(*pcVar8)(uVar11);
        pFVar6->WasCancelled = bVar10;
        if (bVar10 != false) {
          return;
        }
      }
      iVar3 = this->Id;
      pSVar1 = &this->DiffusionOperator;
      iVar13 = 1 - iVar3;
      this->Id = iVar13;
      uVar4 = *(uint *)&this->Tmp[iVar3].field_0x8;
      local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_ = (longlong)uVar4;
      if ((int)uVar4 < 1) {
        local_108.m_lhs._padding_ = 0;
        local_108.m_lhs._padding_ = 0;
        local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_ = 0;
        local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_ = 0;
      }
      else {
        local_108.m_lhs._padding_ = *(longlong *)(this->Tmp + iVar3);
        local_108.m_lhs._padding_ = (longlong)(int)uVar4;
        local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_ = *(longlong *)(this->Tmp + iVar3);
        local_188._padding_ = local_108.m_lhs._padding_;
        local_188._padding_ = local_108.m_lhs._padding_;
        local_168 = local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_;
        uStack_160 = local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_;
      }
      iVar5 = *(int *)&(this->BoundaryPositions).field_0x8;
      local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_ = (longlong)iVar5;
      pSVar2 = &this->BoundaryOperator;
      if (iVar5 < 1) {
        local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_ = 0;
        local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_ = 0;
      }
      else {
        local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_ = *(longlong *)&this->BoundaryPositions;
        local_148 = local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_;
        uStack_140 = local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_;
      }
      local_108.m_rhs.m_lhs.m_rows.m_value = (this->BoundaryOperator).m_innerSize;
      local_108.m_lhs._padding_ = local_188._padding_;
      local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_ = local_158;
      local_108.m_rhs.m_lhs.m_functor.m_other = (double)CONCAT44(uVar16,uVar15);
      iVar5 = *(int *)&this->Tmp[iVar13].field_0x8;
      local_128._padding_ = (longlong)iVar5;
      local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_ = local_138;
      if (iVar5 < 1) {
        local_128._padding_ = 0;
        local_128._padding_ = 0;
      }
      else {
        local_128._padding_ = *(longlong *)(this->Tmp + iVar13);
      }
      local_108.m_rhs.m_rhs.m_lhs.m_lhs = pSVar1;
      local_108.m_rhs.m_rhs.m_rhs.m_lhs = pSVar2;
      Eigen::internal::
      call_assignment_no_alias<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,0>_const_,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,0>_const_>_const_>_const_>,Eigen::internal::assign_op<double,double>_>
                (&local_128,&local_108,local_res10);
      uVar4 = *(uint *)&this->Tmp[iVar3].field_0x18;
      local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_ = (longlong)uVar4;
      if ((int)uVar4 < 1) {
        local_108.m_lhs._padding_ = 0;
        local_108.m_lhs._padding_ = 0;
        local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_ = 0;
        local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_ = 0;
      }
      else {
        local_108.m_lhs._padding_ = *(longlong *)&this->Tmp[iVar3].field_0x10;
        local_108.m_lhs._padding_ = (longlong)(int)uVar4;
        local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_ = *(longlong *)&this->Tmp[iVar3].field_0x10;
        local_148 = local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_;
        uStack_140 = local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_;
        local_128._padding_ = local_108.m_lhs._padding_;
        local_128._padding_ = local_108.m_lhs._padding_;
      }
      iVar13 = *(int *)&(this->BoundaryPositions).field_0x18;
      local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_ = (longlong)iVar13;
      if (iVar13 < 1) {
        local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_ = 0;
        local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_ = 0;
      }
      else {
        local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_ =
             *(longlong *)&(this->BoundaryPositions).field_0x10;
        local_168 = local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_;
        uStack_160 = local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_;
      }
      local_108.m_rhs.m_lhs.m_rows.m_value = (this->BoundaryOperator).m_innerSize;
      local_108.m_lhs._padding_ = local_128._padding_;
      local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_ = local_138;
      local_108.m_rhs.m_lhs.m_functor.m_other = (double)CONCAT44(uVar16,uVar15);
      iVar13 = *(int *)&this->Tmp[this->Id].field_0x18;
      local_188._padding_ = (longlong)iVar13;
      local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_ = local_158;
      if (iVar13 < 1) {
        local_188._padding_ = 0;
        local_188._padding_ = 0;
      }
      else {
        local_188._padding_ = *(longlong *)&this->Tmp[this->Id].field_0x10;
      }
      local_108.m_rhs.m_rhs.m_lhs.m_lhs = pSVar1;
      local_108.m_rhs.m_rhs.m_rhs.m_lhs = pSVar2;
      Eigen::internal::
      call_assignment_no_alias<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,0>_const_,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,0>_const_>_const_>_const_>,Eigen::internal::assign_op<double,double>_>
                (&local_188,&local_108,local_res8);
      uVar4 = *(uint *)&this->Tmp[iVar3].field_0x28;
      local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_ = (longlong)uVar4;
      if ((int)uVar4 < 1) {
        local_108.m_lhs._padding_ = 0;
        local_108.m_lhs._padding_ = 0;
        local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_ = 0;
        local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_ = 0;
      }
      else {
        local_108.m_lhs._padding_ = *(longlong *)&this->Tmp[iVar3].field_0x20;
        local_108.m_lhs._padding_ = (longlong)(int)uVar4;
        local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_ = *(longlong *)&this->Tmp[iVar3].field_0x20;
        local_148 = local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_;
        uStack_140 = local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_;
        local_128._padding_ = local_108.m_lhs._padding_;
        local_128._padding_ = local_108.m_lhs._padding_;
      }
      iVar3 = *(int *)&(this->BoundaryPositions).field_0x28;
      local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_ = (longlong)iVar3;
      if (iVar3 < 1) {
        local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_ = 0;
        local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_ = 0;
      }
      else {
        local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_ =
             *(longlong *)&(this->BoundaryPositions).field_0x20;
        local_168 = local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_;
        uStack_160 = local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_;
      }
      local_108.m_rhs.m_lhs.m_rows.m_value = (this->BoundaryOperator).m_innerSize;
      local_108.m_lhs._padding_ = local_128._padding_;
      local_108.m_rhs.m_rhs.m_lhs.m_rhs._padding_ = local_138;
      local_108.m_rhs.m_lhs.m_functor.m_other = (double)CONCAT44(uVar16,uVar15);
      iVar3 = *(int *)&this->Tmp[this->Id].field_0x28;
      local_188._padding_ = (longlong)iVar3;
      local_108.m_rhs.m_rhs.m_rhs.m_rhs._padding_ = local_158;
      if (iVar3 < 1) {
        local_188._padding_ = 0;
        local_188._padding_ = 0;
      }
      else {
        local_188._padding_ = *(longlong *)&this->Tmp[this->Id].field_0x20;
      }
      local_108.m_rhs.m_rhs.m_lhs.m_lhs = pSVar1;
      local_108.m_rhs.m_rhs.m_rhs.m_lhs = pSVar2;
      Eigen::internal::
      call_assignment_no_alias<Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_product_op<double,double>,Eigen::CwiseNullaryOp<Eigen::internal::scalar_constant_op<double>,Eigen::Matrix<double,_1,1,0,_1,1>_const_>_const_,Eigen::CwiseBinaryOp<Eigen::internal::scalar_sum_op<double,double>,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,0>_const_,Eigen::Product<Eigen::SparseMatrix<double,0,int>,Eigen::Map<Eigen::Matrix<double,_1,1,0,_1,1>,0,Eigen::Stride<0,0>_>,0>_const_>_const_>_const_>,Eigen::internal::assign_op<double,double>_>
                (&local_188,&local_108,local_res18);
      iVar14 = iVar14 + 1;
    } while (iVar14 < param_1);
  }
  return;
}

