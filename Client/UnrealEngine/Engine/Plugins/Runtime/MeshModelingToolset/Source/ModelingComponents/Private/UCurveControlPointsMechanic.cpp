// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 46

// StaticClass @ 14caac3b0

UClass * __cdecl UCurveControlPointsMechanic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveControlPointsMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"CurveControlPointsMechanic",
               &Z_Registration_Info_UClass_UCurveControlPointsMechanic.InnerSingleton,
               StaticRegisterNativesUCurveControlPointsMechanic,0x680,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCurveControlPointsMechanic>,
               InternalVTableHelperCtorCaller<UCurveControlPointsMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveControlPointsMechanic.InnerSingleton;
}

// UCurveControlPointsMechanic @ 14caccc70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCurveControlPointsMechanic * __thiscall
UCurveControlPointsMechanic::UCurveControlPointsMechanic
          (UCurveControlPointsMechanic *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this,param_1);
  *(undefined8 *)&(this->OnPointsChanged).field_0x18 = 2;
  (this->ClickBehavior).field0_0x0.DebugPtr = (USingleClickInputBehavior *)0x0;
  (this->HoverBehavior).field0_0x0.DebugPtr = (UMouseHoverBehavior *)0x0;
  *(undefined8 *)&this->OnPointsChanged = 0;
  *(undefined8 *)&(this->OnPointsChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnPointsChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnModeChanged = 0;
  *(undefined8 *)&(this->OnModeChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnModeChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnModeChanged).field_0x18 = 2;
  *(undefined8 *)&(this->ControlPoints).Vertices = 0;
  *(undefined8 *)&(this->ControlPoints).Vertices.field_0x8 = 0;
  *(undefined8 *)&(this->ControlPoints).Vertices.field_0x20 = 0;
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickBehaviorTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined4 *)&(this->ControlPoints).Vertices.field_0x28 = 0;
  *(undefined4 *)&(this->ControlPoints).Vertices.field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlPoints).Vertices.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlPoints).Vertices.field_0x34 = 0;
  (this->ControlPoints).Sequence.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControlPoints).Sequence.ArrayNum = 0;
  (this->ControlPoints).Sequence.ArrayMax = 0;
  *(undefined8 *)&(this->ControlPoints).PointIDToSequencePosition = 0;
  *(undefined8 *)&(this->ControlPoints).PointIDToSequencePosition.field_0x8 = 0;
  *(undefined8 *)&(this->ControlPoints).PointIDToSequencePosition.field_0x20 = 0;
  *(undefined4 *)&(this->ControlPoints).PointIDToSequencePosition.field_0x28 = 0;
  *(undefined4 *)&(this->ControlPoints).PointIDToSequencePosition.field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlPoints).PointIDToSequencePosition.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlPoints).PointIDToSequencePosition.field_0x34 = 0;
  *(undefined8 *)&(this->ControlPoints).PointIDToSequencePosition.field_0x40 = 0;
  *(undefined4 *)&(this->ControlPoints).PointIDToSequencePosition.field_0x48 = 0;
  this->bInteractiveInitializationMode = false;
  this->MinPointsForLoop = 3;
  this->MinPointsForNonLoop = 2;
  this->bAutoRevertToInteractiveInitialization = false;
  this->bSnappingEnabled = true;
  UE::Geometry::FPointPlanarSnapSolver::FPointPlanarSnapSolver(&this->SnapEngine);
  (this->GeometrySet).Points.ArrayNum = 0;
  (this->GeometrySet).Points.ArrayMax = 0;
  *(undefined8 *)&(this->GeometrySet).PointIDToIndex.field_0x8 = 0;
  (this->GeometrySet).Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->GeometrySet).PointIDToIndex = 0;
  *(undefined8 *)&(this->GeometrySet).PointIDToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->GeometrySet).PointIDToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->GeometrySet).PointIDToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->GeometrySet).PointIDToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GeometrySet).PointIDToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->GeometrySet).PointIDToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->GeometrySet).PointIDToIndex.field_0x48 = 0;
  (this->GeometrySet).Curves.ArrayNum = 0;
  (this->GeometrySet).Curves.ArrayMax = 0;
  *(undefined8 *)&(this->GeometrySet).CurveIDToIndex.field_0x8 = 0;
  (this->GeometrySet).Curves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->GeometrySet).CurveIDToIndex = 0;
  *(undefined8 *)&(this->GeometrySet).CurveIDToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->GeometrySet).CurveIDToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->GeometrySet).CurveIDToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->GeometrySet).CurveIDToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GeometrySet).CurveIDToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->GeometrySet).CurveIDToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->GeometrySet).CurveIDToIndex.field_0x48 = 0;
  (this->PreviewGeometryActor).field0_0x0.DebugPtr = (APreviewGeometryActor *)0x0;
  (this->DrawnControlPoints).field0_0x0.DebugPtr = (UPointSetComponent *)0x0;
  (this->DrawnControlSegments).field0_0x0.DebugPtr = (ULineSetComponent *)0x0;
  (this->PreviewPoint).field0_0x0.DebugPtr = (UPointSetComponent *)0x0;
  (this->PreviewSegment).field0_0x0.DebugPtr = (ULineSetComponent *)0x0;
  (this->DrawPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->DrawPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->DrawPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->DrawPlane).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DrawPlane).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DrawPlane).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->DrawPlane).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DrawPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->DrawPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->DrawPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->DrawPlane).Rotation.field0_0x0._s_0.W = 1.0;
  (this->PointTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->PointTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  this->bAddToSelectionToggle = false;
  this->bSnapToggle = false;
  this->ShiftModifierId = 1;
  this->bInsertPointToggle = false;
  this->CtrlModifierId = 2;
  this->bGizmoBeingDragged = false;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).DPIScale = 1.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  *(undefined8 *)&this->GeometrySetToleranceTest = 0;
  *(undefined8 *)&(this->GeometrySetToleranceTest).field_0x28 = 0;
  this->HoveredPointID = -1;
  (this->SelectedPointIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedPointIDs).ArrayNum = 0;
  (this->SelectedPointIDs).ArrayMax = 0;
  (this->SelectedPointStartPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedPointStartPositions).ArrayNum = 0;
  (this->SelectedPointStartPositions).ArrayMax = 0;
  this->CurrentChangeStamp = 0;
  return this;
}

// UCurveControlPointsMechanic @ 14caccfa0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCurveControlPointsMechanic * __thiscall
UCurveControlPointsMechanic::UCurveControlPointsMechanic(UCurveControlPointsMechanic *this)

{
  undefined8 uVar1;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this);
  *(undefined8 *)&(this->OnPointsChanged).field_0x18 = 2;
  (this->ClickBehavior).field0_0x0.DebugPtr = (USingleClickInputBehavior *)0x0;
  (this->HoverBehavior).field0_0x0.DebugPtr = (UMouseHoverBehavior *)0x0;
  *(undefined8 *)&this->OnPointsChanged = 0;
  *(undefined8 *)&(this->OnPointsChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnPointsChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnModeChanged = 0;
  *(undefined8 *)&(this->OnModeChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnModeChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnModeChanged).field_0x18 = 2;
  *(undefined8 *)&(this->ControlPoints).Vertices = 0;
  *(undefined8 *)&(this->ControlPoints).Vertices.field_0x8 = 0;
  *(undefined8 *)&(this->ControlPoints).Vertices.field_0x20 = 0;
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickBehaviorTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined4 *)&(this->ControlPoints).Vertices.field_0x28 = 0;
  *(undefined4 *)&(this->ControlPoints).Vertices.field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlPoints).Vertices.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlPoints).Vertices.field_0x34 = 0;
  (this->ControlPoints).Sequence.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ControlPoints).Sequence.ArrayNum = 0;
  (this->ControlPoints).Sequence.ArrayMax = 0;
  *(undefined8 *)&(this->ControlPoints).PointIDToSequencePosition = 0;
  *(undefined8 *)&(this->ControlPoints).PointIDToSequencePosition.field_0x8 = 0;
  *(undefined8 *)&(this->ControlPoints).PointIDToSequencePosition.field_0x20 = 0;
  *(undefined4 *)&(this->ControlPoints).PointIDToSequencePosition.field_0x28 = 0;
  *(undefined4 *)&(this->ControlPoints).PointIDToSequencePosition.field_0x2c = 0x80;
  *(undefined4 *)&(this->ControlPoints).PointIDToSequencePosition.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ControlPoints).PointIDToSequencePosition.field_0x34 = 0;
  *(undefined8 *)&(this->ControlPoints).PointIDToSequencePosition.field_0x40 = 0;
  *(undefined4 *)&(this->ControlPoints).PointIDToSequencePosition.field_0x48 = 0;
  this->bInteractiveInitializationMode = false;
  this->MinPointsForLoop = 3;
  this->MinPointsForNonLoop = 2;
  this->bAutoRevertToInteractiveInitialization = false;
  this->bSnappingEnabled = true;
  UE::Geometry::FPointPlanarSnapSolver::FPointPlanarSnapSolver(&this->SnapEngine);
  (this->GeometrySet).Points.ArrayNum = 0;
  (this->GeometrySet).Points.ArrayMax = 0;
  *(undefined8 *)&(this->GeometrySet).PointIDToIndex.field_0x8 = 0;
  (this->GeometrySet).Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->GeometrySet).PointIDToIndex = 0;
  *(undefined8 *)&(this->GeometrySet).PointIDToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->GeometrySet).PointIDToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->GeometrySet).PointIDToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->GeometrySet).PointIDToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GeometrySet).PointIDToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->GeometrySet).PointIDToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->GeometrySet).PointIDToIndex.field_0x48 = 0;
  (this->GeometrySet).Curves.ArrayNum = 0;
  (this->GeometrySet).Curves.ArrayMax = 0;
  *(undefined8 *)&(this->GeometrySet).CurveIDToIndex.field_0x8 = 0;
  (this->GeometrySet).Curves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->GeometrySet).CurveIDToIndex = 0;
  *(undefined8 *)&(this->GeometrySet).CurveIDToIndex.field_0x20 = 0;
  *(undefined4 *)&(this->GeometrySet).CurveIDToIndex.field_0x28 = 0;
  *(undefined4 *)&(this->GeometrySet).CurveIDToIndex.field_0x2c = 0x80;
  *(undefined4 *)&(this->GeometrySet).CurveIDToIndex.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GeometrySet).CurveIDToIndex.field_0x34 = 0;
  *(undefined8 *)&(this->GeometrySet).CurveIDToIndex.field_0x40 = 0;
  *(undefined4 *)&(this->GeometrySet).CurveIDToIndex.field_0x48 = 0;
  (this->PreviewGeometryActor).field0_0x0.DebugPtr = (APreviewGeometryActor *)0x0;
  (this->DrawnControlPoints).field0_0x0.DebugPtr = (UPointSetComponent *)0x0;
  (this->DrawnControlSegments).field0_0x0.DebugPtr = (ULineSetComponent *)0x0;
  (this->PreviewPoint).field0_0x0.DebugPtr = (UPointSetComponent *)0x0;
  (this->PreviewSegment).field0_0x0.DebugPtr = (ULineSetComponent *)0x0;
  (this->DrawPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->DrawPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->DrawPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->DrawPlane).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DrawPlane).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DrawPlane).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->DrawPlane).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->DrawPlane).Rotation.field0_0x0._s_0.X = 0.0;
  (this->DrawPlane).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->DrawPlane).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->DrawPlane).Rotation.field0_0x0._s_0.W = 1.0;
  (this->PointTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->PointTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  this->bAddToSelectionToggle = false;
  this->bSnapToggle = false;
  this->ShiftModifierId = 1;
  this->bInsertPointToggle = false;
  this->CtrlModifierId = 2;
  this->bGizmoBeingDragged = false;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).DPIScale = 1.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  *(undefined8 *)&this->GeometrySetToleranceTest = 0;
  *(undefined8 *)&(this->GeometrySetToleranceTest).field_0x28 = 0;
  this->HoveredPointID = -1;
  (this->SelectedPointIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedPointIDs).ArrayNum = 0;
  (this->SelectedPointIDs).ArrayMax = 0;
  (this->SelectedPointStartPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedPointStartPositions).ArrayNum = 0;
  (this->SelectedPointStartPositions).ArrayMax = 0;
  this->CurrentChangeStamp = 0;
  return this;
}

// ~UCurveControlPointsMechanic @ 14cad2080

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
UCurveControlPointsMechanic::~UCurveControlPointsMechanic(UCurveControlPointsMechanic *this)

{
  APreviewGeometryActor *pAVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  void *pvVar4;
  code *pcVar5;
  bool bVar6;
  longlong *plVar7;
  
  pAVar1 = (this->PreviewGeometryActor).field0_0x0.DebugPtr;
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickBehaviorTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  if (pAVar1 != (APreviewGeometryActor *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PreviewGeometryActor == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\CurveControlPointsMechanic.cpp"
                       ,0x23,
                       L"Shutdown() should be called before UCurveControlPointsMechanic is destroyed."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = (this->SelectedPointStartPositions).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->SelectedPointIDs).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if (*(longlong *)&this->GeometrySetToleranceTest != 0) {
    plVar3 = *(longlong **)&(this->GeometrySetToleranceTest).field_0x28;
    plVar7 = (longlong *)&(this->GeometrySetToleranceTest).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar7 = plVar3;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  UE::Geometry::FGeometrySet3::~FGeometrySet3(&this->GeometrySet);
  UE::Geometry::FPointPlanarSnapSolver::~FPointPlanarSnapSolver(&this->SnapEngine);
  *(undefined4 *)&(this->ControlPoints).PointIDToSequencePosition.field_0x48 = 0;
  pvVar4 = *(void **)&(this->ControlPoints).PointIDToSequencePosition.field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ControlPoints).PointIDToSequencePosition);
  pFVar2 = (this->ControlPoints).Sequence.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TSparseArray<UE::Math::TVector<double>,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UE::Math::TVector<double>,FDefaultSparseArrayAllocator>
            (&(this->ControlPoints).Vertices);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnModeChanged).field_0x8,*(int *)&(this->OnModeChanged).field_0x10);
  pvVar4 = *(void **)&(this->OnModeChanged).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnModeChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPointsChanged).field_0x8,*(int *)&(this->OnPointsChanged).field_0x10);
  pvVar4 = *(void **)&(this->OnPointsChanged).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPointsChanged);
  *(undefined ***)&this->field_0x38 = &___7IModifierToggleBehaviorTarget__6B_;
  *(undefined ***)&this->field_0x30 = &___7IModifierToggleBehaviorTarget__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// operator() @ 14cad6650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UCurveControlPointsMechanic::Setup'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *param_1,TVector<double> *param_2)

{
  longlong lVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 0x5ec) != '\0') {
    fVar6 = *(float *)(lVar1 + 0x5e4);
    dVar3 = ToolSceneQueriesUtil::GetDefaultVisualAngleSnapThreshD();
    dVar5 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    dVar4 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
    fVar6 = (float)(dVar3 * (double)fVar6 * ___real_3f86c16c16c16c17);
    dVar3 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
    return dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3 < (double)(fVar6 * fVar6);
  }
  bVar2 = ToolSceneQueriesUtil::PointSnapQuery
                    ((FViewCameraState *)(lVar1 + 0x5a0),param_1,param_2,0.0);
  return bVar2;
}

// AddSnapLine @ 14cae6f40

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
UCurveControlPointsMechanic::AddSnapLine
          (UCurveControlPointsMechanic *this,int param_1,TLine3<double> *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014cae6f65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->SnapEngine)._padding_ + 0x20))
            (&this->SnapEngine,param_2,this->LineSnapIDMin + param_1,this->LineSnapPriority);
  return;
}

// AppendPoint @ 14caea1b0

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
UCurveControlPointsMechanic::AppendPoint(UCurveControlPointsMechanic *this,TVector<double> *param_1)

{
  int iVar1;
  
  iVar1 = InsertPointAt(this,(this->ControlPoints).Sequence.ArrayNum,param_1,(int *)0x0);
  return iVar1;
}

// BeginHoverSequenceHitTest @ 14caec410

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
UCurveControlPointsMechanic::BeginHoverSequenceHitTest
          (UCurveControlPointsMechanic *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  HitTest((UCurveControlPointsMechanic *)&this[-1].SelectedPointStartPositions,param_1,
          __return_storage_ptr__);
  return __return_storage_ptr__;
}

