// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 42

// StaticClass @ 14caade30

UClass * __cdecl ULatticeControlPointsMechanic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULatticeControlPointsMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"LatticeControlPointsMechanic",
               &Z_Registration_Info_UClass_ULatticeControlPointsMechanic.InnerSingleton,
               StaticRegisterNativesULatticeControlPointsMechanic,0x500,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULatticeControlPointsMechanic>,
               InternalVTableHelperCtorCaller<ULatticeControlPointsMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULatticeControlPointsMechanic.InnerSingleton;
}

// ULatticeControlPointsMechanic @ 14cacd6f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULatticeControlPointsMechanic * __thiscall
ULatticeControlPointsMechanic::ULatticeControlPointsMechanic
          (ULatticeControlPointsMechanic *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this,param_1);
  *(undefined8 *)&(this->OnPointsChanged).field_0x18 = 2;
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined8 *)&this->OnPointsChanged = 0;
  *(undefined8 *)&(this->OnPointsChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnSelectionChanged = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x18 = 2;
  this->bHasChanged = false;
  *(undefined8 *)&this->ShouldHideGizmo = 0;
  *(undefined4 *)&(this->ShouldHideGizmo).field_0x10 = 0;
  (this->ControlPoints).ArrayNum = 0;
  (this->ControlPoints).ArrayMax = 0;
  (this->LatticeEdges).ArrayNum = 0;
  (this->LatticeEdges).ArrayMax = 0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickBehaviorTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&(this->OnPointsChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->ShouldHideGizmo).field_0x8 = 0;
  (this->ControlPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LatticeEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->LocalToWorldTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->LocalToWorldTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->LocalToWorldTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->LocalToWorldTransform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->LocalToWorldTransform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->LocalToWorldTransform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
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
  (this->CachedCameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CachedCameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CachedCameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CachedCameraState).Orientation.W = 1.0;
  (this->CachedCameraState).Orientation.X = 0.0;
  (this->CachedCameraState).Orientation.Y = 0.0;
  (this->CachedCameraState).Orientation.Z = 0.0;
  (this->CachedCameraState).HorizontalFOVDegrees = 90.0;
  (this->CachedCameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CachedCameraState).AspectRatio = 1.0;
  (this->CachedCameraState).bIsOrthographic = false;
  (this->CachedCameraState).bIsVR = false;
  (this->CachedCameraState).DPIScale = 1.0;
  (this->PreviewGeometryActor).field0_0x0.DebugPtr = (APreviewGeometryActor *)0x0;
  (this->DrawnControlPoints).field0_0x0.DebugPtr = (UPointSetComponent *)0x0;
  (this->DrawnLatticeEdges).field0_0x0.DebugPtr = (ULineSetComponent *)0x0;
  this->bShiftToggle = false;
  this->bCtrlToggle = false;
  *(undefined8 *)&this->ShouldAddToSelectionFunc = 0;
  *(undefined8 *)&(this->ShouldAddToSelectionFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldAddToSelectionFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_45_>_ULatticeControlPointsMechanic___0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ShouldAddToSelectionFunc).field_0x18;
  *(ULatticeControlPointsMechanic **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldAddToSelectionFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<ULatticeControlPointsMechanic::<lambda_45_>,bool>::Call;
  }
  *(undefined8 *)&this->ShouldRemoveFromSelectionFunc = 0;
  *(undefined8 *)&(this->ShouldRemoveFromSelectionFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldRemoveFromSelectionFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_46_>_ULatticeControlPointsMechanic___0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ShouldRemoveFromSelectionFunc).field_0x18;
  *(ULatticeControlPointsMechanic **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldRemoveFromSelectionFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<ULatticeControlPointsMechanic::<lambda_46_>,bool>::Call;
  }
  (this->PointTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->PointTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  *(undefined8 *)&this->GeometrySetToleranceTest = 0;
  *(undefined8 *)&(this->GeometrySetToleranceTest).field_0x28 = 0;
  (this->MarqueeMechanic).field0_0x0.DebugPtr = (URectangleMarqueeMechanic *)0x0;
  *(undefined8 *)&(this->SelectedPointIDs).Elements = 0;
  *(undefined8 *)&(this->SelectedPointIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedPointIDs).Elements.field_0x20 = 0;
  this->bGizmoBeingDragged = false;
  this->HoveredPointID = -1;
  this->bIsDraggingRectangle = false;
  *(undefined4 *)&(this->SelectedPointIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedPointIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedPointIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedPointIDs).Elements.field_0x34 = 0;
  (this->SelectedPointIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedPointIDs).HashSize = 0;
  *(undefined8 *)&(this->PreDragSelection).Elements = 0;
  *(undefined8 *)&(this->PreDragSelection).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PreDragSelection).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PreDragSelection).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PreDragSelection).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PreDragSelection).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreDragSelection).Elements.field_0x34 = 0;
  (this->PreDragSelection).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PreDragSelection).HashSize = 0;
  (this->CurrentDragSelection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentDragSelection).ArrayNum = 0;
  (this->CurrentDragSelection).ArrayMax = 0;
  *(undefined8 *)&this->SelectedPointStartPositions = 0;
  *(undefined8 *)&(this->SelectedPointStartPositions).field_0x8 = 0;
  *(undefined8 *)&(this->SelectedPointStartPositions).field_0x20 = 0;
  *(undefined4 *)&(this->SelectedPointStartPositions).field_0x28 = 0;
  *(undefined4 *)&(this->SelectedPointStartPositions).field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedPointStartPositions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedPointStartPositions).field_0x34 = 0;
  *(undefined8 *)&(this->SelectedPointStartPositions).field_0x40 = 0;
  *(undefined4 *)&(this->SelectedPointStartPositions).field_0x48 = 0;
  this->CurrentChangeStamp = 0;
  *(undefined8 *)&this->ColorOverrides = 0;
  *(undefined8 *)&(this->ColorOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->ColorOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->ColorOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->ColorOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->ColorOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ColorOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->ColorOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->ColorOverrides).field_0x48 = 0;
  (this->LongTransactions).OpenCount = 0;
  (this->LongTransactions).MaxOpen = 1;
  return this;
}

// ULatticeControlPointsMechanic @ 14cacdaf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ULatticeControlPointsMechanic * __thiscall
ULatticeControlPointsMechanic::ULatticeControlPointsMechanic(ULatticeControlPointsMechanic *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this);
  *(undefined8 *)&(this->OnPointsChanged).field_0x18 = 2;
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined8 *)&this->OnPointsChanged = 0;
  *(undefined8 *)&(this->OnPointsChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnSelectionChanged = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x18 = 2;
  this->bHasChanged = false;
  *(undefined8 *)&this->ShouldHideGizmo = 0;
  *(undefined4 *)&(this->ShouldHideGizmo).field_0x10 = 0;
  (this->ControlPoints).ArrayNum = 0;
  (this->ControlPoints).ArrayMax = 0;
  (this->LatticeEdges).ArrayNum = 0;
  (this->LatticeEdges).ArrayMax = 0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickBehaviorTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&(this->OnPointsChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->ShouldHideGizmo).field_0x8 = 0;
  (this->ControlPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LatticeEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->LocalToWorldTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->LocalToWorldTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->LocalToWorldTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->LocalToWorldTransform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->LocalToWorldTransform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->LocalToWorldTransform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
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
  (this->CachedCameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CachedCameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CachedCameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CachedCameraState).Orientation.W = 1.0;
  (this->CachedCameraState).Orientation.X = 0.0;
  (this->CachedCameraState).Orientation.Y = 0.0;
  (this->CachedCameraState).Orientation.Z = 0.0;
  (this->CachedCameraState).HorizontalFOVDegrees = 90.0;
  (this->CachedCameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CachedCameraState).AspectRatio = 1.0;
  (this->CachedCameraState).bIsOrthographic = false;
  (this->CachedCameraState).bIsVR = false;
  (this->CachedCameraState).DPIScale = 1.0;
  (this->PreviewGeometryActor).field0_0x0.DebugPtr = (APreviewGeometryActor *)0x0;
  (this->DrawnControlPoints).field0_0x0.DebugPtr = (UPointSetComponent *)0x0;
  (this->DrawnLatticeEdges).field0_0x0.DebugPtr = (ULineSetComponent *)0x0;
  this->bShiftToggle = false;
  this->bCtrlToggle = false;
  *(undefined8 *)&this->ShouldAddToSelectionFunc = 0;
  *(undefined8 *)&(this->ShouldAddToSelectionFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldAddToSelectionFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_45_>_ULatticeControlPointsMechanic___0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ShouldAddToSelectionFunc).field_0x18;
  *(ULatticeControlPointsMechanic **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldAddToSelectionFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<ULatticeControlPointsMechanic::<lambda_45_>,bool>::Call;
  }
  *(undefined8 *)&this->ShouldRemoveFromSelectionFunc = 0;
  *(undefined8 *)&(this->ShouldRemoveFromSelectionFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldRemoveFromSelectionFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_46_>_ULatticeControlPointsMechanic___0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ShouldRemoveFromSelectionFunc).field_0x18;
  *(ULatticeControlPointsMechanic **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldRemoveFromSelectionFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<ULatticeControlPointsMechanic::<lambda_46_>,bool>::Call;
  }
  (this->PointTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->PointTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  *(undefined8 *)&this->GeometrySetToleranceTest = 0;
  *(undefined8 *)&(this->GeometrySetToleranceTest).field_0x28 = 0;
  (this->MarqueeMechanic).field0_0x0.DebugPtr = (URectangleMarqueeMechanic *)0x0;
  *(undefined8 *)&(this->SelectedPointIDs).Elements = 0;
  *(undefined8 *)&(this->SelectedPointIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedPointIDs).Elements.field_0x20 = 0;
  this->bGizmoBeingDragged = false;
  this->HoveredPointID = -1;
  this->bIsDraggingRectangle = false;
  *(undefined4 *)&(this->SelectedPointIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedPointIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedPointIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedPointIDs).Elements.field_0x34 = 0;
  (this->SelectedPointIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedPointIDs).HashSize = 0;
  *(undefined8 *)&(this->PreDragSelection).Elements = 0;
  *(undefined8 *)&(this->PreDragSelection).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->PreDragSelection).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->PreDragSelection).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->PreDragSelection).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->PreDragSelection).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PreDragSelection).Elements.field_0x34 = 0;
  (this->PreDragSelection).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->PreDragSelection).HashSize = 0;
  (this->CurrentDragSelection).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CurrentDragSelection).ArrayNum = 0;
  (this->CurrentDragSelection).ArrayMax = 0;
  *(undefined8 *)&this->SelectedPointStartPositions = 0;
  *(undefined8 *)&(this->SelectedPointStartPositions).field_0x8 = 0;
  *(undefined8 *)&(this->SelectedPointStartPositions).field_0x20 = 0;
  *(undefined4 *)&(this->SelectedPointStartPositions).field_0x28 = 0;
  *(undefined4 *)&(this->SelectedPointStartPositions).field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedPointStartPositions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedPointStartPositions).field_0x34 = 0;
  *(undefined8 *)&(this->SelectedPointStartPositions).field_0x40 = 0;
  *(undefined4 *)&(this->SelectedPointStartPositions).field_0x48 = 0;
  this->CurrentChangeStamp = 0;
  *(undefined8 *)&this->ColorOverrides = 0;
  *(undefined8 *)&(this->ColorOverrides).field_0x8 = 0;
  *(undefined8 *)&(this->ColorOverrides).field_0x20 = 0;
  *(undefined4 *)&(this->ColorOverrides).field_0x28 = 0;
  *(undefined4 *)&(this->ColorOverrides).field_0x2c = 0x80;
  *(undefined4 *)&(this->ColorOverrides).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ColorOverrides).field_0x34 = 0;
  *(undefined8 *)&(this->ColorOverrides).field_0x40 = 0;
  *(undefined4 *)&(this->ColorOverrides).field_0x48 = 0;
  (this->LongTransactions).OpenCount = 0;
  (this->LongTransactions).MaxOpen = 1;
  return this;
}

// ~ULatticeControlPointsMechanic @ 14cad22c0

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
ULatticeControlPointsMechanic::~ULatticeControlPointsMechanic(ULatticeControlPointsMechanic *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<FSetElementId> FVar3;
  longlong *plVar4;
  longlong *plVar5;
  FLongTransactionTracker *local_res8;
  
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickBehaviorTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  if ((this->LongTransactions).OpenCount != 0) {
    local_res8 = &this->LongTransactions;
    `UE::TransactionUtil::FLongTransactionTracker::~FLongTransactionTracker'::__l2::<lambda_1>::
    operator()(&local_res8);
  }
  *(undefined4 *)&(this->ColorOverrides).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ColorOverrides).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ColorOverrides);
  *(undefined4 *)&(this->SelectedPointStartPositions).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SelectedPointStartPositions).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SelectedPointStartPositions);
  pFVar2 = (this->CurrentDragSelection).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->PreDragSelection).HashSize = 0;
  FVar3 = (this->PreDragSelection).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PreDragSelection).Elements);
  (this->SelectedPointIDs).HashSize = 0;
  FVar3 = (this->SelectedPointIDs).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelectedPointIDs).Elements);
  if (*(longlong *)&this->GeometrySetToleranceTest != 0) {
    plVar4 = *(longlong **)&(this->GeometrySetToleranceTest).field_0x28;
    plVar5 = (longlong *)&(this->GeometrySetToleranceTest).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = plVar4;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)&this->ShouldRemoveFromSelectionFunc != 0) {
    plVar4 = *(longlong **)&(this->ShouldRemoveFromSelectionFunc).field_0x28;
    plVar5 = (longlong *)&(this->ShouldRemoveFromSelectionFunc).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = plVar4;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)&this->ShouldAddToSelectionFunc != 0) {
    plVar4 = *(longlong **)&(this->ShouldAddToSelectionFunc).field_0x28;
    plVar5 = (longlong *)&(this->ShouldAddToSelectionFunc).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar5 = plVar4;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  UE::Geometry::FGeometrySet3::~FGeometrySet3(&this->GeometrySet);
  pFVar2 = (this->LatticeEdges).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ControlPoints).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ShouldHideGizmo);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectionChanged).field_0x8,*(int *)&(this->OnSelectionChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnSelectionChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectionChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPointsChanged).field_0x8,*(int *)&(this->OnPointsChanged).field_0x10);
  pvVar1 = *(void **)&(this->OnPointsChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPointsChanged);
  *(undefined ***)&this->field_0x38 = &___7IModifierToggleBehaviorTarget__6B_;
  *(undefined ***)&this->field_0x30 = &___7IModifierToggleBehaviorTarget__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// operator() @ 14cad6710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`ULatticeControlPointsMechanic::Setup'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *param_1,TVector<double> *param_2)

{
  longlong lVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 0x22c) != '\0') {
    fVar6 = *(float *)(lVar1 + 0x224);
    dVar3 = ToolSceneQueriesUtil::GetDefaultVisualAngleSnapThreshD();
    dVar5 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
    dVar4 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
    fVar6 = (float)(dVar3 * (double)fVar6 * ___real_3f86c16c16c16c17);
    dVar3 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
    return dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3 < (double)(fVar6 * fVar6);
  }
  bVar2 = ToolSceneQueriesUtil::PointSnapQuery
                    ((FViewCameraState *)(lVar1 + 0x1e0),param_1,param_2,0.0);
  return bVar2;
}

// BeginHoverSequenceHitTest @ 14caec460

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
ULatticeControlPointsMechanic::BeginHoverSequenceHitTest
          (ULatticeControlPointsMechanic *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  HitTest((ULatticeControlPointsMechanic *)&this[-1].ColorOverrides.field_0x28,param_1,
          __return_storage_ptr__);
  return __return_storage_ptr__;
}

// ClearHover @ 14caf4680

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULatticeControlPointsMechanic::ClearHover(ULatticeControlPointsMechanic *this)

{
  if (-1 < this->HoveredPointID) {
    UPointSetComponent::SetPointColor
              ((this->DrawnControlPoints).field0_0x0.DebugPtr,this->HoveredPointID,
               &this->PreHoverPointColor);
    this->HoveredPointID = -1;
  }
  return;
}

// DeselectPoint @ 14cb011f0

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
ULatticeControlPointsMechanic::DeselectPoint(ULatticeControlPointsMechanic *this,int param_1)

