// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 44

// StaticClass @ 14cab01e0

UClass * __cdecl USpaceCurveDeformationMechanic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpaceCurveDeformationMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"SpaceCurveDeformationMechanic",
               &Z_Registration_Info_UClass_USpaceCurveDeformationMechanic.InnerSingleton,
               StaticRegisterNativesUSpaceCurveDeformationMechanic,0x2e0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USpaceCurveDeformationMechanic>,
               InternalVTableHelperCtorCaller<USpaceCurveDeformationMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpaceCurveDeformationMechanic.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14cab09d0

int __cdecl
`USpaceCurveDeformationMechanic::ClearCurveSource'::__l5::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  return 0;
}

// <lambda_invoker_cdecl> @ 14cab0b10

TFrame3<double> * __cdecl
`USpaceCurveDeformationMechanic::ClearCurveSource'::__l5::<lambda_2>::<lambda_invoker_cdecl>
          (TFrame3<double> *__return_storage_ptr__,int param_1)

{
  undefined8 uVar1;
  
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = 1.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = 1.0;
  return __return_storage_ptr__;
}

// <lambda_invoker_cdecl> @ 14cab0c20

bool __cdecl
`USpaceCurveDeformationMechanic::ClearCurveSource'::__l5::<lambda_3>::<lambda_invoker_cdecl>(void)

{
  return false;
}

// USpaceCurveDeformationMechanic @ 14cacf330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

USpaceCurveDeformationMechanic * __thiscall
USpaceCurveDeformationMechanic::USpaceCurveDeformationMechanic
          (USpaceCurveDeformationMechanic *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this,param_1);
  *(undefined8 *)&(this->OnPointsChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnPointsChanged = 0;
  *(undefined8 *)&(this->OnPointsChanged).field_0x10 = 0;
  (this->CurvePoints).ArrayNum = 0;
  (this->CurvePoints).ArrayMax = 0;
  (this->GeometrySet).Points.ArrayNum = 0;
  (this->GeometrySet).Points.ArrayMax = 0;
  *(undefined8 *)&(this->GeometrySet).PointIDToIndex.field_0x8 = 0;
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickBehaviorTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  (this->ClickBehavior).field0_0x0.DebugPtr = (USingleClickInputBehavior *)0x0;
  (this->HoverBehavior).field0_0x0.DebugPtr = (UMouseHoverBehavior *)0x0;
  *(undefined8 *)&(this->OnPointsChanged).field_0x8 = 0;
  (this->TransformProperties).field0_0x0.DebugPtr = (USpaceCurveDeformationMechanicPropertySet *)0x0
  ;
  (this->CurveSource).Object = (FSpaceCurveSource *)0x0;
  (this->CurveSource).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->EmptyCurveSource).Object = (FSpaceCurveSource *)0x0;
  (this->EmptyCurveSource).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurvePoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
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
  this->bSpatialValid = false;
  this->bRenderGeometryValid = false;
  this->bAddToSelectionToggle = false;
  this->ShiftModifierId = 1;
  this->CtrlModifierId = 2;
  this->bGizmoBeingDragged = false;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->PreviewGeometryActor).field0_0x0.DebugPtr = (APreviewGeometryActor *)0x0;
  (this->RenderPoints).field0_0x0.DebugPtr = (UPointSetComponent *)0x0;
  (this->RenderSegments).field0_0x0.DebugPtr = (ULineSetComponent *)0x0;
  (this->PointTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->PointTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  *(undefined8 *)&this->GeometrySetToleranceTest = 0;
  *(undefined8 *)&(this->GeometrySetToleranceTest).field_0x28 = 0;
  this->HoveredPointID = -1;
  (this->SelectedPointIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedPointIDs).ArrayNum = 0;
  (this->SelectedPointIDs).ArrayMax = 0;
  (this->CurveStartPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveStartPositions).ArrayNum = 0;
  (this->CurveStartPositions).ArrayMax = 0;
  (this->GizmoStartPosition).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->GizmoStartPosition).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->GizmoStartPosition).Rotation.field0_0x0._s_0.X = 0.0;
  (this->GizmoStartPosition).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GizmoStartPosition).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GizmoStartPosition).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->GizmoStartPosition).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->GizmoStartPosition).Rotation.field0_0x0._s_0.X = 0.0;
  (this->GizmoStartPosition).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->GizmoStartPosition).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->GizmoStartPosition).Rotation.field0_0x0._s_0.W = 1.0;
  this->CurrentChangeStamp = 0;
  return this;
}

// USpaceCurveDeformationMechanic @ 14cacf5a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

USpaceCurveDeformationMechanic * __thiscall
USpaceCurveDeformationMechanic::USpaceCurveDeformationMechanic(USpaceCurveDeformationMechanic *this)

{
  undefined8 uVar1;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this);
  *(undefined8 *)&(this->OnPointsChanged).field_0x18 = 2;
  *(undefined8 *)&this->OnPointsChanged = 0;
  *(undefined8 *)&(this->OnPointsChanged).field_0x10 = 0;
  (this->CurvePoints).ArrayNum = 0;
  (this->CurvePoints).ArrayMax = 0;
  (this->GeometrySet).Points.ArrayNum = 0;
  (this->GeometrySet).Points.ArrayMax = 0;
  *(undefined8 *)&(this->GeometrySet).PointIDToIndex.field_0x8 = 0;
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickBehaviorTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  (this->ClickBehavior).field0_0x0.DebugPtr = (USingleClickInputBehavior *)0x0;
  (this->HoverBehavior).field0_0x0.DebugPtr = (UMouseHoverBehavior *)0x0;
  *(undefined8 *)&(this->OnPointsChanged).field_0x8 = 0;
  (this->TransformProperties).field0_0x0.DebugPtr = (USpaceCurveDeformationMechanicPropertySet *)0x0
  ;
  (this->CurveSource).Object = (FSpaceCurveSource *)0x0;
  (this->CurveSource).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->EmptyCurveSource).Object = (FSpaceCurveSource *)0x0;
  (this->EmptyCurveSource).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->CurvePoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
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
  this->bSpatialValid = false;
  this->bRenderGeometryValid = false;
  this->bAddToSelectionToggle = false;
  this->ShiftModifierId = 1;
  this->CtrlModifierId = 2;
  this->bGizmoBeingDragged = false;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->PreviewGeometryActor).field0_0x0.DebugPtr = (APreviewGeometryActor *)0x0;
  (this->RenderPoints).field0_0x0.DebugPtr = (UPointSetComponent *)0x0;
  (this->RenderSegments).field0_0x0.DebugPtr = (ULineSetComponent *)0x0;
  (this->PointTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->PointTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  *(undefined8 *)&this->GeometrySetToleranceTest = 0;
  *(undefined8 *)&(this->GeometrySetToleranceTest).field_0x28 = 0;
  this->HoveredPointID = -1;
  (this->SelectedPointIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedPointIDs).ArrayNum = 0;
  (this->SelectedPointIDs).ArrayMax = 0;
  (this->CurveStartPositions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurveStartPositions).ArrayNum = 0;
  (this->CurveStartPositions).ArrayMax = 0;
  (this->GizmoStartPosition).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->GizmoStartPosition).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->GizmoStartPosition).Rotation.field0_0x0._s_0.X = 0.0;
  (this->GizmoStartPosition).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GizmoStartPosition).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GizmoStartPosition).Origin.field0_0x0._s_0.Y = (double)uVar1;
  (this->GizmoStartPosition).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->GizmoStartPosition).Rotation.field0_0x0._s_0.X = 0.0;
  (this->GizmoStartPosition).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->GizmoStartPosition).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->GizmoStartPosition).Rotation.field0_0x0._s_0.W = 1.0;
  this->CurrentChangeStamp = 0;
  return this;
}

// ~USpaceCurveDeformationMechanic @ 14cad2c00

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
USpaceCurveDeformationMechanic::~USpaceCurveDeformationMechanic
          (USpaceCurveDeformationMechanic *this)

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
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\SpaceCurveDeformationMechanic.cpp"
                       ,0x20,
                       L"Shutdown() should be called before USpaceCurveDeformationMechanic is destroyed."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar2 = (this->CurveStartPositions).AllocatorInstance.Data;
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
  pFVar2 = (this->CurvePoints).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EmptyCurveSource).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->CurveSource).SharedReferenceCount.ReferenceController);
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

// BeginHoverSequenceHitTest @ 14caec630

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
USpaceCurveDeformationMechanic::BeginHoverSequenceHitTest
          (USpaceCurveDeformationMechanic *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  HitTest((USpaceCurveDeformationMechanic *)
          ((longlong)&this[-1].GizmoStartPosition.Origin.field0_0x0 + 0x10),param_1,
          __return_storage_ptr__);
  __return_storage_ptr__->HitDepth = 0.0;
  return __return_storage_ptr__;
}

// ChangeSelection @ 14caf3430

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
USpaceCurveDeformationMechanic::ChangeSelection
          (USpaceCurveDeformationMechanic *this,int param_1,bool param_2)

{
  ForAnyElementType *pFVar1;
  ForAnyElementType *pFVar2;
  int *piVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *this_00;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  ForAnyElementType _Src;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FColor *pFVar14;
  undefined1 local_res18 [8];
  undefined8 *local_res20;
  int local_58 [2];
  code *local_50;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  
  this_00 = &this->SelectedPointIDs;
  pFVar5 = (this_00->AllocatorInstance).Data;
  local_40 = (this->SelectedPointIDs).ArrayNum;
  lVar12 = (longlong)local_40;
  local_48.Data = (FScriptContainerElement *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
    iVar8 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_40,0,&local_48,local_40,&local_3c);
    memcpy(local_48.Data,pFVar5,lVar12 << 2);
    iVar8 = (this->SelectedPointIDs).ArrayNum;
  }
  if (!param_2) {
    iVar4 = (this->SelectedPointIDs).ArrayNum;
    if (0 < iVar4) {
      pFVar13 = (this_00->AllocatorInstance).Data;
      pFVar5 = pFVar13 + (longlong)iVar4 * 4;
      while( true ) {
        if ((this->SelectedPointIDs).ArrayNum != iVar4) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pFVar13 == pFVar5) break;
        iVar8 = *(int *)pFVar13;
        bVar7 = UPointSetComponent::IsPointValid((this->RenderPoints).field0_0x0.DebugPtr,iVar8);
        if (bVar7) {
          UPointSetComponent::SetPointColor
                    ((this->RenderPoints).field0_0x0.DebugPtr,iVar8,&this->CurrentPointsColor);
        }
        pFVar13 = pFVar13 + 4;
      }
      piVar3 = &(this->SelectedPointIDs).ArrayMax;
      iVar8 = 0;
      (this->SelectedPointIDs).ArrayNum = 0;
      if (*piVar3 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&this_00->AllocatorInstance,0,piVar3);
        iVar8 = (this->SelectedPointIDs).ArrayNum;
      }
    }
  }
  if (-1 < param_1) {
    if (param_2) {
      pFVar5 = (this_00->AllocatorInstance).Data;
      for (pFVar13 = pFVar5; pFVar13 != pFVar5 + (longlong)iVar8 * 4; pFVar13 = pFVar13 + 4) {
        if (*(int *)pFVar13 == param_1) {
          iVar8 = (int)((longlong)pFVar13 - (longlong)pFVar5 >> 2);
          if (iVar8 != -1) {
            TArray<int,TSizedDefaultAllocator<32>_>::RemoveAt(this_00,iVar8,Default);
            pFVar14 = &this->CurrentPointsColor;
            goto LAB_14caf3649;
          }
          break;
        }
      }
    }
    pFVar5 = (this_00->AllocatorInstance).Data;
    local_58[0] = param_1;
    if (((pFVar5 <= (FScriptContainerElement *)local_58) &&
        ((FScriptContainerElement *)local_58 <
         pFVar5 + (longlong)(this->SelectedPointIDs).ArrayMax * 4)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar8 = (this->SelectedPointIDs).ArrayNum;
    piVar3 = &(this->SelectedPointIDs).ArrayMax;
    if (iVar8 == *piVar3) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&this_00->AllocatorInstance,piVar3);
    }
    pFVar14 = &this->SelectedColor;
    (this->SelectedPointIDs).ArrayNum = iVar8 + 1;
    *(int *)((this_00->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_58[0];
    param_1 = local_58[0];
LAB_14caf3649:
    UPointSetComponent::SetPointColor((this->RenderPoints).field0_0x0.DebugPtr,param_1,pFVar14);
  }
  iVar8 = (this->SelectedPointIDs).ArrayNum;
  if ((iVar8 != local_40) ||
     ((iVar8 != 0 &&
      (iVar8 = memcmp((this_00->AllocatorInstance).Data,local_48.Data,(longlong)iVar8 << 2),
      iVar8 != 0)))) {
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    lVar12 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
    local_50 = *(code **)(*(longlong *)(lVar12 + 0x28) + 0x20);
    puVar10 = ::operator_new(0x28);
    _Src.Data = local_48.Data;
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      pFVar1 = (ForAnyElementType *)(puVar10 + 1);
      puVar10[3] = 0;
      pFVar2 = (ForAnyElementType *)(puVar10 + 3);
      pFVar1->Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)((longlong)puVar10 + 0x14) = 0;
      *puVar10 = &___7FSpaceCurveDeformationMechanicSelectionChange__6B_;
      *(undefined4 *)(puVar10 + 2) = 0;
      *(undefined4 *)(puVar10 + 4) = 0;
      piVar3 = (int *)((longlong)puVar10 + 0x24);
      *piVar3 = 0;
      if (pFVar1 != &local_48) {
        lVar11 = (longlong)local_40;
        *(int *)(puVar10 + 2) = local_40;
        if (local_40 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_40,0,pFVar1,local_40,(int *)((longlong)puVar10 + 0x14));
          memcpy(pFVar1->Data,_Src.Data,lVar11 << 2);
        }
      }
      if ((TArray<int,TSizedDefaultAllocator<32>_> *)pFVar2 != this_00) {
        iVar8 = (this->SelectedPointIDs).ArrayNum;
        pFVar5 = (this_00->AllocatorInstance).Data;
        *(int *)(puVar10 + 4) = iVar8;
        if ((iVar8 == 0) && (*piVar3 == 0)) {
          *(undefined4 *)((longlong)puVar10 + 0x24) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar8,*piVar3,pFVar2,iVar8,piVar3);
          if (iVar8 != 0) {
            memcpy(pFVar2->Data,pFVar5,(longlong)iVar8 << 2);
          }
        }
      }
    }
    local_res20 = puVar10;
    (*local_50)(lVar12 + 0x28,this,&local_res20,&SpaceCurvePointSelectionTransactionText);
  }
  UpdateGizmoLocation(this);
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  return;
}

// ClearCurveSource @ 14caf4150

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
USpaceCurveDeformationMechanic::ClearCurveSource(USpaceCurveDeformationMechanic *this)

{
  TSharedPtr<FSpaceCurveSource,1> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  bool bVar9;
  longlong *plVar10;
  TReferenceControllerBase<1> *pTVar11;
  FSpaceCurveSource *pFVar12;
  undefined1 auStack_108 [32];
  FSpaceCurveSource *local_e8;
  FSharedReferencer<1> FStack_e0;
  TSharedPtr<FSpaceCurveSource,1> local_d8;
  code *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  code *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  code *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  pTVar1 = &this->EmptyCurveSource;
  if (pTVar1->Object == (FSpaceCurveSource *)0x0) {
    FStack_e0.ReferenceController = ::operator_new(0xa0);
    pTVar11 = (TReferenceControllerBase<1> *)0x0;
    if (FStack_e0.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_e8 = ___xmm_00000000000000000000000000000010;
      pFVar12 = (FSpaceCurveSource *)&DAT_00000010;
      FStack_e0.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_e0.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pFVar12 = (FSpaceCurveSource *)(FStack_e0.ReferenceController + 1);
      (FStack_e0.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_e0.ReferenceController)->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_VFSpaceCurveSource___00_SharedPointerInternals__6B_;
      FStack_e0.ReferenceController[1]._padding_ = 0;
      FStack_e0.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      FStack_e0.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      FStack_e0.ReferenceController[2]._padding_ = 0;
      FStack_e0.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
      FStack_e0.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
      FStack_e0.ReferenceController[3]._padding_ = 0;
      FStack_e0.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
      FStack_e0.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
      FStack_e0.ReferenceController[4]._padding_ = 0;
      FStack_e0.ReferenceController[4].SharedReferenceCount = (atomic<int>)0x0;
      FStack_e0.ReferenceController[4].WeakReferenceCount = (atomic<int>)0x0;
      FStack_e0.ReferenceController[5]._padding_ = 0;
      FStack_e0.ReferenceController[5].SharedReferenceCount = (atomic<int>)0x0;
      FStack_e0.ReferenceController[5].WeakReferenceCount = (atomic<int>)0x0;
      FStack_e0.ReferenceController[6]._padding_ = 0;
      FStack_e0.ReferenceController[6].SharedReferenceCount = (atomic<int>)0x0;
      FStack_e0.ReferenceController[6].WeakReferenceCount = (atomic<int>)0x0;
      FStack_e0.ReferenceController[7]._padding_ = 0;
      FStack_e0.ReferenceController[7].SharedReferenceCount = (atomic<int>)0x0;
      FStack_e0.ReferenceController[7].WeakReferenceCount = (atomic<int>)0x0;
      FStack_e0.ReferenceController[8]._padding_ = 0;
      FStack_e0.ReferenceController[8].SharedReferenceCount = (atomic<int>)0x0;
      FStack_e0.ReferenceController[8].WeakReferenceCount = (atomic<int>)0x0;
      FStack_e0.ReferenceController[9]._padding_ = 0;
      FStack_e0.ReferenceController[9].SharedReferenceCount = (atomic<int>)0x0;
      FStack_e0.ReferenceController[9].WeakReferenceCount = (atomic<int>)0x0;
      if (pFVar12 == (FSpaceCurveSource *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar9) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      LOCK();
      (FStack_e0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_e0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar11 = FStack_e0.ReferenceController;
      local_e8 = pFVar12;
    }
    if (pTVar1 != (TSharedPtr<FSpaceCurveSource,1> *)&local_e8) {
      pTVar1->Object = pFVar12;
      local_e8 = (FSpaceCurveSource *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->EmptyCurveSource).SharedReferenceCount,&FStack_e0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_e0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    local_b8 = &___7__TFunction_OwnedObject_P6AHXZ_00_0A__Function_Private_Core_UE__6B_;
    uStack_b0 = `USpaceCurveDeformationMechanic::ClearCurveSource'::__l5::<lambda_1>::
                <lambda_invoker_cdecl>;
    local_c8 = UE::Core::Private::Function::TFunctionRefCaller<int_(__cdecl*)(void),int>::Call;
    plStack_a0 = (longlong *)0x0;
    if (pTVar1->Object == (FSpaceCurveSource *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar12 = pTVar1->Object;
    lVar5 = *(longlong *)&pFVar12->GetPointCount;
    uVar6 = *(undefined8 *)&(pFVar12->GetPointCount).field_0x8;
    lVar7 = *(longlong *)&(pFVar12->GetPointCount).field_0x10;
    uVar8 = *(undefined8 *)&(pFVar12->GetPointCount).field_0x18;
    uVar3 = *(undefined8 *)&(pFVar12->GetPointCount).field_0x20;
    plVar4 = *(longlong **)&(pFVar12->GetPointCount).field_0x28;
    *(code **)&pFVar12->GetPointCount = local_c8;
    *(undefined8 *)&(pFVar12->GetPointCount).field_0x8 = uStack_c0;
    *(undefined4 *)&(pFVar12->GetPointCount).field_0x10 = (undefined4)local_b8;
    *(undefined4 *)&(pFVar12->GetPointCount).field_0x14 = local_b8._4_4_;
    *(undefined4 *)&(pFVar12->GetPointCount).field_0x18 = (undefined4)uStack_b0;
    *(undefined4 *)&(pFVar12->GetPointCount).field_0x1c = uStack_b0._4_4_;
    *(undefined8 *)&(pFVar12->GetPointCount).field_0x20 = local_a8;
    *(longlong **)&(pFVar12->GetPointCount).field_0x28 = plStack_a0;
    local_b8 = (undefined **)lVar7;
    uStack_b0 = (code *)uVar8;
    local_a8 = uVar3;
    plStack_a0 = plVar4;
    local_c8 = (code *)lVar5;
    uStack_c0 = uVar6;
    if (lVar5 != 0) {
      plVar10 = &local_b8;
      if (plVar4 != (longlong *)0x0) {
        plVar10 = plVar4;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    plStack_70 = (longlong *)0x0;
    local_88 = &
               ___7__TFunction_OwnedObject_P6A_AU__TFrame3_N_Geometry_UE__H_Z_00_0A__Function_Private_Core_UE__6B_
    ;
    uStack_80 = `USpaceCurveDeformationMechanic::ClearCurveSource'::__l5::<lambda_2>::
                <lambda_invoker_cdecl>;
    local_98 = UE::Core::Private::Function::
               TFunctionRefCaller<UE::Geometry::TFrame3<double>_(__cdecl*)(int),UE::Geometry::TFrame3<double>,int>
               ::Call;
    if (pTVar1->Object == (FSpaceCurveSource *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar12 = pTVar1->Object;
    lVar5 = *(longlong *)&pFVar12->GetPoint;
    uVar6 = *(undefined8 *)&(pFVar12->GetPoint).field_0x8;
    lVar7 = *(longlong *)&(pFVar12->GetPoint).field_0x10;
    uVar8 = *(undefined8 *)&(pFVar12->GetPoint).field_0x18;
    uVar3 = *(undefined8 *)&(pFVar12->GetPoint).field_0x20;
    plVar4 = *(longlong **)&(pFVar12->GetPoint).field_0x28;
    *(code **)&pFVar12->GetPoint = local_98;
    *(undefined8 *)&(pFVar12->GetPoint).field_0x8 = uStack_90;
    *(undefined4 *)&(pFVar12->GetPoint).field_0x10 = (undefined4)local_88;
    *(undefined4 *)&(pFVar12->GetPoint).field_0x14 = local_88._4_4_;
    *(undefined4 *)&(pFVar12->GetPoint).field_0x18 = (undefined4)uStack_80;
    *(undefined4 *)&(pFVar12->GetPoint).field_0x1c = uStack_80._4_4_;
    *(undefined8 *)&(pFVar12->GetPoint).field_0x20 = local_78;
    *(longlong **)&(pFVar12->GetPoint).field_0x28 = plStack_70;
    local_98 = (code *)lVar5;
    uStack_90 = uVar6;
    local_88 = (undefined **)lVar7;
    uStack_80 = (code *)uVar8;
    local_78 = uVar3;
    plStack_70 = plVar4;
    if (lVar5 != 0) {
      plVar10 = &local_88;
      if (plVar4 != (longlong *)0x0) {
        plVar10 = plVar4;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
    local_58 = &___7__TFunction_OwnedObject_P6A_NXZ_00_0A__Function_Private_Core_UE__6B_;
    uStack_50 = `USpaceCurveDeformationMechanic::ClearCurveSource'::__l5::<lambda_3>::
                <lambda_invoker_cdecl>;
    plStack_40 = (longlong *)0x0;
    local_68 = UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
    if (pTVar1->Object == (FSpaceCurveSource *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar12 = pTVar1->Object;
    lVar5 = *(longlong *)&pFVar12->IsLoop;
    uVar6 = *(undefined8 *)&(pFVar12->IsLoop).field_0x8;
    lVar7 = *(longlong *)&(pFVar12->IsLoop).field_0x10;
    uVar8 = *(undefined8 *)&(pFVar12->IsLoop).field_0x18;
    uVar3 = *(undefined8 *)&(pFVar12->IsLoop).field_0x20;
    plVar4 = *(longlong **)&(pFVar12->IsLoop).field_0x28;
    *(code **)&pFVar12->IsLoop = local_68;
    *(undefined8 *)&(pFVar12->IsLoop).field_0x8 = uStack_60;
    *(undefined4 *)&(pFVar12->IsLoop).field_0x10 = (undefined4)local_58;
    *(undefined4 *)&(pFVar12->IsLoop).field_0x14 = local_58._4_4_;
    *(undefined4 *)&(pFVar12->IsLoop).field_0x18 = (undefined4)uStack_50;
    *(undefined4 *)&(pFVar12->IsLoop).field_0x1c = uStack_50._4_4_;
    *(undefined8 *)&(pFVar12->IsLoop).field_0x20 = local_48;
    *(longlong **)&(pFVar12->IsLoop).field_0x28 = plStack_40;
    local_68 = (code *)lVar5;
    uStack_60 = uVar6;
    local_58 = (undefined **)lVar7;
    uStack_50 = (code *)uVar8;
    local_48 = uVar3;
    plStack_40 = plVar4;
    if (lVar5 != 0) {
      plVar10 = &local_58;
      if (plVar4 != (longlong *)0x0) {
        plVar10 = plVar4;
      }
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  local_d8.Object = pTVar1->Object;
  local_d8.SharedReferenceCount.ReferenceController =
       (this->EmptyCurveSource).SharedReferenceCount.ReferenceController;
  if (local_d8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SetCurveSource(this,&local_d8);
  return;
}

// ClearHover @ 14caf46c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USpaceCurveDeformationMechanic::ClearHover(USpaceCurveDeformationMechanic *this)

{
  this->HoveredPointID = -1;
  return;
}

// ClearSelection @ 14caf4a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USpaceCurveDeformationMechanic::ClearSelection(USpaceCurveDeformationMechanic *this)

{
  ChangeSelection(this,-1,false);
  return;
}

// DeselectPoint @ 14cb012e0

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
USpaceCurveDeformationMechanic::DeselectPoint(USpaceCurveDeformationMechanic *this,int param_1)

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
            ((this->RenderPoints).field0_0x0.DebugPtr,param_1,&this->CurrentPointsColor);
  return true;
}

// GetPrivateStaticClass @ 14cb13030

UClass * __cdecl USpaceCurveDeformationMechanic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpaceCurveDeformationMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"SpaceCurveDeformationMechanic",
               &Z_Registration_Info_UClass_USpaceCurveDeformationMechanic.InnerSingleton,
               StaticRegisterNativesUSpaceCurveDeformationMechanic,0x2e0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<USpaceCurveDeformationMechanic>,
               InternalVTableHelperCtorCaller<USpaceCurveDeformationMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpaceCurveDeformationMechanic.InnerSingleton;
}

// GizmoTransformChanged @ 14cb179c0

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
USpaceCurveDeformationMechanic::GizmoTransformChanged
          (USpaceCurveDeformationMechanic *this,UTransformProxy *param_1,TTransform<double> *param_2
          )

{
  USpaceCurveDeformationMechanicPropertySet *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  bool bVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  TVector<double> *pTVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  double dVar22;
  uint uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  FIdentityFunctor local_res8;
  undefined1 local_res20 [8];
  ForAnyElementType local_3d8;
  int local_3d0 [2];
  ForAnyElementType local_3c8;
  uint local_3c0;
  int local_3bc;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  undefined1 local_388 [16];
  double local_378;
  double local_370;
  double dStack_368;
  double local_360;
  TQuaternion<double>_u_0 TStack_358;
  double local_338;
  TQuaternion<double>_u_0 local_330;
  TVector<double>_u_0 local_310;
  TQuaternion<double>_u_0 local_2f8;
  TVector<double>_u_0 local_2d8;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  TVector<double>_u_0 local_278;
  double local_260;
  double dStack_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  TVector<double>_u_0 local_228;
  TQuaternion<double>_u_0 local_210;
  double local_1f0;
  double dStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  TQuaternion<double> local_1b8;
  TQuaternion<double>_u_0 local_198;
  TQuaternion<double> local_178;
  double local_158;
  double dStack_150;
  double local_148;
  TFrame3<double> local_140;
  TVector<double> local_108;
  TVector<double> local_f0 [7];
  
  if (((this->SelectedPointIDs).ArrayNum != 0) && (this->bGizmoBeingDragged != false)) {
    local_310._s_0.X = (param_2->Translation).XY.m128d_f64[0];
    local_310._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
    local_310._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
    local_2f8._s_0.Z = (param_2->Rotation).ZW.m128d_f64[0];
    local_2f8._s_0.W = (param_2->Rotation).ZW.m128d_f64[1];
    local_2f8._s_0.X = (param_2->Rotation).XY.m128d_f64[0];
    local_2f8._s_0.Y = (param_2->Rotation).XY.m128d_f64[1];
    local_158 = local_310._s_0.X;
    dStack_150 = local_310._s_0.Y;
    local_148 = local_310._s_0.Z;
    UE::Geometry::TFrame3<double>::ToFrame
              (&this->GizmoStartPosition,&local_140,(TFrame3<double> *)&local_310._s_0);
    local_3c0 = (this->SelectedPointIDs).ArrayNum;
    lVar21 = (longlong)(int)local_3c0;
    pFVar25 = (this->SelectedPointIDs).AllocatorInstance.Data;
    local_3c8.Data = (FScriptContainerElement *)0x0;
    if (local_3c0 == 0) {
      local_3bc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_3c0,0,&local_3c8,local_3c0,&local_3bc);
      memcpy(local_3c8.Data,pFVar25,lVar21 << 2);
    }
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              ((int *)local_3c8.Data,local_3c0,local_res8,(TLess<void> *)local_res20);
    uVar20 = local_3c0;
    pUVar1 = (this->TransformProperties).field0_0x0.DebugPtr;
    dVar22 = (double)(longlong)(int)local_3c0;
    local_3d8.Data = (FScriptContainerElement *)0x0;
    local_3d0[0] = 0;
    local_3d0[1] = 0;
    if ((pUVar1->Softness <= 0.0) ||
       ((pUVar1->TransformOrigin == Shared && (pUVar1->TransformMode != PerVertex)))) {
      bVar12 = false;
    }
    else {
      if (((this->SelectedPointIDs).ArrayNum < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_3b8 = (double)CONCAT44(local_3b8._4_4_,
                                   *(undefined4 *)(this->SelectedPointIDs).AllocatorInstance.Data);
      if (((this->TransformProperties).field0_0x0.DebugPtr)->TransformOrigin == Last) {
        iVar14 = (this->SelectedPointIDs).ArrayNum;
        uVar18 = iVar14 - 1;
        uVar26 = 0;
        if ((int)uVar18 < iVar14) {
          uVar26 = ~uVar18 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_3b8 = (double)CONCAT44(local_3b8._4_4_,
                                     *(undefined4 *)
                                      ((this->SelectedPointIDs).AllocatorInstance.Data +
                                      (longlong)(this->SelectedPointIDs).ArrayNum * 4 + -4));
      }
      uVar26 = 0;
      if (local_3d0[0] < (int)uVar20) {
        iVar19 = uVar20 - local_3d0[0];
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (8,8,iVar19,&local_3d8,local_3d0,local_3d0 + 1);
        memset(local_3d8.Data + (longlong)iVar14 * 8,0,(longlong)iVar19 << 3);
      }
      else {
        if ((int)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar20);
        }
        if ((int)uVar20 < local_3d0[0]) {
          uVar18 = local_3d0[0] - uVar20;
          if (((int)(uVar18 | uVar20) < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (uVar18 != 0) {
            iVar14 = (local_3d0[0] - uVar18) - uVar20;
            if (iVar14 != 0) {
              memmove(local_3d8.Data + (longlong)dVar22 * 8,
                      local_3d8.Data + (longlong)dVar22 * 8 + (longlong)(int)uVar18 * 8,
                      (longlong)iVar14 << 3);
            }
            iVar14 = local_3d0[0] - uVar18;
            local_3d0[0] = iVar14;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,&local_3d8,iVar14,local_3d0 + 1);
          }
        }
      }
      if ((local_3d0[0] < 1) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar20 = 1;
      dVar5 = 0.0;
      *(undefined8 *)local_3d8.Data = 0;
      if (1 < (longlong)dVar22) {
        lVar21 = 1;
        local_3b0 = dVar22;
        uVar26 = 0;
        do {
          uVar18 = 0;
          if ((int)(uVar20 - 1) < (int)local_3c0) {
            uVar18 = -uVar20 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar18 = *(uint *)(local_3c8.Data + lVar21 * 4 + -4);
          uVar24 = 0;
          if ((int)uVar18 < (this->CurveStartPositions).ArrayNum) {
            uVar24 = ~uVar18 >> 0x1f;
          }
          if ((uVar24 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar25 = (this->CurveStartPositions).AllocatorInstance.Data +
                    (longlong)(int)uVar18 * 0x38;
          uVar24 = ~uVar20 >> 0x1f;
          uVar18 = 0;
          if ((int)uVar20 < (int)local_3c0) {
            uVar18 = uVar24;
          }
          if ((uVar18 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar18 = *(uint *)(local_3c8.Data + lVar21 * 4);
          uVar23 = 0;
          if ((int)uVar18 < (this->CurveStartPositions).ArrayNum) {
            uVar23 = ~uVar18 >> 0x1f;
          }
          if ((uVar23 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (this->CurveStartPositions).AllocatorInstance.Data;
          lVar17 = (longlong)(int)uVar18 * 0x38;
          uVar18 = 0;
          if ((int)uVar20 < local_3d0[0]) {
            uVar18 = uVar24;
          }
          auVar32._0_8_ =
               (*(double *)(pFVar25 + 0x10) - *(double *)(pFVar2 + lVar17 + 0x10)) *
               (*(double *)(pFVar25 + 0x10) - *(double *)(pFVar2 + lVar17 + 0x10));
          auVar32._8_8_ = 0;
          auVar33._8_8_ = 0;
          auVar33._0_8_ =
               (*(double *)(pFVar25 + 8) - *(double *)(pFVar2 + lVar17 + 8)) *
               (*(double *)(pFVar25 + 8) - *(double *)(pFVar2 + lVar17 + 8)) +
               (*(double *)pFVar25 - *(double *)(pFVar2 + lVar17)) *
               (*(double *)pFVar25 - *(double *)(pFVar2 + lVar17)) + auVar32._0_8_;
          auVar33 = sqrtpd(auVar32,auVar33);
          dVar5 = dVar5 + auVar33._0_8_;
          if ((uVar18 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(double *)(local_3d8.Data + lVar21 * 8) = dVar5;
          uVar18 = 0;
          if ((int)uVar20 < (int)local_3c0) {
            uVar18 = uVar24;
          }
          if ((uVar18 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)(local_3c8.Data + lVar21 * 4) == local_3b8._0_4_) {
            uVar26 = uVar20;
          }
          uVar20 = uVar20 + 1;
          lVar21 = lVar21 + 1;
          dVar22 = local_3b0;
        } while (lVar21 < (longlong)local_3b0);
      }
      uVar20 = 0;
      if ((int)uVar26 < local_3d0[0]) {
        uVar20 = ~uVar26 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar20 = 0;
      uVar40 = 0;
      uVar41 = 0;
      uVar42 = 0;
      uVar43 = 0;
      dVar5 = *(double *)(local_3d8.Data + (longlong)(int)uVar26 * 8);
      if (0 < (longlong)dVar22) {
        lVar21 = 0;
        uVar36 = uVar42;
        uVar37 = uVar43;
        do {
          uVar24 = ~uVar20 >> 0x1f;
          uVar18 = 0;
          if ((int)uVar20 < local_3d0[0]) {
            uVar18 = uVar24;
          }
          if ((uVar18 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          dVar28 = *(double *)(local_3d8.Data + lVar21 * 8);
          uVar18 = 0;
          if ((int)uVar20 < local_3d0[0]) {
            uVar18 = uVar24;
          }
          if ((uVar18 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(double *)(local_3d8.Data + lVar21 * 8) = dVar28 - dVar5;
          uVar18 = 0;
          if ((int)uVar20 < local_3d0[0]) {
            uVar18 = uVar24;
          }
          if ((uVar18 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar20 = uVar20 + 1;
          dVar28 = *(double *)(local_3d8.Data + lVar21 * 8);
          lVar21 = lVar21 + 1;
          uVar42 = SUB84(dVar28,0);
          uVar43 = (int)((ulonglong)dVar28 >> 0x20);
          if (dVar28 <= (double)CONCAT44(uVar37,uVar36)) {
            uVar42 = uVar36;
            uVar43 = uVar37;
          }
          if ((double)CONCAT44(uVar41,uVar40) <= dVar28) {
            dVar28 = (double)CONCAT44(uVar41,uVar40);
          }
          uVar40 = SUB84(dVar28,0);
          uVar41 = (undefined4)((ulonglong)dVar28 >> 0x20);
          uVar36 = uVar42;
          uVar37 = uVar43;
        } while (lVar21 < (longlong)dVar22);
      }
      uVar20 = 0;
      if (0 < (longlong)dVar22) {
        lVar21 = 0;
        do {
          if (lVar21 != (int)uVar26) {
            uVar18 = 0;
            if ((int)uVar20 < local_3d0[0]) {
              uVar18 = ~uVar20 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar36 = uVar42;
            uVar37 = uVar43;
            if (*(double *)(local_3d8.Data + lVar21 * 8) <= 0.0 &&
                *(double *)(local_3d8.Data + lVar21 * 8) != 0.0) {
              uVar36 = uVar40;
              uVar37 = uVar41;
            }
            if (((double)CONCAT44(uVar37,uVar36) == 0.0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Divisor != 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\SpaceCurveDeformationMechanic.cpp"
                                    ,0x14d,L""), bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uVar18 = 0;
            if ((int)uVar20 < local_3d0[0]) {
              uVar18 = ~uVar20 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            *(double *)(local_3d8.Data + lVar21 * 8) =
                 *(double *)(local_3d8.Data + lVar21 * 8) / (double)CONCAT44(uVar37,uVar36);
          }
          uVar20 = uVar20 + 1;
          lVar21 = lVar21 + 1;
        } while (lVar21 < (longlong)dVar22);
      }
      bVar12 = true;
    }
    uVar20 = 0;
    if (0 < (longlong)dVar22) {
      lVar21 = 0;
      uVar42 = SUB84(__real_3ff0000000000000,0);
      uVar43 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      uVar26 = (uint)__xmm_80000000000000008000000000000000;
      uVar18 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      do {
        uVar23 = ~uVar20 >> 0x1f;
        uVar24 = 0;
        if ((int)uVar20 < (int)local_3c0) {
          uVar24 = uVar23;
        }
        if ((uVar24 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar24 = *(uint *)(local_3c8.Data + lVar21 * 4);
        uVar15 = 0;
        if ((int)uVar24 < (this->CurveStartPositions).ArrayNum) {
          uVar15 = ~uVar24 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar25 = (this->CurveStartPositions).AllocatorInstance.Data;
        lVar17 = (longlong)(int)uVar24 * 0x38;
        dVar5 = *(double *)(pFVar25 + lVar17);
        dVar28 = *(double *)(pFVar25 + lVar17 + 8);
        dVar6 = *(double *)(pFVar25 + lVar17 + 0x10);
        TStack_358._s_0.X = (double)*(undefined8 *)(pFVar25 + lVar17 + 0x10 + 8);
        TStack_358._s_0.Y = (double)*(undefined8 *)(pFVar25 + lVar17 + 0x20);
        TStack_358._s_0.Z = (double)*(undefined8 *)(pFVar25 + lVar17 + 0x20 + 8);
        TStack_358._s_0.W = (double)*(undefined8 *)(pFVar25 + lVar17 + 0x30);
        local_370 = dVar5;
        dStack_368 = dVar28;
        local_360 = dVar6;
        if (((this->TransformProperties).field0_0x0.DebugPtr)->TransformMode == PerVertex) {
          UE::Geometry::operator*<double>
                    (&local_1b8,(TQuaternion<double> *)&TStack_358._s_0,&local_140.Rotation);
          pTVar16 = UE::Geometry::operator*<double>
                              (&local_108,(TQuaternion<double> *)&TStack_358._s_0,&local_140.Origin)
          ;
          uStack_240 = local_1b8.field0_0x0._s_0.Y;
          dVar27 = uStack_240;
          local_3a8 = dVar5 + (pTVar16->field0_0x0)._s_0.X;
          local_398 = dVar6 + (pTVar16->field0_0x0)._s_0.Z;
          dStack_3a0 = dVar28 + (pTVar16->field0_0x0)._s_0.Y;
          local_238 = local_1b8.field0_0x0._16_4_;
          uStack_234 = local_1b8.field0_0x0._20_4_;
          uStack_230 = local_1b8.field0_0x0._24_4_;
          uStack_22c = local_1b8.field0_0x0._28_4_;
          uStack_240._0_4_ = SUB84(local_1b8.field0_0x0._s_0.Y,0);
          uStack_240._4_4_ = (undefined4)((ulonglong)local_1b8.field0_0x0._8_8_ >> 0x20);
          local_248._0_4_ = SUB84(local_1b8.field0_0x0._s_0.X,0);
          local_248._4_4_ = (undefined4)((ulonglong)local_1b8.field0_0x0._0_8_ >> 0x20);
          auVar10._4_8_ = dStack_3a0;
          auVar10._0_4_ = uStack_250._4_4_;
          auVar34._0_8_ = auVar10._0_8_ << 0x20;
          auVar34._8_4_ = (undefined4)local_248;
          auVar34._12_4_ = local_248._4_4_;
          dStack_390 = auVar34._8_8_;
          uVar40 = local_1b8.field0_0x0._24_4_;
          uVar41 = local_1b8.field0_0x0._28_4_;
          uVar36 = (undefined4)uStack_240;
          uVar37 = uStack_240._4_4_;
          uVar38 = local_1b8.field0_0x0._16_4_;
          uVar39 = local_1b8.field0_0x0._20_4_;
          local_260 = local_3a8;
          dStack_258 = dStack_3a0;
          uStack_250 = local_398;
          local_248 = dStack_390;
          uStack_240 = dVar27;
        }
        else {
          dVar27 = (this->GizmoStartPosition).Rotation.field0_0x0._s_0.X;
          dVar9 = (this->GizmoStartPosition).Rotation.field0_0x0._s_0.Y;
          dVar7 = (this->GizmoStartPosition).Rotation.field0_0x0._s_0.W;
          dVar8 = (this->GizmoStartPosition).Rotation.field0_0x0._s_0.Z;
          dVar29 = dVar9 * dVar9 + dVar27 * dVar27 + dVar8 * dVar8 + dVar7 * dVar7;
          if (dVar29 <= 0.0) {
            local_330._s_0.X = 0.0;
            local_330._s_0.Y = 0.0;
            local_330._s_0.Z = 0.0;
            local_330._s_0.W = 0.0;
          }
          else {
            dVar29 = (double)CONCAT44(uVar43,uVar42) / dVar29;
            local_330._s_0.X =
                 (double)CONCAT44((uint)((ulonglong)(dVar29 * dVar27) >> 0x20) ^ uVar18,
                                  SUB84(dVar29 * dVar27,0) ^ uVar26);
            local_330._s_0.W = dVar29 * dVar7;
            local_330._s_0.Y =
                 (double)CONCAT44((uint)((ulonglong)(dVar29 * dVar9) >> 0x20) ^ uVar18,
                                  SUB84(dVar29 * dVar9,0) ^ uVar26);
            local_330._s_0.Z =
                 (double)CONCAT44((uint)((ulonglong)(dVar29 * dVar8) >> 0x20) ^ uVar18,
                                  SUB84(dVar29 * dVar8,0) ^ uVar26);
          }
          UE::Geometry::operator*<double>
                    ((TQuaternion<double> *)&local_198._s_0,(TQuaternion<double> *)&local_330._s_0,
                     (TQuaternion<double> *)&TStack_358._s_0);
          local_2d8._s_0.X = dVar5 - (this->GizmoStartPosition).Origin.field0_0x0._s_0.X;
          local_2d8._s_0.Y = dVar28 - (this->GizmoStartPosition).Origin.field0_0x0._s_0.Y;
          local_2d8._s_0.Z = dVar6 - (this->GizmoStartPosition).Origin.field0_0x0._s_0.Z;
          UE::Geometry::TQuaternion<double>::InverseMultiply
                    (&(this->GizmoStartPosition).Rotation,(TVector<double> *)&local_278._s_0,
                     (TVector<double> *)&local_2d8._s_0);
          local_228._s_0.X = local_278._s_0.X;
          local_228._s_0.Y = local_278._s_0.Y;
          local_228._s_0.Z = local_278._s_0.Z;
          local_210._s_0.X = local_198._s_0.X;
          local_210._s_0.Y = local_198._s_0.Y;
          local_210._s_0.Z = local_198._s_0.Z;
          local_210._s_0.W = local_198._s_0.W;
          UE::Geometry::operator*<double>
                    (&local_178,(TQuaternion<double> *)&local_2f8._s_0,
                     (TQuaternion<double> *)&local_210._s_0);
          pTVar16 = UE::Geometry::operator*<double>
                              (local_f0,(TQuaternion<double> *)&local_2f8._s_0,
                               (TVector<double> *)&local_228._s_0);
          local_3a8 = local_310._s_0.X + (pTVar16->field0_0x0)._s_0.X;
          dStack_3a0 = local_310._s_0.Y + (pTVar16->field0_0x0)._s_0.Y;
          local_398 = local_310._s_0.Z + (pTVar16->field0_0x0)._s_0.Z;
          uStack_1d0 = local_178.field0_0x0._s_0.Y;
          dVar27 = uStack_1d0;
          local_1d8._0_4_ = SUB84(local_178.field0_0x0._s_0.X,0);
          local_1d8._4_4_ = (undefined4)((ulonglong)local_178.field0_0x0._0_8_ >> 0x20);
          auVar11._4_8_ = dStack_3a0;
          auVar11._0_4_ = uStack_1e0._4_4_;
          auVar35._0_8_ = auVar11._0_8_ << 0x20;
          auVar35._8_4_ = (undefined4)local_1d8;
          auVar35._12_4_ = local_1d8._4_4_;
          local_1c8 = local_178.field0_0x0._16_4_;
          uStack_1c4 = local_178.field0_0x0._20_4_;
          uStack_1c0 = local_178.field0_0x0._24_4_;
          uStack_1bc = local_178.field0_0x0._28_4_;
          uStack_1d0._0_4_ = SUB84(local_178.field0_0x0._s_0.Y,0);
          uStack_1d0._4_4_ = (undefined4)((ulonglong)local_178.field0_0x0._8_8_ >> 0x20);
          dStack_390 = auVar35._8_8_;
          uVar40 = local_178.field0_0x0._24_4_;
          uVar41 = local_178.field0_0x0._28_4_;
          uVar36 = (undefined4)uStack_1d0;
          uVar37 = uStack_1d0._4_4_;
          uVar38 = local_178.field0_0x0._16_4_;
          uVar39 = local_178.field0_0x0._20_4_;
          local_1f0 = local_3a8;
          dStack_1e8 = dStack_3a0;
          uStack_1e0 = local_398;
          local_1d8 = dStack_390;
          uStack_1d0 = dVar27;
        }
        dVar27 = (double)CONCAT44(uVar39,uVar38);
        local_378 = (double)CONCAT44(uVar41,uVar40);
        dVar9 = (double)CONCAT44(uVar37,uVar36);
        local_388._8_4_ = uVar38;
        local_388._0_8_ = dVar9;
        local_388._12_4_ = uVar39;
        if (bVar12) {
          uVar26 = 0;
          if ((int)uVar20 < local_3d0[0]) {
            uVar26 = uVar23;
          }
          if ((uVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          dVar27 = *(double *)(local_3d8.Data + lVar21 * 8);
          if (((dVar27 < 0.0) ||
              ((double)CONCAT44(uVar43,uVar42) <= dVar27 &&
               dVar27 != (double)CONCAT44(uVar43,uVar42))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("t >= 0 && t <= 1.0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\SpaceCurveDeformationMechanic.cpp"
                                  ,0x16c,L""), bVar13)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pUVar1 = (this->TransformProperties).field0_0x0.DebugPtr;
          dVar27 = dVar27 * (double)pUVar1->Softness;
          if (pUVar1->SoftFalloff == Smooth) {
            local_3b0 = (double)CONCAT44(uVar43,uVar42) - dVar27 * dVar27;
            local_3b0 = local_3b0 * local_3b0 * local_3b0;
          }
          else {
            local_3b0 = (double)CONCAT44(uVar43,uVar42) - dVar27;
          }
          dVar27 = (double)CONCAT44(uVar43,uVar42) - local_3b0;
          local_288 = (double)local_388._8_8_;
          dStack_280 = local_378;
          local_2b8 = TStack_358._s_0.X;
          dStack_2b0 = TStack_358._s_0.Y;
          local_3a8 = dVar5 * dVar27 + local_3a8 * local_3b0;
          local_2a8 = TStack_358._s_0.Z;
          dStack_2a0 = TStack_358._s_0.W;
          dStack_3a0 = dVar28 * dVar27 + dStack_3a0 * local_3b0;
          local_398 = dVar6 * dVar27 + local_398 * local_3b0;
          local_298 = dStack_390;
          dStack_290 = (double)local_388._0_8_;
          dVar27 = SQRT(TStack_358._s_0.Y * TStack_358._s_0.Y +
                        TStack_358._s_0.X * TStack_358._s_0.X +
                        TStack_358._s_0.Z * TStack_358._s_0.Z +
                        TStack_358._s_0.W * TStack_358._s_0.W);
          if (dVar27 <= 0.0) {
            local_3b8 = 0.0;
            dVar27 = 0.0;
            dVar9 = 0.0;
            dVar5 = 0.0;
          }
          else {
            dVar27 = (double)CONCAT44(uVar43,uVar42) / dVar27;
            local_3b8 = TStack_358._s_0.W * dVar27;
            dVar5 = TStack_358._s_0.X * dVar27;
            dVar9 = TStack_358._s_0.Y * dVar27;
            dVar27 = TStack_358._s_0.Z * dVar27;
          }
          dVar28 = SQRT(local_378 * local_378 + (double)local_388._8_8_ * (double)local_388._8_8_ +
                        (double)CONCAT44(uVar37,uVar36) * (double)CONCAT44(uVar37,uVar36) +
                        dStack_390 * dStack_390);
          if (dVar28 <= 0.0) {
            dVar28 = 0.0;
            dVar8 = 0.0;
            dVar7 = 0.0;
            dVar6 = 0.0;
          }
          else {
            dVar28 = (double)CONCAT44(uVar43,uVar42) / dVar28;
            dVar6 = dStack_390 * dVar28;
            dVar7 = (double)local_388._0_8_ * dVar28;
            dVar8 = (double)local_388._8_8_ * dVar28;
            dVar28 = local_378 * dVar28;
          }
          dVar29 = dVar28 * local_3b8 + dVar8 * dVar27 + dVar7 * dVar9 + dVar6 * dVar5;
          if (dVar29 < __real_bfefae147ae147ae) {
            uVar26 = (uint)__xmm_80000000000000008000000000000000;
            uVar18 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
            dVar27 = (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) ^ uVar18,
                                      SUB84(dVar27,0) ^ uVar26);
            dVar5 = (double)CONCAT44((uint)((ulonglong)dVar5 >> 0x20) ^ uVar18,
                                     SUB84(dVar5,0) ^ uVar26);
            local_3b8 = (double)CONCAT44((uint)((ulonglong)local_3b8 >> 0x20) ^ uVar18,
                                         SUB84(local_3b8,0) ^ uVar26);
            dVar9 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) ^ uVar18,
                                     SUB84(dVar9,0) ^ uVar26);
          }
          dVar30 = local_3b8;
          dVar29 = acos(dVar29);
          local_338 = dVar29;
          if (__real_3e45798ee2308c3a <=
              (double)CONCAT44((uint)((ulonglong)dVar29 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar29,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
            dVar30 = sin(dVar29);
            dVar29 = dVar29 * local_3b0;
            dVar30 = __real_3ff0000000000000 / dVar30;
            dVar31 = sin(local_338 - dVar29);
            dVar31 = dVar31 * dVar30;
            dVar29 = sin(dVar29);
            dVar29 = dVar29 * dVar30;
            dVar27 = dVar8 * dVar29 + dVar27 * dVar31;
            dVar5 = dVar6 * dVar29 + dVar5 * dVar31;
            dVar9 = dVar7 * dVar29 + dVar9 * dVar31;
            dVar30 = dVar28 * dVar29 + local_3b8 * dVar31;
          }
          local_378 = SQRT(dVar30 * dVar30 + dVar27 * dVar27 + dVar9 * dVar9 + dVar5 * dVar5);
          if (local_378 <= 0.0) {
            dVar9 = 0.0;
            local_378 = 0.0;
            dVar27 = 0.0;
            dStack_390 = 0.0;
          }
          else {
            local_378 = __real_3ff0000000000000 / local_378;
            dVar9 = dVar9 * local_378;
            dStack_390 = dVar5 * local_378;
            dVar27 = dVar27 * local_378;
            local_378 = dVar30 * local_378;
          }
          uVar42 = SUB84(__real_3ff0000000000000,0);
          uVar43 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        }
        uVar26 = 0;
        if ((int)uVar20 < (int)local_3c0) {
          uVar26 = uVar23;
        }
        if ((uVar26 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar24 = *(uint *)(local_3c8.Data + lVar21 * 4);
        uVar26 = 0;
        if ((int)uVar24 < (this->CurvePoints).ArrayNum) {
          uVar26 = ~uVar24 >> 0x1f;
        }
        if ((uVar26 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar25 = (this->CurvePoints).AllocatorInstance.Data;
        uVar20 = uVar20 + 1;
        lVar21 = lVar21 + 1;
        uVar26 = (uint)__xmm_80000000000000008000000000000000;
        uVar18 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        lVar17 = (longlong)(int)uVar24 * 0x38;
        *(double *)(pFVar25 + lVar17) = local_3a8;
        *(double *)(pFVar25 + lVar17 + 8) = dStack_3a0;
        *(double *)(pFVar25 + lVar17 + 0x10) = local_398;
        *(double *)(pFVar25 + lVar17 + 0x10 + 8) = dStack_390;
        auVar4._8_4_ = SUB84(dVar27,0);
        auVar4._0_8_ = dVar9;
        auVar4._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
        *(undefined1 (*) [16])(pFVar25 + lVar17 + 0x20) = auVar4;
        *(double *)(pFVar25 + lVar17 + 0x30) = local_378;
      } while (lVar21 < (longlong)dVar22);
    }
    this->bRenderGeometryValid = false;
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnPointsChanged);
    if (local_3d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3d8.Data);
    }
    if (local_3c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3c8.Data);
    }
  }
  return;
}

// GizmoTransformEnded @ 14cb19b00

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
USpaceCurveDeformationMechanic::GizmoTransformEnded
          (USpaceCurveDeformationMechanic *this,UTransformProxy *param_1)

{
  undefined8 *puVar1;
  UObject *pUVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *local_res8;
  
  puVar1 = ::operator_new(0x28);
  puVar4 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (((TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_> *)(puVar1 + 1))->
    AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    *puVar1 = &___7FSpaceCurveDeformationMechanicMovementChange__6B_;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_> *)(puVar1 + 1),
               &this->CurveStartPositions);
    TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_> *)(puVar1 + 3),
               &this->CurvePoints);
    puVar4 = puVar1;
  }
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar3 = (**(code **)(*(longlong *)pUVar2 + 0x2d8))(pUVar2);
  local_res8 = puVar4;
  (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x20))
            (lVar3 + 0x28,this,&local_res8,&SpaceCurvePointMovementTransactionText);
  (this->CurveStartPositions).ArrayNum = 0;
  if ((this->CurveStartPositions).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,0,&(this->CurveStartPositions).AllocatorInstance,0,
               &(this->CurveStartPositions).ArrayMax);
  }
  this->bSpatialValid = false;
  this->bGizmoBeingDragged = false;
  return;
}

// GizmoTransformStarted @ 14cb1a4d0

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
USpaceCurveDeformationMechanic::GizmoTransformStarted
          (USpaceCurveDeformationMechanic *this,UTransformProxy *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auStack_e8 [48];
  undefined8 local_b8;
  undefined8 local_a0;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pauVar8 = (undefined1 (*) [16])(**(code **)(param_1->_padding_ + 0x2c0))(param_1,local_78);
  auVar1 = *pauVar8;
  uVar3 = *(undefined4 *)pauVar8[1];
  uVar4 = *(undefined4 *)(pauVar8[1] + 4);
  uVar5 = *(undefined4 *)(pauVar8[1] + 8);
  uVar6 = *(undefined4 *)(pauVar8[1] + 0xc);
  local_b8 = *(undefined8 *)pauVar8[3];
  dVar7 = *(double *)(pauVar8[2] + 8);
  (this->GizmoStartPosition).Origin.field0_0x0._s_0.X = *(double *)pauVar8[2];
  (this->GizmoStartPosition).Origin.field0_0x0._s_0.Y = dVar7;
  local_a0._0_4_ = (undefined4)local_b8;
  local_a0._4_4_ = (undefined4)((ulonglong)local_b8 >> 0x20);
  *(undefined4 *)((longlong)&(this->GizmoStartPosition).Origin.field0_0x0 + 0x10) =
       (undefined4)local_a0;
  *(undefined4 *)((longlong)&(this->GizmoStartPosition).Origin.field0_0x0 + 0x14) = local_a0._4_4_;
  *(int *)&(this->GizmoStartPosition).Rotation.field0_0x0 = auVar1._0_4_;
  *(int *)((longlong)&(this->GizmoStartPosition).Rotation.field0_0x0 + 4) = auVar1._4_4_;
  auVar2._8_4_ = uVar3;
  auVar2._0_8_ = auVar1._8_8_;
  auVar2._12_4_ = uVar4;
  *(undefined1 (*) [16])((longlong)&(this->GizmoStartPosition).Rotation.field0_0x0 + 8) = auVar2;
  *(undefined4 *)((longlong)&(this->GizmoStartPosition).Rotation.field0_0x0 + 0x18) = uVar5;
  *(undefined4 *)((longlong)&(this->GizmoStartPosition).Rotation.field0_0x0 + 0x1c) = uVar6;
  local_a0 = local_b8;
  TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurveStartPositions,&this->CurvePoints);
  this->bGizmoBeingDragged = true;
  return;
}

// HitTest @ 14cb1b970

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
USpaceCurveDeformationMechanic::HitTest
          (USpaceCurveDeformationMechanic *this,FInputDeviceRay *param_1,FInputRayHit *param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  TVector<double>_u_0 local_108;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  void *local_d8;
  TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  local_c8;
  FNearest local_98;
  
  local_c8._0_8_ = *(undefined8 *)&this->GeometrySetToleranceTest;
  local_c8._40_8_ = 0;
  if (local_c8._0_8_ != 0) {
    puVar1 = *(undefined8 **)&(this->GeometrySetToleranceTest).field_0x28;
    puVar5 = (undefined8 *)&(this->GeometrySetToleranceTest).field_0x10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar5 = puVar1;
    }
    (**(code **)*puVar5)(puVar5,&local_c8.field_0x10);
  }
  local_108._s_0.X = (double)*(undefined8 *)&(param_1->WorldRay).Origin.field0_0x0;
  local_108._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  local_108._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  dStack_f0 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  local_e8 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  uStack_e0 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  bVar4 = UE::Geometry::FGeometrySet3::FindNearestPointToRay
                    (&this->GeometrySet,(TRay<double> *)&local_108._s_0,&local_98,&local_c8);
  uVar3 = __real_3ff0000000000000._4_4_;
  uVar2 = (undefined4)__real_3ff0000000000000;
  if (bVar4) {
    local_108._0_1_ = 1;
    uStack_e0 = (double)(((ulonglong)uStack_e0 >> 8 & 0xffffff) << 8);
    local_d8 = (void *)0x0;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    *(undefined4 *)param_2 = local_108._0_4_;
    *(undefined4 *)&param_2->field_0x4 = local_108._4_4_;
    *(int *)&param_2->HitDepth = SUB84(local_98.RayParam,0);
    *(int *)((longlong)&param_2->HitDepth + 4) = (int)((ulonglong)local_98.RayParam >> 0x20);
    (param_2->HitNormal).field0_0x0._s_0.X = 0.0;
    (param_2->HitNormal).field0_0x0._s_0.Y = 0.0;
    *(undefined4 *)((longlong)&(param_2->HitNormal).field0_0x0 + 0x10) = uVar2;
    *(undefined4 *)((longlong)&(param_2->HitNormal).field0_0x0 + 0x14) = uVar3;
    *(undefined4 *)&param_2->bHasHitNormal = (undefined4)uStack_e0;
    param_2->HitIdentifier = uStack_e0._4_4_;
    param_2->HitOwner = local_d8;
    (param_2->HitObject).WeakPtr = local_res8;
    return true;
  }
  return false;
}

// IsHitByClick @ 14cb22380

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
USpaceCurveDeformationMechanic::IsHitByClick
          (USpaceCurveDeformationMechanic *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  HitTest((USpaceCurveDeformationMechanic *)&this[-1].GizmoStartPosition.Rotation,param_1,
          __return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnBeginHover @ 14cb23c40

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
USpaceCurveDeformationMechanic::OnBeginHover
          (USpaceCurveDeformationMechanic *this,FInputDeviceRay *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb23c43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x28))();
  return;
}

// OnClicked @ 14cb25f60

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
USpaceCurveDeformationMechanic::OnClicked
          (USpaceCurveDeformationMechanic *this,FInputDeviceRay *param_1)

{
  float *pfVar1;
  bool bVar2;
  UObject *pUVar3;
  longlong lVar4;
  float *pfVar5;
  double local_b8 [2];
  undefined1 local_a8 [24];
  undefined8 local_90;
  TVector<double>_u_0 local_88;
  double dStack_70;
  double local_68;
  double dStack_60;
  FNearest local_58;
  
  local_b8[0] = (this->CameraState).Orientation.Z;
  local_90 = 0;
  if (local_b8[0] != 0.0) {
    pfVar1 = *(float **)&(this->CameraState).field_0x58;
    pfVar5 = &(this->CameraState).HorizontalFOVDegrees;
    if (pfVar1 != (float *)0x0) {
      pfVar5 = pfVar1;
    }
    (*(code *)**(undefined8 **)pfVar5)(pfVar5,local_a8);
  }
  local_88._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  local_88._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  local_88._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  dStack_70 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  local_68 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  dStack_60 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  bVar2 = UE::Geometry::FGeometrySet3::FindNearestPointToRay
                    ((FGeometrySet3 *)&this->CurveSource,(TRay<double> *)&local_88._s_0,&local_58,
                     (TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                      *)local_b8);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x2d8);
    lVar4 = (**(code **)(*(longlong *)pUVar3 + 0x2d8))(pUVar3);
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))
              (lVar4 + 0x28,&SpaceCurvePointSelectionTransactionText);
    ChangeSelection((USpaceCurveDeformationMechanic *)&this[-1].GizmoStartPosition.Rotation,
                    local_58.ID,*(bool *)&(this->RenderSegments).field0_0x0);
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x2d8);
    lVar4 = (**(code **)(*(longlong *)pUVar3 + 0x2d8))(pUVar3);
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
  }
  return;
}

// OnEndHover @ 14cb27960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USpaceCurveDeformationMechanic::OnEndHover(USpaceCurveDeformationMechanic *this)

{
  *(undefined4 *)&(this->CameraState).field_0x58 = 0xffffffff;
  return;
}

// OnUpdateHover @ 14cb28600

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
USpaceCurveDeformationMechanic::OnUpdateHover
          (USpaceCurveDeformationMechanic *this,FInputDeviceRay *param_1)

{
  double *pdVar1;
  bool bVar2;
  double *pdVar3;
  double local_b8 [2];
  undefined1 local_a8 [24];
  undefined8 local_90;
  TVector<double>_u_0 local_88;
  double dStack_70;
  double local_68;
  double dStack_60;
  FNearest local_58;
  
  local_b8[0] = (this->CameraState).Orientation.Y;
  local_90 = 0;
  if (local_b8[0] != 0.0) {
    pdVar1 = (double *)(this->CameraState).DPIScale;
    pdVar3 = &(this->CameraState).Orientation.W;
    if (pdVar1 != (double *)0x0) {
      pdVar3 = pdVar1;
    }
    (**(code **)*pdVar3)(pdVar3,local_a8);
  }
  local_88._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  local_88._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  local_88._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  dStack_70 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  local_68 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  dStack_60 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  bVar2 = UE::Geometry::FGeometrySet3::FindNearestPointToRay
                    ((FGeometrySet3 *)&this->TransformProperties,(TRay<double> *)&local_88._s_0,
                     &local_58,
                     (TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                      *)local_b8);
  if (bVar2) {
    *(int *)&(this->CameraState).field_0x58 = local_58.ID;
  }
  return bVar2;
}

// OnUpdateModifierState @ 14cb28800

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
USpaceCurveDeformationMechanic::OnUpdateModifierState
          (USpaceCurveDeformationMechanic *this,int param_1,bool param_2)

{
  if (param_1 == *(int *)((longlong)&(this->RenderSegments).field0_0x0 + 4)) {
    *(bool *)&(this->RenderSegments).field0_0x0 = param_2;
  }
  return;
}

// OnUpdateModifierState`adjustor{8}' @ 14cb28818

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
   USpaceCurveDeformationMechanic::OnUpdateModifierState`adjustor{8}' (int,bool) __ptr64 */

void __thiscall
USpaceCurveDeformationMechanic::OnUpdateModifierState_adjustor_8__
          (USpaceCurveDeformationMechanic *this,int param_1,bool param_2)

{
  OnUpdateModifierState((USpaceCurveDeformationMechanic *)&this[-1].field_0x2d8,param_1,param_2);
  return;
}

// Render @ 14cb30ce0

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
USpaceCurveDeformationMechanic::Render
          (USpaceCurveDeformationMechanic *this,IToolsContextRenderAPI *param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined4 uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  longlong local_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  FToolDataVisualizer local_1b8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_208;
  if ((-1 < this->HoveredPointID) && (this->HoveredPointID < (this->CurvePoints).ArrayNum)) {
    FToolDataVisualizer::FToolDataVisualizer(&local_1b8);
    FToolDataVisualizer::BeginFrame(&local_1b8,param_1);
    uVar3 = this->HoveredPointID;
    iVar4 = (this->CurvePoints).ArrayNum;
    fVar2 = this->PointsSize;
    uVar12 = 0;
    if ((int)uVar3 < iVar4) {
      uVar12 = ~uVar3 >> 0x1f;
    }
    if (uVar12 == 0) {
      local_1e8 = (longlong)(int)uVar3;
      local_1e0 = (longlong)iVar4;
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
    pFVar5 = (this->CurvePoints).AllocatorInstance.Data;
    dVar21 = local_1b8.TotalTransform.Rotation.XY.m128d_f64[1];
    lVar13 = (longlong)(int)uVar3 * 0x38;
    dVar9 = local_1b8.TotalTransform.Rotation.ZW.m128d_f64[0];
    auVar23 = blendpd((undefined1  [16])local_1b8.TotalTransform.Rotation.XY.m128d_f64,
                      (undefined1  [16])local_1b8.TotalTransform.Rotation.ZW.m128d_f64,2);
    dVar10 = local_1b8.TotalTransform.Rotation.ZW.m128d_f64[1];
    local_1e8 = local_1e8 & 0xffffffffffffff00;
    pFVar1 = pFVar5 + lVar13;
    local_1b8.TotalTransform.Scale3D.ZW.m128d_f64[0] =
         *(double *)(pFVar5 + lVar13 + 0x10) * local_1b8.TotalTransform.Scale3D.ZW.m128d_f64[0];
    local_1b8.TotalTransform.Scale3D.ZW.m128d_f64[1] =
         local_1b8.TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
    local_1b8.TotalTransform.Scale3D.XY.m128d_f64[0] =
         local_1b8.TotalTransform.Scale3D.XY.m128d_f64[0] * *(double *)pFVar1;
    local_1b8.TotalTransform.Scale3D.XY.m128d_f64[1] =
         local_1b8.TotalTransform.Scale3D.XY.m128d_f64[1] * *(double *)(pFVar1 + 8);
    uVar22 = (undefined4)((ulonglong)local_1b8.TotalTransform.Scale3D.XY.m128d_f64[1] >> 0x20);
    auVar24._8_4_ = SUB84(local_1b8.TotalTransform.Scale3D.XY.m128d_f64[1],0);
    auVar24._0_8_ = local_1b8.TotalTransform.Scale3D.XY.m128d_f64[0];
    auVar24._12_4_ = uVar22;
    auVar14._8_4_ = SUB84(local_1b8.TotalTransform.Scale3D.XY.m128d_f64[1],0);
    auVar14._0_8_ = local_1b8.TotalTransform.Scale3D.XY.m128d_f64[0];
    auVar14._12_4_ = uVar22;
    auVar15._8_4_ = SUB84(local_1b8.TotalTransform.Scale3D.ZW.m128d_f64[1],0);
    auVar15._0_8_ = local_1b8.TotalTransform.Scale3D.ZW.m128d_f64[0];
    auVar15._12_4_ = (int)((ulonglong)local_1b8.TotalTransform.Scale3D.ZW.m128d_f64[1] >> 0x20);
    auVar15 = blendpd(auVar14,auVar15,2);
    auVar25._0_8_ =
         auVar24._8_8_ * local_1b8.TotalTransform.Rotation.XY.m128d_f64[0] -
         dVar21 * local_1b8.TotalTransform.Scale3D.XY.m128d_f64[0];
    auVar25._8_8_ =
         local_1b8.TotalTransform.Scale3D.ZW.m128d_f64[0] * dVar21 -
         dVar9 * local_1b8.TotalTransform.Scale3D.XY.m128d_f64[1];
    auVar16._0_8_ =
         auVar15._0_8_ * dVar9 - auVar23._0_8_ * local_1b8.TotalTransform.Scale3D.ZW.m128d_f64[0];
    auVar16._8_8_ =
         auVar15._8_8_ * dVar10 - auVar23._8_8_ * local_1b8.TotalTransform.Scale3D.ZW.m128d_f64[1];
    auVar15 = blendpd(auVar25,auVar16,2);
    dVar7 = auVar25._8_8_ + auVar25._8_8_;
    dVar8 = auVar16._0_8_ + auVar16._0_8_;
    uVar22 = (undefined4)((ulonglong)dVar8 >> 0x20);
    auVar26._0_8_ = auVar15._0_8_ + auVar15._0_8_;
    auVar26._8_8_ = auVar15._8_8_ + auVar15._8_8_;
    auVar19._8_4_ = SUB84(dVar8,0);
    auVar19._0_8_ = dVar7;
    auVar19._12_4_ = uVar22;
    auVar17._8_4_ = SUB84(dVar8,0);
    auVar17._0_8_ = dVar7;
    auVar17._12_4_ = uVar22;
    auVar15 = blendpd(auVar17,auVar26,2);
    auVar20._0_8_ =
         auVar19._8_8_ * local_1b8.TotalTransform.Rotation.XY.m128d_f64[0] - dVar7 * dVar21;
    auVar20._8_8_ = auVar26._0_8_ * dVar21 - dVar8 * dVar9;
    auVar18._0_8_ = auVar15._0_8_ * dVar9 - auVar26._0_8_ * auVar23._0_8_;
    auVar18._8_8_ = auVar15._8_8_ * dVar10 - auVar26._8_8_ * auVar23._8_8_;
    auVar15 = blendpd(auVar20,auVar18,2);
    local_1b8.TotalTransform.Translation.XY.m128d_f64[1] =
         dVar8 * dVar10 + local_1b8.TotalTransform.Scale3D.XY.m128d_f64[1] + auVar18._0_8_ +
         local_1b8.TotalTransform.Translation.XY.m128d_f64[1];
    local_1c8 = auVar26._0_8_ * dVar10 + local_1b8.TotalTransform.Scale3D.ZW.m128d_f64[0] +
                auVar15._0_8_ + local_1b8.TotalTransform.Translation.ZW.m128d_f64[0];
    local_1d8._8_4_ = SUB84(local_1b8.TotalTransform.Translation.XY.m128d_f64[1],0);
    local_1d8._0_8_ =
         dVar7 * dVar10 + local_1b8.TotalTransform.Scale3D.XY.m128d_f64[0] + auVar20._8_8_ +
         local_1b8.TotalTransform.Translation.XY.m128d_f64[0];
    local_1d8._12_4_ =
         (int)((ulonglong)local_1b8.TotalTransform.Translation.XY.m128d_f64[1] >> 0x20);
    (**(code **)(local_1b8._padding_ + 0x18))
              (&local_1b8,local_1d8,&FLinearColor::White,fVar2 + fVar2);
    FToolDataVisualizer::EndFrame(&local_1b8);
    FToolDataVisualizer::~FToolDataVisualizer(&local_1b8);
  }
  return;
}

// SelectPoint @ 14cb33350

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
USpaceCurveDeformationMechanic::SelectPoint(USpaceCurveDeformationMechanic *this,int param_1)

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
            ((this->RenderPoints).field0_0x0.DebugPtr,local_res10[0],&this->SelectedColor);
  return;
}

// SelectionClear @ 14cb33460

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USpaceCurveDeformationMechanic::SelectionClear(USpaceCurveDeformationMechanic *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  UObject *pUVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *local_res8;
  TArray<int,TSizedDefaultAllocator<32>_> local_38;
  
  if (((this->CurvePoints).ArrayNum != 0) && ((this->SelectedPointIDs).ArrayNum != 0)) {
    local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = 0;
    local_38.ArrayMax = 0;
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    lVar5 = (**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
    pcVar3 = *(code **)(*(longlong *)(lVar5 + 0x28) + 0x20);
    puVar6 = ::operator_new(0x28);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)(puVar6 + 3);
      *puVar6 = &___7FSpaceCurveDeformationMechanicSelectionChange__6B_;
      piVar2 = (int *)((longlong)puVar6 + 0x24);
      (((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar6 + 1))->AllocatorInstance).Data =
           (FScriptContainerElement *)0x0;
      *piVar2 = 0;
      puVar6[2] = 0;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(puVar6 + 4) = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar6 + 1),&this->SelectedPointIDs);
      if (pTVar1 != &local_38) {
        *(undefined4 *)(puVar6 + 4) = 0;
        if (*piVar2 == 0) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,*piVar2,(ForAnyElementType *)pTVar1,0,piVar2);
        }
      }
    }
    local_res8 = puVar6;
    (*pcVar3)(lVar5 + 0x28,this,&local_res8,&SpaceCurvePointSelectionTransactionText);
    UpdateSelection(this,&local_38);
  }
  return;
}

// SelectionFill @ 14cb335d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USpaceCurveDeformationMechanic::SelectionFill(USpaceCurveDeformationMechanic *this)

{
  int *piVar1;
  ESpaceCurveControlPointOriginMode EVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  UObject *pUVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  code *pcVar18;
  int iVar19;
  ulonglong local_res8;
  code *local_res10;
  undefined8 *local_res18;
  int local_58 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  
  if ((this->CurvePoints).ArrayNum != 0) {
    pFVar7 = (this->SelectedPointIDs).AllocatorInstance.Data;
    local_50.ArrayNum = (this->SelectedPointIDs).ArrayNum;
    lVar16 = (longlong)local_50.ArrayNum;
    iVar19 = 0;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_50.ArrayNum == 0) {
      local_50.ArrayMax = 0;
      iVar6 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_50.ArrayNum,0,&local_50.AllocatorInstance,local_50.ArrayNum,
                 &local_50.ArrayMax);
      memcpy(local_50.AllocatorInstance.Data,pFVar7,lVar16 << 2);
      iVar6 = local_50.ArrayNum;
    }
    if (iVar6 < 2) {
      SelectionGrowToEnd(this);
      FVar15.Data = local_50.AllocatorInstance.Data;
    }
    else {
      iVar11 = -0x7fffffff;
      local_res10 = (code *)CONCAT44(local_res10._4_4_,0x80000001);
      pFVar7 = local_50.AllocatorInstance.Data + (longlong)iVar6 * 4;
      FVar15.Data = local_50.AllocatorInstance.Data;
      iVar13 = 0x7fffffff;
      iVar5 = iVar6;
      while( true ) {
        iVar12 = iVar11;
        if (iVar5 != iVar6) {
          local_res8 = local_res8 & 0xffffffffffffff00;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_res8);
          iVar12 = (int)local_res10;
          iVar5 = local_50.ArrayNum;
        }
        if (FVar15.Data == pFVar7) break;
        iVar11 = *(int *)FVar15.Data;
        FVar15.Data = FVar15.Data + 4;
        iVar4 = iVar11;
        if (iVar13 <= iVar11) {
          iVar4 = iVar13;
        }
        if (iVar11 <= iVar12) {
          iVar11 = iVar12;
        }
        local_res10 = (code *)CONCAT44(local_res10._4_4_,iVar11);
        iVar13 = iVar4;
      }
      EVar2 = ((this->TransformProperties).field0_0x0.DebugPtr)->TransformOrigin;
      FVar15.Data = local_50.AllocatorInstance.Data;
      local_58[0] = iVar13;
      if (iVar13 < iVar12) {
        do {
          if (EVar2 == Last) {
            for (pFVar7 = FVar15.Data; pFVar7 != FVar15.Data + (longlong)iVar5 * 4;
                pFVar7 = pFVar7 + 4) {
              if (*(int *)pFVar7 == local_58[0]) goto LAB_14cb337e4;
            }
            if (((FVar15.Data <= (FScriptContainerElement *)local_58) &&
                ((FScriptContainerElement *)local_58 < FVar15.Data + (longlong)local_50.ArrayMax * 4
                )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), FVar15.Data = local_50.AllocatorInstance.Data,
                      iVar5 = local_50.ArrayNum, bVar3)) {
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            if (iVar5 == local_50.ArrayMax) {
              iVar5 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_50.AllocatorInstance,&local_50.ArrayMax);
              FVar15.Data = local_50.AllocatorInstance.Data;
            }
            local_50.ArrayNum = iVar5 + 1;
            memmove(FVar15.Data + 4,FVar15.Data,(longlong)iVar5 << 2);
            *(int *)local_50.AllocatorInstance.Data = local_58[0];
          }
          else {
            TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>(&local_50,local_58);
          }
          FVar15.Data = local_50.AllocatorInstance.Data;
          iVar12 = (int)local_res10;
          iVar5 = local_50.ArrayNum;
LAB_14cb337e4:
          local_58[0] = local_58[0] + 1;
        } while (local_58[0] < iVar12);
      }
      if ((iVar5 != (this->SelectedPointIDs).ArrayNum) ||
         ((iVar5 != 0 &&
          (iVar6 = memcmp(FVar15.Data,(this->SelectedPointIDs).AllocatorInstance.Data,
                          (longlong)iVar5 << 2), iVar6 != 0)))) {
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
        lVar16 = (**(code **)(*(longlong *)pUVar8 + 0x2d8))(pUVar8);
        uVar14 = lVar16 + 0x28;
        pcVar18 = *(code **)(*(longlong *)(lVar16 + 0x28) + 0x20);
        local_res8 = uVar14;
        local_res10 = pcVar18;
        puVar9 = ::operator_new(0x28);
        if (puVar9 == (undefined8 *)0x0) {
          puVar9 = (undefined8 *)0x0;
        }
        else {
          pTVar17 = (TArray<int,TSizedDefaultAllocator<32>_> *)(puVar9 + 3);
          puVar9[1] = 0;
          *(undefined4 *)((longlong)puVar9 + 0x24) = 0;
          puVar9[2] = 0;
          piVar1 = (int *)((longlong)puVar9 + 0x24);
          *puVar9 = &___7FSpaceCurveDeformationMechanicSelectionChange__6B_;
          (pTVar17->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
          *(undefined4 *)(puVar9 + 4) = 0;
          TArray<int,TSizedDefaultAllocator<32>_>::operator=
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar9 + 1),&this->SelectedPointIDs
                    );
          iVar6 = local_50.ArrayNum;
          FVar15.Data = local_50.AllocatorInstance.Data;
          if (pTVar17 != &local_50) {
            lVar16 = (longlong)local_50.ArrayNum;
            *(int *)(puVar9 + 4) = local_50.ArrayNum;
            if ((local_50.ArrayNum == 0) && (*piVar1 == 0)) {
              *piVar1 = 0;
              uVar14 = local_res8;
              pcVar18 = local_res10;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_50.ArrayNum,*piVar1,(ForAnyElementType *)pTVar17,
                         local_50.ArrayNum,piVar1);
              uVar14 = local_res8;
              pcVar18 = local_res10;
              if (iVar6 != 0) {
                memcpy((pTVar17->AllocatorInstance).Data,FVar15.Data,lVar16 << 2);
                uVar14 = local_res8;
                pcVar18 = local_res10;
              }
            }
          }
        }
        pTVar17 = &this->SelectedPointIDs;
        local_res18 = puVar9;
        (*pcVar18)(uVar14,this,&local_res18,&SpaceCurvePointSelectionTransactionText);
        iVar6 = local_50.ArrayNum;
        FVar15.Data = local_50.AllocatorInstance.Data;
        if (pTVar17 != &local_50) {
          lVar16 = (longlong)local_50.ArrayNum;
          piVar1 = &(this->SelectedPointIDs).ArrayMax;
          (this->SelectedPointIDs).ArrayNum = local_50.ArrayNum;
          if ((local_50.ArrayNum == 0) && (*piVar1 == 0)) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,local_50.ArrayNum,*piVar1,&pTVar17->AllocatorInstance,local_50.ArrayNum,
                       piVar1);
            if (iVar6 != 0) {
              memcpy((pTVar17->AllocatorInstance).Data,FVar15.Data,lVar16 << 2);
            }
          }
        }
        if (0 < (this->CurvePoints).ArrayNum) {
          do {
            pFVar10 = (this->SelectedPointIDs).AllocatorInstance.Data;
            pFVar7 = pFVar10 + (longlong)(this->SelectedPointIDs).ArrayNum * 4;
            for (; pFVar10 != pFVar7; pFVar10 = pFVar10 + 4) {
              if (*(int *)pFVar10 == iVar19) {
                bVar3 = true;
                goto LAB_14cb339cb;
              }
            }
            bVar3 = false;
LAB_14cb339cb:
            lVar16 = 0x1ac;
            if (!bVar3) {
              lVar16 = 0x194;
            }
            UPointSetComponent::SetPointColor
                      ((this->RenderPoints).field0_0x0.DebugPtr,iVar19,
                       (FColor *)(&this->field_0x0 + lVar16));
            iVar19 = iVar19 + 1;
          } while (iVar19 < (this->CurvePoints).ArrayNum);
        }
        UpdateGizmoLocation(this);
        FVar15.Data = local_50.AllocatorInstance.Data;
      }
    }
    if (FVar15.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar15.Data);
    }
  }
  return;
}

// SelectionGrowToEnd @ 14cb33a50

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
USpaceCurveDeformationMechanic::SelectionGrowToEnd(USpaceCurveDeformationMechanic *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  UObject *pUVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong lVar13;
  ForAnyElementType FVar14;
  longlong lVar15;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  uint local_58 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  
  if ((this->CurvePoints).ArrayNum == 0) {
    return;
  }
  pFVar8 = (this->SelectedPointIDs).AllocatorInstance.Data;
  local_50.ArrayNum = (this->SelectedPointIDs).ArrayNum;
  lVar15 = (longlong)local_50.ArrayNum;
  uVar11 = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_50.ArrayNum == 0) {
    local_50.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_50.ArrayNum,0,&local_50.AllocatorInstance,local_50.ArrayNum,
               &local_50.ArrayMax);
    memcpy(local_50.AllocatorInstance.Data,pFVar8,lVar15 << 2);
  }
  if (local_50.ArrayNum == (this->CurvePoints).ArrayNum) {
    if ((local_50.ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar14.Data = local_50.AllocatorInstance.Data;
    if (*(uint *)local_50.AllocatorInstance.Data == 0) goto LAB_14cb33e37;
    iVar7 = local_50.ArrayNum;
    if (0 < local_50.ArrayNum / 2) {
      pFVar8 = local_50.AllocatorInstance.Data + (longlong)(local_50.ArrayNum + -1) * 4;
      do {
        uVar3 = *(undefined4 *)(local_50.AllocatorInstance.Data + uVar11 * 4);
        *(undefined4 *)(local_50.AllocatorInstance.Data + uVar11 * 4) = *(undefined4 *)pFVar8;
        uVar11 = uVar11 + 1;
        *(undefined4 *)pFVar8 = uVar3;
        pFVar8 = pFVar8 + -4;
      } while ((longlong)uVar11 < (longlong)(local_50.ArrayNum / 2));
    }
  }
  else {
    local_res8 = SUB81(this,0);
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              ((int *)local_50.AllocatorInstance.Data,local_50.ArrayNum,local_res8,
               (TLess<void> *)local_res10);
    if (0 < local_50.ArrayNum) {
      uVar12 = (this->CurvePoints).ArrayNum - 1;
      uVar6 = 0;
      if ((int)(local_50.ArrayNum - 1U) < local_50.ArrayNum) {
        uVar6 = ~(local_50.ArrayNum - 1U) >> 0x1f;
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
      if ((int)(*(int *)(local_50.AllocatorInstance.Data + (longlong)(local_50.ArrayNum + -1) * 4) +
               1U) < (int)uVar12) {
        uVar12 = *(int *)(local_50.AllocatorInstance.Data + (longlong)(local_50.ArrayNum + -1) * 4)
                 + 1U;
      }
      uVar11 = (ulonglong)uVar12;
    }
    local_58[0] = (uint)uVar11;
    FVar14.Data = local_50.AllocatorInstance.Data;
    iVar7 = local_50.ArrayNum;
    if ((int)local_58[0] < (this->CurvePoints).ArrayNum) {
      do {
        uVar12 = (uint)uVar11;
        for (pFVar8 = FVar14.Data; pFVar8 != FVar14.Data + (longlong)iVar7 * 4; pFVar8 = pFVar8 + 4)
        {
          if (*(uint *)pFVar8 == uVar12) goto LAB_14cb33cf2;
        }
        if (((FVar14.Data <= (FScriptContainerElement *)local_58) &&
            ((FScriptContainerElement *)local_58 < FVar14.Data + (longlong)local_50.ArrayMax * 4))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), FVar14.Data = local_50.AllocatorInstance.Data,
              iVar7 = local_50.ArrayNum, uVar12 = local_58[0], bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (iVar7 == local_50.ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_50.AllocatorInstance,&local_50.ArrayMax);
          FVar14.Data = local_50.AllocatorInstance.Data;
          uVar12 = local_58[0];
        }
        local_50.ArrayNum = iVar7 + 1;
        *(uint *)(FVar14.Data + (longlong)iVar7 * 4) = uVar12;
        FVar14.Data = local_50.AllocatorInstance.Data;
        uVar12 = local_58[0];
        iVar7 = local_50.ArrayNum;
LAB_14cb33cf2:
        local_58[0] = uVar12 + 1;
        uVar11 = (ulonglong)local_58[0];
      } while ((int)local_58[0] < (this->CurvePoints).ArrayNum);
    }
  }
  if ((iVar7 != (this->SelectedPointIDs).ArrayNum) ||
     ((iVar7 != 0 &&
      (iVar7 = memcmp(FVar14.Data,(this->SelectedPointIDs).AllocatorInstance.Data,
                      (longlong)iVar7 << 2), iVar7 != 0)))) {
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    lVar15 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
    pcVar4 = *(code **)(*(longlong *)(lVar15 + 0x28) + 0x20);
    puVar10 = ::operator_new(0x28);
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)(puVar10 + 3);
      *puVar10 = &___7FSpaceCurveDeformationMechanicSelectionChange__6B_;
      piVar2 = (int *)((longlong)puVar10 + 0x24);
      (((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar10 + 1))->AllocatorInstance).Data =
           (FScriptContainerElement *)0x0;
      puVar10[2] = 0;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(puVar10 + 4) = 0;
      *piVar2 = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar10 + 1),&this->SelectedPointIDs);
      iVar7 = local_50.ArrayNum;
      FVar14.Data = local_50.AllocatorInstance.Data;
      if (pTVar1 != &local_50) {
        lVar13 = (longlong)local_50.ArrayNum;
        *(int *)(puVar10 + 4) = local_50.ArrayNum;
        if ((local_50.ArrayNum == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_50.ArrayNum,*piVar2,(ForAnyElementType *)pTVar1,local_50.ArrayNum,
                     piVar2);
          if (iVar7 != 0) {
            memcpy((pTVar1->AllocatorInstance).Data,FVar14.Data,lVar13 << 2);
          }
        }
      }
    }
    local_res18 = puVar10;
    (*pcVar4)(lVar15 + 0x28,this,&local_res18,&SpaceCurvePointSelectionTransactionText);
    UpdateSelection(this,&local_50);
    FVar14.Data = local_50.AllocatorInstance.Data;
  }
LAB_14cb33e37:
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
  return;
}

// SelectionGrowToNext @ 14cb33e80

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
USpaceCurveDeformationMechanic::SelectionGrowToNext(USpaceCurveDeformationMechanic *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Src;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  undefined8 *puVar6;
  ForAnyElementType FVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  code *pcVar11;
  code *local_res8;
  undefined8 *local_res10;
  int local_58 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  
  if ((this->CurvePoints).ArrayNum != 0) {
    local_50.ArrayNum = (this->SelectedPointIDs).ArrayNum;
    lVar9 = (longlong)local_50.ArrayNum;
    _Src = (this->SelectedPointIDs).AllocatorInstance.Data;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_50.ArrayNum == 0) {
      local_50.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_50.ArrayNum,0,&local_50.AllocatorInstance,local_50.ArrayNum,
                 &local_50.ArrayMax);
      memcpy(local_50.AllocatorInstance.Data,_Src,lVar9 << 2);
    }
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              ((int *)local_50.AllocatorInstance.Data,local_50.ArrayNum,local_res8._0_1_,
               (TLess<void> *)&local_res8);
    local_58[0] = 0;
    if (0 < local_50.ArrayNum) {
      iVar8 = (this->CurvePoints).ArrayNum + -1;
      uVar4 = 0;
      if ((int)(local_50.ArrayNum - 1U) < local_50.ArrayNum) {
        uVar4 = ~(local_50.ArrayNum - 1U) >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_58[0] = iVar8;
      if (*(int *)(local_50.AllocatorInstance.Data + (longlong)(local_50.ArrayNum + -1) * 4) + 1 <
          iVar8) {
        local_58[0] = *(int *)(local_50.AllocatorInstance.Data +
                              (longlong)(local_50.ArrayNum + -1) * 4) + 1;
      }
      for (FVar7.Data = local_50.AllocatorInstance.Data;
          FVar7.Data != local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 4;
          FVar7.Data = FVar7.Data + 4) {
        if (*(int *)FVar7.Data == local_58[0]) goto LAB_14cb34188;
      }
    }
    if (((local_50.AllocatorInstance.Data <= (FScriptContainerElement *)local_58) &&
        ((FScriptContainerElement *)local_58 <
         local_50.AllocatorInstance.Data + (longlong)local_50.ArrayMax * 4)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if (local_50.ArrayNum == local_50.ArrayMax) {
      local_50.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_50.AllocatorInstance,&local_50.ArrayMax);
    }
    *(int *)(local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 4) = local_58[0];
    local_50.ArrayNum = local_50.ArrayNum + 1;
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    lVar9 = (**(code **)(*(longlong *)pUVar5 + 0x2d8))(pUVar5);
    pcVar11 = *(code **)(*(longlong *)(lVar9 + 0x28) + 0x20);
    local_res8 = pcVar11;
    puVar6 = ::operator_new(0x28);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6[3] = 0;
      pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)(puVar6 + 3);
      (((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar6 + 1))->AllocatorInstance).Data =
           (FScriptContainerElement *)0x0;
      puVar6[2] = 0;
      *(undefined4 *)(puVar6 + 4) = 0;
      piVar2 = (int *)((longlong)puVar6 + 0x24);
      *puVar6 = &___7FSpaceCurveDeformationMechanicSelectionChange__6B_;
      *piVar2 = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar6 + 1),&this->SelectedPointIDs);
      iVar8 = local_50.ArrayNum;
      FVar7.Data = local_50.AllocatorInstance.Data;
      if (pTVar1 != &local_50) {
        lVar10 = (longlong)local_50.ArrayNum;
        *(int *)(puVar6 + 4) = local_50.ArrayNum;
        if ((local_50.ArrayNum == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
          pcVar11 = local_res8;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_50.ArrayNum,*piVar2,(ForAnyElementType *)pTVar1,local_50.ArrayNum,
                     piVar2);
          pcVar11 = local_res8;
          if (iVar8 != 0) {
            memcpy((pTVar1->AllocatorInstance).Data,FVar7.Data,lVar10 << 2);
            pcVar11 = local_res8;
          }
        }
      }
    }
    local_res10 = puVar6;
    (*pcVar11)(lVar9 + 0x28,this,&local_res10,&SpaceCurvePointSelectionTransactionText);
    UpdateSelection(this,&local_50);
LAB_14cb34188:
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
  }
  return;
}

// SelectionGrowToPrev @ 14cb341d0

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
USpaceCurveDeformationMechanic::SelectionGrowToPrev(USpaceCurveDeformationMechanic *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Src;
  ForAnyElementType FVar3;
  int iVar4;
  bool bVar5;
  UObject *pUVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  code *local_res8;
  undefined8 *local_res10;
  int local_58 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  
  if ((this->CurvePoints).ArrayNum != 0) {
    local_50.ArrayNum = (this->SelectedPointIDs).ArrayNum;
    lVar8 = (longlong)local_50.ArrayNum;
    _Src = (this->SelectedPointIDs).AllocatorInstance.Data;
    local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_50.ArrayNum == 0) {
      local_50.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_50.ArrayNum,0,&local_50.AllocatorInstance,local_50.ArrayNum,
                 &local_50.ArrayMax);
      memcpy(local_50.AllocatorInstance.Data,_Src,lVar8 << 2);
    }
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              ((int *)local_50.AllocatorInstance.Data,local_50.ArrayNum,local_res8._0_1_,
               (TLess<void> *)&local_res8);
    local_58[0] = (this->CurvePoints).ArrayNum + -1;
    if (0 < local_50.ArrayNum) {
      FVar3.Data = local_50.AllocatorInstance.Data;
      local_58[0] = 0;
      if (0 < *(int *)local_50.AllocatorInstance.Data + -1) {
        local_58[0] = *(int *)local_50.AllocatorInstance.Data + -1;
      }
      for (; FVar3.Data != local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 4;
          FVar3.Data = FVar3.Data + 4) {
        if (*(int *)FVar3.Data == local_58[0]) goto LAB_14cb34479;
      }
    }
    if (((local_50.AllocatorInstance.Data <= (FScriptContainerElement *)local_58) &&
        ((FScriptContainerElement *)local_58 <
         local_50.AllocatorInstance.Data + (longlong)local_50.ArrayMax * 4)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if (local_50.ArrayNum == local_50.ArrayMax) {
      local_50.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x404,&local_50.AllocatorInstance,&local_50.ArrayMax);
    }
    *(int *)(local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 4) = local_58[0];
    local_50.ArrayNum = local_50.ArrayNum + 1;
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    lVar8 = (**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6);
    pcVar10 = *(code **)(*(longlong *)(lVar8 + 0x28) + 0x20);
    local_res8 = pcVar10;
    puVar7 = ::operator_new(0x28);
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7[3] = 0;
      pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)(puVar7 + 3);
      (((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar7 + 1))->AllocatorInstance).Data =
           (FScriptContainerElement *)0x0;
      puVar7[2] = 0;
      *(undefined4 *)(puVar7 + 4) = 0;
      piVar2 = (int *)((longlong)puVar7 + 0x24);
      *puVar7 = &___7FSpaceCurveDeformationMechanicSelectionChange__6B_;
      *piVar2 = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar7 + 1),&this->SelectedPointIDs);
      iVar4 = local_50.ArrayNum;
      FVar3.Data = local_50.AllocatorInstance.Data;
      if (pTVar1 != &local_50) {
        lVar9 = (longlong)local_50.ArrayNum;
        *(int *)(puVar7 + 4) = local_50.ArrayNum;
        if ((local_50.ArrayNum == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
          pcVar10 = local_res8;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_50.ArrayNum,*piVar2,(ForAnyElementType *)pTVar1,local_50.ArrayNum,
                     piVar2);
          pcVar10 = local_res8;
          if (iVar4 != 0) {
            memcpy((pTVar1->AllocatorInstance).Data,FVar3.Data,lVar9 << 2);
            pcVar10 = local_res8;
          }
        }
      }
    }
    local_res10 = puVar7;
    (*pcVar10)(lVar8 + 0x28,this,&local_res10,&SpaceCurvePointSelectionTransactionText);
    UpdateSelection(this,&local_50);
LAB_14cb34479:
    if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.AllocatorInstance.Data);
    }
  }
  return;
}

// SelectionGrowToStart @ 14cb344c0

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
USpaceCurveDeformationMechanic::SelectionGrowToStart(USpaceCurveDeformationMechanic *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  UObject *pUVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [16];
  undefined8 *local_res20;
  int local_68 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_60 [2];
  
  if ((this->CurvePoints).ArrayNum == 0) {
    return;
  }
  pFVar8 = (this->SelectedPointIDs).AllocatorInstance.Data;
  local_60[0].ArrayNum = (this->SelectedPointIDs).ArrayNum;
  lVar13 = (longlong)local_60[0].ArrayNum;
  lVar11 = 0;
  local_60[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_60[0].ArrayNum == 0) {
    local_60[0].ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_60[0].ArrayNum,0,&local_60[0].AllocatorInstance,local_60[0].ArrayNum,
               &local_60[0].ArrayMax);
    memcpy(local_60[0].AllocatorInstance.Data,pFVar8,lVar13 << 2);
  }
  if (local_60[0].ArrayNum == (this->CurvePoints).ArrayNum) {
    if ((local_60[0].ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar12.Data = local_60[0].AllocatorInstance.Data;
    if (*(int *)local_60[0].AllocatorInstance.Data == (this->CurvePoints).ArrayNum + -1)
    goto LAB_14cb34857;
    iVar7 = local_60[0].ArrayNum;
    if (0 < local_60[0].ArrayNum / 2) {
      pFVar8 = local_60[0].AllocatorInstance.Data + (longlong)(local_60[0].ArrayNum + -1) * 4;
      do {
        uVar3 = *(undefined4 *)(local_60[0].AllocatorInstance.Data + lVar11 * 4);
        *(undefined4 *)(local_60[0].AllocatorInstance.Data + lVar11 * 4) = *(undefined4 *)pFVar8;
        lVar11 = lVar11 + 1;
        *(undefined4 *)pFVar8 = uVar3;
        pFVar8 = pFVar8 + -4;
      } while (lVar11 < local_60[0].ArrayNum / 2);
    }
  }
  else {
    local_res8 = SUB81(this,0);
    AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
              ((int *)local_60[0].AllocatorInstance.Data,local_60[0].ArrayNum,local_res8,
               (TLess<void> *)local_res10);
    local_68[0] = (this->CurvePoints).ArrayNum + -1;
    FVar12.Data = local_60[0].AllocatorInstance.Data;
    iVar7 = local_60[0].ArrayNum;
    if ((0 < local_60[0].ArrayNum) &&
       (local_68[0] = 0, 0 < *(int *)local_60[0].AllocatorInstance.Data + -1)) {
      local_68[0] = *(int *)local_60[0].AllocatorInstance.Data + -1;
    }
    for (; -1 < local_68[0]; local_68[0] = local_68[0] + -1) {
      for (pFVar8 = FVar12.Data; pFVar8 != FVar12.Data + (longlong)iVar7 * 4; pFVar8 = pFVar8 + 4) {
        if (*(int *)pFVar8 == local_68[0]) goto LAB_14cb34712;
      }
      iVar6 = iVar7;
      if (((FVar12.Data <= (FScriptContainerElement *)local_68) &&
          ((FScriptContainerElement *)local_68 < FVar12.Data + (longlong)local_60[0].ArrayMax * 4))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), FVar12.Data = local_60[0].AllocatorInstance.Data,
            iVar6 = local_60[0].ArrayNum, bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (iVar6 == local_60[0].ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&local_60[0].AllocatorInstance,&local_60[0].ArrayMax);
        FVar12.Data = local_60[0].AllocatorInstance.Data;
      }
      iVar7 = iVar6 + 1;
      *(int *)(FVar12.Data + (longlong)iVar6 * 4) = local_68[0];
      FVar12.Data = local_60[0].AllocatorInstance.Data;
      local_60[0].ArrayNum = iVar7;
LAB_14cb34712:
    }
  }
  if ((iVar7 != (this->SelectedPointIDs).ArrayNum) ||
     ((iVar7 != 0 &&
      (iVar7 = memcmp(FVar12.Data,(this->SelectedPointIDs).AllocatorInstance.Data,
                      (longlong)iVar7 << 2), iVar7 != 0)))) {
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    lVar11 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
    pcVar4 = *(code **)(*(longlong *)(lVar11 + 0x28) + 0x20);
    puVar10 = ::operator_new(0x28);
    if (puVar10 == (undefined8 *)0x0) {
      puVar10 = (undefined8 *)0x0;
    }
    else {
      pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)(puVar10 + 3);
      *puVar10 = &___7FSpaceCurveDeformationMechanicSelectionChange__6B_;
      piVar2 = (int *)((longlong)puVar10 + 0x24);
      (((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar10 + 1))->AllocatorInstance).Data =
           (FScriptContainerElement *)0x0;
      puVar10[2] = 0;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(puVar10 + 4) = 0;
      *piVar2 = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<int,TSizedDefaultAllocator<32>_> *)(puVar10 + 1),&this->SelectedPointIDs);
      iVar7 = local_60[0].ArrayNum;
      FVar12.Data = local_60[0].AllocatorInstance.Data;
      if (pTVar1 != local_60) {
        lVar13 = (longlong)local_60[0].ArrayNum;
        *(int *)(puVar10 + 4) = local_60[0].ArrayNum;
        if ((local_60[0].ArrayNum == 0) && (*piVar2 == 0)) {
          *piVar2 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,local_60[0].ArrayNum,*piVar2,(ForAnyElementType *)pTVar1,
                     local_60[0].ArrayNum,piVar2);
          if (iVar7 != 0) {
            memcpy((pTVar1->AllocatorInstance).Data,FVar12.Data,lVar13 << 2);
          }
        }
      }
    }
    local_res20 = puVar10;
    (*pcVar4)(lVar11 + 0x28,this,&local_res20,&SpaceCurvePointSelectionTransactionText);
    UpdateSelection(this,local_60);
    FVar12.Data = local_60[0].AllocatorInstance.Data;
  }
LAB_14cb34857:
  if (FVar12.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar12.Data);
  }
  return;
}

// SetCurveSource @ 14cb36060

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
USpaceCurveDeformationMechanic::SetCurveSource
          (USpaceCurveDeformationMechanic *this,TSharedPtr<FSpaceCurveSource,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSpaceCurveSource *pFVar3;
  longlong *plVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong *plVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  uint local_res8 [2];
  undefined8 local_res10;
  TArray<int,TSizedDefaultAllocator<32>_> local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  FSpaceCurveSource *local_a8;
  TReferenceControllerBase<1> *pTStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar3 = param_1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_a8 = (this->CurveSource).Object;
  pTStack_a0 = (this->CurveSource).SharedReferenceCount.ReferenceController;
  (this->CurveSource).Object = pFVar3;
  (this->CurveSource).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a0);
  pFVar13 = (FScriptContainerElement *)0x0;
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  UpdateSelection(this,&local_c8);
  this->HoveredPointID = -1;
  if (((this->CurveSource).Object == (FSpaceCurveSource *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (this->CurveSource).Object;
  UE::Core::Private::Function::CheckCallable(*(void **)&pFVar3->GetPointCount);
  plVar4 = *(longlong **)&(pFVar3->GetPointCount).field_0x28;
  pcVar6 = *(code **)&pFVar3->GetPointCount;
  plVar11 = (longlong *)&(pFVar3->GetPointCount).field_0x10;
  if (plVar4 != (longlong *)0x0) {
    plVar11 = plVar4;
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  iVar8 = (*pcVar6)(uVar10);
  lVar14 = (longlong)iVar8;
  TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_>::SetNum
            (&this->CurvePoints,iVar8,Default);
  FVar16.Data = pFVar13;
  if (0 < iVar8) {
    lVar15 = 0;
    do {
      if (((this->CurveSource).Object == (FSpaceCurveSource *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (this->CurveSource).Object;
      uVar12 = (uint)pFVar13;
      local_res8[0] = uVar12;
      UE::Core::Private::Function::CheckCallable(*(void **)&pFVar3->GetPoint);
      plVar4 = *(longlong **)&(pFVar3->GetPoint).field_0x28;
      pcVar6 = *(code **)&pFVar3->GetPoint;
      plVar11 = (longlong *)&(pFVar3->GetPoint).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar11 = plVar4;
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      (*pcVar6)(&local_78,uVar10,local_res8);
      local_98 = local_68;
      uStack_90 = uStack_60;
      uVar9 = 0;
      if ((int)uVar12 < (this->CurvePoints).ArrayNum) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      local_res10 = local_48;
      local_b8 = local_78;
      uStack_b4 = uStack_74;
      uStack_b0 = uStack_70;
      uStack_ac = uStack_6c;
      local_88 = local_58;
      uStack_80 = uStack_50;
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
      pFVar5 = (this->CurvePoints).AllocatorInstance.Data;
      pFVar13 = (FScriptContainerElement *)(ulonglong)(uVar12 + 1);
      pFVar1 = pFVar5 + lVar15;
      *(undefined4 *)pFVar1 = local_b8;
      *(undefined4 *)(pFVar1 + 4) = uStack_b4;
      *(undefined4 *)(pFVar1 + 8) = uStack_b0;
      *(undefined4 *)(pFVar1 + 0xc) = uStack_ac;
      *(undefined8 *)(pFVar5 + lVar15 + 0x10) = local_98;
      *(undefined8 *)(pFVar5 + lVar15 + 0x10 + 8) = uStack_90;
      *(undefined8 *)(pFVar5 + lVar15 + 0x20) = local_88;
      *(undefined8 *)(pFVar5 + lVar15 + 0x20 + 8) = uStack_80;
      *(undefined8 *)(pFVar5 + lVar15 + 0x30) = local_res10;
      lVar15 = lVar15 + 0x38;
      lVar14 = lVar14 + -1;
      FVar16.Data = local_c8.AllocatorInstance.Data;
    } while (lVar14 != 0);
  }
  this->bSpatialValid = false;
  this->bRenderGeometryValid = false;
  if (FVar16.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar16.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetWorld @ 14cb38e00

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
USpaceCurveDeformationMechanic::SetWorld(USpaceCurveDeformationMechanic *this,UWorld *param_1)

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
  pUVar2 = (this->RenderPoints).field0_0x0.DebugPtr;
  (**(code **)(pUVar2->_padding_ + 0x170))(pUVar2,0,pAVar8,0);
  AActor::SetRootComponent
            ((AActor *)(this->PreviewGeometryActor).field0_0x0.DebugPtr,
             (USceneComponent *)(this->RenderPoints).field0_0x0.DebugPtr);
  pUVar2 = (this->RenderPoints).field0_0x0.DebugPtr;
  if ((pUVar2->_padding_ & 1) == 0) {
    UActorComponent::RegisterComponent((UActorComponent *)pUVar2);
  }
  else {
    UActorComponent::ReregisterComponent((UActorComponent *)pUVar2);
  }
  pUVar3 = (this->RenderSegments).field0_0x0.DebugPtr;
  (**(code **)(pUVar3->_padding_ + 0x170))
            (pUVar3,0,(this->PreviewGeometryActor).field0_0x0.DebugPtr,0);
  pUVar3 = (this->RenderSegments).field0_0x0.DebugPtr;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (**(code **)(pUVar3->_padding_ + 0x508))
            (pUVar3,(this->RenderPoints).field0_0x0.DebugPtr,
             &FAttachmentTransformRules::KeepWorldTransform,0);
  pUVar3 = (this->RenderSegments).field0_0x0.DebugPtr;
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

// Setup @ 14cb3b290

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

void __thiscall
USpaceCurveDeformationMechanic::Setup
          (USpaceCurveDeformationMechanic *this,UInteractiveTool *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FColor FVar4;
  int iVar5;
  UObject *pUVar6;
  USingleClickInputBehavior *pUVar7;
  UMouseHoverBehavior *pUVar8;
  UPointSetComponent *this_00;
  UInteractiveTool *pUVar9;
  UInteractiveToolManager *pUVar10;
  UMaterialInterface *pUVar11;
  ULineSetComponent *this_01;
  UInteractiveGizmoManager *pUVar12;
  UTransformProxy *pUVar13;
  UCombinedTransformGizmo *pUVar14;
  UClass *pUVar15;
  USpaceCurveDeformationMechanicPropertySet *pUVar16;
  void *pvVar17;
  TPropertyWatcher<ESpaceCurveControlPointTransformMode> *pTVar18;
  TPropertyWatcher<ESpaceCurveControlPointTransformMode> *pTVar19;
  undefined ***pppuVar20;
  longlong *plVar21;
  undefined1 auStack_168 [32];
  undefined1 local_148 [24];
  ulonglong uStack_130;
  code *local_128 [2];
  code *local_118 [3];
  TObjectPtr<UMouseHoverBehavior>_u_0 local_100;
  undefined1 local_f8 [80];
  longlong local_a8 [3];
  longlong *local_90;
  code *local_78 [2];
  undefined **local_68;
  USpaceCurveDeformationMechanic *pUStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined ***pppuStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  UInteractionMechanic::Setup((UInteractionMechanic *)this,param_1);
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = NewObject<USingleClickInputBehavior>(pUVar6);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (USingleClickInputBehavior *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  pTVar19 = (TPropertyWatcher<ESpaceCurveControlPointTransformMode> *)0x0;
  (this->ClickBehavior).field0_0x0.DebugPtr = pUVar7;
  pTVar18 = (TPropertyWatcher<ESpaceCurveControlPointTransformMode> *)&this->field_0x30;
  if (this == (USpaceCurveDeformationMechanic *)0x0) {
    pTVar18 = pTVar19;
  }
  (**(code **)(pUVar7->_padding_ + 0x378))(pUVar7,pTVar18);
  pppuStack_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pUStack_60 = (USpaceCurveDeformationMechanic *)FInputDeviceState::IsShiftKeyDown;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
                ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&((this->ClickBehavior).field0_0x0.DebugPtr)->Modifiers,this->ShiftModifierId,
             (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar20 = &local_68;
    if (pppuStack_50 != (undefined ***)0x0) {
      pppuVar20 = pppuStack_50;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  pppuStack_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pUStack_60 = (USpaceCurveDeformationMechanic *)FInputDeviceState::IsCtrlKeyDown;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
                ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&((this->ClickBehavior).field0_0x0.DebugPtr)->Modifiers,this->CtrlModifierId,
             (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar20 = &local_68;
    if (pppuStack_50 != (undefined ***)0x0) {
      pppuVar20 = pppuStack_50;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  (**(code **)(*(longlong *)pUVar6 + 0x2f8))(pUVar6,(this->ClickBehavior).field0_0x0.DebugPtr,0);
  pUVar6 = GetTransientPackageAsObject();
  pUVar8 = NewObject<UMouseHoverBehavior>(pUVar6);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UMouseHoverBehavior *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  (this->HoverBehavior).field0_0x0.DebugPtr = pUVar8;
  (**(code **)(*(longlong *)pUVar8 + 800))(pUVar8,&this->field_0x38);
  pppuStack_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pUStack_60 = (USpaceCurveDeformationMechanic *)FInputDeviceState::IsShiftKeyDown;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
                ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&((this->HoverBehavior).field0_0x0.DebugPtr)->Modifiers,this->ShiftModifierId,
             (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar20 = &local_68;
    if (pppuStack_50 != (undefined ***)0x0) {
      pppuVar20 = pppuStack_50;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  pppuStack_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pUStack_60 = (USpaceCurveDeformationMechanic *)FInputDeviceState::IsCtrlKeyDown;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
                ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&((this->HoverBehavior).field0_0x0.DebugPtr)->Modifiers,this->CtrlModifierId,
             (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar20 = &local_68;
    if (pppuStack_50 != (undefined ***)0x0) {
      pppuVar20 = pppuStack_50;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  (**(code **)(*(longlong *)pUVar6 + 0x2f8))(pUVar6,(this->HoverBehavior).field0_0x0.DebugPtr,0);
  pUVar6 = GetTransientPackageAsObject();
  this_00 = NewObject<UPointSetComponent>(pUVar6);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UPointSetComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->RenderPoints).field0_0x0.DebugPtr = this_00;
  pUVar9 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar10 = (UInteractiveToolManager *)(**(code **)(pUVar9->_padding_ + 0x2d8))(pUVar9);
  pUVar11 = ToolSetupUtil::GetDefaultPointComponentMaterial(pUVar10,false);
  UPointSetComponent::SetPointMaterial(this_00,pUVar11);
  pUVar6 = GetTransientPackageAsObject();
  this_01 = NewObject<ULineSetComponent>(pUVar6);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (ULineSetComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  (this->RenderSegments).field0_0x0.DebugPtr = this_01;
  pUVar9 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar10 = (UInteractiveToolManager *)(**(code **)(pUVar9->_padding_ + 0x2d8))(pUVar9);
  pUVar11 = ToolSetupUtil::GetDefaultLineComponentMaterial(pUVar10,false);
  ULineSetComponent::SetLineMaterial(this_01,pUVar11);
  (this->NormalCurveColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Red.field0_0x0;
  (this->CurrentSegmentsColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Orange.field0_0x0;
  this->SegmentsThickness = 4.0;
  (this->CurrentPointsColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
  this->PointsSize = 8.0;
  FVar4 = FColor::Green;
  (this->HoverColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Green.field0_0x0;
  (this->SelectedColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Yellow.field0_0x0;
  (this->PreviewColor).field0_0x0._s_0 = (FColor_u_0_s_0)FVar4.field0_0x0;
  this->DepthBias = 1.0;
  local_78[0] = *(code **)&this->GeometrySetToleranceTest;
  uVar3 = *(undefined8 *)&(this->GeometrySetToleranceTest).field_0x8;
  local_68 = *(undefined ***)&(this->GeometrySetToleranceTest).field_0x10;
  pUStack_60 = *(USpaceCurveDeformationMechanic **)&(this->GeometrySetToleranceTest).field_0x18;
  uVar2 = *(undefined8 *)&(this->GeometrySetToleranceTest).field_0x20;
  pppuStack_50 = *(undefined ****)&(this->GeometrySetToleranceTest).field_0x28;
  *(code **)&this->GeometrySetToleranceTest =
       UE::Core::Private::Function::
       TFunctionRefCaller<`USpaceCurveDeformationMechanic::Setup'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
       ::Call;
  *(code **)&(this->GeometrySetToleranceTest).field_0x8 = local_78[1];
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x10 = 0x52911fd8;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x14 = 1;
  *(USpaceCurveDeformationMechanic **)&(this->GeometrySetToleranceTest).field_0x18 = this;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x20 = local_58;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x24 = uStack_54;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x28 = 0;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x2c = 0;
  local_78[1] = (code *)uVar3;
  _local_58 = uVar2;
  if (local_78[0] != (code *)0x0) {
    pppuVar20 = &local_68;
    if (pppuStack_50 != (undefined ***)0x0) {
      pppuVar20 = pppuStack_50;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  pUVar9 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar10 = (UInteractiveToolManager *)(**(code **)(pUVar9->_padding_ + 0x2d8))(pUVar9);
  pUVar12 = UInteractiveToolManager::GetPairedGizmoManager(pUVar10);
  pUVar13 = NewObject<UTransformProxy>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->PointTransformProxy).field0_0x0.DebugPtr = pUVar13;
  local_148._0_8_ = (FScriptContainerElement *)0x0;
  local_148._8_8_ = 0;
  pUVar9 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar14 = UE::TransformGizmoUtil::CreateCustomTransformGizmo
                      (pUVar12,StandardTranslateRotate,pUVar9,(FString *)local_148);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UCombinedTransformGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->PointTransformGizmo).field0_0x0.DebugPtr = pUVar14;
  if ((FScriptContainerElement *)local_148._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_148._0_8_);
  }
  local_148._0_8_ = GizmoTransformChanged;
  local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
  local_148._16_8_ = GizmoTransformChanged;
  uStack_130 = local_148._8_8_;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::AddUObject<USpaceCurveDeformationMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
              *)&((this->PointTransformProxy).field0_0x0.DebugPtr)->OnTransformChanged,
             (USpaceCurveDeformationMechanic *)local_148,(pmf_c589073e *)this);
  local_148._0_8_ = GizmoTransformStarted;
  local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
  local_148._16_8_ = GizmoTransformStarted;
  uStack_130 = local_148._8_8_;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
  AddUObject<USpaceCurveDeformationMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
              *)&((this->PointTransformProxy).field0_0x0.DebugPtr)->OnBeginTransformEdit,
             (USpaceCurveDeformationMechanic *)local_148,(pmf_0ef9b353 *)this);
  local_148._0_8_ = GizmoTransformEnded;
  local_148._8_8_ = local_148._8_8_ & 0xffffffff00000000;
  local_148._16_8_ = GizmoTransformEnded;
  uStack_130 = local_148._8_8_;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
  AddUObject<USpaceCurveDeformationMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
              *)&((this->PointTransformProxy).field0_0x0.DebugPtr)->OnEndTransformEdit,
             (USpaceCurveDeformationMechanic *)local_148,(pmf_0ef9b353 *)this);
  pUVar14 = (this->PointTransformGizmo).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar14 + 0x330))
            (pUVar14,(this->PointTransformProxy).field0_0x0.DebugPtr,0);
  pUVar14 = (this->PointTransformGizmo).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar14 + 0x360))(pUVar14,0);
  ((this->PointTransformGizmo).field0_0x0.DebugPtr)->bUseContextCoordinateSystem = false;
  ((this->PointTransformGizmo).field0_0x0.DebugPtr)->CurrentCoordinateSystem = Local;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar15 = USpaceCurveDeformationMechanicPropertySet::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_f8,pUVar15);
  local_f8._8_8_ = this;
  pUVar16 = (USpaceCurveDeformationMechanicPropertySet *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_f8);
  if ((TReferenceControllerBase<1> *)local_f8._64_8_ != (TReferenceControllerBase<1> *)0x0) {
    plVar21 = local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar21 = local_90;
    }
    (**(code **)(*plVar21 + 0x10))(plVar21);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar16 != (USpaceCurveDeformationMechanicPropertySet *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  (this->TransformProperties).field0_0x0.DebugPtr = pUVar16;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USpaceCurveDeformationMechanic::Setup'::`2'::<lambda_2>,0,0>::
              _vftable_;
  pppuStack_50 = (undefined ***)0x0;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USpaceCurveDeformationMechanic::Setup'::__l2::<lambda_2>,void,enum_ESpaceCurveControlPointTransformMode_const_&>
                ::Call;
  pUStack_60 = this;
  pvVar17 = ::operator_new(0xa0);
  pTVar18 = pTVar19;
  if (pvVar17 != (void *)0x0) {
    local_128[0] = local_78[0];
    local_100.DebugPtr = (UMouseHoverBehavior *)0x0;
    if (local_78[0] != (code *)0x0) {
      pppuVar20 = &local_68;
      if (pppuStack_50 != (undefined ***)0x0) {
        pppuVar20 = pppuStack_50;
      }
      (*(code *)**pppuVar20)(pppuVar20,local_128 + 2);
    }
    pTVar18 = FWatchablePropertySet::TPropertyWatcher<enum_ESpaceCurveControlPointTransformMode>::
              TPropertyWatcher<enum_ESpaceCurveControlPointTransformMode><enum_ESpaceCurveControlPointTransformMode,void>
                        (pvVar17,&pUVar16->TransformMode,
                         (TFunction<void___cdecl(ESpaceCurveControlPointTransformMode_const_&)> *)
                         local_128);
  }
  iVar5 = (int)pUVar16->_padding_;
  piVar1 = (int *)((longlong)&pUVar16->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar16->_padding_,piVar1);
  }
  *(int *)&pUVar16->_padding_ = iVar5 + 1;
  *(TPropertyWatcher<ESpaceCurveControlPointTransformMode> **)
   (pUVar16->_padding_ + (longlong)iVar5 * 8) = pTVar18;
  if (local_78[0] != (code *)0x0) {
    pppuVar20 = &local_68;
    if (pppuStack_50 != (undefined ***)0x0) {
      pppuVar20 = pppuStack_50;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  pUVar16 = (this->TransformProperties).field0_0x0.DebugPtr;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USpaceCurveDeformationMechanic::Setup'::`2'::<lambda_3>,0,0>::
              _vftable_;
  pppuStack_50 = (undefined ***)0x0;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USpaceCurveDeformationMechanic::Setup'::__l2::<lambda_3>,void,enum_ESpaceCurveControlPointOriginMode_const_&>
                ::Call;
  pUStack_60 = this;
  pvVar17 = ::operator_new(0xa0);
  if (pvVar17 != (void *)0x0) {
    local_128[0] = local_78[0];
    local_100.DebugPtr = (UMouseHoverBehavior *)0x0;
    if (local_78[0] != (code *)0x0) {
      pppuVar20 = &local_68;
      if (pppuStack_50 != (undefined ***)0x0) {
        pppuVar20 = pppuStack_50;
      }
      (*(code *)**pppuVar20)(pppuVar20,local_128 + 2);
    }
    pTVar19 = (TPropertyWatcher<ESpaceCurveControlPointTransformMode> *)
              FWatchablePropertySet::TPropertyWatcher<enum_ESpaceCurveControlPointOriginMode>::
              TPropertyWatcher<enum_ESpaceCurveControlPointOriginMode><enum_ESpaceCurveControlPointOriginMode,void>
                        (pvVar17,&pUVar16->TransformOrigin,
                         (TFunction<void___cdecl(ESpaceCurveControlPointOriginMode_const_&)> *)
                         local_128);
  }
  iVar5 = (int)pUVar16->_padding_;
  piVar1 = (int *)((longlong)&pUVar16->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar16->_padding_,piVar1);
  }
  *(int *)&pUVar16->_padding_ = iVar5 + 1;
  *(TPropertyWatcher<ESpaceCurveControlPointTransformMode> **)
   (pUVar16->_padding_ + (longlong)iVar5 * 8) = pTVar19;
  if (local_78[0] != (code *)0x0) {
    pppuVar20 = &local_68;
    if (pppuStack_50 != (undefined ***)0x0) {
      pppuVar20 = pppuStack_50;
    }
    (*(code *)(*pppuVar20)[2])();
  }
  ClearCurveSource(this);
  return;
}

// Shutdown @ 14cb3c130

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USpaceCurveDeformationMechanic::Shutdown(USpaceCurveDeformationMechanic *this)

{
  APreviewGeometryActor *this_00;
  UInteractiveTool *pUVar1;
  UInteractiveToolManager *this_01;
  UInteractiveGizmoManager *pUVar2;
  
  this_00 = (this->PreviewGeometryActor).field0_0x0.DebugPtr;
  if (this_00 != (APreviewGeometryActor *)0x0) {
    AActor::Destroy((AActor *)this_00,false,true);
    (this->PreviewGeometryActor).field0_0x0.DebugPtr = (APreviewGeometryActor *)0x0;
  }
  if ((this->PointTransformGizmo).field0_0x0.DebugPtr != (UCombinedTransformGizmo *)0x0) {
    pUVar1 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
    this_01 = (UInteractiveToolManager *)(**(code **)(pUVar1->_padding_ + 0x2d8))(pUVar1);
    pUVar2 = UInteractiveToolManager::GetPairedGizmoManager(this_01);
    (**(code **)(pUVar2->_padding_ + 0x2d8))(pUVar2,(this->PointTransformGizmo).field0_0x0.DebugPtr)
    ;
    (this->PointTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  }
  return;
}

// StaticRegisterNativesUSpaceCurveDeformationMechanic @ 14cb3eca0

void __cdecl
USpaceCurveDeformationMechanic::StaticRegisterNativesUSpaceCurveDeformationMechanic(void)

{
  return;
}

// Tick @ 14cb40d00

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
USpaceCurveDeformationMechanic::Tick(USpaceCurveDeformationMechanic *this,float param_1)

{
  FSpaceCurveSource *pFVar1;
  UCombinedTransformGizmo *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UInteractiveTool *pUVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  int local_res8 [2];
  TVector<double> local_58 [2];
  
  pUVar6 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  plVar7 = (longlong *)(**(code **)(pUVar6->_padding_ + 0x2d8))(pUVar6);
  plVar7 = (longlong *)(**(code **)(*plVar7 + 0x398))(plVar7);
  (**(code **)(*plVar7 + 0x18))(plVar7,&this->CameraState);
  if (this->bSpatialValid == false) {
    UE::Geometry::FGeometrySet3::Reset(&this->GeometrySet,true,true);
    if ((this->CurveSource).Object == (FSpaceCurveSource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->CurveSource).Object;
    UE::Core::Private::Function::CheckCallable(*(void **)&pFVar1->GetPointCount);
    plVar7 = *(longlong **)&(pFVar1->GetPointCount).field_0x28;
    pcVar3 = *(code **)&pFVar1->GetPointCount;
    plVar9 = (longlong *)&(pFVar1->GetPointCount).field_0x10;
    if (plVar7 != (longlong *)0x0) {
      plVar9 = plVar7;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    iVar5 = (*pcVar3)(uVar8);
    iVar10 = 0;
    if (0 < iVar5) {
      do {
        if ((this->CurveSource).Object == (FSpaceCurveSource *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar1 = (this->CurveSource).Object;
        local_res8[0] = iVar10;
        UE::Core::Private::Function::CheckCallable(*(void **)&pFVar1->GetPoint);
        plVar7 = *(longlong **)&(pFVar1->GetPoint).field_0x28;
        pcVar3 = *(code **)&pFVar1->GetPoint;
        plVar9 = (longlong *)&(pFVar1->GetPoint).field_0x10;
        if (plVar7 != (longlong *)0x0) {
          plVar9 = plVar7;
        }
        uVar8 = (**(code **)(*plVar9 + 8))();
        (*pcVar3)(local_58,uVar8,local_res8);
        UE::Geometry::FGeometrySet3::AddPoint(&this->GeometrySet,iVar10,local_58);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar5);
    }
    this->bSpatialValid = true;
  }
  if (this->bRenderGeometryValid == false) {
    UpdateRenderGeometry(this);
  }
  pUVar2 = (this->PointTransformGizmo).field0_0x0.DebugPtr;
  if (pUVar2 != (UCombinedTransformGizmo *)0x0) {
    USceneComponent::SetVisibility
              ((USceneComponent *)
               (((pUVar2->GizmoActor).field0_0x0.DebugPtr)->RotateX).field0_0x0.DebugPtr,
               ((this->TransformProperties).field0_0x0.DebugPtr)->TransformMode != PerVertex,
               DirtyOnly);
    return;
  }
  return;
}

// UpdateCurve @ 14cb459f0

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
USpaceCurveDeformationMechanic::UpdateCurve
          (USpaceCurveDeformationMechanic *this,
          TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  TArray<UE::Geometry::TFrame3<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->CurvePoints,param_1);
  this->bSpatialValid = false;
  this->bRenderGeometryValid = false;
  UpdateGizmoLocation(this);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnPointsChanged);
  return;
}

// UpdateGizmoLocation @ 14cb475f0

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
USpaceCurveDeformationMechanic::UpdateGizmoLocation(USpaceCurveDeformationMechanic *this)

{
  int iVar1;
  int iVar2;
  ESpaceCurveControlPointOriginMode EVar3;
  UCombinedTransformGizmo *pUVar4;
  FScriptContainerElement *pFVar5;
  USpaceCurveDeformationMechanicPropertySet *pUVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  undefined1 local_108 [8];
  double local_100;
  double dStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_138;
  pUVar4 = (this->PointTransformGizmo).field0_0x0.DebugPtr;
  if (pUVar4 != (UCombinedTransformGizmo *)0x0) {
    iVar1 = (this->SelectedPointIDs).ArrayNum;
    if ((iVar1 == 0) || ((this->CurvePoints).ArrayNum == 0)) {
      (**(code **)(*(longlong *)pUVar4 + 0x360))(pUVar4,0);
    }
    else {
      if (iVar1 < 1) {
        local_118 = 0;
        local_110 = (longlong)iVar1;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar12) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar2 = (this->CurvePoints).ArrayNum;
      uVar13 = *(uint *)(this->SelectedPointIDs).AllocatorInstance.Data;
      uVar17 = 0;
      uVar15 = uVar17;
      if ((int)uVar13 < iVar2) {
        uVar15 = ~uVar13 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (local_118 = (longlong)(int)uVar13, local_110 = (longlong)iVar2,
         bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar5 = (this->CurvePoints).AllocatorInstance.Data;
      lVar14 = (longlong)(int)uVar13 * 0x38;
      dVar18 = *(double *)(pFVar5 + lVar14);
      dVar19 = *(double *)(pFVar5 + lVar14 + 8);
      local_c8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar5 + lVar14 + 0x10);
      dStack_e8 = *(double *)(pFVar5 + lVar14 + 0x10 + 8);
      local_e0 = *(double *)(pFVar5 + lVar14 + 0x20);
      dStack_d8 = *(double *)(pFVar5 + lVar14 + 0x20 + 8);
      local_d0 = *(double *)(pFVar5 + lVar14 + 0x30);
      pUVar6 = (this->TransformProperties).field0_0x0.DebugPtr;
      EVar3 = pUVar6->TransformOrigin;
      local_100 = dVar18;
      dStack_f8 = dVar19;
      local_f0 = local_c8.Translation.ZW.m128d_f64[0];
      if (EVar3 == Last) {
        iVar2 = (this->SelectedPointIDs).ArrayNum;
        uVar15 = iVar1 - 1;
        uVar13 = uVar17;
        if ((int)uVar15 < iVar2) {
          uVar13 = ~uVar15 >> 0x1f;
        }
        if (uVar13 == 0) {
          local_118 = (longlong)(int)uVar15;
          local_110 = (longlong)iVar2;
          bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar12) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        iVar1 = (this->CurvePoints).ArrayNum;
        uVar13 = *(uint *)((this->SelectedPointIDs).AllocatorInstance.Data +
                          (longlong)(int)uVar15 * 4);
        if ((int)uVar13 < iVar1) {
          uVar17 = ~uVar13 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (local_118 = (longlong)(int)uVar13, local_110 = (longlong)iVar1,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar5 = (this->CurvePoints).AllocatorInstance.Data;
        lVar14 = (longlong)(int)uVar13 * 0x38;
        dVar18 = *(double *)(pFVar5 + lVar14);
        dVar19 = *(double *)(pFVar5 + lVar14 + 8);
        local_c8.Translation.ZW.m128d_f64[0] = *(double *)(pFVar5 + lVar14 + 0x10);
        dStack_e8 = *(double *)(pFVar5 + lVar14 + 0x10 + 8);
        local_e0 = *(double *)(pFVar5 + lVar14 + 0x20);
        dStack_d8 = *(double *)(pFVar5 + lVar14 + 0x20 + 8);
        local_d0 = *(double *)(pFVar5 + lVar14 + 0x30);
        local_f0 = local_c8.Translation.ZW.m128d_f64[0];
      }
      else if ((EVar3 == Shared) && (pUVar6->TransformMode == Shared)) {
        pFVar16 = (this->SelectedPointIDs).AllocatorInstance.Data;
        iVar1 = (this->SelectedPointIDs).ArrayNum;
        pFVar5 = pFVar16 + (longlong)iVar1 * 4;
        uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        while( true ) {
          if ((this->SelectedPointIDs).ArrayNum != iVar1) {
            local_108[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_108);
          }
          if (pFVar16 == pFVar5) break;
          uVar13 = *(uint *)pFVar16;
          iVar2 = (this->CurvePoints).ArrayNum;
          uVar15 = 0;
          if ((int)uVar13 < iVar2) {
            uVar15 = ~uVar13 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (local_118 = (longlong)(int)uVar13, local_110 = (longlong)iVar2,
             bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pFVar7 = (this->CurvePoints).AllocatorInstance.Data;
          lVar14 = (longlong)(int)uVar13 * 0x38;
          pFVar16 = pFVar16 + 4;
          uVar9 = (double)uVar9 + *(double *)(pFVar7 + lVar14);
          uVar10 = (double)uVar10 + *(double *)(pFVar7 + lVar14 + 8);
          uVar11 = (double)uVar11 + *(double *)(pFVar7 + lVar14 + 0x10);
        }
        dStack_d8 = ___xmm_3ff00000000000000000000000000000;
        local_d0 = _UNK_15061cbc8;
        dVar19 = __real_3ff0000000000000 / (double)(this->SelectedPointIDs).ArrayNum;
        local_c8.Translation.ZW.m128d_f64[0] = dVar19 * (double)uVar11;
        dVar18 = dVar19 * (double)uVar9;
        dVar19 = dVar19 * (double)uVar10;
        dStack_e8 = 0.0;
        local_e0 = 0.0;
      }
      local_c8.Rotation.XY.m128d_f64[0] = dStack_e8;
      local_c8.Rotation.XY.m128d_f64[1] = local_e0;
      local_c8.Rotation.ZW.m128d_f64[0] = dStack_d8;
      local_c8.Rotation.ZW.m128d_f64[1] = local_d0;
      local_c8.Translation.ZW.m128d_f64[1] = 0.0;
      local_c8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
      local_c8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
      local_c8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar19,0);
      local_c8.Translation.XY.m128d_f64[0] = dVar18;
      local_c8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar19 >> 0x20);
      local_c8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
      local_c8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
      UCombinedTransformGizmo::ReinitializeGizmoTransform
                ((this->PointTransformGizmo).field0_0x0.DebugPtr,&local_c8,true);
      pUVar4 = (this->PointTransformGizmo).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar4 + 0x360))(pUVar4,1);
    }
  }
  return;
}

// UpdateRenderGeometry @ 14cb489f0

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
USpaceCurveDeformationMechanic::UpdateRenderGeometry(USpaceCurveDeformationMechanic *this)

{
  FScriptContainerElement *pFVar1;
  FSpaceCurveSource *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int local_res8 [2];
  int local_res10 [2];
  int local_res18 [2];
  TVector<double>_u_0 local_148;
  undefined4 local_130;
  float local_12c;
  float local_128;
  TVector<double>_u_0 local_120;
  double local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  FColor_u_0 local_f0;
  float local_ec;
  float local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if (this->bRenderGeometryValid == false) {
    if (((this->CurveSource).Object == (FSpaceCurveSource *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar2 = (this->CurveSource).Object;
    UE::Core::Private::Function::CheckCallable(*(void **)&pFVar2->GetPointCount);
    plVar3 = *(longlong **)&(pFVar2->GetPointCount).field_0x28;
    pcVar4 = *(code **)&pFVar2->GetPointCount;
    plVar11 = (longlong *)&(pFVar2->GetPointCount).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar11 = plVar3;
    }
    uVar8 = (**(code **)(*plVar11 + 8))();
    iVar7 = (*pcVar4)(uVar8);
    UPointSetComponent::Clear((this->RenderPoints).field0_0x0.DebugPtr);
    ULineSetComponent::Clear((this->RenderSegments).field0_0x0.DebugPtr);
    if (0 < iVar7) {
      iVar12 = 0;
      do {
        if (((this->CurveSource).Object == (FSpaceCurveSource *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->CurveSource).Object;
        local_res8[0] = iVar12;
        UE::Core::Private::Function::CheckCallable(*(void **)&pFVar2->GetPoint);
        plVar3 = *(longlong **)&(pFVar2->GetPoint).field_0x28;
        pcVar4 = *(code **)&pFVar2->GetPoint;
        plVar11 = (longlong *)&(pFVar2->GetPoint).field_0x10;
        if (plVar3 != (longlong *)0x0) {
          plVar11 = plVar3;
        }
        uVar8 = (**(code **)(*plVar11 + 8))();
        (*pcVar4)(&local_e0,uVar8,local_res8);
        pFVar10 = (this->SelectedPointIDs).AllocatorInstance.Data;
        pFVar1 = pFVar10 + (longlong)(this->SelectedPointIDs).ArrayNum * 4;
        for (; pFVar10 != pFVar1; pFVar10 = pFVar10 + 4) {
          if (*(int *)pFVar10 == iVar12) {
            bVar5 = true;
            goto LAB_14cb48b54;
          }
        }
        bVar5 = false;
LAB_14cb48b54:
        lVar9 = 0x1ac;
        if (!bVar5) {
          lVar9 = 0x194;
        }
        local_148._s_0.X = local_e0;
        local_148._s_0.Y = dStack_d8;
        local_12c = this->PointsSize;
        local_130 = *(undefined4 *)(&this->field_0x0 + lVar9);
        local_148._s_0.Z = local_d0;
        local_128 = this->DepthBias;
        UPointSetComponent::AddPoint
                  ((this->RenderPoints).field0_0x0.DebugPtr,(FRenderablePoint *)&local_148._s_0);
        iVar12 = iVar12 + 1;
      } while (iVar12 < iVar7);
      iVar12 = 0;
      if (((this->CurveSource).Object == (FSpaceCurveSource *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->CurveSource).Object;
      UE::Core::Private::Function::CheckCallable(*(void **)&pFVar2->IsLoop);
      pcVar4 = *(code **)&pFVar2->IsLoop;
      plVar3 = *(longlong **)&(pFVar2->IsLoop).field_0x28;
      plVar11 = (longlong *)&(pFVar2->IsLoop).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar11 = plVar3;
      }
      uVar8 = (**(code **)(*plVar11 + 8))();
      cVar6 = (*pcVar4)(uVar8);
      iVar13 = iVar7;
      if (cVar6 == '\0') {
        iVar13 = iVar7 + -1;
      }
      if (0 < iVar13) {
        do {
          if (((this->CurveSource).Object == (FSpaceCurveSource *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar2 = (this->CurveSource).Object;
          local_res10[0] = iVar12;
          UE::Core::Private::Function::CheckCallable(*(void **)&pFVar2->GetPoint);
          plVar3 = *(longlong **)&(pFVar2->GetPoint).field_0x28;
          pcVar4 = *(code **)&pFVar2->GetPoint;
          plVar11 = (longlong *)&(pFVar2->GetPoint).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar11 = plVar3;
          }
          uVar8 = (**(code **)(*plVar11 + 8))();
          (*pcVar4)(&local_a8,uVar8,local_res10);
          if (((this->CurveSource).Object == (FSpaceCurveSource *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar2 = (this->CurveSource).Object;
          iVar12 = iVar12 + 1;
          local_res18[0] = iVar12 % iVar7;
          UE::Core::Private::Function::CheckCallable(*(void **)&pFVar2->GetPoint);
          plVar3 = *(longlong **)&(pFVar2->GetPoint).field_0x28;
          pcVar4 = *(code **)&pFVar2->GetPoint;
          plVar11 = (longlong *)&(pFVar2->GetPoint).field_0x10;
          if (plVar3 != (longlong *)0x0) {
            plVar11 = plVar3;
          }
          uVar8 = (**(code **)(*plVar11 + 8))();
          (*pcVar4)(&local_70,uVar8,local_res18);
          local_f0 = (this->NormalCurveColor).field0_0x0;
          local_120._s_0.X = local_a8;
          local_120._s_0.Y = dStack_a0;
          local_120._s_0.Z = local_98;
          local_108 = local_70;
          uStack_100 = uStack_68;
          local_ec = this->SegmentsThickness;
          local_f8 = local_60;
          local_e8 = this->DepthBias;
          ULineSetComponent::AddLine
                    ((this->RenderSegments).field0_0x0.DebugPtr,(FRenderableLine *)&local_120._s_0);
        } while (iVar12 < iVar13);
      }
    }
    this->bRenderGeometryValid = true;
  }
  return;
}

// UpdateSelection @ 14cb49570

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
USpaceCurveDeformationMechanic::UpdateSelection
          (USpaceCurveDeformationMechanic *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  longlong lVar5;
  
  TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->SelectedPointIDs,param_1);
  iVar4 = 0;
  if (0 < (this->CurvePoints).ArrayNum) {
    do {
      pFVar3 = (this->SelectedPointIDs).AllocatorInstance.Data;
      pFVar1 = pFVar3 + (longlong)(this->SelectedPointIDs).ArrayNum * 4;
      for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 4) {
        if (*(int *)pFVar3 == iVar4) {
          bVar2 = true;
          goto LAB_14cb495cf;
        }
      }
      bVar2 = false;
LAB_14cb495cf:
      lVar5 = 0x1ac;
      if (!bVar2) {
        lVar5 = 0x194;
      }
      UPointSetComponent::SetPointColor
                ((this->RenderPoints).field0_0x0.DebugPtr,iVar4,(FColor *)(&this->field_0x0 + lVar5)
                );
      iVar4 = iVar4 + 1;
    } while (iVar4 < (this->CurvePoints).ArrayNum);
  }
  UpdateGizmoLocation(this);
  return;
}

// UpdateSpatial @ 14cb49a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USpaceCurveDeformationMechanic::UpdateSpatial(USpaceCurveDeformationMechanic *this)

{
  FSpaceCurveSource *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  int local_res8 [2];
  TVector<double> local_58 [2];
  
  if (this->bSpatialValid == false) {
    UE::Geometry::FGeometrySet3::Reset(&this->GeometrySet,true,true);
    if ((this->CurveSource).Object == (FSpaceCurveSource *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar1 = (this->CurveSource).Object;
    UE::Core::Private::Function::CheckCallable(*(void **)&pFVar1->GetPointCount);
    plVar2 = *(longlong **)&(pFVar1->GetPointCount).field_0x28;
    pcVar3 = *(code **)&pFVar1->GetPointCount;
    plVar7 = (longlong *)&(pFVar1->GetPointCount).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar7 = plVar2;
    }
    uVar6 = (**(code **)(*plVar7 + 8))();
    iVar5 = (*pcVar3)(uVar6);
    iVar8 = 0;
    if (0 < iVar5) {
      do {
        if ((this->CurveSource).Object == (FSpaceCurveSource *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar1 = (this->CurveSource).Object;
        local_res8[0] = iVar8;
        UE::Core::Private::Function::CheckCallable(*(void **)&pFVar1->GetPoint);
        plVar2 = *(longlong **)&(pFVar1->GetPoint).field_0x28;
        pcVar3 = *(code **)&pFVar1->GetPoint;
        plVar7 = (longlong *)&(pFVar1->GetPoint).field_0x10;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = plVar2;
        }
        uVar6 = (**(code **)(*plVar7 + 8))();
        (*pcVar3)(local_58,uVar6,local_res8);
        UE::Geometry::FGeometrySet3::AddPoint(&this->GeometrySet,iVar8,local_58);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar5);
    }
    this->bSpatialValid = true;
  }
  return;
}