// ChangeSelection @ 14caf3140

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
UCurveControlPointsMechanic::ChangeSelection
          (UCurveControlPointsMechanic *this,int param_1,bool param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  UObject *pUVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  FScriptContainerElement *pFVar12;
  undefined1 *puVar13;
  undefined8 **ppuVar14;
  FText *pFVar15;
  undefined1 local_res8 [8];
  uint local_res10;
  char local_res18;
  undefined8 *local_res20;
  undefined8 *local_58;
  undefined8 *local_50 [2];
  
  local_res10 = param_1;
  local_res18 = param_2;
  if (!param_2) {
    iVar3 = (this->SelectedPointIDs).ArrayNum;
    if (0 < iVar3) {
      pFVar12 = (this->SelectedPointIDs).AllocatorInstance.Data;
      pFVar2 = pFVar12 + (longlong)iVar3 * 4;
      while( true ) {
        if ((this->SelectedPointIDs).ArrayNum != iVar3) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        param_1 = local_res10;
        if (pFVar12 == pFVar2) break;
        iVar4 = *(int *)pFVar12;
        bVar7 = UPointSetComponent::IsPointValid
                          ((this->DrawnControlPoints).field0_0x0.DebugPtr,iVar4);
        if (bVar7) {
          UPointSetComponent::SetPointColor
                    ((this->DrawnControlPoints).field0_0x0.DebugPtr,iVar4,&this->CurrentPointsColor)
          ;
          pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
          lVar9 = (**(code **)(*(longlong *)pUVar8 + 0x2d8))(pUVar8);
          pcVar11 = *(code **)(*(longlong *)(lVar9 + 0x28) + 0x20);
          local_res20 = ::operator_new(0x18);
          if (local_res20 != (undefined8 *)0x0) {
            iVar5 = this->CurrentChangeStamp;
            *local_res20 = &___7FCurveControlPointsMechanicSelectionChange__6B_;
            *(int *)(local_res20 + 1) = iVar4;
            *(undefined1 *)((longlong)local_res20 + 0xc) = 0;
            *(int *)(local_res20 + 2) = iVar5;
          }
          (*pcVar11)(lVar9 + 0x28,this,&local_res20,&PointDeselectionTransactionText);
        }
        pFVar12 = pFVar12 + 4;
      }
      piVar1 = &(this->SelectedPointIDs).ArrayMax;
      (this->SelectedPointIDs).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&(this->SelectedPointIDs).AllocatorInstance,0,piVar1);
      }
    }
  }
  cVar6 = local_res18;
  if ((-1 < param_1) && (param_1 < *(int *)&(this->ControlPoints).Vertices.field_0x28)) {
    if ((*(int *)&(this->ControlPoints).Vertices.field_0x28 <= param_1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar7)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    puVar13 = *(undefined1 **)&(this->ControlPoints).Vertices.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(this->ControlPoints).Vertices.field_0x10;
    }
    if ((*(uint *)(puVar13 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0) {
      if ((cVar6 == '\0') || (bVar7 = DeselectPoint(this,param_1), !bVar7)) {
        SelectPoint(this,param_1);
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
        lVar10 = (**(code **)(*(longlong *)pUVar8 + 0x2d8))(pUVar8);
        lVar9 = lVar10 + 0x28;
        pcVar11 = *(code **)(*(longlong *)(lVar10 + 0x28) + 0x20);
        local_50[0] = ::operator_new(0x18);
        if (local_50[0] != (undefined8 *)0x0) {
          iVar3 = this->CurrentChangeStamp;
          *local_50[0] = &___7FCurveControlPointsMechanicSelectionChange__6B_;
          *(int *)(local_50[0] + 1) = param_1;
          *(undefined1 *)((longlong)local_50[0] + 0xc) = 1;
          *(int *)(local_50[0] + 2) = iVar3;
        }
        pFVar15 = &PointSelectionTransactionText;
        ppuVar14 = local_50;
      }
      else {
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
        lVar10 = (**(code **)(*(longlong *)pUVar8 + 0x2d8))(pUVar8);
        lVar9 = lVar10 + 0x28;
        pcVar11 = *(code **)(*(longlong *)(lVar10 + 0x28) + 0x20);
        local_58 = ::operator_new(0x18);
        if (local_58 == (undefined8 *)0x0) {
          pFVar15 = &PointDeselectionTransactionText;
          ppuVar14 = &local_58;
        }
        else {
          iVar3 = this->CurrentChangeStamp;
          pFVar15 = &PointDeselectionTransactionText;
          *local_58 = &___7FCurveControlPointsMechanicSelectionChange__6B_;
          ppuVar14 = &local_58;
          *(int *)(local_58 + 1) = param_1;
          *(undefined1 *)((longlong)local_58 + 0xc) = 0;
          *(int *)(local_58 + 2) = iVar3;
        }
      }
      (*pcVar11)(lVar9,this,ppuVar14,pFVar15);
    }
  }
  UpdateGizmoLocation(this);
  return;
}

// ClearHover @ 14caf4620

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCurveControlPointsMechanic::ClearHover(UCurveControlPointsMechanic *this)

{
  if (-1 < this->HoveredPointID) {
    UPointSetComponent::SetPointColor
              ((this->DrawnControlPoints).field0_0x0.DebugPtr,this->HoveredPointID,
               &this->PreHoverPointColor);
    this->HoveredPointID = -1;
  }
  UPointSetComponent::Clear((this->PreviewPoint).field0_0x0.DebugPtr);
  ULineSetComponent::Clear((this->PreviewSegment).field0_0x0.DebugPtr);
  return;
}

// ClearPoints @ 14caf4840

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCurveControlPointsMechanic::ClearPoints(UCurveControlPointsMechanic *this)

{
  ChangeSelection(this,-1,false);
  if (-1 < this->HoveredPointID) {
    UPointSetComponent::SetPointColor
              ((this->DrawnControlPoints).field0_0x0.DebugPtr,this->HoveredPointID,
               &this->PreHoverPointColor);
    this->HoveredPointID = -1;
  }
  UPointSetComponent::Clear((this->PreviewPoint).field0_0x0.DebugPtr);
  ULineSetComponent::Clear((this->PreviewSegment).field0_0x0.DebugPtr);
  FOrderedPoints::Empty(&this->ControlPoints);
  UE::Geometry::FGeometrySet3::Reset(&this->GeometrySet,true,true);
  ULineSetComponent::Clear((this->DrawnControlSegments).field0_0x0.DebugPtr);
  UPointSetComponent::Clear((this->DrawnControlPoints).field0_0x0.DebugPtr);
                    /* WARNING: Could not recover jumptable at 0x00014caf48e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->SnapEngine)._padding_ + 0x58))();
  return;
}

// ClearSelection @ 14caf4a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCurveControlPointsMechanic::ClearSelection(UCurveControlPointsMechanic *this)

{
  ChangeSelection(this,-1,false);
  return;
}

// DeletePoint @ 14cafff90

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
UCurveControlPointsMechanic::DeletePoint(UCurveControlPointsMechanic *this,int param_1)

{
  FOrderedPoints *this_00;
  FPointPlanarSnapSolver *this_01;
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  TVector<double> *pTVar8;
  TPolyline<double,3> local_68;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40;
  
  this_00 = &this->ControlPoints;
  piVar7 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
           FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        *)&(this->ControlPoints).PointIDToSequencePosition,param_1);
  iVar1 = (this->ControlPoints).Sequence.ArrayNum;
  iVar2 = *piVar7;
  if ((1 < iVar1) && ((this->bIsLoop != false || (0 < iVar2)))) {
    iVar5 = FOrderedPoints::GetPointIDAt(this_00,(iVar1 + -1 + iVar2) % iVar1);
    iVar1 = (this->ControlPoints).Sequence.ArrayNum;
    if ((iVar1 < 3) || ((this->bIsLoop == false && (iVar1 + -1 <= iVar2)))) {
      UE::Geometry::FGeometrySet3::RemoveCurve(&this->GeometrySet,iVar5);
      ULineSetComponent::RemoveLine((this->DrawnControlSegments).field0_0x0.DebugPtr,iVar5);
    }
    else {
      FOrderedPoints::GetPointCoordinatesAt
                (this_00,(TVector<double> *)&local_58._s_0,(iVar2 + 1) % iVar1);
      local_40._s_0.X = local_58._s_0.X;
      local_40._s_0.Y = local_58._s_0.Y;
      local_40._s_0.Z = local_58._s_0.Z;
      ULineSetComponent::SetLineEnd
                ((this->DrawnControlSegments).field0_0x0.DebugPtr,iVar5,
                 (TVector<double> *)&local_40._s_0);
      pTVar8 = FOrderedPoints::GetPointCoordinates(this_00,(TVector<double> *)&local_40._s_0,iVar5);
      UE::Geometry::TPolyline<double,3>::TPolyline<double,3>
                (&local_68,pTVar8,(TVector<double> *)&local_58._s_0);
      UE::Geometry::FGeometrySet3::UpdateCurve(&this->GeometrySet,iVar5,&local_68);
      if (local_68.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Vertices.AllocatorInstance.Data);
      }
    }
  }
  bVar4 = ULineSetComponent::IsLineValid((this->DrawnControlSegments).field0_0x0.DebugPtr,param_1);
  if (bVar4) {
    UE::Geometry::FGeometrySet3::RemoveCurve(&this->GeometrySet,param_1);
    ULineSetComponent::RemoveLine((this->DrawnControlSegments).field0_0x0.DebugPtr,param_1);
  }
  UE::Geometry::FGeometrySet3::RemovePoint(&this->GeometrySet,param_1);
  UPointSetComponent::RemovePoint((this->DrawnControlPoints).field0_0x0.DebugPtr,param_1);
  FOrderedPoints::RemovePointAt(this_00,iVar2);
  this_01 = &this->SnapEngine;
  UE::Geometry::FPointPlanarSnapSolver::RemoveHistoryPoint(this_01,iVar2);
  if (this->bInteractiveInitializationMode != false) {
    if (iVar2 == (this->ControlPoints).Sequence.ArrayNum) {
      (**(code **)(this_01->_padding_ + 0x18))(this_01,this->LastPointSnapID);
      if (0 < (this->ControlPoints).Sequence.ArrayNum) {
        iVar1 = this->EndpointSnapPriority;
        iVar5 = this->LastPointSnapID;
        pcVar3 = *(code **)(this_01->_padding_ + 0x10);
        iVar6 = FOrderedPoints::Last(this_00);
        pTVar8 = FOrderedPoints::GetPointCoordinates
                           (this_00,(TVector<double> *)&local_40._s_0,iVar6);
        (*pcVar3)(this_01,pTVar8,iVar5,iVar1);
      }
      UpdateSnapTargetsForHover(this);
    }
    if ((iVar2 == 0) &&
       ((**(code **)(this_01->_padding_ + 0x18))(this_01,this->FirstPointSnapID),
       0 < (this->ControlPoints).Sequence.ArrayNum)) {
      iVar1 = this->EndpointSnapPriority;
      iVar2 = this->FirstPointSnapID;
      pcVar3 = *(code **)(this_01->_padding_ + 0x10);
      iVar5 = FOrderedPoints::First(this_00);
      pTVar8 = FOrderedPoints::GetPointCoordinates(this_00,(TVector<double> *)&local_40._s_0,iVar5);
      (*pcVar3)(this_01,pTVar8,iVar2,iVar1);
    }
  }
  return param_1;
}

// DeleteSelectedPoints @ 14cb00230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCurveControlPointsMechanic::DeleteSelectedPoints(UCurveControlPointsMechanic *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 *puVar7;
  longlong lVar8;
  bool bVar9;
  uint uVar10;
  UObject *pUVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int *piVar15;
  undefined1 *puVar16;
  ForAnyElementType FVar17;
  undefined1 local_res8 [8];
  undefined8 *local_res10;
  undefined8 local_res18;
  undefined8 *local_res20;
  ForAnyElementType local_68;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  
  if ((this->SelectedPointIDs).ArrayNum != 0) {
    pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x2d8))(pUVar11);
    (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x10))(lVar12 + 0x28,&PointDeletionTransactionText);
    local_60 = (this->SelectedPointIDs).ArrayNum;
    lVar12 = (longlong)local_60;
    puVar14 = (undefined8 *)0x0;
    pFVar5 = (this->SelectedPointIDs).AllocatorInstance.Data;
    local_68.Data = (FScriptContainerElement *)0x0;
    if (local_60 == 0) {
      local_5c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_60,0,&local_68,local_60,&local_5c);
      memcpy(local_68.Data,pFVar5,lVar12 << 2);
    }
    ChangeSelection(this,-1,false);
    if (this->bAutoRevertToInteractiveInitialization != false) {
      if (this->bIsLoop == false) {
        iVar1 = this->MinPointsForNonLoop;
      }
      else {
        iVar1 = this->MinPointsForLoop;
      }
      if ((this->ControlPoints).Sequence.ArrayNum - local_60 < iVar1) {
        pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
        lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x2d8))(pUVar11);
        pcVar6 = *(code **)(*(longlong *)(lVar12 + 0x28) + 0x20);
        puVar13 = ::operator_new(0x10);
        if (puVar13 != (undefined8 *)0x0) {
          bVar9 = this->bIsLoop;
          iVar1 = this->CurrentChangeStamp;
          *puVar13 = &___7FCurveControlPointsMechanicModeChange__6B_;
          *(bool *)((longlong)puVar13 + 9) = bVar9;
          *(undefined1 *)(puVar13 + 1) = 0;
          *(int *)((longlong)puVar13 + 0xc) = iVar1;
          puVar14 = puVar13;
        }
        local_res10 = puVar14;
        (*pcVar6)(lVar12 + 0x28,this,&local_res10,&InitializationCompletedTransactionText);
        SetInteractiveInitialization(this,true);
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnModeChanged);
      }
    }
    iVar1 = local_60;
    pFVar5 = local_68.Data + (longlong)local_60 * 4;
    FVar17.Data = local_68.Data;
    while( true ) {
      if (local_60 != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (FVar17.Data == pFVar5) break;
      uVar2 = *(uint *)FVar17.Data;
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
      lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x2d8))(pUVar11);
      pcVar6 = *(code **)(*(longlong *)(lVar12 + 0x28) + 0x20);
      if (((int)uVar2 < 0) || (*(int *)&(this->ControlPoints).Vertices.field_0x28 <= (int)uVar2)) {
LAB_14cb0048e:
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidPoint(PointID)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\CurveControlPointsMechanic.h"
                           ,0x87,L"");
        if (bVar9) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        if ((*(int *)&(this->ControlPoints).Vertices.field_0x28 <= (int)uVar2) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5c6,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        puVar7 = *(undefined1 **)&(this->ControlPoints).Vertices.field_0x20;
        puVar16 = &(this->ControlPoints).Vertices.field_0x10;
        if (puVar7 != (undefined1 *)0x0) {
          puVar16 = puVar7;
        }
        uVar10 = uVar2;
        if ((int)uVar2 < 0) {
          uVar10 = uVar2 + 0x1f;
        }
        if ((*(uint *)(puVar16 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
        goto LAB_14cb0048e;
      }
      lVar8 = *(longlong *)&(this->ControlPoints).Vertices;
      puVar14 = (undefined8 *)(lVar8 + (longlong)(int)uVar2 * 0x18);
      local_58 = *puVar14;
      uStack_50 = puVar14[1];
      local_res18 = *(undefined8 *)(lVar8 + 0x10 + (longlong)(int)uVar2 * 0x18);
      piVar15 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                             *)&(this->ControlPoints).PointIDToSequencePosition,uVar2);
      iVar3 = *piVar15;
      local_res20 = ::operator_new(0x30);
      if (local_res20 != (undefined8 *)0x0) {
        iVar4 = this->CurrentChangeStamp;
        *local_res20 = &___7FCurveControlPointsMechanicInsertionChange__6B_;
        *(int *)(local_res20 + 1) = iVar3;
        local_res20[2] = local_58;
        local_res20[3] = uStack_50;
        *(uint *)((longlong)local_res20 + 0xc) = uVar2;
        local_res20[4] = local_res18;
        *(undefined1 *)(local_res20 + 5) = 0;
        *(int *)((longlong)local_res20 + 0x2c) = iVar4;
      }
      (*pcVar6)(lVar12 + 0x28,this,&local_res20,&PointDeletionTransactionText);
      DeletePoint(this,uVar2);
      FVar17.Data = FVar17.Data + 4;
    }
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnPointsChanged);
    pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x2d8))(pUVar11);
    (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x18))(lVar12 + 0x28);
    if (local_68.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data);
    }
  }
  return;
}

// DeselectPoint @ 14cb01150

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
UCurveControlPointsMechanic::DeselectPoint(UCurveControlPointsMechanic *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (this->SelectedPointIDs).AllocatorInstance.Data;
  pFVar3 = pFVar1;
  while( true ) {
    if (pFVar3 == pFVar1 + (longlong)(this->SelectedPointIDs).ArrayNum * 4) {
      return false;
    }
    if (*(int *)pFVar3 == param_1) break;
    pFVar3 = pFVar3 + 4;
  }
  iVar2 = (int)((longlong)pFVar3 - (longlong)pFVar1 >> 2);
  if (iVar2 == -1) {
    return false;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt(&this->SelectedPointIDs,iVar2,Default);
  UPointSetComponent::SetPointColor
            ((this->DrawnControlPoints).field0_0x0.DebugPtr,param_1,&this->CurrentPointsColor);
  UpdateSnapTargetsForHover(this);
  return true;
}

// ExtractPointPositions @ 14cb068b0

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
UCurveControlPointsMechanic::ExtractPointPositions
          (UCurveControlPointsMechanic *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  pFVar15 = (this->ControlPoints).Sequence.AllocatorInstance.Data;
  iVar3 = (this->ControlPoints).Sequence.ArrayNum;
  pFVar1 = pFVar15 + (longlong)iVar3 * 4;
  do {
    if ((this->ControlPoints).Sequence.ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar15 == pFVar1) {
      return;
    }
    uVar10 = *(uint *)pFVar15;
    lVar13 = (longlong)(int)uVar10;
    if (((int)uVar10 < 0) || (*(int *)&(this->ControlPoints).Vertices.field_0x28 <= (int)uVar10)) {
LAB_14cb0696e:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidPoint(PointID)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\CurveControlPointsMechanic.h"
                         ,0x87,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else {
      if (*(int *)&(this->ControlPoints).Vertices.field_0x28 <= (int)uVar10) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      puVar4 = *(undefined1 **)&(this->ControlPoints).Vertices.field_0x20;
      puVar14 = &(this->ControlPoints).Vertices.field_0x10;
      if (puVar4 != (undefined1 *)0x0) {
        puVar14 = puVar4;
      }
      uVar12 = uVar10 & 0x1f;
      if ((int)uVar10 < 0) {
        uVar10 = uVar10 + 0x1f;
      }
      if ((*(uint *)(puVar14 + (longlong)((int)uVar10 >> 5) * 4) >> uVar12 & 1) == 0)
      goto LAB_14cb0696e;
    }
    lVar5 = *(longlong *)&(this->ControlPoints).Vertices;
    pFVar6 = (param_1->AllocatorInstance).Data;
    puVar2 = (undefined8 *)(lVar5 + lVar13 * 0x18);
    local_48 = *puVar2;
    uStack_40 = puVar2[1];
    local_38 = *(undefined8 *)(lVar5 + 0x10 + lVar13 * 0x18);
    if ((pFVar6 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 < pFVar6 + (longlong)param_1->ArrayMax * 0x18)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar11 = param_1->ArrayNum;
    if (iVar11 == param_1->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    pFVar15 = pFVar15 + 4;
    param_1->ArrayNum = iVar11 + 1;
    pFVar7 = (param_1->AllocatorInstance).Data;
    pFVar6 = pFVar7 + (longlong)iVar11 * 0x18;
    *(undefined8 *)pFVar6 = local_48;
    *(undefined8 *)(pFVar6 + 8) = uStack_40;
    *(undefined8 *)(pFVar7 + (longlong)iVar11 * 0x18 + 0x10) = local_38;
  } while( true );
}

// GetPrivateStaticClass @ 14cb12190

UClass * __cdecl UCurveControlPointsMechanic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCurveControlPointsMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"CurveControlPointsMechanic",
               &Z_Registration_Info_UClass_UCurveControlPointsMechanic.InnerSingleton,
               StaticRegisterNativesUCurveControlPointsMechanic,0x680,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCurveControlPointsMechanic>,
               InternalVTableHelperCtorCaller<UCurveControlPointsMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCurveControlPointsMechanic.InnerSingleton;
}

// GizmoTransformChanged @ 14cb16fa0

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
UCurveControlPointsMechanic::GizmoTransformChanged
          (UCurveControlPointsMechanic *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  double local_68;
  double dStack_60;
  double local_58;
  TVector<double> local_50 [3];
  
  iVar1 = (this->SelectedPointIDs).ArrayNum;
  if ((iVar1 != 0) && (this->bGizmoBeingDragged != false)) {
    local_68 = (param_2->Translation).XY.m128d_f64[0];
    dStack_60 = (param_2->Translation).XY.m128d_f64[1];
    local_58 = (param_2->Translation).ZW.m128d_f64[0];
    dVar6 = local_68 - (this->GizmoStartPosition).field0_0x0._s_0.X;
    dVar4 = dStack_60 - (this->GizmoStartPosition).field0_0x0._s_0.Y;
    dVar5 = local_58 - (this->GizmoStartPosition).field0_0x0._s_0.Z;
    if ((dVar6 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X) ||
       ((dVar4 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y ||
        (dVar5 != UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z)))) {
      if ((iVar1 == 1) && (this->bSnapToggle != this->bSnappingEnabled)) {
        if (((this->SelectedPointStartPositions).ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->SelectedPointStartPositions).AllocatorInstance.Data;
        local_98._s_0.Z = dVar5 + *(double *)(pFVar2 + 0x10);
        local_98._s_0.Y = dVar4 + *(double *)(pFVar2 + 8);
        local_98._s_0.X = dVar6 + *(double *)pFVar2;
        if ((this->bSnapToggle != this->bSnappingEnabled) &&
           (UE::Geometry::FPointPlanarSnapSolver::UpdateSnappedPoint
                      (&this->SnapEngine,(TVector<double> *)&local_98._s_0),
           (char)(this->SnapEngine)._padding_ != '\0')) {
          local_98._s_0.X = (double)(this->SnapEngine)._padding_;
          local_98._s_0.Y = (double)(this->SnapEngine)._padding_;
          local_98._s_0.Z = (double)(this->SnapEngine)._padding_;
        }
        if (((this->SelectedPointIDs).ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar9 = FOrderedPoints::GetPointCoordinates
                           (&this->ControlPoints,local_50,
                            *(int *)(this->SelectedPointIDs).AllocatorInstance.Data);
        if (((local_98._s_0.X == (pTVar9->field0_0x0)._s_0.X) &&
            (local_98._s_0.Y == (pTVar9->field0_0x0)._s_0.Y)) &&
           (local_98._s_0.Z == (pTVar9->field0_0x0)._s_0.Z)) {
          return;
        }
        if (((this->SelectedPointIDs).ArrayNum < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UpdatePointLocation(this,*(int *)(this->SelectedPointIDs).AllocatorInstance.Data,
                            (TVector<double> *)&local_98._s_0);
      }
      else {
        uVar11 = 0;
        if (0 < iVar1) {
          lVar10 = 0;
          lVar12 = 0;
          do {
            uVar8 = 0;
            if ((int)uVar11 < (this->SelectedPointStartPositions).ArrayNum) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
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
            pFVar2 = (this->SelectedPointStartPositions).AllocatorInstance.Data;
            local_80._s_0.Z = dVar5 + *(double *)(pFVar2 + lVar12 + 0x10);
            local_80._s_0.Y = dVar4 + *(double *)(pFVar2 + lVar12 + 8);
            local_80._s_0.X = dVar6 + *(double *)(pFVar2 + lVar12);
            uVar8 = 0;
            if ((int)uVar11 < (this->SelectedPointIDs).ArrayNum) {
              uVar8 = ~uVar11 >> 0x1f;
            }
            if ((uVar8 == 0) &&
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
            UpdatePointLocation(this,*(int *)((this->SelectedPointIDs).AllocatorInstance.Data +
                                             lVar10 * 4),(TVector<double> *)&local_80._s_0);
            uVar11 = uVar11 + 1;
            lVar10 = lVar10 + 1;
            lVar12 = lVar12 + 0x18;
          } while ((int)uVar11 < (this->SelectedPointIDs).ArrayNum);
        }
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnPointsChanged);
    }
  }
  return;
}

// GizmoTransformEnded @ 14cb19200

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
UCurveControlPointsMechanic::GizmoTransformEnded
          (UCurveControlPointsMechanic *this,UTransformProxy *param_1)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  UObject *pUVar17;
  longlong lVar18;
  int *piVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  undefined1 *puVar24;
  longlong lVar25;
  uint uVar26;
  longlong local_res8;
  undefined8 *local_res18;
  double local_res20;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  TVector<double>_u_0 local_58;
  
  uVar22 = 0;
  if (0 < (this->SelectedPointIDs).ArrayNum) {
    lVar25 = 0;
    local_res8 = 0;
    do {
      pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
      lVar18 = (**(code **)(*(longlong *)pUVar17 + 0x2d8))(pUVar17);
      uVar26 = ~uVar22 >> 0x1f;
      pcVar7 = *(code **)(*(longlong *)(lVar18 + 0x28) + 0x20);
      uVar16 = 0;
      if ((int)uVar22 < (this->SelectedPointIDs).ArrayNum) {
        uVar16 = uVar26;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar16 = *(uint *)((this->SelectedPointIDs).AllocatorInstance.Data + lVar25 * 4);
      lVar21 = (longlong)(int)uVar16;
      if (((int)uVar16 < 0) || (*(int *)&(this->ControlPoints).Vertices.field_0x28 <= (int)uVar16))
      {
LAB_14cb19329:
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidPoint(PointID)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\CurveControlPointsMechanic.h"
                            ,0x87,L"");
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        if ((*(int *)&(this->ControlPoints).Vertices.field_0x28 <= (int)uVar16) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar8 = *(undefined1 **)&(this->ControlPoints).Vertices.field_0x20;
        puVar24 = &(this->ControlPoints).Vertices.field_0x10;
        if (puVar8 != (undefined1 *)0x0) {
          puVar24 = puVar8;
        }
        uVar20 = uVar16 & 0x1f;
        if ((int)uVar16 < 0) {
          uVar16 = uVar16 + 0x1f;
        }
        if ((*(uint *)(puVar24 + (longlong)((int)uVar16 >> 5) * 4) >> uVar20 & 1) == 0)
        goto LAB_14cb19329;
      }
      lVar9 = *(longlong *)&(this->ControlPoints).Vertices;
      puVar1 = (undefined8 *)(lVar9 + lVar21 * 0x18);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      uVar3 = *(undefined8 *)(lVar9 + 0x10 + lVar21 * 0x18);
      uVar16 = 0;
      if ((int)uVar22 < (this->SelectedPointStartPositions).ArrayNum) {
        uVar16 = uVar26;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar23 = (this->SelectedPointStartPositions).AllocatorInstance.Data + local_res8;
      uVar16 = 0;
      if ((int)uVar22 < (this->SelectedPointIDs).ArrayNum) {
        uVar16 = uVar26;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar10 = (this->SelectedPointIDs).AllocatorInstance.Data;
      local_res18 = ::operator_new(0x48);
      if (local_res18 != (undefined8 *)0x0) {
        iVar5 = this->CurrentChangeStamp;
        uVar6 = *(undefined4 *)(pFVar10 + lVar25 * 4);
        *local_res18 = &___7FCurveControlPointsMechanicMovementChange__6B_;
        *(undefined4 *)(local_res18 + 1) = uVar6;
        uVar4 = *(undefined8 *)(pFVar23 + 8);
        local_res18[2] = *(undefined8 *)pFVar23;
        local_res18[3] = uVar4;
        uVar4 = *(undefined8 *)(pFVar23 + 0x10);
        local_78 = (undefined4)uVar11;
        uStack_74 = (undefined4)((ulonglong)uVar11 >> 0x20);
        uStack_70 = (undefined4)uVar12;
        uStack_6c = (undefined4)((ulonglong)uVar12 >> 0x20);
        *(int *)(local_res18 + 8) = iVar5;
        local_res18[4] = uVar4;
        *(undefined4 *)(local_res18 + 5) = local_78;
        *(undefined4 *)((longlong)local_res18 + 0x2c) = uStack_74;
        *(undefined4 *)(local_res18 + 6) = uStack_70;
        *(undefined4 *)((longlong)local_res18 + 0x34) = uStack_6c;
        local_res18[7] = uVar3;
      }
      (*pcVar7)(lVar18 + 0x28,this,&local_res18,&PointMovementTransactionText);
      uVar16 = 0;
      if ((int)uVar22 < (this->SelectedPointIDs).ArrayNum) {
        uVar16 = uVar26;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar16 = *(uint *)((this->SelectedPointIDs).AllocatorInstance.Data + lVar25 * 4);
      lVar18 = (longlong)(int)uVar16;
      if (((int)uVar16 < 0) || (*(int *)&(this->ControlPoints).Vertices.field_0x28 <= (int)uVar16))
      {
LAB_14cb19539:
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidPoint(PointID)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\CurveControlPointsMechanic.h"
                            ,0x87,L"");
        if (bVar15) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else {
        if ((*(int *)&(this->ControlPoints).Vertices.field_0x28 <= (int)uVar16) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L""), bVar15)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        puVar8 = *(undefined1 **)&(this->ControlPoints).Vertices.field_0x20;
        puVar24 = &(this->ControlPoints).Vertices.field_0x10;
        if (puVar8 != (undefined1 *)0x0) {
          puVar24 = puVar8;
        }
        uVar20 = uVar16 & 0x1f;
        if ((int)uVar16 < 0) {
          uVar16 = uVar16 + 0x1f;
        }
        if ((*(uint *)(puVar24 + (longlong)((int)uVar16 >> 5) * 4) >> uVar20 & 1) == 0)
        goto LAB_14cb19539;
      }
      lVar21 = *(longlong *)&(this->ControlPoints).Vertices;
      pdVar2 = (double *)(lVar21 + lVar18 * 0x18);
      dVar13 = *pdVar2;
      dVar14 = pdVar2[1];
      local_res20 = *(double *)(lVar21 + 0x10 + lVar18 * 0x18);
      uVar16 = 0;
      if ((int)uVar22 < (this->SelectedPointIDs).ArrayNum) {
        uVar16 = uVar26;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      piVar19 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                             *)&(this->ControlPoints).PointIDToSequencePosition,
                            *(int *)((this->SelectedPointIDs).AllocatorInstance.Data + lVar25 * 4));
      iVar5 = *piVar19;
      local_58._s_0.Z = local_res20;
      local_58._s_0.X = dVar13;
      local_58._s_0.Y = dVar14;
      UE::Geometry::FPointPlanarSnapSolver::RemoveHistoryPoint(&this->SnapEngine,iVar5);
      UE::Geometry::FPointPlanarSnapSolver::InsertHistoryPoint
                (&this->SnapEngine,(TVector<double> *)&local_58._s_0,iVar5);
      local_res8 = local_res8 + 0x18;
      uVar22 = uVar22 + 1;
      lVar25 = lVar25 + 1;
    } while ((int)uVar22 < (this->SelectedPointIDs).ArrayNum);
  }
  (this->SelectedPointStartPositions).ArrayNum = 0;
  if ((this->SelectedPointStartPositions).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->SelectedPointStartPositions).AllocatorInstance,0,
               &(this->SelectedPointStartPositions).ArrayMax);
  }
  UpdateGizmoLocation(this);
  (**(code **)((this->SnapEngine)._padding_ + 0x60))();
  UpdateSnapTargetsForHover(this);
  pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar25 = (**(code **)(*(longlong *)pUVar17 + 0x2d8))(pUVar17);
  (**(code **)(*(longlong *)(lVar25 + 0x28) + 0x18))(lVar25 + 0x28);
  this->bGizmoBeingDragged = false;
  return;
}

// GizmoTransformStarted @ 14cb19da0

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UCurveControlPointsMechanic::GizmoTransformStarted
          (UCurveControlPointsMechanic *this,UTransformProxy *param_1)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  uint uVar12;
  UObject *pUVar13;
  longlong lVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_c8 [96];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_118;
  pUVar13 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar14 = (**(code **)(*(longlong *)pUVar13 + 0x2d8))(pUVar13);
  (**(code **)(*(longlong *)(lVar14 + 0x28) + 0x10))(lVar14 + 0x28,&PointMovementTransactionText);
  lVar14 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,local_c8);
  iVar4 = (this->SelectedPointIDs).ArrayNum;
  local_e8 = *(double *)(lVar14 + 0x20);
  dStack_e0 = *(double *)(lVar14 + 0x28);
  local_d8 = *(double *)(lVar14 + 0x30);
  (this->GizmoStartPosition).field0_0x0._s_0.X = local_e8;
  (this->GizmoStartPosition).field0_0x0._s_0.Y = dStack_e0;
  (this->GizmoStartPosition).field0_0x0._s_0.Z = local_d8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->SelectedPointStartPositions,iVar4,Default);
  uVar17 = 0;
  if ((this->SelectedPointIDs).ArrayNum < 1) {
    this->bGizmoBeingDragged = true;
  }
  else {
    lVar14 = 0;
    lVar20 = 0;
    do {
      iVar4 = (this->SelectedPointIDs).ArrayNum;
      uVar12 = 0;
      if ((int)uVar17 < iVar4) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_f8 = (longlong)(int)uVar17;
        local_f0 = (longlong)iVar4;
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
      uVar12 = *(uint *)((this->SelectedPointIDs).AllocatorInstance.Data + lVar20);
      lVar19 = (longlong)(int)uVar12;
      if (((int)uVar12 < 0) || (*(int *)&(this->ControlPoints).Vertices.field_0x28 <= (int)uVar12))
      {
LAB_14cb19f42:
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidPoint(PointID)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\CurveControlPointsMechanic.h"
                            ,0x87,L"");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      else {
        if (*(int *)&(this->ControlPoints).Vertices.field_0x28 <= (int)uVar12) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L"");
          if (bVar11) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        puVar5 = *(undefined1 **)&(this->ControlPoints).Vertices.field_0x20;
        puVar18 = &(this->ControlPoints).Vertices.field_0x10;
        if (puVar5 != (undefined1 *)0x0) {
          puVar18 = puVar5;
        }
        uVar16 = uVar12 & 0x1f;
        if ((int)uVar12 < 0) {
          uVar12 = uVar12 + 0x1f;
        }
        if ((*(uint *)(puVar18 + (longlong)((int)uVar12 >> 5) * 4) >> uVar16 & 1) == 0)
        goto LAB_14cb19f42;
      }
      lVar6 = *(longlong *)&(this->ControlPoints).Vertices;
      puVar1 = (undefined8 *)(lVar6 + lVar19 * 0x18);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      uVar3 = *(undefined8 *)(lVar6 + 0x10 + lVar19 * 0x18);
      iVar4 = (this->SelectedPointStartPositions).ArrayNum;
      uVar12 = 0;
      if ((int)uVar17 < iVar4) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if (uVar12 == 0) {
        local_f8 = (longlong)(int)uVar17;
        local_f0 = (longlong)iVar4;
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
      pFVar7 = (this->SelectedPointStartPositions).AllocatorInstance.Data;
      uVar17 = uVar17 + 1;
      lVar20 = lVar20 + 4;
      pFVar2 = pFVar7 + lVar14;
      *(undefined8 *)pFVar2 = uVar9;
      *(undefined8 *)(pFVar2 + 8) = uVar10;
      *(undefined8 *)(pFVar7 + lVar14 + 0x10) = uVar3;
      lVar14 = lVar14 + 0x18;
      iVar4 = (this->SelectedPointIDs).ArrayNum;
    } while ((int)uVar17 < iVar4);
    if (iVar4 == 1) {
      bVar11 = this->bIsLoop;
      piVar15 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                             *)&(this->ControlPoints).PointIDToSequencePosition,
                            *(int *)(this->SelectedPointIDs).AllocatorInstance.Data);
      UE::Geometry::FPointPlanarSnapSolver::RegenerateTargetLinesAround
                (&this->SnapEngine,*piVar15,bVar11,true);
    }
    this->bGizmoBeingDragged = true;
  }
  return;
}

// HitTest @ 14cb1b380

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
UCurveControlPointsMechanic::HitTest
          (UCurveControlPointsMechanic *this,FInputDeviceRay *param_1,FInputRayHit *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  double dVar4;
  undefined1 auVar5 [12];
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  FWeakObjectPtr local_res8 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined1 local_2c0;
  undefined7 uStack_2bf;
  double dStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  uint local_298;
  undefined4 local_294;
  void *local_290;
  FWeakObjectPtr FStack_288;
  TVector<double>_u_0 local_280;
  undefined1 local_268;
  undefined7 uStack_267;
  uint uStack_240;
  int iStack_23c;
  void *local_238;
  undefined1 local_228;
  undefined7 uStack_227;
  uint uStack_200;
  int iStack_1fc;
  void *local_1f8;
  undefined1 local_1e8;
  undefined7 uStack_1e7;
  undefined4 uStack_1c4;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  void *local_1b8;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_190;
  TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  local_178;
  TVector<double>_u_0 local_148;
  double dStack_130;
  double local_128;
  double dStack_120;
  TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  local_118;
  TVector<double>_u_0 local_e8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  FNearest local_b8;
  
  dStack_2b8 = ___xmm_000000000000000047efffffe0000000;
  dStack_2b0 = _UNK_1506c8f58;
  local_294 = 0;
  dStack_2a8 = ___xmm_3ff00000000000000000000000000000;
  dStack_2a0 = _UNK_15061cbc8;
  local_290 = (void *)0x0;
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_2e0 = 0;
  local_2c0 = 0;
  local_298 = local_298 & 0xffffff00;
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_2e0);
  FStack_288 = local_res8[0];
  *(ulonglong *)param_2 = CONCAT71(uStack_2bf,local_2c0);
  param_2->HitDepth = dStack_2b8;
  (param_2->HitNormal).field0_0x0._s_0.X = dStack_2b0;
  (param_2->HitNormal).field0_0x0._s_0.Y = dStack_2a8;
  (param_2->HitNormal).field0_0x0._s_0.Z = dStack_2a0;
  param_2->bHasHitNormal = (bool)(char)local_298;
  *(int3 *)&param_2->field_0x29 = (int3)(local_298 >> 8);
  param_2->HitIdentifier = local_294;
  param_2->HitOwner = local_290;
  (param_2->HitObject).WeakPtr = local_res8[0];
  if (this->bInteractiveInitializationMode == false) {
    if (((this->bInsertPointToggle == false) || (this->bIsLoop != false)) ||
       ((this->SelectedPointIDs).ArrayNum != 1)) {
LAB_14cb1b4ce:
      local_178._0_8_ = *(undefined8 *)&this->GeometrySetToleranceTest;
      if (this->bInsertPointToggle == false) {
        local_118._40_8_ = 0;
        local_118._0_8_ = local_178._0_8_;
        if (local_178._0_8_ != 0) {
          puVar2 = *(undefined8 **)&(this->GeometrySetToleranceTest).field_0x28;
          puVar12 = (undefined8 *)&(this->GeometrySetToleranceTest).field_0x10;
          if (puVar2 != (undefined8 *)0x0) {
            puVar12 = puVar2;
          }
          (**(code **)*puVar12)(puVar12,&local_118.field_0x10);
        }
        local_e8._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
        local_e8._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
        local_e8._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
        dStack_d0 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
        local_c8 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
        dStack_c0 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
        bVar9 = UE::Geometry::FGeometrySet3::FindNearestPointToRay
                          (&this->GeometrySet,(TRay<double> *)&local_e8._s_0,&local_b8,&local_118);
        uVar8 = __real_3ff0000000000000._4_4_;
        uVar7 = (undefined4)__real_3ff0000000000000;
        if (bVar9) {
          local_228 = 1;
          uStack_200 = uStack_200 & 0xffffff00;
          iStack_1fc = 0;
          local_1f8 = (void *)0x0;
          local_res20.ObjectIndex = 0;
          local_res20.ObjectSerialNumber = 0;
          local_2d0 = 0;
          FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_2d0);
          *(ulonglong *)param_2 = CONCAT71(uStack_227,local_228);
          *(undefined4 *)&param_2->HitDepth = local_b8.RayParam._0_4_;
          *(undefined4 *)((longlong)&param_2->HitDepth + 4) = local_b8.RayParam._4_4_;
          (param_2->HitNormal).field0_0x0._s_0.X = 0.0;
          (param_2->HitNormal).field0_0x0._s_0.Y = 0.0;
          *(undefined4 *)((longlong)&(param_2->HitNormal).field0_0x0 + 0x10) = uVar7;
          *(undefined4 *)((longlong)&(param_2->HitNormal).field0_0x0 + 0x14) = uVar8;
          *(uint *)&param_2->bHasHitNormal = uStack_200;
          param_2->HitIdentifier = iStack_1fc;
          param_2->HitOwner = local_1f8;
          (param_2->HitObject).WeakPtr = local_res20;
          return true;
        }
      }
      else {
        local_178._40_8_ = 0;
        if (local_178._0_8_ != 0) {
          puVar2 = *(undefined8 **)&(this->GeometrySetToleranceTest).field_0x28;
          puVar12 = (undefined8 *)&(this->GeometrySetToleranceTest).field_0x10;
          if (puVar2 != (undefined8 *)0x0) {
            puVar12 = puVar2;
          }
          (**(code **)*puVar12)(puVar12,&local_178.field_0x10);
        }
        local_148._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
        local_148._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
        local_148._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
        dStack_130 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
        local_128 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
        dStack_120 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
        bVar9 = UE::Geometry::FGeometrySet3::FindNearestCurveToRay
                          (&this->GeometrySet,(TRay<double> *)&local_148._s_0,&local_b8,&local_178);
        uVar8 = __real_3ff0000000000000._4_4_;
        uVar7 = (undefined4)__real_3ff0000000000000;
        if (bVar9) {
          local_268 = 1;
          uStack_240 = uStack_240 & 0xffffff00;
          iStack_23c = 0;
          local_238 = (void *)0x0;
          local_res18.ObjectIndex = 0;
          local_res18.ObjectSerialNumber = 0;
          local_2d8 = 0;
          FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_2d8);
          *(ulonglong *)param_2 = CONCAT71(uStack_267,local_268);
          *(undefined4 *)&param_2->HitDepth = local_b8.RayParam._0_4_;
          *(undefined4 *)((longlong)&param_2->HitDepth + 4) = local_b8.RayParam._4_4_;
          (param_2->HitNormal).field0_0x0._s_0.X = 0.0;
          (param_2->HitNormal).field0_0x0._s_0.Y = 0.0;
          *(undefined4 *)((longlong)&(param_2->HitNormal).field0_0x0 + 0x10) = uVar7;
          *(undefined4 *)((longlong)&(param_2->HitNormal).field0_0x0 + 0x14) = uVar8;
          *(uint *)&param_2->bHasHitNormal = uStack_240;
          param_2->HitIdentifier = iStack_23c;
          param_2->HitOwner = local_238;
          (param_2->HitObject).WeakPtr = local_res18;
          return true;
        }
      }
      return false;
    }
    iVar1 = *(int *)(this->SelectedPointIDs).AllocatorInstance.Data;
    iVar11 = FOrderedPoints::First(&this->ControlPoints);
    if (iVar1 != iVar11) {
      if (((this->SelectedPointIDs).ArrayNum < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        uVar10 = (*pcVar3)();
        return (bool)uVar10;
      }
      iVar1 = *(int *)(this->SelectedPointIDs).AllocatorInstance.Data;
      iVar11 = FOrderedPoints::Last(&this->ControlPoints);
      if (iVar1 != iVar11) goto LAB_14cb1b4ce;
    }
  }
  local_1a8._s_0.X = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  local_1a8._s_0.Y = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  local_1a8._s_0.Z = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  local_190._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  local_190._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  local_190._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  bVar9 = UE::Geometry::TFrame3<double>::RayPlaneIntersection
                    (&this->DrawPlane,(TVector<double> *)&local_190._s_0,
                     (TVector<double> *)&local_1a8._s_0,2,(TVector<double> *)&local_280._s_0);
  if (bVar9) {
    local_1e8 = 1;
    uStack_1c0 = uStack_1c0 & 0xffffff00;
    uStack_1bc = 0;
    dVar6 = (double)CONCAT44(__real_3ff0000000000000._4_4_,(undefined4)__real_3ff0000000000000);
    local_1b8 = (void *)0x0;
    local_2e8.ObjectIndex = 0;
    local_2e8.ObjectSerialNumber = 0;
    local_2c8 = 0;
    dVar4 = (local_280._s_0.Y - (param_1->WorldRay).Origin.field0_0x0._s_0.Y) *
            (param_1->WorldRay).Direction.field0_0x0._s_0.Y +
            (local_280._s_0.X - (param_1->WorldRay).Origin.field0_0x0._s_0.X) *
            (param_1->WorldRay).Direction.field0_0x0._s_0.X +
            (local_280._s_0.Z - (param_1->WorldRay).Origin.field0_0x0._s_0.Z) *
            (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
    FWeakObjectPtr::operator=(&local_2e8,(FObjectPtr)&local_2c8);
    *(ulonglong *)param_2 = CONCAT71(uStack_1e7,local_1e8);
    param_2->HitDepth = dVar4;
    auVar5._4_8_ = dVar4;
    auVar5._0_4_ = uStack_1c4;
    auVar13._0_8_ = auVar5._0_8_ << 0x20;
    auVar13._8_4_ = uStack_1c0;
    auVar13._12_4_ = uStack_1bc;
    (param_2->HitNormal).field0_0x0._s_0.X = 0.0;
    (param_2->HitNormal).field0_0x0._s_0.Y = 0.0;
    uVar14 = auVar13._8_8_;
    (param_2->HitNormal).field0_0x0._s_0.Z = dVar6;
    param_2->bHasHitNormal = (bool)(char)uVar14;
    *(int3 *)&param_2->field_0x29 = (int3)((ulonglong)uVar14 >> 8);
    param_2->HitIdentifier = (int)((ulonglong)uVar14 >> 0x20);
    param_2->HitOwner = local_1b8;
    (param_2->HitObject).WeakPtr = local_2e8;
  }
  return bVar9;
}

// Initialize @ 14cb1ca50

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
UCurveControlPointsMechanic::Initialize
          (UCurveControlPointsMechanic *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res18 [16];
  
  ChangeSelection(this,-1,false);
  if (-1 < this->HoveredPointID) {
    UPointSetComponent::SetPointColor
              ((this->DrawnControlPoints).field0_0x0.DebugPtr,this->HoveredPointID,
               &this->PreHoverPointColor);
    this->HoveredPointID = -1;
  }
  UPointSetComponent::Clear((this->PreviewPoint).field0_0x0.DebugPtr);
  ULineSetComponent::Clear((this->PreviewSegment).field0_0x0.DebugPtr);
  FOrderedPoints::Empty(&this->ControlPoints);
  UE::Geometry::FGeometrySet3::Reset(&this->GeometrySet,true,true);
  ULineSetComponent::Clear((this->DrawnControlSegments).field0_0x0.DebugPtr);
  UPointSetComponent::Clear((this->DrawnControlPoints).field0_0x0.DebugPtr);
  (**(code **)((this->SnapEngine)._padding_ + 0x58))(&this->SnapEngine);
  iVar2 = param_1->ArrayNum;
  pFVar3 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Math::TVector<double>_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar3 == pFVar1) break;
    InsertPointAt(this,(this->ControlPoints).Sequence.ArrayNum,(TVector<double> *)pFVar3,(int *)0x0)
    ;
    pFVar3 = pFVar3 + 0x18;
  }
  this->bIsLoop = param_2;
  UE::Geometry::FPointPlanarSnapSolver::UpdatePointHistory(&this->SnapEngine,param_1);
  UpdateSnapTargetsForHover(this);
  return;
}

// InsertPointAt @ 14cb21060

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
UCurveControlPointsMechanic::InsertPointAt
          (UCurveControlPointsMechanic *this,int param_1,TVector<double> *param_2,int *param_3)

{
  FOrderedPoints *this_00;
  FPointPlanarSnapSolver *this_01;
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double *pdVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int *piVar12;
  FSparseArrayAllocationInfo *pFVar13;
  TVector<double> *pTVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 *puVar19;
  int local_res18 [2];
  int *local_res20;
  int local_1e8 [2];
  undefined1 local_1e0 [24];
  int *local_1c8;
  int *local_1c0;
  TPolyline<double,3> local_1b8;
  TVector<double>_u_0 local_1a8;
  FColor_u_0 local_190;
  float local_18c;
  float local_188;
  TVector<double>_u_0 local_180;
  TVector<double>_u_0 local_168;
  TVector<double>_u_0 local_150;
  TVector<double>_u_0 local_138;
  double local_120;
  double dStack_118;
  double local_110;
  FColor_u_0 local_108;
  float local_104;
  float local_100;
  TVector<double>_u_0 local_f8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  FColor_u_0 local_c8;
  float local_c4;
  float local_c0;
  FSparseArrayAllocationInfo local_b8;
  TVector<double> local_a8 [4];
  
  this_00 = &this->ControlPoints;
  local_res20 = param_3;
  local_1e8[0] = param_1;
  if (param_1 < (this->ControlPoints).Sequence.ArrayNum) {
    lVar17 = (longlong)param_1 * 4;
    uVar18 = param_1;
    do {
      uVar16 = 0;
      if ((int)uVar18 < (this->ControlPoints).Sequence.ArrayNum) {
        uVar16 = ~uVar18 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        iVar11 = (*pcVar6)();
        return iVar11;
      }
      piVar12 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                             *)&(this->ControlPoints).PointIDToSequencePosition,
                            *(int *)((this->ControlPoints).Sequence.AllocatorInstance.Data + lVar17)
                           );
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 4;
      *piVar12 = *piVar12 + 1;
    } while ((int)uVar18 < (this->ControlPoints).Sequence.ArrayNum);
  }
  piVar12 = local_res20;
  if (local_res20 == (int *)0x0) {
    local_res18[0] =
         TSparseArray<UE::Math::TVector<double>,FDefaultSparseArrayAllocator>::Add
                   (&this_00->Vertices,param_2);
  }
  else {
    pFVar13 = TSparseArrayBase<24,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                        ((TSparseArrayBase<24,8,FDefaultSparseArrayAllocator> *)this_00,&local_b8,
                         *local_res20);
    pdVar5 = pFVar13->Pointer;
    if (pdVar5 != (double *)0x0) {
      dVar4 = (param_2->field0_0x0)._s_0.Y;
      *pdVar5 = (param_2->field0_0x0)._s_0.X;
      pdVar5[1] = dVar4;
      pdVar5[2] = (param_2->field0_0x0)._s_0.Z;
    }
    local_res18[0] = *piVar12;
  }
  TArray<int,TSizedDefaultAllocator<32>_>::Insert
            (&(this->ControlPoints).Sequence,local_res18,local_1e8[0]);
  local_1c8 = local_res18;
  local_1c0 = local_1e8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
  Emplace<TPairInitializer<int_const_&,int_const_&>_>
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             &(this->ControlPoints).PointIDToSequencePosition,
             (TPairInitializer<int_const_&,int_const_&> *)local_1e0,(bool *)&local_1c8);
  iVar9 = local_res18[0];
  UE::Geometry::FGeometrySet3::AddPoint(&this->GeometrySet,local_res18[0],param_2);
  local_1a8._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_1a8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_190 = (this->CurrentPointsColor).field0_0x0;
  local_1a8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_18c = this->PointsSize;
  local_188 = this->DepthBias;
  UPointSetComponent::InsertPoint
            ((this->DrawnControlPoints).field0_0x0.DebugPtr,iVar9,
             (FRenderablePoint *)&local_1a8._s_0);
  iVar11 = (this->ControlPoints).Sequence.ArrayNum;
  if (iVar11 < 2) goto LAB_14cb215bc;
  if ((this->bIsLoop != false) || (param_1 != 0)) {
    uVar18 = FOrderedPoints::GetPointIDAt(this_00,(param_1 + -1 + iVar11) % iVar11);
    if (((int)uVar18 < 0) || (*(int *)&(this->ControlPoints).Vertices.field_0x28 <= (int)uVar18)) {
LAB_14cb212d7:
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidPoint(PointID)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\CurveControlPointsMechanic.h"
                          ,0x87,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        iVar11 = (*pcVar6)();
        return iVar11;
      }
    }
    else {
      if ((*(int *)&(this->ControlPoints).Vertices.field_0x28 <= (int)uVar18) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        iVar11 = (*pcVar6)();
        return iVar11;
      }
      puVar19 = *(undefined1 **)&(this->ControlPoints).Vertices.field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = &(this->ControlPoints).Vertices.field_0x10;
      }
      if ((*(uint *)(puVar19 + (longlong)((int)(uVar18 + ((int)uVar18 >> 0x1f & 0x1fU)) >> 5) * 4)
           >> (uVar18 & 0x1f) & 1) == 0) goto LAB_14cb212d7;
    }
    pdVar5 = (double *)(*(longlong *)&this_00->Vertices + (longlong)(int)uVar18 * 0x18);
    local_180._s_0.X = *pdVar5;
    local_180._s_0.Y = pdVar5[1];
    local_180._s_0.Z =
         *(double *)(*(longlong *)&this_00->Vertices + 0x10 + (longlong)(int)uVar18 * 0x18);
    UE::Geometry::TPolyline<double,3>::TPolyline<double,3>
              ((TPolyline<double,3> *)(local_1e0 + 8),(TVector<double> *)&local_180._s_0,param_2);
    bVar10 = ULineSetComponent::IsLineValid((this->DrawnControlSegments).field0_0x0.DebugPtr,uVar18)
    ;
    if (bVar10) {
      local_168._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_168._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_168._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      ULineSetComponent::SetLineEnd
                ((this->DrawnControlSegments).field0_0x0.DebugPtr,uVar18,
                 (TVector<double> *)&local_168._s_0);
      UE::Geometry::FGeometrySet3::UpdateCurve
                (&this->GeometrySet,uVar18,(TPolyline<double,3> *)(local_1e0 + 8));
    }
    else {
      dVar7 = (param_2->field0_0x0)._s_0.X;
      dVar8 = (param_2->field0_0x0)._s_0.Y;
      dVar4 = (param_2->field0_0x0)._s_0.Z;
      fVar2 = this->SegmentsThickness;
      fVar3 = this->DepthBias;
      pTVar14 = FOrderedPoints::GetPointCoordinates(this_00,local_a8,uVar18);
      local_138._s_0.X = (pTVar14->field0_0x0)._s_0.X;
      local_138._s_0.Y = (pTVar14->field0_0x0)._s_0.Y;
      local_138._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
      local_108 = (this->CurrentSegmentsColor).field0_0x0;
      local_120 = dVar7;
      dStack_118 = dVar8;
      local_110 = dVar4;
      local_104 = fVar2;
      local_100 = fVar3;
      ULineSetComponent::InsertLine
                ((this->DrawnControlSegments).field0_0x0.DebugPtr,uVar18,
                 (FRenderableLine *)&local_138._s_0);
      UE::Geometry::FGeometrySet3::AddCurve
                (&this->GeometrySet,uVar18,(TPolyline<double,3> *)(local_1e0 + 8));
    }
    if ((int *)local_1e0._8_8_ != (int *)0x0) {
      FMemory::Free((void *)local_1e0._8_8_);
    }
  }
  if ((this->bIsLoop != false) || (param_1 != (this->ControlPoints).Sequence.ArrayNum + -1)) {
    iVar11 = (this->ControlPoints).Sequence.ArrayNum;
    uVar16 = (param_1 + 1) % iVar11;
    uVar18 = 0;
    if ((int)uVar16 < iVar11) {
      uVar18 = ~uVar16 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      iVar11 = (*pcVar6)();
      return iVar11;
    }
    lVar15 = (longlong)
             *(int *)((this->ControlPoints).Sequence.AllocatorInstance.Data +
                     (longlong)(int)uVar16 * 4);
    lVar17 = *(longlong *)&(this->ControlPoints).Vertices;
    pdVar5 = (double *)(lVar17 + lVar15 * 0x18);
    local_150._s_0.X = *pdVar5;
    local_150._s_0.Y = pdVar5[1];
    local_150._s_0.Z = *(double *)(lVar17 + 0x10 + lVar15 * 0x18);
    UE::Geometry::TPolyline<double,3>::TPolyline<double,3>
              (&local_1b8,(TVector<double> *)&local_150._s_0,param_2);
    UE::Geometry::FGeometrySet3::AddCurve(&this->GeometrySet,iVar9,&local_1b8);
    local_c0 = this->DepthBias;
    local_c4 = this->SegmentsThickness;
    uVar18 = 0;
    if ((int)uVar16 < (this->ControlPoints).Sequence.ArrayNum) {
      uVar18 = ~uVar16 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar6 = (code *)swi(3);
      iVar11 = (*pcVar6)();
      return iVar11;
    }
    local_f8._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_f8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    local_f8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    lVar15 = (longlong)
             *(int *)((this->ControlPoints).Sequence.AllocatorInstance.Data +
                     (longlong)(int)uVar16 * 4);
    lVar17 = *(longlong *)&(this->ControlPoints).Vertices;
    puVar1 = (undefined8 *)(lVar17 + lVar15 * 0x18);
    local_e0 = *puVar1;
    uStack_d8 = puVar1[1];
    local_d0 = *(undefined8 *)(lVar17 + 0x10 + lVar15 * 0x18);
    local_c8 = (this->CurrentSegmentsColor).field0_0x0;
    ULineSetComponent::InsertLine
              ((this->DrawnControlSegments).field0_0x0.DebugPtr,iVar9,
               (FRenderableLine *)&local_f8._s_0);
    if (local_1b8.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Vertices.AllocatorInstance.Data);
    }
  }
LAB_14cb215bc:
  this_01 = &this->SnapEngine;
  UE::Geometry::FPointPlanarSnapSolver::InsertHistoryPoint(this_01,param_2,param_1);
  if (this->bInteractiveInitializationMode != false) {
    if (param_1 == (this->ControlPoints).Sequence.ArrayNum + -1) {
      (**(code **)(this_01->_padding_ + 0x18))(this_01,this->LastPointSnapID);
      (**(code **)(this_01->_padding_ + 0x10))
                (this_01,param_2,this->LastPointSnapID,this->EndpointSnapPriority);
      UpdateSnapTargetsForHover(this);
    }
    if (param_1 == 0) {
      (**(code **)(this_01->_padding_ + 0x18))(this_01,this->FirstPointSnapID);
      (**(code **)(this_01->_padding_ + 0x10))
                (this_01,param_2,this->FirstPointSnapID,this->EndpointSnapPriority);
    }
  }
  return iVar9;
}

// IsHitByClick @ 14cb22250

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
UCurveControlPointsMechanic::IsHitByClick
          (UCurveControlPointsMechanic *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  HitTest((UCurveControlPointsMechanic *)&this[-1].SelectedPointStartPositions.ArrayNum,param_1,
          __return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnBeginHover @ 14cb23c10

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
UCurveControlPointsMechanic::OnBeginHover
          (UCurveControlPointsMechanic *this,FInputDeviceRay *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb23c13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x28))();
  return;
}

// OnClicked @ 14cb24f80

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
UCurveControlPointsMechanic::OnClicked(UCurveControlPointsMechanic *this,FInputDeviceRay *param_1)

{
  longlong *plVar1;
  ForElementType<FSetElementId> *pFVar2;
  int iVar3;
  code *pcVar4;
  float *pfVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  UObject *pUVar9;
  longlong lVar10;
  int *piVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  float *pfVar14;
  undefined1 *puVar15;
  int *piVar16;
  code cVar17;
  code *local_res8;
  undefined8 *local_res18;
  undefined8 *local_res20;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1d0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_190;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  FNearest local_148;
  double local_f8 [2];
  undefined1 local_e8 [24];
  undefined8 local_d0;
  TVector<double>_u_0 local_c8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98 [2];
  undefined1 local_88 [24];
  undefined8 local_70;
  TVector<double>_u_0 local_68;
  double dStack_50;
  double local_48;
  double dStack_40;
  
  piVar16 = &this[-1].SelectedPointStartPositions.ArrayNum;
  if ((this->ControlPoints).PointIDToSequencePosition.field_0x21 == '\0') {
    local_f8[0] = (this->CameraState).Orientation.Z;
    puVar13 = (undefined8 *)0x0;
    if (*(char *)((longlong)&(this->DrawPlane).Origin.field0_0x0 + 0x10) == '\0') {
      local_70 = 0;
      local_98[0] = local_f8[0];
      if (local_f8[0] != 0.0) {
        pfVar5 = *(float **)&(this->CameraState).field_0x58;
        pfVar14 = &(this->CameraState).HorizontalFOVDegrees;
        if (pfVar5 != (float *)0x0) {
          pfVar14 = pfVar5;
        }
        (*(code *)**(undefined8 **)pfVar14)(pfVar14,local_88);
      }
      local_68._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
      local_68._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
      local_68._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
      dStack_50 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
      local_48 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
      dStack_40 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
      bVar6 = UE::Geometry::FGeometrySet3::FindNearestPointToRay
                        ((FGeometrySet3 *)&(this->SnapEngine).PointHistory.ArrayNum,
                         (TRay<double> *)&local_68._s_0,&local_148,
                         (TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                          *)local_98);
      if (bVar6) {
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x678);
        lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
        (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x10))
                  (lVar10 + 0x28,&PointSelectionTransactionText);
        ChangeSelection((UCurveControlPointsMechanic *)piVar16,local_148.ID,
                        *(bool *)((longlong)&(this->DrawPlane).Origin.field0_0x0 + 8));
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x678);
        lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
        (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x18))(lVar10 + 0x28);
      }
    }
    else {
      local_d0 = 0;
      if (local_f8[0] != 0.0) {
        pfVar5 = *(float **)&(this->CameraState).field_0x58;
        pfVar14 = &(this->CameraState).HorizontalFOVDegrees;
        if (pfVar5 != (float *)0x0) {
          pfVar14 = pfVar5;
        }
        (*(code *)**(undefined8 **)pfVar14)(pfVar14,local_e8);
      }
      local_c8._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
      local_c8._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
      local_c8._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
      dStack_b0 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
      local_a8 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
      dStack_a0 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
      bVar6 = UE::Geometry::FGeometrySet3::FindNearestCurveToRay
                        ((FGeometrySet3 *)&(this->SnapEngine).PointHistory.ArrayNum,
                         (TRay<double> *)&local_c8._s_0,&local_148,
                         (TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                          *)local_f8);
      if (bVar6) {
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x678);
        lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
        (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x10))
                  (lVar10 + 0x28,&PointAdditionTransactionText);
        piVar11 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                  FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                               *)&(this->ControlPoints).Vertices.field_0x18,local_148.ID);
        iVar8 = *piVar11;
        iVar7 = InsertPointAt((UCurveControlPointsMechanic *)piVar16,iVar8 + 1,
                              &local_148.NearestGeoPoint,(int *)0x0);
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x678);
        lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
        local_res8 = *(code **)(*(longlong *)(lVar10 + 0x28) + 0x20);
        puVar12 = ::operator_new(0x30);
        if (puVar12 != (undefined8 *)0x0) {
          iVar3 = (this->SelectedPointIDs).ArrayNum;
          *puVar12 = &___7FCurveControlPointsMechanicInsertionChange__6B_;
          *(int *)(puVar12 + 1) = iVar8 + 1;
          *(int *)((longlong)puVar12 + 0xc) = iVar7;
          *(undefined4 *)(puVar12 + 2) = local_148.NearestGeoPoint.field0_0x0._0_4_;
          *(undefined4 *)((longlong)puVar12 + 0x14) = local_148.NearestGeoPoint.field0_0x0._4_4_;
          *(undefined4 *)(puVar12 + 3) = local_148.NearestGeoPoint.field0_0x0._8_4_;
          *(undefined4 *)((longlong)puVar12 + 0x1c) = local_148.NearestGeoPoint.field0_0x0._12_4_;
          puVar12[4] = local_148.NearestGeoPoint.field0_0x0._s_0.Z;
          *(undefined1 *)(puVar12 + 5) = 1;
          *(int *)((longlong)puVar12 + 0x2c) = iVar3;
          puVar13 = puVar12;
        }
        local_res20 = puVar13;
        (*local_res8)(lVar10 + 0x28,piVar16,&local_res20,&PointAdditionTransactionText);
      }
      else {
        if (*(int *)&(this->GeometrySetToleranceTest).field_0x10 != 1) {
          return;
        }
        if ((this->ControlPoints).PointIDToSequencePosition.field_0x20 != '\0') {
          return;
        }
        if ((*(int *)&(this->GeometrySetToleranceTest).field_0x10 < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        piVar16 = *(int **)&(this->GeometrySetToleranceTest).field_0x8;
        puVar15 = &(this->OnPointsChanged).field_0x10;
        iVar8 = FOrderedPoints::First((FOrderedPoints *)puVar15);
        if (*piVar16 != iVar8) {
          if ((*(int *)&(this->GeometrySetToleranceTest).field_0x10 < 1) &&
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
          iVar8 = **(int **)&(this->GeometrySetToleranceTest).field_0x8;
          iVar7 = FOrderedPoints::Last((FOrderedPoints *)puVar15);
          if (iVar8 != iVar7) {
            return;
          }
        }
        pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x678);
        lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
        (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x10))
                  (lVar10 + 0x28,&PointAdditionTransactionText);
        local_178._s_0.X = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
        local_178._s_0.Y = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
        local_178._s_0.Z = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
        local_160._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
        local_160._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
        local_160._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
        UE::Geometry::TFrame3<double>::RayPlaneIntersection
                  ((TFrame3<double> *)&this->InitializationCurveColor,
                   (TVector<double> *)&local_160._s_0,(TVector<double> *)&local_178._s_0,2,
                   (TVector<double> *)&local_1e8._s_0);
        if ((*(char *)((longlong)&(this->DrawPlane).Origin.field0_0x0 + 9) !=
             (this->ControlPoints).PointIDToSequencePosition.field_0x2d) &&
           (UE::Geometry::FPointPlanarSnapSolver::UpdateSnappedPoint
                      ((FPointPlanarSnapSolver *)
                       &(this->ControlPoints).PointIDToSequencePosition.field_0x38,
                       (TVector<double> *)&local_1e8._s_0),
           (char)(this->SnapEngine)._padding_ != '\0')) {
          local_1e8._0_4_ = (undefined4)(this->SnapEngine)._padding_;
          local_1e8._4_4_ = *(undefined4 *)((longlong)&(this->SnapEngine)._padding_ + 4);
          local_1e8._8_4_ = (undefined4)(this->SnapEngine)._padding_;
          local_1e8._12_4_ = *(undefined4 *)((longlong)&(this->SnapEngine)._padding_ + 4);
          local_1e8._s_0.Z = (double)(this->SnapEngine)._padding_;
          (**(code **)(*(longlong *)&(this->ControlPoints).PointIDToSequencePosition.field_0x38 +
                      0x60))(&(this->ControlPoints).PointIDToSequencePosition.field_0x38);
        }
        if ((*(int *)&(this->GeometrySetToleranceTest).field_0x10 < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        piVar11 = *(int **)&(this->GeometrySetToleranceTest).field_0x8;
        iVar8 = FOrderedPoints::First((FOrderedPoints *)&(this->OnPointsChanged).field_0x10);
        piVar16 = &this[-1].SelectedPointStartPositions.ArrayNum;
        if (*piVar11 == iVar8) {
          iVar7 = InsertPointAt((UCurveControlPointsMechanic *)piVar16,0,
                                (TVector<double> *)&local_1e8._s_0,(int *)0x0);
          pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x678);
          lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
          pcVar4 = *(code **)(*(longlong *)(lVar10 + 0x28) + 0x20);
          puVar12 = ::operator_new(0x30);
          if (puVar12 != (undefined8 *)0x0) {
            iVar8 = (this->SelectedPointIDs).ArrayNum;
            *puVar12 = &___7FCurveControlPointsMechanicInsertionChange__6B_;
            *(undefined4 *)(puVar12 + 1) = 0;
            *(int *)((longlong)puVar12 + 0xc) = iVar7;
            *(undefined4 *)(puVar12 + 2) = local_1e8._0_4_;
            *(undefined4 *)((longlong)puVar12 + 0x14) = local_1e8._4_4_;
            *(undefined4 *)(puVar12 + 3) = local_1e8._8_4_;
            *(undefined4 *)((longlong)puVar12 + 0x1c) = local_1e8._12_4_;
            puVar12[4] = local_1e8._s_0.Z;
            *(undefined1 *)(puVar12 + 5) = 1;
            *(int *)((longlong)puVar12 + 0x2c) = iVar8;
            puVar13 = puVar12;
          }
          local_1b8 = puVar13;
          (*pcVar4)(lVar10 + 0x28,&this[-1].SelectedPointStartPositions.ArrayNum,&local_1b8,
                    &PointAdditionTransactionText);
        }
        else {
          iVar7 = InsertPointAt((UCurveControlPointsMechanic *)piVar16,
                                *(int *)&(this->ControlPoints).Vertices.field_0x10,
                                (TVector<double> *)&local_1e8._s_0,(int *)0x0);
          pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x678);
          lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
          iVar8 = *(int *)&(this->ControlPoints).Vertices.field_0x10;
          pcVar4 = *(code **)(*(longlong *)(lVar10 + 0x28) + 0x20);
          puVar12 = ::operator_new(0x30);
          if (puVar12 != (undefined8 *)0x0) {
            iVar3 = (this->SelectedPointIDs).ArrayNum;
            *puVar12 = &___7FCurveControlPointsMechanicInsertionChange__6B_;
            *(int *)(puVar12 + 1) = iVar8 + -1;
            *(int *)((longlong)puVar12 + 0xc) = iVar7;
            *(undefined4 *)(puVar12 + 2) = local_1e8._0_4_;
            *(undefined4 *)((longlong)puVar12 + 0x14) = local_1e8._4_4_;
            *(undefined4 *)(puVar12 + 3) = local_1e8._8_4_;
            *(undefined4 *)((longlong)puVar12 + 0x1c) = local_1e8._12_4_;
            puVar12[4] = local_1e8._s_0.Z;
            *(undefined1 *)(puVar12 + 5) = 1;
            *(int *)((longlong)puVar12 + 0x2c) = iVar3;
            puVar13 = puVar12;
          }
          local_1b0 = puVar13;
          (*pcVar4)(lVar10 + 0x28,&this[-1].SelectedPointStartPositions.ArrayNum,&local_1b0,
                    &PointAdditionTransactionText);
        }
      }
      ChangeSelection((UCurveControlPointsMechanic *)&this[-1].SelectedPointStartPositions.ArrayNum,
                      iVar7,false);
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x678);
      lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
      (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x18))(lVar10 + 0x28);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this->field_0x20);
    }
  }
  else {
    local_1a8._s_0.X = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
    local_1a8._s_0.Y = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
    local_1a8._s_0.Z = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
    local_190._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
    local_190._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
    local_190._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
    bVar6 = UE::Geometry::TFrame3<double>::RayPlaneIntersection
                      ((TFrame3<double> *)&this->InitializationCurveColor,
                       (TVector<double> *)&local_190._s_0,(TVector<double> *)&local_1a8._s_0,2,
                       (TVector<double> *)&local_1d0._s_0);
    if (bVar6) {
      UE::Geometry::FPointPlanarSnapSolver::UpdateSnappedPoint
                ((FPointPlanarSnapSolver *)
                 &(this->ControlPoints).PointIDToSequencePosition.field_0x38,
                 (TVector<double> *)&local_1d0._s_0);
      if ((char)(this->SnapEngine)._padding_ != '\0') {
        iVar8 = *(int *)&(this->ControlPoints).Vertices.field_0x10;
        plVar1 = &(this->SnapEngine)._padding_;
        pFVar2 = &(this->SnapEngine).IgnoreTargets.Hash.SecondaryData;
        if (((*(int *)&(this->ControlPoints).PointIDToSequencePosition.field_0x24 <= iVar8) &&
            ((int)*plVar1 == *(int *)pFVar2)) ||
           ((puVar15 = &(this->ControlPoints).PointIDToSequencePosition.field_0x38,
            *(int *)&(this->ControlPoints).PointIDToSequencePosition.field_0x28 <= iVar8 &&
            ((int)*plVar1 == *(int *)&(this->SnapEngine).IgnoreTargets.Hash.SecondaryData.field_0x4)
            ))) {
          pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x678);
          lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
          (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x10))
                    (lVar10 + 0x28,&InitializationCompletedTransactionText);
          if ((char)(this->SnapEngine)._padding_ == '\0') {
            iVar8 = -1;
          }
          else {
            iVar8 = (int)*plVar1;
          }
          cVar17 = (code)(iVar8 == *(int *)pFVar2);
          SetIsLoop((UCurveControlPointsMechanic *)&this[-1].SelectedPointStartPositions.ArrayNum,
                    (bool)cVar17);
          SetInteractiveInitialization
                    ((UCurveControlPointsMechanic *)&this[-1].SelectedPointStartPositions.ArrayNum,
                     false);
          pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x678);
          lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
          pcVar4 = *(code **)(*(longlong *)(lVar10 + 0x28) + 0x20);
          local_res8 = ::operator_new(0x10);
          if (local_res8 == (code *)0x0) {
            local_res8 = (code *)0x0;
          }
          else {
            iVar8 = (this->SelectedPointIDs).ArrayNum;
            *(undefined ***)local_res8 = &___7FCurveControlPointsMechanicModeChange__6B_;
            local_res8[8] = (code)0x1;
            local_res8[9] = cVar17;
            *(int *)(local_res8 + 0xc) = iVar8;
          }
          (*pcVar4)(lVar10 + 0x28,&this[-1].SelectedPointStartPositions.ArrayNum,&local_res8,
                    &InitializationCompletedTransactionText);
          pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x678);
          lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
          (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x18))(lVar10 + 0x28);
          (**(code **)(*(longlong *)&(this->ControlPoints).PointIDToSequencePosition.field_0x38 +
                      0x60))();
          TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                    ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                     &this->ClickBehavior);
          return;
        }
        if (*(char *)((longlong)&(this->DrawPlane).Origin.field0_0x0 + 9) !=
            (this->ControlPoints).PointIDToSequencePosition.field_0x2d) {
          local_1d0._0_4_ = (undefined4)(this->SnapEngine)._padding_;
          local_1d0._4_4_ = *(undefined4 *)((longlong)&(this->SnapEngine)._padding_ + 4);
          local_1d0._8_4_ = (undefined4)(this->SnapEngine)._padding_;
          local_1d0._12_4_ = *(undefined4 *)((longlong)&(this->SnapEngine)._padding_ + 4);
          local_1d0._s_0.Z = (double)(this->SnapEngine)._padding_;
        }
        (**(code **)(*(longlong *)puVar15 + 0x60))(puVar15);
      }
      piVar16 = &this[-1].SelectedPointStartPositions.ArrayNum;
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x678);
      lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
      (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x10))
                (lVar10 + 0x28,&PointAdditionTransactionText);
      iVar7 = InsertPointAt((UCurveControlPointsMechanic *)piVar16,
                            *(int *)&(this->ControlPoints).Vertices.field_0x10,
                            (TVector<double> *)&local_1d0._s_0,(int *)0x0);
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x678);
      lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
      iVar8 = *(int *)&(this->ControlPoints).Vertices.field_0x10;
      local_res8 = *(code **)(*(longlong *)(lVar10 + 0x28) + 0x20);
      local_res18 = ::operator_new(0x30);
      if (local_res18 == (undefined8 *)0x0) {
        local_res18 = (undefined8 *)0x0;
      }
      else {
        iVar3 = (this->SelectedPointIDs).ArrayNum;
        *local_res18 = &___7FCurveControlPointsMechanicInsertionChange__6B_;
        *(int *)(local_res18 + 1) = iVar8 + -1;
        *(int *)((longlong)local_res18 + 0xc) = iVar7;
        *(undefined4 *)(local_res18 + 2) = local_1d0._0_4_;
        *(undefined4 *)((longlong)local_res18 + 0x14) = local_1d0._4_4_;
        *(undefined4 *)(local_res18 + 3) = local_1d0._8_4_;
        *(undefined4 *)((longlong)local_res18 + 0x1c) = local_1d0._12_4_;
        local_res18[4] = local_1d0._s_0.Z;
        *(undefined1 *)(local_res18 + 5) = 1;
        *(int *)((longlong)local_res18 + 0x2c) = iVar3;
      }
      (*local_res8)(lVar10 + 0x28,piVar16,&local_res18,&PointAdditionTransactionText);
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x678);
      lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
      (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x18))(lVar10 + 0x28);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this->field_0x20);
      UpdateSnapTargetsForHover((UCurveControlPointsMechanic *)piVar16);
    }
  }
  return;
}

// OnEndHover @ 14cb278a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCurveControlPointsMechanic::OnEndHover(UCurveControlPointsMechanic *this)

{
  int iVar1;
  
  iVar1 = *(int *)&(this->CameraState).field_0x58;
  if (-1 < iVar1) {
    UPointSetComponent::SetPointColor
              (*(UPointSetComponent **)&(this->GeometrySet).CurveIDToIndex.field_0x20,iVar1,
               (FColor *)&(this->CameraState).field_0x5c);
    *(undefined4 *)&(this->CameraState).field_0x58 = 0xffffffff;
  }
  UPointSetComponent::Clear(*(UPointSetComponent **)&(this->GeometrySet).CurveIDToIndex.field_0x30);
  ULineSetComponent::Clear(*(ULineSetComponent **)&(this->GeometrySet).CurveIDToIndex.field_0x38);
                    /* WARNING: Could not recover jumptable at 0x00014cb278f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&(this->ControlPoints).PointIDToSequencePosition.field_0x30 + 0x60))();
  return;
}

// OnUpdateHover @ 14cb27f00

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
UCurveControlPointsMechanic::OnUpdateHover
          (UCurveControlPointsMechanic *this,FInputDeviceRay *param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double *pdVar4;
  UPointSetComponent *this_00;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  FRenderablePoint *pFVar13;
  TVector<double> *pTVar14;
  double *pdVar15;
  undefined4 uVar16;
  TVector<double>_u_0 local_268;
  TVector<double>_u_0 local_250;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  TVector<double>_u_0 local_228;
  undefined4 local_210;
  undefined4 local_20c;
  undefined4 local_208;
  TVector<double>_u_0 local_200;
  TVector<double>_u_0 local_1e8;
  TVector<double>_u_0 local_1c8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  double local_188 [2];
  undefined1 local_178 [24];
  undefined8 local_160;
  TVector<double>_u_0 local_158;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128 [2];
  undefined1 local_118 [24];
  undefined8 local_100;
  TVector<double>_u_0 local_f8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  FNearest local_c8;
  TVector<double> local_78 [4];
  
  if (((this->ControlPoints).PointIDToSequencePosition.field_0x19 == '\0') &&
     (*(char *)((longlong)&(this->DrawPlane).Origin.field0_0x0 + 8) != '\0')) {
    local_188[0] = (this->CameraState).Orientation.Y;
    local_160 = 0;
    if (local_188[0] != 0.0) {
      pdVar4 = (double *)(this->CameraState).DPIScale;
      pdVar15 = &(this->CameraState).Orientation.W;
      if (pdVar4 != (double *)0x0) {
        pdVar15 = pdVar4;
      }
      (**(code **)*pdVar15)(pdVar15,local_178);
    }
    local_158._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
    local_158._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
    local_158._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
    dStack_140 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
    local_138 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
    dStack_130 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
    bVar9 = UE::Geometry::FGeometrySet3::FindNearestCurveToRay
                      ((FGeometrySet3 *)&(this->SnapEngine).PointHistory,
                       (TRay<double> *)&local_158._s_0,&local_c8,
                       (TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                        *)local_188);
    if (!bVar9) goto LAB_14cb2804b;
    iVar12 = *(int *)&(this->CameraState).field_0x58;
    if (-1 < iVar12) {
      UPointSetComponent::SetPointColor
                (*(UPointSetComponent **)&(this->GeometrySet).CurveIDToIndex.field_0x20,iVar12,
                 (FColor *)&(this->CameraState).field_0x5c);
      *(undefined4 *)&(this->CameraState).field_0x58 = 0xffffffff;
    }
    UPointSetComponent::Clear
              (*(UPointSetComponent **)&(this->GeometrySet).CurveIDToIndex.field_0x30);
    ULineSetComponent::Clear(*(ULineSetComponent **)&(this->GeometrySet).CurveIDToIndex.field_0x38);
    local_238 = *(undefined4 *)((longlong)&(this->DrawnControlPoints).field0_0x0 + 4);
    local_250._s_0.X = local_c8.NearestGeoPoint.field0_0x0._s_0.X;
    local_250._s_0.Y = local_c8.NearestGeoPoint.field0_0x0._s_0.Y;
    local_234 = *(undefined4 *)((longlong)&(this->PreviewGeometryActor).field0_0x0 + 4);
    local_250._s_0.Z = local_c8.NearestGeoPoint.field0_0x0._s_0.Z;
    local_230 = *(undefined4 *)&(this->DrawnControlPoints).field0_0x0;
    UPointSetComponent::InsertPoint
              (*(UPointSetComponent **)&(this->GeometrySet).CurveIDToIndex.field_0x30,0,
               (FRenderablePoint *)&local_250._s_0);
LAB_14cb28477:
    bVar9 = true;
  }
  else {
LAB_14cb2804b:
    if ((this->ControlPoints).PointIDToSequencePosition.field_0x19 != '\0') goto LAB_14cb281fe;
    if (*(char *)((longlong)&(this->DrawPlane).Origin.field0_0x0 + 8) == '\0') {
LAB_14cb28129:
      local_128[0] = (this->CameraState).Orientation.Y;
      local_100 = 0;
      if (local_128[0] != 0.0) {
        pdVar4 = (double *)(this->CameraState).DPIScale;
        pdVar15 = &(this->CameraState).Orientation.W;
        if (pdVar4 != (double *)0x0) {
          pdVar15 = pdVar4;
        }
        (**(code **)*pdVar15)(pdVar15,local_118);
      }
      local_f8._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
      local_f8._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
      local_f8._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
      dStack_e0 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
      local_d8 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
      dStack_d0 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
      bVar9 = UE::Geometry::FGeometrySet3::FindNearestPointToRay
                        ((FGeometrySet3 *)&(this->SnapEngine).PointHistory,
                         (TRay<double> *)&local_f8._s_0,&local_c8,
                         (TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                          *)local_128);
      if (bVar9) {
        if (local_c8.ID != *(int *)&(this->CameraState).field_0x58) {
          ClearHover((UCurveControlPointsMechanic *)&this[-1].SelectedPointStartPositions);
          this_00 = *(UPointSetComponent **)&(this->GeometrySet).CurveIDToIndex.field_0x20;
          *(int *)&(this->CameraState).field_0x58 = local_c8.ID;
          pFVar13 = UPointSetComponent::GetPoint(this_00,local_c8.ID);
          *(FColor_u_0 *)&(this->CameraState).field_0x5c = (pFVar13->Color).field0_0x0;
          UPointSetComponent::SetPointColor
                    (*(UPointSetComponent **)&(this->GeometrySet).CurveIDToIndex.field_0x20,
                     *(int *)&(this->CameraState).field_0x58,(FColor *)&this->DrawnControlSegments);
        }
        goto LAB_14cb28477;
      }
    }
    else if (*(int *)&(this->GeometrySetToleranceTest).field_0x8 == 1) {
      if (*(int *)&(this->GeometrySetToleranceTest).field_0x8 < 1) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          uVar10 = (*pcVar5)();
          return (bool)uVar10;
        }
      }
      iVar12 = **(int **)&this->GeometrySetToleranceTest;
      iVar11 = FOrderedPoints::First((FOrderedPoints *)&(this->OnPointsChanged).field_0x8);
      if (iVar12 != iVar11) {
        if (*(int *)&(this->GeometrySetToleranceTest).field_0x8 < 1) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar5 = (code *)swi(3);
            uVar10 = (*pcVar5)();
            return (bool)uVar10;
          }
        }
        iVar12 = **(int **)&this->GeometrySetToleranceTest;
        iVar11 = FOrderedPoints::Last((FOrderedPoints *)&(this->OnPointsChanged).field_0x8);
        if (iVar12 != iVar11) goto LAB_14cb2811c;
      }
LAB_14cb281fe:
      local_200._s_0.X = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
      local_200._s_0.Y = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
      local_200._s_0.Z = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
      local_1e8._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
      local_1e8._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
      local_1e8._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
      bVar9 = UE::Geometry::TFrame3<double>::RayPlaneIntersection
                        ((TFrame3<double> *)&this->PreviewSegment,(TVector<double> *)&local_1e8._s_0
                         ,(TVector<double> *)&local_200._s_0,2,(TVector<double> *)&local_268._s_0);
      if (bVar9) {
        uVar16 = *(undefined4 *)((longlong)&(this->DrawnControlPoints).field0_0x0 + 4);
        if (((this->ControlPoints).PointIDToSequencePosition.field_0x19 != '\0') ||
           (*(char *)((longlong)&(this->DrawPlane).Origin.field0_0x0 + 1) !=
            (this->ControlPoints).PointIDToSequencePosition.field_0x25)) {
          UE::Geometry::FPointPlanarSnapSolver::UpdateSnappedPoint
                    ((FPointPlanarSnapSolver *)
                     &(this->ControlPoints).PointIDToSequencePosition.field_0x30,
                     (TVector<double> *)&local_268._s_0);
          if ((char)(this->SnapEngine)._padding_ != '\0') {
            iVar12 = *(int *)&(this->ControlPoints).Vertices.field_0x8;
            plVar1 = &(this->SnapEngine)._padding_;
            if (((iVar12 < *(int *)&(this->ControlPoints).PointIDToSequencePosition.field_0x1c) ||
                ((int)*plVar1 != *(int *)(this->SnapEngine).IgnoreTargets.Hash.InlineData)) &&
               ((iVar12 < *(int *)&(this->ControlPoints).PointIDToSequencePosition.field_0x20 ||
                ((int)*plVar1 != (this->SnapEngine).IgnoreTargets.Hash._padding_)))) {
              bVar9 = false;
            }
            else {
              uVar16 = *(undefined4 *)((longlong)&(this->PreviewPoint).field0_0x0 + 4);
              bVar9 = true;
            }
            if ((*(char *)((longlong)&(this->DrawPlane).Origin.field0_0x0 + 1) !=
                 (this->ControlPoints).PointIDToSequencePosition.field_0x25) || (bVar9)) {
              local_268._s_0.X = (double)(this->SnapEngine)._padding_;
              local_268._s_0.Y = (double)(this->SnapEngine)._padding_;
              local_268._s_0.Z = (double)(this->SnapEngine)._padding_;
            }
            else {
              (**(code **)(*(longlong *)&(this->ControlPoints).PointIDToSequencePosition.field_0x30
                          + 0x60))(&(this->ControlPoints).PointIDToSequencePosition.field_0x30);
            }
          }
        }
        ClearHover((UCurveControlPointsMechanic *)&this[-1].SelectedPointStartPositions);
        local_210 = *(undefined4 *)((longlong)&(this->DrawnControlPoints).field0_0x0 + 4);
        local_228._s_0.X = local_268._s_0.X;
        local_228._s_0.Y = local_268._s_0.Y;
        local_20c = *(undefined4 *)((longlong)&(this->PreviewGeometryActor).field0_0x0 + 4);
        local_208 = *(undefined4 *)&(this->DrawnControlPoints).field0_0x0;
        local_228._s_0.Z = local_268._s_0.Z;
        UPointSetComponent::InsertPoint
                  (*(UPointSetComponent **)&(this->GeometrySet).CurveIDToIndex.field_0x30,0,
                   (FRenderablePoint *)&local_228._s_0);
        if (0 < *(int *)&(this->ControlPoints).Vertices.field_0x8) {
          if ((this->ControlPoints).PointIDToSequencePosition.field_0x19 == '\0') {
            if (*(int *)&(this->GeometrySetToleranceTest).field_0x8 < 1) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar5 = (code *)swi(3);
                uVar10 = (*pcVar5)();
                return (bool)uVar10;
              }
            }
            iVar12 = **(int **)&this->GeometrySetToleranceTest;
          }
          else {
            iVar12 = FOrderedPoints::Last((FOrderedPoints *)&(this->OnPointsChanged).field_0x8);
          }
          uVar8 = local_268._s_0.Z;
          uVar7 = local_268._s_0.Y;
          uVar6 = local_268._s_0.X;
          uVar2 = *(undefined4 *)&(this->DrawnControlPoints).field0_0x0;
          uVar3 = *(undefined4 *)&(this->PreviewGeometryActor).field0_0x0;
          pTVar14 = FOrderedPoints::GetPointCoordinates
                              ((FOrderedPoints *)&(this->OnPointsChanged).field_0x8,local_78,iVar12)
          ;
          local_1c8._s_0.X = (pTVar14->field0_0x0)._s_0.X;
          local_1c8._s_0.Y = (pTVar14->field0_0x0)._s_0.Y;
          local_1c8._s_0.Z = (pTVar14->field0_0x0)._s_0.Z;
          local_1b0 = (double)uVar6;
          dStack_1a8 = (double)uVar7;
          local_1a0 = (double)uVar8;
          local_198 = uVar16;
          local_194 = uVar3;
          local_190 = uVar2;
          ULineSetComponent::InsertLine
                    (*(ULineSetComponent **)&(this->GeometrySet).CurveIDToIndex.field_0x38,0,
                     (FRenderableLine *)&local_1c8._s_0);
        }
        goto LAB_14cb28477;
      }
    }
    else {
LAB_14cb2811c:
      if (*(char *)((longlong)&(this->DrawPlane).Origin.field0_0x0 + 8) == '\0') goto LAB_14cb28129;
    }
    bVar9 = false;
  }
  return bVar9;
}

// OnUpdateModifierState @ 14cb28710

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
UCurveControlPointsMechanic::OnUpdateModifierState
          (UCurveControlPointsMechanic *this,int param_1,bool param_2)

{
  longlong *plVar1;
  undefined4 in_register_00000014;
  
  if (param_1 == *(int *)((longlong)&(this->DrawPlane).Origin.field0_0x0 + 0xc)) {
    *(bool *)((longlong)&(this->DrawPlane).Origin.field0_0x0 + 8) = param_2;
    *(bool *)((longlong)&(this->DrawPlane).Origin.field0_0x0 + 9) = param_2;
    return;
  }
  if (param_1 == *(int *)((longlong)&(this->DrawPlane).Origin.field0_0x0 + 0x14)) {
    *(bool *)((longlong)&(this->DrawPlane).Origin.field0_0x0 + 0x10) = param_2;
    plVar1 = *(longlong **)((longlong)&(this->DrawPlane).Rotation.field0_0x0 + 8);
    if (plVar1 != (longlong *)0x0) {
      if ((0 < *(int *)&(this->GeometrySetToleranceTest).field_0x10) && (!param_2)) {
                    /* WARNING: Could not recover jumptable at 0x00014cb28758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x360))
                  (plVar1,CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),1));
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00014cb28764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x360))(plVar1,0);
      return;
    }
  }
  return;
}

// OnUpdateModifierState`adjustor{8}' @ 14cb28774

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* [thunk]:public: virtual void __cdecl
   UCurveControlPointsMechanic::OnUpdateModifierState`adjustor{8}' (int,bool) __ptr64 */

void __thiscall
UCurveControlPointsMechanic::OnUpdateModifierState_adjustor_8__
          (UCurveControlPointsMechanic *this,int param_1,bool param_2)

{
  OnUpdateModifierState((UCurveControlPointsMechanic *)&this[-1].field_0x678,param_1,param_2);
  return;
}

// RemoveSnapLine @ 14cb2edf0

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
UCurveControlPointsMechanic::RemoveSnapLine(UCurveControlPointsMechanic *this,int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb2ee04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->SnapEngine)._padding_ + 0x28))
            (&this->SnapEngine,param_1 + this->LineSnapIDMin);
  return;
}