{
  longlong lVar1;
  int iVar2;
  FColor *pFVar3;
  undefined1 *puVar4;
  UPointSetComponent *this_00;
  int local_res10 [2];
  
  if (*(int *)&(this->SelectedPointIDs).Elements.field_0x8 !=
      *(int *)&(this->SelectedPointIDs).Elements.field_0x34) {
    local_res10[0] = param_1;
    iVar2 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      (&this->SelectedPointIDs,param_1,local_res10);
    if (iVar2 != 0) {
      if (*(int *)&(this->ColorOverrides).field_0x8 != *(int *)&(this->ColorOverrides).field_0x34) {
        puVar4 = *(undefined1 **)&(this->ColorOverrides).field_0x40;
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &(this->ColorOverrides).field_0x38;
        }
        iVar2 = *(int *)(puVar4 + (ulonglong)
                                  (*(int *)&(this->ColorOverrides).field_0x48 - 1U & param_1) * 4);
        if (iVar2 != -1) {
          lVar1 = *(longlong *)&this->ColorOverrides;
          do {
            if (*(int *)(lVar1 + (longlong)iVar2 * 0x10) == param_1) {
              this_00 = (this->DrawnControlPoints).field0_0x0.DebugPtr;
              if (iVar2 == -1) goto LAB_14cb01282;
              pFVar3 = TMapBase<int,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FColor,0>_>
                       ::FindChecked((TMapBase<int,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FColor,0>_>
                                      *)&this->ColorOverrides,param_1);
              goto LAB_14cb01289;
            }
            iVar2 = *(int *)(lVar1 + 8 + (longlong)iVar2 * 0x10);
          } while (iVar2 != -1);
        }
      }
      this_00 = (this->DrawnControlPoints).field0_0x0.DebugPtr;
LAB_14cb01282:
      pFVar3 = &this->NormalPointColor;
LAB_14cb01289:
      UPointSetComponent::SetPointColor(this_00,param_1,pFVar3);
      return true;
    }
  }
  return false;
}

// DrawHUD @ 14cb027a0

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
ULatticeControlPointsMechanic::DrawHUD
          (ULatticeControlPointsMechanic *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb027aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->MarqueeMechanic).field0_0x0.DebugPtr + 0x2e0))();
  return;
}

// GetControlPoints @ 14cb0ee90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> * __thiscall
ULatticeControlPointsMechanic::GetControlPoints(ULatticeControlPointsMechanic *this)

{
  return &this->ControlPoints;
}

// GetCoordinateSystem @ 14cb0eea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

EToolContextCoordinateSystem __thiscall
ULatticeControlPointsMechanic::GetCoordinateSystem(ULatticeControlPointsMechanic *this)

{
  return ((this->PointTransformGizmo).field0_0x0.DebugPtr)->CurrentCoordinateSystem;
}

// GetPrivateStaticClass @ 14cb12480

UClass * __cdecl ULatticeControlPointsMechanic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULatticeControlPointsMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"LatticeControlPointsMechanic",
               &Z_Registration_Info_UClass_ULatticeControlPointsMechanic.InnerSingleton,
               StaticRegisterNativesULatticeControlPointsMechanic,0x500,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<ULatticeControlPointsMechanic>,
               InternalVTableHelperCtorCaller<ULatticeControlPointsMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULatticeControlPointsMechanic.InnerSingleton;
}

// GizmoTransformChanged @ 14cb17360

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
ULatticeControlPointsMechanic::GizmoTransformChanged
          (ULatticeControlPointsMechanic *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  TVector<double> *pTVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  int iVar22;
  uint *puVar23;
  int iVar24;
  uint uVar25;
  double dVar26;
  double dVar27;
  undefined1 local_res8 [8];
  undefined4 uStack_23c;
  undefined1 local_230 [24];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_210;
  undefined8 uStack_1f0;
  TQuaternion<double>_u_0 local_1e8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  TVector<double>_u_0 local_198;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  TVector<double> local_c8 [6];
  
  iVar24 = *(int *)&(this->SelectedPointIDs).Elements.field_0x8 -
           *(int *)&(this->SelectedPointIDs).Elements.field_0x34;
  if (((iVar24 != 0) && (this->bGizmoBeingDragged != false)) &&
     (((this->PointTransformProxy).field0_0x0.DebugPtr)->bSetPivotMode == false)) {
    dVar26 = (this->GizmoStartRotation).Z *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar27 = (this->GizmoStartRotation).W *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    uVar14 = 1;
    local_218 = &this->SelectedPointIDs;
    dVar9 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] *
            (this->GizmoStartRotation).X;
    dVar10 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
             (this->GizmoStartRotation).Y;
    dVar11 = (param_2->Rotation).XY.m128d_f64[0];
    dVar3 = (param_2->Rotation).XY.m128d_f64[1];
    dVar7 = (param_2->Rotation).ZW.m128d_f64[0];
    dVar8 = (param_2->Rotation).ZW.m128d_f64[1];
    local_e8 = (param_2->Scale3D).ZW.m128d_f64[0];
    local_1c8 = (param_2->Translation).XY.m128d_f64[0];
    dStack_1c0 = (param_2->Translation).XY.m128d_f64[1];
    local_1e8._s_0.X =
         dVar11 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar8 * dVar9 +
         dVar3 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar7 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_1e8._s_0.Y =
         dVar11 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
         dVar8 * dVar10 +
         dVar3 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
         dVar7 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_1b0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dStack_1a8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_1a0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_1b8 = (param_2->Translation).ZW.m128d_f64[0];
    local_1e8._s_0.Z =
         dVar11 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar8 * dVar26 +
         dVar3 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         dVar7 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_1e8._s_0.W =
         dVar11 * dVar9 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
         dVar8 * dVar27 +
         dVar3 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
         dVar7 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_f8 = (param_2->Scale3D).XY.m128d_f64[0];
    dStack_f0 = (param_2->Scale3D).XY.m128d_f64[1];
    iVar20 = 0;
    dVar11 = local_f8 / (this->GizmoStartScale).field0_0x0._s_0.X;
    dVar9 = dStack_f0 / (this->GizmoStartScale).field0_0x0._s_0.Y;
    dVar10 = local_e8 / (this->GizmoStartScale).field0_0x0._s_0.Z;
    puVar1 = &(this->SelectedPointIDs).Elements.field_0x10;
    iVar4 = *(int *)&(this->SelectedPointIDs).Elements.field_0x28;
    iVar22 = 0;
    iVar18 = 0;
    iVar15 = 0;
    if (iVar4 != 0) {
      puVar23 = *(uint **)&(this->SelectedPointIDs).Elements.field_0x20;
      if (puVar23 == (uint *)0x0) {
        puVar23 = (uint *)puVar1;
      }
      uVar19 = *puVar23;
      while (uVar19 == 0) {
        lVar17 = (longlong)iVar20;
        iVar22 = iVar22 + 0x20;
        iVar20 = iVar20 + 1;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) {
          iVar18 = *(int *)&(this->SelectedPointIDs).Elements.field_0x28;
          iVar15 = iVar4;
          goto LAB_14cb17629;
        }
        uVar19 = puVar23[lVar17 + 1];
      }
      iVar18 = *(int *)&(this->SelectedPointIDs).Elements.field_0x28;
      uVar14 = -uVar19 & uVar19;
      uVar2 = (ulonglong)uVar14 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar15 = iVar22 + -1 + (int)lVar17;
      if (iVar18 < iVar15) {
        iVar15 = iVar4;
      }
    }
LAB_14cb17629:
    uVar19 = *(uint *)&(this->SelectedPointIDs).Elements.field_0x28;
    uVar25 = uVar19 & 0xffffffe0;
    TStack_210._padding_ = CONCAT44(uVar14,iVar20);
    TStack_210.CurrentBitIndex = iVar15;
    TStack_210.UnvisitedBitMask = 0xffffffff;
    TStack_210._28_4_ = iVar15;
    TStack_210.BaseBitIndex = iVar22;
    uStack_1f0 = CONCAT44(uStack_23c,iVar24);
    iVar24 = (int)uVar19 >> 5;
    TStack_210.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    local_e0 = local_1c8;
    dStack_d8 = dStack_1c0;
    local_d0 = local_1b8;
    if ((((int)uVar19 < 0) || (iVar18 < (int)uVar19)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar14 = *(uint *)&(this->SelectedPointIDs).Elements.field_0x28;
    if (uVar19 != uVar14) {
      puVar21 = *(undefined1 **)&(this->SelectedPointIDs).Elements.field_0x20;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = puVar1;
      }
      uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar24 * 4);
      while (uVar19 == 0) {
        lVar17 = (longlong)iVar24;
        uVar25 = uVar25 + 0x20;
        iVar24 = iVar24 + 1;
        uVar19 = uVar14;
        if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar24)
        goto LAB_14cb17730;
        uVar19 = *(uint *)(puVar21 + lVar17 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
      lVar17 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar19 = (int)lVar17 + -1 + uVar25;
      if ((int)uVar14 < (int)uVar19) {
        uVar19 = uVar14;
      }
    }
LAB_14cb17730:
    while( true ) {
      pTVar12 = local_218;
      if (*(int *)&(local_218->Elements).field_0x8 - *(int *)&(local_218->Elements).field_0x34 !=
          (int)uStack_1f0) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (((TStack_210.CurrentBitIndex == uVar19) &&
          (TStack_210.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
         (pTVar12 == &this->SelectedPointIDs)) break;
      uVar14 = *(uint *)(*(longlong *)&pTVar12->Elements +
                        (longlong)TStack_210.CurrentBitIndex * 0xc);
      lVar17 = (longlong)(int)uVar14;
      pTVar16 = TMapBase<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
                ::FindChecked((TMapBase<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
                               *)&this->SelectedPointStartPositions,uVar14);
      dVar3 = (this->GizmoStartPosition).field0_0x0._s_0.Z;
      dVar7 = (this->GizmoStartRotation).W *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar8 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1] *
              (this->GizmoStartRotation).Y;
      local_108._8_4_ = SUB84(dVar7,0);
      local_108._0_8_ =
           (this->GizmoStartRotation).Z *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      local_108._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      local_198._s_0.X = (pTVar16->field0_0x0)._s_0.X - (this->GizmoStartPosition).field0_0x0._s_0.X
      ;
      local_198._s_0.Z = (pTVar16->field0_0x0)._s_0.Z - dVar3;
      local_198._s_0.Y = (pTVar16->field0_0x0)._s_0.Y - (this->GizmoStartPosition).field0_0x0._s_0.Y
      ;
      local_118._8_4_ = SUB84(dVar8,0);
      local_118._0_8_ =
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0] *
           (this->GizmoStartRotation).X;
      local_118._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      local_230._16_8_ = dVar3;
      UE::Math::TQuat<double>::RotateVector
                ((TQuat<double> *)local_118,(TVector<double> *)&local_178._s_0,
                 (TVector<double> *)&local_198._s_0);
      local_158._s_0.X = local_178._s_0.X * dVar11;
      local_158._s_0.Y = local_178._s_0.Y * dVar9;
      local_158._s_0.Z = local_178._s_0.Z * dVar10;
      UE::Math::TQuat<double>::RotateVector
                (&this->GizmoStartRotation,(TVector<double> *)&local_138._s_0,
                 (TVector<double> *)&local_158._s_0);
      local_230._0_8_ = local_138._s_0.X * local_1b0;
      local_230._16_4_ = SUB84(local_138._s_0.Z * local_1a0,0);
      local_230._8_8_ = local_138._s_0.Y * dStack_1a8;
      local_230._20_4_ = (int)((ulonglong)(local_138._s_0.Z * local_1a0) >> 0x20);
      pTVar16 = UE::Geometry::operator*<double>
                          (local_c8,(TQuaternion<double> *)&local_1e8._s_0,
                           (TVector<double> *)local_230);
      dVar3 = local_1c8 + (pTVar16->field0_0x0)._s_0.X;
      dVar7 = dStack_1c0 + (pTVar16->field0_0x0)._s_0.Y;
      dVar8 = local_1b8 + (pTVar16->field0_0x0)._s_0.Z;
      uVar25 = 0;
      if ((int)uVar14 < (this->ControlPoints).ArrayNum) {
        uVar25 = ~uVar14 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->ControlPoints).AllocatorInstance.Data;
      *(double *)(pFVar5 + lVar17 * 0x18) = dVar3;
      *(double *)(pFVar5 + lVar17 * 0x18 + 8) = dVar7;
      *(double *)(pFVar5 + lVar17 * 0x18 + 0x10) = dVar8;
      TStack_210.UnvisitedBitMask = TStack_210.UnvisitedBitMask & ~TStack_210._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_210);
    }
    UpdateDrawables(this);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnPointsChanged);
  }
  return;
}

// GizmoTransformEnded @ 14cb19710

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
ULatticeControlPointsMechanic::GizmoTransformEnded
          (ULatticeControlPointsMechanic *this,UTransformProxy *param_1)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar7;
  bool bVar8;
  UObject *pUVar9;
  FLatticeControlPointsMechanicMovementChange *this_00;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  undefined1 auStack_148 [32];
  undefined1 local_118 [4];
  uint local_114;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_110;
  int iStack_108;
  uint uStack_104;
  undefined1 *local_100;
  undefined4 uStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  int local_dc;
  TPairInitializer<int_const_&,UE::Math::TVector<double>_const_&> local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  uint *local_98;
  FScriptContainerElement *local_90;
  TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_148;
  local_88.Elements._44_4_ = 0x80;
  puVar1 = &(this->SelectedPointIDs).Elements.field_0x10;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  pTVar2 = &this->SelectedPointIDs;
  local_88.Elements._32_8_ = 0;
  iStack_108 = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._52_4_ = 0;
  uStack_104 = 1;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_f0 = 0;
  local_88.HashSize = 0;
  local_88.Elements._48_4_ = 0xffffffff;
  iVar4 = *(int *)&(this->SelectedPointIDs).Elements.field_0x28;
  iStack_f4 = local_f0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->SelectedPointIDs).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    local_f0 = 0;
    iStack_108 = 0;
    while (uVar13 == 0) {
      lVar10 = (longlong)iStack_108;
      local_f0 = local_f0 + 0x20;
      iStack_108 = iStack_108 + 1;
      iStack_f4 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_108) goto LAB_14cb197fe;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_104 = -uVar13 & uVar13;
    uVar3 = (ulonglong)uStack_104 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_e0 = (int)lVar10;
    iStack_f4 = local_f0 + -1 + local_e0;
    if (iVar4 < iStack_f4) {
      iStack_f4 = iVar4;
    }
  }
