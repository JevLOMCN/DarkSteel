// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 91

// StaticClass @ 14cc92740

UClass * __cdecl UMeshVertexSculptTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexSculptTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshVertexSculptTool",
               &Z_Registration_Info_UClass_UMeshVertexSculptTool.InnerSingleton,
               StaticRegisterNativesUMeshVertexSculptTool,0x17e0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshVertexSculptTool>,
               InternalVTableHelperCtorCaller<UMeshVertexSculptTool>,local_res8,
               UMeshSculptToolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexSculptTool.InnerSingleton;
}

// UMeshVertexSculptTool @ 14ccbe600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMeshVertexSculptTool * __thiscall
UMeshVertexSculptTool::UMeshVertexSculptTool(UMeshVertexSculptTool *this,FVTableHelper *param_1)

{
  UMeshSculptToolBase::UMeshSculptToolBase((UMeshSculptToolBase *)this,param_1);
  *(undefined8 *)&(this->OnDetailsPanelRequestRebuild).field_0x18 = 2;
  (this->SculptProperties).field0_0x0.DebugPtr = (UVertexBrushSculptProperties *)0x0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleSelectionTool__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IClickDragBehaviorTarget__;
  *(undefined ***)&this->field_0xd8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xc80 = &_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  *(undefined ***)&this->field_0xc88 = &_vftable__for__IModelingToolExternalDynamicMeshUpdateAPI__;
  (this->AlphaProperties).field0_0x0.DebugPtr = (UVertexBrushAlphaProperties *)0x0;
  (this->BrushAlpha).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->SymmetryProperties).field0_0x0.DebugPtr = (UMeshSymmetryProperties *)0x0;
  (this->SculptLayerProperties).field0_0x0.DebugPtr = (UMeshSculptLayerProperties *)0x0;
  *(undefined8 *)&this->OnDetailsPanelRequestRebuild = 0;
  *(undefined8 *)&(this->OnDetailsPanelRequestRebuild).field_0x8 = 0;
  *(undefined8 *)&(this->OnDetailsPanelRequestRebuild).field_0x10 = 0;
  (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  (this->OnDynamicMeshComponentChangedHandle).ID = 0;
  (this->ActiveGroupSet).Ptr = (FPolygroupSet *)0x0;
  (this->TriangleComponentIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleComponentIDs).ArrayNum = 0;
  (this->TriangleComponentIDs).ArrayMax = 0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements = 0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements.field_0x20 = 0;
  this->InitialStrokeTriangleID = -1;
  *(undefined4 *)&(this->AccumulatedTriangleROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AccumulatedTriangleROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AccumulatedTriangleROI).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AccumulatedTriangleROI).Elements.field_0x34 = 0;
  (this->AccumulatedTriangleROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AccumulatedTriangleROI).HashSize = 0;
  this->bUndoUpdatePending = false;
  *(undefined8 *)&this->UndoNormalsFuture = 0;
  *(undefined8 *)&(this->UndoNormalsFuture).field_0x8 = 0;
  *(undefined8 *)&this->UndoUpdateOctreeFuture = 0;
  *(undefined8 *)&(this->UndoUpdateOctreeFuture).field_0x8 = 0;
  *(undefined8 *)&this->UndoUpdateBaseMeshFuture = 0;
  *(undefined8 *)&(this->UndoUpdateBaseMeshFuture).field_0x8 = 0;
  *(undefined8 *)&this->UndoUpdateFuture = 0;
  *(undefined8 *)&(this->UndoUpdateFuture).field_0x8 = 0;
  (this->NormalsBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalsBuffer).ArrayNum = 0;
  (this->NormalsBuffer).ArrayMax = 0;
  (this->OctreeUpdateTempBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OctreeUpdateTempBuffer).ArrayNum = 0;
  (this->OctreeUpdateTempBuffer).ArrayMax = 0;
  (this->OctreeUpdateTempFlagBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OctreeUpdateTempFlagBuffer).ArrayNum = 0;
  (this->OctreeUpdateTempFlagBuffer).ArrayMax = 0;
  *(undefined8 *)&this->StampUpdateOctreeFuture = 0;
  *(undefined8 *)&(this->StampUpdateOctreeFuture).field_0x8 = 0;
  this->bStampUpdatePending = false;
  (this->RangeQueryTriBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RangeQueryTriBuffer).ArrayNum = 0;
  (this->RangeQueryTriBuffer).ArrayMax = 0;
  (this->VertexROIBuilder).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexROIBuilder).Values.ArrayNum = 0;
  (this->VertexROIBuilder).Values.ArrayMax = 0;
  (this->VertexROIBuilder).Bits = (long64 *)0x0;
  (this->VertexROIBuilder).NumWords = 0;
  (this->TriangleROIBuilder).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleROIBuilder).Values.ArrayNum = 0;
  (this->TriangleROIBuilder).Values.ArrayMax = 0;
  (this->TriangleROIBuilder).Bits = (long64 *)0x0;
  (this->TriangleROIBuilder).NumWords = 0;
  (this->TriangleROIInBuf).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleROIInBuf).ArrayNum = 0;
  (this->TriangleROIInBuf).ArrayMax = 0;
  (this->VertexROI).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexROI).ArrayNum = 0;
  (this->VertexROI).ArrayMax = 0;
  (this->TriangleROIArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleROIArray).ArrayNum = 0;
  (this->TriangleROIArray).ArrayMax = 0;
  (this->NormalsROIBuilder).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalsROIBuilder).Values.ArrayNum = 0;
  (this->NormalsROIBuilder).Values.ArrayMax = 0;
  (this->NormalsROIBuilder).Bits = (long64 *)0x0;
  (this->NormalsROIBuilder).NumWords = 0;
  (this->NormalsFlags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalsFlags).ArrayNum = 0;
  (this->NormalsFlags).ArrayMax = 0;
  this->PendingStampType = Smooth;
  this->PendingStampBrushID = 3;
  this->bMouseMoved = false;
  FSculptBrushStamp::FSculptBrushStamp(&this->LastMovedStamp);
  (this->StampRandomStream).InitialSeed = 0;
  (this->StampRandomStream).Seed = 0;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->BaseMesh);
  UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3
            ((FSparseDynamicOctree3 *)&this->BaseMeshSpatial);
  (this->BaseMeshSpatial).ModifiedBounds.Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->BaseMeshSpatial).ModifiedBounds.Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->BaseMeshSpatial).ModifiedBounds.Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->BaseMeshSpatial).ModifiedBounds.Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->BaseMeshSpatial).ModifiedBounds.Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->BaseMeshSpatial).ModifiedBounds.Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  (this->BaseMeshIndexBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseMeshIndexBuffer).ArrayNum = 0;
  (this->BaseMeshIndexBuffer).ArrayMax = 0;
  this->bCachedFreezeTarget = false;
  *(undefined8 *)&this->BaseMeshQueryFunc = 0;
  *(undefined8 *)&(this->BaseMeshQueryFunc).field_0x28 = 0;
  UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3((FSparseDynamicOctree3 *)&this->Octree)
  ;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  (this->CutTree).Object = (FTreeCutSet *)0x0;
  (this->CutTree).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->OctreeGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  this->SculptMaxFixedHeight = -1.0;
  this->bOctreeUpdated = false;
  this->bHaveBrushAlpha = false;
  (this->BrushAlphaValues).Dimensions.Width = 0;
  (this->BrushAlphaValues).Dimensions.Height = 0;
  (this->BrushAlphaValues).Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BrushAlphaValues).Image.Buffer.ArrayNum = 0;
  (this->BrushAlphaValues).Image.Buffer.ArrayMax = 0;
  (this->BrushAlphaValues).Image.DimensionX = 0;
  (this->BrushAlphaValues).Image.DimensionY = 0;
  (this->BrushAlphaDimensions).Width = 0;
  (this->BrushAlphaDimensions).Height = 0;
  (this->ROIPositionBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROIPositionBuffer).ArrayNum = 0;
  (this->ROIPositionBuffer).ArrayMax = 0;
  (this->ROIPrevPositionBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROIPrevPositionBuffer).ArrayNum = 0;
  (this->ROIPrevPositionBuffer).ArrayMax = 0;
  (this->Symmetry).Ptr = (FMeshPlanarSymmetry *)0x0;
  this->bMeshSymmetryIsValid = false;
  this->bApplySymmetry = false;
  (this->SymmetricVertexROI).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SymmetricVertexROI).ArrayNum = 0;
  (this->SymmetricVertexROI).ArrayMax = 0;
  (this->SymmetricROIPositionBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SymmetricROIPositionBuffer).ArrayNum = 0;
  (this->SymmetricROIPositionBuffer).ArrayMax = 0;
  (this->SymmetricROIPrevPositionBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SymmetricROIPrevPositionBuffer).ArrayNum = 0;
  (this->SymmetricROIPrevPositionBuffer).ArrayMax = 0;
  this->ActiveVertexChange = (FMeshVertexChangeBuilder *)0x0;
  this->DefaultPrimaryBrushID = -1;
  this->InitialBoundsMaxDim = 0.0;
  return this;
}

// UMeshVertexSculptTool @ 14ccbea30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMeshVertexSculptTool * __thiscall
UMeshVertexSculptTool::UMeshVertexSculptTool(UMeshVertexSculptTool *this)

{
  UMeshSculptToolBase::UMeshSculptToolBase((UMeshSculptToolBase *)this);
  *(undefined8 *)&(this->OnDetailsPanelRequestRebuild).field_0x18 = 2;
  (this->SculptProperties).field0_0x0.DebugPtr = (UVertexBrushSculptProperties *)0x0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleSelectionTool__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IClickDragBehaviorTarget__;
  *(undefined ***)&this->field_0xd8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xc80 = &_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  *(undefined ***)&this->field_0xc88 = &_vftable__for__IModelingToolExternalDynamicMeshUpdateAPI__;
  (this->AlphaProperties).field0_0x0.DebugPtr = (UVertexBrushAlphaProperties *)0x0;
  (this->BrushAlpha).field0_0x0.DebugPtr = (UTexture2D *)0x0;
  (this->SymmetryProperties).field0_0x0.DebugPtr = (UMeshSymmetryProperties *)0x0;
  (this->SculptLayerProperties).field0_0x0.DebugPtr = (UMeshSculptLayerProperties *)0x0;
  *(undefined8 *)&this->OnDetailsPanelRequestRebuild = 0;
  *(undefined8 *)&(this->OnDetailsPanelRequestRebuild).field_0x8 = 0;
  *(undefined8 *)&(this->OnDetailsPanelRequestRebuild).field_0x10 = 0;
  (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  (this->OnDynamicMeshComponentChangedHandle).ID = 0;
  (this->ActiveGroupSet).Ptr = (FPolygroupSet *)0x0;
  (this->TriangleComponentIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleComponentIDs).ArrayNum = 0;
  (this->TriangleComponentIDs).ArrayMax = 0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements = 0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements.field_0x20 = 0;
  this->InitialStrokeTriangleID = -1;
  *(undefined4 *)&(this->AccumulatedTriangleROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->AccumulatedTriangleROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->AccumulatedTriangleROI).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AccumulatedTriangleROI).Elements.field_0x34 = 0;
  (this->AccumulatedTriangleROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->AccumulatedTriangleROI).HashSize = 0;
  this->bUndoUpdatePending = false;
  *(undefined8 *)&this->UndoNormalsFuture = 0;
  *(undefined8 *)&(this->UndoNormalsFuture).field_0x8 = 0;
  *(undefined8 *)&this->UndoUpdateOctreeFuture = 0;
  *(undefined8 *)&(this->UndoUpdateOctreeFuture).field_0x8 = 0;
  *(undefined8 *)&this->UndoUpdateBaseMeshFuture = 0;
  *(undefined8 *)&(this->UndoUpdateBaseMeshFuture).field_0x8 = 0;
  *(undefined8 *)&this->UndoUpdateFuture = 0;
  *(undefined8 *)&(this->UndoUpdateFuture).field_0x8 = 0;
  (this->NormalsBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalsBuffer).ArrayNum = 0;
  (this->NormalsBuffer).ArrayMax = 0;
  (this->OctreeUpdateTempBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OctreeUpdateTempBuffer).ArrayNum = 0;
  (this->OctreeUpdateTempBuffer).ArrayMax = 0;
  (this->OctreeUpdateTempFlagBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OctreeUpdateTempFlagBuffer).ArrayNum = 0;
  (this->OctreeUpdateTempFlagBuffer).ArrayMax = 0;
  *(undefined8 *)&this->StampUpdateOctreeFuture = 0;
  *(undefined8 *)&(this->StampUpdateOctreeFuture).field_0x8 = 0;
  this->bStampUpdatePending = false;
  (this->RangeQueryTriBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RangeQueryTriBuffer).ArrayNum = 0;
  (this->RangeQueryTriBuffer).ArrayMax = 0;
  (this->VertexROIBuilder).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexROIBuilder).Values.ArrayNum = 0;
  (this->VertexROIBuilder).Values.ArrayMax = 0;
  (this->VertexROIBuilder).Bits = (long64 *)0x0;
  (this->VertexROIBuilder).NumWords = 0;
  (this->TriangleROIBuilder).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleROIBuilder).Values.ArrayNum = 0;
  (this->TriangleROIBuilder).Values.ArrayMax = 0;
  (this->TriangleROIBuilder).Bits = (long64 *)0x0;
  (this->TriangleROIBuilder).NumWords = 0;
  (this->TriangleROIInBuf).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleROIInBuf).ArrayNum = 0;
  (this->TriangleROIInBuf).ArrayMax = 0;
  (this->VertexROI).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexROI).ArrayNum = 0;
  (this->VertexROI).ArrayMax = 0;
  (this->TriangleROIArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleROIArray).ArrayNum = 0;
  (this->TriangleROIArray).ArrayMax = 0;
  (this->NormalsROIBuilder).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalsROIBuilder).Values.ArrayNum = 0;
  (this->NormalsROIBuilder).Values.ArrayMax = 0;
  (this->NormalsROIBuilder).Bits = (long64 *)0x0;
  (this->NormalsROIBuilder).NumWords = 0;
  (this->NormalsFlags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalsFlags).ArrayNum = 0;
  (this->NormalsFlags).ArrayMax = 0;
  this->PendingStampType = Smooth;
  this->PendingStampBrushID = 3;
  this->bMouseMoved = false;
  FSculptBrushStamp::FSculptBrushStamp(&this->LastMovedStamp);
  (this->StampRandomStream).InitialSeed = 0;
  (this->StampRandomStream).Seed = 0;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->BaseMesh);
  UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3
            ((FSparseDynamicOctree3 *)&this->BaseMeshSpatial);
  (this->BaseMeshSpatial).ModifiedBounds.Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->BaseMeshSpatial).ModifiedBounds.Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->BaseMeshSpatial).ModifiedBounds.Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->BaseMeshSpatial).ModifiedBounds.Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->BaseMeshSpatial).ModifiedBounds.Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->BaseMeshSpatial).ModifiedBounds.Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  (this->BaseMeshIndexBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseMeshIndexBuffer).ArrayNum = 0;
  (this->BaseMeshIndexBuffer).ArrayMax = 0;
  this->bCachedFreezeTarget = false;
  *(undefined8 *)&this->BaseMeshQueryFunc = 0;
  *(undefined8 *)&(this->BaseMeshQueryFunc).field_0x28 = 0;
  UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3((FSparseDynamicOctree3 *)&this->Octree)
  ;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  (this->CutTree).Object = (FTreeCutSet *)0x0;
  (this->CutTree).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->OctreeGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  this->SculptMaxFixedHeight = -1.0;
  this->bOctreeUpdated = false;
  this->bHaveBrushAlpha = false;
  (this->BrushAlphaValues).Dimensions.Width = 0;
  (this->BrushAlphaValues).Dimensions.Height = 0;
  (this->BrushAlphaValues).Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BrushAlphaValues).Image.Buffer.ArrayNum = 0;
  (this->BrushAlphaValues).Image.Buffer.ArrayMax = 0;
  (this->BrushAlphaValues).Image.DimensionX = 0;
  (this->BrushAlphaValues).Image.DimensionY = 0;
  (this->BrushAlphaDimensions).Width = 0;
  (this->BrushAlphaDimensions).Height = 0;
  (this->ROIPositionBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROIPositionBuffer).ArrayNum = 0;
  (this->ROIPositionBuffer).ArrayMax = 0;
  (this->ROIPrevPositionBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROIPrevPositionBuffer).ArrayNum = 0;
  (this->ROIPrevPositionBuffer).ArrayMax = 0;
  (this->Symmetry).Ptr = (FMeshPlanarSymmetry *)0x0;
  this->bMeshSymmetryIsValid = false;
  this->bApplySymmetry = false;
  (this->SymmetricVertexROI).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SymmetricVertexROI).ArrayNum = 0;
  (this->SymmetricVertexROI).ArrayMax = 0;
  (this->SymmetricROIPositionBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SymmetricROIPositionBuffer).ArrayNum = 0;
  (this->SymmetricROIPositionBuffer).ArrayMax = 0;
  (this->SymmetricROIPrevPositionBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SymmetricROIPrevPositionBuffer).ArrayNum = 0;
  (this->SymmetricROIPrevPositionBuffer).ArrayMax = 0;
  this->ActiveVertexChange = (FMeshVertexChangeBuilder *)0x0;
  this->DefaultPrimaryBrushID = -1;
  this->InitialBoundsMaxDim = 0.0;
  return this;
}

// ~UMeshVertexSculptTool @ 14ccc46b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshVertexSculptTool::~UMeshVertexSculptTool(UMeshVertexSculptTool *this)

{
  FScriptContainerElement *pFVar1;
  FMeshPlanarSymmetry *pFVar2;
  longlong *plVar3;
  ForElementType<FSetElementId> FVar4;
  void *pvVar5;
  longlong *plVar6;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &_vftable__for__USingleSelectionTool__;
  *(undefined ***)&this->field_0xd0 = &_vftable__for__IClickDragBehaviorTarget__;
  *(undefined ***)&this->field_0xd8 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0xc80 = &_vftable__for__IInteractiveToolManageGeometrySelectionAPI__;
  *(undefined ***)&this->field_0xc88 = &_vftable__for__IModelingToolExternalDynamicMeshUpdateAPI__;
  pFVar1 = (this->SymmetricROIPrevPositionBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SymmetricROIPositionBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SymmetricVertexROI).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->Symmetry).Ptr;
  if (pFVar2 != (FMeshPlanarSymmetry *)0x0) {
    (**(code **)&pFVar2[-1].Vertices.ArrayNum)(&pFVar2[-1].Vertices.ArrayNum);
  }
  pFVar1 = (this->ROIPrevPositionBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ROIPositionBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BrushAlphaValues).Image.Buffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CutTree).SharedReferenceCount.ReferenceController);
  UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3
            ((FSparseDynamicOctree3 *)&this->Octree);
  if (*(longlong *)&this->BaseMeshQueryFunc != 0) {
    plVar3 = *(longlong **)&(this->BaseMeshQueryFunc).field_0x28;
    plVar6 = (longlong *)&(this->BaseMeshQueryFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar6 = plVar3;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  pFVar1 = (this->BaseMeshIndexBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3
            ((FSparseDynamicOctree3 *)&this->BaseMeshSpatial);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&this->BaseMesh);
  if (*(longlong *)&(this->LastMovedStamp).StampAlphaFunc != 0) {
    plVar3 = *(longlong **)&(this->LastMovedStamp).StampAlphaFunc.field_0x28;
    plVar6 = (longlong *)&(this->LastMovedStamp).StampAlphaFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar6 = plVar3;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  pFVar1 = (this->NormalsFlags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Geometry::FUniqueIndexSet::~FUniqueIndexSet(&this->NormalsROIBuilder);
  pFVar1 = (this->TriangleROIArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VertexROI).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->TriangleROIInBuf).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Geometry::FUniqueIndexSet::~FUniqueIndexSet(&this->TriangleROIBuilder);
  UE::Geometry::FUniqueIndexSet::~FUniqueIndexSet(&this->VertexROIBuilder);
  pFVar1 = (this->RangeQueryTriBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->StampUpdateOctreeFuture).field_0x8);
  pFVar1 = (this->OctreeUpdateTempFlagBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OctreeUpdateTempBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NormalsBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->UndoUpdateFuture).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->UndoUpdateBaseMeshFuture).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->UndoUpdateOctreeFuture).field_0x8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->UndoNormalsFuture).field_0x8);
  (this->AccumulatedTriangleROI).HashSize = 0;
  FVar4 = (this->AccumulatedTriangleROI).Hash.SecondaryData;
  if (FVar4 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AccumulatedTriangleROI).Elements);
  pFVar1 = (this->TriangleComponentIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  ::operator_delete((this->ActiveGroupSet).Ptr,0x18);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnDetailsPanelRequestRebuild).field_0x8,
             *(int *)&(this->OnDetailsPanelRequestRebuild).field_0x10);
  pvVar5 = *(void **)&(this->OnDetailsPanelRequestRebuild).field_0x8;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDetailsPanelRequestRebuild);
  *(undefined ***)&this->field_0xc88 = &___7IModelingToolExternalDynamicMeshUpdateAPI__6B_;
  *(undefined ***)&this->field_0xc80 = &___7IInteractiveToolManageGeometrySelectionAPI__6B_;
  UMeshSculptToolBase::~UMeshSculptToolBase((UMeshSculptToolBase *)this);
  return;
}

// operator() @ 14cccda80

void __thiscall
`UMeshVertexSculptTool::OnTick'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  bool bVar5;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1472,"VtxSculptTool_Tick_PreStrokeUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x5c0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1472);
  }
  lVar2 = *(longlong *)this;
  if (((*(longlong *)(lVar2 + 0xdd8) != 0) &&
      (*(char *)(*(longlong *)(lVar2 + 0xdd8) + 0x68) == '\0')) &&
     (*(longlong *)(lVar2 + 0xdd8) != 0)) {
    do {
      do {
      } while (*(longlong *)(lVar2 + 0xdd8) == 0);
      plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0xdd8) + 0x60);
      cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
    } while (cVar4 == '\0');
  }
  iVar1 = *(int *)(*(longlong *)((longlong)this + 8) + 0x170);
  UE::Geometry::FUniqueIndexSet::Initialize
            (*(FUniqueIndexSet **)((longlong)this + 0x10),iVar1,
             (int)((double)iVar1 * __real_3fb999999999999a));
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14cccddb0

void __thiscall
`UMeshVertexSculptTool::PrepROIVertPositionBuffers'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  lVar3 = *(longlong *)this;
  lVar14 = (longlong)param_1;
  lVar4 = **(longlong **)((longlong)this + 8);
  uVar12 = 0;
  if (param_1 < *(int *)(lVar3 + 0xe68)) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar5 = *(longlong *)this;
  uVar12 = *(uint *)(*(longlong *)(lVar3 + 0xe60) + lVar14 * 4);
  uVar13 = (ulonglong)(uVar12 & 0x1ff);
  lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar12 >> 9) * 8);
  puVar1 = (undefined4 *)(lVar3 + uVar13 * 0x18);
  uVar7 = *puVar1;
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  uVar2 = *(undefined8 *)(lVar3 + 0x10 + uVar13 * 0x18);
  uVar12 = 0;
  if (param_1 < *(int *)(lVar5 + 0x1778)) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar3 = *(longlong *)(lVar5 + 6000);
  puVar1 = (undefined4 *)(lVar3 + lVar14 * 0x18);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  *(undefined8 *)(lVar3 + 0x10 + lVar14 * 0x18) = uVar2;
  return;
}

// operator() @ 14ccce530

void __thiscall `UMeshVertexSculptTool::Setup'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)((longlong)this + 0x40);
  if (*(int *)(*(longlong *)this + 0x170) < 0x186a1) {
    *(double *)(lVar1 + 0x14f0) = *(double *)(lVar1 + 0x17d0) * __real_3fe0000000000000;
    *(undefined4 *)(*(longlong *)((longlong)this + 0x40) + 0x1500) = 8;
  }
  else {
    *(double *)(lVar1 + 0x14f0) = *(double *)(lVar1 + 0x17d0) * __real_3fb999999999999a;
    *(undefined4 *)(*(longlong *)((longlong)this + 0x40) + 0x1500) = 4;
  }
  if (__real_322bcc77 <
      (float)((uint)*(float *)((longlong)this + 0x38) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    *(double *)(*(longlong *)((longlong)this + 0x40) + 0x14f0) =
         (double)*(float *)((longlong)this + 0x38);
  }
  uVar4 = *(uint *)((longlong)this + 0x3c);
  if (0 < (int)uVar4) {
    lVar1 = *(longlong *)((longlong)this + 0x40);
    if (0x1f < uVar4) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6625396669405986611>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\SparseDynamicOctree3.h"
                         ,0xcd,"(uint32)MaxTreeDepthIn <= MaxSupportedTreeDepth");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = 0x1f;
    }
    *(uint *)(lVar1 + 0x1500) = uVar4;
  }
  UE::Geometry::FDynamicMeshOctree3::Initialize
            ((FDynamicMeshOctree3 *)(*(longlong *)((longlong)this + 0x40) + 0x14f0),
             *(FDynamicMesh3 **)this);
  return;
}

// operator() @ 14cccf3d0

void __thiscall
`UMeshVertexSculptTool::UpdateRangeQueryTriBuffer'::__l2::<lambda_1>::operator()(void *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  TVector<double>_u_0 local_90;
  double local_78;
  double local_70;
  double local_68;
  
  uVar9 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar7 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  pdVar4 = *(double **)((longlong)this + 8);
  dVar11 = (double)(**(code **)(**(longlong **)this + 0x4a0))();
  uVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar6 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dVar1 = pdVar4[1];
  dVar2 = *pdVar4;
  dVar3 = pdVar4[2];
  pdVar4 = *(double **)((longlong)this + 8);
  dVar12 = (double)(**(code **)(**(longlong **)this + 0x4a0))();
  local_90._s_0.Y = pdVar4[1] - (double)uVar8 * dVar12;
  local_90._s_0.Z = pdVar4[2] - (double)uVar10 * dVar12;
  local_90._s_0.X = *pdVar4 - (double)uVar6 * dVar12;
  local_78 = (double)uVar5 * dVar11 + dVar2;
  local_70 = (double)uVar7 * dVar11 + dVar1;
  local_68 = (double)uVar9 * dVar11 + dVar3;
  UE::Geometry::FSparseDynamicOctree3::ParallelRangeQuery
            ((FSparseDynamicOctree3 *)(*(longlong *)this + 0x14f0),
             (TAxisAlignedBox3<double> *)&local_90._s_0,
             (TArray<int,TSizedDefaultAllocator<32>_> *)(*(longlong *)this + 0xdf0));
  return;
}

// operator() @ 14ccd0930

double __thiscall
`UMeshVertexSculptTool::ApplyStamp'::__l11::<lambda_1>::operator()
          (void *this,FSculptBrushStamp *param_1,TVector<double> *param_2)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TVector<double> *pTVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TVector2<double>_u_0 local_88;
  TVector<double>_u_0 local_78 [4];
  
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 0x1720) != '\0') {
    dVar2 = (param_2->field0_0x0)._s_0.Z - (param_1->LocalFrame).Origin.field0_0x0._s_0.Z;
    dVar3 = (param_2->field0_0x0)._s_0.X - (param_1->LocalFrame).Origin.field0_0x0._s_0.X;
    dVar4 = (param_2->field0_0x0)._s_0.Y - (param_1->LocalFrame).Origin.field0_0x0._s_0.Y;
    pTVar6 = UE::Geometry::TFrame3<double>::GetAxis
                       (&param_1->LocalFrame,(TVector<double> *)&local_78[0]._s_0,0);
    dVar7 = (pTVar6->field0_0x0)._s_0.Y;
    dVar9 = (pTVar6->field0_0x0)._s_0.X;
    dVar10 = (pTVar6->field0_0x0)._s_0.Z;
    pTVar6 = UE::Geometry::TFrame3<double>::GetAxis
                       (&param_1->LocalFrame,(TVector<double> *)&local_78[0]._s_0,1);
    dVar5 = __real_3ff0000000000000;
    dVar8 = __real_3ff0000000000000 / param_1->Radius;
    dVar9 = __real_3fe0000000000000 -
            dVar8 * (dVar4 * dVar7 + dVar3 * dVar9 + dVar2 * dVar10) * __real_3fe0000000000000;
    dVar7 = (dVar4 * (pTVar6->field0_0x0)._s_0.Y + dVar3 * (pTVar6->field0_0x0)._s_0.X +
            dVar2 * (pTVar6->field0_0x0)._s_0.Z) * dVar8 * __real_3fe0000000000000;
    if ((((dVar9 < 0.0) || (__real_3ff0000000000000 < dVar9)) || (__real_3fe0000000000000 < dVar7))
       || (dVar7 < __real_bfe0000000000000)) {
      dVar7 = 0.0;
    }
    else {
      if (__real_3ff0000000000000 <= dVar9) {
        dVar9 = __real_3ff0000000000000;
      }
      dVar10 = __real_3fe0000000000000 - dVar7;
      if (__real_3ff0000000000000 <= __real_3fe0000000000000 - dVar7) {
        dVar10 = __real_3ff0000000000000;
      }
      local_88._s_0.X =
           dVar9 * (double)(((TImageBuilder<UE::Math::TVector4<float>_> *)(lVar1 + 0x1728))->
                           Dimensions).Width;
      local_88._s_0.Y = (double)*(int *)(lVar1 + 0x172c) * dVar10;
      UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>::BilinearSample<float,0>
                ((TImageBuilder<UE::Math::TVector4<float>_> *)(lVar1 + 0x1728),
                 (TVector4<float> *)&local_78[0]._s_0,(TVector2<double> *)&local_88._s_0,
                 &InvalidValue);
      dVar9 = (double)(float)local_78[0]._0_4_;
      dVar7 = 0.0;
      if ((0.0 <= dVar9) && (dVar7 = dVar9, dVar5 <= dVar9)) {
        dVar7 = dVar5;
      }
    }
    return dVar7;
  }
  return __real_3ff0000000000000;
}

// operator() @ 14ccd0b30

void __thiscall `UMeshVertexSculptTool::UpdateBaseMesh'::__l13::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1703,"VtxSculptTool_Target_UpdateBaseNormals",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x6a7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1703);
  }
  UE::Geometry::FMeshNormals::QuickComputeVertexNormalsForTriangles
            ((FDynamicMesh3 *)(*(longlong *)this + 0x1068),
             (TArray<int,TSizedDefaultAllocator<32>_> *)(*(longlong *)this + 0x14a0),true,true,false
            );
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14ccd10d0

void __thiscall
`UMeshVertexSculptTool::OnTick'::__l2::<lambda_2>::operator()
          (void *this,int param_1,TRay<double> *param_2)

{
  FScriptContainerElement *_Src;
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  EAsyncExecution EVar4;
  char cVar5;
  TFuture<void> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  longlong lVar8;
  FSharedReferencer<1> FVar9;
  bool bVar10;
  bool bVar11;
  undefined1 local_a8 [8];
  FSharedReferencer<1> local_a0;
  TReferenceControllerBase<1> *local_98;
  FSharedReferencer<1> local_90;
  <lambda_1> local_88;
  undefined1 local_60 [24];
  TUniqueFunction<void___cdecl(void)> local_48;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1482,"VtxSculptTool_Tick_StrokeUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x5ca);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1482);
  }
  if (CpuChannel->Enabled < 0) {
    UMeshVertexSculptTool::UpdateROI
              (*(UMeshVertexSculptTool **)this,
               (TFrame3<double> *)&(*(UMeshVertexSculptTool **)this)->field_0x7e8);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1484,"VtxSculptTool_Tick_UpdateROI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x5cc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1484);
    UMeshVertexSculptTool::UpdateROI
              (*(UMeshVertexSculptTool **)this,
               (TFrame3<double> *)&(*(UMeshVertexSculptTool **)this)->field_0x7e8);
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1491,"VtxSculptTool_Tick_AccumROIWrapper",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x5d3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1491);
  }
  local_88.__this = *(UMeshVertexSculptTool **)this;
  local_88.TriangleROISet = *(FUniqueIndexSet **)((longlong)this + 0x28);
  local_88.TriangleROIArrayCopy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.TriangleROIArrayCopy.ArrayNum = ((local_88.__this)->TriangleROIArray).ArrayNum;
  lVar8 = (longlong)local_88.TriangleROIArrayCopy.ArrayNum;
  _Src = ((local_88.__this)->TriangleROIArray).AllocatorInstance.Data;
  local_88.StampIndex = param_1;
  if (local_88.TriangleROIArrayCopy.ArrayNum == 0) {
    local_88.TriangleROIArrayCopy.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_88.TriangleROIArrayCopy.ArrayNum,0,
               &local_88.TriangleROIArrayCopy.AllocatorInstance,
               local_88.TriangleROIArrayCopy.ArrayNum,&local_88.TriangleROIArrayCopy.ArrayMax);
    memcpy(local_88.TriangleROIArrayCopy.AllocatorInstance.Data,_Src,lVar8 << 2);
  }
  EVar4 = VertexSculptToolAsyncExecTarget;
  plVar1 = *(longlong **)((longlong)this + 0x18);
  if (*plVar1 != 0) {
    do {
      do {
        lVar8 = *plVar1;
      } while (lVar8 == 0);
      plVar2 = *(longlong **)(lVar8 + 0x60);
      cVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,0xffffffff,0);
    } while (cVar5 == '\0');
  }
  local_48._0_8_ = 0;
  local_48._40_8_ = 0;
  Async<__UMeshVertexSculptTool::OnTick_::__l2::<lambda_2>::operator()_::__l4::<lambda_1>_&>
            ((TFuture<void> *)local_a8,EVar4,&local_88,&local_48);
  puVar3 = *(undefined8 **)((longlong)this + 0x18);
  if (puVar3 != (undefined8 *)local_a8) {
    *puVar3 = local_a8;
    local_a8 = (undefined1  [8])0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(puVar3 + 1),&local_a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_a0.ReferenceController);
  if (local_88.TriangleROIArrayCopy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.TriangleROIArrayCopy.AllocatorInstance.Data);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  lVar8 = *(longlong *)this;
  if (((*(longlong *)(lVar8 + 0xdd8) != 0) &&
      (*(char *)(*(longlong *)(lVar8 + 0xdd8) + 0x68) == '\0')) &&
     (*(longlong *)(lVar8 + 0xdd8) != 0)) {
    do {
      do {
      } while (*(longlong *)(lVar8 + 0xdd8) == 0);
      plVar1 = *(longlong **)(*(longlong *)(lVar8 + 0xdd8) + 0x60);
      cVar5 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar5 == '\0');
  }
  local_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1510,"VtxSculptTool_Tick_ApplyStamp",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x5e6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1510);
  }
  pTVar6 = UMeshVertexSculptTool::ApplyStamp
                     (*(UMeshVertexSculptTool **)this,(TFuture<void> *)local_60);
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  FVar9.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((TFuture<void> *)&local_98 != pTVar6) {
    local_98 = *(TReferenceControllerBase<1> **)pTVar6;
    *(undefined8 *)pTVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_90,(FSharedReferencer<1> *)&pTVar6->field_0x8);
    pTVar7 = local_98;
    FVar9.ReferenceController = local_90.ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_60._8_8_);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1515,"VtxSculptTool_Tick_ApplyStampWait",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x5eb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1515);
  }
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    do {
      cVar5 = (**(code **)(*(longlong *)pTVar7[6]._padding_ + 0x20))
                        ((longlong *)pTVar7[6]._padding_,0xffffffff,0);
    } while (cVar5 == '\0');
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar9.ReferenceController);
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14ccd1920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall `UMeshVertexSculptTool::Setup'::__l2::<lambda_2>::operator()(void *this)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  uint uVar9;
  uint *puVar10;
  ForAnyElementType FVar11;
  int iVar12;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FScriptContainerElement *local_res20;
  FMeshConnectedComponents local_c8;
  FScriptContainerElement *local_b0;
  int *piStack_a8;
  undefined8 local_a0;
  FScriptContainerElement *local_98;
  int *piStack_90;
  int local_88;
  undefined4 uStack_84;
  TFunction<bool___cdecl(int,int)> local_78;
  
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<int,TSizedDefaultAllocator<32>_> *)(*(longlong *)((longlong)this + 8) + 0xcf8),
             *(int *)(*(longlong *)this + 0x140) * 0x200 + *(int *)(*(longlong *)this + 0x144),
             Default);
  local_c8.Mesh = *(FDynamicMesh3 **)this;
  local_c8.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Components.Array.ArrayNum = 0;
  local_c8.Components.Array.ArrayMax = 0;
  local_78._0_8_ = 0;
  local_78._40_8_ = 0;
  UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles(&local_c8,&local_78);
  piStack_a8 = &local_c8.Components.Array.ArrayNum;
  iVar12 = 1;
  local_98 = local_c8.Components.Array.AllocatorInstance.Data;
  local_88 = local_c8.Components.Array.ArrayNum;
  local_a0 = CONCAT44(uStack_84,local_c8.Components.Array.ArrayNum);
  local_res20 = local_c8.Components.Array.AllocatorInstance.Data +
                (longlong)local_c8.Components.Array.ArrayNum * 8;
  FVar11.Data = local_c8.Components.Array.AllocatorInstance.Data;
  piStack_90 = piStack_a8;
  while( true ) {
    pFVar7 = local_res20;
    local_b0 = FVar11.Data;
    if (*piStack_a8 != (int)local_a0) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10)
      ;
    }
    if (FVar11.Data == pFVar7) break;
    puVar4 = *(undefined8 **)FVar11.Data;
    puVar10 = (uint *)*puVar4;
    iVar2 = *(int *)(puVar4 + 1);
    puVar1 = puVar10 + iVar2;
    while( true ) {
      if (*(int *)(puVar4 + 1) != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (puVar10 == puVar1) break;
      uVar3 = *puVar10;
      lVar5 = *(longlong *)((longlong)this + 8);
      uVar9 = 0;
      if ((int)uVar3 < *(int *)(lVar5 + 0xd00)) {
        uVar9 = ~uVar3 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      puVar10 = puVar10 + 1;
      *(int *)(*(longlong *)(lVar5 + 0xcf8) + (longlong)(int)uVar3 * 4) = iVar12;
    }
    iVar12 = iVar12 + 1;
    FVar11.Data = local_b0 + 8;
  }
  TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
  ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            (&local_c8.Components);
  return;
}

// operator() @ 14ccd1e30

void __thiscall
`UMeshVertexSculptTool::PrepROIVertPositionBuffers'::__l5::<lambda_2>::operator()
          (void *this,int param_1)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  
  lVar3 = *(longlong *)((longlong)this + 8);
  lVar15 = (longlong)param_1;
  lVar4 = **(longlong **)this;
  uVar14 = (uint)~param_1 >> 0x1f;
  uVar12 = 0;
  if (param_1 < *(int *)(lVar3 + 0x1798)) {
    uVar12 = uVar14;
  }
  if ((uVar12 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar12 = *(uint *)(*(longlong *)(lVar3 + 0x1790) + lVar15 * 4);
  if (((-1 < (int)uVar12) && ((int)uVar12 < *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24))
      ) && ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar12 >> 9) * 8) +
                               (ulonglong)(uVar12 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar3 = *(longlong *)((longlong)this + 8);
    lVar4 = **(longlong **)this;
    uVar12 = 0;
    if (param_1 < *(int *)(lVar3 + 0x1798)) {
      uVar12 = uVar14;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *(longlong *)((longlong)this + 8);
    uVar12 = *(uint *)(*(longlong *)(lVar3 + 0x1790) + lVar15 * 4);
    uVar13 = (ulonglong)(uVar12 & 0x1ff);
    lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar12 >> 9) * 8);
    puVar1 = (undefined4 *)(lVar3 + uVar13 * 0x18);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    uVar2 = *(undefined8 *)(lVar3 + 0x10 + uVar13 * 0x18);
    uVar12 = 0;
    if (param_1 < *(int *)(lVar5 + 0x17b8)) {
      uVar12 = uVar14;
    }
    if ((uVar12 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar3 = *(longlong *)(lVar5 + 0x17b0);
    puVar1 = (undefined4 *)(lVar3 + lVar15 * 0x18);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    *(undefined8 *)(lVar3 + 0x10 + lVar15 * 0x18) = uVar2;
  }
  return;
}

// operator() @ 14ccd2670

void __thiscall `UMeshVertexSculptTool::UpdateBaseMesh'::__l13::<lambda_2>::operator()(void *this)

{
  if (CpuChannel->Enabled < 0) {
    UE::Geometry::FDynamicMeshOctree3::
    ReinsertTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              ((FDynamicMeshOctree3 *)(*(longlong *)((longlong)this + 8) + 0x1298),
               *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)this);
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId1708,"VtxSculptTool_Target_Reinsert",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
             ,0x6ac);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1708);
  UE::Geometry::FDynamicMeshOctree3::
  ReinsertTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            ((FDynamicMeshOctree3 *)(*(longlong *)((longlong)this + 8) + 0x1298),
             *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)this);
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// operator() @ 14ccd26f0

void __thiscall
`UMeshVertexSculptTool::ApplyStamp'::__l15::<lambda_2>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  short sVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  
  lVar4 = *(longlong *)this;
  lVar13 = (longlong)param_1;
  uVar10 = 0;
  if (param_1 < *(int *)(lVar4 + 0xe68)) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *(longlong *)this;
  uVar10 = *(uint *)(*(longlong *)(lVar4 + 0xe60) + lVar13 * 4);
  uVar12 = 0;
  if (param_1 < *(int *)(lVar5 + 0x1768)) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar5 + 0x1760);
  lVar5 = **(longlong **)((longlong)this + 8);
  sVar9 = _dclass(*(undefined8 *)(lVar4 + lVar13 * 0x18));
  if (sVar9 < 1) {
    sVar9 = _dclass(*(undefined8 *)(lVar4 + 8 + lVar13 * 0x18));
    if (sVar9 < 1) {
      sVar9 = _dclass(*(undefined8 *)(lVar4 + 0x10 + lVar13 * 0x18));
      if (sVar9 < 1) {
        puVar1 = (undefined8 *)(lVar4 + lVar13 * 0x18);
        uVar7 = puVar1[1];
        uVar3 = *(undefined8 *)(lVar4 + 0x10 + lVar13 * 0x18);
        uVar11 = (ulonglong)(uVar10 & 0x1ff);
        lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar4 + uVar11 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        *(undefined8 *)(lVar4 + 0x10 + uVar11 * 0x18) = uVar3;
      }
    }
  }
  return;
}

// operator() @ 14ccd2cf0

/* WARNING: Removing unreachable block (ram,0x00014ccd2e4d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `UMeshVertexSculptTool::OnTick'::__l2::<lambda_3>::operator()(void *this)

{
  bool bVar1;
  longlong *plVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  int iVar4;
  char cVar5;
  TFuture<void> *pTVar6;
  TFuture<bool> *pTVar7;
  longlong *plVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  TFuture<void> *pTVar10;
  longlong lVar11;
  bool bVar12;
  bool bVar13;
  <lambda_1> local_res8;
  TArray<int,TSizedDefaultAllocator<32>_> local_108;
  undefined1 local_f8 [8];
  FSharedReferencer<1> local_f0;
  TArray<int,TSizedDefaultAllocator<32>_> local_e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  TArrayView<int_const_,int> local_98;
  TVector<double>_u_0 local_88;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  TUniqueFunction<void___cdecl(void)> local_58;
  
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1522,"VtxSculptTool_Tick_PostStrokeUpdate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x5f2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1522);
  }
  cVar5 = (**(code **)(*(longlong *)MeshVertexSculptToolLocals::DisableOctreeUpdates._8_8_ + 0xc0))
                    ();
  if (cVar5 == '\0') {
    UMeshVertexSculptTool::WaitForPendingStampUpdateConst(*(UMeshVertexSculptTool **)this);
    local_res8.__this = *(UMeshVertexSculptTool **)this;
    local_58._0_8_ = 0;
    local_58._40_8_ = 0;
    pTVar6 = Async<__UMeshVertexSculptTool::OnTick_::__l2::<lambda_3>::operator()_::__l5::<lambda_1>_>
                       ((TFuture<void> *)local_b8,VertexSculptToolAsyncExecTarget,&local_res8,
                        &local_58);
    lVar11 = *(longlong *)this;
    pTVar10 = (TFuture<void> *)(lVar11 + 0xdd8);
    if (pTVar10 != pTVar6) {
      *(undefined8 *)pTVar10 = *(undefined8 *)pTVar6;
      *(undefined8 *)pTVar6 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(lVar11 + 0xde0),(FSharedReferencer<1> *)&pTVar6->field_0x8
                );
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_b8._8_8_);
  }
  plVar8 = *(longlong **)((longlong)this + 0x18);
  if (*plVar8 != 0) {
    do {
      do {
        lVar11 = *plVar8;
      } while (lVar11 == 0);
      plVar2 = *(longlong **)(lVar11 + 0x60);
      cVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,0xffffffff,0);
    } while (cVar5 == '\0');
  }
  lVar11 = *(longlong *)((longlong)this + 0x28);
  pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(lVar11 + 8);
  local_108.AllocatorInstance.Data = (pTVar9->AllocatorInstance).Data;
  (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_108._8_8_ = *(undefined8 *)(lVar11 + 0x10);
  *(undefined8 *)(lVar11 + 0x10) = 0;
  if (pTVar9 != &local_108) {
    (pTVar9->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(lVar11 + 0x10) = 0;
    *(undefined4 *)(lVar11 + 0x14) = 0;
  }
  local_88._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
  local_88._s_0.Y = _UNK_150a9e648;
  local_68 = ___xmm_ffefffffffffffffffefffffffffffff;
  uStack_60 = _UNK_1508ffb58;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  local_88._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
  uStack_70 = _UNK_150a9e6d8;
  local_f8 = (undefined1  [8])0x0;
  local_f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1552,"VtxSculptTool_Tick_PrecomputeUpdateMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x610);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1552);
  }
  pTVar7 = UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_TryPrecompute
                     (*(UDynamicMeshComponent **)(*(longlong *)this + 0xce0),
                      (TFuture<bool> *)local_a8,&local_108,&local_d8,
                      (TAxisAlignedBox3<double> *)&local_88._s_0);
  if ((TFuture<bool> *)local_f8 != pTVar7) {
    local_f8 = *(undefined1 (*) [8])pTVar7;
    *(undefined8 *)pTVar7 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&local_f0,(FSharedReferencer<1> *)&pTVar7->field_0x8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a8._8_8_);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1560,"VtxSculptTool_Tick_RecalcNormals",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x618);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1560);
  }
  plVar8 = *(longlong **)((longlong)this + 0x20);
  if (*plVar8 != 0) {
    do {
      do {
        lVar11 = *plVar8;
      } while (lVar11 == 0);
      plVar2 = *(longlong **)(lVar11 + 0x60);
      cVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,0xffffffff,0);
    } while (cVar5 == '\0');
  }
  _Src.Data = local_108.AllocatorInstance.Data;
  lVar11 = (longlong)local_108.ArrayNum;
  bVar1 = *(bool *)((longlong)this + 0x10);
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = local_108.ArrayNum;
  if (local_108.ArrayNum == 0) {
    local_e8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_108.ArrayNum,0,&local_e8.AllocatorInstance,local_108.ArrayNum,
               &local_e8.ArrayMax);
    memcpy(local_e8.AllocatorInstance.Data,_Src.Data,lVar11 << 2);
  }
  UE::SculptUtil::RecalculateROINormalForTriangles
            (*(FDynamicMesh3 **)((longlong)this + 8),&local_e8,bVar1);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1566,"VtxSculptTool_Tick_UpdateMesh",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x61e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1566);
  }
  if (local_f8 != (undefined1  [8])0x0) {
    do {
      cVar5 = (**(code **)(**(longlong **)((longlong)local_f8 + 0x60) + 0x20))
                        (*(longlong **)((longlong)local_f8 + 0x60),0xffffffff,0);
    } while (cVar5 == '\0');
  }
  UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated_ApplyPrecompute
            (*(UDynamicMeshComponent **)(*(longlong *)this + 0xce0),&local_108,
             VertexNormals|Positions,(TFuture<bool> *)local_f8,&local_d8,
             (TAxisAlignedBox3<double> *)&local_88._s_0);
  plVar8 = (longlong *)(**(code **)(**(longlong **)this + 0x2d8))();
  (**(code **)(*plVar8 + 0x368))(plVar8);
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  lVar11 = *(longlong *)this;
  iVar4 = local_108.ArrayNum;
  local_c8 = local_108.AllocatorInstance.Data;
  if ((local_108.ArrayNum < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iStack_c0 = iVar4;
  local_98._12_4_ = uStack_bc;
  local_98.ArrayNum = iVar4;
  local_98.DataPtr = (int *)local_c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar11 + 0xd10),&local_98);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f0.ReferenceController);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14ccd32a0

void __thiscall `UMeshVertexSculptTool::ApplyStamp'::__l18::<lambda_3>::operator()(void *this)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  FMeshVertexChangeBuilder *pFVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1186,"VtxSculptTool_SyncMeshWithPositionBuffer_UpdateChange"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x4a2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1186);
  }
  uVar12 = 0;
  iVar1 = *(int *)(*(longlong *)this + 0x1768);
  if (0 < (longlong)iVar1) {
    lVar13 = 0;
    do {
      lVar10 = *(longlong *)this;
      uVar11 = ~uVar12 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar12 < *(int *)(lVar10 + 0xe68)) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar3 = *(longlong *)this;
      iVar2 = *(int *)(*(longlong *)(lVar10 + 0xe60) + lVar13 * 4);
      pFVar4 = *(FMeshVertexChangeBuilder **)(lVar3 + 0x17c0);
      uVar9 = 0;
      if ((int)uVar12 < *(int *)(lVar3 + 0x1768)) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar10 = *(longlong *)(lVar3 + 0x1760);
      lVar3 = *(longlong *)this;
      uVar9 = 0;
      if ((int)uVar12 < *(int *)(lVar3 + 0x1778)) {
        uVar9 = uVar11;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FMeshVertexChangeBuilder::UpdateVertex
                (pFVar4,iVar2,
                 (TVector<double> *)(*(longlong *)(lVar3 + 6000) + (longlong)(int)uVar12 * 0x18),
                 (TVector<double> *)((longlong)(int)uVar12 * 0x18 + lVar10));
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar1);
  }
  if (*(char *)(*(longlong *)this + 0x1789) != '\0') {
    lVar13 = (longlong)*(int *)(*(longlong *)this + 0x1798);
    uVar12 = 0;
    if (0 < lVar13) {
      lVar10 = 0;
      do {
        lVar3 = *(longlong *)this;
        uVar11 = ~uVar12 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar12 < *(int *)(lVar3 + 0x1798)) {
          uVar9 = uVar11;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (-1 < *(int *)(*(longlong *)(lVar3 + 0x1790) + lVar10 * 4)) {
          lVar3 = *(longlong *)this;
          pFVar4 = *(FMeshVertexChangeBuilder **)(lVar3 + 0x17c0);
          uVar9 = 0;
          if ((int)uVar12 < *(int *)(lVar3 + 0x17a8)) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar3 = *(longlong *)(lVar3 + 0x17a0);
          lVar5 = *(longlong *)this;
          uVar9 = 0;
          if ((int)uVar12 < *(int *)(lVar5 + 0x17b8)) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar5 = *(longlong *)(lVar5 + 0x17b0);
          lVar6 = *(longlong *)this;
          uVar9 = 0;
          if ((int)uVar12 < *(int *)(lVar6 + 0x1798)) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          FMeshVertexChangeBuilder::UpdateVertex
                    (pFVar4,*(int *)(*(longlong *)(lVar6 + 0x1790) + lVar10 * 4),
                     (TVector<double> *)(lVar5 + (longlong)(int)uVar12 * 0x18),
                     (TVector<double> *)(lVar3 + (longlong)(int)uVar12 * 0x18));
        }
        uVar12 = uVar12 + 1;
        lVar10 = lVar10 + 1;
      } while (lVar10 < lVar13);
    }
  }
  if (!bVar14) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// operator() @ 14ccd37b0

bool __thiscall
`UMeshVertexSculptTool::UpdateRangeQueryTriBuffer'::__l11::<lambda_3>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  
  uVar3 = (ulonglong)(param_1 & 0x1ff);
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar2 = (*(double *)(lVar1 + 8 + uVar3 * 0x18) - *(double *)((longlong)this + 0x10)) *
          *(double *)((longlong)this + 0x28) +
          (*(double *)(lVar1 + uVar3 * 0x18) - *(double *)((longlong)this + 8)) *
          *(double *)((longlong)this + 0x20) +
          (*(double *)(lVar1 + 0x10 + uVar3 * 0x18) - *(double *)((longlong)this + 0x18)) *
          *(double *)((longlong)this + 0x30);
  dVar4 = (dVar2 * *(double *)((longlong)this + 0x20) + *(double *)((longlong)this + 8)) -
          *(double *)(lVar1 + uVar3 * 0x18);
  dVar5 = (dVar2 * *(double *)((longlong)this + 0x28) + *(double *)((longlong)this + 0x10)) -
          *(double *)(lVar1 + 8 + uVar3 * 0x18);
  dVar2 = (dVar2 * *(double *)((longlong)this + 0x30) + *(double *)((longlong)this + 0x18)) -
          *(double *)(lVar1 + 0x10 + uVar3 * 0x18);
  return dVar5 * dVar5 + dVar4 * dVar4 + dVar2 * dVar2 < (double)*(float *)((longlong)this + 0x38);
}

// operator() @ 14ccd3e00

void __thiscall
`UMeshVertexSculptTool::ApplyStamp'::__l22::<lambda_4>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  short sVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  
  lVar4 = *(longlong *)this;
  lVar13 = (longlong)param_1;
  uVar10 = 0;
  if (param_1 < *(int *)(lVar4 + 0xe68)) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar5 = *(longlong *)this;
  uVar10 = *(uint *)(*(longlong *)(lVar4 + 0xe60) + lVar13 * 4);
  uVar12 = 0;
  if (param_1 < *(int *)(lVar5 + 0x1768)) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar5 + 0x1760);
  lVar5 = **(longlong **)((longlong)this + 8);
  sVar9 = _dclass(*(undefined8 *)(lVar4 + lVar13 * 0x18));
  if (sVar9 < 1) {
    sVar9 = _dclass(*(undefined8 *)(lVar4 + 8 + lVar13 * 0x18));
    if (sVar9 < 1) {
      sVar9 = _dclass(*(undefined8 *)(lVar4 + 0x10 + lVar13 * 0x18));
      if (sVar9 < 1) {
        puVar1 = (undefined8 *)(lVar4 + lVar13 * 0x18);
        uVar7 = puVar1[1];
        uVar3 = *(undefined8 *)(lVar4 + 0x10 + lVar13 * 0x18);
        uVar11 = (ulonglong)(uVar10 & 0x1ff);
        lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar4 + uVar11 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        *(undefined8 *)(lVar4 + 0x10 + uVar11 * 0x18) = uVar3;
      }
    }
  }
  return;
}

// operator() @ 14ccd4450

void __thiscall
`UMeshVertexSculptTool::OnDynamicMeshComponentChanged'::__l2::<lambda_5>::operator()(void *this)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0xd68) != 0) {
    do {
      do {
        lVar2 = *(longlong *)(lVar1 + 0xd68);
      } while (lVar2 == 0);
      plVar3 = *(longlong **)(lVar2 + 0x60);
      cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
    } while (cVar4 == '\0');
  }
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0xd78) != 0) {
    do {
      do {
        lVar2 = *(longlong *)(lVar1 + 0xd78);
      } while (lVar2 == 0);
      plVar3 = *(longlong **)(lVar2 + 0x60);
      cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
    } while (cVar4 == '\0');
  }
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0xd88) == 0) {
    *(undefined1 *)(lVar1 + 0xd60) = 0;
    return;
  }
  do {
    do {
    } while (*(longlong *)(lVar1 + 0xd88) == 0);
    plVar3 = *(longlong **)(*(longlong *)(lVar1 + 0xd88) + 0x60);
    cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
  } while (cVar4 == '\0');
  *(undefined1 *)(*(longlong *)this + 0xd60) = 0;
  return;
}

// operator() @ 14ccd48d0

void __thiscall
`UMeshVertexSculptTool::ApplyStamp'::__l25::<lambda_5>::operator()(void *this,int param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  lVar4 = *(longlong *)this;
  lVar12 = (longlong)param_1;
  uVar10 = 0;
  if (param_1 < *(int *)(lVar4 + 0x1798)) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar10 = *(uint *)(*(longlong *)(lVar4 + 0x1790) + lVar12 * 4);
  lVar4 = **(longlong **)((longlong)this + 8);
  if ((-1 < (int)uVar10) && ((int)uVar10 < *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24)))
  {
    uVar13 = (ulonglong)(uVar10 & 0x1ff);
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar10 >> 9) * 8) +
                           uVar13 * 2) - 1U) < 0xfffe) {
      lVar4 = *(longlong *)this;
      uVar11 = 0;
      if (param_1 < *(int *)(lVar4 + 0x17a8)) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar4 = *(longlong *)(lVar4 + 0x17a0);
      lVar5 = **(longlong **)((longlong)this + 8);
      sVar9 = _dclass(*(undefined8 *)(lVar4 + lVar12 * 0x18));
      if (((sVar9 < 1) && (sVar9 = _dclass(*(undefined8 *)(lVar4 + 8 + lVar12 * 0x18)), sVar9 < 1))
         && (sVar9 = _dclass(*(undefined8 *)(lVar4 + 0x10 + lVar12 * 0x18)), sVar9 < 1)) {
        puVar1 = (undefined8 *)(lVar4 + lVar12 * 0x18);
        uVar7 = puVar1[1];
        uVar3 = *(undefined8 *)(lVar4 + 0x10 + lVar12 * 0x18);
        lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
        puVar2 = (undefined8 *)(lVar4 + uVar13 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        *(undefined8 *)(lVar4 + 0x10 + uVar13 * 0x18) = uVar3;
      }
    }
  }
  return;
}

// operator() @ 14ccd4a60

void __thiscall
`UMeshVertexSculptTool::OnTick'::__l36::<lambda_5>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  TVector<double>_u_0 local_a8;
  double local_90;
  double dStack_88;
  double local_80;
  undefined4 local_78;
  undefined8 local_74;
  
  uVar16 = (ulonglong)(param_1 & 0x1ff);
  local_74 = 0x40000000;
  lVar7 = *(longlong *)
           (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x130) +
           (ulonglong)((uint)param_1 >> 9) * 8);
  lVar8 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x10);
  uVar5 = *(uint *)(lVar7 + uVar16 * 0xc);
  uVar6 = *(uint *)(lVar7 + 4 + uVar16 * 0xc);
  uVar18 = (ulonglong)(uVar5 & 0x1ff);
  lVar9 = *(longlong *)(lVar8 + (ulonglong)(uVar5 >> 9) * 8);
  uVar17 = (ulonglong)(uVar6 & 0x1ff);
  pdVar1 = (double *)(lVar9 + uVar18 * 0x18);
  dVar10 = *pdVar1;
  dVar11 = pdVar1[1];
  uVar5 = *(uint *)(lVar7 + 8 + uVar16 * 0xc);
  dVar2 = *(double *)(lVar9 + 0x10 + uVar18 * 0x18);
  lVar7 = *(longlong *)(lVar8 + (ulonglong)(uVar6 >> 9) * 8);
  uVar16 = (ulonglong)(uVar5 & 0x1ff);
  pdVar1 = (double *)(lVar7 + uVar17 * 0x18);
  dVar12 = *pdVar1;
  dVar13 = pdVar1[1];
  lVar8 = *(longlong *)(lVar8 + (ulonglong)(uVar5 >> 9) * 8);
  dVar3 = *(double *)(lVar7 + 0x10 + uVar17 * 0x18);
  pdVar1 = (double *)(lVar8 + uVar16 * 0x18);
  dVar14 = *pdVar1;
  dVar15 = pdVar1[1];
  dVar4 = *(double *)(lVar8 + 0x10 + uVar16 * 0x18);
  local_78 = **(undefined4 **)((longlong)this + 0x18);
  local_a8._s_0.X = dVar10;
  local_a8._s_0.Y = dVar11;
  local_a8._s_0.Z = dVar2;
  local_90 = dVar12;
  dStack_88 = dVar13;
  local_80 = dVar3;
  ULineSetComponent::AddLine
            (*(ULineSetComponent **)((longlong)this + 8),(FRenderableLine *)&local_a8._s_0);
  local_74 = 0x40000000;
  local_78 = **(undefined4 **)((longlong)this + 0x18);
  local_a8._s_0.X = dVar12;
  local_a8._s_0.Y = dVar13;
  local_a8._s_0.Z = dVar3;
  local_90 = dVar14;
  dStack_88 = dVar15;
  local_80 = dVar4;
  ULineSetComponent::AddLine
            (*(ULineSetComponent **)((longlong)this + 8),(FRenderableLine *)&local_a8._s_0);
  local_74 = 0x40000000;
  local_78 = **(undefined4 **)((longlong)this + 0x18);
  local_a8._s_0.X = dVar14;
  local_a8._s_0.Y = dVar15;
  local_a8._s_0.Z = dVar4;
  local_90 = dVar10;
  dStack_88 = dVar11;
  local_80 = dVar2;
  ULineSetComponent::AddLine
            (*(ULineSetComponent **)((longlong)this + 8),(FRenderableLine *)&local_a8._s_0);
  return;
}

// operator() @ 14ccd4cc0

void __thiscall `UMeshVertexSculptTool::Setup'::__l2::<lambda_6>::operator()(void *this)

{
  longlong *plVar1;
  FMeshRenderDecomposition *local_res8;
  
  if (*(int *)(*(longlong *)this + 0x170) != 0) {
    local_res8 = ::operator_new(0x20);
    if (local_res8 != (FMeshRenderDecomposition *)0x0) {
      (local_res8->Groups).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (local_res8->Groups).ArrayNum = 0;
      (local_res8->Groups).ArrayMax = 0;
      (local_res8->TriangleToGroupMap).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (local_res8->TriangleToGroupMap).ArrayNum = 0;
      (local_res8->TriangleToGroupMap).ArrayMax = 0;
    }
    FMeshRenderDecomposition::BuildChunkedDecomposition
              (*(FDynamicMesh3 **)this,*(FComponentMaterialSet **)((longlong)this + 8),local_res8,
               0x4000);
    FMeshRenderDecomposition::BuildAssociations(local_res8,*(FDynamicMesh3 **)this);
    plVar1 = *(longlong **)(*(longlong *)((longlong)this + 0x10) + 0xce0);
    (**(code **)(*plVar1 + 0xd28))(plVar1,&local_res8);
  }
  return;
}

// operator() @ 14ccd5320

bool __thiscall
`UMeshVertexSculptTool::Setup'::__l2::<lambda_7>::operator()
          (void *this,int param_1,TVector<double> *param_2,double param_3,TVector<double> *param_4,
          TVector<double> *param_5)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fStack_14;
  
  lVar3 = *(longlong *)this;
  uVar7 = (ulonglong)(param_1 & 0x1ff);
  lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x1078) + (ulonglong)((uint)param_1 >> 9) * 8);
  pdVar1 = (double *)(lVar4 + uVar7 * 0x18);
  dVar5 = pdVar1[1];
  dVar2 = *(double *)(lVar4 + 0x10 + uVar7 * 0x18);
  (param_4->field0_0x0)._s_0.X = *pdVar1;
  (param_4->field0_0x0)._s_0.Y = dVar5;
  (param_4->field0_0x0)._s_0.Z = dVar2;
  if (*(char *)(lVar3 + 0x10d8) == '\0') {
    fStack_14 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y;
    uVar8 = (ulonglong)(uint)UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X;
    uVar6 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10c8) + (ulonglong)((uint)param_1 >> 9) * 8);
    uVar8 = *(ulonglong *)(lVar3 + uVar7 * 0xc);
    uVar6 = *(float *)(lVar3 + 8 + uVar7 * 0xc);
    fStack_14 = (float)(uVar8 >> 0x20);
  }
  (param_5->field0_0x0)._s_0.X = (double)(float)uVar8;
  (param_5->field0_0x0)._s_0.Y = (double)fStack_14;
  (param_5->field0_0x0)._s_0.Z = (double)(float)uVar6;
  return true;
}

// operator() @ 14ccd53e0

void __thiscall
`UMeshVertexSculptTool::UpdateRangeQueryTriBuffer'::__l25::<lambda_7>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 *local_res20;
  
  lVar3 = *(longlong *)this;
  lVar15 = (longlong)param_1;
  uVar14 = (uint)~param_1 >> 0x1f;
  uVar9 = 0;
  if (param_1 < *(int *)(lVar3 + 0xdf8)) {
    uVar9 = uVar14;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = *(uint *)(*(longlong *)(lVar3 + 0xdf0) + lVar15 * 4);
  bVar7 = false;
  if (-1 < **(int **)((longlong)this + 8)) {
    lVar3 = *(longlong *)this;
    uVar10 = 0;
    if ((int)uVar9 < *(int *)(lVar3 + 0xd00)) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    bVar7 = false;
    if (*(int *)(*(longlong *)(lVar3 + 0xcf8) + (longlong)(int)uVar9 * 4) !=
        **(int **)((longlong)this + 8)) {
      bVar7 = true;
    }
  }
  iVar2 = **(int **)((longlong)this + 0x10);
  if (((-1 < iVar2) &&
      (iVar11 = UE::Geometry::FPolygroupSet::GetGroup
                          (*(FPolygroupSet **)(*(longlong *)this + 0xcf0),uVar9), iVar11 != iVar2))
     || (bVar7)) {
    lVar3 = *(longlong *)this;
    uVar9 = 0;
    if (param_1 < *(int *)(lVar3 + 0xe58)) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar1 = lVar15 * 0xc;
    *(undefined4 *)(lVar1 + 8 + *(longlong *)(lVar3 + 0xe50)) = 0;
    lVar3 = *(longlong *)this;
    uVar9 = 0;
    if (param_1 < *(int *)(lVar3 + 0xe58)) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined4 *)(*(longlong *)(lVar3 + 0xe50) + 4 + lVar1) = 0;
    lVar3 = *(longlong *)this;
    uVar9 = 0;
    if (param_1 < *(int *)(lVar3 + 0xe58)) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined4 *)(lVar1 + *(longlong *)(lVar3 + 0xe50)) = 0;
  }
  else {
    puVar4 = *(undefined8 **)((longlong)this + 0x20);
    local_res20 = (undefined4 *)
                  (*(longlong *)
                    (*(longlong *)(**(longlong **)((longlong)this + 0x18) + 0x130) +
                    (ulonglong)(uVar9 >> 9) * 8) + (ulonglong)(uVar9 & 0x1ff) * 0xc);
    local_res10[0] = *local_res20;
    UE::Core::Private::Function::CheckCallable((void *)*puVar4);
    pcVar6 = (code *)*puVar4;
    plVar13 = puVar4 + 2;
    if ((longlong *)puVar4[5] != (longlong *)0x0) {
      plVar13 = (longlong *)puVar4[5];
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    cVar8 = (*pcVar6)(uVar12,local_res10);
    lVar3 = *(longlong *)this;
    uVar9 = 0;
    if (param_1 < *(int *)(lVar3 + 0xe58)) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar1 = lVar15 * 0xc;
    *(uint *)(*(longlong *)(lVar3 + 0xe50) + lVar1) = (uint)(cVar8 != '\0');
    puVar4 = *(undefined8 **)((longlong)this + 0x20);
    local_res8[0] = local_res20[1];
    UE::Core::Private::Function::CheckCallable((void *)*puVar4);
    pcVar6 = (code *)*puVar4;
    plVar13 = puVar4 + 2;
    if ((longlong *)puVar4[5] != (longlong *)0x0) {
      plVar13 = (longlong *)puVar4[5];
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    cVar8 = (*pcVar6)(uVar12,local_res8);
    lVar3 = *(longlong *)this;
    uVar9 = 0;
    if (param_1 < *(int *)(lVar3 + 0xe58)) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(uint *)(*(longlong *)(lVar3 + 0xe50) + 4 + lVar1) = (uint)(cVar8 != '\0');
    puVar4 = *(undefined8 **)((longlong)this + 0x20);
    local_res18[0] = local_res20[2];
    UE::Core::Private::Function::CheckCallable((void *)*puVar4);
    pcVar6 = (code *)*puVar4;
    plVar13 = puVar4 + 2;
    if ((longlong *)puVar4[5] != (longlong *)0x0) {
      plVar13 = (longlong *)puVar4[5];
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    cVar8 = (*pcVar6)(uVar12,local_res18);
    lVar3 = *(longlong *)this;
    uVar9 = 0;
    if (param_1 < *(int *)(lVar3 + 0xe58)) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(uint *)(*(longlong *)(lVar3 + 0xe50) + 8 + lVar1) = (uint)(cVar8 != '\0');
    lVar3 = *(longlong *)this;
    uVar9 = 0;
    if (param_1 < *(int *)(lVar3 + 0xe58)) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_res20 = *(undefined4 **)(lVar3 + 0xe50);
    uVar9 = 0;
    if (param_1 < *(int *)(lVar3 + 0xe58)) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *(longlong *)(lVar3 + 0xe50);
    uVar9 = 0;
    if (param_1 < *(int *)(lVar3 + 0xe58)) {
      uVar9 = uVar14;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (*(int *)((longlong)local_res20 + 4 + lVar1) +
        *(int *)(*(longlong *)(lVar3 + 0xe50) + 8 + lVar1) + *(int *)(lVar5 + lVar1) != 0) {
      return;
    }
  }
  lVar3 = *(longlong *)this;
  uVar9 = 0;
  if (param_1 < *(int *)(lVar3 + 0xdf8)) {
    uVar9 = uVar14;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  *(undefined4 *)(*(longlong *)(lVar3 + 0xdf0) + lVar15 * 4) = 0xffffffff;
  return;
}

// AllowToolMeshUpdates @ 14ccde2d0

bool __thiscall UMeshVertexSculptTool::AllowToolMeshUpdates(UMeshVertexSculptTool *this)

{
  return *(longlong *)&this->field_0xb38 == 0;
}

// ApplyStamp @ 14cce1f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TFuture<void> * __thiscall
UMeshVertexSculptTool::ApplyStamp(UMeshVertexSculptTool *this,TFuture<void> *__return_storage_ptr__)

{
  atomic<unsigned_char> *this_00;
  FMutex FVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  longlong lVar10;
  char cVar11;
  undefined8 *puVar12;
  double *pdVar13;
  TFuture<void> *pTVar14;
  FDateTime FVar15;
  longlong *plVar16;
  longlong *plVar17;
  FSculptBrushStamp *pFVar18;
  bool bVar19;
  bool bVar20;
  undefined1 auStackY_108 [32];
  <lambda_1> local_c8;
  longlong local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  TArrayView<std::nullptr_t,int> local_98;
  undefined1 local_88 [40];
  longlong *plStack_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1116,"VtxSculptTool_ApplyStamp",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x45c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1116);
  }
  puVar12 = (undefined8 *)(**(code **)(*(longlong *)this + 0x478))(this);
  pFVar18 = (FSculptBrushStamp *)&this->field_0x7b0;
  if ((this->bMouseMoved == false) &&
     (cVar11 = (**(code **)(*(longlong *)*puVar12 + 0x58))(), cVar11 != '\0')) {
    pFVar18 = &this->LastMovedStamp;
  }
  cVar11 = (**(code **)(*(longlong *)*puVar12 + 0x68))();
  if (cVar11 != '\0') {
    pdVar13 = (double *)
              (**(code **)(*(longlong *)this + 0x5c0))
                        (this,local_88,&pFVar18->LocalFrame,&this->TriangleROIArray);
    dVar9 = pdVar13[1];
    (pFVar18->RegionPlane).Origin.field0_0x0._s_0.X = *pdVar13;
    (pFVar18->RegionPlane).Origin.field0_0x0._s_0.Y = dVar9;
    dVar9 = pdVar13[3];
    (pFVar18->RegionPlane).Origin.field0_0x0._s_0.Z = pdVar13[2];
    (pFVar18->RegionPlane).Rotation.field0_0x0._s_0.X = dVar9;
    uVar4 = *(undefined4 *)((longlong)pdVar13 + 0x24);
    uVar5 = *(undefined4 *)(pdVar13 + 5);
    uVar6 = *(undefined4 *)((longlong)pdVar13 + 0x2c);
    *(undefined4 *)((longlong)&(pFVar18->RegionPlane).Rotation.field0_0x0 + 8) =
         *(undefined4 *)(pdVar13 + 4);
    *(undefined4 *)((longlong)&(pFVar18->RegionPlane).Rotation.field0_0x0 + 0xc) = uVar4;
    *(undefined4 *)((longlong)&(pFVar18->RegionPlane).Rotation.field0_0x0 + 0x10) = uVar5;
    *(undefined4 *)((longlong)&(pFVar18->RegionPlane).Rotation.field0_0x0 + 0x14) = uVar6;
    (pFVar18->RegionPlane).Rotation.field0_0x0._s_0.W = pdVar13[6];
  }
  if (this->bHaveBrushAlpha != false) {
    local_88._0_8_ = *(undefined8 *)&pFVar18->StampAlphaFunc;
    uVar8 = *(undefined8 *)&(pFVar18->StampAlphaFunc).field_0x8;
    local_88._16_8_ = *(undefined8 *)&(pFVar18->StampAlphaFunc).field_0x10;
    local_88._24_8_ = *(undefined8 *)&(pFVar18->StampAlphaFunc).field_0x18;
    uVar7 = *(undefined8 *)&(pFVar18->StampAlphaFunc).field_0x20;
    plStack_60 = *(longlong **)&(pFVar18->StampAlphaFunc).field_0x28;
    *(code **)&pFVar18->StampAlphaFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UMeshVertexSculptTool::ApplyStamp'::__l11::<lambda_1>,double,FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&>
         ::Call;
    *(undefined8 *)&(pFVar18->StampAlphaFunc).field_0x8 = local_88._8_8_;
    *(undefined4 *)&(pFVar18->StampAlphaFunc).field_0x10 = 0x529792c0;
    *(undefined4 *)&(pFVar18->StampAlphaFunc).field_0x14 = 1;
    *(UMeshVertexSculptTool **)&(pFVar18->StampAlphaFunc).field_0x18 = this;
    *(undefined4 *)&(pFVar18->StampAlphaFunc).field_0x20 = local_88._32_4_;
    *(undefined4 *)&(pFVar18->StampAlphaFunc).field_0x24 = local_88._36_4_;
    *(undefined4 *)&(pFVar18->StampAlphaFunc).field_0x28 = 0;
    *(undefined4 *)&(pFVar18->StampAlphaFunc).field_0x2c = 0;
    local_88._32_8_ = uVar7;
    local_88._8_8_ = uVar8;
    if (local_88._0_8_ != 0) {
      plVar16 = (longlong *)(local_88 + 0x10);
      if (plStack_60 != (longlong *)0x0) {
        plVar16 = plStack_60;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  local_c0 = (**(code **)(*(longlong *)this + 0x440))(this);
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1150,"VtxSculptTool_ApplyStamp_Apply",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x47e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1150);
  }
  (**(code **)(*(longlong *)*puVar12 + 0x28))
            ((longlong *)*puVar12,local_c0,pFVar18,&this->VertexROI);
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (*(longlong *)&pFVar18->StampAlphaFunc != 0) {
    plVar16 = *(longlong **)&(pFVar18->StampAlphaFunc).field_0x28;
    plVar17 = (longlong *)&(pFVar18->StampAlphaFunc).field_0x10;
    if (plVar16 != (longlong *)0x0) {
      plVar17 = plVar16;
    }
    (**(code **)(*plVar17 + 0x10))();
    *(undefined8 *)&pFVar18->StampAlphaFunc = 0;
  }
  if (this->bApplySymmetry != false) {
    UE::Geometry::FMeshPlanarSymmetry::ApplySymmetryPlaneConstraints
              ((this->Symmetry).Ptr,&this->VertexROI,&this->ROIPositionBuffer);
    local_b8._8_8_ = &local_c0;
    local_a8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UMeshVertexSculptTool::ApplyStamp'::__l15::<lambda_2>,void,int>::Call;
    local_a8._8_8_ = local_b8;
    local_98.DataPtr = (void **)0x0;
    local_98.ArrayNum = 0;
    local_b8._0_8_ = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(this->ROIPositionBuffer).ArrayNum,1,
               (TFunctionRef<void___cdecl(int)> *)local_a8,local_c8,None,&local_98);
    UE::Geometry::FMeshPlanarSymmetry::ComputeSymmetryConstrainedPositions
              ((this->Symmetry).Ptr,&this->VertexROI,&this->SymmetricVertexROI,
               &this->ROIPositionBuffer,&this->SymmetricROIPositionBuffer);
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  if (this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) {
    local_88._0_8_ = 0;
    plStack_60 = (longlong *)0x0;
    local_b8._0_8_ = this;
    pTVar14 = Async<_UMeshVertexSculptTool::ApplyStamp_::__l18::<lambda_3>_>
                        ((TFuture<void> *)local_a8,VertexSculptToolAsyncExecTarget,
                         (<lambda_3> *)local_b8,(TUniqueFunction<void___cdecl(void)> *)local_88);
    if (__return_storage_ptr__ != pTVar14) {
      *(undefined8 *)__return_storage_ptr__ = *(undefined8 *)pTVar14;
      *(undefined8 *)pTVar14 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&__return_storage_ptr__->field_0x8,
                 (FSharedReferencer<1> *)&pTVar14->field_0x8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_a8._8_8_);
  }
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1211,"VtxSculptTool_ApplyStamp_Sync",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x4bb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1211);
  }
  iVar3 = (this->ROIPositionBuffer).ArrayNum;
  if (this->bApplySymmetry == false) {
    local_a8._8_8_ = &local_c0;
    local_98.DataPtr = (void **)0x0;
    local_b8._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UMeshVertexSculptTool::ApplyStamp'::__l22::<lambda_4>,void,int>::Call;
    local_b8._8_8_ = local_a8;
    local_98.ArrayNum = 0;
    local_a8._0_8_ = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar3,1,(TFunctionRef<void___cdecl(int)> *)local_b8,local_c8,None
               ,&local_98);
    if (this->bApplySymmetry == false) goto LAB_14cce2373;
  }
  local_a8._8_8_ = &local_c0;
  local_98.DataPtr = (void **)0x0;
  local_b8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshVertexSculptTool::ApplyStamp'::__l25::<lambda_5>,void,int>::Call;
  local_b8._8_8_ = local_a8;
  local_98.ArrayNum = 0;
  local_a8._0_8_ = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar3,1,(TFunctionRef<void___cdecl(int)> *)local_b8,local_c8,None,
             &local_98);
LAB_14cce2373:
  lVar10 = local_c0;
  if (*(char *)(local_c0 + 0x21c) != '\0') {
    this_00 = (atomic<unsigned_char> *)(local_c0 + 0x21d);
    LOCK();
    FVar1.State = *this_00;
    if (FVar1.State == (atomic<unsigned_char>)0x0) {
      *this_00 = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (FVar1.State != (atomic<unsigned_char>)0x0) {
      UE::FMutex::LockSlow((FMutex *)this_00);
    }
    *(int *)(lVar10 + 0x220) = *(int *)(lVar10 + 0x220) + 1;
    LOCK();
    aVar2 = *this_00;
    *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)this_00);
    }
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FSculptBrushStamp::operator=((FSculptBrushStamp *)&this->field_0x930,pFVar18);
  FVar15 = FDateTime::Now();
  *(undefined8 *)&this->field_0xa40 = *(undefined8 *)FVar15.Ticks;
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// BeginChange @ 14cce6a30

void __thiscall UMeshVertexSculptTool::BeginChange(UMeshVertexSculptTool *this)

{
  code *pcVar1;
  bool bVar2;
  FMeshVertexChangeBuilder *this_00;
  FMeshVertexChangeBuilder *pFVar3;
  UInteractiveToolManager *pUVar4;
  FText *pFVar5;
  FText local_18;
  
  if (this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveVertexChange == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
                       ,0x721,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = ::operator_new(0x140);
  pFVar3 = (FMeshVertexChangeBuilder *)0x0;
  if (this_00 != (FMeshVertexChangeBuilder *)0x0) {
    pFVar3 = FMeshVertexChangeBuilder::FMeshVertexChangeBuilder(this_00);
  }
  this->ActiveVertexChange = pFVar3;
  pUVar4 = (UInteractiveToolManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UMeshVertexSculptTool",L"VertexSculptChange",L"Brush Stroke");
  UE::TransactionUtil::FLongTransactionTracker::Open
            ((FLongTransactionTracker *)&this->field_0xc74,pFVar5,pUVar4);
  return;
}

// CanUpdateBrushType @ 14ccebfd0

bool __thiscall UMeshVertexSculptTool::CanUpdateBrushType(UMeshVertexSculptTool *this)

{
  return this->DefaultPrimaryBrushID == -1;
}

// DecreaseBrushSpeedAction @ 14ccf6020

void __thiscall UMeshVertexSculptTool::DecreaseBrushSpeedAction(UMeshVertexSculptTool *this)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar1;
  UObject *pUVar2;
  float fVar3;
  float fVar4;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)this + 0x478))();
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar1 + 8));
  fVar3 = (float)(**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2);
  fVar4 = fVar3 - __real_3d4ccccd;
  if (__real_3f800000 <= fVar3 - __real_3d4ccccd) {
    fVar4 = __real_3f800000;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar1 + 8));
  (**(code **)(*(longlong *)pUVar2 + 0x2e0))(pUVar2,fVar4);
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)this + 0x340);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00014ccf60c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar2);
  return;
}

// DoesTargetHaveSculptLayers @ 14ccf7610

bool __thiscall UMeshVertexSculptTool::DoesTargetHaveSculptLayers(UMeshVertexSculptTool *this)

{
  undefined1 uVar1;
  UClass *pUVar2;
  longlong *plVar3;
  UObjectBaseUtility *pUVar4;
  
  pUVar4 = *(UObjectBaseUtility **)&this->field_0xc8;
  if (pUVar4 != (UObjectBaseUtility *)0x0) {
    pUVar2 = Z_Construct_UClass_USceneComponentBackedTarget_NoRegister();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress(pUVar4,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      pUVar4 = (UObjectBaseUtility *)(**(code **)(*plVar3 + 0x10))(plVar3);
      if (pUVar4 != (UObjectBaseUtility *)0x0) {
        pUVar2 = Z_Construct_UClass_UMeshSculptLayersManager_NoRegister();
        plVar3 = UObjectBaseUtility::GetInterfaceAddress(pUVar4,pUVar2);
        if (plVar3 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014ccf766f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3,*(code **)(*plVar3 + 0x10));
          return (bool)uVar1;
        }
      }
    }
  }
  return false;
}

// DrawHUD @ 14ccf82f0

void __thiscall
UMeshVertexSculptTool::DrawHUD
          (UMeshVertexSculptTool *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
  bool bVar1;
  UTwoAxisPropertyEditInputBehavior *this_00;
  
  UInteractiveTool::DrawHUD((UInteractiveTool *)this,param_1,param_2);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0xb50);
  if (bVar1) {
    this_00 = (UTwoAxisPropertyEditInputBehavior *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xb50);
    UTwoAxisPropertyEditInputBehavior::DrawHUD(this_00,param_1,param_2);
  }
  return;
}

// EndChange @ 14ccf8ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMeshVertexSculptTool::EndChange(UMeshVertexSculptTool *this)

{
  FMeshVertexChangeBuilder *pFVar1;
  FMeshVertexChangeBuilder *pFVar2;
  FMeshVertexChange *pFVar3;
  UMeshSymmetryProperties *pUVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined8 *puVar9;
  longlong lVar10;
  FText *pFVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  UInteractiveToolManager *pUVar14;
  longlong *plVar15;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 *local_80;
  FText local_78;
  FText local_68;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if ((this->ActiveVertexChange == (FMeshVertexChangeBuilder *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveVertexChange",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
                         ,0x728,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar9 = ::operator_new(0x70);
  puVar13 = (undefined8 *)0x0;
  puVar12 = puVar13;
  if (puVar9 != (undefined8 *)0x0) {
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    puVar9[5] = 0;
    puVar9[6] = 0;
    puVar9[7] = 0;
    puVar9[8] = 0;
    puVar9[9] = 0;
    puVar9[10] = 0;
    puVar9[0xb] = 0;
    puVar9[0xc] = 0;
    puVar9[0xd] = 0;
    *puVar9 = &___7__TWrappedToolCommandChange_VFMeshVertexChange____6B_;
    puVar12 = puVar9;
  }
  pFVar2 = this->ActiveVertexChange;
  pFVar1 = (FMeshVertexChangeBuilder *)(puVar12 + 1);
  if (pFVar1 != pFVar2) {
    pFVar3 = (pFVar1->Change).Ptr;
    (pFVar1->Change).Ptr = (pFVar2->Change).Ptr;
    (pFVar2->Change).Ptr = (FMeshVertexChange *)0x0;
    if (pFVar3 != (FMeshVertexChange *)0x0) {
      (**(code **)(pFVar3->_padding_ + 0x48))(pFVar3,1);
    }
  }
  local_58 = puVar12[2];
  uVar7 = puVar12[3];
  local_48 = puVar12[4];
  uStack_40 = puVar12[5];
  uVar6 = puVar12[6];
  plStack_30 = (longlong *)puVar12[7];
  puVar12[2] = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshVertexSculptTool::EndChange'::__l2::<lambda_1>,void,bool>::
               Call;
  puVar12[3] = uStack_50;
  *(undefined4 *)(puVar12 + 4) = 0x52979360;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 1;
  puVar12[5] = this;
  *(undefined4 *)(puVar12 + 6) = (undefined4)local_38;
  *(undefined4 *)((longlong)puVar12 + 0x34) = local_38._4_4_;
  *(undefined4 *)(puVar12 + 7) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x3c) = 0;
  local_38 = uVar6;
  uStack_50 = uVar7;
  if (local_58 != 0) {
    plVar15 = &local_48;
    if (plStack_30 != (longlong *)0x0) {
      plVar15 = plStack_30;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  lVar10 = (**(code **)(*(longlong *)this + 0x2d8))(this);
  pcVar5 = *(code **)(*(longlong *)(lVar10 + 0x28) + 0x20);
  pFVar11 = FText::AsLocalizable_Advanced_LocText
                      (&local_78,L"UMeshVertexSculptTool",L"VertexSculptChange",L"Brush Stroke");
  local_88 = puVar12;
  (*pcVar5)(lVar10 + 0x28,(this->DynamicMeshComponent).field0_0x0.DebugPtr,&local_88,pFVar11);
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if ((this->bMeshSymmetryIsValid != false) && (this->bApplySymmetry == false)) {
    lVar10 = (**(code **)(*(longlong *)this + 0x2d8))(this);
    pcVar5 = *(code **)(*(longlong *)(lVar10 + 0x28) + 0x20);
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        (&local_68,L"UMeshVertexSculptTool",L"DisableSymmetryChange",
                         L"Disable Symmetry");
    puVar12 = ::operator_new(8);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = &___7FVertexSculptNonSymmetricChange__6B_;
      puVar13 = puVar12;
    }
    local_80 = puVar13;
    (*pcVar5)(lVar10 + 0x28,this,&local_80,pFVar11);
    if (local_68.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
    }
    pUVar4 = (this->SymmetryProperties).field0_0x0.DebugPtr;
    this->bMeshSymmetryIsValid = false;
    pUVar4->bSymmetryCanBeEnabled = false;
  }
  pUVar14 = (UInteractiveToolManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  UE::TransactionUtil::FLongTransactionTracker::Close
            ((FLongTransactionTracker *)&this->field_0xc74,pUVar14);
  if (this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) {
    FMeshVertexChangeBuilder::_scalar_deleting_destructor_(this->ActiveVertexChange,1);
  }
  this->ActiveVertexChange = (FMeshVertexChangeBuilder *)0x0;
  return;
}

// FindHitSculptMeshTriangleConst @ 14ccfb100

int __thiscall
UMeshVertexSculptTool::FindHitSculptMeshTriangleConst
          (UMeshVertexSculptTool *this,TRay<double> *param_1)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  FDynamicMesh3 *pFVar5;
  FSparseDynamicOctree3 *local_res8;
  FSparseDynamicOctree3 *local_res18 [2];
  code *local_28;
  FSparseDynamicOctree3 **local_20;
  code *local_18;
  FSparseDynamicOctree3 **local_10;
  
  if (((*(longlong *)&this->StampUpdateOctreeFuture != 0) &&
      (*(char *)(*(longlong *)&this->StampUpdateOctreeFuture + 0x68) == '\0')) &&
     (*(longlong *)&this->StampUpdateOctreeFuture != 0)) {
    do {
      do {
      } while (*(longlong *)&this->StampUpdateOctreeFuture == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->StampUpdateOctreeFuture + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
  }
  if (*(longlong *)&this->UndoUpdateFuture != 0) {
    do {
      do {
      } while (*(longlong *)&this->UndoUpdateFuture == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->UndoUpdateFuture + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
  }
  local_res8 = (FSparseDynamicOctree3 *)&this->Octree;
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
             ::Call;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
             ::Call;
  local_res18[0] = local_res8;
  iVar4 = UE::Geometry::FSparseDynamicOctree3::FindNearestHitObject
                    (local_res8,param_1,
                     (TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *)&local_18,
                     (TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *)&local_28,
                     __real_7fefffffffffffff);
  if (*(char *)(*(longlong *)&this->field_0x128 + 0xd8) == '\0') {
    pFVar5 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0x438))(this);
    bVar3 = IsHitTriangleBackFacing(this,iVar4,pFVar5);
    if (bVar3) {
      iVar4 = -1;
    }
  }
  return iVar4;
}

// FindHitTargetMeshTriangleConst @ 14ccfb300

int __thiscall
UMeshVertexSculptTool::FindHitTargetMeshTriangleConst
          (UMeshVertexSculptTool *this,TRay<double> *param_1)

{
  bool bVar1;
  int iVar2;
  FDynamicMesh3 *pFVar3;
  FSparseDynamicOctree3 *local_res8;
  FSparseDynamicOctree3 *local_res18 [2];
  code *local_28;
  FSparseDynamicOctree3 **local_20;
  code *local_18;
  FSparseDynamicOctree3 **local_10;
  
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
             ::Call;
  local_10 = local_res18;
  local_res8 = (FSparseDynamicOctree3 *)&this->BaseMeshSpatial;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
             ::Call;
  local_res18[0] = local_res8;
  iVar2 = UE::Geometry::FSparseDynamicOctree3::FindNearestHitObject
                    (local_res8,param_1,
                     (TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *)&local_18,
                     (TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *)&local_28,
                     __real_7fefffffffffffff);
  if (*(char *)(*(longlong *)&this->field_0x128 + 0xd8) == '\0') {
    pFVar3 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0x448))(this);
    bVar1 = IsHitTriangleBackFacing(this,iVar2,pFVar3);
    if (bVar1) {
      iVar2 = -1;
    }
  }
  return iVar2;
}

// GetAvailableBrushTypes @ 14ccfdc40

TSet<UMeshSculptToolBase::FBrushTypeInfo,DefaultKeyFuncs<UMeshSculptToolBase::FBrushTypeInfo,0>,FDefaultSetAllocator>
* __thiscall
UMeshVertexSculptTool::GetAvailableBrushTypes
          (UMeshVertexSculptTool *this,
          TSet<UMeshSculptToolBase::FBrushTypeInfo,DefaultKeyFuncs<UMeshSculptToolBase::FBrushTypeInfo,0>,FDefaultSetAllocator>
          *__return_storage_ptr__)

{
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  if (__return_storage_ptr__ !=
      (TSet<UMeshSculptToolBase::FBrushTypeInfo,DefaultKeyFuncs<UMeshSculptToolBase::FBrushTypeInfo,0>,FDefaultSetAllocator>
       *)&this->field_0x240) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              (&__return_storage_ptr__->Hash,&__return_storage_ptr__->HashSize,
               (ForElementType<FSetElementId> *)&this->field_0x278,*(int *)&this->field_0x288);
    TSparseArray<TSparseSetElement<UMeshSculptToolBase::FBrushTypeInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=(&__return_storage_ptr__->Elements,
                (TSparseArray<TSparseSetElement<UMeshSculptToolBase::FBrushTypeInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->field_0x240);
  }
  return __return_storage_ptr__;
}

// GetBaseMesh @ 14ccfde40

FDynamicMesh3 * __thiscall UMeshVertexSculptTool::GetBaseMesh(UMeshVertexSculptTool *this)

{
  return &this->BaseMesh;
}

// GetBaseMesh @ 14ccfde50

FDynamicMesh3 * __thiscall UMeshVertexSculptTool::GetBaseMesh(UMeshVertexSculptTool *this)

{
  return &this->BaseMesh;
}

// GetBaseMeshNearest @ 14ccfde60

bool __thiscall
UMeshVertexSculptTool::GetBaseMeshNearest
          (UMeshVertexSculptTool *this,int param_1,TVector<double> *param_2,double param_3,
          TVector<double> *param_4,TVector<double> *param_5)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fStack_14;
  
  uVar6 = (ulonglong)(param_1 & 0x1ff);
  lVar3 = *(longlong *)
           ((this->BaseMesh).Vertices.Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_1 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + uVar6 * 0x18);
  dVar4 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + uVar6 * 0x18);
  (param_4->field0_0x0)._s_0.X = *pdVar1;
  (param_4->field0_0x0)._s_0.Y = dVar4;
  (param_4->field0_0x0)._s_0.Z = dVar2;
  if ((this->BaseMesh).VertexNormals.bIsSet == false) {
    fStack_14 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y;
    uVar7 = (ulonglong)(uint)UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X;
    uVar5 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  }
  else {
    lVar3 = *(longlong *)
             ((this->BaseMesh).VertexNormals.TypedValue.Blocks.AllocatorInstance.Data +
             (ulonglong)((uint)param_1 >> 9) * 8);
    uVar7 = *(ulonglong *)(lVar3 + uVar6 * 0xc);
    uVar5 = *(float *)(lVar3 + 8 + uVar6 * 0xc);
    fStack_14 = (float)(uVar7 >> 0x20);
  }
  (param_5->field0_0x0)._s_0.X = (double)(float)uVar7;
  (param_5->field0_0x0)._s_0.Y = (double)fStack_14;
  (param_5->field0_0x0)._s_0.Z = (double)(float)uVar5;
  return true;
}

// GetPrivateStaticClass @ 14cd00bb0

UClass * __cdecl UMeshVertexSculptTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexSculptTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshVertexSculptTool",
               &Z_Registration_Info_UClass_UMeshVertexSculptTool.InnerSingleton,
               StaticRegisterNativesUMeshVertexSculptTool,0x17e0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshVertexSculptTool>,
               InternalVTableHelperCtorCaller<UMeshVertexSculptTool>,local_res8,
               UMeshSculptToolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexSculptTool.InnerSingleton;
}

// GetPropertyCacheIdentifier @ 14cd02240

FString * __thiscall
UMeshVertexSculptTool::GetPropertyCacheIdentifier
          (UMeshVertexSculptTool *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"UMeshVertexSculptTool");
  return __return_storage_ptr__;
}

// GetSculptMeshComponent @ 14cd023b0

UBaseDynamicMeshComponent * __thiscall
UMeshVertexSculptTool::GetSculptMeshComponent(UMeshVertexSculptTool *this)

{
  return (UBaseDynamicMeshComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr;
}

// HasAccept @ 14cd03470

bool __thiscall UMeshVertexSculptTool::HasAccept(UMeshVertexSculptTool *this)

{
  return true;
}

// HasCancel @ 14cd03510

bool __thiscall UMeshVertexSculptTool::HasCancel(UMeshVertexSculptTool *this)

{
  return true;
}

// IncreaseBrushSpeedAction @ 14cd03e80

void __thiscall UMeshVertexSculptTool::IncreaseBrushSpeedAction(UMeshVertexSculptTool *this)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar1;
  UObject *pUVar2;
  float fVar3;
  float fVar4;
  
  plVar1 = (longlong *)(**(code **)(*(longlong *)this + 0x478))();
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar1 + 8));
  fVar3 = (float)(**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2);
  fVar4 = fVar3 + __real_3d4ccccd;
  if (__real_3f800000 <= fVar3 + __real_3d4ccccd) {
    fVar4 = __real_3f800000;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar1 + 8));
  (**(code **)(*(longlong *)pUVar2 + 0x2e0))(pUVar2,fVar4);
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)this + 0x340);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00014cd03f26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(this,pUVar2);
  return;
}

// InitializeIndicator @ 14cd05e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshVertexSculptTool::InitializeIndicator(UMeshVertexSculptTool *this)

{
  UMeshSculptToolBase::InitializeIndicator((UMeshSculptToolBase *)this);
  *(undefined1 *)(*(longlong *)&this->field_0xb30 + 0x79) = 1;
  return;
}

// IsHitTriangleBackFacing @ 14cd08520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UMeshVertexSculptTool::IsHitTriangleBackFacing
          (UMeshVertexSculptTool *this,int param_1,FDynamicMesh3 *param_2)

{
  bool bVar1;
  longlong *plVar2;
  double local_res20;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8;
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
  TVector<double>_u_0 local_38 [2];
  
  if (param_1 == -1) {
    bVar1 = false;
  }
  else {
    local_98 = 0.0;
    dStack_90 = 0.0;
    local_78 = 0;
    uStack_70 = 0;
    local_48 = __real_3ff0000000000000;
    local_88 = 0.0;
    local_68 = ___xmm_3ff00000000000000000000000000000;
    uStack_60 = _UNK_15061cbc8;
    local_58 = 0x42b40000;
    local_54 = 0x42c80000;
    local_50 = 0x3f800000;
    local_4c = 0;
    plVar2 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x398))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_98);
    local_38[0]._s_0.Z = local_88;
    local_38[0]._s_0.X = local_98;
    local_38[0]._s_0.Y = dStack_90;
    UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
              ((TTransformSRT3<double> *)&this->field_0x1f0,(TVector<double> *)&local_d0._s_0,
               (TVector<double> *)&local_38[0]._s_0);
    UE::Geometry::FDynamicMesh3::GetTriInfo
              (param_2,param_1,(TVector<double> *)&local_b8._s_0,&local_res20,
               (TVector<double> *)&local_e8._s_0);
    bVar1 = 0.0 <= (local_e8._s_0.X - local_d0._s_0.X) * local_b8._s_0.X +
                   (local_e8._s_0.Y - local_d0._s_0.Y) * local_b8._s_0.Y +
                   (local_e8._s_0.Z - local_d0._s_0.Z) * local_b8._s_0.Z;
  }
  return bVar1;
}

// IsInputSelectionValidOnOutput @ 14cd08720

bool __thiscall UMeshVertexSculptTool::IsInputSelectionValidOnOutput(UMeshVertexSculptTool *this)

{
  return true;
}

// MakeBrushIndicatorMesh @ 14cd08d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPreviewMesh * __thiscall
UMeshVertexSculptTool::MakeBrushIndicatorMesh
          (UMeshVertexSculptTool *this,UObject *param_1,UWorld *param_2)

{
  float fVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  UPreviewMesh *pUVar8;
  FMeshShapeGenerator *pFVar9;
  UInteractiveToolManager *pUVar10;
  UMaterialInstanceDynamic *pUVar11;
  UClass *pUVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  UDynamicMeshComponent *pUVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  FRectangleMeshGenerator local_338;
  FDynamicMesh3 local_248;
  
  pUVar8 = NewObject<UPreviewMesh>(param_1);
  UPreviewMesh::CreateInWorld(pUVar8,param_2,&UE::Math::TTransform<double>::Identity);
  UE::Geometry::FRectangleMeshGenerator::FRectangleMeshGenerator(&local_338);
  local_338.Width = ___xmm_40000000000000004000000000000000;
  local_338.Height = _UNK_150689698;
  local_338.HeightVertexCount = 1;
  local_338.WidthVertexCount = 1;
  pFVar9 = UE::Geometry::FRectangleMeshGenerator::Generate(&local_338);
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_248,pFVar9);
  if (((local_248.AttributeSet.Ptr)->UVLayers).Array.ArrayNum < 1) {
    lVar17 = 0;
  }
  else {
    if ((((local_248.AttributeSet.Ptr)->UVLayers).Array.ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      pUVar8 = (UPreviewMesh *)(*pcVar5)();
      return pUVar8;
    }
    lVar17 = *(longlong *)((local_248.AttributeSet.Ptr)->UVLayers).Array.AllocatorInstance.Data;
  }
  fVar6 = __real_3f800000;
  uVar18 = *(int *)(lVar17 + 8) * 0x200 + *(int *)(lVar17 + 0xc);
  uVar15 = 0;
  if (uVar18 != 0) {
    sVar2 = *(short *)**(undefined8 **)(lVar17 + 0x10);
    if ((sVar2 == 0) || (uVar15 = 0, sVar2 == -1)) {
      uVar14 = 1;
      uVar15 = 1;
      if (1 < (int)uVar18) {
        do {
          sVar2 = *(short *)((*(undefined8 **)(lVar17 + 0x10))[uVar14 >> 9] +
                            (ulonglong)(uVar14 & 0x1ff) * 2);
          if ((sVar2 != 0) && (uVar15 = uVar14, sVar2 != -1)) break;
          uVar14 = uVar14 + 1;
          uVar15 = uVar14;
        } while ((int)uVar14 < (int)uVar18);
      }
    }
  }
joined_r0x00014cd08e38:
  if (uVar15 != uVar18) {
    while( true ) {
      uVar20 = (ulonglong)(uVar15 * 2 & 0x1ff);
      uVar14 = uVar15 * 2 + 1;
      uVar13 = uVar14 >> 9;
      uVar19 = (ulonglong)(uVar14 & 0x1ff);
      lVar4 = *(longlong *)
               (*(longlong *)(lVar17 + 0x48) + (ulonglong)((uVar15 & 0x7fffffff) >> 8) * 8);
      uVar15 = uVar15 + 1;
      fVar1 = *(float *)(*(longlong *)(*(longlong *)(lVar17 + 0x48) + (ulonglong)uVar13 * 8) +
                        uVar19 * 4);
      *(float *)(lVar4 + uVar20 * 4) = fVar6 - *(float *)(lVar4 + uVar20 * 4);
      *(float *)(*(longlong *)(*(longlong *)(lVar17 + 0x48) + (ulonglong)uVar13 * 8) + uVar19 * 4) =
           fVar6 - fVar1;
      if ((int)uVar18 <= (int)uVar15) break;
      while ((sVar2 = *(short *)(*(longlong *)
                                  (*(longlong *)(lVar17 + 0x10) + (ulonglong)(uVar15 >> 9) * 8) +
                                (ulonglong)(uVar15 & 0x1ff) * 2), sVar2 == 0 || (sVar2 == -1))) {
        uVar15 = uVar15 + 1;
        if ((int)uVar18 <= (int)uVar15) goto joined_r0x00014cd08e38;
      }
    }
    goto joined_r0x00014cd08e38;
  }
  UPreviewMesh::UpdatePreview(pUVar8,&local_248,FullUpdate,AllVertexAttribs);
  pUVar10 = (UInteractiveToolManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  pUVar11 = ToolSetupUtil::GetDefaultBrushAlphaMaterial(pUVar10);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar11 == (UMaterialInstanceDynamic *)0x0)) {
    *(UMaterialInstanceDynamic **)&this->field_0xb40 = pUVar11;
    if (pUVar11 != (UMaterialInstanceDynamic *)0x0) goto LAB_14cd08f3d;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
    *(UMaterialInstanceDynamic **)&this->field_0xb40 = pUVar11;
LAB_14cd08f3d:
    UPreviewMesh::SetMaterial(pUVar8,(UMaterialInterface *)pUVar11);
  }
  pUVar16 = (pUVar8->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar16 != (UDynamicMeshComponent *)0x0) {
    pUVar12 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
    iVar3 = (int)pUVar12->_padding_;
    if ((iVar3 <= *(int *)(pUVar16->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar16->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar12->_padding_)) goto LAB_14cd08f76;
  }
  pUVar16 = (UDynamicMeshComponent *)0x0;
LAB_14cd08f76:
  (**(code **)(pUVar16->_padding_ + 0xc80))(pUVar16);
  UPreviewMesh::SetShadowsEnabled(pUVar8,false);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_248);
  local_338._padding_ = (longlong)&___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((void *)local_338._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_338._padding_);
  }
  if ((void *)local_338._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_338._padding_);
  }
  if ((void *)local_338._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_338._padding_);
  }
  if ((void *)local_338._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_338._padding_);
  }
  if ((void *)local_338._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_338._padding_);
  }
  if ((void *)local_338._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_338._padding_);
  }
  if ((void *)local_338._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_338._padding_);
  }
  if ((void *)local_338._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_338._padding_);
  }
  if ((void *)local_338._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_338._padding_);
  }
  return pUVar8;
}

// NumToolMeshes @ 14cd0c3e0

int __thiscall UMeshVertexSculptTool::NumToolMeshes(UMeshVertexSculptTool *this)

{
  return 1;
}

// OnBeginStroke @ 14cd0ee80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMeshVertexSculptTool::OnBeginStroke(UMeshVertexSculptTool *this,TRay<double> *param_1)

{
  undefined1 *this_00;
  longlong *plVar1;
  code *pcVar2;
  double dVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  undefined8 *puVar7;
  FDateTime FVar8;
  TFrame3<double> *pTVar9;
  double *pdVar10;
  FMeshVertexChangeBuilder *this_01;
  FMeshVertexChangeBuilder *pFVar11;
  UInteractiveToolManager *pUVar12;
  FText *pFVar13;
  undefined8 uVar14;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  TVector<double>_u_0 local_a8;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  FText local_68;
  TFrame3<double> local_58;
  
  if (*(longlong *)&this->UndoUpdateFuture != 0) {
    do {
      do {
      } while (*(longlong *)&this->UndoUpdateFuture == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->UndoUpdateFuture + 0x60);
      cVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar4 == '\0');
  }
  UpdateBrushPosition(this,param_1);
  puVar7 = (undefined8 *)(**(code **)(*(longlong *)this + 0x478))(this);
  iVar6 = (**(code **)(*(longlong *)*puVar7 + 0x60))();
  if (iVar6 - 1U < 2) {
    UpdateROI(this,(TFrame3<double> *)&this->field_0x4c8);
    (**(code **)(*(longlong *)this + 0x5d0))
              (this,&this->field_0x4c8,&this->TriangleROIArray,iVar6 == 2);
  }
  else if (iVar6 == 3) {
    (**(code **)(*(longlong *)this + 0x5d8))(this);
  }
  this_00 = &this->field_0x930;
  *(undefined8 *)this_00 = *(undefined8 *)&this->field_0x490;
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
  uVar14 = (**(code **)(*(longlong *)this + 0x4a0))(this);
  *(undefined8 *)&this->field_0x9a0 = uVar14;
  uVar14 = (**(code **)(*(longlong *)this + 0x4a8))(this);
  *(undefined8 *)&this->field_0x9a8 = uVar14;
  cVar4 = (**(code **)(*(longlong *)this + 0x578))(this);
  uVar14 = __real_3ff0000000000000;
  if (cVar4 != '\0') {
    uVar14 = __real_bff0000000000000;
  }
  *(undefined8 *)&this->field_0x9b8 = uVar14;
  uVar14 = (**(code **)(*(longlong *)this + 0x4c8))(this);
  *(undefined8 *)&this->field_0x9c0 = uVar14;
  uVar14 = (**(code **)(*(longlong *)this + 0x4b8))(this);
  *(undefined8 *)&this->field_0x9b0 = uVar14;
  FVar8 = FDateTime::Now();
  bVar5 = this->bApplySymmetry;
  *(undefined8 *)&this->field_0xa40 = *(undefined8 *)FVar8.Ticks;
  uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PreviousRayDirection).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PreviousRayDirection).field0_0x0._s_0.Y = (double)uVar14;
  (this->PreviousRayDirection).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (bVar5 != false) {
    local_a8._s_0.X = (double)*(undefined8 *)&this->field_0x968;
    local_a8._s_0.Y = (double)*(undefined8 *)&this->field_0x970;
    local_a8._s_0.Z = (double)*(undefined8 *)&this->field_0x978;
    uStack_90 = *(undefined8 *)&this->field_0x980;
    local_88 = *(undefined8 *)&this->field_0x988;
    uStack_80 = *(undefined8 *)&this->field_0x990;
    local_78 = *(undefined8 *)&this->field_0x998;
    pTVar9 = UE::Geometry::FMeshPlanarSymmetry::GetPositiveSideFrame
                       ((this->Symmetry).Ptr,&local_58,(TFrame3<double> *)&local_a8._s_0);
    dVar3 = (pTVar9->Origin).field0_0x0._s_0.Y;
    *(double *)&this->field_0x968 = (pTVar9->Origin).field0_0x0._s_0.X;
    *(double *)&this->field_0x970 = dVar3;
    dVar3 = (pTVar9->Rotation).field0_0x0._s_0.X;
    *(double *)&this->field_0x978 = (pTVar9->Origin).field0_0x0._s_0.Z;
    *(double *)&this->field_0x980 = dVar3;
    dVar3 = (pTVar9->Rotation).field0_0x0._s_0.Z;
    *(double *)&this->field_0x988 = (pTVar9->Rotation).field0_0x0._s_0.Y;
    *(double *)&this->field_0x990 = dVar3;
    *(double *)&this->field_0x998 = (pTVar9->Rotation).field0_0x0._s_0.W;
    *(undefined8 *)this_00 = *(undefined8 *)&this->field_0x968;
    *(undefined8 *)&this->field_0x938 = *(undefined8 *)&this->field_0x970;
    *(undefined8 *)&this->field_0x940 = *(undefined8 *)&this->field_0x978;
    *(undefined8 *)&this->field_0x948 = *(undefined8 *)&this->field_0x980;
    *(undefined8 *)&this->field_0x950 = *(undefined8 *)&this->field_0x988;
    *(undefined8 *)&this->field_0x958 = *(undefined8 *)&this->field_0x990;
    *(undefined8 *)&this->field_0x960 = *(undefined8 *)&this->field_0x998;
    UE::Geometry::TFrame3<double>::Transform
              ((TFrame3<double> *)this_00,(TTransformSRT3<double> *)&this->field_0x1f0);
  }
  this->InitialStrokeTriangleID = *(int *)&this->field_0x500;
  dStack_d0 = 0.0;
  dStack_c8 = 0.0;
  local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_c0 = (double)___xmm_3ff00000000000000000000000000000;
  dStack_b8 = (double)_UNK_15061cbc8;
  pdVar10 = (double *)(**(code **)(*(longlong *)this + 0x5c8))(this);
  local_e8 = *pdVar10;
  dStack_e0 = pdVar10[1];
  local_d8 = pdVar10[2];
  dStack_d0 = pdVar10[3];
  dStack_c8 = pdVar10[4];
  dStack_c0 = pdVar10[5];
  dStack_b8 = pdVar10[6];
  (**(code **)(*(longlong *)*puVar7 + 8))((longlong *)*puVar7,&local_e8);
  plVar1 = (longlong *)*puVar7;
  pcVar2 = *(code **)(*plVar1 + 0x10);
  uVar14 = (**(code **)(*(longlong *)this + 0x440))(this);
  (*pcVar2)(plVar1,uVar14,this_00,&this->VertexROI);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->AccumulatedTriangleROI);
  if ((this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveVertexChange == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
                         ,0x721,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_01 = ::operator_new(0x140);
  pFVar11 = (FMeshVertexChangeBuilder *)0x0;
  if (this_01 != (FMeshVertexChangeBuilder *)0x0) {
    pFVar11 = FMeshVertexChangeBuilder::FMeshVertexChangeBuilder(this_01);
  }
  this->ActiveVertexChange = pFVar11;
  pUVar12 = (UInteractiveToolManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  pFVar13 = FText::AsLocalizable_Advanced_LocText
                      (&local_68,L"UMeshVertexSculptTool",L"VertexSculptChange",L"Brush Stroke");
  UE::TransactionUtil::FLongTransactionTracker::Open
            ((FLongTransactionTracker *)&this->field_0xc74,pFVar13,pUVar12);
  return;
}

// OnCancelStroke @ 14cd0f420

void __thiscall UMeshVertexSculptTool::OnCancelStroke(UMeshVertexSculptTool *this)

{
  undefined8 *puVar1;
  UInteractiveToolManager *pUVar2;
  
  puVar1 = (undefined8 *)(**(code **)(*(longlong *)this + 0x478))();
  (**(code **)(*(longlong *)*puVar1 + 0x20))();
  if (this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) {
    FMeshVertexChangeBuilder::_scalar_deleting_destructor_(this->ActiveVertexChange,1);
  }
  this->ActiveVertexChange = (FMeshVertexChangeBuilder *)0x0;
  pUVar2 = (UInteractiveToolManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  UE::TransactionUtil::FLongTransactionTracker::Close
            ((FLongTransactionTracker *)&this->field_0xc74,pUVar2);
  return;
}

// OnDynamicMeshComponentChanged @ 14cd0f870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMeshVertexSculptTool::OnDynamicMeshComponentChanged
          (UMeshVertexSculptTool *this,UDynamicMeshComponent *param_1,FMeshRegionChangeBase *param_2
          ,bool param_3)

{
  TFuture<void> *pTVar1;
  longlong *plVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  PRTL_CRITICAL_SECTION_DEBUG p_Var9;
  FScriptContainerElement *pFVar10;
  EAsyncExecution EVar11;
  ForAnyElementType FVar12;
  char cVar13;
  undefined8 uVar14;
  TFuture<bool> *pTVar15;
  TFuture<void> *pTVar16;
  uint *puVar17;
  undefined1 auStack_c8 [32];
  <lambda_2> local_a8;
  undefined1 local_98 [8];
  undefined1 local_90 [16];
  ForAnyElementType local_80;
  FSharedReferencer<1> aFStack_78 [2];
  ForAnyElementType local_68;
  int iStack_60;
  int iStack_5c;
  uint local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (((*(longlong *)&this->StampUpdateOctreeFuture != 0) &&
      (*(char *)(*(longlong *)&this->StampUpdateOctreeFuture + 0x68) == '\0')) &&
     (*(longlong *)&this->StampUpdateOctreeFuture != 0)) {
    do {
      do {
      } while (*(longlong *)&this->StampUpdateOctreeFuture == 0);
      plVar2 = *(longlong **)(*(longlong *)&this->StampUpdateOctreeFuture + 0x60);
      cVar13 = (**(code **)(*plVar2 + 0x20))(plVar2,0xffffffff,0);
    } while (cVar13 == '\0');
  }
  pTVar1 = &this->UndoUpdateFuture;
  if (*(longlong *)pTVar1 != 0) {
    do {
      do {
      } while (*(longlong *)pTVar1 == 0);
      plVar2 = *(longlong **)(*(longlong *)pTVar1 + 0x60);
      cVar13 = (**(code **)(*plVar2 + 0x20))(plVar2,0xffffffff,0);
    } while (cVar13 == '\0');
  }
  local_98 = (undefined1  [8])(**(code **)(*(longlong *)this + 0x440))(this);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->AccumulatedTriangleROI);
  local_90._8_8_ = local_98;
  local_a8.Mesh = (FDynamicMesh3 *)local_90;
  local_a8.__this =
       (UMeshVertexSculptTool *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshVertexSculptTool::OnDynamicMeshComponentChanged'::__l2::<lambda_1>,void,TArrayView<int_const_,int>_>
       ::Call;
  local_90._0_8_ = this;
  (**(code **)((longlong)*param_2 + 0x50))(param_2,local_98,&local_a8,param_3);
  lpCriticalSection = *(LPCRITICAL_SECTION *)pTVar1;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) goto LAB_14cd0fa42;
  local_68.Data = (FScriptContainerElement *)0x0;
  uStack_40 = (uint *)0x0;
  if (*(char *)&lpCriticalSection[2].LockSemaphore == '\0') {
    EnterCriticalSection(lpCriticalSection);
    if (*(char *)&lpCriticalSection[2].LockSemaphore != '\0') {
      LeaveCriticalSection(lpCriticalSection);
      goto LAB_14cd0f9d1;
    }
    pFVar10 = *(FScriptContainerElement **)&lpCriticalSection[1].LockCount;
    iVar3 = *(int *)&lpCriticalSection[1].OwningThread;
    iVar4 = *(int *)((longlong)&lpCriticalSection[1].OwningThread + 4);
    uVar5 = *(uint *)&lpCriticalSection[1].LockSemaphore;
    uVar6 = *(uint *)((longlong)&lpCriticalSection[1].LockSemaphore + 4);
    uVar7 = *(undefined4 *)&lpCriticalSection[1].SpinCount;
    uVar8 = *(undefined4 *)((longlong)&lpCriticalSection[1].SpinCount + 4);
    p_Var9 = lpCriticalSection[2].DebugInfo;
    puVar17 = *(uint **)&lpCriticalSection[2].LockCount;
    *(FScriptContainerElement **)&lpCriticalSection[1].LockCount = local_68.Data;
    lpCriticalSection[1].OwningThread = (HANDLE)CONCAT44(iStack_5c,iStack_60);
    *(uint *)&lpCriticalSection[1].LockSemaphore = local_58;
    *(uint *)((longlong)&lpCriticalSection[1].LockSemaphore + 4) = uStack_54;
    *(undefined4 *)&lpCriticalSection[1].SpinCount = uStack_50;
    *(undefined4 *)((longlong)&lpCriticalSection[1].SpinCount + 4) = uStack_4c;
    *(int *)&lpCriticalSection[2].DebugInfo = (int)local_48;
    *(int *)((longlong)&lpCriticalSection[2].DebugInfo + 4) = local_48._4_4_;
    lpCriticalSection[2].LockCount = (LONG)uStack_40;
    lpCriticalSection[2].RecursionCount = uStack_40._4_4_;
    local_68.Data = pFVar10;
    iStack_60 = iVar3;
    iStack_5c = iVar4;
    local_58 = uVar5;
    uStack_54 = uVar6;
    uStack_50 = uVar7;
    uStack_4c = uVar8;
    local_48 = p_Var9;
    uStack_40 = puVar17;
    LeaveCriticalSection(lpCriticalSection);
LAB_14cd0f9fd:
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      puVar17 = &local_58;
      if (uStack_40 != (uint *)0x0) {
        puVar17 = uStack_40;
      }
      (**(code **)(*(longlong *)puVar17 + 0x10))();
    }
  }
  else {
LAB_14cd0f9d1:
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      UE::Core::Private::Function::CheckCallable(local_68.Data);
      FVar12.Data = local_68.Data;
      puVar17 = &local_58;
      if (uStack_40 != (uint *)0x0) {
        puVar17 = uStack_40;
      }
      uVar14 = (**(code **)(*(longlong *)puVar17 + 8))();
      (*(code *)FVar12.Data)(uVar14);
      goto LAB_14cd0f9fd;
    }
  }
  local_80.Data = (FScriptContainerElement *)0x0;
  aFStack_78[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TFuture<void> *)&local_80) {
    *(undefined8 *)pTVar1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->UndoUpdateFuture).field_0x8,aFStack_78);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_78[0].ReferenceController);
LAB_14cd0fa42:
  EVar11 = VertexSculptToolAsyncExecTarget;
  local_a8.Mesh = (FDynamicMesh3 *)local_98;
  this->bUndoUpdatePending = true;
  local_68.Data = (FScriptContainerElement *)0x0;
  uStack_40 = (uint *)0x0;
  local_a8.__this = this;
  pTVar15 = Async<_UMeshVertexSculptTool::OnDynamicMeshComponentChanged_::__l2::<lambda_2>_>
                      ((TFuture<bool> *)local_90,EVar11,&local_a8,
                       (TUniqueFunction<void___cdecl(void)> *)&local_68);
  if (&this->UndoNormalsFuture != pTVar15) {
    *(undefined8 *)&this->UndoNormalsFuture = *(undefined8 *)pTVar15;
    *(undefined8 *)pTVar15 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->UndoNormalsFuture).field_0x8,
               (FSharedReferencer<1> *)&pTVar15->field_0x8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_90._8_8_);
  local_a8.Mesh = (FDynamicMesh3 *)local_98;
  local_68.Data = (FScriptContainerElement *)0x0;
  uStack_40 = (uint *)0x0;
  local_a8.__this = this;
  pTVar15 = Async<_UMeshVertexSculptTool::OnDynamicMeshComponentChanged_::__l2::<lambda_3>_>
                      ((TFuture<bool> *)local_90,VertexSculptToolAsyncExecTarget,
                       (<lambda_3> *)&local_a8,(TUniqueFunction<void___cdecl(void)> *)&local_68);
  if (&this->UndoUpdateOctreeFuture != pTVar15) {
    *(undefined8 *)&this->UndoUpdateOctreeFuture = *(undefined8 *)pTVar15;
    *(undefined8 *)pTVar15 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->UndoUpdateOctreeFuture).field_0x8,
               (FSharedReferencer<1> *)&pTVar15->field_0x8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_90._8_8_);
  local_a8.Mesh = (FDynamicMesh3 *)local_98;
  local_68.Data = (FScriptContainerElement *)0x0;
  uStack_40 = (uint *)0x0;
  local_a8.__this = this;
  pTVar15 = Async<_UMeshVertexSculptTool::OnDynamicMeshComponentChanged_::__l2::<lambda_4>_>
                      ((TFuture<bool> *)local_90,VertexSculptToolAsyncExecTarget,
                       (<lambda_4> *)&local_a8,(TUniqueFunction<void___cdecl(void)> *)&local_68);
  if (&this->UndoUpdateBaseMeshFuture != pTVar15) {
    *(undefined8 *)&this->UndoUpdateBaseMeshFuture = *(undefined8 *)pTVar15;
    *(undefined8 *)pTVar15 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->UndoUpdateBaseMeshFuture).field_0x8,
               (FSharedReferencer<1> *)&pTVar15->field_0x8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_90._8_8_);
  local_68.Data = (FScriptContainerElement *)0x0;
  uStack_40 = (uint *)0x0;
  local_90._0_8_ = this;
  pTVar16 = Async<_UMeshVertexSculptTool::OnDynamicMeshComponentChanged_::__l2::<lambda_5>_>
                      ((TFuture<void> *)&local_a8,VertexSculptToolAsyncExecTarget,
                       (<lambda_5> *)local_90,(TUniqueFunction<void___cdecl(void)> *)&local_68);
  if (pTVar1 != pTVar16) {
    *(undefined8 *)pTVar1 = *(undefined8 *)pTVar16;
    *(undefined8 *)pTVar16 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&(this->UndoUpdateFuture).field_0x8,
               (FSharedReferencer<1> *)&pTVar16->field_0x8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_a8.Mesh);
  return;
}

// OnEndStroke @ 14cd0ff20

void __thiscall UMeshVertexSculptTool::OnEndStroke(UMeshVertexSculptTool *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  this->bTargetDirty = true;
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)this + 0x478))();
  plVar1 = (longlong *)*puVar3;
  pcVar2 = *(code **)(*plVar1 + 0x18);
  uVar4 = (**(code **)(*(longlong *)this + 0x440))(this);
  (*pcVar2)(plVar1,uVar4,&this->field_0x930,&this->VertexROI);
  EndChange(this);
  return;
}

// OnPropertyModified @ 14cd11ca0

void __thiscall
UMeshVertexSculptTool::OnPropertyModified
          (UMeshVertexSculptTool *this,UObject *param_1,FProperty *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014cd11ca3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x490))();
  return;
}

// OnTick @ 14cd14740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall UMeshVertexSculptTool::OnTick(UMeshVertexSculptTool *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  ULineSetComponent *pUVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  UPreviewGeometry *pUVar12;
  TReferenceControllerBase<1> *pTVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  bool *pbVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  FTreeCutSet *pFVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auStackY_388 [32];
  undefined1 local_334 [12];
  FTreeCutSet *local_328;
  FSharedReferencer<1> FStack_320;
  TArray<UE::Geometry::FDynamicMeshOctree3::FCellReference,TSizedDefaultAllocator<32>_> local_318;
  UMeshVertexSculptTool *local_308;
  ULineSetComponent *pUStack_300;
  ULineSetComponent *local_2f8;
  undefined8 *puStack_2f0;
  undefined8 *local_2e8;
  FUniqueIndexSet *pFStack_2e0;
  uint local_2d8 [4];
  UMeshVertexSculptTool *local_2c8;
  ULineSetComponent *local_2c0;
  ULineSetComponent *local_2b8;
  undefined8 local_2b0;
  TReferenceControllerBase<1> *pTStack_2a8;
  undefined8 local_2a0;
  TReferenceControllerBase<1> *pTStack_298;
  FUniqueIndexSet local_290;
  code *local_268;
  UMeshVertexSculptTool **local_260;
  code *local_258 [2];
  undefined **local_248;
  UMeshVertexSculptTool *local_240;
  undefined8 local_230;
  code *local_228 [5];
  undefined8 *local_200;
  code *local_1f8 [5];
  undefined8 *local_1d0;
  code *local_1c8 [5];
  undefined8 *local_1a0;
  undefined1 local_198 [128];
  undefined1 local_118 [16];
  undefined1 local_108 [32];
  void *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  ForElementType<FSetElementId> local_c8;
  int local_c0;
  uint local_b8;
  undefined1 local_a8 [16];
  double local_98;
  undefined8 *puStack_90;
  __m128d local_88;
  double local_78;
  double dStack_70;
  __m128d local_68;
  double local_58;
  double dStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_388;
  local_2c8 = this;
  UMeshSculptToolBase::OnTick((UMeshSculptToolBase *)this,param_1);
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1438,"VtxSculptTool_Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x59e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1438);
  }
  if (this->bUndoUpdatePending == false) {
    if (this->bCachedFreezeTarget != ((this->SculptProperties).field0_0x0.DebugPtr)->bFreezeTarget)
    {
      UpdateBaseMesh(this,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0);
      this->bTargetDirty = false;
    }
    pUVar9 = (ULineSetComponent *)(**(code **)(*(longlong *)this + 0x440))(this);
    pTVar18 = (TReferenceControllerBase<1> *)0x0;
    lVar3 = pUVar9->_padding_;
    pTVar13 = pTVar18;
    if ((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x38))) {
      pTVar13 = (TReferenceControllerBase<1> *)**(undefined8 **)(lVar3 + 0x30);
    }
    local_290.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    puStack_90 = &local_2a0;
    local_290.Values.ArrayNum = 0;
    local_290.Values.ArrayMax = 0;
    local_98 = (double)CONCAT71(local_98._1_7_,pTVar13 != (TReferenceControllerBase<1> *)0x0);
    local_2f8 = (ULineSetComponent *)
                CONCAT71(local_2f8._1_7_,pTVar13 != (TReferenceControllerBase<1> *)0x0);
    puStack_2f0 = &local_2a0;
    local_2e8 = &local_2b0;
    local_88.m128d_f64[1] = (double)&local_290;
    local_88.m128d_f64[0] = (double)&local_2b0;
    pFStack_2e0 = &local_290;
    local_290.Bits = (long64 *)0x0;
    local_290.NumWords = 0;
    local_2a0 = 0;
    pTStack_298 = (TReferenceControllerBase<1> *)0x0;
    local_2b0 = 0;
    pTStack_2a8 = (TReferenceControllerBase<1> *)0x0;
    local_228[0] = (code *)0x0;
    local_308 = this;
    pUStack_300 = pUVar9;
    local_2b8 = pUVar9;
    local_a8._0_8_ = this;
    local_a8._8_8_ = pUVar9;
    local_200 = FMemory::Malloc(0x38,8);
    *local_200 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMeshVertexSculptTool::OnTick'::`2'::<lambda_3>,0,1>::
                  _vftable_;
    local_200[1] = local_308;
    local_200[2] = pUStack_300;
    local_200[3] = local_2f8;
    local_200[4] = puStack_2f0;
    local_200[5] = local_2e8;
    local_200[6] = pFStack_2e0;
    if (local_200 + 1 != (undefined8 *)0x0) {
      local_228[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UMeshVertexSculptTool::OnTick'::__l2::<lambda_3>,void>::
                     Call;
    }
    local_1f8[0] = (code *)0x0;
    local_1d0 = FMemory::Malloc(0x38,8);
    *local_1d0 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMeshVertexSculptTool::OnTick'::`2'::<lambda_2>,0,1>::
                  _vftable_;
    local_1d0[1] = local_a8._0_8_;
    local_1d0[2] = local_a8._8_8_;
    local_1d0[3] = local_98;
    local_1d0[4] = puStack_90;
    local_1d0[5] = local_88.m128d_f64[0];
    local_1d0[6] = local_88.m128d_f64[1];
    if (local_1d0 + 1 != (undefined8 *)0x0) {
      local_1f8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UMeshVertexSculptTool::OnTick'::__l2::<lambda_2>,void,int,UE::Math::TRay<double>_const_&>
                     ::Call;
    }
    local_1c8[0] = (code *)0x0;
    local_1a0 = FMemory::Malloc(0x20,8);
    *local_1a0 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMeshVertexSculptTool::OnTick'::`2'::<lambda_1>,0,1>::
                  _vftable_;
    local_1a0[1] = this;
    local_1a0[2] = pUVar9;
    local_1a0[3] = &local_290;
    if (local_1a0 + 1 != (undefined8 *)0x0) {
      local_1c8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UMeshVertexSculptTool::OnTick'::__l2::<lambda_1>,void,int>
                     ::Call;
    }
    local_248 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UMeshVertexSculptTool::OnTick'::`2'::<lambda_4>,0,0>::
                 _vftable_;
    local_230 = 0;
    local_258[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UMeshVertexSculptTool::OnTick'::__l2::<lambda_4>,bool,UE::Math::TRay<double>_const_&>
                   ::Call;
    local_240 = this;
    UMeshSculptToolBase::ProcessPerTickStamps
              ((UMeshSculptToolBase *)this,
               (TFunction<bool___cdecl(UE::Math::TRay<double>_const_&)> *)local_258,
               (TFunction<void___cdecl(int)> *)local_1c8,
               (TFunction<void___cdecl(int,UE::Math::TRay<double>_const_&)> *)local_1f8,
               (TFunction<void___cdecl(void)> *)local_228);
    cVar5 = (**(code **)(*(longlong *)this + 0x568))(this);
    if ((cVar5 == '\0') && (this->bTargetDirty != false)) {
      bVar24 = -1 < CpuChannel->Enabled;
      if (bVar24) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1586,"VtxSculptTool_Tick_UpdateTarget",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
                   ,0x632);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1586);
      }
      cVar5 = (**(code **)(*(longlong *)this + 0x568))(this);
      if ((cVar5 != '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InStroke() == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
                             ,0x633,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UpdateBaseMesh(this,&this->AccumulatedTriangleROI);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->AccumulatedTriangleROI);
      this->bTargetDirty = false;
      if (bVar24) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    cVar5 = (**(code **)(*(longlong *)MeshVertexSculptToolLocals::EnableOctreeVisuals._8_8_ + 0xc0))
                      ();
    pUVar12 = (this->OctreeGeometry).field0_0x0.DebugPtr;
    if (cVar5 == '\0') {
      if ((pUVar12 != (UPreviewGeometry *)0x0) &&
         (pUVar9 = UPreviewGeometry::FindLineSet
                             (pUVar12,MeshVertexSculptToolLocals::OctreeLineSetID),
         this->bOctreeUpdated != false)) {
        ULineSetComponent::Clear(pUVar9);
      }
    }
    else {
      if (pUVar12 == (UPreviewGeometry *)0x0) {
        pUVar10 = GetTransientPackageAsObject();
        FObjectInitializer::AssertIfInConstructor
                  (pUVar10,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar11 = Z_Construct_UClass_UPreviewGeometry_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_198,pUVar11);
        local_198._8_8_ = pUVar10;
        pUVar12 = (UPreviewGeometry *)
                  StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_198);
        if (local_198._64_8_ != 0) {
          plVar8 = (longlong *)(local_198 + 0x50);
          if ((longlong *)local_198._104_8_ != (longlong *)0x0) {
            plVar8 = (longlong *)local_198._104_8_;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar12 != (UPreviewGeometry *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        (this->OctreeGeometry).field0_0x0.DebugPtr = pUVar12;
        local_a8._0_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
        local_a8._8_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
        local_98 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        puStack_90 = (undefined8 *)(double)GlobalVectorConstants::Float0001.m128_f32[3];
        local_78 = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        dStack_70 = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
        local_88.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_88.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_88.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_58 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        dStack_50 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
        local_68.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_68.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_68.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        UPreviewGeometry::CreateInWorld
                  (pUVar12,*(UWorld **)&this->field_0x138,(TTransform<double> *)local_a8);
        UPreviewGeometry::AddPointSet
                  ((this->OctreeGeometry).field0_0x0.DebugPtr,
                   MeshVertexSculptToolLocals::OctreePointSetID);
        UPreviewGeometry::AddLineSet
                  ((this->OctreeGeometry).field0_0x0.DebugPtr,
                   MeshVertexSculptToolLocals::OctreeLineSetID);
      }
      local_2c0 = UPreviewGeometry::FindLineSet
                            ((this->OctreeGeometry).field0_0x0.DebugPtr,
                             MeshVertexSculptToolLocals::OctreeLineSetID);
      if (this->bOctreeUpdated != false) {
        ULineSetComponent::Clear(local_2c0);
        pFVar22 = (this->CutTree).Object;
        if (pFVar22 == (FTreeCutSet *)0x0) {
          lVar3 = (this->Octree)._padding_;
          iVar2 = *(int *)((longlong)&(this->Octree)._padding_ + 4);
          local_118._0_8_ = (TReferenceControllerBase<1> *)0x0;
          local_108._0_8_ = (FScriptContainerElement *)0x0;
          local_e8 = (void *)0x0;
          local_e0 = 0;
          local_dc = 0x80;
          local_d8 = 0xffffffff;
          local_d4 = 0;
          local_c8 = (ForElementType<FSetElementId>)0x0;
          local_c0 = 0;
          local_b8 = 0;
          local_118._8_8_ = 0;
          local_108._8_8_ = 0;
          pTVar13 = pTVar18;
          pTVar19 = pTVar18;
          pTVar20 = pTVar18;
          pTVar21 = pTVar18;
          while( true ) {
            uVar15 = (uint)pTVar13;
            if (uVar15 == (int)lVar3 * 0x200 + iVar2) break;
            pbVar17 = (bool *)(*(longlong *)
                                ((this->Octree)._padding_ + ((ulonglong)pTVar13 >> 9) * 8) +
                              (ulonglong)(uVar15 & 0x1ff) * 0x34);
            if ((uint)pbVar17[4] == (uint)pTVar21) {
              local_334._0_4_ = *(undefined4 *)pbVar17;
              iVar7 = (int)pTVar20;
              if ((pTVar19 <= (TReferenceControllerBase<1> *)local_334) &&
                 (local_334 <
                  (undefined1 *)
                  ((longlong)&pTVar19->_padding_ + (longlong)(int)local_118._12_4_ * 4))) {
                bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   );
                if (bVar24) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pTVar19 = (TReferenceControllerBase<1> *)local_118._0_8_;
                iVar7 = local_118._8_4_;
              }
              if (iVar7 == local_118._12_4_) {
                iVar7 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,(ForAnyElementType *)local_118,(int *)(local_118 + 0xc));
                pTVar19 = (TReferenceControllerBase<1> *)local_118._0_8_;
              }
              local_118._8_4_ = iVar7 + 1;
              *(undefined4 *)((longlong)&pTVar19->_padding_ + (longlong)iVar7 * 4) = local_334._0_4_
              ;
              TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
              Emplace<unsigned_int_const_&>
                        ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator> *)
                         local_108,local_2d8,pbVar17);
              pTVar21 = (TReferenceControllerBase<1> *)(ulonglong)local_b8;
              pTVar20 = (TReferenceControllerBase<1> *)(local_118._8_8_ & 0xffffffff);
              pTVar19 = (TReferenceControllerBase<1> *)local_118._0_8_;
            }
            pTVar13 = (TReferenceControllerBase<1> *)(ulonglong)(uVar15 + 1);
          }
          pTVar13 = ::operator_new(0x78);
          if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
            local_328 = ___xmm_00000000000000000000000000000010;
            pFVar22 = (FTreeCutSet *)&DAT_00000010;
            FStack_320.ReferenceController = _UNK_150651568;
          }
          else {
            pTVar13->SharedReferenceCount = (atomic<int>)0x1;
            pTVar13->WeakReferenceCount = (atomic<int>)0x1;
            pTVar13->_padding_ =
                 (longlong)
                 &
                 ___7__TIntrusiveReferenceController_VFTreeCutSet_FDynamicMeshOctree3_Geometry_UE___00_SharedPointerInternals__6B_
            ;
            UE::Geometry::FDynamicMeshOctree3::FTreeCutSet::FTreeCutSet
                      ((FTreeCutSet *)(pTVar13 + 1),(FTreeCutSet *)local_118);
            pFVar22 = (FTreeCutSet *)(pTVar13 + 1);
            if ((pFVar22 == (FTreeCutSet *)0x0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InObject != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x246,L""), bVar24)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            LOCK();
            pTVar13->SharedReferenceCount = (atomic<int>)((int)pTVar13->SharedReferenceCount + 1);
            UNLOCK();
            FStack_320.ReferenceController = pTVar13;
            pTVar18 = pTVar13;
            local_328 = pFVar22;
          }
          this = local_2c8;
          if (&local_2c8->CutTree !=
              (TSharedPtr<UE::Geometry::FDynamicMeshOctree3::FTreeCutSet,1> *)&local_328) {
            (local_2c8->CutTree).Object = pFVar22;
            local_328 = (FTreeCutSet *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(local_2c8->CutTree).SharedReferenceCount,&FStack_320);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_320.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar18);
          local_c0 = 0;
          if (local_c8 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)local_c8);
          }
          bVar24 = local_108._12_4_ != 0;
          local_108._8_8_ = (ulonglong)(uint)local_108._12_4_ << 0x20;
          if (bVar24) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
          }
          local_d8 = 0xffffffff;
          local_d4 = 0;
          local_e0 = 0;
          if (0x80 < local_dc) {
            local_dc = 0x80;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
          }
          if (local_e8 != (void *)0x0) {
            FMemory::Free(local_e8);
          }
          FVar14.Data = (FScriptContainerElement *)local_118._0_8_;
          if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
            FMemory::Free((void *)local_108._0_8_);
            FVar14.Data = (FScriptContainerElement *)local_118._0_8_;
          }
        }
        else {
          local_318.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_318.ArrayNum = 0;
          local_318.ArrayMax = 0;
          UE::Geometry::FDynamicMeshOctree3::UpdateLevelCutSet(&this->Octree,pFVar22,&local_318);
          FVar14.Data = local_318.AllocatorInstance.Data;
        }
        if ((TReferenceControllerBase<1> *)FVar14.Data != (TReferenceControllerBase<1> *)0x0) {
          FMemory::Free(FVar14.Data);
        }
        if (((this->CutTree).Object == (FTreeCutSet *)0x0) &&
           (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar24)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar22 = (this->CutTree).Object;
        pFVar16 = (pFVar22->CutCells).AllocatorInstance.Data;
        iVar2 = (pFVar22->CutCells).ArrayNum;
        pFVar1 = pFVar16 + (longlong)iVar2 * 4;
        while( true ) {
          if ((pFVar22->CutCells).ArrayNum != iVar2) {
            `TCheckedPointerIterator<UE::Geometry::FDynamicMeshOctree3::FCellReference,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_334 + 4);
          }
          if (pFVar16 == pFVar1) break;
          FColor::MakeRandomSeededColor((int)local_334 + 8);
          pUStack_300 = local_2c0;
          local_2f8 = local_2b8;
          puStack_2f0 = (undefined8 *)(local_334 + 8);
          local_260 = &local_308;
          local_268 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UMeshVertexSculptTool::OnTick'::__l36::<lambda_5>,void,int>
                      ::Call;
          local_308 = this;
          UE::Geometry::FDynamicMeshOctree3::CollectTriangles
                    (&this->Octree,(FCellReference *)pFVar16,
                     (TFunctionRef<void___cdecl(int)> *)&local_268);
          pFVar16 = pFVar16 + 4;
        }
        this->bOctreeUpdated = false;
      }
    }
    UE::Geometry::FUniqueIndexSet::~FUniqueIndexSet(&local_290);
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)0x0,0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_2a8)
    ;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_298)
    ;
  }
  else {
    if (*(longlong *)&this->UndoUpdateFuture != 0) {
      do {
        do {
        } while (*(longlong *)&this->UndoUpdateFuture == 0);
        plVar8 = *(longlong **)(*(longlong *)&this->UndoUpdateFuture + 0x60);
        cVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,0xffffffff,0);
      } while (cVar5 == '\0');
    }
    UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
              ((this->DynamicMeshComponent).field0_0x0.DebugPtr,&this->AccumulatedTriangleROI,
               VertexNormals|Positions);
    plVar8 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
    (**(code **)(*plVar8 + 0x368))(plVar8);
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnUpdateHover @ 14cd15a80

bool __thiscall
UMeshVertexSculptTool::OnUpdateHover(UMeshVertexSculptTool *this,FInputDeviceRay *param_1)

{
  FSharedReferencer<1> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  bool bVar8;
  undefined1 uVar9;
  FName *pFVar10;
  UMaterialInstanceDynamic *pUVar11;
  float fVar12;
  float fVar13;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_48;
  FName local_40;
  FName local_38 [4];
  
  dVar3 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  this_00 = &this[-1].CutTree.SharedReferenceCount;
  *(double *)&this->field_0x10 = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  *(double *)&this->field_0x18 = dVar3;
  uVar4 = *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 0x14);
  uVar5 = *(undefined4 *)&(param_1->WorldRay).Direction.field0_0x0;
  uVar6 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 4);
  *(undefined4 *)&this->field_0x20 =
       *(undefined4 *)((longlong)&(param_1->WorldRay).Origin.field0_0x0 + 0x10);
  *(undefined4 *)&this->field_0x24 = uVar4;
  *(undefined4 *)&this->field_0x28 = uVar5;
  *(undefined4 *)&this->field_0x2c = uVar6;
  uVar4 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0xc);
  uVar5 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0x10);
  uVar6 = *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 0x14);
  *(undefined4 *)&this->field_0x30 =
       *(undefined4 *)((longlong)&(param_1->WorldRay).Direction.field0_0x0 + 8);
  *(undefined4 *)&this->field_0x34 = uVar4;
  *(undefined4 *)&this->field_0x38 = uVar5;
  *(undefined4 *)&this->field_0x3c = uVar6;
  pTVar1 = this_00->ReferenceController;
  *(undefined4 *)&(this->StampUpdateOctreeFuture).field_0xc =
       *(undefined4 *)(*(longlong *)&this->field_0xbb8 + 0xb4);
  cVar7 = (**(code **)&pTVar1[0x56].SharedReferenceCount)(this_00);
  if (cVar7 == '\0') {
    UpdateBrushPosition((UMeshVertexSculptTool *)this_00,&param_1->WorldRay);
    pUVar11 = *(UMaterialInstanceDynamic **)&this->field_0xa68;
    if (pUVar11 != (UMaterialInstanceDynamic *)0x0) {
      dVar3 = (double)(**(code **)&this_00->ReferenceController[0x4a].SharedReferenceCount)(this_00)
      ;
      pFVar10 = ::FName::FName(&local_res8,L"FalloffRatio");
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar11,*pFVar10,(float)dVar3);
      fVar13 = __real_3f800000;
      switch(*(undefined1 *)(*(longlong *)&this->field_0xbb8 + 0xb8)) {
      default:
        pUVar11 = *(UMaterialInstanceDynamic **)&this->field_0xa68;
        pFVar10 = ::FName::FName(&local_48,L"FalloffMode");
        fVar12 = 0.0;
        break;
      case 1:
      case 5:
        pUVar11 = *(UMaterialInstanceDynamic **)&this->field_0xa68;
        pFVar10 = ::FName::FName(&local_res10,L"FalloffMode");
        fVar12 = __real_3eaaaaaa;
        break;
      case 2:
      case 6:
        pUVar11 = *(UMaterialInstanceDynamic **)&this->field_0xa68;
        pFVar10 = ::FName::FName(&local_res18,L"FalloffMode");
        fVar12 = __real_3f2aaaaa;
        break;
      case 3:
      case 7:
        pUVar11 = *(UMaterialInstanceDynamic **)&this->field_0xa68;
        pFVar10 = ::FName::FName(&local_res20,L"FalloffMode");
        fVar12 = fVar13;
      }
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar11,*pFVar10,fVar12);
      switch(*(undefined1 *)(*(longlong *)&this->field_0xbb8 + 0xb8)) {
      default:
        pUVar11 = *(UMaterialInstanceDynamic **)&this->field_0xa68;
        pFVar10 = ::FName::FName(local_38,L"FalloffShape");
        fVar13 = 0.0;
        break;
      case 4:
      case 5:
      case 6:
      case 7:
        pUVar11 = *(UMaterialInstanceDynamic **)&this->field_0xa68;
        pFVar10 = ::FName::FName(&local_40,L"FalloffShape");
      }
      UMaterialInstanceDynamic::SetScalarParameterValue(pUVar11,*pFVar10,fVar13);
    }
  }
  else {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4886156186946108095>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
                       ,0x541,"InStroke() == false");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      uVar9 = (*pcVar2)();
      return (bool)uVar9;
    }
  }
  return true;
}

// PrepROIVertPositionBuffers @ 14cd163b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMeshVertexSculptTool::PrepROIVertPositionBuffers(UMeshVertexSculptTool *this)

{
  int iVar1;
  bool bVar2;
  undefined8 local_res8;
  undefined1 local_38 [16];
  TArrayView<std::nullptr_t,int> local_28;
  undefined1 local_18 [16];
  
  local_res8 = (**(code **)(*(longlong *)this + 0x440))();
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId971,"DynamicMeshSculptTool_UpdateROI_4ROI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x3cb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId971);
  }
  iVar1 = (this->VertexROI).ArrayNum;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ROIPositionBuffer,iVar1,No);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ROIPrevPositionBuffer,iVar1,No);
  local_38._8_8_ = &local_res8;
  local_28.DataPtr = (void **)0x0;
  local_28.ArrayNum = 0;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshVertexSculptTool::PrepROIVertPositionBuffers'::__l2::<lambda_1>,void,int>
       ::Call;
  local_18._8_8_ = local_38;
  local_38._0_8_ = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)local_18,
             local_res8._0_1_,None,&local_28);
  if (this->bApplySymmetry != false) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->SymmetricROIPositionBuffer,iVar1,No);
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->SymmetricROIPrevPositionBuffer,iVar1,No);
    local_18._0_8_ = &local_res8;
    local_28.DataPtr = (void **)0x0;
    local_38._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UMeshVertexSculptTool::PrepROIVertPositionBuffers'::__l5::<lambda_2>,void,int>
         ::Call;
    local_38._8_8_ = local_18;
    local_28.ArrayNum = 0;
    local_18._8_8_ = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)local_38,
               local_res8._0_1_,None,&local_28);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ProcessToolMeshes @ 14cd16a40

void __thiscall
UMeshVertexSculptTool::ProcessToolMeshes
          (UMeshVertexSculptTool *this,
          TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&,int)> *param_1)

{
  undefined8 uVar1;
  undefined4 local_res8 [8];
  
  uVar1 = (**(code **)(*(longlong *)&this[-1].field_0xb58 + 0x438))();
  local_res8[0] = 0;
  (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,uVar1,local_res8);
  return;
}

// RealignBrush @ 14cd17180

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
UMeshVertexSculptTool::RealignBrush(UMeshVertexSculptTool *this,EStampAlignmentType param_1)

{
  double dVar1;
  double dVar2;
  TVector<double> *pTVar3;
  double dVar4;
  double dVar5;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38 [2];
  
  if (param_1 == Camera) {
    UMeshSculptToolBase::AlignBrushToView((UMeshSculptToolBase *)this);
    return;
  }
  if (param_1 != ReferencePlane) {
    if (param_1 == ReferenceSphere) {
      local_38[0]._0_8_ = *(undefined8 *)&this->field_0x490;
      local_38[0]._8_8_ = *(undefined8 *)&this->field_0x498;
      local_38[0]._16_8_ = *(undefined8 *)&this->field_0x4a0;
      if (*(longlong *)&this->field_0x130 == 0) {
        pTVar3 = &UE::Math::TVector<double>::ZeroVector;
      }
      else {
        pTVar3 = (TVector<double> *)(*(longlong *)&this->field_0x130 + 0xb8);
      }
      dVar5 = (double)local_38[0]._0_8_ - (pTVar3->field0_0x0)._s_0.X;
      dVar2 = (double)local_38[0]._16_8_ - (pTVar3->field0_0x0)._s_0.Z;
      dVar1 = (double)local_38[0]._8_8_ - (pTVar3->field0_0x0)._s_0.Y;
      dVar4 = dVar1 * dVar1 + dVar5 * dVar5 + dVar2 * dVar2;
      if (dVar4 <= __real_3e45798ee0000000) {
        local_58._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
        local_58._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
        local_58._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      }
      else {
        dVar4 = __real_3ff0000000000000 / SQRT(dVar4);
        local_58._s_0.X = dVar5 * dVar4;
        local_58._s_0.Y = dVar1 * dVar4;
        local_58._s_0.Z = dVar2 * dVar4;
      }
      UMeshSculptToolBase::UpdateBrushFrameWorld
                ((UMeshSculptToolBase *)this,(TVector<double> *)&local_38[0]._s_0,
                 (TVector<double> *)&local_58._s_0);
      return;
    }
    return;
  }
  if (*(longlong *)&this->field_0x130 != 0) {
    local_38[0]._s_0.Z = __real_3ff0000000000000;
    local_38[0]._s_0.X = 0.0;
    local_38[0]._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)(*(longlong *)&this->field_0x130 + 0xd0),
               (TVector<double> *)&local_58._s_0,(TVector<double> *)&local_38[0]._s_0);
    UMeshSculptToolBase::UpdateBrushFrameWorld
              ((UMeshSculptToolBase *)this,(TVector<double> *)&this->field_0x490,
               (TVector<double> *)&local_58._s_0);
    return;
  }
  local_38[0]._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_38[0]._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_38[0]._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  UMeshSculptToolBase::UpdateBrushFrameWorld
            ((UMeshSculptToolBase *)this,(TVector<double> *)&this->field_0x490,
             (TVector<double> *)&local_38[0]._s_0);
  return;
}

// RegisterBrushes @ 14cd18db0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshVertexSculptTool::RegisterBrushes(UMeshVertexSculptTool *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  UClass *pUVar4;
  UMeshSculptBrushOpProps *pUVar5;
  undefined8 *puVar6;
  FText *pFVar7;
  USculptMaxBrushOpProps *pUVar8;
  longlong *plVar9;
  UObjectBaseUtility *pUVar10;
  undefined8 *puVar11;
  undefined1 auStackY_138 [32];
  undefined8 *local_108;
  FText local_100;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_USmoothBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = this;
  pUVar5 = (UMeshSculptBrushOpProps *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  puVar6 = ::operator_new(8);
  puVar11 = (undefined8 *)0x0;
  local_108 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TBasicMeshSculptBrushOpFactory_VFSmoothBrushOp____6B_;
    local_108 = puVar6;
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"SmoothBrush",L"Smooth");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,3,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,pUVar5);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_USmoothFillBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = this;
  pUVar5 = (UMeshSculptBrushOpProps *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  puVar6 = ::operator_new(8);
  local_108 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TBasicMeshSculptBrushOpFactory_VFSmoothFillBrushOp____6B_;
    local_108 = puVar6;
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"SmoothFill",L"SmoothFill");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,4,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,pUVar5);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UMoveBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = this;
  pUVar5 = (UMeshSculptBrushOpProps *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  puVar6 = ::operator_new(8);
  local_108 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TBasicMeshSculptBrushOpFactory_VFMoveBrushOp____6B_;
    local_108 = puVar6;
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"Move",L"Move");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,0,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,pUVar5);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UStandardSculptBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = this;
  pUVar5 = (UMeshSculptBrushOpProps *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  puVar6 = ::operator_new(8);
  local_108 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TBasicMeshSculptBrushOpFactory_VFSingleNormalSculptBrushOp_Geometry_UE____6B_;
    local_108 = puVar6;
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"Offset",L"SculptN");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,5,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,pUVar5);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UViewAlignedSculptBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = this;
  pUVar5 = (UMeshSculptBrushOpProps *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  puVar6 = ::operator_new(0x40);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = &___7FLambdaMeshSculptBrushOpFactory__6B_;
    puVar6[2] = 0;
    puVar6[7] = 0;
    local_e8 = puVar6[2];
    uVar2 = puVar6[3];
    local_d8 = puVar6[4];
    uStack_d0 = puVar6[5];
    uVar1 = puVar6[6];
    plStack_c0 = (longlong *)puVar6[7];
    puVar6[2] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshVertexSculptTool::RegisterBrushes'::__l2::<lambda_1>,TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>_>
                ::Call;
    puVar6[3] = uStack_e0;
    *(undefined4 *)(puVar6 + 4) = 0x52979d60;
    *(undefined4 *)((longlong)puVar6 + 0x24) = 1;
    puVar6[5] = this;
    *(undefined4 *)(puVar6 + 6) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar6 + 0x34) = local_c8._4_4_;
    *(undefined4 *)(puVar6 + 7) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
    local_c8 = uVar1;
    uStack_e0 = uVar2;
    if (local_e8 != 0) {
      plVar9 = &local_d8;
      if (plStack_c0 != (longlong *)0x0) {
        plVar9 = plStack_c0;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  local_108 = puVar6;
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"SculptView",L"SculptV");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,6,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,pUVar5);
  pUVar8 = NewObject<USculptMaxBrushOpProps>((UObject *)this);
  puVar6 = ::operator_new(0x40);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = &___7FLambdaMeshSculptBrushOpFactory__6B_;
    puVar6[2] = 0;
    puVar6[7] = 0;
    local_e8 = puVar6[2];
    uVar2 = puVar6[3];
    local_d8 = puVar6[4];
    uStack_d0 = puVar6[5];
    uVar1 = puVar6[6];
    plStack_c0 = (longlong *)puVar6[7];
    puVar6[2] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshVertexSculptTool::RegisterBrushes'::__l2::<lambda_2>,TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>_>
                ::Call;
    puVar6[3] = uStack_e0;
    *(undefined4 *)(puVar6 + 4) = 0x52979d80;
    *(undefined4 *)((longlong)puVar6 + 0x24) = 1;
    puVar6[5] = this;
    *(undefined4 *)(puVar6 + 6) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar6 + 0x34) = local_c8._4_4_;
    *(undefined4 *)(puVar6 + 7) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
    local_c8 = uVar1;
    uStack_e0 = uVar2;
    if (local_e8 != 0) {
      plVar9 = &local_d8;
      if (plStack_c0 != (longlong *)0x0) {
        plVar9 = plStack_c0;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  local_108 = puVar6;
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"SculptMax",L"SculptMx");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,7,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,
             (UMeshSculptBrushOpProps *)pUVar8);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UInflateBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = this;
  pUVar5 = (UMeshSculptBrushOpProps *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  puVar6 = ::operator_new(8);
  local_108 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TBasicMeshSculptBrushOpFactory_VFInflateBrushOp____6B_;
    local_108 = puVar6;
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"Inflate",L"Inflate");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,8,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,pUVar5);
  pUVar8 = NewObject<USculptMaxBrushOpProps>((UObject *)this);
  puVar6 = ::operator_new(0x40);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = &___7FLambdaMeshSculptBrushOpFactory__6B_;
    puVar6[2] = 0;
    puVar6[7] = 0;
    local_e8 = puVar6[2];
    uVar2 = puVar6[3];
    local_d8 = puVar6[4];
    uStack_d0 = puVar6[5];
    uVar1 = puVar6[6];
    plStack_c0 = (longlong *)puVar6[7];
    puVar6[2] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshVertexSculptTool::RegisterBrushes'::__l2::<lambda_3>,TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>_>
                ::Call;
    puVar6[3] = uStack_e0;
    *(undefined4 *)(puVar6 + 4) = 0x52979da0;
    *(undefined4 *)((longlong)puVar6 + 0x24) = 1;
    puVar6[5] = this;
    *(undefined4 *)(puVar6 + 6) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar6 + 0x34) = local_c8._4_4_;
    *(undefined4 *)(puVar6 + 7) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
    local_c8 = uVar1;
    uStack_e0 = uVar2;
    if (local_e8 != 0) {
      plVar9 = &local_d8;
      if (plStack_c0 != (longlong *)0x0) {
        plVar9 = plStack_c0;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  local_108 = puVar6;
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"InflateStroke",L"InflateSt");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,9,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,
             (UMeshSculptBrushOpProps *)pUVar8);
  pUVar8 = NewObject<USculptMaxBrushOpProps>((UObject *)this);
  puVar6 = ::operator_new(0x40);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)0x0;
  }
  else {
    *puVar6 = &___7FLambdaMeshSculptBrushOpFactory__6B_;
    puVar6[2] = 0;
    puVar6[7] = 0;
    local_e8 = puVar6[2];
    uVar2 = puVar6[3];
    local_d8 = puVar6[4];
    uStack_d0 = puVar6[5];
    uVar1 = puVar6[6];
    plStack_c0 = (longlong *)puVar6[7];
    puVar6[2] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshVertexSculptTool::RegisterBrushes'::__l2::<lambda_4>,TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>_>
                ::Call;
    puVar6[3] = uStack_e0;
    *(undefined4 *)(puVar6 + 4) = 0x52979dc0;
    *(undefined4 *)((longlong)puVar6 + 0x24) = 1;
    puVar6[5] = this;
    *(undefined4 *)(puVar6 + 6) = (undefined4)local_c8;
    *(undefined4 *)((longlong)puVar6 + 0x34) = local_c8._4_4_;
    *(undefined4 *)(puVar6 + 7) = 0;
    *(undefined4 *)((longlong)puVar6 + 0x3c) = 0;
    local_c8 = uVar1;
    uStack_e0 = uVar2;
    if (local_e8 != 0) {
      plVar9 = &local_d8;
      if (plStack_c0 != (longlong *)0x0) {
        plVar9 = plStack_c0;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  local_108 = puVar6;
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"InflateMax",L"InflateMax");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,10,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,
             (UMeshSculptBrushOpProps *)pUVar8);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UPinchBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = this;
  pUVar5 = (UMeshSculptBrushOpProps *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  puVar6 = ::operator_new(8);
  local_108 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TBasicMeshSculptBrushOpFactory_VFPinchBrushOp____6B_;
    local_108 = puVar6;
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"Pinch",L"Pinch");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,0xc,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,pUVar5);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UFlattenBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = this;
  pUVar5 = (UMeshSculptBrushOpProps *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  puVar6 = ::operator_new(8);
  local_108 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TBasicMeshSculptBrushOpFactory_VFFlattenBrushOp____6B_;
    local_108 = puVar6;
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"Flatten",L"Flatten");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,0xe,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,pUVar5);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UPlaneBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = this;
  pUVar5 = (UMeshSculptBrushOpProps *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  puVar6 = ::operator_new(8);
  local_108 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TBasicMeshSculptBrushOpFactory_VFPlaneBrushOp____6B_;
    local_108 = puVar6;
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"Plane",L"PlaneN");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,0xf,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,pUVar5);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UViewAlignedPlaneBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = this;
  pUVar5 = (UMeshSculptBrushOpProps *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  puVar6 = ::operator_new(8);
  local_108 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TBasicMeshSculptBrushOpFactory_VFPlaneBrushOp____6B_;
    local_108 = puVar6;
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"PlaneViewAligned",L"PlaneV");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,0x10,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,pUVar5)
  ;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UFixedPlaneBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = this;
  pUVar5 = (UMeshSculptBrushOpProps *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  puVar6 = ::operator_new(8);
  local_108 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TBasicMeshSculptBrushOpFactory_VFPlaneBrushOp____6B_;
    local_108 = puVar6;
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"FixedPlane",L"PlaneW");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,0x11,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,pUVar5)
  ;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UScaleKelvinletBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = this;
  pUVar5 = (UMeshSculptBrushOpProps *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  puVar6 = ::operator_new(8);
  local_108 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TBasicMeshSculptBrushOpFactory_VFScaleKelvinletBrushOp____6B_;
    local_108 = puVar6;
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"ScaleKelvin",L"Scale");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,0xb,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,pUVar5);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UPullKelvinletBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = this;
  pUVar5 = (UMeshSculptBrushOpProps *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  puVar6 = ::operator_new(8);
  local_108 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TBasicMeshSculptBrushOpFactory_VFPullKelvinletBrushOp____6B_;
    local_108 = puVar6;
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"PullKelvin",L"Grab");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,1,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,pUVar5);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_USharpPullKelvinletBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = this;
  pUVar5 = (UMeshSculptBrushOpProps *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  puVar6 = ::operator_new(8);
  local_108 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TBasicMeshSculptBrushOpFactory_VFSharpPullKelvinletBrushOp____6B_;
    local_108 = puVar6;
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"PullSharpKelvin",L"GrabSharp");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,2,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,pUVar5);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_UTwistKelvinletBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = this;
  pUVar5 = (UMeshSculptBrushOpProps *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  puVar6 = ::operator_new(8);
  local_108 = puVar11;
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TBasicMeshSculptBrushOpFactory_VFTwistKelvinletBrushOp____6B_;
    local_108 = puVar6;
  }
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"TwistKelvin",L"Twist");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,0xd,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,pUVar5);
  pUVar10 = *(UObjectBaseUtility **)&this->field_0xc8;
  if (pUVar10 != (UObjectBaseUtility *)0x0) {
    pUVar4 = Z_Construct_UClass_USceneComponentBackedTarget_NoRegister();
    plVar9 = UObjectBaseUtility::GetInterfaceAddress(pUVar10,pUVar4);
    if ((plVar9 != (longlong *)0x0) &&
       (pUVar10 = (UObjectBaseUtility *)(**(code **)(*plVar9 + 0x10))(plVar9),
       pUVar10 != (UObjectBaseUtility *)0x0)) {
      pUVar4 = Z_Construct_UClass_UMeshSculptLayersManager_NoRegister();
      plVar9 = UObjectBaseUtility::GetInterfaceAddress(pUVar10,pUVar4);
      if ((plVar9 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar9 + 0x10))(plVar9), cVar3 != '\0')) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar4 = Z_Construct_UClass_UEraseSculptLayerBrushOpProps_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_b8,pUVar4);
        local_b8._8_8_ = this;
        pUVar5 = (UMeshSculptBrushOpProps *)
                 StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
        if (local_b8._64_8_ != 0) {
          plVar9 = (longlong *)(local_b8 + 0x50);
          if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
            plVar9 = (longlong *)local_b8._104_8_;
          }
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
        puVar6 = ::operator_new(8);
        local_108 = puVar11;
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &___7__TBasicMeshSculptBrushOpFactory_VFEraseSculptLayerBrushOp____6B_;
          local_108 = puVar6;
        }
        pFVar7 = FText::AsLocalizable_Advanced_LocText
                           (&local_100,L"UMeshVertexSculptTool",L"EraseSculptLayer",
                            L"EraseSculptLayer");
        UMeshSculptToolBase::RegisterBrushType
                  ((UMeshSculptToolBase *)this,0x12,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,
                   pUVar5);
      }
    }
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = Z_Construct_UClass_USecondarySmoothBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar4);
  local_b8._8_8_ = this;
  pUVar5 = (UMeshSculptBrushOpProps *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_b8._64_8_ != 0) {
    plVar9 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar9 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar9 + 0x10))(plVar9);
  }
  puVar6 = ::operator_new(8);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &___7__TBasicMeshSculptBrushOpFactory_VFSmoothBrushOp____6B_;
    puVar11 = puVar6;
  }
  local_108 = puVar11;
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_100,L"UMeshVertexSculptTool",L"Smooth",L"Smooth");
  UMeshSculptToolBase::RegisterSecondaryBrushType
            ((UMeshSculptToolBase *)this,0,pFVar7,(FMeshSculptBrushOpFactory *)&local_108,pUVar5);
  return;
}

// Render @ 14cd1bf80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UMeshVertexSculptTool::Render(UMeshVertexSculptTool *this,IToolsContextRenderAPI *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector<double> *pTVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_228 [32];
  undefined1 local_208;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1e0;
  TVector<double> local_1c8;
  FToolDataVisualizer local_1a8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_228;
  UMeshSculptToolBase::Render((UMeshSculptToolBase *)this,param_1);
  if (this->bApplySymmetry != false) {
    FToolDataVisualizer::FToolDataVisualizer(&local_1a8);
    FToolDataVisualizer::BeginFrame(&local_1a8,param_1);
    pTVar5 = UE::Geometry::FMeshPlanarSymmetry::GetMirroredPosition
                       ((this->Symmetry).Ptr,(TVector<double> *)&local_1e0._s_0,
                        (TVector<double> *)&this->field_0x668);
    local_1f8._s_0.X = *(double *)&this->field_0x228 * (pTVar5->field0_0x0)._s_0.X;
    local_1f8._s_0.Y = *(double *)&this->field_0x230 * (pTVar5->field0_0x0)._s_0.Y;
    local_1f8._s_0.Z = *(double *)&this->field_0x238 * (pTVar5->field0_0x0)._s_0.Z;
    pTVar5 = UE::Geometry::operator*<double>
                       (&local_1c8,(TQuaternion<double> *)&this->field_0x1f0,
                        (TVector<double> *)&local_1f8._s_0);
    dVar16 = local_1a8.TotalTransform.Rotation.XY.m128d_f64[1];
    local_1f8._s_0.X = ___xmm_3f8000003dcccccd3dcccccd3f800000;
    local_1f8._s_0.Y = _UNK_15174b778;
    local_1a8.TotalTransform.Scale3D.ZW.m128d_f64[0] =
         (*(double *)&this->field_0x220 + (pTVar5->field0_0x0)._s_0.Z) *
         local_1a8.TotalTransform.Scale3D.ZW.m128d_f64[0];
    local_1a8.TotalTransform.Scale3D.ZW.m128d_f64[1] =
         local_1a8.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
    local_1a8.TotalTransform.Scale3D.XY.m128d_f64[0] =
         local_1a8.TotalTransform.Scale3D.XY.m128d_f64[0] *
         ((pTVar5->field0_0x0)._s_0.X + *(double *)&this->field_0x210);
    local_1a8.TotalTransform.Scale3D.XY.m128d_f64[1] =
         local_1a8.TotalTransform.Scale3D.XY.m128d_f64[1] *
         (*(double *)&this->field_0x218 + (pTVar5->field0_0x0)._s_0.Y);
    uVar17 = (undefined4)((ulonglong)local_1a8.TotalTransform.Scale3D.XY.m128d_f64[1] >> 0x20);
    dVar3 = local_1a8.TotalTransform.Rotation.ZW.m128d_f64[0];
    auVar19 = blendpd((undefined1  [16])local_1a8.TotalTransform.Rotation.XY.m128d_f64,
                      (undefined1  [16])local_1a8.TotalTransform.Rotation.ZW.m128d_f64,2);
    auVar20._8_4_ = SUB84(local_1a8.TotalTransform.Scale3D.XY.m128d_f64[1],0);
    auVar20._0_8_ = local_1a8.TotalTransform.Scale3D.XY.m128d_f64[0];
    auVar20._12_4_ = uVar17;
    dVar4 = local_1a8.TotalTransform.Rotation.ZW.m128d_f64[1];
    auVar6._8_4_ = local_1a8.TotalTransform.Rotation.ZW.m128d_f64[0]._0_4_;
    auVar6._0_8_ = dVar16;
    auVar6._12_4_ = local_1a8.TotalTransform.Rotation.ZW.m128d_f64[0]._4_4_;
    auVar9._8_4_ = SUB84(local_1a8.TotalTransform.Scale3D.XY.m128d_f64[1],0);
    auVar9._0_8_ = local_1a8.TotalTransform.Scale3D.XY.m128d_f64[0];
    auVar9._12_4_ = uVar17;
    auVar21._0_8_ =
         auVar20._8_8_ * local_1a8.TotalTransform.Rotation.XY.m128d_f64[0] -
         dVar16 * local_1a8.TotalTransform.Scale3D.XY.m128d_f64[0];
    auVar21._8_8_ =
         local_1a8.TotalTransform.Scale3D.ZW.m128d_f64[0] * dVar16 -
         auVar6._8_8_ * local_1a8.TotalTransform.Scale3D.XY.m128d_f64[1];
    auVar10._8_4_ = SUB84(local_1a8.TotalTransform.Scale3D.ZW.m128d_f64[1],0);
    auVar10._0_8_ = local_1a8.TotalTransform.Scale3D.ZW.m128d_f64[0];
    auVar10._12_4_ = (int)((ulonglong)local_1a8.TotalTransform.Scale3D.ZW.m128d_f64[1] >> 0x20);
    auVar10 = blendpd(auVar9,auVar10,2);
    auVar11._0_8_ =
         auVar10._0_8_ * dVar3 - auVar19._0_8_ * local_1a8.TotalTransform.Scale3D.ZW.m128d_f64[0];
    auVar11._8_8_ =
         auVar10._8_8_ * dVar4 - auVar19._8_8_ * local_1a8.TotalTransform.Scale3D.ZW.m128d_f64[1];
    dVar1 = auVar21._8_8_ + auVar21._8_8_;
    dVar2 = auVar11._0_8_ + auVar11._0_8_;
    uVar17 = SUB84(dVar2,0);
    uVar18 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar10 = blendpd(auVar21,auVar11,2);
    auVar22._0_8_ = auVar10._0_8_ + auVar10._0_8_;
    auVar22._8_8_ = auVar10._8_8_ + auVar10._8_8_;
    auVar14._8_4_ = uVar17;
    auVar14._0_8_ = dVar1;
    auVar14._12_4_ = uVar18;
    auVar7._8_4_ = uVar17;
    auVar7._0_8_ = dVar1;
    auVar7._12_4_ = uVar18;
    auVar12._8_4_ = uVar17;
    auVar12._0_8_ = dVar1;
    auVar12._12_4_ = uVar18;
    auVar10 = blendpd(auVar12,auVar22,2);
    auVar15._0_8_ =
         auVar14._8_8_ * local_1a8.TotalTransform.Rotation.XY.m128d_f64[0] - dVar1 * dVar16;
    auVar15._8_8_ = auVar22._0_8_ * dVar16 - auVar7._8_8_ * dVar3;
    auVar8._8_4_ = SUB84(auVar22._8_8_,0);
    auVar8._0_8_ = auVar22._0_8_;
    auVar8._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
    auVar13._0_8_ = auVar10._0_8_ * dVar3 - auVar22._0_8_ * auVar19._0_8_;
    auVar13._8_8_ = auVar10._8_8_ * dVar4 - auVar8._8_8_ * auVar19._8_8_;
    local_208 = 0;
    auVar19._8_4_ = SUB84(auVar15._8_8_,0);
    auVar19._0_8_ = auVar15._0_8_;
    auVar19._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
    auVar10 = blendpd(auVar15,auVar13,2);
    local_1e0._s_0.Z =
         auVar22._0_8_ * dVar4 + local_1a8.TotalTransform.Scale3D.ZW.m128d_f64[0] + auVar10._0_8_ +
         local_1a8.TotalTransform.Translation.ZW.m128d_f64[0];
    local_1a8.TotalTransform.Translation.XY.m128d_f64[1] =
         dVar2 * dVar4 + local_1a8.TotalTransform.Scale3D.XY.m128d_f64[1] + auVar13._0_8_ +
         local_1a8.TotalTransform.Translation.XY.m128d_f64[1];
    local_1e0._8_4_ = SUB84(local_1a8.TotalTransform.Translation.XY.m128d_f64[1],0);
    local_1e0._0_8_ =
         dVar1 * dVar4 + local_1a8.TotalTransform.Scale3D.XY.m128d_f64[0] + auVar19._8_8_ +
         local_1a8.TotalTransform.Translation.XY.m128d_f64[0];
    local_1e0._12_4_ =
         (int)((ulonglong)local_1a8.TotalTransform.Translation.XY.m128d_f64[1] >> 0x20);
    (**(code **)(local_1a8._padding_ + 0x18))(&local_1a8,&local_1e0,&local_1f8,__real_40a00000);
    FToolDataVisualizer::EndFrame(&local_1a8);
    FToolDataVisualizer::~FToolDataVisualizer(&local_1a8);
  }
  return;
}

// RequireConnectivityToHitPointInStamp @ 14cd1c310

bool __thiscall
UMeshVertexSculptTool::RequireConnectivityToHitPointInStamp(UMeshVertexSculptTool *this)

{
  return false;
}

// SampleBrushAlpha @ 14cd1cf40

double __thiscall
UMeshVertexSculptTool::SampleBrushAlpha
          (UMeshVertexSculptTool *this,FSculptBrushStamp *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector<double> *pTVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  TVector2<double>_u_0 local_88;
  TVector<double>_u_0 local_78 [4];
  
  if (this->bHaveBrushAlpha != false) {
    dVar1 = (param_2->field0_0x0)._s_0.Z - (param_1->LocalFrame).Origin.field0_0x0._s_0.Z;
    dVar2 = (param_2->field0_0x0)._s_0.X - (param_1->LocalFrame).Origin.field0_0x0._s_0.X;
    dVar3 = (param_2->field0_0x0)._s_0.Y - (param_1->LocalFrame).Origin.field0_0x0._s_0.Y;
    pTVar5 = UE::Geometry::TFrame3<double>::GetAxis
                       (&param_1->LocalFrame,(TVector<double> *)&local_78[0]._s_0,0);
    dVar6 = (pTVar5->field0_0x0)._s_0.Y;
    dVar8 = (pTVar5->field0_0x0)._s_0.X;
    dVar9 = (pTVar5->field0_0x0)._s_0.Z;
    pTVar5 = UE::Geometry::TFrame3<double>::GetAxis
                       (&param_1->LocalFrame,(TVector<double> *)&local_78[0]._s_0,1);
    dVar4 = __real_3ff0000000000000;
    dVar7 = __real_3ff0000000000000 / param_1->Radius;
    dVar8 = __real_3fe0000000000000 -
            dVar7 * (dVar3 * dVar6 + dVar2 * dVar8 + dVar1 * dVar9) * __real_3fe0000000000000;
    dVar6 = (dVar3 * (pTVar5->field0_0x0)._s_0.Y + dVar2 * (pTVar5->field0_0x0)._s_0.X +
            dVar1 * (pTVar5->field0_0x0)._s_0.Z) * dVar7 * __real_3fe0000000000000;
    if ((((dVar8 < 0.0) || (__real_3ff0000000000000 < dVar8)) || (__real_3fe0000000000000 < dVar6))
       || (dVar6 < __real_bfe0000000000000)) {
      dVar6 = 0.0;
    }
    else {
      if (__real_3ff0000000000000 <= dVar8) {
        dVar8 = __real_3ff0000000000000;
      }
      dVar9 = __real_3fe0000000000000 - dVar6;
      if (__real_3ff0000000000000 <= __real_3fe0000000000000 - dVar6) {
        dVar9 = __real_3ff0000000000000;
      }
      local_88._s_0.X = dVar8 * (double)(this->BrushAlphaValues).Dimensions.Width;
      local_88._s_0.Y = (double)(this->BrushAlphaValues).Dimensions.Height * dVar9;
      UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>::BilinearSample<float,0>
                (&this->BrushAlphaValues,(TVector4<float> *)&local_78[0]._s_0,
                 (TVector2<double> *)&local_88._s_0,&InvalidValue);
      dVar8 = (double)(float)local_78[0]._0_4_;
      dVar6 = 0.0;
      if ((0.0 <= dVar8) && (dVar6 = dVar8, dVar4 <= dVar8)) {
        dVar6 = dVar4;
      }
    }
    return dVar6;
  }
  return __real_3ff0000000000000;
}

// SetActiveBrushType @ 14cd1d8c0

void __thiscall UMeshVertexSculptTool::SetActiveBrushType(UMeshVertexSculptTool *this,int param_1)

{
  UVertexBrushSculptProperties *pUVar1;
  
  pUVar1 = (this->SculptProperties).field0_0x0.DebugPtr;
  if (pUVar1->PrimaryBrushID != param_1) {
    pUVar1->PrimaryBrushID = param_1;
    (**(code **)(*(longlong *)this + 0x6e0))
              (this,((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushID);
    FWatchablePropertySet::SilentUpdateWatched
              ((FWatchablePropertySet *)&((this->SculptProperties).field0_0x0.DebugPtr)->_padding_);
    return;
  }
  return;
}

// SetActiveFalloffType @ 14cd1d920

void __thiscall UMeshVertexSculptTool::SetActiveFalloffType(UMeshVertexSculptTool *this,int param_1)

{
  UVertexBrushSculptProperties *pUVar1;
  
  pUVar1 = (this->SculptProperties).field0_0x0.DebugPtr;
  if (pUVar1->PrimaryFalloffType != (EMeshSculptFalloffType)param_1) {
    pUVar1->PrimaryFalloffType = (EMeshSculptFalloffType)param_1;
    (**(code **)(*(longlong *)this + 0x480))
              (this,((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryFalloffType);
    FWatchablePropertySet::SilentUpdateWatched
              ((FWatchablePropertySet *)&((this->SculptProperties).field0_0x0.DebugPtr)->_padding_);
    return;
  }
  return;
}

// SetDefaultPrimaryBrushID @ 14cd1e2d0

void __thiscall
UMeshVertexSculptTool::SetDefaultPrimaryBrushID(UMeshVertexSculptTool *this,int param_1)

{
  this->DefaultPrimaryBrushID = param_1;
  return;
}

// SetRegionFilterType @ 14cd1f4e0

void __thiscall UMeshVertexSculptTool::SetRegionFilterType(UMeshVertexSculptTool *this,int param_1)

{
  ((this->SculptProperties).field0_0x0.DebugPtr)->BrushFilter =
       (EMeshVertexSculptBrushFilterType)param_1;
  return;
}

// Setup @ 14cd280c0

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

void __thiscall UMeshVertexSculptTool::Setup(UMeshVertexSculptTool *this)

{
  int *piVar1;
  code *pcVar2;
  UWorld *this_00;
  longlong lVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  FText *pFVar10;
  UClass *pUVar11;
  AInternalToolFrameworkActor *pAVar12;
  FString *pFVar13;
  UDynamicMeshComponent *pUVar14;
  AInternalToolFrameworkActor *pAVar15;
  FDelegateHandle FVar16;
  FDynamicMesh3 *this_01;
  UVertexBrushSculptProperties *pUVar17;
  undefined8 uVar18;
  UVertexBrushAlphaProperties *pUVar19;
  UMeshSymmetryProperties *pUVar20;
  longlong *plVar21;
  UObjectBaseUtility *pUVar22;
  UMeshSculptLayerProperties *this_02;
  longlong lVar23;
  void *this_03;
  AInternalToolFrameworkActor *pAVar24;
  undefined ***pppuVar25;
  undefined1 *puVar26;
  uint uVar27;
  wchar_t *pwVar28;
  wchar_t *pwVar29;
  uint uVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  double dVar45;
  undefined4 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  undefined1 auStackY_708 [32];
  FComponentMaterialSet local_6d8;
  TVector<double>_u_0 local_6c8;
  double dStack_6b0;
  double local_6a8;
  double dStack_6a0;
  undefined4 local_698;
  undefined4 uStack_694;
  UMeshVertexSculptTool *local_688;
  undefined4 uStack_680;
  uint uStack_67c;
  <lambda_5> local_678;
  UMeshVertexSculptTool *local_670;
  code *local_668;
  undefined **local_658;
  UMeshVertexSculptTool *local_650;
  undefined ***local_640;
  <lambda_2> local_638;
  <lambda_3> local_628;
  <lambda_4> local_618;
  undefined1 local_608 [16];
  undefined1 local_5f8 [16];
  undefined1 local_5e8 [16];
  undefined1 local_5d8 [16];
  undefined1 local_5c8 [16];
  undefined1 local_5b8 [16];
  <lambda_6> local_5a8;
  TVector<double>_u_0 local_590;
  undefined1 local_578 [8];
  FText local_570;
  code *local_558;
  longlong lStack_550;
  void *local_548 [2];
  void *local_538 [2];
  TVector<double>_u_0 local_528;
  void *local_508 [2];
  <lambda_1> local_4f8;
  code *local_4a8 [2];
  undefined **local_498;
  UMeshVertexSculptTool *local_490;
  undefined8 local_480;
  code *local_478 [2];
  undefined **local_468;
  UMeshVertexSculptTool *local_460;
  undefined8 local_450;
  code *local_448 [2];
  undefined **local_438;
  UMeshVertexSculptTool *local_430;
  undefined8 local_420;
  code *local_418 [2];
  undefined **local_408;
  UMeshVertexSculptTool *local_400;
  undefined8 local_3f0;
  code *local_3c8 [2];
  code *local_3b8 [3];
  undefined8 local_3a0;
  FString local_398;
  FString local_388;
  TUniqueFunction<void___cdecl(void)> local_378;
  TUniqueFunction<void___cdecl(void)> local_348;
  TUniqueFunction<void___cdecl(void)> local_318;
  TUniqueFunction<void___cdecl(void)> local_2e8;
  TUniqueFunction<void___cdecl(void)> local_2b8;
  TUniqueFunction<void___cdecl(void)> local_288 [2];
  undefined1 local_228 [128];
  undefined1 local_1a8 [128];
  longlong local_128;
  undefined8 uStack_120;
  longlong local_118 [3];
  longlong *plStack_100;
  undefined1 local_f8 [112];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_708;
  UMeshSculptToolBase::Setup((UMeshSculptToolBase *)this);
  pcVar2 = *(code **)(*(longlong *)this + 0x380);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_570,L"UMeshVertexSculptTool",L"ToolName",L"Sculpt");
  (*pcVar2)(this,pFVar10);
  if (local_570.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_570.TextData.Reference + 0x10))();
  }
  pwVar29 = L"";
  if ((*(longlong *)&this->field_0x138 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetWorld",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
                         ,0x7d,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_f8);
  this_00 = *(UWorld **)&this->field_0x138;
  pUVar11 = Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
  pAVar12 = (AInternalToolFrameworkActor *)
            UWorld::SpawnActor(this_00,pUVar11,&UE::Math::TVector<double>::ZeroVector,
                               &UE::Math::TRotator<double>::ZeroRotator,
                               (FActorSpawnParameters *)local_f8);
  pAVar24 = (AInternalToolFrameworkActor *)0x0;
  pAVar15 = pAVar24;
  if (pAVar12 != (AInternalToolFrameworkActor *)0x0) {
    pUVar11 = Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
    iVar9 = (int)pUVar11->_padding_;
    if ((*(int *)(pAVar12->_padding_ + 0x38) < iVar9) ||
       (pAVar15 = pAVar12,
       (longlong *)*(undefined1 **)(*(longlong *)(pAVar12->_padding_ + 0x30) + (longlong)iVar9 * 8)
       != &pUVar11->_padding_)) {
      pFVar13 = GetTypeName<AInternalToolFrameworkActor>(&local_398);
      if ((pFVar13->Data).ArrayNum == 0) {
        pwVar28 = L"";
      }
      else {
        pwVar28 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      }
      pFVar13 = GetFullNameForCastLogError<AActor>(&local_388,(AActor *)pAVar12);
      if ((pFVar13->Data).ArrayNum != 0) {
        pwVar29 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar29,pwVar28);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar15 != (AInternalToolFrameworkActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar15);
  }
  (this->PreviewMeshActor).field0_0x0.DebugPtr = pAVar15;
  pUVar14 = NewObject<UDynamicMeshComponent>((UObject *)pAVar15);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UDynamicMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = pUVar14;
  UMeshSculptToolBase::InitializeSculptMeshComponent
            ((UMeshSculptToolBase *)this,(UBaseDynamicMeshComponent *)pUVar14,
             (AActor *)(this->PreviewMeshActor).field0_0x0.DebugPtr);
  pUVar22 = *(UObjectBaseUtility **)&this->field_0xc8;
  local_6d8.Materials.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6d8.Materials.ArrayNum = 0;
  local_6d8.Materials.ArrayMax = 0;
  pAVar15 = pAVar24;
  if (pUVar22 != (UObjectBaseUtility *)0x0) {
    pUVar11 = Z_Construct_UClass_UMaterialProvider_NoRegister();
    pAVar15 = UObjectBaseUtility::GetInterfaceAddress(pUVar22,pUVar11);
  }
  (**(code **)(pAVar15->_padding_ + 0x20))(pAVar15,&local_6d8,0);
  pAVar15 = pAVar24;
  pAVar12 = pAVar24;
  if (0 < local_6d8.Materials.ArrayNum) {
    do {
      pUVar14 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
      uVar27 = (uint)pAVar15;
      pcVar2 = *(code **)(pUVar14->_padding_ + 0x6b8);
      uVar30 = 0;
      if ((int)uVar27 < local_6d8.Materials.ArrayNum) {
        uVar30 = ~uVar27 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (*pcVar2)(pUVar14,pAVar15,
                *(undefined8 *)(local_6d8.Materials.AllocatorInstance.Data + (longlong)pAVar12));
      pAVar15 = (AInternalToolFrameworkActor *)(ulonglong)(uVar27 + 1);
      pAVar12 = (AInternalToolFrameworkActor *)&pAVar12->_padding_;
    } while ((int)(uVar27 + 1) < local_6d8.Materials.ArrayNum);
  }
  UDynamicMeshComponent::SetInvalidateProxyOnChangeEnabled
            ((this->DynamicMeshComponent).field0_0x0.DebugPtr,false);
  local_688 = (UMeshVertexSculptTool *)OnDynamicMeshComponentChanged;
  uStack_680 = 0;
  lStack_550 = (ulonglong)uStack_67c << 0x20;
  local_558 = OnDynamicMeshComponentChanged;
  FVar16 = TMulticastDelegateRegistration<void___cdecl(UDynamicMeshComponent_*,FMeshRegionChangeBase_const_*,bool),FDefaultDelegateUserPolicy>
           ::AddUObject<UMeshVertexSculptTool>
                     ((TMulticastDelegateRegistration<void___cdecl(UDynamicMeshComponent_*,FMeshRegionChangeBase_const_*,bool),FDefaultDelegateUserPolicy>
                       *)&((this->DynamicMeshComponent).field0_0x0.DebugPtr)->OnMeshRegionChanged,
                      (UMeshVertexSculptTool *)local_578,(pmf_ce9b91d2 *)this);
                    /* WARNING: Load size is inaccurate */
  lVar3 = *(longlong *)this;
  (this->OnDynamicMeshComponentChangedHandle).ID = *FVar16.ID;
  this_01 = (FDynamicMesh3 *)(**(code **)(lVar3 + 0x440))(this);
  UE::Geometry::FDynamicMesh3::GetBounds(this_01,(TAxisAlignedBox3<double> *)&local_6c8._s_0,true);
  dVar36 = local_6a8 - local_6c8._s_0.Y;
  dVar31 = dStack_6a0 - local_6c8._s_0.Z;
  dVar34 = dStack_6b0 - local_6c8._s_0.X;
  if (dVar36 <= 0.0) {
    dVar36 = 0.0;
  }
  if (dVar31 <= 0.0) {
    dVar31 = 0.0;
  }
  if (dVar34 <= 0.0) {
    dVar34 = 0.0;
  }
  if (dVar36 <= dVar31) {
    dVar36 = dVar31;
  }
  if (dVar36 <= dVar34) {
    dVar36 = dVar34;
  }
  this->InitialBoundsMaxDim = dVar36;
  uVar30 = (**(code **)(*(longlong *)MeshVertexSculptToolLocals::OctreeRootCellSizeOverride._8_8_ +
                       0xd0))();
  fVar51 = (float)(uVar30 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  iVar9 = (**(code **)(*(longlong *)MeshVertexSculptToolLocals::OctreeTreeDepthOverride._8_8_ + 200)
          )();
  local_4f8.TreeDepthOverride = -iVar9;
  if (-iVar9 < 0) {
    local_4f8.TreeDepthOverride = iVar9;
  }
  local_378._0_8_ = 0;
  local_4f8.Bounds.Min.field0_0x0._s_0.X = local_6c8._s_0.X;
  local_4f8.Bounds.Min.field0_0x0._s_0.Y = local_6c8._s_0.Y;
  local_378._40_8_ = 0;
  local_4f8.Bounds.Min.field0_0x0._s_0.Z = local_6c8._s_0.Z;
  local_4f8.Bounds.Max.field0_0x0._s_0.X = dStack_6b0;
  local_4f8.Bounds.Max.field0_0x0._s_0.Y = local_6a8;
  local_4f8.Bounds.Max.field0_0x0._s_0.Z = dStack_6a0;
  local_4f8.SculptMesh = this_01;
  local_4f8.RootCellSizeOverride = fVar51;
  local_4f8.__this = this;
  Async<_UMeshVertexSculptTool::Setup_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_5b8,VertexSculptToolAsyncExecTarget,&local_4f8,&local_378);
  local_348._0_8_ = 0;
  local_348._40_8_ = 0;
  local_638.SculptMesh = this_01;
  local_638.__this = this;
  Async<_UMeshVertexSculptTool::Setup_::__l2::<lambda_2>_>
            ((TFuture<void> *)local_5c8,VertexSculptToolAsyncExecTarget,&local_638,&local_348);
  local_318._0_8_ = 0;
  local_318._40_8_ = 0;
  local_628.SculptMesh = this_01;
  local_628.__this = this;
  Async<_UMeshVertexSculptTool::Setup_::__l2::<lambda_3>_>
            ((TFuture<void> *)local_5d8,VertexSculptToolAsyncExecTarget,&local_628,&local_318);
  local_2e8._0_8_ = 0;
  local_2e8._40_8_ = 0;
  local_618.SculptMesh = this_01;
  local_618.__this = this;
  Async<_UMeshVertexSculptTool::Setup_::__l2::<lambda_4>_>
            ((TFuture<void> *)local_5e8,VertexSculptToolAsyncExecTarget,&local_618,&local_2e8);
  local_2b8._0_8_ = 0;
  local_2b8._40_8_ = 0;
  local_678.__this = this;
  Async<_UMeshVertexSculptTool::Setup_::__l2::<lambda_5>_>
            ((TFuture<void> *)local_5f8,VertexSculptToolAsyncExecTarget,&local_678,&local_2b8);
  local_5a8.MaterialSet = &local_6d8;
  local_288[0]._0_8_ = 0;
  local_288[0]._40_8_ = 0;
  local_5a8.SculptMesh = this_01;
  local_5a8.__this = this;
  Async<_UMeshVertexSculptTool::Setup_::__l2::<lambda_6>_>
            ((TFuture<void> *)local_608,VertexSculptToolAsyncExecTarget,&local_5a8,local_288);
  if (local_5b8._0_8_ != 0) {
    do {
      cVar8 = (**(code **)(**(longlong **)(local_5b8._0_8_ + 0x60) + 0x20))
                        (*(longlong **)(local_5b8._0_8_ + 0x60),0xffffffff,0);
    } while (cVar8 == '\0');
  }
  if (local_5c8._0_8_ != 0) {
    do {
      cVar8 = (**(code **)(**(longlong **)(local_5c8._0_8_ + 0x60) + 0x20))
                        (*(longlong **)(local_5c8._0_8_ + 0x60),0xffffffff,0);
    } while (cVar8 == '\0');
  }
  if (local_5e8._0_8_ != 0) {
    do {
      cVar8 = (**(code **)(**(longlong **)(local_5e8._0_8_ + 0x60) + 0x20))
                        (*(longlong **)(local_5e8._0_8_ + 0x60),0xffffffff,0);
    } while (cVar8 == '\0');
  }
  if (local_5f8._0_8_ != 0) {
    do {
      cVar8 = (**(code **)(**(longlong **)(local_5f8._0_8_ + 0x60) + 0x20))
                        (*(longlong **)(local_5f8._0_8_ + 0x60),0xffffffff,0);
    } while (cVar8 == '\0');
  }
  if (local_608._0_8_ != 0) {
    do {
      cVar8 = (**(code **)(**(longlong **)(local_608._0_8_ + 0x60) + 0x20))
                        (*(longlong **)(local_608._0_8_ + 0x60),0xffffffff,0);
    } while (cVar8 == '\0');
  }
  if (local_5d8._0_8_ != 0) {
    do {
      cVar8 = (**(code **)(**(longlong **)(local_5d8._0_8_ + 0x60) + 0x20))
                        (*(longlong **)(local_5d8._0_8_ + 0x60),0xffffffff,0);
    } while (cVar8 == '\0');
  }
  UMeshSculptToolBase::InitializeBrushSizeRange
            ((UMeshSculptToolBase *)this,(TAxisAlignedBox3<double> *)&local_6c8._s_0);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar11 = UVertexBrushSculptProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_228,pUVar11);
  local_228._8_8_ = this;
  pUVar17 = (UVertexBrushSculptProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_228);
  if (local_228._64_8_ != 0) {
    plVar21 = (longlong *)(local_228 + 0x50);
    if ((longlong *)local_228._104_8_ != (longlong *)0x0) {
      plVar21 = (longlong *)local_228._104_8_;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 != (UVertexBrushSculptProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  (this->SculptProperties).field0_0x0.DebugPtr = pUVar17;
  local_670 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&(pUVar17->Tool).WeakPtr,(FObjectPtr)&local_670);
  this->ActiveVertexChange = (FMeshVertexChangeBuilder *)0x0;
  (**(code **)(*(longlong *)this + 0x630))(this);
  (**(code **)(*(longlong *)this + 0x318))(this,*(undefined8 *)&this->field_0x128);
  *(undefined1 *)(*(longlong *)&this->field_0x128 + 0xec) = 0;
  *(undefined1 *)(*(longlong *)&this->field_0x128 + 0xd0) = 0;
  *(undefined1 *)(*(longlong *)&this->field_0x128 + 0xc0) = 1;
  pUVar17 = (this->SculptProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar17->_padding_ + 0x2b8);
  uVar18 = (**(code **)(*(longlong *)this + 0x6d8))(this,local_548);
  (*pcVar2)(pUVar17,this,uVar18);
  if (local_548[0] != (void *)0x0) {
    FMemory::Free(local_548[0]);
  }
  (**(code **)(*(longlong *)this + 0x318))(this,(this->SculptProperties).field0_0x0.DebugPtr);
  (**(code **)(*(longlong *)this + 0x490))(this);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar11 = UVertexBrushAlphaProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1a8,pUVar11);
  local_1a8._8_8_ = this;
  pUVar19 = (UVertexBrushAlphaProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1a8);
  if (local_1a8._64_8_ != 0) {
    plVar21 = (longlong *)(local_1a8 + 0x50);
    if ((longlong *)local_1a8._104_8_ != (longlong *)0x0) {
      plVar21 = (longlong *)local_1a8._104_8_;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 != (UVertexBrushAlphaProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  (this->AlphaProperties).field0_0x0.DebugPtr = pUVar19;
  pcVar2 = *(code **)(pUVar19->_padding_ + 0x2b8);
  uVar18 = (**(code **)(*(longlong *)this + 0x6d8))(this,local_508);
  (*pcVar2)(pUVar19,this,uVar18);
  if (local_508[0] != (void *)0x0) {
    FMemory::Free(local_508[0]);
  }
  pUVar19 = (this->AlphaProperties).field0_0x0.DebugPtr;
  local_688 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&(pUVar19->Tool).WeakPtr,(FObjectPtr)&local_688);
  (**(code **)(*(longlong *)this + 0x318))(this,(this->AlphaProperties).field0_0x0.DebugPtr);
  pUVar20 = NewObject<UMeshSymmetryProperties>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar20 != (UMeshSymmetryProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  (this->SymmetryProperties).field0_0x0.DebugPtr = pUVar20;
  pcVar2 = *(code **)(pUVar20->_padding_ + 0x2b8);
  uVar18 = (**(code **)(*(longlong *)this + 0x6d8))(this,local_538);
  (*pcVar2)(pUVar20,this,uVar18);
  if (local_538[0] != (void *)0x0) {
    FMemory::Free(local_538[0]);
  }
  ((this->SymmetryProperties).field0_0x0.DebugPtr)->bSymmetryCanBeEnabled = false;
  (**(code **)(*(longlong *)this + 0x318))(this);
  pUVar22 = *(UObjectBaseUtility **)&this->field_0xc8;
  if (pUVar22 != (UObjectBaseUtility *)0x0) {
    pUVar11 = Z_Construct_UClass_USceneComponentBackedTarget_NoRegister();
    plVar21 = UObjectBaseUtility::GetInterfaceAddress(pUVar22,pUVar11);
    if ((plVar21 != (longlong *)0x0) &&
       (pUVar22 = (UObjectBaseUtility *)(**(code **)(*plVar21 + 0x10))(plVar21),
       pUVar22 != (UObjectBaseUtility *)0x0)) {
      pUVar11 = Z_Construct_UClass_UMeshSculptLayersManager_NoRegister();
      plVar21 = UObjectBaseUtility::GetInterfaceAddress(pUVar22,pUVar11);
      if ((plVar21 != (longlong *)0x0) &&
         (cVar8 = (**(code **)(*plVar21 + 0x10))(plVar21), cVar8 != '\0')) {
        this_02 = NewObject<UMeshSculptLayerProperties>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_02 != (UMeshSculptLayerProperties *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_02);
        }
        (this->SculptLayerProperties).field0_0x0.DebugPtr = this_02;
        iVar9 = (**(code **)(*plVar21 + 0x18))(plVar21);
        UMeshSculptLayerProperties::Init
                  (this_02,(IModelingToolExternalDynamicMeshUpdateAPI *)&this->field_0xc88,iVar9);
        (**(code **)(*(longlong *)this + 800))(this);
      }
    }
  }
  local_128 = *(longlong *)&this->BaseMeshQueryFunc;
  uVar18 = *(undefined8 *)&(this->BaseMeshQueryFunc).field_0x8;
  local_118[0] = *(longlong *)&(this->BaseMeshQueryFunc).field_0x10;
  local_118[1] = *(longlong *)&(this->BaseMeshQueryFunc).field_0x18;
  uVar6 = *(undefined8 *)&(this->BaseMeshQueryFunc).field_0x20;
  plStack_100 = *(longlong **)&(this->BaseMeshQueryFunc).field_0x28;
  *(code **)&this->BaseMeshQueryFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshVertexSculptTool::Setup'::__l2::<lambda_7>,bool,int,UE::Math::TVector<double>_const_&,double,UE::Math::TVector<double>_&,UE::Math::TVector<double>_&>
       ::Call;
  *(undefined8 *)&(this->BaseMeshQueryFunc).field_0x8 = uStack_120;
  *(undefined ***)&(this->BaseMeshQueryFunc).field_0x10 =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UMeshVertexSculptTool::Setup'::`2'::<lambda_7>,0,0>::_vftable_;
  *(UMeshVertexSculptTool **)&(this->BaseMeshQueryFunc).field_0x18 = this;
  *(longlong *)&(this->BaseMeshQueryFunc).field_0x20 = local_118[2];
  *(undefined8 *)&(this->BaseMeshQueryFunc).field_0x28 = 0;
  uStack_120 = uVar18;
  local_118[2] = uVar6;
  if (local_128 != 0) {
    plVar21 = local_118;
    if (plStack_100 != (longlong *)0x0) {
      plVar21 = plStack_100;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  (**(code **)(*(longlong *)this + 0x6d0))(this);
  uVar30 = this->DefaultPrimaryBrushID;
  if (-1 < (int)uVar30) {
    if (*(int *)&this->field_0x338 != *(int *)&this->field_0x364) {
      puVar26 = *(undefined1 **)&this->field_0x370;
      if (*(undefined1 **)&this->field_0x370 == (undefined1 *)0x0) {
        puVar26 = &this->field_0x368;
      }
      iVar9 = *(int *)(puVar26 + (ulonglong)(*(int *)&this->field_0x378 - 1U & uVar30) * 4);
      if (iVar9 != -1) {
        do {
          if (*(uint *)(*(longlong *)&this->field_0x330 + (longlong)iVar9 * 0x18) == uVar30) {
            ((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushID = uVar30;
            goto LAB_14cd28b46;
          }
          iVar9 = *(int *)(*(longlong *)&this->field_0x330 + 0x10 + (longlong)iVar9 * 0x18);
        } while (iVar9 != -1);
      }
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4886156186946109150>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
                       ,0x122,"BrushOpFactories.Contains(DefaultPrimaryBrushID)");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_14cd28b46:
  UMeshSculptToolBase::RegisterStandardFalloffTypes((UMeshSculptToolBase *)this);
  (**(code **)(*(longlong *)this + 0x318))(this,*(undefined8 *)&this->field_0x130);
  (**(code **)(*(longlong *)this + 0x338))(this,*(undefined8 *)&this->field_0x130,0);
  dVar34 = local_6a8 - local_6c8._s_0.Y;
  dVar36 = dStack_6a0 - local_6c8._s_0.Z;
  dVar31 = dStack_6b0 - local_6c8._s_0.X;
  lVar3 = *(longlong *)&this->field_0x130;
  if (dVar34 <= 0.0) {
    dVar34 = 0.0;
  }
  if (dVar36 <= 0.0) {
    dVar36 = 0.0;
  }
  if (dVar31 <= 0.0) {
    dVar31 = 0.0;
  }
  if (dVar34 <= dVar36) {
    dVar34 = dVar36;
  }
  if (dVar34 <= dVar31) {
    dVar34 = dVar31;
  }
  lVar23 = (**(code **)(*(longlong *)this + 0x430))(this);
  dVar32 = *(double *)(lVar23 + 0x208);
  auVar33 = *(undefined1 (*) [16])(lVar23 + 0x1f0);
  dVar4 = (local_6c8._s_0.Z + dStack_6a0) * __real_3fe0000000000000 * *(double *)(lVar23 + 0x240);
  dVar43 = *(double *)(lVar23 + 0x248) * 0.0;
  dVar36 = (local_6c8._s_0.X + dStack_6b0) * __real_3fe0000000000000 * *(double *)(lVar23 + 0x230);
  dVar31 = (local_6c8._s_0.Y + local_6a8) * __real_3fe0000000000000 * *(double *)(lVar23 + 0x238);
  uVar46 = (undefined4)((ulonglong)dVar31 >> 0x20);
  auVar35 = blendpd(auVar33,*(undefined1 (*) [16])(lVar23 + 0x200),2);
  auVar47._8_4_ = SUB84(dVar31,0);
  auVar47._0_8_ = dVar36;
  auVar47._12_4_ = uVar46;
  auVar48._0_8_ = auVar47._8_8_ * auVar33._0_8_ - auVar33._8_8_ * dVar36;
  auVar48._8_8_ = dVar4 * auVar33._8_8_ - *(double *)(lVar23 + 0x200) * dVar31;
  auVar49._8_4_ = SUB84(dVar31,0);
  auVar49._0_8_ = dVar36;
  auVar49._12_4_ = uVar46;
  auVar33._8_4_ = SUB84(dVar43,0);
  auVar33._0_8_ = dVar4;
  auVar33._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
  auVar33 = blendpd(auVar49,auVar33,2);
  auVar44._8_4_ = SUB84(auVar48._8_8_,0);
  auVar44._0_8_ = auVar48._0_8_;
  auVar44._12_4_ = (int)((ulonglong)auVar48._8_8_ >> 0x20);
  auVar39._0_8_ = auVar33._0_8_ * *(double *)(lVar23 + 0x200) - auVar35._0_8_ * dVar4;
  auVar39._8_8_ = auVar33._8_8_ * *(double *)(lVar23 + 0x208) - auVar35._8_8_ * dVar43;
  auVar33 = *(undefined1 (*) [16])(lVar23 + 0x1f0);
  auVar49 = blendpd(auVar48,auVar39,2);
  dVar43 = auVar44._8_8_ + auVar44._8_8_;
  dVar45 = auVar39._0_8_ + auVar39._0_8_;
  auVar50._0_8_ = auVar49._0_8_ + auVar49._0_8_;
  auVar50._8_8_ = auVar49._8_8_ + auVar49._8_8_;
  auVar41._8_4_ = SUB84(dVar45,0);
  auVar41._0_8_ = dVar43;
  uVar46 = (undefined4)((ulonglong)dVar45 >> 0x20);
  auVar41._12_4_ = uVar46;
  auVar38._8_4_ = SUB84(dVar45,0);
  auVar38._0_8_ = dVar43;
  auVar38._12_4_ = uVar46;
  auVar49 = blendpd(auVar33,*(undefined1 (*) [16])(lVar23 + 0x200),2);
  auVar39 = blendpd(auVar38,auVar50,2);
  auVar42._0_8_ = auVar41._8_8_ * auVar33._0_8_ - auVar33._8_8_ * dVar43;
  auVar42._8_8_ = auVar50._0_8_ * auVar33._8_8_ - *(double *)(lVar23 + 0x200) * dVar45;
  auVar40._0_8_ = auVar39._0_8_ * *(double *)(lVar23 + 0x200) - auVar49._0_8_ * auVar50._0_8_;
  auVar40._8_8_ = auVar39._8_8_ * *(double *)(lVar23 + 0x208) - auVar49._8_8_ * auVar50._8_8_;
  auVar35._8_4_ = SUB84(auVar42._8_8_,0);
  auVar35._0_8_ = auVar42._0_8_;
  auVar35._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
  dVar43 = dVar32 * dVar43 + dVar36 + auVar35._8_8_ + *(double *)(lVar23 + 0x210);
  dVar31 = dVar32 * dVar45 + dVar31 + auVar40._0_8_ + *(double *)(lVar23 + 0x218);
  auVar33 = blendpd(auVar42,auVar40,2);
  dVar36 = *(double *)(lVar3 + 0xb8);
  dVar4 = dVar32 * auVar50._0_8_ + dVar4 + auVar33._0_8_ + *(double *)(lVar23 + 0x220);
  dVar37 = *(double *)(lVar3 + 0xc0) - dVar31;
  dVar45 = dVar36 - dVar43;
  dVar32 = *(double *)(lVar3 + 200) - dVar4;
  if ((dVar34 + __real_408f400000000000) * (dVar34 + __real_408f400000000000) <
      dVar37 * dVar37 + dVar45 * dVar45 + dVar32 * dVar32) {
    local_528._s_0.Z = __real_3ff0000000000000;
    local_528._s_0.X = 0.0;
    local_528._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              ((TQuat<double> *)(lVar3 + 0xd0),(TVector<double> *)&local_590._s_0,
               (TVector<double> *)&local_528._s_0);
    dVar36 = (dVar43 - dVar36) * local_590._s_0.X +
             (dVar31 - *(double *)(lVar3 + 0xc0)) * local_590._s_0.Y +
             (dVar4 - *(double *)(lVar3 + 200)) * local_590._s_0.Z;
    dVar31 = dVar31 - dVar36 * local_590._s_0.Y;
    auVar5._8_4_ = SUB84(dVar31,0);
    auVar5._0_8_ = dVar43 - dVar36 * local_590._s_0.X;
    auVar5._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    *(undefined1 (*) [16])(lVar3 + 0xb8) = auVar5;
    *(double *)(lVar3 + 200) = dVar4 - dVar36 * local_590._s_0.Z;
  }
  (**(code **)(*(longlong *)this + 0x318))(this,*(undefined8 *)&this->field_0xb20);
  pUVar17 = (this->SculptProperties).field0_0x0.DebugPtr;
  local_498 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshVertexSculptTool::Setup'::`2'::<lambda_8>,0,0>::_vftable_
  ;
  local_480 = 0;
  local_4a8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshVertexSculptTool::Setup'::__l2::<lambda_8>,void,int_const_&>
                 ::Call;
  local_490 = this;
  FWatchablePropertySet::WatchProperty<int>
            ((FWatchablePropertySet *)&pUVar17->_padding_,&pUVar17->PrimaryBrushID,
             (TFunction<void___cdecl(int_const_&)> *)local_4a8);
  pUVar17 = (this->SculptProperties).field0_0x0.DebugPtr;
  local_658 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshVertexSculptTool::Setup'::`2'::<lambda_9>,0,0>::_vftable_
  ;
  local_668 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshVertexSculptTool::Setup'::__l2::<lambda_9>,void,enum_EMeshSculptFalloffType_const_&>
              ::Call;
  local_640 = (undefined ***)0x0;
  local_650 = this;
  this_03 = ::operator_new(0xa0);
  if (this_03 != (void *)0x0) {
    local_3c8[0] = local_668;
    local_3a0 = 0;
    if (local_668 != (code *)0x0) {
      pppuVar25 = &local_658;
      if (local_640 != (undefined ***)0x0) {
        pppuVar25 = local_640;
      }
      (*(code *)**pppuVar25)(pppuVar25,local_3c8 + 2);
    }
    pAVar24 = (AInternalToolFrameworkActor *)
              FWatchablePropertySet::TPropertyWatcher<enum_EMeshSculptFalloffType>::
              TPropertyWatcher<enum_EMeshSculptFalloffType><enum_EMeshSculptFalloffType,void>
                        (this_03,&pUVar17->PrimaryFalloffType,
                         (TFunction<void___cdecl(EMeshSculptFalloffType_const_&)> *)local_3c8);
  }
  iVar9 = (int)pUVar17->_padding_;
  piVar1 = (int *)((longlong)&pUVar17->_padding_ + 4);
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar17->_padding_,piVar1);
  }
  *(int *)&pUVar17->_padding_ = iVar9 + 1;
  *(AInternalToolFrameworkActor **)(pUVar17->_padding_ + (longlong)iVar9 * 8) = pAVar24;
  if (local_668 != (code *)0x0) {
    pppuVar25 = &local_658;
    if (local_640 != (undefined ***)0x0) {
      pppuVar25 = local_640;
    }
    (*(code *)(*pppuVar25)[2])();
  }
  local_468 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshVertexSculptTool::Setup'::`2'::<lambda_10>,0,0>::
               _vftable_;
  local_450 = 0;
  local_478[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshVertexSculptTool::Setup'::__l2::<lambda_10>,void,TObjectPtr<UTexture2D>_const_&>
                 ::Call;
  local_460 = this;
  FWatchablePropertySet::WatchProperty<TObjectPtr<UTexture2D>_>
            ((FWatchablePropertySet *)&((this->SculptProperties).field0_0x0.DebugPtr)->_padding_,
             &((this->AlphaProperties).field0_0x0.DebugPtr)->Alpha,
             (TFunction<void___cdecl(TObjectPtr<UTexture2D>_const_&)> *)local_478);
  UMeshSculptToolBase::OnCompleteSetup((UMeshSculptToolBase *)this);
  (**(code **)(*(longlong *)this + 0x6e0))
            (this,((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushID);
  (**(code **)(*(longlong *)this + 0x480))
            (this,((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryFalloffType);
  (**(code **)(*(longlong *)this + 0x6a8))(this);
  UMeshSculptToolBase::SetActiveSecondaryBrushType((UMeshSculptToolBase *)this,0);
  pUVar20 = (this->SymmetryProperties).field0_0x0.DebugPtr;
  local_698 = 0x7a69;
  uStack_694 = 0x7a69;
  (this->StampRandomStream).InitialSeed = 0x7a69;
  (this->StampRandomStream).Seed = 0x7a69;
  pUVar20->bSymmetryCanBeEnabled = this->bMeshSymmetryIsValid;
  if ((this->bMeshSymmetryIsValid == false) ||
     (((this->SymmetryProperties).field0_0x0.DebugPtr)->bEnableSymmetry == false)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  pUVar20 = (this->SymmetryProperties).field0_0x0.DebugPtr;
  this->bApplySymmetry = bVar7;
  local_438 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshVertexSculptTool::Setup'::`2'::<lambda_11>,0,0>::
               _vftable_;
  local_420 = 0;
  local_448[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshVertexSculptTool::Setup'::__l2::<lambda_11>,void,bool_const_&>
                 ::Call;
  local_430 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar20->_padding_,&pUVar20->bEnableSymmetry,
             (TFunction<void___cdecl(bool_const_&)> *)local_448);
  pUVar20 = (this->SymmetryProperties).field0_0x0.DebugPtr;
  local_408 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshVertexSculptTool::Setup'::`2'::<lambda_12>,0,0>::
               _vftable_;
  local_3f0 = 0;
  local_418[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshVertexSculptTool::Setup'::__l2::<lambda_12>,void,bool_const_&>
                 ::Call;
  local_400 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar20->_padding_,&pUVar20->bSymmetryCanBeEnabled,
             (TFunction<void___cdecl(bool_const_&)> *)local_418);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_608._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5f8._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5e8._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5d8._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5c8._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_5b8._8_8_);
  if (local_6d8.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d8.Materials.AllocatorInstance.Data);
  }
  if (local_f8._64_8_ != 0) {
    plVar21 = (longlong *)(local_f8 + 0x50);
    if ((longlong *)local_f8._104_8_ != (longlong *)0x0) {
      plVar21 = (longlong *)local_f8._104_8_;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  return;
}

// ShowWorkPlane @ 14cd2d2d0

bool __thiscall UMeshVertexSculptTool::ShowWorkPlane(UMeshVertexSculptTool *this)

{
  return ((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushID == 0x11;
}

// Shutdown @ 14cd2deb0

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
UMeshVertexSculptTool::Shutdown(UMeshVertexSculptTool *this,EToolShutdownType param_1)

{
  UPreviewGeometry *this_00;
  UDynamicMeshComponent *pUVar1;
  UVertexBrushSculptProperties *pUVar2;
  code *pcVar3;
  UVertexBrushAlphaProperties *pUVar4;
  UMeshSymmetryProperties *pUVar5;
  AInternalToolFrameworkActor *this_01;
  undefined8 uVar6;
  void *local_18 [2];
  
  this_00 = (this->OctreeGeometry).field0_0x0.DebugPtr;
  if (this_00 != (UPreviewGeometry *)0x0) {
    UPreviewGeometry::Disconnect(this_00);
    (this->OctreeGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  }
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDynamicMeshComponent *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnMeshChanged,
               (FDelegateHandle)(this->OnDynamicMeshComponentChangedHandle).ID);
  }
  pUVar2 = (this->SculptProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar2->_padding_ + 0x2b0);
  uVar6 = (**(code **)(*(longlong *)this + 0x6d8))(this,local_18);
  (*pcVar3)(pUVar2,this,uVar6);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  pUVar4 = (this->AlphaProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar4->_padding_ + 0x2b0);
  uVar6 = (**(code **)(*(longlong *)this + 0x6d8))(this,local_18);
  (*pcVar3)(pUVar4,this,uVar6);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  pUVar5 = (this->SymmetryProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar5->_padding_ + 0x2b0);
  uVar6 = (**(code **)(*(longlong *)this + 0x6d8))(this,local_18);
  (*pcVar3)(pUVar5,this,uVar6);
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  this_01 = (this->PreviewMeshActor).field0_0x0.DebugPtr;
  if (this_01 != (AInternalToolFrameworkActor *)0x0) {
    AActor::Destroy((AActor *)this_01,false,true);
    (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  }
  UMeshSculptToolBase::Shutdown((UMeshSculptToolBase *)this,param_1);
  return;
}

// StaticRegisterNativesUMeshVertexSculptTool @ 14cd2f200

void __cdecl UMeshVertexSculptTool::StaticRegisterNativesUMeshVertexSculptTool(void)

{
  return;
}

// TryToInitializeSymmetry @ 14cd30ff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UMeshVertexSculptTool::TryToInitializeSymmetry(UMeshVertexSculptTool *this)

{
  int iVar1;
  TPimplPtr<UE::Geometry::FMeshPlanarSymmetry,0> *pTVar2;
  double dVar3;
  double dVar4;
  FMeshPlanarSymmetry *pFVar5;
  code *pcVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  FDynamicMesh3 *pFVar13;
  longlong lVar14;
  TPimplPtr<UE::Geometry::FMeshPlanarSymmetry,0> TVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  longlong local_res8;
  ForAnyElementType local_1a8;
  undefined8 local_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  FScriptContainerElement *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  TArrayView<UE::Math::TVector<double>_const_,int> local_168;
  undefined1 local_158 [16];
  double local_148;
  FMeshPlanarSymmetry local_138;
  TVector<double>_u_0 local_b8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  TAxisAlignedBox3<double> local_80 [2];
  
  pFVar13 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0x440))();
  UE::Geometry::FDynamicMesh3::GetBounds(pFVar13,local_80,true);
  dVar10 = __real_3ff0000000000000;
  dVar3 = *(double *)&this->field_0x1b0;
  dVar4 = *(double *)&this->field_0x1a8;
  dVar7 = dVar3 + dVar3;
  dVar16 = dVar4 + dVar4;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  dVar4 = __real_3ff0000000000000 - (dVar7 * dVar3 + dVar16 * dVar4);
  dVar9 = *(double *)&this->field_0x1a0 * dVar7 - *(double *)&this->field_0x1b8 * dVar16;
  dVar3 = *(double *)&this->field_0x1b8 * dVar7 + *(double *)&this->field_0x1a0 * dVar16;
  iVar12 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_1a8,(int *)((longlong)&local_1a0 + 4));
  uVar17 = SUB84(dVar3,0);
  uVar18 = (undefined4)((ulonglong)dVar3 >> 0x20);
  local_158._8_4_ = uVar17;
  local_158._0_8_ = dVar4;
  local_158._12_4_ = uVar18;
  iVar1 = iVar12 + 1;
  auVar8._8_4_ = uVar17;
  auVar8._0_8_ = dVar4;
  auVar8._12_4_ = uVar18;
  *(undefined1 (*) [16])(local_1a8.Data + (longlong)iVar12 * 0x18) = auVar8;
  *(double *)(local_1a8.Data + (longlong)iVar12 * 0x18 + 0x10) = dVar9;
  dVar3 = *(double *)&this->field_0x1a0;
  dVar4 = *(double *)&this->field_0x1b0;
  dVar7 = *(double *)&this->field_0x1a8;
  dVar16 = dVar4 + dVar4;
  local_198 = (dVar7 + dVar7) * dVar3 - *(double *)&this->field_0x1b8 * dVar16;
  local_188 = dVar7 * dVar16 + *(double *)&this->field_0x1b8 * (dVar3 + dVar3);
  dStack_190 = dVar10 - (dVar16 * dVar4 + (dVar3 + dVar3) * dVar3);
  local_148 = dVar9;
  local_1a0._0_4_ = iVar1;
  if (((local_1a8.Data <= (FScriptContainerElement *)&local_198) &&
      ((FScriptContainerElement *)&local_198 < local_1a8.Data + (longlong)local_1a0._4_4_ * 0x18))
     && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((int)local_1a0 == local_1a0._4_4_) {
    local_1a0._0_4_ =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&local_1a8,(int *)((longlong)&local_1a0 + 4));
  }
  iVar1 = (int)local_1a0 + 1;
  lVar14 = (longlong)(int)local_1a0;
  local_1a0 = CONCAT44(local_1a0._4_4_,iVar1);
  *(double *)(local_1a8.Data + lVar14 * 0x18) = local_198;
  *(double *)(local_1a8.Data + lVar14 * 0x18 + 8) = dStack_190;
  *(double *)(local_1a8.Data + lVar14 * 0x18 + 0x10) = local_188;
  local_138.SymmetryFrame.Rotation.field0_0x0._s_0.Y = 0.0;
  local_138.SymmetryFrame.Rotation.field0_0x0._s_0.Z = 0.0;
  local_138.SymmetryFrame.Rotation.field0_0x0._s_0.X = 0.0;
  local_138.SymmetryFrame.Rotation.field0_0x0._s_0.W = dVar10;
  local_138.ErrorScale = dVar10;
  local_138.bCanIgnoreDegenerateSymmetries = true;
  local_138.TargetMesh = (FDynamicMesh3 *)0x0;
  local_138.SymmetryFrame.Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_138.SymmetryFrame.Origin.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_138.SymmetryFrame.Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_138.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.Vertices.ArrayNum = 0;
  local_138.Vertices.ArrayMax = 0;
  local_b8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_178 = local_1a8.Data;
  local_90 = ___xmm_3ff00000000000000000000000000000;
  uStack_88 = _UNK_15061cbc8;
  local_b8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_b8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_a0 = 0;
  uStack_98 = 0;
  if ((iVar1 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iStack_170 = iVar1;
  pFVar13 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0x440))(this);
  local_168._12_4_ = uStack_16c;
  local_168.ArrayNum = iStack_170;
  local_168.DataPtr = (TVector<double> *)local_178;
  bVar11 = UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize
                     (&local_138,pFVar13,local_80,(TFrame3<double> *)&local_b8._s_0,&local_168);
  if (bVar11) {
    TVar15 = MakePimpl<UE::Geometry::FMeshPlanarSymmetry,0>();
    pTVar2 = &this->Symmetry;
    if (TVar15.Ptr != (FMeshPlanarSymmetry *)pTVar2) {
      pFVar5 = pTVar2->Ptr;
                    /* WARNING: Load size is inaccurate */
      pTVar2->Ptr = *TVar15.Ptr;
      *(undefined8 *)TVar15.Ptr = 0;
      if (pFVar5 != (FMeshPlanarSymmetry *)0x0) {
        (**(code **)&pFVar5[-1].Vertices.ArrayNum)(&pFVar5[-1].Vertices.ArrayNum);
      }
    }
    if (local_res8 != 0) {
      (**(code **)(local_res8 + -0x10))(local_res8 + -0x10);
    }
    UE::Geometry::FMeshPlanarSymmetry::operator=(pTVar2->Ptr,&local_138);
    this->bMeshSymmetryIsValid = true;
  }
  if (local_138.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Vertices.AllocatorInstance.Data);
  }
  if (local_1a8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data);
  }
  return;
}

// UndoRedo_RestoreSymmetryPossibleState @ 14cd313b0

void __thiscall
UMeshVertexSculptTool::UndoRedo_RestoreSymmetryPossibleState
          (UMeshVertexSculptTool *this,bool param_1)

{
  UMeshSymmetryProperties *pUVar1;
  
  pUVar1 = (this->SymmetryProperties).field0_0x0.DebugPtr;
  this->bMeshSymmetryIsValid = param_1;
  pUVar1->bSymmetryCanBeEnabled = param_1;
  return;
}

// UpdateBaseMesh @ 14cd32560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMeshVertexSculptTool::UpdateBaseMesh
          (UMeshVertexSculptTool *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FMutex *pFVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  atomic<unsigned_char> aVar6;
  undefined8 uVar7;
  uint uVar8;
  UVertexBrushSculptProperties *pUVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  undefined8 uVar12;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar13;
  char cVar14;
  short sVar15;
  int iVar16;
  FDynamicMesh3 *pFVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  FChangeStamp *pFVar21;
  uint uVar22;
  TArray<UE::Geometry::TDynamicVector<UE::Math::TVector<double>,512>::TBlock_*,TSizedDefaultAllocator<32>_>
  *pTVar23;
  uint uVar24;
  undefined1 *puVar25;
  uint *puVar26;
  TBitArray<FDefaultBitArrayAllocator> *pTVar27;
  bool bVar28;
  undefined1 auStackY_418 [32];
  undefined1 local_3c7 [3];
  uint local_3c4;
  uint local_3c0;
  uint local_3bc;
  FDynamicMesh3 *local_3b8;
  undefined8 local_3b0;
  uint local_3a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_3a0;
  int iStack_398;
  uint uStack_394;
  undefined1 *local_390;
  undefined4 uStack_388;
  int iStack_384;
  int local_380;
  undefined4 uStack_37c;
  int iStack_378;
  undefined4 uStack_374;
  int local_370;
  int local_36c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_368;
  TBitArray<FDefaultBitArrayAllocator> *local_360;
  <lambda_1> local_358;
  TVector<float>_u_0 local_350;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_340;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_338;
  undefined8 uStack_318;
  <lambda_2> local_310;
  undefined1 local_300 [16];
  undefined1 local_2f0 [24];
  TUniqueFunction<void___cdecl(void)> local_2d8;
  TUniqueFunction<void___cdecl(void)> local_2a8;
  undefined4 local_25c;
  FSparseDynamicOctree3 local_258;
  FDynamicMesh3 *local_88;
  double local_80;
  double dStack_78;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_418;
  pUVar9 = (this->SculptProperties).field0_0x0.DebugPtr;
  if ((pUVar9 == (UVertexBrushSculptProperties *)0x0) ||
     (this->bCachedFreezeTarget = pUVar9->bFreezeTarget, pUVar9->bFreezeTarget == false)) {
    local_368 = param_1;
    pFVar17 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0x440))(this);
    local_3b8 = pFVar17;
    if (param_1 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      bVar28 = -1 < CpuChannel->Enabled;
      if (bVar28) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1682,"VtxSculptTool_Target_FullUpdate",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
                   ,0x692);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1682);
      }
      UE::Geometry::FDynamicMesh3::Copy(&this->BaseMesh,pFVar17,false,false,false,false);
      local_350._0_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
      local_350._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
      UE::Geometry::FDynamicMesh3::EnableVertexNormals
                (&this->BaseMesh,(TVector<float> *)&local_350._s_0);
      UE::Geometry::FMeshNormals::QuickComputeVertexNormals(&this->BaseMesh,false);
      *(undefined4 *)&(this->BaseMeshSpatial)._padding_ = 8;
      memset(&local_258,0,0x208);
      UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3(&local_258);
      local_80 = __real_7fefffffffffffff;
      dStack_68 = ___xmm_ffefffffffffffffffefffffffffffff;
      dStack_60 = _UNK_1508ffb58;
      local_58 = __real_ffefffffffffffff;
      dStack_78 = ___xmm_7fefffffffffffff7fefffffffffffff;
      dStack_70 = _UNK_150a9e648;
      UE::Geometry::FSparseDynamicOctree3::operator=
                ((FSparseDynamicOctree3 *)&this->BaseMeshSpatial,&local_258);
      (this->BaseMeshSpatial).Mesh = local_88;
      (this->BaseMeshSpatial).ModifiedBounds.Min.field0_0x0._s_0.X = local_80;
      (this->BaseMeshSpatial).ModifiedBounds.Min.field0_0x0._s_0.Y = dStack_78;
      (this->BaseMeshSpatial).ModifiedBounds.Min.field0_0x0._s_0.Z = dStack_70;
      (this->BaseMeshSpatial).ModifiedBounds.Max.field0_0x0._s_0.X = dStack_68;
      (this->BaseMeshSpatial).ModifiedBounds.Max.field0_0x0._s_0.Y = dStack_60;
      (this->BaseMeshSpatial).ModifiedBounds.Max.field0_0x0._s_0.Z = local_58;
      UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3(&local_258);
      UE::Geometry::FDynamicMeshOctree3::Initialize(&this->BaseMeshSpatial,&this->BaseMesh);
      if (bVar28) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    else {
      pTVar2 = &this->BaseMeshIndexBuffer;
      (this->BaseMeshIndexBuffer).ArrayNum = 0;
      if ((this->BaseMeshIndexBuffer).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar2->AllocatorInstance,0,&(this->BaseMeshIndexBuffer).ArrayMax);
      }
      iVar16 = *(int *)&(param_1->Elements).field_0x28;
      local_360 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
      iStack_398 = 0;
      uStack_394 = 1;
      local_380 = 0;
      iStack_384 = 0;
      if (iVar16 != 0) {
        puVar26 = *(uint **)&(param_1->Elements).field_0x20;
        if (puVar26 == (uint *)0x0) {
          puVar26 = (uint *)&(param_1->Elements).field_0x10;
        }
        uVar24 = *puVar26;
        iStack_398 = 0;
        local_380 = 0;
        while (uVar24 == 0) {
          lVar19 = (longlong)iStack_398;
          local_380 = local_380 + 0x20;
          iStack_398 = iStack_398 + 1;
          iStack_384 = iVar16;
          if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_398)
          goto LAB_14cd32832;
          uVar24 = puVar26[lVar19 + 1];
        }
        uStack_394 = -uVar24 & uVar24;
        uVar18 = (ulonglong)uStack_394 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_370 = (int)lVar19;
        iStack_384 = local_370 + -1 + local_380;
        if (iVar16 < iStack_384) {
          iStack_384 = iVar16;
        }
      }
LAB_14cd32832:
      local_390 = &(param_1->Elements).field_0x10;
      uVar24 = *(uint *)&(param_1->Elements).field_0x28;
      uStack_37c = local_25c;
      uVar22 = uVar24 & 0xffffffe0;
      iStack_378 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
      TStack_338._padding_ = CONCAT44(uStack_394,iStack_398);
      uStack_388 = 0xffffffff;
      TStack_338.CurrentBitIndex = iStack_384;
      TStack_338.UnvisitedBitMask = 0xffffffff;
      iVar20 = (int)uVar24 >> 5;
      TStack_338._28_4_ = local_25c;
      TStack_338.BaseBitIndex = local_380;
      uStack_318 = CONCAT44(uStack_374,iStack_378);
      local_3c0 = uVar24;
      local_3a0 = param_1;
      local_340 = param_1;
      TStack_338.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_390;
      if ((((int)uVar24 < 0) || (iVar16 < (int)uVar24)) &&
         (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar28)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
      uVar8 = *(uint *)&(param_1->Elements).field_0x28;
      if (uVar24 != uVar8) {
        puVar25 = *(undefined1 **)&(param_1->Elements).field_0x20;
        if (puVar25 == (undefined1 *)0x0) {
          puVar25 = (undefined1 *)pTVar27;
        }
        uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar25 + (longlong)iVar20 * 4);
        while (uVar24 == 0) {
          lVar19 = (longlong)iVar20;
          uVar22 = uVar22 + 0x20;
          iVar20 = iVar20 + 1;
          uVar24 = uVar8;
          local_3c0 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_14cd32960;
          uVar24 = *(uint *)(puVar25 + lVar19 * 4 + 4);
        }
        uVar18 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        local_36c = (int)lVar19;
        uVar24 = local_36c + -1 + uVar22;
        local_3c0 = uVar24;
        if ((int)uVar8 < (int)uVar24) {
          uVar24 = uVar8;
          local_3c0 = uVar8;
        }
      }
LAB_14cd32960:
      while( true ) {
        pTVar13 = local_340;
        if (*(int *)&(local_340->Elements).field_0x8 - *(int *)&(local_340->Elements).field_0x34 !=
            (int)uStack_318) {
          local_3c7[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_3c7);
          pTVar27 = (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10;
        }
        if (((TStack_338.CurrentBitIndex == uVar24) && (TStack_338.Array == pTVar27)) &&
           (pTVar13 == param_1)) break;
        local_3c4 = *(uint *)(*(longlong *)&pTVar13->Elements +
                             (longlong)TStack_338.CurrentBitIndex * 0xc);
        lVar19 = *(longlong *)
                  ((this->BaseMesh).Triangles.Blocks.AllocatorInstance.Data +
                  (ulonglong)(local_3c4 >> 9) * 8);
        local_3b0 = *(undefined8 *)(lVar19 + (ulonglong)(local_3c4 & 0x1ff) * 0xc);
        local_3bc = *(uint *)(lVar19 + 8 + (ulonglong)(local_3c4 & 0x1ff) * 0xc);
        uVar18 = (ulonglong)((uint)local_3b0 & 0x1ff);
        uVar24 = (uint)local_3b0 >> 9;
        lVar19 = *(longlong *)
                  ((local_3b8->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)uVar24 * 8);
        local_390 = *(undefined1 **)(lVar19 + 0x10 + uVar18 * 0x18);
        local_3a8 = local_3bc;
        sVar15 = _dclass();
        if (((sVar15 < 1) && (sVar15 = _dclass(), sVar15 < 1)) &&
           (sVar15 = _dclass(local_390), sVar15 < 1)) {
          puVar4 = (undefined8 *)(lVar19 + uVar18 * 0x18);
          uVar12 = puVar4[1];
          uVar7 = *(undefined8 *)(lVar19 + 0x10 + uVar18 * 0x18);
          lVar19 = *(longlong *)
                    ((this->BaseMesh).Vertices.Blocks.AllocatorInstance.Data + (ulonglong)uVar24 * 8
                    );
          puVar5 = (undefined8 *)(lVar19 + uVar18 * 0x18);
          *puVar5 = *puVar4;
          puVar5[1] = uVar12;
          *(undefined8 *)(lVar19 + 0x10 + uVar18 * 0x18) = uVar7;
          if ((this->BaseMesh).ChangeStampShape.bIsEnabled != false) {
            pFVar3 = &(this->BaseMesh).ChangeStampShape.Mutex;
            LOCK();
            bVar28 = pFVar3->State == (atomic<unsigned_char>)0x0;
            if (bVar28) {
              pFVar3->State = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (!bVar28) {
              UE::FMutex::LockSlow(pFVar3);
            }
            puVar26 = &(this->BaseMesh).ChangeStampShape.Value;
            *puVar26 = *puVar26 + 1;
            LOCK();
            aVar6 = pFVar3->State;
            pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
            UNLOCK();
            if (((byte)aVar6 & 2) != 0) {
              UE::FMutex::WakeWaitingThread(pFVar3);
            }
          }
        }
        pTVar23 = &(this->BaseMesh).Vertices.Blocks;
        pFVar21 = &(this->BaseMesh).ChangeStampShape;
        uVar18 = (ulonglong)(local_3b0._4_4_ & 0x1ff);
        uVar24 = local_3b0._4_4_ >> 9;
        lVar19 = *(longlong *)
                  ((local_3b8->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)uVar24 * 8);
        local_390 = *(undefined1 **)(lVar19 + 0x10 + uVar18 * 0x18);
        sVar15 = _dclass();
        if (((sVar15 < 1) && (sVar15 = _dclass(), sVar15 < 1)) &&
           (sVar15 = _dclass(local_390), sVar15 < 1)) {
          puVar4 = (undefined8 *)(lVar19 + uVar18 * 0x18);
          uVar12 = puVar4[1];
          uVar7 = *(undefined8 *)(lVar19 + 0x10 + uVar18 * 0x18);
          lVar19 = *(longlong *)((pTVar23->AllocatorInstance).Data + (ulonglong)uVar24 * 8);
          puVar5 = (undefined8 *)(lVar19 + uVar18 * 0x18);
          *puVar5 = *puVar4;
          puVar5[1] = uVar12;
          *(undefined8 *)(lVar19 + 0x10 + uVar18 * 0x18) = uVar7;
          if (pFVar21->bIsEnabled != false) {
            pFVar3 = &(this->BaseMesh).ChangeStampShape.Mutex;
            LOCK();
            bVar28 = pFVar3->State == (atomic<unsigned_char>)0x0;
            if (bVar28) {
              pFVar3->State = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (!bVar28) {
              UE::FMutex::LockSlow(&(this->BaseMesh).ChangeStampShape.Mutex);
            }
            puVar26 = &(this->BaseMesh).ChangeStampShape.Value;
            *puVar26 = *puVar26 + 1;
            LOCK();
            pFVar3 = &(this->BaseMesh).ChangeStampShape.Mutex;
            aVar6 = pFVar3->State;
            pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
            UNLOCK();
            if (((byte)aVar6 & 2) != 0) {
              UE::FMutex::WakeWaitingThread(&(this->BaseMesh).ChangeStampShape.Mutex);
            }
          }
        }
        uVar18 = (ulonglong)(local_3a8 & 0x1ff);
        uVar24 = local_3bc >> 9;
        lVar19 = *(longlong *)
                  ((local_3b8->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)uVar24 * 8);
        local_390 = *(undefined1 **)(lVar19 + 0x10 + uVar18 * 0x18);
        sVar15 = _dclass();
        if (((sVar15 < 1) && (sVar15 = _dclass(), sVar15 < 1)) &&
           (sVar15 = _dclass(local_390), sVar15 < 1)) {
          puVar4 = (undefined8 *)(lVar19 + uVar18 * 0x18);
          uVar12 = puVar4[1];
          uVar7 = *(undefined8 *)(lVar19 + 0x10 + uVar18 * 0x18);
          lVar19 = *(longlong *)((pTVar23->AllocatorInstance).Data + (ulonglong)uVar24 * 8);
          puVar5 = (undefined8 *)(lVar19 + uVar18 * 0x18);
          *puVar5 = *puVar4;
          puVar5[1] = uVar12;
          *(undefined8 *)(lVar19 + 0x10 + uVar18 * 0x18) = uVar7;
          if (pFVar21->bIsEnabled != false) {
            pFVar3 = &(this->BaseMesh).ChangeStampShape.Mutex;
            LOCK();
            bVar28 = pFVar3->State == (atomic<unsigned_char>)0x0;
            if (bVar28) {
              pFVar3->State = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (!bVar28) {
              UE::FMutex::LockSlow(&(this->BaseMesh).ChangeStampShape.Mutex);
            }
            puVar26 = &(this->BaseMesh).ChangeStampShape.Value;
            *puVar26 = *puVar26 + 1;
            LOCK();
            pFVar3 = &(this->BaseMesh).ChangeStampShape.Mutex;
            aVar6 = pFVar3->State;
            pFVar3->State = (atomic<unsigned_char>)((char)pFVar3->State + -1);
            UNLOCK();
            if (((byte)aVar6 & 2) != 0) {
              UE::FMutex::WakeWaitingThread(&(this->BaseMesh).ChangeStampShape.Mutex);
            }
          }
        }
        pFVar10 = (pTVar2->AllocatorInstance).Data;
        piVar1 = &(this->BaseMeshIndexBuffer).ArrayMax;
        if (((pFVar10 <= (FScriptContainerElement *)&local_3c4) &&
            ((FScriptContainerElement *)&local_3c4 < pFVar10 + (longlong)*piVar1 * 4)) &&
           (bVar28 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar28)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar16 = (this->BaseMeshIndexBuffer).ArrayNum;
        if (iVar16 == *piVar1) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->BaseMeshIndexBuffer).ArrayNum = iVar16 + 1;
        *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar16 * 4) = local_3c4;
        TStack_338.UnvisitedBitMask = TStack_338.UnvisitedBitMask & ~TStack_338._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_338);
        pTVar27 = local_360;
        param_1 = local_368;
        uVar24 = local_3c0;
      }
      local_2d8._0_8_ = 0;
      local_2d8._40_8_ = 0;
      local_358.__this = this;
      Async<_UMeshVertexSculptTool::UpdateBaseMesh_::__l13::<lambda_1>_>
                ((TFuture<void> *)local_2f0,VertexSculptToolAsyncExecTarget,&local_358,&local_2d8);
      local_2a8._0_8_ = 0;
      local_2a8._40_8_ = 0;
      local_310.TriangleSet = param_1;
      local_310.__this = this;
      Async<_UMeshVertexSculptTool::UpdateBaseMesh_::__l13::<lambda_2>_>
                ((TFuture<void> *)local_300,VertexSculptToolAsyncExecTarget,&local_310,&local_2a8);
      if (local_2f0._0_8_ != 0) {
        do {
          cVar14 = (**(code **)(**(longlong **)(local_2f0._0_8_ + 0x60) + 0x20))
                             (*(longlong **)(local_2f0._0_8_ + 0x60),0xffffffff,0);
        } while (cVar14 == '\0');
      }
      if (local_300._0_8_ != 0) {
        do {
          cVar14 = (**(code **)(**(longlong **)(local_300._0_8_ + 0x60) + 0x20))
                             (*(longlong **)(local_300._0_8_ + 0x60),0xffffffff,0);
        } while (cVar14 == '\0');
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_300._8_8_);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_2f0._8_8_);
    }
  }
  return;
}

// UpdateBrushAlpha @ 14cd32e00

void __thiscall
UMeshVertexSculptTool::UpdateBrushAlpha(UMeshVertexSculptTool *this,UTexture2D *param_1)

{
  TDenseGrid2<UE::Math::TVector4<float>_> *pTVar1;
  UTexture2D *pUVar2;
  FScriptContainerElement *pFVar3;
  UMaterialInstanceDynamic *pUVar4;
  FName *pFVar5;
  bool bVar6;
  FName local_res8;
  TImageBuilder<UE::Math::TVector4<float>_> local_78;
  TImageBuilder<UE::Math::TVector4<float>_> local_48;
  
  pUVar2 = (this->BrushAlpha).field0_0x0.DebugPtr;
  if (pUVar2 == (UTexture2D *)0x0) {
    bVar6 = param_1 == (UTexture2D *)0x0;
  }
  else {
    bVar6 = pUVar2 == param_1;
  }
  if (!bVar6) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UTexture2D *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->BrushAlpha).field0_0x0.DebugPtr = param_1;
    if (param_1 != (UTexture2D *)0x0) {
      local_78.Dimensions.Width = 0;
      local_78.Dimensions.Height = 0;
      local_78.Image.DimensionY = 0;
      local_78.Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Image.Buffer.ArrayNum = 0;
      local_78.Image.Buffer.ArrayMax = 0;
      local_78.Image.DimensionX = 0;
      bVar6 = UE::AssetUtils::ReadTexture(param_1,&local_78,false);
      if (bVar6) {
        pTVar1 = &(this->BrushAlphaValues).Image;
        (this->BrushAlphaValues).Dimensions = local_78.Dimensions;
        if (pTVar1 != &local_78.Image) {
          pFVar3 = (pTVar1->Buffer).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (pTVar1->Buffer).AllocatorInstance.Data = local_78.Image.Buffer.AllocatorInstance.Data;
          (this->BrushAlphaValues).Image.Buffer.ArrayNum = local_78.Image.Buffer.ArrayNum;
          (this->BrushAlphaValues).Image.Buffer.ArrayMax = local_78.Image.Buffer.ArrayMax;
          local_78.Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.Image.Buffer.ArrayNum = 0;
          local_78.Image.Buffer.ArrayMax = 0;
        }
        (this->BrushAlphaValues).Image.DimensionX = local_78.Image.DimensionX;
        (this->BrushAlphaValues).Image.DimensionY = local_78.Image.DimensionY;
        pUVar4 = *(UMaterialInstanceDynamic **)&this->field_0xb40;
        this->BrushAlphaDimensions = local_78.Dimensions;
        this->bHaveBrushAlpha = true;
        pFVar5 = ::FName::FName(&local_res8,L"BrushAlpha");
        UMaterialInstanceDynamic::SetTextureParameterValue(pUVar4,*pFVar5,(UTexture *)param_1);
        pUVar4 = *(UMaterialInstanceDynamic **)&this->field_0xb40;
        pFVar5 = ::FName::FName(&local_res8,L"AlphaPower");
        UMaterialInstanceDynamic::SetScalarParameterValue(pUVar4,*pFVar5,__real_3f800000);
        if (local_78.Image.Buffer.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return;
        }
        FMemory::Free(local_78.Image.Buffer.AllocatorInstance.Data);
        return;
      }
      if (local_78.Image.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Image.Buffer.AllocatorInstance.Data);
      }
    }
    this->bHaveBrushAlpha = false;
    local_48.Dimensions.Width = 0;
    local_48.Dimensions.Height = 0;
    local_48.Image.DimensionY = 0;
    local_48.Image.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Image.Buffer.ArrayNum = 0;
    local_48.Image.Buffer.ArrayMax = 0;
    local_48.Image.DimensionX = 0;
    UE::Geometry::TImageBuilder<UE::Math::TVector4<float>_>::operator=
              (&this->BrushAlphaValues,&local_48);
    if (local_48.Image.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Image.Buffer.AllocatorInstance.Data);
    }
    pUVar4 = *(UMaterialInstanceDynamic **)&this->field_0xb40;
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    (this->BrushAlphaDimensions).Width = 0;
    (this->BrushAlphaDimensions).Height = 0;
    pFVar5 = ::FName::FName(&local_res8,L"BrushAlpha");
    UMaterialInstanceDynamic::SetTextureParameterValue(pUVar4,*pFVar5,(UTexture *)0x0);
    pUVar4 = *(UMaterialInstanceDynamic **)&this->field_0xb40;
    pFVar5 = ::FName::FName(&local_res8,L"AlphaPower");
    UMaterialInstanceDynamic::SetScalarParameterValue(pUVar4,*pFVar5,0.0);
  }
  return;
}

// UpdateBrushPosition @ 14cd338f0

bool __thiscall
UMeshVertexSculptTool::UpdateBrushPosition(UMeshVertexSculptTool *this,TRay<double> *param_1)

{
  char cVar1;
  EStampAlignmentType EVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)this + 0x478))();
  cVar1 = (**(code **)(*(longlong *)*puVar3 + 0x30))();
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      cVar1 = (**(code **)(*(longlong *)this + 0x538))(this,param_1,0);
      goto LAB_14cd33964;
    }
    if (cVar1 != '\x02') {
      return false;
    }
  }
  cVar1 = (**(code **)(*(longlong *)this + 0x540))(this,param_1,0);
LAB_14cd33964:
  if (cVar1 != '\0') {
    EVar2 = (**(code **)(*(longlong *)*puVar3 + 0x40))();
    RealignBrush(this,EVar2);
  }
  return (bool)cVar1;
}

// UpdateBrushType @ 14cd34080

void __thiscall
UMeshVertexSculptTool::UpdateBrushType
          (UMeshVertexSculptTool *this,EMeshVertexSculptBrushType param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014cd34086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x6e0))(this,param_1);
  return;
}

// UpdateBrushType @ 14cd340a0

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

void __thiscall UMeshVertexSculptTool::UpdateBrushType(UMeshVertexSculptTool *this,int param_1)

{
  undefined1 *this_00;
  UVertexBrushSculptProperties *pUVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  UObject *pUVar10;
  UClass *pUVar11;
  FText *pFVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined1 auStackY_148 [32];
  FTextBuilder local_118;
  FText local_100;
  FText local_f0;
  FText local_e0;
  TIterator local_d0;
  code *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  code *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FText::AsLocalizable_Advanced_LocText
              (&BaseMessage,L"UMeshVertexSculptTool",L"OnStartSculptTool",
               L"Hold Shift to Smooth, Ctrl to Invert (where applicable). [/] and S/D change Size (+Shift to small-step), W/E changes Strength."
              );
    atexit(`UMeshVertexSculptTool::UpdateBrushType'::__l2::
           _dynamic_atexit_destructor_for__BaseMessage__);
    _Init_thread_footer(&::_TSS0);
  }
  local_118.Lines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.Lines.ArrayNum = 0;
  local_118.Lines.ArrayMax = 0;
  local_118.IndentCount = 0;
  FTextBuilder::AppendLine(&local_118,&BaseMessage);
  UMeshSculptToolBase::SetActivePrimaryBrushType((UMeshSculptToolBase *)this,param_1);
  if (*(longlong *)&this->field_0x420 == 0) {
    if (*(int *)&this->field_0x338 == *(int *)&this->field_0x364) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_4886156186946107503>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
                         ,0x791,"!BrushOpFactories.IsEmpty()");
      if (bVar7) {
code_r0x00014cd341f3:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      if (1 < (byte)LogGeometry._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      TSet<TTuple<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>,0>,FDefaultSetAllocator>
      ::TIterator::TIterator
                (&local_d0,
                 (TSet<TTuple<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>,0>,FDefaultSetAllocator>
                  *)&this->field_0x330);
      UMeshSculptToolBase::SetActivePrimaryBrushType
                ((UMeshSculptToolBase *)this,
                 *(int *)(*(longlong *)local_d0._padding_ +
                         (longlong)local_d0._padding_._4_4_ * 0x18));
      if ((*(longlong *)&this->field_0x420 == 0) &&
         (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4886156186946107499>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
                             ,0x795,"PrimaryBrushOp"), bVar7)) goto code_r0x00014cd341f3;
    }
  }
  this_00 = &this->field_0xb50;
  bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (!bVar7) goto LAB_14cd343c9;
  bVar7 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*(longlong *)&this->field_0x420 + 8));
  if (bVar7) {
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)&this->field_0x420 + 8));
    if (pUVar10 != (UObject *)0x0) {
      pUVar11 = Z_Construct_UClass_UBaseKelvinletBrushOpProps_NoRegister();
      iVar9 = (int)pUVar11->_padding_;
      if ((iVar9 <= *(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar9 * 8) ==
          &pUVar11->_padding_)) goto LAB_14cd343ba;
    }
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_100,L"UMeshVertexSculptTool",L"BrushStrength",L"Strength");
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    FText::operator=((FText *)&pUVar10[0xc].field_0x20,pFVar12);
    if (local_100.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
    }
    uStack_70 = (longlong *)0x0;
    local_88 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UMeshVertexSculptTool::UpdateBrushType'::`29'::<lambda_2>,1,0>
                ::_vftable_;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshVertexSculptTool::UpdateBrushType'::__l29::<lambda_2>,float>
               ::Call;
    uStack_80 = this;
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    lVar3 = *(longlong *)&pUVar10[9].field_0x8;
    uVar4 = *(undefined8 *)&pUVar10[9].field_0x10;
    lVar5 = *(longlong *)&pUVar10[9].field_0x18;
    uVar6 = *(undefined8 *)&pUVar10[9].field_0x20;
    uVar15 = *(undefined8 *)(pUVar10 + 10);
    plVar13 = *(longlong **)&pUVar10[10].field_0x8;
    *(code **)&pUVar10[9].field_0x8 = local_98;
    *(undefined8 *)&pUVar10[9].field_0x10 = uStack_90;
    *(undefined4 *)&pUVar10[9].field_0x18 = (undefined4)local_88;
    *(undefined4 *)&pUVar10[9].field_0x1c = local_88._4_4_;
    *(undefined4 *)&pUVar10[9].field_0x20 = (undefined4)uStack_80;
    *(undefined4 *)&pUVar10[9].field_0x24 = uStack_80._4_4_;
    *(undefined4 *)(pUVar10 + 10) = (undefined4)local_78;
    *(undefined4 *)&pUVar10[10].field_0x4 = local_78._4_4_;
    *(undefined4 *)&pUVar10[10].field_0x8 = (undefined4)uStack_70;
    *(undefined4 *)&pUVar10[10].field_0xc = uStack_70._4_4_;
    local_88 = (undefined **)lVar5;
    uStack_80 = (UMeshVertexSculptTool *)uVar6;
    local_78 = uVar15;
    uStack_70 = plVar13;
    local_98 = (code *)lVar3;
    uStack_90 = uVar4;
    if (lVar3 != 0) {
      plVar14 = &local_88;
      if (plVar13 != (longlong *)0x0) {
        plVar14 = plVar13;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    uStack_40 = (longlong *)0x0;
    local_58 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UMeshVertexSculptTool::UpdateBrushType'::`29'::<lambda_3>,1,0>
                ::_vftable_;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshVertexSculptTool::UpdateBrushType'::__l29::<lambda_3>,void,float>
               ::Call;
    uStack_50 = this;
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    lVar3 = *(longlong *)&pUVar10[10].field_0x10;
    uVar4 = *(undefined8 *)&pUVar10[10].field_0x18;
    lVar5 = *(longlong *)&pUVar10[10].field_0x20;
    uVar6 = *(undefined8 *)(pUVar10 + 0xb);
    uVar15 = *(undefined8 *)&pUVar10[0xb].field_0x8;
    plVar13 = *(longlong **)&pUVar10[0xb].field_0x10;
    *(code **)&pUVar10[10].field_0x10 = local_68;
    *(undefined8 *)&pUVar10[10].field_0x18 = uStack_60;
    *(undefined4 *)&pUVar10[10].field_0x20 = (undefined4)local_58;
    *(undefined4 *)&pUVar10[10].field_0x24 = local_58._4_4_;
    *(undefined4 *)(pUVar10 + 0xb) = (undefined4)uStack_50;
    *(undefined4 *)&pUVar10[0xb].field_0x4 = uStack_50._4_4_;
    *(undefined4 *)&pUVar10[0xb].field_0x8 = (undefined4)local_48;
    *(undefined4 *)&pUVar10[0xb].field_0xc = local_48._4_4_;
    *(undefined4 *)&pUVar10[0xb].field_0x10 = (undefined4)uStack_40;
    *(undefined4 *)&pUVar10[0xb].field_0x14 = uStack_40._4_4_;
    local_68 = (code *)lVar3;
    uStack_60 = uVar4;
    local_58 = (undefined **)lVar5;
    uStack_50 = (UMeshVertexSculptTool *)uVar6;
    local_48 = uVar15;
    uStack_40 = plVar13;
    if (lVar3 != 0) {
      plVar14 = &local_58;
      if (plVar13 != (longlong *)0x0) {
        plVar14 = plVar13;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    pUVar10[0xd].field_0xc = 1;
  }
  else {
LAB_14cd343ba:
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    pUVar10[0xd].field_0xc = 0;
  }
LAB_14cd343c9:
  pUVar1 = (this->SculptProperties).field0_0x0.DebugPtr;
  if (pUVar1 == (UVertexBrushSculptProperties *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4886156186946107475>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
                       ,0x7ad,"SculptProperties");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (((uint)param_1 < 0xd) && ((0x16e0U >> (param_1 & 0x1fU) & 1) != 0)) {
      bVar7 = true;
    }
    else {
      bVar7 = false;
    }
    pUVar1->bCanFreezeTarget = bVar7;
  }
  (**(code **)(*(longlong *)this + 0x338))(this,*(undefined8 *)&this->field_0x130,0);
  if ((*(longlong **)&this->field_0x420 != (longlong *)0x0) &&
     (((iVar9 = (**(code **)(**(longlong **)&this->field_0x420 + 0x60))(), iVar9 == 3 ||
       (iVar9 = (**(code **)(**(longlong **)&this->field_0x420 + 0x40))(), iVar9 == 2)) ||
      (iVar9 = (**(code **)(**(longlong **)&this->field_0x420 + 0x40))(), iVar9 == 3)))) {
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_f0,L"UMeshVertexSculptTool",L"FixedPlaneTip",
                         L"Use T to reposition Work Plane at cursor, Shift+T to align to Normal, Ctrl+Shift+T to align to View"
                        );
    FTextBuilder::AppendLine(&local_118,pFVar12);
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
    }
    (**(code **)(*(longlong *)this + 0x338))(this,*(undefined8 *)&this->field_0x130,1);
  }
  plVar13 = (longlong *)(**(code **)(*(longlong *)this + 0x478))(this);
  if (((longlong *)*plVar13 == (longlong *)0x0) ||
     (cVar8 = (**(code **)(*(longlong *)*plVar13 + 0x70))(), cVar8 == '\0')) {
    uVar15 = 0;
  }
  else {
    uVar15 = 1;
  }
  (**(code **)(*(longlong *)this + 0x338))(this,(this->AlphaProperties).field0_0x0.DebugPtr,uVar15);
  plVar13 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  pcVar2 = *(code **)(*plVar13 + 0x360);
  pFVar12 = FTextBuilder::ToText(&local_118,&local_e0);
  (*pcVar2)(plVar13,pFVar12,2);
  if (local_e0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
  }
  DestructItems<FText,int>((FText *)local_118.Lines.AllocatorInstance.Data,local_118.Lines.ArrayNum)
  ;
  if ((FText *)local_118.Lines.AllocatorInstance.Data != (FText *)0x0) {
    FMemory::Free(local_118.Lines.AllocatorInstance.Data);
  }
  return;
}

// UpdateHoverStamp @ 14cd34c60

void __thiscall
UMeshVertexSculptTool::UpdateHoverStamp(UMeshVertexSculptTool *this,TFrame3<double> *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TTransformSRT3<double> *pTVar5;
  double extraout_XMM0_Qa;
  TQuaternion<double>_u_0 local_c8;
  undefined1 local_a8 [32];
  TVector<double>_u_0 local_88 [5];
  
  local_a8._0_4_ = *(undefined4 *)&(param_1->Origin).field0_0x0;
  local_a8._4_4_ = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 4);
  local_a8._8_4_ = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 8);
  local_a8._12_4_ = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0xc);
  local_a8._16_4_ = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0x10);
  local_a8._20_4_ = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0x14);
  local_a8._24_4_ = *(undefined4 *)&(param_1->Rotation).field0_0x0;
  local_a8._28_4_ = *(undefined4 *)((longlong)&(param_1->Rotation).field0_0x0 + 4);
  dVar4 = (param_1->Rotation).field0_0x0._s_0.X;
  pdVar1 = &(param_1->Rotation).field0_0x0._s_0.Y;
  local_88[0]._0_4_ = *(undefined4 *)pdVar1;
  local_88[0]._4_4_ = *(undefined4 *)((longlong)&(param_1->Rotation).field0_0x0 + 0xc);
  dVar3 = *pdVar1;
  pdVar1 = &(param_1->Rotation).field0_0x0._s_0.Z;
  local_88[0]._8_4_ = *(undefined4 *)pdVar1;
  local_88[0]._12_4_ = *(undefined4 *)((longlong)&(param_1->Rotation).field0_0x0 + 0x14);
  dVar2 = *pdVar1;
  local_88[0]._16_8_ = (param_1->Rotation).field0_0x0._s_0.W;
  if ((this->bHaveBrushAlpha != false) &&
     (((this->AlphaProperties).field0_0x0.DebugPtr)->RotationAngle != 0.0)) {
    dVar2 = dVar2 + dVar2;
    __libm_sse2_sincos_();
    local_c8._s_0.Y =
         (dVar2 * dVar3 - (dVar4 + dVar4) * (double)local_88[0]._16_8_) * extraout_XMM0_Qa;
    local_c8._s_0.X =
         ((dVar3 + dVar3) * (double)local_88[0]._16_8_ + dVar2 * dVar4) * extraout_XMM0_Qa;
    local_c8._s_0.Z =
         (__real_3ff0000000000000 - ((dVar3 + dVar3) * dVar3 + (dVar4 + dVar4) * dVar4)) *
         extraout_XMM0_Qa;
    UE::Geometry::TFrame3<double>::Rotate
              ((TFrame3<double> *)local_a8,(TQuaternion<double> *)&local_c8._s_0);
  }
  *(undefined4 *)&this->field_0x630 = local_a8._0_4_;
  *(undefined4 *)&this->field_0x634 = local_a8._4_4_;
  *(undefined4 *)&this->field_0x638 = local_a8._8_4_;
  *(undefined4 *)&this->field_0x63c = local_a8._12_4_;
  *(undefined4 *)&this->field_0x668 = local_a8._0_4_;
  *(undefined4 *)&this->field_0x66c = local_a8._4_4_;
  *(undefined4 *)&this->field_0x670 = local_a8._8_4_;
  *(undefined4 *)&this->field_0x674 = local_a8._12_4_;
  *(undefined4 *)&this->field_0x640 = local_a8._16_4_;
  *(undefined4 *)&this->field_0x644 = local_a8._20_4_;
  *(undefined4 *)&this->field_0x648 = local_a8._24_4_;
  *(undefined4 *)&this->field_0x64c = local_a8._28_4_;
  *(undefined4 *)&this->field_0x678 = local_a8._16_4_;
  *(undefined4 *)&this->field_0x67c = local_a8._20_4_;
  *(undefined4 *)&this->field_0x680 = local_a8._24_4_;
  *(undefined4 *)&this->field_0x684 = local_a8._28_4_;
  dVar2 = __real_3e45798ee2308c3a;
  *(undefined4 *)&this->field_0x650 = local_88[0]._0_4_;
  *(undefined4 *)&this->field_0x654 = local_88[0]._4_4_;
  *(undefined4 *)&this->field_0x658 = local_88[0]._8_4_;
  *(undefined4 *)&this->field_0x65c = local_88[0]._12_4_;
  *(undefined4 *)&this->field_0x688 = local_88[0]._0_4_;
  *(undefined4 *)&this->field_0x68c = local_88[0]._4_4_;
  *(undefined4 *)&this->field_0x690 = local_88[0]._8_4_;
  *(undefined4 *)&this->field_0x694 = local_88[0]._12_4_;
  *(undefined8 *)&this->field_0x660 = local_88[0]._s_0.Z;
  *(undefined8 *)&this->field_0x698 = local_88[0]._s_0.Z;
  pTVar5 = UE::Geometry::TTransformSRT3<double>::InverseUnsafe
                     ((TTransformSRT3<double> *)&this->field_0x1f0,
                      (TTransformSRT3<double> *)local_a8,dVar2);
  UE::Geometry::TFrame3<double>::Transform((TFrame3<double> *)&this->field_0x668,pTVar5);
  return;
}

// UpdateROI @ 14cd38480

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMeshVertexSculptTool::UpdateROI(UMeshVertexSculptTool *this,TFrame3<double> *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 local_res8;
  undefined1 local_48 [16];
  TArrayView<std::nullptr_t,int> local_38;
  undefined1 local_28 [16];
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1001,"VtxSculptTool_UpdateROI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x3e9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1001);
  }
  UpdateRangeQueryTriBuffer(this,param_1);
  local_res8 = (**(code **)(*(longlong *)this + 0x440))(this);
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId971,"DynamicMeshSculptTool_UpdateROI_4ROI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x3cb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId971);
  }
  iVar1 = (this->VertexROI).ArrayNum;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ROIPositionBuffer,iVar1,No);
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ROIPrevPositionBuffer,iVar1,No);
  local_48._8_8_ = &local_res8;
  local_38.DataPtr = (void **)0x0;
  local_38.ArrayNum = 0;
  local_28._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshVertexSculptTool::PrepROIVertPositionBuffers'::__l2::<lambda_1>,void,int>
       ::Call;
  local_28._8_8_ = local_48;
  local_48._0_8_ = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)local_28,
             local_res8._0_1_,None,&local_38);
  if (this->bApplySymmetry != false) {
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->SymmetricROIPositionBuffer,iVar1,No);
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->SymmetricROIPrevPositionBuffer,iVar1,No);
    local_28._0_8_ = &local_res8;
    local_38.DataPtr = (void **)0x0;
    local_48._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UMeshVertexSculptTool::PrepROIVertPositionBuffers'::__l5::<lambda_2>,void,int>
         ::Call;
    local_48._8_8_ = local_28;
    local_38.ArrayNum = 0;
    local_28._8_8_ = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)local_48,
               local_res8._0_1_,None,&local_38);
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateROI @ 14cd386a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMeshVertexSculptTool::UpdateROI(UMeshVertexSculptTool *this,TVector<double> *param_1)

{
  TVector<double>_u_0 local_48;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = ___xmm_3ff00000000000000000000000000000;
  uStack_18 = _UNK_15061cbc8;
  UpdateROI(this,(TFrame3<double> *)&local_48._s_0);
  return;
}

// UpdateRangeQueryTriBuffer @ 14cd386f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMeshVertexSculptTool::UpdateRangeQueryTriBuffer
          (UMeshVertexSculptTool *this,TFrame3<double> *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  EMeshVertexSculptBrushFilterType EVar6;
  code *pcVar7;
  long64 *plVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined **ppuVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  double dVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  undefined **ppuVar23;
  undefined **ppuVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  UMeshVertexSculptTool *pUVar27;
  undefined4 *puVar28;
  char cVar29;
  bool bVar30;
  byte bVar31;
  int iVar32;
  longlong *plVar33;
  TVector<double>_u_0 *pTVar34;
  undefined ***pppuVar35;
  undefined8 uVar36;
  ulonglong uVar37;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  ForElementType<FSetElementId> FVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  FScriptContainerElement *pFVar45;
  uint uVar46;
  FScriptContainerElement *pFVar47;
  ForElementType<FSetElementId> FVar48;
  longlong lVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  ulonglong uVar53;
  bool bVar54;
  undefined4 uVar55;
  double dVar56;
  undefined4 uVar57;
  undefined **ppuVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  float fVar63;
  undefined4 uVar64;
  undefined1 auStackY_528 [32];
  <lambda_1> local_4d8;
  int local_4d0 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_4c8;
  FDynamicMesh3 *local_4b8;
  int local_4b0 [2];
  uint local_4a8 [2];
  undefined **local_4a0;
  undefined8 local_498;
  uint local_490 [2];
  undefined8 local_488;
  FScriptContainerElement *local_480;
  undefined1 local_478 [4];
  undefined4 local_474;
  int local_470 [2];
  longlong local_468;
  double local_460;
  double dStack_458;
  undefined4 local_450;
  undefined4 uStack_44c;
  FScriptContainerElement *local_448;
  undefined1 local_440 [16];
  undefined **local_430;
  undefined4 local_428;
  undefined4 uStack_424;
  undefined4 uStack_420;
  undefined4 uStack_41c;
  undefined8 local_418;
  UMeshVertexSculptTool *local_410;
  UMeshVertexSculptTool *local_408;
  undefined8 local_400;
  undefined4 local_3f8;
  FDynamicMesh3 *local_3f0;
  undefined1 local_3e8 [8];
  double local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  code *local_3c0;
  UMeshVertexSculptTool **local_3b8;
  code *local_3b0;
  UMeshVertexSculptTool **local_3a8;
  code *local_3a0;
  UMeshVertexSculptTool **local_398;
  TArrayView<std::nullptr_t,int> local_390;
  UMeshVertexSculptTool *local_380;
  undefined4 *local_378;
  int *local_370;
  FDynamicMesh3 **local_368;
  code **local_360;
  FDynamicMesh3 *local_358;
  FScriptContainerElement *pFStack_350;
  double dStack_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined **ppuStack_338;
  undefined1 local_330 [16];
  float fStack_320;
  undefined4 uStack_31c;
  TVector<double>_u_0 local_318;
  undefined8 local_300;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined1 local_2f0 [16];
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined **ppuStack_2d8;
  double dStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined **ppuStack_2c0;
  undefined **local_2b8;
  undefined **ppuStack_2b0;
  undefined **local_2a8;
  undefined **ppuStack_2a0;
  undefined1 local_298 [16];
  undefined8 local_288;
  FScriptContainerElement *pFStack_280;
  undefined1 local_278 [16];
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  double local_248;
  TVector<double> local_240;
  code *local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  longlong *plStack_200;
  code *local_1f8;
  undefined8 uStack_1f0;
  undefined **local_1e8;
  UMeshVertexSculptTool *pUStack_1e0;
  undefined4 *local_1d8;
  undefined ***pppuStack_1d0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_1c8;
  code *local_178;
  undefined8 uStack_170;
  undefined **local_168;
  undefined1 auStack_160 [16];
  undefined ***pppuStack_150;
  code *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  longlong *plStack_110;
  code *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  longlong *plStack_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_528;
  cVar29 = (**(code **)(*(longlong *)this + 0x6e8))();
  if ((cVar29 != '\0') && (*(int *)&this->field_0x500 == -1)) {
    WaitForPendingStampUpdateConst(this);
    (this->VertexROI).ArrayNum = 0;
    if ((this->VertexROI).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->VertexROI).AllocatorInstance,0,&(this->VertexROI).ArrayMax);
    }
    (this->TriangleROIArray).ArrayNum = 0;
    if ((this->TriangleROIArray).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->TriangleROIArray).AllocatorInstance,0,
                 &(this->TriangleROIArray).ArrayMax);
    }
    (this->SymmetricVertexROI).ArrayNum = 0;
    if (-1 < (this->SymmetricVertexROI).ArrayMax) {
      return;
    }
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SymmetricVertexROI).AllocatorInstance,0,
               &(this->SymmetricVertexROI).ArrayMax);
    return;
  }
  local_4b8 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this + 0x440))(this);
  local_428 = *(undefined4 *)&(param_1->Origin).field0_0x0;
  uStack_424 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 4);
  uStack_420 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 8);
  uStack_41c = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0xc);
  local_418 = (undefined **)(param_1->Origin).field0_0x0._s_0.Z;
  pcVar7 = *(code **)(*(longlong *)this + 0x4a0);
  dVar18 = (double)(**(code **)(*(longlong *)this + 0x4a0))(this);
  dVar56 = (double)(*pcVar7)(this);
  local_1e8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshVertexSculptTool::UpdateRangeQueryTriBuffer'::`2'::<lambda_1>,0,0>
               ::_vftable_;
  local_1f8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshVertexSculptTool::UpdateRangeQueryTriBuffer'::__l2::<lambda_1>,void>
              ::Call;
  uVar53 = 0;
  iVar39 = 0;
  local_3d8 = local_4b8;
  pppuStack_1d0 = (undefined ***)0x0;
  fVar63 = (float)(dVar18 * dVar56);
  local_228 = (code *)0x0;
  uStack_3d0 = &local_428;
  pUStack_1e0 = this;
  local_1d8 = &local_428;
  plStack_200 = FMemory::Malloc(0x20,8);
  *plStack_200 = (longlong)
                 &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMeshVertexSculptTool::UpdateRangeQueryTriBuffer'::`2'::<lambda_2>,0,1>
                  ::_vftable_;
  *(undefined4 *)(plStack_200 + 1) = (undefined4)local_3d8;
  *(undefined4 *)((longlong)plStack_200 + 0xc) = local_3d8._4_4_;
  *(undefined4 *)(plStack_200 + 2) = (undefined4)uStack_3d0;
  *(undefined4 *)((longlong)plStack_200 + 0x14) = uStack_3d0._4_4_;
  plStack_200[3] = CONCAT44(local_3c8._4_4_,fVar63);
  if (plStack_200 + 1 != (longlong *)0x0) {
    local_228 = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshVertexSculptTool::UpdateRangeQueryTriBuffer'::__l2::<lambda_2>,bool,int>
                ::Call;
  }
  local_3c8 = CONCAT44(local_3c8._4_4_,fVar63);
  plVar33 = (longlong *)(**(code **)(*(longlong *)this + 0x478))(this);
  if (((longlong *)*plVar33 != (longlong *)0x0) &&
     ((iVar32 = (**(code **)(*(longlong *)*plVar33 + 0x38))(), iVar32 == 1 ||
      (iVar32 = (**(code **)(*(longlong *)*plVar33 + 0x38))(), iVar32 == 2)))) {
    dVar56 = (double)(**(code **)(*(longlong *)this + 0x4a0))(this);
    ppuVar23 = __real_7fefffffffffffff;
    local_4a0 = __real_7fefffffffffffff;
    local_480 = (FScriptContainerElement *)dVar56;
    iVar32 = (**(code **)(*(longlong *)*plVar33 + 0x38))();
    if (iVar32 == 1) {
      dVar18 = (param_1->Rotation).field0_0x0._s_0.Y;
      dVar3 = (param_1->Rotation).field0_0x0._s_0.X;
      local_440._0_8_ = CONCAT44(uStack_424,local_428);
      local_440._8_8_ = CONCAT44(uStack_41c,uStack_420);
      dVar56 = (param_1->Rotation).field0_0x0._s_0.Z;
      dVar4 = (param_1->Rotation).field0_0x0._s_0.W;
      dVar56 = dVar56 + dVar56;
      local_430 = local_418;
      local_358 = local_4b8;
      local_138 = (code *)0x0;
      ppuVar20 = (undefined **)(dVar4 * (dVar18 + dVar18) + dVar56 * dVar3);
      dVar56 = dVar56 * dVar18 - dVar4 * (dVar3 + dVar3);
      local_488 = (undefined **)
                  (__real_3ff0000000000000 - ((dVar18 + dVar18) * dVar18 + (dVar3 + dVar3) * dVar3))
      ;
      uStack_340 = (undefined4)local_418;
      uStack_33c = local_418._4_4_;
      local_330._8_4_ = (int)local_488;
      local_330._0_8_ = dVar56;
      local_330._12_4_ = (int)((ulonglong)local_488 >> 0x20);
      _local_450 = local_488;
      pFStack_350 = (FScriptContainerElement *)local_440._0_8_;
      dStack_348 = (double)local_440._8_8_;
      ppuStack_338 = ppuVar20;
      plVar33 = FMemory::Malloc(0x48,8);
      plStack_110 = plStack_200;
      uVar62 = uStack_20c;
      uVar61 = uStack_210;
      uVar60 = uStack_214;
      uVar59 = local_218;
      uVar36 = uStack_220;
      pcVar7 = local_228;
      *plVar33 = (longlong)
                 &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMeshVertexSculptTool::UpdateRangeQueryTriBuffer'::`11'::<lambda_3>,0,1>
                  ::_vftable_;
      plVar33[1] = (longlong)local_358;
      plVar33[2] = (longlong)pFStack_350;
      plVar33[3] = (longlong)dStack_348;
      plVar33[4] = CONCAT44(uStack_33c,uStack_340);
      plVar33[5] = (longlong)ppuStack_338;
      plVar33[6] = local_330._0_8_;
      *(undefined4 *)(plVar33 + 7) = local_330._8_4_;
      *(undefined4 *)((longlong)plVar33 + 0x3c) = local_330._12_4_;
      *(float *)(plVar33 + 8) = fVar63;
      *(undefined4 *)((longlong)plVar33 + 0x44) = uStack_31c;
      if (plVar33 + 1 != (longlong *)0x0) {
        local_138 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMeshVertexSculptTool::UpdateRangeQueryTriBuffer'::__l11::<lambda_3>,bool,int>
                    ::Call;
      }
      local_228 = local_138;
      uStack_220 = uStack_130;
      local_208 = local_118;
      uStack_204 = uStack_114;
      plStack_200 = plVar33;
      local_138 = pcVar7;
      uStack_130 = uVar36;
      local_218 = local_128;
      uStack_214 = uStack_124;
      uStack_210 = uStack_120;
      uStack_20c = uStack_11c;
      local_128 = uVar59;
      uStack_124 = uVar60;
      uStack_120 = uVar61;
      uStack_11c = uVar62;
      fStack_320 = fVar63;
      if (pcVar7 != (code *)0x0) {
        plVar33 = (longlong *)&local_128;
        if (plStack_110 != (longlong *)0x0) {
          plVar33 = plStack_110;
        }
        (**(code **)(*plVar33 + 0x10))();
      }
      dStack_458._0_4_ = SUB84(dVar56,0);
      local_460 = (double)ppuVar20;
      dStack_458._4_4_ = (int)((ulonglong)dVar56 >> 0x20);
      ppuStack_2b0 = ppuVar20;
      pFVar45 = (FScriptContainerElement *)local_440._0_8_;
      dVar3 = (double)local_440._8_8_;
      ppuVar20 = local_430;
    }
    else {
      if (*(longlong *)&this->field_0x130 == 0) {
        pTVar34 = &local_318;
        local_318._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_318._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_318._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar34 = &UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
                             ((TTransformSRT3<double> *)&this->field_0x1f0,&local_240,
                              (TVector<double> *)(*(longlong *)&this->field_0x130 + 0xb8))->
                   field0_0x0;
      }
      dVar4 = (((TVector<double>_u_0 *)&(pTVar34->_s_0).X)->_s_0).X;
      dVar3 = (pTVar34->_s_0).Y;
      dVar18 = (pTVar34->_s_0).Z;
      _local_450 = (double)local_418 - dVar18;
      dStack_458 = (double)CONCAT44(uStack_41c,uStack_420) - dVar3;
      local_460 = (double)CONCAT44(uStack_424,local_428) - dVar4;
      local_3e0 = dVar18;
      bVar54 = UE::Math::TVector<double>::Normalize
                         ((TVector<double> *)&local_460,__real_3e45798ee0000000);
      if (bVar54) {
        uVar59 = local_460._0_4_;
        uVar60 = local_460._4_4_;
        uVar61 = dStack_458._0_4_;
        uVar62 = dStack_458._4_4_;
      }
      else {
        local_460._4_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_;
        local_460._0_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_;
        dStack_458._0_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_;
        dStack_458._4_4_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_;
        _local_450 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
        uVar59 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._0_4_;
        uVar60 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._4_4_;
        uVar61 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._8_4_;
        uVar62 = UE::Math::TVector<double>::ZAxisVector.field0_0x0._12_4_;
      }
      dVar5 = this->InitialBoundsMaxDim;
      uVar55 = SUB84(dVar5,0);
      uVar57 = (undefined4)((ulonglong)dVar5 >> 0x20);
      if (dVar5 <= __real_408f400000000000) {
        uVar55 = SUB84(__real_408f400000000000,0);
        uVar57 = (undefined4)((ulonglong)__real_408f400000000000 >> 0x20);
      }
      local_288 = local_4b8;
      local_108 = (code *)0x0;
      local_4a0 = (undefined **)CONCAT44(uVar57,uVar55);
      dVar5 = (double)CONCAT44(uVar57,uVar55) * __real_3fe0000000000000;
      pFVar45 = (FScriptContainerElement *)((double)CONCAT44(uVar60,uVar59) * dVar5 + dVar4);
      local_488 = (undefined **)_local_450;
      dVar3 = (double)CONCAT44(uVar62,uVar61) * dVar5 + dVar3;
      ppuVar20 = (undefined **)((double)_local_450 * dVar5 + dVar18);
      uVar64 = (undefined4)((ulonglong)ppuVar20 >> 0x20);
      local_268 = uVar59;
      uStack_264 = uVar60;
      uStack_260 = uVar61;
      uStack_25c = uVar62;
      plVar33 = FMemory::Malloc(0x50,8);
      plStack_e0 = plStack_200;
      uVar26 = uStack_20c;
      uVar25 = uStack_210;
      uVar57 = uStack_214;
      uVar55 = local_218;
      uVar36 = uStack_220;
      pcVar7 = local_228;
      local_248 = dVar56;
      *plVar33 = (longlong)
                 &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMeshVertexSculptTool::UpdateRangeQueryTriBuffer'::`13'::<lambda_4>,0,1>
                  ::_vftable_;
      *(undefined4 *)(plVar33 + 1) = (undefined4)local_288;
      *(undefined4 *)((longlong)plVar33 + 0xc) = local_288._4_4_;
      plVar33[2] = (longlong)pFVar45;
      auVar14._8_4_ = (int)ppuVar20;
      auVar14._0_8_ = dVar3;
      auVar14._12_4_ = uVar64;
      *(undefined1 (*) [16])(plVar33 + 3) = auVar14;
      *(undefined4 *)(plVar33 + 5) = uVar59;
      *(undefined4 *)((longlong)plVar33 + 0x2c) = uVar60;
      *(undefined4 *)(plVar33 + 6) = uVar61;
      *(undefined4 *)((longlong)plVar33 + 0x34) = uVar62;
      pFStack_280 = pFVar45;
      local_278._8_4_ = (int)ppuVar20;
      local_278._0_8_ = dVar3;
      local_278._12_4_ = uVar64;
      uStack_24c = (undefined4)((ulonglong)local_4a0 >> 0x20);
      *(undefined4 *)(plVar33 + 7) = local_450;
      *(undefined4 *)((longlong)plVar33 + 0x3c) = uStack_44c;
      *(int *)(plVar33 + 8) = (int)local_4a0;
      *(undefined4 *)((longlong)plVar33 + 0x44) = uStack_24c;
      plVar33[9] = (longlong)dVar56;
      if (plVar33 + 1 != (longlong *)0x0) {
        local_108 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMeshVertexSculptTool::UpdateRangeQueryTriBuffer'::__l13::<lambda_4>,bool,int>
                    ::Call;
      }
      local_218 = local_f8;
      uStack_214 = uStack_f4;
      uStack_210 = uStack_f0;
      uStack_20c = uStack_ec;
      local_f8 = uVar55;
      uStack_f4 = uVar57;
      uStack_f0 = uVar25;
      uStack_ec = uVar26;
      local_258 = local_450;
      uStack_254 = uStack_44c;
      uStack_250 = (int)local_4a0;
      local_228 = local_108;
      uStack_220 = uStack_100;
      local_208 = local_e8;
      uStack_204 = uStack_e4;
      plStack_200 = plVar33;
      local_108 = pcVar7;
      uStack_100 = uVar36;
      ppuStack_2b0 = (undefined **)CONCAT44(uVar60,uVar59);
      dVar56 = (double)CONCAT44(uVar62,uVar61);
      if (pcVar7 != (code *)0x0) {
        plVar33 = (longlong *)&local_f8;
        if (plStack_e0 != (longlong *)0x0) {
          plVar33 = plStack_e0;
        }
        (**(code **)(*plVar33 + 0x10))();
        ppuStack_2b0 = (undefined **)CONCAT44(uVar60,uVar59);
        dVar56 = (double)CONCAT44(uVar62,uVar61);
      }
    }
    ppuVar24 = local_4a0;
    pppuStack_150 = (undefined ***)_local_450;
    dVar18 = (double)local_4a0 * __real_3fe0000000000000;
    auStack_160._8_4_ = SUB84(dVar56,0);
    auStack_160._0_8_ = ppuStack_2b0;
    auStack_160._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
    ppuVar17 = (undefined **)((double)pFVar45 + (double)ppuStack_2b0 * dVar18);
    ppuVar15 = (undefined **)((double)ppuVar20 + (double)local_488 * dVar18);
    ppuVar12 = (undefined **)(dVar3 + dVar56 * dVar18);
    ppuVar58 = ppuVar23;
    if ((double)ppuVar17 < (double)ppuVar23) {
      ppuVar58 = ppuVar17;
    }
    ppuVar22 = __real_ffefffffffffffff;
    if ((double)__real_ffefffffffffffff < (double)ppuVar17) {
      ppuVar22 = ppuVar17;
    }
    ppuVar17 = ppuVar23;
    if ((double)ppuVar12 < (double)ppuVar23) {
      ppuVar17 = ppuVar12;
    }
    ppuVar21 = __real_ffefffffffffffff;
    if ((double)__real_ffefffffffffffff < (double)ppuVar12) {
      ppuVar21 = ppuVar12;
    }
    if ((double)ppuVar15 < (double)ppuVar23) {
      ppuVar23 = ppuVar15;
    }
    ppuVar12 = __real_ffefffffffffffff;
    if ((double)__real_ffefffffffffffff < (double)ppuVar15) {
      ppuVar12 = ppuVar15;
    }
    ppuVar19 = (undefined **)((double)ppuVar20 - (double)local_488 * dVar18);
    ppuVar16 = (undefined **)((double)pFVar45 - (double)ppuStack_2b0 * dVar18);
    ppuVar15 = (undefined **)(dVar3 - dVar56 * dVar18);
    if ((double)ppuVar16 < (double)ppuVar58) {
      ppuVar58 = ppuVar16;
    }
    if ((double)ppuVar22 < (double)ppuVar16) {
      ppuVar22 = ppuVar16;
    }
    if ((double)ppuVar15 < (double)ppuVar17) {
      ppuVar17 = ppuVar15;
    }
    if ((double)ppuVar21 < (double)ppuVar15) {
      ppuVar21 = ppuVar15;
    }
    if ((double)ppuVar19 < (double)ppuVar23) {
      ppuVar23 = ppuVar19;
    }
    if ((double)ppuVar12 < (double)ppuVar19) {
      ppuVar12 = ppuVar19;
    }
    local_488 = (undefined **)((double)ppuVar22 + (double)local_480);
    auVar10._8_4_ = SUB84(dVar3,0);
    auVar10._0_8_ = pFVar45;
    auVar10._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    local_2c8 = SUB84(pFVar45,0);
    uStack_2c4 = (undefined4)((ulonglong)pFVar45 >> 0x20);
    ppuStack_2c0 = auVar10._8_8_;
    dVar18 = (double)ppuVar17 - (double)local_480;
    uVar59 = SUB84((double)ppuVar23 - (double)local_480,0);
    uVar60 = (undefined4)((ulonglong)((double)ppuVar23 - (double)local_480) >> 0x20);
    ppuVar21 = (undefined **)((double)ppuVar21 + (double)local_480);
    local_298._8_4_ = (int)local_4a0;
    local_298._0_8_ = local_480;
    local_298._12_4_ = (int)((ulonglong)local_4a0 >> 0x20);
    local_178 = (code *)0x0;
    dVar56 = (double)ppuVar12 + (double)local_480;
    local_2a8 = (undefined **)auStack_160._8_8_;
    ppuStack_2a0 = (undefined **)_local_450;
    local_480 = (FScriptContainerElement *)((double)ppuVar58 - (double)local_480);
    local_300 = this;
    local_2b8 = ppuVar20;
    local_168 = ppuVar20;
    pppuVar35 = FMemory::Malloc(0x80,8);
    pppuStack_150 = pppuStack_1d0;
    puVar28 = local_1d8;
    pUVar27 = pUStack_1e0;
    ppuVar23 = local_1e8;
    uVar36 = uStack_1f0;
    pcVar7 = local_1f8;
    uStack_2f4 = (undefined4)((ulonglong)local_480 >> 0x20);
    *pppuVar35 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMeshVertexSculptTool::UpdateRangeQueryTriBuffer'::`8'::<lambda_6>,0,1>
                  ::_vftable_;
    *(undefined4 *)(pppuVar35 + 1) = (undefined4)local_300;
    *(undefined4 *)((longlong)pppuVar35 + 0xc) = local_300._4_4_;
    *(int *)(pppuVar35 + 2) = (int)local_480;
    *(undefined4 *)((longlong)pppuVar35 + 0x14) = uStack_2f4;
    uStack_2f8 = (int)local_480;
    local_2e0 = (undefined4)local_488;
    uStack_2dc = local_488._4_4_;
    ppuStack_2d8 = ppuVar21;
    auVar13._8_4_ = uVar59;
    auVar13._0_8_ = dVar18;
    auVar13._12_4_ = uVar60;
    *(undefined1 (*) [16])(pppuVar35 + 3) = auVar13;
    *(undefined4 *)(pppuVar35 + 5) = (undefined4)local_488;
    *(undefined4 *)((longlong)pppuVar35 + 0x2c) = local_488._4_4_;
    pppuVar35[6] = ppuVar21;
    local_2f0._8_4_ = uVar59;
    local_2f0._0_8_ = dVar18;
    local_2f0._12_4_ = uVar60;
    auVar11._8_4_ = local_2c8;
    auVar11._0_8_ = dVar56;
    auVar11._12_4_ = uStack_2c4;
    *(undefined1 (*) [16])(pppuVar35 + 7) = auVar11;
    dStack_2d0 = dVar56;
    pppuVar35[9] = ppuStack_2c0;
    pppuVar35[10] = local_2b8;
    pppuVar35[0xb] = ppuStack_2b0;
    pppuVar35[0xc] = local_2a8;
    pppuVar35[0xd] = ppuStack_2a0;
    pppuVar35[0xe] = (undefined **)local_298._0_8_;
    pppuVar35[0xf] = ppuVar24;
    if (pppuVar35 + 1 != (undefined ***)0x0) {
      local_178 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMeshVertexSculptTool::UpdateRangeQueryTriBuffer'::__l8::<lambda_6>,void>
                  ::Call;
    }
    local_1f8 = local_178;
    uStack_1f0 = uStack_170;
    local_1d8 = auStack_160._8_8_;
    pppuStack_1d0 = pppuVar35;
    local_1e8 = local_168;
    pUStack_1e0 = auStack_160._0_8_;
    local_178 = pcVar7;
    uStack_170 = uVar36;
    local_168 = ppuVar23;
    auStack_160._8_8_ = puVar28;
    auStack_160._0_8_ = pUVar27;
    if (pcVar7 != (code *)0x0) {
      pppuVar35 = &local_168;
      if (pppuStack_150 != (undefined ***)0x0) {
        pppuVar35 = pppuStack_150;
      }
      (*(code *)(*pppuVar35)[2])();
    }
  }
  uVar52 = 0;
  (this->RangeQueryTriBuffer).ArrayNum = 0;
  if ((this->RangeQueryTriBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->RangeQueryTriBuffer).AllocatorInstance,0,
               &(this->RangeQueryTriBuffer).ArrayMax);
  }
  bVar54 = -1 < CpuChannel->Enabled;
  if (bVar54) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId774,"VtxSculptTool_UpdateROI_RangeQuery",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x306);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId774);
  }
  UE::Core::Private::Function::CheckCallable(local_1f8);
  pcVar7 = local_1f8;
  pppuVar35 = &local_1e8;
  if (pppuStack_1d0 != (undefined ***)0x0) {
    pppuVar35 = pppuStack_1d0;
  }
  uVar36 = (*(code *)(*pppuVar35)[1])();
  (*pcVar7)(uVar36);
  if (bVar54) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  local_474 = 0xffffffff;
  local_470[0] = -1;
  EVar6 = ((this->SculptProperties).field0_0x0.DebugPtr)->BrushFilter;
  if (EVar6 == Component) {
    uVar50 = this->InitialStrokeTriangleID;
    if (((int)uVar50 < 0) || (iVar32 = (this->TriangleComponentIDs).ArrayNum, iVar32 < (int)uVar50))
    {
      local_474 = 0xffffffff;
    }
    else {
      uVar46 = uVar52;
      if ((int)uVar50 < iVar32) {
        uVar46 = ~uVar50 >> 0x1f;
      }
      if ((uVar46 == 0) &&
         (bVar54 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar54)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_474 = *(undefined4 *)
                   ((this->TriangleComponentIDs).AllocatorInstance.Data + (longlong)(int)uVar50 * 4)
      ;
    }
  }
  else if (EVar6 == PolyGroup) {
    uVar50 = this->InitialStrokeTriangleID;
    if ((((int)uVar50 < 0) ||
        ((int)((local_4b8->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
              (local_4b8->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)uVar50)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((local_4b8->TriangleRefCounts).RefCounts.Blocks.
                                       AllocatorInstance.Data + (ulonglong)(uVar50 >> 9) * 8) +
                                    (ulonglong)(uVar50 & 0x1ff) * 2) - 1U))) {
      local_470[0] = -1;
    }
    else {
      local_470[0] = UE::Geometry::FPolygroupSet::GetGroup((this->ActiveGroupSet).Ptr,uVar50);
    }
  }
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TriangleROIInBuf,(this->RangeQueryTriBuffer).ArrayNum,No);
  bVar54 = -1 < CpuChannel->Enabled;
  if (bVar54) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId799,"DynamicMeshSculptTool_UpdateROI_TriVerts",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,799);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId799);
  }
  local_378 = &local_474;
  local_370 = local_470;
  local_368 = &local_4b8;
  local_390.DataPtr = (void **)0x0;
  local_360 = &local_228;
  local_390.ArrayNum = 0;
  local_3c0 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshVertexSculptTool::UpdateRangeQueryTriBuffer'::__l25::<lambda_7>,void,int>
              ::Call;
  local_3b8 = &local_380;
  local_380 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->RangeQueryTriBuffer).ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_3c0,local_4d8,None,&local_390);
  if (bVar54) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar54 = -1 < CpuChannel->Enabled;
  if (bVar54) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId833,"DynamicMeshSculptTool_UpdateROI_3Collect",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x341);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId833);
  }
  UE::Geometry::FUniqueIndexSet::Initialize
            (&this->VertexROIBuilder,
             (local_4b8->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (local_4b8->VertexRefCounts).RefCounts.CurBlockUsed,0);
  UE::Geometry::FUniqueIndexSet::Initialize
            (&this->TriangleROIBuilder,
             (local_4b8->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (local_4b8->TriangleRefCounts).RefCounts.CurBlockUsed,0);
  local_448 = (FScriptContainerElement *)(longlong)(this->RangeQueryTriBuffer).ArrayNum;
  if (0 < (longlong)local_448) {
    local_488 = (undefined **)0x0;
    uVar44 = uVar53;
    uVar43 = uVar53;
    do {
      dVar56 = (double)local_488;
      uVar51 = (uint)uVar43;
      uVar46 = ~uVar51 >> 0x1f;
      uVar50 = uVar52;
      if ((int)uVar51 < (this->RangeQueryTriBuffer).ArrayNum) {
        uVar50 = uVar46;
      }
      if ((uVar50 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar32 = *(int *)((this->RangeQueryTriBuffer).AllocatorInstance.Data + (longlong)dVar56 * 4);
      if (iVar32 != -1) {
        uVar50 = uVar52;
        if ((int)uVar51 < (this->RangeQueryTriBuffer).ArrayNum) {
          uVar50 = uVar46;
        }
        if ((uVar50 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar50 = *(uint *)((this->RangeQueryTriBuffer).AllocatorInstance.Data +
                          (longlong)local_488 * 4);
        local_4a0 = (undefined **)((ulonglong)(uVar50 & 0x1ff) * 3);
        local_468 = *(longlong *)
                     ((local_4b8->Triangles).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar50 >> 9) * 8);
        uVar50 = 0;
        if ((int)uVar51 < (this->TriangleROIInBuf).ArrayNum) {
          uVar50 = uVar46;
        }
        if ((uVar50 == 0) &&
           (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar30)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_480 = (this->TriangleROIInBuf).AllocatorInstance.Data;
        iVar40 = 0;
        if (*(int *)(local_480 + uVar44) != 0) {
          local_4d0[0] = *(int *)(local_468 + (longlong)local_4a0 * 4);
          bVar31 = (byte)local_4d0[0] & 0x3f;
          iVar40 = local_4d0[0];
          if (local_4d0[0] < 0) {
            iVar40 = local_4d0[0] + 0x3f;
            bVar31 = bVar31 - 0x40;
          }
          plVar8 = (this->VertexROIBuilder).Bits;
          uVar37 = 1L << (bVar31 & 0x3f);
          uVar43 = plVar8[iVar40 >> 6];
          if ((uVar37 & uVar43) == 0) {
            pTVar2 = &(this->VertexROIBuilder).Values;
            plVar8[iVar40 >> 6] = uVar37 | uVar43;
            pFVar45 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar45 <= (FScriptContainerElement *)local_4d0) &&
                ((FScriptContainerElement *)local_4d0 <
                 pFVar45 + (longlong)(this->VertexROIBuilder).Values.ArrayMax * 4)) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar30)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar40 = (this->VertexROIBuilder).Values.ArrayNum;
            piVar1 = &(this->VertexROIBuilder).Values.ArrayMax;
            if (iVar40 == *piVar1) {
              iVar40 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->VertexROIBuilder).Values.ArrayNum = iVar40 + 1;
            *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar40 * 4) = local_4d0[0];
          }
          iVar40 = 1;
        }
        if (*(int *)(local_480 + uVar44 + 4) != 0) {
          local_4d0[0] = *(int *)(local_468 + 4 + (longlong)local_4a0 * 4);
          bVar31 = (byte)local_4d0[0] & 0x3f;
          iVar41 = local_4d0[0];
          if (local_4d0[0] < 0) {
            iVar41 = local_4d0[0] + 0x3f;
            bVar31 = bVar31 - 0x40;
          }
          plVar8 = (this->VertexROIBuilder).Bits;
          uVar37 = 1L << (bVar31 & 0x3f);
          uVar43 = plVar8[iVar41 >> 6];
          if ((uVar37 & uVar43) == 0) {
            pTVar2 = &(this->VertexROIBuilder).Values;
            plVar8[iVar41 >> 6] = uVar37 | uVar43;
            pFVar45 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar45 <= (FScriptContainerElement *)local_4d0) &&
                ((FScriptContainerElement *)local_4d0 <
                 pFVar45 + (longlong)(this->VertexROIBuilder).Values.ArrayMax * 4)) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar30)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar41 = (this->VertexROIBuilder).Values.ArrayNum;
            piVar1 = &(this->VertexROIBuilder).Values.ArrayMax;
            if (iVar41 == *piVar1) {
              iVar41 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->VertexROIBuilder).Values.ArrayNum = iVar41 + 1;
            *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar41 * 4) = local_4d0[0];
          }
          iVar40 = iVar40 + 1;
        }
        if (*(int *)(local_480 + uVar44 + 8) != 0) {
          local_4d0[0] = *(int *)(local_468 + 8 + (longlong)local_4a0 * 4);
          bVar31 = (byte)local_4d0[0] & 0x3f;
          iVar41 = local_4d0[0];
          if (local_4d0[0] < 0) {
            iVar41 = local_4d0[0] + 0x3f;
            bVar31 = bVar31 - 0x40;
          }
          plVar8 = (this->VertexROIBuilder).Bits;
          uVar37 = 1L << (bVar31 & 0x3f);
          uVar43 = plVar8[iVar41 >> 6];
          if ((uVar37 & uVar43) == 0) {
            pTVar2 = &(this->VertexROIBuilder).Values;
            plVar8[iVar41 >> 6] = uVar37 | uVar43;
            pFVar45 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar45 <= (FScriptContainerElement *)local_4d0) &&
                ((FScriptContainerElement *)local_4d0 <
                 pFVar45 + (longlong)(this->VertexROIBuilder).Values.ArrayMax * 4)) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar30)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar41 = (this->VertexROIBuilder).Values.ArrayNum;
            piVar1 = &(this->VertexROIBuilder).Values.ArrayMax;
            if (iVar41 == *piVar1) {
              iVar41 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->VertexROIBuilder).Values.ArrayNum = iVar41 + 1;
            *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar41 * 4) = local_4d0[0];
          }
          iVar40 = iVar40 + 1;
        }
        if (iVar40 != 0) {
          bVar31 = (byte)iVar32 & 0x3f;
          iVar40 = iVar32;
          if (iVar32 < 0) {
            iVar40 = iVar32 + 0x3f;
            bVar31 = bVar31 - 0x40;
          }
          plVar8 = (this->TriangleROIBuilder).Bits;
          uVar37 = 1L << (bVar31 & 0x3f);
          uVar43 = plVar8[iVar40 >> 6];
          local_4b0[0] = iVar32;
          if ((uVar43 & uVar37) == 0) {
            pTVar2 = &(this->TriangleROIBuilder).Values;
            plVar8[iVar40 >> 6] = uVar37 | uVar43;
            pFVar45 = (pTVar2->AllocatorInstance).Data;
            if (((pFVar45 <= (FScriptContainerElement *)local_4b0) &&
                ((FScriptContainerElement *)local_4b0 <
                 pFVar45 + (longlong)(this->TriangleROIBuilder).Values.ArrayMax * 4)) &&
               (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar30)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar32 = (this->TriangleROIBuilder).Values.ArrayNum;
            piVar1 = &(this->TriangleROIBuilder).Values.ArrayMax;
            if (iVar32 == *piVar1) {
              iVar32 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->TriangleROIBuilder).Values.ArrayNum = iVar32 + 1;
            *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar32 * 4) = local_4b0[0];
          }
        }
      }
      uVar43 = (ulonglong)(uVar51 + 1);
      local_488 = (undefined **)((longlong)local_488 + 1);
      uVar44 = uVar44 + 0xc;
    } while ((longlong)local_488 < (longlong)local_448);
  }
  cVar29 = (**(code **)(*(longlong *)this + 0x6e8))(this);
  if (cVar29 != '\0') {
    uVar52 = *(uint *)&this->field_0x500;
    if (uVar52 != 0xffffffff) {
      lVar49 = *(longlong *)
                ((local_4b8->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar52 >> 9) * 8
                );
      local_498 = *(undefined8 *)(lVar49 + (ulonglong)(uVar52 & 0x1ff) * 0xc);
      local_490[0] = *(uint *)(lVar49 + 8 + (ulonglong)(uVar52 & 0x1ff) * 0xc);
      local_4c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4c8.ArrayNum = 0;
      local_4c8.ArrayMax = 0;
      if (((ulonglong)
           (this->VertexROIBuilder).Bits
           [(int)((uint)local_498 + ((int)(uint)local_498 >> 0x1f & 0x3fU)) >> 6] >>
           ((uint)local_498 & 0x3f) & 1) != 0) {
        iVar32 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_4c8.AllocatorInstance,&local_4c8.ArrayMax);
        iVar39 = iVar32 + 1;
        local_4c8.ArrayNum = iVar39;
        *(uint *)(local_4c8.AllocatorInstance.Data + (longlong)iVar32 * 4) = (uint)local_498;
      }
      if (((ulonglong)
           (this->VertexROIBuilder).Bits
           [(int)(local_498._4_4_ + ((int)local_498._4_4_ >> 0x1f & 0x3fU)) >> 6] >>
           (local_498._4_4_ & 0x3f) & 1) != 0) {
        iVar32 = iVar39;
        if ((local_4c8.AllocatorInstance.Data <=
             (FScriptContainerElement *)((longlong)&local_498 + 4U)) &&
           ((FScriptContainerElement *)((longlong)&local_498 + 4U) <
            local_4c8.AllocatorInstance.Data + (longlong)local_4c8.ArrayMax * 4)) {
          bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar30) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar32 = local_4c8.ArrayNum;
        }
        if (iVar32 == local_4c8.ArrayMax) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_4c8.AllocatorInstance,&local_4c8.ArrayMax);
        }
        iVar39 = iVar32 + 1;
        local_4c8.ArrayNum = iVar39;
        *(uint *)(local_4c8.AllocatorInstance.Data + (longlong)iVar32 * 4) = local_498._4_4_;
      }
      if (((ulonglong)
           (this->VertexROIBuilder).Bits
           [(int)(local_490[0] + ((int)local_490[0] >> 0x1f & 0x3fU)) >> 6] >> (local_490[0] & 0x3f)
          & 1) != 0) {
        if ((local_4c8.AllocatorInstance.Data <= (FScriptContainerElement *)local_490) &&
           ((FScriptContainerElement *)local_490 <
            local_4c8.AllocatorInstance.Data + (longlong)local_4c8.ArrayMax * 4)) {
          bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar30) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar39 = local_4c8.ArrayNum;
        }
        if (iVar39 == local_4c8.ArrayMax) {
          iVar39 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_4c8.AllocatorInstance,&local_4c8.ArrayMax);
        }
        local_4c8.ArrayNum = iVar39 + 1;
        *(uint *)(local_4c8.AllocatorInstance.Data + (longlong)iVar39 * 4) = local_490[0];
      }
      local_3a8 = &local_410;
      local_1c8.Elements._0_8_ = 0;
      local_3b0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMeshVertexSculptTool::UpdateRangeQueryTriBuffer'::__l41::<lambda_8>,bool,int,int>
                  ::Call;
      local_1c8.Elements._8_8_ = 0;
      local_1c8.Elements._32_8_ = 0;
      local_1c8.Elements._40_4_ = 0;
      local_1c8.Elements._44_4_ = 0x80;
      local_1c8.Elements._48_4_ = 0xffffffff;
      local_1c8.Elements._52_4_ = 0;
      local_1c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_1c8.HashSize = 0;
      local_3f0 = local_4b8;
      local_3e8 = (undefined1  [8])0x0;
      local_3e0 = 0.0;
      local_410 = this;
      UE::Geometry::FMeshConnectedComponents::GrowToConnectedVertices
                (local_4b8,&local_4c8,&local_1c8,(TArray<int,TSizedDefaultAllocator<32>_> *)0x0,
                 (TFunctionRef<bool___cdecl(int,int)> *)&local_3b0);
      pTVar2 = &(this->TriangleROIBuilder).Values;
      pFVar45 = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      iVar39 = (this->TriangleROIBuilder).Values.ArrayNum;
      (this->TriangleROIBuilder).Values.ArrayNum = 0;
      (this->TriangleROIBuilder).Values.ArrayMax = 0;
      local_480 = pFVar45;
      UE::Geometry::FUniqueIndexSet::Initialize
                (&this->TriangleROIBuilder,
                 (local_4b8->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (local_4b8->TriangleRefCounts).RefCounts.CurBlockUsed,0);
      local_448 = pFVar45 + (longlong)iVar39 * 4;
      FVar48 = local_1c8.Hash.SecondaryData;
      lVar49 = local_1c8.Elements._0_8_;
      iVar39 = local_1c8.HashSize;
LAB_14cd39e35:
      if (pFVar45 != local_448) {
        uVar52 = *(uint *)pFVar45;
        lVar9 = *(longlong *)
                 ((local_4b8->Triangles).Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar52 >> 9) * 8);
        local_400 = *(undefined8 *)(lVar9 + (ulonglong)(uVar52 & 0x1ff) * 0xc);
        local_3f8 = *(undefined4 *)(lVar9 + 8 + (ulonglong)(uVar52 & 0x1ff) * 0xc);
        uVar44 = uVar53;
        do {
          uVar50 = *(uint *)((longlong)&local_400 + uVar44 * 4);
          if (local_1c8.Elements._8_4_ != local_1c8.Elements._52_4_) {
            FVar42 = (ForElementType<FSetElementId>)&local_1c8.Hash;
            if (FVar48 != (ForElementType<FSetElementId>)0x0) {
              FVar42 = FVar48;
            }
            for (iVar32 = *(int *)((longlong)FVar42 + (ulonglong)(iVar39 - 1U & uVar50) * 4);
                iVar32 != -1; iVar32 = *(int *)(lVar49 + 4 + (longlong)iVar32 * 0xc)) {
              if (*(uint *)(lVar49 + (longlong)iVar32 * 0xc) == uVar50) {
                bVar31 = (byte)uVar52 & 0x3f;
                uVar50 = uVar52;
                if ((int)uVar52 < 0) {
                  uVar50 = uVar52 + 0x3f;
                  bVar31 = bVar31 - 0x40;
                }
                plVar8 = (this->TriangleROIBuilder).Bits;
                uVar43 = 1L << (bVar31 & 0x3f);
                uVar44 = plVar8[(int)uVar50 >> 6];
                local_4a8[0] = uVar52;
                if ((uVar44 & uVar43) == 0) {
                  plVar8[(int)uVar50 >> 6] = uVar44 | uVar43;
                  pFVar47 = (pTVar2->AllocatorInstance).Data;
                  if (((pFVar47 <= (FScriptContainerElement *)local_4a8) &&
                      ((FScriptContainerElement *)local_4a8 <
                       pFVar47 + (longlong)(this->TriangleROIBuilder).Values.ArrayMax * 4)) &&
                     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar30)) {
                    pcVar7 = (code *)swi(3);
                    (*pcVar7)();
                    return;
                  }
                  iVar39 = (this->TriangleROIBuilder).Values.ArrayNum;
                  if (iVar39 == (this->TriangleROIBuilder).Values.ArrayMax) {
                    iVar39 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x404,&pTVar2->AllocatorInstance,
                                        &(this->TriangleROIBuilder).Values.ArrayMax);
                  }
                  (this->TriangleROIBuilder).Values.ArrayNum = iVar39 + 1;
                  *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar39 * 4) = local_4a8[0];
                  FVar48 = local_1c8.Hash.SecondaryData;
                  lVar49 = local_1c8.Elements._0_8_;
                  iVar39 = local_1c8.HashSize;
                }
                pFVar45 = pFVar45 + 4;
                goto LAB_14cd39e35;
              }
            }
          }
          uVar44 = uVar44 + 1;
        } while ((longlong)uVar44 < 3);
        pFVar45 = pFVar45 + 4;
        goto LAB_14cd39e35;
      }
      pTVar38 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                          (&local_1c8,(TArray<int,TSizedDefaultAllocator<32>_> *)local_440);
      pTVar2 = &this->VertexROI;
      if (pTVar2 != pTVar38) {
        pFVar45 = (pTVar2->AllocatorInstance).Data;
        if (pFVar45 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar45);
        }
        (pTVar2->AllocatorInstance).Data = (pTVar38->AllocatorInstance).Data;
        (pTVar38->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
        (this->VertexROI).ArrayNum = pTVar38->ArrayNum;
        (this->VertexROI).ArrayMax = pTVar38->ArrayMax;
        pTVar38->ArrayNum = 0;
        pTVar38->ArrayMax = 0;
      }
      if ((FScriptContainerElement *)local_440._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_440._0_8_);
      }
      if (local_480 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_480);
      }
      TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
      ::
      ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
                ((TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
                  *)local_3e8);
      local_1c8.HashSize = 0;
      if (local_1c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1c8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1c8.Elements);
      if (local_4c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4c8.AllocatorInstance.Data);
      }
      goto LAB_14cd399f3;
    }
    bVar30 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4886156186946108579>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
                        ,0x35d,"LastBrushTriangleID != IndexConstants::InvalidID");
    if (bVar30) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::Geometry::FUniqueIndexSet::SwapValuesWith(&this->VertexROIBuilder,&this->VertexROI);
LAB_14cd399f3:
  if (this->bApplySymmetry != false) {
    pTVar2 = &this->SymmetricVertexROI;
    (this->SymmetricVertexROI).ArrayNum = 0;
    if ((this->SymmetricVertexROI).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar2->AllocatorInstance,0,&(this->SymmetricVertexROI).ArrayMax);
    }
    UE::Geometry::FMeshPlanarSymmetry::GetMirrorVertexROI
              ((this->Symmetry).Ptr,&this->VertexROI,pTVar2,true);
    pFVar47 = (pTVar2->AllocatorInstance).Data;
    iVar39 = (this->SymmetricVertexROI).ArrayNum;
    pFVar45 = pFVar47 + (longlong)iVar39 * 4;
    while( true ) {
      if ((this->SymmetricVertexROI).ArrayNum != iVar39) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_478);
      }
      if (pFVar47 == pFVar45) break;
      uVar52 = *(uint *)pFVar47;
      if (((-1 < (int)uVar52) &&
          ((int)uVar52 <
           (int)((local_4b8->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (local_4b8->VertexRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((local_4b8->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (ulonglong)(uVar52 >> 9) * 8) + (ulonglong)(uVar52 & 0x1ff) * 2) -
                  1U) < 0xfffe)) {
        local_398 = &local_408;
        local_3a0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMeshVertexSculptTool::UpdateRangeQueryTriBuffer'::__l67::<lambda_9>,void,int>
                    ::Call;
        local_408 = this;
        UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
                  (local_4b8,uVar52,(TFunctionRef<void___cdecl(int)> *)&local_3a0);
      }
      pFVar47 = pFVar47 + 4;
    }
  }
  if (((*(longlong *)&this->StampUpdateOctreeFuture != 0) &&
      (*(char *)(*(longlong *)&this->StampUpdateOctreeFuture + 0x68) == '\0')) &&
     (*(longlong *)&this->StampUpdateOctreeFuture != 0)) {
    do {
      do {
      } while (*(longlong *)&this->StampUpdateOctreeFuture == 0);
      plVar33 = *(longlong **)(*(longlong *)&this->StampUpdateOctreeFuture + 0x60);
      cVar29 = (**(code **)(*plVar33 + 0x20))(plVar33,0xffffffff,0);
    } while (cVar29 == '\0');
  }
  UE::Geometry::FUniqueIndexSet::SwapValuesWith(&this->TriangleROIBuilder,&this->TriangleROIArray);
  if (bVar54) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (local_228 != (code *)0x0) {
    plVar33 = (longlong *)&local_218;
    if (plStack_200 != (longlong *)0x0) {
      plVar33 = plStack_200;
    }
    (**(code **)(*plVar33 + 0x10))();
  }
  if (local_1f8 != (code *)0x0) {
    pppuVar35 = &local_1e8;
    if (pppuStack_1d0 != (undefined ***)0x0) {
      pppuVar35 = pppuStack_1d0;
    }
    (*(code *)(*pppuVar35)[2])();
  }
  return;
}

// UpdateStampPosition @ 14cd3b9b0

bool __thiscall
UMeshVertexSculptTool::UpdateStampPosition(UMeshVertexSculptTool *this,TRay<double> *param_1)

{
  undefined1 *this_00;
  double dVar1;
  UVertexBrushAlphaProperties *pUVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  char cVar8;
  EStampAlignmentType EVar9;
  undefined8 *puVar10;
  TFrame3<double> *pTVar11;
  undefined1 *puVar12;
  bool bVar13;
  bool bVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 local_128 [64];
  TFrame3<double> local_e8 [3];
  
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1014,"VtxSculptTool_UpdateStampPosition",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexSculptTool.cpp"
               ,0x3f6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1014);
  }
  (**(code **)(*(longlong *)this + 0x490))(this);
  puVar10 = (undefined8 *)(**(code **)(*(longlong *)this + 0x478))(this);
  cVar8 = (**(code **)(*(longlong *)*puVar10 + 0x30))();
  if (cVar8 == '\0') {
    (**(code **)(*(longlong *)this + 0x540))(this,param_1,1);
  }
  else if (cVar8 == '\x01') {
    (**(code **)(*(longlong *)this + 0x538))(this,param_1,1);
  }
  else if (cVar8 == '\x02') {
    (**(code **)(*(longlong *)this + 0x530))(this,param_1);
  }
  EVar9 = (**(code **)(*(longlong *)*puVar10 + 0x40))();
  RealignBrush(this,EVar9);
  this_00 = &this->field_0x7b0;
  FSculptBrushStamp::operator=((FSculptBrushStamp *)this_00,(FSculptBrushStamp *)&this->field_0x930)
  ;
  *(undefined8 *)&this->field_0x848 = 0x3f9eb851eb851eb8;
  *(undefined8 *)this_00 = *(undefined8 *)&this->field_0x490;
  *(undefined8 *)&this->field_0x7b8 = *(undefined8 *)&this->field_0x498;
  *(undefined8 *)&this->field_0x7c0 = *(undefined8 *)&this->field_0x4a0;
  *(undefined8 *)&this->field_0x7c8 = *(undefined8 *)&this->field_0x4a8;
  *(undefined4 *)&this->field_0x7d0 = *(undefined4 *)&this->field_0x4b0;
  *(undefined4 *)&this->field_0x7d4 = *(undefined4 *)&this->field_0x4b4;
  *(undefined4 *)&this->field_0x7d8 = *(undefined4 *)&this->field_0x4b8;
  *(undefined4 *)&this->field_0x7dc = *(undefined4 *)&this->field_0x4bc;
  *(undefined8 *)&this->field_0x7e0 = *(undefined8 *)&this->field_0x4c0;
  uVar3 = (**(code **)(*(longlong *)this + 0x498))(this);
  *(undefined8 *)&this->field_0x820 = uVar3;
  *(undefined8 *)&this->field_0x7e8 = *(undefined8 *)&this->field_0x4c8;
  *(undefined8 *)&this->field_0x7f0 = *(undefined8 *)&this->field_0x4d0;
  *(undefined8 *)&this->field_0x7f8 = *(undefined8 *)&this->field_0x4d8;
  *(undefined8 *)&this->field_0x800 = *(undefined8 *)&this->field_0x4e0;
  *(undefined4 *)&this->field_0x808 = *(undefined4 *)&this->field_0x4e8;
  *(undefined4 *)&this->field_0x80c = *(undefined4 *)&this->field_0x4ec;
  *(undefined4 *)&this->field_0x810 = *(undefined4 *)&this->field_0x4f0;
  *(undefined4 *)&this->field_0x814 = *(undefined4 *)&this->field_0x4f4;
  *(undefined8 *)&this->field_0x818 = *(undefined8 *)&this->field_0x4f8;
  uVar3 = (**(code **)(*(longlong *)this + 0x4b8))(this);
  *(undefined8 *)&this->field_0x830 = uVar3;
  if (this->bHaveBrushAlpha == false) goto LAB_14cd3bdf1;
  pUVar2 = (this->AlphaProperties).field0_0x0.DebugPtr;
  if (pUVar2->RotationAngle == 0.0) {
    if (pUVar2->bRandomize == false) goto LAB_14cd3bdf1;
LAB_14cd3bbad:
    (this->StampRandomStream).Seed = (this->StampRandomStream).Seed * 0xbb38435 + 0x3619636b;
  }
  else if (pUVar2->bRandomize != false) goto LAB_14cd3bbad;
  dVar16 = *(double *)&this->field_0x7e0;
  dVar15 = *(double *)&this->field_0x7d8 + *(double *)&this->field_0x7d8;
  dVar1 = *(double *)&this->field_0x7d0;
  dVar17 = *(double *)&this->field_0x7c8;
  __libm_sse2_sincos_();
  dVar7 = __real_3ff0000000000000;
  local_128._8_8_ =
       (dVar15 * dVar1 - dVar16 * (dVar17 + dVar17)) *
       (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  local_128._0_8_ =
       (dVar16 * (dVar1 + dVar1) + dVar15 * dVar17) *
       (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  local_128._16_8_ =
       (__real_3ff0000000000000 - ((dVar1 + dVar1) * dVar1 + (dVar17 + dVar17) * dVar17)) *
       (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  UE::Geometry::TFrame3<double>::Rotate((TFrame3<double> *)this_00,(TQuaternion<double> *)local_128)
  ;
  dVar16 = *(double *)&this->field_0x808;
  dVar1 = *(double *)&this->field_0x800;
  dVar17 = *(double *)&this->field_0x810 + *(double *)&this->field_0x810;
  local_128._8_8_ =
       (dVar17 * dVar16 - *(double *)&this->field_0x818 * (dVar1 + dVar1)) *
       (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  local_128._0_8_ =
       (*(double *)&this->field_0x818 * (dVar16 + dVar16) + dVar17 * dVar1) *
       (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  local_128._16_8_ =
       (dVar7 - ((dVar16 + dVar16) * dVar16 + (dVar1 + dVar1) * dVar1)) *
       (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  local_128._24_8_ = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  UE::Geometry::TFrame3<double>::Rotate
            ((TFrame3<double> *)&this->field_0x7e8,(TQuaternion<double> *)local_128);
LAB_14cd3bdf1:
  puVar12 = &this->field_0x7e8;
  if (this->bApplySymmetry != false) {
    local_128._0_8_ = *(undefined8 *)puVar12;
    local_128._8_8_ = *(undefined8 *)&this->field_0x7f0;
    local_128._16_8_ = *(undefined8 *)&this->field_0x7f8;
    local_128._24_8_ = *(undefined8 *)&this->field_0x800;
    local_128._32_8_ = *(undefined8 *)&this->field_0x808;
    local_128._40_8_ = *(undefined8 *)&this->field_0x810;
    local_128._48_8_ = *(undefined8 *)&this->field_0x818;
    pTVar11 = UE::Geometry::FMeshPlanarSymmetry::GetPositiveSideFrame
                        ((this->Symmetry).Ptr,local_e8,(TFrame3<double> *)local_128);
    dVar16 = (pTVar11->Origin).field0_0x0._s_0.Y;
    *(double *)puVar12 = (pTVar11->Origin).field0_0x0._s_0.X;
    *(double *)&this->field_0x7f0 = dVar16;
    dVar16 = (pTVar11->Rotation).field0_0x0._s_0.X;
    *(double *)&this->field_0x7f8 = (pTVar11->Origin).field0_0x0._s_0.Z;
    *(double *)&this->field_0x800 = dVar16;
    dVar16 = (pTVar11->Rotation).field0_0x0._s_0.Z;
    *(double *)&this->field_0x808 = (pTVar11->Rotation).field0_0x0._s_0.Y;
    *(double *)&this->field_0x810 = dVar16;
    *(double *)&this->field_0x818 = (pTVar11->Rotation).field0_0x0._s_0.W;
    *(undefined8 *)&this->field_0x7b0 = *(undefined8 *)puVar12;
    *(undefined8 *)&this->field_0x7b8 = *(undefined8 *)&this->field_0x7f0;
    *(undefined8 *)&this->field_0x7c0 = *(undefined8 *)&this->field_0x7f8;
    *(undefined8 *)&this->field_0x7c8 = *(undefined8 *)&this->field_0x800;
    *(undefined8 *)&this->field_0x7d0 = *(undefined8 *)&this->field_0x808;
    *(undefined8 *)&this->field_0x7d8 = *(undefined8 *)&this->field_0x810;
    *(undefined8 *)&this->field_0x7e0 = *(undefined8 *)&this->field_0x818;
    UE::Geometry::TFrame3<double>::Transform
              ((TFrame3<double> *)this_00,(TTransformSRT3<double> *)&this->field_0x1f0);
  }
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
  *(undefined8 *)&this->field_0x870 = *(undefined8 *)&this->field_0x950;
  *(undefined8 *)&this->field_0x878 = *(undefined8 *)&this->field_0x958;
  *(undefined8 *)&this->field_0x880 = *(undefined8 *)&this->field_0x960;
  dVar1 = __real_3e45798ee2308c3a;
  dVar15 = (this->PreviousRayDirection).field0_0x0._s_0.Y - (param_1->Direction).field0_0x0._s_0.Y;
  dVar17 = (this->PreviousRayDirection).field0_0x0._s_0.X - (param_1->Direction).field0_0x0._s_0.X;
  dVar16 = (this->PreviousRayDirection).field0_0x0._s_0.Z - (param_1->Direction).field0_0x0._s_0.Z;
  dVar16 = dVar15 * dVar15 + dVar17 * dVar17 + dVar16 * dVar16;
  this->bMouseMoved = __real_3e45798ee2308c3a < dVar16;
  if (dVar1 < dVar16) {
    FSculptBrushStamp::operator=(&this->LastMovedStamp,(FSculptBrushStamp *)this_00);
    uVar4 = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 4);
    uVar5 = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 8);
    uVar6 = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 0xc);
    *(undefined4 *)&(this->PreviousRayDirection).field0_0x0 =
         *(undefined4 *)&(param_1->Direction).field0_0x0;
    *(undefined4 *)((longlong)&(this->PreviousRayDirection).field0_0x0 + 4) = uVar4;
    *(undefined4 *)((longlong)&(this->PreviousRayDirection).field0_0x0 + 8) = uVar5;
    *(undefined4 *)((longlong)&(this->PreviousRayDirection).field0_0x0 + 0xc) = uVar6;
    (this->PreviousRayDirection).field0_0x0._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z;
  }
  if ((this->bMouseMoved == false) &&
     (cVar8 = (**(code **)(*(longlong *)*puVar10 + 0x50))(), cVar8 != '\0')) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar13;
}

// UpdateToolMeshes @ 14cd3c3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UMeshVertexSculptTool::UpdateToolMeshes
          (UMeshVertexSculptTool *this,
          TFunctionRef<TUniquePtr<FMeshRegionChangeBase,TDefaultDelete<FMeshRegionChangeBase>_>___cdecl(UE::Geometry::FDynamicMesh3_&,int)>
          *param_1)

{
  FMeshRegionChangeBase **ppFVar1;
  undefined1 *this_00;
  FMeshRegionChangeBase *pFVar2;
  code *pcVar3;
  FMeshPlanarSymmetry *this_01;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  FText *pFVar10;
  FDynamicMesh3 *pFVar11;
  longlong *plVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  FMeshRegionChangeBase *local_80;
  FText local_78;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this_00 = &this[-1].field_0xb58;
  cVar5 = (**(code **)(*(longlong *)this + 0x10))();
  if (cVar5 != '\0') {
    WaitForPendingStampUpdateConst((UMeshVertexSculptTool *)this_00);
    if (*(longlong *)&this->field_0x110 != 0) {
      do {
        do {
        } while (*(longlong *)&this->field_0x110 == 0);
        plVar12 = *(longlong **)(*(longlong *)&this->field_0x110 + 0x60);
        cVar5 = (**(code **)(*plVar12 + 0x20))(plVar12,0xffffffff,0);
      } while (cVar5 == '\0');
    }
    uVar7 = (**(code **)(*(longlong *)this_00 + 0x440))(this_00);
    local_88 = (undefined8 *)((ulonglong)local_88._4_4_ << 0x20);
    (**(code **)param_1)(&local_80,*(undefined8 *)&param_1->field_0x8,uVar7);
    if (local_80 == (FMeshRegionChangeBase *)0x0) {
      UDynamicMeshComponent::FastNotifyPositionsUpdated
                (*(UDynamicMeshComponent **)&this->field_0x58,false,false,false);
    }
    else {
      OnDynamicMeshComponentChanged
                ((UMeshVertexSculptTool *)this_00,*(UDynamicMeshComponent **)&this->field_0x58,
                 local_80,false);
      puVar8 = ::operator_new(0x70);
      if (puVar8 == (undefined8 *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[4] = 0;
        puVar8[5] = 0;
        puVar8[6] = 0;
        puVar8[7] = 0;
        puVar8[8] = 0;
        puVar8[9] = 0;
        puVar8[10] = 0;
        puVar8[0xb] = 0;
        puVar8[0xc] = 0;
        puVar8[0xd] = 0;
        *puVar8 = &___7__TWrappedToolCommandChange_VFMeshRegionChangeBase____6B_;
      }
      ppFVar1 = (FMeshRegionChangeBase **)(puVar8 + 1);
      if (ppFVar1 != &local_80) {
        pFVar2 = *ppFVar1;
        *ppFVar1 = local_80;
        local_80 = (FMeshRegionChangeBase *)0x0;
        if (pFVar2 != (FMeshRegionChangeBase *)0x0) {
          (**(code **)((longlong)*pFVar2 + 0x48))(pFVar2,1);
        }
      }
      local_68 = puVar8[2];
      uVar4 = puVar8[3];
      local_58 = puVar8[4];
      uStack_50 = puVar8[5];
      uVar7 = puVar8[6];
      plStack_40 = (longlong *)puVar8[7];
      puVar8[2] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMeshVertexSculptTool::UpdateToolMeshes'::__l8::<lambda_1>,void,bool>
                  ::Call;
      puVar8[3] = uStack_60;
      *(undefined4 *)(puVar8 + 4) = 0x52979200;
      *(undefined4 *)((longlong)puVar8 + 0x24) = 1;
      puVar8[5] = this_00;
      *(undefined4 *)(puVar8 + 6) = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar8 + 0x34) = local_48._4_4_;
      *(undefined4 *)(puVar8 + 7) = 0;
      *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
      local_48 = uVar7;
      uStack_60 = uVar4;
      if (local_68 != 0) {
        plVar12 = &local_58;
        if (plStack_40 != (longlong *)0x0) {
          plVar12 = plStack_40;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      lVar9 = (**(code **)(*(longlong *)this_00 + 0x2d8))(this_00);
      pcVar3 = *(code **)(*(longlong *)(lVar9 + 0x28) + 0x20);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_78,L"UMeshVertexSculptTool",L"UpdateVertexSculptMesh",
                           L"Updated Mesh");
      local_88 = puVar8;
      (*pcVar3)(lVar9 + 0x28,*(undefined8 *)&this->field_0x58,&local_88,pFVar10);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (this->field_0xb00 != '\0') {
        this_01 = *(FMeshPlanarSymmetry **)&this->field_0xaf8;
        pFVar11 = (FDynamicMesh3 *)(**(code **)(*(longlong *)this_00 + 0x440))(this_00);
        bVar6 = UE::Geometry::FMeshPlanarSymmetry::ValidateSymmetry(this_01,pFVar11);
        if (!bVar6) {
          lVar9 = (**(code **)(*(longlong *)this_00 + 0x2d8))(this_00);
          pcVar3 = *(code **)(*(longlong *)(lVar9 + 0x28) + 0x20);
          pFVar10 = FText::AsLocalizable_Advanced_LocText
                              (&local_78,L"UMeshVertexSculptTool",L"InvalidateSymmetryChange",
                               L"Invalidate Symmetry");
          local_88 = ::operator_new(8);
          if (local_88 != (undefined8 *)0x0) {
            *local_88 = &___7FVertexSculptNonSymmetricChange__6B_;
          }
          (*pcVar3)(lVar9 + 0x28,this_00,&local_88,pFVar10);
          if (local_78.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
          }
          this->field_0xb00 = 0;
          *(undefined1 *)(*(longlong *)&this->field_0x20 + 0xb1) = 0;
        }
      }
    }
    if (local_80 != (FMeshRegionChangeBase *)0x0) {
      (**(code **)((longlong)*local_80 + 0x48))(local_80,1);
    }
  }
  return;
}

// WaitForPendingStampUpdateConst @ 14cd3d930

void __thiscall UMeshVertexSculptTool::WaitForPendingStampUpdateConst(UMeshVertexSculptTool *this)

{
  longlong *plVar1;
  char cVar2;
  
  if (((*(longlong *)&this->StampUpdateOctreeFuture != 0) &&
      (*(char *)(*(longlong *)&this->StampUpdateOctreeFuture + 0x68) == '\0')) &&
     (*(longlong *)&this->StampUpdateOctreeFuture != 0)) {
    do {
      do {
      } while (*(longlong *)&this->StampUpdateOctreeFuture == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->StampUpdateOctreeFuture + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
  }
  return;
}

// WaitForPendingUndoRedoUpdate @ 14cd3d9d0

void __thiscall UMeshVertexSculptTool::WaitForPendingUndoRedoUpdate(UMeshVertexSculptTool *this)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(longlong *)&this->UndoUpdateFuture != 0) {
    do {
      do {
      } while (*(longlong *)&this->UndoUpdateFuture == 0);
      plVar1 = *(longlong **)(*(longlong *)&this->UndoUpdateFuture + 0x60);
      cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,0xffffffff,0);
    } while (cVar2 == '\0');
  }
  return;
}

// _getUObject @ 14cd3f6e0

UObject * __thiscall UMeshVertexSculptTool::_getUObject(UMeshVertexSculptTool *this)

{
  return (UObject *)&this[-1].SymmetricROIPrevPositionBuffer.ArrayNum;
}

// _getUObject`adjustor{152}' @ 14cd3f6ec

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMeshVertexSculptTool::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall UMeshVertexSculptTool::_getUObject_adjustor_152__(UMeshVertexSculptTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMeshVertexSculptTool *)&this[-1].BrushAlphaValues.Image.DimensionX);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{3160}' @ 14cd3f700

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMeshVertexSculptTool::_getUObject`adjustor{3160}' (void)const __ptr64 */

UObject * __thiscall UMeshVertexSculptTool::_getUObject_adjustor_3160__(UMeshVertexSculptTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMeshVertexSculptTool *)&this[-1].field_0xb88);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{3168}' @ 14cd3f714

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMeshVertexSculptTool::_getUObject`adjustor{3168}' (void)const __ptr64 */

UObject * __thiscall UMeshVertexSculptTool::_getUObject_adjustor_3168__(UMeshVertexSculptTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMeshVertexSculptTool *)&this[-1].field_0xb80);
  return (UObject *)pUVar1;
}