// Render @ 14cb2ff90

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
UCurveControlPointsMechanic::Render
          (UCurveControlPointsMechanic *this,IToolsContextRenderAPI *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auVar4 [12];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  UInteractiveTool *pUVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 in_XMM1_Qb;
  undefined1 auVar12 [16];
  float fVar13;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a8 [160];
  
  pUVar9 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  plVar10 = (longlong *)(**(code **)(pUVar9->_padding_ + 0x2d8))(pUVar9);
  plVar10 = (longlong *)(**(code **)(*plVar10 + 0x398))(plVar10);
  (**(code **)(*plVar10 + 0x18))(plVar10,&this->CameraState);
  if ((this->bSnappingEnabled != false) && ((char)(this->SnapEngine)._padding_ != '\0')) {
    plVar10 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1);
    lVar11 = (**(code **)((longlong)*param_1 + 0x18))(param_1,local_a8);
    dVar5 = __real_40c3878000000000;
    if ((char)(this->SnapEngine)._padding_ != '\0') {
      if (*(char *)((longlong)&(this->SnapEngine)._padding_ + 1) == '\0') {
        if ((this->SnapEngine).bActiveSnapIsIntersection != false) {
          local_c8 = (double)(this->SnapEngine)._padding_;
          dVar6 = (double)(this->SnapEngine)._padding_;
          local_d8 = (double)(this->SnapEngine)._padding_;
          local_d0 = (double)(this->SnapEngine)._padding_;
          uVar1 = (this->SnapEngine)._padding_;
          uVar2 = (this->SnapEngine)._padding_;
          local_e8 = FLinearColor::sRGBToLinearTable[(this->SnapLineColor).field0_0x0._s_0.R];
          fVar13 = *(float *)(lVar11 + 0x40) * __real_3bb60b61;
          auVar4._4_8_ = in_XMM1_Qb;
          auVar4._0_4_ = (int)((ulonglong)uVar1 >> 0x20);
          auVar12._0_8_ = auVar4._0_8_ << 0x20;
          auVar12._8_4_ = (int)uVar2;
          auVar12._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
          local_e4 = FLinearColor::sRGBToLinearTable[(this->SnapLineColor).field0_0x0._s_0.G];
          local_e0 = FLinearColor::sRGBToLinearTable[(this->SnapLineColor).field0_0x0._s_0.B];
          local_dc = (float)(this->SnapLineColor).field0_0x0._s_0.A * __real_3b808081;
          local_c0 = dVar6 * __real_40c3878000000000 + local_d8;
          local_d8 = local_d8 - dVar6 * __real_40c3878000000000;
          local_b8 = (double)uVar1 * __real_40c3878000000000 + local_d0;
          local_d0 = local_d0 - (double)uVar1 * __real_40c3878000000000;
          local_b0 = auVar12._8_8_ * __real_40c3878000000000 + local_c8;
          local_c8 = local_c8 - auVar12._8_8_ * __real_40c3878000000000;
          (**(code **)(*plVar10 + 0x30))(plVar10,&local_d8,&local_c0,&local_e8,1,fVar13,0,1);
          local_c8 = (this->SnapEngine).IntersectionSecondLine.Origin.field0_0x0._s_0.Z;
          dVar6 = (this->SnapEngine).IntersectionSecondLine.Direction.field0_0x0._s_0.X;
          local_d8 = (this->SnapEngine).IntersectionSecondLine.Origin.field0_0x0._s_0.X;
          local_d0 = (this->SnapEngine).IntersectionSecondLine.Origin.field0_0x0._s_0.Y;
          local_e8 = FLinearColor::sRGBToLinearTable[(this->SnapLineColor).field0_0x0._s_0.R];
          dVar7 = (this->SnapEngine).IntersectionSecondLine.Direction.field0_0x0._s_0.Y;
          dVar8 = (this->SnapEngine).IntersectionSecondLine.Direction.field0_0x0._s_0.Z;
          local_e4 = FLinearColor::sRGBToLinearTable[(this->SnapLineColor).field0_0x0._s_0.G];
          local_e0 = FLinearColor::sRGBToLinearTable[(this->SnapLineColor).field0_0x0._s_0.B];
          local_c0 = dVar6 * dVar5 + local_d8;
          local_dc = (float)(this->SnapLineColor).field0_0x0._s_0.A * __real_3b808081;
          local_b8 = dVar7 * dVar5 + local_d0;
          local_d8 = local_d8 - dVar6 * dVar5;
          local_d0 = local_d0 - dVar7 * dVar5;
          local_b0 = dVar8 * dVar5 + local_c8;
          local_c8 = local_c8 - dVar8 * dVar5;
          (**(code **)(*plVar10 + 0x30))(plVar10,&local_d8,&local_c0,&local_e8,1,fVar13,0,1);
        }
      }
      else {
        local_b0 = (double)(this->SnapEngine)._padding_;
        dVar5 = (double)(this->SnapEngine)._padding_;
        local_c0 = (double)(this->SnapEngine)._padding_;
        local_b8 = (double)(this->SnapEngine)._padding_;
        dVar6 = (double)(this->SnapEngine)._padding_;
        dVar7 = (double)(this->SnapEngine)._padding_;
        local_e8 = FLinearColor::sRGBToLinearTable[(this->SnapLineColor).field0_0x0._s_0.R];
        local_e4 = FLinearColor::sRGBToLinearTable[(this->SnapLineColor).field0_0x0._s_0.G];
        local_e0 = FLinearColor::sRGBToLinearTable[(this->SnapLineColor).field0_0x0._s_0.B];
        local_d8 = dVar5 * __real_40c3878000000000 + local_c0;
        local_dc = (float)(this->SnapLineColor).field0_0x0._s_0.A * __real_3b808081;
        local_c0 = local_c0 - dVar5 * __real_40c3878000000000;
        local_d0 = dVar6 * __real_40c3878000000000 + local_b8;
        local_b8 = local_b8 - dVar6 * __real_40c3878000000000;
        local_c8 = dVar7 * __real_40c3878000000000 + local_b0;
        local_b0 = local_b0 - dVar7 * __real_40c3878000000000;
        (**(code **)(*plVar10 + 0x30))
                  (plVar10,&local_c0,&local_d8,&local_e8,1,
                   *(float *)(lVar11 + 0x40) * __real_3bb60b61,0,1);
      }
    }
  }
  if (((char)(this->SnapEngine)._padding_ == '\0') ||
     ((iVar3 = (int)(this->SnapEngine)._padding_, iVar3 != this->FirstPointSnapID &&
      (iVar3 != this->LastPointSnapID)))) {
    lVar11 = 0x518;
  }
  else {
    lVar11 = 0x53c;
  }
  ULineSetComponent::SetAllLinesColor
            ((this->DrawnControlSegments).field0_0x0.DebugPtr,(FColor *)(&this->field_0x0 + lVar11))
  ;
  return;
}

