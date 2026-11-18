// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 94

// StaticClass @ 14cc048e0

UClass * __cdecl UEditMeshPolygonsTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsTool",
               &Z_Registration_Info_UClass_UEditMeshPolygonsTool.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsTool,0x920,0x10,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UEditMeshPolygonsTool>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsTool>,local_res8,
               USingleTargetWithSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsTool.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14cc056e0

bool __cdecl `UEditMeshPolygonsTool::Setup'::__l62::<lambda_12>::<lambda_invoker_cdecl>(void)

{
  return true;
}

// UEditMeshPolygonsTool @ 14cc1f080

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UEditMeshPolygonsTool * __thiscall
UEditMeshPolygonsTool::UEditMeshPolygonsTool(UEditMeshPolygonsTool *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  USingleTargetWithSelectionTool::USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this,param_1);
  this->bToolDisabled = false;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->CommonProps).field0_0x0.DebugPtr = (UPolyEditCommonProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleTargetWithSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IToolActivityHost__;
  this->_padding_ = (longlong)&_vftable__for__IMeshVertexCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IInteractiveToolNestedAcceptCancelAPI__;
  (this->EditActions).field0_0x0.DebugPtr = (UEditMeshPolygonsToolActions *)0x0;
  (this->EditActions_Triangles).field0_0x0.DebugPtr = (UEditMeshPolygonsToolActions_Triangles *)0x0;
  (this->EditEdgeActions).field0_0x0.DebugPtr = (UEditMeshPolygonsToolEdgeActions *)0x0;
  (this->EditEdgeActions_Triangles).field0_0x0.DebugPtr =
       (UEditMeshPolygonsToolEdgeActions_Triangles *)0x0;
  (this->EditUVActions).field0_0x0.DebugPtr = (UEditMeshPolygonsToolUVActions *)0x0;
  (this->TopologyProperties).field0_0x0.DebugPtr = (UPolyEditTopologyProperties *)0x0;
  (this->ExtrudeActivity).field0_0x0.DebugPtr = (UPolyEditExtrudeActivity *)0x0;
  (this->InsetOutsetActivity).field0_0x0.DebugPtr = (UPolyEditInsetOutsetActivity *)0x0;
  (this->CutFacesActivity).field0_0x0.DebugPtr = (UPolyEditCutFacesActivity *)0x0;
  (this->PlanarProjectionUVActivity).field0_0x0.DebugPtr =
       (UPolyEditPlanarProjectionUVActivity *)0x0;
  (this->InsertEdgeActivity).field0_0x0.DebugPtr = (UPolyEditInsertEdgeActivity *)0x0;
  (this->InsertEdgeLoopActivity).field0_0x0.DebugPtr = (UPolyEditInsertEdgeLoopActivity *)0x0;
  (this->BevelEdgeActivity).field0_0x0.DebugPtr = (UPolyEditBevelEdgeActivity *)0x0;
  (this->ExtrudeEdgeActivity).field0_0x0.DebugPtr = (UPolyEditExtrudeEdgeActivity *)0x0;
  *(undefined8 *)&this->ActivityLabels = 0;
  *(undefined8 *)&(this->ActivityLabels).field_0x8 = 0;
  *(undefined8 *)&(this->ActivityLabels).field_0x20 = 0;
  *(undefined4 *)&(this->ActivityLabels).field_0x28 = 0;
  *(undefined4 *)&(this->ActivityLabels).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActivityLabels).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActivityLabels).field_0x34 = 0;
  *(undefined8 *)&(this->ActivityLabels).field_0x40 = 0;
  *(undefined4 *)&(this->ActivityLabels).field_0x48 = 0;
  *(undefined8 *)&this->ActivityIconNames = 0;
  *(undefined8 *)&(this->ActivityIconNames).field_0x8 = 0;
  *(undefined8 *)&(this->ActivityIconNames).field_0x20 = 0;
  *(undefined4 *)&(this->ActivityIconNames).field_0x28 = 0;
  *(undefined4 *)&(this->ActivityIconNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActivityIconNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActivityIconNames).field_0x34 = 0;
  *(undefined8 *)&(this->ActivityIconNames).field_0x40 = 0;
  *(undefined4 *)&(this->ActivityIconNames).field_0x48 = 0;
  (this->CurrentActivity).field0_0x0.DebugPtr = (UInteractiveToolActivity *)0x0;
  (this->CurrentMesh).Object = (FDynamicMesh3 *)0x0;
  (this->CurrentMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Topology).Object = (FGroupTopology *)0x0;
  (this->Topology).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MeshSpatial).Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  (this->MeshSpatial).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  (this->SelectionMechanic).field0_0x0.DebugPtr = (UPolygonSelectionMechanic *)0x0;
  (this->DragAlignmentMechanic).field0_0x0.DebugPtr = (UDragAlignmentMechanic *)0x0;
  (this->TransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->TransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  FText::FText(&this->DefaultMessage);
  this->bSelectionStateDirty = false;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.X = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastGeometryFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastGeometryFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->LastGeometryFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastTransformerFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastTransformerFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->LastTransformerFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LockedTransfomerFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LockedTransfomerFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->LockedTransfomerFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->BakedTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->BakedTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->BakedTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->BakedTransform).Rotation.field0_0x0._s_0.W = 1.0;
  this->bInGizmoDrag = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BakedTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BakedTransform).Translation.field0_0x0._s_0.Y = (double)uVar1;
  (this->BakedTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->BakedTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->BakedTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar1;
  (this->BakedTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->WorldTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->WorldTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->WorldTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->WorldTransform).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldTransform).Translation.field0_0x0._s_0.Y = (double)uVar1;
  (this->WorldTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->WorldTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->WorldTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar1;
  (this->WorldTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InitialGizmoFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InitialGizmoFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->InitialGizmoFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  this->bGizmoUpdatePending = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastUpdateGizmoFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastUpdateGizmoFrame).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->LastUpdateGizmoFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  this->bLastUpdateUsedWorldFrame = false;
  this->UVScaleFactor = 1.0;
  this->PendingAction = NoAction;
  this->bTerminateOnPendingActionComplete = false;
  this->ActivityTimestamp = 1;
  this->ExtraCornerDotProductThreshold = -1.0;
  (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveSelectionFrameLocal).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveSelectionFrameLocal).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->ActiveSelectionFrameLocal).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ActiveTriangleSelection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveTriangleSelection).ArrayNum = 0;
  (this->ActiveTriangleSelection).ArrayMax = 0;
  (this->ActiveSelectionBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  (this->ActiveEdgeSelection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveEdgeSelection).ArrayNum = 0;
  (this->ActiveEdgeSelection).ArrayMax = 0;
  UE::Geometry::FGroupTopologyDeformer::FGroupTopologyDeformer(&this->LinearDeformer);
  this->ModifiedTopologyCounter = 0;
  this->bWasTopologyEdited = false;
  *(undefined8 *)&this->PostSetupFunction = 0;
  *(undefined8 *)&(this->PostSetupFunction).field_0x28 = 0;
  return this;
}

// UEditMeshPolygonsTool @ 14cc1f630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UEditMeshPolygonsTool * __thiscall
UEditMeshPolygonsTool::UEditMeshPolygonsTool(UEditMeshPolygonsTool *this)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined8 uVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  FText local_18;
  
  USingleTargetWithSelectionTool::USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this);
  this->bToolDisabled = false;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->CommonProps).field0_0x0.DebugPtr = (UPolyEditCommonProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleTargetWithSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IToolActivityHost__;
  this->_padding_ = (longlong)&_vftable__for__IMeshVertexCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IInteractiveToolNestedAcceptCancelAPI__;
  (this->EditActions).field0_0x0.DebugPtr = (UEditMeshPolygonsToolActions *)0x0;
  (this->EditActions_Triangles).field0_0x0.DebugPtr = (UEditMeshPolygonsToolActions_Triangles *)0x0;
  (this->EditEdgeActions).field0_0x0.DebugPtr = (UEditMeshPolygonsToolEdgeActions *)0x0;
  (this->EditEdgeActions_Triangles).field0_0x0.DebugPtr =
       (UEditMeshPolygonsToolEdgeActions_Triangles *)0x0;
  (this->EditUVActions).field0_0x0.DebugPtr = (UEditMeshPolygonsToolUVActions *)0x0;
  (this->TopologyProperties).field0_0x0.DebugPtr = (UPolyEditTopologyProperties *)0x0;
  (this->ExtrudeActivity).field0_0x0.DebugPtr = (UPolyEditExtrudeActivity *)0x0;
  (this->InsetOutsetActivity).field0_0x0.DebugPtr = (UPolyEditInsetOutsetActivity *)0x0;
  (this->CutFacesActivity).field0_0x0.DebugPtr = (UPolyEditCutFacesActivity *)0x0;
  (this->PlanarProjectionUVActivity).field0_0x0.DebugPtr =
       (UPolyEditPlanarProjectionUVActivity *)0x0;
  (this->InsertEdgeActivity).field0_0x0.DebugPtr = (UPolyEditInsertEdgeActivity *)0x0;
  (this->InsertEdgeLoopActivity).field0_0x0.DebugPtr = (UPolyEditInsertEdgeLoopActivity *)0x0;
  (this->BevelEdgeActivity).field0_0x0.DebugPtr = (UPolyEditBevelEdgeActivity *)0x0;
  (this->ExtrudeEdgeActivity).field0_0x0.DebugPtr = (UPolyEditExtrudeEdgeActivity *)0x0;
  *(undefined8 *)&this->ActivityLabels = 0;
  *(undefined8 *)&(this->ActivityLabels).field_0x8 = 0;
  *(undefined8 *)&(this->ActivityLabels).field_0x20 = 0;
  *(undefined4 *)&(this->ActivityLabels).field_0x28 = 0;
  *(undefined4 *)&(this->ActivityLabels).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActivityLabels).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActivityLabels).field_0x34 = 0;
  *(undefined8 *)&(this->ActivityLabels).field_0x40 = 0;
  *(undefined4 *)&(this->ActivityLabels).field_0x48 = 0;
  *(undefined8 *)&this->ActivityIconNames = 0;
  *(undefined8 *)&(this->ActivityIconNames).field_0x8 = 0;
  *(undefined8 *)&(this->ActivityIconNames).field_0x20 = 0;
  *(undefined4 *)&(this->ActivityIconNames).field_0x28 = 0;
  *(undefined4 *)&(this->ActivityIconNames).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActivityIconNames).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActivityIconNames).field_0x34 = 0;
  *(undefined8 *)&(this->ActivityIconNames).field_0x40 = 0;
  *(undefined4 *)&(this->ActivityIconNames).field_0x48 = 0;
  (this->CurrentActivity).field0_0x0.DebugPtr = (UInteractiveToolActivity *)0x0;
  (this->CurrentMesh).Object = (FDynamicMesh3 *)0x0;
  (this->CurrentMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->Topology).Object = (FGroupTopology *)0x0;
  (this->Topology).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->MeshSpatial).Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  (this->MeshSpatial).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  (this->SelectionMechanic).field0_0x0.DebugPtr = (UPolygonSelectionMechanic *)0x0;
  (this->DragAlignmentMechanic).field0_0x0.DebugPtr = (UDragAlignmentMechanic *)0x0;
  (this->TransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->TransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  FText::FText(&this->DefaultMessage);
  this->bSelectionStateDirty = false;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.X = 0.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastGeometryFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastGeometryFrame).Origin.field0_0x0._s_0.Y = (double)uVar3;
  (this->LastGeometryFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastTransformerFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastTransformerFrame).Origin.field0_0x0._s_0.Y = (double)uVar3;
  (this->LastTransformerFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LockedTransfomerFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LockedTransfomerFrame).Origin.field0_0x0._s_0.Y = (double)uVar3;
  (this->LockedTransfomerFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->BakedTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->BakedTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->BakedTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->BakedTransform).Rotation.field0_0x0._s_0.W = 1.0;
  this->bInGizmoDrag = false;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BakedTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BakedTransform).Translation.field0_0x0._s_0.Y = (double)uVar3;
  (this->BakedTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->BakedTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->BakedTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar3;
  (this->BakedTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->WorldTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->WorldTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->WorldTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->WorldTransform).Rotation.field0_0x0._s_0.W = 1.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->WorldTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->WorldTransform).Translation.field0_0x0._s_0.Y = (double)uVar3;
  (this->WorldTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->WorldTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->WorldTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar3;
  (this->WorldTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InitialGizmoFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InitialGizmoFrame).Origin.field0_0x0._s_0.Y = (double)uVar3;
  (this->InitialGizmoFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  this->bGizmoUpdatePending = false;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastUpdateGizmoFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastUpdateGizmoFrame).Origin.field0_0x0._s_0.Y = (double)uVar3;
  (this->LastUpdateGizmoFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.W = 1.0;
  this->bLastUpdateUsedWorldFrame = false;
  this->UVScaleFactor = 1.0;
  this->PendingAction = NoAction;
  this->bTerminateOnPendingActionComplete = false;
  this->ActivityTimestamp = 1;
  this->ExtraCornerDotProductThreshold = -1.0;
  (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.W = 1.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveSelectionFrameLocal).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveSelectionFrameLocal).Origin.field0_0x0._s_0.Y = (double)uVar3;
  (this->ActiveSelectionFrameLocal).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.Y = (double)uVar3;
  (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ActiveTriangleSelection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveTriangleSelection).ArrayNum = 0;
  (this->ActiveTriangleSelection).ArrayMax = 0;
  (this->ActiveSelectionBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  (this->ActiveEdgeSelection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveEdgeSelection).ArrayNum = 0;
  (this->ActiveEdgeSelection).ArrayMax = 0;
  UE::Geometry::FGroupTopologyDeformer::FGroupTopologyDeformer(&this->LinearDeformer);
  this->ModifiedTopologyCounter = 0;
  this->bWasTopologyEdited = false;
  *(undefined8 *)&this->PostSetupFunction = 0;
  *(undefined8 *)&(this->PostSetupFunction).field_0x28 = 0;
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UEditMeshPolygonsTool",L"EditMeshPolygonsToolName",
                      L"PolyGroup Edit");
  pIVar1 = (ITextData *)this->_padding_;
  pIVar2 = (pFVar4->TextData).Reference;
  if (pIVar1 != pIVar2) {
    this->_padding_ = (longlong)pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  *(uint *)&this->_padding_ = pFVar4->Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return this;
}

// ~UEditMeshPolygonsTool @ 14cc23120

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::~UEditMeshPolygonsTool(UEditMeshPolygonsTool *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  ITextData *pIVar3;
  void *pvVar4;
  longlong *plVar5;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleTargetWithSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IToolActivityHost__;
  this->_padding_ = (longlong)&_vftable__for__IMeshVertexCommandChangeTarget__;
  this->_padding_ = (longlong)&_vftable__for__IInteractiveToolNestedAcceptCancelAPI__;
  if (*(longlong *)&this->PostSetupFunction != 0) {
    plVar1 = *(longlong **)&(this->PostSetupFunction).field_0x28;
    plVar5 = (longlong *)&(this->PostSetupFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  UE::Geometry::FGroupTopologyDeformer::~FGroupTopologyDeformer(&this->LinearDeformer);
  DestructItems<UEditMeshPolygonsTool::FSelectedEdge,int>
            ((FSelectedEdge *)(this->ActiveEdgeSelection).AllocatorInstance.Data,
             (this->ActiveEdgeSelection).ArrayNum);
  pFVar2 = (this->ActiveEdgeSelection).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ActiveTriangleSelection).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->DefaultMessage).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MeshSpatial).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Topology).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurrentMesh).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->ActivityIconNames).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ActivityIconNames).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<UInteractiveToolActivity_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UInteractiveToolActivity_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UInteractiveToolActivity_*,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActivityIconNames);
  *(undefined4 *)&(this->ActivityLabels).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ActivityLabels).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<UInteractiveToolActivity_*,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UInteractiveToolActivity_*,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UInteractiveToolActivity_*,FText>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActivityLabels);
  this->_padding_ = (longlong)&___7IInteractiveToolNestedAcceptCancelAPI__6B_;
  this->_padding_ = (longlong)&___7IMeshVertexCommandChangeTarget__6B_;
  this->_padding_ = (longlong)&___7IToolActivityHost__6B_;
  USingleTargetWithSelectionTool::~USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this);
  return;
}

// operator() @ 14cc23850

void __thiscall
`UEditMeshPolygonsTool::Setup'::__l2::<lambda_10>::operator()(void *this,FText *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *local_res8;
  
  plVar1 = *(longlong **)this;
  *(int *)(plVar1 + 0xa1) = (int)plVar1[0xa1] + 1;
  lVar4 = (**(code **)(*plVar1 + 0x2d8))(plVar1);
  (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28,param_1);
  lVar4 = (**(code **)(*plVar1 + 0x2d8))(plVar1);
  pcVar2 = *(code **)(*(longlong *)(lVar4 + 0x28) + 0x20);
  local_res8 = ::operator_new(0x10);
  if (local_res8 != (undefined8 *)0x0) {
    lVar3 = plVar1[0xa1];
    *local_res8 = &___7FPolyEditActivityStartChange__6B_;
    *(undefined1 *)(local_res8 + 1) = 0;
    *(int *)((longlong)local_res8 + 0xc) = (int)lVar3;
  }
  (*pcVar2)(lVar4 + 0x28,plVar1,&local_res8,param_1);
  lVar4 = (**(code **)(*plVar1 + 0x2d8))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x00014cc23905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
  return;
}

// operator() @ 14cc23910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UEditMeshPolygonsTool::Setup'::__l62::<lambda_13>::operator()(void *this,UTransformProxy *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 (*pauVar9) [16];
  undefined1 auStack_e8 [72];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pauVar9 = (undefined1 (*) [16])(**(code **)(param_1->_padding_ + 0x2c0))(param_1,local_78);
  auVar1 = *pauVar9;
  uVar4 = *(undefined4 *)pauVar9[1];
  uVar5 = *(undefined4 *)(pauVar9[1] + 4);
  uVar6 = *(undefined4 *)(pauVar9[1] + 8);
  uVar7 = *(undefined4 *)(pauVar9[1] + 0xc);
  uVar8 = *(undefined8 *)(pauVar9[2] + 8);
  lVar2 = *(longlong *)this;
  local_a0 = (undefined4)*(undefined8 *)pauVar9[3];
  uStack_9c = (undefined4)((ulonglong)*(undefined8 *)pauVar9[3] >> 0x20);
  *(undefined8 *)(lVar2 + 0x338) = *(undefined8 *)pauVar9[2];
  *(undefined8 *)(lVar2 + 0x340) = uVar8;
  *(undefined4 *)(lVar2 + 0x348) = local_a0;
  *(undefined4 *)(lVar2 + 0x34c) = uStack_9c;
  *(int *)(lVar2 + 0x350) = auVar1._0_4_;
  *(int *)(lVar2 + 0x354) = auVar1._4_4_;
  auVar3._8_4_ = uVar4;
  auVar3._0_8_ = auVar1._8_8_;
  auVar3._12_4_ = uVar5;
  *(undefined1 (*) [16])(lVar2 + 0x358) = auVar3;
  *(undefined4 *)(lVar2 + 0x368) = uVar6;
  *(undefined4 *)(lVar2 + 0x36c) = uVar7;
  lVar2 = *(longlong *)this;
  if (*(char *)(*(longlong *)(lVar2 + 0x170) + 0xb8) != '\0') {
    *(undefined8 *)(lVar2 + 0x370) = *(undefined8 *)(lVar2 + 0x338);
    *(undefined8 *)(lVar2 + 0x378) = *(undefined8 *)(lVar2 + 0x340);
    *(undefined8 *)(lVar2 + 0x380) = *(undefined8 *)(lVar2 + 0x348);
    *(undefined8 *)(lVar2 + 0x388) = *(undefined8 *)(lVar2 + 0x350);
    *(undefined8 *)(lVar2 + 0x390) = *(undefined8 *)(lVar2 + 0x358);
    *(undefined8 *)(lVar2 + 0x398) = *(undefined8 *)(lVar2 + 0x360);
    *(undefined8 *)(lVar2 + 0x3a0) = *(undefined8 *)(lVar2 + 0x368);
  }
  return;
}

// operator() @ 14cc274c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
`UEditMeshPolygonsTool::ApplyBridgeEdges'::__l2::<lambda_1>::operator()
          (void *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  TUniquePtr<UE::Geometry::FMeshRegionOperator,TDefaultDelete<UE::Geometry::FMeshRegionOperator>_>
  TVar8;
  bool bVar9;
  int iVar10;
  longlong *plVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  undefined1 auStackY_3b8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_378;
  FEdgeLoop local_368;
  FDynamicMesh3 *local_328;
  ForAnyElementType local_320;
  int local_318;
  int local_314;
  ForAnyElementType local_310;
  int local_308;
  int local_304;
  ForAnyElementType local_300;
  int local_2f8;
  int local_2f4;
  undefined1 local_2f0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2e8;
  FDynamicMeshEditor local_2d8;
  FDynamicMeshEditor local_2d0;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_2c8;
  FEdgeLoop local_2b8;
  undefined1 local_278 [16];
  longlong local_268;
  FDynamicMesh3 *local_260;
  FDynamicMesh3 *local_258;
  ForAnyElementType local_250;
  int local_248;
  int local_244;
  ForAnyElementType local_240;
  int local_238;
  int local_234;
  ForAnyElementType local_230;
  int local_228;
  int local_224;
  bool local_220;
  EFillType local_218;
  int local_214;
  TVector2<float>_u_0 local_208;
  TVector<double>_u_0 local_200;
  TQuaternion<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  TVector<double>_u_0 local_1b0;
  TVector<double> local_198;
  undefined1 local_178 [16];
  longlong local_168;
  undefined2 local_160;
  bool local_15e;
  double local_158;
  FDynamicMesh3 *local_150;
  FEdgeLoop local_148;
  TUniquePtr<UE::Geometry::FMeshRegionOperator,TDefaultDelete<UE::Geometry::FMeshRegionOperator>_>
  local_108;
  FDynamicMesh3 *pFStack_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  TBitArray<FDefaultBitArrayAllocator> local_e8;
  undefined4 local_c8;
  undefined4 local_c4;
  ForElementType<FSetElementId> local_b8;
  int local_b0;
  ForAnyElementType local_a8;
  undefined8 local_a0;
  TBitArray<FDefaultBitArrayAllocator> local_98;
  undefined4 local_78;
  undefined4 local_74;
  void *local_68;
  undefined4 local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_2e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e8.ArrayNum = 0;
  local_2e8.ArrayMax = 0;
  UE::Geometry::FEdgeLoop::VertexLoopToEdgeLoop
            ((FDynamicMesh3 *)**(undefined8 **)this,param_1,&local_2e8);
  local_368.Mesh = (FDynamicMesh3 *)**(undefined8 **)this;
  local_368.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.Vertices.ArrayNum = 0;
  local_368.Vertices.ArrayMax = 0;
  local_368.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.Edges.ArrayNum = 0;
  local_368.Edges.ArrayMax = 0;
  local_368.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_368.BowtieVertices.ArrayNum = 0;
  local_368.BowtieVertices.ArrayMax = 0;
  local_368.bBowtiesCalculated = false;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&local_368.Vertices,param_1);
  FVar12.Data = local_2e8.AllocatorInstance.Data;
  iVar10 = local_2e8.ArrayNum;
  lVar13 = (longlong)local_2e8.ArrayNum;
  local_368.Edges.ArrayNum = local_2e8.ArrayNum;
  if ((local_2e8.ArrayNum == 0) && (local_368.Edges.ArrayMax == 0)) {
    local_368.Edges._8_8_ = local_2e8._8_8_ & 0xffffffff;
    iVar10 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_2e8.ArrayNum,local_368.Edges.ArrayMax,&local_368.Edges.AllocatorInstance,
               local_2e8.ArrayNum,&local_368.Edges.ArrayMax);
    if (iVar10 != 0) {
      memcpy(local_368.Edges.AllocatorInstance.Data,FVar12.Data,lVar13 << 2);
    }
    iVar10 = local_368.Edges.ArrayNum;
  }
  FVar12.Data = local_368.Vertices.AllocatorInstance.Data;
  lVar13 = (longlong)local_368.Vertices.ArrayNum;
  local_328 = local_368.Mesh;
  local_320.Data = (FScriptContainerElement *)0x0;
  local_318 = local_368.Vertices.ArrayNum;
  if (local_368.Vertices.ArrayNum == 0) {
    local_314 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_368.Vertices.ArrayNum,0,&local_320,local_368.Vertices.ArrayNum,&local_314);
    memcpy(local_320.Data,FVar12.Data,lVar13 << 2);
    iVar10 = local_368.Edges.ArrayNum;
  }
  FVar12.Data = local_368.Edges.AllocatorInstance.Data;
  local_310.Data = (FScriptContainerElement *)0x0;
  local_308 = iVar10;
  if (iVar10 == 0) {
    local_304 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar10,0,&local_310,iVar10,&local_304);
    memcpy(local_310.Data,FVar12.Data,(longlong)iVar10 << 2);
  }
  FVar12.Data = local_368.BowtieVertices.AllocatorInstance.Data;
  lVar13 = (longlong)local_368.BowtieVertices.ArrayNum;
  local_300.Data = (FScriptContainerElement *)0x0;
  local_2f8 = local_368.BowtieVertices.ArrayNum;
  if (local_368.BowtieVertices.ArrayNum == 0) {
    local_2f4 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_368.BowtieVertices.ArrayNum,0,&local_300,local_368.BowtieVertices.ArrayNum,
               &local_2f4);
    memcpy(local_300.Data,FVar12.Data,lVar13 << 2);
  }
  iVar10 = local_318;
  FVar12.Data = local_320.Data;
  local_2f0 = local_368.bBowtiesCalculated;
  local_260 = (FDynamicMesh3 *)**(undefined8 **)this;
  local_258 = local_328;
  local_278._8_8_ = (void *)0x0;
  local_268 = 0;
  local_278._0_8_ = &___7FSimpleHoleFiller_Geometry_UE__6B_;
  local_250.Data = (FScriptContainerElement *)0x0;
  local_248 = local_318;
  if (local_318 == 0) {
    local_244 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_318,0,&local_250,local_318,&local_244);
    memcpy(local_250.Data,FVar12.Data,(longlong)iVar10 << 2);
  }
  iVar10 = local_308;
  FVar12.Data = local_310.Data;
  local_240.Data = (FScriptContainerElement *)0x0;
  local_238 = local_308;
  if (local_308 == 0) {
    local_234 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_308,0,&local_240,local_308,&local_234);
    memcpy(local_240.Data,FVar12.Data,(longlong)iVar10 << 2);
  }
  iVar10 = local_2f8;
  FVar12.Data = local_300.Data;
  local_230.Data = (FScriptContainerElement *)0x0;
  local_228 = local_2f8;
  if (local_2f8 == 0) {
    local_224 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_2f8,0,&local_230,local_2f8,&local_224);
    memcpy(local_230.Data,FVar12.Data,(longlong)iVar10 << 2);
  }
  local_220 = (bool)local_2f0;
  local_218 = PolygonEarClipping;
  local_214 = -1;
  if (local_300.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_300.Data);
  }
  if (local_310.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_310.Data);
  }
  if (local_320.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_320.Data);
  }
  local_378.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.ArrayNum = 0;
  local_378.ArrayMax = 0;
  bVar9 = UE::Geometry::FSimpleHoleFiller::Fill((FSimpleHoleFiller *)local_278,-1);
  uVar7 = local_278._8_8_;
  if (bVar9) {
    iVar10 = (int)local_268;
    lVar13 = (longlong)(int)local_268;
    local_378.ArrayNum = (int)local_268;
    if ((((int)local_268 != 0) || (local_378.ArrayMax != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_268,local_378.ArrayMax,&local_378.AllocatorInstance,(int)local_268
                   ,&local_378.ArrayMax), iVar10 != 0)) {
      memcpy(local_378.AllocatorInstance.Data,(void *)uVar7,lVar13 << 2);
    }
LAB_14cc28098:
    pTVar4 = *(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18);
    if ((pTVar4 == &local_378) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(void*)this != (void*)&Source",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x96e,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar13 = (longlong)local_378.ArrayNum;
    if (local_378.ArrayNum != 0) {
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,local_378.ArrayNum,&pTVar4->AllocatorInstance,&pTVar4->ArrayNum,
                          &pTVar4->ArrayMax);
      memcpy((pTVar4->AllocatorInstance).Data + (longlong)iVar10 * 4,
             local_378.AllocatorInstance.Data,lVar13 << 2);
    }
    if (*(longlong *)(**(longlong **)this + 0x208) == 0) goto LAB_14cc28237;
    local_2c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2c8.ArrayNum = 0;
    local_2c8.ArrayMax = 0;
    UE::Geometry::FEdgeLoop::GetVertices<UE::Math::TVector<double>_>(&local_368,&local_2c8);
    PolygonTriangulation::ComputePolygonPlane<double>
              (&local_2c8,&local_198,(TVector<double> *)&local_1c8._s_0);
    local_2d0.Mesh = (FDynamicMesh3 *)**(undefined8 **)this;
    local_1e8._s_0.X = 0.0;
    local_1e8._s_0.Y = 0.0;
    local_1e8._s_0.Z = 0.0;
    local_1e8._s_0.W = __real_3ff0000000000000;
    local_200._s_0.X = local_1c8._s_0.X;
    local_200._s_0.Y = local_1c8._s_0.Y;
    local_200._s_0.Z = local_1c8._s_0.Z;
    local_1b0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_1b0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_1b0._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_1e8._s_0,(TVector<double> *)&local_1b0._s_0,&local_198)
    ;
    UE::Geometry::FDynamicMeshEditor::SetTriangleNormals(&local_2d0,&local_378);
    local_208 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
    UE::Geometry::FDynamicMeshEditor::SetTriangleUVsFromProjection
              (&local_2d0,&local_378,(TFrame3<double> *)&local_200._s_0,
               *(float *)(*(longlong *)((longlong)this + 8) + 0x4fc),
               (TVector2<float> *)&local_208._s_0,true,0);
    FVar12.Data = local_2c8.AllocatorInstance.Data;
  }
  else {
    local_2d8.Mesh = (FDynamicMesh3 *)**(undefined8 **)this;
    UE::Geometry::FDynamicMeshEditor::RemoveTriangles
              (&local_2d8,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_278 + 8),false);
    FVar12.Data = local_368.Vertices.AllocatorInstance.Data;
    lVar13 = (longlong)local_368.Vertices.ArrayNum;
    local_2b8.Mesh = local_368.Mesh;
    local_2b8.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.Vertices.ArrayNum = local_368.Vertices.ArrayNum;
    if (local_368.Vertices.ArrayNum == 0) {
      local_2b8.Vertices.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_368.Vertices.ArrayNum,0,&local_2b8.Vertices.AllocatorInstance,
                 local_368.Vertices.ArrayNum,&local_2b8.Vertices.ArrayMax);
      memcpy(local_2b8.Vertices.AllocatorInstance.Data,FVar12.Data,lVar13 << 2);
    }
    FVar12.Data = local_368.Edges.AllocatorInstance.Data;
    lVar13 = (longlong)local_368.Edges.ArrayNum;
    local_2b8.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.Edges.ArrayNum = local_368.Edges.ArrayNum;
    if (local_368.Edges.ArrayNum == 0) {
      local_2b8.Edges.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_368.Edges.ArrayNum,0,&local_2b8.Edges.AllocatorInstance,
                 local_368.Edges.ArrayNum,&local_2b8.Edges.ArrayMax);
      memcpy(local_2b8.Edges.AllocatorInstance.Data,FVar12.Data,lVar13 << 2);
    }
    FVar12.Data = local_368.BowtieVertices.AllocatorInstance.Data;
    lVar13 = (longlong)local_368.BowtieVertices.ArrayNum;
    local_2b8.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2b8.BowtieVertices.ArrayNum = local_368.BowtieVertices.ArrayNum;
    if (local_368.BowtieVertices.ArrayNum == 0) {
      local_2b8.BowtieVertices.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_368.BowtieVertices.ArrayNum,0,&local_2b8.BowtieVertices.AllocatorInstance
                 ,local_368.BowtieVertices.ArrayNum,&local_2b8.BowtieVertices.ArrayMax);
      memcpy(local_2b8.BowtieVertices.AllocatorInstance.Data,FVar12.Data,lVar13 << 2);
    }
    local_2b8.bBowtiesCalculated = local_368.bBowtiesCalculated;
    local_150 = (FDynamicMesh3 *)**(undefined8 **)this;
    local_158 = __real_3f1a36e2eb1c432d;
    local_178._8_8_ = (FScriptContainerElement *)0x0;
    local_168 = 0;
    local_178._0_8_ = &___7FMinimalHoleFiller_Geometry_UE__6B_;
    local_160._0_1_ = false;
    local_160._1_1_ = true;
    local_15e = true;
    UE::Geometry::FEdgeLoop::FEdgeLoop(&local_148,&local_2b8);
    local_108.Ptr = (FMeshRegionOperator *)0x0;
    pFStack_100 = (FDynamicMesh3 *)0x0;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    local_e8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_e8.NumBits = 0;
    local_e8.MaxBits = 0x80;
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_b8 = (ForElementType<FSetElementId>)0x0;
    local_b0 = 0;
    local_a8.Data = (FScriptContainerElement *)0x0;
    local_a0 = 0;
    local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_98.NumBits = 0;
    local_98.MaxBits = 0x80;
    local_78 = 0xffffffff;
    local_74 = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50._0_4_ = 0;
    local_50._4_4_ = 0;
    if (local_2b8.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.BowtieVertices.AllocatorInstance.Data);
    }
    if (local_2b8.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Edges.AllocatorInstance.Data);
    }
    if (local_2b8.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b8.Vertices.AllocatorInstance.Data);
    }
    bVar9 = UE::Geometry::FMinimalHoleFiller::Fill((FMinimalHoleFiller *)local_178,-1);
    uVar7 = local_178._8_8_;
    if (bVar9) {
      iVar10 = (int)local_168;
      lVar13 = (longlong)(int)local_168;
      local_378.ArrayNum = (int)local_168;
      if ((((int)local_168 != 0) || (local_378.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(int)local_168,local_378.ArrayMax,&local_378.AllocatorInstance,
                     (int)local_168,&local_378.ArrayMax), iVar10 != 0)) {
        memcpy(local_378.AllocatorInstance.Data,(void *)uVar7,lVar13 << 2);
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
      local_60 = 0;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      uVar6 = local_a0 >> 0x20;
      local_a0 = local_a0 & 0xffffffff00000000;
      if ((int)uVar6 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&local_a8,0,(int *)((longlong)&local_a0 + 4));
      }
      local_78 = 0xffffffff;
      local_74 = 0;
      local_98.NumBits = 0;
      if (0x80 < (uint)local_98.MaxBits) {
        local_98.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_98,0);
      }
      if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
      }
      if (local_a8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data);
      }
      local_b0 = 0;
      if (local_b8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_b8);
      }
      uVar6 = local_f0 >> 0x20;
      local_f0 = local_f0 & 0xffffffff00000000;
      if ((int)uVar6 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,&local_f8,0,(int *)((longlong)&local_f0 + 4));
      }
      local_c8 = 0xffffffff;
      local_c4 = 0;
      local_e8.NumBits = 0;
      if (0x80 < (uint)local_e8.MaxBits) {
        local_e8.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_e8,0);
      }
      if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_e8.AllocatorInstance.SecondaryData);
      }
      if (local_f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data);
      }
      TDefaultDelete<UE::Geometry::FMeshRegionOperator>::operator()
                ((TDefaultDelete<UE::Geometry::FMeshRegionOperator> *)&local_108,local_108.Ptr);
      if (local_148.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.BowtieVertices.AllocatorInstance.Data);
      }
      if (local_148.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Edges.AllocatorInstance.Data);
      }
      if (local_148.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Vertices.AllocatorInstance.Data);
      }
      if ((FScriptContainerElement *)local_178._8_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_178._8_8_);
      }
      goto LAB_14cc28098;
    }
    UE::Geometry::FDynamicMeshEditor::RemoveTriangles
              (&local_2d8,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_178 + 8),false);
    plVar11 = (longlong *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x2d8))();
    (**(code **)(*plVar11 + 0x360))(plVar11,*(undefined8 *)((longlong)this + 0x10),3);
    lVar13 = *(longlong *)((longlong)this + 8);
    UPreviewMesh::UpdatePreview
              (*(UPreviewMesh **)(*(longlong *)(lVar13 + 0x168) + 0x68),
               *(FDynamicMesh3 **)(lVar13 + 0x290),FullUpdate,AllVertexAttribs);
    *(undefined1 *)(lVar13 + 0x4f9) = 1;
    UMeshTopologySelectionMechanic::NotifyMeshChanged
              (*(UMeshTopologySelectionMechanic **)(lVar13 + 0x2c8),false);
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    uVar6 = local_a0 >> 0x20;
    local_a0 = local_a0 & 0xffffffff00000000;
    if ((int)uVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&local_a8,0,(int *)((longlong)&local_a0 + 4));
    }
    local_78 = 0xffffffff;
    local_74 = 0;
    local_98.NumBits = 0;
    if (0x80 < (uint)local_98.MaxBits) {
      local_98.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_98,0);
    }
    if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
    }
    if (local_a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data);
    }
    local_b0 = 0;
    if (local_b8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_b8);
    }
    uVar6 = local_f0 >> 0x20;
    local_f0 = local_f0 & 0xffffffff00000000;
    if ((int)uVar6 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&local_f8,0,(int *)((longlong)&local_f0 + 4));
    }
    local_c8 = 0xffffffff;
    local_c4 = 0;
    local_e8.NumBits = 0;
    if (0x80 < (uint)local_e8.MaxBits) {
      local_e8.MaxBits = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_e8,0);
    }
    if (local_e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_e8.AllocatorInstance.SecondaryData);
    }
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    TVar8.Ptr = local_108.Ptr;
    if (local_108.Ptr != (FMeshRegionOperator *)0x0) {
      pFVar1 = ((local_108.Ptr)->CurrentBaseTris).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      *(undefined4 *)&((TVar8.Ptr)->ReinsertSubToBaseMapT).Sparse.field_0x48 = 0;
      pvVar2 = *(void **)&((TVar8.Ptr)->ReinsertSubToBaseMapT).Sparse.field_0x40;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&((TVar8.Ptr)->ReinsertSubToBaseMapT).Sparse);
      pFVar1 = ((TVar8.Ptr)->ReinsertSubToBaseMapT).Dense.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      *(undefined4 *)&((TVar8.Ptr)->ReinsertSubToBaseMapV).Sparse.field_0x48 = 0;
      pvVar2 = *(void **)&((TVar8.Ptr)->ReinsertSubToBaseMapV).Sparse.field_0x40;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&((TVar8.Ptr)->ReinsertSubToBaseMapV).Sparse);
      pFVar1 = ((TVar8.Ptr)->ReinsertSubToBaseMapV).Dense.AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      ((TVar8.Ptr)->Region).BaseBorderV.HashSize = 0;
      FVar3 = ((TVar8.Ptr)->Region).BaseBorderV.Hash.SecondaryData;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar3);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&((TVar8.Ptr)->Region).BaseBorderV.Elements);
      ((TVar8.Ptr)->Region).BaseBoundaryE.HashSize = 0;
      FVar3 = ((TVar8.Ptr)->Region).BaseBoundaryE.Hash.SecondaryData;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar3);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&((TVar8.Ptr)->Region).BaseBoundaryE.Elements);
      ((TVar8.Ptr)->Region).BaseBorderE.HashSize = 0;
      FVar3 = ((TVar8.Ptr)->Region).BaseBorderE.Hash.SecondaryData;
      if (FVar3 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar3);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&((TVar8.Ptr)->Region).BaseBorderE.Elements);
      UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&((TVar8.Ptr)->Region).Mappings);
      UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&((TVar8.Ptr)->Region).Submesh);
      ::operator_delete(TVar8.Ptr,0x6f0);
    }
    if (local_148.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.BowtieVertices.AllocatorInstance.Data);
    }
    if (local_148.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Edges.AllocatorInstance.Data);
    }
    FVar12.Data = (FScriptContainerElement *)local_178._8_8_;
    if (local_148.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Vertices.AllocatorInstance.Data);
      FVar12.Data = (FScriptContainerElement *)local_178._8_8_;
    }
  }
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
LAB_14cc28237:
  if (local_378.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.AllocatorInstance.Data);
  }
  local_278._0_8_ = &___7FSimpleHoleFiller_Geometry_UE__6B_;
  if (local_230.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data);
  }
  if (local_240.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.Data);
  }
  if (local_250.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data);
  }
  if ((void *)local_278._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_278._8_8_);
  }
  if (local_368.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.BowtieVertices.AllocatorInstance.Data);
  }
  if (local_368.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Edges.AllocatorInstance.Data);
  }
  if (local_368.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_368.Vertices.AllocatorInstance.Data);
  }
  if (local_2e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14cc282f0

bool __thiscall
`UEditMeshPolygonsTool::ApplyDeleteEdges'::__l2::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  FDynamicMesh3 *this_00;
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  
  this_00 = (FDynamicMesh3 *)**(undefined8 **)this;
  iVar3 = UE::Geometry::FDynamicMesh3::GetTriangleGroup(this_00,param_1);
  iVar4 = UE::Geometry::FDynamicMesh3::GetTriangleGroup(this_00,param_2);
  if (iVar3 == iVar4) {
LAB_14cc2839a:
    bVar2 = true;
  }
  else {
    plVar1 = *(longlong **)((longlong)this + 8);
    uVar5 = UE::Geometry::FDynamicMesh3::FindEdgeFromTriPair
                      ((FDynamicMesh3 *)**(undefined8 **)this,param_1,param_2);
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      plVar6 = (longlong *)plVar1[8];
      if ((longlong *)plVar1[8] == (longlong *)0x0) {
        plVar6 = plVar1 + 7;
      }
      iVar3 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar1[9] - 1U & uVar5) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)(*plVar1 + (longlong)iVar3 * 0xc) == uVar5) goto LAB_14cc2839a;
          iVar3 = *(int *)(*plVar1 + 4 + (longlong)iVar3 * 0xc);
        } while (iVar3 != -1);
      }
    }
    bVar2 = false;
  }
  return bVar2;
}

// operator() @ 14cc29f20

bool __thiscall
`UEditMeshPolygonsTool::ApplyWeldEdges'::__l2::<lambda_1>::operator()
          (void *this,FEdgeSpan *param_1,FEdgeSpan *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FDynamicMesh3 *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  EWeldResult EVar7;
  atomic<unsigned_char> *paVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined8 local_68;
  undefined8 local_60;
  code *local_58;
  undefined8 *local_50;
  code *local_48;
  undefined8 *local_40;
  
  pFVar9 = (param_1->Vertices).AllocatorInstance.Data;
  iVar10 = (param_1->Vertices).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar10 * 4;
  while( true ) {
    if ((param_1->Vertices).ArrayNum != iVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar9 == pFVar1) break;
    uVar2 = *(uint *)pFVar9;
    pFVar3 = *(FDynamicMesh3 **)((longlong)this + 8);
    if ((((int)uVar2 < 0) ||
        ((int)((pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
              (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar2)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((pFVar3->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                       Data + (ulonglong)(uVar2 >> 9) * 8) +
                                    (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) {
      iVar10 = 0x972;
      paVar8 = &bGEnsureHasExecuted<_1092627319186519694>;
LAB_14cc2a09e:
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (paVar8,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\EditMeshPolygonsTool.cpp"
                         ,iVar10,"Mesh->IsVertex(Vid)");
      if (!bVar5) {
        return false;
      }
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_68 = *(undefined8 *)this;
    local_50 = &local_68;
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<``UEditMeshPolygonsTool::ApplyWeldEdges'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>,void,int>
               ::Call;
    UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
              (pFVar3,uVar2,(TFunctionRef<void___cdecl(int)> *)&local_58);
    pFVar9 = pFVar9 + 4;
  }
  pFVar9 = (param_2->Vertices).AllocatorInstance.Data;
  iVar10 = (param_2->Vertices).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar10 * 4;
  while( true ) {
    if ((param_2->Vertices).ArrayNum != iVar10) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar9 == pFVar1) {
      UE::Geometry::FEdgeSpan::SetCorrectOrientation(param_1);
      UE::Geometry::FEdgeSpan::SetCorrectOrientation(param_2);
      EVar7 = UE::Geometry::FWeldEdgeSequence::SplitEdgesToEqualizeSpanLengths
                        (*(FDynamicMesh3 **)((longlong)this + 8),param_1,param_2);
      if (*(char *)((longlong)this + 0x28) == '\0') {
        TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                  (*(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x20),
                   &param_1->Edges);
        TArray<int,TSizedDefaultAllocator<32>_>::Insert<TSizedDefaultAllocator<32>_>
                  (*(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18),
                   &param_2->Edges,0);
      }
      else {
        TArray<int,TSizedDefaultAllocator<32>_>::Insert<TSizedDefaultAllocator<32>_>
                  (*(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x20),
                   &param_1->Edges,0);
        TArray<int,TSizedDefaultAllocator<32>_>::Append<int,TSizedDefaultAllocator<32>_>
                  (*(TArray<int,TSizedDefaultAllocator<32>_> **)((longlong)this + 0x18),
                   &param_2->Edges);
      }
      if (EVar7 != Ok) {
        **(undefined1 **)((longlong)this + 0x10) = 0;
        return false;
      }
      return true;
    }
    uVar2 = *(uint *)pFVar9;
    pFVar3 = *(FDynamicMesh3 **)((longlong)this + 8);
    if ((((int)uVar2 < 0) ||
        ((int)((pFVar3->VertexRefCounts).RefCounts.CurBlock * 0x200 +
              (pFVar3->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar2)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((pFVar3->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                       Data + (ulonglong)(uVar2 >> 9) * 8) +
                                    (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))) break;
    local_60 = *(undefined8 *)this;
    local_40 = &local_60;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<``UEditMeshPolygonsTool::ApplyWeldEdges'::__l2::<lambda_1>::operator()'::__l13::<lambda_2>,void,int>
               ::Call;
    UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
              (pFVar3,uVar2,(TFunctionRef<void___cdecl(int)> *)&local_48);
    pFVar9 = pFVar9 + 4;
  }
  iVar10 = 0x97d;
  paVar8 = &bGEnsureHasExecuted<_1092627319186519683>;
  goto LAB_14cc2a09e;
}

// operator() @ 14cc2bd20

bool __thiscall
`UEditMeshPolygonsTool::BeginMeshBoundaryEdgeEditChange'::__l5::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)this;
  if (*(longlong *)(lVar1 + 0x2a0) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  bVar3 = UE::Geometry::FGroupTopology::IsBoundaryEdge(*(FGroupTopology **)(lVar1 + 0x2a0),param_1);
  if (bVar3) {
    lVar1 = *(longlong *)this;
    if (*(longlong *)(lVar1 + 0x2a0) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        bVar3 = (bool)(*pcVar2)();
        return bVar3;
      }
    }
    bVar3 = UE::Geometry::FGroupTopology::IsSimpleGroupEdge
                      (*(FGroupTopology **)(lVar1 + 0x2a0),param_1);
    if (bVar3) {
      return true;
    }
  }
  return false;
}

// operator() @ 14cc2c430

TVector<double> * __thiscall
`UEditMeshPolygonsTool::ComputeUpdate_Gizmo'::__l11::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  TVector<double> *pTVar4;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  lVar2 = *(longlong *)this;
  lVar3 = *(longlong *)
           ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8)
  ;
  pdVar1 = (double *)(lVar3 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_20.field0_0x0._s_0.Z = *(double *)(lVar3 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_38._s_0.X = *pdVar1 * *(double *)(lVar2 + 0x438);
  local_38._s_0.Z = local_20.field0_0x0._s_0.Z * *(double *)(lVar2 + 0x448);
  local_38._s_0.Y = pdVar1[1] * *(double *)(lVar2 + 0x440);
  pTVar4 = UE::Geometry::operator*<double>
                     (&local_20,(TQuaternion<double> *)(lVar2 + 0x400),
                      (TVector<double> *)&local_38._s_0);
  pdVar1 = *(double **)((longlong)this + 0x10);
  local_38._s_0.X =
       (((pTVar4->field0_0x0)._s_0.X + *(double *)(lVar2 + 0x420)) - *(double *)(lVar2 + 0x450)) *
       *pdVar1;
  local_38._s_0.Y =
       ((*(double *)(lVar2 + 0x428) + (pTVar4->field0_0x0)._s_0.Y) - *(double *)(lVar2 + 0x458)) *
       pdVar1[1];
  local_38._s_0.Z =
       ((*(double *)(lVar2 + 0x430) + (pTVar4->field0_0x0)._s_0.Z) - *(double *)(lVar2 + 0x460)) *
       pdVar1[2];
  pTVar4 = UE::Geometry::operator*<double>
                     (&local_20,*(TQuaternion<double> **)((longlong)this + 8),
                      (TVector<double> *)&local_38._s_0);
  pdVar1 = *(double **)((longlong)this + 0x18);
  local_38._s_0.X = (pTVar4->field0_0x0)._s_0.X + *pdVar1;
  local_38._s_0.Y = pdVar1[1] + (pTVar4->field0_0x0)._s_0.Y;
  local_38._s_0.Z = pdVar1[2] + (pTVar4->field0_0x0)._s_0.Z;
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            ((TTransformSRT3<double> *)(lVar2 + 0x400),__return_storage_ptr__,
             (TVector<double> *)&local_38._s_0);
  return __return_storage_ptr__;
}

// operator() @ 14cc2e000

TVector<double> * __thiscall
`UEditMeshPolygonsTool::ComputeUpdate_Gizmo'::__l13::<lambda_2>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2)

{
  double *pdVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  TVector<double> *pTVar5;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40;
  TVector<double> local_28;
  
  lVar2 = *(longlong *)this;
  lVar3 = *(longlong *)
           ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8)
  ;
  pdVar1 = (double *)(lVar3 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_40._s_0.Z = *(double *)(lVar3 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  local_58._s_0.X = *pdVar1 * *(double *)(lVar2 + 0x438);
  local_58._s_0.Z = local_40._s_0.Z * *(double *)(lVar2 + 0x448);
  local_58._s_0.Y = pdVar1[1] * *(double *)(lVar2 + 0x440);
  pTVar5 = UE::Geometry::operator*<double>
                     (&local_28,(TQuaternion<double> *)(lVar2 + 0x400),
                      (TVector<double> *)&local_58._s_0);
  local_40._s_0.X =
       (*(double *)(lVar2 + 0x420) + (pTVar5->field0_0x0)._s_0.X) - *(double *)(lVar2 + 0x450);
  local_40._s_0.Y =
       (*(double *)(lVar2 + 0x428) + (pTVar5->field0_0x0)._s_0.Y) - *(double *)(lVar2 + 0x458);
  local_40._s_0.Z =
       (*(double *)(lVar2 + 0x430) + (pTVar5->field0_0x0)._s_0.Z) - *(double *)(lVar2 + 0x460);
  UE::Geometry::TQuaternion<double>::InverseMultiply
            ((TQuaternion<double> *)(lVar2 + 0x468),(TVector<double> *)&local_58._s_0,
             (TVector<double> *)&local_40._s_0);
  pdVar1 = *(double **)((longlong)this + 8);
  pdVar4 = *(double **)((longlong)this + 0x10);
  local_58._s_0.X = local_58._s_0.X * *pdVar1;
  local_58._s_0.Y = local_58._s_0.Y * pdVar1[1];
  local_58._s_0.Z = local_58._s_0.Z * pdVar1[2];
  pTVar5 = UE::Geometry::operator*<double>
                     (&local_28,(TQuaternion<double> *)(pdVar4 + 3),
                      (TVector<double> *)&local_58._s_0);
  local_40._s_0.X = *pdVar4 + (pTVar5->field0_0x0)._s_0.X;
  local_40._s_0.Y = pdVar4[1] + (pTVar5->field0_0x0)._s_0.Y;
  local_40._s_0.Z = pdVar4[2] + (pTVar5->field0_0x0)._s_0.Z;
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            ((TTransformSRT3<double> *)(lVar2 + 0x400),__return_storage_ptr__,
             (TVector<double> *)&local_40._s_0);
  return __return_storage_ptr__;
}

// operator() @ 14cc2e2f0

void __thiscall `UEditMeshPolygonsTool::ApplyWeldVertices'::__l2::<lambda_3>::operator()(void *this)

{
  atomic<unsigned_char> *paVar1;
  double *pdVar2;
  FMutex FVar3;
  atomic<unsigned_char> aVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  short sVar17;
  short sVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  
  lVar8 = *(longlong *)this;
  dVar5 = *(double *)((longlong)this + 0x10);
  if ((*(longlong *)(lVar8 + 0x290) == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar9 = *(longlong *)this;
  uVar19 = (ulonglong)(*(uint *)((longlong)this + 0xc) & 0x1ff);
  lVar8 = *(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x290) + 0x10) +
           (ulonglong)(*(uint *)((longlong)this + 0xc) >> 9) * 8);
  pdVar2 = (double *)(lVar8 + uVar19 * 0x18);
  dVar12 = *pdVar2;
  dVar15 = pdVar2[1];
  dVar6 = *(double *)(lVar8 + 0x10 + uVar19 * 0x18);
  if ((*(longlong *)(lVar9 + 0x290) == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  dVar13 = __real_3ff0000000000000 - dVar5;
  uVar19 = (ulonglong)(*(uint *)((longlong)this + 8) & 0x1ff);
  lVar8 = *(longlong *)this;
  lVar9 = *(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x290) + 0x10) +
           (ulonglong)(*(uint *)((longlong)this + 8) >> 9) * 8);
  pdVar2 = (double *)(lVar9 + uVar19 * 0x18);
  dVar14 = dVar13 * *pdVar2 + dVar12 * dVar5;
  dVar12 = dVar13 * pdVar2[1] + dVar15 * dVar5;
  uVar20 = SUB84(dVar12,0);
  dVar5 = dVar13 * *(double *)(lVar9 + 0x10 + uVar19 * 0x18) + dVar6 * dVar5;
  if ((*(longlong *)(lVar8 + 0x290) == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar8 = *(longlong *)(lVar8 + 0x290);
  uVar7 = *(uint *)((longlong)this + 0xc);
  sVar17 = _dclass(SUB84(dVar14,0));
  if (((sVar17 < 1) && (sVar18 = _dclass(uVar20), sVar18 < 1)) &&
     (sVar18 = _dclass(SUB84(dVar5,0)), sVar18 < 1)) {
    uVar19 = (ulonglong)(uVar7 & 0x1ff);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
    *(double *)(lVar9 + uVar19 * 0x18) = dVar14;
    *(double *)(lVar9 + 8 + uVar19 * 0x18) = dVar12;
    *(double *)(lVar9 + 0x10 + uVar19 * 0x18) = dVar5;
    if (*(char *)(lVar8 + 0x21c) != '\0') {
      paVar1 = (atomic<unsigned_char> *)(lVar8 + 0x21d);
      LOCK();
      FVar3.State = *paVar1;
      if (FVar3.State == (atomic<unsigned_char>)0x0) {
        *paVar1 = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (FVar3.State != (atomic<unsigned_char>)0x0) {
        UE::FMutex::LockSlow((FMutex *)paVar1);
      }
      *(int *)(lVar8 + 0x220) = *(int *)(lVar8 + 0x220) + 1;
      LOCK();
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned_char>)((char)*paVar1 + -1);
      UNLOCK();
      if (((byte)aVar4 & 2) != 0) {
        UE::FMutex::WakeWaitingThread((FMutex *)paVar1);
      }
    }
  }
  lVar8 = *(longlong *)this;
  if ((*(longlong *)(lVar8 + 0x290) == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar8 = *(longlong *)(lVar8 + 0x290);
  uVar7 = *(uint *)((longlong)this + 8);
  if (((sVar17 < 1) && (sVar17 = _dclass(uVar20), sVar17 < 1)) &&
     (sVar17 = _dclass(SUB84(dVar5,0)), sVar17 < 1)) {
    uVar19 = (ulonglong)(uVar7 & 0x1ff);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
    auVar11._8_4_ = uVar20;
    auVar11._0_8_ = dVar14;
    auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])(lVar9 + uVar19 * 0x18) = auVar11;
    *(double *)(lVar9 + 0x10 + uVar19 * 0x18) = dVar5;
    if (*(char *)(lVar8 + 0x21c) != '\0') {
      paVar1 = (atomic<unsigned_char> *)(lVar8 + 0x21d);
      LOCK();
      FVar3.State = *paVar1;
      if (FVar3.State == (atomic<unsigned_char>)0x0) {
        *paVar1 = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (FVar3.State != (atomic<unsigned_char>)0x0) {
        UE::FMutex::LockSlow((FMutex *)paVar1);
      }
      *(int *)(lVar8 + 0x220) = *(int *)(lVar8 + 0x220) + 1;
      LOCK();
      aVar4 = *paVar1;
      *paVar1 = (atomic<unsigned_char>)((char)*paVar1 + -1);
      UNLOCK();
      if (((byte)aVar4 & 2) != 0) {
        UE::FMutex::WakeWaitingThread((FMutex *)paVar1);
      }
    }
  }
  return;
}

// operator() @ 14cc2eb00

bool __thiscall
`UEditMeshPolygonsTool::Setup'::__l2::<lambda_7>::operator()
          (void *this,FDynamicMesh3 *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(*(longlong *)this + 0x2a0);
  lVar2 = *(longlong *)(*(longlong *)this + 0x2c8);
  uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  if (*(int *)(lVar2 + 0x348) != *(int *)(lVar2 + 0x374)) {
    lVar5 = *(longlong *)(lVar2 + 0x380);
    if (*(longlong *)(lVar2 + 0x380) == 0) {
      lVar5 = lVar2 + 0x378;
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar2 + 0x388) - 1U & uVar3) * 4);
    if (iVar4 != -1) {
      do {
        if (*(uint *)(*(longlong *)(lVar2 + 0x340) + (longlong)iVar4 * 0xc) == uVar3)
        goto LAB_14cc2eb7c;
        iVar4 = *(int *)(*(longlong *)(lVar2 + 0x340) + 4 + (longlong)iVar4 * 0xc);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14cc2eb7c:
  return iVar4 != -1;
}

// ApplyBridgeEdges @ 14cc34a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplyBridgeEdges(UEditMeshPolygonsTool *this)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  FGroupTopology *pFVar4;
  void *pvVar5;
  UEditMeshPolygonsTool *pUVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ForAnyElementType FVar11;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  longlong *plVar13;
  FText *pFVar14;
  FGroupTopologySelection *pFVar15;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar16;
  undefined1 *_Dst;
  ulonglong uVar17;
  uint uVar18;
  ForElementType<FSetElementId> _Src;
  undefined1 *_Src_00;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  undefined4 *puVar21;
  longlong lVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined1 auStackY_688 [32];
  bool local_638 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_630;
  char local_620;
  undefined1 local_61f [7];
  TArray<int,TSizedDefaultAllocator<32>_> local_618;
  ForAnyElementType local_608;
  undefined8 local_600;
  int local_5f8 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_5f0;
  TArray<int,TSizedDefaultAllocator<32>_> local_5e0;
  uint local_5d0;
  UEditMeshPolygonsTool *local_5c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_5c0;
  undefined4 local_5b0 [2];
  FDynamicMesh3 *local_5a8;
  undefined4 *local_5a0;
  ulonglong local_598;
  FEdgeSpan local_588;
  FEdgeSpan local_548;
  FEdgeSpan local_508;
  FEdgeSpan local_4c8;
  longlong local_488;
  int local_480 [2];
  longlong local_478;
  FText local_470;
  FText local_460;
  FDynamicMesh3 **local_450;
  UEditMeshPolygonsTool *local_448;
  FText *local_440;
  undefined4 **local_438;
  TArray<int,TSizedDefaultAllocator<32>_> local_428;
  FText local_418;
  undefined1 local_408 [32];
  undefined1 *local_3e8;
  int local_3e0;
  uint local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined1 local_3d0 [8];
  ForAnyElementType local_3c8;
  uint local_3c0;
  undefined1 local_3b8 [160];
  undefined1 local_318 [40];
  int local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined1 local_2e0 [8];
  ForElementType<FSetElementId> local_2d8;
  uint local_2d0;
  FGroupTopologySelection local_2c8;
  FGroupTopologySelection local_1d8;
  FDynamicMeshChangeTracker local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_688;
  local_5c8 = this;
  FText::AsLocalizable_Advanced_LocText
            (&local_460,L"UEditMeshPolygonsTool",L"OnEdgeBridgeFailed",
             L"Cannot Bridge current selection");
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
            ((FGroupTopologySelection *)local_3b8,
             (FGroupTopologySelection *)&((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_)
  ;
  iVar9 = -1;
  local_3c8.Data = (FScriptContainerElement *)0x0;
  local_408._0_8_ = (FScriptContainerElement *)0x0;
  local_408._8_8_ = 0;
  local_3e8 = (undefined1 *)0x0;
  local_3e0 = 0;
  local_3dc = 0x80;
  iVar8 = -1;
  local_3d8 = 0xffffffff;
  local_3d4 = 0;
  local_3c0 = 0;
  if (local_3b8._88_4_ == local_3b8._132_4_) {
    if (1 < local_2d0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_3c8,0,local_2d0,4)
      ;
    }
    _Src = (ForElementType<FSetElementId>)local_2e0;
    if (local_2d8 != (ForElementType<FSetElementId>)0x0) {
      _Src = local_2d8;
    }
    FVar11.Data = (FScriptContainerElement *)local_3d0;
    if ((ForElementType<FSetElementId>)local_3c8.Data != (ForElementType<FSetElementId>)0x0) {
      FVar11.Data = local_3c8.Data;
    }
    if (local_2d0 != 0) {
      memcpy(FVar11.Data,(void *)_Src,(longlong)(int)local_2d0 << 2);
    }
    local_3c0 = local_2d0;
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_408,local_318._8_4_);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_318._8_4_,(ForAnyElementType *)local_408,(int *)(local_408 + 8),
               (int *)(local_408 + 0xc));
    local_3d8 = local_2e8;
    local_3d4 = local_2e4;
    uVar28 = local_2f0 + 0x1fU & 0xffffffe0;
    local_3e0 = 0;
    if (((int)local_3dc < (int)uVar28) || (0x80 < (int)local_3dc)) {
      local_3dc = 0x80;
      if (0x80 < (int)uVar28) {
        local_3dc = uVar28;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_408 + 0x10),0);
    }
    local_3e0 = local_2f0;
    if (local_2f0 != 0) {
      _Src_00 = local_318 + 0x10;
      if ((undefined1 *)local_318._32_8_ != (undefined1 *)0x0) {
        _Src_00 = (undefined1 *)local_318._32_8_;
      }
      _Dst = local_408 + 0x10;
      if (local_3e8 != (undefined1 *)0x0) {
        _Dst = local_3e8;
      }
      memcpy(_Dst,_Src_00,(ulonglong)(local_2f0 + 0x1fU >> 5) << 2);
    }
    if (local_318._8_4_ != 0) {
      memcpy((void *)local_408._0_8_,(void *)local_318._0_8_,(longlong)(int)local_318._8_4_ * 0xc);
    }
  }
  else {
    EditMeshPolygonsToolLocals::ConvertCornerSelectionToGroupEdgeSelection
              ((this->Topology).Object,
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(local_3b8 + 0x50),
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_408);
  }
  uVar17 = 0;
  local_5a8 = (this->CurrentMesh).Object;
  local_5f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5f0.ArrayNum = 0;
  local_5f0.ArrayMax = 0;
  local_5c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5c0.ArrayNum = 0;
  local_5c0.ArrayMax = 0;
  local_638[0] = false;
  pTVar12 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_408,&local_428
                      );
  bVar7 = EditMeshPolygonsToolLocals::LinkBoundaryGroupEdges
                    ((this->Topology).Object,local_5a8,pTVar12,&local_5f0,&local_5c0,local_638);
  if (local_428.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_428.AllocatorInstance.Data);
  }
  if (!bVar7) {
    plVar13 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar3 = *(code **)(*plVar13 + 0x360);
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_418,L"UEditMeshPolygonsTool",L"OnEdgeBridgeFailedInvalidSelection",
                         L"Cannot bridge current selection, selection could not be partitioned into a single hole or two non-loop open-boundary sequences."
                        );
    (*pcVar3)(plVar13,pFVar14,3);
    if (local_418.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_418.TextData.Reference + 0x10))();
    }
    goto LAB_14cc36495;
  }
  local_450 = &local_5a8;
  local_440 = &local_460;
  local_438 = &local_5a0;
  local_5a0 = (undefined4 *)0x0;
  local_598 = 0;
  local_448 = this;
  UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_e8,local_5a8);
  UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_e8);
  if (local_5c0.ArrayNum == 0) {
    local_630.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_630.ArrayNum = 0;
    local_630.ArrayMax = 0;
    uVar19 = uVar17;
    uVar29 = uVar17;
    if (0 < local_5f0.ArrayNum) {
      do {
        uVar28 = local_5f0.ArrayNum;
        if ((this->Topology).Object == (FGroupTopology *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar28 = local_5f0.ArrayNum;
        }
        pFVar4 = (this->Topology).Object;
        uVar27 = (uint)uVar19;
        uVar18 = 0;
        if ((int)uVar27 < (int)uVar28) {
          uVar18 = ~uVar27 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar28 = *(uint *)(local_5f0.AllocatorInstance.Data + uVar29);
        uVar18 = 0;
        if ((int)uVar28 < (pFVar4->Edges).ArrayNum) {
          uVar18 = ~uVar28 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar20 = (pFVar4->Edges).AllocatorInstance.Data;
        local_508.Mesh = *(FDynamicMesh3 **)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 8);
        local_508.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_508.Vertices.ArrayNum = *(int *)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x18);
        lVar22 = (longlong)local_508.Vertices.ArrayNum;
        pvVar5 = *(void **)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x10);
        if (local_508.Vertices.ArrayNum == 0) {
          local_508.Vertices.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_508.Vertices.ArrayNum,0,&local_508.Vertices.AllocatorInstance,
                     local_508.Vertices.ArrayNum,&local_508.Vertices.ArrayMax);
          memcpy(local_508.Vertices.AllocatorInstance.Data,pvVar5,lVar22 << 2);
        }
        local_508.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_508.Edges.ArrayNum = *(int *)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x28);
        lVar22 = (longlong)local_508.Edges.ArrayNum;
        pvVar5 = *(void **)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x20);
        if (local_508.Edges.ArrayNum == 0) {
          local_508.Edges.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_508.Edges.ArrayNum,0,&local_508.Edges.AllocatorInstance,
                     local_508.Edges.ArrayNum,&local_508.Edges.ArrayMax);
          memcpy(local_508.Edges.AllocatorInstance.Data,pvVar5,lVar22 << 2);
        }
        local_508.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_508.BowtieVertices.ArrayNum = *(int *)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x38);
        lVar22 = (longlong)local_508.BowtieVertices.ArrayNum;
        pvVar5 = *(void **)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x30);
        if (local_508.BowtieVertices.ArrayNum == 0) {
          local_508.BowtieVertices.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_508.BowtieVertices.ArrayNum,0,
                     &local_508.BowtieVertices.AllocatorInstance,local_508.BowtieVertices.ArrayNum,
                     &local_508.BowtieVertices.ArrayMax);
          memcpy(local_508.BowtieVertices.AllocatorInstance.Data,pvVar5,lVar22 << 2);
        }
        local_508.bBowtiesCalculated = *(bool *)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x40);
        UE::Geometry::FEdgeSpan::SetCorrectOrientation(&local_508);
        uVar17 = local_630._8_8_ & 0xffffffff;
        if (0 < local_630.ArrayNum) {
          if (local_508.Vertices.ArrayNum < 1) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar17 = local_630._8_8_ & 0xffffffff;
          }
          FVar11.Data = local_508.Vertices.AllocatorInstance.Data;
          uVar18 = (int)uVar17 - 1;
          uVar28 = 0;
          if ((int)uVar18 < (int)uVar17) {
            uVar28 = ~uVar18 >> 0x1f;
          }
          if (uVar28 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar17 = local_630._8_8_ & 0xffffffff;
          }
          iVar9 = (int)uVar17;
          if (*(int *)(local_630.AllocatorInstance.Data + (longlong)(iVar9 + -1) * 4) ==
              *(int *)FVar11.Data) {
            if (iVar9 < 1) {
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              iVar9 = local_630.ArrayNum;
            }
            iVar8 = (iVar9 - (iVar9 + -1)) + -1;
            if (iVar8 != 0) {
              memmove(local_630.AllocatorInstance.Data + (longlong)(iVar9 + -1) * 4,
                      local_630.AllocatorInstance.Data + (longlong)(iVar9 + -1) * 4 + 4,
                      (longlong)iVar8 << 2);
              iVar9 = local_630.ArrayNum;
            }
            local_630.ArrayNum = iVar9 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,&local_630.AllocatorInstance,iVar9 + -1,&local_630.ArrayMax);
            uVar17 = local_630._8_8_ & 0xffffffff;
          }
        }
        lVar22 = (longlong)local_508.Vertices.ArrayNum;
        if (local_508.Vertices.ArrayNum != 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,local_508.Vertices.ArrayNum,&local_630.AllocatorInstance,
                             &local_630.ArrayNum,&local_630.ArrayMax);
          memcpy(local_630.AllocatorInstance.Data + (longlong)iVar9 * 4,
                 local_508.Vertices.AllocatorInstance.Data,lVar22 << 2);
          uVar17 = local_630._8_8_ & 0xffffffff;
        }
        if (local_508.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_508.BowtieVertices.AllocatorInstance.Data);
          uVar17 = local_630._8_8_ & 0xffffffff;
        }
        if (local_508.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_508.Edges.AllocatorInstance.Data);
          uVar17 = local_630._8_8_ & 0xffffffff;
        }
        if (local_508.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_508.Vertices.AllocatorInstance.Data);
          uVar17 = local_630._8_8_ & 0xffffffff;
        }
        uVar19 = (ulonglong)(uVar27 + 1);
        uVar29 = uVar29 + 4;
      } while ((int)(uVar27 + 1) < local_5f0.ArrayNum);
    }
    FVar11.Data = local_630.AllocatorInstance.Data;
    iVar9 = (int)uVar17;
    if (0 < iVar9) {
      uVar28 = 0;
      if ((int)(iVar9 - 1U) < iVar9) {
        uVar28 = ~(iVar9 - 1U) >> 0x1f;
      }
      if (uVar28 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = local_630.ArrayNum;
      }
      if (*(int *)(local_630.AllocatorInstance.Data + (longlong)(iVar9 + -1) * 4) ==
          *(int *)FVar11.Data) {
        if (iVar9 < 1) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar9 = local_630.ArrayNum;
        }
        iVar8 = (iVar9 - (iVar9 + -1)) + -1;
        if (iVar8 != 0) {
          memmove(local_630.AllocatorInstance.Data + (longlong)(iVar9 + -1) * 4,
                  local_630.AllocatorInstance.Data + (longlong)(iVar9 + -1) * 4 + 4,
                  (longlong)iVar8 << 2);
          iVar9 = local_630.ArrayNum;
        }
        local_630.ArrayNum = iVar9 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&local_630.AllocatorInstance,iVar9 + -1,&local_630.ArrayMax);
        `UEditMeshPolygonsTool::ApplyBridgeEdges'::__l2::<lambda_1>::operator()
                  (&local_450,&local_630);
        if (local_630.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_630.AllocatorInstance.Data);
        }
        goto LAB_14cc361e0;
      }
    }
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1092627319186519119>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\EditMeshPolygonsTool.cpp"
                       ,0xbb1,"LoopVertices.Num() > 0 && LoopVertices.Last() == LoopVertices[0]");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar13 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*plVar13 + 0x360))(plVar13,&local_460,3);
    if (local_630.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_630.AllocatorInstance.Data);
    }
  }
  else {
    pTVar12 = &local_5f0;
    if (local_638[0] == false) {
      pTVar12 = &local_5c0;
    }
    pFVar20 = (pTVar12->AllocatorInstance).Data;
    iVar10 = pTVar12->ArrayNum / 2;
    if (0 < iVar10) {
      uVar19 = uVar17;
      pFVar24 = pFVar20 + (longlong)(pTVar12->ArrayNum + -1) * 4;
      do {
        uVar2 = *(undefined4 *)(pFVar20 + uVar19 * 4);
        *(undefined4 *)(pFVar20 + uVar19 * 4) = *(undefined4 *)pFVar24;
        uVar19 = uVar19 + 1;
        *(undefined4 *)pFVar24 = uVar2;
        pFVar24 = pFVar24 + -4;
      } while ((longlong)uVar19 < (longlong)iVar10);
    }
    local_5d0 = local_5c0.ArrayNum;
    if (local_5f0.ArrayNum < local_5c0.ArrayNum) {
      local_5d0 = local_5f0.ArrayNum;
    }
    local_478 = (longlong)(int)local_5d0;
    if (0 < (int)local_5d0) {
      local_488 = 0;
      do {
        lVar22 = local_488;
        pUVar6 = local_5c8;
        uVar18 = 0;
        uVar28 = local_5f0.ArrayNum;
        if ((local_5c8->Topology).Object == (FGroupTopology *)0x0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar7) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar28 = local_5f0.ArrayNum;
        }
        pFVar4 = (pUVar6->Topology).Object;
        uVar26 = (uint)uVar17;
        uVar25 = 0;
        uVar27 = uVar25;
        if ((int)uVar26 < (int)uVar28) {
          uVar27 = ~uVar26 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar28 = *(uint *)(local_5f0.AllocatorInstance.Data + lVar22 * 4);
        uVar27 = uVar25;
        if ((int)uVar28 < (pFVar4->Edges).ArrayNum) {
          uVar27 = ~uVar28 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar20 = (pFVar4->Edges).AllocatorInstance.Data;
        local_548.Mesh = *(FDynamicMesh3 **)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 8);
        local_548.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_548.Vertices.ArrayNum = *(int *)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x18);
        lVar22 = (longlong)local_548.Vertices.ArrayNum;
        pvVar5 = *(void **)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x10);
        if (local_548.Vertices.ArrayNum == 0) {
          local_548.Vertices.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_548.Vertices.ArrayNum,0,&local_548.Vertices.AllocatorInstance,
                     local_548.Vertices.ArrayNum,&local_548.Vertices.ArrayMax);
          memcpy(local_548.Vertices.AllocatorInstance.Data,pvVar5,lVar22 << 2);
        }
        local_548.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_548.Edges.ArrayNum = *(int *)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x28);
        lVar22 = (longlong)local_548.Edges.ArrayNum;
        pvVar5 = *(void **)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x20);
        if (local_548.Edges.ArrayNum == 0) {
          local_548.Edges.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_548.Edges.ArrayNum,0,&local_548.Edges.AllocatorInstance,
                     local_548.Edges.ArrayNum,&local_548.Edges.ArrayMax);
          memcpy(local_548.Edges.AllocatorInstance.Data,pvVar5,lVar22 << 2);
        }
        local_548.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_548.BowtieVertices.ArrayNum = *(int *)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x38);
        lVar22 = (longlong)local_548.BowtieVertices.ArrayNum;
        pvVar5 = *(void **)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x30);
        if (local_548.BowtieVertices.ArrayNum == 0) {
          local_548.BowtieVertices.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_548.BowtieVertices.ArrayNum,0,
                     &local_548.BowtieVertices.AllocatorInstance,local_548.BowtieVertices.ArrayNum,
                     &local_548.BowtieVertices.ArrayMax);
          memcpy(local_548.BowtieVertices.AllocatorInstance.Data,pvVar5,lVar22 << 2);
        }
        local_548.bBowtiesCalculated = *(bool *)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x40);
        UE::Geometry::FEdgeSpan::SetCorrectOrientation(&local_548);
        if (((pUVar6->Topology).Object == (FGroupTopology *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar4 = (pUVar6->Topology).Object;
        uVar28 = uVar25;
        if ((int)uVar26 < local_5c0.ArrayNum) {
          uVar28 = ~uVar26 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar22 = local_488;
        uVar28 = *(uint *)(local_5c0.AllocatorInstance.Data + local_488 * 4);
        uVar27 = uVar25;
        if ((int)uVar28 < (pFVar4->Edges).ArrayNum) {
          uVar27 = ~uVar28 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar20 = (pFVar4->Edges).AllocatorInstance.Data;
        local_588.Mesh = *(FDynamicMesh3 **)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 8);
        local_588.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_588.Vertices.ArrayNum = *(int *)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x18);
        lVar23 = (longlong)local_588.Vertices.ArrayNum;
        pvVar5 = *(void **)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x10);
        if (local_588.Vertices.ArrayNum == 0) {
          local_588.Vertices.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_588.Vertices.ArrayNum,0,&local_588.Vertices.AllocatorInstance,
                     local_588.Vertices.ArrayNum,&local_588.Vertices.ArrayMax);
          memcpy(local_588.Vertices.AllocatorInstance.Data,pvVar5,lVar23 << 2);
        }
        local_588.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_588.Edges.ArrayNum = *(int *)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x28);
        lVar23 = (longlong)local_588.Edges.ArrayNum;
        pvVar5 = *(void **)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x20);
        if (local_588.Edges.ArrayNum == 0) {
          local_588.Edges.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_588.Edges.ArrayNum,0,&local_588.Edges.AllocatorInstance,
                     local_588.Edges.ArrayNum,&local_588.Edges.ArrayMax);
          memcpy(local_588.Edges.AllocatorInstance.Data,pvVar5,lVar23 << 2);
        }
        local_588.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_588.BowtieVertices.ArrayNum = *(int *)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x38);
        lVar23 = (longlong)local_588.BowtieVertices.ArrayNum;
        pvVar5 = *(void **)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x30);
        if (local_588.BowtieVertices.ArrayNum == 0) {
          local_588.BowtieVertices.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_588.BowtieVertices.ArrayNum,0,
                     &local_588.BowtieVertices.AllocatorInstance,local_588.BowtieVertices.ArrayNum,
                     &local_588.BowtieVertices.ArrayMax);
          memcpy(local_588.BowtieVertices.AllocatorInstance.Data,pvVar5,lVar23 << 2);
        }
        local_588.bBowtiesCalculated = *(bool *)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x40);
        UE::Geometry::FEdgeSpan::SetCorrectOrientation(&local_588);
        lVar23 = (longlong)local_548.Vertices.ArrayNum;
        local_5e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_5e0.ArrayNum = 0;
        local_5e0.ArrayMax = 0;
        if (local_548.Vertices.ArrayNum != 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,local_548.Vertices.ArrayNum,&local_5e0.AllocatorInstance,
                             &local_5e0.ArrayNum,&local_5e0.ArrayMax);
          memcpy(local_5e0.AllocatorInstance.Data + (longlong)iVar9 * 4,
                 local_548.Vertices.AllocatorInstance.Data,lVar23 << 2);
        }
        lVar23 = (longlong)local_588.Vertices.ArrayNum;
        if (local_588.Vertices.ArrayNum != 0) {
          iVar9 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,local_588.Vertices.ArrayNum,&local_5e0.AllocatorInstance,
                             &local_5e0.ArrayNum,&local_5e0.ArrayMax);
          memcpy(local_5e0.AllocatorInstance.Data + (longlong)iVar9 * 4,
                 local_588.Vertices.AllocatorInstance.Data,lVar23 << 2);
        }
        if (local_638[0] == false) {
          uVar18 = local_548.Vertices.ArrayNum - 1;
        }
        if ((int)uVar18 < local_548.Vertices.ArrayNum) {
          uVar25 = ~uVar18 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = *(int *)(local_548.Vertices.AllocatorInstance.Data + (longlong)(int)uVar18 * 4);
        if (local_638[0] == false) {
          uVar28 = 0;
        }
        else {
          uVar28 = local_588.Vertices.ArrayNum - 1;
        }
        uVar18 = 0;
        if ((int)uVar28 < local_588.Vertices.ArrayNum) {
          uVar18 = ~uVar28 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar8 = *(int *)(local_588.Vertices.AllocatorInstance.Data + (longlong)(int)uVar28 * 4);
        `UEditMeshPolygonsTool::ApplyBridgeEdges'::__l2::<lambda_1>::operator()
                  (&local_450,&local_5e0);
        if (local_5e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_5e0.AllocatorInstance.Data);
        }
        if (local_588.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_588.BowtieVertices.AllocatorInstance.Data);
        }
        if (local_588.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_588.Edges.AllocatorInstance.Data);
        }
        if (local_588.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_588.Vertices.AllocatorInstance.Data);
        }
        if (local_548.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_548.BowtieVertices.AllocatorInstance.Data);
        }
        if (local_548.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_548.Edges.AllocatorInstance.Data);
        }
        if (local_548.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_548.Vertices.AllocatorInstance.Data);
        }
        local_488 = lVar22 + 1;
        uVar17 = (ulonglong)(uVar26 + 1);
      } while (local_488 < local_478);
    }
    this = local_5c8;
    if (local_5f0.ArrayNum != local_5c0.ArrayNum) {
      local_608.Data = (FScriptContainerElement *)0x0;
      local_620 = local_5c0.ArrayNum <= local_5f0.ArrayNum;
      local_600 = 0;
      pTVar12 = &local_5f0;
      if (local_5f0.ArrayNum < local_5c0.ArrayNum) {
        pTVar12 = &local_5c0;
      }
      iVar10 = pTVar12->ArrayNum;
      if ((int)local_5d0 < iVar10) {
        lVar22 = local_478 * 4;
        uVar28 = local_5d0;
        do {
          uVar18 = 0;
          if ((int)uVar28 < iVar10) {
            uVar18 = ~uVar28 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar20 = (pTVar12->AllocatorInstance).Data + lVar22;
          if (((local_608.Data <= pFVar20) &&
              (pFVar20 < local_608.Data + (longlong)local_600._4_4_ * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((int)local_600 == local_600._4_4_) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_608,(int *)((longlong)&local_600 + 4));
            local_600 = CONCAT44(local_600._4_4_,iVar10);
          }
          lVar23 = (longlong)(int)local_600;
          uVar28 = uVar28 + 1;
          lVar22 = lVar22 + 4;
          local_600 = CONCAT44(local_600._4_4_,(int)local_600 + 1);
          *(undefined4 *)(local_608.Data + lVar23 * 4) = *(undefined4 *)pFVar20;
          iVar10 = pTVar12->ArrayNum;
        } while ((int)uVar28 < iVar10);
      }
      pUVar6 = local_5c8;
      uVar17 = 0;
      if (((bool)local_620 == local_638[0]) && (0 < (int)local_600 / 2)) {
        uVar19 = uVar17;
        pFVar20 = local_608.Data + (longlong)((int)local_600 + -1) * 4;
        do {
          uVar2 = *(undefined4 *)(local_608.Data + uVar19 * 4);
          *(undefined4 *)(local_608.Data + uVar19 * 4) = *(undefined4 *)pFVar20;
          uVar19 = uVar19 + 1;
          *(undefined4 *)pFVar20 = uVar2;
          pFVar20 = pFVar20 + -4;
        } while ((longlong)uVar19 < (longlong)((int)local_600 / 2));
      }
      local_5f8[0] = iVar9;
      if (local_620 != '\0') {
        local_5f8[0] = iVar8;
      }
      if (local_5f8[0] == -1) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1092627319186519063>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\EditMeshPolygonsTool.cpp"
                           ,0xbe9,"OtherLastVid != IndexConstants::InvalidID");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        local_618.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_618.ArrayNum = 0;
        local_618.ArrayMax = 0;
        uVar19 = uVar17;
        if ((int)local_600 < 1) {
LAB_14cc36112:
          if (((FScriptContainerElement *)local_5f8 <
               local_618.AllocatorInstance.Data + (longlong)local_618.ArrayMax * 4) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        else {
          do {
            if (((pUVar6->Topology).Object == (FGroupTopology *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar4 = (pUVar6->Topology).Object;
            uVar18 = (uint)uVar17;
            uVar28 = 0;
            if ((int)uVar18 < (int)local_600) {
              uVar28 = ~uVar18 >> 0x1f;
            }
            if ((uVar28 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar28 = *(uint *)(local_608.Data + uVar19);
            uVar27 = 0;
            if ((int)uVar28 < (pFVar4->Edges).ArrayNum) {
              uVar27 = ~uVar28 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar20 = (pFVar4->Edges).AllocatorInstance.Data;
            local_4c8.Mesh = *(FDynamicMesh3 **)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 8);
            local_4c8.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_4c8.Vertices.ArrayNum = *(int *)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x18);
            lVar22 = (longlong)local_4c8.Vertices.ArrayNum;
            pvVar5 = *(void **)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x10);
            if (local_4c8.Vertices.ArrayNum == 0) {
              local_4c8.Vertices.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_4c8.Vertices.ArrayNum,0,&local_4c8.Vertices.AllocatorInstance,
                         local_4c8.Vertices.ArrayNum,&local_4c8.Vertices.ArrayMax);
              memcpy(local_4c8.Vertices.AllocatorInstance.Data,pvVar5,lVar22 << 2);
            }
            local_4c8.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_4c8.Edges.ArrayNum = *(int *)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x28);
            lVar22 = (longlong)local_4c8.Edges.ArrayNum;
            pvVar5 = *(void **)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x20);
            if (local_4c8.Edges.ArrayNum == 0) {
              local_4c8.Edges.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_4c8.Edges.ArrayNum,0,&local_4c8.Edges.AllocatorInstance,
                         local_4c8.Edges.ArrayNum,&local_4c8.Edges.ArrayMax);
              memcpy(local_4c8.Edges.AllocatorInstance.Data,pvVar5,lVar22 << 2);
            }
            local_4c8.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_4c8.BowtieVertices.ArrayNum =
                 *(int *)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x38);
            lVar22 = (longlong)local_4c8.BowtieVertices.ArrayNum;
            pvVar5 = *(void **)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x30);
            if (local_4c8.BowtieVertices.ArrayNum == 0) {
              local_4c8.BowtieVertices.ArrayMax = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_4c8.BowtieVertices.ArrayNum,0,
                         &local_4c8.BowtieVertices.AllocatorInstance,
                         local_4c8.BowtieVertices.ArrayNum,&local_4c8.BowtieVertices.ArrayMax);
              memcpy(local_4c8.BowtieVertices.AllocatorInstance.Data,pvVar5,lVar22 << 2);
            }
            local_4c8.bBowtiesCalculated = *(bool *)(pFVar20 + (longlong)(int)uVar28 * 0x50 + 0x40);
            UE::Geometry::FEdgeSpan::SetCorrectOrientation(&local_4c8);
            if (0 < local_618.ArrayNum) {
              uVar28 = 0;
              if ((int)(local_618.ArrayNum - 1U) < local_618.ArrayNum) {
                uVar28 = ~(local_618.ArrayNum - 1U) >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              FVar11.Data = local_618.AllocatorInstance.Data;
              lVar22 = (longlong)local_618.ArrayNum;
              if ((local_4c8.Vertices.ArrayNum < 1) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              if (*(int *)(FVar11.Data + lVar22 * 4 + -4) ==
                  *(int *)local_4c8.Vertices.AllocatorInstance.Data) {
                if ((local_618.ArrayNum < 1) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar7)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                iVar9 = (local_618.ArrayNum - (local_618.ArrayNum + -1)) + -1;
                if (iVar9 != 0) {
                  memmove(local_618.AllocatorInstance.Data + (longlong)(local_618.ArrayNum + -1) * 4
                          ,local_618.AllocatorInstance.Data +
                           (longlong)(local_618.ArrayNum + -1) * 4 + 4,(longlong)iVar9 << 2);
                }
                local_618.ArrayNum = local_618.ArrayNum + -1;
                UE::Core::Private::
                ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,&local_618.AllocatorInstance,local_618.ArrayNum,&local_618.ArrayMax);
              }
              else {
                bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_1092627319186519056>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\EditMeshPolygonsTool.cpp"
                                   ,0xbf0,"LoopVertices.Last() == Span.Vertices[0]");
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
            }
            lVar22 = (longlong)local_4c8.Vertices.ArrayNum;
            if (local_4c8.Vertices.ArrayNum != 0) {
              iVar9 = UE::Core::Private::
                      ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,local_4c8.Vertices.ArrayNum,&local_618.AllocatorInstance,
                                 &local_618.ArrayNum,&local_618.ArrayMax);
              memcpy(local_618.AllocatorInstance.Data + (longlong)iVar9 * 4,
                     local_4c8.Vertices.AllocatorInstance.Data,lVar22 << 2);
            }
            if (local_4c8.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4c8.BowtieVertices.AllocatorInstance.Data);
            }
            if (local_4c8.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4c8.Edges.AllocatorInstance.Data);
            }
            if (local_4c8.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4c8.Vertices.AllocatorInstance.Data);
            }
            uVar17 = (ulonglong)(uVar18 + 1);
            uVar19 = uVar19 + 4;
          } while ((int)(uVar18 + 1) < (int)local_600);
          if (local_618.AllocatorInstance.Data <= (FScriptContainerElement *)local_5f8)
          goto LAB_14cc36112;
        }
        if (local_618.ArrayNum == local_618.ArrayMax) {
          local_618.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,&local_618.AllocatorInstance,&local_618.ArrayMax);
        }
        lVar22 = (longlong)local_618.ArrayNum;
        local_618.ArrayNum = local_618.ArrayNum + 1;
        *(int *)(local_618.AllocatorInstance.Data + lVar22 * 4) = local_5f8[0];
        `UEditMeshPolygonsTool::ApplyBridgeEdges'::__l2::<lambda_1>::operator()
                  (&local_450,&local_618);
        if (local_618.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_618.AllocatorInstance.Data);
        }
      }
      this = local_5c8;
      if (local_608.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_608.Data);
        this = local_5c8;
      }
    }
LAB_14cc361e0:
    FText::AsLocalizable_Advanced_LocText
              (&local_470,L"UEditMeshPolygonsTool",L"PolyMeshBridgeEdgeChange",L"Bridge Edge");
    lVar22 = (**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar22 + 0x28) + 0x10))(lVar22 + 0x28,&local_470);
    pFVar15 = UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_1d8);
    TVar16 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_e8);
    EmitCurrentMeshChangeAndUpdate(this,&local_470,TVar16,pFVar15);
    local_1d8.SelectedEdgeIDs.HashSize = 0;
    if (local_1d8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d8.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1d8.SelectedEdgeIDs.Elements);
    local_1d8.SelectedCornerIDs.HashSize = 0;
    if (local_1d8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d8.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1d8.SelectedCornerIDs.Elements);
    local_1d8.SelectedGroupIDs.HashSize = 0;
    if (local_1d8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d8.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_1d8);
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_2c8);
    iVar9 = (int)local_598;
    uVar17 = (ulonglong)(int)local_598;
    puVar1 = local_5a0 + uVar17;
    puVar21 = local_5a0;
    while( true ) {
      if ((int)uVar17 != iVar9) {
        local_61f[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_61f);
      }
      if (puVar21 == puVar1) break;
      uVar2 = *puVar21;
      if (((this->Topology).Object == (FGroupTopology *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar4 = (this->Topology).Object;
      local_5b0[0] = (**(code **)(pFVar4->_padding_ + 0x18))(pFVar4,uVar2);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                (&local_2c8.SelectedGroupIDs,local_480,(bool *)local_5b0);
      uVar17 = local_598 & 0xffffffff;
      puVar21 = puVar21 + 1;
    }
    if (((local_2c8.SelectedCornerIDs.Elements._8_4_ == local_2c8.SelectedCornerIDs.Elements._52_4_)
        && (local_2c8.SelectedEdgeIDs.Elements._8_4_ == local_2c8.SelectedEdgeIDs.Elements._52_4_))
       && (local_2c8.SelectedGroupIDs.Elements._8_4_ == local_2c8.SelectedGroupIDs.Elements._52_4_))
    {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1092627319186519032>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\EditMeshPolygonsTool.cpp"
                         ,0xc08,"!NewSelection.IsEmpty()");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      UMeshTopologySelectionMechanic::SetSelection
                ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr,
                 &local_2c8,true);
    }
    lVar22 = (**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar22 + 0x28) + 0x18))(lVar22 + 0x28);
    local_2c8.SelectedEdgeIDs.HashSize = 0;
    if (local_2c8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2c8.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2c8.SelectedEdgeIDs.Elements);
    local_2c8.SelectedCornerIDs.HashSize = 0;
    if (local_2c8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2c8.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2c8.SelectedCornerIDs.Elements);
    local_2c8.SelectedGroupIDs.HashSize = 0;
    if (local_2c8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2c8.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_2c8);
    if (local_470.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_470.TextData.Reference + 0x10))();
    }
  }
  UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_e8);
  if (local_5a0 != (undefined4 *)0x0) {
    FMemory::Free(local_5a0);
  }
LAB_14cc36495:
  if (local_5c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c0.AllocatorInstance.Data);
  }
  if (local_5f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5f0.AllocatorInstance.Data);
  }
  local_3c0 = 0;
  if ((ForElementType<FSetElementId>)local_3c8.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_3c8.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_408);
  local_2d0 = 0;
  if (local_2d8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2d8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_318);
  local_3b8._152_4_ = 0;
  if ((ForElementType<FSetElementId>)local_3b8._144_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3b8._144_8_);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_3b8 + 0x50));
  local_3b8._72_4_ = 0;
  if ((ForElementType<FSetElementId>)local_3b8._64_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3b8._64_8_);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_3b8);
  if (local_460.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_460.TextData.Reference + 0x10))();
  }
  return;
}

// ApplyChange @ 14cc37570

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
UEditMeshPolygonsTool::ApplyChange
          (UEditMeshPolygonsTool *this,FMeshVertexChange *param_1,bool param_2)

{
  longlong lVar1;
  FDynamicMesh3 *this_00;
  UMeshTopologySelectionMechanic *this_01;
  code *pcVar2;
  bool bVar3;
  FDynamicMesh3 *pFVar4;
  undefined7 in_register_00000081;
  
  lVar1 = *(longlong *)(this->_padding_ + 0x68);
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))
            (lVar1 + 0x28,param_1,CONCAT71(in_register_00000081,param_2));
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (FDynamicMesh3 *)this->_padding_;
  pFVar4 = UPreviewMesh::GetMesh(*(UPreviewMesh **)(this->_padding_ + 0x68));
  UE::Geometry::FDynamicMesh3::Copy(this_00,pFVar4,true,true,true,true);
  this_01 = (UMeshTopologySelectionMechanic *)(this->EditActions).field0_0x0.DebugPtr;
  this->field_0x3a9 = 1;
  UMeshTopologySelectionMechanic::NotifyMeshChanged(this_01,false);
  return;
}

// ApplyCollapseEdge @ 14cc37620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall UEditMeshPolygonsTool::ApplyCollapseEdge(UEditMeshPolygonsTool *this)

{
  FDynamicMesh3 *pFVar1;
  code *pcVar2;
  FGroupTopology *this_00;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  FText *pFVar8;
  longlong lVar9;
  ForAnyElementType _Dst;
  FGroup *pFVar10;
  byte bVar11;
  undefined1 *_Dst_00;
  ForElementType<FSetElementId> _Src;
  undefined1 *_Src_00;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uint *puVar17;
  undefined1 auStackY_368 [32];
  undefined1 local_338;
  undefined1 local_337;
  undefined1 local_336 [2];
  uint local_334;
  uint local_330 [2];
  uint local_328;
  int local_324;
  int local_320;
  int local_31c;
  FScriptContainerElement *local_318;
  UEditMeshPolygonsTool *local_310;
  longlong *local_308;
  uint uStack_300;
  uint uStack_2fc;
  TBitArray<FDefaultBitArrayAllocator> *local_2f8;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  uint local_2e8;
  undefined4 uStack_2e4;
  int iStack_2e0;
  undefined4 uStack_2dc;
  longlong *local_2d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d0;
  undefined8 uStack_2b0;
  FText local_2a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_298;
  undefined4 local_22c;
  undefined1 local_228 [32];
  undefined1 *local_208;
  undefined4 local_200;
  uint local_1fc;
  undefined4 local_1f8;
  int local_1f4;
  FScriptContainerElement local_1f0 [8];
  ForAnyElementType local_1e8;
  uint local_1e0;
  undefined1 local_1d8 [32];
  uint *local_1b8;
  uint local_1b0;
  int local_1a4;
  ForElementType<FSetElementId> local_198;
  int local_190;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_188;
  void *local_138;
  int local_130;
  undefined1 local_128 [16];
  undefined1 *local_118;
  int local_110;
  undefined4 local_108;
  int local_104;
  undefined1 local_100 [8];
  ForElementType<FSetElementId> local_f8;
  uint local_f0;
  FDynamicMeshChangeTracker local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_368;
  pFVar1 = (this->CurrentMesh).Object;
  local_310 = this;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
            ((FGroupTopologySelection *)local_1d8,
             (FGroupTopologySelection *)&((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_)
  ;
  if (((local_188.Elements._8_4_ == local_188.Elements._52_4_) && (local_130 == local_104)) &&
     (local_1d8._8_4_ == local_1a4)) {
    plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar2 = *(code **)(*plVar7 + 0x360);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_2a8,L"UEditMeshPolygonsTool",L"OnCollapseFailedMessage",
                        L"Cannot collapse empty selection");
    (*pcVar2)(plVar7,pFVar8,3);
    if (local_2a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2a8.TextData.Reference + 0x10))();
    }
  }
  else {
    lVar9 = (**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x10))
              (lVar9 + 0x28,&EditMeshPolygonsToolLocals::CollapseEdgeTransactionLabel);
    UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_e8,pFVar1);
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_e8);
    local_1e8.Data = (FScriptContainerElement *)0x0;
    local_228._0_8_ = (FScriptContainerElement *)0x0;
    local_228._8_8_ = 0;
    local_208 = (undefined1 *)0x0;
    uVar16 = 0;
    local_200 = 0;
    local_1fc = 0x80;
    local_1f8 = 0xffffffff;
    local_1f4 = 0;
    local_1e0 = 0;
    if (1 < local_f0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1e8,0,local_f0,4);
    }
    _Src = (ForElementType<FSetElementId>)local_100;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      _Src = local_f8;
    }
    _Dst.Data = local_1f0;
    if (local_1e8.Data != (FScriptContainerElement *)0x0) {
      _Dst.Data = local_1e8.Data;
    }
    if (local_f0 != 0) {
      memcpy(_Dst.Data,(void *)_Src,(longlong)(int)local_f0 << 2);
    }
    local_1e0 = local_f0;
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_228,local_130);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_130,(ForAnyElementType *)local_228,(int *)(local_228 + 8),
               (int *)(local_228 + 0xc));
    local_1f8 = local_108;
    local_1f4 = local_104;
    uVar5 = local_110 + 0x1fU & 0xffffffe0;
    local_200 = 0;
    if (((int)local_1fc < (int)uVar5) || (0x80 < (int)local_1fc)) {
      local_1fc = 0x80;
      if (0x80 < (int)uVar5) {
        local_1fc = uVar5;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10),0);
    }
    if (local_110 != 0) {
      _Src_00 = local_128;
      if (local_118 != (undefined1 *)0x0) {
        _Src_00 = local_118;
      }
      _Dst_00 = local_228 + 0x10;
      if (local_208 != (undefined1 *)0x0) {
        _Dst_00 = local_208;
      }
      memcpy(_Dst_00,_Src_00,(ulonglong)(local_110 + 0x1fU >> 5) << 2);
    }
    if (local_130 != 0) {
      memcpy((void *)local_228._0_8_,local_138,(longlong)local_130 * 0xc);
    }
    if (local_1d8._8_4_ == local_1a4) {
      if (local_188.Elements._8_4_ != local_188.Elements._52_4_) {
        EditMeshPolygonsToolLocals::ConvertCornerSelectionToGroupEdgeSelection
                  ((this->Topology).Object,&local_188,
                   (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_228);
      }
    }
    else {
      local_298.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_298.Elements._48_8_ = _UNK_150631d98;
      local_298.Elements._0_8_ = 0;
      local_298.Elements._8_8_ = 0;
      local_298.Elements._32_8_ = 0;
      local_298.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_298.HashSize = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                (&local_298,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1d8);
      iVar6 = EditMeshPolygonsToolLocals::RetriangulateGroups
                        (pFVar1,(this->Topology).Object,&local_298,&local_e8);
      if (iVar6 != local_1d8._8_4_ - local_1a4) {
        plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
        (**(code **)(*plVar7 + 0x360))
                  (plVar7,&EditMeshPolygonsToolLocals::PartialCollapseFailureMessage,3);
      }
      if (((this->Topology).Object == (FGroupTopology *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(((this->Topology).Object)->_padding_ + 8))();
      uVar5 = local_1b0;
      uStack_2fc = 1;
      uStack_2ec = uVar16;
      local_2e8 = uVar16;
      if (local_1b0 != 0) {
        puVar17 = (uint *)(local_1d8 + 0x10);
        if (local_1b8 != (uint *)0x0) {
          puVar17 = local_1b8;
        }
        uVar14 = *puVar17;
        local_2e8 = 0;
        uVar16 = 0;
        while (uVar14 == 0) {
          lVar9 = (longlong)(int)uVar16;
          local_2e8 = local_2e8 + 0x20;
          uVar16 = uVar16 + 1;
          uStack_2ec = local_1b0;
          if ((int)((local_1b0 - 1) + ((int)(local_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
          goto LAB_14cc37a21;
          uVar14 = puVar17[lVar9 + 1];
        }
        uStack_2fc = -uVar14 & uVar14;
        uVar12 = (ulonglong)uStack_2fc * 2 + 1;
        lVar9 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_324 = (int)lVar9;
        uStack_2ec = (local_2e8 - 1) + local_324;
        if ((int)local_1b0 < (int)uStack_2ec) {
          uStack_2ec = local_1b0;
        }
      }
LAB_14cc37a21:
      local_308 = (longlong *)local_1d8;
      uStack_2e4 = local_22c;
      local_2f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10);
      iStack_2e0 = local_1d8._8_4_ - local_1a4;
      uVar14 = local_1b0 & 0xffffffe0;
      uStack_2f0 = 0xffffffff;
      TStack_2d0.CurrentBitIndex = uStack_2ec;
      TStack_2d0.UnvisitedBitMask = 0xffffffff;
      TStack_2d0._padding_ = CONCAT44(uStack_2fc,uVar16);
      iVar6 = (int)local_1b0 >> 5;
      TStack_2d0._28_4_ = local_22c;
      TStack_2d0.BaseBitIndex = local_2e8;
      uStack_2b0 = CONCAT44(uStack_2dc,iStack_2e0);
      bVar11 = (byte)local_1b0;
      local_334 = local_1b0;
      uStack_300 = uVar16;
      local_2d8 = local_308;
      TStack_2d0.Array = local_2f8;
      if (((int)local_1b0 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != local_1b0) {
        puVar17 = (uint *)(local_1d8 + 0x10);
        if (local_1b8 != (uint *)0x0) {
          puVar17 = local_1b8;
        }
        uVar16 = -1 << (bVar11 & 0x1f) & puVar17[iVar6];
        while (uVar16 == 0) {
          lVar9 = (longlong)iVar6;
          uVar14 = uVar14 + 0x20;
          iVar6 = iVar6 + 1;
          uVar5 = local_1b0;
          local_334 = local_1b0;
          if ((int)((local_1b0 - 1) + ((int)(local_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
          goto LAB_14cc37b51;
          uVar16 = puVar17[lVar9 + 1];
        }
        uVar12 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_320 = (int)lVar9;
        uVar5 = local_320 + -1 + uVar14;
        local_334 = uVar5;
        if ((int)local_1b0 < (int)uVar5) {
          uVar5 = local_1b0;
          local_334 = local_1b0;
        }
      }
LAB_14cc37b51:
      while( true ) {
        plVar7 = local_2d8;
        if ((int)local_2d8[1] - *(int *)((longlong)local_2d8 + 0x34) != (int)uStack_2b0) {
          local_338 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_338);
        }
        if (((TStack_2d0.CurrentBitIndex == uVar5) &&
            (TStack_2d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10))) &&
           (plVar7 == (longlong *)local_1d8)) break;
        iVar6 = *(int *)(*plVar7 + (longlong)TStack_2d0.CurrentBitIndex * 0xc);
        if (((this->Topology).Object == (FGroupTopology *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (this->Topology).Object;
        pFVar10 = UE::Geometry::FGroupTopology::FindGroupByID(this_00,iVar6);
        if (pFVar10 == (FGroup *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7172532518883688072>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\GroupTopology.h"
                             ,0x178,"Group != nullptr");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          local_328 = (pFVar10->Boundaries).ArrayNum;
          uVar12 = (ulonglong)(int)local_328;
          pFVar15 = (pFVar10->Boundaries).AllocatorInstance.Data;
          local_318 = pFVar15 + uVar12 * 0x28;
          while( true ) {
            pFVar3 = local_318;
            if ((pFVar10->Boundaries).ArrayNum != (int)uVar12) {
              local_337 = 0;
              `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupBoundary_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_337);
            }
            this = local_310;
            if (pFVar15 == pFVar3) break;
            puVar13 = *(uint **)pFVar15;
            iVar6 = *(int *)(pFVar15 + 8);
            puVar17 = puVar13 + iVar6;
            while( true ) {
              if (*(int *)(pFVar15 + 8) != iVar6) {
                local_336[0] = 0;
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(local_336);
              }
              if (puVar13 == puVar17) break;
              uVar16 = *puVar13;
              uVar5 = 0;
              if ((int)uVar16 < (this_00->Edges).ArrayNum) {
                uVar5 = ~uVar16 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              local_330[0] = uVar16;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_228,
                         &local_31c,(bool *)local_330);
              puVar13 = puVar13 + 1;
            }
            uVar12 = (ulonglong)local_328;
            pFVar15 = pFVar15 + 0x28;
          }
        }
        TStack_2d0.UnvisitedBitMask = TStack_2d0.UnvisitedBitMask & ~TStack_2d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d0);
        uVar5 = local_334;
      }
    }
    CollapseGroupEdges(this,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_228,
                       &local_e8);
    lVar9 = (**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x18))(lVar9 + 0x28);
    local_1e0 = 0;
    if (local_1e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_228);
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_e8);
  }
  local_f0 = 0;
  if (local_f8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_138);
  local_188.HashSize = 0;
  if (local_188.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_188.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_188.Elements);
  local_190 = 0;
  if (local_198 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_198);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1d8);
  return;
}

// ApplyCollapseSingleEdge @ 14cc37e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall UEditMeshPolygonsTool::ApplyCollapseSingleEdge(UEditMeshPolygonsTool *this)

{
  FDynamicMesh3 *pFVar1;
  code *pcVar2;
  FGroupTopology *this_00;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  FText *pFVar8;
  longlong lVar9;
  ForAnyElementType _Dst;
  FGroup *pFVar10;
  byte bVar11;
  undefined1 *_Dst_00;
  ForElementType<FSetElementId> _Src;
  undefined1 *_Src_00;
  ulonglong uVar12;
  uint *puVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  uint *puVar17;
  undefined1 auStackY_368 [32];
  undefined1 uStack_338;
  undefined1 uStack_337;
  undefined1 auStack_336 [2];
  uint uStack_334;
  uint auStack_330 [2];
  uint uStack_328;
  int iStack_324;
  int iStack_320;
  int iStack_31c;
  FScriptContainerElement *pFStack_318;
  UEditMeshPolygonsTool *pUStack_310;
  longlong *plStack_308;
  uint uStack_300;
  uint uStack_2fc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2f8;
  undefined4 uStack_2f0;
  uint uStack_2ec;
  uint uStack_2e8;
  undefined4 uStack_2e4;
  int iStack_2e0;
  undefined4 uStack_2dc;
  longlong *plStack_2d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d0;
  undefined8 uStack_2b0;
  FText FStack_2a8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> TStack_298;
  undefined4 uStack_22c;
  undefined1 auStack_228 [32];
  undefined1 *puStack_208;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined4 uStack_1f8;
  int iStack_1f4;
  FScriptContainerElement aFStack_1f0 [8];
  ForAnyElementType FStack_1e8;
  uint uStack_1e0;
  undefined1 auStack_1d8 [32];
  uint *puStack_1b8;
  uint uStack_1b0;
  int iStack_1a4;
  ForElementType<FSetElementId> FStack_198;
  int iStack_190;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> TStack_188;
  void *pvStack_138;
  int iStack_130;
  undefined1 auStack_128 [16];
  undefined1 *puStack_118;
  int iStack_110;
  undefined4 uStack_108;
  int iStack_104;
  undefined1 auStack_100 [8];
  ForElementType<FSetElementId> FStack_f8;
  uint uStack_f0;
  FDynamicMeshChangeTracker FStack_e8;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_368;
  pFVar1 = (this->CurrentMesh).Object;
  pUStack_310 = this;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
            ((FGroupTopologySelection *)auStack_1d8,
             (FGroupTopologySelection *)&((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_)
  ;
  if (((TStack_188.Elements._8_4_ == TStack_188.Elements._52_4_) && (iStack_130 == iStack_104)) &&
     (auStack_1d8._8_4_ == iStack_1a4)) {
    plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar2 = *(code **)(*plVar7 + 0x360);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&FStack_2a8,L"UEditMeshPolygonsTool",L"OnCollapseFailedMessage",
                        L"Cannot collapse empty selection");
    (*pcVar2)(plVar7,pFVar8,3);
    if (FStack_2a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*FStack_2a8.TextData.Reference + 0x10))();
    }
  }
  else {
    lVar9 = (**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x10))
              (lVar9 + 0x28,&EditMeshPolygonsToolLocals::CollapseEdgeTransactionLabel);
    UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&FStack_e8,pFVar1);
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&FStack_e8);
    FStack_1e8.Data = (FScriptContainerElement *)0x0;
    auStack_228._0_8_ = (FScriptContainerElement *)0x0;
    auStack_228._8_8_ = 0;
    puStack_208 = (undefined1 *)0x0;
    uVar16 = 0;
    uStack_200 = 0;
    uStack_1fc = 0x80;
    uStack_1f8 = 0xffffffff;
    iStack_1f4 = 0;
    uStack_1e0 = 0;
    if (1 < uStack_f0) {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&FStack_1e8,0,uStack_f0,4);
    }
    _Src = (ForElementType<FSetElementId>)auStack_100;
    if (FStack_f8 != (ForElementType<FSetElementId>)0x0) {
      _Src = FStack_f8;
    }
    _Dst.Data = aFStack_1f0;
    if (FStack_1e8.Data != (FScriptContainerElement *)0x0) {
      _Dst.Data = FStack_1e8.Data;
    }
    if (uStack_f0 != 0) {
      memcpy(_Dst.Data,(void *)_Src,(longlong)(int)uStack_f0 << 2);
    }
    uStack_1e0 = uStack_f0;
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)auStack_228,iStack_130);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,iStack_130,(ForAnyElementType *)auStack_228,(int *)(auStack_228 + 8),
               (int *)(auStack_228 + 0xc));
    uStack_1f8 = uStack_108;
    iStack_1f4 = iStack_104;
    uVar5 = iStack_110 + 0x1fU & 0xffffffe0;
    uStack_200 = 0;
    if (((int)uStack_1fc < (int)uVar5) || (0x80 < (int)uStack_1fc)) {
      uStack_1fc = 0x80;
      if (0x80 < (int)uVar5) {
        uStack_1fc = uVar5;
      }
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_228 + 0x10),0);
    }
    if (iStack_110 != 0) {
      _Src_00 = auStack_128;
      if (puStack_118 != (undefined1 *)0x0) {
        _Src_00 = puStack_118;
      }
      _Dst_00 = auStack_228 + 0x10;
      if (puStack_208 != (undefined1 *)0x0) {
        _Dst_00 = puStack_208;
      }
      memcpy(_Dst_00,_Src_00,(ulonglong)(iStack_110 + 0x1fU >> 5) << 2);
    }
    if (iStack_130 != 0) {
      memcpy((void *)auStack_228._0_8_,pvStack_138,(longlong)iStack_130 * 0xc);
    }
    if (auStack_1d8._8_4_ == iStack_1a4) {
      if (TStack_188.Elements._8_4_ != TStack_188.Elements._52_4_) {
        EditMeshPolygonsToolLocals::ConvertCornerSelectionToGroupEdgeSelection
                  ((this->Topology).Object,&TStack_188,
                   (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)auStack_228);
      }
    }
    else {
      TStack_298.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      TStack_298.Elements._48_8_ = _UNK_150631d98;
      TStack_298.Elements._0_8_ = 0;
      TStack_298.Elements._8_8_ = 0;
      TStack_298.Elements._32_8_ = 0;
      TStack_298.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      TStack_298.HashSize = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                (&TStack_298,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)auStack_1d8);
      iVar6 = EditMeshPolygonsToolLocals::RetriangulateGroups
                        (pFVar1,(this->Topology).Object,&TStack_298,&FStack_e8);
      if (iVar6 != auStack_1d8._8_4_ - iStack_1a4) {
        plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
        (**(code **)(*plVar7 + 0x360))
                  (plVar7,&EditMeshPolygonsToolLocals::PartialCollapseFailureMessage,3);
      }
      if (((this->Topology).Object == (FGroupTopology *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)(((this->Topology).Object)->_padding_ + 8))();
      uVar5 = uStack_1b0;
      uStack_2fc = 1;
      uStack_2ec = uVar16;
      uStack_2e8 = uVar16;
      if (uStack_1b0 != 0) {
        puVar17 = (uint *)(auStack_1d8 + 0x10);
        if (puStack_1b8 != (uint *)0x0) {
          puVar17 = puStack_1b8;
        }
        uVar14 = *puVar17;
        uStack_2e8 = 0;
        uVar16 = 0;
        while (uVar14 == 0) {
          lVar9 = (longlong)(int)uVar16;
          uStack_2e8 = uStack_2e8 + 0x20;
          uVar16 = uVar16 + 1;
          uStack_2ec = uStack_1b0;
          if ((int)((uStack_1b0 - 1) + ((int)(uStack_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
          goto LAB_14cc37a21;
          uVar14 = puVar17[lVar9 + 1];
        }
        uStack_2fc = -uVar14 & uVar14;
        uVar12 = (ulonglong)uStack_2fc * 2 + 1;
        lVar9 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iStack_324 = (int)lVar9;
        uStack_2ec = (uStack_2e8 - 1) + iStack_324;
        if ((int)uStack_1b0 < (int)uStack_2ec) {
          uStack_2ec = uStack_1b0;
        }
      }
LAB_14cc37a21:
      plStack_308 = (longlong *)auStack_1d8;
      uStack_2e4 = uStack_22c;
      pTStack_2f8 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_1d8 + 0x10);
      iStack_2e0 = auStack_1d8._8_4_ - iStack_1a4;
      uVar14 = uStack_1b0 & 0xffffffe0;
      uStack_2f0 = 0xffffffff;
      TStack_2d0.CurrentBitIndex = uStack_2ec;
      TStack_2d0.UnvisitedBitMask = 0xffffffff;
      TStack_2d0._padding_ = CONCAT44(uStack_2fc,uVar16);
      iVar6 = (int)uStack_1b0 >> 5;
      TStack_2d0._28_4_ = uStack_22c;
      TStack_2d0.BaseBitIndex = uStack_2e8;
      uStack_2b0 = CONCAT44(uStack_2dc,iStack_2e0);
      bVar11 = (byte)uStack_1b0;
      uStack_334 = uStack_1b0;
      uStack_300 = uVar16;
      plStack_2d8 = plStack_308;
      TStack_2d0.Array = pTStack_2f8;
      if (((int)uStack_1b0 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar5 != uStack_1b0) {
        puVar17 = (uint *)(auStack_1d8 + 0x10);
        if (puStack_1b8 != (uint *)0x0) {
          puVar17 = puStack_1b8;
        }
        uVar16 = -1 << (bVar11 & 0x1f) & puVar17[iVar6];
        while (uVar16 == 0) {
          lVar9 = (longlong)iVar6;
          uVar14 = uVar14 + 0x20;
          iVar6 = iVar6 + 1;
          uVar5 = uStack_1b0;
          uStack_334 = uStack_1b0;
          if ((int)((uStack_1b0 - 1) + ((int)(uStack_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
          goto LAB_14cc37b51;
          uVar16 = puVar17[lVar9 + 1];
        }
        uVar12 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
        lVar9 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iStack_320 = (int)lVar9;
        uVar5 = iStack_320 + -1 + uVar14;
        uStack_334 = uVar5;
        if ((int)uStack_1b0 < (int)uVar5) {
          uVar5 = uStack_1b0;
          uStack_334 = uStack_1b0;
        }
      }
LAB_14cc37b51:
      while( true ) {
        plVar7 = plStack_2d8;
        if ((int)plStack_2d8[1] - *(int *)((longlong)plStack_2d8 + 0x34) != (int)uStack_2b0) {
          uStack_338 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&uStack_338);
        }
        if (((TStack_2d0.CurrentBitIndex == uVar5) &&
            (TStack_2d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_1d8 + 0x10))) &&
           (plVar7 == (longlong *)auStack_1d8)) break;
        iVar6 = *(int *)(*plVar7 + (longlong)TStack_2d0.CurrentBitIndex * 0xc);
        if (((this->Topology).Object == (FGroupTopology *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        this_00 = (this->Topology).Object;
        pFVar10 = UE::Geometry::FGroupTopology::FindGroupByID(this_00,iVar6);
        if (pFVar10 == (FGroup *)0x0) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_7172532518883688072>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\GroupTopology.h"
                             ,0x178,"Group != nullptr");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        else {
          uStack_328 = (pFVar10->Boundaries).ArrayNum;
          uVar12 = (ulonglong)(int)uStack_328;
          pFVar15 = (pFVar10->Boundaries).AllocatorInstance.Data;
          pFStack_318 = pFVar15 + uVar12 * 0x28;
          while( true ) {
            pFVar3 = pFStack_318;
            if ((pFVar10->Boundaries).ArrayNum != (int)uVar12) {
              uStack_337 = 0;
              `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupBoundary_const_,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&uStack_337);
            }
            this = pUStack_310;
            if (pFVar15 == pFVar3) break;
            puVar13 = *(uint **)pFVar15;
            iVar6 = *(int *)(pFVar15 + 8);
            puVar17 = puVar13 + iVar6;
            while( true ) {
              if (*(int *)(pFVar15 + 8) != iVar6) {
                auStack_336[0] = 0;
                `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::
                operator()(auStack_336);
              }
              if (puVar13 == puVar17) break;
              uVar16 = *puVar13;
              uVar5 = 0;
              if ((int)uVar16 < (this_00->Edges).ArrayNum) {
                uVar5 = ~uVar16 >> 0x1f;
              }
              if ((uVar5 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              auStack_330[0] = uVar16;
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)auStack_228,
                         &iStack_31c,(bool *)auStack_330);
              puVar13 = puVar13 + 1;
            }
            uVar12 = (ulonglong)uStack_328;
            pFVar15 = pFVar15 + 0x28;
          }
        }
        TStack_2d0.UnvisitedBitMask = TStack_2d0.UnvisitedBitMask & ~TStack_2d0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d0);
        uVar5 = uStack_334;
      }
    }
    CollapseGroupEdges(this,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)auStack_228,
                       &FStack_e8);
    lVar9 = (**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar9 + 0x28) + 0x18))(lVar9 + 0x28);
    uStack_1e0 = 0;
    if (FStack_1e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1e8.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)auStack_228);
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&FStack_e8);
  }
  uStack_f0 = 0;
  if (FStack_f8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_f8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&pvStack_138);
  TStack_188.HashSize = 0;
  if (TStack_188.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)TStack_188.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&TStack_188.Elements);
  iStack_190 = 0;
  if (FStack_198 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FStack_198);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_1d8);
  return;
}

// ApplyDecompose @ 14cc37e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplyDecompose(UEditMeshPolygonsTool *this)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  FDynamicMesh3 *pFVar4;
  UPolygonSelectionMechanic *pUVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  longlong *plVar8;
  FText *pFVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar11;
  longlong lVar12;
  int iVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  int iVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  uint uVar19;
  undefined1 auStackY_2e8 [32];
  undefined1 local_2a8;
  undefined1 local_2a7;
  undefined1 local_2a6 [2];
  uint local_2a4;
  ForAnyElementType local_2a0;
  int local_298;
  int local_294;
  int local_290 [2];
  longlong *local_288;
  int iStack_280;
  uint uStack_27c;
  longlong *local_278;
  undefined4 uStack_270;
  int iStack_26c;
  int local_268;
  int iStack_264;
  int iStack_260;
  undefined4 uStack_25c;
  int local_258;
  int local_254;
  int local_250 [2];
  longlong *local_248;
  TBitArray<FDefaultBitArrayAllocator> *local_240;
  longlong *local_238;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_230;
  undefined8 uStack_210;
  FText local_200;
  FText local_1f0;
  FGroupTopologySelection local_1d8;
  FDynamicMeshChangeTracker local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  bVar7 = BeginMeshFaceEditChange(this);
  if (bVar7) {
    pFVar4 = (this->CurrentMesh).Object;
    UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_e8,pFVar4);
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_e8);
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_1d8);
    pUVar5 = (this->SelectionMechanic).field0_0x0.DebugPtr;
    iStack_280 = 0;
    local_268 = 0;
    uStack_27c = 1;
    pTVar18 = (TBitArray<FDefaultBitArrayAllocator> *)&pUVar5->_padding_;
    iVar17 = (int)pUVar5->_padding_;
    local_288 = &pUVar5->_padding_;
    iStack_26c = 0;
    if (iVar17 != 0) {
      plVar8 = (longlong *)pUVar5->_padding_;
      if ((longlong *)pUVar5->_padding_ == (longlong *)0x0) {
        plVar8 = (longlong *)pTVar18;
      }
      uVar16 = (uint)*plVar8;
      while (uVar16 == 0) {
        lVar12 = (longlong)iStack_280;
        local_268 = local_268 + 0x20;
        iStack_280 = iStack_280 + 1;
        iStack_26c = iVar17;
        if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_280)
        goto LAB_14cc3800d;
        uVar16 = *(uint *)((longlong)plVar8 + lVar12 * 4 + 4);
      }
      uStack_27c = -uVar16 & uVar16;
      uVar1 = (ulonglong)uStack_27c * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_258 = (int)lVar12;
      iStack_26c = local_268 + -1 + local_258;
      if (iVar17 < iStack_26c) {
        iStack_26c = iVar17;
      }
    }
LAB_14cc3800d:
    iStack_260 = (int)pUVar5->_padding_ - *(int *)((longlong)&pUVar5->_padding_ + 4);
    uVar16 = (uint)pUVar5->_padding_;
    uStack_270 = 0xffffffff;
    TStack_230._padding_ = CONCAT44(uStack_27c,iStack_280);
    uVar19 = uVar16 & 0xffffffe0;
    TStack_230.CurrentBitIndex = iStack_26c;
    TStack_230.UnvisitedBitMask = 0xffffffff;
    iVar13 = (int)uVar16 >> 5;
    TStack_230._28_4_ = iStack_26c;
    TStack_230.BaseBitIndex = local_268;
    uStack_210 = CONCAT44(uStack_25c,iStack_260);
    local_2a4 = uVar16;
    local_278 = (longlong *)pTVar18;
    iStack_264 = iStack_26c;
    local_248 = local_288;
    local_240 = pTVar18;
    local_238 = local_288;
    TStack_230.Array = pTVar18;
    if ((((int)uVar16 < 0) || (iVar17 < (int)uVar16)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar2 = (uint)pUVar5->_padding_;
    if (uVar16 != uVar2) {
      plVar8 = (longlong *)pUVar5->_padding_;
      if ((longlong *)pUVar5->_padding_ == (longlong *)0x0) {
        plVar8 = (longlong *)pTVar18;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)((longlong)plVar8 + (longlong)iVar13 * 4);
      while (uVar16 == 0) {
        lVar12 = (longlong)iVar13;
        uVar19 = uVar19 + 0x20;
        iVar13 = iVar13 + 1;
        uVar16 = uVar2;
        local_2a4 = uVar2;
        if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14cc38140;
        uVar16 = *(uint *)((longlong)plVar8 + lVar12 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_254 = (int)lVar12;
      uVar16 = local_254 + -1 + uVar19;
      local_2a4 = uVar16;
      if ((int)uVar2 < (int)uVar16) {
        uVar16 = uVar2;
        local_2a4 = uVar2;
      }
    }
LAB_14cc38140:
    while( true ) {
      plVar8 = local_238;
      if ((int)local_238[1] - *(int *)((longlong)local_238 + 0x34) != (int)uStack_210) {
        local_2a8 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_2a8);
      }
      if (((TStack_230.CurrentBitIndex == uVar16) && (TStack_230.Array == pTVar18)) &&
         (plVar8 == local_248)) break;
      iVar17 = *(int *)(*plVar8 + (longlong)TStack_230.CurrentBitIndex * 0xc);
      if (((this->Topology).Object == (FGroupTopology *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar10 = UE::Geometry::FGroupTopology::GetGroupTriangles((this->Topology).Object,iVar17);
      local_2a0.Data = (FScriptContainerElement *)0x0;
      local_298 = pTVar10->ArrayNum;
      lVar12 = (longlong)local_298;
      pFVar6 = (pTVar10->AllocatorInstance).Data;
      if (local_298 == 0) {
        local_294 = 0;
        iVar17 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_298,0,&local_2a0,local_298,&local_294);
        memcpy(local_2a0.Data,pFVar6,lVar12 << 2);
        iVar17 = local_298;
      }
      pFVar6 = local_2a0.Data + (longlong)iVar17 * 4;
      FVar14.Data = local_2a0.Data;
      iVar13 = iVar17;
      while( true ) {
        if (iVar13 != iVar17) {
          local_2a7 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_2a7)
          ;
        }
        if (FVar14.Data == pFVar6) break;
        UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_e8,*(int *)FVar14.Data,true);
        FVar14.Data = FVar14.Data + 4;
        iVar13 = local_298;
      }
      if (local_2a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.Data);
      }
      pFVar15 = (pTVar10->AllocatorInstance).Data;
      iVar17 = pTVar10->ArrayNum;
      pFVar6 = pFVar15 + (longlong)iVar17 * 4;
      while( true ) {
        if (pTVar10->ArrayNum != iVar17) {
          local_2a6[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_2a6);
        }
        if (pFVar15 == pFVar6) break;
        bVar7 = (pFVar4->TriangleGroups).bIsSet;
        local_290[0] = pFVar4->GroupIDCounter;
        uVar16 = *(uint *)pFVar15;
        iVar13 = local_290[0] + 1;
        pFVar4->GroupIDCounter = iVar13;
        if (bVar7 != false) {
          *(int *)(*(longlong *)
                    ((pFVar4->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar16 >> 9) * 8) + (ulonglong)(uVar16 & 0x1ff) * 4) = local_290[0];
          if (iVar13 < pFVar4->GroupIDCounter) {
            iVar13 = pFVar4->GroupIDCounter;
          }
          pFVar4->GroupIDCounter = iVar13;
        }
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_1d8.SelectedGroupIDs,local_250,(bool *)local_290);
        pFVar15 = pFVar15 + 4;
      }
      TStack_230.UnvisitedBitMask = TStack_230.UnvisitedBitMask & ~TStack_230._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_230);
      pTVar18 = local_240;
      uVar16 = local_2a4;
    }
    TVar11 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_e8);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_1f0,L"UEditMeshPolygonsTool",L"PolyMeshDecomposeChange",L"Decompose")
    ;
    EmitCurrentMeshChangeAndUpdate(this,pFVar9,TVar11,&local_1d8);
    if (local_1f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1f0.TextData.Reference + 0x10))();
    }
    local_1d8.SelectedEdgeIDs.HashSize = 0;
    if (local_1d8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d8.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1d8.SelectedEdgeIDs.Elements);
    local_1d8.SelectedCornerIDs.HashSize = 0;
    if (local_1d8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d8.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1d8.SelectedCornerIDs.Elements);
    local_1d8.SelectedGroupIDs.HashSize = 0;
    if (local_1d8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d8.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_1d8);
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_e8);
  }
  else {
    plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar3 = *(code **)(*plVar8 + 0x360);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_200,L"UEditMeshPolygonsTool",L"OnDecomposeFailed",
                        L"Cannot Decompose Current Selection");
    (*pcVar3)(plVar8,pFVar9,3);
    if (local_200.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_200.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ApplyDelete @ 14cc38430

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplyDelete(UEditMeshPolygonsTool *this)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  FText *pFVar4;
  undefined1 local_res10 [24];
  undefined1 local_18 [16];
  
  bVar2 = BeginMeshFaceEditChange(this);
  if (bVar2) {
    ApplyDeleteFaces(this);
    return;
  }
  local_18._8_8_ = local_res10;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UEditMeshPolygonsTool::BeginMeshEdgeEditChange'::__l2::<lambda_1>,bool,int>
       ::Call;
  bVar2 = BeginMeshEdgeEditChange(this,(TFunctionRef<bool___cdecl(int)> *)local_18);
  if (bVar2) {
    ApplyDeleteEdges(this);
    return;
  }
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
  pcVar1 = *(code **)(*plVar3 + 0x360);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_18,L"UEditMeshPolygonsTool",L"OnDeleteFailedMessage",
                      L"Cannot Delete Current Selection");
  (*pcVar1)(plVar3,pFVar4,3);
  if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
  }
  return;
}

// ApplyDeleteEdges @ 14cc384f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplyDeleteEdges(UEditMeshPolygonsTool *this)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  void *_Src;
  code *pcVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar9;
  FText *pFVar10;
  uint *puVar11;
  ForAnyElementType FVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  ForAnyElementType FVar17;
  int iVar18;
  undefined1 auStackY_3a8 [32];
  undefined1 local_368;
  undefined1 local_367;
  undefined1 local_366;
  undefined1 local_365 [5];
  FDynamicMesh3 *local_360;
  ForAnyElementType local_358;
  int local_350;
  int local_34c;
  uint local_348;
  int local_344;
  FScriptContainerElement *local_340;
  undefined8 local_338;
  UEditMeshPolygonsTool *local_330;
  FMeshConnectedComponents local_328;
  FScriptContainerElement *local_310;
  int *piStack_308;
  undefined8 local_300;
  undefined1 local_2f8 [16];
  int local_2e8;
  undefined4 uStack_2e4;
  int local_2e0;
  int local_2dc;
  int local_2d8 [2];
  TArrayView<int_const_,int> local_2d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_2b8;
  code *local_2a8 [2];
  undefined **local_298;
  FDynamicMesh3 **local_290;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_288;
  undefined8 local_280;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_278;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_228;
  FGroupTopologySelection local_1d8;
  FDynamicMeshChangeTracker local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_360 = (this->CurrentMesh).Object;
  local_330 = this;
  UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_e8,local_360);
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_1d8);
  iVar18 = (this->ActiveEdgeSelection).ArrayNum;
  pFVar16 = (this->ActiveEdgeSelection).AllocatorInstance.Data;
  local_328.Mesh = local_360;
  local_328.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_328.Components.Array.ArrayNum = 0;
  local_328.Components.Array.ArrayMax = 0;
  local_228.Elements._0_8_ = 0;
  pFVar13 = pFVar16 + 0x10;
  local_228.Elements._8_8_ = 0;
  local_228.Elements._32_8_ = 0;
  local_340 = pFVar16 + (longlong)iVar18 * 0x18;
  local_228.Elements._40_4_ = 0;
  local_228.Elements._44_4_ = 0x80;
  local_228.Elements._48_4_ = 0xffffffff;
  local_228.Elements._52_4_ = 0;
  local_228.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_228.HashSize = 0;
  local_278.Elements._0_8_ = 0;
  local_278.Elements._8_8_ = 0;
  local_278.Elements._32_8_ = 0;
  local_278.Elements._40_4_ = 0;
  local_278.Elements._44_4_ = 0x80;
  local_278.Elements._48_4_ = 0xffffffff;
  local_278.Elements._52_4_ = 0;
  local_278.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_278.HashSize = 0;
  while( true ) {
    pFVar6 = local_340;
    if ((this->ActiveEdgeSelection).ArrayNum != iVar18) {
      local_368 = 0;
      `TCheckedPointerIterator<UEditMeshPolygonsTool::FSelectedEdge,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_368);
    }
    if (pFVar16 == pFVar6) break;
    puVar11 = *(uint **)(pFVar13 + -8);
    iVar14 = *(int *)pFVar13;
    puVar1 = puVar11 + iVar14;
    while( true ) {
      if (*(int *)pFVar13 != iVar14) {
        local_367 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_367);
      }
      if (puVar11 == puVar1) break;
      local_348 = *puVar11;
      uVar3 = *(undefined8 *)
               (*(longlong *)
                 ((local_360->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(local_348 >> 9) * 8
                 ) + 8 + (ulonglong)(local_348 & 0x1ff) * 0x10);
      local_338 = uVar3;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_228,&local_2e0,(bool *)&local_348);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_278,&local_2dc,(bool *)&local_338);
      if ((int)((ulonglong)uVar3 >> 0x20) != -1) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_278,local_2d8,(bool *)((longlong)&local_338 + 4));
      }
      puVar11 = puVar11 + 1;
    }
    pFVar16 = pFVar16 + 0x18;
    pFVar13 = pFVar13 + 0x18;
    this = local_330;
  }
  local_298 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UEditMeshPolygonsTool::ApplyDeleteEdges'::`2'::<lambda_1>,0,0>
               ::_vftable_;
  local_290 = &local_360;
  local_280 = 0;
  local_288 = &local_228;
  local_2a8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UEditMeshPolygonsTool::ApplyDeleteEdges'::__l2::<lambda_1>,bool,int,int>
                 ::Call;
  pTVar8 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_278,&local_2b8);
  UE::Geometry::FMeshConnectedComponents::FindTrianglesConnectedToSeeds
            (&local_328,pTVar8,(TFunction<bool___cdecl(int,int)> *)local_2a8);
  if (local_2b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.AllocatorInstance.Data);
  }
  UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_e8);
  piStack_308 = &local_328.Components.Array.ArrayNum;
  local_2f8._0_8_ = local_328.Components.Array.AllocatorInstance.Data;
  local_2e8 = local_328.Components.Array.ArrayNum;
  local_300 = CONCAT44(uStack_2e4,local_328.Components.Array.ArrayNum);
  pFVar13 = local_328.Components.Array.AllocatorInstance.Data +
            (longlong)local_328.Components.Array.ArrayNum * 8;
  FVar17.Data = local_328.Components.Array.AllocatorInstance.Data;
  local_2f8._8_8_ = piStack_308;
  do {
    local_310 = FVar17.Data;
    if (*piStack_308 != (int)local_300) {
      local_366 = 0;
      `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_366);
    }
    if (FVar17.Data == pFVar13) {
      TVar9 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_e8);
      pFVar10 = FText::AsLocalizable_Advanced_LocText
                          ((FText *)local_2f8,L"UEditMeshPolygonsTool",L"PolyMeshDeleteEdgesChange",
                           L"Delete Edges");
      EmitCurrentMeshChangeAndUpdate(local_330,pFVar10,TVar9,&local_1d8);
      if ((ITextData *)local_2f8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_2f8._0_8_ + 0x10))();
      }
      local_278.HashSize = 0;
      if (local_278.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_278.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_278.Elements);
      local_228.HashSize = 0;
      if (local_228.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_228.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_228.Elements);
      TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
      ::
      ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
                (&local_328.Components);
      local_1d8.SelectedEdgeIDs.HashSize = 0;
      if (local_1d8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1d8.SelectedEdgeIDs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1d8.SelectedEdgeIDs.Elements);
      local_1d8.SelectedCornerIDs.HashSize = 0;
      if (local_1d8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1d8.SelectedCornerIDs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1d8.SelectedCornerIDs.Elements);
      local_1d8.SelectedGroupIDs.HashSize = 0;
      if (local_1d8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1d8.SelectedGroupIDs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_1d8);
      UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_e8);
      return;
    }
    puVar4 = *(undefined8 **)FVar17.Data;
    local_358.Data = (FScriptContainerElement *)0x0;
    local_350 = *(int *)(puVar4 + 1);
    lVar15 = (longlong)local_350;
    _Src = (void *)*puVar4;
    if (local_350 == 0) {
      local_34c = 0;
      iVar18 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_350,0,&local_358,local_350,&local_34c);
      memcpy(local_358.Data,_Src,lVar15 << 2);
      iVar18 = local_350;
    }
    pFVar16 = local_358.Data + (longlong)iVar18 * 4;
    FVar12.Data = local_358.Data;
    iVar14 = iVar18;
    while( true ) {
      if (iVar14 != iVar18) {
        local_365[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_365);
      }
      if (FVar12.Data == pFVar16) break;
      UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_e8,*(int *)FVar12.Data,true);
      FVar12.Data = FVar12.Data + 4;
      iVar14 = local_350;
    }
    if (local_358.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_358.Data);
    }
    if ((*(int *)(puVar4 + 1) < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_2d0.DataPtr = (int *)*puVar4;
    uVar2 = *local_2d0.DataPtr;
    if ((local_360->TriangleGroups).bIsSet == false) {
      iVar18 = -1;
    }
    else {
      if ((-1 < (int)uVar2) &&
         ((int)uVar2 <
          (int)((local_360->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (local_360->TriangleRefCounts).RefCounts.CurBlockUsed))) {
        lVar15 = (ulonglong)(uVar2 >> 9) * 8;
        if ((ushort)(*(short *)(*(longlong *)
                                 ((local_360->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + lVar15) + (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) {
          iVar18 = *(int *)(*(longlong *)
                             ((local_360->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data +
                             lVar15) + (ulonglong)(uVar2 & 0x1ff) * 4);
          goto LAB_14cc3891b;
        }
      }
      iVar18 = 0;
    }
LAB_14cc3891b:
    iVar14 = *(int *)(puVar4 + 1);
    local_344 = iVar18;
    if ((iVar14 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_2d0.ArrayNum = iVar14;
    FaceGroupUtil::SetGroupID(local_360,&local_2d0,iVar18);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_1d8.SelectedGroupIDs,(int *)&local_340,(bool *)&local_344);
    FVar17.Data = FVar17.Data + 8;
  } while( true );
}

// ApplyDeleteFaces @ 14cc38af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplyDeleteFaces(UEditMeshPolygonsTool *this)

{
  FDynamicMesh3 *pFVar1;
  code *pcVar2;
  FScriptContainerElement *_Src;
  int *piVar3;
  longlong *plVar4;
  FText *pFVar5;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar6;
  TRefCountPtr<ITextData> TVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStackY_248 [32];
  undefined1 local_208 [8];
  FText local_200;
  FDynamicMeshEditor local_1f0;
  FText local_1e8;
  FGroupTopologySelection local_1d8;
  FDynamicMeshChangeTracker local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  pFVar1 = (this->CurrentMesh).Object;
  if ((this->ActiveTriangleSelection).ArrayNum < (pFVar1->TriangleRefCounts).UsedCount) {
    UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_e8,pFVar1);
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_e8);
    local_200.Flags = (this->ActiveTriangleSelection).ArrayNum;
    lVar10 = (longlong)(int)local_200.Flags;
    _Src = (this->ActiveTriangleSelection).AllocatorInstance.Data;
    local_200.TextData.Reference = (ITextData *)0x0;
    if (local_200.Flags == 0) {
      local_200._12_4_ = 0;
      uVar8 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_200.Flags,0,(ForAnyElementType *)&local_200,local_200.Flags,
                 (int *)&local_200.field_0xc);
      memcpy(local_200.TextData.Reference,_Src,lVar10 << 2);
      uVar8 = local_200.Flags;
    }
    piVar3 = (int *)&(local_200.TextData.Reference)->field_0x0;
    TVar7.Reference = local_200.TextData.Reference;
    uVar9 = uVar8;
    while( true ) {
      if (uVar9 != uVar8) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_208);
      }
      if (TVar7.Reference == (ITextData *)(piVar3 + (int)uVar8)) break;
      UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_e8,*(int *)TVar7.Reference,true);
      TVar7.Reference = (ITextData *)&(TVar7.Reference)->field_0x4;
      uVar9 = local_200.Flags;
    }
    if (local_200.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_200.TextData.Reference);
    }
    local_1f0.Mesh = pFVar1;
    UE::Geometry::FDynamicMeshEditor::RemoveTriangles
              (&local_1f0,&this->ActiveTriangleSelection,true);
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_1d8);
    TVar6 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_e8);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_1e8,L"UEditMeshPolygonsTool",L"PolyMeshDeleteFacesChange",
                        L"Delete Faces");
    EmitCurrentMeshChangeAndUpdate(this,pFVar5,TVar6,&local_1d8);
    if (local_1e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
    }
    local_1d8.SelectedEdgeIDs.HashSize = 0;
    if (local_1d8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d8.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1d8.SelectedEdgeIDs.Elements);
    local_1d8.SelectedCornerIDs.HashSize = 0;
    if (local_1d8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d8.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1d8.SelectedCornerIDs.Elements);
    local_1d8.SelectedGroupIDs.HashSize = 0;
    if (local_1d8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d8.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_1d8);
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_e8);
  }
  else {
    plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
    pcVar2 = *(code **)(*plVar4 + 0x360);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_200,L"UEditMeshPolygonsTool",L"OnDeleteAllFailedMessage",
                        L"Cannot Delete Entire Mesh");
    (*pcVar2)(plVar4,pFVar5,3);
    if (local_200.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_200.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ApplyDisconnect @ 14cc38d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplyDisconnect(UEditMeshPolygonsTool *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  FDynamicMesh3 *pFVar4;
  FGroupTopologySelection *pFVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  FText *pFVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar11;
  byte bVar12;
  longlong lVar13;
  int iVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  undefined1 auStackY_2d8 [32];
  undefined1 local_298;
  undefined1 local_297 [7];
  TArray<int,TSizedDefaultAllocator<32>_> local_290;
  ForAnyElementType local_280;
  int local_278;
  int local_274;
  FGroupTopologySelection *local_270;
  int iStack_268;
  uint uStack_264;
  TBitArray<FDefaultBitArrayAllocator> *local_260;
  undefined4 uStack_258;
  uint uStack_254;
  uint local_250;
  uint uStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  int local_240;
  int local_23c;
  FDynamicMeshEditor local_238;
  FGroupTopologySelection *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  FText local_1f8;
  FText local_1e8;
  undefined1 local_1d8 [32];
  uint *local_1b8;
  uint local_1b0;
  int local_1a4;
  ForElementType<FSetElementId> local_198;
  int local_190;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_188;
  ForElementType<FSetElementId> local_148;
  int local_140;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_138;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  FDynamicMeshChangeTracker local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  bVar6 = BeginMeshFaceEditChange(this);
  if (bVar6) {
    pFVar4 = (this->CurrentMesh).Object;
    UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_e8,pFVar4);
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_e8);
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
              ((FGroupTopologySelection *)local_1d8,
               (FGroupTopologySelection *)
               &((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_);
    uVar17 = local_1b0;
    iStack_268 = 0;
    local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uStack_264 = 1;
    local_290.ArrayNum = 0;
    local_290.ArrayMax = 0;
    local_250 = 0;
    uStack_254 = local_250;
    if (local_1b0 != 0) {
      puVar18 = (uint *)(local_1d8 + 0x10);
      if (local_1b8 != (uint *)0x0) {
        puVar18 = local_1b8;
      }
      uVar16 = *puVar18;
      local_250 = 0;
      while (uVar16 == 0) {
        lVar13 = (longlong)iStack_268;
        local_250 = local_250 + 0x20;
        iStack_268 = iStack_268 + 1;
        uStack_254 = local_1b0;
        if ((int)((local_1b0 - 1) + ((int)(local_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_268)
        goto LAB_14cc38ee0;
        uVar16 = puVar18[lVar13 + 1];
      }
      uStack_264 = -uVar16 & uVar16;
      uVar2 = (ulonglong)uStack_264 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_240 = (int)lVar13;
      uStack_254 = (local_250 - 1) + local_240;
      if ((int)local_1b0 < (int)uStack_254) {
        uStack_254 = local_1b0;
      }
    }
LAB_14cc38ee0:
    local_260 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10);
    uVar16 = local_1b0 & 0xffffffe0;
    iStack_248 = local_1d8._8_4_ - local_1a4;
    uStack_258 = 0xffffffff;
    TStack_228.CurrentBitIndex = uStack_254;
    TStack_228.UnvisitedBitMask = 0xffffffff;
    TStack_228._padding_ = CONCAT44(uStack_264,iStack_268);
    iVar14 = (int)local_1b0 >> 5;
    TStack_228._28_4_ = uStack_254;
    TStack_228.BaseBitIndex = local_250;
    uStack_208 = CONCAT44(uStack_244,iStack_248);
    bVar12 = (byte)local_1b0;
    local_270 = (FGroupTopologySelection *)local_1d8;
    uStack_24c = uStack_254;
    local_230 = (FGroupTopologySelection *)local_1d8;
    TStack_228.Array = local_260;
    if (((int)local_1b0 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar17 != local_1b0) {
      puVar18 = (uint *)(local_1d8 + 0x10);
      if (local_1b8 != (uint *)0x0) {
        puVar18 = local_1b8;
      }
      uVar17 = -1 << (bVar12 & 0x1f) & puVar18[iVar14];
      while (uVar17 == 0) {
        lVar13 = (longlong)iVar14;
        uVar16 = uVar16 + 0x20;
        iVar14 = iVar14 + 1;
        uVar17 = local_1b0;
        if ((int)((local_1b0 - 1) + ((int)(local_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
        goto LAB_14cc38fe0;
        uVar17 = puVar18[lVar13 + 1];
      }
      uVar2 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_23c = (int)lVar13;
      uVar17 = local_23c + -1 + uVar16;
      if ((int)local_1b0 < (int)uVar17) {
        uVar17 = local_1b0;
      }
    }
LAB_14cc38fe0:
    while( true ) {
      pFVar5 = local_230;
      if (*(int *)&(local_230->SelectedGroupIDs).Elements.field_0x8 -
          *(int *)&(local_230->SelectedGroupIDs).Elements.field_0x34 != (int)uStack_208) {
        local_298 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_298);
      }
      FVar15.Data = local_290.AllocatorInstance.Data;
      if (((TStack_228.CurrentBitIndex == uVar17) &&
          (TStack_228.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10))) &&
         (pFVar5 == (FGroupTopologySelection *)local_1d8)) break;
      iVar14 = *(int *)(*(longlong *)&(pFVar5->SelectedGroupIDs).Elements +
                       (longlong)TStack_228.CurrentBitIndex * 0xc);
      if (((this->Topology).Object == (FGroupTopology *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar10 = UE::Geometry::FGroupTopology::GetGroupTriangles((this->Topology).Object,iVar14);
      if ((&local_290 == pTVar10) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar14 = pTVar10->ArrayNum;
      if (iVar14 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar14,&local_290.AllocatorInstance,&local_290.ArrayNum,
                           &local_290.ArrayMax);
        memcpy(local_290.AllocatorInstance.Data + (longlong)iVar7 * 4,
               (pTVar10->AllocatorInstance).Data,(longlong)iVar14 << 2);
      }
      TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
    }
    lVar13 = (longlong)local_290.ArrayNum;
    local_280.Data = (FScriptContainerElement *)0x0;
    local_278 = local_290.ArrayNum;
    if (local_290.ArrayNum == 0) {
      local_274 = 0;
      iVar14 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_290.ArrayNum,0,&local_280,local_290.ArrayNum,&local_274);
      memcpy(local_280.Data,FVar15.Data,lVar13 << 2);
      iVar14 = local_278;
    }
    pFVar1 = local_280.Data + (longlong)iVar14 * 4;
    FVar15.Data = local_280.Data;
    iVar7 = iVar14;
    while( true ) {
      if (iVar7 != iVar14) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_297);
      }
      if (FVar15.Data == pFVar1) break;
      UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_e8,*(int *)FVar15.Data,true);
      FVar15.Data = FVar15.Data + 4;
      iVar7 = local_278;
    }
    if (local_280.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_280.Data);
    }
    local_238.Mesh = pFVar4;
    UE::Geometry::FDynamicMeshEditor::DisconnectTriangles(&local_238,&local_290,false);
    TVar11 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_e8);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_1e8,L"UEditMeshPolygonsTool",L"PolyMeshDisconnectChange",
                        L"Disconnect");
    EmitCurrentMeshChangeAndUpdate(this,pFVar9,TVar11,(FGroupTopologySelection *)local_1d8);
    if (local_1e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
    }
    if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.AllocatorInstance.Data);
    }
    local_f0 = 0;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_138);
    local_140 = 0;
    if (local_148 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_188);
    local_190 = 0;
    if (local_198 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_198);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1d8);
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_e8);
  }
  else {
    plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar3 = *(code **)(*plVar8 + 0x360);
    pFVar9 = FText::AsLocalizable_Advanced_LocText
                       (&local_1f8,L"UEditMeshPolygonsTool",L"OnDisconnectFailed",
                        L"Cannot Disconnect Current Selection");
    (*pcVar3)(plVar8,pFVar9,3);
    if (local_1f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ApplyDuplicate @ 14cc39300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplyDuplicate(UEditMeshPolygonsTool *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  FText *pFVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  undefined1 auStackY_6f8 [32];
  undefined1 local_6c8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_6c0;
  FDynamicMeshEditResult local_6a8;
  longlong *local_638;
  int iStack_630;
  uint uStack_62c;
  TBitArray<FDefaultBitArrayAllocator> *local_628;
  undefined4 uStack_620;
  uint uStack_61c;
  int local_618;
  uint uStack_614;
  int iStack_610;
  undefined4 uStack_60c;
  int local_608;
  int local_604;
  int local_600 [2];
  FDynamicMesh3 *local_5f8;
  FDynamicMeshEditor local_5f0;
  longlong *local_5e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5e0;
  undefined8 uStack_5c0;
  FText local_5b0;
  FText local_5a0;
  undefined1 local_588 [32];
  uint *local_568;
  uint local_560;
  int local_554;
  ForElementType<FSetElementId> local_548;
  int local_540;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_538;
  ForElementType<FSetElementId> local_4f8;
  int local_4f0;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_4e8;
  ForElementType<FSetElementId> local_4a8;
  int local_4a0;
  FGroupTopologySelection local_498;
  FDynamicMeshChangeTracker local_3a8;
  FMeshIndexMappings local_2f8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_6f8;
  bVar4 = BeginMeshFaceEditChange(this);
  if (bVar4) {
    local_5f8 = (this->CurrentMesh).Object;
    UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_3a8,local_5f8);
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_3a8);
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
              ((FGroupTopologySelection *)local_588,
               (FGroupTopologySelection *)
               &((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_);
    uVar15 = local_560;
    iVar17 = 1;
    local_6c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iStack_630 = 0;
    local_6c0.ArrayNum = 0;
    local_6c0.ArrayMax = 0;
    uStack_62c = 1;
    uStack_61c = 0;
    local_618 = iStack_630;
    if (local_560 != 0) {
      puVar16 = (uint *)(local_588 + 0x10);
      if (local_568 != (uint *)0x0) {
        puVar16 = local_568;
      }
      uStack_62c = *puVar16;
      local_618 = 0;
      iStack_630 = 0;
      while (uStack_62c == 0) {
        lVar11 = (longlong)iStack_630;
        local_618 = local_618 + 0x20;
        iStack_630 = iStack_630 + 1;
        uStack_62c = 1;
        uStack_61c = local_560;
        if ((int)((local_560 - 1) + ((int)(local_560 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_630)
        goto LAB_14cc39480;
        uStack_62c = puVar16[lVar11 + 1];
      }
      uStack_62c = -uStack_62c & uStack_62c;
      uVar2 = (ulonglong)uStack_62c * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_608 = (int)lVar11;
      uStack_61c = local_618 + -1 + local_608;
      if ((int)local_560 < (int)uStack_61c) {
        uStack_61c = local_560;
      }
    }
LAB_14cc39480:
    local_638 = (longlong *)local_588;
    local_628 = (TBitArray<FDefaultBitArrayAllocator> *)(local_588 + 0x10);
    uVar14 = local_560 & 0xffffffe0;
    iStack_610 = local_588._8_4_ - local_554;
    uStack_620 = 0xffffffff;
    TStack_5e0.CurrentBitIndex = uStack_61c;
    TStack_5e0.UnvisitedBitMask = 0xffffffff;
    TStack_5e0._padding_ = CONCAT44(uStack_62c,iStack_630);
    iVar12 = (int)local_560 >> 5;
    TStack_5e0._28_4_ = uStack_61c;
    TStack_5e0.BaseBitIndex = local_618;
    uStack_5c0 = CONCAT44(uStack_60c,iStack_610);
    bVar10 = (byte)local_560;
    uStack_614 = uStack_61c;
    local_5e8 = local_638;
    TStack_5e0.Array = local_628;
    if (((int)local_560 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar15 != local_560) {
      puVar16 = (uint *)(local_588 + 0x10);
      if (local_568 != (uint *)0x0) {
        puVar16 = local_568;
      }
      uVar15 = -1 << (bVar10 & 0x1f) & puVar16[iVar12];
      while (uVar15 == 0) {
        lVar11 = (longlong)iVar12;
        uVar14 = uVar14 + 0x20;
        iVar12 = iVar12 + 1;
        uVar15 = local_560;
        if ((int)((local_560 - 1) + ((int)(local_560 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14cc39590;
        uVar15 = puVar16[lVar11 + 1];
      }
      uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_604 = (int)lVar11;
      uVar15 = local_604 + -1 + uVar14;
      if ((int)local_560 < (int)uVar15) {
        uVar15 = local_560;
      }
    }
LAB_14cc39590:
    while( true ) {
      plVar6 = local_5e8;
      if ((int)local_5e8[1] - *(int *)((longlong)local_5e8 + 0x34) != (int)uStack_5c0) {
        local_6c8[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_6c8);
      }
      if (((TStack_5e0.CurrentBitIndex == uVar15) &&
          (TStack_5e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_588 + 0x10))) &&
         (plVar6 == (longlong *)local_588)) break;
      iVar12 = *(int *)(*plVar6 + (longlong)TStack_5e0.CurrentBitIndex * 0xc);
      if (((this->Topology).Object == (FGroupTopology *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar8 = UE::Geometry::FGroupTopology::GetGroupTriangles((this->Topology).Object,iVar12);
      if ((&local_6c0 == pTVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar12 = pTVar8->ArrayNum;
      if (iVar12 != 0) {
        iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,iVar12,&local_6c0.AllocatorInstance,&local_6c0.ArrayNum,
                           &local_6c0.ArrayMax);
        memcpy(local_6c0.AllocatorInstance.Data + (longlong)iVar5 * 4,
               (pTVar8->AllocatorInstance).Data,(longlong)iVar12 << 2);
      }
      TStack_5e0.UnvisitedBitMask = TStack_5e0.UnvisitedBitMask & ~TStack_5e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5e0);
    }
    local_5f0.Mesh = local_5f8;
    UE::Geometry::FMeshIndexMappings::FMeshIndexMappings(&local_2f8);
    local_6a8.NewVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6a8.NewVertices.ArrayNum = 0;
    local_6a8.NewVertices.ArrayMax = 0;
    local_6a8.NewTriangles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6a8.NewTriangles.ArrayNum = 0;
    local_6a8.NewTriangles.ArrayMax = 0;
    local_6a8.NewQuads.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6a8.NewQuads.ArrayNum = 0;
    local_6a8.NewQuads.ArrayMax = 0;
    local_6a8.NewPolygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6a8.NewPolygons.ArrayNum = 0;
    local_6a8.NewPolygons.ArrayMax = 0;
    local_6a8.NewGroups.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6a8.NewGroups.ArrayNum = 0;
    local_6a8.NewGroups.ArrayMax = 0;
    local_6a8.NewNormalOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6a8.NewNormalOverlayElements.ArrayNum = 0;
    local_6a8.NewNormalOverlayElements.ArrayMax = 0;
    local_6a8.NewColorOverlayElements.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_6a8.NewColorOverlayElements.ArrayNum = 0;
    local_6a8.NewColorOverlayElements.ArrayMax = 0;
    UE::Geometry::FDynamicMeshEditor::DuplicateTriangles
              (&local_5f0,&local_6c0,&local_2f8,&local_6a8);
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_498);
    pTVar8 = &local_6a8.NewTriangles;
    if (this->bTriangleMode == false) {
      pTVar8 = &local_6a8.NewGroups;
    }
    iVar12 = pTVar8->ArrayNum;
    pFVar13 = (pTVar8->AllocatorInstance).Data;
    if ((iVar12 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar15 = (local_498.SelectedGroupIDs.Elements._8_4_ - local_498.SelectedGroupIDs.Elements._52_4_
             ) + iVar12;
    if ((uint)(local_498.SelectedGroupIDs.Elements._8_4_ -
              local_498.SelectedGroupIDs.Elements._52_4_) < uVar15) {
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar15);
      }
      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&local_498,uVar15);
      if (3 < uVar15) {
        uVar2 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar17 = 1 << ((byte)lVar11 & 0x1f);
      }
      if ((local_498.SelectedGroupIDs.HashSize == 0) ||
         (local_498.SelectedGroupIDs.HashSize < iVar17)) {
        local_498.SelectedGroupIDs.HashSize = iVar17;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(&local_498.SelectedGroupIDs);
      }
    }
    pFVar1 = pFVar13 + (longlong)iVar12 * 4;
    for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 4) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_498.SelectedGroupIDs,local_600,(bool *)pFVar13);
    }
    TVar9 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_3a8);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_5a0,L"UEditMeshPolygonsTool",L"PolyMeshDisconnectChange",
                        L"Disconnect");
    EmitCurrentMeshChangeAndUpdate(this,pFVar7,TVar9,&local_498);
    if (local_5a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5a0.TextData.Reference + 0x10))();
    }
    local_498.SelectedEdgeIDs.HashSize = 0;
    if (local_498.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_498.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_498.SelectedEdgeIDs.Elements);
    local_498.SelectedCornerIDs.HashSize = 0;
    if (local_498.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_498.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_498.SelectedCornerIDs.Elements);
    local_498.SelectedGroupIDs.HashSize = 0;
    if (local_498.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_498.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_498);
    if (local_6a8.NewColorOverlayElements.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_6a8.NewColorOverlayElements.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               local_6a8.NewNormalOverlayElements.AllocatorInstance.Data,
               local_6a8.NewNormalOverlayElements.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)
        local_6a8.NewNormalOverlayElements.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_6a8.NewNormalOverlayElements.AllocatorInstance.Data);
    }
    if (local_6a8.NewGroups.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8.NewGroups.AllocatorInstance.Data);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)
               local_6a8.NewPolygons.AllocatorInstance.Data,local_6a8.NewPolygons.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_6a8.NewPolygons.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_6a8.NewPolygons.AllocatorInstance.Data);
    }
    if (local_6a8.NewQuads.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8.NewQuads.AllocatorInstance.Data);
    }
    if (local_6a8.NewTriangles.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8.NewTriangles.AllocatorInstance.Data);
    }
    if (local_6a8.NewVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6a8.NewVertices.AllocatorInstance.Data);
    }
    UE::Geometry::FMeshIndexMappings::~FMeshIndexMappings(&local_2f8);
    if (local_6c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_6c0.AllocatorInstance.Data);
    }
    local_4a0 = 0;
    if (local_4a8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_4a8);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_4e8);
    local_4f0 = 0;
    if (local_4f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_4f8);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_538);
    local_540 = 0;
    if (local_548 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_548);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_588);
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_3a8);
  }
  else {
    plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar3 = *(code **)(*plVar6 + 0x360);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_5b0,L"UEditMeshPolygonsTool",L"OnDuplicateFailed",
                        L"Cannot Duplicate Current Selection");
    (*pcVar3)(plVar6,pFVar7,3);
    if (local_5b0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5b0.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ApplyFillHole @ 14cc39a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplyFillHole(UEditMeshPolygonsTool *this)

{
  bool *pbVar1;
  code *pcVar2;
  FDynamicMesh3 *pFVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  longlong *plVar7;
  FText *pFVar8;
  FEdgeLoop *pFVar9;
  ulonglong uVar10;
  longlong lVar11;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  bool *pbVar19;
  ulonglong uVar20;
  ForElementType<unsigned_int> FVar21;
  int iVar22;
  FEdgeLoop *this_00;
  FScriptContainerElement *pFVar23;
  undefined1 auStackY_4e8 [32];
  undefined1 local_4a8 [4];
  int local_4a4;
  uint local_4a0;
  int local_498;
  uint uStack_494;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_490;
  undefined4 local_488;
  int iStack_484;
  int iStack_480;
  undefined4 uStack_47c;
  FDynamicMeshEditor local_478;
  FScriptContainerElement *local_470;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_468;
  int local_458;
  undefined4 local_454;
  int local_450;
  int local_44c;
  UEditMeshPolygonsTool *local_448;
  TVector2<float>_u_0 local_440;
  longlong *local_438;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_430;
  code *local_410;
  UEditMeshPolygonsTool **local_408;
  undefined1 local_3f8 [16];
  longlong local_3e8;
  FDynamicMesh3 *local_3e0;
  FEdgeLoop local_3d8;
  EFillType local_398;
  int local_394;
  TVector<double>_u_0 local_388;
  TQuaternion<double>_u_0 local_370;
  FText local_348;
  FText local_338;
  TVector<double>_u_0 local_328;
  TVector<double>_u_0 local_310;
  TVector<double> local_2f8;
  FEdgeLoop local_2e0;
  undefined1 local_298 [104];
  longlong *local_230;
  ForAnyElementType local_228;
  undefined8 local_220;
  bool local_218;
  ForAnyElementType local_210;
  undefined8 local_208;
  undefined1 local_1f8 [32];
  ForElementType<unsigned_int> local_1d8;
  int local_1d0;
  int local_1c4;
  undefined1 local_1c0 [8];
  ForAnyElementType local_1b8;
  uint local_1b0;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1a8;
  ForElementType<FSetElementId> local_168;
  int local_160;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_158;
  ForElementType<FSetElementId> local_118;
  int local_110;
  FDynamicMeshChangeTracker local_108;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  local_408 = &local_448;
  local_410 = UE::Core::Private::Function::
              TFunctionRefCaller<`UEditMeshPolygonsTool::BeginMeshBoundaryEdgeEditChange'::__l7::<lambda_2>,bool,int>
              ::Call;
  local_448 = this;
  bVar5 = BeginMeshEdgeEditChange(this,(TFunctionRef<bool___cdecl(int)> *)&local_410);
  if (bVar5) {
    pFVar3 = (this->CurrentMesh).Object;
    UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_108,pFVar3);
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_108);
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
              ((FGroupTopologySelection *)local_1f8);
    dVar4 = __real_3ff0000000000000;
    local_4a0 = (this->ActiveEdgeSelection).ArrayNum;
    uVar15 = (ulonglong)(int)local_4a0;
    pFVar23 = (this->ActiveEdgeSelection).AllocatorInstance.Data;
    pFVar17 = pFVar23 + uVar15 * 0x18;
    local_470 = pFVar17;
    while( true ) {
      if ((this->ActiveEdgeSelection).ArrayNum != (int)uVar15) {
        local_4a8[0] = 0;
        `TCheckedPointerIterator<UEditMeshPolygonsTool::FSelectedEdge,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_4a8);
      }
      if (pFVar23 == pFVar17) break;
      if ((*(int *)(pFVar23 + 0x10) < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(int *)(*(longlong *)
                    ((pFVar3->Edges).Blocks.AllocatorInstance.Data +
                    (ulonglong)(**(uint **)(pFVar23 + 8) >> 9) * 8) + 0xc +
                  (ulonglong)(**(uint **)(pFVar23 + 8) & 0x1ff) * 0x10) == -1) {
        local_298._8_8_ = (FEdgeLoop *)0x0;
        local_298._16_4_ = 0;
        local_298._20_4_ = 0;
        local_298._24_8_ = (FEdgeSpan *)0x0;
        local_298._32_4_ = 0;
        local_298._36_4_ = 0;
        local_298[0x28] = false;
        local_298[0x29] = false;
        local_298[0x2a] = false;
        local_298._44_4_ = Compute;
        local_298._48_4_ = ConvertToOpenSpan;
        local_298._64_8_ = 0;
        local_230 = (longlong *)0x0;
        local_228.Data = (FScriptContainerElement *)0x0;
        local_220._0_4_ = 0;
        local_220._4_4_ = 0;
        local_218 = false;
        local_210.Data = (FScriptContainerElement *)0x0;
        local_208._0_4_ = 0;
        local_208._4_4_ = 0;
        local_298._0_8_ = pFVar3;
        UE::Geometry::FMeshBoundaryLoops::Compute((FMeshBoundaryLoops *)local_298);
        if ((*(int *)(pFVar23 + 0x10) < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar6 = UE::Geometry::FMeshBoundaryLoops::FindLoopContainingEdge
                          ((FMeshBoundaryLoops *)local_298,**(int **)(pFVar23 + 8));
        if (-1 < (int)uVar6) {
          uVar13 = 0;
          if ((int)uVar6 < (int)local_298._16_4_) {
            uVar13 = ~uVar6 >> 0x1f;
          }
          if ((uVar13 == 0) &&
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
          this_00 = (FEdgeLoop *)(local_298._8_8_ + (longlong)(int)uVar6 * 0x40);
          pFVar9 = UE::Geometry::FEdgeLoop::FEdgeLoop(&local_2e0,this_00);
          local_3f8._8_8_ = (bool *)0x0;
          local_3e8 = 0;
          local_3f8._0_8_ = &___7FSimpleHoleFiller_Geometry_UE__6B_;
          local_3e0 = pFVar3;
          UE::Geometry::FEdgeLoop::FEdgeLoop(&local_3d8,pFVar9);
          local_398 = TriangleFan;
          local_394 = -1;
          pFVar17 = (pFVar9->BowtieVertices).AllocatorInstance.Data;
          if (pFVar17 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar17);
          }
          pFVar17 = (pFVar9->Edges).AllocatorInstance.Data;
          if (pFVar17 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar17);
          }
          pFVar17 = (pFVar9->Vertices).AllocatorInstance.Data;
          if (pFVar17 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar17);
          }
          local_4a4 = pFVar3->GroupIDCounter;
          local_398 = PolygonEarClipping;
          pFVar3->GroupIDCounter = local_4a4 + 1;
          UE::Geometry::FSimpleHoleFiller::Fill((FSimpleHoleFiller *)local_3f8,local_4a4);
          pbVar19 = (bool *)local_3f8._8_8_;
          if (this->bTriangleMode == false) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1f8,&local_458
                       ,(bool *)&local_4a4);
          }
          else {
            iVar22 = (int)local_3e8;
            lVar18 = (longlong)(int)local_3e8;
            if (((int)local_3e8 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar5)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            uVar6 = (local_1f8._8_4_ - local_1c4) + iVar22;
            if ((uint)(local_1f8._8_4_ - local_1c4) < uVar6) {
              if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar6);
              }
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_1f8,uVar6);
              if (uVar6 < 4) {
                uVar6 = 1;
              }
              else {
                uVar15 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
                lVar16 = 0x3f;
                if (uVar15 != 0) {
                  for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                  }
                }
                local_454 = (undefined4)lVar16;
                uVar6 = 1 << ((byte)lVar16 & 0x1f);
              }
              if ((local_1b0 == 0) || ((int)local_1b0 < (int)uVar6)) {
                local_1b0 = uVar6;
                if ((ForElementType<FSetElementId>)local_1b8.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_1b8,0,0,4);
                }
                if (uVar6 != 0) {
                  uVar13 = uVar6;
                  if (uVar6 < 2) {
                    if ((ForElementType<FSetElementId>)local_1b8.Data !=
                        (ForElementType<FSetElementId>)0x0) {
                      uVar13 = 0;
                      goto LAB_14cc39ecd;
                    }
                  }
                  else {
LAB_14cc39ecd:
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              (&local_1b8,0,uVar13,4);
                  }
                  if (0 < (int)uVar6) {
                    uVar20 = (ulonglong)uVar6;
                    uVar15 = 0;
                    do {
                      FVar14.Data = (FScriptContainerElement *)local_1c0;
                      if ((ForElementType<FSetElementId>)local_1b8.Data !=
                          (ForElementType<FSetElementId>)0x0) {
                        FVar14.Data = local_1b8.Data;
                      }
                      uVar10 = uVar15 & (longlong)(int)uVar6 - 1U;
                      uVar15 = uVar15 + 1;
                      *(undefined4 *)((longlong)FVar14.Data + uVar10 * 4) = 0xffffffff;
                      uVar20 = uVar20 - 1;
                    } while (uVar20 != 0);
                  }
                }
                if (local_1b0 != 0) {
                  pTStack_490 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1f8 + 0x10);
                  uStack_494 = 1;
                  local_498 = 0;
                  iStack_484 = 0;
                  iStack_480 = 0;
                  if (local_1d0 != 0) {
                    FVar21 = (ForElementType<unsigned_int>)((longlong)local_1f8 + 0x10);
                    if (local_1d8 != (ForElementType<unsigned_int>)0x0) {
                      FVar21 = local_1d8;
                    }
                    uVar6 = *(uint *)FVar21;
                    local_498 = 0;
                    while (uVar6 == 0) {
                      iStack_480 = iStack_480 + 0x20;
                      lVar16 = (longlong)local_498;
                      local_498 = local_498 + 1;
                      if ((int)(local_1d0 + -1 + (local_1d0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_498)
                      goto LAB_14cc39ff2;
                      uVar6 = ((uint *)((longlong)FVar21 + 4))[lVar16];
                    }
                    uStack_494 = -uVar6 & uVar6;
                    uVar15 = (ulonglong)uStack_494 * 2 + 1;
                    lVar16 = 0x3f;
                    if (uVar15 != 0) {
                      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                      }
                    }
                    local_450 = (int)lVar16;
                    iStack_484 = local_450 + -1 + iStack_480;
                    if (local_1d0 < iStack_484) {
LAB_14cc39ff2:
                      iStack_484 = local_1d0;
                    }
                  }
                  local_488 = 0xffffffff;
                  local_438 = (longlong *)local_1f8;
                  local_430._padding_ = CONCAT44(uStack_494,local_498);
                  local_430.CurrentBitIndex = iStack_484;
                  local_430.UnvisitedBitMask = 0xffffffff;
                  local_430._28_4_ = uStack_47c;
                  local_430.BaseBitIndex = iStack_480;
                  local_430.Array = pTStack_490;
                  iVar22 = iStack_484;
                  if (iStack_484 < local_1d0) {
                    do {
                      lVar16 = *local_438;
                      lVar11 = (longlong)iVar22;
                      uVar6 = local_1b0 - 1 & *(uint *)(lVar16 + lVar11 * 0xc);
                      *(uint *)(lVar16 + 8 + lVar11 * 0xc) = uVar6;
                      FVar14.Data = (FScriptContainerElement *)local_1c0;
                      if ((ForElementType<FSetElementId>)local_1b8.Data !=
                          (ForElementType<FSetElementId>)0x0) {
                        FVar14.Data = local_1b8.Data;
                      }
                      uVar15 = (longlong)(int)local_1b0 - 1U & (longlong)(int)uVar6;
                      *(undefined4 *)(lVar16 + 4 + lVar11 * 0xc) =
                           *(undefined4 *)((longlong)FVar14.Data + uVar15 * 4);
                      *(int *)((longlong)FVar14.Data + uVar15 * 4) = iVar22;
                      local_430.UnvisitedBitMask =
                           local_430.UnvisitedBitMask & ~local_430._padding_._4_4_;
                      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_430);
                      iVar22 = local_430.CurrentBitIndex;
                    } while (local_430.CurrentBitIndex < (local_430.Array)->NumBits);
                  }
                }
              }
            }
            pbVar1 = (bool *)((undefined8)pbVar19 + lVar18 * 4);
            for (; pbVar19 != pbVar1; pbVar19 = pbVar19 + 4) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1f8,
                         &local_44c,pbVar19);
            }
          }
          if ((pFVar3->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) {
            local_468.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_468.ArrayNum = 0;
            local_468.ArrayMax = 0;
            UE::Geometry::FEdgeLoop::GetVertices<UE::Math::TVector<double>_>(this_00,&local_468);
            PolygonTriangulation::ComputePolygonPlane<double>
                      (&local_468,&local_2f8,(TVector<double> *)&local_328._s_0);
            local_388._s_0.X = local_328._s_0.X;
            local_388._s_0.Y = local_328._s_0.Y;
            local_370._s_0.X = 0.0;
            local_310._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
            local_310._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
            local_310._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
            local_370._s_0.W = dVar4;
            local_370._s_0.Y = 0.0;
            local_370._s_0.Z = 0.0;
            local_388._s_0.Z = local_328._s_0.Z;
            local_478.Mesh = pFVar3;
            UE::Geometry::TQuaternion<double>::SetFromTo
                      ((TQuaternion<double> *)&local_370._s_0,(TVector<double> *)&local_310._s_0,
                       &local_2f8);
            UE::Geometry::FDynamicMeshEditor::SetTriangleNormals
                      (&local_478,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_3f8 + 8));
            local_440 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
            UE::Geometry::FDynamicMeshEditor::SetTriangleUVsFromProjection
                      (&local_478,(TArray<int,TSizedDefaultAllocator<32>_> *)(local_3f8 + 8),
                       (TFrame3<double> *)&local_388._s_0,this->UVScaleFactor,
                       (TVector2<float> *)&local_440._s_0,true,0);
            if (local_468.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_468.AllocatorInstance.Data);
            }
          }
          local_3f8._0_8_ = &___7FSimpleHoleFiller_Geometry_UE__6B_;
          if (local_3d8.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d8.BowtieVertices.AllocatorInstance.Data);
          }
          if (local_3d8.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d8.Edges.AllocatorInstance.Data);
          }
          if (local_3d8.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3d8.Vertices.AllocatorInstance.Data);
          }
          if ((bool *)local_3f8._8_8_ != (bool *)0x0) {
            FMemory::Free((void *)local_3f8._8_8_);
          }
        }
        if (local_210.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_210.Data);
        }
        if (local_228.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data);
        }
        if (local_298._64_8_ != 0) {
          plVar7 = (longlong *)(local_298 + 0x50);
          if (local_230 != (longlong *)0x0) {
            plVar7 = local_230;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        DestructItems<UE::Geometry::FEdgeSpan,int>((FEdgeSpan *)local_298._24_8_,local_298._32_4_);
        if ((FEdgeSpan *)local_298._24_8_ != (FEdgeSpan *)0x0) {
          FMemory::Free((void *)local_298._24_8_);
        }
        DestructItems<UE::Geometry::FEdgeLoop,int>((FEdgeLoop *)local_298._8_8_,local_298._16_4_);
        pFVar17 = local_470;
        if ((FEdgeLoop *)local_298._8_8_ != (FEdgeLoop *)0x0) {
          FMemory::Free((void *)local_298._8_8_);
          pFVar17 = local_470;
        }
      }
      uVar15 = (ulonglong)local_4a0;
      pFVar23 = pFVar23 + 0x18;
    }
    TVar12 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_108);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_338,L"UEditMeshPolygonsTool",L"PolyMeshFillHoleChange",L"Fill Hole");
    EmitCurrentMeshChangeAndUpdate(this,pFVar8,TVar12,(FGroupTopologySelection *)local_1f8);
    if (local_338.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_338.TextData.Reference + 0x10))();
    }
    local_110 = 0;
    if (local_118 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_118);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_158);
    local_160 = 0;
    if (local_168 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_168);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1a8);
    local_1b0 = 0;
    if ((ForElementType<FSetElementId>)local_1b8.Data != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free(local_1b8.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1f8);
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_108);
  }
  else {
    plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar2 = *(code **)(*plVar7 + 0x360);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_348,L"UEditMeshPolygonsTool",L"OnEdgeFillFailed",
                        L"Cannot Fill current selection");
    (*pcVar2)(plVar7,pFVar8,3);
    if (local_348.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_348.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ApplyFlipNormals @ 14cc3a860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplyFlipNormals(UEditMeshPolygonsTool *this)

{
  FScriptContainerElement *pFVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  FDynamicMesh3 *this_00;
  bool bVar5;
  longlong *plVar6;
  FText *pFVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar9;
  byte bVar10;
  longlong lVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 auStack_298 [32];
  undefined1 local_278;
  undefined1 local_277 [7];
  longlong *local_270;
  int iStack_268;
  uint uStack_264;
  TBitArray<FDefaultBitArrayAllocator> *local_260;
  undefined4 uStack_258;
  uint uStack_254;
  int local_250;
  uint uStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  int local_240;
  int local_23c;
  UEditMeshPolygonsTool *local_238;
  longlong *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  FText local_1f8;
  FText local_1e8;
  undefined1 local_1d8 [32];
  uint *local_1b8;
  uint local_1b0;
  int local_1a4;
  ForElementType<FSetElementId> local_198;
  int local_190;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_188;
  ForElementType<FSetElementId> local_148;
  int local_140;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_138;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  FDynamicMeshChangeTracker local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_298;
  local_238 = this;
  bVar5 = BeginMeshFaceEditChange(this);
  if (bVar5) {
    this_00 = (this->CurrentMesh).Object;
    UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_e8,this_00);
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_e8);
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
              ((FGroupTopologySelection *)local_1d8,
               (FGroupTopologySelection *)
               &((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_);
    uVar15 = local_1b0;
    iStack_268 = 0;
    local_250 = 0;
    uStack_264 = 1;
    uStack_254 = 0;
    if (local_1b0 != 0) {
      puVar16 = (uint *)(local_1d8 + 0x10);
      if (local_1b8 != (uint *)0x0) {
        puVar16 = local_1b8;
      }
      uVar14 = *puVar16;
      while (uVar14 == 0) {
        lVar11 = (longlong)iStack_268;
        local_250 = local_250 + 0x20;
        iStack_268 = iStack_268 + 1;
        uStack_254 = local_1b0;
        if ((int)((local_1b0 - 1) + ((int)(local_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_268)
        goto LAB_14cc3a9d1;
        uVar14 = puVar16[lVar11 + 1];
      }
      uStack_264 = -uVar14 & uVar14;
      uVar2 = (ulonglong)uStack_264 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_240 = (int)lVar11;
      uStack_254 = local_250 + -1 + local_240;
      if ((int)local_1b0 < (int)uStack_254) {
        uStack_254 = local_1b0;
      }
    }
LAB_14cc3a9d1:
    local_270 = (longlong *)local_1d8;
    local_260 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10);
    uVar14 = local_1b0 & 0xffffffe0;
    iStack_248 = local_1d8._8_4_ - local_1a4;
    uStack_258 = 0xffffffff;
    TStack_228.CurrentBitIndex = uStack_254;
    TStack_228.UnvisitedBitMask = 0xffffffff;
    TStack_228._padding_ = CONCAT44(uStack_264,iStack_268);
    iVar12 = (int)local_1b0 >> 5;
    TStack_228._28_4_ = uStack_254;
    TStack_228.BaseBitIndex = local_250;
    uStack_208 = CONCAT44(uStack_244,iStack_248);
    bVar10 = (byte)local_1b0;
    uStack_24c = uStack_254;
    local_230 = local_270;
    TStack_228.Array = local_260;
    if (((int)local_1b0 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar15 != local_1b0) {
      puVar16 = (uint *)(local_1d8 + 0x10);
      if (local_1b8 != (uint *)0x0) {
        puVar16 = local_1b8;
      }
      uVar15 = -1 << (bVar10 & 0x1f) & puVar16[iVar12];
      while (uVar15 == 0) {
        lVar11 = (longlong)iVar12;
        uVar14 = uVar14 + 0x20;
        iVar12 = iVar12 + 1;
        uVar15 = local_1b0;
        if ((int)((local_1b0 - 1) + ((int)(local_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14cc3aaf0;
        uVar15 = puVar16[lVar11 + 1];
      }
      uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_23c = (int)lVar11;
      uVar15 = local_23c + -1 + uVar14;
      if ((int)local_1b0 < (int)uVar15) {
        uVar15 = local_1b0;
      }
    }
LAB_14cc3aaf0:
    while( true ) {
      plVar6 = local_230;
      if ((int)local_230[1] - *(int *)((longlong)local_230 + 0x34) != (int)uStack_208) {
        local_278 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_278);
      }
      if (((TStack_228.CurrentBitIndex == uVar15) &&
          (TStack_228.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10))) &&
         (plVar6 == (longlong *)local_1d8)) break;
      iVar12 = *(int *)(*plVar6 + (longlong)TStack_228.CurrentBitIndex * 0xc);
      if (((this->Topology).Object == (FGroupTopology *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar8 = UE::Geometry::FGroupTopology::GetGroupTriangles((this->Topology).Object,iVar12);
      pFVar13 = (pTVar8->AllocatorInstance).Data;
      iVar12 = pTVar8->ArrayNum;
      pFVar1 = pFVar13 + (longlong)iVar12 * 4;
      while( true ) {
        if (pTVar8->ArrayNum != iVar12) {
          local_277[0] = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_277);
        }
        if (pFVar13 == pFVar1) break;
        iVar3 = *(int *)pFVar13;
        UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_e8,iVar3,true);
        UE::Geometry::FDynamicMesh3::ReverseTriOrientation(this_00,iVar3);
        pFVar13 = pFVar13 + 4;
      }
      TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
      this = local_238;
    }
    TVar9 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_e8);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_1e8,L"UEditMeshPolygonsTool",L"PolyMeshFlipNormalsChange",
                        L"Flip Normals");
    EmitCurrentMeshChangeAndUpdate(this,pFVar7,TVar9,(FGroupTopologySelection *)local_1d8);
    if (local_1e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
    }
    local_f0 = 0;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_138);
    local_140 = 0;
    if (local_148 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_188);
    local_190 = 0;
    if (local_198 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_198);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1d8);
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_e8);
  }
  else {
    plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar4 = *(code **)(*plVar6 + 0x360);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_1f8,L"UEditMeshPolygonsTool",L"OnFlipNormalsFailedMessage",
                        L"Cannot Flip Normals for Current  Selection");
    (*pcVar4)(plVar6,pFVar7,3);
    if (local_1f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ApplyFlipSingleEdge @ 14cc3acf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall UEditMeshPolygonsTool::ApplyFlipSingleEdge(UEditMeshPolygonsTool *this)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  FDynamicMesh3 *pFVar4;
  code *pcVar5;
  FDynamicMeshAttributeSet *pFVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  char cVar10;
  longlong *plVar11;
  FText *pFVar12;
  FGroupTopologySelection *pFVar13;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  undefined1 auStack_388 [32];
  undefined8 local_368;
  longlong local_360;
  undefined1 local_358;
  undefined1 local_357 [3];
  int local_354;
  int local_350 [2];
  FDynamicMesh3 *local_348;
  undefined8 local_340;
  FScriptContainerElement *local_338;
  code *local_330;
  FDynamicMesh3 **local_328;
  undefined1 local_320 [4];
  undefined8 local_31c;
  undefined8 uStack_314;
  undefined8 local_30c;
  FText local_2f8;
  FText local_2e8;
  FGroupTopologySelection local_2d8;
  FGroupTopologySelection local_1e8;
  FDynamicMeshChangeTracker local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  pFVar4 = (this->CurrentMesh).Object;
  local_328 = &local_348;
  local_330 = UE::Core::Private::Function::
              TFunctionRefCaller<`UEditMeshPolygonsTool::ApplyFlipSingleEdge'::__l3::<lambda_1>,bool,int>
              ::Call;
  local_348 = pFVar4;
  bVar9 = BeginMeshEdgeEditChange(this,(TFunctionRef<bool___cdecl(int)> *)&local_330);
  if (bVar9) {
    UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_f8,pFVar4);
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_f8);
    uVar8 = _UNK_15060db28;
    uVar7 = ___xmm_ffffffffffffffffffffffffffffffff;
    iVar2 = (this->ActiveEdgeSelection).ArrayNum;
    pFVar16 = (this->ActiveEdgeSelection).AllocatorInstance.Data;
    local_338 = pFVar16 + (longlong)iVar2 * 0x18;
    while( true ) {
      pFVar15 = local_338;
      if ((this->ActiveEdgeSelection).ArrayNum != iVar2) {
        local_358 = 0;
        `TCheckedPointerIterator<UEditMeshPolygonsTool::FSelectedEdge,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_358);
      }
      if (pFVar16 == pFVar15) break;
      if (*(int *)(pFVar16 + 0x10) < 1) {
        local_368 = 0;
        local_360 = (longlong)*(int *)(pFVar16 + 0x10);
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar3 = **(uint **)(pFVar16 + 8);
      if ((-1 < (int)uVar3) &&
         ((int)uVar3 <
          (int)((pFVar4->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar4->EdgeRefCounts).RefCounts.CurBlockUsed))) {
        uVar17 = (ulonglong)(uVar3 & 0x1ff);
        lVar1 = (ulonglong)(uVar3 >> 9) * 8;
        if (((ushort)(*(short *)(*(longlong *)
                                  ((pFVar4->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                  lVar1) + uVar17 * 2) - 1U) < 0xfffe) &&
           (*(int *)(*(longlong *)((pFVar4->Edges).Blocks.AllocatorInstance.Data + lVar1) + 0xc +
                    uVar17 * 0x10) != -1)) {
          pFVar6 = (pFVar4->AttributeSet).Ptr;
          cVar10 = (**(code **)(pFVar6->_padding_ + 0x80))(pFVar6,uVar3);
          if (cVar10 == '\0') {
            local_340 = *(undefined8 *)
                         (*(longlong *)((pFVar4->Edges).Blocks.AllocatorInstance.Data + lVar1) + 8 +
                         uVar17 * 0x10);
            UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_f8,(int)local_340,true);
            UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_f8,local_340._4_4_,true);
            local_30c = 0xffffffffffffffff;
            local_31c = uVar7;
            uStack_314 = uVar8;
            (**(code **)(pFVar4->_padding_ + 0x40))(pFVar4,uVar3,local_320);
          }
        }
      }
      pFVar16 = pFVar16 + 0x18;
    }
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_2d8);
    if ((this->Topology).Object == (FGroupTopology *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (**(code **)(((this->Topology).Object)->_padding_ + 8))();
    iVar2 = (this->ActiveEdgeSelection).ArrayNum;
    pFVar15 = (this->ActiveEdgeSelection).AllocatorInstance.Data;
    pFVar16 = pFVar15 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((this->ActiveEdgeSelection).ArrayNum != iVar2) {
        local_357[0] = 0;
        `TCheckedPointerIterator<UEditMeshPolygonsTool::FSelectedEdge,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_357);
      }
      if (pFVar15 == pFVar16) break;
      if (*(int *)(pFVar15 + 0x10) < 1) {
        local_368 = 0;
        local_360 = (longlong)*(int *)(pFVar15 + 0x10);
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      uVar3 = **(uint **)(pFVar15 + 8);
      if (((-1 < (int)uVar3) &&
          ((int)uVar3 <
           (int)((pFVar4->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                (pFVar4->EdgeRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((pFVar4->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 2) - 1U)
          < 0xfffe)) {
        if ((this->Topology).Object == (FGroupTopology *)0x0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        local_354 = UE::Geometry::FGroupTopology::FindGroupEdgeID((this->Topology).Object,uVar3);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
                  (&local_2d8.SelectedEdgeIDs,local_350,(bool *)&local_354);
      }
      pFVar15 = pFVar15 + 0x18;
    }
    pFVar13 = UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_1e8);
    TVar14 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_f8);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_2e8,L"UEditMeshPolygonsTool",L"PolyMeshFlipChange",L"Flip Edges");
    EmitCurrentMeshChangeAndUpdate(this,pFVar12,TVar14,pFVar13);
    if (local_2e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2e8.TextData.Reference + 0x10))();
    }
    local_1e8.SelectedEdgeIDs.HashSize = 0;
    if (local_1e8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1e8.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1e8.SelectedEdgeIDs.Elements);
    local_1e8.SelectedCornerIDs.HashSize = 0;
    if (local_1e8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1e8.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1e8.SelectedCornerIDs.Elements);
    local_1e8.SelectedGroupIDs.HashSize = 0;
    if (local_1e8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1e8.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_1e8);
    local_2d8.SelectedEdgeIDs.HashSize = 0;
    if (local_2d8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2d8.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2d8.SelectedEdgeIDs.Elements);
    local_2d8.SelectedCornerIDs.HashSize = 0;
    if (local_2d8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2d8.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2d8.SelectedCornerIDs.Elements);
    local_2d8.SelectedGroupIDs.HashSize = 0;
    if (local_2d8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2d8.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_2d8);
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_f8);
  }
  else {
    plVar11 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar5 = *(code **)(*plVar11 + 0x360);
    pFVar12 = FText::AsLocalizable_Advanced_LocText
                        (&local_2f8,L"UEditMeshPolygonsTool",L"OnFlipFailedMessage",
                         L"Cannot Flip Current Selection (no non-seam edges selected)");
    (*pcVar5)(plVar11,pFVar12,3);
    if (local_2f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2f8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ApplyMerge @ 14cc3b450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplyMerge(UEditMeshPolygonsTool *this)

{
  code *pcVar1;
  FDynamicMesh3 *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong *plVar6;
  FText *pFVar7;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar8;
  ForAnyElementType FVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStackY_2e8 [32];
  undefined1 local_2a8;
  undefined1 local_2a7 [7];
  ForAnyElementType local_2a0;
  int local_298;
  int local_294;
  int local_290 [2];
  FMeshConnectedComponents local_288;
  undefined1 local_270 [16];
  int local_260;
  undefined4 uStack_25c;
  int local_258 [2];
  FScriptContainerElement *local_250;
  int *piStack_248;
  undefined8 local_240;
  TArrayView<int_const_,int> local_238;
  FText local_220;
  TFunction<bool___cdecl(int,int)> local_208;
  FGroupTopologySelection local_1d8;
  FDynamicMeshChangeTracker local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  bVar5 = BeginMeshFaceEditChange(this);
  if (bVar5) {
    pFVar2 = (this->CurrentMesh).Object;
    UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_e8,pFVar2);
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_e8);
    local_298 = (this->ActiveTriangleSelection).ArrayNum;
    lVar12 = (longlong)local_298;
    pFVar3 = (this->ActiveTriangleSelection).AllocatorInstance.Data;
    local_2a0.Data = (FScriptContainerElement *)0x0;
    if (local_298 == 0) {
      local_294 = 0;
      iVar10 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_298,0,&local_2a0,local_298,&local_294);
      memcpy(local_2a0.Data,pFVar3,lVar12 << 2);
      iVar10 = local_298;
    }
    pFVar3 = local_2a0.Data + (longlong)iVar10 * 4;
    FVar9.Data = local_2a0.Data;
    iVar11 = iVar10;
    while( true ) {
      if (iVar11 != iVar10) {
        local_2a8 = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_2a8);
      }
      if (FVar9.Data == pFVar3) break;
      UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_e8,*(int *)FVar9.Data,true);
      FVar9.Data = FVar9.Data + 4;
      iVar11 = local_298;
    }
    if (local_2a0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a0.Data);
    }
    local_288.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_288.Components.Array.ArrayNum = 0;
    local_288.Components.Array.ArrayMax = 0;
    local_208._0_8_ = 0;
    local_208._40_8_ = 0;
    local_288.Mesh = pFVar2;
    UE::Geometry::FMeshConnectedComponents::FindConnectedTriangles
              (&local_288,&this->ActiveTriangleSelection,&local_208);
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_1d8);
    local_270._8_8_ = &local_288.Components.Array.ArrayNum;
    local_270._0_8_ = local_288.Components.Array.AllocatorInstance.Data;
    local_260 = local_288.Components.Array.ArrayNum;
    local_240 = CONCAT44(uStack_25c,local_288.Components.Array.ArrayNum);
    pFVar3 = local_288.Components.Array.AllocatorInstance.Data +
             (longlong)local_288.Components.Array.ArrayNum * 8;
    FVar9.Data = local_288.Components.Array.AllocatorInstance.Data;
    piStack_248 = (int *)local_270._8_8_;
    while( true ) {
      local_250 = FVar9.Data;
      if (*piStack_248 != (int)local_240) {
        local_2a7[0] = 0;
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()(local_2a7)
        ;
      }
      if (FVar9.Data == pFVar3) break;
      iVar10 = pFVar2->GroupIDCounter;
      puVar4 = *(undefined8 **)FVar9.Data;
      pFVar2->GroupIDCounter = iVar10 + 1;
      local_238.DataPtr = (int *)*puVar4;
      iVar11 = *(int *)(puVar4 + 1);
      local_290[0] = iVar10;
      if (iVar11 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      local_238.ArrayNum = iVar11;
      FaceGroupUtil::SetGroupID(pFVar2,&local_238,iVar10);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1d8.SelectedGroupIDs,local_258,(bool *)local_290);
      FVar9.Data = FVar9.Data + 8;
    }
    TVar8 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_e8);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_270,L"UEditMeshPolygonsTool",L"PolyMeshMergeChange",L"Merge")
    ;
    EmitCurrentMeshChangeAndUpdate(this,pFVar7,TVar8,&local_1d8);
    if ((ITextData *)local_270._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_270._0_8_ + 0x10))();
    }
    local_1d8.SelectedEdgeIDs.HashSize = 0;
    if (local_1d8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d8.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1d8.SelectedEdgeIDs.Elements);
    local_1d8.SelectedCornerIDs.HashSize = 0;
    if (local_1d8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d8.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1d8.SelectedCornerIDs.Elements);
    local_1d8.SelectedGroupIDs.HashSize = 0;
    if (local_1d8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d8.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_1d8);
    TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
    ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
              (&local_288.Components);
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_e8);
  }
  else {
    plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar1 = *(code **)(*plVar6 + 0x360);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_220,L"UEditMeshPolygonsTool",L"OnMergeFailedMessage",
                        L"Cannot Merge Current Selection");
    (*pcVar1)(plVar6,pFVar7,3);
    if (local_220.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_220.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ApplyPokeSingleFace @ 14cc3c220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplyPokeSingleFace(UEditMeshPolygonsTool *this)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  FDynamicMesh3 *pFVar4;
  FScriptContainerElement *pFVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  FText *pFVar10;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar11;
  TRefCountPtr<ITextData> TVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStackY_298 [32];
  undefined1 local_258 [8];
  FText local_250;
  undefined4 local_240;
  int local_23c;
  int local_238 [4];
  undefined1 local_228 [4];
  undefined8 local_224;
  undefined4 local_21c;
  bool local_214 [44];
  FText local_1e8;
  FGroupTopologySelection local_1d8;
  FDynamicMeshChangeTracker local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_298;
  bVar7 = BeginMeshFaceEditChange(this);
  if (bVar7) {
    pFVar4 = (this->CurrentMesh).Object;
    UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_e8,pFVar4);
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_e8);
    local_250.Flags = (this->ActiveTriangleSelection).ArrayNum;
    lVar15 = (longlong)(int)local_250.Flags;
    pFVar5 = (this->ActiveTriangleSelection).AllocatorInstance.Data;
    local_250.TextData.Reference = (ITextData *)0x0;
    if (local_250.Flags == 0) {
      local_250._12_4_ = 0;
      uVar13 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_250.Flags,0,(ForAnyElementType *)&local_250,local_250.Flags,
                 (int *)&local_250.field_0xc);
      memcpy(local_250.TextData.Reference,pFVar5,lVar15 << 2);
      uVar13 = local_250.Flags;
    }
    piVar6 = (int *)&(local_250.TextData.Reference)->field_0x0;
    TVar12.Reference = local_250.TextData.Reference;
    uVar14 = uVar13;
    while( true ) {
      if (uVar14 != uVar13) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_258);
      }
      if (TVar12.Reference == (ITextData *)(piVar6 + (int)uVar13)) break;
      UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_e8,*(int *)TVar12.Reference,true)
      ;
      TVar12.Reference = (ITextData *)&(TVar12.Reference)->field_0x4;
      uVar14 = local_250.Flags;
    }
    if (local_250.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_250.TextData.Reference);
    }
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_1d8);
    pFVar16 = (this->ActiveTriangleSelection).AllocatorInstance.Data;
    iVar1 = (this->ActiveTriangleSelection).ArrayNum;
    pFVar5 = pFVar16 + (longlong)iVar1 * 4;
    while( true ) {
      if ((this->ActiveTriangleSelection).ArrayNum != iVar1) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_258);
      }
      if (pFVar16 == pFVar5) break;
      uVar2 = *(undefined4 *)pFVar16;
      local_224 = 0xffffffffffffffff;
      local_21c = 0xffffffff;
      local_214[0] = true;
      local_214[1] = true;
      local_214[2] = true;
      local_214[3] = true;
      local_214[4] = true;
      local_214[5] = true;
      local_214[6] = true;
      local_214[7] = true;
      local_214[8] = true;
      local_214[9] = true;
      local_214[10] = true;
      local_214[0xb] = true;
      local_214[0xc] = true;
      local_214[0xd] = true;
      local_214[0xe] = true;
      local_214[0xf] = true;
      local_214[0x10] = true;
      local_214[0x11] = true;
      local_214[0x12] = true;
      local_214[0x13] = true;
      local_240 = uVar2;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&local_1d8.SelectedGroupIDs,&local_23c,(bool *)&local_240);
      iVar8 = (**(code **)(pFVar4->_padding_ + 0xb0))(pFVar4,uVar2,local_228);
      if (iVar8 == 0) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_1d8.SelectedGroupIDs,local_238,local_214);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_1d8.SelectedGroupIDs,(int *)&local_250,local_214 + 4);
      }
      pFVar16 = pFVar16 + 4;
    }
    TVar11 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_e8);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_1e8,L"UEditMeshPolygonsTool",L"PolyMeshPokeChange",L"Poke Faces");
    EmitCurrentMeshChangeAndUpdate(this,pFVar10,TVar11,&local_1d8);
    if (local_1e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
    }
    local_1d8.SelectedEdgeIDs.HashSize = 0;
    if (local_1d8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d8.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1d8.SelectedEdgeIDs.Elements);
    local_1d8.SelectedCornerIDs.HashSize = 0;
    if (local_1d8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d8.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1d8.SelectedCornerIDs.Elements);
    local_1d8.SelectedGroupIDs.HashSize = 0;
    if (local_1d8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1d8.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_1d8);
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_e8);
  }
  else {
    plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar3 = *(code **)(*plVar9 + 0x360);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_250,L"UEditMeshPolygonsTool",L"OnPokeFailedMessage",
                         L"Cannot Poke Current Selection");
    (*pcVar3)(plVar9,pFVar10,3);
    if (local_250.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_250.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ApplyRecalcNormals @ 14cc3cab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplyRecalcNormals(UEditMeshPolygonsTool *this)

{
  ulonglong uVar1;
  TBitArray<FDefaultBitArrayAllocator> *pTVar2;
  code *pcVar3;
  FDynamicMesh3 *pFVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  longlong *plVar7;
  FText *pFVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar10;
  byte bVar11;
  longlong lVar12;
  int iVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  undefined1 auStackY_2c8 [32];
  undefined1 local_288;
  undefined1 local_287 [7];
  ForAnyElementType local_280;
  int local_278;
  int local_274;
  longlong *local_270;
  int iStack_268;
  uint uStack_264;
  TBitArray<FDefaultBitArrayAllocator> *local_260;
  undefined4 uStack_258;
  uint uStack_254;
  int local_250;
  uint uStack_24c;
  int iStack_248;
  undefined4 uStack_244;
  int local_240;
  int local_23c;
  FDynamicMeshEditor local_238;
  longlong *local_230;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_228;
  undefined8 uStack_208;
  FText local_1f8;
  FText local_1e8;
  undefined1 local_1d8 [32];
  TBitArray<FDefaultBitArrayAllocator> *local_1b8;
  uint local_1b0;
  int local_1a4;
  ForElementType<FSetElementId> local_198;
  int local_190;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_188;
  ForElementType<FSetElementId> local_148;
  int local_140;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_138;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  FDynamicMeshChangeTracker local_e8;
  ulonglong local_38;
  
  pTVar2 = (TBitArray<FDefaultBitArrayAllocator> *)(local_1d8 + 0x10);
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  bVar6 = BeginMeshFaceEditChange(this);
  if (bVar6) {
    pFVar4 = (this->CurrentMesh).Object;
    UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_e8,pFVar4);
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_e8);
    local_238.Mesh = pFVar4;
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
              ((FGroupTopologySelection *)local_1d8,
               (FGroupTopologySelection *)
               &((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_);
    uVar16 = local_1b0;
    iStack_268 = 0;
    uStack_264 = 1;
    local_250 = 0;
    uStack_254 = 0;
    if (local_1b0 != 0) {
      pTVar19 = pTVar2;
      if (local_1b8 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = local_1b8;
      }
      uVar15 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
      local_250 = 0;
      while (uVar15 == 0) {
        lVar12 = (longlong)iStack_268;
        local_250 = local_250 + 0x20;
        iStack_268 = iStack_268 + 1;
        uStack_254 = local_1b0;
        if ((int)((local_1b0 - 1) + ((int)(local_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_268)
        goto LAB_14cc3cc20;
        uVar15 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uStack_264 = -uVar15 & uVar15;
      uVar1 = (ulonglong)uStack_264 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_240 = (int)lVar12;
      uStack_254 = local_250 + -1 + local_240;
      if ((int)local_1b0 < (int)uStack_254) {
        uStack_254 = local_1b0;
      }
    }
LAB_14cc3cc20:
    local_270 = (longlong *)local_1d8;
    iStack_248 = local_1d8._8_4_ - local_1a4;
    uVar15 = local_1b0 & 0xffffffe0;
    uStack_258 = 0xffffffff;
    TStack_228.CurrentBitIndex = uStack_254;
    TStack_228.UnvisitedBitMask = 0xffffffff;
    TStack_228._padding_ = CONCAT44(uStack_264,iStack_268);
    iVar13 = (int)local_1b0 >> 5;
    TStack_228._28_4_ = uStack_254;
    TStack_228.BaseBitIndex = local_250;
    uStack_208 = CONCAT44(uStack_244,iStack_248);
    bVar11 = (byte)local_1b0;
    local_260 = pTVar2;
    uStack_24c = uStack_254;
    local_230 = local_270;
    TStack_228.Array = pTVar2;
    if (((int)local_1b0 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (uVar16 != local_1b0) {
      pTVar19 = pTVar2;
      if (local_1b8 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar19 = local_1b8;
      }
      uVar16 = -1 << (bVar11 & 0x1f) &
               *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
      while (uVar16 == 0) {
        lVar12 = (longlong)iVar13;
        uVar15 = uVar15 + 0x20;
        iVar13 = iVar13 + 1;
        uVar16 = local_1b0;
        if ((int)((local_1b0 - 1) + ((int)(local_1b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
        goto LAB_14cc3cd30;
        uVar16 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar12 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_23c = (int)lVar12;
      uVar16 = local_23c + -1 + uVar15;
      if ((int)local_1b0 < (int)uVar16) {
        uVar16 = local_1b0;
      }
    }
LAB_14cc3cd30:
    while( true ) {
      plVar7 = local_230;
      if ((int)local_230[1] - *(int *)((longlong)local_230 + 0x34) != (int)uStack_208) {
        local_288 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_288);
      }
      if (((TStack_228.CurrentBitIndex == uVar16) && (TStack_228.Array == pTVar2)) &&
         (plVar7 == (longlong *)local_1d8)) break;
      iVar13 = *(int *)(*plVar7 + (longlong)TStack_228.CurrentBitIndex * 0xc);
      if (((this->Topology).Object == (FGroupTopology *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar9 = UE::Geometry::FGroupTopology::GetGroupTriangles((this->Topology).Object,iVar13);
      local_280.Data = (FScriptContainerElement *)0x0;
      local_278 = pTVar9->ArrayNum;
      lVar12 = (longlong)local_278;
      pFVar5 = (pTVar9->AllocatorInstance).Data;
      if (local_278 == 0) {
        local_274 = 0;
        iVar17 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_278,0,&local_280,local_278,&local_274);
        memcpy(local_280.Data,pFVar5,lVar12 << 2);
        iVar17 = local_278;
      }
      pFVar5 = local_280.Data + (longlong)iVar17 * 4;
      FVar14.Data = local_280.Data;
      iVar18 = iVar17;
      while( true ) {
        if (iVar18 != iVar17) {
          local_287[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_287);
        }
        if (FVar14.Data == pFVar5) break;
        UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_e8,*(int *)FVar14.Data,true);
        FVar14.Data = FVar14.Data + 4;
        iVar18 = local_278;
      }
      if (local_280.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data);
      }
      if (((this->Topology).Object == (FGroupTopology *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pTVar9 = UE::Geometry::FGroupTopology::GetGroupTriangles((this->Topology).Object,iVar13);
      UE::Geometry::FDynamicMeshEditor::SetTriangleNormals(&local_238,pTVar9);
      TStack_228.UnvisitedBitMask = TStack_228.UnvisitedBitMask & ~TStack_228._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_228);
    }
    TVar10 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_e8);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_1e8,L"UEditMeshPolygonsTool",L"PolyMeshRecalcNormalsChange",
                        L"Recalculate Normals");
    EmitCurrentMeshChangeAndUpdate(this,pFVar8,TVar10,(FGroupTopologySelection *)local_1d8);
    if (local_1e8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1e8.TextData.Reference + 0x10))();
    }
    local_f0 = 0;
    if (local_f8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_f8);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_138);
    local_140 = 0;
    if (local_148 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_148);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_188);
    local_190 = 0;
    if (local_198 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_198);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_1d8);
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_e8);
  }
  else {
    plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar3 = *(code **)(*plVar7 + 0x360);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_1f8,L"UEditMeshPolygonsTool",L"OnRecalcNormalsFailedMessage",
                        L"Cannot Recalculate Normals for Current Selection");
    (*pcVar3)(plVar7,pFVar8,3);
    if (local_1f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1f8.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ApplyRegenerateExtraCorners @ 14cc3cfe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplyRegenerateExtraCorners(UEditMeshPolygonsTool *this)

{
  TObjectPtr<UPolygonSelectionMechanic> *pTVar1;
  FGroupTopology *pFVar2;
  UPolygonSelectionMechanic *pUVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_> TVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStackY_d8 [32];
  FText local_a8;
  undefined8 *local_98 [2];
  undefined1 local_88 [32];
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  if ((this->bTriangleMode == false) &&
     (pFVar2 = (this->Topology).Object, pFVar2 != (FGroupTopology *)0x0)) {
    puVar10 = (undefined8 *)0x0;
    local_88._0_8_ = (FScriptContainerElement *)0x0;
    local_88._8_8_ = 0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_54 = 0;
    local_48 = (ForElementType<FSetElementId>)0x0;
    local_40 = 0;
    local_5c = 0x80;
    local_58 = 0xffffffff;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88,
               &pFVar2->CurrentExtraCornerVids);
    if (((this->Topology).Object == (FGroupTopology *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(((this->Topology).Object)->_padding_ + 8))();
    if (((this->Topology).Object == (FGroupTopology *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->Topology).Object;
    if ((local_88._8_4_ - local_54 !=
         *(int *)&(pFVar2->CurrentExtraCornerVids).Elements.field_0x8 -
         *(int *)&(pFVar2->CurrentExtraCornerVids).Elements.field_0x34) ||
       (bVar6 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88,
                           &pFVar2->CurrentExtraCornerVids), !bVar6)) {
      FText::AsLocalizable_Advanced_LocText
                (&local_a8,L"UEditMeshPolygonsTool",L"RegenerateCornersTransactionName",
                 L"Regenerate Corners");
      lVar7 = (**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x10))(lVar7 + 0x28,&local_a8);
      pTVar1 = &this->SelectionMechanic;
      pUVar3 = (pTVar1->field0_0x0).DebugPtr;
      if ((pUVar3 != (UPolygonSelectionMechanic *)0x0) &&
         ((((int)pUVar3->_padding_ != *(int *)((longlong)&pUVar3->_padding_ + 4) ||
           ((int)pUVar3->_padding_ != *(int *)((longlong)&pUVar3->_padding_ + 4))) ||
          ((int)pUVar3->_padding_ != *(int *)((longlong)&pUVar3->_padding_ + 4))))) {
        UMeshTopologySelectionMechanic::BeginChange((UMeshTopologySelectionMechanic *)pUVar3);
        UMeshTopologySelectionMechanic::ClearSelection
                  ((UMeshTopologySelectionMechanic *)(pTVar1->field0_0x0).DebugPtr);
        lVar7 = (**(code **)(this->_padding_ + 0x2d8))(this);
        pcVar4 = *(code **)(*(longlong *)(lVar7 + 0x28) + 0x20);
        TVar8 = UMeshTopologySelectionMechanic::EndChange
                          ((UMeshTopologySelectionMechanic *)(pTVar1->field0_0x0).DebugPtr);
        (*pcVar4)(lVar7 + 0x28,(pTVar1->field0_0x0).DebugPtr,TVar8.Ptr,&local_a8);
      }
      lVar7 = (**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar4 = *(code **)(*(longlong *)(lVar7 + 0x28) + 0x20);
      puVar9 = ::operator_new(0xa8);
      if (puVar9 != (undefined8 *)0x0) {
        *(undefined8 *)
         &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar9 + 1))->Elements = 0;
        *puVar9 = &___7FExtraCornerChange_EditMeshPolygonsToolLocals__6B_;
        puVar9[2] = 0;
        puVar9[5] = 0;
        *(undefined4 *)(puVar9 + 6) = 0;
        *(undefined4 *)((longlong)puVar9 + 0x34) = 0x80;
        *(undefined4 *)(puVar9 + 7) = 0xffffffff;
        *(undefined4 *)((longlong)puVar9 + 0x3c) = 0;
        puVar9[9] = 0;
        *(undefined4 *)(puVar9 + 10) = 0;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar9 + 1),
                   (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_88);
        *(undefined8 *)
         &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar9 + 0xb))->Elements = 0;
        puVar9[0xc] = 0;
        puVar9[0xf] = 0;
        *(undefined4 *)(puVar9 + 0x10) = 0;
        *(undefined4 *)((longlong)puVar9 + 0x84) = 0x80;
        *(undefined4 *)(puVar9 + 0x11) = 0xffffffff;
        *(undefined4 *)((longlong)puVar9 + 0x8c) = 0;
        puVar9[0x13] = 0;
        *(undefined4 *)(puVar9 + 0x14) = 0;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar9 + 0xb),
                   &pFVar2->CurrentExtraCornerVids);
        puVar10 = puVar9;
      }
      local_98[0] = puVar10;
      (*pcVar4)(lVar7 + 0x28,this,local_98,&local_a8);
      lVar7 = (**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x18))(lVar7 + 0x28);
      if (local_a8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
      }
    }
    pUVar3 = (this->SelectionMechanic).field0_0x0.DebugPtr;
    if (pUVar3 != (UPolygonSelectionMechanic *)0x0) {
      UMeshTopologySelectionMechanic::NotifyMeshChanged
                ((UMeshTopologySelectionMechanic *)pUVar3,true);
    }
    local_40 = 0;
    if (local_48 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_48);
    }
    iVar5 = SUB84(local_88._8_8_,4);
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    if (iVar5 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
    }
    local_54 = 0;
    local_60 = 0;
    local_58 = 0xffffffff;
    if (0x80 < local_5c) {
      local_5c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
    }
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_88._0_8_);
    }
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1092627319186519921>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\EditMeshPolygonsTool.cpp"
                       ,0x88f,"!bTriangleMode && Topology");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// ApplyRetriangulate @ 14cc3d4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall UEditMeshPolygonsTool::ApplyRetriangulate(UEditMeshPolygonsTool *this)

{
  code *pcVar1;
  FDynamicMesh3 *pFVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  FText *pFVar6;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar7;
  undefined1 auStack_258 [32];
  FText local_238;
  FText local_228;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_218;
  FGroupTopologySelection local_1c8;
  FDynamicMeshChangeTracker local_d8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_258;
  bVar3 = BeginMeshFaceEditChange(this);
  if (bVar3) {
    pFVar2 = (this->CurrentMesh).Object;
    UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_d8,pFVar2);
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_d8);
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
              (&local_1c8,
               (FGroupTopologySelection *)
               &((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_);
    local_218.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_218.Elements._48_8_ = _UNK_150631d98;
    local_218.Elements._0_8_ = 0;
    local_218.Elements._8_8_ = 0;
    local_218.Elements._32_8_ = 0;
    local_218.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_218.HashSize = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&local_218,&local_1c8.SelectedGroupIDs);
    iVar4 = EditMeshPolygonsToolLocals::RetriangulateGroups
                      (pFVar2,(this->Topology).Object,&local_218,&local_d8);
    if (iVar4 != local_1c8.SelectedGroupIDs.Elements._8_4_ -
                 local_1c8.SelectedGroupIDs.Elements._52_4_) {
      plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar1 = *(code **)(*plVar5 + 0x360);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_238,L"UEditMeshPolygonsTool",L"OnRetriangulateFailures",
                          L"Some faces could not be retriangulated");
      (*pcVar1)(plVar5,pFVar6,3);
      if (local_238.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
      }
    }
    TVar7 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_d8);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_228,L"UEditMeshPolygonsTool",L"PolyMeshRetriangulateChange",
                        L"Retriangulate");
    EmitCurrentMeshChangeAndUpdate(this,pFVar6,TVar7,&local_1c8);
    if (local_228.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_228.TextData.Reference + 0x10))();
    }
    local_1c8.SelectedEdgeIDs.HashSize = 0;
    if (local_1c8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1c8.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1c8.SelectedEdgeIDs.Elements);
    local_1c8.SelectedCornerIDs.HashSize = 0;
    if (local_1c8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1c8.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1c8.SelectedCornerIDs.Elements);
    local_1c8.SelectedGroupIDs.HashSize = 0;
    if (local_1c8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1c8.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_1c8);
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_d8);
  }
  else {
    plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar1 = *(code **)(*plVar5 + 0x360);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       (&local_238,L"UEditMeshPolygonsTool",L"OnRetriangulateFailed",
                        L"Cannot Retriangulate Current Selection");
    (*pcVar1)(plVar5,pFVar6,3);
    if (local_238.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_238.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ApplySimplifyAlongEdges @ 14cc3dcc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall UEditMeshPolygonsTool::ApplySimplifyAlongEdges(UEditMeshPolygonsTool *this)

{
  uint *puVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  FText *pFVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  longlong lVar11;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar12;
  ForAnyElementType FVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  ulonglong uVar20;
  ForElementType<unsigned_int> FVar21;
  int iVar22;
  FScriptContainerElement *pFVar23;
  uint *puVar24;
  undefined1 auStackY_3d8 [32];
  undefined1 local_3a8;
  undefined1 local_3a7;
  undefined1 local_3a6 [2];
  uint local_3a4;
  int local_3a0;
  uint uStack_39c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_398;
  undefined4 local_390;
  int iStack_38c;
  int iStack_388;
  undefined4 uStack_384;
  int local_380;
  uint uStack_37c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_378;
  undefined4 local_370;
  int iStack_36c;
  int iStack_368;
  undefined4 uStack_364;
  undefined4 local_360;
  int local_35c;
  undefined4 local_354;
  int local_350;
  UEditMeshPolygonsTool *local_348;
  FDynamicMesh3 *local_340;
  FScriptContainerElement *local_338;
  FLocalPlanarSimplify local_330;
  longlong *local_310;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_308;
  longlong *local_2e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_2e0;
  code *local_2c0;
  undefined1 *local_2b8;
  TArray<int,TSizedDefaultAllocator<32>_> local_2b0;
  FSparseArrayAllocationInfo local_2a0;
  FText local_288;
  FText local_278;
  TUniqueFunction<void___cdecl(DynamicMeshInfo::FEdgeCollapseInfo_const_&)> local_268;
  undefined1 local_238 [32];
  ForElementType<unsigned_int> local_218;
  int local_210;
  int local_20c;
  int local_208;
  int local_204;
  undefined1 local_200 [8];
  ForAnyElementType local_1f8;
  uint local_1f0;
  FGroupTopologySelection local_1e8;
  FDynamicMeshChangeTracker local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  local_2b8 = local_3a6;
  local_2c0 = UE::Core::Private::Function::
              TFunctionRefCaller<`UEditMeshPolygonsTool::BeginMeshEdgeEditChange'::__l2::<lambda_1>,bool,int>
              ::Call;
  local_348 = this;
  bVar5 = BeginMeshEdgeEditChange(this,(TFunctionRef<bool___cdecl(int)> *)&local_2c0);
  if (bVar5) {
    local_340 = (this->CurrentMesh).Object;
    UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_f8,local_340);
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_f8);
    iVar6 = (this->ActiveEdgeSelection).ArrayNum;
    pFVar18 = (this->ActiveEdgeSelection).AllocatorInstance.Data;
    local_238._0_8_ = (FScriptContainerElement *)0x0;
    local_238._8_8_ = 0;
    local_218 = (ForElementType<unsigned_int>)0x0;
    pFVar23 = pFVar18 + (longlong)iVar6 * 0x18;
    local_210 = 0;
    local_20c = 0x80;
    local_208 = -1;
    local_204 = 0;
    local_1f8.Data = (FScriptContainerElement *)0x0;
    local_1f0 = 0;
    while( true ) {
      if ((this->ActiveEdgeSelection).ArrayNum != iVar6) {
        local_3a8 = 0;
        `TCheckedPointerIterator<UEditMeshPolygonsTool::FSelectedEdge,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_3a8);
      }
      dVar4 = _UNK_150b37c98;
      dVar3 = ___xmm_3fd00000000000003fb999999999999a;
      if (pFVar18 == pFVar23) break;
      if (1 < *(int *)(pFVar18 + 0x10)) {
        if (((this->Topology).Object == (FGroupTopology *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pTVar9 = UE::Geometry::FGroupTopology::GetGroupEdgeVertices
                           ((this->Topology).Object,*(int *)pFVar18);
        local_2b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                  (&local_2b0,(int *)(pTVar9->AllocatorInstance).Data,pTVar9->ArrayNum,0);
        UE::Geometry::FDynamicMeshChangeTracker::
        SaveVertexOneRingTriangles<TArray<int,TSizedDefaultAllocator<32>_>_>
                  (&local_f8,&local_2b0,true);
      }
      pFVar18 = pFVar18 + 0x18;
    }
    local_3a4 = (this->ActiveEdgeSelection).ArrayNum;
    uVar14 = (ulonglong)(int)local_3a4;
    pFVar23 = (this->ActiveEdgeSelection).AllocatorInstance.Data;
    pFVar18 = pFVar23 + uVar14 * 0x18;
    local_338 = pFVar18;
    while( true ) {
      uVar20 = 0;
      if ((this->ActiveEdgeSelection).ArrayNum != (int)uVar14) {
        local_3a7 = 0;
        `TCheckedPointerIterator<UEditMeshPolygonsTool::FSelectedEdge,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_3a7);
      }
      if (pFVar23 == pFVar18) break;
      if (1 < *(int *)(pFVar23 + 0x10)) {
        if (local_238._8_4_ != local_204) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_238);
          bVar5 = (longlong)local_238._8_8_ < 0;
          local_238._8_8_ = local_238._8_8_ & 0xffffffff00000000;
          if (bVar5) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,0,(ForAnyElementType *)local_238,0,(int *)(local_238 + 0xc));
          }
          local_208 = -1;
          local_204 = 0;
          local_210 = 0;
        }
        iVar6 = *(int *)(pFVar23 + 0x10);
        puVar24 = *(uint **)(pFVar23 + 8);
        if ((iVar6 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar16 = (local_238._8_4_ - local_204) + iVar6;
        if ((uint)(local_238._8_4_ - local_204) < uVar16) {
          if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
          }
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_238,uVar16);
          if (uVar16 < 4) {
            uVar16 = 1;
          }
          else {
            uVar14 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
            lVar15 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_360 = (undefined4)lVar15;
            uVar16 = 1 << ((byte)lVar15 & 0x1f);
          }
          if ((local_1f0 == 0) || ((int)local_1f0 < (int)uVar16)) {
            local_1f0 = uVar16;
            if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1f8,0,0,4)
              ;
            }
            if (uVar16 != 0) {
              uVar17 = uVar16;
              if (uVar16 < 2) {
                if ((ForElementType<FSetElementId>)local_1f8.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar17 = 0;
                  goto LAB_14cc3e04e;
                }
              }
              else {
LAB_14cc3e04e:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_1f8,0,uVar17,4);
              }
              if (0 < (int)uVar16) {
                uVar14 = (ulonglong)uVar16;
                do {
                  FVar13.Data = (FScriptContainerElement *)local_200;
                  if ((ForElementType<FSetElementId>)local_1f8.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar13.Data = local_1f8.Data;
                  }
                  uVar10 = uVar20 & (longlong)(int)uVar16 - 1U;
                  uVar20 = uVar20 + 1;
                  *(undefined4 *)((longlong)FVar13.Data + uVar10 * 4) = 0xffffffff;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
            }
            if (local_1f0 != 0) {
              pTStack_398 = (TBitArray<FDefaultBitArrayAllocator> *)(local_238 + 0x10);
              uStack_39c = 1;
              local_3a0 = 0;
              iStack_38c = 0;
              iStack_388 = 0;
              if (local_210 != 0) {
                FVar21 = (ForElementType<unsigned_int>)((longlong)local_238 + 0x10);
                if (local_218 != (ForElementType<unsigned_int>)0x0) {
                  FVar21 = local_218;
                }
                uVar16 = *(uint *)FVar21;
                iStack_388 = 0;
                local_3a0 = 0;
                while (uVar16 == 0) {
                  iStack_388 = iStack_388 + 0x20;
                  lVar15 = (longlong)local_3a0;
                  local_3a0 = local_3a0 + 1;
                  if ((int)(local_210 + -1 + (local_210 + -1 >> 0x1f & 0x1fU)) >> 5 < local_3a0)
                  goto LAB_14cc3e173;
                  uVar16 = ((uint *)((longlong)FVar21 + 4))[lVar15];
                }
                uStack_39c = -uVar16 & uVar16;
                uVar14 = (ulonglong)uStack_39c * 2 + 1;
                lVar15 = 0x3f;
                if (uVar14 != 0) {
                  for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                local_35c = (int)lVar15;
                iStack_38c = iStack_388 + -1 + local_35c;
                if (local_210 < iStack_38c) {
LAB_14cc3e173:
                  iStack_38c = local_210;
                }
              }
              local_390 = 0xffffffff;
              local_310 = (longlong *)local_238;
              local_308._padding_ = CONCAT44(uStack_39c,local_3a0);
              local_308.CurrentBitIndex = iStack_38c;
              local_308.UnvisitedBitMask = 0xffffffff;
              local_308._28_4_ = uStack_384;
              local_308.BaseBitIndex = iStack_388;
              local_308.Array = pTStack_398;
              iVar22 = iStack_38c;
              if (iStack_38c < local_210) {
                do {
                  lVar15 = *local_310;
                  lVar11 = (longlong)iVar22;
                  uVar16 = local_1f0 - 1 & *(uint *)(lVar15 + lVar11 * 0xc);
                  *(uint *)(lVar15 + 8 + lVar11 * 0xc) = uVar16;
                  FVar13.Data = (FScriptContainerElement *)local_200;
                  if ((ForElementType<FSetElementId>)local_1f8.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar13.Data = local_1f8.Data;
                  }
                  uVar14 = (longlong)(int)local_1f0 - 1U & (longlong)(int)uVar16;
                  *(undefined4 *)(lVar15 + 4 + lVar11 * 0xc) =
                       *(undefined4 *)((longlong)FVar13.Data + uVar14 * 4);
                  *(int *)((longlong)FVar13.Data + uVar14 * 4) = iVar22;
                  local_308.UnvisitedBitMask =
                       local_308.UnvisitedBitMask & ~local_308._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_308);
                  iVar22 = local_308.CurrentBitIndex;
                } while (local_308.CurrentBitIndex < (local_308.Array)->NumBits);
              }
            }
          }
        }
        puVar1 = puVar24 + iVar6;
        iVar6 = local_208;
        for (; local_208 = iVar6, puVar24 != puVar1; puVar24 = puVar24 + 1) {
          if (local_204 == 0) {
            iVar6 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0xc,4,1,(ForAnyElementType *)local_238,(int *)(local_238 + 8),
                               (int *)(local_238 + 0xc));
            TBitArray<FDefaultBitArrayAllocator>::Add
                      ((TBitArray<FDefaultBitArrayAllocator> *)(local_238 + 0x10),false);
          }
          else {
            local_208 = *(int *)(local_238._0_8_ + (longlong)iVar6 * 0xc + 4);
            local_204 = local_204 + -1;
            if (local_204 != 0) {
              *(undefined4 *)(local_238._0_8_ + (longlong)local_208 * 0xc) = 0xffffffff;
            }
          }
          TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)local_238,&local_2a0,iVar6);
          if (local_2a0.Pointer != (uint *)0x0) {
            *(uint *)local_2a0.Pointer = *puVar24;
            *(uint *)((longlong)local_2a0.Pointer + 4) = 0xffffffff;
          }
          uVar16 = *(uint *)local_2a0.Pointer;
          if ((local_238._8_4_ - local_204 != 1) && (local_238._8_4_ != local_204)) {
            FVar13.Data = (FScriptContainerElement *)local_200;
            if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar13.Data = local_1f8.Data;
            }
            for (iVar6 = *(int *)((longlong)FVar13.Data + (ulonglong)(local_1f0 - 1 & uVar16) * 4);
                iVar6 != -1; iVar6 = *(int *)(local_238._0_8_ + (longlong)iVar6 * 0xc + 4)) {
              if (*(uint *)(local_238._0_8_ + (longlong)iVar6 * 0xc) == uVar16) {
                if (iVar6 != -1) {
                  *(uint *)(local_238._0_8_ + (longlong)iVar6 * 0xc) = uVar16;
                  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized
                            ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                              *)local_238,local_2a0.Index,1);
                  goto LAB_14cc3e5ff;
                }
                break;
              }
            }
          }
          uVar19 = local_238._8_4_ - local_204;
          uVar17 = 1;
          if (3 < uVar19) {
            uVar14 = (ulonglong)((uVar19 >> 1) + 7) * 2 + 1;
            lVar15 = 0x3f;
            if (uVar14 != 0) {
              for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            local_354 = (undefined4)lVar15;
            uVar17 = 1 << ((byte)lVar15 & 0x1f);
          }
          if (((int)uVar19 < 1) || ((int)uVar17 <= (int)local_1f0)) {
            uVar16 = local_1f0 - 1 & uVar16;
            *(uint *)((longlong)local_2a0.Pointer + 8) = uVar16;
            FVar13.Data = (FScriptContainerElement *)local_200;
            if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0)
            {
              FVar13.Data = local_1f8.Data;
            }
            uVar14 = (longlong)(int)local_1f0 - 1U & (longlong)(int)uVar16;
            *(uint *)((longlong)local_2a0.Pointer + 4) =
                 *(uint *)((longlong)FVar13.Data + uVar14 * 4);
            *(int *)((longlong)FVar13.Data + uVar14 * 4) = local_2a0.Index;
          }
          else {
            local_1f0 = uVar17;
            if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0)
            {
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_1f8,0,0,4)
              ;
            }
            if (uVar17 != 0) {
              uVar16 = uVar17;
              if (uVar17 < 2) {
                if ((ForElementType<FSetElementId>)local_1f8.Data !=
                    (ForElementType<FSetElementId>)0x0) {
                  uVar16 = 0;
                  goto LAB_14cc3e402;
                }
              }
              else {
LAB_14cc3e402:
                TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                          (&local_1f8,0,uVar16,4);
              }
              if (0 < (int)uVar17) {
                uVar20 = (ulonglong)uVar17;
                uVar14 = 0;
                do {
                  FVar13.Data = (FScriptContainerElement *)local_200;
                  if ((ForElementType<FSetElementId>)local_1f8.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar13.Data = local_1f8.Data;
                  }
                  uVar10 = uVar14 & (longlong)(int)uVar17 - 1U;
                  uVar14 = uVar14 + 1;
                  *(undefined4 *)((longlong)FVar13.Data + uVar10 * 4) = 0xffffffff;
                  uVar20 = uVar20 - 1;
                } while (uVar20 != 0);
              }
            }
            if (local_1f0 != 0) {
              pTStack_378 = (TBitArray<FDefaultBitArrayAllocator> *)(local_238 + 0x10);
              uStack_37c = 1;
              local_380 = 0;
              iStack_36c = 0;
              iStack_368 = 0;
              if (local_210 != 0) {
                FVar21 = (ForElementType<unsigned_int>)((longlong)local_238 + 0x10);
                if (local_218 != (ForElementType<unsigned_int>)0x0) {
                  FVar21 = local_218;
                }
                uVar16 = *(uint *)FVar21;
                iStack_368 = 0;
                local_380 = 0;
                while (uVar16 == 0) {
                  iStack_368 = iStack_368 + 0x20;
                  lVar15 = (longlong)local_380;
                  local_380 = local_380 + 1;
                  if ((int)(local_210 + -1 + (local_210 + -1 >> 0x1f & 0x1fU)) >> 5 < local_380)
                  goto LAB_14cc3e522;
                  uVar16 = ((uint *)((longlong)FVar21 + 4))[lVar15];
                }
                uStack_37c = -uVar16 & uVar16;
                uVar14 = (ulonglong)uStack_37c * 2 + 1;
                lVar15 = 0x3f;
                if (uVar14 != 0) {
                  for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                local_350 = (int)lVar15;
                iStack_36c = iStack_368 + -1 + local_350;
                if (local_210 < iStack_36c) {
LAB_14cc3e522:
                  iStack_36c = local_210;
                }
              }
              local_370 = 0xffffffff;
              local_2e8 = (longlong *)local_238;
              local_2e0._padding_ = CONCAT44(uStack_37c,local_380);
              local_2e0.CurrentBitIndex = iStack_36c;
              local_2e0.UnvisitedBitMask = 0xffffffff;
              local_2e0._28_4_ = uStack_364;
              local_2e0.BaseBitIndex = iStack_368;
              local_2e0.Array = pTStack_378;
              iVar6 = iStack_36c;
              if (iStack_36c < local_210) {
                do {
                  lVar15 = *local_2e8;
                  lVar11 = (longlong)iVar6;
                  uVar16 = local_1f0 - 1 & *(uint *)(lVar15 + lVar11 * 0xc);
                  *(uint *)(lVar15 + 8 + lVar11 * 0xc) = uVar16;
                  FVar13.Data = (FScriptContainerElement *)local_200;
                  if ((ForElementType<FSetElementId>)local_1f8.Data !=
                      (ForElementType<FSetElementId>)0x0) {
                    FVar13.Data = local_1f8.Data;
                  }
                  uVar14 = (longlong)(int)local_1f0 - 1U & (longlong)(int)uVar16;
                  *(undefined4 *)(lVar15 + 4 + lVar11 * 0xc) =
                       *(undefined4 *)((longlong)FVar13.Data + uVar14 * 4);
                  *(int *)((longlong)FVar13.Data + uVar14 * 4) = iVar6;
                  local_2e0.UnvisitedBitMask =
                       local_2e0.UnvisitedBitMask & ~local_2e0._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_2e0);
                  iVar6 = local_2e0.CurrentBitIndex;
                } while (local_2e0.CurrentBitIndex < (local_2e0.Array)->NumBits);
              }
            }
          }
LAB_14cc3e5ff:
          this = local_348;
          iVar6 = local_208;
        }
        local_330.bPreserveTriangleGroups = true;
        local_330.bPreserveVertexUVs = true;
        local_330.bPreserveOverlayUVs = true;
        local_330.SimplificationAngleTolerance = dVar3;
        local_330.TryToImproveTriQualityThreshold = dVar4;
        local_330.UVDistortTolerance = 1e-06;
        local_330.NormalDistortTolerance = 0.01;
        local_330.bPreserveVertexNormals = false;
        local_268._0_8_ = 0;
        local_268._40_8_ = 0;
        UE::Geometry::FLocalPlanarSimplify::SimplifyAlongEdges
                  (&local_330,local_340,
                   (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_238,&local_268);
        pFVar18 = local_338;
      }
      uVar14 = (ulonglong)local_3a4;
      pFVar23 = pFVar23 + 0x18;
    }
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_1e8);
    TVar12 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_f8);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_278,L"UEditMeshPolygonsTool",L"PolyMeshSimplifyAlongEdgesChange",
                        L"Simplify Along Edges");
    EmitCurrentMeshChangeAndUpdate(this,pFVar8,TVar12,&local_1e8);
    if (local_278.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_278.TextData.Reference + 0x10))();
    }
    local_1e8.SelectedEdgeIDs.HashSize = 0;
    if (local_1e8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1e8.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1e8.SelectedEdgeIDs.Elements);
    local_1e8.SelectedCornerIDs.HashSize = 0;
    if (local_1e8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1e8.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1e8.SelectedCornerIDs.Elements);
    local_1e8.SelectedGroupIDs.HashSize = 0;
    if (local_1e8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1e8.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_1e8);
    local_1f0 = 0;
    if ((ForElementType<FSetElementId>)local_1f8.Data != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free(local_1f8.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_238);
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_f8);
  }
  else {
    plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar2 = *(code **)(*plVar7 + 0x360);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_288,L"UEditMeshPolygonsTool",L"OnSimplifyAlongEdgesFailed",
                        L"Cannot Simplify current selection");
    (*pcVar2)(plVar7,pFVar8,3);
    if (local_288.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_288.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ApplySplitSingleEdge @ 14cc3e910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplySplitSingleEdge(UEditMeshPolygonsTool *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  FDynamicMesh3 *pFVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  longlong *plVar9;
  FText *pFVar10;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar11;
  FScriptContainerElement *pFVar12;
  undefined4 uVar13;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  longlong local_290;
  undefined1 local_288;
  undefined1 local_287 [7];
  undefined8 local_280;
  int local_278;
  int local_274;
  int local_270;
  int local_26c;
  undefined1 local_268 [4];
  undefined8 local_264;
  undefined8 local_25c;
  undefined8 local_254;
  bool local_244 [4];
  int iStack_240;
  undefined8 local_23c;
  undefined4 local_234;
  code *local_228;
  undefined1 *local_220;
  FText local_210;
  FText local_200;
  FGroupTopologySelection local_1e8;
  FDynamicMeshChangeTracker local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_220 = local_287;
  local_228 = UE::Core::Private::Function::
              TFunctionRefCaller<`UEditMeshPolygonsTool::BeginMeshEdgeEditChange'::__l2::<lambda_1>,bool,int>
              ::Call;
  bVar7 = BeginMeshEdgeEditChange(this,(TFunctionRef<bool___cdecl(int)> *)&local_228);
  if (bVar7) {
    pFVar5 = (this->CurrentMesh).Object;
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_1e8);
    UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_f8,pFVar5);
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_f8);
    iVar2 = (this->ActiveEdgeSelection).ArrayNum;
    pFVar12 = (this->ActiveEdgeSelection).AllocatorInstance.Data;
    uVar13 = (undefined4)__real_3fe0000000000000;
    pFVar1 = pFVar12 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((this->ActiveEdgeSelection).ArrayNum != iVar2) {
        local_288 = 0;
        `TCheckedPointerIterator<UEditMeshPolygonsTool::FSelectedEdge,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_288);
      }
      if (pFVar12 == pFVar1) break;
      if (*(int *)(pFVar12 + 0x10) < 1) {
        local_298 = 0;
        local_290 = (longlong)*(int *)(pFVar12 + 0x10);
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar3 = **(uint **)(pFVar12 + 8);
      if ((-1 < (int)uVar3) &&
         ((int)uVar3 <
          (int)((pFVar5->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar5->EdgeRefCounts).RefCounts.CurBlockUsed))) {
        if ((ushort)(*(short *)(*(longlong *)
                                 ((pFVar5->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar3 >> 9) * 8) + (ulonglong)(uVar3 & 0x1ff) * 2) - 1U
                    ) < 0xfffe) {
          uVar6 = *(undefined8 *)
                   (*(longlong *)
                     ((pFVar5->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8) +
                    8 + (ulonglong)(uVar3 & 0x1ff) * 0x10);
          local_280 = uVar6;
          UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_f8,(int)uVar6,true);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_1e8.SelectedGroupIDs,&local_278,(bool *)&local_280);
          if ((int)((ulonglong)uVar6 >> 0x20) != -1) {
            UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_f8,local_280._4_4_,true);
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_1e8.SelectedGroupIDs,&local_274,(bool *)((longlong)&local_280 + 4));
          }
          local_264 = 0xffffffffffffffff;
          local_25c = 0xffffffffffffffff;
          local_254 = 0xffffffffffffffff;
          _local_244 = 0xffffffffffffffff;
          local_23c = 0xffffffffffffffff;
          local_234 = 0xffffffff;
          iVar8 = (**(code **)(pFVar5->_padding_ + 0x30))(pFVar5,uVar3,local_268,uVar13);
          if (iVar8 == 0) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_1e8.SelectedGroupIDs,&local_270,local_244);
            if (iStack_240 != -1) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (&local_1e8.SelectedGroupIDs,&local_26c,local_244 + 4);
            }
          }
        }
      }
      pFVar12 = pFVar12 + 0x18;
    }
    TVar11 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_f8);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_200,L"UEditMeshPolygonsTool",L"PolyMeshSplitChange",L"Split Edges");
    EmitCurrentMeshChangeAndUpdate(this,pFVar10,TVar11,&local_1e8);
    if (local_200.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_200.TextData.Reference + 0x10))();
    }
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_f8);
    local_1e8.SelectedEdgeIDs.HashSize = 0;
    if (local_1e8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1e8.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1e8.SelectedEdgeIDs.Elements);
    local_1e8.SelectedCornerIDs.HashSize = 0;
    if (local_1e8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1e8.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_1e8.SelectedCornerIDs.Elements);
    local_1e8.SelectedGroupIDs.HashSize = 0;
    if (local_1e8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_1e8.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_1e8);
  }
  else {
    plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar4 = *(code **)(*plVar9 + 0x360);
    pFVar10 = FText::AsLocalizable_Advanced_LocText
                        (&local_210,L"UEditMeshPolygonsTool",L"OnSplitFailedMessage",
                         L"Cannot Split Current Selection");
    (*pcVar4)(plVar9,pFVar10,3);
    if (local_210.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_210.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ApplyStraightenEdges @ 14cc3fb70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplyStraightenEdges(UEditMeshPolygonsTool *this)

{
  FMutex *this_00;
  uint *puVar1;
  double *pdVar2;
  atomic<unsigned_char> aVar3;
  code *pcVar4;
  FDynamicMesh3 *pFVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  short sVar19;
  uint uVar20;
  longlong *plVar21;
  FText *pFVar22;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar23;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar24;
  ulonglong uVar25;
  ForAnyElementType FVar26;
  FScriptContainerElement *pFVar27;
  uint uVar28;
  longlong lVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  longlong lVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStackY_398 [32];
  undefined1 local_358;
  undefined1 local_357;
  undefined1 local_356 [6];
  ForAnyElementType local_350;
  uint local_348;
  int local_344;
  uint local_340;
  FScriptContainerElement *local_338;
  TArray<double,TSizedDefaultAllocator<32>_> local_330;
  TArray<int,TSizedDefaultAllocator<32>_> *local_320;
  UEditMeshPolygonsTool *local_318;
  FScriptContainerElement *local_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double local_2f0;
  double dStack_2e8;
  double local_2e0;
  code *local_2d8;
  undefined1 *local_2d0;
  FDynamicMeshChangeTracker *local_2c8;
  undefined1 local_2c0;
  code *local_2b8;
  FDynamicMeshChangeTracker **local_2b0;
  FText local_2a0;
  FText local_290;
  FGroupTopologySelection local_278;
  FDynamicMeshChangeTracker local_188;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_398;
  local_2d0 = local_356;
  local_2d8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UEditMeshPolygonsTool::BeginMeshEdgeEditChange'::__l2::<lambda_1>,bool,int>
              ::Call;
  local_318 = this;
  bVar18 = BeginMeshEdgeEditChange(this,(TFunctionRef<bool___cdecl(int)> *)&local_2d8);
  if (bVar18) {
    pFVar5 = (this->CurrentMesh).Object;
    UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_188,pFVar5);
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_188);
    local_340 = (this->ActiveEdgeSelection).ArrayNum;
    uVar25 = (ulonglong)(int)local_340;
    pFVar31 = (this->ActiveEdgeSelection).AllocatorInstance.Data;
    uVar34 = (undefined4)__real_3ff0000000000000;
    uVar35 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    pFVar27 = pFVar31 + uVar25 * 0x18;
    local_310 = pFVar27;
    while( true ) {
      local_338 = pFVar31;
      if ((this->ActiveEdgeSelection).ArrayNum != (int)uVar25) {
        local_358 = 0;
        `TCheckedPointerIterator<UEditMeshPolygonsTool::FSelectedEdge,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_358);
      }
      if (pFVar31 == pFVar27) break;
      if (((this->Topology).Object == (FGroupTopology *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar18)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar23 = UE::Geometry::FGroupTopology::GetGroupEdgeVertices
                          ((this->Topology).Object,*(int *)pFVar31);
      uVar30 = pTVar23->ArrayNum;
      local_320 = pTVar23;
      if (2 < (int)uVar30) {
        pFVar27 = (pTVar23->AllocatorInstance).Data;
        local_350.Data = (FScriptContainerElement *)0x0;
        local_348 = uVar30;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar30,0,&local_350,uVar30,&local_344);
        memcpy(local_350.Data,pFVar27,(longlong)(int)uVar30 << 2);
        uVar28 = local_348;
        uVar25 = (ulonglong)(int)local_348;
        pFVar27 = local_350.Data + uVar25 * 4;
        FVar26.Data = local_350.Data;
        while( true ) {
          if ((uint)uVar25 != uVar28) {
            local_357 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_357);
          }
          if (FVar26.Data == pFVar27) break;
          local_2c8 = &local_188;
          local_2b0 = &local_2c8;
          local_2c0 = 1;
          local_2b8 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::FDynamicMeshChangeTracker::SaveVertexOneRingTriangles'::__l2::<lambda_1>,void,int>
                      ::Call;
          UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
                    (local_188.Mesh,*(int *)FVar26.Data,
                     (TFunctionRef<void___cdecl(int)> *)&local_2b8);
          uVar25 = (ulonglong)local_348;
          FVar26.Data = FVar26.Data + 4;
        }
        if (local_350.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_350.Data);
        }
        if ((pTVar23->ArrayNum < 1) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar30 = uVar30 - 1;
        uVar28 = *(uint *)(pTVar23->AllocatorInstance).Data;
        uVar25 = (ulonglong)(uVar28 & 0x1ff);
        lVar29 = *(longlong *)
                  ((pFVar5->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar28 >> 9) * 8);
        pdVar2 = (double *)(lVar29 + uVar25 * 0x18);
        local_308 = *pdVar2;
        dStack_300 = pdVar2[1];
        local_2f8 = *(double *)(lVar29 + 0x10 + uVar25 * 0x18);
        uVar28 = 0;
        if ((int)uVar30 < pTVar23->ArrayNum) {
          uVar28 = ~uVar30 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this = local_318;
        uVar28 = *(uint *)((pTVar23->AllocatorInstance).Data + (longlong)(int)uVar30 * 4);
        uVar25 = (ulonglong)(uVar28 & 0x1ff);
        lVar29 = *(longlong *)
                  ((pFVar5->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar28 >> 9) * 8);
        pdVar2 = (double *)(lVar29 + uVar25 * 0x18);
        local_2f0 = *pdVar2;
        dStack_2e8 = pdVar2[1];
        local_2e0 = *(double *)(lVar29 + 0x10 + uVar25 * 0x18);
        local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_330.ArrayNum = 0;
        local_330.ArrayMax = 0;
        if (((local_318->Topology).Object == (FGroupTopology *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar18)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        dVar7 = UE::Geometry::FGroupTopology::GetEdgeArcLength
                          ((this->Topology).Object,*(int *)local_338,&local_330);
        dVar17 = local_2e0;
        dVar16 = dStack_2e8;
        dVar15 = local_2f0;
        dVar14 = local_2f8;
        dVar13 = dStack_300;
        dVar12 = local_308;
        uVar28 = 1;
        if (1 < (int)uVar30) {
          lVar32 = 4;
          lVar29 = 8;
          dVar11 = (double)CONCAT44(uVar35,uVar34);
          do {
            uVar20 = 0;
            if ((int)uVar28 < local_330.ArrayNum) {
              uVar20 = ~uVar28 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            dVar8 = (dVar11 / dVar7) * *(double *)(local_330.AllocatorInstance.Data + lVar29);
            uVar20 = 0;
            if ((int)uVar28 < local_320->ArrayNum) {
              uVar20 = ~uVar28 >> 0x1f;
            }
            dVar33 = (double)CONCAT44(uVar35,uVar34) - dVar8;
            dVar10 = dVar8 * dVar15 + dVar12 * dVar33;
            dVar9 = dVar8 * dVar16 + dVar13 * dVar33;
            dVar8 = dVar8 * dVar17 + dVar14 * dVar33;
            if ((uVar20 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar20 = *(uint *)((local_320->AllocatorInstance).Data + lVar32);
            sVar19 = _dclass(SUB84(dVar10,0));
            if (((sVar19 < 1) && (sVar19 = _dclass(SUB84(dVar9,0)), sVar19 < 1)) &&
               (sVar19 = _dclass(SUB84(dVar8,0)), sVar19 < 1)) {
              uVar25 = (ulonglong)(uVar20 & 0x1ff);
              lVar6 = *(longlong *)
                       ((pFVar5->Vertices).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar20 >> 9) * 8);
              *(double *)(lVar6 + uVar25 * 0x18) = dVar10;
              *(double *)(lVar6 + 8 + uVar25 * 0x18) = dVar9;
              *(double *)(lVar6 + 0x10 + uVar25 * 0x18) = dVar8;
              if ((pFVar5->ChangeStampShape).bIsEnabled != false) {
                this_00 = &(pFVar5->ChangeStampShape).Mutex;
                LOCK();
                bVar18 = this_00->State == (atomic<unsigned_char>)0x0;
                if (bVar18) {
                  this_00->State = (atomic<unsigned_char>)0x1;
                }
                UNLOCK();
                if (!bVar18) {
                  UE::FMutex::LockSlow(this_00);
                }
                puVar1 = &(pFVar5->ChangeStampShape).Value;
                *puVar1 = *puVar1 + 1;
                LOCK();
                aVar3 = this_00->State;
                this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
                UNLOCK();
                if (((byte)aVar3 & 2) != 0) {
                  UE::FMutex::WakeWaitingThread(this_00);
                }
              }
            }
            uVar34 = (undefined4)__real_3ff0000000000000;
            uVar35 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            uVar28 = uVar28 + 1;
            lVar29 = lVar29 + 8;
            lVar32 = lVar32 + 4;
            this = local_318;
          } while ((int)uVar28 < (int)uVar30);
        }
        pFVar27 = local_310;
        if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_330.AllocatorInstance.Data);
          pFVar27 = local_310;
        }
      }
      uVar25 = (ulonglong)local_340;
      pFVar31 = local_338 + 0x18;
    }
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_278);
    TVar24 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_188);
    pFVar22 = FText::AsLocalizable_Advanced_LocText
                        (&local_290,L"UEditMeshPolygonsTool",L"PolyMeshStraightenEdgeChange",
                         L"Straighten Edges");
    EmitCurrentMeshChangeAndUpdate(this,pFVar22,TVar24,&local_278);
    if (local_290.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_290.TextData.Reference + 0x10))();
    }
    local_278.SelectedEdgeIDs.HashSize = 0;
    if (local_278.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_278.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_278.SelectedEdgeIDs.Elements);
    local_278.SelectedCornerIDs.HashSize = 0;
    if (local_278.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_278.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_278.SelectedCornerIDs.Elements);
    local_278.SelectedGroupIDs.HashSize = 0;
    if (local_278.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_278.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_278);
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_188);
  }
  else {
    plVar21 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar4 = *(code **)(*plVar21 + 0x360);
    pFVar22 = FText::AsLocalizable_Advanced_LocText
                        (&local_2a0,L"UEditMeshPolygonsTool",L"OnStraightenEdgesFailed",
                         L"Cannot Straighten current selection");
    (*pcVar4)(plVar21,pFVar22,3);
    if (local_2a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_2a0.TextData.Reference + 0x10))();
    }
  }
  return;
}

// ApplyWeldEdges @ 14cc406a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplyWeldEdges(UEditMeshPolygonsTool *this,double param_1)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  undefined4 uVar3;
  code *pcVar4;
  void *pvVar5;
  UPolygonSelectionMechanic *this_00;
  TSharedPtr<UE::Geometry::FGroupTopology,1> *pTVar6;
  UEditMeshPolygonsTool *pUVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  EWeldResult EVar12;
  int iVar13;
  longlong *plVar14;
  FText *pFVar15;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar16;
  FGroupTopology *pFVar17;
  FEdgeSpan *pFVar18;
  FEdgeSpan *pFVar19;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar20;
  FGroupTopologySelection *pFVar21;
  ulonglong uVar22;
  byte bVar23;
  ulonglong uVar24;
  ForAnyElementType FVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  FScriptContainerElement *pFVar31;
  FScriptContainerElement *pFVar32;
  ForElementType<unsigned_int> FVar33;
  longlong lVar34;
  ForAnyElementType FVar35;
  uint uVar36;
  FDynamicMesh3 *pFVar37;
  longlong lVar38;
  TSharedPtr<UE::Geometry::FGroupTopology,1> *pTVar39;
  undefined1 auStackY_988 [32];
  bool local_948;
  char local_947;
  undefined1 local_946 [2];
  uint local_944;
  TArray<int,TSizedDefaultAllocator<32>_> local_940;
  TSharedPtr<UE::Geometry::FGroupTopology,1> *local_930;
  TArray<int,TSizedDefaultAllocator<32>_> local_928;
  int local_918;
  uint local_914;
  TArray<int,TSizedDefaultAllocator<32>_> local_910;
  TArray<int,TSizedDefaultAllocator<32>_> local_900;
  TArray<int,TSizedDefaultAllocator<32>_> local_8f0;
  FDynamicMesh3 *local_8e0;
  UEditMeshPolygonsTool *local_8d8;
  int local_8d0;
  uint uStack_8cc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_8c8;
  undefined4 local_8c0;
  int iStack_8bc;
  int iStack_8b8;
  undefined4 uStack_8b4;
  FEdgeSpan local_8a8;
  FScriptContainerElement *local_868;
  TArray<int,TSizedDefaultAllocator<32>_> local_860;
  undefined4 local_850;
  int local_84c;
  undefined4 local_844;
  int local_840 [2];
  FDynamicMeshChange *local_838;
  FScriptContainerElement *local_830;
  FText local_828;
  longlong *local_818;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_810;
  FEdgeSpan local_7e8;
  FEdgeSpan local_7a8;
  FEdgeSpan local_768;
  FEdgeSpan local_728;
  FEdgeSpan local_6e8;
  FSparseArrayAllocationInfo local_6a8;
  FDynamicMeshChangeTracker *local_698;
  FDynamicMesh3 *local_690;
  char *local_688;
  TArray<int,TSizedDefaultAllocator<32>_> *local_680;
  TArray<int,TSizedDefaultAllocator<32>_> *local_678;
  char local_670;
  FWeldEdgeSequence local_668;
  FText local_5b8;
  FText local_5a8;
  TArray<int,TSizedDefaultAllocator<32>_> local_598;
  FText local_588;
  FText local_578;
  FText local_568;
  FEdgeSpan local_550;
  FEdgeSpan local_510;
  undefined1 local_4c8 [32];
  ForElementType<unsigned_int> local_4a8;
  int local_4a0;
  int local_49c;
  int local_498;
  int local_494;
  FScriptContainerElement local_490 [8];
  ForAnyElementType local_488;
  uint local_480;
  undefined1 local_478 [32];
  void *local_458;
  undefined4 local_450;
  uint local_44c;
  undefined4 local_448;
  undefined4 local_444;
  ForElementType<FSetElementId> local_438;
  int local_430;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_428;
  FGroupTopologySelection local_3d8;
  FGroupTopologySelection local_2e8;
  FGroupTopologySelection local_1f8;
  FDynamicMeshChangeTracker local_108;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_988;
  uVar24 = 0;
  local_8d8 = this;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
            (&local_2e8,
             (FGroupTopologySelection *)&((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_)
  ;
  local_428.Elements._0_8_ = 0;
  local_428.Elements._8_8_ = 0;
  local_428.Elements._32_8_ = 0;
  local_428.Elements._40_4_ = 0;
  local_428.Elements._44_4_ = 0x80;
  local_428.Elements._48_4_ = 0xffffffff;
  local_428.Elements._52_4_ = 0;
  local_428.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_428.HashSize = 0;
  if (local_2e8.SelectedCornerIDs.Elements._8_4_ == local_2e8.SelectedCornerIDs.Elements._52_4_) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&local_428,&local_2e8.SelectedEdgeIDs);
    local_930 = &this->Topology;
  }
  else {
    if (local_2e8.SelectedCornerIDs.Elements._8_4_ - local_2e8.SelectedCornerIDs.Elements._52_4_ ==
        2) {
      ApplyWeldVertices(this,param_1);
      goto LAB_14cc42132;
    }
    local_930 = &this->Topology;
    EditMeshPolygonsToolLocals::ConvertCornerSelectionToGroupEdgeSelection
              (local_930->Object,&local_2e8.SelectedCornerIDs,&local_428);
    if ((int)(local_428.Elements._8_4_ - local_428.Elements._52_4_) < 2) {
      plVar14 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar4 = *(code **)(*plVar14 + 0x360);
      pFVar15 = FText::AsLocalizable_Advanced_LocText
                          (&local_5b8,L"UEditMeshPolygonsTool",L"OnWeldVerticesFailedInvalidCount",
                           L"Cannot Weld current selection, selection must be either 2 vertices or convertible to at least 2 edges."
                          );
      (*pcVar4)(plVar14,pFVar15,3);
      if (local_5b8.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_5b8.TextData.Reference + 0x10))();
      }
      goto LAB_14cc42132;
    }
  }
  if ((int)(local_428.Elements._8_4_ - local_428.Elements._52_4_) < 2) {
    plVar14 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar4 = *(code **)(*plVar14 + 0x360);
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_5a8,L"UEditMeshPolygonsTool",L"OnWeldEdgesFailedTooFew",
                         L"Cannot Weld current selection, selection must be at least 2 edges.");
    (*pcVar4)(plVar14,pFVar15,3);
    if (local_5a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5a8.TextData.Reference + 0x10))();
    }
    goto LAB_14cc42132;
  }
  pFVar37 = (this->CurrentMesh).Object;
  local_928.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_928.ArrayNum = 0;
  local_928.ArrayMax = 0;
  local_940.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_940.ArrayNum = 0;
  local_940.ArrayMax = 0;
  local_948 = false;
  local_8e0 = pFVar37;
  pTVar16 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_428,&local_598);
  bVar8 = EditMeshPolygonsToolLocals::LinkBoundaryGroupEdges
                    ((this->Topology).Object,pFVar37,pTVar16,&local_928,&local_940,&local_948);
  if ((bVar8) && (local_940.ArrayNum != 0)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (local_598.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_598.AllocatorInstance.Data);
  }
  if (!bVar8) {
    pTVar16 = &local_928;
    if (local_948 == false) {
      pTVar16 = &local_940;
    }
    pFVar32 = (pTVar16->AllocatorInstance).Data;
    iVar9 = pTVar16->ArrayNum / 2;
    if (0 < iVar9) {
      uVar26 = uVar24;
      pFVar31 = pFVar32 + (longlong)(pTVar16->ArrayNum + -1) * 4;
      do {
        uVar3 = *(undefined4 *)(pFVar32 + uVar26 * 4);
        *(undefined4 *)(pFVar32 + uVar26 * 4) = *(undefined4 *)pFVar31;
        uVar26 = uVar26 + 1;
        *(undefined4 *)pFVar31 = uVar3;
        pFVar31 = pFVar31 + -4;
      } while ((longlong)uVar26 < (longlong)iVar9);
    }
    UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_108,pFVar37);
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_108);
    pTVar6 = local_930;
    local_698 = &local_108;
    local_688 = &local_947;
    local_680 = &local_8f0;
    local_678 = &local_860;
    local_670 = local_948;
    local_947 = '\x01';
    local_8f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_8f0.ArrayNum = 0;
    local_8f0.ArrayMax = 0;
    local_860.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_860.ArrayNum = 0;
    local_860.ArrayMax = 0;
    local_944 = local_928.ArrayNum;
    if (local_928.ArrayNum != local_940.ArrayNum) {
      uVar29 = local_940.ArrayNum;
      if (local_928.ArrayNum < local_940.ArrayNum) {
        uVar29 = local_928.ArrayNum;
      }
      local_944 = uVar29 - 1;
    }
    lVar34 = (longlong)(int)local_944;
    pTVar39 = &this->Topology;
    local_690 = pFVar37;
    if (0 < (int)local_944) {
      lVar38 = 0;
      do {
        pFVar17 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator->(pTVar6);
        uVar36 = (uint)uVar24;
        uVar29 = 0;
        if ((int)uVar36 < local_928.ArrayNum) {
          uVar29 = ~uVar36 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar29 = *(uint *)(local_928.AllocatorInstance.Data + lVar38 * 4);
        uVar28 = 0;
        if ((int)uVar29 < (pFVar17->Edges).ArrayNum) {
          uVar28 = ~uVar29 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar32 = (pFVar17->Edges).AllocatorInstance.Data;
        pFVar17 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator->(pTVar6);
        uVar28 = 0;
        if ((int)uVar36 < local_940.ArrayNum) {
          uVar28 = ~uVar36 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar28 = *(uint *)(local_940.AllocatorInstance.Data + lVar38 * 4);
        uVar27 = 0;
        if ((int)uVar28 < (pFVar17->Edges).ArrayNum) {
          uVar27 = ~uVar28 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        `UEditMeshPolygonsTool::ApplyWeldEdges'::__l2::<lambda_1>::operator()
                  (&local_698,(FEdgeSpan *)(pFVar32 + (longlong)(int)uVar29 * 0x50 + 8),
                   (FEdgeSpan *)
                   ((pFVar17->Edges).AllocatorInstance.Data + (longlong)(int)uVar28 * 0x50 + 8));
        uVar24 = (ulonglong)(uVar36 + 1);
        lVar38 = lVar38 + 1;
      } while (lVar38 < lVar34);
      pFVar37 = local_8e0;
      pTVar39 = local_930;
    }
    uVar29 = local_944;
    pFVar32 = (FScriptContainerElement *)0x0;
    uVar36 = 0;
    if ((int)local_944 < local_928.ArrayNum) {
      local_900.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_900.ArrayNum = 0;
      local_900.ArrayMax = 0;
      uVar10 = 0;
      uVar28 = local_928.ArrayNum;
      uVar27 = local_940.ArrayNum;
      uVar30 = uVar36;
      if (0 < (int)(local_928.ArrayNum - local_944)) {
        do {
          if (local_948 == false) {
            uVar27 = uVar30 + uVar29;
          }
          else {
            uVar27 = ~uVar30 + uVar28;
          }
          if (pTVar39->Object == (FGroupTopology *)0x0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar28 = local_928.ArrayNum;
          }
          pFVar17 = pTVar39->Object;
          uVar11 = uVar36;
          if ((int)uVar27 < (int)uVar28) {
            uVar11 = ~uVar27 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar28 = *(uint *)(local_928.AllocatorInstance.Data + (longlong)(int)uVar27 * 4);
          lVar34 = (longlong)(int)uVar28;
          uVar27 = uVar10;
          if ((int)uVar28 < (pFVar17->Edges).ArrayNum) {
            uVar27 = ~uVar28 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar31 = (pFVar17->Edges).AllocatorInstance.Data;
          local_6e8.Mesh = *(FDynamicMesh3 **)(pFVar31 + lVar34 * 0x50 + 8);
          local_6e8.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                    (&local_6e8.Vertices,*(int **)(pFVar31 + lVar34 * 0x50 + 0x10),
                     *(int *)(pFVar31 + lVar34 * 0x50 + 0x18),0);
          local_6e8.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                    (&local_6e8.Edges,*(int **)(pFVar31 + lVar34 * 0x50 + 0x20),
                     *(int *)(pFVar31 + lVar34 * 0x50 + 0x28),0);
          local_6e8.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TArray<int,TSizedDefaultAllocator<32>_>::CopyToEmpty<int,int>
                    (&local_6e8.BowtieVertices,*(int **)(pFVar31 + lVar34 * 0x50 + 0x30),
                     *(int *)(pFVar31 + lVar34 * 0x50 + 0x38),0);
          local_6e8.bBowtiesCalculated = *(bool *)(pFVar31 + lVar34 * 0x50 + 0x40);
          UE::Geometry::FEdgeSpan::SetCorrectOrientation(&local_6e8);
          lVar34 = (longlong)local_6e8.Edges.ArrayNum;
          if (local_6e8.Edges.ArrayNum != 0) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,local_6e8.Edges.ArrayNum,&local_900.AllocatorInstance,
                               &local_900.ArrayNum,&local_900.ArrayMax);
            memcpy(local_900.AllocatorInstance.Data + (longlong)iVar9 * 4,
                   local_6e8.Edges.AllocatorInstance.Data,lVar34 << 2);
          }
          if (local_6e8.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6e8.BowtieVertices.AllocatorInstance.Data);
          }
          if (local_6e8.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6e8.Edges.AllocatorInstance.Data);
          }
          if (local_6e8.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_6e8.Vertices.AllocatorInstance.Data);
          }
          uVar30 = uVar30 + 1;
          uVar28 = local_928.ArrayNum;
        } while ((int)uVar30 < (int)(local_928.ArrayNum - uVar29));
        uVar27 = local_940.ArrayNum;
      }
      local_910.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_910.ArrayNum = 0;
      local_910.ArrayMax = 0;
      if (0 < (int)(uVar27 - uVar29)) {
        do {
          if (local_948 == false) {
            uVar28 = ~uVar36 + uVar27;
          }
          else {
            uVar28 = uVar36 + uVar29;
          }
          if (pTVar39->Object == (FGroupTopology *)0x0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar27 = local_940.ArrayNum;
          }
          pFVar17 = pTVar39->Object;
          uVar30 = uVar10;
          if ((int)uVar28 < (int)uVar27) {
            uVar30 = ~uVar28 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar28 = *(uint *)(local_940.AllocatorInstance.Data + (longlong)(int)uVar28 * 4);
          lVar34 = (longlong)(int)uVar28;
          uVar27 = uVar10;
          if ((int)uVar28 < (pFVar17->Edges).ArrayNum) {
            uVar27 = ~uVar28 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar31 = (pFVar17->Edges).AllocatorInstance.Data;
          local_8a8.Mesh = *(FDynamicMesh3 **)(pFVar31 + lVar34 * 0x50 + 8);
          local_8a8.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_8a8.Vertices.ArrayNum = *(int *)(pFVar31 + lVar34 * 0x50 + 0x18);
          lVar38 = (longlong)local_8a8.Vertices.ArrayNum;
          pvVar5 = *(void **)(pFVar31 + lVar34 * 0x50 + 0x10);
          if (local_8a8.Vertices.ArrayNum == 0) {
            local_8a8.Vertices.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_8a8.Vertices.ArrayNum,0,&local_8a8.Vertices.AllocatorInstance,
                       local_8a8.Vertices.ArrayNum,&local_8a8.Vertices.ArrayMax);
            memcpy(local_8a8.Vertices.AllocatorInstance.Data,pvVar5,lVar38 << 2);
          }
          local_8a8.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_8a8.Edges.ArrayNum = *(int *)(pFVar31 + lVar34 * 0x50 + 0x28);
          lVar38 = (longlong)local_8a8.Edges.ArrayNum;
          pvVar5 = *(void **)(pFVar31 + lVar34 * 0x50 + 0x20);
          if (local_8a8.Edges.ArrayNum == 0) {
            local_8a8.Edges.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_8a8.Edges.ArrayNum,0,&local_8a8.Edges.AllocatorInstance,
                       local_8a8.Edges.ArrayNum,&local_8a8.Edges.ArrayMax);
            memcpy(local_8a8.Edges.AllocatorInstance.Data,pvVar5,lVar38 << 2);
          }
          local_8a8.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_8a8.BowtieVertices.ArrayNum = *(int *)(pFVar31 + lVar34 * 0x50 + 0x38);
          lVar38 = (longlong)local_8a8.BowtieVertices.ArrayNum;
          pvVar5 = *(void **)(pFVar31 + lVar34 * 0x50 + 0x30);
          if (local_8a8.BowtieVertices.ArrayNum == 0) {
            local_8a8.BowtieVertices.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_8a8.BowtieVertices.ArrayNum,0,
                       &local_8a8.BowtieVertices.AllocatorInstance,local_8a8.BowtieVertices.ArrayNum
                       ,&local_8a8.BowtieVertices.ArrayMax);
            memcpy(local_8a8.BowtieVertices.AllocatorInstance.Data,pvVar5,lVar38 << 2);
          }
          local_8a8.bBowtiesCalculated = *(bool *)(pFVar31 + lVar34 * 0x50 + 0x40);
          UE::Geometry::FEdgeSpan::SetCorrectOrientation(&local_8a8);
          lVar34 = (longlong)local_8a8.Edges.ArrayNum;
          if (local_8a8.Edges.ArrayNum != 0) {
            iVar9 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,local_8a8.Edges.ArrayNum,&local_910.AllocatorInstance,
                               &local_910.ArrayNum,&local_910.ArrayMax);
            memcpy(local_910.AllocatorInstance.Data + (longlong)iVar9 * 4,
                   local_8a8.Edges.AllocatorInstance.Data,lVar34 << 2);
          }
          if (local_8a8.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8a8.BowtieVertices.AllocatorInstance.Data);
          }
          if (local_8a8.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8a8.Edges.AllocatorInstance.Data);
          }
          if (local_8a8.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_8a8.Vertices.AllocatorInstance.Data);
          }
          uVar36 = uVar36 + 1;
          pTVar39 = local_930;
          uVar27 = local_940.ArrayNum;
        } while ((int)uVar36 < (int)(local_940.ArrayNum - uVar29));
      }
      pFVar37 = local_8e0;
      local_7a8.Mesh = local_8e0;
      local_7a8.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7a8.Vertices.ArrayNum = 0;
      local_7a8.Vertices.ArrayMax = 0;
      local_7a8.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7a8.Edges.ArrayNum = 0;
      local_7a8.Edges.ArrayMax = 0;
      local_7a8.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7a8.BowtieVertices.ArrayNum = 0;
      local_7a8.BowtieVertices.ArrayMax = 0;
      local_7a8.bBowtiesCalculated = false;
      UE::Geometry::FEdgeSpan::InitializeFromEdges(&local_7a8,&local_900);
      local_7e8.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7e8.Vertices.ArrayNum = 0;
      local_7e8.Vertices.ArrayMax = 0;
      local_7e8.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7e8.Edges.ArrayNum = 0;
      local_7e8.Edges.ArrayMax = 0;
      local_7e8.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_7e8.BowtieVertices.ArrayNum = 0;
      local_7e8.BowtieVertices.ArrayMax = 0;
      local_7e8.bBowtiesCalculated = false;
      local_7e8.Mesh = pFVar37;
      UE::Geometry::FEdgeSpan::InitializeFromEdges(&local_7e8,&local_910);
      `UEditMeshPolygonsTool::ApplyWeldEdges'::__l2::<lambda_1>::operator()
                (&local_698,&local_7a8,&local_7e8);
      if (local_7e8.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7e8.BowtieVertices.AllocatorInstance.Data);
      }
      if (local_7e8.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7e8.Edges.AllocatorInstance.Data);
      }
      if (local_7e8.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7e8.Vertices.AllocatorInstance.Data);
      }
      if (local_7a8.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7a8.BowtieVertices.AllocatorInstance.Data);
      }
      if (local_7a8.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7a8.Edges.AllocatorInstance.Data);
      }
      if (local_7a8.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_7a8.Vertices.AllocatorInstance.Data);
      }
      if (local_910.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_910.AllocatorInstance.Data);
      }
      if (local_900.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_900.AllocatorInstance.Data);
      }
    }
    local_728.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_728.Vertices.ArrayNum = 0;
    local_728.Vertices.ArrayMax = 0;
    local_728.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_728.Edges.ArrayNum = 0;
    local_728.Edges.ArrayMax = 0;
    local_728.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_728.BowtieVertices.ArrayNum = 0;
    local_728.BowtieVertices.ArrayMax = 0;
    local_728.bBowtiesCalculated = false;
    local_768.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_768.Vertices.ArrayNum = 0;
    local_768.Vertices.ArrayMax = 0;
    local_768.Edges.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_768.Edges.ArrayNum = 0;
    local_768.Edges.ArrayMax = 0;
    local_768.BowtieVertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_768.BowtieVertices.ArrayNum = 0;
    local_768.BowtieVertices.ArrayMax = 0;
    local_768.bBowtiesCalculated = false;
    local_768.Mesh = pFVar37;
    local_728.Mesh = pFVar37;
    UE::Geometry::FEdgeSpan::InitializeFromEdges(&local_728,&local_8f0);
    UE::Geometry::FEdgeSpan::InitializeFromEdges(&local_768,&local_860);
    pFVar18 = UE::Geometry::FEdgeSpan::FEdgeSpan(&local_550,&local_728);
    pFVar19 = UE::Geometry::FEdgeSpan::FEdgeSpan(&local_510,&local_768);
    local_668._padding_ = (longlong)&___7FWeldEdgeSequence_Geometry_UE__6B_;
    local_668.Mesh = pFVar37;
    UE::Geometry::FEdgeSpan::FEdgeSpan(&local_668.EdgeSpanToDiscard,pFVar19);
    UE::Geometry::FEdgeSpan::FEdgeSpan(&local_668.EdgeSpanToKeep,pFVar18);
    local_668.bAllowIntermediateTriangleDeletion = false;
    local_668.bAllowFailedMerge = false;
    local_668.InterpolationT = 0.0;
    local_668.UnmergedEdgePairsOut.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_668.UnmergedEdgePairsOut.ArrayNum = 0;
    local_668.UnmergedEdgePairsOut.ArrayMax = 0;
    pFVar31 = (pFVar19->BowtieVertices).AllocatorInstance.Data;
    if (pFVar31 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar31);
    }
    pFVar31 = (pFVar19->Edges).AllocatorInstance.Data;
    if (pFVar31 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar31);
    }
    pFVar31 = (pFVar19->Vertices).AllocatorInstance.Data;
    if (pFVar31 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar31);
    }
    pFVar31 = (pFVar18->BowtieVertices).AllocatorInstance.Data;
    if (pFVar31 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar31);
    }
    pFVar31 = (pFVar18->Edges).AllocatorInstance.Data;
    if (pFVar31 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar31);
    }
    pFVar31 = (pFVar18->Vertices).AllocatorInstance.Data;
    if (pFVar31 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar31);
    }
    local_668.bAllowIntermediateTriangleDeletion = true;
    local_668.bAllowFailedMerge = true;
    local_668.InterpolationT = param_1;
    EVar12 = UE::Geometry::FWeldEdgeSequence::Weld(&local_668);
    pUVar7 = local_8d8;
    local_914 = (uint)(local_668.UnmergedEdgePairsOut.ArrayNum != 0);
    if (EVar12 != Ok) {
      local_947 = '\0';
    }
    if (((local_8d8->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((((pUVar7->CurrentMesh).Object)->TriangleRefCounts).UsedCount != 0) {
      FText::AsLocalizable_Advanced_LocText
                (&local_828,L"UEditMeshPolygonsTool",L"PolyMeshWeldEdgeChange",L"Weld Edges");
      lVar34 = (**(code **)(pUVar7->_padding_ + 0x2d8))(pUVar7);
      (**(code **)(*(longlong *)(lVar34 + 0x28) + 0x10))(lVar34 + 0x28,&local_828);
      pFVar21 = UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_1f8);
      TVar20 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_108);
      EmitCurrentMeshChangeAndUpdate(pUVar7,&local_828,TVar20,pFVar21);
      local_1f8.SelectedEdgeIDs.HashSize = 0;
      if (local_1f8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1f8.SelectedEdgeIDs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1f8.SelectedEdgeIDs.Elements);
      local_1f8.SelectedCornerIDs.HashSize = 0;
      if (local_1f8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1f8.SelectedCornerIDs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1f8.SelectedCornerIDs.Elements);
      local_1f8.SelectedGroupIDs.HashSize = 0;
      if (local_1f8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1f8.SelectedGroupIDs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_1f8);
      UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_3d8);
      uVar24 = (ulonglong)local_8f0.ArrayNum;
      local_4c8._0_8_ = (FScriptContainerElement *)0x0;
      local_4a8 = (ForElementType<unsigned_int>)0x0;
      local_4a0 = 0;
      local_494 = 0;
      local_488.Data = (FScriptContainerElement *)0x0;
      local_480 = 0;
      local_830 = local_8f0.AllocatorInstance.Data + uVar24 * 4;
      local_4c8._8_8_ = 0;
      local_49c = 0x80;
      local_498 = -1;
      local_944 = local_8f0.ArrayNum;
      FVar35.Data = local_8f0.AllocatorInstance.Data;
LAB_14cc417d7:
      do {
        pFVar31 = local_830;
        local_868 = FVar35.Data;
        if (local_8f0.ArrayNum != (int)uVar24) {
          local_946[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_946);
          pFVar32 = (FScriptContainerElement *)local_4c8._0_8_;
        }
        pUVar7 = local_8d8;
        pTVar6 = local_930;
        if (FVar35.Data == pFVar31) goto LAB_14cc41e6b;
        uVar29 = *(uint *)FVar35.Data;
        if (((-1 < (int)uVar29) &&
            ((int)uVar29 <
             (int)((pFVar37->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                  (pFVar37->EdgeRefCounts).RefCounts.CurBlockUsed))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 ((pFVar37->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar29 >> 9) * 8) + (ulonglong)(uVar29 & 0x1ff) * 2) -
                    1U) < 0xfffe)) {
          if (local_4c8._8_4_ != local_494) {
            FVar25.Data = local_490;
            if (local_488.Data != (FScriptContainerElement *)0x0) {
              FVar25.Data = local_488.Data;
            }
            for (iVar9 = *(int *)(FVar25.Data + (ulonglong)(local_480 - 1 & uVar29) * 4);
                iVar9 != -1; iVar9 = *(int *)(pFVar32 + (longlong)iVar9 * 0xc + 4)) {
              if (*(uint *)(pFVar32 + (longlong)iVar9 * 0xc) == uVar29) goto LAB_14cc41e5a;
            }
          }
          if ((local_930->Object == (FGroupTopology *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = UE::Geometry::FGroupTopology::FindGroupEdgeID(pTVar6->Object,uVar29);
          pFVar32 = (FScriptContainerElement *)local_4c8._0_8_;
          local_918 = iVar9;
          if (iVar9 != -1) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&local_3d8.SelectedEdgeIDs,local_840,(bool *)&local_918);
            if ((pTVar6->Object == (FGroupTopology *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pTVar16 = UE::Geometry::FGroupTopology::GetGroupEdgeEdges(pTVar6->Object,iVar9);
            iVar9 = pTVar16->ArrayNum;
            pFVar31 = (pTVar16->AllocatorInstance).Data;
            if ((iVar9 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InCount >= 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0xeb,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar29 = (iVar9 - local_494) + local_4c8._8_4_;
            if ((uint)(local_4c8._8_4_ - local_494) < uVar29) {
              if ((int)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar29);
              }
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_4c8,uVar29);
              uVar36 = 1;
              if (3 < uVar29) {
                uVar24 = (ulonglong)((uVar29 >> 1) + 7) * 2 + 1;
                lVar34 = 0x3f;
                if (uVar24 != 0) {
                  for (; uVar24 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                  }
                }
                local_850 = (undefined4)lVar34;
                uVar36 = 1 << ((byte)lVar34 & 0x1f);
              }
              if ((local_480 == 0) || ((int)local_480 < (int)uVar36)) {
                local_480 = uVar36;
                if (local_488.Data != (FScriptContainerElement *)0x0) {
                  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                            (&local_488,0,0,4);
                }
                if (uVar36 != 0) {
                  uVar29 = uVar36;
                  if (uVar36 < 2) {
                    if (local_488.Data != (FScriptContainerElement *)0x0) {
                      uVar29 = 0;
                      goto LAB_14cc41a32;
                    }
                  }
                  else {
LAB_14cc41a32:
                    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                              (&local_488,0,uVar29,4);
                  }
                  if (0 < (int)uVar36) {
                    uVar24 = 0;
                    uVar26 = (ulonglong)uVar36;
                    do {
                      FVar25.Data = local_490;
                      if (local_488.Data != (FScriptContainerElement *)0x0) {
                        FVar25.Data = local_488.Data;
                      }
                      uVar22 = (longlong)(int)uVar36 - 1U & uVar24;
                      uVar24 = uVar24 + 1;
                      *(undefined4 *)(FVar25.Data + uVar22 * 4) = 0xffffffff;
                      uVar26 = uVar26 - 1;
                    } while (uVar26 != 0);
                  }
                }
                if (local_480 != 0) {
                  pTStack_8c8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_4c8 + 0x10);
                  uStack_8cc = 1;
                  local_8d0 = 0;
                  iStack_8bc = 0;
                  iStack_8b8 = 0;
                  if (local_4a0 != 0) {
                    FVar33 = (ForElementType<unsigned_int>)((longlong)local_4c8 + 0x10);
                    if (local_4a8 != (ForElementType<unsigned_int>)0x0) {
                      FVar33 = local_4a8;
                    }
                    uVar29 = *(uint *)FVar33;
                    iStack_8b8 = 0;
                    local_8d0 = 0;
                    while (uVar29 == 0) {
                      iStack_8b8 = iStack_8b8 + 0x20;
                      lVar34 = (longlong)local_8d0;
                      local_8d0 = local_8d0 + 1;
                      if ((int)(local_4a0 + -1 + (local_4a0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_8d0)
                      goto LAB_14cc41b3d;
                      uVar29 = ((uint *)((longlong)FVar33 + 4))[lVar34];
                    }
                    uStack_8cc = -uVar29 & uVar29;
                    uVar24 = (ulonglong)uStack_8cc * 2 + 1;
                    lVar34 = 0x3f;
                    if (uVar24 != 0) {
                      for (; uVar24 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                      }
                    }
                    local_84c = (int)lVar34;
                    iStack_8bc = iStack_8b8 + -1 + local_84c;
                    if (local_4a0 < iStack_8bc) {
LAB_14cc41b3d:
                      iStack_8bc = local_4a0;
                    }
                  }
                  local_8c0 = 0xffffffff;
                  local_818 = (longlong *)local_4c8;
                  local_810._padding_ = CONCAT44(uStack_8cc,local_8d0);
                  local_810.CurrentBitIndex = iStack_8bc;
                  local_810.UnvisitedBitMask = 0xffffffff;
                  local_810._28_4_ = uStack_8b4;
                  local_810.BaseBitIndex = iStack_8b8;
                  local_810.Array = pTStack_8c8;
                  iVar13 = iStack_8bc;
                  if (iStack_8bc < local_4a0) {
                    do {
                      lVar34 = *local_818;
                      lVar38 = (longlong)iVar13;
                      uVar29 = local_480 - 1 & *(uint *)(lVar34 + lVar38 * 0xc);
                      *(uint *)(lVar34 + 8 + lVar38 * 0xc) = uVar29;
                      FVar25.Data = local_490;
                      if (local_488.Data != (FScriptContainerElement *)0x0) {
                        FVar25.Data = local_488.Data;
                      }
                      uVar24 = (longlong)(int)local_480 - 1U & (longlong)(int)uVar29;
                      *(undefined4 *)(lVar34 + 4 + lVar38 * 0xc) =
                           *(undefined4 *)(FVar25.Data + uVar24 * 4);
                      *(int *)(FVar25.Data + uVar24 * 4) = iVar13;
                      local_810.UnvisitedBitMask =
                           local_810.UnvisitedBitMask & ~local_810._padding_._4_4_;
                      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_810);
                      iVar13 = local_810.CurrentBitIndex;
                    } while (local_810.CurrentBitIndex < (local_810.Array)->NumBits);
                  }
                }
              }
            }
            pFVar1 = pFVar31 + (longlong)iVar9 * 4;
            pFVar32 = (FScriptContainerElement *)local_4c8._0_8_;
            iVar9 = local_498;
            for (; local_4c8._0_8_ = pFVar32, local_498 = iVar9, pFVar31 != pFVar1;
                pFVar31 = pFVar31 + 4) {
              uVar29 = 1;
              if (local_494 == 0) {
                iVar9 = UE::Core::Private::
                        ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0xc,4,1,(ForAnyElementType *)local_4c8,(int *)(local_4c8 + 8),
                                   (int *)(local_4c8 + 0xc));
                iVar13 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                                   ((TBitArray<FDefaultBitArrayAllocator> *)(local_4c8 + 0x10),1);
                FVar33 = (ForElementType<unsigned_int>)((longlong)local_4c8 + 0x10);
                if (local_4a8 != (ForElementType<unsigned_int>)0x0) {
                  FVar33 = local_4a8;
                }
                bVar23 = (byte)iVar13 & 0x1f;
                if (iVar13 < 0) {
                  iVar13 = iVar13 + 0x1f;
                  bVar23 = bVar23 - 0x20;
                }
                puVar2 = (uint *)((longlong)FVar33 + (longlong)(iVar13 >> 5) * 4);
                *puVar2 = *puVar2 & ~(1 << (bVar23 & 0x1f));
              }
              else {
                local_498 = *(int *)(pFVar32 + (longlong)iVar9 * 0xc + 4);
                local_494 = local_494 + -1;
                if (local_494 != 0) {
                  *(undefined4 *)(pFVar32 + (longlong)local_498 * 0xc) = 0xffffffff;
                }
              }
              TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               *)local_4c8,&local_6a8,iVar9);
              if (local_6a8.Pointer != (uint *)0x0) {
                *(uint *)local_6a8.Pointer = *(uint *)pFVar31;
                *(uint *)((longlong)local_6a8.Pointer + 4) = 0xffffffff;
              }
              uVar36 = *(uint *)local_6a8.Pointer;
              if ((local_4c8._8_4_ - local_494 != 1) && (local_4c8._8_4_ != local_494)) {
                FVar35.Data = local_490;
                if (local_488.Data != (FScriptContainerElement *)0x0) {
                  FVar35.Data = local_488.Data;
                }
                for (iVar9 = *(int *)(FVar35.Data + (ulonglong)(local_480 - 1 & uVar36) * 4);
                    iVar9 != -1; iVar9 = *(int *)(local_4c8._0_8_ + (longlong)iVar9 * 0xc + 4)) {
                  if (*(uint *)(local_4c8._0_8_ + (longlong)iVar9 * 0xc) == uVar36) {
                    if (iVar9 != -1) {
                      *(uint *)(local_4c8._0_8_ + (longlong)iVar9 * 0xc) = uVar36;
                      TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ::RemoveAtUninitialized
                                ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                  *)local_4c8,local_6a8.Index,1);
                      goto LAB_14cc41e27;
                    }
                    break;
                  }
                }
              }
              uVar28 = local_4c8._8_4_ - local_494;
              if (3 < uVar28) {
                uVar24 = (ulonglong)((uVar28 >> 1) + 7) * 2 + 1;
                lVar34 = 0x3f;
                if (uVar24 != 0) {
                  for (; uVar24 >> lVar34 == 0; lVar34 = lVar34 + -1) {
                  }
                }
                local_844 = (undefined4)lVar34;
                uVar29 = 1 << ((byte)lVar34 & 0x1f);
              }
              if (((int)uVar28 < 1) || ((int)uVar29 <= (int)local_480)) {
                uVar36 = local_480 - 1 & uVar36;
                *(uint *)((longlong)local_6a8.Pointer + 8) = uVar36;
                FVar35.Data = local_490;
                if (local_488.Data != (FScriptContainerElement *)0x0) {
                  FVar35.Data = local_488.Data;
                }
                uVar24 = (longlong)(int)local_480 - 1U & (longlong)(int)uVar36;
                *(uint *)((longlong)local_6a8.Pointer + 4) = *(uint *)(FVar35.Data + uVar24 * 4);
                *(int *)(FVar35.Data + uVar24 * 4) = local_6a8.Index;
              }
              else {
                local_480 = uVar29;
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_4c8);
              }
LAB_14cc41e27:
              FVar35.Data = local_868;
              pFVar37 = local_8e0;
              pFVar32 = (FScriptContainerElement *)local_4c8._0_8_;
              iVar9 = local_498;
            }
            uVar24 = (ulonglong)local_944;
            FVar35.Data = FVar35.Data + 4;
            goto LAB_14cc417d7;
          }
        }
LAB_14cc41e5a:
        uVar24 = (ulonglong)local_944;
        FVar35.Data = FVar35.Data + 4;
      } while( true );
    }
    plVar14 = (longlong *)(**(code **)(pUVar7->_padding_ + 0x2d8))(pUVar7);
    pcVar4 = *(code **)(*plVar14 + 0x360);
    pFVar15 = FText::AsLocalizable_Advanced_LocText
                        (&local_578,L"UEditMeshPolygonsTool",L"WeldEdgesWouldDeleteAll",
                         L"Could not weld current selection because doing so would discard entire mesh."
                        );
    (*pcVar4)(plVar14,pFVar15,3);
    if (local_578.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_578.TextData.Reference + 0x10))();
    }
    TVar20 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_108);
    UE::Geometry::FDynamicMeshChange::Apply
              ((FDynamicMeshChange *)((TVar20.Ptr)->OldVertices).AllocatorInstance.Data,
               (pUVar7->CurrentMesh).Object,true);
    if (local_838 != (FDynamicMeshChange *)0x0) {
      UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(local_838);
      ::operator_delete(local_838,0x48);
    }
    UPreviewMesh::UpdatePreview
              ((((pUVar7->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
               (pUVar7->CurrentMesh).Object,FullUpdate,AllVertexAttribs);
    this_00 = (pUVar7->SelectionMechanic).field0_0x0.DebugPtr;
    pUVar7->bSpatialDirty = true;
    UMeshTopologySelectionMechanic::NotifyMeshChanged
              ((UMeshTopologySelectionMechanic *)this_00,false);
    pTVar6 = local_930;
    if ((local_930->Object == (FGroupTopology *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_478._0_8_ = (FScriptContainerElement *)0x0;
    local_478._8_8_ = 0;
    local_458 = (void *)0x0;
    local_450 = 0;
    local_44c = 0x80;
    local_448 = 0xffffffff;
    local_444 = 0;
    local_438 = (ForElementType<FSetElementId>)0x0;
    local_430 = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_478,
               &pTVar6->Object->CurrentExtraCornerVids);
    if ((pTVar6->Object == (FGroupTopology *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)(pTVar6->Object->_padding_ + 0x10))();
    local_430 = 0;
    if (local_438 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_438);
    }
    bVar8 = local_478._12_4_ != 0;
    local_478._8_8_ = (ulonglong)(uint)local_478._12_4_ << 0x20;
    if (bVar8) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)local_478,0,(int *)(local_478 + 0xc));
    }
    local_448 = 0xffffffff;
    local_444 = 0;
    local_450 = 0;
    if (0x80 < local_44c) {
      local_44c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_478 + 0x10),0);
    }
    if (local_458 != (void *)0x0) {
      FMemory::Free(local_458);
    }
    if ((FScriptContainerElement *)local_478._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_478._0_8_);
    }
    goto LAB_14cc42008;
  }
  plVar14 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar4 = *(code **)(*plVar14 + 0x360);
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_588,L"UEditMeshPolygonsTool",L"OnWeldEdgesFailedEdgeCount",
                       L"Cannot Weld current selection, selection could not be partitioned into two non-loop open-boundary sequences."
                      );
  (*pcVar4)(plVar14,pFVar15,3);
  if (local_588.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_588.TextData.Reference + 0x10))();
  }
  goto LAB_14cc42114;
LAB_14cc41e6b:
  if (((local_3d8.SelectedCornerIDs.Elements._8_4_ != local_3d8.SelectedCornerIDs.Elements._52_4_)
      || (local_3d8.SelectedEdgeIDs.Elements._8_4_ != local_3d8.SelectedEdgeIDs.Elements._52_4_)) ||
     (local_3d8.SelectedGroupIDs.Elements._8_4_ != local_3d8.SelectedGroupIDs.Elements._52_4_)) {
    UMeshTopologySelectionMechanic::SetSelection
              ((UMeshTopologySelectionMechanic *)(local_8d8->SelectionMechanic).field0_0x0.DebugPtr,
               &local_3d8,true);
  }
  if ((char)local_914 == '\0') {
    if (local_947 == '\0') {
      plVar14 = (longlong *)(**(code **)(pUVar7->_padding_ + 0x2d8))(pUVar7);
      pcVar4 = *(code **)(*plVar14 + 0x360);
      pFVar15 = FText::AsLocalizable_Advanced_LocText
                          (&local_568,L"UEditMeshPolygonsTool",L"OnWeldEdgesPartialFailure",
                           L"Warning: some edges could not be welded.");
      (*pcVar4)(plVar14,pFVar15,3);
      if (local_568.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_568.TextData.Reference + 0x10))();
      }
    }
  }
  else {
    plVar14 = (longlong *)(**(code **)(pUVar7->_padding_ + 0x2d8))(pUVar7);
    (**(code **)(*plVar14 + 0x360))(plVar14,&EditMeshPolygonsToolLocals::WeldIncompleteMessage,3);
  }
  lVar34 = (**(code **)(pUVar7->_padding_ + 0x2d8))(pUVar7);
  (**(code **)(*(longlong *)(lVar34 + 0x28) + 0x18))(lVar34 + 0x28);
  local_480 = 0;
  if (local_488.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_4c8);
  local_3d8.SelectedEdgeIDs.HashSize = 0;
  if (local_3d8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3d8.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_3d8.SelectedEdgeIDs.Elements);
  local_3d8.SelectedCornerIDs.HashSize = 0;
  if (local_3d8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3d8.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_3d8.SelectedCornerIDs.Elements);
  local_3d8.SelectedGroupIDs.HashSize = 0;
  if (local_3d8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3d8.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_3d8);
  if (local_828.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_828.TextData.Reference + 0x10))();
  }
LAB_14cc42008:
  local_668._padding_ = (longlong)&___7FWeldEdgeSequence_Geometry_UE__6B_;
  if (local_668.UnmergedEdgePairsOut.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.UnmergedEdgePairsOut.AllocatorInstance.Data);
  }
  if (local_668.EdgeSpanToKeep.BowtieVertices.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.EdgeSpanToKeep.BowtieVertices.AllocatorInstance.Data);
  }
  if (local_668.EdgeSpanToKeep.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.EdgeSpanToKeep.Edges.AllocatorInstance.Data);
  }
  if (local_668.EdgeSpanToKeep.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.EdgeSpanToKeep.Vertices.AllocatorInstance.Data);
  }
  if (local_668.EdgeSpanToDiscard.BowtieVertices.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.EdgeSpanToDiscard.BowtieVertices.AllocatorInstance.Data);
  }
  if (local_668.EdgeSpanToDiscard.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_668.EdgeSpanToDiscard.Edges.AllocatorInstance.Data);
  }
  if (local_668.EdgeSpanToDiscard.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_668.EdgeSpanToDiscard.Vertices.AllocatorInstance.Data);
  }
  if (local_768.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_768.BowtieVertices.AllocatorInstance.Data);
  }
  if (local_768.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_768.Edges.AllocatorInstance.Data);
  }
  if (local_768.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_768.Vertices.AllocatorInstance.Data);
  }
  if (local_728.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_728.BowtieVertices.AllocatorInstance.Data);
  }
  if (local_728.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_728.Edges.AllocatorInstance.Data);
  }
  if (local_728.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_728.Vertices.AllocatorInstance.Data);
  }
  if (local_860.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_860.AllocatorInstance.Data);
  }
  if (local_8f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8f0.AllocatorInstance.Data);
  }
  UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_108);
LAB_14cc42114:
  if (local_940.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_940.AllocatorInstance.Data);
  }
  if (local_928.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_928.AllocatorInstance.Data);
  }
LAB_14cc42132:
  local_428.HashSize = 0;
  if (local_428.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_428.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_428.Elements);
  local_2e8.SelectedEdgeIDs.HashSize = 0;
  if (local_2e8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2e8.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_2e8.SelectedEdgeIDs.Elements);
  local_2e8.SelectedCornerIDs.HashSize = 0;
  if (local_2e8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2e8.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_2e8.SelectedCornerIDs.Elements);
  local_2e8.SelectedGroupIDs.HashSize = 0;
  if (local_2e8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_2e8.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_2e8);
  return;
}

// ApplyWeldEdges @ 14cc42210

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplyWeldEdges(UEditMeshPolygonsTool *this)

{
  ApplyWeldEdges(this,0.0);
  return;
}

// ApplyWeldVertices @ 14cc42220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ApplyWeldVertices(UEditMeshPolygonsTool *this,double param_1)

{
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *this_00;
  TSharedPtr<UE::Geometry::FGroupTopology,1> *this_01;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  FText *pFVar8;
  FDynamicMesh3 *this_02;
  FGroupTopologySelection *pFVar9;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar10;
  FGroupTopology *pFVar11;
  undefined1 auStackY_5d8 [32];
  int local_5a4;
  TArray<int,TSizedDefaultAllocator<32>_> local_5a0;
  UEditMeshPolygonsTool *local_590;
  int local_588;
  int local_584;
  double local_580;
  int local_578 [2];
  FDynamicMeshChangeTracker *local_570;
  FDynamicMeshChangeTracker *local_568;
  FText local_560;
  code *local_550;
  FDynamicMeshChangeTracker **local_548;
  code *local_540;
  FDynamicMeshChangeTracker **local_538;
  FText local_528;
  FText local_518;
  FText local_508;
  FText local_4f8;
  undefined8 local_4e0;
  undefined1 local_4a0;
  void *local_460;
  void *local_440;
  char local_428;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_418;
  FGroupTopologySelection local_3c8;
  FDynamicMeshChangeTracker local_2d8;
  FGroupTopologySelection local_228;
  FGroupTopologySelection local_138;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_5d8;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
            (&local_3c8,
             (FGroupTopologySelection *)&((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_)
  ;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
            (&local_3c8.SelectedCornerIDs,&local_5a0);
  if (local_5a0.ArrayNum != 2) goto LAB_14cc428f5;
  this_00 = &this->CurrentMesh;
  UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_2d8,this_00->Object);
  UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_2d8);
  this_01 = &this->Topology;
  local_418.Elements._0_8_ = 0;
  local_418.Elements._8_8_ = 0;
  local_418.Elements._32_8_ = 0;
  local_418.Elements._40_4_ = 0;
  local_418.Elements._44_4_ = 0x80;
  local_418.Elements._48_4_ = 0xffffffff;
  local_418.Elements._52_4_ = 0;
  local_418.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_418.HashSize = 0;
  EditMeshPolygonsToolLocals::ConvertCornerSelectionToGroupEdgeSelection
            (this_01->Object,&local_3c8.SelectedCornerIDs,&local_418);
  if (local_418.Elements._8_4_ == local_418.Elements._52_4_) {
    if (this_01->Object == (FGroupTopology *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar11 = this_01->Object;
    if (local_5a0.ArrayNum < 2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar3 = UE::Geometry::FGroupTopology::GetCornerVertexID
                      (pFVar11,*(int *)(local_5a0.AllocatorInstance.Data + 4));
    if (this_01->Object == (FGroupTopology *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar11 = this_01->Object;
    if (local_5a0.ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar4 = UE::Geometry::FGroupTopology::GetCornerVertexID
                      (pFVar11,*(int *)local_5a0.AllocatorInstance.Data);
    if (this_00->Object == (FDynamicMesh3 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_570 = &local_2d8;
    local_548 = &local_570;
    local_550 = UE::Core::Private::Function::
                TFunctionRefCaller<`UEditMeshPolygonsTool::ApplyWeldVertices'::__l2::<lambda_1>,void,int>
                ::Call;
    UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
              (this_00->Object,iVar4,(TFunctionRef<void___cdecl(int)> *)&local_550);
    if (this_00->Object == (FDynamicMesh3 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_568 = &local_2d8;
    local_538 = &local_568;
    local_540 = UE::Core::Private::Function::
                TFunctionRefCaller<`UEditMeshPolygonsTool::ApplyWeldVertices'::__l2::<lambda_2>,void,int>
                ::Call;
    UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
              (this_00->Object,iVar3,(TFunctionRef<void___cdecl(int)> *)&local_540);
    local_4e0 = 0;
    local_4a0 = 0;
    local_428 = '\0';
    local_590 = this;
    local_588 = iVar3;
    local_584 = iVar4;
    local_580 = param_1;
    if (this_00->Object == (FDynamicMesh3 *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uVar5 = (**(code **)(this_00->Object->_padding_ + 0xa8))
                      (this_00->Object,iVar3,iVar4,SUB84(param_1,0));
    if ((uVar5 < 0x1e) && ((0x25000000U >> (uVar5 & 0x1f) & 1) != 0)) {
      if (this_00->Object == (FDynamicMesh3 *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      iVar4 = UE::Geometry::FDynamicMesh3::FindEdge(this_00->Object,iVar3,iVar4);
      if (this_00->Object == (FDynamicMesh3 *)0x0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      bVar2 = EditMeshPolygonsToolLocals::RemoveEdgeTrisIfNotLast(this_00->Object,iVar4);
      if (bVar2) goto LAB_14cc4277a;
      plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar1 = *(code **)(*plVar7 + 0x360);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_528,L"UEditMeshPolygonsTool",L"WeldVerticesCannotDeleteAll",
                          L"Could not weld vertices because it would delete remainder of mesh.");
      (*pcVar1)(plVar7,pFVar8,3);
    }
    else {
      if (uVar5 == 0x17) {
        this_02 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->(this_00);
        iVar4 = UE::Geometry::FDynamicMesh3::FindEdge(this_02,iVar3,iVar4);
        if (iVar4 != -1) {
          plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
          pcVar1 = *(code **)(*plVar7 + 0x360);
          pFVar8 = FText::AsLocalizable_Advanced_LocText
                             (&local_518,L"UEditMeshPolygonsTool",
                              L"WeldVerticesCollapseInvalidTopology",
                              L"Could not weld vertices because the collapse would create an edge with more than two triangles (non-manifold geometry)."
                             );
          (*pcVar1)(plVar7,pFVar8,3);
          local_528.TextData.Reference = local_518.TextData.Reference;
          goto LAB_14cc42872;
        }
LAB_14cc429a5:
        `UEditMeshPolygonsTool::ApplyWeldVertices'::__l2::<lambda_3>::operator()(&local_590);
        plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
        (**(code **)(*plVar7 + 0x360))(plVar7,&EditMeshPolygonsToolLocals::WeldIncompleteMessage,3);
      }
      else if (uVar5 == 0x1e) {
        `UEditMeshPolygonsTool::ApplyWeldVertices'::__l2::<lambda_3>::operator()(&local_590);
        plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
        pcVar1 = *(code **)(*plVar7 + 0x360);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_508,L"UEditMeshPolygonsTool",
                            L"WeldVerticesDisallowInternalBowtie",
                            L"Could not weld vertices because it would create a non-boundary edge bowtie. Vertices were moved to their destination without actually welding. Set modeling.PolyEdit.AllowWeldInternalBowtie to true to allow a true weld."
                           );
        (*pcVar1)(plVar7,pFVar8,3);
        if (local_508.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_508.TextData.Reference + 0x10))();
        }
      }
      else {
        if (uVar5 == 0x1b) goto LAB_14cc429a5;
        if (uVar5 != 0) {
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_1092627319186519433>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\EditMeshPolygonsTool.cpp"
                             ,0xa77,"Result == EMeshResult::Ok");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
          pcVar1 = *(code **)(*plVar7 + 0x360);
          pFVar8 = FText::AsLocalizable_Advanced_LocText
                             (&local_4f8,L"UEditMeshPolygonsTool",L"WeldVerticesGenericFailure",
                              L"Could not weld vertices.");
          (*pcVar1)(plVar7,pFVar8,3);
          local_528.TextData.Reference = local_4f8.TextData.Reference;
          goto LAB_14cc42872;
        }
      }
LAB_14cc4277a:
      FText::AsLocalizable_Advanced_LocText
                (&local_560,L"UEditMeshPolygonsTool",L"PolyMeshWeldVerticesChange",L"Weld Vertices")
      ;
      lVar6 = (**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))(lVar6 + 0x28,&local_560);
      pFVar9 = UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_138);
      TVar10 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_2d8);
      EmitCurrentMeshChangeAndUpdate(this,&local_560,TVar10,pFVar9);
      UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&local_138);
      pFVar11 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator->(this_01);
      local_5a4 = UE::Geometry::FGroupTopology::GetCornerIDFromVertexID(pFVar11,iVar3);
      if (local_5a4 != -1) {
        UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_228);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_228.SelectedCornerIDs,local_578,(bool *)&local_5a4);
        UMeshTopologySelectionMechanic::SetSelection
                  ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr,
                   &local_228,true);
        UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&local_228);
      }
      lVar6 = (**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x18))(lVar6 + 0x28);
      local_528.TextData.Reference = local_560.TextData.Reference;
    }
LAB_14cc42872:
    if (local_528.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_528.TextData.Reference + 0x10))();
    }
    if (local_428 != '\0') {
      if (local_440 != (void *)0x0) {
        FMemory::Free(local_440);
      }
      if (local_460 != (void *)0x0) {
        FMemory::Free(local_460);
      }
    }
  }
  else {
    lVar6 = (**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x10))
              (lVar6 + 0x28,&EditMeshPolygonsToolLocals::CollapseEdgeTransactionLabel);
    CollapseGroupEdges(this,&local_418,&local_2d8);
    lVar6 = (**(code **)(this->_padding_ + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x18))(lVar6 + 0x28);
  }
  local_418.HashSize = 0;
  if (local_418.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_418.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_418.Elements);
  UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_2d8);
LAB_14cc428f5:
  if (local_5a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a0.AllocatorInstance.Data);
  }
  local_3c8.SelectedEdgeIDs.HashSize = 0;
  if (local_3c8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3c8.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_3c8.SelectedEdgeIDs.Elements);
  local_3c8.SelectedCornerIDs.HashSize = 0;
  if (local_3c8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3c8.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_3c8.SelectedCornerIDs.Elements);
  local_3c8.SelectedGroupIDs.HashSize = 0;
  if (local_3c8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_3c8.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_3c8);
  return;
}

// BeginDeformerChange @ 14cc42d30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::BeginDeformerChange(UEditMeshPolygonsTool *this)

{
  FMeshVertexChangeBuilder *this_00;
  FMeshVertexChangeBuilder *pFVar1;
  
  if (this->ActiveVertexChange == (FMeshVertexChangeBuilder *)0x0) {
    this_00 = ::operator_new(0x140);
    pFVar1 = (FMeshVertexChangeBuilder *)0x0;
    if (this_00 != (FMeshVertexChangeBuilder *)0x0) {
      pFVar1 = FMeshVertexChangeBuilder::FMeshVertexChangeBuilder
                         (this_00,OverlayNormals|VertexPositions);
    }
    this->ActiveVertexChange = pFVar1;
    UpdateDeformerChangeFromROI(this,false);
    return;
  }
  return;
}

// BeginMeshBoundaryEdgeEditChange @ 14cc430f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UEditMeshPolygonsTool::BeginMeshBoundaryEdgeEditChange(UEditMeshPolygonsTool *this,bool param_1)

{
  bool bVar1;
  UEditMeshPolygonsTool *local_res18 [2];
  code *local_18;
  UEditMeshPolygonsTool **local_10;
  
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UEditMeshPolygonsTool::BeginMeshBoundaryEdgeEditChange'::__l5::<lambda_1>,bool,int>
             ::Call;
  if (!param_1) {
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UEditMeshPolygonsTool::BeginMeshBoundaryEdgeEditChange'::__l7::<lambda_2>,bool,int>
               ::Call;
  }
  local_res18[0] = this;
  bVar1 = BeginMeshEdgeEditChange(this,(TFunctionRef<bool___cdecl(int)> *)&local_18);
  return bVar1;
}

// BeginMeshEdgeEditChange @ 14cc43130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UEditMeshPolygonsTool::BeginMeshEdgeEditChange
          (UEditMeshPolygonsTool *this,TFunctionRef<bool___cdecl(int)> *param_1)

{
  int *piVar1;
  TArray<UEditMeshPolygonsTool::FSelectedEdge,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  FSelectedEdge *pFVar7;
  UPolygonSelectionMechanic *pUVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *_Src;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  longlong *plVar18;
  uint uVar19;
  undefined1 local_res18 [8];
  uint local_res20;
  int local_c0 [2];
  longlong *local_b8;
  int iStack_b0;
  uint uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  int local_84;
  longlong *local_80;
  longlong *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  pTVar2 = &this->ActiveEdgeSelection;
  piVar1 = &(this->ActiveEdgeSelection).ArrayMax;
  pFVar7 = (FSelectedEdge *)(pTVar2->AllocatorInstance).Data;
  iVar5 = (this->ActiveEdgeSelection).ArrayNum;
  if ((this->ActiveEdgeSelection).ArrayMax < 0) {
    DestructItems<UEditMeshPolygonsTool::FSelectedEdge,int>(pFVar7,iVar5);
    (this->ActiveEdgeSelection).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<UEditMeshPolygonsTool::FSelectedEdge,int>(pFVar7,iVar5);
    (this->ActiveEdgeSelection).ArrayNum = 0;
  }
  pUVar8 = (this->SelectionMechanic).field0_0x0.DebugPtr;
  uVar17 = (int)pUVar8->_padding_ - *(int *)((longlong)&pUVar8->_padding_ + 4);
  if (uVar17 == 0) {
    return false;
  }
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (*piVar1 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar17,&pTVar2->AllocatorInstance,(this->ActiveEdgeSelection).ArrayNum,piVar1)
    ;
  }
  iStack_b0 = 0;
  iVar5 = (int)pUVar8->_padding_;
  local_b8 = &pUVar8->_padding_;
  uStack_ac = 1;
  iStack_9c = iStack_b0;
  local_98 = iStack_b0;
  if (iVar5 != 0) {
    plVar18 = (longlong *)pUVar8->_padding_;
    if ((longlong *)pUVar8->_padding_ == (longlong *)0x0) {
      plVar18 = &pUVar8->_padding_;
    }
    uVar17 = (uint)*plVar18;
    local_98 = 0;
    iStack_b0 = 0;
    while (uVar17 == 0) {
      lVar15 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_14cc432b6;
      uVar17 = *(uint *)((longlong)plVar18 + (lVar15 + 1) * 4);
    }
    uStack_ac = -uVar17 & uVar17;
    uVar4 = (ulonglong)uStack_ac * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_88 = (int)lVar15;
    iStack_9c = local_98 + -1 + local_88;
    if (iVar5 < iStack_9c) {
      iStack_9c = iVar5;
    }
  }
LAB_14cc432b6:
  local_a8 = &pUVar8->_padding_;
  iStack_90 = (int)pUVar8->_padding_ - *(int *)((longlong)&pUVar8->_padding_ + 4);
  uVar17 = (uint)pUVar8->_padding_;
  uStack_a0 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_ac,iStack_b0);
  uVar19 = uVar17 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iStack_9c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar17 >> 5;
  TStack_70._28_4_ = iStack_9c;
  TStack_70.BaseBitIndex = local_98;
  uStack_50 = CONCAT44(uStack_8c,iStack_90);
  local_res20 = uVar17;
  iStack_94 = iStack_9c;
  local_80 = local_b8;
  local_78 = local_b8;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a8;
  if ((((int)uVar17 < 0) || (iVar5 < (int)uVar17)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  uVar6 = (uint)pUVar8->_padding_;
  if (uVar17 != uVar6) {
    plVar18 = (longlong *)pUVar8->_padding_;
    if ((longlong *)pUVar8->_padding_ == (longlong *)0x0) {
      plVar18 = &pUVar8->_padding_;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)((longlong)plVar18 + (longlong)iVar16 * 4);
    while (uVar17 == 0) {
      lVar15 = (longlong)iVar16;
      uVar19 = uVar19 + 0x20;
      iVar16 = iVar16 + 1;
      uVar17 = uVar6;
      local_res20 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14cc433e0;
      uVar17 = *(uint *)((longlong)plVar18 + lVar15 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_84 = (int)lVar15;
    uVar17 = local_84 + -1 + uVar19;
    local_res20 = uVar17;
    if ((int)uVar6 < (int)uVar17) {
      uVar17 = uVar6;
      local_res20 = uVar6;
    }
  }
LAB_14cc433e0:
  while( true ) {
    plVar18 = local_78;
    if ((int)local_78[1] - *(int *)((longlong)local_78 + 0x34) != (int)uStack_50) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_70.CurrentBitIndex == uVar17) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)&pUVar8->_padding_)) &&
       (plVar18 == local_80)) break;
    iVar5 = *(int *)(*plVar18 + (longlong)TStack_70.CurrentBitIndex * 0xc);
    local_c0[0] = iVar5;
    cVar13 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_c0);
    if (cVar13 != '\0') {
      iVar16 = (this->ActiveEdgeSelection).ArrayNum;
      if (iVar16 == *piVar1) {
        iVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar2->AllocatorInstance,piVar1);
      }
      lVar15 = (longlong)iVar16;
      (this->ActiveEdgeSelection).ArrayNum = iVar16 + 1;
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      *(undefined4 *)(pFVar9 + lVar15 * 0x18 + 4) = 0;
      pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)(pFVar9 + lVar15 * 0x18 + 8);
      *(undefined4 *)(pFVar9 + lVar15 * 0x18 + 0x10) = 0;
      (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(int *)(pFVar9 + lVar15 * 0x18 + 0x14) = 0;
      *(int *)(pFVar9 + lVar15 * 0x18) = iVar5;
      if (((this->Topology).Object == (FGroupTopology *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
      pTVar14 = UE::Geometry::FGroupTopology::GetGroupEdgeEdges((this->Topology).Object,iVar5);
      if (pTVar3 != pTVar14) {
        iVar5 = pTVar14->ArrayNum;
        _Src = (pTVar14->AllocatorInstance).Data;
        pTVar3->ArrayNum = iVar5;
        if ((iVar5 == 0) && (pTVar3->ArrayMax == 0)) {
          pTVar3->ArrayMax = 0;
          uVar17 = local_res20;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar5,pTVar3->ArrayMax,(ForAnyElementType *)pTVar3,iVar5,
                     (int *)(pFVar9 + lVar15 * 0x18 + 0x14));
          uVar17 = local_res20;
          if (iVar5 != 0) {
            memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar5 << 2);
            uVar17 = local_res20;
          }
        }
      }
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return 0 < (this->ActiveEdgeSelection).ArrayNum;
}

// BeginMeshEdgeEditChange @ 14cc43590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UEditMeshPolygonsTool::BeginMeshEdgeEditChange(UEditMeshPolygonsTool *this)

{
  bool bVar1;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UEditMeshPolygonsTool::BeginMeshEdgeEditChange'::__l2::<lambda_1>,bool,int>
             ::Call;
  bVar1 = BeginMeshEdgeEditChange(this,(TFunctionRef<bool___cdecl(int)> *)&local_18);
  return bVar1;
}

// BeginMeshFaceEditChange @ 14cc435c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UEditMeshPolygonsTool::BeginMeshFaceEditChange(UEditMeshPolygonsTool *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TFrame3<double> *this_00;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  UPolygonSelectionMechanic *pUVar6;
  FDynamicMesh3 *this_01;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  TAxisAlignedBox3<double> *pTVar14;
  TFrame3<double> *pTVar15;
  TVector<double> *pTVar16;
  FScriptContainerElement *pFVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_c8;
  TVector<double> local_b0;
  TAxisAlignedBox3<double> local_98;
  TFrame3<double> local_68;
  
  pTVar1 = &this->ActiveTriangleSelection;
  (this->ActiveTriangleSelection).ArrayNum = 0;
  if ((this->ActiveTriangleSelection).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,&(this->ActiveTriangleSelection).ArrayMax);
  }
  pUVar6 = (this->SelectionMechanic).field0_0x0.DebugPtr;
  if (((this->Topology).Object == (FGroupTopology *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    uVar13 = (*pcVar7)();
    return (bool)uVar13;
  }
  UE::Geometry::FGroupTopology::GetSelectedTriangles
            ((this->Topology).Object,(FGroupTopologySelection *)&pUVar6->_padding_,pTVar1);
  if ((int)pUVar6->_padding_ != *(int *)((longlong)&pUVar6->_padding_ + 4)) {
    iVar5 = (this->ActiveTriangleSelection).ArrayNum;
    if (iVar5 != 0) {
      this_01 = (this->CurrentMesh).Object;
      (this->ActiveSelectionBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
      (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
      (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
      (this->ActiveSelectionBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
      (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
      (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
      pFVar17 = (pTVar1->AllocatorInstance).Data;
      pFVar2 = pFVar17 + (longlong)iVar5 * 4;
      while( true ) {
        if ((this->ActiveTriangleSelection).ArrayNum != iVar5) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (pFVar17 == pFVar2) break;
        pTVar14 = UE::Geometry::FDynamicMesh3::GetTriBounds(this_01,&local_98,*(int *)pFVar17);
        pFVar17 = pFVar17 + 4;
        dVar3 = *(double *)&(pTVar14->Min).field0_0x0;
        uVar18 = SUB84(dVar3,0);
        uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar4 = *(double *)&(this->ActiveSelectionBounds).Min.field0_0x0;
        if (dVar4 <= dVar3) {
          uVar18 = SUB84(dVar4,0);
          uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        (this->ActiveSelectionBounds).Min.field0_0x0._s_0.X = (double)CONCAT44(uVar19,uVar18);
        dVar3 = *(double *)((longlong)&(pTVar14->Min).field0_0x0 + 8);
        uVar18 = SUB84(dVar3,0);
        uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar4 = *(double *)((longlong)&(this->ActiveSelectionBounds).Min.field0_0x0 + 8);
        if (dVar4 <= dVar3) {
          uVar18 = SUB84(dVar4,0);
          uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Y = (double)CONCAT44(uVar19,uVar18);
        dVar3 = *(double *)((longlong)&(pTVar14->Min).field0_0x0 + 0x10);
        uVar18 = SUB84(dVar3,0);
        uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar4 = *(double *)((longlong)&(this->ActiveSelectionBounds).Min.field0_0x0 + 0x10);
        if (dVar4 <= dVar3) {
          uVar18 = SUB84(dVar4,0);
          uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        (this->ActiveSelectionBounds).Min.field0_0x0._s_0.Z = (double)CONCAT44(uVar19,uVar18);
        dVar3 = *(double *)&(pTVar14->Max).field0_0x0;
        uVar18 = SUB84(dVar3,0);
        uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar4 = *(double *)&(this->ActiveSelectionBounds).Max.field0_0x0;
        if (dVar3 <= dVar4) {
          uVar18 = SUB84(dVar4,0);
          uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        (this->ActiveSelectionBounds).Max.field0_0x0._s_0.X = (double)CONCAT44(uVar19,uVar18);
        dVar3 = *(double *)((longlong)&(pTVar14->Max).field0_0x0 + 8);
        uVar18 = SUB84(dVar3,0);
        uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar4 = *(double *)((longlong)&(this->ActiveSelectionBounds).Max.field0_0x0 + 8);
        if (dVar3 <= dVar4) {
          uVar18 = SUB84(dVar4,0);
          uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Y = (double)CONCAT44(uVar19,uVar18);
        dVar3 = *(double *)((longlong)&(pTVar14->Max).field0_0x0 + 0x10);
        uVar18 = SUB84(dVar3,0);
        uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar4 = *(double *)((longlong)&(this->ActiveSelectionBounds).Max.field0_0x0 + 0x10);
        if (dVar3 <= dVar4) {
          uVar18 = SUB84(dVar4,0);
          uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
        }
        (this->ActiveSelectionBounds).Max.field0_0x0._s_0.Z = (double)CONCAT44(uVar19,uVar18);
      }
      if (((this->Topology).Object == (FGroupTopology *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        uVar13 = (*pcVar7)();
        return (bool)uVar13;
      }
      pTVar15 = UE::Geometry::FGroupTopology::GetSelectionFrame
                          ((this->Topology).Object,&local_68,
                           (FGroupTopologySelection *)&pUVar6->_padding_,(TFrame3<double> *)0x0);
      this_00 = &this->ActiveSelectionFrameWorld;
      dVar3 = (pTVar15->Origin).field0_0x0._s_0.Y;
      (this->ActiveSelectionFrameLocal).Origin.field0_0x0._s_0.X =
           (pTVar15->Origin).field0_0x0._s_0.X;
      (this->ActiveSelectionFrameLocal).Origin.field0_0x0._s_0.Y = dVar3;
      dVar3 = (pTVar15->Rotation).field0_0x0._s_0.X;
      (this->ActiveSelectionFrameLocal).Origin.field0_0x0._s_0.Z =
           (pTVar15->Origin).field0_0x0._s_0.Z;
      (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.X = dVar3;
      dVar3 = (pTVar15->Rotation).field0_0x0._s_0.Z;
      (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.Y =
           (pTVar15->Rotation).field0_0x0._s_0.Y;
      (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.Z = dVar3;
      (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.W =
           (pTVar15->Rotation).field0_0x0._s_0.W;
      dVar3 = (this->ActiveSelectionFrameLocal).Origin.field0_0x0._s_0.Y;
      dVar4 = (this->ActiveSelectionFrameLocal).Origin.field0_0x0._s_0.Z;
      dVar9 = (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.X;
      (this_00->Origin).field0_0x0._s_0.X =
           (this->ActiveSelectionFrameLocal).Origin.field0_0x0._s_0.X;
      (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.Y = dVar3;
      dVar10 = (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.Y;
      dVar11 = (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.Z;
      (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.Z = dVar4;
      (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.X = dVar9;
      dVar3 = (this->ActiveSelectionFrameLocal).Rotation.field0_0x0._s_0.W;
      (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Y = dVar10;
      (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.Z = dVar11;
      (this->ActiveSelectionFrameWorld).Rotation.field0_0x0._s_0.W = dVar3;
      local_c8._s_0.X =
           (this_00->Origin).field0_0x0._s_0.X * (this->WorldTransform).Scale3D.field0_0x0._s_0.X;
      local_c8._s_0.Y =
           (this->WorldTransform).Scale3D.field0_0x0._s_0.Y *
           (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.Y;
      local_c8._s_0.Z =
           (this->WorldTransform).Scale3D.field0_0x0._s_0.Z *
           (this->ActiveSelectionFrameWorld).Origin.field0_0x0._s_0.Z;
      pTVar16 = UE::Geometry::operator*<double>
                          (&local_b0,&(this->WorldTransform).Rotation,
                           (TVector<double> *)&local_c8._s_0);
      dVar4 = (this->WorldTransform).Translation.field0_0x0._s_0.Y;
      dVar9 = (pTVar16->field0_0x0)._s_0.Y;
      dVar3 = (pTVar16->field0_0x0)._s_0.Z + (this->WorldTransform).Translation.field0_0x0._s_0.Z;
      (this_00->Origin).field0_0x0._s_0.X =
           (pTVar16->field0_0x0)._s_0.X + (this->WorldTransform).Translation.field0_0x0._s_0.X;
      auVar8._8_4_ = SUB84(dVar3,0);
      auVar8._0_8_ = dVar9 + dVar4;
      auVar8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      *(undefined1 (*) [16])((longlong)&(this->ActiveSelectionFrameWorld).Origin.field0_0x0 + 8) =
           auVar8;
      UE::Geometry::TFrame3<double>::Rotate(this_00,&(this->WorldTransform).Rotation);
      return true;
    }
  }
  return false;
}

// CanCurrentlyNestedAccept @ 14cc47bc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UEditMeshPolygonsTool::CanCurrentlyNestedAccept(UEditMeshPolygonsTool *this)

{
  if (this->field_0x3ac != '\0') {
    return false;
  }
  return this->_padding_ != 0;
}

// CanCurrentlyNestedCancel @ 14cc47bf0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UEditMeshPolygonsTool::CanCurrentlyNestedCancel(UEditMeshPolygonsTool *this)

{
  UPolyEditCommonProperties *pUVar1;
  
  if ((this->field_0x3ac == '\0') &&
     ((this->_padding_ != 0 ||
      ((pUVar1 = (this->CommonProps).field0_0x0.DebugPtr, pUVar1 != (UPolyEditCommonProperties *)0x0
       && ((((int)pUVar1[4]._padding_ != *(int *)((longlong)&pUVar1[5]._padding_ + 4) ||
            ((int)pUVar1[5]._padding_ != *(int *)((longlong)&pUVar1[5]._padding_ + 4))) ||
           ((int)pUVar1[4]._padding_ != *(int *)((longlong)&pUVar1[4]._padding_ + 4))))))))) {
    return true;
  }
  return false;
}

// CollapseGroupEdges @ 14cc4a010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UEditMeshPolygonsTool::CollapseGroupEdges
          (UEditMeshPolygonsTool *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1,
          FDynamicMeshChangeTracker *param_2)

{
  undefined1 *puVar1;
  FMutex *this_00;
  FScriptContainerElement *pFVar2;
  atomic<unsigned_char> aVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FDynamicMesh3 *this_01;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  undefined1 *puVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  UEditMeshPolygonsTool *pUVar18;
  FDynamicMeshChangeTracker *pFVar19;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar20;
  bool bVar21;
  bool bVar22;
  short sVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar27;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar28;
  TVector<double> *pTVar29;
  longlong *plVar30;
  FGroupTopologySelection *pFVar31;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar32;
  byte bVar33;
  ulonglong uVar34;
  longlong lVar35;
  ForElementType<FSetElementId> FVar36;
  ulonglong uVar37;
  FScriptContainerElement *pFVar38;
  ForAnyElementType FVar39;
  uint uVar40;
  uint uVar41;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar42;
  undefined1 *puVar43;
  uint *puVar44;
  TBitArray<FDefaultBitArrayAllocator> *pTVar45;
  uint *puVar46;
  TBitArray<FDefaultBitArrayAllocator> *pTVar47;
  undefined1 auStackY_888 [32];
  undefined1 local_847;
  undefined1 local_846;
  undefined1 local_845;
  undefined1 local_844;
  undefined1 local_843 [3];
  undefined2 local_840;
  undefined1 local_83e;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_838;
  undefined8 uStack_830;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  int local_810;
  undefined4 uStack_80c;
  ForAnyElementType local_800;
  undefined8 local_7f8;
  uint local_7f0 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_7e8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_7e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_7d8;
  undefined8 local_7b8;
  uint local_7b0;
  uint local_7ac;
  int local_7a8 [2];
  UEditMeshPolygonsTool *local_7a0;
  FDynamicMeshChangeTracker *local_798;
  TArray<int,TSizedDefaultAllocator<32>_> local_790;
  TBitArray<FDefaultBitArrayAllocator> *local_780;
  TArray<int,TSizedDefaultAllocator<32>_> local_778;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_768;
  double local_748;
  double dStack_740;
  double local_738;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_730;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_710;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_6f0;
  undefined4 local_6d0;
  int local_6cc;
  int local_6c8 [2];
  int local_6c0;
  int local_6bc;
  int local_6b8;
  int local_6b4;
  int local_6b0;
  int local_6ac;
  int local_6a8;
  int local_6a4;
  int local_6a0 [2];
  undefined8 *local_698;
  undefined8 local_690;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_688;
  undefined1 local_680 [12];
  uint uStack_674;
  TBitArray<FDefaultBitArrayAllocator> *local_670;
  undefined8 uStack_668;
  longlong local_660;
  int iStack_658;
  undefined4 uStack_654;
  undefined1 local_650 [12];
  uint uStack_644;
  TBitArray<FDefaultBitArrayAllocator> *local_640;
  undefined8 uStack_638;
  longlong local_630;
  undefined8 uStack_628;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_620;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_618;
  undefined8 uStack_5f8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_5f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5e8;
  undefined8 uStack_5c8;
  longlong *local_5c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_5b8;
  undefined8 uStack_598;
  code *local_590;
  FDynamicMeshChangeTracker **local_588;
  FDynamicMeshChangeTracker *local_580;
  undefined1 local_578;
  code *local_570;
  undefined8 **local_568;
  code *local_560;
  FDynamicMeshChangeTracker **local_558;
  FDynamicMeshChangeTracker *local_550;
  undefined1 local_548;
  bool local_538 [8];
  undefined8 local_530;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  TRangedForIterator local_500;
  TRangedForIterator local_4d0;
  TVector<double> local_4a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_488;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_468;
  undefined4 local_42c;
  undefined4 local_40c;
  undefined4 local_3ec;
  undefined1 local_3e8 [32];
  ForElementType<unsigned_int> local_3c8;
  int local_3c0;
  int local_3bc;
  int local_3b8;
  int local_3b4;
  ForElementType<FSetElementId> local_3a8;
  int local_3a0;
  undefined1 local_398 [32];
  uint *local_378;
  uint local_370;
  undefined4 local_36c;
  undefined4 local_368;
  int local_364;
  ForElementType<FSetElementId> local_358;
  int local_350;
  undefined1 local_348 [32];
  undefined8 local_328;
  uint local_320;
  undefined4 local_31c;
  undefined4 local_318;
  int local_314;
  ForElementType<FSetElementId> local_308;
  int local_300;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_2f8;
  FGroupTopologySelection local_2a8;
  FGroupTopologySelection local_1b8;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_888;
  this_01 = (this->CurrentMesh).Object;
  puVar1 = &(param_1->Elements).field_0x10;
  local_840 = 0x101;
  local_3e8._0_8_ = (FScriptContainerElement *)0x0;
  local_3e8._8_8_ = 0;
  local_3c8 = (ForElementType<unsigned_int>)0x0;
  local_3c0 = 0;
  local_3b4 = 0;
  local_3a8 = (ForElementType<FSetElementId>)0x0;
  local_3a0 = 0;
  local_83e = 1;
  local_3bc = 0x80;
  local_3b8 = -1;
  local_730._padding_._0_4_ = 0;
  local_730._padding_._4_4_ = 1;
  local_730.UnvisitedBitMask = 0xffffffff;
  local_730.CurrentBitIndex = 0;
  local_730.BaseBitIndex = 0;
  local_7a0 = this;
  local_798 = param_2;
  local_730.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if (*(int *)&(param_1->Elements).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_730);
  }
  TStack_7d8._padding_ = CONCAT44(local_730._padding_._4_4_,(undefined4)local_730._padding_);
  TStack_7d8._16_8_ = CONCAT44(local_730.CurrentBitIndex,local_730.UnvisitedBitMask);
  TStack_7d8._24_8_ = CONCAT44(local_730._28_4_,local_730.BaseBitIndex);
  local_7b8._0_4_ = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34
  ;
  TStack_7d8.Array = local_730.Array;
  local_670 = local_730.Array;
  uStack_654 = local_7b8._4_4_;
  local_7e0 = param_1;
  local_680._0_8_ = param_1;
  unique0x1000290b = TStack_7d8._padding_;
  uStack_668 = TStack_7d8._16_8_;
  local_660 = TStack_7d8._24_8_;
  iStack_658 = (int)local_7b8;
  pTVar27 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_488,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                       *(int *)&(param_1->Elements).field_0x28);
  TStack_7d8._padding_ = pTVar27->_padding_;
  TStack_7d8.Array = pTVar27->Array;
  TStack_7d8.UnvisitedBitMask = pTVar27->UnvisitedBitMask;
  TStack_7d8.CurrentBitIndex = pTVar27->CurrentBitIndex;
  TStack_7d8._24_8_ = *(undefined8 *)&pTVar27->BaseBitIndex;
  local_7b8._0_4_ = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34
  ;
  local_500.InitialNum = (int)local_7b8;
  local_500._44_4_ = local_7b8._4_4_;
  local_7e0 = param_1;
  local_500._padding_ = (longlong)param_1;
  local_500._padding_ = TStack_7d8._padding_;
  local_500._padding_ = (longlong)TStack_7d8.Array;
  local_500._padding_ = TStack_7d8._16_8_;
  local_500._padding_ = TStack_7d8._24_8_;
  bVar21 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_680,&local_500);
  if (bVar21) {
    do {
      iVar25 = *(int *)(*(longlong *)
                         (TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_680._0_8_ + (longlong)uStack_668._4_4_ * 0xc);
      if (((this->Topology).Object == (FGroupTopology *)0x0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pTVar28 = UE::Geometry::FGroupTopology::GetGroupEdgeEdges((this->Topology).Object,iVar25);
      iVar25 = pTVar28->ArrayNum;
      pFVar38 = (pTVar28->AllocatorInstance).Data;
      if ((iVar25 < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar21)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar40 = iVar25 + (local_3e8._8_4_ - local_3b4);
      if ((uint)(local_3e8._8_4_ - local_3b4) < uVar40) {
        if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar40);
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_3e8,uVar40);
        if (uVar40 < 4) {
          iVar24 = 1;
        }
        else {
          uVar37 = (ulonglong)((uVar40 >> 1) + 7) * 2 + 1;
          lVar35 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar35 == 0; lVar35 = lVar35 + -1) {
            }
          }
          local_6d0 = (undefined4)lVar35;
          iVar24 = 1 << ((byte)lVar35 & 0x1f);
        }
        if ((local_3a0 == 0) || (local_3a0 < iVar24)) {
          local_3a0 = iVar24;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_3e8);
        }
      }
      pFVar2 = pFVar38 + (longlong)iVar25 * 4;
      for (; pFVar38 != pFVar2; pFVar38 = pFVar38 + 4) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_3e8,&local_6cc,
                   (bool *)pFVar38);
      }
      uStack_674 = (uint)((ulonglong)unique0x1000160a >> 0x20);
      uStack_668._4_4_ = (int)((ulonglong)uStack_668 >> 0x20);
      uStack_668 = CONCAT44(uStack_668._4_4_,(uint)uStack_668 & ~uStack_674);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_680 + 8));
      bVar21 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_680,&local_500);
    } while (bVar21);
  }
  local_710.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_3e8 + 0x10);
  local_800.Data = (FScriptContainerElement *)0x0;
  local_7f8 = 0;
  local_2f8.Elements._0_8_ = 0;
  local_2f8.Elements._8_8_ = 0;
  local_2f8.Elements._32_8_ = 0;
  local_2f8.Elements._40_4_ = 0;
  local_2f8.Elements._44_4_ = 0x80;
  local_2f8.Elements._48_4_ = 0xffffffff;
  local_2f8.Elements._52_4_ = 0;
  local_2f8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_2f8.HashSize = 0;
  local_778.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_778.ArrayNum = 0;
  local_778.ArrayMax = 0;
  local_710._padding_._0_4_ = 0;
  local_710._padding_._4_4_ = 1;
  local_710.UnvisitedBitMask = 0xffffffff;
  local_710.CurrentBitIndex = 0;
  local_710.BaseBitIndex = 0;
  if (local_3c0 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_710);
  }
  uStack_830 = CONCAT44(local_710._padding_._4_4_,(undefined4)local_710._padding_);
  local_838 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_3e8;
  uStack_820 = CONCAT44(local_710.CurrentBitIndex,local_710.UnvisitedBitMask);
  uStack_818 = CONCAT44(local_710._28_4_,local_710.BaseBitIndex);
  local_810 = local_3e8._8_4_ - local_3b4;
  pTStack_828 = local_710.Array;
  uStack_628._4_4_ = uStack_80c;
  uStack_628._0_4_ = local_810;
  local_640 = local_710.Array;
  local_650._0_8_ = local_838;
  unique0x1000293b = uStack_830;
  uStack_638 = uStack_820;
  local_630 = uStack_818;
  pTVar27 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_468,(TBitArray<FDefaultBitArrayAllocator> *)(local_3e8 + 0x10),
                       local_3c0);
  local_838 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_3e8;
  uStack_830 = pTVar27->_padding_;
  pTStack_828 = pTVar27->Array;
  uStack_820._0_4_ = pTVar27->UnvisitedBitMask;
  uStack_820._4_4_ = pTVar27->CurrentBitIndex;
  uStack_818 = *(longlong *)&pTVar27->BaseBitIndex;
  local_810 = local_3e8._8_4_ - local_3b4;
  local_4d0._44_4_ = uStack_80c;
  local_4d0.InitialNum = local_810;
  local_4d0._padding_ = (longlong)local_838;
  local_4d0._padding_ = uStack_830;
  local_4d0._padding_ = (longlong)pTStack_828;
  local_4d0._padding_ = uStack_820;
  local_4d0._padding_ = uStack_818;
  bVar21 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_650,&local_4d0);
  if (bVar21) {
    do {
      local_7f0[0] = *(uint *)(*(longlong *)local_650._0_8_ + (longlong)uStack_638._4_4_ * 0xc);
      if (local_2f8.Elements._8_4_ != local_2f8.Elements._52_4_) {
        FVar36 = (ForElementType<FSetElementId>)&local_2f8.Hash;
        if (local_2f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar36 = local_2f8.Hash.SecondaryData;
        }
        for (iVar25 = *(int *)((longlong)FVar36 +
                              (ulonglong)(local_2f8.HashSize - 1U & local_7f0[0]) * 4); iVar25 != -1
            ; iVar25 = *(int *)(local_2f8.Elements._0_8_ + 4 + (longlong)iVar25 * 0xc)) {
          if (*(uint *)(local_2f8.Elements._0_8_ + (longlong)iVar25 * 0xc) == local_7f0[0])
          goto LAB_14cc4a62b;
        }
      }
      iVar25 = (uint)local_7f8;
      if ((uint)local_7f8 == local_7f8._4_4_) {
        iVar25 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&local_800,(int *)((longlong)&local_7f8 + 4));
      }
      local_7f8 = CONCAT44(local_7f8._4_4_,iVar25 + 1);
      pTVar42 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
                (local_800.Data + (longlong)iVar25 * 0x50);
      *(undefined8 *)&(pTVar42->Elements).field_0x10 = 0;
      *(undefined8 *)&(pTVar42->Elements).field_0x18 = 0;
      (pTVar42->Hash).InlineData[0] = '\0';
      (pTVar42->Hash).InlineData[1] = '\0';
      (pTVar42->Hash).InlineData[2] = '\0';
      (pTVar42->Hash).InlineData[3] = '\0';
      (pTVar42->Hash)._padding_ = 0;
      *(undefined8 *)&pTVar42->HashSize = 0;
      *(undefined8 *)&pTVar42->Elements = 0;
      *(undefined8 *)&(pTVar42->Elements).field_0x8 = 0;
      *(undefined8 *)&(pTVar42->Elements).field_0x20 = 0;
      *(undefined4 *)&(pTVar42->Elements).field_0x28 = 0;
      *(undefined4 *)&(pTVar42->Elements).field_0x2c = 0x80;
      *(undefined4 *)&(pTVar42->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pTVar42->Elements).field_0x34 = 0;
      (pTVar42->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (pTVar42,local_6c8,(bool *)local_7f0);
      uVar40 = local_7f0[0];
      local_698 = (undefined8 *)local_3e8;
      local_568 = &local_698;
      local_570 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UEditMeshPolygonsTool::CollapseGroupEdges'::__l10::<lambda_1>,bool,int,int>
                  ::Call;
      local_790.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_790.ArrayNum = 1;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,1,0,&local_790.AllocatorInstance,1,&local_790.ArrayMax);
      *(uint *)local_790.AllocatorInstance.Data = uVar40;
      UE::Geometry::FMeshConnectedComponents::GrowToConnectedEdges
                (this_01,&local_790,pTVar42,&local_778,
                 (TFunctionRef<bool___cdecl(int,int)> *)&local_570);
      if (local_790.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_790.AllocatorInstance.Data);
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                (&local_2f8,pTVar42);
LAB_14cc4a62b:
      uStack_638 = CONCAT44(uStack_638._4_4_,(uint)uStack_638 & ~uStack_644);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_650 + 8));
      bVar21 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_650,&local_4d0);
    } while (bVar21);
  }
  dVar17 = __real_3fe0000000000000;
  uVar16 = _UNK_15060db28;
  uVar15 = ___xmm_ffffffffffffffffffffffffffffffff;
  dVar14 = __real_3ff0000000000000;
  uVar34 = (ulonglong)(int)(uint)local_7f8;
  bVar21 = true;
  local_688 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
              (local_800.Data + uVar34 * 0x50);
  local_348._0_8_ = 0;
  local_348._8_8_ = 0;
  local_328 = 0;
  local_320 = 0;
  local_314 = 0;
  local_308 = (ForElementType<FSetElementId>)0x0;
  local_300 = 0;
  pTVar47 = (TBitArray<FDefaultBitArrayAllocator> *)(local_800.Data + 0x10);
  local_31c = 0x80;
  local_318 = 0xffffffff;
  local_7ac = (uint)local_7f8;
  uVar37 = uVar34;
  FVar39.Data = local_800.Data;
LAB_14cc4a6ea:
  pTVar42 = local_688;
  local_7e8 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar39.Data;
  local_780 = pTVar47;
  if ((int)uVar34 != (int)uVar37) {
    local_847 = 0;
    `TCheckedPointerIterator<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int,0>::
    operator!='::__l2::<lambda_1>::operator()(&local_847);
  }
  pUVar18 = local_7a0;
  if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar39.Data == pTVar42) {
    if (!bVar21) {
      plVar30 = (longlong *)(**(code **)(local_7a0->_padding_ + 0x2d8))(local_7a0);
      (**(code **)(*plVar30 + 0x360))
                (plVar30,&EditMeshPolygonsToolLocals::PartialCollapseFailureMessage,3);
    }
    pFVar31 = UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_1b8);
    TVar32 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(local_798);
    EmitCurrentMeshChangeAndUpdate
              (pUVar18,&EditMeshPolygonsToolLocals::CollapseEdgeTransactionLabel,TVar32,pFVar31);
    UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&local_1b8);
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_2a8);
    local_6f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_348 + 0x10);
    local_6f0._padding_._0_4_ = 0;
    local_6f0._padding_._4_4_ = 1;
    local_6f0.UnvisitedBitMask = 0xffffffff;
    local_6f0.CurrentBitIndex = 0;
    local_6f0.BaseBitIndex = 0;
    if (local_320 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_6f0);
    }
    uVar40 = local_320;
    uStack_830 = CONCAT44(local_6f0._padding_._4_4_,(undefined4)local_6f0._padding_);
    local_838 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_348;
    uStack_820._4_4_ = local_6f0.CurrentBitIndex;
    uStack_820._0_4_ = local_6f0.UnvisitedBitMask;
    uStack_818._4_4_ = local_6f0._28_4_;
    uStack_818._0_4_ = local_6f0.BaseBitIndex;
    local_768.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_348 + 0x10);
    bVar33 = (byte)local_320 & 0x1f;
    local_810 = local_348._8_4_ - local_314;
    local_768._padding_._0_4_ = (int)local_320 >> 5;
    pTStack_828 = local_6f0.Array;
    local_768.BaseBitIndex = local_320 & 0xffffffe0;
    local_768._padding_._4_4_ = 1 << bVar33;
    local_768.UnvisitedBitMask = -1 << bVar33;
    local_768.CurrentBitIndex = local_320;
    local_7b8 = CONCAT44(uStack_80c,local_810);
    TStack_7d8.Array = local_6f0.Array;
    local_7e0 = local_838;
    TStack_7d8._padding_ = uStack_830;
    TStack_7d8._16_8_ = uStack_820;
    TStack_7d8._24_8_ = uStack_818;
    if (((int)local_320 < 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar21)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (uVar40 != local_320) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_768);
    }
    iVar25 = local_768.CurrentBitIndex;
    pTVar47 = local_768.Array;
    uStack_830 = CONCAT44(local_768._padding_._4_4_,(int)local_768._padding_);
    uStack_820 = CONCAT44(local_768.CurrentBitIndex,local_768.UnvisitedBitMask);
    uStack_818 = CONCAT44(local_768._28_4_,local_768.BaseBitIndex);
    pTStack_828 = local_768.Array;
    while( true ) {
      pTVar42 = local_7e0;
      if ((int)*(longlong *)((longlong)local_7e0 + 8) - *(int *)((longlong)local_7e0 + 0x34) !=
          (int)local_7b8) {
        local_843[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_843);
      }
      if (((TStack_7d8.CurrentBitIndex == iVar25) && (TStack_7d8.Array == pTVar47)) &&
         (pTVar42 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_348)) break;
      uVar40 = *(uint *)(*(longlong *)pTVar42 + (longlong)TStack_7d8.CurrentBitIndex * 0xc);
      if (((-1 < (int)uVar40) &&
          ((int)uVar40 <
           (int)((this_01->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                (this_01->VertexRefCounts).RefCounts.CurBlockUsed))) &&
         ((ushort)(*(short *)(*(longlong *)
                               ((this_01->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar40 >> 9) * 8) + (ulonglong)(uVar40 & 0x1ff) * 2) - 1U
                  ) < 0xfffe)) {
        if (((pUVar18->Topology).Object == (FGroupTopology *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        local_7a8[0] = UE::Geometry::FGroupTopology::GetCornerIDFromVertexID
                                 ((pUVar18->Topology).Object,uVar40);
        if (local_7a8[0] != -1) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_2a8.SelectedCornerIDs,local_6a0,(bool *)local_7a8);
        }
      }
      TStack_7d8.UnvisitedBitMask = TStack_7d8.UnvisitedBitMask & ~TStack_7d8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_7d8);
    }
    if (((local_2a8.SelectedCornerIDs.Elements._8_4_ != local_2a8.SelectedCornerIDs.Elements._52_4_)
        || (local_2a8.SelectedEdgeIDs.Elements._8_4_ != local_2a8.SelectedEdgeIDs.Elements._52_4_))
       || (local_2a8.SelectedGroupIDs.Elements._8_4_ != local_2a8.SelectedGroupIDs.Elements._52_4_))
    {
      UMeshTopologySelectionMechanic::SetSelection
                ((UMeshTopologySelectionMechanic *)(pUVar18->SelectionMechanic).field0_0x0.DebugPtr,
                 &local_2a8,true);
    }
    local_2a8.SelectedEdgeIDs.HashSize = 0;
    if (local_2a8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2a8.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2a8.SelectedEdgeIDs.Elements);
    local_2a8.SelectedCornerIDs.HashSize = 0;
    if (local_2a8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2a8.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2a8.SelectedCornerIDs.Elements);
    local_2a8.SelectedGroupIDs.HashSize = 0;
    if (local_2a8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2a8.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_2a8);
    local_300 = 0;
    if (local_308 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_308);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_348);
    if (local_778.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_778.AllocatorInstance.Data);
    }
    local_2f8.HashSize = 0;
    if (local_2f8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2f8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_2f8.Elements);
    DestructItems<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,int>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_800.Data,
               (uint)local_7f8);
    if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_800.Data !=
        (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
      FMemory::Free(local_800.Data);
    }
    local_3a0 = 0;
    if (local_3a8 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_3a8);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_3e8);
    return;
  }
  iVar25 = pTVar47->NumBits;
  iVar24 = 0;
  uStack_818._0_4_ = 0;
  local_748 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_740 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_738 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uStack_820._4_4_ = 0;
  uVar40 = 1;
  if (iVar25 != 0) {
    pTVar7 = *(TBitArray<FDefaultBitArrayAllocator> **)
              &(pTVar47->AllocatorInstance).SecondaryData.field_0x0;
    pTVar45 = pTVar47;
    if (pTVar7 != (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar45 = pTVar7;
    }
    uVar40 = *(uint *)(pTVar45->AllocatorInstance).InlineData;
    while (uVar40 == 0) {
      lVar35 = (longlong)iVar24;
      uStack_818._0_4_ = (int)uStack_818 + 0x20;
      iVar24 = iVar24 + 1;
      uStack_820._4_4_ = iVar25;
      uVar40 = 1;
      if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_14cc4a7a0;
      uVar40 = *(uint *)((pTVar45->AllocatorInstance).InlineData + lVar35 * 4 + 4);
    }
    uVar40 = -uVar40 & uVar40;
    uVar37 = (ulonglong)uVar40 * 2 + 1;
    lVar35 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar35 == 0; lVar35 = lVar35 + -1) {
      }
    }
    local_6c0 = (int)lVar35;
    uStack_820._4_4_ = local_6c0 + -1 + (int)uStack_818;
    if (iVar25 < uStack_820._4_4_) {
      uStack_820._4_4_ = iVar25;
    }
  }
LAB_14cc4a7a0:
  puVar1 = &(((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar39.Data)->Elements).
            field_0x10;
  local_810 = *(int *)&(((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar39.Data)->
                       Elements).field_0x8 -
              *(int *)&(((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar39.Data)->
                       Elements).field_0x34;
  uVar41 = *(uint *)&(((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar39.Data)->
                     Elements).field_0x28;
  uStack_830 = CONCAT44(uVar40,iVar24);
  uStack_820._0_4_ = 0xffffffff;
  uVar40 = uVar41 & 0xffffffe0;
  uStack_818._4_4_ = local_42c;
  TStack_618._padding_ = uStack_830;
  iVar24 = (int)uVar41 >> 5;
  uStack_5f8 = CONCAT44(uStack_80c,local_810);
  TStack_618.UnvisitedBitMask = 0xffffffff;
  TStack_618.CurrentBitIndex = uStack_820._4_4_;
  TStack_618.BaseBitIndex = (int)uStack_818;
  TStack_618._28_4_ = local_42c;
  local_838 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar39.Data;
  pTStack_828 = pTVar47;
  local_620 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar39.Data;
  TStack_618.Array = pTVar47;
  if ((((int)uVar41 < 0) || (iVar25 < (int)uVar41)) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar42 = local_7e8;
  uVar26 = *(uint *)&(((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar39.Data)->
                     Elements).field_0x28;
  dVar11 = local_748;
  dVar12 = dStack_740;
  dVar13 = local_738;
  if (uVar41 != uVar26) {
    puVar8 = *(undefined1 **)
              &(((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar39.Data)->Elements).
               field_0x20;
    puVar43 = puVar1;
    if (puVar8 != (undefined1 *)0x0) {
      puVar43 = puVar8;
    }
    uVar41 = -1 << ((byte)uVar41 & 0x1f) & *(uint *)(puVar43 + (longlong)iVar24 * 4);
    while (uVar41 == 0) {
      lVar35 = (longlong)iVar24;
      uVar40 = uVar40 + 0x20;
      iVar24 = iVar24 + 1;
      uVar41 = uVar26;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
      goto LAB_14cc4a8e0;
      uVar41 = *(uint *)(puVar43 + lVar35 * 4 + 4);
    }
    uVar37 = (ulonglong)(-uVar41 & uVar41) * 2 + 1;
    lVar35 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar35 == 0; lVar35 = lVar35 + -1) {
      }
    }
    local_6bc = (int)lVar35;
    uVar41 = (uVar40 - 1) + local_6bc;
    if ((int)uVar26 < (int)uVar41) {
      uVar41 = uVar26;
    }
  }
LAB_14cc4a8e0:
  while( true ) {
    pTVar20 = local_620;
    if (*(int *)&(local_620->Elements).field_0x8 - *(int *)&(local_620->Elements).field_0x34 !=
        (int)uStack_5f8) {
      local_846 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_846);
    }
    if (((TStack_618.CurrentBitIndex == uVar41) &&
        (TStack_618.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar20 == pTVar42)) break;
    pTVar29 = UE::Geometry::FDynamicMesh3::GetEdgePoint
                        (this_01,&local_4a0,
                         *(int *)(*(longlong *)&pTVar20->Elements +
                                 (longlong)TStack_618.CurrentBitIndex * 0xc),dVar17);
    dVar4 = (pTVar29->field0_0x0)._s_0.X;
    dVar5 = (pTVar29->field0_0x0)._s_0.Y;
    dVar6 = (pTVar29->field0_0x0)._s_0.Z;
    TStack_618.UnvisitedBitMask = TStack_618.UnvisitedBitMask & ~TStack_618._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_618);
    dVar11 = dVar11 + dVar4;
    dVar12 = dVar12 + dVar5;
    dVar13 = dVar13 + dVar6;
  }
  uStack_818._0_4_ = 0;
  local_36c = 0x80;
  local_398._0_8_ = 0;
  local_398._8_8_ = 0;
  iVar24 = 0;
  local_378 = (uint *)0x0;
  uVar40 = 1;
  local_810 = *(int *)&(pTVar42->Elements).field_0x8 - *(int *)&(pTVar42->Elements).field_0x34;
  local_370 = 0;
  local_368 = 0xffffffff;
  local_364 = 0;
  local_358 = (ForElementType<FSetElementId>)0x0;
  local_350 = 0;
  iVar25 = *(int *)&(((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar39.Data)->
                    Elements).field_0x28;
  dVar4 = dVar14 / (double)local_810;
  local_738 = dVar13 * dVar4;
  uStack_820._4_4_ = (int)uStack_818;
  if (iVar25 != 0) {
    puVar44 = *(uint **)&(((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar39.Data)->
                         Elements).field_0x20;
    puVar46 = (uint *)puVar1;
    if (puVar44 != (uint *)0x0) {
      puVar46 = puVar44;
    }
    uVar41 = *puVar46;
    while (uVar41 == 0) {
      lVar35 = (longlong)iVar24;
      uStack_818._0_4_ = (int)uStack_818 + 0x20;
      iVar24 = iVar24 + 1;
      uStack_820._4_4_ = iVar25;
      if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_14cc4aa60;
      uVar41 = puVar46[lVar35 + 1];
    }
    uVar40 = -uVar41 & uVar41;
    uVar37 = (ulonglong)uVar40 * 2 + 1;
    lVar35 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar35 == 0; lVar35 = lVar35 + -1) {
      }
    }
    local_6b8 = (int)lVar35;
    uStack_820._4_4_ = local_6b8 + -1 + (int)uStack_818;
    if (iVar25 < uStack_820._4_4_) {
      uStack_820._4_4_ = iVar25;
    }
  }
LAB_14cc4aa60:
  local_838 = pTVar42;
  uVar41 = *(uint *)&(pTVar42->Elements).field_0x28;
  uStack_830 = CONCAT44(uVar40,iVar24);
  uStack_820._0_4_ = 0xffffffff;
  uVar40 = uVar41 & 0xffffffe0;
  local_5f0 = pTVar42;
  TStack_5e8._padding_ = uStack_830;
  uStack_818._4_4_ = local_40c;
  uStack_5c8 = CONCAT44(uStack_80c,local_810);
  iVar24 = (int)uVar41 >> 5;
  TStack_5e8.BaseBitIndex = (int)uStack_818;
  TStack_5e8._28_4_ = local_40c;
  TStack_5e8.UnvisitedBitMask = 0xffffffff;
  TStack_5e8.CurrentBitIndex = uStack_820._4_4_;
  pTStack_828 = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  TStack_5e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar41 < 0) || (iVar25 < (int)uVar41)) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar26 = *(uint *)&(((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar39.Data)->
                     Elements).field_0x28;
  if (uVar41 != uVar26) {
    puVar8 = *(undefined1 **)
              &(((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)FVar39.Data)->Elements).
               field_0x20;
    puVar43 = puVar1;
    if (puVar8 != (undefined1 *)0x0) {
      puVar43 = puVar8;
    }
    uVar41 = -1 << ((byte)uVar41 & 0x1f) & *(uint *)(puVar43 + (longlong)iVar24 * 4);
    while (uVar41 == 0) {
      lVar35 = (longlong)iVar24;
      uVar40 = uVar40 + 0x20;
      iVar24 = iVar24 + 1;
      uVar41 = uVar26;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
      goto LAB_14cc4ab70;
      uVar41 = *(uint *)(puVar43 + lVar35 * 4 + 4);
    }
    uVar37 = (ulonglong)(-uVar41 & uVar41) * 2 + 1;
    lVar35 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar35 == 0; lVar35 = lVar35 + -1) {
      }
    }
    local_6b4 = (int)lVar35;
    uVar41 = (uVar40 - 1) + local_6b4;
    if ((int)uVar26 < (int)uVar41) {
      uVar41 = uVar26;
    }
  }
LAB_14cc4ab70:
  do {
    pTVar42 = local_5f0;
    if (*(int *)&(local_5f0->Elements).field_0x8 - *(int *)&(local_5f0->Elements).field_0x34 !=
        (int)uStack_5c8) {
      local_845 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_845);
    }
    uVar40 = local_370;
    pFVar19 = local_798;
    if (((TStack_5e8.CurrentBitIndex == uVar41) &&
        (TStack_5e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar42 == local_7e8)) break;
    uVar40 = *(uint *)(*(longlong *)&pTVar42->Elements + (longlong)TStack_5e8.CurrentBitIndex * 0xc)
    ;
    if ((-1 < (int)uVar40) &&
       ((int)uVar40 <
        (int)((this_01->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (this_01->EdgeRefCounts).RefCounts.CurBlockUsed))) {
      if ((ushort)(*(short *)(*(longlong *)
                               ((this_01->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar40 >> 9) * 8) + (ulonglong)(uVar40 & 0x1ff) * 2) - 1U
                  ) < 0xfffe) {
        local_558 = &local_580;
        local_580 = local_798;
        local_578 = 1;
        local_560 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FDynamicMeshChangeTracker::SaveVertexOneRingTriangles'::__l2::<lambda_1>,void,int>
                    ::Call;
        uVar37 = *(ulonglong *)
                  (*(longlong *)
                    ((this_01->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar40 >> 9) * 8)
                  + (ulonglong)(uVar40 & 0x1ff) * 0x10);
        local_690 = uVar37;
        UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
                  (local_798->Mesh,(int)uVar37,(TFunctionRef<void___cdecl(int)> *)&local_560);
        local_588 = &local_550;
        local_590 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FDynamicMeshChangeTracker::SaveVertexOneRingTriangles'::__l2::<lambda_1>,void,int>
                    ::Call;
        local_550 = pFVar19;
        local_548 = 1;
        UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
                  (pFVar19->Mesh,local_690._4_4_,(TFunctionRef<void___cdecl(int)> *)&local_590);
        local_530 = 0xffffffffffffffff;
        local_520 = uVar15;
        uStack_518 = uVar16;
        local_510 = 0xffffffffffffffff;
        uVar26 = (**(code **)(this_01->_padding_ + 0x78))(this_01,uVar37 & 0xffffffff);
        pUVar18 = local_7a0;
        if ((uVar26 < 0x1e) && ((0x25000000U >> (uVar26 & 0x1f) & 1) != 0)) {
          if (((local_7a0->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x44d,L""), bVar22)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          bVar22 = EditMeshPolygonsToolLocals::RemoveEdgeTrisIfNotLast
                             ((pUVar18->CurrentMesh).Object,uVar40);
          if ((bVar22) && (bVar21)) {
            bVar21 = true;
          }
          else {
LAB_14cc4ad68:
            bVar21 = false;
          }
        }
        else {
          if (uVar26 != 0) goto LAB_14cc4ad68;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_398,&local_6b0,
                     local_538);
        }
      }
    }
    TStack_5e8.UnvisitedBitMask = TStack_5e8.UnvisitedBitMask & ~TStack_5e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5e8);
  } while( true );
  iVar25 = 0;
  iVar24 = 0;
  TStack_5b8.CurrentBitIndex = 0;
  uVar41 = 1;
  if (local_370 != 0) {
    puVar44 = (uint *)(local_398 + 0x10);
    if (local_378 != (uint *)0x0) {
      puVar44 = local_378;
    }
    uVar41 = *puVar44;
    while (uVar41 == 0) {
      lVar35 = (longlong)iVar25;
      iVar24 = iVar24 + 0x20;
      iVar25 = iVar25 + 1;
      TStack_5b8.CurrentBitIndex = local_370;
      uVar41 = 1;
      if ((int)((local_370 - 1) + ((int)(local_370 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_14cc4ae23;
      uVar41 = (puVar44 + 1)[lVar35];
    }
    uVar41 = -uVar41 & uVar41;
    uVar37 = (ulonglong)uVar41 * 2 + 1;
    lVar35 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar35 == 0; lVar35 = lVar35 + -1) {
      }
    }
    local_6ac = (int)lVar35;
    TStack_5b8.CurrentBitIndex = iVar24 + -1 + local_6ac;
    if ((int)local_370 < TStack_5b8.CurrentBitIndex) {
      TStack_5b8.CurrentBitIndex = local_370;
    }
  }
LAB_14cc4ae23:
  local_838 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_398;
  pTStack_828 = (TBitArray<FDefaultBitArrayAllocator> *)(local_398 + 0x10);
  local_810 = local_398._8_4_ - local_364;
  uVar26 = local_370 & 0xffffffe0;
  uStack_830 = CONCAT44(uVar41,iVar25);
  uStack_820 = CONCAT44(TStack_5b8.CurrentBitIndex,0xffffffff);
  uStack_818 = CONCAT44(local_3ec,iVar24);
  TStack_5b8._padding_ = uStack_830;
  iVar25 = (int)local_370 >> 5;
  uStack_598 = CONCAT44(uStack_80c,local_810);
  bVar33 = (byte)local_370;
  TStack_5b8.UnvisitedBitMask = 0xffffffff;
  TStack_5b8._24_8_ = uStack_818;
  local_5c0 = (longlong *)local_838;
  TStack_5b8.Array = pTStack_828;
  if (((int)local_370 < 0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar22)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  dVar13 = local_738;
  if (uVar40 != local_370) {
    puVar44 = (uint *)(local_398 + 0x10);
    if (local_378 != (uint *)0x0) {
      puVar44 = local_378;
    }
    uVar40 = -1 << (bVar33 & 0x1f) & puVar44[iVar25];
    while (uVar40 == 0) {
      lVar35 = (longlong)iVar25;
      uVar26 = uVar26 + 0x20;
      iVar25 = iVar25 + 1;
      uVar40 = local_370;
      if ((int)((local_370 - 1) + ((int)(local_370 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar25)
      goto LAB_14cc4af53;
      uVar40 = (puVar44 + 1)[lVar35];
    }
    uVar37 = (ulonglong)(-uVar40 & uVar40) * 2 + 1;
    lVar35 = 0x3f;
    if (uVar37 != 0) {
      for (; uVar37 >> lVar35 == 0; lVar35 = lVar35 + -1) {
      }
    }
    local_6a8 = (int)lVar35;
    uVar40 = (uVar26 - 1) + local_6a8;
    if ((int)local_370 < (int)uVar40) {
      uVar40 = local_370;
    }
  }
LAB_14cc4af53:
  while( true ) {
    plVar30 = local_5c0;
    if ((int)local_5c0[1] - *(int *)((longlong)local_5c0 + 0x34) != (int)uStack_598) {
      local_844 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_844);
    }
    if (((TStack_5b8.CurrentBitIndex == uVar40) &&
        (TStack_5b8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_398 + 0x10))) &&
       (plVar30 == (longlong *)local_398)) break;
    uVar41 = *(uint *)(*plVar30 + (longlong)TStack_5b8.CurrentBitIndex * 0xc);
    local_7b0 = uVar41;
    if (((-1 < (int)uVar41) &&
        ((int)uVar41 <
         (int)((this_01->VertexRefCounts).RefCounts.CurBlock * 0x200 +
              (this_01->VertexRefCounts).RefCounts.CurBlockUsed))) &&
       ((ushort)(*(short *)(*(longlong *)
                             ((this_01->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                             (ulonglong)(uVar41 >> 9) * 8) + (ulonglong)(uVar41 & 0x1ff) * 2) - 1U)
        < 0xfffe)) {
      sVar23 = _dclass();
      if (((sVar23 < 1) && (sVar23 = _dclass(), sVar23 < 1)) && (sVar23 = _dclass(), sVar23 < 1)) {
        lVar35 = *(longlong *)
                  ((this_01->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar41 >> 9) * 8)
        ;
        auVar10._8_4_ = SUB84(dVar12 * dVar4,0);
        auVar10._0_8_ = dVar11 * dVar4;
        auVar10._12_4_ = (int)((ulonglong)(dVar12 * dVar4) >> 0x20);
        *(undefined1 (*) [16])(lVar35 + (ulonglong)(uVar41 & 0x1ff) * 0x18) = auVar10;
        *(double *)(lVar35 + 0x10 + (ulonglong)(uVar41 & 0x1ff) * 0x18) = dVar13;
        if ((this_01->ChangeStampShape).bIsEnabled != false) {
          this_00 = &(this_01->ChangeStampShape).Mutex;
          LOCK();
          bVar22 = this_00->State == (atomic<unsigned_char>)0x0;
          if (bVar22) {
            this_00->State = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (!bVar22) {
            UE::FMutex::LockSlow(this_00);
          }
          puVar44 = &(this_01->ChangeStampShape).Value;
          *puVar44 = *puVar44 + 1;
          LOCK();
          aVar3 = this_00->State;
          this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
          UNLOCK();
          if (((byte)aVar3 & 2) != 0) {
            UE::FMutex::WakeWaitingThread(this_00);
          }
        }
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_348,&local_6a4,
                 (bool *)&local_7b0);
    }
    TStack_5b8.UnvisitedBitMask = TStack_5b8.UnvisitedBitMask & ~TStack_5b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_5b8);
  }
  local_350 = 0;
  if (local_358 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_358);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_398);
  FVar39.Data = (FScriptContainerElement *)(local_7e8 + 1);
  uVar34 = local_7f8 & 0xffffffff;
  pTVar47 = (TBitArray<FDefaultBitArrayAllocator> *)&local_780[2].AllocatorInstance.SecondaryData;
  uVar37 = (ulonglong)local_7ac;
  goto LAB_14cc4a6ea;
}

// ComputeUpdate_Gizmo @ 14cc4be60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ComputeUpdate_Gizmo(UEditMeshPolygonsTool *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FDynamicMesh3 *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  double *pdVar12;
  longlong *plVar13;
  double *pdVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_198 [32];
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  TQuaternion<double>_u_0 TStack_148;
  TQuaternion<double> local_128;
  undefined1 local_108 [40];
  double *local_e0;
  code *local_d8 [2];
  double local_c8 [3];
  double *local_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_198;
  bVar11 = UMeshTopologySelectionMechanic::HasSelection
                     ((UMeshTopologySelectionMechanic *)
                      (this->SelectionMechanic).field0_0x0.DebugPtr);
  if (!bVar11) {
    return;
  }
  if (this->bGizmoUpdatePending == false) {
    return;
  }
  local_160 = (this->LastUpdateGizmoFrame).Origin.field0_0x0._s_0.X;
  dStack_158 = (this->LastUpdateGizmoFrame).Origin.field0_0x0._s_0.Y;
  this->bGizmoUpdatePending = false;
  local_150 = (this->LastUpdateGizmoFrame).Origin.field0_0x0._s_0.Z;
  TStack_148._s_0.X = (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.X;
  TStack_148._s_0.Y = (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.Y;
  TStack_148._s_0.Z = (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.Z;
  pFVar5 = (this->CurrentMesh).Object;
  local_178 = (this->LastUpdateGizmoScale).field0_0x0._s_0.X;
  dStack_170 = (this->LastUpdateGizmoScale).field0_0x0._s_0.Y;
  dVar7 = local_160 - (this->InitialGizmoFrame).Origin.field0_0x0._s_0.X;
  local_168 = (this->LastUpdateGizmoScale).field0_0x0._s_0.Z;
  dVar18 = local_150 - (this->InitialGizmoFrame).Origin.field0_0x0._s_0.Z;
  dVar17 = local_178 - (this->InitialGizmoScale).field0_0x0._s_0.X;
  TStack_148._s_0.W = (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.W;
  dVar8 = dStack_158 - (this->InitialGizmoFrame).Origin.field0_0x0._s_0.Y;
  dVar1 = (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.X;
  dVar2 = (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.Y;
  dVar3 = (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.Z;
  dVar4 = (this->InitialGizmoFrame).Rotation.field0_0x0._s_0.W;
  dVar9 = dStack_170 - (this->InitialGizmoScale).field0_0x0._s_0.Y;
  dVar10 = local_168 - (this->InitialGizmoScale).field0_0x0._s_0.Z;
  if (((__real_3f1a36e2eb1c432d < dVar8 * dVar8 + dVar7 * dVar7 + dVar18 * dVar18) ||
      (__real_3f1a36e2eb1c432d <
       (TStack_148._s_0.X - dVar1) * (TStack_148._s_0.X - dVar1) +
       (TStack_148._s_0.Y - dVar2) * (TStack_148._s_0.Y - dVar2) +
       (TStack_148._s_0.Z - dVar3) * (TStack_148._s_0.Z - dVar3) +
       (TStack_148._s_0.W - dVar4) * (TStack_148._s_0.W - dVar4))) ||
     (__real_3f1a36e2eb1c432d < dVar17 * dVar17 + dVar9 * dVar9 + dVar10 * dVar10)) {
    if (this->bLastUpdateUsedWorldFrame == false) {
      local_d8[0] = (code *)0x0;
      pcVar6 = *(code **)((this->LinearDeformer)._padding_ + 0x28);
      local_b0 = FMemory::Malloc(0x20,8);
      *local_b0 = (double)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UEditMeshPolygonsTool::ComputeUpdate_Gizmo'::`13'::<lambda_2>,0,1>
                           ::_vftable_;
      local_b0[1] = (double)this;
      local_b0[2] = (double)&local_178;
      local_b0[3] = (double)&local_160;
      if (local_b0 + 1 != (double *)0x0) {
        local_d8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UEditMeshPolygonsTool::ComputeUpdate_Gizmo'::__l13::<lambda_2>,UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_*,int>
                      ::Call;
      }
      (*pcVar6)(&this->LinearDeformer,pFVar5,local_d8);
      if (local_d8[0] == (code *)0x0) goto LAB_14cc4c236;
      pdVar14 = local_c8;
      pdVar12 = local_b0;
    }
    else {
      dVar18 = dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1;
      if (dVar18 <= 0.0) {
        local_108._16_8_ = 0.0;
        local_108._24_8_ = 0.0;
        local_108._0_8_ = 0.0;
        local_108._8_8_ = 0.0;
      }
      else {
        dVar18 = __real_3ff0000000000000 / dVar18;
        uVar15 = (uint)__xmm_80000000000000008000000000000000;
        uVar16 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        local_108._0_8_ =
             CONCAT44((uint)((ulonglong)(dVar18 * dVar1) >> 0x20) ^ uVar16,
                      SUB84(dVar18 * dVar1,0) ^ uVar15);
        local_108._24_8_ = dVar18 * dVar4;
        local_108._16_8_ =
             CONCAT44((uint)((ulonglong)(dVar18 * dVar3) >> 0x20) ^ uVar16,
                      SUB84(dVar18 * dVar3,0) ^ uVar15);
        local_108._8_8_ =
             CONCAT44((uint)((ulonglong)(dVar18 * dVar2) >> 0x20) ^ uVar16,
                      SUB84(dVar18 * dVar2,0) ^ uVar15);
      }
      UE::Geometry::operator*<double>
                (&local_128,(TQuaternion<double> *)&TStack_148._s_0,
                 (TQuaternion<double> *)&((TQuaternion<double>_u_0 *)local_108)->_s_0);
      local_108._0_8_ = (code *)0x0;
      pcVar6 = *(code **)((this->LinearDeformer)._padding_ + 0x28);
      local_e0 = FMemory::Malloc(0x28,8);
      *local_e0 = (double)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UEditMeshPolygonsTool::ComputeUpdate_Gizmo'::`11'::<lambda_1>,0,1>
                           ::_vftable_;
      local_e0[1] = (double)this;
      local_e0[2] = (double)&local_128;
      local_e0[3] = (double)&local_178;
      local_e0[4] = (double)&local_160;
      if (local_e0 + 1 != (double *)0x0) {
        local_108._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UEditMeshPolygonsTool::ComputeUpdate_Gizmo'::__l11::<lambda_1>,UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_*,int>
             ::Call;
      }
      (*pcVar6)(&this->LinearDeformer,pFVar5,(TQuaternion<double>_u_0 *)local_108);
      if ((code *)local_108._0_8_ == (code *)0x0) goto LAB_14cc4c236;
      pdVar14 = &(((TQuaternion<double>_u_0 *)local_108)->_s_0).Z;
      pdVar12 = local_e0;
    }
    if (pdVar12 != (double *)0x0) {
      pdVar14 = pdVar12;
    }
    (**(code **)((longlong)*pdVar14 + 0x10))();
  }
  else {
    (**(code **)((this->LinearDeformer)._padding_ + 0x30))(&this->LinearDeformer,pFVar5);
  }
LAB_14cc4c236:
  UPreviewMesh::UpdatePreview
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (this->CurrentMesh).Object,FastUpdate,VertexNormals|Positions);
  plVar13 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  (**(code **)(*plVar13 + 0x368))(plVar13);
  return;
}

// DrawHUD @ 14cc53e10

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
UEditMeshPolygonsTool::DrawHUD
          (UEditMeshPolygonsTool *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
  if (this->bToolDisabled == false) {
                    /* WARNING: Could not recover jumptable at 0x00014cc53e23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_ + 0x2e0))();
    return;
  }
  return;
}

// EmitActivityStart @ 14cc53e40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::EmitActivityStart(UEditMeshPolygonsTool *this,FText *param_1)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *local_res8;
  
  this->ActivityTimestamp = this->ActivityTimestamp + 1;
  lVar3 = (**(code **)(this->_padding_ + 0x2d8))();
  (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x10))(lVar3 + 0x28,param_1);
  lVar3 = (**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar2 = *(code **)(*(longlong *)(lVar3 + 0x28) + 0x20);
  local_res8 = ::operator_new(0x10);
  if (local_res8 != (undefined8 *)0x0) {
    iVar1 = this->ActivityTimestamp;
    *local_res8 = &___7FPolyEditActivityStartChange__6B_;
    *(undefined1 *)(local_res8 + 1) = 0;
    *(int *)((longlong)local_res8 + 0xc) = iVar1;
  }
  (*pcVar2)(lVar3 + 0x28,this,&local_res8,param_1);
  lVar3 = (**(code **)(this->_padding_ + 0x2d8))(this);
                    /* WARNING: Could not recover jumptable at 0x00014cc53ef2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x18))(lVar3 + 0x28);
  return;
}

// EmitCurrentMeshChangeAndUpdate @ 14cc53f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UEditMeshPolygonsTool::EmitCurrentMeshChangeAndUpdate
          (UEditMeshPolygonsTool *this,FText *param_1,
          TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
          param_2,FGroupTopologySelection *param_3)

{
  UPolygonSelectionMechanic *pUVar1;
  UPolygonSelectionMechanic *pUVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  FGroupTopology *pFVar5;
  FDynamicMeshChange *this_00;
  bool bVar6;
  longlong lVar7;
  FText *pFVar8;
  TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_> TVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188 [3];
  FText local_170;
  FText local_160;
  FGroupTopologySelection local_148;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  lVar7 = (**(code **)(this->_padding_ + 0x2d8))();
  (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x10))(lVar7 + 0x28,param_1);
  pUVar1 = (this->SelectionMechanic).field0_0x0.DebugPtr;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_148);
  pUVar2 = (this->SelectionMechanic).field0_0x0.DebugPtr;
  if ((((int)pUVar2->_padding_ != *(int *)((longlong)&pUVar2->_padding_ + 4)) ||
      ((int)pUVar2->_padding_ != *(int *)((longlong)&pUVar2->_padding_ + 4))) ||
     ((int)pUVar2->_padding_ != *(int *)((longlong)&pUVar2->_padding_ + 4))) {
    if ((FGroupTopologySelection *)&pUVar1->_padding_ == param_3) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                (&local_148.SelectedGroupIDs,&param_3->SelectedGroupIDs);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                (&local_148.SelectedCornerIDs,&param_3->SelectedCornerIDs);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                (&local_148.SelectedEdgeIDs,&param_3->SelectedEdgeIDs);
      param_3 = &local_148;
    }
    UMeshTopologySelectionMechanic::BeginChange
              ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr);
    UMeshTopologySelectionMechanic::ClearSelection
              ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr);
    lVar7 = (**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar3 = *(code **)(*(longlong *)(lVar7 + 0x28) + 0x20);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_170,L"UEditMeshPolygonsTool",L"ClearSelection",L"Clear Selection");
    TVar9 = UMeshTopologySelectionMechanic::EndChange
                      ((UMeshTopologySelectionMechanic *)
                       (this->SelectionMechanic).field0_0x0.DebugPtr);
    (*pcVar3)(lVar7 + 0x28,(this->SelectionMechanic).field0_0x0.DebugPtr,TVar9.Ptr,pFVar8);
    if (local_170.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
    }
  }
  puVar10 = ::operator_new(0xb0);
  puVar11 = (undefined8 *)0x0;
  if (puVar10 != (undefined8 *)0x0) {
    pFVar4 = ((param_2.Ptr)->OldVertices).AllocatorInstance.Data;
    ((param_2.Ptr)->OldVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *puVar10 = &___7FEditMeshPolygonsToolMeshChange__6B_;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[5] = 0;
    *(undefined4 *)(puVar10 + 6) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x34) = 0x80;
    *(undefined4 *)(puVar10 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar10 + 0x3c) = 0;
    puVar10[9] = 0;
    *(undefined4 *)(puVar10 + 10) = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0xf] = 0;
    *(undefined4 *)(puVar10 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x84) = 0x80;
    *(undefined4 *)(puVar10 + 0x11) = 0xffffffff;
    *(undefined4 *)((longlong)puVar10 + 0x8c) = 0;
    puVar10[0x13] = 0;
    *(undefined4 *)(puVar10 + 0x14) = 0;
    puVar10[0x15] = pFVar4;
    puVar11 = puVar10;
  }
  if (((this->Topology).Object == (FGroupTopology *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = (this->Topology).Object;
  if (*(int *)&(pFVar5->CurrentExtraCornerVids).Elements.field_0x8 !=
      *(int *)&(pFVar5->CurrentExtraCornerVids).Elements.field_0x34) {
    if ((pFVar5 == (FGroupTopology *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar11 + 1),
               &((this->Topology).Object)->CurrentExtraCornerVids);
  }
  if (((this->Topology).Object == (FGroupTopology *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (**(code **)(((this->Topology).Object)->_padding_ + 8))();
  if (((this->Topology).Object == (FGroupTopology *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar5 = (this->Topology).Object;
  if (*(int *)&(pFVar5->CurrentExtraCornerVids).Elements.field_0x8 !=
      *(int *)&(pFVar5->CurrentExtraCornerVids).Elements.field_0x34) {
    if ((pFVar5 == (FGroupTopology *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar11 + 0xb),
               &((this->Topology).Object)->CurrentExtraCornerVids);
  }
  lVar7 = (**(code **)(this->_padding_ + 0x2d8))(this);
  local_188[0] = puVar11;
  (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x20))(lVar7 + 0x28,this,local_188,param_1);
  UPreviewMesh::UpdatePreview
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (this->CurrentMesh).Object,FullUpdate,AllVertexAttribs);
  pUVar1 = (this->SelectionMechanic).field0_0x0.DebugPtr;
  this->bSpatialDirty = true;
  UMeshTopologySelectionMechanic::NotifyMeshChanged((UMeshTopologySelectionMechanic *)pUVar1,false);
  UMeshTopologySelectionMechanic::NotifyMeshChanged
            ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr,true);
  this->ModifiedTopologyCounter = this->ModifiedTopologyCounter + 1;
  if (((*(int *)&(param_3->SelectedCornerIDs).Elements.field_0x8 !=
        *(int *)&(param_3->SelectedCornerIDs).Elements.field_0x34) ||
      (*(int *)&(param_3->SelectedEdgeIDs).Elements.field_0x8 !=
       *(int *)&(param_3->SelectedEdgeIDs).Elements.field_0x34)) ||
     (*(int *)&(param_3->SelectedGroupIDs).Elements.field_0x8 !=
      *(int *)&(param_3->SelectedGroupIDs).Elements.field_0x34)) {
    UMeshTopologySelectionMechanic::BeginChange
              ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr);
    UMeshTopologySelectionMechanic::SetSelection
              ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr,
               param_3,true);
    lVar7 = (**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar3 = *(code **)(*(longlong *)(lVar7 + 0x28) + 0x20);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_160,L"UEditMeshPolygonsTool",L"SetSelection",L"Set Selection");
    TVar9 = UMeshTopologySelectionMechanic::EndChange
                      ((UMeshTopologySelectionMechanic *)
                       (this->SelectionMechanic).field0_0x0.DebugPtr);
    (*pcVar3)(lVar7 + 0x28,(this->SelectionMechanic).field0_0x0.DebugPtr,TVar9.Ptr,pFVar8);
    if (local_160.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
    }
  }
  lVar7 = (**(code **)(this->_padding_ + 0x2d8))(this);
  (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x18))(lVar7 + 0x28);
  local_148.SelectedEdgeIDs.HashSize = 0;
  if (local_148.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_148.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_148.SelectedEdgeIDs.Elements);
  local_148.SelectedCornerIDs.HashSize = 0;
  if (local_148.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_148.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_148.SelectedCornerIDs.Elements);
  local_148.SelectedGroupIDs.HashSize = 0;
  if (local_148.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_148.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_148);
  this_00 = (FDynamicMeshChange *)((param_2.Ptr)->OldVertices).AllocatorInstance.Data;
  if (this_00 != (FDynamicMeshChange *)0x0) {
    UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(this_00);
    ::operator_delete(this_00,0x48);
  }
  return;
}

// EnableTriangleMode @ 14cc549e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::EnableTriangleMode(UEditMeshPolygonsTool *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Preview).field0_0x0.DebugPtr == (UMeshOpPreviewWithBackgroundCompute *)0x0) {
    this->bTriangleMode = true;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Preview == nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\EditMeshPolygonsTool.cpp"
                     ,0x28b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this->bTriangleMode = true;
  return;
}

// EndCurrentActivity @ 14cc54d90

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
UEditMeshPolygonsTool::EndCurrentActivity(UEditMeshPolygonsTool *this,EToolShutdownType param_1)

{
  bool bVar1;
  UInteractiveToolActivity *pUVar2;
  code *pcVar3;
  char cVar4;
  longlong *plVar5;
  FText *pFVar6;
  UInteractiveToolManager *pUVar7;
  TScriptInterface<IToolHostCustomizationAPI> *pTVar8;
  undefined7 in_register_00000011;
  undefined8 in_R8;
  undefined7 uVar9;
  FText local_18;
  
  pUVar2 = (this->CurrentActivity).field0_0x0.DebugPtr;
  if (pUVar2 != (UInteractiveToolActivity *)0x0) {
    cVar4 = (**(code **)(*(longlong *)pUVar2 + 0x2f8))
                      (pUVar2,CONCAT71(in_register_00000011,param_1));
    if (cVar4 != '\0') {
      pUVar2 = (this->CurrentActivity).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar2 + 0x310))(pUVar2,param_1);
    }
    this->ActivityTimestamp = this->ActivityTimestamp + 1;
    bVar1 = this->bTerminateOnPendingActionComplete;
    (this->CurrentActivity).field0_0x0.DebugPtr = (UInteractiveToolActivity *)0x0;
    pcVar3 = *(code **)(this->_padding_ + 0x2d8);
    if (bVar1 != false) {
      plVar5 = (longlong *)(*pcVar3)();
      pcVar3 = *(code **)(*plVar5 + 0x390);
      pFVar6 = FText::FText(&local_18);
      (*pcVar3)(plVar5,this,param_1,0,pFVar6);
      if (local_18.TextData.Reference == (ITextData *)0x0) {
        return;
      }
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      return;
    }
    pUVar7 = (UInteractiveToolManager *)(*pcVar3)(this);
    pTVar8 = IToolHostCustomizationAPI::Find
                       ((TScriptInterface<IToolHostCustomizationAPI> *)&local_18,pUVar7);
    if ((*(longlong *)pTVar8 != 0) && (*(longlong **)&pTVar8->field_0x8 != (longlong *)0x0)) {
      (**(code **)(**(longlong **)&pTVar8->field_0x8 + 0x30))();
    }
    SetActionButtonPanelsVisible(this,true);
    uVar9 = (undefined7)((ulonglong)in_R8 >> 8);
    UMeshTopologySelectionMechanic::SetIsEnabled
              ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr,true,
               true);
    (**(code **)(this->_padding_ + 0x338))
              (this,(this->TopologyProperties).field0_0x0.DebugPtr,CONCAT71(uVar9,1));
    (**(code **)(this->_padding_ + 0x338))
              (this,((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_,1);
    UpdateGizmoVisibility(this);
  }
  ResetUserMessage(this);
  return;
}

// EndDeformerChange @ 14cc54ef0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::EndDeformerChange(UEditMeshPolygonsTool *this)

{
  code *pcVar1;
  longlong lVar2;
  FText *pFVar3;
  FMeshVertexChange *local_res8;
  FText local_18;
  
  if (this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) {
    UpdateDeformerChangeFromROI(this,true);
    lVar2 = (**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar1 = *(code **)(*(longlong *)(lVar2 + 0x28) + 0x20);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UEditMeshPolygonsTool",L"PolyMeshDeformationChange",
                        L"PolyMesh Edit");
    local_res8 = (this->ActiveVertexChange->Change).Ptr;
    (this->ActiveVertexChange->Change).Ptr = (FMeshVertexChange *)0x0;
    (*pcVar1)(lVar2 + 0x28,this,&local_res8,pFVar3);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
  }
  if (this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) {
    FMeshVertexChangeBuilder::_scalar_deleting_destructor_(this->ActiveVertexChange,1);
  }
  this->ActiveVertexChange = (FMeshVertexChangeBuilder *)0x0;
  return;
}

// ExecuteNestedAcceptCommand @ 14cc570f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UEditMeshPolygonsTool::ExecuteNestedAcceptCommand(UEditMeshPolygonsTool *this)

{
  if (this->_padding_ != 0) {
    EndCurrentActivity((UEditMeshPolygonsTool *)
                       &this[-1].LinearDeformer.FaceVertsTemp.Elements.field_0x20,Accept);
    return true;
  }
  return false;
}

// ExecuteNestedCancelCommand @ 14cc57130

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UEditMeshPolygonsTool::ExecuteNestedCancelCommand(UEditMeshPolygonsTool *this)

{
  UMeshTopologySelectionMechanic *this_00;
  code *pcVar1;
  longlong lVar2;
  FText *pFVar3;
  TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_> TVar4;
  FText local_18;
  
  if (this->_padding_ != 0) {
    EndCurrentActivity((UEditMeshPolygonsTool *)
                       &this[-1].LinearDeformer.FaceVertsTemp.Elements.field_0x20,Cancel);
    return true;
  }
  this_00 = (UMeshTopologySelectionMechanic *)(this->CommonProps).field0_0x0.DebugPtr;
  if ((this_00 != (UMeshTopologySelectionMechanic *)0x0) &&
     (((*(int *)&(this_00->PersistentSelection).SelectedCornerIDs.Elements.field_0x8 !=
        *(int *)&(this_00->PersistentSelection).SelectedCornerIDs.Elements.field_0x34 ||
       (*(int *)&(this_00->PersistentSelection).SelectedEdgeIDs.Elements.field_0x8 !=
        *(int *)&(this_00->PersistentSelection).SelectedEdgeIDs.Elements.field_0x34)) ||
      (*(int *)&(this_00->PersistentSelection).SelectedGroupIDs.Elements.field_0x8 !=
       *(int *)&(this_00->PersistentSelection).SelectedGroupIDs.Elements.field_0x34)))) {
    UMeshTopologySelectionMechanic::BeginChange(this_00);
    UMeshTopologySelectionMechanic::ClearSelection
              ((UMeshTopologySelectionMechanic *)(this->CommonProps).field0_0x0.DebugPtr);
    lVar2 = (**(code **)(*(longlong *)&this[-1].LinearDeformer.FaceVertsTemp.Elements.field_0x20 +
                        0x2d8))(&this[-1].LinearDeformer.FaceVertsTemp.Elements.field_0x20);
    pcVar1 = *(code **)(*(longlong *)(lVar2 + 0x28) + 0x20);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UEditMeshPolygonsTool",L"ClearSelection",L"Clear Selection");
    TVar4 = UMeshTopologySelectionMechanic::EndChange
                      ((UMeshTopologySelectionMechanic *)(this->CommonProps).field0_0x0.DebugPtr);
    (*pcVar1)(lVar2 + 0x28,(this->CommonProps).field0_0x0.DebugPtr,TVar4.Ptr,pFVar3);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    return true;
  }
  return false;
}

// GetPrivateStaticClass @ 14cc5cfb0

UClass * __cdecl UEditMeshPolygonsTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UEditMeshPolygonsTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"EditMeshPolygonsTool",
               &Z_Registration_Info_UClass_UEditMeshPolygonsTool.InnerSingleton,
               StaticRegisterNativesUEditMeshPolygonsTool,0x920,0x10,CLASS_Intrinsic|CLASS_Transient
               ,CASTCLASS_None,L"Engine",InternalConstructor<UEditMeshPolygonsTool>,
               InternalVTableHelperCtorCaller<UEditMeshPolygonsTool>,local_res8,
               USingleTargetWithSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UEditMeshPolygonsTool.InnerSingleton;
}

// GetSpatial @ 14cc5db90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TMeshAABBTree3<UE::Geometry::FDynamicMesh3> * __thiscall
UEditMeshPolygonsTool::GetSpatial(UEditMeshPolygonsTool *this)

{
  TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar4;
  ulong64 uVar5;
  
  pTVar1 = &this->MeshSpatial;
  if (this->bSpatialDirty != false) {
    if (pTVar1->Object == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(*pcVar2)();
        return pTVar4;
      }
    }
    pTVar4 = pTVar1->Object;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(pTVar4,false);
    uVar5 = UE::Geometry::FDynamicMesh3::GetChangeStamp(pTVar4->Mesh);
    pTVar4->MeshChangeStamp = uVar5;
    this->bSpatialDirty = false;
  }
  if (pTVar1->Object == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return pTVar1->Object;
}

// GetWorldSpaceFocusBox @ 14cc5e620

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBox<double> * __thiscall
UEditMeshPolygonsTool::GetWorldSpaceFocusBox
          (UEditMeshPolygonsTool *this,TBox<double> *__return_storage_ptr__)

{
  UMeshTopologySelectionMechanic *this_00;
  code *pcVar1;
  bool bVar2;
  TBox<double> *pTVar3;
  TVector<double>_u_0 local_38;
  double local_20;
  double dStack_18;
  double local_10;
  
  this_00 = *(UMeshTopologySelectionMechanic **)&(this->ActivityLabels).field_0x20;
  if (this_00 == (UMeshTopologySelectionMechanic *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1092627319186520760>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\EditMeshPolygonsTool.cpp"
                       ,0x548,"SelectionMechanic");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TBox<double> *)(*pcVar1)();
      return pTVar3;
    }
    (__return_storage_ptr__->Min).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Min).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Max).field0_0x0._s_0.Z = 0.0;
    __return_storage_ptr__->IsValid = '\0';
    __return_storage_ptr__->Pad[0] = '\0';
    __return_storage_ptr__->Pad[1] = '\0';
    __return_storage_ptr__->Pad[2] = '\0';
    __return_storage_ptr__->Pad[3] = '\0';
    __return_storage_ptr__->Pad[4] = '\0';
    __return_storage_ptr__->Pad[5] = '\0';
    __return_storage_ptr__->Pad[6] = '\0';
    return __return_storage_ptr__;
  }
  UMeshTopologySelectionMechanic::GetSelectionBounds
            (this_00,(TAxisAlignedBox3<double> *)&local_38._s_0,true);
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = local_38._s_0.X;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = local_38._s_0.Y;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = local_20;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dStack_18;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = local_38._s_0.Z;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = local_10;
  if (((local_38._s_0.X <= local_20) && (local_38._s_0.Y <= dStack_18)) &&
     (local_38._s_0.Z <= local_10)) {
    __return_storage_ptr__->IsValid = '\x01';
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->IsValid = '\0';
  return __return_storage_ptr__;
}

// GetWorldSpaceFocusPoint @ 14cc5e710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UEditMeshPolygonsTool::GetWorldSpaceFocusPoint
          (UEditMeshPolygonsTool *this,TRay<double> *param_1,TVector<double> *param_2)

{
  TTransformSRT3<double> *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  int iVar9;
  TVector<double> *pTVar10;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar11;
  longlong *plVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_198 [32];
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  TVector<double> local_130;
  TVector<double>_u_0 local_118;
  longlong local_f8 [3];
  longlong *local_e0;
  undefined1 local_d8;
  double local_a0;
  ulonglong local_78;
  
  dVar8 = __real_3ff0000000000000;
  local_78 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_148._s_0.X = (param_1->Direction).field0_0x0._s_0.X;
  local_148._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
  this_00 = (TTransformSRT3<double> *)
            ((longlong)&(this->LastTransformerFrame).Origin.field0_0x0 + 8);
  local_148._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z;
  dVar1 = *(double *)((longlong)&(this->LockedTransfomerFrame).Origin.field0_0x0 + 8);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar1 = __real_3ff0000000000000 / dVar1;
  }
  else {
    dVar1 = 0.0;
  }
  dVar2 = *(double *)((longlong)&(this->LockedTransfomerFrame).Origin.field0_0x0 + 0x10);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar2 = __real_3ff0000000000000 / dVar2;
  }
  else {
    dVar2 = 0.0;
  }
  dVar3 = *(double *)&(this->LockedTransfomerFrame).Rotation.field0_0x0;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar3 = __real_3ff0000000000000 / dVar3;
  }
  else {
    dVar3 = 0.0;
  }
  pTVar10 = UE::Geometry::TQuaternion<double>::InverseMultiply
                      ((TQuaternion<double> *)this_00,&local_130,(TVector<double> *)&local_148._s_0)
  ;
  local_148._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_148._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  local_148._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  dVar4 = (pTVar10->field0_0x0)._s_0.X;
  dVar5 = (pTVar10->field0_0x0)._s_0.Y;
  dVar6 = (pTVar10->field0_0x0)._s_0.Z;
  pTVar10 = UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
                      (this_00,&local_130,(TVector<double> *)&local_148._s_0);
  local_178._s_0.X = (pTVar10->field0_0x0)._s_0.X;
  local_178._s_0.Y = (pTVar10->field0_0x0)._s_0.Y;
  local_178._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
  local_160._s_0.X = dVar1 * dVar4;
  local_160._s_0.Y = dVar2 * dVar5;
  local_160._s_0.Z = dVar3 * dVar6;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_160._s_0,__real_3e45798ee0000000);
  auVar13._0_8_ = local_160._s_0.Y * local_160._s_0.Y;
  auVar13._8_8_ = 0;
  auVar14._8_8_ = 0;
  auVar14._0_8_ =
       local_160._s_0.X * local_160._s_0.X + auVar13._0_8_ + local_160._s_0.Z * local_160._s_0.Z;
  auVar14 = sqrtpd(auVar13,auVar14);
  if (auVar14._0_8_ <= 0.0) {
    local_160._s_0.X = 0.0;
    local_160._s_0.Y = 0.0;
    local_160._s_0.Z = 0.0;
  }
  else {
    dVar8 = dVar8 / auVar14._0_8_;
    local_160._s_0.X = local_160._s_0.X * dVar8;
    local_160._s_0.Y = local_160._s_0.Y * dVar8;
    local_160._s_0.Z = local_160._s_0.Z * dVar8;
  }
  pTVar11 = GetSpatial((UEditMeshPolygonsTool *)
                       &this[-1].LinearDeformer.ModifiedOverlayNormals.Elements.field_0x18);
  local_118._s_0.X = __real_7fefffffffffffff;
  local_118._s_0.Z = 0.0;
  local_e0 = (longlong *)0x0;
  local_d8 = 0;
  iVar9 = (**(code **)(pTVar11->_padding_ + 0x40))(pTVar11,&local_178,&local_118);
  if (local_118._s_0.Z != 0.0) {
    plVar12 = local_f8;
    if (local_e0 != (longlong *)0x0) {
      plVar12 = local_e0;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (iVar9 != -1) {
    pTVar11 = GetSpatial((UEditMeshPolygonsTool *)
                         &this[-1].LinearDeformer.ModifiedOverlayNormals.Elements.field_0x18);
    UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleIntersection
              ((TIntrRay3Triangle3<double,UE::Math::TRay<double>_> *)&local_118._s_0,pTVar11->Mesh,
               iVar9,(TRay<double> *)&local_178._s_0);
    local_148._s_0.X =
         (local_160._s_0.X * local_a0 + local_178._s_0.X) *
         (this->LockedTransfomerFrame).Origin.field0_0x0._s_0.Y;
    local_148._s_0.Z =
         (local_160._s_0.Z * local_a0 + local_178._s_0.Z) *
         (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.X;
    local_148._s_0.Y =
         (local_160._s_0.Y * local_a0 + local_178._s_0.Y) *
         (this->LockedTransfomerFrame).Origin.field0_0x0._s_0.Z;
    pTVar10 = UE::Geometry::operator*<double>
                        (&local_130,(TQuaternion<double> *)this_00,
                         (TVector<double> *)&local_148._s_0);
    dVar8 = (this->LastTransformerFrame).Rotation.field0_0x0._s_0.W;
    dVar2 = (pTVar10->field0_0x0)._s_0.Y;
    dVar1 = (this->LockedTransfomerFrame).Origin.field0_0x0._s_0.X + (pTVar10->field0_0x0)._s_0.Z;
    (param_2->field0_0x0)._s_0.X =
         (this->LastTransformerFrame).Rotation.field0_0x0._s_0.Z + (pTVar10->field0_0x0)._s_0.X;
    auVar7._8_4_ = SUB84(dVar1,0);
    auVar7._0_8_ = dVar8 + dVar2;
    auVar7._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])((longlong)&param_2->field0_0x0 + 8) = auVar7;
  }
  return iVar9 != -1;
}

// HasAccept @ 14cc5ea80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UEditMeshPolygonsTool::HasAccept(UEditMeshPolygonsTool *this)

{
  return true;
}

// HasCancel @ 14cc5eae0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UEditMeshPolygonsTool::HasCancel(UEditMeshPolygonsTool *this)

{
  return true;
}

// NotifyActivitySelfEnded @ 14cc65620

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
UEditMeshPolygonsTool::NotifyActivitySelfEnded
          (UEditMeshPolygonsTool *this,UInteractiveToolActivity *param_1)

{
  EndCurrentActivity((UEditMeshPolygonsTool *)
                     &this[-1].LinearDeformer.FaceVertsTemp.Elements.field_0x30,Accept);
  return;
}

// OnBeginGizmoTransform @ 14cc667a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UEditMeshPolygonsTool::OnBeginGizmoTransform(UEditMeshPolygonsTool *this,UTransformProxy *param_1)

{
  UPolygonSelectionMechanic *pUVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  FMeshVertexChangeBuilder *this_00;
  FMeshVertexChangeBuilder *pFVar5;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_01;
  code *pcVar6;
  undefined1 auStack_f8 [32];
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  undefined8 local_c8;
  undefined8 local_b0;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  UMeshTopologySelectionMechanic::ClearHighlight
            ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr);
  pUVar1 = (this->SelectionMechanic).field0_0x0.DebugPtr;
  this_01 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&pUVar1->_padding_;
  if ((int)pUVar1->_padding_ - *(int *)((longlong)&pUVar1->_padding_ + 4) < 1) {
    if ((int)pUVar1->_padding_ - *(int *)((longlong)&pUVar1->_padding_ + 4) < 1) {
      if ((int)pUVar1->_padding_ - *(int *)((longlong)&pUVar1->_padding_ + 4) < 1)
      goto LAB_14cc66865;
      pcVar6 = *(code **)((this->LinearDeformer)._padding_ + 8);
    }
    else {
      this_01 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&pUVar1->_padding_;
      pcVar6 = *(code **)((this->LinearDeformer)._padding_ + 0x18);
    }
  }
  else {
    this_01 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&pUVar1->_padding_;
    pcVar6 = *(code **)((this->LinearDeformer)._padding_ + 0x10);
  }
  pTVar4 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(this_01,&local_d8);
  (*pcVar6)(&this->LinearDeformer,pTVar4);
  if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.AllocatorInstance.Data);
  }
LAB_14cc66865:
  (**(code **)(param_1->_padding_ + 0x2c0))(param_1);
  pFVar5 = this->ActiveVertexChange;
  local_c8 = local_58;
  (this->InitialGizmoFrame).Origin.field0_0x0._s_0.X = local_68;
  (this->InitialGizmoFrame).Origin.field0_0x0._s_0.Y = dStack_60;
  local_b0 = local_58;
  uVar3 = local_b0;
  local_b0._0_4_ = (undefined4)local_58;
  local_b0._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  *(undefined4 *)((longlong)&(this->InitialGizmoFrame).Origin.field0_0x0 + 0x10) =
       (undefined4)local_b0;
  *(undefined4 *)((longlong)&(this->InitialGizmoFrame).Origin.field0_0x0 + 0x14) = local_b0._4_4_;
  *(int *)&(this->InitialGizmoFrame).Rotation.field0_0x0 = local_88._0_4_;
  *(int *)((longlong)&(this->InitialGizmoFrame).Rotation.field0_0x0 + 4) = local_88._4_4_;
  (this->InitialGizmoScale).field0_0x0._s_0.X = local_48;
  (this->InitialGizmoScale).field0_0x0._s_0.Y = dStack_40;
  auVar2._8_4_ = local_78;
  auVar2._0_8_ = local_88._8_8_;
  auVar2._12_4_ = uStack_74;
  *(undefined1 (*) [16])((longlong)&(this->InitialGizmoFrame).Rotation.field0_0x0 + 8) = auVar2;
  (this->InitialGizmoScale).field0_0x0._s_0.Z = local_38;
  *(undefined4 *)((longlong)&(this->InitialGizmoFrame).Rotation.field0_0x0 + 0x18) = uStack_70;
  *(undefined4 *)((longlong)&(this->InitialGizmoFrame).Rotation.field0_0x0 + 0x1c) = uStack_6c;
  if (pFVar5 == (FMeshVertexChangeBuilder *)0x0) {
    local_b0 = uVar3;
    this_00 = ::operator_new(0x140);
    pFVar5 = (FMeshVertexChangeBuilder *)0x0;
    if (this_00 != (FMeshVertexChangeBuilder *)0x0) {
      pFVar5 = FMeshVertexChangeBuilder::FMeshVertexChangeBuilder
                         (this_00,OverlayNormals|VertexPositions);
    }
    this->ActiveVertexChange = pFVar5;
    UpdateDeformerChangeFromROI(this,false);
  }
  this->bInGizmoDrag = true;
  return;
}

// OnEndGizmoTransform @ 14cc66ed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UEditMeshPolygonsTool::OnEndGizmoTransform(UEditMeshPolygonsTool *this,UTransformProxy *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  UPolygonSelectionMechanic *this_00;
  UCombinedTransformGizmo *this_01;
  FMeshVertexChangeBuilder *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 (*pauVar14) [16];
  longlong lVar15;
  FText *pFVar16;
  undefined1 auVar17 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar18 [16];
  undefined1 auStack_128 [32];
  FMeshVertexChange *local_108;
  FText local_100 [2];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_128;
  this->bInGizmoDrag = false;
  if (this->bGizmoUpdatePending != false) {
    ComputeUpdate_Gizmo(this);
  }
  this_00 = (this->SelectionMechanic).field0_0x0.DebugPtr;
  this->bGizmoUpdatePending = false;
  this->bSpatialDirty = true;
  UMeshTopologySelectionMechanic::NotifyMeshChanged((UMeshTopologySelectionMechanic *)this_00,false)
  ;
  pauVar14 = (undefined1 (*) [16])(**(code **)(param_1->_padding_ + 0x2c0))(param_1,&local_b8);
  this_01 = (this->TransformGizmo).field0_0x0.DebugPtr;
  auVar1 = *pauVar14;
  auVar2 = pauVar14[1];
  uVar8 = *(undefined4 *)pauVar14[3];
  uVar9 = *(undefined4 *)(pauVar14[3] + 4);
  uVar10 = *(undefined4 *)pauVar14[2];
  uVar11 = *(undefined4 *)(pauVar14[2] + 4);
  uVar12 = *(undefined4 *)(pauVar14[2] + 8);
  uVar13 = *(undefined4 *)(pauVar14[2] + 0xc);
  if (this_01 != (UCombinedTransformGizmo *)0x0) {
    if (((this->CommonProps).field0_0x0.DebugPtr)->bLockRotation == false) {
      (**(code **)(*(longlong *)this_01 + 0x358))(this_01,&UE::Math::TVector<double>::OneVector);
    }
    else {
      local_b8.Rotation.XY.m128d_f64[0]._0_4_ =
           *(undefined4 *)&(this->LockedTransfomerFrame).Rotation.field0_0x0;
      local_b8.Rotation.XY.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)&(this->LockedTransfomerFrame).Rotation.field0_0x0 + 4);
      local_b8.Rotation.ZW.m128d_f64[0] = (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.Z;
      local_b8.Rotation.ZW.m128d_f64[1] = (this->LockedTransfomerFrame).Rotation.field0_0x0._s_0.W;
      auVar6._4_8_ = in_XMM1_Qb;
      auVar6._0_4_ = local_b8.Rotation.XY.m128d_f64[0]._4_4_;
      auVar18._0_8_ = auVar6._0_8_ << 0x20;
      auVar18._8_4_ =
           *(undefined4 *)((longlong)&(this->LockedTransfomerFrame).Rotation.field0_0x0 + 8);
      auVar18._12_4_ =
           *(undefined4 *)((longlong)&(this->LockedTransfomerFrame).Rotation.field0_0x0 + 0xc);
      local_b8.Rotation.XY.m128d_f64[1] = auVar18._8_8_;
      auVar7._4_8_ = local_b8.Rotation.XY.m128d_f64[1];
      auVar7._0_4_ = uVar11;
      auVar17._0_8_ = auVar7._0_8_ << 0x20;
      auVar17._8_4_ = uVar12;
      auVar17._12_4_ = uVar13;
      local_b8.Translation.XY.m128d_f64[1] = auVar17._8_8_;
      local_b8.Translation.ZW.m128d_f64[1] = 0.0;
      local_b8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      local_b8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
      local_b8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_b8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      local_e0 = uVar8;
      uStack_dc = uVar9;
      uStack_d8 = auVar1._0_4_;
      uStack_d4 = auVar1._4_4_;
      local_b8.Translation.XY.m128d_f64[0]._0_4_ = uVar10;
      local_b8.Translation.XY.m128d_f64[0]._4_4_ = uVar11;
      local_b8.Translation.ZW.m128d_f64[0] = *(double *)pauVar14[3];
      UCombinedTransformGizmo::ReinitializeGizmoTransform(this_01,&local_b8,true);
    }
  }
  pFVar3 = this->ActiveVertexChange;
  *(undefined4 *)&(this->LastTransformerFrame).Origin.field0_0x0 = uVar10;
  *(undefined4 *)((longlong)&(this->LastTransformerFrame).Origin.field0_0x0 + 4) = uVar11;
  *(undefined4 *)((longlong)&(this->LastTransformerFrame).Origin.field0_0x0 + 8) = uVar12;
  *(undefined4 *)((longlong)&(this->LastTransformerFrame).Origin.field0_0x0 + 0xc) = uVar13;
  *(undefined4 *)((longlong)&(this->LastTransformerFrame).Origin.field0_0x0 + 0x10) = uVar8;
  *(undefined4 *)((longlong)&(this->LastTransformerFrame).Origin.field0_0x0 + 0x14) = uVar9;
  *(int *)&(this->LastTransformerFrame).Rotation.field0_0x0 = auVar1._0_4_;
  *(int *)((longlong)&(this->LastTransformerFrame).Rotation.field0_0x0 + 4) = auVar1._4_4_;
  auVar5._8_4_ = auVar2._0_4_;
  auVar5._0_8_ = auVar1._8_8_;
  auVar5._12_4_ = auVar2._4_4_;
  *(undefined1 (*) [16])((longlong)&(this->LastTransformerFrame).Rotation.field0_0x0 + 8) = auVar5;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.W = auVar2._8_8_;
  if (pFVar3 != (FMeshVertexChangeBuilder *)0x0) {
    UpdateDeformerChangeFromROI(this,true);
    lVar15 = (**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar4 = *(code **)(*(longlong *)(lVar15 + 0x28) + 0x20);
    pFVar16 = FText::AsLocalizable_Advanced_LocText
                        (local_100,L"UEditMeshPolygonsTool",L"PolyMeshDeformationChange",
                         L"PolyMesh Edit");
    local_108 = (this->ActiveVertexChange->Change).Ptr;
    (this->ActiveVertexChange->Change).Ptr = (FMeshVertexChange *)0x0;
    (*pcVar4)(lVar15 + 0x28,this,&local_108,pFVar16);
    if (local_100[0].TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_100[0].TextData.Reference + 0x10))();
    }
  }
  if (this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) {
    FMeshVertexChangeBuilder::_scalar_deleting_destructor_(this->ActiveVertexChange,1);
  }
  this->ActiveVertexChange = (FMeshVertexChangeBuilder *)0x0;
  return;
}

// OnGizmoTransformChanged @ 14cc67160

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
UEditMeshPolygonsTool::OnGizmoTransformChanged
          (UEditMeshPolygonsTool *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  UCombinedTransformGizmo *pUVar5;
  undefined1 auVar6 [16];
  double dVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  if (this->bInGizmoDrag != false) {
    auVar2 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
    auVar3 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
    dVar1 = (param_2->Translation).ZW.m128d_f64[0];
    dVar7 = (param_2->Translation).XY.m128d_f64[1];
    (this->LastUpdateGizmoFrame).Origin.field0_0x0._s_0.X = (param_2->Translation).XY.m128d_f64[0];
    (this->LastUpdateGizmoFrame).Origin.field0_0x0._s_0.Y = dVar7;
    local_30 = SUB84(dVar1,0);
    uStack_2c = (undefined4)((ulonglong)dVar1 >> 0x20);
    lVar4 = this->_padding_;
    *(undefined4 *)((longlong)&(this->LastUpdateGizmoFrame).Origin.field0_0x0 + 0x10) = local_30;
    *(undefined4 *)((longlong)&(this->LastUpdateGizmoFrame).Origin.field0_0x0 + 0x14) = uStack_2c;
    *(int *)&(this->LastUpdateGizmoFrame).Rotation.field0_0x0 = auVar2._0_4_;
    *(int *)((longlong)&(this->LastUpdateGizmoFrame).Rotation.field0_0x0 + 4) = auVar2._4_4_;
    dVar1 = (param_2->Scale3D).XY.m128d_f64[1];
    (this->LastUpdateGizmoScale).field0_0x0._s_0.X = (param_2->Scale3D).XY.m128d_f64[0];
    (this->LastUpdateGizmoScale).field0_0x0._s_0.Y = dVar1;
    dVar1 = (param_2->Scale3D).ZW.m128d_f64[0];
    auVar6._8_4_ = auVar3._0_4_;
    auVar6._0_8_ = auVar2._8_8_;
    auVar6._12_4_ = auVar3._4_4_;
    *(undefined1 (*) [16])((longlong)&(this->LastUpdateGizmoFrame).Rotation.field0_0x0 + 8) = auVar6
    ;
    (this->LastUpdateGizmoScale).field0_0x0._s_0.Z = dVar1;
    (this->LastUpdateGizmoFrame).Rotation.field0_0x0._s_0.W = auVar3._8_8_;
    plVar8 = (longlong *)(**(code **)(lVar4 + 0x2d8))();
    (**(code **)(*plVar8 + 0x368))(plVar8);
    pUVar5 = (this->TransformGizmo).field0_0x0.DebugPtr;
    bVar9 = false;
    this->bGizmoUpdatePending = true;
    if (pUVar5 != (UCombinedTransformGizmo *)0x0) {
      bVar9 = pUVar5->CurrentCoordinateSystem == World;
    }
    this->bLastUpdateUsedWorldFrame = bVar9;
  }
  return;
}

// OnPropertyModified @ 14cc68290

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
UEditMeshPolygonsTool::OnPropertyModified
          (UEditMeshPolygonsTool *this,UObject *param_1,FProperty *param_2)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  FName FVar4;
  FName local_res18 [2];
  
  if (param_2 != (FProperty *)0x0) {
    pFVar3 = ::FName::FName(local_res18,0x16,L"bShowSelectableCorners",FNAME_Add);
    FVar1 = *pFVar3;
    bVar2 = IsThisNotNull(param_2,"FField::GetFName");
    if (bVar2) {
      FVar4 = (FName)param_2->_padding_;
    }
    else {
      FVar4.ComparisonIndex.Value = 0;
      FVar4.Number = 0;
    }
    if (FVar4 == FVar1) {
      UMeshTopologySelectionMechanic::SetShowSelectableCorners
                ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr,
                 ((this->CommonProps).field0_0x0.DebugPtr)->bShowSelectableCorners);
    }
  }
  return;
}

// OnSelectionModifiedEvent @ 14cc68320

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

void __thiscall UEditMeshPolygonsTool::OnSelectionModifiedEvent(UEditMeshPolygonsTool *this)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  dVar2 = _UNK_15061cbc8;
  dVar1 = ___xmm_3ff00000000000000000000000000000;
  this->bSelectionStateDirty = true;
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastGeometryFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastGeometryFrame).Origin.field0_0x0._s_0.Y = (double)uVar3;
  *(undefined4 *)((longlong)&(this->LastGeometryFrame).Origin.field0_0x0 + 0x10) = uVar4;
  *(undefined4 *)((longlong)&(this->LastGeometryFrame).Origin.field0_0x0 + 0x14) = uVar5;
  *(undefined4 *)&(this->LastGeometryFrame).Rotation.field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->LastGeometryFrame).Rotation.field0_0x0 + 4) = 0;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.Z = dVar1;
  (this->LastGeometryFrame).Rotation.field0_0x0._s_0.W = dVar2;
  return;
}

// OnShutdown @ 14cc69190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UEditMeshPolygonsTool::OnShutdown(UEditMeshPolygonsTool *this,EToolShutdownType param_1)

{
  UInteractiveToolActivity *pUVar1;
  UPolyEditCommonProperties *pUVar2;
  code *pcVar3;
  longlong *plVar4;
  UPolyEditTopologyProperties *pUVar5;
  UPolyEditExtrudeActivity *pUVar6;
  UPolyEditInsetOutsetActivity *pUVar7;
  UPolyEditCutFacesActivity *pUVar8;
  UPolyEditPlanarProjectionUVActivity *pUVar9;
  UPolyEditInsertEdgeActivity *pUVar10;
  UPolyEditInsertEdgeLoopActivity *pUVar11;
  UPolyEditBevelEdgeActivity *pUVar12;
  UPolyEditExtrudeEdgeActivity *pUVar13;
  UPolygonSelectionMechanic *pUVar14;
  ulonglong uVar15;
  int iVar16;
  bool bVar17;
  bool bVar18;
  UInteractiveToolManager *pUVar19;
  TScriptInterface<IToolHostCustomizationAPI> *pTVar20;
  UContextObjectStore *this_00;
  UClass *pUVar21;
  UInteractiveGizmoManager *pUVar22;
  longlong lVar23;
  FText *pFVar24;
  FSharedReferencer<1> FVar25;
  wchar_t *pwVar26;
  FCompactMaps *pFVar27;
  FCompactMaps *pFVar28;
  bool bVar29;
  wchar_t *pwVar30;
  undefined1 auStackY_208 [32];
  FConversionToMeshDescriptionOptions local_1d8;
  FCompactMaps local_1c8;
  undefined8 local_1a8;
  FSharedReferencer<1> FStack_1a0;
  undefined8 local_198;
  FSharedReferencer<1> FStack_190;
  undefined8 local_188;
  FSharedReferencer<1> FStack_180;
  undefined8 local_178;
  FSharedReferencer<1> FStack_170;
  undefined8 local_168;
  FSharedReferencer<1> FStack_160;
  FString local_158;
  FString local_148;
  FString local_138;
  FText local_128;
  TScriptInterface<IToolHostCustomizationAPI> local_118;
  FDynamicMeshOpResult local_108;
  undefined1 local_a8 [8];
  ForAnyElementType local_a0;
  undefined8 local_98;
  TBitArray<FDefaultBitArrayAllocator> local_90;
  undefined8 uStack_70;
  ForElementType<FSetElementId> local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pFVar28 = (FCompactMaps *)0x0;
  if (this->bToolDisabled != false) {
    local_1a8 = 0;
    FStack_1a0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->CurrentMesh != (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)&local_1a8) {
      (this->CurrentMesh).Object = (FDynamicMesh3 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->CurrentMesh).SharedReferenceCount,&FStack_1a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_1a0.ReferenceController);
    local_198 = 0;
    FStack_190.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FVar25.ReferenceController = FStack_190.ReferenceController;
    if (&this->Topology != (TSharedPtr<UE::Geometry::FGroupTopology,1> *)&local_198) {
      (this->Topology).Object = (FGroupTopology *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Topology).SharedReferenceCount,&FStack_190);
      FVar25.ReferenceController = FStack_190.ReferenceController;
    }
    goto LAB_14cc69951;
  }
  if ((this->CurrentActivity).field0_0x0.DebugPtr != (UInteractiveToolActivity *)0x0) {
    pUVar19 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
    pTVar20 = IToolHostCustomizationAPI::Find(&local_118,pUVar19);
    if ((*(longlong *)pTVar20 != 0) && (*(longlong **)&pTVar20->field_0x8 != (longlong *)0x0)) {
      (**(code **)(**(longlong **)&pTVar20->field_0x8 + 0x30))();
    }
    pUVar1 = (this->CurrentActivity).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar1 + 0x310))(pUVar1,param_1);
    (this->CurrentActivity).field0_0x0.DebugPtr = (UInteractiveToolActivity *)0x0;
  }
  pUVar2 = (this->CommonProps).field0_0x0.DebugPtr;
  pwVar30 = L"PolyEditTool";
  pwVar26 = L"PolyEditTool";
  if (this->bTriangleMode != false) {
    pwVar26 = L"TriEditTool";
  }
  pcVar3 = *(code **)(pUVar2->_padding_ + 0x2b0);
  ::FString::FString(&local_158,pwVar26);
  (*pcVar3)(pUVar2,this,&local_158);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  pwVar26 = L"PolyEditTool";
  if (this->bTriangleMode != false) {
    pwVar26 = L"TriEditTool";
  }
  plVar4 = (longlong *)((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_;
  pcVar3 = *(code **)(*plVar4 + 0x2b0);
  ::FString::FString(&local_148,pwVar26);
  (*pcVar3)(plVar4,this,&local_148);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  pUVar5 = (this->TopologyProperties).field0_0x0.DebugPtr;
  if (this->bTriangleMode != false) {
    pwVar30 = L"TriEditTool";
  }
  pcVar3 = *(code **)(pUVar5->_padding_ + 0x2b0);
  ::FString::FString(&local_138,pwVar30);
  (*pcVar3)(pUVar5,this,&local_138);
  if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_138.Data.AllocatorInstance.Data);
  }
  pUVar19 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  this_00 = UInteractiveToolManager::GetContextObjectStore(pUVar19);
  pUVar21 = Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
  UContextObjectStore::RemoveContextObjectsOfType(this_00,pUVar21);
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  pUVar6 = (this->ExtrudeActivity).field0_0x0.DebugPtr;
  (**(code **)(pUVar6->_padding_ + 0x2e0))(pUVar6,param_1);
  pUVar7 = (this->InsetOutsetActivity).field0_0x0.DebugPtr;
  (**(code **)(pUVar7->_padding_ + 0x2e0))(pUVar7,param_1);
  pUVar8 = (this->CutFacesActivity).field0_0x0.DebugPtr;
  (**(code **)(pUVar8->_padding_ + 0x2e0))(pUVar8,param_1);
  pUVar9 = (this->PlanarProjectionUVActivity).field0_0x0.DebugPtr;
  (**(code **)(pUVar9->_padding_ + 0x2e0))(pUVar9,param_1);
  pUVar10 = (this->InsertEdgeActivity).field0_0x0.DebugPtr;
  (**(code **)(pUVar10->_padding_ + 0x2e0))(pUVar10,param_1);
  pUVar11 = (this->InsertEdgeLoopActivity).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar11 + 0x2e0))(pUVar11,param_1);
  pUVar12 = (this->BevelEdgeActivity).field0_0x0.DebugPtr;
  (**(code **)(pUVar12->_padding_ + 0x2e0))(pUVar12,param_1);
  pUVar13 = (this->ExtrudeEdgeActivity).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar13 + 0x2e0))(pUVar13,param_1);
  pUVar19 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar22 = UInteractiveToolManager::GetPairedGizmoManager(pUVar19);
  (**(code **)(pUVar22->_padding_ + 0x2e8))(pUVar22,this);
  (**(code **)(((this->DragAlignmentMechanic).field0_0x0.DebugPtr)->_padding_ + 0x2b8))();
  if ((this->Preview).field0_0x0.DebugPtr != (UMeshOpPreviewWithBackgroundCompute *)0x0) {
    UE::ToolTarget::ShowSourceObject((UToolTarget *)this->_padding_);
    if (param_1 == Accept) {
      pUVar14 = (this->SelectionMechanic).field0_0x0.DebugPtr;
      local_a8._0_4_ = Face;
      local_a0.Data = (FScriptContainerElement *)0x0;
      local_98 = 0;
      local_90.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_90.NumBits = ___xmm_00000000ffffffff0000008000000000;
      local_90.MaxBits = _UNK_150631d94;
      uStack_70 = _UNK_150631d98;
      local_60 = (ForElementType<FSetElementId>)0x0;
      local_58 = 0;
      if ((int)pUVar14->_padding_ - *(int *)((longlong)&pUVar14->_padding_ + 4) < 1) {
        if (0 < (int)pUVar14->_padding_ - *(int *)((longlong)&pUVar14->_padding_ + 4)) {
          local_a8._0_4_ = Edge;
        }
      }
      else {
        local_a8._0_4_ = Vertex;
      }
      local_1c8.VertMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1c8.VertMap.ArrayNum = 0;
      local_1c8.VertMap.ArrayMax = 0;
      local_1c8.TriMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8._4_4_ = Polygroup - (this->bTriangleMode != false);
      local_1c8.TriMap.ArrayNum = 0;
      local_1c8.TriMap.ArrayMax = 0;
      if ((((int)pUVar14->_padding_ == *(int *)((longlong)&pUVar14->_padding_ + 4)) &&
          ((int)pUVar14->_padding_ == *(int *)((longlong)&pUVar14->_padding_ + 4))) &&
         ((int)pUVar14->_padding_ == *(int *)((longlong)&pUVar14->_padding_ + 4))) {
        bVar18 = false;
      }
      else {
        bVar18 = true;
      }
      if (this->bTriangleMode == false) {
        bVar29 = true;
LAB_14cc69588:
        if (((this->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar17)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar27 = &local_1c8;
        if (!bVar18) {
          pFVar27 = pFVar28;
        }
        UE::Geometry::FDynamicMesh3::CompactInPlace((this->CurrentMesh).Object,pFVar27);
      }
      else {
        bVar29 = 0 < this->ModifiedTopologyCounter;
        if (0 < this->ModifiedTopologyCounter) goto LAB_14cc69588;
      }
      if (bVar18) {
        pUVar14 = (this->SelectionMechanic).field0_0x0.DebugPtr;
        if (this->bTriangleMode == false) {
          pFVar27 = &local_1c8;
          if (bVar29 == false) {
            pFVar27 = pFVar28;
          }
          UPolygonSelectionMechanic::GetSelection_AsGroupTopology
                    (pUVar14,(FGeometrySelection *)local_a8,pFVar27);
        }
        else {
          pFVar27 = &local_1c8;
          if (bVar29 == false) {
            pFVar27 = pFVar28;
          }
          UPolygonSelectionMechanic::GetSelection_AsTriangleTopology
                    (pUVar14,(FGeometrySelection *)local_a8,pFVar27);
        }
      }
      lVar23 = (**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar3 = *(code **)(*(longlong *)(lVar23 + 0x28) + 0x10);
      pFVar24 = FText::AsLocalizable_Advanced_LocText
                          (&local_128,L"UEditMeshPolygonsTool",
                           L"EditMeshPolygonsToolTransactionName",L"Deform Mesh");
      (*pcVar3)(lVar23 + 0x28,pFVar24);
      if (local_128.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_128.TextData.Reference + 0x10))();
      }
      if (((this->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      MeshTransforms::ApplyTransformInverse
                ((this->CurrentMesh).Object,&this->BakedTransform,true,All);
      local_1d8.bSetPolyGroups = true;
      local_1d8.bUpdatePositions = true;
      local_1d8.bUpdateNormals = true;
      local_1d8.bUpdateTangents = false;
      local_1d8.bUpdateUVs = false;
      local_1d8.bUpdateVtxColors = false;
      local_1d8.bTransformVtxColorsSRGBToLinear = true;
      local_1d8.bConvertBackToNonManifold = false;
      local_1d8.bSetHardEdgesFromNormalSeams = true;
      if (((this->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x44d,L""), bVar18)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UE::ToolTarget::CommitDynamicMeshUpdate
                ((UToolTarget *)this->_padding_,(this->CurrentMesh).Object,bVar29,&local_1d8,
                 (FComponentMaterialSet *)0x0);
      if ((int)local_98 != uStack_70._4_4_) {
        UE::Geometry::SetToolOutputGeometrySelectionForTarget
                  ((UInteractiveTool *)this,(UToolTarget *)this->_padding_,
                   (FGeometrySelection *)local_a8);
      }
      lVar23 = (**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*(longlong *)(lVar23 + 0x28) + 0x18))(lVar23 + 0x28);
      if (local_1c8.TriMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.TriMap.AllocatorInstance.Data);
      }
      if (local_1c8.VertMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.VertMap.AllocatorInstance.Data);
      }
      local_58 = 0;
      if (local_60 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_60);
      }
      uVar15 = local_98 >> 0x20;
      local_98 = local_98 & 0xffffffff00000000;
      if ((int)uVar15 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&local_a0,0,(int *)((longlong)&local_98 + 4));
      }
      iVar16 = local_90.MaxBits;
      uStack_70 = 0xffffffff;
      local_90._24_8_ = (ulonglong)(uint)local_90.MaxBits << 0x20;
      if (0x80 < (uint)iVar16) {
        local_90.NumBits = 0;
        local_90.MaxBits = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_90,0);
      }
      if (local_90.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_90.AllocatorInstance.SecondaryData);
      }
      if (local_a0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data);
      }
    }
    UMeshOpPreviewWithBackgroundCompute::Shutdown((this->Preview).field0_0x0.DebugPtr,&local_108);
    if (local_108.Mesh.Ptr != (FDynamicMesh3 *)0x0) {
      (**(code **)(local_108.Mesh.Ptr)->_padding_)(local_108.Mesh.Ptr,1);
    }
    (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  }
  (**(code **)(((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_ + 0x2b8))();
  (this->CommonProps).field0_0x0.DebugPtr = (UPolyEditCommonProperties *)0x0;
  (this->EditActions).field0_0x0.DebugPtr = (UEditMeshPolygonsToolActions *)0x0;
  (this->EditActions_Triangles).field0_0x0.DebugPtr = (UEditMeshPolygonsToolActions_Triangles *)0x0;
  (this->EditEdgeActions).field0_0x0.DebugPtr = (UEditMeshPolygonsToolEdgeActions *)0x0;
  (this->EditEdgeActions_Triangles).field0_0x0.DebugPtr =
       (UEditMeshPolygonsToolEdgeActions_Triangles *)0x0;
  (this->EditUVActions).field0_0x0.DebugPtr = (UEditMeshPolygonsToolUVActions *)0x0;
  (this->ExtrudeActivity).field0_0x0.DebugPtr = (UPolyEditExtrudeActivity *)0x0;
  (this->InsetOutsetActivity).field0_0x0.DebugPtr = (UPolyEditInsetOutsetActivity *)0x0;
  (this->CutFacesActivity).field0_0x0.DebugPtr = (UPolyEditCutFacesActivity *)0x0;
  (this->PlanarProjectionUVActivity).field0_0x0.DebugPtr =
       (UPolyEditPlanarProjectionUVActivity *)0x0;
  (this->InsertEdgeActivity).field0_0x0.DebugPtr = (UPolyEditInsertEdgeActivity *)0x0;
  (this->InsertEdgeLoopActivity).field0_0x0.DebugPtr = (UPolyEditInsertEdgeLoopActivity *)0x0;
  (this->BevelEdgeActivity).field0_0x0.DebugPtr = (UPolyEditBevelEdgeActivity *)0x0;
  (this->ExtrudeEdgeActivity).field0_0x0.DebugPtr = (UPolyEditExtrudeEdgeActivity *)0x0;
  (this->SelectionMechanic).field0_0x0.DebugPtr = (UPolygonSelectionMechanic *)0x0;
  (this->DragAlignmentMechanic).field0_0x0.DebugPtr = (UDragAlignmentMechanic *)0x0;
  (this->TransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->TransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  local_188 = 0;
  FStack_180.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->CurrentMesh != (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)&local_188) {
    (this->CurrentMesh).Object = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CurrentMesh).SharedReferenceCount,&FStack_180);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_180.ReferenceController);
  local_178 = 0;
  FStack_170.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Topology != (TSharedPtr<UE::Geometry::FGroupTopology,1> *)&local_178) {
    (this->Topology).Object = (FGroupTopology *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Topology).SharedReferenceCount,&FStack_170);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_170.ReferenceController);
  local_168 = 0;
  FStack_160.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FVar25.ReferenceController = FStack_160.ReferenceController;
  if (&this->MeshSpatial !=
      (TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *)&local_168) {
    (this->MeshSpatial).Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MeshSpatial).SharedReferenceCount,&FStack_160);
    FVar25.ReferenceController = FStack_160.ReferenceController;
  }
LAB_14cc69951:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar25.ReferenceController);
  return;
}

// OnTick @ 14cc6af40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::OnTick(UEditMeshPolygonsTool *this,float param_1)

{
  UInteractiveToolActivity *pUVar1;
  UPolyEditCommonProperties *pUVar2;
  code *pcVar3;
  UPolygonSelectionMechanic *pUVar4;
  FGroupTopology *pFVar5;
  char cVar6;
  bool bVar7;
  UInteractiveToolManager *this_00;
  UInteractiveGizmoManager *pUVar8;
  longlong *plVar9;
  FText *pFVar10;
  FGeometrySelection *pFVar11;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8 [4];
  undefined1 local_2b4 [8];
  undefined1 local_2ac [8];
  undefined1 local_2a4 [8];
  undefined1 local_29c [8];
  undefined1 local_294 [12];
  UPolyEditExtrudeEdgeActivity *local_288;
  TObjectPtr<UPolyEditExtrudeActivity>_u_0 local_280;
  TObjectPtr<UPolyEditExtrudeActivity>_u_0 local_278;
  FName local_270;
  UPolyEditExtrudeActivity *local_268;
  TObjectPtr<UPolyEditExtrudeActivity>_u_0 local_260;
  TObjectPtr<UPolyEditExtrudeActivity>_u_0 local_258;
  FName local_250;
  UPolyEditExtrudeActivity *local_248;
  TObjectPtr<UPolyEditExtrudeActivity>_u_0 local_240;
  TObjectPtr<UPolyEditExtrudeActivity>_u_0 local_238;
  FName local_230;
  UPolyEditExtrudeActivity *local_228;
  TObjectPtr<UPolyEditInsetOutsetActivity>_u_0 local_220;
  TObjectPtr<UPolyEditInsetOutsetActivity>_u_0 local_218;
  FName local_210;
  UPolyEditInsetOutsetActivity *local_208;
  TObjectPtr<UPolyEditInsetOutsetActivity>_u_0 local_200;
  TObjectPtr<UPolyEditInsetOutsetActivity>_u_0 local_1f8;
  FName local_1f0;
  UPolyEditInsetOutsetActivity *local_1e8;
  UPolyEditCutFacesActivity *local_1e0;
  UPolyEditPlanarProjectionUVActivity *local_1d8;
  UPolyEditInsertEdgeActivity *local_1d0;
  UPolyEditInsertEdgeLoopActivity *local_1c8;
  UPolyEditExtrudeEdgeActivity *local_1c0;
  UPolyEditBevelEdgeActivity *local_1b8;
  TObjectPtr<UPolyEditExtrudeActivity>_u_0 *local_1b0;
  FText *local_1a8;
  TObjectPtr<UPolyEditExtrudeActivity>_u_0 *local_1a0;
  FName *local_198;
  TObjectPtr<UPolyEditExtrudeActivity>_u_0 *local_190;
  FText *local_188;
  TObjectPtr<UPolyEditExtrudeActivity>_u_0 *local_180;
  FName *local_178;
  TObjectPtr<UPolyEditExtrudeActivity>_u_0 *local_170;
  FText *local_168;
  TObjectPtr<UPolyEditExtrudeActivity>_u_0 *local_160;
  FName *local_158;
  TObjectPtr<UPolyEditInsetOutsetActivity>_u_0 *local_150;
  FText *local_148;
  TObjectPtr<UPolyEditInsetOutsetActivity>_u_0 *local_140;
  FName *local_138;
  TObjectPtr<UPolyEditInsetOutsetActivity>_u_0 *local_130;
  FText *local_128;
  TObjectPtr<UPolyEditInsetOutsetActivity>_u_0 *local_120;
  FName *local_118;
  code *local_110;
  undefined1 *local_108;
  FText local_100;
  FText local_f0;
  FText local_e0;
  FText local_d0;
  FText local_c0;
  FText local_b0;
  FText local_a0;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  void *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  if (this->bToolDisabled == false) {
    UMeshOpPreviewWithBackgroundCompute::Tick((this->Preview).field0_0x0.DebugPtr,param_1);
    pUVar1 = (this->CurrentActivity).field0_0x0.DebugPtr;
    if (pUVar1 != (UInteractiveToolActivity *)0x0) {
      (**(code **)(*(longlong *)pUVar1 + 0x2c8))();
    }
    this_00 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pUVar8 = UInteractiveToolManager::GetPairedGizmoManager(this_00);
    plVar9 = (longlong *)(**(code **)(pUVar8->_padding_ + 0x328))(pUVar8);
    cVar6 = (**(code **)(*plVar9 + 0x20))(plVar9);
    pUVar2 = (this->CommonProps).field0_0x0.DebugPtr;
    if (pUVar2->bLocalCoordSystem != (cVar6 == '\x01')) {
      pUVar2->bLocalCoordSystem = cVar6 == '\x01';
      (**(code **)(this->_padding_ + 0x340))(this,(this->CommonProps).field0_0x0.DebugPtr);
    }
    if (this->bGizmoUpdatePending != false) {
      ComputeUpdate_Gizmo(this);
    }
    if (this->bSelectionStateDirty != false) {
      UPreviewMesh::FastNotifySecondaryTrianglesChanged
                ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr);
      UpdateGizmoVisibility(this);
      this->bSelectionStateDirty = false;
    }
    if (this->PendingAction != NoAction) {
      plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar3 = *(code **)(*plVar9 + 0x360);
      pFVar10 = FText::FText(&local_100);
      (*pcVar3)(plVar9,pFVar10,3);
      if (local_100.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_100.TextData.Reference + 0x10))();
      }
      switch(this->PendingAction) {
      case Extrude:
        pUVar4 = (this->SelectionMechanic).field0_0x0.DebugPtr;
        if (((int)pUVar4->_padding_ == *(int *)((longlong)&pUVar4->_padding_ + 4)) &&
           ((int)pUVar4->_padding_ != *(int *)((longlong)&pUVar4->_padding_ + 4))) {
          local_288 = (this->ExtrudeEdgeActivity).field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_288 != (UPolyEditExtrudeEdgeActivity *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_288);
          }
          StartActivity(this,(TObjectPtr<UInteractiveToolActivity>)&local_288);
        }
        else {
          ((this->ExtrudeActivity).field0_0x0.DebugPtr)->ExtrudeMode = MoveAndStitch;
          ((this->ExtrudeActivity).field0_0x0.DebugPtr)->PropertySetToUse = Extrude;
          local_1a8 = FText::AsLocalizable_Advanced_LocText
                                (&local_f0,L"UEditMeshPolygonsTool",L"ExtrudeActivityLabel",
                                 L"Extrude");
          local_280 = (this->ExtrudeActivity).field0_0x0;
          local_1b0 = &local_280;
          TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&>_>
                    ((TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
                      *)&this->ActivityLabels,
                     (TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&> *)local_2b4,
                     (bool *)&local_1b0);
          if (local_f0.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
          }
          ::FName::FName(&local_270,"PolyEd.Extrude");
          local_278 = (this->ExtrudeActivity).field0_0x0;
          local_1a0 = &local_278;
          local_198 = &local_270;
          TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&>_>
                    ((TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
                      *)&this->ActivityIconNames,
                     (TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&> *)(local_2b4 + 4),
                     (bool *)&local_1a0);
          local_268 = (this->ExtrudeActivity).field0_0x0.DebugPtr;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_268 != (UPolyEditExtrudeActivity *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_268);
          }
          StartActivity(this,(TObjectPtr<UInteractiveToolActivity>)&local_268);
        }
        break;
      case PushPull:
        ((this->ExtrudeActivity).field0_0x0.DebugPtr)->ExtrudeMode = Boolean;
        ((this->ExtrudeActivity).field0_0x0.DebugPtr)->PropertySetToUse = PushPull;
        local_188 = FText::AsLocalizable_Advanced_LocText
                              (&local_e0,L"UEditMeshPolygonsTool",L"PushPullActivityLabel",
                               L"Push/Pull");
        local_260 = (this->ExtrudeActivity).field0_0x0;
        local_190 = &local_260;
        TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&>_>
                  ((TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
                    *)&this->ActivityLabels,
                   (TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&> *)local_2ac,
                   (bool *)&local_190);
        if (local_e0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
        }
        ::FName::FName(&local_250,"PolyEd.PushPull");
        local_258 = (this->ExtrudeActivity).field0_0x0;
        local_180 = &local_258;
        local_178 = &local_250;
        TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&>_>
                  ((TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
                    *)&this->ActivityIconNames,
                   (TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&> *)(local_2ac + 4),
                   (bool *)&local_180);
        local_248 = (this->ExtrudeActivity).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_248 != (UPolyEditExtrudeActivity *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_248);
        }
        StartActivity(this,(TObjectPtr<UInteractiveToolActivity>)&local_248);
        break;
      case Offset:
        ((this->ExtrudeActivity).field0_0x0.DebugPtr)->ExtrudeMode = MoveAndStitch;
        ((this->ExtrudeActivity).field0_0x0.DebugPtr)->PropertySetToUse = Offset;
        local_168 = FText::AsLocalizable_Advanced_LocText
                              (&local_d0,L"UEditMeshPolygonsTool",L"OffsetActivityLabel",L"Offset");
        local_240 = (this->ExtrudeActivity).field0_0x0;
        local_170 = &local_240;
        TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&>_>
                  ((TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
                    *)&this->ActivityLabels,
                   (TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&> *)local_2a4,
                   (bool *)&local_170);
        if (local_d0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
        }
        ::FName::FName(&local_230,"PolyEd.Offset");
        local_238 = (this->ExtrudeActivity).field0_0x0;
        local_160 = &local_238;
        local_158 = &local_230;
        TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&>_>
                  ((TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
                    *)&this->ActivityIconNames,
                   (TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&> *)(local_2a4 + 4),
                   (bool *)&local_160);
        local_228 = (this->ExtrudeActivity).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_228 != (UPolyEditExtrudeActivity *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_228);
        }
        StartActivity(this,(TObjectPtr<UInteractiveToolActivity>)&local_228);
        break;
      case Inset:
        ((((this->InsetOutsetActivity).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->bOutset
             = false;
        local_148 = FText::AsLocalizable_Advanced_LocText
                              (&local_c0,L"UEditMeshPolygonsTool",L"InsetActivityLabel",L"Inset");
        local_220 = (this->InsetOutsetActivity).field0_0x0;
        local_150 = &local_220;
        TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&>_>
                  ((TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
                    *)&this->ActivityLabels,
                   (TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&> *)local_29c,
                   (bool *)&local_150);
        if (local_c0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_c0.TextData.Reference + 0x10))();
        }
        ::FName::FName(&local_210,"PolyEd.Inset");
        local_218 = (this->InsetOutsetActivity).field0_0x0;
        local_140 = &local_218;
        local_138 = &local_210;
        TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&>_>
                  ((TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
                    *)&this->ActivityIconNames,
                   (TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&> *)(local_29c + 4),
                   (bool *)&local_140);
        local_208 = (this->InsetOutsetActivity).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_208 != (UPolyEditInsetOutsetActivity *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_208);
        }
        StartActivity(this,(TObjectPtr<UInteractiveToolActivity>)&local_208);
        break;
      case Outset:
        ((((this->InsetOutsetActivity).field0_0x0.DebugPtr)->Settings).field0_0x0.DebugPtr)->bOutset
             = true;
        local_128 = FText::AsLocalizable_Advanced_LocText
                              (&local_b0,L"UEditMeshPolygonsTool",L"OutsetActivityLabel",L"Outset");
        local_200 = (this->InsetOutsetActivity).field0_0x0;
        local_130 = &local_200;
        TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&>_>
                  ((TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
                    *)&this->ActivityLabels,
                   (TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&> *)local_294,
                   (bool *)&local_130);
        if (local_b0.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_b0.TextData.Reference + 0x10))();
        }
        ::FName::FName(&local_1f0,"PolyEd.Outset");
        local_1f8 = (this->InsetOutsetActivity).field0_0x0;
        local_120 = &local_1f8;
        local_118 = &local_1f0;
        TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&>_>
                  ((TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
                    *)&this->ActivityIconNames,
                   (TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&> *)(local_294 + 4),
                   (bool *)&local_120);
        local_1e8 = (this->InsetOutsetActivity).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_1e8 != (UPolyEditInsetOutsetActivity *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1e8);
        }
        StartActivity(this,(TObjectPtr<UInteractiveToolActivity>)&local_1e8);
        break;
      case BevelFaces:
      case BevelEdges:
        local_1b8 = (this->BevelEdgeActivity).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_1b8 != (UPolyEditBevelEdgeActivity *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1b8);
        }
        StartActivity(this,(TObjectPtr<UInteractiveToolActivity>)&local_1b8);
        break;
      case InsertEdge:
        local_1d0 = (this->InsertEdgeActivity).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_1d0 != (UPolyEditInsertEdgeActivity *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1d0);
        }
        StartActivity(this,(TObjectPtr<UInteractiveToolActivity>)&local_1d0);
        break;
      case InsertEdgeLoop:
        local_1c8 = (this->InsertEdgeLoopActivity).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_1c8 != (UPolyEditInsertEdgeLoopActivity *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1c8);
        }
        StartActivity(this,(TObjectPtr<UInteractiveToolActivity>)&local_1c8);
        break;
      case Merge:
        ApplyMerge(this);
        break;
      case Delete:
        bVar7 = BeginMeshFaceEditChange(this);
        if (bVar7) {
          ApplyDeleteFaces(this);
        }
        else {
          local_108 = local_2b8;
          local_110 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UEditMeshPolygonsTool::BeginMeshEdgeEditChange'::__l2::<lambda_1>,bool,int>
                      ::Call;
          bVar7 = BeginMeshEdgeEditChange(this,(TFunctionRef<bool___cdecl(int)> *)&local_110);
          if (bVar7) {
            ApplyDeleteEdges(this);
          }
          else {
            plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
            pcVar3 = *(code **)(*plVar9 + 0x360);
            pFVar10 = FText::AsLocalizable_Advanced_LocText
                                (&local_a0,L"UEditMeshPolygonsTool",L"OnDeleteFailedMessage",
                                 L"Cannot Delete Current Selection");
            (*pcVar3)(plVar9,pFVar10,3);
            if (local_a0.TextData.Reference != (ITextData *)0x0) {
              (**(code **)((longlong)*local_a0.TextData.Reference + 0x10))();
            }
          }
        }
        break;
      case CutFaces:
        local_1e0 = (this->CutFacesActivity).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_1e0 != (UPolyEditCutFacesActivity *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1e0);
        }
        StartActivity(this,(TObjectPtr<UInteractiveToolActivity>)&local_1e0);
        break;
      case RecalculateNormals:
        ApplyRecalcNormals(this);
        break;
      case FlipNormals:
        ApplyFlipNormals(this);
        break;
      case Retriangulate:
        ApplyRetriangulate(this);
        break;
      case Decompose:
        ApplyDecompose(this);
        break;
      case Disconnect:
        ApplyDisconnect(this);
        break;
      case Duplicate:
        ApplyDuplicate(this);
        break;
      case CollapseEdge:
      case CollapseSingleEdge:
        ApplyCollapseEdge(this);
        break;
      case WeldEdges:
        ApplyWeldEdges(this,0.0);
        break;
      case WeldEdgesCentered:
        ApplyWeldEdges(this,__real_3fe0000000000000);
        break;
      case StraightenEdge:
        ApplyStraightenEdges(this);
        break;
      case FillHole:
        ApplyFillHole(this);
        break;
      case BridgeEdges:
        ApplyBridgeEdges(this);
        break;
      case ExtrudeEdges:
        if ((((this->bTerminateOnPendingActionComplete != false) &&
             (cVar6 = (**(code **)(this->_padding_ + 0x3d8))(this), cVar6 != '\0')) &&
            (pFVar11 = (FGeometrySelection *)(**(code **)(this->_padding_ + 0x3e0))(this),
            pFVar11->TopologyType == Polygroup)) && (this->bTriangleMode == false)) {
          local_88._0_8_ = 0;
          local_88._8_8_ = 0;
          local_88._32_8_ = 0;
          local_88._40_4_ = 0;
          local_88._44_4_ = 0x80;
          local_88._48_4_ = 0xffffffff;
          local_88._52_4_ = 0;
          local_48 = (void *)0x0;
          local_40 = 0;
          if (((this->Topology).Object == (FGroupTopology *)0x0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar5 = (this->Topology).Object;
          (**(code **)(pFVar5->_padding_ + 0x10))(pFVar5,&local_88);
          UMeshTopologySelectionMechanic::NotifyMeshChanged
                    ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr
                     ,true);
          UPolygonSelectionMechanic::SetSelection_AsGroupTopology
                    ((this->SelectionMechanic).field0_0x0.DebugPtr,pFVar11);
          local_40 = 0;
          if (local_48 != (void *)0x0) {
            FMemory::Free(local_48);
          }
          TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&local_88);
        }
        local_1c0 = (this->ExtrudeEdgeActivity).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_1c0 != (UPolyEditExtrudeEdgeActivity *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1c0);
        }
        StartActivity(this,(TObjectPtr<UInteractiveToolActivity>)&local_1c0);
        break;
      case SimplifyAlongEdges:
        ApplySimplifyAlongEdges(this);
        break;
      case PlanarProjectionUV:
        local_1d8 = (this->PlanarProjectionUVActivity).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_1d8 != (UPolyEditPlanarProjectionUVActivity *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_1d8);
        }
        StartActivity(this,(TObjectPtr<UInteractiveToolActivity>)&local_1d8);
        break;
      case SimplifyByGroups:
        SimplifyByGroups(this);
        break;
      case RegenerateExtraCorners:
        ApplyRegenerateExtraCorners(this);
        break;
      case PokeSingleFace:
        ApplyPokeSingleFace(this);
        break;
      case SplitSingleEdge:
        ApplySplitSingleEdge(this);
        break;
      case FlipSingleEdge:
        ApplyFlipSingleEdge(this);
      }
      this->PendingAction = NoAction;
    }
  }
  return;
}

// RebuildTopologyWithGivenExtraCorners @ 14cc6cb10

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
UEditMeshPolygonsTool::RebuildTopologyWithGivenExtraCorners
          (UEditMeshPolygonsTool *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  FGroupTopology *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Topology).Object == (FGroupTopology *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Topology).Object;
  (**(code **)(pFVar1->_padding_ + 0x10))(pFVar1,param_1);
  UMeshTopologySelectionMechanic::NotifyMeshChanged
            ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr,true);
  return;
}

// RegisterActions @ 14cc6e9b0

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
UEditMeshPolygonsTool::RegisterActions
          (UEditMeshPolygonsTool *this,FInteractiveToolActionSet *param_1)

{
  FText *pFVar1;
  FText *pFVar2;
  FString local_88;
  FText local_78;
  FText local_68;
  code *local_58 [2];
  undefined **local_48;
  UEditMeshPolygonsTool *local_40;
  undefined8 local_30;
  
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UEditMeshPolygonsTool::RegisterActions'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UEditMeshPolygonsTool::RegisterActions'::__l2::<lambda_1>,void>
                ::Call;
  local_30 = 0;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UEditMeshPolygonsTool",L"ToggleLockRotationTooltip",
                      L"Toggle Frame Rotation Lock on and off");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UEditMeshPolygonsTool",L"ToggleLockRotationUIName",
                      L"Lock Rotation");
  ::FString::FString(&local_88,L"ToggleLockRotation");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2712,&local_88,pFVar2,pFVar1,'\x01',&EKeys::R,
             (TFunction<void___cdecl(void)> *)local_58);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  local_30 = 0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UEditMeshPolygonsTool::RegisterActions'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UEditMeshPolygonsTool::RegisterActions'::__l2::<lambda_2>,void>
                ::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UEditMeshPolygonsTool",L"DeleteSelectionTooltip",
                      L"Delete Selection");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UEditMeshPolygonsTool",L"DeleteSelectionUIName",
                      L"Delete Selection");
  ::FString::FString(&local_88,L"DeleteSelectionBackSpaceKey");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2713,&local_88,pFVar2,pFVar1,'\0',&EKeys::BackSpace,
             (TFunction<void___cdecl(void)> *)local_58);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  local_30 = 0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UEditMeshPolygonsTool::RegisterActions'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UEditMeshPolygonsTool::RegisterActions'::__l2::<lambda_2>,void>
                ::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UEditMeshPolygonsTool",L"DeleteSelectionTooltip",
                      L"Delete Selection");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UEditMeshPolygonsTool",L"DeleteSelectionUIName",
                      L"Delete Selection");
  ::FString::FString(&local_88,L"DeleteSelectionDeleteKey");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2714,&local_88,pFVar2,pFVar1,'\0',&EKeys::Delete,
             (TFunction<void___cdecl(void)> *)local_58);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  local_30 = 0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UEditMeshPolygonsTool::RegisterActions'::`2'::<lambda_3>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UEditMeshPolygonsTool::RegisterActions'::__l2::<lambda_3>,void>
                ::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UEditMeshPolygonsTool",L"ToggleGizmoVisibilityTooltip",
                      L"Toggle the visibility of the transform gizmo");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UEditMeshPolygonsTool",L"ToggleGizmoVisibilityUIName",
                      L"Toggle Transform Gizmo Visibility");
  ::FString::FString(&local_88,L"ToggleGizmoVisibilityKey");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2715,&local_88,pFVar2,pFVar1,'\0',&EKeys::Invalid,
             (TFunction<void___cdecl(void)> *)local_58);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return;
}

// Render @ 14cc732c0

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
UEditMeshPolygonsTool::Render(UEditMeshPolygonsTool *this,IToolsContextRenderAPI *param_1)

{
  UPolygonSelectionMechanic *pUVar1;
  UDragAlignmentMechanic *pUVar2;
  UInteractiveToolActivity *pUVar3;
  
  if (this->bToolDisabled == false) {
    UPreviewMesh::EnableWireframe
              ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
               ((this->CommonProps).field0_0x0.DebugPtr)->bShowWireframe);
    pUVar1 = (this->SelectionMechanic).field0_0x0.DebugPtr;
    (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,param_1);
    pUVar2 = (this->DragAlignmentMechanic).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2,param_1);
    pUVar3 = (this->CurrentActivity).field0_0x0.DebugPtr;
    if (pUVar3 != (UInteractiveToolActivity *)0x0) {
      (**(code **)(*(longlong *)pUVar3 + 0x2c0))(pUVar3,param_1);
    }
  }
  return;
}

// RequestAction @ 14cc73380

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
UEditMeshPolygonsTool::RequestAction
          (UEditMeshPolygonsTool *this,EEditMeshPolygonsToolActions param_1)

{
  UPolygonSelectionMechanic *pUVar1;
  code *pcVar2;
  longlong *plVar3;
  FText *pFVar4;
  FText local_18;
  
  pUVar1 = (this->SelectionMechanic).field0_0x0.DebugPtr;
  if ((pUVar1 == (UPolygonSelectionMechanic *)0x0) || ((char)pUVar1->_padding_ == '\0')) {
    if (this->PendingAction == NoAction) {
      this->PendingAction = param_1;
    }
  }
  else {
    this->PendingAction = NoAction;
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
    pcVar2 = *(code **)(*plVar3 + 0x360);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UEditMeshPolygonsTool",L"CannotActDuringMarquee",
                        L"Cannot perform action while marquee selecting");
    (*pcVar2)(plVar3,pFVar4,3);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      return;
    }
  }
  return;
}

// RequestSingleShotAction @ 14cc73430

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
UEditMeshPolygonsTool::RequestSingleShotAction
          (UEditMeshPolygonsTool *this,EEditMeshPolygonsToolActions param_1)

{
  UPolygonSelectionMechanic *pUVar1;
  
  this->bTerminateOnPendingActionComplete = true;
  if ((param_1 == BevelAuto) &&
     (pUVar1 = (this->SelectionMechanic).field0_0x0.DebugPtr, param_1 = BevelFaces,
     0 < (int)pUVar1->_padding_ - *(int *)((longlong)&pUVar1->_padding_ + 4))) {
    param_1 = BevelEdges;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cc73469. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 1000))(this,param_1);
  return;
}

// ResetUserMessage @ 14cc73570

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::ResetUserMessage(UEditMeshPolygonsTool *this)

{
  code *pcVar1;
  char cVar2;
  longlong *plVar3;
  FText *pFVar4;
  FText local_18;
  
  cVar2 = (**(code **)(*(longlong *)(this->TransformGizmo).field0_0x0.DebugPtr + 0x368))();
  pcVar1 = *(code **)(this->_padding_ + 0x2d8);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)(*pcVar1)(this);
                    /* WARNING: Could not recover jumptable at 0x00014cc73619. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x360))(plVar3,&this->DefaultMessage,2,*(code **)(*plVar3 + 0x360));
    return;
  }
  plVar3 = (longlong *)(*pcVar1)();
  pcVar1 = *(code **)(*plVar3 + 0x360);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UEditMeshPolygonsTool",L"ToggleTransformGizmoNotify",
                      L"Transform gizmo hidden, unhide by toggling \"Gizmo Visible\" (or using hotkey, if set)"
                     );
  (*pcVar1)(plVar3,pFVar4,2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// SetActionButtonPanelsVisible @ 14cc74a10

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
UEditMeshPolygonsTool::SetActionButtonPanelsVisible(UEditMeshPolygonsTool *this,bool param_1)

{
  UEditMeshPolygonsToolActions *pUVar1;
  UEditMeshPolygonsToolEdgeActions *pUVar2;
  UEditMeshPolygonsToolActions_Triangles *pUVar3;
  UEditMeshPolygonsToolUVActions *pUVar4;
  
  if (this->bTriangleMode == false) {
    pUVar1 = (this->EditActions).field0_0x0.DebugPtr;
    if (pUVar1 != (UEditMeshPolygonsToolActions *)0x0) {
      (**(code **)(this->_padding_ + 0x338))(this,pUVar1,param_1);
    }
    pUVar2 = (this->EditEdgeActions).field0_0x0.DebugPtr;
    if (pUVar2 != (UEditMeshPolygonsToolEdgeActions *)0x0) {
      (**(code **)(this->_padding_ + 0x338))(this,pUVar2,param_1);
    }
    pUVar4 = (this->EditUVActions).field0_0x0.DebugPtr;
  }
  else {
    pUVar3 = (this->EditActions_Triangles).field0_0x0.DebugPtr;
    if (pUVar3 != (UEditMeshPolygonsToolActions_Triangles *)0x0) {
      (**(code **)(this->_padding_ + 0x338))(this,pUVar3,param_1);
    }
    pUVar4 = (UEditMeshPolygonsToolUVActions *)(this->EditEdgeActions_Triangles).field0_0x0.DebugPtr
    ;
  }
  if (pUVar4 != (UEditMeshPolygonsToolUVActions *)0x0) {
    (**(code **)(this->_padding_ + 0x338))(this,pUVar4,param_1);
  }
  return;
}

// SetToSelectionModeInterface @ 14cc75d10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::SetToSelectionModeInterface(UEditMeshPolygonsTool *this)

{
  UEditMeshPolygonsToolActions *pUVar1;
  UEditMeshPolygonsToolEdgeActions *pUVar2;
  UEditMeshPolygonsToolUVActions *pUVar3;
  
  pUVar1 = (this->EditActions).field0_0x0.DebugPtr;
  if (pUVar1 != (UEditMeshPolygonsToolActions *)0x0) {
    (**(code **)(this->_padding_ + 0x338))(this,pUVar1,0);
  }
  pUVar2 = (this->EditEdgeActions).field0_0x0.DebugPtr;
  if (pUVar2 != (UEditMeshPolygonsToolEdgeActions *)0x0) {
    (**(code **)(this->_padding_ + 0x338))(this,pUVar2,0);
  }
  pUVar3 = (this->EditUVActions).field0_0x0.DebugPtr;
  if (pUVar3 != (UEditMeshPolygonsToolUVActions *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cc75d66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x338))(this,pUVar3,0);
    return;
  }
  return;
}

// Setup @ 14cc7c7e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::Setup(UEditMeshPolygonsTool *this)

{
  int *piVar1;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *this_00;
  TSharedPtr<UE::Geometry::FGroupTopology,1> *this_01;
  TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *pTVar2;
  undefined8 *puVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  double dVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  TConsoleVariableData<int> *pTVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  FDynamicMesh3 *pFVar17;
  TPropertyWatcher<ELocalFrameMode> *pTVar18;
  TTransform<double> *pTVar19;
  longlong *plVar20;
  FText *pFVar21;
  FTextFormat *pFVar22;
  UClass *pUVar23;
  UPolyEditTopologyProperties *pUVar24;
  FGroupTopology *pFVar25;
  UObject *pUVar26;
  UEditMeshPolygonsToolActions_Triangles *pUVar27;
  UEditMeshPolygonsToolEdgeActions_Triangles *pUVar28;
  UEditMeshPolygonsToolActions *pUVar29;
  UEditMeshPolygonsToolEdgeActions *pUVar30;
  UEditMeshPolygonsToolUVActions *pUVar31;
  UPolyEditCommonProperties *pUVar32;
  void *this_02;
  UMeshOpPreviewWithBackgroundCompute *pUVar33;
  UWorld *pUVar34;
  UInteractiveToolManager *pUVar35;
  UMaterialInterface *pUVar36;
  ulong64 uVar37;
  UPolygonSelectionMechanic *pUVar38;
  FGeometrySelection *pFVar39;
  TAxisAlignedBox3<double> *pTVar40;
  UPolyEditActivityContext *pUVar41;
  UContextObjectStore *pUVar42;
  UPolyEditExtrudeActivity *pUVar43;
  UPolyEditInsetOutsetActivity *pUVar44;
  UPolyEditCutFacesActivity *pUVar45;
  UPolyEditPlanarProjectionUVActivity *pUVar46;
  UPolyEditInsertEdgeLoopActivity *pUVar47;
  UPolyEditInsertEdgeActivity *pUVar48;
  ForElementType<FSetElementId> FVar49;
  UPolyEditBevelEdgeActivity *pUVar50;
  UPolyEditExtrudeEdgeActivity *pUVar51;
  UInteractiveGizmoManager *pUVar52;
  UCombinedTransformGizmo *pUVar53;
  UTransformProxy *pUVar54;
  longlong lVar55;
  UDragAlignmentMechanic *pUVar56;
  undefined8 uVar57;
  ForAnyElementType FVar58;
  undefined ***pppuVar59;
  longlong *plVar60;
  wchar_t *pwVar61;
  FScriptContainerElement *pFVar62;
  undefined8 *puVar63;
  int iVar64;
  FScriptContainerElement *pFVar65;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar66;
  TPropertyWatcher<ELocalFrameMode> *pTVar67;
  double dVar68;
  double dVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auStackY_18b8 [32];
  undefined1 local_1878;
  undefined1 local_1877 [15];
  UEditMeshPolygonsTool *local_1868;
  undefined4 uStack_1860;
  uint uStack_185c;
  FDynamicMesh3 *local_1858;
  FSharedReferencer<1> FStack_1850;
  FDynamicMesh3 *local_1848;
  FSharedReferencer<1> FStack_1840;
  TSharedPtr<UE::Geometry::FGroupTopology,1> local_1838;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_1828;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> local_1818;
  FGetMeshParameters local_1808;
  UEditMeshPolygonsTool *local_17f8;
  undefined4 uStack_17f0;
  uint uStack_17ec;
  FString local_17e8;
  undefined1 local_17d8 [8];
  undefined1 local_17d0 [8];
  UEditMeshPolygonsTool *local_17c8;
  UEditMeshPolygonsTool *local_17c0;
  UEditMeshPolygonsTool *local_17b8;
  UEditMeshPolygonsTool *local_17b0;
  UEditMeshPolygonsTool *local_17a8;
  UEditMeshPolygonsTool *local_17a0;
  TObjectPtr<UPolyEditCutFacesActivity>_u_0 local_1798;
  TObjectPtr<UPolyEditCutFacesActivity>_u_0 local_1790;
  FName local_1788;
  TObjectPtr<UPolyEditPlanarProjectionUVActivity>_u_0 local_1780;
  TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&> local_1778;
  TObjectPtr<UPolyEditInsertEdgeLoopActivity>_u_0 local_1768;
  TObjectPtr<UPolyEditInsertEdgeLoopActivity>_u_0 local_1760;
  FName local_1758;
  TObjectPtr<UPolyEditInsertEdgeActivity>_u_0 local_1750;
  TObjectPtr<UPolyEditInsertEdgeActivity>_u_0 local_1748;
  FName local_1740;
  TObjectPtr<UPolyEditBevelEdgeActivity>_u_0 local_1738;
  TObjectPtr<UPolyEditBevelEdgeActivity>_u_0 local_1730;
  FName local_1728;
  TObjectPtr<UPolyEditExtrudeEdgeActivity>_u_0 local_1720;
  undefined1 local_1718 [16];
  UEditMeshPolygonsTool *local_1708;
  undefined1 local_1700 [8];
  TObjectPtr<UPolyEditPlanarProjectionUVActivity>_u_0 local_16f8;
  undefined1 local_16f0 [16];
  int local_16e0;
  undefined1 local_16d8 [8];
  TObjectPtr<UPolyEditExtrudeEdgeActivity>_u_0 local_16d0;
  code *local_16c8;
  undefined **local_16b8;
  UEditMeshPolygonsTool *local_16b0;
  undefined ***local_16a0;
  TObjectPtr<UPolyEditInsertEdgeActivity>_u_0 *local_1698;
  FName *local_1690;
  TObjectPtr<UPolyEditBevelEdgeActivity>_u_0 *local_1688;
  FText *local_1680;
  TObjectPtr<UPolyEditBevelEdgeActivity>_u_0 *local_1678;
  FName *local_1670;
  TObjectPtr<UPolyEditExtrudeEdgeActivity>_u_0 *local_1668;
  FText *local_1660;
  TObjectPtr<UPolyEditExtrudeEdgeActivity>_u_0 *local_1658;
  undefined1 *local_1650;
  FString local_1648;
  FString local_1638;
  FString local_1628;
  TObjectPtr<UPolyEditCutFacesActivity>_u_0 *local_1618;
  FText *local_1610;
  TObjectPtr<UPolyEditCutFacesActivity>_u_0 *local_1608;
  FName *local_1600;
  TObjectPtr<UPolyEditPlanarProjectionUVActivity>_u_0 *local_15f8;
  FText *local_15f0;
  TObjectPtr<UPolyEditPlanarProjectionUVActivity>_u_0 *local_15e8;
  undefined1 *local_15e0;
  TObjectPtr<UPolyEditInsertEdgeLoopActivity>_u_0 *local_15d8;
  FText *local_15d0;
  TObjectPtr<UPolyEditInsertEdgeLoopActivity>_u_0 *local_15c8;
  FName *local_15c0;
  TObjectPtr<UPolyEditInsertEdgeActivity>_u_0 *local_15b8;
  FText *local_15b0;
  double local_1598;
  undefined1 local_1590 [16];
  undefined1 local_1580 [16];
  undefined1 local_1570 [24];
  FText local_1558;
  FText local_1548;
  FText local_1538;
  FText local_1528;
  FText local_1518;
  code *local_1508;
  longlong lStack_1500;
  FDynamicMesh3 *local_14f8;
  TReferenceControllerBase<1> *pTStack_14f0;
  FGroupTopology *local_14e8;
  TReferenceControllerBase<1> *pTStack_14e0;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_14d8;
  TReferenceControllerBase<1> *pTStack_14d0;
  FText local_14c8;
  FText local_14b8;
  FText local_14a8;
  FText local_1498;
  FText local_1488;
  FText local_1478;
  code *local_1468;
  longlong lStack_1460;
  code *local_1458;
  longlong lStack_1450;
  code *local_1448;
  longlong lStack_1440;
  FText local_1438;
  code *local_1428 [2];
  undefined **local_1418;
  TObjectPtr<UEditMeshPolygonsToolActions_Triangles>_u_0 local_1410;
  TObjectPtr<UEditMeshPolygonsToolEdgeActions>_u_0 local_1408;
  TObjectPtr<UEditMeshPolygonsToolEdgeActions_Triangles>_u_0 local_1400;
  undefined1 local_13f8 [80];
  undefined **local_13a8;
  TObjectPtr<UPolyEditExtrudeEdgeActivity>_u_0 local_13a0;
  TObjectPtr<UPolyEditExtrudeEdgeActivity>_u_0 local_1390;
  code *local_1388 [2];
  undefined **local_1378;
  UEditMeshPolygonsTool *local_1370;
  longlong local_1360;
  code *local_1358 [2];
  undefined **local_1348;
  UEditMeshPolygonsTool *local_1340;
  longlong local_1330;
  code *local_1328 [2];
  undefined **local_1318;
  UEditMeshPolygonsTool *local_1310;
  FDynamicMesh3 *local_1300;
  code *local_12f8 [2];
  undefined **local_12e8;
  UEditMeshPolygonsTool *local_12e0;
  TObjectPtr<UPolyEditActivityContext>_u_0 local_12d0;
  TObjectPtr<UPolygonSelectionMechanic>_u_0 local_12c8;
  TObjectPtr<UDragAlignmentMechanic>_u_0 TStack_12c0;
  TObjectPtr<UCombinedTransformGizmo>_u_0 local_12b8;
  TObjectPtr<UTransformProxy>_u_0 TStack_12b0;
  TObjectPtr<UPolyEditTopologyProperties>_u_0 local_12a8;
  TObjectPtr<UPolyEditExtrudeActivity>_u_0 TStack_12a0;
  TObjectPtr<UPolyEditInsetOutsetActivity>_u_0 local_1298;
  undefined1 auStack_1290 [24];
  undefined1 local_1278 [16];
  undefined1 local_1268 [32];
  undefined1 auStack_1248 [16];
  undefined1 auStack_1238 [16];
  undefined1 local_1228 [48];
  undefined1 local_11f8 [24];
  undefined1 auStack_11e0 [32];
  undefined1 auStack_11c0 [24];
  undefined1 local_11a8 [16];
  FTextFormat local_1198;
  FTextFormat local_1188;
  TAxisAlignedBox3<double> local_1178;
  FDynamicMesh3 local_1148;
  FStaticConstructObjectParameters local_f18;
  undefined1 local_e98 [80];
  FScriptContainerElement local_e48 [24];
  ForAnyElementType local_e30;
  undefined1 local_e18 [80];
  longlong local_dc8 [3];
  longlong *local_db0;
  undefined1 local_d98 [80];
  longlong local_d48 [3];
  longlong *local_d30;
  undefined1 local_d18 [80];
  undefined1 local_cc8 [24];
  ForElementType<FSetElementId> local_cb0;
  undefined1 local_c98 [128];
  undefined1 local_c18 [128];
  undefined1 local_b98 [104];
  ForAnyElementType local_b30;
  undefined1 local_b18 [128];
  undefined1 local_a98 [128];
  undefined1 local_a18 [128];
  undefined1 local_998 [128];
  undefined1 local_918 [128];
  undefined1 local_898 [128];
  undefined1 local_818 [128];
  undefined1 local_798 [128];
  undefined1 local_718 [128];
  undefined1 local_698 [128];
  code *local_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  longlong *plStack_5f0;
  longlong local_5e8;
  undefined8 uStack_5e0;
  longlong local_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  longlong *plStack_5c0;
  longlong local_5b8;
  undefined8 uStack_5b0;
  longlong local_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  longlong *plStack_590;
  FGeometrySelection local_588;
  code *local_528 [2];
  undefined **local_518;
  code *local_510;
  undefined ***local_500;
  FGeometrySelection local_4f8;
  TTransform<double> local_498;
  TTransform<double> local_438;
  FGroupTopology local_3d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  FGroupTopology local_1b8;
  ulonglong local_58;
  
  pTVar13 = EditMeshPolygonsToolLocals::CVarEdgeLimit.Ref;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_18b8;
  bVar14 = IsInParallelGameThread();
  if (((!bVar14) && (bVar14 = IsInGameThread(), !bVar14)) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007945>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6c9,"GetShadowIndex() == 0"), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar16 = pTVar13->ShadowedValue[0];
  local_1808.bHaveRequestLOD = false;
  local_1808._1_3_ = 0;
  local_1808.RequestLOD = Default;
  local_1808.bWantMeshTangents = false;
  local_1808._9_3_ = 0;
  pFVar17 = UE::ToolTarget::GetDynamicMeshCopy
                      (&local_1148,(UToolTarget *)this->_padding_,&local_1808);
  pTVar18 = ::operator_new(0x240);
  if (pTVar18 == (TPropertyWatcher<ELocalFrameMode> *)0x0) {
    pTVar18 = (TPropertyWatcher<ELocalFrameMode> *)0x0;
    local_1818.Object = ___xmm_00000000000000000000000000000010;
    pFVar17 = (FDynamicMesh3 *)&DAT_00000010;
    local_1818.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)_UNK_150651568;
  }
  else {
    (pTVar18->Cached).TypedValue = FromGeometry;
    *(undefined4 *)&(pTVar18->Cached).bIsSet = 1;
    pTVar18->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFDynamicMesh3_Geometry_UE___00_SharedPointerInternals__6B_
    ;
    UE::Geometry::FDynamicMesh3::FDynamicMesh3((FDynamicMesh3 *)&pTVar18->GetValue,pFVar17);
    pFVar17 = (FDynamicMesh3 *)&pTVar18->GetValue;
    if ((pFVar17 == (FDynamicMesh3 *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    LOCK();
    (pTVar18->Cached).TypedValue = (pTVar18->Cached).TypedValue + FromGeometry;
    UNLOCK();
    local_1818.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar18;
    local_1818.Object = pFVar17;
  }
  this_00 = &this->CurrentMesh;
  if (this_00 != &local_1818) {
    this_00->Object = pFVar17;
    local_1818.Object = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->CurrentMesh).SharedReferenceCount,&local_1818.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1818.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar18);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_1148);
  pTVar19 = UE::ToolTarget::GetLocalToWorldTransform(&local_278,(UToolTarget *)this->_padding_);
  local_12c8.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar19->Rotation).XY.m128d_f64[0];
  TStack_12c0 = *(TObjectPtr<UDragAlignmentMechanic>_u_0 *)((pTVar19->Rotation).XY.m128d_f64 + 1);
  local_12b8 = (TObjectPtr<UCombinedTransformGizmo>_u_0)(pTVar19->Rotation).ZW.m128d_f64[0];
  TStack_12b0 = *(TObjectPtr<UTransformProxy>_u_0 *)((pTVar19->Rotation).ZW.m128d_f64 + 1);
  local_13f8._8_8_ = (pTVar19->Translation).XY.m128d_f64[0];
  local_13f8._16_8_ =
       *(TObjectPtr<UPolyEditExtrudeActivity>_u_0 *)((pTVar19->Translation).XY.m128d_f64 + 1);
  local_13f8._24_8_ = (pTVar19->Translation).ZW.m128d_f64[0];
  local_13f8._32_8_ = (pTVar19->Scale3D).XY.m128d_f64[0];
  local_13f8._40_8_ =
       *(TObjectPtr<UPolyEditPlanarProjectionUVActivity>_u_0 *)((pTVar19->Scale3D).XY.m128d_f64 + 1)
  ;
  local_13f8._48_8_ = (pTVar19->Scale3D).ZW.m128d_f64[0];
  (this->WorldTransform).Rotation.field0_0x0._s_0.X = (double)local_12c8;
  (this->WorldTransform).Rotation.field0_0x0._s_0.Y = (double)TStack_12c0;
  (this->WorldTransform).Rotation.field0_0x0._s_0.Z = (double)local_12b8;
  (this->WorldTransform).Rotation.field0_0x0._s_0.W = (double)TStack_12b0;
  (this->WorldTransform).Translation.field0_0x0._s_0.X = (double)local_13f8._8_8_;
  (this->WorldTransform).Translation.field0_0x0._s_0.Y = (double)local_13f8._16_8_;
  (this->WorldTransform).Translation.field0_0x0._s_0.Z = (double)local_13f8._24_8_;
  (this->WorldTransform).Scale3D.field0_0x0._s_0.X = (double)local_13f8._32_8_;
  (this->WorldTransform).Scale3D.field0_0x0._s_0.Y = (double)local_13f8._40_8_;
  (this->WorldTransform).Scale3D.field0_0x0._s_0.Z = (double)local_13f8._48_8_;
  auStack_1248._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
  auStack_1248._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
  local_1268._24_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1268._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dVar68 = *(double *)&(this->WorldTransform).Scale3D.field0_0x0;
  auStack_1238._0_4_ = *(undefined4 *)((longlong)&(this->WorldTransform).Scale3D.field0_0x0 + 8);
  auStack_1238._4_4_ = *(undefined4 *)((longlong)&(this->WorldTransform).Scale3D.field0_0x0 + 0xc);
  uVar57 = *(undefined8 *)((longlong)&(this->WorldTransform).Scale3D.field0_0x0 + 0x10);
  auStack_1238._8_4_ = (undefined4)uVar57;
  auStack_1238._12_4_ = (undefined4)((ulonglong)uVar57 >> 0x20);
  auStack_1248._8_4_ = SUB84(dVar68,0);
  auStack_1248._12_4_ = (undefined4)((ulonglong)dVar68 >> 0x20);
  (this->BakedTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->BakedTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  local_1268._8_8_ = _UNK_15061cbc8;
  local_1268._0_8_ = ___xmm_3ff00000000000000000000000000000;
  (this->BakedTransform).Rotation.field0_0x0._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  (this->BakedTransform).Rotation.field0_0x0._s_0.W = (double)local_1268._8_8_;
  (this->BakedTransform).Translation.field0_0x0._s_0.X = (double)local_1268._16_8_;
  (this->BakedTransform).Translation.field0_0x0._s_0.Y = (double)local_1268._24_8_;
  *(undefined4 *)((longlong)&(this->BakedTransform).Translation.field0_0x0 + 0x10) =
       auStack_1248._0_4_;
  *(undefined4 *)((longlong)&(this->BakedTransform).Translation.field0_0x0 + 0x14) =
       auStack_1248._4_4_;
  *(undefined4 *)&(this->BakedTransform).Scale3D.field0_0x0 = auStack_1248._8_4_;
  *(undefined4 *)((longlong)&(this->BakedTransform).Scale3D.field0_0x0 + 4) = auStack_1248._12_4_;
  *(undefined4 *)((longlong)&(this->BakedTransform).Scale3D.field0_0x0 + 8) = auStack_1238._0_4_;
  *(undefined4 *)((longlong)&(this->BakedTransform).Scale3D.field0_0x0 + 0xc) = auStack_1238._4_4_;
  *(undefined4 *)((longlong)&(this->BakedTransform).Scale3D.field0_0x0 + 0x10) = auStack_1238._8_4_;
  *(undefined4 *)((longlong)&(this->BakedTransform).Scale3D.field0_0x0 + 0x14) = auStack_1238._12_4_
  ;
  uVar57 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_1278._0_8_ = 0.0;
  local_1278._8_8_ = 0.0;
  (this->WorldTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->WorldTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar57;
  (this->WorldTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_12a8 = (TObjectPtr<UPolyEditTopologyProperties>_u_0)local_13f8._8_8_;
  TStack_12a0 = (TObjectPtr<UPolyEditExtrudeActivity>_u_0)local_13f8._16_8_;
  local_1298 = (TObjectPtr<UPolyEditInsetOutsetActivity>_u_0)local_13f8._24_8_;
  auStack_1290._0_8_ = local_13f8._32_8_;
  auStack_1290._8_8_ = local_13f8._40_8_;
  auStack_1290._16_8_ = local_13f8._48_8_;
  auStack_1248._8_8_ = dVar68;
  pFVar17 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator*<UE::Geometry::FDynamicMesh3>
                      (this_00);
  MeshTransforms::ApplyTransform(pFVar17,&this->BakedTransform,true,All);
  if (this->bTriangleMode == false) {
    pFVar17 = this_00->Object;
    pTVar18 = ::operator_new(0x170);
    if (pTVar18 == (TPropertyWatcher<ELocalFrameMode> *)0x0) {
      pTVar18 = (TPropertyWatcher<ELocalFrameMode> *)0x0;
      local_1838.Object = (FGroupTopology *)___xmm_00000000000000000000000000000010;
      pFVar25 = (FGroupTopology *)&DAT_00000010;
      local_1838.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)_UNK_150651568;
    }
    else {
      (pTVar18->Cached).TypedValue = FromGeometry;
      *(undefined4 *)&(pTVar18->Cached).bIsSet = 1;
      pTVar18->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFGroupTopology_Geometry_UE___00_SharedPointerInternals__6B_
      ;
      UE::Geometry::FGroupTopology::FGroupTopology
                ((FGroupTopology *)&pTVar18->GetValue,pFVar17,false);
      pFVar25 = (FGroupTopology *)&pTVar18->GetValue;
      if ((pFVar25 == (FGroupTopology *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      (pTVar18->Cached).TypedValue = (pTVar18->Cached).TypedValue + FromGeometry;
      UNLOCK();
      local_1838.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pTVar18;
      local_1838.Object = pFVar25;
    }
    this_01 = &this->Topology;
    if (this_01 != &local_1838) {
      this_01->Object = pFVar25;
      local_1838.Object = (FGroupTopology *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Topology).SharedReferenceCount,&local_1838.SharedReferenceCount);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1838.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar18);
    plStack_5f0 = (longlong *)0x0;
    local_608 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UEditMeshPolygonsTool::Setup'::`10'::<lambda_1>,0,0>::
                 _vftable_;
    local_618 = UE::Core::Private::Function::
                TFunctionRefCaller<`UEditMeshPolygonsTool::Setup'::__l10::<lambda_1>,bool,UE::Geometry::FGroupTopology_const_&,int,UE::Geometry::FIndex2i_const_&>
                ::Call;
    uStack_600 = this;
    pFVar25 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator->(this_01);
    lVar55 = *(longlong *)&pFVar25->ShouldAddExtraCornerAtVert;
    uVar10 = *(undefined8 *)&(pFVar25->ShouldAddExtraCornerAtVert).field_0x8;
    lVar11 = *(longlong *)&(pFVar25->ShouldAddExtraCornerAtVert).field_0x10;
    uVar12 = *(undefined8 *)&(pFVar25->ShouldAddExtraCornerAtVert).field_0x18;
    uVar57 = *(undefined8 *)&(pFVar25->ShouldAddExtraCornerAtVert).field_0x20;
    plVar20 = *(longlong **)&(pFVar25->ShouldAddExtraCornerAtVert).field_0x28;
    *(code **)&pFVar25->ShouldAddExtraCornerAtVert = local_618;
    *(undefined8 *)&(pFVar25->ShouldAddExtraCornerAtVert).field_0x8 = uStack_610;
    *(undefined4 *)&(pFVar25->ShouldAddExtraCornerAtVert).field_0x10 = (undefined4)local_608;
    *(undefined4 *)&(pFVar25->ShouldAddExtraCornerAtVert).field_0x14 = local_608._4_4_;
    *(undefined4 *)&(pFVar25->ShouldAddExtraCornerAtVert).field_0x18 = (undefined4)uStack_600;
    *(undefined4 *)&(pFVar25->ShouldAddExtraCornerAtVert).field_0x1c = uStack_600._4_4_;
    *(undefined8 *)&(pFVar25->ShouldAddExtraCornerAtVert).field_0x20 = local_5f8;
    *(longlong **)&(pFVar25->ShouldAddExtraCornerAtVert).field_0x28 = plStack_5f0;
    local_618 = (code *)lVar55;
    uStack_610 = uVar10;
    local_608 = (undefined **)lVar11;
    uStack_600 = (UEditMeshPolygonsTool *)uVar12;
    local_5f8 = uVar57;
    plStack_5f0 = plVar20;
    if (lVar55 != 0) {
      plVar60 = &local_608;
      if (plVar20 != (longlong *)0x0) {
        plVar60 = plVar20;
      }
      (**(code **)(*plVar60 + 0x10))();
    }
  }
  else {
    pFVar17 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->(this_00);
    iVar4 = (pFVar17->EdgeRefCounts).UsedCount;
    this->bToolDisabled = iVar16 < iVar4;
    if (iVar16 < iVar4) {
      plVar20 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar6 = *(code **)(*plVar20 + 0x360);
      pFVar17 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->(this_00);
      iVar4 = (pFVar17->EdgeRefCounts).UsedCount;
      pFVar21 = FText::AsLocalizable_Advanced_LocText
                          (&local_1558,L"UEditMeshPolygonsTool",L"TriEditTooManyEdges",
                           L"This tool is currently disallowed from operating on a mesh of this resolution. Current limit set by \"modeling.PolyEdit.EdgeLimit\" is {0} edges, and mesh has {1}. Limit can be changed but exists to avoid hanging the editor when trying to render too many edges using the current system, so make sure to save your work if you change the upper limit and try to edit a very dense mesh."
                          );
      pFVar22 = FTextFormat::FTextFormat(&local_1198,pFVar21,Default);
      pFVar21 = FText::Format<int,int>((FText *)(local_1570 + 8),pFVar22,iVar16,iVar4);
      (*pcVar6)(plVar20,pFVar21,4);
      if ((longlong *)local_1570._8_8_ != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_1570._8_8_ + 0x10))();
      }
      if (local_1558.TextData.Reference == (ITextData *)0x0) {
        return;
      }
      (**(code **)((longlong)*local_1558.TextData.Reference + 0x10))();
      return;
    }
    pFVar17 = this_00->Object;
    pTVar18 = ::operator_new(0x170);
    if (pTVar18 == (TPropertyWatcher<ELocalFrameMode> *)0x0) {
      pTVar18 = (TPropertyWatcher<ELocalFrameMode> *)0x0;
      local_1858 = ___xmm_00000000000000000000000000000010;
      pFVar25 = (FGroupTopology *)&DAT_00000010;
      FStack_1850.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
    }
    else {
      (pTVar18->Cached).TypedValue = FromGeometry;
      *(undefined4 *)&(pTVar18->Cached).bIsSet = 1;
      pTVar18->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFTriangleGroupTopology_Geometry_UE___00_SharedPointerInternals__6B_
      ;
      UE::Geometry::FTriangleGroupTopology::FTriangleGroupTopology
                ((FTriangleGroupTopology *)&pTVar18->GetValue,pFVar17,false);
      pFVar25 = (FGroupTopology *)&pTVar18->GetValue;
      if ((pFVar25 == (FGroupTopology *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      LOCK();
      (pTVar18->Cached).TypedValue = (pTVar18->Cached).TypedValue + FromGeometry;
      UNLOCK();
      FStack_1850.ReferenceController = (TReferenceControllerBase<1> *)pTVar18;
      local_1858 = (FDynamicMesh3 *)pFVar25;
    }
    if (&this->Topology != (TSharedPtr<UE::Geometry::FGroupTopology,1> *)&local_1858) {
      (this->Topology).Object = pFVar25;
      local_1858 = (FDynamicMesh3 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->Topology).SharedReferenceCount,&FStack_1850);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_1850.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pTVar18);
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar23 = UPolyEditTopologyProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a98,pUVar23);
  local_a98._8_8_ = this;
  pUVar24 = (UPolyEditTopologyProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a98);
  if (local_a98._64_8_ != 0) {
    plVar20 = (longlong *)(local_a98 + 0x50);
    if ((longlong *)local_a98._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_a98._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar24 != (UPolyEditTopologyProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar24);
  }
  (this->TopologyProperties).field0_0x0.DebugPtr = pUVar24;
  local_17c8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar24->_padding_,(FObjectPtr)&local_17c8);
  pUVar24 = (this->TopologyProperties).field0_0x0.DebugPtr;
  pwVar61 = L"PolyEditTool";
  if (this->bTriangleMode != false) {
    pwVar61 = L"TriEditTool";
  }
  pcVar6 = *(code **)(pUVar24->_padding_ + 0x2b8);
  ::FString::FString(&local_1648,pwVar61);
  (*pcVar6)(pUVar24,this,&local_1648);
  if (local_1648.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1648.Data.AllocatorInstance.Data);
  }
  pUVar24 = (this->TopologyProperties).field0_0x0.DebugPtr;
  dVar68 = cos(pUVar24->ExtraCornerAngleThresholdDegrees * __real_3f91df46a2529d39);
  this->ExtraCornerDotProductThreshold = dVar68;
  local_1418 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UEditMeshPolygonsTool::Setup'::`2'::<lambda_3>,0,0>::
                _vftable_;
  local_1400.DebugPtr = (UEditMeshPolygonsToolEdgeActions_Triangles *)0x0;
  local_1428[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UEditMeshPolygonsTool::Setup'::__l2::<lambda_3>,void,double_const_&>::
       Call;
  local_1410 = (TObjectPtr<UEditMeshPolygonsToolActions_Triangles>_u_0)this;
  local_1408 = (TObjectPtr<UEditMeshPolygonsToolEdgeActions>_u_0)this;
  FWatchablePropertySet::WatchProperty<double>
            ((FWatchablePropertySet *)&pUVar24->_padding_,&pUVar24->ExtraCornerAngleThresholdDegrees
             ,(TFunction<void___cdecl(double_const_&)> *)local_1428);
  pFVar25 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator->(&this->Topology);
  (**(code **)(pFVar25->_padding_ + 8))(pFVar25);
  if (this->bTriangleMode == false) {
    iVar64 = 0;
    pFVar25 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator->(&this->Topology);
    iVar4 = (pFVar25->Edges).ArrayNum;
    pFVar62 = (pFVar25->Edges).AllocatorInstance.Data;
    pFVar65 = pFVar62 + (longlong)iVar4 * 0x50;
    while( true ) {
      if ((pFVar25->Edges).ArrayNum != iVar4) {
        local_1878 = 0;
        `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupEdge,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_1878);
      }
      if (pFVar62 == pFVar65) break;
      iVar64 = iVar64 + *(int *)(pFVar62 + 0x28);
      pFVar62 = pFVar62 + 0x50;
    }
    this->bToolDisabled = iVar16 < iVar64;
    if (iVar16 < iVar64) {
      plVar20 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar6 = *(code **)(*plVar20 + 0x360);
      pFVar21 = FText::AsLocalizable_Advanced_LocText
                          (&local_1538,L"UEditMeshPolygonsTool",L"PolyEditTooManyEdges",
                           L"This tool is currently disallowed from operating on a group topology of this resolution. Current limit set by \"modeling.PolyEdit.EdgeLimit\" is {0} displayed edges, and topology has {1} edge segments to display. Limit can be changed, but it exists to avoid hanging the editor when trying to render too many edges using the current system, so make sure to save your work if you change the upper limit and try to edit a very complicated topology."
                          );
      pFVar22 = FTextFormat::FTextFormat(&local_1188,pFVar21,Default);
      pFVar21 = FText::Format<int,int>(&local_1548,pFVar22,iVar16,iVar64);
      (*pcVar6)(plVar20,pFVar21,4);
      if (local_1548.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_1548.TextData.Reference + 0x10))();
      }
      if (local_1538.TextData.Reference == (ITextData *)0x0) {
        return;
      }
      (**(code **)((longlong)*local_1538.TextData.Reference + 0x10))();
      return;
    }
  }
  pTVar66 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&DAT_00000010;
  if (this->bTriangleMode == false) {
    pUVar26 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar26,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar23 = UEditMeshPolygonsToolActions::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b18,pUVar23);
    local_b18._8_8_ = pUVar26;
    pUVar29 = (UEditMeshPolygonsToolActions *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b18);
    if (local_b18._64_8_ != 0) {
      plVar20 = (longlong *)(local_b18 + 0x50);
      if ((longlong *)local_b18._104_8_ != (longlong *)0x0) {
        plVar20 = (longlong *)local_b18._104_8_;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar29 != (UEditMeshPolygonsToolActions *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar29);
    }
    (this->EditActions).field0_0x0.DebugPtr = pUVar29;
    local_17b0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar29->field_0xb0,(FObjectPtr)&local_17b0);
    (**(code **)(this->_padding_ + 0x318))(this,(this->EditActions).field0_0x0.DebugPtr);
    pUVar26 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar26,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar23 = UEditMeshPolygonsToolEdgeActions::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_918,pUVar23);
    local_918._8_8_ = pUVar26;
    pUVar30 = (UEditMeshPolygonsToolEdgeActions *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_918);
    if (local_918._64_8_ != 0) {
      plVar20 = (longlong *)(local_918 + 0x50);
      if ((longlong *)local_918._104_8_ != (longlong *)0x0) {
        plVar20 = (longlong *)local_918._104_8_;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar30 != (UEditMeshPolygonsToolEdgeActions *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar30);
    }
    (this->EditEdgeActions).field0_0x0.DebugPtr = pUVar30;
    local_17a8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar30->field_0xb0,(FObjectPtr)&local_17a8);
    (**(code **)(this->_padding_ + 0x318))(this,(this->EditEdgeActions).field0_0x0.DebugPtr);
    pUVar26 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar26,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar23 = UEditMeshPolygonsToolUVActions::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_898,pUVar23);
    local_898._8_8_ = pUVar26;
    pUVar31 = (UEditMeshPolygonsToolUVActions *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_898);
    if (local_898._64_8_ != 0) {
      plVar20 = (longlong *)(local_898 + 0x50);
      if ((longlong *)local_898._104_8_ != (longlong *)0x0) {
        plVar20 = (longlong *)local_898._104_8_;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar31 != (UEditMeshPolygonsToolUVActions *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar31);
    }
    (this->EditUVActions).field0_0x0.DebugPtr = pUVar31;
    local_17a0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar31->field_0xb0,(FObjectPtr)&local_17a0);
    (**(code **)(this->_padding_ + 0x318))(this,(this->EditUVActions).field0_0x0.DebugPtr);
    pFVar21 = &EditMeshPolygonsToolLocals::TriEditDefaultMessage;
  }
  else {
    pUVar26 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar26,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar23 = UEditMeshPolygonsToolActions_Triangles::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a18,pUVar23);
    local_a18._8_8_ = pUVar26;
    pUVar27 = (UEditMeshPolygonsToolActions_Triangles *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a18);
    if (local_a18._64_8_ != 0) {
      plVar20 = (longlong *)(local_a18 + 0x50);
      if ((longlong *)local_a18._104_8_ != (longlong *)0x0) {
        plVar20 = (longlong *)local_a18._104_8_;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar27 != (UEditMeshPolygonsToolActions_Triangles *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar27);
    }
    (this->EditActions_Triangles).field0_0x0.DebugPtr = pUVar27;
    local_17c0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar27->field_0xb0,(FObjectPtr)&local_17c0);
    (**(code **)(this->_padding_ + 0x318))(this,(this->EditActions_Triangles).field0_0x0.DebugPtr);
    pUVar26 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar26,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar23 = UEditMeshPolygonsToolEdgeActions_Triangles::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_998,pUVar23);
    local_998._8_8_ = pUVar26;
    pUVar28 = (UEditMeshPolygonsToolEdgeActions_Triangles *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_998);
    if (local_998._64_8_ != 0) {
      plVar20 = (longlong *)(local_998 + 0x50);
      if ((longlong *)local_998._104_8_ != (longlong *)0x0) {
        plVar20 = (longlong *)local_998._104_8_;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar28 != (UEditMeshPolygonsToolEdgeActions_Triangles *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar28);
    }
    (this->EditEdgeActions_Triangles).field0_0x0.DebugPtr = pUVar28;
    local_17b8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&pUVar28->field_0xb0,(FObjectPtr)&local_17b8);
    (**(code **)(this->_padding_ + 0x318))
              (this,(this->EditEdgeActions_Triangles).field0_0x0.DebugPtr);
    pcVar6 = *(code **)(this->_padding_ + 0x380);
    pFVar21 = FText::AsLocalizable_Advanced_LocText
                        (&local_1528,L"UEditMeshPolygonsTool",L"EditMeshTrianglesToolName",
                         L"Triangle Edit");
    (*pcVar6)(this,pFVar21);
    if (local_1528.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1528.TextData.Reference + 0x10))();
    }
    pFVar21 = &EditMeshPolygonsToolLocals::PolyEditDefaultMessage;
  }
  FText::operator=(&this->DefaultMessage,pFVar21);
  plVar20 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  (**(code **)(*plVar20 + 0x360))(plVar20,&this->DefaultMessage,2);
  plVar20 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar6 = *(code **)(*plVar20 + 0x360);
  pFVar21 = FText::FText(&local_1518);
  (*pcVar6)(plVar20,pFVar21,3);
  if (local_1518.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1518.TextData.Reference + 0x10))();
  }
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar23 = UPolyEditCommonProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_818,pUVar23);
  local_818._8_8_ = this;
  pUVar32 = (UPolyEditCommonProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_818);
  if (local_818._64_8_ != 0) {
    plVar20 = (longlong *)(local_818 + 0x50);
    if ((longlong *)local_818._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_818._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar32 != (UPolyEditCommonProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar32);
  }
  (this->CommonProps).field0_0x0.DebugPtr = pUVar32;
  pwVar61 = L"PolyEditTool";
  if (this->bTriangleMode != false) {
    pwVar61 = L"TriEditTool";
  }
  pcVar6 = *(code **)(pUVar32->_padding_ + 0x2b8);
  ::FString::FString(&local_1638,pwVar61);
  (*pcVar6)(pUVar32,this,&local_1638);
  if (local_1638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1638.Data.AllocatorInstance.Data);
  }
  pUVar32 = (this->CommonProps).field0_0x0.DebugPtr;
  local_16b8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UEditMeshPolygonsTool::Setup'::`2'::<lambda_4>,0,0>::
                _vftable_;
  pTVar67 = (TPropertyWatcher<ELocalFrameMode> *)0x0;
  local_16a0 = (undefined ***)0x0;
  local_16c8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UEditMeshPolygonsTool::Setup'::__l2::<lambda_4>,void,enum_ELocalFrameMode_const_&>
               ::Call;
  local_16b0 = this;
  this_02 = ::operator_new(0xa0);
  pTVar18 = pTVar67;
  if (this_02 != (void *)0x0) {
    local_1228._0_8_ = local_16c8;
    local_1228._40_8_ = 0.0;
    if (local_16c8 != (code *)0x0) {
      pppuVar59 = &local_16b8;
      if (local_16a0 != (undefined ***)0x0) {
        pppuVar59 = local_16a0;
      }
      (*(code *)**pppuVar59)(pppuVar59,local_1228 + 0x10);
    }
    pTVar18 = FWatchablePropertySet::TPropertyWatcher<enum_ELocalFrameMode>::
              TPropertyWatcher<enum_ELocalFrameMode><enum_ELocalFrameMode,void>
                        (this_02,&pUVar32->LocalFrameMode,
                         (TFunction<void___cdecl(ELocalFrameMode_const_&)> *)local_1228);
  }
  iVar16 = (int)pUVar32->_padding_;
  piVar1 = (int *)((longlong)&pUVar32->_padding_ + 4);
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pUVar32->_padding_,piVar1);
  }
  *(int *)&pUVar32->_padding_ = iVar16 + 1;
  *(TPropertyWatcher<ELocalFrameMode> **)(pUVar32->_padding_ + (longlong)iVar16 * 8) = pTVar18;
  if (local_16c8 != (code *)0x0) {
    pppuVar59 = &local_16b8;
    if (local_16a0 != (undefined ***)0x0) {
      pppuVar59 = local_16a0;
    }
    (*(code *)(*pppuVar59)[2])();
  }
  pUVar32 = (this->CommonProps).field0_0x0.DebugPtr;
  local_1378 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UEditMeshPolygonsTool::Setup'::`2'::<lambda_5>,0,0>::
                _vftable_;
  local_1360 = 0;
  local_1388[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UEditMeshPolygonsTool::Setup'::__l2::<lambda_5>,void,bool_const_&>::Call;
  local_1370 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar32->_padding_,&pUVar32->bLockRotation,
             (TFunction<void___cdecl(bool_const_&)> *)local_1388);
  pUVar32 = (this->CommonProps).field0_0x0.DebugPtr;
  local_1348 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UEditMeshPolygonsTool::Setup'::`2'::<lambda_6>,0,0>::
                _vftable_;
  local_1330 = 0;
  local_1358[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UEditMeshPolygonsTool::Setup'::__l2::<lambda_6>,void,bool_const_&>::Call;
  local_1340 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar32->_padding_,&pUVar32->bGizmoVisible,
             (TFunction<void___cdecl(bool_const_&)> *)local_1358);
  pUVar32 = (this->CommonProps).field0_0x0.DebugPtr;
  puVar63 = (undefined8 *)pUVar32->_padding_;
  iVar16 = (int)pUVar32->_padding_;
  puVar3 = puVar63 + iVar16;
  while( true ) {
    if ((int)pUVar32->_padding_ != iVar16) {
      local_1877[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FWatchablePropertySet::FPropertyWatcher,TDefaultDelete<FWatchablePropertySet::FPropertyWatcher>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_1877);
    }
    if (puVar63 == puVar3) break;
    (**(code **)(*(longlong *)*puVar63 + 0x10))();
    puVar63 = puVar63 + 1;
  }
  if (((this->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  UE::Geometry::FMeshNormals::QuickComputeVertexNormals((this->CurrentMesh).Object,false);
  pUVar26 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar26,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar23 = Z_Construct_UClass_UMeshOpPreviewWithBackgroundCompute_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_798,pUVar23);
  local_798._8_8_ = pUVar26;
  pUVar33 = (UMeshOpPreviewWithBackgroundCompute *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_798);
  if (local_798._64_8_ != 0) {
    plVar20 = (longlong *)(local_798 + 0x50);
    if ((longlong *)local_798._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_798._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar33 != (UMeshOpPreviewWithBackgroundCompute *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar33);
  }
  (this->Preview).field0_0x0.DebugPtr = pUVar33;
  pUVar34 = (UWorld *)(**(code **)(this->_padding_ + 0x3c0))(this);
  UMeshOpPreviewWithBackgroundCompute::Setup(pUVar33,pUVar34);
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (UToolTarget *)this->_padding_);
  local_498.Translation.XY.m128d_f64[0]._0_4_ =
       *(undefined4 *)&(this->WorldTransform).Translation.field0_0x0;
  local_498.Translation.XY.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)&(this->WorldTransform).Translation.field0_0x0 + 4);
  local_498.Translation.XY.m128d_f64[1]._0_4_ =
       *(undefined4 *)((longlong)&(this->WorldTransform).Translation.field0_0x0 + 8);
  local_498.Translation.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)&(this->WorldTransform).Translation.field0_0x0 + 0xc);
  local_498.Rotation.ZW.m128d_f64[1]._4_4_ =
       (undefined4)
       ((ulonglong)*(undefined8 *)((longlong)&(this->WorldTransform).Rotation.field0_0x0 + 0x18) >>
       0x20);
  local_498.Scale3D.XY.m128d_f64[0] = (this->WorldTransform).Scale3D.field0_0x0._s_0.X;
  local_498.Scale3D.XY.m128d_f64[1] = (this->WorldTransform).Scale3D.field0_0x0._s_0.Y;
  local_498.Rotation.XY.m128d_f64[0] = (this->WorldTransform).Rotation.field0_0x0._s_0.X;
  local_498.Rotation.XY.m128d_f64[1]._0_4_ =
       *(undefined4 *)((longlong)&(this->WorldTransform).Rotation.field0_0x0 + 8);
  local_498.Rotation.XY.m128d_f64[1]._4_4_ =
       *(undefined4 *)((longlong)&(this->WorldTransform).Rotation.field0_0x0 + 0xc);
  local_498.Translation.ZW.m128d_f64[0] = (this->WorldTransform).Translation.field0_0x0._s_0.Z;
  local_1598 = (this->WorldTransform).Scale3D.field0_0x0._s_0.Z;
  local_498.Rotation.ZW.m128d_f64[0]._0_4_ =
       *(undefined4 *)((longlong)&(this->WorldTransform).Rotation.field0_0x0 + 0x10);
  local_498.Rotation.ZW.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)&(this->WorldTransform).Rotation.field0_0x0 + 0x14);
  local_498.Rotation.ZW.m128d_f64[1]._0_4_ =
       *(undefined4 *)((longlong)&(this->WorldTransform).Rotation.field0_0x0 + 0x18);
  local_498.Translation.ZW.m128d_f64[1] = 0.0;
  local_498.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_498.Scale3D.ZW.m128d_f64[0] = local_1598;
  UPreviewMesh::SetTransform
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,&local_498);
  ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr)->
  bBuildSpatialDataStructure = true;
  UE::ToolTarget::GetMaterialSet
            ((FComponentMaterialSet *)(local_16f0 + 8),(UToolTarget *)this->_padding_,false);
  pUVar33 = (this->Preview).field0_0x0.DebugPtr;
  pUVar35 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar36 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar35);
  uVar57 = local_16f0._8_8_;
  local_1828.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1828.ArrayNum = local_16e0;
  if (local_16e0 == 0) {
    local_1828.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_16e0,0,&local_1828.AllocatorInstance,local_16e0,&local_1828.ArrayMax);
    memcpy(local_1828.AllocatorInstance.Data,(void *)uVar57,(longlong)local_16e0 << 3);
  }
  UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials
            (pUVar33,&local_1828,pUVar36,(UMaterialInterface *)0x0);
  pUVar35 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar36 = ToolSetupUtil::GetSelectionMaterial(&FLinearColor::Yellow,pUVar35,0.0);
  if (pUVar36 != (UMaterialInterface *)0x0) {
    pUVar33 = (this->Preview).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar36);
    }
    (pUVar33->SecondaryMaterial).field0_0x0.DebugPtr = pUVar36;
  }
  local_1318 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UEditMeshPolygonsTool::Setup'::`2'::<lambda_7>,1,0>::
                _vftable_;
  local_1328[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UEditMeshPolygonsTool::Setup'::__l2::<lambda_7>,bool,UE::Geometry::FDynamicMesh3_const_*,int>
       ::Call;
  local_1300 = (FDynamicMesh3 *)0x0;
  local_1310 = this;
  UPreviewMesh::EnableSecondaryTriangleBuffers
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (TUniqueFunction<bool___cdecl(UE::Geometry::FDynamicMesh3_const_*,int)> *)local_1328);
  UPreviewMesh::SetTangentsMode
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,AutoCalculated
            );
  UPreviewMesh::UpdatePreview
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (this->CurrentMesh).Object,FullUpdate,AllVertexAttribs);
  UPreviewMesh::EnableWireframe
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             ((this->CommonProps).field0_0x0.DebugPtr)->bShowWireframe);
  UMeshOpPreviewWithBackgroundCompute::SetVisibility((this->Preview).field0_0x0.DebugPtr,true);
  pTVar18 = ::operator_new(0xd0);
  if (pTVar18 == (TPropertyWatcher<ELocalFrameMode> *)0x0) {
    local_1848 = ___xmm_00000000000000000000000000000010;
    FStack_1840.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
    pTVar18 = pTVar67;
  }
  else {
    (pTVar18->Cached).TypedValue = FromGeometry;
    *(undefined4 *)&(pTVar18->Cached).bIsSet = 1;
    pTVar18->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE___00_SharedPointerInternals__6B_
    ;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&pTVar18->GetValue);
    pTVar66 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&pTVar18->GetValue;
    if ((pTVar66 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar14)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    LOCK();
    (pTVar18->Cached).TypedValue = (pTVar18->Cached).TypedValue + FromGeometry;
    UNLOCK();
    FStack_1840.ReferenceController = (TReferenceControllerBase<1> *)pTVar18;
    local_1848 = (FDynamicMesh3 *)pTVar66;
  }
  pTVar2 = &this->MeshSpatial;
  if (pTVar2 != (TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *)
                &local_1848) {
    pTVar2->Object = pTVar66;
    local_1848 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->MeshSpatial).SharedReferenceCount,&FStack_1840);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_1840.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar18);
  if ((pTVar2->Object == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar66 = pTVar2->Object;
  pTVar66->Mesh = (this->CurrentMesh).Object;
  pTVar66->MeshChangeStamp = 0;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(pTVar66,false);
  uVar37 = UE::Geometry::FDynamicMesh3::GetChangeStamp(pTVar66->Mesh);
  pTVar66->MeshChangeStamp = uVar37;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar23 = Z_Construct_UClass_UPolygonSelectionMechanic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_718,pUVar23);
  local_718._8_8_ = this;
  pUVar38 = (UPolygonSelectionMechanic *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_718);
  if (local_718._64_8_ != 0) {
    plVar20 = (longlong *)(local_718 + 0x50);
    if ((longlong *)local_718._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_718._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar38 != (UPolygonSelectionMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar38);
  }
  (this->SelectionMechanic).field0_0x0.DebugPtr = pUVar38;
  *(undefined1 *)&pUVar38->_padding_ = 0;
  pUVar38 = (this->SelectionMechanic).field0_0x0.DebugPtr;
  (**(code **)(pUVar38->_padding_ + 0x2b0))(pUVar38,this);
  UMeshTopologySelectionMechanic::SetShowSelectableCorners
            ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr,
             ((this->CommonProps).field0_0x0.DebugPtr)->bShowSelectableCorners);
  pwVar61 = L"PolyEditTool";
  plVar20 = (longlong *)((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_;
  pcVar6 = *(code **)(*plVar20 + 0x2b8);
  if (this->bTriangleMode != false) {
    pwVar61 = L"TriEditTool";
  }
  ::FString::FString(&local_1628,pwVar61);
  (*pcVar6)(plVar20,this,&local_1628);
  if (local_1628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1628.Data.AllocatorInstance.Data);
  }
  uStack_17f0 = 0;
  local_17f8 = (UEditMeshPolygonsTool *)OnSelectionModifiedEvent;
  lStack_1500 = (ulonglong)uStack_17ec << 0x20;
  local_1508 = OnSelectionModifiedEvent;
  *(bool *)(((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_ + 0xbb) =
       this->bTriangleMode == false;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UEditMeshPolygonsTool>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_,
             (UEditMeshPolygonsTool *)local_1590,(pmf_77a2c349 *)this);
  local_17f8 = this;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddWeakLambda<UEditMeshPolygonsTool,_UEditMeshPolygonsTool::Setup_::__l2::<lambda_8>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_,
             (UEditMeshPolygonsTool *)(local_1590 + 8),(<lambda_8> *)this);
  if (this->bTriangleMode != false) {
    *(undefined4 *)&((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_ = 0x3f800000;
  }
  pUVar38 = (this->SelectionMechanic).field0_0x0.DebugPtr;
  pFVar25 = (this->Topology).Object;
  local_12e8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UEditMeshPolygonsTool::Setup'::`2'::<lambda_9>,0,0>::
                _vftable_;
  local_12f8[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UEditMeshPolygonsTool::Setup'::__l2::<lambda_9>,UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*>
       ::Call;
  local_12d0.DebugPtr = (UPolyEditActivityContext *)0x0;
  local_12e0 = this;
  pUVar34 = (UWorld *)(**(code **)(this->_padding_ + 0x3c0))(this);
  pTVar19 = UPreviewMesh::GetTransform
                      ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
                       &local_218);
  local_11f8._0_8_ = (pTVar19->Rotation).XY.m128d_f64[0];
  local_11f8._8_8_ = (pTVar19->Rotation).XY.m128d_f64[1];
  local_11f8._16_8_ = (pTVar19->Rotation).ZW.m128d_f64[0];
  auStack_11e0._0_8_ = (pTVar19->Rotation).ZW.m128d_f64[1];
  auStack_11e0._8_8_ = (pTVar19->Translation).XY.m128d_f64[0];
  auStack_11e0._16_8_ = (pTVar19->Translation).XY.m128d_f64[1];
  auStack_11e0._24_8_ = (pTVar19->Translation).ZW.m128d_f64[0];
  auStack_11c0._0_8_ = (pTVar19->Translation).ZW.m128d_f64[1];
  auStack_11c0._8_8_ = (pTVar19->Scale3D).XY.m128d_f64[0];
  auStack_11c0._16_8_ = (pTVar19->Scale3D).XY.m128d_f64[1];
  local_11a8._0_8_ = (pTVar19->Scale3D).ZW.m128d_f64[0];
  local_11a8._8_8_ = (pTVar19->Scale3D).ZW.m128d_f64[1];
  UPolygonSelectionMechanic::Initialize
            (pUVar38,(this->CurrentMesh).Object,(TTransform<double> *)local_11f8,pUVar34,pFVar25,
             (TFunction<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)> *
             )local_12f8);
  UE::Geometry::FGroupTopologyDeformer::Initialize
            (&this->LinearDeformer,(this->CurrentMesh).Object,(this->Topology).Object);
  cVar15 = (**(code **)(this->_padding_ + 0x3d8))(this);
  if (cVar15 == '\0') goto LAB_14cc7e18a;
  pFVar39 = (FGeometrySelection *)(**(code **)(this->_padding_ + 0x3e0))(this);
  cVar15 = this->bTriangleMode;
  local_588.ElementType = Face;
  local_588.TopologyType = Triangle;
  local_588.Selection.Elements._0_8_ = 0;
  local_588.Selection.Elements._8_8_ = 0;
  local_588.Selection.Elements._32_8_ = 0;
  local_588.Selection.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_588.Selection.Elements._48_8_ = _UNK_150631d98;
  local_588.Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_588.Selection.HashSize = 0;
  if (((((bool)cVar15 == false) && (pFVar39->TopologyType == Polygroup)) &&
      (pFVar39->ElementType == Edge)) &&
     (((this->TopologyProperties).field0_0x0.DebugPtr)->bAddExtraCorners != false)) {
    local_588.ElementType = Edge;
    local_588.TopologyType = Polygroup;
    local_4f8.Selection.Elements._0_8_ = 0;
    local_4f8.Selection.Elements._8_8_ = 0;
    local_4f8.Selection.Elements._32_8_ = 0;
    local_4f8.Selection.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_4f8.Selection.Elements._48_8_ = _UNK_150631d98;
    local_4f8.Selection.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_4f8.Selection.HashSize = 0;
    local_4f8.ElementType = Edge;
    local_4f8.TopologyType = Triangle;
    UE::Geometry::FGroupTopology::FGroupTopology(&local_1b8,(this->CurrentMesh).Object,true);
    pFVar17 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator*<UE::Geometry::FDynamicMesh3>
                        (&this->CurrentMesh);
    bVar14 = UE::Geometry::ConvertSelection(pFVar17,&local_1b8,pFVar39,&local_4f8,ContainSelection);
    if (bVar14) {
      pFVar25 = (this->Topology).Object;
      pFVar17 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator*<UE::Geometry::FDynamicMesh3>
                          (&this->CurrentMesh);
      bVar14 = UE::Geometry::ConvertSelection
                         (pFVar17,pFVar25,&local_4f8,&local_588,ContainSelection);
      if (!bVar14) goto LAB_14cc7e049;
      bVar14 = true;
    }
    else {
LAB_14cc7e049:
      bVar14 = false;
    }
    UE::Geometry::FGroupTopology::~FGroupTopology(&local_1b8);
    local_4f8.Selection.HashSize = 0;
    if (local_4f8.Selection.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_4f8.Selection.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_4f8.Selection.Elements);
LAB_14cc7e124:
    pFVar39 = &local_588;
    if (bVar14 != false) {
      cVar15 = this->bTriangleMode;
      goto LAB_14cc7e131;
    }
  }
  else {
    if ((pFVar39->TopologyType == Triangle) != (bool)cVar15) {
      local_588.ElementType = pFVar39->ElementType;
      pFVar25 = (this->Topology).Object;
      local_588.TopologyType = Polygroup - ((bool)cVar15 != false);
      UE::Geometry::FGroupTopology::FGroupTopology(&local_3d8,(this->CurrentMesh).Object,false);
      if (this->bTriangleMode != false) {
        UE::Geometry::FGroupTopology::RebuildTopology(&local_3d8);
        pFVar25 = &local_3d8;
      }
      pFVar17 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator*<UE::Geometry::FDynamicMesh3>
                          (&this->CurrentMesh);
      bVar14 = UE::Geometry::ConvertSelection(pFVar17,pFVar25,pFVar39,&local_588,ContainSelection);
      UE::Geometry::FGroupTopology::~FGroupTopology(&local_3d8);
      goto LAB_14cc7e124;
    }
LAB_14cc7e131:
    if (pFVar39->TopologyType == Triangle) {
      if (cVar15 != '\0') {
        UPolygonSelectionMechanic::SetSelection_AsTriangleTopology
                  ((this->SelectionMechanic).field0_0x0.DebugPtr,pFVar39);
      }
    }
    else if ((pFVar39->TopologyType == Polygroup) && (cVar15 == '\0')) {
      UPolygonSelectionMechanic::SetSelection_AsGroupTopology
                ((this->SelectionMechanic).field0_0x0.DebugPtr,pFVar39);
    }
  }
  local_588.Selection.HashSize = 0;
  if (local_588.Selection.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_588.Selection.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_588.Selection.Elements);
LAB_14cc7e18a:
  bVar14 = UMeshTopologySelectionMechanic::HasSelection
                     ((UMeshTopologySelectionMechanic *)
                      (this->SelectionMechanic).field0_0x0.DebugPtr);
  this->bSelectionStateDirty = bVar14;
  if (((this->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar40 = UE::Geometry::FDynamicMesh3::GetBounds((this->CurrentMesh).Object,&local_1178,false);
  dVar7 = (pTVar40->Max).field0_0x0._s_0.Z - (pTVar40->Min).field0_0x0._s_0.Z;
  dVar69 = (pTVar40->Max).field0_0x0._s_0.Y - (pTVar40->Min).field0_0x0._s_0.Y;
  dVar68 = (pTVar40->Max).field0_0x0._s_0.X - (pTVar40->Min).field0_0x0._s_0.X;
  if (dVar7 <= 0.0) {
    dVar7 = 0.0;
  }
  if (dVar69 <= 0.0) {
    dVar69 = 0.0;
  }
  if (dVar68 <= 0.0) {
    dVar68 = 0.0;
  }
  if (dVar7 <= dVar69) {
    dVar7 = dVar69;
  }
  if (dVar7 <= dVar68) {
    dVar7 = dVar68;
  }
  if (0.0 < (float)dVar7) {
    this->UVScaleFactor = __real_3f800000 / (float)dVar7;
  }
  pUVar26 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar26,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar23 = Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_698,pUVar23);
  local_698._8_8_ = pUVar26;
  pUVar41 = (UPolyEditActivityContext *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_698);
  if (local_698._64_8_ != 0) {
    plVar20 = (longlong *)(local_698 + 0x50);
    if ((longlong *)local_698._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_698._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar41 != (UPolyEditActivityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar41);
  }
  (this->ActivityContext).field0_0x0.DebugPtr = pUVar41;
  pUVar41->bTriangleMode = this->bTriangleMode;
  pUVar41 = (this->ActivityContext).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar32 = (this->CommonProps).field0_0x0.DebugPtr, pUVar32 != (UPolyEditCommonProperties *)0x0
     )) {
    UE::GC::MarkAsReachable((UObject *)pUVar32);
  }
  (pUVar41->CommonProperties).field0_0x0 = (this->CommonProps).field0_0x0;
  pTVar5 = (this->CurrentMesh).SharedReferenceCount.ReferenceController;
  pUVar41 = (this->ActivityContext).field0_0x0.DebugPtr;
  pFVar17 = (this->CurrentMesh).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_14f8 = (pUVar41->CurrentMesh).Object;
  pTStack_14f0 = (pUVar41->CurrentMesh).SharedReferenceCount.ReferenceController;
  (pUVar41->CurrentMesh).Object = pFVar17;
  (pUVar41->CurrentMesh).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_14f0);
  pUVar41 = (this->ActivityContext).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar33 = (this->Preview).field0_0x0.DebugPtr,
     pUVar33 != (UMeshOpPreviewWithBackgroundCompute *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar33);
  }
  (pUVar41->Preview).field0_0x0 = (this->Preview).field0_0x0;
  pTVar5 = (this->Topology).SharedReferenceCount.ReferenceController;
  pUVar41 = (this->ActivityContext).field0_0x0.DebugPtr;
  pFVar25 = (this->Topology).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_14e8 = (pUVar41->CurrentTopology).Object;
  pTStack_14e0 = (pUVar41->CurrentTopology).SharedReferenceCount.ReferenceController;
  (pUVar41->CurrentTopology).Object = pFVar25;
  (pUVar41->CurrentTopology).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_14e0);
  pTVar5 = (this->MeshSpatial).SharedReferenceCount.ReferenceController;
  pUVar41 = (this->ActivityContext).field0_0x0.DebugPtr;
  pTVar66 = (this->MeshSpatial).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_14d8 = (pUVar41->MeshSpatial).Object;
  pTStack_14d0 = (pUVar41->MeshSpatial).SharedReferenceCount.ReferenceController;
  (pUVar41->MeshSpatial).Object = pTVar66;
  (pUVar41->MeshSpatial).SharedReferenceCount.ReferenceController = pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_14d0);
  pUVar41 = (this->ActivityContext).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar38 = (this->SelectionMechanic).field0_0x0.DebugPtr,
     pUVar38 != (UPolygonSelectionMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar38);
  }
  (pUVar41->SelectionMechanic).field0_0x0 = (this->SelectionMechanic).field0_0x0;
  pUVar41 = (this->ActivityContext).field0_0x0.DebugPtr;
  local_5e8 = *(longlong *)&pUVar41->EmitActivityStart;
  uVar10 = *(undefined8 *)&(pUVar41->EmitActivityStart).field_0x8;
  local_5d8 = *(longlong *)&(pUVar41->EmitActivityStart).field_0x10;
  uStack_5d0 = *(undefined8 *)&(pUVar41->EmitActivityStart).field_0x18;
  uVar57 = *(undefined8 *)&(pUVar41->EmitActivityStart).field_0x20;
  plStack_5c0 = *(longlong **)&(pUVar41->EmitActivityStart).field_0x28;
  *(code **)&pUVar41->EmitActivityStart =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UEditMeshPolygonsTool::Setup'::__l2::<lambda_10>,void,FText_const_&>::
       Call;
  *(undefined8 *)&(pUVar41->EmitActivityStart).field_0x8 = uStack_5e0;
  *(undefined4 *)&(pUVar41->EmitActivityStart).field_0x10 = 0x52952f20;
  *(undefined4 *)&(pUVar41->EmitActivityStart).field_0x14 = 1;
  *(UEditMeshPolygonsTool **)&(pUVar41->EmitActivityStart).field_0x18 = this;
  *(undefined8 *)&(pUVar41->EmitActivityStart).field_0x20 = local_5c8;
  *(undefined8 *)&(pUVar41->EmitActivityStart).field_0x28 = 0;
  uStack_5e0 = uVar10;
  local_5c8 = uVar57;
  if (local_5e8 != 0) {
    plVar20 = &local_5d8;
    if (plStack_5c0 != (longlong *)0x0) {
      plVar20 = plStack_5c0;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  pUVar41 = (this->ActivityContext).field0_0x0.DebugPtr;
  local_5b8 = *(longlong *)&pUVar41->EmitCurrentMeshChangeAndUpdate;
  uVar10 = *(undefined8 *)&(pUVar41->EmitCurrentMeshChangeAndUpdate).field_0x8;
  local_5a8 = *(longlong *)&(pUVar41->EmitCurrentMeshChangeAndUpdate).field_0x10;
  uStack_5a0 = *(undefined8 *)&(pUVar41->EmitCurrentMeshChangeAndUpdate).field_0x18;
  uVar57 = *(undefined8 *)&(pUVar41->EmitCurrentMeshChangeAndUpdate).field_0x20;
  plStack_590 = *(longlong **)&(pUVar41->EmitCurrentMeshChangeAndUpdate).field_0x28;
  *(code **)&pUVar41->EmitCurrentMeshChangeAndUpdate =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UEditMeshPolygonsTool::Setup'::__l2::<lambda_11>,void,FText_const_&,TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>,UE::Geometry::FGroupTopologySelection_const_&>
       ::Call;
  *(undefined8 *)&(pUVar41->EmitCurrentMeshChangeAndUpdate).field_0x8 = uStack_5b0;
  *(undefined4 *)&(pUVar41->EmitCurrentMeshChangeAndUpdate).field_0x10 = 0x52952f40;
  *(undefined4 *)&(pUVar41->EmitCurrentMeshChangeAndUpdate).field_0x14 = 1;
  *(UEditMeshPolygonsTool **)&(pUVar41->EmitCurrentMeshChangeAndUpdate).field_0x18 = this;
  *(undefined8 *)&(pUVar41->EmitCurrentMeshChangeAndUpdate).field_0x20 = local_598;
  *(undefined8 *)&(pUVar41->EmitCurrentMeshChangeAndUpdate).field_0x28 = 0;
  uStack_5b0 = uVar10;
  local_598 = uVar57;
  if (local_5b8 != 0) {
    plVar20 = &local_5a8;
    if (plStack_590 != (longlong *)0x0) {
      plVar20 = plStack_590;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  pUVar35 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar42 = UInteractiveToolManager::GetContextObjectStore(pUVar35);
  pUVar23 = Z_Construct_UClass_UPolyEditActivityContext_NoRegister();
  UContextObjectStore::RemoveContextObjectsOfType(pUVar42,pUVar23);
  pUVar35 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar42 = UInteractiveToolManager::GetContextObjectStore(pUVar35);
  UContextObjectStore::AddContextObject
            (pUVar42,(UObject *)(this->ActivityContext).field0_0x0.DebugPtr);
  pUVar26 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar26,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar23 = Z_Construct_UClass_UPolyEditExtrudeActivity_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters(&local_f18,pUVar23);
  local_f18.Outer = pUVar26;
  pUVar43 = (UPolyEditExtrudeActivity *)StaticConstructObject_Internal(&local_f18);
  if ((ForElementType<FSetElementId>)local_f18.PropertyInitCallback._0_8_ !=
      (ForElementType<FSetElementId>)0x0) {
    plVar20 = (longlong *)&local_f18.PropertyInitCallback.field_0x10;
    if ((longlong *)local_f18.PropertyInitCallback._40_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_f18.PropertyInitCallback._40_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar43 != (UPolyEditExtrudeActivity *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar43);
  }
  (this->ExtrudeActivity).field0_0x0.DebugPtr = pUVar43;
  (**(code **)(pUVar43->_padding_ + 0x2b0))(pUVar43,this);
  pUVar26 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar26,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar23 = Z_Construct_UClass_UPolyEditInsetOutsetActivity_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_e98,pUVar23);
  local_e98._8_8_ = pUVar26;
  pUVar44 = (UPolyEditInsetOutsetActivity *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e98);
  if ((double)local_e98._64_8_ != 0.0) {
    FVar58.Data = local_e48;
    if (local_e30.Data != (FScriptContainerElement *)0x0) {
      FVar58.Data = local_e30.Data;
    }
    (**(code **)(*(longlong *)FVar58.Data + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar44 != (UPolyEditInsetOutsetActivity *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar44);
  }
  (this->InsetOutsetActivity).field0_0x0.DebugPtr = pUVar44;
  (**(code **)(pUVar44->_padding_ + 0x2b0))(pUVar44,this);
  pFVar17 = (FDynamicMesh3 *)GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pFVar17,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar23 = Z_Construct_UClass_UPolyEditCutFacesActivity_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_e18,pUVar23);
  local_e18._8_8_ = pFVar17;
  pUVar45 = (UPolyEditCutFacesActivity *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e18);
  if ((ForElementType<FSetElementId>)local_e18._64_8_ != (ForElementType<FSetElementId>)0x0) {
    plVar20 = local_dc8;
    if (local_db0 != (longlong *)0x0) {
      plVar20 = local_db0;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar45 != (UPolyEditCutFacesActivity *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar45);
  }
  (this->CutFacesActivity).field0_0x0.DebugPtr = pUVar45;
  (**(code **)(pUVar45->_padding_ + 0x2b0))(pUVar45,this);
  local_1610 = FText::AsLocalizable_Advanced_LocText
                         (&local_14c8,L"UEditMeshPolygonsTool",L"CutFacesActivityLabel",L"Cut Faces"
                         );
  local_1798 = (this->CutFacesActivity).field0_0x0;
  local_1618 = &local_1798;
  TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&>_>
            ((TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
              *)&this->ActivityLabels,
             (TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&> *)local_1718,
             (bool *)&local_1618);
  if (local_14c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_14c8.TextData.Reference + 0x10))();
  }
  ::FName::FName(&local_1788,"PolyEd.CutFaces");
  local_1790 = (this->CutFacesActivity).field0_0x0;
  local_1608 = &local_1790;
  local_1600 = &local_1788;
  TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&>_>
            ((TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
              *)&this->ActivityIconNames,
             (TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&> *)(local_1718 + 0xc),
             (bool *)&local_1608);
  pUVar26 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar26,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar23 = Z_Construct_UClass_UPolyEditPlanarProjectionUVActivity_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_d98,pUVar23);
  local_d98._8_8_ = pUVar26;
  pUVar46 = (UPolyEditPlanarProjectionUVActivity *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d98);
  if ((ForElementType<FSetElementId>)local_d98._64_8_ != (ForElementType<FSetElementId>)0x0) {
    plVar20 = local_d48;
    if (local_d30 != (longlong *)0x0) {
      plVar20 = local_d30;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar46 != (UPolyEditPlanarProjectionUVActivity *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar46);
  }
  (this->PlanarProjectionUVActivity).field0_0x0.DebugPtr = pUVar46;
  (**(code **)(pUVar46->_padding_ + 0x2b0))(pUVar46,this);
  local_15f0 = FText::AsLocalizable_Advanced_LocText
                         (&local_14b8,L"UEditMeshPolygonsTool",L"UVProjectActivityLabel",
                          L"UV Project");
  local_1780 = (this->PlanarProjectionUVActivity).field0_0x0;
  local_15f8 = &local_1780;
  TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&>_>
            ((TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
              *)&this->ActivityLabels,
             (TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&> *)local_1700,
             (bool *)&local_15f8);
  if (local_14b8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_14b8.TextData.Reference + 0x10))();
  }
  ::FName::FName((FName *)((longlong)&local_1778.Key + 4),"PolyEd.ProjectUVs");
  local_16f8 = (this->PlanarProjectionUVActivity).field0_0x0;
  local_15e8 = &local_16f8;
  local_15e0 = (undefined1 *)((longlong)&local_1778.Key + 4);
  TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&>_>
            ((TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
              *)&this->ActivityIconNames,
             (TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&> *)(local_1700 + 4),
             (bool *)&local_15e8);
  pUVar26 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar26,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar23 = Z_Construct_UClass_UPolyEditInsertEdgeLoopActivity_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_d18,pUVar23);
  local_d18._8_8_ = pUVar26;
  pUVar47 = (UPolyEditInsertEdgeLoopActivity *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d18);
  if ((FScriptContainerElement *)local_d18._64_8_ != (FScriptContainerElement *)0x0) {
    FVar49 = (ForElementType<FSetElementId>)local_cc8;
    if (local_cb0 != (ForElementType<FSetElementId>)0x0) {
      FVar49 = local_cb0;
    }
    (**(code **)(*(longlong *)FVar49 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar47 != (UPolyEditInsertEdgeLoopActivity *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar47);
  }
  (this->InsertEdgeLoopActivity).field0_0x0.DebugPtr = pUVar47;
  (**(code **)(*(longlong *)pUVar47 + 0x2b0))(pUVar47,this);
  local_15d0 = FText::AsLocalizable_Advanced_LocText
                         (&local_14a8,L"UEditMeshPolygonsTool",L"InsertEdgeLoopsActivityLabel",
                          L"Insert Edge Loops");
  local_1768 = (this->InsertEdgeLoopActivity).field0_0x0;
  local_15d8 = &local_1768;
  TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&>_>
            ((TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
              *)&this->ActivityLabels,&local_1778,(bool *)&local_15d8);
  if (local_14a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_14a8.TextData.Reference + 0x10))();
  }
  ::FName::FName(&local_1758,"PolyEd.InsertEdgeLoop");
  local_1760 = (this->InsertEdgeLoopActivity).field0_0x0;
  local_15c8 = &local_1760;
  local_15c0 = &local_1758;
  TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&>_>
            ((TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
              *)&this->ActivityIconNames,
             (TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&> *)local_16f0,
             (bool *)&local_15c8);
  pUVar26 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar26,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar23 = Z_Construct_UClass_UPolyEditInsertEdgeActivity_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c98,pUVar23);
  local_c98._8_8_ = pUVar26;
  pUVar48 = (UPolyEditInsertEdgeActivity *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c98);
  if (local_c98._64_8_ != 0) {
    plVar20 = (longlong *)(local_c98 + 0x50);
    if ((longlong *)local_c98._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_c98._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar48 != (UPolyEditInsertEdgeActivity *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar48);
  }
  (this->InsertEdgeActivity).field0_0x0.DebugPtr = pUVar48;
  (**(code **)(pUVar48->_padding_ + 0x2b0))(pUVar48,this);
  local_15b0 = FText::AsLocalizable_Advanced_LocText
                         (&local_1498,L"UEditMeshPolygonsTool",L"InsertEdgesActivityLabel",
                          L"Insert Edges");
  local_1750 = (this->InsertEdgeActivity).field0_0x0;
  local_15b8 = &local_1750;
  TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&>_>
            ((TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
              *)&this->ActivityLabels,
             (TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&> *)local_16d8,
             (bool *)&local_15b8);
  if (local_1498.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1498.TextData.Reference + 0x10))();
  }
  ::FName::FName(&local_1740,"PolyEd.InsertGroupEdge");
  local_1748 = (this->InsertEdgeActivity).field0_0x0;
  local_1698 = &local_1748;
  local_1690 = &local_1740;
  TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&>_>
            ((TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
              *)&this->ActivityIconNames,
             (TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&> *)(local_16d8 + 4),
             (bool *)&local_1698);
  FVar49 = (ForElementType<FSetElementId>)GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)FVar49,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar23 = Z_Construct_UClass_UPolyEditBevelEdgeActivity_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c18,pUVar23);
  local_c18._8_8_ = FVar49;
  pUVar50 = (UPolyEditBevelEdgeActivity *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c18);
  if (local_c18._64_8_ != 0) {
    plVar20 = (longlong *)(local_c18 + 0x50);
    if ((longlong *)local_c18._104_8_ != (longlong *)0x0) {
      plVar20 = (longlong *)local_c18._104_8_;
    }
    (**(code **)(*plVar20 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar50 != (UPolyEditBevelEdgeActivity *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar50);
  }
  (this->BevelEdgeActivity).field0_0x0.DebugPtr = pUVar50;
  (**(code **)(pUVar50->_padding_ + 0x2b0))(pUVar50,this);
  local_1680 = FText::AsLocalizable_Advanced_LocText
                         (&local_1488,L"UEditMeshPolygonsTool",L"BevelActivityLabel",L"Bevel");
  local_1738 = (this->BevelEdgeActivity).field0_0x0;
  local_1688 = &local_1738;
  TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&>_>
            ((TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
              *)&this->ActivityLabels,
             (TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&> *)local_17d8,
             (bool *)&local_1688);
  if (local_1488.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1488.TextData.Reference + 0x10))();
  }
  ::FName::FName(&local_1728,"PolyEd.Bevel");
  local_1730 = (this->BevelEdgeActivity).field0_0x0;
  local_1678 = &local_1730;
  local_1670 = &local_1728;
  TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&>_>
            ((TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
              *)&this->ActivityIconNames,
             (TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&> *)(local_17d8 + 4),
             (bool *)&local_1678);
  pUVar26 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar26,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar23 = Z_Construct_UClass_UPolyEditExtrudeEdgeActivity_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b98,pUVar23);
  local_b98._8_8_ = pUVar26;
  pUVar51 = (UPolyEditExtrudeEdgeActivity *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b98);
  if (local_b98._64_8_ != 0) {
    FVar58.Data = (FScriptContainerElement *)(local_b98 + 0x50);
    if (local_b30.Data != (FScriptContainerElement *)0x0) {
      FVar58.Data = local_b30.Data;
    }
    (**(code **)(*(longlong *)FVar58.Data + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar51 != (UPolyEditExtrudeEdgeActivity *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar51);
  }
  (this->ExtrudeEdgeActivity).field0_0x0.DebugPtr = pUVar51;
  (**(code **)(*(longlong *)pUVar51 + 0x2b0))(pUVar51,this);
  local_1660 = FText::AsLocalizable_Advanced_LocText
                         (&local_1478,L"UEditMeshPolygonsTool",L"EdgeExtrudeActivityLabel",
                          L"Extrude Edges");
  local_1720 = (this->ExtrudeEdgeActivity).field0_0x0;
  local_1668 = &local_1720;
  TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&>_>
            ((TSet<TTuple<UInteractiveToolActivity_*,FText>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>,FDefaultSetAllocator>
              *)&this->ActivityLabels,
             (TPairInitializer<UInteractiveToolActivity_*_&&,FText_&&> *)local_17d0,
             (bool *)&local_1668);
  if (local_1478.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1478.TextData.Reference + 0x10))();
  }
  ::FName::FName((FName *)(local_1718 + 4),"PolyEd.ExtrudeEdge");
  local_16d0 = (this->ExtrudeEdgeActivity).field0_0x0;
  local_1658 = &local_16d0;
  local_1650 = local_1718 + 4;
  TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&>_>
            ((TSet<TTuple<UInteractiveToolActivity_*,FName>,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>,FDefaultSetAllocator>
              *)&this->ActivityIconNames,
             (TPairInitializer<UInteractiveToolActivity_*_&&,FName_&&> *)(local_17d0 + 4),
             (bool *)&local_1658);
  (**(code **)(this->_padding_ + 0x318))
            (this,((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_);
  (**(code **)(this->_padding_ + 0x318))(this,(this->CommonProps).field0_0x0.DebugPtr);
  pUVar24 = (this->TopologyProperties).field0_0x0.DebugPtr;
  if (this->bTriangleMode == false) {
    (**(code **)(this->_padding_ + 0x318))(this,pUVar24);
  }
  else {
    pUVar24->bAddExtraCorners = false;
  }
  UE::ToolTarget::HideSourceObject((UToolTarget *)this->_padding_);
  pUVar35 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar52 = UInteractiveToolManager::GetPairedGizmoManager(pUVar35);
  local_17e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_17e8.Data.ArrayNum = 0;
  local_17e8.Data.ArrayMax = 0;
  pUVar53 = UE::TransformGizmoUtil::CreateCustomRepositionableTransformGizmo
                      (pUVar52,FullTranslateRotateScale,this,&local_17e8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar53 != (UCombinedTransformGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar53);
  }
  (this->TransformGizmo).field0_0x0.DebugPtr = pUVar53;
  if (local_17e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_17e8.Data.AllocatorInstance.Data);
  }
  pUVar53 = (this->TransformGizmo).field0_0x0.DebugPtr;
  if (pUVar53 == (UCombinedTransformGizmo *)0x0) {
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_1092627319186521108>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\EditMeshPolygonsTool.cpp"
                        ,0x3ec,"TransformGizmo");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    (**(code **)(*(longlong *)pUVar53 + 0x328))(pUVar53,1);
    pUVar53 = (this->TransformGizmo).field0_0x0.DebugPtr;
    local_518 = &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
    local_510 = `UEditMeshPolygonsTool::Setup'::__l62::<lambda_12>::<lambda_invoker_cdecl>;
    local_528[0] = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call
    ;
    local_500 = (undefined ***)0x0;
    (**(code **)(*(longlong *)pUVar53 + 0x318))(pUVar53,local_528);
    if (local_528[0] != (code *)0x0) {
      pppuVar59 = &local_518;
      if (local_500 != (undefined ***)0x0) {
        pppuVar59 = local_500;
      }
      (*(code *)(*pppuVar59)[2])();
    }
    pUVar54 = NewObject<UTransformProxy>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar54 != (UTransformProxy *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar54);
    }
    uStack_1860 = 0;
    local_1868 = (UEditMeshPolygonsTool *)OnGizmoTransformChanged;
    lStack_1460 = (ulonglong)uStack_185c << 0x20;
    local_1468 = OnGizmoTransformChanged;
    (this->TransformProxy).field0_0x0.DebugPtr = pUVar54;
    TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
    ::AddUObject<UEditMeshPolygonsTool>
              ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
                *)&pUVar54->OnTransformChanged,(UEditMeshPolygonsTool *)local_1580,
               (pmf_cc94ca15 *)this);
    local_1868 = (UEditMeshPolygonsTool *)OnBeginGizmoTransform;
    uStack_1860 = 0;
    lStack_1450 = (ulonglong)uStack_185c << 0x20;
    local_1458 = OnBeginGizmoTransform;
    TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
    AddUObject<UEditMeshPolygonsTool>
              ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
                *)&((this->TransformProxy).field0_0x0.DebugPtr)->OnBeginTransformEdit,
               (UEditMeshPolygonsTool *)(local_1580 + 8),(pmf_d272edbe *)this);
    local_1868 = (UEditMeshPolygonsTool *)OnEndGizmoTransform;
    uStack_1860 = 0;
    lStack_1440 = (ulonglong)uStack_185c << 0x20;
    local_1448 = OnEndGizmoTransform;
    TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
    AddUObject<UEditMeshPolygonsTool>
              ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
                *)&((this->TransformProxy).field0_0x0.DebugPtr)->OnEndTransformEdit,
               (UEditMeshPolygonsTool *)local_1570,(pmf_d272edbe *)this);
    local_1868 = this;
    TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
    AddWeakLambda<UEditMeshPolygonsTool,_UEditMeshPolygonsTool::Setup_::__l62::<lambda_13>_>
              ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
                *)&((this->TransformProxy).field0_0x0.DebugPtr)->OnEndPivotEdit,
               (UEditMeshPolygonsTool *)local_13f8,(<lambda_13> *)this);
    pUVar53 = (this->TransformGizmo).field0_0x0.DebugPtr;
    pcVar6 = *(code **)(*(longlong *)pUVar53 + 0x330);
    lVar55 = (**(code **)(this->_padding_ + 0x2d8))(this);
    pTVar18 = (TPropertyWatcher<ELocalFrameMode> *)(lVar55 + 0x28);
    if (lVar55 == 0) {
      pTVar18 = pTVar67;
    }
    (*pcVar6)(pUVar53,(this->TransformProxy).field0_0x0.DebugPtr,pTVar18);
    pUVar53 = (this->TransformGizmo).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar53 + 0x360))(pUVar53,0);
  }
  pUVar56 = NewObject<UDragAlignmentMechanic>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar56 != (UDragAlignmentMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar56);
  }
  (this->DragAlignmentMechanic).field0_0x0.DebugPtr = pUVar56;
  (**(code **)(pUVar56->_padding_ + 0x2b0))(pUVar56,this);
  local_438.Translation.XY.m128d_f64[0]._0_4_ =
       *(undefined4 *)&(this->WorldTransform).Translation.field0_0x0;
  local_438.Translation.XY.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)&(this->WorldTransform).Translation.field0_0x0 + 4);
  uVar57 = *(undefined8 *)((longlong)&(this->WorldTransform).Rotation.field0_0x0 + 0x18);
  local_438.Rotation.ZW.m128d_f64[1]._0_4_ = (undefined4)uVar57;
  local_438.Rotation.ZW.m128d_f64[1]._4_4_ = (undefined4)((ulonglong)uVar57 >> 0x20);
  local_438.Scale3D.XY.m128d_f64[0]._0_4_ =
       *(undefined4 *)&(this->WorldTransform).Scale3D.field0_0x0;
  local_438.Scale3D.XY.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)&(this->WorldTransform).Scale3D.field0_0x0 + 4);
  local_13a8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UEditMeshPolygonsTool::Setup'::`2'::<lambda_14>,0,0>::
                _vftable_;
  local_438.Rotation.XY.m128d_f64[0] = (this->WorldTransform).Rotation.field0_0x0._s_0.X;
  local_438.Rotation.XY.m128d_f64[1] = (this->WorldTransform).Rotation.field0_0x0._s_0.Y;
  local_438.Translation.ZW.m128d_f64[0] = (this->WorldTransform).Translation.field0_0x0._s_0.Z;
  local_1598 = (this->WorldTransform).Scale3D.field0_0x0._s_0.Z;
  local_438.Rotation.ZW.m128d_f64[0]._0_4_ =
       *(undefined4 *)((longlong)&(this->WorldTransform).Rotation.field0_0x0 + 0x10);
  local_438.Rotation.ZW.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)&(this->WorldTransform).Rotation.field0_0x0 + 0x14);
  auVar8._4_8_ = local_438.Rotation.XY.m128d_f64[1];
  auVar8._0_4_ = local_438.Translation.XY.m128d_f64[0]._4_4_;
  auVar70._0_8_ = auVar8._0_8_ << 0x20;
  auVar70._8_4_ = *(undefined4 *)((longlong)&(this->WorldTransform).Translation.field0_0x0 + 8);
  auVar70._12_4_ = *(undefined4 *)((longlong)&(this->WorldTransform).Translation.field0_0x0 + 0xc);
  local_438.Translation.XY.m128d_f64[1] = auVar70._8_8_;
  auVar9._4_8_ = local_438.Translation.XY.m128d_f64[1];
  auVar9._0_4_ = local_438.Scale3D.XY.m128d_f64[0]._4_4_;
  auVar71._0_8_ = auVar9._0_8_ << 0x20;
  auVar71._8_4_ = *(undefined4 *)((longlong)&(this->WorldTransform).Scale3D.field0_0x0 + 8);
  auVar71._12_4_ = *(undefined4 *)((longlong)&(this->WorldTransform).Scale3D.field0_0x0 + 0xc);
  local_438.Scale3D.XY.m128d_f64[1] = auVar71._8_8_;
  local_438.Translation.ZW.m128d_f64[1] = 0.0;
  local_438.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_1390.DebugPtr = (UPolyEditExtrudeEdgeActivity *)0x0;
  local_13f8._64_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UEditMeshPolygonsTool::Setup'::__l2::<lambda_14>,UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*>
       ::Call;
  local_13a0 = (TObjectPtr<UPolyEditExtrudeEdgeActivity>_u_0)this;
  local_438.Scale3D.ZW.m128d_f64[0] = local_1598;
  FDragAlignmentBase::InitializeDeformedMeshRayCast
            ((FDragAlignmentBase *)&((this->DragAlignmentMechanic).field0_0x0.DebugPtr)->_padding_,
             (TFunction<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)> *
             )(local_13f8 + 0x40),&local_438,&this->LinearDeformer);
  pUVar53 = (this->TransformGizmo).field0_0x0.DebugPtr;
  if (pUVar53 != (UCombinedTransformGizmo *)0x0) {
    FDragAlignmentBase::AddToGizmo
              ((FDragAlignmentBase *)&((this->DragAlignmentMechanic).field0_0x0.DebugPtr)->_padding_
               ,pUVar53,(TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0,
               (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0);
  }
  if (((this->Topology).Object == (FGroupTopology *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((((this->Topology).Object)->Groups).ArrayNum < 2) {
    plVar20 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar6 = *(code **)(*plVar20 + 0x360);
    pFVar21 = FText::AsLocalizable_Advanced_LocText
                        (&local_1438,L"UEditMeshPolygonsTool",L"NoGroupsWarning",
                         L"This object has only a single Polygroup. Use the GrpGen, GrpPnt or TriSel (Create Polygroup) tools to modify PolyGroups."
                        );
    (*pcVar6)(plVar20,pFVar21,3);
    if (local_1438.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_1438.TextData.Reference + 0x10))();
    }
  }
  if (*(void **)&this->PostSetupFunction != (void *)0x0) {
    local_1708 = this;
    UE::Core::Private::Function::CheckCallable(*(void **)&this->PostSetupFunction);
    pcVar6 = *(code **)&this->PostSetupFunction;
    plVar20 = *(longlong **)&(this->PostSetupFunction).field_0x28;
    plVar60 = (longlong *)&(this->PostSetupFunction).field_0x10;
    if (plVar20 != (longlong *)0x0) {
      plVar60 = plVar20;
    }
    uVar57 = (**(code **)(*plVar60 + 8))();
    (*pcVar6)(uVar57,&local_1708);
  }
  if ((FName *)local_16f0._8_8_ != (FName *)0x0) {
    FMemory::Free((void *)local_16f0._8_8_);
  }
  return;
}

// SimplifyByGroups @ 14cc80a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::SimplifyByGroups(UEditMeshPolygonsTool *this)

{
  FDynamicMesh3 *pFVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  FGroupTopology *pFVar4;
  code *pcVar5;
  bool bVar6;
  longlong *plVar7;
  FText *pFVar8;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar9;
  TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
  *pTVar10;
  FFunctionStorage *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined1 auStack_2b8 [32];
  code *local_298;
  TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
  local_288;
  TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
  *local_270;
  FText local_260;
  FText local_250;
  undefined1 local_238 [48];
  FFunctionStorage local_208;
  double local_1e8;
  FProgressCancel *local_1e0;
  FGroupTopologySelection local_1d8;
  FDynamicMeshChangeTracker local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  pFVar1 = (this->CurrentMesh).Object;
  UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(&local_e8,pFVar1);
  UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_e8);
  uVar15 = (pFVar1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar1->TriangleRefCounts).RefCounts.CurBlockUsed;
  uVar14 = 0;
  if ((uVar15 != 0) &&
     (pFVar2 = (pFVar1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar14 = 0,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar14 = 1;
    uVar13 = 1;
    if ((int)uVar15 < 2) goto joined_r0x00014cc80b08;
    do {
      uVar12 = (ulonglong)((uint)uVar14 & 0x1ff);
      lVar3 = *(longlong *)(pFVar2 + (uVar14 >> 9) * 8);
      if ((*(short *)(lVar3 + uVar12 * 2) != 0) && (*(short *)(lVar3 + uVar12 * 2) != -1)) break;
      uVar13 = (uint)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
    } while ((int)uVar13 < (int)uVar15);
  }
  uVar13 = (uint)uVar14;
joined_r0x00014cc80b08:
  do {
    if (uVar13 == uVar15) {
      pFVar4 = (this->Topology).Object;
      local_288._padding_ =
           (longlong)
           &
           ___7__TFunction_OwnedObject_P6A_AV__TArray_UFIndex3i_Geometry_UE__V__TSizedDefaultAllocator__0CA_____AEBV__TGeneralPolygon2_N_Geometry_UE___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_270 = (TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
                   *)0x0;
      local_288.Obj = UE::Geometry::ConstrainedDelaunayTriangulate<double>;
      local_238._0_8_ = &___7FPolygroupRemesh_Geometry_UE__6B_;
      local_298 = UE::Core::Private::Function::
                  TFunctionRefCaller<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,UE::Geometry::TGeneralPolygon2<double>_const_&>
                  ::Call;
      local_238._32_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>,UE::Geometry::TGeneralPolygon2<double>_const_&>
           ::Call;
      local_208.HeapAllocation = (FFunctionStorage *)0x0;
      local_238._8_8_ = pFVar1;
      local_238._16_8_ = pFVar4;
      UE::Core::Private::Function::
      TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
      ::CloneToEmptyStorage(&local_288,&local_208);
      local_1e8 = __real_3fb999999999999a;
      local_1e0 = (FProgressCancel *)0x0;
      if (((pFVar1 == (FDynamicMesh3 *)0x0) || (pFVar4 == (FGroupTopology *)0x0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Mesh != nullptr && Topology != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\Operations\\PolygroupRemesh.h"
                             ,0x44,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_298 != (code *)0x0) {
        pTVar10 = &local_288;
        if (local_270 !=
            (TFunction_OwnedObject<TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_>_(__cdecl*)(UE::Geometry::TGeneralPolygon2<double>_const_&),0,0>
             *)0x0) {
          pTVar10 = local_270;
        }
        (**(code **)(pTVar10->_padding_ + 0x10))();
      }
      bVar6 = UE::Geometry::FPolygroupRemesh::Compute((FPolygroupRemesh *)local_238);
      if (!bVar6) {
        plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
        pcVar5 = *(code **)(*plVar7 + 0x360);
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_260,L"UEditMeshPolygonsTool",L"OnSimplifyByGroupFailures",
                            L"Some polygroups could not be correctly simplified");
        (*pcVar5)(plVar7,pFVar8,3);
        if (local_260.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_260.TextData.Reference + 0x10))();
        }
      }
      UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_1d8);
      TVar9 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_e8);
      pFVar8 = FText::AsLocalizable_Advanced_LocText
                         (&local_250,L"UEditMeshPolygonsTool",L"PolyMeshSimplifyByGroup",
                          L"Simplify by Group");
      EmitCurrentMeshChangeAndUpdate(this,pFVar8,TVar9,&local_1d8);
      if (local_250.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_250.TextData.Reference + 0x10))();
      }
      local_1d8.SelectedEdgeIDs.HashSize = 0;
      if (local_1d8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1d8.SelectedEdgeIDs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1d8.SelectedEdgeIDs.Elements);
      local_1d8.SelectedCornerIDs.HashSize = 0;
      if (local_1d8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1d8.SelectedCornerIDs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1d8.SelectedCornerIDs.Elements);
      local_1d8.SelectedGroupIDs.HashSize = 0;
      if (local_1d8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1d8.SelectedGroupIDs.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_1d8);
      local_238._0_8_ = &___7FPolygroupRemesh_Geometry_UE__6B_;
      if ((code *)local_238._32_8_ != (code *)0x0) {
        pFVar11 = &local_208;
        if (local_208.HeapAllocation != (FFunctionStorage *)0x0) {
          pFVar11 = local_208.HeapAllocation;
        }
        (**(code **)(*(longlong *)pFVar11->InlineAllocation + 0x10))();
      }
      UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_e8);
      return;
    }
    while( true ) {
      UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle(&local_e8,(int)uVar14,true);
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      if ((int)uVar15 <= (int)uVar13) break;
      while( true ) {
        uVar12 = (ulonglong)((uint)uVar14 & 0x1ff);
        lVar3 = *(longlong *)
                 ((pFVar1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 (uVar14 >> 9) * 8);
        if ((*(short *)(lVar3 + uVar12 * 2) != 0) && (*(short *)(lVar3 + uVar12 * 2) != -1)) break;
        uVar13 = (uint)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        if ((int)uVar15 <= (int)uVar13) goto joined_r0x00014cc80b08;
      }
    }
  } while( true );
}

// StartActivity @ 14cc81240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UEditMeshPolygonsTool::StartActivity
          (UEditMeshPolygonsTool *this,TObjectPtr<UInteractiveToolActivity> param_1)

{
  UCombinedTransformGizmo *pUVar1;
  UInteractiveToolActivity *pUVar2;
  longlong lVar3;
  ITextData *pIVar4;
  code *pcVar5;
  undefined8 uVar6;
  TRefCountPtr<ITextData> TVar7;
  char cVar8;
  bool bVar9;
  int iVar10;
  UInteractiveToolManager *pUVar11;
  TScriptInterface<IToolHostCustomizationAPI> *pTVar12;
  FName *pFVar13;
  FText *pFVar14;
  longlong *plVar15;
  longlong *plVar16;
  uint uVar17;
  undefined ***pppuVar18;
  undefined1 *puVar19;
  undefined1 auStack_2c8 [32];
  FText *local_2a8;
  undefined1 local_298 [4];
  undefined1 local_294 [4];
  FText local_290;
  FText local_280;
  FText local_270;
  FText local_260;
  FText local_250;
  FText local_240;
  FText local_230;
  FText local_220;
  TScriptInterface<IToolHostCustomizationAPI> local_210;
  code *local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  longlong *plStack_1d0;
  code *local_1c8;
  undefined8 uStack_1c0;
  undefined **local_1b8;
  UEditMeshPolygonsTool *pUStack_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined ***pppuStack_1a0;
  FText local_198;
  FName local_188;
  FText local_180;
  FText local_170;
  FText local_160;
  FText local_150;
  code *local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  longlong *plStack_110;
  FText local_108;
  FName local_f8;
  FText local_f0;
  FText local_e0;
  code *local_c8;
  undefined8 uStack_c0;
  undefined **local_b8;
  code *pcStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined ***pppuStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  longlong *plStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  EndCurrentActivity(this,Accept);
  iVar10 = (**(code **)(**(longlong **)param_1.field0_0x0 + 0x2f0))();
  if (iVar10 != 0) {
    if (this->bTerminateOnPendingActionComplete == false) {
      return;
    }
    plVar16 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar5 = *(code **)(*plVar16 + 0x390);
    local_2a8 = FText::FText(&local_220);
    (*pcVar5)(plVar16,this,2,0);
    if (local_220.TextData.Reference == (ITextData *)0x0) {
      return;
    }
    (**(code **)((longlong)*local_220.TextData.Reference + 0x10))();
    return;
  }
  pUVar1 = (this->TransformGizmo).field0_0x0.DebugPtr;
  if (pUVar1 != (UCombinedTransformGizmo *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x360))();
  }
  UMeshTopologySelectionMechanic::SetIsEnabled
            ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr,false,
             true);
  (**(code **)(this->_padding_ + 0x338))
            (this,((this->SelectionMechanic).field0_0x0.DebugPtr)->_padding_,0);
  (**(code **)(this->_padding_ + 0x338))(this,(this->TopologyProperties).field0_0x0.DebugPtr,0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)param_1.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_1.field0_0x0);
  }
                    /* WARNING: Load size is inaccurate */
  (this->CurrentActivity).field0_0x0 = *param_1.field0_0x0;
  if (this->bTerminateOnPendingActionComplete != false) {
    (**(code **)(this->_padding_ + 0x338))(this,(this->CommonProps).field0_0x0.DebugPtr,0);
    goto LAB_14cc81dea;
  }
  pUVar11 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
  pTVar12 = IToolHostCustomizationAPI::Find(&local_210,pUVar11);
  uStack_1e0 = (UEditMeshPolygonsTool *)CONCAT44(uStack_1e0._4_4_,(undefined4)uStack_1e0);
  uStack_120 = (UEditMeshPolygonsTool *)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120);
  if ((*(longlong *)pTVar12 == 0) ||
     (plVar16 = *(longlong **)&pTVar12->field_0x8,
     uStack_1e0 = (UEditMeshPolygonsTool *)CONCAT44(uStack_1e0._4_4_,(undefined4)uStack_1e0),
     uStack_120 = (UEditMeshPolygonsTool *)CONCAT44(uStack_120._4_4_,(undefined4)uStack_120),
     plVar16 == (longlong *)0x0)) goto LAB_14cc81dea;
  FText::AsLocalizable_Advanced_LocText
            (&local_290,L"UEditMeshPolygonsTool",L"SubActionFallbackLabel",L"Current Action");
  cVar8 = (**(code **)(*(longlong *)(this->CurrentActivity).field0_0x0.DebugPtr + 0x300))();
  if (cVar8 == '\0') {
    local_138 = (code *)0x0;
    plStack_110 = (longlong *)0x0;
    FText::FText(&local_108);
    pUVar2 = (this->CurrentActivity).field0_0x0.DebugPtr;
    local_f8.ComparisonIndex.Value = 0xffffffff;
    local_f8.Number = 0;
    local_f0.TextData.Reference = (ITextData *)0x0;
    uVar17 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
             -0x7a143595;
    local_f0.Flags = 0;
    local_e0.TextData.Reference = (ITextData *)0x0;
    local_e0.Flags = 0;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    if (*(int *)&(this->ActivityLabels).field_0x8 != *(int *)&(this->ActivityLabels).field_0x34) {
      puVar19 = *(undefined1 **)&(this->ActivityLabels).field_0x40;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = &(this->ActivityLabels).field_0x38;
      }
      iVar10 = *(int *)(puVar19 +
                       (ulonglong)
                       (*(int *)&(this->ActivityLabels).field_0x48 - 1U & (uVar17 >> 0x10 ^ uVar17))
                       * 4);
      if (iVar10 != -1) {
        lVar3 = *(longlong *)&this->ActivityLabels;
        do {
          if (*(UInteractiveToolActivity **)((longlong)iVar10 * 0x20 + lVar3) == pUVar2) {
            pFVar14 = TMapBase<UInteractiveToolActivity_*,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>_>
                      ::FindChecked((TMapBase<UInteractiveToolActivity_*,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>_>
                                     *)&this->ActivityLabels,pUVar2);
            goto LAB_14cc81a3e;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar3);
        } while (iVar10 != -1);
      }
    }
    pFVar14 = &local_290;
LAB_14cc81a3e:
    TVar7.Reference = local_108.TextData.Reference;
    pIVar4 = (pFVar14->TextData).Reference;
    if (local_108.TextData.Reference != pIVar4) {
      local_108.TextData.Reference = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_294);
      }
      if (TVar7.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar7.Reference + 0x10))(TVar7.Reference);
      }
    }
    local_108.Flags = pFVar14->Flags;
    pUVar2 = (this->CurrentActivity).field0_0x0.DebugPtr;
    uVar17 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
             -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    if (*(int *)&(this->ActivityIconNames).field_0x8 !=
        *(int *)&(this->ActivityIconNames).field_0x34) {
      puVar19 = *(undefined1 **)&(this->ActivityIconNames).field_0x40;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = &(this->ActivityIconNames).field_0x38;
      }
      iVar10 = *(int *)(puVar19 +
                       (ulonglong)
                       (*(int *)&(this->ActivityIconNames).field_0x48 - 1U &
                       (uVar17 >> 0x10 ^ uVar17)) * 4);
      if (iVar10 != -1) {
        do {
          if (*(UInteractiveToolActivity **)
               (*(longlong *)&this->ActivityIconNames + (longlong)iVar10 * 0x18) == pUVar2) {
            pFVar13 = TMapBase<UInteractiveToolActivity_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>_>
                      ::FindChecked((TMapBase<UInteractiveToolActivity_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>_>
                                     *)&this->ActivityIconNames,pUVar2);
            if (((pFVar13 != &local_f8) &&
                (local_f8 = *pFVar13, local_f8.ComparisonIndex.Value.Value == 0xffffffff)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  ), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            break;
          }
          iVar10 = *(int *)(*(longlong *)&this->ActivityIconNames + 0x10 + (longlong)iVar10 * 0x18);
        } while (iVar10 != -1);
      }
    }
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_240,L"UEditMeshPolygonsTool",L"CompleteSubActionButton",L"Done");
    if (pFVar14 != &local_f0) {
      if (local_f0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))(local_f0.TextData.Reference);
      }
      FText::FText(&local_f0,pFVar14);
      if ((local_f0.TextData.Reference == (ITextData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_240.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_240.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_230,L"UEditMeshPolygonsTool",L"CompleteSubActionTooltip",
                         L"Exit the current activity.");
    if (pFVar14 != &local_e0) {
      if (local_e0.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))(local_e0.TextData.Reference);
      }
      FText::FText(&local_e0,pFVar14);
      if ((local_e0.TextData.Reference == (ITextData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_230.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_230.TextData.Reference + 0x10))();
    }
    plStack_40 = plStack_110;
    uVar6 = uStack_130;
    local_68 = (longlong)local_138;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`UEditMeshPolygonsTool::StartActivity'::__l22::<lambda_3>,void>::
                Call;
    uStack_130 = uStack_60;
    local_118 = local_48;
    uStack_114 = uStack_44;
    plStack_110 = (longlong *)0x0;
    local_128 = 0x52953060;
    uStack_124 = 1;
    uStack_120 = this;
    uStack_60 = uVar6;
    if (local_68 != 0) {
      plVar15 = local_58;
      if (plStack_40 != (longlong *)0x0) {
        plVar15 = plStack_40;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    (**(code **)(*plVar16 + 0x28))(plVar16);
    if (local_e0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_e0.TextData.Reference + 0x10))();
    }
    if (local_f0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f0.TextData.Reference + 0x10))();
    }
    if (local_108.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
    }
    if (local_138 != (code *)0x0) {
      plVar16 = (longlong *)&local_128;
      plVar15 = plStack_110;
      goto LAB_14cc81da1;
    }
  }
  else {
    local_1f8 = (code *)0x0;
    local_1b8 = &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
    plStack_1d0 = (longlong *)0x0;
    pUStack_1b0 = (UEditMeshPolygonsTool *)
                  IToolHostCustomizationAPI::FAcceptCancelButtonOverrideParams::<lambda_68_>::
                  <lambda_invoker_cdecl>;
    local_1c8 = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
    pppuStack_1a0 = (undefined ***)0x0;
    FText::FText(&local_198);
    pUVar2 = (this->CurrentActivity).field0_0x0.DebugPtr;
    local_188.ComparisonIndex.Value = 0xffffffff;
    local_188.Number = 0;
    local_180.TextData.Reference = (ITextData *)0x0;
    uVar17 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
             -0x7a143595;
    local_180.Flags = 0;
    local_170.TextData.Reference = (ITextData *)0x0;
    local_170.Flags = 0;
    local_160.TextData.Reference = (ITextData *)0x0;
    local_160.Flags = 0;
    local_150.TextData.Reference = (ITextData *)0x0;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    local_150.Flags = 0;
    if (*(int *)&(this->ActivityLabels).field_0x8 != *(int *)&(this->ActivityLabels).field_0x34) {
      puVar19 = *(undefined1 **)&(this->ActivityLabels).field_0x40;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = &(this->ActivityLabels).field_0x38;
      }
      iVar10 = *(int *)(puVar19 +
                       (ulonglong)
                       (*(int *)&(this->ActivityLabels).field_0x48 - 1U & (uVar17 >> 0x10 ^ uVar17))
                       * 4);
      if (iVar10 != -1) {
        lVar3 = *(longlong *)&this->ActivityLabels;
        do {
          if (*(UInteractiveToolActivity **)((longlong)iVar10 * 0x20 + lVar3) == pUVar2) {
            pFVar14 = TMapBase<UInteractiveToolActivity_*,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>_>
                      ::FindChecked((TMapBase<UInteractiveToolActivity_*,FText,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FText,0>_>
                                     *)&this->ActivityLabels,pUVar2);
            goto LAB_14cc8147e;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar3);
        } while (iVar10 != -1);
      }
    }
    pFVar14 = &local_290;
LAB_14cc8147e:
    TVar7.Reference = local_198.TextData.Reference;
    pIVar4 = (pFVar14->TextData).Reference;
    if (local_198.TextData.Reference != pIVar4) {
      local_198.TextData.Reference = pIVar4;
      if (pIVar4 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar4 + 8))(pIVar4,local_298);
      }
      if (TVar7.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar7.Reference + 0x10))(TVar7.Reference);
      }
    }
    local_198.Flags = pFVar14->Flags;
    pUVar2 = (this->CurrentActivity).field0_0x0.DebugPtr;
    uVar17 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
             -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    if (*(int *)&(this->ActivityIconNames).field_0x8 !=
        *(int *)&(this->ActivityIconNames).field_0x34) {
      puVar19 = *(undefined1 **)&(this->ActivityIconNames).field_0x40;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = &(this->ActivityIconNames).field_0x38;
      }
      iVar10 = *(int *)(puVar19 +
                       (ulonglong)
                       (*(int *)&(this->ActivityIconNames).field_0x48 - 1U &
                       (uVar17 >> 0x10 ^ uVar17)) * 4);
      if (iVar10 != -1) {
        lVar3 = *(longlong *)&this->ActivityIconNames;
        do {
          if (*(UInteractiveToolActivity **)(lVar3 + (longlong)iVar10 * 0x18) == pUVar2) {
            pFVar13 = TMapBase<UInteractiveToolActivity_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>_>
                      ::FindChecked((TMapBase<UInteractiveToolActivity_*,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UInteractiveToolActivity_*,FName,0>_>
                                     *)&this->ActivityIconNames,pUVar2);
            if (((pFVar13 != &local_188) &&
                (local_188 = *pFVar13, local_188.ComparisonIndex.Value.Value == 0xffffffff)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x171,
                                   L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                                  ), bVar9)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            break;
          }
          iVar10 = *(int *)(lVar3 + 0x10 + (longlong)iVar10 * 0x18);
        } while (iVar10 != -1);
      }
    }
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_280,L"UEditMeshPolygonsTool",L"AcceptSubActionButton",
                         L"Accept Action");
    if (pFVar14 != &local_180) {
      if (local_180.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_180.TextData.Reference + 0x10))(local_180.TextData.Reference);
      }
      FText::FText(&local_180,pFVar14);
      if ((local_180.TextData.Reference == (ITextData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_280.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_280.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_270,L"UEditMeshPolygonsTool",L"AcceptSubActionTooltip",
                         L"Accept the action currently being performed.");
    if (pFVar14 != &local_170) {
      if (local_170.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_170.TextData.Reference + 0x10))(local_170.TextData.Reference);
      }
      FText::FText(&local_170,pFVar14);
      if ((local_170.TextData.Reference == (ITextData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_270.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_270.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_260,L"UEditMeshPolygonsTool",L"CancelSubActionButton",
                         L"Cancel Action");
    if (pFVar14 != &local_160) {
      if (local_160.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_160.TextData.Reference + 0x10))(local_160.TextData.Reference);
      }
      FText::FText(&local_160,pFVar14);
      if ((local_160.TextData.Reference == (ITextData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_260.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_260.TextData.Reference + 0x10))();
    }
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_250,L"UEditMeshPolygonsTool",L"CancelSubActionTooltip",
                         L"Cancel the action currently being performed.");
    if (pFVar14 != &local_150) {
      if (local_150.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_150.TextData.Reference + 0x10))(local_150.TextData.Reference);
      }
      FText::FText(&local_150,pFVar14);
      if ((local_150.TextData.Reference == (ITextData *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x171,
                             L"TOptional::Emplace(...) - optionals should not be unset by an emplacement"
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (local_250.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_250.TextData.Reference + 0x10))();
    }
    pppuStack_a0 = pppuStack_1a0;
    pcStack_b0 = (code *)pUStack_1b0;
    local_b8 = local_1b8;
    uVar6 = uStack_1c0;
    local_c8 = local_1c8;
    local_1c8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UEditMeshPolygonsTool::StartActivity'::__l17::<lambda_1>,bool>::
                Call;
    uStack_1c0 = uStack_c0;
    local_1a8 = local_a8;
    uStack_1a4 = uStack_a4;
    pppuStack_1a0 = (undefined ***)0x0;
    local_1b8 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UEditMeshPolygonsTool::StartActivity'::`17'::<lambda_1>,0,0>
                 ::_vftable_;
    pUStack_1b0 = this;
    uStack_c0 = uVar6;
    if (local_c8 != (code *)0x0) {
      pppuVar18 = &local_b8;
      if (pppuStack_a0 != (undefined ***)0x0) {
        pppuVar18 = pppuStack_a0;
      }
      (*(code *)(*pppuVar18)[2])();
    }
    plStack_70 = plStack_1d0;
    uVar6 = uStack_1f0;
    local_98 = (longlong)local_1f8;
    local_1f8 = UE::Core::Private::Function::
                TFunctionRefCaller<`UEditMeshPolygonsTool::StartActivity'::__l17::<lambda_2>,void,bool>
                ::Call;
    uStack_1f0 = uStack_90;
    local_1d8 = local_78;
    uStack_1d4 = uStack_74;
    plStack_1d0 = (longlong *)0x0;
    local_1e8 = 0x52953040;
    uStack_1e4 = 1;
    uStack_1e0 = this;
    uStack_90 = uVar6;
    if (local_98 != 0) {
      plVar15 = local_88;
      if (plStack_70 != (longlong *)0x0) {
        plVar15 = plStack_70;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    (**(code **)(*plVar16 + 0x18))(plVar16);
    if (local_150.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_150.TextData.Reference + 0x10))();
    }
    if (local_160.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_160.TextData.Reference + 0x10))();
    }
    if (local_170.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_170.TextData.Reference + 0x10))();
    }
    if (local_180.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_180.TextData.Reference + 0x10))();
    }
    if (local_198.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
    }
    if (local_1c8 != (code *)0x0) {
      pppuVar18 = &local_1b8;
      if (pppuStack_1a0 != (undefined ***)0x0) {
        pppuVar18 = pppuStack_1a0;
      }
      (*(code *)(*pppuVar18)[2])();
    }
    if (local_1f8 != (code *)0x0) {
      plVar16 = (longlong *)&local_1e8;
      plVar15 = plStack_1d0;
LAB_14cc81da1:
      if (plVar15 != (longlong *)0x0) {
        plVar16 = plVar15;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  if (local_290.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_290.TextData.Reference + 0x10))();
    SetActionButtonPanelsVisible(this,false);
    return;
  }
LAB_14cc81dea:
  SetActionButtonPanelsVisible(this,false);
  return;
}

// StaticRegisterNativesUEditMeshPolygonsTool @ 14cc824d0

void __cdecl UEditMeshPolygonsTool::StaticRegisterNativesUEditMeshPolygonsTool(void)

{
  return;
}

// SupportsNestedAcceptCommand @ 14cc82720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UEditMeshPolygonsTool::SupportsNestedAcceptCommand(UEditMeshPolygonsTool *this)

{
  return true;
}

// SupportsNestedCancelCommand @ 14cc82740

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UEditMeshPolygonsTool::SupportsNestedCancelCommand(UEditMeshPolygonsTool *this)

{
  return true;
}

// UpdateDeformerChangeFromROI @ 14cc84d10

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
UEditMeshPolygonsTool::UpdateDeformerChangeFromROI(UEditMeshPolygonsTool *this,bool param_1)

{
  FMeshVertexChangeBuilder *this_00;
  FDynamicMesh3 *pFVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_58;
  
  this_00 = this->ActiveVertexChange;
  if (this_00 != (FMeshVertexChangeBuilder *)0x0) {
    pFVar1 = (this->CurrentMesh).Object;
    local_58.Elements._0_8_ = 0;
    local_58.Elements._8_8_ = 0;
    local_58.Elements._32_8_ = 0;
    local_58.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_58.Elements._48_8_ = _UNK_150631d98;
    local_58.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_58.HashSize = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&local_58,&(this->LinearDeformer).ModifiedVertices);
    FMeshVertexChangeBuilder::SaveVertices<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              (this_00,pFVar1,&local_58,!param_1);
    FMeshVertexChangeBuilder::SaveOverlayNormals
              (this->ActiveVertexChange,pFVar1,&(this->LinearDeformer).ModifiedOverlayNormals,
               !param_1);
  }
  return;
}

// UpdateDeformerFromSelection @ 14cc84dd0

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
UEditMeshPolygonsTool::UpdateDeformerFromSelection
          (UEditMeshPolygonsTool *this,FGroupTopologySelection *param_1)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  code *pcVar2;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  if (*(int *)&(param_1->SelectedCornerIDs).Elements.field_0x8 -
      *(int *)&(param_1->SelectedCornerIDs).Elements.field_0x34 < 1) {
    if (*(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x8 -
        *(int *)&(param_1->SelectedEdgeIDs).Elements.field_0x34 < 1) {
      if (*(int *)&(param_1->SelectedGroupIDs).Elements.field_0x8 -
          *(int *)&(param_1->SelectedGroupIDs).Elements.field_0x34 < 1) {
        return;
      }
      pcVar2 = *(code **)((this->LinearDeformer)._padding_ + 8);
    }
    else {
      pcVar2 = *(code **)((this->LinearDeformer)._padding_ + 0x18);
      param_1 = (FGroupTopologySelection *)&param_1->SelectedEdgeIDs;
    }
  }
  else {
    pcVar2 = *(code **)((this->LinearDeformer)._padding_ + 0x10);
    param_1 = (FGroupTopologySelection *)&param_1->SelectedCornerIDs;
  }
  pTVar1 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                     (&param_1->SelectedGroupIDs,&local_18);
  (*pcVar2)(&this->LinearDeformer,pTVar1);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// UpdateFromCurrentMesh @ 14cc851c0

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
UEditMeshPolygonsTool::UpdateFromCurrentMesh(UEditMeshPolygonsTool *this,bool param_1)

{
  UPolygonSelectionMechanic *this_00;
  code *pcVar1;
  bool bVar2;
  
  UPreviewMesh::UpdatePreview
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (this->CurrentMesh).Object,FullUpdate,AllVertexAttribs);
  this_00 = (this->SelectionMechanic).field0_0x0.DebugPtr;
  this->bSpatialDirty = true;
  UMeshTopologySelectionMechanic::NotifyMeshChanged
            ((UMeshTopologySelectionMechanic *)this_00,param_1);
  if (param_1) {
    if ((this->Topology).Object == (FGroupTopology *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    (**(code **)(((this->Topology).Object)->_padding_ + 8))();
  }
  return;
}

// UpdateGizmoFrame @ 14cc85260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
UEditMeshPolygonsTool::UpdateGizmoFrame(UEditMeshPolygonsTool *this,TFrame3<double> *param_1)

{
  undefined8 uVar1;
  UCombinedTransformGizmo *this_00;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined8 in_XMM1_Qb;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 auStack_d8 [48];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_1 == (TFrame3<double> *)0x0) {
    uVar9 = *(undefined4 *)&(this->LastGeometryFrame).Origin.field0_0x0;
    uVar10 = *(undefined4 *)((longlong)&(this->LastGeometryFrame).Origin.field0_0x0 + 4);
    uVar11 = *(undefined4 *)((longlong)&(this->LastGeometryFrame).Origin.field0_0x0 + 8);
    uVar12 = *(undefined4 *)((longlong)&(this->LastGeometryFrame).Origin.field0_0x0 + 0xc);
    if (((this->CommonProps).field0_0x0.DebugPtr)->LocalFrameMode != FromGeometry) {
      uVar4 = *(undefined8 *)&(this->WorldTransform).Rotation.field0_0x0;
      uVar5 = *(undefined8 *)((longlong)&(this->WorldTransform).Rotation.field0_0x0 + 8);
      auVar7 = *(undefined1 (*) [16])((longlong)&(this->WorldTransform).Rotation.field0_0x0 + 0x10);
      uVar1 = *(undefined8 *)((longlong)&(this->LastGeometryFrame).Origin.field0_0x0 + 0x10);
      in_XMM1_Qb = 0;
      local_78.Rotation.ZW.m128d_f64[1]._0_4_ = (undefined4)uVar4;
      local_78.Rotation.ZW.m128d_f64[1]._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_78.Translation.XY.m128d_f64[0]._0_4_ = (undefined4)uVar5;
      local_78.Translation.XY.m128d_f64[0]._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_78.Translation.XY.m128d_f64[1]._0_4_ = auVar7._0_4_;
      local_78.Translation.XY.m128d_f64[1]._4_4_ = auVar7._4_4_;
      local_a8 = (undefined4)uVar1;
      uStack_a4 = (undefined4)((ulonglong)uVar1 >> 0x20);
      auVar6._0_8_ = auVar7._8_8_;
      auVar6._8_4_ = auVar7._8_4_;
      auVar6._12_4_ = auVar7._12_4_;
      auStack_90._8_8_ = auVar6._0_8_;
      goto LAB_14cc85301;
    }
    local_a8 = *(undefined4 *)((longlong)&(this->LastGeometryFrame).Origin.field0_0x0 + 0x10);
    uStack_a4 = *(undefined4 *)((longlong)&(this->LastGeometryFrame).Origin.field0_0x0 + 0x14);
    local_78.Rotation.ZW.m128d_f64[1]._0_4_ =
         *(undefined4 *)&(this->LastGeometryFrame).Rotation.field0_0x0;
    local_78.Rotation.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)&(this->LastGeometryFrame).Rotation.field0_0x0 + 4);
    local_78.Translation.XY.m128d_f64[0]._0_4_ =
         *(undefined4 *)((longlong)&(this->LastGeometryFrame).Rotation.field0_0x0 + 8);
    local_78.Translation.XY.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)&(this->LastGeometryFrame).Rotation.field0_0x0 + 0xc);
    local_78.Translation.XY.m128d_f64[1]._0_4_ =
         *(undefined4 *)((longlong)&(this->LastGeometryFrame).Rotation.field0_0x0 + 0x10);
    local_78.Translation.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)&(this->LastGeometryFrame).Rotation.field0_0x0 + 0x14);
    auStack_90._8_8_ =
         *(ulonglong *)((longlong)&(this->LastGeometryFrame).Rotation.field0_0x0 + 0x18);
  }
  else {
    uVar9 = *(undefined4 *)&(param_1->Origin).field0_0x0;
    uVar10 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 4);
    uVar11 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 8);
    uVar12 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0xc);
    local_a8 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0x10);
    uStack_a4 = *(undefined4 *)((longlong)&(param_1->Origin).field0_0x0 + 0x14);
    local_78.Rotation.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)&(param_1->Rotation).field0_0x0;
    local_78.Rotation.ZW.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)&(param_1->Rotation).field0_0x0 + 4);
    local_78.Translation.XY.m128d_f64[0]._0_4_ =
         *(undefined4 *)((longlong)&(param_1->Rotation).field0_0x0 + 8);
    local_78.Translation.XY.m128d_f64[0]._4_4_ =
         *(undefined4 *)((longlong)&(param_1->Rotation).field0_0x0 + 0xc);
    local_78.Translation.XY.m128d_f64[1]._0_4_ =
         *(undefined4 *)((longlong)&(param_1->Rotation).field0_0x0 + 0x10);
    local_78.Translation.XY.m128d_f64[1]._4_4_ =
         *(undefined4 *)((longlong)&(param_1->Rotation).field0_0x0 + 0x14);
    auStack_90._8_8_ = *(ulonglong *)((longlong)&(param_1->Rotation).field0_0x0 + 0x18);
  }
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auStack_90._8_8_;
LAB_14cc85301:
  uStack_a0 = CONCAT44(local_78.Rotation.ZW.m128d_f64[1]._4_4_,
                       local_78.Rotation.ZW.m128d_f64[1]._0_4_);
  local_98 = CONCAT44(local_78.Translation.XY.m128d_f64[0]._4_4_,
                      local_78.Translation.XY.m128d_f64[0]._0_4_);
  auStack_90._4_4_ = local_78.Translation.XY.m128d_f64[1]._4_4_;
  auStack_90._0_4_ = local_78.Translation.XY.m128d_f64[1]._0_4_;
  local_78.Rotation.XY.m128d_f64[1]._0_4_ = local_78.Translation.XY.m128d_f64[0]._0_4_;
  local_78.Rotation.XY.m128d_f64[1]._4_4_ = local_78.Translation.XY.m128d_f64[0]._4_4_;
  if (((this->CommonProps).field0_0x0.DebugPtr)->bLockRotation != false) {
    auStack_90._0_16_ =
         *(undefined1 (*) [16])((longlong)&(this->LockedTransfomerFrame).Rotation.field0_0x0 + 0x10)
    ;
    uVar1 = *(undefined8 *)&(this->LockedTransfomerFrame).Rotation.field0_0x0;
    uVar4 = *(undefined8 *)((longlong)&(this->LockedTransfomerFrame).Rotation.field0_0x0 + 8);
    local_98._0_4_ = (undefined4)uVar4;
    local_98._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_a0._0_4_ = (undefined4)uVar1;
    uStack_a0._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    in_XMM1_Qb = auStack_90._8_8_;
    auVar6._8_4_ = auStack_90._8_4_;
    auVar6._0_8_ = in_XMM1_Qb;
    auVar6._12_4_ = auStack_90._12_4_;
    local_78.Rotation.ZW.m128d_f64[1]._0_4_ = (undefined4)uStack_a0;
    local_78.Rotation.ZW.m128d_f64[1]._4_4_ = uStack_a0._4_4_;
    local_78.Rotation.XY.m128d_f64[1]._0_4_ = (undefined4)local_98;
    local_78.Rotation.XY.m128d_f64[1]._4_4_ = local_98._4_4_;
    local_78.Translation.XY.m128d_f64[1]._0_4_ = auStack_90._0_4_;
    local_78.Translation.XY.m128d_f64[1]._4_4_ = auStack_90._4_4_;
    uStack_a0 = uVar1;
    local_98 = uVar4;
  }
  *(undefined4 *)&(this->LastTransformerFrame).Origin.field0_0x0 = uVar9;
  *(undefined4 *)((longlong)&(this->LastTransformerFrame).Origin.field0_0x0 + 4) = uVar10;
  *(undefined4 *)((longlong)&(this->LastTransformerFrame).Origin.field0_0x0 + 8) = uVar11;
  *(undefined4 *)((longlong)&(this->LastTransformerFrame).Origin.field0_0x0 + 0xc) = uVar12;
  *(undefined4 *)((longlong)&(this->LastTransformerFrame).Origin.field0_0x0 + 0x10) = local_a8;
  *(undefined4 *)((longlong)&(this->LastTransformerFrame).Origin.field0_0x0 + 0x14) = uStack_a4;
  *(undefined4 *)&(this->LastTransformerFrame).Rotation.field0_0x0 =
       local_78.Rotation.ZW.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)&(this->LastTransformerFrame).Rotation.field0_0x0 + 4) =
       local_78.Rotation.ZW.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)&(this->LastTransformerFrame).Rotation.field0_0x0 + 8) =
       local_78.Rotation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)&(this->LastTransformerFrame).Rotation.field0_0x0 + 0xc) =
       local_78.Rotation.XY.m128d_f64[1]._4_4_;
  *(undefined4 *)((longlong)&(this->LastTransformerFrame).Rotation.field0_0x0 + 0x10) =
       local_78.Translation.XY.m128d_f64[1]._0_4_;
  *(undefined4 *)((longlong)&(this->LastTransformerFrame).Rotation.field0_0x0 + 0x14) =
       local_78.Translation.XY.m128d_f64[1]._4_4_;
  (this->LastTransformerFrame).Rotation.field0_0x0._s_0.W = auVar6._0_8_;
  this_00 = (this->TransformGizmo).field0_0x0.DebugPtr;
  if (this_00 != (UCombinedTransformGizmo *)0x0) {
    auVar2._4_8_ = auVar6._8_8_;
    auVar2._0_4_ = uStack_a4;
    auVar7._0_8_ = auVar2._0_8_ << 0x20;
    auVar7._8_4_ = local_78.Rotation.ZW.m128d_f64[1]._0_4_;
    auVar7._12_4_ = local_78.Rotation.ZW.m128d_f64[1]._4_4_;
    auVar3._4_8_ = in_XMM1_Qb;
    auVar3._0_4_ = local_78.Rotation.XY.m128d_f64[1]._4_4_;
    auVar8._0_8_ = auVar3._0_8_ << 0x20;
    auVar8._8_4_ = local_78.Translation.XY.m128d_f64[1]._0_4_;
    auVar8._12_4_ = local_78.Translation.XY.m128d_f64[1]._4_4_;
    local_78.Rotation.XY.m128d_f64[0] = auVar7._8_8_;
    local_78.Rotation.ZW.m128d_f64[1] = (double)auStack_90._8_8_;
    local_78.Rotation.ZW.m128d_f64[0] = auVar8._8_8_;
    local_78.Translation.XY.m128d_f64[0] = (double)CONCAT44(uVar10,uVar9);
    local_78.Translation.XY.m128d_f64[1]._4_4_ = uVar12;
    local_78.Translation.XY.m128d_f64[1]._0_4_ = uVar11;
    local_78.Translation.ZW.m128d_f64[0]._4_4_ = uStack_a4;
    local_78.Translation.ZW.m128d_f64[0]._0_4_ = local_a8;
    local_78.Translation.ZW.m128d_f64[1] = 0.0;
    local_78.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_78.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_78.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_78.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    UCombinedTransformGizmo::ReinitializeGizmoTransform(this_00,&local_78,true);
  }
  return;
}

// UpdateGizmoVisibility @ 14cc854a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UEditMeshPolygonsTool::UpdateGizmoVisibility(UEditMeshPolygonsTool *this)

{
  UCombinedTransformGizmo *pUVar1;
  double dVar2;
  bool bVar3;
  TFrame3<double> *pTVar4;
  TFrame3<double> local_48;
  
  bVar3 = UMeshTopologySelectionMechanic::HasSelection
                    ((UMeshTopologySelectionMechanic *)(this->SelectionMechanic).field0_0x0.DebugPtr
                    );
  if (((bVar3) && (((this->CommonProps).field0_0x0.DebugPtr)->bGizmoVisible != false)) &&
     ((this->CurrentActivity).field0_0x0.DebugPtr == (UInteractiveToolActivity *)0x0)) {
    pUVar1 = (this->TransformGizmo).field0_0x0.DebugPtr;
    if (pUVar1 != (UCombinedTransformGizmo *)0x0) {
      (**(code **)(*(longlong *)pUVar1 + 0x360))(pUVar1,1);
    }
    pTVar4 = UMeshTopologySelectionMechanic::GetSelectionFrame
                       ((UMeshTopologySelectionMechanic *)
                        (this->SelectionMechanic).field0_0x0.DebugPtr,&local_48,true,
                        &this->LastGeometryFrame);
    dVar2 = (pTVar4->Origin).field0_0x0._s_0.Y;
    (this->LastGeometryFrame).Origin.field0_0x0._s_0.X = (pTVar4->Origin).field0_0x0._s_0.X;
    (this->LastGeometryFrame).Origin.field0_0x0._s_0.Y = dVar2;
    dVar2 = (pTVar4->Rotation).field0_0x0._s_0.X;
    (this->LastGeometryFrame).Origin.field0_0x0._s_0.Z = (pTVar4->Origin).field0_0x0._s_0.Z;
    (this->LastGeometryFrame).Rotation.field0_0x0._s_0.X = dVar2;
    dVar2 = (pTVar4->Rotation).field0_0x0._s_0.Z;
    (this->LastGeometryFrame).Rotation.field0_0x0._s_0.Y = (pTVar4->Rotation).field0_0x0._s_0.Y;
    (this->LastGeometryFrame).Rotation.field0_0x0._s_0.Z = dVar2;
    (this->LastGeometryFrame).Rotation.field0_0x0._s_0.W = (pTVar4->Rotation).field0_0x0._s_0.W;
    UpdateGizmoFrame(this,(TFrame3<double> *)0x0);
    return;
  }
  pUVar1 = (this->TransformGizmo).field0_0x0.DebugPtr;
  if (pUVar1 != (UCombinedTransformGizmo *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cc85569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x360))(pUVar1,0);
    return;
  }
  return;
}

// _getUObject @ 14cc8a4b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall UEditMeshPolygonsTool::_getUObject(UEditMeshPolygonsTool *this)

{
  return (UObject *)&this[-1].PostSetupFunction.field_0x8;
}

// _getUObject`adjustor{288}' @ 14cc8a4bc

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UEditMeshPolygonsTool::_getUObject`adjustor{288}' (void)const __ptr64 */

UObject * __thiscall UEditMeshPolygonsTool::_getUObject_adjustor_288__(UEditMeshPolygonsTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UEditMeshPolygonsTool *)
                       &this[-1].LinearDeformer.FaceBoundaryVertsTemp.Elements.field_0x8);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{296}' @ 14cc8a4d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UEditMeshPolygonsTool::_getUObject`adjustor{296}' (void)const __ptr64 */

UObject * __thiscall UEditMeshPolygonsTool::_getUObject_adjustor_296__(UEditMeshPolygonsTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UEditMeshPolygonsTool *)&this[-1].LinearDeformer.FaceBoundaryVertsTemp);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{304}' @ 14cc8a4e4

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UEditMeshPolygonsTool::_getUObject`adjustor{304}' (void)const __ptr64 */

UObject * __thiscall UEditMeshPolygonsTool::_getUObject_adjustor_304__(UEditMeshPolygonsTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UEditMeshPolygonsTool *)&this[-1].LinearDeformer.FaceVertsTemp.HashSize);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{152}' @ 14cc8a4f8

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UEditMeshPolygonsTool::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall UEditMeshPolygonsTool::_getUObject_adjustor_152__(UEditMeshPolygonsTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UEditMeshPolygonsTool *)
                       &this[-1].LinearDeformer.ModifiedOverlayNormals.Hash.SecondaryData);
  return (UObject *)pUVar1;
}

