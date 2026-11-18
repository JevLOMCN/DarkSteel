// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 19

// SmoothOverlay<float,1> @ 14c7a0120

/* WARNING: Enum "ETriangleWeight": Some values do not have unique names */

bool __thiscall
UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,1>
          (FSmoothDynamicMeshAttributes *this,TDynamicMeshOverlay<float,1> *param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  FDynamicMesh3 *pFVar7;
  int iVar8;
  int iVar9;
  <lambda_1> local_res8;
  undefined7 uStackX_9;
  TDynamicMeshOverlay<float,1> *local_res10;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_res18;
  TArray<float,TSizedDefaultAllocator<32>_> local_108;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  TArray<bool,TSizedDefaultAllocator<32>_> local_e8;
  TArrayView<std::nullptr_t,int> local_d8;
  code *local_c8;
  FSmoothDynamicMeshAttributes **local_c0;
  code *local_b8;
  FSmoothDynamicMeshAttributes **local_b0;
  FAverageOverlayToVertices local_a8;
  FSmoothDynamicMeshAttributes *local_78;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_70;
  TArray<float,TSizedDefaultAllocator<32>_> *local_68;
  ForAnyElementType *local_60;
  FSmoothDynamicMeshAttributes *local_58;
  TDynamicMeshOverlay<float,1> **local_50;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_48;
  ForAnyElementType *local_40;
  
  if (((0 < this->NumIterations) && (0.0 < this->Strength)) &&
     (pFVar7 = this->Mesh, (pFVar7->EdgeRefCounts).UsedCount != 0)) {
    if ((param_2->ArrayNum != 0) && (param_2->ArrayNum != 1)) {
      return false;
    }
    local_res10 = param_1;
    local_res18 = param_2;
    if ((this->EdgeWeightMethod == CotanWeights) &&
       ((this->CotangentEdgeWeights).ArrayNum !=
        (pFVar7->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
        (pFVar7->EdgeRefCounts).RefCounts.CurBlockUsed)) {
      MeshDeformation::ConstructEdgeCotanWeightsDataArray
                (pFVar7,&this->CotangentEdgeWeights,__real_c0f86a0000000000,__real_40f86a0000000000)
      ;
      pFVar7 = this->Mesh;
    }
    if ((this->EdgeWeightMethod == EdgeLength) &&
       ((this->EdgeLengthWeights).ArrayNum !=
        (pFVar7->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
        (pFVar7->EdgeRefCounts).RefCounts.CurBlockUsed)) {
      TMeshQueries<UE::Geometry::FDynamicMesh3>::GetAllEdgeLengths
                (pFVar7,&this->EdgeLengthWeights,(double *)&local_res8);
      this->EdgeLengthThreshold =
           ((double)CONCAT71(uStackX_9,local_res8) / (double)(this->Mesh->EdgeRefCounts).UsedCount)
           * __real_3f50624dd2f1a9fc;
    }
    pTVar1 = &this->ExpandedSelection;
    iVar9 = 0;
    piVar2 = &(this->ExpandedSelection).ArrayMax;
    (this->ExpandedSelection).ArrayNum = 0;
    if ((this->ExpandedSelection).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->VIDToExpandedSelectionIdx);
    if ((this->Selection).ArrayNum != 0) {
      TMeshQueries<UE::Geometry::FDynamicMesh3>::ExpandVertexSelectionToNeighbors
                (this->Mesh,&this->Selection,pTVar1,&this->VIDToExpandedSelectionIdx);
    }
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    FAverageOverlayToVertices::FAverageOverlayToVertices(&local_a8,this->Mesh);
    if (((this->Selection).ArrayNum != 0) && (&local_a8.Selection != pTVar1)) {
      if (local_a8.Selection.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Selection.AllocatorInstance.Data);
      }
      local_a8.Selection.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_a8.Selection.ArrayNum = (this->ExpandedSelection).ArrayNum;
      local_a8.Selection.ArrayMax = *piVar2;
      *piVar2 = 0;
      (this->ExpandedSelection).ArrayNum = 0;
    }
    bVar5 = FAverageOverlayToVertices::AverageOverlay<float,1>
                      (&local_a8,local_res10,&local_108,&local_e8);
    FVar3.Data = local_108.AllocatorInstance.Data;
    if (bVar5) {
      iVar8 = (this->Selection).ArrayNum;
      if (iVar8 == 0) {
        iVar8 = (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed;
      }
      lVar6 = (longlong)local_108.ArrayNum;
      local_f8.Data = (FScriptContainerElement *)0x0;
      local_f0 = local_108.ArrayNum;
      if (local_108.ArrayNum == 0) {
        local_ec = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_108.ArrayNum,0,&local_f8,local_108.ArrayNum,&local_ec);
        memcpy(local_f8.Data,FVar3.Data,lVar6 << 2);
      }
      if (0 < this->NumIterations) {
        do {
          local_70 = &local_e8;
          local_c8 = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,1>'::__l25::<lambda_1>,void,int>
                     ::Call;
          local_68 = &local_108;
          local_60 = &local_f8;
          local_c0 = &local_78;
          local_d8.DataPtr = (void **)0x0;
          local_d8.ArrayNum = 0;
          local_78 = this;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ParallelFor Task",iVar8,1,(TFunctionRef<void___cdecl(int)> *)&local_c8,
                     local_res8,(uint)(this->bUseParallel == false),&local_d8);
          iVar4 = local_f0;
          FVar3.Data = local_f8.Data;
          lVar6 = (longlong)local_f0;
          local_108.ArrayNum = local_f0;
          if ((local_f0 == 0) && (local_108.ArrayMax == 0)) {
            local_108.ArrayNum = 0;
            local_108.ArrayMax = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_f0,local_108.ArrayMax,&local_108.AllocatorInstance,local_f0,
                       &local_108.ArrayMax);
            if (iVar4 != 0) {
              memcpy(local_108.AllocatorInstance.Data,FVar3.Data,lVar6 << 2);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < this->NumIterations);
      }
      local_50 = &local_res10;
      local_48 = local_res18;
      local_40 = &local_f8;
      local_b0 = &local_58;
      local_b8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,1>'::__l2::<lambda_2>,void,int>
                 ::Call;
      local_58 = this;
      ParallelFor(iVar8,(TFunctionRef<void___cdecl(int)> *)&local_b8,
                  (uint)(this->bUseParallel == false));
      bVar5 = true;
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data);
      }
    }
    else {
      bVar5 = false;
    }
    if (local_a8.Selection.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Selection.AllocatorInstance.Data);
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    return bVar5;
  }
  return true;
}

// SmoothOverlay<float,2> @ 14c7a0550

/* WARNING: Enum "ETriangleWeight": Some values do not have unique names */

bool __thiscall
UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,2>
          (FSmoothDynamicMeshAttributes *this,TDynamicMeshOverlay<float,2> *param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  FDynamicMesh3 *pFVar7;
  int iVar8;
  int iVar9;
  <lambda_1> local_res8;
  undefined7 uStackX_9;
  TDynamicMeshOverlay<float,2> *local_res10;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_res18;
  TArray<float,TSizedDefaultAllocator<32>_> local_108;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  TArray<bool,TSizedDefaultAllocator<32>_> local_e8;
  TArrayView<std::nullptr_t,int> local_d8;
  code *local_c8;
  FSmoothDynamicMeshAttributes **local_c0;
  code *local_b8;
  FSmoothDynamicMeshAttributes **local_b0;
  FAverageOverlayToVertices local_a8;
  FSmoothDynamicMeshAttributes *local_78;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_70;
  TArray<float,TSizedDefaultAllocator<32>_> *local_68;
  ForAnyElementType *local_60;
  FSmoothDynamicMeshAttributes *local_58;
  TDynamicMeshOverlay<float,2> **local_50;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_48;
  ForAnyElementType *local_40;
  
  if (((0 < this->NumIterations) && (0.0 < this->Strength)) &&
     (pFVar7 = this->Mesh, (pFVar7->EdgeRefCounts).UsedCount != 0)) {
    if ((param_2->ArrayNum != 0) && (param_2->ArrayNum != 2)) {
      return false;
    }
    local_res10 = param_1;
    local_res18 = param_2;
    if ((this->EdgeWeightMethod == CotanWeights) &&
       ((this->CotangentEdgeWeights).ArrayNum !=
        (pFVar7->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
        (pFVar7->EdgeRefCounts).RefCounts.CurBlockUsed)) {
      MeshDeformation::ConstructEdgeCotanWeightsDataArray
                (pFVar7,&this->CotangentEdgeWeights,__real_c0f86a0000000000,__real_40f86a0000000000)
      ;
      pFVar7 = this->Mesh;
    }
    if ((this->EdgeWeightMethod == EdgeLength) &&
       ((this->EdgeLengthWeights).ArrayNum !=
        (pFVar7->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
        (pFVar7->EdgeRefCounts).RefCounts.CurBlockUsed)) {
      TMeshQueries<UE::Geometry::FDynamicMesh3>::GetAllEdgeLengths
                (pFVar7,&this->EdgeLengthWeights,(double *)&local_res8);
      this->EdgeLengthThreshold =
           ((double)CONCAT71(uStackX_9,local_res8) / (double)(this->Mesh->EdgeRefCounts).UsedCount)
           * __real_3f50624dd2f1a9fc;
    }
    pTVar1 = &this->ExpandedSelection;
    iVar9 = 0;
    piVar2 = &(this->ExpandedSelection).ArrayMax;
    (this->ExpandedSelection).ArrayNum = 0;
    if ((this->ExpandedSelection).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->VIDToExpandedSelectionIdx);
    if ((this->Selection).ArrayNum != 0) {
      TMeshQueries<UE::Geometry::FDynamicMesh3>::ExpandVertexSelectionToNeighbors
                (this->Mesh,&this->Selection,pTVar1,&this->VIDToExpandedSelectionIdx);
    }
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    FAverageOverlayToVertices::FAverageOverlayToVertices(&local_a8,this->Mesh);
    if (((this->Selection).ArrayNum != 0) && (&local_a8.Selection != pTVar1)) {
      if (local_a8.Selection.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Selection.AllocatorInstance.Data);
      }
      local_a8.Selection.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_a8.Selection.ArrayNum = (this->ExpandedSelection).ArrayNum;
      local_a8.Selection.ArrayMax = *piVar2;
      *piVar2 = 0;
      (this->ExpandedSelection).ArrayNum = 0;
    }
    bVar5 = FAverageOverlayToVertices::AverageOverlay<float,2>
                      (&local_a8,local_res10,&local_108,&local_e8);
    FVar3.Data = local_108.AllocatorInstance.Data;
    if (bVar5) {
      iVar8 = (this->Selection).ArrayNum;
      if (iVar8 == 0) {
        iVar8 = (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed;
      }
      lVar6 = (longlong)local_108.ArrayNum;
      local_f8.Data = (FScriptContainerElement *)0x0;
      local_f0 = local_108.ArrayNum;
      if (local_108.ArrayNum == 0) {
        local_ec = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_108.ArrayNum,0,&local_f8,local_108.ArrayNum,&local_ec);
        memcpy(local_f8.Data,FVar3.Data,lVar6 << 2);
      }
      if (0 < this->NumIterations) {
        do {
          local_70 = &local_e8;
          local_c8 = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,2>'::__l25::<lambda_1>,void,int>
                     ::Call;
          local_68 = &local_108;
          local_60 = &local_f8;
          local_c0 = &local_78;
          local_d8.DataPtr = (void **)0x0;
          local_d8.ArrayNum = 0;
          local_78 = this;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ParallelFor Task",iVar8,1,(TFunctionRef<void___cdecl(int)> *)&local_c8,
                     local_res8,(uint)(this->bUseParallel == false),&local_d8);
          iVar4 = local_f0;
          FVar3.Data = local_f8.Data;
          lVar6 = (longlong)local_f0;
          local_108.ArrayNum = local_f0;
          if ((local_f0 == 0) && (local_108.ArrayMax == 0)) {
            local_108.ArrayNum = 0;
            local_108.ArrayMax = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_f0,local_108.ArrayMax,&local_108.AllocatorInstance,local_f0,
                       &local_108.ArrayMax);
            if (iVar4 != 0) {
              memcpy(local_108.AllocatorInstance.Data,FVar3.Data,lVar6 << 2);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < this->NumIterations);
      }
      local_50 = &local_res10;
      local_48 = local_res18;
      local_40 = &local_f8;
      local_b0 = &local_58;
      local_b8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,2>'::__l2::<lambda_2>,void,int>
                 ::Call;
      local_58 = this;
      ParallelFor(iVar8,(TFunctionRef<void___cdecl(int)> *)&local_b8,
                  (uint)(this->bUseParallel == false));
      bVar5 = true;
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data);
      }
    }
    else {
      bVar5 = false;
    }
    if (local_a8.Selection.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Selection.AllocatorInstance.Data);
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    return bVar5;
  }
  return true;
}

// SmoothOverlay<float,3> @ 14c7a0980

/* WARNING: Enum "ETriangleWeight": Some values do not have unique names */

