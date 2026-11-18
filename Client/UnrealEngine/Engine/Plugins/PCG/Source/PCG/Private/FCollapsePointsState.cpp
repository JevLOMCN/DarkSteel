// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// FCollapsePointsState @ 149acf510

/* WARNING: Type propagation algorithm not settling */

FCollapsePointsState * __thiscall
PCGCollapsePoints::FCollapsePointsState::FCollapsePointsState(FCollapsePointsState *this)

{
  int *piVar1;
  TArray<TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,TAlignedHeapAllocator<8>_>
  *pTVar2;
  TArray<TOctree2<FPCGPointRef,FPCGPointRefSemantics>::FNode,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,TAlignedHeapAllocator<8>_>
  *pTVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  
  pTVar2 = &(this->PointOctree).TreeElements;
  (this->PointTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->PointOctree).TreeNodes.ArrayMax;
  (this->PointTransforms).ArrayNum = 0;
  (this->PointTransforms).ArrayMax = 0;
  (this->PointOctree).RootNodeContext.Bounds.Center.field0_0x0._s_0.X = 0.0;
  (this->PointOctree).RootNodeContext.Bounds.Center.field0_0x0._s_0.Y = 0.0;
  (this->PointOctree).RootNodeContext.Bounds.Center.field0_0x0._s_0.Z = 0.0;
  (this->PointOctree).RootNodeContext.Bounds.Center.field0_0x0._s_0.W = 1.0;
  (this->PointOctree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.X = 0.0;
  (this->PointOctree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.Y = 0.0;
  (this->PointOctree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.Z = 0.0;
  (this->PointOctree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.W = 1.0;
  (this->PointOctree).TreeNodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointOctree).TreeNodes.ArrayNum = 0;
  (this->PointOctree).ParentLinks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointOctree).ParentLinks.ArrayNum = 0;
  (this->PointOctree).ParentLinks.ArrayMax = 0;
  (this->PointOctree).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PointOctree).FreeList.ArrayNum = 0;
  (this->PointOctree).FreeList.ArrayMax = 0;
  *piVar1 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PointOctree).TreeElements.ArrayNum = 0;
  (this->PointOctree).TreeElements.ArrayMax = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&(this->PointOctree).TreeNodes.AllocatorInstance,piVar1);
  (this->PointOctree).TreeNodes.ArrayNum = iVar6 + 1;
  DefaultConstructItems<TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::FNode,int>
            ((this->PointOctree).TreeNodes.AllocatorInstance.Data + (longlong)iVar6 * 8,1);
  iVar6 = (this->PointOctree).TreeElements.ArrayNum;
  if (iVar6 == (this->PointOctree).TreeElements.ArrayMax) {
    iVar6 = UE::Core::Private::ReallocGrow1_DoAlloc<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                      (0x410,8,&pTVar2->AllocatorInstance,&(this->PointOctree).TreeElements.ArrayMax
                      );
  }
  (this->PointOctree).TreeElements.ArrayNum = iVar6 + 1;
  DefaultConstructItems<TArray<PCGPointOctree::FPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
            ((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 0x410,1);
  pTVar3 = &(this->Octree).TreeNodes;
  (this->Weights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Octree).TreeNodes.ArrayMax;
  pTVar4 = &(this->Octree).TreeElements;
  *piVar1 = 0;
  (this->Weights).ArrayNum = 0;
  (this->Weights).ArrayMax = 0;
  (this->Merged).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Merged).ArrayNum = 0;
  (this->Merged).ArrayMax = 0;
  (this->Selections).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Selections).ArrayNum = 0;
  (this->Selections).ArrayMax = 0;
  (this->Visited).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Visited).ArrayNum = 0;
  (this->Visited).ArrayMax = 0;
  (this->VisitOrder).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisitOrder).ArrayNum = 0;
  (this->VisitOrder).ArrayMax = 0;
  (this->OriginalWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalWeights).ArrayNum = 0;
  (this->OriginalWeights).ArrayMax = 0;
  this->SourcePointData = (UPCGBasePointData *)0x0;
  this->OutputPointData = (UPCGBasePointData *)0x0;
  this->SourceData = (UPCGPointData *)0x0;
  this->OutData = (UPCGPointData *)0x0;
  (this->SourceMergeAccessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SourceMergeAccessors).ArrayNum = 0;
  (this->SourceMergeAccessors).ArrayMax = 0;
  (this->SourceMergeKeys).Ptr = (IPCGAttributeAccessorKeys *)0x0;
  (this->OutputMergeAccessors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputMergeAccessors).ArrayNum = 0;
  (this->OutputMergeAccessors).ArrayMax = 0;
  (this->OutputMergeSelectors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OutputMergeSelectors).ArrayNum = 0;
  (this->OutputMergeSelectors).ArrayMax = 0;
  (this->Points).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Points).ArrayNum = 0;
  (this->Points).ArrayMax = 0;
  (this->Octree).RootNodeContext.Bounds.Center.field0_0x0._s_0.X = 0.0;
  (this->Octree).RootNodeContext.Bounds.Center.field0_0x0._s_0.Y = 0.0;
  (this->Octree).RootNodeContext.Bounds.Center.field0_0x0._s_0.Z = 0.0;
  (this->Octree).RootNodeContext.Bounds.Center.field0_0x0._s_0.W = 1.0;
  (this->Octree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.X = 0.0;
  (this->Octree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.Y = 0.0;
  (this->Octree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.Z = 0.0;
  (this->Octree).RootNodeContext.Bounds.Extent.field0_0x0._s_0.W = 1.0;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Octree).TreeNodes.ArrayNum = 0;
  (this->Octree).ParentLinks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Octree).ParentLinks.ArrayNum = 0;
  (this->Octree).ParentLinks.ArrayMax = 0;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Octree).TreeElements.ArrayNum = 0;
  (this->Octree).TreeElements.ArrayMax = 0;
  (this->Octree).FreeList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Octree).FreeList.ArrayNum = 0;
  (this->Octree).FreeList.ArrayMax = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x408,&pTVar3->AllocatorInstance,piVar1);
  pFVar5 = (pTVar3->AllocatorInstance).Data;
  (this->Octree).TreeNodes.ArrayNum = iVar6 + 1;
  DefaultConstructItems<TOctree2<FPCGPointRef,FPCGPointRefSemantics>::FNode,int>
            (pFVar5 + (longlong)iVar6 * 8,1);
  iVar6 = (this->Octree).TreeElements.ArrayNum;
  if (iVar6 == (this->Octree).TreeElements.ArrayMax) {
    iVar6 = UE::Core::Private::ReallocGrow1_DoAlloc<2,TAlignedHeapAllocator<8>::ForAnyElementType>
                      (0x410,8,&pTVar4->AllocatorInstance,&(this->Octree).TreeElements.ArrayMax);
  }
  (this->Octree).TreeElements.ArrayNum = iVar6 + 1;
  DefaultConstructItems<TArray<FPCGPointRef,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>,int>
            ((pTVar4->AllocatorInstance).Data + (longlong)iVar6 * 0x410,1);
  return this;
}

