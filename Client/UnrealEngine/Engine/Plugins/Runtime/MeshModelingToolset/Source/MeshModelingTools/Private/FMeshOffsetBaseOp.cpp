// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 3

// FMeshOffsetBaseOp @ 14ccb9d10

FMeshOffsetBaseOp * __thiscall
UE::Geometry::FMeshOffsetBaseOp::FMeshOffsetBaseOp(FMeshOffsetBaseOp *this,FDynamicMesh3 *param_1)

{
  FSimpleMeshProcessingBaseOp::FSimpleMeshProcessingBaseOp
            ((FSimpleMeshProcessingBaseOp *)this,param_1);
  this->_padding_ = (longlong)&___7FMeshOffsetBaseOp_Geometry_UE__6B_;
  (this->OffsetRange).Max = 1.0;
  this->OffsetSign = 1.0;
  (this->OffsetRange).Min = 0.0;
  (this->BaseNormals).Object = (FMeshNormals *)0x0;
  (this->BaseNormals).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->BoundaryCache).bIsBoundary.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundaryCache).bIsBoundary.ArrayNum = 0;
  (this->BoundaryCache).bIsBoundary.ArrayMax = 0;
  (this->BoundaryCache).BoundaryVerts.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BoundaryCache).BoundaryVerts.ArrayNum = 0;
  (this->BoundaryCache).BoundaryVerts.ArrayMax = 0;
  (this->BoundaryLoops).Object = (FMeshBoundaryLoops *)0x0;
  (this->BoundaryLoops).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->bFixedBoundary = false;
  this->bCreateShell = false;
  (this->WeightMap).Object = (TIndexedWeightMap<float> *)0x0;
  (this->WeightMap).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bUseWeightMap = false;
  return this;
}

// ~FMeshOffsetBaseOp @ 14ccc30c0

void __thiscall UE::Geometry::FMeshOffsetBaseOp::~FMeshOffsetBaseOp(FMeshOffsetBaseOp *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->WeightMap).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BoundaryLoops).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->BoundaryCache).BoundaryVerts.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BoundaryCache).bIsBoundary.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BaseNormals).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FSimpleMeshProcessingBaseOp_Geometry_UE__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FDynamicMeshOperator::~FDynamicMeshOperator((FDynamicMeshOperator *)this);
  return;
}