LAB_14cb197fe:
  uVar13 = *(uint *)&(this->SelectedPointIDs).Elements.field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  iStack_e8 = *(int *)&(this->SelectedPointIDs).Elements.field_0x8 -
              *(int *)&(this->SelectedPointIDs).Elements.field_0x34;
  uStack_f8 = 0xffffffff;
  TStack_c0._padding_ = CONCAT44(uStack_104,iStack_108);
  TStack_c0.CurrentBitIndex = iStack_f4;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar13 >> 5;
  TStack_c0._28_4_ = iStack_f4;
  TStack_c0.BaseBitIndex = local_f0;
  uStack_a0 = CONCAT44(uStack_e4,iStack_e8);
  local_110 = pTVar2;
  local_100 = puVar1;
  iStack_ec = iStack_f4;
  local_c8 = pTVar2;
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar5 = *(uint *)&(this->SelectedPointIDs).Elements.field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&(this->SelectedPointIDs).Elements.field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar11 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar11;
      uVar12 = uVar12 + 0x20;
      iVar11 = iVar11 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14cb19910;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_dc = (int)lVar10;
    uVar13 = local_dc + -1 + uVar12;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_14cb19910:
  while( true ) {
    pTVar7 = local_c8;
    if (*(int *)&(local_c8->Elements).field_0x8 - *(int *)&(local_c8->Elements).field_0x34 !=
        (int)uStack_a0) {
      local_118[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_118);
    }
    if (((TStack_c0.CurrentBitIndex == uVar13) &&
        (TStack_c0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    {
      bVar8 = this->bHasChanged;
      this->bHasChanged = true;
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
      lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
      pcVar6 = *(code **)(*(longlong *)(lVar10 + 0x28) + 0x20);
      this_00 = ::operator_new(0xb0);
      local_d8.Value = (TVector<double> *)0x0;
      if (this_00 != (FLatticeControlPointsMechanicMovementChange *)0x0) {
        local_d8.Value =
             (TVector<double> *)
             FLatticeControlPointsMechanicMovementChange::
             FLatticeControlPointsMechanicMovementChange
                       (this_00,&this->SelectedPointStartPositions,
                        (TMap<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
                         *)&local_88,this->CurrentChangeStamp,bVar8 == false);
      }
      (*pcVar6)(lVar10 + 0x28,this,&local_d8.Value,&LatticePointMovementTransactionText);
      TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
               *)&this->SelectedPointStartPositions);
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
      lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
      (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x18))(lVar10 + 0x28);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnPointsChanged);
      this->bGizmoBeingDragged = false;
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    local_114 = *(uint *)(*(longlong *)&pTVar7->Elements + (longlong)TStack_c0.CurrentBitIndex * 0xc
                         );
    lVar10 = (longlong)(int)local_114;
    uVar12 = 0;
    if ((int)local_114 < (this->ControlPoints).ArrayNum) {
      uVar12 = ~local_114 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) break;
    local_98 = &local_114;
    local_90 = (this->ControlPoints).AllocatorInstance.Data + lVar10 * 0x18;
    TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Math::TVector<double>_const_&>_>
              (&local_88,&local_d8,(bool *)&local_98);
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// GizmoTransformStarted @ 14cb1a090

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
ULatticeControlPointsMechanic::GizmoTransformStarted
          (ULatticeControlPointsMechanic *this,UTransformProxy *param_1)

{
  undefined1 *puVar1;
  TMap<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar12;
  bool bVar13;
  uint uVar14;
  UObject *pUVar15;
  longlong lVar16;
  undefined4 *puVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 auStackY_278 [32];
  undefined1 local_248 [4];
  uint local_244;
  int local_240;
  int local_23c;
  TPairInitializer<int_const_&,UE::Math::TVector<double>_const_&> local_238;
  int iStack_228;
  uint uStack_224;
  undefined1 *local_220;
  undefined4 uStack_218;
  int iStack_214;
  int local_210;
  undefined4 uStack_20c;
  int iStack_208;
  undefined4 uStack_204;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  undefined8 uStack_1d8;
  uint *local_1d0;
  FScriptContainerElement *local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  double local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined4 local_174;
  undefined1 local_168 [96];
  undefined1 local_108 [192];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  pUVar15 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar16 = (**(code **)(*(longlong *)pUVar15 + 0x2d8))(pUVar15);
  (**(code **)(*(longlong *)(lVar16 + 0x28) + 0x10))
            (lVar16 + 0x28,&LatticePointMovementTransactionText);
  lVar16 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,local_168);
  local_1c0 = *(undefined4 *)(lVar16 + 0x20);
  uStack_1bc = *(undefined4 *)(lVar16 + 0x24);
  uStack_1b8 = *(undefined4 *)(lVar16 + 0x28);
  uStack_1b4 = *(undefined4 *)(lVar16 + 0x2c);
  local_1b0 = *(double *)(lVar16 + 0x30);
  *(undefined4 *)&(this->GizmoStartPosition).field0_0x0 = local_1c0;
  *(undefined4 *)((longlong)&(this->GizmoStartPosition).field0_0x0 + 4) = uStack_1bc;
  *(undefined4 *)((longlong)&(this->GizmoStartPosition).field0_0x0 + 8) = uStack_1b8;
  *(undefined4 *)((longlong)&(this->GizmoStartPosition).field0_0x0 + 0xc) = uStack_1b4;
  (this->GizmoStartPosition).field0_0x0._s_0.Z = local_1b0;
  puVar17 = (undefined4 *)(**(code **)(param_1->_padding_ + 0x2c0))(param_1,local_108);
  uVar5 = puVar17[1];
  uVar6 = puVar17[2];
  uVar7 = puVar17[3];
  uVar8 = puVar17[4];
  uVar9 = puVar17[5];
  uVar10 = puVar17[6];
  uVar11 = puVar17[7];
  *(undefined4 *)&(this->GizmoStartRotation).X = *puVar17;
  *(undefined4 *)((longlong)&(this->GizmoStartRotation).X + 4) = uVar5;
  *(undefined4 *)&(this->GizmoStartRotation).Y = uVar6;
  *(undefined4 *)((longlong)&(this->GizmoStartRotation).Y + 4) = uVar7;
  *(undefined4 *)&(this->GizmoStartRotation).Z = uVar8;
  *(undefined4 *)((longlong)&(this->GizmoStartRotation).Z + 4) = uVar9;
  *(undefined4 *)&(this->GizmoStartRotation).W = uVar10;
  *(undefined4 *)((longlong)&(this->GizmoStartRotation).W + 4) = uVar11;
  lVar16 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1);
  this_00 = &this->SelectedPointStartPositions;
  local_1a8 = *(double *)(lVar16 + 0x40);
  dStack_1a0 = *(double *)(lVar16 + 0x48);
  local_198 = *(double *)(lVar16 + 0x50);
  (this->GizmoStartScale).field0_0x0._s_0.X = local_1a8;
  (this->GizmoStartScale).field0_0x0._s_0.Y = dStack_1a0;
  (this->GizmoStartScale).field0_0x0._s_0.Z = local_198;
  bVar13 = 1 < *(int *)&(this->SelectedPointStartPositions).field_0x48;
  if (!bVar13) {
    TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->SelectedPointStartPositions).field_0xc;
  *(undefined4 *)&(this->SelectedPointStartPositions).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SelectedPointStartPositions).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedPointStartPositions).field_0x34 = 0;
  iVar3 = *(int *)&(this->SelectedPointStartPositions).field_0x2c;
  *(undefined4 *)&(this->SelectedPointStartPositions).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->SelectedPointStartPositions).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->SelectedPointStartPositions).field_0x10,0);
  }
  uVar14 = 1;
  if (bVar13) {
    *(undefined4 *)&(this->SelectedPointStartPositions).field_0x48 = 1;
    TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  puVar1 = &(this->SelectedPointIDs).Elements.field_0x10;
  iStack_228 = 0;
  iVar3 = *(int *)&(this->SelectedPointIDs).Elements.field_0x28;
  local_238.Value = (TVector<double> *)&this->SelectedPointIDs;
  local_210 = 0;
  iStack_214 = 0;
  if (iVar3 != 0) {
    puVar21 = *(uint **)&(this->SelectedPointIDs).Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar1;
    }
    uVar19 = *puVar21;
    while (uVar19 == 0) {
      lVar16 = (longlong)iStack_228;
      local_210 = local_210 + 0x20;
      iStack_228 = iStack_228 + 1;
      iStack_214 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_228) goto LAB_14cb1a291;
      uVar19 = puVar21[lVar16 + 1];
    }
    uVar14 = -uVar19 & uVar19;
    uVar2 = (ulonglong)uVar14 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_240 = (int)lVar16;
    iStack_214 = local_210 + -1 + local_240;
    if (iVar3 < iStack_214) {
      iStack_214 = iVar3;
    }
  }
LAB_14cb1a291:
  uStack_20c = local_174;
  iStack_208 = *(int *)&(this->SelectedPointIDs).Elements.field_0x8 -
               *(int *)&(this->SelectedPointIDs).Elements.field_0x34;
  uVar19 = *(uint *)&(this->SelectedPointIDs).Elements.field_0x28;
  uStack_218 = 0xffffffff;
  TStack_1f8._padding_ = CONCAT44(uVar14,iStack_228);
  uVar22 = uVar19 & 0xffffffe0;
  TStack_1f8.CurrentBitIndex = iStack_214;
  TStack_1f8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar19 >> 5;
  TStack_1f8._28_4_ = local_174;
  TStack_1f8.BaseBitIndex = local_210;
  uStack_1d8 = CONCAT44(uStack_204,iStack_208);
  uStack_224 = uVar14;
  local_220 = puVar1;
  local_200 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_238.Value;
  TStack_1f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar3 < (int)uVar19)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar14 = *(uint *)&(this->SelectedPointIDs).Elements.field_0x28;
  if (uVar19 != uVar14) {
    puVar20 = *(undefined1 **)&(this->SelectedPointIDs).Elements.field_0x20;
    if (puVar20 == (undefined1 *)0x0) {
      puVar20 = puVar1;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar18 * 4);
    while (uVar19 == 0) {
      lVar16 = (longlong)iVar18;
      uVar22 = uVar22 + 0x20;
      iVar18 = iVar18 + 1;
      uVar19 = uVar14;
      if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
      goto LAB_14cb1a3b0;
      uVar19 = *(uint *)(puVar20 + lVar16 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_23c = (int)lVar16;
    uVar19 = local_23c + -1 + uVar22;
    if ((int)uVar14 < (int)uVar19) {
      uVar19 = uVar14;
    }
  }
LAB_14cb1a3b0:
  while( true ) {
    pTVar12 = local_200;
    if (*(int *)&(local_200->Elements).field_0x8 - *(int *)&(local_200->Elements).field_0x34 !=
        (int)uStack_1d8) {
      local_248[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_248);
    }
    if (((TStack_1f8.CurrentBitIndex == uVar19) &&
        (TStack_1f8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == &this->SelectedPointIDs)) break;
    local_244 = *(uint *)(*(longlong *)&pTVar12->Elements +
                         (longlong)TStack_1f8.CurrentBitIndex * 0xc);
    lVar16 = (longlong)(int)local_244;
    uVar14 = 0;
    if ((int)local_244 < (this->ControlPoints).ArrayNum) {
      uVar14 = ~local_244 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_1d0 = &local_244;
    local_1c8 = (this->ControlPoints).AllocatorInstance.Data + lVar16 * 0x18;
    TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,UE::Math::TVector<double>_const_&>_>
              ((TSet<TTuple<int,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
                *)this_00,&local_238,(bool *)&local_1d0);
    TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
  }
  this->bGizmoBeingDragged = true;
  return;
}

// HitTest @ 14cb1b800

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
ULatticeControlPointsMechanic::HitTest
          (ULatticeControlPointsMechanic *this,FInputDeviceRay *param_1,FInputRayHit *param_2)

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

// Initialize @ 14cb1cfc0

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
ULatticeControlPointsMechanic::Initialize
          (ULatticeControlPointsMechanic *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> *param_2,
          TTransform<double> *param_3)

{
  undefined1 *puVar1;
  int *piVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  TArray<UE::Geometry::FVector2i,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  bool bVar5;
  double dVar6;
  
  dVar6 = (param_3->Rotation).XY.m128d_f64[1];
  (this->LocalToWorldTransform).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  (this->LocalToWorldTransform).Rotation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_3->Rotation).ZW.m128d_f64[1];
  (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_3->Translation).XY.m128d_f64[1];
  (this->LocalToWorldTransform).Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0]
  ;
  (this->LocalToWorldTransform).Translation.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_3->Translation).ZW.m128d_f64[1];
  (this->LocalToWorldTransform).Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0]
  ;
  (this->LocalToWorldTransform).Translation.ZW.m128d_f64[1] = dVar6;
  dVar6 = (param_3->Scale3D).XY.m128d_f64[1];
  (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[1] = dVar6;
  dVar6 = (param_3->Scale3D).ZW.m128d_f64[1];
  (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1] = dVar6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ControlPoints,param_1);
  this_00 = &this->SelectedPointIDs;
  bVar5 = 1 < (this->SelectedPointIDs).HashSize;
  if (!bVar5) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar1 = &(this->SelectedPointIDs).Elements.field_0xc;
  *(undefined4 *)&(this->SelectedPointIDs).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SelectedPointIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedPointIDs).Elements.field_0x34 = 0;
  iVar4 = *(int *)&(this->SelectedPointIDs).Elements.field_0x2c;
  *(undefined4 *)&(this->SelectedPointIDs).Elements.field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->SelectedPointIDs).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->SelectedPointIDs).Elements.field_0x10
               ,0);
  }
  if (bVar5) {
    (this->SelectedPointIDs).HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  pTVar3 = &this->LatticeEdges;
  if (pTVar3 != param_2) {
    iVar4 = param_2->ArrayNum;
    piVar2 = &(this->LatticeEdges).ArrayMax;
    _Src = (param_2->AllocatorInstance).Data;
    (this->LatticeEdges).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,_Src,(longlong)iVar4 << 3);
      }
    }
  }
  UpdateGizmoLocation(this);
  RebuildDrawables(this);
  this->CurrentChangeStamp = this->CurrentChangeStamp + 1;
  this->bHasChanged = false;
  return;
}

// IsHitByClick @ 14cb222a0

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
ULatticeControlPointsMechanic::IsHitByClick
          (ULatticeControlPointsMechanic *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  double dVar1;
  bool bVar2;
  FWeakObjectPtr local_res8;
  undefined8 local_res20;
  FInputRayHit local_58;
  
  dVar1 = __real_47efffffe0000000;
  local_58.HitDepth = __real_47efffffe0000000;
  local_58.HitNormal.field0_0x0._s_0.Z = __real_3ff0000000000000;
  local_58.HitNormal.field0_0x0._s_0.X = 0.0;
  local_58.HitNormal.field0_0x0._s_0.Y = 0.0;
  local_58.HitIdentifier = 0;
  local_58.bHit = false;
  local_58._40_4_ = local_58._40_4_ & 0xffffff00;
  local_58.HitOwner = (void *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  local_58.HitObject.WeakPtr = local_res8;
  bVar2 = HitTest((ULatticeControlPointsMechanic *)&this[-1].ColorOverrides.field_0x30,param_1,
                  &local_58);
  if (bVar2) {
    *(ulonglong *)__return_storage_ptr__ = CONCAT71(local_58._1_7_,local_58.bHit);
    __return_storage_ptr__->HitDepth = local_58.HitDepth;
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = local_58.HitNormal.field0_0x0._s_0.X;
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = local_58.HitNormal.field0_0x0._s_0.Y;
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = local_58.HitNormal.field0_0x0._s_0.Z;
    __return_storage_ptr__->bHasHitNormal = (bool)local_58.bHasHitNormal;
    *(int3 *)&__return_storage_ptr__->field_0x29 = local_58._41_3_;
    __return_storage_ptr__->HitIdentifier = local_58.HitIdentifier;
    __return_storage_ptr__->HitOwner = local_58.HitOwner;
    (__return_storage_ptr__->HitObject).WeakPtr = local_58.HitObject.WeakPtr;
  }
  else {
    FInputRayHit::FInputRayHit(__return_storage_ptr__,dVar1);
  }
  return __return_storage_ptr__;
}

// OnBeginHover @ 14cb23c20

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
ULatticeControlPointsMechanic::OnBeginHover
          (ULatticeControlPointsMechanic *this,FInputDeviceRay *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb23c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x28))();
  return;
}

// OnClicked @ 14cb25880

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
ULatticeControlPointsMechanic::OnClicked
          (ULatticeControlPointsMechanic *this,FInputDeviceRay *param_1)

