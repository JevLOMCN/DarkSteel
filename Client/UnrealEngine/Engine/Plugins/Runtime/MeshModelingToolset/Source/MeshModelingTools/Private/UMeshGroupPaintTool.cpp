// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 78

// StaticClass @ 14cc93020

UClass * __cdecl UMeshGroupPaintTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshGroupPaintTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshGroupPaintTool",
               &Z_Registration_Info_UClass_UMeshGroupPaintTool.InnerSingleton,
               StaticRegisterNativesUMeshGroupPaintTool,0x10c0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshGroupPaintTool>,
               InternalVTableHelperCtorCaller<UMeshGroupPaintTool>,local_res8,
               UMeshSculptToolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshGroupPaintTool.InnerSingleton;
}

// UMeshGroupPaintTool @ 14ccbc1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMeshGroupPaintTool * __thiscall
UMeshGroupPaintTool::UMeshGroupPaintTool(UMeshGroupPaintTool *this,FVTableHelper *param_1)

{
  UMeshSculptToolBase::UMeshSculptToolBase((UMeshSculptToolBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->PolygroupLayerProperties).field0_0x0.DebugPtr = (UPolygroupLayersProperties *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  (this->FilterProperties).field0_0x0.DebugPtr = (UGroupPaintBrushFilterProperties *)0x0;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleSelectionTool__;
  (this->PaintBrushOpProperties).field0_0x0.DebugPtr = (UGroupPaintBrushOpProps *)0x0;
  (this->EraseBrushOpProperties).field0_0x0.DebugPtr = (UGroupEraseBrushOpProps *)0x0;
  (this->FreezeActions).field0_0x0.DebugPtr = (UMeshGroupPaintToolFreezeActions *)0x0;
  (this->PolyLassoMechanic).field0_0x0.DebugPtr = (UPolyLassoMarqueeMechanic *)0x0;
  (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  (this->MeshElementsDisplay).field0_0x0.DebugPtr = (UMeshElementsVisualizer *)0x0;
  (this->OnDynamicMeshComponentChangedHandle).ID = 0;
  (this->ActiveGroupSet).Ptr = (FPolygroupSet *)0x0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements = 0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements.field_0x20 = 0;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IClickDragBehaviorTarget__;
  *(undefined ***)&this->field_0xd8 = &_vftable__for__IHoverBehaviorTarget__;
  this->bHavePendingAction = false;
  *(undefined4 *)&(this->AccumulatedTriangleROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AccumulatedTriangleROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AccumulatedTriangleROI).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AccumulatedTriangleROI).Elements.field_0x34 = 0;
  (this->AccumulatedTriangleROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AccumulatedTriangleROI).HashSize = 0;
  (this->NormalsBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalsBuffer).ArrayNum = 0;
  (this->NormalsBuffer).ArrayMax = 0;
  (this->TempROIBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempROIBuffer).ArrayNum = 0;
  (this->TempROIBuffer).ArrayMax = 0;
  (this->VertexROI).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexROI).ArrayNum = 0;
  (this->VertexROI).ArrayMax = 0;
  (this->VisibilityFilterBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisibilityFilterBuffer).ArrayNum = 0;
  (this->VisibilityFilterBuffer).ArrayMax = 0;
  *(undefined8 *)&(this->VertexSetBuffer).Elements = 0;
  *(undefined8 *)&(this->VertexSetBuffer).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VertexSetBuffer).Elements.field_0x20 = 0;
  this->bUndoUpdatePending = false;
  *(undefined4 *)&(this->VertexSetBuffer).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VertexSetBuffer).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VertexSetBuffer).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VertexSetBuffer).Elements.field_0x34 = 0;
  (this->VertexSetBuffer).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VertexSetBuffer).HashSize = 0;
  *(undefined8 *)&(this->TriangleROI).Elements = 0;
  *(undefined8 *)&(this->TriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TriangleROI).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x34 = 0;
  (this->TriangleROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TriangleROI).HashSize = 0;
  this->PendingStampType = Paint;
  UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3((FSparseDynamicOctree3 *)&this->Octree)
  ;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  this->bPendingPickGroup = false;
  this->bPendingToggleFreezeGroup = false;
  (this->ROITriangleBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROITriangleBuffer).ArrayNum = 0;
  (this->ROITriangleBuffer).ArrayMax = 0;
  (this->ROIGroupBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROIGroupBuffer).ArrayNum = 0;
  (this->ROIGroupBuffer).ArrayMax = 0;
  (this->ActiveGroupEditBuilder).Ptr = (FDynamicMeshGroupEditBuilder *)0x0;
  (this->FrozenGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrozenGroups).ArrayNum = 0;
  (this->FrozenGroups).ArrayMax = 0;
  (this->TriNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriNormals).ArrayNum = 0;
  (this->TriNormals).ArrayMax = 0;
  (this->UVSeamEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVSeamEdges).ArrayNum = 0;
  (this->UVSeamEdges).ArrayMax = 0;
  (this->NormalSeamEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalSeamEdges).ArrayNum = 0;
  (this->NormalSeamEdges).ArrayMax = 0;
  this->bDrawGroupsDataValid = false;
  (this->GroupVisualizationCache).bStorePerGroupTriangleIDs = false;
  (this->GroupVisualizationCache).GroupInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupVisualizationCache).GroupInfo.ArrayNum = 0;
  (this->GroupVisualizationCache).GroupInfo.ArrayMax = 0;
  return this;
}

// UMeshGroupPaintTool @ 14ccbc440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMeshGroupPaintTool * __thiscall UMeshGroupPaintTool::UMeshGroupPaintTool(UMeshGroupPaintTool *this)

{
  UMeshSculptToolBase::UMeshSculptToolBase((UMeshSculptToolBase *)this);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->PolygroupLayerProperties).field0_0x0.DebugPtr = (UPolygroupLayersProperties *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  (this->FilterProperties).field0_0x0.DebugPtr = (UGroupPaintBrushFilterProperties *)0x0;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleSelectionTool__;
  (this->PaintBrushOpProperties).field0_0x0.DebugPtr = (UGroupPaintBrushOpProps *)0x0;
  (this->EraseBrushOpProperties).field0_0x0.DebugPtr = (UGroupEraseBrushOpProps *)0x0;
  (this->FreezeActions).field0_0x0.DebugPtr = (UMeshGroupPaintToolFreezeActions *)0x0;
  (this->PolyLassoMechanic).field0_0x0.DebugPtr = (UPolyLassoMarqueeMechanic *)0x0;
  (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  (this->MeshElementsDisplay).field0_0x0.DebugPtr = (UMeshElementsVisualizer *)0x0;
  (this->OnDynamicMeshComponentChangedHandle).ID = 0;
  (this->ActiveGroupSet).Ptr = (FPolygroupSet *)0x0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements = 0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements.field_0x20 = 0;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IClickDragBehaviorTarget__;
  *(undefined ***)&this->field_0xd8 = &_vftable__for__IHoverBehaviorTarget__;
  this->bHavePendingAction = false;
  *(undefined4 *)&(this->AccumulatedTriangleROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AccumulatedTriangleROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AccumulatedTriangleROI).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AccumulatedTriangleROI).Elements.field_0x34 = 0;
  (this->AccumulatedTriangleROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AccumulatedTriangleROI).HashSize = 0;
  (this->NormalsBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalsBuffer).ArrayNum = 0;
  (this->NormalsBuffer).ArrayMax = 0;
  (this->TempROIBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TempROIBuffer).ArrayNum = 0;
  (this->TempROIBuffer).ArrayMax = 0;
  (this->VertexROI).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexROI).ArrayNum = 0;
  (this->VertexROI).ArrayMax = 0;
  (this->VisibilityFilterBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VisibilityFilterBuffer).ArrayNum = 0;
  (this->VisibilityFilterBuffer).ArrayMax = 0;
  *(undefined8 *)&(this->VertexSetBuffer).Elements = 0;
  *(undefined8 *)&(this->VertexSetBuffer).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->VertexSetBuffer).Elements.field_0x20 = 0;
  this->bUndoUpdatePending = false;
  *(undefined4 *)&(this->VertexSetBuffer).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->VertexSetBuffer).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->VertexSetBuffer).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->VertexSetBuffer).Elements.field_0x34 = 0;
  (this->VertexSetBuffer).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->VertexSetBuffer).HashSize = 0;
  *(undefined8 *)&(this->TriangleROI).Elements = 0;
  *(undefined8 *)&(this->TriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TriangleROI).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x34 = 0;
  (this->TriangleROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TriangleROI).HashSize = 0;
  this->PendingStampType = Paint;
  UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3((FSparseDynamicOctree3 *)&this->Octree)
  ;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  this->bPendingPickGroup = false;
  this->bPendingToggleFreezeGroup = false;
  (this->ROITriangleBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROITriangleBuffer).ArrayNum = 0;
  (this->ROITriangleBuffer).ArrayMax = 0;
  (this->ROIGroupBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROIGroupBuffer).ArrayNum = 0;
  (this->ROIGroupBuffer).ArrayMax = 0;
  (this->ActiveGroupEditBuilder).Ptr = (FDynamicMeshGroupEditBuilder *)0x0;
  (this->FrozenGroups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrozenGroups).ArrayNum = 0;
  (this->FrozenGroups).ArrayMax = 0;
  (this->TriNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriNormals).ArrayNum = 0;
  (this->TriNormals).ArrayMax = 0;
  (this->UVSeamEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVSeamEdges).ArrayNum = 0;
  (this->UVSeamEdges).ArrayMax = 0;
  (this->NormalSeamEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalSeamEdges).ArrayNum = 0;
  (this->NormalSeamEdges).ArrayMax = 0;
  this->bDrawGroupsDataValid = false;
  (this->GroupVisualizationCache).bStorePerGroupTriangleIDs = false;
  (this->GroupVisualizationCache).GroupInfo.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupVisualizationCache).GroupInfo.ArrayNum = 0;
  (this->GroupVisualizationCache).GroupInfo.ArrayMax = 0;
  return this;
}

// ~UMeshGroupPaintTool @ 14ccc3b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshGroupPaintTool::~UMeshGroupPaintTool(UMeshGroupPaintTool *this)

{
  FScriptContainerElement *pFVar1;
  FDynamicMeshGroupEditBuilder *pFVar2;
  void *pvVar3;
  FDynamicMeshGroupEdit *pFVar4;
  FPolygroupSet *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleSelectionTool__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IClickDragBehaviorTarget__;
  *(undefined ***)&this->field_0xd8 = &_vftable__for__IHoverBehaviorTarget__;
  DestructItems<UE::Geometry::FGroupVisualizationCache::FGroupInfo,int>
            ((FGroupInfo *)(this->GroupVisualizationCache).GroupInfo.AllocatorInstance.Data,
             (this->GroupVisualizationCache).GroupInfo.ArrayNum);
  pFVar1 = (this->GroupVisualizationCache).GroupInfo.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NormalSeamEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UVSeamEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TriNormals).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrozenGroups).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->ActiveGroupEditBuilder).Ptr;
  if (pFVar2 != (FDynamicMeshGroupEditBuilder *)0x0) {
    *(undefined4 *)&(pFVar2->SavedIndexMap).field_0x48 = 0;
    pvVar3 = *(void **)&(pFVar2->SavedIndexMap).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar2->SavedIndexMap);
    pFVar4 = (pFVar2->Edit).Ptr;
    if (pFVar4 != (FDynamicMeshGroupEdit *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    pFVar5 = (pFVar2->PolygroupSet).Ptr;
    if (pFVar5 != (FPolygroupSet *)0x0) {
      (*(code *)pFVar5[-1].PolygroupAttrib)(&pFVar5[-1].PolygroupAttrib);
    }
    ::operator_delete(pFVar2,0x60);
  }
  pFVar1 = (this->ROIGroupBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ROITriangleBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3
            ((FSparseDynamicOctree3 *)&this->Octree);
  (this->TriangleROI).HashSize = 0;
  FVar6 = (this->TriangleROI).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TriangleROI).Elements);
  (this->VertexSetBuffer).HashSize = 0;
  FVar6 = (this->VertexSetBuffer).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->VertexSetBuffer).Elements);
  pFVar1 = (this->VisibilityFilterBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VertexROI).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TempROIBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NormalsBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->AccumulatedTriangleROI).HashSize = 0;
  FVar6 = (this->AccumulatedTriangleROI).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AccumulatedTriangleROI).Elements);
  ::operator_delete((this->ActiveGroupSet).Ptr,0x18);
  UMeshSculptToolBase::~UMeshSculptToolBase((UMeshSculptToolBase *)this);
  return;
}

// operator() @ 14ccc5660

FColor __thiscall
`UMeshGroupPaintTool::Setup'::__l2::<lambda_11>::operator()
          (void *this,FDynamicMesh3 *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  FColor FVar6;
  int *piVar7;
  uint uVar8;
  int in_R9D;
  
  lVar2 = *(longlong *)this;
  iVar4 = UE::Geometry::FPolygroupSet::GetGroup(*(FPolygroupSet **)(lVar2 + 0xcd8),in_R9D);
  FVar6.field0_0x0 = SUB84(param_1,0);
  UE::Geometry::LinearColors::SelectFColor((int)FVar6.field0_0x0);
  piVar7 = *(int **)(lVar2 + 0x1058);
  piVar1 = piVar7 + *(int *)(lVar2 + 0x1060);
  if (piVar7 != piVar1) {
    while (*piVar7 != iVar4) {
      piVar7 = piVar7 + 1;
      if (piVar7 == piVar1) {
        return (FColor)FVar6.field0_0x0;
      }
    }
    uVar3 = ((uint)(byte)param_1->_padding_ + (uint)*(byte *)((longlong)&param_1->_padding_ + 2) +
            (uint)*(byte *)((longlong)&param_1->_padding_ + 1)) / 3;
    uVar8 = 0xff;
    if (uVar3 < 0xff) {
      uVar8 = uVar3;
    }
    uVar5 = 0;
    if (uVar8 != 0) {
      uVar5 = (undefined1)uVar8;
    }
    *(undefined1 *)&param_1->_padding_ = uVar5;
    *(undefined1 *)((longlong)&param_1->_padding_ + 1) = uVar5;
    *(undefined1 *)((longlong)&param_1->_padding_ + 2) = uVar5;
  }
  return (FColor)FVar6.field0_0x0;
}

// operator() @ 14cccb590

void __thiscall
`UMeshGroupPaintTool::ApplyVisibilityFilter'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  FSparseDynamicOctree3 *this_00;
  longlong lVar1;
  longlong *plVar2;
  FDynamicMesh3 *pFVar3;
  double *pdVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  FSparseDynamicOctree3 *local_res8;
  FSparseDynamicOctree3 *local_res18 [2];
  TVector<double>_u_0 local_e8;
  undefined1 local_d0 [16];
  double local_c0;
  code *local_b8;
  FSparseDynamicOctree3 **local_b0;
  code *local_a8;
  FSparseDynamicOctree3 **local_a0;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TVector<double>_u_0 local_68 [2];
  
  lVar1 = *(longlong *)this;
  lVar10 = (longlong)param_1;
  uVar9 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  if (param_1 < *(int *)(lVar1 + 0xd70)) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  *(undefined1 *)(lVar10 + *(longlong *)(lVar1 + 0xd68)) = 1;
  plVar2 = *(longlong **)((longlong)this + 0x10);
  pFVar3 = (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8);
  uVar7 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  UE::Geometry::FDynamicMesh3::GetTriCentroid
            (pFVar3,(TVector<double> *)&local_e8._s_0,*(int *)(*plVar2 + lVar10 * 4));
  plVar2 = *(longlong **)((longlong)this + 0x10);
  pFVar3 = (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8);
  uVar7 = 0;
  if (param_1 < (int)plVar2[1]) {
    uVar7 = uVar9;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  UE::Geometry::FDynamicMesh3::GetTriNormal
            (pFVar3,(TVector<double> *)&local_98._s_0,*(int *)(*plVar2 + lVar10 * 4));
  pdVar4 = *(double **)((longlong)this + 0x18);
  uVar14 = SUB84(local_e8._s_0.Y,0);
  uVar15 = (undefined4)((ulonglong)local_e8._8_8_ >> 0x20);
  if (0.0 < (local_e8._s_0.Y - pdVar4[1]) * local_98._s_0.Y +
            (local_e8._s_0.X - *pdVar4) * local_98._s_0.X +
            (local_e8._s_0.Z - pdVar4[2]) * local_98._s_0.Z) {
    lVar1 = *(longlong *)this;
    uVar7 = 0;
    if (param_1 < *(int *)(lVar1 + 0xd70)) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined1 *)(lVar10 + *(longlong *)(lVar1 + 0xd68)) = 0;
    uVar14 = SUB84(local_e8._s_0.Y,0);
    uVar15 = (undefined4)((ulonglong)local_e8._8_8_ >> 0x20);
  }
  if (*(char *)(*(longlong *)(*(longlong *)this + 0xc88) + 0xd2) == '\x02') {
    pdVar4 = *(double **)((longlong)this + 0x18);
    this_00 = (FSparseDynamicOctree3 *)(*(longlong *)this + 0xe20);
    dVar16 = local_e8._s_0.X - *pdVar4;
    dVar11 = (double)CONCAT44(uVar15,uVar14) - pdVar4[1];
    dVar17 = local_e8._s_0.Z - pdVar4[2];
    auVar12._0_8_ = dVar16 * dVar16;
    auVar12._8_8_ = 0;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = dVar11 * dVar11 + auVar12._0_8_ + dVar17 * dVar17;
    auVar13 = sqrtpd(auVar12,auVar13);
    if (auVar13._0_8_ <= 0.0) {
      local_c0 = 0.0;
      dVar16 = 0.0;
      dVar11 = 0.0;
    }
    else {
      local_c0 = __real_3ff0000000000000 / auVar13._0_8_;
      dVar11 = local_c0 * dVar11;
      dVar16 = local_c0 * dVar16;
      local_c0 = local_c0 * dVar17;
    }
    uVar14 = (undefined4)((ulonglong)dVar11 >> 0x20);
    local_80._s_0.X = *pdVar4;
    local_80._s_0.Y = pdVar4[1];
    local_d0._8_4_ = SUB84(dVar11,0);
    local_d0._0_8_ = dVar16;
    local_d0._12_4_ = uVar14;
    local_80._s_0.Z = pdVar4[2];
    local_68[0]._8_4_ = SUB84(dVar11,0);
    local_68[0]._0_8_ = dVar16;
    local_68[0]._12_4_ = uVar14;
    local_68[0]._s_0.Z = local_c0;
    UE::Math::TVector<double>::Normalize
              ((TVector<double> *)&local_68[0]._s_0,__real_3e45798ee0000000);
    local_b0 = &local_res8;
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
               ::Call;
    local_a0 = local_res18;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
               ::Call;
    local_res8 = this_00;
    local_res18[0] = this_00;
    iVar8 = UE::Geometry::FSparseDynamicOctree3::FindNearestHitObject
                      (this_00,(TRay<double> *)&local_80._s_0,
                       (TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *)
                       &local_a8,
                       (TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *)&local_b8
                       ,__real_7fefffffffffffff);
    plVar2 = *(longlong **)((longlong)this + 0x10);
    uVar7 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar7 = uVar9;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iVar8 != *(int *)(*plVar2 + lVar10 * 4)) {
      lVar1 = *(longlong *)this;
      uVar7 = 0;
      if (param_1 < *(int *)(lVar1 + 0xd70)) {
        uVar7 = uVar9;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      *(undefined1 *)(lVar10 + *(longlong *)(lVar1 + 0xd68)) = 0;
    }
  }
  return;
}

// operator() @ 14ccccca0

void __thiscall
`UMeshGroupPaintTool::OnPolyLassoFinished'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  TVector<double> *pTVar13;
  uint uVar14;
  longlong lVar15;
  double dVar16;
  uint uVar17;
  TVector2<double>_u_0 local_e8;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  double local_a8;
  double dStack_a0;
  double local_98;
  TVector<double> local_90 [4];
  
  lVar15 = **(longlong **)this;
  if (((param_1 < 0) || (*(int *)(lVar15 + 0x20) * 0x200 + *(int *)(lVar15 + 0x24) <= param_1)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar15 + 0x28) +
                                    (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    lVar15 = *(longlong *)((longlong)this + 8);
    uVar14 = 0;
    if (param_1 < *(int *)(lVar15 + 0xd50)) {
      uVar14 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined4 *)(*(longlong *)(lVar15 + 0xd48) + (longlong)param_1 * 4) = 0xffffffff;
    return;
  }
  lVar2 = *(longlong *)((longlong)this + 8);
  lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
  pdVar1 = (double *)(lVar15 + (ulonglong)(param_1 & 0x1ff) * 0x18);
  local_a8 = *pdVar1;
  dStack_a0 = pdVar1[1];
  local_98 = *(double *)(lVar15 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
  local_d8._s_0.X = local_a8 * *(double *)(lVar2 + 0x228);
  local_d8._s_0.Z = local_98 * *(double *)(lVar2 + 0x238);
  local_d8._s_0.Y = dStack_a0 * *(double *)(lVar2 + 0x230);
  pTVar13 = UE::Geometry::operator*<double>
                      (local_90,(TQuaternion<double> *)(lVar2 + 0x1f0),
                       (TVector<double> *)&local_d8._s_0);
  local_c0._s_0.X = *(double *)(lVar2 + 0x210) + (pTVar13->field0_0x0)._s_0.X;
  local_c0._s_0.Y = *(double *)(lVar2 + 0x218) + (pTVar13->field0_0x0)._s_0.Y;
  local_c0._s_0.Z = *(double *)(lVar2 + 0x220) + (pTVar13->field0_0x0)._s_0.Z;
  FCameraPolyLasso::GetProjectedPoint
            (*(FCameraPolyLasso **)((longlong)this + 0x10),(TVector2<double> *)&local_e8._s_0,
             (TVector<double> *)&local_c0._s_0);
  puVar3 = *(undefined8 **)((longlong)this + 0x18);
  dVar9 = 0.0;
  if ((*(int *)(puVar3 + 1) < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pdVar1 = (double *)*puVar3;
  uVar14 = 1;
  dVar7 = 0.0;
  if (1 < **(int **)((longlong)this + 0x20)) {
    lVar15 = 0x10;
    dVar16 = *pdVar1 - local_e8._s_0.X;
    dVar10 = pdVar1[1] - local_e8._s_0.Y;
    do {
      plVar4 = *(longlong **)((longlong)this + 0x18);
      uVar17 = 0;
      if ((int)uVar14 < (int)plVar4[1]) {
        uVar17 = ~uVar14 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar2 = *plVar4;
      dVar8 = *(double *)(lVar2 + lVar15) - local_e8._s_0.X;
      dVar7 = *(double *)(lVar2 + 8 + lVar15) - local_e8._s_0.Y;
      dVar16 = atan2(dVar16 * dVar7 - dVar10 * dVar8,dVar10 * dVar7 + dVar16 * dVar8);
      dVar9 = dVar9 + dVar16;
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 0x10;
      dVar16 = dVar8;
      dVar10 = dVar7;
      dVar7 = dVar9;
    } while ((int)uVar14 < **(int **)((longlong)this + 0x20));
  }
  lVar15 = *(longlong *)((longlong)this + 8);
  uVar14 = SUB84(dVar7 * __real_3fc45f306dc9c883,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar17 = (uint)((ulonglong)(dVar7 * __real_3fc45f306dc9c883) >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  bVar11 = (double)CONCAT44(uVar17,uVar14) != __real_3fd3333333333333;
  bVar5 = __real_3fd3333333333333 <= (double)CONCAT44(uVar17,uVar14);
  uVar14 = 0;
  if (param_1 < *(int *)(lVar15 + 0xd50)) {
    uVar14 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(uint *)(*(longlong *)(lVar15 + 0xd48) + (longlong)param_1 * 4) = (uint)(bVar5 && bVar11);
  return;
}

// operator() @ 14cccd420

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UMeshGroupPaintTool::OnTick'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TRay<double> *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_GroupPaintTool_Tick_ApplyStampBlock> FVar10;
  FThreadSafeStaticStat<FStat_GroupPaintTool_Tick_UpdateMeshBlock> FVar11;
  longlong *plVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  LARGE_INTEGER LVar15;
  LARGE_INTEGER LVar16;
  LARGE_INTEGER local_res8;
  FName local_res20;
  FStatMessage local_88;
  undefined1 local_78 [16];
  TUniqueFunction<void___cdecl(void)> local_68;
  
  FVar10 = StatPtr_GroupPaintTool_Tick_ApplyStampBlock;
  if (StatPtr_GroupPaintTool_Tick_ApplyStampBlock ==
      (FThreadSafeStaticStat<FStat_GroupPaintTool_Tick_ApplyStampBlock>)0x0) {
    pFVar9 = ::FName::FName(&local_res20,"GroupPaintTool_Tick_ApplyStampBlock");
    FVar10 = (FThreadSafeStaticStat<FStat_GroupPaintTool_Tick_ApplyStampBlock>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_GroupPaintTool_Tick_ApplyStampBlock,
                        *pFVar9,L"GroupPaintTool_Tick_ApplyStampBlock","STATGROUP_GroupPaintTool",
                        "STATCAT_Advanced",L"GroupPaintTool",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  LVar16 = *(LARGE_INTEGER *)FVar10;
  bVar3 = false;
  bVar6 = false;
  if ((LVar16.s.LowPart == 0) && (LVar16.s.HighPart == 0)) {
LAB_14cccd55b:
    bVar4 = false;
    LVar16._0_4_ = 0;
    LVar16._4_4_ = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar3 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshGroupPaintTool.cpp"
                   ,0x41a);
        bVar3 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14cccd55b;
    local_res8 = LVar16;
    FThreadStats::AddMessage((FName)LVar16.s,CycleScopeStart);
    bVar4 = true;
  }
  UMeshGroupPaintTool::UpdateROI
            (*(UMeshGroupPaintTool **)this,
             (FSculptBrushStamp *)&(*(UMeshGroupPaintTool **)this)->field_0x7b0);
  local_res8 = *(LARGE_INTEGER *)this;
  local_68._0_8_ = 0;
  local_68._40_8_ = 0;
  Async<__UMeshGroupPaintTool::OnTick_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_78,GroupPaintToolAsyncExecTarget,(<lambda_1> *)&local_res8.s,
             &local_68);
  bVar7 = UMeshGroupPaintTool::ApplyStamp(*(UMeshGroupPaintTool **)this);
  if (!bVar7) goto LAB_14cccd7c7;
  FVar11 = StatPtr_GroupPaintTool_Tick_UpdateMeshBlock;
  if (StatPtr_GroupPaintTool_Tick_UpdateMeshBlock ==
      (FThreadSafeStaticStat<FStat_GroupPaintTool_Tick_UpdateMeshBlock>)0x0) {
    pFVar9 = ::FName::FName(&local_res20,"GroupPaintTool_Tick_UpdateMeshBlock");
    FVar11 = (FThreadSafeStaticStat<FStat_GroupPaintTool_Tick_UpdateMeshBlock>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_GroupPaintTool_Tick_UpdateMeshBlock,
                        *pFVar9,L"GroupPaintTool_Tick_UpdateMeshBlock","STATGROUP_GroupPaintTool",
                        "STATCAT_Advanced",L"GroupPaintTool",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  LVar15 = *(LARGE_INTEGER *)FVar11;
  bVar7 = false;
  bVar5 = false;
  if ((LVar15.s.LowPart == 0) && (LVar15.s.HighPart == 0)) {
LAB_14cccd6bc:
    bVar2 = false;
    LVar15._0_4_ = 0;
    LVar15._4_4_ = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar7 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshGroupPaintTool.cpp"
                   ,0x42a);
        bVar7 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14cccd6bc;
    local_res8 = LVar15;
    FThreadStats::AddMessage((FName)LVar15.s,CycleScopeStart);
    bVar2 = true;
  }
  UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
            (*(UDynamicMeshComponent **)(*(longlong *)this + 0xcc0),
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*(longlong *)this + 0xdc8),
             VertexColors);
  plVar12 = (longlong *)(**(code **)(**(longlong **)this + 0x2d8))();
  (**(code **)(*plVar12 + 0x368))(plVar12);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar2) && ((FName)LVar15.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_88.NameAndInfo.Index.Value = LVar15.s.LowPart;
      local_88.NameAndInfo.Number = LVar15.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_88.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,&local_88);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
LAB_14cccd7c7:
  if (local_78._0_8_ != 0) {
    do {
      cVar8 = (**(code **)(**(longlong **)(local_78._0_8_ + 0x60) + 0x20))
                        (*(longlong **)(local_78._0_8_ + 0x60),0xffffffff);
    } while (cVar8 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_78._8_8_);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && ((FName)LVar16.QuadPart != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar13 == (FThreadStats *)0x0) {
      pFVar14 = FThreadStatsPool::Get();
      pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
    }
    if (pFVar13->bWaitForExplicitFlush < pFVar13->ScopeCount) {
      local_88.NameAndInfo.Index.Value = LVar16.s.LowPart;
      local_88.NameAndInfo.Number = LVar16.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_88.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(pFVar13,&local_88);
      piVar1 = &pFVar13->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar13,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  return;
}

// operator() @ 14cccdb70

void __thiscall
`UMeshGroupPaintTool::PrecomputeFilterData'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  undefined4 *puVar1;
  double dVar2;
  FDynamicMesh3 *this_00;
  longlong lVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  TVector<double> *pTVar11;
  TVector<double> local_28;
  
  this_00 = (FDynamicMesh3 *)**(undefined8 **)this;
  if (((-1 < param_1) &&
      (param_1 < (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                      (this_00->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
              - 1U) < 0xfffe)) {
    pTVar11 = UE::Geometry::FDynamicMesh3::GetTriNormal(this_00,&local_28,param_1);
    lVar3 = *(longlong *)((longlong)this + 8);
    uVar5 = *(undefined4 *)&pTVar11->field0_0x0;
    uVar6 = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 4);
    uVar7 = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 8);
    uVar8 = *(undefined4 *)((longlong)&pTVar11->field0_0x0 + 0xc);
    dVar2 = (pTVar11->field0_0x0)._s_0.Z;
    uVar10 = 0;
    if (param_1 < *(int *)(lVar3 + 0x1070)) {
      uVar10 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar3 = *(longlong *)(lVar3 + 0x1068);
    puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    *(double *)(lVar3 + 0x10 + (longlong)param_1 * 0x18) = dVar2;
  }
  return;
}

// operator() @ 14ccce370

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall `UMeshGroupPaintTool::Setup'::__l2::<lambda_1>::operator()(void *this)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18 [2];
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [12];
  uint uStack_2c;
  undefined1 local_28 [16];
  
  plVar1 = *(longlong **)this;
  local_res8 = (**(code **)(*plVar1 + 0x440))(plVar1);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(plVar1 + 0x20d),
             *(int *)(local_res8 + 0x140) * 0x200 + *(int *)(local_res8 + 0x144),Default);
  local_58 = &local_res8;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshGroupPaintTool::PrecomputeFilterData'::__l2::<lambda_1>,void,int>::
       Call;
  lVar3 = 0;
  local_28._8_8_ = &local_58;
  local_38._0_8_ = (void **)0x0;
  stack0xffffffffffffffd0 = (longlong **)((ulonglong)uStack_2c << 0x20);
  local_50 = plVar1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",*(int *)(local_res8 + 0x140) * 0x200 + *(int *)(local_res8 + 0x144)
             ,1,(TFunctionRef<void___cdecl(int)> *)local_28,local_res8._0_1_,None,
             (TArrayView<std::nullptr_t,int> *)local_38);
  lVar2 = lVar3;
  if (*(longlong *)(local_res8 + 0x208) != 0) {
    lVar2 = *(longlong *)(local_res8 + 0x208);
  }
  local_res18[0] = lVar3;
  if (0 < *(int *)(lVar2 + 0x38)) {
    local_res18[0] = **(longlong **)(lVar2 + 0x30);
  }
  lVar2 = lVar3;
  if (*(longlong *)(local_res8 + 0x208) != 0) {
    lVar2 = *(longlong *)(local_res8 + 0x208);
  }
  if (0 < *(int *)(lVar2 + 0x28)) {
    lVar3 = **(longlong **)(lVar2 + 0x20);
  }
  local_res10 = lVar3;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(plVar1 + 0x20f),
             *(int *)(local_res8 + 0x1d0) * 0x200 + *(int *)(local_res8 + 0x1d4),Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(plVar1 + 0x211),
             *(int *)(local_res8 + 0x1d0) * 0x200 + *(int *)(local_res8 + 0x1d4),Default);
  unique0x00008e00 = &local_58;
  local_58 = &local_res8;
  local_48 = &local_res10;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshGroupPaintTool::PrecomputeFilterData'::__l2::<lambda_2>,void,int>::
       Call;
  local_40 = local_res18;
  local_28._0_8_ = (void **)0x0;
  local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
  local_50 = plVar1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",*(int *)(local_res8 + 0x1d0) * 0x200 + *(int *)(local_res8 + 0x1d4)
             ,1,(TFunctionRef<void___cdecl(int)> *)local_38,local_res8._0_1_,None,
             (TArrayView<std::nullptr_t,int> *)local_28);
  return;
}

// operator() @ 14cccf1f0

bool __thiscall
`UMeshGroupPaintTool::UpdateROI'::__l2::<lambda_1>::operator()(void *this,int param_1,int param_2)

{
  longlong *plVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  double dVar10;
  
  plVar1 = (longlong *)((longlong)this + 0x10);
  lVar9 = (longlong)param_2;
  if (**(char **)this == '\0') {
LAB_14cccf2b4:
    uVar7 = UE::Geometry::FDynamicMesh3::FindEdgeFromTriPair
                      ((FDynamicMesh3 *)**(undefined8 **)((longlong)this + 0x20),param_1,param_2);
    if (**(char **)((longlong)this + 0x28) != '\0') {
      lVar9 = *plVar1;
      uVar8 = 0;
      if ((int)uVar7 < *(int *)(lVar9 + 0x1080)) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      if (*(int *)(*(longlong *)(lVar9 + 0x1078) + (longlong)(int)uVar7 * 4) != 0)
      goto LAB_14cccf341;
    }
    if (**(char **)((longlong)this + 0x30) == '\0') {
      bVar5 = true;
    }
    else {
      lVar9 = *plVar1;
      uVar8 = 0;
      if ((int)uVar7 < *(int *)(lVar9 + 0x1090)) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      bVar5 = *(int *)(*(longlong *)(lVar9 + 0x1088) + (longlong)(int)uVar7 * 4) == 0;
    }
  }
  else {
    pdVar2 = *(double **)((longlong)this + 8);
    lVar3 = *plVar1;
    uVar7 = 0;
    if (param_2 < *(int *)(lVar3 + 0x1070)) {
      uVar7 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    lVar3 = *(longlong *)(lVar3 + 0x1068);
    dVar10 = *(double *)(lVar3 + 8 + lVar9 * 0x18) * pdVar2[1] +
             *pdVar2 * *(double *)(lVar3 + lVar9 * 0x18) +
             *(double *)(lVar3 + 0x10 + lVar9 * 0x18) * pdVar2[2];
    if (**(double **)((longlong)this + 0x18) <= dVar10 &&
        dVar10 != **(double **)((longlong)this + 0x18)) goto LAB_14cccf2b4;
LAB_14cccf341:
    bVar5 = false;
  }
  return bVar5;
}

// operator() @ 14ccd1460

void __thiscall
`UMeshGroupPaintTool::PrecomputeFilterData'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  
  if (((-1 < param_1) &&
      (lVar1 = **(longlong **)this,
      param_1 < *(int *)(lVar1 + 0x1d0) * 0x200 + *(int *)(lVar1 + 0x1d4))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar1 + 0x1d8) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    bVar3 = UE::Geometry::TDynamicMeshOverlay<float,2>::IsSeamEdge
                      ((TDynamicMeshOverlay<float,2> *)**(undefined8 **)((longlong)this + 0x10),
                       param_1,(bool *)0x0);
    lVar1 = *(longlong *)((longlong)this + 8);
    uVar5 = 0;
    if (param_1 < *(int *)(lVar1 + 0x1080)) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(uint *)(*(longlong *)(lVar1 + 0x1078) + (longlong)param_1 * 4) = (uint)bVar3;
    bVar3 = UE::Geometry::TDynamicMeshOverlay<float,3>::IsSeamEdge
                      ((TDynamicMeshOverlay<float,3> *)**(undefined8 **)((longlong)this + 0x18),
                       param_1,(bool *)0x0);
    lVar1 = *(longlong *)((longlong)this + 8);
    uVar5 = 0;
    if (param_1 < *(int *)(lVar1 + 0x1090)) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(uint *)(*(longlong *)(lVar1 + 0x1088) + (longlong)param_1 * 4) = (uint)bVar3;
  }
  return;
}

// operator() @ 14ccd1870

void __thiscall `UMeshGroupPaintTool::Setup'::__l2::<lambda_2>::operator()(void *this)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  pdVar1 = *(double **)((longlong)this + 0x10);
  dVar4 = pdVar1[4] - pdVar1[1];
  dVar2 = pdVar1[5] - pdVar1[2];
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  dVar3 = pdVar1[3] - *pdVar1;
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (dVar4 <= dVar2) {
    dVar4 = dVar2;
  }
  if (dVar4 <= dVar3) {
    dVar4 = dVar3;
  }
  if (*(int *)(**(longlong **)this + 0x170) < 0x186a1) {
    *(double *)(*(longlong *)((longlong)this + 8) + 0xe20) = dVar4;
    *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0xe30) = 8;
  }
  else {
    *(double *)(*(longlong *)((longlong)this + 8) + 0xe20) = dVar4 * __real_3fb999999999999a;
    *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0xe30) = 4;
  }
  UE::Geometry::FDynamicMeshOctree3::Initialize
            ((FDynamicMeshOctree3 *)(*(longlong *)((longlong)this + 8) + 0xe20),
             (FDynamicMesh3 *)**(undefined8 **)this);
  return;
}

// operator() @ 14ccd2000

