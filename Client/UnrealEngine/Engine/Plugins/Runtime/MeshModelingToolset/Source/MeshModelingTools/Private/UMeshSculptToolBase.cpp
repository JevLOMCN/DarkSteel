// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 127

// StaticClass @ 14cc93440

UClass * __cdecl UMeshSculptToolBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSculptToolBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshSculptToolBase",
               &Z_Registration_Info_UClass_UMeshSculptToolBase.InnerSingleton,
               StaticRegisterNativesUMeshSculptToolBase,0xc80,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshSculptToolBase>,
               InternalVTableHelperCtorCaller<UMeshSculptToolBase>,local_res8,
               UMeshSurfacePointTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSculptToolBase.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14cc96820

void __cdecl
`UMeshSculptToolBase::ProcessPerTickStamps'::__l2::<lambda_1>::<lambda_invoker_cdecl>(int param_1)

{
  return;
}

// <lambda_invoker_cdecl> @ 14cc96910

void __cdecl
`UMeshSculptToolBase::ProcessPerTickStamps'::__l2::<lambda_2>::<lambda_invoker_cdecl>(void)

{
  return;
}

// UMeshSculptToolBase @ 14ccbc8a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMeshSculptToolBase * __thiscall
UMeshSculptToolBase::UMeshSculptToolBase(UMeshSculptToolBase *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UMeshSurfacePointTool::UMeshSurfacePointTool((UMeshSurfacePointTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->BrushProperties).field0_0x0.DebugPtr = (USculptBrushProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  (this->GizmoProperties).field0_0x0.DebugPtr = (UWorkPlaneProperties *)0x0;
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
  *(undefined8 *)&(this->RegisteredPrimaryBrushTypes).Elements = 0;
  *(undefined8 *)&(this->RegisteredPrimaryBrushTypes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredPrimaryBrushTypes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredPrimaryBrushTypes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredPrimaryBrushTypes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredPrimaryBrushTypes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredPrimaryBrushTypes).Elements.field_0x34 = 0;
  (this->RegisteredPrimaryBrushTypes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RegisteredPrimaryBrushTypes).HashSize = 0;
  *(undefined8 *)&(this->RegisteredSecondaryBrushTypes).Elements = 0;
  *(undefined8 *)&(this->RegisteredSecondaryBrushTypes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredSecondaryBrushTypes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredSecondaryBrushTypes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredSecondaryBrushTypes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredSecondaryBrushTypes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredSecondaryBrushTypes).Elements.field_0x34 = 0;
  (this->RegisteredSecondaryBrushTypes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RegisteredSecondaryBrushTypes).HashSize = 0;
  *(undefined8 *)&this->BrushOpPropSets = 0;
  *(undefined8 *)&(this->BrushOpPropSets).field_0x8 = 0;
  *(undefined8 *)&(this->BrushOpPropSets).field_0x20 = 0;
  *(undefined4 *)&(this->BrushOpPropSets).field_0x28 = 0;
  *(undefined4 *)&(this->BrushOpPropSets).field_0x2c = 0x80;
  *(undefined4 *)&(this->BrushOpPropSets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BrushOpPropSets).field_0x34 = 0;
  *(undefined8 *)&(this->BrushOpPropSets).field_0x40 = 0;
  *(undefined4 *)&(this->BrushOpPropSets).field_0x48 = 0;
  *(undefined8 *)&this->BrushOpFactories = 0;
  *(undefined8 *)&(this->BrushOpFactories).field_0x8 = 0;
  *(undefined8 *)&(this->BrushOpFactories).field_0x20 = 0;
  *(undefined4 *)&(this->BrushOpFactories).field_0x28 = 0;
  *(undefined4 *)&(this->BrushOpFactories).field_0x2c = 0x80;
  *(undefined4 *)&(this->BrushOpFactories).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BrushOpFactories).field_0x34 = 0;
  *(undefined8 *)&(this->BrushOpFactories).field_0x40 = 0;
  *(undefined4 *)&(this->BrushOpFactories).field_0x48 = 0;
  *(undefined8 *)&(this->SecondaryBrushOpPropSets).field_0x8 = 0;
  *(undefined8 *)&this->SecondaryBrushOpPropSets = 0;
  *(undefined8 *)&(this->SecondaryBrushOpPropSets).field_0x20 = 0;
  *(undefined4 *)&(this->SecondaryBrushOpPropSets).field_0x28 = 0;
  *(undefined4 *)&(this->SecondaryBrushOpPropSets).field_0x2c = 0x80;
  *(undefined4 *)&(this->SecondaryBrushOpPropSets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SecondaryBrushOpPropSets).field_0x34 = 0;
  *(undefined8 *)&(this->SecondaryBrushOpPropSets).field_0x40 = 0;
  *(undefined4 *)&(this->SecondaryBrushOpPropSets).field_0x48 = 0;
  *(undefined8 *)&(this->SecondaryBrushOpFactories).field_0x8 = 0;
  *(undefined8 *)&this->SecondaryBrushOpFactories = 0;
  *(undefined8 *)&(this->SecondaryBrushOpFactories).field_0x20 = 0;
  *(undefined4 *)&(this->SecondaryBrushOpFactories).field_0x28 = 0;
  *(undefined4 *)&(this->SecondaryBrushOpFactories).field_0x2c = 0x80;
  *(undefined4 *)&(this->SecondaryBrushOpFactories).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SecondaryBrushOpFactories).field_0x34 = 0;
  *(undefined8 *)&(this->SecondaryBrushOpFactories).field_0x40 = 0;
  *(undefined4 *)&(this->SecondaryBrushOpFactories).field_0x48 = 0;
  (this->BrushRelativeSizeRange).Min = 1.7976931348623157e+308;
  (this->BrushRelativeSizeRange).Max = -1.7976931348623157e+308;
  (this->RegisteredPrimaryFalloffTypes).ArrayNum = 0;
  (this->RegisteredPrimaryFalloffTypes).ArrayMax = 0;
  (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  this->CurrentBrushFalloff = 0.5;
  this->PrimaryVisiblePropSet = (UMeshSculptBrushOpProps *)0x0;
  this->SecondaryVisiblePropSet = (UMeshSculptBrushOpProps *)0x0;
  this->bBrushOpPropsVisible = true;
  this->CurrentBrushRadius = 1.0;
  this->ActivePressure = 1.0;
  (this->PrimaryBrushOp).Ptr = (FMeshSculptBrushOp *)0x0;
  (this->SecondaryBrushOp).Ptr = (FMeshSculptBrushOp *)0x0;
  (this->PrimaryFalloff).Object = (FMeshSculptFallofFunc *)0x0;
  (this->PrimaryFalloff).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RegisteredPrimaryFalloffTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastBrushFrameLocal).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastBrushFrameLocal).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->LastBrushFrameLocal).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.W = 1.0;
  this->LastBrushTriangleID = -1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveBrushTargetPlaneWorld).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveBrushTargetPlaneWorld).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->ActiveBrushTargetPlaneWorld).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.W = 1.0;
  this->bInStroke = false;
  this->bSmoothing = false;
  this->bInvert = false;
  (this->PendingInputRays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingInputRays).ArrayNum = 0;
  (this->PendingInputRays).ArrayMax = 0;
  (this->PreviousInputRay).bIsSet = false;
  (this->PreviousUnfilteredHitPosition).bIsSet = false;
  this->PreviousUnfilteredHitRadius = 0.0;
  (this->StrokeGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  this->ActiveStrokeTime = 0.0;
  this->ActiveStrokePathArcLen = 0.0;
  this->LastFlowTimeStamp = 0;
  this->LastSpacingTimestamp = 0;
  this->bIsStampPending = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PendingStampRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PendingStampRay).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->PendingStampRay).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PendingStampRay).Direction.field0_0x0._s_0.X = 0.0;
  (this->PendingStampRay).Direction.field0_0x0._s_0.Y = 0.0;
  (this->PendingStampRay).Direction.field0_0x0._s_0.Z = 1.0;
  (this->PendingStampRays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingStampRays).ArrayNum = 0;
  (this->PendingStampRays).ArrayMax = 0;
  FSculptBrushStamp::FSculptBrushStamp(&this->HoverStamp);
  FSculptBrushStamp::FSculptBrushStamp(&this->CurrentStamp);
  FSculptBrushStamp::FSculptBrushStamp(&this->LastStamp);
  (this->StampRegionPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->StampRegionPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->StampRegionPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->StampRegionPlane).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StampRegionPlane).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StampRegionPlane).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->StampRegionPlane).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StampRegionPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->StampRegionPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->StampRegionPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->StampRegionPlane).Rotation.field0_0x0._s_0.W = 1.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StrokePlane).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StrokePlane).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->StrokePlane).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StrokePlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ViewProperties).field0_0x0.DebugPtr = (UMeshEditingViewProperties *)0x0;
  (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->BrushIndicator).field0_0x0.DebugPtr = (UBrushStampIndicator *)0x0;
  (this->BrushIndicatorMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->BrushIndicatorMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->BrushEditBehavior).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PlaneTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->PlaneTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  *(undefined8 *)&(this->GizmoPositionWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->GizmoPositionWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->GizmoPositionWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->GizmoPositionWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->GizmoRotationWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->GizmoRotationWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x28 = 0;
  (this->LongTransactions).OpenCount = 0;
  this->bDrawWorkPlaneGridLines = true;
  (this->LongTransactions).MaxOpen = 1;
  return this;
}

// UMeshSculptToolBase @ 14ccbcf40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UMeshSculptToolBase * __thiscall UMeshSculptToolBase::UMeshSculptToolBase(UMeshSculptToolBase *this)

{
  undefined8 uVar1;
  
  UMeshSurfacePointTool::UMeshSurfacePointTool((UMeshSurfacePointTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->BrushProperties).field0_0x0.DebugPtr = (USculptBrushProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  (this->GizmoProperties).field0_0x0.DebugPtr = (UWorkPlaneProperties *)0x0;
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
  *(undefined8 *)&(this->RegisteredPrimaryBrushTypes).Elements = 0;
  *(undefined8 *)&(this->RegisteredPrimaryBrushTypes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredPrimaryBrushTypes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredPrimaryBrushTypes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredPrimaryBrushTypes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredPrimaryBrushTypes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredPrimaryBrushTypes).Elements.field_0x34 = 0;
  (this->RegisteredPrimaryBrushTypes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RegisteredPrimaryBrushTypes).HashSize = 0;
  *(undefined8 *)&(this->RegisteredSecondaryBrushTypes).Elements = 0;
  *(undefined8 *)&(this->RegisteredSecondaryBrushTypes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RegisteredSecondaryBrushTypes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RegisteredSecondaryBrushTypes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RegisteredSecondaryBrushTypes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RegisteredSecondaryBrushTypes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RegisteredSecondaryBrushTypes).Elements.field_0x34 = 0;
  (this->RegisteredSecondaryBrushTypes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RegisteredSecondaryBrushTypes).HashSize = 0;
  *(undefined8 *)&this->BrushOpPropSets = 0;
  *(undefined8 *)&(this->BrushOpPropSets).field_0x8 = 0;
  *(undefined8 *)&(this->BrushOpPropSets).field_0x20 = 0;
  *(undefined4 *)&(this->BrushOpPropSets).field_0x28 = 0;
  *(undefined4 *)&(this->BrushOpPropSets).field_0x2c = 0x80;
  *(undefined4 *)&(this->BrushOpPropSets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BrushOpPropSets).field_0x34 = 0;
  *(undefined8 *)&(this->BrushOpPropSets).field_0x40 = 0;
  *(undefined4 *)&(this->BrushOpPropSets).field_0x48 = 0;
  *(undefined8 *)&this->BrushOpFactories = 0;
  *(undefined8 *)&(this->BrushOpFactories).field_0x8 = 0;
  *(undefined8 *)&(this->BrushOpFactories).field_0x20 = 0;
  *(undefined4 *)&(this->BrushOpFactories).field_0x28 = 0;
  *(undefined4 *)&(this->BrushOpFactories).field_0x2c = 0x80;
  *(undefined4 *)&(this->BrushOpFactories).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->BrushOpFactories).field_0x34 = 0;
  *(undefined8 *)&(this->BrushOpFactories).field_0x40 = 0;
  *(undefined4 *)&(this->BrushOpFactories).field_0x48 = 0;
  *(undefined8 *)&(this->SecondaryBrushOpPropSets).field_0x8 = 0;
  *(undefined8 *)&this->SecondaryBrushOpPropSets = 0;
  *(undefined8 *)&(this->SecondaryBrushOpPropSets).field_0x20 = 0;
  *(undefined4 *)&(this->SecondaryBrushOpPropSets).field_0x28 = 0;
  *(undefined4 *)&(this->SecondaryBrushOpPropSets).field_0x2c = 0x80;
  *(undefined4 *)&(this->SecondaryBrushOpPropSets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SecondaryBrushOpPropSets).field_0x34 = 0;
  *(undefined8 *)&(this->SecondaryBrushOpPropSets).field_0x40 = 0;
  *(undefined4 *)&(this->SecondaryBrushOpPropSets).field_0x48 = 0;
  *(undefined8 *)&(this->SecondaryBrushOpFactories).field_0x8 = 0;
  *(undefined8 *)&this->SecondaryBrushOpFactories = 0;
  *(undefined8 *)&(this->SecondaryBrushOpFactories).field_0x20 = 0;
  *(undefined4 *)&(this->SecondaryBrushOpFactories).field_0x28 = 0;
  *(undefined4 *)&(this->SecondaryBrushOpFactories).field_0x2c = 0x80;
  *(undefined4 *)&(this->SecondaryBrushOpFactories).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SecondaryBrushOpFactories).field_0x34 = 0;
  *(undefined8 *)&(this->SecondaryBrushOpFactories).field_0x40 = 0;
  *(undefined4 *)&(this->SecondaryBrushOpFactories).field_0x48 = 0;
  (this->BrushRelativeSizeRange).Min = 1.7976931348623157e+308;
  (this->BrushRelativeSizeRange).Max = -1.7976931348623157e+308;
  (this->RegisteredPrimaryFalloffTypes).ArrayNum = 0;
  (this->RegisteredPrimaryFalloffTypes).ArrayMax = 0;
  (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  this->CurrentBrushFalloff = 0.5;
  this->PrimaryVisiblePropSet = (UMeshSculptBrushOpProps *)0x0;
  this->SecondaryVisiblePropSet = (UMeshSculptBrushOpProps *)0x0;
  this->bBrushOpPropsVisible = true;
  this->CurrentBrushRadius = 1.0;
  this->ActivePressure = 1.0;
  (this->PrimaryBrushOp).Ptr = (FMeshSculptBrushOp *)0x0;
  (this->SecondaryBrushOp).Ptr = (FMeshSculptBrushOp *)0x0;
  (this->PrimaryFalloff).Object = (FMeshSculptFallofFunc *)0x0;
  (this->PrimaryFalloff).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->RegisteredPrimaryFalloffTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.W = 1.0;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LastBrushFrameLocal).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastBrushFrameLocal).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->LastBrushFrameLocal).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.X = 0.0;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.W = 1.0;
  this->LastBrushTriangleID = -1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveBrushTargetPlaneWorld).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveBrushTargetPlaneWorld).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->ActiveBrushTargetPlaneWorld).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.W = 1.0;
  this->bInStroke = false;
  this->bSmoothing = false;
  this->bInvert = false;
  (this->PendingInputRays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingInputRays).ArrayNum = 0;
  (this->PendingInputRays).ArrayMax = 0;
  (this->PreviousInputRay).bIsSet = false;
  (this->PreviousUnfilteredHitPosition).bIsSet = false;
  this->PreviousUnfilteredHitRadius = 0.0;
  (this->StrokeGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  this->ActiveStrokeTime = 0.0;
  this->ActiveStrokePathArcLen = 0.0;
  this->LastFlowTimeStamp = 0;
  this->LastSpacingTimestamp = 0;
  this->bIsStampPending = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->PendingStampRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PendingStampRay).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->PendingStampRay).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PendingStampRay).Direction.field0_0x0._s_0.X = 0.0;
  (this->PendingStampRay).Direction.field0_0x0._s_0.Y = 0.0;
  (this->PendingStampRay).Direction.field0_0x0._s_0.Z = 1.0;
  (this->PendingStampRays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingStampRays).ArrayNum = 0;
  (this->PendingStampRays).ArrayMax = 0;
  FSculptBrushStamp::FSculptBrushStamp(&this->HoverStamp);
  FSculptBrushStamp::FSculptBrushStamp(&this->CurrentStamp);
  FSculptBrushStamp::FSculptBrushStamp(&this->LastStamp);
  (this->StampRegionPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->StampRegionPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->StampRegionPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->StampRegionPlane).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StampRegionPlane).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StampRegionPlane).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->StampRegionPlane).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StampRegionPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->StampRegionPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->StampRegionPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->StampRegionPlane).Rotation.field0_0x0._s_0.W = 1.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StrokePlane).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StrokePlane).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->StrokePlane).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->StrokePlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->StrokePlane).Rotation.field0_0x0._s_0.W = 1.0;
  (this->ViewProperties).field0_0x0.DebugPtr = (UMeshEditingViewProperties *)0x0;
  (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->BrushIndicator).field0_0x0.DebugPtr = (UBrushStampIndicator *)0x0;
  (this->BrushIndicatorMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->BrushIndicatorMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->BrushEditBehavior).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PlaneTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->PlaneTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  *(undefined8 *)&(this->GizmoPositionWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->GizmoPositionWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->GizmoPositionWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->GizmoPositionWatcher).OnValueChangedFunc.field_0x28 = 0;
  *(undefined8 *)&(this->GizmoRotationWatcher).GetValueFunc = 0;
  *(undefined8 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28 = 0;
  *(undefined8 *)&(this->GizmoRotationWatcher).OnValueChangedFunc = 0;
  *(undefined8 *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x28 = 0;
  (this->LongTransactions).OpenCount = 0;
  this->bDrawWorkPlaneGridLines = true;
  (this->LongTransactions).MaxOpen = 1;
  return this;
}

// ~UMeshSculptToolBase @ 14ccc3df0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::~UMeshSculptToolBase(UMeshSculptToolBase *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  FMeshSculptBrushOp *pFVar3;
  void *pvVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  FLongTransactionTracker *local_res8;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  if ((this->LongTransactions).OpenCount != 0) {
    local_res8 = &this->LongTransactions;
    `UE::TransactionUtil::FLongTransactionTracker::~FLongTransactionTracker'::__l2::<lambda_1>::
    operator()(&local_res8);
  }
  if (*(longlong *)&(this->GizmoRotationWatcher).OnValueChangedFunc != 0) {
    plVar1 = *(longlong **)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x28;
    plVar6 = (longlong *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)&(this->GizmoRotationWatcher).GetValueFunc != 0) {
    plVar1 = *(longlong **)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28;
    plVar6 = (longlong *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)&(this->GizmoPositionWatcher).OnValueChangedFunc != 0) {
    plVar1 = *(longlong **)&(this->GizmoPositionWatcher).OnValueChangedFunc.field_0x28;
    plVar6 = (longlong *)&(this->GizmoPositionWatcher).OnValueChangedFunc.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)&(this->GizmoPositionWatcher).GetValueFunc != 0) {
    plVar1 = *(longlong **)&(this->GizmoPositionWatcher).GetValueFunc.field_0x28;
    plVar6 = (longlong *)&(this->GizmoPositionWatcher).GetValueFunc.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)&(this->LastStamp).StampAlphaFunc != 0) {
    plVar1 = *(longlong **)&(this->LastStamp).StampAlphaFunc.field_0x28;
    plVar6 = (longlong *)&(this->LastStamp).StampAlphaFunc.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)&(this->CurrentStamp).StampAlphaFunc != 0) {
    plVar1 = *(longlong **)&(this->CurrentStamp).StampAlphaFunc.field_0x28;
    plVar6 = (longlong *)&(this->CurrentStamp).StampAlphaFunc.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  if (*(longlong *)&(this->HoverStamp).StampAlphaFunc != 0) {
    plVar1 = *(longlong **)&(this->HoverStamp).StampAlphaFunc.field_0x28;
    plVar6 = (longlong *)&(this->HoverStamp).StampAlphaFunc.field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  pFVar2 = (this->PendingStampRays).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PendingInputRays).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<UMeshSculptToolBase::FFalloffTypeInfo,int>
            ((FFalloffTypeInfo *)(this->RegisteredPrimaryFalloffTypes).AllocatorInstance.Data,
             (this->RegisteredPrimaryFalloffTypes).ArrayNum);
  pFVar2 = (this->RegisteredPrimaryFalloffTypes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PrimaryFalloff).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->SecondaryBrushOp).Ptr;
  if (pFVar3 != (FMeshSculptBrushOp *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  pFVar3 = (this->PrimaryBrushOp).Ptr;
  if (pFVar3 != (FMeshSculptBrushOp *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  *(undefined4 *)&(this->SecondaryBrushOpFactories).field_0x48 = 0;
  pvVar4 = *(void **)&(this->SecondaryBrushOpFactories).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SecondaryBrushOpFactories);
  *(undefined4 *)&(this->SecondaryBrushOpPropSets).field_0x48 = 0;
  pvVar4 = *(void **)&(this->SecondaryBrushOpPropSets).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMeshSculptBrushOpProps>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMeshSculptBrushOpProps>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMeshSculptBrushOpProps>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SecondaryBrushOpPropSets);
  *(undefined4 *)&(this->BrushOpFactories).field_0x48 = 0;
  pvVar4 = *(void **)&(this->BrushOpFactories).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BrushOpFactories);
  *(undefined4 *)&(this->BrushOpPropSets).field_0x48 = 0;
  pvVar4 = *(void **)&(this->BrushOpPropSets).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMeshSculptBrushOpProps>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMeshSculptBrushOpProps>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMeshSculptBrushOpProps>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->BrushOpPropSets);
  (this->RegisteredSecondaryBrushTypes).HashSize = 0;
  FVar5 = (this->RegisteredSecondaryBrushTypes).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<UMeshSculptToolBase::FBrushTypeInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UMeshSculptToolBase::FBrushTypeInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RegisteredSecondaryBrushTypes).Elements);
  (this->RegisteredPrimaryBrushTypes).HashSize = 0;
  FVar5 = (this->RegisteredPrimaryBrushTypes).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<UMeshSculptToolBase::FBrushTypeInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UMeshSculptToolBase::FBrushTypeInfo>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RegisteredPrimaryBrushTypes).Elements);
  UMeshSurfacePointTool::~UMeshSurfacePointTool((UMeshSurfacePointTool *)this);
  return;
}

// operator() @ 14ccd01e0

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
`UMeshSculptToolBase::UpdateStampPendingState'::__l23::<lambda_1>::operator()
          (void *this,TRay<double> *param_1,TVector<double> *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  int local_res8 [2];
  TVector<double> local_28;
  
  puVar3 = (undefined8 *)(**(code **)(**(longlong **)this + 0x478))();
  local_res8[0] = -1;
  cVar1 = (**(code **)(*(longlong *)*puVar3 + 0x30))();
  if (cVar1 == '\0') {
    bVar2 = UMeshSculptToolBase::ProjectWorldRayOnSculptMesh
                      (*(UMeshSculptToolBase **)this,param_1,true,param_2,&local_28,local_res8);
    return bVar2;
  }
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      bVar2 = UMeshSculptToolBase::ProjectWorldRayOnActivePlane
                        (*(UMeshSculptToolBase **)this,param_1,param_2,&local_28);
      return bVar2;
    }
    return false;
  }
  bVar2 = UMeshSculptToolBase::ProjectWorldRayOnTargetMesh
                    (*(UMeshSculptToolBase **)this,param_1,true,param_2,&local_28,local_res8);
  return bVar2;
}

// operator() @ 14ccd2c60

double __thiscall
`UMeshSculptToolBase::MapHorizontalBrushEditBehaviorToBrushSize'::__l2::<lambda_3>::operator()
          (void *this,float param_1)

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
  if (*(char *)(*(longlong *)(lVar1 + 0x128) + 0xb4) == '\x01') {
    dVar6 = *(double *)(lVar1 + 0x148) - *(double *)(lVar1 + 0x498);
    dVar3 = *(double *)(lVar1 + 0x150) - *(double *)(lVar1 + 0x4a0);
    dVar5 = *(double *)(lVar1 + 0x140) - *(double *)(lVar1 + 0x490);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = dVar6 * dVar6 + dVar5 * dVar5 + dVar3 * dVar3;
    auVar4 = sqrtpd(auVar4,auVar2);
    return (double)param_1 * auVar4._0_8_;
  }
  return (double)param_1 * __real_3ff0000000000000;
}

// operator() @ 14ccd36b0

bool __thiscall
`UMeshSculptToolBase::UpdateStampPendingState'::__l31::<lambda_3>::operator()
          (void *this,TRay<double> *param_1,TVector<double> *param_2)

{
  longlong lVar1;
  double dVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TVector<double>_u_0 local_38 [2];
  
  bVar3 = UpdateStampPendingState'::__l23::<lambda_1>::operator()
                    (*(void **)((longlong)this + 0x10),param_1,(TVector<double> *)&local_38[0]._s_0)
  ;
  if (bVar3) {
    lVar1 = *(longlong *)this;
    dVar5 = (double)local_38[0]._0_8_ - (((TVector<double> *)(lVar1 + 0x140))->field0_0x0)._s_0.X;
    dVar6 = (double)local_38[0]._8_8_ - *(double *)(lVar1 + 0x148);
    dVar2 = (double)local_38[0]._16_8_ - *(double *)(lVar1 + 0x150);
    dVar4 = dVar6 * dVar6 + dVar5 * dVar5 + dVar2 * dVar2;
    if (__real_3e45798ee0000000 < dVar4) {
      dVar4 = __real_3ff0000000000000 / SQRT(dVar4);
      local_38[0]._0_8_ = dVar5 * dVar4;
      local_38[0]._8_8_ = dVar6 * dVar4;
      local_38[0]._16_8_ = dVar2 * dVar4;
      bVar3 = UE::Geometry::TFrame3<double>::RayPlaneIntersection
                        (*(TFrame3<double> **)((longlong)this + 8),
                         (TVector<double> *)(lVar1 + 0x140),(TVector<double> *)&local_38[0]._s_0,2,
                         param_2);
      return bVar3;
    }
  }
  return false;
}

// operator() @ 14ccd3f60

void __thiscall
`UMeshSculptToolBase::UpdateStampPendingState'::__l31::<lambda_4>::operator()
          (void *this,FInputRayData *param_1,FInputRayData *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ForAnyElementType *pFVar15;
  int iVar16;
  double dVar17;
  undefined1 in_XMM3 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  TVector<double>_u_0 local_158;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  TVector<double>_u_0 TStack_128;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  TVector<double>_u_0 local_d0 [7];
  
  bVar11 = __l31::<lambda_3>::operator()
                     (*(void **)((longlong)this + 8),&param_2->Ray,
                      (TVector<double> *)&local_d0[0]._s_0);
  if (bVar11) {
    bVar11 = __l31::<lambda_3>::operator()
                       (*(void **)((longlong)this + 8),&param_1->Ray,
                        (TVector<double> *)&local_158._s_0);
    dVar10 = __real_3e45798ee0000000;
    dVar9 = __real_3ff0000000000000;
    if (bVar11) {
      dVar5 = (double)local_d0[0]._0_8_ - local_158._s_0.X;
      dVar6 = (double)local_d0[0]._8_8_ - local_158._s_0.Y;
      dVar7 = (double)local_d0[0]._16_8_ - local_158._s_0.Z;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = dVar6 * dVar6 + dVar5 * dVar5 + dVar7 * dVar7;
      auVar18 = sqrtpd(in_XMM3,auVar18);
      if (auVar18._0_8_ != 0.0) {
        iVar16 = 1;
        iVar12 = -(int)((longlong)
                        ROUND(__real_bfe0000000000000 -
                              (__real_4000000000000000 / *(double *)((longlong)this + 0x10)) *
                              auVar18._0_8_) >> 1);
        if (0 < iVar12) {
          dVar8 = __real_3ff0000000000000 / (double)iVar12;
          do {
            lVar14 = *(longlong *)this;
            dVar4 = (double)iVar16 * dVar8;
            dVar3 = (dVar4 * dVar5 + local_158._s_0.X) - *(double *)(lVar14 + 0x140);
            dVar20 = (dVar4 * dVar6 + local_158._s_0.Y) - *(double *)(lVar14 + 0x148);
            dVar19 = (dVar4 * dVar7 + local_158._s_0.Z) - *(double *)(lVar14 + 0x150);
            dVar17 = dVar20 * dVar20 + dVar3 * dVar3 + dVar19 * dVar19;
            if (dVar17 <= dVar10) {
              bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_304361139444120490>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Sculpting\\MeshSculptToolBase.cpp"
                                  ,0x456,"Direction.Normalize()");
              if (bVar11) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            else {
              pFVar15 = (ForAnyElementType *)(lVar14 + 0x620);
              local_140 = *(undefined8 *)(lVar14 + 0x140);
              uStack_138 = *(undefined8 *)(lVar14 + 0x148);
              dVar17 = dVar9 / SQRT(dVar17);
              local_130 = *(undefined8 *)(lVar14 + 0x150);
              TStack_128._s_0.Z = dVar19 * dVar17;
              TStack_128._s_0.Y = dVar20 * dVar17;
              TStack_128._s_0.X = dVar3 * dVar17;
              UE::Math::TVector<double>::Normalize((TVector<double> *)&TStack_128._s_0,dVar10);
              local_110 = (param_2->Pressure - param_1->Pressure) * dVar4 + param_1->Pressure;
              if (((pFVar15->Data <= (FScriptContainerElement *)&local_140) &&
                  ((FScriptContainerElement *)&local_140 <
                   pFVar15->Data + (longlong)*(int *)(lVar14 + 0x62c) * 0x38)) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar11)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              iVar13 = *(int *)(lVar14 + 0x628);
              if (iVar13 == *(int *)(lVar14 + 0x62c)) {
                iVar13 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x838,pFVar15,(int *)(lVar14 + 0x62c));
              }
              *(int *)(lVar14 + 0x628) = iVar13 + 1;
              lVar14 = (longlong)iVar13 * 0x38;
              pFVar1 = pFVar15->Data;
              *(undefined8 *)(pFVar1 + lVar14) = local_140;
              *(undefined8 *)(pFVar1 + lVar14 + 8) = uStack_138;
              *(undefined8 *)(pFVar1 + lVar14 + 0x10) = local_130;
              *(double *)(pFVar1 + lVar14 + 0x10 + 8) = TStack_128._s_0.X;
              *(double *)(pFVar1 + lVar14 + 0x20) = TStack_128._s_0.Y;
              *(double *)(pFVar1 + lVar14 + 0x20 + 8) = TStack_128._s_0.Z;
              *(double *)(pFVar1 + lVar14 + 0x30) = local_110;
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 <= iVar12);
        }
      }
    }
    else {
      local_108 = (param_2->Ray).Origin.field0_0x0._s_0.X;
      dStack_100 = (param_2->Ray).Origin.field0_0x0._s_0.Y;
      lVar14 = *(longlong *)this;
      local_f8 = (param_2->Ray).Origin.field0_0x0._s_0.Z;
      dStack_f0 = (param_2->Ray).Direction.field0_0x0._s_0.X;
      pFVar15 = (ForAnyElementType *)(lVar14 + 0x620);
      local_e8 = (param_2->Ray).Direction.field0_0x0._s_0.Y;
      dStack_e0 = (param_2->Ray).Direction.field0_0x0._s_0.Z;
      local_d8 = param_2->Pressure;
      if (((pFVar15->Data <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 <
           pFVar15->Data + (longlong)*(int *)(lVar14 + 0x62c) * 0x38)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar12 = *(int *)(lVar14 + 0x628);
      if (iVar12 == *(int *)(lVar14 + 0x62c)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,pFVar15,(int *)(lVar14 + 0x62c));
      }
      *(int *)(lVar14 + 0x628) = iVar12 + 1;
      lVar14 = (longlong)iVar12 * 0x38;
      pFVar1 = pFVar15->Data;
      *(double *)(pFVar1 + lVar14) = local_108;
      *(double *)(pFVar1 + lVar14 + 8) = dStack_100;
      *(double *)(pFVar1 + lVar14 + 0x10) = local_f8;
      *(double *)(pFVar1 + lVar14 + 0x10 + 8) = dStack_f0;
      *(double *)(pFVar1 + lVar14 + 0x20) = local_e8;
      *(double *)(pFVar1 + lVar14 + 0x20 + 8) = dStack_e0;
      *(double *)(pFVar1 + lVar14 + 0x30) = local_d8;
    }
  }
  return;
}

// operator() @ 14ccd51c0

void __thiscall
`UMeshSculptToolBase::UpdateStampPendingState'::__l40::<lambda_6>::operator()(void *this)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  uint *puVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  
  puVar16 = *(uint **)((longlong)this + 8);
  uVar4 = *(uint *)this;
  if (uVar4 != *puVar16) {
    lVar5 = *(longlong *)((longlong)this + 0x10);
    uVar17 = 0;
    if ((int)uVar4 < *(int *)(lVar5 + 0x628)) {
      uVar17 = ~uVar4 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *(longlong *)(lVar5 + 0x620);
    lVar19 = *(longlong *)((longlong)this + 0x10);
    lVar18 = (longlong)(int)uVar4 * 0x38;
    puVar2 = (undefined8 *)(lVar18 + 0x10 + lVar5);
    uVar11 = *puVar2;
    uVar12 = puVar2[1];
    puVar1 = (undefined4 *)(lVar18 + lVar5);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    puVar2 = (undefined8 *)(lVar18 + 0x20 + lVar5);
    uVar13 = *puVar2;
    uVar14 = puVar2[1];
    uVar3 = *(undefined8 *)(lVar18 + 0x30 + lVar5);
    uVar4 = **(uint **)((longlong)this + 8);
    uVar17 = 0;
    if ((int)uVar4 < *(int *)(lVar19 + 0x628)) {
      uVar17 = ~uVar4 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar5 = *(longlong *)(lVar19 + 0x620);
    lVar19 = (longlong)(int)uVar4 * 0x38;
    puVar1 = (undefined4 *)(lVar19 + lVar5);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    puVar2 = (undefined8 *)(lVar19 + 0x10 + lVar5);
    *puVar2 = uVar11;
    puVar2[1] = uVar12;
    puVar2 = (undefined8 *)(lVar19 + 0x20 + lVar5);
    *puVar2 = uVar13;
    puVar2[1] = uVar14;
    *(undefined8 *)(lVar19 + 0x30 + lVar5) = uVar3;
    puVar16 = *(uint **)((longlong)this + 8);
  }
  *puVar16 = *puVar16 + 1;
  return;
}

// AccumulateStrokeTime @ 14ccde100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::AccumulateStrokeTime(UMeshSculptToolBase *this,float param_1)

{
  this->ActiveStrokeTime = (double)param_1 + this->ActiveStrokeTime;
  return;
}

// AlignBrushToView @ 14ccde1e0

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

void __thiscall UMeshSculptToolBase::AlignBrushToView(UMeshSculptToolBase *this)

{
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = ___xmm_00000000000000003ff0000000000000;
  local_28._s_0.Y = _UNK_150689518;
  local_28._s_0.Z = 0.0;
  UE::Math::TQuat<double>::RotateVector
            (&(this->CameraState).Orientation,(TVector<double> *)&local_48._s_0,
             (TVector<double> *)&local_28._s_0);
  local_28._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)local_48._16_8_ >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(local_48._s_0.Z,0) ^ (uint)__xmm_80000000000000008000000000000000);
  local_28._4_4_ = local_48._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
  local_28._0_4_ = local_48._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
  local_28._12_4_ = local_48._12_4_ ^ _UNK_15066df7c;
  local_28._8_4_ = local_48._8_4_ ^ _UNK_15066df78;
  UpdateBrushFrameWorld(this,&(this->LastBrushFrameWorld).Origin,(TVector<double> *)&local_28._s_0);
  return;
}

// CalculateBrushRadius @ 14cce7db0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::CalculateBrushRadius(UMeshSculptToolBase *this)

{
  float fVar1;
  float fVar2;
  USculptBrushProperties *pUVar3;
  float fVar4;
  
  pUVar3 = (this->BrushProperties).field0_0x0.DebugPtr;
  if ((pUVar3->BrushSize).SizeType != Adaptive) {
    this->CurrentBrushRadius = (double)(pUVar3->BrushSize).WorldRadius;
    return;
  }
  fVar1 = (pUVar3->BrushSize).WorldSizeRange.Max;
  fVar2 = (pUVar3->BrushSize).WorldSizeRange.Min;
  if (fVar2 <= fVar1) {
    fVar4 = (pUVar3->BrushSize).AdaptiveSize;
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    this->CurrentBrushRadius = (double)(((fVar1 - fVar2) * fVar4 + fVar2) * __real_3f000000);
    return;
  }
  this->CurrentBrushRadius = (double)(__real_3f000000 * 0.0);
  return;
}

// CommitResult @ 14ccf0c40

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
UMeshSculptToolBase::CommitResult
          (UMeshSculptToolBase *this,UBaseDynamicMeshComponent *param_1,bool param_2)

{
  code *pcVar1;
  longlong lVar2;
  FText *pFVar3;
  undefined1 local_res18 [8];
  UMeshSculptToolBase *local_28;
  undefined1 *local_20;
  undefined1 local_18 [16];
  
  local_res18[0] = param_2;
  lVar2 = (**(code **)(this->_padding_ + 0x2d8))();
  pcVar1 = *(code **)(*(longlong *)(lVar2 + 0x28) + 0x10);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_18,L"UMeshSculptToolBase",L"SculptMeshToolTransactionName",
                      L"Sculpt Mesh");
  (*pcVar1)(lVar2 + 0x28,pFVar3);
  if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
  }
  local_20 = local_res18;
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshSculptToolBase::CommitResult'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
       ::Call;
  local_28 = this;
  (**(code **)(param_1->_padding_ + 0xb40))(param_1,local_18);
  lVar2 = (**(code **)(this->_padding_ + 0x2d8))(this);
  (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x18))(lVar2 + 0x28);
  return;
}

// ComputeStampRegionPlane @ 14ccf0df0

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
UMeshSculptToolBase::ComputeStampRegionPlane
          (UMeshSculptToolBase *this,TFrame3<double> *__return_storage_ptr__,
          TFrame3<double> *param_1,TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          bool param_4,bool param_5)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  FDynamicMesh3 *this_00;
  TVector<double> *pTVar12;
  FScriptContainerElement *pFVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 local_res18 [8];
  double local_res20;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TVector<double>_u_0 local_148;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  TVector<double> local_100 [8];
  
  this_00 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))();
  local_128 = (double)(**(code **)(this->_padding_ + 0x4a0))(this);
  dVar19 = __real_3fdffe5c91d14e3c;
  dVar11 = __real_3ff0000000000000;
  if (param_5) {
    local_128 = local_128 * __real_3fe0000000000000;
  }
  dVar2 = (param_1->Rotation).field0_0x0._s_0.X;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = dVar2;
  dVar9 = 0.0;
  dVar3 = (param_1->Rotation).field0_0x0._s_0.Y;
  dVar4 = (param_1->Rotation).field0_0x0._s_0.Z;
  dVar18 = (param_1->Rotation).field0_0x0._s_0.W;
  dVar4 = dVar4 + dVar4;
  pFVar13 = (param_2->AllocatorInstance).Data;
  iVar5 = param_2->ArrayNum;
  dVar15 = 0.0;
  dVar10 = 0.0;
  pFVar1 = pFVar13 + (longlong)iVar5 * 4;
  local_118 = dVar18 * (dVar3 + dVar3) + dVar4 * dVar2;
  local_120 = dVar4 * dVar3 - dVar18 * (dVar2 + dVar2);
  dVar4 = 0.0;
  local_110 = __real_3ff0000000000000 - ((dVar3 + dVar3) * dVar3 + (dVar2 + dVar2) * dVar2);
  local_res20 = 0.0;
  local_178._s_0.X = 0.0;
  local_178._s_0.Y = 0.0;
  dVar2 = 0.0;
  dVar3 = 0.0;
  dVar18 = local_128;
  do {
    while( true ) {
      if (param_2->ArrayNum != iVar5) {
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar13 == pFVar1) {
        dVar19 = SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar4 * dVar4);
        if (dVar19 <= 0.0) {
          local_178._s_0.X = 0.0;
          local_178._s_0.Y = 0.0;
          local_178._s_0.Z = 0.0;
        }
        else {
          dVar19 = dVar11 / dVar19;
          local_178._s_0.X = dVar3 * dVar19;
          local_178._s_0.Y = dVar2 * dVar19;
          local_178._s_0.Z = dVar4 * dVar19;
        }
        dVar19 = dVar11 / local_res20;
        if (param_4) {
          local_148._s_0.X = ___xmm_00000000000000003ff0000000000000;
          local_148._s_0.Y = _UNK_150689518;
          local_148._s_0.Z = 0.0;
          UE::Math::TQuat<double>::RotateVector
                    (&(this->CameraState).Orientation,(TVector<double> *)&local_160._s_0,
                     (TVector<double> *)&local_148._s_0);
          local_178._s_0.Z =
               (double)CONCAT44((uint)((ulonglong)local_160._16_8_ >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(local_160._s_0.Z,0) ^
                                (uint)__xmm_80000000000000008000000000000000);
          local_178._4_4_ = local_160._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
          local_178._0_4_ = local_160._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
          local_178._12_4_ = local_160._12_4_ ^ _UNK_15066df7c;
          local_178._8_4_ = local_160._8_4_ ^ _UNK_15066df78;
        }
        (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = 0.0;
        (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = 0.0;
        (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = 0.0;
        (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = 1.0;
        (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar19 * dVar9;
        (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar19 * dVar15;
        (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar19 * dVar10;
        local_160._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
        local_160._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
        local_160._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
        UE::Geometry::TQuaternion<double>::SetFromTo
                  (&__return_storage_ptr__->Rotation,(TVector<double> *)&local_160._s_0,
                   (TVector<double> *)&local_178._s_0);
        if (!param_3) {
          dVar19 = (__return_storage_ptr__->Rotation).field0_0x0._s_0.X;
          dVar2 = (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y;
          dVar3 = (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z;
          dVar4 = (__return_storage_ptr__->Rotation).field0_0x0._s_0.W;
          dVar3 = dVar3 + dVar3;
          pcVar7 = *(code **)(this->_padding_ + 0x4c8);
          dVar15 = (double)(**(code **)(this->_padding_ + 0x4a0))(this);
          dVar18 = (double)(*pcVar7)(this);
          dVar15 = dVar15 * dVar18;
          dVar18 = (__return_storage_ptr__->Origin).field0_0x0._s_0.X;
          (__return_storage_ptr__->Origin).field0_0x0._s_0.Y =
               (__return_storage_ptr__->Origin).field0_0x0._s_0.Y -
               (dVar3 * dVar2 - dVar4 * (dVar19 + dVar19)) * dVar15;
          dVar9 = (__return_storage_ptr__->Origin).field0_0x0._s_0.Z;
          (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
               dVar18 - (dVar3 * dVar19 + dVar4 * (dVar2 + dVar2)) * dVar15;
          (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
               dVar9 - (dVar11 - ((dVar19 + dVar19) * dVar19 + (dVar2 + dVar2) * dVar2)) * dVar15;
        }
        return __return_storage_ptr__;
      }
      iVar6 = *(int *)pFVar13;
      UE::Geometry::FDynamicMesh3::GetTriInfo
                (this_00,iVar6,(TVector<double> *)&local_160._s_0,&local_108,
                 (TVector<double> *)&local_148._s_0);
      if (__real_bfc999999999999a <=
          local_120 * local_160._s_0.Y + local_118 * local_160._s_0.X + local_110 * local_160._s_0.Z
         ) break;
      pFVar13 = pFVar13 + 4;
    }
    dVar17 = local_148._s_0.X - (param_1->Origin).field0_0x0._s_0.X;
    dVar14 = local_148._s_0.Y - (param_1->Origin).field0_0x0._s_0.Y;
    dVar16 = local_148._s_0.Z - (param_1->Origin).field0_0x0._s_0.Z;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = dVar17 * dVar17 + dVar14 * dVar14 + dVar16 * dVar16;
    auVar20 = sqrtpd(auVar20,auVar8);
    auVar20._0_8_ = auVar20._0_8_ * (dVar11 / dVar18);
    if (param_5) {
      dVar17 = __real_3fefff2e48e8a71e - auVar20._0_8_;
      dVar18 = local_108;
      if (0.0 <= dVar17) {
        if (dVar11 <= dVar17) {
          dVar17 = dVar11;
        }
        dVar17 = dVar17 * dVar17 * dVar17;
        if (dVar17 < 0.0) {
          dVar17 = 0.0;
          goto LAB_14ccf10af;
        }
      }
      else {
        dVar17 = 0.0;
      }
      if (dVar11 <= dVar17) {
        dVar17 = dVar11;
      }
LAB_14ccf10af:
      dVar18 = dVar18 * dVar17;
    }
    else {
      dVar18 = local_108;
      if (dVar19 < auVar20._0_8_) {
        dVar18 = ((auVar20._0_8_ - dVar19) + auVar20._0_8_) - dVar19;
        if (0.0 <= dVar18) {
          if (dVar11 <= dVar18) {
            dVar18 = dVar11;
          }
        }
        else {
          dVar18 = 0.0;
        }
        dVar18 = dVar11 - dVar18 * dVar18;
        dVar17 = dVar18 * dVar18;
        dVar18 = dVar18 * local_108;
        goto LAB_14ccf10af;
      }
    }
    pTVar12 = UE::Geometry::FDynamicMesh3::GetTriNormal(this_00,local_100,iVar6);
    local_res20 = local_res20 + dVar18;
    pFVar13 = pFVar13 + 4;
    dVar3 = dVar3 + dVar18 * (pTVar12->field0_0x0)._s_0.X;
    dVar2 = dVar2 + dVar18 * (pTVar12->field0_0x0)._s_0.Y;
    dVar4 = dVar4 + dVar18 * (pTVar12->field0_0x0)._s_0.Z;
    dVar9 = dVar9 + local_148._s_0.X * dVar18;
    dVar15 = dVar15 + local_148._s_0.Y * dVar18;
    dVar10 = dVar10 + local_148._s_0.Z * dVar18;
    dVar18 = local_128;
  } while( true );
}

// ComputeStampRegionPlane @ 14ccf13e0

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
UMeshSculptToolBase::ComputeStampRegionPlane
          (UMeshSculptToolBase *this,TFrame3<double> *__return_storage_ptr__,
          TFrame3<double> *param_1,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *param_2,
          bool param_3,bool param_4,bool param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  TFrame3<double> *pTVar4;
  
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Sculpting\\MeshSculptToolBase.cpp"
                     ,0x4c2,L"");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TFrame3<double> *)(*pcVar1)();
    return pTVar4;
  }
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = 1.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// ConfigureIndicator @ 14ccf1460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::ConfigureIndicator(UMeshSculptToolBase *this,bool param_1)

{
  UPreviewMesh *this_00;
  char cVar1;
  bool bVar2;
  
  if (this->bIsVolumetricIndicator != param_1) {
    this_00 = (this->BrushIndicatorMesh).field0_0x0.DebugPtr;
    this->bIsVolumetricIndicator = param_1;
    cVar1 = (**(code **)(this->_padding_ + 0x658))();
    if ((cVar1 == '\0') || (this->bIsVolumetricIndicator == false)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    UPreviewMesh::SetVisible(this_00,bVar2);
    ((this->BrushIndicator).field0_0x0.DebugPtr)->bDrawRadiusCircle = !param_1;
  }
  return;
}

// DecreaseBrushRadiusAction @ 14ccf5dd0

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

void __thiscall UMeshSculptToolBase::DecreaseBrushRadiusAction(UMeshSculptToolBase *this)

{
  float fVar1;
  USculptBrushProperties *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pUVar2 = (this->BrushProperties).field0_0x0.DebugPtr;
  if ((pUVar2->BrushSize).SizeType == Adaptive) {
    fVar3 = 0.0;
    fVar4 = (pUVar2->BrushSize).AdaptiveSize - __real_3ccccccd;
    if (__real_3f800000 <= fVar4) {
      fVar4 = __real_3f800000;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    (pUVar2->BrushSize).AdaptiveSize = fVar4;
  }
  else {
    fVar4 = (pUVar2->BrushSize).WorldSizeRange.Max;
    fVar1 = (pUVar2->BrushSize).WorldSizeRange.Min;
    fVar3 = (fVar4 - fVar1) * ___real_3c4ccccd;
    fVar5 = (pUVar2->BrushSize).WorldRadius - fVar3;
    if (fVar4 <= fVar5) {
      fVar5 = fVar4;
    }
    if (fVar5 <= fVar1) {
      fVar5 = fVar1;
    }
    (pUVar2->BrushSize).WorldRadius = fVar5;
  }
  (**(code **)(this->_padding_ + 0x340))(fVar3,(this->BrushProperties).field0_0x0.DebugPtr);
                    /* WARNING: Could not recover jumptable at 0x00014ccf5e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x490))(this);
  return;
}

// DecreaseBrushRadiusSmallStepAction @ 14ccf5f60

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

void __thiscall UMeshSculptToolBase::DecreaseBrushRadiusSmallStepAction(UMeshSculptToolBase *this)

{
  float fVar1;
  USculptBrushProperties *pUVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  pUVar2 = (this->BrushProperties).field0_0x0.DebugPtr;
  if ((pUVar2->BrushSize).SizeType == Adaptive) {
    fVar3 = 0.0;
    fVar4 = (pUVar2->BrushSize).AdaptiveSize - __real_3ba3d70a;
    if (__real_3f800000 <= fVar4) {
      fVar4 = __real_3f800000;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    (pUVar2->BrushSize).AdaptiveSize = fVar4;
  }
  else {
    fVar4 = (pUVar2->BrushSize).WorldSizeRange.Max;
    fVar1 = (pUVar2->BrushSize).WorldSizeRange.Min;
    fVar3 = (fVar4 - fVar1) * ___real_3b23d70a;
    fVar5 = (pUVar2->BrushSize).WorldRadius - fVar3;
    if (fVar4 <= fVar5) {
      fVar5 = fVar4;
    }
    if (fVar5 <= fVar1) {
      fVar5 = fVar1;
    }
    (pUVar2->BrushSize).WorldRadius = fVar5;
  }
  (**(code **)(this->_padding_ + 0x340))(fVar3,(this->BrushProperties).field0_0x0.DebugPtr);
                    /* WARNING: Could not recover jumptable at 0x00014ccf5ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x490))(this);
  return;
}

// DecreaseBrushSpeedAction @ 14ccf6010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::DecreaseBrushSpeedAction(UMeshSculptToolBase *this)

{
  return;
}

// FindHitSculptMeshTriangle @ 14ccfac40

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
UMeshSculptToolBase::FindHitSculptMeshTriangle(UMeshSculptToolBase *this,TRay<double> *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ccfac43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(this->_padding_ + 0x518))();
  return iVar1;
}

// FindHitSculptMeshTriangleConst @ 14ccfae70

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
UMeshSculptToolBase::FindHitSculptMeshTriangleConst(UMeshSculptToolBase *this,TRay<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshSculptToolBase.h"
                     ,0x1e9,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return -1;
}

// FindHitTargetMeshTriangle @ 14ccfb230

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
UMeshSculptToolBase::FindHitTargetMeshTriangle(UMeshSculptToolBase *this,TRay<double> *param_1)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014ccfb233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(this->_padding_ + 0x528))();
  return iVar1;
}

// FindHitTargetMeshTriangleConst @ 14ccfb280

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
UMeshSculptToolBase::FindHitTargetMeshTriangleConst(UMeshSculptToolBase *this,TRay<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshSculptToolBase.h"
                     ,0x1ed,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return -1;
}

// GetActiveBrushOp @ 14ccfc790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> * __thiscall
UMeshSculptToolBase::GetActiveBrushOp(UMeshSculptToolBase *this)

{
  char cVar1;
  TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> *pTVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x570))();
  pTVar2 = &this->PrimaryBrushOp;
  if (cVar1 != '\0') {
    pTVar2 = &this->SecondaryBrushOp;
  }
  return pTVar2;
}

// GetActiveBrushRadius @ 14ccfc810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __thiscall UMeshSculptToolBase::GetActiveBrushRadius(UMeshSculptToolBase *this)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  EBrushToolSizeType EVar4;
  USculptBrushProperties *pUVar5;
  longlong *plVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  
  plVar6 = (longlong *)this->_padding_;
  plVar1 = plVar6 + (int)this->_padding_;
  if (plVar6 != plVar1) {
    pUVar5 = (this->BrushProperties).field0_0x0.DebugPtr;
    do {
      if ((USculptBrushProperties *)*plVar6 == pUVar5) {
        if (((pUVar5->BrushSize).bToolSupportsPressureSensitivity != false) &&
           ((pUVar5->BrushSize).bEnablePressureSensitivity != false)) {
          EVar4 = (pUVar5->BrushSize).SizeType;
          if (EVar4 == Adaptive) {
            fVar2 = (pUVar5->BrushSize).AdaptiveSize;
            dVar7 = (double)(**(code **)(this->_padding_ + 0x4b0))(this);
            fVar9 = (pUVar5->BrushSize).WorldSizeRange.Max;
            fVar3 = (pUVar5->BrushSize).WorldSizeRange.Min;
            if (fVar3 <= fVar9) {
              return (double)((fVar9 - fVar3) * (float)(dVar7 * (double)fVar2) + fVar3) *
                     __real_3fe0000000000000;
            }
            return __real_3fe0000000000000 * 0.0;
          }
          if (EVar4 == World) {
            fVar2 = (pUVar5->BrushSize).WorldSizeRange.Min;
            dVar7 = (double)(**(code **)(this->_padding_ + 0x4b0))(this);
            pUVar5 = (this->BrushProperties).field0_0x0.DebugPtr;
            if ((pUVar5->BrushSize).SizeType == Adaptive) {
              fVar9 = (pUVar5->BrushSize).WorldSizeRange.Max;
              fVar3 = (pUVar5->BrushSize).WorldSizeRange.Min;
              if (fVar9 < fVar3) {
                fVar9 = __real_3f000000 * 0.0;
              }
              else {
                fVar8 = (pUVar5->BrushSize).AdaptiveSize;
                if (fVar8 <= 0.0) {
                  fVar8 = 0.0;
                }
                fVar9 = (fVar8 * (fVar9 - fVar3) + fVar3) * __real_3f000000;
              }
            }
            else {
              fVar9 = (pUVar5->BrushSize).WorldRadius;
            }
            return (double)(float)((double)(fVar9 - fVar2) * dVar7 + (double)fVar2);
          }
        }
        break;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  return this->CurrentBrushRadius;
}

// GetActiveBrushStrength @ 14ccfc9b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __thiscall UMeshSculptToolBase::GetActiveBrushStrength(UMeshSculptToolBase *this)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  UObject *pUVar4;
  double dVar5;
  double dVar6;
  
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x478))();
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*plVar3 + 8));
  if (bVar1) {
    dVar5 = (double)(**(code **)(this->_padding_ + 0x4c0))(this);
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x478))(this);
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*plVar3 + 8));
    if (bVar1) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar3 + 8));
      cVar2 = (**(code **)(*(longlong *)pUVar4 + 0x2f0))(pUVar4);
      if (cVar2 != '\0') {
        dVar6 = (double)(**(code **)(this->_padding_ + 0x4b0))(this);
        dVar5 = dVar5 * dVar6;
      }
    }
    dVar6 = 0.0;
    if ((0.0 <= dVar5) && (dVar6 = dVar5, __real_3ff0000000000000 <= dVar5)) {
      dVar6 = __real_3ff0000000000000;
    }
    return dVar6;
  }
  return __real_3ff0000000000000;
}

// GetActivePressure @ 14ccfcab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __thiscall UMeshSculptToolBase::GetActivePressure(UMeshSculptToolBase *this)

{
  return this->ActivePressure;
}

// GetBaseMesh @ 14ccfdd40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDynamicMesh3 * __thiscall UMeshSculptToolBase::GetBaseMesh(UMeshSculptToolBase *this)

{
  code *pcVar1;
  bool bVar2;
  FDynamicMesh3 *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshSculptToolBase.h"
                     ,0x143,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDynamicMesh3 *)(*pcVar1)();
    return pFVar3;
  }
  return (FDynamicMesh3 *)0x0;
}

// GetBaseMesh @ 14ccfdd80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDynamicMesh3 * __thiscall UMeshSculptToolBase::GetBaseMesh(UMeshSculptToolBase *this)

{
  code *pcVar1;
  bool bVar2;
  FDynamicMesh3 *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshSculptToolBase.h"
                     ,0x144,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDynamicMesh3 *)(*pcVar1)();
    return pFVar3;
  }
  return (FDynamicMesh3 *)0x0;
}

// GetBrushSizePressureSensitivityEnabled @ 14ccfe070

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
UMeshSculptToolBase::GetBrushSizePressureSensitivityEnabled(UMeshSculptToolBase *this)

{
  longlong *plVar1;
  USculptBrushProperties *pUVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)this->_padding_;
  plVar1 = plVar3 + (int)this->_padding_;
  if (plVar3 != plVar1) {
    pUVar2 = (this->BrushProperties).field0_0x0.DebugPtr;
    do {
      if ((USculptBrushProperties *)*plVar3 == pUVar2) {
        if ((pUVar2->BrushSize).bToolSupportsPressureSensitivity == false) {
          return false;
        }
        return (pUVar2->BrushSize).bEnablePressureSensitivity;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
  }
  return false;
}

// GetBrushStrengthPressureEnabled @ 14ccfe0c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMeshSculptToolBase::GetBrushStrengthPressureEnabled(UMeshSculptToolBase *this)

{
  bool bVar1;
  undefined1 uVar2;
  longlong *plVar3;
  UObject *pUVar4;
  
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x478))();
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*plVar3 + 8));
  if (bVar1) {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar3 + 8));
                    /* WARNING: Could not recover jumptable at 0x00014ccfe100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(longlong *)pUVar4 + 0x2f0))
                      (pUVar4,*(code **)(*(longlong *)pUVar4 + 0x2f0));
    return (bool)uVar2;
  }
  return false;
}

// GetCurrentBrushDepth @ 14ccfe2d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __thiscall UMeshSculptToolBase::GetCurrentBrushDepth(UMeshSculptToolBase *this)

{
  bool bVar1;
  longlong *plVar2;
  UObject *pUVar3;
  float fVar4;
  double dVar5;
  
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x478))();
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*plVar2 + 8));
  if (!bVar1) {
    return 0.0;
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar2 + 8));
  fVar4 = (float)(**(code **)(*(longlong *)pUVar3 + 0x2d0))(pUVar3);
  if (fVar4 < __real_bf800000) {
    return __real_bff0000000000000;
  }
  dVar5 = (double)fVar4;
  if (__real_3ff0000000000000 <= (double)fVar4) {
    dVar5 = __real_3ff0000000000000;
  }
  return dVar5;
}

// GetCurrentBrushFalloff @ 14ccfe350

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __thiscall UMeshSculptToolBase::GetCurrentBrushFalloff(UMeshSculptToolBase *this)

{
  return this->CurrentBrushFalloff;
}

// GetCurrentBrushRadius @ 14ccfe360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __thiscall UMeshSculptToolBase::GetCurrentBrushRadius(UMeshSculptToolBase *this)

{
  return this->CurrentBrushRadius;
}

// GetCurrentBrushStrength @ 14ccfe370

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

double __thiscall UMeshSculptToolBase::GetCurrentBrushStrength(UMeshSculptToolBase *this)

{
  bool bVar1;
  longlong *plVar2;
  UObject *pUVar3;
  float fVar4;
  double dVar5;
  
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x478))();
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*plVar2 + 8));
  if (!bVar1) {
    return __real_3ff0000000000000;
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar2 + 8));
  fVar4 = (float)(**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
  if (fVar4 < 0.0) {
    return 0.0;
  }
  dVar5 = (double)fVar4;
  if (__real_3ff0000000000000 <= (double)fVar4) {
    dVar5 = __real_3ff0000000000000;
  }
  return dVar5;
}

// GetCurrentStrokeReferencePlane @ 14ccfe3f0

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
UMeshSculptToolBase::GetCurrentStrokeReferencePlane(UMeshSculptToolBase *this)

{
  return &this->StrokePlane;
}

// GetInInvertStroke @ 14ccfe440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMeshSculptToolBase::GetInInvertStroke(UMeshSculptToolBase *this)

{
  return this->bInvert;
}

// GetInSmoothingStroke @ 14ccfe450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMeshSculptToolBase::GetInSmoothingStroke(UMeshSculptToolBase *this)

{
  return this->bSmoothing;
}

// GetIndicatorVisibility @ 14ccfe460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMeshSculptToolBase::GetIndicatorVisibility(UMeshSculptToolBase *this)

{
  return ((this->BrushIndicator).field0_0x0.DebugPtr)->bVisible;
}

// GetIsVolumetricIndicator @ 14ccfe480

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMeshSculptToolBase::GetIsVolumetricIndicator(UMeshSculptToolBase *this)

{
  return this->bIsVolumetricIndicator;
}

// GetLocalRay @ 14ccfe5e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TRay<double> * __thiscall
UMeshSculptToolBase::GetLocalRay
          (UMeshSculptToolBase *this,TRay<double> *__return_storage_ptr__,TRay<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TVector<double> *pTVar8;
  uint uVar9;
  uint uVar10;
  TVector<double>_u_0 local_78;
  TVector<double> local_60 [3];
  
  local_78._s_0.X = (param_1->Direction).field0_0x0._s_0.X;
  local_78._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
  local_78._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z;
  dVar1 = *(double *)&(this->CurTargetTransform).Scale3D.field0_0x0;
  uVar9 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar10 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar10,uVar9) &&
      (double)CONCAT44(uVar10,uVar9) != __real_3e45798ee2308c3a) {
    dVar1 = __real_3ff0000000000000 / dVar1;
  }
  else {
    dVar1 = 0.0;
  }
  dVar2 = *(double *)((longlong)&(this->CurTargetTransform).Scale3D.field0_0x0 + 8);
  uVar9 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar10 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar10,uVar9) &&
      (double)CONCAT44(uVar10,uVar9) != __real_3e45798ee2308c3a) {
    dVar2 = __real_3ff0000000000000 / dVar2;
  }
  else {
    dVar2 = 0.0;
  }
  dVar3 = *(double *)((longlong)&(this->CurTargetTransform).Scale3D.field0_0x0 + 0x10);
  uVar9 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar10 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar10,uVar9) &&
      (double)CONCAT44(uVar10,uVar9) != __real_3e45798ee2308c3a) {
    dVar3 = __real_3ff0000000000000 / dVar3;
  }
  else {
    dVar3 = 0.0;
  }
  pTVar8 = UE::Geometry::TQuaternion<double>::InverseMultiply
                     (&(this->CurTargetTransform).Rotation,local_60,
                      (TVector<double> *)&local_78._s_0);
  local_78._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_78._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  local_78._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  dVar4 = (pTVar8->field0_0x0)._s_0.X;
  dVar5 = (pTVar8->field0_0x0)._s_0.Y;
  dVar6 = (pTVar8->field0_0x0)._s_0.Z;
  pTVar8 = UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
                     (&this->CurTargetTransform,local_60,(TVector<double> *)&local_78._s_0);
  dVar7 = (pTVar8->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (pTVar8->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar7;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.X = dVar1 * dVar4;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.Y = dVar2 * dVar5;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.Z = dVar3 * dVar6;
  UE::Math::TVector<double>::Normalize(&__return_storage_ptr__->Direction,__real_3e45798ee0000000);
  UE::Geometry::Normalize<double>(&__return_storage_ptr__->Direction,0.0);
  return __return_storage_ptr__;
}

// GetPendingStampRayWorld @ 14ccfedd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TRay<double> * __thiscall UMeshSculptToolBase::GetPendingStampRayWorld(UMeshSculptToolBase *this)

{
  return &this->PendingStampRay;
}

// GetPrivateStaticClass @ 14cd001f0

UClass * __cdecl UMeshSculptToolBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshSculptToolBase.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"MeshSculptToolBase",
               &Z_Registration_Info_UClass_UMeshSculptToolBase.InnerSingleton,
               StaticRegisterNativesUMeshSculptToolBase,0xc80,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshSculptToolBase>,
               InternalVTableHelperCtorCaller<UMeshSculptToolBase>,local_res8,
               UMeshSurfacePointTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshSculptToolBase.InnerSingleton;
}

// GetSculptMesh @ 14cd022f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDynamicMesh3 * __thiscall UMeshSculptToolBase::GetSculptMesh(UMeshSculptToolBase *this)

{
  longlong *plVar1;
  FDynamicMesh3 *pFVar2;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x430))();
                    /* WARNING: Could not recover jumptable at 0x00014cd0230e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FDynamicMesh3 *)(**(code **)(*plVar1 + 0xb38))(plVar1,*(code **)(*plVar1 + 0xb38));
  return pFVar2;
}

// GetSculptMesh @ 14cd02320

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FDynamicMesh3 * __thiscall UMeshSculptToolBase::GetSculptMesh(UMeshSculptToolBase *this)

{
  longlong *plVar1;
  FDynamicMesh3 *pFVar2;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x430))();
                    /* WARNING: Could not recover jumptable at 0x00014cd0233e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar2 = (FDynamicMesh3 *)(**(code **)(*plVar1 + 0xb38))(plVar1,*(code **)(*plVar1 + 0xb38));
  return pFVar2;
}

// GetSculptMeshComponent @ 14cd02360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UBaseDynamicMeshComponent * __thiscall
UMeshSculptToolBase::GetSculptMeshComponent(UMeshSculptToolBase *this)

{
  code *pcVar1;
  bool bVar2;
  UBaseDynamicMeshComponent *pUVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshSculptToolBase.h"
                     ,0x13e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UBaseDynamicMeshComponent *)(*pcVar1)();
    return pUVar3;
  }
  return (UBaseDynamicMeshComponent *)0x0;
}

// GetStampTemporalFlowRate @ 14cd02470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

float __thiscall UMeshSculptToolBase::GetStampTemporalFlowRate(UMeshSculptToolBase *this)

{
  return ((this->BrushProperties).field0_0x0.DebugPtr)->FlowRate;
}

// GetWorldSpaceFocusBox @ 14cd02f20

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
UMeshSculptToolBase::GetWorldSpaceFocusBox
          (UMeshSculptToolBase *this,TBox<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (*(int *)&this->bBrushOpPropsVisible == -1) {
    USingleSelectionTool::GetWorldSpaceFocusBox((USingleSelectionTool *)this,__return_storage_ptr__)
    ;
    return __return_storage_ptr__;
  }
  dVar1 = *(double *)&(this->SecondaryBrushOpFactories).field_0x10;
  dVar2 = *(double *)&this->SecondaryBrushOpFactories;
  dVar3 = *(double *)&(this->SecondaryBrushOpFactories).field_0x8;
  dVar4 = (double)(**(code **)(*(longlong *)&this[-1].GizmoPositionWatcher.OnValueChangedFunc +
                              0x4a0))(&this[-1].GizmoPositionWatcher.OnValueChangedFunc);
  (__return_storage_ptr__->Min).field0_0x0._s_0.X = dVar2 - dVar4;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y = dVar3 - dVar4;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar1 - dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.X = dVar2 + dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y = dVar3 + dVar4;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar1 + dVar4;
  __return_storage_ptr__->IsValid = '\x01';
  return __return_storage_ptr__;
}

// HitTest @ 14cd03900

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
UMeshSculptToolBase::HitTest(UMeshSculptToolBase *this,TRay<double> *param_1,FHitResult *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  int iVar5;
  FDynamicMesh3 *this_00;
  TVector<double> *pTVar6;
  undefined1 auStackY_1c8 [32];
  TVector<double>_u_0 local_198;
  double dStack_180;
  double local_178;
  double dStack_170;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 TStack_130;
  TVector<double>_u_0 local_118;
  TVector<double> local_f8;
  TVector<double>_u_0 local_d8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  TVector<double>_u_0 local_a8;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  TVector<double> local_58;
  EIntersectionType local_40 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  GetLocalRay(this,(TRay<double> *)&local_198._s_0,param_1);
  iVar5 = (**(code **)(this->_padding_ + 0x510))(this,&local_198);
  if (iVar5 != -1) {
    this_00 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))(this);
    UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (this_00,iVar5,(TVector<double> *)&local_148._s_0,(TVector<double> *)&TStack_130._s_0,
               (TVector<double> *)&local_118._s_0);
    local_d8._s_0.X = local_198._s_0.X;
    local_d8._s_0.Y = local_198._s_0.Y;
    local_d8._s_0.Z = local_198._s_0.Z;
    dStack_c0 = dStack_180;
    local_b8 = local_178;
    dStack_b0 = dStack_170;
    local_a8._s_0.X = local_148._s_0.X;
    local_a8._s_0.Y = local_148._s_0.Y;
    local_a8._s_0.Z = local_148._s_0.Z;
    dStack_90 = TStack_130._s_0.X;
    local_88 = TStack_130._s_0.Y;
    dStack_80 = TStack_130._s_0.Z;
    local_78 = local_118._s_0.X;
    dStack_70 = local_118._s_0.Y;
    local_68 = local_118._s_0.Z;
    UE::Geometry::TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
              ((TRay<double> *)&local_d8._s_0,(TTriangle3<double> *)&local_a8._s_0,&local_60,
               &local_58,local_40);
    param_2->FaceIndex = iVar5;
    param_2->Distance = (float)local_60;
    pTVar6 = UE::Geometry::FDynamicMesh3::GetTriNormal
                       (this_00,(TVector<double> *)&local_168._s_0,iVar5);
    pTVar6 = UE::Geometry::TTransformSRT3<double>::TransformNormal<double>
                       (&this->CurTargetTransform,&local_f8,pTVar6);
    dVar3 = (pTVar6->field0_0x0)._s_0.Y;
    dVar1 = (pTVar6->field0_0x0)._s_0.Z;
    *(double *)&param_2->Normal = (pTVar6->field0_0x0)._s_0.X;
    *(double *)&(param_2->Normal).field_0x8 = dVar3;
    *(double *)&(param_2->Normal).field_0x10 = dVar1;
    local_168._s_0.X =
         (dStack_180 * local_60 + local_198._s_0.X) *
         (this->CurTargetTransform).Scale3D.field0_0x0._s_0.X;
    local_168._s_0.Y =
         (local_178 * local_60 + local_198._s_0.Y) *
         (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Y;
    local_168._s_0.Z =
         (dStack_170 * local_60 + local_198._s_0.Z) *
         (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Z;
    pTVar6 = UE::Geometry::operator*<double>
                       (&local_f8,&(this->CurTargetTransform).Rotation,
                        (TVector<double> *)&local_168._s_0);
    dVar3 = (this->CurTargetTransform).Translation.field0_0x0._s_0.Y;
    dVar4 = (pTVar6->field0_0x0)._s_0.Y;
    dVar1 = (this->CurTargetTransform).Translation.field0_0x0._s_0.Z + (pTVar6->field0_0x0)._s_0.Z;
    *(double *)&param_2->ImpactPoint =
         (this->CurTargetTransform).Translation.field0_0x0._s_0.X + (pTVar6->field0_0x0)._s_0.X;
    auVar2._8_4_ = SUB84(dVar1,0);
    auVar2._0_8_ = dVar3 + dVar4;
    auVar2._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])&(param_2->ImpactPoint).field_0x8 = auVar2;
  }
  return iVar5 != -1;
}

// InStroke @ 14cd03b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMeshSculptToolBase::InStroke(UMeshSculptToolBase *this)

{
  return this->bInStroke;
}

// IncreaseBrushRadiusAction @ 14cd03c40

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

void __thiscall UMeshSculptToolBase::IncreaseBrushRadiusAction(UMeshSculptToolBase *this)

{
  USculptBrushProperties *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  pUVar1 = (this->BrushProperties).field0_0x0.DebugPtr;
  if ((pUVar1->BrushSize).SizeType == Adaptive) {
    fVar2 = 0.0;
    fVar3 = (pUVar1->BrushSize).AdaptiveSize + __real_3ccccccd;
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    (pUVar1->BrushSize).AdaptiveSize = fVar3;
  }
  else {
    fVar2 = (pUVar1->BrushSize).WorldSizeRange.Max;
    fVar3 = (pUVar1->BrushSize).WorldSizeRange.Min;
    fVar4 = (fVar2 - fVar3) * ___real_3c4ccccd + (pUVar1->BrushSize).WorldRadius;
    if (fVar2 <= fVar4) {
      fVar4 = fVar2;
    }
    if (fVar4 <= fVar3) {
      fVar4 = fVar3;
    }
    (pUVar1->BrushSize).WorldRadius = fVar4;
  }
  (**(code **)(this->_padding_ + 0x340))(fVar2,(this->BrushProperties).field0_0x0.DebugPtr);
                    /* WARNING: Could not recover jumptable at 0x00014cd03cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x490))(this);
  return;
}

// IncreaseBrushRadiusSmallStepAction @ 14cd03dc0

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

void __thiscall UMeshSculptToolBase::IncreaseBrushRadiusSmallStepAction(UMeshSculptToolBase *this)

{
  USculptBrushProperties *pUVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  pUVar1 = (this->BrushProperties).field0_0x0.DebugPtr;
  if ((pUVar1->BrushSize).SizeType == Adaptive) {
    fVar2 = 0.0;
    fVar3 = (pUVar1->BrushSize).AdaptiveSize + __real_3ba3d70a;
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    (pUVar1->BrushSize).AdaptiveSize = fVar3;
  }
  else {
    fVar2 = (pUVar1->BrushSize).WorldSizeRange.Max;
    fVar3 = (pUVar1->BrushSize).WorldSizeRange.Min;
    fVar4 = (fVar2 - fVar3) * ___real_3b23d70a + (pUVar1->BrushSize).WorldRadius;
    if (fVar2 <= fVar4) {
      fVar4 = fVar2;
    }
    if (fVar4 <= fVar3) {
      fVar4 = fVar3;
    }
    (pUVar1->BrushSize).WorldRadius = fVar4;
  }
  (**(code **)(this->_padding_ + 0x340))(fVar2,(this->BrushProperties).field0_0x0.DebugPtr);
                    /* WARNING: Could not recover jumptable at 0x00014cd03e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x490))(this);
  return;
}

// IncreaseBrushSpeedAction @ 14cd03e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::IncreaseBrushSpeedAction(UMeshSculptToolBase *this)

{
  return;
}

// InitializeBrushSizeRange @ 14cd05320

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
UMeshSculptToolBase::InitializeBrushSizeRange
          (UMeshSculptToolBase *this,TAxisAlignedBox3<double> *param_1)

{
  float fVar1;
  USculptBrushProperties *pUVar2;
  float fVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = (param_1->Max).field0_0x0._s_0.Z - (param_1->Min).field0_0x0._s_0.Z;
  dVar4 = (param_1->Max).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y;
  dVar6 = (param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X;
  if (dVar7 <= 0.0) {
    dVar7 = 0.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  if (dVar6 <= 0.0) {
    dVar6 = 0.0;
  }
  if (dVar7 <= dVar4) {
    dVar7 = dVar4;
  }
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  (this->BrushRelativeSizeRange).Min = dVar7 * __real_3f847ae147ae147b;
  (this->BrushRelativeSizeRange).Max = dVar7;
  pUVar2 = (this->BrushProperties).field0_0x0.DebugPtr;
  fVar5 = (float)(this->BrushRelativeSizeRange).Min;
  fVar1 = (pUVar2->BrushSize).WorldRadius;
  fVar3 = (float)dVar7;
  (pUVar2->BrushSize).WorldSizeRange.Min = fVar5;
  (pUVar2->BrushSize).WorldSizeRange.Max = fVar3;
  if (fVar5 <= fVar1) {
    if (fVar1 <= fVar3) goto LAB_14cd053e5;
    if (fVar3 < fVar5) goto LAB_14cd053da;
    fVar5 = (fVar3 - fVar5) * __real_3f4ccccd + fVar5;
  }
  else if (fVar3 < fVar5) {
LAB_14cd053da:
    fVar5 = 0.0;
  }
  else {
    fVar5 = (fVar3 - fVar5) * __real_3e4ccccd + fVar5;
  }
  (pUVar2->BrushSize).WorldRadius = fVar5;
LAB_14cd053e5:
                    /* WARNING: Could not recover jumptable at 0x00014cd053e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x490))();
  return;
}

// InitializeIndicator @ 14cd05b70

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

void __thiscall UMeshSculptToolBase::InitializeIndicator(UMeshSculptToolBase *this)

{
  int iVar1;
  code *pcVar2;
  UDynamicMeshComponent *pUVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UInteractiveToolManager *pUVar6;
  UInteractiveGizmoManager *pUVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  UBrushStampIndicator *pUVar10;
  UPreviewMesh *pUVar11;
  FString *pFVar12;
  longlong *plVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  undefined1 auStack_e8 [32];
  void *local_c8;
  undefined8 local_c0;
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pUVar6 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
  pUVar7 = UInteractiveToolManager::GetPairedGizmoManager(pUVar6);
  pcVar2 = *(code **)(pUVar7->_padding_ + 0x2c0);
  pUVar8 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar8,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar9 = Z_Construct_UClass_UBrushStampIndicatorBuilder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar9);
  local_98._8_8_ = pUVar8;
  pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar13 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar13 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  (*pcVar2)(pUVar7,&VertexSculptIndicatorGizmoType,pUVar8);
  pUVar6 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar7 = UInteractiveToolManager::GetPairedGizmoManager(pUVar6);
  local_c8 = (void *)0x0;
  local_c0 = 0;
  pUVar10 = (UBrushStampIndicator *)
            (**(code **)(pUVar7->_padding_ + 0x2d0))
                      (pUVar7,&VertexSculptIndicatorGizmoType,&local_c8,this);
  if (pUVar10 != (UBrushStampIndicator *)0x0) {
    pUVar9 = Z_Construct_UClass_UBrushStampIndicator_NoRegister();
    iVar1 = (int)pUVar9->_padding_;
    if ((iVar1 <= *(int *)(pUVar10->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar10->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar9->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar10);
      }
      (this->BrushIndicator).field0_0x0.DebugPtr = pUVar10;
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      pUVar11 = (UPreviewMesh *)(**(code **)(this->_padding_ + 0x638))(this,this,this->TargetWorld);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UPreviewMesh *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar11);
      }
      (this->BrushIndicatorMesh).field0_0x0.DebugPtr = pUVar11;
      pUVar3 = (pUVar11->DynamicMeshComponent).field0_0x0.DebugPtr;
      pUVar10 = (this->BrushIndicator).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UDynamicMeshComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      uVar5 = _UNK_152953678;
      uVar4 = ___xmm_3f8000003ecccccd3ecccccd3f666666;
      (pUVar10->AttachedComponent).field0_0x0.DebugPtr = (UPrimitiveComponent *)pUVar3;
      ((this->BrushIndicator).field0_0x0.DebugPtr)->LineThickness = 1.0;
      ((this->BrushIndicator).field0_0x0.DebugPtr)->bDrawIndicatorLines = true;
      ((this->BrushIndicator).field0_0x0.DebugPtr)->bDrawRadiusCircle = false;
      pUVar10 = (this->BrushIndicator).field0_0x0.DebugPtr;
      *(undefined8 *)&(pUVar10->LineColor).field0_0x0 = uVar4;
      *(undefined8 *)((longlong)&(pUVar10->LineColor).field0_0x0 + 8) = uVar5;
      this->bIsVolumetricIndicator = true;
      return;
    }
    pFVar12 = GetTypeName<UBrushStampIndicator>(&local_b8);
    pwVar14 = L"";
    if ((pFVar12->Data).ArrayNum == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
    pFVar12 = GetFullNameForCastLogError<UInteractiveGizmo>(&local_a8,(UInteractiveGizmo *)pUVar10);
    if ((pFVar12->Data).ArrayNum != 0) {
      pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar14,pwVar15);
  }
  pFVar12 = GetTypeName<UBrushStampIndicator>(&local_b8);
  if ((pFVar12->Data).ArrayNum == 0) {
    pwVar14 = L"";
  }
  else {
    pwVar14 = (wchar_t *)(pFVar12->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar14);
}

// InitializeSculptMeshComponent @ 14cd06db0

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
UMeshSculptToolBase::InitializeSculptMeshComponent
          (UMeshSculptToolBase *this,UBaseDynamicMeshComponent *param_1,AActor *param_2)

{
  double dVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar19;
  uint uVar20;
  undefined8 uVar21;
  FDynamicMesh3 *pFVar22;
  TTransform<double> *pTVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_3d8 [32];
  TAxisAlignedBox3<double> local_3a0;
  FDynamicMesh3 local_368;
  TTransform<double> local_138;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_3d8;
  ToolSetupUtil::ApplyRenderingConfigurationToPreview(param_1,(UToolTarget *)0x0);
  (**(code **)(param_1->_padding_ + 0xbd0))(param_1,0);
  USceneComponent::SetupAttachment
            ((USceneComponent *)param_1,(param_2->RootComponent).field0_0x0.DebugPtr,(FName)0x0);
  UActorComponent::RegisterComponent((UActorComponent *)param_1);
  GetMeshParams.bWantMeshTangents = true;
  pcVar2 = *(code **)(param_1->_padding_ + 0xb28);
  pFVar22 = UE::ToolTarget::GetDynamicMeshCopy
                      (&local_368,(UToolTarget *)this->_padding_,&GetMeshParams);
  (*pcVar2)(param_1,pFVar22);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_368);
  pFVar22 = (FDynamicMesh3 *)(**(code **)(param_1->_padding_ + 0xb38))(param_1);
  UE::Geometry::FDynamicMesh3::GetBounds(pFVar22,&local_3a0,true);
  pTVar23 = UE::ToolTarget::GetLocalToWorldTransform(&local_d8,(UToolTarget *)this->_padding_);
  dVar10 = (pTVar23->Rotation).XY.m128d_f64[1];
  dVar11 = (pTVar23->Rotation).ZW.m128d_f64[0];
  dVar12 = (pTVar23->Rotation).ZW.m128d_f64[1];
  dVar1 = (pTVar23->Translation).ZW.m128d_f64[0];
  dVar13 = (pTVar23->Translation).XY.m128d_f64[0];
  dVar14 = (pTVar23->Translation).XY.m128d_f64[1];
  dVar15 = (pTVar23->Scale3D).XY.m128d_f64[0];
  dVar16 = (pTVar23->Scale3D).XY.m128d_f64[1];
  dVar9 = (pTVar23->Scale3D).ZW.m128d_f64[0];
  (this->InitialTargetTransform).Rotation.field0_0x0._s_0.X = (pTVar23->Rotation).XY.m128d_f64[0];
  (this->InitialTargetTransform).Rotation.field0_0x0._s_0.Y = dVar10;
  uVar20 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  (this->InitialTargetTransform).Rotation.field0_0x0._s_0.Z = dVar11;
  (this->InitialTargetTransform).Rotation.field0_0x0._s_0.W = dVar12;
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.X = dVar13;
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.Y = dVar14;
  uVar28 = (undefined4)__real_bf847ae147ae147b;
  uVar29 = (undefined4)((ulonglong)__real_bf847ae147ae147b >> 0x20);
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.Z = dVar1;
  (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.X = dVar15;
  (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.Y = dVar16;
  (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.Z = dVar9;
  dVar9 = __real_3f847ae147ae147b;
  dVar1 = *(double *)&(this->InitialTargetTransform).Scale3D.field0_0x0;
  uVar26 = SUB84(__real_3f847ae147ae147b,0);
  uVar27 = (undefined4)((ulonglong)__real_3f847ae147ae147b >> 0x20);
  if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar20,SUB84(dVar1,0) & uVar19) <
      __real_3f847ae147ae147b) {
    uVar24 = uVar26;
    uVar25 = uVar27;
    if (dVar1 < 0.0) {
      uVar24 = uVar28;
      uVar25 = uVar29;
    }
    (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.X = (double)CONCAT44(uVar25,uVar24);
  }
  dVar1 = *(double *)((longlong)&(this->InitialTargetTransform).Scale3D.field0_0x0 + 8);
  if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar20,SUB84(dVar1,0) & uVar19) < dVar9) {
    uVar24 = uVar26;
    uVar25 = uVar27;
    if (dVar1 < 0.0) {
      uVar24 = uVar28;
      uVar25 = uVar29;
    }
    (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.Y = (double)CONCAT44(uVar25,uVar24);
  }
  dVar1 = *(double *)((longlong)&(this->InitialTargetTransform).Scale3D.field0_0x0 + 0x10);
  if ((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) & uVar20,SUB84(dVar1,0) & uVar19) < dVar9) {
    if (0.0 <= dVar1) {
      uVar28 = uVar26;
      uVar29 = uVar27;
    }
    (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.Z = (double)CONCAT44(uVar29,uVar28);
  }
  uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar9 = (this->InitialTargetTransform).Translation.field0_0x0._s_0.X;
  dVar10 = (this->InitialTargetTransform).Translation.field0_0x0._s_0.Y;
  dVar1 = (this->InitialTargetTransform).Translation.field0_0x0._s_0.Z;
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.Y = (double)uVar21;
  local_138.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->InitialTargetTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_138.Translation.XY.m128d_f64[0] =
       (this->InitialTargetTransform).Translation.field0_0x0._s_0.X;
  local_138.Translation.XY.m128d_f64[1] =
       (this->InitialTargetTransform).Translation.field0_0x0._s_0.Y;
  local_138.Rotation.ZW.m128d_f64[1]._4_4_ =
       (undefined4)
       ((ulonglong)
        *(undefined8 *)((longlong)&(this->InitialTargetTransform).Rotation.field0_0x0 + 0x18) >>
       0x20);
  local_138.Scale3D.XY.m128d_f64[1] = (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.Y;
  local_138.Rotation.XY.m128d_f64[0] = (this->InitialTargetTransform).Rotation.field0_0x0._s_0.X;
  local_138.Rotation.XY.m128d_f64[1] = (this->InitialTargetTransform).Rotation.field0_0x0._s_0.Y;
  local_3a0.Min.field0_0x0._s_0.Z = (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.Z;
  local_138.Rotation.ZW.m128d_f64[0]._0_4_ =
       *(undefined4 *)((longlong)&(this->InitialTargetTransform).Rotation.field0_0x0 + 0x10);
  local_138.Rotation.ZW.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)&(this->InitialTargetTransform).Rotation.field0_0x0 + 0x14);
  local_138.Rotation.ZW.m128d_f64[1]._0_4_ =
       *(undefined4 *)((longlong)&(this->InitialTargetTransform).Rotation.field0_0x0 + 0x18);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.X;
  local_138._56_16_ = auVar18 << 0x40;
  local_138.Scale3D.ZW.m128d_f64[1] = 0.0;
  local_138.Scale3D.ZW.m128d_f64[0] = local_3a0.Min.field0_0x0._s_0.Z;
  (**(code **)(param_1->_padding_ + 0xb58))(param_1,&local_138);
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar5 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_3a0.Min.field0_0x0._s_0.Z = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  auVar6._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar6._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar6._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])&(this->CurTargetTransform).Rotation.field0_0x0 = auVar6;
  auVar7._8_4_ = SUB84((double)fVar5,0);
  auVar7._0_8_ = (double)fVar4;
  auVar7._12_4_ = (int)((ulonglong)(double)fVar5 >> 0x20);
  *(undefined1 (*) [16])((longlong)&(this->CurTargetTransform).Rotation.field0_0x0 + 0x10) = auVar7;
  local_138.Scale3D.XY.m128d_f64[0] = auVar8._8_8_;
  (this->CurTargetTransform).Translation.field0_0x0._s_0.X = dVar9;
  (this->CurTargetTransform).Translation.field0_0x0._s_0.Y = dVar10;
  (this->CurTargetTransform).Translation.field0_0x0._s_0.Z = dVar1;
  (this->CurTargetTransform).Scale3D.field0_0x0._s_0.X = (double)fVar3;
  (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Y = local_138.Scale3D.XY.m128d_f64[0];
  (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Z = local_3a0.Min.field0_0x0._s_0.Z;
  local_138.Scale3D.XY.m128d_f64[1] = (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Y;
  local_138.Translation.XY.m128d_f64[0] = (this->CurTargetTransform).Translation.field0_0x0._s_0.X;
  local_138.Translation.XY.m128d_f64[1] = (this->CurTargetTransform).Translation.field0_0x0._s_0.Y;
  local_138.Rotation.ZW.m128d_f64[1]._4_4_ =
       (undefined4)
       ((ulonglong)*(undefined8 *)((longlong)&(this->CurTargetTransform).Rotation.field0_0x0 + 0x18)
       >> 0x20);
  local_138.Rotation.XY.m128d_f64[0] = (this->CurTargetTransform).Rotation.field0_0x0._s_0.X;
  local_138.Rotation.XY.m128d_f64[1] = (this->CurTargetTransform).Rotation.field0_0x0._s_0.Y;
  local_138.Rotation.ZW.m128d_f64[0]._0_4_ =
       *(undefined4 *)((longlong)&(this->CurTargetTransform).Rotation.field0_0x0 + 0x10);
  local_138.Rotation.ZW.m128d_f64[0]._4_4_ =
       *(undefined4 *)((longlong)&(this->CurTargetTransform).Rotation.field0_0x0 + 0x14);
  local_138.Rotation.ZW.m128d_f64[1]._0_4_ =
       *(undefined4 *)((longlong)&(this->CurTargetTransform).Rotation.field0_0x0 + 0x18);
  local_138.Translation.ZW.m128d_f64[0] = (this->CurTargetTransform).Translation.field0_0x0._s_0.Z;
  local_138.Scale3D.ZW.m128d_f64[0] = (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Z;
  local_138.Scale3D.ZW.m128d_f64[1] = 0.0;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = (this->CurTargetTransform).Scale3D.field0_0x0._s_0.X;
  local_138._56_16_ = auVar17 << 0x40;
  USceneComponent::SetWorldTransform
            ((USceneComponent *)param_1,&local_138,false,(FHitResult *)0x0,None);
  UE::ToolTarget::HideSourceObject((UToolTarget *)this->_padding_);
  return;
}

// IsStampPending @ 14cd08900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMeshSculptToolBase::IsStampPending(UMeshSculptToolBase *this)

{
  return this->bIsStampPending;
}

// MakeBrushIndicatorMesh @ 14cd08a70

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
UMeshSculptToolBase::MakeBrushIndicatorMesh
          (UMeshSculptToolBase *this,UObject *param_1,UWorld *param_2)

{
  int iVar1;
  UPreviewMesh *this_00;
  UInteractiveToolManager *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  UClass *pUVar4;
  UDynamicMeshComponent *pUVar5;
  undefined1 local_2f8 [160];
  double local_258;
  int local_250;
  int local_24c;
  bool local_248;
  FDynamicMesh3 local_238;
  
  this_00 = NewObject<UPreviewMesh>(param_1);
  UPreviewMesh::CreateInWorld(this_00,param_2,&UE::Math::TTransform<double>::Identity);
  local_258 = __real_3ff0000000000000;
  local_2f8._0_8_ = &___7FSphereGenerator_Geometry_UE__6B_;
  local_2f8._8_8_ = (FScriptContainerElement *)0x0;
  local_2f8._16_8_ = 0;
  local_2f8._24_8_ = (FScriptContainerElement *)0x0;
  local_2f8._32_8_ = 0;
  local_2f8._40_8_ = (FScriptContainerElement *)0x0;
  local_2f8._48_8_ = 0;
  local_2f8._56_8_ = (FScriptContainerElement *)0x0;
  local_2f8._64_8_ = 0;
  local_2f8._72_8_ = (FScriptContainerElement *)0x0;
  local_2f8._80_8_ = 0;
  local_2f8._88_8_ = (FScriptContainerElement *)0x0;
  local_2f8._96_8_ = 0;
  local_2f8._104_8_ = (FScriptContainerElement *)0x0;
  local_2f8._112_8_ = 0;
  local_2f8._120_8_ = (FScriptContainerElement *)0x0;
  local_2f8._128_8_ = 0;
  local_2f8._136_8_ = (FScriptContainerElement *)0x0;
  local_2f8._144_8_ = 0;
  local_2f8[0x98] = false;
  local_248 = false;
  local_250 = 0x20;
  local_24c = 0x20;
  UE::Geometry::FMeshShapeGenerator::SetBufferSizes
            ((FMeshShapeGenerator *)local_2f8,0x3c2,0x780,0x41e,0x3c2);
  UE::Geometry::FSphereGenerator::GenerateVertices((FSphereGenerator *)local_2f8);
  UE::Geometry::FSphereGenerator::GenerateUVVertices((FSphereGenerator *)local_2f8);
  UE::Geometry::FSphereGenerator::OutputEquatorialTriangles((FSphereGenerator *)local_2f8);
  UE::Geometry::FSphereGenerator::OutputPolarTriangles((FSphereGenerator *)local_2f8);
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_238,(FMeshShapeGenerator *)local_2f8);
  UPreviewMesh::UpdatePreview(this_00,&local_238,FullUpdate,AllVertexAttribs);
  pUVar2 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar3 = ToolSetupUtil::GetDefaultBrushVolumeMaterial(pUVar2);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
     (pUVar3 == (UMaterialInstanceDynamic *)0x0)) {
    (this->BrushIndicatorMaterial).field0_0x0.DebugPtr = pUVar3;
    if (pUVar3 != (UMaterialInstanceDynamic *)0x0) goto LAB_14cd08bea;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
    (this->BrushIndicatorMaterial).field0_0x0.DebugPtr = pUVar3;
LAB_14cd08bea:
    UPreviewMesh::SetMaterial(this_00,(UMaterialInterface *)pUVar3);
  }
  pUVar5 = (this_00->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar5 != (UDynamicMeshComponent *)0x0) {
    pUVar4 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_14cd08c24;
  }
  pUVar5 = (UDynamicMeshComponent *)0x0;
LAB_14cd08c24:
  (**(code **)(pUVar5->_padding_ + 0xc80))(pUVar5);
  UPreviewMesh::SetShadowsEnabled(this_00,false);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_238);
  local_2f8._0_8_ = &___7FMeshShapeGenerator_Geometry_UE__6B_;
  if ((FScriptContainerElement *)local_2f8._136_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._136_8_);
  }
  if ((FScriptContainerElement *)local_2f8._120_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._120_8_);
  }
  if ((FScriptContainerElement *)local_2f8._104_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._104_8_);
  }
  if ((FScriptContainerElement *)local_2f8._88_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._88_8_);
  }
  if ((FScriptContainerElement *)local_2f8._72_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._72_8_);
  }
  if ((FScriptContainerElement *)local_2f8._56_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._56_8_);
  }
  if ((FScriptContainerElement *)local_2f8._40_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._40_8_);
  }
  if ((FScriptContainerElement *)local_2f8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._24_8_);
  }
  if ((FScriptContainerElement *)local_2f8._8_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2f8._8_8_);
  }
  return this_00;
}

// MapHorizontalBrushEditBehaviorToBrushSize @ 14cd0c070

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
UMeshSculptToolBase::MapHorizontalBrushEditBehaviorToBrushSize
          (UMeshSculptToolBase *this,ULocalTwoAxisPropertyEditInputBehavior *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FText *pFVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  FText local_58;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_48 = *(longlong *)&(param_1->HorizontalProperty).GetValueFunc;
  uVar2 = *(undefined8 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x8;
  local_38 = *(longlong *)&(param_1->HorizontalProperty).GetValueFunc.field_0x10;
  uStack_30 = *(undefined8 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x18;
  uVar1 = *(undefined8 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x20;
  plStack_20 = *(longlong **)&(param_1->HorizontalProperty).GetValueFunc.field_0x28;
  *(code **)&(param_1->HorizontalProperty).GetValueFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshSculptToolBase::MapHorizontalBrushEditBehaviorToBrushSize'::__l2::<lambda_1>,float>
       ::Call;
  *(undefined8 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x8 = uStack_40;
  *(undefined4 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x10 = 0x52979720;
  *(undefined4 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x14 = 1;
  *(UMeshSculptToolBase **)&(param_1->HorizontalProperty).GetValueFunc.field_0x18 = this;
  *(undefined4 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x24 = local_28._4_4_;
  *(undefined4 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x28 = 0;
  *(undefined4 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x2c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar4 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar4 = plStack_20;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  local_48 = *(longlong *)&(param_1->HorizontalProperty).SetValueFunc;
  uVar2 = *(undefined8 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x8;
  local_38 = *(longlong *)&(param_1->HorizontalProperty).SetValueFunc.field_0x10;
  uStack_30 = *(undefined8 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x18;
  uVar1 = *(undefined8 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x20;
  plStack_20 = *(longlong **)&(param_1->HorizontalProperty).SetValueFunc.field_0x28;
  *(code **)&(param_1->HorizontalProperty).SetValueFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshSculptToolBase::MapHorizontalBrushEditBehaviorToBrushSize'::__l2::<lambda_2>,void,float>
       ::Call;
  *(undefined8 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x8 = uStack_40;
  *(undefined4 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x10 = 0x52979740;
  *(undefined4 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x14 = 1;
  *(UMeshSculptToolBase **)&(param_1->HorizontalProperty).SetValueFunc.field_0x18 = this;
  *(undefined4 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x24 = local_28._4_4_;
  *(undefined4 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x28 = 0;
  *(undefined4 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x2c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar4 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar4 = plStack_20;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  local_48 = *(longlong *)&(param_1->HorizontalProperty).MutateDeltaFunc;
  uVar2 = *(undefined8 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x8;
  local_38 = *(longlong *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x10;
  uStack_30 = *(undefined8 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x18;
  uVar1 = *(undefined8 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x20;
  plStack_20 = *(longlong **)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x28;
  *(code **)&(param_1->HorizontalProperty).MutateDeltaFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshSculptToolBase::MapHorizontalBrushEditBehaviorToBrushSize'::__l2::<lambda_3>,float,float>
       ::Call;
  *(undefined8 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x8 = uStack_40;
  *(undefined4 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x10 = 0x52979760;
  *(undefined4 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x14 = 1;
  *(UMeshSculptToolBase **)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x18 = this;
  *(undefined4 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x24 = local_28._4_4_;
  *(undefined4 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x28 = 0;
  *(undefined4 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x2c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar4 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar4 = plStack_20;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"UMeshSculptToolBase",L"BrushRadius",L"Radius");
  FText::operator=(&(param_1->HorizontalProperty).Name,pFVar3);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  (param_1->HorizontalProperty).bEnabled = true;
  return;
}

// NextBrushModeAction @ 14cd0c3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::NextBrushModeAction(UMeshSculptToolBase *this)

{
  return;
}

// OnBeginDrag @ 14cd0e260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::OnBeginDrag(UMeshSculptToolBase *this,TRay<double> *param_1)

{
  int *piVar1;
  TArray<UMeshSculptToolBase::FInputRayData,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  FMeshSculptBrushOp *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  FMeshSculptFallofFunc *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  double local_138;
  undefined8 uStack_130;
  FMeshSculptFallofFunc *local_128;
  TReferenceControllerBase<1> *pTStack_120;
  undefined1 local_118 [4];
  undefined4 local_114;
  undefined4 local_74;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  (**(code **)(this->_padding_ + 0x560))();
  memset(local_118,0,0x100);
  local_114 = 0x3f800000;
  local_60 = 0;
  uStack_58 = 0;
  local_74 = 0xffffffff;
  local_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0xffffffff;
  uStack_44 = 0;
  cVar10 = (**(code **)(this->_padding_ + 0x3b8))(this,param_1);
  if (cVar10 != '\0') {
    this->bInStroke = true;
    (**(code **)(this->_padding_ + 0x588))(this);
    pTVar2 = &this->PendingInputRays;
    piVar1 = &(this->PendingInputRays).ArrayMax;
    (this->PendingInputRays).ArrayNum = 0;
    if ((this->PendingInputRays).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    if ((this->PreviousInputRay).bIsSet != false) {
      (this->PreviousInputRay).bIsSet = false;
    }
    if ((this->PreviousUnfilteredHitPosition).bIsSet != false) {
      (this->PreviousUnfilteredHitPosition).bIsSet = false;
    }
    (**(code **)(this->_padding_ + 0x558))(this,param_1,local_118);
    local_168 = (param_1->Origin).field0_0x0._s_0.X;
    dStack_160 = (param_1->Origin).field0_0x0._s_0.Y;
    local_158 = (param_1->Origin).field0_0x0._s_0.Z;
    dStack_150 = (param_1->Direction).field0_0x0._s_0.X;
    local_148 = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 8);
    uStack_144 = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 0xc);
    uStack_140 = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 0x10);
    uStack_13c = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 0x14);
    local_138 = this->ActiveStrokeTime;
    uStack_130 = (**(code **)(this->_padding_ + 0x4b0))(this);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_168) &&
       ((FScriptContainerElement *)&local_168 < pFVar3 + (longlong)*piVar1 * 0x40)) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    iVar12 = (this->PendingInputRays).ArrayNum;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x840,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PendingInputRays).ArrayNum = iVar12 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    lVar13 = (longlong)iVar12 * 0x40;
    *(double *)(pFVar3 + lVar13) = local_168;
    *(double *)(pFVar3 + lVar13 + 8) = dStack_160;
    *(double *)(pFVar3 + lVar13 + 0x10) = local_158;
    *(double *)(pFVar3 + lVar13 + 0x10 + 8) = dStack_150;
    *(ulonglong *)(pFVar3 + lVar13 + 0x20) = CONCAT44(uStack_144,local_148);
    *(ulonglong *)(pFVar3 + lVar13 + 0x20 + 8) = CONCAT44(uStack_13c,uStack_140);
    *(double *)(pFVar3 + lVar13 + 0x30) = local_138;
    *(undefined8 *)(pFVar3 + lVar13 + 0x30 + 8) = uStack_130;
    pFVar4 = (this->PrimaryBrushOp).Ptr;
    dVar8 = (param_1->Origin).field0_0x0._s_0.Y;
    (this->PendingStampRay).Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
    (this->PendingStampRay).Origin.field0_0x0._s_0.Y = dVar8;
    dVar8 = (param_1->Direction).field0_0x0._s_0.X;
    (this->PendingStampRay).Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
    (this->PendingStampRay).Direction.field0_0x0._s_0.X = dVar8;
    dVar8 = (param_1->Direction).field0_0x0._s_0.Y;
    dVar9 = (param_1->Direction).field0_0x0._s_0.Z;
    this->bIsStampPending = true;
    (this->PendingStampRay).Direction.field0_0x0._s_0.Y = dVar8;
    (this->PendingStampRay).Direction.field0_0x0._s_0.Z = dVar9;
    pTVar5 = (this->PrimaryFalloff).SharedReferenceCount.ReferenceController;
    pFVar6 = (this->PrimaryFalloff).Object;
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_128 = (pFVar4->Falloff).Object;
    pTStack_120 = (pFVar4->Falloff).SharedReferenceCount.ReferenceController;
    (pFVar4->Falloff).Object = pFVar6;
    (pFVar4->Falloff).SharedReferenceCount.ReferenceController = pTVar5;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_120)
    ;
    (**(code **)(this->_padding_ + 0x418))(this,param_1);
    (**(code **)(this->_padding_ + 0x3c8))(this,param_1);
  }
  return;
}

// OnBeginStroke @ 14cd0e7d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::OnBeginStroke(UMeshSculptToolBase *this,TRay<double> *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshSculptToolBase.h"
                     ,0x118,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnCancelDrag @ 14cd0f290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::OnCancelDrag(UMeshSculptToolBase *this)

{
  this->bInStroke = false;
  this->bIsStampPending = false;
                    /* WARNING: Could not recover jumptable at 0x00014cd0f2a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x428))();
  return;
}

// OnCancelStroke @ 14cd0f360

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::OnCancelStroke(UMeshSculptToolBase *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshSculptToolBase.h"
                     ,0x11a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnCompleteSetup @ 14cd0f5c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::OnCompleteSetup(UMeshSculptToolBase *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  (**(code **)(this->_padding_ + 0x470))(this,this);
  iVar12 = 0;
  puVar1 = &(this->BrushOpPropSets).field_0x10;
  iVar3 = *(int *)&(this->BrushOpPropSets).field_0x28;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = iVar14;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->BrushOpPropSets).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    iVar14 = 0;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cd0f66d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14cd0f66d:
  uVar11 = *(uint *)&(this->BrushOpPropSets).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->BrushOpPropSets).field_0x8 -
                       *(int *)&(this->BrushOpPropSets).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->BrushOpPropSets).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->BrushOpPropSets).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cd0f770;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar11 = (int)lVar9 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14cd0f770:
  while( true ) {
    if (*(int *)&(this->BrushOpPropSets).field_0x8 - *(int *)&(this->BrushOpPropSets).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMeshSculptBrushOpProps>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar4 = *(UObject **)
              (*(longlong *)&this->BrushOpPropSets + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18)
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar4);
    }
    (**(code **)(this->_padding_ + 0x338))(this,pUVar4,0);
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// OnEndDrag @ 14cd0fde0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::OnEndDrag(UMeshSculptToolBase *this,TRay<double> *param_1)

{
  this->bInStroke = false;
  this->bIsStampPending = false;
                    /* WARNING: Could not recover jumptable at 0x00014cd0fdf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x420))();
  return;
}

// OnEndStroke @ 14cd0fe70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::OnEndStroke(UMeshSculptToolBase *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Public\\Sculpting\\MeshSculptToolBase.h"
                     ,0x119,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnTick @ 14cd13ee0

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

void __thiscall UMeshSculptToolBase::OnTick(UMeshSculptToolBase *this,float param_1)

{
  code *pcVar1;
  UBrushStampIndicator *pUVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  UObject *pUVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  float fVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_f8 [32];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  double dStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GizmoPositionWatcher).GetValueFunc);
  pcVar1 = *(code **)&(this->GizmoPositionWatcher).GetValueFunc;
  plVar9 = (longlong *)&(this->GizmoPositionWatcher).GetValueFunc.field_0x10;
  plVar12 = *(longlong **)&(this->GizmoPositionWatcher).GetValueFunc.field_0x28;
  plVar11 = plVar9;
  if (plVar12 != (longlong *)0x0) {
    plVar11 = plVar12;
  }
  uVar8 = (**(code **)(*plVar11 + 8))();
  (*pcVar1)(&local_d8,uVar8);
  if (((local_d8 != (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.X) ||
      (dStack_d0 != (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.Y)) ||
     (local_c8 != (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.Z)) {
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->GizmoPositionWatcher).GetValueFunc)
    ;
    plVar12 = *(longlong **)&(this->GizmoPositionWatcher).GetValueFunc.field_0x28;
    pcVar1 = *(code **)&(this->GizmoPositionWatcher).GetValueFunc;
    if (plVar12 != (longlong *)0x0) {
      plVar9 = plVar12;
    }
    uVar8 = (**(code **)(*plVar9 + 8))(plVar9);
    (*pcVar1)(&local_b8,uVar8);
    (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.X = local_b8;
    (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.Y = dStack_b0;
    (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.Z = local_a8;
    UE::Core::Private::Function::CheckCallable
              (*(void **)&(this->GizmoPositionWatcher).OnValueChangedFunc);
    pcVar1 = *(code **)&(this->GizmoPositionWatcher).OnValueChangedFunc;
    plVar9 = *(longlong **)&(this->GizmoPositionWatcher).OnValueChangedFunc.field_0x28;
    plVar12 = (longlong *)&(this->GizmoPositionWatcher).OnValueChangedFunc.field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar12 = plVar9;
    }
    uVar8 = (**(code **)(*plVar12 + 8))();
    (*pcVar1)(uVar8,&local_b8);
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&(this->GizmoRotationWatcher).GetValueFunc);
  pcVar1 = *(code **)&(this->GizmoRotationWatcher).GetValueFunc;
  plVar9 = (longlong *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x10;
  plVar12 = *(longlong **)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28;
  plVar11 = plVar9;
  if (plVar12 != (longlong *)0x0) {
    plVar11 = plVar12;
  }
  uVar5 = (**(code **)(*plVar11 + 8))();
  uVar6 = (*pcVar1)(&local_b8);
  auVar16._8_8_ = -(ulonglong)((this->GizmoRotationWatcher).CachedValue.W != dStack_a0);
  auVar16._0_8_ = -(ulonglong)((this->GizmoRotationWatcher).CachedValue.Z != local_a8);
  uVar13 = movmskpd(uVar5,auVar16);
  auVar17._8_8_ = -(ulonglong)(dStack_b0 != (this->GizmoRotationWatcher).CachedValue.Y);
  auVar17._0_8_ = -(ulonglong)(local_b8 != (this->GizmoRotationWatcher).CachedValue.X);
  iVar7 = movmskpd(uVar6,auVar17);
  if ((uVar13 & 0x3fffffff) != 0 || iVar7 != 0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&(this->GizmoRotationWatcher).GetValueFunc)
    ;
    plVar12 = *(longlong **)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28;
    pcVar1 = *(code **)&(this->GizmoRotationWatcher).GetValueFunc;
    if (plVar12 != (longlong *)0x0) {
      plVar9 = plVar12;
    }
    uVar8 = (**(code **)(*plVar9 + 8))(plVar9);
    (*pcVar1)(&local_d8,uVar8);
    (this->GizmoRotationWatcher).CachedValue.X = local_d8;
    (this->GizmoRotationWatcher).CachedValue.Y = dStack_d0;
    (this->GizmoRotationWatcher).CachedValue.Z = local_c8;
    (this->GizmoRotationWatcher).CachedValue.W = dStack_c0;
    UE::Core::Private::Function::CheckCallable
              (*(void **)&(this->GizmoRotationWatcher).OnValueChangedFunc);
    pcVar1 = *(code **)&(this->GizmoRotationWatcher).OnValueChangedFunc;
    plVar9 = *(longlong **)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x28;
    plVar12 = (longlong *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x10;
    if (plVar9 != (longlong *)0x0) {
      plVar12 = plVar9;
    }
    uVar8 = (**(code **)(*plVar12 + 8))();
    (*pcVar1)(uVar8,&local_d8);
  }
  fVar14 = (float)(**(code **)(this->_padding_ + 0x400))(this);
  this->ActivePressure = (double)fVar14;
  cVar3 = (**(code **)(this->_padding_ + 0x568))(this);
  if (cVar3 == '\0') {
    (**(code **)(this->_padding_ + 0x560))();
  }
  else {
    (**(code **)(this->_padding_ + 0x590))(this);
  }
  this->CurrentBrushFalloff = 0.5;
  plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x478))(this);
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*plVar9 + 8));
  if (bVar4) {
    plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x478))(this);
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar9 + 8));
    fVar14 = (float)(**(code **)(*(longlong *)pUVar10 + 0x2d8))(pUVar10);
    if (0.0 <= fVar14) {
      dVar15 = (double)fVar14;
      if (__real_3ff0000000000000 <= (double)fVar14) {
        dVar15 = __real_3ff0000000000000;
      }
    }
    else {
      dVar15 = 0.0;
    }
    this->CurrentBrushFalloff = dVar15;
  }
  (**(code **)(this->_padding_ + 0x598))(this,&this->LastBrushFrameWorld);
  pUVar2 = (this->BrushIndicator).field0_0x0.DebugPtr;
  pcVar1 = *(code **)(pUVar2->_padding_ + 0x2e8);
  dVar15 = (double)(**(code **)(this->_padding_ + 0x4a8))(this);
  local_78 = *(undefined4 *)&(this->HoverStamp).WorldFrame.Origin.field0_0x0;
  uStack_74 = *(undefined4 *)((longlong)&(this->HoverStamp).WorldFrame.Origin.field0_0x0 + 4);
  uStack_70 = *(undefined4 *)((longlong)&(this->HoverStamp).WorldFrame.Origin.field0_0x0 + 8);
  uStack_6c = *(undefined4 *)((longlong)&(this->HoverStamp).WorldFrame.Origin.field0_0x0 + 0xc);
  local_98 = (this->HoverStamp).WorldFrame.Rotation.field0_0x0._s_0.X;
  uStack_90 = *(undefined4 *)((longlong)&(this->HoverStamp).WorldFrame.Rotation.field0_0x0 + 8);
  uStack_8c = *(undefined4 *)((longlong)&(this->HoverStamp).WorldFrame.Rotation.field0_0x0 + 0xc);
  fVar14 = __real_3f800000 - (float)dVar15;
  local_88 = (this->HoverStamp).WorldFrame.Rotation.field0_0x0._s_0.Z;
  dStack_80 = (this->HoverStamp).WorldFrame.Rotation.field0_0x0._s_0.W;
  local_68 = (this->HoverStamp).WorldFrame.Origin.field0_0x0._s_0.Z;
  local_48 = ___xmm_00000000000000003ff0000000000000;
  uStack_40 = _UNK_150689518;
  uStack_60 = 0;
  local_58 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_50 = _UNK_150689688;
  dVar15 = (double)(**(code **)(this->_padding_ + 0x4a0))(this);
  (*pcVar1)(pUVar2,(float)dVar15,&local_98,fVar14);
  (**(code **)(this->_padding_ + 0x668))(this);
  return;
}

// OnUpdateDrag @ 14cd15640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::OnUpdateDrag(UMeshSculptToolBase *this,TRay<double> *param_1)

{
  int *piVar1;
  TArray<UMeshSculptToolBase::FInputRayData,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  undefined8 uStack_10;
  
  cVar6 = (**(code **)(this->_padding_ + 0x568))();
  if (cVar6 != '\0') {
    local_48 = (param_1->Origin).field0_0x0._s_0.X;
    dStack_40 = (param_1->Origin).field0_0x0._s_0.Y;
    local_38 = (param_1->Origin).field0_0x0._s_0.Z;
    dStack_30 = (param_1->Direction).field0_0x0._s_0.X;
    pTVar2 = &this->PendingInputRays;
    local_28 = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 8);
    uStack_24 = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 0xc);
    uStack_20 = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 0x10);
    uStack_1c = *(undefined4 *)((longlong)&(param_1->Direction).field0_0x0 + 0x14);
    local_18 = this->ActiveStrokeTime;
    uStack_10 = (**(code **)(this->_padding_ + 0x4b0))(this);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 <
        pFVar3 + (longlong)(this->PendingInputRays).ArrayMax * 0x40)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar8 = (this->PendingInputRays).ArrayNum;
    piVar1 = &(this->PendingInputRays).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x840,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->PendingInputRays).ArrayNum = iVar8 + 1;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    lVar9 = (longlong)iVar8 * 0x40;
    *(double *)(pFVar3 + lVar9) = local_48;
    *(double *)(pFVar3 + lVar9 + 8) = dStack_40;
    *(double *)(pFVar3 + lVar9 + 0x10) = local_38;
    *(double *)(pFVar3 + lVar9 + 0x10 + 8) = dStack_30;
    *(ulonglong *)(pFVar3 + lVar9 + 0x20) = CONCAT44(uStack_24,local_28);
    *(ulonglong *)(pFVar3 + lVar9 + 0x20 + 8) = CONCAT44(uStack_1c,uStack_20);
    *(double *)(pFVar3 + lVar9 + 0x30) = local_18;
    *(undefined8 *)(pFVar3 + lVar9 + 0x30 + 8) = uStack_10;
    dVar5 = (param_1->Origin).field0_0x0._s_0.Y;
    (this->PendingStampRay).Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
    (this->PendingStampRay).Origin.field0_0x0._s_0.Y = dVar5;
    dVar5 = (param_1->Direction).field0_0x0._s_0.X;
    (this->PendingStampRay).Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
    (this->PendingStampRay).Direction.field0_0x0._s_0.X = dVar5;
    dVar5 = (param_1->Direction).field0_0x0._s_0.Z;
    (this->PendingStampRay).Direction.field0_0x0._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
    (this->PendingStampRay).Direction.field0_0x0._s_0.Z = dVar5;
  }
  return;
}

// PlaneTransformChanged @ 14cd15ce0

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
UMeshSculptToolBase::PlaneTransformChanged
          (UMeshSculptToolBase *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = *(undefined4 *)(param_2->Rotation).XY.m128d_f64;
  uStack_24 = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 4);
  uStack_20 = *(undefined4 *)((param_2->Rotation).XY.m128d_f64 + 1);
  uStack_1c = *(undefined4 *)((longlong)(param_2->Rotation).XY.m128d_f64 + 0xc);
  local_18 = *(undefined4 *)(param_2->Rotation).ZW.m128d_f64;
  uStack_14 = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 4);
  uStack_10 = *(undefined4 *)((param_2->Rotation).ZW.m128d_f64 + 1);
  uStack_c = *(undefined4 *)((longlong)(param_2->Rotation).ZW.m128d_f64 + 0xc);
  (**(code **)(this->_padding_ + 0x698))(local_18,&local_28);
  local_28 = *(undefined4 *)(param_2->Translation).XY.m128d_f64;
  uStack_24 = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 4);
  uStack_20 = *(undefined4 *)((param_2->Translation).XY.m128d_f64 + 1);
  uStack_1c = *(undefined4 *)((longlong)(param_2->Translation).XY.m128d_f64 + 0xc);
  local_18 = *(undefined4 *)(param_2->Translation).ZW.m128d_f64;
  uStack_14 = *(undefined4 *)((longlong)(param_2->Translation).ZW.m128d_f64 + 4);
  (**(code **)(this->_padding_ + 0x690))(this,&local_28);
  return;
}

// PreviousBrushModeAction @ 14cd16560

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::PreviousBrushModeAction(UMeshSculptToolBase *this)

{
  return;
}

// ProcessPerTickStamps @ 14cd16570

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
UMeshSculptToolBase::ProcessPerTickStamps
          (UMeshSculptToolBase *this,
          TFunction<bool___cdecl(UE::Math::TRay<double>_const_&)> *param_1,
          TFunction<void___cdecl(int)> *param_2,
          TFunction<void___cdecl(int,UE::Math::TRay<double>_const_&)> *param_3,
          TFunction<void___cdecl(void)> *param_4)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  TFunction<bool___cdecl(UE::Math::TRay<double>_const_&)> *pTVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  bool bVar15;
  longlong *local_80;
  TFunction<bool___cdecl(UE::Math::TRay<double>_const_&)> *local_78;
  TFunction<void___cdecl(void)> *local_70;
  TFunction<void___cdecl(int)> *local_68;
  
  local_70 = param_4;
  local_78 = param_1;
  local_68 = param_2;
  cVar5 = (**(code **)(this->_padding_ + 0x568))();
  if (cVar5 != '\0') {
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId923,"BaseSculptTool_Tick_ProcessPerTickStamps",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Sculpting\\MeshSculptToolBase.cpp"
                 ,0x39b);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId923);
    }
    (**(code **)(this->_padding_ + 0x440))(this);
    dVar1 = this->ActivePressure;
    this->ActivePressure = dVar1;
    uVar8 = (**(code **)(this->_padding_ + 0x5a8))(this);
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    local_80 = (longlong *)&param_1->field_0x10;
    pcVar3 = *(code **)param_1;
    plVar11 = local_80;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_1->field_0x28;
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    cVar5 = (*pcVar3)(uVar9,uVar8);
    if (cVar5 != '\0') {
      (**(code **)(this->_padding_ + 0x580))(this);
      cVar5 = (**(code **)(this->_padding_ + 0x5a0))(this);
      if ((cVar5 != '\0') && (iVar2 = (this->PendingStampRays).ArrayNum, iVar2 != 0)) {
        UE::Core::Private::Function::
        TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(int)>::
        operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(int)>
                    *)param_2,iVar2);
        pTVar4 = local_78;
        plVar11 = local_80;
        uVar14 = 0;
        if (0 < (this->PendingStampRays).ArrayNum) {
          lVar12 = 0;
          do {
            uVar7 = 0;
            if ((int)uVar14 < (this->PendingStampRays).ArrayNum) {
              uVar7 = ~uVar14 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar13 = (this->PendingStampRays).AllocatorInstance.Data + lVar12;
            this->ActivePressure = *(double *)(pFVar13 + 0x30);
            UE::Core::Private::Function::CheckCallable(*(void **)pTVar4);
            plVar10 = (longlong *)plVar11[3];
            pcVar3 = *(code **)pTVar4;
            if (plVar10 == (longlong *)0x0) {
              plVar10 = plVar11;
            }
            uVar8 = (**(code **)(*plVar10 + 8))();
            (*pcVar3)(uVar8,pFVar13);
            local_80 = (longlong *)CONCAT44(local_80._4_4_,uVar14);
            UE::Core::Private::Function::CheckCallable(*(void **)param_3);
            pcVar3 = *(code **)param_3;
            plVar10 = *(longlong **)&param_3->field_0x28;
            if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
              plVar10 = (longlong *)&param_3->field_0x10;
            }
            uVar8 = (**(code **)(*plVar10 + 8))();
            (*pcVar3)(uVar8,&local_80,pFVar13);
            uVar14 = uVar14 + 1;
            lVar12 = lVar12 + 0x38;
            param_2 = local_68;
            param_4 = local_70;
          } while ((int)uVar14 < (this->PendingStampRays).ArrayNum);
        }
        UE::Core::Private::Function::CheckCallable(*(void **)param_4);
        pcVar3 = *(code **)param_4;
        plVar11 = (longlong *)&param_4->field_0x10;
        if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
          plVar11 = *(longlong **)&param_4->field_0x28;
        }
        uVar8 = (**(code **)(*plVar11 + 8))();
        (*pcVar3)(uVar8);
        param_1 = local_78;
      }
    }
    this->ActivePressure = dVar1;
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (*(longlong *)param_1 != 0) {
    plVar11 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar11 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (*(longlong *)param_3 != 0) {
    plVar11 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (*(longlong *)param_4 != 0) {
    plVar11 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// ProcessPerTickStamps @ 14cd16870

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
UMeshSculptToolBase::ProcessPerTickStamps
          (UMeshSculptToolBase *this,
          TFunction<bool___cdecl(UE::Math::TRay<double>_const_&)> *param_1,
          TFunction<void___cdecl(int,UE::Math::TRay<double>_const_&)> *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  code *local_e8 [2];
  undefined **local_d8;
  code *local_d0;
  undefined8 local_c0;
  code *local_b8 [2];
  undefined **local_a8;
  code *local_a0;
  undefined8 local_90;
  TFunction<void___cdecl(int,UE::Math::TRay<double>_const_&)> local_88;
  TFunction<bool___cdecl(UE::Math::TRay<double>_const_&)> local_58;
  
  local_d8 = &___7__TFunction_OwnedObject_P6AXXZ_0A__0A__Function_Private_Core_UE__6B_;
  local_c0 = 0;
  local_d0 = `UMeshSculptToolBase::ProcessPerTickStamps'::__l2::<lambda_2>::<lambda_invoker_cdecl>;
  local_88._40_8_ = 0;
  local_e8[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::Call;
  local_88._0_8_ = *(undefined8 *)param_2;
  if (local_88._0_8_ != 0) {
    puVar1 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar1)(puVar1,&local_88.field_0x10);
  }
  local_90 = 0;
  local_a8 = &___7__TFunction_OwnedObject_P6AXH_Z_0A__0A__Function_Private_Core_UE__6B_;
  local_a0 = `UMeshSculptToolBase::ProcessPerTickStamps'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
  local_b8[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(int),void,int>::Call
  ;
  local_58._0_8_ = *(undefined8 *)param_1;
  local_58._40_8_ = 0;
  if (local_58._0_8_ != 0) {
    puVar1 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar1 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar1)(puVar1,&local_58.field_0x10);
  }
  ProcessPerTickStamps
            (this,&local_58,(TFunction<void___cdecl(int)> *)local_b8,&local_88,
             (TFunction<void___cdecl(void)> *)local_e8);
  if (*(longlong *)param_1 != 0) {
    plVar2 = (longlong *)&param_1->field_0x10;
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar2 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar2 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  return;
}

// ProjectWorldRayOnActivePlane @ 14cd16a80

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
UMeshSculptToolBase::ProjectWorldRayOnActivePlane
          (UMeshSculptToolBase *this,TRay<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 aTStack_40 [2];
  
  local_58._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_58._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  local_58._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  aTStack_40[0]._0_8_ = (param_1->Direction).field0_0x0._s_0.X;
  aTStack_40[0]._8_8_ = (param_1->Direction).field0_0x0._s_0.Y;
  aTStack_40[0]._16_8_ = (param_1->Direction).field0_0x0._s_0.Z;
  UE::Geometry::TFrame3<double>::RayPlaneIntersection
            (&this->ActiveBrushTargetPlaneWorld,(TVector<double> *)&local_58._s_0,
             (TVector<double> *)&aTStack_40[0]._s_0,2,param_2);
  dVar1 = (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Y;
  dVar2 = (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.X;
  dVar4 = (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Z;
  dVar3 = (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.W;
  dVar4 = dVar4 + dVar4;
  (param_3->field0_0x0)._s_0.X = dVar3 * (dVar1 + dVar1) + dVar4 * dVar2;
  (param_3->field0_0x0)._s_0.Y = dVar4 * dVar1 - dVar3 * (dVar2 + dVar2);
  (param_3->field0_0x0)._s_0.Z =
       __real_3ff0000000000000 - ((dVar1 + dVar1) * dVar1 + (dVar2 + dVar2) * dVar2);
  return true;
}

// ProjectWorldRayOnSculptMesh @ 14cd16b70

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
UMeshSculptToolBase::ProjectWorldRayOnSculptMesh
          (UMeshSculptToolBase *this,TRay<double> *param_1,bool param_2,TVector<double> *param_3,
          TVector<double> *param_4,int *param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  FDynamicMesh3 *this_00;
  TVector<double> *pTVar8;
  double dVar9;
  undefined1 auStackY_208 [32];
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1b8;
  double local_1a0;
  double local_198;
  double local_190;
  TVector<double> local_188;
  TVector<double>_u_0 local_170;
  TQuaternion<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 TStack_120;
  TIntrRay3Triangle3<double,UE::Math::TRay<double>_> local_108;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  *param_5 = -1;
  local_138._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_138._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  local_138._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  TStack_120._s_0.X = (param_1->Direction).field0_0x0._s_0.X;
  TStack_120._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
  TStack_120._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z;
  GetLocalRay(this,(TRay<double> *)&local_1b8._s_0,param_1);
  iVar7 = (**(code **)(this->_padding_ + 0x518))(this,&local_1b8);
  if (iVar7 == -1) {
    if (param_2) {
      local_1d8._s_0.Z = 0.0;
      local_1d8._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_1d8._s_0.Y = _UNK_150689518;
      UE::Math::TQuat<double>::RotateVector
                (&(this->CameraState).Orientation,&local_188,(TVector<double> *)&local_1d8._s_0);
      dVar5 = __real_3ff0000000000000;
      local_170._s_0.X = (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.X;
      local_170._s_0.Y = (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Y;
      local_170._s_0.Z = (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Z;
      local_158._s_0.X = 0.0;
      local_1d8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_1d8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_1d8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      local_158._s_0.W = __real_3ff0000000000000;
      local_158._s_0.Y = 0.0;
      local_158._s_0.Z = 0.0;
      UE::Geometry::TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)&local_158._s_0,(TVector<double> *)&local_1d8._s_0,
                 &local_188);
      UE::Geometry::TFrame3<double>::RayPlaneIntersection
                ((TFrame3<double> *)&local_170._s_0,(TVector<double> *)&local_138._s_0,
                 (TVector<double> *)&TStack_120._s_0,2,param_3);
      dVar4 = (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.X;
      bVar6 = true;
      dVar1 = (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Y;
      dVar9 = (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Z;
      dVar2 = (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.W;
      dVar9 = dVar9 + dVar9;
      (param_4->field0_0x0)._s_0.X = dVar2 * (dVar1 + dVar1) + dVar9 * dVar4;
      (param_4->field0_0x0)._s_0.Y = dVar9 * dVar1 - dVar2 * (dVar4 + dVar4);
      (param_4->field0_0x0)._s_0.Z = dVar5 - ((dVar1 + dVar1) * dVar1 + (dVar4 + dVar4) * dVar4);
    }
    else {
      bVar6 = false;
    }
  }
  else {
    this_00 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x438))(this);
    UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleIntersection
              (&local_108,this_00,iVar7,(TRay<double> *)&local_1b8._s_0);
    pTVar8 = UE::Geometry::FDynamicMesh3::GetTriNormal(this_00,&local_188,iVar7);
    pTVar8 = UE::Geometry::TTransformSRT3<double>::TransformNormal<double>
                       (&this->CurTargetTransform,(TVector<double> *)&local_1d8._s_0,pTVar8);
    dVar4 = (pTVar8->field0_0x0)._s_0.Y;
    (param_4->field0_0x0)._s_0.X = (pTVar8->field0_0x0)._s_0.X;
    (param_4->field0_0x0)._s_0.Y = dVar4;
    (param_4->field0_0x0)._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
    local_1d8._s_0.X =
         (local_1a0 * local_108.RayParameter + local_1b8._s_0.X) *
         (this->CurTargetTransform).Scale3D.field0_0x0._s_0.X;
    local_1d8._s_0.Z =
         (local_190 * local_108.RayParameter + local_1b8._s_0.Z) *
         (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Z;
    local_1d8._s_0.Y =
         (local_198 * local_108.RayParameter + local_1b8._s_0.Y) *
         (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Y;
    pTVar8 = UE::Geometry::operator*<double>
                       (&local_188,&(this->CurTargetTransform).Rotation,
                        (TVector<double> *)&local_1d8._s_0);
    dVar1 = (this->CurTargetTransform).Translation.field0_0x0._s_0.Y;
    dVar9 = (pTVar8->field0_0x0)._s_0.Y;
    dVar4 = (this->CurTargetTransform).Translation.field0_0x0._s_0.Z + (pTVar8->field0_0x0)._s_0.Z;
    bVar6 = true;
    (param_3->field0_0x0)._s_0.X =
         (this->CurTargetTransform).Translation.field0_0x0._s_0.X + (pTVar8->field0_0x0)._s_0.X;
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = dVar1 + dVar9;
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])((longlong)&param_3->field0_0x0 + 8) = auVar3;
    *param_5 = iVar7;
  }
  return bVar6;
}

// ProjectWorldRayOnTargetMesh @ 14cd16e80

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
UMeshSculptToolBase::ProjectWorldRayOnTargetMesh
          (UMeshSculptToolBase *this,TRay<double> *param_1,bool param_2,TVector<double> *param_3,
          TVector<double> *param_4,int *param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  FDynamicMesh3 *this_00;
  TVector<double> *pTVar8;
  double dVar9;
  undefined1 auStackY_208 [32];
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1b8;
  double local_1a0;
  double local_198;
  double local_190;
  TVector<double> local_188;
  TVector<double>_u_0 local_170;
  TQuaternion<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 TStack_120;
  TIntrRay3Triangle3<double,UE::Math::TRay<double>_> local_108;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_138._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_138._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  local_138._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  TStack_120._s_0.X = (param_1->Direction).field0_0x0._s_0.X;
  TStack_120._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
  TStack_120._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z;
  GetLocalRay(this,(TRay<double> *)&local_1b8._s_0,param_1);
  iVar7 = (**(code **)(this->_padding_ + 0x528))(this,&local_1b8);
  if (iVar7 == -1) {
    if (param_2) {
      local_1d8._s_0.Z = 0.0;
      local_1d8._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_1d8._s_0.Y = _UNK_150689518;
      UE::Math::TQuat<double>::RotateVector
                (&(this->CameraState).Orientation,&local_188,(TVector<double> *)&local_1d8._s_0);
      dVar5 = __real_3ff0000000000000;
      local_170._s_0.X = (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.X;
      local_170._s_0.Y = (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Y;
      local_170._s_0.Z = (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Z;
      local_158._s_0.X = 0.0;
      local_1d8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_1d8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_1d8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      local_158._s_0.W = __real_3ff0000000000000;
      local_158._s_0.Y = 0.0;
      local_158._s_0.Z = 0.0;
      UE::Geometry::TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)&local_158._s_0,(TVector<double> *)&local_1d8._s_0,
                 &local_188);
      UE::Geometry::TFrame3<double>::RayPlaneIntersection
                ((TFrame3<double> *)&local_170._s_0,(TVector<double> *)&local_138._s_0,
                 (TVector<double> *)&TStack_120._s_0,2,param_3);
      dVar4 = (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.X;
      bVar6 = true;
      dVar1 = (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Y;
      dVar9 = (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Z;
      dVar2 = (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.W;
      dVar9 = dVar9 + dVar9;
      (param_4->field0_0x0)._s_0.X = dVar2 * (dVar1 + dVar1) + dVar9 * dVar4;
      (param_4->field0_0x0)._s_0.Y = dVar9 * dVar1 - dVar2 * (dVar4 + dVar4);
      (param_4->field0_0x0)._s_0.Z = dVar5 - ((dVar1 + dVar1) * dVar1 + (dVar4 + dVar4) * dVar4);
    }
    else {
      bVar6 = false;
    }
  }
  else {
    this_00 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x448))(this);
    UE::Geometry::TMeshQueries<UE::Geometry::FDynamicMesh3>::TriangleIntersection
              (&local_108,this_00,iVar7,(TRay<double> *)&local_1b8._s_0);
    pTVar8 = UE::Geometry::FDynamicMesh3::GetTriNormal(this_00,&local_188,iVar7);
    pTVar8 = UE::Geometry::TTransformSRT3<double>::TransformNormal<double>
                       (&this->CurTargetTransform,(TVector<double> *)&local_1d8._s_0,pTVar8);
    dVar4 = (pTVar8->field0_0x0)._s_0.Y;
    (param_4->field0_0x0)._s_0.X = (pTVar8->field0_0x0)._s_0.X;
    (param_4->field0_0x0)._s_0.Y = dVar4;
    (param_4->field0_0x0)._s_0.Z = (pTVar8->field0_0x0)._s_0.Z;
    local_1d8._s_0.X =
         (local_1a0 * local_108.RayParameter + local_1b8._s_0.X) *
         (this->CurTargetTransform).Scale3D.field0_0x0._s_0.X;
    local_1d8._s_0.Z =
         (local_190 * local_108.RayParameter + local_1b8._s_0.Z) *
         (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Z;
    local_1d8._s_0.Y =
         (local_198 * local_108.RayParameter + local_1b8._s_0.Y) *
         (this->CurTargetTransform).Scale3D.field0_0x0._s_0.Y;
    pTVar8 = UE::Geometry::operator*<double>
                       (&local_188,&(this->CurTargetTransform).Rotation,
                        (TVector<double> *)&local_1d8._s_0);
    dVar1 = (this->CurTargetTransform).Translation.field0_0x0._s_0.Y;
    dVar9 = (pTVar8->field0_0x0)._s_0.Y;
    dVar4 = (this->CurTargetTransform).Translation.field0_0x0._s_0.Z + (pTVar8->field0_0x0)._s_0.Z;
    bVar6 = true;
    (param_3->field0_0x0)._s_0.X =
         (this->CurTargetTransform).Translation.field0_0x0._s_0.X + (pTVar8->field0_0x0)._s_0.X;
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = dVar1 + dVar9;
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])((longlong)&param_3->field0_0x0 + 8) = auVar3;
    *param_5 = iVar7;
  }
  return bVar6;
}

// RegisterActions @ 14cd17c40

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
UMeshSculptToolBase::RegisterActions(UMeshSculptToolBase *this,FInteractiveToolActionSet *param_1)

{
  FText *pFVar1;
  FText *pFVar2;
  FString local_88;
  FText local_78;
  FText local_68;
  code *local_58 [2];
  undefined **local_48;
  UMeshSculptToolBase *local_40;
  undefined8 local_30;
  
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshSculptToolBase::RegisterActions'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshSculptToolBase::RegisterActions'::__l2::<lambda_1>,void>::
                Call;
  local_30 = 0;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshSculptToolBase",L"SculptNextBrushModeTooltip",
                      L"Cycle to next Brush Type");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UMeshSculptToolBase",L"SculptNextBrushMode",L"Next Brush Type");
  ::FString::FString(&local_88,L"NextBrushMode");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2711,&local_88,pFVar2,pFVar1,'\0',&EKeys::A,
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
              TFunction_OwnedObject<`UMeshSculptToolBase::RegisterActions'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshSculptToolBase::RegisterActions'::__l2::<lambda_2>,void>::
                Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UMeshSculptToolBase",L"SculptPreviousBrushModeTooltip",
                      L"Cycle to previous Brush Type");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshSculptToolBase",L"SculptPreviousBrushMode",
                      L"Previous Brush Type");
  ::FString::FString(&local_88,L"PreviousBrushMode");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2712,&local_88,pFVar2,pFVar1,'\0',&EKeys::Q,
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
              TFunction_OwnedObject<`UMeshSculptToolBase::RegisterActions'::`2'::<lambda_3>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshSculptToolBase::RegisterActions'::__l2::<lambda_3>,void>::
                Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UMeshSculptToolBase",L"SculptIncreaseSpeedTooltip",
                      L"Increase Brush Speed");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshSculptToolBase",L"SculptIncreaseSpeed",L"Increase Speed");
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
              TFunction_OwnedObject<`UMeshSculptToolBase::RegisterActions'::`2'::<lambda_4>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshSculptToolBase::RegisterActions'::__l2::<lambda_4>,void>::
                Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UMeshSculptToolBase",L"SculptDecreaseSpeedTooltip",
                      L"Decrease Brush Speed");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshSculptToolBase",L"SculptDecreaseSpeed",L"Decrease Speed");
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
              TFunction_OwnedObject<`UMeshSculptToolBase::RegisterActions'::`2'::<lambda_5>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshSculptToolBase::RegisterActions'::__l2::<lambda_5>,void>::
                Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UMeshSculptToolBase",L"SculptIncreaseSizeTooltip",
                      L"Increase Brush Size");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshSculptToolBase",L"SculptIncreaseSize",L"Increase Size");
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
              TFunction_OwnedObject<`UMeshSculptToolBase::RegisterActions'::`2'::<lambda_6>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshSculptToolBase::RegisterActions'::__l2::<lambda_6>,void>::
                Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UMeshSculptToolBase",L"SculptDecreaseSizeTooltip",
                      L"Decrease Brush Size");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshSculptToolBase",L"SculptDecreaseSize",L"Decrease Size");
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
              TFunction_OwnedObject<`UMeshSculptToolBase::RegisterActions'::`2'::<lambda_7>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshSculptToolBase::RegisterActions'::__l2::<lambda_7>,void>::
                Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UMeshSculptToolBase",L"SculptIncreaseSizeTooltip",
                      L"Increase Brush Size");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshSculptToolBase",L"SculptIncreaseSize",L"Increase Size");
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
              TFunction_OwnedObject<`UMeshSculptToolBase::RegisterActions'::`2'::<lambda_8>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshSculptToolBase::RegisterActions'::__l2::<lambda_8>,void>::
                Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UMeshSculptToolBase",L"SculptDecreaseSizeTooltip",
                      L"Decrease Brush Size");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshSculptToolBase",L"SculptDecreaseSize",L"Decrease Size");
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
              TFunction_OwnedObject<`UMeshSculptToolBase::RegisterActions'::`2'::<lambda_9>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshSculptToolBase::RegisterActions'::__l2::<lambda_9>,void>::
                Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UMeshSculptToolBase",L"SculptIncreaseRadiusTooltip",
                      L"Increase Brush Radius");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshSculptToolBase",L"SculptIncreaseRadius",L"Increase Radius");
  ::FString::FString(&local_88,L"SculptIncreaseRadius");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,100,&local_88,pFVar2,pFVar1,'\0',&EKeys::RightBracket,
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
              TFunction_OwnedObject<`UMeshSculptToolBase::RegisterActions'::`2'::<lambda_10>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshSculptToolBase::RegisterActions'::__l2::<lambda_10>,void>::
                Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UMeshSculptToolBase",L"SculptDecreaseRadiusTooltip",
                      L"Decrease Brush Radius");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshSculptToolBase",L"SculptDecreaseRadius",L"Decrease Radius");
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
              TFunction_OwnedObject<`UMeshSculptToolBase::RegisterActions'::`2'::<lambda_11>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshSculptToolBase::RegisterActions'::__l2::<lambda_11>,void>::
                Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UMeshSculptToolBase",L"SculptIncreaseRadiusTooltip",
                      L"Increase Brush Radius");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshSculptToolBase",L"SculptIncreaseRadius",L"Increase Radius");
  ::FString::FString(&local_88,L"SculptIncreaseRadiusSmallStep");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2746,&local_88,pFVar2,pFVar1,'\x04',
             &EKeys::RightBracket,(TFunction<void___cdecl(void)> *)local_58);
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
              TFunction_OwnedObject<`UMeshSculptToolBase::RegisterActions'::`2'::<lambda_12>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshSculptToolBase::RegisterActions'::__l2::<lambda_12>,void>::
                Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UMeshSculptToolBase",L"SculptDecreaseRadiusTooltip",
                      L"Decrease Brush Radius");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshSculptToolBase",L"SculptDecreaseRadius",L"Decrease Radius");
  ::FString::FString(&local_88,L"SculptDecreaseRadiusSmallStemp");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2747,&local_88,pFVar2,pFVar1,'\x04',
             &EKeys::LeftBracket,(TFunction<void___cdecl(void)> *)local_58);
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
              TFunction_OwnedObject<`UMeshSculptToolBase::RegisterActions'::`2'::<lambda_13>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshSculptToolBase::RegisterActions'::__l2::<lambda_13>,void>::
                Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UMeshSculptToolBase",L"ToggleWireframeTooltip",
                      L"Toggle visibility of wireframe overlay");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshSculptToolBase",L"ToggleWireframe",L"Toggle Wireframe");
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
              TFunction_OwnedObject<`UMeshSculptToolBase::RegisterActions'::`2'::<lambda_14>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshSculptToolBase::RegisterActions'::__l2::<lambda_14>,void>::
                Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UMeshSculptToolBase",L"SetSculptWorkSurfacePosNormalTooltip",
                      L"Move the Sculpting Work Plane/Surface to Position and Normal of World hit point under cursor"
                     );
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshSculptToolBase",L"SetSculptWorkSurfacePosNormal",
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
              TFunction_OwnedObject<`UMeshSculptToolBase::RegisterActions'::`2'::<lambda_15>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshSculptToolBase::RegisterActions'::__l2::<lambda_15>,void>::
                Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UMeshSculptToolBase",L"SetSculptWorkSurfacePosTooltip",
                      L"Move the Sculpting Work Plane/Surface to World hit point under cursor (keep current Orientation)"
                     );
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshSculptToolBase",L"SetSculptWorkSurfacePos",
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
              TFunction_OwnedObject<`UMeshSculptToolBase::RegisterActions'::`2'::<lambda_16>,0,0>::
              _vftable_;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshSculptToolBase::RegisterActions'::__l2::<lambda_16>,void>::
                Call;
  local_40 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_78,L"UMeshSculptToolBase",L"SetSculptWorkSurfaceViewTooltip",
                      L"Move the Sculpting Work Plane/Surface to World hit point under cursor and align to View"
                     );
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_68,L"UMeshSculptToolBase",L"SetSculptWorkSurfaceView",
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

// RegisterBrushType @ 14cd18bc0

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
UMeshSculptToolBase::RegisterBrushType
          (UMeshSculptToolBase *this,int param_1,FText *param_2,
          TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_> param_3,
          UMeshSculptBrushOpProps *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  longlong lVar4;
  FMeshSculptBrushOpFactory FVar5;
  UMeshSculptBrushOpProps *pUVar6;
  TRefCountPtr<ITextData> TVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  TRefCountPtr<ITextData> local_res8;
  uint local_res10 [2];
  uint *local_58;
  FMeshSculptBrushOpFactory *local_50;
  FText local_48;
  uint local_38;
  
  local_res10[0] = param_1;
  FText::FText(&local_48);
  TVar7.Reference = local_48.TextData.Reference;
  pIVar3 = (param_2->TextData).Reference;
  if (local_48.TextData.Reference != pIVar3) {
    local_48.TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
    }
    if (TVar7.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar7.Reference + 0x10))(TVar7.Reference);
    }
  }
  local_48.Flags = param_2->Flags;
  local_38 = local_res10[0];
  TSet<UMeshSculptToolBase::FBrushTypeInfo,DefaultKeyFuncs<UMeshSculptToolBase::FBrushTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<UMeshSculptToolBase::FBrushTypeInfo_const_&>
            (&this->RegisteredPrimaryBrushTypes,(FBrushTypeInfo *)&local_res8,(bool *)&local_48);
  if (*(int *)&(this->BrushOpPropSets).field_0x8 != *(int *)&(this->BrushOpPropSets).field_0x34) {
    puVar10 = *(undefined1 **)&(this->BrushOpPropSets).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->BrushOpPropSets).field_0x38;
    }
    iVar8 = *(int *)(puVar10 +
                    (ulonglong)(*(int *)&(this->BrushOpPropSets).field_0x48 - 1U & local_res10[0]) *
                    4);
    if (iVar8 != -1) {
      lVar4 = *(longlong *)&(this->BrushOpPropSets).field_0x0;
      do {
        lVar1 = lVar4 + (longlong)iVar8 * 0x18;
        if (*(uint *)(lVar4 + (longlong)iVar8 * 0x18) == local_res10[0]) {
          puVar11 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar11 = (undefined8 *)0x0;
          }
          if (puVar11 != (undefined8 *)0x0) {
            (**(code **)(this->_padding_ + 0x328))(this,*puVar11);
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x10);
      } while (iVar8 != -1);
    }
  }
  pUVar6 = param_4;
  local_res8.Reference = (ITextData *)param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_4 != (UMeshSculptBrushOpProps *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4);
  }
  local_58 = local_res10;
  local_50 = (FMeshSculptBrushOpFactory *)&local_res8;
  TSet<TTuple<int,TObjectPtr<UMeshSculptBrushOpProps>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMeshSculptBrushOpProps>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,TObjectPtr<UMeshSculptBrushOpProps>_&&>_>
            ((TSet<TTuple<int,TObjectPtr<UMeshSculptBrushOpProps>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMeshSculptBrushOpProps>,0>,FDefaultSetAllocator>
              *)&this->BrushOpPropSets,
             (TPairInitializer<int_const_&,TObjectPtr<UMeshSculptBrushOpProps>_&&> *)&param_4,
             (bool *)&local_58);
  local_58 = local_res10;
  local_50 = param_3.Ptr;
  TSet<TTuple<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<int_const_&,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>_&&>_>
            ((TSet<TTuple<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>,0>,FDefaultSetAllocator>
              *)&this->BrushOpFactories,
             (TPairInitializer<int_const_&,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>_&&>
              *)&param_4,(bool *)&local_58);
  plVar9 = (longlong *)this->_padding_;
  plVar2 = plVar9 + (int)this->_padding_;
  for (; plVar9 != plVar2; plVar9 = plVar9 + 1) {
    if ((UMeshSculptBrushOpProps *)*plVar9 == (UMeshSculptBrushOpProps *)0x0) {
      bVar12 = pUVar6 == (UMeshSculptBrushOpProps *)0x0;
    }
    else {
      bVar12 = (UMeshSculptBrushOpProps *)*plVar9 == pUVar6;
    }
    if (bVar12) goto LAB_14cd18d52;
  }
  (**(code **)(this->_padding_ + 0x318))(this,pUVar6);
LAB_14cd18d52:
  (**(code **)(this->_padding_ + 0x338))(this,pUVar6,0);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  pIVar3 = (param_2->TextData).Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  FVar5 = *param_3.Ptr;
  if (FVar5 != (FMeshSculptBrushOpFactory)0x0) {
    (*(code *)**(undefined8 **)FVar5)(FVar5,1);
  }
  return;
}

// RegisterSecondaryBrushType @ 14cd19d40

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
UMeshSculptToolBase::RegisterSecondaryBrushType
          (UMeshSculptToolBase *this,int param_1,FText *param_2,
          TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_> param_3,
          UMeshSculptBrushOpProps *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  ITextData *pIVar3;
  longlong lVar4;
  FMeshSculptBrushOpFactory FVar5;
  UMeshSculptBrushOpProps *pUVar6;
  TRefCountPtr<ITextData> TVar7;
  int iVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  TRefCountPtr<ITextData> local_res8;
  uint local_res10 [2];
  uint *local_58;
  FMeshSculptBrushOpFactory *local_50;
  FText local_48;
  uint local_38;
  
  local_res10[0] = param_1;
  FText::FText(&local_48);
  TVar7.Reference = local_48.TextData.Reference;
  pIVar3 = (param_2->TextData).Reference;
  if (local_48.TextData.Reference != pIVar3) {
    local_48.TextData.Reference = pIVar3;
    if (pIVar3 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,&local_res8);
    }
    if (TVar7.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*TVar7.Reference + 0x10))(TVar7.Reference);
    }
  }
  local_48.Flags = param_2->Flags;
  local_38 = local_res10[0];
  TSet<UMeshSculptToolBase::FBrushTypeInfo,DefaultKeyFuncs<UMeshSculptToolBase::FBrushTypeInfo,0>,FDefaultSetAllocator>
  ::Emplace<UMeshSculptToolBase::FBrushTypeInfo_const_&>
            (&this->RegisteredSecondaryBrushTypes,(FBrushTypeInfo *)&local_res8,(bool *)&local_48);
  if (*(int *)&(this->SecondaryBrushOpPropSets).field_0x8 !=
      *(int *)&(this->SecondaryBrushOpPropSets).field_0x34) {
    puVar10 = *(undefined1 **)&(this->SecondaryBrushOpPropSets).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->SecondaryBrushOpPropSets).field_0x38;
    }
    iVar8 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->SecondaryBrushOpPropSets).field_0x48 - 1U & local_res10[0]) * 4
                    );
    if (iVar8 != -1) {
      lVar4 = *(longlong *)&(this->SecondaryBrushOpPropSets).field_0x0;
      do {
        lVar1 = lVar4 + (longlong)iVar8 * 0x18;
        if (*(uint *)(lVar4 + (longlong)iVar8 * 0x18) == local_res10[0]) {
          puVar11 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar11 = (undefined8 *)0x0;
          }
          if (puVar11 != (undefined8 *)0x0) {
            (**(code **)(this->_padding_ + 0x328))(this,*puVar11);
          }
          break;
        }
        iVar8 = *(int *)(lVar1 + 0x10);
      } while (iVar8 != -1);
    }
  }
  pUVar6 = param_4;
  local_res8.Reference = (ITextData *)param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_4 != (UMeshSculptBrushOpProps *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4);
  }
  local_58 = local_res10;
  local_50 = (FMeshSculptBrushOpFactory *)&local_res8;
  TSet<TTuple<int,TObjectPtr<UMeshSculptBrushOpProps>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMeshSculptBrushOpProps>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<int_const_&,TObjectPtr<UMeshSculptBrushOpProps>_&&>_>
            ((TSet<TTuple<int,TObjectPtr<UMeshSculptBrushOpProps>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMeshSculptBrushOpProps>,0>,FDefaultSetAllocator>
              *)&this->SecondaryBrushOpPropSets,
             (TPairInitializer<int_const_&,TObjectPtr<UMeshSculptBrushOpProps>_&&> *)&param_4,
             (bool *)&local_58);
  local_58 = local_res10;
  local_50 = param_3.Ptr;
  TSet<TTuple<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<int_const_&,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>_&&>_>
            ((TSet<TTuple<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>_>,TDefaultMapHashableKeyFuncs<int,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>,0>,FDefaultSetAllocator>
              *)&this->SecondaryBrushOpFactories,
             (TPairInitializer<int_const_&,TUniquePtr<FMeshSculptBrushOpFactory,TDefaultDelete<FMeshSculptBrushOpFactory>_>_&&>
              *)&param_4,(bool *)&local_58);
  plVar9 = (longlong *)this->_padding_;
  plVar2 = plVar9 + (int)this->_padding_;
  for (; plVar9 != plVar2; plVar9 = plVar9 + 1) {
    if ((UMeshSculptBrushOpProps *)*plVar9 == (UMeshSculptBrushOpProps *)0x0) {
      bVar12 = pUVar6 == (UMeshSculptBrushOpProps *)0x0;
    }
    else {
      bVar12 = (UMeshSculptBrushOpProps *)*plVar9 == pUVar6;
    }
    if (bVar12) goto LAB_14cd19ed2;
  }
  (**(code **)(this->_padding_ + 0x318))(this,pUVar6);
LAB_14cd19ed2:
  (**(code **)(this->_padding_ + 0x338))(this,pUVar6,0);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  pIVar3 = (param_2->TextData).Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  FVar5 = *param_3.Ptr;
  if (FVar5 != (FMeshSculptBrushOpFactory)0x0) {
    (*(code *)**(undefined8 **)FVar5)(FVar5,1);
  }
  return;
}

// RegisterStandardFalloffTypes @ 14cd19f30

/* WARNING: Removing unreachable block (ram,0x00014cd1a720) */
/* WARNING: Removing unreachable block (ram,0x00014cd1a4e8) */
/* WARNING: Removing unreachable block (ram,0x00014cd1a2b0) */
/* WARNING: Removing unreachable block (ram,0x00014cd1a071) */
/* WARNING: Removing unreachable block (ram,0x00014cd1a193) */
/* WARNING: Removing unreachable block (ram,0x00014cd1a3cc) */
/* WARNING: Removing unreachable block (ram,0x00014cd1a604) */
/* WARNING: Removing unreachable block (ram,0x00014cd1a84b) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::RegisterStandardFalloffTypes(UMeshSculptToolBase *this)

{
  TArray<UMeshSculptToolBase::FFalloffTypeInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  FText *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FText local_148;
  FString local_138;
  undefined4 local_128;
  FText local_120;
  FString local_110;
  undefined4 local_100;
  FText local_f8;
  FString local_e8;
  undefined4 local_d8;
  FText local_d0;
  FString local_c0;
  undefined4 local_b0;
  FText local_a8;
  FString local_98;
  undefined4 local_88;
  FText local_80;
  FString local_70;
  undefined4 local_60;
  FText local_58;
  FString local_48;
  undefined4 local_38;
  FText local_30;
  FString local_20;
  undefined4 local_10;
  
  pTVar1 = &this->RegisteredPrimaryFalloffTypes;
  FText::AsLocalizable_Advanced_LocText(&local_148,L"UMeshSculptToolBase",L"Smooth",L"Smooth");
  ::FString::FString(&local_138,L"Smooth");
  pFVar2 = (FText *)(pTVar1->AllocatorInstance).Data;
  local_128 = 0;
  if (((pFVar2 <= &local_148) &&
      (&local_148 <
       (FText *)((longlong)pFVar2 + (longlong)(this->RegisteredPrimaryFalloffTypes).ArrayMax * 0x28)
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->RegisteredPrimaryFalloffTypes).ArrayNum;
  if (iVar5 == (this->RegisteredPrimaryFalloffTypes).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,
                       &(this->RegisteredPrimaryFalloffTypes).ArrayMax);
  }
  (this->RegisteredPrimaryFalloffTypes).ArrayNum = iVar5 + 1;
  pFVar2 = (FText *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FText::FText(pFVar2,&local_148);
  pFVar2[1].TextData.Reference = (ITextData *)0x0;
  pFVar2[1].TextData.Reference = (ITextData *)local_138.Data.AllocatorInstance.Data;
  pFVar2[1].Flags = local_138.Data.ArrayNum;
  *(int *)&pFVar2[1].field_0xc = local_138.Data.ArrayMax;
  *(undefined4 *)&pFVar2[2].TextData.Reference = local_128;
  local_138.Data.ArrayNum = 0;
  local_138.Data.ArrayMax = 0;
  local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_148.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_148.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText(&local_120,L"UMeshSculptToolBase",L"Linear",L"Linear");
  ::FString::FString(&local_110,L"Linear");
  pFVar2 = (FText *)(pTVar1->AllocatorInstance).Data;
  local_100 = 1;
  if (((pFVar2 <= &local_120) &&
      (&local_120 <
       (FText *)((longlong)pFVar2 + (longlong)(this->RegisteredPrimaryFalloffTypes).ArrayMax * 0x28)
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->RegisteredPrimaryFalloffTypes).ArrayNum;
  if (iVar5 == (this->RegisteredPrimaryFalloffTypes).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,
                       &(this->RegisteredPrimaryFalloffTypes).ArrayMax);
  }
  (this->RegisteredPrimaryFalloffTypes).ArrayNum = iVar5 + 1;
  pFVar2 = (FText *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FText::FText(pFVar2,&local_120);
  pFVar2[1].TextData.Reference = (ITextData *)0x0;
  pFVar2[1].TextData.Reference = (ITextData *)local_110.Data.AllocatorInstance.Data;
  pFVar2[1].Flags = local_110.Data.ArrayNum;
  *(int *)&pFVar2[1].field_0xc = local_110.Data.ArrayMax;
  *(undefined4 *)&pFVar2[2].TextData.Reference = local_100;
  local_110.Data.ArrayNum = 0;
  local_110.Data.ArrayMax = 0;
  local_110.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_120.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_120.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText(&local_f8,L"UMeshSculptToolBase",L"Inverse",L"Inverse");
  ::FString::FString(&local_e8,L"Inverse");
  pFVar2 = (FText *)(pTVar1->AllocatorInstance).Data;
  local_d8 = 2;
  if (((pFVar2 <= &local_f8) &&
      (&local_f8 <
       (FText *)((longlong)pFVar2 + (longlong)(this->RegisteredPrimaryFalloffTypes).ArrayMax * 0x28)
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->RegisteredPrimaryFalloffTypes).ArrayNum;
  if (iVar5 == (this->RegisteredPrimaryFalloffTypes).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,
                       &(this->RegisteredPrimaryFalloffTypes).ArrayMax);
  }
  (this->RegisteredPrimaryFalloffTypes).ArrayNum = iVar5 + 1;
  pFVar2 = (FText *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FText::FText(pFVar2,&local_f8);
  pFVar2[1].TextData.Reference = (ITextData *)0x0;
  pFVar2[1].TextData.Reference = (ITextData *)local_e8.Data.AllocatorInstance.Data;
  pFVar2[1].Flags = local_e8.Data.ArrayNum;
  *(int *)&pFVar2[1].field_0xc = local_e8.Data.ArrayMax;
  *(undefined4 *)&pFVar2[2].TextData.Reference = local_d8;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_f8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText(&local_d0,L"UMeshSculptToolBase",L"Round",L"Round");
  ::FString::FString(&local_c0,L"Round");
  pFVar2 = (FText *)(pTVar1->AllocatorInstance).Data;
  local_b0 = 3;
  if (((pFVar2 <= &local_d0) &&
      (&local_d0 <
       (FText *)((longlong)pFVar2 + (longlong)(this->RegisteredPrimaryFalloffTypes).ArrayMax * 0x28)
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->RegisteredPrimaryFalloffTypes).ArrayNum;
  if (iVar5 == (this->RegisteredPrimaryFalloffTypes).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,
                       &(this->RegisteredPrimaryFalloffTypes).ArrayMax);
  }
  (this->RegisteredPrimaryFalloffTypes).ArrayNum = iVar5 + 1;
  pFVar2 = (FText *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FText::FText(pFVar2,&local_d0);
  pFVar2[1].TextData.Reference = (ITextData *)0x0;
  pFVar2[1].TextData.Reference = (ITextData *)local_c0.Data.AllocatorInstance.Data;
  pFVar2[1].Flags = local_c0.Data.ArrayNum;
  *(int *)&pFVar2[1].field_0xc = local_c0.Data.ArrayMax;
  *(undefined4 *)&pFVar2[2].TextData.Reference = local_b0;
  local_c0.Data.ArrayNum = 0;
  local_c0.Data.ArrayMax = 0;
  local_c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_d0.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_d0.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText(&local_a8,L"UMeshSculptToolBase",L"BoxSmooth",L"BoxSmooth");
  ::FString::FString(&local_98,L"BoxSmooth");
  pFVar2 = (FText *)(pTVar1->AllocatorInstance).Data;
  local_88 = 4;
  if (((pFVar2 <= &local_a8) &&
      (&local_a8 <
       (FText *)((longlong)pFVar2 + (longlong)(this->RegisteredPrimaryFalloffTypes).ArrayMax * 0x28)
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->RegisteredPrimaryFalloffTypes).ArrayNum;
  if (iVar5 == (this->RegisteredPrimaryFalloffTypes).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,
                       &(this->RegisteredPrimaryFalloffTypes).ArrayMax);
  }
  (this->RegisteredPrimaryFalloffTypes).ArrayNum = iVar5 + 1;
  pFVar2 = (FText *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FText::FText(pFVar2,&local_a8);
  pFVar2[1].TextData.Reference = (ITextData *)0x0;
  pFVar2[1].TextData.Reference = (ITextData *)local_98.Data.AllocatorInstance.Data;
  pFVar2[1].Flags = local_98.Data.ArrayNum;
  *(int *)&pFVar2[1].field_0xc = local_98.Data.ArrayMax;
  *(undefined4 *)&pFVar2[2].TextData.Reference = local_88;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_a8.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText(&local_80,L"UMeshSculptToolBase",L"BoxLinear",L"BoxLinear");
  ::FString::FString(&local_70,L"BoxLinear");
  pFVar2 = (FText *)(pTVar1->AllocatorInstance).Data;
  local_60 = 5;
  if (((pFVar2 <= &local_80) &&
      (&local_80 <
       (FText *)((longlong)pFVar2 + (longlong)(this->RegisteredPrimaryFalloffTypes).ArrayMax * 0x28)
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->RegisteredPrimaryFalloffTypes).ArrayNum;
  if (iVar5 == (this->RegisteredPrimaryFalloffTypes).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,
                       &(this->RegisteredPrimaryFalloffTypes).ArrayMax);
  }
  (this->RegisteredPrimaryFalloffTypes).ArrayNum = iVar5 + 1;
  pFVar2 = (FText *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FText::FText(pFVar2,&local_80);
  pFVar2[1].TextData.Reference = (ITextData *)0x0;
  pFVar2[1].TextData.Reference = (ITextData *)local_70.Data.AllocatorInstance.Data;
  pFVar2[1].Flags = local_70.Data.ArrayNum;
  *(int *)&pFVar2[1].field_0xc = local_70.Data.ArrayMax;
  *(undefined4 *)&pFVar2[2].TextData.Reference = local_60;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_80.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText
            (&local_58,L"UMeshSculptToolBase",L"BoxInverse",L"BoxInverse");
  ::FString::FString(&local_48,L"BoxInverse");
  pFVar2 = (FText *)(pTVar1->AllocatorInstance).Data;
  local_38 = 6;
  if (((pFVar2 <= &local_58) &&
      (&local_58 <
       (FText *)((longlong)pFVar2 + (longlong)(this->RegisteredPrimaryFalloffTypes).ArrayMax * 0x28)
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->RegisteredPrimaryFalloffTypes).ArrayNum;
  if (iVar5 == (this->RegisteredPrimaryFalloffTypes).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,
                       &(this->RegisteredPrimaryFalloffTypes).ArrayMax);
  }
  (this->RegisteredPrimaryFalloffTypes).ArrayNum = iVar5 + 1;
  pFVar2 = (FText *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FText::FText(pFVar2,&local_58);
  pFVar2[1].TextData.Reference = (ITextData *)0x0;
  pFVar2[1].TextData.Reference = (ITextData *)local_48.Data.AllocatorInstance.Data;
  pFVar2[1].Flags = local_48.Data.ArrayNum;
  *(int *)&pFVar2[1].field_0xc = local_48.Data.ArrayMax;
  *(undefined4 *)&pFVar2[2].TextData.Reference = local_38;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  FText::AsLocalizable_Advanced_LocText(&local_30,L"UMeshSculptToolBase",L"BoxRound",L"BoxRound");
  ::FString::FString(&local_20,L"BoxRound");
  pFVar2 = (FText *)(pTVar1->AllocatorInstance).Data;
  local_10 = 7;
  if (((pFVar2 <= &local_30) &&
      (&local_30 <
       (FText *)((longlong)pFVar2 + (longlong)(this->RegisteredPrimaryFalloffTypes).ArrayMax * 0x28)
      )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->RegisteredPrimaryFalloffTypes).ArrayNum;
  if (iVar5 == (this->RegisteredPrimaryFalloffTypes).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&pTVar1->AllocatorInstance,
                       &(this->RegisteredPrimaryFalloffTypes).ArrayMax);
  }
  (this->RegisteredPrimaryFalloffTypes).ArrayNum = iVar5 + 1;
  pFVar2 = (FText *)((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x28);
  FText::FText(pFVar2,&local_30);
  pFVar2[1].TextData.Reference = (ITextData *)0x0;
  pFVar2[1].TextData.Reference = (ITextData *)local_20.Data.AllocatorInstance.Data;
  pFVar2[1].Flags = local_20.Data.ArrayNum;
  *(int *)&pFVar2[1].field_0xc = local_20.Data.ArrayMax;
  *(undefined4 *)&pFVar2[2].TextData.Reference = local_10;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_30.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
  }
  return;
}

// Render @ 14cd1b6b0

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
UMeshSculptToolBase::Render(UMeshSculptToolBase *this,IToolsContextRenderAPI *param_1)

{
  UMaterialInstanceDynamic *this_00;
  UWorkPlaneProperties *pUVar1;
  double dVar2;
  char cVar3;
  longlong *plVar4;
  FName *pFVar5;
  FPrimitiveDrawInterface *pFVar6;
  FName local_res8;
  TVector<double>_u_0 local_b8;
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  FViewCameraState local_78;
  
  UInteractiveTool::Render((UInteractiveTool *)this,param_1);
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x398))(plVar4);
  (**(code **)(*plVar4 + 0x18))(plVar4,&this->CameraState);
  (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_78);
  if ((this->BrushIndicatorMaterial).field0_0x0.DebugPtr != (UMaterialInstanceDynamic *)0x0) {
    dVar2 = ToolSceneQueriesUtil::CalculateDimensionFromVisualAngleD
                      (&local_78,(TVector<double> *)&this->HoverStamp,__real_3ff8000000000000);
    this_00 = (this->BrushIndicatorMaterial).field0_0x0.DebugPtr;
    pFVar5 = ::FName::FName(&local_res8,L"FalloffWidth");
    UMaterialInstanceDynamic::SetScalarParameterValue(this_00,*pFVar5,(float)dVar2);
  }
  cVar3 = (**(code **)(this->_padding_ + 0x670))(this);
  if ((cVar3 != '\0') && (this->bDrawWorkPlaneGridLines != false)) {
    pFVar6 = (FPrimitiveDrawInterface *)(**(code **)((longlong)*param_1 + 8))(param_1);
    pUVar1 = (this->GizmoProperties).field0_0x0.DebugPtr;
    local_res8.ComparisonIndex.Value = 0x20808080;
    local_b8._s_0.X = (pUVar1->Position).field0_0x0._s_0.X;
    local_b8._s_0.Y = (pUVar1->Position).field0_0x0._s_0.Y;
    local_b8._s_0.Z = (pUVar1->Position).field0_0x0._s_0.Z;
    local_a0 = (pUVar1->Rotation).X;
    dStack_98 = (pUVar1->Rotation).Y;
    local_90 = (pUVar1->Rotation).Z;
    dStack_88 = (pUVar1->Rotation).W;
    MeshDebugDraw::DrawSimpleFixedScreenAreaGrid
              (&local_78,(TFrame3<double> *)&local_b8._s_0,10,__real_4046800000000000,
               local_78.HorizontalFOVDegrees * __real_3c360b61 * __real_3f000000,(FColor)0x20808080,
               false,pFVar6,&UE::Math::TTransform<double>::Identity);
  }
  return;
}

// ResetStrokeTime @ 14cd1c3e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::ResetStrokeTime(UMeshSculptToolBase *this)

{
  this->ActiveStrokeTime = 0.0;
  this->LastFlowTimeStamp = 0;
  this->LastSpacingTimestamp = 0;
  this->ActiveStrokePathArcLen = 0.0;
  return;
}

// RestoreAllBrushTypeProperties @ 14cd1c400

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
UMeshSculptToolBase::RestoreAllBrushTypeProperties
          (UMeshSculptToolBase *this,UInteractiveTool *param_1)

{
  undefined1 *puVar1;
  TMap<int,TObjectPtr<UMeshSculptBrushOpProps>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMeshSculptBrushOpProps>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  UObject *pUVar5;
  code *pcVar6;
  TMap<int,TObjectPtr<UMeshSculptBrushOpProps>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMeshSculptBrushOpProps>,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_168;
  undefined4 uStack_134;
  undefined4 uStack_ec;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TMap<int,TObjectPtr<UMeshSculptBrushOpProps>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMeshSculptBrushOpProps>,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FString local_88;
  FString local_78 [2];
  undefined4 local_4c;
  
  puVar1 = &(this->BrushOpPropSets).field_0x10;
  iVar4 = *(int *)&(this->BrushOpPropSets).field_0x28;
  local_168 = 1;
  iVar14 = 0;
  iVar16 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->BrushOpPropSets).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar9 = *puVar17;
    iVar16 = 0;
    while (uVar9 == 0) {
      lVar12 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar9 = 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cd1c4be;
      uVar9 = puVar17[lVar12 + 1];
    }
    uVar9 = -uVar9 & uVar9;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = iVar16 + -1 + (int)lVar12;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_14cd1c4be:
  uVar13 = *(uint *)&(this->BrushOpPropSets).field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_e0._padding_ = CONCAT44(uVar9,iVar14);
  TStack_e0.CurrentBitIndex = iVar10;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_e0._28_4_ = local_4c;
  TStack_e0.BaseBitIndex = iVar16;
  uStack_c0 = CONCAT44(uStack_134,
                       *(int *)&(this->BrushOpPropSets).field_0x8 -
                       *(int *)&(this->BrushOpPropSets).field_0x34);
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = *(uint *)&(this->BrushOpPropSets).field_0x28;
  if (uVar13 != uVar9) {
    puVar15 = *(undefined1 **)&(this->BrushOpPropSets).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cd1c5f0;
      uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar13 = (int)lVar12 + -1 + uVar18;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_14cd1c5f0:
  while( true ) {
    if (*(int *)&(this->BrushOpPropSets).field_0x8 - *(int *)&(this->BrushOpPropSets).field_0x34 !=
        (int)uStack_c0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMeshSculptBrushOpProps>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_e0.CurrentBitIndex == uVar13) &&
       (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar5 = *(UObject **)
              (*(longlong *)&this->BrushOpPropSets + 8 + (longlong)TStack_e0.CurrentBitIndex * 0x18)
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    pcVar6 = *(code **)(*(longlong *)pUVar5 + 0x2b8);
    ::FString::FString(&local_88,L"");
    (*pcVar6)(pUVar5,param_1,&local_88);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
  iVar14 = 0;
  iVar16 = 0;
  puVar1 = &(this->SecondaryBrushOpPropSets).field_0x10;
  iVar4 = *(int *)&(this->SecondaryBrushOpPropSets).field_0x28;
  pTVar2 = &this->SecondaryBrushOpPropSets;
  iVar11 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->SecondaryBrushOpPropSets).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar9 = *puVar17;
    while (uVar9 == 0) {
      lVar12 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar11 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cd1c721;
      uVar9 = puVar17[lVar12 + 1];
    }
    local_168 = -uVar9 & uVar9;
    uVar3 = (ulonglong)local_168 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = iVar16 + -1 + (int)lVar12;
    if (iVar4 < iVar11) {
      iVar11 = iVar4;
    }
  }
LAB_14cd1c721:
  uVar9 = *(uint *)&(this->SecondaryBrushOpPropSets).field_0x28;
  TStack_b0._padding_ = CONCAT44(local_168,iVar14);
  uVar13 = uVar9 & 0xffffffe0;
  TStack_b0.CurrentBitIndex = iVar11;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar9 >> 5;
  TStack_b0._28_4_ = iVar10;
  TStack_b0.BaseBitIndex = iVar16;
  uStack_90 = CONCAT44(uStack_ec,
                       *(int *)&(this->SecondaryBrushOpPropSets).field_0x8 -
                       *(int *)&(this->SecondaryBrushOpPropSets).field_0x34);
  local_b8 = pTVar2;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar4 < (int)uVar9)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar18 = *(uint *)&(this->SecondaryBrushOpPropSets).field_0x28;
  if (uVar9 != uVar18) {
    puVar15 = *(undefined1 **)&(this->SecondaryBrushOpPropSets).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar9 == 0) {
      lVar12 = (longlong)iVar14;
      uVar13 = uVar13 + 0x20;
      iVar14 = iVar14 + 1;
      uVar9 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14cd1c820;
      uVar9 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar9 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar18 < (int)uVar9) {
      uVar9 = uVar18;
    }
  }
LAB_14cd1c820:
  while( true ) {
    pTVar7 = local_b8;
    if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMeshSculptBrushOpProps>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_b0.CurrentBitIndex == uVar9) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    pUVar5 = *(UObject **)(*(longlong *)pTVar7 + 8 + (longlong)TStack_b0.CurrentBitIndex * 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    pcVar6 = *(code **)(*(longlong *)pUVar5 + 0x2b8);
    ::FString::FString(local_78,L"");
    (*pcVar6)(pUVar5,param_1,local_78);
    if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  return;
}

// SaveActiveStrokeModifiers @ 14cd1d140

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::SaveActiveStrokeModifiers(UMeshSculptToolBase *this)

{
  bool bVar1;
  
  bVar1 = (bool)(**(code **)(this->_padding_ + 1000))();
  this->bSmoothing = bVar1;
  bVar1 = (bool)(**(code **)(this->_padding_ + 0x3f8))(this);
  this->bInvert = bVar1;
  return;
}

// SaveAllBrushTypeProperties @ 14cd1d180

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
UMeshSculptToolBase::SaveAllBrushTypeProperties(UMeshSculptToolBase *this,UInteractiveTool *param_1)

{
  undefined1 *puVar1;
  TMap<int,TObjectPtr<UMeshSculptBrushOpProps>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMeshSculptBrushOpProps>,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  UObject *pUVar5;
  code *pcVar6;
  TMap<int,TObjectPtr<UMeshSculptBrushOpProps>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMeshSculptBrushOpProps>,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_168;
  undefined4 uStack_134;
  undefined4 uStack_ec;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TMap<int,TObjectPtr<UMeshSculptBrushOpProps>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UMeshSculptBrushOpProps>,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  FString local_88;
  FString local_78 [2];
  undefined4 local_4c;
  
  puVar1 = &(this->BrushOpPropSets).field_0x10;
  iVar4 = *(int *)&(this->BrushOpPropSets).field_0x28;
  local_168 = 1;
  iVar14 = 0;
  iVar16 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->BrushOpPropSets).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar9 = *puVar17;
    iVar16 = 0;
    while (uVar9 == 0) {
      lVar12 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      uVar9 = 1;
      iVar10 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cd1d23e;
      uVar9 = puVar17[lVar12 + 1];
    }
    uVar9 = -uVar9 & uVar9;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar10 = iVar16 + -1 + (int)lVar12;
    if (iVar4 < iVar10) {
      iVar10 = iVar4;
    }
  }
LAB_14cd1d23e:
  uVar13 = *(uint *)&(this->BrushOpPropSets).field_0x28;
  uVar18 = uVar13 & 0xffffffe0;
  TStack_e0._padding_ = CONCAT44(uVar9,iVar14);
  TStack_e0.CurrentBitIndex = iVar10;
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_e0._28_4_ = local_4c;
  TStack_e0.BaseBitIndex = iVar16;
  uStack_c0 = CONCAT44(uStack_134,
                       *(int *)&(this->BrushOpPropSets).field_0x8 -
                       *(int *)&(this->BrushOpPropSets).field_0x34);
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar9 = *(uint *)&(this->BrushOpPropSets).field_0x28;
  if (uVar13 != uVar9) {
    puVar15 = *(undefined1 **)&(this->BrushOpPropSets).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar12 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cd1d370;
      uVar13 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar13 = (int)lVar12 + -1 + uVar18;
    if ((int)uVar9 < (int)uVar13) {
      uVar13 = uVar9;
    }
  }
LAB_14cd1d370:
  while( true ) {
    if (*(int *)&(this->BrushOpPropSets).field_0x8 - *(int *)&(this->BrushOpPropSets).field_0x34 !=
        (int)uStack_c0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMeshSculptBrushOpProps>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_e0.CurrentBitIndex == uVar13) &&
       (TStack_e0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pUVar5 = *(UObject **)
              (*(longlong *)&this->BrushOpPropSets + 8 + (longlong)TStack_e0.CurrentBitIndex * 0x18)
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    pcVar6 = *(code **)(*(longlong *)pUVar5 + 0x2b0);
    ::FString::FString(&local_88,L"");
    (*pcVar6)(pUVar5,param_1,&local_88);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
  iVar14 = 0;
  iVar16 = 0;
  puVar1 = &(this->SecondaryBrushOpPropSets).field_0x10;
  iVar4 = *(int *)&(this->SecondaryBrushOpPropSets).field_0x28;
  pTVar2 = &this->SecondaryBrushOpPropSets;
  iVar11 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->SecondaryBrushOpPropSets).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar9 = *puVar17;
    while (uVar9 == 0) {
      lVar12 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar11 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cd1d4a1;
      uVar9 = puVar17[lVar12 + 1];
    }
    local_168 = -uVar9 & uVar9;
    uVar3 = (ulonglong)local_168 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = iVar16 + -1 + (int)lVar12;
    if (iVar4 < iVar11) {
      iVar11 = iVar4;
    }
  }
LAB_14cd1d4a1:
  uVar9 = *(uint *)&(this->SecondaryBrushOpPropSets).field_0x28;
  TStack_b0._padding_ = CONCAT44(local_168,iVar14);
  uVar13 = uVar9 & 0xffffffe0;
  TStack_b0.CurrentBitIndex = iVar11;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar9 >> 5;
  TStack_b0._28_4_ = iVar10;
  TStack_b0.BaseBitIndex = iVar16;
  uStack_90 = CONCAT44(uStack_ec,
                       *(int *)&(this->SecondaryBrushOpPropSets).field_0x8 -
                       *(int *)&(this->SecondaryBrushOpPropSets).field_0x34);
  local_b8 = pTVar2;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar4 < (int)uVar9)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar18 = *(uint *)&(this->SecondaryBrushOpPropSets).field_0x28;
  if (uVar9 != uVar18) {
    puVar15 = *(undefined1 **)&(this->SecondaryBrushOpPropSets).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar9 == 0) {
      lVar12 = (longlong)iVar14;
      uVar13 = uVar13 + 0x20;
      iVar14 = iVar14 + 1;
      uVar9 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14cd1d5a0;
      uVar9 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar9 = (int)lVar12 + -1 + uVar13;
    if ((int)uVar18 < (int)uVar9) {
      uVar9 = uVar18;
    }
  }
LAB_14cd1d5a0:
  while( true ) {
    pTVar7 = local_b8;
    if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
      `TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UMeshSculptBrushOpProps>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_b0.CurrentBitIndex == uVar9) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    break;
    pUVar5 = *(UObject **)(*(longlong *)pTVar7 + 8 + (longlong)TStack_b0.CurrentBitIndex * 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    pcVar6 = *(code **)(*(longlong *)pUVar5 + 0x2b0);
    ::FString::FString(local_78,L"");
    (*pcVar6)(pUVar5,param_1,local_78);
    if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  return;
}

// SetActivePrimaryBrushType @ 14cd1dad0

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
UMeshSculptToolBase::SetActivePrimaryBrushType(UMeshSculptToolBase *this,int param_1)

{
  TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> *pTVar1;
  longlong lVar2;
  FMeshSculptBrushOp *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMeshSculptFallofFunc *pFVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *local_res8;
  UMeshSculptBrushOpProps *local_res18 [2];
  
  if (*(int *)&(this->BrushOpFactories).field_0x8 != *(int *)&(this->BrushOpFactories).field_0x34) {
    puVar11 = *(undefined1 **)&(this->BrushOpFactories).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->BrushOpFactories).field_0x38;
    }
    iVar9 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->BrushOpFactories).field_0x48 - 1U & param_1) * 4);
    if (iVar9 != -1) {
      do {
        lVar2 = *(longlong *)&this->BrushOpFactories + (longlong)iVar9 * 0x18;
        if (*(int *)(*(longlong *)&this->BrushOpFactories + (longlong)iVar9 * 0x18) == param_1) {
          puVar10 = (undefined8 *)(lVar2 + 8);
          if (lVar2 == 0) {
            puVar10 = (undefined8 *)0x0;
          }
          if (puVar10 != (undefined8 *)0x0) {
            if (this->PrimaryVisiblePropSet != (UMeshSculptBrushOpProps *)0x0) {
              (**(code **)(this->_padding_ + 0x338))(this,this->PrimaryVisiblePropSet,0);
              this->PrimaryVisiblePropSet = (UMeshSculptBrushOpProps *)0x0;
            }
            puVar10 = (undefined8 *)
                      (**(code **)(*(longlong *)*puVar10 + 8))((longlong *)*puVar10,&local_res8);
            pTVar1 = &this->PrimaryBrushOp;
            if (pTVar1 != (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> *)
                          puVar10) {
              pFVar3 = pTVar1->Ptr;
              pTVar1->Ptr = (FMeshSculptBrushOp *)*puVar10;
              *puVar10 = 0;
              if (pFVar3 != (FMeshSculptBrushOp *)0x0) {
                (**(code **)pFVar3->_padding_)(pFVar3,1);
              }
            }
            if (local_res8 != (undefined8 *)0x0) {
              (**(code **)*local_res8)(local_res8,1);
            }
            pTVar4 = (this->PrimaryFalloff).SharedReferenceCount.ReferenceController;
            pFVar3 = pTVar1->Ptr;
            pFVar5 = (this->PrimaryFalloff).Object;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar7 = (pFVar3->Falloff).SharedReferenceCount.ReferenceController;
            (pFVar3->Falloff).Object = pFVar5;
            (pFVar3->Falloff).SharedReferenceCount.ReferenceController = pTVar4;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar7);
            if (*(int *)&(this->BrushOpPropSets).field_0x8 ==
                *(int *)&(this->BrushOpPropSets).field_0x34) {
              return;
            }
            puVar11 = *(undefined1 **)&(this->BrushOpPropSets).field_0x40;
            if (puVar11 == (undefined1 *)0x0) {
              puVar11 = &(this->BrushOpPropSets).field_0x38;
            }
            iVar9 = *(int *)(puVar11 +
                            (ulonglong)(*(int *)&(this->BrushOpPropSets).field_0x48 - 1U & param_1)
                            * 4);
            if (iVar9 == -1) {
              return;
            }
            while (lVar2 = *(longlong *)&this->BrushOpPropSets + (longlong)iVar9 * 0x18,
                  *(int *)(*(longlong *)&this->BrushOpPropSets + (longlong)iVar9 * 0x18) != param_1)
            {
              iVar9 = *(int *)(lVar2 + 0x10);
              if (iVar9 == -1) {
                return;
              }
            }
            puVar10 = (undefined8 *)(lVar2 + 8);
            if (lVar2 == 0) {
              puVar10 = (undefined8 *)0x0;
            }
            if (puVar10 == (undefined8 *)0x0) {
              return;
            }
            (**(code **)(this->_padding_ + 0x338))(this,*puVar10,this->bBrushOpPropsVisible);
            local_res18[0] = (UMeshSculptBrushOpProps *)*puVar10;
            this->PrimaryVisiblePropSet = local_res18[0];
            pFVar3 = pTVar1->Ptr;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_res18[0] != (UMeshSculptBrushOpProps *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)local_res18[0]);
            }
            FWeakObjectPtr::operator=(&(pFVar3->PropertySet).WeakPtr,(FObjectPtr)local_res18);
            return;
          }
          break;
        }
        iVar9 = *(int *)(lVar2 + 0x10);
      } while (iVar9 != -1);
    }
  }
  bVar8 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_304361139444121115>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Sculpting\\MeshSculptToolBase.cpp"
                     ,0x1e5,"false");
  if (!bVar8) {
    return;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// SetActiveSecondaryBrushType @ 14cd1dd10

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
UMeshSculptToolBase::SetActiveSecondaryBrushType(UMeshSculptToolBase *this,int param_1)

{
  TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> *pTVar1;
  longlong lVar2;
  FMeshSculptBrushOp *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMeshSculptFallofFunc *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined ***pppuVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  undefined8 *puVar15;
  TSharedRef<FMeshSculptFallofFunc,1> *pTVar16;
  undefined ***pppuVar17;
  undefined1 *puVar18;
  undefined1 auStackY_c8 [32];
  undefined8 *local_98;
  UMeshSculptBrushOpProps *local_90;
  FMeshSculptFallofFunc *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  TSharedRef<FMeshSculptFallofFunc,1> local_78;
  code *local_68;
  undefined8 uStack_60;
  undefined **local_58;
  code *pcStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (*(int *)&(this->SecondaryBrushOpFactories).field_0x8 !=
      *(int *)&(this->SecondaryBrushOpFactories).field_0x34) {
    puVar18 = *(undefined1 **)&(this->SecondaryBrushOpFactories).field_0x40;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->SecondaryBrushOpFactories).field_0x38;
    }
    iVar14 = *(int *)(puVar18 +
                     (ulonglong)
                     (*(int *)&(this->SecondaryBrushOpFactories).field_0x48 - 1U & param_1) * 4);
    if (iVar14 != -1) {
      do {
        lVar2 = *(longlong *)&this->SecondaryBrushOpFactories + (longlong)iVar14 * 0x18;
        if (*(int *)(*(longlong *)&this->SecondaryBrushOpFactories + (longlong)iVar14 * 0x18) ==
            param_1) {
          puVar15 = (undefined8 *)(lVar2 + 8);
          if (lVar2 == 0) {
            puVar15 = (undefined8 *)0x0;
          }
          if (puVar15 != (undefined8 *)0x0) {
            if (this->SecondaryVisiblePropSet != (UMeshSculptBrushOpProps *)0x0) {
              (**(code **)(this->_padding_ + 0x338))(this,this->SecondaryVisiblePropSet,0);
              this->SecondaryVisiblePropSet = (UMeshSculptBrushOpProps *)0x0;
            }
            puVar15 = (undefined8 *)
                      (**(code **)(*(longlong *)*puVar15 + 8))((longlong *)*puVar15,&local_98);
            pTVar1 = &this->SecondaryBrushOp;
            if (pTVar1 != (TUniquePtr<FMeshSculptBrushOp,TDefaultDelete<FMeshSculptBrushOp>_> *)
                          puVar15) {
              pFVar3 = pTVar1->Ptr;
              pTVar1->Ptr = (FMeshSculptBrushOp *)*puVar15;
              *puVar15 = 0;
              if (pFVar3 != (FMeshSculptBrushOp *)0x0) {
                (**(code **)pFVar3->_padding_)(pFVar3,1);
              }
            }
            if (local_98 != (undefined8 *)0x0) {
              (**(code **)*local_98)(local_98,1);
            }
            pTVar16 = MakeShared<FMeshSculptFallofFunc,1>(&local_78);
            pTVar4 = (pTVar16->SharedReferenceCount).ReferenceController;
            pFVar5 = pTVar16->Object;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_78.SharedReferenceCount.ReferenceController);
            uStack_40 = (undefined ***)0x0;
            local_58 = &
                       ___7__TFunction_OwnedObject_P6ANAEBUFSculptBrushStamp__AEBU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
            ;
            pcStack_50 = `UE::SculptFalloffs::MakeStandardSmoothFalloff'::__l2::<lambda_1>::
                         <lambda_invoker_cdecl>;
            local_68 = UE::Core::Private::Function::
                       TFunctionRefCaller<double_(__cdecl*)(FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&),double,FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&>
                       ::Call;
            if ((pFVar5 == (FMeshSculptFallofFunc *)0x0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar13)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar2 = *(longlong *)&pFVar5->FalloffFunc;
            uVar10 = *(undefined8 *)&(pFVar5->FalloffFunc).field_0x8;
            ppuVar11 = *(undefined ***)&(pFVar5->FalloffFunc).field_0x10;
            uVar12 = *(undefined8 *)&(pFVar5->FalloffFunc).field_0x18;
            uVar7 = *(undefined8 *)&(pFVar5->FalloffFunc).field_0x20;
            pppuVar8 = *(undefined ****)&(pFVar5->FalloffFunc).field_0x28;
            *(code **)&pFVar5->FalloffFunc = local_68;
            *(undefined8 *)&(pFVar5->FalloffFunc).field_0x8 = uStack_60;
            *(undefined ***)&(pFVar5->FalloffFunc).field_0x10 = local_58;
            *(code **)&(pFVar5->FalloffFunc).field_0x18 = pcStack_50;
            *(undefined4 *)&(pFVar5->FalloffFunc).field_0x20 = (undefined4)local_48;
            *(undefined4 *)&(pFVar5->FalloffFunc).field_0x24 = local_48._4_4_;
            *(undefined4 *)&(pFVar5->FalloffFunc).field_0x28 = (undefined4)uStack_40;
            *(undefined4 *)&(pFVar5->FalloffFunc).field_0x2c = uStack_40._4_4_;
            local_58 = ppuVar11;
            pcStack_50 = (code *)uVar12;
            local_48 = uVar7;
            uStack_40 = pppuVar8;
            local_68 = (code *)lVar2;
            uStack_60 = uVar10;
            if (lVar2 != 0) {
              pppuVar17 = &local_58;
              if (pppuVar8 != (undefined ***)0x0) {
                pppuVar17 = pppuVar8;
              }
              (*(code *)(*pppuVar17)[2])();
            }
            pFVar3 = pTVar1->Ptr;
            if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
              UNLOCK();
            }
            pTVar9 = (pFVar3->Falloff).SharedReferenceCount.ReferenceController;
            (pFVar3->Falloff).Object = pFVar5;
            (pFVar3->Falloff).SharedReferenceCount.ReferenceController = pTVar4;
            local_88 = pFVar5;
            pTStack_80 = pTVar4;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar9);
            if (*(int *)&(this->SecondaryBrushOpPropSets).field_0x8 !=
                *(int *)&(this->SecondaryBrushOpPropSets).field_0x34) {
              puVar18 = *(undefined1 **)&(this->SecondaryBrushOpPropSets).field_0x40;
              if (puVar18 == (undefined1 *)0x0) {
                puVar18 = &(this->SecondaryBrushOpPropSets).field_0x38;
              }
              iVar14 = *(int *)(puVar18 +
                               (ulonglong)
                               (*(int *)&(this->SecondaryBrushOpPropSets).field_0x48 - 1U & param_1)
                               * 4);
              if (iVar14 != -1) {
                while (lVar2 = *(longlong *)&this->SecondaryBrushOpPropSets +
                               (longlong)iVar14 * 0x18,
                      *(int *)(*(longlong *)&this->SecondaryBrushOpPropSets +
                              (longlong)iVar14 * 0x18) != param_1) {
                  iVar14 = *(int *)(lVar2 + 0x10);
                  if (iVar14 == -1) {
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(pTVar4);
                    return;
                  }
                }
                puVar15 = (undefined8 *)(lVar2 + 8);
                if (lVar2 == 0) {
                  puVar15 = (undefined8 *)0x0;
                }
                if (puVar15 != (undefined8 *)0x0) {
                  (**(code **)(this->_padding_ + 0x338))(this,*puVar15,this->bBrushOpPropsVisible);
                  local_90 = (UMeshSculptBrushOpProps *)*puVar15;
                  this->SecondaryVisiblePropSet = local_90;
                  pFVar3 = (this->SecondaryBrushOp).Ptr;
                  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                     (local_90 != (UMeshSculptBrushOpProps *)0x0)) {
                    UE::GC::MarkAsReachable((UObject *)local_90);
                  }
                  FWeakObjectPtr::operator=(&(pFVar3->PropertySet).WeakPtr,(FObjectPtr)&local_90);
                }
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar4);
            return;
          }
          break;
        }
        iVar14 = *(int *)(lVar2 + 0x10);
      } while (iVar14 != -1);
    }
  }
  bVar13 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_304361139444121085>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Sculpting\\MeshSculptToolBase.cpp"
                      ,0x203,"false");
  if (!bVar13) {
    return;
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// SetBrushOpPropsVisibility @ 14cd1e1c0

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
UMeshSculptToolBase::SetBrushOpPropsVisibility(UMeshSculptToolBase *this,bool param_1)

{
  this->bBrushOpPropsVisible = param_1;
  if (this->PrimaryVisiblePropSet != (UMeshSculptBrushOpProps *)0x0) {
    (**(code **)(this->_padding_ + 0x338))(this,this->PrimaryVisiblePropSet,param_1);
  }
  if (this->SecondaryVisiblePropSet != (UMeshSculptBrushOpProps *)0x0) {
    (**(code **)(this->_padding_ + 0x338))(this,this->SecondaryVisiblePropSet,param_1);
  }
  return;
}

// SetBrushStrengthPressureEnabled @ 14cd1e220

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
UMeshSculptToolBase::SetBrushStrengthPressureEnabled(UMeshSculptToolBase *this,bool param_1)

{
  bool bVar1;
  longlong *plVar2;
  UObject *pUVar3;
  
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x478))();
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(*plVar2 + 8));
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar2 + 8));
    pUVar3[4].field_0x10 = param_1;
  }
  return;
}

// SetFixedSculptPlaneFromWorldPos @ 14cd1e2e0

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
UMeshSculptToolBase::SetFixedSculptPlaneFromWorldPos
          (UMeshSculptToolBase *this,TVector<double> *param_1,TVector<double> *param_2,
          EPendingWorkPlaneUpdate param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  UWorkPlaneProperties *pUVar4;
  code *pcVar5;
  UCombinedTransformGizmo *pUVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
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
    (**(code **)(this->_padding_ + 0x690))();
    dVar8 = __real_3ff0000000000000;
    pUVar4 = (this->GizmoProperties).field0_0x0.DebugPtr;
    local_128._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    dVar1 = (pUVar4->Rotation).Y;
    dVar2 = (pUVar4->Rotation).X;
    dVar3 = (pUVar4->Rotation).Z;
    TStack_d0._s_0.W = (pUVar4->Rotation).W;
    uVar15 = SUB84(TStack_d0._s_0.W,0);
    uVar16 = (uint)((ulonglong)TStack_d0._s_0.W >> 0x20);
    local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_128._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_128._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_108._s_0.X = (dVar1 + dVar1) * TStack_d0._s_0.W + (dVar3 + dVar3) * dVar2;
    local_108._s_0.Y = (dVar3 + dVar3) * dVar1 - (dVar2 + dVar2) * TStack_d0._s_0.W;
    local_148._s_0.X = 0.0;
    local_148._s_0.W = __real_3ff0000000000000;
    local_148._s_0.Y = 0.0;
    local_148._s_0.Z = 0.0;
    local_108._s_0.Z = __real_3ff0000000000000 - ((dVar2 + dVar2) * dVar2 + (dVar1 + dVar1) * dVar1)
    ;
    TStack_d0._s_0.X = dVar2;
    TStack_d0._s_0.Y = dVar1;
    TStack_d0._s_0.Z = dVar3;
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_148._s_0,(TVector<double> *)&local_108._s_0,
               (TVector<double> *)&local_128._s_0);
    UE::Geometry::operator*<double>
              ((TQuaternion<double> *)&local_128._s_0,(TQuaternion<double> *)&local_148._s_0,
               (TQuaternion<double> *)&TStack_d0._s_0);
    auVar11._0_8_ = local_128._s_0.X * local_128._s_0.X;
    auVar11._8_8_ = 0;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_128._s_0.W * local_128._s_0.W + local_128._s_0.Z * local_128._s_0.Z +
                   local_128._s_0.Y * local_128._s_0.Y + auVar11._0_8_;
    auVar12 = sqrtpd(auVar11,auVar7);
    dVar9 = (double)((ulonglong)uVar16 << 0x20);
    local_148._s_0.X = dVar2;
    local_148._s_0.Y = dVar1;
    local_148._s_0.Z = dVar3;
    if (0.0 < auVar12._0_8_) {
      dVar8 = dVar8 / auVar12._0_8_;
      uVar14 = SUB84(local_128._s_0.W * dVar8,0);
      dVar9 = (double)CONCAT44(uVar16,uVar14);
      if (0.0 < dVar8) {
        uVar15 = uVar14;
        dVar9 = local_128._s_0.W * dVar8;
        local_148._s_0.X = local_128._s_0.X * dVar8;
        local_148._s_0.Y = local_128._s_0.Y * dVar8;
        local_148._s_0.Z = local_128._s_0.Z * dVar8;
      }
    }
    local_148._s_0.W = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),uVar15);
    (**(code **)(this->_padding_ + 0x698))(this,&local_148);
  }
  else {
    pcVar5 = *(code **)(this->_padding_ + 0x690);
    if (param_3 == MoveToHitPositionViewAligned) {
      (*pcVar5)();
      pUVar4 = (this->GizmoProperties).field0_0x0.DebugPtr;
      local_128._s_0.Z = 0.0;
      dVar1 = (pUVar4->Rotation).X;
      dVar2 = (pUVar4->Rotation).Y;
      dVar3 = (pUVar4->Rotation).Z;
      dVar8 = (pUVar4->Rotation).W;
      uVar16 = (uint)((ulonglong)dVar8 >> 0x20);
      local_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_d8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_128._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_128._s_0.Y = _UNK_150689518;
      TStack_d0._s_0.X = dVar1;
      TStack_d0._s_0.Y = dVar2;
      TStack_d0._s_0.Z = dVar3;
      TStack_d0._s_0.W = dVar8;
      UE::Math::TQuat<double>::RotateVector
                (&(this->CameraState).Orientation,(TVector<double> *)&local_108._s_0,
                 (TVector<double> *)&local_128._s_0);
      dVar9 = __real_3ff0000000000000;
      local_128._s_0.Z =
           (double)CONCAT44((uint)((ulonglong)local_108._16_8_ >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(local_108._s_0.Z,0) ^ (uint)__xmm_80000000000000008000000000000000
                           );
      local_148._s_0.X = 0.0;
      local_128._4_4_ = local_108._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
      local_128._0_4_ = local_108._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
      local_128._12_4_ = local_108._12_4_ ^ _UNK_15066df7c;
      local_128._8_4_ = local_108._8_4_ ^ _UNK_15066df78;
      local_148._s_0.W = __real_3ff0000000000000;
      local_148._s_0.Y = 0.0;
      local_148._s_0.Z = 0.0;
      local_108._s_0.X = (dVar2 + dVar2) * dVar8 + (dVar3 + dVar3) * dVar1;
      local_108._s_0.Y = (dVar3 + dVar3) * dVar2 - (dVar1 + dVar1) * dVar8;
      local_108._s_0.Z =
           __real_3ff0000000000000 - ((dVar1 + dVar1) * dVar1 + (dVar2 + dVar2) * dVar2);
      UE::Geometry::TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)&local_148._s_0,(TVector<double> *)&local_108._s_0,
                 (TVector<double> *)&local_128._s_0);
      UE::Geometry::operator*<double>
                ((TQuaternion<double> *)&local_128._s_0,(TQuaternion<double> *)&local_148._s_0,
                 (TQuaternion<double> *)&TStack_d0._s_0);
      auVar13._0_8_ = local_128._s_0.X * local_128._s_0.X;
      auVar13._8_8_ = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ =
           local_128._s_0.W * local_128._s_0.W + local_128._s_0.Z * local_128._s_0.Z +
           local_128._s_0.Y * local_128._s_0.Y + auVar13._0_8_;
      auVar12 = sqrtpd(auVar13,auVar12);
      uVar15 = SUB84(dVar8,0);
      dVar10 = (double)((ulonglong)uVar16 << 0x20);
      local_148._s_0.X = dVar1;
      local_148._s_0.Y = dVar2;
      local_148._s_0.Z = dVar3;
      if (0.0 < auVar12._0_8_) {
        dVar9 = dVar9 / auVar12._0_8_;
        uVar14 = SUB84(local_128._s_0.W * dVar9,0);
        dVar10 = (double)CONCAT44(uVar16,uVar14);
        if (0.0 < dVar9) {
          uVar15 = uVar14;
          dVar10 = local_128._s_0.W * dVar9;
          local_148._s_0.X = local_128._s_0.X * dVar9;
          local_148._s_0.Y = local_128._s_0.Y * dVar9;
          local_148._s_0.Z = local_128._s_0.Z * dVar9;
        }
      }
      local_148._s_0.W = (double)CONCAT44((int)((ulonglong)dVar10 >> 0x20),uVar15);
      (**(code **)(this->_padding_ + 0x698))(this,&local_148);
    }
    else {
      (*pcVar5)();
    }
  }
  pUVar6 = (this->PlaneTransformGizmo).field0_0x0.DebugPtr;
  if (pUVar6 != (UCombinedTransformGizmo *)0x0) {
    pUVar4 = (this->GizmoProperties).field0_0x0.DebugPtr;
    local_d8 = (pUVar4->Rotation).Z;
    TStack_d0._s_0.X = (pUVar4->Rotation).W;
    local_e8 = (pUVar4->Rotation).X;
    dStack_e0 = (pUVar4->Rotation).Y;
    TStack_d0._s_0.Y = (pUVar4->Position).field0_0x0._s_0.X;
    TStack_d0._s_0.Z = (pUVar4->Position).field0_0x0._s_0.Y;
    TStack_d0._s_0.W = (pUVar4->Position).field0_0x0._s_0.Z;
    local_98 = ___xmm_00000000000000003ff0000000000000;
    dStack_90 = _UNK_150689518;
    uStack_b0 = 0;
    local_a8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_a0 = _UNK_150689688;
    (**(code **)(*(longlong *)pUVar6 + 0x340))(pUVar6,&local_e8,1);
  }
  return;
}

// SetIndicatorVisibility @ 14cd1eb20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::SetIndicatorVisibility(UMeshSculptToolBase *this,bool param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x658))();
  if ((bool)cVar1 != param_1) {
    ((this->BrushIndicator).field0_0x0.DebugPtr)->bVisible = param_1;
    if ((param_1) && (this->bIsVolumetricIndicator != false)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    UPreviewMesh::SetVisible((this->BrushIndicatorMesh).field0_0x0.DebugPtr,bVar2);
  }
  return;
}

// SetPrimaryFalloffType @ 14cd1efe0

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
UMeshSculptToolBase::SetPrimaryFalloffType(UMeshSculptToolBase *this,EMeshSculptFalloffType param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  TSharedRef<FMeshSculptFallofFunc,1> *pTVar8;
  FMeshSculptFallofFunc *pFVar9;
  longlong *plVar10;
  TSharedPtr<FMeshSculptFallofFunc,1> *this_00;
  longlong *plVar11;
  undefined1 auStack_1d8 [32];
  TSharedPtr<FMeshSculptFallofFunc,1> local_1b8;
  TSharedRef<FMeshSculptFallofFunc,1> local_1a8;
  code *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  code *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  code *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  code *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  code *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  code *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  code *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pTVar8 = MakeShared<FMeshSculptFallofFunc,1>(&local_1a8);
  local_1b8.SharedReferenceCount.ReferenceController =
       (pTVar8->SharedReferenceCount).ReferenceController;
  local_1b8.Object = pTVar8->Object;
  if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  this_00 = &this->PrimaryFalloff;
  if (this_00 != &local_1b8) {
    this_00->Object = local_1b8.Object;
    local_1b8.Object = (FMeshSculptFallofFunc *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PrimaryFalloff).SharedReferenceCount,&local_1b8.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  switch(param_1) {
  default:
    uStack_20 = (longlong *)0x0;
    local_38 = &
               ___7__TFunction_OwnedObject_P6ANAEBUFSculptBrushStamp__AEBU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    uStack_30 = `UE::SculptFalloffs::MakeStandardSmoothFalloff'::__l2::<lambda_1>::
                <lambda_invoker_cdecl>;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<double_(__cdecl*)(FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&),double,FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&>
               ::Call;
    if ((this_00->Object == (FMeshSculptFallofFunc *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar9 = this_00->Object;
    lVar3 = *(longlong *)&pFVar9->FalloffFunc;
    uVar4 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x8;
    lVar5 = *(longlong *)&(pFVar9->FalloffFunc).field_0x10;
    uVar6 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x18;
    uVar2 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x20;
    plVar11 = *(longlong **)&(pFVar9->FalloffFunc).field_0x28;
    *(code **)&pFVar9->FalloffFunc = local_48;
    *(undefined8 *)&(pFVar9->FalloffFunc).field_0x8 = uStack_40;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x10 = (undefined4)local_38;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x14 = local_38._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x18 = (undefined4)uStack_30;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x1c = uStack_30._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x20 = (undefined4)local_28;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x24 = local_28._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x28 = (undefined4)uStack_20;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x2c = uStack_20._4_4_;
    local_48 = (code *)lVar3;
    uStack_40 = uVar4;
    local_38 = (undefined **)lVar5;
    uStack_30 = (code *)uVar6;
    local_28 = uVar2;
    uStack_20 = plVar11;
    if (lVar3 == 0) {
      return;
    }
    plVar10 = &local_38;
    break;
  case Linear:
    uStack_170 = (longlong *)0x0;
    local_188 = &
                ___7__TFunction_OwnedObject_P6ANAEBUFSculptBrushStamp__AEBU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    uStack_180 = `UE::SculptFalloffs::MakeLinearFalloff'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_198 = UE::Core::Private::Function::
                TFunctionRefCaller<double_(__cdecl*)(FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&),double,FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&>
                ::Call;
    pFVar9 = TSharedPtr<FMeshSculptFallofFunc,1>::operator->(this_00);
    lVar3 = *(longlong *)&pFVar9->FalloffFunc;
    uVar4 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x8;
    lVar5 = *(longlong *)&(pFVar9->FalloffFunc).field_0x10;
    uVar6 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x18;
    uVar2 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x20;
    plVar11 = *(longlong **)&(pFVar9->FalloffFunc).field_0x28;
    *(code **)&pFVar9->FalloffFunc = local_198;
    *(undefined8 *)&(pFVar9->FalloffFunc).field_0x8 = uStack_190;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x10 = (undefined4)local_188;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x14 = local_188._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x18 = (undefined4)uStack_180;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x1c = uStack_180._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x20 = (undefined4)local_178;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x24 = local_178._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x28 = (undefined4)uStack_170;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x2c = uStack_170._4_4_;
    if (lVar3 == 0) {
      return;
    }
    plVar10 = &local_188;
    local_198 = (code *)lVar3;
    uStack_190 = uVar4;
    local_188 = (undefined **)lVar5;
    uStack_180 = (code *)uVar6;
    local_178 = uVar2;
    uStack_170 = plVar11;
    break;
  case Inverse:
    uStack_140 = (longlong *)0x0;
    local_158 = &
                ___7__TFunction_OwnedObject_P6ANAEBUFSculptBrushStamp__AEBU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    uStack_150 = `UE::SculptFalloffs::MakeInverseFalloff'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_168 = UE::Core::Private::Function::
                TFunctionRefCaller<double_(__cdecl*)(FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&),double,FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&>
                ::Call;
    pFVar9 = TSharedPtr<FMeshSculptFallofFunc,1>::operator->(this_00);
    lVar3 = *(longlong *)&pFVar9->FalloffFunc;
    uVar4 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x8;
    lVar5 = *(longlong *)&(pFVar9->FalloffFunc).field_0x10;
    uVar6 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x18;
    uVar2 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x20;
    plVar11 = *(longlong **)&(pFVar9->FalloffFunc).field_0x28;
    *(code **)&pFVar9->FalloffFunc = local_168;
    *(undefined8 *)&(pFVar9->FalloffFunc).field_0x8 = uStack_160;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x10 = (undefined4)local_158;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x14 = local_158._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x18 = (undefined4)uStack_150;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x1c = uStack_150._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x20 = (undefined4)local_148;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x24 = local_148._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x28 = (undefined4)uStack_140;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x2c = uStack_140._4_4_;
    local_158 = (undefined **)lVar5;
    uStack_150 = (code *)uVar6;
    local_148 = uVar2;
    uStack_140 = plVar11;
    if (lVar3 == 0) {
      return;
    }
    plVar10 = &local_158;
    local_168 = (code *)lVar3;
    uStack_160 = uVar4;
    break;
  case Round:
    uStack_110 = (longlong *)0x0;
    local_128 = &
                ___7__TFunction_OwnedObject_P6ANAEBUFSculptBrushStamp__AEBU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    uStack_120 = `UE::SculptFalloffs::MakeRoundFalloff'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<double_(__cdecl*)(FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&),double,FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&>
                ::Call;
    pFVar9 = TSharedPtr<FMeshSculptFallofFunc,1>::operator->(this_00);
    lVar3 = *(longlong *)&pFVar9->FalloffFunc;
    uVar4 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x8;
    lVar5 = *(longlong *)&(pFVar9->FalloffFunc).field_0x10;
    uVar6 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x18;
    uVar2 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x20;
    plVar11 = *(longlong **)&(pFVar9->FalloffFunc).field_0x28;
    *(code **)&pFVar9->FalloffFunc = local_138;
    *(undefined8 *)&(pFVar9->FalloffFunc).field_0x8 = uStack_130;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x10 = (undefined4)local_128;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x14 = local_128._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x18 = (undefined4)uStack_120;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x1c = uStack_120._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x20 = (undefined4)local_118;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x24 = local_118._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x28 = (undefined4)uStack_110;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x2c = uStack_110._4_4_;
    local_138 = (code *)lVar3;
    uStack_130 = uVar4;
    local_128 = (undefined **)lVar5;
    uStack_120 = (code *)uVar6;
    local_118 = uVar2;
    uStack_110 = plVar11;
    if (lVar3 == 0) {
      return;
    }
    plVar10 = &local_128;
    break;
  case BoxSmooth:
    uStack_e0 = (longlong *)0x0;
    local_f8 = &
               ___7__TFunction_OwnedObject_P6ANAEBUFSculptBrushStamp__AEBU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    uStack_f0 = `UE::SculptFalloffs::MakeSmoothBoxFalloff'::__l2::<lambda_1>::<lambda_invoker_cdecl>
    ;
    local_108 = UE::Core::Private::Function::
                TFunctionRefCaller<double_(__cdecl*)(FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&),double,FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&>
                ::Call;
    pFVar9 = TSharedPtr<FMeshSculptFallofFunc,1>::operator->(this_00);
    lVar3 = *(longlong *)&pFVar9->FalloffFunc;
    uVar4 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x8;
    lVar5 = *(longlong *)&(pFVar9->FalloffFunc).field_0x10;
    uVar6 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x18;
    uVar2 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x20;
    plVar11 = *(longlong **)&(pFVar9->FalloffFunc).field_0x28;
    *(code **)&pFVar9->FalloffFunc = local_108;
    *(undefined8 *)&(pFVar9->FalloffFunc).field_0x8 = uStack_100;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x10 = (undefined4)local_f8;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x14 = local_f8._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x18 = (undefined4)uStack_f0;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x1c = uStack_f0._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x20 = (undefined4)local_e8;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x24 = local_e8._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x28 = (undefined4)uStack_e0;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x2c = uStack_e0._4_4_;
    local_108 = (code *)lVar3;
    uStack_100 = uVar4;
    local_f8 = (undefined **)lVar5;
    uStack_f0 = (code *)uVar6;
    local_e8 = uVar2;
    uStack_e0 = plVar11;
    if (lVar3 == 0) {
      return;
    }
    plVar10 = &local_f8;
    break;
  case BoxLinear:
    uStack_b0 = (longlong *)0x0;
    local_c8 = &
               ___7__TFunction_OwnedObject_P6ANAEBUFSculptBrushStamp__AEBU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    uStack_c0 = `UE::SculptFalloffs::MakeLinearBoxFalloff'::__l2::<lambda_1>::<lambda_invoker_cdecl>
    ;
    local_d8 = UE::Core::Private::Function::
               TFunctionRefCaller<double_(__cdecl*)(FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&),double,FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&>
               ::Call;
    pFVar9 = TSharedPtr<FMeshSculptFallofFunc,1>::operator->(this_00);
    lVar3 = *(longlong *)&pFVar9->FalloffFunc;
    uVar4 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x8;
    lVar5 = *(longlong *)&(pFVar9->FalloffFunc).field_0x10;
    uVar6 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x18;
    uVar2 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x20;
    plVar11 = *(longlong **)&(pFVar9->FalloffFunc).field_0x28;
    *(code **)&pFVar9->FalloffFunc = local_d8;
    *(undefined8 *)&(pFVar9->FalloffFunc).field_0x8 = uStack_d0;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x10 = (undefined4)local_c8;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x14 = local_c8._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x18 = (undefined4)uStack_c0;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x1c = uStack_c0._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x20 = (undefined4)local_b8;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x24 = local_b8._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x28 = (undefined4)uStack_b0;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x2c = uStack_b0._4_4_;
    local_d8 = (code *)lVar3;
    uStack_d0 = uVar4;
    local_c8 = (undefined **)lVar5;
    uStack_c0 = (code *)uVar6;
    local_b8 = uVar2;
    uStack_b0 = plVar11;
    if (lVar3 == 0) {
      return;
    }
    plVar10 = &local_c8;
    break;
  case BoxInverse:
    uStack_80 = (longlong *)0x0;
    local_98 = &
               ___7__TFunction_OwnedObject_P6ANAEBUFSculptBrushStamp__AEBU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    uStack_90 = `UE::SculptFalloffs::MakeInverseBoxFalloff'::__l2::<lambda_1>::
                <lambda_invoker_cdecl>;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<double_(__cdecl*)(FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&),double,FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&>
               ::Call;
    pFVar9 = TSharedPtr<FMeshSculptFallofFunc,1>::operator->(this_00);
    lVar3 = *(longlong *)&pFVar9->FalloffFunc;
    uVar4 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x8;
    lVar5 = *(longlong *)&(pFVar9->FalloffFunc).field_0x10;
    uVar6 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x18;
    uVar2 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x20;
    plVar11 = *(longlong **)&(pFVar9->FalloffFunc).field_0x28;
    *(code **)&pFVar9->FalloffFunc = local_a8;
    *(undefined8 *)&(pFVar9->FalloffFunc).field_0x8 = uStack_a0;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x10 = (undefined4)local_98;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x14 = local_98._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x18 = (undefined4)uStack_90;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x1c = uStack_90._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x20 = (undefined4)local_88;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x24 = local_88._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x28 = (undefined4)uStack_80;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x2c = uStack_80._4_4_;
    local_a8 = (code *)lVar3;
    uStack_a0 = uVar4;
    local_98 = (undefined **)lVar5;
    uStack_90 = (code *)uVar6;
    local_88 = uVar2;
    uStack_80 = plVar11;
    if (lVar3 == 0) {
      return;
    }
    plVar10 = &local_98;
    break;
  case BoxRound:
    uStack_50 = (longlong *)0x0;
    local_68 = &
               ___7__TFunction_OwnedObject_P6ANAEBUFSculptBrushStamp__AEBU__TVector_N_Math_UE___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    uStack_60 = `UE::SculptFalloffs::MakeRoundBoxFalloff'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<double_(__cdecl*)(FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&),double,FSculptBrushStamp_const_&,UE::Math::TVector<double>_const_&>
               ::Call;
    pFVar9 = TSharedPtr<FMeshSculptFallofFunc,1>::operator->(this_00);
    lVar3 = *(longlong *)&pFVar9->FalloffFunc;
    uVar4 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x8;
    lVar5 = *(longlong *)&(pFVar9->FalloffFunc).field_0x10;
    uVar6 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x18;
    uVar2 = *(undefined8 *)&(pFVar9->FalloffFunc).field_0x20;
    plVar11 = *(longlong **)&(pFVar9->FalloffFunc).field_0x28;
    *(code **)&pFVar9->FalloffFunc = local_78;
    *(undefined8 *)&(pFVar9->FalloffFunc).field_0x8 = uStack_70;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x10 = (undefined4)local_68;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x14 = local_68._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x18 = (undefined4)uStack_60;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x1c = uStack_60._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x20 = (undefined4)local_58;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x24 = local_58._4_4_;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x28 = (undefined4)uStack_50;
    *(undefined4 *)&(pFVar9->FalloffFunc).field_0x2c = uStack_50._4_4_;
    local_78 = (code *)lVar3;
    uStack_70 = uVar4;
    local_68 = (undefined **)lVar5;
    uStack_60 = (code *)uVar6;
    local_58 = uVar2;
    uStack_50 = plVar11;
    if (lVar3 == 0) {
      return;
    }
    plVar10 = &local_68;
  }
  if (plVar11 != (longlong *)0x0) {
    plVar10 = plVar11;
  }
  (**(code **)(*plVar10 + 0x10))();
  return;
}

// SetViewPropertiesEnabled @ 14cd20490

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
UMeshSculptToolBase::SetViewPropertiesEnabled(UMeshSculptToolBase *this,bool param_1)

{
  UMeshEditingViewProperties *pUVar1;
  
  pUVar1 = (this->ViewProperties).field0_0x0.DebugPtr;
  if (pUVar1 != (UMeshEditingViewProperties *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cd204a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x338))(this,pUVar1,param_1);
    return;
  }
  return;
}

// SetWorld @ 14cd204d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::SetWorld(UMeshSculptToolBase *this,UWorld *param_1)

{
  this->TargetWorld = param_1;
  return;
}

// Setup @ 14cd24340

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

void __thiscall UMeshSculptToolBase::Setup(UMeshSculptToolBase *this)

{
  int *piVar1;
  double dVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  int iVar13;
  UClass *pUVar14;
  USculptBrushProperties *pUVar15;
  UObject *pUVar16;
  UWorkPlaneProperties *pUVar17;
  UTransformProxy *pUVar18;
  UMeshEditingViewProperties *pUVar19;
  void *this_00;
  TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_> *pTVar20;
  TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_> *this_01;
  UTwoAxisPropertyEditInputBehavior *this_02;
  longlong *plVar21;
  longlong *plVar22;
  undefined ***pppuVar23;
  TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_> *pTVar24;
  undefined1 auStack_198 [32];
  code *local_178 [2];
  undefined **local_168;
  UMeshSculptToolBase *local_160;
  undefined ***local_150;
  undefined1 local_148 [32];
  undefined **local_128;
  UMeshSculptToolBase *local_120;
  undefined ***local_110;
  undefined1 local_108 [24];
  UMeshSculptToolBase *local_f0;
  longlong local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  code *local_78;
  longlong lStack_70;
  undefined1 local_68 [12];
  uchar auStack_5c [4];
  undefined8 local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  UMeshSurfacePointTool::Setup((UMeshSurfacePointTool *)this);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar14 = USculptBrushProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)(local_108 + 0x10),pUVar14);
  local_f0 = this;
  pUVar15 = (USculptBrushProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_108 + 0x10));
  if (local_b8 != 0) {
    plVar21 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar21 = local_90;
    }
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (USculptBrushProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->BrushProperties).field0_0x0.DebugPtr = pUVar15;
  cVar12 = (**(code **)(this->_padding_ + 0x458))(this);
  if (cVar12 != '\0') {
    pUVar15 = (this->BrushProperties).field0_0x0.DebugPtr;
    pcVar3 = *(code **)(pUVar15->_padding_ + 0x2b8);
    ::FString::FString((FString *)local_148,L"");
    (*pcVar3)(pUVar15,this,local_148);
    if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_148._0_8_);
    }
  }
  pUVar16 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar16,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar14 = UWorkPlaneProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)(local_108 + 0x10),pUVar14);
  local_f0 = (UMeshSculptToolBase *)pUVar16;
  pUVar17 = (UWorkPlaneProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_108 + 0x10));
  if (local_b8 != 0) {
    plVar21 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar21 = local_90;
    }
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar17 != (UWorkPlaneProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar17);
  }
  (this->GizmoProperties).field0_0x0.DebugPtr = pUVar17;
  pcVar3 = *(code **)(pUVar17->_padding_ + 0x2b8);
  ::FString::FString((FString *)local_148,L"");
  (*pcVar3)(pUVar17,this,local_148);
  if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_148._0_8_);
  }
  pUVar18 = NewObject<UTransformProxy>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar18);
  }
  (this->PlaneTransformProxy).field0_0x0.DebugPtr = pUVar18;
  pTVar24 = (TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_> *)0x0;
  local_148._8_8_ = (ulonglong)(uint)local_148._12_4_ << 0x20;
  local_148._0_8_ = _vcall__1664__flat______;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::AddUObject<UMeshSculptToolBase>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
              *)&pUVar18->OnTransformChanged,(UMeshSculptToolBase *)local_108,(pmf_e8ecdf6e *)this);
  pUVar17 = (this->GizmoProperties).field0_0x0.DebugPtr;
  dVar7 = (pUVar17->Position).field0_0x0._s_0.X;
  dVar8 = (pUVar17->Position).field0_0x0._s_0.Y;
  dVar2 = (pUVar17->Position).field0_0x0._s_0.Z;
  local_68._0_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UMeshSculptToolBase::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMeshSculptToolBase::Setup'::__l2::<lambda_2>,void,UE::Math::TVector<double>_>
             ::Call;
  local_128 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshSculptToolBase::Setup'::`2'::<lambda_1>,0,0>::_vftable_;
  local_148._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshSculptToolBase::Setup'::__l2::<lambda_1>,UE::Math::TVector<double>_>
       ::Call;
  plStack_50 = (longlong *)0x0;
  local_110 = (undefined ***)0x0;
  local_120 = this;
  unique0x10001b7a = this;
  TFunction<UE::Math::TVector<double>___cdecl(void)>::operator=
            (&(this->GizmoPositionWatcher).GetValueFunc,
             (TFunction<UE::Math::TVector<double>___cdecl(void)> *)(local_148 + 0x10));
  TFunction<void___cdecl(UE::Math::TVector<double>)>::operator=
            (&(this->GizmoPositionWatcher).OnValueChangedFunc,
             (TFunction<void___cdecl(UE::Math::TVector<double>)> *)&local_78);
  (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.X = dVar7;
  (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.Y = dVar8;
  (this->GizmoPositionWatcher).CachedValue.field0_0x0._s_0.Z = dVar2;
  if ((code *)local_148._16_8_ != (code *)0x0) {
    pppuVar23 = &local_128;
    if (local_110 != (undefined ***)0x0) {
      pppuVar23 = local_110;
    }
    (*(code *)(*pppuVar23)[2])();
  }
  if (local_78 != (code *)0x0) {
    plVar21 = (longlong *)local_68;
    if (plStack_50 != (longlong *)0x0) {
      plVar21 = plStack_50;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  pUVar17 = (this->GizmoProperties).field0_0x0.DebugPtr;
  plStack_50 = (void *)0x0;
  dVar2 = (pUVar17->Rotation).X;
  dVar7 = (pUVar17->Rotation).Y;
  dVar8 = (pUVar17->Rotation).Z;
  dVar9 = (pUVar17->Rotation).W;
  local_110 = (undefined ***)0x0;
  local_128 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshSculptToolBase::Setup'::`2'::<lambda_4>,0,0>::_vftable_;
  local_148._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshSculptToolBase::Setup'::__l2::<lambda_4>,void,UE::Math::TQuat<double>_>
       ::Call;
  local_168 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshSculptToolBase::Setup'::`2'::<lambda_3>,0,0>::_vftable_;
  local_178[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshSculptToolBase::Setup'::__l2::<lambda_3>,UE::Math::TQuat<double>_>
                 ::Call;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`UMeshSculptToolBase::Setup'::__l2::<lambda_3>,UE::Math::TQuat<double>_>
             ::Call;
  local_150 = (undefined ***)0x0;
  local_160 = this;
  local_120 = this;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`UMeshSculptToolBase::Setup'::__l2::<lambda_3>,0,0>::CloneToEmptyStorage
            (&local_168,(FFunctionStorage *)local_68);
  lVar5 = *(longlong *)&(this->GizmoRotationWatcher).GetValueFunc;
  lVar6 = *(longlong *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x8;
  lVar10 = *(longlong *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x10;
  lVar11 = *(longlong *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x18;
  lVar4 = *(longlong *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x20;
  plVar21 = *(longlong **)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28;
  *(code **)&(this->GizmoRotationWatcher).GetValueFunc = local_78;
  *(longlong *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x8 = lStack_70;
  *(undefined4 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x10 = local_68._0_4_;
  *(undefined4 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x14 = local_68._4_4_;
  *(undefined4 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x18 = local_68._8_4_;
  (this->GizmoRotationWatcher).GetValueFunc.field_0x1c = auStack_5c[0];
  (this->GizmoRotationWatcher).GetValueFunc.field_0x1d = auStack_5c[1];
  (this->GizmoRotationWatcher).GetValueFunc.field_0x1e = auStack_5c[2];
  (this->GizmoRotationWatcher).GetValueFunc.field_0x1f = auStack_5c[3];
  (this->GizmoRotationWatcher).GetValueFunc.field_0x20 = (uchar)local_58;
  (this->GizmoRotationWatcher).GetValueFunc.field_0x21 = local_58._1_1_;
  (this->GizmoRotationWatcher).GetValueFunc.field_0x22 = local_58._2_1_;
  (this->GizmoRotationWatcher).GetValueFunc.field_0x23 = local_58._3_1_;
  (this->GizmoRotationWatcher).GetValueFunc.field_0x24 = local_58._4_1_;
  (this->GizmoRotationWatcher).GetValueFunc.field_0x25 = local_58._5_1_;
  (this->GizmoRotationWatcher).GetValueFunc.field_0x26 = local_58._6_1_;
  (this->GizmoRotationWatcher).GetValueFunc.field_0x27 = local_58._7_1_;
  *(undefined4 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x28 = plStack_50._0_4_;
  *(undefined4 *)&(this->GizmoRotationWatcher).GetValueFunc.field_0x2c = plStack_50._4_4_;
  local_78 = (code *)lVar5;
  lStack_70 = lVar6;
  local_68._0_8_ = lVar10;
  stack0xffffffffffffffa0 = (UMeshSculptToolBase *)lVar11;
  local_58 = lVar4;
  plStack_50 = plVar21;
  if (lVar5 != 0) {
    plVar22 = (longlong *)local_68;
    if (plVar21 != (longlong *)0x0) {
      plVar22 = plVar21;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  local_78 = (code *)local_148._16_8_;
  plStack_50 = (void *)0x0;
  if ((code *)local_148._16_8_ != (code *)0x0) {
    pppuVar23 = &local_128;
    if (local_110 != (undefined ***)0x0) {
      pppuVar23 = local_110;
    }
    (*(code *)**pppuVar23)(pppuVar23,local_68);
  }
  lVar5 = *(longlong *)&(this->GizmoRotationWatcher).OnValueChangedFunc;
  lVar6 = *(longlong *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x8;
  lVar10 = *(longlong *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x10;
  lVar11 = *(longlong *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x18;
  lVar4 = *(longlong *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x20;
  plVar21 = *(longlong **)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x28;
  *(code **)&(this->GizmoRotationWatcher).OnValueChangedFunc = local_78;
  *(longlong *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x8 = lStack_70;
  *(undefined4 *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x10 = local_68._0_4_;
  *(undefined4 *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x14 = local_68._4_4_;
  *(undefined4 *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x18 = local_68._8_4_;
  (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x1c = auStack_5c[0];
  (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x1d = auStack_5c[1];
  (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x1e = auStack_5c[2];
  (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x1f = auStack_5c[3];
  (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x20 = (uchar)local_58;
  (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x21 = local_58._1_1_;
  (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x22 = local_58._2_1_;
  (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x23 = local_58._3_1_;
  (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x24 = local_58._4_1_;
  (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x25 = local_58._5_1_;
  (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x26 = local_58._6_1_;
  (this->GizmoRotationWatcher).OnValueChangedFunc.field_0x27 = local_58._7_1_;
  *(undefined4 *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x28 = plStack_50._0_4_;
  *(undefined4 *)&(this->GizmoRotationWatcher).OnValueChangedFunc.field_0x2c = plStack_50._4_4_;
  local_78 = (code *)lVar5;
  lStack_70 = lVar6;
  local_68._0_8_ = lVar10;
  stack0xffffffffffffffa0 = (UMeshSculptToolBase *)lVar11;
  local_58 = lVar4;
  plStack_50 = plVar21;
  if (lVar5 != 0) {
    plVar22 = (longlong *)local_68;
    if (plVar21 != (longlong *)0x0) {
      plVar22 = plVar21;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  (this->GizmoRotationWatcher).CachedValue.X = dVar2;
  (this->GizmoRotationWatcher).CachedValue.Y = dVar7;
  (this->GizmoRotationWatcher).CachedValue.Z = dVar8;
  (this->GizmoRotationWatcher).CachedValue.W = dVar9;
  if (local_178[0] != (code *)0x0) {
    pppuVar23 = &local_168;
    if (local_150 != (undefined ***)0x0) {
      pppuVar23 = local_150;
    }
    (*(code *)(*pppuVar23)[2])();
  }
  if ((code *)local_148._16_8_ != (code *)0x0) {
    pppuVar23 = &local_128;
    if (local_110 != (undefined ***)0x0) {
      pppuVar23 = local_110;
    }
    (*(code *)(*pppuVar23)[2])();
  }
  pUVar16 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar16,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar14 = UMeshEditingViewProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)(local_108 + 0x10),pUVar14);
  local_f0 = (UMeshSculptToolBase *)pUVar16;
  pUVar19 = (UMeshEditingViewProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_108 + 0x10));
  if (local_b8 != 0) {
    plVar21 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar21 = local_90;
    }
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 != (UMeshEditingViewProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  (this->ViewProperties).field0_0x0.DebugPtr = pUVar19;
  pcVar3 = *(code **)(pUVar19->_padding_ + 0x2b8);
  ::FString::FString((FString *)local_148,L"");
  (*pcVar3)(pUVar19,this,local_148);
  if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_148._0_8_);
  }
  pUVar19 = (this->ViewProperties).field0_0x0.DebugPtr;
  local_168 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshSculptToolBase::Setup'::`2'::<lambda_5>,0,0>::_vftable_;
  local_150 = (undefined ***)0x0;
  local_178[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshSculptToolBase::Setup'::__l2::<lambda_5>,void,bool_const_&>
                 ::Call;
  local_160 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar19->_padding_,&pUVar19->bShowWireframe,
             (TFunction<void___cdecl(bool_const_&)> *)local_178);
  pUVar19 = (this->ViewProperties).field0_0x0.DebugPtr;
  local_128 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshSculptToolBase::Setup'::`2'::<lambda_6>,0,0>::_vftable_;
  local_110 = (undefined ***)0x0;
  local_148._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshSculptToolBase::Setup'::__l2::<lambda_6>,void,enum_EMeshEditingMaterialModes_const_&>
       ::Call;
  local_120 = this;
  this_00 = ::operator_new(0xa0);
  pTVar20 = pTVar24;
  if (this_00 != (void *)0x0) {
    local_178[0] = (code *)local_148._16_8_;
    local_150 = (undefined ***)0x0;
    if ((code *)local_148._16_8_ != (code *)0x0) {
      pppuVar23 = &local_128;
      if (local_110 != (undefined ***)0x0) {
        pppuVar23 = local_110;
      }
      (*(code *)**pppuVar23)(pppuVar23,&local_168);
    }
    pTVar20 = (TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_> *)
              FWatchablePropertySet::TPropertyWatcher<enum_EMeshEditingMaterialModes>::
              TPropertyWatcher<enum_EMeshEditingMaterialModes><enum_EMeshEditingMaterialModes,void>
                        (this_00,&pUVar19->MaterialMode,
                         (TFunction<void___cdecl(EMeshEditingMaterialModes_const_&)> *)local_178);
  }
  iVar13 = (int)pUVar19->_padding_;
  piVar1 = (int *)((longlong)&pUVar19->_padding_ + 4);
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pUVar19->_padding_,piVar1);
  }
  *(int *)&pUVar19->_padding_ = iVar13 + 1;
  *(TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_> **)
   (pUVar19->_padding_ + (longlong)iVar13 * 8) = pTVar20;
  if ((code *)local_148._16_8_ != (code *)0x0) {
    pppuVar23 = &local_128;
    if (local_110 != (undefined ***)0x0) {
      pppuVar23 = local_110;
    }
    (*(code *)(*pppuVar23)[2])();
  }
  pUVar19 = (this->ViewProperties).field0_0x0.DebugPtr;
  local_128 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshSculptToolBase::Setup'::`2'::<lambda_7>,0,0>::_vftable_;
  local_110 = (undefined ***)0x0;
  local_148._16_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshSculptToolBase::Setup'::__l2::<lambda_7>,void,TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_&>
       ::Call;
  local_120 = this;
  this_01 = ::operator_new(0xb0);
  pTVar20 = pTVar24;
  if (this_01 != (TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_> *)0x0) {
    local_178[0] = (code *)local_148._16_8_;
    local_150 = (undefined ***)0x0;
    if ((code *)local_148._16_8_ != (code *)0x0) {
      pppuVar23 = &local_128;
      if (local_110 != (undefined ***)0x0) {
        pppuVar23 = local_110;
      }
      (*(code *)**pppuVar23)(pppuVar23,&local_168);
    }
    pTVar20 = FWatchablePropertySet::
              TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_>::
              TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_><TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>,void>
                        (this_01,&pUVar19->CustomMaterial,
                         (TFunction<void___cdecl(TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_const_&)>
                          *)local_178);
  }
  iVar13 = (int)pUVar19->_padding_;
  piVar1 = (int *)((longlong)&pUVar19->_padding_ + 4);
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pUVar19->_padding_,piVar1);
  }
  *(int *)&pUVar19->_padding_ = iVar13 + 1;
  *(TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_> **)
   (pUVar19->_padding_ + (longlong)iVar13 * 8) = pTVar20;
  if ((code *)local_148._16_8_ != (code *)0x0) {
    pppuVar23 = &local_128;
    if (local_110 != (undefined ***)0x0) {
      pppuVar23 = local_110;
    }
    (*(code *)(*pppuVar23)[2])();
  }
  pUVar19 = (this->ViewProperties).field0_0x0.DebugPtr;
  local_168 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshSculptToolBase::Setup'::`2'::<lambda_8>,0,0>::_vftable_;
  local_150 = (undefined ***)0x0;
  local_178[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshSculptToolBase::Setup'::__l2::<lambda_8>,void,bool_const_&>
                 ::Call;
  local_160 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar19->_padding_,&pUVar19->bFlatShading,
             (TFunction<void___cdecl(bool_const_&)> *)local_178);
  pUVar19 = (this->ViewProperties).field0_0x0.DebugPtr;
  local_168 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshSculptToolBase::Setup'::`2'::<lambda_9>,0,0>::_vftable_;
  local_150 = (undefined ***)0x0;
  local_178[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshSculptToolBase::Setup'::__l2::<lambda_9>,void,FLinearColor_const_&>
                 ::Call;
  local_160 = this;
  FWatchablePropertySet::WatchProperty<FLinearColor>
            ((FWatchablePropertySet *)&pUVar19->_padding_,&pUVar19->Color,
             (TFunction<void___cdecl(FLinearColor_const_&)> *)local_178);
  pUVar19 = (this->ViewProperties).field0_0x0.DebugPtr;
  local_168 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshSculptToolBase::Setup'::`2'::<lambda_10>,0,0>::_vftable_;
  local_150 = (undefined ***)0x0;
  local_178[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshSculptToolBase::Setup'::__l2::<lambda_10>,void,FLinearColor_const_&>
                 ::Call;
  local_160 = this;
  FWatchablePropertySet::WatchProperty<FLinearColor>
            ((FWatchablePropertySet *)&pUVar19->_padding_,&pUVar19->TransparentMaterialColor,
             (TFunction<void___cdecl(FLinearColor_const_&)> *)local_178);
  pUVar19 = (this->ViewProperties).field0_0x0.DebugPtr;
  local_168 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshSculptToolBase::Setup'::`2'::<lambda_11>,0,0>::_vftable_;
  local_150 = (undefined ***)0x0;
  local_178[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshSculptToolBase::Setup'::__l2::<lambda_11>,void,double_const_&>
                 ::Call;
  local_160 = this;
  FWatchablePropertySet::WatchProperty<double>
            ((FWatchablePropertySet *)&pUVar19->_padding_,&pUVar19->Opacity,
             (TFunction<void___cdecl(double_const_&)> *)local_178);
  pUVar19 = (this->ViewProperties).field0_0x0.DebugPtr;
  local_168 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshSculptToolBase::Setup'::`2'::<lambda_12>,0,0>::_vftable_;
  local_150 = (undefined ***)0x0;
  local_178[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshSculptToolBase::Setup'::__l2::<lambda_12>,void,bool_const_&>
                 ::Call;
  local_160 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar19->_padding_,&pUVar19->bTwoSided,
             (TFunction<void___cdecl(bool_const_&)> *)local_178);
  pUVar19 = (this->ViewProperties).field0_0x0.DebugPtr;
  local_168 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshSculptToolBase::Setup'::`2'::<lambda_13>,0,0>::_vftable_;
  local_150 = (undefined ***)0x0;
  local_178[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshSculptToolBase::Setup'::__l2::<lambda_13>,void,TObjectPtr<UTexture2D>_const_&>
                 ::Call;
  local_160 = this;
  FWatchablePropertySet::WatchProperty<TObjectPtr<UTexture2D>_>
            ((FWatchablePropertySet *)&pUVar19->_padding_,&pUVar19->Image,
             (TFunction<void___cdecl(TObjectPtr<UTexture2D>_const_&)> *)local_178);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar14 = Z_Construct_UClass_ULocalTwoAxisPropertyEditInputBehavior_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)(local_108 + 0x10),pUVar14);
  local_f0 = this;
  local_108._0_8_ =
       StaticConstructObject_Internal((FStaticConstructObjectParameters *)(local_108 + 0x10));
  if (local_b8 != 0) {
    plVar21 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar21 = local_90;
    }
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UObject *)local_108._0_8_ != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_108._0_8_);
  }
  FWeakObjectPtr::operator=(&(this->BrushEditBehavior).WeakPtr,(FObjectPtr)local_108);
  pcVar3 = *(code **)(this->_padding_ + 0x660);
  pUVar16 = FWeakObjectPtr::Get(&(this->BrushEditBehavior).WeakPtr);
  (*pcVar3)(this,pUVar16);
  local_108._0_8_ = this;
  pUVar16 = FWeakObjectPtr::Get(&(this->BrushEditBehavior).WeakPtr);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddWeakLambda<UMeshSculptToolBase,_UMeshSculptToolBase::Setup_::__l6::<lambda_14>_>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &pUVar16[0xe].field_0x20,(UMeshSculptToolBase *)local_148,(<lambda_14> *)this);
  this_02 = (UTwoAxisPropertyEditInputBehavior *)
            FWeakObjectPtr::Get(&(this->BrushEditBehavior).WeakPtr);
  pTVar20 = (TPropertyWatcher<TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr>_> *)(this_02 + 1);
  if (this_02 == (UTwoAxisPropertyEditInputBehavior *)0x0) {
    pTVar20 = pTVar24;
  }
  UTwoAxisPropertyEditInputBehavior::Initialize
            (this_02,(ITwoAxisPropertyEditBehaviorTarget *)pTVar20);
  pcVar3 = *(code **)(this->_padding_ + 0x2f8);
  pUVar16 = FWeakObjectPtr::Get(&(this->BrushEditBehavior).WeakPtr);
  (*pcVar3)(this,pUVar16,0);
  return;
}

// SetupBrushEditBehaviorSetup @ 14cd2b2e0

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
UMeshSculptToolBase::SetupBrushEditBehaviorSetup
          (UMeshSculptToolBase *this,ULocalTwoAxisPropertyEditInputBehavior *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FText *pFVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  FText local_58;
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_48 = *(longlong *)&(param_1->HorizontalProperty).GetValueFunc;
  uVar2 = *(undefined8 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x8;
  local_38 = *(longlong *)&(param_1->HorizontalProperty).GetValueFunc.field_0x10;
  uStack_30 = *(undefined8 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x18;
  uVar1 = *(undefined8 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x20;
  plStack_20 = *(longlong **)&(param_1->HorizontalProperty).GetValueFunc.field_0x28;
  *(code **)&(param_1->HorizontalProperty).GetValueFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshSculptToolBase::MapHorizontalBrushEditBehaviorToBrushSize'::__l2::<lambda_1>,float>
       ::Call;
  *(undefined8 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x8 = uStack_40;
  *(undefined4 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x10 = 0x52979720;
  *(undefined4 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x14 = 1;
  *(UMeshSculptToolBase **)&(param_1->HorizontalProperty).GetValueFunc.field_0x18 = this;
  *(undefined4 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x24 = local_28._4_4_;
  *(undefined4 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x28 = 0;
  *(undefined4 *)&(param_1->HorizontalProperty).GetValueFunc.field_0x2c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar4 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar4 = plStack_20;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  local_48 = *(longlong *)&(param_1->HorizontalProperty).SetValueFunc;
  uVar2 = *(undefined8 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x8;
  local_38 = *(longlong *)&(param_1->HorizontalProperty).SetValueFunc.field_0x10;
  uStack_30 = *(undefined8 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x18;
  uVar1 = *(undefined8 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x20;
  plStack_20 = *(longlong **)&(param_1->HorizontalProperty).SetValueFunc.field_0x28;
  *(code **)&(param_1->HorizontalProperty).SetValueFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshSculptToolBase::MapHorizontalBrushEditBehaviorToBrushSize'::__l2::<lambda_2>,void,float>
       ::Call;
  *(undefined8 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x8 = uStack_40;
  *(undefined4 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x10 = 0x52979740;
  *(undefined4 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x14 = 1;
  *(UMeshSculptToolBase **)&(param_1->HorizontalProperty).SetValueFunc.field_0x18 = this;
  *(undefined4 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x24 = local_28._4_4_;
  *(undefined4 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x28 = 0;
  *(undefined4 *)&(param_1->HorizontalProperty).SetValueFunc.field_0x2c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar4 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar4 = plStack_20;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  local_48 = *(longlong *)&(param_1->HorizontalProperty).MutateDeltaFunc;
  uVar2 = *(undefined8 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x8;
  local_38 = *(longlong *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x10;
  uStack_30 = *(undefined8 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x18;
  uVar1 = *(undefined8 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x20;
  plStack_20 = *(longlong **)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x28;
  *(code **)&(param_1->HorizontalProperty).MutateDeltaFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UMeshSculptToolBase::MapHorizontalBrushEditBehaviorToBrushSize'::__l2::<lambda_3>,float,float>
       ::Call;
  *(undefined8 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x8 = uStack_40;
  *(undefined4 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x10 = 0x52979760;
  *(undefined4 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x14 = 1;
  *(UMeshSculptToolBase **)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x18 = this;
  *(undefined4 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x20 = (undefined4)local_28;
  *(undefined4 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x24 = local_28._4_4_;
  *(undefined4 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x28 = 0;
  *(undefined4 *)&(param_1->HorizontalProperty).MutateDeltaFunc.field_0x2c = 0;
  local_28 = uVar1;
  uStack_40 = uVar2;
  if (local_48 != 0) {
    plVar4 = &local_38;
    if (plStack_20 != (longlong *)0x0) {
      plVar4 = plStack_20;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"UMeshSculptToolBase",L"BrushRadius",L"Radius");
  FText::operator=(&(param_1->HorizontalProperty).Name,pFVar3);
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  (param_1->HorizontalProperty).bEnabled = true;
  return;
}

// SharesBrushPropertiesChanges @ 14cd2d260

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMeshSculptToolBase::SharesBrushPropertiesChanges(UMeshSculptToolBase *this)

{
  return true;
}

// ShowWorkPlane @ 14cd2d2b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UMeshSculptToolBase::ShowWorkPlane(UMeshSculptToolBase *this)

{
  return false;
}

// Shutdown @ 14cd2d870

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

void __thiscall UMeshSculptToolBase::Shutdown(UMeshSculptToolBase *this,EToolShutdownType param_1)

{
  UPreviewGeometry *this_00;
  USculptBrushProperties *pUVar1;
  code *pcVar2;
  UWorkPlaneProperties *pUVar3;
  UMeshEditingViewProperties *pUVar4;
  char cVar5;
  UInteractiveToolManager *pUVar6;
  UInteractiveGizmoManager *pUVar7;
  UActorComponent *this_01;
  undefined1 auStack_d8 [32];
  FString local_b8 [2];
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
  this_00 = (this->StrokeGeometry).field0_0x0.DebugPtr;
  if (this_00 != (UPreviewGeometry *)0x0) {
    UPreviewGeometry::Disconnect(this_00);
    (this->StrokeGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  }
  if (param_1 == Accept) {
    cVar5 = (**(code **)(this->_padding_ + 0x3a8))(this);
    if (cVar5 == '\0') {
      if (1 < (byte)LogTemp._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTemp);
      }
      param_1 = Cancel;
    }
  }
  UInteractiveTool::Shutdown((UInteractiveTool *)this,param_1);
  UPreviewMesh::Disconnect((this->BrushIndicatorMesh).field0_0x0.DebugPtr);
  (this->BrushIndicatorMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  pUVar6 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar7 = UInteractiveToolManager::GetPairedGizmoManager(pUVar6);
  (**(code **)(pUVar7->_padding_ + 0x2e8))(pUVar7,this);
  (this->BrushIndicator).field0_0x0.DebugPtr = (UBrushStampIndicator *)0x0;
  pUVar6 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pUVar7 = UInteractiveToolManager::GetPairedGizmoManager(pUVar6);
  (**(code **)(pUVar7->_padding_ + 0x2c8))(pUVar7,&VertexSculptIndicatorGizmoType);
  cVar5 = (**(code **)(this->_padding_ + 0x458))(this);
  if (cVar5 != '\0') {
    pUVar1 = (this->BrushProperties).field0_0x0.DebugPtr;
    pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
    ::FString::FString(local_b8,L"");
    (*pcVar2)(pUVar1,this,local_b8);
    if (local_b8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8[0].Data.AllocatorInstance.Data);
    }
  }
  pUVar3 = (this->GizmoProperties).field0_0x0.DebugPtr;
  if (pUVar3 != (UWorkPlaneProperties *)0x0) {
    pcVar2 = *(code **)(pUVar3->_padding_ + 0x2b0);
    ::FString::FString(local_b8,L"");
    (*pcVar2)(pUVar3,this,local_b8);
    if (local_b8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8[0].Data.AllocatorInstance.Data);
    }
  }
  pUVar4 = (this->ViewProperties).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar4->_padding_ + 0x2b0);
  ::FString::FString(local_b8,L"");
  (*pcVar2)(pUVar4,this,local_b8);
  if (local_b8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8[0].Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x468))(this,this);
  this_01 = (UActorComponent *)(**(code **)(this->_padding_ + 0x430))(this);
  if (this_01 != (UActorComponent *)0x0) {
    UE::ToolTarget::ShowSourceObject((UToolTarget *)this->_padding_);
    if (param_1 == Accept) {
      local_78 = *(undefined4 *)&(this->InitialTargetTransform).Translation.field0_0x0;
      uStack_74 = *(undefined4 *)
                   ((longlong)&(this->InitialTargetTransform).Translation.field0_0x0 + 4);
      uStack_70 = *(undefined4 *)
                   ((longlong)&(this->InitialTargetTransform).Translation.field0_0x0 + 8);
      uStack_6c = *(undefined4 *)
                   ((longlong)&(this->InitialTargetTransform).Translation.field0_0x0 + 0xc);
      local_58 = *(undefined4 *)&(this->InitialTargetTransform).Scale3D.field0_0x0;
      uStack_54 = *(undefined4 *)((longlong)&(this->InitialTargetTransform).Scale3D.field0_0x0 + 4);
      uStack_50 = *(undefined4 *)((longlong)&(this->InitialTargetTransform).Scale3D.field0_0x0 + 8);
      uStack_4c = *(undefined4 *)
                   ((longlong)&(this->InitialTargetTransform).Scale3D.field0_0x0 + 0xc);
      local_98 = (this->InitialTargetTransform).Rotation.field0_0x0._s_0.X;
      dStack_90 = (this->InitialTargetTransform).Rotation.field0_0x0._s_0.Y;
      local_88 = *(undefined4 *)
                  ((longlong)&(this->InitialTargetTransform).Rotation.field0_0x0 + 0x10);
      uStack_84 = *(undefined4 *)
                   ((longlong)&(this->InitialTargetTransform).Rotation.field0_0x0 + 0x14);
      uStack_80 = *(undefined4 *)
                   ((longlong)&(this->InitialTargetTransform).Rotation.field0_0x0 + 0x18);
      uStack_7c = (undefined4)
                  ((ulonglong)
                   *(undefined8 *)
                    ((longlong)&(this->InitialTargetTransform).Rotation.field0_0x0 + 0x18) >> 0x20);
      local_48 = (this->InitialTargetTransform).Scale3D.field0_0x0._s_0.Z;
      local_68 = (this->InitialTargetTransform).Translation.field0_0x0._s_0.Z;
      uStack_60 = 0;
      uStack_40 = 0;
      (**(code **)(this_01->_padding_ + 0xb58))(this_01,&local_98,1);
      (**(code **)(this->_padding_ + 0x460))(this,this_01,0);
    }
    UActorComponent::UnregisterComponent(this_01);
    (**(code **)(this_01->_padding_ + 0x4a0))(this_01,0);
  }
  pUVar6 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  UE::TransactionUtil::FLongTransactionTracker::CloseAll(&this->LongTransactions,pUVar6);
  return;
}

// StaticRegisterNativesUMeshSculptToolBase @ 14cd2f070

void __cdecl UMeshSculptToolBase::StaticRegisterNativesUMeshSculptToolBase(void)

{
  return;
}

// UpdateBrushFrameWorld @ 14cd33040

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
UMeshSculptToolBase::UpdateBrushFrameWorld
          (UMeshSculptToolBase *this,TVector<double> *param_1,TVector<double> *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char cVar17;
  TQuaternion<double> *pTVar18;
  TTransformSRT3<double> *pTVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  uint uVar20;
  double dVar21;
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  uint uVar33;
  undefined4 uVar34;
  undefined4 local_res8;
  undefined4 uStackX_c;
  TQuaternion<double>_u_0 TStack_2b0;
  TVector<double>_u_0 local_290;
  TQuaternion<double>_u_0 local_278;
  TVector<double>_u_0 local_258;
  TVector<double>_u_0 local_240;
  TVector<double>_u_0 local_228;
  TQuaternion<double>_u_0 local_210;
  TQuaternion<double>_u_0 local_1f0;
  TQuaternion<double>_u_0 local_1d0;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double dStack_198;
  TVector<double>_u_0 local_188 [2];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined8 uStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined4 uStack_138;
  undefined4 uStack_134;
  TQuaternion<double>_u_0 local_130;
  TTransformSRT3<double> local_110 [3];
  
  dVar11 = __real_3ff0000000000000;
  local_1b0 = (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.X;
  dStack_1a8 = (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Y;
  local_1a0 = (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Z;
  dStack_198 = (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.X;
  bVar14 = false;
  local_148 = (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.Y;
  uStack_140 = (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.Z;
  while( true ) {
    TStack_2b0._8_16_ =
         *(undefined1 (*) [16])((longlong)&(this->LastBrushFrameWorld).Rotation.field0_0x0 + 8);
    dVar21 = TStack_2b0._8_8_;
    uVar28 = TStack_2b0._16_4_;
    uVar29 = TStack_2b0._20_4_;
    dVar12 = (param_1->field0_0x0)._s_0.X;
    dVar13 = (param_1->field0_0x0)._s_0.Y;
    dVar2 = (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.W;
    dVar4 = (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.X;
    dVar3 = *(double *)((longlong)&param_1->field0_0x0 + 0x10);
    auVar23._8_8_ = TStack_2b0._16_8_;
    auVar23._0_8_ = (dVar21 + dVar21) * dVar21;
    local_278._s_0.X = 0.0;
    local_278._s_0.W = dVar11;
    local_278._s_0.Y = 0.0;
    local_278._s_0.Z = 0.0;
    local_258._s_0.X = (dVar21 + dVar21) * dVar2 + (auVar23._8_8_ + auVar23._8_8_) * dVar4;
    local_258._s_0.Y = (auVar23._8_8_ + auVar23._8_8_) * dVar21 - (dVar4 + dVar4) * dVar2;
    local_258._s_0.Z = dVar11 - ((dVar4 + dVar4) * dVar4 + auVar23._0_8_);
    TStack_2b0._s_0.X = dVar4;
    TStack_2b0._s_0.W = dVar2;
    local_130._s_0.X = dVar12;
    local_130._s_0.Y = dVar13;
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_278._s_0,(TVector<double> *)&local_258._s_0,param_2);
    UE::Geometry::operator*<double>
              ((TQuaternion<double> *)&local_210._s_0,(TQuaternion<double> *)&local_278._s_0,
               (TQuaternion<double> *)&TStack_2b0._s_0);
    auVar24._8_8_ = 0;
    auVar24._0_8_ =
         local_210._s_0.Y * local_210._s_0.Y + local_210._s_0.X * local_210._s_0.X +
         local_210._s_0.W * local_210._s_0.W + local_210._s_0.Z * local_210._s_0.Z;
    auVar24 = sqrtpd(auVar23,auVar24);
    uVar30 = uVar28;
    uVar31 = uVar29;
    if (0.0 < auVar24._0_8_) {
      dVar5 = dVar11 / auVar24._0_8_;
      if (0.0 < dVar5) {
        uVar30 = SUB84(dVar5 * local_210._s_0.Z,0);
        uVar31 = (undefined4)((ulonglong)(dVar5 * local_210._s_0.Z) >> 0x20);
        TStack_2b0._16_4_ = uVar30;
        TStack_2b0._8_8_ = dVar5 * local_210._s_0.Y;
        TStack_2b0._20_4_ = uVar31;
        uVar28 = 0;
        uVar29 = 0;
        dVar2 = dVar5 * local_210._s_0.W;
        dVar4 = dVar5 * local_210._s_0.X;
        dVar21 = dVar5 * local_210._s_0.Y;
        TStack_2b0._s_0.X = dVar5 * local_210._s_0.X;
        TStack_2b0._s_0.W = dVar5 * local_210._s_0.W;
      }
    }
    uVar33 = (uint)((ulonglong)dVar4 >> 0x20);
    uVar32 = SUB84(dVar4,0);
    local_188[0]._s_0.Z = dVar11;
    local_188[0]._s_0.X = 0.0;
    local_188[0]._s_0.Y = 0.0;
    UE::Math::TQuat<double>::RotateVector
              (&(this->CameraState).Orientation,(TVector<double> *)&local_290._s_0,
               (TVector<double> *)&local_188[0]._s_0);
    dVar5 = local_290._s_0.X * (param_2->field0_0x0)._s_0.X +
            local_290._s_0.Y * (param_2->field0_0x0)._s_0.Y +
            local_290._s_0.Z * (param_2->field0_0x0)._s_0.Z;
    uVar20 = SUB84(dVar5,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    dVar7 = (double)CONCAT44(uVar33,uVar20);
    if ((double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,uVar20) <
        ___real_3fef5c28f5c28f5c) {
      dVar27 = (double)CONCAT44(uVar31,uVar30) + (double)CONCAT44(uVar31,uVar30);
      auVar25._8_4_ = uVar28;
      auVar25._0_8_ = dVar21;
      auVar25._12_4_ = uVar29;
      auVar26._8_8_ = auVar25._8_8_;
      dVar22 = dVar21 + dVar21;
      dVar5 = (dVar4 + dVar4) * dVar4;
      dVar7 = (dVar4 + dVar4) * dVar2;
      dVar8 = dVar27 * dVar21 - dVar7;
      local_228._s_0.Z = dVar7 + dVar27 * dVar21;
      dVar9 = dVar22 * dVar2 + dVar27 * dVar4;
      dVar7 = dVar11 - (dVar22 * dVar21 + dVar5);
      auVar26._0_8_ = dVar22 * dVar4 - dVar27 * dVar2;
      local_228._s_0.Y = dVar11 - (dVar27 * (double)CONCAT44(uVar31,uVar30) + dVar5);
      local_240._s_0.X = dVar9;
      local_240._s_0.Y = dVar8;
      local_240._s_0.Z = dVar7;
      local_228._s_0.X = auVar26._0_8_;
      UE::Geometry::VectorUtil::PlaneAngleSignedD<double>
                ((TVector<double> *)&local_228._s_0,(TVector<double> *)&local_290._s_0,
                 (TVector<double> *)&local_240._s_0);
      __libm_sse2_sincos_();
      local_1f0._s_0.X = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar9;
      local_1f0._s_0.Y = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar8;
      local_1f0._s_0.Z = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar7;
      UE::Geometry::operator*<double>
                ((TQuaternion<double> *)&local_1d0._s_0,(TQuaternion<double> *)&local_1f0._s_0,
                 (TQuaternion<double> *)&TStack_2b0._s_0);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_1d0._s_0.W * local_1d0._s_0.W + local_1d0._s_0.Z * local_1d0._s_0.Z +
                     local_1d0._s_0.Y * local_1d0._s_0.Y + local_1d0._s_0.X * local_1d0._s_0.X;
      auVar24 = sqrtpd(auVar26,auVar6);
      dVar7 = (double)((ulonglong)uVar33 << 0x20);
      if (0.0 < auVar24._0_8_) {
        dVar5 = dVar11 / auVar24._0_8_;
        dVar8 = dVar5 * local_1d0._s_0.X;
        dVar7 = (double)CONCAT44(uVar33,SUB84(dVar8,0));
        if (0.0 < dVar5) {
          uVar30 = SUB84(dVar5 * local_1d0._s_0.Z,0);
          uVar31 = (undefined4)((ulonglong)(dVar5 * local_1d0._s_0.Z) >> 0x20);
          TStack_2b0._16_4_ = uVar30;
          TStack_2b0._8_8_ = dVar5 * local_1d0._s_0.Y;
          TStack_2b0._20_4_ = uVar31;
          uVar32 = SUB84(dVar8,0);
          dVar2 = dVar5 * local_1d0._s_0.W;
          dVar21 = dVar5 * local_1d0._s_0.Y;
          dVar4 = dVar8;
          dVar7 = dVar8;
          TStack_2b0._s_0.X = dVar8;
          TStack_2b0._s_0.W = dVar5 * local_1d0._s_0.W;
        }
      }
    }
    uVar16 = _UNK_15061cbcc;
    uVar15 = _UNK_15061cbc8;
    uVar29 = _UNK_15061cbc4;
    uVar28 = ___xmm_3ff00000000000000000000000000000;
    uVar34 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (SQRT(dVar21 * dVar21 + (double)CONCAT44(uVar34,uVar32) * (double)CONCAT44(uVar34,uVar32) +
             (double)CONCAT44(uVar31,uVar30) * (double)CONCAT44(uVar31,uVar30) + dVar2 * dVar2) <=
        __real_3ff199999999999a) break;
    local_158 = *(undefined4 *)((longlong)&(this->LastBrushFrameWorld).Origin.field0_0x0 + 0x10);
    uStack_154 = *(undefined4 *)((longlong)&(this->LastBrushFrameWorld).Origin.field0_0x0 + 0x14);
    uStack_138 = _UNK_15061cbc8;
    uStack_134 = _UNK_15061cbcc;
    dVar2 = (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Y;
    local_148 = 0.0;
    (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.X =
         (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.X;
    (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Y = dVar2;
    *(undefined4 *)((longlong)&(this->LastBrushFrameWorld).Origin.field0_0x0 + 0x10) = local_158;
    *(undefined4 *)((longlong)&(this->LastBrushFrameWorld).Origin.field0_0x0 + 0x14) = uStack_154;
    *(undefined4 *)&(this->LastBrushFrameWorld).Rotation.field0_0x0 = 0;
    *(undefined4 *)((longlong)&(this->LastBrushFrameWorld).Rotation.field0_0x0 + 4) = 0;
    uStack_150 = 0;
    uStack_140 = (double)CONCAT44(uVar29,uVar28);
    *(undefined4 *)((longlong)&(this->LastBrushFrameWorld).Rotation.field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&(this->LastBrushFrameWorld).Rotation.field0_0x0 + 0xc) = 0;
    *(undefined4 *)((longlong)&(this->LastBrushFrameWorld).Rotation.field0_0x0 + 0x10) = uVar28;
    *(undefined4 *)((longlong)&(this->LastBrushFrameWorld).Rotation.field0_0x0 + 0x14) = uVar29;
    *(undefined4 *)((longlong)&(this->LastBrushFrameWorld).Rotation.field0_0x0 + 0x18) = uVar15;
    *(undefined4 *)((longlong)&(this->LastBrushFrameWorld).Rotation.field0_0x0 + 0x1c) = uVar16;
    if (bVar14) break;
    bVar14 = true;
  }
  cVar17 = (**(code **)(this->_padding_ + 0x568))(this);
  if ((cVar17 == '\0') ||
     (fVar1 = ((this->BrushProperties).field0_0x0.DebugPtr)->Lazyness, fVar1 <= 0.0)) {
    (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.X = local_130._s_0.X;
    (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Y = local_130._s_0.Y;
    local_res8 = SUB84(dVar3,0);
    uStackX_c = (undefined4)((ulonglong)dVar3 >> 0x20);
    *(undefined4 *)((longlong)&(this->LastBrushFrameWorld).Origin.field0_0x0 + 0x10) = local_res8;
    *(undefined4 *)((longlong)&(this->LastBrushFrameWorld).Origin.field0_0x0 + 0x14) = uStackX_c;
    (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.X = dVar4;
    auVar10._8_4_ = uVar30;
    auVar10._0_8_ = dVar21;
    auVar10._12_4_ = uVar31;
    *(undefined1 (*) [16])((longlong)&(this->LastBrushFrameWorld).Rotation.field0_0x0 + 8) = auVar10
    ;
    (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.W = TStack_2b0._s_0.W;
  }
  else {
    dVar2 = (double)fVar1;
    if (dVar11 <= dVar2) {
      dVar2 = dVar11;
    }
    dVar21 = dVar2 * __real_3fb999999999999a + (dVar11 - dVar2);
    dVar11 = dVar11 - dVar21;
    dVar2 = (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Y;
    dVar4 = (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Z;
    (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.X =
         dVar21 * dVar12 + dVar11 * (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.X;
    (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Y = dVar11 * dVar2 + dVar21 * dVar13;
    (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Z = dVar21 * dVar3 + dVar11 * dVar4;
    pTVar18 = UE::Geometry::TQuaternion<double>::TQuaternion<double>
                        ((TQuaternion<double> *)&local_130._s_0,
                         &(this->LastBrushFrameWorld).Rotation,
                         (TQuaternion<double> *)&TStack_2b0._s_0,dVar21);
    dVar11 = (pTVar18->field0_0x0)._s_0.Y;
    (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.X = (pTVar18->field0_0x0)._s_0.X;
    (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.Y = dVar11;
    dVar11 = (pTVar18->field0_0x0)._s_0.W;
    (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.Z = (pTVar18->field0_0x0)._s_0.Z;
    (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.W = dVar11;
  }
  dVar12 = __real_3e45798ee2308c3a;
  dVar11 = local_1b0 - (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.X;
  dVar2 = dStack_1a8 - (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Y;
  dVar3 = local_1a0 - (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Z;
  dVar4 = (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Z;
  dVar21 = (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.X;
  this->ActiveStrokePathArcLen =
       SQRT(dVar2 * dVar2 + dVar11 * dVar11 + dVar3 * dVar3) + this->ActiveStrokePathArcLen;
  dVar11 = (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.Y;
  (this->LastBrushFrameLocal).Origin.field0_0x0._s_0.X =
       (this->LastBrushFrameWorld).Origin.field0_0x0._s_0.X;
  (this->LastBrushFrameLocal).Origin.field0_0x0._s_0.Y = dVar11;
  dVar2 = (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.Y;
  dVar3 = (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.Z;
  (this->LastBrushFrameLocal).Origin.field0_0x0._s_0.Z = dVar4;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.X = dVar21;
  dVar11 = (this->LastBrushFrameWorld).Rotation.field0_0x0._s_0.W;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.Y = dVar2;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.Z = dVar3;
  (this->LastBrushFrameLocal).Rotation.field0_0x0._s_0.W = dVar11;
  pTVar19 = UE::Geometry::TTransformSRT3<double>::InverseUnsafe
                      (&this->CurTargetTransform,local_110,dVar12);
  UE::Geometry::TFrame3<double>::Transform(&this->LastBrushFrameLocal,pTVar19);
  return;
}

// UpdateBrushPositionOnActivePlane @ 14cd339a0

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
UMeshSculptToolBase::UpdateBrushPositionOnActivePlane
          (UMeshSculptToolBase *this,TRay<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 TStack_60;
  TVector<double> local_48 [2];
  
  this->LastBrushTriangleID = -1;
  local_78._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_78._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  local_78._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  TStack_60._s_0.X = (param_1->Direction).field0_0x0._s_0.X;
  TStack_60._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
  TStack_60._s_0.Z = (param_1->Direction).field0_0x0._s_0.Z;
  UE::Geometry::TFrame3<double>::RayPlaneIntersection
            (&this->ActiveBrushTargetPlaneWorld,(TVector<double> *)&local_78._s_0,
             (TVector<double> *)&TStack_60._s_0,2,local_48);
  dVar1 = (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.X;
  dVar2 = (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Y;
  dVar4 = (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Z;
  dVar3 = (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.W;
  dVar4 = dVar4 + dVar4;
  local_78._s_0.X = dVar3 * (dVar2 + dVar2) + dVar4 * dVar1;
  local_78._s_0.Y = dVar4 * dVar2 - dVar3 * (dVar1 + dVar1);
  local_78._s_0.Z = __real_3ff0000000000000 - ((dVar2 + dVar2) * dVar2 + (dVar1 + dVar1) * dVar1);
  UpdateBrushFrameWorld(this,local_48,(TVector<double> *)&local_78._s_0);
  return true;
}

// UpdateBrushPositionOnSculptMesh @ 14cd33ab0

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
UMeshSculptToolBase::UpdateBrushPositionOnSculptMesh
          (UMeshSculptToolBase *this,TRay<double> *param_1,bool param_2)

{
  bool bVar1;
  int local_res8 [2];
  TVector<double> local_68;
  TVector<double> local_50;
  TRay<double> local_38;
  
  this->LastBrushTriangleID = -1;
  GetLocalRay(this,&local_38,param_1);
  bVar1 = ProjectWorldRayOnSculptMesh(this,param_1,param_2,&local_50,&local_68,local_res8);
  UpdateBrushFrameWorld(this,&local_50,&local_68);
  (**(code **)(this->_padding_ + 0x548))(this,local_res8[0],&local_38);
  if (local_res8[0] != -1) {
    this->LastBrushTriangleID = local_res8[0];
  }
  return bVar1;
}

// UpdateBrushPositionOnTargetMesh @ 14cd33b70

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
UMeshSculptToolBase::UpdateBrushPositionOnTargetMesh
          (UMeshSculptToolBase *this,TRay<double> *param_1,bool param_2)

{
  bool bVar1;
  int local_res8 [2];
  TVector<double> local_68;
  TVector<double> local_50;
  TRay<double> local_38;
  
  this->LastBrushTriangleID = -1;
  GetLocalRay(this,&local_38,param_1);
  bVar1 = ProjectWorldRayOnTargetMesh(this,param_1,param_2,&local_50,&local_68,local_res8);
  UpdateBrushFrameWorld(this,&local_50,&local_68);
  (**(code **)(this->_padding_ + 0x550))(this,local_res8[0],&local_38);
  if (local_res8[0] != -1) {
    this->LastBrushTriangleID = local_res8[0];
  }
  return bVar1;
}

// UpdateBrushTargetPlaneFromHit @ 14cd33c30

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
UMeshSculptToolBase::UpdateBrushTargetPlaneFromHit
          (UMeshSculptToolBase *this,TRay<double> *param_1,FHitResult *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  TVector<double>_u_0 local_c8;
  TVector<double>_u_0 local_b0;
  double local_98;
  double dStack_90;
  double local_88;
  TQuaternion<double>_u_0 aTStack_80 [3];
  
  auVar1 = *(undefined1 (*) [16])((longlong)&(param_1->Direction).field0_0x0 + 8);
  dVar7 = (param_1->Origin).field0_0x0._s_0.X;
  dVar8 = (param_1->Origin).field0_0x0._s_0.Y;
  auVar2 = *(undefined1 (*) [16])((longlong)&(param_1->Origin).field0_0x0 + 0x10);
  dVar6 = (double)param_2->Distance;
  pcVar3 = *(code **)(this->_padding_ + 0x4c8);
  dVar5 = (double)(**(code **)(this->_padding_ + 0x4a0))();
  dVar4 = (double)(*pcVar3)(this);
  uVar9 = (uint)__xmm_80000000000000008000000000000000;
  uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar5 = dVar5 * dVar4;
  local_c8._s_0.X = (double)CONCAT44(auVar2._12_4_ ^ uVar10,auVar2._8_4_ ^ uVar9);
  local_c8._s_0.Y = (double)CONCAT44(auVar1._4_4_ ^ uVar10,auVar1._0_4_ ^ uVar9);
  local_c8._s_0.Z = (double)CONCAT44(auVar1._12_4_ ^ uVar10,auVar1._8_4_ ^ uVar9);
  aTStack_80[0]._s_0.W = __real_3ff0000000000000;
  aTStack_80[0]._s_0.X = 0.0;
  aTStack_80[0]._s_0.Y = 0.0;
  aTStack_80[0]._s_0.Z = 0.0;
  local_98 = dVar6 * auVar2._8_8_ + dVar7 + dVar5 * auVar2._8_8_;
  dStack_90 = dVar6 * auVar1._0_8_ + dVar8 + dVar5 * auVar1._0_8_;
  local_88 = dVar6 * auVar1._8_8_ + auVar2._0_8_ + dVar5 * auVar1._8_8_;
  local_b0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
  local_b0._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
  local_b0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
  UE::Geometry::TQuaternion<double>::SetFromTo
            ((TQuaternion<double> *)&aTStack_80[0]._s_0,(TVector<double> *)&local_b0._s_0,
             (TVector<double> *)&local_c8._s_0);
  (this->ActiveBrushTargetPlaneWorld).Origin.field0_0x0._s_0.X = local_98;
  (this->ActiveBrushTargetPlaneWorld).Origin.field0_0x0._s_0.Y = dStack_90;
  (this->ActiveBrushTargetPlaneWorld).Origin.field0_0x0._s_0.Z = local_88;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.X = (double)aTStack_80[0]._0_8_;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Y = (double)aTStack_80[0]._8_8_;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.Z = (double)aTStack_80[0]._16_8_;
  (this->ActiveBrushTargetPlaneWorld).Rotation.field0_0x0._s_0.W = (double)aTStack_80[0]._24_8_;
  return;
}

// UpdateColorSetting @ 14cd345f0

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
UMeshSculptToolBase::UpdateColorSetting(UMeshSculptToolBase *this,FLinearColor *param_1)

{
  UMaterialInstanceDynamic *this_00;
  FName *pFVar1;
  FName local_res8;
  FLinearColor_u_0 local_18;
  
  if ((((this->ViewProperties).field0_0x0.DebugPtr)->MaterialMode != Transparent) &&
     (this_00 = (this->ActiveOverrideMaterial).field0_0x0.DebugPtr,
     this_00 != (UMaterialInstanceDynamic *)0x0)) {
    pFVar1 = ::FName::FName(&local_res8,L"Color");
    local_18._0_8_ = *(undefined8 *)&param_1->field0_0x0;
    local_18._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    UMaterialInstanceDynamic::SetVectorParameterValue
              (this_00,*pFVar1,(FLinearColor *)&local_18._s_0);
  }
  return;
}

// UpdateCustomMaterial @ 14cd34660

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
UMeshSculptToolBase::UpdateCustomMaterial
          (UMeshSculptToolBase *this,TWeakObjectPtr<UMaterialInterface,FWeakObjectPtr> param_1)

{
  bool bVar1;
  UMaterialInterface *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  longlong *plVar4;
  FWeakObjectPtr local_res10;
  
  if (((this->ViewProperties).field0_0x0.DebugPtr)->MaterialMode == Custom) {
    local_res10 = param_1.WeakPtr;
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar1) {
      pUVar2 = (UMaterialInterface *)FWeakObjectPtr::Get(&local_res10);
      pUVar3 = UMaterialInstanceDynamic::Create(pUVar2,(UObject *)this,(FName)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar3 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = pUVar3;
      plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x430))(this);
      (**(code **)(*plVar4 + 0xbf0))(plVar4,(this->ActiveOverrideMaterial).field0_0x0.DebugPtr);
      return;
    }
    plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x430))(this);
    (**(code **)(*plVar4 + 0xbf8))(plVar4);
    (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  }
  return;
}

// UpdateFixedPlaneGizmoVisibility @ 14cd34740

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
UMeshSculptToolBase::UpdateFixedPlaneGizmoVisibility(UMeshSculptToolBase *this,bool param_1)

{
  code *pcVar1;
  UWorkPlaneProperties *pUVar2;
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

// UpdateFixedSculptPlanePosition @ 14cd34910

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
UMeshSculptToolBase::UpdateFixedSculptPlanePosition
          (UMeshSculptToolBase *this,TVector<double> *param_1)

{
  double dVar1;
  UWorkPlaneProperties *pUVar2;
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

// UpdateFixedSculptPlaneRotation @ 14cd349a0

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
UMeshSculptToolBase::UpdateFixedSculptPlaneRotation
          (UMeshSculptToolBase *this,TQuat<double> *param_1)

{
  UWorkPlaneProperties *pUVar1;
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

// UpdateFlatShadingSetting @ 14cd34a90

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
UMeshSculptToolBase::UpdateFlatShadingSetting(UMeshSculptToolBase *this,bool param_1)

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

// UpdateGizmoFromProperties @ 14cd34af0

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

void __thiscall UMeshSculptToolBase::UpdateGizmoFromProperties(UMeshSculptToolBase *this)

{
  UCombinedTransformGizmo *pUVar1;
  UWorkPlaneProperties *pUVar2;
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

// UpdateHitSculptMeshTriangle @ 14cd34ba0

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
UMeshSculptToolBase::UpdateHitSculptMeshTriangle
          (UMeshSculptToolBase *this,int param_1,TRay<double> *param_2)

{
  return;
}

// UpdateHitTargetMeshTriangle @ 14cd34bb0

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
UMeshSculptToolBase::UpdateHitTargetMeshTriangle
          (UMeshSculptToolBase *this,int param_1,TRay<double> *param_2)

{
  return;
}

// UpdateHoverStamp @ 14cd34bc0

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
UMeshSculptToolBase::UpdateHoverStamp(UMeshSculptToolBase *this,TFrame3<double> *param_1)

{
  TFrame3<double> *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TTransformSRT3<double> *pTVar7;
  TTransformSRT3<double> local_58;
  
  dVar6 = __real_3e45798ee2308c3a;
  dVar1 = (param_1->Origin).field0_0x0._s_0.Y;
  this_00 = &(this->HoverStamp).LocalFrame;
  (this->HoverStamp).WorldFrame.Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  (this->HoverStamp).WorldFrame.Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.X;
  (this->HoverStamp).WorldFrame.Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  (this->HoverStamp).WorldFrame.Rotation.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Z;
  (this->HoverStamp).WorldFrame.Rotation.field0_0x0._s_0.Y = (param_1->Rotation).field0_0x0._s_0.Y;
  (this->HoverStamp).WorldFrame.Rotation.field0_0x0._s_0.Z = dVar1;
  (this->HoverStamp).WorldFrame.Rotation.field0_0x0._s_0.W = (param_1->Rotation).field0_0x0._s_0.W;
  dVar1 = (this->HoverStamp).WorldFrame.Origin.field0_0x0._s_0.Y;
  dVar2 = (this->HoverStamp).WorldFrame.Origin.field0_0x0._s_0.Z;
  dVar3 = (this->HoverStamp).WorldFrame.Rotation.field0_0x0._s_0.X;
  (this_00->Origin).field0_0x0._s_0.X = (this->HoverStamp).WorldFrame.Origin.field0_0x0._s_0.X;
  (this->HoverStamp).LocalFrame.Origin.field0_0x0._s_0.Y = dVar1;
  dVar4 = (this->HoverStamp).WorldFrame.Rotation.field0_0x0._s_0.Y;
  dVar5 = (this->HoverStamp).WorldFrame.Rotation.field0_0x0._s_0.Z;
  (this->HoverStamp).LocalFrame.Origin.field0_0x0._s_0.Z = dVar2;
  (this->HoverStamp).LocalFrame.Rotation.field0_0x0._s_0.X = dVar3;
  dVar1 = (this->HoverStamp).WorldFrame.Rotation.field0_0x0._s_0.W;
  (this->HoverStamp).LocalFrame.Rotation.field0_0x0._s_0.Y = dVar4;
  (this->HoverStamp).LocalFrame.Rotation.field0_0x0._s_0.Z = dVar5;
  (this->HoverStamp).LocalFrame.Rotation.field0_0x0._s_0.W = dVar1;
  pTVar7 = UE::Geometry::TTransformSRT3<double>::InverseUnsafe
                     (&this->CurTargetTransform,&local_58,dVar6);
  UE::Geometry::TFrame3<double>::Transform(this_00,pTVar7);
  return;
}

// UpdateImageSetting @ 14cd34e50

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
UMeshSculptToolBase::UpdateImageSetting(UMeshSculptToolBase *this,UTexture2D *param_1)

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

// UpdateMaterialMode @ 14cd34fc0

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
UMeshSculptToolBase::UpdateMaterialMode(UMeshSculptToolBase *this,EMeshEditingMaterialModes param_1)

{
  double dVar1;
  UTexture2D *pUVar2;
  UMeshEditingViewProperties *pUVar3;
  bool bVar4;
  longlong *plVar5;
  UPrimitiveComponent *pUVar6;
  UMaterialInterface *pUVar7;
  UMaterialInstanceDynamic *pUVar8;
  UInteractiveToolManager *pUVar9;
  FName *pFVar10;
  float fVar11;
  FName local_res18 [2];
  
  if (param_1 == ExistingMaterial) {
    plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x430))();
    (**(code **)(*plVar5 + 0xbf8))(plVar5);
    pUVar6 = UE::ToolTarget::GetTargetComponent((UToolTarget *)this->_padding_);
    if (pUVar6 != (UPrimitiveComponent *)0x0) {
      plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x430))(this);
      (**(code **)(*plVar5 + 0xbd0))(plVar5,pUVar6->bCastDynamicShadow);
    }
    (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
    return;
  }
  if (param_1 == Custom) {
    bVar4 = FWeakObjectPtr::IsValid
                      (&(((this->ViewProperties).field0_0x0.DebugPtr)->CustomMaterial).WeakPtr);
    if (bVar4) {
      local_res18[0].ComparisonIndex.Value = 0;
      local_res18[0].Number = 0;
      pUVar7 = (UMaterialInterface *)
               FWeakObjectPtr::Get(&(((this->ViewProperties).field0_0x0.DebugPtr)->CustomMaterial).
                                    WeakPtr);
      pUVar8 = UMaterialInstanceDynamic::Create(pUVar7,(UObject *)this,(FName)0x0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar8 != (UMaterialInstanceDynamic *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
        (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = pUVar8;
        goto LAB_14cd35265;
      }
    }
    else {
      plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x430))(this);
      (**(code **)(*plVar5 + 0xbf8))(plVar5);
      pUVar8 = (UMaterialInstanceDynamic *)0x0;
    }
    (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = pUVar8;
  }
  else if (param_1 == CustomImage) {
    pUVar2 = (((this->ViewProperties).field0_0x0.DebugPtr)->Image).field0_0x0.DebugPtr;
    pUVar9 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
    pUVar8 = ToolSetupUtil::GetCustomImageBasedSculptMaterial(pUVar9,(UTexture *)pUVar2);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = pUVar8;
    pUVar2 = (((this->ViewProperties).field0_0x0.DebugPtr)->Image).field0_0x0.DebugPtr;
    if (pUVar2 != (UTexture2D *)0x0) {
      pFVar10 = ::FName::FName(local_res18,L"ImageTexture");
      UMaterialInstanceDynamic::SetTextureParameterValue(pUVar8,*pFVar10,(UTexture *)pUVar2);
    }
  }
  else {
    if (param_1 == VertexColor) {
      pUVar9 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
      pUVar8 = ToolSetupUtil::GetVertexColorMaterial(pUVar9,false);
    }
    else if (param_1 == Transparent) {
      pUVar3 = (this->ViewProperties).field0_0x0.DebugPtr;
      bVar4 = pUVar3->bTwoSided;
      dVar1 = pUVar3->Opacity;
      pUVar9 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
      pUVar8 = ToolSetupUtil::GetTransparentSculptMaterial
                         (pUVar9,&pUVar3->TransparentMaterialColor,dVar1,bVar4);
    }
    else {
      if (param_1 == Diffuse) {
        pUVar9 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
        pUVar7 = ToolSetupUtil::GetDefaultSculptMaterial(pUVar9);
      }
      else if (param_1 == Grey) {
        pUVar9 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
        pUVar7 = ToolSetupUtil::GetImageBasedSculptMaterial(pUVar9,DefaultBasic);
      }
      else if (param_1 == Soft) {
        pUVar9 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
        pUVar7 = ToolSetupUtil::GetImageBasedSculptMaterial(pUVar9,DefaultSoft);
      }
      else {
        if (param_1 != TangentNormal) goto LAB_14cd35265;
        pUVar9 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
        pUVar7 = ToolSetupUtil::GetImageBasedSculptMaterial(pUVar9,TangentNormalFromView);
      }
      if (pUVar7 == (UMaterialInterface *)0x0) goto LAB_14cd35265;
      local_res18[0].ComparisonIndex.Value = 0;
      local_res18[0].Number = 0;
      pUVar8 = UMaterialInstanceDynamic::Create(pUVar7,(UObject *)this,(FName)0x0);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar8 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar8);
    }
    (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = pUVar8;
  }
LAB_14cd35265:
  if ((this->ActiveOverrideMaterial).field0_0x0.DebugPtr != (UMaterialInstanceDynamic *)0x0) {
    plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x430))(this);
    (**(code **)(*plVar5 + 0xbf0))(plVar5,(this->ActiveOverrideMaterial).field0_0x0.DebugPtr);
    pUVar8 = (this->ActiveOverrideMaterial).field0_0x0.DebugPtr;
    fVar11 = __real_3f800000;
    if (((this->ViewProperties).field0_0x0.DebugPtr)->bFlatShading == false) {
      fVar11 = 0.0;
    }
    pFVar10 = ::FName::FName(local_res18,L"FlatShading");
    UMaterialInstanceDynamic::SetScalarParameterValue(pUVar8,*pFVar10,fVar11);
  }
  plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x430))(this);
                    /* WARNING: Could not recover jumptable at 0x00014cd352ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0xbd0))(plVar5,0,*(code **)(*plVar5 + 0xbd0));
  return;
}

// UpdateOpacitySetting @ 14cd357d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::UpdateOpacitySetting(UMeshSculptToolBase *this,double param_1)

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

// UpdateStampPendingState @ 14cd3a460

/* WARNING: Type propagation algorithm not settling */
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

void __thiscall UMeshSculptToolBase::UpdateStampPendingState(UMeshSculptToolBase *this)

{
  int *piVar1;
  TArray<UMeshSculptToolBase::FInputRayData,TSizedDefaultAllocator<32>_> *pTVar2;
  TOptional<UE::Math::TVector<double>_> *pTVar3;
  double dVar4;
  EMeshSculptStrokeType EVar5;
  USculptBrushProperties *pUVar6;
  FScriptContainerElement *pFVar7;
  FInputRayData *pFVar8;
  code *pcVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char cVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  longlong lVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  int *piVar27;
  TRay<double> *pTVar28;
  TArray<UMeshSculptToolBase::FStampRayData,TSizedDefaultAllocator<32>_> *pTVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  int *local_res8;
  undefined1 local_res10 [8];
  int local_res18 [2];
  uint local_res20 [2];
  UMeshSculptToolBase *local_338;
  TVector<double>_u_0 local_330;
  uint local_310 [2];
  uint *local_308;
  UMeshSculptToolBase *local_300;
  UMeshSculptToolBase *local_2f8;
  UMeshSculptToolBase **local_2f0;
  double local_2e8;
  double local_2e0;
  double dStack_2d8;
  undefined4 local_2d0;
  undefined4 uStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  double local_2c0;
  double dStack_2b8;
  undefined8 local_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  double local_288;
  double dStack_280;
  undefined8 local_278;
  double local_270;
  double dStack_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  double local_250;
  double dStack_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  TVector<double>_u_0 local_1c8;
  UMeshSculptToolBase *local_1b0;
  double *local_1a8;
  UMeshSculptToolBase **local_1a0;
  double local_198;
  double local_190;
  double local_188;
  TQuaternion<double>_u_0 local_180;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  TVector<double>_u_0 local_118;
  TVector<double> local_100;
  TVector<double> local_e8 [3];
  undefined8 local_a0;
  
  cVar14 = (**(code **)(this->_padding_ + 0x568))();
  if (cVar14 == '\0') {
    return;
  }
  pTVar29 = &this->PendingStampRays;
  piVar27 = &(this->PendingStampRays).ArrayMax;
  uVar25 = 0;
  piVar1 = &(this->PendingStampRays).ArrayNum;
  *piVar1 = 0;
  if (*piVar27 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&pTVar29->AllocatorInstance,0,piVar27);
  }
  puVar19 = (undefined8 *)(**(code **)(this->_padding_ + 0x478))(this);
  cVar14 = (**(code **)(*(longlong *)*puVar19 + 0x80))
                     ((longlong *)*puVar19,((this->BrushProperties).field0_0x0.DebugPtr)->StrokeType
                     );
  fVar30 = __real_38d1b717;
  if (cVar14 == '\0') {
    local_2e0 = (this->PendingStampRay).Origin.field0_0x0._s_0.X;
    dStack_2d8 = (this->PendingStampRay).Origin.field0_0x0._s_0.Y;
    local_2d0 = *(undefined4 *)((longlong)&(this->PendingStampRay).Origin.field0_0x0 + 0x10);
    uStack_2cc = *(undefined4 *)((longlong)&(this->PendingStampRay).Origin.field0_0x0 + 0x14);
    uStack_2c8 = *(undefined4 *)&(this->PendingStampRay).Direction.field0_0x0;
    uStack_2c4 = *(undefined4 *)((longlong)&(this->PendingStampRay).Direction.field0_0x0 + 4);
    local_2c0 = (this->PendingStampRay).Direction.field0_0x0._s_0.Y;
    dStack_2b8 = (this->PendingStampRay).Direction.field0_0x0._s_0.Z;
    local_2b0 = (**(code **)(this->_padding_ + 0x4b0))(this);
    pFVar22 = (pTVar29->AllocatorInstance).Data;
    if (((pFVar22 <= (FScriptContainerElement *)&local_2e0) &&
        ((FScriptContainerElement *)&local_2e0 < pFVar22 + (longlong)*piVar27 * 0x38)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar17 = *piVar1;
    if (iVar17 == *piVar27) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,&pTVar29->AllocatorInstance,piVar27);
    }
    *piVar1 = iVar17 + 1;
    lVar20 = (longlong)iVar17 * 0x38;
    pFVar22 = (pTVar29->AllocatorInstance).Data;
    *(double *)(pFVar22 + lVar20) = local_2e0;
    *(double *)(pFVar22 + lVar20 + 8) = dStack_2d8;
    *(ulonglong *)(pFVar22 + lVar20 + 0x10) = CONCAT44(uStack_2cc,local_2d0);
    *(ulonglong *)(pFVar22 + lVar20 + 0x10 + 8) = CONCAT44(uStack_2c4,uStack_2c8);
    *(double *)(pFVar22 + lVar20 + 0x20) = local_2c0;
    *(double *)(pFVar22 + lVar20 + 0x20 + 8) = dStack_2b8;
    *(undefined8 *)(pFVar22 + lVar20 + 0x30) = local_2b0;
    this->bIsStampPending = true;
    return;
  }
  pUVar6 = (this->BrushProperties).field0_0x0.DebugPtr;
  EVar5 = pUVar6->StrokeType;
  if (EVar5 == Spacing) {
    iVar17 = (this->PendingInputRays).ArrayNum;
    if (iVar17 == 0) {
      this->bIsStampPending = false;
      return;
    }
    this->bIsStampPending = true;
    uVar24 = 0;
    local_338 = this;
    if (fVar30 < pUVar6->RayDensity) {
      local_158._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_158._s_0.Y = _UNK_150689518;
      local_158._s_0.Z = 0.0;
      UE::Math::TQuat<double>::RotateVector
                (&(this->CameraState).Orientation,local_e8,(TVector<double> *)&local_158._s_0);
      local_138._s_0.X = ___xmm_00000000000000003ff0000000000000;
      local_138._s_0.Y = _UNK_150689518;
      local_138._s_0.Z = 0.0;
      UE::Math::TQuat<double>::RotateVector
                (&(this->CameraState).Orientation,(TVector<double> *)&local_1c8._s_0,
                 (TVector<double> *)&local_138._s_0);
      local_198 = local_1c8._s_0.X + (this->CameraState).Position.field0_0x0._s_0.X;
      local_180._s_0.W = __real_3ff0000000000000;
      local_190 = local_1c8._s_0.Y + (this->CameraState).Position.field0_0x0._s_0.Y;
      local_180._s_0.X = 0.0;
      local_188 = local_1c8._s_0.Z + (this->CameraState).Position.field0_0x0._s_0.Z;
      local_180._s_0.Y = 0.0;
      local_180._s_0.Z = 0.0;
      local_118._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_118._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_118._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      UE::Geometry::TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)&local_180._s_0,(TVector<double> *)&local_118._s_0,local_e8)
      ;
      if ((this->CameraState).bIsOrthographic == false) {
        fVar30 = (this->CameraState).HorizontalFOVDegrees * __real_3f000000;
        if (__real_43330000 <= fVar30) {
          fVar30 = __real_43330000;
        }
        if (fVar30 <= 0.0) {
          fVar30 = 0.0;
        }
        fVar30 = tanf(fVar30 * __real_3c8efa35);
        fVar30 = fVar30 + fVar30;
      }
      else {
        fVar30 = (this->CameraState).OrthoWorldCoordinateWidth;
      }
      local_1a8 = &local_198;
      pTVar2 = &this->PendingInputRays;
      local_1a0 = &local_338;
      piVar27 = &(this->PendingInputRays).ArrayNum;
      local_2f0 = &local_1b0;
      iVar17 = *piVar27;
      local_2e8 = (double)fVar30 * __real_3f747ae147ae147b;
      local_2f8 = this;
      local_1b0 = this;
      if ((this->PreviousInputRay).bIsSet == false) {
        if ((iVar17 < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar22 = (pTVar2->AllocatorInstance).Data;
        local_200 = *(undefined8 *)pFVar22;
        uStack_1f8 = *(undefined8 *)(pFVar22 + 8);
        local_1f0 = *(undefined8 *)(pFVar22 + 0x10);
        uStack_1e8 = *(undefined8 *)(pFVar22 + 0x18);
        local_1e0 = *(undefined8 *)(pFVar22 + 0x20);
        uStack_1d8 = *(undefined8 *)(pFVar22 + 0x28);
        if ((*piVar27 < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar22 = (pTVar29->AllocatorInstance).Data;
        local_1d0 = *(undefined8 *)((pTVar2->AllocatorInstance).Data + 0x38);
        if (((pFVar22 <= (FScriptContainerElement *)&local_200) &&
            ((FScriptContainerElement *)&local_200 <
             pFVar22 + (longlong)(this->PendingStampRays).ArrayMax * 0x38)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar17 = *piVar1;
        if (iVar17 == (this->PendingStampRays).ArrayMax) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&pTVar29->AllocatorInstance,&(this->PendingStampRays).ArrayMax);
        }
        *piVar1 = iVar17 + 1;
        lVar20 = (longlong)iVar17 * 0x38;
        pFVar22 = (pTVar29->AllocatorInstance).Data;
        *(undefined8 *)(pFVar22 + lVar20) = local_200;
        *(undefined8 *)(pFVar22 + lVar20 + 8) = uStack_1f8;
        *(undefined8 *)(pFVar22 + lVar20 + 0x10) = local_1f0;
        *(undefined8 *)(pFVar22 + lVar20 + 0x10 + 8) = uStack_1e8;
        *(undefined8 *)(pFVar22 + lVar20 + 0x20) = local_1e0;
        *(undefined8 *)(pFVar22 + lVar20 + 0x20 + 8) = uStack_1d8;
        *(undefined8 *)(pFVar22 + lVar20 + 0x30) = local_1d0;
      }
      else {
        if ((iVar17 < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pFVar8 = (FInputRayData *)(pTVar2->AllocatorInstance).Data;
        if (((this->PreviousInputRay).bIsSet == false) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsSet()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                ,0x1bd,
                                L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        `UMeshSculptToolBase::UpdateStampPendingState'::__l31::<lambda_4>::operator()
                  (&local_2f8,&(this->PreviousInputRay).TypedValue,pFVar8);
      }
      uVar23 = 1;
      if (1 < (this->PendingInputRays).ArrayNum) {
        do {
          local_res8 = &(this->PendingInputRays).ArrayNum;
          uVar21 = 0;
          if ((int)uVar23 < *local_res8) {
            uVar21 = ~uVar23 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar22 = (this->PendingInputRays).AllocatorInstance.Data;
          uVar21 = uVar24;
          if ((int)(uVar23 - 1) < *local_res8) {
            uVar21 = -uVar23 >> 0x1f;
          }
          if ((uVar21 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          `UMeshSculptToolBase::UpdateStampPendingState'::__l31::<lambda_4>::operator()
                    (&local_2f8,
                     (FInputRayData *)
                     ((this->PendingInputRays).AllocatorInstance.Data +
                     (longlong)(int)(uVar23 - 1) * 0x40),
                     (FInputRayData *)(pFVar22 + (longlong)(int)uVar23 * 0x40));
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < (this->PendingInputRays).ArrayNum);
      }
    }
    else {
      pFVar22 = (this->PendingInputRays).AllocatorInstance.Data;
      pFVar26 = pFVar22 + (longlong)iVar17 * 0x40;
      while( true ) {
        if ((this->PendingInputRays).ArrayNum != iVar17) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<UMeshSculptToolBase::FInputRayData_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar22 == pFVar26) break;
        local_208 = *(undefined8 *)(pFVar22 + 0x38);
        local_238 = *(undefined8 *)pFVar22;
        uStack_230 = *(undefined8 *)(pFVar22 + 8);
        pFVar7 = (pTVar29->AllocatorInstance).Data;
        local_228 = *(undefined8 *)(pFVar22 + 0x10);
        uStack_220 = *(undefined8 *)(pFVar22 + 0x18);
        local_218 = *(undefined1 (*) [16])(pFVar22 + 0x20);
        local_a0 = local_208;
        if (((pFVar7 <= (FScriptContainerElement *)&local_238) &&
            ((FScriptContainerElement *)&local_238 <
             pFVar7 + (longlong)(this->PendingStampRays).ArrayMax * 0x38)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar18 = *piVar1;
        if (iVar18 == (this->PendingStampRays).ArrayMax) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x838,&pTVar29->AllocatorInstance,&(this->PendingStampRays).ArrayMax);
        }
        *piVar1 = iVar18 + 1;
        lVar20 = (longlong)iVar18 * 0x38;
        pFVar7 = (pTVar29->AllocatorInstance).Data;
        pFVar22 = pFVar22 + 0x40;
        *(undefined8 *)(pFVar7 + lVar20) = local_238;
        *(undefined8 *)(pFVar7 + lVar20 + 8) = uStack_230;
        *(undefined8 *)(pFVar7 + lVar20 + 0x10) = local_228;
        *(undefined8 *)(pFVar7 + lVar20 + 0x10 + 8) = uStack_220;
        *(undefined8 *)(pFVar7 + lVar20 + 0x20) = local_218._0_8_;
        *(undefined8 *)(pFVar7 + lVar20 + 0x20 + 8) = local_218._8_8_;
        *(undefined8 *)(pFVar7 + lVar20 + 0x30) = local_208;
      }
    }
    piVar27 = &(this->PendingInputRays).ArrayNum;
    pTVar29 = &this->PendingStampRays;
    uVar21 = *piVar27 - 1;
    uVar23 = uVar24;
    if ((int)uVar21 < *piVar27) {
      uVar23 = ~uVar21 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar22 = (this->PendingInputRays).AllocatorInstance.Data + (longlong)*piVar27 * 0x40 + -0x40;
    if ((TOptional<UMeshSculptToolBase::FInputRayData> *)pFVar22 != &this->PreviousInputRay) {
      dVar4 = *(double *)(pFVar22 + 8);
      (this->PreviousInputRay).TypedValue.Ray.Origin.field0_0x0._s_0.X = *(double *)pFVar22;
      (this->PreviousInputRay).TypedValue.Ray.Origin.field0_0x0._s_0.Y = dVar4;
      dVar4 = *(double *)(pFVar22 + 0x18);
      (this->PreviousInputRay).TypedValue.Ray.Origin.field0_0x0._s_0.Z = *(double *)(pFVar22 + 0x10)
      ;
      (this->PreviousInputRay).TypedValue.Ray.Direction.field0_0x0._s_0.X = dVar4;
      dVar4 = *(double *)(pFVar22 + 0x28);
      (this->PreviousInputRay).TypedValue.Ray.Direction.field0_0x0._s_0.Y =
           *(double *)(pFVar22 + 0x20);
      (this->PreviousInputRay).TypedValue.Ray.Direction.field0_0x0._s_0.Z = dVar4;
      dVar4 = *(double *)(pFVar22 + 0x38);
      (this->PreviousInputRay).TypedValue.Timestamp = *(double *)(pFVar22 + 0x30);
      (this->PreviousInputRay).TypedValue.Pressure = dVar4;
      (this->PreviousInputRay).bIsSet = true;
    }
    *piVar27 = 0;
    if ((this->PendingInputRays).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,0,&(this->PendingInputRays).AllocatorInstance,0,
                 &(this->PendingInputRays).ArrayMax);
    }
    dVar4 = this->ActivePressure;
    this->ActivePressure = dVar4;
    local_res20[0] = 0;
    if (0 < (this->PendingStampRays).ArrayNum) {
      local_res8 = (int *)0x0;
      do {
        local_308 = local_res20;
        uVar23 = uVar24;
        if ((int)uVar25 < *piVar1) {
          uVar23 = ~uVar25 >> 0x1f;
        }
        local_310[0] = uVar25;
        local_300 = this;
        if ((uVar23 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar28 = (TRay<double> *)((pTVar29->AllocatorInstance).Data + (longlong)(int)uVar25 * 0x38)
        ;
        puVar19 = (undefined8 *)(**(code **)(local_338->_padding_ + 0x478))();
        local_res18[0] = -1;
        cVar14 = (**(code **)(*(longlong *)*puVar19 + 0x30))();
        if (cVar14 == '\0') {
          bVar15 = ProjectWorldRayOnSculptMesh
                             (local_338,pTVar28,true,(TVector<double> *)&local_330._s_0,&local_100,
                              local_res18);
LAB_14cd3b0b3:
          if (bVar15 == false) goto LAB_14cd3b0b7;
          uVar23 = uVar24;
          if ((int)uVar25 < *piVar1) {
            uVar23 = ~uVar25 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          this->ActivePressure =
               *(double *)((pTVar29->AllocatorInstance).Data + (longlong)local_res8 + 0x30);
          dVar31 = (double)(**(code **)(this->_padding_ + 0x498))(this);
          uVar13 = local_330._s_0.Z;
          uVar12 = local_330._s_0.Y;
          uVar11 = local_330._s_0.X;
          pTVar3 = &this->PreviousUnfilteredHitPosition;
          if ((this->PreviousUnfilteredHitPosition).bIsSet == false) {
            `UMeshSculptToolBase::UpdateStampPendingState'::__l40::<lambda_6>::operator()(local_310)
            ;
            if (&local_330 != (TVector<double>_u_0 *)pTVar3) {
              (pTVar3->TypedValue).field0_0x0._s_0.X = local_330._s_0.X;
              (this->PreviousUnfilteredHitPosition).TypedValue.field0_0x0._s_0.Y = local_330._s_0.Y;
              (this->PreviousUnfilteredHitPosition).TypedValue.field0_0x0._s_0.Z = local_330._s_0.Z;
LAB_14cd3b202:
              (this->PreviousUnfilteredHitPosition).bIsSet = true;
            }
LAB_14cd3b206:
            this->PreviousUnfilteredHitRadius = dVar31;
          }
          else {
            dVar10 = (pTVar3->TypedValue).field0_0x0._s_0.X - local_330._s_0.X;
            dVar33 = (this->PreviousUnfilteredHitPosition).TypedValue.field0_0x0._s_0.Y -
                     local_330._s_0.Y;
            dVar32 = (this->PreviousUnfilteredHitPosition).TypedValue.field0_0x0._s_0.Z -
                     local_330._s_0.Z;
            auVar34._0_8_ = dVar33 * dVar33 + dVar10 * dVar10 + dVar32 * dVar32;
            auVar34._8_8_ = 0;
            auVar34 = sqrtpd(auVar34,auVar34);
            if ((dVar31 + this->PreviousUnfilteredHitRadius) *
                (double)((this->BrushProperties).field0_0x0.DebugPtr)->Spacing <= auVar34._0_8_) {
              `UMeshSculptToolBase::UpdateStampPendingState'::__l40::<lambda_6>::operator()
                        (local_310);
              if (&local_330 != (TVector<double>_u_0 *)pTVar3) {
                (pTVar3->TypedValue).field0_0x0._s_0.X = (double)uVar11;
                (this->PreviousUnfilteredHitPosition).TypedValue.field0_0x0._s_0.Y = (double)uVar12;
                (this->PreviousUnfilteredHitPosition).TypedValue.field0_0x0._s_0.Z = (double)uVar13;
                goto LAB_14cd3b202;
              }
              goto LAB_14cd3b206;
            }
          }
        }
        else {
          if (cVar14 == '\x01') {
            bVar15 = ProjectWorldRayOnTargetMesh
                               (local_338,pTVar28,true,(TVector<double> *)&local_330._s_0,&local_100
                                ,local_res18);
            goto LAB_14cd3b0b3;
          }
          if (cVar14 == '\x02') {
            bVar15 = ProjectWorldRayOnActivePlane
                               (local_338,pTVar28,(TVector<double> *)&local_330._s_0,&local_100);
            goto LAB_14cd3b0b3;
          }
LAB_14cd3b0b7:
          `UMeshSculptToolBase::UpdateStampPendingState'::__l40::<lambda_6>::operator()(local_310);
        }
        local_res8 = (int *)((longlong)local_res8 + 0x38);
        uVar25 = uVar25 + 1;
      } while ((int)uVar25 < (this->PendingStampRays).ArrayNum);
    }
    uVar25 = local_res20[0];
    iVar17 = *piVar1;
    if (iVar17 < (int)local_res20[0]) {
      iVar17 = local_res20[0] - iVar17;
      iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x38,8,iVar17,&pTVar29->AllocatorInstance,piVar1,
                          &(this->PendingStampRays).ArrayMax);
      DefaultConstructItems<UMeshSculptToolBase::FStampRayData,int>
                ((pTVar29->AllocatorInstance).Data + (longlong)iVar18 * 0x38,iVar17);
    }
    else {
      if ((int)local_res20[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res20[0]);
      }
      if ((int)local_res20[0] < iVar17) {
        uVar24 = iVar17 - local_res20[0];
        if (((int)(uVar24 | local_res20[0]) < 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (uVar24 != 0) {
          pFVar22 = (pTVar29->AllocatorInstance).Data + (longlong)(int)uVar25 * 0x38;
          iVar17 = (*piVar1 - uVar24) - uVar25;
          if (iVar17 != 0) {
            memmove(pFVar22,pFVar22 + (longlong)(int)uVar24 * 0x38,(longlong)iVar17 * 0x38);
          }
          *piVar1 = *piVar1 - uVar24;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,&pTVar29->AllocatorInstance,*piVar1,&(this->PendingStampRays).ArrayMax);
        }
      }
    }
    this->ActivePressure = dVar4;
    return;
  }
  if (EVar5 != Airbrush) {
    if (EVar5 != Dots) {
      return;
    }
    local_2a8 = (this->PendingStampRay).Origin.field0_0x0._s_0.X;
    dStack_2a0 = (this->PendingStampRay).Origin.field0_0x0._s_0.Y;
    local_298 = *(undefined4 *)((longlong)&(this->PendingStampRay).Origin.field0_0x0 + 0x10);
    uStack_294 = *(undefined4 *)((longlong)&(this->PendingStampRay).Origin.field0_0x0 + 0x14);
    uStack_290 = *(undefined4 *)&(this->PendingStampRay).Direction.field0_0x0;
    uStack_28c = *(undefined4 *)((longlong)&(this->PendingStampRay).Direction.field0_0x0 + 4);
    local_288 = (this->PendingStampRay).Direction.field0_0x0._s_0.Y;
    dStack_280 = (this->PendingStampRay).Direction.field0_0x0._s_0.Z;
    local_278 = (**(code **)(this->_padding_ + 0x4b0))(this);
    pFVar22 = (pTVar29->AllocatorInstance).Data;
    if (((pFVar22 <= (FScriptContainerElement *)&local_2a8) &&
        ((FScriptContainerElement *)&local_2a8 < pFVar22 + (longlong)*piVar27 * 0x38)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar17 = *piVar1;
    if (iVar17 == *piVar27) {
      iVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x838,&pTVar29->AllocatorInstance,piVar27);
    }
    *piVar1 = iVar17 + 1;
    lVar20 = (longlong)iVar17 * 0x38;
    pFVar22 = (pTVar29->AllocatorInstance).Data;
    *(double *)(pFVar22 + lVar20) = local_2a8;
    *(double *)(pFVar22 + lVar20 + 8) = dStack_2a0;
    *(ulonglong *)(pFVar22 + lVar20 + 0x10) = CONCAT44(uStack_294,local_298);
    *(ulonglong *)(pFVar22 + lVar20 + 0x10 + 8) = CONCAT44(uStack_28c,uStack_290);
    *(double *)(pFVar22 + lVar20 + 0x20) = local_288;
    *(double *)(pFVar22 + lVar20 + 0x20 + 8) = dStack_280;
    *(undefined8 *)(pFVar22 + lVar20 + 0x30) = local_278;
    this->bIsStampPending = true;
    return;
  }
  bVar15 = false;
  fVar30 = (float)(**(code **)(this->_padding_ + 0x5b0))(this);
  if (fVar30 < __real_3f800000) {
    iVar17 = this->LastFlowTimeStamp;
    if (fVar30 == 0.0) {
      bVar15 = iVar17 == 0;
      this->LastFlowTimeStamp = iVar17 + 1;
      goto LAB_14cd3a788;
    }
    iVar18 = (int)(this->ActiveStrokeTime / (double)(__real_3f800000 - fVar30));
    if (iVar18 <= iVar17) goto LAB_14cd3a788;
    this->LastFlowTimeStamp = iVar18;
  }
  bVar15 = true;
LAB_14cd3a788:
  local_270 = (this->PendingStampRay).Origin.field0_0x0._s_0.X;
  dStack_268 = (this->PendingStampRay).Origin.field0_0x0._s_0.Y;
  local_260 = *(undefined4 *)((longlong)&(this->PendingStampRay).Origin.field0_0x0 + 0x10);
  uStack_25c = *(undefined4 *)((longlong)&(this->PendingStampRay).Origin.field0_0x0 + 0x14);
  uStack_258 = *(undefined4 *)&(this->PendingStampRay).Direction.field0_0x0;
  uStack_254 = *(undefined4 *)((longlong)&(this->PendingStampRay).Direction.field0_0x0 + 4);
  local_250 = (this->PendingStampRay).Direction.field0_0x0._s_0.Y;
  dStack_248 = (this->PendingStampRay).Direction.field0_0x0._s_0.Z;
  local_240 = (**(code **)(this->_padding_ + 0x4b0))(this);
  pFVar22 = (pTVar29->AllocatorInstance).Data;
  if (((pFVar22 <= (FScriptContainerElement *)&local_270) &&
      ((FScriptContainerElement *)&local_270 < pFVar22 + (longlong)*piVar27 * 0x38)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar17 = *piVar1;
  if (iVar17 == *piVar27) {
    iVar17 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x838,&pTVar29->AllocatorInstance,piVar27);
  }
  *piVar1 = iVar17 + 1;
  lVar20 = (longlong)iVar17 * 0x38;
  pFVar22 = (pTVar29->AllocatorInstance).Data;
  *(double *)(pFVar22 + lVar20) = local_270;
  *(double *)(pFVar22 + lVar20 + 8) = dStack_268;
  *(ulonglong *)(pFVar22 + lVar20 + 0x10) = CONCAT44(uStack_25c,local_260);
  *(ulonglong *)(pFVar22 + lVar20 + 0x10 + 8) = CONCAT44(uStack_254,uStack_258);
  *(double *)(pFVar22 + lVar20 + 0x20) = local_250;
  *(double *)(pFVar22 + lVar20 + 0x20 + 8) = dStack_248;
  *(undefined8 *)(pFVar22 + lVar20 + 0x30) = local_240;
  this->bIsStampPending = bVar15;
  return;
}

// UpdateStrokeReferencePlaneForROI @ 14cd3bff0

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
UMeshSculptToolBase::UpdateStrokeReferencePlaneForROI
          (UMeshSculptToolBase *this,TFrame3<double> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  double dVar1;
  double *pdVar2;
  undefined1 local_48 [64];
  
  pdVar2 = (double *)
           (**(code **)(this->_padding_ + 0x5c0))
                     (this,local_48,&this->LastBrushFrameLocal,param_2,0,param_3,1);
  dVar1 = pdVar2[1];
  (this->StrokePlane).Origin.field0_0x0._s_0.X = *pdVar2;
  (this->StrokePlane).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = pdVar2[3];
  (this->StrokePlane).Origin.field0_0x0._s_0.Z = pdVar2[2];
  (this->StrokePlane).Rotation.field0_0x0._s_0.X = dVar1;
  dVar1 = pdVar2[5];
  (this->StrokePlane).Rotation.field0_0x0._s_0.Y = pdVar2[4];
  (this->StrokePlane).Rotation.field0_0x0._s_0.Z = dVar1;
  (this->StrokePlane).Rotation.field0_0x0._s_0.W = pdVar2[6];
  return;
}

// UpdateStrokeReferencePlaneFromWorkPlane @ 14cd3c070

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
UMeshSculptToolBase::UpdateStrokeReferencePlaneFromWorkPlane(UMeshSculptToolBase *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UWorkPlaneProperties *pUVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  TQuaternion<double> *pTVar9;
  TVector<double> *pTVar10;
  uint uVar11;
  double dVar12;
  uint uVar13;
  TQuaternion<double>_u_0 local_a8;
  TQuaternion<double>_u_0 local_88;
  TQuaternion<double> local_68 [3];
  
  pUVar5 = (this->GizmoProperties).field0_0x0.DebugPtr;
  dVar1 = (this->CurTargetTransform).Rotation.field0_0x0._s_0.W;
  dVar2 = (this->CurTargetTransform).Rotation.field0_0x0._s_0.Z;
  local_a8._s_0.X = (pUVar5->Rotation).X;
  local_a8._s_0.Y = (pUVar5->Rotation).Y;
  dVar3 = (this->CurTargetTransform).Rotation.field0_0x0._s_0.X;
  local_a8._s_0.Z = (pUVar5->Rotation).Z;
  local_a8._s_0.W = (pUVar5->Rotation).W;
  dVar4 = (this->CurTargetTransform).Rotation.field0_0x0._s_0.Y;
  dVar12 = dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2 + dVar1 * dVar1;
  if (dVar12 <= 0.0) {
    local_88._s_0.Z = 0.0;
    local_88._s_0.W = 0.0;
    local_88._s_0.X = 0.0;
    local_88._s_0.Y = 0.0;
  }
  else {
    dVar12 = __real_3ff0000000000000 / dVar12;
    uVar11 = (uint)__xmm_80000000000000008000000000000000;
    uVar13 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    local_88._s_0.X =
         (double)CONCAT44((uint)((ulonglong)(dVar12 * dVar3) >> 0x20) ^ uVar13,
                          SUB84(dVar12 * dVar3,0) ^ uVar11);
    local_88._s_0.W = dVar12 * dVar1;
    local_88._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)(dVar12 * dVar2) >> 0x20) ^ uVar13,
                          SUB84(dVar12 * dVar2,0) ^ uVar11);
    local_88._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)(dVar12 * dVar4) >> 0x20) ^ uVar13,
                          SUB84(dVar12 * dVar4,0) ^ uVar11);
  }
  pTVar9 = UE::Geometry::operator*<double>
                     (local_68,(TQuaternion<double> *)&local_88._s_0,
                      (TQuaternion<double> *)&local_a8._s_0);
  local_a8._s_0.X = (pUVar5->Position).field0_0x0._s_0.X;
  local_a8._s_0.Y = (pUVar5->Position).field0_0x0._s_0.Y;
  local_a8._s_0.Z = (pUVar5->Position).field0_0x0._s_0.Z;
  uVar8 = *(undefined8 *)&pTVar9->field0_0x0;
  dVar3 = (pTVar9->field0_0x0)._s_0.Y;
  dVar1 = (pTVar9->field0_0x0)._s_0.Z;
  dVar2 = (pTVar9->field0_0x0)._s_0.W;
  pTVar10 = UE::Geometry::TTransformSRT3<double>::InverseTransformPosition<double>
                      (&this->CurTargetTransform,(TVector<double> *)&local_88._s_0,
                       (TVector<double> *)&local_a8._s_0);
  dVar4 = (pTVar10->field0_0x0)._s_0.Y;
  uVar6 = *(undefined4 *)((longlong)&pTVar10->field0_0x0 + 0x10);
  uVar7 = *(undefined4 *)((longlong)&pTVar10->field0_0x0 + 0x14);
  (this->StrokePlane).Origin.field0_0x0._s_0.X = (pTVar10->field0_0x0)._s_0.X;
  (this->StrokePlane).Origin.field0_0x0._s_0.Y = dVar4;
  local_68[0].field0_0x0._24_4_ = (undefined4)uVar8;
  local_68[0].field0_0x0._28_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)((longlong)&(this->StrokePlane).Origin.field0_0x0 + 0x10) = uVar6;
  *(undefined4 *)((longlong)&(this->StrokePlane).Origin.field0_0x0 + 0x14) = uVar7;
  *(undefined4 *)&(this->StrokePlane).Rotation.field0_0x0 = local_68[0].field0_0x0._24_4_;
  *(undefined4 *)((longlong)&(this->StrokePlane).Rotation.field0_0x0 + 4) =
       local_68[0].field0_0x0._28_4_;
  (this->StrokePlane).Rotation.field0_0x0._s_0.Y = dVar3;
  (this->StrokePlane).Rotation.field0_0x0._s_0.Z = dVar1;
  (this->StrokePlane).Rotation.field0_0x0._s_0.W = dVar2;
  return;
}

// UpdateTransparentColorSetting @ 14cd3c6f0

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
UMeshSculptToolBase::UpdateTransparentColorSetting(UMeshSculptToolBase *this,FLinearColor *param_1)

{
  UMaterialInstanceDynamic *this_00;
  FName *pFVar1;
  FName local_res8;
  FLinearColor_u_0 local_18;
  
  if ((((this->ViewProperties).field0_0x0.DebugPtr)->MaterialMode == Transparent) &&
     (this_00 = (this->ActiveOverrideMaterial).field0_0x0.DebugPtr,
     this_00 != (UMaterialInstanceDynamic *)0x0)) {
    pFVar1 = ::FName::FName(&local_res8,L"Color");
    local_18._0_8_ = *(undefined8 *)&param_1->field0_0x0;
    local_18._8_8_ = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
    UMaterialInstanceDynamic::SetVectorParameterValue
              (this_00,*pFVar1,(FLinearColor *)&local_18._s_0);
  }
  return;
}

// UpdateTwoSidedSetting @ 14cd3c760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::UpdateTwoSidedSetting(UMeshSculptToolBase *this,bool param_1)

{
  double dVar1;
  UMeshEditingViewProperties *pUVar2;
  UInteractiveToolManager *pUVar3;
  UMaterialInstanceDynamic *pUVar4;
  longlong *plVar5;
  
  pUVar2 = (this->ViewProperties).field0_0x0.DebugPtr;
  if (pUVar2->MaterialMode == Transparent) {
    dVar1 = pUVar2->Opacity;
    pUVar3 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
    pUVar4 = ToolSetupUtil::GetTransparentSculptMaterial
                       (pUVar3,&pUVar2->TransparentMaterialColor,dVar1,param_1);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar4 == (UMaterialInstanceDynamic *)0x0)) {
      (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = pUVar4;
      if (pUVar4 == (UMaterialInstanceDynamic *)0x0) {
        return;
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
      (this->ActiveOverrideMaterial).field0_0x0.DebugPtr = pUVar4;
    }
    plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x430))(this);
    (**(code **)(*plVar5 + 0xbf0))(plVar5,(this->ActiveOverrideMaterial).field0_0x0.DebugPtr);
  }
  return;
}

// UpdateWireframeVisibility @ 14cd3d300

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
UMeshSculptToolBase::UpdateWireframeVisibility(UMeshSculptToolBase *this,bool param_1)

{
  longlong *plVar1;
  undefined7 in_register_00000011;
  
  plVar1 = (longlong *)
           (**(code **)(this->_padding_ + 0x430))(this,CONCAT71(in_register_00000011,param_1));
                    /* WARNING: Could not recover jumptable at 0x00014cd3d327. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xb70))(plVar1,param_1,*(code **)(*plVar1 + 0xb70));
  return;
}

// UpdateWorkPlane @ 14cd3d330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UMeshSculptToolBase::UpdateWorkPlane(UMeshSculptToolBase *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FDynamicMesh3 *this_00;
  TVector<double> *pTVar7;
  double *pdVar8;
  double *pdVar9;
  double dVar10;
  double local_228;
  double dStack_220;
  double local_218;
  TVector<double>_u_0 local_210;
  double dStack_1f8;
  double local_1f0;
  double dStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined4 uStack_1c8;
  undefined1 uStack_1c4;
  undefined2 uStack_1c3;
  undefined1 uStack_1c1;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  double local_1b0;
  undefined1 local_1a8 [40];
  double local_180;
  double local_178;
  double local_170;
  double local_150 [9];
  int local_104;
  FWeakObjectPtr local_f0;
  FWeakObjectPtr FStack_e8;
  IActorInstanceManagerInterface *local_e0;
  undefined8 uStack_d8;
  TVector<double> local_a8;
  TRay<double> local_90 [2];
  
  (**(code **)(this->_padding_ + 0x670))();
  (**(code **)(this->_padding_ + 0x6a0))(this);
  bVar5 = (bool)(**(code **)(this->_padding_ + 0x670))(this);
  ((this->GizmoProperties).field0_0x0.DebugPtr)->bPropertySetEnabled = bVar5;
  if (this->PendingWorkPlaneUpdate != NoUpdatePending) {
    local_210._s_0.X = (double)this->_padding_;
    local_210._s_0.Y = (double)this->_padding_;
    local_210._s_0.Z = (double)this->_padding_;
    dStack_1f8 = (double)this->_padding_;
    local_1f0 = (double)this->_padding_;
    dStack_1e8 = (double)this->_padding_;
    memset(local_1a8,0,0x100);
    uStack_1c8 = 0xffffffff;
    uStack_1c3 = 0;
    local_1e0 = 0;
    uStack_1d8 = 0;
    uStack_1c1 = 0;
    local_f0.ObjectIndex = 0;
    local_f0.ObjectSerialNumber = 0;
    FStack_e8.ObjectIndex = 0;
    FStack_e8.ObjectSerialNumber = 0;
    local_1d0 = 0;
    uStack_1c4 = 0;
    uStack_d8._0_4_ = -1;
    uStack_d8._4_1_ = Invalid;
    uStack_d8._5_3_ = 0;
    local_1a8._4_4_ = 1.0;
    local_104 = -1;
    local_e0 = (IActorInstanceManagerInterface *)0x0;
    bVar5 = ToolSceneQueriesUtil::FindNearestVisibleObjectHit
                      ((UInteractiveTool *)this,(FHitResult *)local_1a8,
                       (TRay<double> *)&local_210._s_0,
                       (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0,
                       (TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *)0x0);
    GetLocalRay(this,local_90,(TRay<double> *)&local_210._s_0);
    iVar6 = (**(code **)(this->_padding_ + 0x510))(this);
    if ((!bVar5) ||
       ((iVar6 != -1 &&
        (local_1b0 = (this->HoverStamp).WorldFrame.Origin.field0_0x0._s_0.Z,
        ((this->HoverStamp).WorldFrame.Origin.field0_0x0._s_0.Y - local_210._s_0.Y) * local_1f0 +
        ((this->HoverStamp).WorldFrame.Origin.field0_0x0._s_0.X - local_210._s_0.X) * dStack_1f8 +
        (local_1b0 - local_210._s_0.Z) * dStack_1e8 <=
        (local_178 - local_210._s_0.Y) * local_1f0 + (local_180 - local_210._s_0.X) * dStack_1f8 +
        (local_170 - local_210._s_0.Z) * dStack_1e8)))) {
      dVar1 = (this->HoverStamp).WorldFrame.Rotation.field0_0x0._s_0.X;
      dVar2 = (this->HoverStamp).WorldFrame.Rotation.field0_0x0._s_0.Y;
      dVar10 = (this->HoverStamp).WorldFrame.Rotation.field0_0x0._s_0.Z;
      dVar3 = (this->HoverStamp).WorldFrame.Rotation.field0_0x0._s_0.W;
      dVar10 = dVar10 + dVar10;
      local_228 = dVar3 * (dVar2 + dVar2) + dVar10 * dVar1;
      dStack_220 = dVar10 * dVar2 - dVar3 * (dVar1 + dVar1);
      local_218 = __real_3ff0000000000000 - ((dVar2 + dVar2) * dVar2 + (dVar1 + dVar1) * dVar1);
      if ((iVar6 != -1) && (this->PendingWorkPlaneUpdate == MoveToHitPositionNormal)) {
        this_00 = (FDynamicMesh3 *)(**(code **)(this->_padding_ + 0x440))(this);
        if (this_00 == (FDynamicMesh3 *)0x0) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_304361139444119901>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\Sculpting\\MeshSculptToolBase.cpp"
                             ,0x6a3,"Mesh");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        else {
          pTVar7 = UE::Geometry::FDynamicMesh3::GetTriNormal(this_00,&local_a8,iVar6);
          local_228 = (pTVar7->field0_0x0)._s_0.X;
          dStack_220 = (pTVar7->field0_0x0)._s_0.Y;
          local_218 = (pTVar7->field0_0x0)._s_0.Z;
        }
      }
      local_1c0 = *(undefined4 *)&(this->HoverStamp).WorldFrame.Origin.field0_0x0;
      uStack_1bc = *(undefined4 *)((longlong)&(this->HoverStamp).WorldFrame.Origin.field0_0x0 + 4);
      uStack_1b8 = *(undefined4 *)((longlong)&(this->HoverStamp).WorldFrame.Origin.field0_0x0 + 8);
      uStack_1b4 = *(undefined4 *)((longlong)&(this->HoverStamp).WorldFrame.Origin.field0_0x0 + 0xc)
      ;
      pdVar9 = &local_228;
      local_1b0 = (this->HoverStamp).WorldFrame.Origin.field0_0x0._s_0.Z;
      pdVar8 = (double *)&local_1c0;
    }
    else {
      pdVar9 = local_150;
      pdVar8 = &local_180;
    }
    (**(code **)(this->_padding_ + 0x688))(this,pdVar8,pdVar9,this->PendingWorkPlaneUpdate);
    this->PendingWorkPlaneUpdate = NoUpdatePending;
  }
  return;
}