{
  undefined1 *puVar1;
  undefined1 *this_00;
  double *pdVar2;
  undefined4 uVar3;
  int iVar4;
  TObjectPtr<ULineSetComponent>_u_0 TVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  UObject *pUVar10;
  longlong lVar11;
  undefined8 uVar12;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar13;
  undefined8 *puVar14;
  int *piVar15;
  TObjectPtr<UTransformProxy>_u_0 *pTVar16;
  float *pfVar17;
  longlong *plVar18;
  undefined1 auStackY_1c8 [32];
  undefined8 local_198;
  initializer_list<int> local_188;
  TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  local_178;
  FNearest local_148;
  TVector<double>_u_0 local_f8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  int local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x4f8);
  lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x2d8))(pUVar10);
  (**(code **)(*(longlong *)(lVar11 + 0x28) + 0x10))
            (lVar11 + 0x28,&LatticePointSelectionTransactionText);
  local_6c = 0x80;
  this_00 = &(this->GeometrySetToleranceTest).field_0x18;
  local_98._0_8_ = (FScriptContainerElement *)0x0;
  local_98._8_8_ = 0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  local_50 = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00);
  local_178._0_8_ = *(undefined8 *)&(this->ShouldRemoveFromSelectionFunc).field_0x20;
  local_178._40_8_ = 0;
  if (local_178._0_8_ != 0) {
    pTVar16 = &(this->PointTransformProxy).field0_0x0;
    if (*(TObjectPtr<UTransformProxy>_u_0 **)&this->field_0x2f8 !=
        (TObjectPtr<UTransformProxy>_u_0 *)0x0) {
      pTVar16 = *(TObjectPtr<UTransformProxy>_u_0 **)&this->field_0x2f8;
    }
    (**(code **)pTVar16->DebugPtr)(pTVar16,&local_178.field_0x10);
  }
  local_f8._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  local_f8._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  local_f8._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  dStack_e0 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  local_d8 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  dStack_d0 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  bVar8 = UE::Geometry::FGeometrySet3::FindNearestPointToRay
                    ((FGeometrySet3 *)&(this->LocalToWorldTransform).Translation.ZW,
                     (TRay<double> *)&local_f8._s_0,&local_148,&local_178);
  if (bVar8) {
    UE::Core::Private::Function::CheckCallable((this->DrawnLatticeEdges).field0_0x0.DebugPtr);
    TVar5 = (this->DrawnLatticeEdges).field0_0x0;
    pfVar17 = &this->SegmentsThickness;
    if (*(float **)&this->field_0x278 != (float *)0x0) {
      pfVar17 = *(float **)&this->field_0x278;
    }
    uVar12 = (**(code **)(*(longlong *)pfVar17 + 8))();
    cVar9 = (*(code *)TVar5)(uVar12);
    plVar18 = (longlong *)&(this->ShouldAddToSelectionFunc).field_0x10;
    if (cVar9 == '\0') {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->ShouldAddToSelectionFunc);
      plVar6 = *(longlong **)&(this->ShouldAddToSelectionFunc).field_0x28;
      pcVar7 = *(code **)&this->ShouldAddToSelectionFunc;
      if (plVar6 != (longlong *)0x0) {
        plVar18 = plVar6;
      }
      uVar12 = (**(code **)(*plVar18 + 8))(plVar18);
      cVar9 = (*pcVar7)(uVar12);
      if (cVar9 != '\0') {
        local_198 = (code *)CONCAT44(local_198._4_4_,local_148.ID);
        if (*(int *)&(this->GeometrySetToleranceTest).field_0x20 !=
            *(int *)&(this->SelectedPointIDs).Elements.field_0x4) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,local_148.ID,
                     (int *)&local_198);
        }
        goto LAB_14cb25ba9;
      }
      local_198 = (code *)CONCAT44(local_198._4_4_,local_148.ID);
      local_188._First = (int *)&local_198;
      local_188._Last = (int *)((longlong)&local_198 + 4);
      pTVar13 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&local_f8._s_0,
                           &local_188);
      if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00 != pTVar13) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,pTVar13);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->ShouldAddToSelectionFunc);
      plVar6 = *(longlong **)&(this->ShouldAddToSelectionFunc).field_0x28;
      pcVar7 = *(code **)&this->ShouldAddToSelectionFunc;
      if (plVar6 != (longlong *)0x0) {
        plVar18 = plVar6;
      }
      uVar12 = (**(code **)(*plVar18 + 8))(plVar18);
      cVar9 = (*pcVar7)(uVar12);
      if (cVar9 == '\0') {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,
                   (int *)&local_198,(bool *)&local_148);
        goto LAB_14cb25ba9;
      }
      local_198 = (code *)CONCAT44(local_198._4_4_,local_148.ID);
      local_188._First = (int *)&local_198;
      local_188._Last = (int *)((longlong)&local_198 + 4);
      pTVar13 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&local_f8._s_0,
                           &local_188);
      LatticeControlPointMechanicLocals::Toggle
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,pTVar13);
    }
    iStack_b0 = 0;
    if ((void *)CONCAT44(iStack_b4,local_b8) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(iStack_b4,local_b8));
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_f8._s_0);
  }
  else {
    bVar8 = 1 < *(int *)&(this->SelectedPointIDs).Elements.field_0x18;
    if (!bVar8) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00);
    }
    puVar1 = &(this->GeometrySetToleranceTest).field_0x24;
    *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x20 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->SelectedPointIDs).Elements.field_0x4 = 0;
    *(undefined4 *)&(this->SelectedPointIDs).Elements = 0xffffffff;
    *(undefined4 *)&this->bIsDraggingRectangle = 0;
    if ((*(int *)&this->field_0x344 < 0) || (0x80 < *(int *)&this->field_0x344)) {
      *(undefined4 *)&this->field_0x344 = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->GeometrySetToleranceTest).field_0x28,0);
    }
    if (bVar8) {
      *(undefined4 *)&(this->SelectedPointIDs).Elements.field_0x18 = 1;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00);
    }
  }
LAB_14cb25ba9:
  if ((local_98._8_4_ - local_64 !=
       *(int *)&(this->GeometrySetToleranceTest).field_0x20 -
       *(int *)&(this->SelectedPointIDs).Elements.field_0x4) ||
     (bVar8 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,
                         (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00), !bVar8))
  {
    (**(code **)(**(longlong **)&this->ShouldRemoveFromSelectionFunc + 0x2c0))
              (*(longlong **)&this->ShouldRemoveFromSelectionFunc,&local_f8);
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x4f8);
    lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x2d8))(pUVar10);
    local_188._First = *(int **)(*(longlong *)(lVar11 + 0x28) + 0x20);
    puVar14 = ::operator_new(0x130);
    pdVar2 = &(this->GizmoStartRotation).Y;
    if (puVar14 != (undefined8 *)0x0) {
      uVar3 = *(undefined4 *)pdVar2;
      *puVar14 = &___7FLatticeControlPointsMechanicSelectionChange__6B_;
      *(undefined8 *)
       &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar14 + 1))->Elements = 0;
      puVar14[2] = 0;
      puVar14[5] = 0;
      *(undefined4 *)(puVar14 + 6) = 0;
      *(undefined4 *)((longlong)puVar14 + 0x34) = 0x80;
      *(undefined4 *)(puVar14 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)puVar14 + 0x3c) = 0;
      puVar14[9] = 0;
      *(undefined4 *)(puVar14 + 10) = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar14 + 1),
                 (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98);
      *(undefined1 *)(puVar14 + 0xb) = 0;
      puVar14[0xc] = local_f8._s_0.X;
      puVar14[0xd] = local_f8._s_0.Y;
      puVar14[0xe] = local_f8._s_0.Z;
      puVar14[0xf] = dStack_e0;
      puVar14[0x10] = local_d8;
      puVar14[0x11] = dStack_d0;
      puVar14[0x12] = local_c8;
      puVar14[0x13] = uStack_c0;
      puVar14[0x14] = CONCAT44(iStack_b4,local_b8);
      puVar14[0x15] = CONCAT44(iStack_ac,iStack_b0);
      puVar14[0x16] = local_a8;
      puVar14[0x17] = uStack_a0;
      puVar14[0x18] = local_f8._s_0.X;
      puVar14[0x19] = local_f8._s_0.Y;
      puVar14[0x1a] = local_f8._s_0.Z;
      puVar14[0x1b] = dStack_e0;
      puVar14[0x1c] = local_d8;
      puVar14[0x1d] = dStack_d0;
      puVar14[0x1e] = local_c8;
      puVar14[0x1f] = uStack_c0;
      *(int *)(puVar14 + 0x20) = local_b8;
      *(int *)((longlong)puVar14 + 0x104) = iStack_b4;
      *(int *)(puVar14 + 0x21) = iStack_b0;
      *(int *)((longlong)puVar14 + 0x10c) = iStack_ac;
      puVar14[0x22] = local_a8;
      puVar14[0x23] = uStack_a0;
      *(undefined4 *)(puVar14 + 0x24) = uVar3;
    }
    local_198 = (code *)puVar14;
    (*(code *)local_188._First)
              (lVar11 + 0x28,&this[-1].ColorOverrides.field_0x30,&local_198,
               &LatticePointDeselectionTransactionText);
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x4f8);
    lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x2d8))(pUVar10);
    local_198 = *(code **)(*(longlong *)(lVar11 + 0x28) + 0x20);
    piVar15 = ::operator_new(0x130);
    if (piVar15 == (int *)0x0) {
      piVar15 = (int *)0x0;
    }
    else {
      iVar4 = *(int *)pdVar2;
      *(undefined ***)piVar15 = &___7FLatticeControlPointsMechanicSelectionChange__6B_;
      *(undefined8 *)
       &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(piVar15 + 2))->Elements = 0;
      piVar15[4] = 0;
      piVar15[5] = 0;
      piVar15[10] = 0;
      piVar15[0xb] = 0;
      piVar15[0xc] = 0;
      piVar15[0xd] = 0x80;
      piVar15[0xe] = -1;
      piVar15[0xf] = 0;
      piVar15[0x12] = 0;
      piVar15[0x13] = 0;
      piVar15[0x14] = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(piVar15 + 2),
                 (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00);
      *(undefined1 *)(piVar15 + 0x16) = 1;
      *(double *)(piVar15 + 0x18) = local_f8._s_0.X;
      *(double *)(piVar15 + 0x1a) = local_f8._s_0.Y;
      *(double *)(piVar15 + 0x1c) = local_f8._s_0.Z;
      *(double *)(piVar15 + 0x1e) = dStack_e0;
      *(double *)(piVar15 + 0x20) = local_d8;
      *(double *)(piVar15 + 0x22) = dStack_d0;
      *(undefined8 *)(piVar15 + 0x24) = local_c8;
      *(undefined8 *)(piVar15 + 0x26) = uStack_c0;
      *(ulonglong *)(piVar15 + 0x28) = CONCAT44(iStack_b4,local_b8);
      *(ulonglong *)(piVar15 + 0x2a) = CONCAT44(iStack_ac,iStack_b0);
      *(undefined8 *)(piVar15 + 0x2c) = local_a8;
      *(undefined8 *)(piVar15 + 0x2e) = uStack_a0;
      *(double *)(piVar15 + 0x30) = local_f8._s_0.X;
      *(double *)(piVar15 + 0x32) = local_f8._s_0.Y;
      *(double *)(piVar15 + 0x34) = local_f8._s_0.Z;
      *(double *)(piVar15 + 0x36) = dStack_e0;
      *(double *)(piVar15 + 0x38) = local_d8;
      *(double *)(piVar15 + 0x3a) = dStack_d0;
      *(undefined8 *)(piVar15 + 0x3c) = local_c8;
      *(undefined8 *)(piVar15 + 0x3e) = uStack_c0;
      piVar15[0x40] = local_b8;
      piVar15[0x41] = iStack_b4;
      piVar15[0x42] = iStack_b0;
      piVar15[0x43] = iStack_ac;
      *(undefined8 *)(piVar15 + 0x44) = local_a8;
      *(undefined8 *)(piVar15 + 0x46) = uStack_a0;
      piVar15[0x48] = iVar4;
    }
    local_188._First = piVar15;
    (*local_198)(lVar11 + 0x28,&this[-1].ColorOverrides.field_0x30,&local_188,
                 &LatticePointSelectionTransactionText);
    UpdateGizmoLocation((ULatticeControlPointsMechanic *)&this[-1].ColorOverrides.field_0x30);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->field_0x30);
  }
  pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x4f8);
  lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x2d8))(pUVar10);
  (**(code **)(*(longlong *)(lVar11 + 0x28) + 0x18))(lVar11 + 0x28);
  UpdateDrawables((ULatticeControlPointsMechanic *)&this[-1].ColorOverrides.field_0x30);
  local_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  bVar8 = local_98._12_4_ != 0;
  local_98._8_8_ = (ulonglong)(uint)local_98._12_4_ << 0x20;
  if (bVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
  }
  local_64 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_98._0_8_);
  }
  return;
}

// OnDragRectangleChanged @ 14cb26af0

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
ULatticeControlPointsMechanic::OnDragRectangleChanged
          (ULatticeControlPointsMechanic *this,FCameraRectangle *param_1)