// SelectPoint @ 14cb331a0

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
UCurveControlPointsMechanic::SelectPoint(UCurveControlPointsMechanic *this,int param_1)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int local_res10 [6];
  
  pTVar2 = &this->SelectedPointIDs;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_res10[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar3 + (longlong)(this->SelectedPointIDs).ArrayMax * 4)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->SelectedPointIDs).ArrayNum;
  piVar1 = &(this->SelectedPointIDs).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->SelectedPointIDs).ArrayNum = iVar6 + 1;
  *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 4) = local_res10[0];
  UPointSetComponent::SetPointColor
            ((this->DrawnControlPoints).field0_0x0.DebugPtr,local_res10[0],&this->SelectedColor);
  UpdateSnapTargetsForHover(this);
  return;
}

// SetInteractiveInitialization @ 14cb36790

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
UCurveControlPointsMechanic::SetInteractiveInitialization
          (UCurveControlPointsMechanic *this,bool param_1)

{
  FOrderedPoints *this_00;
  int iVar1;
  ULineSetComponent *this_01;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TVector<double> *pTVar5;
  TVector<double> local_38;
  
  if (this->bInteractiveInitializationMode != param_1) {
    this->bInteractiveInitializationMode = param_1;
    (this->CurrentSegmentsColor).field0_0x0 =
         (&this->InitializationCurveColor)[(ulonglong)param_1 ^ 1].field0_0x0;
    (this->CurrentPointsColor).field0_0x0 =
         (&this->InitializationCurveColor)[(ulonglong)param_1 ^ 1].field0_0x0;
    UPointSetComponent::SetAllPointsColor
              ((this->DrawnControlPoints).field0_0x0.DebugPtr,&this->CurrentPointsColor);
    ULineSetComponent::SetAllLinesColor
              ((this->DrawnControlSegments).field0_0x0.DebugPtr,&this->CurrentSegmentsColor);
    if (param_1) {
      ChangeSelection(this,-1,false);
      ClearHover(this);
      this_00 = &this->ControlPoints;
      if (this->bIsLoop != false) {
        if (1 < (this->ControlPoints).Sequence.ArrayNum) {
          iVar3 = FOrderedPoints::Last(this_00);
          UE::Geometry::FGeometrySet3::RemoveCurve(&this->GeometrySet,iVar3);
          this_01 = (this->DrawnControlSegments).field0_0x0.DebugPtr;
          iVar3 = FOrderedPoints::Last(this_00);
          ULineSetComponent::RemoveLine(this_01,iVar3);
        }
        this->bIsLoop = false;
      }
      if (0 < (this->ControlPoints).Sequence.ArrayNum) {
        iVar3 = this->EndpointSnapPriority;
        iVar1 = this->FirstPointSnapID;
        pcVar2 = *(code **)((this->SnapEngine)._padding_ + 0x10);
        iVar4 = FOrderedPoints::First(this_00);
        pTVar5 = FOrderedPoints::GetPointCoordinates(this_00,&local_38,iVar4);
        (*pcVar2)(&this->SnapEngine,pTVar5,iVar1,iVar3);
        iVar3 = this->EndpointSnapPriority;
        iVar1 = this->LastPointSnapID;
        pcVar2 = *(code **)((this->SnapEngine)._padding_ + 0x10);
        iVar4 = FOrderedPoints::Last(this_00);
        pTVar5 = FOrderedPoints::GetPointCoordinates(this_00,&local_38,iVar4);
        (*pcVar2)(&this->SnapEngine,pTVar5,iVar1,iVar3);
      }
      UE::Geometry::FPointPlanarSnapSolver::RegenerateTargetLinesAround
                (&this->SnapEngine,(this->ControlPoints).Sequence.ArrayNum,false,true);
      return;
    }
    (**(code **)((this->SnapEngine)._padding_ + 0x18))(&this->SnapEngine,this->FirstPointSnapID);
    (**(code **)((this->SnapEngine)._padding_ + 0x18))(&this->SnapEngine,this->LastPointSnapID);
  }
  return;
}