void __thiscall
`UMeshGroupPaintTool::UpdateROI'::__l8::<lambda_2>::operator()(void *this,int param_1)

{
  double *pdVar1;
  TVector<double> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int local_res8 [2];
  int local_res10 [6];
  TVector<double> local_28;
  
  local_res10[0] = param_1;
  pTVar2 = UE::Geometry::FDynamicMesh3::GetTriCentroid
                     ((FDynamicMesh3 *)**(undefined8 **)this,&local_28,param_1);
  pdVar1 = *(double **)((longlong)this + 8);
  dVar3 = (pTVar2->field0_0x0)._s_0.Z - pdVar1[2];
  dVar5 = (pTVar2->field0_0x0)._s_0.Y - pdVar1[1];
  dVar4 = (pTVar2->field0_0x0)._s_0.X - *pdVar1;
  if (dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3 < (double)**(float **)((longlong)this + 0x10)) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 0x18) + 0xdc8),local_res8,(bool *)local_res10);
  }
  return;
}

// operator() @ 14ccd2090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
`UMeshGroupPaintTool::OnTick'::__l27::<lambda_2>::operator()(void *this,TRay<double> *param_1)

{
  UMeshSculptToolBase *this_00;
  code *pcVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  bool bVar14;
  undefined1 uVar15;
  undefined8 *puVar16;
  FDateTime FVar17;
  
  this_00 = *(UMeshSculptToolBase **)this;
  (**(code **)(this_00->_padding_ + 0x490))(this_00);
  puVar16 = (undefined8 *)(**(code **)(this_00->_padding_ + 0x478))(this_00);
  cVar13 = (**(code **)(*(longlong *)*puVar16 + 0x30))();
  if ((cVar13 == '\0') || (cVar13 == '\x01')) {
    (**(code **)(this_00->_padding_ + 0x540))(this_00,param_1,1);
  }
  else if (cVar13 == '\x02') {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshGroupPaintTool.cpp"
                        ,0x23d,L"");
    if (bVar14) {
      pcVar2 = (code *)swi(3);
      uVar15 = (*pcVar2)();
      return (bool)uVar15;
    }
    (**(code **)(this_00->_padding_ + 0x530))(this_00,param_1);
  }
  cVar13 = (**(code **)(*(longlong *)*puVar16 + 0x48))();
  if (cVar13 != '\0') {
    UMeshSculptToolBase::AlignBrushToView(this_00);
  }
  FSculptBrushStamp::operator=(&this_00->CurrentStamp,&this_00->LastStamp);
  FVar17 = FDateTime::Now();
  dVar3 = (this_00->LastBrushFrameWorld).Origin.field0_0x0._s_0.Z;
  dVar5 = (this_00->LastBrushFrameWorld).Rotation.field0_0x0._s_0.X;
  pcVar2 = *(code **)(this_00->_padding_ + 0x4c0);
  pcVar1 = *(code **)(this_00->_padding_ + 0x4b0);
  dVar4 = (double)(*(longlong *)FVar17.Ticks - (this_00->LastStamp).TimeStamp.Ticks) *
          __real_3e7ad7f29abcaf48;
  if (__real_3ff0000000000000 <= dVar4) {
    dVar4 = __real_3ff0000000000000;
  }
  (this_00->CurrentStamp).DeltaTime = dVar4;
  dVar4 = (this_00->LastBrushFrameWorld).Origin.field0_0x0._s_0.Y;
  (this_00->CurrentStamp).WorldFrame.Origin.field0_0x0._s_0.X =
       (this_00->LastBrushFrameWorld).Origin.field0_0x0._s_0.X;
  (this_00->CurrentStamp).WorldFrame.Origin.field0_0x0._s_0.Y = dVar4;
  dVar10 = (this_00->LastBrushFrameWorld).Rotation.field0_0x0._s_0.Y;
  dVar11 = (this_00->LastBrushFrameWorld).Rotation.field0_0x0._s_0.Z;
  (this_00->CurrentStamp).WorldFrame.Origin.field0_0x0._s_0.Z = dVar3;
  (this_00->CurrentStamp).WorldFrame.Rotation.field0_0x0._s_0.X = dVar5;
  dVar4 = (this_00->LastBrushFrameWorld).Rotation.field0_0x0._s_0.W;
  (this_00->CurrentStamp).WorldFrame.Rotation.field0_0x0._s_0.Y = dVar10;
  (this_00->CurrentStamp).WorldFrame.Rotation.field0_0x0._s_0.Z = dVar11;
  dVar3 = (this_00->LastBrushFrameLocal).Origin.field0_0x0._s_0.X;
  dVar5 = (this_00->LastBrushFrameLocal).Origin.field0_0x0._s_0.Y;
  (this_00->CurrentStamp).WorldFrame.Rotation.field0_0x0._s_0.W = dVar4;
  dVar4 = (this_00->LastBrushFrameLocal).Origin.field0_0x0._s_0.Z;
  dVar10 = (this_00->LastBrushFrameLocal).Rotation.field0_0x0._s_0.X;
  (this_00->CurrentStamp).LocalFrame.Origin.field0_0x0._s_0.X = dVar3;
  (this_00->CurrentStamp).LocalFrame.Origin.field0_0x0._s_0.Y = dVar5;
  uVar6 = *(undefined4 *)((longlong)&(this_00->LastBrushFrameLocal).Rotation.field0_0x0 + 8);
  uVar7 = *(undefined4 *)((longlong)&(this_00->LastBrushFrameLocal).Rotation.field0_0x0 + 0xc);
  uVar8 = *(undefined4 *)((longlong)&(this_00->LastBrushFrameLocal).Rotation.field0_0x0 + 0x10);
  uVar9 = *(undefined4 *)((longlong)&(this_00->LastBrushFrameLocal).Rotation.field0_0x0 + 0x14);
  (this_00->CurrentStamp).LocalFrame.Origin.field0_0x0._s_0.Z = dVar4;
  (this_00->CurrentStamp).LocalFrame.Rotation.field0_0x0._s_0.X = dVar10;
  dVar4 = (this_00->LastBrushFrameLocal).Rotation.field0_0x0._s_0.W;
  *(undefined4 *)((longlong)&(this_00->CurrentStamp).LocalFrame.Rotation.field0_0x0 + 8) = uVar6;
  *(undefined4 *)((longlong)&(this_00->CurrentStamp).LocalFrame.Rotation.field0_0x0 + 0xc) = uVar7;
  *(undefined4 *)((longlong)&(this_00->CurrentStamp).LocalFrame.Rotation.field0_0x0 + 0x10) = uVar8;
  *(undefined4 *)((longlong)&(this_00->CurrentStamp).LocalFrame.Rotation.field0_0x0 + 0x14) = uVar9;
  (this_00->CurrentStamp).LocalFrame.Rotation.field0_0x0._s_0.W = dVar4;
  dVar5 = (double)(*pcVar2)(this_00);
  dVar3 = (double)(*pcVar1)(this_00);
  dVar4 = (this_00->LastStamp).LocalFrame.Origin.field0_0x0._s_0.Z;
  dVar10 = (this_00->LastStamp).LocalFrame.Rotation.field0_0x0._s_0.X;
  dVar11 = (this_00->LastStamp).LocalFrame.Origin.field0_0x0._s_0.Y;
  (this_00->CurrentStamp).PrevLocalFrame.Origin.field0_0x0._s_0.X =
       (this_00->LastStamp).LocalFrame.Origin.field0_0x0._s_0.X;
  (this_00->CurrentStamp).PrevLocalFrame.Origin.field0_0x0._s_0.Y = dVar11;
  dVar11 = (this_00->LastStamp).LocalFrame.Rotation.field0_0x0._s_0.Y;
  dVar12 = (this_00->LastStamp).LocalFrame.Rotation.field0_0x0._s_0.Z;
  (this_00->CurrentStamp).PrevLocalFrame.Origin.field0_0x0._s_0.Z = dVar4;
  (this_00->CurrentStamp).PrevLocalFrame.Rotation.field0_0x0._s_0.X = dVar10;
  dVar4 = (this_00->LastStamp).LocalFrame.Rotation.field0_0x0._s_0.W;
  (this_00->CurrentStamp).PrevLocalFrame.Rotation.field0_0x0._s_0.Y = dVar11;
  (this_00->CurrentStamp).PrevLocalFrame.Rotation.field0_0x0._s_0.Z = dVar12;
  dVar10 = (this_00->LastStamp).WorldFrame.Origin.field0_0x0._s_0.X;
  dVar11 = (this_00->LastStamp).WorldFrame.Origin.field0_0x0._s_0.Y;
  (this_00->CurrentStamp).PrevLocalFrame.Rotation.field0_0x0._s_0.W = dVar4;
  dVar4 = (this_00->LastStamp).WorldFrame.Origin.field0_0x0._s_0.Z;
  dVar12 = (this_00->LastStamp).WorldFrame.Rotation.field0_0x0._s_0.X;
  (this_00->CurrentStamp).PrevWorldFrame.Origin.field0_0x0._s_0.X = dVar10;
  (this_00->CurrentStamp).PrevWorldFrame.Origin.field0_0x0._s_0.Y = dVar11;
  uVar6 = *(undefined4 *)((longlong)&(this_00->LastStamp).WorldFrame.Rotation.field0_0x0 + 8);
  uVar7 = *(undefined4 *)((longlong)&(this_00->LastStamp).WorldFrame.Rotation.field0_0x0 + 0xc);
  uVar8 = *(undefined4 *)((longlong)&(this_00->LastStamp).WorldFrame.Rotation.field0_0x0 + 0x10);
  uVar9 = *(undefined4 *)((longlong)&(this_00->LastStamp).WorldFrame.Rotation.field0_0x0 + 0x14);
  (this_00->CurrentStamp).PrevWorldFrame.Origin.field0_0x0._s_0.Z = dVar4;
  (this_00->CurrentStamp).PrevWorldFrame.Rotation.field0_0x0._s_0.X = dVar12;
  dVar4 = (this_00->LastStamp).WorldFrame.Rotation.field0_0x0._s_0.W;
  *(undefined4 *)((longlong)&(this_00->CurrentStamp).PrevWorldFrame.Rotation.field0_0x0 + 8) = uVar6
  ;
  *(undefined4 *)((longlong)&(this_00->CurrentStamp).PrevWorldFrame.Rotation.field0_0x0 + 0xc) =
       uVar7;
  *(undefined4 *)((longlong)&(this_00->CurrentStamp).PrevWorldFrame.Rotation.field0_0x0 + 0x10) =
       uVar8;
  *(undefined4 *)((longlong)&(this_00->CurrentStamp).PrevWorldFrame.Rotation.field0_0x0 + 0x14) =
       uVar9;
  (this_00->CurrentStamp).PrevWorldFrame.Rotation.field0_0x0._s_0.W = dVar4;
  (this_00->CurrentStamp).Power = dVar5 * dVar3;
  dVar4 = (this_00->CurrentStamp).LocalFrame.Origin.field0_0x0._s_0.X -
          (this_00->CurrentStamp).PrevLocalFrame.Origin.field0_0x0._s_0.X;
  dVar3 = (this_00->CurrentStamp).LocalFrame.Origin.field0_0x0._s_0.Y -
          (this_00->CurrentStamp).PrevLocalFrame.Origin.field0_0x0._s_0.Y;
  dVar5 = (this_00->CurrentStamp).LocalFrame.Origin.field0_0x0._s_0.Z -
          (this_00->CurrentStamp).PrevLocalFrame.Origin.field0_0x0._s_0.Z;
  cVar13 = (**(code **)(*(longlong *)*puVar16 + 0x50))();
  if ((cVar13 == '\0') || (__real_3e45798ee2308c3a <= dVar4 * dVar4 + dVar3 * dVar3 + dVar5 * dVar5)
     ) {
    bVar14 = true;
  }
  else {
    bVar14 = false;
  }
  return bVar14;
}

// operator() @ 14ccd3890

bool __thiscall
`UMeshGroupPaintTool::UpdateROI'::__l13::<lambda_3>::operator()(void *this,int param_1,int param_2)

{
  double *pdVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double> local_28;
  
  pTVar3 = UE::Geometry::FDynamicMesh3::GetTriCentroid
                     ((FDynamicMesh3 *)**(undefined8 **)this,&local_28,param_2);
  pdVar1 = *(double **)((longlong)this + 8);
  dVar4 = (pTVar3->field0_0x0)._s_0.Z - pdVar1[2];
  dVar6 = (pTVar3->field0_0x0)._s_0.Y - pdVar1[1];
  dVar5 = (pTVar3->field0_0x0)._s_0.X - *pdVar1;
  if (dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4 < (double)**(float **)((longlong)this + 0x10)) {
    bVar2 = UpdateROI'::__l2::<lambda_1>::operator()
                      (*(void **)((longlong)this + 0x18),param_1,param_2);
    return bVar2;
  }
  return false;
}

// operator() @ 14ccd4850

bool __thiscall
`UMeshGroupPaintTool::UpdateROI'::__l24::<lambda_5>::operator()(void *this,int param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  plVar1 = *(longlong **)this;
  uVar2 = UE::Geometry::FPolygroupSet::GetGroup
                    (*(FPolygroupSet **)(*(longlong *)((longlong)this + 8) + 0xcd8),param_2);
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar4 = (longlong *)plVar1[8];
    if ((longlong *)plVar1[8] == (longlong *)0x0) {
      plVar4 = plVar1 + 7;
    }
    iVar3 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar1[9] - 1U & uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*plVar1 + (longlong)iVar3 * 0xc) == uVar2) goto LAB_14ccd48bc;
        iVar3 = *(int *)(*plVar1 + 4 + (longlong)iVar3 * 0xc);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_14ccd48bc:
  return iVar3 != -1;
}

// AllocateNewGroupAndSetAsCurrentAction @ 14ccde260

void __thiscall
UMeshGroupPaintTool::AllocateNewGroupAndSetAsCurrentAction(UMeshGroupPaintTool *this)