bool __thiscall
UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,3>
          (FSmoothDynamicMeshAttributes *this,TDynamicMeshOverlay<float,3> *param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  FDynamicMesh3 *pFVar7;
  int iVar8;
  int iVar9;
  <lambda_1> local_res8;
  undefined7 uStackX_9;
  TDynamicMeshOverlay<float,3> *local_res10;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_res18;
  TArray<float,TSizedDefaultAllocator<32>_> local_108;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  TArray<bool,TSizedDefaultAllocator<32>_> local_e8;
  TArrayView<std::nullptr_t,int> local_d8;
  code *local_c8;
  FSmoothDynamicMeshAttributes **local_c0;
  code *local_b8;
  FSmoothDynamicMeshAttributes **local_b0;
  FAverageOverlayToVertices local_a8;
  FSmoothDynamicMeshAttributes *local_78;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_70;
  TArray<float,TSizedDefaultAllocator<32>_> *local_68;
  ForAnyElementType *local_60;
  FSmoothDynamicMeshAttributes *local_58;
  TDynamicMeshOverlay<float,3> **local_50;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_48;
  ForAnyElementType *local_40;
  
  if (((0 < this->NumIterations) && (0.0 < this->Strength)) &&
     (pFVar7 = this->Mesh, (pFVar7->EdgeRefCounts).UsedCount != 0)) {
    if ((param_2->ArrayNum != 0) && (param_2->ArrayNum != 3)) {
      return false;
    }
    local_res10 = param_1;
    local_res18 = param_2;
    if ((this->EdgeWeightMethod == CotanWeights) &&
       ((this->CotangentEdgeWeights).ArrayNum !=
        (pFVar7->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
        (pFVar7->EdgeRefCounts).RefCounts.CurBlockUsed)) {
      MeshDeformation::ConstructEdgeCotanWeightsDataArray
                (pFVar7,&this->CotangentEdgeWeights,__real_c0f86a0000000000,__real_40f86a0000000000)
      ;
      pFVar7 = this->Mesh;
    }
    if ((this->EdgeWeightMethod == EdgeLength) &&
       ((this->EdgeLengthWeights).ArrayNum !=
        (pFVar7->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
        (pFVar7->EdgeRefCounts).RefCounts.CurBlockUsed)) {
      TMeshQueries<UE::Geometry::FDynamicMesh3>::GetAllEdgeLengths
                (pFVar7,&this->EdgeLengthWeights,(double *)&local_res8);
      this->EdgeLengthThreshold =
           ((double)CONCAT71(uStackX_9,local_res8) / (double)(this->Mesh->EdgeRefCounts).UsedCount)
           * __real_3f50624dd2f1a9fc;
    }
    pTVar1 = &this->ExpandedSelection;
    iVar9 = 0;
    piVar2 = &(this->ExpandedSelection).ArrayMax;
    (this->ExpandedSelection).ArrayNum = 0;
    if ((this->ExpandedSelection).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->VIDToExpandedSelectionIdx);
    if ((this->Selection).ArrayNum != 0) {
      TMeshQueries<UE::Geometry::FDynamicMesh3>::ExpandVertexSelectionToNeighbors
                (this->Mesh,&this->Selection,pTVar1,&this->VIDToExpandedSelectionIdx);
    }
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    FAverageOverlayToVertices::FAverageOverlayToVertices(&local_a8,this->Mesh);
    if (((this->Selection).ArrayNum != 0) && (&local_a8.Selection != pTVar1)) {
      if (local_a8.Selection.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Selection.AllocatorInstance.Data);
      }
      local_a8.Selection.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_a8.Selection.ArrayNum = (this->ExpandedSelection).ArrayNum;
      local_a8.Selection.ArrayMax = *piVar2;
      *piVar2 = 0;
      (this->ExpandedSelection).ArrayNum = 0;
    }
    bVar5 = FAverageOverlayToVertices::AverageOverlay<float,3>
                      (&local_a8,local_res10,&local_108,&local_e8);
    FVar3.Data = local_108.AllocatorInstance.Data;
    if (bVar5) {
      iVar8 = (this->Selection).ArrayNum;
      if (iVar8 == 0) {
        iVar8 = (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed;
      }
      lVar6 = (longlong)local_108.ArrayNum;
      local_f8.Data = (FScriptContainerElement *)0x0;
      local_f0 = local_108.ArrayNum;
      if (local_108.ArrayNum == 0) {
        local_ec = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_108.ArrayNum,0,&local_f8,local_108.ArrayNum,&local_ec);
        memcpy(local_f8.Data,FVar3.Data,lVar6 << 2);
      }
      if (0 < this->NumIterations) {
        do {
          local_70 = &local_e8;
          local_c8 = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,3>'::__l25::<lambda_1>,void,int>
                     ::Call;
          local_68 = &local_108;
          local_60 = &local_f8;
          local_c0 = &local_78;
          local_d8.DataPtr = (void **)0x0;
          local_d8.ArrayNum = 0;
          local_78 = this;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ParallelFor Task",iVar8,1,(TFunctionRef<void___cdecl(int)> *)&local_c8,
                     local_res8,(uint)(this->bUseParallel == false),&local_d8);
          iVar4 = local_f0;
          FVar3.Data = local_f8.Data;
          lVar6 = (longlong)local_f0;
          local_108.ArrayNum = local_f0;
          if ((local_f0 == 0) && (local_108.ArrayMax == 0)) {
            local_108.ArrayNum = 0;
            local_108.ArrayMax = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_f0,local_108.ArrayMax,&local_108.AllocatorInstance,local_f0,
                       &local_108.ArrayMax);
            if (iVar4 != 0) {
              memcpy(local_108.AllocatorInstance.Data,FVar3.Data,lVar6 << 2);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < this->NumIterations);
      }
      local_50 = &local_res10;
      local_48 = local_res18;
      local_40 = &local_f8;
      local_b0 = &local_58;
      local_b8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,3>'::__l2::<lambda_2>,void,int>
                 ::Call;
      local_58 = this;
      ParallelFor(iVar8,(TFunctionRef<void___cdecl(int)> *)&local_b8,
                  (uint)(this->bUseParallel == false));
      bVar5 = true;
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data);
      }
    }
    else {
      bVar5 = false;
    }
    if (local_a8.Selection.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Selection.AllocatorInstance.Data);
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    return bVar5;
  }
  return true;
}

// SmoothOverlay<float,4> @ 14c7a0db0

/* WARNING: Enum "ETriangleWeight": Some values do not have unique names */

bool __thiscall
UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,4>
          (FSmoothDynamicMeshAttributes *this,TDynamicMeshOverlay<float,4> *param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  FDynamicMesh3 *pFVar7;
  int iVar8;
  int iVar9;
  <lambda_1> local_res8;
  undefined7 uStackX_9;
  TDynamicMeshOverlay<float,4> *local_res10;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_res18;
  TArray<float,TSizedDefaultAllocator<32>_> local_108;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  TArray<bool,TSizedDefaultAllocator<32>_> local_e8;
  TArrayView<std::nullptr_t,int> local_d8;
  code *local_c8;
  FSmoothDynamicMeshAttributes **local_c0;
  code *local_b8;
  FSmoothDynamicMeshAttributes **local_b0;
  FAverageOverlayToVertices local_a8;
  FSmoothDynamicMeshAttributes *local_78;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_70;
  TArray<float,TSizedDefaultAllocator<32>_> *local_68;
  ForAnyElementType *local_60;
  FSmoothDynamicMeshAttributes *local_58;
  TDynamicMeshOverlay<float,4> **local_50;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_48;
  ForAnyElementType *local_40;
  
  if (((0 < this->NumIterations) && (0.0 < this->Strength)) &&
     (pFVar7 = this->Mesh, (pFVar7->EdgeRefCounts).UsedCount != 0)) {
    if ((param_2->ArrayNum != 0) && (param_2->ArrayNum != 4)) {
      return false;
    }
    local_res10 = param_1;
    local_res18 = param_2;
    if ((this->EdgeWeightMethod == CotanWeights) &&
       ((this->CotangentEdgeWeights).ArrayNum !=
        (pFVar7->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
        (pFVar7->EdgeRefCounts).RefCounts.CurBlockUsed)) {
      MeshDeformation::ConstructEdgeCotanWeightsDataArray
                (pFVar7,&this->CotangentEdgeWeights,__real_c0f86a0000000000,__real_40f86a0000000000)
      ;
      pFVar7 = this->Mesh;
    }
    if ((this->EdgeWeightMethod == EdgeLength) &&
       ((this->EdgeLengthWeights).ArrayNum !=
        (pFVar7->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
        (pFVar7->EdgeRefCounts).RefCounts.CurBlockUsed)) {
      TMeshQueries<UE::Geometry::FDynamicMesh3>::GetAllEdgeLengths
                (pFVar7,&this->EdgeLengthWeights,(double *)&local_res8);
      this->EdgeLengthThreshold =
           ((double)CONCAT71(uStackX_9,local_res8) / (double)(this->Mesh->EdgeRefCounts).UsedCount)
           * __real_3f50624dd2f1a9fc;
    }
    pTVar1 = &this->ExpandedSelection;
    iVar9 = 0;
    piVar2 = &(this->ExpandedSelection).ArrayMax;
    (this->ExpandedSelection).ArrayNum = 0;
    if ((this->ExpandedSelection).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->VIDToExpandedSelectionIdx);
    if ((this->Selection).ArrayNum != 0) {
      TMeshQueries<UE::Geometry::FDynamicMesh3>::ExpandVertexSelectionToNeighbors
                (this->Mesh,&this->Selection,pTVar1,&this->VIDToExpandedSelectionIdx);
    }
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    FAverageOverlayToVertices::FAverageOverlayToVertices(&local_a8,this->Mesh);
    if (((this->Selection).ArrayNum != 0) && (&local_a8.Selection != pTVar1)) {
      if (local_a8.Selection.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Selection.AllocatorInstance.Data);
      }
      local_a8.Selection.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_a8.Selection.ArrayNum = (this->ExpandedSelection).ArrayNum;
      local_a8.Selection.ArrayMax = *piVar2;
      *piVar2 = 0;
      (this->ExpandedSelection).ArrayNum = 0;
    }
    bVar5 = FAverageOverlayToVertices::AverageOverlay<float,4>
                      (&local_a8,local_res10,&local_108,&local_e8);
    FVar3.Data = local_108.AllocatorInstance.Data;
    if (bVar5) {
      iVar8 = (this->Selection).ArrayNum;
      if (iVar8 == 0) {
        iVar8 = (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed;
      }
      lVar6 = (longlong)local_108.ArrayNum;
      local_f8.Data = (FScriptContainerElement *)0x0;
      local_f0 = local_108.ArrayNum;
      if (local_108.ArrayNum == 0) {
        local_ec = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_108.ArrayNum,0,&local_f8,local_108.ArrayNum,&local_ec);
        memcpy(local_f8.Data,FVar3.Data,lVar6 << 2);
      }
      if (0 < this->NumIterations) {
        do {
          local_70 = &local_e8;
          local_c8 = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,4>'::__l25::<lambda_1>,void,int>
                     ::Call;
          local_68 = &local_108;
          local_60 = &local_f8;
          local_c0 = &local_78;
          local_d8.DataPtr = (void **)0x0;
          local_d8.ArrayNum = 0;
          local_78 = this;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ParallelFor Task",iVar8,1,(TFunctionRef<void___cdecl(int)> *)&local_c8,
                     local_res8,(uint)(this->bUseParallel == false),&local_d8);
          iVar4 = local_f0;
          FVar3.Data = local_f8.Data;
          lVar6 = (longlong)local_f0;
          local_108.ArrayNum = local_f0;
          if ((local_f0 == 0) && (local_108.ArrayMax == 0)) {
            local_108.ArrayNum = 0;
            local_108.ArrayMax = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_f0,local_108.ArrayMax,&local_108.AllocatorInstance,local_f0,
                       &local_108.ArrayMax);
            if (iVar4 != 0) {
              memcpy(local_108.AllocatorInstance.Data,FVar3.Data,lVar6 << 2);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < this->NumIterations);
      }
      local_50 = &local_res10;
      local_48 = local_res18;
      local_40 = &local_f8;
      local_b0 = &local_58;
      local_b8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,4>'::__l2::<lambda_2>,void,int>
                 ::Call;
      local_58 = this;
      ParallelFor(iVar8,(TFunctionRef<void___cdecl(int)> *)&local_b8,
                  (uint)(this->bUseParallel == false));
      bVar5 = true;
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data);
      }
    }
    else {
      bVar5 = false;
    }
    if (local_a8.Selection.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Selection.AllocatorInstance.Data);
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    return bVar5;
  }
  return true;
}

// SmoothOverlay<double,3> @ 14c7a11e0

/* WARNING: Enum "ETriangleWeight": Some values do not have unique names */