// SetIsLoop @ 14cb36a70

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
UCurveControlPointsMechanic::SetIsLoop(UCurveControlPointsMechanic *this,bool param_1)

{
  FOrderedPoints *this_00;
  float fVar1;
  float fVar2;
  ULineSetComponent *pUVar3;
  int iVar4;
  TVector<double> *pTVar5;
  TVector<double> *pTVar6;
  TPolyline<double,3> local_a8;
  TVector<double>_u_0 local_98;
  double local_80;
  double dStack_78;
  double local_70;
  FColor_u_0 local_68;
  float local_64;
  float local_60;
  TVector<double> local_58;
  TVector<double> local_40 [2];
  
  if (param_1 != this->bIsLoop) {
    this_00 = &this->ControlPoints;
    if (1 < (this->ControlPoints).Sequence.ArrayNum) {
      if (param_1) {
        iVar4 = FOrderedPoints::First(this_00);
        pTVar5 = FOrderedPoints::GetPointCoordinates(this_00,&local_58,iVar4);
        iVar4 = FOrderedPoints::Last(this_00);
        pTVar6 = FOrderedPoints::GetPointCoordinates(this_00,local_40,iVar4);
        UE::Geometry::TPolyline<double,3>::TPolyline<double,3>(&local_a8,pTVar6,pTVar5);
        iVar4 = FOrderedPoints::Last(this_00);
        UE::Geometry::FGeometrySet3::AddCurve(&this->GeometrySet,iVar4,&local_a8);
        fVar1 = this->DepthBias;
        fVar2 = this->SegmentsThickness;
        iVar4 = FOrderedPoints::First(this_00);
        pTVar5 = FOrderedPoints::GetPointCoordinates(this_00,local_40,iVar4);
        iVar4 = FOrderedPoints::Last(this_00);
        pTVar6 = FOrderedPoints::GetPointCoordinates(this_00,&local_58,iVar4);
        local_98._s_0.X = (pTVar6->field0_0x0)._s_0.X;
        local_98._s_0.Y = (pTVar6->field0_0x0)._s_0.Y;
        local_98._s_0.Z = (pTVar6->field0_0x0)._s_0.Z;
        local_68 = (this->CurrentSegmentsColor).field0_0x0;
        local_80 = (pTVar5->field0_0x0)._s_0.X;
        dStack_78 = (pTVar5->field0_0x0)._s_0.Y;
        local_70 = (pTVar5->field0_0x0)._s_0.Z;
        pUVar3 = (this->DrawnControlSegments).field0_0x0.DebugPtr;
        local_64 = fVar2;
        local_60 = fVar1;
        iVar4 = FOrderedPoints::Last(this_00);
        ULineSetComponent::InsertLine(pUVar3,iVar4,(FRenderableLine *)&local_98._s_0);
        if (local_a8.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Vertices.AllocatorInstance.Data);
        }
      }
      else {
        iVar4 = FOrderedPoints::Last(this_00);
        UE::Geometry::FGeometrySet3::RemoveCurve(&this->GeometrySet,iVar4);
        pUVar3 = (this->DrawnControlSegments).field0_0x0.DebugPtr;
        iVar4 = FOrderedPoints::Last(this_00);
        ULineSetComponent::RemoveLine(pUVar3,iVar4);
      }
    }
    this->bIsLoop = param_1;
  }
  return;
}