{
  ((this->FilterProperties).field0_0x0.DebugPtr)->SetGroup =
       ((this->ActiveGroupSet).Ptr)->MaxGroupID;
                    /* WARNING: Could not recover jumptable at 0x00014ccde281. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x340))(this,(this->FilterProperties).field0_0x0.DebugPtr);
  return;
}

// ApplyAction @ 14ccdea00

void __thiscall
UMeshGroupPaintTool::ApplyAction(UMeshGroupPaintTool *this,EMeshGroupPaintToolActions param_1)

{
  switch(param_1) {
  case ClearFrozen:
    ClearAllFrozenGroups(this);
    return;
  case FreezeCurrent:
    ToggleFrozenGroup(this,((this->FilterProperties).field0_0x0.DebugPtr)->SetGroup);
    return;
  case FreezeOthers:
    FreezeOtherGroups(this,((this->FilterProperties).field0_0x0.DebugPtr)->SetGroup);
    return;
  case GrowCurrent:
    GrowCurrentGroupAction(this);
    return;
  case ShrinkCurrent:
    ShrinkCurrentGroupAction(this);
    return;
  case ClearCurrent:
    ClearCurrentGroupAction(this);
    return;
  case FloodFillCurrent:
    FloodFillCurrentGroupAction(this);
    return;
  case ClearAll:
    ClearAllGroupsAction(this);
    return;
  default:
    return;
  }
}

// ApplyStamp @ 14cce1780

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UMeshGroupPaintTool::ApplyStamp(UMeshGroupPaintTool *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_GroupPaintToolApplyStamp> FVar8;
  undefined8 *puVar9;
  FDynamicMesh3 *pFVar10;
  FDateTime FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FNameEntryId FVar13;
  FName FVar14;
  FNameEntryId FVar15;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FVar15.Value = 0;
  FVar8 = StatPtr_GroupPaintToolApplyStamp;
  if (StatPtr_GroupPaintToolApplyStamp == (FThreadSafeStaticStat<FStat_GroupPaintToolApplyStamp>)0x0
     ) {
    pFVar7 = ::FName::FName(&local_res10,"GroupPaintToolApplyStamp");
    FVar8 = (FThreadSafeStaticStat<FStat_GroupPaintToolApplyStamp>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_GroupPaintToolApplyStamp,*pFVar7,
                       L"GroupPaintTool_ApplyStamp","STATGROUP_GroupPaintTool","STATCAT_Advanced",
                       L"GroupPaintTool",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar12 = FVar14.Number;
  if ((FVar13.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar13.Value;
        local_res8.s.HighPart = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshGroupPaintTool.cpp"
                   ,0x25c);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar13.Value;
      local_res8.s.HighPart = uVar12;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar4 = true;
      FVar15.Value = FVar13.Value;
      goto LAB_14cce18e7;
    }
  }
  bVar4 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_14cce18e7:
  puVar9 = (undefined8 *)(**(code **)(*(longlong *)this + 0x478))(this);
  plVar2 = (longlong *)*puVar9;
  pFVar10 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0x440))(this);
  (**(code **)(*plVar2 + 0x88))
            (plVar2,pFVar10,&this->field_0x7b0,&this->ROITriangleBuffer,&this->ROIGroupBuffer);
  bVar6 = SyncMeshWithGroupBuffer(this,pFVar10);
  FSculptBrushStamp::operator=
            ((FSculptBrushStamp *)&this->field_0x930,(FSculptBrushStamp *)&this->field_0x7b0);
  FVar11 = FDateTime::Now();
  *(undefined8 *)&this->field_0xa40 = *(undefined8 *)FVar11.Ticks;
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar15.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return bVar6;
}

// ApplyVisibilityFilter @ 14cce53b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMeshGroupPaintTool::ApplyVisibilityFilter
          (UMeshGroupPaintTool *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  ForElementType<unsigned_int> FVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint uVar13;
  ForElementType<unsigned_int> FVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_c8 [4];
  undefined4 local_c4;
  undefined1 local_c0 [4];
  undefined4 local_bc;
  ForElementType<unsigned_int> local_b8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  int local_7c;
  int local_78 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(param_2,0,No);
  uVar13 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &param_2->ArrayMax;
  if (param_2->ArrayMax < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar13,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  iVar9 = *(int *)&(param_1->Elements).field_0x28;
  local_b8 = (ForElementType<unsigned_int>)&(param_1->Elements).field_0x10;
  iStack_a8 = 0;
  local_90 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar9 != 0) {
    puVar15 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)local_b8;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14cce54c0;
      uVar13 = (puVar15 + 1)[lVar10];
    }
    uStack_a4 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_80 = (int)lVar10;
    iStack_94 = local_90 + -1 + local_80;
    if (iVar9 < iStack_94) {
      iStack_94 = iVar9;
    }
  }
LAB_14cce54c0:
  iStack_88 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar13 = *(uint *)&(param_1->Elements).field_0x28;
  uStack_98 = 0xffffffff;
  TStack_68.CurrentBitIndex = iStack_94;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uVar16 = uVar13 & 0xffffffe0;
  iVar12 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iStack_94;
  TStack_68.BaseBitIndex = local_90;
  uStack_48 = CONCAT44(uStack_84,iStack_88);
  local_b0 = param_1;
  local_a0 = (undefined1 *)local_b8;
  iStack_8c = iStack_94;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
  if ((((int)uVar13 < 0) || (iVar9 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar6 = local_b8;
  uVar3 = *(int *)((longlong)local_b8 + 0x18);
  if (uVar13 != uVar3) {
    FVar14 = *(ForElementType<unsigned_int> *)((longlong)local_b8 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_b8 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_b8;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)((longlong)FVar14 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cce55d0;
      uVar13 = *(uint *)((undefined1 *)((longlong)FVar14 + 4) + lVar10 * 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_7c = (int)lVar10;
    uVar13 = local_7c + -1 + uVar16;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_14cce55d0:
  while( true ) {
    pTVar7 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      local_c8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_c8);
    }
    if (((TStack_68.CurrentBitIndex == uVar13) &&
        ((ForElementType<unsigned_int>)TStack_68.Array == FVar6)) && (pTVar7 == param_1)) break;
    local_c4 = *(undefined4 *)
                (*(longlong *)&pTVar7->Elements + (longlong)TStack_68.CurrentBitIndex * 0xc);
    pFVar4 = (param_2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_c4) &&
        ((FScriptContainerElement *)&local_c4 < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = param_2->ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar9 + 1;
    *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_c4;
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  ApplyVisibilityFilter(this,&this->TempROIBuffer,param_3);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_1);
  pFVar11 = (param_3->AllocatorInstance).Data;
  iVar9 = param_3->ArrayNum;
  pFVar4 = pFVar11 + (longlong)iVar9 * 4;
  while( true ) {
    if (param_3->ArrayNum != iVar9) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_c0);
    }
    if (pFVar11 == pFVar4) break;
    local_bc = *(undefined4 *)pFVar11;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->TriangleROI,local_78,(bool *)&local_bc);
    pFVar11 = pFVar11 + 4;
  }
  return;
}

// ApplyVisibilityFilter @ 14cce5790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMeshGroupPaintTool::ApplyVisibilityFilter
          (UMeshGroupPaintTool *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStackY_268 [32];
  <lambda_1> local_218;
  undefined8 local_210;
  code *local_208;
  UMeshGroupPaintTool **ppUStack_200;
  TArrayView<std::nullptr_t,int> local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined2 local_18c;
  undefined8 local_188;
  UMeshGroupPaintTool *local_178;
  undefined8 *local_170;
  TArray<int,TSizedDefaultAllocator<32>_> *local_168;
  undefined1 *local_160;
  undefined1 local_158 [16];
  double local_148;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if (((this->FilterProperties).field0_0x0.DebugPtr)->VisibilityFilter == None) {
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(param_2,param_1);
  }
  else {
    local_1c8 = 0.0;
    local_1d8 = 0.0;
    dStack_1d0 = 0.0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_188 = __real_3ff0000000000000;
    local_1a8 = ___xmm_3ff00000000000000000000000000000;
    uStack_1a0 = _UNK_15061cbc8;
    local_198 = 0x42b40000;
    local_194 = 0x42c80000;
    local_190 = 0x3f800000;
    local_18c = 0;
    plVar12 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
    plVar12 = (longlong *)(**(code **)(*plVar12 + 0x398))(plVar12);
    (**(code **)(*plVar12 + 0x18))(plVar12,&local_1d8);
    UE::ToolTarget::GetLocalToWorldTransform(&local_138,*(UToolTarget **)&this->field_0xc8);
    local_138.Rotation.XY.m128d_f64[0] =
         local_138.Rotation.XY.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    local_138.Rotation.XY.m128d_f64[1] =
         local_138.Rotation.XY.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    local_138.Translation.XY.m128d_f64[0] = local_1d8 - local_138.Translation.XY.m128d_f64[0];
    local_138.Translation.XY.m128d_f64[1] = dStack_1d0 - local_138.Translation.XY.m128d_f64[1];
    uVar28 = (undefined4)((ulonglong)local_138.Translation.XY.m128d_f64[1] >> 0x20);
    local_138.Rotation.ZW.m128d_f64[0] =
         local_138.Rotation.ZW.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    local_138.Rotation.ZW.m128d_f64[1] =
         local_138.Rotation.ZW.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    local_208 = (code *)local_1d8;
    ppUStack_200 = (UMeshGroupPaintTool **)dStack_1d0;
    auVar33._8_4_ = SUB84(local_138.Translation.XY.m128d_f64[1],0);
    auVar33._0_8_ = local_138.Translation.XY.m128d_f64[0];
    auVar33._12_4_ = uVar28;
    auVar24._8_4_ = SUB84(local_138.Rotation.XY.m128d_f64[1],0);
    auVar24._0_8_ = local_138.Rotation.XY.m128d_f64[0];
    auVar24._12_4_ = (int)((ulonglong)local_138.Rotation.XY.m128d_f64[1] >> 0x20);
    local_138.Translation.ZW.m128d_f64[0] = local_1c8 - local_138.Translation.ZW.m128d_f64[0];
    auVar21._8_4_ = SUB84(local_138.Translation.XY.m128d_f64[1],0);
    auVar21._0_8_ = local_138.Translation.XY.m128d_f64[0];
    auVar21._12_4_ = uVar28;
    auVar17._8_4_ = SUB84(local_138.Rotation.ZW.m128d_f64[0],0);
    auVar17._0_8_ = local_138.Rotation.XY.m128d_f64[1];
    auVar17._12_4_ = (int)((ulonglong)local_138.Rotation.ZW.m128d_f64[0] >> 0x20);
    auVar32._8_8_ = 0;
    auVar32._0_8_ = local_138.Translation.ZW.m128d_f64[0];
    auVar22 = blendpd(auVar21,auVar32,2);
    auVar34._0_8_ =
         auVar33._8_8_ * local_138.Rotation.XY.m128d_f64[0] -
         local_138.Rotation.XY.m128d_f64[1] * local_138.Translation.XY.m128d_f64[0];
    auVar34._8_8_ =
         local_138.Translation.ZW.m128d_f64[0] * local_138.Rotation.XY.m128d_f64[1] -
         auVar17._8_8_ * local_138.Translation.XY.m128d_f64[1];
    auVar25._8_4_ = SUB84(local_138.Rotation.ZW.m128d_f64[1],0);
    auVar25._0_8_ = local_138.Rotation.ZW.m128d_f64[0];
    auVar25._12_4_ = (int)((ulonglong)local_138.Rotation.ZW.m128d_f64[1] >> 0x20);
    auVar25 = blendpd(auVar24,auVar25,2);
    auVar23._0_8_ =
         auVar22._0_8_ * local_138.Rotation.ZW.m128d_f64[0] -
         auVar25._0_8_ * local_138.Translation.ZW.m128d_f64[0];
    auVar23._8_8_ = auVar22._8_8_ * local_138.Rotation.ZW.m128d_f64[1] - auVar25._8_8_ * 0.0;
    dVar6 = auVar34._8_8_ + auVar34._8_8_;
    dVar7 = auVar23._0_8_ + auVar23._0_8_;
    uVar28 = SUB84(dVar7,0);
    uVar29 = (undefined4)((ulonglong)dVar7 >> 0x20);
    auVar22 = blendpd(auVar34,auVar23,2);
    auVar35._0_8_ = auVar22._0_8_ + auVar22._0_8_;
    auVar35._8_8_ = auVar22._8_8_ + auVar22._8_8_;
    auVar30._8_4_ = uVar28;
    auVar30._0_8_ = dVar6;
    auVar30._12_4_ = uVar29;
    auVar18._8_4_ = uVar28;
    auVar18._0_8_ = dVar6;
    auVar18._12_4_ = uVar29;
    auVar31._0_8_ =
         auVar30._8_8_ * local_138.Rotation.XY.m128d_f64[0] -
         dVar6 * local_138.Rotation.XY.m128d_f64[1];
    auVar31._8_8_ =
         auVar35._0_8_ * local_138.Rotation.XY.m128d_f64[1] -
         auVar18._8_8_ * local_138.Rotation.ZW.m128d_f64[0];
    auVar26._8_4_ = uVar28;
    auVar26._0_8_ = dVar6;
    auVar26._12_4_ = uVar29;
    auVar19._8_4_ = SUB84(auVar35._8_8_,0);
    auVar19._0_8_ = auVar35._0_8_;
    auVar19._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
    auVar22 = blendpd(auVar26,auVar35,2);
    auVar27._0_8_ =
         auVar22._0_8_ * local_138.Rotation.ZW.m128d_f64[0] - auVar35._0_8_ * auVar25._0_8_;
    auVar27._8_8_ =
         auVar22._8_8_ * local_138.Rotation.ZW.m128d_f64[1] - auVar19._8_8_ * auVar25._8_8_;
    lVar14 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                local_138.Scale3D.ZW.m128d_f64[0]._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                                local_138.Scale3D.ZW.m128d_f64[0]._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    lVar15 = -(ulonglong)
              ((double)CONCAT44(local_138.Scale3D.XY.m128d_f64[0]._4_4_ &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                local_138.Scale3D.XY.m128d_f64[0]._0_4_ &
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar16 = -(ulonglong)
              ((double)CONCAT44(local_138.Scale3D.XY.m128d_f64[1]._4_4_ & _UNK_15061cc8c,
                                local_138.Scale3D.XY.m128d_f64[1]._0_4_ & _UNK_15061cc88) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar8._4_4_ = local_138.Scale3D.XY.m128d_f64[0]._4_4_;
    auVar8._0_4_ = local_138.Scale3D.XY.m128d_f64[0]._0_4_;
    auVar8._8_4_ = local_138.Scale3D.XY.m128d_f64[1]._0_4_;
    auVar8._12_4_ = local_138.Scale3D.XY.m128d_f64[1]._4_4_;
    auVar25 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar8);
    auVar20._8_4_ = SUB84(auVar31._8_8_,0);
    auVar20._0_8_ = auVar31._0_8_;
    auVar20._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
    auVar22._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar22._0_8_ = local_138.Scale3D.ZW.m128d_f64[0];
    auVar22._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar22 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar22);
    auVar32 = blendpd(auVar31,auVar27,2);
    local_148 = (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar22._4_4_,
                                 ~(uint)lVar14 & auVar22._0_4_) *
                (auVar35._0_8_ * local_138.Rotation.ZW.m128d_f64[1] +
                 local_138.Translation.ZW.m128d_f64[0] + auVar32._0_8_);
    dVar7 = (double)CONCAT44(~(uint)((ulonglong)lVar16 >> 0x20) & auVar25._12_4_,
                             ~(uint)lVar16 & auVar25._8_4_) *
            (dVar7 * local_138.Rotation.ZW.m128d_f64[1] + local_138.Translation.XY.m128d_f64[1] +
            auVar27._0_8_);
    local_158._8_4_ = SUB84(dVar7,0);
    local_158._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar15 >> 0x20) & auVar25._4_4_,
                          ~(uint)lVar15 & auVar25._0_4_) *
         (dVar6 * local_138.Rotation.ZW.m128d_f64[1] + local_138.Translation.XY.m128d_f64[0] +
         auVar20._8_8_);
    local_158._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    local_210 = (**(code **)(*(longlong *)this + 0x440))(this);
    iVar3 = param_1->ArrayNum;
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(&this->VisibilityFilterBuffer,iVar3,No);
    local_170 = &local_210;
    local_1e8.DataPtr = (void **)0x0;
    local_160 = local_158;
    local_1e8.ArrayNum = 0;
    local_208 = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshGroupPaintTool::ApplyVisibilityFilter'::__l2::<lambda_1>,void,int>
                ::Call;
    ppUStack_200 = &local_178;
    local_178 = this;
    local_168 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar3,1,(TFunctionRef<void___cdecl(int)> *)&local_208,local_218,
               None,&local_1e8);
    piVar1 = &param_2->ArrayMax;
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,piVar1);
    }
    uVar13 = 0;
    if (0 < iVar3) {
      lVar14 = 0;
      do {
        uVar10 = 0;
        if ((int)uVar13 < (this->VisibilityFilterBuffer).ArrayNum) {
          uVar10 = ~uVar13 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((this->VisibilityFilterBuffer).AllocatorInstance.Data[lVar14] !=
            (FScriptContainerElement)0x0) {
          uVar10 = 0;
          if ((int)uVar13 < param_1->ArrayNum) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = (param_2->AllocatorInstance).Data;
          pFVar2 = (param_1->AllocatorInstance).Data + lVar14 * 4;
          if (((pFVar4 <= pFVar2) && (pFVar2 < pFVar4 + (longlong)*piVar1 * 4)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = param_2->ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar11 + 1;
          *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 4) =
               *(undefined4 *)pFVar2;
        }
        uVar13 = uVar13 + 1;
        lVar14 = lVar14 + 1;
      } while (lVar14 < iVar3);
    }
  }
  return;
}

// BeginChange @ 14cce6670

void __thiscall UMeshGroupPaintTool::BeginChange(UMeshGroupPaintTool *this)

{
  TUniquePtr<FDynamicMeshGroupEditBuilder,TDefaultDelete<FDynamicMeshGroupEditBuilder>_> *pTVar1;
  FPolygroupSet *pFVar2;
  void *pvVar3;
  FDynamicMeshGroupEdit *pFVar4;
  code *pcVar5;
  bool bVar6;
  FDynamicMeshGroupEditBuilder *pFVar7;
  UInteractiveToolManager *pUVar8;
  FText *pFVar9;
  FDynamicMeshGroupEditBuilder *pFVar10;
  longlong local_28;
  FText local_20;
  
  pTVar1 = &this->ActiveGroupEditBuilder;
  if ((pTVar1->Ptr != (FDynamicMeshGroupEditBuilder *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveGroupEditBuilder == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshGroupPaintTool.cpp"
                         ,0x539,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = (this->ActiveGroupSet).Ptr;
  pFVar7 = ::operator_new(0x60);
  if (pFVar7 == (FDynamicMeshGroupEditBuilder *)0x0) {
    pFVar7 = (FDynamicMeshGroupEditBuilder *)0x0;
  }
  else {
    pFVar7 = FDynamicMeshGroupEditBuilder::FDynamicMeshGroupEditBuilder(pFVar7,pFVar2);
  }
  if (pTVar1 == (TUniquePtr<FDynamicMeshGroupEditBuilder,TDefaultDelete<FDynamicMeshGroupEditBuilder>_>
                 *)&local_28) {
    if (pFVar7 == (FDynamicMeshGroupEditBuilder *)0x0) goto LAB_14cce6799;
    *(undefined4 *)&(pFVar7->SavedIndexMap).field_0x48 = 0;
    pvVar3 = *(void **)&(pFVar7->SavedIndexMap).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar7->SavedIndexMap);
    pFVar4 = (pFVar7->Edit).Ptr;
    if (pFVar4 != (FDynamicMeshGroupEdit *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    pFVar2 = (pFVar7->PolygroupSet).Ptr;
    pFVar10 = pFVar7;
    if (pFVar2 != (FPolygroupSet *)0x0) {
      (*(code *)pFVar2[-1].PolygroupAttrib)(&pFVar2[-1].PolygroupAttrib);
    }
  }
  else {
    pFVar10 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar7;
    if (pFVar10 == (FDynamicMeshGroupEditBuilder *)0x0) goto LAB_14cce6799;
    *(undefined4 *)&(pFVar10->SavedIndexMap).field_0x48 = 0;
    pvVar3 = *(void **)&(pFVar10->SavedIndexMap).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar10->SavedIndexMap);
    pFVar4 = (pFVar10->Edit).Ptr;
    if (pFVar4 != (FDynamicMeshGroupEdit *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    pFVar2 = (pFVar10->PolygroupSet).Ptr;
    if (pFVar2 != (FPolygroupSet *)0x0) {
      (*(code *)pFVar2[-1].PolygroupAttrib)(&pFVar2[-1].PolygroupAttrib);
    }
  }
  ::operator_delete(pFVar10,0x60);
LAB_14cce6799:
  pUVar8 = (UInteractiveToolManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_20,L"UMeshGroupPaintTool",L"GroupPaintChange",L"Group Stroke");
  UE::TransactionUtil::FLongTransactionTracker::Open
            ((FLongTransactionTracker *)&this->field_0xc74,pFVar9,pUVar8);
  return;
}

// CanAccept @ 14cceba00

bool __thiscall UMeshGroupPaintTool::CanAccept(UMeshGroupPaintTool *this)

{
  return true;
}

// ClearAllFrozenGroups @ 14cced300

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMeshGroupPaintTool::ClearAllFrozenGroups(UMeshGroupPaintTool *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  FPolygroupSet *pFVar5;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar6;
  FDynamicMesh3 *pFVar7;
  code *pcVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  FText *pFVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  uint local_58 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  FText local_40;
  
  local_50.ArrayNum = (this->FrozenGroups).ArrayNum;
  lVar16 = (longlong)local_50.ArrayNum;
  pFVar3 = (this->FrozenGroups).AllocatorInstance.Data;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar19 = 0;
  if (local_50.ArrayNum == 0) {
    local_50.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_50.ArrayNum,0,&local_50.AllocatorInstance,local_50.ArrayNum,
               &local_50.ArrayMax);
    memcpy(local_50.AllocatorInstance.Data,pFVar3,lVar16 << 2);
  }
  lVar16 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  this_00 = &this->TempROIBuffer;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_00,0,No);
  uVar18 = *(int *)(lVar16 + 0x140) * 0x200 + *(int *)(lVar16 + 0x144);
  uVar17 = 0;
  if ((uVar18 != 0) &&
     (puVar4 = *(undefined8 **)(lVar16 + 0x148), uVar17 = 0,
     0xfffd < (ushort)(*(short *)*puVar4 - 1U))) {
    uVar17 = 1;
    uVar15 = 1;
    if ((int)uVar18 < 2) goto joined_r0x00014cced427;
    do {
      lVar2 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      if ((*(short *)(lVar2 + puVar4[uVar17 >> 9]) != 0) &&
         (*(short *)(lVar2 + puVar4[uVar17 >> 9]) != -1)) break;
      uVar15 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar15;
    } while ((int)uVar15 < (int)uVar18);
  }
  uVar15 = (uint)uVar17;
joined_r0x00014cced427:
  if (uVar15 == uVar18) {
    (this->FrozenGroups).ArrayNum = 0;
    if ((this->FrozenGroups).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->FrozenGroups).AllocatorInstance,0,&(this->FrozenGroups).ArrayMax);
    }
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_40,L"UMeshGroupPaintTool",L"ClearAllFrozenGroups",
                         L"Clear Frozen Groups");
    EmitFrozenGroupsChange(this,&local_50,&this->FrozenGroups,pFVar12);
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
    }
    UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
              ((this->DynamicMeshComponent).field0_0x0.DebugPtr,this_00,VertexColors);
    plVar13 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
    (**(code **)(*plVar13 + 0x368))(plVar13);
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
    return;
  }
  do {
    pFVar5 = (this->ActiveGroupSet).Ptr;
    uVar15 = (uint)uVar17;
    pTVar6 = pFVar5->PolygroupAttrib;
    if (pTVar6 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      pFVar7 = pFVar5->Mesh;
      if ((pFVar7->TriangleGroups).bIsSet == false) {
        iVar11 = -1;
      }
      else {
        iVar11 = iVar19;
        if ((-1 < (int)uVar15) &&
           ((int)uVar15 <
            (int)((pFVar7->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar7->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          lVar2 = (uVar17 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar7->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + lVar2) + (ulonglong)(uVar15 & 0x1ff) * 2) - 1U) < 0xfffe)
          {
            iVar11 = *(int *)(*(longlong *)
                               ((pFVar7->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                               lVar2) + (ulonglong)(uVar15 & 0x1ff) * 4);
          }
        }
      }
    }
    else {
      iVar11 = *(int *)(*(longlong *)(*(longlong *)&pTVar6->field_0x20 + (uVar17 >> 9) * 8) +
                       (ulonglong)(uVar15 & 0x1ff) * 4);
    }
    pFVar14 = (this->FrozenGroups).AllocatorInstance.Data;
    pFVar3 = pFVar14 + (longlong)(this->FrozenGroups).ArrayNum * 4;
    for (; local_58[0] = uVar15, pFVar14 != pFVar3; pFVar14 = pFVar14 + 4) {
      if (*(int *)pFVar14 == iVar11) {
        pFVar3 = (this_00->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_58) &&
            ((FScriptContainerElement *)local_58 <
             pFVar3 + (longlong)(this->TempROIBuffer).ArrayMax * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar11 = (this->TempROIBuffer).ArrayNum;
        piVar1 = &(this->TempROIBuffer).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&this_00->AllocatorInstance,piVar1);
        }
        (this->TempROIBuffer).ArrayNum = iVar11 + 1;
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_58[0];
        break;
      }
    }
    uVar15 = uVar15 + 1;
    uVar17 = (ulonglong)uVar15;
    if ((int)uVar18 <= (int)uVar15) goto joined_r0x00014cced427;
    while( true ) {
      lVar2 = (uVar17 >> 9) * 8;
      lVar9 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      if ((*(short *)(lVar9 + *(longlong *)(lVar2 + *(longlong *)(lVar16 + 0x148))) != 0) &&
         (*(short *)(lVar9 + *(longlong *)(*(longlong *)(lVar16 + 0x148) + lVar2)) != -1)) break;
      uVar15 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar15;
      if ((int)uVar18 <= (int)uVar15) goto joined_r0x00014cced427;
    }
  } while( true );
}

// ClearAllGroupsAction @ 14cced6d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMeshGroupPaintTool::ClearAllGroupsAction(UMeshGroupPaintTool *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar2;
  FPolygroupSet *pFVar3;
  FDynamicMesh3 *pFVar4;
  FDynamicMeshGroupEditBuilder *pFVar5;
  code *pcVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  int iVar10;
  longlong lVar11;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar12;
  longlong *plVar13;
  uint uVar14;
  FDynamicMeshAttributeSet *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  ForAnyElementType FVar20;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  uint local_68 [2];
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  
  BeginChange(this);
  lVar11 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  this_00 = &this->TempROIBuffer;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_00,0,No);
  iVar19 = 0;
  uVar17 = *(int *)(lVar11 + 0x144) + *(int *)(lVar11 + 0x140) * 0x200;
  pFVar15 = (FDynamicMeshAttributeSet *)0x0;
  if ((uVar17 != 0) &&
     (pFVar15 = (FDynamicMeshAttributeSet *)0x0,
     0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar11 + 0x148) - 1U))) {
    pFVar15 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar14 = 1;
    if ((int)uVar17 < 2) goto joined_r0x00014cced793;
    do {
      lVar7 = (ulonglong)((uint)pFVar15 & 0x1ff) * 2;
      lVar2 = (*(undefined8 **)(lVar11 + 0x148))[(ulonglong)pFVar15 >> 9];
      if ((*(short *)(lVar7 + lVar2) != 0) && (*(short *)(lVar7 + lVar2) != -1)) break;
      uVar14 = (uint)pFVar15 + 1;
      pFVar15 = (FDynamicMeshAttributeSet *)(ulonglong)uVar14;
    } while ((int)uVar14 < (int)uVar17);
  }
  uVar14 = (uint)pFVar15;
joined_r0x00014cced793:
  do {
    if (uVar14 == uVar17) {
      local_50.ArrayNum = (this->TempROIBuffer).ArrayNum;
      lVar11 = (longlong)local_50.ArrayNum;
      pFVar5 = (this->ActiveGroupEditBuilder).Ptr;
      pFVar16 = (this->TempROIBuffer).AllocatorInstance.Data;
      local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_50.ArrayNum == 0) {
        local_50.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_50.ArrayNum,0,&local_50.AllocatorInstance,local_50.ArrayNum,
                   &local_50.ArrayMax);
        memcpy(local_50.AllocatorInstance.Data,pFVar16,lVar11 << 2);
      }
      FDynamicMeshGroupEditBuilder::SaveTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>
                (pFVar5,&local_50);
      pFVar16 = (this->TempROIBuffer).AllocatorInstance.Data;
      iVar19 = (this->TempROIBuffer).ArrayNum;
      local_res10 = pFVar16 + (longlong)iVar19 * 4;
      while( true ) {
        pFVar8 = local_res10;
        if ((this->TempROIBuffer).ArrayNum != iVar19) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (pFVar16 == pFVar8) break;
        uVar17 = *(uint *)pFVar16;
        pFVar3 = (this->ActiveGroupSet).Ptr;
        lVar11 = (**(code **)(*(longlong *)this + 0x440))(this);
        if ((-1 < (int)uVar17) &&
           ((int)uVar17 < *(int *)(lVar11 + 0x140) * 0x200 + *(int *)(lVar11 + 0x144))) {
          uVar18 = (ulonglong)(uVar17 & 0x1ff);
          lVar2 = (ulonglong)(uVar17 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(lVar11 + 0x148) + (ulonglong)(uVar17 >> 9) * 8) +
                                 uVar18 * 2) - 1U) < 0xfffe) {
            if (pFVar3->PolygroupAttrib == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
              if (*(char *)(lVar11 + 0x1a8) != '\0') {
                *(undefined4 *)(*(longlong *)(*(longlong *)(lVar11 + 0x198) + lVar2) + uVar18 * 4) =
                     0;
                iVar10 = 1;
                if (1 < *(int *)(lVar11 + 0x1b0)) {
                  iVar10 = *(int *)(lVar11 + 0x1b0);
                }
                *(int *)(lVar11 + 0x1b0) = iVar10;
              }
            }
            else {
              pFVar15 = (FDynamicMeshAttributeSet *)0x0;
              if (*(FDynamicMeshAttributeSet **)(lVar11 + 0x208) != (FDynamicMeshAttributeSet *)0x0)
              {
                pFVar15 = *(FDynamicMeshAttributeSet **)(lVar11 + 0x208);
              }
              pTVar12 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer
                                  (pFVar15,pFVar3->GroupLayerIndex);
              *(undefined4 *)(*(longlong *)(*(longlong *)&pTVar12->field_0x20 + lVar2) + uVar18 * 4)
                   = 0;
            }
          }
        }
        iVar10 = 1;
        if (1 < pFVar3->MaxGroupID) {
          iVar10 = pFVar3->MaxGroupID;
        }
        pFVar16 = pFVar16 + 4;
        pFVar3->MaxGroupID = iVar10;
      }
      local_58 = (this->TempROIBuffer).ArrayNum;
      lVar11 = (longlong)local_58;
      pFVar5 = (this->ActiveGroupEditBuilder).Ptr;
      pFVar16 = (this->TempROIBuffer).AllocatorInstance.Data;
      local_60.Data = (FScriptContainerElement *)0x0;
      if (local_58 == 0) {
        local_54 = 0;
        iVar19 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_58,0,&local_60,local_58,&local_54);
        memcpy(local_60.Data,pFVar16,lVar11 << 2);
        iVar19 = local_58;
      }
      pFVar16 = local_60.Data + (longlong)iVar19 * 4;
      FVar20.Data = local_60.Data;
      iVar10 = iVar19;
      while( true ) {
        if (iVar10 != iVar19) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res10);
        }
        if (FVar20.Data == pFVar16) break;
        FDynamicMeshGroupEditBuilder::SaveTriangle(pFVar5,*(int *)FVar20.Data);
        FVar20.Data = FVar20.Data + 4;
        iVar10 = local_58;
      }
      if (local_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data);
      }
      UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
                ((this->DynamicMeshComponent).field0_0x0.DebugPtr,&this->TempROIBuffer,VertexColors)
      ;
      plVar13 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
      (**(code **)(*plVar13 + 0x368))(plVar13);
      EndChange(this);
      return;
    }
    while( true ) {
      pFVar3 = (this->ActiveGroupSet).Ptr;
      uVar14 = (uint)pFVar15;
      pTVar12 = pFVar3->PolygroupAttrib;
      if (pTVar12 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        pFVar4 = pFVar3->Mesh;
        if ((pFVar4->TriangleGroups).bIsSet == false) {
          iVar10 = -1;
        }
        else {
          iVar10 = iVar19;
          if ((-1 < (int)uVar14) &&
             ((int)uVar14 <
              (int)((pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed))) {
            lVar2 = ((ulonglong)pFVar15 >> 9) * 8;
            if ((ushort)(*(short *)(*(longlong *)
                                     ((pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                      .Data + lVar2) + (ulonglong)(uVar14 & 0x1ff) * 2) - 1U) <
                0xfffe) {
              iVar10 = *(int *)(*(longlong *)
                                 ((pFVar4->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data
                                 + lVar2) + (ulonglong)(uVar14 & 0x1ff) * 4);
            }
          }
        }
      }
      else {
        iVar10 = *(int *)(*(longlong *)
                           (*(longlong *)&pTVar12->field_0x20 + ((ulonglong)pFVar15 >> 9) * 8) +
                         (ulonglong)(uVar14 & 0x1ff) * 4);
      }
      local_68[0] = uVar14;
      if (iVar10 != 0) {
        pFVar16 = (this_00->AllocatorInstance).Data;
        if (((pFVar16 <= (FScriptContainerElement *)local_68) &&
            ((FScriptContainerElement *)local_68 <
             pFVar16 + (longlong)(this->TempROIBuffer).ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (this->TempROIBuffer).ArrayNum;
        piVar1 = &(this->TempROIBuffer).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&this_00->AllocatorInstance,piVar1);
        }
        (this->TempROIBuffer).ArrayNum = iVar10 + 1;
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_68[0];
      }
      uVar14 = uVar14 + 1;
      pFVar15 = (FDynamicMeshAttributeSet *)(ulonglong)uVar14;
      if ((int)uVar17 <= (int)uVar14) break;
      while( true ) {
        lVar2 = ((ulonglong)pFVar15 >> 9) * 8;
        lVar7 = (ulonglong)((uint)pFVar15 & 0x1ff) * 2;
        if ((*(short *)(lVar7 + *(longlong *)(*(longlong *)(lVar11 + 0x148) + lVar2)) != 0) &&
           (*(short *)(lVar7 + *(longlong *)(lVar2 + *(longlong *)(lVar11 + 0x148))) != -1)) break;
        uVar14 = (uint)pFVar15 + 1;
        pFVar15 = (FDynamicMeshAttributeSet *)(ulonglong)uVar14;
        if ((int)uVar17 <= (int)uVar14) goto joined_r0x00014cced793;
      }
    }
  } while( true );
}

// ClearCurrentGroupAction @ 14ccede00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMeshGroupPaintTool::ClearCurrentGroupAction(UMeshGroupPaintTool *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  undefined8 *puVar2;
  FPolygroupSet *pFVar3;
  FDynamicMesh3 *pFVar4;
  longlong lVar5;
  FDynamicMeshGroupEditBuilder *pFVar6;
  code *pcVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  FDynamicMeshAttributeSet *pFVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  ForAnyElementType FVar22;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  uint local_68 [2];
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  
  BeginChange(this);
  iVar16 = ((this->FilterProperties).field0_0x0.DebugPtr)->SetGroup;
  lVar12 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  this_00 = &this->TempROIBuffer;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_00,0,No);
  iVar21 = 0;
  uVar19 = *(int *)(lVar12 + 0x140) * 0x200 + *(int *)(lVar12 + 0x144);
  pFVar17 = (FDynamicMeshAttributeSet *)0x0;
  if ((uVar19 != 0) &&
     (puVar2 = *(undefined8 **)(lVar12 + 0x148), pFVar17 = (FDynamicMeshAttributeSet *)0x0,
     0xfffd < (ushort)(*(short *)*puVar2 - 1U))) {
    pFVar17 = (FDynamicMeshAttributeSet *)&DAT_00000001;
    uVar15 = 1;
    if ((int)uVar19 < 2) goto joined_r0x00014cceded7;
    do {
      lVar5 = (ulonglong)((uint)pFVar17 & 0x1ff) * 2;
      if ((*(short *)(lVar5 + puVar2[(ulonglong)pFVar17 >> 9]) != 0) &&
         (*(short *)(lVar5 + puVar2[(ulonglong)pFVar17 >> 9]) != -1)) break;
      uVar15 = (uint)pFVar17 + 1;
      pFVar17 = (FDynamicMeshAttributeSet *)(ulonglong)uVar15;
    } while ((int)uVar15 < (int)uVar19);
  }
  uVar15 = (uint)pFVar17;
joined_r0x00014cceded7:
  do {
    if (uVar15 == uVar19) {
      local_50.ArrayNum = (this->TempROIBuffer).ArrayNum;
      lVar12 = (longlong)local_50.ArrayNum;
      pFVar6 = (this->ActiveGroupEditBuilder).Ptr;
      pFVar18 = (this->TempROIBuffer).AllocatorInstance.Data;
      local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_50.ArrayNum == 0) {
        local_50.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_50.ArrayNum,0,&local_50.AllocatorInstance,local_50.ArrayNum,
                   &local_50.ArrayMax);
        memcpy(local_50.AllocatorInstance.Data,pFVar18,lVar12 << 2);
      }
      FDynamicMeshGroupEditBuilder::SaveTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>
                (pFVar6,&local_50);
      pFVar18 = (this->TempROIBuffer).AllocatorInstance.Data;
      iVar16 = (this->TempROIBuffer).ArrayNum;
      local_res10 = pFVar18 + (longlong)iVar16 * 4;
      while( true ) {
        pFVar9 = local_res10;
        if ((this->TempROIBuffer).ArrayNum != iVar16) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (pFVar18 == pFVar9) break;
        uVar19 = *(uint *)pFVar18;
        pFVar3 = (this->ActiveGroupSet).Ptr;
        lVar12 = (**(code **)(*(longlong *)this + 0x440))(this);
        if ((-1 < (int)uVar19) &&
           ((int)uVar19 < *(int *)(lVar12 + 0x140) * 0x200 + *(int *)(lVar12 + 0x144))) {
          uVar20 = (ulonglong)(uVar19 & 0x1ff);
          lVar5 = (ulonglong)(uVar19 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(lVar12 + 0x148) + (ulonglong)(uVar19 >> 9) * 8) +
                                 uVar20 * 2) - 1U) < 0xfffe) {
            if (pFVar3->PolygroupAttrib == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
              if (*(char *)(lVar12 + 0x1a8) != '\0') {
                *(undefined4 *)(*(longlong *)(*(longlong *)(lVar12 + 0x198) + lVar5) + uVar20 * 4) =
                     0;
                iVar21 = 1;
                if (1 < *(int *)(lVar12 + 0x1b0)) {
                  iVar21 = *(int *)(lVar12 + 0x1b0);
                }
                *(int *)(lVar12 + 0x1b0) = iVar21;
              }
            }
            else {
              pFVar17 = (FDynamicMeshAttributeSet *)0x0;
              if (*(FDynamicMeshAttributeSet **)(lVar12 + 0x208) != (FDynamicMeshAttributeSet *)0x0)
              {
                pFVar17 = *(FDynamicMeshAttributeSet **)(lVar12 + 0x208);
              }
              pTVar13 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer
                                  (pFVar17,pFVar3->GroupLayerIndex);
              *(undefined4 *)(*(longlong *)(*(longlong *)&pTVar13->field_0x20 + lVar5) + uVar20 * 4)
                   = 0;
            }
          }
        }
        iVar21 = 1;
        if (1 < pFVar3->MaxGroupID) {
          iVar21 = pFVar3->MaxGroupID;
        }
        pFVar18 = pFVar18 + 4;
        pFVar3->MaxGroupID = iVar21;
      }
      local_58 = (this->TempROIBuffer).ArrayNum;
      lVar12 = (longlong)local_58;
      pFVar6 = (this->ActiveGroupEditBuilder).Ptr;
      pFVar18 = (this->TempROIBuffer).AllocatorInstance.Data;
      local_60.Data = (FScriptContainerElement *)0x0;
      if (local_58 == 0) {
        local_54 = 0;
        iVar16 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_58,0,&local_60,local_58,&local_54);
        memcpy(local_60.Data,pFVar18,lVar12 << 2);
        iVar16 = local_58;
      }
      pFVar18 = local_60.Data + (longlong)iVar16 * 4;
      FVar22.Data = local_60.Data;
      iVar21 = iVar16;
      while( true ) {
        if (iVar21 != iVar16) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res10);
        }
        if (FVar22.Data == pFVar18) break;
        FDynamicMeshGroupEditBuilder::SaveTriangle(pFVar6,*(int *)FVar22.Data);
        FVar22.Data = FVar22.Data + 4;
        iVar21 = local_58;
      }
      if (local_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data);
      }
      UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
                ((this->DynamicMeshComponent).field0_0x0.DebugPtr,&this->TempROIBuffer,VertexColors)
      ;
      plVar14 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
      (**(code **)(*plVar14 + 0x368))(plVar14);
      EndChange(this);
      return;
    }
    while( true ) {
      pFVar3 = (this->ActiveGroupSet).Ptr;
      uVar15 = (uint)pFVar17;
      pTVar13 = pFVar3->PolygroupAttrib;
      if (pTVar13 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        pFVar4 = pFVar3->Mesh;
        if ((pFVar4->TriangleGroups).bIsSet == false) {
          iVar11 = -1;
        }
        else {
          iVar11 = iVar21;
          if ((-1 < (int)uVar15) &&
             ((int)uVar15 <
              (int)((pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed))) {
            lVar5 = ((ulonglong)pFVar17 >> 9) * 8;
            if ((ushort)(*(short *)(*(longlong *)
                                     ((pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                      .Data + lVar5) + (ulonglong)(uVar15 & 0x1ff) * 2) - 1U) <
                0xfffe) {
              iVar11 = *(int *)(*(longlong *)
                                 ((pFVar4->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data
                                 + lVar5) + (ulonglong)(uVar15 & 0x1ff) * 4);
            }
          }
        }
      }
      else {
        iVar11 = *(int *)(*(longlong *)
                           (*(longlong *)&pTVar13->field_0x20 + ((ulonglong)pFVar17 >> 9) * 8) +
                         (ulonglong)(uVar15 & 0x1ff) * 4);
      }
      local_68[0] = uVar15;
      if (iVar11 == iVar16) {
        pFVar18 = (this_00->AllocatorInstance).Data;
        if (((pFVar18 <= (FScriptContainerElement *)local_68) &&
            ((FScriptContainerElement *)local_68 <
             pFVar18 + (longlong)(this->TempROIBuffer).ArrayMax * 4)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar11 = (this->TempROIBuffer).ArrayNum;
        piVar1 = &(this->TempROIBuffer).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&this_00->AllocatorInstance,piVar1);
        }
        (this->TempROIBuffer).ArrayNum = iVar11 + 1;
        *(uint *)((this_00->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_68[0];
      }
      uVar15 = uVar15 + 1;
      pFVar17 = (FDynamicMeshAttributeSet *)(ulonglong)uVar15;
      if ((int)uVar19 <= (int)uVar15) break;
      while( true ) {
        lVar8 = (ulonglong)((uint)pFVar17 & 0x1ff) * 2;
        lVar5 = *(longlong *)(*(longlong *)(lVar12 + 0x148) + ((ulonglong)pFVar17 >> 9) * 8);
        if ((*(short *)(lVar8 + lVar5) != 0) && (*(short *)(lVar8 + lVar5) != -1)) break;
        uVar15 = (uint)pFVar17 + 1;
        pFVar17 = (FDynamicMeshAttributeSet *)(ulonglong)uVar15;
        if ((int)uVar19 <= (int)uVar15) goto joined_r0x00014cceded7;
      }
    }
  } while( true );
}

// CommitResult @ 14ccf0b70

void __thiscall
UMeshGroupPaintTool::CommitResult
          (UMeshGroupPaintTool *this,UBaseDynamicMeshComponent *param_1,bool param_2)

{
  code *pcVar1;
  longlong lVar2;
  FText *pFVar3;
  undefined7 in_register_00000081;
  UMeshGroupPaintTool *local_res8;
  undefined1 local_18 [16];
  
  lVar2 = (**(code **)(*(longlong *)this + 0x2d8))
                    (this,param_1,CONCAT71(in_register_00000081,param_2));
  pcVar1 = *(code **)(*(longlong *)(lVar2 + 0x28) + 0x10);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_18,L"UMeshGroupPaintTool",L"GroupPaintToolTransactionName",
                      L"Paint Groups");
  (*pcVar1)(lVar2 + 0x28,pFVar3);
  if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
  }
  local_18._8_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshGroupPaintTool::CommitResult'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_res8 = this;
  (**(code **)(param_1->_padding_ + 0xb40))(param_1,local_18);
  lVar2 = (**(code **)(*(longlong *)this + 0x2d8))(this);
                    /* WARNING: Could not recover jumptable at 0x00014ccf0c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x18))(lVar2 + 0x28);
  return;
}

// DecreaseBrushRadiusAction @ 14ccf5cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UMeshGroupPaintTool::DecreaseBrushRadiusAction(UMeshGroupPaintTool *this)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *(longlong *)&this->field_0x128;
  if (*(char *)(lVar2 + 0xb4) == '\0') {
    fVar3 = 0.0;
    fVar4 = *(float *)(lVar2 + 0xb8) - __real_3ccccccd;
    if (__real_3f800000 <= fVar4) {
      fVar4 = __real_3f800000;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(float *)(lVar2 + 0xb8) = fVar4;
  }
  else {
    fVar4 = *(float *)(lVar2 + 200);
    fVar1 = *(float *)(lVar2 + 0xc4);
    fVar3 = (fVar4 - fVar1) * ___real_3c4ccccd;
    fVar5 = *(float *)(lVar2 + 0xbc) - fVar3;
    if (fVar4 <= fVar5) {
      fVar5 = fVar4;
    }
    if (fVar5 <= fVar1) {
      fVar5 = fVar1;
    }
    *(float *)(lVar2 + 0xbc) = fVar5;
  }
  (**(code **)(*(longlong *)this + 0x340))(fVar3,*(undefined8 *)&this->field_0x128);
  (**(code **)(*(longlong *)this + 0x490))(this);
  ((this->FilterProperties).field0_0x0.DebugPtr)->BrushSize =
       *(float *)(*(longlong *)&this->field_0x128 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00014ccf5db5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x340))(this,(this->FilterProperties).field0_0x0.DebugPtr);
  return;
}

// DecreaseBrushRadiusSmallStepAction @ 14ccf5e80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UMeshGroupPaintTool::DecreaseBrushRadiusSmallStepAction(UMeshGroupPaintTool *this)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = *(longlong *)&this->field_0x128;
  if (*(char *)(lVar2 + 0xb4) == '\0') {
    fVar3 = 0.0;
    fVar4 = *(float *)(lVar2 + 0xb8) - __real_3ba3d70a;
    if (__real_3f800000 <= fVar4) {
      fVar4 = __real_3f800000;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    *(float *)(lVar2 + 0xb8) = fVar4;
  }
  else {
    fVar4 = *(float *)(lVar2 + 200);
    fVar1 = *(float *)(lVar2 + 0xc4);
    fVar3 = (fVar4 - fVar1) * ___real_3b23d70a;
    fVar5 = *(float *)(lVar2 + 0xbc) - fVar3;
    if (fVar4 <= fVar5) {
      fVar5 = fVar4;
    }
    if (fVar5 <= fVar1) {
      fVar5 = fVar1;
    }
    *(float *)(lVar2 + 0xbc) = fVar5;
  }
  (**(code **)(*(longlong *)this + 0x340))(fVar3,*(undefined8 *)&this->field_0x128);
  (**(code **)(*(longlong *)this + 0x490))(this);
  ((this->FilterProperties).field0_0x0.DebugPtr)->BrushSize =
       *(float *)(*(longlong *)&this->field_0x128 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00014ccf5f45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x340))(this,(this->FilterProperties).field0_0x0.DebugPtr);
  return;
}

// DrawHUD @ 14ccf76a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMeshGroupPaintTool::DrawHUD
          (UMeshGroupPaintTool *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
  FDynamicMeshOctree3 *this_00;
  int iVar1;
  UPolyLassoMarqueeMechanic *pUVar2;
  double dVar3;
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  UFont *pUVar19;
  FDynamicMesh3 *pFVar20;
  size_t sVar21;
  TVector<double> *pTVar22;
  FLinearColor *pFVar23;
  FScriptContainerElement *pFVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  undefined4 uVar33;
  FSparseDynamicOctree3 *local_res8;
  FSceneView *local_res10;
  FSparseDynamicOctree3 *local_res18;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  TVector<double>_u_0 local_1f8;
  code *local_1d8 [2];
  TVector<double>_u_0 local_1c8;
  code *local_1a8;
  FSparseDynamicOctree3 **local_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  double local_138;
  double local_130;
  double local_128;
  code *local_118;
  FSparseDynamicOctree3 **ppFStack_110;
  double local_108;
  
  if ((this->PolyLassoMechanic).field0_0x0.DebugPtr != (UPolyLassoMarqueeMechanic *)0x0) {
    cVar15 = (**(code **)(*(longlong *)this + 0x570))();
    pFVar23 = &FLinearColor::Green;
    pUVar2 = (this->PolyLassoMechanic).field0_0x0.DebugPtr;
    if (cVar15 != '\0') {
      pFVar23 = &FLinearColor::Red;
    }
    fVar32 = (pFVar23->field0_0x0)._s_0.G;
    fVar5 = (pFVar23->field0_0x0)._s_0.B;
    fVar6 = (pFVar23->field0_0x0)._s_0.A;
    (pUVar2->LineColor).field0_0x0._s_0.R = (pFVar23->field0_0x0)._s_0.R;
    (pUVar2->LineColor).field0_0x0._s_0.G = fVar32;
    (pUVar2->LineColor).field0_0x0._s_0.B = fVar5;
    (pUVar2->LineColor).field0_0x0._s_0.A = fVar6;
    pUVar2 = (this->PolyLassoMechanic).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x2e0))(pUVar2,param_1,param_2);
  }
  fVar32 = __real_3f800000;
  if (param_1->bStereoRendering == false) {
    fVar32 = param_1->DPIScale;
  }
  pUVar19 = UEngine::GetSmallFont();
  (**(code **)((longlong)*param_2 + 0x18))(param_2,&local_118);
  local_res10 = (FSceneView *)(**(code **)((longlong)*param_2 + 0x10))(param_2);
  local_1c8._s_0.Z = local_108;
  local_1c8._s_0.X = (double)local_118;
  local_1c8._s_0.Y = (double)ppFStack_110;
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            ((TTransformSRT3<double> *)&this->field_0x1f0,(TVector<double> *)&local_1f8._s_0,
             (TVector<double> *)&local_1c8._s_0);
  pFVar20 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0x440))(this);
  uVar14 = local_1f8._s_0.Z;
  uVar13 = local_1f8._s_0.Y;
  uVar10 = local_1f8._s_0.X;
  dVar8 = __real_7fefffffffffffff;
  dVar7 = __real_3ff0000000000000;
  uVar9 = local_1f8._0_4_;
  uVar11 = local_1f8._4_4_;
  uVar12 = local_1f8._8_4_;
  uVar33 = (undefined4)((ulonglong)local_1f8._8_8_ >> 0x20);
  if (((this->FilterProperties).field0_0x0.DebugPtr)->bShowHitGroup == false) goto LAB_14ccf7a9b;
  this_00 = &this->Octree;
  dVar29 = *(double *)&this->field_0x668 - local_1f8._s_0.X;
  dVar30 = *(double *)&this->field_0x670 - local_1f8._s_0.Y;
  dVar31 = *(double *)&this->field_0x678 - local_1f8._s_0.Z;
  auVar26._0_8_ = dVar31 * dVar31;
  auVar26._8_8_ = 0;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = dVar30 * dVar30 + dVar29 * dVar29 + auVar26._0_8_;
  auVar27 = sqrtpd(auVar26,auVar27);
  if (auVar27._0_8_ <= 0.0) {
    local_1f8._s_0.Z = 0.0;
    local_180._s_0.X = 0.0;
    local_180._s_0.Y = 0.0;
  }
  else {
    dVar3 = __real_3ff0000000000000 / auVar27._0_8_;
    local_180._s_0.X = dVar29 * dVar3;
    local_180._s_0.Y = dVar30 * dVar3;
    local_1f8._s_0.Z = dVar31 * dVar3;
  }
  local_180._s_0.Z = local_1f8._s_0.Z;
  local_198._0_4_ = local_1f8._0_4_;
  local_198._4_4_ = local_1f8._4_4_;
  local_198._8_4_ = local_1f8._8_4_;
  local_198._s_0.Z = (double)uVar14;
  local_198._12_4_ = uVar33;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_180._s_0,__real_3e45798ee0000000);
  local_208._8_8_ = &local_res8;
  local_208._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
       ::Call;
  local_218._8_8_ = &local_res18;
  local_218._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
       ::Call;
  local_res8 = (FSparseDynamicOctree3 *)this_00;
  local_res18 = (FSparseDynamicOctree3 *)this_00;
  uVar16 = UE::Geometry::FSparseDynamicOctree3::FindNearestHitObject
                     ((FSparseDynamicOctree3 *)this_00,(TRay<double> *)&local_198._s_0,
                      (TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *)local_218
                      ,(TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *)local_208
                      ,dVar8);
  if ((((int)uVar16 < 0) ||
      ((int)((pFVar20->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (pFVar20->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar16)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((pFVar20->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                     .Data + (ulonglong)(uVar16 >> 9) * 8) +
                                  (ulonglong)(uVar16 & 0x1ff) * 2) - 1U))) goto LAB_14ccf7a9b;
  FSceneView::WorldToPixel
            (local_res10,(TVector<double> *)&this->field_0x630,(TVector2<double> *)local_1d8);
  ::FString::PrintfImpl((FString *)local_208,L"%d");
  if (local_208._8_4_ == 0) {
    local_218._0_8_ = L"";
LAB_14ccf7a38:
    sVar21 = wcslen((wchar_t *)local_218._0_8_);
    uVar17 = (undefined4)sVar21;
  }
  else {
    uVar17 = 0;
    local_218._0_8_ = local_208._0_8_;
    if ((FScriptContainerElement *)local_208._0_8_ != (FScriptContainerElement *)0x0)
    goto LAB_14ccf7a38;
  }
  local_218._8_4_ = uVar17;
  local_1c8._s_0.X = (double)local_218._0_8_;
  local_1c8._s_0.Y = (double)local_218._8_8_;
  FCanvas::DrawShadowedString
            (param_1,(dVar7 / (double)fVar32) * (double)local_1d8[0],
             (dVar7 / (double)fVar32) * (double)local_1d8[1],(TStringView<wchar_t> *)&local_1c8._s_0
             ,pUVar19,&FLinearColor::White,&FLinearColor::Black);
  if ((FScriptContainerElement *)local_208._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_208._0_8_);
  }
LAB_14ccf7a9b:
  if (((this->FilterProperties).field0_0x0.DebugPtr)->bShowAllGroups != false) {
    if (this->bDrawGroupsDataValid == false) {
      UE::Geometry::FGroupVisualizationCache::UpdateGroupInfo_ConnectedComponents
                (&this->GroupVisualizationCache,pFVar20,(this->ActiveGroupSet).Ptr,true);
      this->bDrawGroupsDataValid = true;
    }
    iVar1 = (this->GroupVisualizationCache).GroupInfo.ArrayNum;
    pFVar24 = (this->GroupVisualizationCache).GroupInfo.AllocatorInstance.Data;
    pFVar25 = pFVar24 + (longlong)iVar1 * 0x68;
    while( true ) {
      if ((this->GroupVisualizationCache).GroupInfo.ArrayNum != iVar1) {
        `TCheckedPointerIterator<UE::Geometry::FGroupVisualizationCache::FGroupInfo,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (pFVar24 == pFVar25) break;
      dVar29 = *(double *)(pFVar24 + 0x38) - (double)uVar10;
      local_130 = *(double *)(pFVar24 + 0x40) - (double)uVar13;
      local_128 = *(double *)(pFVar24 + 0x48) - (double)uVar14;
      local_150._s_0.Z = (double)uVar14;
      local_150._0_4_ = uVar9;
      local_150._4_4_ = uVar11;
      local_150._8_4_ = uVar12;
      auVar28._0_8_ = local_128 * local_128;
      auVar28._8_8_ = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_130 * local_130 + dVar29 * dVar29 + auVar28._0_8_;
      auVar27 = sqrtpd(auVar28,auVar4);
      if (auVar27._0_8_ <= 0.0) {
        local_128 = 0.0;
        local_130 = 0.0;
        local_138 = 0.0;
      }
      else {
        local_138 = dVar7 / auVar27._0_8_;
        local_128 = local_138 * local_128;
        local_130 = local_138 * local_130;
        local_138 = local_138 * dVar29;
      }
      local_res8 = (FSparseDynamicOctree3 *)&this->Octree;
      local_1d8[1] = (code *)&local_res8;
      local_1d8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
                     ::Call;
      local_1a0 = &local_res18;
      local_1a8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
                  ::Call;
      local_res18 = local_res8;
      local_150._12_4_ = uVar33;
      iVar18 = UE::Geometry::FSparseDynamicOctree3::FindNearestHitObject
                         (local_res8,(TRay<double> *)&local_150._s_0,
                          (TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *)
                          &local_1a8,
                          (TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *)
                          local_1d8,dVar8);
      if ((iVar18 == *(int *)(pFVar24 + 0x50)) || (iVar18 == *(int *)(pFVar24 + 0x54))) {
        local_168._s_0.X = *(double *)&this->field_0x228 * *(double *)(pFVar24 + 0x38);
        local_168._s_0.Y = *(double *)&this->field_0x230 * *(double *)(pFVar24 + 0x40);
        local_168._s_0.Z = *(double *)&this->field_0x238 * *(double *)(pFVar24 + 0x48);
        pTVar22 = UE::Geometry::operator*<double>
                            ((TVector<double> *)&local_198._s_0,
                             (TQuaternion<double> *)&this->field_0x1f0,
                             (TVector<double> *)&local_168._s_0);
        local_1f8._s_0.Z = *(double *)&this->field_0x220 + (pTVar22->field0_0x0)._s_0.Z;
        local_1f8._s_0.Y = *(double *)&this->field_0x218 + (pTVar22->field0_0x0)._s_0.Y;
        local_1f8._s_0.X = *(double *)&this->field_0x210 + (pTVar22->field0_0x0)._s_0.X;
        FSceneView::WorldToPixel
                  (local_res10,(TVector<double> *)&local_1f8._s_0,
                   (TVector2<double> *)&local_1c8._s_0);
        ::FString::PrintfImpl((FString *)local_218,L"%d");
        if (local_218._8_4_ == 0) {
          local_208._0_8_ = L"";
LAB_14ccf7caf:
          sVar21 = wcslen((wchar_t *)local_208._0_8_);
          uVar17 = (undefined4)sVar21;
        }
        else {
          uVar17 = 0;
          local_208._0_8_ = local_218._0_8_;
          if ((FScriptContainerElement *)local_218._0_8_ != (FScriptContainerElement *)0x0)
          goto LAB_14ccf7caf;
        }
        local_208._8_4_ = uVar17;
        local_1f8._s_0.X = (double)local_208._0_8_;
        local_1f8._s_0.Y = (double)local_208._8_8_;
        FCanvas::DrawShadowedString
                  (param_1,local_1c8._s_0.X * (dVar7 / (double)fVar32),
                   local_1c8._s_0.Y * (dVar7 / (double)fVar32),
                   (TStringView<wchar_t> *)&local_1f8._s_0,pUVar19,&FLinearColor::White,
                   &FLinearColor::Black);
        if ((FScriptContainerElement *)local_218._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_218._0_8_);
        }
      }
      pFVar24 = pFVar24 + 0x68;
    }
  }
  return;
}

// EmitFrozenGroupsChange @ 14ccf8400

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMeshGroupPaintTool::EmitFrozenGroupsChange
          (UMeshGroupPaintTool *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,FText *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_a8 [32];
  undefined8 *local_88 [2];
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  iVar3 = param_1->ArrayNum;
  if (iVar3 == param_2->ArrayNum) {
    if (iVar3 == 0) {
      return;
    }
    iVar3 = memcmp((param_1->AllocatorInstance).Data,(param_2->AllocatorInstance).Data,
                   (longlong)iVar3 << 2);
    if (iVar3 == 0) {
      return;
    }
  }
  puVar4 = ::operator_new(0x60);
  if (puVar4 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4[5] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    *puVar4 = &___7__TSimpleValueLambdaChange_V__TArray_HV__TSizedDefaultAllocator__0CA_______6B_;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[6] = 0;
    puVar4[0xb] = 0;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar4 + 1),param_1);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar4 + 3),param_2);
  local_78 = puVar4[6];
  uVar2 = puVar4[7];
  local_68 = puVar4[8];
  uStack_60 = puVar4[9];
  uVar1 = puVar4[10];
  plStack_50 = (longlong *)puVar4[0xb];
  puVar4[6] = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshGroupPaintTool::EmitFrozenGroupsChange'::__l5::<lambda_1>,void,UObject_*,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,bool>
              ::Call;
  puVar4[7] = uStack_70;
  *(undefined4 *)(puVar4 + 8) = 0x52978de0;
  *(undefined4 *)((longlong)puVar4 + 0x44) = 1;
  puVar4[9] = this;
  *(undefined4 *)(puVar4 + 10) = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar4 + 0x54) = local_58._4_4_;
  *(undefined4 *)(puVar4 + 0xb) = 0;
  *(undefined4 *)((longlong)puVar4 + 0x5c) = 0;
  local_58 = uVar1;
  uStack_70 = uVar2;
  if (local_78 != 0) {
    plVar6 = &local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar6 = plStack_50;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  lVar5 = (**(code **)(*(longlong *)this + 0x2d8))(this);
  local_88[0] = puVar4;
  (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x20))(lVar5 + 0x28,this,local_88,param_3);
  return;
}

// EndChange @ 14ccf88f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMeshGroupPaintTool::EndChange(UMeshGroupPaintTool *this)

{
  undefined1 *puVar1;
  FDynamicMeshGroupEditBuilder *pFVar2;
  void *pvVar3;
  FDynamicMeshGroupEdit *pFVar4;
  FPolygroupSet *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  FMeshPolygroupChange *pFVar10;
  FMeshPolygroupChange *pFVar11;
  longlong lVar12;
  FText *pFVar13;
  UInteractiveToolManager *pUVar14;
  longlong *plVar15;
  FMeshPolygroupChange *pFVar16;
  undefined1 auStack_a8 [32];
  TUniquePtr<FDynamicMeshGroupEdit,TDefaultDelete<FDynamicMeshGroupEdit>_> local_88;
  FMeshPolygroupChange *local_80;
  undefined8 local_78;
  FText local_70;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (((this->ActiveGroupEditBuilder).Ptr == (FDynamicMeshGroupEditBuilder *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveGroupEditBuilder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshGroupPaintTool.cpp"
                         ,0x540,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar2 = (this->ActiveGroupEditBuilder).Ptr;
  pFVar11 = (FMeshPolygroupChange *)0x0;
  local_88.Ptr = (pFVar2->Edit).Ptr;
  (pFVar2->Edit).Ptr = (FDynamicMeshGroupEdit *)0x0;
  pFVar2 = (this->ActiveGroupEditBuilder).Ptr;
  (this->ActiveGroupEditBuilder).Ptr = (FDynamicMeshGroupEditBuilder *)0x0;
  if (pFVar2 != (FDynamicMeshGroupEditBuilder *)0x0) {
    *(undefined4 *)&(pFVar2->SavedIndexMap).field_0x48 = 0;
    pvVar3 = *(void **)&(pFVar2->SavedIndexMap).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar2->SavedIndexMap);
    pFVar4 = (pFVar2->Edit).Ptr;
    if (pFVar4 != (FDynamicMeshGroupEdit *)0x0) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
    pFVar5 = (pFVar2->PolygroupSet).Ptr;
    if (pFVar5 != (FPolygroupSet *)0x0) {
      (*(code *)pFVar5[-1].PolygroupAttrib)(&pFVar5[-1].PolygroupAttrib);
    }
    ::operator_delete(pFVar2,0x60);
  }
  pFVar10 = ::operator_new(0x70);
  pFVar16 = pFVar11;
  if (pFVar10 != (FMeshPolygroupChange *)0x0) {
    *(undefined8 *)pFVar10 = 0;
    *(undefined8 *)&pFVar10->field_0x8 = 0;
    *(undefined8 *)&pFVar10->field_0x10 = 0;
    *(undefined8 *)&pFVar10->field_0x18 = 0;
    *(undefined8 *)&pFVar10->field_0x20 = 0;
    *(undefined8 *)&pFVar10->field_0x28 = 0;
    *(undefined8 *)&pFVar10->field_0x30 = 0;
    *(undefined8 *)&pFVar10->field_0x38 = 0;
    (pFVar10->GroupEdit).Ptr = (FDynamicMeshGroupEdit *)0x0;
    *(undefined8 *)&pFVar10->field_0x48 = 0;
    *(undefined8 *)(pFVar10 + 1) = 0;
    *(undefined8 *)&pFVar10[1].field_0x8 = 0;
    *(undefined8 *)&pFVar10[1].field_0x10 = 0;
    *(undefined8 *)&pFVar10[1].field_0x18 = 0;
    *(undefined ***)pFVar10 = &___7__TWrappedToolCommandChange_VFMeshPolygroupChange____6B_;
    pFVar16 = pFVar10;
  }
  pFVar10 = ::operator_new(0x50);
  if (pFVar10 != (FMeshPolygroupChange *)0x0) {
    pFVar11 = FMeshPolygroupChange::FMeshPolygroupChange(pFVar10,&local_88);
  }
  puVar1 = &pFVar16->field_0x8;
  if ((undefined8 *)puVar1 == &local_78) {
    if (pFVar11 == (FMeshPolygroupChange *)0x0) goto LAB_14ccf8a53;
    lVar12 = *(longlong *)pFVar11;
  }
  else {
    pFVar10 = *(FMeshPolygroupChange **)puVar1;
    *(FMeshPolygroupChange **)puVar1 = pFVar11;
    if (pFVar10 == (FMeshPolygroupChange *)0x0) goto LAB_14ccf8a53;
    lVar12 = *(longlong *)pFVar10;
    pFVar11 = pFVar10;
  }
  (**(code **)(lVar12 + 0x48))(pFVar11,1);
LAB_14ccf8a53:
  local_58 = *(longlong *)&pFVar16->field_0x10;
  uVar8 = *(undefined8 *)&pFVar16->field_0x18;
  local_48 = *(longlong *)&pFVar16->field_0x20;
  uStack_40 = *(undefined8 *)&pFVar16->field_0x28;
  uVar7 = *(undefined8 *)&pFVar16->field_0x30;
  plStack_30 = *(longlong **)&pFVar16->field_0x38;
  *(code **)&pFVar16->field_0x10 =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshGroupPaintTool::EndChange'::__l2::<lambda_1>,void,bool>::Call;
  *(undefined8 *)&pFVar16->field_0x18 = uStack_50;
  *(undefined4 *)&pFVar16->field_0x20 = 0x52978e20;
  *(undefined4 *)&pFVar16->field_0x24 = 1;
  *(UMeshGroupPaintTool **)&pFVar16->field_0x28 = this;
  *(undefined4 *)&pFVar16->field_0x30 = (undefined4)local_38;
  *(undefined4 *)&pFVar16->field_0x34 = local_38._4_4_;
  *(undefined4 *)&pFVar16->field_0x38 = 0;
  *(undefined4 *)&pFVar16->field_0x3c = 0;
  local_38 = uVar7;
  uStack_50 = uVar8;
  if (local_58 != 0) {
    plVar15 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar15 = plStack_30;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  lVar12 = (**(code **)(*(longlong *)this + 0x2d8))(this);
  pcVar6 = *(code **)(*(longlong *)(lVar12 + 0x28) + 0x20);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_70,L"UMeshGroupPaintTool",L"GroupPaintChange",L"Group Stroke");
  local_80 = pFVar16;
  (*pcVar6)(lVar12 + 0x28,(this->DynamicMeshComponent).field0_0x0.DebugPtr,&local_80,pFVar13);
  if (local_70.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
  }
  pUVar14 = (UInteractiveToolManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  UE::TransactionUtil::FLongTransactionTracker::Close
            ((FLongTransactionTracker *)&this->field_0xc74,pUVar14);
  this->bDrawGroupsDataValid = false;
  if (local_88.Ptr != (FDynamicMeshGroupEdit *)0x0) {
    (**(code **)(local_88.Ptr)->_padding_)(local_88.Ptr,1);
  }
  return;
}

// FindHitSculptMeshTriangleConst @ 14ccfac50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UMeshGroupPaintTool::FindHitSculptMeshTriangleConst(UMeshGroupPaintTool *this,TRay<double> *param_1)

{
  FDynamicMeshOctree3 *this_00;
  EMeshGroupPaintInteractionType EVar1;
  int iVar2;
  double dVar3;
  longlong *plVar4;
  FSparseDynamicOctree3 *local_res8;
  FSparseDynamicOctree3 *local_res18;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  TVector<double>_u_0 local_d8;
  code *local_c0;
  undefined1 *local_b8;
  code *local_b0;
  FSparseDynamicOctree3 **local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined8 local_48;
  TVector<double> local_38;
  
  EVar1 = ((this->FilterProperties).field0_0x0.DebugPtr)->SubToolType;
  if ((EVar1 != Brush) && (1 < (byte)(EVar1 - Fill))) {
    return -1;
  }
  this_00 = &this->Octree;
  local_res8 = (FSparseDynamicOctree3 *)this_00;
  if (*(char *)(*(longlong *)&this->field_0x128 + 0xd8) == '\0') {
    dVar3 = (double)(**(code **)(*(longlong *)this + 0x438))();
    local_58 = 0x42b40000;
    local_98 = 0.0;
    dStack_90 = 0.0;
    local_88 = 0.0;
    local_78 = 0;
    uStack_70 = 0;
    local_48 = __real_3ff0000000000000;
    local_68 = ___xmm_3ff00000000000000000000000000000;
    uStack_60 = _UNK_15061cbc8;
    local_54 = 0x42c80000;
    local_50 = 0x3f800000;
    local_4c = 0;
    plVar4 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x398))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_98);
    local_d8._s_0.Z = local_88;
    local_d8._s_0.X = local_98;
    local_d8._s_0.Y = dStack_90;
    UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
              ((TTransformSRT3<double> *)&this->field_0x1f0,&local_38,
               (TVector<double> *)&local_d8._s_0);
    local_d8._s_0.Z = (double)&local_38;
    local_e8._8_8_ = &local_d8;
    local_e8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UMeshGroupPaintTool::FindHitSculptMeshTriangleConst'::__l10::<lambda_1>,bool,int>
         ::Call;
    local_f8._0_8_ = local_e8;
    local_b8 = local_f8;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
               ::Call;
    local_a8 = &local_res8;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
               ::Call;
    local_f8._8_8_ = this_00;
    local_d8._s_0.X = (double)this;
    local_d8._s_0.Y = dVar3;
    iVar2 = UE::Geometry::FSparseDynamicOctree3::FindNearestHitObject
                      ((FSparseDynamicOctree3 *)this_00,param_1,
                       (TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *)
                       &local_b0,
                       (TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *)&local_c0
                       ,__real_7fefffffffffffff);
  }
  else {
    local_f8._8_8_ = &local_res8;
    local_f8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
         ::Call;
    local_e8._8_8_ = &local_res18;
    local_e8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
         ::Call;
    local_res18 = (FSparseDynamicOctree3 *)this_00;
    iVar2 = UE::Geometry::FSparseDynamicOctree3::FindNearestHitObject
                      ((FSparseDynamicOctree3 *)this_00,param_1,
                       (TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *)local_e8
                       ,(TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *)local_f8
                       ,__real_7fefffffffffffff);
  }
  return iVar2;
}

// FindHitTargetMeshTriangleConst @ 14ccfb240

int __thiscall
UMeshGroupPaintTool::FindHitTargetMeshTriangleConst(UMeshGroupPaintTool *this,TRay<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshGroupPaintTool.cpp"
                     ,0x376,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return -1;
}

// FloodFillCurrentGroupAction @ 14ccfb6c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMeshGroupPaintTool::FloodFillCurrentGroupAction(UMeshGroupPaintTool *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  int iVar2;
  longlong lVar3;
  FPolygroupSet *pFVar4;
  FDynamicMesh3 *pFVar5;
  FScriptContainerElement *pFVar6;
  FDynamicMeshGroupEditBuilder *pFVar7;
  code *pcVar8;
  longlong lVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar13;
  longlong *plVar14;
  int iVar15;
  FDynamicMeshAttributeSet *this_01;
  uint uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  int local_res10;
  uint local_68 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_60;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  
  BeginChange(this);
  iVar2 = ((this->FilterProperties).field0_0x0.DebugPtr)->SetGroup;
  local_res10 = iVar2;
  lVar12 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  this_00 = &this->TempROIBuffer;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_00,0,No);
  uVar17 = 0;
  uVar19 = *(int *)(lVar12 + 0x140) * 0x200 + *(int *)(lVar12 + 0x144);
  if ((uVar19 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar12 + 0x148) - 1U))) {
    uVar17 = 1;
    uVar16 = 1;
    if ((int)uVar19 < 2) goto joined_r0x00014ccfb792;
    do {
      lVar9 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      lVar3 = (*(undefined8 **)(lVar12 + 0x148))[uVar17 >> 9];
      if ((*(short *)(lVar9 + lVar3) != 0) && (*(short *)(lVar9 + lVar3) != -1)) break;
      uVar16 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
    } while ((int)uVar16 < (int)uVar19);
  }
  uVar16 = (uint)uVar17;
joined_r0x00014ccfb792:
  if (uVar16 == uVar19) {
    local_60.ArrayNum = (this->TempROIBuffer).ArrayNum;
    lVar12 = (longlong)local_60.ArrayNum;
    pFVar7 = (this->ActiveGroupEditBuilder).Ptr;
    pFVar6 = (this->TempROIBuffer).AllocatorInstance.Data;
    local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_60.ArrayNum == 0) {
      local_60.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60.ArrayNum,0,&local_60.AllocatorInstance,local_60.ArrayNum,
                 &local_60.ArrayMax);
      memcpy(local_60.AllocatorInstance.Data,pFVar6,lVar12 << 2);
    }
    FDynamicMeshGroupEditBuilder::SaveTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>
              (pFVar7,&local_60);
    iVar11 = local_res10;
    pFVar18 = (this->TempROIBuffer).AllocatorInstance.Data;
    iVar2 = (this->TempROIBuffer).ArrayNum;
    pFVar6 = pFVar18 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->TempROIBuffer).ArrayNum != iVar2) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar18 == pFVar6) break;
      uVar19 = *(uint *)pFVar18;
      pFVar4 = (this->ActiveGroupSet).Ptr;
      lVar12 = (**(code **)(*(longlong *)this + 0x440))(this);
      if ((-1 < (int)uVar19) &&
         ((int)uVar19 < *(int *)(lVar12 + 0x140) * 0x200 + *(int *)(lVar12 + 0x144))) {
        uVar17 = (ulonglong)(uVar19 & 0x1ff);
        lVar3 = (ulonglong)(uVar19 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar12 + 0x148) + (ulonglong)(uVar19 >> 9) * 8) +
                               uVar17 * 2) - 1U) < 0xfffe) {
          if (pFVar4->PolygroupAttrib == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
            if (*(char *)(lVar12 + 0x1a8) != '\0') {
              *(int *)(*(longlong *)(*(longlong *)(lVar12 + 0x198) + lVar3) + uVar17 * 4) = iVar11;
              iVar15 = iVar11 + 1;
              if (iVar11 + 1 < *(int *)(lVar12 + 0x1b0)) {
                iVar15 = *(int *)(lVar12 + 0x1b0);
              }
              *(int *)(lVar12 + 0x1b0) = iVar15;
            }
          }
          else {
            this_01 = (FDynamicMeshAttributeSet *)0x0;
            if (*(FDynamicMeshAttributeSet **)(lVar12 + 0x208) != (FDynamicMeshAttributeSet *)0x0) {
              this_01 = *(FDynamicMeshAttributeSet **)(lVar12 + 0x208);
            }
            pTVar13 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer
                                (this_01,pFVar4->GroupLayerIndex);
            *(int *)(*(longlong *)(*(longlong *)&pTVar13->field_0x20 + lVar3) + uVar17 * 4) = iVar11
            ;
          }
        }
      }
      iVar15 = iVar11 + 1;
      if (iVar11 + 1 < pFVar4->MaxGroupID) {
        iVar15 = pFVar4->MaxGroupID;
      }
      pFVar18 = pFVar18 + 4;
      pFVar4->MaxGroupID = iVar15;
    }
    local_50.ArrayNum = (this->TempROIBuffer).ArrayNum;
    lVar12 = (longlong)local_50.ArrayNum;
    pFVar7 = (this->ActiveGroupEditBuilder).Ptr;
    pFVar6 = (this->TempROIBuffer).AllocatorInstance.Data;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_50.ArrayNum == 0) {
      local_50.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_50.ArrayNum,0,&local_50.AllocatorInstance,local_50.ArrayNum,
                 &local_50.ArrayMax);
      memcpy(local_50.AllocatorInstance.Data,pFVar6,lVar12 << 2);
    }
    FDynamicMeshGroupEditBuilder::SaveTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>
              (pFVar7,&local_50);
    UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
              ((this->DynamicMeshComponent).field0_0x0.DebugPtr,&this->TempROIBuffer,VertexColors);
    plVar14 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
    (**(code **)(*plVar14 + 0x368))(plVar14);
    EndChange(this);
    return;
  }
  do {
    pFVar4 = (this->ActiveGroupSet).Ptr;
    uVar16 = (uint)uVar17;
    pTVar13 = pFVar4->PolygroupAttrib;
    if (pTVar13 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      pFVar5 = pFVar4->Mesh;
      if ((pFVar5->TriangleGroups).bIsSet == false) {
        iVar11 = -1;
      }
      else {
        if ((-1 < (int)uVar16) &&
           ((int)uVar16 <
            (int)((pFVar5->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar5->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          lVar3 = (uVar17 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar5->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + lVar3) + (ulonglong)(uVar16 & 0x1ff) * 2) - 1U) < 0xfffe)
          {
            iVar11 = *(int *)(*(longlong *)
                               ((pFVar5->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                               lVar3) + (ulonglong)(uVar16 & 0x1ff) * 4);
            goto LAB_14ccfb83d;
          }
        }
        iVar11 = 0;
      }
    }
    else {
      iVar11 = *(int *)(*(longlong *)(*(longlong *)&pTVar13->field_0x20 + (uVar17 >> 9) * 8) +
                       (ulonglong)(uVar16 & 0x1ff) * 4);
    }
LAB_14ccfb83d:
    local_68[0] = uVar16;
    if ((iVar11 == 0) && (iVar2 != 0)) {
      pFVar18 = (this->FrozenGroups).AllocatorInstance.Data;
      pFVar6 = pFVar18 + (longlong)(this->FrozenGroups).ArrayNum * 4;
      for (; pFVar18 != pFVar6; pFVar18 = pFVar18 + 4) {
        if (*(int *)pFVar18 == 0) goto LAB_14ccfb918;
      }
      pFVar6 = (this_00->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)local_68) &&
          ((FScriptContainerElement *)local_68 <
           pFVar6 + (longlong)(this->TempROIBuffer).ArrayMax * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = (this->TempROIBuffer).ArrayNum;
      piVar1 = &(this->TempROIBuffer).ArrayMax;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&this_00->AllocatorInstance,piVar1);
      }
      (this->TempROIBuffer).ArrayNum = iVar11 + 1;
      *(uint *)((this_00->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_68[0];
    }
LAB_14ccfb918:
    uVar16 = uVar16 + 1;
    uVar17 = (ulonglong)uVar16;
    if ((int)uVar19 <= (int)uVar16) goto joined_r0x00014ccfb792;
    while( true ) {
      lVar3 = (uVar17 >> 9) * 8;
      lVar9 = (ulonglong)((uint)uVar17 & 0x1ff) * 2;
      if ((*(short *)(lVar9 + *(longlong *)(*(longlong *)(lVar12 + 0x148) + lVar3)) != 0) &&
         (*(short *)(lVar9 + *(longlong *)(lVar3 + *(longlong *)(lVar12 + 0x148))) != -1)) break;
      uVar16 = (uint)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
      if ((int)uVar19 <= (int)uVar16) goto joined_r0x00014ccfb792;
    }
  } while( true );
}

// FreezeOtherGroups @ 14ccfbbd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMeshGroupPaintTool::FreezeOtherGroups(UMeshGroupPaintTool *this,int param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *this_01;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FPolygroupSet *pFVar4;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  FDynamicMesh3 *pFVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  FText *pFVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  int local_res8 [2];
  uint local_58 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  FText local_40;
  
  this_00 = &this->FrozenGroups;
  local_50.ArrayNum = (this->FrozenGroups).ArrayNum;
  lVar14 = (longlong)local_50.ArrayNum;
  pFVar2 = (this_00->AllocatorInstance).Data;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_50.ArrayNum == 0) {
    local_50.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_50.ArrayNum,0,&local_50.AllocatorInstance,local_50.ArrayNum,
               &local_50.ArrayMax);
    memcpy(local_50.AllocatorInstance.Data,pFVar2,lVar14 << 2);
  }
  (this->FrozenGroups).ArrayNum = 0;
  if ((this->FrozenGroups).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&this_00->AllocatorInstance,0,&(this->FrozenGroups).ArrayMax);
  }
  lVar14 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  this_01 = &this->TempROIBuffer;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_01,0,No);
  uVar16 = *(int *)(lVar14 + 0x140) * 0x200 + *(int *)(lVar14 + 0x144);
  uVar15 = 0;
  if ((uVar16 != 0) &&
     (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar14 + 0x148) - 1U))) {
    uVar15 = 1;
    uVar13 = 1;
    if ((int)uVar16 < 2) goto joined_r0x00014ccfbd23;
    do {
      lVar8 = (ulonglong)((uint)uVar15 & 0x1ff) * 2;
      lVar3 = (*(undefined8 **)(lVar14 + 0x148))[uVar15 >> 9];
      if ((*(short *)(lVar8 + lVar3) != 0) && (*(short *)(lVar8 + lVar3) != -1)) break;
      uVar13 = (uint)uVar15 + 1;
      uVar15 = (ulonglong)uVar13;
    } while ((int)uVar13 < (int)uVar16);
  }
  uVar13 = (uint)uVar15;
joined_r0x00014ccfbd23:
  if (uVar13 == uVar16) {
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_40,L"UMeshGroupPaintTool",L"FreezeOtherGroups",
                         L"Freeze Other Groups");
    EmitFrozenGroupsChange(this,&local_50,this_00,pFVar11);
    if (local_40.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
    }
    UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
              ((this->DynamicMeshComponent).field0_0x0.DebugPtr,this_01,VertexColors);
    plVar12 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
    (**(code **)(*plVar12 + 0x368))(plVar12);
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
    return;
  }
  do {
    pFVar4 = (this->ActiveGroupSet).Ptr;
    uVar13 = (uint)uVar15;
    pTVar5 = pFVar4->PolygroupAttrib;
    if (pTVar5 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      pFVar6 = pFVar4->Mesh;
      if ((pFVar6->TriangleGroups).bIsSet == false) {
        iVar10 = -1;
      }
      else {
        if ((-1 < (int)uVar13) &&
           ((int)uVar13 <
            (int)((pFVar6->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar6->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          lVar3 = (uVar15 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar6->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + lVar3) + (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) < 0xfffe)
          {
            iVar10 = *(int *)(*(longlong *)
                               ((pFVar6->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                               lVar3) + (ulonglong)(uVar13 & 0x1ff) * 4);
            goto LAB_14ccfbde0;
          }
        }
        iVar10 = 0;
      }
    }
    else {
      iVar10 = *(int *)(*(longlong *)(*(longlong *)&pTVar5->field_0x20 + (uVar15 >> 9) * 8) +
                       (ulonglong)(uVar13 & 0x1ff) * 4);
    }
LAB_14ccfbde0:
    local_58[0] = uVar13;
    if ((iVar10 != 0) && (iVar10 != param_1)) {
      if (pTVar5 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        pFVar6 = pFVar4->Mesh;
        if ((pFVar6->TriangleGroups).bIsSet == false) {
          local_res8[0] = -1;
        }
        else {
          if ((-1 < (int)uVar13) &&
             ((int)uVar13 <
              (int)((pFVar6->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar6->TriangleRefCounts).RefCounts.CurBlockUsed))) {
            lVar3 = (uVar15 >> 9) * 8;
            if ((ushort)(*(short *)(*(longlong *)
                                     ((pFVar6->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                      .Data + lVar3) + (ulonglong)(uVar13 & 0x1ff) * 2) - 1U) <
                0xfffe) {
              local_res8[0] =
                   *(int *)(*(longlong *)
                             ((pFVar6->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                             lVar3) + (ulonglong)(uVar13 & 0x1ff) * 4);
              goto LAB_14ccfbe74;
            }
          }
          local_res8[0] = 0;
        }
      }
      else {
        local_res8[0] =
             *(int *)(*(longlong *)(*(longlong *)&pTVar5->field_0x20 + (uVar15 >> 9) * 8) +
                     (ulonglong)(uVar13 & 0x1ff) * 4);
      }
LAB_14ccfbe74:
      TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int>(this_00,local_res8);
      pFVar2 = (this_01->AllocatorInstance).Data;
      if (((pFVar2 <= (FScriptContainerElement *)local_58) &&
          ((FScriptContainerElement *)local_58 <
           pFVar2 + (longlong)(this->TempROIBuffer).ArrayMax * 4)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar10 = (this->TempROIBuffer).ArrayNum;
      piVar1 = &(this->TempROIBuffer).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&this_01->AllocatorInstance,piVar1);
      }
      (this->TempROIBuffer).ArrayNum = iVar10 + 1;
      *(uint *)((this_01->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_58[0];
    }
    uVar13 = uVar13 + 1;
    uVar15 = (ulonglong)uVar13;
    if ((int)uVar16 <= (int)uVar13) goto joined_r0x00014ccfbd23;
    while( true ) {
      lVar3 = (uVar15 >> 9) * 8;
      lVar8 = (ulonglong)((uint)uVar15 & 0x1ff) * 2;
      if ((*(short *)(lVar8 + *(longlong *)(lVar3 + *(longlong *)(lVar14 + 0x148))) != 0) &&
         (*(short *)(lVar8 + *(longlong *)(*(longlong *)(lVar14 + 0x148) + lVar3)) != -1)) break;
      uVar13 = (uint)uVar15 + 1;
      uVar15 = (ulonglong)uVar13;
      if ((int)uVar16 <= (int)uVar13) goto joined_r0x00014ccfbd23;
    }
  } while( true );
}

// GetActiveBrushOp @ 14ccfc750

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> * __thiscall
UMeshGroupPaintTool::GetActiveBrushOp(UMeshGroupPaintTool *this)

{
  char cVar1;
  TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> *pTVar2;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x570))();
  pTVar2 = (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> *)&this->field_0x420;
  if (cVar1 != '\0') {
    pTVar2 = (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> *)
             &this->field_0x430;
  }
  return pTVar2;
}

// GetBaseMesh @ 14ccfdcc0

FDynamicMesh3 * __thiscall UMeshGroupPaintTool::GetBaseMesh(UMeshGroupPaintTool *this)

{
  code *pcVar1;
  bool bVar2;
  FDynamicMesh3 *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\MeshGroupPaintTool.h"
                     ,0x168,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDynamicMesh3 *)(*pcVar1)();
    return pFVar3;
  }
  return (FDynamicMesh3 *)0x0;
}

// GetBaseMesh @ 14ccfdd00

FDynamicMesh3 * __thiscall UMeshGroupPaintTool::GetBaseMesh(UMeshGroupPaintTool *this)

{
  code *pcVar1;
  bool bVar2;
  FDynamicMesh3 *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\MeshGroupPaintTool.h"
                     ,0x169,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDynamicMesh3 *)(*pcVar1)();
    return pFVar3;
  }
  return (FDynamicMesh3 *)0x0;
}

// GetColorForGroup @ 14ccfe1e0

FColor __thiscall UMeshGroupPaintTool::GetColorForGroup(UMeshGroupPaintTool *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  byte bVar4;
  undefined4 in_register_00000014;
  byte *pbVar5;
  int in_R8D;
  uint uVar6;
  
  pbVar5 = (byte *)CONCAT44(in_register_00000014,param_1);
  UE::Geometry::LinearColors::SelectFColor(param_1);
  pFVar3 = (this->FrozenGroups).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(this->FrozenGroups).ArrayNum * 4;
  if (pFVar3 != pFVar1) {
    while (*(int *)pFVar3 != in_R8D) {
      pFVar3 = pFVar3 + 4;
      if (pFVar3 == pFVar1) {
        return (FColor)(FColor_u_0)param_1;
      }
    }
    uVar2 = ((uint)*pbVar5 + (uint)pbVar5[2] + (uint)pbVar5[1]) / 3;
    uVar6 = 0xff;
    if (uVar2 < 0xff) {
      uVar6 = uVar2;
    }
    bVar4 = 0;
    if (uVar6 != 0) {
      bVar4 = (byte)uVar6;
    }
    *pbVar5 = bVar4;
    pbVar5[1] = bVar4;
    pbVar5[2] = bVar4;
  }
  return (FColor)(FColor_u_0)param_1;
}

// GetPrivateStaticClass @ 14ccffe40

UClass * __cdecl UMeshGroupPaintTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshGroupPaintTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshGroupPaintTool",
               &Z_Registration_Info_UClass_UMeshGroupPaintTool.InnerSingleton,
               StaticRegisterNativesUMeshGroupPaintTool,0x10c0,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshGroupPaintTool>,
               InternalVTableHelperCtorCaller<UMeshGroupPaintTool>,local_res8,
               UMeshSculptToolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshGroupPaintTool.InnerSingleton;
}

// GetSculptMeshComponent @ 14cd02350

UBaseDynamicMeshComponent * __thiscall
UMeshGroupPaintTool::GetSculptMeshComponent(UMeshGroupPaintTool *this)

{
  return (UBaseDynamicMeshComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr;
}

// GrowCurrentGroupAction @ 14cd02fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMeshGroupPaintTool::GrowCurrentGroupAction(UMeshGroupPaintTool *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  uint uVar1;
  FDynamicMeshGroupEditBuilder *pFVar2;
  FPolygroupSet *pFVar3;
  undefined1 auVar4 [8];
  longlong lVar5;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  undefined ***pppuVar10;
  ulonglong uVar11;
  FDynamicMeshAttributeSet *this_01;
  FScriptContainerElement *pFVar12;
  undefined1 auStackY_198 [32];
  undefined1 local_158 [8];
  undefined8 local_150;
  undefined1 local_148 [4];
  int local_144;
  uint local_140;
  code *local_138;
  undefined1 *local_130;
  FMeshFaceSelection local_128;
  code *local_c8 [2];
  undefined **local_b8;
  UMeshGroupPaintTool *local_b0;
  undefined ***local_a0;
  FMeshFaceSelection local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  BeginChange(this);
  local_144 = ((this->FilterProperties).field0_0x0.DebugPtr)->SetGroup;
  local_128.Mesh =
       (FDynamicMesh3 *)
       (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  local_150 = &local_144;
  local_128.Selected.Elements._0_8_ = 0;
  local_130 = local_158;
  local_128.Selected.Elements._8_8_ = 0;
  local_138 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshGroupPaintTool::GrowCurrentGroupAction'::__l2::<lambda_1>,bool,int>
              ::Call;
  local_128.Selected.Elements._32_8_ = 0;
  local_128.Selected.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_128.Selected.Elements._48_8_ = _UNK_150631d98;
  local_128.Selected.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_128.Selected.HashSize = 0;
  local_158 = (undefined1  [8])this;
  UE::Geometry::FMeshFaceSelection::Select(&local_128,(TFunctionRef<bool___cdecl(int)> *)&local_138)
  ;
  local_98.Mesh = local_128.Mesh;
  local_98.Selected.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_98.Selected.Elements._48_8_ = _UNK_150631d98;
  local_98.Selected.Elements._0_8_ = 0;
  local_98.Selected.Elements._8_8_ = 0;
  local_98.Selected.Elements._32_8_ = 0;
  local_98.Selected.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.Selected.HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&local_98.Selected,&local_128.Selected);
  local_a0 = (undefined ***)0x0;
  local_b8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshGroupPaintTool::GrowCurrentGroupAction'::`2'::<lambda_2>,1,0>
              ::_vftable_;
  local_c8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshGroupPaintTool::GrowCurrentGroupAction'::__l2::<lambda_2>,bool,int>
                ::Call;
  local_b0 = this;
  UE::Geometry::FMeshFaceSelection::ExpandToOneRingNeighbours
            (&local_98,(TUniqueFunction<bool___cdecl(int)> *)local_c8);
  if (local_c8[0] != (code *)0x0) {
    pppuVar10 = &local_b8;
    if (local_a0 != (undefined ***)0x0) {
      pppuVar10 = local_a0;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  this_00 = &this->TempROIBuffer;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_00,0,No);
  UE::Geometry::FMeshFaceSelection::
  SetDifference<UE::Geometry::FMeshFaceSelection,TArray<int,TSizedDefaultAllocator<32>_>_>
            (&local_98,&local_128,this_00);
  iVar9 = (this->TempROIBuffer).ArrayNum;
  pFVar2 = (this->ActiveGroupEditBuilder).Ptr;
  pFVar12 = (this_00->AllocatorInstance).Data;
  local_158 = (undefined1  [8])0x0;
  local_150._0_4_ = iVar9;
  if (iVar9 == 0) {
    local_150._0_4_ = 0;
    local_150._4_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar9,0,(ForAnyElementType *)local_158,iVar9,(int *)((longlong)&local_150 + 4));
    memcpy((void *)local_158,pFVar12,(longlong)iVar9 << 2);
  }
  FDynamicMeshGroupEditBuilder::SaveTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>
            (pFVar2,(TArray<int,TSizedDefaultAllocator<32>_> *)local_158);
  local_140 = (this->TempROIBuffer).ArrayNum;
  uVar11 = (ulonglong)(int)local_140;
  pFVar12 = (this_00->AllocatorInstance).Data;
  local_158 = (undefined1  [8])(pFVar12 + uVar11 * 4);
  while( true ) {
    auVar4 = local_158;
    if ((this->TempROIBuffer).ArrayNum != (int)uVar11) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_148);
    }
    if ((undefined1  [8])pFVar12 == auVar4) break;
    uVar1 = *(uint *)pFVar12;
    pFVar3 = (this->ActiveGroupSet).Ptr;
    lVar5 = (**(code **)(*(longlong *)this + 0x440))(this);
    iVar9 = local_144;
    if (((-1 < (int)uVar1) &&
        ((int)uVar1 < *(int *)(lVar5 + 0x140) * 0x200 + *(int *)(lVar5 + 0x144))) &&
       (uVar11 = (ulonglong)(uVar1 >> 9),
       (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar5 + 0x148) + uVar11 * 8) +
                          (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      if (pFVar3->PolygroupAttrib == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        if (*(char *)(lVar5 + 0x1a8) != '\0') {
          *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x198) + uVar11 * 8) +
                  (ulonglong)(uVar1 & 0x1ff) * 4) = local_144;
          iVar8 = local_144 + 1;
          if (local_144 + 1 < *(int *)(lVar5 + 0x1b0)) {
            iVar8 = *(int *)(lVar5 + 0x1b0);
          }
          *(int *)(lVar5 + 0x1b0) = iVar8;
        }
      }
      else {
        this_01 = (FDynamicMeshAttributeSet *)0x0;
        if (*(FDynamicMeshAttributeSet **)(lVar5 + 0x208) != (FDynamicMeshAttributeSet *)0x0) {
          this_01 = *(FDynamicMeshAttributeSet **)(lVar5 + 0x208);
        }
        pTVar6 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer
                           (this_01,pFVar3->GroupLayerIndex);
        *(int *)(*(longlong *)(*(longlong *)&pTVar6->field_0x20 + uVar11 * 8) +
                (ulonglong)(uVar1 & 0x1ff) * 4) = iVar9;
      }
    }
    iVar9 = iVar9 + 1;
    if (iVar9 < pFVar3->MaxGroupID) {
      iVar9 = pFVar3->MaxGroupID;
    }
    pFVar12 = pFVar12 + 4;
    pFVar3->MaxGroupID = iVar9;
    uVar11 = (ulonglong)local_140;
  }
  iVar9 = (this->TempROIBuffer).ArrayNum;
  pFVar2 = (this->ActiveGroupEditBuilder).Ptr;
  pFVar12 = (this_00->AllocatorInstance).Data;
  local_158 = (undefined1  [8])0x0;
  local_150._0_4_ = iVar9;
  if (iVar9 == 0) {
    local_150._0_4_ = 0;
    local_150._4_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar9,0,(ForAnyElementType *)local_158,iVar9,(int *)((longlong)&local_150 + 4));
    memcpy((void *)local_158,pFVar12,(longlong)iVar9 << 2);
  }
  FDynamicMeshGroupEditBuilder::SaveTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>
            (pFVar2,(TArray<int,TSizedDefaultAllocator<32>_> *)local_158);
  UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
            ((this->DynamicMeshComponent).field0_0x0.DebugPtr,this_00,VertexColors);
  plVar7 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  (**(code **)(*plVar7 + 0x368))(plVar7);
  EndChange(this);
  local_98.Selected.HashSize = 0;
  if (local_98.Selected.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Selected.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98.Selected.Elements);
  local_128.Selected.HashSize = 0;
  if (local_128.Selected.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.Selected.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.Selected.Elements);
  return;
}

// HasAccept @ 14cd03440

bool __thiscall UMeshGroupPaintTool::HasAccept(UMeshGroupPaintTool *this)

{
  return true;
}

// HasCancel @ 14cd034e0

bool __thiscall UMeshGroupPaintTool::HasCancel(UMeshGroupPaintTool *this)

{
  return true;
}

// HaveVisibilityFilter @ 14cd03830

bool __thiscall UMeshGroupPaintTool::HaveVisibilityFilter(UMeshGroupPaintTool *this)

{
  return ((this->FilterProperties).field0_0x0.DebugPtr)->VisibilityFilter != None;
}

// IncreaseBrushRadiusAction @ 14cd03b70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UMeshGroupPaintTool::IncreaseBrushRadiusAction(UMeshGroupPaintTool *this)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(longlong *)&this->field_0x128;
  if (*(char *)(lVar1 + 0xb4) == '\0') {
    fVar2 = 0.0;
    fVar3 = *(float *)(lVar1 + 0xb8) + __real_3ccccccd;
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(float *)(lVar1 + 0xb8) = fVar3;
  }
  else {
    fVar2 = *(float *)(lVar1 + 200);
    fVar3 = *(float *)(lVar1 + 0xc4);
    fVar4 = (fVar2 - fVar3) * ___real_3c4ccccd + *(float *)(lVar1 + 0xbc);
    if (fVar2 <= fVar4) {
      fVar4 = fVar2;
    }
    if (fVar4 <= fVar3) {
      fVar4 = fVar3;
    }
    *(float *)(lVar1 + 0xbc) = fVar4;
  }
  (**(code **)(*(longlong *)this + 0x340))(fVar2,*(undefined8 *)&this->field_0x128);
  (**(code **)(*(longlong *)this + 0x490))(this);
  ((this->FilterProperties).field0_0x0.DebugPtr)->BrushSize =
       *(float *)(*(longlong *)&this->field_0x128 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00014cd03c31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x340))(this,(this->FilterProperties).field0_0x0.DebugPtr);
  return;
}

// IncreaseBrushRadiusSmallStepAction @ 14cd03cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UMeshGroupPaintTool::IncreaseBrushRadiusSmallStepAction(UMeshGroupPaintTool *this)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = *(longlong *)&this->field_0x128;
  if (*(char *)(lVar1 + 0xb4) == '\0') {
    fVar2 = 0.0;
    fVar3 = *(float *)(lVar1 + 0xb8) + __real_3ba3d70a;
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    *(float *)(lVar1 + 0xb8) = fVar3;
  }
  else {
    fVar2 = *(float *)(lVar1 + 200);
    fVar3 = *(float *)(lVar1 + 0xc4);
    fVar4 = (fVar2 - fVar3) * ___real_3b23d70a + *(float *)(lVar1 + 0xbc);
    if (fVar2 <= fVar4) {
      fVar4 = fVar2;
    }
    if (fVar4 <= fVar3) {
      fVar4 = fVar3;
    }
    *(float *)(lVar1 + 0xbc) = fVar4;
  }
  (**(code **)(*(longlong *)this + 0x340))(fVar2,*(undefined8 *)&this->field_0x128);
  (**(code **)(*(longlong *)this + 0x490))(this);
  ((this->FilterProperties).field0_0x0.DebugPtr)->BrushSize =
       *(float *)(*(longlong *)&this->field_0x128 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x00014cd03db1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x340))(this,(this->FilterProperties).field0_0x0.DebugPtr);
  return;
}

// IsInBrushSubMode @ 14cd08680

bool __thiscall UMeshGroupPaintTool::IsInBrushSubMode(UMeshGroupPaintTool *this)

{
  EMeshGroupPaintInteractionType EVar1;
  
  EVar1 = ((this->FilterProperties).field0_0x0.DebugPtr)->SubToolType;
  if ((EVar1 != Brush) && (1 < (byte)(EVar1 - Fill))) {
    return false;
  }
  return true;
}

// OnBeginStroke @ 14cd0e530

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UMeshGroupPaintTool::OnBeginStroke(UMeshGroupPaintTool *this,TRay<double> *param_1)

{
  UGroupPaintBrushOpProps *pUVar1;
  UGroupEraseBrushOpProps *pUVar2;
  code *pcVar3;
  longlong *plVar4;
  char cVar5;
  FDateTime FVar6;
  double *pdVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  UpdateBrushPosition(this,param_1);
  pUVar1 = (this->PaintBrushOpProperties).field0_0x0.DebugPtr;
  if (pUVar1 != (UGroupPaintBrushOpProps *)0x0) {
    pUVar1->Group = ((this->FilterProperties).field0_0x0.DebugPtr)->SetGroup;
    ((this->PaintBrushOpProperties).field0_0x0.DebugPtr)->bOnlyPaintUngrouped =
         ((this->FilterProperties).field0_0x0.DebugPtr)->bOnlySetUngrouped;
  }
  pUVar2 = (this->EraseBrushOpProperties).field0_0x0.DebugPtr;
  if (pUVar2 != (UGroupEraseBrushOpProps *)0x0) {
    pUVar2->Group = ((this->FilterProperties).field0_0x0.DebugPtr)->EraseGroup;
    ((this->EraseBrushOpProperties).field0_0x0.DebugPtr)->bOnlyEraseCurrent =
         ((this->FilterProperties).field0_0x0.DebugPtr)->bOnlyEraseCurrent;
  }
  *(undefined8 *)&this->field_0x930 = *(undefined8 *)&this->field_0x490;
  *(undefined8 *)&this->field_0x938 = *(undefined8 *)&this->field_0x498;
  *(undefined8 *)&this->field_0x940 = *(undefined8 *)&this->field_0x4a0;
  *(undefined8 *)&this->field_0x948 = *(undefined8 *)&this->field_0x4a8;
  *(undefined8 *)&this->field_0x950 = *(undefined8 *)&this->field_0x4b0;
  *(undefined8 *)&this->field_0x958 = *(undefined8 *)&this->field_0x4b8;
  *(undefined8 *)&this->field_0x960 = *(undefined8 *)&this->field_0x4c0;
  *(undefined8 *)&this->field_0x968 = *(undefined8 *)&this->field_0x4c8;
  *(undefined8 *)&this->field_0x970 = *(undefined8 *)&this->field_0x4d0;
  *(undefined8 *)&this->field_0x978 = *(undefined8 *)&this->field_0x4d8;
  *(undefined8 *)&this->field_0x980 = *(undefined8 *)&this->field_0x4e0;
  *(undefined8 *)&this->field_0x988 = *(undefined8 *)&this->field_0x4e8;
  *(undefined8 *)&this->field_0x990 = *(undefined8 *)&this->field_0x4f0;
  *(undefined8 *)&this->field_0x998 = *(undefined8 *)&this->field_0x4f8;
  uVar9 = (**(code **)(*(longlong *)this + 0x4a0))(this);
  *(undefined8 *)&this->field_0x9a0 = uVar9;
  uVar9 = (**(code **)(*(longlong *)this + 0x4a8))(this);
  *(undefined8 *)&this->field_0x9a8 = uVar9;
  cVar5 = (**(code **)(*(longlong *)this + 0x578))(this);
  uVar9 = __real_3ff0000000000000;
  if (cVar5 != '\0') {
    uVar9 = __real_bff0000000000000;
  }
  *(undefined8 *)&this->field_0x9b8 = uVar9;
  uVar9 = (**(code **)(*(longlong *)this + 0x4c8))(this);
  *(undefined8 *)&this->field_0x9c0 = uVar9;
  pcVar3 = *(code **)(*(longlong *)this + 0x4b0);
  dVar10 = (double)(**(code **)(*(longlong *)this + 0x4c0))(this);
  dVar11 = (double)(*pcVar3)(this);
  *(double *)&this->field_0x9b0 = dVar10 * dVar11;
  FVar6 = FDateTime::Now();
  *(undefined8 *)&this->field_0xa40 = *(undefined8 *)FVar6.Ticks;
  dStack_40 = 0.0;
  dStack_38 = 0.0;
  local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_30 = (double)___xmm_3ff00000000000000000000000000000;
  dStack_28 = (double)_UNK_15061cbc8;
  pdVar7 = (double *)(**(code **)(*(longlong *)this + 0x5c8))(this);
  local_58 = *pdVar7;
  dStack_50 = pdVar7[1];
  local_48 = pdVar7[2];
  dStack_40 = pdVar7[3];
  dStack_38 = pdVar7[4];
  dStack_30 = pdVar7[5];
  dStack_28 = pdVar7[6];
  puVar8 = (undefined8 *)(**(code **)(*(longlong *)this + 0x478))(this);
  (**(code **)(*(longlong *)*puVar8 + 8))((longlong *)*puVar8,&local_58);
  plVar4 = (longlong *)*puVar8;
  pcVar3 = *(code **)(*plVar4 + 0x10);
  uVar9 = (**(code **)(*(longlong *)this + 0x440))(this);
  (*pcVar3)(plVar4,uVar9,&this->field_0x930,&this->VertexROI);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->AccumulatedTriangleROI);
  BeginChange(this);
  return;
}

// OnCancelStroke @ 14cd0f2b0

void __thiscall UMeshGroupPaintTool::OnCancelStroke(UMeshGroupPaintTool *this)

{
  FDynamicMeshGroupEditBuilder *pFVar1;
  void *pvVar2;
  FDynamicMeshGroupEdit *pFVar3;
  FPolygroupSet *pFVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)this + 0x478))();
  (**(code **)(*(longlong *)*puVar5 + 0x20))();
  pFVar1 = (this->ActiveGroupEditBuilder).Ptr;
  if (pFVar1 != (FDynamicMeshGroupEditBuilder *)0x0) {
    (this->ActiveGroupEditBuilder).Ptr = (FDynamicMeshGroupEditBuilder *)0x0;
    *(undefined4 *)&(pFVar1->SavedIndexMap).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar1->SavedIndexMap).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->SavedIndexMap);
    pFVar3 = (pFVar1->Edit).Ptr;
    if (pFVar3 != (FDynamicMeshGroupEdit *)0x0) {
      (**(code **)pFVar3->_padding_)(pFVar3,1);
    }
    pFVar4 = (pFVar1->PolygroupSet).Ptr;
    if (pFVar4 != (FPolygroupSet *)0x0) {
      (*(code *)pFVar4[-1].PolygroupAttrib)(&pFVar4[-1].PolygroupAttrib);
    }
    ::operator_delete(pFVar1,0x60);
  }
  this->bDrawGroupsDataValid = false;
  return;
}

// OnDynamicMeshComponentChanged @ 14cd0f810

void __thiscall UMeshGroupPaintTool::OnDynamicMeshComponentChanged(UMeshGroupPaintTool *this)

{
  (**(code **)(*(longlong *)this + 0x440))();
  this->bUndoUpdatePending = true;
  return;
}

// OnEndStroke @ 14cd0fe00

void __thiscall UMeshGroupPaintTool::OnEndStroke(UMeshGroupPaintTool *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)this + 0x478))();
  plVar1 = (longlong *)*puVar3;
  pcVar2 = *(code **)(*plVar1 + 0x18);
  uVar4 = (**(code **)(*(longlong *)this + 0x440))(this);
  (*pcVar2)(plVar1,uVar4,&this->field_0x930,&this->VertexROI);
  EndChange(this);
  return;
}

// OnPolyLassoFinished @ 14cd0ff90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMeshGroupPaintTool::OnPolyLassoFinished
          (UMeshGroupPaintTool *this,FCameraPolyLasso *param_1,bool param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ulonglong uVar18;
  double dVar19;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStackY_2d8 [32];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_288;
  uint local_278;
  <lambda_1> local_274;
  FDynamicMesh3 *local_270;
  uint local_268 [2];
  TPolygon2<double> local_260;
  double local_250;
  double dStack_248;
  double local_240;
  double dStack_238;
  double local_230;
  double dStack_228;
  double local_220;
  double dStack_218;
  int local_210 [2];
  TVector2<double>_u_0 local_208;
  TArrayView<std::nullptr_t,int> local_1f8;
  code *local_1e8;
  FDynamicMesh3 ***local_1e0;
  FDynamicMesh3 **local_1d8;
  UMeshGroupPaintTool *local_1d0;
  FCameraPolyLasso *local_1c8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_1c0;
  uint *local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_190;
  double dStack_188;
  undefined1 local_168 [8];
  undefined1 local_160 [32];
  void *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  ForElementType<FSetElementId> local_120;
  int local_118;
  FMeshFaceSelection local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_288.ArrayNum = (param_1->Polyline).ArrayNum;
  lVar12 = (longlong)local_288.ArrayNum;
  pFVar17 = (param_1->Polyline).AllocatorInstance.Data;
  uVar13 = 0;
  local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar11 = 0;
  if (local_288.ArrayNum == 0) {
    local_288.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_288.ArrayNum,0,&local_288.AllocatorInstance,local_288.ArrayNum,
               &local_288.ArrayMax);
    memcpy(local_288.AllocatorInstance.Data,pFVar17,lVar12 << 4);
  }
  local_278 = local_288.ArrayNum;
  if (1 < local_288.ArrayNum) {
    bVar8 = UPolyLassoMarqueeMechanic::ApproximateSelfClipPolyline(&local_288);
    if (!bVar8) {
      if ((local_288.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FVar7.Data = local_288.AllocatorInstance.Data;
      if ((local_288.ArrayNum < 2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      dVar6 = __real_3ff0000000000000;
      dVar5 = *(double *)FVar7.Data - *(double *)(local_288.AllocatorInstance.Data + 0x10);
      dVar3 = *(double *)(FVar7.Data + 8) - *(double *)(local_288.AllocatorInstance.Data + 0x18);
      auVar20._8_8_ = 0;
      auVar20._0_8_ = dVar3 * dVar3 + dVar5 * dVar5;
      auVar20 = sqrtpd(in_XMM2,auVar20);
      if (auVar20._0_8_ <= 0.0) {
        dVar5 = 0.0;
        dVar3 = 0.0;
      }
      else {
        dVar19 = __real_3ff0000000000000 / auVar20._0_8_;
        dVar5 = dVar5 * dVar19;
        dVar3 = dVar3 * dVar19;
      }
      if ((local_288.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar15 = local_278 - 1;
      local_1b0 = *(double *)local_288.AllocatorInstance.Data;
      dStack_1a8 = *(double *)(local_288.AllocatorInstance.Data + 8);
      uVar16 = uVar11;
      if ((int)uVar15 < local_288.ArrayNum) {
        uVar16 = ~uVar15 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar14 = local_278 - 2;
      pFVar17 = local_288.AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
      uVar16 = uVar11;
      if ((int)uVar14 < local_288.ArrayNum) {
        uVar16 = ~uVar14 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      dVar4 = *(double *)pFVar17 -
              *(double *)(local_288.AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10);
      dVar19 = *(double *)(pFVar17 + 8) -
               *(double *)(local_288.AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10 + 8);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = dVar19 * dVar19 + dVar4 * dVar4;
      auVar20 = sqrtpd(auVar20,auVar2);
      if (auVar20._0_8_ <= 0.0) {
        dVar4 = 0.0;
        dVar19 = 0.0;
      }
      else {
        dVar6 = dVar6 / auVar20._0_8_;
        dVar4 = dVar4 * dVar6;
        dVar19 = dVar19 * dVar6;
      }
      uVar16 = local_278 - 1;
      if ((int)uVar16 < local_288.ArrayNum) {
        uVar11 = ~uVar16 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar10 = local_288.ArrayNum;
      FVar7.Data = local_288.AllocatorInstance.Data;
      local_190 = *(double *)(local_288.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10);
      dStack_188 = *(double *)(local_288.AllocatorInstance.Data + (longlong)(int)uVar16 * 0x10 + 8);
      local_260.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_260.Vertices.ArrayNum = local_288.ArrayNum;
      if (local_288.ArrayNum == 0) {
        local_260.Vertices.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,local_288.ArrayNum,0,(ForAnyElementType *)&local_260,local_288.ArrayNum,
                   &local_260.Vertices.ArrayMax);
        memcpy(local_260.Vertices.AllocatorInstance.Data,FVar7.Data,(longlong)iVar10 << 4);
      }
      bVar8 = UE::Geometry::TPolygon2<double>::IsClockwise(&local_260);
      dVar6 = __real_40c3880000000000;
      if (bVar8) {
        uVar21 = (undefined4)__real_c08f400000000000;
        uVar22 = (undefined4)((ulonglong)__real_c08f400000000000 >> 0x20);
      }
      else {
        uVar21 = (undefined4)__real_408f400000000000;
        uVar22 = (undefined4)((ulonglong)__real_408f400000000000 >> 0x20);
      }
      local_250 = dVar5 * __real_40c3880000000000 + local_1b0;
      dStack_248 = dVar3 * __real_40c3880000000000 + dStack_1a8;
      if (((local_288.AllocatorInstance.Data <= (FScriptContainerElement *)&local_250) &&
          ((FScriptContainerElement *)&local_250 <
           local_288.AllocatorInstance.Data + (longlong)local_288.ArrayMax * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_288.ArrayNum == local_288.ArrayMax) {
        local_288.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_288.AllocatorInstance,&local_288.ArrayMax);
      }
      lVar12 = (longlong)local_288.ArrayNum;
      local_288.ArrayNum = local_288.ArrayNum + 1;
      memmove(local_288.AllocatorInstance.Data + 0x10,local_288.AllocatorInstance.Data,lVar12 << 4);
      *(double *)local_288.AllocatorInstance.Data = local_250;
      *(double *)(local_288.AllocatorInstance.Data + 8) = dStack_248;
      if ((local_288.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_208._s_0.Y =
           *(double *)(local_288.AllocatorInstance.Data + 8) -
           dVar5 * (double)CONCAT44(uVar22,uVar21);
      local_208._s_0.X =
           dVar3 * (double)CONCAT44(uVar22,uVar21) + *(double *)local_288.AllocatorInstance.Data;
      TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Insert
                (&local_288,(TVector2<double> *)&local_208._s_0,0);
      local_240 = dVar4 * dVar6 + local_190;
      dStack_238 = dVar19 * dVar6 + dStack_188;
      if (((local_288.AllocatorInstance.Data <= (FScriptContainerElement *)&local_240) &&
          ((FScriptContainerElement *)&local_240 <
           local_288.AllocatorInstance.Data + (longlong)local_288.ArrayMax * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_288.ArrayNum == local_288.ArrayMax) {
        local_288.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_288.AllocatorInstance,&local_288.ArrayMax);
      }
      uVar11 = local_288.ArrayNum + 1;
      *(double *)(local_288.AllocatorInstance.Data + (longlong)local_288.ArrayNum * 0x10) =
           local_240;
      *(double *)(local_288.AllocatorInstance.Data + (longlong)local_288.ArrayNum * 0x10 + 8) =
           dStack_238;
      uVar16 = 0;
      if (local_288.ArrayNum < (int)uVar11) {
        uVar16 = (uint)~local_288.ArrayNum >> 0x1f;
      }
      local_288.ArrayNum = uVar11;
      if ((uVar16 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_230 = dVar19 * (double)CONCAT44(uVar22,uVar21) +
                  *(double *)
                   (local_288.AllocatorInstance.Data + (longlong)local_288.ArrayNum * 0x10 + -0x10);
      dStack_228 = *(double *)
                    (local_288.AllocatorInstance.Data + (longlong)local_288.ArrayNum * 0x10 + -8) -
                   dVar4 * (double)CONCAT44(uVar22,uVar21);
      if (((local_288.AllocatorInstance.Data <= (FScriptContainerElement *)&local_230) &&
          ((FScriptContainerElement *)&local_230 <
           local_288.AllocatorInstance.Data + (longlong)local_288.ArrayMax * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_288.ArrayNum == local_288.ArrayMax) {
        local_288.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_288.AllocatorInstance,&local_288.ArrayMax);
      }
      lVar12 = (longlong)local_288.ArrayNum;
      local_288.ArrayNum = local_288.ArrayNum + 1;
      *(double *)(local_288.AllocatorInstance.Data + lVar12 * 0x10) = local_230;
      *(double *)(local_288.AllocatorInstance.Data + lVar12 * 0x10 + 8) = dStack_228;
      if ((local_288.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_220 = *(double *)local_288.AllocatorInstance.Data;
      dStack_218 = *(double *)(local_288.AllocatorInstance.Data + 8);
      if (((local_288.AllocatorInstance.Data <= (FScriptContainerElement *)&local_220) &&
          ((FScriptContainerElement *)&local_220 <
           local_288.AllocatorInstance.Data + (longlong)local_288.ArrayMax * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_288.ArrayNum == local_288.ArrayMax) {
        local_288.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_288.AllocatorInstance,&local_288.ArrayMax);
      }
      uVar11 = local_288.ArrayNum + 1;
      *(double *)(local_288.AllocatorInstance.Data + (longlong)local_288.ArrayNum * 0x10) =
           local_220;
      *(double *)(local_288.AllocatorInstance.Data + (longlong)local_288.ArrayNum * 0x10 + 8) =
           dStack_218;
      local_288.ArrayNum = uVar11;
      if (local_260.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Vertices.AllocatorInstance.Data);
      }
    }
    local_278 = local_288.ArrayNum;
    local_270 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0x440))(this);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              (&this->TempROIBuffer,
               (local_270->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (local_270->VertexRefCounts).RefCounts.CurBlockUsed,Default);
    local_1d8 = &local_270;
    local_1c0 = &local_288;
    local_1e8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshGroupPaintTool::OnPolyLassoFinished'::__l2::<lambda_1>,void,int>
                ::Call;
    local_1b8 = &local_278;
    local_1f8.DataPtr = (void **)0x0;
    local_1f8.ArrayNum = 0;
    local_1e0 = &local_1d8;
    local_1d0 = this;
    local_1c8 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               (local_270->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (local_270->VertexRefCounts).RefCounts.CurBlockUsed,1,
               (TFunctionRef<void___cdecl(int)> *)&local_1e8,local_274,None,&local_1f8);
    local_160._0_8_ = (FScriptContainerElement *)0x0;
    local_160._8_8_ = 0;
    local_140 = (void *)0x0;
    local_138 = ___xmm_00000000ffffffff0000008000000000;
    uStack_130 = _UNK_150631d98;
    local_120 = (ForElementType<FSetElementId>)0x0;
    local_118 = 0;
    local_168 = (undefined1  [8])local_270;
    iVar10 = (local_270->VertexRefCounts).RefCounts.CurBlockUsed +
             (local_270->VertexRefCounts).RefCounts.CurBlock * 0x200;
    uVar18 = uVar13;
    if (0 < iVar10) {
      do {
        uVar11 = (uint)uVar13;
        if (((-1 < (int)uVar11) &&
            ((int)uVar11 <
             (int)((((FRefCountVector *)((longlong)local_168 + 0x20))->RefCounts).CurBlock * 0x200 +
                  (((FRefCountVector *)((longlong)local_168 + 0x20))->RefCounts).CurBlockUsed))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 ((((FRefCountVector *)((longlong)local_168 + 0x20))->RefCounts).
                                  Blocks.AllocatorInstance.Data + (uVar13 >> 9) * 8) +
                               (ulonglong)(uVar11 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          uVar16 = 0;
          if ((int)uVar11 < (this->TempROIBuffer).ArrayNum) {
            uVar16 = ~uVar11 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if (*(int *)((this->TempROIBuffer).AllocatorInstance.Data + uVar18 * 4) == 1) {
            local_268[0] = uVar11;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_160,local_210,
                       (bool *)local_268);
          }
        }
        uVar13 = (ulonglong)(uVar11 + 1);
        uVar18 = uVar18 + 1;
      } while ((longlong)uVar18 < (longlong)iVar10);
    }
    UE::Geometry::FMeshFaceSelection::FMeshFaceSelection
              (&local_108,local_270,(FMeshVertexSelection *)local_168,
               ((this->FilterProperties).field0_0x0.DebugPtr)->MinTriVertCount);
    if (local_108.Selected.Elements._8_4_ != local_108.Selected.Elements._52_4_) {
      cVar9 = (**(code **)(*(longlong *)this + 0x570))(this);
      lVar12 = 0xc4;
      if (cVar9 == '\0') {
        lVar12 = 0xbc;
      }
      iVar10 = *(int *)((longlong)&((this->FilterProperties).field0_0x0.DebugPtr)->_padding_ +
                       lVar12);
      bVar8 = (bool)(**(code **)(*(longlong *)this + 0x570))(this);
      SetTrianglesToGroupID(this,&local_108.Selected,iVar10,bVar8);
    }
    local_108.Selected.HashSize = 0;
    if (local_108.Selected.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_108.Selected.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_108.Selected.Elements);
    local_118 = 0;
    if (local_120 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_120);
    }
    iVar10 = SUB84(local_160._8_8_,4);
    local_160._8_8_ = local_160._8_8_ & 0xffffffff00000000;
    if (iVar10 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_160,0,(int *)(local_160 + 0xc));
    }
    uVar11 = local_138._4_4_;
    uStack_130 = 0xffffffff;
    local_138 = (ulonglong)local_138._4_4_ << 0x20;
    if (0x80 < uVar11) {
      local_138 = 0x8000000000;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_160 + 0x10),0);
    }
    if (local_140 != (void *)0x0) {
      FMemory::Free(local_140);
    }
    if ((FScriptContainerElement *)local_160._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_160._0_8_);
    }
  }
  if (local_288.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.AllocatorInstance.Data);
  }
  return;
}

// OnSelectedGroupLayerChanged @ 14cd11e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMeshGroupPaintTool::OnSelectedGroupLayerChanged(UMeshGroupPaintTool *this)

{
  code *pcVar1;
  FScriptContainerElement *_Src;
  FPolygroupSet *pFVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  FText *pFVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined1 auStackY_f8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_b8;
  undefined8 *local_a8;
  FText local_a0;
  FText local_90;
  FText local_80;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  lVar5 = (**(code **)(*(longlong *)this + 0x2d8))();
  pcVar1 = *(code **)(*(longlong *)(lVar5 + 0x28) + 0x10);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_a0,L"UMeshGroupPaintTool",L"ChangeActiveGroupLayer",
                      L"Change Polygroup Layer");
  (*pcVar1)(lVar5 + 0x28,pFVar6);
  if (local_a0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
  }
  local_b8.ArrayNum = (this->FrozenGroups).ArrayNum;
  lVar5 = (longlong)local_b8.ArrayNum;
  puVar10 = (undefined8 *)0x0;
  _Src = (this->FrozenGroups).AllocatorInstance.Data;
  local_b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_b8.ArrayNum == 0) {
    local_b8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_b8.ArrayNum,0,&local_b8.AllocatorInstance,local_b8.ArrayNum,
               &local_b8.ArrayMax);
    memcpy(local_b8.AllocatorInstance.Data,_Src,lVar5 << 2);
  }
  pFVar2 = (this->ActiveGroupSet).Ptr;
  iVar9 = -1;
  if (pFVar2 == (FPolygroupSet *)0x0) {
    iVar11 = -1;
  }
  else {
    iVar11 = pFVar2->GroupLayerIndex;
  }
  UpdateActiveGroupLayer(this);
  pFVar2 = (this->ActiveGroupSet).Ptr;
  if (pFVar2 != (FPolygroupSet *)0x0) {
    iVar9 = pFVar2->GroupLayerIndex;
  }
  if (iVar11 != iVar9) {
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_90,L"UMeshGroupPaintTool",L"ClearAllFrozenGroups",
                        L"Clear Frozen Groups");
    EmitFrozenGroupsChange(this,&local_b8,&this->FrozenGroups,pFVar6);
    if (local_90.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
    }
    puVar7 = ::operator_new(0x40);
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      *puVar7 = &___7__TSimpleValueLambdaChange_H__6B_;
      puVar7[2] = 0;
      puVar7[7] = 0;
      puVar10 = puVar7;
    }
    *(int *)(puVar10 + 1) = iVar11;
    *(int *)((longlong)puVar10 + 0xc) = iVar9;
    local_68 = puVar10[2];
    uVar4 = puVar10[3];
    local_58 = puVar10[4];
    uStack_50 = puVar10[5];
    uVar3 = puVar10[6];
    plStack_40 = (longlong *)puVar10[7];
    puVar10[2] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshGroupPaintTool::OnSelectedGroupLayerChanged'::__l5::<lambda_1>,void,UObject_*,int_const_&,int_const_&,bool>
                 ::Call;
    puVar10[3] = uStack_60;
    *(undefined4 *)(puVar10 + 4) = 0x52978e40;
    *(undefined4 *)((longlong)puVar10 + 0x24) = 1;
    puVar10[5] = this;
    *(undefined4 *)(puVar10 + 6) = (undefined4)local_48;
    *(undefined4 *)((longlong)puVar10 + 0x34) = local_48._4_4_;
    *(undefined4 *)(puVar10 + 7) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = 0;
    local_48 = uVar3;
    uStack_60 = uVar4;
    if (local_68 != 0) {
      plVar8 = &local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar8 = plStack_40;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
    lVar5 = (**(code **)(*(longlong *)this + 0x2d8))(this);
    pcVar1 = *(code **)(*(longlong *)(lVar5 + 0x28) + 0x20);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_80,L"UMeshGroupPaintTool",L"ChangeActiveGroupLayer",
                        L"Change Polygroup Layer");
    local_a8 = puVar10;
    (*pcVar1)(lVar5 + 0x28,this,&local_a8,pFVar6);
    if (local_80.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
    }
  }
  lVar5 = (**(code **)(*(longlong *)this + 0x2d8))(this);
  (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x18))(lVar5 + 0x28);
  if (local_b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.AllocatorInstance.Data);
  }
  return;
}

// OnTick @ 14cd13b20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshGroupPaintTool::OnTick(UMeshGroupPaintTool *this,float param_1)

{
  EMeshGroupPaintInteractionType EVar1;
  UDynamicMeshComponent *this_00;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_GroupPaintToolTick> FVar9;
  longlong *plVar10;
  FDynamicMesh3 *this_01;
  uint uVar11;
  undefined8 in_RDX;
  undefined7 uVar12;
  FColor_u_0 FVar13;
  FName FVar14;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FName local_res18;
  code *local_88 [2];
  undefined **local_78;
  UMeshGroupPaintTool *local_70;
  undefined8 local_60;
  code *local_58 [2];
  undefined **local_48;
  UMeshGroupPaintTool *local_40;
  undefined8 local_30;
  
  UMeshSculptToolBase::OnTick((UMeshSculptToolBase *)this,param_1);
  UMeshElementsVisualizer::OnTick((this->MeshElementsDisplay).field0_0x0.DebugPtr,param_1);
  EVar1 = ((this->FilterProperties).field0_0x0.DebugPtr)->SubToolType;
  uVar12 = (undefined7)((ulonglong)in_RDX >> 8);
  UPolyLassoMarqueeMechanic::SetIsEnabled
            ((this->PolyLassoMechanic).field0_0x0.DebugPtr,EVar1 == PolyLasso);
  (**(code **)(*(longlong *)this + 0x640))
            (this,CONCAT71(uVar12,((this->FilterProperties).field0_0x0.DebugPtr)->BrushAreaMode ==
                                  Volumetric));
  (**(code **)(*(longlong *)this + 0x650))(this,EVar1 != PolyLasso);
  if (this->bHavePendingAction != false) {
    (**(code **)(*(longlong *)this + 0x6b0))(this,this->PendingAction);
    this->bHavePendingAction = false;
    this->PendingAction = NoAction;
  }
  FVar9 = StatPtr_GroupPaintToolTick;
  if (StatPtr_GroupPaintToolTick == (FThreadSafeStaticStat<FStat_GroupPaintToolTick>)0x0) {
    pFVar8 = ::FName::FName(&local_res18,"GroupPaintToolTick");
    FVar9 = (FThreadSafeStaticStat<FStat_GroupPaintToolTick>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_GroupPaintToolTick,*pFVar8,
                       L"GroupPaintTool_Tick","STATGROUP_GroupPaintTool","STATCAT_Advanced",
                       L"GroupPaintTool",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar9;
  bVar2 = false;
  bVar4 = false;
  FVar13.Bits = (uint)FVar14.ComparisonIndex.Value;
  uVar11 = FVar14.Number;
  if ((FVar13.Bits != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.Bits = FVar13.Bits;
        uStackX_c = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8._s_0,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshGroupPaintTool.cpp"
                   ,0x3f1);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar13.Bits;
      uStackX_c = uVar11;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar3 = true;
      goto LAB_14cd13d11;
    }
  }
  bVar3 = false;
  FVar14.ComparisonIndex.Value = 0;
  FVar14.Number = 0;
LAB_14cd13d11:
  if (this->bUndoUpdatePending == false) {
    if ((this->bPendingPickGroup != false) || (this->bPendingToggleFreezeGroup != false)) {
      if (-1 < *(int *)&this->field_0x500) {
        cVar5 = (**(code **)(*(longlong *)this + 0x5a0))(this);
        if (cVar5 == '\0') {
          this_01 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0x440))(this);
          bVar6 = UE::Geometry::FDynamicMesh3::IsTriangle(this_01,*(int *)&this->field_0x500);
          if (bVar6) {
            iVar7 = UE::Geometry::FPolygroupSet::GetGroup
                              ((this->ActiveGroupSet).Ptr,*(int *)&this->field_0x500);
            if (this->bPendingPickGroup == false) {
              if (this->bPendingToggleFreezeGroup != false) {
                ToggleFrozenGroup(this,iVar7);
              }
            }
            else {
              ((this->FilterProperties).field0_0x0.DebugPtr)->SetGroup = iVar7;
              (**(code **)(*(longlong *)this + 0x340))
                        (this,(this->FilterProperties).field0_0x0.DebugPtr);
            }
          }
        }
      }
      this->bPendingPickGroup = false;
      this->bPendingToggleFreezeGroup = false;
    }
    EVar1 = ((this->FilterProperties).field0_0x0.DebugPtr)->SubToolType;
    if ((EVar1 == Brush) || ((byte)(EVar1 - Fill) < 2)) {
      local_60 = 0;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMeshGroupPaintTool::OnTick'::`2'::<lambda_1>,0,0>::
                  _vftable_;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMeshGroupPaintTool::OnTick'::__l2::<lambda_1>,void,int,UE::Math::TRay<double>_const_&>
                    ::Call;
      local_30 = 0;
      local_48 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMeshGroupPaintTool::OnTick'::`27'::<lambda_2>,0,0>::
                  _vftable_;
      local_58[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMeshGroupPaintTool::OnTick'::__l27::<lambda_2>,bool,UE::Math::TRay<double>_const_&>
                    ::Call;
      local_70 = this;
      local_40 = this;
      UMeshSculptToolBase::ProcessPerTickStamps
                ((UMeshSculptToolBase *)this,
                 (TFunction<bool___cdecl(UE::Math::TRay<double>_const_&)> *)local_58,
                 (TFunction<void___cdecl(int,UE::Math::TRay<double>_const_&)> *)local_88);
    }
  }
  else {
    this_00 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
    this->bUndoUpdatePending = false;
    UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
              (this_00,&this->AccumulatedTriangleROI,VertexColors);
    plVar10 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
    (**(code **)(*plVar10 + 0x368))(plVar10);
    this->bDrawGroupsDataValid = false;
    this->bUndoUpdatePending = false;
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  return;
}

// OnUpdateHover @ 14cd158c0

bool __thiscall
UMeshGroupPaintTool::OnUpdateHover(UMeshGroupPaintTool *this,FInputDeviceRay *param_1)

{
  longlong *this_00;
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  
  this_00 = &this[-1].Octree._padding_;
  lVar1 = *this_00;
  *(undefined1 *)&(this->NormalsBuffer).ArrayNum =
       *(undefined1 *)(*(longlong *)&this->field_0xbb0 + 0xb0);
  cVar3 = (**(code **)(lVar1 + 0x568))(this_00);
  if (cVar3 == '\0') {
    UpdateBrushPosition((UMeshGroupPaintTool *)this_00,&param_1->WorldRay);
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1741624056165170275>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshGroupPaintTool.cpp"
                       ,0x39d,"InStroke() == false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return true;
}

// PrecomputeFilterData @ 14cd15f40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMeshGroupPaintTool::PrecomputeFilterData(UMeshGroupPaintTool *this)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18 [2];
  longlong *local_58;
  UMeshGroupPaintTool *local_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_38 [12];
  uint uStack_2c;
  undefined1 local_28 [16];
  
  local_res8 = (**(code **)(*(longlong *)this + 0x440))();
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TriNormals,*(int *)(local_res8 + 0x140) * 0x200 + *(int *)(local_res8 + 0x144),
             Default);
  local_58 = &local_res8;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshGroupPaintTool::PrecomputeFilterData'::__l2::<lambda_1>,void,int>::
       Call;
  lVar2 = 0;
  local_28._8_8_ = &local_58;
  local_38._0_8_ = (void **)0x0;
  stack0xffffffffffffffd0 = (longlong **)((ulonglong)uStack_2c << 0x20);
  local_50 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",*(int *)(local_res8 + 0x140) * 0x200 + *(int *)(local_res8 + 0x144)
             ,1,(TFunctionRef<void___cdecl(int)> *)local_28,local_res8._0_1_,None,
             (TArrayView<std::nullptr_t,int> *)local_38);
  lVar1 = lVar2;
  if (*(longlong *)(local_res8 + 0x208) != 0) {
    lVar1 = *(longlong *)(local_res8 + 0x208);
  }
  local_res18[0] = lVar2;
  if (0 < *(int *)(lVar1 + 0x38)) {
    local_res18[0] = **(longlong **)(lVar1 + 0x30);
  }
  lVar1 = lVar2;
  if (*(longlong *)(local_res8 + 0x208) != 0) {
    lVar1 = *(longlong *)(local_res8 + 0x208);
  }
  if (0 < *(int *)(lVar1 + 0x28)) {
    lVar2 = **(longlong **)(lVar1 + 0x20);
  }
  local_res10 = lVar2;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&this->UVSeamEdges,*(int *)(local_res8 + 0x1d0) * 0x200 + *(int *)(local_res8 + 0x1d4),
             Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&this->NormalSeamEdges,
             *(int *)(local_res8 + 0x1d0) * 0x200 + *(int *)(local_res8 + 0x1d4),Default);
  unique0x00008e00 = &local_58;
  local_58 = &local_res8;
  local_48 = &local_res10;
  local_38._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshGroupPaintTool::PrecomputeFilterData'::__l2::<lambda_2>,void,int>::
       Call;
  local_40 = local_res18;
  local_28._0_8_ = (void **)0x0;
  local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
  local_50 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",*(int *)(local_res8 + 0x1d0) * 0x200 + *(int *)(local_res8 + 0x1d4)
             ,1,(TFunctionRef<void___cdecl(int)> *)local_38,local_res8._0_1_,None,
             (TArrayView<std::nullptr_t,int> *)local_28);
  return;
}

// RegisterActions @ 14cd17960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshGroupPaintTool::RegisterActions(UMeshGroupPaintTool *this,FInteractiveToolActionSet *param_1)

{
  FText *pFVar1;
  FText *pFVar2;
  FString local_68;
  FText local_58;
  FText local_48;
  code *local_38 [2];
  undefined **local_28;
  UMeshGroupPaintTool *local_20;
  undefined8 local_10;
  
  UMeshSculptToolBase::RegisterActions((UMeshSculptToolBase *)this,param_1);
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshGroupPaintTool::RegisterActions'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshGroupPaintTool::RegisterActions'::__l2::<lambda_1>,void>::
                Call;
  local_20 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"UMeshGroupPaintTool",L"PickGroupColorUnderCursorTooltip",
                      L"Switch the active PolyGroup to the group currently under the cursor");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"UMeshGroupPaintTool",L"PickGroupColorUnderCursor",
                      L"Pick PolyGroup");
  ::FString::FString(&local_68,L"PickGroupColorUnderCursor");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2904,&local_68,pFVar2,pFVar1,'\x04',&EKeys::G,
             (TFunction<void___cdecl(void)> *)local_38);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshGroupPaintTool::RegisterActions'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshGroupPaintTool::RegisterActions'::__l2::<lambda_2>,void>::
                Call;
  local_20 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"UMeshGroupPaintTool",L"ToggleFrozenGroupTooltip",
                      L"Toggle Group Frozen State");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"UMeshGroupPaintTool",L"ToggleFrozenGroup",
                      L"Toggle Group Frozen State");
  ::FString::FString(&local_68,L"ToggleFrozenGroup");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2905,&local_68,pFVar2,pFVar1,'\x04',&EKeys::F,
             (TFunction<void___cdecl(void)> *)local_38);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  local_10 = 0;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshGroupPaintTool::RegisterActions'::`2'::<lambda_3>,0,0>::
              _vftable_;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshGroupPaintTool::RegisterActions'::__l2::<lambda_3>,void>::
                Call;
  local_20 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"UMeshGroupPaintTool",L"CreateNewGroupTooltip",
                      L"Allocate a new Polygroup and set as Current");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"UMeshGroupPaintTool",L"CreateNewGroup",L"New Group");
  ::FString::FString(&local_68,L"CreateNewGroup");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2906,&local_68,pFVar2,pFVar1,'\x04',&EKeys::Q,
             (TFunction<void___cdecl(void)> *)local_38);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return;
}

// RequestAction @ 14cd1c2b0

void __thiscall
UMeshGroupPaintTool::RequestAction(UMeshGroupPaintTool *this,EMeshGroupPaintToolActions param_1)

{
  if (this->bHavePendingAction == false) {
    this->PendingAction = param_1;
    this->bHavePendingAction = true;
  }
  return;
}

// SetTrianglesToGroupID @ 14cd1f500

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMeshGroupPaintTool::SetTrianglesToGroupID
          (UMeshGroupPaintTool *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          int param_2,bool param_3)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar2;
  FPolygroupSet *pFVar3;
  FDynamicMesh3 *pFVar4;
  UGroupPaintBrushFilterProperties *pUVar5;
  FDynamicMeshGroupEditBuilder *pFVar6;
  code *pcVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  char cVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar12;
  longlong *plVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  FDynamicMeshAttributeSet *pFVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  FDynamicMeshAttributeSet *pFVar22;
  ForAnyElementType FVar23;
  uint uVar24;
  ForElementType<unsigned_int> FVar25;
  FDynamicMeshAttributeSet *pFVar26;
  uint *puVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  FScriptContainerElement *local_res8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_res10;
  uint local_res18;
  char local_res20;
  uint local_f8;
  undefined1 local_f4;
  undefined1 local_f3 [3];
  ForElementType<unsigned_int> local_f0;
  TArray<int,TSizedDefaultAllocator<32>_> local_e8;
  ForAnyElementType local_d8;
  int local_d0;
  int local_cc;
  TArray<int,TSizedDefaultAllocator<32>_> local_c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_b8;
  uint uStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  uint uStack_9c;
  uint local_98;
  uint uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  int local_84;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  BeginChange(this);
  this_00 = &this->TempROIBuffer;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_00,0,No);
  uVar24 = *(uint *)&(param_1->Elements).field_0x28;
  local_f0 = (ForElementType<unsigned_int>)&(param_1->Elements).field_0x10;
  pFVar22 = (FDynamicMeshAttributeSet *)0x0;
  uVar21 = 0;
  uStack_ac = 1;
  local_98 = 0;
  uStack_9c = uVar21;
  uStack_b0 = uVar21;
  if (uVar24 != 0) {
    puVar27 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar27 == (uint *)0x0) {
      puVar27 = (uint *)local_f0;
    }
    uVar20 = *puVar27;
    pFVar17 = pFVar22;
    pFVar26 = pFVar22;
    local_98 = 0;
    uStack_b0 = 0;
    while (uVar20 == 0) {
      iVar18 = (int)pFVar17;
      local_98 = (int)pFVar26 + 0x20;
      pFVar26 = (FDynamicMeshAttributeSet *)(ulonglong)local_98;
      uStack_b0 = iVar18 + 1;
      pFVar17 = (FDynamicMeshAttributeSet *)(ulonglong)uStack_b0;
      uStack_9c = uVar24;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_b0)
      goto LAB_14cd1f5d2;
      uVar20 = (puVar27 + 1)[iVar18];
    }
    uStack_ac = -uVar20 & uVar20;
    uVar16 = (ulonglong)uStack_ac * 2 + 1;
    lVar14 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_88 = (int)lVar14;
    uStack_9c = local_88 + -1 + local_98;
    if ((int)uVar24 < (int)uStack_9c) {
      uStack_9c = uVar24;
    }
  }
LAB_14cd1f5d2:
  uVar20 = *(uint *)&(param_1->Elements).field_0x28;
  iStack_90 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar28 = uVar20 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_ac,uStack_b0);
  uStack_a0 = 0xffffffff;
  TStack_78.CurrentBitIndex = uStack_9c;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar20 >> 5;
  TStack_78._28_4_ = uStack_9c;
  TStack_78.BaseBitIndex = local_98;
  uStack_58 = CONCAT44(uStack_8c,iStack_90);
  local_b8 = param_1;
  local_a8 = (undefined1 *)local_f0;
  uStack_94 = uStack_9c;
  local_80 = param_1;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_f0;
  if ((((int)uVar20 < 0) || ((int)uVar24 < (int)uVar20)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  cVar9 = local_res20;
  pTVar8 = local_res10;
  uVar24 = *(int *)((longlong)local_f0 + 0x18);
  if (uVar20 != uVar24) {
    FVar25 = *(ForElementType<unsigned_int> *)((longlong)local_f0 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_f0 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar25 = local_f0;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)((longlong)FVar25 + (longlong)iVar18 * 4);
    while (uVar20 == 0) {
      lVar14 = (longlong)iVar18;
      uVar28 = uVar28 + 0x20;
      iVar18 = iVar18 + 1;
      uVar20 = uVar24;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14cd1f6d9;
      uVar20 = *(uint *)((undefined1 *)((longlong)FVar25 + 4) + lVar14 * 4);
    }
    uVar16 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_84 = (int)lVar14;
    uVar20 = local_84 + -1 + uVar28;
    if ((int)uVar24 < (int)uVar20) {
      uVar20 = uVar24;
    }
  }
LAB_14cd1f6d9:
  do {
    pTVar10 = local_80;
    if (*(int *)&(local_80->Elements).field_0x8 - *(int *)&(local_80->Elements).field_0x34 !=
        (int)uStack_58) {
      local_res8 = (FScriptContainerElement *)((ulonglong)local_res8 & 0xffffffffffffff00);
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    if (((TStack_78.CurrentBitIndex == uVar20) &&
        ((ForElementType<unsigned_int>)TStack_78.Array == local_f0)) && (pTVar10 == pTVar8)) {
      if (((this->FilterProperties).field0_0x0.DebugPtr)->VisibilityFilter != None) {
        uVar24 = (this->TempROIBuffer).ArrayNum;
        local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.ArrayNum = 0;
        local_e8.ArrayMax = 0;
        if ((int)uVar24 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar24);
        }
        if (0 < (int)uVar24) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,uVar24,&local_e8.AllocatorInstance,0,&local_e8.ArrayMax);
        }
        ApplyVisibilityFilter(this,this_00,&local_e8);
        if (this_00 != &local_e8) {
          pFVar29 = (this_00->AllocatorInstance).Data;
          if (pFVar29 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar29);
          }
          (this_00->AllocatorInstance).Data = local_e8.AllocatorInstance.Data;
          (this->TempROIBuffer).ArrayNum = local_e8.ArrayNum;
          (this->TempROIBuffer).ArrayMax = local_e8.ArrayMax;
          local_e8.ArrayNum = 0;
          local_e8.ArrayMax = 0;
          local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.AllocatorInstance.Data);
        }
      }
      local_c8.ArrayNum = (this->TempROIBuffer).ArrayNum;
      lVar14 = (longlong)local_c8.ArrayNum;
      pFVar6 = (this->ActiveGroupEditBuilder).Ptr;
      pFVar29 = (this_00->AllocatorInstance).Data;
      local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_c8.ArrayNum == 0) {
        local_c8.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_c8.ArrayNum,0,&local_c8.AllocatorInstance,local_c8.ArrayNum,
                   &local_c8.ArrayMax);
        memcpy(local_c8.AllocatorInstance.Data,pFVar29,lVar14 << 2);
      }
      FDynamicMeshGroupEditBuilder::SaveTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>
                (pFVar6,&local_c8);
      iVar18 = (this->TempROIBuffer).ArrayNum;
      uVar16 = (ulonglong)iVar18;
      pFVar29 = (this->TempROIBuffer).AllocatorInstance.Data;
      local_res10 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                    CONCAT44(local_res10._4_4_,iVar18);
      local_res8 = pFVar29 + uVar16 * 4;
      while( true ) {
        pFVar15 = local_res8;
        if ((this->TempROIBuffer).ArrayNum != (int)uVar16) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_f4);
        }
        if (pFVar29 == pFVar15) break;
        uVar24 = *(uint *)pFVar29;
        pFVar3 = (this->ActiveGroupSet).Ptr;
        lVar14 = (**(code **)(*(longlong *)this + 0x440))(this);
        if ((-1 < (int)uVar24) &&
           ((int)uVar24 < *(int *)(lVar14 + 0x140) * 0x200 + *(int *)(lVar14 + 0x144))) {
          uVar16 = (ulonglong)(uVar24 & 0x1ff);
          lVar2 = (ulonglong)(uVar24 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   (*(longlong *)(lVar14 + 0x148) + (ulonglong)(uVar24 >> 9) * 8) +
                                 uVar16 * 2) - 1U) < 0xfffe) {
            if (pFVar3->PolygroupAttrib == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
              if (*(char *)(lVar14 + 0x1a8) != '\0') {
                *(uint *)(*(longlong *)(*(longlong *)(lVar14 + 0x198) + lVar2) + uVar16 * 4) =
                     local_res18;
                iVar18 = local_res18 + 1;
                if ((int)(local_res18 + 1) < *(int *)(lVar14 + 0x1b0)) {
                  iVar18 = *(int *)(lVar14 + 0x1b0);
                }
                *(int *)(lVar14 + 0x1b0) = iVar18;
              }
            }
            else {
              pFVar17 = pFVar22;
              if (*(FDynamicMeshAttributeSet **)(lVar14 + 0x208) != (FDynamicMeshAttributeSet *)0x0)
              {
                pFVar17 = *(FDynamicMeshAttributeSet **)(lVar14 + 0x208);
              }
              pTVar12 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer
                                  (pFVar17,pFVar3->GroupLayerIndex);
              *(uint *)(*(longlong *)(*(longlong *)&pTVar12->field_0x20 + lVar2) + uVar16 * 4) =
                   local_res18;
            }
          }
        }
        iVar18 = local_res18 + 1;
        if ((int)(local_res18 + 1) < pFVar3->MaxGroupID) {
          iVar18 = pFVar3->MaxGroupID;
        }
        pFVar29 = pFVar29 + 4;
        pFVar3->MaxGroupID = iVar18;
        uVar16 = (ulonglong)local_res10 & 0xffffffff;
      }
      local_d0 = (this->TempROIBuffer).ArrayNum;
      lVar14 = (longlong)local_d0;
      pFVar6 = (this->ActiveGroupEditBuilder).Ptr;
      pFVar29 = (this->TempROIBuffer).AllocatorInstance.Data;
      local_d8.Data = (FScriptContainerElement *)0x0;
      if (local_d0 == 0) {
        local_cc = 0;
        iVar18 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_d0,0,&local_d8,local_d0,&local_cc);
        memcpy(local_d8.Data,pFVar29,lVar14 << 2);
        iVar18 = local_d0;
      }
      pFVar29 = local_d8.Data + (longlong)iVar18 * 4;
      FVar23.Data = local_d8.Data;
      iVar19 = iVar18;
      while( true ) {
        if (iVar19 != iVar18) {
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_f3);
        }
        if (FVar23.Data == pFVar29) break;
        FDynamicMeshGroupEditBuilder::SaveTriangle(pFVar6,*(int *)FVar23.Data);
        FVar23.Data = FVar23.Data + 4;
        iVar19 = local_d0;
      }
      if (local_d8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data);
      }
      UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
                ((this->DynamicMeshComponent).field0_0x0.DebugPtr,this_00,VertexColors);
      plVar13 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
      (**(code **)(*plVar13 + 0x368))(plVar13);
      EndChange(this);
      return;
    }
    pFVar3 = (this->ActiveGroupSet).Ptr;
    local_f8 = *(uint *)(*(longlong *)&pTVar10->Elements + (longlong)TStack_78.CurrentBitIndex * 0xc
                        );
    pTVar12 = pFVar3->PolygroupAttrib;
    if (pTVar12 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      pFVar4 = pFVar3->Mesh;
      if ((pFVar4->TriangleGroups).bIsSet == false) {
        uVar24 = 0xffffffff;
      }
      else {
        uVar24 = uVar21;
        if ((-1 < (int)local_f8) &&
           ((int)local_f8 <
            (int)((pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          lVar14 = (ulonglong)(local_f8 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + lVar14) + (ulonglong)(local_f8 & 0x1ff) * 2) - 1U) <
              0xfffe) {
            uVar24 = *(uint *)(*(longlong *)
                                ((pFVar4->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                                lVar14) + (ulonglong)(local_f8 & 0x1ff) * 4);
          }
        }
      }
    }
    else {
      uVar24 = *(uint *)(*(longlong *)
                          (*(longlong *)&pTVar12->field_0x20 + (ulonglong)(local_f8 >> 9) * 8) +
                        (ulonglong)(local_f8 & 0x1ff) * 4);
    }
    if (uVar24 != local_res18) {
      pFVar15 = (this->FrozenGroups).AllocatorInstance.Data;
      pFVar29 = pFVar15 + (longlong)(this->FrozenGroups).ArrayNum * 4;
      for (; pFVar15 != pFVar29; pFVar15 = pFVar15 + 4) {
        if (*(uint *)pFVar15 == uVar24) goto LAB_14cd1f8cb;
      }
      pUVar5 = (this->FilterProperties).field0_0x0.DebugPtr;
      if (cVar9 == '\0') {
        if (pUVar5->bOnlySetUngrouped != false) {
          bVar11 = uVar24 == 0;
LAB_14cd1f82c:
          if (!bVar11) goto LAB_14cd1f8cb;
        }
      }
      else if (pUVar5->bOnlyEraseCurrent != false) {
        bVar11 = uVar24 == pUVar5->SetGroup;
        goto LAB_14cd1f82c;
      }
      pFVar29 = (this_00->AllocatorInstance).Data;
      if (((pFVar29 <= (FScriptContainerElement *)&local_f8) &&
          ((FScriptContainerElement *)&local_f8 <
           pFVar29 + (longlong)(this->TempROIBuffer).ArrayMax * 4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar18 = (this->TempROIBuffer).ArrayNum;
      piVar1 = &(this->TempROIBuffer).ArrayMax;
      if (iVar18 == *piVar1) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&this_00->AllocatorInstance,piVar1);
      }
      (this->TempROIBuffer).ArrayNum = iVar18 + 1;
      *(uint *)((this_00->AllocatorInstance).Data + (longlong)iVar18 * 4) = local_f8;
    }
LAB_14cd1f8cb:
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

// Setup @ 14cd23360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMeshGroupPaintTool::Setup(UMeshGroupPaintTool *this)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  UMeshElementsVisualizerProperties *pUVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  FText *pFVar11;
  UClass *pUVar12;
  TObjectPtr<AInternalToolFrameworkActor>_u_0 TVar13;
  FString *pFVar14;
  UDynamicMeshComponent *pUVar15;
  FDelegateHandle FVar16;
  TObjectPtr<AInternalToolFrameworkActor>_u_0 TVar17;
  UPolyLassoMarqueeMechanic *pUVar18;
  UPolygroupLayersProperties *pUVar19;
  FDynamicMesh3 *pFVar20;
  UGroupPaintBrushFilterProperties *pUVar21;
  void *pvVar22;
  UGroupPaintBrushOpProps *pUVar23;
  UGroupEraseBrushOpProps *pUVar24;
  TObjectPtr<AInternalToolFrameworkActor>_u_0 TVar25;
  UMeshGroupPaintToolFreezeActions *pUVar26;
  UMeshElementsVisualizer *this_00;
  UWorld *pUVar27;
  undefined ***pppuVar28;
  longlong *plVar29;
  uint uVar30;
  wchar_t *pwVar31;
  wchar_t *pwVar32;
  undefined1 auStackY_6c8 [32];
  FDynamicMesh3 *local_698 [2];
  UMeshGroupPaintTool *local_688;
  undefined4 uStack_680;
  uint uStack_67c;
  FComponentMaterialSet local_678;
  <lambda_1> local_668;
  TObjectPtr<AInternalToolFrameworkActor>_u_0 local_660;
  undefined8 *local_658;
  TObjectPtr<AInternalToolFrameworkActor>_u_0 local_650;
  TVector<float>_u_0 local_648;
  longlong local_638;
  undefined8 uStack_630;
  longlong local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  longlong *plStack_610;
  code *local_608;
  undefined **local_5f8;
  UMeshGroupPaintTool *local_5f0;
  undefined ***local_5e0;
  code *local_5d8;
  undefined **local_5c8;
  UMeshGroupPaintTool *local_5c0;
  undefined ***local_5b0;
  FString local_5a8;
  FString local_598;
  FString local_588;
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  <lambda_2> local_558;
  undefined1 local_540 [16];
  FText local_530;
  code *local_518;
  longlong lStack_510;
  code *local_508;
  longlong lStack_500;
  code *local_4f8 [2];
  undefined **local_4e8;
  UMeshGroupPaintTool *local_4e0;
  undefined8 local_4d0;
  code *local_4c8 [2];
  undefined **local_4b8;
  UMeshGroupPaintTool *local_4b0;
  undefined8 local_4a0;
  code *local_498 [2];
  undefined **local_488;
  UMeshGroupPaintTool *local_480;
  undefined8 local_470;
  code *local_468 [2];
  undefined **local_458;
  UMeshGroupPaintTool *local_450;
  undefined8 local_440;
  code *local_438 [2];
  code *local_428 [3];
  undefined8 local_410;
  code *local_408 [2];
  code *local_3f8 [3];
  undefined8 local_3e0;
  FText local_3d8;
  FString local_3c8;
  FString local_3b8;
  FText local_3a8;
  TUniqueFunction<void___cdecl(void)> local_398;
  TUniqueFunction<void___cdecl(void)> local_368;
  TAxisAlignedBox3<double> local_338;
  undefined1 local_308 [128];
  undefined1 local_288 [128];
  undefined1 local_208 [128];
  undefined1 local_188 [128];
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8 [3];
  longlong *plStack_e0;
  code *local_d8 [2];
  undefined **local_c8;
  UMeshGroupPaintTool *local_c0;
  undefined ***local_b0;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_6c8;
  UMeshSculptToolBase::Setup((UMeshSculptToolBase *)this);
  pcVar2 = *(code **)(*(longlong *)this + 0x380);
  pFVar11 = FText::AsLocalizable_Advanced_LocText
                      (&local_530,L"UMeshGroupPaintTool",L"ToolName",L"Paint PolyGroups");
  (*pcVar2)(this,pFVar11);
  if (local_530.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_530.TextData.Reference + 0x10))();
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_a8);
  pUVar27 = *(UWorld **)&this->field_0x138;
  pUVar12 = Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
  TVar13.DebugPtr =
       (AInternalToolFrameworkActor *)
       UWorld::SpawnActor(pUVar27,pUVar12,&UE::Math::TVector<double>::ZeroVector,
                          &UE::Math::TRotator<double>::ZeroRotator,(FActorSpawnParameters *)local_a8
                         );
  TVar25.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  TVar17.DebugPtr = TVar25.DebugPtr;
  if (TVar13.DebugPtr != (AInternalToolFrameworkActor *)0x0) {
    pUVar12 = Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
    iVar10 = (int)pUVar12->_padding_;
    if ((*(int *)((TVar13.DebugPtr)->_padding_ + 0x38) < iVar10) ||
       (TVar17.DebugPtr = TVar13.DebugPtr,
       (longlong *)
       *(undefined1 **)(*(longlong *)((TVar13.DebugPtr)->_padding_ + 0x30) + (longlong)iVar10 * 8)
       != &pUVar12->_padding_)) {
      pFVar14 = GetTypeName<AInternalToolFrameworkActor>(&local_3b8);
      pwVar32 = L"";
      if ((pFVar14->Data).ArrayNum == 0) {
        pwVar31 = L"";
      }
      else {
        pwVar31 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
      pFVar14 = GetFullNameForCastLogError<AActor>(&local_3c8,(AActor *)TVar13.DebugPtr);
      if ((pFVar14->Data).ArrayNum != 0) {
        pwVar32 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar32,pwVar31);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar17.DebugPtr != (AInternalToolFrameworkActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar17.DebugPtr);
  }
  (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)TVar17;
  pUVar15 = NewObject<UDynamicMeshComponent>((UObject *)TVar17.DebugPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UDynamicMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = pUVar15;
  UMeshSculptToolBase::InitializeSculptMeshComponent
            ((UMeshSculptToolBase *)this,(UBaseDynamicMeshComponent *)pUVar15,
             (AActor *)(this->PreviewMeshActor).field0_0x0.DebugPtr);
  UE::ToolTarget::GetMaterialSet(&local_678,*(UToolTarget **)&this->field_0xc8,false);
  TVar17.DebugPtr = TVar25.DebugPtr;
  TVar13.DebugPtr = TVar25.DebugPtr;
  if (0 < local_678.Materials.ArrayNum) {
    do {
      pUVar15 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
      uVar30 = TVar17._0_4_;
      pcVar2 = *(code **)(pUVar15->_padding_ + 0x6b8);
      uVar9 = 0;
      if ((int)uVar30 < local_678.Materials.ArrayNum) {
        uVar9 = ~uVar30 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*pcVar2)(pUVar15,TVar17.DebugPtr,
                *(undefined8 *)
                 (local_678.Materials.AllocatorInstance.Data + (longlong)TVar13.DebugPtr));
      TVar17._0_4_ = uVar30 + 1;
      TVar17._4_4_ = 0;
      TVar13 = (TObjectPtr<AInternalToolFrameworkActor>_u_0)&(TVar13.DebugPtr)->_padding_;
    } while ((int)TVar17._0_4_ < local_678.Materials.ArrayNum);
  }
  UDynamicMeshComponent::SetInvalidateProxyOnChangeEnabled
            ((this->DynamicMeshComponent).field0_0x0.DebugPtr,false);
  local_688 = (UMeshGroupPaintTool *)OnDynamicMeshComponentChanged;
  uStack_680 = 0;
  lStack_500 = (ulonglong)uStack_67c << 0x20;
  local_508 = OnDynamicMeshComponentChanged;
  FVar16 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
           AddUObject<UMeshGroupPaintTool>
                     ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                       *)&((this->DynamicMeshComponent).field0_0x0.DebugPtr)->OnMeshChanged,
                      (UMeshGroupPaintTool *)local_540,(pmf_c1c9f085 *)this);
                    /* WARNING: Load size is inaccurate */
  lVar3 = *(longlong *)this;
  (this->OnDynamicMeshComponentChangedHandle).ID = *FVar16.ID;
  local_698[0] = (FDynamicMesh3 *)(**(code **)(lVar3 + 0x440))(this);
  local_648._s_0.Z = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_648._0_8_ = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  UE::Geometry::FDynamicMesh3::EnableVertexColors(local_698[0],(TVector<float> *)&local_648._s_0);
  UE::Geometry::FDynamicMesh3::GetBounds(local_698[0],&local_338,true);
  local_398._0_8_ = 0;
  local_398._40_8_ = 0;
  local_668.__this = this;
  Async<_UMeshGroupPaintTool::Setup_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_568,GroupPaintToolAsyncExecTarget,&local_668,&local_398);
  local_558.Mesh = local_698;
  local_558.Bounds = &local_338;
  local_368._0_8_ = 0;
  local_368._40_8_ = 0;
  local_558.__this = this;
  Async<_UMeshGroupPaintTool::Setup_::__l2::<lambda_2>_>
            ((TFuture<void> *)local_578,GroupPaintToolAsyncExecTarget,&local_558,&local_368);
  TVar17.DebugPtr = ::operator_new(0x20);
  local_660.DebugPtr = TVar25.DebugPtr;
  if (TVar17.DebugPtr != (AInternalToolFrameworkActor *)0x0) {
    (TVar17.DebugPtr)->_padding_ = 0;
    (TVar17.DebugPtr)->_padding_ = 0;
    (TVar17.DebugPtr)->_padding_ = 0;
    (TVar17.DebugPtr)->_padding_ = 0;
    local_660.DebugPtr = TVar17.DebugPtr;
  }
  FMeshRenderDecomposition::BuildChunkedDecomposition
            (local_698[0],&local_678,(FMeshRenderDecomposition *)local_660.DebugPtr,0x4000);
  FMeshRenderDecomposition::BuildAssociations
            ((FMeshRenderDecomposition *)local_660.DebugPtr,local_698[0]);
  pUVar15 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar15->_padding_ + 0xd28))(pUVar15,&local_660);
  UMeshSculptToolBase::InitializeBrushSizeRange((UMeshSculptToolBase *)this,&local_338);
  pUVar18 = NewObject<UPolyLassoMarqueeMechanic>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar18 != (UPolyLassoMarqueeMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar18);
  }
  (this->PolyLassoMechanic).field0_0x0.DebugPtr = pUVar18;
  (**(code **)(pUVar18->_padding_ + 0x2b0))(pUVar18);
  UPolyLassoMarqueeMechanic::SetIsEnabled((this->PolyLassoMechanic).field0_0x0.DebugPtr,false);
  uStack_680 = 0;
  ((this->PolyLassoMechanic).field0_0x0.DebugPtr)->SpacingTolerance = 10.0;
  local_688 = (UMeshGroupPaintTool *)OnPolyLassoFinished;
  lStack_510 = (ulonglong)uStack_67c << 0x20;
  local_518 = OnPolyLassoFinished;
  TMulticastDelegateRegistration<void___cdecl(FCameraPolyLasso_const_&,bool),FDefaultDelegateUserPolicy>
  ::AddUObject<UMeshGroupPaintTool>
            ((TMulticastDelegateRegistration<void___cdecl(FCameraPolyLasso_const_&,bool),FDefaultDelegateUserPolicy>
              *)&((this->PolyLassoMechanic).field0_0x0.DebugPtr)->OnDrawPolyLassoFinished,
             (UMeshGroupPaintTool *)(local_540 + 8),(pmf_b6ac19a4 *)this);
  pUVar19 = NewObject<UPolygroupLayersProperties>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 != (UPolygroupLayersProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  (this->PolygroupLayerProperties).field0_0x0.DebugPtr = pUVar19;
  pcVar2 = *(code **)(pUVar19->_padding_ + 0x2b8);
  ::FString::FString(&local_5a8,L"MeshGroupPaintTool");
  (*pcVar2)(pUVar19,this,&local_5a8);
  if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
  }
  pUVar19 = (this->PolygroupLayerProperties).field0_0x0.DebugPtr;
  pFVar20 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0x440))(this);
  UPolygroupLayersProperties::InitializeGroupLayers(pUVar19,pFVar20);
  pUVar19 = (this->PolygroupLayerProperties).field0_0x0.DebugPtr;
  local_4e8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshGroupPaintTool::Setup'::`2'::<lambda_3>,0,0>::_vftable_;
  local_4d0 = 0;
  local_4f8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshGroupPaintTool::Setup'::__l2::<lambda_3>,void,FName_const_&>
                 ::Call;
  local_4e0 = this;
  FWatchablePropertySet::WatchProperty<FName>
            ((FWatchablePropertySet *)&pUVar19->_padding_,&pUVar19->ActiveGroupLayer,
             (TFunction<void___cdecl(FName_const_&)> *)local_4f8);
  UpdateActiveGroupLayer(this);
  (**(code **)(*(longlong *)this + 0x318))
            (this,(this->PolygroupLayerProperties).field0_0x0.DebugPtr);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar12 = UGroupPaintBrushFilterProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_308,pUVar12);
  local_308._8_8_ = this;
  pUVar21 = (UGroupPaintBrushFilterProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_308);
  if (local_308._64_8_ != 0) {
    plVar29 = (longlong *)(local_308 + 0x50);
    if ((longlong *)local_308._104_8_ != (longlong *)0x0) {
      plVar29 = (longlong *)local_308._104_8_;
    }
    (**(code **)(*plVar29 + 0x10))(plVar29);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar21 != (UGroupPaintBrushFilterProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar21);
  }
  (this->FilterProperties).field0_0x0.DebugPtr = pUVar21;
  local_5f8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshGroupPaintTool::Setup'::`2'::<lambda_4>,0,0>::_vftable_;
  local_5e0 = (undefined ***)0x0;
  local_608 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshGroupPaintTool::Setup'::__l2::<lambda_4>,void,enum_EMeshGroupPaintInteractionType_const_&>
              ::Call;
  local_5f0 = this;
  pvVar22 = ::operator_new(0xa0);
  TVar17.DebugPtr = TVar25.DebugPtr;
  if (pvVar22 != (void *)0x0) {
    local_438[0] = local_608;
    local_410 = 0;
    if (local_608 != (code *)0x0) {
      pppuVar28 = &local_5f8;
      if (local_5e0 != (undefined ***)0x0) {
        pppuVar28 = local_5e0;
      }
      (*(code *)**pppuVar28)(pppuVar28,local_438 + 2);
    }
    TVar17.DebugPtr =
         (AInternalToolFrameworkActor *)
         FWatchablePropertySet::TPropertyWatcher<enum_EMeshGroupPaintInteractionType>::
         TPropertyWatcher<enum_EMeshGroupPaintInteractionType><enum_EMeshGroupPaintInteractionType,void>
                   (pvVar22,&pUVar21->SubToolType,
                    (TFunction<void___cdecl(EMeshGroupPaintInteractionType_const_&)> *)local_438);
  }
  iVar10 = (int)pUVar21->_padding_;
  piVar1 = (int *)((longlong)&pUVar21->_padding_ + 4);
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pUVar21->_padding_,piVar1);
  }
  *(int *)&pUVar21->_padding_ = iVar10 + 1;
  ((TObjectPtr<AInternalToolFrameworkActor>_u_0 *)(pUVar21->_padding_ + (longlong)iVar10 * 8))->
  DebugPtr = (AInternalToolFrameworkActor *)TVar17;
  if (local_608 != (code *)0x0) {
    pppuVar28 = &local_5f8;
    if (local_5e0 != (undefined ***)0x0) {
      pppuVar28 = local_5e0;
    }
    (*(code *)(*pppuVar28)[2])();
  }
  pUVar21 = (this->FilterProperties).field0_0x0.DebugPtr;
  local_4b8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshGroupPaintTool::Setup'::`2'::<lambda_5>,0,0>::_vftable_;
  local_4a0 = 0;
  local_4c8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshGroupPaintTool::Setup'::__l2::<lambda_5>,void,float_const_&>
                 ::Call;
  local_4b0 = this;
  FWatchablePropertySet::WatchProperty<float>
            ((FWatchablePropertySet *)&pUVar21->_padding_,&pUVar21->BrushSize,
             (TFunction<void___cdecl(float_const_&)> *)local_4c8);
  pUVar21 = (this->FilterProperties).field0_0x0.DebugPtr;
  local_488 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshGroupPaintTool::Setup'::`2'::<lambda_6>,0,0>::_vftable_;
  local_470 = 0;
  local_498[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshGroupPaintTool::Setup'::__l2::<lambda_6>,void,bool_const_&>
                 ::Call;
  local_480 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar21->_padding_,&pUVar21->bHitBackFaces,
             (TFunction<void___cdecl(bool_const_&)> *)local_498);
  pUVar21 = (this->FilterProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar21->_padding_ + 0x2b8);
  ::FString::FString(&local_598,L"");
  (*pcVar2)(pUVar21,this,&local_598);
  if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_598.Data.AllocatorInstance.Data);
  }
  ((this->FilterProperties).field0_0x0.DebugPtr)->BrushSize =
       *(float *)(*(longlong *)&this->field_0x128 + 0xb8);
  ((this->FilterProperties).field0_0x0.DebugPtr)->bHitBackFaces =
       *(bool *)(*(longlong *)&this->field_0x128 + 0xd8);
  ((this->FilterProperties).field0_0x0.DebugPtr)->SetGroup =
       ((this->ActiveGroupSet).Ptr)->MaxGroupID;
  (**(code **)(*(longlong *)this + 0x318))(this,(this->FilterProperties).field0_0x0.DebugPtr);
  (**(code **)(*(longlong *)this + 0x630))(this);
  (**(code **)(*(longlong *)this + 0x318))(this,*(undefined8 *)&this->field_0x128);
  *(undefined1 *)(*(longlong *)&this->field_0x128 + 0xec) = 0;
  *(undefined1 *)(*(longlong *)&this->field_0x128 + 0xd0) = 0;
  *(undefined1 *)(*(longlong *)&this->field_0x128 + 0xed) = 0;
  (**(code **)(*(longlong *)this + 0x490))(this);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar12 = Z_Construct_UClass_UGroupPaintBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_288,pUVar12);
  local_288._8_8_ = this;
  pUVar23 = (UGroupPaintBrushOpProps *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_288);
  if (local_288._64_8_ != 0) {
    plVar29 = (longlong *)(local_288 + 0x50);
    if ((longlong *)local_288._104_8_ != (longlong *)0x0) {
      plVar29 = (longlong *)local_288._104_8_;
    }
    (**(code **)(*plVar29 + 0x10))(plVar29);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar23 != (UGroupPaintBrushOpProps *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar23);
  }
  (this->PaintBrushOpProperties).field0_0x0.DebugPtr = pUVar23;
  local_658 = ::operator_new(0x40);
  if (local_658 == (undefined8 *)0x0) {
    local_658 = (undefined8 *)0x0;
  }
  else {
    *local_658 = &___7FLambdaMeshSculptBrushOpFactory__6B_;
    local_658[2] = 0;
    local_658[7] = 0;
    local_638 = local_658[2];
    uVar6 = local_658[3];
    local_628 = local_658[4];
    uStack_620 = local_658[5];
    uVar5 = local_658[6];
    plStack_610 = (longlong *)local_658[7];
    local_658[2] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UMeshGroupPaintTool::Setup'::__l2::<lambda_7>,TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>_>
                   ::Call;
    local_658[3] = uStack_630;
    *(undefined4 *)(local_658 + 4) = 0x52979a00;
    *(undefined4 *)((longlong)local_658 + 0x24) = 1;
    local_658[5] = this;
    *(undefined4 *)(local_658 + 6) = (undefined4)local_618;
    *(undefined4 *)((longlong)local_658 + 0x34) = local_618._4_4_;
    *(undefined4 *)(local_658 + 7) = 0;
    *(undefined4 *)((longlong)local_658 + 0x3c) = 0;
    local_618 = uVar5;
    uStack_630 = uVar6;
    if (local_638 != 0) {
      plVar29 = &local_628;
      if (plStack_610 != (longlong *)0x0) {
        plVar29 = plStack_610;
      }
      (**(code **)(*plVar29 + 0x10))();
    }
  }
  pFVar11 = FText::AsLocalizable_Advanced_LocText
                      (&local_3d8,L"UMeshGroupPaintTool",L"Paint",L"Paint");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,0,pFVar11,(FMeshSculptBrushOpFactory *)&local_658,
             (UMeshSculptBrushOpProps *)pUVar23);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar12 = Z_Construct_UClass_UGroupEraseBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_208,pUVar12);
  local_208._8_8_ = this;
  pUVar24 = (UGroupEraseBrushOpProps *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_208);
  if (local_208._64_8_ != 0) {
    plVar29 = (longlong *)(local_208 + 0x50);
    if ((longlong *)local_208._104_8_ != (longlong *)0x0) {
      plVar29 = (longlong *)local_208._104_8_;
    }
    (**(code **)(*plVar29 + 0x10))(plVar29);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar24 != (UGroupEraseBrushOpProps *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar24);
  }
  (this->EraseBrushOpProperties).field0_0x0.DebugPtr = pUVar24;
  local_108 = *(longlong *)&pUVar24->GetCurrentGroupLambda;
  uVar6 = *(undefined8 *)&(pUVar24->GetCurrentGroupLambda).field_0x8;
  local_f8[0] = *(longlong *)&(pUVar24->GetCurrentGroupLambda).field_0x10;
  local_f8[1] = *(longlong *)&(pUVar24->GetCurrentGroupLambda).field_0x18;
  uVar5 = *(undefined8 *)&(pUVar24->GetCurrentGroupLambda).field_0x20;
  plStack_e0 = *(longlong **)&(pUVar24->GetCurrentGroupLambda).field_0x28;
  *(code **)&pUVar24->GetCurrentGroupLambda =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshGroupPaintTool::Setup'::__l2::<lambda_8>,int>::Call;
  *(undefined8 *)&(pUVar24->GetCurrentGroupLambda).field_0x8 = uStack_100;
  *(undefined4 *)&(pUVar24->GetCurrentGroupLambda).field_0x10 = 0x52978cc0;
  *(undefined4 *)&(pUVar24->GetCurrentGroupLambda).field_0x14 = 1;
  *(UMeshGroupPaintTool **)&(pUVar24->GetCurrentGroupLambda).field_0x18 = this;
  *(undefined4 *)&(pUVar24->GetCurrentGroupLambda).field_0x20 = (undefined4)local_f8[2];
  *(undefined4 *)&(pUVar24->GetCurrentGroupLambda).field_0x24 = local_f8[2]._4_4_;
  *(undefined4 *)&(pUVar24->GetCurrentGroupLambda).field_0x28 = 0;
  *(undefined4 *)&(pUVar24->GetCurrentGroupLambda).field_0x2c = 0;
  uStack_100 = uVar6;
  local_f8[2] = uVar5;
  if (local_108 != 0) {
    plVar29 = local_f8;
    if (plStack_e0 != (longlong *)0x0) {
      plVar29 = plStack_e0;
    }
    (**(code **)(*plVar29 + 0x10))();
  }
  pUVar24 = (this->EraseBrushOpProperties).field0_0x0.DebugPtr;
  TVar17.DebugPtr = ::operator_new(8);
  local_650.DebugPtr = TVar25.DebugPtr;
  if (TVar17.DebugPtr != (AInternalToolFrameworkActor *)0x0) {
    (TVar17.DebugPtr)->_padding_ =
         (longlong)&___7__TBasicMeshSculptBrushOpFactory_VFGroupEraseBrushOp____6B_;
    local_650.DebugPtr = TVar17.DebugPtr;
  }
  pFVar11 = FText::AsLocalizable_Advanced_LocText
                      (&local_3a8,L"UMeshGroupPaintTool",L"Erase",L"Erase");
  UMeshSculptToolBase::RegisterSecondaryBrushType
            ((UMeshSculptToolBase *)this,1,pFVar11,(FMeshSculptBrushOpFactory *)&local_650,
             (UMeshSculptBrushOpProps *)pUVar24);
  (**(code **)(*(longlong *)this + 0x318))(this,*(undefined8 *)&this->field_0xb20);
  (**(code **)(*(longlong *)this + 0x318))(this,*(undefined8 *)&this->field_0x130);
  (**(code **)(*(longlong *)this + 0x338))(this,*(undefined8 *)&this->field_0x130,0);
  pUVar21 = (this->FilterProperties).field0_0x0.DebugPtr;
  local_5c8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshGroupPaintTool::Setup'::`2'::<lambda_9>,0,0>::_vftable_;
  local_5b0 = (undefined ***)0x0;
  local_5d8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshGroupPaintTool::Setup'::__l2::<lambda_9>,void,enum_EMeshGroupPaintBrushType_const_&>
              ::Call;
  local_5c0 = this;
  pvVar22 = ::operator_new(0xa0);
  if (pvVar22 != (void *)0x0) {
    local_408[0] = local_5d8;
    local_3e0 = 0;
    if (local_5d8 != (code *)0x0) {
      pppuVar28 = &local_5c8;
      if (local_5b0 != (undefined ***)0x0) {
        pppuVar28 = local_5b0;
      }
      (*(code *)**pppuVar28)(pppuVar28,local_408 + 2);
    }
    TVar25.DebugPtr =
         (AInternalToolFrameworkActor *)
         FWatchablePropertySet::TPropertyWatcher<enum_EMeshGroupPaintBrushType>::
         TPropertyWatcher<enum_EMeshGroupPaintBrushType><enum_EMeshGroupPaintBrushType,void>
                   (pvVar22,&pUVar21->PrimaryBrushType,
                    (TFunction<void___cdecl(EMeshGroupPaintBrushType_const_&)> *)local_408);
  }
  iVar10 = (int)pUVar21->_padding_;
  piVar1 = (int *)((longlong)&pUVar21->_padding_ + 4);
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pUVar21->_padding_,piVar1);
  }
  *(int *)&pUVar21->_padding_ = iVar10 + 1;
  ((TObjectPtr<AInternalToolFrameworkActor>_u_0 *)(pUVar21->_padding_ + (longlong)iVar10 * 8))->
  DebugPtr = (AInternalToolFrameworkActor *)TVar25;
  if (local_5d8 != (code *)0x0) {
    pppuVar28 = &local_5c8;
    if (local_5b0 != (undefined ***)0x0) {
      pppuVar28 = local_5b0;
    }
    (*(code *)(*pppuVar28)[2])();
  }
  UMeshSculptToolBase::OnCompleteSetup((UMeshSculptToolBase *)this);
  UpdateBrushType(this,((this->FilterProperties).field0_0x0.DebugPtr)->PrimaryBrushType);
  UMeshSculptToolBase::SetActiveSecondaryBrushType((UMeshSculptToolBase *)this,1);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar12 = UMeshGroupPaintToolFreezeActions::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_188,pUVar12);
  local_188._8_8_ = this;
  pUVar26 = (UMeshGroupPaintToolFreezeActions *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_188);
  if (local_188._64_8_ != 0) {
    plVar29 = (longlong *)(local_188 + 0x50);
    if ((longlong *)local_188._104_8_ != (longlong *)0x0) {
      plVar29 = (longlong *)local_188._104_8_;
    }
    (**(code **)(*plVar29 + 0x10))(plVar29);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar26 != (UMeshGroupPaintToolFreezeActions *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar26);
  }
  (this->FreezeActions).field0_0x0.DebugPtr = pUVar26;
  local_688 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar26->field_0xb0,(FObjectPtr)&local_688);
  (**(code **)(*(longlong *)this + 0x318))(this,(this->FreezeActions).field0_0x0.DebugPtr);
  this_00 = NewObject<UMeshElementsVisualizer>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UMeshElementsVisualizer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->MeshElementsDisplay).field0_0x0.DebugPtr = this_00;
  pUVar15 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  pUVar27 = (UWorld *)pUVar15->_padding_;
  if (pUVar27 == (UWorld *)0x0) {
    pUVar27 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar15);
  }
  UPreviewGeometry::CreateInWorld
            ((UPreviewGeometry *)this_00,pUVar27,(TTransform<double> *)&pUVar15->_padding_);
  pUVar4 = (((this->MeshElementsDisplay).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr;
  if (pUVar4 == (UMeshElementsVisualizerProperties *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1741624056165170975>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshGroupPaintTool.cpp"
                       ,0xe1,"MeshElementsDisplay->Settings");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pcVar2 = *(code **)(pUVar4->_padding_ + 0x2b8);
    ::FString::FString(&local_588,L"MeshGroupPaintTool");
    (*pcVar2)(pUVar4,this,&local_588);
    if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_588.Data.AllocatorInstance.Data);
    }
    (**(code **)(*(longlong *)this + 0x318))
              (this,(((this->MeshElementsDisplay).field0_0x0.DebugPtr)->Settings).field0_0x0.
                    DebugPtr);
  }
  local_c8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshGroupPaintTool::Setup'::`2'::<lambda_10>,1,0>::_vftable_;
  local_b0 = (undefined ***)0x0;
  local_d8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshGroupPaintTool::Setup'::__l2::<lambda_10>,void,TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)>_>
                ::Call;
  local_c0 = this;
  UMeshElementsVisualizer::SetMeshAccessFunction
            ((this->MeshElementsDisplay).field0_0x0.DebugPtr,
             (TUniqueFunction<void___cdecl(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)>)>
              *)local_d8);
  if (local_d8[0] != (code *)0x0) {
    pppuVar28 = &local_c8;
    if (local_b0 != (undefined ***)0x0) {
      pppuVar28 = local_b0;
    }
    (*(code *)(*pppuVar28)[2])();
  }
  pUVar15 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  local_458 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshGroupPaintTool::Setup'::`2'::<lambda_11>,1,0>::_vftable_;
  local_468[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshGroupPaintTool::Setup'::__l2::<lambda_11>,FColor,UE::Geometry::FDynamicMesh3_const_*,int>
                 ::Call;
  local_440 = 0;
  local_450 = this;
  (**(code **)(pUVar15->_padding_ + 0xce8))(pUVar15,local_468,2);
  (**(code **)(*(longlong *)this + 0x5e0))(this,0);
  (**(code **)(*(longlong *)this + 0x5f0))(this,6);
  (**(code **)(*(longlong *)this + 0x5e8))(this,0);
  (**(code **)(*(longlong *)this + 0x5f8))(this,1);
  (**(code **)(*(longlong *)this + 0x338))(this,*(undefined8 *)&this->field_0x128,0);
  (**(code **)(*(longlong *)this + 0x338))(this,(this->FilterProperties).field0_0x0.DebugPtr,1);
  this->field_0x440 = 0;
  if (*(longlong *)&this->field_0x428 != 0) {
    (**(code **)(*(longlong *)this + 0x338))(this,*(longlong *)&this->field_0x428,0);
  }
  if (*(longlong *)&this->field_0x438 != 0) {
    (**(code **)(*(longlong *)this + 0x338))(this,*(longlong *)&this->field_0x438,0);
  }
  if (local_568._0_8_ != 0) {
    do {
      cVar8 = (**(code **)(**(longlong **)(local_568._0_8_ + 0x60) + 0x20))
                        (*(longlong **)(local_568._0_8_ + 0x60),0xffffffff,0);
    } while (cVar8 == '\0');
  }
  if (local_578._0_8_ != 0) {
    do {
      cVar8 = (**(code **)(**(longlong **)(local_578._0_8_ + 0x60) + 0x20))
                        (*(longlong **)(local_578._0_8_ + 0x60),0xffffffff,0);
    } while (cVar8 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_578._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_568._8_8_);
  if (local_678.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_678.Materials.AllocatorInstance.Data);
  }
  if (local_a8._64_8_ != 0) {
    plVar29 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar29 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar29 + 0x10))();
  }
  return;
}