{
  FRectangleInPlane *pFVar1;
  TVector2<double> *pTVar2;
  double *pdVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  int iVar14;
  bool bVar15;
  char cVar16;
  FRenderablePoint *pFVar17;
  undefined8 uVar18;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar19;
  longlong *plVar20;
  longlong *plVar21;
  double dVar22;
  undefined1 auStackY_1d8 [32];
  int local_1a8 [2];
  TVector<double>_u_0 local_1a0;
  int local_188 [2];
  TVector2<double>_u_0 local_180 [2];
  double local_160;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_158;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_108;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  local_158.Elements._0_8_ = 0;
  local_158.Elements._8_8_ = 0;
  local_158.Elements._32_8_ = 0;
  local_158.Elements._40_4_ = 0;
  local_158.Elements._44_4_ = 0x80;
  local_158.Elements._48_4_ = 0xffffffff;
  local_158.Elements._52_4_ = 0;
  local_158.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_158.HashSize = 0;
  local_1a8[0] = 0;
  if (0 < (this->ControlPoints).ArrayNum) {
    pFVar1 = &param_1->SelectionDomain;
    do {
      iVar14 = local_1a8[0];
      pFVar17 = UPointSetComponent::GetPoint
                          ((this->DrawnControlPoints).field0_0x0.DebugPtr,local_1a8[0]);
      local_160 = (pFVar17->Position).field0_0x0._s_0.Z;
      dVar12 = (pFVar17->Position).field0_0x0._s_0.X;
      dVar13 = (pFVar17->Position).field0_0x0._s_0.Y;
      if ((param_1->bIsInitialized == false) &&
         (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5156035937368539185>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\RectangleMarqueeMechanic.cpp"
                              ,0x31,"bIsInitialized"), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      dVar4 = local_160;
      if ((param_1->CameraState).bIsOrthographic == false) {
        if (0.0 < (dVar13 * (param_1->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y +
                   dVar12 * (pFVar1->Plane).Normal.field0_0x0._s_0.X +
                  local_160 * (param_1->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z) -
                  (param_1->SelectionDomain).Plane.Constant) {
          if ((param_1->bIsInitialized == false) &&
             (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_5624345680832102318>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Mechanics\\RectangleMarqueeMechanic.h"
                                  ,0x52,"bIsInitialized"), bVar15)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          dVar22 = (param_1->SelectionDomain).Plane.Constant;
          dVar5 = (pFVar1->Plane).Normal.field0_0x0._s_0.X;
          dVar6 = (param_1->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y;
          dVar7 = (param_1->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z;
          dVar8 = (param_1->CameraState).Position.field0_0x0._s_0.X;
          dVar9 = (param_1->CameraState).Position.field0_0x0._s_0.Y;
          dVar10 = (param_1->CameraState).Position.field0_0x0._s_0.Z;
          dVar22 = ((dVar22 * dVar6 - dVar9) * dVar6 + (dVar22 * dVar5 - dVar8) * dVar5 +
                   (dVar22 * dVar7 - dVar10) * dVar7) /
                   ((dVar13 - dVar9) * dVar6 + (dVar12 - dVar8) * dVar5 + (dVar4 - dVar10) * dVar7);
          local_1a0._s_0.X = dVar22 * (dVar12 - dVar8) + dVar8;
          local_1a0._s_0.Y = dVar22 * (dVar13 - dVar9) + dVar9;
          local_1a0._s_0.Z = dVar22 * (dVar4 - dVar10) + dVar10;
          goto LAB_14cb26dbb;
        }
      }
      else {
        dVar4 = (pFVar1->Plane).Normal.field0_0x0._s_0.X;
        dVar22 = (dVar13 * (param_1->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y +
                  dVar4 * dVar12 +
                 local_160 * (param_1->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z) -
                 (param_1->SelectionDomain).Plane.Constant;
        local_1a0._s_0.X = dVar12 - dVar4 * dVar22;
        local_1a0._s_0.Y =
             dVar13 - dVar22 * (param_1->SelectionDomain).Plane.Normal.field0_0x0._s_0.Y;
        local_1a0._s_0.Z =
             local_160 - dVar22 * (param_1->SelectionDomain).Plane.Normal.field0_0x0._s_0.Z;
LAB_14cb26dbb:
        FCameraRectangle::Point3DToPointUV
                  (param_1,(TVector2<double> *)&local_180[0]._s_0,&pFVar1->Plane,
                   (TVector<double> *)&local_1a0._s_0);
        if (((((param_1->SelectionDomain).Rectangle.Min.field0_0x0._s_0.X <=
               (double)local_180[0]._0_8_) &&
             ((param_1->SelectionDomain).Rectangle.Min.field0_0x0._s_0.Y <=
              (double)local_180[0]._8_8_)) &&
            (pTVar2 = &(param_1->SelectionDomain).Rectangle.Max,
            (double)local_180[0]._0_8_ < (pTVar2->field0_0x0)._s_0.X ||
            (double)local_180[0]._0_8_ == (pTVar2->field0_0x0)._s_0.X)) &&
           (pdVar3 = &(param_1->SelectionDomain).Rectangle.Max.field0_0x0._s_0.Y,
           (double)local_180[0]._8_8_ < *pdVar3 || (double)local_180[0]._8_8_ == *pdVar3)) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_158,local_188,(bool *)local_1a8);
        }
      }
      local_1a8[0] = iVar14 + 1;
    } while (local_1a8[0] < (this->ControlPoints).ArrayNum);
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ShouldAddToSelectionFunc);
  pcVar11 = *(code **)&this->ShouldAddToSelectionFunc;
  plVar21 = *(longlong **)&(this->ShouldAddToSelectionFunc).field_0x28;
  plVar20 = (longlong *)&(this->ShouldAddToSelectionFunc).field_0x10;
  if (plVar21 != (longlong *)0x0) {
    plVar20 = plVar21;
  }
  uVar18 = (**(code **)(*plVar20 + 8))();
  plVar21 = (longlong *)&(this->ShouldRemoveFromSelectionFunc).field_0x10;
  this_00 = &this->SelectedPointIDs;
  cVar16 = (*pcVar11)(uVar18);
  if (cVar16 == '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->ShouldRemoveFromSelectionFunc);
    plVar20 = *(longlong **)&(this->ShouldRemoveFromSelectionFunc).field_0x28;
    pcVar11 = *(code **)&this->ShouldRemoveFromSelectionFunc;
    if (plVar20 != (longlong *)0x0) {
      plVar21 = plVar20;
    }
    uVar18 = (**(code **)(*plVar21 + 8))(plVar21);
    cVar16 = (*pcVar11)(uVar18);
    if (cVar16 == '\0') {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=(this_00,&local_158);
    }
    else {
      pTVar19 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Difference
                          (&this->PreDragSelection,&local_108,&local_158);
      if (this_00 != pTVar19) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(this_00,pTVar19);
      }
      local_108.HashSize = 0;
      if (local_108.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_108.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_108.Elements);
    }
  }
  else {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (this_00,&this->PreDragSelection);
    UE::Core::Private::Function::CheckCallable(*(void **)&this->ShouldRemoveFromSelectionFunc);
    plVar20 = *(longlong **)&(this->ShouldRemoveFromSelectionFunc).field_0x28;
    pcVar11 = *(code **)&this->ShouldRemoveFromSelectionFunc;
    if (plVar20 != (longlong *)0x0) {
      plVar21 = plVar20;
    }
    uVar18 = (**(code **)(*plVar21 + 8))(plVar21);
    cVar16 = (*pcVar11)(uVar18);
    if (cVar16 == '\0') {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                (this_00,&local_158);
    }
    else {
      LatticeControlPointMechanicLocals::Toggle(this_00,&local_158);
    }
  }
  UpdateDrawables(this);
  local_158.HashSize = 0;
  if (local_158.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_158.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_158.Elements);
  return;
}

// OnDragRectangleFinished @ 14cb27380

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
ULatticeControlPointsMechanic::OnDragRectangleFinished
          (ULatticeControlPointsMechanic *this,FCameraRectangle *param_1,bool param_2)

{
  int iVar1;
  UTransformProxy *pUVar2;
  bool bVar3;
  UObject *pUVar4;
  longlong lVar5;
  code *pcVar6;
  code *pcVar7;
  UInteractiveTool *pUVar8;
  UInteractiveToolManager *pUVar9;
  code *pcVar10;
  undefined1 auStack_d8 [32];
  code *local_b8;
  code *local_b0;
  longlong *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_d8;
  this->bIsDraggingRectangle = false;
  if ((*(int *)&(this->PreDragSelection).Elements.field_0x8 -
       *(int *)&(this->PreDragSelection).Elements.field_0x34 !=
       *(int *)&(this->SelectedPointIDs).Elements.field_0x8 -
       *(int *)&(this->SelectedPointIDs).Elements.field_0x34) ||
     (bVar3 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                        (&this->PreDragSelection,&this->SelectedPointIDs), !bVar3)) {
    pUVar2 = (this->PointTransformProxy).field0_0x0.DebugPtr;
    (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2,&local_98);
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    lVar5 = (**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
    local_a8 = (longlong *)(lVar5 + 0x28);
    local_b8 = *(code **)(*local_a8 + 0x20);
    pcVar6 = ::operator_new(0x130);
    pcVar10 = (code *)0x0;
    local_b0 = pcVar10;
    if (pcVar6 != (code *)0x0) {
      iVar1 = this->CurrentChangeStamp;
      *(undefined8 *)
       &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pcVar6 + 8))->Elements = 0;
      *(undefined8 *)(pcVar6 + 0x10) = 0;
      *(undefined8 *)(pcVar6 + 0x28) = 0;
      *(undefined ***)pcVar6 = &___7FLatticeControlPointsMechanicSelectionChange__6B_;
      *(undefined4 *)(pcVar6 + 0x30) = 0;
      *(undefined4 *)(pcVar6 + 0x34) = 0x80;
      *(undefined4 *)(pcVar6 + 0x38) = 0xffffffff;
      *(undefined4 *)(pcVar6 + 0x3c) = 0;
      *(undefined8 *)(pcVar6 + 0x48) = 0;
      *(undefined4 *)(pcVar6 + 0x50) = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pcVar6 + 8),
                 &this->PreDragSelection);
      pcVar6[0x58] = (code)0x0;
      *(undefined8 *)(pcVar6 + 0x60) = local_98;
      *(undefined8 *)(pcVar6 + 0x68) = uStack_90;
      *(undefined8 *)(pcVar6 + 0x70) = local_88;
      *(undefined8 *)(pcVar6 + 0x78) = uStack_80;
      *(undefined8 *)(pcVar6 + 0x80) = local_78;
      *(undefined8 *)(pcVar6 + 0x88) = uStack_70;
      *(undefined8 *)(pcVar6 + 0x90) = local_68;
      *(undefined8 *)(pcVar6 + 0x98) = uStack_60;
      *(ulonglong *)(pcVar6 + 0xa0) = CONCAT44(uStack_54,local_58);
      *(ulonglong *)(pcVar6 + 0xa8) = CONCAT44(uStack_4c,uStack_50);
      *(undefined8 *)(pcVar6 + 0xb0) = local_48;
      *(undefined8 *)(pcVar6 + 0xb8) = uStack_40;
      *(undefined8 *)(pcVar6 + 0xc0) = local_98;
      *(undefined8 *)(pcVar6 + 200) = uStack_90;
      *(undefined8 *)(pcVar6 + 0xd0) = local_88;
      *(undefined8 *)(pcVar6 + 0xd8) = uStack_80;
      *(undefined8 *)(pcVar6 + 0xe0) = local_78;
      *(undefined8 *)(pcVar6 + 0xe8) = uStack_70;
      *(undefined8 *)(pcVar6 + 0xf0) = local_68;
      *(undefined8 *)(pcVar6 + 0xf8) = uStack_60;
      *(undefined4 *)(pcVar6 + 0x100) = local_58;
      *(undefined4 *)(pcVar6 + 0x104) = uStack_54;
      *(undefined4 *)(pcVar6 + 0x108) = uStack_50;
      *(undefined4 *)(pcVar6 + 0x10c) = uStack_4c;
      *(undefined8 *)(pcVar6 + 0x110) = local_48;
      *(undefined8 *)(pcVar6 + 0x118) = uStack_40;
      *(int *)(pcVar6 + 0x120) = iVar1;
      local_b0 = pcVar6;
    }
    (*local_b8)(local_a8,this,&local_b0,&LatticePointDeselectionTransactionText);
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    lVar5 = (**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
    pcVar6 = *(code **)(*(longlong *)(lVar5 + 0x28) + 0x20);
    pcVar7 = ::operator_new(0x130);
    if (pcVar7 != (code *)0x0) {
      iVar1 = this->CurrentChangeStamp;
      *(undefined8 *)
       &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pcVar7 + 8))->Elements = 0;
      *(undefined ***)pcVar7 = &___7FLatticeControlPointsMechanicSelectionChange__6B_;
      *(undefined8 *)(pcVar7 + 0x10) = 0;
      *(undefined8 *)(pcVar7 + 0x28) = 0;
      *(undefined4 *)(pcVar7 + 0x30) = 0;
      *(undefined4 *)(pcVar7 + 0x34) = 0x80;
      *(undefined4 *)(pcVar7 + 0x38) = 0xffffffff;
      *(undefined4 *)(pcVar7 + 0x3c) = 0;
      *(undefined8 *)(pcVar7 + 0x48) = 0;
      *(undefined4 *)(pcVar7 + 0x50) = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pcVar7 + 8),
                 &this->SelectedPointIDs);
      pcVar7[0x58] = (code)0x1;
      *(undefined8 *)(pcVar7 + 0x60) = local_98;
      *(undefined8 *)(pcVar7 + 0x68) = uStack_90;
      *(undefined8 *)(pcVar7 + 0x70) = local_88;
      *(undefined8 *)(pcVar7 + 0x78) = uStack_80;
      *(undefined8 *)(pcVar7 + 0x80) = local_78;
      *(undefined8 *)(pcVar7 + 0x88) = uStack_70;
      *(undefined8 *)(pcVar7 + 0x90) = local_68;
      *(undefined8 *)(pcVar7 + 0x98) = uStack_60;
      *(ulonglong *)(pcVar7 + 0xa0) = CONCAT44(uStack_54,local_58);
      *(ulonglong *)(pcVar7 + 0xa8) = CONCAT44(uStack_4c,uStack_50);
      *(undefined8 *)(pcVar7 + 0xb0) = local_48;
      *(undefined8 *)(pcVar7 + 0xb8) = uStack_40;
      *(undefined8 *)(pcVar7 + 0xc0) = local_98;
      *(undefined8 *)(pcVar7 + 200) = uStack_90;
      *(undefined8 *)(pcVar7 + 0xd0) = local_88;
      *(undefined8 *)(pcVar7 + 0xd8) = uStack_80;
      *(undefined8 *)(pcVar7 + 0xe0) = local_78;
      *(undefined8 *)(pcVar7 + 0xe8) = uStack_70;
      *(undefined8 *)(pcVar7 + 0xf0) = local_68;
      *(undefined8 *)(pcVar7 + 0xf8) = uStack_60;
      *(undefined4 *)(pcVar7 + 0x100) = local_58;
      *(undefined4 *)(pcVar7 + 0x104) = uStack_54;
      *(undefined4 *)(pcVar7 + 0x108) = uStack_50;
      *(undefined4 *)(pcVar7 + 0x10c) = uStack_4c;
      *(undefined8 *)(pcVar7 + 0x110) = local_48;
      *(undefined8 *)(pcVar7 + 0x118) = uStack_40;
      *(int *)(pcVar7 + 0x120) = iVar1;
      pcVar10 = pcVar7;
    }
    local_b8 = pcVar10;
    (*pcVar6)(lVar5 + 0x28,this,&local_b8,&LatticePointSelectionTransactionText);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSelectionChanged);
  }
  UpdateGizmoLocation(this);
  pUVar8 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar9 = (UInteractiveToolManager *)(**(code **)(pUVar8->_padding_ + 0x2d8))(pUVar8);
  UE::TransactionUtil::FLongTransactionTracker::Close(&this->LongTransactions,pUVar9);
  UpdateDrawables(this);
  return;
}

// OnDragRectangleStarted @ 14cb277a0

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
ULatticeControlPointsMechanic::OnDragRectangleStarted(ULatticeControlPointsMechanic *this)

{
  bool bVar1;
  UInteractiveTool *pUVar2;
  UInteractiveToolManager *pUVar3;
  UCombinedTransformGizmo *pUVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  FText local_18;
  
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->PreDragSelection,&this->SelectedPointIDs);
  this->bIsDraggingRectangle = true;
  pUVar2 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar3 = (UInteractiveToolManager *)(**(code **)(pUVar2->_padding_ + 0x2d8))(pUVar2);
  local_18.TextData.Reference = LatticePointSelectionTransactionText.TextData.Reference;
  if (LatticePointSelectionTransactionText.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*LatticePointSelectionTransactionText.TextData.Reference + 8))
              (LatticePointSelectionTransactionText.TextData.Reference,local_res8);
  }
  local_18.Flags = LatticePointSelectionTransactionText.Flags;
  UE::TransactionUtil::FLongTransactionTracker::Open(&this->LongTransactions,&local_18,pUVar3);
  pUVar4 = (this->PointTransformGizmo).field0_0x0.DebugPtr;
  if (pUVar4 != (UCombinedTransformGizmo *)0x0) {
    if ((*(int *)&(this->SelectedPointIDs).Elements.field_0x8 ==
         *(int *)&(this->SelectedPointIDs).Elements.field_0x34) ||
       (this->bIsDraggingRectangle != false)) {
      uVar5 = 0;
    }
    else {
      bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                        ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ShouldHideGizmo);
      if ((bVar1) &&
         (bVar1 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::Execute
                            (&this->ShouldHideGizmo), bVar1)) {
        uVar5 = 0;
      }
      else {
        uVar5 = 1;
      }
      pUVar4 = (this->PointTransformGizmo).field0_0x0.DebugPtr;
    }
    (**(code **)(*(longlong *)pUVar4 + 0x360))(pUVar4,uVar5);
    return;
  }
  return;
}

// OnEndHover @ 14cb27910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULatticeControlPointsMechanic::OnEndHover(ULatticeControlPointsMechanic *this)

{
  if (-1 < *(int *)&this->field_0x2f8) {
    UPointSetComponent::SetPointColor
              ((UPointSetComponent *)(this->CachedCameraState).Orientation.Z,
               *(int *)&this->field_0x2f8,(FColor *)&(this->CachedCameraState).field_0x58);
    *(undefined4 *)&this->field_0x2f8 = 0xffffffff;
  }
  return;
}

// OnUpdateHover @ 14cb284a0

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
ULatticeControlPointsMechanic::OnUpdateHover
          (ULatticeControlPointsMechanic *this,FInputDeviceRay *param_1)