bool __thiscall
UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<double,3>
          (FSmoothDynamicMeshAttributes *this,TDynamicMeshOverlay<double,3> *param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  FDynamicMesh3 *pFVar7;
  int iVar8;
  int iVar9;
  <lambda_1> local_res8;
  undefined7 uStackX_9;
  TDynamicMeshOverlay<double,3> *local_res10;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_res18;
  TArray<double,TSizedDefaultAllocator<32>_> local_108;
  ForAnyElementType local_f8;
  int local_f0;
  int local_ec;
  TArray<bool,TSizedDefaultAllocator<32>_> local_e8;
  TArrayView<std::nullptr_t,int> local_d8;
  code *local_c8;
  FSmoothDynamicMeshAttributes **local_c0;
  code *local_b8;
  FSmoothDynamicMeshAttributes **local_b0;
  FAverageOverlayToVertices local_a8;
  FSmoothDynamicMeshAttributes *local_78;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_70;
  TArray<double,TSizedDefaultAllocator<32>_> *local_68;
  ForAnyElementType *local_60;
  FSmoothDynamicMeshAttributes *local_58;
  TDynamicMeshOverlay<double,3> **local_50;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_48;
  ForAnyElementType *local_40;
  
  if (((0 < this->NumIterations) && (0.0 < this->Strength)) &&
     (pFVar7 = this->Mesh, (pFVar7->EdgeRefCounts).UsedCount != 0)) {
    if ((param_2->ArrayNum != 0) && (param_2->ArrayNum != 3)) {
      return false;
    }
    local_res10 = param_1;
    local_res18 = param_2;
    if ((this->EdgeWeightMethod == CotanWeights) &&
       ((this->CotangentEdgeWeights).ArrayNum !=
        (pFVar7->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
        (pFVar7->EdgeRefCounts).RefCounts.CurBlockUsed)) {
      MeshDeformation::ConstructEdgeCotanWeightsDataArray
                (pFVar7,&this->CotangentEdgeWeights,__real_c0f86a0000000000,__real_40f86a0000000000)
      ;
      pFVar7 = this->Mesh;
    }
    if ((this->EdgeWeightMethod == EdgeLength) &&
       ((this->EdgeLengthWeights).ArrayNum !=
        (pFVar7->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
        (pFVar7->EdgeRefCounts).RefCounts.CurBlockUsed)) {
      TMeshQueries<UE::Geometry::FDynamicMesh3>::GetAllEdgeLengths
                (pFVar7,&this->EdgeLengthWeights,(double *)&local_res8);
      this->EdgeLengthThreshold =
           ((double)CONCAT71(uStackX_9,local_res8) / (double)(this->Mesh->EdgeRefCounts).UsedCount)
           * __real_3f50624dd2f1a9fc;
    }
    pTVar1 = &this->ExpandedSelection;
    iVar9 = 0;
    piVar2 = &(this->ExpandedSelection).ArrayMax;
    (this->ExpandedSelection).ArrayNum = 0;
    if ((this->ExpandedSelection).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
              ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
               &this->VIDToExpandedSelectionIdx);
    if ((this->Selection).ArrayNum != 0) {
      TMeshQueries<UE::Geometry::FDynamicMesh3>::ExpandVertexSelectionToNeighbors
                (this->Mesh,&this->Selection,pTVar1,&this->VIDToExpandedSelectionIdx);
    }
    local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.ArrayNum = 0;
    local_108.ArrayMax = 0;
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ArrayNum = 0;
    local_e8.ArrayMax = 0;
    FAverageOverlayToVertices::FAverageOverlayToVertices(&local_a8,this->Mesh);
    if (((this->Selection).ArrayNum != 0) && (&local_a8.Selection != pTVar1)) {
      if (local_a8.Selection.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Selection.AllocatorInstance.Data);
      }
      local_a8.Selection.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_a8.Selection.ArrayNum = (this->ExpandedSelection).ArrayNum;
      local_a8.Selection.ArrayMax = *piVar2;
      *piVar2 = 0;
      (this->ExpandedSelection).ArrayNum = 0;
    }
    bVar5 = FAverageOverlayToVertices::AverageOverlay<double,3>
                      (&local_a8,local_res10,&local_108,&local_e8);
    FVar3.Data = local_108.AllocatorInstance.Data;
    if (bVar5) {
      iVar8 = (this->Selection).ArrayNum;
      if (iVar8 == 0) {
        iVar8 = (this->Mesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (this->Mesh->VertexRefCounts).RefCounts.CurBlockUsed;
      }
      lVar6 = (longlong)local_108.ArrayNum;
      local_f8.Data = (FScriptContainerElement *)0x0;
      local_f0 = local_108.ArrayNum;
      if (local_108.ArrayNum == 0) {
        local_ec = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_108.ArrayNum,0,&local_f8,local_108.ArrayNum,&local_ec);
        memcpy(local_f8.Data,FVar3.Data,lVar6 << 3);
      }
      if (0 < this->NumIterations) {
        do {
          local_70 = &local_e8;
          local_c8 = Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<double,3>'::__l25::<lambda_1>,void,int>
                     ::Call;
          local_68 = &local_108;
          local_60 = &local_f8;
          local_c0 = &local_78;
          local_d8.DataPtr = (void **)0x0;
          local_d8.ArrayNum = 0;
          local_78 = this;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ParallelFor Task",iVar8,1,(TFunctionRef<void___cdecl(int)> *)&local_c8,
                     local_res8,(uint)(this->bUseParallel == false),&local_d8);
          iVar4 = local_f0;
          FVar3.Data = local_f8.Data;
          lVar6 = (longlong)local_f0;
          local_108.ArrayNum = local_f0;
          if ((local_f0 == 0) && (local_108.ArrayMax == 0)) {
            local_108.ArrayNum = 0;
            local_108.ArrayMax = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,local_f0,local_108.ArrayMax,&local_108.AllocatorInstance,local_f0,
                       &local_108.ArrayMax);
            if (iVar4 != 0) {
              memcpy(local_108.AllocatorInstance.Data,FVar3.Data,lVar6 << 3);
            }
          }
          iVar9 = iVar9 + 1;
        } while (iVar9 < this->NumIterations);
      }
      local_50 = &local_res10;
      local_48 = local_res18;
      local_40 = &local_f8;
      local_b0 = &local_58;
      local_b8 = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<double,3>'::__l2::<lambda_2>,void,int>
                 ::Call;
      local_58 = this;
      ParallelFor(iVar8,(TFunctionRef<void___cdecl(int)> *)&local_b8,
                  (uint)(this->bUseParallel == false));
      bVar5 = true;
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data);
      }
    }
    else {
      bVar5 = false;
    }
    if (local_a8.Selection.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Selection.AllocatorInstance.Data);
    }
    if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.AllocatorInstance.Data);
    }
    if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.AllocatorInstance.Data);
    }
    return bVar5;
  }
  return true;
}

// FSmoothDynamicMeshAttributes @ 14c7b3f30

FSmoothDynamicMeshAttributes * __thiscall
UE::Geometry::FSmoothDynamicMeshAttributes::FSmoothDynamicMeshAttributes
          (FSmoothDynamicMeshAttributes *this,FDynamicMesh3 *param_1)

{
  this->bUseParallel = true;
  this->_padding_ = (longlong)&___7FSmoothDynamicMeshAttributes_Geometry_UE__6B_;
  (this->Selection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Selection).ArrayNum = 0;
  (this->Selection).ArrayMax = 0;
  (this->CotangentEdgeWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CotangentEdgeWeights).ArrayNum = 0;
  (this->CotangentEdgeWeights).ArrayMax = 0;
  (this->EdgeLengthWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EdgeLengthWeights).ArrayNum = 0;
  (this->EdgeLengthWeights).ArrayMax = 0;
  (this->ExpandedSelection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ExpandedSelection).ArrayNum = 0;
  (this->ExpandedSelection).ArrayMax = 0;
  *(undefined8 *)&this->VIDToExpandedSelectionIdx = 0;
  *(undefined8 *)&(this->VIDToExpandedSelectionIdx).field_0x8 = 0;
  *(undefined8 *)&(this->VIDToExpandedSelectionIdx).field_0x20 = 0;
  this->Progress = (FProgressCancel *)0x0;
  this->NumIterations = 0;
  this->Strength = 0.0;
  this->BlendWithSmoothedStrength = 0.0;
  this->EdgeWeightMethod = CotanWeights;
  this->SplitVertexModel = SetAllToSmoothed;
  this->Mesh = param_1;
  *(undefined4 *)&(this->VIDToExpandedSelectionIdx).field_0x28 = 0;
  *(undefined4 *)&(this->VIDToExpandedSelectionIdx).field_0x2c = 0x80;
  *(undefined4 *)&(this->VIDToExpandedSelectionIdx).field_0x34 = 0;
  *(undefined4 *)&(this->VIDToExpandedSelectionIdx).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->VIDToExpandedSelectionIdx).field_0x40 = 0;
  *(undefined4 *)&(this->VIDToExpandedSelectionIdx).field_0x48 = 0;
  this->EdgeLengthThreshold = 1.0;
  return this;
}

// ~FSmoothDynamicMeshAttributes @ 14c7b7840

void __thiscall
UE::Geometry::FSmoothDynamicMeshAttributes::~FSmoothDynamicMeshAttributes
          (FSmoothDynamicMeshAttributes *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->VIDToExpandedSelectionIdx).field_0x48 = 0;
  pvVar1 = *(void **)&(this->VIDToExpandedSelectionIdx).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->VIDToExpandedSelectionIdx);
  pFVar2 = (this->ExpandedSelection).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EdgeLengthWeights).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->CotangentEdgeWeights).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Selection).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 14c7c43b0

void __thiscall
`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,1>'::__l25::<lambda_1>::operator()
          (void *this,int param_1)

{
  float fVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint local_res10;
  BaseValueIterator local_c8 [3];
  
  lVar4 = *(longlong *)this;
  uVar16 = (ulonglong)param_1;
  iVar3 = *(int *)(lVar4 + 0x20);
  local_res10 = param_1;
  if (iVar3 != 0) {
    uVar14 = 0;
    if (param_1 < iVar3) {
      uVar14 = (uint)~param_1 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    local_res10 = *(uint *)(*(longlong *)(lVar4 + 0x18) + uVar16 * 4);
    uVar16 = (ulonglong)local_res10;
  }
  lVar4 = *(longlong *)(*(longlong *)this + 0x40);
  uVar14 = (uint)uVar16;
  if (((-1 < (int)uVar14) && ((int)uVar14 < *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24))
      ) && ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar4 + 0x28) + ((uVar16 & 0xffffffff) >> 9) * 8) +
                               (ulonglong)(uVar14 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    fVar21 = 0.0;
    fVar22 = 0.0;
    UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
              (local_c8,(FSmallListSet *)(lVar4 + 0xb8),uVar14,false);
    fVar1 = __real_3f800000;
    dVar2 = __real_3ff0000000000000;
    while( true ) {
      iVar3 = local_c8[0].cur_value;
      uVar14 = 0;
      iVar15 = (int)uVar16;
      if (((local_c8[0].ListSet == (FSmallListSet *)(lVar4 + 0xb8)) &&
          (local_c8[0].ListIndex == iVar15)) &&
         ((local_c8[0].iCur == -1 && (local_c8[0].cur_ptr == -1)))) break;
      lVar5 = *(longlong *)this;
      lVar17 = (longlong)local_c8[0].cur_value;
      uVar16 = *(ulonglong *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar5 + 0x40) + 0x1c0) +
                  (ulonglong)((uint)local_c8[0].cur_value >> 9) * 8) +
                (ulonglong)(local_c8[0].cur_value & 0x1ff) * 0x10);
      if ((int)uVar16 == iVar15) {
        uVar16 = uVar16 >> 0x20;
      }
      uVar11 = (uint)uVar16;
      if (*(int *)(lVar5 + 0x80) != *(int *)(lVar5 + 0xac)) {
        lVar13 = lVar5 + 0xb0;
        if (*(longlong *)(lVar5 + 0xb8) != 0) {
          lVar13 = *(longlong *)(lVar5 + 0xb8);
        }
        iVar15 = *(int *)(lVar13 + ((ulonglong)(*(int *)(lVar5 + 0xc0) - 1) & uVar16 & 0xffffffff) *
                                   4);
        if (iVar15 != -1) {
          do {
            if (*(uint *)(*(longlong *)(lVar5 + 0x78) + (longlong)iVar15 * 0x10) == uVar11) {
              puVar12 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                               *)(lVar5 + 0x78),uVar11);
              uVar11 = *puVar12;
              goto LAB_14c7c45dd;
            }
            iVar15 = *(int *)(*(longlong *)(lVar5 + 0x78) + 8 + (longlong)iVar15 * 0x10);
          } while (iVar15 != -1);
        }
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4177698926289223523>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Operations\\SmoothDynamicMeshAttributes.h"
                           ,0x9d,"VIDToExpandedSelectionIdx.Contains(VertexID)");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
LAB_14c7c45dd:
      plVar6 = *(longlong **)((longlong)this + 8);
      uVar10 = uVar14;
      if ((int)uVar11 < (int)plVar6[1]) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (*(char *)((longlong)(int)uVar11 + *plVar6) != '\0') {
        lVar5 = *(longlong *)this;
        if (*(char *)(lVar5 + 0x28) == '\x02') {
          if (iVar3 < *(int *)(lVar5 + 0x50)) {
            uVar14 = (uint)~iVar3 >> 0x1f;
          }
          if (uVar14 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          lVar13 = *(longlong *)this;
          dVar19 = *(double *)(*(longlong *)(lVar5 + 0x48) + lVar17 * 8);
          uVar14 = 0;
          if (iVar3 < *(int *)(lVar13 + 0x50)) {
            uVar14 = (uint)~iVar3 >> 0x1f;
          }
          if (uVar14 == 0) {
            bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar9) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          dVar18 = *(double *)(*(longlong *)(lVar13 + 0x48) + lVar17 * 8);
          if (dVar19 <= dVar18) {
            dVar18 = dVar19;
          }
          if (dVar18 <= 0.0) {
            dVar18 = 0.0;
          }
          fVar20 = (float)dVar18;
        }
        else {
          fVar20 = fVar1;
          if (*(char *)(lVar5 + 0x28) == '\x01') {
            if (iVar3 < *(int *)(lVar5 + 0x60)) {
              uVar14 = (uint)~iVar3 >> 0x1f;
            }
            if (uVar14 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            dVar19 = *(double *)(*(longlong *)(lVar5 + 0x58) + lVar17 * 8);
            if (dVar19 <= *(double *)(*(longlong *)this + 200)) {
              dVar19 = *(double *)(*(longlong *)this + 200);
            }
            fVar20 = (float)(dVar2 / dVar19);
          }
        }
        plVar6 = *(longlong **)((longlong)this + 0x10);
        uVar14 = 0;
        if ((int)uVar11 < (int)plVar6[1]) {
          uVar14 = ~uVar11 >> 0x1f;
        }
        if (uVar14 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        fVar22 = fVar22 + fVar20;
        fVar21 = fVar21 + fVar20 * *(float *)(*plVar6 + (longlong)(int)uVar11 * 4);
      }
      UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(local_c8);
      uVar16 = (ulonglong)local_res10;
    }
    if (__real_3e45798ee2308c3a <
        (double)(float)((uint)fVar22 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar21 = fVar21 / fVar22;
    }
    uVar11 = UE::Geometry::FSmoothDynamicMeshAttributes::MeshVIDToSelectionIdx
                       (*(FSmoothDynamicMeshAttributes **)this,iVar15);
    plVar6 = *(longlong **)((longlong)this + 0x10);
    lVar4 = *(longlong *)this;
    uVar14 = 0;
    if ((int)uVar11 < (int)plVar6[1]) {
      uVar14 = ~uVar11 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    plVar7 = *(longlong **)((longlong)this + 0x18);
    fVar1 = *(float *)(*plVar6 + (longlong)(int)uVar11 * 4);
    uVar14 = 0;
    if ((int)uVar11 < (int)plVar7[1]) {
      uVar14 = ~uVar11 >> 0x1f;
    }
    dVar2 = *(double *)(lVar4 + 0x30);
    if (uVar14 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    *(float *)(*plVar7 + (longlong)(int)uVar11 * 4) =
         (float)((double)(fVar21 - fVar1) * dVar2 + (double)fVar1);
  }
  return;
}

// operator() @ 14c7c4960

void __thiscall
`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,2>'::__l25::<lambda_1>::operator()
          (void *this,int param_1)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  BaseValueIterator local_c8 [4];
  
  lVar2 = *(longlong *)this;
  iVar11 = *(int *)(lVar2 + 0x20);
  if (iVar11 != 0) {
    uVar9 = 0;
    if (param_1 < iVar11) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    param_1 = *(uint *)(*(longlong *)(lVar2 + 0x18) + (longlong)param_1 * 4);
  }
  lVar2 = *(longlong *)(*(longlong *)this + 0x40);
  if (((-1 < param_1) && (param_1 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar2 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    fVar19 = 0.0;
    fVar20 = 0.0;
    fVar22 = 0.0;
    UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
              (local_c8,(FSmallListSet *)(lVar2 + 0xb8),param_1,false);
    fVar21 = __real_3f800000;
    dVar1 = __real_3ff0000000000000;
    while (((iVar11 = local_c8[0].cur_value, local_c8[0].ListSet != (FSmallListSet *)(lVar2 + 0xb8)
            || (local_c8[0].ListIndex != param_1)) ||
           ((local_c8[0].iCur != -1 || (local_c8[0].cur_ptr != -1))))) {
      lVar3 = *(longlong *)this;
      lVar15 = (longlong)local_c8[0].cur_value;
      uVar4 = *(ulonglong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x40) + 0x1c0) +
                 (ulonglong)((uint)local_c8[0].cur_value >> 9) * 8) +
               (ulonglong)(local_c8[0].cur_value & 0x1ff) * 0x10);
      if ((uint)uVar4 == param_1) {
        uVar4 = uVar4 >> 0x20;
      }
      uVar9 = (uint)uVar4;
      if (*(int *)(lVar3 + 0x80) != *(int *)(lVar3 + 0xac)) {
        lVar13 = lVar3 + 0xb0;
        if (*(longlong *)(lVar3 + 0xb8) != 0) {
          lVar13 = *(longlong *)(lVar3 + 0xb8);
        }
        iVar10 = *(int *)(lVar13 + ((ulonglong)(*(int *)(lVar3 + 0xc0) - 1) & uVar4 & 0xffffffff) *
                                   4);
        if (iVar10 != -1) {
          do {
            if (*(uint *)(*(longlong *)(lVar3 + 0x78) + (longlong)iVar10 * 0x10) == uVar9) {
              puVar12 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                               *)(lVar3 + 0x78),uVar9);
              uVar9 = *puVar12;
              goto LAB_14c7c4b9d;
            }
            iVar10 = *(int *)(*(longlong *)(lVar3 + 0x78) + 8 + (longlong)iVar10 * 0x10);
          } while (iVar10 != -1);
        }
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4177698926289223523>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Operations\\SmoothDynamicMeshAttributes.h"
                           ,0x9d,"VIDToExpandedSelectionIdx.Contains(VertexID)");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
