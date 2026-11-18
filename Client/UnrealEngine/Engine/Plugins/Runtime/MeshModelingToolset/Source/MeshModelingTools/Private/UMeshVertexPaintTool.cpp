// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 94

// StaticClass @ 14cc95390

UClass * __cdecl UMeshVertexPaintTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexPaintTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshVertexPaintTool",
               &Z_Registration_Info_UClass_UMeshVertexPaintTool.InnerSingleton,
               StaticRegisterNativesUMeshVertexPaintTool,0x1340,0x10,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UMeshVertexPaintTool>,
               InternalVTableHelperCtorCaller<UMeshVertexPaintTool>,local_res8,
               UMeshSculptToolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexPaintTool.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14cc96480

void __cdecl
`UMeshVertexPaintTool::EndChange'::__l2::<lambda_1>::<lambda_invoker_cdecl>
          (UObject *param_1,int *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_4)

{
  UDynamicMeshComponent *pUVar1;
  UMeshVertexPaintTool *pUVar2;
  longlong *plVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *local_28;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_20;
  code *local_18;
  TArray<int,TSizedDefaultAllocator<32>_> **local_10;
  
  pUVar2 = CastChecked<UMeshVertexPaintTool,UObject>(param_1);
  pUVar1 = (pUVar2->DynamicMeshComponent).field0_0x0.DebugPtr;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMeshVertexPaintTool::ExternalUpdateValues'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
  local_28 = param_3;
  local_20 = param_4;
  (**(code **)(pUVar1->_padding_ + 0xcd0))(pUVar1,&local_18,1);
  plVar3 = (longlong *)(**(code **)(pUVar2->_padding_ + 0x2d8))(pUVar2);
                    /* WARNING: Could not recover jumptable at 0x00014cc96507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x368))(plVar3,*(code **)(*plVar3 + 0x368));
  return;
}

// <lambda_invoker_cdecl> @ 14cc96880

void __cdecl
`UMeshVertexPaintTool::EndChange'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (UObject *param_1,int *param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_4)

{
  UDynamicMeshComponent *pUVar1;
  UMeshVertexPaintTool *pUVar2;
  longlong *plVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *local_28;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_20;
  code *local_18;
  TArray<int,TSizedDefaultAllocator<32>_> **local_10;
  
  pUVar2 = CastChecked<UMeshVertexPaintTool,UObject>(param_1);
  pUVar1 = (pUVar2->DynamicMeshComponent).field0_0x0.DebugPtr;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMeshVertexPaintTool::ExternalUpdateValues'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
  local_28 = param_3;
  local_20 = param_4;
  (**(code **)(pUVar1->_padding_ + 0xcd0))(pUVar1,&local_18,1);
  plVar3 = (longlong *)(**(code **)(pUVar2->_padding_ + 0x2d8))(pUVar2);
                    /* WARNING: Could not recover jumptable at 0x00014cc96907. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x368))(plVar3,*(code **)(*plVar3 + 0x368));
  return;
}

// UMeshVertexPaintTool @ 14ccbdc00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMeshVertexPaintTool * __thiscall
UMeshVertexPaintTool::UMeshVertexPaintTool(UMeshVertexPaintTool *this,FVTableHelper *param_1)

{
  UMeshSculptToolBase::UMeshSculptToolBase((UMeshSculptToolBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->PolygroupLayerProperties).field0_0x0.DebugPtr = (UPolygroupLayersProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  (this->BasicProperties).field0_0x0.DebugPtr = (UVertexPaintBasicProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  (this->FilterProperties).field0_0x0.DebugPtr = (UVertexPaintBrushFilterProperties *)0x0;
  (this->SymmetryProperties).field0_0x0.DebugPtr = (UMeshSymmetryProperties *)0x0;
  (this->PaintBrushOpProperties).field0_0x0.DebugPtr = (UVertexColorPaintBrushOpProps *)0x0;
  (this->EraseBrushOpProperties).field0_0x0.DebugPtr = (UVertexColorPaintBrushOpProps *)0x0;
  (this->QuickActions).field0_0x0.DebugPtr = (UMeshVertexPaintToolQuickActions *)0x0;
  (this->UtilityActions).field0_0x0.DebugPtr = (UMeshVertexPaintToolUtilityActions *)0x0;
  (this->PolyLassoMechanic).field0_0x0.DebugPtr = (UPolyLassoMarqueeMechanic *)0x0;
  (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  (this->MeshElementsDisplay).field0_0x0.DebugPtr = (UMeshElementsVisualizer *)0x0;
  (this->OnDynamicMeshComponentChangedHandle).ID = 0;
  (this->AvailableLODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvailableLODs).ArrayNum = 0;
  (this->AvailableLODs).ArrayMax = 0;
  (this->ActiveGroupSet).Ptr = (FPolygroupSet *)0x0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements = 0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements.field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  this->_padding_ = (longlong)&___7UMeshVertexPaintTool__6B_;
  this->bHavePendingAction = false;
  this->bTargetSupportsLODs = false;
  this->ActiveColorOverlay = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
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
  *(undefined8 *)&(this->TempVertexSet).Elements = 0;
  *(undefined8 *)&(this->TempVertexSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TempVertexSet).Elements.field_0x20 = 0;
  this->bUndoUpdatePending = false;
  *(undefined4 *)&(this->TempVertexSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TempVertexSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TempVertexSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TempVertexSet).Elements.field_0x34 = 0;
  (this->TempVertexSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TempVertexSet).HashSize = 0;
  *(undefined8 *)&(this->TriangleROI).Elements = 0;
  *(undefined8 *)&(this->TriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TriangleROI).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x34 = 0;
  (this->TriangleROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TriangleROI).HashSize = 0;
  (this->StrokeInitialColorBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrokeInitialColorBuffer).ArrayNum = 0;
  (this->StrokeInitialColorBuffer).ArrayMax = 0;
  (this->StrokeAccumColorBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrokeAccumColorBuffer).ArrayNum = 0;
  (this->StrokeAccumColorBuffer).ArrayMax = 0;
  this->PendingStampType = Paint;
  UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3((FSparseDynamicOctree3 *)&this->Octree)
  ;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->AABBTree);
  (this->ROITriangleBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROITriangleBuffer).ArrayNum = 0;
  (this->ROITriangleBuffer).ArrayMax = 0;
  *(undefined8 *)&(this->ROIElementSet).Elements = 0;
  *(undefined8 *)&(this->ROIElementSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ROIElementSet).Elements.field_0x20 = 0;
  this->bPendingPickColor = false;
  this->bPendingPickEraseColor = false;
  *(undefined4 *)&(this->ROIElementSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ROIElementSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ROIElementSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ROIElementSet).Elements.field_0x30 = 0xffffffff;
  (this->ROIElementSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ROIElementSet).HashSize = 0;
  (this->ROIElementBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROIElementBuffer).ArrayNum = 0;
  (this->ROIElementBuffer).ArrayMax = 0;
  (this->ROIColorBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROIColorBuffer).ArrayNum = 0;
  (this->ROIColorBuffer).ArrayMax = 0;
  (this->ActiveChangeBuilder).Ptr =
       (TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange> *)0x0;
  (this->TriNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriNormals).ArrayNum = 0;
  (this->TriNormals).ArrayMax = 0;
  (this->UVSeamEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVSeamEdges).ArrayNum = 0;
  (this->UVSeamEdges).ArrayMax = 0;
  (this->NormalSeamEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalSeamEdges).ArrayNum = 0;
  (this->NormalSeamEdges).ArrayMax = 0;
  (this->GeometrySelection).bIsSet = false;
  *(undefined8 *)&(this->SelectionTids).Elements = 0;
  *(undefined8 *)&(this->SelectionTids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectionTids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectionTids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectionTids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectionTids).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SelectionTids).Elements.field_0x30 = 0xffffffff;
  (this->SelectionTids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectionTids).HashSize = 0;
  (this->Symmetry).Ptr = (FMeshPlanarSymmetry *)0x0;
  this->bMeshSymmetryIsValid = false;
  this->bApplySymmetry = false;
  (this->SymmetricVertexROI).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SymmetricVertexROI).ArrayNum = 0;
  (this->SymmetricVertexROI).ArrayMax = 0;
  *(undefined8 *)&(this->SymmetricTriangleROI).Elements = 0;
  *(undefined8 *)&(this->SymmetricTriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SymmetricTriangleROI).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SymmetricTriangleROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SymmetricTriangleROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SymmetricTriangleROI).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SymmetricTriangleROI).Elements.field_0x30 = 0xffffffff;
  (this->SymmetricTriangleROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SymmetricTriangleROI).HashSize = 0;
  (this->SymmetricROITriangleBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SymmetricROITriangleBuffer).ArrayNum = 0;
  (this->SymmetricROITriangleBuffer).ArrayMax = 0;
  return this;
}

// UMeshVertexPaintTool @ 14ccbdfe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMeshVertexPaintTool * __thiscall
UMeshVertexPaintTool::UMeshVertexPaintTool(UMeshVertexPaintTool *this)

{
  UMeshSculptToolBase::UMeshSculptToolBase((UMeshSculptToolBase *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->PolygroupLayerProperties).field0_0x0.DebugPtr = (UPolygroupLayersProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  (this->BasicProperties).field0_0x0.DebugPtr = (UVertexPaintBasicProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  (this->FilterProperties).field0_0x0.DebugPtr = (UVertexPaintBrushFilterProperties *)0x0;
  (this->SymmetryProperties).field0_0x0.DebugPtr = (UMeshSymmetryProperties *)0x0;
  (this->PaintBrushOpProperties).field0_0x0.DebugPtr = (UVertexColorPaintBrushOpProps *)0x0;
  (this->EraseBrushOpProperties).field0_0x0.DebugPtr = (UVertexColorPaintBrushOpProps *)0x0;
  (this->QuickActions).field0_0x0.DebugPtr = (UMeshVertexPaintToolQuickActions *)0x0;
  (this->UtilityActions).field0_0x0.DebugPtr = (UMeshVertexPaintToolUtilityActions *)0x0;
  (this->PolyLassoMechanic).field0_0x0.DebugPtr = (UPolyLassoMarqueeMechanic *)0x0;
  (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  (this->MeshElementsDisplay).field0_0x0.DebugPtr = (UMeshElementsVisualizer *)0x0;
  (this->OnDynamicMeshComponentChangedHandle).ID = 0;
  (this->AvailableLODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AvailableLODs).ArrayNum = 0;
  (this->AvailableLODs).ArrayMax = 0;
  (this->ActiveGroupSet).Ptr = (FPolygroupSet *)0x0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements = 0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->AccumulatedTriangleROI).Elements.field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  this->_padding_ = (longlong)&___7UMeshVertexPaintTool__6B_;
  this->bHavePendingAction = false;
  this->bTargetSupportsLODs = false;
  this->ActiveColorOverlay = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
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
  *(undefined8 *)&(this->TempVertexSet).Elements = 0;
  *(undefined8 *)&(this->TempVertexSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TempVertexSet).Elements.field_0x20 = 0;
  this->bUndoUpdatePending = false;
  *(undefined4 *)&(this->TempVertexSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TempVertexSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TempVertexSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TempVertexSet).Elements.field_0x34 = 0;
  (this->TempVertexSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TempVertexSet).HashSize = 0;
  *(undefined8 *)&(this->TriangleROI).Elements = 0;
  *(undefined8 *)&(this->TriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TriangleROI).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x34 = 0;
  (this->TriangleROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TriangleROI).HashSize = 0;
  (this->StrokeInitialColorBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrokeInitialColorBuffer).ArrayNum = 0;
  (this->StrokeInitialColorBuffer).ArrayMax = 0;
  (this->StrokeAccumColorBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StrokeAccumColorBuffer).ArrayNum = 0;
  (this->StrokeAccumColorBuffer).ArrayMax = 0;
  this->PendingStampType = Paint;
  UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3((FSparseDynamicOctree3 *)&this->Octree)
  ;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->Octree).ModifiedBounds.Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->AABBTree);
  (this->ROITriangleBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROITriangleBuffer).ArrayNum = 0;
  (this->ROITriangleBuffer).ArrayMax = 0;
  *(undefined8 *)&(this->ROIElementSet).Elements = 0;
  *(undefined8 *)&(this->ROIElementSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ROIElementSet).Elements.field_0x20 = 0;
  this->bPendingPickColor = false;
  this->bPendingPickEraseColor = false;
  *(undefined4 *)&(this->ROIElementSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ROIElementSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ROIElementSet).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ROIElementSet).Elements.field_0x30 = 0xffffffff;
  (this->ROIElementSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ROIElementSet).HashSize = 0;
  (this->ROIElementBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROIElementBuffer).ArrayNum = 0;
  (this->ROIElementBuffer).ArrayMax = 0;
  (this->ROIColorBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROIColorBuffer).ArrayNum = 0;
  (this->ROIColorBuffer).ArrayMax = 0;
  (this->ActiveChangeBuilder).Ptr =
       (TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange> *)0x0;
  (this->TriNormals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriNormals).ArrayNum = 0;
  (this->TriNormals).ArrayMax = 0;
  (this->UVSeamEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UVSeamEdges).ArrayNum = 0;
  (this->UVSeamEdges).ArrayMax = 0;
  (this->NormalSeamEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalSeamEdges).ArrayNum = 0;
  (this->NormalSeamEdges).ArrayMax = 0;
  (this->GeometrySelection).bIsSet = false;
  *(undefined8 *)&(this->SelectionTids).Elements = 0;
  *(undefined8 *)&(this->SelectionTids).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectionTids).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SelectionTids).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectionTids).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectionTids).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SelectionTids).Elements.field_0x30 = 0xffffffff;
  (this->SelectionTids).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectionTids).HashSize = 0;
  (this->Symmetry).Ptr = (FMeshPlanarSymmetry *)0x0;
  this->bMeshSymmetryIsValid = false;
  this->bApplySymmetry = false;
  (this->SymmetricVertexROI).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SymmetricVertexROI).ArrayNum = 0;
  (this->SymmetricVertexROI).ArrayMax = 0;
  *(undefined8 *)&(this->SymmetricTriangleROI).Elements = 0;
  *(undefined8 *)&(this->SymmetricTriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SymmetricTriangleROI).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SymmetricTriangleROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SymmetricTriangleROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SymmetricTriangleROI).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->SymmetricTriangleROI).Elements.field_0x30 = 0xffffffff;
  (this->SymmetricTriangleROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SymmetricTriangleROI).HashSize = 0;
  (this->SymmetricROITriangleBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SymmetricROITriangleBuffer).ArrayNum = 0;
  (this->SymmetricROITriangleBuffer).ArrayMax = 0;
  return this;
}

// ~UMeshVertexPaintTool @ 14ccc42a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshVertexPaintTool::~UMeshVertexPaintTool(UMeshVertexPaintTool *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  FMeshPlanarSymmetry *pFVar3;
  TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange> *pTVar4;
  void *pvVar5;
  FMeshVertexColorPaintChange *pFVar6;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  this->_padding_ = (longlong)&___7UMeshVertexPaintTool__6B_;
  pFVar1 = (this->SymmetricROITriangleBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->SymmetricTriangleROI).HashSize = 0;
  FVar2 = (this->SymmetricTriangleROI).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SymmetricTriangleROI).Elements);
  pFVar1 = (this->SymmetricVertexROI).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar3 = (this->Symmetry).Ptr;
  if (pFVar3 != (FMeshPlanarSymmetry *)0x0) {
    (**(code **)&pFVar3[-1].Vertices.ArrayNum)(&pFVar3[-1].Vertices.ArrayNum);
  }
  (this->SelectionTids).HashSize = 0;
  FVar2 = (this->SelectionTids).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelectionTids).Elements);
  if ((this->GeometrySelection).bIsSet != false) {
    (this->GeometrySelection).TypedValue.Selection.HashSize = 0;
    FVar2 = (this->GeometrySelection).TypedValue.Selection.Hash.SecondaryData;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(this->GeometrySelection).TypedValue.Selection.Elements);
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
  pTVar4 = (this->ActiveChangeBuilder).Ptr;
  if (pTVar4 != (TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange>
                 *)0x0) {
    *(undefined4 *)&(pTVar4->SavedIndices).field_0x48 = 0;
    pvVar5 = *(void **)&(pTVar4->SavedIndices).field_0x40;
    if (pvVar5 != (void *)0x0) {
      FMemory::Free(pvVar5);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pTVar4->SavedIndices);
    pFVar6 = (pTVar4->Change).Ptr;
    if (pFVar6 != (FMeshVertexColorPaintChange *)0x0) {
      (**(code **)(*(longlong *)pFVar6 + 0x48))(pFVar6,1);
    }
    ::operator_delete(pTVar4,0x58);
  }
  pFVar1 = (this->ROIColorBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ROIElementBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ROIElementSet).HashSize = 0;
  FVar2 = (this->ROIElementSet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ROIElementSet).Elements);
  pFVar1 = (this->ROITriangleBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->AABBTree);
  UE::Geometry::FSparseDynamicOctree3::~FSparseDynamicOctree3
            ((FSparseDynamicOctree3 *)&this->Octree);
  pFVar1 = (this->StrokeAccumColorBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->StrokeInitialColorBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->TriangleROI).HashSize = 0;
  FVar2 = (this->TriangleROI).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TriangleROI).Elements);
  (this->TempVertexSet).HashSize = 0;
  FVar2 = (this->TempVertexSet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TempVertexSet).Elements);
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
  FVar2 = (this->AccumulatedTriangleROI).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AccumulatedTriangleROI).Elements);
  ::operator_delete((this->ActiveGroupSet).Ptr,0x18);
  pFVar1 = (this->AvailableLODs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IInteractiveToolManageGeometrySelectionAPI__6B_;
  UMeshSculptToolBase::~UMeshSculptToolBase((UMeshSculptToolBase *)this);
  return;
}

// operator() @ 14ccc59b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UMeshVertexPaintTool::Setup'::__l2::<lambda_18>::operator()
          (void *this,TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)> *param_1)

{
  longlong lVar1;
  FDynamicMesh3 *pFVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 auStack_648 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_618;
  FDynamicSubmesh3 local_608;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_648;
  pFVar2 = (FDynamicMesh3 *)(**(code **)(**(longlong **)this + 0x440))();
  lVar1 = *(longlong *)this;
  if ((*(char *)(*(longlong *)(lVar1 + 0xc98) + 0xbb) == '\0') ||
     (*(int *)(lVar1 + 0x1278) == *(int *)(lVar1 + 0x12a4))) {
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar2);
  }
  else {
    pTVar3 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                       ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(lVar1 + 0x1270),
                        &local_618);
    UE::Geometry::FDynamicSubmesh3::FDynamicSubmesh3(&local_608,pFVar2,pTVar3,0xf,true);
    if (local_618.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_618.AllocatorInstance.Data);
    }
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_608.Submesh);
    UE::Geometry::FDynamicSubmesh3::~FDynamicSubmesh3(&local_608);
  }
  return;
}

// operator() @ 14cccb970

void __thiscall
`UMeshVertexPaintTool::ApplyVisibilityFilter'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  FDynamicMesh3 *pFVar2;
  double *pdVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double local_98;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60;
  TVector<double>_u_0 local_48 [2];
  
  lVar10 = *(longlong *)this;
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar6 = 0;
  if (param_1 < *(int *)(lVar10 + 0xdb8)) {
    uVar6 = uVar11;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar9 = (longlong)param_1;
  *(undefined1 *)(lVar9 + *(longlong *)(lVar10 + 0xdb0)) = 1;
  if (**(char **)((longlong)this + 8) == '\0') {
LAB_14cccbaa8:
    plVar1 = *(longlong **)((longlong)this + 0x18);
    pFVar2 = (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 0x10);
    uVar6 = 0;
    if (param_1 < (int)plVar1[1]) {
      uVar6 = uVar11;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UE::Geometry::FDynamicMesh3::GetTriCentroid
              (pFVar2,(TVector<double> *)&local_90._s_0,*(int *)(*plVar1 + lVar9 * 4));
    plVar1 = *(longlong **)((longlong)this + 0x18);
    pFVar2 = (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 0x10);
    uVar6 = 0;
    if (param_1 < (int)plVar1[1]) {
      uVar6 = uVar11;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    UE::Geometry::FDynamicMesh3::GetTriNormal
              (pFVar2,(TVector<double> *)&local_78._s_0,*(int *)(*plVar1 + lVar9 * 4));
    pdVar3 = *(double **)((longlong)this + 0x20);
    dVar14 = local_90._s_0.X - *pdVar3;
    dVar15 = local_90._s_0.Y - pdVar3[1];
    dVar16 = local_90._s_0.Z - pdVar3[2];
    lVar10 = *(longlong *)this;
    if (local_78._s_0.Y * dVar15 + local_78._s_0.X * dVar14 + local_78._s_0.Z * dVar16 <= 0.0) {
      if (*(char *)(*(longlong *)(lVar10 + 0xc98) + 0xba) != '\x02') {
        return;
      }
      auVar12._0_8_ = dVar15 * dVar15;
      auVar12._8_8_ = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = dVar14 * dVar14 + auVar12._0_8_ + dVar16 * dVar16;
      auVar13 = sqrtpd(auVar12,auVar13);
      if (auVar13._0_8_ <= 0.0) {
        local_98 = 0.0;
        dVar14 = 0.0;
        dVar15 = 0.0;
      }
      else {
        local_98 = __real_3ff0000000000000 / auVar13._0_8_;
        dVar14 = local_98 * dVar14;
        dVar15 = local_98 * dVar15;
        local_98 = local_98 * dVar16;
      }
      local_60._s_0.X = *pdVar3;
      local_60._s_0.Y = pdVar3[1];
      local_60._s_0.Z = pdVar3[2];
      local_48[0]._8_4_ = SUB84(dVar15,0);
      local_48[0]._0_8_ = dVar14;
      local_48[0]._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      local_48[0]._s_0.Z = local_98;
      UE::Math::TVector<double>::Normalize
                ((TVector<double> *)&local_48[0]._s_0,__real_3e45798ee0000000);
      iVar7 = UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject
                        ((FDynamicMeshOctree3 *)(lVar10 + 0xe88),(TRay<double> *)&local_60._s_0,
                         __real_7fefffffffffffff);
      plVar1 = *(longlong **)((longlong)this + 0x18);
      uVar6 = 0;
      if (param_1 < (int)plVar1[1]) {
        uVar6 = uVar11;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (iVar7 == *(int *)(*plVar1 + lVar9 * 4)) {
        return;
      }
      lVar10 = *(longlong *)this;
    }
    uVar6 = 0;
    if (param_1 < *(int *)(lVar10 + 0xdb8)) {
      uVar6 = uVar11;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined1 *)(lVar9 + *(longlong *)(lVar10 + 0xdb0)) = 0;
    return;
  }
  lVar10 = *(longlong *)this;
  if (*(int *)(lVar10 + 0x1278) != *(int *)(lVar10 + 0x12a4)) {
    lVar8 = *(longlong *)(lVar10 + 0x12b0);
    if (*(longlong *)(lVar10 + 0x12b0) == 0) {
      lVar8 = lVar10 + 0x12a8;
    }
    iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar10 + 0x12b8) - 1U & param_1) * 4);
    if (iVar7 != -1) {
      do {
        if (*(int *)(*(longlong *)(lVar10 + 0x1270) + (longlong)iVar7 * 0xc) == param_1)
        goto LAB_14cccbaa8;
        iVar7 = *(int *)(*(longlong *)(lVar10 + 0x1270) + 4 + (longlong)iVar7 * 0xc);
      } while (iVar7 != -1);
    }
  }
  uVar6 = 0;
  if (param_1 < *(int *)(lVar10 + 0xdb8)) {
    uVar6 = uVar11;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  *(undefined1 *)(lVar9 + *(longlong *)(lVar10 + 0xdb0)) = 0;
  return;
}

// operator() @ 14cccbe20

void __thiscall
`UMeshVertexPaintTool::ExternalUpdateValues'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  longlong lVar1;
  int iVar2;
  FDynamicMeshAttributeSet *pFVar3;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  FDynamicMeshAttributeSet *pFVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  
  pFVar3 = (param_1->AttributeSet).Ptr;
  pFVar12 = (FDynamicMeshAttributeSet *)0x0;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar12 = pFVar3;
  }
  uVar14 = 0;
  pTVar4 = (pFVar12->ColorLayer).Ptr;
  iVar2 = *(int *)(*(longlong *)this + 8);
  if (0 < (longlong)iVar2) {
    lVar13 = 0;
    lVar15 = 0;
    do {
      plVar5 = *(longlong **)this;
      uVar10 = 0;
      if ((int)uVar14 < (int)plVar5[1]) {
        uVar10 = ~uVar14 >> 0x1f;
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
      plVar6 = *(longlong **)((longlong)this + 8);
      uVar10 = *(uint *)(*plVar5 + lVar13 * 4);
      uVar11 = 0;
      if ((int)uVar14 < (int)plVar6[1]) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar7 = *plVar6;
      uVar11 = uVar10 * 4;
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 1;
      *(undefined4 *)
       (*(longlong *)
         (*(longlong *)&pTVar4->field_0x48 + (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
       (ulonglong)(uVar11 & 0x1ff) * 4) = *(undefined4 *)(lVar15 + lVar7);
      *(undefined4 *)
       (*(longlong *)
         (*(longlong *)&pTVar4->field_0x48 + (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
       (ulonglong)(uVar11 + 1 & 0x1ff) * 4) = *(undefined4 *)(lVar15 + 4 + lVar7);
      *(undefined4 *)
       (*(longlong *)
         (*(longlong *)&pTVar4->field_0x48 + (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
       (ulonglong)(uVar11 + 2 & 0x1ff) * 4) = *(undefined4 *)(lVar15 + 8 + lVar7);
      lVar1 = lVar15 + 0xc;
      lVar15 = lVar15 + 0x10;
      *(undefined4 *)
       (*(longlong *)
         (*(longlong *)&pTVar4->field_0x48 + (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
       (ulonglong)(uVar11 + 3 & 0x1ff) * 4) = *(undefined4 *)(lVar1 + lVar7);
    } while (lVar13 < iVar2);
  }
  return;
}

// operator() @ 14cccd060

void __thiscall
`UMeshVertexPaintTool::OnPolyLassoFinished'::__l2::<lambda_1>::operator()(void *this,int param_1)

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
    if (param_1 < *(int *)(lVar15 + 0xd98)) {
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
    *(undefined4 *)(*(longlong *)(lVar15 + 0xd90) + (longlong)param_1 * 4) = 0xffffffff;
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
  if (param_1 < *(int *)(lVar15 + 0xd98)) {
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
  *(uint *)(*(longlong *)(lVar15 + 0xd90) + (longlong)param_1 * 4) = (uint)(bVar5 && bVar11);
  return;
}

// operator() @ 14cccd900

void __thiscall
`UMeshVertexPaintTool::OnTick'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TRay<double> *param_2)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  bool bVar4;
  <lambda_1> local_res8;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1503,"MeshVPaint_OnTick_InStroke",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
               ,0x5df);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1503);
  }
  UMeshVertexPaintTool::UpdateROI
            (*(UMeshVertexPaintTool **)this,
             (FSculptBrushStamp *)&(*(UMeshVertexPaintTool **)this)->_padding_);
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  local_res8.__this = *(UMeshVertexPaintTool **)this;
  Async<__UMeshVertexPaintTool::OnTick_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,VertexPaintToolAsyncExecTarget,&local_res8,&local_38);
  bVar1 = UMeshVertexPaintTool::ApplyStamp(*(UMeshVertexPaintTool **)this);
  if (bVar1) {
    bVar1 = -1 < CpuChannel->Enabled;
    if (bVar1) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId1519,"MeshVPaint_OnTick_UpdateComponent",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
                 ,0x5ef);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1519);
    }
    UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
              (*(UDynamicMeshComponent **)(*(longlong *)this + 0xce0),
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(*(longlong *)this + 0xe10),
               VertexColors);
    plVar3 = (longlong *)(**(code **)(**(longlong **)this + 0x2d8))();
    (**(code **)(*plVar3 + 0x368))(plVar3);
    if (bVar1) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (local_48._0_8_ != 0) {
    do {
      cVar2 = (**(code **)(**(longlong **)(local_48._0_8_ + 0x60) + 0x20))
                        (*(longlong **)(local_48._0_8_ + 0x60),0xffffffff,0);
    } while (cVar2 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14cccdc90

void __thiscall
`UMeshVertexPaintTool::PrecomputeFilterData'::__l2::<lambda_1>::operator()(void *this,int param_1)

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
    if (param_1 < *(int *)(lVar3 + 0x11e8)) {
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
    lVar3 = *(longlong *)(lVar3 + 0x11e0);
    puVar1 = (undefined4 *)(lVar3 + (longlong)param_1 * 0x18);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
    puVar1[2] = uVar7;
    puVar1[3] = uVar8;
    *(double *)(lVar3 + 0x10 + (longlong)param_1 * 0x18) = dVar2;
  }
  return;
}

// operator() @ 14ccd15e0

void __thiscall
`UMeshVertexPaintTool::PrecomputeFilterData'::__l2::<lambda_2>::operator()(void *this,int param_1)

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
    if (param_1 < *(int *)(lVar1 + 0x11f8)) {
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
    *(uint *)(*(longlong *)(lVar1 + 0x11f0) + (longlong)param_1 * 4) = (uint)bVar3;
    bVar3 = UE::Geometry::TDynamicMeshOverlay<float,3>::IsSeamEdge
                      ((TDynamicMeshOverlay<float,3> *)**(undefined8 **)((longlong)this + 0x18),
                       param_1,(bool *)0x0);
    lVar1 = *(longlong *)((longlong)this + 8);
    uVar5 = 0;
    if (param_1 < *(int *)(lVar1 + 0x1208)) {
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
    *(uint *)(*(longlong *)(lVar1 + 0x1200) + (longlong)param_1 * 4) = (uint)bVar3;
  }
  return;
}

// operator() @ 14ccd1ac0

bool __thiscall
`UMeshVertexPaintTool::UpdateROI'::__l2::<lambda_2>::operator()(void *this,int param_1,int param_2)

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
LAB_14ccd1b84:
    uVar7 = UE::Geometry::FDynamicMesh3::FindEdgeFromTriPair
                      ((FDynamicMesh3 *)**(undefined8 **)((longlong)this + 0x20),param_1,param_2);
    if (**(char **)((longlong)this + 0x28) != '\0') {
      lVar9 = *plVar1;
      uVar8 = 0;
      if ((int)uVar7 < *(int *)(lVar9 + 0x11f8)) {
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
      if (*(int *)(*(longlong *)(lVar9 + 0x11f0) + (longlong)(int)uVar7 * 4) != 0)
      goto LAB_14ccd1c11;
    }
    if (**(char **)((longlong)this + 0x30) == '\0') {
      bVar5 = true;
    }
    else {
      lVar9 = *plVar1;
      uVar8 = 0;
      if ((int)uVar7 < *(int *)(lVar9 + 0x1208)) {
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
      bVar5 = *(int *)(*(longlong *)(lVar9 + 0x1200) + (longlong)(int)uVar7 * 4) == 0;
    }
  }
  else {
    pdVar2 = *(double **)((longlong)this + 8);
    lVar3 = *plVar1;
    uVar7 = 0;
    if (param_2 < *(int *)(lVar3 + 0x11e8)) {
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
    lVar3 = *(longlong *)(lVar3 + 0x11e0);
    dVar10 = *(double *)(lVar3 + 8 + lVar9 * 0x18) * pdVar2[1] +
             *pdVar2 * *(double *)(lVar3 + lVar9 * 0x18) +
             *(double *)(lVar3 + 0x10 + lVar9 * 0x18) * pdVar2[2];
    if (**(double **)((longlong)this + 0x18) <= dVar10 &&
        dVar10 != **(double **)((longlong)this + 0x18)) goto LAB_14ccd1b84;
LAB_14ccd1c11:
    bVar5 = false;
  }
  return bVar5;
}

// operator() @ 14ccd2570

bool __thiscall
`UMeshVertexPaintTool::FindHitSculptMeshTriangleConst'::__l13::<lambda_2>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  double *pdVar2;
  int iVar3;
  longlong lVar4;
  double local_res8 [4];
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  if (*(char *)((longlong)this + 0x18) != '\0') {
    lVar1 = *(longlong *)this;
    if (*(int *)(lVar1 + 0x1278) != *(int *)(lVar1 + 0x12a4)) {
      lVar4 = *(longlong *)(lVar1 + 0x12b0);
      if (*(longlong *)(lVar1 + 0x12b0) == 0) {
        lVar4 = lVar1 + 0x12a8;
      }
      iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar1 + 0x12b8) - 1U & param_1) * 4);
      if (iVar3 != -1) {
        do {
          if (*(int *)(*(longlong *)(lVar1 + 0x1270) + (longlong)iVar3 * 0xc) == param_1)
          goto LAB_14ccd25ed;
          iVar3 = *(int *)(*(longlong *)(lVar1 + 0x1270) + 4 + (longlong)iVar3 * 0xc);
        } while (iVar3 != -1);
      }
    }
    return false;
  }
LAB_14ccd25ed:
  UE::Geometry::FDynamicMesh3::GetTriInfo
            (*(FDynamicMesh3 **)((longlong)this + 8),param_1,(TVector<double> *)&local_20._s_0,
             local_res8,(TVector<double> *)&local_38._s_0);
  pdVar2 = *(double **)((longlong)this + 0x10);
  return (local_38._s_0.Y - pdVar2[1]) * local_20._s_0.Y +
         (local_38._s_0.X - *pdVar2) * local_20._s_0.X +
         (local_38._s_0.Z - pdVar2[2]) * local_20._s_0.Z < 0.0;
}

// operator() @ 14ccd3940

void __thiscall
`UMeshVertexPaintTool::UpdateROI'::__l14::<lambda_3>::operator()(void *this,int param_1)

{
  longlong lVar1;
  double *pdVar2;
  TVector<double> *pTVar3;
  longlong lVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int local_res8 [2];
  int local_res10 [2];
  TVector<double> local_28;
  
  if (**(char **)this != '\0') {
    lVar1 = *(longlong *)((longlong)this + 8);
    if (*(int *)(lVar1 + 0x1278) == *(int *)(lVar1 + 0x12a4)) {
      return;
    }
    lVar4 = *(longlong *)(lVar1 + 0x12b0);
    if (*(longlong *)(lVar1 + 0x12b0) == 0) {
      lVar4 = lVar1 + 0x12a8;
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(lVar1 + 0x12b8) - 1U & param_1) * 4);
    if (iVar5 == -1) {
      return;
    }
    while (*(int *)(*(longlong *)(lVar1 + 0x1270) + (longlong)iVar5 * 0xc) != param_1) {
      iVar5 = *(int *)(*(longlong *)(lVar1 + 0x1270) + 4 + (longlong)iVar5 * 0xc);
      if (iVar5 == -1) {
        return;
      }
    }
    if (iVar5 == -1) {
      return;
    }
  }
  local_res10[0] = param_1;
  pTVar3 = UE::Geometry::FDynamicMesh3::GetTriCentroid
                     ((FDynamicMesh3 *)**(undefined8 **)((longlong)this + 0x10),&local_28,param_1);
  pdVar2 = *(double **)((longlong)this + 0x18);
  dVar6 = (pTVar3->field0_0x0)._s_0.Z - pdVar2[2];
  dVar8 = (pTVar3->field0_0x0)._s_0.Y - pdVar2[1];
  dVar7 = (pTVar3->field0_0x0)._s_0.X - *pdVar2;
  if (dVar8 * dVar8 + dVar7 * dVar7 + dVar6 * dVar6 < (double)**(float **)((longlong)this + 0x20)) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 8) + 0xe10),local_res8,(bool *)local_res10);
  }
  return;
}

// operator() @ 14ccd3cb0

bool __thiscall
`UMeshVertexPaintTool::UpdateROI'::__l19::<lambda_4>::operator()(void *this,int param_1,int param_2)

{
  longlong lVar1;
  double *pdVar2;
  bool bVar3;
  int iVar4;
  TVector<double> *pTVar5;
  longlong lVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TVector<double> local_28;
  
  if (**(char **)this != '\0') {
    lVar1 = *(longlong *)((longlong)this + 8);
    if (*(int *)(lVar1 + 0x1278) == *(int *)(lVar1 + 0x12a4)) {
      return false;
    }
    uVar7 = *(int *)(lVar1 + 0x12b8) - 1;
    lVar6 = *(longlong *)(lVar1 + 0x12b0);
    if (*(longlong *)(lVar1 + 0x12b0) == 0) {
      lVar6 = lVar1 + 0x12a8;
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)(uVar7 & param_1) * 4);
    if (iVar4 == -1) {
      return false;
    }
    lVar1 = *(longlong *)(lVar1 + 0x1270);
    while (*(int *)(lVar1 + (longlong)iVar4 * 0xc) != param_1) {
      iVar4 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0xc);
      if (iVar4 == -1) {
        return false;
      }
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)(uVar7 & param_2) * 4);
    if (iVar4 == -1) {
      return false;
    }
    while (*(int *)(lVar1 + (longlong)iVar4 * 0xc) != param_2) {
      iVar4 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0xc);
      if (iVar4 == -1) {
        return false;
      }
    }
  }
  pTVar5 = UE::Geometry::FDynamicMesh3::GetTriCentroid
                     ((FDynamicMesh3 *)**(undefined8 **)((longlong)this + 0x10),&local_28,param_2);
  pdVar2 = *(double **)((longlong)this + 0x18);
  dVar8 = (pTVar5->field0_0x0)._s_0.Z - pdVar2[2];
  dVar10 = (pTVar5->field0_0x0)._s_0.Y - pdVar2[1];
  dVar9 = (pTVar5->field0_0x0)._s_0.X - *pdVar2;
  if ((double)**(float **)((longlong)this + 0x20) <= dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8
     ) {
    return false;
  }
  bVar3 = UpdateROI'::__l2::<lambda_2>::operator()
                    (*(void **)((longlong)this + 0x28),param_1,param_2);
  return bVar3;
}

// operator() @ 14ccd4520

void __thiscall
`UMeshVertexPaintTool::UpdateROI'::__l2::<lambda_5>::operator()
          (void *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 local_d8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_d0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_c0;
  int iStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  undefined4 uStack_94;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  code *local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  
  puVar1 = &(param_1->Elements).field_0x10;
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  uStack_b4 = 1;
  iStack_b8 = 0;
  local_a0 = 0;
  iStack_a4 = iStack_b8;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    local_a0 = 0;
    iStack_b8 = 0;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_b8;
      local_a0 = local_a0 + 0x20;
      iStack_b8 = iStack_b8 + 1;
      iStack_a4 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b8) goto LAB_14ccd45cd;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_b4 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_b4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res10 = (int)lVar8;
    iStack_a4 = local_a0 + -1 + local_res10;
    if (iVar3 < iStack_a4) {
      iStack_a4 = iVar3;
    }
  }
LAB_14ccd45cd:
  uVar11 = *(uint *)&(param_1->Elements).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  iStack_98 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_a8 = 0xffffffff;
  TStack_88._padding_ = CONCAT44(uStack_b4,iStack_b8);
  TStack_88.CurrentBitIndex = iStack_a4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar11 >> 5;
  TStack_88._28_4_ = iStack_a4;
  TStack_88.BaseBitIndex = local_a0;
  uStack_68 = CONCAT44(uStack_94,iStack_98);
  local_c0 = param_1;
  local_b0 = puVar1;
  iStack_9c = iStack_a4;
  local_90 = param_1;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar9 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar9;
      uVar10 = uVar10 + 0x20;
      iVar9 = iVar9 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14ccd46d0;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    uVar11 = local_res18 + -1 + uVar10;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14ccd46d0:
  while( true ) {
    pTVar6 = local_90;
    if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
        (int)uStack_68) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_88.CurrentBitIndex == uVar11) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == param_1))
    break;
    local_d8[0] = *(undefined4 *)
                   (*(longlong *)&pTVar6->Elements + (longlong)TStack_88.CurrentBitIndex * 0xc);
    if (((local_d0.AllocatorInstance.Data <= (FScriptContainerElement *)local_d8) &&
        ((FScriptContainerElement *)local_d8 <
         local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayMax * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (local_d0.ArrayNum == local_d0.ArrayMax) {
      local_d0.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_d0.AllocatorInstance,&local_d0.ArrayMax);
    }
    lVar8 = (longlong)local_d0.ArrayNum;
    local_d0.ArrayNum = local_d0.ArrayNum + 1;
    *(undefined4 *)(local_d0.AllocatorInstance.Data + lVar8 * 4) = local_d8[0];
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  local_48 = *(longlong *)this;
  local_50 = (longlong)this + 8;
  local_40 = (longlong)this + 0x10;
  local_58 = &local_50;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<``UMeshVertexPaintTool::UpdateROI'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>,bool,int,int>
             ::Call;
  UE::Geometry::FMeshConnectedComponents::GrowToConnectedTriangles
            (*(FDynamicMesh3 **)((longlong)this + 0x48),&local_d0,param_1,
             (TArray<int,TSizedDefaultAllocator<32>_> *)(local_48 + 0xd90),
             (TFunctionRef<bool___cdecl(int,int)> *)&local_60);
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14ccd4c10

void __thiscall `UMeshVertexPaintTool::Setup'::__l2::<lambda_6>::operator()(void *this)

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
    *(double *)(*(longlong *)((longlong)this + 8) + 0xe88) = dVar4;
    *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0xe98) = 8;
  }
  else {
    *(double *)(*(longlong *)((longlong)this + 8) + 0xe88) = dVar4 * __real_3fb999999999999a;
    *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0xe98) = 4;
  }
  UE::Geometry::FDynamicMeshOctree3::Initialize
            ((FDynamicMeshOctree3 *)(*(longlong *)((longlong)this + 8) + 0xe88),
             (FDynamicMesh3 *)**(undefined8 **)this);
  return;
}

// operator() @ 14ccd4d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UMeshVertexPaintTool::UpdateROI'::__l2::<lambda_6>::operator()
          (void *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  undefined1 auStackY_1a8 [32];
  undefined1 local_158 [4];
  uint local_154;
  TArray<int,TSizedDefaultAllocator<32>_> local_150;
  undefined4 local_140 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_138;
  int iStack_130;
  uint uStack_12c;
  undefined1 *local_128;
  undefined4 uStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  int local_108;
  int local_104;
  int local_100 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  code *local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_98.Elements._44_4_ = 0x80;
  puVar1 = &(param_1->Elements).field_0x10;
  local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.ArrayNum = 0;
  local_150.ArrayMax = 0;
  local_98.Elements._0_8_ = 0;
  local_98.Elements._8_8_ = 0;
  iStack_130 = 0;
  local_98.Elements._32_8_ = 0;
  uStack_12c = 1;
  local_98.Elements._40_4_ = 0;
  local_118 = 0;
  local_98.Elements._52_4_ = 0;
  local_98.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.HashSize = 0;
  local_98.Elements._48_4_ = 0xffffffff;
  iVar4 = *(int *)&(param_1->Elements).field_0x28;
  iStack_11c = local_118;
  if (iVar4 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar12 = *puVar14;
    local_118 = 0;
    iStack_130 = 0;
    while (uVar12 == 0) {
      lVar9 = (longlong)iStack_130;
      local_118 = local_118 + 0x20;
      iStack_130 = iStack_130 + 1;
      iStack_11c = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_130) goto LAB_14ccd4e3d;
      uVar12 = puVar14[lVar9 + 1];
    }
    uStack_12c = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_12c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_108 = (int)lVar9;
    iStack_11c = local_118 + -1 + local_108;
    if (iVar4 < iStack_11c) {
      iStack_11c = iVar4;
    }
  }
LAB_14ccd4e3d:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  iStack_110 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_120 = 0xffffffff;
  TStack_f0._padding_ = CONCAT44(uStack_12c,iStack_130);
  TStack_f0.CurrentBitIndex = iStack_11c;
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_f0._28_4_ = iStack_11c;
  TStack_f0.BaseBitIndex = local_118;
  uStack_d0 = CONCAT44(uStack_10c,iStack_110);
  local_138 = param_1;
  local_128 = puVar1;
  iStack_114 = iStack_11c;
  local_f8 = param_1;
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar4 < (int)uVar12)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar5) {
    puVar13 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar10;
      uVar11 = uVar11 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14ccd4f50;
      uVar12 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_104 = (int)lVar9;
    uVar12 = local_104 + -1 + uVar11;
    if ((int)uVar5 < (int)uVar12) {
      uVar12 = uVar5;
    }
  }
LAB_14ccd4f50:
  do {
    pTVar7 = local_f8;
    if (*(int *)&(local_f8->Elements).field_0x8 - *(int *)&(local_f8->Elements).field_0x34 !=
        (int)uStack_d0) {
      local_158[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_158);
    }
    if (((TStack_f0.CurrentBitIndex == uVar12) &&
        (TStack_f0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_1))
    {
      local_b0 = *(longlong *)this;
      local_b8 = (longlong)this + 8;
      local_a8 = &local_98;
      local_c0 = &local_b8;
      local_c8 = UE::Core::Private::Function::
                 TFunctionRefCaller<``UMeshVertexPaintTool::UpdateROI'::__l2::<lambda_6>::operator()'::__l2::<lambda_1>,bool,int,int>
                 ::Call;
      UE::Geometry::FMeshConnectedComponents::GrowToConnectedTriangles
                (*(FDynamicMesh3 **)((longlong)this + 0x48),&local_150,param_1,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)(local_b0 + 0xd90),
                 (TFunctionRef<bool___cdecl(int,int)> *)&local_c8);
      local_98.HashSize = 0;
      if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_98.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_98.Elements);
      if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.AllocatorInstance.Data);
      }
      return;
    }
    local_154 = *(uint *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_f0.CurrentBitIndex * 0xc
                         );
    if (((local_150.AllocatorInstance.Data <= (FScriptContainerElement *)&local_154) &&
        ((FScriptContainerElement *)&local_154 <
         local_150.AllocatorInstance.Data + (longlong)local_150.ArrayMax * 4)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (local_150.ArrayNum == local_150.ArrayMax) {
      local_150.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_150.AllocatorInstance,&local_150.ArrayMax);
    }
    lVar9 = (longlong)local_150.ArrayNum;
    local_150.ArrayNum = local_150.ArrayNum + 1;
    *(uint *)(local_150.AllocatorInstance.Data + lVar9 * 4) = local_154;
    lVar9 = (*(longlong **)(*(longlong *)this + 0xd20))[1];
    if (lVar9 == 0) {
      lVar9 = **(longlong **)(*(longlong *)this + 0xd20);
      if (*(char *)(lVar9 + 0x1a8) == '\0') {
        local_140[0] = 0xffffffff;
      }
      else {
        if ((-1 < (int)local_154) &&
           ((int)local_154 < *(int *)(lVar9 + 0x140) * 0x200 + *(int *)(lVar9 + 0x144))) {
          lVar3 = (ulonglong)(local_154 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar9 + 0x148) + lVar3) +
                                 (ulonglong)(local_154 & 0x1ff) * 2) - 1U) < 0xfffe) {
            local_140[0] = *(undefined4 *)
                            (*(longlong *)(*(longlong *)(lVar9 + 0x198) + lVar3) +
                            (ulonglong)(local_154 & 0x1ff) * 4);
            goto LAB_14ccd50e2;
          }
        }
        local_140[0] = 0;
      }
    }
    else {
      local_140[0] = *(undefined4 *)
                      (*(longlong *)(*(longlong *)(lVar9 + 0x20) + (ulonglong)(local_154 >> 9) * 8)
                      + (ulonglong)(local_154 & 0x1ff) * 4);
    }
LAB_14ccd50e2:
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
              (&local_98,local_100,(bool *)local_140);
    TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
  } while( true );
}

// ApplyAction @ 14ccdeb80

void __thiscall
UMeshVertexPaintTool::ApplyAction(UMeshVertexPaintTool *this,EMeshVertexPaintToolActions param_1)

{
  FLinearColor_u_0 local_18;
  
  if (param_1 == PaintAll) {
    local_18 = (((this->BasicProperties).field0_0x0.DebugPtr)->PaintColor).field0_0x0;
    FloodFillColorAction(this,(FLinearColor *)&local_18._s_0);
  }
  else {
    if (param_1 == EraseAll) {
      local_18 = (((this->BasicProperties).field0_0x0.DebugPtr)->EraseColor).field0_0x0;
      FloodFillColorAction(this,(FLinearColor *)&local_18._s_0);
      return;
    }
    if (param_1 == FillBlack) {
      local_18 = FLinearColor::Black.field0_0x0;
      FloodFillColorAction(this,(FLinearColor *)&local_18._s_0);
      return;
    }
    if (param_1 == FillWhite) {
      local_18 = FLinearColor::White.field0_0x0;
      FloodFillColorAction(this,(FLinearColor *)&local_18._s_0);
      return;
    }
    if (param_1 == ApplyCurrentUtility) {
      switch(((this->UtilityActions).field0_0x0.DebugPtr)->Operation) {
      case BlendAllSeams:
        BlendAllSeams(this);
        return;
      case FillChannels:
        FillChannels(this);
        return;
      case InvertChannels:
        InvertChannels(this);
        return;
      case CopyChannelToChannel:
        CopyChannelToChannel(this);
        return;
      case SwapChannels:
        SwapChannels(this);
        return;
      case CopyFromWeightMap:
        CopyFromWeightMap(this);
        return;
      case CopyToOtherLODs:
        CopyToOtherLODs(this);
        return;
      case CopyToSingleLOD:
        CopyToSpecificLOD(this);
        return;
      }
    }
  }
  return;
}

// ApplyChannelFilter @ 14ccdece0

void __thiscall
UMeshVertexPaintTool::ApplyChannelFilter
          (UMeshVertexPaintTool *this,TVector4<float> *param_1,TVector4<float> *param_2)

{
  UVertexPaintBasicProperties *pUVar1;
  
  pUVar1 = (this->BasicProperties).field0_0x0.DebugPtr;
  if ((pUVar1->ChannelFilter).bRed == false) {
    (param_2->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  }
  if ((pUVar1->ChannelFilter).bGreen == false) {
    (param_2->field0_0x0)._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  }
  if ((pUVar1->ChannelFilter).bBlue == false) {
    (param_2->field0_0x0)._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  }
  if ((pUVar1->ChannelFilter).bAlpha == false) {
    (param_2->field0_0x0)._s_0.W = (param_1->field0_0x0)._s_0.W;
  }
  return;
}

// ApplyCurrentUtilityAction @ 14ccded30

void __thiscall UMeshVertexPaintTool::ApplyCurrentUtilityAction(UMeshVertexPaintTool *this)

{
  switch(((this->UtilityActions).field0_0x0.DebugPtr)->Operation) {
  case BlendAllSeams:
    BlendAllSeams(this);
    return;
  case FillChannels:
    FillChannels(this);
    return;
  case InvertChannels:
    InvertChannels(this);
    return;
  case CopyChannelToChannel:
    CopyChannelToChannel(this);
    return;
  case SwapChannels:
    SwapChannels(this);
    return;
  case CopyFromWeightMap:
    CopyFromWeightMap(this);
    return;
  case CopyToOtherLODs:
    CopyToOtherLODs(this);
    return;
  case CopyToSingleLOD:
    CopyToSpecificLOD(this);
    return;
  default:
    return;
  }
}

// ApplyStamp @ 14cce1a70

bool __thiscall UMeshVertexPaintTool::ApplyStamp(UMeshVertexPaintTool *this)

{
  longlong *this_00;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  FMeshPlanarSymmetry *this_01;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  undefined8 *puVar18;
  FDynamicMesh3 *pFVar19;
  TVector<double> *pTVar20;
  TQuaternion<double> *pTVar21;
  FDateTime FVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  TQuaternion<double> local_58;
  
  bVar23 = -1 < CpuChannel->Enabled;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId919,"MeshVPaint_ApplyStamp",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
               ,0x397);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId919);
  }
  puVar18 = (undefined8 *)(**(code **)(this->_padding_ + 0x478))(this);
  plVar4 = (longlong *)*puVar18;
  if (CpuChannel->Enabled < 0) {
    InitializeElementROIFromTriangleROI(this,&this->ROITriangleBuffer,true);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId928,"MeshVPaint_ApplyStamp_ElementROI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
               ,0x3a0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId928);
    InitializeElementROIFromTriangleROI(this,&this->ROITriangleBuffer,true);
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar19 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))(this);
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId934,"MeshVPaint_ApplyStamp_ApplyStampToVertexColors",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
               ,0x3a6);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId934);
  }
  this_00 = &this->_padding_;
  (**(code **)(*plVar4 + 0x88))
            (plVar4,pFVar19,this->ActiveColorOverlay,&this->StrokeInitialColorBuffer,
             &this->StrokeAccumColorBuffer,this_00,&this->ROIElementBuffer,&this->ROIColorBuffer);
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar24 = SyncMeshWithColorBuffer(this,pFVar19);
  if (this->bApplySymmetry != false) {
    if (CpuChannel->Enabled < 0) {
      InitializeElementROIFromTriangleROI(this,&this->SymmetricROITriangleBuffer,true);
    }
    else {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId947,"MeshVPaint_ApplyStamp_ElementROI",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
                 ,0x3b3);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId947);
      InitializeElementROIFromTriangleROI(this,&this->SymmetricROITriangleBuffer,true);
      FCpuProfilerTrace::OutputEndEvent();
    }
    plVar1 = &this->_padding_;
    lVar5 = *plVar1;
    lVar6 = this->_padding_;
    lVar7 = this->_padding_;
    lVar8 = this->_padding_;
    lVar9 = this->_padding_;
    lVar10 = this->_padding_;
    lVar2 = this->_padding_;
    lVar11 = *this_00;
    lVar12 = this->_padding_;
    lVar13 = this->_padding_;
    lVar14 = this->_padding_;
    lVar15 = this->_padding_;
    lVar16 = this->_padding_;
    lVar3 = this->_padding_;
    pTVar20 = UE::Geometry::FMeshPlanarSymmetry::GetMirroredPosition
                        ((this->Symmetry).Ptr,(TVector<double> *)&local_58,(TVector<double> *)plVar1
                        );
    this_01 = (this->Symmetry).Ptr;
    dVar17 = (pTVar20->field0_0x0)._s_0.Y;
    *plVar1 = (longlong)(pTVar20->field0_0x0)._s_0.X;
    this->_padding_ = (longlong)dVar17;
    this->_padding_ = (longlong)(pTVar20->field0_0x0)._s_0.Z;
    pTVar21 = UE::Geometry::FMeshPlanarSymmetry::GetMirroredOrientation
                        (this_01,&local_58,(TQuaternion<double> *)&this->_padding_);
    dVar17 = (pTVar21->field0_0x0)._s_0.Y;
    this->_padding_ = (longlong)(pTVar21->field0_0x0)._s_0.X;
    this->_padding_ = (longlong)dVar17;
    dVar17 = (pTVar21->field0_0x0)._s_0.W;
    this->_padding_ = (longlong)(pTVar21->field0_0x0)._s_0.Z;
    this->_padding_ = (longlong)dVar17;
    *this_00 = *plVar1;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    UE::Geometry::TFrame3<double>::Transform
              ((TFrame3<double> *)this_00,(TTransformSRT3<double> *)&this->_padding_);
    bVar25 = -1 < CpuChannel->Enabled;
    if (bVar25) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId960,"MeshVPaint_ApplyStamp_ApplyStampToVertexColors",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
                 ,0x3c0);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId960);
    }
    (**(code **)(*plVar4 + 0x88))
              (plVar4,pFVar19,this->ActiveColorOverlay,&this->StrokeInitialColorBuffer,
               &this->StrokeAccumColorBuffer,this_00,&this->ROIElementBuffer,&this->ROIColorBuffer);
    if (bVar25) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    *plVar1 = lVar5;
    this->_padding_ = lVar6;
    this->_padding_ = lVar7;
    this->_padding_ = lVar8;
    this->_padding_ = lVar9;
    this->_padding_ = lVar10;
    this->_padding_ = lVar2;
    *this_00 = lVar11;
    this->_padding_ = lVar12;
    this->_padding_ = lVar13;
    this->_padding_ = lVar14;
    this->_padding_ = lVar15;
    this->_padding_ = lVar16;
    this->_padding_ = lVar3;
    bVar25 = SyncMeshWithColorBuffer(this,pFVar19);
    if ((bVar25) || (bVar24)) {
      bVar24 = true;
    }
  }
  FSculptBrushStamp::operator=((FSculptBrushStamp *)&this->_padding_,(FSculptBrushStamp *)this_00);
  FVar22 = FDateTime::Now();
  this->_padding_ = *(longlong *)FVar22.Ticks;
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar24;
}

// ApplyVisibilityFilter @ 14cce5d10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMeshVertexPaintTool::ApplyVisibilityFilter
          (UMeshVertexPaintTool *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1
          ,TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 local_res10 [8];
  uint local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [4];
  undefined4 local_ac;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
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
  iVar8 = *(int *)&(param_1->Elements).field_0x28;
  local_98 = &(param_1->Elements).field_0x10;
  iStack_a0 = 0;
  local_88 = 0;
  uStack_9c = 1;
  iStack_8c = 0;
  if (iVar8 != 0) {
    puVar15 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)local_98;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar9 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14cce5e0f;
      uVar13 = puVar15[lVar9 + 1];
    }
    uStack_9c = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_78 = (int)lVar9;
    iStack_8c = local_88 + -1 + local_78;
    if (iVar8 < iStack_8c) {
      iStack_8c = iVar8;
    }
  }
LAB_14cce5e0f:
  iStack_80 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  local_b8 = *(uint *)&(param_1->Elements).field_0x28;
  uStack_90 = 0xffffffff;
  TStack_60.CurrentBitIndex = iStack_8c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  uVar13 = local_b8 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_9c,iStack_a0);
  iVar12 = (int)local_b8 >> 5;
  TStack_60._28_4_ = iStack_8c;
  TStack_60.BaseBitIndex = local_88;
  uStack_40 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = param_1;
  iStack_84 = iStack_8c;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
  if ((((int)local_b8 < 0) || (iVar8 < (int)local_b8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (local_b8 != uVar3) {
    puVar14 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = &(param_1->Elements).field_0x10;
    }
    uVar11 = -1 << ((byte)local_b8 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar13 = uVar13 + 0x20;
      iVar12 = iVar12 + 1;
      local_b8 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cce5f1f;
      uVar11 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_74 = (int)lVar9;
    local_b8 = local_74 + -1 + uVar13;
    if ((int)uVar3 < (int)local_b8) {
      local_b8 = uVar3;
    }
  }
LAB_14cce5f1f:
  while( true ) {
    pTVar6 = local_68;
    if (*(int *)&(local_68->Elements).field_0x8 - *(int *)&(local_68->Elements).field_0x34 !=
        (int)uStack_40) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_60.CurrentBitIndex == local_b8) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->Elements).field_0x10)
        ) && (pTVar6 == param_1)) break;
    local_b4 = *(undefined4 *)
                (*(longlong *)&pTVar6->Elements + (longlong)TStack_60.CurrentBitIndex * 0xc);
    pFVar4 = (param_2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_b4) &&
        ((FScriptContainerElement *)&local_b4 < pFVar4 + (longlong)*piVar1 * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = param_2->ArrayNum;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_2->AllocatorInstance,piVar1);
    }
    param_2->ArrayNum = iVar8 + 1;
    *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_b4;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  ApplyVisibilityFilter(this,&this->TempROIBuffer,param_3);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(param_1);
  pFVar10 = (param_3->AllocatorInstance).Data;
  iVar8 = param_3->ArrayNum;
  pFVar4 = pFVar10 + (longlong)iVar8 * 4;
  while( true ) {
    if (param_3->ArrayNum != iVar8) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_b0);
    }
    if (pFVar10 == pFVar4) break;
    local_ac = *(undefined4 *)pFVar10;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (param_1,local_70,(bool *)&local_ac);
    pFVar10 = pFVar10 + 4;
  }
  return;
}

// ApplyVisibilityFilter @ 14cce60e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMeshVertexPaintTool::ApplyVisibilityFilter
          (UMeshVertexPaintTool *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  UVertexPaintBrushFilterProperties *pUVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  <lambda_1> local_res8 [8];
  undefined8 local_res20;
  TArrayView<std::nullptr_t,int> local_108;
  code *local_f8;
  UMeshVertexPaintTool **local_f0;
  UMeshVertexPaintTool *local_e8;
  <lambda_1> *local_e0;
  undefined8 *local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_d0;
  TVector<double> *local_c8;
  TVector<double>_u_0 local_b8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined8 local_68;
  TVector<double> local_58;
  
  pUVar4 = (this->FilterProperties).field0_0x0.DebugPtr;
  if (((pUVar4->bIsolateGeometrySelection == false) ||
      (*(int *)&(this->SelectionTids).Elements.field_0x8 ==
       *(int *)&(this->SelectionTids).Elements.field_0x34)) && (pUVar4->VisibilityFilter == None)) {
    TArray<int,TSizedDefaultAllocator<32>_>::operator=(param_2,param_1);
    return;
  }
  local_b8._s_0.X = 0.0;
  local_b8._s_0.Y = 0.0;
  local_b8._s_0.Z = 0.0;
  local_98 = 0;
  uStack_90 = 0;
  local_68 = __real_3ff0000000000000;
  local_88 = ___xmm_3ff00000000000000000000000000000;
  uStack_80 = _UNK_15061cbc8;
  local_78 = 0x42b40000;
  local_74 = 0x42c80000;
  local_70 = 0x3f800000;
  local_6c = 0;
  plVar10 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  plVar10 = (longlong *)(**(code **)(*plVar10 + 0x398))(plVar10);
  (**(code **)(*plVar10 + 0x18))(plVar10,&local_b8);
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            ((TTransformSRT3<double> *)&this->_padding_,&local_58,(TVector<double> *)&local_b8._s_0)
  ;
  local_res20 = (**(code **)(this->_padding_ + 0x440))(this);
  iVar3 = param_1->ArrayNum;
  if ((((this->FilterProperties).field0_0x0.DebugPtr)->bIsolateGeometrySelection == false) ||
     (*(int *)&(this->SelectionTids).Elements.field_0x8 ==
      *(int *)&(this->SelectionTids).Elements.field_0x34)) {
    local_res8[0] = (<lambda_1>)0x0;
  }
  else {
    local_res8[0] = (<lambda_1>)0x1;
  }
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNum(&this->VisibilityFilterBuffer,iVar3,No);
  local_e0 = local_res8;
  local_108.DataPtr = (void **)0x0;
  local_d8 = &local_res20;
  local_108.ArrayNum = 0;
  local_c8 = &local_58;
  local_f8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMeshVertexPaintTool::ApplyVisibilityFilter'::__l2::<lambda_1>,void,int>
             ::Call;
  local_f0 = &local_e8;
  local_e8 = this;
  local_d0 = param_1;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar3,1,(TFunctionRef<void___cdecl(int)> *)&local_f8,local_res8[0],
             None,&local_108);
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  uVar12 = 0;
  if (0 < iVar3) {
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->VisibilityFilterBuffer).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((this->VisibilityFilterBuffer).AllocatorInstance.Data[lVar11] !=
          (FScriptContainerElement)0x0) {
        uVar8 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar5 = (param_2->AllocatorInstance).Data;
        pFVar2 = (param_1->AllocatorInstance).Data + lVar11 * 4;
        if ((pFVar5 <= pFVar2) && (pFVar2 < pFVar5 + (longlong)*piVar1 * 4)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar9 = param_2->ArrayNum;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar9 + 1;
        *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)iVar9 * 4) =
             *(undefined4 *)pFVar2;
      }
      uVar12 = uVar12 + 1;
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar3);
  }
  return;
}

// BeginChange @ 14cce6800

void __thiscall UMeshVertexPaintTool::BeginChange(UMeshVertexPaintTool *this)

{
  TUniquePtr<TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange>,TDefaultDelete<TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange>_>_>
  *pTVar1;
  void *pvVar2;
  FMeshVertexColorPaintChange *pFVar3;
  TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FMeshVertexColorPaintChange *pFVar7;
  FMeshVertexColorPaintChange *pFVar8;
  UInteractiveToolManager *pUVar9;
  FText *pFVar10;
  FMeshVertexColorPaintChange *pFVar11;
  longlong local_38;
  undefined1 local_30 [24];
  
  pTVar1 = &this->ActiveChangeBuilder;
  if ((pTVar1->Ptr !=
       (TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveChangeBuilder == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
                         ,0x7ff,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar7 = ::operator_new(0x58);
  pFVar11 = (FMeshVertexColorPaintChange *)0x0;
  pFVar8 = pFVar11;
  if (pFVar7 != (FMeshVertexColorPaintChange *)0x0) {
    ((TUniquePtr<FMeshVertexColorPaintChange,TDefaultDelete<FMeshVertexColorPaintChange>_> *)
    &pFVar7->field_0x0)->Ptr = (FMeshVertexColorPaintChange *)0x0;
    *(undefined8 *)&pFVar7->field_0x8 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar7->field_0x8)->field_0x8 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar7->field_0x8)->field_0x20 = 0;
    *(undefined4 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar7->field_0x8)->field_0x28 = 0;
    *(undefined4 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar7->field_0x8)->field_0x2c = 0x80;
    *(undefined4 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar7->field_0x8)->field_0x30 = 0xffffffff;
    *(undefined4 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar7->field_0x8)->field_0x34 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar7->field_0x8)->field_0x40 = 0;
    *(undefined4 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar7->field_0x8)->field_0x48 = 0;
    pFVar8 = pFVar7;
  }
  if (pTVar1 == (TUniquePtr<TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange>,TDefaultDelete<TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange>_>_>
                 *)&local_38) {
    if (pFVar8 != (FMeshVertexColorPaintChange *)0x0) {
      *(undefined4 *)
       &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
        &pFVar8->field_0x8)->field_0x48 = 0;
      pvVar2 = *(void **)&((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            *)&pFVar8->field_0x8)->field_0x40;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pFVar8->field_0x8);
      pFVar3 = ((TUniquePtr<FMeshVertexColorPaintChange,TDefaultDelete<FMeshVertexColorPaintChange>_>
                 *)&pFVar8->field_0x0)->Ptr;
      pFVar7 = pFVar8;
      if (pFVar3 != (FMeshVertexColorPaintChange *)0x0) {
        (**(code **)(*(longlong *)pFVar3 + 0x48))(pFVar3,1);
      }
      goto LAB_14cce6917;
    }
  }
  else {
    pFVar7 = (FMeshVertexColorPaintChange *)pTVar1->Ptr;
    pTVar1->Ptr = (TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange>
                   *)pFVar8;
    if (pFVar7 != (FMeshVertexColorPaintChange *)0x0) {
      *(undefined4 *)
       &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
        &pFVar7->field_0x8)->field_0x48 = 0;
      pvVar2 = *(void **)&((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            *)&pFVar7->field_0x8)->field_0x40;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&pFVar7->field_0x8);
      pFVar8 = ((TUniquePtr<FMeshVertexColorPaintChange,TDefaultDelete<FMeshVertexColorPaintChange>_>
                 *)&pFVar7->field_0x0)->Ptr;
      if (pFVar8 != (FMeshVertexColorPaintChange *)0x0) {
        (**(code **)(*(longlong *)pFVar8 + 0x48))(pFVar8,1);
      }
LAB_14cce6917:
      ::operator_delete(pFVar7,0x58);
    }
  }
  pTVar4 = pTVar1->Ptr;
  pFVar8 = ::operator_new(0xa0);
  if (pFVar8 != (FMeshVertexColorPaintChange *)0x0) {
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar8->field_0x8)->field_0x30 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar8->field_0x8)->field_0x40 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar8->field_0x8)->field_0x48 = 0;
    *(undefined8 *)&pFVar8->field_0x58 = 0;
    *(undefined8 *)(&pFVar8->field_0x58 + 8) = 0;
    *(undefined8 *)(&pFVar8->field_0x58 + 0x20) = 0;
    *(undefined8 *)(&pFVar8->field_0x58 + 0x28) = 0;
    *(undefined8 *)(&pFVar8->field_0x58 + 0x30) = 0;
    *(undefined8 *)(&pFVar8->field_0x58 + 0x38) = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar8->field_0x8)->field_0x8 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar8->field_0x8)->field_0x18 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar8->field_0x8)->field_0x28 = 0;
    ((TUniquePtr<FMeshVertexColorPaintChange,TDefaultDelete<FMeshVertexColorPaintChange>_> *)
    &pFVar8->field_0x0)->Ptr = (FMeshVertexColorPaintChange *)&___7FMeshVertexColorPaintChange__6B_;
    *(undefined8 *)&pFVar8->field_0x8 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar8->field_0x8)->field_0x10 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar8->field_0x8)->field_0x20 = 0;
    *(undefined8 *)
     &((TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
      &pFVar8->field_0x8)->field_0x38 = 0;
    *(undefined8 *)(&pFVar8->field_0x58 + 0x10) = 0;
    *(undefined8 *)(&pFVar8->field_0x58 + 0x18) = 0;
    *(undefined8 *)(&pFVar8->field_0x58 + 0x40) = 0;
    pFVar11 = pFVar8;
  }
  if (pTVar4 == (TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange>
                 *)local_30) {
    if (pFVar11 == (FMeshVertexColorPaintChange *)0x0) goto LAB_14cce69cb;
    pFVar8 = ((TUniquePtr<FMeshVertexColorPaintChange,TDefaultDelete<FMeshVertexColorPaintChange>_>
               *)&pFVar11->field_0x0)->Ptr;
  }
  else {
    pFVar7 = (pTVar4->Change).Ptr;
    (pTVar4->Change).Ptr = pFVar11;
    if (pFVar7 == (FMeshVertexColorPaintChange *)0x0) goto LAB_14cce69cb;
    pFVar8 = ((TUniquePtr<FMeshVertexColorPaintChange,TDefaultDelete<FMeshVertexColorPaintChange>_>
               *)&pFVar7->field_0x0)->Ptr;
    pFVar11 = pFVar7;
  }
  (**(code **)&pFVar8->field_0x48)(pFVar11,1);
LAB_14cce69cb:
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &pTVar4->SavedIndices);
  pUVar9 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      ((FText *)(local_30 + 8),L"UMeshVertexPaintTool",L"VertexPaintChange",
                       L"Paint Stroke");
  UE::TransactionUtil::FLongTransactionTracker::Open
            ((FLongTransactionTracker *)((longlong)&this->_padding_ + 4),pFVar10,pUVar9);
  return;
}

// BlendAllSeams @ 14cce6bd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UMeshVertexPaintTool::BlendAllSeams(UMeshVertexPaintTool *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  TDynamicMeshOverlay<float,4> *this_00;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange> *pTVar5;
  undefined1 *puVar6;
  FMeshVertexColorPaintChange *pFVar7;
  code *pcVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint *puVar16;
  longlong *plVar17;
  uint *puVar18;
  undefined1 *puVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  float fVar26;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  uint local_118 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  TArray<int,TSizedDefaultAllocator<32>_> local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  uint local_d4;
  TPairInitializer<int_const_&,int_const_&> local_d0;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  FScriptContainerElement *local_98;
  longlong local_90;
  uint *local_88;
  undefined4 *local_80;
  
  BeginChange(this);
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  lVar15 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  dVar9 = __real_3ff0000000000000;
  this_00 = (TDynamicMeshOverlay<float,4> *)this->ActiveColorOverlay;
  local_res20 = 0;
  uVar25 = *(int *)(lVar15 + 0x20) * 0x200 + *(int *)(lVar15 + 0x24);
  uVar22 = 0;
  if ((uVar25 != 0) &&
     (uVar22 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar15 + 0x28) - 1U))) {
    uVar22 = 1;
    local_res20 = 1;
    uVar21 = 1;
    if ((int)uVar25 < 2) goto LAB_14cce6caf;
    do {
      uVar24 = (ulonglong)((uint)uVar22 & 0x1ff);
      lVar3 = (*(undefined8 **)(lVar15 + 0x28))[uVar22 >> 9];
      if ((*(short *)(lVar3 + uVar24 * 2) != 0) && (*(short *)(lVar3 + uVar24 * 2) != -1)) break;
      uVar21 = (uint)uVar22 + 1;
      uVar22 = (ulonglong)uVar21;
    } while ((int)uVar21 < (int)uVar25);
    local_res20 = (uint)uVar22;
  }
  uVar21 = (uint)uVar22;
LAB_14cce6caf:
  local_d4 = uVar25;
  local_90 = lVar15;
  if (uVar21 != uVar25) {
LAB_14cce6ce0:
    do {
      uVar10 = local_f8._8_8_;
      iVar23 = local_f8.ArrayMax;
      local_f8._8_8_ = (ulonglong)(uint)local_f8.ArrayMax << 0x20;
      if (((longlong)uVar10 < 0) && (iVar23 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_f8.AllocatorInstance,0,&local_f8.ArrayMax);
      }
      UE::Geometry::TDynamicMeshOverlay<float,4>::GetVertexElements(this_00,(uint)uVar22,&local_f8);
      iVar23 = local_f8.ArrayNum;
      uVar24 = (ulonglong)local_f8.ArrayNum;
      uVar21 = (uint)uVar22;
      if (1 < local_f8.ArrayNum) {
        local_108._0_4_ = 0.0;
        local_108._4_4_ = 0.0;
        uStack_100._0_4_ = 0.0;
        uStack_100._4_4_ = 0.0;
        pFVar1 = local_f8.AllocatorInstance.Data + uVar24 * 4;
        FVar20.Data = local_f8.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar24 != iVar23) {
            local_res10[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res10);
            uVar24 = local_f8._8_8_ & 0xffffffff;
          }
          if (FVar20.Data == pFVar1) break;
          uVar25 = *(uint *)FVar20.Data;
          pFVar4 = (this_00->Elements).Blocks.AllocatorInstance.Data;
          uVar21 = uVar25 * 4;
          local_108._4_4_ =
               local_108._4_4_ +
               *(float *)(*(longlong *)(pFVar4 + (ulonglong)((uVar25 & 0x3fffffff) >> 7) * 8) +
                         (ulonglong)(uVar21 + 1 & 0x1ff) * 4);
          uStack_100._0_4_ =
               (float)uStack_100 +
               *(float *)(*(longlong *)(pFVar4 + (ulonglong)((uVar25 & 0x3fffffff) >> 7) * 8) +
                         (ulonglong)(uVar21 + 2 & 0x1ff) * 4);
          FVar20.Data = FVar20.Data + 4;
          uStack_100._4_4_ =
               uStack_100._4_4_ +
               *(float *)(*(longlong *)(pFVar4 + (ulonglong)((uVar25 & 0x3fffffff) >> 7) * 8) +
                         (ulonglong)(uVar21 + 3 & 0x1ff) * 4);
          local_108._0_4_ =
               (float)local_108 +
               *(float *)(*(longlong *)(pFVar4 + (ulonglong)((uVar25 & 0x3fffffff) >> 7) * 8) +
                         (ulonglong)(uVar21 & 0x1ff) * 4);
        }
        iVar23 = (int)uVar24;
        local_98 = local_f8.AllocatorInstance.Data + (longlong)iVar23 * 4;
        fVar26 = (float)(dVar9 / (double)iVar23);
        local_108 = CONCAT44(local_108._4_4_ * fVar26,(float)local_108 * fVar26);
        uStack_100 = CONCAT44(uStack_100._4_4_ * fVar26,(float)uStack_100 * fVar26);
        FVar20.Data = local_f8.AllocatorInstance.Data;
        while( true ) {
          pFVar1 = local_98;
          if ((int)uVar24 != iVar23) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_res18);
          }
          lVar15 = local_90;
          uVar25 = local_d4;
          uVar21 = local_res20;
          if (FVar20.Data == pFVar1) break;
          pFVar1 = (this_00->Elements).Blocks.AllocatorInstance.Data;
          pTVar5 = (this->ActiveChangeBuilder).Ptr;
          local_118[0] = *(uint *)FVar20.Data;
          uVar25 = local_118[0] * 4;
          local_c0 = (ulonglong)(uVar25 + 1 & 0x1ff);
          uVar22 = (ulonglong)((local_118[0] & 0x3fffffff) >> 7);
          local_d0.Value = (int *)(ulonglong)((local_118[0] & 0x3fffffff) >> 7);
          local_e8 = CONCAT44(*(undefined4 *)
                               (*(longlong *)(pFVar1 + (longlong)local_d0.Value * 8) + local_c0 * 4)
                              ,*(undefined4 *)
                                (*(longlong *)(pFVar1 + uVar22 * 8) +
                                (ulonglong)(uVar25 & 0x1ff) * 4));
          local_b0 = (ulonglong)(uVar25 + 2 & 0x1ff);
          local_b8 = (ulonglong)((local_118[0] & 0x3fffffff) >> 7);
          local_a0 = (ulonglong)(uVar25 + 3 & 0x1ff);
          local_a8 = (ulonglong)((local_118[0] & 0x3fffffff) >> 7);
          uStack_e0 = CONCAT44(*(undefined4 *)(*(longlong *)(pFVar1 + local_a8 * 8) + local_a0 * 4),
                               *(undefined4 *)(*(longlong *)(pFVar1 + local_b8 * 8) + local_b0 * 4))
          ;
          if (((pTVar5->Change).Ptr == (FMeshVertexColorPaintChange *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Change.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Changes\\IndexedAttributeChange.h"
                                  ,0x3c,L""), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar11 = uStack_100;
          uVar10 = local_108;
          if (*(int *)&(pTVar5->SavedIndices).field_0x8 !=
              *(int *)&(pTVar5->SavedIndices).field_0x34) {
            puVar6 = *(undefined1 **)&(pTVar5->SavedIndices).field_0x40;
            puVar19 = &(pTVar5->SavedIndices).field_0x38;
            if (puVar6 != (undefined1 *)0x0) {
              puVar19 = puVar6;
            }
            uVar21 = *(uint *)(puVar19 +
                              (ulonglong)
                              (*(int *)&(pTVar5->SavedIndices).field_0x48 - 1U & local_118[0]) * 4);
            if (uVar21 != 0xffffffff) {
              do {
                puVar18 = (uint *)((longlong)(int)uVar21 * 0x10 + *(longlong *)&pTVar5->SavedIndices
                                  );
                if (*puVar18 == local_118[0]) {
                  puVar16 = puVar18 + 1;
                  if (puVar18 == (uint *)0x0) {
                    puVar16 = (uint *)0x0;
                  }
                  if (puVar16 != (uint *)0x0) {
                    uVar21 = *puVar16;
                    pFVar7 = (pTVar5->Change).Ptr;
                    uVar14 = 0;
                    if ((int)uVar21 < *(int *)&pFVar7->field_0x30) {
                      uVar14 = ~uVar21 >> 0x1f;
                    }
                    if ((uVar14 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    puVar2 = (undefined8 *)
                             (*(longlong *)&pFVar7->field_0x28 + (longlong)(int)uVar21 * 0x10);
                    *puVar2 = uVar10;
                    puVar2[1] = uVar11;
                    goto LAB_14cce71f4;
                  }
                  break;
                }
                uVar21 = puVar18[2];
              } while (uVar21 != 0xffffffff);
            }
          }
          local_d8 = *(undefined4 *)&((pTVar5->Change).Ptr)->field_0x10;
          local_88 = local_118;
          local_80 = &local_d8;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)&pTVar5->SavedIndices,&local_d0,(bool *)&local_88);
          pFVar7 = (pTVar5->Change).Ptr;
          if (((*(uint **)&pFVar7->field_0x8 <= local_118) &&
              (local_118 < *(uint **)&pFVar7->field_0x8 + *(int *)&pFVar7->field_0x14)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar13 = *(int *)&pFVar7->field_0x10;
          if (iVar13 == *(int *)&pFVar7->field_0x14) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,(ForAnyElementType *)&pFVar7->field_0x8,
                                (int *)&pFVar7->field_0x14);
          }
          *(int *)&pFVar7->field_0x10 = iVar13 + 1;
          *(uint *)(*(longlong *)&pFVar7->field_0x8 + (longlong)iVar13 * 4) = local_118[0];
          pFVar7 = (pTVar5->Change).Ptr;
          if (((*(undefined8 **)&pFVar7->field_0x18 <= &local_e8) &&
              (&local_e8 <
               *(undefined8 **)&pFVar7->field_0x18 + (longlong)*(int *)&pFVar7->field_0x24 * 2)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar13 = *(int *)&pFVar7->field_0x20;
          if (iVar13 == *(int *)&pFVar7->field_0x24) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1010,(ForAnyElementType *)&pFVar7->field_0x18,
                                (int *)&pFVar7->field_0x24);
          }
          *(int *)&pFVar7->field_0x20 = iVar13 + 1;
          puVar2 = (undefined8 *)(*(longlong *)&pFVar7->field_0x18 + (longlong)iVar13 * 0x10);
          *puVar2 = local_e8;
          puVar2[1] = uStack_e0;
          pFVar7 = (pTVar5->Change).Ptr;
          if (((*(undefined8 **)&pFVar7->field_0x28 <= &local_108) &&
              (&local_108 <
               *(undefined8 **)&pFVar7->field_0x28 + (longlong)*(int *)&pFVar7->field_0x34 * 2)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar13 = *(int *)&pFVar7->field_0x30;
          if (iVar13 == *(int *)&pFVar7->field_0x34) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x1010,(ForAnyElementType *)&pFVar7->field_0x28,
                                (int *)&pFVar7->field_0x34);
          }
          *(int *)&pFVar7->field_0x30 = iVar13 + 1;
          puVar2 = (undefined8 *)(*(longlong *)&pFVar7->field_0x28 + (longlong)iVar13 * 0x10);
          *puVar2 = local_108;
          puVar2[1] = uStack_100;
LAB_14cce71f4:
          FVar20.Data = FVar20.Data + 4;
          *(float *)(*(longlong *)((this_00->Elements).Blocks.AllocatorInstance.Data + uVar22 * 8) +
                    (ulonglong)(uVar25 & 0x1ff) * 4) = (float)local_108;
          *(float *)(*(longlong *)
                      ((this_00->Elements).Blocks.AllocatorInstance.Data +
                      (longlong)local_d0.Value * 8) + local_c0 * 4) = local_108._4_4_;
          *(float *)(*(longlong *)((this_00->Elements).Blocks.AllocatorInstance.Data + local_b8 * 8)
                    + local_b0 * 4) = (float)uStack_100;
          *(float *)(*(longlong *)((this_00->Elements).Blocks.AllocatorInstance.Data + local_a8 * 8)
                    + local_a0 * 4) = uStack_100._4_4_;
          uVar24 = local_f8._8_8_ & 0xffffffff;
        }
      }
      local_res20 = uVar21 + 1;
      uVar22 = (ulonglong)local_res20;
      if ((int)local_res20 < (int)uVar25) {
        do {
          uVar24 = (ulonglong)((uint)uVar22 & 0x1ff);
          lVar3 = *(longlong *)(*(longlong *)(lVar15 + 0x28) + (uVar22 >> 9) * 8);
          if ((*(short *)(lVar3 + uVar24 * 2) != 0) && (*(short *)(lVar3 + uVar24 * 2) != -1))
          goto LAB_14cce6ce0;
          local_res20 = (uint)uVar22 + 1;
          uVar22 = (ulonglong)local_res20;
        } while ((int)local_res20 < (int)uVar25);
      }
    } while (local_res20 != uVar25);
  }
  UDynamicMeshComponent::FastNotifyVertexAttributesUpdated
            ((this->DynamicMeshComponent).field0_0x0.DebugPtr,VertexColors);
  plVar17 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  (**(code **)(*plVar17 + 0x368))(plVar17);
  EndChange(this);
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// CanAccept @ 14cceba60

bool __thiscall UMeshVertexPaintTool::CanAccept(UMeshVertexPaintTool *this)

{
  return true;
}

// CommitResult @ 14ccf0d20

void __thiscall
UMeshVertexPaintTool::CommitResult
          (UMeshVertexPaintTool *this,UBaseDynamicMeshComponent *param_1,bool param_2)

{
  code *pcVar1;
  longlong lVar2;
  FText *pFVar3;
  undefined7 in_register_00000081;
  UMeshVertexPaintTool *local_res8;
  undefined1 local_18 [16];
  
  lVar2 = (**(code **)(this->_padding_ + 0x2d8))
                    (this,param_1,CONCAT71(in_register_00000081,param_2));
  pcVar1 = *(code **)(*(longlong *)(lVar2 + 0x28) + 0x10);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_18,L"UMeshVertexPaintTool",L"VertexPaintToolTransactionName",
                      L"Paint Vertex Colors");
  (*pcVar1)(lVar2 + 0x28,pFVar3);
  if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
  }
  local_18._8_8_ = &local_res8;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshVertexPaintTool::CommitResult'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_res8 = this;
  (**(code **)(param_1->_padding_ + 0xb40))(param_1,local_18);
  lVar2 = (**(code **)(this->_padding_ + 0x2d8))(this);
                    /* WARNING: Could not recover jumptable at 0x00014ccf0ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x18))(lVar2 + 0x28);
  return;
}

// CopyChannelToChannel @ 14ccf19f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UMeshVertexPaintTool::CopyChannelToChannel(UMeshVertexPaintTool *this)

{
  float fVar1;
  UMeshVertexPaintToolUtilityActions *pUVar2;
  code *pcVar3;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  longlong *plVar8;
  FText *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint local_98 [4];
  TVector4<float>_u_0 local_88;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  FText local_68 [2];
  
  pUVar2 = (this->UtilityActions).field0_0x0.DebugPtr;
  uVar7 = (uint)pUVar2->SourceChannel;
  if (Alpha < pUVar2->SourceChannel) {
    uVar7 = 3;
  }
  uVar15 = 0;
  local_98[0] = (uint)((pUVar2->TargetChannels).bRed != false);
  local_98[1] = (uint)((pUVar2->TargetChannels).bGreen != false);
  local_98[2] = (uint)((pUVar2->TargetChannels).bBlue != false);
  local_98[3] = (uint)((pUVar2->TargetChannels).bAlpha != false);
  local_98[uVar7] = 0;
  if ((((local_98[0] == 0) && (local_98[1] == 0)) && (local_98[2] == 0)) && (local_98[3] == 0)) {
    plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar3 = *(code **)(*plVar8 + 0x360);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (local_68,L"UMeshVertexPaintTool",L"NoChannelsSelectedMessage",
                        L"At least one Target Channel must be selected");
    (*pcVar3)(plVar8,pFVar9,4);
    if (local_68[0].TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_68[0].TextData.Reference + 0x10))();
    return;
  }
  BeginChange(this);
  pTVar4 = this->ActiveColorOverlay;
  uVar16 = *(int *)&pTVar4->field_0xc + *(int *)&pTVar4->field_0x8 * 0x200;
  if ((uVar16 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)&pTVar4->field_0x10 - 1U))) {
    uVar15 = 1;
    uVar14 = 1;
    if ((int)uVar16 < 2) goto joined_r0x00014ccf1b58;
    do {
      uVar10 = (ulonglong)((uint)uVar15 & 0x1ff);
      lVar5 = (*(undefined8 **)&pTVar4->field_0x10)[uVar15 >> 9];
      if ((*(short *)(lVar5 + uVar10 * 2) != 0) && (*(short *)(lVar5 + uVar10 * 2) != -1)) break;
      uVar14 = (uint)uVar15 + 1;
      uVar15 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)uVar16);
  }
  uVar14 = (uint)uVar15;
joined_r0x00014ccf1b58:
  do {
    if (uVar14 == uVar16) {
      UDynamicMeshComponent::FastNotifyVertexAttributesUpdated
                ((this->DynamicMeshComponent).field0_0x0.DebugPtr,VertexColors);
      plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*plVar8 + 0x368))(plVar8);
      EndChange(this);
      return;
    }
    while( true ) {
      lVar5 = *(longlong *)&pTVar4->field_0x48;
      uVar14 = (uint)uVar15;
      uVar13 = uVar14 * 4;
      uVar17 = (ulonglong)(uVar13 + 1 & 0x1ff);
      uVar20 = (ulonglong)((uVar14 & 0x3fffffff) >> 7);
      uVar19 = (ulonglong)((uVar14 & 0x3fffffff) >> 7);
      local_88._s_0.X =
           *(float *)(*(longlong *)(lVar5 + uVar20 * 8) + (ulonglong)(uVar13 & 0x1ff) * 4);
      local_88._s_0.Y = *(float *)(*(longlong *)(lVar5 + uVar19 * 8) + uVar17 * 4);
      uVar18 = (ulonglong)(uVar13 + 2 & 0x1ff);
      uVar10 = (ulonglong)((uVar14 & 0x3fffffff) >> 7);
      uVar12 = (ulonglong)(uVar13 + 3 & 0x1ff);
      local_88._s_0.Z = *(float *)(*(longlong *)(lVar5 + uVar10 * 8) + uVar18 * 4);
      uVar11 = (ulonglong)((uVar14 & 0x3fffffff) >> 7);
      local_88._s_0.W = *(float *)(*(longlong *)(lVar5 + uVar11 * 8) + uVar12 * 4);
      local_78._4_4_ = local_88._s_0.Y;
      local_78._0_4_ = local_88._s_0.X;
      fStack_6c = local_88._s_0.W;
      fStack_70 = local_88._s_0.Z;
      if ((3 < uVar7) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                             ,0x310,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar1 = *(float *)(local_78 + (ulonglong)uVar7 * 4);
      if (local_98[0] != 0) {
        local_88._s_0.X = fVar1;
      }
      if (local_98[1] != 0) {
        local_88._s_0.Y = fVar1;
      }
      if (local_98[2] != 0) {
        local_88._s_0.Z = fVar1;
      }
      if (local_98[3] != 0) {
        local_88._s_0.W = fVar1;
      }
      TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange>::
      UpdateValue((this->ActiveChangeBuilder).Ptr,uVar14,(TVector4<float> *)local_78,
                  (TVector4<float> *)&local_88._s_0);
      uVar14 = uVar14 + 1;
      uVar15 = (ulonglong)uVar14;
      *(float *)(*(longlong *)(*(longlong *)&pTVar4->field_0x48 + uVar20 * 8) +
                (ulonglong)(uVar13 & 0x1ff) * 4) = local_88._s_0.X;
      *(float *)(*(longlong *)(*(longlong *)&pTVar4->field_0x48 + uVar19 * 8) + uVar17 * 4) =
           local_88._s_0.Y;
      *(float *)(*(longlong *)(*(longlong *)&pTVar4->field_0x48 + uVar10 * 8) + uVar18 * 4) =
           local_88._s_0.Z;
      *(float *)(*(longlong *)(*(longlong *)&pTVar4->field_0x48 + uVar11 * 8) + uVar12 * 4) =
           local_88._s_0.W;
      if ((int)uVar16 <= (int)uVar14) break;
      while( true ) {
        uVar10 = (ulonglong)((uint)uVar15 & 0x1ff);
        lVar5 = *(longlong *)(*(longlong *)&pTVar4->field_0x10 + (uVar15 >> 9) * 8);
        if ((*(short *)(lVar5 + uVar10 * 2) != 0) && (*(short *)(lVar5 + uVar10 * 2) != -1)) break;
        uVar14 = (uint)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
        if ((int)uVar16 <= (int)uVar14) goto joined_r0x00014ccf1b58;
      }
    }
  } while( true );
}

// CopyFromWeightMap @ 14ccf1dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UMeshVertexPaintTool::CopyFromWeightMap(UMeshVertexPaintTool *this)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  UMeshVertexPaintToolUtilityActions *pUVar5;
  code *pcVar6;
  FName FVar7;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar8;
  longlong lVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  longlong *plVar13;
  FText *pFVar14;
  FMeshDescription *pFVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  float fVar21;
  TVector4<float>_u_0 local_108;
  FGetMeshParameters local_f8;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  TIndexedWeightMap<float> local_d8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  FText local_98;
  FText local_88 [4];
  
  pUVar5 = (this->UtilityActions).field0_0x0.DebugPtr;
  bVar1 = (pUVar5->TargetChannels).bRed;
  bVar2 = (pUVar5->TargetChannels).bAlpha;
  bVar3 = (pUVar5->TargetChannels).bBlue;
  bVar4 = (pUVar5->TargetChannels).bGreen;
  if ((((bVar1 == false) && (bVar4 == false)) && (bVar3 == false)) && (bVar2 == false)) {
    plVar13 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar6 = *(code **)(*plVar13 + 0x360);
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_98,L"UMeshVertexPaintTool",L"NoChannelsSelectedMessage",
                         L"At least one Target Channel must be selected");
    (*pcVar6)(plVar13,pFVar14,4);
    if (local_98.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
      return;
    }
  }
  else {
    local_d8.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d8.Values.ArrayNum = 0;
    local_d8.Values.ArrayMax = 0;
    FVar7 = pUVar5->WeightMap;
    local_f8.bHaveRequestLOD = false;
    local_f8._1_3_ = 0;
    local_f8.RequestLOD = Default;
    local_f8.bWantMeshTangents = false;
    local_f8._9_3_ = 0;
    pFVar15 = UE::ToolTarget::GetMeshDescription((UToolTarget *)this->_padding_,&local_f8);
    fVar10 = __real_3f800000;
    bVar11 = UE::WeightMaps::GetVertexWeightMap(pFVar15,FVar7,&local_d8,__real_3f800000);
    if (bVar11) {
      BeginChange(this);
      pTVar8 = this->ActiveColorOverlay;
      uVar20 = *(int *)&pTVar8->field_0xc + *(int *)&pTVar8->field_0x8 * 0x200;
      uVar17 = 0;
      if ((uVar20 != 0) &&
         (uVar17 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)&pTVar8->field_0x10 - 1U))) {
        uVar16 = 1;
        uVar17 = 1;
        if (1 < (int)uVar20) {
          do {
            lVar9 = (*(undefined8 **)&pTVar8->field_0x10)[uVar16 >> 9];
            if ((*(short *)(lVar9 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
               (uVar17 = uVar16, *(short *)(lVar9 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) break;
            uVar16 = uVar16 + 1;
            uVar17 = uVar16;
          } while ((int)uVar16 < (int)uVar20);
        }
      }
joined_r0x00014ccf1fca:
      if (uVar17 != uVar20) {
        while( true ) {
          uVar16 = *(uint *)(*(longlong *)
                              (*(longlong *)&pTVar8->field_0x60 + (ulonglong)(uVar17 >> 9) * 8) +
                            (ulonglong)(uVar17 & 0x1ff) * 4);
          fVar21 = local_d8.DefaultValue;
          if ((-1 < (int)uVar16) && ((int)uVar16 < local_d8.Values.ArrayNum)) {
            uVar12 = 0;
            if ((int)uVar16 < local_d8.Values.ArrayNum) {
              uVar12 = ~uVar16 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            fVar21 = *(float *)(local_d8.Values.AllocatorInstance.Data + (longlong)(int)uVar16 * 4);
          }
          if (0.0 <= fVar21) {
            if (fVar10 <= fVar21) {
              fVar21 = fVar10;
            }
          }
          else {
            fVar21 = 0.0;
          }
          lVar9 = *(longlong *)&pTVar8->field_0x48;
          uVar16 = uVar17 * 4;
          local_c0 = (ulonglong)(uVar16 + 1 & 0x1ff);
          uVar18 = (ulonglong)((uVar17 & 0x3fffffff) >> 7);
          uVar19 = (ulonglong)((uVar17 & 0x3fffffff) >> 7);
          local_e8 = *(float *)(*(longlong *)(lVar9 + uVar18 * 8) + (ulonglong)(uVar16 & 0x1ff) * 4)
          ;
          fStack_e4 = *(float *)(*(longlong *)(lVar9 + uVar19 * 8) + local_c0 * 4);
          local_b0 = (ulonglong)(uVar16 + 2 & 0x1ff);
          local_b8 = (ulonglong)((uVar17 & 0x3fffffff) >> 7);
          local_a0 = (ulonglong)(uVar16 + 3 & 0x1ff);
          fStack_e0 = *(float *)(*(longlong *)(lVar9 + local_b8 * 8) + local_b0 * 4);
          local_a8 = (ulonglong)((uVar17 & 0x3fffffff) >> 7);
          fStack_dc = *(float *)(*(longlong *)(lVar9 + local_a8 * 8) + local_a0 * 4);
          local_108._s_0.W = fStack_dc;
          if (bVar2 != false) {
            local_108._s_0.W = fVar21;
          }
          local_108._s_0.Z = fStack_e0;
          if (bVar3 != false) {
            local_108._s_0.Z = fVar21;
          }
          local_108._s_0.Y = fStack_e4;
          if (bVar4 != false) {
            local_108._s_0.Y = fVar21;
          }
          local_108._s_0.X = fVar21;
          if (bVar1 == false) {
            local_108._s_0.X = local_e8;
          }
          TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange>::
          UpdateValue((this->ActiveChangeBuilder).Ptr,uVar17,(TVector4<float> *)&local_e8,
                      (TVector4<float> *)&local_108._s_0);
          uVar17 = uVar17 + 1;
          *(float *)(*(longlong *)(*(longlong *)&pTVar8->field_0x48 + uVar18 * 8) +
                    (ulonglong)(uVar16 & 0x1ff) * 4) = local_108._s_0.X;
          *(float *)(*(longlong *)(*(longlong *)&pTVar8->field_0x48 + uVar19 * 8) + local_c0 * 4) =
               local_108._s_0.Y;
          *(float *)(*(longlong *)(*(longlong *)&pTVar8->field_0x48 + local_b8 * 8) + local_b0 * 4)
               = local_108._s_0.Z;
          *(float *)(*(longlong *)(*(longlong *)&pTVar8->field_0x48 + local_a8 * 8) + local_a0 * 4)
               = local_108._s_0.W;
          if ((int)uVar20 <= (int)uVar17) break;
          while( true ) {
            lVar9 = *(longlong *)(*(longlong *)&pTVar8->field_0x10 + (ulonglong)(uVar17 >> 9) * 8);
            if ((*(short *)(lVar9 + (ulonglong)(uVar17 & 0x1ff) * 2) != 0) &&
               (*(short *)(lVar9 + (ulonglong)(uVar17 & 0x1ff) * 2) != -1)) break;
            uVar17 = uVar17 + 1;
            if ((int)uVar20 <= (int)uVar17) goto joined_r0x00014ccf1fca;
          }
        }
        goto joined_r0x00014ccf1fca;
      }
      UDynamicMeshComponent::FastNotifyVertexAttributesUpdated
                ((this->DynamicMeshComponent).field0_0x0.DebugPtr,VertexColors);
      plVar13 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*plVar13 + 0x368))(plVar13);
      EndChange(this);
    }
    else {
      plVar13 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
      pcVar6 = *(code **)(*plVar13 + 0x360);
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (local_88,L"UMeshVertexPaintTool",L"NoWeightMapMessage",
                           L"Selected Weight Map could not be found on the Target Mesh");
      (*pcVar6)(plVar13,pFVar14,4);
      if (local_88[0].TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_88[0].TextData.Reference + 0x10))();
      }
    }
    if (local_d8.Values.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Values.AllocatorInstance.Data);
    }
  }
  return;
}

// CopyToOtherLODs @ 14ccf22e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMeshVertexPaintTool::CopyToOtherLODs(UMeshVertexPaintTool *this)

{
  EMeshLODIdentifier EVar1;
  code *pcVar2;
  FScriptContainerElement *_Src;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar3;
  UVertexPaintBasicProperties *pUVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  FText *pFVar9;
  FDynamicMesh3 *pFVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStackY_1a8 [32];
  ForAnyElementType local_168;
  uint local_160;
  int local_15c;
  ForAnyElementType local_158;
  int local_150 [3];
  FCommitMeshParameters local_144;
  TVector4<float>_u_0 local_138;
  FText local_128;
  FText local_118;
  FText local_108;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (this->bTargetSupportsLODs == false) {
    plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
    pcVar2 = *(code **)(*plVar8 + 0x360);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_128,L"UMeshVertexPaintTool",L"NoLODsErrorMessage",
                        L"Target Mesh does not support LODs");
    (*pcVar2)(plVar8,pFVar9,4);
    if (local_128.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
    }
  }
  else {
    local_160 = (this->AvailableLODs).ArrayNum;
    lVar12 = (longlong)(int)local_160;
    _Src = (this->AvailableLODs).AllocatorInstance.Data;
    uVar13 = 0;
    local_168.Data = (FScriptContainerElement *)0x0;
    if (local_160 == 0) {
      local_15c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_160,0,&local_168,local_160,&local_15c);
      memcpy(local_168.Data,_Src,lVar12 << 2);
    }
    if (((this->UtilityActions).field0_0x0.DebugPtr)->bCopyToHiRes == false) {
      local_150[2] = 100;
      TArray<enum_EMeshLODIdentifier,TSizedDefaultAllocator<32>_>::Remove
                (&local_168,(EMeshLODIdentifier *)(local_150 + 2));
    }
    if (local_160 == 0) {
      plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
      pcVar2 = *(code **)(*plVar8 + 0x360);
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_118,L"UMeshVertexPaintTool",L"NoLODsToCopyToMessage",
                          L"Target Mesh does not have any other editable LODs");
      (*pcVar2)(plVar8,pFVar9,4);
      if (local_118.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_118.TextData.Reference + 0x10))();
      }
    }
    else {
      pFVar10 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))(this);
      pTVar3 = this->ActiveColorOverlay;
      UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
      TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_f8,pFVar10,true);
      uVar7 = local_160;
      uVar14 = (ulonglong)local_160;
      local_158.Data = (FScriptContainerElement *)0x0;
      local_150[0] = 0;
      local_150[1] = 0;
      if ((int)local_160 < 1) {
        if ((int)local_160 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar14);
        }
      }
      else {
        iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x2c0,8,local_160,&local_158,local_150,local_150 + 1);
        DefaultConstructItems<FMeshDescription,int>(local_158.Data + (longlong)iVar6 * 0x2c0,uVar7);
        uVar14 = (ulonglong)local_160;
      }
      uVar15 = uVar13;
      if (0 < (int)uVar14) {
        do {
          uVar11 = (uint)uVar13;
          uVar7 = 0;
          if ((int)uVar11 < (int)uVar14) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          EVar1 = *(EMeshLODIdentifier *)(local_168.Data + uVar15);
          uVar7 = 0;
          if ((int)uVar11 < local_150[0]) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pUVar4 = (this->BasicProperties).field0_0x0.DebugPtr;
          local_138._0_8_ = *(undefined8 *)&(pUVar4->PaintColor).field0_0x0;
          local_138._8_8_ = *(undefined8 *)((longlong)&(pUVar4->PaintColor).field0_0x0 + 8);
          UELocal::GetMeshDescriptionLODWithCopiedVertexColors
                    ((UToolTarget *)this->_padding_,EVar1,pFVar10,pTVar3,&local_f8,
                     (TVector4<float> *)&local_138._s_0,
                     (FMeshDescription *)(local_158.Data + (longlong)(int)uVar11 * 0x2c0));
          uVar14 = (ulonglong)local_160;
          uVar13 = (ulonglong)(uVar11 + 1);
          uVar15 = uVar15 + 4;
        } while ((int)(uVar11 + 1) < (int)local_160);
      }
      uVar13 = 0;
      lVar12 = (**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar2 = *(code **)(*(longlong *)(lVar12 + 0x28) + 0x10);
      pFVar9 = FText::AsLocalizable_Advanced_LocText
                         (&local_108,L"UMeshVertexPaintTool",L"CopyToOtherLODs",
                          L"Copy Vertex Colors To LODs");
      (*pcVar2)(lVar12 + 0x28,pFVar9);
      if (local_108.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
      }
      uVar14 = uVar13;
      if (0 < (int)local_160) {
        do {
          uVar11 = (uint)uVar13;
          uVar7 = 0;
          if ((int)uVar11 < (int)local_160) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_144.bHaveTargetLOD = true;
          local_144.TargetLOD = *(EMeshLODIdentifier *)(local_168.Data + uVar14);
          uVar7 = 0;
          if ((int)uVar11 < local_150[0]) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          UE::ToolTarget::CommitMeshDescriptionUpdate
                    ((UToolTarget *)this->_padding_,
                     (FMeshDescription *)(local_158.Data + (longlong)(int)uVar11 * 0x2c0),
                     (FComponentMaterialSet *)0x0,&local_144);
          uVar13 = (ulonglong)(uVar11 + 1);
          uVar14 = uVar14 + 4;
        } while ((int)(uVar11 + 1) < (int)local_160);
      }
      lVar12 = (**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x18))(lVar12 + 0x28);
      DestructItems<FMeshDescription,int>((FMeshDescription *)local_158.Data,local_150[0]);
      if ((FMeshDescription *)local_158.Data != (FMeshDescription *)0x0) {
        FMemory::Free(local_158.Data);
      }
      UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
      ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_f8);
    }
    if (local_168.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data);
    }
  }
  return;
}

// CopyToSpecificLOD @ 14ccf27d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMeshVertexPaintTool::CopyToSpecificLOD(UMeshVertexPaintTool *this)

{
  EMeshLODIdentifier EVar1;
  code *pcVar2;
  UMeshVertexPaintToolUtilityActions *pUVar3;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar4;
  UVertexPaintBasicProperties *pUVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  FText *pFVar10;
  FDynamicMesh3 *pFVar11;
  longlong lVar12;
  undefined1 auStackY_438 [32];
  FCommitMeshParameters local_3f8 [2];
  TVector4<float>_u_0 local_3e8;
  FText local_3d8;
  FText local_3c8;
  FText local_3b8;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_3a8;
  FMeshDescription local_2e8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_438;
  if (this->bTargetSupportsLODs == false) {
    plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
    pcVar2 = *(code **)(*plVar9 + 0x360);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_3d8,L"UMeshVertexPaintTool",L"NoLODsErrorMessage",
                         L"Target Mesh does not support LODs");
    (*pcVar2)(plVar9,pFVar10,4);
    if (local_3d8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_3d8.TextData.Reference + 0x10))();
    }
  }
  else {
    pUVar3 = (this->UtilityActions).field0_0x0.DebugPtr;
    uVar7 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                      (&pUVar3->LODNamesList,&pUVar3->CopyToLODName);
    if (uVar7 == 0xffffffff) {
      plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
      pcVar2 = *(code **)(*plVar9 + 0x360);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_3c8,L"UMeshVertexPaintTool",L"MissingLODMessage",
                           L"Could not find selected LOD on Target Mesh");
      (*pcVar2)(plVar9,pFVar10,4);
      if (local_3c8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3c8.TextData.Reference + 0x10))();
      }
    }
    else {
      pFVar11 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))(this);
      pTVar4 = this->ActiveColorOverlay;
      UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
      TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_3a8,pFVar11,true);
      FMeshDescription::FMeshDescription(&local_2e8);
      uVar8 = 0;
      if ((int)uVar7 < (this->AvailableLODs).ArrayNum) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      EVar1 = *(EMeshLODIdentifier *)
               ((this->AvailableLODs).AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
      pUVar5 = (this->BasicProperties).field0_0x0.DebugPtr;
      local_3e8._0_8_ = *(undefined8 *)&(pUVar5->PaintColor).field0_0x0;
      local_3e8._8_8_ = *(undefined8 *)((longlong)&(pUVar5->PaintColor).field0_0x0 + 8);
      UELocal::GetMeshDescriptionLODWithCopiedVertexColors
                ((UToolTarget *)this->_padding_,EVar1,pFVar11,pTVar4,&local_3a8,
                 (TVector4<float> *)&local_3e8._s_0,&local_2e8);
      lVar12 = (**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar2 = *(code **)(*(longlong *)(lVar12 + 0x28) + 0x10);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          (&local_3b8,L"UMeshVertexPaintTool",L"CopyToSpecificLOD",
                           L"Copy Vertex Colors To LOD");
      (*pcVar2)(lVar12 + 0x28,pFVar10);
      if (local_3b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_3b8.TextData.Reference + 0x10))();
      }
      local_3f8[0].bHaveTargetLOD = true;
      local_3f8[0].TargetLOD = EVar1;
      UE::ToolTarget::CommitMeshDescriptionUpdate
                ((UToolTarget *)this->_padding_,&local_2e8,(FComponentMaterialSet *)0x0,local_3f8);
      lVar12 = (**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x18))(lVar12 + 0x28);
      FMeshDescription::~FMeshDescription(&local_2e8);
      UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
      ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&local_3a8);
    }
  }
  return;
}

// DrawHUD @ 14ccf7d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UMeshVertexPaintTool::DrawHUD
          (UMeshVertexPaintTool *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
  UPolyLassoMarqueeMechanic *pUVar1;
  UVertexPaintBrushFilterProperties *pUVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  UFont *pUVar11;
  FSceneView *this_00;
  longlong lVar12;
  FDynamicMesh3 *this_01;
  size_t sVar13;
  FLinearColor *pFVar14;
  TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *pTVar15;
  TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *pTVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  float fVar21;
  undefined1 auStackY_2c8 [32];
  undefined8 local_288;
  FDynamicMeshOctree3 *pFStack_280;
  FSparseDynamicOctree3 *local_278;
  undefined8 uStack_270;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_248;
  FString local_230;
  TVector<double>_u_0 local_220;
  TVector<double>_u_0 TStack_208;
  undefined1 local_1f0 [32];
  double dStack_1d0;
  double local_1c8;
  TVector<double>_u_0 TStack_1c0;
  TVector<double>_u_0 local_1a8;
  double local_188;
  double dStack_180;
  double local_178;
  TVector<double>_u_0 local_128;
  double dStack_110;
  double local_108;
  double dStack_100;
  TVector<double>_u_0 local_f8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  TVector<double>_u_0 local_a8;
  EIntersectionType local_90 [2];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  if ((this->PolyLassoMechanic).field0_0x0.DebugPtr != (UPolyLassoMarqueeMechanic *)0x0) {
    cVar8 = (**(code **)(this->_padding_ + 0x570))();
    pFVar14 = &FLinearColor::Green;
    pUVar1 = (this->PolyLassoMechanic).field0_0x0.DebugPtr;
    if (cVar8 != '\0') {
      pFVar14 = &FLinearColor::Red;
    }
    fVar21 = (pFVar14->field0_0x0)._s_0.G;
    fVar5 = (pFVar14->field0_0x0)._s_0.B;
    fVar6 = (pFVar14->field0_0x0)._s_0.A;
    (pUVar1->LineColor).field0_0x0._s_0.R = (pFVar14->field0_0x0)._s_0.R;
    (pUVar1->LineColor).field0_0x0._s_0.G = fVar21;
    (pUVar1->LineColor).field0_0x0._s_0.B = fVar5;
    (pUVar1->LineColor).field0_0x0._s_0.A = fVar6;
    pUVar1 = (this->PolyLassoMechanic).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x2e0))(pUVar1,param_1,param_2);
  }
  fVar21 = __real_3f800000;
  if (param_1->bStereoRendering == false) {
    fVar21 = param_1->DPIScale;
  }
  pUVar11 = UEngine::GetSmallFont();
  (**(code **)((longlong)*param_2 + 0x18))(param_2,&local_188);
  this_00 = (FSceneView *)(**(code **)((longlong)*param_2 + 0x10))(param_2);
  local_268._s_0.Z = local_178;
  local_268._s_0.X = local_188;
  local_268._s_0.Y = dStack_180;
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            ((TTransformSRT3<double> *)&this->_padding_,(TVector<double> *)&local_248,
             (TVector<double> *)&local_268);
  lVar12 = (**(code **)(this->_padding_ + 0x440))(this);
  dVar7 = __real_3ff0000000000000;
  pUVar2 = (this->FilterProperties).field0_0x0.DebugPtr;
  if (pUVar2->bShowHitColor == false) {
    return;
  }
  dVar4 = (double)this->_padding_ - local_248._s_0.X;
  local_220._8_4_ = SUB84(local_248._s_0.Y,0);
  local_220._12_4_ = (undefined4)((ulonglong)local_248._8_8_ >> 0x20);
  dVar19 = (double)this->_padding_ - local_248._s_0.Y;
  dVar20 = (double)this->_padding_ - local_248._s_0.Z;
  auVar17._0_8_ = dVar20 * dVar20;
  auVar17._8_8_ = 0;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar19 * dVar19 + dVar4 * dVar4 + auVar17._0_8_;
  auVar18 = sqrtpd(auVar17,auVar18);
  if (auVar18._0_8_ <= 0.0) {
    local_268._s_0.Z = 0.0;
    TStack_208._s_0.X = 0.0;
    TStack_208._s_0.Y = 0.0;
  }
  else {
    dVar3 = __real_3ff0000000000000 / auVar18._0_8_;
    TStack_208._s_0.X = dVar4 * dVar3;
    TStack_208._s_0.Y = dVar19 * dVar3;
    local_268._s_0.Z = dVar20 * dVar3;
  }
  local_220._0_4_ = local_248._0_4_;
  local_220._4_4_ = local_248._4_4_;
  TStack_208._s_0.Z = local_268._s_0.Z;
  local_220._s_0.Z = local_248._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&TStack_208._s_0,__real_3e45798ee0000000);
  if ((pUVar2->bIsolateGeometrySelection == false) ||
     (*(int *)&(this->SelectionTids).Elements.field_0x8 ==
      *(int *)&(this->SelectionTids).Elements.field_0x34)) {
    local_288 = (wchar_t *)&this->Octree;
    local_248._s_0.X =
         (double)UE::Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
                 ::Call;
    pTVar16 = (TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *)&local_248;
    pTVar15 = (TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *)&local_268;
    local_268._s_0.X =
         (double)UE::Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
                 ::Call;
  }
  else {
    local_1f0._8_8_ = &local_230;
    pFStack_280 = &this->Octree;
    local_1f0._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UMeshVertexPaintTool::DrawHUD'::__l8::<lambda_1>,bool,int>::Call;
    pTVar16 = (TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *)&local_268;
    local_288 = (wchar_t *)local_1f0;
    pTVar15 = (TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *)&local_248;
    local_268._s_0.X =
         (double)UE::Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
                 ::Call;
    local_248._s_0.X =
         (double)UE::Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
                 ::Call;
    local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
  }
  local_248._s_0.Y = (double)&local_278;
  local_268._s_0.Y = (double)&local_288;
  local_278 = (FSparseDynamicOctree3 *)&this->Octree;
  uVar9 = UE::Geometry::FSparseDynamicOctree3::FindNearestHitObject
                    (local_278,(TRay<double> *)&local_220._s_0,pTVar15,pTVar16,
                     __real_7fefffffffffffff);
  if ((int)uVar9 < 0) {
    return;
  }
  if (*(int *)(lVar12 + 0x140) * 0x200 + *(int *)(lVar12 + 0x144) <= (int)uVar9) {
    return;
  }
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    (*(longlong *)(lVar12 + 0x148) + (ulonglong)(uVar9 >> 9) * 8) +
                                  (ulonglong)(uVar9 & 0x1ff) * 2) - 1U)) {
    return;
  }
  this_01 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))(this);
  UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
            (this_01,uVar9,(TVector<double> *)(local_1f0 + 0x18),(TVector<double> *)&TStack_1c0._s_0
             ,(TVector<double> *)&local_1a8._s_0);
  local_128._s_0.X = (double)CONCAT44(local_220._4_4_,local_220._0_4_);
  local_128._s_0.Y = (double)CONCAT44(local_220._12_4_,local_220._8_4_);
  local_128._s_0.Z = local_220._s_0.Z;
  dStack_110 = TStack_208._s_0.X;
  local_108 = TStack_208._s_0.Y;
  dStack_100 = TStack_208._s_0.Z;
  local_f8._s_0.X = (double)local_1f0._24_8_;
  local_f8._s_0.Y = dStack_1d0;
  local_f8._s_0.Z = local_1c8;
  dStack_e0 = TStack_1c0._s_0.X;
  local_d8 = TStack_1c0._s_0.Y;
  dStack_d0 = TStack_1c0._s_0.Z;
  local_c8 = local_1a8._s_0.X;
  dStack_c0 = local_1a8._s_0.Y;
  local_b8 = local_1a8._s_0.Z;
  UE::Geometry::TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
            ((TRay<double> *)&local_128._s_0,(TTriangle3<double> *)&local_f8._s_0,&local_b0,
             (TVector<double> *)&local_a8._s_0,local_90);
  local_288 = (wchar_t *)CONCAT44((float)local_a8._s_0.Y,(float)local_a8._s_0.X);
  pFStack_280 = (FDynamicMeshOctree3 *)CONCAT44(pFStack_280._4_4_,(float)local_a8._s_0.Z);
  local_278 = ___xmm_3f800000000000000000000000000000;
  uStack_270 = _UNK_150689648;
  UE::Geometry::TDynamicMeshOverlay<float,4>::GetTriBaryInterpolate<float>
            ((TDynamicMeshOverlay<float,4> *)this->ActiveColorOverlay,uVar9,(float *)&local_288,
             (float *)&local_278);
  FSceneView::WorldToPixel
            (this_00,(TVector<double> *)&this->_padding_,(TVector2<double> *)&local_248);
  ::FString::PrintfImpl(&local_230,L"%.3f %.3f %.3f %.3f");
  if (local_230.Data.ArrayNum == 0) {
    local_288 = L"";
  }
  else {
    uVar10 = 0;
    local_288 = (wchar_t *)local_230.Data.AllocatorInstance.Data;
    if ((UMeshVertexPaintTool *)local_230.Data.AllocatorInstance.Data == (UMeshVertexPaintTool *)0x0
       ) goto LAB_14ccf8247;
  }
  sVar13 = wcslen(local_288);
  uVar10 = (undefined4)sVar13;
LAB_14ccf8247:
  pFStack_280 = (FDynamicMeshOctree3 *)CONCAT44(pFStack_280._4_4_,uVar10);
  local_268._s_0.X = (double)local_288;
  local_268._s_0.Y = (double)pFStack_280;
  FCanvas::DrawShadowedString
            (param_1,local_248._s_0.X * (dVar7 / (double)fVar21),
             local_248._s_0.Y * (dVar7 / (double)fVar21),(TStringView<wchar_t> *)&local_268,pUVar11,
             &FLinearColor::White,&FLinearColor::Black);
  if ((UMeshVertexPaintTool *)local_230.Data.AllocatorInstance.Data != (UMeshVertexPaintTool *)0x0)
  {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  return;
}

// EndChange @ 14ccf8ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMeshVertexPaintTool::EndChange(UMeshVertexPaintTool *this)

{
  undefined1 *puVar1;
  TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange> *pTVar2;
  void *pvVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  FMeshVertexColorPaintChange *pFVar8;
  longlong lVar9;
  FText *pFVar10;
  UInteractiveToolManager *pUVar11;
  longlong *plVar12;
  FMeshVertexColorPaintChange *pFVar13;
  FMeshVertexColorPaintChange *pFVar14;
  undefined1 auStack_108 [32];
  FMeshVertexColorPaintChange *local_e8;
  longlong local_e0;
  FText local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  if (((this->ActiveChangeBuilder).Ptr ==
       (TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ActiveChangeBuilder",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
                         ,0x809,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar2 = (this->ActiveChangeBuilder).Ptr;
  pFVar13 = (pTVar2->Change).Ptr;
  (pTVar2->Change).Ptr = (FMeshVertexColorPaintChange *)0x0;
  pTVar2 = (this->ActiveChangeBuilder).Ptr;
  (this->ActiveChangeBuilder).Ptr =
       (TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange> *)0x0;
  if (pTVar2 != (TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange>
                 *)0x0) {
    *(undefined4 *)&(pTVar2->SavedIndices).field_0x48 = 0;
    pvVar3 = *(void **)&(pTVar2->SavedIndices).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pTVar2->SavedIndices);
    pFVar14 = (pTVar2->Change).Ptr;
    if (pFVar14 != (FMeshVertexColorPaintChange *)0x0) {
      (**(code **)(*(longlong *)pFVar14 + 0x48))(pFVar14,1);
    }
    ::operator_delete(pTVar2,0x58);
  }
  local_c8 = *(longlong *)&pFVar13->field_0x40;
  uVar6 = *(undefined8 *)&pFVar13->field_0x48;
  local_b8 = *(longlong *)&pFVar13->field_0x50;
  uStack_b0 = *(undefined8 *)&pFVar13->field_0x58;
  uVar5 = *(undefined8 *)&pFVar13->field_0x60;
  plStack_a0 = *(longlong **)&pFVar13->field_0x68;
  *(code **)&pFVar13->field_0x40 =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_&),void,UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_&>
       ::Call;
  *(undefined8 *)&pFVar13->field_0x48 = uStack_c0;
  *(undefined4 *)&pFVar13->field_0x50 = 0x529790c0;
  *(undefined4 *)&pFVar13->field_0x54 = 1;
  *(undefined4 *)&pFVar13->field_0x58 = 0x4cc96480;
  *(undefined4 *)&pFVar13->field_0x5c = 1;
  *(undefined4 *)&pFVar13->field_0x60 = (undefined4)local_a8;
  *(undefined4 *)&pFVar13->field_0x64 = local_a8._4_4_;
  *(undefined4 *)&pFVar13->field_0x68 = 0;
  *(undefined4 *)&pFVar13->field_0x6c = 0;
  local_a8 = uVar5;
  uStack_c0 = uVar6;
  if (local_c8 != 0) {
    plVar12 = &local_b8;
    if (plStack_a0 != (longlong *)0x0) {
      plVar12 = plStack_a0;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  local_98 = *(longlong *)&pFVar13->field_0x70;
  uVar6 = *(undefined8 *)&pFVar13->field_0x78;
  local_88 = *(longlong *)&pFVar13->field_0x80;
  uStack_80 = *(undefined8 *)&pFVar13->field_0x88;
  uVar5 = *(undefined8 *)&pFVar13->field_0x90;
  plStack_70 = *(longlong **)&pFVar13->field_0x98;
  *(code **)&pFVar13->field_0x70 =
       UE::Core::Private::Function::
       TFunctionRefCaller<void_(__cdecl*)(UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_&),void,UObject_*,int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&,TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_const_&>
       ::Call;
  *(undefined8 *)&pFVar13->field_0x78 = uStack_90;
  *(undefined4 *)&pFVar13->field_0x80 = 0x529790c0;
  *(undefined4 *)&pFVar13->field_0x84 = 1;
  *(undefined4 *)&pFVar13->field_0x88 = 0x4cc96880;
  *(undefined4 *)&pFVar13->field_0x8c = 1;
  *(undefined4 *)&pFVar13->field_0x90 = (undefined4)local_78;
  *(undefined4 *)&pFVar13->field_0x94 = local_78._4_4_;
  *(undefined4 *)&pFVar13->field_0x98 = 0;
  *(undefined4 *)&pFVar13->field_0x9c = 0;
  uStack_90 = uVar6;
  local_78 = uVar5;
  if (local_98 != 0) {
    plVar12 = &local_88;
    if (plStack_70 != (longlong *)0x0) {
      plVar12 = plStack_70;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  pFVar8 = ::operator_new(0x70);
  pFVar14 = (FMeshVertexColorPaintChange *)0x0;
  if (pFVar8 != (FMeshVertexColorPaintChange *)0x0) {
    *(longlong *)pFVar8 = 0;
    *(undefined8 *)&pFVar8->field_0x8 = 0;
    *(undefined8 *)&pFVar8->field_0x10 = 0;
    *(undefined8 *)&pFVar8->field_0x18 = 0;
    *(undefined8 *)&pFVar8->field_0x20 = 0;
    *(undefined8 *)&pFVar8->field_0x28 = 0;
    *(undefined8 *)&pFVar8->field_0x30 = 0;
    *(undefined8 *)&pFVar8->field_0x38 = 0;
    *(undefined8 *)&pFVar8->field_0x40 = 0;
    *(undefined8 *)&pFVar8->field_0x48 = 0;
    *(undefined8 *)&pFVar8->field_0x50 = 0;
    *(undefined8 *)&pFVar8->field_0x58 = 0;
    *(undefined8 *)&pFVar8->field_0x60 = 0;
    *(undefined8 *)&pFVar8->field_0x68 = 0;
    *(undefined ***)pFVar8 = &___7__TWrappedToolCommandChange_VFMeshVertexColorPaintChange____6B_;
    pFVar14 = pFVar8;
  }
  puVar1 = &pFVar14->field_0x8;
  if ((longlong *)puVar1 != &local_e0) {
    plVar12 = *(longlong **)puVar1;
    *(FMeshVertexColorPaintChange **)puVar1 = pFVar13;
    pFVar13 = (FMeshVertexColorPaintChange *)0x0;
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x48))(plVar12,1);
      pFVar13 = (FMeshVertexColorPaintChange *)0x0;
    }
  }
  local_68 = *(longlong *)&pFVar14->field_0x10;
  uVar6 = *(undefined8 *)&pFVar14->field_0x18;
  local_58 = *(longlong *)&pFVar14->field_0x20;
  uStack_50 = *(undefined8 *)&pFVar14->field_0x28;
  uVar5 = *(undefined8 *)&pFVar14->field_0x30;
  plStack_40 = *(longlong **)&pFVar14->field_0x38;
  *(code **)&pFVar14->field_0x10 =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshVertexPaintTool::EndChange'::__l2::<lambda_3>,void,bool>::Call;
  *(undefined8 *)&pFVar14->field_0x18 = uStack_60;
  *(undefined4 *)&pFVar14->field_0x20 = 0x529790e0;
  *(undefined4 *)&pFVar14->field_0x24 = 1;
  *(UMeshVertexPaintTool **)&pFVar14->field_0x28 = this;
  *(undefined4 *)&pFVar14->field_0x30 = (undefined4)local_48;
  *(undefined4 *)&pFVar14->field_0x34 = local_48._4_4_;
  *(undefined4 *)&pFVar14->field_0x38 = 0;
  *(undefined4 *)&pFVar14->field_0x3c = 0;
  uStack_60 = uVar6;
  local_48 = uVar5;
  if (local_68 != 0) {
    plVar12 = &local_58;
    if (plStack_40 != (longlong *)0x0) {
      plVar12 = plStack_40;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  lVar9 = (**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar4 = *(code **)(*(longlong *)(lVar9 + 0x28) + 0x20);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_d8,L"UMeshVertexPaintTool",L"VertexPaintChange",L"Paint Stroke");
  local_e8 = pFVar14;
  (*pcVar4)(lVar9 + 0x28,this,&local_e8,pFVar10);
  if (local_d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d8.TextData.Reference + 0x10))();
  }
  pUVar11 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  UE::TransactionUtil::FLongTransactionTracker::Close
            ((FLongTransactionTracker *)((longlong)&this->_padding_ + 4),pUVar11);
  if (pFVar13 != (FMeshVertexColorPaintChange *)0x0) {
    (**(code **)(*(longlong *)pFVar13 + 0x48))(pFVar13,1);
  }
  return;
}

// ExternalUpdateValues @ 14ccfa410

void __thiscall
UMeshVertexPaintTool::ExternalUpdateValues
          (UMeshVertexPaintTool *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  UDynamicMeshComponent *pUVar1;
  longlong *plVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *local_28;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *local_20;
  code *local_18;
  TArray<int,TSizedDefaultAllocator<32>_> **local_10;
  
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  local_10 = &local_28;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMeshVertexPaintTool::ExternalUpdateValues'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_&>
             ::Call;
  local_28 = param_1;
  local_20 = param_2;
  (**(code **)(pUVar1->_padding_ + 0xcd0))(pUVar1,&local_18,1);
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
                    /* WARNING: Could not recover jumptable at 0x00014ccfa472. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x368))(plVar2,*(code **)(*plVar2 + 0x368));
  return;
}

// FillChannels @ 14ccfa480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UMeshVertexPaintTool::FillChannels(UMeshVertexPaintTool *this)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  UMeshVertexPaintToolUtilityActions *pUVar6;
  code *pcVar7;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar8;
  longlong lVar9;
  longlong *plVar10;
  FText *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  TVector4<float>_u_0 local_88;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  pUVar6 = (this->UtilityActions).field0_0x0.DebugPtr;
  bVar2 = (pUVar6->TargetChannels).bAlpha;
  bVar3 = (pUVar6->TargetChannels).bBlue;
  bVar4 = (pUVar6->TargetChannels).bGreen;
  fVar1 = pUVar6->SourceValue;
  bVar5 = (pUVar6->TargetChannels).bRed;
  if ((((bVar5 == false) && (bVar4 == false)) && (bVar3 == false)) && (bVar2 == false)) {
    plVar10 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar7 = *(code **)(*plVar10 + 0x360);
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_78,L"UMeshVertexPaintTool",L"NoChannelsSelectedMessage",
                         L"At least one Target Channel must be selected");
    (*pcVar7)(plVar10,pFVar11,4);
    if ((ITextData *)_local_78 != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)_local_78 + 0x10))();
      return;
    }
  }
  else {
    BeginChange(this);
    pTVar8 = this->ActiveColorOverlay;
    uVar18 = *(int *)&pTVar8->field_0x8 * 0x200 + *(int *)&pTVar8->field_0xc;
    uVar16 = 0;
    if ((uVar18 != 0) &&
       (uVar16 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)&pTVar8->field_0x10 - 1U))) {
      uVar15 = 1;
      uVar16 = 1;
      if (1 < (int)uVar18) {
        do {
          lVar9 = (*(undefined8 **)&pTVar8->field_0x10)[uVar15 >> 9];
          if ((*(short *)(lVar9 + (ulonglong)(uVar15 & 0x1ff) * 2) != 0) &&
             (uVar16 = uVar15, *(short *)(lVar9 + (ulonglong)(uVar15 & 0x1ff) * 2) != -1)) break;
          uVar15 = uVar15 + 1;
          uVar16 = uVar15;
        } while ((int)uVar15 < (int)uVar18);
      }
    }
joined_r0x00014ccfa5d8:
    if (uVar16 != uVar18) {
      while( true ) {
        lVar9 = *(longlong *)&pTVar8->field_0x48;
        uVar15 = uVar16 * 4;
        uVar17 = (ulonglong)((uVar16 & 0x3fffffff) >> 7);
        uVar20 = (ulonglong)((uVar16 & 0x3fffffff) >> 7);
        uVar19 = (ulonglong)(uVar15 + 2 & 0x1ff);
        uVar14 = (ulonglong)(uVar15 + 3 & 0x1ff);
        uVar21 = (ulonglong)(uVar15 + 1 & 0x1ff);
        local_78 = *(float *)(*(longlong *)(lVar9 + uVar17 * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
        fStack_74 = *(float *)(*(longlong *)(lVar9 + uVar20 * 8) + uVar21 * 4);
        uVar12 = (ulonglong)((uVar16 & 0x3fffffff) >> 7);
        fStack_70 = *(float *)(*(longlong *)(lVar9 + uVar12 * 8) + uVar19 * 4);
        uVar13 = (ulonglong)((uVar16 & 0x3fffffff) >> 7);
        fStack_6c = *(float *)(*(longlong *)(lVar9 + uVar13 * 8) + uVar14 * 4);
        local_88._s_0.W = fStack_6c;
        if (bVar2 != false) {
          local_88._s_0.W = fVar1;
        }
        local_88._s_0.Z = fStack_70;
        if (bVar3 != false) {
          local_88._s_0.Z = fVar1;
        }
        local_88._s_0.Y = fStack_74;
        if (bVar4 != false) {
          local_88._s_0.Y = fVar1;
        }
        local_88._s_0.X = local_78;
        if (bVar5 != false) {
          local_88._s_0.X = fVar1;
        }
        TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange>::
        UpdateValue((this->ActiveChangeBuilder).Ptr,uVar16,(TVector4<float> *)&local_78,
                    (TVector4<float> *)&local_88._s_0);
        uVar16 = uVar16 + 1;
        *(float *)(*(longlong *)(*(longlong *)&pTVar8->field_0x48 + uVar17 * 8) +
                  (ulonglong)(uVar15 & 0x1ff) * 4) = local_88._s_0.X;
        *(float *)(*(longlong *)(*(longlong *)&pTVar8->field_0x48 + uVar20 * 8) + uVar21 * 4) =
             local_88._s_0.Y;
        *(float *)(*(longlong *)(*(longlong *)&pTVar8->field_0x48 + uVar12 * 8) + uVar19 * 4) =
             local_88._s_0.Z;
        *(float *)(*(longlong *)(*(longlong *)&pTVar8->field_0x48 + uVar13 * 8) + uVar14 * 4) =
             local_88._s_0.W;
        if ((int)uVar18 <= (int)uVar16) break;
        while( true ) {
          lVar9 = *(longlong *)(*(longlong *)&pTVar8->field_0x10 + (ulonglong)(uVar16 >> 9) * 8);
          if ((*(short *)(lVar9 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar9 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) break;
          uVar16 = uVar16 + 1;
          if ((int)uVar18 <= (int)uVar16) goto joined_r0x00014ccfa5d8;
        }
      }
      goto joined_r0x00014ccfa5d8;
    }
    UDynamicMeshComponent::FastNotifyVertexAttributesUpdated
              ((this->DynamicMeshComponent).field0_0x0.DebugPtr,VertexColors);
    plVar10 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*plVar10 + 0x368))(plVar10);
    EndChange(this);
  }
  return;
}

// FindHitSculptMeshTriangleConst @ 14ccfaeb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
UMeshVertexPaintTool::FindHitSculptMeshTriangleConst
          (UMeshVertexPaintTool *this,TRay<double> *param_1)

{
  FDynamicMeshOctree3 *this_00;
  EMeshVertexPaintInteractionType EVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  UMeshVertexPaintTool *local_res8;
  undefined1 local_108 [16];
  code *local_f8 [3];
  undefined8 *local_e0;
  FDynamicMeshOctree3 *local_d8;
  code *local_d0;
  undefined8 **local_c8;
  UMeshVertexPaintTool *local_c0;
  undefined8 local_b8;
  TVector<double> *local_b0;
  char local_a8;
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
  
  EVar1 = ((this->BasicProperties).field0_0x0.DebugPtr)->SubToolType;
  if ((EVar1 != Brush) && (2 < (byte)(EVar1 - TriFill))) {
    return -1;
  }
  if ((((this->FilterProperties).field0_0x0.DebugPtr)->bIsolateGeometrySelection == false) ||
     (*(int *)&(this->SelectionTids).Elements.field_0x8 ==
      *(int *)&(this->SelectionTids).Elements.field_0x34)) {
    cVar5 = '\0';
  }
  else {
    cVar5 = '\x01';
  }
  this_00 = &this->Octree;
  if (*(char *)(this->_padding_ + 0xd8) == '\0') {
    uVar3 = (**(code **)(this->_padding_ + 0x438))(this);
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
    plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x398))(plVar4);
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_98);
    local_f8[2] = (code *)local_88;
    local_f8[0] = (code *)local_98;
    local_f8[1] = (code *)dStack_90;
    UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
              ((TTransformSRT3<double> *)&this->_padding_,&local_38,(TVector<double> *)local_f8);
    local_108._8_8_ = &local_c0;
    local_108._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UMeshVertexPaintTool::FindHitSculptMeshTriangleConst'::__l13::<lambda_2>,bool,int>
         ::Call;
    local_e0 = (undefined8 *)local_108;
    local_c8 = &local_e0;
    local_d0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
               ::Call;
    local_f8[1] = (code *)&local_res8;
    local_f8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
                  ::Call;
    local_res8 = (UMeshVertexPaintTool *)this_00;
    local_d8 = this_00;
    local_c0 = this;
    local_b8 = uVar3;
    local_b0 = &local_38;
    local_a8 = cVar5;
    iVar2 = UE::Geometry::FSparseDynamicOctree3::FindNearestHitObject
                      ((FSparseDynamicOctree3 *)this_00,param_1,
                       (TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *)local_f8
                       ,(TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *)
                        &local_d0,__real_7fefffffffffffff);
  }
  else if (cVar5 == '\0') {
    iVar2 = UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject
                      (this_00,param_1,__real_7fefffffffffffff);
  }
  else {
    local_108._8_8_ = &local_res8;
    local_108._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UMeshVertexPaintTool::FindHitSculptMeshTriangleConst'::__l11::<lambda_1>,bool,int>
         ::Call;
    local_res8 = this;
    iVar2 = UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject
                      (this_00,param_1,(TFunctionRef<bool___cdecl(int)> *)local_108,
                       __real_7fefffffffffffff);
  }
  return iVar2;
}

// FindHitTargetMeshTriangleConst @ 14ccfb2c0

int __thiscall
UMeshVertexPaintTool::FindHitTargetMeshTriangleConst
          (UMeshVertexPaintTool *this,TRay<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
                     ,0x529,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return -1;
}

// FloodFillColorAction @ 14ccfb470

void __thiscall
UMeshVertexPaintTool::FloodFillColorAction(UMeshVertexPaintTool *this,FLinearColor *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  short sVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint local_38 [4];
  
  lVar9 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  pTVar2 = &this->TempROIBuffer;
  piVar1 = &(this->TempROIBuffer).ArrayMax;
  (this->TempROIBuffer).ArrayNum = 0;
  if ((this->TempROIBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  uVar10 = *(uint *)(lVar9 + 0x170);
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
  }
  if (*piVar1 < (int)uVar10) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar10,&pTVar2->AllocatorInstance,(this->TempROIBuffer).ArrayNum,piVar1);
  }
  uVar11 = *(int *)(lVar9 + 0x140) * 0x200 + *(int *)(lVar9 + 0x144);
  uVar10 = 0;
  if ((uVar11 != 0) &&
     (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar9 + 0x148) - 1U))) {
    uVar10 = 1;
    bVar12 = uVar11 == 1;
    if ((int)uVar11 < 2) goto LAB_14ccfb579;
    do {
      sVar4 = *(short *)((*(undefined8 **)(lVar9 + 0x148))[uVar10 >> 9] +
                        (ulonglong)(uVar10 & 0x1ff) * 2);
      if ((sVar4 != 0) && (sVar4 != -1)) break;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)uVar11);
  }
  bVar12 = uVar10 == uVar11;
LAB_14ccfb579:
  if (!bVar12) {
LAB_14ccfb580:
    do {
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      local_38[0] = uVar10;
      if (((pFVar5 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar5 + (longlong)*piVar1 * 4)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = (this->TempROIBuffer).ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      uVar10 = uVar10 + 1;
      (this->TempROIBuffer).ArrayNum = iVar8 + 1;
      *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_38[0];
      if ((int)uVar10 < (int)uVar11) {
        do {
          lVar3 = (ulonglong)(uVar10 >> 9) * 8;
          lVar7 = (ulonglong)(uVar10 & 0x1ff) * 2;
          if ((*(short *)(lVar7 + *(longlong *)(*(longlong *)(lVar9 + 0x148) + lVar3)) != 0) &&
             (*(short *)(lVar7 + *(longlong *)(lVar3 + *(longlong *)(lVar9 + 0x148))) != -1))
          goto LAB_14ccfb580;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar11);
      }
    } while (uVar10 != uVar11);
  }
  SetTrianglesToVertexColor(this,pTVar2,param_1);
  return;
}

// GetActiveBrushOp @ 14ccfc7d0

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> * __thiscall
UMeshVertexPaintTool::GetActiveBrushOp(UMeshVertexPaintTool *this)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x570))();
  plVar2 = &this->_padding_;
  if (cVar1 != '\0') {
    plVar2 = &this->_padding_;
  }
  return (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> *)plVar2;
}

// GetBaseMesh @ 14ccfddc0

FDynamicMesh3 * __thiscall UMeshVertexPaintTool::GetBaseMesh(UMeshVertexPaintTool *this)

{
  code *pcVar1;
  bool bVar2;
  FDynamicMesh3 *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\MeshVertexPaintTool.h"
                     ,0x238,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDynamicMesh3 *)(*pcVar1)();
    return pFVar3;
  }
  return (FDynamicMesh3 *)0x0;
}

// GetBaseMesh @ 14ccfde00

FDynamicMesh3 * __thiscall UMeshVertexPaintTool::GetBaseMesh(UMeshVertexPaintTool *this)

{
  code *pcVar1;
  bool bVar2;
  FDynamicMesh3 *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\MeshVertexPaintTool.h"
                     ,0x239,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDynamicMesh3 *)(*pcVar1)();
    return pFVar3;
  }
  return (FDynamicMesh3 *)0x0;
}

// GetColorForGroup @ 14ccfe2a0

FColor __thiscall UMeshVertexPaintTool::GetColorForGroup(UMeshVertexPaintTool *this,int param_1)

{
  UE::Geometry::LinearColors::SelectFColor(param_1);
  return (FColor)(FColor_u_0)param_1;
}

// GetPrivateStaticClass @ 14cd007f0

UClass * __cdecl UMeshVertexPaintTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshVertexPaintTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshVertexPaintTool",
               &Z_Registration_Info_UClass_UMeshVertexPaintTool.InnerSingleton,
               StaticRegisterNativesUMeshVertexPaintTool,0x1340,0x10,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UMeshVertexPaintTool>,
               InternalVTableHelperCtorCaller<UMeshVertexPaintTool>,local_res8,
               UMeshSculptToolBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshVertexPaintTool.InnerSingleton;
}

// GetPropertyCacheIdentifier @ 14cd02210

FString * __thiscall
UMeshVertexPaintTool::GetPropertyCacheIdentifier
          (UMeshVertexPaintTool *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"MeshVertexPaintTool");
  return __return_storage_ptr__;
}

// GetSculptMeshComponent @ 14cd023a0

UBaseDynamicMeshComponent * __thiscall
UMeshVertexPaintTool::GetSculptMeshComponent(UMeshVertexPaintTool *this)

{
  return (UBaseDynamicMeshComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr;
}

// GetStampTemporalFlowRate @ 14cd02490

float __thiscall UMeshVertexPaintTool::GetStampTemporalFlowRate(UMeshVertexPaintTool *this)

{
  return __real_3f800000;
}

// HasAccept @ 14cd03460

bool __thiscall UMeshVertexPaintTool::HasAccept(UMeshVertexPaintTool *this)

{
  return true;
}

// HasCancel @ 14cd03500

bool __thiscall UMeshVertexPaintTool::HasCancel(UMeshVertexPaintTool *this)

{
  return true;
}

// HaveVisibilityFilter @ 14cd03850

bool __thiscall UMeshVertexPaintTool::HaveVisibilityFilter(UMeshVertexPaintTool *this)

{
  UVertexPaintBrushFilterProperties *pUVar1;
  
  pUVar1 = (this->FilterProperties).field0_0x0.DebugPtr;
  if (((pUVar1->bIsolateGeometrySelection == false) ||
      (*(int *)&(this->SelectionTids).Elements.field_0x8 ==
       *(int *)&(this->SelectionTids).Elements.field_0x34)) && (pUVar1->VisibilityFilter == None)) {
    return false;
  }
  return true;
}

// InitializeElementROIFromTriangleROI @ 14cd05400

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMeshVertexPaintTool::InitializeElementROIFromTriangleROI
          (UMeshVertexPaintTool *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  int *piVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_01;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  ForElementType<FSetElementId> FVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  uint uVar12;
  ulonglong uVar13;
  ForElementType<FSetElementId> FVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  ulonglong uVar19;
  TDynamicMeshOverlay<float,4> *this_02;
  ulonglong uVar20;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  char local_res18;
  undefined1 local_res20 [8];
  undefined1 local_e8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_e0;
  uint local_d0;
  undefined4 local_cc;
  int local_c8;
  int local_c4;
  TDynamicMeshOverlay<float,4> *local_c0;
  uint local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8 [2];
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  FScriptContainerElement *local_90;
  undefined8 local_88;
  uint local_80;
  int local_78;
  int local_74;
  int local_70 [2];
  longlong local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_60 [2];
  
  (this->ROIElementBuffer).ArrayNum = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  if ((this->ROIElementBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->ROIElementBuffer).AllocatorInstance,0,
               &(this->ROIElementBuffer).ArrayMax);
  }
  piVar1 = &(this->ROIColorBuffer).ArrayMax;
  (this->ROIColorBuffer).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,0,&(this->ROIColorBuffer).AllocatorInstance,0,piVar1);
  }
  this_00 = &this->ROIElementSet;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(this_00);
  local_68 = (**(code **)(this->_padding_ + 0x440))(this);
  this_02 = (TDynamicMeshOverlay<float,4> *)this->ActiveColorOverlay;
  local_c0 = this_02;
  if (((this->BasicProperties).field0_0x0.DebugPtr)->bHardEdges == false) {
    this_01 = &this->TempVertexSet;
    local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e0.ArrayNum = 0;
    local_e0.ArrayMax = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(this_01);
    local_b8 = param_1->ArrayNum;
    uVar13 = (ulonglong)(int)local_b8;
    pFVar17 = (param_1->AllocatorInstance).Data;
    local_a0 = pFVar17 + uVar13 * 4;
    while( true ) {
      pFVar16 = local_a0;
      local_90 = pFVar17;
      if (param_1->ArrayNum != (int)uVar13) {
        local_e8[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_e8);
      }
      if (pFVar17 == pFVar16) break;
      uVar13 = (ulonglong)(*(uint *)pFVar17 & 0x1ff);
      lVar5 = *(longlong *)
               (*(longlong *)(local_68 + 0x130) + (ulonglong)(*(uint *)pFVar17 >> 9) * 8);
      local_88 = *(undefined8 *)(lVar5 + uVar13 * 0xc);
      uVar10 = *(uint *)(lVar5 + 8 + uVar13 * 0xc);
      uVar15 = (uint)local_88;
      local_d0 = (uint)local_88;
      local_80 = uVar10;
      if (*(int *)&(this->TempVertexSet).Elements.field_0x8 !=
          *(int *)&(this->TempVertexSet).Elements.field_0x34) {
        FVar6 = (this->TempVertexSet).Hash.SecondaryData;
        FVar14 = (ForElementType<FSetElementId>)&(this->TempVertexSet).Hash;
        if (FVar6 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = FVar6;
        }
        iVar9 = *(int *)((longlong)FVar14 +
                        (ulonglong)((this->TempVertexSet).HashSize - 1U & (uint)local_88) * 4);
        if (iVar9 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this_01->Elements + (longlong)iVar9 * 0xc) == (uint)local_88
               ) goto LAB_14cd0572f;
            iVar9 = *(int *)(*(longlong *)&this_01->Elements + 4 + (longlong)iVar9 * 0xc);
          } while (iVar9 != -1);
        }
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (this_01,&local_c8,(bool *)&local_d0);
      iVar9 = local_e0.ArrayMax;
      if ((longlong)local_e0._8_8_ < 0) {
        local_e0._8_8_ = (ulonglong)(uint)local_e0.ArrayMax << 0x20;
        if (iVar9 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_e0.AllocatorInstance,0,&local_e0.ArrayMax);
        }
      }
      else {
        local_e0._8_8_ = (ulonglong)(uint)local_e0.ArrayMax << 0x20;
      }
      UE::Geometry::TDynamicMeshOverlay<float,4>::GetVertexElements(this_02,uVar15,&local_e0);
      iVar9 = local_e0.ArrayNum;
      uVar13 = (ulonglong)local_e0.ArrayNum;
      pFVar17 = local_e0.AllocatorInstance.Data + uVar13 * 4;
      FVar18.Data = local_e0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar13 != iVar9) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        this_02 = local_c0;
        if (FVar18.Data == pFVar17) break;
        local_cc = *(undefined4 *)FVar18.Data;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (this_00,&local_c4,(bool *)&local_cc);
        uVar13 = local_e0._8_8_ & 0xffffffff;
        FVar18.Data = FVar18.Data + 4;
      }
LAB_14cd0572f:
      uVar15 = local_88._4_4_;
      local_d0 = local_88._4_4_;
      if (*(int *)&(this->TempVertexSet).Elements.field_0x8 !=
          *(int *)&(this->TempVertexSet).Elements.field_0x34) {
        FVar6 = (this->TempVertexSet).Hash.SecondaryData;
        FVar14 = (ForElementType<FSetElementId>)&(this->TempVertexSet).Hash;
        if (FVar6 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = FVar6;
        }
        iVar9 = *(int *)((longlong)FVar14 +
                        (ulonglong)((this->TempVertexSet).HashSize - 1U & local_88._4_4_) * 4);
        if (iVar9 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this_01->Elements + (longlong)iVar9 * 0xc) == local_88._4_4_
               ) goto LAB_14cd0582b;
            iVar9 = *(int *)(*(longlong *)&this_01->Elements + 4 + (longlong)iVar9 * 0xc);
          } while (iVar9 != -1);
        }
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (this_01,&local_c8,(bool *)&local_d0);
      iVar9 = local_e0.ArrayMax;
      if ((longlong)local_e0._8_8_ < 0) {
        local_e0._8_8_ = (ulonglong)(uint)local_e0.ArrayMax << 0x20;
        if (iVar9 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_e0.AllocatorInstance,0,&local_e0.ArrayMax);
        }
      }
      else {
        local_e0._8_8_ = (ulonglong)(uint)local_e0.ArrayMax << 0x20;
      }
      UE::Geometry::TDynamicMeshOverlay<float,4>::GetVertexElements(this_02,uVar15,&local_e0);
      iVar9 = local_e0.ArrayNum;
      uVar13 = (ulonglong)local_e0.ArrayNum;
      pFVar17 = local_e0.AllocatorInstance.Data + uVar13 * 4;
      FVar18.Data = local_e0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar13 != iVar9) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (FVar18.Data == pFVar17) break;
        local_cc = *(undefined4 *)FVar18.Data;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (this_00,&local_c4,(bool *)&local_cc);
        uVar13 = local_e0._8_8_ & 0xffffffff;
        FVar18.Data = FVar18.Data + 4;
      }
LAB_14cd0582b:
      local_d0 = uVar10;
      if (*(int *)&(this->TempVertexSet).Elements.field_0x8 !=
          *(int *)&(this->TempVertexSet).Elements.field_0x34) {
        FVar6 = (this->TempVertexSet).Hash.SecondaryData;
        FVar14 = (ForElementType<FSetElementId>)&(this->TempVertexSet).Hash;
        if (FVar6 != (ForElementType<FSetElementId>)0x0) {
          FVar14 = FVar6;
        }
        iVar9 = *(int *)((longlong)FVar14 +
                        (ulonglong)((this->TempVertexSet).HashSize - 1U & uVar10) * 4);
        if (iVar9 != -1) {
          do {
            if (*(uint *)(*(longlong *)&this_01->Elements + (longlong)iVar9 * 0xc) == uVar10)
            goto LAB_14cd0591e;
            iVar9 = *(int *)(*(longlong *)&this_01->Elements + 4 + (longlong)iVar9 * 0xc);
          } while (iVar9 != -1);
        }
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (this_01,&local_c8,(bool *)&local_d0);
      iVar9 = local_e0.ArrayMax;
      if ((longlong)local_e0._8_8_ < 0) {
        local_e0._8_8_ = (ulonglong)(uint)local_e0.ArrayMax << 0x20;
        if (iVar9 != 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_e0.AllocatorInstance,0,&local_e0.ArrayMax);
        }
      }
      else {
        local_e0._8_8_ = (ulonglong)(uint)local_e0.ArrayMax << 0x20;
      }
      UE::Geometry::TDynamicMeshOverlay<float,4>::GetVertexElements(local_c0,uVar10,&local_e0);
      iVar9 = local_e0.ArrayNum;
      uVar13 = (ulonglong)local_e0.ArrayNum;
      pFVar17 = local_e0.AllocatorInstance.Data + uVar13 * 4;
      FVar18.Data = local_e0.AllocatorInstance.Data;
      while( true ) {
        if ((int)uVar13 != iVar9) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (FVar18.Data == pFVar17) break;
        local_cc = *(undefined4 *)FVar18.Data;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (this_00,&local_c4,(bool *)&local_cc);
        uVar13 = local_e0._8_8_ & 0xffffffff;
        FVar18.Data = FVar18.Data + 4;
      }
LAB_14cd0591e:
      pFVar17 = local_90 + 4;
      uVar13 = (ulonglong)local_b8;
      this_02 = local_c0;
      param_1 = local_res10;
    }
    if (local_e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.AllocatorInstance.Data);
    }
  }
  else {
    pFVar16 = (param_1->AllocatorInstance).Data;
    iVar9 = param_1->ArrayNum;
    pFVar17 = pFVar16 + (longlong)iVar9 * 4;
    while( true ) {
      if (param_1->ArrayNum != iVar9) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar16 == pFVar17) break;
      pFVar4 = (this_02->ElementTriangles).Blocks.AllocatorInstance.Data;
      uVar10 = *(int *)pFVar16 * 3;
      iVar3 = *(int *)(*(longlong *)(pFVar4 + (ulonglong)(uVar10 >> 9) * 8) +
                      (ulonglong)(uVar10 & 0x1ff) * 4);
      if (-1 < iVar3) {
        local_ac = *(undefined4 *)
                    (*(longlong *)(pFVar4 + (ulonglong)(uVar10 + 1 >> 9) * 8) +
                    (ulonglong)(uVar10 + 1 & 0x1ff) * 4);
        local_a8[0] = *(undefined4 *)
                       (*(longlong *)(pFVar4 + (ulonglong)(uVar10 + 2 >> 9) * 8) +
                       (ulonglong)(uVar10 + 2 & 0x1ff) * 4);
        local_b0 = iVar3;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (this_00,&local_78,(bool *)&local_b0);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (this_00,&local_74,(bool *)&local_ac);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (this_00,local_70,(bool *)local_a8);
      }
      pFVar16 = pFVar16 + 4;
    }
  }
  if (local_res18 != '\0') {
    pTVar11 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                        (&this->ROIElementSet,local_60);
    pTVar2 = &this->ROIElementBuffer;
    if (pTVar2 != pTVar11) {
      pFVar17 = (pTVar2->AllocatorInstance).Data;
      if (pFVar17 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar17);
      }
      (pTVar2->AllocatorInstance).Data = (pTVar11->AllocatorInstance).Data;
      (pTVar11->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->ROIElementBuffer).ArrayNum = pTVar11->ArrayNum;
      (this->ROIElementBuffer).ArrayMax = pTVar11->ArrayMax;
      pTVar11->ArrayNum = 0;
      pTVar11->ArrayMax = 0;
    }
    uVar13 = 0;
    if (local_60[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].AllocatorInstance.Data);
    }
    TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->ROIColorBuffer,(this->ROIElementBuffer).ArrayNum,Default);
    uVar19 = uVar13;
    uVar20 = uVar13;
    if (0 < (this->ROIElementBuffer).ArrayNum) {
      do {
        uVar15 = (uint)uVar13;
        uVar10 = 0;
        if ((int)uVar15 < (this->ROIElementBuffer).ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar10 = *(uint *)((this->ROIElementBuffer).AllocatorInstance.Data + uVar20);
        uVar12 = uVar10 * 4;
        pFVar17 = (local_c0->Elements).Blocks.AllocatorInstance.Data;
        local_a0 = (FScriptContainerElement *)
                   CONCAT44(*(undefined4 *)
                             (*(longlong *)(pFVar17 + (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
                             (ulonglong)(uVar12 + 1 & 0x1ff) * 4),
                            *(undefined4 *)
                             (*(longlong *)(pFVar17 + (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
                             (ulonglong)(uVar12 & 0x1ff) * 4));
        uStack_98 = *(undefined4 *)
                     (*(longlong *)(pFVar17 + (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
                     (ulonglong)(uVar12 + 2 & 0x1ff) * 4);
        uStack_94 = *(undefined4 *)
                     (*(longlong *)(pFVar17 + (ulonglong)((uVar10 & 0x3fffffff) >> 7) * 8) +
                     (ulonglong)(uVar12 + 3 & 0x1ff) * 4);
        uVar10 = 0;
        if ((int)uVar15 < (this->ROIColorBuffer).ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar13 = (ulonglong)(uVar15 + 1);
        pFVar17 = (this->ROIColorBuffer).AllocatorInstance.Data + uVar19;
        *(FScriptContainerElement **)pFVar17 = local_a0;
        *(ulonglong *)(pFVar17 + 8) = CONCAT44(uStack_94,uStack_98);
        uVar19 = uVar19 + 0x10;
        uVar20 = uVar20 + 4;
      } while ((int)(uVar15 + 1) < (this->ROIElementBuffer).ArrayNum);
    }
  }
  return;
}

// InvertChannels @ 14cd07f80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UMeshVertexPaintTool::InvertChannels(UMeshVertexPaintTool *this)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  UMeshVertexPaintToolUtilityActions *pUVar5;
  code *pcVar6;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar7;
  longlong lVar8;
  float fVar9;
  longlong *plVar10;
  FText *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  TVector4<float>_u_0 local_98;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  
  pUVar5 = (this->UtilityActions).field0_0x0.DebugPtr;
  bVar1 = (pUVar5->TargetChannels).bAlpha;
  bVar2 = (pUVar5->TargetChannels).bBlue;
  bVar3 = (pUVar5->TargetChannels).bGreen;
  bVar4 = (pUVar5->TargetChannels).bRed;
  if ((((bVar4 == false) && (bVar3 == false)) && (bVar2 == false)) && (bVar1 == false)) {
    plVar10 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar6 = *(code **)(*plVar10 + 0x360);
    pFVar11 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_88,L"UMeshVertexPaintTool",L"NoChannelsSelectedMessage",
                         L"At least one Target Channel must be selected");
    (*pcVar6)(plVar10,pFVar11,4);
    if ((ITextData *)_local_88 != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)_local_88 + 0x10))();
      return;
    }
  }
  else {
    BeginChange(this);
    fVar9 = __real_3f800000;
    pTVar7 = this->ActiveColorOverlay;
    uVar18 = *(int *)&pTVar7->field_0x8 * 0x200 + *(int *)&pTVar7->field_0xc;
    uVar16 = 0;
    if ((uVar18 != 0) &&
       (uVar16 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)&pTVar7->field_0x10 - 1U))) {
      uVar15 = 1;
      uVar16 = 1;
      if (1 < (int)uVar18) {
        do {
          lVar8 = (*(undefined8 **)&pTVar7->field_0x10)[uVar15 >> 9];
          if ((*(short *)(lVar8 + (ulonglong)(uVar15 & 0x1ff) * 2) != 0) &&
             (uVar16 = uVar15, *(short *)(lVar8 + (ulonglong)(uVar15 & 0x1ff) * 2) != -1)) break;
          uVar15 = uVar15 + 1;
          uVar16 = uVar15;
        } while ((int)uVar15 < (int)uVar18);
      }
    }
joined_r0x00014cd080b9:
    if (uVar16 != uVar18) {
      while( true ) {
        lVar8 = *(longlong *)&pTVar7->field_0x48;
        uVar15 = uVar16 * 4;
        uVar17 = (ulonglong)((uVar16 & 0x3fffffff) >> 7);
        uVar20 = (ulonglong)((uVar16 & 0x3fffffff) >> 7);
        uVar19 = (ulonglong)(uVar15 + 2 & 0x1ff);
        uVar14 = (ulonglong)(uVar15 + 3 & 0x1ff);
        uVar21 = (ulonglong)(uVar15 + 1 & 0x1ff);
        local_88 = *(float *)(*(longlong *)(lVar8 + uVar17 * 8) + (ulonglong)(uVar15 & 0x1ff) * 4);
        fStack_84 = *(float *)(*(longlong *)(lVar8 + uVar20 * 8) + uVar21 * 4);
        uVar12 = (ulonglong)((uVar16 & 0x3fffffff) >> 7);
        fStack_80 = *(float *)(*(longlong *)(lVar8 + uVar12 * 8) + uVar19 * 4);
        uVar13 = (ulonglong)((uVar16 & 0x3fffffff) >> 7);
        fStack_7c = *(float *)(*(longlong *)(lVar8 + uVar13 * 8) + uVar14 * 4);
        local_98._s_0.W = fStack_7c;
        if (bVar1 != false) {
          local_98._s_0.W = fVar9 - fStack_7c;
          if (0.0 <= local_98._s_0.W) {
            if (fVar9 <= local_98._s_0.W) {
              local_98._s_0.W = fVar9;
            }
          }
          else {
            local_98._s_0.W = 0.0;
          }
        }
        local_98._s_0.Z = fStack_80;
        if (bVar2 != false) {
          local_98._s_0.Z = fVar9 - fStack_80;
          if (0.0 <= local_98._s_0.Z) {
            if (fVar9 <= local_98._s_0.Z) {
              local_98._s_0.Z = fVar9;
            }
          }
          else {
            local_98._s_0.Z = 0.0;
          }
        }
        local_98._s_0.Y = fStack_84;
        if (bVar3 != false) {
          local_98._s_0.Y = fVar9 - fStack_84;
          if (0.0 <= local_98._s_0.Y) {
            if (fVar9 <= local_98._s_0.Y) {
              local_98._s_0.Y = fVar9;
            }
          }
          else {
            local_98._s_0.Y = 0.0;
          }
        }
        local_98._s_0.X = local_88;
        if (bVar4 != false) {
          local_98._s_0.X = fVar9 - local_88;
          if (0.0 <= local_98._s_0.X) {
            if (fVar9 <= local_98._s_0.X) {
              local_98._s_0.X = fVar9;
            }
          }
          else {
            local_98._s_0.X = 0.0;
          }
        }
        TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange>::
        UpdateValue((this->ActiveChangeBuilder).Ptr,uVar16,(TVector4<float> *)&local_88,
                    (TVector4<float> *)&local_98._s_0);
        uVar16 = uVar16 + 1;
        *(float *)(*(longlong *)(*(longlong *)&pTVar7->field_0x48 + uVar17 * 8) +
                  (ulonglong)(uVar15 & 0x1ff) * 4) = local_98._s_0.X;
        *(float *)(*(longlong *)(*(longlong *)&pTVar7->field_0x48 + uVar20 * 8) + uVar21 * 4) =
             local_98._s_0.Y;
        *(float *)(*(longlong *)(*(longlong *)&pTVar7->field_0x48 + uVar12 * 8) + uVar19 * 4) =
             local_98._s_0.Z;
        *(float *)(*(longlong *)(*(longlong *)&pTVar7->field_0x48 + uVar13 * 8) + uVar14 * 4) =
             local_98._s_0.W;
        if ((int)uVar18 <= (int)uVar16) break;
        while( true ) {
          lVar8 = *(longlong *)(*(longlong *)&pTVar7->field_0x10 + (ulonglong)(uVar16 >> 9) * 8);
          if ((*(short *)(lVar8 + (ulonglong)(uVar16 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar8 + (ulonglong)(uVar16 & 0x1ff) * 2) != -1)) break;
          uVar16 = uVar16 + 1;
          if ((int)uVar18 <= (int)uVar16) goto joined_r0x00014cd080b9;
        }
      }
      goto joined_r0x00014cd080b9;
    }
    UDynamicMeshComponent::FastNotifyVertexAttributesUpdated
              ((this->DynamicMeshComponent).field0_0x0.DebugPtr,VertexColors);
    plVar10 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*plVar10 + 0x368))(plVar10);
    EndChange(this);
  }
  return;
}

// IsInBrushSubMode @ 14cd086b0

bool __thiscall UMeshVertexPaintTool::IsInBrushSubMode(UMeshVertexPaintTool *this)

{
  EMeshVertexPaintInteractionType EVar1;
  
  EVar1 = ((this->BasicProperties).field0_0x0.DebugPtr)->SubToolType;
  if ((EVar1 != Brush) && (2 < (byte)(EVar1 - TriFill))) {
    return false;
  }
  return true;
}

// IsInputSelectionValidOnOutput @ 14cd08710

bool __thiscall UMeshVertexPaintTool::IsInputSelectionValidOnOutput(UMeshVertexPaintTool *this)

{
  return true;
}

// OnBeginStroke @ 14cd0e810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMeshVertexPaintTool::OnBeginStroke(UMeshVertexPaintTool *this,TRay<double> *param_1)

{
  TObjectPtr<UVertexPaintBasicProperties> *pTVar1;
  longlong *this_00;
  FScriptContainerElement *pFVar2;
  UVertexColorPaintBrushOpProps *pUVar3;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char cVar12;
  bool bVar13;
  uint uVar14;
  longlong *plVar15;
  UObject *pUVar16;
  FDateTime FVar17;
  TFrame3<double> *pTVar18;
  double *pdVar19;
  undefined8 uVar20;
  uint uVar21;
  longlong lVar22;
  uint uVar23;
  longlong lVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  TVector<double>_u_0 local_d8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  TFrame3<double> local_98 [2];
  
  UpdateBrushPosition(this,param_1);
  pUVar3 = (this->PaintBrushOpProperties).field0_0x0.DebugPtr;
  pTVar1 = &this->BasicProperties;
  if (pUVar3 != (UVertexColorPaintBrushOpProps *)0x0) {
    uVar20 = *(undefined8 *)
              ((longlong)&(((pTVar1->field0_0x0).DebugPtr)->PaintColor).field0_0x0 + 8);
    *(undefined8 *)&(pUVar3->Color).field0_0x0 =
         *(undefined8 *)&(((pTVar1->field0_0x0).DebugPtr)->PaintColor).field0_0x0;
    *(undefined8 *)((longlong)&(pUVar3->Color).field0_0x0 + 8) = uVar20;
    *(uint *)&((this->PaintBrushOpProperties).field0_0x0.DebugPtr)->_padding_ =
         (uint)((pTVar1->field0_0x0).DebugPtr)->BlendMode;
    *(bool *)((longlong)&((this->PaintBrushOpProperties).field0_0x0.DebugPtr)->_padding_ + 4) =
         ((pTVar1->field0_0x0).DebugPtr)->SubToolType == Brush;
  }
  pUVar3 = (this->EraseBrushOpProperties).field0_0x0.DebugPtr;
  if (pUVar3 != (UVertexColorPaintBrushOpProps *)0x0) {
    uVar20 = *(undefined8 *)
              ((longlong)&(((pTVar1->field0_0x0).DebugPtr)->EraseColor).field0_0x0 + 8);
    *(undefined8 *)&(pUVar3->Color).field0_0x0 =
         *(undefined8 *)&(((pTVar1->field0_0x0).DebugPtr)->EraseColor).field0_0x0;
    *(undefined8 *)((longlong)&(pUVar3->Color).field0_0x0 + 8) = uVar20;
    *(undefined4 *)&((this->EraseBrushOpProperties).field0_0x0.DebugPtr)->_padding_ = 0;
    *(bool *)((longlong)&((this->EraseBrushOpProperties).field0_0x0.DebugPtr)->_padding_ + 4) =
         ((pTVar1->field0_0x0).DebugPtr)->SubToolType == Brush;
  }
  plVar15 = (longlong *)(**(code **)(this->_padding_ + 0x478))(this);
  cVar12 = (**(code **)(this->_padding_ + 0x570))(this);
  if ((cVar12 == '\0') || (((pTVar1->field0_0x0).DebugPtr)->SecondaryActionType != Smooth)) {
    pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar15 + 8));
    fVar25 = (float)((pTVar1->field0_0x0).DebugPtr)->Strength;
    fVar25 = fVar25 * fVar25;
  }
  else {
    pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar15 + 8));
    fVar25 = (float)((double)(((pTVar1->field0_0x0).DebugPtr)->SmoothStrength * __real_3f000000) +
                    __real_3f847ae147ae147b);
  }
  (**(code **)(*(longlong *)pUVar16 + 0x2e0))(pUVar16,fVar25);
  pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar15 + 8));
  (**(code **)(*(longlong *)pUVar16 + 0x2e8))(pUVar16,*(undefined4 *)(this->_padding_ + 0xcc));
  this_00 = &this->_padding_;
  *this_00 = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  lVar24 = (**(code **)(this->_padding_ + 0x4a0))(this);
  this->_padding_ = lVar24;
  lVar24 = (**(code **)(this->_padding_ + 0x4a8))(this);
  this->_padding_ = lVar24;
  cVar12 = (**(code **)(this->_padding_ + 0x578))(this);
  lVar24 = __real_3ff0000000000000;
  if (cVar12 != '\0') {
    lVar24 = __real_bff0000000000000;
  }
  this->_padding_ = lVar24;
  lVar24 = (**(code **)(this->_padding_ + 0x4c8))(this);
  this->_padding_ = lVar24;
  lVar24 = (**(code **)(this->_padding_ + 0x4b8))(this);
  this->_padding_ = lVar24;
  FVar17 = FDateTime::Now();
  this->_padding_ = *(longlong *)FVar17.Ticks;
  if (this->bApplySymmetry != false) {
    local_d8._s_0.X = (double)this->_padding_;
    local_d8._s_0.Y = (double)this->_padding_;
    local_d8._s_0.Z = (double)this->_padding_;
    lStack_c0 = this->_padding_;
    local_b8 = this->_padding_;
    lStack_b0 = this->_padding_;
    local_a8 = this->_padding_;
    pTVar18 = UE::Geometry::FMeshPlanarSymmetry::GetPositiveSideFrame
                        ((this->Symmetry).Ptr,local_98,(TFrame3<double> *)&local_d8._s_0);
    dVar7 = (pTVar18->Origin).field0_0x0._s_0.Y;
    this->_padding_ = (longlong)(pTVar18->Origin).field0_0x0._s_0.X;
    this->_padding_ = (longlong)dVar7;
    dVar7 = (pTVar18->Rotation).field0_0x0._s_0.X;
    this->_padding_ = (longlong)(pTVar18->Origin).field0_0x0._s_0.Z;
    this->_padding_ = (longlong)dVar7;
    dVar7 = (pTVar18->Rotation).field0_0x0._s_0.Z;
    this->_padding_ = (longlong)(pTVar18->Rotation).field0_0x0._s_0.Y;
    this->_padding_ = (longlong)dVar7;
    this->_padding_ = (longlong)(pTVar18->Rotation).field0_0x0._s_0.W;
    *this_00 = this->_padding_;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    UE::Geometry::TFrame3<double>::Transform
              ((TFrame3<double> *)this_00,(TTransformSRT3<double> *)&this->_padding_);
  }
  local_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dStack_f0 = (double)___xmm_3ff00000000000000000000000000000;
  dStack_e8 = (double)_UNK_15061cbc8;
  dStack_100 = 0.0;
  dStack_f8 = 0.0;
  pdVar19 = (double *)(**(code **)(this->_padding_ + 0x5c8))(this);
  local_118 = *pdVar19;
  dStack_110 = pdVar19[1];
  local_108 = pdVar19[2];
  dStack_100 = pdVar19[3];
  dStack_f8 = pdVar19[4];
  dStack_f0 = pdVar19[5];
  dStack_e8 = pdVar19[6];
  cVar12 = (**(code **)(this->_padding_ + 0x570))(this);
  uVar11 = _UNK_15076b1fc;
  uVar10 = _UNK_15076b1f8;
  uVar9 = _UNK_15076b1f4;
  uVar8 = ___xmm_3f8000003f8000003f8000003f800000;
  if ((cVar12 == '\0') &&
     ((int)((this->PaintBrushOpProperties).field0_0x0.DebugPtr)->_padding_ == 1)) {
    uVar21 = 0;
    pTVar4 = this->ActiveColorOverlay;
    lVar24 = (longlong)(this->StrokeAccumColorBuffer).ArrayNum;
    if (0 < lVar24) {
      lVar22 = 0;
      uVar23 = 0;
      do {
        uVar14 = 0;
        if ((int)uVar21 < (this->StrokeAccumColorBuffer).ArrayNum) {
          uVar14 = ~uVar21 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar2 = (this->StrokeAccumColorBuffer).AllocatorInstance.Data + lVar22;
        *(undefined8 *)pFVar2 = 0;
        *(undefined8 *)(pFVar2 + 8) = 0;
        uVar26 = uVar8;
        uVar27 = uVar9;
        uVar28 = uVar10;
        uVar29 = uVar11;
        if (((-1 < (int)uVar21) &&
            ((int)uVar21 < *(int *)&pTVar4->field_0x8 * 0x200 + *(int *)&pTVar4->field_0xc)) &&
           ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)&pTVar4->field_0x10 + (ulonglong)(uVar21 >> 9) * 8) +
                               (ulonglong)(uVar21 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          lVar5 = *(longlong *)&pTVar4->field_0x48;
          uVar26 = *(undefined4 *)
                    (*(longlong *)(lVar5 + (ulonglong)(uVar23 >> 9) * 8) +
                    (ulonglong)(uVar23 & 0x1ff) * 4);
          uVar27 = *(undefined4 *)
                    (*(longlong *)(lVar5 + (ulonglong)(uVar23 + 1 >> 9) * 8) +
                    (ulonglong)(uVar23 + 1 & 0x1ff) * 4);
          uVar28 = *(undefined4 *)
                    (*(longlong *)(lVar5 + (ulonglong)(uVar23 + 2 >> 9) * 8) +
                    (ulonglong)(uVar23 + 2 & 0x1ff) * 4);
          uVar29 = *(undefined4 *)
                    (*(longlong *)(lVar5 + (ulonglong)(uVar23 + 3 >> 9) * 8) +
                    (ulonglong)(uVar23 + 3 & 0x1ff) * 4);
        }
        uVar14 = 0;
        if ((int)uVar21 < (this->StrokeInitialColorBuffer).ArrayNum) {
          uVar14 = ~uVar21 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar23 = uVar23 + 4;
        uVar21 = uVar21 + 1;
        pFVar2 = (this->StrokeInitialColorBuffer).AllocatorInstance.Data + lVar22;
        *(undefined4 *)pFVar2 = uVar26;
        *(undefined4 *)(pFVar2 + 4) = uVar27;
        *(undefined4 *)(pFVar2 + 8) = uVar28;
        *(undefined4 *)(pFVar2 + 0xc) = uVar29;
        lVar22 = lVar22 + 0x10;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
  }
  (**(code **)(*(longlong *)*plVar15 + 8))((longlong *)*plVar15,&local_118);
  plVar15 = (longlong *)*plVar15;
  pcVar6 = *(code **)(*plVar15 + 0x10);
  uVar20 = (**(code **)(this->_padding_ + 0x440))(this);
  (*pcVar6)(plVar15,uVar20,&this->_padding_,&this->VertexROI);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->AccumulatedTriangleROI);
  BeginChange(this);
  return;
}

// OnCancelStroke @ 14cd0f3a0

void __thiscall UMeshVertexPaintTool::OnCancelStroke(UMeshVertexPaintTool *this)

{
  TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange> *pTVar1;
  void *pvVar2;
  FMeshVertexColorPaintChange *pFVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(**(code **)(this->_padding_ + 0x478))();
  (**(code **)(*(longlong *)*puVar4 + 0x20))();
  pTVar1 = (this->ActiveChangeBuilder).Ptr;
  if (pTVar1 != (TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange>
                 *)0x0) {
    (this->ActiveChangeBuilder).Ptr =
         (TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange> *)0x0;
    *(undefined4 *)&(pTVar1->SavedIndices).field_0x48 = 0;
    pvVar2 = *(void **)&(pTVar1->SavedIndices).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pTVar1->SavedIndices);
    pFVar3 = (pTVar1->Change).Ptr;
    if (pFVar3 != (FMeshVertexColorPaintChange *)0x0) {
      (**(code **)(*(longlong *)pFVar3 + 0x48))(pFVar3,1);
    }
    ::operator_delete(pTVar1,0x58);
  }
  return;
}

// OnChannelFilterModified @ 14cd0f490

void __thiscall UMeshVertexPaintTool::OnChannelFilterModified(UMeshVertexPaintTool *this)

{
  UDynamicMeshComponent *pUVar1;
  code *local_38 [2];
  undefined **local_28;
  FModelingToolsColorChannelFilter local_20;
  undefined8 local_10;
  
  local_20 = ((this->BasicProperties).field0_0x0.DebugPtr)->ChannelFilter;
  if (((this->FilterProperties).field0_0x0.DebugPtr)->MaterialMode == OriginalMaterial) {
    local_20.bRed = true;
    local_20.bGreen = true;
    local_20.bBlue = true;
    local_20.bAlpha = false;
  }
  else if (local_20.bRed == false) {
    if ((local_20.bBlue == false) && (local_20.bGreen == false)) {
      pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
      if (local_20.bAlpha != false) {
        local_28 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UMeshVertexPaintTool::OnChannelFilterModified'::`16'::<lambda_2>,1,0>
                    ::_vftable_;
        local_10 = 0;
        local_38[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UMeshVertexPaintTool::OnChannelFilterModified'::__l16::<lambda_2>,void,UE::Math::TVector4<float>_&>
                      ::Call;
        (**(code **)(pUVar1->_padding_ + 0xd00))(pUVar1,local_38,2);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014cd0f562. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pUVar1->_padding_ + 0xd08))(pUVar1,2);
      return;
    }
    goto LAB_14cd0f569;
  }
  if ((local_20.bGreen != false) && (local_20.bBlue != false)) {
    pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cd0f4fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0xd08))(pUVar1,2);
    return;
  }
LAB_14cd0f569:
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshVertexPaintTool::OnChannelFilterModified'::__l12::<lambda_1>,void,UE::Math::TVector4<float>_&>
                ::Call;
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshVertexPaintTool::OnChannelFilterModified'::`12'::<lambda_1>,1,0>
              ::_vftable_;
  (**(code **)(pUVar1->_padding_ + 0xd00))(pUVar1,local_38,2);
  return;
}

// OnDynamicMeshComponentChanged @ 14cd0f840

void __thiscall UMeshVertexPaintTool::OnDynamicMeshComponentChanged(UMeshVertexPaintTool *this)

{
  (**(code **)(this->_padding_ + 0x440))();
  this->bUndoUpdatePending = true;
  return;
}

// OnEndStroke @ 14cd0feb0

void __thiscall UMeshVertexPaintTool::OnEndStroke(UMeshVertexPaintTool *this)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar3 = (undefined8 *)(**(code **)(this->_padding_ + 0x478))();
  plVar1 = (longlong *)*puVar3;
  pcVar2 = *(code **)(*plVar1 + 0x18);
  uVar4 = (**(code **)(this->_padding_ + 0x440))(this);
  (*pcVar2)(plVar1,uVar4,&this->_padding_,&this->VertexROI);
  EndChange(this);
  return;
}

// OnPolyLassoFinished @ 14cd10bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMeshVertexPaintTool::OnPolyLassoFinished
          (UMeshVertexPaintTool *this,FCameraPolyLasso *param_1,bool param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  byte bVar13;
  uint uVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  uint uVar22;
  ForElementType<unsigned_int> FVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  UMeshVertexPaintTool *this_00;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 in_XMM4 [16];
  undefined1 auVar29 [16];
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auStackY_348 [32];
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_2f8;
  uint local_2e8;
  <lambda_1> local_2e4;
  longlong local_2e0;
  FDynamicMesh3 *local_2d8;
  int local_2d0;
  uint uStack_2cc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2c8;
  undefined4 local_2c0;
  int iStack_2bc;
  int iStack_2b8;
  undefined4 uStack_2b4;
  double local_2b0;
  double dStack_2a8;
  double local_2a0;
  double dStack_298;
  double local_290;
  double dStack_288;
  undefined4 local_27c;
  int local_278;
  UMeshVertexPaintTool *local_270;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_260;
  TVector2<double>_u_0 local_240;
  TVector2<double>_u_0 local_230;
  TPolygon2<double> local_220;
  TArrayView<std::nullptr_t,int> local_210;
  code *local_200;
  FDynamicMesh3 ***local_1f8;
  FSparseArrayAllocationInfo local_1f0;
  FDynamicMesh3 **local_1e0;
  UMeshVertexPaintTool *local_1d8;
  FCameraPolyLasso *local_1d0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_1c8;
  uint *local_1c0;
  FLinearColor_u_0 local_1b8;
  double local_1a8;
  double dStack_1a0;
  double local_188;
  double dStack_180;
  undefined1 local_168 [8];
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_160;
  FScriptContainerElement local_128 [8];
  ForAnyElementType local_120;
  uint local_118;
  FMeshFaceSelection local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_2f8.ArrayNum = (param_1->Polyline).ArrayNum;
  lVar19 = (longlong)local_2f8.ArrayNum;
  pFVar20 = (param_1->Polyline).AllocatorInstance.Data;
  local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_270 = this;
  if (local_2f8.ArrayNum == 0) {
    local_2f8.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,local_2f8.ArrayNum,0,&local_2f8.AllocatorInstance,local_2f8.ArrayNum,
               &local_2f8.ArrayMax);
    memcpy(local_2f8.AllocatorInstance.Data,pFVar20,lVar19 << 4);
  }
  local_2e8 = local_2f8.ArrayNum;
  if (1 < local_2f8.ArrayNum) {
    bVar8 = UPolyLassoMarqueeMechanic::ApproximateSelfClipPolyline(&local_2f8);
    if (!bVar8) {
      if ((local_2f8.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar15.Data = local_2f8.AllocatorInstance.Data;
      if ((local_2f8.ArrayNum < 2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar5 = __real_3ff0000000000000;
      dVar7 = 0.0;
      dVar26 = *(double *)FVar15.Data - *(double *)(local_2f8.AllocatorInstance.Data + 0x10);
      dVar28 = *(double *)(FVar15.Data + 8) - *(double *)(local_2f8.AllocatorInstance.Data + 0x18);
      auVar29._8_8_ = 0;
      auVar29._0_8_ = dVar28 * dVar28 + dVar26 * dVar26;
      auVar29 = sqrtpd(in_XMM4,auVar29);
      if (auVar29._0_8_ <= 0.0) {
        dVar6 = 0.0;
        dVar28 = 0.0;
      }
      else {
        dVar6 = __real_3ff0000000000000 / auVar29._0_8_;
        dVar28 = dVar6 * dVar28;
        dVar6 = dVar6 * dVar26;
      }
      if ((local_2f8.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar18 = local_2e8 - 1;
      local_1a8 = *(double *)local_2f8.AllocatorInstance.Data;
      dStack_1a0 = *(double *)(local_2f8.AllocatorInstance.Data + 8);
      uVar14 = 0;
      if ((int)uVar18 < local_2f8.ArrayNum) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar21 = local_2e8 - 2;
      pFVar20 = local_2f8.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10;
      uVar14 = 0;
      if ((int)uVar21 < local_2f8.ArrayNum) {
        uVar14 = ~uVar21 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      dVar27 = *(double *)pFVar20 -
               *(double *)(local_2f8.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10);
      dVar26 = *(double *)(pFVar20 + 8) -
               *(double *)(local_2f8.AllocatorInstance.Data + (longlong)(int)uVar21 * 0x10 + 8);
      auVar4._8_8_ = 0;
      auVar4._0_8_ = dVar26 * dVar26 + dVar27 * dVar27;
      auVar29 = sqrtpd(auVar29,auVar4);
      if (auVar29._0_8_ <= 0.0) {
        dVar26 = 0.0;
      }
      else {
        dVar5 = dVar5 / auVar29._0_8_;
        dVar26 = dVar5 * dVar26;
        dVar7 = dVar5 * dVar27;
      }
      uVar18 = local_2e8 - 1;
      uVar14 = 0;
      if ((int)uVar18 < local_2f8.ArrayNum) {
        uVar14 = ~uVar18 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_188 = *(double *)(local_2f8.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10);
      dStack_180 = *(double *)(local_2f8.AllocatorInstance.Data + (longlong)(int)uVar18 * 0x10 + 8);
      UE::Geometry::TPolygon2<double>::TPolygon2<double>(&local_220,&local_2f8);
      bVar8 = UE::Geometry::TPolygon2<double>::IsClockwise(&local_220);
      dVar5 = __real_40c3880000000000;
      if (bVar8) {
        uVar30 = (undefined4)__real_c08f400000000000;
        uVar31 = (undefined4)((ulonglong)__real_c08f400000000000 >> 0x20);
      }
      else {
        uVar30 = (undefined4)__real_408f400000000000;
        uVar31 = (undefined4)((ulonglong)__real_408f400000000000 >> 0x20);
      }
      local_240._s_0.X = dVar6 * __real_40c3880000000000 + local_1a8;
      local_240._s_0.Y = dVar28 * __real_40c3880000000000 + dStack_1a0;
      TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Insert
                (&local_2f8,(TVector2<double> *)&local_240._s_0,0);
      if ((local_2f8.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_230._s_0.Y =
           *(double *)(local_2f8.AllocatorInstance.Data + 8) -
           dVar6 * (double)CONCAT44(uVar31,uVar30);
      local_230._s_0.X =
           dVar28 * (double)CONCAT44(uVar31,uVar30) + *(double *)local_2f8.AllocatorInstance.Data;
      TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>::Insert
                (&local_2f8,(TVector2<double> *)&local_230._s_0,0);
      local_2b0 = dVar7 * dVar5 + local_188;
      dStack_2a8 = dVar26 * dVar5 + dStack_180;
      if (((local_2f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2b0) &&
          ((FScriptContainerElement *)&local_2b0 <
           local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
        local_2f8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
      }
      uVar14 = local_2f8.ArrayNum + 1;
      *(double *)(local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayNum * 0x10) =
           local_2b0;
      *(double *)(local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayNum * 0x10 + 8) =
           dStack_2a8;
      uVar18 = 0;
      if (local_2f8.ArrayNum < (int)uVar14) {
        uVar18 = (uint)~local_2f8.ArrayNum >> 0x1f;
      }
      local_2f8.ArrayNum = uVar14;
      if ((uVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_2a0 = dVar26 * (double)CONCAT44(uVar31,uVar30) +
                  *(double *)
                   (local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayNum * 0x10 + -0x10);
      dStack_298 = *(double *)
                    (local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayNum * 0x10 + -8) -
                   dVar7 * (double)CONCAT44(uVar31,uVar30);
      if (((local_2f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2a0) &&
          ((FScriptContainerElement *)&local_2a0 <
           local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
        local_2f8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
      }
      lVar19 = (longlong)local_2f8.ArrayNum;
      local_2f8.ArrayNum = local_2f8.ArrayNum + 1;
      *(double *)(local_2f8.AllocatorInstance.Data + lVar19 * 0x10) = local_2a0;
      *(double *)(local_2f8.AllocatorInstance.Data + lVar19 * 0x10 + 8) = dStack_298;
      if ((local_2f8.ArrayNum < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_290 = *(double *)local_2f8.AllocatorInstance.Data;
      dStack_288 = *(double *)(local_2f8.AllocatorInstance.Data + 8);
      if (((local_2f8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_290) &&
          ((FScriptContainerElement *)&local_290 <
           local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayMax * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_2f8.ArrayNum == local_2f8.ArrayMax) {
        local_2f8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_2f8.AllocatorInstance,&local_2f8.ArrayMax);
      }
      uVar14 = local_2f8.ArrayNum + 1;
      *(double *)(local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayNum * 0x10) =
           local_290;
      *(double *)(local_2f8.AllocatorInstance.Data + (longlong)local_2f8.ArrayNum * 0x10 + 8) =
           dStack_288;
      local_2f8.ArrayNum = uVar14;
      if (local_220.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_220.Vertices.AllocatorInstance.Data);
      }
    }
    uVar25 = 0;
    local_2e8 = local_2f8.ArrayNum;
    local_2d8 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))(this);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum
              (&this->TempROIBuffer,
               (local_2d8->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (local_2d8->VertexRefCounts).RefCounts.CurBlockUsed,Default);
    local_1e0 = &local_2d8;
    local_1c8 = &local_2f8;
    local_200 = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshVertexPaintTool::OnPolyLassoFinished'::__l2::<lambda_1>,void,int>
                ::Call;
    local_1c0 = &local_2e8;
    local_1f8 = &local_1e0;
    local_210.DataPtr = (void **)0x0;
    local_210.ArrayNum = 0;
    local_1d8 = this;
    local_1d0 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               (local_2d8->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (local_2d8->VertexRefCounts).RefCounts.CurBlockUsed,1,
               (TFunctionRef<void___cdecl(int)> *)&local_200,local_2e4,None,&local_210);
    local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_160.Data.ArrayNum = 0;
    local_160.Data.ArrayMax = 0;
    local_160.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_160.AllocationFlags.NumBits = ___xmm_00000000ffffffff0000008000000000;
    local_160.AllocationFlags.MaxBits = _UNK_150631d94;
    local_160.FirstFreeIndex = _UNK_150631d98;
    local_160.NumFreeIndices = _UNK_150631d9c;
    local_120.Data = (FScriptContainerElement *)0x0;
    local_118 = 0;
    local_168 = (undefined1  [8])local_2d8;
    iVar10 = (local_2d8->VertexRefCounts).RefCounts.CurBlockUsed +
             (local_2d8->VertexRefCounts).RefCounts.CurBlock * 0x200;
    lVar19 = (longlong)iVar10;
    this_00 = this;
    uVar16 = uVar25;
    local_2e0 = lVar19;
    if (0 < iVar10) {
      do {
        uVar14 = (uint)uVar16;
        if (((-1 < (int)uVar14) &&
            (lVar19 = local_2e0,
            (int)uVar14 <
            (int)((((FRefCountVector *)((longlong)local_168 + 0x20))->RefCounts).CurBlock * 0x200 +
                 (((FRefCountVector *)((longlong)local_168 + 0x20))->RefCounts).CurBlockUsed))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 ((((FRefCountVector *)((longlong)local_168 + 0x20))->RefCounts).
                                  Blocks.AllocatorInstance.Data + (uVar16 >> 9) * 8) +
                               (ulonglong)(uVar14 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          uVar18 = 0;
          if ((int)uVar14 < (this->TempROIBuffer).ArrayNum) {
            uVar18 = ~uVar14 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar19 = local_2e0;
          if (*(int *)((this->TempROIBuffer).AllocatorInstance.Data + uVar25 * 4) == 1) {
            if (local_160.NumFreeIndices == 0) {
              iVar10 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0xc,4,1,(ForAnyElementType *)&local_160,&local_160.Data.ArrayNum,
                                  &local_160.Data.ArrayMax);
              iVar11 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                 (&local_160.AllocationFlags,1);
              FVar23 = (ForElementType<unsigned_int>)&local_160.AllocationFlags;
              if (local_160.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar23 = local_160.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              bVar13 = (byte)iVar11 & 0x1f;
              if (iVar11 < 0) {
                iVar11 = iVar11 + 0x1f;
                bVar13 = bVar13 - 0x20;
              }
              puVar1 = (uint *)((longlong)FVar23 + (longlong)(iVar11 >> 5) * 4);
              *puVar1 = *puVar1 & ~(1 << (bVar13 & 0x1f));
            }
            else {
              iVar10 = local_160.FirstFreeIndex;
              lVar19 = (longlong)local_160.FirstFreeIndex;
              local_160.NumFreeIndices = local_160.NumFreeIndices + -1;
              local_160.FirstFreeIndex =
                   *(int *)(local_160.Data.AllocatorInstance.Data + lVar19 * 0xc + 4);
              if (local_160.NumFreeIndices != 0) {
                *(undefined4 *)
                 (local_160.Data.AllocatorInstance.Data +
                 (longlong)*(int *)(local_160.Data.AllocatorInstance.Data + lVar19 * 0xc + 4) * 0xc)
                     = 0xffffffff;
              }
            }
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::AllocateIndex(&local_160,&local_1f0,iVar10);
            if (local_1f0.Pointer != (uint *)0x0) {
              *(uint *)local_1f0.Pointer = uVar14;
              *(uint *)((longlong)local_1f0.Pointer + 4) = 0xffffffff;
            }
            uVar18 = *(uint *)local_1f0.Pointer;
            if ((local_160.Data.ArrayNum - local_160.NumFreeIndices != 1) &&
               (local_160.Data.ArrayNum != local_160.NumFreeIndices)) {
              FVar15.Data = local_128;
              if (local_120.Data != (FScriptContainerElement *)0x0) {
                FVar15.Data = local_120.Data;
              }
              for (iVar10 = *(int *)(FVar15.Data + (ulonglong)(local_118 - 1 & uVar18) * 4);
                  iVar10 != -1;
                  iVar10 = *(int *)(local_160.Data.AllocatorInstance.Data +
                                   (longlong)iVar10 * 0xc + 4)) {
                if (*(uint *)(local_160.Data.AllocatorInstance.Data + (longlong)iVar10 * 0xc) ==
                    uVar18) {
                  if (iVar10 != -1) {
                    *(uint *)(local_160.Data.AllocatorInstance.Data + (longlong)iVar10 * 0xc) =
                         uVar18;
                    TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized(&local_160,local_1f0.Index,1);
                    lVar19 = local_2e0;
                    goto LAB_14cd11986;
                  }
                  break;
                }
              }
            }
            uVar22 = local_160.Data.ArrayNum - local_160.NumFreeIndices;
            uVar21 = 1;
            if (3 < uVar22) {
              uVar16 = (ulonglong)((uVar22 >> 1) + 7) * 2 + 1;
              lVar19 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              local_27c = (undefined4)lVar19;
              uVar21 = 1 << ((byte)lVar19 & 0x1f);
            }
            if (((int)uVar22 < 1) || ((int)uVar21 <= (int)local_118)) {
              uVar18 = local_118 - 1 & uVar18;
              *(uint *)((longlong)local_1f0.Pointer + 8) = uVar18;
              FVar15.Data = local_128;
              if (local_120.Data != (FScriptContainerElement *)0x0) {
                FVar15.Data = local_120.Data;
              }
              uVar16 = (longlong)(int)local_118 - 1U & (longlong)(int)uVar18;
              *(uint *)((longlong)local_1f0.Pointer + 4) = *(uint *)(FVar15.Data + uVar16 * 4);
              *(int *)(FVar15.Data + uVar16 * 4) = local_1f0.Index;
              lVar19 = local_2e0;
            }
            else {
              local_118 = uVar21;
              if (local_120.Data != (FScriptContainerElement *)0x0) {
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_120,0,0,4);
              }
              if (uVar21 != 0) {
                uVar18 = uVar21;
                if (uVar21 < 2) {
                  if (local_120.Data != (FScriptContainerElement *)0x0) {
                    uVar18 = 0;
                    goto LAB_14cd11772;
                  }
                }
                else {
LAB_14cd11772:
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_120,0,uVar18,4);
                }
                if (0 < (int)uVar21) {
                  uVar24 = (ulonglong)uVar21;
                  uVar16 = 0;
                  do {
                    FVar15.Data = local_128;
                    if (local_120.Data != (FScriptContainerElement *)0x0) {
                      FVar15.Data = local_120.Data;
                    }
                    uVar12 = uVar16 & (longlong)(int)uVar21 - 1U;
                    uVar16 = uVar16 + 1;
                    *(undefined4 *)(FVar15.Data + uVar12 * 4) = 0xffffffff;
                    uVar24 = uVar24 - 1;
                  } while (uVar24 != 0);
                }
              }
              lVar19 = local_2e0;
              if (local_118 != 0) {
                pTStack_2c8 = &local_160.AllocationFlags;
                local_2d0 = 0;
                uStack_2cc = 1;
                iStack_2bc = 0;
                iStack_2b8 = 0;
                if (local_160.AllocationFlags.NumBits != 0) {
                  FVar23 = (ForElementType<unsigned_int>)&local_160.AllocationFlags;
                  if (local_160.AllocationFlags.AllocatorInstance.SecondaryData !=
                      (ForElementType<unsigned_int>)0x0) {
                    FVar23 = local_160.AllocationFlags.AllocatorInstance.SecondaryData;
                  }
                  uVar18 = *(uint *)FVar23;
                  iStack_2b8 = 0;
                  local_2d0 = 0;
                  while (uVar18 == 0) {
                    iStack_2b8 = iStack_2b8 + 0x20;
                    lVar17 = (longlong)local_2d0;
                    local_2d0 = local_2d0 + 1;
                    if ((int)(local_160.AllocationFlags.NumBits + -1 +
                             (local_160.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 <
                        local_2d0) goto LAB_14cd1189f;
                    uVar18 = *(uint *)((uchar *)((longlong)FVar23 + 4) + lVar17 * 4);
                  }
                  uStack_2cc = -uVar18 & uVar18;
                  uVar16 = (ulonglong)uStack_2cc * 2 + 1;
                  lVar17 = 0x3f;
                  if (uVar16 != 0) {
                    for (; uVar16 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                    }
                  }
                  local_278 = (int)lVar17;
                  iStack_2bc = iStack_2b8 + -1 + local_278;
                  if (local_160.AllocationFlags.NumBits < iStack_2bc) {
LAB_14cd1189f:
                    iStack_2bc = local_160.AllocationFlags.NumBits;
                  }
                }
                local_2c0 = 0xffffffff;
                local_268 = &local_160;
                local_260._padding_ = CONCAT44(uStack_2cc,local_2d0);
                local_260.CurrentBitIndex = iStack_2bc;
                local_260.UnvisitedBitMask = 0xffffffff;
                local_260._28_4_ = uStack_2b4;
                local_260.BaseBitIndex = iStack_2b8;
                iVar10 = iStack_2bc;
                local_260.Array = pTStack_2c8;
                if (iStack_2bc < local_160.AllocationFlags.NumBits) {
                  do {
                    pFVar20 = (local_268->Data).AllocatorInstance.Data;
                    lVar19 = (longlong)iVar10;
                    uVar18 = local_118 - 1 & *(uint *)(pFVar20 + lVar19 * 0xc);
                    *(uint *)(pFVar20 + lVar19 * 0xc + 8) = uVar18;
                    FVar15.Data = local_128;
                    if (local_120.Data != (FScriptContainerElement *)0x0) {
                      FVar15.Data = local_120.Data;
                    }
                    uVar16 = (longlong)(int)local_118 - 1U & (longlong)(int)uVar18;
                    *(undefined4 *)(pFVar20 + lVar19 * 0xc + 4) =
                         *(undefined4 *)(FVar15.Data + uVar16 * 4);
                    *(int *)(FVar15.Data + uVar16 * 4) = iVar10;
                    local_260.UnvisitedBitMask =
                         local_260.UnvisitedBitMask & ~local_260._padding_._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_260);
                    lVar19 = local_2e0;
                    iVar10 = local_260.CurrentBitIndex;
                  } while (local_260.CurrentBitIndex < (local_260.Array)->NumBits);
                }
              }
            }
          }
        }
LAB_14cd11986:
        uVar25 = uVar25 + 1;
        this_00 = local_270;
        uVar16 = (ulonglong)(uVar14 + 1);
      } while ((longlong)uVar25 < lVar19);
    }
    UE::Geometry::FMeshFaceSelection::FMeshFaceSelection
              (&local_108,local_2d8,(FMeshVertexSelection *)local_168,
               ((this_00->FilterProperties).field0_0x0.DebugPtr)->MinTriVertCount);
    if (local_108.Selected.Elements._8_4_ != local_108.Selected.Elements._52_4_) {
      cVar9 = (**(code **)(this_00->_padding_ + 0x570))(this_00);
      lVar19 = 0xd4;
      if (cVar9 == '\0') {
        lVar19 = 0xc0;
      }
      puVar2 = (undefined8 *)
               ((longlong)&((this_00->BasicProperties).field0_0x0.DebugPtr)->_padding_ + lVar19);
      local_1b8._0_8_ = *puVar2;
      local_1b8._8_8_ = puVar2[1];
      SetTrianglesToVertexColor(this_00,&local_108.Selected,(FLinearColor *)&local_1b8._s_0);
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
    if (local_120.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.Data);
    }
    bVar8 = local_160.Data.ArrayMax != 0;
    local_160.Data._8_8_ = (ulonglong)(uint)local_160.Data.ArrayMax << 0x20;
    if (bVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&local_160,0,&local_160.Data.ArrayMax);
    }
    iVar10 = local_160.AllocationFlags.MaxBits;
    local_160.FirstFreeIndex = -1;
    local_160.NumFreeIndices = 0;
    local_160.AllocationFlags._24_8_ = (ulonglong)(uint)local_160.AllocationFlags.MaxBits << 0x20;
    if (0x80 < (uint)iVar10) {
      local_160.AllocationFlags.NumBits = 0;
      local_160.AllocationFlags.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_160.AllocationFlags,0);
    }
    if (local_160.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_160.AllocationFlags.AllocatorInstance.SecondaryData);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
  }
  if (local_2f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f8.AllocatorInstance.Data);
  }
  return;
}

// OnPropertyModified @ 14cd11c90

void __thiscall
UMeshVertexPaintTool::OnPropertyModified
          (UMeshVertexPaintTool *this,UObject *param_1,FProperty *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014cd11c93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x490))();
  return;
}

// OnSelectedGroupLayerChanged @ 14cd12150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UMeshVertexPaintTool::OnSelectedGroupLayerChanged(UMeshVertexPaintTool *this)

{
  code *pcVar1;
  FPolygroupSet *pFVar2;
  ITextData IVar3;
  longlong lVar4;
  FText *pFVar5;
  ITextData *pIVar6;
  ITextData IVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  FText local_68;
  FText local_58;
  ITextData local_48;
  ITextData IStack_40;
  ITextData local_38;
  ITextData IStack_30;
  ITextData local_28;
  ITextData IStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  lVar4 = (**(code **)(this->_padding_ + 0x2d8))();
  pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x28) + 0x10);
  pFVar5 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshVertexPaintTool",L"ChangeActiveGroupLayer",
                      L"Change Polygroup Layer");
  (*pcVar1)(lVar4 + 0x28,pFVar5);
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  pFVar2 = (this->ActiveGroupSet).Ptr;
  iVar8 = -1;
  if (pFVar2 == (FPolygroupSet *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = pFVar2->GroupLayerIndex;
  }
  UpdateActiveGroupLayer(this);
  pFVar2 = (this->ActiveGroupSet).Ptr;
  if (pFVar2 != (FPolygroupSet *)0x0) {
    iVar8 = pFVar2->GroupLayerIndex;
  }
  if (iVar9 != iVar8) {
    pIVar6 = ::operator_new(0x40);
    if (pIVar6 != (ITextData *)0x0) {
      pIVar6[3] = (ITextData)0x0;
      pIVar6[4] = (ITextData)0x0;
      pIVar6[5] = (ITextData)0x0;
      pIVar6[6] = (ITextData)0x0;
      *pIVar6 = (ITextData)&___7__TSimpleValueLambdaChange_H__6B_;
      pIVar6[2] = (ITextData)0x0;
      pIVar6[7] = (ITextData)0x0;
    }
    *(int *)(pIVar6 + 1) = iVar9;
    *(int *)&pIVar6[1].field_0x4 = iVar8;
    local_48 = pIVar6[2];
    IVar3 = pIVar6[3];
    local_38 = pIVar6[4];
    IStack_30 = pIVar6[5];
    IVar7 = pIVar6[6];
    IStack_20 = pIVar6[7];
    pIVar6[2] = (ITextData)
                UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshVertexPaintTool::OnSelectedGroupLayerChanged'::__l5::<lambda_1>,void,UObject_*,int_const_&,int_const_&,bool>
                ::Call;
    pIVar6[3] = IStack_40;
    *(undefined4 *)(pIVar6 + 4) = 0x52979120;
    *(undefined4 *)&pIVar6[4].field_0x4 = 1;
    pIVar6[5] = (ITextData)this;
    *(undefined4 *)(pIVar6 + 6) = local_28._0_4_;
    *(undefined4 *)&pIVar6[6].field_0x4 = local_28._4_4_;
    *(undefined4 *)(pIVar6 + 7) = 0;
    *(undefined4 *)&pIVar6[7].field_0x4 = 0;
    local_28 = IVar7;
    IStack_40 = IVar3;
    if (local_48 != (ITextData)0x0) {
      IVar7 = (ITextData)&local_38;
      if (IStack_20 != (ITextData)0x0) {
        IVar7 = IStack_20;
      }
      (**(code **)((longlong)*(ITextData *)IVar7 + 0x10))();
    }
    lVar4 = (**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x28) + 0x20);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_58,L"UMeshVertexPaintTool",L"ChangeActiveGroupLayer",
                        L"Change Polygroup Layer");
    local_68.TextData.Reference = pIVar6;
    (*pcVar1)(lVar4 + 0x28,this,&local_68,pFVar5);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  lVar4 = (**(code **)(this->_padding_ + 0x2d8))(this);
  (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
  return;
}

// OnTick @ 14cd143d0

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

void __thiscall UMeshVertexPaintTool::OnTick(UMeshVertexPaintTool *this,float param_1)

{
  EMeshVertexPaintInteractionType EVar1;
  int iVar2;
  UDynamicMeshComponent *this_00;
  TDynamicMeshOverlay<float,4> *this_01;
  UVertexPaintBasicProperties *pUVar3;
  char cVar4;
  bool bVar5;
  longlong *plVar6;
  FDynamicMesh3 *this_02;
  longlong lVar7;
  char *pcVar8;
  undefined7 uVar9;
  bool bVar10;
  FLinearColor_u_0 local_98;
  TVector4<float>_u_0 local_88;
  code *local_78 [2];
  undefined **local_68;
  UMeshVertexPaintTool *local_60;
  undefined8 local_50;
  code *local_48 [2];
  undefined **local_38;
  UMeshVertexPaintTool *local_30;
  undefined8 local_20;
  
  pcVar8 = (char *)0x0;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    pcVar8 = "MeshVPaint_OnTick";
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1431,"MeshVPaint_OnTick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
               ,0x597);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1431);
  }
  UMeshSculptToolBase::OnTick((UMeshSculptToolBase *)this,param_1);
  UMeshElementsVisualizer::OnTick((this->MeshElementsDisplay).field0_0x0.DebugPtr,param_1);
  EVar1 = ((this->BasicProperties).field0_0x0.DebugPtr)->SubToolType;
  uVar9 = (undefined7)((ulonglong)pcVar8 >> 8);
  UPolyLassoMarqueeMechanic::SetIsEnabled
            ((this->PolyLassoMechanic).field0_0x0.DebugPtr,EVar1 == PolyLasso);
  (**(code **)(this->_padding_ + 0x640))
            (this,CONCAT71(uVar9,((this->FilterProperties).field0_0x0.DebugPtr)->BrushAreaMode ==
                                 Volumetric));
  (**(code **)(this->_padding_ + 0x650))(this,EVar1 != PolyLasso);
  if (this->bHavePendingAction != false) {
    (**(code **)(this->_padding_ + 0x6b8))(this,this->PendingAction);
    this->bHavePendingAction = false;
    this->PendingAction = NoAction;
  }
  if (this->bUndoUpdatePending == false) {
    if ((this->bPendingPickColor != false) || (this->bPendingPickEraseColor != false)) {
      iVar2 = (int)this->_padding_;
      if ((-1 < iVar2) && (cVar4 = (**(code **)(this->_padding_ + 0x5a0))(this), cVar4 == '\0')) {
        this_02 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))(this);
        bVar5 = UE::Geometry::FDynamicMesh3::IsTriangle(this_02,iVar2);
        if ((bVar5) &&
           ((this->bPendingPickColor != false || (this->bPendingPickEraseColor != false)))) {
          lVar7 = (**(code **)(this->_padding_ + 0x440))(this);
          if ((*(longlong *)(lVar7 + 0x208) != 0) &&
             ((this_01 = *(TDynamicMeshOverlay<float,4> **)(*(longlong *)(lVar7 + 0x208) + 0x40),
              this_01 != (TDynamicMeshOverlay<float,4> *)0x0 &&
              (-1 < *(int *)(*(longlong *)
                              ((this_01->ElementTriangles).Blocks.AllocatorInstance.Data +
                              (ulonglong)((uint)(iVar2 * 3) >> 9) * 8) +
                            (ulonglong)(iVar2 * 3 & 0x1ff) * 4))))) {
            local_88._0_8_ = ___xmm_3f800000000000000000000000000000;
            local_88._8_8_ = _UNK_150689648;
            local_98._s_0.R =
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X * __real_3eaaaaab;
            local_98._s_0.G =
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y * __real_3eaaaaab;
            local_98._s_0.B =
                 UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z * __real_3eaaaaab;
            UE::Geometry::TDynamicMeshOverlay<float,4>::GetTriBaryInterpolate<float>
                      (this_01,iVar2,local_98.RGBA,local_88.XYZW);
            if (this->bPendingPickEraseColor == false) {
              FLinearColor::FLinearColor
                        ((FLinearColor *)&local_98._s_0,(TVector4<float> *)&local_88._s_0);
              pUVar3 = (this->BasicProperties).field0_0x0.DebugPtr;
              *(ulonglong *)&(pUVar3->PaintColor).field0_0x0 =
                   CONCAT44(local_98._s_0.G,local_98._s_0.R);
              *(ulonglong *)((longlong)&(pUVar3->PaintColor).field0_0x0 + 8) =
                   CONCAT44(local_98._s_0.A,local_98._s_0.B);
            }
            else {
              FLinearColor::FLinearColor
                        ((FLinearColor *)&local_98._s_0,(TVector4<float> *)&local_88._s_0);
              pUVar3 = (this->BasicProperties).field0_0x0.DebugPtr;
              *(ulonglong *)&(pUVar3->EraseColor).field0_0x0 =
                   CONCAT44(local_98._s_0.G,local_98._s_0.R);
              *(ulonglong *)((longlong)&(pUVar3->EraseColor).field0_0x0 + 8) =
                   CONCAT44(local_98._s_0.A,local_98._s_0.B);
            }
            (**(code **)(this->_padding_ + 0x340))(this,(this->BasicProperties).field0_0x0.DebugPtr)
            ;
          }
        }
      }
      this->bPendingPickColor = false;
      this->bPendingPickEraseColor = false;
    }
    EVar1 = ((this->BasicProperties).field0_0x0.DebugPtr)->SubToolType;
    if ((EVar1 == Brush) || ((byte)(EVar1 - TriFill) < 3)) {
      local_50 = 0;
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMeshVertexPaintTool::OnTick'::`2'::<lambda_1>,0,0>::
                  _vftable_;
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMeshVertexPaintTool::OnTick'::__l2::<lambda_1>,void,int,UE::Math::TRay<double>_const_&>
                    ::Call;
      local_20 = 0;
      local_38 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMeshVertexPaintTool::OnTick'::`37'::<lambda_2>,0,0>::
                  _vftable_;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMeshVertexPaintTool::OnTick'::__l37::<lambda_2>,bool,UE::Math::TRay<double>_const_&>
                    ::Call;
      local_60 = this;
      local_30 = this;
      UMeshSculptToolBase::ProcessPerTickStamps
                ((UMeshSculptToolBase *)this,
                 (TFunction<bool___cdecl(UE::Math::TRay<double>_const_&)> *)local_48,
                 (TFunction<void___cdecl(int,UE::Math::TRay<double>_const_&)> *)local_78);
    }
  }
  else {
    this_00 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
    this->bUndoUpdatePending = false;
    UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
              (this_00,&this->AccumulatedTriangleROI,VertexColors);
    plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*plVar6 + 0x368))(plVar6);
    this->bUndoUpdatePending = false;
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnUpdateHover @ 14cd15960

bool __thiscall
UMeshVertexPaintTool::OnUpdateHover(UMeshVertexPaintTool *this,FInputDeviceRay *param_1)

{
  bool *this_00;
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  UObject *pUVar7;
  float fVar8;
  
  this_00 = &this[-1].GeometrySelection.bIsSet;
  lVar1 = *(longlong *)this_00;
  *(undefined1 *)&(this->VertexROI).ArrayNum = *(undefined1 *)(this->_padding_ + 0xb0);
  cVar3 = (**(code **)(lVar1 + 0x568))(this_00);
  if (cVar3 == '\0') {
    UpdateBrushPosition((UMeshVertexPaintTool *)this_00,&param_1->WorldRay);
    plVar6 = (longlong *)(**(code **)(*(longlong *)this_00 + 0x478))(this_00);
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar6 + 8));
    fVar8 = (float)*(double *)(this->_padding_ + 0xb8);
    (**(code **)(*(longlong *)pUVar7 + 0x2e0))(pUVar7,fVar8 * fVar8);
    pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar6 + 8));
    (**(code **)(*(longlong *)pUVar7 + 0x2e8))(pUVar7,*(undefined4 *)(this->_padding_ + 0xcc));
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4776106948590306640>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
                       ,0x550,"InStroke() == false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  return true;
}

// PrecomputeFilterData @ 14cd16100

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UMeshVertexPaintTool::PrecomputeFilterData(UMeshVertexPaintTool *this)

{
  FDynamicMeshAttributeSet *pFVar1;
  UDynamicMeshComponent *pUVar2;
  code *pcVar3;
  FDynamicMeshAttributeSet *pFVar4;
  FDynamicMeshAttributeSet *pFVar5;
  code **ppcVar6;
  uint7 uVar7;
  FDynamicMesh3 *local_res8;
  FDynamicMeshAttributeSet *local_res10;
  FDynamicMeshAttributeSet *local_res18 [2];
  FDynamicMesh3 **local_e8;
  UMeshVertexPaintTool *local_e0;
  TArrayView<std::nullptr_t,int> local_d8;
  code *local_c8;
  FDynamicMesh3 ***local_c0;
  TArrayView<std::nullptr_t,int> local_b8;
  code *local_a8;
  FDynamicMesh3 ***local_a0;
  UMeshVertexPaintTool *local_98;
  FDynamicMesh3 **local_90;
  code *local_88;
  UMeshVertexPaintTool **local_80;
  FDynamicMesh3 **local_78;
  UMeshVertexPaintTool *local_70;
  FDynamicMeshAttributeSet **local_68;
  FDynamicMeshAttributeSet **local_60;
  code *local_58 [2];
  undefined **local_48;
  UMeshVertexPaintTool *local_40;
  undefined8 local_30;
  
  local_res8 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))();
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->TriNormals,
             (local_res8->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (local_res8->TriangleRefCounts).RefCounts.CurBlockUsed,Default);
  local_e8 = &local_res8;
  local_c8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMeshVertexPaintTool::PrecomputeFilterData'::__l2::<lambda_1>,void,int>
             ::Call;
  pFVar5 = (FDynamicMeshAttributeSet *)0x0;
  local_c0 = &local_e8;
  local_d8.DataPtr = (void **)0x0;
  local_d8.ArrayNum = 0;
  local_e0 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             (local_res8->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (local_res8->TriangleRefCounts).RefCounts.CurBlockUsed,1,
             (TFunctionRef<void___cdecl(int)> *)&local_c8,local_res8._0_1_,None,&local_d8);
  pFVar1 = (local_res8->AttributeSet).Ptr;
  pFVar4 = pFVar5;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar4 = pFVar1;
  }
  local_res18[0] = pFVar5;
  if (0 < (pFVar4->NormalLayers).Array.ArrayNum) {
    local_res18[0] =
         *(FDynamicMeshAttributeSet **)(pFVar4->NormalLayers).Array.AllocatorInstance.Data;
  }
  pFVar1 = (local_res8->AttributeSet).Ptr;
  pFVar4 = pFVar5;
  if (pFVar1 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar4 = pFVar1;
  }
  if (0 < (pFVar4->UVLayers).Array.ArrayNum) {
    pFVar5 = *(FDynamicMeshAttributeSet **)(pFVar4->UVLayers).Array.AllocatorInstance.Data;
  }
  local_res10 = pFVar5;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&this->UVSeamEdges,
             (local_res8->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (local_res8->EdgeRefCounts).RefCounts.CurBlockUsed,Default);
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum
            (&this->NormalSeamEdges,
             (local_res8->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (local_res8->EdgeRefCounts).RefCounts.CurBlockUsed,Default);
  local_a0 = &local_78;
  local_78 = &local_res8;
  local_68 = &local_res10;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMeshVertexPaintTool::PrecomputeFilterData'::__l2::<lambda_2>,void,int>
             ::Call;
  local_60 = local_res18;
  local_b8.DataPtr = (void **)0x0;
  local_b8.ArrayNum = 0;
  local_70 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             (local_res8->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (local_res8->EdgeRefCounts).RefCounts.CurBlockUsed,1,
             (TFunctionRef<void___cdecl(int)> *)&local_a8,local_res8._0_1_,None,&local_b8);
  if ((this->GeometrySelection).bIsSet != false) {
    local_90 = &local_res8;
    local_80 = &local_98;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshVertexPaintTool::PrecomputeFilterData'::__l5::<lambda_3>,void,int>
               ::Call;
    local_98 = this;
    UE::Geometry::EnumerateSelectionTriangles
              (&(this->GeometrySelection).TypedValue,local_res8,
               (TFunctionRef<void___cdecl(int)> *)&local_88,(FPolygroupSet *)0x0);
    pUVar2 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
    local_48 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UMeshVertexPaintTool::PrecomputeFilterData'::`5'::<lambda_4>,1,0>
                ::_vftable_;
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMeshVertexPaintTool::PrecomputeFilterData'::__l5::<lambda_4>,bool,UE::Geometry::FDynamicMesh3_const_*,int>
                  ::Call;
    ppcVar6 = local_58;
    local_30 = 0;
    local_40 = this;
    (**(code **)(pUVar2->_padding_ + 0xd18))(pUVar2,ppcVar6);
    pUVar2 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
    pcVar3 = *(code **)(pUVar2->_padding_ + 0xc30);
    uVar7 = (uint7)((ulonglong)ppcVar6 >> 8);
    if ((((this->FilterProperties).field0_0x0.DebugPtr)->bIsolateGeometrySelection != false) &&
       (*(int *)&(this->SelectionTids).Elements.field_0x8 !=
        *(int *)&(this->SelectionTids).Elements.field_0x34)) {
      (*pcVar3)(pUVar2,(ulonglong)uVar7 << 8);
      return;
    }
    (*pcVar3)(pUVar2,CONCAT71(uVar7,1));
  }
  return;
}

// RegisterActions @ 14cd189c0

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
UMeshVertexPaintTool::RegisterActions(UMeshVertexPaintTool *this,FInteractiveToolActionSet *param_1)

{
  FText *pFVar1;
  FText *pFVar2;
  FString local_78;
  FText local_68;
  FText local_58;
  code *local_48 [2];
  undefined **local_38;
  UMeshVertexPaintTool *local_30;
  undefined8 local_20;
  
  UMeshSculptToolBase::RegisterActions((UMeshSculptToolBase *)this,param_1);
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshVertexPaintTool::RegisterActions'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshVertexPaintTool::RegisterActions'::__l2::<lambda_1>,void>::
                Call;
  local_30 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"UMeshVertexPaintTool",L"PickColorUnderCursorTooltip",
                      L"Switch the Paint Color to the color currently under the cursor");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshVertexPaintTool",L"PickColorUnderCursor",L"Pick Color");
  ::FString::FString(&local_78,L"PickColorUnderCursor");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2904,&local_78,pFVar2,pFVar1,'\x04',&EKeys::G,
             (TFunction<void___cdecl(void)> *)local_48);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  local_20 = 0;
  local_38 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshVertexPaintTool::RegisterActions'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_48[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshVertexPaintTool::RegisterActions'::__l2::<lambda_2>,void>::
                Call;
  local_30 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshVertexPaintTool",L"PickEraseColorUnderCursorTooltip",
                      L"Switch the Erase Color to the color currently under the cursor");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"UMeshVertexPaintTool",L"PickEraseColorUnderCursor",
                      L"Pick Erase Color");
  ::FString::FString(&local_78,L"PickEraseColorUnderCursor");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2905,&local_78,pFVar2,pFVar1,'\x05',&EKeys::G,
             (TFunction<void___cdecl(void)> *)local_48);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  return;
}

// Render @ 14cd1bcd0

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
UMeshVertexPaintTool::Render(UMeshVertexPaintTool *this,IToolsContextRenderAPI *param_1)

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
                        (TVector<double> *)&this->_padding_);
    local_1f8._s_0.X = (double)this->_padding_ * (pTVar5->field0_0x0)._s_0.X;
    local_1f8._s_0.Y = (double)this->_padding_ * (pTVar5->field0_0x0)._s_0.Y;
    local_1f8._s_0.Z = (double)this->_padding_ * (pTVar5->field0_0x0)._s_0.Z;
    pTVar5 = UE::Geometry::operator*<double>
                       (&local_1c8,(TQuaternion<double> *)&this->_padding_,
                        (TVector<double> *)&local_1f8._s_0);
    dVar16 = local_1a8.TotalTransform.Rotation.XY.m128d_f64[1];
    local_1f8._s_0.X = ___xmm_3f8000003dcccccd3dcccccd3f800000;
    local_1f8._s_0.Y = _UNK_15174b778;
    local_1a8.TotalTransform.Scale3D.ZW.m128d_f64[0] =
         ((double)this->_padding_ + (pTVar5->field0_0x0)._s_0.Z) *
         local_1a8.TotalTransform.Scale3D.ZW.m128d_f64[0];
    local_1a8.TotalTransform.Scale3D.ZW.m128d_f64[1] =
         local_1a8.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
    local_1a8.TotalTransform.Scale3D.XY.m128d_f64[0] =
         local_1a8.TotalTransform.Scale3D.XY.m128d_f64[0] *
         ((pTVar5->field0_0x0)._s_0.X + (double)this->_padding_);
    local_1a8.TotalTransform.Scale3D.XY.m128d_f64[1] =
         local_1a8.TotalTransform.Scale3D.XY.m128d_f64[1] *
         ((double)this->_padding_ + (pTVar5->field0_0x0)._s_0.Y);
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

// RequestAction @ 14cd1c2f0

void __thiscall
UMeshVertexPaintTool::RequestAction(UMeshVertexPaintTool *this,EMeshVertexPaintToolActions param_1)

{
  if (this->bHavePendingAction == false) {
    this->PendingAction = param_1;
    this->bHavePendingAction = true;
  }
  return;
}

// SetGeometrySelection @ 14cd1e810

void __thiscall
UMeshVertexPaintTool::SetGeometrySelection(UMeshVertexPaintTool *this,FGeometrySelection *param_1)

{
  TOptional<UE::Geometry::FGeometrySelection>::operator=(&this->GeometrySelection,param_1);
  return;
}

// SetTrianglesToVertexColor @ 14cd1fc20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UMeshVertexPaintTool::SetTrianglesToVertexColor
          (UMeshVertexPaintTool *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          FLinearColor *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  UVertexPaintBrushFilterProperties *pUVar4;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar5;
  UVertexPaintBasicProperties *pUVar6;
  code *pcVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong local_res8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  FLinearColor *local_res18;
  ulonglong local_res20;
  TVector4<float>_u_0 local_108;
  TArray<int,TSizedDefaultAllocator<32>_> local_f8;
  TVector4<float> local_e8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  
  local_res10 = param_1;
  local_res18 = param_2;
  (**(code **)(this->_padding_ + 0x440))();
  pUVar4 = (this->FilterProperties).field0_0x0.DebugPtr;
  pTVar5 = this->ActiveColorOverlay;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  iVar12 = 0;
  if (((pUVar4->bIsolateGeometrySelection != false) &&
      (*(int *)&(this->SelectionTids).Elements.field_0x8 !=
       *(int *)&(this->SelectionTids).Elements.field_0x34)) || (pUVar4->VisibilityFilter != None)) {
    uVar15 = param_1->ArrayNum;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if (0 < (int)uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar15,&local_f8.AllocatorInstance,0,&local_f8.ArrayMax);
    }
    ApplyVisibilityFilter(this,param_1,&local_f8);
    param_1 = &local_f8;
    local_res10 = param_1;
  }
  InitializeElementROIFromTriangleROI(this,param_1,false);
  if (0 < *(int *)&(this->ROIElementSet).Elements.field_0x8 -
          *(int *)&(this->ROIElementSet).Elements.field_0x34) {
    BeginChange(this);
    puVar1 = &(this->ROIElementSet).Elements.field_0x10;
    uStack_cc = 1;
    iVar2 = *(int *)&(this->ROIElementSet).Elements.field_0x28;
    local_d8 = &this->ROIElementSet;
    iStack_bc = iVar12;
    local_b8 = iVar12;
    if (iVar2 != 0) {
      puVar17 = *(uint **)&(this->ROIElementSet).Elements.field_0x20;
      if (puVar17 == (uint *)0x0) {
        puVar17 = (uint *)puVar1;
      }
      uVar15 = *puVar17;
      local_b8 = 0;
      iVar12 = 0;
      while (uVar15 == 0) {
        lVar11 = (longlong)iVar12;
        local_b8 = local_b8 + 0x20;
        iVar12 = iVar12 + 1;
        iStack_bc = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cd1fd9d;
        uVar15 = puVar17[lVar11 + 1];
      }
      uStack_cc = -uVar15 & uVar15;
      uVar14 = (ulonglong)uStack_cc * 2 + 1;
      lVar11 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_res20 = CONCAT44(local_res20._4_4_,(int)lVar11);
      iStack_bc = (int)lVar11 + -1 + local_b8;
      if (iVar2 < iStack_bc) {
        iStack_bc = iVar2;
      }
    }
LAB_14cd1fd9d:
    uVar15 = *(uint *)&(this->ROIElementSet).Elements.field_0x28;
    uVar18 = uVar15 & 0xffffffe0;
    TStack_88._padding_ = CONCAT44(uStack_cc,iVar12);
    iStack_b0 = *(int *)&(this->ROIElementSet).Elements.field_0x8 -
                *(int *)&(this->ROIElementSet).Elements.field_0x34;
    uStack_c0 = 0xffffffff;
    TStack_88.CurrentBitIndex = iStack_bc;
    TStack_88.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar15 >> 5;
    TStack_88._28_4_ = iStack_bc;
    TStack_88.BaseBitIndex = local_b8;
    uStack_68 = CONCAT44(uStack_ac,iStack_b0);
    iStack_d0 = iVar12;
    local_c8 = puVar1;
    iStack_b4 = iStack_bc;
    local_90 = local_d8;
    TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar15 < 0) || (iVar2 < (int)uVar15)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar3 = *(uint *)&(this->ROIElementSet).Elements.field_0x28;
    if (uVar15 != uVar3) {
      puVar16 = *(undefined1 **)&(this->ROIElementSet).Elements.field_0x20;
      if (puVar16 == (undefined1 *)0x0) {
        puVar16 = puVar1;
      }
      uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar13 * 4);
      while (uVar15 == 0) {
        lVar11 = (longlong)iVar13;
        uVar18 = uVar18 + 0x20;
        iVar13 = iVar13 + 1;
        uVar15 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14cd1fec0;
        uVar15 = *(uint *)(puVar16 + lVar11 * 4 + 4);
      }
      uVar14 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar15 = (int)lVar11 + -1 + uVar18;
      if ((int)uVar3 < (int)uVar15) {
        uVar15 = uVar3;
      }
    }
LAB_14cd1fec0:
    while( true ) {
      pTVar8 = local_90;
      if (*(int *)&(local_90->Elements).field_0x8 - *(int *)&(local_90->Elements).field_0x34 !=
          (int)uStack_68) {
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (((TStack_88.CurrentBitIndex == uVar15) &&
          (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar8 == &this->ROIElementSet)) break;
      lVar11 = *(longlong *)&pTVar5->field_0x48;
      uVar3 = *(uint *)(*(longlong *)&pTVar8->Elements + (longlong)TStack_88.CurrentBitIndex * 0xc);
      uVar18 = uVar3 * 4;
      local_res8 = (ulonglong)(uVar18 + 1 & 0x1ff);
      uVar14 = (ulonglong)((uVar3 & 0x3fffffff) >> 7);
      uVar19 = (ulonglong)((uVar3 & 0x3fffffff) >> 7);
      local_e8.field0_0x0._s_0.X =
           (float)*(undefined4 *)
                   (*(longlong *)(lVar11 + uVar14 * 8) + (ulonglong)(uVar18 & 0x1ff) * 4);
      local_e8.field0_0x0._s_0.Y =
           (float)*(undefined4 *)(*(longlong *)(lVar11 + uVar19 * 8) + local_res8 * 4);
      local_a8 = (ulonglong)(uVar18 + 2 & 0x1ff);
      local_res20 = (ulonglong)((uVar3 & 0x3fffffff) >> 7);
      local_98 = (ulonglong)(uVar18 + 3 & 0x1ff);
      local_e8.field0_0x0._s_0.Z =
           (float)*(undefined4 *)(*(longlong *)(lVar11 + local_res20 * 8) + local_a8 * 4);
      local_a0 = (ulonglong)((uVar3 & 0x3fffffff) >> 7);
      local_e8.field0_0x0._s_0.W =
           (float)*(undefined4 *)(*(longlong *)(lVar11 + local_a0 * 8) + local_98 * 4);
      local_108._0_8_ = *(undefined8 *)&local_res18->field0_0x0;
      local_108._8_8_ = *(undefined8 *)((longlong)&local_res18->field0_0x0 + 8);
      pUVar6 = (this->BasicProperties).field0_0x0.DebugPtr;
      if ((pUVar6->ChannelFilter).bRed == false) {
        local_108._s_0.Y = (float)((ulonglong)local_108._0_8_ >> 0x20);
        local_108._s_0.X = local_e8.field0_0x0._s_0.X;
      }
      if ((pUVar6->ChannelFilter).bGreen == false) {
        local_108._s_0.Y = local_e8.field0_0x0._s_0.Y;
      }
      if ((pUVar6->ChannelFilter).bBlue == false) {
        local_108._s_0.W = (float)((ulonglong)local_108._8_8_ >> 0x20);
        local_108._s_0.Z = local_e8.field0_0x0._s_0.Z;
      }
      if ((pUVar6->ChannelFilter).bAlpha == false) {
        local_108._s_0.W = local_e8.field0_0x0._s_0.W;
      }
      TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange>::
      UpdateValue((this->ActiveChangeBuilder).Ptr,uVar3,&local_e8,(TVector4<float> *)&local_108._s_0
                 );
      *(float *)(*(longlong *)(*(longlong *)&pTVar5->field_0x48 + uVar14 * 8) +
                (ulonglong)(uVar18 & 0x1ff) * 4) = local_108._s_0.X;
      *(float *)(*(longlong *)(*(longlong *)&pTVar5->field_0x48 + uVar19 * 8) + local_res8 * 4) =
           local_108._s_0.Y;
      *(float *)(*(longlong *)(*(longlong *)&pTVar5->field_0x48 + local_res20 * 8) + local_a8 * 4) =
           local_108._s_0.Z;
      *(float *)(*(longlong *)(*(longlong *)&pTVar5->field_0x48 + local_a0 * 8) + local_98 * 4) =
           local_108._s_0.W;
      TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
    }
    UDynamicMeshComponent::FastNotifyTriangleVerticesUpdated
              ((this->DynamicMeshComponent).field0_0x0.DebugPtr,local_res10,VertexColors);
    plVar10 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*plVar10 + 0x368))(plVar10);
    EndChange(this);
  }
  if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.AllocatorInstance.Data);
  }
  return;
}

// SetTrianglesToVertexColor @ 14cd20110

void __thiscall
UMeshVertexPaintTool::SetTrianglesToVertexColor
          (UMeshVertexPaintTool *this,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1
          ,FLinearColor *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar9;
  bool bVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res20 [8];
  undefined4 local_d8;
  int local_d4;
  int local_d0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_98;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  pTVar3 = &this->TempROIBuffer;
  iVar13 = 0;
  piVar1 = &(this->TempROIBuffer).ArrayMax;
  (this->TempROIBuffer).ArrayNum = 0;
  if ((this->TempROIBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  iVar5 = *(int *)&(param_1->Elements).field_0x28;
  puVar2 = &(param_1->Elements).field_0x10;
  uStack_bc = 1;
  local_a8 = 0;
  iStack_ac = 0;
  if (iVar5 != 0) {
    puVar16 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)puVar2;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar13;
      local_a8 = local_a8 + 0x20;
      iVar13 = iVar13 + 1;
      iStack_ac = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14cd201ed;
      uVar12 = puVar16[lVar11 + 1];
    }
    uStack_bc = -uVar12 & uVar12;
    uVar4 = (ulonglong)uStack_bc * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d4 = (int)lVar11;
    iStack_ac = local_d4 + -1 + local_a8;
    if (iVar5 < iStack_ac) {
      iStack_ac = iVar5;
    }
  }
LAB_14cd201ed:
  uVar12 = *(uint *)&(param_1->Elements).field_0x28;
  uStack_a4 = local_4c;
  iStack_a0 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar17 = uVar12 & 0xffffffe0;
  TStack_90._padding_ = CONCAT44(uStack_bc,iVar13);
  uStack_b0 = 0xffffffff;
  TStack_90.CurrentBitIndex = iStack_ac;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar12 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = local_a8;
  uStack_70 = CONCAT44(uStack_9c,iStack_a0);
  local_c8 = param_1;
  iStack_c0 = iVar13;
  local_b8 = puVar2;
  local_98 = param_1;
  TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar12 < 0) || (iVar5 < (int)uVar12)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar6 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar12 != uVar6) {
    puVar15 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar2;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar12 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cd20300;
      uVar12 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d0 = (int)lVar11;
    uVar12 = local_d0 + -1 + uVar17;
    if ((int)uVar6 < (int)uVar12) {
      uVar12 = uVar6;
    }
  }
LAB_14cd20300:
  while( true ) {
    pTVar9 = local_98;
    if (*(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34 !=
        (int)uStack_70) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_90.CurrentBitIndex == uVar12) &&
        (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar9 == param_1))
    break;
    local_d8 = *(undefined4 *)
                (*(longlong *)&pTVar9->Elements + (longlong)TStack_90.CurrentBitIndex * 0xc);
    pFVar7 = (pTVar3->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)&local_d8) &&
        ((FScriptContainerElement *)&local_d8 < pFVar7 + (longlong)*piVar1 * 4)) &&
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
    iVar13 = (this->TempROIBuffer).ArrayNum;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->TempROIBuffer).ArrayNum = iVar13 + 1;
    *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar13 * 4) = local_d8;
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  SetTrianglesToVertexColor(this,pTVar3,param_2);
  return;
}

// Setup @ 14cd262d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cd27d90) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UMeshVertexPaintTool::Setup(UMeshVertexPaintTool *this)

{
  int *piVar1;
  TArray<EMeshLODIdentifier,TSizedDefaultAllocator<32>_> *this_00;
  EMeshVertexPaintSecondaryActionType EVar2;
  EMeshVertexPaintInteractionType EVar3;
  code *pcVar4;
  TDynamicMeshOverlay<float,4> *pTVar5;
  UMeshElementsVisualizerProperties *pUVar6;
  FScriptContainerElement *pFVar7;
  undefined8 uVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  EMeshLODIdentifier EVar14;
  FText *pFVar15;
  AInternalToolFrameworkActor *pAVar16;
  UDynamicMeshComponent *pUVar17;
  FDelegateHandle FVar18;
  FDynamicMeshAttributeSet *pFVar19;
  longlong *plVar20;
  UClass *pUVar21;
  UVertexPaintBrushFilterProperties *pUVar22;
  void *pvVar23;
  FDynamicMeshAttributeSet *pFVar24;
  UPolyLassoMarqueeMechanic *pUVar25;
  UPolygroupLayersProperties *pUVar26;
  undefined8 uVar27;
  FDynamicMesh3 *pFVar28;
  UVertexPaintBasicProperties *pUVar29;
  TPropertyWatcher<FModelingToolsColorChannelFilter> *this_01;
  UMeshSymmetryProperties *pUVar30;
  UVertexColorPaintBrushOpProps *pUVar31;
  UMeshSculptBrushOpProps *pUVar32;
  UMeshVertexPaintToolQuickActions *pUVar33;
  UMeshVertexPaintToolUtilityActions *pUVar34;
  UMeshElementsVisualizer *this_02;
  UWorld *pUVar35;
  FMeshDescription *pFVar36;
  FScriptContainerElement *pFVar37;
  FName *pFVar38;
  TArray<EMeshLODIdentifier,TSizedDefaultAllocator<32>_> *pTVar39;
  undefined ***pppuVar40;
  ulonglong uVar41;
  longlong lVar42;
  uint uVar43;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar44;
  FDynamicMeshAttributeSet *pFVar45;
  ForAnyElementType FVar46;
  undefined1 auStackY_ad8 [32];
  undefined1 local_a88 [8];
  FDynamicMesh3 *local_a80;
  undefined1 local_a78;
  undefined1 local_a77 [7];
  FString local_a70;
  FString local_a60;
  UMeshVertexPaintTool *local_a48;
  undefined4 uStack_a40;
  uint uStack_a3c;
  TArray<FName,TSizedDefaultAllocator<32>_> local_a38;
  FGetMeshParameters local_a28;
  FComponentMaterialSet local_a18;
  UMeshVertexPaintTool *local_a08;
  <lambda_5> local_a00;
  FDynamicMeshAttributeSet *local_9f8;
  undefined8 *local_9f0;
  undefined8 *local_9e8;
  FDynamicMeshAttributeSet *local_9e0;
  UMeshVertexPaintTool *local_9d8;
  FName local_9d0;
  FDynamicMeshAttributeSet *local_9c8 [2];
  longlong local_9b8;
  undefined8 uStack_9b0;
  longlong local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  longlong *plStack_990;
  longlong local_988;
  undefined8 uStack_980;
  longlong local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  longlong *plStack_960;
  code *local_958;
  undefined **local_948;
  UMeshVertexPaintTool *local_940;
  undefined ***local_930;
  code *local_928;
  undefined **local_918;
  UMeshVertexPaintTool *local_910;
  undefined ***local_900;
  code *local_8f8;
  undefined **local_8e8;
  UMeshVertexPaintTool *local_8e0;
  undefined ***local_8d0;
  code *local_8c8;
  undefined **local_8b8;
  UMeshVertexPaintTool *local_8b0;
  undefined ***local_8a0;
  code *local_898;
  undefined **local_888;
  UMeshVertexPaintTool *local_880;
  undefined ***local_870;
  undefined1 local_868 [16];
  undefined1 local_858 [16];
  code *local_848;
  UMeshVertexPaintTool **local_840;
  code *local_838;
  undefined1 *local_830;
  code *local_828;
  undefined1 *local_820;
  FString local_818;
  <lambda_7> local_808;
  <lambda_8> local_7f8;
  FString local_7e8;
  undefined1 local_7d8 [16];
  undefined1 local_7c8 [16];
  <lambda_6> local_7b8;
  undefined1 local_7a0 [16];
  void *local_790 [2];
  FString local_780;
  TArray<EMeshLODIdentifier,TSizedDefaultAllocator<32>_> local_770;
  FText local_760;
  code *local_748;
  longlong lStack_740;
  FText local_738;
  FName local_728;
  void *local_720 [2];
  void *local_710 [3];
  code *local_6f8;
  longlong lStack_6f0;
  code *local_6e8 [2];
  undefined **local_6d8;
  UMeshVertexPaintTool *local_6d0;
  longlong local_6c0;
  code *local_6b8 [2];
  undefined **local_6a8;
  UMeshVertexPaintTool *local_6a0;
  longlong local_690;
  code *local_688 [2];
  undefined **local_678;
  UMeshVertexPaintTool *local_670;
  longlong local_660;
  code *local_658 [2];
  undefined **local_648;
  UMeshVertexPaintTool *local_640;
  longlong local_630;
  code *local_628 [2];
  undefined **local_618;
  UMeshVertexPaintTool *local_610;
  longlong local_600;
  code *local_5f8 [2];
  code *local_5e8 [3];
  longlong local_5d0;
  code *local_5c8 [2];
  code *local_5b8 [3];
  longlong local_5a0;
  code *local_598 [2];
  code *local_588 [3];
  longlong local_570;
  code *local_568 [2];
  code *local_558 [3];
  longlong local_540;
  code *local_538 [2];
  code *local_528 [3];
  longlong local_510;
  FText local_508;
  FText local_4f8;
  FText local_4e8;
  FText local_4d8;
  TUniqueFunction<void___cdecl(void)> local_4c8;
  TUniqueFunction<void___cdecl(void)> local_498;
  TUniqueFunction<void___cdecl(void)> local_468;
  TUniqueFunction<void___cdecl(void)> local_438;
  TAxisAlignedBox3<double> local_408;
  undefined1 local_3d8 [128];
  undefined1 local_358 [128];
  undefined1 local_2d8 [128];
  undefined1 local_258 [128];
  undefined1 local_1d8 [128];
  undefined1 local_158 [128];
  code *local_d8 [2];
  undefined **local_c8;
  UMeshVertexPaintTool *local_c0;
  undefined ***local_b0;
  undefined1 local_a8 [112];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_ad8;
  UMeshSculptToolBase::Setup((UMeshSculptToolBase *)this);
  pcVar4 = *(code **)(this->_padding_ + 0x380);
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_738,L"UMeshVertexPaintTool",L"ToolName",L"Paint Vertex Colors");
  (*pcVar4)(this,pFVar15);
  if (local_738.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_738.TextData.Reference + 0x10))();
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_a8);
  pAVar16 = UWorld::SpawnActor<AInternalToolFrameworkActor>
                      ((UWorld *)this->_padding_,&UE::Math::TVector<double>::ZeroVector,
                       &UE::Math::TRotator<double>::ZeroRotator,(FActorSpawnParameters *)local_a8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar16 != (AInternalToolFrameworkActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar16);
  }
  (this->PreviewMeshActor).field0_0x0.DebugPtr = pAVar16;
  pUVar17 = NewObject<UDynamicMeshComponent>((UObject *)pAVar16);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 != (UDynamicMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = pUVar17;
  UMeshSculptToolBase::InitializeSculptMeshComponent
            ((UMeshSculptToolBase *)this,(UBaseDynamicMeshComponent *)pUVar17,
             (AActor *)(this->PreviewMeshActor).field0_0x0.DebugPtr);
  UE::ToolTarget::GetMaterialSet(&local_a18,(UToolTarget *)this->_padding_,false);
  pFVar45 = (FDynamicMeshAttributeSet *)0x0;
  pFVar24 = pFVar45;
  pFVar19 = pFVar45;
  if (0 < local_a18.Materials.ArrayNum) {
    do {
      pUVar17 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
      uVar43 = (uint)pFVar24;
      pcVar4 = *(code **)(pUVar17->_padding_ + 0x6b8);
      uVar11 = 0;
      if ((int)uVar43 < local_a18.Materials.ArrayNum) {
        uVar11 = ~uVar43 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (*pcVar4)(pUVar17,pFVar24,
                *(undefined8 *)
                 (local_a18.Materials.AllocatorInstance.Data + (longlong)&pFVar19->_padding_));
      pFVar24 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar43 + 1);
      pFVar19 = (FDynamicMeshAttributeSet *)&pFVar19->_padding_;
    } while ((int)(uVar43 + 1) < local_a18.Materials.ArrayNum);
  }
  UDynamicMeshComponent::SetInvalidateProxyOnChangeEnabled
            ((this->DynamicMeshComponent).field0_0x0.DebugPtr,false);
  local_a48 = (UMeshVertexPaintTool *)OnDynamicMeshComponentChanged;
  uStack_a40 = 0;
  lStack_740 = (ulonglong)uStack_a3c << 0x20;
  local_748 = OnDynamicMeshComponentChanged;
  FVar18 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
           AddUObject<UMeshVertexPaintTool>
                     ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                       *)&((this->DynamicMeshComponent).field0_0x0.DebugPtr)->OnMeshChanged,
                      (UMeshVertexPaintTool *)local_7a0,(pmf_cc53d88c *)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnDynamicMeshComponentChangedHandle).ID = *FVar18.ID;
  local_a80 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))(this);
  pFVar24 = (local_a80->AttributeSet).Ptr;
  if (pFVar24 == (FDynamicMeshAttributeSet *)0x0) {
    this->ActiveColorOverlay = (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0;
LAB_14cd26567:
    if ((local_a80->AttributeSet).Ptr == (FDynamicMeshAttributeSet *)0x0) {
      UE::Geometry::FDynamicMesh3::EnableAttributes(local_a80);
    }
    pFVar24 = (local_a80->AttributeSet).Ptr;
    pFVar19 = pFVar45;
    if (pFVar24 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar19 = pFVar24;
    }
    if ((pFVar19->ColorLayer).Ptr ==
        (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0) {
      UE::Geometry::FDynamicMeshAttributeSet::EnablePrimaryColors(pFVar24);
    }
    pFVar24 = (local_a80->AttributeSet).Ptr;
    pFVar19 = pFVar45;
    if (pFVar24 != (FDynamicMeshAttributeSet *)0x0) {
      pFVar19 = pFVar24;
    }
    pTVar5 = (TDynamicMeshOverlay<float,4> *)(pFVar19->ColorLayer).Ptr;
    this->ActiveColorOverlay =
         (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)pTVar5;
    if (pTVar5 == (TDynamicMeshOverlay<float,4> *)0x0) {
      plVar20 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar4 = *(code **)(*plVar20 + 0x390);
      FText::AsLocalizable_Advanced_LocText
                (&local_760,L"UMeshVertexPaintTool",L"InvalidColorsMessage",
                 L"Target Mesh does not support Vertex Colors");
      (*pcVar4)(plVar20,this,2,1);
      if (local_760.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_760.TextData.Reference + 0x10))();
      }
      goto LAB_14cd28035;
    }
    local_820 = local_a77;
    local_828 = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshVertexPaintTool::Setup'::__l7::<lambda_1>,bool,int,int,int>
                ::Call;
    UE::Geometry::TDynamicMeshOverlay<float,4>::CreateFromPredicate
              (pTVar5,(TFunctionRef<bool___cdecl(int,int,int)> *)&local_828,__real_3f800000);
  }
  else {
    pTVar5 = (TDynamicMeshOverlay<float,4> *)(pFVar24->ColorLayer).Ptr;
    this->ActiveColorOverlay =
         (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)pTVar5;
    if (pTVar5 == (TDynamicMeshOverlay<float,4> *)0x0) goto LAB_14cd26567;
    local_840 = &local_a08;
    local_848 = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshVertexPaintTool::Setup'::__l18::<lambda_3>,void,int,int,float_*>
                ::Call;
    local_830 = &local_a78;
    local_838 = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshVertexPaintTool::Setup'::__l18::<lambda_2>,bool,int,int>::
                Call;
    local_a08 = this;
    UE::Geometry::TDynamicMeshOverlay<float,4>::SplitVerticesWithPredicate
              (pTVar5,(TFunctionRef<bool___cdecl(int,int)> *)&local_838,
               (TFunctionRef<void___cdecl(int,int,float_*)> *)&local_848);
  }
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->StrokeInitialColorBuffer,
             *(int *)&this->ActiveColorOverlay->field_0x8 * 0x200 +
             *(int *)&this->ActiveColorOverlay->field_0xc,Default);
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->StrokeAccumColorBuffer,
             *(int *)&this->ActiveColorOverlay->field_0x8 * 0x200 +
             *(int *)&this->ActiveColorOverlay->field_0xc,Default);
  UE::Geometry::FDynamicMesh3::GetBounds(local_a80,&local_408,true);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar21 = UVertexPaintBrushFilterProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_3d8,pUVar21);
  local_3d8._8_8_ = this;
  pUVar22 = (UVertexPaintBrushFilterProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_3d8);
  if (local_3d8._64_8_ != 0) {
    plVar20 = (longlong *)(local_3d8 + 0x50);
    if ((longlong *)local_3d8._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_3d8._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar22 != (UVertexPaintBrushFilterProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar22);
  }
  (this->FilterProperties).field0_0x0.DebugPtr = pUVar22;
  pcVar4 = *(code **)(pUVar22->_padding_ + 0x2b8);
  ::FString::FString(&local_818,L"");
  (*pcVar4)(pUVar22,this,&local_818);
  if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_818.Data.AllocatorInstance.Data);
  }
  pUVar22 = (this->FilterProperties).field0_0x0.DebugPtr;
  local_888 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshVertexPaintTool::Setup'::`2'::<lambda_4>,0,0>::_vftable_;
  local_870 = (undefined ***)0x0;
  local_898 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshVertexPaintTool::Setup'::__l2::<lambda_4>,void,enum_EMeshVertexPaintMaterialMode_const_&>
              ::Call;
  local_880 = this;
  pvVar23 = ::operator_new(0xa0);
  pFVar24 = pFVar45;
  if (pvVar23 != (void *)0x0) {
    local_5f8[0] = local_898;
    local_5d0 = 0;
    if (local_898 != (code *)0x0) {
      pppuVar40 = &local_888;
      if (local_870 != (undefined ***)0x0) {
        pppuVar40 = local_870;
      }
      (*(code *)**pppuVar40)(pppuVar40,local_5f8 + 2);
    }
    pFVar24 = (FDynamicMeshAttributeSet *)
              FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintMaterialMode>::
              TPropertyWatcher<enum_EMeshVertexPaintMaterialMode><enum_EMeshVertexPaintMaterialMode,void>
                        (pvVar23,&pUVar22->MaterialMode,
                         (TFunction<void___cdecl(EMeshVertexPaintMaterialMode_const_&)> *)local_5f8)
    ;
  }
  iVar12 = (int)pUVar22->_padding_;
  piVar1 = (int *)((longlong)&pUVar22->_padding_ + 4);
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pUVar22->_padding_,piVar1);
  }
  *(int *)&pUVar22->_padding_ = iVar12 + 1;
  *(FDynamicMeshAttributeSet **)(pUVar22->_padding_ + (longlong)iVar12 * 8) = pFVar24;
  if (local_898 != (code *)0x0) {
    pppuVar40 = &local_888;
    if (local_870 != (undefined ***)0x0) {
      pppuVar40 = local_870;
    }
    (*(code *)(*pppuVar40)[2])();
  }
  ((this->FilterProperties).field0_0x0.DebugPtr)->bToolHasSelection =
       (this->GeometrySelection).bIsSet;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->SelectionTids);
  local_4c8._0_8_ = 0;
  local_4c8._40_8_ = 0;
  local_a00.__this = this;
  Async<_UMeshVertexPaintTool::Setup_::__l2::<lambda_5>_>
            ((TFuture<void> *)local_868,VertexPaintToolAsyncExecTarget,&local_a00,&local_4c8);
  local_7b8.Mesh = &local_a80;
  local_7b8.Bounds = &local_408;
  local_498._0_8_ = 0;
  local_498._40_8_ = 0;
  local_7b8.__this = this;
  Async<_UMeshVertexPaintTool::Setup_::__l2::<lambda_6>_>
            ((TFuture<void> *)local_7c8,VertexPaintToolAsyncExecTarget,&local_7b8,&local_498);
  local_808.Mesh = &local_a80;
  local_468._0_8_ = 0;
  local_468._40_8_ = 0;
  local_808.__this = this;
  Async<_UMeshVertexPaintTool::Setup_::__l2::<lambda_7>_>
            ((TFuture<void> *)local_7d8,VertexPaintToolAsyncExecTarget,&local_808,&local_468);
  local_7f8.Mesh = local_a80;
  local_438._0_8_ = 0;
  local_438._40_8_ = 0;
  local_7f8.__this = this;
  Async<_UMeshVertexPaintTool::Setup_::__l2::<lambda_8>_>
            ((TFuture<void> *)local_858,VertexPaintToolAsyncExecTarget,&local_7f8,&local_438);
  pFVar24 = ::operator_new(0x20);
  local_9f8 = pFVar45;
  if (pFVar24 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar24->_padding_ = 0;
    pFVar24->_padding_ = 0;
    pFVar24->_padding_ = 0;
    pFVar24->ParentMesh = (FDynamicMesh3 *)0x0;
    local_9f8 = pFVar24;
  }
  FMeshRenderDecomposition::BuildChunkedDecomposition
            (local_a80,&local_a18,(FMeshRenderDecomposition *)local_9f8,0x4000);
  FMeshRenderDecomposition::BuildAssociations((FMeshRenderDecomposition *)local_9f8,local_a80);
  pUVar17 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  (**(code **)(pUVar17->_padding_ + 0xd28))(pUVar17,&local_9f8);
  UMeshSculptToolBase::InitializeBrushSizeRange((UMeshSculptToolBase *)this,&local_408);
  pUVar25 = NewObject<UPolyLassoMarqueeMechanic>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar25 != (UPolyLassoMarqueeMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar25);
  }
  (this->PolyLassoMechanic).field0_0x0.DebugPtr = pUVar25;
  (**(code **)(pUVar25->_padding_ + 0x2b0))(pUVar25);
  UPolyLassoMarqueeMechanic::SetIsEnabled((this->PolyLassoMechanic).field0_0x0.DebugPtr,false);
  uStack_a40 = 0;
  ((this->PolyLassoMechanic).field0_0x0.DebugPtr)->SpacingTolerance = 10.0;
  local_a48 = (UMeshVertexPaintTool *)OnPolyLassoFinished;
  lStack_6f0 = (ulonglong)uStack_a3c << 0x20;
  local_6f8 = OnPolyLassoFinished;
  TMulticastDelegateRegistration<void___cdecl(FCameraPolyLasso_const_&,bool),FDefaultDelegateUserPolicy>
  ::AddUObject<UMeshVertexPaintTool>
            ((TMulticastDelegateRegistration<void___cdecl(FCameraPolyLasso_const_&,bool),FDefaultDelegateUserPolicy>
              *)&((this->PolyLassoMechanic).field0_0x0.DebugPtr)->OnDrawPolyLassoFinished,
             (UMeshVertexPaintTool *)(local_7a0 + 8),(pmf_9685e899 *)this);
  pUVar26 = NewObject<UPolygroupLayersProperties>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar26 != (UPolygroupLayersProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar26);
  }
  (this->PolygroupLayerProperties).field0_0x0.DebugPtr = pUVar26;
  pcVar4 = *(code **)(pUVar26->_padding_ + 0x2b8);
  uVar27 = (**(code **)(this->_padding_ + 0x6a8))(this,local_710);
  (*pcVar4)(pUVar26,this,uVar27);
  if (local_710[0] != (void *)0x0) {
    FMemory::Free(local_710[0]);
  }
  pUVar26 = (this->PolygroupLayerProperties).field0_0x0.DebugPtr;
  pFVar28 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))(this);
  UPolygroupLayersProperties::InitializeGroupLayers(pUVar26,pFVar28);
  pUVar26 = (this->PolygroupLayerProperties).field0_0x0.DebugPtr;
  local_6d8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshVertexPaintTool::Setup'::`2'::<lambda_9>,0,0>::_vftable_;
  local_6c0 = 0;
  local_6e8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshVertexPaintTool::Setup'::__l2::<lambda_9>,void,FName_const_&>
                 ::Call;
  local_6d0 = this;
  FWatchablePropertySet::WatchProperty<FName>
            ((FWatchablePropertySet *)&pUVar26->_padding_,&pUVar26->ActiveGroupLayer,
             (TFunction<void___cdecl(FName_const_&)> *)local_6e8);
  UpdateActiveGroupLayer(this);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar21 = UVertexPaintBasicProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_358,pUVar21);
  local_358._8_8_ = this;
  pUVar29 = (UVertexPaintBasicProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_358);
  if (local_358._64_8_ != 0) {
    plVar20 = (longlong *)(local_358 + 0x50);
    if ((longlong *)local_358._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_358._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar29 != (UVertexPaintBasicProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar29);
  }
  (this->BasicProperties).field0_0x0.DebugPtr = pUVar29;
  pcVar4 = *(code **)(pUVar29->_padding_ + 0x2b8);
  ::FString::FString(&local_7e8,L"");
  (*pcVar4)(pUVar29,this,&local_7e8);
  if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
  }
  pUVar29 = (this->BasicProperties).field0_0x0.DebugPtr;
  local_8b8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshVertexPaintTool::Setup'::`2'::<lambda_10>,0,0>::_vftable_
  ;
  local_8a0 = (undefined ***)0x0;
  local_8c8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshVertexPaintTool::Setup'::__l2::<lambda_10>,void,enum_EMeshVertexPaintInteractionType_const_&>
              ::Call;
  local_8b0 = this;
  pvVar23 = ::operator_new(0xa0);
  pFVar24 = pFVar45;
  if (pvVar23 != (void *)0x0) {
    local_5c8[0] = local_8c8;
    local_5a0 = 0;
    if (local_8c8 != (code *)0x0) {
      pppuVar40 = &local_8b8;
      if (local_8a0 != (undefined ***)0x0) {
        pppuVar40 = local_8a0;
      }
      (*(code *)**pppuVar40)(pppuVar40,local_5c8 + 2);
    }
    pFVar24 = (FDynamicMeshAttributeSet *)
              FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintInteractionType>::
              TPropertyWatcher<enum_EMeshVertexPaintInteractionType><enum_EMeshVertexPaintInteractionType,void>
                        (pvVar23,&pUVar29->SubToolType,
                         (TFunction<void___cdecl(EMeshVertexPaintInteractionType_const_&)> *)
                         local_5c8);
  }
  iVar12 = (int)pUVar29->_padding_;
  piVar1 = (int *)((longlong)&pUVar29->_padding_ + 4);
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pUVar29->_padding_,piVar1);
  }
  *(int *)&pUVar29->_padding_ = iVar12 + 1;
  *(FDynamicMeshAttributeSet **)(pUVar29->_padding_ + (longlong)iVar12 * 8) = pFVar24;
  if (local_8c8 != (code *)0x0) {
    pppuVar40 = &local_8b8;
    if (local_8a0 != (undefined ***)0x0) {
      pppuVar40 = local_8a0;
    }
    (*(code *)(*pppuVar40)[2])();
  }
  pUVar29 = (this->BasicProperties).field0_0x0.DebugPtr;
  local_8e8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshVertexPaintTool::Setup'::`2'::<lambda_11>,0,0>::_vftable_
  ;
  local_8d0 = (undefined ***)0x0;
  local_8f8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshVertexPaintTool::Setup'::__l2::<lambda_11>,void,FModelingToolsColorChannelFilter_const_&>
              ::Call;
  local_8e0 = this;
  this_01 = ::operator_new(0xa0);
  pFVar24 = pFVar45;
  if (this_01 != (TPropertyWatcher<FModelingToolsColorChannelFilter> *)0x0) {
    local_598[0] = local_8f8;
    local_570 = 0;
    if (local_8f8 != (code *)0x0) {
      pppuVar40 = &local_8e8;
      if (local_8d0 != (undefined ***)0x0) {
        pppuVar40 = local_8d0;
      }
      (*(code *)**pppuVar40)(pppuVar40,local_598 + 2);
    }
    pFVar24 = (FDynamicMeshAttributeSet *)
              FWatchablePropertySet::TPropertyWatcher<FModelingToolsColorChannelFilter>::
              TPropertyWatcher<FModelingToolsColorChannelFilter><FModelingToolsColorChannelFilter,void>
                        (this_01,&pUVar29->ChannelFilter,
                         (TFunction<void___cdecl(FModelingToolsColorChannelFilter_const_&)> *)
                         local_598);
  }
  iVar12 = (int)pUVar29->_padding_;
  piVar1 = (int *)((longlong)&pUVar29->_padding_ + 4);
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pUVar29->_padding_,piVar1);
  }
  *(int *)&pUVar29->_padding_ = iVar12 + 1;
  *(FDynamicMeshAttributeSet **)(pUVar29->_padding_ + (longlong)iVar12 * 8) = pFVar24;
  if (local_8f8 != (code *)0x0) {
    pppuVar40 = &local_8e8;
    if (local_8d0 != (undefined ***)0x0) {
      pppuVar40 = local_8d0;
    }
    (*(code *)(*pppuVar40)[2])();
  }
  pUVar29 = (this->BasicProperties).field0_0x0.DebugPtr;
  local_948 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshVertexPaintTool::Setup'::`2'::<lambda_12>,0,0>::_vftable_
  ;
  local_930 = (undefined ***)0x0;
  local_958 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshVertexPaintTool::Setup'::__l2::<lambda_12>,void,enum_EMeshVertexPaintSecondaryActionType_const_&>
              ::Call;
  local_940 = this;
  pvVar23 = ::operator_new(0xa0);
  pFVar24 = pFVar45;
  if (pvVar23 != (void *)0x0) {
    local_568[0] = local_958;
    local_540 = 0;
    if (local_958 != (code *)0x0) {
      pppuVar40 = &local_948;
      if (local_930 != (undefined ***)0x0) {
        pppuVar40 = local_930;
      }
      (*(code *)**pppuVar40)(pppuVar40,local_568 + 2);
    }
    pFVar24 = (FDynamicMeshAttributeSet *)
              FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintSecondaryActionType>::
              TPropertyWatcher<enum_EMeshVertexPaintSecondaryActionType><enum_EMeshVertexPaintSecondaryActionType,void>
                        (pvVar23,&pUVar29->SecondaryActionType,
                         (TFunction<void___cdecl(EMeshVertexPaintSecondaryActionType_const_&)> *)
                         local_568);
  }
  iVar12 = (int)pUVar29->_padding_;
  piVar1 = (int *)((longlong)&pUVar29->_padding_ + 4);
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pUVar29->_padding_,piVar1);
  }
  *(int *)&pUVar29->_padding_ = iVar12 + 1;
  *(FDynamicMeshAttributeSet **)(pUVar29->_padding_ + (longlong)iVar12 * 8) = pFVar24;
  if (local_958 != (code *)0x0) {
    pppuVar40 = &local_948;
    if (local_930 != (undefined ***)0x0) {
      pppuVar40 = local_930;
    }
    (*(code *)(*pppuVar40)[2])();
  }
  pUVar29 = (this->BasicProperties).field0_0x0.DebugPtr;
  local_6a8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshVertexPaintTool::Setup'::`2'::<lambda_13>,0,0>::_vftable_
  ;
  local_690 = 0;
  local_6b8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshVertexPaintTool::Setup'::__l2::<lambda_13>,void,bool_const_&>
                 ::Call;
  local_6a0 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar29->_padding_,&pUVar29->bIsErasePressureEnabled,
             (TFunction<void___cdecl(bool_const_&)> *)local_6b8);
  pUVar29 = (this->BasicProperties).field0_0x0.DebugPtr;
  local_678 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshVertexPaintTool::Setup'::`2'::<lambda_14>,0,0>::_vftable_
  ;
  local_660 = 0;
  local_688[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshVertexPaintTool::Setup'::__l2::<lambda_14>,void,bool_const_&>
                 ::Call;
  local_670 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar29->_padding_,&pUVar29->bIsPaintPressureEnabled,
             (TFunction<void___cdecl(bool_const_&)> *)local_688);
  (**(code **)(this->_padding_ + 0x630))(this);
  (**(code **)(this->_padding_ + 0x318))(this,(this->BasicProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x318))(this,this->_padding_);
  *(undefined1 *)(this->_padding_ + 0xec) = 0;
  *(undefined1 *)(this->_padding_ + 0xd0) = 1;
  *(undefined1 *)(this->_padding_ + 0xed) = 1;
  *(undefined1 *)(this->_padding_ + 0xee) = 1;
  *(undefined1 *)(this->_padding_ + 0xef) = 1;
  *(undefined4 *)(this->_padding_ + 0xcc) = 0x3f28f5c3;
  *(undefined1 *)(this->_padding_ + 0xc0) = 1;
  (**(code **)(this->_padding_ + 0x490))(this);
  pUVar30 = NewObject<UMeshSymmetryProperties>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar30 != (UMeshSymmetryProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar30);
  }
  (this->SymmetryProperties).field0_0x0.DebugPtr = pUVar30;
  pcVar4 = *(code **)(pUVar30->_padding_ + 0x2b8);
  uVar27 = (**(code **)(this->_padding_ + 0x6a8))(this,local_720);
  (*pcVar4)(pUVar30,this,uVar27);
  if (local_720[0] != (void *)0x0) {
    FMemory::Free(local_720[0]);
  }
  ((this->SymmetryProperties).field0_0x0.DebugPtr)->bSymmetryCanBeEnabled = false;
  (**(code **)(this->_padding_ + 0x318))(this,(this->SymmetryProperties).field0_0x0.DebugPtr);
  pUVar31 = NewObject<UVertexColorPaintBrushOpProps>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar31 != (UVertexColorPaintBrushOpProps *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar31);
  }
  (this->PaintBrushOpProperties).field0_0x0.DebugPtr = pUVar31;
  local_9f0 = ::operator_new(0x40);
  if (local_9f0 == (undefined8 *)0x0) {
    local_9f0 = (undefined8 *)0x0;
  }
  else {
    *local_9f0 = &___7FLambdaMeshSculptBrushOpFactory__6B_;
    local_9f0[2] = 0;
    local_9f0[7] = 0;
    local_988 = local_9f0[2];
    uVar8 = local_9f0[3];
    local_978 = local_9f0[4];
    uStack_970 = local_9f0[5];
    uVar27 = local_9f0[6];
    plStack_960 = (longlong *)local_9f0[7];
    local_9f0[2] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UMeshVertexPaintTool::Setup'::__l2::<lambda_15>,TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>_>
                   ::Call;
    local_9f0[3] = uStack_980;
    *(undefined4 *)(local_9f0 + 4) = 0x52979b60;
    *(undefined4 *)((longlong)local_9f0 + 0x24) = 1;
    local_9f0[5] = this;
    *(undefined4 *)(local_9f0 + 6) = (undefined4)local_968;
    *(undefined4 *)((longlong)local_9f0 + 0x34) = local_968._4_4_;
    *(undefined4 *)(local_9f0 + 7) = 0;
    *(undefined4 *)((longlong)local_9f0 + 0x3c) = 0;
    uStack_980 = uVar8;
    local_968 = uVar27;
    if (local_988 != 0) {
      plVar20 = &local_978;
      if (plStack_960 != (longlong *)0x0) {
        plVar20 = plStack_960;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_508,L"UMeshVertexPaintTool",L"Paint",L"Paint");
  UMeshSculptToolBase::RegisterBrushType
            ((UMeshSculptToolBase *)this,0,pFVar15,(FMeshSculptBrushOpFactory *)&local_9f0,
             (UMeshSculptBrushOpProps *)pUVar31);
  pUVar31 = NewObject<UVertexColorPaintBrushOpProps>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar31 != (UVertexColorPaintBrushOpProps *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar31);
  }
  (this->EraseBrushOpProperties).field0_0x0.DebugPtr = pUVar31;
  local_9e8 = ::operator_new(0x40);
  if (local_9e8 == (undefined8 *)0x0) {
    local_9e8 = (undefined8 *)0x0;
  }
  else {
    *local_9e8 = &___7FLambdaMeshSculptBrushOpFactory__6B_;
    local_9e8[2] = 0;
    local_9e8[7] = 0;
    local_9b8 = local_9e8[2];
    uVar8 = local_9e8[3];
    local_9a8 = local_9e8[4];
    uStack_9a0 = local_9e8[5];
    uVar27 = local_9e8[6];
    plStack_990 = (longlong *)local_9e8[7];
    local_9e8[2] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UMeshVertexPaintTool::Setup'::__l2::<lambda_16>,TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_>_>
                   ::Call;
    local_9e8[3] = uStack_9b0;
    *(undefined4 *)(local_9e8 + 4) = 0x52979b80;
    *(undefined4 *)((longlong)local_9e8 + 0x24) = 1;
    local_9e8[5] = this;
    *(undefined4 *)(local_9e8 + 6) = (undefined4)local_998;
    *(undefined4 *)((longlong)local_9e8 + 0x34) = local_998._4_4_;
    *(undefined4 *)(local_9e8 + 7) = 0;
    *(undefined4 *)((longlong)local_9e8 + 0x3c) = 0;
    local_998 = uVar27;
    uStack_9b0 = uVar8;
    if (local_9b8 != 0) {
      plVar20 = &local_9a8;
      if (plStack_990 != (longlong *)0x0) {
        plVar20 = plStack_990;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_4f8,L"UMeshVertexPaintTool",L"Erase",L"Erase");
  UMeshSculptToolBase::RegisterSecondaryBrushType
            ((UMeshSculptToolBase *)this,1,pFVar15,(FMeshSculptBrushOpFactory *)&local_9e8,
             (UMeshSculptBrushOpProps *)pUVar31);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar21 = Z_Construct_UClass_UVertexColorSoftenBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_2d8,pUVar21);
  local_2d8._8_8_ = this;
  pUVar32 = (UMeshSculptBrushOpProps *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2d8);
  if (local_2d8._64_8_ != 0) {
    plVar20 = (longlong *)(local_2d8 + 0x50);
    if ((longlong *)local_2d8._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_2d8._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  pFVar24 = ::operator_new(8);
  local_9c8[0] = pFVar45;
  if (pFVar24 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar24->_padding_ =
         (longlong)
         &___7__TBasicMeshSculptBrushOpFactory_VFVertexColorSoftenBrushOp_Geometry_UE____6B_;
    local_9c8[0] = pFVar24;
  }
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_4e8,L"UMeshVertexPaintTool",L"Soften",L"Soften");
  UMeshSculptToolBase::RegisterSecondaryBrushType
            ((UMeshSculptToolBase *)this,2,pFVar15,(FMeshSculptBrushOpFactory *)local_9c8,pUVar32);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar21 = Z_Construct_UClass_UVertexColorSmoothBrushOpProps_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_258,pUVar21);
  local_258._8_8_ = this;
  pUVar32 = (UMeshSculptBrushOpProps *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_258);
  if (local_258._64_8_ != 0) {
    plVar20 = (longlong *)(local_258 + 0x50);
    if ((longlong *)local_258._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_258._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  pFVar24 = ::operator_new(8);
  local_9e0 = pFVar45;
  if (pFVar24 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar24->_padding_ =
         (longlong)
         &___7__TBasicMeshSculptBrushOpFactory_VFVertexColorSmoothBrushOp_Geometry_UE____6B_;
    local_9e0 = pFVar24;
  }
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_4d8,L"UMeshVertexPaintTool",L"Smooth",L"Smooth");
  UMeshSculptToolBase::RegisterSecondaryBrushType
            ((UMeshSculptToolBase *)this,3,pFVar15,(FMeshSculptBrushOpFactory *)&local_9e0,pUVar32);
  UMeshSculptToolBase::RegisterStandardFalloffTypes((UMeshSculptToolBase *)this);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar21 = UMeshVertexPaintToolQuickActions::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_1d8,pUVar21);
  local_1d8._8_8_ = this;
  pUVar33 = (UMeshVertexPaintToolQuickActions *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1d8);
  if (local_1d8._64_8_ != 0) {
    plVar20 = (longlong *)(local_1d8 + 0x50);
    if ((longlong *)local_1d8._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_1d8._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar33 != (UMeshVertexPaintToolQuickActions *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar33);
  }
  (this->QuickActions).field0_0x0.DebugPtr = pUVar33;
  local_9d8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar33->field_0xb0,(FObjectPtr)&local_9d8);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar21 = UMeshVertexPaintToolUtilityActions::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_158,pUVar21);
  local_158._8_8_ = this;
  pUVar34 = (UMeshVertexPaintToolUtilityActions *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_158);
  if (local_158._64_8_ != 0) {
    plVar20 = (longlong *)(local_158 + 0x50);
    if ((longlong *)local_158._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_158._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar34 != (UMeshVertexPaintToolUtilityActions *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar34);
  }
  (this->UtilityActions).field0_0x0.DebugPtr = pUVar34;
  local_a48 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar34->_padding_,(FObjectPtr)&local_a48);
  (**(code **)(this->_padding_ + 0x318))(this,(this->FilterProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x318))(this,this->_padding_);
  (**(code **)(this->_padding_ + 0x318))(this,(this->QuickActions).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x318))(this,(this->UtilityActions).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x318))(this,(this->PolygroupLayerProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x318))(this,this->_padding_);
  (**(code **)(this->_padding_ + 0x338))(this,this->_padding_,0);
  pUVar29 = (this->BasicProperties).field0_0x0.DebugPtr;
  local_918 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshVertexPaintTool::Setup'::`2'::<lambda_17>,0,0>::_vftable_
  ;
  local_900 = (undefined ***)0x0;
  local_928 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshVertexPaintTool::Setup'::__l2::<lambda_17>,void,enum_EMeshVertexPaintBrushType_const_&>
              ::Call;
  local_910 = this;
  pvVar23 = ::operator_new(0xa0);
  pFVar24 = pFVar45;
  if (pvVar23 != (void *)0x0) {
    local_538[0] = local_928;
    local_510 = 0;
    if (local_928 != (code *)0x0) {
      pppuVar40 = &local_918;
      if (local_900 != (undefined ***)0x0) {
        pppuVar40 = local_900;
      }
      (*(code *)**pppuVar40)(pppuVar40,local_538 + 2);
    }
    pFVar24 = (FDynamicMeshAttributeSet *)
              FWatchablePropertySet::TPropertyWatcher<enum_EMeshVertexPaintBrushType>::
              TPropertyWatcher<enum_EMeshVertexPaintBrushType><enum_EMeshVertexPaintBrushType,void>
                        (pvVar23,&pUVar29->PrimaryBrushType,
                         (TFunction<void___cdecl(EMeshVertexPaintBrushType_const_&)> *)local_538);
  }
  iVar12 = (int)pUVar29->_padding_;
  piVar1 = (int *)((longlong)&pUVar29->_padding_ + 4);
  if (iVar12 == *piVar1) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pUVar29->_padding_,piVar1);
  }
  *(int *)&pUVar29->_padding_ = iVar12 + 1;
  *(FDynamicMeshAttributeSet **)(pUVar29->_padding_ + (longlong)iVar12 * 8) = pFVar24;
  if (local_928 != (code *)0x0) {
    pppuVar40 = &local_918;
    if (local_900 != (undefined ***)0x0) {
      pppuVar40 = local_900;
    }
    (*(code *)(*pppuVar40)[2])();
  }
  UMeshSculptToolBase::OnCompleteSetup((UMeshSculptToolBase *)this);
  UpdateBrushType(this,((this->BasicProperties).field0_0x0.DebugPtr)->PrimaryBrushType);
  EVar2 = ((this->BasicProperties).field0_0x0.DebugPtr)->SecondaryActionType;
  if (EVar2 == Erase) {
    iVar12 = 1;
LAB_14cd276f7:
    UMeshSculptToolBase::SetActiveSecondaryBrushType((UMeshSculptToolBase *)this,iVar12);
  }
  else {
    if (EVar2 == Soften) {
      iVar12 = 2;
      goto LAB_14cd276f7;
    }
    if (EVar2 == Smooth) {
      iVar12 = 3;
      goto LAB_14cd276f7;
    }
  }
  (**(code **)(this->_padding_ + 0x480))(this,0);
  this_02 = NewObject<UMeshElementsVisualizer>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_02 != (UMeshElementsVisualizer *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_02);
  }
  (this->MeshElementsDisplay).field0_0x0.DebugPtr = this_02;
  pUVar17 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  pUVar35 = (UWorld *)pUVar17->_padding_;
  if (pUVar35 == (UWorld *)0x0) {
    pUVar35 = UActorComponent::GetWorld_Uncached((UActorComponent *)pUVar17);
  }
  UPreviewGeometry::CreateInWorld
            ((UPreviewGeometry *)this_02,pUVar35,(TTransform<double> *)&pUVar17->_padding_);
  pUVar6 = (((this->MeshElementsDisplay).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr;
  if (pUVar6 == (UMeshElementsVisualizerProperties *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4776106948590305630>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
                       ,0x15e,"MeshElementsDisplay->Settings");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pUVar6->bShowColorSeams = false;
    pUVar6 = (((this->MeshElementsDisplay).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr;
    pcVar4 = *(code **)(pUVar6->_padding_ + 0x2b8);
    uVar27 = (**(code **)(this->_padding_ + 0x6a8))(this,local_790);
    (*pcVar4)(pUVar6,this,uVar27);
    if (local_790[0] != (void *)0x0) {
      FMemory::Free(local_790[0]);
    }
    (**(code **)(this->_padding_ + 0x318))
              (this,(((this->MeshElementsDisplay).field0_0x0.DebugPtr)->Settings).field0_0x0.
                    DebugPtr);
  }
  local_c8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshVertexPaintTool::Setup'::`2'::<lambda_18>,1,0>::_vftable_;
  local_b0 = (undefined ***)0x0;
  local_d8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshVertexPaintTool::Setup'::__l2::<lambda_18>,void,TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)>_>
                ::Call;
  local_c0 = this;
  UMeshElementsVisualizer::SetMeshAccessFunction
            ((this->MeshElementsDisplay).field0_0x0.DebugPtr,
             (TUniqueFunction<void___cdecl(TFunctionRef<void___cdecl(UE::Geometry::FDynamicMesh3_const_&)>)>
              *)local_d8);
  if (local_d8[0] != (code *)0x0) {
    pppuVar40 = &local_c8;
    if (local_b0 != (undefined ***)0x0) {
      pppuVar40 = local_b0;
    }
    (*(code *)(*pppuVar40)[2])();
  }
  pUVar22 = (this->FilterProperties).field0_0x0.DebugPtr;
  local_648 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshVertexPaintTool::Setup'::`2'::<lambda_19>,0,0>::_vftable_
  ;
  local_630 = 0;
  local_658[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshVertexPaintTool::Setup'::__l2::<lambda_19>,void,bool_const_&>
                 ::Call;
  local_640 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar22->_padding_,&pUVar22->bIsolateGeometrySelection,
             (TFunction<void___cdecl(bool_const_&)> *)local_658);
  local_a38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a28.bHaveRequestLOD = false;
  local_a28._1_3_ = 0;
  local_a28.RequestLOD = Default;
  local_a28.bWantMeshTangents = false;
  local_a28._9_3_ = 0;
  local_a38.ArrayNum = 0;
  local_a38.ArrayMax = 0;
  pFVar36 = UE::ToolTarget::GetMeshDescription((UToolTarget *)this->_padding_,&local_a28);
  UE::WeightMaps::FindVertexWeightMaps(pFVar36,&local_a38);
  iVar12 = local_a38.ArrayNum;
  uVar41 = (ulonglong)local_a38.ArrayNum;
  pFVar38 = (FName *)(local_a38.AllocatorInstance.Data + uVar41 * 8);
  FVar46.Data = local_a38.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar41 != iVar12) {
      local_a88[0] = 0;
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_a88);
    }
    if ((FName *)FVar46.Data == pFVar38) break;
    local_9d0 = *(FName *)FVar46.Data;
    pUVar34 = (this->UtilityActions).field0_0x0.DebugPtr;
    pTVar44 = &pUVar34->WeightMapsList;
    pFVar37 = (FScriptContainerElement *)::FName::ToString(&local_9d0,&local_780);
    pFVar7 = (pTVar44->AllocatorInstance).Data;
    if (((pFVar7 <= pFVar37) &&
        (pFVar37 < pFVar7 + (longlong)(pUVar34->WeightMapsList).ArrayMax * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar13 = (pUVar34->WeightMapsList).ArrayNum;
    piVar1 = &(pUVar34->WeightMapsList).ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar44->AllocatorInstance,piVar1);
    }
    lVar42 = (longlong)iVar13;
    (pUVar34->WeightMapsList).ArrayNum = iVar13 + 1;
    pFVar7 = (pTVar44->AllocatorInstance).Data;
    *(undefined8 *)(pFVar7 + lVar42 * 0x10) = 0;
    *(undefined8 *)(pFVar7 + lVar42 * 0x10) = *(undefined8 *)pFVar37;
    *(undefined8 *)pFVar37 = 0;
    *(int *)(pFVar7 + lVar42 * 0x10 + 8) = *(int *)(pFVar37 + 8);
    *(int *)(pFVar7 + lVar42 * 0x10 + 0xc) = *(int *)(pFVar37 + 0xc);
    *(undefined8 *)(pFVar37 + 8) = 0;
    if (local_780.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_780.Data.AllocatorInstance.Data);
    }
    uVar41 = local_a38._8_8_ & 0xffffffff;
    FVar46.Data = FVar46.Data + 8;
  }
  pUVar34 = (this->UtilityActions).field0_0x0.DebugPtr;
  if (0 < (pUVar34->WeightMapsList).ArrayNum) {
    if (((pUVar34->WeightMapsList).ArrayNum < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar7 = (pUVar34->WeightMapsList).AllocatorInstance.Data;
    iVar12 = *(int *)(pFVar7 + 8);
    uVar11 = iVar12 - 1;
    if (iVar12 == 0) {
      uVar11 = 0;
    }
    pFVar38 = ::FName::FName(&local_728,uVar11,*(wchar_t **)pFVar7,FNAME_Add);
    ((this->UtilityActions).field0_0x0.DebugPtr)->WeightMap = *pFVar38;
  }
  EVar14 = UE::ToolTarget::GetTargetMeshDescriptionLOD
                     ((UToolTarget *)this->_padding_,&this->bTargetSupportsLODs);
  this->SourceLOD = EVar14;
  if (this->bTargetSupportsLODs != false) {
    pTVar39 = UE::ToolTarget::GetMeshDescriptionLODs
                        (&local_770,(UToolTarget *)this->_padding_,&this->bTargetSupportsLODs,false,
                         true);
    this_00 = &this->AvailableLODs;
    if (this_00 != pTVar39) {
      pFVar7 = (this_00->AllocatorInstance).Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (this_00->AllocatorInstance).Data = (pTVar39->AllocatorInstance).Data;
      (pTVar39->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (this->AvailableLODs).ArrayNum = pTVar39->ArrayNum;
      (this->AvailableLODs).ArrayMax = pTVar39->ArrayMax;
      pTVar39->ArrayNum = 0;
      pTVar39->ArrayMax = 0;
    }
    if (local_770.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_770.AllocatorInstance.Data);
    }
    TArray<enum_EMeshLODIdentifier,TSizedDefaultAllocator<32>_>::Remove(this_00,&this->SourceLOD);
    if ((this->bTargetSupportsLODs != false) &&
       (pFVar24 = pFVar45, pFVar19 = pFVar45, 0 < (this->AvailableLODs).ArrayNum)) {
      do {
        uVar43 = (uint)pFVar24;
        uVar11 = 0;
        if ((int)uVar43 < (this->AvailableLODs).ArrayNum) {
          uVar11 = ~uVar43 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        EVar14 = *(EMeshLODIdentifier *)
                  ((longlong)&pFVar19->_padding_ +
                  (longlong)(this->AvailableLODs).AllocatorInstance.Data);
        if (EVar14 != this->SourceLOD) {
          pUVar34 = (this->UtilityActions).field0_0x0.DebugPtr;
          pTVar44 = &pUVar34->LODNamesList;
          if (EVar14 == HiResSource) {
            ::FString::FString(&local_a70,L"HiRes");
            pFVar7 = (pTVar44->AllocatorInstance).Data;
            if (((pFVar7 <= (FScriptContainerElement *)&local_a70) &&
                ((FScriptContainerElement *)&local_a70 <
                 pFVar7 + (longlong)(pUVar34->LODNamesList).ArrayMax * 0x10)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar12 = (pUVar34->LODNamesList).ArrayNum;
            piVar1 = &(pUVar34->LODNamesList).ArrayMax;
            if (iVar12 == *piVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar44->AllocatorInstance,piVar1);
            }
            lVar42 = (longlong)iVar12;
            (pUVar34->LODNamesList).ArrayNum = iVar12 + 1;
            pFVar7 = (pTVar44->AllocatorInstance).Data;
            *(undefined8 *)(pFVar7 + lVar42 * 0x10) = 0;
            *(FScriptContainerElement **)(pFVar7 + lVar42 * 0x10) =
                 local_a70.Data.AllocatorInstance.Data;
            local_a70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar7 + lVar42 * 0x10 + 8) = local_a70.Data.ArrayNum;
            *(int *)(pFVar7 + lVar42 * 0x10 + 0xc) = local_a70.Data.ArrayMax;
            local_a70.Data.ArrayNum = 0;
            local_a70.Data.ArrayMax = 0;
          }
          else {
            ::FString::PrintfImpl(&local_a60,L"LOD %d");
            pFVar7 = (pTVar44->AllocatorInstance).Data;
            if (((pFVar7 <= (FScriptContainerElement *)&local_a60) &&
                ((FScriptContainerElement *)&local_a60 <
                 pFVar7 + (longlong)(pUVar34->LODNamesList).ArrayMax * 0x10)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar12 = (pUVar34->LODNamesList).ArrayNum;
            piVar1 = &(pUVar34->LODNamesList).ArrayMax;
            if (iVar12 == *piVar1) {
              iVar12 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar44->AllocatorInstance,piVar1);
            }
            lVar42 = (longlong)iVar12;
            (pUVar34->LODNamesList).ArrayNum = iVar12 + 1;
            pFVar7 = (pTVar44->AllocatorInstance).Data;
            *(undefined8 *)(pFVar7 + lVar42 * 0x10) = 0;
            *(FScriptContainerElement **)(pFVar7 + lVar42 * 0x10) =
                 local_a60.Data.AllocatorInstance.Data;
            local_a60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            *(int *)(pFVar7 + lVar42 * 0x10 + 8) = local_a60.Data.ArrayNum;
            *(int *)(pFVar7 + lVar42 * 0x10 + 0xc) = local_a60.Data.ArrayMax;
            local_a60.Data.ArrayNum = 0;
            local_a60.Data.ArrayMax = 0;
          }
        }
        pFVar24 = (FDynamicMeshAttributeSet *)(ulonglong)(uVar43 + 1);
        pFVar19 = (FDynamicMeshAttributeSet *)((longlong)&pFVar19->_padding_ + 4);
      } while ((int)(uVar43 + 1) < (this->AvailableLODs).ArrayNum);
      pUVar34 = (this->UtilityActions).field0_0x0.DebugPtr;
      if (((pUVar34->LODNamesList).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = (pUVar34->LODNamesList).AllocatorInstance.Data;
      iVar12 = *(int *)(pFVar7 + 8);
      pFVar24 = (FDynamicMeshAttributeSet *)(ulonglong)(iVar12 - 1);
      if (iVar12 == 0) {
        pFVar24 = pFVar45;
      }
      ::FString::AssignRange
                (&((this->UtilityActions).field0_0x0.DebugPtr)->CopyToLODName,*(wchar_t **)pFVar7,
                 (int)pFVar24);
    }
  }
  (**(code **)(this->_padding_ + 0x5e0))(this,0);
  (**(code **)(this->_padding_ + 0x5e8))(this,0);
  (**(code **)(this->_padding_ + 0x5f8))(this,1);
  UpdateVertexPaintMaterialMode(this);
  EVar3 = ((this->BasicProperties).field0_0x0.DebugPtr)->SubToolType;
  ((this->FilterProperties).field0_0x0.DebugPtr)->CurrentSubToolType = EVar3;
  (**(code **)(this->_padding_ + 0x338))(this,this->_padding_,EVar3 != PolyLasso);
  *(undefined1 *)&this->_padding_ = 0;
  if (this->_padding_ != 0) {
    (**(code **)(this->_padding_ + 0x338))(this,this->_padding_,0);
  }
  if (this->_padding_ != 0) {
    (**(code **)(this->_padding_ + 0x338))(this,this->_padding_,0);
  }
  OnChannelFilterModified(this);
  if (local_868._0_8_ != 0) {
    do {
      cVar10 = (**(code **)(**(longlong **)(local_868._0_8_ + 0x60) + 0x20))
                         (*(longlong **)(local_868._0_8_ + 0x60),0xffffffff,0);
    } while (cVar10 == '\0');
  }
  if (local_7c8._0_8_ != 0) {
    do {
      cVar10 = (**(code **)(**(longlong **)(local_7c8._0_8_ + 0x60) + 0x20))
                         (*(longlong **)(local_7c8._0_8_ + 0x60),0xffffffff,0);
    } while (cVar10 == '\0');
  }
  if (local_7d8._0_8_ != 0) {
    do {
      cVar10 = (**(code **)(**(longlong **)(local_7d8._0_8_ + 0x60) + 0x20))
                         (*(longlong **)(local_7d8._0_8_ + 0x60),0xffffffff,0);
    } while (cVar10 == '\0');
  }
  if (local_858._0_8_ != 0) {
    do {
      cVar10 = (**(code **)(**(longlong **)(local_858._0_8_ + 0x60) + 0x20))
                         (*(longlong **)(local_858._0_8_ + 0x60),0xffffffff,0);
    } while (cVar10 == '\0');
  }
  ((this->SymmetryProperties).field0_0x0.DebugPtr)->bSymmetryCanBeEnabled =
       this->bMeshSymmetryIsValid;
  if ((this->bMeshSymmetryIsValid == false) ||
     (((this->SymmetryProperties).field0_0x0.DebugPtr)->bEnableSymmetry == false)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  pUVar30 = (this->SymmetryProperties).field0_0x0.DebugPtr;
  this->bApplySymmetry = bVar9;
  local_618 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshVertexPaintTool::Setup'::`2'::<lambda_20>,0,0>::_vftable_
  ;
  local_600 = 0;
  local_628[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshVertexPaintTool::Setup'::__l2::<lambda_20>,void,bool_const_&>
                 ::Call;
  local_610 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar30->_padding_,&pUVar30->bEnableSymmetry,
             (TFunction<void___cdecl(bool_const_&)> *)local_628);
  if (local_a38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a38.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_858._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_7d8._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_7c8._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_868._8_8_);
LAB_14cd28035:
  if (local_a18.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a18.Materials.AllocatorInstance.Data);
  }
  if (local_a8._64_8_ != 0) {
    plVar20 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  return;
}

// ShouldFilterTrianglesBySelection @ 14cd2d270

bool __thiscall UMeshVertexPaintTool::ShouldFilterTrianglesBySelection(UMeshVertexPaintTool *this)

{
  if ((((this->FilterProperties).field0_0x0.DebugPtr)->bIsolateGeometrySelection != false) &&
     (*(int *)&(this->SelectionTids).Elements.field_0x8 !=
      *(int *)&(this->SelectionTids).Elements.field_0x34)) {
    return true;
  }
  return false;
}

// ShowWorkPlane @ 14cd2d2c0

bool __thiscall UMeshVertexPaintTool::ShowWorkPlane(UMeshVertexPaintTool *this)

{
  return false;
}

// Shutdown @ 14cd2db90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMeshVertexPaintTool::Shutdown(UMeshVertexPaintTool *this,EToolShutdownType param_1)

{
  UDynamicMeshComponent *pUVar1;
  UMeshElementsVisualizerProperties *pUVar2;
  UVertexPaintBasicProperties *pUVar3;
  UVertexPaintBrushFilterProperties *pUVar4;
  UPolygroupLayersProperties *pUVar5;
  UMeshSymmetryProperties *pUVar6;
  AInternalToolFrameworkActor *this_00;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  code *pcVar10;
  float fVar11;
  bool bVar12;
  undefined8 uVar13;
  FDynamicMesh3 *this_01;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  void *local_38 [4];
  
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UDynamicMeshComponent *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnMeshChanged,
               (FDelegateHandle)(this->OnDynamicMeshComponentChangedHandle).ID);
  }
  pUVar2 = (((this->MeshElementsDisplay).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr;
  if (pUVar2 == (UMeshElementsVisualizerProperties *)0x0) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<4776106948590305727>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
                        ,0x1bf,"MeshElementsDisplay->Settings");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  else {
    pcVar10 = *(code **)(pUVar2->_padding_ + 0x2b0);
    uVar13 = (**(code **)(this->_padding_ + 0x6a8))(this,local_58);
    (*pcVar10)(pUVar2,this,uVar13);
    if (local_58[0] != (void *)0x0) {
      FMemory::Free(local_58[0]);
    }
  }
  UPreviewGeometry::Disconnect((UPreviewGeometry *)(this->MeshElementsDisplay).field0_0x0.DebugPtr);
  pUVar3 = (this->BasicProperties).field0_0x0.DebugPtr;
  pcVar10 = *(code **)(pUVar3->_padding_ + 0x2b0);
  ::FString::FString(&local_78,L"");
  (*pcVar10)(pUVar3,this,&local_78);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  pUVar4 = (this->FilterProperties).field0_0x0.DebugPtr;
  pcVar10 = *(code **)(pUVar4->_padding_ + 0x2b0);
  ::FString::FString(&local_68,L"");
  (*pcVar10)(pUVar4,this,&local_68);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  pUVar5 = (this->PolygroupLayerProperties).field0_0x0.DebugPtr;
  pcVar10 = *(code **)(pUVar5->_padding_ + 0x2b0);
  uVar13 = (**(code **)(this->_padding_ + 0x6a8))(this,local_48);
  (*pcVar10)(pUVar5,this,uVar13);
  if (local_48[0] != (void *)0x0) {
    FMemory::Free(local_48[0]);
  }
  pUVar6 = (this->SymmetryProperties).field0_0x0.DebugPtr;
  pcVar10 = *(code **)(pUVar6->_padding_ + 0x2b0);
  uVar13 = (**(code **)(this->_padding_ + 0x6a8))(this,local_38);
  (*pcVar10)(pUVar6,this,uVar13);
  if (local_38[0] != (void *)0x0) {
    FMemory::Free(local_38[0]);
  }
  this_00 = (this->PreviewMeshActor).field0_0x0.DebugPtr;
  uVar16 = 0;
  if (this_00 != (AInternalToolFrameworkActor *)0x0) {
    AActor::Destroy((AActor *)this_00,false,true);
    (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  }
  if (param_1 != Accept) goto LAB_14cd2de82;
  this_01 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))(this);
  fVar11 = __real_322bcc77;
  pTVar7 = this->ActiveColorOverlay;
  uVar17 = (this_01->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (this_01->VertexRefCounts).RefCounts.CurBlockUsed;
  if ((uVar17 == 0) ||
     (pFVar8 = (this_01->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
     (ushort)(**(short **)pFVar8 - 1U) < 0xfffe)) {
LAB_14cd2ddf6:
    uVar15 = (uint)uVar16;
  }
  else {
    uVar16 = 1;
    uVar15 = 1;
    if (1 < (int)uVar17) {
      do {
        uVar14 = (ulonglong)((uint)uVar16 & 0x1ff);
        lVar9 = *(longlong *)(pFVar8 + (uVar16 >> 9) * 8);
        if ((*(short *)(lVar9 + uVar14 * 2) != 0) && (*(short *)(lVar9 + uVar14 * 2) != -1)) break;
        uVar15 = (uint)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
      } while ((int)uVar15 < (int)uVar17);
      goto LAB_14cd2ddf6;
    }
  }
joined_r0x00014cd2ddf8:
  if (uVar15 != uVar17) {
    while( true ) {
      UE::Geometry::FSplitAttributeWelder::WeldSplitColors((int)uVar16,pTVar7,fVar11);
      uVar15 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar15;
      if ((int)uVar17 <= (int)uVar15) break;
      while( true ) {
        uVar14 = (ulonglong)((uint)uVar16 & 0x1ff);
        lVar9 = *(longlong *)
                 ((this_01->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 (uVar16 >> 9) * 8);
        if ((*(short *)(lVar9 + uVar14 * 2) != 0) && (*(short *)(lVar9 + uVar14 * 2) != -1)) break;
        uVar15 = (uint)uVar16 + 1;
        uVar16 = (ulonglong)uVar15;
        if ((int)uVar17 <= (int)uVar15) goto joined_r0x00014cd2ddf8;
      }
    }
    goto joined_r0x00014cd2ddf8;
  }
  UE::Geometry::FDynamicMesh3::CompactInPlace(this_01,(FCompactMaps *)0x0);
LAB_14cd2de82:
  UMeshSculptToolBase::Shutdown((UMeshSculptToolBase *)this,param_1);
  return;
}

// StaticRegisterNativesUMeshVertexPaintTool @ 14cd2f150

void __cdecl UMeshVertexPaintTool::StaticRegisterNativesUMeshVertexPaintTool(void)

{
  return;
}

// SwapChannels @ 14cd2f660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UMeshVertexPaintTool::SwapChannels(UMeshVertexPaintTool *this)

{
  undefined4 uVar1;
  EMeshVertexPaintColorChannel EVar2;
  EMeshVertexPaintColorChannel EVar3;
  UMeshVertexPaintToolUtilityActions *pUVar4;
  code *pcVar5;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar6;
  longlong lVar7;
  bool bVar8;
  longlong *plVar9;
  FText *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  TVector4<float>_u_0 local_88;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  FText local_68 [2];
  
  pUVar4 = (this->UtilityActions).field0_0x0.DebugPtr;
  EVar2 = pUVar4->SourceChannel;
  uVar16 = (ulonglong)EVar2;
  EVar3 = pUVar4->TargetChannel;
  uVar21 = (uint)EVar3;
  if (Alpha < EVar2) {
    uVar16 = 3;
  }
  if (Alpha < EVar3) {
    uVar21 = 3;
  }
  if ((uint)uVar16 == uVar21) {
    plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
    pcVar5 = *(code **)(*plVar9 + 0x360);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (local_68,L"UMeshVertexPaintTool",L"SameSourceDestMessage",
                         L"Source and Destination must be different Channels");
    (*pcVar5)(plVar9,pFVar10,4);
    if (local_68[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_68[0].TextData.Reference + 0x10))();
      return;
    }
  }
  else {
    BeginChange(this);
    pTVar6 = this->ActiveColorOverlay;
    uVar17 = *(int *)&pTVar6->field_0x8 * 0x200 + *(int *)&pTVar6->field_0xc;
    uVar15 = 0;
    if ((uVar17 != 0) &&
       (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)&pTVar6->field_0x10 - 1U))) {
      uVar14 = 1;
      uVar15 = 1;
      if (1 < (int)uVar17) {
        do {
          lVar7 = (*(undefined8 **)&pTVar6->field_0x10)[uVar14 >> 9];
          if ((*(short *)(lVar7 + (ulonglong)(uVar14 & 0x1ff) * 2) != 0) &&
             (uVar15 = uVar14, *(short *)(lVar7 + (ulonglong)(uVar14 & 0x1ff) * 2) != -1)) break;
          uVar14 = uVar14 + 1;
          uVar15 = uVar14;
        } while ((int)uVar14 < (int)uVar17);
      }
    }
    if (uVar15 != uVar17) {
LAB_14cd2f7c0:
      do {
        lVar7 = *(longlong *)&pTVar6->field_0x48;
        uVar14 = uVar15 * 4;
        uVar18 = (ulonglong)(uVar14 + 1 & 0x1ff);
        uVar22 = (ulonglong)((uVar15 & 0x3fffffff) >> 7);
        uVar20 = (ulonglong)((uVar15 & 0x3fffffff) >> 7);
        local_78 = *(float *)(*(longlong *)(lVar7 + uVar22 * 8) + (ulonglong)(uVar14 & 0x1ff) * 4);
        fStack_74 = *(float *)(*(longlong *)(lVar7 + uVar20 * 8) + uVar18 * 4);
        uVar19 = (ulonglong)(uVar14 + 2 & 0x1ff);
        uVar11 = (ulonglong)((uVar15 & 0x3fffffff) >> 7);
        uVar13 = (ulonglong)(uVar14 + 3 & 0x1ff);
        fStack_70 = *(float *)(*(longlong *)(lVar7 + uVar11 * 8) + uVar19 * 4);
        uVar12 = (ulonglong)((uVar15 & 0x3fffffff) >> 7);
        fStack_6c = *(float *)(*(longlong *)(lVar7 + uVar12 * 8) + uVar13 * 4);
        local_88._s_0.X = local_78;
        local_88._s_0.Y = fStack_74;
        local_88._s_0.Z = fStack_70;
        local_88._s_0.W = fStack_6c;
        if ((3 < uVar21) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                               ,0x310,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((3 < (uint)uVar16) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector4.h"
                               ,0x310,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar1 = *(undefined4 *)((longlong)&local_88 + uVar16 * 4);
        *(undefined4 *)((longlong)&local_88 + uVar16 * 4) =
             *(undefined4 *)((longlong)&local_88 + (ulonglong)uVar21 * 4);
        *(undefined4 *)((longlong)&local_88 + (ulonglong)uVar21 * 4) = uVar1;
        TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange>::
        UpdateValue((this->ActiveChangeBuilder).Ptr,uVar15,(TVector4<float> *)&local_78,
                    (TVector4<float> *)&local_88._s_0);
        uVar15 = uVar15 + 1;
        *(float *)(*(longlong *)(*(longlong *)&pTVar6->field_0x48 + uVar22 * 8) +
                  (ulonglong)(uVar14 & 0x1ff) * 4) = local_88._s_0.X;
        *(float *)(*(longlong *)(*(longlong *)&pTVar6->field_0x48 + uVar20 * 8) + uVar18 * 4) =
             local_88._s_0.Y;
        *(float *)(*(longlong *)(*(longlong *)&pTVar6->field_0x48 + uVar11 * 8) + uVar19 * 4) =
             local_88._s_0.Z;
        *(float *)(*(longlong *)(*(longlong *)&pTVar6->field_0x48 + uVar12 * 8) + uVar13 * 4) =
             local_88._s_0.W;
        if ((int)uVar15 < (int)uVar17) {
          do {
            lVar7 = *(longlong *)(*(longlong *)&pTVar6->field_0x10 + (ulonglong)(uVar15 >> 9) * 8);
            if ((*(short *)(lVar7 + (ulonglong)(uVar15 & 0x1ff) * 2) != 0) &&
               (*(short *)(lVar7 + (ulonglong)(uVar15 & 0x1ff) * 2) != -1)) goto LAB_14cd2f7c0;
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < (int)uVar17);
        }
      } while (uVar15 != uVar17);
    }
    UDynamicMeshComponent::FastNotifyVertexAttributesUpdated
              ((this->DynamicMeshComponent).field0_0x0.DebugPtr,VertexColors);
    plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*plVar9 + 0x368))(plVar9);
    EndChange(this);
  }
  return;
}

// SyncMeshWithColorBuffer @ 14cd2fae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UMeshVertexPaintTool::SyncMeshWithColorBuffer(UMeshVertexPaintTool *this,FDynamicMesh3 *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FDynamicMeshAttributeSet *pFVar4;
  TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *pTVar5;
  longlong lVar6;
  UVertexPaintBasicProperties *pUVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong lVar23;
  bool bVar24;
  TVector4<float>_u_0 local_78;
  TVector4<float>_u_0 local_68 [2];
  
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId983,"MeshVPaint_SyncMeshWithColorBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
               ,0x3d7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId983);
  }
  pFVar4 = (param_1->AttributeSet).Ptr;
  iVar2 = (this->ROIElementBuffer).ArrayNum;
  iVar17 = 0;
  if (((pFVar4 != (FDynamicMeshAttributeSet *)0x0) &&
      (pTVar5 = (pFVar4->ColorLayer).Ptr, iVar17 = 0,
      pTVar5 != (TDynamicMeshVectorOverlay<float,4,UE::Math::TVector4<float>_> *)0x0)) &&
     (uVar18 = 0, iVar17 = 0, 0 < iVar2)) {
    lVar21 = 0;
    lVar23 = 0;
    do {
      uVar11 = 0;
      if ((int)uVar18 < (this->ROIElementBuffer).ArrayNum) {
        uVar11 = ~uVar18 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      lVar6 = *(longlong *)&pTVar5->field_0x48;
      uVar3 = *(uint *)((this->ROIElementBuffer).AllocatorInstance.Data + lVar21 * 4);
      uVar11 = uVar3 * 4;
      uVar22 = (ulonglong)((uVar3 & 0x3fffffff) >> 7);
      uVar19 = (ulonglong)(uVar11 + 1 & 0x1ff);
      uVar13 = (ulonglong)((uVar3 & 0x3fffffff) >> 7);
      local_78._s_0.Y = (float)*(undefined4 *)(*(longlong *)(lVar6 + uVar13 * 8) + uVar19 * 4);
      local_78._s_0.X =
           (float)*(undefined4 *)
                   (*(longlong *)(lVar6 + uVar22 * 8) + (ulonglong)(uVar11 & 0x1ff) * 4);
      uVar16 = (ulonglong)(uVar11 + 3 & 0x1ff);
      uVar14 = (ulonglong)((uVar3 & 0x3fffffff) >> 7);
      uVar20 = (ulonglong)(uVar11 + 2 & 0x1ff);
      uVar15 = (ulonglong)((uVar3 & 0x3fffffff) >> 7);
      local_78._s_0.W = (float)*(undefined4 *)(*(longlong *)(lVar6 + uVar15 * 8) + uVar16 * 4);
      local_78._s_0.Z = (float)*(undefined4 *)(*(longlong *)(lVar6 + uVar14 * 8) + uVar20 * 4);
      uVar12 = 0;
      if ((int)uVar18 < (this->ROIColorBuffer).ArrayNum) {
        uVar12 = ~uVar18 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      pFVar1 = (this->ROIColorBuffer).AllocatorInstance.Data + lVar23;
      local_68[0]._0_8_ = *(undefined8 *)pFVar1;
      local_68[0]._8_8_ = *(undefined8 *)(pFVar1 + 8);
      pUVar7 = (this->BasicProperties).field0_0x0.DebugPtr;
      if ((pUVar7->ChannelFilter).bRed == false) {
        local_68[0]._s_0.Y = (undefined4)((ulonglong)local_68[0]._0_8_ >> 0x20);
        local_68[0]._s_0.X = local_78._s_0.X;
      }
      if ((pUVar7->ChannelFilter).bGreen == false) {
        local_68[0]._s_0.Y = local_78._s_0.Y;
      }
      if ((pUVar7->ChannelFilter).bBlue == false) {
        local_68[0]._s_0.W = (undefined4)((ulonglong)local_68[0]._8_8_ >> 0x20);
        local_68[0]._s_0.Z = local_78._s_0.Z;
      }
      if ((pUVar7->ChannelFilter).bAlpha == false) {
        local_68[0]._s_0.W = local_78._s_0.W;
      }
      TIndexedValuesChangeBuilder<UE::Math::TVector4<float>,FMeshVertexColorPaintChange>::
      UpdateValue((this->ActiveChangeBuilder).Ptr,uVar3,(TVector4<float> *)&local_78._s_0,
                  (TVector4<float> *)&local_68[0]._s_0);
      uVar18 = uVar18 + 1;
      lVar21 = lVar21 + 1;
      lVar23 = lVar23 + 0x10;
      *(undefined4 *)
       (*(longlong *)(*(longlong *)&pTVar5->field_0x48 + uVar22 * 8) +
       (ulonglong)(uVar11 & 0x1ff) * 4) = local_68[0]._s_0.X;
      *(undefined4 *)(*(longlong *)(*(longlong *)&pTVar5->field_0x48 + uVar13 * 8) + uVar19 * 4) =
           local_68[0]._s_0.Y;
      *(undefined4 *)(*(longlong *)(*(longlong *)&pTVar5->field_0x48 + uVar14 * 8) + uVar20 * 4) =
           local_68[0]._s_0.Z;
      *(undefined4 *)(*(longlong *)(*(longlong *)&pTVar5->field_0x48 + uVar15 * 8) + uVar16 * 4) =
           local_68[0]._s_0.W;
      iVar17 = iVar2;
    } while (lVar21 < iVar2);
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return 0 < iVar17;
}

// TryToInitializeSymmetry @ 14cd30c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UMeshVertexPaintTool::TryToInitializeSymmetry(UMeshVertexPaintTool *this)

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
  
  pFVar13 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))();
  UE::Geometry::FDynamicMesh3::GetBounds(pFVar13,local_80,true);
  dVar10 = __real_3ff0000000000000;
  dVar3 = (double)this->_padding_;
  dVar4 = (double)this->_padding_;
  dVar7 = dVar3 + dVar3;
  dVar16 = dVar4 + dVar4;
  local_1a8.Data = (FScriptContainerElement *)0x0;
  local_1a0 = 0;
  dVar4 = __real_3ff0000000000000 - (dVar7 * dVar3 + dVar16 * dVar4);
  dVar9 = (double)this->_padding_ * dVar7 - (double)this->_padding_ * dVar16;
  dVar3 = (double)this->_padding_ * dVar7 + (double)this->_padding_ * dVar16;
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
  dVar3 = (double)this->_padding_;
  dVar4 = (double)this->_padding_;
  dVar7 = (double)this->_padding_;
  dVar16 = dVar4 + dVar4;
  local_198 = (dVar7 + dVar7) * dVar3 - (double)this->_padding_ * dVar16;
  local_188 = dVar7 * dVar16 + (double)this->_padding_ * (dVar3 + dVar3);
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
  pFVar13 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))(this);
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

// UpdateActiveGroupLayer @ 14cd32160

void __thiscall UMeshVertexPaintTool::UpdateActiveGroupLayer(UMeshVertexPaintTool *this)

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
    pFVar5 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))(this);
    pTVar7 = UE::Geometry::FindPolygroupLayerByName(pFVar5,FVar2);
    if (pTVar7 == (TDynamicMeshScalarTriangleAttribute<int> *)0x0) {
      `UMeshVertexPaintTool::UpdateActiveGroupLayer'::__l7::<lambda_1>::operator()(local_res8);
    }
    pFVar5 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))(this);
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
    pFVar5 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))();
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
  UDynamicMeshComponent::FastNotifyVertexAttributesUpdated
            ((this->DynamicMeshComponent).field0_0x0.DebugPtr,VertexColors);
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
                    /* WARNING: Could not recover jumptable at 0x00014cd3228b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar8 + 0x368))(plVar8,*(code **)(*plVar8 + 0x368));
  return;
}

// UpdateBrushPosition @ 14cd33830

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
UMeshVertexPaintTool::UpdateBrushPosition(UMeshVertexPaintTool *this,TRay<double> *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(**(code **)(this->_padding_ + 0x478))();
  cVar2 = (**(code **)(*(longlong *)*puVar6 + 0x30))();
  if ((cVar2 != '\0') && (cVar2 != '\x01')) {
    if (cVar2 != '\x02') {
      return false;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
                       ,0x53c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  cVar2 = (**(code **)(this->_padding_ + 0x540))(this,param_1,0);
  if (cVar2 != '\0') {
    cVar5 = (**(code **)(*(longlong *)*puVar6 + 0x48))();
    if (cVar5 != '\0') {
      UMeshSculptToolBase::AlignBrushToView((UMeshSculptToolBase *)this);
    }
  }
  return (bool)cVar2;
}

// UpdateBrushType @ 14cd33f30

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
UMeshVertexPaintTool::UpdateBrushType(UMeshVertexPaintTool *this,EMeshVertexPaintBrushType param_1)

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
                (&BaseMessage,L"UMeshVertexPaintTool",L"OnStartTool",
                 L"Hold Shift to Erase. [/] and S/D change Size (+Shift to small-step). Shift+G to pick Paint Color, +Ctrl for Erase Color."
                );
      atexit(`UMeshVertexPaintTool::UpdateBrushType'::__l2::
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
  (**(code **)(this->_padding_ + 0x338))(this,this->_padding_,0);
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
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

// UpdateROI @ 14cd36f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cd37204) */
/* WARNING: Removing unreachable block (ram,0x00014cd37218) */
/* WARNING: Removing unreachable block (ram,0x00014cd3721c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UMeshVertexPaintTool::UpdateROI(UMeshVertexPaintTool *this,FSculptBrushStamp *param_1)

{
  int *piVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  undefined8 uVar5;
  EMeshVertexPaintBrushAreaType EVar6;
  EMeshVertexPaintInteractionType EVar7;
  code *pcVar8;
  UVertexPaintBrushFilterProperties *pUVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar16;
  byte bVar17;
  longlong *plVar18;
  char cVar19;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  int iVar24;
  ulonglong uVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  uint *puVar28;
  uint uVar29;
  TFrame3<double> *pTVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  TBitArray<FDefaultBitArrayAllocator> *pTVar34;
  bool bVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStackY_648 [32];
  char local_5f8;
  char local_5f7;
  undefined1 local_5f6;
  undefined1 local_5f5;
  undefined1 local_5f4;
  undefined1 local_5f3;
  undefined1 local_5f2;
  undefined1 local_5f1;
  undefined1 local_5f0;
  undefined1 local_5ef [3];
  uint local_5ec;
  FDynamicMesh3 *local_5e8;
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined8 local_5d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_5d0;
  undefined8 uStack_5c8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_5c0;
  uint uStack_5b8;
  int iStack_5b4;
  int iStack_5b0;
  undefined4 uStack_5ac;
  int local_5a8;
  undefined4 uStack_5a4;
  float local_5a0 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_598;
  undefined8 local_588;
  undefined4 local_580 [2];
  undefined8 local_578;
  undefined4 local_570 [2];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_568;
  TArray<int,TSizedDefaultAllocator<32>_> local_548;
  TArray<int,TSizedDefaultAllocator<32>_> local_538;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_528;
  int local_508;
  int local_504;
  int local_500;
  int local_4fc;
  int local_4f8;
  int local_4f4;
  int local_4f0;
  int local_4ec;
  int local_4e8;
  int local_4e4;
  int local_4e0;
  double local_4d8;
  UMeshVertexPaintTool *local_4d0;
  int local_4c8;
  int local_4c4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_4c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4b8;
  undefined8 uStack_498;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_490;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_488;
  undefined8 uStack_468;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_460;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_458;
  undefined8 uStack_438;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_430;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_428;
  undefined8 uStack_408;
  undefined1 *local_400;
  double *pdStack_3f8;
  UMeshVertexPaintTool *local_3f0;
  double *pdStack_3e8;
  FDynamicMesh3 **local_3e0;
  undefined1 *puStack_3d8;
  undefined1 *local_3d0;
  code *local_3c8;
  UMeshVertexPaintTool **local_3c0;
  code *local_3b8;
  char **local_3b0;
  code *local_3a8;
  char **local_3a0;
  char *local_398;
  UMeshVertexPaintTool *local_390;
  FDynamicMesh3 **local_388;
  TFrame3<double> *local_380;
  float *local_378;
  TVector<double>_u_0 local_370;
  double local_358;
  double local_350;
  double local_348;
  char *local_340;
  UMeshVertexPaintTool *local_338;
  FDynamicMesh3 **local_330;
  TFrame3<double> *local_328;
  float *local_320;
  undefined1 **local_318;
  undefined1 local_310 [8];
  double local_308;
  double dStack_300;
  undefined8 local_2f8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_2f0;
  UMeshVertexPaintTool *local_298;
  char local_290;
  undefined1 *local_288;
  double *pdStack_280;
  UMeshVertexPaintTool *local_278;
  double *pdStack_270;
  FDynamicMesh3 **local_268;
  undefined1 *puStack_260;
  undefined1 *local_258;
  FDynamicMesh3 *local_250;
  UMeshVertexPaintTool *local_248;
  char local_240;
  undefined1 *local_238;
  double *pdStack_230;
  UMeshVertexPaintTool *local_228;
  double *pdStack_220;
  FDynamicMesh3 **local_218;
  undefined1 *puStack_210;
  undefined1 *local_208;
  FDynamicMesh3 *local_200;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_1f8;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double local_190;
  double dStack_188;
  double local_180;
  undefined4 local_15c;
  undefined4 local_13c;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8 [2];
  code *local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  undefined1 local_a8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_648;
  bVar35 = CpuChannel->Enabled < 0;
  if (bVar35) {
    local_5f7 = '\0';
  }
  else {
    local_5f7 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId653,"MeshVPaint_UpdateROI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
               ,0x28d);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId653);
  }
  cVar19 = !bVar35;
  pTVar30 = &param_1->LocalFrame;
  local_5e8 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))(this);
  pcVar8 = *(code **)(this->_padding_ + 0x4a0);
  dVar36 = (double)(**(code **)(this->_padding_ + 0x4a0))(this);
  dVar37 = (double)(*pcVar8)(this);
  uVar14 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar12 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_1a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_1a0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_5a0[0] = (float)(dVar36 * dVar37);
  dVar38 = (double)(**(code **)(this->_padding_ + 0x4a0))(this);
  uVar15 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar13 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  uVar11 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_198 = (double)uVar14;
  dVar36 = (param_1->LocalFrame).Origin.field0_0x0._s_0.Y;
  dVar37 = (pTVar30->Origin).field0_0x0._s_0.X;
  local_190 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_188 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  dVar4 = (param_1->LocalFrame).Origin.field0_0x0._s_0.Z;
  dVar39 = (double)(**(code **)(this->_padding_ + 0x4a0))(this);
  local_180 = (double)uVar15;
  local_370._s_0.X = (pTVar30->Origin).field0_0x0._s_0.X - (double)uVar11 * dVar39;
  local_370._s_0.Z = (param_1->LocalFrame).Origin.field0_0x0._s_0.Z - (double)uVar15 * dVar39;
  local_370._s_0.Y = (param_1->LocalFrame).Origin.field0_0x0._s_0.Y - (double)uVar13 * dVar39;
  local_358 = (double)uVar5 * dVar38 + dVar37;
  local_350 = (double)uVar12 * dVar38 + dVar36;
  local_348 = (double)uVar14 * dVar38 + dVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->TriangleROI);
  uVar11 = local_b8;
  uVar5 = uStack_d0;
  if ((((this->FilterProperties).field0_0x0.DebugPtr)->bIsolateGeometrySelection == false) ||
     (*(int *)&(this->SelectionTids).Elements.field_0x8 ==
      *(int *)&(this->SelectionTids).Elements.field_0x34)) {
    local_5f8 = '\0';
  }
  else {
    local_5f8 = '\x01';
  }
  local_5ec = (uint)this->_padding_;
  if ((this->bApplySymmetry != false) || (0.0 < *(float *)(this->_padding_ + 0xe8))) {
    local_e8[0] = __real_7fefffffffffffff;
    local_d8 = (code *)0x0;
    local_a8 = 0;
    if (local_5f8 != '\0') {
      local_d8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshVertexPaintTool::UpdateROI'::__l8::<lambda_1>,bool,int>::
                 Call;
      uStack_d0 = uStack_110;
      local_b8 = local_f8;
      plStack_b0 = (longlong *)0x0;
      local_c8 = 0x52979020;
      uStack_c4 = 1;
      uStack_c0 = this;
      local_118 = 0;
      uStack_110 = uVar5;
      local_f8 = uVar11;
      uStack_f0 = 0;
    }
    plStack_b0 = (longlong *)0x0;
    local_5ec = (**(code **)((this->AABBTree)._padding_ + 0x20))
                          (&this->AABBTree,pTVar30,local_310,local_e8);
    if (local_d8 != (code *)0x0) {
      plVar18 = (longlong *)&local_c8;
      if (plStack_b0 != (longlong *)0x0) {
        plVar18 = plStack_b0;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  if (((-1 < (int)local_5ec) &&
      ((int)local_5ec <
       (int)((local_5e8->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (local_5e8->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
     ((ushort)(*(short *)(*(longlong *)
                           ((local_5e8->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                           (ulonglong)(local_5ec >> 9) * 8) + (ulonglong)(local_5ec & 0x1ff) * 2) -
              1U) < 0xfffe)) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->TriangleROI,&local_508,(bool *)&local_5ec);
  }
  if ((((int)local_5ec < 0) ||
      ((int)((local_5e8->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (local_5e8->TriangleRefCounts).RefCounts.CurBlockUsed) <= (int)local_5ec)) ||
     (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((local_5e8->TriangleRefCounts).RefCounts.Blocks.
                                     AllocatorInstance.Data + (ulonglong)(local_5ec >> 9) * 8) +
                                  (ulonglong)(local_5ec & 0x1ff) * 2) - 1U))) {
    uVar40 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
    uVar41 = (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20)
    ;
    local_308 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dStack_300 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  }
  else {
    lVar33 = (longlong)(int)local_5ec;
    uVar23 = 0;
    if ((int)local_5ec < (this->TriNormals).ArrayNum) {
      uVar23 = ~local_5ec >> 0x1f;
    }
    if (uVar23 == 0) {
      bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar35) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar22 = (this->TriNormals).AllocatorInstance.Data;
    pFVar3 = pFVar22 + lVar33 * 0x18;
    uVar5 = *(undefined8 *)(pFVar22 + lVar33 * 0x18 + 0x10);
    uVar40 = (undefined4)uVar5;
    uVar41 = (undefined4)((ulonglong)uVar5 >> 0x20);
    local_308 = *(double *)pFVar3;
    dStack_300 = *(double *)(pFVar3 + 8);
  }
  uVar23 = local_5ec;
  pUVar9 = (this->FilterProperties).field0_0x0.DebugPtr;
  local_2f8 = CONCAT44(uVar41,uVar40);
  EVar6 = pUVar9->BrushAreaMode;
  if ((EVar6 == Volumetric) ||
     (__real_43340000 < pUVar9->AngleThreshold || __real_43340000 == pUVar9->AngleThreshold)) {
    local_5f6 = 0;
  }
  else {
    local_5f6 = 1;
  }
  local_4d8 = cos((double)pUVar9->AngleThreshold * __real_3f91df46a2529d39);
  local_5f5 = pUVar9->bUVSeams;
  local_5f4 = pUVar9->bNormalSeams;
  local_400 = &local_5f6;
  pdStack_3f8 = &local_308;
  pdStack_3e8 = &local_4d8;
  local_3e0 = &local_5e8;
  puStack_3d8 = &local_5f5;
  local_3d0 = &local_5f4;
  local_3f0 = this;
  if (EVar6 == Volumetric) {
    local_398 = &local_5f8;
    local_388 = &local_5e8;
    local_378 = local_5a0;
    local_3a0 = &local_398;
    local_3a8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshVertexPaintTool::UpdateROI'::__l14::<lambda_3>,void,int>::
                Call;
    local_390 = this;
    local_380 = pTVar30;
    UE::Geometry::FSparseDynamicOctree3::RangeQuery
              ((FSparseDynamicOctree3 *)&this->Octree,(TAxisAlignedBox3<double> *)&local_370._s_0,
               (TFunctionRef<void___cdecl(int)> *)&local_3a8);
  }
  else {
    bVar35 = UE::Geometry::FDynamicMesh3::IsTriangle(local_5e8,uVar23);
    if (bVar35) {
      local_598.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_598.ArrayNum = 0;
      local_598.ArrayMax = 0;
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_598.AllocatorInstance,&local_598.ArrayMax);
      local_598.ArrayNum = iVar21 + 1;
      *(uint *)(local_598.AllocatorInstance.Data + (longlong)iVar21 * 4) = local_5ec;
      local_340 = &local_5f8;
      local_330 = &local_5e8;
      local_320 = local_5a0;
      local_318 = &local_400;
      local_3b0 = &local_340;
      local_3b8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMeshVertexPaintTool::UpdateROI'::__l19::<lambda_4>,bool,int,int>
                  ::Call;
      local_338 = this;
      local_328 = pTVar30;
      UE::Geometry::FMeshConnectedComponents::GrowToConnectedTriangles
                (local_5e8,&local_598,&this->TriangleROI,&this->TempROIBuffer,
                 (TFunctionRef<bool___cdecl(int,int)> *)&local_3b8);
      if (local_598.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_598.AllocatorInstance.Data);
      }
    }
  }
  local_290 = local_5f8;
  local_288 = local_400;
  pdStack_280 = pdStack_3f8;
  local_278 = local_3f0;
  pdStack_270 = pdStack_3e8;
  local_268 = local_3e0;
  puStack_260 = puStack_3d8;
  local_238 = local_400;
  pdStack_230 = pdStack_3f8;
  local_228 = local_3f0;
  pdStack_220 = pdStack_3e8;
  local_218 = local_3e0;
  puStack_210 = puStack_3d8;
  local_258 = local_3d0;
  local_250 = local_5e8;
  local_240 = local_5f8;
  local_208 = local_3d0;
  local_200 = local_5e8;
  local_5d8 = 1;
  local_298 = this;
  local_248 = this;
  if (this->bApplySymmetry != false) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->TempVertexSet);
    pTVar34 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->TriangleROI).Elements.field_0x10;
    local_528._padding_._0_4_ = 0;
    local_5d0 = &this->TriangleROI;
    local_528._padding_._4_4_ = 1;
    local_528.UnvisitedBitMask = 0xffffffff;
    local_528.CurrentBitIndex = 0;
    local_528.BaseBitIndex = 0;
    local_528.Array = pTVar34;
    if (*(int *)&(this->TriangleROI).Elements.field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_528);
    }
    uStack_5c8 = CONCAT44(local_528._padding_._4_4_,(undefined4)local_528._padding_);
    local_5a8 = *(int *)&(this->TriangleROI).Elements.field_0x8 -
                *(int *)&(this->TriangleROI).Elements.field_0x34;
    iStack_5b4 = local_528.CurrentBitIndex;
    uStack_5b8 = local_528.UnvisitedBitMask;
    uStack_5ac = local_528._28_4_;
    iStack_5b0 = local_528.BaseBitIndex;
    pTStack_5c0 = local_528.Array;
    uVar23 = *(uint *)&(this->TriangleROI).Elements.field_0x28;
    local_568._padding_._0_4_ = (int)uVar23 >> 5;
    bVar17 = (byte)uVar23 & 0x1f;
    local_568._padding_._4_4_ = 1 << bVar17;
    local_568.UnvisitedBitMask = -1 << bVar17;
    local_568.BaseBitIndex = uVar23 & 0xffffffe0;
    uStack_498 = CONCAT44(uStack_5a4,local_5a8);
    TStack_4b8.Array = local_528.Array;
    local_568.Array = pTVar34;
    local_568.CurrentBitIndex = uVar23;
    local_4c0 = local_5d0;
    TStack_4b8._padding_ = uStack_5c8;
    TStack_4b8._16_8_ = _uStack_5b8;
    TStack_4b8._24_8_ = _iStack_5b0;
    if ((int)uVar23 < 0) {
      bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar35) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if (uVar23 != *(uint *)&(this->TriangleROI).Elements.field_0x28) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_568);
      pTVar34 = local_568.Array;
      uVar23 = local_568.CurrentBitIndex;
    }
    while( true ) {
      pTVar2 = local_4c0;
      if (*(int *)&(local_4c0->Elements).field_0x8 - *(int *)&(local_4c0->Elements).field_0x34 !=
          (int)uStack_498) {
        local_5f3 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5f3);
      }
      if (((TStack_4b8.CurrentBitIndex == uVar23) && (TStack_4b8.Array == pTVar34)) &&
         (pTVar2 == &this->TriangleROI)) break;
      uVar32 = *(uint *)(*(longlong *)&pTVar2->Elements + (longlong)TStack_4b8.CurrentBitIndex * 0xc
                        );
      uVar25 = (ulonglong)(uVar32 & 0x1ff);
      lVar33 = *(longlong *)
                ((local_5e8->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar32 >> 9) * 8
                );
      local_588 = *(undefined8 *)(lVar33 + uVar25 * 0xc);
      local_580[0] = *(undefined4 *)(lVar33 + 8 + uVar25 * 0xc);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->TempVertexSet,&local_504,(bool *)&local_588);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->TempVertexSet,&local_500,(bool *)((longlong)&local_588 + 4));
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&this->TempVertexSet,&local_4fc,(bool *)local_580);
      TStack_4b8.UnvisitedBitMask = TStack_4b8.UnvisitedBitMask & ~TStack_4b8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4b8);
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->VertexROI,0,No);
    local_2f0.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_2f0.Elements._48_8_ = _UNK_150631d98;
    local_2f0.Elements._0_8_ = 0;
    local_2f0.Elements._8_8_ = 0;
    local_2f0.Elements._32_8_ = 0;
    local_2f0.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_2f0.HashSize = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&local_2f0,&this->TempVertexSet);
    BufferUtil::AppendElements<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              (&this->VertexROI,&local_2f0);
    pTVar20 = &this->SymmetricVertexROI;
    (this->SymmetricVertexROI).ArrayNum = 0;
    if ((this->SymmetricVertexROI).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&pTVar20->AllocatorInstance,0,&(this->SymmetricVertexROI).ArrayMax);
    }
    UE::Geometry::FMeshPlanarSymmetry::GetMirrorVertexROI
              ((this->Symmetry).Ptr,&this->VertexROI,pTVar20,true);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->SymmetricTriangleROI);
    pFVar22 = (pTVar20->AllocatorInstance).Data;
    iVar21 = (this->SymmetricVertexROI).ArrayNum;
    pFVar3 = pFVar22 + (longlong)iVar21 * 4;
    while( true ) {
      if ((this->SymmetricVertexROI).ArrayNum != iVar21) {
        local_5f2 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_5f2);
      }
      if (pFVar22 == pFVar3) break;
      uVar23 = *(uint *)pFVar22;
      if (((-1 < (int)uVar23) &&
          ((int)uVar23 <
           (int)((local_5e8->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (local_5e8->VertexRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((local_5e8->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                               + (ulonglong)(uVar23 >> 9) * 8) + (ulonglong)(uVar23 & 0x1ff) * 2) -
                  1U) < 0xfffe)) {
        local_3c0 = &local_4d0;
        local_3c8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UMeshVertexPaintTool::UpdateROI'::__l33::<lambda_8>,void,int>
                    ::Call;
        local_4d0 = this;
        UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
                  (local_5e8,uVar23,(TFunctionRef<void___cdecl(int)> *)&local_3c8);
      }
      pFVar22 = pFVar22 + 4;
    }
    EVar7 = ((this->BasicProperties).field0_0x0.DebugPtr)->SubToolType;
    if (EVar7 == Fill) {
      `UMeshVertexPaintTool::UpdateROI'::__l2::<lambda_5>::operator()
                (&local_298,&this->SymmetricTriangleROI);
    }
    else if (EVar7 == GroupFill) {
      `UMeshVertexPaintTool::UpdateROI'::__l2::<lambda_6>::operator()
                (&local_248,&this->SymmetricTriangleROI);
    }
    cVar19 = local_5f7;
    if (((this->FilterProperties).field0_0x0.DebugPtr)->VisibilityFilter != None) {
      local_548.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_548.ArrayNum = 0;
      local_548.ArrayMax = 0;
      ApplyVisibilityFilter(this,&this->SymmetricTriangleROI,&this->TempROIBuffer,&local_548);
      if (local_548.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_548.AllocatorInstance.Data);
      }
    }
    uVar23 = *(int *)&(this->SymmetricTriangleROI).Elements.field_0x8 -
             *(int *)&(this->SymmetricTriangleROI).Elements.field_0x34;
    if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
    }
    piVar1 = &(this->SymmetricROITriangleBuffer).ArrayMax;
    if (*piVar1 < (int)uVar23) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar23,&(this->SymmetricROITriangleBuffer).AllocatorInstance,
                 (this->SymmetricROITriangleBuffer).ArrayNum,piVar1);
    }
    TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->SymmetricROITriangleBuffer,0,No);
    uVar23 = (uint)local_5d8;
    pTStack_5c0 = (TBitArray<FDefaultBitArrayAllocator> *)
                  &(this->SymmetricTriangleROI).Elements.field_0x10;
    iVar21 = *(int *)&(this->SymmetricTriangleROI).Elements.field_0x28;
    local_5d0 = &this->SymmetricTriangleROI;
    iVar24 = 0;
    iStack_5b0 = 0;
    iStack_5b4 = 0;
    if (iVar21 != 0) {
      puVar28 = *(uint **)&(this->SymmetricTriangleROI).Elements.field_0x20;
      if (puVar28 == (uint *)0x0) {
        puVar28 = (uint *)pTStack_5c0;
      }
      uVar32 = *puVar28;
      while (uVar32 == 0) {
        lVar33 = (longlong)iVar24;
        iStack_5b0 = iStack_5b0 + 0x20;
        iVar24 = iVar24 + 1;
        iStack_5b4 = iVar21;
        if ((int)(iVar21 + -1 + (iVar21 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_14cd37b10;
        uVar32 = puVar28[lVar33 + 1];
      }
      uVar23 = -uVar32 & uVar32;
      uVar25 = (ulonglong)uVar23 * 2 + 1;
      lVar33 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      local_4f8 = (int)lVar33;
      iStack_5b4 = local_4f8 + -1 + iStack_5b0;
      if (iVar21 < iStack_5b4) {
        iStack_5b4 = iVar21;
      }
    }
LAB_14cd37b10:
    local_5a8 = *(int *)&(this->SymmetricTriangleROI).Elements.field_0x8 -
                *(int *)&(this->SymmetricTriangleROI).Elements.field_0x34;
    uVar32 = *(uint *)&(this->SymmetricTriangleROI).Elements.field_0x28;
    uStack_5b8 = 0xffffffff;
    uStack_5c8 = CONCAT44(uVar23,iVar24);
    uVar23 = uVar32 & 0xffffffe0;
    uStack_5ac = local_13c;
    TStack_488._padding_ = uStack_5c8;
    iVar21 = (int)uVar32 >> 5;
    uStack_468 = CONCAT44(uStack_5a4,local_5a8);
    TStack_488.UnvisitedBitMask = 0xffffffff;
    TStack_488.CurrentBitIndex = iStack_5b4;
    TStack_488.BaseBitIndex = iStack_5b0;
    TStack_488._28_4_ = local_13c;
    local_490 = local_5d0;
    TStack_488.Array = pTStack_5c0;
    if ((int)uVar32 < 0) {
      bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L"");
      if (bVar35) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    uVar29 = *(uint *)&(this->SymmetricTriangleROI).Elements.field_0x28;
    if (uVar32 != uVar29) {
      puVar10 = *(undefined1 **)&(this->SymmetricTriangleROI).Elements.field_0x20;
      puVar26 = &(this->SymmetricTriangleROI).Elements.field_0x10;
      if (puVar10 != (undefined1 *)0x0) {
        puVar26 = puVar10;
      }
      uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar21 * 4);
      while (uVar32 == 0) {
        lVar33 = (longlong)iVar21;
        uVar23 = uVar23 + 0x20;
        iVar21 = iVar21 + 1;
        uVar32 = uVar29;
        if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
        goto LAB_14cd37c35;
        uVar32 = *(uint *)(puVar26 + lVar33 * 4 + 4);
      }
      uVar25 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
      lVar33 = 0x3f;
      if (uVar25 != 0) {
        for (; uVar25 >> lVar33 == 0; lVar33 = lVar33 + -1) {
        }
      }
      local_4c8 = (int)lVar33;
      uVar32 = local_4c8 + -1 + uVar23;
      if ((int)uVar29 < (int)uVar32) {
        uVar32 = uVar29;
      }
    }
LAB_14cd37c35:
    pTVar20 = &this->SymmetricROITriangleBuffer;
    while( true ) {
      pTVar2 = local_490;
      if (*(int *)&(local_490->Elements).field_0x8 - *(int *)&(local_490->Elements).field_0x34 !=
          (int)uStack_468) {
        local_5f1 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5f1);
      }
      if (((TStack_488.CurrentBitIndex == uVar32) &&
          (TStack_488.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->SymmetricTriangleROI).Elements.field_0x10
          )) && (pTVar2 == &this->SymmetricTriangleROI)) break;
      local_5e0 = *(undefined4 *)
                   (*(longlong *)&pTVar2->Elements + (longlong)TStack_488.CurrentBitIndex * 0xc);
      pFVar3 = (pTVar20->AllocatorInstance).Data;
      if ((pFVar3 <= (FScriptContainerElement *)&local_5e0) &&
         ((FScriptContainerElement *)&local_5e0 <
          pFVar3 + (longlong)(this->SymmetricROITriangleBuffer).ArrayMax * 4)) {
        bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar35) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar21 = (this->SymmetricROITriangleBuffer).ArrayNum;
      if (iVar21 == (this->SymmetricROITriangleBuffer).ArrayMax) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar20->AllocatorInstance,
                            &(this->SymmetricROITriangleBuffer).ArrayMax);
      }
      (this->SymmetricROITriangleBuffer).ArrayNum = iVar21 + 1;
      *(undefined4 *)((pTVar20->AllocatorInstance).Data + (longlong)iVar21 * 4) = local_5e0;
      TStack_488.UnvisitedBitMask = TStack_488.UnvisitedBitMask & ~TStack_488._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_488);
    }
  }
  iVar21 = 0;
  uVar23 = (uint)local_5d8;
  EVar7 = ((this->BasicProperties).field0_0x0.DebugPtr)->SubToolType;
  if (EVar7 == Fill) {
    `UMeshVertexPaintTool::UpdateROI'::__l2::<lambda_5>::operator()(&local_298,&this->TriangleROI);
  }
  else if (EVar7 == GroupFill) {
    `UMeshVertexPaintTool::UpdateROI'::__l2::<lambda_6>::operator()(&local_248,&this->TriangleROI);
  }
  if (((this->FilterProperties).field0_0x0.DebugPtr)->VisibilityFilter != None) {
    local_538.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_538.ArrayNum = 0;
    local_538.ArrayMax = 0;
    ApplyVisibilityFilter(this,&this->TriangleROI,&this->TempROIBuffer,&local_538);
    if (local_538.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_538.AllocatorInstance.Data);
    }
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->TempVertexSet);
  pTStack_5c0 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->TriangleROI).Elements.field_0x10;
  iVar24 = *(int *)&(this->TriangleROI).Elements.field_0x28;
  iStack_5b0 = 0;
  iStack_5b4 = iStack_5b0;
  if (iVar24 != 0) {
    puVar28 = *(uint **)&(this->TriangleROI).Elements.field_0x20;
    if (puVar28 == (uint *)0x0) {
      puVar28 = (uint *)pTStack_5c0;
    }
    uVar32 = *puVar28;
    iStack_5b0 = iVar21;
    while (uVar32 == 0) {
      lVar33 = (longlong)iVar21;
      iStack_5b0 = iStack_5b0 + 0x20;
      iVar21 = iVar21 + 1;
      iStack_5b4 = iVar24;
      if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14cd37e71;
      uVar32 = puVar28[lVar33 + 1];
    }
    uVar23 = -uVar32 & uVar32;
    uVar25 = (ulonglong)uVar23 * 2 + 1;
    lVar33 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_4e0 = (int)lVar33;
    iStack_5b4 = iStack_5b0 + -1 + local_4e0;
    if (iVar24 < iStack_5b4) {
      iStack_5b4 = iVar24;
    }
  }
LAB_14cd37e71:
  local_5d0 = &this->TriangleROI;
  local_5a8 = *(int *)&(this->TriangleROI).Elements.field_0x8 -
              *(int *)&(this->TriangleROI).Elements.field_0x34;
  uStack_5b8 = 0xffffffff;
  uVar32 = *(uint *)&(this->TriangleROI).Elements.field_0x28;
  uStack_5c8 = CONCAT44(uVar23,iVar21);
  uStack_5ac = local_11c;
  uVar23 = uVar32 & 0xffffffe0;
  TStack_458._padding_ = uStack_5c8;
  iVar21 = (int)uVar32 >> 5;
  uStack_438 = CONCAT44(uStack_5a4,local_5a8);
  TStack_458.UnvisitedBitMask = 0xffffffff;
  TStack_458.CurrentBitIndex = iStack_5b4;
  TStack_458.BaseBitIndex = iStack_5b0;
  TStack_458._28_4_ = local_11c;
  local_460 = local_5d0;
  TStack_458.Array = pTStack_5c0;
  if ((int)uVar32 < 0) {
    bVar35 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar35) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar29 = *(uint *)&(this->TriangleROI).Elements.field_0x28;
  if (uVar32 != uVar29) {
    puVar10 = *(undefined1 **)&(this->TriangleROI).Elements.field_0x20;
    puVar26 = &(this->TriangleROI).Elements.field_0x10;
    if (puVar10 != (undefined1 *)0x0) {
      puVar26 = puVar10;
    }
    uVar32 = -1 << ((byte)uVar32 & 0x1f) & *(uint *)(puVar26 + (longlong)iVar21 * 4);
    while (uVar32 == 0) {
      lVar33 = (longlong)iVar21;
      uVar23 = uVar23 + 0x20;
      iVar21 = iVar21 + 1;
      uVar32 = uVar29;
      if ((int)((uVar29 - 1) + ((int)(uVar29 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_14cd37f96;
      uVar32 = *(uint *)(puVar26 + lVar33 * 4 + 4);
    }
    uVar25 = (ulonglong)(-uVar32 & uVar32) * 2 + 1;
    lVar33 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_4c4 = (int)lVar33;
    uVar32 = local_4c4 + -1 + uVar23;
    if ((int)uVar29 < (int)uVar32) {
      uVar32 = uVar29;
    }
  }
LAB_14cd37f96:
  while( true ) {
    pTVar2 = local_460;
    if (*(int *)&(local_460->Elements).field_0x8 - *(int *)&(local_460->Elements).field_0x34 !=
        (int)uStack_438) {
      local_5f0 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_5f0);
    }
    if (((TStack_458.CurrentBitIndex == uVar32) &&
        (TStack_458.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->TriangleROI).Elements.field_0x10)) &&
       (pTVar2 == &this->TriangleROI)) break;
    uVar23 = *(uint *)(*(longlong *)&pTVar2->Elements + (longlong)TStack_458.CurrentBitIndex * 0xc);
    uVar25 = (ulonglong)(uVar23 & 0x1ff);
    lVar33 = *(longlong *)
              ((local_5e8->Triangles).Blocks.AllocatorInstance.Data + (ulonglong)(uVar23 >> 9) * 8);
    local_578 = *(undefined8 *)(lVar33 + uVar25 * 0xc);
    local_570[0] = *(undefined4 *)(lVar33 + 8 + uVar25 * 0xc);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->TempVertexSet,&local_4f4,(bool *)&local_578);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->TempVertexSet,&local_4f0,(bool *)((longlong)&local_578 + 4));
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&this->TempVertexSet,&local_4ec,(bool *)local_570);
    TStack_458.UnvisitedBitMask = TStack_458.UnvisitedBitMask & ~TStack_458._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_458);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->VertexROI,0,No);
  iVar21 = 0;
  local_1f8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_1f8.Elements._48_8_ = _UNK_150631d98;
  local_1f8.Elements._0_8_ = 0;
  local_1f8.Elements._8_8_ = 0;
  local_1f8.Elements._32_8_ = 0;
  local_1f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1f8.HashSize = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=(&local_1f8,&this->TempVertexSet);
  BufferUtil::AppendElements<int,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            (&this->VertexROI,&local_1f8);
  uVar23 = *(int *)&(this->TriangleROI).Elements.field_0x8 -
           *(int *)&(this->TriangleROI).Elements.field_0x34;
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar23);
  }
  piVar1 = &(this->ROITriangleBuffer).ArrayMax;
  if (*piVar1 < (int)uVar23) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar23,&(this->ROITriangleBuffer).AllocatorInstance,
               (this->ROITriangleBuffer).ArrayNum,piVar1);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNum(&this->ROITriangleBuffer,0,No);
  pTStack_5c0 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->TriangleROI).Elements.field_0x10;
  iVar24 = *(int *)&(this->TriangleROI).Elements.field_0x28;
  pTVar2 = &this->TriangleROI;
  iStack_5b4 = iVar21;
  iStack_5b0 = iVar21;
  if (iVar24 == 0) {
LAB_14cd381e0:
    uVar23 = (uint)local_5d8;
  }
  else {
    puVar28 = *(uint **)&(this->TriangleROI).Elements.field_0x20;
    if (puVar28 == (uint *)0x0) {
      puVar28 = (uint *)pTStack_5c0;
    }
    uVar23 = *puVar28;
    while (uVar23 == 0) {
      lVar33 = (longlong)iVar21;
      iStack_5b0 = iStack_5b0 + 0x20;
      iVar21 = iVar21 + 1;
      iStack_5b4 = iVar24;
      if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_14cd381e0;
      uVar23 = puVar28[lVar33 + 1];
    }
    uVar23 = -uVar23 & uVar23;
    uVar25 = (ulonglong)uVar23 * 2 + 1;
    lVar33 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_4e8 = (int)lVar33;
    iStack_5b4 = iStack_5b0 + -1 + local_4e8;
    if (iVar24 < iStack_5b4) {
      iStack_5b4 = iVar24;
    }
  }
  uVar32 = *(uint *)&(this->TriangleROI).Elements.field_0x28;
  puVar10 = &(this->TriangleROI).Elements.field_0x10;
  local_5a8 = *(int *)&(this->TriangleROI).Elements.field_0x8 -
              *(int *)&(this->TriangleROI).Elements.field_0x34;
  uVar31 = uVar32 & 0xffffffe0;
  uStack_5b8 = 0xffffffff;
  uVar29 = -1 << ((byte)uVar32 & 0x1f);
  uStack_5c8 = CONCAT44(uVar23,iVar21);
  uStack_5ac = local_15c;
  TStack_428._padding_ = uStack_5c8;
  iVar21 = (int)uVar32 >> 5;
  local_5d8 = CONCAT44(local_5d8._4_4_,uVar29);
  uStack_408 = CONCAT44(uStack_5a4,local_5a8);
  TStack_428.UnvisitedBitMask = 0xffffffff;
  TStack_428.CurrentBitIndex = iStack_5b4;
  TStack_428.BaseBitIndex = iStack_5b0;
  TStack_428._28_4_ = local_15c;
  local_5d0 = pTVar2;
  local_430 = pTVar2;
  TStack_428.Array = pTStack_5c0;
  if ((int)uVar32 < 0) {
    bVar35 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar35) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    uVar29 = (uint)local_5d8;
  }
  uVar23 = *(uint *)&(this->TriangleROI).Elements.field_0x28;
  if (uVar32 != uVar23) {
    puVar26 = *(undefined1 **)&(this->TriangleROI).Elements.field_0x20;
    puVar27 = puVar10;
    if (puVar26 != (undefined1 *)0x0) {
      puVar27 = puVar26;
    }
    uVar29 = uVar29 & *(uint *)(puVar27 + (longlong)iVar21 * 4);
    while (uVar29 == 0) {
      lVar33 = (longlong)iVar21;
      uVar31 = uVar31 + 0x20;
      iVar21 = iVar21 + 1;
      uVar32 = uVar23;
      if ((int)((uVar23 - 1) + ((int)(uVar23 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21)
      goto LAB_14cd38312;
      uVar29 = *(uint *)(puVar27 + lVar33 * 4 + 4);
    }
    uVar25 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
    lVar33 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar33 == 0; lVar33 = lVar33 + -1) {
      }
    }
    local_4e4 = (int)lVar33;
    uVar32 = local_4e4 + -1 + uVar31;
    if ((int)uVar23 < (int)uVar32) {
      uVar32 = uVar23;
    }
  }
LAB_14cd38312:
  pTVar20 = &this->ROITriangleBuffer;
  while( true ) {
    pTVar16 = local_430;
    if (*(int *)&(local_430->Elements).field_0x8 - *(int *)&(local_430->Elements).field_0x34 !=
        (int)uStack_408) {
      local_5ef[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5ef);
    }
    if (((TStack_428.CurrentBitIndex == uVar32) &&
        (TStack_428.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar10)) &&
       (pTVar16 == pTVar2)) break;
    local_5dc = *(undefined4 *)
                 (*(longlong *)&pTVar16->Elements + (longlong)TStack_428.CurrentBitIndex * 0xc);
    pFVar3 = (pTVar20->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_5dc) &&
       ((FScriptContainerElement *)&local_5dc <
        pFVar3 + (longlong)(this->ROITriangleBuffer).ArrayMax * 4)) {
      bVar35 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar35) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar21 = (this->ROITriangleBuffer).ArrayNum;
    if (iVar21 == (this->ROITriangleBuffer).ArrayMax) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&pTVar20->AllocatorInstance,&(this->ROITriangleBuffer).ArrayMax);
    }
    (this->ROITriangleBuffer).ArrayNum = iVar21 + 1;
    *(undefined4 *)((pTVar20->AllocatorInstance).Data + (longlong)iVar21 * 4) = local_5dc;
    TStack_428.UnvisitedBitMask = TStack_428.UnvisitedBitMask & ~TStack_428._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_428);
  }
  if (cVar19 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateSecondaryBrushType @ 14cd3a180

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
UMeshVertexPaintTool::UpdateSecondaryBrushType
          (UMeshVertexPaintTool *this,EMeshVertexPaintSecondaryActionType param_1)

{
  if (param_1 == Erase) {
    UMeshSculptToolBase::SetActiveSecondaryBrushType((UMeshSculptToolBase *)this,1);
    return;
  }
  if (param_1 == Soften) {
    UMeshSculptToolBase::SetActiveSecondaryBrushType((UMeshSculptToolBase *)this,2);
    return;
  }
  if (param_1 == Smooth) {
    UMeshSculptToolBase::SetActiveSecondaryBrushType((UMeshSculptToolBase *)this,3);
    return;
  }
  return;
}

// UpdateStampPosition @ 14cd3b650

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
UMeshVertexPaintTool::UpdateStampPosition(UMeshVertexPaintTool *this,TRay<double> *param_1)

{
  longlong *this_00;
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  char cVar10;
  bool bVar11;
  undefined1 uVar12;
  undefined8 *puVar13;
  FDateTime FVar14;
  TFrame3<double> *pTVar15;
  TVector<double>_u_0 local_b8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  TFrame3<double> local_78 [2];
  
  (**(code **)(this->_padding_ + 0x490))();
  puVar13 = (undefined8 *)(**(code **)(this->_padding_ + 0x478))(this);
  cVar10 = (**(code **)(*(longlong *)*puVar13 + 0x30))();
  if ((cVar10 == '\0') || (cVar10 == '\x01')) {
    (**(code **)(this->_padding_ + 0x540))(this,param_1,1);
  }
  else if (cVar10 == '\x02') {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\MeshVertexPaintTool.cpp"
                        ,0x36f,L"");
    if (bVar11) {
      pcVar3 = (code *)swi(3);
      uVar12 = (*pcVar3)();
      return (bool)uVar12;
    }
    (**(code **)(this->_padding_ + 0x530))(this,param_1);
  }
  cVar10 = (**(code **)(*(longlong *)*puVar13 + 0x48))();
  if (cVar10 != '\0') {
    UMeshSculptToolBase::AlignBrushToView((UMeshSculptToolBase *)this);
  }
  this_00 = &this->_padding_;
  FSculptBrushStamp::operator=((FSculptBrushStamp *)this_00,(FSculptBrushStamp *)&this->_padding_);
  FVar14 = FDateTime::Now();
  lVar2 = this->_padding_;
  dVar4 = (double)(*(longlong *)FVar14.Ticks - this->_padding_) * __real_3e7ad7f29abcaf48;
  if (__real_3ff0000000000000 <= dVar4) {
    dVar4 = __real_3ff0000000000000;
  }
  this->_padding_ = (longlong)dVar4;
  *this_00 = this->_padding_;
  this->_padding_ = this->_padding_;
  uVar7 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  lVar9 = this->_padding_;
  uVar8 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  lVar1 = this->_padding_;
  *(int *)&this->_padding_ = (int)this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar9;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar8;
  this->_padding_ = lVar1;
  lVar2 = (**(code **)(lVar2 + 0x498))(this);
  lVar1 = this->_padding_;
  this->_padding_ = lVar2;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  uVar7 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  lVar9 = this->_padding_;
  uVar8 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  lVar2 = this->_padding_;
  *(int *)&this->_padding_ = (int)this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar9;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar8;
  this->_padding_ = lVar2;
  lVar2 = (**(code **)(lVar1 + 0x4b8))(this);
  this->_padding_ = lVar2;
  if (this->bApplySymmetry != false) {
    local_b8._s_0.X = (double)this->_padding_;
    local_b8._s_0.Y = (double)this->_padding_;
    local_b8._s_0.Z = (double)this->_padding_;
    lStack_a0 = this->_padding_;
    local_98 = this->_padding_;
    lStack_90 = this->_padding_;
    local_88 = this->_padding_;
    pTVar15 = UE::Geometry::FMeshPlanarSymmetry::GetPositiveSideFrame
                        ((this->Symmetry).Ptr,local_78,(TFrame3<double> *)&local_b8._s_0);
    dVar4 = (pTVar15->Origin).field0_0x0._s_0.Y;
    this->_padding_ = (longlong)(pTVar15->Origin).field0_0x0._s_0.X;
    this->_padding_ = (longlong)dVar4;
    dVar4 = (pTVar15->Rotation).field0_0x0._s_0.X;
    this->_padding_ = (longlong)(pTVar15->Origin).field0_0x0._s_0.Z;
    this->_padding_ = (longlong)dVar4;
    dVar4 = (pTVar15->Rotation).field0_0x0._s_0.Z;
    this->_padding_ = (longlong)(pTVar15->Rotation).field0_0x0._s_0.Y;
    this->_padding_ = (longlong)dVar4;
    this->_padding_ = (longlong)(pTVar15->Rotation).field0_0x0._s_0.W;
    *this_00 = this->_padding_;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    this->_padding_ = this->_padding_;
    UE::Geometry::TFrame3<double>::Transform
              ((TFrame3<double> *)this_00,(TTransformSRT3<double> *)&this->_padding_);
  }
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  uVar7 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  lVar1 = this->_padding_;
  uVar8 = *(undefined4 *)((longlong)&this->_padding_ + 4);
  this->_padding_ = this->_padding_;
  this->_padding_ = this->_padding_;
  lVar2 = this->_padding_;
  *(int *)&this->_padding_ = (int)this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar7;
  *(int *)&this->_padding_ = (int)lVar1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar8;
  this->_padding_ = lVar2;
  dVar4 = (double)this->_padding_ - (double)this->_padding_;
  dVar5 = (double)this->_padding_ - (double)this->_padding_;
  dVar6 = (double)this->_padding_ - (double)this->_padding_;
  cVar10 = (**(code **)(*(longlong *)*puVar13 + 0x50))();
  if (cVar10 == '\0') {
    bVar11 = true;
  }
  else {
    bVar11 = __real_3e45798ee2308c3a <= dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6;
  }
  return bVar11;
}

// UpdateSubToolType @ 14cd3c2a0

void __thiscall
UMeshVertexPaintTool::UpdateSubToolType
          (UMeshVertexPaintTool *this,EMeshVertexPaintInteractionType param_1)

{
  UVertexPaintBrushFilterProperties *pUVar1;
  
  pUVar1 = (this->FilterProperties).field0_0x0.DebugPtr;
  pUVar1->CurrentSubToolType = ((this->BasicProperties).field0_0x0.DebugPtr)->SubToolType;
  (**(code **)(this->_padding_ + 0x338))
            (this,this->_padding_,CONCAT71((int7)((ulonglong)pUVar1 >> 8),param_1 != PolyLasso));
  *(undefined1 *)&this->_padding_ = 0;
  if (this->_padding_ != 0) {
    (**(code **)(this->_padding_ + 0x338))(this,this->_padding_,0);
  }
  if (this->_padding_ != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014cd3c318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x338))(this,this->_padding_,0);
    return;
  }
  return;
}

// UpdateVertexPaintMaterialMode @ 14cd3cff0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshVertexPaintTool::UpdateVertexPaintMaterialMode(UMeshVertexPaintTool *this)

{
  EMeshVertexPaintMaterialMode EVar1;
  longlong *plVar2;
  
  EVar1 = ((this->FilterProperties).field0_0x0.DebugPtr)->MaterialMode;
  if (EVar1 == OriginalMaterial) {
    (**(code **)(this->_padding_ + 0x5f0))(this,0);
    OnChannelFilterModified(this);
    return;
  }
  if (EVar1 == LitVertexColor) {
    (**(code **)(this->_padding_ + 0x5f0))(this,6);
    OnChannelFilterModified(this);
    return;
  }
  if (((EVar1 == UnlitVertexColor) && (GEngine != (UEngine *)0x0)) &&
     ((GEngine->VertexColorViewModeMaterial_ColorOnly).field0_0x0.DebugPtr != (UMaterial *)0x0)) {
    (**(code **)(this->_padding_ + 0x5f0))(this,0);
    plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x430))(this);
    (**(code **)(*plVar2 + 0xbf0))
              (plVar2,(GEngine->VertexColorViewModeMaterial_ColorOnly).field0_0x0.DebugPtr);
  }
  OnChannelFilterModified(this);
  return;
}

// WaitForPendingUndoRedoUpdate @ 14cd3d9b0

void __thiscall UMeshVertexPaintTool::WaitForPendingUndoRedoUpdate(UMeshVertexPaintTool *this)

{
  if (this->bUndoUpdatePending != false) {
    this->bUndoUpdatePending = false;
  }
  return;
}

// _getUObject @ 14cd3f6a0

UObject * __thiscall UMeshVertexPaintTool::_getUObject(UMeshVertexPaintTool *this)

{
  return (UObject *)&this[-1].SymmetricTriangleROI.Hash;
}

// _getUObject`adjustor{152}' @ 14cd3f6ac

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMeshVertexPaintTool::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall UMeshVertexPaintTool::_getUObject_adjustor_152__(UMeshVertexPaintTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMeshVertexPaintTool *)&this[-1].SelectionTids.Hash);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{3160}' @ 14cd3f6c0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UMeshVertexPaintTool::_getUObject`adjustor{3160}' (void)const __ptr64 */

UObject * __thiscall UMeshVertexPaintTool::_getUObject_adjustor_3160__(UMeshVertexPaintTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UMeshVertexPaintTool *)&this[-1]._padding_);
  return (UObject *)pUVar1;
}

// operator() @ 1505774d0

bool __thiscall
`UMeshVertexPaintTool::UpdateActiveGroupLayer'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4776106948590307502>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4776106948590307502>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