// CalculateResult @ 14cce7e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshOffsetBaseOp::CalculateResult(FMeshOffsetBaseOp *this,FProgressCancel *param_1)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  longlong lVar11;
  uint uVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  char cVar14;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar15;
  undefined1 auStackY_698 [32];
  undefined1 local_668;
  char local_667;
  char local_666;
  TArray<int,TSizedDefaultAllocator<32>_> local_660;
  uint local_650;
  FDynamicMeshEditor local_648;
  FScriptContainerElement *local_640;
  FMeshOffsetBaseOp *local_638;
  FScriptContainerElement *local_630;
  FMeshBoundaryLoops *local_628;
  FJoinMeshLoops local_618;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_598;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_568;
  FDynamicMesh3 local_538;
  FMeshIndexMappings local_308;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_698;
  local_638 = this;
  FMeshBoundaryCache::Calculate(&this->BoundaryCache,(FDynamicMesh3 *)this->_padding_);
  if (this->bCreateShell == false) {
    (**(code **)(this->_padding_ + 0x20))(this,param_1);
    FSimpleMeshProcessingBaseOp::UpdateResultMeshPositions((FSimpleMeshProcessingBaseOp *)this);
    FSimpleMeshProcessingBaseOp::UpdateResultMeshNormals((FSimpleMeshProcessingBaseOp *)this);
  }
  else {
    if (((this->BoundaryLoops).Object == (FMeshBoundaryLoops *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("BoundaryLoops.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Public\\DeformationOps\\MeshOffsetOps.h"
                           ,0x44,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FDynamicMesh3::FDynamicMesh3(&local_538);
    FDynamicMesh3::Copy(&local_538,(FDynamicMesh3 *)this->_padding_,true,true,true,true);
    bVar4 = this->OffsetSign == 0.0;
    bVar2 = 0.0 < this->OffsetSign;
    local_666 = bVar2 || bVar4;
    if (bVar2 || bVar4) {
      FDynamicMesh3::ReverseOrientation(&local_538,true);
      (**(code **)(this->_padding_ + 0x20))(this,param_1);
      FSimpleMeshProcessingBaseOp::UpdateResultMeshPositions((FSimpleMeshProcessingBaseOp *)this);
    }
    else {
      (**(code **)(this->_padding_ + 0x20))(this,param_1);
      FSimpleMeshProcessingBaseOp::UpdateResultMeshPositions((FSimpleMeshProcessingBaseOp *)this);
      FDynamicMesh3::ReverseOrientation((FDynamicMesh3 *)this->_padding_,true);
    }
    local_648.Mesh = (FDynamicMesh3 *)this->_padding_;
    FMeshIndexMappings::FMeshIndexMappings(&local_308);
    local_598._0_8_ = 0;
    local_598._40_8_ = 0;
    local_568._0_8_ = 0;
    local_568._40_8_ = 0;
    FDynamicMeshEditor::AppendMesh(&local_648,&local_538,&local_308,&local_568,&local_598,false);
    cVar14 = this->bFixedBoundary;
    local_667 = cVar14;
    if (((this->BoundaryLoops).Object == (FMeshBoundaryLoops *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_628 = (this->BoundaryLoops).Object;
    local_650 = (local_628->Loops).ArrayNum;
    uVar8 = (ulonglong)(int)local_650;
    pFVar9 = (local_628->Loops).AllocatorInstance.Data;
    pFVar10 = pFVar9 + uVar8 * 0x40;
    pTVar15 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar9 + 8);
    local_630 = pFVar10;
    while( true ) {
      local_640 = pFVar9;
      if ((local_628->Loops).ArrayNum != (int)uVar8) {
        local_668 = 0;
        `TCheckedPointerIterator<UE::Geometry::FEdgeLoop,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_668);
      }
      if (pFVar9 == pFVar10) break;
      uVar1 = pTVar15->ArrayNum;
      local_660.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_660.ArrayNum = 0;
      local_660.ArrayMax = 0;
      if ((int)uVar1 < 1) {
        if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
        }
      }
      else {
        iVar5 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar1,&local_660.AllocatorInstance,&local_660.ArrayNum,
                           &local_660.ArrayMax);
        memset(local_660.AllocatorInstance.Data + (longlong)iVar5 * 4,0,(longlong)(int)uVar1 << 2);
        uVar12 = 0;
        lVar11 = 0;
        do {
          uVar6 = 0;
          if ((int)uVar12 < pTVar15->ArrayNum) {
            uVar6 = ~uVar12 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar5 = TIndexMap<int>::GetTo
                            (&local_308.VertexMap,
                             *(int *)((pTVar15->AllocatorInstance).Data + lVar11));
          uVar6 = 0;
          if ((int)uVar12 < local_660.ArrayNum) {
            uVar6 = ~uVar12 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar12 = uVar12 + 1;
          *(int *)(local_660.AllocatorInstance.Data + lVar11) = iVar5;
          lVar11 = lVar11 + 4;
          pFVar9 = local_640;
          pFVar10 = local_630;
          this = local_638;
          cVar14 = local_667;
        } while ((int)uVar12 < (int)uVar1);
      }
      if (local_666 == '\0') {
        pTVar7 = &local_660;
        pTVar13 = pTVar15;
      }
      else {
        pTVar7 = pTVar15;
        pTVar13 = &local_660;
      }
      if (cVar14 == '\0') {
        FJoinMeshLoops::FJoinMeshLoops(&local_618,(FDynamicMesh3 *)this->_padding_,pTVar7,pTVar13);
        FJoinMeshLoops::Apply(&local_618);
        local_618._padding_ = (longlong)&___7FJoinMeshLoops_Geometry_UE__6B_;
        if (local_618.QuadGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_618.QuadGroups.AllocatorInstance.Data);
        }
        if (local_618.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_618.NewGroups.AllocatorInstance.Data);
        }
        if (local_618.JoinTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_618.JoinTriangles.AllocatorInstance.Data);
        }
        if (local_618.JoinQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_618.JoinQuads.AllocatorInstance.Data);
        }
        if (local_618.LoopB.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_618.LoopB.AllocatorInstance.Data);
        }
        if (local_618.LoopA.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_618.LoopA.AllocatorInstance.Data);
        }
      }
      else {
        FDynamicMeshEditor::WeldVertexLoops(&local_648,pTVar7,pTVar13);
      }
      if (local_660.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_660.AllocatorInstance.Data);
      }
      pFVar9 = pFVar9 + 0x40;
      uVar8 = (ulonglong)local_650;
      pTVar15 = pTVar15 + 4;
    }
    FSimpleMeshProcessingBaseOp::UpdateResultMeshNormals((FSimpleMeshProcessingBaseOp *)this);
    FMeshIndexMappings::~FMeshIndexMappings(&local_308);
    FDynamicMesh3::~FDynamicMesh3(&local_538);
  }
  return;
}