LAB_14c7c4b9d:
      plVar5 = *(longlong **)((longlong)this + 8);
      uVar14 = 0;
      if ((int)uVar9 < (int)plVar5[1]) {
        uVar14 = ~uVar9 >> 0x1f;
      }
      if (uVar14 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (*(char *)((longlong)(int)uVar9 + *plVar5) != '\0') {
        lVar3 = *(longlong *)this;
        if (*(char *)(lVar3 + 0x28) == '\x02') {
          uVar14 = 0;
          if (iVar11 < *(int *)(lVar3 + 0x50)) {
            uVar14 = (uint)~iVar11 >> 0x1f;
          }
          if (uVar14 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          lVar13 = *(longlong *)this;
          dVar17 = *(double *)(*(longlong *)(lVar3 + 0x48) + lVar15 * 8);
          uVar14 = 0;
          if (iVar11 < *(int *)(lVar13 + 0x50)) {
            uVar14 = (uint)~iVar11 >> 0x1f;
          }
          if (uVar14 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          dVar16 = *(double *)(*(longlong *)(lVar13 + 0x48) + lVar15 * 8);
          if (dVar17 <= dVar16) {
            dVar16 = dVar17;
          }
          if (dVar16 <= 0.0) {
            dVar16 = 0.0;
          }
          fVar18 = (float)dVar16;
        }
        else {
          fVar18 = fVar21;
          if (*(char *)(lVar3 + 0x28) == '\x01') {
            uVar14 = 0;
            if (iVar11 < *(int *)(lVar3 + 0x60)) {
              uVar14 = (uint)~iVar11 >> 0x1f;
            }
            if (uVar14 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            dVar17 = *(double *)(*(longlong *)(lVar3 + 0x58) + lVar15 * 8);
            if (dVar17 <= *(double *)(*(longlong *)this + 200)) {
              dVar17 = *(double *)(*(longlong *)this + 200);
            }
            fVar18 = (float)(dVar1 / dVar17);
          }
        }
        plVar5 = *(longlong **)((longlong)this + 0x10);
        uVar9 = uVar9 * 2;
        uVar14 = 0;
        if ((int)uVar9 < (int)plVar5[1]) {
          uVar14 = ~uVar9 >> 0x1f;
        }
        if (uVar14 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        plVar6 = *(longlong **)((longlong)this + 0x10);
        uVar14 = uVar9 + 1;
        fVar22 = fVar22 + fVar18 * *(float *)(*plVar5 + (longlong)(int)uVar9 * 4);
        uVar9 = 0;
        if ((int)uVar14 < (int)plVar6[1]) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        fVar19 = fVar19 + fVar18;
        fVar20 = fVar20 + fVar18 * *(float *)(*plVar6 + (longlong)(int)uVar14 * 4);
      }
      UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(local_c8);
    }
    if (__real_3e45798ee2308c3a <
        (double)(float)((uint)fVar19 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar21 = fVar21 / fVar19;
      fVar22 = fVar22 * fVar21;
      fVar20 = fVar20 * fVar21;
    }
    iVar11 = UE::Geometry::FSmoothDynamicMeshAttributes::MeshVIDToSelectionIdx
                       (*(FSmoothDynamicMeshAttributes **)this,param_1);
    plVar5 = *(longlong **)((longlong)this + 0x10);
    lVar2 = *(longlong *)this;
    uVar9 = iVar11 * 2;
    uVar14 = 0;
    if ((int)uVar9 < (int)plVar5[1]) {
      uVar14 = ~uVar9 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    plVar6 = *(longlong **)((longlong)this + 0x18);
    fVar21 = *(float *)(*plVar5 + (longlong)(int)uVar9 * 4);
    uVar14 = 0;
    if ((int)uVar9 < (int)plVar6[1]) {
      uVar14 = ~uVar9 >> 0x1f;
    }
    dVar1 = *(double *)(lVar2 + 0x30);
    if (uVar14 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar14 = uVar9 + 1;
    plVar5 = *(longlong **)((longlong)this + 0x10);
    lVar2 = *(longlong *)this;
    *(float *)(*plVar6 + (longlong)(int)uVar9 * 4) =
         (float)((double)(fVar22 - fVar21) * dVar1 + (double)fVar21);
    uVar9 = 0;
    if ((int)uVar14 < (int)plVar5[1]) {
      uVar9 = ~uVar14 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    plVar6 = *(longlong **)((longlong)this + 0x18);
    fVar21 = *(float *)(*plVar5 + (longlong)(int)uVar14 * 4);
    uVar9 = 0;
    if ((int)uVar14 < (int)plVar6[1]) {
      uVar9 = ~uVar14 >> 0x1f;
    }
    dVar1 = *(double *)(lVar2 + 0x30);
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    *(float *)(*plVar6 + (longlong)(int)uVar14 * 4) =
         (float)((double)(fVar20 - fVar21) * dVar1 + (double)fVar21);
  }
  return;
}

// operator() @ 14c7c5050

void __thiscall
`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,3>'::__l25::<lambda_1>::operator()
          (void *this,int param_1)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  BaseValueIterator local_e0 [4];
  
  lVar2 = *(longlong *)this;
  iVar11 = *(int *)(lVar2 + 0x20);
  if (iVar11 != 0) {
    uVar14 = 0;
    if (param_1 < iVar11) {
      uVar14 = (uint)~param_1 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    param_1 = *(uint *)(*(longlong *)(lVar2 + 0x18) + (longlong)param_1 * 4);
  }
  lVar2 = *(longlong *)(*(longlong *)this + 0x40);
  if (((-1 < param_1) && (param_1 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar2 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
              (local_e0,(FSmallListSet *)(lVar2 + 0xb8),param_1,false);
    fVar22 = __real_3f800000;
    dVar1 = __real_3ff0000000000000;
    while (((iVar11 = local_e0[0].cur_value, local_e0[0].ListSet != (FSmallListSet *)(lVar2 + 0xb8)
            || (local_e0[0].ListIndex != param_1)) ||
           ((local_e0[0].iCur != -1 || (local_e0[0].cur_ptr != -1))))) {
      lVar3 = *(longlong *)this;
      lVar15 = (longlong)local_e0[0].cur_value;
      uVar4 = *(ulonglong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x40) + 0x1c0) +
                 (ulonglong)((uint)local_e0[0].cur_value >> 9) * 8) +
               (ulonglong)(local_e0[0].cur_value & 0x1ff) * 0x10);
      if ((uint)uVar4 == param_1) {
        uVar4 = uVar4 >> 0x20;
      }
      uVar14 = (uint)uVar4;
      if (*(int *)(lVar3 + 0x80) != *(int *)(lVar3 + 0xac)) {
        lVar13 = lVar3 + 0xb0;
        if (*(longlong *)(lVar3 + 0xb8) != 0) {
          lVar13 = *(longlong *)(lVar3 + 0xb8);
        }
        iVar9 = *(int *)(lVar13 + ((ulonglong)(*(int *)(lVar3 + 0xc0) - 1) & uVar4 & 0xffffffff) * 4
                        );
        if (iVar9 != -1) {
          do {
            if (*(uint *)(*(longlong *)(lVar3 + 0x78) + (longlong)iVar9 * 0x10) == uVar14) {
              puVar12 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                               *)(lVar3 + 0x78),uVar14);
              uVar14 = *puVar12;
              goto LAB_14c7c528f;
            }
            iVar9 = *(int *)(*(longlong *)(lVar3 + 0x78) + 8 + (longlong)iVar9 * 0x10);
          } while (iVar9 != -1);
        }
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4177698926289223523>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Operations\\SmoothDynamicMeshAttributes.h"
                           ,0x9d,"VIDToExpandedSelectionIdx.Contains(VertexID)");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
LAB_14c7c528f:
      plVar5 = *(longlong **)((longlong)this + 8);
      uVar10 = 0;
      if ((int)uVar14 < (int)plVar5[1]) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (*(char *)((longlong)(int)uVar14 + *plVar5) != '\0') {
        lVar3 = *(longlong *)this;
        if (*(char *)(lVar3 + 0x28) == '\x02') {
          uVar10 = 0;
          if (iVar11 < *(int *)(lVar3 + 0x50)) {
            uVar10 = (uint)~iVar11 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          lVar13 = *(longlong *)this;
          dVar18 = *(double *)(*(longlong *)(lVar3 + 0x48) + lVar15 * 8);
          uVar10 = 0;
          if (iVar11 < *(int *)(lVar13 + 0x50)) {
            uVar10 = (uint)~iVar11 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          dVar17 = *(double *)(*(longlong *)(lVar13 + 0x48) + lVar15 * 8);
          if (dVar18 <= dVar17) {
            dVar17 = dVar18;
          }
          if (dVar17 <= 0.0) {
            dVar17 = 0.0;
          }
          fVar19 = (float)dVar17;
        }
        else {
          fVar19 = fVar22;
          if (*(char *)(lVar3 + 0x28) == '\x01') {
            uVar10 = 0;
            if (iVar11 < *(int *)(lVar3 + 0x60)) {
              uVar10 = (uint)~iVar11 >> 0x1f;
            }
            if (uVar10 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            dVar18 = *(double *)(*(longlong *)(lVar3 + 0x58) + lVar15 * 8);
            if (dVar18 <= *(double *)(*(longlong *)this + 200)) {
              dVar18 = *(double *)(*(longlong *)this + 200);
            }
            fVar19 = (float)(dVar1 / dVar18);
          }
        }
        plVar5 = *(longlong **)((longlong)this + 0x10);
        uVar14 = uVar14 * 3;
        uVar10 = 0;
        if ((int)uVar14 < (int)plVar5[1]) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        plVar6 = *(longlong **)((longlong)this + 0x10);
        uVar10 = uVar14 + 1;
        fVar23 = fVar23 + fVar19 * *(float *)(*plVar5 + (longlong)(int)uVar14 * 4);
        uVar16 = 0;
        if ((int)uVar10 < (int)plVar6[1]) {
          uVar16 = ~uVar10 >> 0x1f;
        }
        if (uVar16 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        uVar14 = uVar14 + 2;
        plVar5 = *(longlong **)((longlong)this + 0x10);
        fVar24 = fVar24 + fVar19 * *(float *)(*plVar6 + (longlong)(int)uVar10 * 4);
        uVar10 = 0;
        if ((int)uVar14 < (int)plVar5[1]) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        fVar20 = fVar20 + fVar19;
        fVar21 = fVar21 + fVar19 * *(float *)(*plVar5 + (longlong)(int)uVar14 * 4);
      }
      UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(local_e0);
    }
    if (__real_3e45798ee2308c3a <
        (double)(float)((uint)fVar20 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar22 = fVar22 / fVar20;
      fVar23 = fVar23 * fVar22;
      fVar24 = fVar24 * fVar22;
      fVar21 = fVar21 * fVar22;
    }
    iVar11 = UE::Geometry::FSmoothDynamicMeshAttributes::MeshVIDToSelectionIdx
                       (*(FSmoothDynamicMeshAttributes **)this,param_1);
    plVar5 = *(longlong **)((longlong)this + 0x10);
    lVar2 = *(longlong *)this;
    uVar14 = iVar11 * 3;
    uVar10 = 0;
    if ((int)uVar14 < (int)plVar5[1]) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    plVar6 = *(longlong **)((longlong)this + 0x18);
    fVar22 = *(float *)(*plVar5 + (longlong)(int)uVar14 * 4);
    uVar10 = 0;
    if ((int)uVar14 < (int)plVar6[1]) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    dVar1 = *(double *)(lVar2 + 0x30);
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    plVar5 = *(longlong **)((longlong)this + 0x10);
    lVar2 = *(longlong *)this;
    *(float *)(*plVar6 + (longlong)(int)uVar14 * 4) =
         (float)((double)(fVar23 - fVar22) * dVar1 + (double)fVar22);
    uVar16 = uVar14 + 1;
    uVar10 = 0;
    if ((int)uVar16 < (int)plVar5[1]) {
      uVar10 = ~uVar16 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    fVar22 = *(float *)(*plVar5 + (longlong)(int)uVar16 * 4);
    dVar1 = *(double *)(lVar2 + 0x30);
    plVar5 = *(longlong **)((longlong)this + 0x18);
    uVar10 = 0;
    if ((int)uVar16 < (int)plVar5[1]) {
      uVar10 = ~uVar16 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar14 = uVar14 + 2;
    plVar6 = *(longlong **)((longlong)this + 0x10);
    *(float *)(*plVar5 + (longlong)(int)uVar16 * 4) =
         (float)((double)(fVar24 - fVar22) * dVar1 + (double)fVar22);
    lVar2 = *(longlong *)this;
    uVar10 = 0;
    if ((int)uVar14 < (int)plVar6[1]) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    plVar5 = *(longlong **)((longlong)this + 0x18);
    fVar22 = *(float *)(*plVar6 + (longlong)(int)uVar14 * 4);
    uVar10 = 0;
    if ((int)uVar14 < (int)plVar5[1]) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    dVar1 = *(double *)(lVar2 + 0x30);
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    *(float *)(*plVar5 + (longlong)(int)uVar14 * 4) =
         (float)((double)(fVar21 - fVar22) * dVar1 + (double)fVar22);
  }
  return;
}

// operator() @ 14c7c5890

void __thiscall
`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,4>'::__l25::<lambda_1>::operator()
          (void *this,int param_1)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  BaseValueIterator local_100;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  lVar2 = *(longlong *)this;
  iVar11 = *(int *)(lVar2 + 0x20);
  if (iVar11 != 0) {
    uVar14 = 0;
    if (param_1 < iVar11) {
      uVar14 = (uint)~param_1 >> 0x1f;
    }
    if (uVar14 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    param_1 = *(uint *)(*(longlong *)(lVar2 + 0x18) + (longlong)param_1 * 4);
  }
  lVar2 = *(longlong *)(*(longlong *)this + 0x40);
  if (((-1 < param_1) && (param_1 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar2 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar26 = 0.0;
    local_d8 = 0;
    uStack_d0 = 0;
    UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
              (&local_100,(FSmallListSet *)(lVar2 + 0xb8),param_1,false);
    fVar29 = __real_3f800000;
    dVar1 = __real_3ff0000000000000;
    fVar24 = 0.0;
    fVar27 = 0.0;
    fVar25 = 0.0;
    fVar28 = 0.0;
    while (((iVar11 = local_100.cur_value, local_100.ListSet != (FSmallListSet *)(lVar2 + 0xb8) ||
            (local_100.ListIndex != param_1)) ||
           ((local_100.iCur != -1 || (local_100.cur_ptr != -1))))) {
      lVar3 = *(longlong *)this;
      lVar15 = (longlong)local_100.cur_value;
      uVar4 = *(ulonglong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x40) + 0x1c0) +
                 (ulonglong)((uint)local_100.cur_value >> 9) * 8) +
               (ulonglong)(local_100.cur_value & 0x1ff) * 0x10);
      if ((uint)uVar4 == param_1) {
        uVar4 = uVar4 >> 0x20;
      }
      uVar14 = (uint)uVar4;
      if (*(int *)(lVar3 + 0x80) != *(int *)(lVar3 + 0xac)) {
        lVar13 = lVar3 + 0xb0;
        if (*(longlong *)(lVar3 + 0xb8) != 0) {
          lVar13 = *(longlong *)(lVar3 + 0xb8);
        }
        iVar9 = *(int *)(lVar13 + ((ulonglong)(*(int *)(lVar3 + 0xc0) - 1) & uVar4 & 0xffffffff) * 4
                        );
        if (iVar9 != -1) {
          do {
            if (*(uint *)(*(longlong *)(lVar3 + 0x78) + (longlong)iVar9 * 0x10) == uVar14) {
              puVar12 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                               *)(lVar3 + 0x78),uVar14);
              uVar14 = *puVar12;
              goto LAB_14c7c5afd;
            }
            iVar9 = *(int *)(*(longlong *)(lVar3 + 0x78) + 8 + (longlong)iVar9 * 0x10);
          } while (iVar9 != -1);
        }
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4177698926289223523>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Operations\\SmoothDynamicMeshAttributes.h"
                           ,0x9d,"VIDToExpandedSelectionIdx.Contains(VertexID)");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
LAB_14c7c5afd:
      plVar5 = *(longlong **)((longlong)this + 8);
      uVar10 = 0;
      if ((int)uVar14 < (int)plVar5[1]) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (*(char *)((longlong)(int)uVar14 + *plVar5) != '\0') {
        lVar3 = *(longlong *)this;
        if (*(char *)(lVar3 + 0x28) == '\x02') {
          uVar10 = 0;
          if (iVar11 < *(int *)(lVar3 + 0x50)) {
            uVar10 = (uint)~iVar11 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          lVar13 = *(longlong *)this;
          dVar19 = *(double *)(*(longlong *)(lVar3 + 0x48) + lVar15 * 8);
          uVar10 = 0;
          if (iVar11 < *(int *)(lVar13 + 0x50)) {
            uVar10 = (uint)~iVar11 >> 0x1f;
          }
          if (uVar10 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          dVar18 = *(double *)(*(longlong *)(lVar13 + 0x48) + lVar15 * 8);
          if (dVar19 <= dVar18) {
            dVar18 = dVar19;
          }
          if (dVar18 <= 0.0) {
            dVar18 = 0.0;
          }
          fVar20 = (float)dVar18;
        }
        else {
          fVar20 = fVar29;
          if (*(char *)(lVar3 + 0x28) == '\x01') {
            uVar10 = 0;
            if (iVar11 < *(int *)(lVar3 + 0x60)) {
              uVar10 = (uint)~iVar11 >> 0x1f;
            }
            if (uVar10 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar8) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            dVar19 = *(double *)(*(longlong *)(lVar3 + 0x58) + lVar15 * 8);
            if (dVar19 <= *(double *)(*(longlong *)this + 200)) {
              dVar19 = *(double *)(*(longlong *)this + 200);
            }
            fVar20 = (float)(dVar1 / dVar19);
          }
        }
        plVar5 = *(longlong **)((longlong)this + 0x10);
        uVar14 = uVar14 * 4;
        uVar10 = 0;
        if ((int)uVar14 < (int)plVar5[1]) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        if (uVar10 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        plVar6 = *(longlong **)((longlong)this + 0x10);
        uVar10 = uVar14 + 1;
        fVar28 = fVar28 + fVar20 * *(float *)(*plVar5 + (longlong)(int)uVar14 * 4);
        uVar16 = 0;
        if ((int)uVar10 < (int)plVar6[1]) {
          uVar16 = ~uVar10 >> 0x1f;
        }
        local_d8 = CONCAT44(local_d8._4_4_,fVar28);
        if (uVar16 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        plVar5 = *(longlong **)((longlong)this + 0x10);
        uVar16 = uVar14 + 2;
        fVar25 = fVar25 + fVar20 * *(float *)(*plVar6 + (longlong)(int)uVar10 * 4);
        uVar10 = 0;
        if ((int)uVar16 < (int)plVar5[1]) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        local_d8 = CONCAT44(fVar25,(float)local_d8);
        if (uVar10 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        uVar14 = uVar14 + 3;
        plVar6 = *(longlong **)((longlong)this + 0x10);
        fVar27 = fVar27 + fVar20 * *(float *)(*plVar5 + (longlong)(int)uVar16 * 4);
        uVar10 = 0;
        if ((int)uVar14 < (int)plVar6[1]) {
          uVar10 = ~uVar14 >> 0x1f;
        }
        uStack_d0 = CONCAT44(uStack_d0._4_4_,fVar27);
        if (uVar10 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        fVar26 = fVar26 + fVar20;
        fVar23 = fVar24 + fVar20 * *(float *)(*plVar6 + (longlong)(int)uVar14 * 4);
        uStack_d0 = CONCAT44(fVar23,(float)uStack_d0);
        fVar20 = (float)local_d8;
        fVar21 = local_d8._4_4_;
        fVar22 = (float)uStack_d0;
        fVar24 = fVar23;
      }
      UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(&local_100);
    }
    if (__real_3e45798ee2308c3a <
        (double)(float)((uint)fVar26 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar29 = fVar29 / fVar26;
      fVar28 = fVar20 * fVar29;
      fVar25 = fVar21 * fVar29;
      fVar27 = fVar22 * fVar29;
      fVar24 = fVar23 * fVar29;
    }
    iVar11 = UE::Geometry::FSmoothDynamicMeshAttributes::MeshVIDToSelectionIdx
                       (*(FSmoothDynamicMeshAttributes **)this,param_1);
    plVar5 = *(longlong **)((longlong)this + 0x10);
    lVar2 = *(longlong *)this;
    uVar14 = iVar11 * 4;
    uVar10 = 0;
    if ((int)uVar14 < (int)plVar5[1]) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    plVar6 = *(longlong **)((longlong)this + 0x18);
    fVar29 = *(float *)(*plVar5 + (longlong)(int)uVar14 * 4);
    uVar10 = 0;
    if ((int)uVar14 < (int)plVar6[1]) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    dVar1 = *(double *)(lVar2 + 0x30);
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    plVar5 = *(longlong **)((longlong)this + 0x10);
    lVar2 = *(longlong *)this;
    *(float *)(*plVar6 + (longlong)(int)uVar14 * 4) =
         (float)((double)(fVar28 - fVar29) * dVar1 + (double)fVar29);
    uVar16 = uVar14 + 1;
    uVar10 = 0;
    if ((int)uVar16 < (int)plVar5[1]) {
      uVar10 = ~uVar16 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    fVar29 = *(float *)(*plVar5 + (longlong)(int)uVar16 * 4);
    dVar1 = *(double *)(lVar2 + 0x30);
    plVar5 = *(longlong **)((longlong)this + 0x18);
    uVar10 = 0;
    if ((int)uVar16 < (int)plVar5[1]) {
      uVar10 = ~uVar16 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar17 = uVar14 + 2;
    plVar6 = *(longlong **)((longlong)this + 0x10);
    lVar2 = *(longlong *)this;
    *(float *)(*plVar5 + (longlong)(int)uVar16 * 4) =
         (float)((double)(fVar25 - fVar29) * dVar1 + (double)fVar29);
    uVar10 = 0;
    if ((int)uVar17 < (int)plVar6[1]) {
      uVar10 = ~uVar17 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    fVar29 = *(float *)(*plVar6 + (longlong)(int)uVar17 * 4);
    dVar1 = *(double *)(lVar2 + 0x30);
    plVar5 = *(longlong **)((longlong)this + 0x18);
    uVar10 = 0;
    if ((int)uVar17 < (int)plVar5[1]) {
      uVar10 = ~uVar17 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar14 = uVar14 + 3;
    plVar6 = *(longlong **)((longlong)this + 0x10);
    *(float *)(*plVar5 + (longlong)(int)uVar17 * 4) =
         (float)((double)(fVar27 - fVar29) * dVar1 + (double)fVar29);
    lVar2 = *(longlong *)this;
    uVar10 = 0;
    if ((int)uVar14 < (int)plVar6[1]) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    plVar5 = *(longlong **)((longlong)this + 0x18);
    fVar29 = *(float *)(*plVar6 + (longlong)(int)uVar14 * 4);
    uVar10 = 0;
    if ((int)uVar14 < (int)plVar5[1]) {
      uVar10 = ~uVar14 >> 0x1f;
    }
    dVar1 = *(double *)(lVar2 + 0x30);
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    *(float *)(*plVar5 + (longlong)(int)uVar14 * 4) =
         (float)((double)(fVar24 - fVar29) * dVar1 + (double)fVar29);
  }
  return;
}

// operator() @ 14c7c6280

void __thiscall
`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<double,3>'::__l25::<lambda_1>::operator()
          (void *this,int param_1)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  BaseValueIterator local_e0 [4];
  
  lVar2 = *(longlong *)this;
  iVar16 = *(int *)(lVar2 + 0x20);
  if (iVar16 != 0) {
    uVar19 = 0;
    if (param_1 < iVar16) {
      uVar19 = (uint)~param_1 >> 0x1f;
    }
    if (uVar19 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    param_1 = *(uint *)(*(longlong *)(lVar2 + 0x18) + (longlong)param_1 * 4);
  }
  lVar2 = *(longlong *)(*(longlong *)this + 0x40);
  if (((-1 < param_1) && (param_1 < *(int *)(lVar2 + 0x20) * 0x200 + *(int *)(lVar2 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar2 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    dVar8 = 0.0;
    dVar10 = 0.0;
    dVar11 = 0.0;
    dVar12 = 0.0;
    UE::Geometry::FSmallListSet::BaseValueIterator::BaseValueIterator
              (local_e0,(FSmallListSet *)(lVar2 + 0xb8),param_1,false);
    dVar9 = __real_3ff0000000000000;
    while( true ) {
      iVar16 = local_e0[0].cur_value;
      if (((local_e0[0].ListSet == (FSmallListSet *)(lVar2 + 0xb8)) &&
          (local_e0[0].ListIndex == param_1)) &&
         ((local_e0[0].iCur == -1 && (local_e0[0].cur_ptr == -1)))) break;
      lVar3 = *(longlong *)this;
      lVar20 = (longlong)local_e0[0].cur_value;
      uVar4 = *(ulonglong *)
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x40) + 0x1c0) +
                 (ulonglong)((uint)local_e0[0].cur_value >> 9) * 8) +
               (ulonglong)(local_e0[0].cur_value & 0x1ff) * 0x10);
      if ((uint)uVar4 == param_1) {
        uVar4 = uVar4 >> 0x20;
      }
      uVar19 = (uint)uVar4;
      if (*(int *)(lVar3 + 0x80) != *(int *)(lVar3 + 0xac)) {
        lVar18 = lVar3 + 0xb0;
        if (*(longlong *)(lVar3 + 0xb8) != 0) {
          lVar18 = *(longlong *)(lVar3 + 0xb8);
        }
        iVar14 = *(int *)(lVar18 + ((ulonglong)(*(int *)(lVar3 + 0xc0) - 1) & uVar4 & 0xffffffff) *
                                   4);
        if (iVar14 != -1) {
          do {
            if (*(uint *)(*(longlong *)(lVar3 + 0x78) + (longlong)iVar14 * 0x10) == uVar19) {
              puVar17 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                               *)(lVar3 + 0x78),uVar19);
              uVar19 = *puVar17;
              goto LAB_14c7c64bd;
            }
            iVar14 = *(int *)(*(longlong *)(lVar3 + 0x78) + 8 + (longlong)iVar14 * 0x10);
          } while (iVar14 != -1);
        }
        bVar13 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_4177698926289223523>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Operations\\SmoothDynamicMeshAttributes.h"
                            ,0x9d,"VIDToExpandedSelectionIdx.Contains(VertexID)");
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
LAB_14c7c64bd:
      plVar5 = *(longlong **)((longlong)this + 8);
      uVar15 = 0;
      if ((int)uVar19 < (int)plVar5[1]) {
        uVar15 = ~uVar19 >> 0x1f;
      }
      if (uVar15 == 0) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar13) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      if (*(char *)((longlong)(int)uVar19 + *plVar5) != '\0') {
        lVar3 = *(longlong *)this;
        if (*(char *)(lVar3 + 0x28) == '\x02') {
          uVar15 = 0;
          if (iVar16 < *(int *)(lVar3 + 0x50)) {
            uVar15 = (uint)~iVar16 >> 0x1f;
          }
          if (uVar15 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          lVar18 = *(longlong *)this;
          dVar22 = *(double *)(*(longlong *)(lVar3 + 0x48) + lVar20 * 8);
          uVar15 = 0;
          if (iVar16 < *(int *)(lVar18 + 0x50)) {
            uVar15 = (uint)~iVar16 >> 0x1f;
          }
          if (uVar15 == 0) {
            bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar13) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          dVar1 = *(double *)(*(longlong *)(lVar18 + 0x48) + lVar20 * 8);
          uVar23 = SUB84(dVar1,0);
          uVar24 = (int)((ulonglong)dVar1 >> 0x20);
          if (dVar22 <= dVar1) {
            uVar23 = SUB84(dVar22,0);
            uVar24 = (int)((ulonglong)dVar22 >> 0x20);
          }
          if ((double)CONCAT44(uVar24,uVar23) <= 0.0) {
            uVar23 = 0;
            uVar24 = 0;
          }
          dVar22 = (double)CONCAT44(uVar24,uVar23);
        }
        else {
          dVar22 = dVar9;
          if (*(char *)(lVar3 + 0x28) == '\x01') {
            uVar15 = 0;
            if (iVar16 < *(int *)(lVar3 + 0x60)) {
              uVar15 = (uint)~iVar16 >> 0x1f;
            }
            if (uVar15 == 0) {
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            dVar22 = *(double *)(*(longlong *)(lVar3 + 0x58) + lVar20 * 8);
            if (dVar22 <= *(double *)(*(longlong *)this + 200)) {
              dVar22 = *(double *)(*(longlong *)this + 200);
            }
            dVar22 = dVar9 / dVar22;
          }
        }
        plVar5 = *(longlong **)((longlong)this + 0x10);
        uVar19 = uVar19 * 3;
        uVar15 = 0;
        if ((int)uVar19 < (int)plVar5[1]) {
          uVar15 = ~uVar19 >> 0x1f;
        }
        if (uVar15 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        plVar6 = *(longlong **)((longlong)this + 0x10);
        uVar15 = uVar19 + 1;
        uVar21 = 0;
        if ((int)uVar15 < (int)plVar6[1]) {
          uVar21 = ~uVar15 >> 0x1f;
        }
        dVar10 = dVar10 + dVar22 * *(double *)(*plVar5 + (longlong)(int)uVar19 * 8);
        if (uVar21 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        uVar19 = uVar19 + 2;
        plVar5 = *(longlong **)((longlong)this + 0x10);
        uVar21 = 0;
        if ((int)uVar19 < (int)plVar5[1]) {
          uVar21 = ~uVar19 >> 0x1f;
        }
        dVar12 = dVar12 + dVar22 * *(double *)(*plVar6 + (longlong)(int)uVar15 * 8);
        if (uVar21 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        dVar11 = dVar11 + dVar22;
        dVar8 = dVar8 + dVar22 * *(double *)(*plVar5 + (longlong)(int)uVar19 * 8);
      }
      UE::Geometry::FSmallListSet::BaseValueIterator::GotoNext(local_e0);
    }
    if (__real_3e45798ee2308c3a <
        (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      dVar9 = dVar9 / dVar11;
      dVar10 = dVar10 * dVar9;
      dVar12 = dVar12 * dVar9;
      dVar8 = dVar8 * dVar9;
    }
    iVar16 = UE::Geometry::FSmoothDynamicMeshAttributes::MeshVIDToSelectionIdx
                       (*(FSmoothDynamicMeshAttributes **)this,param_1);
    plVar5 = *(longlong **)((longlong)this + 0x10);
    lVar2 = *(longlong *)this;
    uVar19 = iVar16 * 3;
    uVar15 = 0;
    if ((int)uVar19 < (int)plVar5[1]) {
      uVar15 = ~uVar19 >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar3 = *plVar5;
    plVar5 = *(longlong **)((longlong)this + 0x18);
    lVar20 = (longlong)(int)uVar19;
    dVar9 = *(double *)(lVar3 + lVar20 * 8);
    dVar11 = *(double *)(lVar2 + 0x30);
    dVar22 = *(double *)(lVar3 + lVar20 * 8);
    uVar15 = 0;
    if ((int)uVar19 < (int)plVar5[1]) {
      uVar15 = ~uVar19 >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    plVar6 = *(longlong **)((longlong)this + 0x10);
    lVar2 = *(longlong *)this;
    *(double *)(*plVar5 + lVar20 * 8) = (dVar10 - dVar9) * dVar11 + dVar22;
    uVar21 = uVar19 + 1;
    uVar15 = 0;
    if ((int)uVar21 < (int)plVar6[1]) {
      uVar15 = ~uVar21 >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar3 = *plVar6;
    lVar20 = (longlong)(int)uVar21;
    dVar9 = *(double *)(lVar3 + lVar20 * 8);
    dVar10 = *(double *)(lVar2 + 0x30);
    plVar5 = *(longlong **)((longlong)this + 0x18);
    dVar11 = *(double *)(lVar3 + lVar20 * 8);
    uVar15 = 0;
    if ((int)uVar21 < (int)plVar5[1]) {
      uVar15 = ~uVar21 >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar19 = uVar19 + 2;
    plVar6 = *(longlong **)((longlong)this + 0x10);
    *(double *)(*plVar5 + lVar20 * 8) = (dVar12 - dVar9) * dVar10 + dVar11;
    lVar2 = *(longlong *)this;
    uVar15 = 0;
    if ((int)uVar19 < (int)plVar6[1]) {
      uVar15 = ~uVar19 >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    lVar3 = *plVar6;
    plVar5 = *(longlong **)((longlong)this + 0x18);
    lVar20 = (longlong)(int)uVar19;
    dVar9 = *(double *)(lVar3 + lVar20 * 8);
    dVar10 = *(double *)(lVar2 + 0x30);
    dVar11 = *(double *)(lVar3 + lVar20 * 8);
    uVar15 = 0;
    if ((int)uVar19 < (int)plVar5[1]) {
      uVar15 = ~uVar19 >> 0x1f;
    }
    if (uVar15 == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    *(double *)(*plVar5 + lVar20 * 8) = (dVar8 - dVar9) * dVar10 + dVar11;
  }
  return;
}

// operator() @ 14c7c7bd0

void __thiscall
`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,1>'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  FDynamicMesh3 *pFVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  float fVar15;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_58 [2];
  
  lVar5 = *(longlong *)this;
  iVar2 = *(int *)(lVar5 + 0x20);
  if (iVar2 != 0) {
    uVar11 = 0;
    if (param_1 < iVar2) {
      uVar11 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    param_1 = *(uint *)(*(longlong *)(lVar5 + 0x18) + (longlong)param_1 * 4);
  }
  pFVar6 = (*(FSmoothDynamicMeshAttributes **)this)->Mesh;
  if (((-1 < param_1) &&
      (param_1 < (int)((pFVar6->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (pFVar6->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((pFVar6->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    uVar11 = UE::Geometry::FSmoothDynamicMeshAttributes::MeshVIDToSelectionIdx
                       (*(FSmoothDynamicMeshAttributes **)this,param_1);
    local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58[0].ArrayNum = 0;
    local_58[0].ArrayMax = 0;
    UE::Geometry::TDynamicMeshOverlay<float,1>::GetVertexElements
              ((TDynamicMeshOverlay<float,1> *)**(undefined8 **)((longlong)this + 8),param_1,
               local_58);
    iVar2 = local_58[0].ArrayNum;
    uVar13 = (ulonglong)local_58[0].ArrayNum;
    pFVar1 = local_58[0].AllocatorInstance.Data + uVar13 * 4;
    FVar14.Data = local_58[0].AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar13 != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar14.Data == pFVar1) break;
      uVar3 = *(uint *)FVar14.Data;
      fVar15 = *(float *)(*(longlong *)
                           (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x48) +
                           (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4);
      if (*(char *)(*(longlong *)this + 0x29) == '\0') {
        puVar7 = *(undefined8 **)((longlong)this + 0x10);
        iVar4 = *(int *)(puVar7 + 1);
        if (iVar4 != 0) {
          if ((iVar4 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (*(char *)*puVar7 == '\0') goto LAB_14c7c7de3;
        }
        plVar8 = *(longlong **)((longlong)this + 0x18);
        uVar12 = 0;
        if ((int)uVar11 < (int)plVar8[1]) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar15 = *(float *)(*plVar8 + (longlong)(int)uVar11 * 4);
      }
      else if (*(char *)(*(longlong *)this + 0x29) == '\x01') {
        puVar7 = *(undefined8 **)((longlong)this + 0x10);
        iVar4 = *(int *)(puVar7 + 1);
        if (iVar4 != 0) {
          if ((iVar4 < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if (*(char *)*puVar7 == '\0') goto LAB_14c7c7de3;
        }
        plVar8 = *(longlong **)((longlong)this + 0x18);
        lVar5 = *(longlong *)this;
        uVar12 = 0;
        if ((int)uVar11 < (int)plVar8[1]) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        fVar15 = (float)((double)(*(float *)(*plVar8 + (longlong)(int)uVar11 * 4) - fVar15) *
                         *(double *)(lVar5 + 0x38) + (double)fVar15);
      }
      else {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SmoothDynamicMeshAttributes.cpp"
                            ,0xc3,L"");
        if (bVar10) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
LAB_14c7c7de3:
      FVar14.Data = FVar14.Data + 4;
      *(float *)(*(longlong *)
                  (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x48) +
                  (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 4) = fVar15;
      uVar13 = local_58[0]._8_8_ & 0xffffffff;
    }
    if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14c7c7f50

void __thiscall
`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,2>'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FDynamicMesh3 *pFVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ForAnyElementType FVar17;
  float fVar18;
  float fVar19;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_68 [3];
  
  lVar16 = *(longlong *)this;
  iVar11 = *(int *)(lVar16 + 0x20);
  if (iVar11 != 0) {
    uVar10 = 0;
    if (param_1 < iVar11) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    param_1 = *(uint *)(*(longlong *)(lVar16 + 0x18) + (longlong)param_1 * 4);
  }
  pFVar3 = (*(FSmoothDynamicMeshAttributes **)this)->Mesh;
  if (((-1 < param_1) &&
      (param_1 < (int)((pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((pFVar3->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    iVar11 = UE::Geometry::FSmoothDynamicMeshAttributes::MeshVIDToSelectionIdx
                       (*(FSmoothDynamicMeshAttributes **)this,param_1);
    local_68[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68[0].ArrayNum = 0;
    local_68[0].ArrayMax = 0;
    lVar16 = (longlong)iVar11;
    UE::Geometry::TDynamicMeshOverlay<float,2>::GetVertexElements
              ((TDynamicMeshOverlay<float,2> *)**(undefined8 **)((longlong)this + 8),param_1,
               local_68);
    uVar8 = local_68[0]._8_8_;
    uVar14 = (ulonglong)local_68[0].ArrayNum;
    pFVar1 = local_68[0].AllocatorInstance.Data + uVar14 * 4;
    uVar15 = uVar14;
    FVar17.Data = local_68[0].AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar15 != (int)uVar14) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar17.Data == pFVar1) break;
      uVar10 = *(uint *)FVar17.Data;
      lVar4 = *(longlong *)(**(longlong **)((longlong)this + 8) + 0x48);
      fVar19 = *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar10 & 0x7fffffff) >> 8) * 8) +
                         (ulonglong)(uVar10 * 2 & 0x1ff) * 4);
      fVar18 = *(float *)(*(longlong *)(lVar4 + (ulonglong)((uVar10 & 0x7fffffff) >> 8) * 8) +
                         (ulonglong)(uVar10 * 2 + 1 & 0x1ff) * 4);
      if (*(char *)(*(longlong *)this + 0x29) == '\0') {
        puVar5 = *(undefined8 **)((longlong)this + 0x10);
        iVar2 = *(int *)(puVar5 + 1);
        if (iVar2 == 0) {
LAB_14c7c8135:
          plVar6 = *(longlong **)((longlong)this + 0x18);
          uVar12 = 0;
          if (iVar11 * 2 < (int)plVar6[1]) {
            uVar12 = (uint)~(iVar11 * 2) >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar19 = *(float *)(*plVar6 + lVar16 * 8);
        }
        else {
          if ((iVar2 < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(char *)*puVar5 != '\0') goto LAB_14c7c8135;
        }
        plVar6 = *(longlong **)((longlong)this + 0x10);
        iVar2 = (int)plVar6[1];
        if (iVar2 != 0) {
          if ((iVar2 < 2) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(char *)(*plVar6 + 1) == '\0') goto LAB_14c7c8248;
        }
        plVar6 = *(longlong **)((longlong)this + 0x18);
        uVar13 = iVar11 * 2 + 1;
        uVar12 = 0;
        if ((int)uVar13 < (int)plVar6[1]) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar18 = *(float *)(*plVar6 + 4 + lVar16 * 8);
      }
      else if (*(char *)(*(longlong *)this + 0x29) == '\x01') {
        puVar5 = *(undefined8 **)((longlong)this + 0x10);
        iVar2 = *(int *)(puVar5 + 1);
        if (iVar2 == 0) {
LAB_14c7c8304:
          plVar6 = *(longlong **)((longlong)this + 0x18);
          lVar4 = *(longlong *)this;
          uVar12 = 0;
          if (iVar11 * 2 < (int)plVar6[1]) {
            uVar12 = (uint)~(iVar11 * 2) >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          fVar19 = (float)((double)(*(float *)(*plVar6 + lVar16 * 8) - fVar19) *
                           *(double *)(lVar4 + 0x38) + (double)fVar19);
        }
        else {
          if ((iVar2 < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(char *)*puVar5 != '\0') goto LAB_14c7c8304;
        }
        plVar6 = *(longlong **)((longlong)this + 0x10);
        iVar2 = (int)plVar6[1];
        if (iVar2 != 0) {
          if ((iVar2 < 2) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(char *)(*plVar6 + 1) == '\0') goto LAB_14c7c8248;
        }
        plVar6 = *(longlong **)((longlong)this + 0x18);
        uVar13 = iVar11 * 2 + 1;
        lVar4 = *(longlong *)this;
        uVar12 = 0;
        if ((int)uVar13 < (int)plVar6[1]) {
          uVar12 = ~uVar13 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        fVar18 = (float)((double)(*(float *)(*plVar6 + 4 + lVar16 * 8) - fVar18) *
                         *(double *)(lVar4 + 0x38) + (double)fVar18);
      }
      else {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SmoothDynamicMeshAttributes.cpp"
                           ,0xc3,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
LAB_14c7c8248:
      lVar4 = **(longlong **)((longlong)this + 8);
      *(float *)(*(longlong *)
                  (*(longlong *)(lVar4 + 0x48) + (ulonglong)((uVar10 & 0x7fffffff) >> 8) * 8) +
                (ulonglong)(uVar10 * 2 & 0x1ff) * 4) = fVar19;
      FVar17.Data = FVar17.Data + 4;
      *(float *)(*(longlong *)
                  (*(longlong *)(lVar4 + 0x48) + (ulonglong)((uVar10 & 0x7fffffff) >> 8) * 8) +
                (ulonglong)(uVar10 * 2 + 1 & 0x1ff) * 4) = fVar18;
      uVar15 = local_68[0]._8_8_ & 0xffffffff;
      uVar14 = uVar8 & 0xffffffff;
    }
    if (local_68[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68[0].AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14c7c84c0

void __thiscall
`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,3>'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FDynamicMesh3 *pFVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_88 [8];
  FScriptContainerElement *local_80;
  TArray<int,TSizedDefaultAllocator<32>_> local_78 [4];
  
  lVar17 = *(longlong *)this;
  iVar1 = *(int *)(lVar17 + 0x20);
  if (iVar1 != 0) {
    uVar10 = 0;
    if (param_1 < iVar1) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    param_1 = *(uint *)(*(longlong *)(lVar17 + 0x18) + (longlong)param_1 * 4);
  }
  pFVar4 = (*(FSmoothDynamicMeshAttributes **)this)->Mesh;
  if (((-1 < param_1) &&
      (param_1 < (int)((pFVar4->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (pFVar4->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((pFVar4->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    iVar11 = UE::Geometry::FSmoothDynamicMeshAttributes::MeshVIDToSelectionIdx
                       (*(FSmoothDynamicMeshAttributes **)this,param_1);
    lVar17 = (longlong)iVar11;
    local_78[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78[0].ArrayNum = 0;
    local_78[0].ArrayMax = 0;
    UE::Geometry::TDynamicMeshOverlay<float,3>::GetVertexElements
              ((TDynamicMeshOverlay<float,3> *)**(undefined8 **)((longlong)this + 8),param_1,
               local_78);
    iVar1 = local_78[0].ArrayNum;
    uVar14 = (ulonglong)local_78[0].ArrayNum;
    pFVar16 = local_78[0].AllocatorInstance.Data + uVar14 * 4;
    FVar15.Data = local_78[0].AllocatorInstance.Data;
    local_80 = pFVar16;
    while( true ) {
      if ((int)uVar14 != iVar1) {
        local_88[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_88);
      }
      if (FVar15.Data == pFVar16) break;
      iVar2 = *(int *)FVar15.Data;
      uVar10 = iVar2 * 3;
      lVar5 = *(longlong *)(**(longlong **)((longlong)this + 8) + 0x48);
      fVar20 = *(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar10 >> 9) * 8) +
                         (ulonglong)(uVar10 & 0x1ff) * 4);
      fVar18 = *(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                         (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
      fVar19 = *(float *)(*(longlong *)(lVar5 + (ulonglong)(uVar10 + 2 >> 9) * 8) +
                         (ulonglong)(uVar10 + 2 & 0x1ff) * 4);
      if (*(char *)(*(longlong *)this + 0x29) == '\0') {
        puVar6 = *(undefined8 **)((longlong)this + 0x10);
        iVar3 = *(int *)(puVar6 + 1);
        uVar10 = 0;
        if (iVar3 == 0) {
LAB_14c7c86c2:
          plVar7 = *(longlong **)((longlong)this + 0x18);
          uVar13 = uVar10;
          if (iVar11 * 3 < (int)plVar7[1]) {
            uVar13 = (uint)~(iVar11 * 3) >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar20 = *(float *)(*plVar7 + lVar17 * 0xc);
        }
        else {
          if ((iVar3 < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(char *)*puVar6 != '\0') goto LAB_14c7c86c2;
        }
        plVar7 = *(longlong **)((longlong)this + 0x10);
        iVar3 = (int)plVar7[1];
        if (iVar3 == 0) {
LAB_14c7c876f:
          plVar7 = *(longlong **)((longlong)this + 0x18);
          uVar12 = iVar11 * 3 + 1;
          uVar13 = uVar10;
          if ((int)uVar12 < (int)plVar7[1]) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar18 = *(float *)(*plVar7 + 4 + lVar17 * 0xc);
        }
        else {
          if ((iVar3 < 2) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(char *)(*plVar7 + 1) != '\0') goto LAB_14c7c876f;
        }
        plVar7 = *(longlong **)((longlong)this + 0x10);
        iVar3 = (int)plVar7[1];
        if (iVar3 != 0) {
          if ((iVar3 < 3) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar16 = local_80;
          if (*(char *)(*plVar7 + 2) == '\0') goto LAB_14c7c8b05;
        }
        plVar7 = *(longlong **)((longlong)this + 0x18);
        uVar13 = iVar11 * 3 + 2;
        if ((int)uVar13 < (int)plVar7[1]) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar19 = *(float *)(*plVar7 + 8 + lVar17 * 0xc);
        pFVar16 = local_80;
      }
      else if (*(char *)(*(longlong *)this + 0x29) == '\x01') {
        puVar6 = *(undefined8 **)((longlong)this + 0x10);
        iVar3 = *(int *)(puVar6 + 1);
        if (iVar3 == 0) {
LAB_14c7c88e2:
          plVar7 = *(longlong **)((longlong)this + 0x18);
          lVar5 = *(longlong *)this;
          uVar10 = 0;
          if (iVar11 * 3 < (int)plVar7[1]) {
            uVar10 = (uint)~(iVar11 * 3) >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar20 = (float)((double)(*(float *)(*plVar7 + lVar17 * 0xc) - fVar20) *
                           *(double *)(lVar5 + 0x38) + (double)fVar20);
        }
        else {
          if ((iVar3 < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(char *)*puVar6 != '\0') goto LAB_14c7c88e2;
        }
        plVar7 = *(longlong **)((longlong)this + 0x10);
        iVar3 = (int)plVar7[1];
        if (iVar3 == 0) {
LAB_14c7c89af:
          plVar7 = *(longlong **)((longlong)this + 0x18);
          uVar13 = iVar11 * 3 + 1;
          lVar5 = *(longlong *)this;
          uVar10 = 0;
          if ((int)uVar13 < (int)plVar7[1]) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar18 = (float)((double)(*(float *)(*plVar7 + 4 + lVar17 * 0xc) - fVar18) *
                           *(double *)(lVar5 + 0x38) + (double)fVar18);
        }
        else {
          if ((iVar3 < 2) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(char *)(*plVar7 + 1) != '\0') goto LAB_14c7c89af;
        }
        plVar7 = *(longlong **)((longlong)this + 0x10);
        iVar3 = (int)plVar7[1];
        if (iVar3 != 0) {
          if ((iVar3 < 3) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar16 = local_80;
          if (*(char *)(*plVar7 + 2) == '\0') goto LAB_14c7c8b05;
        }
        plVar7 = *(longlong **)((longlong)this + 0x18);
        lVar5 = *(longlong *)this;
        uVar10 = iVar11 * 3 + 2;
        uVar13 = 0;
        if ((int)uVar10 < (int)plVar7[1]) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar19 = (float)((double)(*(float *)(*plVar7 + 8 + lVar17 * 0xc) - fVar19) *
                         *(double *)(lVar5 + 0x38) + (double)fVar19);
        pFVar16 = local_80;
      }
      else {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SmoothDynamicMeshAttributes.cpp"
                           ,0xc3,L"");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
LAB_14c7c8b05:
      uVar10 = iVar2 * 3;
      lVar5 = **(longlong **)((longlong)this + 8);
      *(float *)(*(longlong *)(*(longlong *)(lVar5 + 0x48) + (ulonglong)(uVar10 >> 9) * 8) +
                (ulonglong)(uVar10 & 0x1ff) * 4) = fVar20;
      *(float *)(*(longlong *)(*(longlong *)(lVar5 + 0x48) + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                (ulonglong)(uVar10 + 1 & 0x1ff) * 4) = fVar18;
      FVar15.Data = FVar15.Data + 4;
      *(float *)(*(longlong *)(*(longlong *)(lVar5 + 0x48) + (ulonglong)(uVar10 + 2 >> 9) * 8) +
                (ulonglong)(uVar10 + 2 & 0x1ff) * 4) = fVar19;
      uVar14 = local_78[0]._8_8_ & 0xffffffff;
    }
    if (local_78[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78[0].AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14c7c8c00

void __thiscall
`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<float,4>'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FDynamicMesh3 *pFVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_98 [4];
  uint local_94;
  TArray<int,TSizedDefaultAllocator<32>_> local_90 [5];
  
  lVar15 = *(longlong *)this;
  iVar2 = *(int *)(lVar15 + 0x20);
  if (iVar2 != 0) {
    uVar10 = 0;
    if (param_1 < iVar2) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    param_1 = *(uint *)(*(longlong *)(lVar15 + 0x18) + (longlong)param_1 * 4);
  }
  pFVar4 = (*(FSmoothDynamicMeshAttributes **)this)->Mesh;
  if (((-1 < param_1) &&
      (param_1 < (int)((pFVar4->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (pFVar4->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((pFVar4->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    iVar11 = UE::Geometry::FSmoothDynamicMeshAttributes::MeshVIDToSelectionIdx
                       (*(FSmoothDynamicMeshAttributes **)this,param_1);
    lVar15 = (longlong)iVar11;
    local_90[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90[0].ArrayNum = 0;
    local_90[0].ArrayMax = 0;
    UE::Geometry::TDynamicMeshOverlay<float,4>::GetVertexElements
              ((TDynamicMeshOverlay<float,4> *)**(undefined8 **)((longlong)this + 8),param_1,
               local_90);
    iVar2 = local_90[0].ArrayNum;
    uVar14 = (ulonglong)local_90[0].ArrayNum;
    pFVar1 = local_90[0].AllocatorInstance.Data + uVar14 * 4;
    FVar16.Data = local_90[0].AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar14 != iVar2) {
        local_98[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_98);
      }
      if (FVar16.Data == pFVar1) break;
      local_94 = *(uint *)FVar16.Data;
      uVar10 = local_94 * 4;
      lVar5 = *(longlong *)(**(longlong **)((longlong)this + 8) + 0x48);
      fVar20 = *(float *)(*(longlong *)(lVar5 + (ulonglong)((local_94 & 0x3fffffff) >> 7) * 8) +
                         (ulonglong)(uVar10 & 0x1ff) * 4);
      fVar17 = *(float *)(*(longlong *)(lVar5 + (ulonglong)((local_94 & 0x3fffffff) >> 7) * 8) +
                         (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
      fVar18 = *(float *)(*(longlong *)(lVar5 + (ulonglong)((local_94 & 0x3fffffff) >> 7) * 8) +
                         (ulonglong)(uVar10 + 2 & 0x1ff) * 4);
      fVar19 = *(float *)(*(longlong *)(lVar5 + (ulonglong)((local_94 & 0x3fffffff) >> 7) * 8) +
                         (ulonglong)(uVar10 + 3 & 0x1ff) * 4);
      if (*(char *)(*(longlong *)this + 0x29) == '\0') {
        puVar6 = *(undefined8 **)((longlong)this + 0x10);
        iVar3 = *(int *)(puVar6 + 1);
        uVar10 = 0;
        if (iVar3 == 0) {
LAB_14c7c8e2a:
          plVar7 = *(longlong **)((longlong)this + 0x18);
          uVar13 = uVar10;
          if (iVar11 * 4 < (int)plVar7[1]) {
            uVar13 = (uint)~(iVar11 * 4) >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar20 = *(float *)(*plVar7 + lVar15 * 0x10);
        }
        else {
          if ((iVar3 < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(char *)*puVar6 != '\0') goto LAB_14c7c8e2a;
        }
        plVar7 = *(longlong **)((longlong)this + 0x10);
        iVar3 = (int)plVar7[1];
        if (iVar3 == 0) {
LAB_14c7c8edd:
          plVar7 = *(longlong **)((longlong)this + 0x18);
          uVar12 = iVar11 * 4 + 1;
          uVar13 = uVar10;
          if ((int)uVar12 < (int)plVar7[1]) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar17 = *(float *)(*plVar7 + 4 + lVar15 * 0x10);
        }
        else {
          if ((iVar3 < 2) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(char *)(*plVar7 + 1) != '\0') goto LAB_14c7c8edd;
        }
        plVar7 = *(longlong **)((longlong)this + 0x10);
        iVar3 = (int)plVar7[1];
        if (iVar3 == 0) {
LAB_14c7c8f90:
          plVar7 = *(longlong **)((longlong)this + 0x18);
          uVar12 = iVar11 * 4 + 2;
          uVar13 = uVar10;
          if ((int)uVar12 < (int)plVar7[1]) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar18 = *(float *)(*plVar7 + 8 + lVar15 * 0x10);
        }
        else {
          if ((iVar3 < 3) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(char *)(*plVar7 + 2) != '\0') goto LAB_14c7c8f90;
        }
        plVar7 = *(longlong **)((longlong)this + 0x10);
        iVar3 = (int)plVar7[1];
        if (iVar3 != 0) {
          if ((iVar3 < 4) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(char *)(*plVar7 + 3) == '\0') goto LAB_14c7c93f6;
        }
        plVar7 = *(longlong **)((longlong)this + 0x18);
        uVar13 = iVar11 * 4 + 3;
        if ((int)uVar13 < (int)plVar7[1]) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar19 = *(float *)(*plVar7 + 0xc + lVar15 * 0x10);
      }
      else if (*(char *)(*(longlong *)this + 0x29) == '\x01') {
        puVar6 = *(undefined8 **)((longlong)this + 0x10);
        iVar3 = *(int *)(puVar6 + 1);
        if (iVar3 == 0) {
LAB_14c7c9105:
          plVar7 = *(longlong **)((longlong)this + 0x18);
          lVar5 = *(longlong *)this;
          uVar10 = 0;
          if (iVar11 * 4 < (int)plVar7[1]) {
            uVar10 = (uint)~(iVar11 * 4) >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar20 = (float)((double)(*(float *)(*plVar7 + lVar15 * 0x10) - fVar20) *
                           *(double *)(lVar5 + 0x38) + (double)fVar20);
        }
        else {
          if ((iVar3 < 1) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(char *)*puVar6 != '\0') goto LAB_14c7c9105;
        }
        plVar7 = *(longlong **)((longlong)this + 0x10);
        iVar3 = (int)plVar7[1];
        if (iVar3 == 0) {
LAB_14c7c91d4:
          plVar7 = *(longlong **)((longlong)this + 0x18);
          uVar13 = iVar11 * 4 + 1;
          lVar5 = *(longlong *)this;
          uVar10 = 0;
          if ((int)uVar13 < (int)plVar7[1]) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar17 = (float)((double)(*(float *)(*plVar7 + 4 + lVar15 * 0x10) - fVar17) *
                           *(double *)(lVar5 + 0x38) + (double)fVar17);
        }
        else {
          if ((iVar3 < 2) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(char *)(*plVar7 + 1) != '\0') goto LAB_14c7c91d4;
        }
        plVar7 = *(longlong **)((longlong)this + 0x10);
        iVar3 = (int)plVar7[1];
        if (iVar3 == 0) {
LAB_14c7c92a1:
          plVar7 = *(longlong **)((longlong)this + 0x18);
          uVar13 = iVar11 * 4 + 2;
          lVar5 = *(longlong *)this;
          uVar10 = 0;
          if ((int)uVar13 < (int)plVar7[1]) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          fVar18 = (float)((double)(*(float *)(*plVar7 + 8 + lVar15 * 0x10) - fVar18) *
                           *(double *)(lVar5 + 0x38) + (double)fVar18);
        }
        else {
          if ((iVar3 < 3) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(char *)(*plVar7 + 2) != '\0') goto LAB_14c7c92a1;
        }
        plVar7 = *(longlong **)((longlong)this + 0x10);
        iVar3 = (int)plVar7[1];
        if (iVar3 != 0) {
          if ((iVar3 < 4) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(char *)(*plVar7 + 3) == '\0') goto LAB_14c7c93f6;
        }
        plVar7 = *(longlong **)((longlong)this + 0x18);
        uVar13 = iVar11 * 4 + 3;
        lVar5 = *(longlong *)this;
        uVar10 = 0;
        if ((int)uVar13 < (int)plVar7[1]) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        fVar19 = (float)((double)(*(float *)(*plVar7 + 0xc + lVar15 * 0x10) - fVar19) *
                         *(double *)(lVar5 + 0x38) + (double)fVar19);
      }
      else {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SmoothDynamicMeshAttributes.cpp"
                           ,0xc3,L"");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
LAB_14c7c93f6:
      lVar5 = **(longlong **)((longlong)this + 8);
      uVar10 = local_94 * 4;
      *(float *)(*(longlong *)
                  (*(longlong *)(lVar5 + 0x48) + (ulonglong)((local_94 & 0x3fffffff) >> 7) * 8) +
                (ulonglong)(uVar10 & 0x1ff) * 4) = fVar20;
      *(float *)(*(longlong *)
                  (*(longlong *)(lVar5 + 0x48) + (ulonglong)((local_94 & 0x3fffffff) >> 7) * 8) +
                (ulonglong)(uVar10 + 1 & 0x1ff) * 4) = fVar17;
      *(float *)(*(longlong *)
                  (*(longlong *)(lVar5 + 0x48) + (ulonglong)((local_94 & 0x3fffffff) >> 7) * 8) +
                (ulonglong)(uVar10 + 2 & 0x1ff) * 4) = fVar18;
      FVar16.Data = FVar16.Data + 4;
      *(float *)(*(longlong *)
                  (*(longlong *)(lVar5 + 0x48) + (ulonglong)((local_94 & 0x3fffffff) >> 7) * 8) +
                (ulonglong)(uVar10 + 3 & 0x1ff) * 4) = fVar19;
      uVar14 = local_90[0]._8_8_ & 0xffffffff;
    }
    if (local_90[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90[0].AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 14c7c9530

void __thiscall
`UE::Geometry::FSmoothDynamicMeshAttributes::SmoothOverlay<double,3>'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FDynamicMesh3 *pFVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  code *pcVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  undefined1 local_88 [8];
  FScriptContainerElement *local_80;
  TArray<int,TSizedDefaultAllocator<32>_> local_78 [4];
  
  lVar20 = *(longlong *)this;
  iVar4 = *(int *)(lVar20 + 0x20);
  if (iVar4 != 0) {
    uVar13 = 0;
    if (param_1 < iVar4) {
      uVar13 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    param_1 = *(uint *)(*(longlong *)(lVar20 + 0x18) + (longlong)param_1 * 4);
  }
  pFVar7 = (*(FSmoothDynamicMeshAttributes **)this)->Mesh;
  if (((-1 < param_1) &&
      (param_1 < (int)((pFVar7->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                      (pFVar7->VertexRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((pFVar7->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    iVar14 = UE::Geometry::FSmoothDynamicMeshAttributes::MeshVIDToSelectionIdx
                       (*(FSmoothDynamicMeshAttributes **)this,param_1);
    lVar20 = (longlong)iVar14;
    local_78[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78[0].ArrayNum = 0;
    local_78[0].ArrayMax = 0;
    UE::Geometry::TDynamicMeshOverlay<double,3>::GetVertexElements
              ((TDynamicMeshOverlay<double,3> *)**(undefined8 **)((longlong)this + 8),param_1,
               local_78);
    iVar4 = local_78[0].ArrayNum;
    uVar17 = (ulonglong)local_78[0].ArrayNum;
    pFVar19 = local_78[0].AllocatorInstance.Data + uVar17 * 4;
    FVar18.Data = local_78[0].AllocatorInstance.Data;
    local_80 = pFVar19;
    while( true ) {
      if ((int)uVar17 != iVar4) {
        local_88[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_88);
      }
      if (FVar18.Data == pFVar19) break;
      iVar5 = *(int *)FVar18.Data;
      uVar13 = iVar5 * 3;
      lVar8 = *(longlong *)(**(longlong **)((longlong)this + 8) + 0x48);
      dVar1 = *(double *)
               (*(longlong *)(lVar8 + (ulonglong)(uVar13 >> 9) * 8) +
               (ulonglong)(uVar13 & 0x1ff) * 8);
      dVar2 = *(double *)
               (*(longlong *)(lVar8 + (ulonglong)(uVar13 + 1 >> 9) * 8) +
               (ulonglong)(uVar13 + 1 & 0x1ff) * 8);
      dVar3 = *(double *)
               (*(longlong *)(lVar8 + (ulonglong)(uVar13 + 2 >> 9) * 8) +
               (ulonglong)(uVar13 + 2 & 0x1ff) * 8);
      if (*(char *)(*(longlong *)this + 0x29) == '\0') {
        puVar9 = *(undefined8 **)((longlong)this + 0x10);
        iVar6 = *(int *)(puVar9 + 1);
        uVar13 = 0;
        if (iVar6 == 0) {
LAB_14c7c9732:
          plVar10 = *(longlong **)((longlong)this + 0x18);
          uVar16 = uVar13;
          if (iVar14 * 3 < (int)plVar10[1]) {
            uVar16 = (uint)~(iVar14 * 3) >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          dVar1 = *(double *)(*plVar10 + lVar20 * 0x18);
        }
        else {
          if ((iVar6 < 1) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(char *)*puVar9 != '\0') goto LAB_14c7c9732;
        }
        plVar10 = *(longlong **)((longlong)this + 0x10);
        iVar6 = (int)plVar10[1];
        if (iVar6 == 0) {
LAB_14c7c97df:
          plVar10 = *(longlong **)((longlong)this + 0x18);
          uVar15 = iVar14 * 3 + 1;
          uVar16 = uVar13;
          if ((int)uVar15 < (int)plVar10[1]) {
            uVar16 = ~uVar15 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          dVar2 = *(double *)(*plVar10 + 8 + lVar20 * 0x18);
        }
        else {
          if ((iVar6 < 2) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(char *)(*plVar10 + 1) != '\0') goto LAB_14c7c97df;
        }
        plVar10 = *(longlong **)((longlong)this + 0x10);
        iVar6 = (int)plVar10[1];
        if (iVar6 != 0) {
          if ((iVar6 < 3) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar19 = local_80;
          if (*(char *)(*plVar10 + 2) == '\0') goto LAB_14c7c9b4a;
        }
        plVar10 = *(longlong **)((longlong)this + 0x18);
        uVar16 = iVar14 * 3 + 2;
        if ((int)uVar16 < (int)plVar10[1]) {
          uVar13 = ~uVar16 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        dVar3 = *(double *)(*plVar10 + 0x10 + lVar20 * 0x18);
        pFVar19 = local_80;
      }
      else if (*(char *)(*(longlong *)this + 0x29) == '\x01') {
        puVar9 = *(undefined8 **)((longlong)this + 0x10);
        iVar6 = *(int *)(puVar9 + 1);
        if (iVar6 == 0) {
LAB_14c7c994e:
          plVar10 = *(longlong **)((longlong)this + 0x18);
          lVar8 = *(longlong *)this;
          uVar13 = 0;
          if (iVar14 * 3 < (int)plVar10[1]) {
            uVar13 = (uint)~(iVar14 * 3) >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          dVar1 = dVar1 + (*(double *)(*plVar10 + lVar20 * 0x18) - dVar1) *
                          *(double *)(lVar8 + 0x38);
        }
        else {
          if ((iVar6 < 1) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(char *)*puVar9 != '\0') goto LAB_14c7c994e;
        }
        plVar10 = *(longlong **)((longlong)this + 0x10);
        iVar6 = (int)plVar10[1];
        if (iVar6 == 0) {
LAB_14c7c9a0c:
          plVar10 = *(longlong **)((longlong)this + 0x18);
          uVar16 = iVar14 * 3 + 1;
          lVar8 = *(longlong *)this;
          uVar13 = 0;
          if ((int)uVar16 < (int)plVar10[1]) {
            uVar13 = ~uVar16 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          dVar2 = dVar2 + (*(double *)(*plVar10 + 8 + lVar20 * 0x18) - dVar2) *
                          *(double *)(lVar8 + 0x38);
        }
        else {
          if ((iVar6 < 2) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          if (*(char *)(*plVar10 + 1) != '\0') goto LAB_14c7c9a0c;
        }
        plVar10 = *(longlong **)((longlong)this + 0x10);
        iVar6 = (int)plVar10[1];
        if (iVar6 != 0) {
          if ((iVar6 < 3) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar19 = local_80;
          if (*(char *)(*plVar10 + 2) == '\0') goto LAB_14c7c9b4a;
        }
        plVar10 = *(longlong **)((longlong)this + 0x18);
        lVar8 = *(longlong *)this;
        uVar13 = iVar14 * 3 + 2;
        uVar16 = 0;
        if ((int)uVar13 < (int)plVar10[1]) {
          uVar16 = ~uVar13 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        dVar3 = dVar3 + (*(double *)(*plVar10 + 0x10 + lVar20 * 0x18) - dVar3) *
                        *(double *)(lVar8 + 0x38);
        pFVar19 = local_80;
      }
      else {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Operations\\SmoothDynamicMeshAttributes.cpp"
                            ,0xc3,L"");
        if (bVar12) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
      }
LAB_14c7c9b4a:
      uVar13 = iVar5 * 3;
      lVar8 = **(longlong **)((longlong)this + 8);
      *(double *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x48) + (ulonglong)(uVar13 >> 9) * 8) +
       (ulonglong)(uVar13 & 0x1ff) * 8) = dVar1;
      *(double *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x48) + (ulonglong)(uVar13 + 1 >> 9) * 8) +
       (ulonglong)(uVar13 + 1 & 0x1ff) * 8) = dVar2;
      FVar18.Data = FVar18.Data + 4;
      *(double *)
       (*(longlong *)(*(longlong *)(lVar8 + 0x48) + (ulonglong)(uVar13 + 2 >> 9) * 8) +
       (ulonglong)(uVar13 + 2 & 0x1ff) * 8) = dVar3;
      uVar17 = local_78[0]._8_8_ & 0xffffffff;
    }
    if (local_78[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78[0].AllocatorInstance.Data);
    }
  }
  return;
}

// Cancelled @ 14c7e7e60

bool __thiscall
UE::Geometry::FSmoothDynamicMeshAttributes::Cancelled(FSmoothDynamicMeshAttributes *this)

{
  FProgressCancel *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  pFVar1 = this->Progress;
  if (pFVar1 == (FProgressCancel *)0x0) {
    return false;
  }
  if (pFVar1->WasCancelled != false) {
    return true;
  }
  Core::Private::Function::CheckCallable(*(void **)&pFVar1->CancelF);
  pcVar2 = *(code **)&pFVar1->CancelF;
  plVar3 = *(longlong **)&(pFVar1->CancelF).field_0x28;
  plVar6 = (longlong *)&(pFVar1->CancelF).field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar6 = plVar3;
  }
  uVar5 = (**(code **)(*plVar6 + 8))();
  bVar4 = (bool)(*pcVar2)(uVar5);
  pFVar1->WasCancelled = bVar4;
  return bVar4;
}

// MeshVIDToSelectionIdx @ 14c81b2a0

int __thiscall
UE::Geometry::FSmoothDynamicMeshAttributes::MeshVIDToSelectionIdx
          (FSmoothDynamicMeshAttributes *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined1 *puVar6;
  
  if (*(int *)&(this->VIDToExpandedSelectionIdx).field_0x8 !=
      *(int *)&(this->VIDToExpandedSelectionIdx).field_0x34) {
    puVar6 = *(undefined1 **)&(this->VIDToExpandedSelectionIdx).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->VIDToExpandedSelectionIdx).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->VIDToExpandedSelectionIdx).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->VIDToExpandedSelectionIdx;
      do {
        if (*(int *)(lVar1 + (longlong)iVar4 * 0x10) == param_1) {
          piVar5 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                   FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                *)&this->VIDToExpandedSelectionIdx,param_1);
          return *piVar5;
        }
        iVar4 = *(int *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4177698926289223523>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Operations\\SmoothDynamicMeshAttributes.h"
                       ,0x9d,"VIDToExpandedSelectionIdx.Contains(VertexID)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  return param_1;
}