// SharesBrushPropertiesChanges @ 14cd2d250

bool __thiscall UMeshGroupPaintTool::SharesBrushPropertiesChanges(UMeshGroupPaintTool *this)

{
  return false;
}

// ShowWorkPlane @ 14cd2d2a0

bool __thiscall UMeshGroupPaintTool::ShowWorkPlane(UMeshGroupPaintTool *this)

{
  return false;
}

// ShrinkCurrentGroupAction @ 14cd2d2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMeshGroupPaintTool::ShrinkCurrentGroupAction(UMeshGroupPaintTool *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  int iVar1;
  uint uVar2;
  FDynamicMeshGroupEditBuilder *pFVar3;
  FPolygroupSet *pFVar4;
  undefined1 auVar5 [8];
  int iVar6;
  longlong lVar7;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar8;
  longlong *plVar9;
  FDynamicMeshAttributeSet *this_01;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  undefined1 auStackY_198 [32];
  undefined1 local_158 [8];
  undefined8 local_150;
  undefined1 local_148 [4];
  int local_144;
  code *local_140;
  undefined1 *local_138;
  FMeshFaceSelection local_128;
  FMeshFaceSelection local_c8;
  undefined1 local_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_198;
  BeginChange(this);
  local_144 = ((this->FilterProperties).field0_0x0.DebugPtr)->SetGroup;
  local_128.Mesh =
       (FDynamicMesh3 *)
       (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  local_150 = &local_144;
  local_128.Selected.Elements._0_8_ = 0;
  local_138 = local_158;
  local_128.Selected.Elements._8_8_ = 0;
  local_140 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshGroupPaintTool::ShrinkCurrentGroupAction'::__l2::<lambda_1>,bool,int>
              ::Call;
  local_128.Selected.Elements._32_8_ = 0;
  local_128.Selected.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_128.Selected.Elements._48_8_ = _UNK_150631d98;
  local_128.Selected.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_128.Selected.HashSize = 0;
  local_158 = (undefined1  [8])this;
  UE::Geometry::FMeshFaceSelection::Select(&local_128,(TFunctionRef<bool___cdecl(int)> *)&local_140)
  ;
  local_c8.Mesh = local_128.Mesh;
  local_c8.Selected.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_c8.Selected.Elements._48_8_ = _UNK_150631d98;
  local_c8.Selected.Elements._0_8_ = 0;
  local_c8.Selected.Elements._8_8_ = 0;
  local_c8.Selected.Elements._32_8_ = 0;
  local_c8.Selected.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_c8.Selected.HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&local_c8.Selected,&local_128.Selected);
  local_68._0_8_ = 0;
  local_40 = (longlong *)0x0;
  UE::Geometry::FMeshFaceSelection::ContractBorderByOneRingNeighbours
            (&local_c8,1,false,(TUniqueFunction<bool___cdecl(int)> *)local_68);
  if (local_68._0_8_ != 0) {
    plVar9 = (longlong *)(local_68 + 0x10);
    if (local_40 != (longlong *)0x0) {
      plVar9 = local_40;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  this_00 = &this->TempROIBuffer;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_00,0,No);
  UE::Geometry::FMeshFaceSelection::
  SetDifference<UE::Geometry::FMeshFaceSelection,TArray<int,TSizedDefaultAllocator<32>_>_>
            (&local_128,&local_c8,this_00);
  iVar1 = (this->TempROIBuffer).ArrayNum;
  pFVar3 = (this->ActiveGroupEditBuilder).Ptr;
  pFVar10 = (this_00->AllocatorInstance).Data;
  local_158 = (undefined1  [8])0x0;
  local_150._0_4_ = iVar1;
  if (iVar1 == 0) {
    local_150._0_4_ = 0;
    local_150._4_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,0,(ForAnyElementType *)local_158,iVar1,(int *)((longlong)&local_150 + 4));
    memcpy((void *)local_158,pFVar10,(longlong)iVar1 << 2);
  }
  FDynamicMeshGroupEditBuilder::SaveTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>
            (pFVar3,(TArray<int,TSizedDefaultAllocator<32>_> *)local_158);
  pFVar10 = (this_00->AllocatorInstance).Data;
  iVar1 = (this->TempROIBuffer).ArrayNum;
  local_158 = (undefined1  [8])(pFVar10 + (longlong)iVar1 * 4);
  while( true ) {
    auVar5 = local_158;
    if ((this->TempROIBuffer).ArrayNum != iVar1) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_148);
    }
    if ((undefined1  [8])pFVar10 == auVar5) break;
    uVar2 = *(uint *)pFVar10;
    pFVar4 = (this->ActiveGroupSet).Ptr;
    lVar7 = (**(code **)(*(longlong *)this + 0x440))(this);
    if (((-1 < (int)uVar2) &&
        ((int)uVar2 < *(int *)(lVar7 + 0x140) * 0x200 + *(int *)(lVar7 + 0x144))) &&
       (uVar11 = (ulonglong)(uVar2 >> 9),
       (ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar7 + 0x148) + uVar11 * 8) +
                          (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      if (pFVar4->PolygroupAttrib == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        if (*(char *)(lVar7 + 0x1a8) != '\0') {
          *(undefined4 *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x198) + uVar11 * 8) +
           (ulonglong)(uVar2 & 0x1ff) * 4) = 0;
          iVar6 = 1;
          if (1 < *(int *)(lVar7 + 0x1b0)) {
            iVar6 = *(int *)(lVar7 + 0x1b0);
          }
          *(int *)(lVar7 + 0x1b0) = iVar6;
        }
      }
      else {
        this_01 = (FDynamicMeshAttributeSet *)0x0;
        if (*(FDynamicMeshAttributeSet **)(lVar7 + 0x208) != (FDynamicMeshAttributeSet *)0x0) {
          this_01 = *(FDynamicMeshAttributeSet **)(lVar7 + 0x208);
        }
        pTVar8 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer
                           (this_01,pFVar4->GroupLayerIndex);
        *(undefined4 *)
         (*(longlong *)(*(longlong *)&pTVar8->field_0x20 + uVar11 * 8) +
         (ulonglong)(uVar2 & 0x1ff) * 4) = 0;
      }
    }
    iVar6 = 1;
    if (1 < pFVar4->MaxGroupID) {
      iVar6 = pFVar4->MaxGroupID;
    }
    pFVar10 = pFVar10 + 4;
    pFVar4->MaxGroupID = iVar6;
  }
  iVar1 = (this->TempROIBuffer).ArrayNum;
  pFVar3 = (this->ActiveGroupEditBuilder).Ptr;
  pFVar10 = (this_00->AllocatorInstance).Data;
  local_158 = (undefined1  [8])0x0;
  local_150._0_4_ = iVar1;
  if (iVar1 == 0) {
    local_150._0_4_ = 0;
    local_150._4_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar1,0,(ForAnyElementType *)local_158,iVar1,(int *)((longlong)&local_150 + 4));
    memcpy((void *)local_158,pFVar10,(longlong)iVar1 << 2);
  }
  FDynamicMeshGroupEditBuilder::SaveTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>
            (pFVar3,(TArray<int,TSizedDefaultAllocator<32>_> *)local_158);
  UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
            ((this->DynamicMeshComponent).field0_0x0.DebugPtr,this_00,VertexColors);
  plVar9 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  (**(code **)(*plVar9 + 0x368))(plVar9);
  EndChange(this);
  local_c8.Selected.HashSize = 0;
  if (local_c8.Selected.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_c8.Selected.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_c8.Selected.Elements);
  local_128.Selected.HashSize = 0;
  if (local_128.Selected.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.Selected.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.Selected.Elements);
  return;
}