// ~FCollapsePointsState @ 149ad2940

void __thiscall
PCGCollapsePoints::FCollapsePointsState::~FCollapsePointsState(FCollapsePointsState *this)

{
  FScriptContainerElement *pFVar1;
  IPCGAttributeAccessorKeys *pIVar2;
  
  TOctree2<FPCGPointRef,FPCGPointRefSemantics>::~TOctree2<FPCGPointRef,FPCGPointRefSemantics>
            (&this->Octree);
  pFVar1 = (this->Points).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPCGAttributePropertyOutputSelector,int>
            ((FPCGAttributePropertyOutputSelector *)
             (this->OutputMergeSelectors).AllocatorInstance.Data,
             (this->OutputMergeSelectors).ArrayNum);
  pFVar1 = (this->OutputMergeSelectors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_>,int>
            ((TUniquePtr<IPCGAttributeAccessor,TDefaultDelete<IPCGAttributeAccessor>_> *)
             (this->OutputMergeAccessors).AllocatorInstance.Data,
             (this->OutputMergeAccessors).ArrayNum);
  pFVar1 = (this->OutputMergeAccessors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->SourceMergeKeys).Ptr;
  if (pIVar2 != (IPCGAttributeAccessorKeys *)0x0) {
    (**(code **)pIVar2->_padding_)(pIVar2,1);
  }
  DestructItems<TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>,int>
            ((TUniquePtr<IPCGAttributeAccessor_const_,TDefaultDelete<IPCGAttributeAccessor_const_>_>
              *)(this->SourceMergeAccessors).AllocatorInstance.Data,
             (this->SourceMergeAccessors).ArrayNum);
  pFVar1 = (this->SourceMergeAccessors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OriginalWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VisitOrder).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Visited).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Selections).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Merged).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Weights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>::
  ~TOctree2<PCGPointOctree::FPointRef,PCGPointOctree::FPointRefSemantics>(&this->PointOctree);
  pFVar1 = (this->PointTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