// SetPlane @ 14cb374c0

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
UCurveControlPointsMechanic::SetPlane(UCurveControlPointsMechanic *this,TFrame3<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (param_1->Origin).field0_0x0._s_0.Y;
  (this->DrawPlane).Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  (this->DrawPlane).Origin.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.X;
  (this->DrawPlane).Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  (this->DrawPlane).Rotation.field0_0x0._s_0.X = dVar1;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.Z;
  (this->DrawPlane).Rotation.field0_0x0._s_0.Y = (param_1->Rotation).field0_0x0._s_0.Y;
  (this->DrawPlane).Rotation.field0_0x0._s_0.Z = dVar1;
  (this->DrawPlane).Rotation.field0_0x0._s_0.W = (param_1->Rotation).field0_0x0._s_0.W;
  UpdateGizmoLocation(this);
  dVar1 = (this->DrawPlane).Origin.field0_0x0._s_0.Y;
  dVar2 = (this->DrawPlane).Origin.field0_0x0._s_0.Z;
  dVar3 = (this->DrawPlane).Rotation.field0_0x0._s_0.X;
  (this->SnapEngine).Plane.Origin.field0_0x0._s_0.X = (this->DrawPlane).Origin.field0_0x0._s_0.X;
  (this->SnapEngine).Plane.Origin.field0_0x0._s_0.Y = dVar1;
  dVar4 = (this->DrawPlane).Rotation.field0_0x0._s_0.Y;
  dVar5 = (this->DrawPlane).Rotation.field0_0x0._s_0.Z;
  (this->SnapEngine).Plane.Origin.field0_0x0._s_0.Z = dVar2;
  (this->SnapEngine).Plane.Rotation.field0_0x0._s_0.X = dVar3;
  dVar1 = (this->DrawPlane).Rotation.field0_0x0._s_0.W;
  (this->SnapEngine).Plane.Rotation.field0_0x0._s_0.Y = dVar4;
  (this->SnapEngine).Plane.Rotation.field0_0x0._s_0.Z = dVar5;
  (this->SnapEngine).Plane.Rotation.field0_0x0._s_0.W = dVar1;
  return;
}