// Shutdown @ 14cd2d6e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMeshGroupPaintTool::Shutdown(UMeshGroupPaintTool *this,EToolShutdownType param_1)

{
  UDynamicMeshComponent *pUVar1;
  UMeshElementsVisualizerProperties *pUVar2;
  UGroupPaintBrushFilterProperties *pUVar3;
  UPolygroupLayersProperties *pUVar4;
  AInternalToolFrameworkActor *this_00;
  code *pcVar5;
  bool bVar6;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDynamicMeshComponent *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnMeshChanged,
               (FDelegateHandle)(this->OnDynamicMeshComponentChangedHandle).ID);
  }
  pUVar2 = (((this->MeshElementsDisplay).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr;
  if (pUVar2 == (UMeshElementsVisualizerProperties *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1741624056165170940>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshGroupPaintTool.cpp"
                       ,0x104,"MeshElementsDisplay->Settings");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    pcVar5 = *(code **)(pUVar2->_padding_ + 0x2b0);
    ::FString::FString(&local_38,L"MeshGroupPaintTool");
    (*pcVar5)(pUVar2,this,&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  UPreviewGeometry::Disconnect((UPreviewGeometry *)(this->MeshElementsDisplay).field0_0x0.DebugPtr);
  pUVar3 = (this->FilterProperties).field0_0x0.DebugPtr;
  pcVar5 = *(code **)(pUVar3->_padding_ + 0x2b0);
  ::FString::FString(&local_28,L"");
  (*pcVar5)(pUVar3,this,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pUVar4 = (this->PolygroupLayerProperties).field0_0x0.DebugPtr;
  pcVar5 = *(code **)(pUVar4->_padding_ + 0x2b0);
  ::FString::FString(&local_18,L"MeshGroupPaintTool");
  (*pcVar5)(pUVar4,this,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  this_00 = (this->PreviewMeshActor).field0_0x0.DebugPtr;
  if (this_00 != (AInternalToolFrameworkActor *)0x0) {
    AActor::Destroy((AActor *)this_00,false,true);
    (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  }
  UMeshSculptToolBase::Shutdown((UMeshSculptToolBase *)this,param_1);
  return;
}

// StaticRegisterNativesUMeshGroupPaintTool @ 14cd2efc0

void __cdecl UMeshGroupPaintTool::StaticRegisterNativesUMeshGroupPaintTool(void)

{
  return;
}

// SyncMeshWithGroupBuffer @ 14cd2feb0

bool __thiscall
UMeshGroupPaintTool::SyncMeshWithGroupBuffer(UMeshGroupPaintTool *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FPolygroupSet *pFVar3;
  FDynamicMesh3 *pFVar4;
  FDynamicMeshGroupEditBuilder *this_00;
  FDynamicMeshAttributeSet *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar13;
  int iVar14;
  FDynamicMeshAttributeSet *this_01;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  int local_res8;
  longlong local_res18;
  
  lVar11 = (longlong)(this->ROITriangleBuffer).ArrayNum;
  iVar17 = 0;
  uVar18 = 0;
  local_res8 = 0;
  if (0 < lVar11) {
    local_res18 = 0;
    do {
      uVar15 = ~uVar18 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar18 < (this->ROITriangleBuffer).ArrayNum) {
        uVar9 = uVar15;
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
      pFVar3 = (this->ActiveGroupSet).Ptr;
      pTVar13 = pFVar3->PolygroupAttrib;
      uVar9 = *(uint *)((this->ROITriangleBuffer).AllocatorInstance.Data + local_res18 * 4);
      if (pTVar13 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        pFVar4 = pFVar3->Mesh;
        if ((pFVar4->TriangleGroups).bIsSet == false) {
          iVar14 = -1;
        }
        else {
          if ((-1 < (int)uVar9) &&
             ((int)uVar9 <
              (int)((pFVar4->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar4->TriangleRefCounts).RefCounts.CurBlockUsed))) {
            lVar2 = (ulonglong)(uVar9 >> 9) * 8;
            if ((ushort)(*(short *)(*(longlong *)
                                     ((pFVar4->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                      .Data + lVar2) + (ulonglong)(uVar9 & 0x1ff) * 2) - 1U) <
                0xfffe) {
              iVar14 = *(int *)(*(longlong *)
                                 ((pFVar4->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data
                                 + lVar2) + (ulonglong)(uVar9 & 0x1ff) * 4);
              goto LAB_14cd30007;
            }
          }
          iVar14 = 0;
        }
      }
      else {
        iVar14 = *(int *)(*(longlong *)
                           (*(longlong *)&pTVar13->field_0x20 + (ulonglong)(uVar9 >> 9) * 8) +
                         (ulonglong)(uVar9 & 0x1ff) * 4);
      }
LAB_14cd30007:
      pFVar12 = (this->FrozenGroups).AllocatorInstance.Data;
      pFVar1 = pFVar12 + (longlong)(this->FrozenGroups).ArrayNum * 4;
      for (; pFVar12 != pFVar1; pFVar12 = pFVar12 + 4) {
        if (*(int *)pFVar12 == iVar14) goto LAB_14cd3022a;
      }
      uVar10 = 0;
      if ((int)uVar18 < (this->ROIGroupBuffer).ArrayNum) {
        uVar10 = uVar15;
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
      if (*(int *)((this->ROIGroupBuffer).AllocatorInstance.Data + local_res18 * 4) != iVar14) {
        this_00 = (this->ActiveGroupEditBuilder).Ptr;
        uVar10 = 0;
        if ((int)uVar18 < (this->ROIGroupBuffer).ArrayNum) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        FDynamicMeshGroupEditBuilder::SaveTriangle
                  (this_00,uVar9,iVar14,
                   *(int *)((this->ROIGroupBuffer).AllocatorInstance.Data + local_res18 * 4));
        pFVar3 = (this->ActiveGroupSet).Ptr;
        uVar10 = 0;
        if ((int)uVar18 < (this->ROIGroupBuffer).ArrayNum) {
          uVar10 = uVar15;
        }
        if ((uVar10 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        iVar17 = *(int *)((this->ROIGroupBuffer).AllocatorInstance.Data + local_res18 * 4);
        if (((-1 < (int)uVar9) &&
            ((int)uVar9 <
             (int)((param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (param_1->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
           (uVar16 = (ulonglong)(uVar9 >> 9),
           (ushort)(*(short *)(*(longlong *)
                                ((param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                 Data + uVar16 * 8) + (ulonglong)(uVar9 & 0x1ff) * 2) - 1U) < 0xfffe
           )) {
          if (pFVar3->PolygroupAttrib == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
            if ((param_1->TriangleGroups).bIsSet != false) {
              *(int *)(*(longlong *)
                        ((param_1->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                        uVar16 * 8) + (ulonglong)(uVar9 & 0x1ff) * 4) = iVar17;
              iVar14 = iVar17 + 1;
              if (iVar17 + 1 < param_1->GroupIDCounter) {
                iVar14 = param_1->GroupIDCounter;
              }
              param_1->GroupIDCounter = iVar14;
            }
          }
          else {
            pFVar5 = (param_1->AttributeSet).Ptr;
            this_01 = (FDynamicMeshAttributeSet *)0x0;
            if (pFVar5 != (FDynamicMeshAttributeSet *)0x0) {
              this_01 = pFVar5;
            }
            pTVar13 = UE::Geometry::FDynamicMeshAttributeSet::GetPolygroupLayer
                                (this_01,pFVar3->GroupLayerIndex);
            *(int *)(*(longlong *)(*(longlong *)&pTVar13->field_0x20 + uVar16 * 8) +
                    (ulonglong)(uVar9 & 0x1ff) * 4) = iVar17;
          }
        }
        iVar14 = iVar17 + 1;
        if (iVar17 + 1 < pFVar3->MaxGroupID) {
          iVar14 = pFVar3->MaxGroupID;
        }
        pFVar3->MaxGroupID = iVar14;
        iVar17 = local_res8 + 1;
        local_res8 = iVar17;
      }
LAB_14cd3022a:
      local_res18 = local_res18 + 1;
      uVar18 = uVar18 + 1;
    } while (local_res18 < lVar11);
  }
  return 0 < iVar17;
}

// ToggleFrozenGroup @ 14cd304c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMeshGroupPaintTool::ToggleFrozenGroup(UMeshGroupPaintTool *this,int param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *this_01;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FPolygroupSet *pFVar4;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar5;
  FDynamicMesh3 *pFVar6;
  code *pcVar7;
  longlong lVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FText *pFVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  int local_res10 [2];
  uint local_58 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  FText local_40;
  
  if (param_1 == 0) {
    return;
  }
  this_00 = &this->FrozenGroups;
  local_50.ArrayNum = (this->FrozenGroups).ArrayNum;
  lVar15 = (longlong)local_50.ArrayNum;
  pFVar2 = (this_00->AllocatorInstance).Data;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res10[0] = param_1;
  if (local_50.ArrayNum == 0) {
    local_50.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_50.ArrayNum,0,&local_50.AllocatorInstance,local_50.ArrayNum,
               &local_50.ArrayMax);
    memcpy(local_50.AllocatorInstance.Data,pFVar2,lVar15 << 2);
  }
  pFVar2 = (this_00->AllocatorInstance).Data;
  for (pFVar11 = pFVar2; pFVar11 != pFVar2 + (longlong)(this->FrozenGroups).ArrayNum * 4;
      pFVar11 = pFVar11 + 4) {
    if (*(int *)pFVar11 == local_res10[0]) {
      TArray<int,TSizedDefaultAllocator<32>_>::Remove(this_00,local_res10);
      goto LAB_14cd3060a;
    }
  }
  if (((pFVar2 <= (FScriptContainerElement *)local_res10) &&
      ((FScriptContainerElement *)local_res10 < pFVar2 + (longlong)(this->FrozenGroups).ArrayMax * 4
      )) && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = (this->FrozenGroups).ArrayNum;
  piVar1 = &(this->FrozenGroups).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&this_00->AllocatorInstance,piVar1);
  }
  (this->FrozenGroups).ArrayNum = iVar10 + 1;
  *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_res10[0];
LAB_14cd3060a:
  lVar15 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  this_01 = &this->TempROIBuffer;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(this_01,0,No);
  uVar14 = 0;
  uVar16 = *(int *)(lVar15 + 0x144) + *(int *)(lVar15 + 0x140) * 0x200;
  if ((uVar16 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar15 + 0x148) - 1U))) {
    uVar14 = 1;
    bVar9 = uVar16 == 1;
    if ((int)uVar16 < 2) goto LAB_14cd306b3;
    do {
      lVar8 = (ulonglong)(uVar14 & 0x1ff) * 2;
      lVar3 = (*(undefined8 **)(lVar15 + 0x148))[uVar14 >> 9];
      if ((*(short *)(lVar8 + lVar3) != 0) && (*(short *)(lVar8 + lVar3) != -1)) break;
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (int)uVar16);
  }
  bVar9 = uVar14 == uVar16;
LAB_14cd306b3:
  if (!bVar9) {
LAB_14cd306c0:
    do {
      pFVar4 = (this->ActiveGroupSet).Ptr;
      pTVar5 = pFVar4->PolygroupAttrib;
      if (pTVar5 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        pFVar6 = pFVar4->Mesh;
        if ((pFVar6->TriangleGroups).bIsSet == false) {
          iVar10 = -1;
        }
        else {
          if ((-1 < (int)uVar14) &&
             ((int)uVar14 <
              (int)((pFVar6->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar6->TriangleRefCounts).RefCounts.CurBlockUsed))) {
            lVar3 = (ulonglong)(uVar14 >> 9) * 8;
            if ((ushort)(*(short *)(*(longlong *)
                                     ((pFVar6->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                      .Data + lVar3) + (ulonglong)(uVar14 & 0x1ff) * 2) - 1U) <
                0xfffe) {
              iVar10 = *(int *)(*(longlong *)
                                 ((pFVar6->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data
                                 + lVar3) + (ulonglong)(uVar14 & 0x1ff) * 4);
              goto LAB_14cd3076e;
            }
          }
          iVar10 = 0;
        }
      }
      else {
        iVar10 = *(int *)(*(longlong *)
                           (*(longlong *)&pTVar5->field_0x20 + (ulonglong)(uVar14 >> 9) * 8) +
                         (ulonglong)(uVar14 & 0x1ff) * 4);
      }
LAB_14cd3076e:
      local_58[0] = uVar14;
      if (iVar10 == local_res10[0]) {
        pFVar2 = (this_01->AllocatorInstance).Data;
        if (((pFVar2 <= (FScriptContainerElement *)local_58) &&
            ((FScriptContainerElement *)local_58 <
             pFVar2 + (longlong)(this->TempROIBuffer).ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = (this->TempROIBuffer).ArrayNum;
        piVar1 = &(this->TempROIBuffer).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&this_01->AllocatorInstance,piVar1);
        }
        (this->TempROIBuffer).ArrayNum = iVar10 + 1;
        *(uint *)((this_01->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_58[0];
      }
      uVar14 = uVar14 + 1;
      if ((int)uVar14 < (int)uVar16) {
        do {
          lVar3 = (ulonglong)(uVar14 >> 9) * 8;
          lVar8 = (ulonglong)(uVar14 & 0x1ff) * 2;
          if ((*(short *)(lVar8 + *(longlong *)(lVar3 + *(longlong *)(lVar15 + 0x148))) != 0) &&
             (*(short *)(lVar8 + *(longlong *)(*(longlong *)(lVar15 + 0x148) + lVar3)) != -1))
          goto LAB_14cd306c0;
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)uVar16);
      }
    } while (uVar14 != uVar16);
  }
  pFVar12 = FText::AsLocalizable_Advanced_LocText
                      (&local_40,L"UMeshGroupPaintTool",L"ToggleFrozenGroupChange",
                       L"Toggle Frozen Group");
  EmitFrozenGroupsChange(this,&local_50,this_00,pFVar12);
  if (local_40.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_40.TextData.Reference + 0x10))();
  }
  UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
            ((this->DynamicMeshComponent).field0_0x0.DebugPtr,this_01,VertexColors);
  plVar13 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  (**(code **)(*plVar13 + 0x368))(plVar13);
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return;
}

// UpdateActiveGroupLayer @ 14cd31ff0

void __thiscall UMeshGroupPaintTool::UpdateActiveGroupLayer(UMeshGroupPaintTool *this)

{
  TUniquePtr<UE::Geometry::FPolygroupSet,TDefaultDelete<UE::Geometry::FPolygroupSet>_> *pTVar1;
  FName FVar2;
  FPolygroupSet *pFVar3;
  bool bVar4;
  FDynamicMesh3 *pFVar5;
  FPolygroupSet *pFVar6;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined1 local_res8 [8];
  undefined8 local_18;
  undefined8 local_10;
  
  bVar4 = UPolygroupLayersProperties::HasSelectedPolygroup
                    ((this->PolygroupLayerProperties).field0_0x0.DebugPtr);
  if (bVar4) {
    FVar2 = ((this->PolygroupLayerProperties).field0_0x0.DebugPtr)->ActiveGroupLayer;
    pFVar5 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0x440))(this);
    pTVar7 = UE::Geometry::FindPolygroupLayerByName(pFVar5,FVar2);
    if (pTVar7 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      `UMeshGroupPaintTool::UpdateActiveGroupLayer'::__l7::<lambda_1>::operator()(local_res8);
    }
    pFVar5 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0x440))(this);
    pFVar6 = ::operator_new(0x18);
    if (pFVar6 == (FPolygroupSet *)0x0) {
      pFVar6 = (FPolygroupSet *)0x0;
    }
    else {
      pFVar6 = UE::Geometry::FPolygroupSet::FPolygroupSet(pFVar6,pFVar5,pTVar7);
    }
    puVar9 = &local_10;
  }
  else {
    pFVar5 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0x440))();
    pFVar6 = ::operator_new(0x18);
    if (pFVar6 == (FPolygroupSet *)0x0) {
      pFVar6 = (FPolygroupSet *)0x0;
      puVar9 = &local_18;
    }
    else {
      pFVar6 = UE::Geometry::FPolygroupSet::FPolygroupSet(pFVar6,pFVar5);
      puVar9 = &local_18;
    }
  }
  pTVar1 = &this->ActiveGroupSet;
  if (pTVar1 != (TUniquePtr<UE::Geometry::FPolygroupSet,TDefaultDelete<UE::Geometry::FPolygroupSet>_>
                 *)puVar9) {
    pFVar3 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar6;
    pFVar6 = (FPolygroupSet *)0x0;
    ::operator_delete(pFVar3,0x18);
  }
  ::operator_delete(pFVar6,0x18);
  (this->FrozenGroups).ArrayNum = 0;
  if ((this->FrozenGroups).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->FrozenGroups).AllocatorInstance,0,&(this->FrozenGroups).ArrayMax);
  }
  UDynamicMeshComponent::FastNotifyVertexAttributesUpdated
            ((this->DynamicMeshComponent).field0_0x0.DebugPtr,VertexColors);
  plVar8 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
                    /* WARNING: Could not recover jumptable at 0x00014cd32153. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x368))(plVar8,*(code **)(*plVar8 + 0x368));
  return;
}

// UpdateBrushPosition @ 14cd33770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UMeshGroupPaintTool::UpdateBrushPosition(UMeshGroupPaintTool *this,TRay<double> *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(**(code **)(*(longlong *)this + 0x478))();
  cVar2 = (**(code **)(*(longlong *)*puVar6 + 0x30))();
  if ((cVar2 != '\0') && (cVar2 != '\x01')) {
    if (cVar2 != '\x02') {
      return false;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshGroupPaintTool.cpp"
                       ,0x389,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  cVar2 = (**(code **)(*(longlong *)this + 0x540))(this,param_1,0);
  if (cVar2 != '\0') {
    cVar5 = (**(code **)(*(longlong *)*puVar6 + 0x48))();
    if (cVar5 != '\0') {
      UMeshSculptToolBase::AlignBrushToView((UMeshSculptToolBase *)this);
    }
  }
  return (bool)cVar2;
}

// UpdateBrushType @ 14cd33de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UMeshGroupPaintTool::UpdateBrushType(UMeshGroupPaintTool *this,EMeshGroupPaintBrushType param_1)

{
  code *pcVar1;
  longlong *plVar2;
  FText *pFVar3;
  FText local_38;
  FTextBuilder local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&BaseMessage,L"UMeshGroupPaintTool",L"OnStartTool",
                 L"Hold Shift to Erase. [/] and S/D change Size (+Shift to small-step). Shift+Q for New Group, Shift+G to pick Group, Shift+F to Freeze Group."
                );
      atexit(`UMeshGroupPaintTool::UpdateBrushType'::__l2::
             _dynamic_atexit_destructor_for__BaseMessage__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_28.Lines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Lines.ArrayNum = 0;
  local_28.Lines.ArrayMax = 0;
  local_28.IndentCount = 0;
  FTextBuilder::AppendLine(&local_28,&BaseMessage);
  UMeshSculptToolBase::SetActivePrimaryBrushType((UMeshSculptToolBase *)this,(uint)param_1);
  (**(code **)(*(longlong *)this + 0x338))(this,*(undefined8 *)&this->field_0x130,0);
  plVar2 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  pcVar1 = *(code **)(*plVar2 + 0x360);
  pFVar3 = FTextBuilder::ToText(&local_28,&local_38);
  (*pcVar1)(plVar2,pFVar3,2);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  DestructItems<FText,int>((FText *)local_28.Lines.AllocatorInstance.Data,local_28.Lines.ArrayNum);
  if ((FText *)local_28.Lines.AllocatorInstance.Data != (FText *)0x0) {
    FMemory::Free(local_28.Lines.AllocatorInstance.Data);
  }
  return;
}

// UpdateROI @ 14cd35b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMeshGroupPaintTool::UpdateROI(UMeshGroupPaintTool *this,FSculptBrushStamp *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  double dVar5;
  undefined8 uVar6;
  EMeshGroupPaintBrushAreaType EVar7;
  EMeshGroupPaintInteractionType EVar8;
  int iVar9;
  code *pcVar10;
  FScriptContainerElement *pFVar11;
  UGroupPaintBrushFilterProperties *pUVar12;
  undefined1 *puVar13;
  FPolygroupSet *pFVar14;
  TDynamicMeshScalarTriangleAttribute<int> *pTVar15;
  FDynamicMesh3 *pFVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  bool bVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar25;
  bool bVar26;
  char cVar27;
  bool bVar28;
  FName *pFVar29;
  FThreadSafeStaticStat<FStat_GroupPaintTool_UpdateROI> FVar30;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar31;
  uint uVar32;
  longlong lVar33;
  FName FVar34;
  int iVar35;
  int iVar36;
  undefined1 *puVar37;
  ulonglong uVar38;
  undefined1 *puVar39;
  uint *puVar40;
  uint uVar41;
  uint uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined1 auStackY_558 [32];
  undefined1 local_4f7;
  undefined1 local_4f6;
  undefined1 local_4f5;
  undefined1 local_4f4;
  undefined1 local_4f3;
  undefined1 local_4f2;
  undefined1 local_4f1;
  uint local_4f0;
  uint local_4ec;
  FDynamicMesh3 *local_4e8;
  undefined4 local_4e0;
  undefined4 local_4dc;
  uint local_4d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_4d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_4c0;
  FName local_4b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_4a8;
  longlong lStack_4a0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_498;
  uint uStack_490;
  int iStack_48c;
  int iStack_488;
  undefined4 uStack_484;
  int local_480;
  undefined4 uStack_47c;
  float local_478 [2];
  FName local_470;
  TArray<int,TSizedDefaultAllocator<32>_> local_468;
  FColor_u_0 local_458;
  int local_454;
  undefined8 local_450;
  undefined4 local_448 [2];
  FName local_440;
  FSculptBrushStamp *local_438;
  FName local_430;
  TArray<int,TSizedDefaultAllocator<32>_> local_420;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_410;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3f0;
  int local_3d0;
  double local_3c8;
  undefined1 **local_3c0;
  int local_3b8;
  int local_3b4;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  int local_39c;
  int local_398;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_390;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_388;
  undefined8 uStack_368;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_360;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_358;
  undefined8 uStack_338;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_330;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_328;
  undefined8 uStack_308;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_300;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2f8;
  undefined8 uStack_2d8;
  code *local_2d0;
  undefined1 ***local_2c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2c0;
  UMeshGroupPaintTool *local_2b8;
  code *local_2b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **local_2a8;
  code *local_2a0;
  FDynamicMesh3 ***local_298;
  code *local_290;
  FDynamicMesh3 ***local_288;
  undefined1 *local_280;
  double *local_278;
  UMeshGroupPaintTool *local_270;
  double *local_268;
  FDynamicMesh3 **local_260;
  undefined1 *local_258;
  undefined1 *local_250;
  FDynamicMesh3 **local_248;
  TFrame3<double> *local_240;
  float *local_238;
  UMeshGroupPaintTool *local_230;
  FDynamicMesh3 **local_228;
  TFrame3<double> *local_220;
  float *local_218;
  undefined1 **local_210;
  TVector<double>_u_0 local_208;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined8 local_1c8;
  FName local_1c0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_1b8;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_138;
  undefined4 local_fc;
  undefined4 local_dc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_d8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_558;
  uVar42 = 0;
  FVar30 = StatPtr_GroupPaintTool_UpdateROI;
  local_438 = param_1;
  if (StatPtr_GroupPaintTool_UpdateROI == (FThreadSafeStaticStat<FStat_GroupPaintTool_UpdateROI>)0x0
     ) {
    pFVar29 = ::FName::FName(&local_1c0,"GroupPaintTool_UpdateROI");
    FVar30 = (FThreadSafeStaticStat<FStat_GroupPaintTool_UpdateROI>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_GroupPaintTool_UpdateROI,*pFVar29,
                        L"GroupPaintTool_UpdateROI","STATGROUP_GroupPaintTool","STATCAT_Advanced",
                        L"GroupPaintTool",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar34 = *(FName *)FVar30;
  bVar18 = false;
  bVar19 = false;
  local_430.ComparisonIndex.Value = 0;
  local_430.Number = 0;
  bVar26 = false;
  bVar28 = false;
  if ((FVar34.ComparisonIndex.Value.Value != 0) || (FVar34.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_458.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_458._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
      bVar18 = false;
      bVar19 = true;
      bVar26 = false;
      bVar28 = true;
      if (-1 < CpuChannel->Enabled) {
        local_440.ComparisonIndex.Value = FVar34.ComparisonIndex.Value.Value;
        local_440.Number = FVar34.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_440,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshGroupPaintTool.cpp"
                   ,0x1a8);
        bVar18 = true;
        bVar19 = true;
        bVar26 = true;
        bVar28 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_4b0 = FVar34;
      local_470 = FVar34;
      FThreadStats::AddMessage(FVar34,CycleScopeStart);
      bVar26 = true;
      goto LAB_14cd35cce;
    }
  }
  bVar19 = bVar28;
  bVar18 = bVar26;
  bVar26 = false;
  local_470 = local_430;
  FVar34 = local_430;
LAB_14cd35cce:
  cVar27 = (**(code **)(*(longlong *)this + 0x570))(this);
  lVar33 = 0xc4;
  if (cVar27 == '\0') {
    lVar33 = 0xbc;
  }
  local_4d8 = *(uint *)((longlong)&((this->FilterProperties).field0_0x0.DebugPtr)->_padding_ +
                       lVar33);
  local_4e8 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0x440))(this);
  pcVar10 = *(code **)(*(longlong *)this + 0x4a0);
  dVar43 = (double)(**(code **)(*(longlong *)this + 0x4a0))(this);
  dVar44 = (double)(*pcVar10)(this);
  uVar23 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar21 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_168 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_160 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_478[0] = (float)(dVar43 * dVar44);
  dVar45 = (double)(**(code **)(*(longlong *)this + 0x4a0))(this);
  uVar24 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar22 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar20 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_158 = (double)uVar23;
  dVar43 = (param_1->LocalFrame).Origin.field0_0x0._s_0.Y;
  dVar44 = (param_1->LocalFrame).Origin.field0_0x0._s_0.X;
  local_150 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_148 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  dVar5 = (param_1->LocalFrame).Origin.field0_0x0._s_0.Z;
  dVar46 = (double)(**(code **)(*(longlong *)this + 0x4a0))(this);
  local_140 = (double)uVar24;
  local_208._s_0.X = (param_1->LocalFrame).Origin.field0_0x0._s_0.X - (double)uVar20 * dVar46;
  local_208._s_0.Z = (param_1->LocalFrame).Origin.field0_0x0._s_0.Z - (double)uVar24 * dVar46;
  local_208._s_0.Y = (param_1->LocalFrame).Origin.field0_0x0._s_0.Y - (double)uVar22 * dVar46;
  local_1f0 = (double)uVar6 * dVar45 + dVar44;
  local_1e8 = (double)uVar21 * dVar45 + dVar43;
  local_1e0 = (double)uVar23 * dVar45 + dVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->TriangleROI);
  local_4f0 = *(uint *)&this->field_0x500;
  if (((-1 < (int)local_4f0) &&
      ((int)local_4f0 <
       (int)((local_4e8->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (local_4e8->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((local_4e8->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)(local_4f0 >> 9) * 8) + (ulonglong)(local_4f0 & 0x1ff) * 2) -
              1U) < 0xfffe)) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->TriangleROI,&local_3b8,(bool *)&local_4f0);
  }
  if ((((int)local_4f0 < 0) ||
      ((int)((local_4e8->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (local_4e8->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)local_4f0)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((local_4e8->TriangleRefCounts).RefCounts.Blocks.
                                     AllocatorInstance.Data + (ulonglong)(local_4f0 >> 9) * 8) +
                                  (ulonglong)(local_4f0 & 0x1ff) * 2) - 1U))) {
    uVar47 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
    uVar48 = (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20)
    ;
    local_1d8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dStack_1d0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  }
  else {
    lVar33 = (longlong)(int)local_4f0;
    uVar41 = uVar42;
    if ((int)local_4f0 < (this->TriNormals).ArrayNum) {
      uVar41 = ~local_4f0 >> 0x1f;
    }
    if ((uVar41 == 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar28)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar11 = (this->TriNormals).AllocatorInstance.Data;
    pFVar4 = pFVar11 + lVar33 * 0x18;
    uVar6 = *(undefined8 *)(pFVar11 + lVar33 * 0x18 + 0x10);
    uVar47 = (undefined4)uVar6;
    uVar48 = (undefined4)((ulonglong)uVar6 >> 0x20);
    local_1d8 = *(double *)pFVar4;
    dStack_1d0 = *(double *)(pFVar4 + 8);
  }
  uVar41 = local_4f0;
  pUVar12 = (this->FilterProperties).field0_0x0.DebugPtr;
  local_1c8 = CONCAT44(uVar48,uVar47);
  EVar7 = pUVar12->BrushAreaMode;
  if ((EVar7 == Volumetric) ||
     (__real_43340000 < pUVar12->AngleThreshold || __real_43340000 == pUVar12->AngleThreshold)) {
    local_4f7 = 0;
  }
  else {
    local_4f7 = 1;
  }
  local_3c8 = cos((double)pUVar12->AngleThreshold * __real_3f91df46a2529d39);
  local_4f6 = pUVar12->bUVSeams;
  local_4f5 = pUVar12->bNormalSeams;
  local_280 = &local_4f7;
  local_278 = &local_1d8;
  local_268 = &local_3c8;
  local_260 = &local_4e8;
  local_258 = &local_4f6;
  local_250 = &local_4f5;
  EVar8 = pUVar12->SubToolType;
  local_270 = this;
  if (EVar7 == Volumetric) {
    local_248 = &local_4e8;
    local_240 = &local_438->LocalFrame;
    local_238 = local_478;
    local_298 = &local_248;
    local_2a0 = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshGroupPaintTool::UpdateROI'::__l8::<lambda_2>,void,int>::
                Call;
    local_230 = this;
    UE::Geometry::FSparseDynamicOctree3::RangeQuery
              ((FSparseDynamicOctree3 *)&this->Octree,(TAxisAlignedBox3<double> *)&local_208._s_0,
               (TFunctionRef<void___cdecl(int)> *)&local_2a0);
  }
  else {
    bVar28 = UE::Geometry::FDynamicMesh3::IsTriangle(local_4e8,uVar41);
    if (bVar28) {
      local_468.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_468.ArrayNum = 0;
      local_468.ArrayMax = 0;
      iVar35 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_468.AllocatorInstance,&local_468.ArrayMax);
      local_468.ArrayNum = iVar35 + 1;
      *(uint *)(local_468.AllocatorInstance.Data + (longlong)iVar35 * 4) = local_4f0;
      local_228 = &local_4e8;
      local_220 = &local_438->LocalFrame;
      local_218 = local_478;
      local_210 = &local_280;
      local_288 = &local_228;
      local_290 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMeshGroupPaintTool::UpdateROI'::__l13::<lambda_3>,bool,int,int>
                  ::Call;
      UE::Geometry::FMeshConnectedComponents::GrowToConnectedTriangles
                (local_4e8,&local_468,&this->TriangleROI,&this->TempROIBuffer,
                 (TFunctionRef<bool___cdecl(int,int)> *)&local_290);
      if (local_468.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_468.AllocatorInstance.Data);
      }
    }
  }
  local_4b0.ComparisonIndex.Value = 1;
  local_4b0.Number = 0;
  if (EVar8 == Fill) {
    local_410._padding_._4_4_ = 1;
    pTVar1 = &this->TriangleROI;
    local_410.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->TriangleROI).Elements.field_0x10;
    local_4d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4d0.ArrayNum = 0;
    local_4d0.ArrayMax = 0;
    local_410._padding_._0_4_ = 0;
    local_410.UnvisitedBitMask = 0xffffffff;
    local_410.CurrentBitIndex = 0;
    local_410.BaseBitIndex = 0;
    if (*(int *)&(this->TriangleROI).Elements.field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_410);
    }
    uVar42 = *(uint *)&(this->TriangleROI).Elements.field_0x28;
    lStack_4a0 = CONCAT44(local_410._padding_._4_4_,(undefined4)local_410._padding_);
    iStack_48c = local_410.CurrentBitIndex;
    uStack_490 = local_410.UnvisitedBitMask;
    uStack_484 = local_410._28_4_;
    iStack_488 = local_410.BaseBitIndex;
    local_480 = *(int *)&(this->TriangleROI).Elements.field_0x8 -
                *(int *)&(this->TriangleROI).Elements.field_0x34;
    uVar41 = uVar42 & 0xffffffe0;
    pTStack_498 = local_410.Array;
    iVar35 = (int)uVar42 >> 5;
    uStack_368 = CONCAT44(uStack_47c,local_480);
    TStack_388.Array = local_410.Array;
    local_4a8 = pTVar1;
    local_390 = pTVar1;
    TStack_388._padding_ = lStack_4a0;
    TStack_388._16_8_ = _uStack_490;
    TStack_388._24_8_ = _iStack_488;
    if (((int)uVar42 < 0) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar28)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    uVar32 = *(uint *)&(this->TriangleROI).Elements.field_0x28;
    if (uVar42 != uVar32) {
      puVar13 = *(undefined1 **)&(this->TriangleROI).Elements.field_0x20;
      puVar37 = &(this->TriangleROI).Elements.field_0x10;
      if (puVar13 != (undefined1 *)0x0) {
        puVar37 = puVar13;
      }
      uVar42 = -1 << ((byte)uVar42 & 0x1f) & *(uint *)(puVar37 + (longlong)iVar35 * 4);
      while (uVar42 == 0) {
        lVar33 = (longlong)iVar35;
        uVar41 = uVar41 + 0x20;
        iVar35 = iVar35 + 1;
        uVar42 = uVar32;
        if ((int)((uVar32 - 1) + ((int)(uVar32 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar35)
        goto LAB_14cd362d5;
        uVar42 = *(uint *)(puVar37 + lVar33 * 4 + 4);
      }
      uVar38 = (ulonglong)(-uVar42 & uVar42) * 2 + 1;
      lVar33 = 0x3f;
      if (uVar38 != 0) {
        for (; uVar38 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      local_3b4 = (int)lVar33;
      uVar42 = local_3b4 + -1 + uVar41;
      if ((int)uVar32 < (int)uVar42) {
        uVar42 = uVar32;
      }
    }
LAB_14cd362d5:
    while( true ) {
      pTVar1 = local_390;
      if (*(int *)&(local_390->Elements).field_0x8 - *(int *)&(local_390->Elements).field_0x34 !=
          (int)uStack_368) {
        local_4f4 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4f4);
      }
      if (((TStack_388.CurrentBitIndex == uVar42) &&
          (TStack_388.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->TriangleROI).Elements.field_0x10)) &&
         (pTVar1 == &this->TriangleROI)) break;
      local_4e0 = *(undefined4 *)
                   (*(longlong *)&pTVar1->Elements + (longlong)TStack_388.CurrentBitIndex * 0xc);
      if (((local_4d0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4e0) &&
          ((FScriptContainerElement *)&local_4e0 <
           local_4d0.AllocatorInstance.Data + (longlong)local_4d0.ArrayMax * 4)) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar28)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (local_4d0.ArrayNum == local_4d0.ArrayMax) {
        iVar35 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_4d0.AllocatorInstance,&local_4d0.ArrayMax);
        local_4d0.ArrayNum = iVar35;
      }
      lVar33 = (longlong)local_4d0.ArrayNum;
      local_4d0.ArrayNum = local_4d0.ArrayNum + 1;
      *(undefined4 *)(local_4d0.AllocatorInstance.Data + lVar33 * 4) = local_4e0;
      TStack_388.UnvisitedBitMask = TStack_388.UnvisitedBitMask & ~TStack_388._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_388);
    }
    local_3c0 = &local_280;
    local_2c8 = &local_3c0;
    local_2d0 = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshGroupPaintTool::UpdateROI'::__l16::<lambda_4>,bool,int,int>
                ::Call;
    UE::Geometry::FMeshConnectedComponents::GrowToConnectedTriangles
              (local_4e8,&local_4d0,&this->TriangleROI,&this->TempROIBuffer,
               (TFunctionRef<bool___cdecl(int,int)> *)&local_2d0);
    if (local_4d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4d0.AllocatorInstance.Data);
    }
  }
  else if (EVar8 == GroupFill) {
    local_4c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    puVar13 = &(this->TriangleROI).Elements.field_0x10;
    local_4c0.ArrayNum = 0;
    local_4c0.ArrayMax = 0;
    pTVar1 = &this->TriangleROI;
    local_d8.Elements._0_8_ = 0;
    local_d8.Elements._8_8_ = 0;
    local_d8.Elements._32_8_ = 0;
    local_d8.Elements._40_4_ = 0;
    local_d8.Elements._44_4_ = 0x80;
    local_d8.Elements._48_4_ = 0xffffffff;
    local_d8.Elements._52_4_ = 0;
    local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_d8.HashSize = 0;
    local_3f0._padding_._0_4_ = 0;
    local_3f0._padding_._4_4_ = 1;
    local_3f0.UnvisitedBitMask = 0xffffffff;
    local_3f0.CurrentBitIndex = 0;
    local_3f0.BaseBitIndex = 0;
    local_3f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar13;
    if (*(int *)&(this->TriangleROI).Elements.field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3f0);
    }
    lStack_4a0 = CONCAT44(local_3f0._padding_._4_4_,(undefined4)local_3f0._padding_);
    iStack_48c = local_3f0.CurrentBitIndex;
    uStack_490 = local_3f0.UnvisitedBitMask;
    uStack_484 = local_3f0._28_4_;
    iStack_488 = local_3f0.BaseBitIndex;
    local_480 = *(int *)&(this->TriangleROI).Elements.field_0x8 -
                *(int *)&(this->TriangleROI).Elements.field_0x34;
    pTStack_498 = local_3f0.Array;
    uStack_338 = CONCAT44(uStack_47c,local_480);
    TStack_358.Array = local_3f0.Array;
    local_4a8 = pTVar1;
    local_360 = pTVar1;
    TStack_358._padding_ = lStack_4a0;
    TStack_358._16_8_ = _uStack_490;
    TStack_358._24_8_ = _iStack_488;
    pTVar31 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_138,(TBitArray<FDefaultBitArrayAllocator> *)puVar13,
                         *(int *)&(this->TriangleROI).Elements.field_0x28);
    uVar41 = local_4d8;
    lStack_4a0 = pTVar31->_padding_;
    pTVar17 = pTVar31->Array;
    uVar6._0_4_ = pTVar31->UnvisitedBitMask;
    uVar6._4_4_ = pTVar31->CurrentBitIndex;
    iStack_488 = pTVar31->BaseBitIndex;
    uStack_484 = *(undefined4 *)&pTVar31->field_0x1c;
    pTStack_498 = pTVar17;
    _uStack_490 = uVar6;
    while( true ) {
      pTVar25 = local_360;
      if (*(int *)&(local_360->Elements).field_0x8 - *(int *)&(local_360->Elements).field_0x34 !=
          (int)uStack_338) {
        local_4f3 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4f3);
      }
      if (((TStack_358.CurrentBitIndex == uVar6._4_4_) && (TStack_358.Array == pTVar17)) &&
         (pTVar25 == pTVar1)) break;
      local_4ec = *(uint *)(*(longlong *)&pTVar25->Elements +
                           (longlong)TStack_358.CurrentBitIndex * 0xc);
      pFVar14 = (this->ActiveGroupSet).Ptr;
      pTVar15 = pFVar14->PolygroupAttrib;
      if (pTVar15 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
        pFVar16 = pFVar14->Mesh;
        if ((pFVar16->TriangleGroups).bIsSet == false) {
          uVar32 = 0xffffffff;
        }
        else {
          uVar32 = uVar42;
          if ((-1 < (int)local_4ec) &&
             ((int)local_4ec <
              (int)((pFVar16->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar16->TriangleRefCounts).RefCounts.CurBlockUsed))) {
            if ((ushort)(*(short *)(*(longlong *)
                                     ((pFVar16->TriangleRefCounts).RefCounts.Blocks.
                                      AllocatorInstance.Data + (ulonglong)(local_4ec >> 9) * 8) +
                                   (ulonglong)(local_4ec & 0x1ff) * 2) - 1U) < 0xfffe) {
              uVar32 = *(uint *)(*(longlong *)
                                  ((pFVar16->TriangleGroups).TypedValue.Blocks.AllocatorInstance.
                                   Data + (ulonglong)(local_4ec >> 9) * 8) +
                                (ulonglong)(local_4ec & 0x1ff) * 4);
            }
          }
        }
      }
      else {
        uVar32 = *(uint *)(*(longlong *)
                            (*(longlong *)&pTVar15->field_0x20 + (ulonglong)(local_4ec >> 9) * 8) +
                          (ulonglong)(local_4ec & 0x1ff) * 4);
      }
      if (uVar32 != uVar41) {
        if (((local_4c0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_4ec) &&
            ((FScriptContainerElement *)&local_4ec <
             local_4c0.AllocatorInstance.Data + (longlong)local_4c0.ArrayMax * 4)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar35 = local_4c0.ArrayNum;
        if (local_4c0.ArrayNum == local_4c0.ArrayMax) {
          iVar35 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_4c0.AllocatorInstance,&local_4c0.ArrayMax);
        }
        local_4c0.ArrayNum = iVar35 + 1;
        *(uint *)(local_4c0.AllocatorInstance.Data + (longlong)iVar35 * 4) = local_4ec;
        local_454 = UE::Geometry::FPolygroupSet::GetGroup((this->ActiveGroupSet).Ptr,local_4ec);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  (&local_d8,&local_3b0,(bool *)&local_454);
      }
      TStack_358.UnvisitedBitMask = TStack_358.UnvisitedBitMask & ~TStack_358._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_358);
    }
    local_2c0 = &local_d8;
    local_2a8 = &local_2c0;
    local_2b0 = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshGroupPaintTool::UpdateROI'::__l24::<lambda_5>,bool,int,int>
                ::Call;
    local_2b8 = this;
    UE::Geometry::FMeshConnectedComponents::GrowToConnectedTriangles
              (local_4e8,&local_4c0,&this->TriangleROI,&this->TempROIBuffer,
               (TFunctionRef<bool___cdecl(int,int)> *)&local_2b0);
    FVar34 = local_470;
    local_d8.HashSize = 0;
    if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_d8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_d8.Elements);
    if (local_4c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c0.AllocatorInstance.Data);
    }
  }
  iVar35 = 0;
  if (((this->FilterProperties).field0_0x0.DebugPtr)->VisibilityFilter != None) {
    local_420.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_420.ArrayNum = 0;
    local_420.ArrayMax = 0;
    ApplyVisibilityFilter(this,&this->TriangleROI,&this->TempROIBuffer,&local_420);
    if (local_420.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_420.AllocatorInstance.Data);
    }
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->VertexSetBuffer);
  pTStack_498 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->TriangleROI).Elements.field_0x10;
  iVar36 = *(int *)&(this->TriangleROI).Elements.field_0x28;
  local_4a8 = &this->TriangleROI;
  local_470.ComparisonIndex.Value = (uint)local_4b0.ComparisonIndex.Value;
  iStack_488 = 0;
  iStack_48c = iStack_488;
  if (iVar36 != 0) {
    puVar40 = *(uint **)&(this->TriangleROI).Elements.field_0x20;
    if (puVar40 == (uint *)0x0) {
      puVar40 = (uint *)pTStack_498;
    }
    uVar42 = *puVar40;
    iStack_488 = iVar35;
    while (uVar42 == 0) {
      lVar33 = (longlong)iVar35;
      iStack_488 = iStack_488 + 0x20;
      iVar35 = iVar35 + 1;
      iStack_48c = iVar36;
      if ((int)(iVar36 + -1 + (iVar36 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar35) goto LAB_14cd36544;
      uVar42 = puVar40[lVar33 + 1];
    }
    local_470 = (FName)(ulonglong)(-uVar42 & uVar42);
    uVar38 = (longlong)local_470 * 2 + 1;
    lVar33 = 0x3f;
    if (uVar38 != 0) {
      for (; uVar38 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_3ac = (int)lVar33;
    iStack_48c = iStack_488 + -1 + local_3ac;
    if (iVar36 < iStack_48c) {
      iStack_48c = iVar36;
    }
  }
LAB_14cd36544:
  local_480 = *(int *)&(this->TriangleROI).Elements.field_0x8 -
              *(int *)&(this->TriangleROI).Elements.field_0x34;
  uVar42 = *(uint *)&(this->TriangleROI).Elements.field_0x28;
  uStack_490 = 0xffffffff;
  lStack_4a0 = CONCAT44((uint)local_470.ComparisonIndex.Value,iVar35);
  uVar41 = uVar42 & 0xffffffe0;
  uStack_484 = local_fc;
  iVar35 = (int)uVar42 >> 5;
  uStack_308 = CONCAT44(uStack_47c,local_480);
  TStack_328.UnvisitedBitMask = 0xffffffff;
  TStack_328.CurrentBitIndex = iStack_48c;
  TStack_328.BaseBitIndex = iStack_488;
  TStack_328._28_4_ = local_fc;
  local_330 = local_4a8;
  TStack_328._padding_ = lStack_4a0;
  TStack_328.Array = pTStack_498;
  if (((int)uVar42 < 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar28)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar32 = *(uint *)&(this->TriangleROI).Elements.field_0x28;
  if (uVar42 != uVar32) {
    puVar13 = *(undefined1 **)&(this->TriangleROI).Elements.field_0x20;
    puVar37 = &(this->TriangleROI).Elements.field_0x10;
    if (puVar13 != (undefined1 *)0x0) {
      puVar37 = puVar13;
    }
    uVar42 = -1 << ((byte)uVar42 & 0x1f) & *(uint *)(puVar37 + (longlong)iVar35 * 4);
    while (uVar42 == 0) {
      lVar33 = (longlong)iVar35;
      uVar41 = uVar41 + 0x20;
      iVar35 = iVar35 + 1;
      uVar42 = uVar32;
      if ((int)((uVar32 - 1) + ((int)(uVar32 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar35)
      goto LAB_14cd36665;
      uVar42 = *(uint *)(puVar37 + lVar33 * 4 + 4);
    }
    uVar38 = (ulonglong)(-uVar42 & uVar42) * 2 + 1;
    lVar33 = 0x3f;
    if (uVar38 != 0) {
      for (; uVar38 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_3a8 = (int)lVar33;
    uVar42 = local_3a8 + -1 + uVar41;
    if ((int)uVar32 < (int)uVar42) {
      uVar42 = uVar32;
    }
  }
LAB_14cd36665:
  while( true ) {
    pTVar1 = local_330;
    if (*(int *)&(local_330->Elements).field_0x8 - *(int *)&(local_330->Elements).field_0x34 !=
        (int)uStack_308) {
      local_4f2 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4f2);
    }
    if (((TStack_328.CurrentBitIndex == uVar42) &&
        (TStack_328.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->TriangleROI).Elements.field_0x10)) &&
       (pTVar1 == &this->TriangleROI)) break;
    uVar41 = *(uint *)(*(longlong *)&pTVar1->Elements + (longlong)TStack_328.CurrentBitIndex * 0xc);
    uVar38 = (ulonglong)(uVar41 & 0x1ff);
    lVar33 = *(longlong *)
              ((local_4e8->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar41 >> 9) * 8);
    local_450 = *(undefined8 *)(lVar33 + uVar38 * 0xc);
    local_448[0] = *(undefined4 *)(lVar33 + 8 + uVar38 * 0xc);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->VertexSetBuffer,&local_3a4,(bool *)&local_450);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->VertexSetBuffer,&local_3a0,(bool *)((longlong)&local_450 + 4));
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->VertexSetBuffer,&local_39c,(bool *)local_448);
    TStack_328.UnvisitedBitMask = TStack_328.UnvisitedBitMask & ~TStack_328._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_328);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->VertexROI,0,No);
  iVar36 = 0;
  local_1b8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_1b8.Elements._48_8_ = _UNK_150631d98;
  local_1b8.Elements._0_8_ = 0;
  local_1b8.Elements._8_8_ = 0;
  local_1b8.Elements._32_8_ = 0;
  local_1b8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  iVar35 = 0;
  local_1b8.HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&local_1b8,&this->VertexSetBuffer);
  BufferUtil::AppendElements<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            (&this->VertexROI,&local_1b8);
  uVar42 = *(int *)&(this->TriangleROI).Elements.field_0x8 -
           *(int *)&(this->TriangleROI).Elements.field_0x34;
  if ((int)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar42);
  }
  piVar2 = &(this->ROITriangleBuffer).ArrayMax;
  if (*piVar2 < (int)uVar42) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar42,&(this->ROITriangleBuffer).AllocatorInstance,
               (this->ROITriangleBuffer).ArrayNum,piVar2);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->ROITriangleBuffer,0,No);
  pTStack_498 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->TriangleROI).Elements.field_0x10;
  iVar9 = *(int *)&(this->TriangleROI).Elements.field_0x28;
  pTVar1 = &this->TriangleROI;
  iStack_48c = iVar35;
  if (iVar9 != 0) {
    puVar40 = *(uint **)&(this->TriangleROI).Elements.field_0x20;
    if (puVar40 == (uint *)0x0) {
      puVar40 = (uint *)pTStack_498;
    }
    uVar42 = *puVar40;
    iVar35 = 0;
    while (uVar42 == 0) {
      lVar33 = (longlong)iVar35;
      iVar36 = iVar36 + 0x20;
      iVar35 = iVar35 + 1;
      iStack_48c = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar35) goto LAB_14cd36c21;
      uVar42 = puVar40[lVar33 + 1];
    }
    local_4b0 = (FName)(ulonglong)(-uVar42 & uVar42);
    uVar38 = (longlong)local_4b0 * 2 + 1;
    lVar33 = 0x3f;
    if (uVar38 != 0) {
      for (; uVar38 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_398 = (int)lVar33;
    iStack_48c = iVar36 + -1 + local_398;
    if (iVar9 < iStack_48c) {
      iStack_48c = iVar9;
    }
  }
LAB_14cd36c21:
  uVar42 = *(uint *)&(this->TriangleROI).Elements.field_0x28;
  puVar13 = &(this->TriangleROI).Elements.field_0x10;
  local_480 = *(int *)&(this->TriangleROI).Elements.field_0x8 -
              *(int *)&(this->TriangleROI).Elements.field_0x34;
  lStack_4a0 = CONCAT44((uint)local_4b0.ComparisonIndex.Value,iVar35);
  uVar41 = uVar42 & 0xffffffe0;
  uStack_490 = 0xffffffff;
  local_4d8 = -1 << ((byte)uVar42 & 0x1f);
  uStack_484 = local_dc;
  iStack_488 = iVar36;
  iVar35 = (int)uVar42 >> 5;
  uStack_2d8 = CONCAT44(uStack_47c,local_480);
  TStack_2f8.UnvisitedBitMask = 0xffffffff;
  TStack_2f8.CurrentBitIndex = iStack_48c;
  TStack_2f8.BaseBitIndex = iVar36;
  TStack_2f8._28_4_ = local_dc;
  local_4a8 = pTVar1;
  local_300 = pTVar1;
  TStack_2f8._padding_ = lStack_4a0;
  TStack_2f8.Array = pTStack_498;
  if (((int)uVar42 < 0) &&
     (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar28)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar32 = *(uint *)&(this->TriangleROI).Elements.field_0x28;
  if (uVar42 != uVar32) {
    puVar37 = *(undefined1 **)&(this->TriangleROI).Elements.field_0x20;
    puVar39 = puVar13;
    if (puVar37 != (undefined1 *)0x0) {
      puVar39 = puVar37;
    }
    uVar42 = local_4d8 & *(uint *)(puVar39 + (longlong)iVar35 * 4);
    while (uVar42 == 0) {
      lVar33 = (longlong)iVar35;
      uVar41 = uVar41 + 0x20;
      iVar35 = iVar35 + 1;
      uVar42 = uVar32;
      if ((int)((uVar32 - 1) + ((int)(uVar32 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar35)
      goto LAB_14cd36d50;
      uVar42 = *(uint *)(puVar39 + lVar33 * 4 + 4);
    }
    uVar38 = (ulonglong)(-uVar42 & uVar42) * 2 + 1;
    lVar33 = 0x3f;
    if (uVar38 != 0) {
      for (; uVar38 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_3d0 = (int)lVar33;
    uVar42 = local_3d0 + -1 + uVar41;
    if ((int)uVar32 < (int)uVar42) {
      uVar42 = uVar32;
    }
  }
LAB_14cd36d50:
  while( true ) {
    pTVar25 = local_300;
    if (*(int *)&(local_300->Elements).field_0x8 - *(int *)&(local_300->Elements).field_0x34 !=
        (int)uStack_2d8) {
      local_4f1 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_4f1);
    }
    if (((TStack_2f8.CurrentBitIndex == uVar42) &&
        (TStack_2f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar13)) &&
       (pTVar25 == pTVar1)) break;
    pTVar3 = &this->ROITriangleBuffer;
    local_4dc = *(undefined4 *)
                 (*(longlong *)&pTVar25->Elements + (longlong)TStack_2f8.CurrentBitIndex * 0xc);
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_4dc) &&
        ((FScriptContainerElement *)&local_4dc <
         pFVar4 + (longlong)(this->ROITriangleBuffer).ArrayMax * 4)) &&
       (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar28)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iVar35 = (this->ROITriangleBuffer).ArrayNum;
    if (iVar35 == (this->ROITriangleBuffer).ArrayMax) {
      iVar35 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar3->AllocatorInstance,&(this->ROITriangleBuffer).ArrayMax);
    }
    (this->ROITriangleBuffer).ArrayNum = iVar35 + 1;
    *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar35 * 4) = local_4dc;
    TStack_2f8.UnvisitedBitMask = TStack_2f8.UnvisitedBitMask & ~TStack_2f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2f8);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ROIGroupBuffer,(this->ROITriangleBuffer).ArrayNum,No);
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar26) {
    FThreadStats::AddMessage(FVar34,CycleScopeEnd);
  }
  return;
}

// UpdateStampPosition @ 14cd3b3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UMeshGroupPaintTool::UpdateStampPosition(UMeshGroupPaintTool *this,TRay<double> *param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  FDateTime FVar9;
  
  (**(code **)(*(longlong *)this + 0x490))();
  puVar8 = (undefined8 *)(**(code **)(*(longlong *)this + 0x478))(this);
  cVar5 = (**(code **)(*(longlong *)*puVar8 + 0x30))();
  if ((cVar5 == '\0') || (cVar5 == '\x01')) {
    (**(code **)(*(longlong *)this + 0x540))(this,param_1,1);
  }
  else if (cVar5 == '\x02') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshGroupPaintTool.cpp"
                       ,0x23d,L"");
    if (bVar6) {
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return (bool)uVar7;
    }
    (**(code **)(*(longlong *)this + 0x530))(this,param_1);
  }
  cVar5 = (**(code **)(*(longlong *)*puVar8 + 0x48))();
  if (cVar5 != '\0') {
    UMeshSculptToolBase::AlignBrushToView((UMeshSculptToolBase *)this);
  }
  FSculptBrushStamp::operator=
            ((FSculptBrushStamp *)&this->field_0x7b0,(FSculptBrushStamp *)&this->field_0x930);
  FVar9 = FDateTime::Now();
  pcVar1 = *(code **)(*(longlong *)this + 0x4c0);
  dVar2 = (double)(*(longlong *)FVar9.Ticks - *(longlong *)&this->field_0xa40) *
          __real_3e7ad7f29abcaf48;
  if (__real_3ff0000000000000 <= dVar2) {
    dVar2 = __real_3ff0000000000000;
  }
  *(double *)&this->field_0x848 = dVar2;
  *(undefined8 *)&this->field_0x7b0 = *(undefined8 *)&this->field_0x490;
  *(undefined8 *)&this->field_0x7b8 = *(undefined8 *)&this->field_0x498;
  *(undefined8 *)&this->field_0x7c0 = *(undefined8 *)&this->field_0x4a0;
  *(undefined8 *)&this->field_0x7c8 = *(undefined8 *)&this->field_0x4a8;
  *(undefined8 *)&this->field_0x7d0 = *(undefined8 *)&this->field_0x4b0;
  *(undefined8 *)&this->field_0x7d8 = *(undefined8 *)&this->field_0x4b8;
  *(undefined8 *)&this->field_0x7e0 = *(undefined8 *)&this->field_0x4c0;
  *(undefined8 *)&this->field_0x7e8 = *(undefined8 *)&this->field_0x4c8;
  *(undefined8 *)&this->field_0x7f0 = *(undefined8 *)&this->field_0x4d0;
  *(undefined8 *)&this->field_0x7f8 = *(undefined8 *)&this->field_0x4d8;
  *(undefined8 *)&this->field_0x800 = *(undefined8 *)&this->field_0x4e0;
  *(undefined4 *)&this->field_0x808 = *(undefined4 *)&this->field_0x4e8;
  *(undefined4 *)&this->field_0x80c = *(undefined4 *)&this->field_0x4ec;
  *(undefined4 *)&this->field_0x810 = *(undefined4 *)&this->field_0x4f0;
  *(undefined4 *)&this->field_0x814 = *(undefined4 *)&this->field_0x4f4;
  *(undefined8 *)&this->field_0x818 = *(undefined8 *)&this->field_0x4f8;
  dVar3 = (double)(**(code **)(*(longlong *)this + 0x4b0))(this);
  dVar2 = (double)(*pcVar1)(this);
  *(undefined8 *)&this->field_0x888 = *(undefined8 *)&this->field_0x968;
  *(undefined8 *)&this->field_0x890 = *(undefined8 *)&this->field_0x970;
  *(undefined8 *)&this->field_0x898 = *(undefined8 *)&this->field_0x978;
  *(undefined8 *)&this->field_0x8a0 = *(undefined8 *)&this->field_0x980;
  *(undefined8 *)&this->field_0x8a8 = *(undefined8 *)&this->field_0x988;
  *(undefined8 *)&this->field_0x8b0 = *(undefined8 *)&this->field_0x990;
  *(undefined8 *)&this->field_0x8b8 = *(undefined8 *)&this->field_0x998;
  *(undefined8 *)&this->field_0x850 = *(undefined8 *)&this->field_0x930;
  *(undefined8 *)&this->field_0x858 = *(undefined8 *)&this->field_0x938;
  *(undefined8 *)&this->field_0x860 = *(undefined8 *)&this->field_0x940;
  *(undefined8 *)&this->field_0x868 = *(undefined8 *)&this->field_0x948;
  *(undefined4 *)&this->field_0x870 = *(undefined4 *)&this->field_0x950;
  *(undefined4 *)&this->field_0x874 = *(undefined4 *)&this->field_0x954;
  *(undefined4 *)&this->field_0x878 = *(undefined4 *)&this->field_0x958;
  *(undefined4 *)&this->field_0x87c = *(undefined4 *)&this->field_0x95c;
  *(undefined8 *)&this->field_0x880 = *(undefined8 *)&this->field_0x960;
  *(double *)&this->field_0x830 = dVar3 * dVar2;
  dVar2 = *(double *)&this->field_0x7e8 - *(double *)&this->field_0x888;
  dVar3 = *(double *)&this->field_0x7f0 - *(double *)&this->field_0x890;
  dVar4 = *(double *)&this->field_0x7f8 - *(double *)&this->field_0x898;
  cVar5 = (**(code **)(*(longlong *)*puVar8 + 0x50))();
  if (cVar5 == '\0') {
    bVar6 = true;
  }
  else {
    bVar6 = __real_3e45798ee2308c3a <= dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4;
  }
  return bVar6;
}