{
  undefined1 *puVar1;
  double *pdVar2;
  int iVar3;
  UPointSetComponent *pUVar4;
  bool bVar5;
  FRenderablePoint *pFVar6;
  undefined8 *puVar7;
  TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
  local_b8;
  TVector<double>_u_0 local_88;
  double dStack_70;
  double local_68;
  double dStack_60;
  FNearest local_58;
  
  local_b8._0_8_ = *(undefined8 *)&(this->ShouldRemoveFromSelectionFunc).field_0x18;
  local_b8._40_8_ = 0;
  if (local_b8._0_8_ != 0) {
    puVar7 = (undefined8 *)&(this->ShouldRemoveFromSelectionFunc).field_0x28;
    if (*(undefined8 **)&this->bGizmoBeingDragged != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)&this->bGizmoBeingDragged;
    }
    (**(code **)*puVar7)(puVar7,&local_b8.field_0x10);
  }
  local_88._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  local_88._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  local_88._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  dStack_70 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  local_68 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  dStack_60 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  bVar5 = UE::Geometry::FGeometrySet3::FindNearestPointToRay
                    ((FGeometrySet3 *)((this->LocalToWorldTransform).Translation.XY.m128d_f64 + 1),
                     (TRay<double> *)&local_88._s_0,&local_58,&local_b8);
  if (bVar5) {
    iVar3 = *(int *)&this->field_0x2f8;
    if (local_58.ID != iVar3) {
      puVar1 = &(this->CachedCameraState).field_0x58;
      pdVar2 = &(this->CachedCameraState).Orientation.Z;
      if (-1 < iVar3) {
        UPointSetComponent::SetPointColor((UPointSetComponent *)*pdVar2,iVar3,(FColor *)puVar1);
      }
      pUVar4 = (UPointSetComponent *)*pdVar2;
      *(int *)&this->field_0x2f8 = local_58.ID;
      pFVar6 = UPointSetComponent::GetPoint(pUVar4,local_58.ID);
      pUVar4 = (UPointSetComponent *)*pdVar2;
      *(FColor_u_0 *)puVar1 = (pFVar6->Color).field0_0x0;
      UPointSetComponent::SetPointColor
                (pUVar4,*(int *)&this->field_0x2f8,(FColor *)&(this->CachedCameraState).DPIScale);
    }
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

// OnUpdateModifierState @ 14cb287d0

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
ULatticeControlPointsMechanic::OnUpdateModifierState
          (ULatticeControlPointsMechanic *this,int param_1,bool param_2)

{
  if (param_1 == 1) {
    *(bool *)((longlong)&(this->PreviewGeometryActor).field0_0x0 + 4) = param_2;
  }
  else if (param_1 == 2) {
    *(bool *)((longlong)&(this->PreviewGeometryActor).field0_0x0 + 5) = param_2;
    return;
  }
  return;
}

// OnUpdateModifierState`adjustor{8}' @ 14cb287f0

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
   ULatticeControlPointsMechanic::OnUpdateModifierState`adjustor{8}' (int,bool) __ptr64 */

void __thiscall
ULatticeControlPointsMechanic::OnUpdateModifierState_adjustor_8__
          (ULatticeControlPointsMechanic *this,int param_1,bool param_2)

{
  OnUpdateModifierState((ULatticeControlPointsMechanic *)&this[-1].field_0x4f8,param_1,param_2);
  return;
}

// RebuildDrawables @ 14cb2c7a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULatticeControlPointsMechanic::RebuildDrawables(ULatticeControlPointsMechanic *this)

{
  undefined1 *puVar1;
  TMap<int,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FColor,0>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TMap<int,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FColor,0>_> *pTVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_16c;
  uint local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_150;
  undefined8 uStack_130;
  TMap<int,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FColor,0>_> *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  TVector<double>_u_0 local_f8;
  FColor_u_0 local_e0;
  float local_dc;
  undefined4 local_d8;
  TVector<double>_u_0 local_d0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  FColor_u_0 local_a0;
  float local_9c;
  undefined4 local_98;
  undefined4 local_74;
  undefined4 local_54;
  
  UPointSetComponent::Clear((this->DrawnControlPoints).field0_0x0.DebugPtr);
  UE::Geometry::FGeometrySet3::Reset(&this->GeometrySet,true,true);
  uVar13 = 0;
  if (0 < (this->ControlPoints).ArrayNum) {
    lVar20 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar13 < (this->ControlPoints).ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_e0 = (this->NormalPointColor).field0_0x0;
      pFVar12 = (this->ControlPoints).AllocatorInstance.Data + lVar20;
      local_d8 = 0;
      local_f8._s_0.X = (double)*(undefined8 *)&pFVar12->field_0x0;
      local_f8._s_0.Y = (double)*(undefined8 *)(pFVar12 + 8);
      local_f8._s_0.Z = (double)*(undefined8 *)(pFVar12 + 0x10);
      local_dc = this->PointsSize;
      UPointSetComponent::InsertPoint
                ((this->DrawnControlPoints).field0_0x0.DebugPtr,uVar13,
                 (FRenderablePoint *)&local_f8._s_0);
      UE::Geometry::FGeometrySet3::AddPoint(&this->GeometrySet,uVar13,(TVector<double> *)pFVar12);
      uVar13 = uVar13 + 1;
      lVar20 = lVar20 + 0x18;
    } while ((int)uVar13 < (this->ControlPoints).ArrayNum);
  }
  puVar1 = &(this->SelectedPointIDs).Elements.field_0x10;
  iVar5 = *(int *)&(this->SelectedPointIDs).Elements.field_0x28;
  iVar15 = 0;
  local_168 = 1;
  iVar17 = 0;
  uVar13 = 1;
  iVar10 = 0;
  if (iVar5 != 0) {
    puVar18 = *(uint **)&(this->SelectedPointIDs).Elements.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar13 = *puVar18;
    while (uVar13 == 0) {
      lVar20 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      uVar13 = 1;
      iVar10 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14cb2c940;
      uVar13 = puVar18[lVar20 + 1];
    }
    uVar13 = -uVar13 & uVar13;
    uVar4 = (ulonglong)uVar13 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_res18 = (int)lVar20;
    iVar10 = iVar17 + -1 + local_res18;
    if (iVar5 < iVar10) {
      iVar10 = iVar5;
    }
  }
LAB_14cb2c940:
  uVar14 = *(uint *)&(this->SelectedPointIDs).Elements.field_0x28;
  uVar19 = uVar14 & 0xffffffe0;
  TStack_150._padding_ = CONCAT44(uVar13,iVar15);
  TStack_150.CurrentBitIndex = iVar10;
  TStack_150.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_150._28_4_ = local_74;
  TStack_150.BaseBitIndex = iVar17;
  uStack_130 = CONCAT44(uStack_16c,
                        *(int *)&(this->SelectedPointIDs).Elements.field_0x8 -
                        *(int *)&(this->SelectedPointIDs).Elements.field_0x34);
  TStack_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar5 < (int)uVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar13 = *(uint *)&(this->SelectedPointIDs).Elements.field_0x28;
  if (uVar14 != uVar13) {
    puVar16 = *(undefined1 **)&(this->SelectedPointIDs).Elements.field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar20 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar13;
      if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
      goto LAB_14cb2ca70;
      uVar14 = *(uint *)(puVar16 + lVar20 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_res20 = (int)lVar20;
    uVar14 = local_res20 + -1 + uVar19;
    if ((int)uVar13 < (int)uVar14) {
      uVar14 = uVar13;
    }
  }
LAB_14cb2ca70:
  while( true ) {
    if (*(int *)&(this->SelectedPointIDs).Elements.field_0x8 -
        *(int *)&(this->SelectedPointIDs).Elements.field_0x34 != (int)uStack_130) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_150.CurrentBitIndex == uVar14) &&
       (TStack_150.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    iVar5 = *(int *)(*(longlong *)&(this->SelectedPointIDs).Elements +
                    (longlong)TStack_150.CurrentBitIndex * 0xc);
    bVar9 = UPointSetComponent::IsPointValid((this->DrawnControlPoints).field0_0x0.DebugPtr,iVar5);
    if (bVar9) {
      UPointSetComponent::SetPointColor
                ((this->DrawnControlPoints).field0_0x0.DebugPtr,iVar5,&this->SelectedColor);
    }
    TStack_150.UnvisitedBitMask = TStack_150.UnvisitedBitMask & ~TStack_150._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_150);
  }
  puVar1 = &(this->ColorOverrides).field_0x10;
  iVar17 = 0;
  iVar5 = *(int *)&(this->ColorOverrides).field_0x28;
  pTVar2 = &this->ColorOverrides;
  iVar15 = 0;
  iVar10 = 0;
  if (iVar5 != 0) {
    puVar18 = *(uint **)&(this->ColorOverrides).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar13 = *puVar18;
    while (uVar13 == 0) {
      lVar20 = (longlong)iVar17;
      iVar15 = iVar15 + 0x20;
      iVar17 = iVar17 + 1;
      iVar10 = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14cb2cb71;
      uVar13 = puVar18[lVar20 + 1];
    }
    local_168 = -uVar13 & uVar13;
    uVar4 = (ulonglong)local_168 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar10 = iVar15 + -1 + (int)lVar20;
    if (iVar5 < iVar10) {
      iVar10 = iVar5;
    }
  }
LAB_14cb2cb71:
  uVar13 = *(uint *)&(this->ColorOverrides).field_0x28;
  uVar14 = uVar13 & 0xffffffe0;
  TStack_120._padding_ = CONCAT44(local_168,iVar17);
  TStack_120.CurrentBitIndex = iVar10;
  TStack_120.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar13 >> 5;
  TStack_120._28_4_ = local_54;
  TStack_120.BaseBitIndex = iVar15;
  uStack_100 = CONCAT44(uStack_16c,
                        *(int *)&(this->ColorOverrides).field_0x8 -
                        *(int *)&(this->ColorOverrides).field_0x34);
  local_128 = pTVar2;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar5 < (int)uVar13)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar19 = *(uint *)&(this->ColorOverrides).field_0x28;
  if (uVar13 != uVar19) {
    puVar16 = *(undefined1 **)&(this->ColorOverrides).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar17 * 4);
    while (uVar13 == 0) {
      lVar20 = (longlong)iVar17;
      uVar14 = uVar14 + 0x20;
      iVar17 = iVar17 + 1;
      uVar13 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_14cb2cc81;
      uVar13 = *(uint *)(puVar16 + lVar20 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar13 = (int)lVar20 + -1 + uVar14;
    if ((int)uVar19 < (int)uVar13) {
      uVar13 = uVar19;
    }
  }
LAB_14cb2cc81:
  while( true ) {
    pTVar8 = local_128;
    if (*(int *)&local_128->field_0x8 - *(int *)&local_128->field_0x34 != (int)uStack_100) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_120.CurrentBitIndex == uVar13) &&
        (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    lVar20 = *(longlong *)pTVar8;
    UPointSetComponent::SetPointColor
              ((this->DrawnControlPoints).field0_0x0.DebugPtr,
               *(int *)((longlong)TStack_120.CurrentBitIndex * 0x10 + lVar20),
               (FColor *)(lVar20 + 4 + (longlong)TStack_120.CurrentBitIndex * 0x10));
    TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
  }
  ULineSetComponent::Clear((this->DrawnLatticeEdges).field0_0x0.DebugPtr);
  uVar13 = 0;
  if (0 < (this->LatticeEdges).ArrayNum) {
    lVar20 = 0;
    do {
      uVar14 = 0;
      if ((int)uVar13 < (this->LatticeEdges).ArrayNum) {
        uVar14 = ~uVar13 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar14 = *(uint *)((this->LatticeEdges).AllocatorInstance.Data + lVar20);
      uVar19 = 0;
      if ((int)uVar14 < (this->ControlPoints).ArrayNum) {
        uVar19 = ~uVar14 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar12 = (this->ControlPoints).AllocatorInstance.Data;
      uVar19 = 0;
      if ((int)uVar13 < (this->LatticeEdges).ArrayNum) {
        uVar19 = ~uVar13 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar19 = *(uint *)((this->LatticeEdges).AllocatorInstance.Data + lVar20 + 4);
      uVar11 = 0;
      if ((int)uVar19 < (this->ControlPoints).ArrayNum) {
        uVar11 = ~uVar19 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->ControlPoints).AllocatorInstance.Data;
      pFVar3 = pFVar12 + (longlong)(int)uVar14 * 0x18;
      local_d0._s_0.X = (double)*(undefined8 *)pFVar3;
      local_d0._s_0.Y = (double)*(undefined8 *)(pFVar3 + 8);
      local_98 = 0;
      local_d0._s_0.Z = (double)*(undefined8 *)(pFVar12 + (longlong)(int)uVar14 * 0x18 + 0x10);
      pFVar12 = pFVar6 + (longlong)(int)uVar19 * 0x18;
      local_b8 = *(undefined8 *)pFVar12;
      uStack_b0 = *(undefined8 *)(pFVar12 + 8);
      local_a8 = *(undefined8 *)(pFVar6 + (longlong)(int)uVar19 * 0x18 + 0x10);
      local_a0 = (this->NormalSegmentColor).field0_0x0;
      local_9c = this->SegmentsThickness;
      uVar14 = ULineSetComponent::AddLine
                         ((this->DrawnLatticeEdges).field0_0x0.DebugPtr,
                          (FRenderableLine *)&local_d0._s_0);
      if ((uVar14 != uVar13) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("SegmentID == EdgeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\LatticeControlPointsMechanic.cpp"
                             ,0xfe,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar13 = uVar13 + 1;
      lVar20 = lVar20 + 8;
    } while ((int)uVar13 < (this->LatticeEdges).ArrayNum);
  }
  return;
}

// Render @ 14cb30510

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
ULatticeControlPointsMechanic::Render
          (ULatticeControlPointsMechanic *this,IToolsContextRenderAPI *param_1)

{
  URectangleMarqueeMechanic *pUVar1;
  UInteractiveTool *pUVar2;
  longlong *plVar3;
  
  pUVar2 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  plVar3 = (longlong *)(**(code **)(pUVar2->_padding_ + 0x2d8))(pUVar2);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x398))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3,&this->CachedCameraState);
  pUVar1 = (this->MarqueeMechanic).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cb3056a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1,param_1);
  return;
}

// SelectPoint @ 14cb33280

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
ULatticeControlPointsMechanic::SelectPoint(ULatticeControlPointsMechanic *this,int param_1)

{
  longlong lVar1;
  FColor *pFVar2;
  undefined1 *puVar3;
  UPointSetComponent *this_00;
  int iVar4;
  int local_res8 [2];
  int local_res10 [2];
  
  local_res10[0] = param_1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (&this->SelectedPointIDs,local_res8,(bool *)local_res10);
  if (*(int *)&(this->ColorOverrides).field_0x8 != *(int *)&(this->ColorOverrides).field_0x34) {
    puVar3 = *(undefined1 **)&(this->ColorOverrides).field_0x40;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->ColorOverrides).field_0x38;
    }
    iVar4 = *(int *)(puVar3 + (ulonglong)(*(int *)&(this->ColorOverrides).field_0x48 - 1U & param_1)
                              * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)&this->ColorOverrides;
      do {
        if (*(int *)(lVar1 + (longlong)iVar4 * 0x10) == param_1) {
          this_00 = (this->DrawnControlPoints).field0_0x0.DebugPtr;
          if (iVar4 == -1) goto LAB_14cb3330d;
          pFVar2 = TMapBase<int,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FColor,0>_>
                   ::FindChecked((TMapBase<int,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FColor,0>_>
                                  *)&this->ColorOverrides,param_1);
          goto LAB_14cb33314;
        }
        iVar4 = *(int *)(lVar1 + 8 + (longlong)iVar4 * 0x10);
      } while (iVar4 != -1);
    }
  }
  this_00 = (this->DrawnControlPoints).field0_0x0.DebugPtr;
LAB_14cb3330d:
  pFVar2 = &this->SelectedColor;
LAB_14cb33314:
  UPointSetComponent::SetPointColor(this_00,param_1,pFVar2);
  return;
}

// SetCoordinateSystem @ 14cb35eb0

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
ULatticeControlPointsMechanic::SetCoordinateSystem
          (ULatticeControlPointsMechanic *this,EToolContextCoordinateSystem param_1)

{
  ((this->PointTransformGizmo).field0_0x0.DebugPtr)->CurrentCoordinateSystem = param_1;
  UpdateGizmoLocation(this);
  return;
}

// SetWorld @ 14cb38bf0

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
ULatticeControlPointsMechanic::SetWorld(ULatticeControlPointsMechanic *this,UWorld *param_1)

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
  pUVar3 = (this->DrawnLatticeEdges).field0_0x0.DebugPtr;
  (**(code **)(pUVar3->_padding_ + 0x170))
            (pUVar3,0,(this->PreviewGeometryActor).field0_0x0.DebugPtr,0);
  pUVar3 = (this->DrawnLatticeEdges).field0_0x0.DebugPtr;
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (**(code **)(pUVar3->_padding_ + 0x508))
            (pUVar3,(this->DrawnControlPoints).field0_0x0.DebugPtr,
             &FAttachmentTransformRules::KeepWorldTransform,0);
  pUVar3 = (this->DrawnLatticeEdges).field0_0x0.DebugPtr;
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

// Setup @ 14cb3a7d0

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
ULatticeControlPointsMechanic::Setup(ULatticeControlPointsMechanic *this,UInteractiveTool *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  URectangleMarqueeMechanic *pUVar3;
  UObject *pUVar4;
  USingleClickOrDragInputBehavior *pUVar5;
  UMouseHoverBehavior *pUVar6;
  UPointSetComponent *this_00;
  UInteractiveTool *pUVar7;
  UInteractiveToolManager *pUVar8;
  UMaterialInterface *pUVar9;
  ULineSetComponent *this_01;
  UInteractiveGizmoManager *pUVar10;
  UTransformProxy *pUVar11;
  UCombinedTransformGizmo *pUVar12;
  undefined ***pppuVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  undefined8 uStack_70;
  code *local_68 [2];
  undefined **local_58;
  code *pcStack_50;
  undefined1 local_48 [8];
  undefined ***pppuStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  UInteractionMechanic::Setup((UInteractionMechanic *)this,param_1);
  pUVar3 = NewObject<URectangleMarqueeMechanic>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (URectangleMarqueeMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->MarqueeMechanic).field0_0x0.DebugPtr = pUVar3;
  pUVar3->bUseExternalClickDragBehavior = true;
  pUVar3 = (this->MarqueeMechanic).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar3 + 0x2b0))(pUVar3,param_1);
  local_88._0_8_ = OnDragRectangleStarted;
  local_88._8_4_ = 0;
  local_88._16_8_ = OnDragRectangleStarted;
  uStack_70._0_4_ = 0;
  uStack_70._4_4_ = local_88._12_4_;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<ULatticeControlPointsMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &((this->MarqueeMechanic).field0_0x0.DebugPtr)->OnDragRectangleStarted,
             (ULatticeControlPointsMechanic *)local_88,(pmf_f4d6384f *)this);
  local_88._0_8_ = OnDragRectangleChanged;
  local_88._8_4_ = 0;
  local_88._16_8_ = OnDragRectangleChanged;
  uStack_70._0_4_ = 0;
  uStack_70._4_4_ = local_88._12_4_;
  TMulticastDelegateRegistration<void___cdecl(FCameraRectangle_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<ULatticeControlPointsMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(FCameraRectangle_const_&),FDefaultDelegateUserPolicy>
              *)&((this->MarqueeMechanic).field0_0x0.DebugPtr)->OnDragRectangleChanged,
             (ULatticeControlPointsMechanic *)local_88,(pmf_74237375 *)this);
  local_88._0_8_ = OnDragRectangleFinished;
  local_88._8_8_ = (ulonglong)(uint)local_88._12_4_ << 0x20;
  local_88._16_8_ = OnDragRectangleFinished;
  uStack_70 = local_88._8_8_;
  TMulticastDelegateRegistration<void___cdecl(FCameraRectangle_const_&,bool),FDefaultDelegateUserPolicy>
  ::AddUObject<ULatticeControlPointsMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(FCameraRectangle_const_&,bool),FDefaultDelegateUserPolicy>
              *)&((this->MarqueeMechanic).field0_0x0.DebugPtr)->OnDragRectangleFinished,
             (ULatticeControlPointsMechanic *)local_88,(pmf_5f9f92e7 *)this);
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = NewObject<USingleClickOrDragInputBehavior>(pUVar4);
  pUVar3 = (this->MarqueeMechanic).field0_0x0.DebugPtr;
  puVar15 = &pUVar3->field_0x30;
  if (pUVar3 == (URectangleMarqueeMechanic *)0x0) {
    puVar15 = (undefined1 *)0x0;
  }
  puVar14 = &this->field_0x30;
  if (this == (ULatticeControlPointsMechanic *)0x0) {
    puVar14 = (undefined1 *)0x0;
  }
  (**(code **)(pUVar5->_padding_ + 0x378))(pUVar5,puVar14,puVar15);
  pppuStack_40 = (undefined ***)0x0;
  pcStack_50 = FInputDeviceState::IsShiftKeyDown;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
                ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&pUVar5->Modifiers,1,(TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar13 = &local_58;
    if (pppuStack_40 != (undefined ***)0x0) {
      pppuVar13 = pppuStack_40;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  pppuStack_40 = (undefined ***)0x0;
  pcStack_50 = FInputDeviceState::IsCtrlKeyDown;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
                ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&pUVar5->Modifiers,2,(TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar13 = &local_58;
    if (pppuStack_40 != (undefined ***)0x0) {
      pppuVar13 = pppuStack_40;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  (**(code **)(*(longlong *)pUVar4 + 0x2f8))(pUVar4,pUVar5,0);
  pUVar4 = GetTransientPackageAsObject();
  pUVar6 = NewObject<UMouseHoverBehavior>(pUVar4);
  (**(code **)(*(longlong *)pUVar6 + 800))(pUVar6,&this->field_0x38);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  (**(code **)(*(longlong *)pUVar4 + 0x2f8))(pUVar4,pUVar6,0);
  pUVar4 = GetTransientPackageAsObject();
  this_00 = NewObject<UPointSetComponent>(pUVar4);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UPointSetComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->DrawnControlPoints).field0_0x0.DebugPtr = this_00;
  pUVar7 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar8 = (UInteractiveToolManager *)(**(code **)(pUVar7->_padding_ + 0x2d8))(pUVar7);
  pUVar9 = ToolSetupUtil::GetDefaultPointComponentMaterial(pUVar8,true);
  UPointSetComponent::SetPointMaterial(this_00,pUVar9);
  pUVar4 = GetTransientPackageAsObject();
  this_01 = NewObject<ULineSetComponent>(pUVar4);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_01 != (ULineSetComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this_01);
  }
  (this->DrawnLatticeEdges).field0_0x0.DebugPtr = this_01;
  pUVar7 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar8 = (UInteractiveToolManager *)(**(code **)(pUVar7->_padding_ + 0x2d8))(pUVar7);
  pUVar9 = ToolSetupUtil::GetDefaultLineComponentMaterial(pUVar8,true);
  ULineSetComponent::SetLineMaterial(this_01,pUVar9);
  (this->NormalPointColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Red.field0_0x0;
  (this->NormalSegmentColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Red.field0_0x0;
  (this->HoverColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Green.field0_0x0;
  (this->SelectedColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Yellow.field0_0x0;
  this->SegmentsThickness = 1.0;
  this->PointsSize = 6.0;
  local_68[0] = *(code **)&this->GeometrySetToleranceTest;
  uVar2 = *(undefined8 *)&(this->GeometrySetToleranceTest).field_0x8;
  local_58 = *(undefined ***)&(this->GeometrySetToleranceTest).field_0x10;
  pcStack_50 = *(code **)&(this->GeometrySetToleranceTest).field_0x18;
  uVar1 = *(undefined8 *)&(this->GeometrySetToleranceTest).field_0x20;
  pppuStack_40 = *(undefined ****)&(this->GeometrySetToleranceTest).field_0x28;
  *(code **)&this->GeometrySetToleranceTest =
       UE::Core::Private::Function::
       TFunctionRefCaller<`ULatticeControlPointsMechanic::Setup'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
       ::Call;
  *(code **)&(this->GeometrySetToleranceTest).field_0x8 = local_68[1];
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x10 = 0x52911fb8;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x14 = 1;
  *(ULatticeControlPointsMechanic **)&(this->GeometrySetToleranceTest).field_0x18 = this;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x20 = local_48._0_4_;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x24 = local_48._4_4_;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x28 = 0;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x2c = 0;
  local_48 = (undefined1  [8])uVar1;
  local_68[1] = (code *)uVar2;
  if (local_68[0] != (code *)0x0) {
    pppuVar13 = &local_58;
    if (pppuStack_40 != (undefined ***)0x0) {
      pppuVar13 = pppuStack_40;
    }
    (*(code *)(*pppuVar13)[2])();
  }
  pUVar7 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar8 = (UInteractiveToolManager *)(**(code **)(pUVar7->_padding_ + 0x2d8))(pUVar7);
  pUVar10 = UInteractiveToolManager::GetPairedGizmoManager(pUVar8);
  pUVar11 = NewObject<UTransformProxy>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->PointTransformProxy).field0_0x0.DebugPtr = pUVar11;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  pUVar12 = UE::TransformGizmoUtil::CreateCustomTransformGizmo
                      (pUVar10,FullTranslateRotateScale,this,(FString *)local_88);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar12 != (UCombinedTransformGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  (this->PointTransformGizmo).field0_0x0.DebugPtr = pUVar12;
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  local_88._0_8_ = GizmoTransformChanged;
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  local_88._16_8_ = GizmoTransformChanged;
  uStack_70 = local_88._8_8_;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::AddUObject<ULatticeControlPointsMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
              *)&((this->PointTransformProxy).field0_0x0.DebugPtr)->OnTransformChanged,
             (ULatticeControlPointsMechanic *)local_88,(pmf_b94a611b *)this);
  local_88._0_8_ = GizmoTransformStarted;
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  local_88._16_8_ = GizmoTransformStarted;
  uStack_70 = local_88._8_8_;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
  AddUObject<ULatticeControlPointsMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
              *)&((this->PointTransformProxy).field0_0x0.DebugPtr)->OnBeginTransformEdit,
             (ULatticeControlPointsMechanic *)local_88,(pmf_2745dac4 *)this);
  local_88._0_8_ = GizmoTransformEnded;
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  local_88._16_8_ = GizmoTransformEnded;
  uStack_70 = local_88._8_8_;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
  AddUObject<ULatticeControlPointsMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
              *)&((this->PointTransformProxy).field0_0x0.DebugPtr)->OnEndTransformEdit,
             (ULatticeControlPointsMechanic *)local_88,(pmf_2745dac4 *)this);
  pUVar12 = (this->PointTransformGizmo).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar12 + 0x330))
            (pUVar12,(this->PointTransformProxy).field0_0x0.DebugPtr,0);
  pUVar12 = (this->PointTransformGizmo).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar12 + 0x360))(pUVar12,0);
  ((this->PointTransformGizmo).field0_0x0.DebugPtr)->bUseContextCoordinateSystem = false;
  ((this->PointTransformGizmo).field0_0x0.DebugPtr)->CurrentCoordinateSystem = Local;
  return;
}