// SetSnappingEnabled @ 14cb37de0

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
UCurveControlPointsMechanic::SetSnappingEnabled(UCurveControlPointsMechanic *this,bool param_1)

{
  this->bSnappingEnabled = param_1;
  return;
}

// SetWorld @ 14cb38920

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
UCurveControlPointsMechanic::SetWorld(UCurveControlPointsMechanic *this,UWorld *param_1)

{
  int iVar1;
  UPointSetComponent *pUVar2;
  ULineSetComponent *pUVar3;
  UClass *pUVar4;
  APreviewGeometryActor *pAVar5;
  FString *pFVar6;
  longlong *plVar7;
  APreviewGeometryActor *pAVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  undefined1 auStackY_f8 [32];
  FString local_c8;
  TRotator<double> local_b8;
  FString local_a0;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pAVar8 = (this->PreviewGeometryActor).field0_0x0.DebugPtr;
  if (pAVar8 != (APreviewGeometryActor *)0x0) {
    AActor::Destroy((AActor *)pAVar8,false,true);
  }
  local_b8.Roll = 0.0;
  local_b8.Pitch = 0.0;
  local_b8.Yaw = 0.0;
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
  pUVar4 = APreviewGeometryActor::StaticClass();
  pAVar5 = (APreviewGeometryActor *)
           UWorld::SpawnActor(param_1,pUVar4,&UE::Math::TVector<double>::ZeroVector,&local_b8,
                              (FActorSpawnParameters *)local_88);
  pAVar8 = (APreviewGeometryActor *)0x0;
  if (pAVar5 != (APreviewGeometryActor *)0x0) {
    pUVar4 = APreviewGeometryActor::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&pAVar5->field_0x10 + 0x38) < iVar1) ||
       (pAVar8 = pAVar5,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&pAVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar4->_padding_)) {
      pFVar6 = GetTypeName<APreviewGeometryActor>(&local_c8);
      pwVar10 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar9 = L"";
      }
      else {
        pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<AActor>(&local_a0,(AActor *)pAVar5);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar10,pwVar9);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar8 != (APreviewGeometryActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar8);
  }
  (this->PreviewGeometryActor).field0_0x0.DebugPtr = pAVar8;
  pUVar2 = (this->DrawnControlPoints).field0_0x0.DebugPtr;
  (**(code **)(pUVar2->_padding_ + 0x170))(pUVar2,0,pAVar8,0);
  AActor::SetRootComponent
            ((AActor *)(this->PreviewGeometryActor).field0_0x0.DebugPtr,
             (USceneComponent *)(this->DrawnControlPoints).field0_0x0.DebugPtr);
  pUVar2 = (this->DrawnControlPoints).field0_0x0.DebugPtr;
  if ((pUVar2->_padding_ & 1) == 0) {
    UActorComponent::RegisterComponent((UActorComponent *)pUVar2);
  }
  else {
    UActorComponent::ReregisterComponent((UActorComponent *)pUVar2);
  }
  pUVar3 = (this->DrawnControlSegments).field0_0x0.DebugPtr;
  (**(code **)(pUVar3->_padding_ + 0x170))
            (pUVar3,0,(this->PreviewGeometryActor).field0_0x0.DebugPtr,0);
  pUVar3 = (this->DrawnControlSegments).field0_0x0.DebugPtr;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (**(code **)(pUVar3->_padding_ + 0x508))
            (pUVar3,(this->DrawnControlPoints).field0_0x0.DebugPtr,
             &FAttachmentTransformRules::KeepWorldTransform,0);
  pUVar3 = (this->DrawnControlSegments).field0_0x0.DebugPtr;
  if ((pUVar3->_padding_ & 1) == 0) {
    UActorComponent::RegisterComponent((UActorComponent *)pUVar3);
  }
  else {
    UActorComponent::ReregisterComponent((UActorComponent *)pUVar3);
  }
  pUVar2 = (this->PreviewPoint).field0_0x0.DebugPtr;
  (**(code **)(pUVar2->_padding_ + 0x170))
            (pUVar2,0,(this->PreviewGeometryActor).field0_0x0.DebugPtr,0);
  pUVar2 = (this->PreviewPoint).field0_0x0.DebugPtr;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (**(code **)(pUVar2->_padding_ + 0x508))
            (pUVar2,(this->DrawnControlPoints).field0_0x0.DebugPtr,
             &FAttachmentTransformRules::KeepWorldTransform,0);
  pUVar2 = (this->PreviewPoint).field0_0x0.DebugPtr;
  if ((pUVar2->_padding_ & 1) == 0) {
    UActorComponent::RegisterComponent((UActorComponent *)pUVar2);
  }
  else {
    UActorComponent::ReregisterComponent((UActorComponent *)pUVar2);
  }
  pUVar3 = (this->PreviewSegment).field0_0x0.DebugPtr;
  (**(code **)(pUVar3->_padding_ + 0x170))
            (pUVar3,0,(this->PreviewGeometryActor).field0_0x0.DebugPtr,0);
  pUVar3 = (this->PreviewSegment).field0_0x0.DebugPtr;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (**(code **)(pUVar3->_padding_ + 0x508))
            (pUVar3,(this->DrawnControlPoints).field0_0x0.DebugPtr,
             &FAttachmentTransformRules::KeepWorldTransform,0);
  pUVar3 = (this->PreviewSegment).field0_0x0.DebugPtr;
  if ((pUVar3->_padding_ & 1) == 0) {
    UActorComponent::RegisterComponent((UActorComponent *)pUVar3);
  }
  else {
    UActorComponent::ReregisterComponent((UActorComponent *)pUVar3);
  }
  if (local_88._64_8_ != 0) {
    plVar7 = (longlong *)(local_88 + 0x50);
    if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_88._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// Setup @ 14cb39ef0

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
UCurveControlPointsMechanic::Setup(UCurveControlPointsMechanic *this,UInteractiveTool *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  double dVar5;
  FColor_u_0 FVar6;
  TObjectPtr<USingleClickInputBehavior>_u_0 TVar7;
  FColor FVar8;
  UObject *pUVar9;
  USingleClickInputBehavior *pUVar10;
  UMouseHoverBehavior *pUVar11;
  UPointSetComponent *pUVar12;
  UInteractiveTool *pUVar13;
  UInteractiveToolManager *pUVar14;
  UMaterialInterface *pUVar15;
  ULineSetComponent *pUVar16;
  UInteractiveGizmoManager *pUVar17;
  UTransformProxy *pUVar18;
  UCombinedTransformGizmo *pUVar19;
  longlong lVar20;
  FColor_u_0 FVar21;
  TObjectPtr<UMouseHoverBehavior>_u_0 TVar22;
  int iVar23;
  undefined1 *puVar24;
  bool bVar25;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [24];
  ulonglong uStack_80;
  code *local_78;
  longlong lStack_70;
  undefined1 local_68 [16];
  TObjectPtr<USingleClickInputBehavior>_u_0 local_58;
  TObjectPtr<UMouseHoverBehavior>_u_0 TStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  UInteractionMechanic::Setup((UInteractionMechanic *)this,param_1);
  pUVar9 = GetTransientPackageAsObject();
  pUVar10 = NewObject<USingleClickInputBehavior>(pUVar9);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (USingleClickInputBehavior *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->ClickBehavior).field0_0x0.DebugPtr = pUVar10;
  puVar24 = &this->field_0x30;
  if (this == (UCurveControlPointsMechanic *)0x0) {
    puVar24 = (undefined1 *)0x0;
  }
  (**(code **)(pUVar10->_padding_ + 0x378))(pUVar10,puVar24);
  TStack_50.DebugPtr = (UMouseHoverBehavior *)0x0;
  local_68._0_8_ =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._8_8_ = FInputDeviceState::IsShiftKeyDown;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
             ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&((this->ClickBehavior).field0_0x0.DebugPtr)->Modifiers,this->ShiftModifierId,
             (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)&local_78);
  if (local_78 != (code *)0x0) {
    TVar22.DebugPtr = (UMouseHoverBehavior *)local_68;
    if (TStack_50.DebugPtr != (UMouseHoverBehavior *)0x0) {
      TVar22 = TStack_50;
    }
    (**(code **)(*(longlong *)TVar22.DebugPtr + 0x10))();
  }
  TStack_50.DebugPtr = (UMouseHoverBehavior *)0x0;
  local_68._0_8_ =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._8_8_ = FInputDeviceState::IsCtrlKeyDown;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
             ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&((this->ClickBehavior).field0_0x0.DebugPtr)->Modifiers,this->CtrlModifierId,
             (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)&local_78);
  if (local_78 != (code *)0x0) {
    TVar22.DebugPtr = (UMouseHoverBehavior *)local_68;
    if (TStack_50.DebugPtr != (UMouseHoverBehavior *)0x0) {
      TVar22 = TStack_50;
    }
    (**(code **)(*(longlong *)TVar22.DebugPtr + 0x10))();
  }
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  (**(code **)(*(longlong *)pUVar9 + 0x2f8))(pUVar9,(this->ClickBehavior).field0_0x0.DebugPtr,0);
  pUVar9 = GetTransientPackageAsObject();
  pUVar11 = NewObject<UMouseHoverBehavior>(pUVar9);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 != (UMouseHoverBehavior *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->HoverBehavior).field0_0x0.DebugPtr = pUVar11;
  (**(code **)(*(longlong *)pUVar11 + 800))(pUVar11,&this->field_0x38);
  TStack_50.DebugPtr = (UMouseHoverBehavior *)0x0;
  local_68._0_8_ =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._8_8_ = FInputDeviceState::IsShiftKeyDown;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
             ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&((this->HoverBehavior).field0_0x0.DebugPtr)->Modifiers,this->ShiftModifierId,
             (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)&local_78);
  if (local_78 != (code *)0x0) {
    TVar22.DebugPtr = (UMouseHoverBehavior *)local_68;
    if (TStack_50.DebugPtr != (UMouseHoverBehavior *)0x0) {
      TVar22 = TStack_50;
    }
    (**(code **)(*(longlong *)TVar22.DebugPtr + 0x10))();
  }
  TStack_50.DebugPtr = (UMouseHoverBehavior *)0x0;
  local_68._0_8_ =
       &
       ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._8_8_ = FInputDeviceState::IsCtrlKeyDown;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
             ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&((this->HoverBehavior).field0_0x0.DebugPtr)->Modifiers,this->CtrlModifierId,
             (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)&local_78);
  if (local_78 != (code *)0x0) {
    TVar22.DebugPtr = (UMouseHoverBehavior *)local_68;
    if (TStack_50.DebugPtr != (UMouseHoverBehavior *)0x0) {
      TVar22 = TStack_50;
    }
    (**(code **)(*(longlong *)TVar22.DebugPtr + 0x10))();
  }
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  (**(code **)(*(longlong *)pUVar9 + 0x2f8))(pUVar9,(this->HoverBehavior).field0_0x0.DebugPtr,0);
  pUVar9 = GetTransientPackageAsObject();
  pUVar12 = NewObject<UPointSetComponent>(pUVar9);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UPointSetComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  (this->DrawnControlPoints).field0_0x0.DebugPtr = pUVar12;
  pUVar13 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar14 = (UInteractiveToolManager *)(**(code **)(pUVar13->_padding_ + 0x2d8))(pUVar13);
  pUVar15 = ToolSetupUtil::GetDefaultPointComponentMaterial(pUVar14,false);
  UPointSetComponent::SetPointMaterial(pUVar12,pUVar15);
  pUVar9 = GetTransientPackageAsObject();
  pUVar16 = NewObject<ULineSetComponent>(pUVar9);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (ULineSetComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  (this->DrawnControlSegments).field0_0x0.DebugPtr = pUVar16;
  pUVar13 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar14 = (UInteractiveToolManager *)(**(code **)(pUVar13->_padding_ + 0x2d8))(pUVar13);
  pUVar15 = ToolSetupUtil::GetDefaultLineComponentMaterial(pUVar14,false);
  ULineSetComponent::SetLineMaterial(pUVar16,pUVar15);
  pUVar9 = GetTransientPackageAsObject();
  pUVar12 = NewObject<UPointSetComponent>(pUVar9);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UPointSetComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  (this->PreviewPoint).field0_0x0.DebugPtr = pUVar12;
  pUVar13 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar14 = (UInteractiveToolManager *)(**(code **)(pUVar13->_padding_ + 0x2d8))(pUVar13);
  pUVar15 = ToolSetupUtil::GetDefaultPointComponentMaterial(pUVar14,false);
  UPointSetComponent::SetPointMaterial(pUVar12,pUVar15);
  pUVar9 = GetTransientPackageAsObject();
  pUVar16 = NewObject<ULineSetComponent>(pUVar9);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar16 != (ULineSetComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  (this->PreviewSegment).field0_0x0.DebugPtr = pUVar16;
  pUVar13 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar14 = (UInteractiveToolManager *)(**(code **)(pUVar13->_padding_ + 0x2d8))(pUVar13);
  pUVar15 = ToolSetupUtil::GetDefaultLineComponentMaterial(pUVar14,false);
  ULineSetComponent::SetLineMaterial(pUVar16,pUVar15);
  bVar25 = this->bInteractiveInitializationMode;
  (this->InitializationCurveColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Orange.field0_0x0;
  FVar21 = FColor::Orange.field0_0x0;
  bVar25 = bVar25 == false;
  (this->NormalCurveColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Red.field0_0x0;
  FVar8 = FColor::Red;
  FVar6 = FVar21;
  if (bVar25) {
    FVar6 = FColor::Red.field0_0x0;
  }
  (this->CurrentSegmentsColor).field0_0x0._s_0 = (FColor_u_0_s_0)FVar6;
  if (bVar25) {
    FVar21 = FVar8.field0_0x0;
  }
  (this->CurrentPointsColor).field0_0x0._s_0 = (FColor_u_0_s_0)FVar21;
  this->SegmentsThickness = 4.0;
  this->PointsSize = 8.0;
  FVar8 = FColor::Green;
  (this->HoverColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Green.field0_0x0;
  (this->SelectedColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Yellow.field0_0x0;
  (this->PreviewColor).field0_0x0._s_0 = (FColor_u_0_s_0)FVar8.field0_0x0;
  (this->SnapLineColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Yellow.field0_0x0;
  (this->HighlightColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Yellow.field0_0x0;
  this->DepthBias = 1.0;
  local_78 = *(code **)&this->GeometrySetToleranceTest;
  lVar20 = *(longlong *)&(this->GeometrySetToleranceTest).field_0x8;
  local_68._0_8_ = *(undefined8 *)&(this->GeometrySetToleranceTest).field_0x10;
  local_68._8_8_ = *(undefined8 *)&(this->GeometrySetToleranceTest).field_0x18;
  TVar7 = *(TObjectPtr<USingleClickInputBehavior>_u_0 *)&(this->GeometrySetToleranceTest).field_0x20
  ;
  TStack_50 = *(TObjectPtr<UMouseHoverBehavior>_u_0 *)&(this->GeometrySetToleranceTest).field_0x28;
  *(code **)&this->GeometrySetToleranceTest =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCurveControlPointsMechanic::Setup'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
       ::Call;
  *(longlong *)&(this->GeometrySetToleranceTest).field_0x8 = lStack_70;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x10 = 0x52911df8;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x14 = 1;
  *(UCurveControlPointsMechanic **)&(this->GeometrySetToleranceTest).field_0x18 = this;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x20 = local_58._0_4_;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x24 = local_58._4_4_;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x28 = 0;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x2c = 0;
  local_58 = TVar7;
  lStack_70 = lVar20;
  if (local_78 != (code *)0x0) {
    pUVar11 = (UMouseHoverBehavior *)local_68;
    if (TStack_50.DebugPtr != (UMouseHoverBehavior *)0x0) {
      pUVar11 = TStack_50.DebugPtr;
    }
    (**(code **)(*(longlong *)pUVar11 + 0x10))();
  }
  local_78 = (code *)(this->SnapEngine)._padding_;
  lVar20 = (this->SnapEngine)._padding_;
  local_68._0_8_ = (this->SnapEngine)._padding_;
  local_68._8_8_ = (this->SnapEngine)._padding_;
  TVar7 = (TObjectPtr<USingleClickInputBehavior>_u_0)(this->SnapEngine)._padding_;
  TStack_50 = (TObjectPtr<UMouseHoverBehavior>_u_0)(this->SnapEngine)._padding_;
  (this->SnapEngine)._padding_ =
       (longlong)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCurveControlPointsMechanic::Setup'::__l2::<lambda_2>,double,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
       ::Call;
  (this->SnapEngine)._padding_ = lStack_70;
  *(undefined4 *)&(this->SnapEngine)._padding_ = 0x52911e18;
  *(undefined4 *)((longlong)&(this->SnapEngine)._padding_ + 4) = 1;
  (this->SnapEngine)._padding_ = (longlong)this;
  *(undefined4 *)&(this->SnapEngine)._padding_ = local_58._0_4_;
  *(undefined4 *)((longlong)&(this->SnapEngine)._padding_ + 4) = local_58._4_4_;
  *(undefined4 *)&(this->SnapEngine)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->SnapEngine)._padding_ + 4) = 0;
  local_58 = TVar7;
  lStack_70 = lVar20;
  if (local_78 != (code *)0x0) {
    pUVar11 = (UMouseHoverBehavior *)local_68;
    if (TStack_50.DebugPtr != (UMouseHoverBehavior *)0x0) {
      pUVar11 = (UMouseHoverBehavior *)TStack_50;
    }
    (**(code **)(*(longlong *)pUVar11 + 0x10))();
  }
  dVar5 = ToolSceneQueriesUtil::GetDefaultVisualAngleSnapThreshD();
  (this->SnapEngine)._padding_ = (longlong)dVar5;
  (this->SnapEngine).bEnableSnapToKnownLengths = false;
  this->LineSnapIDMin = 10000;
  uVar1 = (this->SnapEngine).KnownLengthPriorityDelta;
  uVar2 = (this->SnapEngine).IntersectionPriorityDelta;
  iVar3 = (this->SnapEngine).CardinalAxisPriority;
  iVar23 = (this->SnapEngine).LastSegmentPriority;
  if ((int)uVar1 < (int)uVar2) {
    uVar1 = uVar2;
  }
  this->FirstPointSnapID = 1000;
  this->LastPointSnapID = 0x3e9;
  if (iVar3 < iVar23) {
    iVar23 = iVar3;
  }
  iVar3 = (iVar23 - uVar1) + -1;
  this->LineSnapPriority = iVar3;
  this->EndpointSnapPriority = ~uVar2 + iVar3;
  pUVar13 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar14 = (UInteractiveToolManager *)(**(code **)(pUVar13->_padding_ + 0x2d8))(pUVar13);
  pUVar17 = UInteractiveToolManager::GetPairedGizmoManager(pUVar14);
  pUVar18 = NewObject<UTransformProxy>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar18);
  }
  (this->PointTransformProxy).field0_0x0.DebugPtr = pUVar18;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  pUVar19 = UE::TransformGizmoUtil::CreateCustomTransformGizmo
                      (pUVar17,TranslatePlaneXY|TranslateAxisY|TranslateAxisX,this,
                       (FString *)local_98);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar19 != (UCombinedTransformGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  (this->PointTransformGizmo).field0_0x0.DebugPtr = pUVar19;
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  local_98._0_8_ = GizmoTransformChanged;
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  local_98._16_8_ = GizmoTransformChanged;
  uStack_80 = local_98._8_8_;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::AddUObject<UCurveControlPointsMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
              *)&((this->PointTransformProxy).field0_0x0.DebugPtr)->OnTransformChanged,
             (UCurveControlPointsMechanic *)local_98,(pmf_5f670962 *)this);
  local_98._0_8_ = GizmoTransformStarted;
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  local_98._16_8_ = GizmoTransformStarted;
  uStack_80 = local_98._8_8_;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
  AddUObject<UCurveControlPointsMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
              *)&((this->PointTransformProxy).field0_0x0.DebugPtr)->OnBeginTransformEdit,
             (UCurveControlPointsMechanic *)local_98,(pmf_02d8458b *)this);
  local_98._0_8_ = GizmoTransformEnded;
  local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
  local_98._16_8_ = GizmoTransformEnded;
  uStack_80 = local_98._8_8_;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
  AddUObject<UCurveControlPointsMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
              *)&((this->PointTransformProxy).field0_0x0.DebugPtr)->OnEndTransformEdit,
             (UCurveControlPointsMechanic *)local_98,(pmf_02d8458b *)this);
  pUVar19 = (this->PointTransformGizmo).field0_0x0.DebugPtr;
  pcVar4 = *(code **)(*(longlong *)pUVar19 + 0x330);
  pUVar13 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  lVar20 = (**(code **)(pUVar13->_padding_ + 0x2d8))(pUVar13);
  puVar24 = (undefined1 *)(lVar20 + 0x28);
  if (lVar20 == 0) {
    puVar24 = (undefined1 *)0x0;
  }
  (*pcVar4)(pUVar19,(this->PointTransformProxy).field0_0x0.DebugPtr,puVar24);
  pUVar19 = (this->PointTransformGizmo).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar19 + 0x360))(pUVar19,0);
  ((this->PointTransformGizmo).field0_0x0.DebugPtr)->bUseContextCoordinateSystem = false;
  ((this->PointTransformGizmo).field0_0x0.DebugPtr)->CurrentCoordinateSystem = Local;
  return;
}