// UpdateSubToolType @ 14cd3c210

void __thiscall
UMeshGroupPaintTool::UpdateSubToolType
          (UMeshGroupPaintTool *this,EMeshGroupPaintInteractionType param_1)

{
  (**(code **)(*(longlong *)this + 0x338))(this,*(undefined8 *)&this->field_0x128,0);
  (**(code **)(*(longlong *)this + 0x338))(this,(this->FilterProperties).field0_0x0.DebugPtr,1);
  this->field_0x440 = 0;
  if (*(longlong *)&this->field_0x428 != 0) {
    (**(code **)(*(longlong *)this + 0x338))(this,*(longlong *)&this->field_0x428,0);
  }
  if (*(longlong *)&this->field_0x438 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014cd3c27e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x338))(this,*(longlong *)&this->field_0x438,0);
    return;
  }
  return;
}

// WaitForPendingUndoRedoUpdate @ 14cd3d990

void __thiscall UMeshGroupPaintTool::WaitForPendingUndoRedoUpdate(UMeshGroupPaintTool *this)

{
  if (this->bUndoUpdatePending != false) {
    this->bUndoUpdatePending = false;
  }
  return;
}

// operator() @ 150577490

bool __thiscall
`UMeshGroupPaintTool::UpdateActiveGroupLayer'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1741624056165169734>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1741624056165169734>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