// Shutdown @ 14cb3be00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULatticeControlPointsMechanic::Shutdown(ULatticeControlPointsMechanic *this)

{
  APreviewGeometryActor *this_00;
  code *UNRECOVERED_JUMPTABLE;
  UInteractiveTool *pUVar1;
  UInteractiveToolManager *pUVar2;
  UInteractiveGizmoManager *pUVar3;
  
  pUVar1 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar2 = (UInteractiveToolManager *)(**(code **)(pUVar1->_padding_ + 0x2d8))(pUVar1);
  UE::TransactionUtil::FLongTransactionTracker::CloseAll(&this->LongTransactions,pUVar2);
  this_00 = (this->PreviewGeometryActor).field0_0x0.DebugPtr;
  if (this_00 != (APreviewGeometryActor *)0x0) {
    AActor::Destroy((AActor *)this_00,false,true);
    (this->PreviewGeometryActor).field0_0x0.DebugPtr = (APreviewGeometryActor *)0x0;
  }
  pUVar1 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar2 = (UInteractiveToolManager *)(**(code **)(pUVar1->_padding_ + 0x2d8))(pUVar1);
  pUVar3 = UInteractiveToolManager::GetPairedGizmoManager(pUVar2);
  UNRECOVERED_JUMPTABLE = *(code **)(pUVar3->_padding_ + 0x2e8);
                    /* WARNING: Could not recover jumptable at 0x00014cb3be7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pUVar3,this,UNRECOVERED_JUMPTABLE);
  return;
}

// StaticRegisterNativesULatticeControlPointsMechanic @ 14cb3eb10

void __cdecl ULatticeControlPointsMechanic::StaticRegisterNativesULatticeControlPointsMechanic(void)

{
  return;
}

// UpdateControlPointPositions @ 14cb44b20

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
ULatticeControlPointsMechanic::UpdateControlPointPositions
          (ULatticeControlPointsMechanic *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  
  iVar3 = param_1->ArrayNum;
  if (iVar3 == (this->ControlPoints).ArrayNum) {
    pTVar2 = &this->ControlPoints;
    if (pTVar2 != param_1) {
      iVar4 = (this->ControlPoints).ArrayMax;
      piVar1 = &(this->ControlPoints).ArrayMax;
      _Src = (param_1->AllocatorInstance).Data;
      (this->ControlPoints).ArrayNum = iVar3;
      if ((iVar3 == 0) && (iVar4 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar3,iVar4,&pTVar2->AllocatorInstance,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x18);
        }
      }
    }
    UpdateDrawables(this);
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<750846719557632716>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\LatticeControlPointsMechanic.cpp"
                       ,0x2cc,"NewPoints.Num() == ControlPoints.Num()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// UpdateDrawables @ 14cb45c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall ULatticeControlPointsMechanic::UpdateDrawables(ULatticeControlPointsMechanic *this)

{
  undefined1 *puVar1;
  TMap<int,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FColor,0>_> *pTVar2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  TMap<int,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FColor,0>_> *pTVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_14c;
  uint local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_130;
  undefined8 uStack_110;
  TMap<int,FColor,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FColor,0>_> *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_c0;
  TVector<double>_u_0 local_a8 [2];
  undefined4 local_74;
  undefined4 local_54;
  
  UpdateGizmoVisibility(this);
  uVar9 = 0;
  if (0 < (this->ControlPoints).ArrayNum) {
    lVar17 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar9 < (this->ControlPoints).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = (this->ControlPoints).AllocatorInstance.Data + lVar17;
      local_d8._s_0.X = (double)*(undefined8 *)&pFVar11->field_0x0;
      local_d8._s_0.Y = (double)*(undefined8 *)(pFVar11 + 8);
      local_d8._s_0.Z = (double)*(undefined8 *)(pFVar11 + 0x10);
      UPointSetComponent::SetPointPosition
                ((this->DrawnControlPoints).field0_0x0.DebugPtr,uVar9,
                 (TVector<double> *)&local_d8._s_0);
      UPointSetComponent::SetPointColor
                ((this->DrawnControlPoints).field0_0x0.DebugPtr,uVar9,&this->NormalPointColor);
      UE::Geometry::FGeometrySet3::UpdatePoint(&this->GeometrySet,uVar9,(TVector<double> *)pFVar11);
      uVar9 = uVar9 + 1;
      lVar17 = lVar17 + 0x18;
    } while ((int)uVar9 < (this->ControlPoints).ArrayNum);
  }
  puVar1 = &(this->SelectedPointIDs).Elements.field_0x10;
  iVar4 = *(int *)&(this->SelectedPointIDs).Elements.field_0x28;
  iVar12 = 0;
  local_148 = 1;
  iVar14 = 0;
  uVar9 = 1;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->SelectedPointIDs).Elements.field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar9 = *puVar15;
    while (uVar9 == 0) {
      lVar17 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      uVar9 = 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cb45e11;
      uVar9 = puVar15[lVar17 + 1];
    }
    uVar9 = -uVar9 & uVar9;
    uVar3 = (ulonglong)uVar9 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_res18 = (int)lVar17;
    iVar8 = iVar14 + -1 + local_res18;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14cb45e11:
  uVar10 = *(uint *)&(this->SelectedPointIDs).Elements.field_0x28;
  uVar16 = uVar10 & 0xffffffe0;
  TStack_130._padding_ = CONCAT44(uVar9,iVar12);
  TStack_130.CurrentBitIndex = iVar8;
  TStack_130.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar10 >> 5;
  TStack_130._28_4_ = local_74;
  TStack_130.BaseBitIndex = iVar14;
  uStack_110 = CONCAT44(uStack_14c,
                        *(int *)&(this->SelectedPointIDs).Elements.field_0x8 -
                        *(int *)&(this->SelectedPointIDs).Elements.field_0x34);
  TStack_130.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar4 < (int)uVar10)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = *(uint *)&(this->SelectedPointIDs).Elements.field_0x28;
  if (uVar10 != uVar9) {
    puVar13 = *(undefined1 **)&(this->SelectedPointIDs).Elements.field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar10 == 0) {
      lVar17 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar10 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cb45f40;
      uVar10 = *(uint *)(puVar13 + lVar17 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_res20 = (int)lVar17;
    uVar10 = local_res20 + -1 + uVar16;
    if ((int)uVar9 < (int)uVar10) {
      uVar10 = uVar9;
    }
  }
LAB_14cb45f40:
  while( true ) {
    if (*(int *)&(this->SelectedPointIDs).Elements.field_0x8 -
        *(int *)&(this->SelectedPointIDs).Elements.field_0x34 != (int)uStack_110) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_130.CurrentBitIndex == uVar10) &&
       (TStack_130.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    iVar4 = *(int *)(*(longlong *)&(this->SelectedPointIDs).Elements +
                    (longlong)TStack_130.CurrentBitIndex * 0xc);
    bVar7 = UPointSetComponent::IsPointValid((this->DrawnControlPoints).field0_0x0.DebugPtr,iVar4);
    if (bVar7) {
      UPointSetComponent::SetPointColor
                ((this->DrawnControlPoints).field0_0x0.DebugPtr,iVar4,&this->SelectedColor);
    }
    TStack_130.UnvisitedBitMask = TStack_130.UnvisitedBitMask & ~TStack_130._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_130);
  }
  puVar1 = &(this->ColorOverrides).field_0x10;
  iVar14 = 0;
  iVar4 = *(int *)&(this->ColorOverrides).field_0x28;
  pTVar2 = &this->ColorOverrides;
  iVar12 = 0;
  iVar8 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->ColorOverrides).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar9 = *puVar15;
    while (uVar9 == 0) {
      lVar17 = (longlong)iVar14;
      iVar12 = iVar12 + 0x20;
      iVar14 = iVar14 + 1;
      iVar8 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14cb46042;
      uVar9 = puVar15[lVar17 + 1];
    }
    local_148 = -uVar9 & uVar9;
    uVar3 = (ulonglong)local_148 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar8 = iVar12 + -1 + (int)lVar17;
    if (iVar4 < iVar8) {
      iVar8 = iVar4;
    }
  }
LAB_14cb46042:
  uVar9 = *(uint *)&(this->ColorOverrides).field_0x28;
  uVar10 = uVar9 & 0xffffffe0;
  TStack_100._padding_ = CONCAT44(local_148,iVar14);
  TStack_100.CurrentBitIndex = iVar8;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar9 >> 5;
  TStack_100._28_4_ = local_54;
  TStack_100.BaseBitIndex = iVar12;
  uStack_e0 = CONCAT44(uStack_14c,
                       *(int *)&(this->ColorOverrides).field_0x8 -
                       *(int *)&(this->ColorOverrides).field_0x34);
  local_108 = pTVar2;
  TStack_100.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar4 < (int)uVar9)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar16 = *(uint *)&(this->ColorOverrides).field_0x28;
  if (uVar9 != uVar16) {
    puVar13 = *(undefined1 **)&(this->ColorOverrides).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar14 * 4);
    while (uVar9 == 0) {
      lVar17 = (longlong)iVar14;
      uVar10 = uVar10 + 0x20;
      iVar14 = iVar14 + 1;
      uVar9 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14cb46151;
      uVar9 = *(uint *)(puVar13 + lVar17 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar9 = (int)lVar17 + -1 + uVar10;
    if ((int)uVar16 < (int)uVar9) {
      uVar9 = uVar16;
    }
  }
LAB_14cb46151:
  while( true ) {
    pTVar6 = local_108;
    if (*(int *)&local_108->field_0x8 - *(int *)&local_108->field_0x34 != (int)uStack_e0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FColor>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_100.CurrentBitIndex == uVar9) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == pTVar2))
    break;
    lVar17 = *(longlong *)pTVar6;
    UPointSetComponent::SetPointColor
              ((this->DrawnControlPoints).field0_0x0.DebugPtr,
               *(int *)((longlong)TStack_100.CurrentBitIndex * 0x10 + lVar17),
               (FColor *)(lVar17 + 4 + (longlong)TStack_100.CurrentBitIndex * 0x10));
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  uVar9 = 0;
  if (0 < (this->LatticeEdges).ArrayNum) {
    lVar17 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar9 < (this->LatticeEdges).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = *(uint *)((this->LatticeEdges).AllocatorInstance.Data + lVar17);
      uVar16 = 0;
      if ((int)uVar10 < (this->ControlPoints).ArrayNum) {
        uVar16 = ~uVar10 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar11 = (this->ControlPoints).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18;
      uVar10 = 0;
      if ((int)uVar9 < (this->LatticeEdges).ArrayNum) {
        uVar10 = ~uVar9 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = *(uint *)((this->LatticeEdges).AllocatorInstance.Data + lVar17 + 4);
      uVar16 = 0;
      if ((int)uVar10 < (this->ControlPoints).ArrayNum) {
        uVar16 = ~uVar10 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_c0._s_0.X = (double)*(undefined8 *)pFVar11;
      local_c0._s_0.Y = (double)*(undefined8 *)(pFVar11 + 8);
      local_c0._s_0.Z = (double)*(undefined8 *)(pFVar11 + 0x10);
      pFVar11 = (this->ControlPoints).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x18;
      ULineSetComponent::SetLineStart
                ((this->DrawnLatticeEdges).field0_0x0.DebugPtr,uVar9,
                 (TVector<double> *)&local_c0._s_0);
      local_a8[0]._0_8_ = *(undefined8 *)pFVar11;
      local_a8[0]._8_8_ = *(undefined8 *)(pFVar11 + 8);
      local_a8[0]._16_8_ = *(undefined8 *)(pFVar11 + 0x10);
      ULineSetComponent::SetLineEnd
                ((this->DrawnLatticeEdges).field0_0x0.DebugPtr,uVar9,
                 (TVector<double> *)&local_a8[0]._s_0);
      uVar9 = uVar9 + 1;
      lVar17 = lVar17 + 8;
    } while ((int)uVar9 < (this->LatticeEdges).ArrayNum);
  }
  return;
}

// UpdateGizmoLocation @ 14cb47130

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
ULatticeControlPointsMechanic::UpdateGizmoLocation(ULatticeControlPointsMechanic *this)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  UCombinedTransformGizmo *pUVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar13;
  bool bVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint *puVar21;
  uint uVar22;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  undefined1 local_1f8 [8];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1f0;
  int iStack_1e8;
  uint uStack_1e4;
  undefined1 *local_1e0;
  undefined4 uStack_1d8;
  int iStack_1d4;
  int local_1d0;
  int iStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  int local_1c0;
  int local_1bc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_1b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b0;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  dVar12 = __real_3ff0000000000000;
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_228;
  pUVar5 = (this->PointTransformGizmo).field0_0x0.DebugPtr;
  if (pUVar5 != (UCombinedTransformGizmo *)0x0) {
    dVar9 = 0.0;
    dVar10 = 0.0;
    dVar11 = 0.0;
    iVar17 = *(int *)&(this->SelectedPointIDs).Elements.field_0x8 -
             *(int *)&(this->SelectedPointIDs).Elements.field_0x34;
    if (iVar17 == 0) {
      local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_168.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_168.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_168.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_168.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_168.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_168.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UCombinedTransformGizmo::ReinitializeGizmoTransform(pUVar5,&local_168,true);
      local_108.Translation.ZW.m128d_f64[0] = 0.0;
      dVar8 = 0.0;
    }
    else {
      iStack_1e8 = 0;
      local_1d0 = 0;
      pTVar1 = &this->SelectedPointIDs;
      puVar2 = &(this->SelectedPointIDs).Elements.field_0x10;
      iVar4 = *(int *)&(this->SelectedPointIDs).Elements.field_0x28;
      uStack_1e4 = 1;
      iStack_1d4 = 0;
      if (iVar4 != 0) {
        puVar21 = *(uint **)&(this->SelectedPointIDs).Elements.field_0x20;
        if (puVar21 == (uint *)0x0) {
          puVar21 = (uint *)puVar2;
        }
        uVar19 = *puVar21;
        while (uVar19 == 0) {
          lVar16 = (longlong)iStack_1e8;
          local_1d0 = local_1d0 + 0x20;
          iStack_1e8 = iStack_1e8 + 1;
          iStack_1d4 = iVar4;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1e8)
          goto LAB_14cb472d0;
          uVar19 = puVar21[lVar16 + 1];
        }
        uStack_1e4 = -uVar19 & uVar19;
        uVar3 = (ulonglong)uStack_1e4 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1c0 = (int)lVar16;
        iStack_1d4 = local_1d0 + -1 + local_1c0;
        if (iVar4 < iStack_1d4) {
          iStack_1d4 = iVar4;
        }
      }
LAB_14cb472d0:
      uVar19 = *(uint *)&(this->SelectedPointIDs).Elements.field_0x28;
      uVar22 = uVar19 & 0xffffffe0;
      uStack_1d8 = 0xffffffff;
      TStack_1b0._padding_ = CONCAT44(uStack_1e4,iStack_1e8);
      TStack_1b0.CurrentBitIndex = iStack_1d4;
      TStack_1b0.UnvisitedBitMask = 0xffffffff;
      TStack_1b0._28_4_ = iStack_1d4;
      TStack_1b0.BaseBitIndex = local_1d0;
      uStack_190 = CONCAT44(uStack_1c4,iVar17);
      iVar18 = (int)uVar19 >> 5;
      local_1f0 = pTVar1;
      local_1e0 = puVar2;
      iStack_1cc = iStack_1d4;
      iStack_1c8 = iVar17;
      local_1b8 = pTVar1;
      TStack_1b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uVar19 < 0) || (iVar4 < (int)uVar19)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar14)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar15 = *(uint *)&(this->SelectedPointIDs).Elements.field_0x28;
      if (uVar19 != uVar15) {
        puVar20 = *(undefined1 **)&(this->SelectedPointIDs).Elements.field_0x20;
        if (puVar20 == (undefined1 *)0x0) {
          puVar20 = puVar2;
        }
        uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar20 + (longlong)iVar18 * 4);
        while (uVar19 == 0) {
          lVar16 = (longlong)iVar18;
          uVar22 = uVar22 + 0x20;
          iVar18 = iVar18 + 1;
          uVar19 = uVar15;
          if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
          goto LAB_14cb473f0;
          uVar19 = *(uint *)(puVar20 + lVar16 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        local_1bc = (int)lVar16;
        uVar19 = local_1bc + -1 + uVar22;
        if ((int)uVar15 < (int)uVar19) {
          uVar19 = uVar15;
        }
      }
LAB_14cb473f0:
      while( true ) {
        pTVar13 = local_1b8;
        if (*(int *)&(local_1b8->Elements).field_0x8 - *(int *)&(local_1b8->Elements).field_0x34 !=
            (int)uStack_190) {
          local_1f8[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1f8);
        }
        if (((TStack_1b0.CurrentBitIndex == uVar19) &&
            (TStack_1b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
           (pTVar13 == pTVar1)) break;
        iVar17 = (this->ControlPoints).ArrayNum;
        uVar22 = *(uint *)(*(longlong *)&pTVar13->Elements +
                          (longlong)TStack_1b0.CurrentBitIndex * 0xc);
        lVar16 = (longlong)(int)uVar22;
        uVar15 = 0;
        if ((int)uVar22 < iVar17) {
          uVar15 = ~uVar22 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (local_208 = lVar16, local_200 = (longlong)iVar17,
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar14)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (this->ControlPoints).AllocatorInstance.Data;
        dVar10 = dVar10 + *(double *)(pFVar6 + lVar16 * 0x18);
        dVar11 = dVar11 + *(double *)(pFVar6 + lVar16 * 0x18 + 8);
        dVar9 = dVar9 + *(double *)(pFVar6 + lVar16 * 0x18 + 0x10);
        TStack_1b0.UnvisitedBitMask = TStack_1b0.UnvisitedBitMask & ~TStack_1b0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b0);
      }
      dVar8 = dVar12 / (double)(*(int *)&(this->SelectedPointIDs).Elements.field_0x8 -
                               *(int *)&(this->SelectedPointIDs).Elements.field_0x34);
      local_108.Translation.ZW.m128d_f64[0] = dVar8 * dVar9;
      dVar9 = dVar8 * dVar11;
      dVar8 = dVar8 * dVar10;
    }
    UpdateGizmoVisibility(this);
    local_108.Rotation.XY.m128d_f64[0] = (this->LocalToWorldTransform).Rotation.XY.m128d_f64[0];
    local_108.Rotation.XY.m128d_f64[1] = (this->LocalToWorldTransform).Rotation.XY.m128d_f64[1];
    local_108.Rotation.ZW.m128d_f64[0] = (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[0];
    local_108.Rotation.ZW.m128d_f64[1] = (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
    local_108.Translation.ZW.m128d_f64[1] = 0.0;
    local_108.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_108.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_108.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
    local_108.Translation.XY.m128d_f64[0] = dVar8;
    local_108.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
    local_108.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_108.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    UCombinedTransformGizmo::ReinitializeGizmoTransform
              ((this->PointTransformGizmo).field0_0x0.DebugPtr,&local_108,true);
    pUVar5 = (this->PointTransformGizmo).field0_0x0.DebugPtr;
    local_178 = dVar12;
    local_188 = ___xmm_3ff00000000000003ff0000000000000;
    dStack_180 = _UNK_150689688;
    (**(code **)(*(longlong *)pUVar5 + 0x358))(pUVar5,&local_188);
  }
  return;
}

// UpdateGizmoVisibility @ 14cb47dd0

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
ULatticeControlPointsMechanic::UpdateGizmoVisibility(ULatticeControlPointsMechanic *this)

{
  UCombinedTransformGizmo *pUVar1;
  bool bVar2;
  undefined8 uVar3;
  
  pUVar1 = (this->PointTransformGizmo).field0_0x0.DebugPtr;
  if (pUVar1 == (UCombinedTransformGizmo *)0x0) {
    return;
  }
  if ((*(int *)&(this->SelectedPointIDs).Elements.field_0x8 !=
       *(int *)&(this->SelectedPointIDs).Elements.field_0x34) &&
     (this->bIsDraggingRectangle == false)) {
    bVar2 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                      ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ShouldHideGizmo);
    if ((bVar2) &&
       (bVar2 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::Execute
                          (&this->ShouldHideGizmo), bVar2)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    pUVar1 = (this->PointTransformGizmo).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar1 + 0x360))(pUVar1,uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cb47e06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar1 + 0x360))(pUVar1,0);
  return;
}

// UpdatePointLocations @ 14cb484a0

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
ULatticeControlPointsMechanic::UpdatePointLocations
          (ULatticeControlPointsMechanic *this,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  iVar3 = param_1->ArrayNum;
  if (((this->ControlPoints).ArrayNum == iVar3) &&
     (pTVar2 = &this->ControlPoints, pTVar2 != param_1)) {
    iVar4 = (this->ControlPoints).ArrayMax;
    piVar1 = &(this->ControlPoints).ArrayMax;
    _Src = (param_1->AllocatorInstance).Data;
    (this->ControlPoints).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar3,iVar4,&pTVar2->AllocatorInstance,iVar3,piVar1);
      if (iVar3 != 0) {
        memcpy((pTVar2->AllocatorInstance).Data,_Src,(longlong)iVar3 * 0x18);
      }
    }
  }
  UpdateDrawables(this);
  return;
}

// UpdatePointLocations @ 14cb48550

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
ULatticeControlPointsMechanic::UpdatePointLocations
          (ULatticeControlPointsMechanic *this,
          TMap<int,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Math::TVector<double>,0>_>
          *param_1)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  int iVar22;
  uint *puVar23;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar6 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar20 = 0;
  iVar22 = 0;
  uVar15 = 1;
  iVar16 = 0;
  if (iVar6 != 0) {
    puVar23 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar19 = *puVar23;
    while (uVar19 == 0) {
      lVar17 = (longlong)iVar20;
      iVar22 = iVar22 + 0x20;
      iVar20 = iVar20 + 1;
      iVar16 = iVar6;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14cb485ed;
      uVar19 = puVar23[lVar17 + 1];
    }
    uVar15 = -uVar19 & uVar19;
    uVar3 = (ulonglong)uVar15 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_res18 = (int)lVar17;
    iVar16 = local_res18 + -1 + iVar22;
    if (iVar6 < iVar16) {
      iVar16 = iVar6;
    }
  }
LAB_14cb485ed:
  uVar19 = *(uint *)&param_1->field_0x28;
  uVar18 = uVar19 & 0xffffffe0;
  TStack_68._padding_ = CONCAT44(uVar15,iVar20);
  TStack_68.CurrentBitIndex = iVar16;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar19 >> 5;
  TStack_68._28_4_ = iVar16;
  TStack_68.BaseBitIndex = iVar22;
  uStack_48 = CONCAT44(uStack_74,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar19 < 0) || (iVar6 < (int)uVar19)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar15 = *(uint *)&param_1->field_0x28;
  if (uVar19 != uVar15) {
    puVar21 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar21 = puVar1;
    }
    uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar20 * 4);
    while (uVar19 == 0) {
      lVar17 = (longlong)iVar20;
      uVar18 = uVar18 + 0x20;
      iVar20 = iVar20 + 1;
      uVar19 = uVar15;
      if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_14cb486f0;
      uVar19 = *(uint *)(puVar21 + lVar17 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_res20 = (int)lVar17;
    uVar19 = local_res20 + -1 + uVar18;
    if ((int)uVar15 < (int)uVar19) {
      uVar19 = uVar15;
    }
  }
LAB_14cb486f0:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_48) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    lVar17 = (longlong)TStack_68.CurrentBitIndex;
    if ((TStack_68.CurrentBitIndex == uVar19) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      UpdateDrawables(this);
      return;
    }
    lVar7 = *(longlong *)param_1;
    uVar15 = *(uint *)(lVar7 + lVar17 * 0x28);
    puVar4 = (undefined4 *)(lVar7 + 8 + lVar17 * 0x28);
    uVar10 = *puVar4;
    uVar11 = puVar4[1];
    uVar12 = puVar4[2];
    uVar13 = puVar4[3];
    uVar5 = *(undefined8 *)(lVar7 + 0x18 + lVar17 * 0x28);
    uVar18 = 0;
    if ((int)uVar15 < (this->ControlPoints).ArrayNum) {
      uVar18 = ~uVar15 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) break;
    pFVar8 = (this->ControlPoints).AllocatorInstance.Data;
    pFVar2 = pFVar8 + (longlong)(int)uVar15 * 0x18;
    *(undefined4 *)pFVar2 = uVar10;
    *(undefined4 *)(pFVar2 + 4) = uVar11;
    *(undefined4 *)(pFVar2 + 8) = uVar12;
    *(undefined4 *)(pFVar2 + 0xc) = uVar13;
    *(undefined8 *)(pFVar8 + (longlong)(int)uVar15 * 0x18 + 0x10) = uVar5;
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

// UpdateSetPivotMode @ 14cb49620

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
ULatticeControlPointsMechanic::UpdateSetPivotMode(ULatticeControlPointsMechanic *this,bool param_1)

{
  ((this->PointTransformProxy).field0_0x0.DebugPtr)->bSetPivotMode = param_1;
  return;
}