// Shutdown @ 14cb3bd80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCurveControlPointsMechanic::Shutdown(UCurveControlPointsMechanic *this)

{
  APreviewGeometryActor *this_00;
  UInteractiveTool *pUVar1;
  UInteractiveToolManager *this_01;
  UInteractiveGizmoManager *pUVar2;
  
  pUVar1 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  this_01 = (UInteractiveToolManager *)(**(code **)(pUVar1->_padding_ + 0x2d8))(pUVar1);
  pUVar2 = UInteractiveToolManager::GetPairedGizmoManager(this_01);
  (**(code **)(pUVar2->_padding_ + 0x2e8))(pUVar2);
  this_00 = (this->PreviewGeometryActor).field0_0x0.DebugPtr;
  if (this_00 != (APreviewGeometryActor *)0x0) {
    AActor::Destroy((AActor *)this_00,false,true);
    (this->PreviewGeometryActor).field0_0x0.DebugPtr = (APreviewGeometryActor *)0x0;
  }
  return;
}

// StaticRegisterNativesUCurveControlPointsMechanic @ 14cb3ead0

void __cdecl UCurveControlPointsMechanic::StaticRegisterNativesUCurveControlPointsMechanic(void)

{
  return;
}

// UpdateGizmoLocation @ 14cb46ea0

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

void __thiscall UCurveControlPointsMechanic::UpdateGizmoLocation(UCurveControlPointsMechanic *this)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  int iVar3;
  undefined1 *puVar4;
  longlong lVar5;
  UCombinedTransformGizmo *pUVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  FScriptContainerElement *pFVar16;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [24];
  double local_c0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_f8;
  if ((this->PointTransformGizmo).field0_0x0.DebugPtr != (UCombinedTransformGizmo *)0x0) {
    iVar3 = (this->SelectedPointIDs).ArrayNum;
    if (0 < iVar3) {
      pFVar16 = (this->SelectedPointIDs).AllocatorInstance.Data;
      pFVar1 = pFVar16 + (longlong)iVar3 * 4;
      uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      while( true ) {
        if ((this->SelectedPointIDs).ArrayNum != iVar3) {
          local_d8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_d8);
        }
        if (pFVar16 == pFVar1) break;
        uVar11 = *(uint *)pFVar16;
        lVar14 = (longlong)(int)uVar11;
        if (((int)uVar11 < 0) || (*(int *)&(this->ControlPoints).Vertices.field_0x28 <= (int)uVar11)
           ) {
LAB_14cb46fab:
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidPoint(PointID)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\CurveControlPointsMechanic.h"
                              ,0x87,L"");
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        else {
          if (*(int *)&(this->ControlPoints).Vertices.field_0x28 <= (int)uVar11) {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5c6,L"");
            if (bVar10) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          puVar4 = *(undefined1 **)&(this->ControlPoints).Vertices.field_0x20;
          puVar15 = &(this->ControlPoints).Vertices.field_0x10;
          if (puVar4 != (undefined1 *)0x0) {
            puVar15 = puVar4;
          }
          uVar12 = uVar11 & 0x1f;
          if ((int)uVar11 < 0) {
            uVar11 = uVar11 + 0x1f;
          }
          if ((*(uint *)(puVar15 + (longlong)((int)uVar11 >> 5) * 4) >> uVar12 & 1) == 0)
          goto LAB_14cb46fab;
        }
        lVar5 = *(longlong *)&(this->ControlPoints).Vertices;
        pFVar16 = pFVar16 + 4;
        pdVar2 = (double *)(lVar5 + lVar14 * 0x18);
        local_c0 = *(double *)(lVar5 + 0x10 + lVar14 * 0x18);
        uVar13 = (double)uVar13 + *pdVar2;
        uVar9 = (double)uVar9 + local_c0;
        uVar8 = (double)uVar8 + pdVar2[1];
      }
      local_b8.Rotation.ZW.m128d_f64[0] = (this->DrawPlane).Rotation.field0_0x0._s_0.Z;
      local_b8.Rotation.ZW.m128d_f64[1] = (this->DrawPlane).Rotation.field0_0x0._s_0.W;
      local_b8.Translation.ZW.m128d_f64[0] =
           __real_3ff0000000000000 / (double)(this->SelectedPointIDs).ArrayNum;
      local_b8.Rotation.XY.m128d_f64[0] = (this->DrawPlane).Rotation.field0_0x0._s_0.X;
      local_b8.Rotation.XY.m128d_f64[1] = (this->DrawPlane).Rotation.field0_0x0._s_0.Y;
      local_b8.Translation.XY.m128d_f64[0] = local_b8.Translation.ZW.m128d_f64[0] * (double)uVar13;
      local_b8.Translation.XY.m128d_f64[1] = local_b8.Translation.ZW.m128d_f64[0] * (double)uVar8;
      local_b8.Translation.ZW.m128d_f64[0] = local_b8.Translation.ZW.m128d_f64[0] * (double)uVar9;
      local_b8.Translation.ZW.m128d_f64[1] = 0.0;
      local_b8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      local_b8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
      local_b8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_b8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      UCombinedTransformGizmo::ReinitializeGizmoTransform
                ((this->PointTransformGizmo).field0_0x0.DebugPtr,&local_b8,true);
    }
    pUVar6 = (this->PointTransformGizmo).field0_0x0.DebugPtr;
    if (pUVar6 != (UCombinedTransformGizmo *)0x0) {
      if (((this->SelectedPointIDs).ArrayNum < 1) || (this->bInsertPointToggle != false)) {
        uVar13 = 0;
      }
      else {
        uVar13 = 1;
      }
      (**(code **)(*(longlong *)pUVar6 + 0x360))(pUVar6,uVar13);
    }
  }
  return;
}

// UpdateGizmoVisibility @ 14cb47d90

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
UCurveControlPointsMechanic::UpdateGizmoVisibility(UCurveControlPointsMechanic *this)

{
  UCombinedTransformGizmo *pUVar1;
  
  pUVar1 = (this->PointTransformGizmo).field0_0x0.DebugPtr;
  if (pUVar1 == (UCombinedTransformGizmo *)0x0) {
    return;
  }
  if ((0 < (this->SelectedPointIDs).ArrayNum) && (this->bInsertPointToggle == false)) {
                    /* WARNING: Could not recover jumptable at 0x00014cb47db6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x360))(pUVar1,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cb47dc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar1 + 0x360))(pUVar1,0);
  return;
}

// UpdatePointLocation @ 14cb48130

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
UCurveControlPointsMechanic::UpdatePointLocation
          (UCurveControlPointsMechanic *this,int param_1,TVector<double> *param_2)

{
  FOrderedPoints *this_00;
  double *pdVar1;
  double dVar2;
  int iVar3;
  undefined1 *puVar4;
  ULineSetComponent *this_01;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 *puVar13;
  longlong lVar14;
  TPolyline<double,3> local_c8;
  TPolyline<double,3> local_b8;
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60;
  TVector<double>_u_0 local_48;
  
  this_00 = &this->ControlPoints;
  if ((-1 < param_1) && (param_1 < *(int *)&(this->ControlPoints).Vertices.field_0x28)) {
    if ((*(int *)&(this->ControlPoints).Vertices.field_0x28 <= param_1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar4 = *(undefined1 **)&(this->ControlPoints).Vertices.field_0x20;
    puVar13 = &(this->ControlPoints).Vertices.field_0x10;
    if (puVar4 != (undefined1 *)0x0) {
      puVar13 = puVar4;
    }
    if ((*(uint *)(puVar13 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_14cb481d9;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValidPoint(PointID)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\CurveControlPointsMechanic.h"
                     ,0xa1,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_14cb481d9:
  lVar14 = *(longlong *)&this_00->Vertices;
  dVar6 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Z;
  pdVar1 = (double *)(lVar14 + (longlong)param_1 * 0x18);
  *pdVar1 = (param_2->field0_0x0)._s_0.X;
  pdVar1[1] = dVar6;
  *(double *)(lVar14 + 0x10 + (longlong)param_1 * 0x18) = dVar2;
  UE::Geometry::FGeometrySet3::UpdatePoint(&this->GeometrySet,param_1,param_2);
  local_a8._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_a8._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_a8._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  UPointSetComponent::SetPointPosition
            ((this->DrawnControlPoints).field0_0x0.DebugPtr,param_1,
             (TVector<double> *)&local_a8._s_0);
  piVar10 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
            FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)&(this->ControlPoints).PointIDToSequencePosition,param_1);
  iVar3 = *piVar10;
  if ((this->bIsLoop != false) || (iVar8 = FOrderedPoints::First(this_00), param_1 != iVar8)) {
    iVar8 = (this->ControlPoints).Sequence.ArrayNum;
    local_90._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_90._s_0.Y = (param_2->field0_0x0)._s_0.Y;
    this_01 = (this->DrawnControlSegments).field0_0x0.DebugPtr;
    local_90._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    uVar12 = (iVar8 + -1 + iVar3) % iVar8;
    iVar8 = FOrderedPoints::GetPointIDAt(this_00,uVar12);
    ULineSetComponent::SetLineEnd(this_01,iVar8,(TVector<double> *)&local_90._s_0);
    uVar9 = 0;
    if ((int)uVar12 < (this->ControlPoints).Sequence.ArrayNum) {
      uVar9 = ~uVar12 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar14 = (longlong)
             *(int *)((this->ControlPoints).Sequence.AllocatorInstance.Data +
                     (longlong)(int)uVar12 * 4);
    pdVar1 = (double *)(*(longlong *)&this_00->Vertices + lVar14 * 0x18);
    local_78._s_0.X = *pdVar1;
    local_78._s_0.Y = pdVar1[1];
    local_78._s_0.Z = *(double *)(*(longlong *)&this_00->Vertices + 0x10 + lVar14 * 0x18);
    UE::Geometry::TPolyline<double,3>::TPolyline<double,3>
              (&local_c8,(TVector<double> *)&local_78._s_0,param_2);
    iVar8 = FOrderedPoints::GetPointIDAt(this_00,uVar12);
    UE::Geometry::FGeometrySet3::UpdateCurve(&this->GeometrySet,iVar8,&local_c8);
    if (local_c8.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Vertices.AllocatorInstance.Data);
    }
  }
  if ((this->bIsLoop == false) &&
     (iVar8 = FOrderedPoints::Last(&this->ControlPoints), param_1 == iVar8)) {
    return;
  }
  local_60._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_60._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_60._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  ULineSetComponent::SetLineStart
            ((this->DrawnControlSegments).field0_0x0.DebugPtr,param_1,
             (TVector<double> *)&local_60._s_0);
  iVar8 = (this->ControlPoints).Sequence.ArrayNum;
  uVar12 = (iVar3 + 1) % iVar8;
  uVar9 = 0;
  if ((int)uVar12 < iVar8) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar11 = (longlong)
           *(int *)((this->ControlPoints).Sequence.AllocatorInstance.Data +
                   (longlong)(int)uVar12 * 4);
  lVar14 = *(longlong *)&(this->ControlPoints).Vertices;
  pdVar1 = (double *)(lVar14 + lVar11 * 0x18);
  local_48._s_0.X = *pdVar1;
  local_48._s_0.Y = pdVar1[1];
  local_48._s_0.Z = *(double *)(lVar14 + 0x10 + lVar11 * 0x18);
  UE::Geometry::TPolyline<double,3>::TPolyline<double,3>
            (&local_b8,param_2,(TVector<double> *)&local_48._s_0);
  UE::Geometry::FGeometrySet3::UpdateCurve(&this->GeometrySet,param_1,&local_b8);
  if (local_b8.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Vertices.AllocatorInstance.Data);
  }
  return;
}

// UpdateSnapHistoryPoint @ 14cb498c0

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
UCurveControlPointsMechanic::UpdateSnapHistoryPoint
          (UCurveControlPointsMechanic *this,int param_1,TVector<double> *param_2)

{
  UE::Geometry::FPointPlanarSnapSolver::RemoveHistoryPoint(&this->SnapEngine,param_1);
  UE::Geometry::FPointPlanarSnapSolver::InsertHistoryPoint(&this->SnapEngine,param_2,param_1);
  return;
}

// UpdateSnapTargetsForHover @ 14cb49910

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
UCurveControlPointsMechanic::UpdateSnapTargetsForHover(UCurveControlPointsMechanic *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (this->ControlPoints).Sequence.ArrayNum;
  if (iVar5 != 0) {
    if (this->bInteractiveInitializationMode != false) {
      UE::Geometry::FPointPlanarSnapSolver::RegenerateTargetLinesAround
                (&this->SnapEngine,iVar5,false,true);
      return;
    }
    if ((this->SelectedPointIDs).ArrayNum == 1) {
      iVar5 = *(int *)(this->SelectedPointIDs).AllocatorInstance.Data;
      iVar4 = FOrderedPoints::First(&this->ControlPoints);
      if (iVar5 == iVar4) {
        iVar5 = -1;
      }
      else {
        if ((this->SelectedPointIDs).ArrayNum < 1) {
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
        pFVar1 = (this->SelectedPointIDs).AllocatorInstance.Data;
        iVar5 = FOrderedPoints::Last(&this->ControlPoints);
        if (*(int *)pFVar1 != iVar5) {
          UE::Geometry::FPointPlanarSnapSolver::RegenerateTargetLines(&this->SnapEngine,false,false)
          ;
          return;
        }
        iVar5 = (this->ControlPoints).Sequence.ArrayNum;
      }
      UE::Geometry::FPointPlanarSnapSolver::RegenerateTargetLinesAround
                (&this->SnapEngine,iVar5,false,true);
      return;
    }
  }
  UE::Geometry::FPointPlanarSnapSolver::RegenerateTargetLines(&this->SnapEngine,false,false);
  return;
}

