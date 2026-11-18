// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 119

// StaticClass @ 14cbff3b0

UClass * __cdecl UDynamicMeshSculptTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshSculptTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DynamicMeshSculptTool",
               &Z_Registration_Info_UClass_UDynamicMeshSculptTool.InnerSingleton,
               StaticRegisterNativesUDynamicMeshSculptTool,0xed0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshSculptTool>,
               InternalVTableHelperCtorCaller<UDynamicMeshSculptTool>,local_res8,
               UMeshSurfacePointTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshSculptTool.InnerSingleton;
}

// UDynamicMeshSculptTool @ 14cc1e230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDynamicMeshSculptTool * __thiscall
UDynamicMeshSculptTool::UDynamicMeshSculptTool(UDynamicMeshSculptTool *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UMeshSurfacePointTool::UMeshSurfacePointTool((UMeshSurfacePointTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->BrushProperties).field0_0x0.DebugPtr = (UDynamicMeshBrushProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  (this->SculptProperties).field0_0x0.DebugPtr = (UDynamicMeshBrushSculptProperties *)0x0;
  (this->SculptMaxBrushProperties).field0_0x0.DebugPtr = (USculptMaxBrushProperties *)0x0;
  (this->KelvinBrushProperties).field0_0x0.DebugPtr = (UKelvinBrushProperties *)0x0;
  (this->RemeshProperties).field0_0x0.DebugPtr = (UBrushRemeshProperties *)0x0;
  (this->GizmoProperties).field0_0x0.DebugPtr = (UFixedPlaneBrushProperties *)0x0;
  (this->ViewProperties).field0_0x0.DebugPtr = (UMeshEditingViewProperties *)0x0;
  (this->SculptToolActions).field0_0x0.DebugPtr = (UDynamicSculptToolActions *)0x0;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  (this->BrushEditBehavior).WeakPtr = (FWeakObjectPtr)0x0;
  (this->BrushIndicator).field0_0x0.DebugPtr = (UBrushStampIndicator *)0x0;
  (this->BrushIndicatorMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->BrushIndicatorMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UOctreeDynamicMeshComponent *)0x0;
  (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->InitialTargetTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->InitialTargetTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->InitialTargetTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->InitialTargetTransform).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.Y = (double)uVar1;
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar1;
  (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->CurTargetTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->CurTargetTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->CurTargetTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->CurTargetTransform).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CurTargetTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CurTargetTransform).Translation.field0_0x0._s_0.Y = (double)uVar1;
  (this->CurTargetTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->CurTargetTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar1;
  (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->OnDynamicMeshComponentChangedHandle).ID = 0;
  *(undefined8 *)&(this->ShowWireframeWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->ShowWireframeWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->ShowWireframeWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->ShowWireframeWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->MaterialModeWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->MaterialModeWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->MaterialModeWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x28 = 0;
  (this->CustomMaterialWatcher).CachedValue.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->CustomMaterialWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->CustomMaterialWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->CustomMaterialWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->FlatShadingWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->FlatShadingWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->FlatShadingWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->FlatShadingWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->ColorWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->ColorWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->ColorWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->ColorWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->TransparentColorWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->TransparentColorWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->TransparentColorWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->TransparentColorWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->OpacityWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->OpacityWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->OpacityWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->TwoSidedWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->TwoSidedWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->TwoSidedWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->TwoSidedWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->ImageWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->ImageWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->ImageWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->ImageWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->BrushTypeWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->BrushTypeWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->BrushTypeWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->GizmoPositionWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->GizmoPositionWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->GizmoPositionWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->GizmoPositionWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->GizmoRotationWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->GizmoRotationWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x28 = 0;
  (this->ActiveRemesher).Object = (FPersistentStampRemesher *)0x0;
  (this->ActiveRemesher).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BrushRelativeSizeRange).Min = 1.7976931348623157e+308;
  (this->BrushRelativeSizeRange).Max = -1.7976931348623157e+308;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveDragPlane).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveDragPlane).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->ActiveDragPlane).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.W = 1.0;
  (this->UpdateROITriBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UpdateROITriBuffer).ArrayNum = 0;
  (this->UpdateROITriBuffer).ArrayMax = 0;
  (this->VertexROIBuilder).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexROIBuilder).Values.ArrayNum = 0;
  (this->VertexROIBuilder).Values.ArrayMax = 0;
  (this->VertexROIBuilder).Bits = (long64 *)0x0;
  (this->VertexROIBuilder).NumWords = 0;
  (this->VertexROI).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexROI).ArrayNum = 0;
  (this->VertexROI).ArrayMax = 0;
  (this->TriangleROIBuilder).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleROIBuilder).Values.ArrayNum = 0;
  (this->TriangleROIBuilder).Values.ArrayMax = 0;
  (this->TriangleROIBuilder).Bits = (long64 *)0x0;
  (this->TriangleROIBuilder).NumWords = 0;
  *(undefined8 *)&(this->TriangleROI).Elements = 0;
  *(undefined8 *)&(this->TriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TriangleROI).Elements.field_0x20 = 0;
  this->LastBrushTriangleID = -1;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x34 = 0;
  (this->TriangleROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TriangleROI).HashSize = 0;
  *(undefined8 *)&this->PendingTargetUpdate = 0;
  *(undefined8 *)&(this->PendingTargetUpdate).field_0x8 = 0;
  this->ActivePressure = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PendingStampRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PendingStampRay).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->PendingStampRay).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PendingStampRay).Direction.field0_0x0._s_0.X = 0.0;
  (this->PendingStampRay).Direction.field0_0x0._s_0.Y = 0.0;
  (this->PendingStampRay).Direction.field0_0x0._s_0.Z = 1.0;
  this->StampTimestamp = 0;
  this->LastStampType = LastValue;
  this->PendingStampType = LastValue;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->BrushTargetMesh);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->BrushTargetMeshSpatial);
  (this->BrushTargetNormals).Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BrushTargetNormals).Normals.ArrayNum = 0;
  (this->BrushTargetNormals).Normals.ArrayMax = 0;
  (this->BrushTargetNormals).Mesh = (FDynamicMesh3 *)0x0;
  (this->ROIPositionBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROIPositionBuffer).ArrayNum = 0;
  (this->ROIPositionBuffer).ArrayMax = 0;
  this->SculptMaxFixedHeight = -1.0;
  this->bCachedFreezeTarget = false;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveFixedBrushPlane).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveFixedBrushPlane).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->ActiveFixedBrushPlane).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.W = 1.0;
  (this->NormalsBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalsBuffer).ArrayNum = 0;
  (this->NormalsBuffer).ArrayMax = 0;
  (this->NormalsVertexFlags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalsVertexFlags).ArrayNum = 0;
  (this->NormalsVertexFlags).ArrayMax = 0;
  *(undefined8 *)&(this->RemeshRemovedTriangles).Elements = 0;
  *(undefined8 *)&(this->RemeshRemovedTriangles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RemeshRemovedTriangles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RemeshRemovedTriangles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RemeshRemovedTriangles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RemeshRemovedTriangles).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->RemeshRemovedTriangles).Elements.field_0x30 = 0xffffffff;
  (this->RemeshRemovedTriangles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RemeshRemovedTriangles).HashSize = 0;
  *(undefined8 *)&(this->RemeshFinalTriangleROI).Elements = 0;
  *(undefined8 *)&(this->RemeshFinalTriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RemeshFinalTriangleROI).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RemeshFinalTriangleROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RemeshFinalTriangleROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RemeshFinalTriangleROI).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->RemeshFinalTriangleROI).Elements.field_0x30 = 0xffffffff;
  (this->RemeshFinalTriangleROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RemeshFinalTriangleROI).HashSize = 0;
  this->ActiveVertexChange = (FMeshVertexChangeBuilder *)0x0;
  this->ActiveMeshChange = (FDynamicMeshChangeTracker *)0x0;
  (this->LongTransactions).OpenCount = 0;
  (this->BrushTypeHistory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BrushTypeHistory).ArrayNum = 0;
  (this->BrushTypeHistory).ArrayMax = 0;
  this->BrushTypeHistoryIndex = 0;
  (this->PlaneTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->PlaneTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->LongTransactions).MaxOpen = 1;
  return this;
}

// UDynamicMeshSculptTool @ 14cc1e890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDynamicMeshSculptTool * __thiscall
UDynamicMeshSculptTool::UDynamicMeshSculptTool(UDynamicMeshSculptTool *this)

{
  undefined8 uVar1;
  
  UMeshSurfacePointTool::UMeshSurfacePointTool((UMeshSurfacePointTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->BrushProperties).field0_0x0.DebugPtr = (UDynamicMeshBrushProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  (this->SculptProperties).field0_0x0.DebugPtr = (UDynamicMeshBrushSculptProperties *)0x0;
  (this->SculptMaxBrushProperties).field0_0x0.DebugPtr = (USculptMaxBrushProperties *)0x0;
  (this->KelvinBrushProperties).field0_0x0.DebugPtr = (UKelvinBrushProperties *)0x0;
  (this->RemeshProperties).field0_0x0.DebugPtr = (UBrushRemeshProperties *)0x0;
  (this->GizmoProperties).field0_0x0.DebugPtr = (UFixedPlaneBrushProperties *)0x0;
  (this->ViewProperties).field0_0x0.DebugPtr = (UMeshEditingViewProperties *)0x0;
  (this->SculptToolActions).field0_0x0.DebugPtr = (UDynamicSculptToolActions *)0x0;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  (this->BrushEditBehavior).WeakPtr = (FWeakObjectPtr)0x0;
  (this->BrushIndicator).field0_0x0.DebugPtr = (UBrushStampIndicator *)0x0;
  (this->BrushIndicatorMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->BrushIndicatorMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UOctreeDynamicMeshComponent *)0x0;
  (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->InitialTargetTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->InitialTargetTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->InitialTargetTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->InitialTargetTransform).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.Y = (double)uVar1;
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar1;
  (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->CurTargetTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->CurTargetTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->CurTargetTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->CurTargetTransform).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CurTargetTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CurTargetTransform).Translation.field0_0x0._s_0.Y = (double)uVar1;
  (this->CurTargetTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->CurTargetTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar1;
  (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->OnDynamicMeshComponentChangedHandle).ID = 0;
  *(undefined8 *)&(this->ShowWireframeWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->ShowWireframeWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->ShowWireframeWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->ShowWireframeWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->MaterialModeWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->MaterialModeWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->MaterialModeWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x28 = 0;
  (this->CustomMaterialWatcher).CachedValue.WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&(this->CustomMaterialWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->CustomMaterialWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->CustomMaterialWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->FlatShadingWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->FlatShadingWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->FlatShadingWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->FlatShadingWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->ColorWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->ColorWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->ColorWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->ColorWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->TransparentColorWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->TransparentColorWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->TransparentColorWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->TransparentColorWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->OpacityWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->OpacityWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->OpacityWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->TwoSidedWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->TwoSidedWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->TwoSidedWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->TwoSidedWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->ImageWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->ImageWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->ImageWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->ImageWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->BrushTypeWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->BrushTypeWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->BrushTypeWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->GizmoPositionWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->GizmoPositionWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->GizmoPositionWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->GizmoPositionWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->GizmoRotationWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->GizmoRotationWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x28 = 0;
  (this->ActiveRemesher).Object = (FPersistentStampRemesher *)0x0;
  (this->ActiveRemesher).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->BrushRelativeSizeRange).Min = 1.7976931348623157e+308;
  (this->BrushRelativeSizeRange).Max = -1.7976931348623157e+308;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveDragPlane).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveDragPlane).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->ActiveDragPlane).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.W = 1.0;
  (this->UpdateROITriBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UpdateROITriBuffer).ArrayNum = 0;
  (this->UpdateROITriBuffer).ArrayMax = 0;
  (this->VertexROIBuilder).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexROIBuilder).Values.ArrayNum = 0;
  (this->VertexROIBuilder).Values.ArrayMax = 0;
  (this->VertexROIBuilder).Bits = (long64 *)0x0;
  (this->VertexROIBuilder).NumWords = 0;
  (this->VertexROI).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->VertexROI).ArrayNum = 0;
  (this->VertexROI).ArrayMax = 0;
  (this->TriangleROIBuilder).Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TriangleROIBuilder).Values.ArrayNum = 0;
  (this->TriangleROIBuilder).Values.ArrayMax = 0;
  (this->TriangleROIBuilder).Bits = (long64 *)0x0;
  (this->TriangleROIBuilder).NumWords = 0;
  *(undefined8 *)&(this->TriangleROI).Elements = 0;
  *(undefined8 *)&(this->TriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TriangleROI).Elements.field_0x20 = 0;
  this->LastBrushTriangleID = -1;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriangleROI).Elements.field_0x34 = 0;
  (this->TriangleROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TriangleROI).HashSize = 0;
  *(undefined8 *)&this->PendingTargetUpdate = 0;
  *(undefined8 *)&(this->PendingTargetUpdate).field_0x8 = 0;
  this->ActivePressure = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PendingStampRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PendingStampRay).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->PendingStampRay).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PendingStampRay).Direction.field0_0x0._s_0.X = 0.0;
  (this->PendingStampRay).Direction.field0_0x0._s_0.Y = 0.0;
  (this->PendingStampRay).Direction.field0_0x0._s_0.Z = 1.0;
  this->StampTimestamp = 0;
  this->LastStampType = LastValue;
  this->PendingStampType = LastValue;
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&this->BrushTargetMesh);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->BrushTargetMeshSpatial);
  (this->BrushTargetNormals).Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BrushTargetNormals).Normals.ArrayNum = 0;
  (this->BrushTargetNormals).Normals.ArrayMax = 0;
  (this->BrushTargetNormals).Mesh = (FDynamicMesh3 *)0x0;
  (this->ROIPositionBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ROIPositionBuffer).ArrayNum = 0;
  (this->ROIPositionBuffer).ArrayMax = 0;
  this->SculptMaxFixedHeight = -1.0;
  this->bCachedFreezeTarget = false;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveFixedBrushPlane).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveFixedBrushPlane).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->ActiveFixedBrushPlane).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.W = 1.0;
  (this->NormalsBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalsBuffer).ArrayNum = 0;
  (this->NormalsBuffer).ArrayMax = 0;
  (this->NormalsVertexFlags).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NormalsVertexFlags).ArrayNum = 0;
  (this->NormalsVertexFlags).ArrayMax = 0;
  *(undefined8 *)&(this->RemeshRemovedTriangles).Elements = 0;
  *(undefined8 *)&(this->RemeshRemovedTriangles).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RemeshRemovedTriangles).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RemeshRemovedTriangles).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RemeshRemovedTriangles).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RemeshRemovedTriangles).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->RemeshRemovedTriangles).Elements.field_0x30 = 0xffffffff;
  (this->RemeshRemovedTriangles).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RemeshRemovedTriangles).HashSize = 0;
  *(undefined8 *)&(this->RemeshFinalTriangleROI).Elements = 0;
  *(undefined8 *)&(this->RemeshFinalTriangleROI).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RemeshFinalTriangleROI).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RemeshFinalTriangleROI).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RemeshFinalTriangleROI).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RemeshFinalTriangleROI).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->RemeshFinalTriangleROI).Elements.field_0x30 = 0xffffffff;
  (this->RemeshFinalTriangleROI).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RemeshFinalTriangleROI).HashSize = 0;
  this->ActiveVertexChange = (FMeshVertexChangeBuilder *)0x0;
  this->ActiveMeshChange = (FDynamicMeshChangeTracker *)0x0;
  (this->LongTransactions).OpenCount = 0;
  (this->BrushTypeHistory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BrushTypeHistory).ArrayNum = 0;
  (this->BrushTypeHistory).ArrayMax = 0;
  this->BrushTypeHistoryIndex = 0;
  (this->PlaneTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->PlaneTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->LongTransactions).MaxOpen = 1;
  this->bEnableRemeshing = true;
  return this;
}

// ~UDynamicMeshSculptTool @ 14cc22bb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::~UDynamicMeshSculptTool(UDynamicMeshSculptTool *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  longlong *plVar3;
  longlong *plVar4;
  FLongTransactionTracker *local_res8;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  pFVar1 = (this->BrushTypeHistory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((this->LongTransactions).OpenCount != 0) {
    local_res8 = &this->LongTransactions;
    `UE::TransactionUtil::FLongTransactionTracker::~FLongTransactionTracker'::__l2::<lambda_1>::
    operator()(&local_res8);
  }
  (this->RemeshFinalTriangleROI).HashSize = 0;
  FVar2 = (this->RemeshFinalTriangleROI).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RemeshFinalTriangleROI).Elements);
  (this->RemeshRemovedTriangles).HashSize = 0;
  FVar2 = (this->RemeshRemovedTriangles).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RemeshRemovedTriangles).Elements);
  pFVar1 = (this->NormalsVertexFlags).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NormalsBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ROIPositionBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->BrushTargetNormals).Normals.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->BrushTargetMeshSpatial);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&this->BrushTargetMesh);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->PendingTargetUpdate).field_0x8);
  (this->TriangleROI).HashSize = 0;
  FVar2 = (this->TriangleROI).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TriangleROI).Elements);
  UE::Geometry::FUniqueIndexSet::~FUniqueIndexSet(&this->TriangleROIBuilder);
  pFVar1 = (this->VertexROI).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Geometry::FUniqueIndexSet::~FUniqueIndexSet(&this->VertexROIBuilder);
  pFVar1 = (this->UpdateROITriBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ActiveRemesher).SharedReferenceCount.ReferenceController);
  if (*(longlong *)&(this->GizmoRotationWatcher).OnValueChangedFunc != 0) {
    plVar3 = *(longlong **)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x28;
    plVar4 = (longlong *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->GizmoRotationWatcher).GetValueFunc != 0) {
    plVar3 = *(longlong **)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28;
    plVar4 = (longlong *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->GizmoPositionWatcher).OnValueChangedFunc != 0) {
    plVar3 = *(longlong **)&(this->GizmoPositionWatcher).OnValueChangedFunc.field_0x28;
    plVar4 = (longlong *)&(this->GizmoPositionWatcher).OnValueChangedFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->GizmoPositionWatcher).GetValueFunc != 0) {
    plVar3 = *(longlong **)&(this->GizmoPositionWatcher).GetValueFunc.field_0x28;
    plVar4 = (longlong *)&(this->GizmoPositionWatcher).GetValueFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->BrushTypeWatcher).OnValueChangedFunc != 0) {
    plVar3 = *(longlong **)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x28;
    plVar4 = (longlong *)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->BrushTypeWatcher).GetValueFunc != 0) {
    plVar3 = *(longlong **)&(this->BrushTypeWatcher).GetValueFunc.field_0x28;
    plVar4 = (longlong *)&(this->BrushTypeWatcher).GetValueFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->ImageWatcher).OnValueChangedFunc != 0) {
    plVar3 = *(longlong **)&(this->ImageWatcher).OnValueChangedFunc.field_0x28;
    plVar4 = (longlong *)&(this->ImageWatcher).OnValueChangedFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->ImageWatcher).GetValueFunc != 0) {
    plVar3 = *(longlong **)&(this->ImageWatcher).GetValueFunc.field_0x28;
    plVar4 = (longlong *)&(this->ImageWatcher).GetValueFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->TwoSidedWatcher).OnValueChangedFunc != 0) {
    plVar3 = *(longlong **)&(this->TwoSidedWatcher).OnValueChangedFunc.field_0x28;
    plVar4 = (longlong *)&(this->TwoSidedWatcher).OnValueChangedFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->TwoSidedWatcher).GetValueFunc != 0) {
    plVar3 = *(longlong **)&(this->TwoSidedWatcher).GetValueFunc.field_0x28;
    plVar4 = (longlong *)&(this->TwoSidedWatcher).GetValueFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->OpacityWatcher).OnValueChangedFunc != 0) {
    plVar3 = *(longlong **)&(this->OpacityWatcher).OnValueChangedFunc.field_0x28;
    plVar4 = (longlong *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->OpacityWatcher).GetValueFunc != 0) {
    plVar3 = *(longlong **)&(this->OpacityWatcher).GetValueFunc.field_0x28;
    plVar4 = (longlong *)&(this->OpacityWatcher).GetValueFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->TransparentColorWatcher).OnValueChangedFunc != 0) {
    plVar3 = *(longlong **)&(this->TransparentColorWatcher).OnValueChangedFunc.field_0x28;
    plVar4 = (longlong *)&(this->TransparentColorWatcher).OnValueChangedFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->TransparentColorWatcher).GetValueFunc != 0) {
    plVar3 = *(longlong **)&(this->TransparentColorWatcher).GetValueFunc.field_0x28;
    plVar4 = (longlong *)&(this->TransparentColorWatcher).GetValueFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->ColorWatcher).OnValueChangedFunc != 0) {
    plVar3 = *(longlong **)&(this->ColorWatcher).OnValueChangedFunc.field_0x28;
    plVar4 = (longlong *)&(this->ColorWatcher).OnValueChangedFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->ColorWatcher).GetValueFunc != 0) {
    plVar3 = *(longlong **)&(this->ColorWatcher).GetValueFunc.field_0x28;
    plVar4 = (longlong *)&(this->ColorWatcher).GetValueFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->FlatShadingWatcher).OnValueChangedFunc != 0) {
    plVar3 = *(longlong **)&(this->FlatShadingWatcher).OnValueChangedFunc.field_0x28;
    plVar4 = (longlong *)&(this->FlatShadingWatcher).OnValueChangedFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->FlatShadingWatcher).GetValueFunc != 0) {
    plVar3 = *(longlong **)&(this->FlatShadingWatcher).GetValueFunc.field_0x28;
    plVar4 = (longlong *)&(this->FlatShadingWatcher).GetValueFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->CustomMaterialWatcher).OnValueChangedFunc != 0) {
    plVar3 = *(longlong **)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x28;
    plVar4 = (longlong *)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->CustomMaterialWatcher).GetValueFunc != 0) {
    plVar3 = *(longlong **)&(this->CustomMaterialWatcher).GetValueFunc.field_0x28;
    plVar4 = (longlong *)&(this->CustomMaterialWatcher).GetValueFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->MaterialModeWatcher).OnValueChangedFunc != 0) {
    plVar3 = *(longlong **)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x28;
    plVar4 = (longlong *)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->MaterialModeWatcher).GetValueFunc != 0) {
    plVar3 = *(longlong **)&(this->MaterialModeWatcher).GetValueFunc.field_0x28;
    plVar4 = (longlong *)&(this->MaterialModeWatcher).GetValueFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->ShowWireframeWatcher).OnValueChangedFunc != 0) {
    plVar3 = *(longlong **)&(this->ShowWireframeWatcher).OnValueChangedFunc.field_0x28;
    plVar4 = (longlong *)&(this->ShowWireframeWatcher).OnValueChangedFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (*(longlong *)&(this->ShowWireframeWatcher).GetValueFunc != 0) {
    plVar3 = *(longlong **)&(this->ShowWireframeWatcher).GetValueFunc.field_0x28;
    plVar4 = (longlong *)&(this->ShowWireframeWatcher).GetValueFunc.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar4 = plVar3;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  UMeshSurfacePointTool::~UMeshSurfacePointTool((UMeshSurfacePointTool *)this);
  return;
}

// operator() @ 14cc23a10

void __thiscall
`UDynamicMeshSculptTool::Setup'::__l2::<lambda_18>::operator()(void *this,bool param_1)

{
  double dVar1;
  longlong *plVar2;
  longlong lVar3;
  UInteractiveToolManager *pUVar4;
  UMaterialInstanceDynamic *pUVar5;
  
  plVar2 = *(longlong **)this;
  lVar3 = plVar2[0x2b];
  dVar1 = *(double *)(lVar3 + 0xd8);
  pUVar4 = (UInteractiveToolManager *)(**(code **)(*plVar2 + 0x2d8))(plVar2);
  pUVar5 = ToolSetupUtil::GetTransparentSculptMaterial
                     (pUVar4,(FLinearColor *)(lVar3 + 0xe0),dVar1,param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar5 == (UMaterialInstanceDynamic *)0x0)) {
    plVar2[0x40] = (longlong)pUVar5;
    if (pUVar5 == (UMaterialInstanceDynamic *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
    plVar2[0x40] = (longlong)pUVar5;
  }
  (**(code **)(*(longlong *)plVar2[0x3f] + 0xbf0))((longlong *)plVar2[0x3f],pUVar5);
  return;
}

// operator() @ 14cc283c0

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
`UDynamicMeshSculptTool::ApplyFixedPlaneBrush'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double dVar1;
  longlong lVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  
  lVar2 = *(longlong *)this;
  lVar17 = (longlong)param_1;
  uVar16 = 0;
  if (param_1 < *(int *)(lVar2 + 0x978)) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar16 = *(uint *)(*(longlong *)(lVar2 + 0x970) + lVar17 * 4);
  uVar18 = (ulonglong)(uVar16 & 0x1ff);
  lVar2 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) + (ulonglong)(uVar16 >> 9) * 8
           );
  pdVar3 = *(double **)((longlong)this + 0x10);
  auVar23 = *(undefined1 (*) [16])(lVar2 + uVar18 * 0x18);
  dVar13 = auVar23._0_8_;
  dVar14 = auVar23._8_8_;
  dVar20 = pdVar3[3];
  dVar26 = pdVar3[4];
  dVar19 = *(double *)(lVar2 + 0x10 + uVar18 * 0x18);
  dVar1 = *(double *)(lVar2 + 0x10 + uVar18 * 0x18);
  dVar6 = pdVar3[5] + pdVar3[5];
  dVar5 = pdVar3[6] * (dVar26 + dVar26) + dVar6 * dVar20;
  dVar6 = dVar6 * dVar26 - pdVar3[6] * (dVar20 + dVar20);
  dVar24 = __real_3ff0000000000000 - ((dVar26 + dVar26) * dVar26 + (dVar20 + dVar20) * dVar20);
  dVar20 = (dVar14 - pdVar3[1]) * dVar6 + (dVar13 - *pdVar3) * dVar5 + (dVar19 - pdVar3[2]) * dVar24
  ;
  dVar9 = dVar13 - dVar20 * dVar5;
  dVar11 = dVar14 - dVar20 * dVar6;
  dVar25 = dVar9 - dVar13;
  dVar8 = dVar19 - dVar20 * dVar24;
  dVar26 = dVar11 - dVar14;
  dVar19 = dVar8 - dVar19;
  dVar20 = 0.0;
  dVar21 = dVar1;
  dVar10 = dVar13;
  dVar12 = dVar14;
  if (0.0 <= (dVar26 * dVar6 + dVar25 * dVar5 + dVar19 * dVar24) *
             **(double **)((longlong)this + 0x18)) {
    dVar5 = dVar25 * dVar25 + dVar26 * dVar26 + dVar19 * dVar19;
    if (SQRT(dVar5) <= 0.0) {
      dVar6 = 0.0;
      dVar26 = 0.0;
      dVar5 = 0.0;
    }
    else {
      dVar6 = __real_3ff0000000000000 / SQRT(dVar5);
      dVar20 = dVar6 * dVar25;
      dVar26 = dVar6 * dVar26;
      dVar6 = dVar6 * dVar19;
    }
    pdVar3 = *(double **)((longlong)this + 0x20);
    auVar22._0_8_ = (*pdVar3 - dVar13) * (*pdVar3 - dVar13);
    auVar22._8_8_ = 0;
    auVar23._8_8_ = 0;
    auVar23._0_8_ =
         (pdVar3[1] - dVar14) * (pdVar3[1] - dVar14) + auVar22._0_8_ +
         (pdVar3[2] - dVar1) * (pdVar3[2] - dVar1);
    auVar23 = sqrtpd(auVar22,auVar23);
    dVar19 = UDynamicMeshSculptTool::CalculateBrushFalloff
                       (*(UDynamicMeshSculptTool **)this,auVar23._0_8_);
    dVar21 = dVar19 * **(double **)((longlong)this + 0x28);
    dVar20 = dVar20 * dVar21;
    dVar26 = dVar26 * dVar21;
    dVar6 = dVar6 * dVar21;
    dVar21 = dVar8;
    dVar10 = dVar9;
    dVar12 = dVar11;
    if (dVar26 * dVar26 + dVar20 * dVar20 + dVar6 * dVar6 <= dVar5) {
      dVar21 = dVar6 * dVar19 + dVar1;
      dVar12 = dVar26 * dVar19 + dVar14;
      dVar10 = dVar20 * dVar19 + dVar13;
    }
  }
  lVar2 = *(longlong *)this;
  uVar16 = 0;
  if (param_1 < *(int *)(lVar2 + 0xd80)) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = *(longlong *)(lVar2 + 0xd78);
  auVar7._8_4_ = SUB84(dVar12,0);
  auVar7._0_8_ = dVar10;
  auVar7._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(lVar2 + lVar17 * 0x18) = auVar7;
  *(double *)(lVar2 + 0x10 + lVar17 * 0x18) = dVar21;
  return;
}

// operator() @ 14cc287a0

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
`UDynamicMeshSculptTool::ApplyFlattenBrush'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double dVar1;
  longlong lVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  
  lVar2 = *(longlong *)this;
  lVar17 = (longlong)param_1;
  uVar16 = 0;
  if (param_1 < *(int *)(lVar2 + 0x978)) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar16 = *(uint *)(*(longlong *)(lVar2 + 0x970) + lVar17 * 4);
  uVar18 = (ulonglong)(uVar16 & 0x1ff);
  lVar2 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) + (ulonglong)(uVar16 >> 9) * 8
           );
  pdVar3 = *(double **)((longlong)this + 0x10);
  auVar23 = *(undefined1 (*) [16])(lVar2 + uVar18 * 0x18);
  dVar13 = auVar23._0_8_;
  dVar14 = auVar23._8_8_;
  dVar20 = pdVar3[3];
  dVar26 = pdVar3[4];
  dVar19 = *(double *)(lVar2 + 0x10 + uVar18 * 0x18);
  dVar1 = *(double *)(lVar2 + 0x10 + uVar18 * 0x18);
  dVar6 = pdVar3[5] + pdVar3[5];
  dVar5 = pdVar3[6] * (dVar26 + dVar26) + dVar6 * dVar20;
  dVar6 = dVar6 * dVar26 - pdVar3[6] * (dVar20 + dVar20);
  dVar24 = __real_3ff0000000000000 - ((dVar26 + dVar26) * dVar26 + (dVar20 + dVar20) * dVar20);
  dVar20 = (dVar14 - pdVar3[1]) * dVar6 + (dVar13 - *pdVar3) * dVar5 + (dVar19 - pdVar3[2]) * dVar24
  ;
  dVar9 = dVar13 - dVar20 * dVar5;
  dVar11 = dVar14 - dVar20 * dVar6;
  dVar25 = dVar9 - dVar13;
  dVar8 = dVar19 - dVar20 * dVar24;
  dVar26 = dVar11 - dVar14;
  dVar19 = dVar8 - dVar19;
  dVar20 = 0.0;
  dVar21 = dVar1;
  dVar10 = dVar13;
  dVar12 = dVar14;
  if (0.0 <= (dVar26 * dVar6 + dVar25 * dVar5 + dVar19 * dVar24) *
             **(double **)((longlong)this + 0x18)) {
    dVar5 = dVar25 * dVar25 + dVar26 * dVar26 + dVar19 * dVar19;
    if (SQRT(dVar5) <= 0.0) {
      dVar6 = 0.0;
      dVar26 = 0.0;
      dVar5 = 0.0;
    }
    else {
      dVar6 = __real_3ff0000000000000 / SQRT(dVar5);
      dVar20 = dVar6 * dVar25;
      dVar26 = dVar6 * dVar26;
      dVar6 = dVar6 * dVar19;
    }
    pdVar3 = *(double **)((longlong)this + 0x20);
    auVar22._0_8_ = (*pdVar3 - dVar13) * (*pdVar3 - dVar13);
    auVar22._8_8_ = 0;
    auVar23._8_8_ = 0;
    auVar23._0_8_ =
         (pdVar3[1] - dVar14) * (pdVar3[1] - dVar14) + auVar22._0_8_ +
         (pdVar3[2] - dVar1) * (pdVar3[2] - dVar1);
    auVar23 = sqrtpd(auVar22,auVar23);
    dVar19 = UDynamicMeshSculptTool::CalculateBrushFalloff
                       (*(UDynamicMeshSculptTool **)this,auVar23._0_8_);
    dVar21 = dVar19 * **(double **)((longlong)this + 0x28);
    dVar20 = dVar20 * dVar21;
    dVar26 = dVar26 * dVar21;
    dVar6 = dVar6 * dVar21;
    dVar21 = dVar8;
    dVar10 = dVar9;
    dVar12 = dVar11;
    if (dVar26 * dVar26 + dVar20 * dVar20 + dVar6 * dVar6 <= dVar5) {
      dVar21 = dVar6 * dVar19 + dVar1;
      dVar12 = dVar26 * dVar19 + dVar14;
      dVar10 = dVar20 * dVar19 + dVar13;
    }
  }
  lVar2 = *(longlong *)this;
  uVar16 = 0;
  if (param_1 < *(int *)(lVar2 + 0xd80)) {
    uVar16 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = *(longlong *)(lVar2 + 0xd78);
  auVar7._8_4_ = SUB84(dVar12,0);
  auVar7._0_8_ = dVar10;
  auVar7._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(lVar2 + lVar17 * 0x18) = auVar7;
  *(double *)(lVar2 + 0x10 + lVar17 * 0x18) = dVar21;
  return;
}

// operator() @ 14cc28b80

void __thiscall
`UDynamicMeshSculptTool::ApplyInflateBrush'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  TVector<double>_u_0 local_28;
  
  lVar1 = *(longlong *)this;
  uVar4 = 0;
  if (param_1 < *(int *)(lVar1 + 0x978)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar4 = *(uint *)(*(longlong *)(lVar1 + 0x970) + (longlong)param_1 * 4);
  UE::Geometry::FMeshNormals::ComputeVertexNormal
            ((TVector<double> *)&local_28._s_0,*(FDynamicMesh3 **)((longlong)this + 8),uVar4,true,
             true);
  if (*(char *)(*(longlong *)((longlong)this + 8) + 0x70) != '\0') {
    uVar5 = (ulonglong)(uVar4 & 0x1ff);
    lVar1 = *(longlong *)
             (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x60) + (ulonglong)(uVar4 >> 9) * 8)
    ;
    *(float *)(lVar1 + uVar5 * 0xc) = (float)local_28._s_0.X;
    *(float *)(lVar1 + 4 + uVar5 * 0xc) = (float)local_28._s_0.Y;
    *(float *)(lVar1 + 8 + uVar5 * 0xc) = (float)local_28._s_0.Z;
  }
  return;
}

// operator() @ 14cc28c80

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
`UDynamicMeshSculptTool::ApplyMoveBrush'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  UDynamicMeshSculptTool *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  lVar3 = *(longlong *)this;
  lVar11 = (longlong)param_1;
  uVar9 = 0;
  if (param_1 < *(int *)(lVar3 + 0x978)) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = *(UDynamicMeshSculptTool **)this;
  uVar9 = *(uint *)(*(longlong *)(lVar3 + 0x970) + lVar11 * 4);
  uVar10 = (ulonglong)(uVar9 & 0x1ff);
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x10) + (ulonglong)(uVar9 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + uVar10 * 0x18);
  dVar6 = *pdVar1;
  dVar7 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + uVar10 * 0x18);
  dVar13 = dVar6 - *(double *)((longlong)this + 0x10);
  dVar12 = dVar2 - *(double *)((longlong)this + 0x20);
  dVar17 = dVar6 - (this_00->LastBrushPosLocal).field0_0x0._s_0.X;
  dVar16 = dVar7 - (this_00->LastBrushPosLocal).field0_0x0._s_0.Y;
  dVar14 = dVar7 - *(double *)((longlong)this + 0x18);
  dVar15 = dVar2 - (this_00->LastBrushPosLocal).field0_0x0._s_0.Z;
  dVar15 = SQRT(dVar16 * dVar16 + dVar17 * dVar17 + dVar15 * dVar15);
  dVar12 = SQRT(dVar14 * dVar14 + dVar13 * dVar13 + dVar12 * dVar12);
  if (dVar15 <= dVar12) {
    dVar12 = dVar15;
  }
  dVar12 = UDynamicMeshSculptTool::CalculateBrushFalloff(this_00,dVar12);
  uVar9 = 0;
  if (param_1 < (this_00->ROIPositionBuffer).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  dVar12 = dVar12 * (double)this_00->ActivePressure;
  dVar15 = *(double *)((longlong)this + 0x28);
  dVar13 = *(double *)((longlong)this + 0x30);
  dVar14 = *(double *)((longlong)this + 0x38);
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (this_00->ROIPositionBuffer).AllocatorInstance.Data;
  *(double *)(pFVar4 + lVar11 * 0x18) = dVar12 * dVar15 + dVar6;
  *(double *)(pFVar4 + lVar11 * 0x18 + 8) = dVar12 * dVar13 + dVar7;
  *(double *)(pFVar4 + lVar11 * 0x18 + 0x10) = dVar12 * dVar14 + dVar2;
  return;
}

// operator() @ 14cc28eb0

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
`UDynamicMeshSculptTool::ApplyOffsetBrush'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  UDynamicMeshSculptTool *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  TVector<double> local_88 [4];
  
  lVar14 = (longlong)param_1;
  lVar3 = *(longlong *)this;
  uVar15 = (uint)~param_1 >> 0x1f;
  uVar13 = 0;
  if (param_1 < *(int *)(lVar3 + 0x978)) {
    uVar13 = uVar15;
  }
  if ((uVar13 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar13 = *(uint *)(*(longlong *)(lVar3 + 0x970) + lVar14 * 4);
  uVar16 = (ulonglong)(uVar13 & 0x1ff);
  lVar3 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) + (ulonglong)(uVar13 >> 9) * 8
           );
  pdVar1 = (double *)(lVar3 + uVar16 * 0x18);
  local_b8._s_0.X = *pdVar1;
  local_b8._s_0.Y = pdVar1[1];
  local_b8._s_0.Z = *(double *)(lVar3 + 0x10 + uVar16 * 0x18);
  bVar12 = UDynamicMeshSculptTool::GetTargetMeshNearest
                     (*(UDynamicMeshSculptTool **)this,(TVector<double> *)&local_b8._s_0,
                      (*(UDynamicMeshSculptTool **)this)->CurrentBrushRadius *
                      __real_4010000000000000,local_88,(TVector<double> *)&local_a0._s_0);
  uVar11 = local_b8._s_0.Z;
  uVar10 = local_b8._s_0.Y;
  uVar9 = local_b8._s_0.X;
  if (bVar12) {
    dVar2 = **(double **)((longlong)this + 0x18);
    if (**(char **)((longlong)this + 0x10) != '\0') {
      pdVar1 = *(double **)((longlong)this + 0x20);
      local_a0._s_0.Z = pdVar1[2];
      local_a0._s_0.Y = pdVar1[1];
      local_a0._s_0.X = *pdVar1;
    }
    pdVar1 = *(double **)((longlong)this + 0x28);
    this_00 = *(UDynamicMeshSculptTool **)this;
    auVar17._0_8_ = (*pdVar1 - local_b8._s_0.X) * (*pdVar1 - local_b8._s_0.X);
    auVar17._8_8_ = 0;
    auVar18._8_8_ = 0;
    auVar18._0_8_ =
         (pdVar1[1] - local_b8._s_0.Y) * (pdVar1[1] - local_b8._s_0.Y) + auVar17._0_8_ +
         (pdVar1[2] - local_b8._s_0.Z) * (pdVar1[2] - local_b8._s_0.Z);
    auVar18 = sqrtpd(auVar17,auVar18);
    dVar6 = UDynamicMeshSculptTool::CalculateBrushFalloff(this_00,auVar18._0_8_);
    uVar13 = 0;
    if (param_1 < (this_00->ROIPositionBuffer).ArrayNum) {
      uVar13 = uVar15;
    }
    dVar7 = dVar2 * local_a0._s_0.X * dVar6 + local_b8._s_0.X;
    dVar8 = dVar2 * local_a0._s_0.Y * dVar6 + local_b8._s_0.Y;
    dVar2 = dVar2 * local_a0._s_0.Z * dVar6 + local_b8._s_0.Z;
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this_00->ROIPositionBuffer).AllocatorInstance.Data;
    *(double *)(pFVar4 + lVar14 * 0x18) = dVar7;
    *(double *)(pFVar4 + lVar14 * 0x18 + 8) = dVar8;
    *(double *)(pFVar4 + lVar14 * 0x18 + 0x10) = dVar2;
  }
  else {
    lVar3 = *(longlong *)this;
    uVar13 = 0;
    if (param_1 < *(int *)(lVar3 + 0xd80)) {
      uVar13 = uVar15;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar3 = *(longlong *)(lVar3 + 0xd78);
    pdVar1 = (double *)(lVar3 + lVar14 * 0x18);
    *pdVar1 = (double)uVar9;
    pdVar1[1] = (double)uVar10;
    *(undefined8 *)(lVar3 + 0x10 + lVar14 * 0x18) = uVar11;
  }
  return;
}

// operator() @ 14cc291a0

void __thiscall
`UDynamicMeshSculptTool::ApplyPinchBrush'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  
  lVar4 = *(longlong *)this;
  lVar14 = (longlong)param_1;
  uVar12 = 0;
  if (param_1 < *(int *)(lVar4 + 0x978)) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  dVar21 = 0.0;
  dVar2 = *(double *)((longlong)this + 0x60);
  uVar12 = *(uint *)(*(longlong *)(lVar4 + 0x970) + lVar14 * 4);
  uVar13 = (ulonglong)(uVar12 & 0x1ff);
  lVar4 = *(longlong *)this;
  lVar5 = *(longlong *)
           (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x10) + (ulonglong)(uVar12 >> 9) * 8);
  pdVar1 = (double *)(lVar5 + uVar13 * 0x18);
  dVar9 = *pdVar1;
  dVar10 = pdVar1[1];
  dVar3 = *(double *)(lVar5 + 0x10 + uVar13 * 0x18);
  dVar17 = *(double *)((longlong)this + 0x10) - dVar9;
  dVar22 = *(double *)((longlong)this + 0x18) - dVar10;
  auVar19._0_8_ = dVar17 * dVar17;
  auVar19._8_8_ = 0;
  dVar17 = (*(double *)((longlong)this + 0x28) - dVar9) * dVar2;
  dVar8 = (*(double *)((longlong)this + 0x30) - dVar10) * dVar2;
  dVar2 = (*(double *)((longlong)this + 0x38) - dVar3) * dVar2;
  dVar15 = *(double *)((longlong)this + 0x20) - dVar3;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = dVar22 * dVar22 + auVar19._0_8_ + dVar15 * dVar15;
  auVar20 = sqrtpd(auVar19,auVar20);
  dVar22 = __real_3ff0000000000000 /
           (auVar20._0_8_ * (__real_3ff0000000000000 / *(double *)(lVar4 + 0x820)) +
           __real_3eb0c6f7a0000000) - __real_3ff0000000000000;
  if (0.0 <= dVar22) {
    if (__real_3ff0000000000000 <= dVar22) {
      dVar22 = __real_3ff0000000000000;
    }
  }
  else {
    dVar22 = 0.0;
  }
  if ((*(char *)((longlong)this + 0x40) != '\0') && (dVar22 < __real_3fe99999a0000000)) {
    auVar16._0_8_ = dVar8 * dVar8;
    auVar16._8_8_ = 0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = dVar17 * dVar17 + auVar16._0_8_ + dVar2 * dVar2;
    auVar20 = sqrtpd(auVar16,auVar7);
    if (auVar20._0_8_ <= 0.0) {
      dVar15 = 0.0;
      dVar18 = 0.0;
    }
    else {
      dVar21 = __real_3ff0000000000000 / auVar20._0_8_;
      dVar15 = dVar21 * dVar8;
      dVar18 = dVar21 * dVar2;
      dVar21 = dVar21 * dVar17;
    }
    dVar15 = dVar15 * *(double *)((longlong)this + 0x50) +
             dVar21 * *(double *)((longlong)this + 0x48) +
             dVar18 * *(double *)((longlong)this + 0x58);
    dVar22 = dVar22 * (__real_3ff0000000000000 -
                      (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar15,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  }
  uVar12 = 0;
  if (param_1 < *(int *)(lVar4 + 0xd80)) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0xd78);
  *(double *)(lVar4 + lVar14 * 0x18) = dVar17 * dVar22 + dVar9;
  *(double *)(lVar4 + 8 + lVar14 * 0x18) = dVar8 * dVar22 + dVar10;
  *(double *)(lVar4 + 0x10 + lVar14 * 0x18) = dVar2 * dVar22 + dVar3;
  return;
}

// operator() @ 14cc29460

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
`UDynamicMeshSculptTool::ApplyPlaneBrush'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  UDynamicMeshSculptTool *this_00;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  
  lVar6 = *(longlong *)this;
  lVar13 = (longlong)param_1;
  uVar12 = 0;
  if (param_1 < *(int *)(lVar6 + 0x978)) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  this_00 = *(UDynamicMeshSculptTool **)this;
  uVar12 = *(uint *)(*(longlong *)(lVar6 + 0x970) + lVar13 * 4);
  dVar2 = (this_00->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.Y;
  dVar3 = (this_00->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.X;
  dVar4 = (this_00->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.W;
  dVar16 = (this_00->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.Z;
  uVar14 = (ulonglong)(uVar12 & 0x1ff);
  dVar16 = dVar16 + dVar16;
  lVar6 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) + (ulonglong)(uVar12 >> 9) * 8
           );
  dVar15 = dVar4 * (dVar2 + dVar2) + dVar3 * dVar16;
  pdVar1 = (double *)(lVar6 + uVar14 * 0x18);
  dVar10 = *pdVar1;
  dVar17 = pdVar1[1];
  dVar5 = *(double *)(lVar6 + 0x10 + uVar14 * 0x18);
  dVar4 = dVar16 * dVar2 - (dVar3 + dVar3) * dVar4;
  dVar20 = __real_3ff0000000000000 - ((dVar3 + dVar3) * dVar3 + (dVar2 + dVar2) * dVar2);
  dVar16 = (dVar17 - (this_00->ActiveFixedBrushPlane).Origin.field0_0x0._s_0.Y) * dVar4 +
           (dVar10 - (this_00->ActiveFixedBrushPlane).Origin.field0_0x0._s_0.X) * dVar15 +
           (dVar5 - (this_00->ActiveFixedBrushPlane).Origin.field0_0x0._s_0.Z) * dVar20;
  dVar2 = (dVar10 - dVar16 * dVar15) - dVar10;
  dVar3 = (dVar17 - dVar16 * dVar4) - dVar17;
  dVar16 = (dVar5 - dVar16 * dVar20) - dVar5;
  if (0.0 <= (dVar3 * dVar4 + dVar2 * dVar15 + dVar16 * dVar20) *
             **(double **)((longlong)this + 0x10)) {
    dVar4 = **(double **)((longlong)this + 0x18);
    pdVar1 = *(double **)((longlong)this + 0x20);
    auVar18._0_8_ = (*pdVar1 - dVar10) * (*pdVar1 - dVar10);
    auVar18._8_8_ = 0;
    auVar19._8_8_ = 0;
    auVar19._0_8_ =
         (pdVar1[1] - dVar17) * (pdVar1[1] - dVar17) + auVar18._0_8_ +
         (pdVar1[2] - dVar5) * (pdVar1[2] - dVar5);
    auVar19 = sqrtpd(auVar18,auVar19);
    dVar15 = UDynamicMeshSculptTool::CalculateBrushFalloff(this_00,auVar19._0_8_);
    dVar10 = dVar4 * dVar2 * dVar15 + dVar10;
    dVar5 = dVar4 * dVar16 * dVar15 + dVar5;
    dVar17 = dVar4 * dVar3 * dVar15 + dVar17;
  }
  uVar12 = 0;
  if (param_1 < (this_00->ROIPositionBuffer).ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar7 = (this_00->ROIPositionBuffer).AllocatorInstance.Data;
  auVar9._8_4_ = SUB84(dVar17,0);
  auVar9._0_8_ = dVar10;
  auVar9._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])(pFVar7 + lVar13 * 0x18) = auVar9;
  *(double *)(pFVar7 + lVar13 * 0x18 + 0x10) = dVar5;
  return;
}

// operator() @ 14cc297b0

void __thiscall
`UDynamicMeshSculptTool::ApplyResampleBrush'::__l2::<lambda_1>::operator()(void *this,int param_1)

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
  if (param_1 < *(int *)(lVar3 + 0x978)) {
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
  uVar12 = *(uint *)(*(longlong *)(lVar3 + 0x970) + lVar14 * 4);
  uVar13 = (ulonglong)(uVar12 & 0x1ff);
  lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + (ulonglong)(uVar12 >> 9) * 8);
  puVar1 = (undefined4 *)(lVar3 + uVar13 * 0x18);
  uVar7 = *puVar1;
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  uVar2 = *(undefined8 *)(lVar3 + 0x10 + uVar13 * 0x18);
  uVar12 = 0;
  if (param_1 < *(int *)(lVar5 + 0xd80)) {
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
  lVar3 = *(longlong *)(lVar5 + 0xd78);
  puVar1 = (undefined4 *)(lVar3 + lVar14 * 0x18);
  *puVar1 = uVar7;
  puVar1[1] = uVar8;
  puVar1[2] = uVar9;
  puVar1[3] = uVar10;
  *(undefined8 *)(lVar3 + 0x10 + lVar14 * 0x18) = uVar2;
  return;
}

// operator() @ 14cc298e0

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
`UDynamicMeshSculptTool::ApplySculptMaxBrush'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  longlong lVar2;
  UDynamicMeshSculptTool *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78 [4];
  
  lVar2 = *(longlong *)this;
  lVar13 = (longlong)param_1;
  uVar14 = (uint)~param_1 >> 0x1f;
  uVar11 = 0;
  if (param_1 < *(int *)(lVar2 + 0x978)) {
    uVar11 = uVar14;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar11 = *(uint *)(*(longlong *)(lVar2 + 0x970) + lVar13 * 4);
  uVar12 = (ulonglong)(uVar11 & 0x1ff);
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
  pdVar1 = (double *)(lVar2 + uVar12 * 0x18);
  local_a8._s_0.X = *pdVar1;
  local_a8._s_0.Y = pdVar1[1];
  local_a8._s_0.Z = *(double *)(lVar2 + 0x10 + uVar12 * 0x18);
  dVar15 = (*(UDynamicMeshSculptTool **)this)->CurrentBrushRadius;
  bVar10 = UDynamicMeshSculptTool::GetTargetMeshNearest
                     (*(UDynamicMeshSculptTool **)this,(TVector<double> *)&local_a8._s_0,
                      dVar15 + dVar15,(TVector<double> *)&local_90._s_0,
                      (TVector<double> *)&local_78[0]._s_0);
  uVar9 = local_a8._s_0.Z;
  uVar8 = local_a8._s_0.Y;
  uVar7 = local_a8._s_0.X;
  if (bVar10) {
    dVar18 = *(double *)((longlong)this + 0x18) - local_a8._s_0.Y;
    dVar15 = *(double *)((longlong)this + 0x10) - local_a8._s_0.X;
    dVar5 = *(double *)((longlong)this + 0x20) - local_a8._s_0.Z;
    this_00 = *(UDynamicMeshSculptTool **)this;
    auVar17._0_8_ = dVar15 * dVar15;
    auVar17._8_8_ = 0;
    dVar15 = *(double *)((longlong)this + 0x28);
    auVar19._0_8_ = dVar18 * dVar18 + auVar17._0_8_ + dVar5 * dVar5;
    auVar19._8_8_ = 0;
    auVar17 = sqrtpd(auVar17,auVar19);
    dVar18 = UDynamicMeshSculptTool::CalculateBrushFalloff(this_00,auVar17._0_8_);
    dVar5 = *(double *)((longlong)this + 0x30);
    dVar16 = dVar15 * (double)local_78[0]._0_8_ * dVar18 + local_a8._s_0.X;
    dVar6 = dVar15 * (double)local_78[0]._8_8_ * dVar18 + local_a8._s_0.Y;
    dVar18 = dVar15 * (double)local_78[0]._16_8_ * dVar18 + local_a8._s_0.Z;
    dVar21 = dVar16 - local_90._s_0.X;
    dVar22 = dVar6 - local_90._s_0.Y;
    dVar15 = dVar18 - local_90._s_0.Z;
    auVar20._0_8_ = dVar22 * dVar22 + dVar21 * dVar21 + dVar15 * dVar15;
    auVar20._8_8_ = 0;
    if (dVar5 * dVar5 < auVar20._0_8_) {
      auVar17 = sqrtpd(auVar20,auVar20);
      dVar16 = 0.0;
      if (auVar17._0_8_ <= 0.0) {
        dVar18 = 0.0;
        dVar22 = 0.0;
      }
      else {
        dVar18 = __real_3ff0000000000000 / auVar17._0_8_;
        dVar16 = dVar18 * dVar21;
        dVar22 = dVar18 * dVar22;
        dVar18 = dVar18 * dVar15;
      }
      dVar18 = dVar5 * dVar18 + local_90._s_0.Z;
      dVar6 = dVar5 * dVar22 + local_90._s_0.Y;
      dVar16 = dVar5 * dVar16 + local_90._s_0.X;
    }
    uVar11 = 0;
    if (param_1 < (this_00->ROIPositionBuffer).ArrayNum) {
      uVar11 = uVar14;
    }
    if (uVar11 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this_00->ROIPositionBuffer).AllocatorInstance.Data;
    *(double *)(pFVar3 + lVar13 * 0x18) = dVar16;
    *(double *)(pFVar3 + lVar13 * 0x18 + 8) = dVar6;
    *(double *)(pFVar3 + lVar13 * 0x18 + 0x10) = dVar18;
  }
  else {
    lVar2 = *(longlong *)this;
    uVar11 = 0;
    if (param_1 < *(int *)(lVar2 + 0xd80)) {
      uVar11 = uVar14;
    }
    if (uVar11 == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar2 = *(longlong *)(lVar2 + 0xd78);
    pdVar1 = (double *)(lVar2 + lVar13 * 0x18);
    *pdVar1 = (double)uVar7;
    pdVar1[1] = (double)uVar8;
    *(undefined8 *)(lVar2 + 0x10 + lVar13 * 0x18) = uVar9;
  }
  return;
}

// operator() @ 14cc29c30

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
`UDynamicMeshSculptTool::ApplySmoothBrush'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  FDynamicMesh3 *pFVar4;
  UDynamicMeshSculptTool *this_00;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  TVector<double> *pTVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  TVector<double> local_c8;
  TVector<double> local_b0;
  double local_88;
  
  lVar3 = *(longlong *)this;
  lVar13 = (longlong)param_1;
  uVar11 = 0;
  if (param_1 < *(int *)(lVar3 + 0x978)) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = *(FDynamicMesh3 **)((longlong)this + 8);
  uVar11 = *(uint *)(*(longlong *)(lVar3 + 0x970) + lVar13 * 4);
  this_00 = *(UDynamicMeshSculptTool **)this;
  lVar3 = *(longlong *)
           ((pFVar4->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar11 >> 9) * 8);
  pdVar1 = (double *)(lVar3 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
  dVar8 = *pdVar1;
  dVar9 = pdVar1[1];
  dVar2 = *(double *)(lVar3 + 0x10 + (ulonglong)(uVar11 & 0x1ff) * 0x18);
  dVar16 = *(double *)((longlong)this + 0x10) - dVar8;
  dVar14 = *(double *)((longlong)this + 0x20) - dVar2;
  dVar15 = *(double *)((longlong)this + 0x18) - dVar9;
  auVar17._0_8_ = dVar16 * dVar16;
  auVar17._8_8_ = 0;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar15 * dVar15 + auVar17._0_8_ + dVar14 * dVar14;
  auVar18 = sqrtpd(auVar17,auVar18);
  local_c8.field0_0x0._s_0.Z = dVar2;
  dVar15 = UDynamicMeshSculptTool::CalculateBrushFalloff(this_00,auVar18._0_8_);
  if (((this_00->SculptProperties).field0_0x0.DebugPtr)->bPreserveUVFlow == false) {
    pTVar12 = UE::Geometry::FMeshWeights::UniformCentroid(&local_b0,pFVar4,uVar11);
  }
  else {
    pTVar12 = UE::Geometry::FMeshWeights::CotanCentroidSafe
                        (&local_c8,pFVar4,uVar11,__real_4024000000000000,(bool *)0x0);
  }
  dVar14 = (pTVar12->field0_0x0)._s_0.X;
  dVar16 = (pTVar12->field0_0x0)._s_0.Y;
  lVar3 = *(longlong *)this;
  local_88 = (pTVar12->field0_0x0)._s_0.Z;
  uVar11 = 0;
  if (param_1 < *(int *)(lVar3 + 0xd80)) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  dVar15 = (double)*(float *)(*(longlong *)(lVar3 + 0x130) + 0xbc) * dVar15;
  dVar6 = __real_3ff0000000000000 - dVar15;
  dVar7 = dVar15 * local_88;
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0xd78);
  *(double *)(lVar3 + lVar13 * 0x18) = dVar15 * dVar14 + dVar6 * dVar8;
  *(double *)(lVar3 + 8 + lVar13 * 0x18) = dVar15 * dVar16 + dVar6 * dVar9;
  *(double *)(lVar3 + 0x10 + lVar13 * 0x18) = dVar7 + dVar6 * dVar2;
  return;
}

// operator() @ 14cc29e90

void __thiscall `UDynamicMeshSculptTool::ApplyStamp'::__l2::<lambda_1>::operator()(void *this)

{
  if (CpuChannel->Enabled < 0) {
    UE::Geometry::FDynamicMeshOctree3::
    NotifyPendingModification<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              ((FDynamicMeshOctree3 *)**(undefined8 **)this,
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 8) + 0x9a8));
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId628,"DynamicMeshSculptTool_ApplyStamp_DirtyOctree",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
             ,0x274);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId628);
  UE::Geometry::FDynamicMeshOctree3::
  NotifyPendingModification<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            ((FDynamicMeshOctree3 *)**(undefined8 **)this,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             (*(longlong *)((longlong)this + 8) + 0x9a8));
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// operator() @ 14cc2b0f0

void __thiscall
`UDynamicMeshSculptTool::SyncMeshWithPositionBuffer'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

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
  if (param_1 < *(int *)(lVar4 + 0x978)) {
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
  uVar10 = *(uint *)(*(longlong *)(lVar4 + 0x970) + lVar13 * 4);
  uVar12 = 0;
  if (param_1 < *(int *)(lVar5 + 0xd80)) {
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
  lVar4 = *(longlong *)(lVar5 + 0xd78);
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

// operator() @ 14cc2b250

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `UDynamicMeshSculptTool::UpdateTarget'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  char cVar2;
  FDynamicMesh3 *pFVar3;
  bool bVar4;
  <lambda_1> local_res8;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2274,"DynamicMeshSculptTool_UpdateTarget",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
               ,0x8e2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2274);
  }
  lVar1 = *(longlong *)this;
  pFVar3 = (FDynamicMesh3 *)(**(code **)(**(longlong **)(lVar1 + 0x1f8) + 0xb38))();
  UE::Geometry::FDynamicMesh3::Copy((FDynamicMesh3 *)(lVar1 + 0xa58),pFVar3,false,false,false,false)
  ;
  local_res8.__this = *(UDynamicMeshSculptTool **)this;
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  Async<__UDynamicMeshSculptTool::UpdateTarget_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_48,DynamicSculptToolAsyncExecTarget,&local_res8,&local_38);
  local_res8.__this = *(UDynamicMeshSculptTool **)this;
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  Async<__UDynamicMeshSculptTool::UpdateTarget_::__l2::<lambda_1>::operator()_::__l2::<lambda_2>_>
            ((TFuture<void> *)local_58,DynamicSculptToolAsyncExecTarget,(<lambda_2> *)&local_res8,
             &local_38);
  if (local_48._0_8_ != 0) {
    do {
      cVar2 = (**(code **)(**(longlong **)(local_48._0_8_ + 0x60) + 0x20))
                        (*(longlong **)(local_48._0_8_ + 0x60),0xffffffff,0);
    } while (cVar2 == '\0');
  }
  if (local_58._0_8_ != 0) {
    do {
      cVar2 = (**(code **)(**(longlong **)(local_58._0_8_ + 0x60) + 0x20))
                        (*(longlong **)(local_58._0_8_ + 0x60),0xffffffff,0);
    } while (cVar2 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_58._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_48._8_8_);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14cc2c090

void __thiscall
`UDynamicMeshSculptTool::RecalculateNormals_PerVertex'::__l19::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  TVector<double>_u_0 local_28;
  
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar1 + 0xdc8)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = *(uint *)(*(longlong *)(lVar1 + 0xdc0) + (longlong)param_1 * 4);
  UE::Geometry::FMeshNormals::ComputeVertexNormal
            ((TVector<double> *)&local_28._s_0,
             (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),uVar5,true,true);
  if (*(char *)(**(longlong **)((longlong)this + 8) + 0x70) != '\0') {
    uVar4 = (ulonglong)(uVar5 & 0x1ff);
    lVar1 = *(longlong *)
             (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x60) +
             (ulonglong)(uVar5 >> 9) * 8);
    *(float *)(lVar1 + uVar4 * 0xc) = (float)local_28._s_0.X;
    *(float *)(lVar1 + 4 + uVar4 * 0xc) = (float)local_28._s_0.Y;
    *(float *)(lVar1 + 8 + uVar4 * 0xc) = (float)local_28._s_0.Z;
  }
  lVar1 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)(lVar1 + 0xdd8)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined1 *)((longlong)(int)uVar5 + *(longlong *)(lVar1 + 0xdd0)) = 0;
  return;
}

// operator() @ 14cc2c2a0

void __thiscall
`UDynamicMeshSculptTool::RecalculateNormals_Overlay'::__l29::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TVector<double>_u_0 local_28;
  
  lVar1 = *(longlong *)this;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar1 + 0xdc8)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = *(uint *)(*(longlong *)(lVar1 + 0xdc0) + (longlong)param_1 * 4);
  UE::Geometry::FMeshNormals::ComputeOverlayNormal
            ((TVector<double> *)&local_28._s_0,
             (FDynamicMesh3 *)**(undefined8 **)((longlong)this + 8),
             (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)
             **(undefined8 **)((longlong)this + 0x10),uVar5,true,true);
  uVar6 = uVar5 * 3;
  lVar1 = *(longlong *)this;
  lVar2 = **(longlong **)((longlong)this + 0x10);
  *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar6 >> 9) * 8) +
            (ulonglong)(uVar6 & 0x1ff) * 4) = (float)local_28._s_0.X;
  *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar6 + 1 >> 9) * 8) +
            (ulonglong)(uVar6 + 1 & 0x1ff) * 4) = (float)local_28._s_0.Y;
  *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar6 + 2 >> 9) * 8) +
            (ulonglong)(uVar6 + 2 & 0x1ff) * 4) = (float)local_28._s_0.Z;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)(lVar1 + 0xdd8)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *(undefined1 *)((longlong)(int)uVar5 + *(longlong *)(lVar1 + 0xdd0)) = 0;
  return;
}

// operator() @ 14cc2c590

double __thiscall
`UDynamicMeshSculptTool::Setup'::__l19::<lambda_27>::operator()(void *this,float param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 in_register_00001244 [12];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  
  auVar4._4_12_ = in_register_00001244;
  auVar4._0_4_ = param_1;
  lVar1 = *(longlong *)this;
  if (*(char *)(*(longlong *)(lVar1 + 0x128) + 0xb0) == '\x01') {
    dVar6 = *(double *)(lVar1 + 0x178) - *(double *)(lVar1 + 0x8f0);
    dVar3 = *(double *)(lVar1 + 0x180) - *(double *)(lVar1 + 0x8f8);
    dVar5 = *(double *)(lVar1 + 0x170) - *(double *)(lVar1 + 0x8e8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar6 * dVar6 + dVar5 * dVar5 + dVar3 * dVar3;
    auVar4 = sqrtpd(auVar4,auVar2);
    return (double)param_1 * auVar4._0_8_;
  }
  return (double)param_1 * __real_3ff0000000000000;
}

// operator() @ 14cc2c6b0

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
`UDynamicMeshSculptTool::ApplyInflateBrush'::__l2::<lambda_2>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  UDynamicMeshSculptTool *this_00;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  undefined4 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined8 local_88;
  
  lVar4 = *(longlong *)this;
  lVar13 = (longlong)param_1;
  uVar11 = 0;
  if (param_1 < *(int *)(lVar4 + 0x978)) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar5 = *(longlong *)((longlong)this + 8);
  uVar11 = *(uint *)(*(longlong *)(lVar4 + 0x970) + lVar13 * 4);
  uVar15 = (ulonglong)(uVar11 >> 9);
  uVar14 = (ulonglong)(uVar11 & 0x1ff);
  lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + uVar15 * 8);
  dVar2 = *(double *)(lVar4 + 0x10 + uVar14 * 0x18);
  pdVar1 = (double *)(lVar4 + uVar14 * 0x18);
  dVar8 = *pdVar1;
  dVar9 = pdVar1[1];
  if (*(char *)(lVar5 + 0x70) == '\0') {
    local_88 = CONCAT44(UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Y,
                        UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X);
    uVar20 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.X;
    uVar12 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  }
  else {
    lVar4 = *(longlong *)(*(longlong *)(lVar5 + 0x60) + uVar15 * 8);
    local_88 = *(undefined8 *)(lVar4 + uVar14 * 0xc);
    uVar20 = (undefined4)local_88;
    uVar12 = *(float *)(lVar4 + 8 + uVar14 * 0xc);
  }
  dVar17 = *(double *)((longlong)this + 0x18) - dVar8;
  dVar16 = *(double *)((longlong)this + 0x28) - dVar2;
  dVar3 = *(double *)((longlong)this + 0x10);
  this_00 = *(UDynamicMeshSculptTool **)this;
  auVar18._0_8_ = dVar17 * dVar17;
  auVar18._8_8_ = 0;
  dVar17 = *(double *)((longlong)this + 0x20) - dVar9;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar17 * dVar17 + auVar18._0_8_ + dVar16 * dVar16;
  auVar19 = sqrtpd(auVar18,auVar19);
  dVar16 = UDynamicMeshSculptTool::CalculateBrushFalloff(this_00,auVar19._0_8_);
  uVar11 = 0;
  if (param_1 < (this_00->ROIPositionBuffer).ArrayNum) {
    uVar11 = (uint)~param_1 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar6 = (this_00->ROIPositionBuffer).AllocatorInstance.Data;
  *(double *)(pFVar6 + lVar13 * 0x18) = (double)(float)uVar20 * dVar3 * dVar16 + dVar8;
  *(double *)(pFVar6 + lVar13 * 0x18 + 8) = (double)local_88._4_4_ * dVar3 * dVar16 + dVar9;
  *(double *)(pFVar6 + lVar13 * 0x18 + 0x10) = (double)(float)uVar12 * dVar3 * dVar16 + dVar2;
  return;
}

// operator() @ 14cc2c8f0

void __thiscall `UDynamicMeshSculptTool::ApplyStamp'::__l2::<lambda_2>::operator()(void *this)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  undefined8 *local_48;
  undefined1 local_40;
  code *local_38;
  undefined8 **local_30;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId634,"DynamicMeshSculptTool_ApplyStamp_SaveActiveROI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
               ,0x27a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId634);
  }
  lVar5 = *(longlong *)this;
  puVar2 = *(undefined8 **)(lVar5 + 0xe90);
  if (puVar2 != (undefined8 *)0x0) {
    _Src = *(void **)(lVar5 + 0x970);
    local_50 = *(int *)(lVar5 + 0x978);
    lVar5 = (longlong)local_50;
    local_58.Data = (FScriptContainerElement *)0x0;
    if (local_50 == 0) {
      local_4c = 0;
      iVar3 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_50,0,&local_58,local_50,&local_4c);
      memcpy(local_58.Data,_Src,lVar5 << 2);
      iVar3 = local_50;
    }
    pFVar1 = local_58.Data + (longlong)iVar3 * 4;
    FVar6.Data = local_58.Data;
    iVar4 = iVar3;
    while( true ) {
      if (iVar4 != iVar3) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar6.Data == pFVar1) break;
      local_30 = &local_48;
      local_40 = 1;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FDynamicMeshChangeTracker::SaveVertexOneRingTriangles'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_48 = puVar2;
      UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
                ((FDynamicMesh3 *)*puVar2,*(int *)FVar6.Data,
                 (TFunctionRef<void___cdecl(int)> *)&local_38);
      FVar6.Data = FVar6.Data + 4;
      iVar4 = local_50;
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14cc2e1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __thiscall
`UDynamicMeshSculptTool::ConfigureRemesher'::__l14::<lambda_2>::operator()
          (void *this,FDynamicMesh3 *param_1,int param_2)

{
  double *pdVar1;
  UDynamicMeshSculptTool *this_00;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  this_00 = *(UDynamicMeshSculptTool **)this;
  lVar2 = *(longlong *)
           ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8)
  ;
  pdVar1 = (double *)(lVar2 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  dVar4 = (this_00->LastBrushPosLocal).field0_0x0._s_0.Z -
          *(double *)(lVar2 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  dVar3 = (this_00->LastBrushPosLocal).field0_0x0._s_0.X - *pdVar1;
  dVar5 = (this_00->LastBrushPosLocal).field0_0x0._s_0.Y - pdVar1[1];
  dVar5 = UDynamicMeshSculptTool::CalculateBrushFalloff
                    (this_00,SQRT(dVar5 * dVar5 + dVar3 * dVar3 + dVar4 * dVar4));
  dVar3 = *(double *)((longlong)this + 0x10);
  dVar4 = 0.0;
  if ((0.0 <= dVar3) && (dVar4 = dVar3, __real_3ff0000000000000 <= dVar3)) {
    dVar4 = __real_3ff0000000000000;
  }
  return (dVar4 * (__real_3ff0000000000000 - dVar5) + (__real_3ff0000000000000 - dVar4)) *
         *(double *)((longlong)this + 8);
}

// operator() @ 14cc2e260

void __thiscall `UDynamicMeshSculptTool::ApplyStamp'::__l2::<lambda_3>::operator()(void *this)

{
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId708,"DynamicMeshSculptTool_ApplyStamp_OctreeRemove",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
               ,0x2c4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId708);
  }
  UE::Geometry::FDynamicMeshOctree3::
  RemoveTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            ((FDynamicMeshOctree3 *)**(undefined8 **)this,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             (*(longlong *)((longlong)this + 8) + 0x9a8),false);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 14cc2e780

void __thiscall `UDynamicMeshSculptTool::OnTick'::__l58::<lambda_3>::operator()(void *this)

{
  if (CpuChannel->Enabled < 0) {
    UE::Geometry::FDynamicMeshOctree3::
    ReinsertTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              ((FDynamicMeshOctree3 *)**(undefined8 **)this,
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               (*(longlong *)((longlong)this + 8) + 0x9a8));
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId1798,"DynamicMeshSculptTool_OctreeReinsert",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
             ,0x706);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1798);
  UE::Geometry::FDynamicMeshOctree3::
  ReinsertTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            ((FDynamicMeshOctree3 *)**(undefined8 **)this,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
             (*(longlong *)((longlong)this + 8) + 0x9a8));
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// operator() @ 14cc2ea40

void __thiscall
`UDynamicMeshSculptTool::Setup'::__l2::<lambda_6>::operator()
          (void *this,TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> param_1)

{
  UObject *pUVar1;
  bool bVar2;
  UMaterialInterface *pUVar3;
  UMaterialInstanceDynamic *pUVar4;
  FWeakObjectPtr local_res8;
  FName local_res10;
  
  pUVar1 = *(UObject **)this;
  if (*(int *)(*(longlong *)&pUVar1[8].field_0x18 + 0xb4) == 8) {
    local_res8 = param_1.WeakPtr;
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar2) {
      local_res10.ComparisonIndex.Value = 0;
      local_res10.Number = 0;
      pUVar3 = (UMaterialInterface *)FWeakObjectPtr::Get(&local_res8);
      pUVar4 = UMaterialInstanceDynamic::Create(pUVar3,pUVar1,local_res10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      *(UMaterialInstanceDynamic **)&pUVar1[0xc].field_0x20 = pUVar4;
      (**(code **)(**(longlong **)&pUVar1[0xc].field_0x18 + 0xbf0))
                (*(longlong **)&pUVar1[0xc].field_0x18,pUVar4);
      return;
    }
    (**(code **)(**(longlong **)&pUVar1[0xc].field_0x18 + 0xbf8))();
    *(undefined8 *)&pUVar1[0xc].field_0x20 = 0;
  }
  return;
}

// AlignBrushToView @ 14cc34190

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

void __thiscall UDynamicMeshSculptTool::AlignBrushToView(UDynamicMeshSculptTool *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_28._s_0.Y = _UNK_150689518;
  local_28._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&(this->CameraState).Orientation,(TVector<double> *)&local_48._s_0,
             (TVector<double> *)&local_28._s_0);
  uVar1 = local_48._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
  uVar2 = local_48._8_4_ ^ _UNK_15066df78;
  uVar3 = local_48._12_4_ ^ _UNK_15066df7c;
  uVar4 = SUB84(local_48._s_0.Z,0) ^ (uint)__xmm_80000000000000008000000000000000;
  uVar5 = (uint)((ulonglong)local_48._16_8_ >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
  *(uint *)&(this->LastBrushPosNormalWorld).field0_0x0 =
       local_48._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
  *(uint *)((longlong)&(this->LastBrushPosNormalWorld).field0_0x0 + 4) = uVar1;
  *(uint *)((longlong)&(this->LastBrushPosNormalWorld).field0_0x0 + 8) = uVar2;
  *(uint *)((longlong)&(this->LastBrushPosNormalWorld).field0_0x0 + 0xc) = uVar3;
  (this->LastBrushPosNormalWorld).field0_0x0._s_0.Z = (double)CONCAT44(uVar5,uVar4);
  return;
}

// ApplyFixedPlaneBrush @ 14cc3a3d0

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

bool __thiscall
UDynamicMeshSculptTool::ApplyFixedPlaneBrush(UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  TTransformSRT3<double> *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  UFixedPlaneBrushProperties *pUVar5;
  UBrushRemeshProperties *pUVar6;
  bool bVar7;
  TQuaternion<double> *pTVar8;
  TVector<double> *pTVar9;
  uint uVar10;
  double dVar11;
  uint uVar13;
  undefined1 in_XMM2 [16];
  undefined1 auVar12 [16];
  undefined8 local_res18;
  undefined8 local_res20;
  code *local_118 [4];
  double local_f8;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  TQuaternion<double>_u_0 local_c0;
  TVector<double>_u_0 *local_a0;
  double *local_98;
  TQuaternion<double>_u_0 local_90;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  double local_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  
  bVar7 = UpdateBrushPositionOnSculptMesh(this,param_1,true);
  if (!bVar7) {
    return false;
  }
  this_00 = &this->CurTargetTransform;
  local_res20 = 0;
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            (this_00,(TVector<double> *)&local_d8._s_0,&this->LastBrushPosWorld);
  pUVar5 = (this->GizmoProperties).field0_0x0.DebugPtr;
  dVar1 = (this_00->Rotation).field0_0x0._s_0.X;
  dVar2 = (this->CurTargetTransform).Rotation.field0_0x0._s_0.W;
  dVar3 = (this->CurTargetTransform).Rotation.field0_0x0._s_0.Z;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = (double)((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushSpeed;
  auVar12 = sqrtpd(in_XMM2,auVar12);
  local_f8 = auVar12._0_8_ * this->CurrentBrushRadius *
             (double)this->ActivePressure * __real_3fb999999999999a;
  local_90._s_0.X = (pUVar5->Rotation).X;
  local_90._s_0.Y = (pUVar5->Rotation).Y;
  dVar11 = (this->CurTargetTransform).Rotation.field0_0x0._s_0.Y;
  local_90._s_0.Z = (pUVar5->Rotation).Z;
  local_90._s_0.W = (pUVar5->Rotation).W;
  dVar11 = dVar11 * dVar11 + dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2;
  if (dVar11 <= 0.0) {
    local_118[0] = (code *)0x0;
    local_118[1] = (code *)0x0;
    local_118[2] = (code *)0x0;
    local_118[3] = (code *)0x0;
  }
  else {
    dVar11 = __real_3ff0000000000000 / dVar11;
    uVar10 = (uint)__xmm_80000000000000008000000000000000;
    uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_118[0] = (code *)CONCAT44((uint)((ulonglong)(dVar11 * dVar1) >> 0x20) ^ uVar13,
                                    SUB84(dVar11 * dVar1,0) ^ uVar10);
    dVar1 = dVar11 * (this->CurTargetTransform).Rotation.field0_0x0._s_0.Y;
    local_118[3] = (code *)(dVar11 * dVar2);
    local_118[2] = (code *)CONCAT44((uint)((ulonglong)(dVar11 * dVar3) >> 0x20) ^ uVar13,
                                    SUB84(dVar11 * dVar3,0) ^ uVar10);
    local_118[1] = (code *)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) ^ uVar13,
                                    SUB84(dVar1,0) ^ uVar10);
  }
  pTVar8 = UE::Geometry::operator*<double>
                     ((TQuaternion<double> *)&local_c0._s_0,(TQuaternion<double> *)local_118,
                      (TQuaternion<double> *)&local_90._s_0);
  local_118[0] = (code *)(pUVar5->Position).field0_0x0._s_0.X;
  local_118[1] = (code *)(pUVar5->Position).field0_0x0._s_0.Y;
  local_118[2] = (code *)(pUVar5->Position).field0_0x0._s_0.Z;
  dVar1 = (pTVar8->field0_0x0)._s_0.X;
  dVar2 = (pTVar8->field0_0x0)._s_0.Y;
  dVar3 = (pTVar8->field0_0x0)._s_0.Z;
  dVar11 = (pTVar8->field0_0x0)._s_0.W;
  pTVar9 = UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
                     (this_00,(TVector<double> *)&local_f0._s_0,(TVector<double> *)local_118);
  local_70 = *(undefined4 *)&pTVar9->field0_0x0;
  uStack_6c = *(undefined4 *)((longlong)&pTVar9->field0_0x0 + 4);
  uStack_68 = *(undefined4 *)((longlong)&pTVar9->field0_0x0 + 8);
  uStack_64 = *(undefined4 *)((longlong)&pTVar9->field0_0x0 + 0xc);
  local_60 = (pTVar9->field0_0x0)._s_0.Z;
  local_58 = dVar1;
  dStack_50 = dVar2;
  local_48 = dVar3;
  dStack_40 = dVar11;
  local_res18 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))
                          ();
  iVar4 = (this->VertexROI).ArrayNum;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ROIPositionBuffer,iVar4,No);
  local_c0._s_0.Y = (double)&local_res18;
  local_f0._s_0.X = 0.0;
  local_c0._s_0.Z = (double)&local_70;
  local_f0._8_4_ = 0;
  local_c0._s_0.W = (double)&local_res20;
  local_a0 = &local_d8;
  local_98 = &local_f8;
  local_118[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UDynamicMeshSculptTool::ApplyFixedPlaneBrush'::__l2::<lambda_1>,void,int>
                 ::Call;
  local_118[1] = (code *)&local_c0;
  local_c0._s_0.X = (double)this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar4,1,(TFunctionRef<void___cdecl(int)> *)local_118,
             local_res18._0_1_,None,(TArrayView<std::nullptr_t,int> *)&local_f0._s_0);
  if (((this->bEnableRemeshing != false) &&
      (pUVar6 = (this->RemeshProperties).field0_0x0.DebugPtr,
      pUVar6 != (UBrushRemeshProperties *)0x0)) && (pUVar6->bEnableRemeshing != false)) {
    this->bRemeshPending = true;
  }
  (this->LastBrushPosLocal).field0_0x0._s_0.X = local_d8._s_0.X;
  (this->LastBrushPosLocal).field0_0x0._s_0.Y = local_d8._s_0.Y;
  (this->LastBrushPosLocal).field0_0x0._s_0.Z = local_d8._s_0.Z;
  return true;
}

// ApplyFlattenBrush @ 14cc3a6b0

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

bool __thiscall
UDynamicMeshSculptTool::ApplyFlattenBrush(UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  int iVar1;
  UBrushRemeshProperties *pUVar2;
  bool bVar3;
  undefined1 in_XMM1 [16];
  undefined1 auVar4 [16];
  undefined8 local_res18;
  undefined8 local_res20;
  double local_b8;
  TVector<double>_u_0 local_b0;
  TArrayView<std::nullptr_t,int> local_98;
  code *local_88;
  UDynamicMeshSculptTool **local_80;
  UDynamicMeshSculptTool *local_78;
  undefined8 *local_70;
  TFrame3<double> *local_68;
  undefined8 *local_60;
  TVector<double>_u_0 *local_58;
  double *local_50;
  TFrame3<double> local_48;
  
  bVar3 = UpdateBrushPositionOnSculptMesh(this,param_1,true);
  if (!bVar3) {
    return false;
  }
  local_res20 = 0;
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            (&this->CurTargetTransform,(TVector<double> *)&local_b0._s_0,&this->LastBrushPosWorld);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (double)((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushSpeed *
                 this->CurrentBrushRadius;
  auVar4 = sqrtpd(in_XMM1,auVar4);
  local_b8 = auVar4._0_8_ * __real_3fa999999999999a * (double)this->ActivePressure;
  ComputeROIBrushPlane(this,&local_48,(TVector<double> *)&local_b0._s_0,true,false);
  local_res18 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))
                          ();
  iVar1 = (this->VertexROI).ArrayNum;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ROIPositionBuffer,iVar1,No);
  local_70 = &local_res18;
  local_98.DataPtr = (void **)0x0;
  local_68 = &local_48;
  local_98.ArrayNum = 0;
  local_60 = &local_res20;
  local_58 = &local_b0;
  local_50 = &local_b8;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`UDynamicMeshSculptTool::ApplyFlattenBrush'::__l2::<lambda_1>,void,int>
             ::Call;
  local_80 = &local_78;
  local_78 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_88,
             local_res18._0_1_,None,&local_98);
  if (((this->bEnableRemeshing != false) &&
      (pUVar2 = (this->RemeshProperties).field0_0x0.DebugPtr,
      pUVar2 != (UBrushRemeshProperties *)0x0)) && (pUVar2->bEnableRemeshing != false)) {
    this->bRemeshPending = true;
  }
  (this->LastBrushPosLocal).field0_0x0._s_0.X = local_b0._s_0.X;
  (this->LastBrushPosLocal).field0_0x0._s_0.Y = local_b0._s_0.Y;
  (this->LastBrushPosLocal).field0_0x0._s_0.Z = local_b0._s_0.Z;
  return true;
}

// ApplyInflateBrush @ 14cc3b240

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

bool __thiscall
UDynamicMeshSculptTool::ApplyInflateBrush(UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  UBrushRemeshProperties *pUVar4;
  bool bVar5;
  undefined8 uVar6;
  double dVar7;
  <lambda_1> local_res18;
  UDynamicMeshSculptTool *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [12];
  uint uStack_8c;
  undefined1 local_88 [16];
  TVector<double>_u_0 local_78;
  UDynamicMeshSculptTool *local_60;
  undefined8 local_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  
  bVar5 = UpdateBrushPositionOnSculptMesh(this,param_1,true);
  if (bVar5) {
    UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
              (&this->CurTargetTransform,(TVector<double> *)&local_78._s_0,&this->LastBrushPosWorld)
    ;
    dVar7 = __real_3fa999999999999a;
    if (this->bInvert != false) {
      dVar7 = __real_bfa999999999999a;
    }
    fVar1 = this->ActivePressure;
    dVar3 = this->CurrentBrushRadius;
    fVar2 = ((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushSpeed;
    uVar6 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->ROIPositionBuffer,(this->VertexROI).ArrayNum,No);
    local_88._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UDynamicMeshSculptTool::ApplyInflateBrush'::__l2::<lambda_1>,void,int>
         ::Call;
    local_88._8_8_ = &local_a8;
    local_98._0_8_ = (void **)0x0;
    stack0xffffffffffffff70 = (UDynamicMeshSculptTool **)((ulonglong)uStack_8c << 0x20);
    local_a8 = this;
    local_a0 = uVar6;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(this->VertexROI).ArrayNum,1,
               (TFunctionRef<void___cdecl(int)> *)local_88,local_res18,None,
               (TArrayView<std::nullptr_t,int> *)local_98);
    local_98._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UDynamicMeshSculptTool::ApplyInflateBrush'::__l2::<lambda_2>,void,int>
         ::Call;
    unique0x00008e00 = &local_60;
    local_48 = local_78._s_0.X;
    dStack_40 = local_78._s_0.Y;
    local_88._0_8_ = (void **)0x0;
    local_38 = local_78._s_0.Z;
    local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
    local_60 = this;
    local_58 = uVar6;
    local_50 = (double)fVar2 * (double)fVar1 * dVar7 * dVar3;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(this->VertexROI).ArrayNum,1,
               (TFunctionRef<void___cdecl(int)> *)local_98,local_res18,None,
               (TArrayView<std::nullptr_t,int> *)local_88);
    if (((this->bEnableRemeshing != false) &&
        (pUVar4 = (this->RemeshProperties).field0_0x0.DebugPtr,
        pUVar4 != (UBrushRemeshProperties *)0x0)) && (pUVar4->bEnableRemeshing != false)) {
      this->bRemeshPending = true;
    }
    (this->LastBrushPosLocal).field0_0x0._s_0.X = local_78._s_0.X;
    (this->LastBrushPosLocal).field0_0x0._s_0.Y = local_78._s_0.Y;
    (this->LastBrushPosLocal).field0_0x0._s_0.Z = local_78._s_0.Z;
    return true;
  }
  return false;
}

// ApplyMoveBrush @ 14cc3b800

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

bool __thiscall
UDynamicMeshSculptTool::ApplyMoveBrush(UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  int iVar1;
  UBrushRemeshProperties *pUVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  <lambda_1> local_res8;
  TArrayView<std::nullptr_t,int> local_d8;
  code *local_c8 [3];
  UDynamicMeshSculptTool *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  
  UpdateBrushPositionOnActivePlane(this,param_1);
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            (&this->CurTargetTransform,(TVector<double> *)local_c8,&this->LastBrushPosWorld);
  uVar3 = local_c8[0]._0_4_;
  uVar4 = local_c8[0]._4_4_;
  uVar5 = local_c8[1]._0_4_;
  uVar8 = (undefined4)((ulonglong)local_c8[1] >> 0x20);
  local_88 = (double)local_c8[0] - (this->LastBrushPosLocal).field0_0x0._s_0.X;
  local_80 = (double)local_c8[1] - (this->LastBrushPosLocal).field0_0x0._s_0.Y;
  local_78 = (double)local_c8[2] - (this->LastBrushPosLocal).field0_0x0._s_0.Z;
  if (0.0 < local_80 * local_80 + local_88 * local_88 + local_78 * local_78) {
    uVar7 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
    iVar1 = (this->VertexROI).ArrayNum;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->ROIPositionBuffer,iVar1,No);
    local_d8.DataPtr = (void **)0x0;
    local_c8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UDynamicMeshSculptTool::ApplyMoveBrush'::__l2::<lambda_1>,void,int>
                  ::Call;
    local_d8.ArrayNum = 0;
    local_a0 = uVar3;
    uStack_9c = uVar4;
    uStack_98 = local_c8[1]._0_4_;
    local_90 = (double)local_c8[2];
    local_c8[1] = (code *)&local_b0;
    local_b0 = this;
    local_a8 = uVar7;
    uStack_94 = uVar8;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)local_c8,local_res8,
               None,&local_d8);
    if (((this->bEnableRemeshing != false) &&
        (pUVar2 = (this->RemeshProperties).field0_0x0.DebugPtr,
        pUVar2 != (UBrushRemeshProperties *)0x0)) && (pUVar2->bEnableRemeshing != false)) {
      this->bRemeshPending = true;
    }
    *(undefined4 *)&(this->LastBrushPosLocal).field0_0x0 = uVar3;
    *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 4) = uVar4;
    *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 8) = uVar5;
    *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 0xc) = uVar8;
    bVar6 = true;
  }
  else {
    bVar6 = false;
    *(undefined4 *)&(this->LastBrushPosLocal).field0_0x0 = local_c8[0]._0_4_;
    *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 4) = local_c8[0]._4_4_;
    *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 8) = local_c8[1]._0_4_;
    *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 0xc) = uVar8;
  }
  (this->LastBrushPosLocal).field0_0x0._s_0.Z = (double)local_c8[2];
  return bVar6;
}

// ApplyOffsetBrush @ 14cc3ba10

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

bool __thiscall
UDynamicMeshSculptTool::ApplyOffsetBrush
          (UDynamicMeshSculptTool *this,TRay<double> *param_1,bool param_2)

{
  int iVar1;
  UBrushRemeshProperties *pUVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined8 local_res8 [2];
  <lambda_1> local_res18 [8];
  double local_res20;
  TVector<double>_u_0 local_a8;
  double local_90;
  double dStack_88;
  double local_80;
  TArrayView<std::nullptr_t,int> local_78;
  TVector<double>_u_0 local_68;
  UDynamicMeshSculptTool *local_50;
  undefined8 *local_48;
  <lambda_1> *local_40;
  double *local_38;
  double *local_30;
  TVector<double>_u_0 *local_28;
  
  local_res18[0] = (<lambda_1>)param_2;
  UpdateBrushPositionOnTargetMesh(this,param_1,param_2);
  if (local_res18[0] != (<lambda_1>)0x0) {
    AlignBrushToView(this);
  }
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            (&this->CurTargetTransform,(TVector<double> *)&local_68._s_0,&this->LastBrushPosWorld);
  UE::Geometry::TQuaternion<double>::InverseMultiply
            (&(this->CurTargetTransform).Rotation,(TVector<double> *)&local_a8._s_0,
             &this->LastBrushPosNormalWorld);
  local_90 = local_a8._s_0.X * (this->CurTargetTransform).Scale3D.field0_0x0._s_0.X;
  dStack_88 = local_a8._s_0.Y * (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Y;
  dVar6 = local_a8._s_0.Z * (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Z;
  auVar3._0_8_ = local_90 * local_90;
  auVar3._8_8_ = 0;
  auVar4._0_8_ = dStack_88 * dStack_88 + auVar3._0_8_ + dVar6 * dVar6;
  auVar4._8_8_ = 0;
  auVar3 = sqrtpd(auVar3,auVar4);
  if (auVar3._0_8_ <= 0.0) {
    local_80 = 0.0;
    local_90 = 0.0;
    dStack_88 = 0.0;
  }
  else {
    local_80 = __real_3ff0000000000000 / auVar3._0_8_;
    local_90 = local_80 * local_90;
    dStack_88 = local_80 * dStack_88;
    local_80 = local_80 * dVar6;
  }
  dVar6 = __real_3fe0000000000000;
  if (this->bInvert != false) {
    dVar6 = __real_bfe0000000000000;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = this->CurrentBrushRadius;
  auVar3 = sqrtpd(auVar5,auVar5);
  local_res20 = auVar3._0_8_ * dVar6 *
                (double)((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushSpeed *
                (double)this->ActivePressure;
  local_res8[0] =
       (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
  iVar1 = (this->VertexROI).ArrayNum;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ROIPositionBuffer,iVar1,No);
  local_48 = local_res8;
  local_78.DataPtr = (void **)0x0;
  local_40 = local_res18;
  local_78.ArrayNum = 0;
  local_38 = &local_res20;
  local_30 = &local_90;
  local_28 = &local_68;
  local_a8._s_0.X =
       (double)UE::Core::Private::Function::
               TFunctionRefCaller<`UDynamicMeshSculptTool::ApplyOffsetBrush'::__l2::<lambda_1>,void,int>
               ::Call;
  local_a8._s_0.Y = (double)&local_50;
  local_50 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_a8._s_0,
             local_res18[0],None,&local_78);
  if (((this->bEnableRemeshing != false) &&
      (pUVar2 = (this->RemeshProperties).field0_0x0.DebugPtr,
      pUVar2 != (UBrushRemeshProperties *)0x0)) && (pUVar2->bEnableRemeshing != false)) {
    this->bRemeshPending = true;
  }
  (this->LastBrushPosLocal).field0_0x0._s_0.X = local_68._s_0.X;
  (this->LastBrushPosLocal).field0_0x0._s_0.Y = local_68._s_0.Y;
  (this->LastBrushPosLocal).field0_0x0._s_0.Z = local_68._s_0.Z;
  return true;
}

// ApplyPinchBrush @ 14cc3bc40

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

bool __thiscall
UDynamicMeshSculptTool::ApplyPinchBrush(UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  UBrushRemeshProperties *pUVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 unaff_XMM10 [16];
  undefined1 auVar26 [16];
  <lambda_1> local_res8;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  UDynamicMeshSculptTool *local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined1 local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_c0;
  
  UpdateBrushPositionOnTargetMesh(this,param_1,true);
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            (&this->CurTargetTransform,(TVector<double> *)&local_168._s_0,&this->LastBrushPosWorld);
  UE::Geometry::TQuaternion<double>::InverseMultiply
            (&(this->CurTargetTransform).Rotation,(TVector<double> *)&local_150._s_0,
             &this->LastBrushPosNormalWorld);
  uVar14 = local_168._8_4_;
  local_e0 = 0.0;
  dVar23 = local_150._s_0.X * (this->CurTargetTransform).Scale3D.field0_0x0._s_0.X;
  dVar24 = local_150._s_0.Y * (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Y;
  dVar25 = local_150._s_0.Z * (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Z;
  auVar26._0_8_ = dVar23 * dVar23;
  auVar26._8_8_ = 0;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar24 * dVar24 + auVar26._0_8_ + dVar25 * dVar25;
  auVar19 = sqrtpd(auVar26,auVar19);
  if (auVar19._0_8_ <= 0.0) {
    dVar23 = 0.0;
    dVar24 = 0.0;
    dVar21 = 0.0;
  }
  else {
    dVar21 = __real_3ff0000000000000 / auVar19._0_8_;
    dVar23 = dVar21 * dVar23;
    dVar24 = dVar21 * dVar24;
    dVar21 = dVar21 * dVar25;
  }
  uVar12 = local_168._0_4_;
  uVar13 = local_168._4_4_;
  dVar25 = (this->LastSmoothBrushPosLocal).field0_0x0._s_0.X;
  dVar7 = (double)((this->BrushProperties).field0_0x0.DebugPtr)->Depth * this->CurrentBrushRadius;
  dVar10 = local_168._s_0.X - dVar7 * dVar23;
  dVar16 = (double)CONCAT44(local_168._12_4_,local_168._8_4_) - dVar7 * dVar24;
  dVar23 = dVar25 * __real_3fe8000000000000 + local_168._s_0.X * __real_3fd0000000000000;
  dVar24 = (this->LastSmoothBrushPosLocal).field0_0x0._s_0.Y * __real_3fe8000000000000 +
           (double)CONCAT44(local_168._12_4_,local_168._8_4_) * __real_3fd0000000000000;
  local_c0 = (this->LastSmoothBrushPosLocal).field0_0x0._s_0.Z * __real_3fe8000000000000 +
             local_168._s_0.Z * __real_3fd0000000000000;
  dVar17 = __real_3fa999999999999a;
  if (this->bInvert != false) {
    dVar17 = __real_bfa999999999999a;
  }
  dVar22 = local_c0 - (this->LastSmoothBrushPosLocal).field0_0x0._s_0.Z;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = this->CurrentBrushRadius;
  auVar26 = sqrtpd(unaff_XMM10,auVar8);
  dVar25 = dVar23 - dVar25;
  fVar1 = ((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushSpeed;
  dVar9 = dVar24 - (this->LastSmoothBrushPosLocal).field0_0x0._s_0.Y;
  fVar2 = this->ActivePressure;
  auVar20._0_8_ = dVar25 * dVar25;
  auVar20._8_8_ = 0;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = dVar9 * dVar9 + auVar20._0_8_ + dVar22 * dVar22;
  auVar19 = sqrtpd(auVar20,auVar6);
  dVar18 = auVar19._0_8_;
  bVar11 = __real_3eb0c6f7a0000000 < dVar18;
  if (dVar18 <= 0.0) {
    dVar9 = 0.0;
    dVar18 = 0.0;
  }
  else {
    dVar18 = __real_3ff0000000000000 / dVar18;
    local_e0 = dVar18 * dVar22;
    dVar9 = dVar18 * dVar9;
    dVar18 = dVar18 * dVar25;
  }
  uVar15 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
  iVar3 = (this->VertexROI).ArrayNum;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ROIPositionBuffer,iVar3,No);
  local_150._s_0.X =
       (double)UE::Core::Private::Function::
               TFunctionRefCaller<`UDynamicMeshSculptTool::ApplyPinchBrush'::__l2::<lambda_1>,void,int>
               ::Call;
  local_150._s_0.Y = (double)&local_138;
  local_168._s_0.X = 0.0;
  local_res8 = SUB81(dVar16,0);
  local_168._8_4_ = 0;
  local_128 = uVar12;
  uStack_124 = uVar13;
  uStack_120 = uVar14;
  uStack_11c = local_168._12_4_;
  local_118 = local_168._s_0.Z;
  local_138 = this;
  local_130 = uVar15;
  local_110 = dVar10;
  local_108 = dVar16;
  local_100 = local_168._s_0.Z - dVar7 * dVar21;
  local_f8 = bVar11;
  local_f0 = dVar18;
  local_e8 = dVar9;
  local_d8 = auVar26._0_8_ * dVar17 * (double)fVar1 * (double)fVar2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar3,1,(TFunctionRef<void___cdecl(int)> *)&local_150._s_0,
             local_res8,None,(TArrayView<std::nullptr_t,int> *)&local_168._s_0);
  if (((this->bEnableRemeshing != false) &&
      (pUVar4 = (this->RemeshProperties).field0_0x0.DebugPtr,
      pUVar4 != (UBrushRemeshProperties *)0x0)) && (pUVar4->bEnableRemeshing != false)) {
    this->bRemeshPending = true;
  }
  *(undefined4 *)&(this->LastBrushPosLocal).field0_0x0 = uVar12;
  *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 4) = uVar13;
  *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 8) = uVar14;
  *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 0xc) = local_168._12_4_;
  auVar5._8_4_ = SUB84(dVar24,0);
  auVar5._0_8_ = dVar23;
  auVar5._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  *(undefined1 (*) [16])&(this->LastSmoothBrushPosLocal).field0_0x0 = auVar5;
  (this->LastBrushPosLocal).field0_0x0._s_0.Z = local_168._s_0.Z;
  (this->LastSmoothBrushPosLocal).field0_0x0._s_0.Z = local_c0;
  return true;
}

// ApplyPlaneBrush @ 14cc3c070

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

bool __thiscall
UDynamicMeshSculptTool::ApplyPlaneBrush(UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  int iVar1;
  UBrushRemeshProperties *pUVar2;
  bool bVar3;
  undefined1 in_XMM1 [16];
  undefined1 auVar4 [16];
  undefined8 local_res18;
  undefined8 local_res20;
  double local_78;
  TArrayView<std::nullptr_t,int> local_70;
  code *local_60;
  UDynamicMeshSculptTool **local_58;
  TVector<double>_u_0 local_50;
  UDynamicMeshSculptTool *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  double *local_20;
  TVector<double>_u_0 *local_18;
  
  bVar3 = UpdateBrushPositionOnSculptMesh(this,param_1,true);
  if (!bVar3) {
    return false;
  }
  local_res20 = 0;
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            (&this->CurTargetTransform,(TVector<double> *)&local_50._s_0,&this->LastBrushPosWorld);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (double)((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushSpeed *
                 this->CurrentBrushRadius;
  auVar4 = sqrtpd(in_XMM1,auVar4);
  local_78 = auVar4._0_8_ * __real_3fa999999999999a * (double)this->ActivePressure;
  local_res18 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))
                          ();
  iVar1 = (this->VertexROI).ArrayNum;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ROIPositionBuffer,iVar1,No);
  local_30 = &local_res18;
  local_70.DataPtr = (void **)0x0;
  local_28 = &local_res20;
  local_70.ArrayNum = 0;
  local_20 = &local_78;
  local_18 = &local_50;
  local_60 = UE::Core::Private::Function::
             TFunctionRefCaller<`UDynamicMeshSculptTool::ApplyPlaneBrush'::__l2::<lambda_1>,void,int>
             ::Call;
  local_58 = &local_38;
  local_38 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_60,
             local_res18._0_1_,None,&local_70);
  if (((this->bEnableRemeshing != false) &&
      (pUVar2 = (this->RemeshProperties).field0_0x0.DebugPtr,
      pUVar2 != (UBrushRemeshProperties *)0x0)) && (pUVar2->bEnableRemeshing != false)) {
    this->bRemeshPending = true;
  }
  (this->LastBrushPosLocal).field0_0x0._s_0.X = local_50._s_0.X;
  (this->LastBrushPosLocal).field0_0x0._s_0.Y = local_50._s_0.Y;
  (this->LastBrushPosLocal).field0_0x0._s_0.Z = local_50._s_0.Z;
  return true;
}

// ApplyPullKelvinBrush @ 14cc3c570

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

bool __thiscall
UDynamicMeshSculptTool::ApplyPullKelvinBrush(UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  UKelvinBrushProperties *pUVar1;
  UBrushRemeshProperties *pUVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  TVector<double>_u_0 local_228;
  FKelvinletBrushOpProperties local_208;
  TMatrix<double> local_1b8;
  FKelvinletBrushOp local_138;
  
  UpdateBrushPositionOnActivePlane(this,param_1);
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            (&this->CurTargetTransform,(TVector<double> *)&local_228._s_0,&this->LastBrushPosWorld);
  dVar3 = (double)CONCAT44(local_228._4_4_,local_228._0_4_) -
          (this->LastBrushPosLocal).field0_0x0._s_0.X;
  dVar4 = (double)CONCAT44(local_228._12_4_,local_228._8_4_) -
          (this->LastBrushPosLocal).field0_0x0._s_0.Y;
  local_208.Direction.field0_0x0._s_0.Z =
       local_228._s_0.Z - (this->LastBrushPosLocal).field0_0x0._s_0.Z;
  if (0.0 < dVar4 * dVar4 + dVar3 * dVar3 +
            local_208.Direction.field0_0x0._s_0.Z * local_208.Direction.field0_0x0._s_0.Z) {
    local_138.Mesh =
         (FDynamicMesh3 *)
         (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
    pUVar1 = (this->KelvinBrushProperties).field0_0x0.DebugPtr;
    local_138.TimeStep = __real_3ff0000000000000;
    local_138.NumSteps = 0.0;
    fVar6 = pUVar1->Stiffness;
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    local_208.NumSteps = pUVar1->BrushSteps;
    local_208.FallOff = (double)((this->BrushProperties).field0_0x0.DebugPtr)->BrushFalloffAmount;
    local_208.Mode = PullKelvinlet;
    local_208.Speed = 0.0;
    local_208.Mu = (double)fVar6;
    local_1b8.M[3][3] = __real_3ff0000000000000;
    fVar6 = __real_3f000000 - pUVar1->Incompressiblity;
    if (__real_3f000000 <= fVar6) {
      fVar6 = __real_3f000000;
    }
    local_1b8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
    local_1b8.M[0][1] = _UNK_150689518;
    local_1b8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
    local_1b8.M[2][3] = _UNK_150689518;
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    local_208.Nu = (double)fVar6;
    local_208.Direction.field0_0x0._8_4_ = SUB84(dVar4,0);
    local_208.Direction.field0_0x0._0_8_ = dVar3;
    local_208.Direction.field0_0x0._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_1b8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
    local_1b8.M[1][1] = _UNK_15061cbc8;
    local_208.Size = (double)pUVar1->FallOffDistance * this->CurrentBrushRadius;
    local_1b8.M[2][0] = 0.0;
    local_1b8.M[2][1] = 0.0;
    uVar7 = (uint)__xmm_80000000000000008000000000000000;
    uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_1b8.M[3][2] =
         (double)CONCAT44((uint)((ulonglong)local_228._16_8_ >> 0x20) ^ uVar8,
                          SUB84(local_228._s_0.Z,0) ^ uVar7);
    if (local_208.Size <= 0.0) {
      local_208.Size = 0.0;
    }
    local_208.Size = local_208.Size * __real_3fe3333333333333;
    local_1b8.M[0][2] = 0.0;
    local_1b8.M[0][3] = 0.0;
    local_1b8.M[1][2] = 0.0;
    local_1b8.M[1][3] = 0.0;
    local_1b8.M[3][0] = (double)CONCAT44(local_228._4_4_ ^ uVar8,local_228._0_4_ ^ uVar7);
    local_1b8.M[3][1] = (double)CONCAT44(local_228._12_4_ ^ uVar8,local_228._8_4_ ^ uVar7);
    FKelvinletBrushOp::ApplyBrush
              (&local_138,&local_208,&local_1b8,&this->VertexROI,&this->ROIPositionBuffer);
    if (((this->bEnableRemeshing != false) &&
        (pUVar2 = (this->RemeshProperties).field0_0x0.DebugPtr,
        pUVar2 != (UBrushRemeshProperties *)0x0)) && (pUVar2->bEnableRemeshing != false)) {
      this->bRemeshPending = true;
    }
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  *(undefined4 *)&(this->LastBrushPosLocal).field0_0x0 = local_228._0_4_;
  *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 4) = local_228._4_4_;
  *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 8) = local_228._8_4_;
  *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 0xc) = local_228._12_4_;
  *(double *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 0x10) = local_228._s_0.Z;
  return bVar5;
}

// ApplyPullSharpKelvinBrush @ 14cc3c810

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

bool __thiscall
UDynamicMeshSculptTool::ApplyPullSharpKelvinBrush
          (UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  UKelvinBrushProperties *pUVar1;
  UBrushRemeshProperties *pUVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  TVector<double>_u_0 local_228;
  FKelvinletBrushOpProperties local_208;
  TMatrix<double> local_1b8;
  FKelvinletBrushOp local_138;
  
  UpdateBrushPositionOnActivePlane(this,param_1);
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            (&this->CurTargetTransform,(TVector<double> *)&local_228._s_0,&this->LastBrushPosWorld);
  dVar3 = (double)CONCAT44(local_228._4_4_,local_228._0_4_) -
          (this->LastBrushPosLocal).field0_0x0._s_0.X;
  dVar4 = (double)CONCAT44(local_228._12_4_,local_228._8_4_) -
          (this->LastBrushPosLocal).field0_0x0._s_0.Y;
  local_208.Direction.field0_0x0._s_0.Z =
       local_228._s_0.Z - (this->LastBrushPosLocal).field0_0x0._s_0.Z;
  if (0.0 < dVar4 * dVar4 + dVar3 * dVar3 +
            local_208.Direction.field0_0x0._s_0.Z * local_208.Direction.field0_0x0._s_0.Z) {
    local_138.Mesh =
         (FDynamicMesh3 *)
         (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
    pUVar1 = (this->KelvinBrushProperties).field0_0x0.DebugPtr;
    local_138.TimeStep = __real_3ff0000000000000;
    local_138.NumSteps = 0.0;
    fVar6 = pUVar1->Stiffness;
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    local_208.NumSteps = pUVar1->BrushSteps;
    local_208.FallOff = (double)((this->BrushProperties).field0_0x0.DebugPtr)->BrushFalloffAmount;
    local_208.Mode = SharpPullKelvinlet;
    local_208.Speed = 0.0;
    local_208.Mu = (double)fVar6;
    local_1b8.M[3][3] = __real_3ff0000000000000;
    fVar6 = __real_3f000000 - pUVar1->Incompressiblity;
    if (__real_3f000000 <= fVar6) {
      fVar6 = __real_3f000000;
    }
    local_1b8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
    local_1b8.M[0][1] = _UNK_150689518;
    local_1b8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
    local_1b8.M[2][3] = _UNK_150689518;
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    local_208.Nu = (double)fVar6;
    local_208.Direction.field0_0x0._8_4_ = SUB84(dVar4,0);
    local_208.Direction.field0_0x0._0_8_ = dVar3;
    local_208.Direction.field0_0x0._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    local_1b8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
    local_1b8.M[1][1] = _UNK_15061cbc8;
    local_208.Size = (double)pUVar1->FallOffDistance * this->CurrentBrushRadius;
    local_1b8.M[2][0] = 0.0;
    local_1b8.M[2][1] = 0.0;
    uVar7 = (uint)__xmm_80000000000000008000000000000000;
    uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_1b8.M[3][2] =
         (double)CONCAT44((uint)((ulonglong)local_228._16_8_ >> 0x20) ^ uVar8,
                          SUB84(local_228._s_0.Z,0) ^ uVar7);
    if (local_208.Size <= 0.0) {
      local_208.Size = 0.0;
    }
    local_208.Size = local_208.Size * __real_3fe3333333333333;
    local_1b8.M[0][2] = 0.0;
    local_1b8.M[0][3] = 0.0;
    local_1b8.M[1][2] = 0.0;
    local_1b8.M[1][3] = 0.0;
    local_1b8.M[3][0] = (double)CONCAT44(local_228._4_4_ ^ uVar8,local_228._0_4_ ^ uVar7);
    local_1b8.M[3][1] = (double)CONCAT44(local_228._12_4_ ^ uVar8,local_228._8_4_ ^ uVar7);
    FKelvinletBrushOp::ApplyBrush
              (&local_138,&local_208,&local_1b8,&this->VertexROI,&this->ROIPositionBuffer);
    if (((this->bEnableRemeshing != false) &&
        (pUVar2 = (this->RemeshProperties).field0_0x0.DebugPtr,
        pUVar2 != (UBrushRemeshProperties *)0x0)) && (pUVar2->bEnableRemeshing != false)) {
      this->bRemeshPending = true;
    }
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  *(undefined4 *)&(this->LastBrushPosLocal).field0_0x0 = local_228._0_4_;
  *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 4) = local_228._4_4_;
  *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 8) = local_228._8_4_;
  *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 0xc) = local_228._12_4_;
  *(double *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 0x10) = local_228._s_0.Z;
  return bVar5;
}

// ApplyResampleBrush @ 14cc3d3d0

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

bool __thiscall
UDynamicMeshSculptTool::ApplyResampleBrush(UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  int iVar1;
  UBrushRemeshProperties *pUVar2;
  undefined8 local_res8;
  UDynamicMeshSculptTool *local_58;
  undefined8 *local_50;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  UDynamicMeshSculptTool **local_30;
  TVector<double>_u_0 local_28;
  
  UpdateBrushPositionOnTargetMesh(this,param_1,true);
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            (&this->CurTargetTransform,(TVector<double> *)&local_28._s_0,&this->LastBrushPosWorld);
  local_res8 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))
                         ();
  iVar1 = (this->VertexROI).ArrayNum;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ROIPositionBuffer,iVar1,No);
  local_50 = &local_res8;
  local_48.DataPtr = (void **)0x0;
  local_48.ArrayNum = 0;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UDynamicMeshSculptTool::ApplyResampleBrush'::__l2::<lambda_1>,void,int>
             ::Call;
  local_30 = &local_58;
  local_58 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_38,
             local_res8._0_1_,None,&local_48);
  if (((this->bEnableRemeshing != false) &&
      (pUVar2 = (this->RemeshProperties).field0_0x0.DebugPtr,
      pUVar2 != (UBrushRemeshProperties *)0x0)) && (pUVar2->bEnableRemeshing != false)) {
    this->bRemeshPending = true;
  }
  (this->LastBrushPosLocal).field0_0x0._s_0.X = local_28._s_0.X;
  (this->LastBrushPosLocal).field0_0x0._s_0.Y = local_28._s_0.Y;
  (this->LastBrushPosLocal).field0_0x0._s_0.Z = local_28._s_0.Z;
  return true;
}

// ApplyScaleKelvinBrush @ 14cc3d760

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

bool __thiscall
UDynamicMeshSculptTool::ApplyScaleKelvinBrush(UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  float fVar1;
  float fVar2;
  UKelvinBrushProperties *pUVar3;
  UBrushRemeshProperties *pUVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar8;
  undefined1 auVar7 [16];
  float fVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_220;
  FKelvinletBrushOpProperties local_208;
  TMatrix<double> local_1b8;
  FKelvinletBrushOp local_138;
  
  UpdateBrushPositionOnSculptMesh(this,param_1,true);
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            (&this->CurTargetTransform,(TVector<double> *)&local_238._s_0,&this->LastBrushPosWorld);
  UE::Geometry::TQuaternion<double>::InverseMultiply
            (&(this->CurTargetTransform).Rotation,(TVector<double> *)&local_220._s_0,
             &this->LastBrushPosNormalWorld);
  local_138.TimeStep = __real_3ff0000000000000;
  dVar13 = local_220._s_0.X * (this->CurTargetTransform).Scale3D.field0_0x0._s_0.X;
  dVar14 = local_220._s_0.Y * (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Y;
  auVar15._0_8_ = local_220._s_0.Z * (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Z;
  auVar15._8_8_ = 0;
  auVar7._0_8_ = dVar13 * dVar13;
  auVar7._8_8_ = 0;
  auVar11._0_8_ = dVar14 * dVar14 + auVar7._0_8_ + auVar15._0_8_ * auVar15._0_8_;
  auVar11._8_8_ = 0;
  auVar7 = sqrtpd(auVar7,auVar11);
  if (auVar7._0_8_ <= 0.0) {
    dVar13 = 0.0;
    dVar14 = 0.0;
    dVar12 = 0.0;
  }
  else {
    dVar12 = __real_3ff0000000000000 / auVar7._0_8_;
    dVar13 = dVar12 * dVar13;
    dVar14 = dVar12 * dVar14;
    dVar12 = dVar12 * auVar15._0_8_;
  }
  dVar10 = (double)((this->BrushProperties).field0_0x0.DebugPtr)->Depth * this->CurrentBrushRadius;
  dVar13 = local_238._s_0.X - dVar10 * dVar13;
  dVar14 = local_238._s_0.Y - dVar10 * dVar14;
  dVar12 = local_238._s_0.Z - dVar10 * dVar12;
  dVar10 = __real_3f9999999999999a;
  if (this->bInvert != false) {
    dVar10 = __real_bf9999999999999a;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = this->CurrentBrushRadius;
  auVar7 = sqrtpd(auVar15,auVar5);
  fVar1 = ((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushSpeed;
  fVar2 = this->ActivePressure;
  local_138.Mesh =
       (FDynamicMesh3 *)
       (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
  pUVar3 = (this->KelvinBrushProperties).field0_0x0.DebugPtr;
  local_138.NumSteps = 0.0;
  fVar9 = pUVar3->Stiffness;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  local_208.NumSteps = pUVar3->BrushSteps;
  local_208.FallOff = (double)((this->BrushProperties).field0_0x0.DebugPtr)->BrushFalloffAmount;
  local_208.Mode = ScaleKelvinlet;
  local_208.Speed = 0.0;
  local_208.Mu = (double)fVar9;
  fVar9 = __real_3f000000 - pUVar3->Incompressiblity;
  local_1b8.M[3][3] = local_138.TimeStep;
  if (__real_3f000000 <= fVar9) {
    fVar9 = __real_3f000000;
  }
  local_1b8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_1b8.M[0][1] = _UNK_150689518;
  local_1b8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_1b8.M[2][3] = _UNK_150689518;
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  local_208.Nu = (double)fVar9;
  local_208.Size = (double)pUVar3->FallOffDistance * this->CurrentBrushRadius;
  local_208.Direction.field0_0x0._s_0.Y = 0.0;
  local_208.Direction.field0_0x0._s_0.Z = 0.0;
  local_1b8.M[0][2] = 0.0;
  local_1b8.M[0][3] = 0.0;
  local_1b8.M[1][2] = 0.0;
  local_1b8.M[1][3] = 0.0;
  if (local_208.Size <= 0.0) {
    local_208.Size = 0.0;
  }
  uVar6 = (uint)__xmm_80000000000000008000000000000000;
  uVar8 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_1b8.M[3][0] =
       (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) ^ uVar8,SUB84(dVar13,0) ^ uVar6);
  local_1b8.M[3][1] =
       (double)CONCAT44((uint)((ulonglong)dVar14 >> 0x20) ^ uVar8,SUB84(dVar14,0) ^ uVar6);
  local_1b8.M[3][2] =
       (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^ uVar8,SUB84(dVar12,0) ^ uVar6);
  local_208.Size = local_208.Size * ___real_3fd6666666666666;
  local_1b8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_1b8.M[1][1] = _UNK_15061cbc8;
  local_1b8.M[2][0] = 0.0;
  local_1b8.M[2][1] = 0.0;
  local_208.Direction.field0_0x0._s_0.X = auVar7._0_8_ * dVar10 * (double)fVar1 * (double)fVar2;
  FKelvinletBrushOp::ApplyBrush
            (&local_138,&local_208,&local_1b8,&this->VertexROI,&this->ROIPositionBuffer);
  if (((this->bEnableRemeshing != false) &&
      (pUVar4 = (this->RemeshProperties).field0_0x0.DebugPtr,
      pUVar4 != (UBrushRemeshProperties *)0x0)) && (pUVar4->bEnableRemeshing != false)) {
    this->bRemeshPending = true;
  }
  (this->LastBrushPosLocal).field0_0x0._s_0.X = local_238._s_0.X;
  (this->LastBrushPosLocal).field0_0x0._s_0.Y = local_238._s_0.Y;
  (this->LastBrushPosLocal).field0_0x0._s_0.Z = local_238._s_0.Z;
  return true;
}

// ApplySculptMaxBrush @ 14cc3dac0

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

bool __thiscall
UDynamicMeshSculptTool::ApplySculptMaxBrush(UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  USculptMaxBrushProperties *pUVar4;
  UOctreeDynamicMeshComponent *pUVar5;
  UBrushRemeshProperties *pUVar6;
  double dVar7;
  code *pcVar8;
  code *pcVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar12 [16];
  <lambda_1> local_res8;
  TArrayView<std::nullptr_t,int> local_a8;
  code *local_98 [3];
  UDynamicMeshSculptTool *local_80;
  undefined8 local_78;
  double local_70;
  double dStack_68;
  double local_60;
  double local_58;
  double local_50;
  
  UpdateBrushPositionOnTargetMesh(this,param_1,true);
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            (&this->CurTargetTransform,(TVector<double> *)local_98,&this->LastBrushPosWorld);
  dVar11 = __real_3ff0000000000000;
  if (this->bInvert != false) {
    dVar11 = __real_bff0000000000000;
  }
  auVar12._8_8_ = 0;
  auVar12._0_8_ = this->CurrentBrushRadius;
  auVar12 = sqrtpd(unaff_XMM6,auVar12);
  fVar1 = ((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushSpeed;
  pUVar4 = (this->SculptMaxBrushProperties).field0_0x0.DebugPtr;
  fVar2 = this->ActivePressure;
  dVar7 = (double)pUVar4->MaxHeight * this->CurrentBrushRadius;
  if ((pUVar4->bFreezeCurrentHeight != false) && (0.0 <= this->SculptMaxFixedHeight)) {
    dVar7 = this->SculptMaxFixedHeight;
  }
  pUVar5 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  this->SculptMaxFixedHeight = dVar7;
  uVar10 = (**(code **)(*(longlong *)pUVar5 + 0xb38))();
  iVar3 = (this->VertexROI).ArrayNum;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ROIPositionBuffer,iVar3,No);
  pcVar9 = local_98[1];
  pcVar8 = local_98[0];
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::ApplySculptMaxBrush'::__l2::<lambda_1>,void,int>
                ::Call;
  local_a8.DataPtr = (void **)0x0;
  local_a8.ArrayNum = 0;
  local_70 = (double)pcVar8;
  dStack_68 = (double)local_98[1];
  local_60 = (double)local_98[2];
  local_98[1] = (code *)&local_80;
  local_80 = this;
  local_78 = uVar10;
  local_58 = auVar12._0_8_ * dVar11 * (double)fVar1 * (double)fVar2;
  local_50 = dVar7;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar3,1,(TFunctionRef<void___cdecl(int)> *)local_98,local_res8,None
             ,&local_a8);
  if (((this->bEnableRemeshing != false) &&
      (pUVar6 = (this->RemeshProperties).field0_0x0.DebugPtr,
      pUVar6 != (UBrushRemeshProperties *)0x0)) && (pUVar6->bEnableRemeshing != false)) {
    this->bRemeshPending = true;
  }
  (this->LastBrushPosLocal).field0_0x0._s_0.X = (double)pcVar8;
  (this->LastBrushPosLocal).field0_0x0._s_0.Y = (double)pcVar9;
  (this->LastBrushPosLocal).field0_0x0._s_0.Z = (double)local_98[2];
  return true;
}

// ApplySmoothBrush @ 14cc3e7c0

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

bool __thiscall
UDynamicMeshSculptTool::ApplySmoothBrush(UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  int iVar1;
  UBrushRemeshProperties *pUVar2;
  bool bVar3;
  undefined8 uVar4;
  <lambda_1> local_res18;
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  UDynamicMeshSculptTool **local_50;
  TVector<double>_u_0 local_48;
  UDynamicMeshSculptTool *local_30;
  undefined8 local_28;
  double local_20;
  double dStack_18;
  double local_10;
  
  bVar3 = UpdateBrushPositionOnSculptMesh(this,param_1,true);
  if (!bVar3) {
    return false;
  }
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            (&this->CurTargetTransform,(TVector<double> *)&local_48._s_0,&this->LastBrushPosWorld);
  uVar4 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
  iVar1 = (this->VertexROI).ArrayNum;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->ROIPositionBuffer,iVar1,No);
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UDynamicMeshSculptTool::ApplySmoothBrush'::__l2::<lambda_1>,void,int>
             ::Call;
  local_50 = &local_30;
  local_68.DataPtr = (void **)0x0;
  local_68.ArrayNum = 0;
  local_20 = local_48._s_0.X;
  dStack_18 = local_48._s_0.Y;
  local_10 = local_48._s_0.Z;
  local_30 = this;
  local_28 = uVar4;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_58,local_res18,
             None,&local_68);
  if (((this->bEnableRemeshing != false) &&
      (pUVar2 = (this->RemeshProperties).field0_0x0.DebugPtr,
      pUVar2 != (UBrushRemeshProperties *)0x0)) && (pUVar2->bEnableRemeshing != false)) {
    this->bRemeshPending = true;
  }
  (this->LastBrushPosLocal).field0_0x0._s_0.X = local_48._s_0.X;
  (this->LastBrushPosLocal).field0_0x0._s_0.Y = local_48._s_0.Y;
  (this->LastBrushPosLocal).field0_0x0._s_0.Z = local_48._s_0.Z;
  return true;
}

// ApplyStamp @ 14cc3ece0

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

void __thiscall
UDynamicMeshSculptTool::ApplyStamp(UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  int *piVar1;
  EDynamicMeshSculptBrushType *pEVar2;
  float fVar3;
  double dVar4;
  FScriptContainerElement *pFVar5;
  USculptMaxBrushProperties *pUVar6;
  UOctreeDynamicMeshComponent *pUVar7;
  UBrushRemeshProperties *pUVar8;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  EAsyncExecution EVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  TArrayView<std::nullptr_t,int> *pTVar18;
  undefined8 uVar19;
  EDynamicMeshSculptBrushType EVar20;
  TArray<EDynamicMeshSculptBrushType,TSizedDefaultAllocator<32>_> *pTVar21;
  TFunctionRef<void___cdecl(int)> *pTVar22;
  uint uVar23;
  EDynamicMeshSculptBrushType *pEVar24;
  bool bVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 unaff_XMM6 [16];
  FDynamicMeshOctree3 *local_res8;
  <lambda_2> local_res18;
  undefined8 local_res20;
  undefined8 local_468;
  double local_460;
  undefined8 local_458;
  FDynamicMesh3 *local_450;
  TVector<double>_u_0 local_448;
  TArrayView<std::nullptr_t,int> local_430;
  code *local_420;
  UDynamicMeshSculptTool **local_418;
  TArrayView<std::nullptr_t,int> local_410;
  code *local_400;
  UDynamicMeshSculptTool **local_3f8;
  TArrayView<std::nullptr_t,int> local_3f0;
  code *local_3e0;
  UDynamicMeshSculptTool **local_3d8;
  UDynamicMeshSculptTool *local_3d0;
  undefined8 local_3c8;
  TArrayView<std::nullptr_t,int> local_3c0;
  code *local_3b0;
  UDynamicMeshSculptTool **local_3a8;
  TArrayView<std::nullptr_t,int> local_3a0;
  code *local_390;
  UDynamicMeshSculptTool **local_388;
  TArrayView<std::nullptr_t,int> local_380;
  code *local_370;
  UDynamicMeshSculptTool **local_368;
  UDynamicMeshSculptTool *local_360;
  undefined8 *local_358;
  TArrayView<std::nullptr_t,int> local_350;
  code *local_340;
  UDynamicMeshSculptTool **local_338;
  <lambda_3> local_330;
  undefined1 local_320 [16];
  undefined1 local_310 [16];
  undefined1 local_300 [16];
  <lambda_1> local_2f0;
  TVector<double>_u_0 local_2e0;
  UDynamicMeshSculptTool *local_2c8;
  undefined8 *local_2c0;
  TFrame3<double> *local_2b8;
  undefined8 *local_2b0;
  TVector<double>_u_0 *local_2a8;
  double *local_2a0;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_280;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_250;
  UDynamicMeshSculptTool *local_238;
  undefined8 local_230;
  double local_228;
  double dStack_220;
  double local_218;
  UDynamicMeshSculptTool *local_210;
  undefined8 local_208;
  double local_200;
  UDynamicMeshSculptTool *local_1e0;
  undefined8 local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  UDynamicMeshSculptTool *local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  TUniqueFunction<void___cdecl(void)> local_168;
  TUniqueFunction<void___cdecl(void)> local_138;
  TUniqueFunction<void___cdecl(void)> local_108;
  TFrame3<double> local_d8 [2];
  
  bVar25 = -1 < CpuChannel->Enabled;
  if (bVar25) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId599,"DynamicMeshSculptTool_ApplyStamp",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
               ,599);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId599);
  }
  local_450 = (FDynamicMesh3 *)
              (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))()
  ;
  pEVar2 = &this->LastStampType;
  local_res8 = (((this->DynamicMeshComponent).field0_0x0.DebugPtr)->Octree).Ptr;
  this->StampTimestamp = this->StampTimestamp + 1;
  EVar20 = this->PendingStampType;
  if (*pEVar2 != EVar20) {
    iVar16 = (this->BrushTypeHistory).ArrayNum;
    pTVar21 = &this->BrushTypeHistory;
    if (this->BrushTypeHistoryIndex != iVar16 + -1) {
      if (*pEVar2 != LastValue) {
        pFVar5 = (pTVar21->AllocatorInstance).Data;
        if (((pFVar5 <= pEVar2) && (pEVar2 < pFVar5 + (this->BrushTypeHistory).ArrayMax)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar16 = (this->BrushTypeHistory).ArrayNum;
        piVar1 = &(this->BrushTypeHistory).ArrayMax;
        if (iVar16 == *piVar1) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x101,&pTVar21->AllocatorInstance,piVar1);
        }
        (this->BrushTypeHistory).ArrayNum = iVar16 + 1;
        (pTVar21->AllocatorInstance).Data[iVar16] = (FScriptContainerElement)*pEVar2;
        EVar20 = this->PendingStampType;
      }
      iVar16 = (this->BrushTypeHistory).ArrayNum;
      this->BrushTypeHistoryIndex = iVar16 + -1;
    }
    pEVar24 = &this->PendingStampType;
    *pEVar2 = EVar20;
    if (iVar16 != 0) {
      uVar23 = iVar16 - 1;
      uVar17 = 0;
      if ((int)uVar23 < iVar16) {
        uVar17 = ~uVar23 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if ((this->BrushTypeHistory).AllocatorInstance.Data[(int)uVar23] ==
          (FScriptContainerElement)*pEVar24) goto LAB_14cc3ef9c;
    }
    pTVar21 = &this->BrushTypeHistory;
    pFVar5 = (pTVar21->AllocatorInstance).Data;
    if (((pFVar5 <= pEVar24) && (pEVar24 < pFVar5 + (this->BrushTypeHistory).ArrayMax)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar16 = (this->BrushTypeHistory).ArrayNum;
    piVar1 = &(this->BrushTypeHistory).ArrayMax;
    if (iVar16 == *piVar1) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x101,&pTVar21->AllocatorInstance,piVar1);
      (this->BrushTypeHistory).ArrayNum = iVar16;
    }
    (this->BrushTypeHistory).ArrayNum = iVar16 + 1;
    (pTVar21->AllocatorInstance).Data[iVar16] = (FScriptContainerElement)*pEVar24;
    this->BrushTypeHistoryIndex = (this->BrushTypeHistory).ArrayNum + -1;
  }
LAB_14cc3ef9c:
  fVar26 = FBrushToolRadius::GetWorldRadius
                     (&((this->BrushProperties).field0_0x0.DebugPtr)->BrushSize);
  EVar13 = DynamicSculptToolAsyncExecTarget;
  local_2f0.Octree = &local_res8;
  auVar30._0_8_ = (double)fVar26;
  auVar30._8_8_ = 0;
  local_168._0_8_ = 0;
  local_168._40_8_ = 0;
  this->CurrentBrushRadius = auVar30._0_8_;
  local_2f0.__this = this;
  Async<_UDynamicMeshSculptTool::ApplyStamp_::__l2::<lambda_1>_>
            ((TFuture<void> *)local_300,EVar13,&local_2f0,&local_168);
  local_138._0_8_ = 0;
  local_138._40_8_ = 0;
  local_res18.__this = this;
  Async<_UDynamicMeshSculptTool::ApplyStamp_::__l2::<lambda_2>_>
            ((TFuture<void> *)local_310,DynamicSculptToolAsyncExecTarget,&local_res18,&local_138);
  bVar14 = false;
  if (this->bSmoothing == false) {
    EVar20 = ((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushType;
    if (Resample < EVar20) goto LAB_14cc3f9e7;
  }
  else {
    EVar20 = Smooth;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(EVar20) {
  case Move:
    UpdateBrushPositionOnActivePlane(this,param_1);
    UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
              (&this->CurTargetTransform,(TVector<double> *)&local_2e0._s_0,&this->LastBrushPosWorld
              );
    dVar29 = (double)CONCAT44(local_2e0._4_4_,local_2e0._0_4_) -
             (this->LastBrushPosLocal).field0_0x0._s_0.X;
    dVar4 = (double)CONCAT44(local_2e0._12_4_,local_2e0._8_4_) -
            (this->LastBrushPosLocal).field0_0x0._s_0.Y;
    dVar12 = local_2e0._s_0.Z - (this->LastBrushPosLocal).field0_0x0._s_0.Z;
    if (0.0 < dVar4 * dVar4 + dVar29 * dVar29 + dVar12 * dVar12) {
      uVar19 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))
                         ();
      iVar16 = (this->VertexROI).ArrayNum;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                (&this->ROIPositionBuffer,iVar16,No);
      local_400 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UDynamicMeshSculptTool::ApplyMoveBrush'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_3f8 = &local_1a8;
      local_198 = local_2e0._0_4_;
      uStack_194 = local_2e0._4_4_;
      uStack_190 = local_2e0._8_4_;
      uStack_18c = local_2e0._12_4_;
      local_410.DataPtr = (void **)0x0;
      local_188 = local_2e0._s_0.Z;
      local_410.ArrayNum = 0;
      local_1a8 = this;
      local_1a0 = uVar19;
      local_180 = dVar29;
      local_178 = dVar4;
      local_170 = dVar12;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar16,1,(TFunctionRef<void___cdecl(int)> *)&local_400,
                 local_res8._0_1_,None,&local_410);
      if (((this->bEnableRemeshing != false) &&
          (pUVar8 = (this->RemeshProperties).field0_0x0.DebugPtr,
          pUVar8 != (UBrushRemeshProperties *)0x0)) && (pUVar8->bEnableRemeshing != false)) {
        this->bRemeshPending = true;
      }
      *(undefined4 *)&(this->LastBrushPosLocal).field0_0x0 = local_2e0._0_4_;
      *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 4) = local_2e0._4_4_;
      *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 8) = local_2e0._8_4_;
      *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 0xc) = local_2e0._12_4_;
      bVar14 = true;
    }
    else {
      bVar14 = false;
      *(undefined4 *)&(this->LastBrushPosLocal).field0_0x0 = local_2e0._0_4_;
      *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 4) = local_2e0._4_4_;
      *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 8) = local_2e0._8_4_;
      *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 0xc) = local_2e0._12_4_;
    }
    (this->LastBrushPosLocal).field0_0x0._s_0.Z = local_2e0._s_0.Z;
    break;
  case PullKelvin:
    bVar14 = ApplyPullKelvinBrush(this,param_1);
    break;
  case PullSharpKelvin:
    bVar14 = ApplyPullSharpKelvinBrush(this,param_1);
    break;
  case Smooth:
    bVar14 = UpdateBrushPositionOnSculptMesh(this,param_1,true);
    if (!bVar14) {
      bVar14 = false;
      break;
    }
    UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
              (&this->CurTargetTransform,(TVector<double> *)&local_280._s_0,&this->LastBrushPosWorld
              );
    uVar19 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
    iVar16 = (this->VertexROI).ArrayNum;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->ROIPositionBuffer,iVar16,No);
    uVar27 = SUB84(local_280._s_0.Z,0);
    uVar28 = (undefined4)((ulonglong)local_280._16_8_ >> 0x20);
    pTVar22 = (TFunctionRef<void___cdecl(int)> *)&local_3e0;
    local_3e0 = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::ApplySmoothBrush'::__l2::<lambda_1>,void,int>
                ::Call;
    local_3d8 = &local_238;
    pTVar18 = &local_3f0;
    local_228 = local_280._s_0.X;
    dStack_220 = local_280._s_0.Y;
    local_3f0.DataPtr = (void **)0x0;
    local_218 = local_280._s_0.Z;
    local_3f0.ArrayNum = 0;
    local_268._s_0.X = local_280._s_0.X;
    local_268._s_0.Y = local_280._s_0.Y;
    local_238 = this;
    local_230 = uVar19;
    goto LAB_14cc3f515;
  case Offset:
    bVar14 = ApplyOffsetBrush(this,param_1,false);
    break;
  case SculptView:
    bVar14 = ApplyOffsetBrush(this,param_1,true);
    break;
  case SculptMax:
    UpdateBrushPositionOnTargetMesh(this,param_1,true);
    UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
              (&this->CurTargetTransform,(TVector<double> *)&local_298._s_0,&this->LastBrushPosWorld
              );
    if (this->bInvert == false) {
      uVar27 = (undefined4)__real_3ff0000000000000;
      uVar28 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    }
    else {
      uVar27 = (undefined4)__real_bff0000000000000;
      uVar28 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = this->CurrentBrushRadius;
    auVar30 = sqrtpd(unaff_XMM6,auVar11);
    fVar26 = ((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushSpeed;
    pUVar6 = (this->SculptMaxBrushProperties).field0_0x0.DebugPtr;
    fVar3 = this->ActivePressure;
    dVar29 = (double)pUVar6->MaxHeight * this->CurrentBrushRadius;
    if ((pUVar6->bFreezeCurrentHeight != false) && (0.0 <= this->SculptMaxFixedHeight)) {
      dVar29 = this->SculptMaxFixedHeight;
    }
    pUVar7 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
    this->SculptMaxFixedHeight = dVar29;
    uVar19 = (**(code **)(*(longlong *)pUVar7 + 0xb38))();
    iVar16 = (this->VertexROI).ArrayNum;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->ROIPositionBuffer,iVar16,No);
    local_420 = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::ApplySculptMaxBrush'::__l2::<lambda_1>,void,int>
                ::Call;
    local_418 = &local_1e0;
    local_1d0 = local_298._s_0.X;
    dStack_1c8 = local_298._s_0.Y;
    local_430.DataPtr = (void **)0x0;
    local_1c0 = local_298._s_0.Z;
    local_430.ArrayNum = 0;
    local_1e0 = this;
    local_1d8 = uVar19;
    local_1b8 = auVar30._0_8_ * (double)CONCAT44(uVar28,uVar27) * (double)fVar26 * (double)fVar3;
    local_1b0 = dVar29;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar16,1,(TFunctionRef<void___cdecl(int)> *)&local_420,
               local_res8._0_1_,None,&local_430);
    if (((this->bEnableRemeshing != false) &&
        (pUVar8 = (this->RemeshProperties).field0_0x0.DebugPtr,
        pUVar8 != (UBrushRemeshProperties *)0x0)) && (pUVar8->bEnableRemeshing != false)) {
      this->bRemeshPending = true;
    }
    (this->LastBrushPosLocal).field0_0x0._s_0.X = local_298._s_0.X;
    (this->LastBrushPosLocal).field0_0x0._s_0.Y = local_298._s_0.Y;
    (this->LastBrushPosLocal).field0_0x0._s_0.Z = local_298._s_0.Z;
    goto LAB_14cc3f9c2;
  case Inflate:
    bVar14 = UpdateBrushPositionOnSculptMesh(this,param_1,true);
    if (!bVar14) {
      bVar14 = false;
      break;
    }
    UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
              (&this->CurTargetTransform,(TVector<double> *)&local_268._s_0,&this->LastBrushPosWorld
              );
    dVar29 = __real_3fa999999999999a;
    if (this->bInvert != false) {
      dVar29 = __real_bfa999999999999a;
    }
    fVar26 = this->ActivePressure;
    dVar4 = this->CurrentBrushRadius;
    fVar3 = ((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushSpeed;
    uVar19 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->ROIPositionBuffer,(this->VertexROI).ArrayNum,No);
    local_3b0 = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::ApplyInflateBrush'::__l2::<lambda_1>,void,int>
                ::Call;
    local_3a8 = &local_3d0;
    local_3c0.DataPtr = (void **)0x0;
    local_3c0.ArrayNum = 0;
    local_3d0 = this;
    local_3c8 = uVar19;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(this->VertexROI).ArrayNum,1,
               (TFunctionRef<void___cdecl(int)> *)&local_3b0,local_res8._0_1_,None,&local_3c0);
    uVar27 = SUB84(local_268._s_0.Z,0);
    uVar28 = (undefined4)((ulonglong)local_268._16_8_ >> 0x20);
    iVar16 = (this->VertexROI).ArrayNum;
    pTVar22 = (TFunctionRef<void___cdecl(int)> *)&local_390;
    local_390 = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::ApplyInflateBrush'::__l2::<lambda_2>,void,int>
                ::Call;
    local_388 = &local_210;
    pTVar18 = &local_3a0;
    local_3a0.DataPtr = (void **)0x0;
    local_3a0.ArrayNum = 0;
    local_210 = this;
    local_208 = uVar19;
    local_200 = (double)fVar3 * (double)fVar26 * dVar29 * dVar4;
LAB_14cc3f515:
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar16,1,pTVar22,local_res8._0_1_,None,pTVar18);
    if (((this->bEnableRemeshing != false) &&
        (pUVar8 = (this->RemeshProperties).field0_0x0.DebugPtr,
        pUVar8 != (UBrushRemeshProperties *)0x0)) && (pUVar8->bEnableRemeshing != false)) {
      this->bRemeshPending = true;
    }
    (this->LastBrushPosLocal).field0_0x0._s_0.X = local_268._s_0.X;
    (this->LastBrushPosLocal).field0_0x0._s_0.Y = local_268._s_0.Y;
    (this->LastBrushPosLocal).field0_0x0._s_0.Z = (double)CONCAT44(uVar28,uVar27);
LAB_14cc3f9c2:
    bVar14 = true;
    break;
  case ScaleKelvin:
    bVar14 = ApplyScaleKelvinBrush(this,param_1);
    break;
  case Pinch:
    bVar14 = ApplyPinchBrush(this,param_1);
    break;
  case TwistKelvin:
    bVar14 = ApplyTwistKelvinBrush(this,param_1);
    break;
  case Flatten:
    bVar14 = UpdateBrushPositionOnSculptMesh(this,param_1,true);
    if (!bVar14) {
      bVar14 = false;
      break;
    }
    local_468 = 0;
    UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
              (&this->CurTargetTransform,(TVector<double> *)&local_448._s_0,&this->LastBrushPosWorld
              );
    auVar10._8_8_ = 0;
    auVar10._0_8_ =
         (double)((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushSpeed *
         this->CurrentBrushRadius;
    auVar30 = sqrtpd(auVar30,auVar10);
    local_460 = auVar30._0_8_ * __real_3fa999999999999a * (double)this->ActivePressure;
    ComputeROIBrushPlane(this,local_d8,(TVector<double> *)&local_448._s_0,true,false);
    local_res20 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38
                              ))();
    iVar16 = (this->VertexROI).ArrayNum;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->ROIPositionBuffer,iVar16,No);
    local_2c0 = &local_res20;
    local_2b8 = local_d8;
    local_380.DataPtr = (void **)0x0;
    local_2b0 = &local_468;
    local_380.ArrayNum = 0;
    local_2a8 = &local_448;
    local_2a0 = &local_460;
    local_370 = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::ApplyFlattenBrush'::__l2::<lambda_1>,void,int>
                ::Call;
    local_368 = &local_2c8;
    local_2c8 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar16,1,(TFunctionRef<void___cdecl(int)> *)&local_370,
               local_res8._0_1_,None,&local_380);
    local_250._0_4_ = local_448._0_4_;
    local_250._4_4_ = local_448._4_4_;
    local_250._8_4_ = local_448._8_4_;
    local_250._12_4_ = local_448._12_4_;
    local_250._s_0.Z = local_448._s_0.Z;
    if (((this->bEnableRemeshing != false) &&
        (pUVar8 = (this->RemeshProperties).field0_0x0.DebugPtr,
        pUVar8 != (UBrushRemeshProperties *)0x0)) && (pUVar8->bEnableRemeshing != false)) {
      this->bRemeshPending = true;
    }
    goto LAB_14cc3f9b1;
  default:
    bVar14 = ApplyPlaneBrush(this,param_1);
    break;
  case FixedPlane:
    bVar14 = ApplyFixedPlaneBrush(this,param_1);
    break;
  case Resample:
    UpdateBrushPositionOnTargetMesh(this,param_1,true);
    UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
              (&this->CurTargetTransform,(TVector<double> *)&local_250._s_0,&this->LastBrushPosWorld
              );
    local_458 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))
                          ();
    iVar16 = (this->VertexROI).ArrayNum;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&this->ROIPositionBuffer,iVar16,No);
    local_358 = &local_458;
    local_350.DataPtr = (void **)0x0;
    local_340 = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::ApplyResampleBrush'::__l2::<lambda_1>,void,int>
                ::Call;
    local_338 = &local_360;
    local_350.ArrayNum = 0;
    local_360 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar16,1,(TFunctionRef<void___cdecl(int)> *)&local_340,
               local_res8._0_1_,None,&local_350);
    if (((this->bEnableRemeshing != false) &&
        (pUVar8 = (this->RemeshProperties).field0_0x0.DebugPtr,
        pUVar8 != (UBrushRemeshProperties *)0x0)) && (pUVar8->bEnableRemeshing != false)) {
      this->bRemeshPending = true;
    }
LAB_14cc3f9b1:
    *(undefined4 *)&(this->LastBrushPosLocal).field0_0x0 = local_250._0_4_;
    *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 4) = local_250._4_4_;
    *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 8) = local_250._8_4_;
    *(undefined4 *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 0xc) = local_250._12_4_;
    (this->LastBrushPosLocal).field0_0x0._s_0.Z = local_250._s_0.Z;
    goto LAB_14cc3f9c2;
  }
LAB_14cc3f9e7:
  if (local_310._0_8_ != 0) {
    do {
      cVar15 = (**(code **)(**(longlong **)(local_310._0_8_ + 0x60) + 0x20))
                         (*(longlong **)(local_310._0_8_ + 0x60),0xffffffff,0);
    } while (cVar15 == '\0');
  }
  if (local_300._0_8_ != 0) {
    do {
      cVar15 = (**(code **)(**(longlong **)(local_300._0_8_ + 0x60) + 0x20))
                         (*(longlong **)(local_300._0_8_ + 0x60),0xffffffff,0);
    } while (cVar15 == '\0');
  }
  local_330.Octree = &local_res8;
  local_108._0_8_ = 0;
  local_108._40_8_ = 0;
  local_330.__this = this;
  Async<_UDynamicMeshSculptTool::ApplyStamp_::__l2::<lambda_3>_>
            ((TFuture<void> *)local_320,DynamicSculptToolAsyncExecTarget,&local_330,&local_108);
  if (bVar14 != false) {
    SyncMeshWithPositionBuffer(this,local_450);
  }
  if (local_320._0_8_ != 0) {
    do {
      cVar15 = (**(code **)(**(longlong **)(local_320._0_8_ + 0x60) + 0x20))
                         (*(longlong **)(local_320._0_8_ + 0x60),0xffffffff,0);
    } while (cVar15 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_320._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_310._8_8_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_300._8_8_);
  if (bVar25) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ApplyTwistKelvinBrush @ 14cc40300

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

bool __thiscall
UDynamicMeshSculptTool::ApplyTwistKelvinBrush(UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  UKelvinBrushProperties *pUVar1;
  UBrushRemeshProperties *pUVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  float fVar6;
  uint uVar7;
  uint uVar9;
  undefined1 auVar8 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  TVector<double>_u_0 local_218;
  FKelvinletBrushOpProperties local_1f8;
  TMatrix<double> local_1a8;
  FKelvinletBrushOp local_128;
  
  UpdateBrushPositionOnTargetMesh(this,param_1,true);
  UE::Geometry::TQuaternion<double>::InverseMultiply
            (&(this->CurTargetTransform).Rotation,(TVector<double> *)&local_218._s_0,
             &this->LastBrushPosNormalWorld);
  dVar4 = __real_3ff0000000000000;
  dVar10 = local_218._s_0.X * (this->CurTargetTransform).Scale3D.field0_0x0._s_0.X;
  dVar11 = local_218._s_0.Y * (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Y;
  dVar12 = local_218._s_0.Z * (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Z;
  auVar5._0_8_ = dVar10 * dVar10;
  auVar5._8_8_ = 0;
  auVar8._0_8_ = dVar11 * dVar11 + auVar5._0_8_ + dVar12 * dVar12;
  auVar8._8_8_ = 0;
  auVar5 = sqrtpd(auVar5,auVar8);
  if (auVar5._0_8_ <= 0.0) {
    dVar10 = 0.0;
    dVar11 = 0.0;
    dVar3 = 0.0;
  }
  else {
    dVar3 = __real_3ff0000000000000 / auVar5._0_8_;
    dVar10 = dVar3 * dVar10;
    dVar11 = dVar3 * dVar11;
    dVar3 = dVar3 * dVar12;
  }
  UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
            (&this->CurTargetTransform,(TVector<double> *)&local_218._s_0,&this->LastBrushPosWorld);
  dVar12 = dVar4;
  if (this->bInvert != false) {
    dVar12 = __real_bff0000000000000;
  }
  auVar13._8_8_ = 0;
  auVar13._0_8_ = this->CurrentBrushRadius;
  auVar5 = sqrtpd(auVar13,auVar13);
  dVar12 = auVar5._0_8_ * dVar12 *
           (double)((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushSpeed *
           (double)this->ActivePressure;
  local_128.Mesh =
       (FDynamicMesh3 *)
       (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
  pUVar1 = (this->KelvinBrushProperties).field0_0x0.DebugPtr;
  local_128.NumSteps = 0.0;
  local_128.TimeStep = dVar4;
  fVar6 = pUVar1->Stiffness;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  local_1f8.NumSteps = pUVar1->BrushSteps;
  local_1f8.FallOff = (double)((this->BrushProperties).field0_0x0.DebugPtr)->BrushFalloffAmount;
  local_1f8.Mode = TwistKelvinlet;
  local_1f8.Direction.field0_0x0._s_0.Z = dVar3 * dVar12;
  local_1f8.Mu = (double)fVar6;
  local_1f8.Direction.field0_0x0._s_0.X = dVar10 * dVar12;
  fVar6 = __real_3f000000 - pUVar1->Incompressiblity;
  local_1f8.Direction.field0_0x0._s_0.Y = dVar11 * dVar12;
  if (__real_3f000000 <= fVar6) {
    fVar6 = __real_3f000000;
  }
  local_1f8.Speed = 0.0;
  local_1a8.M[0][0] = ___xmm_00000000000000003ff0000000000000;
  local_1a8.M[0][1] = _UNK_150689518;
  local_1a8.M[2][2] = ___xmm_00000000000000003ff0000000000000;
  local_1a8.M[2][3] = _UNK_150689518;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  local_1a8.M[3][3] = dVar4;
  local_1f8.Nu = (double)fVar6;
  local_1a8.M[1][0] = ___xmm_3ff00000000000000000000000000000;
  local_1a8.M[1][1] = _UNK_15061cbc8;
  local_1f8.Size = (double)pUVar1->FallOffDistance * this->CurrentBrushRadius;
  local_1a8.M[2][0] = 0.0;
  local_1a8.M[2][1] = 0.0;
  if (local_1f8.Size <= 0.0) {
    local_1f8.Size = 0.0;
  }
  uVar7 = (uint)__xmm_80000000000000008000000000000000;
  uVar9 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_1a8.M[3][2] =
       (double)CONCAT44((uint)((ulonglong)local_218._16_8_ >> 0x20) ^ uVar9,
                        SUB84(local_218._s_0.Z,0) ^ uVar7);
  local_1f8.Size = local_1f8.Size * ___real_3fd6666666666666;
  local_1a8.M[0][2] = 0.0;
  local_1a8.M[0][3] = 0.0;
  local_1a8.M[1][2] = 0.0;
  local_1a8.M[1][3] = 0.0;
  local_1a8.M[3][0] =
       (double)CONCAT44((uint)((ulonglong)local_218._0_8_ >> 0x20) ^ uVar9,
                        SUB84(local_218._s_0.X,0) ^ uVar7);
  local_1a8.M[3][1] =
       (double)CONCAT44((uint)((ulonglong)local_218._8_8_ >> 0x20) ^ uVar9,
                        SUB84(local_218._s_0.Y,0) ^ uVar7);
  FKelvinletBrushOp::ApplyBrush
            (&local_128,&local_1f8,&local_1a8,&this->VertexROI,&this->ROIPositionBuffer);
  if (((this->bEnableRemeshing != false) &&
      (pUVar2 = (this->RemeshProperties).field0_0x0.DebugPtr,
      pUVar2 != (UBrushRemeshProperties *)0x0)) && (pUVar2->bEnableRemeshing != false)) {
    this->bRemeshPending = true;
  }
  *(double *)&(this->LastBrushPosLocal).field0_0x0 = local_218._s_0.X;
  *(double *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 8) = local_218._s_0.Y;
  *(double *)((longlong)&(this->LastBrushPosLocal).field0_0x0 + 0x10) = local_218._s_0.Z;
  return true;
}

// BeginChange @ 14cc42be0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::BeginChange(UDynamicMeshSculptTool *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  UInteractiveToolManager *pUVar3;
  FText *pFVar4;
  FMeshVertexChangeBuilder *pFVar5;
  FDynamicMeshChangeTracker *this_00;
  FDynamicMesh3 *pFVar6;
  FDynamicMeshChangeTracker *this_01;
  FText local_18;
  
  if (this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveVertexChange == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
                       ,0x9eb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ActiveMeshChange != (FDynamicMeshChangeTracker *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActiveMeshChange == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
                       ,0x9ec,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pFVar4 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"UDynamicMeshSculptTool",L"MeshSculptChange",L"Brush Stroke");
  UE::TransactionUtil::FLongTransactionTracker::Open(&this->LongTransactions,pFVar4,pUVar3);
  if (param_1) {
    pFVar5 = ::operator_new(0x140);
    if (pFVar5 != (FMeshVertexChangeBuilder *)0x0) {
      pFVar5 = FMeshVertexChangeBuilder::FMeshVertexChangeBuilder(pFVar5);
      this->ActiveVertexChange = pFVar5;
      return;
    }
    this->ActiveVertexChange = (FMeshVertexChangeBuilder *)0x0;
    return;
  }
  this_00 = ::operator_new(0xa8);
  this_01 = (FDynamicMeshChangeTracker *)0x0;
  if (this_00 != (FDynamicMeshChangeTracker *)0x0) {
    pFVar6 = (FDynamicMesh3 *)
             (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
    this_01 = UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(this_00,pFVar6);
  }
  this->ActiveMeshChange = this_01;
  UE::Geometry::FDynamicMeshChangeTracker::BeginChange(this_01);
  return;
}

// BeginHoverSequenceHitTest @ 14cc42d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInputRayHit * __thiscall
UDynamicMeshSculptTool::BeginHoverSequenceHitTest
          (UDynamicMeshSculptTool *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  UMeshSurfacePointTool::BeginHoverSequenceHitTest
            ((UMeshSurfacePointTool *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CalculateBrushFalloff @ 14cc43b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __thiscall
UDynamicMeshSculptTool::CalculateBrushFalloff(UDynamicMeshSculptTool *this,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = __real_3ff0000000000000 -
          (double)((this->BrushProperties).field0_0x0.DebugPtr)->BrushFalloffAmount;
  if (0.0 <= dVar3) {
    if (__real_3ff0000000000000 <= dVar3) {
      dVar3 = __real_3ff0000000000000;
    }
  }
  else {
    dVar3 = 0.0;
  }
  dVar1 = param_1 / this->CurrentBrushRadius;
  dVar2 = __real_3ff0000000000000;
  if (dVar3 < dVar1) {
    dVar2 = (dVar1 - dVar3) / (__real_3ff0000000000000 - dVar3);
    dVar3 = 0.0;
    if ((0.0 <= dVar2) && (dVar3 = dVar2, __real_3ff0000000000000 <= dVar2)) {
      dVar3 = __real_3ff0000000000000;
    }
    dVar2 = __real_3ff0000000000000 - dVar3 * dVar3;
    dVar2 = dVar2 * dVar2 * dVar2;
  }
  return dVar2;
}

// CalculateBrushRadius @ 14cc43bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::CalculateBrushRadius(UDynamicMeshSculptTool *this)

{
  float fVar1;
  
  fVar1 = FBrushToolRadius::GetWorldRadius
                    (&((this->BrushProperties).field0_0x0.DebugPtr)->BrushSize);
  this->CurrentBrushRadius = (double)fVar1;
  return;
}

// CancelChange @ 14cc47db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::CancelChange(UDynamicMeshSculptTool *this)

{
  FDynamicMeshChangeTracker *this_00;
  UInteractiveToolManager *pUVar1;
  
  pUVar1 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
  UE::TransactionUtil::FLongTransactionTracker::Close(&this->LongTransactions,pUVar1);
  if (this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) {
    FMeshVertexChangeBuilder::_scalar_deleting_destructor_(this->ActiveVertexChange,1);
  }
  this_00 = this->ActiveMeshChange;
  this->ActiveVertexChange = (FMeshVertexChangeBuilder *)0x0;
  if (this_00 != (FDynamicMeshChangeTracker *)0x0) {
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(this_00);
    ::operator_delete(this_00,0xa8);
  }
  this->ActiveMeshChange = (FDynamicMeshChangeTracker *)0x0;
  return;
}

// ComputeROIBrushPlane @ 14cc4b5a0

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

TFrame3<double> * __thiscall
UDynamicMeshSculptTool::ComputeROIBrushPlane
          (UDynamicMeshSculptTool *this,TFrame3<double> *__return_storage_ptr__,
          TVector<double> *param_1,bool param_2,bool param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  TVector<double> *pTVar14;
  FDynamicMesh3 *this_00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar15;
  bool bVar16;
  TFrame3<double> *pTVar17;
  TVector<double> *pTVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 in_XMM3 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 local_res8 [8];
  TFrame3<double> *local_res10;
  TVector<double> *local_res18;
  char local_res20;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1e0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1c8;
  int iStack_1c0;
  uint uStack_1bc;
  undefined1 *local_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  int local_198;
  FDynamicMesh3 *local_190;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_188;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_180;
  undefined8 uStack_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  TVector<double> local_100 [8];
  
  local_res10 = __return_storage_ptr__;
  local_res18 = param_1;
  local_res20 = param_2;
  local_190 = (FDynamicMesh3 *)
              (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))()
  ;
  puVar1 = &(this->TriangleROI).Elements.field_0x10;
  iStack_1c0 = 0;
  local_1c8 = &this->TriangleROI;
  iVar3 = *(int *)&(this->TriangleROI).Elements.field_0x28;
  local_1a8 = 0;
  dVar10 = 0.0;
  local_1f8._s_0.Z = 0.0;
  dVar27 = 0.0;
  dVar11 = 0.0;
  dVar29 = 0.0;
  dVar12 = 0.0;
  uStack_1bc = 1;
  local_1f8._s_0.X = 0.0;
  local_1f8._s_0.Y = 0.0;
  iStack_1ac = 0;
  if (iVar3 != 0) {
    puVar24 = *(uint **)&(this->TriangleROI).Elements.field_0x20;
    if (puVar24 == (uint *)0x0) {
      puVar24 = (uint *)puVar1;
    }
    uVar22 = *puVar24;
    while (uVar22 == 0) {
      lVar19 = (longlong)iStack_1c0;
      local_1a8 = local_1a8 + 0x20;
      iStack_1c0 = iStack_1c0 + 1;
      iStack_1ac = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1c0) goto LAB_14cc4b6ce;
      uVar22 = puVar24[lVar19 + 1];
    }
    uStack_1bc = -uVar22 & uVar22;
    uVar2 = (ulonglong)uStack_1bc * 2 + 1;
    lVar19 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_198 = (int)lVar19;
    iStack_1ac = local_198 + -1 + local_1a8;
    if (iVar3 < iStack_1ac) {
      iStack_1ac = iVar3;
    }
  }
LAB_14cc4b6ce:
  uVar22 = *(uint *)&(this->TriangleROI).Elements.field_0x28;
  iStack_1a0 = *(int *)&(this->TriangleROI).Elements.field_0x8 -
               *(int *)&(this->TriangleROI).Elements.field_0x34;
  uVar21 = uVar22 & 0xffffffe0;
  TStack_180._padding_ = CONCAT44(uStack_1bc,iStack_1c0);
  uStack_1b0 = 0xffffffff;
  TStack_180.CurrentBitIndex = iStack_1ac;
  TStack_180.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar22 >> 5;
  TStack_180._28_4_ = iStack_1ac;
  TStack_180.BaseBitIndex = local_1a8;
  uStack_160 = CONCAT44(uStack_19c,iStack_1a0);
  local_1b8 = puVar1;
  iStack_1a4 = iStack_1ac;
  local_188 = local_1c8;
  TStack_180.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar22 < 0) || (iVar3 < (int)uVar22)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar5 = (code *)swi(3);
    pTVar17 = (TFrame3<double> *)(*pcVar5)();
    return pTVar17;
  }
  this_00 = local_190;
  pTVar14 = local_res18;
  dVar13 = __real_3ff0000000000000;
  uVar4 = *(uint *)&(this->TriangleROI).Elements.field_0x28;
  if (uVar22 != uVar4) {
    puVar23 = *(undefined1 **)&(this->TriangleROI).Elements.field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = puVar1;
    }
    uVar22 = -1 << ((byte)uVar22 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar20 * 4);
    while (uVar22 == 0) {
      lVar19 = (longlong)iVar20;
      uVar21 = uVar21 + 0x20;
      iVar20 = iVar20 + 1;
      uVar22 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14cc4b7e9;
      uVar22 = *(uint *)(puVar23 + lVar19 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar22 & uVar22) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar22 = (int)lVar19 + -1 + uVar21;
    if ((int)uVar4 < (int)uVar22) {
      uVar22 = uVar4;
    }
  }
LAB_14cc4b7e9:
  uVar9 = local_1f8._s_0.X;
  uVar8 = local_1f8._s_0.Y;
  while( true ) {
    pTVar15 = local_188;
    if (*(int *)&(local_188->Elements).field_0x8 - *(int *)&(local_188->Elements).field_0x34 !=
        (int)uStack_160) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    pTVar17 = local_res10;
    if (((TStack_180.CurrentBitIndex == uVar22) &&
        (TStack_180.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar15 == &this->TriangleROI)) break;
    iVar3 = *(int *)(*(longlong *)&pTVar15->Elements + (longlong)TStack_180.CurrentBitIndex * 0xc);
    UE::Geometry::FDynamicMesh3::GetTriCentroid(this_00,(TVector<double> *)&local_1e0._s_0,iVar3);
    dVar7 = local_1e0._s_0.X - (pTVar14->field0_0x0)._s_0.X;
    dVar25 = local_1e0._s_0.Y - (pTVar14->field0_0x0)._s_0.Y;
    dVar26 = local_1e0._s_0.Z - (pTVar14->field0_0x0)._s_0.Z;
    dVar6 = dVar13 - (double)((this->BrushProperties).field0_0x0.DebugPtr)->BrushFalloffAmount;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = dVar7 * dVar7 + dVar25 * dVar25 + dVar26 * dVar26;
    auVar28 = sqrtpd(in_XMM3,auVar28);
    if (0.0 <= dVar6) {
      if (dVar13 <= dVar6) {
        dVar6 = dVar13;
      }
    }
    else {
      dVar6 = 0.0;
    }
    in_XMM3._8_8_ = auVar28._8_8_;
    in_XMM3._0_8_ = auVar28._0_8_ / this->CurrentBrushRadius;
    dVar26 = dVar13;
    if (dVar6 < in_XMM3._0_8_) {
      dVar26 = (in_XMM3._0_8_ - dVar6) / (dVar13 - dVar6);
      if (0.0 <= dVar26) {
        if (dVar13 <= dVar26) {
          dVar26 = dVar13;
        }
      }
      else {
        in_XMM3._8_8_ = 0;
        dVar26 = 0.0;
      }
      in_XMM3._0_8_ = dVar26 * dVar26;
      dVar26 = dVar13 - in_XMM3._0_8_;
      dVar26 = dVar26 * dVar26 * dVar26;
    }
    pTVar18 = UE::Geometry::FDynamicMesh3::GetTriNormal(this_00,local_100,iVar3);
    dVar12 = dVar12 + dVar26;
    uVar9 = (double)uVar9 + dVar26 * (pTVar18->field0_0x0)._s_0.X;
    uVar8 = (double)uVar8 + dVar26 * (pTVar18->field0_0x0)._s_0.Y;
    TStack_180.UnvisitedBitMask = TStack_180.UnvisitedBitMask & ~TStack_180._padding_._4_4_;
    dVar10 = dVar10 + dVar26 * (pTVar18->field0_0x0)._s_0.Z;
    dVar27 = dVar27 + local_1e0._s_0.X * dVar26;
    dVar11 = dVar11 + local_1e0._s_0.Y * dVar26;
    dVar29 = dVar29 + local_1e0._s_0.Z * dVar26;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_180);
  }
  dVar26 = SQRT((double)uVar8 * (double)uVar8 + (double)uVar9 * (double)uVar9 + dVar10 * dVar10);
  if (dVar26 <= 0.0) {
    local_1f8._s_0.X = 0.0;
    local_1f8._s_0.Y = 0.0;
    local_1f8._s_0.Z = 0.0;
  }
  else {
    dVar26 = dVar13 / dVar26;
    local_1f8._s_0.X = (double)uVar9 * dVar26;
    local_1f8._s_0.Y = (double)uVar8 * dVar26;
    local_1f8._s_0.Z = dVar10 * dVar26;
  }
  dVar12 = dVar13 / dVar12;
  if (param_3) {
    local_138._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_138._s_0.Y = _UNK_150689518;
    local_138._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&(this->CameraState).Orientation,(TVector<double> *)&local_158._s_0,
               (TVector<double> *)&local_138._s_0);
    local_1f8._4_4_ = local_158._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    local_1f8._0_4_ = local_158._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    local_1f8._12_4_ = local_158._12_4_ ^ _UNK_15066df7c;
    local_1f8._8_4_ = local_158._8_4_ ^ _UNK_15066df78;
    local_1f8._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)local_158._16_8_ >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_158._s_0.Z,0) ^ (uint)__xmm_80000000000000008000000000000000);
  }
  (pTVar17->Rotation).field0_0x0._s_0.Z = 0.0;
  (pTVar17->Rotation).field0_0x0._s_0.Y = 0.0;
  (pTVar17->Rotation).field0_0x0._s_0.X = 0.0;
  (pTVar17->Rotation).field0_0x0._s_0.W = 1.0;
  (pTVar17->Origin).field0_0x0._s_0.X = dVar12 * dVar27;
  (pTVar17->Origin).field0_0x0._s_0.Y = dVar12 * dVar11;
  (pTVar17->Origin).field0_0x0._s_0.Z = dVar12 * dVar29;
  local_118._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_118._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_118._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  UE::Geometry::TQuaternion<double>::SetFromTo
            (&pTVar17->Rotation,(TVector<double> *)&local_118._s_0,
             (TVector<double> *)&local_1f8._s_0);
  if (local_res20 == '\0') {
    dVar12 = (pTVar17->Rotation).field0_0x0._s_0.Y;
    dVar10 = (pTVar17->Rotation).field0_0x0._s_0.X;
    dVar27 = (pTVar17->Rotation).field0_0x0._s_0.Z;
    dVar11 = (pTVar17->Rotation).field0_0x0._s_0.W;
    dVar27 = dVar27 + dVar27;
    dVar29 = (double)((this->BrushProperties).field0_0x0.DebugPtr)->Depth * this->CurrentBrushRadius
    ;
    (pTVar17->Origin).field0_0x0._s_0.X =
         (pTVar17->Origin).field0_0x0._s_0.X -
         (dVar11 * (dVar12 + dVar12) + dVar27 * dVar10) * dVar29;
    (pTVar17->Origin).field0_0x0._s_0.Y =
         (pTVar17->Origin).field0_0x0._s_0.Y -
         (dVar27 * dVar12 - dVar11 * (dVar10 + dVar10)) * dVar29;
    (pTVar17->Origin).field0_0x0._s_0.Z =
         (pTVar17->Origin).field0_0x0._s_0.Z -
         (dVar13 - ((dVar12 + dVar12) * dVar12 + (dVar10 + dVar10) * dVar10)) * dVar29;
  }
  return pTVar17;
}

// ConfigureRemesher @ 14cc4d1e0

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
UDynamicMeshSculptTool::ConfigureRemesher(UDynamicMeshSculptTool *this,FSubRegionRemesher *param_1)

{
  int iVar1;
  UBrushRemeshProperties *pUVar2;
  UDynamicMeshBrushSculptProperties *pUVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  double dVar12;
  FDynamicMesh3 *pFVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined1 *this_00;
  bool bVar16;
  double dVar17;
  double dVar18;
  longlong *plVar19;
  double dVar20;
  undefined1 auStackY_2b8 [32];
  FMeshConstraints local_268;
  char local_1b0;
  undefined1 local_1a8 [32];
  void *local_188;
  undefined4 local_180;
  uint local_17c;
  undefined4 local_178;
  undefined4 local_174;
  void *local_168;
  undefined4 local_160;
  ForAnyElementType local_158;
  undefined8 local_150;
  TBitArray<FDefaultBitArrayAllocator> local_148;
  undefined4 local_128;
  undefined4 local_124;
  void *local_118;
  undefined4 local_110;
  int local_108;
  ForAnyElementType local_100;
  undefined8 local_f8;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  code *local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong *plStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  pFVar13 = (FDynamicMesh3 *)
            (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
  dVar12 = __real_3ff0000000000000;
  iVar1 = ((this->RemeshProperties).field0_0x0.DebugPtr)->TriangleSize;
  dVar17 = (double)iVar1;
  dVar17 = dVar17 * dVar17;
  if (iVar1 < 0) {
    dVar17 = __real_3ff0000000000000 -
             (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) *
             ___real_3fa47ae147ae147c;
    if (0.0 <= dVar17) {
      if (__real_3ff0000000000000 <= dVar17) {
        dVar17 = __real_3ff0000000000000;
      }
    }
    else {
      dVar17 = 0.0;
    }
    dVar17 = (__real_3ff0000000000000 - dVar17) * __real_3fd0000000000000 + dVar17;
  }
  else {
    dVar17 = dVar17 * ___real_3fa47ae147ae147c;
    if (0.0 <= dVar17) {
      if (__real_3ff0000000000000 <= dVar17) {
        dVar17 = __real_3ff0000000000000;
      }
    }
    else {
      dVar17 = 0.0;
    }
    dVar17 = (__real_3ff0000000000000 - dVar17) + dVar17 * __real_4014000000000000;
  }
  dVar17 = dVar17 * this->InitialEdgeLength;
  UE::Geometry::FRemesher::SetTargetEdgeLength((FRemesher *)param_1,dVar17);
  pUVar2 = (this->RemeshProperties).field0_0x0.DebugPtr;
  dVar20 = (double)pUVar2->PreserveDetail * __real_3fc999999999999a;
  if (0.0 <= dVar20) {
    dVar18 = dVar20;
    if (dVar12 <= dVar20) {
      dVar18 = dVar12;
    }
  }
  else {
    dVar18 = 0.0;
  }
  dVar18 = ((dVar12 - dVar18) + dVar18 * __real_3fd0000000000000) *
           (double)*(float *)&pUVar2->_padding_ * __real_3fd0000000000000;
  *(double *)&param_1->field_0x168 = dVar18;
  pUVar3 = (this->SculptProperties).field0_0x0.DebugPtr;
  if (pUVar3->PrimaryBrushType == Pinch) {
    if (this->bSmoothing == false) {
      *(double *)&param_1->field_0x158 = dVar17 * __real_3fb999999999999a;
      local_e8 = *(longlong *)&param_1->field_0x1b0;
      uVar8 = *(undefined8 *)&param_1->field_0x1b8;
      local_d8 = *(longlong *)&param_1->field_0x1c0;
      uStack_d0 = *(undefined8 *)&param_1->field_0x1c8;
      local_c8 = *(undefined8 *)&param_1->field_0x1d0;
      plVar19 = *(longlong **)&param_1->field_0x1d8;
      *(code **)&param_1->field_0x1b0 =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UDynamicMeshSculptTool::ConfigureRemesher'::__l5::<lambda_1>,double,UE::Geometry::FDynamicMesh3_const_&,int>
           ::Call;
      *(undefined4 *)&param_1->field_0x1b8 = (undefined4)uStack_e0;
      *(undefined4 *)&param_1->field_0x1bc = uStack_e0._4_4_;
      *(undefined4 *)&param_1->field_0x1c0 = 0x52952c40;
      *(undefined4 *)&param_1->field_0x1c4 = 1;
      *(UDynamicMeshSculptTool **)&param_1->field_0x1c8 = this;
      *(double *)&param_1->field_0x1d0 = dVar18;
      *(undefined4 *)&param_1->field_0x1d8 = 0;
      *(undefined4 *)&param_1->field_0x1dc = 0;
      plStack_c0 = plVar19;
      uStack_e0 = uVar8;
      if (local_e8 != 0) {
        plVar15 = &local_d8;
LAB_14cc4d568:
        if (plVar19 != (longlong *)0x0) {
          plVar15 = plVar19;
        }
        (**(code **)(*plVar15 + 0x10))();
      }
    }
    else {
LAB_14cc4d427:
      if (pUVar3->bDetailPreservingSmooth == false) goto LAB_14cc4d465;
      *(double *)&param_1->field_0x160 = this->InitialEdgeLength * __real_4008000000000000;
      *(double *)&param_1->field_0x158 = this->InitialEdgeLength * __real_3fa999999999999a;
    }
  }
  else {
    if (this->bSmoothing != false) goto LAB_14cc4d427;
LAB_14cc4d465:
    if (0 < ((this->RemeshProperties).field0_0x0.DebugPtr)->PreserveDetail) {
      dVar17 = 0.0;
      if ((0.0 <= dVar20) && (dVar17 = dVar20, dVar12 <= dVar20)) {
        dVar17 = dVar12;
      }
      local_b8 = (code *)0x0;
      *(double *)&param_1->field_0x158 =
           ((dVar12 - dVar17) + dVar17 * __real_3fb999999999999a) * *(double *)&param_1->field_0x158
      ;
      puVar14 = FMemory::Malloc(0x20,8);
      *puVar14 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UDynamicMeshSculptTool::ConfigureRemesher'::`14'::<lambda_2>,0,1>
                  ::_vftable_;
      puVar14[1] = this;
      puVar14[2] = dVar18;
      puVar14[3] = dVar20;
      lVar9 = *(longlong *)&param_1->field_0x1b0;
      uVar10 = *(undefined8 *)&param_1->field_0x1b8;
      uVar4 = *(undefined4 *)&param_1->field_0x1c0;
      uVar5 = *(undefined4 *)&param_1->field_0x1c4;
      uVar6 = *(undefined4 *)&param_1->field_0x1c8;
      uVar7 = *(undefined4 *)&param_1->field_0x1cc;
      uVar8 = *(undefined8 *)&param_1->field_0x1d0;
      plVar19 = *(longlong **)&param_1->field_0x1d8;
      if (puVar14 + 1 != (undefined8 *)0x0) {
        local_b8 = UE::Core::Private::Function::
                   TFunctionRefCaller<`UDynamicMeshSculptTool::ConfigureRemesher'::__l14::<lambda_2>,double,UE::Geometry::FDynamicMesh3_const_&,int>
                   ::Call;
      }
      *(code **)&param_1->field_0x1b0 = local_b8;
      *(undefined8 *)&param_1->field_0x1b8 = uStack_b0;
      *(undefined4 *)&param_1->field_0x1c0 = local_a8;
      *(undefined4 *)&param_1->field_0x1c4 = uStack_a4;
      *(undefined4 *)&param_1->field_0x1c8 = uStack_a0;
      *(undefined4 *)&param_1->field_0x1cc = uStack_9c;
      *(undefined8 *)&param_1->field_0x1d0 = local_98;
      *(undefined8 **)&param_1->field_0x1d8 = puVar14;
      local_b8 = (code *)lVar9;
      uStack_b0 = uVar10;
      local_a8 = uVar4;
      uStack_a4 = uVar5;
      uStack_a0 = uVar6;
      uStack_9c = uVar7;
      local_98 = uVar8;
      plStack_90 = plVar19;
      if (lVar9 != 0) {
        plVar15 = (longlong *)&local_a8;
        goto LAB_14cc4d568;
      }
    }
  }
  bVar16 = ((this->SculptProperties).field0_0x0.DebugPtr)->bPreserveUVFlow;
  *(uint *)&param_1->field_0x170 = -(uint)(bVar16 != false) & 2;
  *(uint *)&param_1->field_0x148 = (uint)(bVar16 != false);
  param_1->field_0x141 =
       *(undefined1 *)((longlong)&((this->RemeshProperties).field0_0x0.DebugPtr)->_padding_ + 6);
  param_1->field_0x140 =
       *(undefined1 *)((longlong)&((this->RemeshProperties).field0_0x0.DebugPtr)->_padding_ + 4);
  param_1->field_0x142 =
       *(undefined1 *)((longlong)&((this->RemeshProperties).field0_0x0.DebugPtr)->_padding_ + 5);
  param_1->field_0x144 =
       *(undefined1 *)((longlong)&((this->RemeshProperties).field0_0x0.DebugPtr)->_padding_ + 4);
  local_1a8._0_8_ = (FScriptContainerElement *)0x0;
  local_1a8._8_8_ = 0;
  local_188 = (void *)0x0;
  local_180 = 0;
  local_17c = 0x80;
  local_178 = 0xffffffff;
  local_174 = 0;
  local_168 = (void *)0x0;
  local_160 = 0;
  local_158.Data = (FScriptContainerElement *)0x0;
  local_150 = 0;
  local_148.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_148.NumBits = 0;
  local_148.MaxBits = 0x80;
  local_128 = 0xffffffff;
  local_124 = 0;
  local_118 = (void *)0x0;
  local_110 = 0;
  local_100.Data = (FScriptContainerElement *)0x0;
  local_f8._0_4_ = 0;
  local_f8._4_4_ = 0;
  local_108 = 0;
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1988,"DynamicMeshSculptTool_RemeshROI_Configure_Constraints"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
               ,0x7c4);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1988);
  }
  pUVar2 = (this->RemeshProperties).field0_0x0.DebugPtr;
  UE::Geometry::FMeshConstraintsUtil::ConstrainAllBoundariesAndSeams
            ((FMeshConstraints *)local_1a8,pFVar13,(uint)*(byte *)((longlong)&pUVar2->_padding_ + 1)
             ,(uint)*(byte *)((longlong)&pUVar2->_padding_ + 2),
             (uint)*(byte *)((longlong)&pUVar2->_padding_ + 3),true,(char)pUVar2->_padding_ == '\0',
             false,true);
  UE::Geometry::FMeshConstraints::FMeshConstraints(&local_268,(FMeshConstraints *)local_1a8);
  local_1b0 = '\x01';
  this_00 = &param_1->field_0x10;
  if (&local_268 != (FMeshConstraints *)this_00) {
    if (param_1->field_0xc8 != '\0') {
      UE::Geometry::FMeshConstraints::~FMeshConstraints((FMeshConstraints *)this_00);
    }
    UE::Geometry::FMeshConstraints::FMeshConstraints((FMeshConstraints *)this_00,&local_268);
    param_1->field_0xc8 = 1;
    if (local_1b0 == '\0') goto LAB_14cc4d75b;
  }
  UE::Geometry::FMeshConstraints::~FMeshConstraints(&local_268);
LAB_14cc4d75b:
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  DestructItems<TSharedPtr<UE::Geometry::FMeshConstraintCurve,1>,int>
            ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_100.Data,(int)local_f8);
  if ((TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)local_100.Data !=
      (TSharedPtr<UE::Geometry::FMeshConstraintCurve,1> *)0x0) {
    FMemory::Free(local_100.Data);
  }
  local_110 = 0;
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  uVar11 = local_150 >> 0x20;
  local_150 = local_150 & 0xffffffff00000000;
  if ((int)uVar11 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,&local_158,0,(int *)((longlong)&local_150 + 4));
  }
  local_128 = 0xffffffff;
  local_124 = 0;
  local_148.NumBits = 0;
  if (0x80 < (uint)local_148.MaxBits) {
    local_148.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_148,0);
  }
  if (local_148.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
  }
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
  local_160 = 0;
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  iVar1 = SUB84(local_1a8._8_8_,4);
  local_1a8._8_8_ = local_1a8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_1a8,0,(int *)(local_1a8 + 0xc));
  }
  local_178 = 0xffffffff;
  local_174 = 0;
  local_180 = 0;
  if (0x80 < local_17c) {
    local_17c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10),0);
  }
  if (local_188 != (void *)0x0) {
    FMemory::Free(local_188);
  }
  if ((FScriptContainerElement *)local_1a8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_1a8._0_8_);
  }
  return;
}

// DecreaseBrushRadiusAction @ 14cc52310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::DecreaseBrushRadiusAction(UDynamicMeshSculptTool *this)

{
  float fVar1;
  
  FBrushToolRadius::DecreaseRadius(&((this->BrushProperties).field0_0x0.DebugPtr)->BrushSize,false);
  (**(code **)(this->_padding_ + 0x340))(this,(this->BrushProperties).field0_0x0.DebugPtr);
  fVar1 = FBrushToolRadius::GetWorldRadius
                    (&((this->BrushProperties).field0_0x0.DebugPtr)->BrushSize);
  this->CurrentBrushRadius = (double)fVar1;
  return;
}

// DecreaseBrushRadiusSmallStepAction @ 14cc52370

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
UDynamicMeshSculptTool::DecreaseBrushRadiusSmallStepAction(UDynamicMeshSculptTool *this)

{
  float fVar1;
  
  FBrushToolRadius::DecreaseRadius(&((this->BrushProperties).field0_0x0.DebugPtr)->BrushSize,true);
  (**(code **)(this->_padding_ + 0x340))(this,(this->BrushProperties).field0_0x0.DebugPtr);
  fVar1 = FBrushToolRadius::GetWorldRadius
                    (&((this->BrushProperties).field0_0x0.DebugPtr)->BrushSize);
  this->CurrentBrushRadius = (double)fVar1;
  return;
}

// DecreaseBrushSpeedAction @ 14cc523d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::DecreaseBrushSpeedAction(UDynamicMeshSculptTool *this)

{
  UDynamicMeshBrushSculptProperties *pUVar1;
  float fVar2;
  
  pUVar1 = (this->SculptProperties).field0_0x0.DebugPtr;
  fVar2 = pUVar1->PrimaryBrushSpeed - __real_3d4ccccd;
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  pUVar1->PrimaryBrushSpeed = fVar2;
                    /* WARNING: Could not recover jumptable at 0x00014cc52408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x340))(0,(this->SculptProperties).field0_0x0.DebugPtr);
  return;
}

// DiscardAttributes @ 14cc530b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::DiscardAttributes(UDynamicMeshSculptTool *this)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDynamicMesh3 *this_00;
  code *pcVar3;
  bool bVar4;
  FDynamicMesh3 *pFVar5;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar6;
  FMeshReplacementChange *this_01;
  FDynamicMeshAttributeSet *pFVar7;
  longlong lVar8;
  FText *pFVar9;
  longlong *plVar10;
  FDynamicMeshAttributeSet *pFVar11;
  FDynamicMeshAttributeSet *pFVar12;
  undefined1 *puVar13;
  FDynamicMeshAttributeSet *local_res8;
  TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> local_78;
  TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> local_68;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_58;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_48;
  FText local_38;
  FText local_28;
  
  pFVar5 = (FDynamicMesh3 *)
           (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
  pTVar6 = MakeShared<UE::Geometry::FDynamicMesh3,1,UE::Geometry::FDynamicMesh3_&>(&local_58,pFVar5)
  ;
  pTVar1 = (pTVar6->SharedReferenceCount).ReferenceController;
  pFVar5 = pTVar6->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  if ((pFVar5 == (FDynamicMesh3 *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar6 = MakeShared<UE::Geometry::FDynamicMesh3,1,UE::Geometry::FDynamicMesh3_&>(&local_48,pFVar5)
  ;
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  this_00 = pTVar6->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  if ((this_00 == (FDynamicMesh3 *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::Geometry::FDynamicMesh3::DiscardAttributes(this_00);
  if ((this_00 == (FDynamicMesh3 *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::Geometry::FDynamicMesh3::EnableAttributes(this_00);
  if ((this_00 == (FDynamicMesh3 *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar12 = (this_00->AttributeSet).Ptr;
  pFVar7 = (FDynamicMeshAttributeSet *)0x0;
  pFVar11 = pFVar7;
  if (pFVar12 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar11 = pFVar12;
  }
  pFVar12 = pFVar7;
  if (0 < (pFVar11->NormalLayers).Array.ArrayNum) {
    pFVar12 = *(FDynamicMeshAttributeSet **)(pFVar11->NormalLayers).Array.AllocatorInstance.Data;
  }
  UE::Geometry::FMeshNormals::InitializeOverlayToPerVertexNormals
            ((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)pFVar12,false);
  this_01 = ::operator_new(0x60);
  if (this_01 != (FMeshReplacementChange *)0x0) {
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78.Object = this_00;
    local_78.SharedReferenceCount.ReferenceController = pTVar2;
    local_68.Object = pFVar5;
    local_68.SharedReferenceCount.ReferenceController = pTVar1;
    pFVar7 = (FDynamicMeshAttributeSet *)
             FMeshReplacementChange::FMeshReplacementChange(this_01,&local_68,&local_78);
  }
  puVar13 = &((this->DynamicMeshComponent).field0_0x0.DebugPtr)->field_0x5a8;
  (**(code **)(*(longlong *)puVar13 + 0x10))(puVar13,pFVar7,0);
  lVar8 = (**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar3 = *(code **)(*(longlong *)(lVar8 + 0x28) + 0x20);
  pFVar9 = FText::AsLocalizable_Advanced_LocText
                     (&local_38,L"UDynamicMeshSculptTool",L"SculptDiscardAttribsChange",
                      L"Discard Attributes");
  local_res8 = pFVar7;
  (*pcVar3)(lVar8 + 0x28,(this->DynamicMeshComponent).field0_0x0.DebugPtr,&local_res8,pFVar9);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  plVar10 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar3 = *(code **)(*plVar10 + 0x360);
  pFVar9 = FText::FText(&local_28);
  (*pcVar3)(plVar10,pFVar9,3);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// DrawHUD @ 14cc53db0

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
UDynamicMeshSculptTool::DrawHUD
          (UDynamicMeshSculptTool *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
  bool bVar1;
  UTwoAxisPropertyEditInputBehavior *this_00;
  
  UInteractiveTool::DrawHUD((UInteractiveTool *)this,param_1,param_2);
  bVar1 = FWeakObjectPtr::IsValid(&(this->BrushEditBehavior).WeakPtr);
  if (bVar1) {
    this_00 = (UTwoAxisPropertyEditInputBehavior *)
              FWeakObjectPtr::Get(&(this->BrushEditBehavior).WeakPtr);
    UTwoAxisPropertyEditInputBehavior::DrawHUD(this_00,param_1,param_2);
  }
  return;
}

// EndChange @ 14cc54b90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::EndChange(UDynamicMeshSculptTool *this)

{
  code *pcVar1;
  FDynamicMeshChange *this_00;
  FDynamicMeshChangeTracker *this_01;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  *pTVar2;
  FMeshVertexChange *pFVar3;
  longlong lVar4;
  FText *pFVar5;
  FMeshChange *this_02;
  FMeshVertexChange *pFVar6;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar7;
  UInteractiveToolManager *pUVar8;
  FMeshVertexChange *local_res8;
  FText local_28;
  
  pFVar6 = (FMeshVertexChange *)0x0;
  if (this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) {
    lVar4 = (**(code **)(this->_padding_ + 0x2d8))();
    pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x28) + 0x20);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"UDynamicMeshSculptTool",L"MeshSculptChange",L"Brush Stroke");
    local_res8 = (this->ActiveVertexChange->Change).Ptr;
    (this->ActiveVertexChange->Change).Ptr = (FMeshVertexChange *)0x0;
    (*pcVar1)(lVar4 + 0x28,(this->DynamicMeshComponent).field0_0x0.DebugPtr,&local_res8,pFVar5);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    if (this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) {
      FMeshVertexChangeBuilder::_scalar_deleting_destructor_(this->ActiveVertexChange,1);
    }
    this->ActiveVertexChange = (FMeshVertexChangeBuilder *)0x0;
  }
  if (this->ActiveMeshChange != (FDynamicMeshChangeTracker *)0x0) {
    this_02 = ::operator_new(0x40);
    if (this_02 != (FMeshChange *)0x0) {
      pFVar6 = (FMeshVertexChange *)FMeshChange::FMeshChange(this_02);
    }
    TVar7 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(this->ActiveMeshChange);
    pTVar2 = (TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
              *)&pFVar6->bHaveVertexPositions;
    if ((FDynamicMeshChange *)pTVar2 != TVar7.Ptr) {
      this_00 = pTVar2->Ptr;
      pTVar2->Ptr = (FDynamicMeshChange *)((TVar7.Ptr)->OldVertices).AllocatorInstance.Data;
      ((TVar7.Ptr)->OldVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (this_00 != (FDynamicMeshChange *)0x0) {
        UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(this_00);
        ::operator_delete(this_00,0x48);
      }
    }
    pFVar3 = local_res8;
    if (local_res8 != (FMeshVertexChange *)0x0) {
      UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange((FDynamicMeshChange *)local_res8);
      ::operator_delete(pFVar3,0x48);
    }
    lVar4 = (**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x28) + 0x20);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"UDynamicMeshSculptTool",L"MeshSculptChange",L"Brush Stroke");
    local_res8 = pFVar6;
    (*pcVar1)(lVar4 + 0x28,(this->DynamicMeshComponent).field0_0x0.DebugPtr,&local_res8,pFVar5);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    this_01 = this->ActiveMeshChange;
    if (this_01 != (FDynamicMeshChangeTracker *)0x0) {
      UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(this_01);
      ::operator_delete(this_01,0xa8);
    }
    this->ActiveMeshChange = (FDynamicMeshChangeTracker *)0x0;
  }
  pUVar8 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  UE::TransactionUtil::FLongTransactionTracker::Close(&this->LongTransactions,pUVar8);
  return;
}

// EstimateIntialSafeTargetLength @ 14cc55020

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

double __thiscall
UDynamicMeshSculptTool::EstimateIntialSafeTargetLength
          (UDynamicMeshSculptTool *this,FDynamicMesh3 *param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  
  dVar4 = 0.0;
  uVar7 = (param_1->TriangleRefCounts).RefCounts.CurBlockUsed +
          (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200;
  uVar6 = 0;
  if ((uVar7 != 0) &&
     (pFVar2 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar6 = 0,
     0xfffd < (ushort)(**(short **)pFVar2 - 1U))) {
    uVar5 = 1;
    uVar6 = 1;
    if (1 < (int)uVar7) {
      do {
        lVar3 = *(longlong *)(pFVar2 + (ulonglong)(uVar5 >> 9) * 8);
        if ((*(short *)(lVar3 + (ulonglong)(uVar5 & 0x1ff) * 2) != 0) &&
           (uVar6 = uVar5, *(short *)(lVar3 + (ulonglong)(uVar5 & 0x1ff) * 2) != -1)) break;
        uVar5 = uVar5 + 1;
        uVar6 = uVar5;
      } while ((int)uVar5 < (int)uVar7);
    }
  }
joined_r0x00014cc550b8:
  do {
    if (uVar6 == uVar7) {
      iVar1 = (param_1->TriangleRefCounts).UsedCount;
      if (iVar1 < param_2) {
        iVar1 = param_2;
      }
      return (double)((longlong)
                      ROUND(SQRT((dVar4 / (double)iVar1) * ___real_400279a74590331d) *
                            __real_4069000000000000 + __real_3fe0000000000000) >> 1) *
             __real_3f847ae147ae147b;
    }
    while( true ) {
      dVar8 = UE::Geometry::FDynamicMesh3::GetTriArea(param_1,uVar6);
      uVar6 = uVar6 + 1;
      dVar4 = dVar4 + dVar8;
      if ((int)uVar7 <= (int)uVar6) break;
      pFVar2 = (param_1->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data;
      while( true ) {
        if ((*(short *)(*(longlong *)(pFVar2 + (ulonglong)(uVar6 >> 9) * 8) +
                       (ulonglong)(uVar6 & 0x1ff) * 2) != 0) &&
           (*(short *)(*(longlong *)(pFVar2 + (ulonglong)(uVar6 >> 9) * 8) +
                      (ulonglong)(uVar6 & 0x1ff) * 2) != -1)) break;
        uVar6 = uVar6 + 1;
        if ((int)uVar7 <= (int)uVar6) goto joined_r0x00014cc550b8;
      }
    }
  } while( true );
}

// FindHitSculptMeshTriangle @ 14cc580c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
UDynamicMeshSculptTool::FindHitSculptMeshTriangle
          (UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  bool bVar1;
  int iVar2;
  FDynamicMesh3 *pFVar3;
  FDynamicMeshOctree3 *local_res8;
  FDynamicMeshOctree3 *local_res18 [2];
  code *local_28;
  FDynamicMeshOctree3 **local_20;
  code *local_18;
  FDynamicMeshOctree3 **local_10;
  
  local_res8 = (((this->DynamicMeshComponent).field0_0x0.DebugPtr)->Octree).Ptr;
  local_20 = &local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
             ::Call;
  local_10 = local_res18;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
             ::Call;
  local_res18[0] = local_res8;
  iVar2 = UE::Geometry::FSparseDynamicOctree3::FindNearestHitObject
                    ((FSparseDynamicOctree3 *)local_res8,param_1,
                     (TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *)&local_18,
                     (TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *)&local_28,
                     __real_7fefffffffffffff);
  if (((this->BrushProperties).field0_0x0.DebugPtr)->bHitBackFaces == false) {
    pFVar3 = (FDynamicMesh3 *)
             (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
    bVar1 = IsHitTriangleBackFacing(this,iVar2,pFVar3);
    if (bVar1) {
      iVar2 = -1;
    }
  }
  return iVar2;
}

// FindHitTargetMeshTriangle @ 14cc58180

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

int __thiscall
UDynamicMeshSculptTool::FindHitTargetMeshTriangle
          (UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68 [2];
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (*(longlong *)&this->PendingTargetUpdate != 0) {
    do {
      do {
      } while (*(longlong *)&this->PendingTargetUpdate == 0);
      plVar4 = *(longlong **)(*(longlong *)&this->PendingTargetUpdate + 0x60);
      cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,0xffffffff,0);
    } while (cVar1 == '\0');
  }
  local_68[0] = __real_7fefffffffffffff;
  local_58 = 0;
  local_30 = (longlong *)0x0;
  local_28 = 0;
  iVar3 = (**(code **)((this->BrushTargetMeshSpatial)._padding_ + 0x40))
                    (&this->BrushTargetMeshSpatial,param_1,local_68);
  if (local_58 != 0) {
    plVar4 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar4 = local_30;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  if (((this->BrushProperties).field0_0x0.DebugPtr)->bHitBackFaces == false) {
    bVar2 = IsHitTriangleBackFacing(this,iVar3,&this->BrushTargetMesh);
    if (bVar2) {
      iVar3 = -1;
    }
  }
  return iVar3;
}

// GetEnableRemeshing @ 14cc5b310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDynamicMeshSculptTool::GetEnableRemeshing(UDynamicMeshSculptTool *this)

{
  return this->bEnableRemeshing;
}

// GetPrivateStaticClass @ 14cc5cbf0

UClass * __cdecl UDynamicMeshSculptTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshSculptTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DynamicMeshSculptTool",
               &Z_Registration_Info_UClass_UDynamicMeshSculptTool.InnerSingleton,
               StaticRegisterNativesUDynamicMeshSculptTool,0xed0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDynamicMeshSculptTool>,
               InternalVTableHelperCtorCaller<UDynamicMeshSculptTool>,local_res8,
               UMeshSurfacePointTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshSculptTool.InnerSingleton;
}

// GetTargetMeshNearest @ 14cc5dc70

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

bool __thiscall
UDynamicMeshSculptTool::GetTargetMeshNearest
          (UDynamicMeshSculptTool *this,TVector<double> *param_1,double param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  longlong lVar11;
  char cVar12;
  uint uVar13;
  TVector<double> *pTVar14;
  longlong *plVar15;
  FMeshNormals *this_00;
  undefined1 auStackY_208 [32];
  int local_1d8;
  int iStack_1d4;
  undefined1 local_1c8 [16];
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 TStack_1a0;
  TVector<double>_u_0 local_188;
  TVector<double>_u_0 local_168;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double local_d8 [2];
  longlong local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  undefined1 local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_208;
  if (*(longlong *)&this->PendingTargetUpdate != 0) {
    do {
      do {
      } while (*(longlong *)&this->PendingTargetUpdate == 0);
      plVar15 = *(longlong **)(*(longlong *)&this->PendingTargetUpdate + 0x60);
      cVar12 = (**(code **)(*plVar15 + 0x20))(plVar15,0xffffffff,0);
    } while (cVar12 == '\0');
  }
  local_c8 = 0;
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  local_d8[0] = param_2;
  uVar13 = (**(code **)((this->BrushTargetMeshSpatial)._padding_ + 0x20))
                     (&this->BrushTargetMeshSpatial,param_1,local_1c8,local_d8);
  if (local_c8 != 0) {
    plVar15 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar15 = local_a0;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  if (0 < (int)uVar13) {
    UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (&this->BrushTargetMesh,uVar13,(TVector<double> *)&local_1b8._s_0,
               (TVector<double> *)&TStack_1a0._s_0,(TVector<double> *)&local_188._s_0);
    local_168._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_168._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_168._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    local_150 = local_1b8._s_0.X;
    dStack_148 = local_1b8._s_0.Y;
    local_130 = TStack_1a0._s_0.Y;
    dStack_128 = TStack_1a0._s_0.Z;
    local_140 = local_1b8._s_0.Z;
    dStack_138 = TStack_1a0._s_0.X;
    local_110 = local_188._s_0.Z;
    local_120 = local_188._s_0.X;
    dStack_118 = local_188._s_0.Y;
    UE::Geometry::TDistPoint3Triangle3<double>::ComputeResult
              ((TDistPoint3Triangle3<double> *)&local_168._s_0);
    this_00 = &this->BrushTargetNormals;
    lVar11 = *(longlong *)
              ((this->BrushTargetMesh).Triangles.Blocks.AllocatorInstance.Data +
              (ulonglong)(uVar13 >> 9) * 8);
    uVar1 = *(undefined8 *)(lVar11 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
    iVar10 = *(int *)(lVar11 + 8 + (ulonglong)(uVar13 & 0x1ff) * 0xc);
    local_1d8 = (int)uVar1;
    pTVar14 = UE::Geometry::FMeshNormals::operator[](this_00,local_1d8);
    iStack_1d4 = (int)((ulonglong)uVar1 >> 0x20);
    dVar2 = (pTVar14->field0_0x0)._s_0.X;
    dVar3 = (pTVar14->field0_0x0)._s_0.Y;
    dVar4 = (pTVar14->field0_0x0)._s_0.Z;
    pTVar14 = UE::Geometry::FMeshNormals::operator[](this_00,iStack_1d4);
    dVar5 = (pTVar14->field0_0x0)._s_0.X;
    dVar6 = (pTVar14->field0_0x0)._s_0.Y;
    dVar7 = (pTVar14->field0_0x0)._s_0.Z;
    pTVar14 = UE::Geometry::FMeshNormals::operator[](this_00,iVar10);
    dVar8 = (pTVar14->field0_0x0)._s_0.Y;
    dVar9 = (pTVar14->field0_0x0)._s_0.Z;
    (param_4->field0_0x0)._s_0.X =
         local_f8 * (pTVar14->field0_0x0)._s_0.X + local_100 * dVar5 + local_108 * dVar2;
    (param_4->field0_0x0)._s_0.Y = local_f8 * dVar8 + local_100 * dVar6 + local_108 * dVar3;
    (param_4->field0_0x0)._s_0.Z = local_f8 * dVar9 + local_100 * dVar7 + local_108 * dVar4;
    UE::Geometry::Normalize<double>(param_4,0.0);
    (param_3->field0_0x0)._s_0.X = local_f0;
    (param_3->field0_0x0)._s_0.Y = dStack_e8;
    (param_3->field0_0x0)._s_0.Z = local_e0;
  }
  return 0 < (int)uVar13;
}

// GetWorldSpaceFocusBox @ 14cc5e570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TBox<double> * __thiscall
UDynamicMeshSculptTool::GetWorldSpaceFocusBox
          (UDynamicMeshSculptTool *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  FPersistentStampRemesher *pFVar2;
  double dVar3;
  double dVar4;
  
  if (*(int *)((longlong)&(this->ActiveDragPlane).Rotation.field0_0x0 + 8) == -1) {
    USingleSelectionTool::GetWorldSpaceFocusBox((USingleSelectionTool *)this,__return_storage_ptr__)
    ;
    return __return_storage_ptr__;
  }
  dVar1 = *(double *)&(this->GizmoPositionWatcher).OnValueChangedFunc;
  dVar3 = *(double *)&this->bEnableRemeshing;
  dVar4 = this->InitialEdgeLength;
  pFVar2 = (this->ActiveRemesher).Object;
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar3 - dVar1;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar4 - dVar1;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = (double)pFVar2 - dVar1;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar1 + dVar3;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar1 + dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1 + (double)pFVar2;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// HasAccept @ 14cc5ea70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDynamicMeshSculptTool::HasAccept(UDynamicMeshSculptTool *this)

{
  return true;
}

// HasCancel @ 14cc5ead0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDynamicMeshSculptTool::HasCancel(UDynamicMeshSculptTool *this)

{
  return true;
}

// HitTest @ 14cc5f9f0

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

bool __thiscall
UDynamicMeshSculptTool::HitTest
          (UDynamicMeshSculptTool *this,TRay<double> *param_1,FHitResult *param_2)

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
  bool bVar9;
  int iVar10;
  TVector<double> *pTVar11;
  FDynamicMesh3 *this_01;
  FDynamicMesh3 *pFVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStackY_2d8 [32];
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 TStack_290;
  FDynamicMeshOctree3 *local_278;
  FDynamicMeshOctree3 *local_270;
  code *local_268;
  FDynamicMeshOctree3 **local_260;
  code *local_258;
  FDynamicMeshOctree3 **local_250;
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_230;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 TStack_1e0;
  TVector<double>_u_0 local_1c8;
  TVector<double> local_1a8;
  TVector<double> local_190;
  TVector<double> local_178;
  TVector<double> local_160;
  TVector<double> local_148;
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
  TVector<double> local_a8;
  EIntersectionType local_90 [2];
  ulonglong local_88;
  
  dVar8 = __real_3ff0000000000000;
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_230._s_0.X = (param_1->Direction).field0_0x0._s_0.X;
  local_230._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
  this_00 = &this->CurTargetTransform;
  local_230._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z;
  dVar1 = *(double *)&(this->CurTargetTransform).Scale3D.field0_0x0;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar1 = __real_3ff0000000000000 / dVar1;
  }
  else {
    dVar1 = 0.0;
  }
  dVar2 = *(double *)((longlong)&(this->CurTargetTransform).Scale3D.field0_0x0 + 8);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar2 = __real_3ff0000000000000 / dVar2;
  }
  else {
    dVar2 = 0.0;
  }
  dVar3 = *(double *)((longlong)&(this->CurTargetTransform).Scale3D.field0_0x0 + 0x10);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar3 = __real_3ff0000000000000 / dVar3;
  }
  else {
    dVar3 = 0.0;
  }
  pTVar11 = UE::Geometry::TQuaternion<double>::InverseMultiply
                      (&this_00->Rotation,&local_1a8,(TVector<double> *)&local_230._s_0);
  local_218._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_218._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  local_218._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  dVar4 = (pTVar11->field0_0x0)._s_0.X;
  dVar5 = (pTVar11->field0_0x0)._s_0.Y;
  dVar6 = (pTVar11->field0_0x0)._s_0.Z;
  pTVar11 = UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
                      (this_00,&local_190,(TVector<double> *)&local_218._s_0);
  local_2a8._s_0.X = (pTVar11->field0_0x0)._s_0.X;
  local_2a8._s_0.Y = (pTVar11->field0_0x0)._s_0.Y;
  local_2a8._s_0.Z = (pTVar11->field0_0x0)._s_0.Z;
  TStack_290._s_0.X = dVar1 * dVar4;
  TStack_290._s_0.Y = dVar2 * dVar5;
  TStack_290._s_0.Z = dVar3 * dVar6;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&TStack_290._s_0,__real_3e45798ee0000000);
  auVar13._0_8_ = TStack_290._s_0.Y * TStack_290._s_0.Y;
  auVar13._8_8_ = 0;
  auVar14._8_8_ = 0;
  auVar14._0_8_ =
       TStack_290._s_0.X * TStack_290._s_0.X + auVar13._0_8_ + TStack_290._s_0.Z * TStack_290._s_0.Z
  ;
  auVar14 = sqrtpd(auVar13,auVar14);
  if (auVar14._0_8_ <= 0.0) {
    TStack_290._s_0.X = 0.0;
    TStack_290._s_0.Y = 0.0;
    TStack_290._s_0.Z = 0.0;
  }
  else {
    dVar8 = dVar8 / auVar14._0_8_;
    TStack_290._s_0.X = TStack_290._s_0.X * dVar8;
    TStack_290._s_0.Y = TStack_290._s_0.Y * dVar8;
    TStack_290._s_0.Z = TStack_290._s_0.Z * dVar8;
  }
  this_01 = (FDynamicMesh3 *)
            (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
  local_260 = &local_278;
  local_278 = (((this->DynamicMeshComponent).field0_0x0.DebugPtr)->Octree).Ptr;
  local_268 = UE::Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_2>,double,int,UE::Math::TRay<double>_const_&>
              ::Call;
  local_250 = &local_270;
  local_258 = UE::Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FDynamicMeshOctree3::FindNearestHitObject'::__l2::<lambda_1>,UE::Geometry::TAxisAlignedBox3<double>,int>
              ::Call;
  local_270 = local_278;
  iVar10 = UE::Geometry::FSparseDynamicOctree3::FindNearestHitObject
                     ((FSparseDynamicOctree3 *)local_278,(TRay<double> *)&local_2a8._s_0,
                      (TFunctionRef<UE::Geometry::TAxisAlignedBox3<double>___cdecl(int)> *)
                      &local_258,
                      (TFunctionRef<double___cdecl(int,UE::Math::TRay<double>_const_&)> *)&local_268
                      ,__real_7fefffffffffffff);
  if (((this->BrushProperties).field0_0x0.DebugPtr)->bHitBackFaces == false) {
    pFVar12 = (FDynamicMesh3 *)
              (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))()
    ;
    bVar9 = IsHitTriangleBackFacing(this,iVar10,pFVar12);
    if (bVar9) {
      return false;
    }
  }
  if (iVar10 == -1) {
    return false;
  }
  UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
            (this_01,iVar10,(TVector<double> *)&local_1f8._s_0,(TVector<double> *)&TStack_1e0._s_0,
             (TVector<double> *)&local_1c8._s_0);
  local_128._s_0.X = local_2a8._s_0.X;
  local_128._s_0.Y = local_2a8._s_0.Y;
  local_128._s_0.Z = local_2a8._s_0.Z;
  dStack_110 = TStack_290._s_0.X;
  local_108 = TStack_290._s_0.Y;
  dStack_100 = TStack_290._s_0.Z;
  local_f8._s_0.X = local_1f8._s_0.X;
  local_f8._s_0.Y = local_1f8._s_0.Y;
  local_f8._s_0.Z = local_1f8._s_0.Z;
  dStack_e0 = TStack_1e0._s_0.X;
  local_d8 = TStack_1e0._s_0.Y;
  dStack_d0 = TStack_1e0._s_0.Z;
  local_c8 = local_1c8._s_0.X;
  dStack_c0 = local_1c8._s_0.Y;
  local_b8 = local_1c8._s_0.Z;
  UE::Geometry::TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
            ((TRay<double> *)&local_128._s_0,(TTriangle3<double> *)&local_f8._s_0,&local_b0,
             &local_a8,local_90);
  param_2->FaceIndex = iVar10;
  param_2->Distance = (float)local_b0;
  pTVar11 = UE::Geometry::FDynamicMesh3::GetTriNormal(this_01,&local_178,iVar10);
  pTVar11 = UE::Geometry::TTransformSRT3<double>::TransformNormal<double>
                      (this_00,&local_160,pTVar11);
  dVar8 = (pTVar11->field0_0x0)._s_0.Y;
  dVar1 = (pTVar11->field0_0x0)._s_0.Z;
  *(double *)&param_2->Normal = (pTVar11->field0_0x0)._s_0.X;
  *(double *)&(param_2->Normal).field_0x8 = dVar8;
  *(double *)&(param_2->Normal).field_0x10 = dVar1;
  local_248._s_0.X =
       (TStack_290._s_0.X * local_b0 + local_2a8._s_0.X) *
       (this->CurTargetTransform).Scale3D.field0_0x0._s_0.X;
  local_248._s_0.Y =
       (TStack_290._s_0.Y * local_b0 + local_2a8._s_0.Y) *
       (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Y;
  local_248._s_0.Z =
       (TStack_290._s_0.Z * local_b0 + local_2a8._s_0.Z) *
       (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Z;
  pTVar11 = UE::Geometry::operator*<double>
                      (&local_148,&this_00->Rotation,(TVector<double> *)&local_248._s_0);
  dVar8 = (this->CurTargetTransform).Translation.field0_0x0._s_0.Y;
  dVar2 = (pTVar11->field0_0x0)._s_0.Y;
  dVar1 = (pTVar11->field0_0x0)._s_0.Z + (this->CurTargetTransform).Translation.field0_0x0._s_0.Z;
  *(double *)&param_2->ImpactPoint =
       (this->CurTargetTransform).Translation.field0_0x0._s_0.X + (pTVar11->field0_0x0)._s_0.X;
  auVar7._8_4_ = SUB84(dVar1,0);
  auVar7._0_8_ = dVar2 + dVar8;
  auVar7._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&(param_2->ImpactPoint).field_0x8 = auVar7;
  return true;
}

// IncreaseBrushRadiusAction @ 14cc5fe30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::IncreaseBrushRadiusAction(UDynamicMeshSculptTool *this)

{
  float fVar1;
  
  FBrushToolRadius::IncreaseRadius(&((this->BrushProperties).field0_0x0.DebugPtr)->BrushSize,false);
  (**(code **)(this->_padding_ + 0x340))(this,(this->BrushProperties).field0_0x0.DebugPtr);
  fVar1 = FBrushToolRadius::GetWorldRadius
                    (&((this->BrushProperties).field0_0x0.DebugPtr)->BrushSize);
  this->CurrentBrushRadius = (double)fVar1;
  return;
}

// IncreaseBrushRadiusSmallStepAction @ 14cc5fe90

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
UDynamicMeshSculptTool::IncreaseBrushRadiusSmallStepAction(UDynamicMeshSculptTool *this)

{
  float fVar1;
  
  FBrushToolRadius::IncreaseRadius(&((this->BrushProperties).field0_0x0.DebugPtr)->BrushSize,true);
  (**(code **)(this->_padding_ + 0x340))(this,(this->BrushProperties).field0_0x0.DebugPtr);
  fVar1 = FBrushToolRadius::GetWorldRadius
                    (&((this->BrushProperties).field0_0x0.DebugPtr)->BrushSize);
  this->CurrentBrushRadius = (double)fVar1;
  return;
}

// IncreaseBrushSpeedAction @ 14cc5fef0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::IncreaseBrushSpeedAction(UDynamicMeshSculptTool *this)

{
  UDynamicMeshBrushSculptProperties *pUVar1;
  float fVar2;
  
  pUVar1 = (this->SculptProperties).field0_0x0.DebugPtr;
  fVar2 = pUVar1->PrimaryBrushSpeed + __real_3d4ccccd;
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  pUVar1->PrimaryBrushSpeed = fVar2;
                    /* WARNING: Could not recover jumptable at 0x00014cc5ff28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x340))(0,(this->SculptProperties).field0_0x0.DebugPtr);
  return;
}

// InitializeActiveRemesher @ 14cc60420

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

void __thiscall UDynamicMeshSculptTool::InitializeActiveRemesher(UDynamicMeshSculptTool *this)

{
  atomic<int> *paVar1;
  TSharedPtr<FPersistentStampRemesher,1> *pTVar2;
  FSubRegionRemesher *pFVar3;
  code *pcVar4;
  bool bVar5;
  FDynamicMesh3 *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FSubRegionRemesher *pFVar8;
  undefined8 *puVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  longlong local_28;
  TReferenceControllerBase<1> *local_20;
  FSharedReferencer<1> aFStack_18 [2];
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2012,"DynamicMeshSculptTool_InitializeActiveRemesher",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
               ,0x7dc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2012);
  }
  pFVar6 = (FDynamicMesh3 *)
           (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
  pTVar7 = ::operator_new(0x20);
  if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
    pTVar7 = (TReferenceControllerBase<1> *)0x0;
    local_20 = ___xmm_00000000000000000000000000000010;
    pTVar10 = (TReferenceControllerBase<1> *)&DAT_00000010;
    aFStack_18[0].ReferenceController = _UNK_150651568;
    goto LAB_14cc60580;
  }
  pTVar7->SharedReferenceCount = (atomic<int>)0x1;
  paVar1 = &pTVar7[1].SharedReferenceCount;
  pTVar7->WeakReferenceCount = (atomic<int>)0x1;
  pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
  pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
  pTVar7->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_VFPersistentStampRemesher___00_SharedPointerInternals__6B_
  ;
  pTVar7[1]._padding_ = (longlong)pFVar6;
  pFVar8 = ::operator_new(0x440);
  if (pFVar8 == (FSubRegionRemesher *)0x0) {
    pFVar8 = (FSubRegionRemesher *)0x0;
  }
  else {
    pFVar8 = UE::Geometry::FSubRegionRemesher::FSubRegionRemesher(pFVar8,pFVar6);
  }
  if (paVar1 == (atomic<int> *)&local_28) {
    if (pFVar8 != (FSubRegionRemesher *)0x0) {
      puVar9 = *(undefined8 **)pFVar8;
      goto LAB_14cc60515;
    }
  }
  else {
    pFVar3 = *(FSubRegionRemesher **)paVar1;
    *(FSubRegionRemesher **)paVar1 = pFVar8;
    if (pFVar3 != (FSubRegionRemesher *)0x0) {
      puVar9 = *(undefined8 **)pFVar3;
      pFVar8 = pFVar3;
LAB_14cc60515:
      (*(code *)*puVar9)(pFVar8,1);
    }
  }
  pTVar10 = pTVar7 + 1;
  if ((pTVar10 == (TReferenceControllerBase<1> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  LOCK();
  pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
  UNLOCK();
  aFStack_18[0].ReferenceController = pTVar7;
  local_20 = pTVar10;
LAB_14cc60580:
  pTVar2 = &this->ActiveRemesher;
  if (pTVar2 != (TSharedPtr<FPersistentStampRemesher,1> *)&local_20) {
    pTVar2->Object = (FPersistentStampRemesher *)pTVar10;
    local_20 = (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ActiveRemesher).SharedReferenceCount,aFStack_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_18[0].ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  if ((pTVar2->Object == (FPersistentStampRemesher *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  ConfigureRemesher(this,(pTVar2->Object->Remesher).Ptr);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// InitializeRemesherROI @ 14cc60c10

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
UDynamicMeshSculptTool::InitializeRemesherROI
          (UDynamicMeshSculptTool *this,FSubRegionRemesher *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  undefined4 local_res8 [2];
  int local_res10 [2];
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2003,
               "DynamicMeshSculptTool_RemeshROI_Configure_InitializeROI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
               ,0x7d3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2003);
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&param_1->VertexROI);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reserve
            (&param_1->VertexROI,(this->VertexROI).ArrayNum);
  pFVar3 = (this->VertexROI).AllocatorInstance.Data;
  iVar2 = (this->VertexROI).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->VertexROI).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    local_res8[0] = *(undefined4 *)pFVar3;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&param_1->VertexROI,local_res10,(bool *)local_res8);
    pFVar3 = pFVar3 + 4;
  }
  UE::Geometry::FSubRegionRemesher::InitializeFromVertexROI(param_1);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// IsHitTriangleBackFacing @ 14cc62310

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

bool __thiscall
UDynamicMeshSculptTool::IsHitTriangleBackFacing
          (UDynamicMeshSculptTool *this,int param_1,FDynamicMesh3 *param_2)

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
    plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x398))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_98);
    local_38[0]._s_0.Z = local_88;
    local_38[0]._s_0.X = local_98;
    local_38[0]._s_0.Y = dStack_90;
    UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
              (&this->CurTargetTransform,(TVector<double> *)&local_d0._s_0,
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

// MakeDefaultSphereMesh @ 14cc63860

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
UDynamicMeshSculptTool::MakeDefaultSphereMesh
          (UDynamicMeshSculptTool *this,UObject *param_1,UWorld *param_2,int param_3)

{
  int iVar1;
  UPreviewMesh *this_00;
  UInteractiveToolManager *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  UClass *pUVar4;
  UDynamicMeshComponent *pUVar5;
  int iVar6;
  undefined1 local_308 [160];
  double local_268;
  int local_260;
  int local_25c;
  bool local_258;
  FDynamicMesh3 local_248;
  
  this_00 = NewObject<UPreviewMesh>(param_1);
  UPreviewMesh::CreateInWorld(this_00,param_2,&UE::Math::TTransform<double>::Identity);
  local_308._0_8_ = &___7FSphereGenerator_Geometry_UE__6B_;
  local_268 = __real_3ff0000000000000;
  local_308._8_8_ = (FScriptContainerElement *)0x0;
  local_308._16_8_ = 0;
  local_260 = 3;
  if (3 < param_3) {
    local_260 = param_3;
  }
  local_308._24_8_ = (FScriptContainerElement *)0x0;
  local_308._32_8_ = 0;
  local_308._40_8_ = (FScriptContainerElement *)0x0;
  iVar6 = local_260 * (local_260 + -2);
  local_308._48_8_ = 0;
  local_308._56_8_ = (FScriptContainerElement *)0x0;
  local_308._64_8_ = 0;
  local_308._72_8_ = (FScriptContainerElement *)0x0;
  local_308._80_8_ = 0;
  local_308._88_8_ = (FScriptContainerElement *)0x0;
  iVar1 = iVar6 + 2;
  local_308._96_8_ = 0;
  local_308._104_8_ = (FScriptContainerElement *)0x0;
  local_308._112_8_ = 0;
  local_308._120_8_ = (FScriptContainerElement *)0x0;
  local_308._128_8_ = 0;
  local_308._136_8_ = (FScriptContainerElement *)0x0;
  local_308._144_8_ = 0;
  local_308[0x98] = false;
  local_258 = false;
  local_25c = local_260;
  UE::Geometry::FMeshShapeGenerator::SetBufferSizes
            ((FMeshShapeGenerator *)local_308,iVar1,iVar6 * 2,
             (local_260 + 1) * (local_260 + -2) + local_260 * 2,iVar1);
  UE::Geometry::FSphereGenerator::GenerateVertices((FSphereGenerator *)local_308);
  UE::Geometry::FSphereGenerator::GenerateUVVertices((FSphereGenerator *)local_308);
  UE::Geometry::FSphereGenerator::OutputEquatorialTriangles((FSphereGenerator *)local_308);
  UE::Geometry::FSphereGenerator::OutputPolarTriangles((FSphereGenerator *)local_308);
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_248,(FMeshShapeGenerator *)local_308);
  UPreviewMesh::UpdatePreview(this_00,&local_248,FullUpdate,AllVertexAttribs);
  pUVar2 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar3 = ToolSetupUtil::GetDefaultBrushVolumeMaterial(pUVar2);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar3 == (UMaterialInstanceDynamic *)0x0)) {
    (this->BrushIndicatorMaterial).field0_0x0.DebugPtr = pUVar3;
    if (pUVar3 != (UMaterialInstanceDynamic *)0x0) goto LAB_14cc639eb;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    (this->BrushIndicatorMaterial).field0_0x0.DebugPtr = pUVar3;
LAB_14cc639eb:
    UPreviewMesh::SetMaterial(this_00,(UMaterialInterface *)pUVar3);
  }
  pUVar5 = (this_00->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar5 != (UDynamicMeshComponent *)0x0) {
    pUVar4 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_14cc63a25;
  }
  pUVar5 = (UDynamicMeshComponent *)0x0;
LAB_14cc63a25:
  (**(code **)(pUVar5->_padding_ + 0xc80))(pUVar5);
  UPreviewMesh::SetShadowsEnabled(this_00,false);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_248);
  local_308._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((FScriptContainerElement *)local_308._136_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._136_8_);
  }
  if ((FScriptContainerElement *)local_308._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._120_8_);
  }
  if ((FScriptContainerElement *)local_308._104_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._104_8_);
  }
  if ((FScriptContainerElement *)local_308._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._88_8_);
  }
  if ((FScriptContainerElement *)local_308._72_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._72_8_);
  }
  if ((FScriptContainerElement *)local_308._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._56_8_);
  }
  if ((FScriptContainerElement *)local_308._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._40_8_);
  }
  if ((FScriptContainerElement *)local_308._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._24_8_);
  }
  if ((FScriptContainerElement *)local_308._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_308._8_8_);
  }
  return this_00;
}

// NextHistoryBrushModeAction @ 14cc65540

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::NextHistoryBrushModeAction(UDynamicMeshSculptTool *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = (this->BrushTypeHistory).ArrayNum;
  if (this->BrushTypeHistoryIndex < iVar1 + -1) {
    uVar5 = this->BrushTypeHistoryIndex + 1;
    this->BrushTypeHistoryIndex = uVar5;
    uVar4 = 0;
    if ((int)uVar5 < iVar1) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    ((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushType =
         (EDynamicMeshSculptBrushType)(this->BrushTypeHistory).AllocatorInstance.Data[(int)uVar5];
    this->LastStampType = ((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushType;
  }
  return;
}

// OnBeginDrag @ 14cc66230

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
UDynamicMeshSculptTool::OnBeginDrag(UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  TVector<double> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  EDynamicMeshSculptBrushType EVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  char cVar11;
  bool bVar12;
  TVector<double> *pTVar13;
  UInteractiveToolManager *pUVar14;
  FText *pFVar15;
  FMeshVertexChangeBuilder *this_00;
  FMeshVertexChangeBuilder *this_01;
  FDynamicMeshChangeTracker *this_02;
  FDynamicMesh3 *pFVar16;
  TFrame3<double> *pTVar17;
  uint uVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  TVector<double>_u_0 local_278;
  double local_260;
  double dStack_258;
  double local_250;
  TQuaternion<double>_u_0 TStack_248;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_210;
  TVector<double>_u_0 local_1f8;
  FText local_1e0;
  TVector<double> local_1d0;
  undefined1 local_1b8 [4];
  undefined4 local_1b4;
  float local_1b0;
  undefined4 local_114;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  TFrame3<double> local_b8;
  TFrame3<double> local_80;
  
  bVar10 = (bool)(**(code **)(this->_padding_ + 1000))();
  this->bSmoothing = bVar10;
  bVar10 = (bool)(**(code **)(this->_padding_ + 0x3f8))(this);
  this->bInvert = bVar10;
  memset(local_1b8,0,0x100);
  this_01 = (FMeshVertexChangeBuilder *)0x0;
  local_1b4 = 0x3f800000;
  local_100 = 0;
  uStack_f8 = 0;
  local_114 = 0xffffffff;
  local_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0xffffffff;
  uStack_e4 = 0;
  cVar11 = (**(code **)(this->_padding_ + 0x3b8))(this,param_1,local_1b8);
  if (cVar11 == '\0') {
    return;
  }
  dVar2 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar9 = (param_1->Direction).field0_0x0._s_0.Y;
  dVar8 = (double)local_1b0;
  dVar3 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar21 = (double)((this->BrushProperties).field0_0x0.DebugPtr)->Depth * this->CurrentBrushRadius;
  dVar20 = (param_1->Origin).field0_0x0._s_0.Z;
  dVar4 = (param_1->Direction).field0_0x0._s_0.Y;
  dVar5 = (param_1->Origin).field0_0x0._s_0.Y;
  (this->BrushStartCenterWorld).field0_0x0._s_0.X =
       dVar8 * (param_1->Direction).field0_0x0._s_0.X + (param_1->Origin).field0_0x0._s_0.X +
       dVar21 * (param_1->Direction).field0_0x0._s_0.X;
  (this->BrushStartCenterWorld).field0_0x0._s_0.Y = dVar8 * dVar4 + dVar5 + dVar21 * dVar9;
  (this->BrushStartCenterWorld).field0_0x0._s_0.Z = dVar8 * dVar3 + dVar20 + dVar21 * dVar2;
  dVar5 = __real_3ff0000000000000;
  uVar18 = (uint)__xmm_80000000000000008000000000000000;
  uVar19 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  this->bInDrag = true;
  local_278._s_0.Z = *(double *)((longlong)&(param_1->Direction).field0_0x0 + 0x10);
  local_228._s_0.X =
       (double)CONCAT44(*(uint *)((longlong)&(param_1->Direction).field0_0x0 + 4) ^ uVar19,
                        *(uint *)&(param_1->Direction).field0_0x0 ^ uVar18);
  local_228._s_0.Y =
       (double)CONCAT44(*(uint *)((longlong)&(param_1->Direction).field0_0x0 + 0xc) ^ uVar19,
                        *(uint *)((longlong)&(param_1->Direction).field0_0x0 + 8) ^ uVar18);
  TStack_248._s_0.X = 0.0;
  local_228._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)local_278._s_0.Z >> 0x20) ^ uVar19,
                        SUB84(local_278._s_0.Z,0) ^ uVar18);
  local_250 = (this->BrushStartCenterWorld).field0_0x0._s_0.Z;
  TStack_248._s_0.Y = 0.0;
  TStack_248._s_0.Z = 0.0;
  local_260 = (this->BrushStartCenterWorld).field0_0x0._s_0.X;
  dStack_258 = (this->BrushStartCenterWorld).field0_0x0._s_0.Y;
  TStack_248._s_0.W = dVar5;
  local_210._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_210._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_210._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  UE::Geometry::TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&TStack_248._s_0,(TVector<double> *)&local_210._s_0,
             (TVector<double> *)&local_228._s_0);
  (this->ActiveDragPlane).Origin.field0_0x0._s_0.X = local_260;
  (this->ActiveDragPlane).Origin.field0_0x0._s_0.Y = dStack_258;
  (this->ActiveDragPlane).Origin.field0_0x0._s_0.Z = local_250;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.X = TStack_248._s_0.X;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Y = TStack_248._s_0.Y;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Z = TStack_248._s_0.Z;
  (this->ActiveDragPlane).Rotation.field0_0x0._s_0.W = TStack_248._s_0.W;
  local_1f8._s_0.X = (param_1->Direction).field0_0x0._s_0.X;
  local_1f8._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
  local_1f8._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z;
  local_278._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_278._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  local_278._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  pTVar13 = &this->LastHitPosWorld;
  UE::Geometry::TFrame3<double>::RayPlaneIntersection
            (&this->ActiveDragPlane,(TVector<double> *)&local_278._s_0,
             (TVector<double> *)&local_1f8._s_0,2,pTVar13);
  dVar3 = (this->LastHitPosWorld).field0_0x0._s_0.Y;
  dVar2 = (this->LastHitPosWorld).field0_0x0._s_0.Z;
  (this->LastBrushPosWorld).field0_0x0._s_0.X = (pTVar13->field0_0x0)._s_0.X;
  (this->LastBrushPosWorld).field0_0x0._s_0.Y = dVar3;
  pTVar1 = &this->LastBrushPosLocal;
  (this->LastBrushPosWorld).field0_0x0._s_0.Z = dVar2;
  dVar2 = (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Y;
  dVar3 = (this->ActiveDragPlane).Rotation.field0_0x0._s_0.X;
  dVar20 = (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Z;
  dVar4 = (this->ActiveDragPlane).Rotation.field0_0x0._s_0.W;
  dVar20 = dVar20 + dVar20;
  (this->LastBrushPosNormalWorld).field0_0x0._s_0.X = dVar4 * (dVar2 + dVar2) + dVar20 * dVar3;
  (this->LastBrushPosNormalWorld).field0_0x0._s_0.Y = dVar20 * dVar2 - dVar4 * (dVar3 + dVar3);
  (this->LastBrushPosNormalWorld).field0_0x0._s_0.Z =
       dVar5 - ((dVar2 + dVar2) * dVar2 + (dVar3 + dVar3) * dVar3);
  pTVar13 = UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
                      (&this->CurTargetTransform,&local_1d0,pTVar13);
  bVar10 = this->bEnableRemeshing;
  dVar2 = (pTVar13->field0_0x0)._s_0.Y;
  (pTVar1->field0_0x0)._s_0.X = (pTVar13->field0_0x0)._s_0.X;
  (this->LastBrushPosLocal).field0_0x0._s_0.Y = dVar2;
  dVar2 = (pTVar13->field0_0x0)._s_0.Z;
  (this->LastBrushPosLocal).field0_0x0._s_0.Z = dVar2;
  dVar3 = (this->LastBrushPosLocal).field0_0x0._s_0.Y;
  (this->LastSmoothBrushPosLocal).field0_0x0._s_0.X = (pTVar1->field0_0x0)._s_0.X;
  (this->LastSmoothBrushPosLocal).field0_0x0._s_0.Y = dVar3;
  (this->LastSmoothBrushPosLocal).field0_0x0._s_0.Z = dVar2;
  if ((this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActiveVertexChange == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
                          ,0x9eb,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->ActiveMeshChange != (FDynamicMeshChangeTracker *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActiveMeshChange == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
                          ,0x9ec,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar14 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pFVar15 = FText::AsLocalizable_Advanced_LocText
                      (&local_1e0,L"UDynamicMeshSculptTool",L"MeshSculptChange",L"Brush Stroke");
  UE::TransactionUtil::FLongTransactionTracker::Open(&this->LongTransactions,pFVar15,pUVar14);
  if (bVar10 == false) {
    this_00 = ::operator_new(0x140);
    if (this_00 != (FMeshVertexChangeBuilder *)0x0) {
      this_01 = FMeshVertexChangeBuilder::FMeshVertexChangeBuilder(this_00);
    }
    this->ActiveVertexChange = this_01;
  }
  else {
    this_02 = ::operator_new(0xa8);
    if (this_02 != (FDynamicMeshChangeTracker *)0x0) {
      pFVar16 = (FDynamicMesh3 *)
                (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))
                          ();
      this_01 = (FMeshVertexChangeBuilder *)
                UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(this_02,pFVar16);
    }
    this->ActiveMeshChange = (FDynamicMeshChangeTracker *)this_01;
    UE::Geometry::FDynamicMeshChangeTracker::BeginChange((FDynamicMeshChangeTracker *)this_01);
  }
  UpdateROI(this,pTVar1);
  EVar6 = ((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushType;
  if (EVar6 == Plane) {
    bVar10 = false;
    pTVar17 = &local_b8;
  }
  else {
    if (EVar6 != PlaneViewAligned) goto LAB_14cc66745;
    AlignBrushToView(this);
    pTVar17 = &local_80;
    bVar10 = true;
  }
  pTVar17 = ComputeROIBrushPlane(this,pTVar17,pTVar1,false,bVar10);
  dVar2 = (pTVar17->Origin).field0_0x0._s_0.Y;
  (this->ActiveFixedBrushPlane).Origin.field0_0x0._s_0.X = (pTVar17->Origin).field0_0x0._s_0.X;
  (this->ActiveFixedBrushPlane).Origin.field0_0x0._s_0.Y = dVar2;
  dVar2 = (pTVar17->Rotation).field0_0x0._s_0.X;
  (this->ActiveFixedBrushPlane).Origin.field0_0x0._s_0.Z = (pTVar17->Origin).field0_0x0._s_0.Z;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.X = dVar2;
  dVar2 = (pTVar17->Rotation).field0_0x0._s_0.Z;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.Y = (pTVar17->Rotation).field0_0x0._s_0.Y;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.Z = dVar2;
  (this->ActiveFixedBrushPlane).Rotation.field0_0x0._s_0.W = (pTVar17->Rotation).field0_0x0._s_0.W;
LAB_14cc66745:
  dVar2 = (param_1->Origin).field0_0x0._s_0.Y;
  (this->PendingStampRay).Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  (this->PendingStampRay).Origin.field0_0x0._s_0.Y = dVar2;
  dVar2 = (param_1->Direction).field0_0x0._s_0.X;
  (this->PendingStampRay).Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  (this->PendingStampRay).Direction.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Direction).field0_0x0._s_0.Y;
  dVar3 = (param_1->Direction).field0_0x0._s_0.Z;
  this->bStampPending = true;
  (this->PendingStampRay).Direction.field0_0x0._s_0.Y = dVar2;
  (this->PendingStampRay).Direction.field0_0x0._s_0.Z = dVar3;
  return;
}

// OnCancelDrag @ 14cc66aa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::OnCancelDrag(UDynamicMeshSculptTool *this)

{
  FDynamicMeshChangeTracker *this_00;
  UInteractiveToolManager *pUVar1;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  this->bInDrag = false;
  this->bStampPending = false;
  this->bRemeshPending = false;
  pUVar1 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
  UE::TransactionUtil::FLongTransactionTracker::Close(&this->LongTransactions,pUVar1);
  if (this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) {
    FMeshVertexChangeBuilder::_scalar_deleting_destructor_(this->ActiveVertexChange,1);
  }
  this_00 = this->ActiveMeshChange;
  this->ActiveVertexChange = (FMeshVertexChangeBuilder *)0x0;
  if (this_00 != (FDynamicMeshChangeTracker *)0x0) {
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(this_00);
    ::operator_delete(this_00,0xa8);
  }
  this->ActiveMeshChange = (FDynamicMeshChangeTracker *)0x0;
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->ActiveRemesher != (TSharedPtr<FPersistentStampRemesher,1> *)&local_18) {
    (this->ActiveRemesher).Object = (FPersistentStampRemesher *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ActiveRemesher).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  return;
}

// OnDynamicMeshComponentChanged @ 14cc66da0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::OnDynamicMeshComponentChanged(UDynamicMeshSculptTool *this)

{
  this->bNormalUpdatePending = true;
  this->bTargetDirty = true;
  return;
}

// OnEndDrag @ 14cc66e50

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
UDynamicMeshSculptTool::OnEndDrag(UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  TSharedPtr<FPersistentStampRemesher,1> *pTVar1;
  longlong local_18;
  FSharedReferencer<1> FStack_10;
  
  this->bInDrag = false;
  this->bStampPending = false;
  this->bRemeshPending = false;
  this->bTargetDirty = true;
  EndChange(this);
  pTVar1 = &this->ActiveRemesher;
  if (pTVar1->Object != (FPersistentStampRemesher *)0x0) {
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FPersistentStampRemesher,1> *)&local_18) {
      pTVar1->Object = (FPersistentStampRemesher *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->ActiveRemesher).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    return;
  }
  return;
}

// OnPropertyModified @ 14cc68250

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
UDynamicMeshSculptTool::OnPropertyModified
          (UDynamicMeshSculptTool *this,UObject *param_1,FProperty *param_2)

{
  float fVar1;
  
  fVar1 = FBrushToolRadius::GetWorldRadius
                    (&((this->BrushProperties).field0_0x0.DebugPtr)->BrushSize);
  this->CurrentBrushRadius = (double)fVar1;
  return;
}

// OnTick @ 14cc69b30

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

void __thiscall UDynamicMeshSculptTool::OnTick(UDynamicMeshSculptTool *this,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  code *pcVar7;
  UFixedPlaneBrushProperties *pUVar8;
  undefined1 *puVar9;
  double dVar10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar11;
  bool bVar12;
  EDynamicMeshSculptBrushType EVar13;
  char cVar14;
  bool bVar15;
  uint uVar16;
  EMeshEditingMaterialModes EVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int iVar20;
  undefined8 uVar21;
  UTexture2D *pUVar22;
  UInteractiveToolManager *pUVar23;
  UCombinedTransformGizmo *pUVar24;
  longlong lVar25;
  UInteractiveGizmoManager *pUVar26;
  TVector<double> *pTVar27;
  TFuture<void> *pTVar28;
  longlong *plVar29;
  longlong *plVar30;
  longlong *plVar31;
  TVector<double>_u_0 *pTVar32;
  undefined1 auVar33 [8];
  ulonglong uVar34;
  TVector<double>_u_0 *pTVar35;
  ulonglong uVar36;
  undefined1 *puVar37;
  uint *puVar38;
  uint uVar39;
  uint uVar40;
  FSharedReferencer<1> FVar41;
  TReferenceControllerBase<1> *pTVar42;
  bool bVar43;
  float fVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auStackY_608 [32];
  EDynamicMeshSculptBrushType local_5d8 [8];
  undefined1 local_5d0 [8];
  ulonglong local_5c8;
  undefined1 local_5c0 [8];
  FSharedReferencer<1> local_5b8;
  undefined1 local_5b0 [8];
  FSharedReferencer<1> local_5a8;
  EMeshEditingMaterialModes local_5a0 [2];
  undefined4 local_598 [2];
  TReferenceControllerBase<1> *local_590;
  FSharedReferencer<1> local_588;
  TVector<double>_u_0 local_580;
  TVector<double>_u_0 local_568;
  FString local_550;
  TVector<double>_u_0 local_540;
  double dStack_528;
  double local_520;
  double dStack_518;
  int local_510;
  int local_50c;
  int local_508 [2];
  TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> local_500;
  FWeakObjectPtr local_4f8;
  FWeakObjectPtr local_4f0;
  double local_4e8;
  UTexture2D *local_4e0;
  <lambda_1> local_4d8;
  FDynamicMeshOctree3 *local_4d0;
  longlong local_4c8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_4c0;
  uint uStack_4b8;
  undefined4 uStack_4b4;
  undefined1 *local_4b0;
  undefined4 uStack_4a8;
  uint uStack_4a4;
  uint local_4a0;
  undefined4 uStack_49c;
  int iStack_498;
  undefined4 uStack_494;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_490;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_488;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined4 uStack_448;
  undefined1 uStack_444;
  undefined2 uStack_443;
  undefined1 uStack_441;
  <lambda_2> local_440;
  <lambda_3> local_430;
  double local_420;
  double local_418;
  double local_410;
  TVector<double>_u_0 local_408;
  TVector<double>_u_0 local_3f0;
  TVector<double>_u_0 local_3d8;
  TVector<double>_u_0 local_3c0;
  TVector<double> local_3a8;
  undefined1 local_390 [16];
  undefined1 local_380 [16];
  undefined1 local_370 [16];
  double local_360;
  double dStack_358;
  double local_350;
  double local_348;
  double dStack_340;
  double local_338;
  undefined1 local_328 [16];
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  TUniqueFunction<void___cdecl(void)> local_2c8;
  TUniqueFunction<void___cdecl(void)> local_298;
  TUniqueFunction<void___cdecl(void)> local_268;
  undefined1 local_238 [48];
  double local_208;
  double local_200;
  undefined1 local_1e0 [76];
  int local_194;
  FWeakObjectPtr local_180;
  FWeakObjectPtr FStack_178;
  IActorInstanceManagerInterface *local_170;
  undefined8 uStack_168;
  TVector<double> local_138;
  TVector<double> local_120 [2];
  undefined4 local_ec;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_608;
  bVar43 = -1 < CpuChannel->Enabled;
  if (bVar43) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1639,"DynamicMeshSculptTool_OnTick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
               ,0x667);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1639);
  }
  fVar44 = (float)(**(code **)(this->_padding_ + 0x400))(this);
  this->ActivePressure = fVar44;
  uVar16 = TICK_SKIP_HACK & 0x80000001;
  if ((int)uVar16 < 0) {
    uVar16 = (uVar16 - 1 | 0xfffffffe) + 1;
  }
  TICK_SKIP_HACK = TICK_SKIP_HACK + 1;
  if (uVar16 != 0) {
    TValueWatcher<bool>::CheckAndUpdate(&this->ShowWireframeWatcher);
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->MaterialModeWatcher).GetValueFunc);
    pcVar7 = *(code **)&(this->MaterialModeWatcher).GetValueFunc;
    plVar29 = (longlong *)&(this->MaterialModeWatcher).GetValueFunc.field_0x10;
    plVar31 = *(longlong **)&(this->MaterialModeWatcher).GetValueFunc.field_0x28;
    plVar30 = plVar29;
    if (plVar31 != (longlong *)0x0) {
      plVar30 = plVar31;
    }
    uVar21 = (**(code **)(*plVar30 + 8))();
    EVar17 = (*pcVar7)(uVar21);
    if (EVar17 != (this->MaterialModeWatcher).CachedValue) {
      UE::Core::Private::Function::CheckCallable
                (*(void **)&(this->MaterialModeWatcher).GetValueFunc);
      plVar31 = *(longlong **)&(this->MaterialModeWatcher).GetValueFunc.field_0x28;
      pcVar7 = *(code **)&(this->MaterialModeWatcher).GetValueFunc;
      if (plVar31 != (longlong *)0x0) {
        plVar29 = plVar31;
      }
      uVar21 = (**(code **)(*plVar29 + 8))(plVar29);
      local_5a0[0] = (*pcVar7)(uVar21);
      (this->MaterialModeWatcher).CachedValue = local_5a0[0];
      UE::Core::Private::Function::CheckCallable
                (*(void **)&(this->MaterialModeWatcher).OnValueChangedFunc);
      pcVar7 = *(code **)&(this->MaterialModeWatcher).OnValueChangedFunc;
      plVar29 = *(longlong **)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x28;
      plVar31 = (longlong *)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar31 = plVar29;
      }
      uVar21 = (**(code **)(*plVar31 + 8))();
      (*pcVar7)(uVar21,local_5a0);
    }
    UE::Core::Private::Function::CheckCallable
              (*(void **)&(this->CustomMaterialWatcher).GetValueFunc);
    plVar31 = *(longlong **)&(this->CustomMaterialWatcher).GetValueFunc.field_0x28;
    plVar29 = (longlong *)&(this->CustomMaterialWatcher).GetValueFunc.field_0x10;
    pcVar7 = *(code **)&(this->CustomMaterialWatcher).GetValueFunc;
    plVar30 = plVar29;
    if (plVar31 != (longlong *)0x0) {
      plVar30 = plVar31;
    }
    uVar21 = (**(code **)(*plVar30 + 8))();
    (*pcVar7)(&local_500,uVar21);
    bVar12 = TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>::UEOpEquals<UMaterialInterface,bool>
                       (&local_500,&(this->CustomMaterialWatcher).CachedValue);
    if (!bVar12) {
      UE::Core::Private::Function::CheckCallable
                (*(void **)&(this->CustomMaterialWatcher).GetValueFunc);
      plVar31 = *(longlong **)&(this->CustomMaterialWatcher).GetValueFunc.field_0x28;
      pcVar7 = *(code **)&(this->CustomMaterialWatcher).GetValueFunc;
      if (plVar31 != (longlong *)0x0) {
        plVar29 = plVar31;
      }
      uVar21 = (**(code **)(*plVar29 + 8))(plVar29);
      (*pcVar7)(&local_4f8,uVar21);
      (this->CustomMaterialWatcher).CachedValue.WeakPtr = local_4f8;
      local_4f0 = local_4f8;
      UE::Core::Private::Function::CheckCallable
                (*(void **)&(this->CustomMaterialWatcher).OnValueChangedFunc);
      plVar29 = *(longlong **)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x28;
      pcVar7 = *(code **)&(this->CustomMaterialWatcher).OnValueChangedFunc;
      plVar31 = (longlong *)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar31 = plVar29;
      }
      uVar21 = (**(code **)(*plVar31 + 8))();
      (*pcVar7)(uVar21,&local_4f0);
    }
    TValueWatcher<bool>::CheckAndUpdate(&this->FlatShadingWatcher);
    TValueWatcher<FLinearColor>::CheckAndUpdate(&this->ColorWatcher);
    TValueWatcher<FLinearColor>::CheckAndUpdate(&this->TransparentColorWatcher);
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->OpacityWatcher).GetValueFunc);
    pcVar7 = *(code **)&(this->OpacityWatcher).GetValueFunc;
    plVar29 = (longlong *)&(this->OpacityWatcher).GetValueFunc.field_0x10;
    plVar31 = *(longlong **)&(this->OpacityWatcher).GetValueFunc.field_0x28;
    plVar30 = plVar29;
    if (plVar31 != (longlong *)0x0) {
      plVar30 = plVar31;
    }
    uVar21 = (**(code **)(*plVar30 + 8))();
    dVar45 = (double)(*pcVar7)(uVar21);
    if (dVar45 != (this->OpacityWatcher).CachedValue) {
      UE::Core::Private::Function::CheckCallable(*(void **)&(this->OpacityWatcher).GetValueFunc);
      plVar31 = *(longlong **)&(this->OpacityWatcher).GetValueFunc.field_0x28;
      pcVar7 = *(code **)&(this->OpacityWatcher).GetValueFunc;
      if (plVar31 != (longlong *)0x0) {
        plVar29 = plVar31;
      }
      uVar21 = (**(code **)(*plVar29 + 8))(plVar29);
      local_4e8 = (double)(*pcVar7)(uVar21);
      (this->OpacityWatcher).CachedValue = local_4e8;
      UE::Core::Private::Function::CheckCallable
                (*(void **)&(this->OpacityWatcher).OnValueChangedFunc);
      pcVar7 = *(code **)&(this->OpacityWatcher).OnValueChangedFunc;
      plVar29 = *(longlong **)&(this->OpacityWatcher).OnValueChangedFunc.field_0x28;
      plVar31 = (longlong *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar31 = plVar29;
      }
      uVar21 = (**(code **)(*plVar31 + 8))();
      (*pcVar7)(uVar21,&local_4e8);
    }
    TValueWatcher<bool>::CheckAndUpdate(&this->TwoSidedWatcher);
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->ImageWatcher).GetValueFunc);
    pcVar7 = *(code **)&(this->ImageWatcher).GetValueFunc;
    plVar29 = (longlong *)&(this->ImageWatcher).GetValueFunc.field_0x10;
    plVar31 = *(longlong **)&(this->ImageWatcher).GetValueFunc.field_0x28;
    plVar30 = plVar29;
    if (plVar31 != (longlong *)0x0) {
      plVar30 = plVar31;
    }
    uVar21 = (**(code **)(*plVar30 + 8))();
    pUVar22 = (UTexture2D *)(*pcVar7)(uVar21);
    if (pUVar22 != (this->ImageWatcher).CachedValue) {
      UE::Core::Private::Function::CheckCallable(*(void **)&(this->ImageWatcher).GetValueFunc);
      plVar31 = *(longlong **)&(this->ImageWatcher).GetValueFunc.field_0x28;
      pcVar7 = *(code **)&(this->ImageWatcher).GetValueFunc;
      if (plVar31 != (longlong *)0x0) {
        plVar29 = plVar31;
      }
      uVar21 = (**(code **)(*plVar29 + 8))(plVar29);
      local_4e0 = (UTexture2D *)(*pcVar7)(uVar21);
      (this->ImageWatcher).CachedValue = local_4e0;
      UE::Core::Private::Function::CheckCallable(*(void **)&(this->ImageWatcher).OnValueChangedFunc)
      ;
      pcVar7 = *(code **)&(this->ImageWatcher).OnValueChangedFunc;
      plVar29 = *(longlong **)&(this->ImageWatcher).OnValueChangedFunc.field_0x28;
      plVar31 = (longlong *)&(this->ImageWatcher).OnValueChangedFunc.field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar31 = plVar29;
      }
      uVar21 = (**(code **)(*plVar31 + 8))();
      (*pcVar7)(uVar21,&local_4e0);
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->BrushTypeWatcher).GetValueFunc);
    pcVar7 = *(code **)&(this->BrushTypeWatcher).GetValueFunc;
    plVar29 = (longlong *)&(this->BrushTypeWatcher).GetValueFunc.field_0x10;
    plVar31 = *(longlong **)&(this->BrushTypeWatcher).GetValueFunc.field_0x28;
    plVar30 = plVar29;
    if (plVar31 != (longlong *)0x0) {
      plVar30 = plVar31;
    }
    uVar21 = (**(code **)(*plVar30 + 8))();
    EVar13 = (*pcVar7)(uVar21);
    if (EVar13 != (this->BrushTypeWatcher).CachedValue) {
      UE::Core::Private::Function::CheckCallable(*(void **)&(this->BrushTypeWatcher).GetValueFunc);
      plVar31 = *(longlong **)&(this->BrushTypeWatcher).GetValueFunc.field_0x28;
      pcVar7 = *(code **)&(this->BrushTypeWatcher).GetValueFunc;
      if (plVar31 != (longlong *)0x0) {
        plVar29 = plVar31;
      }
      uVar21 = (**(code **)(*plVar29 + 8))(plVar29);
      local_5d8[0] = (*pcVar7)(uVar21);
      (this->BrushTypeWatcher).CachedValue = local_5d8[0];
      UE::Core::Private::Function::CheckCallable
                (*(void **)&(this->BrushTypeWatcher).OnValueChangedFunc);
      pcVar7 = *(code **)&(this->BrushTypeWatcher).OnValueChangedFunc;
      plVar29 = *(longlong **)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x28;
      plVar31 = (longlong *)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar31 = plVar29;
      }
      uVar21 = (**(code **)(*plVar31 + 8))();
      (*pcVar7)(uVar21,local_5d8);
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->GizmoPositionWatcher).GetValueFunc)
    ;
    pcVar7 = *(code **)&(this->GizmoPositionWatcher).GetValueFunc;
    plVar29 = (longlong *)&(this->GizmoPositionWatcher).GetValueFunc.field_0x10;
    plVar31 = *(longlong **)&(this->GizmoPositionWatcher).GetValueFunc.field_0x28;
    plVar30 = plVar29;
    if (plVar31 != (longlong *)0x0) {
      plVar30 = plVar31;
    }
    uVar21 = (**(code **)(*plVar30 + 8))();
    (*pcVar7)(&local_420,uVar21);
    if (((local_420 != (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.X) ||
        (local_418 != (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.Y)) ||
       (local_410 != (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.Z)) {
      UE::Core::Private::Function::CheckCallable
                (*(void **)&(this->GizmoPositionWatcher).GetValueFunc);
      plVar31 = *(longlong **)&(this->GizmoPositionWatcher).GetValueFunc.field_0x28;
      pcVar7 = *(code **)&(this->GizmoPositionWatcher).GetValueFunc;
      if (plVar31 != (longlong *)0x0) {
        plVar29 = plVar31;
      }
      uVar21 = (**(code **)(*plVar29 + 8))(plVar29);
      (*pcVar7)(&local_360,uVar21);
      (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.X = local_360;
      (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.Y = dStack_358;
      (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.Z = local_350;
      local_348 = local_360;
      dStack_340 = dStack_358;
      local_338 = local_350;
      UE::Core::Private::Function::CheckCallable
                (*(void **)&(this->GizmoPositionWatcher).OnValueChangedFunc);
      pcVar7 = *(code **)&(this->GizmoPositionWatcher).OnValueChangedFunc;
      plVar29 = *(longlong **)&(this->GizmoPositionWatcher).OnValueChangedFunc.field_0x28;
      plVar31 = (longlong *)&(this->GizmoPositionWatcher).OnValueChangedFunc.field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar31 = plVar29;
      }
      uVar21 = (**(code **)(*plVar31 + 8))();
      (*pcVar7)(uVar21,&local_348);
    }
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->GizmoRotationWatcher).GetValueFunc)
    ;
    pcVar7 = *(code **)&(this->GizmoRotationWatcher).GetValueFunc;
    plVar29 = (longlong *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x10;
    plVar31 = *(longlong **)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28;
    plVar30 = plVar29;
    if (plVar31 != (longlong *)0x0) {
      plVar30 = plVar31;
    }
    uVar18 = (**(code **)(*plVar30 + 8))();
    uVar19 = (*pcVar7)(&local_308);
    auVar48._8_8_ = -(ulonglong)((this->GizmoRotationWatcher).CachedValue.W != dStack_2f0);
    auVar48._0_8_ = -(ulonglong)((this->GizmoRotationWatcher).CachedValue.Z != local_2f8);
    uVar16 = movmskpd(uVar18,auVar48);
    auVar46._8_8_ = -(ulonglong)(dStack_300 != (this->GizmoRotationWatcher).CachedValue.Y);
    auVar46._0_8_ = -(ulonglong)(local_308 != (this->GizmoRotationWatcher).CachedValue.X);
    iVar20 = movmskpd(uVar19,auVar46);
    if ((uVar16 & 0x3fffffff) != 0 || iVar20 != 0) {
      UE::Core::Private::Function::CheckCallable
                (*(void **)&(this->GizmoRotationWatcher).GetValueFunc);
      plVar31 = *(longlong **)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28;
      pcVar7 = *(code **)&(this->GizmoRotationWatcher).GetValueFunc;
      if (plVar31 != (longlong *)0x0) {
        plVar29 = plVar31;
      }
      uVar21 = (**(code **)(*plVar29 + 8))(plVar29);
      (*pcVar7)(local_2e8,uVar21);
      (this->GizmoRotationWatcher).CachedValue.X = (double)local_2e8._0_8_;
      (this->GizmoRotationWatcher).CachedValue.Y = (double)local_2e8._8_8_;
      (this->GizmoRotationWatcher).CachedValue.Z = local_2d8;
      (this->GizmoRotationWatcher).CachedValue.W = dStack_2d0;
      local_328 = local_2e8;
      local_318 = local_2d8;
      dStack_310 = dStack_2d0;
      UE::Core::Private::Function::CheckCallable
                (*(void **)&(this->GizmoRotationWatcher).OnValueChangedFunc);
      pcVar7 = *(code **)&(this->GizmoRotationWatcher).OnValueChangedFunc;
      plVar29 = *(longlong **)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x28;
      plVar31 = (longlong *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x10;
      if (plVar29 != (longlong *)0x0) {
        plVar31 = plVar29;
      }
      uVar21 = (**(code **)(*plVar31 + 8))();
      (*pcVar7)(uVar21);
    }
    uVar36 = 0;
    if ((((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushType == FixedPlane) &&
       (((this->GizmoProperties).field0_0x0.DebugPtr)->bShowGizmo != false)) {
      if ((this->PlaneTransformGizmo).field0_0x0.DebugPtr == (UCombinedTransformGizmo *)0x0) {
        local_550.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_550.Data.ArrayNum = 0;
        local_550.Data.ArrayMax = 0;
        pUVar23 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
        pUVar24 = UE::TransformGizmoUtil::CreateCustomTransformGizmo
                            (pUVar23,StandardTranslateRotate,this,&local_550);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar24 != (UCombinedTransformGizmo *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar24);
        }
        (this->PlaneTransformGizmo).field0_0x0.DebugPtr = pUVar24;
        if (local_550.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_550.Data.AllocatorInstance.Data);
          pUVar24 = (this->PlaneTransformGizmo).field0_0x0.DebugPtr;
        }
        pUVar24->bUseContextCoordinateSystem = false;
        ((this->PlaneTransformGizmo).field0_0x0.DebugPtr)->CurrentCoordinateSystem = Local;
        pUVar24 = (this->PlaneTransformGizmo).field0_0x0.DebugPtr;
        pcVar7 = *(code **)(*(longlong *)pUVar24 + 0x330);
        lVar25 = (**(code **)(this->_padding_ + 0x2d8))(this);
        uVar34 = lVar25 + 0x28;
        if (lVar25 == 0) {
          uVar34 = uVar36;
        }
        (*pcVar7)(pUVar24,(this->PlaneTransformProxy).field0_0x0.DebugPtr,uVar34);
        pUVar8 = (this->GizmoProperties).field0_0x0.DebugPtr;
        local_e8.Rotation.ZW.m128d_f64[0] = (pUVar8->Rotation).Z;
        local_e8.Rotation.ZW.m128d_f64[1] = (pUVar8->Rotation).W;
        local_e8.Rotation.XY.m128d_f64[0] = (pUVar8->Rotation).X;
        local_e8.Rotation.XY.m128d_f64[1] = (pUVar8->Rotation).Y;
        local_e8.Translation.XY.m128d_f64[0] = (pUVar8->Position).field0_0x0._s_0.X;
        local_e8.Translation.XY.m128d_f64[1] = (pUVar8->Position).field0_0x0._s_0.Y;
        local_e8.Translation.ZW.m128d_f64[0] = (pUVar8->Position).field0_0x0._s_0.Z;
        local_e8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
        local_e8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
        local_e8.Translation.ZW.m128d_f64[1] = 0.0;
        local_e8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
        local_e8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
        UCombinedTransformGizmo::ReinitializeGizmoTransform
                  ((this->PlaneTransformGizmo).field0_0x0.DebugPtr,&local_e8,true);
      }
    }
    else if ((this->PlaneTransformGizmo).field0_0x0.DebugPtr != (UCombinedTransformGizmo *)0x0) {
      pUVar23 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
      pUVar26 = UInteractiveToolManager::GetPairedGizmoManager(pUVar23);
      (**(code **)(pUVar26->_padding_ + 0x2d8))(pUVar26);
      (this->PlaneTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
    }
    ((this->GizmoProperties).field0_0x0.DebugPtr)->bPropertySetEnabled =
         ((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushType == FixedPlane;
    uVar16 = 0;
    if (this->PendingWorkPlaneUpdate != NoUpdatePending) {
      local_540._s_0.X = (double)this->_padding_;
      local_540._s_0.Y = (double)this->_padding_;
      local_540._s_0.Z = (double)this->_padding_;
      dStack_528 = (double)this->_padding_;
      local_520 = (double)this->_padding_;
      dStack_518 = (double)this->_padding_;
      memset(local_238,0,0x100);
      uStack_443 = 0;
      local_460 = 0;
      uStack_458 = 0;
      uStack_441 = 0;
      local_180.ObjectIndex = 0;
      local_180.ObjectSerialNumber = 0;
      FStack_178.ObjectIndex = 0;
      FStack_178.ObjectSerialNumber = 0;
      local_450 = 0;
      uStack_448 = 0xffffffff;
      uStack_444 = 0;
      uStack_168._0_4_ = -1;
      uStack_168._4_1_ = Invalid;
      uStack_168._5_3_ = 0;
      local_238._4_4_ = 1.0;
      local_194 = -1;
      local_170 = (IActorInstanceManagerInterface *)0x0;
      bVar12 = ToolSceneQueriesUtil::FindNearestVisibleObjectHit
                         ((UInteractiveTool *)this,(FHitResult *)local_238,
                          (TRay<double> *)&local_540._s_0,
                          (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0,
                          (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0);
      dVar10 = __real_3ff0000000000000;
      dVar45 = *(double *)&(this->CurTargetTransform).Scale3D.field0_0x0;
      local_408._s_0.X = dStack_528;
      local_408._s_0.Y = local_520;
      local_408._s_0.Z = dStack_518;
      if (__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar45 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar45,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        dVar45 = __real_3ff0000000000000 / dVar45;
      }
      else {
        dVar45 = 0.0;
      }
      dVar1 = *(double *)((longlong)&(this->CurTargetTransform).Scale3D.field0_0x0 + 8);
      if (__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        dVar1 = __real_3ff0000000000000 / dVar1;
      }
      else {
        dVar1 = 0.0;
      }
      dVar2 = *(double *)((longlong)&(this->CurTargetTransform).Scale3D.field0_0x0 + 0x10);
      if (__real_3e45798ee2308c3a <
          (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        dVar2 = __real_3ff0000000000000 / dVar2;
      }
      else {
        dVar2 = 0.0;
      }
      pTVar27 = UE::Geometry::TQuaternion<double>::InverseMultiply
                          (&(this->CurTargetTransform).Rotation,&local_138,
                           (TVector<double> *)&local_408._s_0);
      dVar3 = (pTVar27->field0_0x0)._s_0.X;
      dVar4 = (pTVar27->field0_0x0)._s_0.Y;
      dVar5 = (pTVar27->field0_0x0)._s_0.Z;
      local_3f0._s_0.X = local_540._s_0.X;
      local_3f0._s_0.Y = local_540._s_0.Y;
      local_3f0._s_0.Z = local_540._s_0.Z;
      pTVar27 = UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
                          (&this->CurTargetTransform,local_120,(TVector<double> *)&local_3f0._s_0);
      local_580._s_0.X = (pTVar27->field0_0x0)._s_0.X;
      local_580._s_0.Y = (pTVar27->field0_0x0)._s_0.Y;
      local_580._s_0.Z = (pTVar27->field0_0x0)._s_0.Z;
      local_568._s_0.X = dVar45 * dVar3;
      local_568._s_0.Y = dVar1 * dVar4;
      local_568._s_0.Z = dVar2 * dVar5;
      UE::Math::TVector<double>::Normalize
                ((TVector<double> *)&local_568._s_0,__real_3e45798ee0000000);
      auVar47._0_8_ = local_568._s_0.Y * local_568._s_0.Y;
      auVar47._8_8_ = 0;
      auVar49._0_8_ =
           local_568._s_0.X * local_568._s_0.X + auVar47._0_8_ + local_568._s_0.Z * local_568._s_0.Z
      ;
      auVar49._8_8_ = 0;
      auVar48 = sqrtpd(auVar47,auVar49);
      if (auVar48._0_8_ <= 0.0) {
        local_568._s_0.X = 0.0;
        local_568._s_0.Y = 0.0;
        local_568._s_0.Z = 0.0;
      }
      else {
        dVar10 = dVar10 / auVar48._0_8_;
        local_568._s_0.X = local_568._s_0.X * dVar10;
        local_568._s_0.Y = local_568._s_0.Y * dVar10;
        local_568._s_0.Z = local_568._s_0.Z * dVar10;
      }
      iVar20 = FindHitSculptMeshTriangle(this,(TRay<double> *)&local_580._s_0);
      if ((!bVar12) ||
         ((iVar20 != -1 &&
          (local_3a8.field0_0x0._s_0.Z = (this->LastBrushPosWorld).field0_0x0._s_0.Z,
          ((this->LastBrushPosWorld).field0_0x0._s_0.Y - local_540._s_0.Y) * local_520 +
          ((this->LastBrushPosWorld).field0_0x0._s_0.X - local_540._s_0.X) * dStack_528 +
          (local_3a8.field0_0x0._s_0.Z - local_540._s_0.Z) * dStack_518 <=
          (local_208 - local_540._s_0.Y) * local_520 +
          ((double)local_238._40_8_ - local_540._s_0.X) * dStack_528 +
          (local_200 - local_540._s_0.Z) * dStack_518)))) {
        local_3d8._s_0.X = (this->LastBrushPosNormalWorld).field0_0x0._s_0.X;
        local_3d8._s_0.Y = (this->LastBrushPosNormalWorld).field0_0x0._s_0.Y;
        pTVar35 = &local_3d8;
        local_3d8._s_0.Z = (this->LastBrushPosNormalWorld).field0_0x0._s_0.Z;
        pTVar32 = &local_3c0;
        local_3c0._s_0.X = (this->LastBrushPosWorld).field0_0x0._s_0.X;
        local_3c0._s_0.Y = (this->LastBrushPosWorld).field0_0x0._s_0.Y;
        local_3c0._s_0.Z = (this->LastBrushPosWorld).field0_0x0._s_0.Z;
      }
      else {
        pTVar35 = (TVector<double>_u_0 *)(local_238 + 0x58);
        pTVar32 = (TVector<double>_u_0 *)(local_238 + 0x28);
      }
      SetFixedSculptPlaneFromWorldPos
                (this,(TVector<double> *)&pTVar32->_s_0,(TVector<double> *)&pTVar35->_s_0,
                 this->PendingWorkPlaneUpdate);
      this->PendingWorkPlaneUpdate = NoUpdatePending;
    }
    if ((this->bCachedFreezeTarget != ((this->SculptProperties).field0_0x0.DebugPtr)->bFreezeTarget)
       && (UpdateTarget(this), *(longlong *)&this->PendingTargetUpdate != 0)) {
      do {
        do {
        } while (*(longlong *)&this->PendingTargetUpdate == 0);
        plVar29 = *(longlong **)(*(longlong *)&this->PendingTargetUpdate + 0x60);
        cVar14 = (**(code **)(*plVar29 + 0x20))(plVar29,0xffffffff,0);
      } while (cVar14 == '\0');
    }
    bVar12 = false;
    local_4c8 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))
                          ();
    local_5c0 = (undefined1  [8])0x0;
    local_5b8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_4d0 = (((this->DynamicMeshComponent).field0_0x0.DebugPtr)->Octree).Ptr;
    local_5b0 = (undefined1  [8])0x0;
    local_5a8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    auVar33 = (undefined1  [8])uVar36;
    if (this->bStampPending != false) {
      if ((this->ActiveRemesher).Object == (FPersistentStampRemesher *)0x0) {
        local_2c8._0_8_ = 0;
        local_2c8._40_8_ = 0;
        local_4d8.__this = this;
        pTVar28 = Async<_UDynamicMeshSculptTool::OnTick_::__l22::<lambda_1>_>
                            ((TFuture<void> *)local_370,DynamicSculptToolAsyncExecTarget,&local_4d8,
                             &local_2c8);
        if ((TFuture<void> *)local_5b0 != pTVar28) {
          local_5b0 = *(undefined1 (*) [8])pTVar28;
          *(undefined8 *)pTVar28 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&local_5a8,(FSharedReferencer<1> *)&pTVar28->field_0x8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)local_370._8_8_);
      }
      UpdateBrushPosition(this,&this->PendingStampRay);
      UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
                (&this->CurTargetTransform,&local_3a8,&this->LastBrushPosWorld);
      UpdateROI(this,&local_3a8);
      local_440.InitializeRemesher = (TFuture<void> *)local_5b0;
      local_298._0_8_ = 0;
      local_298._40_8_ = 0;
      local_440.__this = this;
      pTVar28 = Async<_UDynamicMeshSculptTool::OnTick_::__l19::<lambda_2>_>
                          ((TFuture<void> *)local_390,DynamicSculptToolAsyncExecTarget,&local_440,
                           &local_298);
      if ((TFuture<void> *)local_5c0 != pTVar28) {
        local_5c0 = *(undefined1 (*) [8])pTVar28;
        *(undefined8 *)pTVar28 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_5b8,(FSharedReferencer<1> *)&pTVar28->field_0x8);
        auVar33 = local_5c0;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_390._8_8_);
      ApplyStamp(this,&this->PendingStampRay);
      bVar12 = true;
      this->bNormalUpdatePending = true;
      this->bStampPending = this->bInDrag != false;
      if (this->bRemeshPending != false) {
        if ((this->bInDrag != true) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("bInDrag == true",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
                                ,0x6dd,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_5b0 != (undefined1  [8])0x0) {
          do {
            cVar14 = (**(code **)(**(longlong **)((longlong)local_5b0 + 0x60) + 0x20))
                               (*(longlong **)((longlong)local_5b0 + 0x60),0xffffffff,0);
          } while (cVar14 == '\0');
        }
        if (auVar33 != (undefined1  [8])0x0) {
          do {
            cVar14 = (**(code **)(**(longlong **)((longlong)auVar33 + 0x60) + 0x20))
                               (*(longlong **)((longlong)auVar33 + 0x60),0xffffffff,0);
          } while (cVar14 == '\0');
        }
        if ((this->ActiveRemesher).Object == (FPersistentStampRemesher *)0x0) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("false",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
                              ,0x6eb,L"");
          if (bVar12) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          RemeshROIPass(this);
        }
        else {
          RemeshROIPass_ActiveRemesher(this,true);
        }
        local_4b0 = &(this->RemeshFinalTriangleROI).Elements.field_0x10;
        local_5c8 = CONCAT44(local_5c8._4_4_,1);
        uVar39 = *(uint *)&(this->RemeshFinalTriangleROI).Elements.field_0x28;
        local_4c0 = &this->RemeshFinalTriangleROI;
        uStack_4a4 = uVar16;
        local_4a0 = uVar16;
        if (uVar39 != 0) {
          puVar38 = *(uint **)&(this->RemeshFinalTriangleROI).Elements.field_0x20;
          if (puVar38 == (uint *)0x0) {
            puVar38 = (uint *)local_4b0;
          }
          uVar6 = *puVar38;
          uVar34 = uVar36;
          local_4a0 = 0;
          uVar16 = 0;
          while (uVar6 == 0) {
            iVar20 = (int)uVar36;
            local_4a0 = (int)uVar34 + 0x20;
            uVar34 = (ulonglong)local_4a0;
            uVar16 = iVar20 + 1;
            uVar36 = (ulonglong)uVar16;
            uStack_4a4 = uVar39;
            if ((int)((uVar39 - 1) + ((int)(uVar39 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
            goto LAB_14cc6aa72;
            uVar6 = puVar38[(longlong)iVar20 + 1];
          }
          local_5c8 = (ulonglong)(-uVar6 & uVar6);
          uVar36 = local_5c8 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar36 != 0) {
            for (; uVar36 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          local_510 = (int)lVar25;
          uStack_4a4 = local_510 + -1 + local_4a0;
          if ((int)uVar39 < (int)uStack_4a4) {
            uStack_4a4 = uVar39;
          }
        }
LAB_14cc6aa72:
        uStack_4b4 = (undefined4)local_5c8;
        uStack_49c = local_ec;
        iStack_498 = *(int *)&(this->RemeshFinalTriangleROI).Elements.field_0x8 -
                     *(int *)&(this->RemeshFinalTriangleROI).Elements.field_0x34;
        uVar39 = *(uint *)&(this->RemeshFinalTriangleROI).Elements.field_0x28;
        TStack_488._padding_ = CONCAT44(uStack_4b4,uVar16);
        uStack_4a8 = 0xffffffff;
        TStack_488.CurrentBitIndex = uStack_4a4;
        TStack_488.UnvisitedBitMask = 0xffffffff;
        uVar40 = uVar39 & 0xffffffe0;
        iVar20 = (int)uVar39 >> 5;
        TStack_488._28_4_ = local_ec;
        TStack_488.BaseBitIndex = local_4a0;
        uStack_468 = CONCAT44(uStack_494,iStack_498);
        local_5c8 = CONCAT44(local_5c8._4_4_,uVar39);
        uVar6 = uVar39;
        uStack_4b8 = uVar16;
        local_490 = local_4c0;
        TStack_488.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_4b0;
        if ((int)uVar39 < 0) {
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L"");
          if (bVar12) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar6 = (uint)local_5c8;
        }
        uVar16 = *(uint *)&(this->RemeshFinalTriangleROI).Elements.field_0x28;
        if (uVar6 != uVar16) {
          puVar9 = *(undefined1 **)&(this->RemeshFinalTriangleROI).Elements.field_0x20;
          local_5c8 = CONCAT44(local_5c8._4_4_,uVar16);
          puVar37 = &(this->RemeshFinalTriangleROI).Elements.field_0x10;
          if (puVar9 != (undefined1 *)0x0) {
            puVar37 = puVar9;
          }
          uVar39 = -1 << ((byte)uVar39 & 0x1f) & *(uint *)(puVar37 + (longlong)iVar20 * 4);
          while (uVar39 == 0) {
            lVar25 = (longlong)iVar20;
            uVar40 = uVar40 + 0x20;
            iVar20 = iVar20 + 1;
            if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
            goto LAB_14cc6abb3;
            uVar39 = *(uint *)(puVar37 + lVar25 * 4 + 4);
          }
          uVar36 = (ulonglong)(-uVar39 & uVar39) * 2 + 1;
          lVar25 = 0x3f;
          if (uVar36 != 0) {
            for (; uVar36 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          local_50c = (int)lVar25;
          uVar40 = local_50c + -1 + uVar40;
          if ((int)uVar16 < (int)uVar40) {
            uVar40 = uVar16;
          }
          local_5c8 = CONCAT44(local_5c8._4_4_,uVar40);
        }
LAB_14cc6abb3:
        iVar20 = (uint)local_5c8;
        while( true ) {
          pTVar11 = local_490;
          if (*(int *)&(local_490->Elements).field_0x8 - *(int *)&(local_490->Elements).field_0x34
              != (int)uStack_468) {
            local_5d0[0] = 0;
            `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_5d0);
          }
          if (((TStack_488.CurrentBitIndex == iVar20) &&
              (TStack_488.Array ==
               (TBitArray<FDefaultBitArrayAllocator> *)
               &(this->RemeshFinalTriangleROI).Elements.field_0x10)) &&
             (pTVar11 == &this->RemeshFinalTriangleROI)) break;
          local_598[0] = *(undefined4 *)
                          (*(longlong *)&pTVar11->Elements +
                          (longlong)TStack_488.CurrentBitIndex * 0xc);
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&this->TriangleROI,local_508,(bool *)local_598);
          TStack_488.UnvisitedBitMask = TStack_488.UnvisitedBitMask & ~TStack_488._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_488);
        }
        bVar12 = true;
        this->bRemeshPending = false;
        this->bNormalUpdatePending = true;
        this->bHaveRemeshed = true;
      }
    }
    FVar41.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((this->bRemeshPending != false) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("bRemeshPending == false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
                            ,0x6fe,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_588.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar42 = FVar41.ReferenceController;
    if (bVar12) {
      local_430.Octree = &local_4d0;
      local_268._0_8_ = 0;
      local_268._40_8_ = 0;
      local_430.__this = this;
      pTVar28 = Async<_UDynamicMeshSculptTool::OnTick_::__l58::<lambda_3>_>
                          ((TFuture<void> *)local_380,DynamicSculptToolAsyncExecTarget,&local_430,
                           &local_268);
      if ((TFuture<void> *)&local_590 != pTVar28) {
        local_590 = *(TReferenceControllerBase<1> **)pTVar28;
        *(undefined8 *)pTVar28 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&local_588,(FSharedReferencer<1> *)&pTVar28->field_0x8);
        FVar41.ReferenceController = local_588.ReferenceController;
        pTVar42 = local_590;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_380._8_8_);
    }
    if (this->bNormalUpdatePending != false) {
      bVar15 = -1 < CpuChannel->Enabled;
      if (bVar15) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1809,"DynamicMeshSculptTool_UpdateNormals",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
                   ,0x711);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1809);
      }
      lVar25 = *(longlong *)(local_4c8 + 0x208);
      if (((lVar25 == 0) || (*(int *)(lVar25 + 0x38) < 1)) || (**(longlong **)(lVar25 + 0x30) == 0))
      {
        RecalculateNormals_PerVertex(this,&this->TriangleROI);
      }
      else {
        RecalculateNormals_Overlay(this,&this->TriangleROI);
      }
      this->bNormalUpdatePending = false;
      bVar12 = true;
      if (bVar15) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
      do {
        cVar14 = (**(code **)(*(longlong *)pTVar42[6]._padding_ + 0x20))
                           ((longlong *)pTVar42[6]._padding_,0xffffffff,0);
      } while (cVar14 == '\0');
    }
    if (this->bTargetDirty != false) {
      UpdateTarget(this);
      this->bTargetDirty = false;
    }
    if (bVar12) {
      bVar12 = -1 < CpuChannel->Enabled;
      if (bVar12) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1836,"DynamicMeshSculptTool_UpdateRenderMesh",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
                   ,0x72c);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1836);
      }
      (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb50))();
      plVar29 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*plVar29 + 0x368))(plVar29);
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    if (local_5b0 != (undefined1  [8])0x0) {
      do {
        cVar14 = (**(code **)(**(longlong **)((longlong)local_5b0 + 0x60) + 0x20))
                           (*(longlong **)((longlong)local_5b0 + 0x60),0xffffffff,0);
      } while (cVar14 == '\0');
    }
    if (auVar33 != (undefined1  [8])0x0) {
      do {
        cVar14 = (**(code **)(**(longlong **)((longlong)auVar33 + 0x60) + 0x20))
                           (*(longlong **)((longlong)auVar33 + 0x60),0xffffffff,0);
      } while (cVar14 == '\0');
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar41.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5b8.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_5a8.ReferenceController);
  }
  if (bVar43) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnUpdateDrag @ 14cc6bab0

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
UDynamicMeshSculptTool::OnUpdateDrag(UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  if (this->bInDrag != false) {
    dVar1 = (param_1->Origin).field0_0x0._s_0.Y;
    (this->PendingStampRay).Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
    (this->PendingStampRay).Origin.field0_0x0._s_0.Y = dVar1;
    dVar1 = (param_1->Direction).field0_0x0._s_0.X;
    (this->PendingStampRay).Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
    (this->PendingStampRay).Direction.field0_0x0._s_0.X = dVar1;
    dVar1 = (param_1->Direction).field0_0x0._s_0.Y;
    dVar2 = (param_1->Direction).field0_0x0._s_0.Z;
    this->bStampPending = true;
    (this->PendingStampRay).Direction.field0_0x0._s_0.Y = dVar1;
    (this->PendingStampRay).Direction.field0_0x0._s_0.Z = dVar2;
  }
  return;
}

// OnUpdateHover @ 14cc6c240

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
UDynamicMeshSculptTool::OnUpdateHover(UDynamicMeshSculptTool *this,FInputDeviceRay *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  double dVar5;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60;
  TVector<double>_u_0 local_48 [2];
  
  cVar4 = (this->GizmoPositionWatcher).OnValueChangedFunc.field_0x10;
  dVar1 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)(param_1->WorldRay).Origin.field0_0x0._s_0.X;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  this->_padding_ = (longlong)(param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  this->_padding_ = (longlong)dVar1;
  dVar1 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  this->_padding_ = (longlong)(param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  this->_padding_ = (longlong)dVar1;
  *(undefined1 *)((longlong)&(this->VertexROI).ArrayMax + 1) =
       *(undefined1 *)(this->_padding_ + 0xb1);
  if (cVar4 != '\0') {
    local_78._s_0.X = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
    local_78._s_0.Y = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
    local_78._s_0.Z = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
    local_60._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
    local_60._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
    local_60._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
    UE::Geometry::TFrame3<double>::RayPlaneIntersection
              ((TFrame3<double> *)&(this->GizmoPositionWatcher).OnValueChangedFunc.field_0x18,
               (TVector<double> *)&local_60._s_0,(TVector<double> *)&local_78._s_0,2,
               (TVector<double> *)&local_48[0]._s_0);
    (this->BrushRelativeSizeRange).Min = (double)local_48[0]._0_8_;
    (this->BrushRelativeSizeRange).Max = (double)local_48[0]._8_8_;
    this->CurrentBrushRadius = (double)local_48[0]._16_8_;
    dVar1 = (this->GizmoRotationWatcher).CachedValue.Y;
    dVar2 = (this->GizmoRotationWatcher).CachedValue.X;
    dVar5 = (this->GizmoRotationWatcher).CachedValue.Z;
    dVar3 = (this->GizmoRotationWatcher).CachedValue.W;
    dVar5 = dVar5 + dVar5;
    *(double *)&this->bEnableRemeshing = dVar3 * (dVar1 + dVar1) + dVar5 * dVar2;
    this->InitialEdgeLength = dVar5 * dVar1 - dVar3 * (dVar2 + dVar2);
    (this->ActiveRemesher).Object =
         (FPersistentStampRemesher *)
         (__real_3ff0000000000000 - ((dVar1 + dVar1) * dVar1 + (dVar2 + dVar2) * dVar2));
    return true;
  }
  UpdateBrushPosition((UDynamicMeshSculptTool *)&this[-1].RemeshRemovedTriangles.Elements.field_0x10
                      ,&param_1->WorldRay);
  return true;
}

// PlaneTransformChanged @ 14cc6c4a0

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
UDynamicMeshSculptTool::PlaneTransformChanged
          (UDynamicMeshSculptTool *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  UFixedPlaneBrushProperties *pUVar1;
  code *pcVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  longlong *plVar8;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  pUVar1 = (this->GizmoProperties).field0_0x0.DebugPtr;
  dVar4 = (param_2->Rotation).XY.m128d_f64[1];
  dVar5 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar6 = (param_2->Rotation).ZW.m128d_f64[1];
  (pUVar1->Rotation).X = (param_2->Rotation).XY.m128d_f64[0];
  (pUVar1->Rotation).Y = dVar4;
  (pUVar1->Rotation).Z = dVar5;
  (pUVar1->Rotation).W = dVar6;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GizmoRotationWatcher).GetValueFunc);
  pcVar2 = *(code **)&(this->GizmoRotationWatcher).GetValueFunc;
  plVar3 = *(longlong **)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28;
  plVar8 = (longlong *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar8 = plVar3;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  (*pcVar2)(&local_28,uVar7);
  (this->GizmoRotationWatcher).CachedValue.X = local_28;
  (this->GizmoRotationWatcher).CachedValue.Y = dStack_20;
  dVar4 = (param_2->Translation).XY.m128d_f64[0];
  dVar5 = (param_2->Translation).XY.m128d_f64[1];
  (this->GizmoRotationWatcher).CachedValue.Z = local_18;
  (this->GizmoRotationWatcher).CachedValue.W = dStack_10;
  pUVar1 = (this->GizmoProperties).field0_0x0.DebugPtr;
  (pUVar1->Position).field0_0x0._s_0.X = dVar4;
  (pUVar1->Position).field0_0x0._s_0.Y = dVar5;
  (pUVar1->Position).field0_0x0._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GizmoPositionWatcher).GetValueFunc);
  pcVar2 = *(code **)&(this->GizmoPositionWatcher).GetValueFunc;
  plVar3 = *(longlong **)&(this->GizmoPositionWatcher).GetValueFunc.field_0x28;
  plVar8 = (longlong *)&(this->GizmoPositionWatcher).GetValueFunc.field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar8 = plVar3;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  (*pcVar2)(&local_28,uVar7);
  (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.X = local_28;
  (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.Y = dStack_20;
  (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.Z = local_18;
  return;
}

// PrecomputeRemeshInfo @ 14cc6c600

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::PrecomputeRemeshInfo(UDynamicMeshSculptTool *this)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  TDynamicMeshOverlay<float,2> *pTVar12;
  TDynamicMeshOverlay<float,2> *pTVar13;
  uint uVar14;
  TDynamicMeshOverlay<float,3> *this_00;
  
  lVar10 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
  this->bHaveMeshBoundaries = false;
  this_00 = (TDynamicMeshOverlay<float,3> *)0x0;
  uVar14 = *(int *)(lVar10 + 0x1d4) + *(int *)(lVar10 + 0x1d0) * 0x200;
  pTVar12 = (TDynamicMeshOverlay<float,2> *)this_00;
  if ((uVar14 != 0) &&
     (puVar2 = *(undefined8 **)(lVar10 + 0x1d8), pTVar12 = (TDynamicMeshOverlay<float,2> *)0x0,
     0xfffd < (ushort)(*(short *)*puVar2 - 1U))) {
    pTVar12 = (TDynamicMeshOverlay<float,2> *)&DAT_00000001;
    uVar11 = 1;
    if ((int)uVar14 < 2) goto LAB_14cc6c6b9;
    do {
      lVar1 = (ulonglong)((uint)pTVar12 & 0x1ff) * 2;
      if ((*(short *)(lVar1 + puVar2[(ulonglong)pTVar12 >> 9]) != 0) &&
         (*(short *)(lVar1 + puVar2[(ulonglong)pTVar12 >> 9]) != -1)) break;
      uVar11 = (uint)pTVar12 + 1;
      pTVar12 = (TDynamicMeshOverlay<float,2> *)(ulonglong)uVar11;
    } while ((int)uVar11 < (int)uVar14);
  }
  uVar11 = (uint)pTVar12;
LAB_14cc6c6b9:
  if (uVar11 != uVar14) {
LAB_14cc6c6c2:
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(lVar10 + 0x1c0) + ((ulonglong)pTVar12 >> 9) * 8) +
                   0xc + (ulonglong)((uint)pTVar12 & 0x1ff) * 0x10) == -1) {
        this->bHaveMeshBoundaries = true;
        break;
      }
      uVar11 = (uint)pTVar12 + 1;
      pTVar12 = (TDynamicMeshOverlay<float,2> *)(ulonglong)uVar11;
      if ((int)uVar11 < (int)uVar14) {
        do {
          lVar1 = ((ulonglong)pTVar12 >> 9) * 8;
          lVar5 = (ulonglong)((uint)pTVar12 & 0x1ff) * 2;
          if ((*(short *)(lVar5 + *(longlong *)(*(longlong *)(lVar10 + 0x1d8) + lVar1)) != 0) &&
             (*(short *)(lVar5 + *(longlong *)(lVar1 + *(longlong *)(lVar10 + 0x1d8))) != -1))
          goto LAB_14cc6c6c2;
          uVar11 = (uint)pTVar12 + 1;
          pTVar12 = (TDynamicMeshOverlay<float,2> *)(ulonglong)uVar11;
        } while ((int)uVar11 < (int)uVar14);
      }
    } while (uVar11 != uVar14);
  }
  this->bHaveUVSeams = false;
  this->bHaveNormalSeams = false;
  plVar3 = *(longlong **)(lVar10 + 0x208);
  if (plVar3 != (longlong *)0x0) {
    iVar8 = (**(code **)(*plVar3 + 0xa8))(plVar3);
    pTVar12 = (TDynamicMeshOverlay<float,2> *)this_00;
    pTVar13 = (TDynamicMeshOverlay<float,2> *)this_00;
    if (0 < iVar8) {
      do {
        iVar8 = (int)pTVar12;
        if (this->bHaveUVSeams == false) {
          pTVar12 = (TDynamicMeshOverlay<float,2> *)this_00;
          if ((iVar8 < (int)plVar3[5]) && (-1 < iVar8)) {
            if ((iVar8 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pTVar12 = *(TDynamicMeshOverlay<float,2> **)((longlong)&pTVar13->ParentMesh + plVar3[4])
            ;
          }
          bVar7 = UE::Geometry::TDynamicMeshOverlay<float,2>::HasInteriorSeamEdges(pTVar12);
          bVar6 = false;
          if (bVar7) goto LAB_14cc6c7da;
        }
        else {
LAB_14cc6c7da:
          bVar6 = true;
        }
        this->bHaveUVSeams = bVar6;
        iVar9 = (**(code **)(*plVar3 + 0xa8))(plVar3);
        pTVar12 = (TDynamicMeshOverlay<float,2> *)(ulonglong)(iVar8 + 1U);
        pTVar13 = (TDynamicMeshOverlay<float,2> *)&pTVar13->ElementsRefCounts;
      } while ((int)(iVar8 + 1U) < iVar9);
    }
    if (0 < (int)plVar3[7]) {
      this_00 = *(TDynamicMeshOverlay<float,3> **)plVar3[6];
    }
    bVar6 = UE::Geometry::TDynamicMeshOverlay<float,3>::HasInteriorSeamEdges(this_00);
    this->bHaveNormalSeams = bVar6;
  }
  return;
}

// PrecomputeRemesherROI @ 14cc6c840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::PrecomputeRemesherROI(UDynamicMeshSculptTool *this)

{
  FSubRegionRemesher *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->ActiveRemesher).Object == (FPersistentStampRemesher *)0x0) {
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
  pFVar1 = (((this->ActiveRemesher).Object)->Remesher).Ptr;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&pFVar1->VertexROI);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&pFVar1->EdgeROI);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&pFVar1->TriangleROI);
  (pFVar1->Edges).ArrayNum = 0;
  if ((pFVar1->Edges).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(pFVar1->Edges).AllocatorInstance,0,&(pFVar1->Edges).ArrayMax);
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&pFVar1->RemovedLastPassTris);
  pFVar1->CurEdge = -1;
  pFVar1->LastUpdateROICounter = 0;
  pFVar1->LastRemeshPassCounter = 0;
  InitializeRemesherROI(this,pFVar1);
  return;
}

// PreviousHistoryBrushModeAction @ 14cc6c9f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::PreviousHistoryBrushModeAction(UDynamicMeshSculptTool *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (0 < this->BrushTypeHistoryIndex) {
    uVar4 = this->BrushTypeHistoryIndex - 1;
    this->BrushTypeHistoryIndex = uVar4;
    uVar3 = 0;
    if ((int)uVar4 < (this->BrushTypeHistory).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if (uVar3 == 0) {
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
    ((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushType =
         (EDynamicMeshSculptBrushType)(this->BrushTypeHistory).AllocatorInstance.Data[(int)uVar4];
    this->LastStampType = ((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushType;
  }
  return;
}

// RecalculateNormals_Overlay @ 14cc6cb80

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
UDynamicMeshSculptTool::RecalculateNormals_Overlay
          (UDynamicMeshSculptTool *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  int *piVar1;
  TArray<bool,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar4;
  bool bVar5;
  uint uVar6;
  byte bVar7;
  longlong lVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ForElementType<unsigned_int> FVar14;
  uint uVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint uVar18;
  <lambda_1> local_res10;
  bool local_res18 [8];
  undefined1 local_res20 [8];
  uint local_128;
  uint local_124;
  ulonglong local_120;
  ForElementType<unsigned_int> local_118;
  longlong local_110;
  int local_108;
  int local_104;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_100;
  uint uStack_f8;
  uint uStack_f4;
  undefined1 *local_f0;
  undefined4 uStack_e8;
  uint uStack_e4;
  uint local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  undefined8 uStack_a8;
  TArrayView<std::nullptr_t,int> local_a0;
  code *local_90;
  UDynamicMeshSculptTool **local_88;
  UDynamicMeshSculptTool *local_80;
  longlong *local_78;
  ulonglong *local_70;
  undefined4 local_4c;
  ulonglong uVar13;
  
  local_110 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))()
  ;
  uVar13 = 0;
  lVar8 = *(longlong *)(local_110 + 0x208);
  uVar12 = 0;
  if (lVar8 == 0) {
    local_120 = 0;
  }
  else {
    local_120 = uVar13;
    if (0 < *(int *)(lVar8 + 0x38)) {
      local_120 = **(ulonglong **)(lVar8 + 0x30);
    }
    if (local_120 != 0) goto LAB_14cc6cc12;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("Normals != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
                     ,0x8a6,L"");
  if (bVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14cc6cc12:
  this_00 = &this->NormalsVertexFlags;
  iVar11 = *(int *)(local_120 + 8) * 0x200 + *(int *)(local_120 + 0xc);
  if ((this->NormalsVertexFlags).ArrayNum < iVar11) {
    local_res18[0] = false;
    TArray<bool,TSizedDefaultAllocator<32>_>::Init(this_00,local_res18,iVar11 * 2);
  }
  pTVar9 = &this->NormalsBuffer;
  piVar1 = &(this->NormalsBuffer).ArrayMax;
  (this->NormalsBuffer).ArrayNum = 0;
  if ((this->NormalsBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar9->AllocatorInstance,0,piVar1);
  }
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  local_118 = (ForElementType<unsigned_int>)&(param_1->Elements).field_0x10;
  uStack_f4 = 1;
  uVar15 = 0;
  uStack_e4 = uVar12;
  local_e0 = uVar15;
  if (uVar10 != 0) {
    puVar17 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)local_118;
    }
    uVar18 = *puVar17;
    uVar16 = uVar13;
    local_e0 = 0;
    uVar12 = 0;
    while (uVar18 == 0) {
      iVar11 = (int)uVar13;
      local_e0 = (int)uVar16 + 0x20;
      uVar16 = (ulonglong)local_e0;
      uVar12 = iVar11 + 1;
      uVar13 = (ulonglong)uVar12;
      uStack_e4 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
      goto LAB_14cc6cd16;
      uVar18 = (puVar17 + 1)[iVar11];
    }
    uStack_f4 = -uVar18 & uVar18;
    uVar13 = (ulonglong)uStack_f4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_108 = (int)lVar8;
    uStack_e4 = local_108 + -1 + local_e0;
    if ((int)uVar10 < (int)uStack_e4) {
      uStack_e4 = uVar10;
    }
  }
LAB_14cc6cd16:
  local_124 = *(uint *)&(param_1->Elements).field_0x28;
  uStack_dc = local_4c;
  iStack_d8 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar18 = local_124 & 0xffffffe0;
  uStack_e8 = 0xffffffff;
  TStack_c8.CurrentBitIndex = uStack_e4;
  TStack_c8.UnvisitedBitMask = 0xffffffff;
  TStack_c8._padding_ = CONCAT44(uStack_f4,uVar12);
  iVar11 = (int)local_124 >> 5;
  TStack_c8._28_4_ = local_4c;
  TStack_c8.BaseBitIndex = local_e0;
  uStack_a8 = CONCAT44(uStack_d4,iStack_d8);
  bVar7 = (byte)local_124;
  local_100 = param_1;
  uStack_f8 = uVar12;
  local_f0 = (undefined1 *)local_118;
  local_d0 = param_1;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_118;
  if ((((int)local_124 < 0) || ((int)uVar10 < (int)local_124)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar12 = *(int *)((longlong)local_118 + 0x18);
  if (local_124 != uVar12) {
    FVar14 = *(ForElementType<unsigned_int> *)((longlong)local_118 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_118 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar14 = local_118;
    }
    uVar10 = -1 << (bVar7 & 0x1f) & *(uint *)((longlong)FVar14 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar18 = uVar18 + 0x20;
      iVar11 = iVar11 + 1;
      local_124 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
      goto LAB_14cc6ce22;
      uVar10 = *(uint *)((undefined1 *)((longlong)FVar14 + 4) + lVar8 * 4);
    }
    uVar13 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_104 = (int)lVar8;
    local_124 = local_104 + -1 + uVar18;
    if ((int)uVar12 < (int)local_124) {
      local_124 = uVar12;
    }
  }
LAB_14cc6ce22:
  do {
    pTVar4 = local_d0;
    if (*(int *)&(local_d0->Elements).field_0x8 - *(int *)&(local_d0->Elements).field_0x34 !=
        (int)uStack_a8) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_c8.CurrentBitIndex == local_124) &&
        ((ForElementType<unsigned_int>)TStack_c8.Array == local_118)) && (pTVar4 == param_1)) {
      local_78 = &local_110;
      local_70 = &local_120;
      local_90 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UDynamicMeshSculptTool::RecalculateNormals_Overlay'::__l29::<lambda_1>,void,int>
                 ::Call;
      local_88 = &local_80;
      local_a0.DataPtr = (void **)0x0;
      local_res10 = SUB81(param_1,0);
      local_a0.ArrayNum = 0;
      local_80 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",(this->NormalsBuffer).ArrayNum,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_90,local_res10,None,&local_a0);
      return;
    }
    uVar12 = *(uint *)(*(longlong *)&pTVar4->Elements + (longlong)TStack_c8.CurrentBitIndex * 0xc);
    if (((-1 < (int)uVar12) &&
        ((int)uVar12 < *(int *)(local_110 + 0x140) * 0x200 + *(int *)(local_110 + 0x144))) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(local_110 + 0x148) + (ulonglong)(uVar12 >> 9) * 8) +
                           (ulonglong)(uVar12 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      uVar12 = uVar12 * 3;
      lVar8 = *(longlong *)(local_120 + 0x78);
      uVar10 = *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar12 >> 9) * 8) +
                        (ulonglong)(uVar12 & 0x1ff) * 4);
      uVar18 = *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar12 + 1 >> 9) * 8) +
                        (ulonglong)(uVar12 + 1 & 0x1ff) * 4);
      uVar12 = *(uint *)(*(longlong *)(lVar8 + (ulonglong)(uVar12 + 2 >> 9) * 8) +
                        (ulonglong)(uVar12 + 2 & 0x1ff) * 4);
      if (uVar10 != 0xffffffff) {
        uVar6 = uVar15;
        if ((int)uVar10 < (this->NormalsVertexFlags).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        local_128 = uVar10;
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar6 = 0;
        if ((this_00->AllocatorInstance).Data[(int)uVar10] == (FScriptContainerElement)0x0) {
          pFVar2 = (pTVar9->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_128) &&
              ((FScriptContainerElement *)&local_128 < pFVar2 + (longlong)*piVar1 * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar11 = (this->NormalsBuffer).ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar9->AllocatorInstance,piVar1);
          }
          (this->NormalsBuffer).ArrayNum = iVar11 + 1;
          *(uint *)((pTVar9->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_128;
          lVar8 = (longlong)(int)local_128;
          uVar10 = uVar6;
          if ((int)local_128 < (this->NormalsVertexFlags).ArrayNum) {
            uVar10 = ~local_128 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (this_00->AllocatorInstance).Data[lVar8] = (FScriptContainerElement)0x1;
        }
        uVar10 = uVar6;
        if ((int)uVar18 < (this->NormalsVertexFlags).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        local_128 = uVar18;
        if ((uVar10 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((this_00->AllocatorInstance).Data[(int)uVar18] == (FScriptContainerElement)0x0) {
          pFVar2 = (pTVar9->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_128) &&
              ((FScriptContainerElement *)&local_128 < pFVar2 + (longlong)*piVar1 * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar11 = (this->NormalsBuffer).ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar9->AllocatorInstance,piVar1);
          }
          (this->NormalsBuffer).ArrayNum = iVar11 + 1;
          *(uint *)((pTVar9->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_128;
          lVar8 = (longlong)(int)local_128;
          uVar10 = uVar6;
          if ((int)local_128 < (this->NormalsVertexFlags).ArrayNum) {
            uVar10 = ~local_128 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (this_00->AllocatorInstance).Data[lVar8] = (FScriptContainerElement)0x1;
        }
        if ((int)uVar12 < (this->NormalsVertexFlags).ArrayNum) {
          uVar6 = ~uVar12 >> 0x1f;
        }
        local_128 = uVar12;
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((this_00->AllocatorInstance).Data[(int)uVar12] == (FScriptContainerElement)0x0) {
          pFVar2 = (pTVar9->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_128) &&
              ((FScriptContainerElement *)&local_128 < pFVar2 + (longlong)*piVar1 * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar11 = (this->NormalsBuffer).ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar9->AllocatorInstance,piVar1);
          }
          (this->NormalsBuffer).ArrayNum = iVar11 + 1;
          *(uint *)((pTVar9->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_128;
          lVar8 = (longlong)(int)local_128;
          uVar12 = uVar15;
          if ((int)local_128 < (this->NormalsVertexFlags).ArrayNum) {
            uVar12 = ~local_128 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (this_00->AllocatorInstance).Data[lVar8] = (FScriptContainerElement)0x1;
        }
      }
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  } while( true );
}

// RecalculateNormals_PerVertex @ 14cc6d3a0

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
UDynamicMeshSculptTool::RecalculateNormals_PerVertex
          (UDynamicMeshSculptTool *this,
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_1)

{
  int *piVar1;
  TArray<bool,TSizedDefaultAllocator<32>_> *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ForElementType<unsigned_int> FVar12;
  ulonglong uVar13;
  uint *puVar14;
  uint uVar15;
  <lambda_1> local_res10;
  bool local_res18 [8];
  undefined1 local_res20 [8];
  uint local_128 [2];
  ForElementType<unsigned_int> local_120;
  undefined8 local_118;
  uint local_110;
  longlong local_108;
  int local_100;
  int local_fc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_f8;
  int iStack_f0;
  uint uStack_ec;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  int iStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 uStack_cc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  UDynamicMeshSculptTool *local_98;
  longlong *local_90;
  TArrayView<std::nullptr_t,int> local_88;
  code *local_78;
  UDynamicMeshSculptTool **local_70;
  undefined4 local_4c;
  
  local_108 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))()
  ;
  this_00 = &this->NormalsVertexFlags;
  iVar11 = *(int *)(local_108 + 0x20) * 0x200 + *(int *)(local_108 + 0x24);
  if ((this->NormalsVertexFlags).ArrayNum < iVar11) {
    local_res18[0] = false;
    TArray<bool,TSizedDefaultAllocator<32>_>::Init(this_00,local_res18,iVar11 * 2);
  }
  pTVar8 = &this->NormalsBuffer;
  piVar1 = &(this->NormalsBuffer).ArrayMax;
  (this->NormalsBuffer).ArrayNum = 0;
  if ((this->NormalsBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar8->AllocatorInstance,0,piVar1);
  }
  iVar11 = *(int *)&(param_1->Elements).field_0x28;
  local_120 = (ForElementType<unsigned_int>)&(param_1->Elements).field_0x10;
  iStack_f0 = 0;
  uStack_ec = 1;
  local_d8 = 0;
  iStack_dc = 0;
  if (iVar11 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)local_120;
    }
    uVar9 = *puVar14;
    iStack_f0 = 0;
    local_d8 = 0;
    while (uVar9 == 0) {
      lVar7 = (longlong)iStack_f0;
      local_d8 = local_d8 + 0x20;
      iStack_f0 = iStack_f0 + 1;
      iStack_dc = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_f0) goto LAB_14cc6d4d4;
      uVar9 = (puVar14 + 1)[lVar7];
    }
    uStack_ec = -uVar9 & uVar9;
    uVar13 = (ulonglong)uStack_ec * 2 + 1;
    lVar7 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_100 = (int)lVar7;
    iStack_dc = local_100 + -1 + local_d8;
    if (iVar11 < iStack_dc) {
      iStack_dc = iVar11;
    }
  }
LAB_14cc6d4d4:
  uVar9 = *(uint *)&(param_1->Elements).field_0x28;
  uStack_d4 = local_4c;
  iStack_d0 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uVar15 = uVar9 & 0xffffffe0;
  uStack_e0 = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_ec,iStack_f0);
  TStack_c0.CurrentBitIndex = iStack_dc;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar9 >> 5;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = local_d8;
  uStack_a0 = CONCAT44(uStack_cc,iStack_d0);
  local_f8 = param_1;
  local_e8 = (undefined1 *)local_120;
  local_c8 = param_1;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_120;
  if ((((int)uVar9 < 0) || (iVar11 < (int)uVar9)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar6 = *(int *)((longlong)local_120 + 0x18);
  if (uVar9 != uVar6) {
    FVar12 = *(ForElementType<unsigned_int> *)((longlong)local_120 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_120 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar12 = local_120;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)((longlong)FVar12 + (longlong)iVar10 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar10;
      uVar15 = uVar15 + 0x20;
      iVar10 = iVar10 + 1;
      uVar9 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_14cc6d5f0;
      uVar9 = *(uint *)((undefined1 *)((longlong)FVar12 + 4) + lVar7 * 4);
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_fc = (int)lVar7;
    uVar9 = local_fc + -1 + uVar15;
    if ((int)uVar6 < (int)uVar9) {
      uVar9 = uVar6;
    }
  }
LAB_14cc6d5f0:
  do {
    pTVar4 = local_c8;
    if (*(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34 !=
        (int)uStack_a0) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_c0.CurrentBitIndex == uVar9) &&
        ((ForElementType<unsigned_int>)TStack_c0.Array == local_120)) && (pTVar4 == param_1)) {
      local_90 = &local_108;
      local_88.DataPtr = (void **)0x0;
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UDynamicMeshSculptTool::RecalculateNormals_PerVertex'::__l19::<lambda_1>,void,int>
                 ::Call;
      local_70 = &local_98;
      local_88.ArrayNum = 0;
      local_res10 = SUB81(param_1,0);
      local_98 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",(this->NormalsBuffer).ArrayNum,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_78,local_res10,None,&local_88);
      return;
    }
    uVar15 = *(uint *)(*(longlong *)&pTVar4->Elements + (longlong)TStack_c0.CurrentBitIndex * 0xc);
    if ((-1 < (int)uVar15) &&
       ((int)uVar15 < *(int *)(local_108 + 0x140) * 0x200 + *(int *)(local_108 + 0x144))) {
      uVar13 = (ulonglong)(uVar15 & 0x1ff);
      lVar7 = (ulonglong)(uVar15 >> 9) * 8;
      if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(local_108 + 0x148) + lVar7) + uVar13 * 2)
                  - 1U) < 0xfffe) {
        lVar7 = *(longlong *)(*(longlong *)(local_108 + 0x130) + lVar7);
        local_118 = *(undefined8 *)(lVar7 + uVar13 * 0xc);
        local_110 = *(uint *)(lVar7 + 8 + uVar13 * 0xc);
        uVar15 = (uint)local_118;
        local_128[0] = (uint)local_118;
        uVar6 = 0;
        if ((int)(uint)local_118 < (this->NormalsVertexFlags).ArrayNum) {
          uVar6 = ~(uint)local_118 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((this_00->AllocatorInstance).Data[(int)uVar15] == (FScriptContainerElement)0x0) {
          pFVar2 = (pTVar8->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_128) &&
              ((FScriptContainerElement *)local_128 < pFVar2 + (longlong)*piVar1 * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar11 = (this->NormalsBuffer).ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar8->AllocatorInstance,piVar1);
          }
          (this->NormalsBuffer).ArrayNum = iVar11 + 1;
          *(uint *)((pTVar8->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_128[0];
          lVar7 = (longlong)(int)local_128[0];
          uVar15 = 0;
          if ((int)local_128[0] < (this->NormalsVertexFlags).ArrayNum) {
            uVar15 = ~local_128[0] >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (this_00->AllocatorInstance).Data[lVar7] = (FScriptContainerElement)0x1;
        }
        uVar15 = local_118._4_4_;
        local_128[0] = local_118._4_4_;
        uVar6 = 0;
        if ((int)local_118._4_4_ < (this->NormalsVertexFlags).ArrayNum) {
          uVar6 = ~local_118._4_4_ >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((this_00->AllocatorInstance).Data[(int)uVar15] == (FScriptContainerElement)0x0) {
          pFVar2 = (pTVar8->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_128) &&
              ((FScriptContainerElement *)local_128 < pFVar2 + (longlong)*piVar1 * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar11 = (this->NormalsBuffer).ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar8->AllocatorInstance,piVar1);
          }
          (this->NormalsBuffer).ArrayNum = iVar11 + 1;
          *(uint *)((pTVar8->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_128[0];
          lVar7 = (longlong)(int)local_128[0];
          uVar15 = 0;
          if ((int)local_128[0] < (this->NormalsVertexFlags).ArrayNum) {
            uVar15 = ~local_128[0] >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (this_00->AllocatorInstance).Data[lVar7] = (FScriptContainerElement)0x1;
        }
        local_128[0] = local_110;
        uVar15 = 0;
        if ((int)local_110 < (this->NormalsVertexFlags).ArrayNum) {
          uVar15 = ~local_110 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((this_00->AllocatorInstance).Data[(int)local_110] == (FScriptContainerElement)0x0) {
          pFVar2 = (pTVar8->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)local_128) &&
              ((FScriptContainerElement *)local_128 < pFVar2 + (longlong)*piVar1 * 4)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar11 = (this->NormalsBuffer).ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar8->AllocatorInstance,piVar1);
          }
          (this->NormalsBuffer).ArrayNum = iVar11 + 1;
          *(uint *)((pTVar8->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_128[0];
          lVar7 = (longlong)(int)local_128[0];
          uVar15 = 0;
          if ((int)local_128[0] < (this->NormalsVertexFlags).ArrayNum) {
            uVar15 = ~local_128[0] >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (this_00->AllocatorInstance).Data[lVar7] = (FScriptContainerElement)0x1;
        }
      }
    }
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  } while( true );
}

// RegisterActions @ 14cc6df80

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
UDynamicMeshSculptTool::RegisterActions
          (UDynamicMeshSculptTool *this,FInteractiveToolActionSet *param_1)

{
  FText *pFVar1;
  FText *pFVar2;
  FString local_88;
  FText local_78;
  FText local_68;
  code *local_58 [2];
  undefined **local_48;
  UDynamicMeshSculptTool *local_40;
  undefined8 local_30;
  
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UDynamicMeshSculptTool::RegisterActions'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::RegisterActions'::__l2::<lambda_1>,void>
                ::Call;
  local_30 = 0;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UDynamicMeshSculptTool",L"SculptIncreaseRadiusTooltip",
                      L"Increase radius of sculpting brush");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UDynamicMeshSculptTool",L"SculptIncreaseRadius",
                      L"Increase Sculpt Radius");
  ::FString::FString(&local_88,L"SculptIncreaseRadius");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,100,&local_88,pFVar2,pFVar1,'\0',&EKeys::RightBracket,
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
              TFunction_OwnedObject<`UDynamicMeshSculptTool::RegisterActions'::`2'::<lambda_2>,0,0>
              ::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::RegisterActions'::__l2::<lambda_2>,void>
                ::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UDynamicMeshSculptTool",L"SculptDecreaseRadiusTooltip",
                      L"Decrease radius of sculpting brush");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UDynamicMeshSculptTool",L"SculptDecreaseRadius",
                      L"Decrease Sculpt Radius");
  ::FString::FString(&local_88,L"SculptDecreaseRadius");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x65,&local_88,pFVar2,pFVar1,'\0',&EKeys::LeftBracket,
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
              TFunction_OwnedObject<`UDynamicMeshSculptTool::RegisterActions'::`2'::<lambda_3>,0,0>
              ::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::RegisterActions'::__l2::<lambda_3>,void>
                ::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UDynamicMeshSculptTool",L"SculptIncreaseSizeTooltip",
                      L"Increase Brush Size");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UDynamicMeshSculptTool",L"SculptIncreaseSize",L"Increase Size");
  ::FString::FString(&local_88,L"SculptIncreaseSize");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2742,&local_88,pFVar2,pFVar1,'\0',&EKeys::D,
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
              TFunction_OwnedObject<`UDynamicMeshSculptTool::RegisterActions'::`2'::<lambda_4>,0,0>
              ::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::RegisterActions'::__l2::<lambda_4>,void>
                ::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UDynamicMeshSculptTool",L"SculptDecreaseSizeTooltip",
                      L"Decrease Brush Size");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UDynamicMeshSculptTool",L"SculptDecreaseSize",L"Decrease Size");
  ::FString::FString(&local_88,L"SculptDecreaseSize");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2743,&local_88,pFVar2,pFVar1,'\0',&EKeys::S,
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
              TFunction_OwnedObject<`UDynamicMeshSculptTool::RegisterActions'::`2'::<lambda_5>,0,0>
              ::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::RegisterActions'::__l2::<lambda_5>,void>
                ::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UDynamicMeshSculptTool",L"SculptIncreaseSizeTooltip",
                      L"Increase Brush Size");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UDynamicMeshSculptTool",L"SculptIncreaseSize",L"Increase Size");
  ::FString::FString(&local_88,L"SculptIncreaseSizeSmallStep");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2744,&local_88,pFVar2,pFVar1,'\x04',&EKeys::D,
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
              TFunction_OwnedObject<`UDynamicMeshSculptTool::RegisterActions'::`2'::<lambda_6>,0,0>
              ::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::RegisterActions'::__l2::<lambda_6>,void>
                ::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UDynamicMeshSculptTool",L"SculptDecreaseSizeTooltip",
                      L"Decrease Brush Size");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UDynamicMeshSculptTool",L"SculptDecreaseSize",L"Decrease Size");
  ::FString::FString(&local_88,L"SculptDecreaseSizeSmallStemp");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2745,&local_88,pFVar2,pFVar1,'\x04',&EKeys::S,
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
              TFunction_OwnedObject<`UDynamicMeshSculptTool::RegisterActions'::`2'::<lambda_7>,0,0>
              ::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::RegisterActions'::__l2::<lambda_7>,void>
                ::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UDynamicMeshSculptTool",L"SculptIncreaseSpeedTooltip",
                      L"Increase Brush Speed");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UDynamicMeshSculptTool",L"SculptIncreaseSpeed",L"Increase Speed");
  ::FString::FString(&local_88,L"SculptIncreaseSpeed");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x274c,&local_88,pFVar2,pFVar1,'\0',&EKeys::E,
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
              TFunction_OwnedObject<`UDynamicMeshSculptTool::RegisterActions'::`2'::<lambda_8>,0,0>
              ::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::RegisterActions'::__l2::<lambda_8>,void>
                ::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UDynamicMeshSculptTool",L"SculptDecreaseSpeedTooltip",
                      L"Decrease Brush Speed");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UDynamicMeshSculptTool",L"SculptDecreaseSpeed",L"Decrease Speed");
  ::FString::FString(&local_88,L"SculptDecreaseSpeed");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x274d,&local_88,pFVar2,pFVar1,'\0',&EKeys::W,
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
              TFunction_OwnedObject<`UDynamicMeshSculptTool::RegisterActions'::`2'::<lambda_9>,0,0>
              ::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::RegisterActions'::__l2::<lambda_9>,void>
                ::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UDynamicMeshSculptTool",L"ToggleWireframeTooltip",
                      L"Toggle visibility of wireframe overlay");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UDynamicMeshSculptTool",L"ToggleWireframe",L"Toggle Wireframe");
  ::FString::FString(&local_88,L"ToggleWireframe");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x66,&local_88,pFVar2,pFVar1,'\x02',&EKeys::W,
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
              TFunction_OwnedObject<`UDynamicMeshSculptTool::RegisterActions'::`2'::<lambda_10>,0,0>
              ::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::RegisterActions'::__l2::<lambda_10>,void>
                ::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UDynamicMeshSculptTool",L"SetSculptWorkSurfacePosNormalTooltip",
                      L"Move the Sculpting Work Plane/Surface to Position and Normal of World hit point under cursor"
                     );
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UDynamicMeshSculptTool",L"SetSculptWorkSurfacePosNormal",
                      L"Reorient Work Surface");
  ::FString::FString(&local_88,L"SetSculptWorkSurfacePosNormal");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2774,&local_88,pFVar2,pFVar1,'\x04',&EKeys::T,
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
              TFunction_OwnedObject<`UDynamicMeshSculptTool::RegisterActions'::`2'::<lambda_11>,0,0>
              ::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::RegisterActions'::__l2::<lambda_11>,void>
                ::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UDynamicMeshSculptTool",L"SetSculptWorkSurfacePosTooltip",
                      L"Move the Sculpting Work Plane/Surface to World hit point under cursor (keep current Orientation)"
                     );
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UDynamicMeshSculptTool",L"SetSculptWorkSurfacePos",
                      L"Reposition Work Surface");
  ::FString::FString(&local_88,L"SetSculptWorkSurfacePos");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2775,&local_88,pFVar2,pFVar1,'\0',&EKeys::T,
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
              TFunction_OwnedObject<`UDynamicMeshSculptTool::RegisterActions'::`2'::<lambda_12>,0,0>
              ::_vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDynamicMeshSculptTool::RegisterActions'::__l2::<lambda_12>,void>
                ::Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UDynamicMeshSculptTool",L"SetSculptWorkSurfaceViewTooltip",
                      L"Move the Sculpting Work Plane/Surface to World hit point under cursor and align to View"
                     );
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UDynamicMeshSculptTool",L"SetSculptWorkSurfaceView",
                      L"View-Align Work Surface");
  ::FString::FString(&local_88,L"SetSculptWorkSurfaceView");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2776,&local_88,pFVar2,pFVar1,'\x05',&EKeys::T,
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

// RemeshROIPass @ 14cc6f290

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

void __thiscall UDynamicMeshSculptTool::RemeshROIPass(UDynamicMeshSculptTool *this)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  ulonglong uVar2;
  FDynamicMeshOctree3 *this_00;
  code *pcVar3;
  char cVar4;
  UDynamicMeshSculptTool *pUVar5;
  FDynamicMeshChangeTracker *this_01;
  longlong *plVar6;
  bool bVar7;
  FDynamicMesh3 *pFVar8;
  byte bVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_5a8 [32];
  char local_588;
  undefined1 local_587;
  undefined1 local_586;
  char local_585;
  uint local_584;
  undefined4 local_580 [2];
  longlong *local_578;
  int iStack_570;
  uint uStack_56c;
  TBitArray<FDefaultBitArrayAllocator> *local_568;
  undefined4 uStack_560;
  uint uStack_55c;
  int local_558;
  undefined4 uStack_554;
  int iStack_550;
  undefined4 uStack_54c;
  int local_548 [2];
  UDynamicMeshSculptTool *local_540;
  int local_538;
  int local_534;
  int local_530;
  int local_52c;
  FDynamicMeshChangeTracker *local_528;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_520;
  longlong *local_518;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_510;
  undefined8 uStack_4f0;
  longlong *local_4e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_4e0;
  undefined8 uStack_4c0;
  undefined4 local_49c;
  undefined4 local_47c;
  undefined1 local_478 [368];
  ESmoothTypes local_308;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_218;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_1c8;
  undefined1 local_178 [32];
  uint *local_158;
  uint local_150;
  int local_144;
  undefined1 local_110 [32];
  uint *local_f0;
  uint local_e8;
  int local_dc;
  bool local_70;
  uint local_6c;
  uint local_68;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_5a8;
  local_540 = this;
  if (CpuChannel->Enabled < 0) {
    local_588 = '\0';
  }
  else {
    local_588 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2105,"DynamicMeshSculptTool_RemeshROI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
               ,0x839);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2105);
  }
  pFVar8 = (FDynamicMesh3 *)
           (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
  this_00 = (((this->DynamicMeshComponent).field0_0x0.DebugPtr)->Octree).Ptr;
  UE::Geometry::FSubRegionRemesher::FSubRegionRemesher((FSubRegionRemesher *)local_478,pFVar8);
  if (CpuChannel->Enabled < 0) {
    ConfigureRemesher(this,(FSubRegionRemesher *)local_478);
    InitializeRemesherROI(this,(FSubRegionRemesher *)local_478);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2112,"DynamicMeshSculptTool_RemeshROI_Configure",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
               ,0x840);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2112);
    ConfigureRemesher(this,(FSubRegionRemesher *)local_478);
    InitializeRemesherROI(this,(FSubRegionRemesher *)local_478);
    FCpuProfilerTrace::OutputEndEvent();
  }
  pTVar1 = &this->RemeshRemovedTriangles;
  local_520 = pTVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (pTVar1,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_178);
  UE::Geometry::FDynamicMeshOctree3::
  RemoveTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(this_00,pTVar1,true);
  if (this->ActiveMeshChange != (FDynamicMeshChangeTracker *)0x0) {
    UE::Geometry::FMeshRefinerBase::SetMeshChangeTracker
              ((FMeshRefinerBase *)local_478,this->ActiveMeshChange);
  }
  local_585 = local_308 == Uniform;
  local_584 = 0;
  do {
    if ((local_585 == '\0') && (1 < local_584)) {
      local_478[0x140] = false;
    }
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2135,"DynamicMeshSculptTool_RemeshROI_UpdateStep",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
                 ,0x857);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2135);
    }
    UE::Geometry::FSubRegionRemesher::UpdateROI((FSubRegionRemesher *)local_478);
    uVar13 = local_150;
    local_528 = this->ActiveMeshChange;
    if (local_528 != (FDynamicMeshChangeTracker *)0x0) {
      iStack_570 = 0;
      uStack_56c = 1;
      local_558 = 0;
      uStack_55c = 0;
      if (local_150 != 0) {
        puVar12 = (uint *)(local_178 + 0x10);
        if (local_158 != (uint *)0x0) {
          puVar12 = local_158;
        }
        uVar14 = *puVar12;
        iStack_570 = 0;
        local_558 = 0;
        while (uVar14 == 0) {
          lVar10 = (longlong)iStack_570;
          local_558 = local_558 + 0x20;
          iStack_570 = iStack_570 + 1;
          uStack_55c = local_150;
          if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_570)
          goto LAB_14cc6f511;
          uVar14 = puVar12[lVar10 + 1];
        }
        uStack_56c = -uVar14 & uVar14;
        uVar2 = (ulonglong)uStack_56c * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_538 = (int)lVar10;
        uStack_55c = local_558 + -1 + local_538;
        if ((int)local_150 < (int)uStack_55c) {
          uStack_55c = local_150;
        }
      }
LAB_14cc6f511:
      local_578 = (longlong *)local_178;
      uStack_554 = local_49c;
      local_568 = (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10);
      uVar14 = local_150 & 0xffffffe0;
      iStack_550 = local_178._8_4_ - local_144;
      TStack_510._padding_ = CONCAT44(uStack_56c,iStack_570);
      uStack_560 = 0xffffffff;
      TStack_510.CurrentBitIndex = uStack_55c;
      TStack_510.UnvisitedBitMask = 0xffffffff;
      iVar11 = (int)local_150 >> 5;
      TStack_510._28_4_ = local_49c;
      TStack_510.BaseBitIndex = local_558;
      uStack_4f0 = CONCAT44(uStack_54c,iStack_550);
      bVar9 = (byte)local_150;
      local_518 = local_578;
      TStack_510.Array = local_568;
      if (((int)local_150 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_01 = local_528;
      if (uVar13 != local_150) {
        puVar12 = (uint *)(local_178 + 0x10);
        if (local_158 != (uint *)0x0) {
          puVar12 = local_158;
        }
        uVar13 = -1 << (bVar9 & 0x1f) & puVar12[iVar11];
        while (uVar13 == 0) {
          lVar10 = (longlong)iVar11;
          uVar14 = uVar14 + 0x20;
          iVar11 = iVar11 + 1;
          uVar13 = local_150;
          if ((int)((local_150 - 1) + ((int)(local_150 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
          goto LAB_14cc6f640;
          uVar13 = puVar12[lVar10 + 1];
        }
        uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_534 = (int)lVar10;
        uVar13 = local_534 + -1 + uVar14;
        if ((int)local_150 < (int)uVar13) {
          uVar13 = local_150;
        }
      }
LAB_14cc6f640:
      while( true ) {
        plVar6 = local_518;
        if ((int)local_518[1] - *(int *)((longlong)local_518 + 0x34) != (int)uStack_4f0) {
          local_587 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_587);
        }
        if (((TStack_510.CurrentBitIndex == uVar13) &&
            (TStack_510.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_178 + 0x10))) &&
           (plVar6 == (longlong *)local_178)) break;
        UE::Geometry::FDynamicMeshChangeTracker::SaveTriangle
                  (this_01,*(int *)(*plVar6 + (longlong)TStack_510.CurrentBitIndex * 0xc),true);
        TStack_510.UnvisitedBitMask = TStack_510.UnvisitedBitMask & ~TStack_510._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_510);
      }
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_110);
    local_70 = true;
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId2152,"DynamicMeshSculptTool_RemeshROI_RemeshStep",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
                 ,0x868);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2152);
    }
    if ((local_68 == local_6c) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("LastRemeshPassCounter != LastUpdateROICounter",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Public\\SubRegionRemesher.h"
                           ,0xe0,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_68 = local_6c;
    UE::Geometry::FRemesher::BasicRemeshPass((FRemesher *)local_478);
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    local_70 = false;
    UE::Geometry::FDynamicMeshOctree3::
    RemoveTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              (this_00,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_110,true);
    uVar13 = local_e8;
    iStack_570 = 0;
    uStack_56c = 1;
    local_558 = 0;
    uStack_55c = 0;
    if (local_e8 != 0) {
      puVar12 = (uint *)(local_110 + 0x10);
      if (local_f0 != (uint *)0x0) {
        puVar12 = local_f0;
      }
      uVar14 = *puVar12;
      while (uVar14 == 0) {
        lVar10 = (longlong)iStack_570;
        local_558 = local_558 + 0x20;
        iStack_570 = iStack_570 + 1;
        uStack_55c = local_e8;
        if ((int)((local_e8 - 1) + ((int)(local_e8 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_570)
        goto LAB_14cc6f811;
        uVar14 = (puVar12 + 1)[lVar10];
      }
      uStack_56c = -uVar14 & uVar14;
      uVar2 = (ulonglong)uStack_56c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_530 = (int)lVar10;
      uStack_55c = local_530 + -1 + local_558;
      if ((int)local_e8 < (int)uStack_55c) {
        uStack_55c = local_e8;
      }
    }
LAB_14cc6f811:
    local_578 = (longlong *)local_110;
    uStack_554 = local_47c;
    local_568 = (TBitArray<FDefaultBitArrayAllocator> *)(local_110 + 0x10);
    uVar14 = local_e8 & 0xffffffe0;
    iStack_550 = local_110._8_4_ - local_dc;
    TStack_4e0._padding_ = CONCAT44(uStack_56c,iStack_570);
    uStack_560 = 0xffffffff;
    TStack_4e0.CurrentBitIndex = uStack_55c;
    TStack_4e0.UnvisitedBitMask = 0xffffffff;
    iVar11 = (int)local_e8 >> 5;
    TStack_4e0._28_4_ = local_47c;
    TStack_4e0.BaseBitIndex = local_558;
    uStack_4c0 = CONCAT44(uStack_54c,iStack_550);
    bVar9 = (byte)local_e8;
    local_4e8 = local_578;
    TStack_4e0.Array = local_568;
    if (((int)local_e8 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar15)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar1 = local_520;
    if (uVar13 != local_e8) {
      puVar12 = (uint *)(local_110 + 0x10);
      if (local_f0 != (uint *)0x0) {
        puVar12 = local_f0;
      }
      uVar13 = -1 << (bVar9 & 0x1f) & puVar12[iVar11];
      while (uVar13 == 0) {
        lVar10 = (longlong)iVar11;
        uVar14 = uVar14 + 0x20;
        iVar11 = iVar11 + 1;
        uVar13 = local_e8;
        if ((int)((local_e8 - 1) + ((int)(local_e8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
        goto LAB_14cc6f940;
        uVar13 = (puVar12 + 1)[lVar10];
      }
      uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_52c = (int)lVar10;
      uVar13 = local_52c + -1 + uVar14;
      if ((int)local_e8 < (int)uVar13) {
        uVar13 = local_e8;
      }
    }
LAB_14cc6f940:
    while( true ) {
      plVar6 = local_4e8;
      if ((int)local_4e8[1] - *(int *)((longlong)local_4e8 + 0x34) != (int)uStack_4c0) {
        local_586 = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_586);
      }
      pUVar5 = local_540;
      if (((TStack_4e0.CurrentBitIndex == uVar13) &&
          (TStack_4e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_110 + 0x10))) &&
         (plVar6 == (longlong *)local_110)) break;
      local_580[0] = *(undefined4 *)(*plVar6 + (longlong)TStack_4e0.CurrentBitIndex * 0xc);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (pTVar1,local_548,(bool *)local_580);
      TStack_4e0.UnvisitedBitMask = TStack_4e0.UnvisitedBitMask & ~TStack_4e0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_4e0);
    }
    local_584 = local_584 + 1;
    this = local_540;
    if (4 < (int)local_584) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&local_1c8);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&local_218);
      cVar4 = local_588;
      if (&pUVar5->RemeshFinalTriangleROI !=
          (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_178) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                  (&pUVar5->RemeshFinalTriangleROI,
                   (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_178);
      }
      UE::Geometry::FSubRegionRemesher::~FSubRegionRemesher((FSubRegionRemesher *)local_478);
      if (cVar4 != '\0') {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
  } while( true );
}

// RemeshROIPass_ActiveRemesher @ 14cc6fa70

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
UDynamicMeshSculptTool::RemeshROIPass_ActiveRemesher(UDynamicMeshSculptTool *this,bool param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FDynamicMeshOctree3 *this_00;
  FSubRegionRemesher *this_01;
  uint *puVar5;
  undefined1 *puVar6;
  code *pcVar7;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_02;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar15;
  FSubRegionRemesher *this_03;
  int iVar16;
  uint uVar17;
  bool bVar18;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8 [2];
  FDynamicMeshOctree3 *local_e0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d8;
  FSubRegionRemesher *local_d0;
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
  
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2029,"DynamicMeshSculptTool_RemeshROIActive",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
               ,0x7ed);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2029);
  }
  (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
  this_00 = (((this->DynamicMeshComponent).field0_0x0.DebugPtr)->Octree).Ptr;
  local_e0 = this_00;
  if (((this->ActiveRemesher).Object == (FPersistentStampRemesher *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this_01 = (((this->ActiveRemesher).Object)->Remesher).Ptr;
  local_d0 = this_01;
  if (!param_1) {
    PrecomputeRemesherROI(this);
  }
  if (CpuChannel->Enabled < 0) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&this->RemeshRemovedTriangles,&this_01->TriangleROI);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2043,"DynamicMeshSculptTool_RemeshROI_CopyROIStep",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
               ,0x7fb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2043);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&this->RemeshRemovedTriangles,&this_01->TriangleROI);
    FCpuProfilerTrace::OutputEndEvent();
  }
  this_02 = &this->RemeshRemovedTriangles;
  if (CpuChannel->Enabled < 0) {
    UE::Geometry::FDynamicMeshOctree3::
    RemoveTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(this_00,this_02,true);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2047,"DynamicMeshSculptTool_RemeshROI_OctreeRemoveStep",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
               ,0x7ff);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2047);
    UE::Geometry::FDynamicMeshOctree3::
    RemoveTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(this_00,this_02,true);
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (this->ActiveMeshChange != (FDynamicMeshChangeTracker *)0x0) {
    UE::Geometry::FMeshRefinerBase::SetMeshChangeTracker
              ((FMeshRefinerBase *)this_01,this->ActiveMeshChange);
  }
  local_f4 = *(int *)&this_01->field_0x170;
  local_res20 = 0;
  this_03 = this_01;
  if (0 < ((this->RemeshProperties).field0_0x0.DebugPtr)->Iterations) {
    pTVar15 = &this_01->RemovedLastPassTris;
    puVar1 = &(this_01->RemovedLastPassTris).Elements.field_0x10;
    local_d8 = pTVar15;
    do {
      if ((local_f4 != 0) && (1 < local_res20)) {
        this_03->field_0x140 = 0;
      }
      bVar9 = -1 < CpuChannel->Enabled;
      if (bVar9) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId2065,"DynamicMeshSculptTool_RemeshROI_UpdateStep",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
                   ,0x811);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2065);
      }
      UE::Geometry::FSubRegionRemesher::UpdateROI(this_03);
      if (this->ActiveMeshChange != (FDynamicMeshChangeTracker *)0x0) {
        UE::Geometry::FSubRegionRemesher::SaveActiveROI(this_03,this->ActiveMeshChange);
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(pTVar15);
      this_03->bTrackRemoved = true;
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (CpuChannel->Enabled < 0) {
        (**(code **)(*(longlong *)this_03 + 0x38))(this_03);
      }
      else {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId2082,"DynamicMeshSculptTool_RemeshROI_RemeshStep",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
                   ,0x822);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2082);
        (**(code **)(*(longlong *)this_03 + 0x38))(this_03);
        FCpuProfilerTrace::OutputEndEvent();
      }
      bVar9 = -1 < CpuChannel->Enabled;
      if (bVar9) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId2087,"DynamicMeshSculptTool_RemeshROI_OctreeStep",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
                   ,0x827);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2087);
      }
      this_03->bTrackRemoved = false;
      UE::Geometry::FDynamicMeshOctree3::
      RemoveTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(local_e0,pTVar15,true)
      ;
      iVar3 = *(int *)&(pTVar15->Elements).field_0x28;
      local_b8 = &(pTVar15->Elements).field_0x10;
      iStack_c0 = 0;
      local_a8 = 0;
      uStack_bc = 1;
      iStack_ac = 0;
      if (iVar3 != 0) {
        puVar5 = *(uint **)&(pTVar15->Elements).field_0x20;
        puVar14 = (uint *)local_b8;
        if (puVar5 != (uint *)0x0) {
          puVar14 = puVar5;
        }
        uVar12 = *puVar14;
        while (uVar12 == 0) {
          lVar11 = (longlong)iStack_c0;
          local_a8 = local_a8 + 0x20;
          iStack_c0 = iStack_c0 + 1;
          iStack_ac = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14cc6fe70;
          uVar12 = puVar14[lVar11 + 1];
        }
        uStack_bc = -uVar12 & uVar12;
        uVar2 = (ulonglong)uStack_bc * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_f0 = (int)lVar11;
        iStack_ac = local_a8 + -1 + local_f0;
        if (iVar3 < iStack_ac) {
          iStack_ac = iVar3;
        }
      }
LAB_14cc6fe70:
      uStack_a4 = local_4c;
      iStack_a0 = *(int *)&(pTVar15->Elements).field_0x8 - *(int *)&(pTVar15->Elements).field_0x34;
      uVar12 = *(uint *)&(pTVar15->Elements).field_0x28;
      TStack_90._padding_ = CONCAT44(uStack_bc,iStack_c0);
      uStack_b0 = 0xffffffff;
      uVar17 = uVar12 & 0xffffffe0;
      TStack_90.CurrentBitIndex = iStack_ac;
      TStack_90.UnvisitedBitMask = 0xffffffff;
      iVar16 = (int)uVar12 >> 5;
      TStack_90._28_4_ = local_4c;
      TStack_90.BaseBitIndex = local_a8;
      uStack_70 = CONCAT44(uStack_9c,iStack_a0);
      local_c8 = pTVar15;
      local_98 = pTVar15;
      TStack_90.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_b8;
      if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar15 = local_d8;
      uVar4 = *(uint *)&(this_01->RemovedLastPassTris).Elements.field_0x28;
      if (uVar12 != uVar4) {
        puVar6 = *(undefined1 **)&(this_01->RemovedLastPassTris).Elements.field_0x20;
        puVar13 = puVar1;
        if (puVar6 != (undefined1 *)0x0) {
          puVar13 = puVar6;
        }
        uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar16 * 4);
        while (uVar12 == 0) {
          lVar11 = (longlong)iVar16;
          uVar17 = uVar17 + 0x20;
          iVar16 = iVar16 + 1;
          uVar12 = uVar4;
          if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_14cc6ff90;
          uVar12 = *(uint *)(puVar13 + lVar11 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_ec = (int)lVar11;
        uVar12 = local_ec + -1 + uVar17;
        if ((int)uVar4 < (int)uVar12) {
          uVar12 = uVar4;
        }
      }
LAB_14cc6ff90:
      while( true ) {
        pTVar8 = local_98;
        if (*(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34 !=
            (int)uStack_70) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        this_03 = local_d0;
        if (((TStack_90.CurrentBitIndex == uVar12) &&
            (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar8 == pTVar15)) break;
        local_f8 = *(undefined4 *)
                    (*(longlong *)&pTVar8->Elements + (longlong)TStack_90.CurrentBitIndex * 0xc);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (this_02,local_e8,(bool *)&local_f8);
        TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
      }
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      pTVar15 = &this_03->RemovedLastPassTris;
      local_res20 = local_res20 + 1;
    } while (local_res20 < ((this->RemeshProperties).field0_0x0.DebugPtr)->Iterations);
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this_03->EdgeROI);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this_03->VertexROI);
  if (&this->RemeshFinalTriangleROI != &this_01->TriangleROI) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
    Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              (&this->RemeshFinalTriangleROI,&this_01->TriangleROI);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Render @ 14cc73000

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
UDynamicMeshSculptTool::Render(UDynamicMeshSculptTool *this,IToolsContextRenderAPI *param_1)

{
  UBrushStampIndicator *pUVar1;
  UMaterialInstanceDynamic *pUVar2;
  UFixedPlaneBrushProperties *pUVar3;
  double dVar4;
  float fVar5;
  bool bVar6;
  longlong *plVar7;
  FName *pFVar8;
  UObject *pUVar9;
  FPrimitiveDrawInterface *pFVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  FName local_res8;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  double local_e8;
  FLinearColor_u_0 local_d8;
  double local_c8;
  TVector<double>_u_0 local_c0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  FViewCameraState local_88;
  
  UInteractiveTool::Render((UInteractiveTool *)this,param_1);
  plVar7 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x398))(plVar7);
  (**(code **)(*plVar7 + 0x18))(plVar7,&this->CameraState);
  (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_88);
  fVar5 = __real_3f000000;
  local_e8 = (this->LastBrushPosNormalWorld).field0_0x0._s_0.Z;
  local_f8 = (undefined1  [8])(this->LastBrushPosNormalWorld).field0_0x0._s_0.X;
  _fStack_f0 = (this->LastBrushPosNormalWorld).field0_0x0._s_0.Y;
  pUVar1 = (this->BrushIndicator).field0_0x0.DebugPtr;
  local_c8 = (this->LastBrushPosWorld).field0_0x0._s_0.Z;
  local_d8 = *(FLinearColor_u_0 *)&(this->LastBrushPosWorld).field0_0x0;
  (**(code **)(pUVar1->_padding_ + 0x2f0))
            (pUVar1,(float)this->CurrentBrushRadius,&local_d8,local_f8,__real_3f000000,
             __real_3f800000);
  if ((this->BrushIndicatorMaterial).field0_0x0.DebugPtr != (UMaterialInstanceDynamic *)0x0) {
    dVar4 = ToolSceneQueriesUtil::CalculateDimensionFromVisualAngleD
                      (&local_88,&this->LastBrushPosWorld,__real_3ff8000000000000);
    pUVar2 = (this->BrushIndicatorMaterial).field0_0x0.DebugPtr;
    pFVar8 = ::FName::FName(&local_res8,L"FalloffWidth");
    UMaterialInstanceDynamic::SetScalarParameterValue(pUVar2,*pFVar8,(float)dVar4);
    bVar6 = FWeakObjectPtr::IsValid(&(this->BrushEditBehavior).WeakPtr);
    if (bVar6) {
      pUVar9 = FWeakObjectPtr::Get(&(this->BrushEditBehavior).WeakPtr);
      if (*(char *)(pUVar9 + 2) == '\0') {
        pUVar2 = (this->BrushIndicatorMaterial).field0_0x0.DebugPtr;
        pFVar8 = ::FName::FName(&local_res8,L"IndicatorColor");
        local_f8 = (undefined1  [8])((ulonglong)*pFVar8 & 0xffffffff);
        fStack_ec = -NAN;
        fStack_f0 = (float)(*pFVar8).Number;
        local_e8 = (double)CONCAT71(local_e8._1_7_,2);
        UMaterialInterface::GetVectorParameterDefaultValue
                  ((UMaterialInterface *)pUVar2,(FMemoryImageMaterialParameterInfo *)local_f8,
                   (FLinearColor *)&local_d8._s_0);
        uVar11 = local_d8._s_0.R;
        uVar12 = local_d8._s_0.G;
        uVar13 = local_d8._s_0.B;
        uVar14 = local_d8._s_0.A;
      }
      else {
        local_d8 = FLinearColor::White.field0_0x0;
        uVar11 = FLinearColor::White.field0_0x0._0_4_;
        uVar12 = FLinearColor::White.field0_0x0._4_4_;
        uVar13 = FLinearColor::White.field0_0x0._8_4_;
        uVar14 = FLinearColor::White.field0_0x0._12_4_;
      }
      pUVar2 = (this->BrushIndicatorMaterial).field0_0x0.DebugPtr;
      pFVar8 = ::FName::FName(&local_res8,L"IndicatorColor");
      local_f8._4_4_ = uVar12;
      local_f8._0_4_ = uVar11;
      fStack_ec = (float)uVar14;
      fStack_f0 = (float)uVar13;
      UMaterialInstanceDynamic::SetVectorParameterValue(pUVar2,*pFVar8,(FLinearColor *)local_f8);
    }
  }
  if (((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushType == FixedPlane) {
    pFVar10 = (FPrimitiveDrawInterface *)(**(code **)((longlong)*param_1 + 8))(param_1);
    pUVar3 = (this->GizmoProperties).field0_0x0.DebugPtr;
    local_res8.ComparisonIndex.Value = 0x20808080;
    local_c0._s_0.X = (pUVar3->Position).field0_0x0._s_0.X;
    local_c0._s_0.Y = (pUVar3->Position).field0_0x0._s_0.Y;
    local_c0._s_0.Z = (pUVar3->Position).field0_0x0._s_0.Z;
    local_a8 = (pUVar3->Rotation).X;
    dStack_a0 = (pUVar3->Rotation).Y;
    local_98 = (pUVar3->Rotation).Z;
    dStack_90 = (pUVar3->Rotation).W;
    MeshDebugDraw::DrawSimpleFixedScreenAreaGrid
              (&local_88,(TFrame3<double> *)&local_c0._s_0,10,__real_4046800000000000,
               local_88.HorizontalFOVDegrees * __real_3c360b61 * fVar5,(FColor)0x20808080,false,
               pFVar10,&UE::Math::TTransform<double>::Identity);
  }
  return;
}

// SaveActiveROI @ 14cc747b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::SaveActiveROI(UDynamicMeshSculptTool *this)

{
  FDynamicMeshChangeTracker *pFVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FDynamicMeshChangeTracker *local_38;
  undefined1 local_30;
  code *local_28;
  FDynamicMeshChangeTracker **local_20;
  
  pFVar1 = this->ActiveMeshChange;
  if (pFVar1 != (FDynamicMeshChangeTracker *)0x0) {
    pFVar2 = (this->VertexROI).AllocatorInstance.Data;
    local_40 = (this->VertexROI).ArrayNum;
    lVar6 = (longlong)local_40;
    local_48.Data = (FScriptContainerElement *)0x0;
    if (local_40 == 0) {
      local_3c = 0;
      iVar4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,pFVar2,lVar6 << 2);
      iVar4 = local_40;
    }
    pFVar2 = local_48.Data + (longlong)iVar4 * 4;
    FVar3.Data = local_48.Data;
    iVar5 = iVar4;
    while( true ) {
      if (iVar5 != iVar4) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar3.Data == pFVar2) break;
      local_20 = &local_38;
      local_30 = 1;
      local_28 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FDynamicMeshChangeTracker::SaveVertexOneRingTriangles'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_38 = pFVar1;
      UE::Geometry::FDynamicMesh3::EnumerateVertexTriangles
                (pFVar1->Mesh,*(int *)FVar3.Data,(TFunctionRef<void___cdecl(int)> *)&local_28);
      FVar3.Data = FVar3.Data + 4;
      iVar5 = local_40;
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return;
}

// ScheduleRemeshPass @ 14cc749e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::ScheduleRemeshPass(UDynamicMeshSculptTool *this)

{
  UBrushRemeshProperties *pUVar1;
  
  if (((this->bEnableRemeshing != false) &&
      (pUVar1 = (this->RemeshProperties).field0_0x0.DebugPtr,
      pUVar1 != (UBrushRemeshProperties *)0x0)) && (pUVar1->bEnableRemeshing != false)) {
    this->bRemeshPending = true;
  }
  return;
}

// SetEnableRemeshing @ 14cc75360

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
UDynamicMeshSculptTool::SetEnableRemeshing(UDynamicMeshSculptTool *this,bool param_1)

{
  this->bEnableRemeshing = param_1;
  return;
}

// SetFixedSculptPlaneFromWorldPos @ 14cc75450

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
UDynamicMeshSculptTool::SetFixedSculptPlaneFromWorldPos
          (UDynamicMeshSculptTool *this,TVector<double> *param_1,TVector<double> *param_2,
          EPendingWorkPlaneUpdate param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UFixedPlaneBrushProperties *pUVar5;
  code *pcVar6;
  longlong *plVar7;
  UCombinedTransformGizmo *pUVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined8 uVar15;
  longlong *plVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_168 [32];
  TQuaternion<double>_u_0 local_148;
  TQuaternion<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  double local_e8;
  double dStack_e0;
  double local_d8;
  TQuaternion<double>_u_0 TStack_d0;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double dStack_90;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_168;
  if (param_3 == MoveToHitPositionNormal) {
    UpdateFixedSculptPlanePosition(this,param_1);
    dVar10 = __real_3ff0000000000000;
    pUVar5 = (this->GizmoProperties).field0_0x0.DebugPtr;
    local_148._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    dVar1 = (pUVar5->Rotation).Y;
    dVar2 = (pUVar5->Rotation).X;
    dVar3 = (pUVar5->Rotation).Z;
    dVar4 = (pUVar5->Rotation).W;
    local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_148._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_148._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_108._s_0.X = (dVar1 + dVar1) * dVar4 + (dVar3 + dVar3) * dVar2;
    local_108._s_0.Y = (dVar3 + dVar3) * dVar1 - (dVar2 + dVar2) * dVar4;
    local_128._s_0.X = 0.0;
    local_128._s_0.W = __real_3ff0000000000000;
    local_128._s_0.Y = 0.0;
    local_128._s_0.Z = 0.0;
    local_108._s_0.Z = __real_3ff0000000000000 - ((dVar1 + dVar1) * dVar1 + (dVar2 + dVar2) * dVar2)
    ;
    TStack_d0._s_0.X = dVar2;
    TStack_d0._s_0.Y = dVar1;
    TStack_d0._s_0.Z = dVar3;
    TStack_d0._s_0.W = dVar4;
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_128._s_0,(TVector<double> *)&local_108._s_0,
               (TVector<double> *)&local_148._s_0);
    UE::Geometry::operator*<double>
              ((TQuaternion<double> *)&local_148._s_0,(TQuaternion<double> *)&local_128._s_0,
               (TQuaternion<double> *)&TStack_d0._s_0);
    auVar17._0_8_ = local_148._s_0.X * local_148._s_0.X;
    auVar17._8_8_ = 0;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = local_148._s_0.W * local_148._s_0.W + local_148._s_0.Z * local_148._s_0.Z +
                   local_148._s_0.Y * local_148._s_0.Y + auVar17._0_8_;
    auVar18 = sqrtpd(auVar17,auVar9);
    if (0.0 < auVar18._0_8_) {
      dVar10 = dVar10 / auVar18._0_8_;
      if (0.0 < dVar10) {
        dVar4 = local_148._s_0.W * dVar10;
        dVar2 = local_148._s_0.X * dVar10;
        dVar1 = local_148._s_0.Y * dVar10;
        dVar3 = local_148._s_0.Z * dVar10;
      }
    }
    pUVar5 = (this->GizmoProperties).field0_0x0.DebugPtr;
    auVar11._8_4_ = SUB84(dVar1,0);
    auVar11._0_8_ = dVar2;
    auVar11._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    (pUVar5->Rotation).X = dVar2;
    (pUVar5->Rotation).Y = (double)auVar11._8_8_;
    auVar13._8_4_ = SUB84(dVar4,0);
    auVar13._0_8_ = dVar3;
    auVar13._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    (pUVar5->Rotation).Z = dVar3;
    (pUVar5->Rotation).W = (double)auVar13._8_8_;
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->GizmoRotationWatcher).GetValueFunc)
    ;
    pcVar6 = *(code **)&(this->GizmoRotationWatcher).GetValueFunc;
    plVar7 = *(longlong **)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28;
    plVar16 = (longlong *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x10;
    if (plVar7 != (longlong *)0x0) {
      plVar16 = plVar7;
    }
    uVar15 = (**(code **)(*plVar16 + 8))();
    (*pcVar6)(&local_128,uVar15);
    (this->GizmoRotationWatcher).CachedValue.X = local_128._s_0.X;
    (this->GizmoRotationWatcher).CachedValue.Y = local_128._s_0.Y;
    (this->GizmoRotationWatcher).CachedValue.Z = local_128._s_0.Z;
    (this->GizmoRotationWatcher).CachedValue.W = local_128._s_0.W;
  }
  else if (param_3 == MoveToHitPositionViewAligned) {
    UpdateFixedSculptPlanePosition(this,param_1);
    pUVar5 = (this->GizmoProperties).field0_0x0.DebugPtr;
    local_148._s_0.Z = 0.0;
    dVar1 = (pUVar5->Rotation).X;
    dVar2 = (pUVar5->Rotation).Y;
    dVar3 = (pUVar5->Rotation).Z;
    dVar4 = (pUVar5->Rotation).W;
    local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_148._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_148._s_0.Y = _UNK_150689518;
    TStack_d0._s_0.X = dVar1;
    TStack_d0._s_0.Y = dVar2;
    TStack_d0._s_0.Z = dVar3;
    TStack_d0._s_0.W = dVar4;
    UE::Math::TQuat<double>::RotateVector
              (&(this->CameraState).Orientation,(TVector<double> *)&local_108._s_0,
               (TVector<double> *)&local_148._s_0);
    dVar10 = __real_3ff0000000000000;
    local_148._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)local_108._16_8_ >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_108._s_0.Z,0) ^ (uint)__xmm_80000000000000008000000000000000);
    local_128._s_0.X = 0.0;
    local_148._4_4_ = local_108._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
    local_148._0_4_ = local_108._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
    local_148._12_4_ = local_108._12_4_ ^ _UNK_15066df7c;
    local_148._8_4_ = local_108._8_4_ ^ _UNK_15066df78;
    local_128._s_0.W = __real_3ff0000000000000;
    local_128._s_0.Y = 0.0;
    local_128._s_0.Z = 0.0;
    local_108._s_0.X = (dVar2 + dVar2) * dVar4 + (dVar3 + dVar3) * dVar1;
    local_108._s_0.Y = (dVar3 + dVar3) * dVar2 - (dVar1 + dVar1) * dVar4;
    local_108._s_0.Z = __real_3ff0000000000000 - ((dVar2 + dVar2) * dVar2 + (dVar1 + dVar1) * dVar1)
    ;
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_128._s_0,(TVector<double> *)&local_108._s_0,
               (TVector<double> *)&local_148._s_0);
    UE::Geometry::operator*<double>
              ((TQuaternion<double> *)&local_148._s_0,(TQuaternion<double> *)&local_128._s_0,
               (TQuaternion<double> *)&TStack_d0._s_0);
    auVar19._0_8_ = local_148._s_0.X * local_148._s_0.X;
    auVar19._8_8_ = 0;
    auVar18._8_8_ = 0;
    auVar18._0_8_ =
         local_148._s_0.W * local_148._s_0.W + local_148._s_0.Z * local_148._s_0.Z +
         local_148._s_0.Y * local_148._s_0.Y + auVar19._0_8_;
    auVar18 = sqrtpd(auVar19,auVar18);
    if (0.0 < auVar18._0_8_) {
      dVar10 = dVar10 / auVar18._0_8_;
      if (0.0 < dVar10) {
        dVar4 = local_148._s_0.W * dVar10;
        dVar1 = local_148._s_0.X * dVar10;
        dVar2 = local_148._s_0.Y * dVar10;
        dVar3 = local_148._s_0.Z * dVar10;
      }
    }
    pUVar5 = (this->GizmoProperties).field0_0x0.DebugPtr;
    auVar12._8_4_ = SUB84(dVar2,0);
    auVar12._0_8_ = dVar1;
    auVar12._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    (pUVar5->Rotation).X = dVar1;
    (pUVar5->Rotation).Y = (double)auVar12._8_8_;
    auVar14._8_4_ = SUB84(dVar4,0);
    auVar14._0_8_ = dVar3;
    auVar14._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    (pUVar5->Rotation).Z = dVar3;
    (pUVar5->Rotation).W = (double)auVar14._8_8_;
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->GizmoRotationWatcher).GetValueFunc)
    ;
    pcVar6 = *(code **)&(this->GizmoRotationWatcher).GetValueFunc;
    plVar7 = *(longlong **)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28;
    plVar16 = (longlong *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x10;
    if (plVar7 != (longlong *)0x0) {
      plVar16 = plVar7;
    }
    uVar15 = (**(code **)(*plVar16 + 8))();
    (*pcVar6)(&local_128,uVar15);
    (this->GizmoRotationWatcher).CachedValue.X = local_128._s_0.X;
    (this->GizmoRotationWatcher).CachedValue.Y = local_128._s_0.Y;
    (this->GizmoRotationWatcher).CachedValue.Z = local_128._s_0.Z;
    (this->GizmoRotationWatcher).CachedValue.W = local_128._s_0.W;
  }
  else {
    UpdateFixedSculptPlanePosition(this,param_1);
  }
  pUVar8 = (this->PlaneTransformGizmo).field0_0x0.DebugPtr;
  if (pUVar8 != (UCombinedTransformGizmo *)0x0) {
    pUVar5 = (this->GizmoProperties).field0_0x0.DebugPtr;
    local_d8 = (pUVar5->Rotation).Z;
    TStack_d0._s_0.X = (pUVar5->Rotation).W;
    local_e8 = (pUVar5->Rotation).X;
    dStack_e0 = (pUVar5->Rotation).Y;
    TStack_d0._s_0.Y = (pUVar5->Position).field0_0x0._s_0.X;
    TStack_d0._s_0.Z = (pUVar5->Position).field0_0x0._s_0.Y;
    TStack_d0._s_0.W = (pUVar5->Position).field0_0x0._s_0.Z;
    local_98 = ___xmm_00000000000000003ff0000000000000;
    dStack_90 = _UNK_150689518;
    uStack_b0 = 0;
    local_a8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_a0 = _UNK_150689688;
    (**(code **)(*(longlong *)pUVar8 + 0x340))(pUVar8,&local_e8,1);
  }
  return;
}

// SetWorld @ 14cc75fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::SetWorld(UDynamicMeshSculptTool *this,UWorld *param_1)

{
  this->TargetWorld = param_1;
  return;
}

// Setup @ 14cc79d90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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

void __thiscall UDynamicMeshSculptTool::Setup(UDynamicMeshSculptTool *this)

{
  TTransformSRT3<double> *pTVar1;
  TWeakObjectPtr<ULocalTwoAxisPropertyEditInputBehavior,FWeakObjectPtr> *this_00;
  undefined8 uVar2;
  EDynamicMeshSculptBrushType EVar3;
  code *pcVar4;
  UWorld *this_01;
  UDynamicMeshComponent *pUVar5;
  FWeakObjectPtr FVar6;
  TObjectPtr<UTexture2D>_u_0 TVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  FFunctionStorage *pFVar19;
  ForElementType<FSetElementId> FVar20;
  FDynamicMeshChangeTracker *pFVar21;
  FLongTransactionTracker FVar22;
  FDynamicMeshAttributeSet *pFVar23;
  atomic<unsigned_int> aVar24;
  uint uVar25;
  uint uVar26;
  uint *puVar27;
  undefined8 uVar28;
  ForAnyElementType *pFVar29;
  longlong lVar30;
  FScriptContainerElement *pFVar31;
  char cVar32;
  FText *pFVar33;
  UClass *pUVar34;
  AInternalToolFrameworkActor *pAVar35;
  FString *pFVar36;
  UOctreeDynamicMeshComponent *pUVar37;
  TTransform<double> *pTVar38;
  FDynamicMesh3 *pFVar39;
  undefined8 *puVar40;
  ulong64 uVar41;
  FDynamicMesh3 *this_02;
  UDynamicMeshBrushProperties *pUVar42;
  UDynamicMeshBrushSculptProperties *pUVar43;
  UKelvinBrushProperties *pUVar44;
  UBrushRemeshProperties *pUVar45;
  UInteractiveToolManager *pUVar46;
  UInteractiveGizmoManager *pUVar47;
  UObject *pUVar48;
  UBrushStampIndicator *pUVar49;
  UPreviewMesh *pUVar50;
  USculptMaxBrushProperties *pUVar51;
  UFixedPlaneBrushProperties *pUVar52;
  TVector<double> *pTVar53;
  UDynamicSculptToolActions *pUVar54;
  UMeshEditingViewProperties *pUVar55;
  UTransformProxy *pUVar56;
  longlong *plVar57;
  UTwoAxisPropertyEditInputBehavior *this_03;
  FScriptContainerElement *pFVar58;
  FLongTransactionTracker FVar59;
  FFunctionStorage *pFVar60;
  uint *puVar61;
  undefined ***pppuVar62;
  ForAnyElementType *pFVar63;
  longlong *plVar64;
  AInternalToolFrameworkActor *pAVar65;
  wchar_t *pwVar66;
  ForAnyElementType FVar67;
  wchar_t *pwVar68;
  float fVar69;
  double dVar70;
  TInterval<float> TVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  undefined1 auStackY_15f8 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_15c8;
  FDelegateAllocation local_15c0;
  FGetMeshParameters local_15a8;
  int iStack_159c;
  undefined8 local_1598;
  FString local_1588;
  void *local_1578;
  undefined8 local_1570;
  TVector<double>_u_0 local_1568;
  TVector<double>_u_0 local_1548;
  double local_1530;
  double local_1528;
  double local_1520;
  UDynamicMeshSculptTool *local_1518;
  undefined1 local_1510 [16];
  UObject *local_1500;
  UDynamicMeshSculptTool *local_14f8;
  FComponentMaterialSet local_14f0;
  FScriptContainerElement *local_14d8;
  undefined **local_14c8;
  UDynamicMeshSculptTool *local_14c0;
  undefined ***local_14b0;
  code *local_14a8;
  undefined **local_1498;
  UDynamicMeshSculptTool *local_1490;
  undefined ***local_1480;
  code *local_1478;
  undefined **local_1468;
  UDynamicMeshSculptTool *local_1460;
  undefined ***local_1450;
  code *local_1448;
  undefined **local_1438;
  UDynamicMeshSculptTool *local_1430;
  undefined ***local_1420;
  code *local_1418;
  undefined **local_1408;
  UDynamicMeshSculptTool *local_1400;
  undefined ***local_13f0;
  code *local_13e8;
  undefined **local_13d8;
  UDynamicMeshSculptTool *local_13d0;
  undefined ***local_13c0;
  FString local_13b8;
  FString local_13a8;
  FString local_1398;
  FString local_1388;
  FString local_1378;
  FString local_1368;
  code *local_1358;
  undefined **local_1348;
  UDynamicMeshSculptTool *local_1340;
  undefined ***local_1330;
  code *local_1328;
  undefined **local_1318;
  UDynamicMeshSculptTool *local_1310;
  undefined ***local_1300;
  code *local_12f8;
  undefined **local_12e8;
  UDynamicMeshSculptTool *local_12e0;
  undefined ***local_12d0;
  code *local_12c8 [2];
  undefined **local_12b8;
  UDynamicMeshSculptTool *local_12b0;
  undefined ***local_12a0;
  code *local_1298 [2];
  undefined **local_1288;
  UDynamicMeshSculptTool *local_1280;
  undefined ***local_1270;
  code *local_1268;
  undefined **local_1258;
  UDynamicMeshSculptTool *local_1250;
  undefined ***local_1240;
  TVector<double>_u_0 local_1238;
  FDestructionSentinel local_1220;
  TVector<double>_u_0 local_1208;
  code *local_11e8;
  undefined **local_11d8;
  UDynamicMeshSculptTool *local_11d0;
  undefined ***local_11c0;
  code *local_11b8;
  undefined **local_11a8;
  UDynamicMeshSculptTool *local_11a0;
  undefined ***local_1190;
  FDestructionSentinel local_1188;
  FDelegateAllocation *local_1170;
  undefined1 local_1168 [16];
  FText local_1158;
  FLinearColor_u_0 local_1148;
  FLinearColor_u_0 local_1138;
  code *local_1128;
  longlong lStack_1120;
  double local_1118;
  double dStack_1110;
  double local_1108;
  double local_1100;
  double dStack_10f8;
  double local_10f0;
  FString local_10e8;
  FText local_10d8;
  FText local_10c8;
  FText local_10b8;
  FText local_10a8;
  code *local_1098 [2];
  undefined **local_1088;
  UDynamicMeshSculptTool *local_1080;
  longlong local_1070;
  code *local_1068 [2];
  undefined **local_1058;
  UDynamicMeshSculptTool *local_1050;
  TObjectPtr<UDynamicMeshBrushProperties>_u_0 local_1040;
  code *local_1038 [2];
  undefined **local_1028;
  TObjectPtr<UBrushRemeshProperties>_u_0 local_1020;
  TObjectPtr<UMeshEditingViewProperties>_u_0 local_1010;
  code *local_1008 [2];
  undefined **local_ff8;
  undefined8 local_ff0;
  undefined8 local_fe0;
  code *local_fd8 [2];
  undefined **local_fc8;
  UDynamicMeshSculptTool *local_fc0;
  undefined8 local_fb0;
  code *local_fa8 [2];
  undefined **local_f98;
  TObjectPtr<UBrushStampIndicator>_u_0 local_f90;
  TObjectPtr<UPreviewMesh>_u_0 local_f80;
  code *local_f78 [2];
  undefined **local_f68;
  undefined1 local_f60 [24];
  undefined1 local_f48 [48];
  code *local_f18 [2];
  undefined **local_f08;
  undefined8 local_f00;
  undefined1 local_ef0 [8];
  undefined1 local_ee8 [40];
  FDelegateHandle local_ec0;
  double local_eb8;
  double dStack_eb0;
  double local_ea8;
  double dStack_ea0;
  double local_e98;
  double dStack_e90;
  double local_e88;
  double dStack_e80;
  double dStack_e78;
  double dStack_e70;
  undefined8 local_e68;
  undefined8 uStack_e60;
  double local_e58;
  double dStack_e50;
  double local_e48;
  double dStack_e40;
  undefined1 auStack_e38 [56];
  FString local_e00;
  FString local_df0;
  FString local_de0;
  FString local_dd0;
  TVector<double> local_dc0;
  FDynamicMesh3 local_da8;
  undefined1 local_b78 [80];
  longlong local_b28 [3];
  longlong *local_b10;
  undefined1 local_af8 [128];
  undefined1 local_a78 [128];
  undefined1 local_9f8 [128];
  undefined1 local_978 [80];
  longlong local_928 [6];
  FStaticConstructObjectParameters local_8f8;
  undefined1 local_878 [128];
  undefined1 local_7f8 [128];
  undefined1 local_778 [128];
  undefined1 local_6f8 [104];
  ForAnyElementType local_690;
  undefined1 local_678 [80];
  longlong local_628 [3];
  longlong *local_610;
  code *local_5f8;
  int iStack_5f0;
  undefined4 uStack_5ec;
  undefined8 local_5e8;
  ForAnyElementType FStack_5e0;
  int local_5d8;
  int iStack_5d4;
  longlong *plStack_5d0;
  ForAnyElementType local_5c8;
  int iStack_5c0;
  int iStack_5bc;
  undefined8 local_5b8;
  ForAnyElementType FStack_5b0;
  int local_5a8;
  int iStack_5a4;
  longlong *plStack_5a0;
  code *local_598;
  ForAnyElementType FStack_590;
  ForAnyElementType local_588;
  undefined8 uStack_580;
  ForAnyElementType local_578;
  ForAnyElementType *pFStack_570;
  code *local_568;
  int iStack_560;
  undefined4 uStack_55c;
  undefined8 local_558;
  ForAnyElementType FStack_550;
  int local_548;
  int iStack_544;
  longlong *plStack_540;
  ForAnyElementType local_538;
  int iStack_530;
  int iStack_52c;
  undefined8 local_528;
  ForAnyElementType FStack_520;
  int local_518;
  int iStack_514;
  longlong *plStack_510;
  TUniquePtr<UE::Geometry::FDynamicMeshAttributeSet,TDefaultDelete<UE::Geometry::FDynamicMeshAttributeSet>_>
  local_508;
  bool bStack_500;
  undefined1 uStack_4ff;
  short sStack_4fe;
  atomic<unsigned_int> aStack_4fc;
  undefined1 local_4f8 [8];
  uint uStack_4f0;
  FChangeStamp FStack_4ec;
  uchar uStack_4e4;
  uchar uStack_4e3;
  uchar uStack_4e2;
  uchar uStack_4e1;
  atomic<unsigned_int> *paStack_4e0;
  code *local_4d8;
  FDynamicMesh3 *pFStack_4d0;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  int iStack_4c0;
  int iStack_4bc;
  undefined1 local_4b8 [8];
  undefined8 uStack_4b0;
  code *local_4a8;
  undefined8 uStack_4a0;
  longlong local_498 [2];
  double local_488;
  longlong *plStack_480;
  ForAnyElementType local_478;
  int iStack_470;
  int iStack_46c;
  FFunctionStorage local_468;
  ForAnyElementType local_448;
  int iStack_440;
  int iStack_43c;
  uint local_438;
  uint uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  int local_428;
  int iStack_424;
  uint *puStack_420;
  FDynamicMesh3 *local_418;
  ForAnyElementType FStack_410;
  undefined1 local_408 [24];
  ForAnyElementType FStack_3f0;
  code *local_3e8;
  undefined1 auStack_3e0 [24];
  TQuaternion<double>_u_0 local_3c8;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  int iStack_3a0;
  int iStack_39c;
  ForAnyElementType local_398;
  longlong *plStack_390;
  code *local_388;
  undefined1 auStack_380 [32];
  longlong *plStack_360;
  code *local_358;
  undefined8 uStack_350;
  uchar local_348 [4];
  int iStack_344;
  ForElementType<FSetElementId> aFStack_340 [2];
  longlong *plStack_330;
  code *local_328;
  undefined8 uStack_320;
  FFunctionStorage local_318;
  code *local_2f8;
  ForElementType<FSetElementId> FStack_2f0;
  int local_2e8 [2];
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  FDynamicMeshChangeTracker *local_2d8;
  FLongTransactionTracker FStack_2d0;
  FLongTransactionTracker local_2c8;
  double dStack_2c0;
  int local_2b8;
  undefined4 uStack_2b4;
  TObjectPtr<UCombinedTransformGizmo>_u_0 TStack_2b0;
  TObjectPtr<UTransformProxy>_u_0 local_2a8;
  double dStack_2a0;
  double local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  double local_278;
  undefined8 uStack_270;
  TTransform<double> local_268;
  undefined1 local_208 [112];
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_15f8;
  UMeshSurfacePointTool::Setup((UMeshSurfacePointTool *)this);
  pcVar4 = *(code **)(this->_padding_ + 0x380);
  pFVar33 = FText::AsLocalizable_Advanced_LocText
                      (&local_1158,L"UDynamicMeshSculptTool",L"ToolName",L"DynaSculpt");
  (*pcVar4)(this,pFVar33);
  if (local_1158.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_1158.TextData.Reference + 0x10))();
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_208);
  this_01 = this->TargetWorld;
  pUVar34 = Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
  pAVar35 = (AInternalToolFrameworkActor *)
            UWorld::SpawnActor(this_01,pUVar34,&UE::Math::TVector<double>::ZeroVector,
                               &UE::Math::TRotator<double>::ZeroRotator,
                               (FActorSpawnParameters *)local_208);
  pAVar65 = (AInternalToolFrameworkActor *)0x0;
  if (pAVar35 != (AInternalToolFrameworkActor *)0x0) {
    pUVar34 = Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
    iVar11 = (int)pUVar34->_padding_;
    if ((*(int *)(pAVar35->_padding_ + 0x38) < iVar11) ||
       (pAVar65 = pAVar35,
       (longlong *)*(undefined1 **)(*(longlong *)(pAVar35->_padding_ + 0x30) + (longlong)iVar11 * 8)
       != &pUVar34->_padding_)) {
      pFVar36 = GetTypeName<AInternalToolFrameworkActor>(&local_e00);
      pwVar68 = L"";
      if ((pFVar36->Data).ArrayNum == 0) {
        pwVar66 = L"";
      }
      else {
        pwVar66 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
      }
      pFVar36 = GetFullNameForCastLogError<AActor>(&local_10e8,(AActor *)pAVar35);
      if ((pFVar36->Data).ArrayNum != 0) {
        pwVar68 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar68,pwVar66);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar65 != (AInternalToolFrameworkActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar65);
  }
  (this->PreviewMeshActor).field0_0x0.DebugPtr = pAVar65;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pAVar65,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar34 = Z_Construct_UClass_UOctreeDynamicMeshComponent_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b78,pUVar34);
  local_b78._8_8_ = pAVar65;
  pUVar37 = (UOctreeDynamicMeshComponent *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b78);
  if ((UTexture2D *)local_b78._64_8_ != (UTexture2D *)0x0) {
    plVar57 = local_b28;
    if (local_b10 != (longlong *)0x0) {
      plVar57 = local_b10;
    }
    (**(code **)(*plVar57 + 0x10))(plVar57);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar37 != (UOctreeDynamicMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar37);
  }
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = pUVar37;
  (**(code **)(*(longlong *)pUVar37 + 0xbd0))(pUVar37,0);
  local_1598 = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr,
             (USceneComponent *)((this->PreviewMeshActor).field0_0x0.DebugPtr)->_padding_,(FName)0x0
            );
  pUVar37 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  pTVar38 = UE::ToolTarget::GetLocalToWorldTransform(&local_198,(UToolTarget *)this->_padding_);
  USceneComponent::SetWorldTransform
            ((USceneComponent *)pUVar37,pTVar38,false,(FHitResult *)0x0,None);
  UActorComponent::RegisterComponent
            ((UActorComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr);
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((UBaseDynamicMeshComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr,
             (UToolTarget *)this->_padding_);
  pUVar37 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  pcVar4 = *(code **)(*(longlong *)pUVar37 + 0xb28);
  local_15a8.bHaveRequestLOD = false;
  local_15a8._1_3_ = 0;
  local_15a8.RequestLOD = Default;
  local_15a8.bWantMeshTangents = false;
  local_15a8._9_3_ = 0;
  pFVar39 = UE::ToolTarget::GetDynamicMeshCopy
                      (&local_da8,(UToolTarget *)this->_padding_,&local_15a8);
  (*pcVar4)(pUVar37,pFVar39);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_da8);
  pTVar38 = UE::ToolTarget::GetLocalToWorldTransform(&local_138,(UToolTarget *)this->_padding_);
  dVar74 = __real_3f847ae147ae147b;
  pTVar1 = &this->InitialTargetTransform;
  local_eb8 = (pTVar38->Rotation).XY.m128d_f64[0];
  dStack_eb0 = (pTVar38->Rotation).XY.m128d_f64[1];
  local_ea8 = (pTVar38->Rotation).ZW.m128d_f64[0];
  dStack_ea0 = (pTVar38->Rotation).ZW.m128d_f64[1];
  local_1108 = (pTVar38->Translation).ZW.m128d_f64[0];
  local_1118 = (pTVar38->Translation).XY.m128d_f64[0];
  dStack_1110 = (pTVar38->Translation).XY.m128d_f64[1];
  local_1100 = (pTVar38->Scale3D).XY.m128d_f64[0];
  dStack_10f8 = (pTVar38->Scale3D).XY.m128d_f64[1];
  local_10f0 = (pTVar38->Scale3D).ZW.m128d_f64[0];
  (pTVar1->Rotation).field0_0x0._s_0.X = local_eb8;
  (this->InitialTargetTransform).Rotation.field0_0x0._s_0.Y = dStack_eb0;
  (this->InitialTargetTransform).Rotation.field0_0x0._s_0.Z = local_ea8;
  (this->InitialTargetTransform).Rotation.field0_0x0._s_0.W = dStack_ea0;
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.X = local_1118;
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.Y = dStack_1110;
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.Z = local_1108;
  (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.X = local_1100;
  (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.Y = dStack_10f8;
  (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.Z = local_10f0;
  local_e98 = local_1118;
  dStack_e90 = dStack_1110;
  local_e88 = local_1108;
  dStack_e80 = local_1100;
  dStack_e78 = dStack_10f8;
  dStack_e70 = local_10f0;
  UE::Geometry::TTransformSRT3<double>::ClampMinimumScale(pTVar1,dVar74);
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar72 = (this->InitialTargetTransform).Translation.field0_0x0._s_0.X;
  dVar8 = (this->InitialTargetTransform).Translation.field0_0x0._s_0.Y;
  uVar13 = *(undefined4 *)((longlong)&(this->InitialTargetTransform).Translation.field0_0x0 + 0x10);
  uVar14 = *(undefined4 *)((longlong)&(this->InitialTargetTransform).Translation.field0_0x0 + 0x14);
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.Y = (double)uVar2;
  local_298 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_2a8 = (TObjectPtr<UTransformProxy>_u_0)
              (this->InitialTargetTransform).Translation.field0_0x0._s_0.X;
  dStack_2a0 = (this->InitialTargetTransform).Translation.field0_0x0._s_0.Y;
  pUVar37 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  local_288 = *(undefined4 *)&(this->InitialTargetTransform).Scale3D.field0_0x0;
  uStack_284 = *(undefined4 *)((longlong)&(this->InitialTargetTransform).Scale3D.field0_0x0 + 4);
  uStack_280 = *(undefined4 *)((longlong)&(this->InitialTargetTransform).Scale3D.field0_0x0 + 8);
  uStack_27c = *(undefined4 *)((longlong)&(this->InitialTargetTransform).Scale3D.field0_0x0 + 0xc);
  local_2c8 = (FLongTransactionTracker)(pTVar1->Rotation).field0_0x0._s_0.X;
  dStack_2c0 = (this->InitialTargetTransform).Rotation.field0_0x0._s_0.Y;
  TStack_2b0._4_4_ =
       (undefined4)
       ((ulonglong)
        *(undefined8 *)((longlong)&(this->InitialTargetTransform).Rotation.field0_0x0 + 0x18) >>
       0x20);
  local_1568._s_0.Z = (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.Z;
  local_2b8 = *(int *)((longlong)&(this->InitialTargetTransform).Rotation.field0_0x0 + 0x10);
  uStack_2b4 = *(undefined4 *)((longlong)&(this->InitialTargetTransform).Rotation.field0_0x0 + 0x14)
  ;
  TStack_2b0._0_4_ =
       *(undefined4 *)((longlong)&(this->InitialTargetTransform).Rotation.field0_0x0 + 0x18);
  uStack_290 = 0;
  uStack_270 = 0;
  local_278 = local_1568._s_0.Z;
  (**(code **)(*(longlong *)pUVar37 + 0xb58))(pUVar37,&local_2c8);
  auStack_e38._20_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
  auStack_e38._16_4_ = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
  uVar28 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_e50 = _UNK_15061cbc8;
  local_e58 = ___xmm_3ff00000000000000000000000000000;
  pTVar1 = &this->CurTargetTransform;
  auStack_e38._24_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
  auStack_e38._28_4_ =
       (undefined4)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20);
  (pTVar1->Rotation).field0_0x0._s_0.X = 0.0;
  (this->CurTargetTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->CurTargetTransform).Rotation.field0_0x0._s_0.Z = local_e58;
  (this->CurTargetTransform).Rotation.field0_0x0._s_0.W = dStack_e50;
  auStack_e38._8_4_ = (undefined4)uVar28;
  auStack_e38._12_4_ = (undefined4)((ulonglong)uVar28 >> 0x20);
  (this->CurTargetTransform).Translation.field0_0x0._s_0.X = dVar72;
  (this->CurTargetTransform).Translation.field0_0x0._s_0.Y = dVar8;
  *(undefined4 *)((longlong)&(this->CurTargetTransform).Translation.field0_0x0 + 0x10) = uVar13;
  *(undefined4 *)((longlong)&(this->CurTargetTransform).Translation.field0_0x0 + 0x14) = uVar14;
  *(undefined4 *)&(this->CurTargetTransform).Scale3D.field0_0x0 = auStack_e38._8_4_;
  *(undefined4 *)((longlong)&(this->CurTargetTransform).Scale3D.field0_0x0 + 4) = auStack_e38._12_4_
  ;
  *(undefined4 *)((longlong)&(this->CurTargetTransform).Scale3D.field0_0x0 + 8) = auStack_e38._16_4_
  ;
  *(undefined4 *)((longlong)&(this->CurTargetTransform).Scale3D.field0_0x0 + 0xc) =
       auStack_e38._20_4_;
  *(undefined4 *)((longlong)&(this->CurTargetTransform).Scale3D.field0_0x0 + 0x10) =
       auStack_e38._24_4_;
  *(undefined4 *)((longlong)&(this->CurTargetTransform).Scale3D.field0_0x0 + 0x14) =
       auStack_e38._28_4_;
  uVar2 = *(undefined8 *)((longlong)&(this->CurTargetTransform).Rotation.field0_0x0 + 0x18);
  local_268.Rotation.ZW.m128d_f64[1]._0_4_ = (undefined4)uVar2;
  local_268.Rotation.ZW.m128d_f64[1]._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_268.Scale3D.XY.m128d_f64[0] = (this->CurTargetTransform).Scale3D.field0_0x0._s_0.X;
  local_268.Scale3D.XY.m128d_f64[1] = (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Y;
  local_1568._s_0.Z = (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Z;
  auStack_e38._8_8_ = uVar28;
  local_268.Rotation.XY.m128d_f64[0] = (pTVar1->Rotation).field0_0x0._s_0.X;
  local_268.Rotation.XY.m128d_f64[1] = (this->CurTargetTransform).Rotation.field0_0x0._s_0.Y;
  local_268.Rotation.ZW.m128d_f64[0]._0_4_ =
       *(undefined4 *)((longlong)&(this->CurTargetTransform).Rotation.field0_0x0 + 0x10);
  local_268.Rotation.ZW.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)&(this->CurTargetTransform).Rotation.field0_0x0 + 0x14);
  local_268.Translation.XY.m128d_f64[0] = (this->CurTargetTransform).Translation.field0_0x0._s_0.X;
  local_268.Translation.XY.m128d_f64[1] = (this->CurTargetTransform).Translation.field0_0x0._s_0.Y;
  local_e68 = 0;
  uStack_e60 = 0;
  local_268.Translation.ZW.m128d_f64[0] = (this->CurTargetTransform).Translation.field0_0x0._s_0.Z;
  local_268.Translation.ZW.m128d_f64[1] = 0.0;
  local_268.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_e48 = dVar72;
  dStack_e40 = dVar8;
  auStack_e38._0_4_ = uVar13;
  auStack_e38._4_4_ = uVar14;
  local_268.Scale3D.ZW.m128d_f64[0] = local_1568._s_0.Z;
  USceneComponent::SetWorldTransform
            ((USceneComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr,&local_268,false,
             (FHitResult *)0x0,None);
  UE::ToolTarget::GetMaterialSet(&local_14f0,(UToolTarget *)this->_padding_,false);
  if (0 < local_14f0.Materials.ArrayNum) {
    pUVar37 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar37 + 0x6b8))
              (pUVar37,0,*(undefined8 *)local_14f0.Materials.AllocatorInstance.Data);
  }
  pUVar37 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  local_15a8.bHaveRequestLOD = true;
  local_15a8._1_3_ = 0x4cc66d;
  local_15a8.RequestLOD = LOD1;
  iStack_159c = local_10e8.Data.ArrayMax;
  local_15a8.bWantMeshTangents = false;
  local_15a8._9_3_ = 0;
  local_15c8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_15c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_15c0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_15c8,(FWriteAccessScope *)&local_1188);
  local_1170 = &local_15c0;
  puVar40 = UE::Core::Private::DelegateAllocate(0x30,&local_15c0);
  if (puVar40 != (undefined8 *)0x0) {
    *puVar40 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar41 = FDelegateHandle::GenerateNewID();
    puVar40[2] = uVar41;
    *puVar40 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDynamicMeshSculptTool____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar40[3] = 0;
    local_1518 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar40 + 3),(FObjectPtr)&local_1518);
    puVar40[4] = CONCAT44(local_15a8.RequestLOD,local_15a8._0_4_);
    puVar40[5] = CONCAT44(iStack_159c,local_15a8._8_4_);
  }
  if (local_1188.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1188.Accessor,&local_1188);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  AddDelegateInstance<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar37->OnMeshChanged,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_1510);
  (this->OnDynamicMeshComponentChangedHandle).ID = local_1510._0_8_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_15c8,(FWriteAccessScope *)&local_1220);
  if ((local_15c0.DelegateSize != 0) &&
     (local_15c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_15c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_15c0,0,0,0x10);
    local_15c0.DelegateSize = 0;
  }
  if (local_1220.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_1220.Accessor,&local_1220);
  }
  if (local_15c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_15c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_15c8.AccessDetector);
  pFVar39 = (FDynamicMesh3 *)
            (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
  UE::Geometry::FMeshNormals::QuickComputeVertexNormals(pFVar39,false);
  UpdateTarget(this);
  this->bTargetDirty = false;
  if (*(longlong *)&this->PendingTargetUpdate != 0) {
    do {
      plVar57 = *(longlong **)(*(longlong *)&this->PendingTargetUpdate + 0x60);
      cVar32 = (**(code **)(*plVar57 + 0x20))(plVar57,0xffffffff,0);
    } while (cVar32 == '\0');
  }
  this_02 = (FDynamicMesh3 *)
            (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))();
  UE::Geometry::FDynamicMesh3::GetBounds(this_02,(TAxisAlignedBox3<double> *)&local_1548._s_0,true);
  dVar8 = local_1528 - local_1548._s_0.Y;
  dVar70 = local_1520 - local_1548._s_0.Z;
  dVar72 = local_1530 - local_1548._s_0.X;
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  if (dVar70 <= 0.0) {
    dVar70 = 0.0;
  }
  if (dVar72 <= 0.0) {
    dVar72 = 0.0;
  }
  if (dVar8 <= dVar70) {
    dVar8 = dVar70;
  }
  if (dVar8 <= dVar72) {
    dVar8 = dVar72;
  }
  (this->BrushRelativeSizeRange).Max = dVar8;
  (this->BrushRelativeSizeRange).Min = dVar8 * dVar74;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar34 = UDynamicMeshBrushProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_af8,pUVar34);
  local_af8._8_8_ = this;
  pUVar42 = (UDynamicMeshBrushProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_af8);
  if (local_af8._64_8_ != 0) {
    plVar57 = (longlong *)(local_af8 + 0x50);
    if ((longlong *)local_af8._104_8_ != (longlong *)0x0) {
      plVar57 = (longlong *)local_af8._104_8_;
    }
    (**(code **)(*plVar57 + 0x10))(plVar57);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar42 != (UDynamicMeshBrushProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar42);
  }
  (this->BrushProperties).field0_0x0.DebugPtr = pUVar42;
  TVar71.Min = (float)(this->BrushRelativeSizeRange).Min;
  TVar71.Max = (float)(this->BrushRelativeSizeRange).Max;
  FBrushToolRadius::InitializeWorldSizeRange(&pUVar42->BrushSize,TVar71,true);
  fVar69 = FBrushToolRadius::GetWorldRadius
                     (&((this->BrushProperties).field0_0x0.DebugPtr)->BrushSize);
  this->CurrentBrushRadius = (double)fVar69;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar34 = UDynamicMeshBrushSculptProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a78,pUVar34);
  local_a78._8_8_ = this;
  pUVar43 = (UDynamicMeshBrushSculptProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a78);
  if (local_a78._64_8_ != 0) {
    plVar57 = (longlong *)(local_a78 + 0x50);
    if ((longlong *)local_a78._104_8_ != (longlong *)0x0) {
      plVar57 = (longlong *)local_a78._104_8_;
    }
    (**(code **)(*plVar57 + 0x10))(plVar57);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar43 != (UDynamicMeshBrushSculptProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar43);
  }
  (this->SculptProperties).field0_0x0.DebugPtr = pUVar43;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar34 = Z_Construct_UClass_UKelvinBrushProperties_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_9f8,pUVar34);
  local_9f8._8_8_ = this;
  pUVar44 = (UKelvinBrushProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_9f8);
  if (local_9f8._64_8_ != 0) {
    plVar57 = (longlong *)(local_9f8 + 0x50);
    if ((longlong *)local_9f8._104_8_ != (longlong *)0x0) {
      plVar57 = (longlong *)local_9f8._104_8_;
    }
    (**(code **)(*plVar57 + 0x10))(plVar57);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar44 != (UKelvinBrushProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar44);
  }
  (this->KelvinBrushProperties).field0_0x0.DebugPtr = pUVar44;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar34 = UBrushRemeshProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_978,pUVar34);
  local_978._8_8_ = this;
  pUVar45 = (UBrushRemeshProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_978);
  if ((double)local_978._64_8_ != 0.0) {
    plVar57 = local_928;
    if ((longlong *)local_928[3] != (longlong *)0x0) {
      plVar57 = (longlong *)local_928[3];
    }
    (**(code **)(*plVar57 + 0x10))(plVar57);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar45 != (UBrushRemeshProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar45);
  }
  (this->RemeshProperties).field0_0x0.DebugPtr = pUVar45;
  pwVar68 = L"";
  pcVar4 = *(code **)(pUVar45->_padding_ + 0x2b8);
  ::FString::FString(&local_13b8,L"");
  (*pcVar4)(pUVar45,this,&local_13b8);
  if (local_13b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_13b8.Data.AllocatorInstance.Data);
  }
  dVar72 = EstimateIntialSafeTargetLength(this,pFVar39,5000);
  this->InitialEdgeLength = dVar72;
  UE::ToolTarget::HideSourceObject((UToolTarget *)this->_padding_);
  this->bInDrag = false;
  this->bHaveRemeshed = false;
  this->bStampPending = false;
  this->bRemeshPending = false;
  this->ActiveVertexChange = (FMeshVertexChangeBuilder *)0x0;
  pUVar46 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar47 = UInteractiveToolManager::GetPairedGizmoManager(pUVar46);
  pcVar4 = *(code **)(pUVar47->_padding_ + 0x2c0);
  pUVar48 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar48,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar34 = Z_Construct_UClass_UBrushStampIndicatorBuilder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters(&local_8f8,pUVar34);
  local_8f8.Outer = pUVar48;
  pUVar48 = StaticConstructObject_Internal(&local_8f8);
  if ((double)local_8f8.PropertyInitCallback._0_8_ != 0.0) {
    plVar57 = (longlong *)&local_8f8.PropertyInitCallback.field_0x10;
    if ((longlong *)local_8f8.PropertyInitCallback._40_8_ != (longlong *)0x0) {
      plVar57 = (longlong *)local_8f8.PropertyInitCallback._40_8_;
    }
    (**(code **)(*plVar57 + 0x10))(plVar57);
  }
  (*pcVar4)(pUVar47,&BrushIndicatorGizmoType,pUVar48);
  pUVar46 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar47 = UInteractiveToolManager::GetPairedGizmoManager(pUVar46);
  local_1578 = (void *)0x0;
  local_1570 = 0;
  pUVar49 = (UBrushStampIndicator *)
            (**(code **)(pUVar47->_padding_ + 0x2d0))
                      (pUVar47,&BrushIndicatorGizmoType,&local_1578,this);
  if (pUVar49 == (UBrushStampIndicator *)0x0) {
    pFVar36 = GetTypeName<UBrushStampIndicator>(&local_df0);
    if ((pFVar36->Data).ArrayNum != 0) {
      pwVar68 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar68);
  }
  pUVar34 = Z_Construct_UClass_UBrushStampIndicator_NoRegister();
  iVar11 = (int)pUVar34->_padding_;
  if ((*(int *)(pUVar49->_padding_ + 0x38) < iVar11) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar49->_padding_ + 0x30) + (longlong)iVar11 * 8)
      != &pUVar34->_padding_)) {
    pFVar36 = GetTypeName<UBrushStampIndicator>(&local_dd0);
    if ((pFVar36->Data).ArrayNum == 0) {
      pwVar66 = L"";
    }
    else {
      pwVar66 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
    }
    pFVar36 = GetFullNameForCastLogError<UInteractiveGizmo>(&local_de0,(UInteractiveGizmo *)pUVar49)
    ;
    if ((pFVar36->Data).ArrayNum != 0) {
      pwVar68 = (wchar_t *)(pFVar36->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar68,pwVar66);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar49);
  }
  (this->BrushIndicator).field0_0x0.DebugPtr = pUVar49;
  if (local_1578 != (void *)0x0) {
    FMemory::Free(local_1578);
  }
  pUVar50 = MakeDefaultSphereMesh(this,(UObject *)this,this->TargetWorld,0x20);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar50 != (UPreviewMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar50);
  }
  (this->BrushIndicatorMesh).field0_0x0.DebugPtr = pUVar50;
  pUVar5 = (pUVar50->DynamicMeshComponent).field0_0x0.DebugPtr;
  pUVar49 = (this->BrushIndicator).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UDynamicMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  uVar28 = _UNK_152953678;
  uVar2 = ___xmm_3f8000003ecccccd3ecccccd3f666666;
  (pUVar49->AttachedComponent).field0_0x0.DebugPtr = (UPrimitiveComponent *)pUVar5;
  ((this->BrushIndicator).field0_0x0.DebugPtr)->LineThickness = 1.0;
  ((this->BrushIndicator).field0_0x0.DebugPtr)->bDrawIndicatorLines = true;
  ((this->BrushIndicator).field0_0x0.DebugPtr)->bDrawRadiusCircle = false;
  pUVar49 = (this->BrushIndicator).field0_0x0.DebugPtr;
  *(undefined8 *)&(pUVar49->LineColor).field0_0x0 = uVar2;
  *(undefined8 *)((longlong)&(pUVar49->LineColor).field0_0x0 + 8) = uVar28;
  (**(code **)(this->_padding_ + 0x318))(this,(this->BrushProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x318))(this,(this->SculptProperties).field0_0x0.DebugPtr);
  pUVar48 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar48,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar34 = Z_Construct_UClass_USculptMaxBrushProperties_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_878,pUVar34);
  local_878._8_8_ = pUVar48;
  pUVar51 = (USculptMaxBrushProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_878);
  if (local_878._64_8_ != 0) {
    plVar57 = (longlong *)(local_878 + 0x50);
    if ((longlong *)local_878._104_8_ != (longlong *)0x0) {
      plVar57 = (longlong *)local_878._104_8_;
    }
    (**(code **)(*plVar57 + 0x10))(plVar57);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar51 != (USculptMaxBrushProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar51);
  }
  (this->SculptMaxBrushProperties).field0_0x0.DebugPtr = pUVar51;
  pcVar4 = *(code **)(pUVar51->_padding_ + 0x2b8);
  ::FString::FString(&local_13a8,L"");
  (*pcVar4)(pUVar51,this,&local_13a8);
  if (local_13a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_13a8.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->SculptMaxBrushProperties).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x318))(this,(this->KelvinBrushProperties).field0_0x0.DebugPtr);
  pUVar44 = (this->KelvinBrushProperties).field0_0x0.DebugPtr;
  pcVar4 = *(code **)(pUVar44->_padding_ + 0x2b8);
  ::FString::FString(&local_1398,L"");
  (*pcVar4)(pUVar44,this,&local_1398);
  if (local_1398.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1398.Data.AllocatorInstance.Data);
  }
  pUVar48 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar48,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar34 = UFixedPlaneBrushProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_7f8,pUVar34);
  local_7f8._8_8_ = pUVar48;
  pUVar52 = (UFixedPlaneBrushProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_7f8);
  if (local_7f8._64_8_ != 0) {
    plVar57 = (longlong *)(local_7f8 + 0x50);
    if ((longlong *)local_7f8._104_8_ != (longlong *)0x0) {
      plVar57 = (longlong *)local_7f8._104_8_;
    }
    (**(code **)(*plVar57 + 0x10))(plVar57);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar52 != (UFixedPlaneBrushProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar52);
  }
  (this->GizmoProperties).field0_0x0.DebugPtr = pUVar52;
  pcVar4 = *(code **)(pUVar52->_padding_ + 0x2b8);
  ::FString::FString(&local_1388,L"");
  (*pcVar4)(pUVar52,this,&local_1388);
  if (local_1388.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1388.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->GizmoProperties).field0_0x0.DebugPtr);
  pUVar52 = (this->GizmoProperties).field0_0x0.DebugPtr;
  local_1208._s_0.X =
       (local_1548._s_0.X + local_1530) * __real_3fe0000000000000 *
       (this->CurTargetTransform).Scale3D.field0_0x0._s_0.X;
  local_1208._s_0.Z =
       (local_1548._s_0.Z + local_1520) * __real_3fe0000000000000 *
       (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Z;
  local_1208._s_0.Y =
       (local_1548._s_0.Y + local_1528) * __real_3fe0000000000000 *
       (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Y;
  pTVar53 = UE::Geometry::operator*<double>
                      (&local_dc0,&pTVar1->Rotation,(TVector<double> *)&local_1208._s_0);
  local_1528 = local_1528 - local_1548._s_0.Y;
  local_1530 = local_1530 - local_1548._s_0.X;
  local_1520 = local_1520 - local_1548._s_0.Z;
  dVar72 = (pTVar53->field0_0x0)._s_0.X + (this->CurTargetTransform).Translation.field0_0x0._s_0.X;
  dVar8 = (pTVar53->field0_0x0)._s_0.Y + (this->CurTargetTransform).Translation.field0_0x0._s_0.Y;
  if (local_1528 <= 0.0) {
    local_1528 = 0.0;
  }
  if (local_1530 <= 0.0) {
    local_1530 = 0.0;
  }
  if (local_1520 <= 0.0) {
    local_1520 = 0.0;
  }
  dVar9 = (pTVar53->field0_0x0)._s_0.Z + (this->CurTargetTransform).Translation.field0_0x0._s_0.Z;
  dVar70 = (pUVar52->Position).field0_0x0._s_0.Y - dVar8;
  dVar74 = (pUVar52->Position).field0_0x0._s_0.X - dVar72;
  if (local_1528 <= local_1520) {
    local_1528 = local_1520;
  }
  dVar73 = (pUVar52->Position).field0_0x0._s_0.Z - dVar9;
  if (local_1528 <= local_1530) {
    local_1528 = local_1530;
  }
  if ((local_1528 + __real_408f400000000000) * (local_1528 + __real_408f400000000000) <
      dVar70 * dVar70 + dVar74 * dVar74 + dVar73 * dVar73) {
    local_1568._s_0.Z = __real_3ff0000000000000;
    local_1568._s_0.X = 0.0;
    local_1568._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&pUVar52->Rotation,(TVector<double> *)&local_1238._s_0,
               (TVector<double> *)&local_1568._s_0);
    dVar74 = (dVar72 - (pUVar52->Position).field0_0x0._s_0.X) * local_1238._s_0.X +
             (dVar8 - (pUVar52->Position).field0_0x0._s_0.Y) * local_1238._s_0.Y +
             (dVar9 - (pUVar52->Position).field0_0x0._s_0.Z) * local_1238._s_0.Z;
    dVar8 = dVar8 - local_1238._s_0.Y * dVar74;
    auVar10._8_4_ = SUB84(dVar8,0);
    auVar10._0_8_ = dVar72 - local_1238._s_0.X * dVar74;
    auVar10._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *(undefined1 (*) [16])&(pUVar52->Position).field0_0x0 = auVar10;
    (pUVar52->Position).field0_0x0._s_0.Z = dVar9 - local_1238._s_0.Z * dVar74;
  }
  if (this->bEnableRemeshing != false) {
    ((this->SculptProperties).field0_0x0.DebugPtr)->bIsRemeshingEnabled = true;
    (**(code **)(this->_padding_ + 0x318))(this,(this->RemeshProperties).field0_0x0.DebugPtr);
    pUVar48 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar48,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar34 = UDynamicSculptToolActions::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_778,pUVar34);
    local_778._8_8_ = pUVar48;
    pUVar54 = (UDynamicSculptToolActions *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_778);
    if ((double)local_778._64_8_ != 0.0) {
      plVar57 = (longlong *)(local_778 + 0x50);
      if ((longlong *)local_778._104_8_ != (longlong *)0x0) {
        plVar57 = (longlong *)local_778._104_8_;
      }
      (**(code **)(*plVar57 + 0x10))(plVar57);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar54 != (UDynamicSculptToolActions *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar54);
    }
    (this->SculptToolActions).field0_0x0.DebugPtr = pUVar54;
    local_1510._8_8_ = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=(&(pUVar54->ParentTool).WeakPtr,(FObjectPtr)((longlong)local_1510 + 8))
    ;
    (**(code **)(this->_padding_ + 0x318))(this,(this->SculptToolActions).field0_0x0.DebugPtr);
  }
  pUVar42 = (this->BrushProperties).field0_0x0.DebugPtr;
  pcVar4 = *(code **)(pUVar42->_padding_ + 0x2b8);
  ::FString::FString(&local_1378,L"");
  (*pcVar4)(pUVar42,this,&local_1378);
  if (local_1378.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1378.Data.AllocatorInstance.Data);
  }
  fVar69 = FBrushToolRadius::GetWorldRadius
                     (&((this->BrushProperties).field0_0x0.DebugPtr)->BrushSize);
  pUVar43 = (this->SculptProperties).field0_0x0.DebugPtr;
  this->CurrentBrushRadius = (double)fVar69;
  pcVar4 = *(code **)(pUVar43->_padding_ + 0x2b8);
  ::FString::FString(&local_1368,L"");
  (*pcVar4)(pUVar43,this,&local_1368);
  if (local_1368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1368.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x338))(this,(this->GizmoProperties).field0_0x0.DebugPtr,0);
  (**(code **)(this->_padding_ + 0x338))
            (this,(this->SculptMaxBrushProperties).field0_0x0.DebugPtr,0);
  (**(code **)(this->_padding_ + 0x338))(this,(this->KelvinBrushProperties).field0_0x0.DebugPtr,0);
  pUVar48 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar48,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar34 = Z_Construct_UClass_UMeshEditingViewProperties_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_6f8,pUVar34);
  local_6f8._8_8_ = pUVar48;
  pUVar55 = (UMeshEditingViewProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_6f8);
  if (local_6f8._64_8_ != 0) {
    FVar67.Data = (FScriptContainerElement *)(local_6f8 + 0x50);
    if (local_690.Data != (FScriptContainerElement *)0x0) {
      FVar67.Data = local_690.Data;
    }
    (**(code **)(*(longlong *)FVar67.Data + 0x10))(FVar67.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar55 != (UMeshEditingViewProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar55);
  }
  (this->ViewProperties).field0_0x0.DebugPtr = pUVar55;
  pcVar4 = *(code **)(pUVar55->_padding_ + 0x2b8);
  ::FString::FString(&local_1588,L"");
  (*pcVar4)(pUVar55,this,&local_1588);
  if (local_1588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1588.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x318))(this,(this->ViewProperties).field0_0x0.DebugPtr);
  local_1088 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_2>,0,0>::
                _vftable_;
  local_1098[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_2>,void,bool>::Call;
  local_1058 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_1>,0,0>::
                _vftable_;
  local_1068[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_1>,bool>::Call;
  local_1070 = 0;
  local_1040.DebugPtr = (UDynamicMeshBrushProperties *)0x0;
  local_1080 = this;
  local_1050 = this;
  TValueWatcher<bool>::Initialize
            (&this->ShowWireframeWatcher,(TFunction<bool___cdecl(void)> *)local_1068,
             (TFunction<void___cdecl(bool)> *)local_1098,
             ((this->ViewProperties).field0_0x0.DebugPtr)->bShowWireframe);
  local_13f0 = (undefined ***)0x0;
  local_1408 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_4>,0,0>::
                _vftable_;
  local_1418 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_4>,void,enum_EMeshEditingMaterialModes>
               ::Call;
  local_1330 = (undefined ***)0x0;
  local_1348 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_3>,0,0>::
                _vftable_;
  local_1358 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_3>,enum_EMeshEditingMaterialModes>
               ::Call;
  local_418 = (FDynamicMesh3 *)
              UE::Core::Private::Function::
              TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_3>,enum_EMeshEditingMaterialModes>
              ::Call;
  FStack_3f0.Data = (FScriptContainerElement *)0x0;
  local_1400 = this;
  local_1340 = this;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_3>,0,0>::CloneToEmptyStorage
            (&local_1348,(FFunctionStorage *)local_408);
  pFVar39 = *(FDynamicMesh3 **)&(this->MaterialModeWatcher).GetValueFunc;
  pFVar58 = *(FScriptContainerElement **)&(this->MaterialModeWatcher).GetValueFunc.field_0x8;
  iVar11 = *(int *)&(this->MaterialModeWatcher).GetValueFunc.field_0x10;
  iVar12 = *(int *)&(this->MaterialModeWatcher).GetValueFunc.field_0x14;
  uVar13 = *(undefined4 *)&(this->MaterialModeWatcher).GetValueFunc.field_0x18;
  uVar14 = *(undefined4 *)&(this->MaterialModeWatcher).GetValueFunc.field_0x1c;
  dVar72 = *(double *)&(this->MaterialModeWatcher).GetValueFunc.field_0x20;
  pFVar15 = *(FScriptContainerElement **)&(this->MaterialModeWatcher).GetValueFunc.field_0x28;
  *(FDynamicMesh3 **)&(this->MaterialModeWatcher).GetValueFunc = local_418;
  *(FScriptContainerElement **)&(this->MaterialModeWatcher).GetValueFunc.field_0x8 = FStack_410.Data
  ;
  *(undefined4 *)&(this->MaterialModeWatcher).GetValueFunc.field_0x10 = local_408._0_4_;
  *(undefined4 *)&(this->MaterialModeWatcher).GetValueFunc.field_0x14 = local_408._4_4_;
  *(undefined4 *)&(this->MaterialModeWatcher).GetValueFunc.field_0x18 = local_408._8_4_;
  *(undefined4 *)&(this->MaterialModeWatcher).GetValueFunc.field_0x1c = local_408._12_4_;
  *(undefined8 *)&(this->MaterialModeWatcher).GetValueFunc.field_0x20 = local_408._16_8_;
  *(FScriptContainerElement **)&(this->MaterialModeWatcher).GetValueFunc.field_0x28 =
       FStack_3f0.Data;
  local_418 = pFVar39;
  FStack_410.Data = pFVar58;
  local_408._0_4_ = iVar11;
  local_408._4_4_ = iVar12;
  local_408._8_4_ = uVar13;
  local_408._12_4_ = uVar14;
  local_408._16_8_ = dVar72;
  FStack_3f0.Data = pFVar15;
  if (pFVar39 != (FDynamicMesh3 *)0x0) {
    pFVar58 = (FScriptContainerElement *)local_408;
    if (pFVar15 != (FScriptContainerElement *)0x0) {
      pFVar58 = pFVar15;
    }
    (**(code **)(*(longlong *)pFVar58 + 0x10))();
  }
  local_4a8 = local_1418;
  plStack_480 = (longlong *)0x0;
  if (local_1418 != (code *)0x0) {
    pppuVar62 = &local_1408;
    if (local_13f0 != (undefined ***)0x0) {
      pppuVar62 = local_13f0;
    }
    (*(code *)**pppuVar62)(pppuVar62,local_498);
  }
  lVar16 = *(longlong *)&(this->MaterialModeWatcher).OnValueChangedFunc;
  uVar2 = *(undefined8 *)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x8;
  uVar13 = *(undefined4 *)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x10;
  uVar14 = *(undefined4 *)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x14;
  uVar17 = *(undefined4 *)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x18;
  uVar18 = *(undefined4 *)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x1c;
  dVar72 = *(double *)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x20;
  plVar57 = *(longlong **)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x28;
  *(code **)&(this->MaterialModeWatcher).OnValueChangedFunc = local_4a8;
  *(undefined8 *)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x8 = uStack_4a0;
  *(undefined4 *)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x10 =
       (undefined4)local_498[0];
  *(undefined4 *)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x14 = local_498[0]._4_4_;
  *(undefined4 *)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x18 =
       (undefined4)local_498[1];
  *(undefined4 *)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x1c = local_498[1]._4_4_;
  *(double *)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x20 = local_488;
  *(longlong **)&(this->MaterialModeWatcher).OnValueChangedFunc.field_0x28 = plStack_480;
  local_4a8 = (code *)lVar16;
  uStack_4a0 = uVar2;
  local_498[0]._0_4_ = uVar13;
  local_498[0]._4_4_ = uVar14;
  local_498[1]._0_4_ = uVar17;
  local_498[1]._4_4_ = uVar18;
  local_488 = dVar72;
  plStack_480 = plVar57;
  if (lVar16 != 0) {
    plVar64 = local_498;
    if (plVar57 != (longlong *)0x0) {
      plVar64 = plVar57;
    }
    (**(code **)(*plVar64 + 0x10))();
  }
  (this->MaterialModeWatcher).CachedValue = ExistingMaterial;
  if (local_1358 != (code *)0x0) {
    pppuVar62 = &local_1348;
    if (local_1330 != (undefined ***)0x0) {
      pppuVar62 = local_1330;
    }
    (*(code *)(*pppuVar62)[2])();
  }
  if (local_1418 != (code *)0x0) {
    pppuVar62 = &local_1408;
    if (local_13f0 != (undefined ***)0x0) {
      pppuVar62 = local_13f0;
    }
    (*(code *)(*pppuVar62)[2])();
  }
  local_318.HeapAllocation = (void *)0x0;
  FVar6 = (((this->ViewProperties).field0_0x0.DebugPtr)->CustomMaterial).WeakPtr;
  local_1438 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_6>,0,0>::
                _vftable_;
  local_1448 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_6>,void,TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_>
               ::Call;
  local_11a8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_5>,0,0>::
                _vftable_;
  local_11b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_5>,TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_>
               ::Call;
  local_328 = UE::Core::Private::Function::
              TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_5>,TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_>
              ::Call;
  local_1420 = (undefined ***)0x0;
  local_1190 = (undefined ***)0x0;
  local_1430 = this;
  local_11a0 = this;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_5>,0,0>::CloneToEmptyStorage
            (&local_11a8,&local_318);
  lVar16 = *(longlong *)&(this->CustomMaterialWatcher).GetValueFunc;
  uVar2 = *(undefined8 *)&(this->CustomMaterialWatcher).GetValueFunc.field_0x8;
  pFVar19 = *(FFunctionStorage **)&(this->CustomMaterialWatcher).GetValueFunc.field_0x28;
  *(code **)&(this->CustomMaterialWatcher).GetValueFunc = local_328;
  *(undefined8 *)&(this->CustomMaterialWatcher).GetValueFunc.field_0x8 = uStack_320;
  (this->CustomMaterialWatcher).GetValueFunc.field_0x10 = local_318.InlineAllocation[0];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x11 = local_318.InlineAllocation[1];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x12 = local_318.InlineAllocation[2];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x13 = local_318.InlineAllocation[3];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x14 = local_318.InlineAllocation[4];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x15 = local_318.InlineAllocation[5];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x16 = local_318.InlineAllocation[6];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x17 = local_318.InlineAllocation[7];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x18 = local_318.InlineAllocation[8];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x19 = local_318.InlineAllocation[9];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x1a = local_318.InlineAllocation[10];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x1b = local_318.InlineAllocation[0xb];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x1c = local_318.InlineAllocation[0xc];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x1d = local_318.InlineAllocation[0xd];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x1e = local_318.InlineAllocation[0xe];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x1f = local_318.InlineAllocation[0xf];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x20 = local_318.InlineAllocation[0x10];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x21 = local_318.InlineAllocation[0x11];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x22 = local_318.InlineAllocation[0x12];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x23 = local_318.InlineAllocation[0x13];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x24 = local_318.InlineAllocation[0x14];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x25 = local_318.InlineAllocation[0x15];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x26 = local_318.InlineAllocation[0x16];
  (this->CustomMaterialWatcher).GetValueFunc.field_0x27 = local_318.InlineAllocation[0x17];
  *(void **)&(this->CustomMaterialWatcher).GetValueFunc.field_0x28 = local_318.HeapAllocation;
  local_328 = (code *)lVar16;
  uStack_320 = uVar2;
  local_318.InlineAllocation[0] = (this->CustomMaterialWatcher).GetValueFunc.field_0x10;
  local_318.InlineAllocation[1] = (this->CustomMaterialWatcher).GetValueFunc.field_0x11;
  local_318.InlineAllocation[2] = (this->CustomMaterialWatcher).GetValueFunc.field_0x12;
  local_318.InlineAllocation[3] = (this->CustomMaterialWatcher).GetValueFunc.field_0x13;
  local_318.InlineAllocation[4] = (this->CustomMaterialWatcher).GetValueFunc.field_0x14;
  local_318.InlineAllocation[5] = (this->CustomMaterialWatcher).GetValueFunc.field_0x15;
  local_318.InlineAllocation[6] = (this->CustomMaterialWatcher).GetValueFunc.field_0x16;
  local_318.InlineAllocation[7] = (this->CustomMaterialWatcher).GetValueFunc.field_0x17;
  local_318.InlineAllocation[8] = (this->CustomMaterialWatcher).GetValueFunc.field_0x18;
  local_318.InlineAllocation[9] = (this->CustomMaterialWatcher).GetValueFunc.field_0x19;
  local_318.InlineAllocation[10] = (this->CustomMaterialWatcher).GetValueFunc.field_0x1a;
  local_318.InlineAllocation[0xb] = (this->CustomMaterialWatcher).GetValueFunc.field_0x1b;
  local_318.InlineAllocation[0xc] = (this->CustomMaterialWatcher).GetValueFunc.field_0x1c;
  local_318.InlineAllocation[0xd] = (this->CustomMaterialWatcher).GetValueFunc.field_0x1d;
  local_318.InlineAllocation[0xe] = (this->CustomMaterialWatcher).GetValueFunc.field_0x1e;
  local_318.InlineAllocation[0xf] = (this->CustomMaterialWatcher).GetValueFunc.field_0x1f;
  local_318.InlineAllocation[0x10] = (this->CustomMaterialWatcher).GetValueFunc.field_0x20;
  local_318.InlineAllocation[0x11] = (this->CustomMaterialWatcher).GetValueFunc.field_0x21;
  local_318.InlineAllocation[0x12] = (this->CustomMaterialWatcher).GetValueFunc.field_0x22;
  local_318.InlineAllocation[0x13] = (this->CustomMaterialWatcher).GetValueFunc.field_0x23;
  local_318.InlineAllocation[0x14] = (this->CustomMaterialWatcher).GetValueFunc.field_0x24;
  local_318.InlineAllocation[0x15] = (this->CustomMaterialWatcher).GetValueFunc.field_0x25;
  local_318.InlineAllocation[0x16] = (this->CustomMaterialWatcher).GetValueFunc.field_0x26;
  local_318.InlineAllocation[0x17] = (this->CustomMaterialWatcher).GetValueFunc.field_0x27;
  local_318.HeapAllocation = pFVar19;
  if (lVar16 != 0) {
    pFVar60 = &local_318;
    if (pFVar19 != (FFunctionStorage *)0x0) {
      pFVar60 = pFVar19;
    }
    (**(code **)(*(longlong *)pFVar60->InlineAllocation + 0x10))();
  }
  local_2f8 = local_1448;
  FStack_2d0.OpenCount = 0;
  FStack_2d0.MaxOpen = 0;
  if (local_1448 != (code *)0x0) {
    pppuVar62 = &local_1438;
    if (local_1420 != (undefined ***)0x0) {
      pppuVar62 = local_1420;
    }
    (*(code *)**pppuVar62)(pppuVar62,local_2e8);
  }
  lVar16 = *(longlong *)&(this->CustomMaterialWatcher).OnValueChangedFunc;
  FVar20 = *(ForElementType<FSetElementId> *)
            &(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x8;
  iVar11 = *(int *)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x10;
  uVar13 = *(undefined4 *)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x14;
  uVar14 = *(undefined4 *)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x18;
  uVar17 = *(undefined4 *)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x1c;
  pFVar21 = *(FDynamicMeshChangeTracker **)
             &(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x20;
  FVar22.OpenCount = *(int *)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x28;
  FVar22.MaxOpen = *(int *)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x2c;
  *(code **)&(this->CustomMaterialWatcher).OnValueChangedFunc = local_2f8;
  *(ForElementType<FSetElementId> *)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x8 =
       FStack_2f0;
  *(int *)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x10 = local_2e8[0];
  *(int *)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x14 = local_2e8[1];
  *(undefined4 *)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x18 = uStack_2e0;
  *(undefined4 *)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x1c = uStack_2dc;
  *(FDynamicMeshChangeTracker **)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x20 =
       local_2d8;
  *(int *)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x28 = FStack_2d0.OpenCount;
  *(int *)&(this->CustomMaterialWatcher).OnValueChangedFunc.field_0x2c = FStack_2d0.MaxOpen;
  local_2f8 = (code *)lVar16;
  FStack_2f0 = FVar20;
  local_2e8[0] = iVar11;
  local_2e8[1] = uVar13;
  uStack_2e0 = uVar14;
  uStack_2dc = uVar17;
  local_2d8 = pFVar21;
  FStack_2d0 = FVar22;
  if (lVar16 != 0) {
    FVar59 = (FLongTransactionTracker)local_2e8;
    if (FVar22 != (FLongTransactionTracker)0x0) {
      FVar59 = FVar22;
    }
    (**(code **)(*(longlong *)FVar59 + 0x10))();
  }
  (this->CustomMaterialWatcher).CachedValue.WeakPtr = FVar6;
  if (local_11b8 != (code *)0x0) {
    pppuVar62 = &local_11a8;
    if (local_1190 != (undefined ***)0x0) {
      pppuVar62 = local_1190;
    }
    (*(code *)(*pppuVar62)[2])();
  }
  if (local_1448 != (code *)0x0) {
    pppuVar62 = &local_1438;
    if (local_1420 != (undefined ***)0x0) {
      pppuVar62 = local_1420;
    }
    (*(code *)(*pppuVar62)[2])();
  }
  local_1028 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_8>,0,0>::
                _vftable_;
  local_1038[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_8>,void,bool>::Call;
  local_ff8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_7>,0,0>::
               _vftable_;
  local_1008[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_7>,bool>::Call;
  local_1010.DebugPtr = (UMeshEditingViewProperties *)0x0;
  local_fe0 = 0;
  local_1020 = (TObjectPtr<UBrushRemeshProperties>_u_0)this;
  local_ff0 = this;
  TValueWatcher<bool>::Initialize
            (&this->FlatShadingWatcher,(TFunction<bool___cdecl(void)> *)local_1008,
             (TFunction<void___cdecl(bool)> *)local_1038,
             ((this->ViewProperties).field0_0x0.DebugPtr)->bFlatShading);
  pUVar55 = (this->ViewProperties).field0_0x0.DebugPtr;
  local_1148._0_8_ = *(undefined8 *)&(pUVar55->Color).field0_0x0;
  local_1148._8_8_ = *(undefined8 *)((longlong)&(pUVar55->Color).field0_0x0 + 8);
  local_fb0 = 0;
  local_fc8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_10>,0,0>::
               _vftable_;
  local_fd8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_10>,void,FLinearColor>
                 ::Call;
  local_f98 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_9>,0,0>::
               _vftable_;
  local_fa8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_9>,FLinearColor>
                 ::Call;
  local_f80.DebugPtr = (UPreviewMesh *)0x0;
  local_fc0 = this;
  local_f90 = (TObjectPtr<UBrushStampIndicator>_u_0)this;
  TValueWatcher<FLinearColor>::Initialize
            (&this->ColorWatcher,(TFunction<FLinearColor___cdecl(void)> *)local_fa8,
             (TFunction<void___cdecl(FLinearColor)> *)local_fd8,(FLinearColor *)&local_1148._s_0);
  paStack_4e0 = (void *)0x0;
  TVar7 = (((this->ViewProperties).field0_0x0.DebugPtr)->Image).field0_0x0;
  local_13d8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_12>,0,0>::
                _vftable_;
  local_13e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_12>,void,UTexture2D_*>
               ::Call;
  local_11d8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_11>,0,0>::
                _vftable_;
  local_11e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_11>,UTexture2D_*>::
               Call;
  local_508.Ptr =
       (FDynamicMeshAttributeSet *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_11>,UTexture2D_*>::Call;
  local_13c0 = (undefined ***)0x0;
  local_11c0 = (undefined ***)0x0;
  local_13d0 = this;
  local_11d0 = this;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_11>,0,0>::CloneToEmptyStorage
            (&local_11d8,(FFunctionStorage *)local_4f8);
  pFVar23 = *(FDynamicMeshAttributeSet **)&(this->ImageWatcher).GetValueFunc;
  aVar24 = *(atomic<unsigned_int> *)&(this->ImageWatcher).GetValueFunc.field_0x10;
  uVar13 = *(undefined4 *)&(this->ImageWatcher).GetValueFunc.field_0x14;
  uVar25 = *(uint *)&(this->ImageWatcher).GetValueFunc.field_0x18;
  plVar57 = *(longlong **)&(this->ImageWatcher).GetValueFunc.field_0x28;
  *(FDynamicMeshAttributeSet **)&(this->ImageWatcher).GetValueFunc = local_508.Ptr;
  (this->ImageWatcher).GetValueFunc.field_0x8 = bStack_500;
  (this->ImageWatcher).GetValueFunc.field_0x9 = uStack_4ff;
  *(short *)&(this->ImageWatcher).GetValueFunc.field_0xa = sStack_4fe;
  *(atomic<unsigned_int> *)&(this->ImageWatcher).GetValueFunc.field_0xc = aStack_4fc;
  *(undefined4 *)&(this->ImageWatcher).GetValueFunc.field_0x10 = local_4f8._0_4_;
  *(undefined4 *)&(this->ImageWatcher).GetValueFunc.field_0x14 = local_4f8._4_4_;
  *(uint *)&(this->ImageWatcher).GetValueFunc.field_0x18 = uStack_4f0;
  (this->ImageWatcher).GetValueFunc.field_0x1c = FStack_4ec.bIsEnabled;
  (this->ImageWatcher).GetValueFunc.field_0x1d = FStack_4ec.Mutex.State;
  *(undefined2 *)&(this->ImageWatcher).GetValueFunc.field_0x1e = FStack_4ec._2_2_;
  (this->ImageWatcher).GetValueFunc.field_0x20 = (uchar)FStack_4ec.Value;
  (this->ImageWatcher).GetValueFunc.field_0x21 = FStack_4ec.Value._1_1_;
  (this->ImageWatcher).GetValueFunc.field_0x22 = FStack_4ec.Value._2_1_;
  (this->ImageWatcher).GetValueFunc.field_0x23 = FStack_4ec.Value._3_1_;
  (this->ImageWatcher).GetValueFunc.field_0x24 = uStack_4e4;
  (this->ImageWatcher).GetValueFunc.field_0x25 = uStack_4e3;
  (this->ImageWatcher).GetValueFunc.field_0x26 = uStack_4e2;
  (this->ImageWatcher).GetValueFunc.field_0x27 = uStack_4e1;
  *(atomic<unsigned_int> **)&(this->ImageWatcher).GetValueFunc.field_0x28 = paStack_4e0;
  local_508.Ptr = pFVar23;
  bStack_500 = (bool)(this->ImageWatcher).GetValueFunc.field_0x8;
  uStack_4ff = (this->ImageWatcher).GetValueFunc.field_0x9;
  sStack_4fe = *(short *)&(this->ImageWatcher).GetValueFunc.field_0xa;
  aStack_4fc = *(atomic<unsigned_int> *)&(this->ImageWatcher).GetValueFunc.field_0xc;
  local_4f8._0_4_ = aVar24;
  local_4f8._4_4_ = uVar13;
  uStack_4f0 = uVar25;
  FStack_4ec.bIsEnabled = (bool)(this->ImageWatcher).GetValueFunc.field_0x1c;
  FStack_4ec.Mutex.State = (atomic<unsigned_char>)(this->ImageWatcher).GetValueFunc.field_0x1d;
  FStack_4ec._2_2_ = *(undefined2 *)&(this->ImageWatcher).GetValueFunc.field_0x1e;
  FStack_4ec.Value._0_1_ = (this->ImageWatcher).GetValueFunc.field_0x20;
  FStack_4ec.Value._1_1_ = (this->ImageWatcher).GetValueFunc.field_0x21;
  FStack_4ec.Value._2_1_ = (this->ImageWatcher).GetValueFunc.field_0x22;
  FStack_4ec.Value._3_1_ = (this->ImageWatcher).GetValueFunc.field_0x23;
  uStack_4e4 = (this->ImageWatcher).GetValueFunc.field_0x24;
  uStack_4e3 = (this->ImageWatcher).GetValueFunc.field_0x25;
  uStack_4e2 = (this->ImageWatcher).GetValueFunc.field_0x26;
  uStack_4e1 = (this->ImageWatcher).GetValueFunc.field_0x27;
  paStack_4e0 = (atomic<unsigned_int> *)plVar57;
  if (pFVar23 != (FDynamicMeshAttributeSet *)0x0) {
    plVar64 = (longlong *)local_4f8;
    if (plVar57 != (longlong *)0x0) {
      plVar64 = plVar57;
    }
    (**(code **)(*plVar64 + 0x10))();
  }
  local_4d8 = local_13e8;
  uStack_4b0 = (longlong *)0x0;
  if (local_13e8 != (code *)0x0) {
    pppuVar62 = &local_13d8;
    if (local_13c0 != (undefined ***)0x0) {
      pppuVar62 = local_13c0;
    }
    (*(code *)**pppuVar62)(pppuVar62,&local_4c8);
  }
  lVar16 = *(longlong *)&(this->ImageWatcher).OnValueChangedFunc;
  pFVar39 = *(FDynamicMesh3 **)&(this->ImageWatcher).OnValueChangedFunc.field_0x8;
  uVar13 = *(undefined4 *)&(this->ImageWatcher).OnValueChangedFunc.field_0x10;
  uVar14 = *(undefined4 *)&(this->ImageWatcher).OnValueChangedFunc.field_0x14;
  iVar11 = *(int *)&(this->ImageWatcher).OnValueChangedFunc.field_0x18;
  iVar12 = *(int *)&(this->ImageWatcher).OnValueChangedFunc.field_0x1c;
  uVar2 = *(undefined8 *)&(this->ImageWatcher).OnValueChangedFunc.field_0x20;
  plVar57 = *(longlong **)&(this->ImageWatcher).OnValueChangedFunc.field_0x28;
  *(code **)&(this->ImageWatcher).OnValueChangedFunc = local_4d8;
  *(FDynamicMesh3 **)&(this->ImageWatcher).OnValueChangedFunc.field_0x8 = pFStack_4d0;
  *(undefined4 *)&(this->ImageWatcher).OnValueChangedFunc.field_0x10 = local_4c8;
  *(undefined4 *)&(this->ImageWatcher).OnValueChangedFunc.field_0x14 = uStack_4c4;
  *(int *)&(this->ImageWatcher).OnValueChangedFunc.field_0x18 = iStack_4c0;
  *(int *)&(this->ImageWatcher).OnValueChangedFunc.field_0x1c = iStack_4bc;
  *(undefined1 (*) [8])&(this->ImageWatcher).OnValueChangedFunc.field_0x20 = local_4b8;
  *(longlong **)&(this->ImageWatcher).OnValueChangedFunc.field_0x28 = uStack_4b0;
  local_4d8 = (code *)lVar16;
  pFStack_4d0 = pFVar39;
  local_4c8 = uVar13;
  uStack_4c4 = uVar14;
  iStack_4c0 = iVar11;
  iStack_4bc = iVar12;
  local_4b8 = (undefined1  [8])uVar2;
  uStack_4b0 = plVar57;
  if (lVar16 != 0) {
    plVar64 = (longlong *)&local_4c8;
    if (plVar57 != (longlong *)0x0) {
      plVar64 = plVar57;
    }
    (**(code **)(*plVar64 + 0x10))();
  }
  (this->ImageWatcher).CachedValue = (UTexture2D *)TVar7;
  if (local_11e8 != (code *)0x0) {
    pppuVar62 = &local_11d8;
    if (local_11c0 != (undefined ***)0x0) {
      pppuVar62 = local_11c0;
    }
    (*(code *)(*pppuVar62)[2])();
  }
  if (local_13e8 != (code *)0x0) {
    pppuVar62 = &local_13d8;
    if (local_13c0 != (undefined ***)0x0) {
      pppuVar62 = local_13c0;
    }
    (*(code *)(*pppuVar62)[2])();
  }
  pUVar55 = (this->ViewProperties).field0_0x0.DebugPtr;
  local_1138._0_8_ = *(undefined8 *)&(pUVar55->TransparentMaterialColor).field0_0x0;
  local_1138._8_8_ = *(undefined8 *)((longlong)&(pUVar55->TransparentMaterialColor).field0_0x0 + 8);
  local_f60._16_8_ = 0.0;
  local_f68 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_14>,0,0>::
               _vftable_;
  local_f78[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_14>,void,FLinearColor>
                 ::Call;
  local_f48._16_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_13>,0,0>::_vftable_;
  local_f48._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_13>,FLinearColor>::Call;
  local_f48._40_8_ = 0.0;
  local_f60._0_8_ = this;
  local_f48._24_8_ = this;
  TValueWatcher<FLinearColor>::Initialize
            (&this->TransparentColorWatcher,(TFunction<FLinearColor___cdecl(void)> *)local_f48,
             (TFunction<void___cdecl(FLinearColor)> *)local_f78,(FLinearColor *)&local_1138._s_0);
  local_468.HeapAllocation = (void *)0x0;
  dVar72 = ((this->ViewProperties).field0_0x0.DebugPtr)->Opacity;
  local_14c8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_16>,0,0>::
                _vftable_;
  local_14d8 = (FScriptContainerElement *)
               UE::Core::Private::Function::
               TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_16>,void,double>::
               Call;
  local_1318 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_15>,0,0>::
                _vftable_;
  local_1328 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_15>,double>::Call;
  local_478.Data =
       (FScriptContainerElement *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_15>,double>::Call;
  local_14b0 = (undefined ***)0x0;
  local_1300 = (undefined ***)0x0;
  local_14c0 = this;
  local_1310 = this;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_15>,0,0>::CloneToEmptyStorage
            (&local_1318,&local_468);
  pFVar58 = *(FScriptContainerElement **)&(this->OpacityWatcher).GetValueFunc;
  pFVar19 = *(FFunctionStorage **)&(this->OpacityWatcher).GetValueFunc.field_0x28;
  *(FScriptContainerElement **)&(this->OpacityWatcher).GetValueFunc = local_478.Data;
  *(int *)&(this->OpacityWatcher).GetValueFunc.field_0x8 = iStack_470;
  *(int *)&(this->OpacityWatcher).GetValueFunc.field_0xc = iStack_46c;
  (this->OpacityWatcher).GetValueFunc.field_0x10 = local_468.InlineAllocation[0];
  (this->OpacityWatcher).GetValueFunc.field_0x11 = local_468.InlineAllocation[1];
  (this->OpacityWatcher).GetValueFunc.field_0x12 = local_468.InlineAllocation[2];
  (this->OpacityWatcher).GetValueFunc.field_0x13 = local_468.InlineAllocation[3];
  (this->OpacityWatcher).GetValueFunc.field_0x14 = local_468.InlineAllocation[4];
  (this->OpacityWatcher).GetValueFunc.field_0x15 = local_468.InlineAllocation[5];
  (this->OpacityWatcher).GetValueFunc.field_0x16 = local_468.InlineAllocation[6];
  (this->OpacityWatcher).GetValueFunc.field_0x17 = local_468.InlineAllocation[7];
  (this->OpacityWatcher).GetValueFunc.field_0x18 = local_468.InlineAllocation[8];
  (this->OpacityWatcher).GetValueFunc.field_0x19 = local_468.InlineAllocation[9];
  (this->OpacityWatcher).GetValueFunc.field_0x1a = local_468.InlineAllocation[10];
  (this->OpacityWatcher).GetValueFunc.field_0x1b = local_468.InlineAllocation[0xb];
  (this->OpacityWatcher).GetValueFunc.field_0x1c = local_468.InlineAllocation[0xc];
  (this->OpacityWatcher).GetValueFunc.field_0x1d = local_468.InlineAllocation[0xd];
  (this->OpacityWatcher).GetValueFunc.field_0x1e = local_468.InlineAllocation[0xe];
  (this->OpacityWatcher).GetValueFunc.field_0x1f = local_468.InlineAllocation[0xf];
  (this->OpacityWatcher).GetValueFunc.field_0x20 = local_468.InlineAllocation[0x10];
  (this->OpacityWatcher).GetValueFunc.field_0x21 = local_468.InlineAllocation[0x11];
  (this->OpacityWatcher).GetValueFunc.field_0x22 = local_468.InlineAllocation[0x12];
  (this->OpacityWatcher).GetValueFunc.field_0x23 = local_468.InlineAllocation[0x13];
  (this->OpacityWatcher).GetValueFunc.field_0x24 = local_468.InlineAllocation[0x14];
  (this->OpacityWatcher).GetValueFunc.field_0x25 = local_468.InlineAllocation[0x15];
  (this->OpacityWatcher).GetValueFunc.field_0x26 = local_468.InlineAllocation[0x16];
  (this->OpacityWatcher).GetValueFunc.field_0x27 = local_468.InlineAllocation[0x17];
  *(void **)&(this->OpacityWatcher).GetValueFunc.field_0x28 = local_468.HeapAllocation;
  local_478.Data = pFVar58;
  iStack_470 = *(int *)&(this->OpacityWatcher).GetValueFunc.field_0x8;
  iStack_46c = *(int *)&(this->OpacityWatcher).GetValueFunc.field_0xc;
  local_468.InlineAllocation[0] = (this->OpacityWatcher).GetValueFunc.field_0x10;
  local_468.InlineAllocation[1] = (this->OpacityWatcher).GetValueFunc.field_0x11;
  local_468.InlineAllocation[2] = (this->OpacityWatcher).GetValueFunc.field_0x12;
  local_468.InlineAllocation[3] = (this->OpacityWatcher).GetValueFunc.field_0x13;
  local_468.InlineAllocation[4] = (this->OpacityWatcher).GetValueFunc.field_0x14;
  local_468.InlineAllocation[5] = (this->OpacityWatcher).GetValueFunc.field_0x15;
  local_468.InlineAllocation[6] = (this->OpacityWatcher).GetValueFunc.field_0x16;
  local_468.InlineAllocation[7] = (this->OpacityWatcher).GetValueFunc.field_0x17;
  local_468.InlineAllocation[8] = (this->OpacityWatcher).GetValueFunc.field_0x18;
  local_468.InlineAllocation[9] = (this->OpacityWatcher).GetValueFunc.field_0x19;
  local_468.InlineAllocation[10] = (this->OpacityWatcher).GetValueFunc.field_0x1a;
  local_468.InlineAllocation[0xb] = (this->OpacityWatcher).GetValueFunc.field_0x1b;
  local_468.InlineAllocation[0xc] = (this->OpacityWatcher).GetValueFunc.field_0x1c;
  local_468.InlineAllocation[0xd] = (this->OpacityWatcher).GetValueFunc.field_0x1d;
  local_468.InlineAllocation[0xe] = (this->OpacityWatcher).GetValueFunc.field_0x1e;
  local_468.InlineAllocation[0xf] = (this->OpacityWatcher).GetValueFunc.field_0x1f;
  local_468.InlineAllocation[0x10] = (this->OpacityWatcher).GetValueFunc.field_0x20;
  local_468.InlineAllocation[0x11] = (this->OpacityWatcher).GetValueFunc.field_0x21;
  local_468.InlineAllocation[0x12] = (this->OpacityWatcher).GetValueFunc.field_0x22;
  local_468.InlineAllocation[0x13] = (this->OpacityWatcher).GetValueFunc.field_0x23;
  local_468.InlineAllocation[0x14] = (this->OpacityWatcher).GetValueFunc.field_0x24;
  local_468.InlineAllocation[0x15] = (this->OpacityWatcher).GetValueFunc.field_0x25;
  local_468.InlineAllocation[0x16] = (this->OpacityWatcher).GetValueFunc.field_0x26;
  local_468.InlineAllocation[0x17] = (this->OpacityWatcher).GetValueFunc.field_0x27;
  local_468.HeapAllocation = pFVar19;
  if (pFVar58 != (FScriptContainerElement *)0x0) {
    pFVar60 = &local_468;
    if (pFVar19 != (FFunctionStorage *)0x0) {
      pFVar60 = pFVar19;
    }
    (**(code **)(*(longlong *)pFVar60->InlineAllocation + 0x10))();
  }
  local_448.Data = local_14d8;
  puStack_420 = (uint *)0x0;
  if (local_14d8 != (FScriptContainerElement *)0x0) {
    pppuVar62 = &local_14c8;
    if (local_14b0 != (undefined ***)0x0) {
      pppuVar62 = local_14b0;
    }
    (*(code *)**pppuVar62)(pppuVar62,&local_438);
  }
  pFVar58 = *(FScriptContainerElement **)&(this->OpacityWatcher).OnValueChangedFunc;
  uVar25 = *(uint *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x10;
  uVar26 = *(uint *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x14;
  uVar13 = *(undefined4 *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x18;
  uVar14 = *(undefined4 *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x1c;
  puVar27 = *(uint **)&(this->OpacityWatcher).OnValueChangedFunc.field_0x28;
  *(FScriptContainerElement **)&(this->OpacityWatcher).OnValueChangedFunc = local_448.Data;
  *(int *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x8 = iStack_440;
  *(int *)&(this->OpacityWatcher).OnValueChangedFunc.field_0xc = iStack_43c;
  *(uint *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x10 = local_438;
  *(uint *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x14 = uStack_434;
  *(undefined4 *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x18 = uStack_430;
  *(undefined4 *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x1c = uStack_42c;
  *(int *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x20 = local_428;
  *(int *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x24 = iStack_424;
  *(uint **)&(this->OpacityWatcher).OnValueChangedFunc.field_0x28 = puStack_420;
  local_448.Data = pFVar58;
  iStack_440 = *(int *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x8;
  iStack_43c = *(int *)&(this->OpacityWatcher).OnValueChangedFunc.field_0xc;
  local_438 = uVar25;
  uStack_434 = uVar26;
  uStack_430 = uVar13;
  uStack_42c = uVar14;
  local_428 = *(int *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x20;
  iStack_424 = *(int *)&(this->OpacityWatcher).OnValueChangedFunc.field_0x24;
  puStack_420 = puVar27;
  if (pFVar58 != (FScriptContainerElement *)0x0) {
    puVar61 = &local_438;
    if (puVar27 != (uint *)0x0) {
      puVar61 = puVar27;
    }
    (**(code **)(*(longlong *)puVar61 + 0x10))();
  }
  (this->OpacityWatcher).CachedValue = dVar72;
  if (local_1328 != (code *)0x0) {
    pppuVar62 = &local_1318;
    if (local_1300 != (undefined ***)0x0) {
      pppuVar62 = local_1300;
    }
    (*(code *)(*pppuVar62)[2])();
  }
  if (local_14d8 != (FScriptContainerElement *)0x0) {
    pppuVar62 = &local_14c8;
    if (local_14b0 != (undefined ***)0x0) {
      pppuVar62 = local_14b0;
    }
    (*(code *)(*pppuVar62)[2])();
  }
  local_f08 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_18>,0,0>::
               _vftable_;
  local_f18[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_18>,void,bool>::
                 Call;
  local_ee8._16_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_17>,0,0>::_vftable_;
  local_ee8._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_17>,bool>::Call;
  local_ef0 = (undefined1  [8])0x0;
  local_ec0.ID = 0;
  local_f00 = this;
  local_ee8._24_8_ = this;
  TValueWatcher<bool>::Initialize
            (&this->TwoSidedWatcher,(TFunction<bool___cdecl(void)> *)local_ee8,
             (TFunction<void___cdecl(bool)> *)local_f18,
             ((this->ViewProperties).field0_0x0.DebugPtr)->bTwoSided);
  local_3c8._s_0.Y = 0.0;
  EVar3 = ((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushType;
  local_1498 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_20>,0,0>::
                _vftable_;
  local_14a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_20>,void,enum_EDynamicMeshSculptBrushType>
               ::Call;
  local_12e8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_19>,0,0>::
                _vftable_;
  local_12f8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_19>,enum_EDynamicMeshSculptBrushType>
               ::Call;
  local_3e8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_19>,enum_EDynamicMeshSculptBrushType>
              ::Call;
  local_1480 = (undefined ***)0x0;
  local_12d0 = (undefined ***)0x0;
  local_1490 = this;
  local_12e0 = this;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_19>,0,0>::CloneToEmptyStorage
            (&local_12e8,(FFunctionStorage *)(auStack_3e0 + 8));
  lVar16 = *(longlong *)&(this->BrushTypeWatcher).GetValueFunc;
  dVar72 = *(double *)&(this->BrushTypeWatcher).GetValueFunc.field_0x8;
  uVar13 = *(undefined4 *)&(this->BrushTypeWatcher).GetValueFunc.field_0x10;
  uVar14 = *(undefined4 *)&(this->BrushTypeWatcher).GetValueFunc.field_0x14;
  uVar17 = *(undefined4 *)&(this->BrushTypeWatcher).GetValueFunc.field_0x18;
  uVar18 = *(undefined4 *)&(this->BrushTypeWatcher).GetValueFunc.field_0x1c;
  dVar8 = *(double *)&(this->BrushTypeWatcher).GetValueFunc.field_0x20;
  plVar57 = *(longlong **)&(this->BrushTypeWatcher).GetValueFunc.field_0x28;
  *(code **)&(this->BrushTypeWatcher).GetValueFunc = local_3e8;
  *(undefined8 *)&(this->BrushTypeWatcher).GetValueFunc.field_0x8 = auStack_3e0._0_8_;
  *(undefined4 *)&(this->BrushTypeWatcher).GetValueFunc.field_0x10 = auStack_3e0._8_4_;
  *(undefined4 *)&(this->BrushTypeWatcher).GetValueFunc.field_0x14 = auStack_3e0._12_4_;
  *(undefined4 *)&(this->BrushTypeWatcher).GetValueFunc.field_0x18 = auStack_3e0._16_4_;
  *(undefined4 *)&(this->BrushTypeWatcher).GetValueFunc.field_0x1c = auStack_3e0._20_4_;
  *(double *)&(this->BrushTypeWatcher).GetValueFunc.field_0x20 = local_3c8._s_0.X;
  *(double *)&(this->BrushTypeWatcher).GetValueFunc.field_0x28 = local_3c8._s_0.Y;
  local_3e8 = (code *)lVar16;
  auStack_3e0._0_8_ = dVar72;
  auStack_3e0._8_4_ = uVar13;
  auStack_3e0._12_4_ = uVar14;
  auStack_3e0._16_4_ = uVar17;
  auStack_3e0._20_4_ = uVar18;
  local_3c8._s_0.X = dVar8;
  local_3c8._s_0.Y = (double)plVar57;
  if (lVar16 != 0) {
    plVar64 = (longlong *)(auStack_3e0 + 8);
    if (plVar57 != (longlong *)0x0) {
      plVar64 = plVar57;
    }
    (**(code **)(*plVar64 + 0x10))();
  }
  local_3c8._s_0.Z = (double)local_14a8;
  plStack_390 = (longlong *)0x0;
  if (local_14a8 != (code *)0x0) {
    pppuVar62 = &local_1498;
    if (local_1480 != (undefined ***)0x0) {
      pppuVar62 = local_1480;
    }
    (*(code *)**pppuVar62)(pppuVar62,&local_3a8);
  }
  dVar72 = *(double *)&(this->BrushTypeWatcher).OnValueChangedFunc;
  dVar8 = *(double *)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x8;
  uVar13 = *(undefined4 *)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x10;
  uVar14 = *(undefined4 *)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x14;
  iVar11 = *(int *)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x18;
  iVar12 = *(int *)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x1c;
  pFVar58 = *(FScriptContainerElement **)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x20;
  plVar57 = *(longlong **)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x28;
  *(double *)&(this->BrushTypeWatcher).OnValueChangedFunc = local_3c8._s_0.Z;
  *(double *)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x8 = local_3c8._s_0.W;
  *(undefined4 *)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x10 = local_3a8;
  *(undefined4 *)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x14 = uStack_3a4;
  *(int *)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x18 = iStack_3a0;
  *(int *)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x1c = iStack_39c;
  *(FScriptContainerElement **)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x20 =
       local_398.Data;
  *(longlong **)&(this->BrushTypeWatcher).OnValueChangedFunc.field_0x28 = plStack_390;
  local_3c8._s_0.Z = dVar72;
  local_3c8._s_0.W = dVar8;
  local_3a8 = uVar13;
  uStack_3a4 = uVar14;
  iStack_3a0 = iVar11;
  iStack_39c = iVar12;
  local_398.Data = pFVar58;
  plStack_390 = plVar57;
  if (dVar72 != 0.0) {
    plVar64 = (longlong *)&local_3a8;
    if (plVar57 != (longlong *)0x0) {
      plVar64 = plVar57;
    }
    (**(code **)(*plVar64 + 0x10))();
  }
  (this->BrushTypeWatcher).CachedValue = EVar3;
  if (local_12f8 != (code *)0x0) {
    pppuVar62 = &local_12e8;
    if (local_12d0 != (undefined ***)0x0) {
      pppuVar62 = local_12d0;
    }
    (*(code *)(*pppuVar62)[2])();
  }
  if (local_14a8 != (code *)0x0) {
    pppuVar62 = &local_1498;
    if (local_1480 != (undefined ***)0x0) {
      pppuVar62 = local_1480;
    }
    (*(code *)(*pppuVar62)[2])();
  }
  pUVar52 = (this->GizmoProperties).field0_0x0.DebugPtr;
  dVar8 = (pUVar52->Position).field0_0x0._s_0.X;
  dVar74 = (pUVar52->Position).field0_0x0._s_0.Y;
  dVar72 = (pUVar52->Position).field0_0x0._s_0.Z;
  local_1288 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_22>,0,0>::
                _vftable_;
  local_1298[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_22>,void,UE::Math::TVector<double>_>
       ::Call;
  local_12b8 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_21>,0,0>::
                _vftable_;
  local_12c8[0] =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_21>,UE::Math::TVector<double>_>
       ::Call;
  local_1270 = (undefined ***)0x0;
  local_12a0 = (undefined ***)0x0;
  local_12b0 = this;
  local_1280 = this;
  TFunction<UE::Math::TVector<double>___cdecl(void)>::operator=
            (&(this->GizmoPositionWatcher).GetValueFunc,
             (TFunction<UE::Math::TVector<double>___cdecl(void)> *)local_12c8);
  TFunction<void___cdecl(UE::Math::TVector<double>)>::operator=
            (&(this->GizmoPositionWatcher).OnValueChangedFunc,
             (TFunction<void___cdecl(UE::Math::TVector<double>)> *)local_1298);
  (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.X = dVar8;
  (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.Y = dVar74;
  (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.Z = dVar72;
  if (local_12c8[0] != (code *)0x0) {
    pppuVar62 = &local_12b8;
    if (local_12a0 != (undefined ***)0x0) {
      pppuVar62 = local_12a0;
    }
    (*(code *)(*pppuVar62)[2])();
  }
  if (local_1298[0] != (code *)0x0) {
    pppuVar62 = &local_1288;
    if (local_1270 != (undefined ***)0x0) {
      pppuVar62 = local_1270;
    }
    (*(code *)(*pppuVar62)[2])();
  }
  pUVar52 = (this->GizmoProperties).field0_0x0.DebugPtr;
  plStack_360 = (longlong *)0x0;
  dVar72 = (pUVar52->Rotation).X;
  dVar8 = (pUVar52->Rotation).Y;
  dVar74 = (pUVar52->Rotation).Z;
  dVar70 = (pUVar52->Rotation).W;
  local_1450 = (undefined ***)0x0;
  local_1468 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_24>,0,0>::
                _vftable_;
  local_1478 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_24>,void,UE::Math::TQuat<double>_>
               ::Call;
  local_1258 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`2'::<lambda_23>,0,0>::
                _vftable_;
  local_1268 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_23>,UE::Math::TQuat<double>_>
               ::Call;
  local_388 = UE::Core::Private::Function::
              TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_23>,UE::Math::TQuat<double>_>
              ::Call;
  local_1240 = (undefined ***)0x0;
  local_1460 = this;
  local_1250 = this;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::__l2::<lambda_23>,0,0>::CloneToEmptyStorage
            (&local_1258,(FFunctionStorage *)(auStack_380 + 8));
  lVar16 = *(longlong *)&(this->GizmoRotationWatcher).GetValueFunc;
  uVar2 = *(undefined8 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x8;
  uVar13 = *(undefined4 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x10;
  uVar14 = *(undefined4 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x14;
  uVar17 = *(undefined4 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x18;
  uVar18 = *(undefined4 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x1c;
  uVar28 = *(undefined8 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x20;
  plVar57 = *(longlong **)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28;
  *(code **)&(this->GizmoRotationWatcher).GetValueFunc = local_388;
  *(undefined8 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x8 = auStack_380._0_8_;
  *(undefined4 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x10 = auStack_380._8_4_;
  *(undefined4 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x14 = auStack_380._12_4_;
  *(undefined4 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x18 = auStack_380._16_4_;
  *(undefined4 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x1c = auStack_380._20_4_;
  *(undefined8 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x20 = auStack_380._24_8_;
  *(longlong **)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28 = plStack_360;
  local_388 = (code *)lVar16;
  auStack_380._0_8_ = uVar2;
  auStack_380._8_4_ = uVar13;
  auStack_380._12_4_ = uVar14;
  auStack_380._16_4_ = uVar17;
  auStack_380._20_4_ = uVar18;
  auStack_380._24_8_ = uVar28;
  plStack_360 = plVar57;
  if (lVar16 != 0) {
    plVar64 = (longlong *)(auStack_380 + 8);
    if (plVar57 != (longlong *)0x0) {
      plVar64 = plVar57;
    }
    (**(code **)(*plVar64 + 0x10))();
  }
  local_358 = local_1478;
  plStack_330 = (longlong *)0x0;
  if (local_1478 != (code *)0x0) {
    pppuVar62 = &local_1468;
    if (local_1450 != (undefined ***)0x0) {
      pppuVar62 = local_1450;
    }
    (*(code *)**pppuVar62)(pppuVar62,local_348);
  }
  lVar16 = *(longlong *)&(this->GizmoRotationWatcher).OnValueChangedFunc;
  uVar2 = *(undefined8 *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x8;
  iVar11 = *(int *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x14;
  uVar13 = *(undefined4 *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x18;
  uVar14 = *(undefined4 *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x1c;
  uVar28 = *(undefined8 *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x20;
  plVar57 = *(longlong **)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x28;
  *(code **)&(this->GizmoRotationWatcher).OnValueChangedFunc = local_358;
  *(undefined8 *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x8 = uStack_350;
  (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x10 = local_348[0];
  (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x11 = local_348[1];
  (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x12 = local_348[2];
  (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x13 = local_348[3];
  *(int *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x14 = iStack_344;
  *(undefined4 *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x18 = aFStack_340[0]._0_4_;
  *(undefined4 *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x1c = aFStack_340[0]._4_4_;
  *(ForElementType<FSetElementId> *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x20 =
       aFStack_340[1];
  *(longlong **)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x28 = plStack_330;
  local_358 = (code *)lVar16;
  uStack_350 = uVar2;
  local_348[0] = (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x10;
  local_348[1] = (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x11;
  local_348[2] = (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x12;
  local_348[3] = (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x13;
  iStack_344 = iVar11;
  aFStack_340[0]._0_4_ = uVar13;
  aFStack_340[0]._4_4_ = uVar14;
  aFStack_340[1] = (ForElementType<FSetElementId>)uVar28;
  plStack_330 = plVar57;
  if (lVar16 != 0) {
    plVar64 = (longlong *)local_348;
    if (plVar57 != (longlong *)0x0) {
      plVar64 = plVar57;
    }
    (**(code **)(*plVar64 + 0x10))();
  }
  (this->GizmoRotationWatcher).CachedValue.X = dVar72;
  (this->GizmoRotationWatcher).CachedValue.Y = dVar8;
  (this->GizmoRotationWatcher).CachedValue.Z = dVar74;
  (this->GizmoRotationWatcher).CachedValue.W = dVar70;
  if (local_1268 != (code *)0x0) {
    pppuVar62 = &local_1258;
    if (local_1240 != (undefined ***)0x0) {
      pppuVar62 = local_1240;
    }
    (*(code *)(*pppuVar62)[2])();
  }
  if (local_1478 != (code *)0x0) {
    pppuVar62 = &local_1468;
    if (local_1450 != (undefined ***)0x0) {
      pppuVar62 = local_1450;
    }
    (*(code *)(*pppuVar62)[2])();
  }
  ((this->DynamicMeshComponent).field0_0x0.DebugPtr)->field_0x5b0 =
       ((this->ViewProperties).field0_0x0.DebugPtr)->bShowWireframe;
  pUVar56 = NewObject<UTransformProxy>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar56 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar56);
  }
  local_1588.Data.ArrayNum = 0;
  local_1588.Data.AllocatorInstance.Data = (FScriptContainerElement *)PlaneTransformChanged;
  lStack_1120 = (ulonglong)(uint)local_1588.Data.ArrayMax << 0x20;
  local_1128 = PlaneTransformChanged;
  (this->PlaneTransformProxy).field0_0x0.DebugPtr = pUVar56;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::AddUObject<UDynamicMeshSculptTool>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
              *)&pUVar56->OnTransformChanged,(UDynamicMeshSculptTool *)local_1168,
             (pmf_16d71e9a *)this);
  if (this->bEnableRemeshing != false) {
    PrecomputeRemeshInfo(this);
    if (this->bHaveUVSeams == false) {
      if (this->bHaveNormalSeams == false) goto LAB_14cc7c1d7;
      plVar57 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar4 = *(code **)(*plVar57 + 0x360);
      pFVar33 = FText::AsLocalizable_Advanced_LocText
                          (&local_10b8,L"UDynamicMeshSculptTool",L"NormalSeamWarning",
                           L"This mesh has Hard Normal seams which may limit remeshing. Consider clearing Hard Normals using \"Discard Attributes,\" or the Remesh or Normals Tool."
                          );
      (*pcVar4)(plVar57,pFVar33,3);
      local_10a8.TextData.Reference = local_10b8.TextData.Reference;
    }
    else {
      plVar57 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar4 = *(code **)(*plVar57 + 0x360);
      pFVar33 = FText::AsLocalizable_Advanced_LocText
                          (&local_10a8,L"UDynamicMeshSculptTool",L"UVSeamWarning",
                           L"This mesh has UV seams which may limit remeshing. Consider clearing the UV layers using \"Discard Attributes\" or the Remesh Tool."
                          );
      (*pcVar4)(plVar57,pFVar33,3);
    }
    if (local_10a8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_10a8.TextData.Reference + 0x10))();
    }
  }
LAB_14cc7c1d7:
  UpdateBrushType(this,((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushType);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar34 = Z_Construct_UClass_ULocalTwoAxisPropertyEditInputBehavior_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_678,pUVar34);
  local_678._8_8_ = this;
  local_1500 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_678);
  if ((FScriptContainerElement *)local_678._64_8_ != (FScriptContainerElement *)0x0) {
    plVar57 = local_628;
    if (local_610 != (longlong *)0x0) {
      plVar57 = local_610;
    }
    (**(code **)(*plVar57 + 0x10))(plVar57);
  }
  this_00 = &this->BrushEditBehavior;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1500 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_1500);
  }
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_1500);
  plStack_510 = (longlong *)0x0;
  local_528 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`19'::<lambda_25>,1,0>::
               _vftable_;
  local_538.Data =
       (FScriptContainerElement *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l19::<lambda_25>,float>::Call;
  FStack_520.Data = (FScriptContainerElement *)this;
  pUVar48 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pFVar58 = *(FScriptContainerElement **)&pUVar48[4].field_0x10;
  lVar16 = *(longlong *)&pUVar48[4].field_0x20;
  pFVar15 = *(FScriptContainerElement **)(pUVar48 + 5);
  plVar57 = *(longlong **)&pUVar48[5].field_0x10;
  *(FScriptContainerElement **)&pUVar48[4].field_0x10 = local_538.Data;
  *(int *)&pUVar48[4].field_0x18 = iStack_530;
  *(int *)&pUVar48[4].field_0x1c = iStack_52c;
  *(uint *)&pUVar48[4].field_0x20 = (uint)local_528;
  *(uint *)&pUVar48[4].field_0x24 = local_528._4_4_;
  *(undefined4 *)(pUVar48 + 5) = FStack_520.Data._0_4_;
  *(undefined4 *)&pUVar48[5].field_0x4 = FStack_520.Data._4_4_;
  *(int *)&pUVar48[5].field_0x8 = local_518;
  *(int *)&pUVar48[5].field_0xc = iStack_514;
  *(longlong **)&pUVar48[5].field_0x10 = plStack_510;
  local_538.Data = pFVar58;
  iStack_530 = *(int *)&pUVar48[4].field_0x18;
  iStack_52c = *(int *)&pUVar48[4].field_0x1c;
  local_528 = (undefined **)lVar16;
  FStack_520.Data = pFVar15;
  local_518 = *(int *)&pUVar48[5].field_0x8;
  iStack_514 = *(int *)&pUVar48[5].field_0xc;
  plStack_510 = plVar57;
  if (pFVar58 != (FScriptContainerElement *)0x0) {
    plVar64 = &local_528;
    if (plVar57 != (longlong *)0x0) {
      plVar64 = plVar57;
    }
    (**(code **)(*plVar64 + 0x10))();
  }
  plStack_540 = (longlong *)0x0;
  local_558 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`19'::<lambda_26>,1,0>::
               _vftable_;
  local_568 = UE::Core::Private::Function::
              TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l19::<lambda_26>,void,float>::
              Call;
  FStack_550.Data = (FScriptContainerElement *)this;
  pUVar48 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  lVar16 = *(longlong *)&pUVar48[5].field_0x18;
  lVar30 = *(longlong *)(pUVar48 + 6);
  pFVar58 = *(FScriptContainerElement **)&pUVar48[6].field_0x8;
  plVar57 = *(longlong **)&pUVar48[6].field_0x18;
  *(code **)&pUVar48[5].field_0x18 = local_568;
  *(int *)&pUVar48[5].field_0x20 = iStack_560;
  *(undefined4 *)&pUVar48[5].field_0x24 = uStack_55c;
  *(uint *)(pUVar48 + 6) = (uint)local_558;
  *(uint *)&pUVar48[6].field_0x4 = local_558._4_4_;
  *(undefined4 *)&pUVar48[6].field_0x8 = FStack_550.Data._0_4_;
  *(undefined4 *)&pUVar48[6].field_0xc = FStack_550.Data._4_4_;
  *(int *)&pUVar48[6].field_0x10 = local_548;
  *(int *)&pUVar48[6].field_0x14 = iStack_544;
  *(longlong **)&pUVar48[6].field_0x18 = plStack_540;
  local_568 = (code *)lVar16;
  iStack_560 = *(int *)&pUVar48[5].field_0x20;
  uStack_55c = *(undefined4 *)&pUVar48[5].field_0x24;
  local_558 = (undefined **)lVar30;
  FStack_550.Data = pFVar58;
  local_548 = *(int *)&pUVar48[6].field_0x10;
  iStack_544 = *(int *)&pUVar48[6].field_0x14;
  plStack_540 = plVar57;
  if (lVar16 != 0) {
    plVar64 = &local_558;
    if (plVar57 != (longlong *)0x0) {
      plVar64 = plVar57;
    }
    (**(code **)(*plVar64 + 0x10))();
  }
  pFStack_570 = (ForAnyElementType *)0x0;
  local_588.Data =
       (FScriptContainerElement *)
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`19'::<lambda_27>,1,0>::_vftable_;
  local_598 = UE::Core::Private::Function::
              TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l19::<lambda_27>,float,float>::
              Call;
  uStack_580 = this;
  pUVar48 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  lVar16 = *(longlong *)&pUVar48[6].field_0x20;
  pFVar58 = *(FScriptContainerElement **)(pUVar48 + 7);
  pFVar31 = *(FScriptContainerElement **)&pUVar48[7].field_0x8;
  pFVar15 = *(FScriptContainerElement **)&pUVar48[7].field_0x18;
  pFVar29 = *(ForAnyElementType **)&pUVar48[7].field_0x20;
  *(code **)&pUVar48[6].field_0x20 = local_598;
  *(FScriptContainerElement **)(pUVar48 + 7) = FStack_590.Data;
  *(int *)&pUVar48[7].field_0x8 = (int)local_588.Data;
  *(int *)&pUVar48[7].field_0xc = local_588.Data._4_4_;
  *(uint *)&pUVar48[7].field_0x10 = (uint)uStack_580;
  *(uint *)&pUVar48[7].field_0x14 = uStack_580._4_4_;
  *(FScriptContainerElement **)&pUVar48[7].field_0x18 = local_578.Data;
  *(ForAnyElementType **)&pUVar48[7].field_0x20 = pFStack_570;
  local_598 = (code *)lVar16;
  FStack_590.Data = pFVar58;
  local_588.Data = pFVar31;
  uStack_580._0_4_ = *(uint *)&pUVar48[7].field_0x10;
  uStack_580._4_4_ = *(uint *)&pUVar48[7].field_0x14;
  local_578.Data = pFVar15;
  pFStack_570 = pFVar29;
  if (lVar16 != 0) {
    pFVar63 = &local_588;
    if (pFVar29 != (ForAnyElementType *)0x0) {
      pFVar63 = pFVar29;
    }
    (**(code **)(pFVar63->Data + 0x10))();
  }
  pFVar33 = FText::AsLocalizable_Advanced_LocText
                      (&local_10c8,L"UDynamicMeshSculptTool",L"BrushRadius",L"Radius");
  pUVar48 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  FText::operator=((FText *)(pUVar48 + 8),pFVar33);
  if (local_10c8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_10c8.TextData.Reference + 0x10))();
  }
  pUVar48 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  plStack_5a0 = (longlong *)0x0;
  pUVar48[8].field_0x14 = 1;
  local_5b8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`19'::<lambda_28>,1,0>::
               _vftable_;
  local_5c8.Data =
       (FScriptContainerElement *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l19::<lambda_28>,float>::Call;
  FStack_5b0.Data = (FScriptContainerElement *)this;
  pUVar48 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pFVar58 = *(FScriptContainerElement **)&pUVar48[9].field_0x8;
  lVar16 = *(longlong *)&pUVar48[9].field_0x18;
  pFVar15 = *(FScriptContainerElement **)&pUVar48[9].field_0x20;
  plVar57 = *(longlong **)&pUVar48[10].field_0x8;
  *(FScriptContainerElement **)&pUVar48[9].field_0x8 = local_5c8.Data;
  *(int *)&pUVar48[9].field_0x10 = iStack_5c0;
  *(int *)&pUVar48[9].field_0x14 = iStack_5bc;
  *(uint *)&pUVar48[9].field_0x18 = (uint)local_5b8;
  *(uint *)&pUVar48[9].field_0x1c = local_5b8._4_4_;
  *(undefined4 *)&pUVar48[9].field_0x20 = FStack_5b0.Data._0_4_;
  *(undefined4 *)&pUVar48[9].field_0x24 = FStack_5b0.Data._4_4_;
  *(int *)&pUVar48[10].field_0x0 = local_5a8;
  *(int *)&pUVar48[10].field_0x4 = iStack_5a4;
  *(longlong **)&pUVar48[10].field_0x8 = plStack_5a0;
  local_5c8.Data = pFVar58;
  iStack_5c0 = *(int *)&pUVar48[9].field_0x10;
  iStack_5bc = *(int *)&pUVar48[9].field_0x14;
  local_5b8 = (undefined **)lVar16;
  FStack_5b0.Data = pFVar15;
  local_5a8 = *(int *)&pUVar48[10].field_0x0;
  iStack_5a4 = *(int *)&pUVar48[10].field_0x4;
  plStack_5a0 = plVar57;
  if (pFVar58 != (FScriptContainerElement *)0x0) {
    plVar64 = &local_5b8;
    if (plVar57 != (longlong *)0x0) {
      plVar64 = plVar57;
    }
    (**(code **)(*plVar64 + 0x10))();
  }
  plStack_5d0 = (longlong *)0x0;
  local_5e8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UDynamicMeshSculptTool::Setup'::`19'::<lambda_29>,1,0>::
               _vftable_;
  local_5f8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UDynamicMeshSculptTool::Setup'::__l19::<lambda_29>,void,float>::
              Call;
  FStack_5e0.Data = (FScriptContainerElement *)this;
  pUVar48 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  lVar16 = *(longlong *)&pUVar48[10].field_0x10;
  lVar30 = *(longlong *)&pUVar48[10].field_0x20;
  pFVar58 = *(FScriptContainerElement **)(pUVar48 + 0xb);
  plVar57 = *(longlong **)&pUVar48[0xb].field_0x10;
  *(code **)&pUVar48[10].field_0x10 = local_5f8;
  *(int *)&pUVar48[10].field_0x18 = iStack_5f0;
  *(undefined4 *)&pUVar48[10].field_0x1c = uStack_5ec;
  *(uint *)&pUVar48[10].field_0x20 = (uint)local_5e8;
  *(uint *)&pUVar48[10].field_0x24 = local_5e8._4_4_;
  *(undefined4 *)(pUVar48 + 0xb) = FStack_5e0.Data._0_4_;
  *(undefined4 *)&pUVar48[0xb].field_0x4 = FStack_5e0.Data._4_4_;
  *(int *)&pUVar48[0xb].field_0x8 = local_5d8;
  *(int *)&pUVar48[0xb].field_0xc = iStack_5d4;
  *(longlong **)&pUVar48[0xb].field_0x10 = plStack_5d0;
  local_5f8 = (code *)lVar16;
  iStack_5f0 = *(int *)&pUVar48[10].field_0x18;
  uStack_5ec = *(undefined4 *)&pUVar48[10].field_0x1c;
  local_5e8 = (undefined **)lVar30;
  FStack_5e0.Data = pFVar58;
  local_5d8 = *(int *)&pUVar48[0xb].field_0x8;
  iStack_5d4 = *(int *)&pUVar48[0xb].field_0xc;
  plStack_5d0 = plVar57;
  if (lVar16 != 0) {
    plVar64 = &local_5e8;
    if (plVar57 != (longlong *)0x0) {
      plVar64 = plVar57;
    }
    (**(code **)(*plVar64 + 0x10))();
  }
  pFVar33 = FText::AsLocalizable_Advanced_LocText
                      (&local_10d8,L"UDynamicMeshSculptTool",L"BrushStrength",L"Strength");
  pUVar48 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  FText::operator=((FText *)&pUVar48[0xc].field_0x20,pFVar33);
  if (local_10d8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_10d8.TextData.Reference + 0x10))();
  }
  pUVar48 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pUVar48[0xd].field_0xc = 1;
  local_14f8 = this;
  pUVar48 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddWeakLambda<UDynamicMeshSculptTool,_UDynamicMeshSculptTool::Setup_::__l19::<lambda_30>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pUVar48[0xe].field_0x20,(UDynamicMeshSculptTool *)(local_1168 + 8),(<lambda_30> *)this
            );
  this_03 = (UTwoAxisPropertyEditInputBehavior *)FWeakObjectPtr::Get(&this_00->WeakPtr);
  pAVar65 = (AInternalToolFrameworkActor *)(this_03 + 1);
  if (this_03 == (UTwoAxisPropertyEditInputBehavior *)0x0) {
    pAVar65 = (AInternalToolFrameworkActor *)0x0;
  }
  UTwoAxisPropertyEditInputBehavior::Initialize
            (this_03,(ITwoAxisPropertyEditBehaviorTarget *)pAVar65);
  pcVar4 = *(code **)(this->_padding_ + 0x2f8);
  pUVar48 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  (*pcVar4)(this,pUVar48,0);
  if (local_14f0.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_14f0.Materials.AllocatorInstance.Data);
  }
  if (local_208._64_8_ != 0) {
    plVar57 = (longlong *)(local_208 + 0x50);
    if ((longlong *)local_208._104_8_ != (longlong *)0x0) {
      plVar57 = (longlong *)local_208._104_8_;
    }
    (**(code **)(*plVar57 + 0x10))();
  }
  return;
}

// Shutdown @ 14cc80240

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

void __thiscall
UDynamicMeshSculptTool::Shutdown(UDynamicMeshSculptTool *this,EToolShutdownType param_1)

{
  UOctreeDynamicMeshComponent *pUVar1;
  code *pcVar2;
  AInternalToolFrameworkActor *this_00;
  UDynamicMeshBrushProperties *pUVar3;
  UDynamicMeshBrushSculptProperties *pUVar4;
  UKelvinBrushProperties *pUVar5;
  UMeshEditingViewProperties *pUVar6;
  UFixedPlaneBrushProperties *pUVar7;
  USculptMaxBrushProperties *pUVar8;
  UBrushRemeshProperties *pUVar9;
  char cVar10;
  UInteractiveToolManager *pUVar11;
  UInteractiveGizmoManager *pUVar12;
  longlong lVar13;
  FText *pFVar14;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  double local_a8;
  UDynamicMeshSculptTool *local_a0;
  double local_98;
  double dStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  pUVar11 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
  UE::TransactionUtil::FLongTransactionTracker::CloseAll(&this->LongTransactions,pUVar11);
  if (param_1 == Accept) {
    cVar10 = (**(code **)(this->_padding_ + 0x3a8))(this);
    if (cVar10 == '\0') {
      if (1 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      param_1 = Cancel;
    }
  }
  UPreviewMesh::Disconnect((this->BrushIndicatorMesh).field0_0x0.DebugPtr);
  (this->BrushIndicatorMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  pUVar11 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar12 = UInteractiveToolManager::GetPairedGizmoManager(pUVar11);
  (**(code **)(pUVar12->_padding_ + 0x2e8))(pUVar12,this);
  (this->BrushIndicator).field0_0x0.DebugPtr = (UBrushStampIndicator *)0x0;
  pUVar11 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar12 = UInteractiveToolManager::GetPairedGizmoManager(pUVar11);
  (**(code **)(pUVar12->_padding_ + 0x2c8))(pUVar12);
  pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UOctreeDynamicMeshComponent *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnMeshChanged,
               (FDelegateHandle)(this->OnDynamicMeshComponentChangedHandle).ID);
    UE::ToolTarget::ShowSourceObject((UToolTarget *)this->_padding_);
    if (param_1 == Accept) {
      local_78 = *(undefined4 *)&(this->InitialTargetTransform).Translation.field0_0x0;
      uStack_74 = *(undefined4 *)
                   ((longlong)&(this->InitialTargetTransform).Translation.field0_0x0 + 4);
      uStack_70 = *(undefined4 *)
                   ((longlong)&(this->InitialTargetTransform).Translation.field0_0x0 + 8);
      uStack_6c = *(undefined4 *)
                   ((longlong)&(this->InitialTargetTransform).Translation.field0_0x0 + 0xc);
      pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
      uStack_7c = (undefined4)
                  ((ulonglong)
                   *(undefined8 *)
                    ((longlong)&(this->InitialTargetTransform).Rotation.field0_0x0 + 0x18) >> 0x20);
      local_58 = *(undefined4 *)&(this->InitialTargetTransform).Scale3D.field0_0x0;
      uStack_54 = *(undefined4 *)((longlong)&(this->InitialTargetTransform).Scale3D.field0_0x0 + 4);
      uStack_50 = *(undefined4 *)((longlong)&(this->InitialTargetTransform).Scale3D.field0_0x0 + 8);
      uStack_4c = *(undefined4 *)
                   ((longlong)&(this->InitialTargetTransform).Scale3D.field0_0x0 + 0xc);
      local_98 = (this->InitialTargetTransform).Rotation.field0_0x0._s_0.X;
      dStack_90 = (this->InitialTargetTransform).Rotation.field0_0x0._s_0.Y;
      local_68 = (this->InitialTargetTransform).Translation.field0_0x0._s_0.Z;
      local_88 = *(undefined4 *)
                  ((longlong)&(this->InitialTargetTransform).Rotation.field0_0x0 + 0x10);
      uStack_84 = *(undefined4 *)
                   ((longlong)&(this->InitialTargetTransform).Rotation.field0_0x0 + 0x14);
      uStack_80 = *(undefined4 *)
                   ((longlong)&(this->InitialTargetTransform).Rotation.field0_0x0 + 0x18);
      local_a8 = (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.Z;
      uStack_60 = 0;
      uStack_40 = 0;
      local_48 = local_a8;
      (**(code **)(*(longlong *)pUVar1 + 0xb58))(pUVar1,&local_98,1);
      lVar13 = (**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar2 = *(code **)(*(longlong *)(lVar13 + 0x28) + 0x10);
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          ((FText *)local_b8,L"UDynamicMeshSculptTool",
                           L"SculptMeshToolTransactionName",L"Sculpt Mesh");
      (*pcVar2)(lVar13 + 0x28,pFVar14);
      if ((ITextData *)local_b8._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_b8._0_8_ + 0x10))();
      }
      local_b8._8_8_ = &local_a0;
      local_b8._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UDynamicMeshSculptTool::Shutdown'::__l29::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
           ::Call;
      local_a0 = this;
      (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb40))();
      lVar13 = (**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*(longlong *)(lVar13 + 0x28) + 0x18))(lVar13 + 0x28);
    }
    UActorComponent::UnregisterComponent
              ((UActorComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr);
    (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0x4a0))();
    (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UOctreeDynamicMeshComponent *)0x0;
  }
  this_00 = (this->PreviewMeshActor).field0_0x0.DebugPtr;
  if (this_00 != (AInternalToolFrameworkActor *)0x0) {
    AActor::Destroy((AActor *)this_00,false,true);
    (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  }
  pUVar3 = (this->BrushProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar3->_padding_ + 0x2b0);
  ::FString::FString((FString *)local_b8,L"");
  (*pcVar2)(pUVar3,this,local_b8);
  if ((ITextData *)local_b8._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  pUVar4 = (this->SculptProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar4->_padding_ + 0x2b0);
  ::FString::FString((FString *)local_b8,L"");
  (*pcVar2)(pUVar4,this,local_b8);
  if ((ITextData *)local_b8._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  pUVar5 = (this->KelvinBrushProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar5->_padding_ + 0x2b0);
  ::FString::FString((FString *)local_b8,L"");
  (*pcVar2)(pUVar5,this,local_b8);
  if ((ITextData *)local_b8._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  pUVar6 = (this->ViewProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar6->_padding_ + 0x2b0);
  ::FString::FString((FString *)local_b8,L"");
  (*pcVar2)(pUVar6,this,local_b8);
  if ((ITextData *)local_b8._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  pUVar7 = (this->GizmoProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar7->_padding_ + 0x2b0);
  ::FString::FString((FString *)local_b8,L"");
  (*pcVar2)(pUVar7,this,local_b8);
  if ((ITextData *)local_b8._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  pUVar8 = (this->SculptMaxBrushProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar8->_padding_ + 0x2b0);
  ::FString::FString((FString *)local_b8,L"");
  (*pcVar2)(pUVar8,this,local_b8);
  if ((ITextData *)local_b8._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  pUVar9 = (this->RemeshProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar9->_padding_ + 0x2b0);
  ::FString::FString((FString *)local_b8,L"");
  (*pcVar2)(pUVar9,this,local_b8);
  if ((ITextData *)local_b8._0_8_ != (ITextData *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  return;
}

// StaticRegisterNativesUDynamicMeshSculptTool @ 14cc82450

void __cdecl UDynamicMeshSculptTool::StaticRegisterNativesUDynamicMeshSculptTool(void)

{
  return;
}

// SyncMeshWithPositionBuffer @ 14cc82750

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
UDynamicMeshSculptTool::SyncMeshWithPositionBuffer
          (UDynamicMeshSculptTool *this,FDynamicMesh3 *param_1)

{
  FMutex *this_00;
  uint *puVar1;
  double *pdVar2;
  atomic<unsigned_char> aVar3;
  int iVar4;
  FMeshVertexChangeBuilder *this_01;
  longlong lVar5;
  code *pcVar6;
  FDynamicMesh3 *pFVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  FDynamicMesh3 *local_res10;
  UDynamicMeshSculptTool *local_88;
  FDynamicMesh3 **local_80;
  TArrayView<std::nullptr_t,int> local_78;
  code *local_68;
  UDynamicMeshSculptTool **local_60;
  TVector<double>_u_0 local_58;
  
  iVar4 = (this->ROIPositionBuffer).ArrayNum;
  local_res10 = param_1;
  if ((this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) && (uVar11 = 0, 0 < iVar4)) {
    lVar12 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar11 < (this->VertexROI).ArrayNum) {
        uVar9 = ~uVar11 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_01 = this->ActiveVertexChange;
      uVar9 = *(uint *)((this->VertexROI).AllocatorInstance.Data + lVar12 * 4);
      uVar10 = 0;
      if ((int)uVar11 < (this->ROIPositionBuffer).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
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
      lVar5 = *(longlong *)
               ((local_res10->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar9 >> 9) * 8)
      ;
      pdVar2 = (double *)(lVar5 + (ulonglong)(uVar9 & 0x1ff) * 0x18);
      local_58._s_0.X = *pdVar2;
      local_58._s_0.Y = pdVar2[1];
      local_58._s_0.Z = *(double *)(lVar5 + 0x10 + (ulonglong)(uVar9 & 0x1ff) * 0x18);
      FMeshVertexChangeBuilder::UpdateVertex
                (this_01,uVar9,(TVector<double> *)&local_58._s_0,
                 (TVector<double> *)
                 ((this->ROIPositionBuffer).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x18));
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar4);
  }
  local_80 = &local_res10;
  local_78.DataPtr = (void **)0x0;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UDynamicMeshSculptTool::SyncMeshWithPositionBuffer'::__l2::<lambda_1>,void,int>
             ::Call;
  local_60 = &local_88;
  local_78.ArrayNum = 0;
  local_88 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar4,1,(TFunctionRef<void___cdecl(int)> *)&local_68,
             local_res10._0_1_,None,&local_78);
  pFVar7 = local_res10;
  if ((local_res10->ChangeStampShape).bIsEnabled != false) {
    this_00 = &(local_res10->ChangeStampShape).Mutex;
    LOCK();
    bVar8 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar8) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar8) {
      UE::FMutex::LockSlow(this_00);
    }
    puVar1 = &(pFVar7->ChangeStampShape).Value;
    *puVar1 = *puVar1 + 1;
    LOCK();
    aVar3 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return;
}

// UpdateBrushPosition @ 14cc83880

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
UDynamicMeshSculptTool::UpdateBrushPosition(UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  bool bVar1;
  
  if (this->bSmoothing == false) {
    switch(((this->SculptProperties).field0_0x0.DebugPtr)->PrimaryBrushType) {
    case Move:
    case PullKelvin:
    case PullSharpKelvin:
    case Smooth:
    case Inflate:
    case ScaleKelvin:
    case TwistKelvin:
    case Flatten:
    case Plane:
    case FixedPlane:
      goto switchD_14cc838cf_caseD_0;
    case Offset:
    case SculptMax:
    case Pinch:
    case Resample:
      bVar1 = UpdateBrushPositionOnTargetMesh(this,param_1,false);
      return bVar1;
    case SculptView:
    case PlaneViewAligned:
      bVar1 = UpdateBrushPositionOnTargetMesh(this,param_1,false);
      AlignBrushToView(this);
      return bVar1;
    default:
      if (2 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
switchD_14cc838cf_caseD_0:
      bVar1 = UpdateBrushPositionOnSculptMesh(this,param_1,false);
      return bVar1;
    }
  }
  bVar1 = UpdateBrushPositionOnSculptMesh(this,param_1,false);
  return bVar1;
}

// UpdateBrushPositionOnActivePlane @ 14cc83990

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
UDynamicMeshSculptTool::UpdateBrushPositionOnActivePlane
          (UDynamicMeshSculptTool *this,TRay<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60;
  TVector<double>_u_0 local_48 [2];
  
  local_78._s_0.X = (param_1->Direction).field0_0x0._s_0.X;
  local_78._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
  local_78._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z;
  local_60._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  local_60._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_60._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  UE::Geometry::TFrame3<double>::RayPlaneIntersection
            (&this->ActiveDragPlane,(TVector<double> *)&local_60._s_0,
             (TVector<double> *)&local_78._s_0,2,(TVector<double> *)&local_48[0]._s_0);
  (this->LastBrushPosWorld).field0_0x0._s_0.X = (double)local_48[0]._0_8_;
  (this->LastBrushPosWorld).field0_0x0._s_0.Y = (double)local_48[0]._8_8_;
  (this->LastBrushPosWorld).field0_0x0._s_0.Z = (double)local_48[0]._16_8_;
  dVar1 = (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Y;
  dVar2 = (this->ActiveDragPlane).Rotation.field0_0x0._s_0.X;
  dVar4 = (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Z;
  dVar3 = (this->ActiveDragPlane).Rotation.field0_0x0._s_0.W;
  dVar4 = dVar4 + dVar4;
  (this->LastBrushPosNormalWorld).field0_0x0._s_0.X = dVar4 * dVar2 + dVar3 * (dVar1 + dVar1);
  (this->LastBrushPosNormalWorld).field0_0x0._s_0.Y = dVar4 * dVar1 - dVar3 * (dVar2 + dVar2);
  (this->LastBrushPosNormalWorld).field0_0x0._s_0.Z =
       __real_3ff0000000000000 - ((dVar1 + dVar1) * dVar1 + (dVar2 + dVar2) * dVar2);
  return true;
}

// UpdateBrushPositionOnSculptMesh @ 14cc83ab0

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

bool __thiscall
UDynamicMeshSculptTool::UpdateBrushPositionOnSculptMesh
          (UDynamicMeshSculptTool *this,TRay<double> *param_1,bool param_2)

{
  TTransformSRT3<double> *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  bool bVar7;
  int iVar8;
  TVector<double> *pTVar9;
  FDynamicMesh3 *this_01;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auStackY_228 [32];
  TVector<double>_u_0 local_1f8;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 TStack_1c0;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_188;
  undefined1 auStack_170 [32];
  undefined8 uStack_150;
  undefined8 local_148;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  TVector<double>_u_0 local_e8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  double local_a0;
  TVector<double> local_98;
  EIntersectionType local_80 [2];
  ulonglong local_78;
  
  dVar6 = __real_3ff0000000000000;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1f8._s_0.X = (param_1->Direction).field0_0x0._s_0.X;
  local_1f8._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
  this_00 = &this->CurTargetTransform;
  local_1f8._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z;
  dVar10 = *(double *)&(this->CurTargetTransform).Scale3D.field0_0x0;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar10 = __real_3ff0000000000000 / dVar10;
  }
  else {
    dVar10 = 0.0;
  }
  dVar1 = *(double *)((longlong)&(this->CurTargetTransform).Scale3D.field0_0x0 + 8);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar1 = __real_3ff0000000000000 / dVar1;
  }
  else {
    dVar1 = 0.0;
  }
  dVar13 = *(double *)((longlong)&(this->CurTargetTransform).Scale3D.field0_0x0 + 0x10);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar13 = __real_3ff0000000000000 / dVar13;
  }
  else {
    dVar13 = 0.0;
  }
  pTVar9 = UE::Geometry::TQuaternion<double>::InverseMultiply
                     (&this_00->Rotation,(TVector<double> *)&local_1a8._s_0,
                      (TVector<double> *)&local_1f8._s_0);
  local_1f8._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_1f8._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  local_1f8._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  dVar2 = (pTVar9->field0_0x0)._s_0.X;
  dVar3 = (pTVar9->field0_0x0)._s_0.Y;
  dVar4 = (pTVar9->field0_0x0)._s_0.Z;
  pTVar9 = UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
                     (this_00,(TVector<double> *)&local_1a8._s_0,(TVector<double> *)&local_1f8._s_0)
  ;
  local_1d8._s_0.X = (pTVar9->field0_0x0)._s_0.X;
  local_1d8._s_0.Y = (pTVar9->field0_0x0)._s_0.Y;
  local_1d8._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
  TStack_1c0._s_0.X = dVar10 * dVar2;
  TStack_1c0._s_0.Y = dVar1 * dVar3;
  TStack_1c0._s_0.Z = dVar13 * dVar4;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&TStack_1c0._s_0,__real_3e45798ee0000000);
  auVar11._0_8_ = TStack_1c0._s_0.Z * TStack_1c0._s_0.Z;
  auVar11._8_8_ = 0;
  auVar12._8_8_ = 0;
  auVar12._0_8_ =
       TStack_1c0._s_0.X * TStack_1c0._s_0.X + TStack_1c0._s_0.Y * TStack_1c0._s_0.Y + auVar11._0_8_
  ;
  auVar12 = sqrtpd(auVar11,auVar12);
  if (auVar12._0_8_ <= 0.0) {
    TStack_1c0._s_0.X = 0.0;
    TStack_1c0._s_0.Y = 0.0;
    TStack_1c0._s_0.Z = 0.0;
  }
  else {
    dVar10 = dVar6 / auVar12._0_8_;
    TStack_1c0._s_0.X = TStack_1c0._s_0.X * dVar10;
    TStack_1c0._s_0.Y = TStack_1c0._s_0.Y * dVar10;
    TStack_1c0._s_0.Z = TStack_1c0._s_0.Z * dVar10;
  }
  iVar8 = FindHitSculptMeshTriangle(this,(TRay<double> *)&local_1d8._s_0);
  if (iVar8 == -1) {
    if (param_2) {
      local_1f8._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_1f8._s_0.Y = _UNK_150689518;
      local_1f8._s_0.Z = 0.0;
      UE::Math::TQuat<double>::RotateVector
                (&(this->CameraState).Orientation,(TVector<double> *)&local_1a8._s_0,
                 (TVector<double> *)&local_1f8._s_0);
      local_188._s_0.X = (this->LastBrushPosWorld).field0_0x0._s_0.X;
      local_188._s_0.Y = (this->LastBrushPosWorld).field0_0x0._s_0.Y;
      local_188._s_0.Z = (this->LastBrushPosWorld).field0_0x0._s_0.Z;
      auStack_170._0_8_ = 0.0;
      local_1f8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_1f8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_1f8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      auStack_170._24_8_ = dVar6;
      auStack_170._8_8_ = 0.0;
      auStack_170._16_8_ = 0.0;
      UE::Geometry::TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)auStack_170,(TVector<double> *)&local_1f8._s_0,
                 (TVector<double> *)&local_1a8._s_0);
      local_1f8._s_0.X = (param_1->Direction).field0_0x0._s_0.X;
      local_1f8._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
      local_1f8._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z;
      local_138._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
      local_138._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
      local_138._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
      UE::Geometry::TFrame3<double>::RayPlaneIntersection
                ((TFrame3<double> *)&local_188._s_0,(TVector<double> *)&local_138._s_0,
                 (TVector<double> *)&local_1f8._s_0,2,(TVector<double> *)&local_1a8._s_0);
      bVar7 = true;
      (this->LastBrushPosWorld).field0_0x0._s_0.X = local_1a8._s_0.X;
      (this->LastBrushPosWorld).field0_0x0._s_0.Y = local_1a8._s_0.Y;
      (this->LastBrushPosWorld).field0_0x0._s_0.Z = local_1a8._s_0.Z;
      dVar10 = (this->ActiveDragPlane).Rotation.field0_0x0._s_0.X;
      dVar1 = (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Y;
      dVar13 = (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Z;
      dVar2 = (this->ActiveDragPlane).Rotation.field0_0x0._s_0.W;
      dVar13 = dVar13 + dVar13;
      (this->LastBrushPosNormalWorld).field0_0x0._s_0.X = dVar2 * (dVar1 + dVar1) + dVar13 * dVar10;
      (this->LastBrushPosNormalWorld).field0_0x0._s_0.Y = dVar13 * dVar1 - dVar2 * (dVar10 + dVar10)
      ;
      (this->LastBrushPosNormalWorld).field0_0x0._s_0.Z =
           dVar6 - ((dVar1 + dVar1) * dVar1 + (dVar10 + dVar10) * dVar10);
      this->LastBrushTriangleID = -1;
    }
    else {
      bVar7 = false;
    }
  }
  else {
    this_01 = (FDynamicMesh3 *)
              (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))()
    ;
    UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (this_01,iVar8,(TVector<double> *)&local_188._s_0,(TVector<double> *)auStack_170,
               (TVector<double> *)(auStack_170 + 0x18));
    local_118._s_0.X = local_1d8._s_0.X;
    local_118._s_0.Y = local_1d8._s_0.Y;
    local_118._s_0.Z = local_1d8._s_0.Z;
    dStack_100 = TStack_1c0._s_0.X;
    local_f8 = TStack_1c0._s_0.Y;
    dStack_f0 = TStack_1c0._s_0.Z;
    local_e8._s_0.X = local_188._s_0.X;
    local_e8._s_0.Y = local_188._s_0.Y;
    local_e8._s_0.Z = local_188._s_0.Z;
    dStack_d0 = (double)auStack_170._0_8_;
    local_c8 = (double)auStack_170._8_8_;
    dStack_c0 = (double)auStack_170._16_8_;
    local_b8 = (double)auStack_170._24_8_;
    uStack_b0 = uStack_150;
    local_a8 = local_148;
    UE::Geometry::TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
              ((TRay<double> *)&local_118._s_0,(TTriangle3<double> *)&local_e8._s_0,&local_a0,
               &local_98,local_80);
    pTVar9 = UE::Geometry::FDynamicMesh3::GetTriNormal
                       (this_01,(TVector<double> *)&local_1a8._s_0,iVar8);
    pTVar9 = UE::Geometry::TTransformSRT3<double>::TransformNormal<double>
                       (this_00,(TVector<double> *)&local_138._s_0,pTVar9);
    dVar10 = (pTVar9->field0_0x0)._s_0.Y;
    (this->LastBrushPosNormalWorld).field0_0x0._s_0.X = (pTVar9->field0_0x0)._s_0.X;
    (this->LastBrushPosNormalWorld).field0_0x0._s_0.Y = dVar10;
    (this->LastBrushPosNormalWorld).field0_0x0._s_0.Z = (pTVar9->field0_0x0)._s_0.Z;
    local_1f8._s_0.X =
         (TStack_1c0._s_0.X * local_a0 + local_1d8._s_0.X) *
         (this->CurTargetTransform).Scale3D.field0_0x0._s_0.X;
    local_1f8._s_0.Z =
         (TStack_1c0._s_0.Z * local_a0 + local_1d8._s_0.Z) *
         (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Z;
    local_1f8._s_0.Y =
         (TStack_1c0._s_0.Y * local_a0 + local_1d8._s_0.Y) *
         (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Y;
    pTVar9 = UE::Geometry::operator*<double>
                       ((TVector<double> *)&local_1a8._s_0,&this_00->Rotation,
                        (TVector<double> *)&local_1f8._s_0);
    dVar6 = (this->CurTargetTransform).Translation.field0_0x0._s_0.Y;
    dVar1 = (pTVar9->field0_0x0)._s_0.Y;
    bVar7 = true;
    dVar10 = (this->CurTargetTransform).Translation.field0_0x0._s_0.Z + (pTVar9->field0_0x0)._s_0.Z;
    (this->LastBrushPosWorld).field0_0x0._s_0.X =
         (pTVar9->field0_0x0)._s_0.X + (this->CurTargetTransform).Translation.field0_0x0._s_0.X;
    auVar5._8_4_ = SUB84(dVar10,0);
    auVar5._0_8_ = dVar6 + dVar1;
    auVar5._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->LastBrushPosWorld).field0_0x0 + 8) = auVar5;
    this->LastBrushTriangleID = iVar8;
  }
  return bVar7;
}

// UpdateBrushPositionOnTargetMesh @ 14cc83fd0

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

bool __thiscall
UDynamicMeshSculptTool::UpdateBrushPositionOnTargetMesh
          (UDynamicMeshSculptTool *this,TRay<double> *param_1,bool param_2)

{
  TTransformSRT3<double> *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FDynamicMesh3 *this_01;
  undefined1 auVar5 [16];
  double dVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  TVector<double> *pTVar10;
  longlong *plVar11;
  longlong lVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auStackY_3b8 [32];
  double local_388;
  double dStack_380;
  double local_378;
  TVector<double>_u_0 TStack_370;
  TVector<double>_u_0 local_358;
  TVector<double>_u_0 local_340;
  TQuaternion<double>_u_0 local_328;
  TVector<double>_u_0 local_308;
  TVector<double>_u_0 local_2f0;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 local_2a0;
  TVector<double>_u_0 local_288;
  TVector<double>_u_0 local_270;
  TVector<double>_u_0 local_258;
  TVector<double>_u_0 TStack_240;
  TVector<double>_u_0 local_228;
  TVector<double> local_208;
  TVector<double> local_1f0;
  TVector<double> local_1d8;
  TVector<double> local_1c0;
  TVector<double> local_1a8;
  TVector<double> local_190;
  TVector<double>_u_0 local_178;
  double dStack_160;
  double local_158;
  double dStack_150;
  TVector<double>_u_0 local_148;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  TVector<double> local_f8;
  EIntersectionType local_e0 [2];
  undefined8 local_d8 [2];
  longlong local_c8;
  longlong local_b8 [3];
  longlong *local_a0;
  undefined1 local_98;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  lVar12 = 0;
  if (*(longlong *)&this->PendingTargetUpdate != 0) {
    do {
      do {
      } while (*(longlong *)&this->PendingTargetUpdate == 0);
      plVar11 = *(longlong **)(*(longlong *)&this->PendingTargetUpdate + 0x60);
      cVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,0xffffffff,0);
    } while (cVar7 == '\0');
    lVar12 = *(longlong *)&this->PendingTargetUpdate;
  }
  dVar6 = __real_3ff0000000000000;
  local_308._s_0.X = (param_1->Direction).field0_0x0._s_0.X;
  local_308._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
  this_00 = &this->CurTargetTransform;
  local_308._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z;
  dVar13 = *(double *)&(this->CurTargetTransform).Scale3D.field0_0x0;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar13 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar13,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar13 = __real_3ff0000000000000 / dVar13;
  }
  else {
    dVar13 = 0.0;
  }
  dVar1 = *(double *)((longlong)&(this->CurTargetTransform).Scale3D.field0_0x0 + 8);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar1 = __real_3ff0000000000000 / dVar1;
  }
  else {
    dVar1 = 0.0;
  }
  dVar16 = *(double *)((longlong)&(this->CurTargetTransform).Scale3D.field0_0x0 + 0x10);
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar16 = __real_3ff0000000000000 / dVar16;
  }
  else {
    dVar16 = 0.0;
  }
  pTVar10 = UE::Geometry::TQuaternion<double>::InverseMultiply
                      (&this_00->Rotation,&local_1f0,(TVector<double> *)&local_308._s_0);
  local_2f0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_2f0._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  local_2f0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  dVar2 = (pTVar10->field0_0x0)._s_0.X;
  dVar3 = (pTVar10->field0_0x0)._s_0.Y;
  dVar4 = (pTVar10->field0_0x0)._s_0.Z;
  pTVar10 = UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
                      (this_00,&local_1d8,(TVector<double> *)&local_2f0._s_0);
  local_388 = (pTVar10->field0_0x0)._s_0.X;
  dStack_380 = (pTVar10->field0_0x0)._s_0.Y;
  local_378 = (pTVar10->field0_0x0)._s_0.Z;
  TStack_370._s_0.X = dVar13 * dVar2;
  TStack_370._s_0.Y = dVar1 * dVar3;
  TStack_370._s_0.Z = dVar16 * dVar4;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&TStack_370._s_0,__real_3e45798ee0000000);
  auVar14._0_8_ = TStack_370._s_0.Z * TStack_370._s_0.Z;
  auVar14._8_8_ = 0;
  auVar15._8_8_ = 0;
  auVar15._0_8_ =
       TStack_370._s_0.X * TStack_370._s_0.X + TStack_370._s_0.Y * TStack_370._s_0.Y + auVar14._0_8_
  ;
  auVar15 = sqrtpd(auVar14,auVar15);
  if (auVar15._0_8_ <= 0.0) {
    TStack_370._s_0.X = 0.0;
    TStack_370._s_0.Y = 0.0;
    TStack_370._s_0.Z = 0.0;
  }
  else {
    dVar13 = dVar6 / auVar15._0_8_;
    TStack_370._s_0.X = TStack_370._s_0.X * dVar13;
    TStack_370._s_0.Y = TStack_370._s_0.Y * dVar13;
    TStack_370._s_0.Z = TStack_370._s_0.Z * dVar13;
  }
  this_01 = (this->BrushTargetMeshSpatial).Mesh;
  if (lVar12 != 0) {
    do {
      do {
      } while (*(longlong *)&this->PendingTargetUpdate == 0);
      plVar11 = *(longlong **)(*(longlong *)&this->PendingTargetUpdate + 0x60);
      cVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,0xffffffff,0);
    } while (cVar7 == '\0');
  }
  local_d8[0] = __real_7fefffffffffffff;
  local_c8 = 0;
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  iVar9 = (**(code **)((this->BrushTargetMeshSpatial)._padding_ + 0x40))
                    (&this->BrushTargetMeshSpatial,&local_388,local_d8);
  if (local_c8 != 0) {
    plVar11 = local_b8;
    if (local_a0 != (longlong *)0x0) {
      plVar11 = local_a0;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (((((this->BrushProperties).field0_0x0.DebugPtr)->bHitBackFaces != false) ||
      (bVar8 = IsHitTriangleBackFacing(this,iVar9,&this->BrushTargetMesh), !bVar8)) && (iVar9 != -1)
     ) {
    UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (this_01,iVar9,(TVector<double> *)&local_258._s_0,(TVector<double> *)&TStack_240._s_0,
               (TVector<double> *)&local_228._s_0);
    local_178._s_0.X = local_388;
    local_178._s_0.Y = dStack_380;
    local_178._s_0.Z = local_378;
    dStack_160 = TStack_370._s_0.X;
    local_158 = TStack_370._s_0.Y;
    dStack_150 = TStack_370._s_0.Z;
    local_148._s_0.X = local_258._s_0.X;
    local_148._s_0.Y = local_258._s_0.Y;
    local_148._s_0.Z = local_258._s_0.Z;
    dStack_130 = TStack_240._s_0.X;
    local_128 = TStack_240._s_0.Y;
    dStack_120 = TStack_240._s_0.Z;
    local_118 = local_228._s_0.X;
    dStack_110 = local_228._s_0.Y;
    local_108 = local_228._s_0.Z;
    UE::Geometry::TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
              ((TRay<double> *)&local_178._s_0,(TTriangle3<double> *)&local_148._s_0,&local_100,
               &local_f8,local_e0);
    pTVar10 = UE::Geometry::FDynamicMesh3::GetTriNormal(this_01,&local_1c0,iVar9);
    pTVar10 = UE::Geometry::TTransformSRT3<double>::TransformNormal<double>
                        (this_00,&local_1a8,pTVar10);
    dVar13 = (pTVar10->field0_0x0)._s_0.Y;
    (this->LastBrushPosNormalWorld).field0_0x0._s_0.X = (pTVar10->field0_0x0)._s_0.X;
    (this->LastBrushPosNormalWorld).field0_0x0._s_0.Y = dVar13;
    (this->LastBrushPosNormalWorld).field0_0x0._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
    local_358._s_0.X =
         (TStack_370._s_0.X * local_100 + local_388) *
         (this->CurTargetTransform).Scale3D.field0_0x0._s_0.X;
    local_358._s_0.Z =
         (TStack_370._s_0.Z * local_100 + local_378) *
         (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Z;
    local_358._s_0.Y =
         (TStack_370._s_0.Y * local_100 + dStack_380) *
         (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Y;
    pTVar10 = UE::Geometry::operator*<double>
                        (&local_190,&this_00->Rotation,(TVector<double> *)&local_358._s_0);
    dVar6 = (this->CurTargetTransform).Translation.field0_0x0._s_0.Y;
    dVar1 = (pTVar10->field0_0x0)._s_0.Y;
    dVar13 = (this->CurTargetTransform).Translation.field0_0x0._s_0.Z + (pTVar10->field0_0x0)._s_0.Z
    ;
    (this->LastBrushPosWorld).field0_0x0._s_0.X =
         (this->CurTargetTransform).Translation.field0_0x0._s_0.X + (pTVar10->field0_0x0)._s_0.X;
    auVar5._8_4_ = SUB84(dVar13,0);
    auVar5._0_8_ = dVar6 + dVar1;
    auVar5._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->LastBrushPosWorld).field0_0x0 + 8) = auVar5;
    return true;
  }
  if (param_2) {
    local_2d8._s_0.X = ___xmm_00000000000000003ff0000000000000;
    local_2d8._s_0.Y = _UNK_150689518;
    local_2d8._s_0.Z = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&(this->CameraState).Orientation,&local_208,(TVector<double> *)&local_2d8._s_0);
    local_340._s_0.X = (this->LastBrushPosWorld).field0_0x0._s_0.X;
    local_340._s_0.Y = (this->LastBrushPosWorld).field0_0x0._s_0.Y;
    local_340._s_0.Z = (this->LastBrushPosWorld).field0_0x0._s_0.Z;
    local_328._s_0.X = 0.0;
    local_2b8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
    local_2b8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
    local_2b8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
    local_328._s_0.W = dVar6;
    local_328._s_0.Y = 0.0;
    local_328._s_0.Z = 0.0;
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_328._s_0,(TVector<double> *)&local_2b8._s_0,&local_208)
    ;
    local_2a0._s_0.X = (param_1->Direction).field0_0x0._s_0.X;
    local_2a0._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
    local_2a0._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z;
    local_288._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
    local_288._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
    local_288._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
    UE::Geometry::TFrame3<double>::RayPlaneIntersection
              ((TFrame3<double> *)&local_340._s_0,(TVector<double> *)&local_288._s_0,
               (TVector<double> *)&local_2a0._s_0,2,(TVector<double> *)&local_270._s_0);
    (this->LastBrushPosWorld).field0_0x0._s_0.X = local_270._s_0.X;
    (this->LastBrushPosWorld).field0_0x0._s_0.Y = local_270._s_0.Y;
    (this->LastBrushPosWorld).field0_0x0._s_0.Z = local_270._s_0.Z;
    dVar13 = (this->ActiveDragPlane).Rotation.field0_0x0._s_0.X;
    dVar1 = (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Y;
    dVar16 = (this->ActiveDragPlane).Rotation.field0_0x0._s_0.Z;
    dVar2 = (this->ActiveDragPlane).Rotation.field0_0x0._s_0.W;
    dVar16 = dVar16 + dVar16;
    (this->LastBrushPosNormalWorld).field0_0x0._s_0.X = dVar2 * (dVar1 + dVar1) + dVar16 * dVar13;
    (this->LastBrushPosNormalWorld).field0_0x0._s_0.Y = dVar16 * dVar1 - dVar2 * (dVar13 + dVar13);
    (this->LastBrushPosNormalWorld).field0_0x0._s_0.Z =
         dVar6 - ((dVar1 + dVar1) * dVar1 + (dVar13 + dVar13) * dVar13);
  }
  return param_2;
}

// UpdateBrushType @ 14cc845f0

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
UDynamicMeshSculptTool::UpdateBrushType
          (UDynamicMeshSculptTool *this,EDynamicMeshSculptBrushType param_1)

{
  code *pcVar1;
  FText *pFVar2;
  longlong *plVar3;
  UFixedPlaneBrushProperties *pUVar4;
  FText local_38;
  FTextBuilder local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FText::AsLocalizable_Advanced_LocText
                (&BaseMessage,L"UDynamicMeshSculptTool",L"OnStartSculptTool",
                 L"Hold Shift to Smooth, Ctrl to Invert (where applicable). [/] and S/D change Size (+Shift to small-step), W/E changes Strength."
                );
      atexit(`UDynamicMeshSculptTool::UpdateBrushType'::__l2::
             _dynamic_atexit_destructor_for__BaseMessage__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  local_28.Lines.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Lines.ArrayNum = 0;
  local_28.Lines.ArrayMax = 0;
  local_28.IndentCount = 0;
  FTextBuilder::AppendLine(&local_28,&BaseMessage);
  (**(code **)(this->_padding_ + 0x338))(this,(this->GizmoProperties).field0_0x0.DebugPtr,0);
  (**(code **)(this->_padding_ + 0x338))
            (this,(this->SculptMaxBrushProperties).field0_0x0.DebugPtr,0);
  if (param_1 == FixedPlane) {
    pFVar2 = FText::AsLocalizable_Advanced_LocText
                       (&local_38,L"UDynamicMeshSculptTool",L"FixedPlaneTip",
                        L"Use T to reposition Work Plane at cursor, Shift+T to align to Normal, Ctrl+Shift+T to align to View"
                       );
    FTextBuilder::AppendLine(&local_28,pFVar2);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    pUVar4 = (this->GizmoProperties).field0_0x0.DebugPtr;
  }
  else {
    if (param_1 != SculptMax) goto LAB_14cc846dc;
    pUVar4 = (UFixedPlaneBrushProperties *)(this->SculptMaxBrushProperties).field0_0x0.DebugPtr;
  }
  (**(code **)(this->_padding_ + 0x338))(this,pUVar4,1);
LAB_14cc846dc:
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar1 = *(code **)(*plVar3 + 0x360);
  pFVar2 = FTextBuilder::ToText(&local_28,&local_38);
  (*pcVar1)(plVar3,pFVar2,2);
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  DestructItems<FText,int>((FText *)local_28.Lines.AllocatorInstance.Data,local_28.Lines.ArrayNum);
  if ((FText *)local_28.Lines.AllocatorInstance.Data != (FText *)0x0) {
    FMemory::Free(local_28.Lines.AllocatorInstance.Data);
  }
  return;
}

// UpdateColorSetting @ 14cc848c0

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
UDynamicMeshSculptTool::UpdateColorSetting(UDynamicMeshSculptTool *this,FLinearColor *param_1)

{
  UMaterialInstanceDynamic *this_00;
  FName *pFVar1;
  FName local_res8;
  FLinearColor_u_0 local_18;
  
  this_00 = (this->ActiveOverrideMaterial).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialInstanceDynamic *)0x0) {
    pFVar1 = ::FName::FName(&local_res8,L"Color");
    local_18._0_8_ = *(undefined8 *)&param_1->field0_0x0;
    local_18._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    UMaterialInstanceDynamic::SetVectorParameterValue
              (this_00,*pFVar1,(FLinearColor *)&local_18._s_0);
  }
  return;
}

// UpdateCustomMaterial @ 14cc84920

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
UDynamicMeshSculptTool::UpdateCustomMaterial
          (UDynamicMeshSculptTool *this,TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> param_1)

{
  UOctreeDynamicMeshComponent *pUVar1;
  bool bVar2;
  UMaterialInterface *pUVar3;
  UMaterialInstanceDynamic *pUVar4;
  FWeakObjectPtr local_res10;
  
  if (((this->ViewProperties).field0_0x0.DebugPtr)->MaterialMode == Custom) {
    local_res10 = param_1.WeakPtr;
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar2) {
      pUVar3 = (UMaterialInterface *)FWeakObjectPtr::Get(&local_res10);
      pUVar4 = UMaterialInstanceDynamic::Create(pUVar3,(UObject *)this,(FName)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = pUVar4;
      pUVar1 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar1 + 0xbf0))(pUVar1,pUVar4);
      return;
    }
    (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xbf8))();
    (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  }
  return;
}

// UpdateFixedPlaneGizmoVisibility @ 14cc84e70

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
UDynamicMeshSculptTool::UpdateFixedPlaneGizmoVisibility(UDynamicMeshSculptTool *this,bool param_1)

{
  code *pcVar1;
  UFixedPlaneBrushProperties *pUVar2;
  UInteractiveToolManager *pUVar3;
  UInteractiveGizmoManager *pUVar4;
  UCombinedTransformGizmo *pUVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  FString local_88;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pUVar5 = (this->PlaneTransformGizmo).field0_0x0.DebugPtr;
  if (param_1) {
    if (pUVar5 == (UCombinedTransformGizmo *)0x0) {
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      pUVar3 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
      pUVar5 = UE::TransformGizmoUtil::CreateCustomTransformGizmo
                         (pUVar3,StandardTranslateRotate,this,&local_88);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UCombinedTransformGizmo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      (this->PlaneTransformGizmo).field0_0x0.DebugPtr = pUVar5;
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        pUVar5 = (this->PlaneTransformGizmo).field0_0x0.DebugPtr;
      }
      pUVar5->bUseContextCoordinateSystem = false;
      ((this->PlaneTransformGizmo).field0_0x0.DebugPtr)->CurrentCoordinateSystem = Local;
      pUVar5 = (this->PlaneTransformGizmo).field0_0x0.DebugPtr;
      pcVar1 = *(code **)(*(longlong *)pUVar5 + 0x330);
      lVar6 = (**(code **)(this->_padding_ + 0x2d8))(this);
      lVar7 = lVar6 + 0x28;
      if (lVar6 == 0) {
        lVar7 = 0;
      }
      (*pcVar1)(pUVar5,(this->PlaneTransformProxy).field0_0x0.DebugPtr,lVar7);
      pUVar2 = (this->GizmoProperties).field0_0x0.DebugPtr;
      local_78.Rotation.ZW.m128d_f64[0] = (pUVar2->Rotation).Z;
      local_78.Rotation.ZW.m128d_f64[1] = (pUVar2->Rotation).W;
      local_78.Rotation.XY.m128d_f64[0] = (pUVar2->Rotation).X;
      local_78.Rotation.XY.m128d_f64[1] = (pUVar2->Rotation).Y;
      local_78.Translation.XY.m128d_f64[0] = (pUVar2->Position).field0_0x0._s_0.X;
      local_78.Translation.XY.m128d_f64[1] = (pUVar2->Position).field0_0x0._s_0.Y;
      local_78.Translation.ZW.m128d_f64[0] = (pUVar2->Position).field0_0x0._s_0.Z;
      local_78.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      local_78.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
      local_78.Translation.ZW.m128d_f64[1] = 0.0;
      local_78.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_78.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      UCombinedTransformGizmo::ReinitializeGizmoTransform
                ((this->PlaneTransformGizmo).field0_0x0.DebugPtr,&local_78,true);
    }
  }
  else if (pUVar5 != (UCombinedTransformGizmo *)0x0) {
    pUVar3 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
    pUVar4 = UInteractiveToolManager::GetPairedGizmoManager(pUVar3);
    (**(code **)(pUVar4->_padding_ + 0x2d8))(pUVar4,(this->PlaneTransformGizmo).field0_0x0.DebugPtr)
    ;
    (this->PlaneTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  }
  return;
}

// UpdateFixedSculptPlanePosition @ 14cc85040

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
UDynamicMeshSculptTool::UpdateFixedSculptPlanePosition
          (UDynamicMeshSculptTool *this,TVector<double> *param_1)

{
  double dVar1;
  UFixedPlaneBrushProperties *pUVar2;
  code *pcVar3;
  longlong *plVar4;
  double dVar5;
  undefined8 uVar6;
  longlong *plVar7;
  double local_28;
  double dStack_20;
  double local_18;
  
  pUVar2 = (this->GizmoProperties).field0_0x0.DebugPtr;
  dVar5 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (pUVar2->Position).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (pUVar2->Position).field0_0x0._s_0.Y = dVar5;
  (pUVar2->Position).field0_0x0._s_0.Z = dVar1;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GizmoPositionWatcher).GetValueFunc);
  pcVar3 = *(code **)&(this->GizmoPositionWatcher).GetValueFunc;
  plVar4 = *(longlong **)&(this->GizmoPositionWatcher).GetValueFunc.field_0x28;
  plVar7 = (longlong *)&(this->GizmoPositionWatcher).GetValueFunc.field_0x10;
  if (plVar4 != (longlong *)0x0) {
    plVar7 = plVar4;
  }
  uVar6 = (**(code **)(*plVar7 + 8))();
  (*pcVar3)(&local_28,uVar6);
  (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.X = local_28;
  (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.Y = dStack_20;
  (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.Z = local_18;
  return;
}

// UpdateFixedSculptPlaneRotation @ 14cc850d0

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
UDynamicMeshSculptTool::UpdateFixedSculptPlaneRotation
          (UDynamicMeshSculptTool *this,TQuat<double> *param_1)

{
  UFixedPlaneBrushProperties *pUVar1;
  code *pcVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  longlong *plVar8;
  double local_28;
  double dStack_20;
  double local_18;
  double dStack_10;
  
  pUVar1 = (this->GizmoProperties).field0_0x0.DebugPtr;
  dVar4 = param_1->Y;
  dVar5 = param_1->Z;
  dVar6 = param_1->W;
  (pUVar1->Rotation).X = param_1->X;
  (pUVar1->Rotation).Y = dVar4;
  (pUVar1->Rotation).Z = dVar5;
  (pUVar1->Rotation).W = dVar6;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GizmoRotationWatcher).GetValueFunc);
  pcVar2 = *(code **)&(this->GizmoRotationWatcher).GetValueFunc;
  plVar3 = *(longlong **)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28;
  plVar8 = (longlong *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x10;
  if (plVar3 != (longlong *)0x0) {
    plVar8 = plVar3;
  }
  uVar7 = (**(code **)(*plVar8 + 8))();
  (*pcVar2)(&local_28,uVar7);
  (this->GizmoRotationWatcher).CachedValue.X = local_28;
  (this->GizmoRotationWatcher).CachedValue.Y = dStack_20;
  (this->GizmoRotationWatcher).CachedValue.Z = local_18;
  (this->GizmoRotationWatcher).CachedValue.W = dStack_10;
  return;
}

// UpdateFlatShadingSetting @ 14cc85160

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
UDynamicMeshSculptTool::UpdateFlatShadingSetting(UDynamicMeshSculptTool *this,bool param_1)

{
  UMaterialInstanceDynamic *this_00;
  FName *pFVar1;
  float fVar2;
  FName local_res8 [4];
  
  this_00 = (this->ActiveOverrideMaterial).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialInstanceDynamic *)0x0) {
    fVar2 = __real_3f800000;
    if (!param_1) {
      fVar2 = 0.0;
    }
    pFVar1 = ::FName::FName(local_res8,L"FlatShading");
    UMaterialInstanceDynamic::SetScalarParameterValue(this_00,*pFVar1,fVar2);
  }
  return;
}

// UpdateGizmoFromProperties @ 14cc853f0

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

void __thiscall UDynamicMeshSculptTool::UpdateGizmoFromProperties(UDynamicMeshSculptTool *this)

{
  UCombinedTransformGizmo *pUVar1;
  UFixedPlaneBrushProperties *pUVar2;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pUVar1 = (this->PlaneTransformGizmo).field0_0x0.DebugPtr;
  if (pUVar1 != (UCombinedTransformGizmo *)0x0) {
    pUVar2 = (this->GizmoProperties).field0_0x0.DebugPtr;
    local_68 = (pUVar2->Rotation).Z;
    dStack_60 = (pUVar2->Rotation).W;
    local_78 = (pUVar2->Rotation).X;
    dStack_70 = (pUVar2->Rotation).Y;
    local_58 = (pUVar2->Position).field0_0x0._s_0.X;
    dStack_50 = (pUVar2->Position).field0_0x0._s_0.Y;
    local_48 = (pUVar2->Position).field0_0x0._s_0.Z;
    local_28 = ___xmm_00000000000000003ff0000000000000;
    uStack_20 = _UNK_150689518;
    uStack_40 = 0;
    local_38 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_30 = _UNK_150689688;
    (**(code **)(*(longlong *)pUVar1 + 0x340))(pUVar1,&local_78,1);
  }
  return;
}

// UpdateImageSetting @ 14cc85580

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
UDynamicMeshSculptTool::UpdateImageSetting(UDynamicMeshSculptTool *this,UTexture2D *param_1)

{
  UMaterialInstanceDynamic *this_00;
  FName *pFVar1;
  FName local_res8;
  
  this_00 = (this->ActiveOverrideMaterial).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialInstanceDynamic *)0x0) {
    pFVar1 = ::FName::FName(&local_res8,L"ImageTexture");
    UMaterialInstanceDynamic::SetTextureParameterValue(this_00,*pFVar1,(UTexture *)param_1);
  }
  return;
}

// UpdateMaterialMode @ 14cc85ad0

/* WARNING: Type propagation algorithm not settling */
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
UDynamicMeshSculptTool::UpdateMaterialMode
          (UDynamicMeshSculptTool *this,EMeshEditingMaterialModes param_1)

{
  double dVar1;
  UOctreeDynamicMeshComponent *pUVar2;
  code *pcVar3;
  UTexture2D *pUVar4;
  UMeshEditingViewProperties *pUVar5;
  bool bVar6;
  UPrimitiveComponent *pUVar7;
  UMaterialInterface *pUVar8;
  UMaterialInstanceDynamic *pUVar9;
  UInteractiveToolManager *pUVar10;
  FName *pFVar11;
  float fVar12;
  FName local_res18 [2];
  
  if (param_1 == ExistingMaterial) {
    (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xbf8))();
    pUVar2 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
    pcVar3 = *(code **)(*(longlong *)pUVar2 + 0xbd0);
    pUVar7 = UE::ToolTarget::GetTargetComponent((UToolTarget *)this->_padding_);
    (*pcVar3)(pUVar2,pUVar7->bCastDynamicShadow);
    (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
    return;
  }
  if (param_1 == Custom) {
    bVar6 = FWeakObjectPtr::IsValid
                      (&(((this->ViewProperties).field0_0x0.DebugPtr)->CustomMaterial).WeakPtr);
    if (bVar6) {
      local_res18[0].ComparisonIndex.Value = 0;
      local_res18[0].Number = 0;
      pUVar8 = (UMaterialInterface *)
               FWeakObjectPtr::Get(&(((this->ViewProperties).field0_0x0.DebugPtr)->CustomMaterial).
                                    WeakPtr);
      pUVar9 = UMaterialInstanceDynamic::Create(pUVar8,(UObject *)this,(FName)0x0);
      goto joined_r0x00014cc85d2c;
    }
    (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xbf8))();
    pUVar9 = (UMaterialInstanceDynamic *)0x0;
  }
  else {
    if (param_1 == CustomImage) {
      pUVar4 = (((this->ViewProperties).field0_0x0.DebugPtr)->Image).field0_0x0.DebugPtr;
      pUVar10 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
      pUVar9 = ToolSetupUtil::GetCustomImageBasedSculptMaterial(pUVar10,(UTexture *)pUVar4);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar9 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = pUVar9;
      pUVar4 = (((this->ViewProperties).field0_0x0.DebugPtr)->Image).field0_0x0.DebugPtr;
      if (pUVar4 != (UTexture2D *)0x0) {
        pFVar11 = ::FName::FName(local_res18,L"ImageTexture");
        UMaterialInstanceDynamic::SetTextureParameterValue(pUVar9,*pFVar11,(UTexture *)pUVar4);
      }
      goto LAB_14cc85d42;
    }
    if (param_1 == Transparent) {
      pUVar5 = (this->ViewProperties).field0_0x0.DebugPtr;
      bVar6 = pUVar5->bTwoSided;
      dVar1 = pUVar5->Opacity;
      pUVar10 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
      pUVar9 = ToolSetupUtil::GetTransparentSculptMaterial
                         (pUVar10,&pUVar5->TransparentMaterialColor,dVar1,bVar6);
    }
    else {
      if (param_1 == Diffuse) {
        pUVar10 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
        pUVar9 = (UMaterialInstanceDynamic *)ToolSetupUtil::GetDefaultSculptMaterial(pUVar10);
      }
      else if (param_1 == Grey) {
        pUVar10 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
        pUVar9 = (UMaterialInstanceDynamic *)
                 ToolSetupUtil::GetImageBasedSculptMaterial(pUVar10,DefaultBasic);
      }
      else if (param_1 == Soft) {
        pUVar10 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
        pUVar9 = (UMaterialInstanceDynamic *)
                 ToolSetupUtil::GetImageBasedSculptMaterial(pUVar10,DefaultSoft);
      }
      else if (param_1 == TangentNormal) {
        pUVar10 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
        pUVar9 = (UMaterialInstanceDynamic *)
                 ToolSetupUtil::GetImageBasedSculptMaterial(pUVar10,TangentNormalFromView);
      }
      else {
        if (param_1 != VertexColor) goto LAB_14cc85d42;
        pUVar10 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
        pUVar9 = ToolSetupUtil::GetVertexColorMaterial(pUVar10,false);
      }
      if (pUVar9 == (UMaterialInstanceDynamic *)0x0) goto LAB_14cc85d42;
      local_res18[0].ComparisonIndex.Value = 0;
      local_res18[0].Number = 0;
      pUVar9 = UMaterialInstanceDynamic::Create
                         ((UMaterialInterface *)pUVar9,(UObject *)this,(FName)0x0);
    }
joined_r0x00014cc85d2c:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar9 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
  }
  (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = pUVar9;
LAB_14cc85d42:
  if ((this->ActiveOverrideMaterial).field0_0x0.DebugPtr != (UMaterialInstanceDynamic *)0x0) {
    (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xbf0))();
    pUVar9 = (this->ActiveOverrideMaterial).field0_0x0.DebugPtr;
    fVar12 = __real_3f800000;
    if (((this->ViewProperties).field0_0x0.DebugPtr)->bFlatShading == false) {
      fVar12 = 0.0;
    }
    pFVar11 = ::FName::FName(local_res18,L"FlatShading");
    UMaterialInstanceDynamic::SetScalarParameterValue(pUVar9,*pFVar11,fVar12);
  }
  pUVar2 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cc85dc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar2 + 0xbd0))(pUVar2,0);
  return;
}

// UpdateOpacitySetting @ 14cc85dd0

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
UDynamicMeshSculptTool::UpdateOpacitySetting(UDynamicMeshSculptTool *this,double param_1)

{
  UMaterialInstanceDynamic *this_00;
  FName *pFVar1;
  FName local_res8 [4];
  
  this_00 = (this->ActiveOverrideMaterial).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialInstanceDynamic *)0x0) {
    pFVar1 = ::FName::FName(local_res8,L"Opacity");
    UMaterialInstanceDynamic::SetScalarParameterValue(this_00,*pFVar1,(float)param_1);
  }
  return;
}

// UpdateROI @ 14cc863a0

/* WARNING: Removing unreachable block (ram,0x00014cc86afb) */
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
UDynamicMeshSculptTool::UpdateROI(UDynamicMeshSculptTool *this,TVector<double> *param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  double *pdVar4;
  uint uVar5;
  int iVar6;
  FDynamicMeshOctree3 *this_00;
  longlong lVar7;
  long64 *plVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  bool bVar17;
  bool bVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  undefined1 local_res20 [8];
  uint local_128 [2];
  longlong local_120;
  undefined1 local_118 [4];
  uint local_114;
  undefined8 local_110;
  uint local_108;
  FScriptContainerElement *local_100;
  longlong *local_f8;
  UDynamicMeshSculptTool *local_f0;
  code *local_e8;
  longlong **local_e0;
  TVector<double>_u_0 local_d8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_98;
  ForAnyElementType local_90 [10];
  
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId523,"DynamicMeshSculptTool_UpdateROI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
               ,0x20b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId523);
  }
  dVar19 = this->CurrentBrushRadius;
  dVar20 = (param_1->field0_0x0)._s_0.X;
  local_b8 = (param_1->field0_0x0)._s_0.Y;
  local_b0 = (param_1->field0_0x0)._s_0.Z;
  local_d8._s_0.Y = local_b8 - dVar19 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  local_b8 = local_b8 + dVar19 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  fVar22 = (float)(dVar19 * dVar19);
  local_c0 = dVar20 + dVar19 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_d8._s_0.X = dVar20 - dVar19 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  local_d8._s_0.Z = local_b0 - dVar19 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_b0 = local_b0 + dVar19 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_120 = (**(code **)(*(longlong *)(this->DynamicMeshComponent).field0_0x0.DebugPtr + 0xb38))()
  ;
  piVar1 = &(this->UpdateROITriBuffer).ArrayMax;
  this_00 = (((this->DynamicMeshComponent).field0_0x0.DebugPtr)->Octree).Ptr;
  (this->UpdateROITriBuffer).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->UpdateROITriBuffer).AllocatorInstance,0,piVar1);
  }
  if (CpuChannel->Enabled < 0) {
    UE::Geometry::FSparseDynamicOctree3::ParallelRangeQuery
              ((FSparseDynamicOctree3 *)this_00,(TAxisAlignedBox3<double> *)&local_d8._s_0,
               &this->UpdateROITriBuffer);
  }
  else {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId537,"DynamicMeshSculptTool_UpdateROI_1RangeQuery",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
               ,0x219);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId537);
    UE::Geometry::FSparseDynamicOctree3::ParallelRangeQuery
              ((FSparseDynamicOctree3 *)this_00,(TAxisAlignedBox3<double> *)&local_d8._s_0,
               &this->UpdateROITriBuffer);
    FCpuProfilerTrace::OutputEndEvent();
  }
  UE::Geometry::FUniqueIndexSet::Initialize
            (&this->VertexROIBuilder,*(int *)(local_120 + 0x20) * 0x200 + *(int *)(local_120 + 0x24)
             ,0);
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId544,"DynamicMeshSculptTool_UpdateROI_2Collect",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
               ,0x220);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId544);
  }
  local_114 = (this->UpdateROITriBuffer).ArrayNum;
  uVar13 = (ulonglong)(int)local_114;
  pFVar15 = (this->UpdateROITriBuffer).AllocatorInstance.Data;
  local_100 = pFVar15 + uVar13 * 4;
  while( true ) {
    pFVar16 = local_100;
    if ((this->UpdateROITriBuffer).ArrayNum != (int)uVar13) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar15 == pFVar16) break;
    uVar13 = (ulonglong)(*(uint *)pFVar15 & 0x1ff);
    lVar7 = *(longlong *)(*(longlong *)(local_120 + 0x130) + (ulonglong)(*(uint *)pFVar15 >> 9) * 8)
    ;
    local_110 = *(longlong *)(lVar7 + uVar13 * 0xc);
    uVar5 = *(uint *)(lVar7 + 8 + uVar13 * 0xc);
    uVar11 = (uint)local_110;
    if ((int)(uint)local_110 < 0) {
      uVar11 = (uint)local_110 + 0x3f;
    }
    plVar8 = (this->VertexROIBuilder).Bits;
    uVar13 = plVar8[(int)uVar11 >> 6];
    uVar14 = 1L << ((byte)local_110 & 0x3f);
    local_108 = uVar5;
    if (((uVar14 & uVar13) == 0) &&
       (lVar7 = *(longlong *)
                 (*(longlong *)(local_120 + 0x10) + (ulonglong)((uint)local_110 >> 9) * 8),
       pdVar4 = (double *)(lVar7 + (ulonglong)((uint)local_110 & 0x1ff) * 0x18),
       local_98 = *(double *)(lVar7 + 0x10 + (ulonglong)((uint)local_110 & 0x1ff) * 0x18),
       dVar19 = *pdVar4 - (param_1->field0_0x0)._s_0.X,
       dVar20 = local_98 - (param_1->field0_0x0)._s_0.Z,
       dVar21 = pdVar4[1] - (param_1->field0_0x0)._s_0.Y,
       dVar21 * dVar21 + dVar19 * dVar19 + dVar20 * dVar20 < (double)fVar22)) {
      local_128[0] = (uint)local_110;
      plVar8[(int)uVar11 >> 6] = uVar13 | uVar14;
      pTVar2 = &(this->VertexROIBuilder).Values;
      pFVar16 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar16 <= (FScriptContainerElement *)local_128) &&
         (((FScriptContainerElement *)local_128 <
           pFVar16 + (longlong)(this->VertexROIBuilder).Values.ArrayMax * 4 &&
          (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)))) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar12 = (this->VertexROIBuilder).Values.ArrayNum;
      piVar1 = &(this->VertexROIBuilder).Values.ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->VertexROIBuilder).Values.ArrayNum = iVar12 + 1;
      *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_128[0];
    }
    uVar11 = local_110._4_4_;
    if (local_110 < 0) {
      uVar11 = local_110._4_4_ + 0x3f;
    }
    plVar8 = (this->VertexROIBuilder).Bits;
    uVar13 = plVar8[(int)uVar11 >> 6];
    uVar14 = 1L << ((byte)((ulonglong)local_110 >> 0x20) & 0x3f);
    if (((uVar14 & uVar13) == 0) &&
       (lVar7 = *(longlong *)
                 (*(longlong *)(local_120 + 0x10) + (ulonglong)(local_110._4_4_ >> 9) * 8),
       pdVar4 = (double *)(lVar7 + (ulonglong)(local_110._4_4_ & 0x1ff) * 0x18),
       local_98 = *(double *)(lVar7 + 0x10 + (ulonglong)(local_110._4_4_ & 0x1ff) * 0x18),
       dVar19 = *pdVar4 - (param_1->field0_0x0)._s_0.X,
       dVar20 = local_98 - (param_1->field0_0x0)._s_0.Z,
       dVar21 = pdVar4[1] - (param_1->field0_0x0)._s_0.Y,
       dVar21 * dVar21 + dVar19 * dVar19 + dVar20 * dVar20 < (double)fVar22)) {
      local_128[0] = local_110._4_4_;
      plVar8[(int)uVar11 >> 6] = uVar13 | uVar14;
      pTVar2 = &(this->VertexROIBuilder).Values;
      pFVar16 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar16 <= (FScriptContainerElement *)local_128) &&
         (((FScriptContainerElement *)local_128 <
           pFVar16 + (longlong)(this->VertexROIBuilder).Values.ArrayMax * 4 &&
          (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)))) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar12 = (this->VertexROIBuilder).Values.ArrayNum;
      piVar1 = &(this->VertexROIBuilder).Values.ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->VertexROIBuilder).Values.ArrayNum = iVar12 + 1;
      *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_128[0];
    }
    uVar11 = uVar5;
    if ((int)uVar5 < 0) {
      uVar11 = uVar5 + 0x3f;
    }
    plVar8 = (this->VertexROIBuilder).Bits;
    uVar13 = plVar8[(int)uVar11 >> 6];
    uVar14 = 1L << ((byte)uVar5 & 0x3f);
    if (((uVar14 & uVar13) == 0) &&
       (lVar7 = *(longlong *)(*(longlong *)(local_120 + 0x10) + (ulonglong)(uVar5 >> 9) * 8),
       pdVar4 = (double *)(lVar7 + (ulonglong)(local_108 & 0x1ff) * 0x18),
       local_98 = *(double *)(lVar7 + 0x10 + (ulonglong)(local_108 & 0x1ff) * 0x18),
       dVar19 = *pdVar4 - (param_1->field0_0x0)._s_0.X,
       dVar20 = local_98 - (param_1->field0_0x0)._s_0.Z,
       dVar21 = pdVar4[1] - (param_1->field0_0x0)._s_0.Y,
       dVar21 * dVar21 + dVar19 * dVar19 + dVar20 * dVar20 < (double)fVar22)) {
      plVar8[(int)uVar11 >> 6] = uVar13 | uVar14;
      pTVar2 = &(this->VertexROIBuilder).Values;
      pFVar16 = (pTVar2->AllocatorInstance).Data;
      local_128[0] = uVar5;
      if ((pFVar16 <= (FScriptContainerElement *)local_128) &&
         (((FScriptContainerElement *)local_128 <
           pFVar16 + (longlong)(this->VertexROIBuilder).Values.ArrayMax * 4 &&
          (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar10)))) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar12 = (this->VertexROIBuilder).Values.ArrayNum;
      piVar1 = &(this->VertexROIBuilder).Values.ArrayMax;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->VertexROIBuilder).Values.ArrayNum = iVar12 + 1;
      *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_128[0];
    }
    uVar13 = (ulonglong)local_114;
    pFVar15 = pFVar15 + 4;
  }
  pTVar2 = &this->VertexROI;
  piVar1 = &(this->VertexROI).ArrayMax;
  (this->VertexROI).ArrayNum = 0;
  if ((this->VertexROI).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  pTVar3 = &(this->VertexROIBuilder).Values;
  pFVar15 = (pTVar3->AllocatorInstance).Data;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar12 = (this->VertexROIBuilder).Values.ArrayNum;
  iVar6 = (this->VertexROIBuilder).Values.ArrayMax;
  (this->VertexROIBuilder).Values.ArrayNum = 0;
  (this->VertexROIBuilder).Values.ArrayMax = 0;
  if (pTVar3 != pTVar2) {
    (pTVar3->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->VertexROIBuilder).Values.ArrayNum = (this->VertexROI).ArrayNum;
    (this->VertexROIBuilder).Values.ArrayMax = *piVar1;
    (this->VertexROI).ArrayNum = 0;
    *piVar1 = 0;
  }
  if (pTVar2 != (TArray<int,TSizedDefaultAllocator<32>_> *)local_90) {
    pFVar16 = (pTVar2->AllocatorInstance).Data;
    if (pFVar16 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar16);
    }
    (pTVar2->AllocatorInstance).Data = pFVar15;
    pFVar15 = (FScriptContainerElement *)0x0;
    (this->VertexROI).ArrayNum = iVar12;
    *piVar1 = iVar6;
  }
  if (pFVar15 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar15);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId567,"DynamicMeshSculptTool_UpdateROI_3TriangleROI",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DynamicMeshSculptTool.cpp"
               ,0x237);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId567);
  }
  UE::Geometry::FUniqueIndexSet::Initialize
            (&this->TriangleROIBuilder,
             *(int *)(local_120 + 0x140) * 0x200 + *(int *)(local_120 + 0x144),0);
  pFVar16 = (pTVar2->AllocatorInstance).Data;
  iVar12 = (this->VertexROI).ArrayNum;
  pFVar15 = pFVar16 + (longlong)iVar12 * 4;
  while( true ) {
    if ((this->VertexROI).ArrayNum != iVar12) {
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    if (pFVar16 == pFVar15) break;
    local_f8 = &local_120;
    local_e0 = &local_f8;
    local_e8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UDynamicMeshSculptTool::UpdateROI'::__l21::<lambda_1>,void,int>::
               Call;
    local_f0 = this;
    UE::Geometry::FSmallListSet::Enumerate<TFunctionRef<void___cdecl(int)>_>
              ((FSmallListSet *)(local_120 + 0xb8),*(int *)pFVar16,
               (TFunctionRef<void___cdecl(int)> *)&local_e8);
    pFVar16 = pFVar16 + 4;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this->TriangleROI);
  UE::Geometry::FUniqueIndexSet::Collect<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
            (&this->TriangleROIBuilder,&this->TriangleROI);
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UpdateTarget @ 14cc88790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDynamicMeshSculptTool::UpdateTarget(UDynamicMeshSculptTool *this)

{
  TFuture<void> *pTVar1;
  UDynamicMeshBrushSculptProperties *pUVar2;
  longlong *plVar3;
  char cVar4;
  TFuture<void> *pTVar5;
  <lambda_1> local_res8;
  undefined1 local_48 [16];
  TUniqueFunction<void___cdecl(void)> local_38;
  
  pUVar2 = (this->SculptProperties).field0_0x0.DebugPtr;
  if ((pUVar2 == (UDynamicMeshBrushSculptProperties *)0x0) ||
     (this->bCachedFreezeTarget = pUVar2->bFreezeTarget, pUVar2->bFreezeTarget == false)) {
    pTVar1 = &this->PendingTargetUpdate;
    if (*(longlong *)pTVar1 != 0) {
      do {
        do {
        } while (*(longlong *)pTVar1 == 0);
        plVar3 = *(longlong **)(*(longlong *)pTVar1 + 0x60);
        cVar4 = (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
      } while (cVar4 == '\0');
    }
    local_38._0_8_ = 0;
    local_38._40_8_ = 0;
    local_res8.__this = this;
    pTVar5 = Async<_UDynamicMeshSculptTool::UpdateTarget_::__l2::<lambda_1>_>
                       ((TFuture<void> *)local_48,DynamicSculptToolAsyncExecTarget,&local_res8,
                        &local_38);
    if (pTVar1 != pTVar5) {
      *(undefined8 *)pTVar1 = *(undefined8 *)pTVar5;
      *(undefined8 *)pTVar5 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&(this->PendingTargetUpdate).field_0x8,
                 (FSharedReferencer<1> *)&pTVar5->field_0x8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_48._8_8_);
  }
  return;
}

// UpdateTwoSidedSetting @ 14cc88860

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
UDynamicMeshSculptTool::UpdateTwoSidedSetting(UDynamicMeshSculptTool *this,bool param_1)

{
  double dVar1;
  UMeshEditingViewProperties *pUVar2;
  UOctreeDynamicMeshComponent *pUVar3;
  UInteractiveToolManager *pUVar4;
  UMaterialInstanceDynamic *pUVar5;
  
  pUVar2 = (this->ViewProperties).field0_0x0.DebugPtr;
  dVar1 = pUVar2->Opacity;
  pUVar4 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
  pUVar5 = ToolSetupUtil::GetTransparentSculptMaterial
                     (pUVar4,&pUVar2->TransparentMaterialColor,dVar1,param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar5 == (UMaterialInstanceDynamic *)0x0)) {
    (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = pUVar5;
    if (pUVar5 == (UMaterialInstanceDynamic *)0x0) {
      return;
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
    (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = pUVar5;
  }
  pUVar3 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar3 + 0xbf0))(pUVar3,pUVar5);
  return;
}

