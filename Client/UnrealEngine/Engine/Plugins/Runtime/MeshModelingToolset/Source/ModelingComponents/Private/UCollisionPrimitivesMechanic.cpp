// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 58

// StaticClass @ 14caab7e0

UClass * __cdecl UCollisionPrimitivesMechanic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCollisionPrimitivesMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"CollisionPrimitivesMechanic",
               &Z_Registration_Info_UClass_UCollisionPrimitivesMechanic.InnerSingleton,
               StaticRegisterNativesUCollisionPrimitivesMechanic,0x5b0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCollisionPrimitivesMechanic>,
               InternalVTableHelperCtorCaller<UCollisionPrimitivesMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCollisionPrimitivesMechanic.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14cab0af0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
`UCollisionPrimitivesMechanic::UpdateGizmoVisibility'::__l2::<lambda_2>::<lambda_invoker_cdecl>
          (UCombinedTransformGizmo *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014cab0af5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x360))(param_1,0);
  return;
}

// <lambda_invoker_cdecl> @ 14cab0b60

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

void __cdecl
`UCollisionPrimitivesMechanic::UpdateGizmoLocation'::__l8::<lambda_2>::<lambda_invoker_cdecl>
          (UCombinedTransformGizmo *param_1)

{
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_78.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_78.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_78.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UCombinedTransformGizmo::ReinitializeGizmoTransform(param_1,&local_78,true);
  return;
}

// <lambda_invoker_cdecl> @ 14cab0c30

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

void __cdecl
`UCollisionPrimitivesMechanic::UpdateGizmoLocation'::__l2::<lambda_4>::<lambda_invoker_cdecl>
          (UCombinedTransformGizmo *param_1)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_28 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_20 = _UNK_150689688;
  local_18 = __real_3ff0000000000000;
  (**(code **)(*(longlong *)param_1 + 0x358))(__real_3ff0000000000000,&local_28);
  return;
}

// UCollisionPrimitivesMechanic @ 14cacc010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCollisionPrimitivesMechanic * __thiscall
UCollisionPrimitivesMechanic::UCollisionPrimitivesMechanic
          (UCollisionPrimitivesMechanic *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this,param_1);
  *(undefined8 *)&(this->OnCollisionGeometryChanged).field_0x18 = 2;
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined8 *)&this->OnCollisionGeometryChanged = 0;
  *(undefined8 *)&(this->OnCollisionGeometryChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnSelectionChanged = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x18 = 2;
  *(undefined8 *)&this->ShouldHideGizmo = 0;
  *(undefined4 *)&(this->ShouldHideGizmo).field_0x10 = 0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickBehaviorTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&(this->OnCollisionGeometryChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->ShouldHideGizmo).field_0x8 = 0;
  (this->PhysicsData).Object = (FPhysicsDataCollection *)0x0;
  (this->PhysicsData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->PrimitivePreTransform).Object = (FKAggregateGeom *)0x0;
  (this->PrimitivePreTransform).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
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
  (this->MeshBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->MeshBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->MeshBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->MeshBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->MeshBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->MeshBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
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
  (this->CachedCameraState).DPIScale = 1.0;
  (this->CachedCameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CachedCameraState).AspectRatio = 1.0;
  (this->CachedCameraState).bIsOrthographic = false;
  (this->CachedCameraState).bIsVR = false;
  (this->PreviewGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  (this->DrawnPrimitiveEdges).field0_0x0.DebugPtr = (ULineSetComponent *)0x0;
  *(undefined8 *)&this->PrimitiveToCurveLookup = 0;
  *(undefined8 *)&(this->PrimitiveToCurveLookup).field_0x8 = 0;
  *(undefined8 *)&(this->PrimitiveToCurveLookup).field_0x20 = 0;
  *(undefined4 *)&(this->PrimitiveToCurveLookup).field_0x28 = 0;
  *(undefined4 *)&(this->PrimitiveToCurveLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrimitiveToCurveLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrimitiveToCurveLookup).field_0x34 = 0;
  *(undefined8 *)&(this->PrimitiveToCurveLookup).field_0x40 = 0;
  *(undefined4 *)&(this->PrimitiveToCurveLookup).field_0x48 = 0;
  *(undefined8 *)&this->CurveToPrimitiveLookup = 0;
  *(undefined8 *)&(this->CurveToPrimitiveLookup).field_0x8 = 0;
  *(undefined8 *)&(this->CurveToPrimitiveLookup).field_0x20 = 0;
  *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x28 = 0;
  *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x34 = 0;
  *(undefined8 *)&(this->CurveToPrimitiveLookup).field_0x40 = 0;
  *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x48 = 0;
  (this->PrimitiveRenderData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveRenderData).ArrayNum = 0;
  (this->PrimitiveRenderData).ArrayMax = 0;
  this->DepthBias = 0.0;
  this->bShiftToggle = false;
  this->bCtrlToggle = false;
  *(undefined8 *)&this->ShouldAddToSelectionFunc = 0;
  *(undefined8 *)&(this->ShouldAddToSelectionFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldAddToSelectionFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_26_>_UCollisionPrimitivesMechanic___0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ShouldAddToSelectionFunc).field_0x18;
  *(UCollisionPrimitivesMechanic **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldAddToSelectionFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<UCollisionPrimitivesMechanic::<lambda_26_>,bool>::Call;
  }
  *(undefined8 *)&this->ShouldRemoveFromSelectionFunc = 0;
  *(undefined8 *)&(this->ShouldRemoveFromSelectionFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldRemoveFromSelectionFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_27_>_UCollisionPrimitivesMechanic___0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ShouldRemoveFromSelectionFunc).field_0x18;
  *(UCollisionPrimitivesMechanic **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldRemoveFromSelectionFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<UCollisionPrimitivesMechanic::<lambda_27_>,bool>::Call;
  }
  (this->TranslateTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->SphereTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->BoxTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->CapsuleTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->FullTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->CurrentActiveProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->TranslateTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->SphereTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->BoxTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->CapsuleTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->FullTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->BoxIntervalGizmo).field0_0x0.DebugPtr = (UIntervalGizmo *)0x0;
  (this->BoxXIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->BoxYIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->BoxZIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->CapsuleIntervalGizmo).field0_0x0.DebugPtr = (UIntervalGizmo *)0x0;
  (this->CapsuleRadiusIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->CapsuleLengthIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  *(undefined8 *)&this->GeometrySetToleranceTest = 0;
  *(undefined8 *)&(this->GeometrySetToleranceTest).field_0x28 = 0;
  (this->MarqueeMechanic).field0_0x0.DebugPtr = (URectangleMarqueeMechanic *)0x0;
  *(undefined8 *)&(this->SelectedPrimitiveIDs).Elements = 0;
  *(undefined8 *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedPrimitiveIDs).Elements.field_0x20 = 0;
  this->bGizmoBeingDragged = false;
  this->HoveredPrimitiveID = -1;
  this->bIsDraggingRectangle = false;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x34 = 0;
  (this->SelectedPrimitiveIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedPrimitiveIDs).HashSize = 0;
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
  this->CurrentChangeStamp = 0;
  (this->LongTransactions).OpenCount = 0;
  (this->LongTransactions).MaxOpen = 1;
  return this;
}

// UCollisionPrimitivesMechanic @ 14cacc4c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UCollisionPrimitivesMechanic * __thiscall
UCollisionPrimitivesMechanic::UCollisionPrimitivesMechanic(UCollisionPrimitivesMechanic *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this);
  *(undefined8 *)&(this->OnCollisionGeometryChanged).field_0x18 = 2;
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined8 *)&this->OnCollisionGeometryChanged = 0;
  *(undefined8 *)&(this->OnCollisionGeometryChanged).field_0x10 = 0;
  *(undefined8 *)&this->OnSelectionChanged = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x18 = 2;
  *(undefined8 *)&this->ShouldHideGizmo = 0;
  *(undefined4 *)&(this->ShouldHideGizmo).field_0x10 = 0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickBehaviorTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&(this->OnCollisionGeometryChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x8 = 0;
  *(undefined8 *)&(this->ShouldHideGizmo).field_0x8 = 0;
  (this->PhysicsData).Object = (FPhysicsDataCollection *)0x0;
  (this->PhysicsData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->PrimitivePreTransform).Object = (FKAggregateGeom *)0x0;
  (this->PrimitivePreTransform).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
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
  (this->MeshBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->MeshBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->MeshBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->MeshBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->MeshBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->MeshBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
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
  (this->CachedCameraState).DPIScale = 1.0;
  (this->CachedCameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CachedCameraState).AspectRatio = 1.0;
  (this->CachedCameraState).bIsOrthographic = false;
  (this->CachedCameraState).bIsVR = false;
  (this->PreviewGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  (this->DrawnPrimitiveEdges).field0_0x0.DebugPtr = (ULineSetComponent *)0x0;
  *(undefined8 *)&this->PrimitiveToCurveLookup = 0;
  *(undefined8 *)&(this->PrimitiveToCurveLookup).field_0x8 = 0;
  *(undefined8 *)&(this->PrimitiveToCurveLookup).field_0x20 = 0;
  *(undefined4 *)&(this->PrimitiveToCurveLookup).field_0x28 = 0;
  *(undefined4 *)&(this->PrimitiveToCurveLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->PrimitiveToCurveLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PrimitiveToCurveLookup).field_0x34 = 0;
  *(undefined8 *)&(this->PrimitiveToCurveLookup).field_0x40 = 0;
  *(undefined4 *)&(this->PrimitiveToCurveLookup).field_0x48 = 0;
  *(undefined8 *)&this->CurveToPrimitiveLookup = 0;
  *(undefined8 *)&(this->CurveToPrimitiveLookup).field_0x8 = 0;
  *(undefined8 *)&(this->CurveToPrimitiveLookup).field_0x20 = 0;
  *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x28 = 0;
  *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x34 = 0;
  *(undefined8 *)&(this->CurveToPrimitiveLookup).field_0x40 = 0;
  *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x48 = 0;
  (this->PrimitiveRenderData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PrimitiveRenderData).ArrayNum = 0;
  (this->PrimitiveRenderData).ArrayMax = 0;
  this->DepthBias = 0.0;
  this->bShiftToggle = false;
  this->bCtrlToggle = false;
  *(undefined8 *)&this->ShouldAddToSelectionFunc = 0;
  *(undefined8 *)&(this->ShouldAddToSelectionFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldAddToSelectionFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_26_>_UCollisionPrimitivesMechanic___0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ShouldAddToSelectionFunc).field_0x18;
  *(UCollisionPrimitivesMechanic **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldAddToSelectionFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<UCollisionPrimitivesMechanic::<lambda_26_>,bool>::Call;
  }
  *(undefined8 *)&this->ShouldRemoveFromSelectionFunc = 0;
  *(undefined8 *)&(this->ShouldRemoveFromSelectionFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldRemoveFromSelectionFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_27_>_UCollisionPrimitivesMechanic___0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ShouldRemoveFromSelectionFunc).field_0x18;
  *(UCollisionPrimitivesMechanic **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldRemoveFromSelectionFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<UCollisionPrimitivesMechanic::<lambda_27_>,bool>::Call;
  }
  (this->TranslateTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->SphereTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->BoxTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->CapsuleTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->FullTransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->CurrentActiveProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->TranslateTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->SphereTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->BoxTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->CapsuleTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->FullTransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->BoxIntervalGizmo).field0_0x0.DebugPtr = (UIntervalGizmo *)0x0;
  (this->BoxXIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->BoxYIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->BoxZIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->CapsuleIntervalGizmo).field0_0x0.DebugPtr = (UIntervalGizmo *)0x0;
  (this->CapsuleRadiusIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  (this->CapsuleLengthIntervalSource).field0_0x0.DebugPtr = (UGizmoLocalFloatParameterSource *)0x0;
  *(undefined8 *)&this->GeometrySetToleranceTest = 0;
  *(undefined8 *)&(this->GeometrySetToleranceTest).field_0x28 = 0;
  (this->MarqueeMechanic).field0_0x0.DebugPtr = (URectangleMarqueeMechanic *)0x0;
  *(undefined8 *)&(this->SelectedPrimitiveIDs).Elements = 0;
  *(undefined8 *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SelectedPrimitiveIDs).Elements.field_0x20 = 0;
  this->bGizmoBeingDragged = false;
  this->HoveredPrimitiveID = -1;
  this->bIsDraggingRectangle = false;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x34 = 0;
  (this->SelectedPrimitiveIDs).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SelectedPrimitiveIDs).HashSize = 0;
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
  this->CurrentChangeStamp = 0;
  (this->LongTransactions).OpenCount = 0;
  (this->LongTransactions).MaxOpen = 1;
  return this;
}

// ~UCollisionPrimitivesMechanic @ 14cad1d80

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
UCollisionPrimitivesMechanic::~UCollisionPrimitivesMechanic(UCollisionPrimitivesMechanic *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  longlong *plVar3;
  void *pvVar4;
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
  pFVar1 = (this->CurrentDragSelection).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->PreDragSelection).HashSize = 0;
  FVar2 = (this->PreDragSelection).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->PreDragSelection).Elements);
  (this->SelectedPrimitiveIDs).HashSize = 0;
  FVar2 = (this->SelectedPrimitiveIDs).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SelectedPrimitiveIDs).Elements);
  if (*(longlong *)&this->GeometrySetToleranceTest != 0) {
    plVar3 = *(longlong **)&(this->GeometrySetToleranceTest).field_0x28;
    plVar5 = (longlong *)&(this->GeometrySetToleranceTest).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)&this->ShouldRemoveFromSelectionFunc != 0) {
    plVar3 = *(longlong **)&(this->ShouldRemoveFromSelectionFunc).field_0x28;
    plVar5 = (longlong *)&(this->ShouldRemoveFromSelectionFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)&this->ShouldAddToSelectionFunc != 0) {
    plVar3 = *(longlong **)&(this->ShouldAddToSelectionFunc).field_0x28;
    plVar5 = (longlong *)&(this->ShouldAddToSelectionFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar5 = plVar3;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  pFVar1 = (this->PrimitiveRenderData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x48 = 0;
  pvVar4 = *(void **)&(this->CurveToPrimitiveLookup).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurveToPrimitiveLookup);
  *(undefined4 *)&(this->PrimitiveToCurveLookup).field_0x48 = 0;
  pvVar4 = *(void **)&(this->PrimitiveToCurveLookup).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PrimitiveToCurveLookup);
  UE::Geometry::FGeometrySet3::~FGeometrySet3(&this->GeometrySet);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PrimitivePreTransform).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PhysicsData).SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ShouldHideGizmo);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectionChanged).field_0x8,*(int *)&(this->OnSelectionChanged).field_0x10);
  pvVar4 = *(void **)&(this->OnSelectionChanged).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectionChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnCollisionGeometryChanged).field_0x8,
             *(int *)&(this->OnCollisionGeometryChanged).field_0x10);
  pvVar4 = *(void **)&(this->OnCollisionGeometryChanged).field_0x8;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCollisionGeometryChanged);
  *(undefined ***)&this->field_0x38 = &___7IModifierToggleBehaviorTarget__6B_;
  *(undefined ***)&this->field_0x30 = &___7IModifierToggleBehaviorTarget__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// operator() @ 14cad6400

bool __thiscall
`UCollisionPrimitivesMechanic::OnDragRectangleChanged'::__l2::<lambda_1>::operator()
          (void *this,TPolyline<double,3> *param_1)

{
  int iVar1;
  FCameraRectangle *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  
  this_00 = *(FCameraRectangle **)this;
  iVar1 = (param_1->Vertices).ArrayNum;
  uVar7 = iVar1 - 1;
  uVar6 = 0;
  if ((int)uVar7 < iVar1) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar2 = (param_1->Vertices).AllocatorInstance.Data;
  if ((param_1->Vertices).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  bVar4 = FCameraRectangle::IsProjectedSegmentIntersectingRectangle
                    (this_00,(TVector<double> *)(param_1->Vertices).AllocatorInstance.Data,
                     (TVector<double> *)(pFVar2 + (longlong)(int)uVar7 * 0x18));
  return bVar4;
}

// operator() @ 14cad75e0

void __thiscall
`UCollisionPrimitivesMechanic::UpdateGizmoLocation'::__l2::<lambda_1>::operator()
          (void *this,TFunction<void___cdecl(UCombinedTransformGizmo_&)> *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar1 = *(undefined8 *)(*(longlong *)this + 0x3e0);
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  plVar5 = (longlong *)&param_1->field_0x10;
  pcVar2 = *(code **)param_1;
  plVar4 = plVar5;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,uVar1);
  uVar1 = *(undefined8 *)(*(longlong *)this + 1000);
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar2 = *(code **)param_1;
  plVar4 = plVar5;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,uVar1);
  uVar1 = *(undefined8 *)(*(longlong *)this + 0x3f0);
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar2 = *(code **)param_1;
  plVar4 = plVar5;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,uVar1);
  uVar1 = *(undefined8 *)(*(longlong *)this + 0x3f8);
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar2 = *(code **)param_1;
  plVar4 = plVar5;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,uVar1);
  uVar1 = *(undefined8 *)(*(longlong *)this + 0x400);
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar2 = *(code **)param_1;
  plVar4 = plVar5;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,uVar1);
  if (*(longlong *)param_1 != 0) {
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return;
}

// operator() @ 14cad7730

void __thiscall
`UCollisionPrimitivesMechanic::UpdateGizmoVisibility'::__l2::<lambda_1>::operator()
          (void *this,TFunction<void___cdecl(UCombinedTransformGizmo_&)> *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  uVar1 = *(undefined8 *)(*(longlong *)this + 0x3e0);
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  plVar5 = (longlong *)&param_1->field_0x10;
  pcVar2 = *(code **)param_1;
  plVar4 = plVar5;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,uVar1);
  uVar1 = *(undefined8 *)(*(longlong *)this + 1000);
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar2 = *(code **)param_1;
  plVar4 = plVar5;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,uVar1);
  uVar1 = *(undefined8 *)(*(longlong *)this + 0x3f0);
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar2 = *(code **)param_1;
  plVar4 = plVar5;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,uVar1);
  uVar1 = *(undefined8 *)(*(longlong *)this + 0x3f8);
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar2 = *(code **)param_1;
  plVar4 = plVar5;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,uVar1);
  uVar1 = *(undefined8 *)(*(longlong *)this + 0x400);
  UE::Core::Private::Function::CheckCallable(*(void **)param_1);
  pcVar2 = *(code **)param_1;
  plVar4 = plVar5;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_1->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,uVar1);
  if (*(longlong *)param_1 != 0) {
    if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_1->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return;
}

// operator() @ 14cad7a30

void __thiscall
`UCollisionPrimitivesMechanic::RebuildDrawables'::__l5::<lambda_1>::operator()
          (void *this,FPrimitiveRenderData *param_1,
          TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4,
          TTransform<double> *param_5,TVector<double> *param_6,TVector<double> *param_7,
          FColor *param_8)

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
  double dVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  uint *puVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  undefined4 uVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar47;
  undefined4 uVar48;
  uint local_res20 [2];
  TPolyline<double,3> local_128;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_100 [16];
  double local_f0;
  undefined1 auStack_e8 [16];
  double dStack_d8;
  uint local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined1 local_c0 [16];
  double local_b0;
  undefined1 local_a8 [16];
  double local_98;
  undefined1 local_88 [16];
  double local_78;
  
  auVar28 = *(undefined1 (*) [16])(param_5->Rotation).ZW.m128d_f64;
  dVar11 = (param_5->Rotation).ZW.m128d_f64[1];
  dVar42 = (param_5->Scale3D).XY.m128d_f64[0] * (param_6->field0_0x0)._s_0.X;
  dVar46 = (param_5->Scale3D).XY.m128d_f64[1] * (param_6->field0_0x0)._s_0.Y;
  auVar20 = *(undefined1 (*) [16])(param_5->Rotation).XY.m128d_f64;
  auVar39._8_4_ = SUB84(dVar46,0);
  auVar39._0_8_ = dVar42;
  uVar37 = (undefined4)((ulonglong)dVar46 >> 0x20);
  auVar39._12_4_ = uVar37;
  dVar5 = (param_6->field0_0x0)._s_0.Z * (param_5->Scale3D).ZW.m128d_f64[0];
  dVar6 = (param_5->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar26 = blendpd(auVar20,auVar28,2);
  dVar4 = auVar28._0_8_;
  auVar40._0_8_ = auVar39._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar42;
  auVar40._8_8_ = dVar5 * auVar20._8_8_ - dVar4 * dVar46;
  auVar27._8_4_ = SUB84(dVar46,0);
  auVar27._0_8_ = dVar42;
  auVar27._12_4_ = uVar37;
  dVar7 = (param_7->field0_0x0)._s_0.Z * (param_5->Scale3D).ZW.m128d_f64[0];
  dVar8 = (param_5->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar20._8_4_ = SUB84(dVar6,0);
  auVar20._0_8_ = dVar5;
  auVar20._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar20 = blendpd(auVar27,auVar20,2);
  dVar3 = auVar28._8_8_;
  auVar21._0_8_ = auVar20._0_8_ * dVar4 - auVar26._0_8_ * dVar5;
  auVar21._8_8_ = auVar20._8_8_ * dVar3 - auVar26._8_8_ * dVar6;
  auVar20 = *(undefined1 (*) [16])(param_5->Rotation).XY.m128d_f64;
  auVar26 = blendpd(auVar40,auVar21,2);
  auVar41._0_8_ = auVar26._0_8_ + auVar26._0_8_;
  auVar41._8_8_ = auVar26._8_8_ + auVar26._8_8_;
  dVar6 = auVar40._8_8_ + auVar40._8_8_;
  dVar10 = auVar21._0_8_ + auVar21._0_8_;
  uVar37 = (undefined4)((ulonglong)dVar10 >> 0x20);
  auVar33._8_4_ = SUB84(dVar10,0);
  auVar33._0_8_ = dVar6;
  auVar33._12_4_ = uVar37;
  auVar29._8_4_ = SUB84(dVar10,0);
  auVar29._0_8_ = dVar6;
  auVar29._12_4_ = uVar37;
  auVar26 = blendpd(auVar29,auVar41,2);
  auVar34._0_8_ = auVar33._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar6;
  auVar34._8_8_ = auVar41._0_8_ * auVar20._8_8_ - dVar4 * dVar10;
  auVar20 = blendpd(auVar20,auVar28,2);
  auVar22._8_4_ = SUB84(auVar34._8_8_,0);
  auVar22._0_8_ = auVar34._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
  auVar30._0_8_ = auVar26._0_8_ * dVar4 - auVar20._0_8_ * auVar41._0_8_;
  auVar30._8_8_ = auVar26._8_8_ * dVar3 - auVar20._8_8_ * auVar41._8_8_;
  dVar9 = dVar6 * dVar11 + dVar42 + auVar22._8_8_ + (param_5->Translation).XY.m128d_f64[0];
  dVar6 = dVar10 * dVar11 + dVar46 + auVar30._0_8_ + (param_5->Translation).XY.m128d_f64[1];
  uVar47 = SUB84(dVar6,0);
  uVar48 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar10 = (param_5->Scale3D).XY.m128d_f64[0] * (param_7->field0_0x0)._s_0.X;
  dVar42 = (param_5->Scale3D).XY.m128d_f64[1] * (param_7->field0_0x0)._s_0.Y;
  uVar37 = (undefined4)((ulonglong)dVar42 >> 0x20);
  auVar20 = *(undefined1 (*) [16])(param_5->Rotation).XY.m128d_f64;
  auVar26 = blendpd(auVar34,auVar30,2);
  auVar43._8_4_ = SUB84(dVar42,0);
  auVar43._0_8_ = dVar10;
  auVar43._12_4_ = uVar37;
  local_f0 = auVar41._0_8_ * dVar11 + dVar5 + auVar26._0_8_ + (param_5->Translation).ZW.m128d_f64[0]
  ;
  local_88._8_4_ = uVar47;
  local_88._0_8_ = dVar9;
  local_88._12_4_ = uVar48;
  local_c0._8_4_ = uVar47;
  local_c0._0_8_ = dVar9;
  local_c0._12_4_ = uVar48;
  auVar27 = blendpd(auVar20,auVar28,2);
  auVar44._0_8_ = auVar43._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar10;
  auVar44._8_8_ = dVar7 * auVar20._8_8_ - dVar4 * dVar42;
  auVar23._8_4_ = SUB84(dVar42,0);
  auVar23._0_8_ = dVar10;
  auVar23._12_4_ = uVar37;
  auVar26._8_4_ = SUB84(dVar8,0);
  auVar26._0_8_ = dVar7;
  auVar26._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  auVar20 = blendpd(auVar23,auVar26,2);
  auVar24._0_8_ = auVar20._0_8_ * dVar4 - auVar27._0_8_ * dVar7;
  auVar24._8_8_ = auVar20._8_8_ * dVar3 - auVar27._8_8_ * dVar8;
  auVar20 = *(undefined1 (*) [16])(param_5->Rotation).XY.m128d_f64;
  auVar26 = blendpd(auVar44,auVar24,2);
  auVar45._0_8_ = auVar26._0_8_ + auVar26._0_8_;
  auVar45._8_8_ = auVar26._8_8_ + auVar26._8_8_;
  dVar5 = auVar44._8_8_ + auVar44._8_8_;
  dVar6 = auVar24._0_8_ + auVar24._0_8_;
  uVar37 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar35._8_4_ = SUB84(dVar6,0);
  auVar35._0_8_ = dVar5;
  auVar35._12_4_ = uVar37;
  auVar31._8_4_ = SUB84(dVar6,0);
  auVar31._0_8_ = dVar5;
  auVar31._12_4_ = uVar37;
  auVar26 = blendpd(auVar31,auVar45,2);
  auVar36._0_8_ = auVar35._8_8_ * auVar20._0_8_ - auVar20._8_8_ * dVar5;
  auVar36._8_8_ = auVar45._0_8_ * auVar20._8_8_ - dVar4 * dVar6;
  auVar25._8_4_ = SUB84(auVar36._8_8_,0);
  auVar25._0_8_ = auVar36._0_8_;
  auVar25._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
  auVar28 = blendpd(auVar20,auVar28,2);
  auVar32._0_8_ = auVar26._0_8_ * dVar4 - auVar28._0_8_ * auVar45._0_8_;
  auVar32._8_8_ = auVar26._8_8_ * dVar3 - auVar28._8_8_ * auVar45._8_8_;
  auVar28 = blendpd(auVar36,auVar32,2);
  dVar4 = dVar5 * dVar3 + dVar10 + auVar25._8_8_ + (param_5->Translation).XY.m128d_f64[0];
  dVar5 = dVar6 * dVar3 + dVar42 + auVar32._0_8_ + (param_5->Translation).XY.m128d_f64[1];
  uVar37 = SUB84(dVar5,0);
  uVar38 = (undefined4)((ulonglong)dVar5 >> 0x20);
  local_118._8_4_ = uVar37;
  local_118._0_8_ = dVar4;
  local_118._12_4_ = uVar38;
  local_108 = auVar45._0_8_ * dVar3 + dVar7 + auVar28._0_8_ + (param_5->Translation).ZW.m128d_f64[0]
  ;
  pFVar1 = (param_2->AllocatorInstance).Data;
  local_a8._8_4_ = uVar37;
  local_a8._0_8_ = dVar4;
  local_a8._12_4_ = uVar38;
  uStack_c8 = *(undefined4 *)(*(longlong *)this + 0x338);
  uStack_cc = *(undefined4 *)(*(longlong *)this + 0x334);
  local_100._8_4_ = uVar47;
  local_100._0_8_ = dVar9;
  local_100._12_4_ = uVar48;
  local_d0 = (param_8->field0_0x0).Bits;
  auStack_e8._8_4_ = uVar37;
  auStack_e8._0_8_ = dVar4;
  auStack_e8._12_4_ = uVar38;
  local_res20[0] = param_3;
  dStack_d8 = local_108;
  local_b0 = local_f0;
  local_98 = local_108;
  local_78 = local_f0;
  if ((pFVar1 <= (FScriptContainerElement *)local_100) &&
     ((FScriptContainerElement *)local_100 < pFVar1 + (longlong)param_2->ArrayMax * 0x40)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar14 = param_2->ArrayNum;
  if (iVar14 == param_2->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar14 + 1;
  pFVar1 = (param_2->AllocatorInstance).Data;
  lVar19 = (longlong)iVar14 * 0x40;
  *(undefined8 *)(pFVar1 + lVar19) = local_100._0_8_;
  *(undefined8 *)(pFVar1 + lVar19 + 8) = local_100._8_8_;
  *(double *)(pFVar1 + lVar19 + 0x10) = local_f0;
  *(undefined8 *)(pFVar1 + lVar19 + 0x10 + 8) = auStack_e8._0_8_;
  *(undefined8 *)(pFVar1 + lVar19 + 0x20) = auStack_e8._8_8_;
  *(double *)(pFVar1 + lVar19 + 0x20 + 8) = dStack_d8;
  *(ulonglong *)(pFVar1 + lVar19 + 0x30) = CONCAT44(uStack_cc,local_d0);
  *(ulonglong *)(pFVar1 + lVar19 + 0x30 + 8) = CONCAT44(uStack_c4,uStack_c8);
  lVar19 = *(longlong *)this;
  local_128.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Vertices.ArrayNum = 0;
  local_128.Vertices.ArrayMax = 0;
  iVar15 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,(ForAnyElementType *)&local_128,&local_128.Vertices.ArrayMax);
  iVar14 = iVar15 + 1;
  *(undefined8 *)(local_128.Vertices.AllocatorInstance.Data + (longlong)iVar15 * 0x18) =
       local_c0._0_8_;
  *(undefined8 *)(local_128.Vertices.AllocatorInstance.Data + (longlong)iVar15 * 0x18 + 8) =
       local_c0._8_8_;
  *(double *)(local_128.Vertices.AllocatorInstance.Data + (longlong)iVar15 * 0x18 + 0x10) = local_b0
  ;
  local_128.Vertices.ArrayNum = iVar14;
  if ((local_128.Vertices.AllocatorInstance.Data <= (FScriptContainerElement *)local_118) &&
     ((FScriptContainerElement *)local_118 <
      local_128.Vertices.AllocatorInstance.Data + (longlong)local_128.Vertices.ArrayMax * 0x18)) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar13) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (local_128.Vertices.ArrayNum == local_128.Vertices.ArrayMax) {
    local_128.Vertices.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,(ForAnyElementType *)&local_128,&local_128.Vertices.ArrayMax);
  }
  lVar16 = (longlong)local_128.Vertices.ArrayNum;
  local_128.Vertices.ArrayNum = local_128.Vertices.ArrayNum + 1;
  *(undefined8 *)(local_128.Vertices.AllocatorInstance.Data + lVar16 * 0x18) = local_118._0_8_;
  *(undefined8 *)(local_128.Vertices.AllocatorInstance.Data + lVar16 * 0x18 + 8) = local_118._8_8_;
  *(double *)(local_128.Vertices.AllocatorInstance.Data + lVar16 * 0x18 + 0x10) = local_108;
  UE::Geometry::FGeometrySet3::AddCurve((FGeometrySet3 *)(lVar19 + 0x150),param_4,&local_128);
  if (local_128.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Vertices.AllocatorInstance.Data);
  }
  pTVar17 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
            ::FindOrAddImpl<int_const_&>
                      ((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                        *)(*(longlong *)this + 0x280),local_res20[0],(int *)local_res20);
  pFVar1 = (pTVar17->AllocatorInstance).Data;
  if (pFVar1 <= (FScriptContainerElement *)&param_4) {
    if ((FScriptContainerElement *)&param_4 < pFVar1 + (longlong)pTVar17->ArrayMax * 4) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar13) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  iVar14 = pTVar17->ArrayNum;
  if (iVar14 == pTVar17->ArrayMax) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x404,&pTVar17->AllocatorInstance,&pTVar17->ArrayMax);
  }
  uVar12 = local_res20[0];
  pTVar17->ArrayNum = iVar14 + 1;
  *(int *)((pTVar17->AllocatorInstance).Data + (longlong)iVar14 * 4) = param_4;
  puVar18 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                    FindOrAddImpl<int_const_&>
                              ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                *)(*(longlong *)this + 0x2d0),param_4,&param_4);
  *puVar18 = uVar12;
  return;
}

// operator() @ 14cad9970

void __thiscall
`UCollisionPrimitivesMechanic::RebuildDrawables'::__l7::<lambda_2>::operator()
          (void *this,FPrimitiveRenderData *param_1,
          TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_2,int param_3,int param_4,
          TTransform<double> *param_5,TVector<double> *param_6,TVector<double> *param_7,
          FColor *param_8)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  int iVar16;
  longlong lVar17;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar18;
  int *piVar19;
  FScriptContainerElement *pFVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined4 uVar46;
  TPolyline<double,3> local_c8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  undefined1 local_88 [16];
  double local_78;
  undefined1 local_68 [16];
  double local_58;
  
  auVar29 = *(undefined1 (*) [16])(param_5->Rotation).ZW.m128d_f64;
  dVar14 = (param_5->Rotation).ZW.m128d_f64[1];
  dVar10 = (param_6->field0_0x0)._s_0.Z * (param_5->Scale3D).ZW.m128d_f64[0];
  dVar12 = (param_5->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar8 = (param_5->Scale3D).XY.m128d_f64[0] * (param_6->field0_0x0)._s_0.X;
  dVar9 = (param_5->Scale3D).XY.m128d_f64[1] * (param_6->field0_0x0)._s_0.Y;
  uVar38 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar21 = *(undefined1 (*) [16])(param_5->Rotation).XY.m128d_f64;
  auVar27 = blendpd(auVar21,auVar29,2);
  auVar40._8_4_ = SUB84(dVar9,0);
  auVar40._0_8_ = dVar8;
  auVar40._12_4_ = uVar38;
  dVar6 = auVar29._0_8_;
  auVar41._0_8_ = auVar40._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar8;
  auVar41._8_8_ = dVar10 * auVar21._8_8_ - dVar6 * dVar9;
  auVar28._8_4_ = SUB84(dVar9,0);
  auVar28._0_8_ = dVar8;
  auVar28._12_4_ = uVar38;
  auVar21._8_4_ = SUB84(dVar12,0);
  auVar21._0_8_ = dVar10;
  auVar21._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  auVar21 = blendpd(auVar28,auVar21,2);
  dVar5 = auVar29._8_8_;
  auVar22._0_8_ = auVar21._0_8_ * dVar6 - auVar27._0_8_ * dVar10;
  auVar22._8_8_ = auVar21._8_8_ * dVar5 - auVar27._8_8_ * dVar12;
  auVar21 = *(undefined1 (*) [16])(param_5->Rotation).XY.m128d_f64;
  auVar27 = blendpd(auVar41,auVar22,2);
  auVar42._0_8_ = auVar27._0_8_ + auVar27._0_8_;
  auVar42._8_8_ = auVar27._8_8_ + auVar27._8_8_;
  dVar12 = auVar41._8_8_ + auVar41._8_8_;
  dVar7 = auVar22._0_8_ + auVar22._0_8_;
  uVar38 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar34._8_4_ = SUB84(dVar7,0);
  auVar34._0_8_ = dVar12;
  auVar34._12_4_ = uVar38;
  auVar30._8_4_ = SUB84(dVar7,0);
  auVar30._0_8_ = dVar12;
  auVar30._12_4_ = uVar38;
  auVar27 = blendpd(auVar30,auVar42,2);
  auVar35._0_8_ = auVar34._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar12;
  auVar35._8_8_ = auVar42._0_8_ * auVar21._8_8_ - dVar6 * dVar7;
  auVar23._8_4_ = SUB84(auVar35._8_8_,0);
  auVar23._0_8_ = auVar35._0_8_;
  auVar23._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
  auVar21 = blendpd(auVar21,auVar29,2);
  dVar11 = (param_7->field0_0x0)._s_0.Z * (param_5->Scale3D).ZW.m128d_f64[0];
  dVar13 = (param_5->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar31._0_8_ = auVar27._0_8_ * dVar6 - auVar21._0_8_ * auVar42._0_8_;
  auVar31._8_8_ = auVar27._8_8_ * dVar5 - auVar21._8_8_ * auVar42._8_8_;
  dVar12 = dVar12 * dVar14 + dVar8 + auVar23._8_8_ + (param_5->Translation).XY.m128d_f64[0];
  dVar7 = dVar7 * dVar14 + dVar9 + auVar31._0_8_ + (param_5->Translation).XY.m128d_f64[1];
  uVar38 = SUB84(dVar7,0);
  uVar39 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar8 = (param_5->Scale3D).XY.m128d_f64[0] * (param_7->field0_0x0)._s_0.X;
  dVar9 = (param_5->Scale3D).XY.m128d_f64[1] * (param_7->field0_0x0)._s_0.Y;
  uVar46 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar21 = *(undefined1 (*) [16])(param_5->Rotation).XY.m128d_f64;
  auVar27 = blendpd(auVar35,auVar31,2);
  local_68._8_4_ = uVar38;
  local_68._0_8_ = dVar12;
  local_68._12_4_ = uVar39;
  local_a0._s_0.Z =
       auVar42._0_8_ * dVar14 + dVar10 + auVar27._0_8_ + (param_5->Translation).ZW.m128d_f64[0];
  local_a0._8_4_ = uVar38;
  local_a0._s_0.X = dVar12;
  local_a0._12_4_ = uVar39;
  auVar43._8_4_ = SUB84(dVar9,0);
  auVar43._0_8_ = dVar8;
  auVar43._12_4_ = uVar46;
  auVar44._0_8_ = auVar43._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar8;
  auVar44._8_8_ = dVar11 * auVar21._8_8_ - dVar6 * dVar9;
  auVar28 = blendpd(auVar21,auVar29,2);
  auVar24._8_4_ = SUB84(dVar9,0);
  auVar24._0_8_ = dVar8;
  auVar24._12_4_ = uVar46;
  auVar27._8_4_ = SUB84(dVar13,0);
  auVar27._0_8_ = dVar11;
  auVar27._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
  auVar21 = blendpd(auVar24,auVar27,2);
  auVar25._0_8_ = auVar21._0_8_ * dVar6 - auVar28._0_8_ * dVar11;
  auVar25._8_8_ = auVar21._8_8_ * dVar5 - auVar28._8_8_ * dVar13;
  auVar21 = *(undefined1 (*) [16])(param_5->Rotation).XY.m128d_f64;
  auVar27 = blendpd(auVar44,auVar25,2);
  dVar12 = auVar44._8_8_ + auVar44._8_8_;
  dVar7 = auVar25._0_8_ + auVar25._0_8_;
  uVar38 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar45._0_8_ = auVar27._0_8_ + auVar27._0_8_;
  auVar45._8_8_ = auVar27._8_8_ + auVar27._8_8_;
  auVar36._8_4_ = SUB84(dVar7,0);
  auVar36._0_8_ = dVar12;
  auVar36._12_4_ = uVar38;
  auVar32._8_4_ = SUB84(dVar7,0);
  auVar32._0_8_ = dVar12;
  auVar32._12_4_ = uVar38;
  auVar27 = blendpd(auVar32,auVar45,2);
  auVar37._0_8_ = auVar36._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar12;
  auVar37._8_8_ = auVar45._0_8_ * auVar21._8_8_ - dVar6 * dVar7;
  auVar26._8_4_ = SUB84(auVar37._8_8_,0);
  auVar26._0_8_ = auVar37._0_8_;
  auVar26._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
  auVar29 = blendpd(auVar21,auVar29,2);
  auVar33._0_8_ = auVar27._0_8_ * dVar6 - auVar29._0_8_ * auVar45._0_8_;
  auVar33._8_8_ = auVar27._8_8_ * dVar5 - auVar29._8_8_ * auVar45._8_8_;
  auVar29 = blendpd(auVar37,auVar33,2);
  dVar6 = dVar12 * dVar5 + dVar8 + auVar26._8_8_ + (param_5->Translation).XY.m128d_f64[0];
  dVar12 = dVar7 * dVar5 + dVar9 + auVar33._0_8_ + (param_5->Translation).XY.m128d_f64[1];
  uVar38 = SUB84(dVar12,0);
  uVar39 = (undefined4)((ulonglong)dVar12 >> 0x20);
  local_b8._s_0.Z =
       auVar45._0_8_ * dVar5 + dVar11 + auVar29._0_8_ + (param_5->Translation).ZW.m128d_f64[0];
  local_b8._8_4_ = uVar38;
  local_b8._s_0.X = dVar6;
  local_b8._12_4_ = uVar39;
  local_88._8_4_ = uVar38;
  local_88._0_8_ = dVar6;
  local_88._12_4_ = uVar39;
  local_78 = local_b8._s_0.Z;
  local_58 = local_a0._s_0.Z;
  ULineSetComponent::SetLineStart
            (*(ULineSetComponent **)(*(longlong *)this + 0x278),param_4,
             (TVector<double> *)&local_a0._s_0);
  ULineSetComponent::SetLineEnd
            (*(ULineSetComponent **)(*(longlong *)this + 0x278),param_4,
             (TVector<double> *)&local_b8._s_0);
  lVar3 = *(longlong *)this;
  local_c8.Vertices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Vertices.ArrayNum = 0;
  local_c8.Vertices.ArrayMax = 0;
  iVar16 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,(ForAnyElementType *)&local_c8,&local_c8.Vertices.ArrayMax);
  iVar1 = iVar16 + 1;
  *(double *)(local_c8.Vertices.AllocatorInstance.Data + (longlong)iVar16 * 0x18) = local_a0._s_0.X;
  *(double *)(local_c8.Vertices.AllocatorInstance.Data + (longlong)iVar16 * 0x18 + 8) =
       local_a0._s_0.Y;
  *(double *)(local_c8.Vertices.AllocatorInstance.Data + (longlong)iVar16 * 0x18 + 0x10) =
       local_a0._s_0.Z;
  local_c8.Vertices.ArrayNum = iVar1;
  if (((local_c8.Vertices.AllocatorInstance.Data <= &local_b8) &&
      (&local_b8 <
       (TVector<double>_u_0 *)
       (local_c8.Vertices.AllocatorInstance.Data + (longlong)local_c8.Vertices.ArrayMax * 0x18))) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (local_c8.Vertices.ArrayNum == local_c8.Vertices.ArrayMax) {
    local_c8.Vertices.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,(ForAnyElementType *)&local_c8,&local_c8.Vertices.ArrayMax);
  }
  lVar17 = (longlong)local_c8.Vertices.ArrayNum;
  local_c8.Vertices.ArrayNum = local_c8.Vertices.ArrayNum + 1;
  *(double *)(local_c8.Vertices.AllocatorInstance.Data + lVar17 * 0x18) = local_b8._s_0.X;
  *(double *)(local_c8.Vertices.AllocatorInstance.Data + lVar17 * 0x18 + 8) = local_b8._s_0.Y;
  *(double *)(local_c8.Vertices.AllocatorInstance.Data + lVar17 * 0x18 + 0x10) = local_b8._s_0.Z;
  UE::Geometry::FGeometrySet3::UpdateCurve((FGeometrySet3 *)(lVar3 + 0x150),param_4,&local_c8);
  if ((TVector<double>_u_0 *)local_c8.Vertices.AllocatorInstance.Data != (TVector<double>_u_0 *)0x0)
  {
    FMemory::Free(local_c8.Vertices.AllocatorInstance.Data);
  }
  pTVar18 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
            ::FindChecked((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                           *)(*(longlong *)this + 0x280),param_3);
  pFVar20 = (pTVar18->AllocatorInstance).Data;
  pFVar2 = pFVar20 + (longlong)pTVar18->ArrayNum * 4;
  for (; pFVar20 != pFVar2; pFVar20 = pFVar20 + 4) {
    if (*(int *)pFVar20 == param_4) goto LAB_14cad9d5a;
  }
  bVar15 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_4021748204209962719>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\CollisionPrimitivesMechanic.cpp"
                      ,0x121,"PrimitiveToCurveLookup[PrimIndex].Contains(CurveIndex)");
  if (bVar15) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14cad9d5a:
  piVar19 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
            FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)(*(longlong *)this + 0x2d0),param_4);
  if ((*piVar19 != param_3) &&
     (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4021748204209962718>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\CollisionPrimitivesMechanic.cpp"
                          ,0x122,"CurveToPrimitiveLookup[CurveIndex] == PrimIndex"), bVar15)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  return;
}

// operator() @ 14cadad00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UCollisionPrimitivesMechanic::RebuildDrawables'::__l9::<lambda_3>::operator()
          (void *this,int param_1,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_2)

{
  double *pdVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  float fVar12;
  undefined1 auStackY_2b8 [32];
  TVector<float>_u_0 local_278;
  TVector<float>_u_0 local_26c;
  TVector<float>_u_0 local_260;
  TVector<float>_u_0 local_254;
  TVector<float>_u_0 local_248;
  TVector<float>_u_0 local_23c;
  TVector<float>_u_0 local_230;
  TVector<float>_u_0 local_224;
  TVector<float>_u_0 local_218;
  code *local_208;
  undefined8 *local_200;
  code *local_1f8;
  undefined8 *local_1f0;
  code *local_1e8;
  undefined8 *local_1e0;
  TQuaternion<float>_u_0 local_1d8;
  undefined8 local_1c8;
  float local_1c0;
  undefined8 local_1bc;
  float local_1b4;
  TQuaternion<float>_u_0 local_1b0;
  undefined8 local_1a0;
  float local_198;
  undefined8 local_194;
  float local_18c;
  TQuaternion<float>_u_0 local_188;
  undefined8 local_178;
  float local_170;
  undefined8 local_16c;
  float local_164;
  undefined8 local_160;
  undefined8 local_158;
  TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *local_150;
  longlong local_148;
  undefined8 local_140;
  double *local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *local_110;
  longlong local_108;
  undefined8 local_100;
  double *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *local_d0;
  longlong local_c8;
  undefined8 local_c0;
  double *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  uVar9 = *(uint *)((longlong)this + 0x40);
  lVar7 = (longlong)(int)uVar9;
  plVar2 = *(longlong **)((longlong)this + 0x20);
  uVar10 = 0;
  if ((int)uVar9 < (int)plVar2[1]) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
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
  lVar3 = *plVar2;
  lVar4 = *(longlong *)this;
  local_98 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  dStack_90 = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_88 = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  dStack_80 = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_68 = *(double *)(lVar3 + 0x40 + lVar7 * 0x50);
  pdVar1 = (double *)(lVar3 + 0x30 + lVar7 * 0x50);
  local_78._0_8_ = *pdVar1;
  local_78._8_8_ = pdVar1[1];
  dStack_60 = 0.0;
  local_58 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  dStack_50 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_48 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_40 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  if (*(longlong *)(lVar4 + 0x98) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x98);
  local_68 = *(double *)(lVar4 + 0x28) * local_68;
  dStack_60 = dStack_60 * 0.0;
  local_78._0_8_ = (double)local_78._0_8_ * *(double *)(lVar4 + 0x18);
  dVar11 = (double)local_78._8_8_ * *(double *)(lVar4 + 0x20);
  local_78._8_4_ = SUB84(dVar11,0);
  local_78._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  if (*(char *)((longlong)this + 8) != '\0') {
    lVar4 = *(longlong *)((longlong)this + 0x18);
    *(double *)(lVar4 + 0x20) = local_98;
    *(double *)(lVar4 + 0x28) = dStack_90;
    *(double *)(lVar4 + 0x30) = local_88;
    *(double *)(lVar4 + 0x38) = dStack_80;
    *(undefined8 *)(lVar4 + 0x40) = local_78._0_8_;
    *(undefined8 *)(lVar4 + 0x48) = local_78._8_8_;
    *(double *)(lVar4 + 0x50) = local_68;
    *(double *)(lVar4 + 0x58) = dStack_60;
    *(double *)(lVar4 + 0x60) = local_58;
    *(double *)(lVar4 + 0x68) = dStack_50;
    *(double *)(lVar4 + 0x70) = local_48;
    *(double *)(lVar4 + 0x78) = dStack_40;
  }
  lVar4 = *(longlong *)this;
  if (*(longlong *)(lVar4 + 0x98) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar4 = *(longlong *)(lVar4 + 0x98);
  local_1c0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  dVar11 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar4 + 0x20) >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)(lVar4 + 0x20) &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar8 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(lVar4 + 0x18) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)*(undefined8 *)(lVar4 + 0x18) &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  local_160 = *(undefined8 *)((longlong)this + 0x10);
  if (dVar8 <= dVar11) {
    dVar11 = dVar8;
  }
  uVar9 = (uint)*(undefined8 *)(lVar4 + 0x28) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar10 = (uint)((ulonglong)*(undefined8 *)(lVar4 + 0x28) >> 0x20) &
           __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  lVar4 = (longlong)this + 0x34;
  local_158 = *(undefined8 *)((longlong)this + 0x18);
  local_140 = *(undefined8 *)((longlong)this + 0x38);
  if ((double)CONCAT44(uVar10,uVar9) <= dVar11) {
    dVar11 = (double)CONCAT44(uVar10,uVar9);
  }
  local_138 = &local_98;
  local_130 = *(undefined8 *)this;
  local_128 = *(undefined8 *)((longlong)this + 0x28);
  local_200 = &local_160;
  local_208 = UE::Core::Private::Function::
              TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l9::<lambda_3>::operator()'::__l2::<lambda_1>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
              ::Call;
  local_1b4 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_278._s_0.Z = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  local_26c._s_0.Z = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  local_1d8._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_1d8._8_8_ = _UNK_150689648;
  local_260._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_1bc = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  fVar12 = (float)(dVar11 * (double)*(float *)(lVar3 + 0x48 + lVar7 * 0x50));
  local_278._0_8_ = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
  local_1c8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_260._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_26c._0_8_ = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
  local_150 = param_2;
  local_148 = lVar4;
  UE::Geometry::GenerateCircleSegments<float>
            (*(int *)((longlong)this + 0x30),fVar12,(TVector<float> *)&local_260._s_0,
             (TVector<float> *)&local_26c._s_0,(TVector<float> *)&local_278._s_0,
             (TTransformSRT3<float> *)&local_1d8._s_0,
             (TFunctionRef<void___cdecl(UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&)>
              *)&local_208);
  local_120 = *(undefined8 *)((longlong)this + 0x10);
  local_118 = *(undefined8 *)((longlong)this + 0x18);
  local_100 = *(undefined8 *)((longlong)this + 0x38);
  local_f8 = &local_98;
  local_f0 = *(undefined8 *)this;
  local_e8 = *(undefined8 *)((longlong)this + 0x28);
  local_1f0 = &local_120;
  local_1f8 = UE::Core::Private::Function::
              TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l9::<lambda_3>::operator()'::__l2::<lambda_2>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
              ::Call;
  local_18c = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_254._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  local_248._s_0.Z = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  local_1b0._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_1b0._8_8_ = _UNK_150689648;
  local_194 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  local_254._0_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
  local_1a0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_198 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_23c._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_23c._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_248._0_8_ = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
  local_110 = param_2;
  local_108 = lVar4;
  UE::Geometry::GenerateCircleSegments<float>
            (*(int *)((longlong)this + 0x30),fVar12,(TVector<float> *)&local_23c._s_0,
             (TVector<float> *)&local_248._s_0,(TVector<float> *)&local_254._s_0,
             (TTransformSRT3<float> *)&local_1b0._s_0,
             (TFunctionRef<void___cdecl(UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&)>
              *)&local_1f8);
  local_e0 = *(undefined8 *)((longlong)this + 0x10);
  local_d8 = *(undefined8 *)((longlong)this + 0x18);
  local_c0 = *(undefined8 *)((longlong)this + 0x38);
  local_b8 = &local_98;
  local_b0 = *(undefined8 *)this;
  local_a8 = *(undefined8 *)((longlong)this + 0x28);
  local_1e0 = &local_e0;
  local_1e8 = UE::Core::Private::Function::
              TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l9::<lambda_3>::operator()'::__l2::<lambda_3>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
              ::Call;
  local_164 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_230._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  local_224._s_0.Z = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  local_188._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_188._8_8_ = _UNK_150689648;
  local_16c = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  local_230._0_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
  local_170 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_218._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_178 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_224._0_8_ = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
  local_218._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_d0 = param_2;
  local_c8 = lVar4;
  UE::Geometry::GenerateCircleSegments<float>
            (*(int *)((longlong)this + 0x30),fVar12,(TVector<float> *)&local_218._s_0,
             (TVector<float> *)&local_224._s_0,(TVector<float> *)&local_230._s_0,
             (TTransformSRT3<float> *)&local_188._s_0,
             (TFunctionRef<void___cdecl(UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&)>
              *)&local_1e8);
  return;
}

// operator() @ 14cadb6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UCollisionPrimitivesMechanic::RebuildDrawables'::__l14::<lambda_4>::operator()
          (void *this,int param_1,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_2)

{
  double *pdVar1;
  float fVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  TQuat<double> *pTVar12;
  longlong lVar13;
  double dVar14;
  undefined1 auStackY_1f8 [32];
  TVector<float>_u_0 local_1b8;
  TVector<float>_u_0 local_1a8;
  code *local_198;
  undefined8 *local_190;
  TQuaternion<float>_u_0 local_188;
  undefined8 local_178;
  float local_170;
  undefined8 local_16c;
  float local_164;
  undefined8 local_160;
  undefined8 local_158;
  TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *local_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 local_128;
  TVector<float> local_120;
  TVector<float> local_114;
  TVector<float> local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  TQuat<double> local_d8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar4 = *(uint *)((longlong)this + 0x40);
  lVar5 = *(longlong *)((longlong)this + 0x20);
  uVar11 = 0;
  if ((int)uVar4 < *(int *)(lVar5 + 0x18)) {
    uVar11 = ~uVar4 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar5 = *(longlong *)(lVar5 + 0x10);
  lVar13 = (longlong)(int)uVar4 * 0x70;
  pTVar12 = UE::Math::TRotator<double>::Quaternion
                      ((TRotator<double> *)(lVar5 + 0x48 + lVar13),&local_d8);
  lVar6 = *(longlong *)this;
  local_f8 = pTVar12->X;
  dStack_f0 = pTVar12->Y;
  local_e8 = pTVar12->Z;
  dStack_e0 = pTVar12->W;
  local_88 = *(double *)(lVar13 + 0x40 + lVar5);
  pdVar1 = (double *)(lVar13 + 0x30 + lVar5);
  local_98 = *pdVar1;
  dStack_90 = pdVar1[1];
  local_68 = ___xmm_00000000000000003ff0000000000000;
  uStack_60 = _UNK_150689518;
  dStack_80 = 0.0;
  local_78 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_70 = _UNK_150689688;
  local_b8 = local_f8;
  dStack_b0 = dStack_f0;
  local_a8 = local_e8;
  dStack_a0 = dStack_e0;
  if (*(longlong *)(lVar6 + 0x98) == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0x98);
  local_88 = *(double *)(lVar6 + 0x28) * local_88;
  dStack_80 = dStack_80 * 0.0;
  local_98 = local_98 * *(double *)(lVar6 + 0x18);
  dStack_90 = dStack_90 * *(double *)(lVar6 + 0x20);
  if (*(char *)((longlong)this + 8) != '\0') {
    lVar6 = *(longlong *)((longlong)this + 0x18);
    *(double *)(lVar6 + 0x20) = local_b8;
    *(double *)(lVar6 + 0x28) = dStack_b0;
    *(double *)(lVar6 + 0x30) = local_a8;
    *(double *)(lVar6 + 0x38) = dStack_a0;
    *(double *)(lVar6 + 0x40) = local_98;
    *(double *)(lVar6 + 0x48) = dStack_90;
    *(double *)(lVar6 + 0x50) = local_88;
    *(double *)(lVar6 + 0x58) = dStack_80;
    *(undefined8 *)(lVar6 + 0x60) = local_78;
    *(undefined8 *)(lVar6 + 0x68) = uStack_70;
    *(undefined8 *)(lVar6 + 0x70) = local_68;
    *(undefined8 *)(lVar6 + 0x78) = uStack_60;
  }
  lVar6 = *(longlong *)this;
  if (*(longlong *)(lVar6 + 0x98) == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  dVar9 = __real_3fe0000000000000;
  lVar7 = *(longlong *)this;
  dVar14 = (double)*(float *)(lVar13 + 0x68 + lVar5) *
           *(double *)(*(longlong *)(lVar6 + 0x98) + 0x28) * __real_3fe0000000000000;
  if (*(longlong *)(lVar7 + 0x98) == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  fVar2 = *(float *)(lVar13 + 100 + lVar5);
  lVar6 = *(longlong *)this;
  dVar3 = *(double *)(*(longlong *)(lVar7 + 0x98) + 0x20);
  if (*(longlong *)(lVar6 + 0x98) == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_170 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_1a8._s_0.Z = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_160 = *(undefined8 *)((longlong)this + 0x10);
  local_158 = *(undefined8 *)((longlong)this + 0x18);
  local_148 = (longlong)this + 0x34;
  local_140 = *(undefined8 *)((longlong)this + 0x38);
  local_138 = &local_b8;
  local_130 = *(undefined8 *)this;
  local_128 = *(undefined8 *)((longlong)this + 0x28);
  local_190 = &local_160;
  local_198 = UE::Core::Private::Function::
              TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l14::<lambda_4>::operator()'::__l2::<lambda_1>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
              ::Call;
  local_164 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_1b8._s_0.X =
       (float)((double)*(float *)(lVar13 + 0x60 + lVar5) *
               *(double *)(*(longlong *)(lVar6 + 0x98) + 0x18) * dVar9);
  local_188._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_188._8_8_ = _UNK_150689648;
  local_178 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_16c = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  local_1a8._0_8_ = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_1b8._s_0.Y = (float)((double)fVar2 * dVar3 * dVar9);
  local_1b8._s_0.Z = (float)dVar14;
  local_150 = param_2;
  UE::Geometry::GenerateBoxSegments<float>
            ((TVector<float> *)&local_1b8._s_0,(TVector<float> *)&local_1a8._s_0,&local_108,
             &local_114,&local_120,(TTransformSRT3<float> *)&local_188._s_0,
             (TFunctionRef<void___cdecl(UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&)>
              *)&local_198);
  return;
}

// operator() @ 14cade230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UCollisionPrimitivesMechanic::RebuildDrawables'::__l19::<lambda_5>::operator()
          (void *this,int param_1,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  TQuat<double> *pTVar9;
  undefined8 uVar10;
  longlong *plVar11;
  FKSphylElem *this_00;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStackY_668 [32];
  undefined4 local_610 [2];
  int local_608;
  undefined4 local_600 [2];
  TVector<float>_u_0 local_5f8;
  TVector<float>_u_0 local_5e8;
  TVector<float>_u_0 local_5d8;
  TVector<float>_u_0 local_5cc;
  TVector<float>_u_0 local_5c0;
  TVector<float>_u_0 local_5b4;
  TVector<float>_u_0 local_5a8;
  TVector<float>_u_0 local_59c;
  TVector<float>_u_0 local_590;
  TVector<float>_u_0 local_584;
  TVector<float>_u_0 local_578;
  TVector<float>_u_0 local_56c;
  TVector<float>_u_0 local_560;
  TVector<float>_u_0 local_554;
  code *local_548;
  undefined8 *local_540;
  code *local_538;
  undefined8 *local_530;
  code *local_528;
  undefined8 *local_520;
  code *local_518;
  undefined8 *local_510;
  code *local_508;
  undefined8 *local_500;
  code *local_4f8;
  undefined8 *local_4f0;
  double local_4e8;
  undefined8 local_4e0;
  double local_4d8;
  double local_4d0;
  undefined8 local_4c8;
  double local_4c0;
  undefined8 local_4b8;
  double local_4b0;
  double local_4a8;
  undefined8 local_4a0;
  double local_498;
  double local_490;
  TQuaternion<float>_u_0 local_488;
  undefined8 local_478;
  float local_470;
  undefined8 local_46c;
  float local_464;
  TQuaternion<float>_u_0 local_460;
  undefined8 local_450;
  float local_448;
  undefined8 local_444;
  float local_43c;
  TQuaternion<float>_u_0 local_438;
  undefined8 local_428;
  float local_420;
  undefined8 local_41c;
  float local_414;
  TQuaternion<float>_u_0 local_410;
  undefined8 local_400;
  float local_3f8;
  undefined8 local_3f4;
  float local_3ec;
  TQuaternion<float>_u_0 local_3e8;
  undefined8 local_3d8;
  float local_3d0;
  undefined8 local_3cc;
  float local_3c4;
  TQuaternion<float>_u_0 local_3c0;
  undefined8 local_3b0;
  float local_3a8;
  undefined8 local_3a4;
  float local_39c;
  undefined8 local_398;
  undefined8 local_390;
  TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *local_388;
  longlong local_380;
  undefined8 local_378;
  TTransform<double> *local_370;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *local_348;
  longlong local_340;
  undefined8 local_338;
  TTransform<double> *local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *local_308;
  longlong local_300;
  undefined8 local_2f8;
  TTransform<double> *local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  TTransform<double> *local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *local_288;
  longlong local_280;
  undefined8 local_278;
  TTransform<double> *local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *local_248;
  longlong local_240;
  undefined8 local_238;
  TTransform<double> *local_230;
  undefined8 local_228;
  undefined8 local_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  TQuat<double> local_1f8;
  TTransform<double> local_1d8;
  TTransform<double> local_178;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_668;
  uVar1 = *(uint *)((longlong)this + 0x40);
  lVar2 = *(longlong *)((longlong)this + 0x20);
  iVar12 = 0;
  uVar8 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x28)) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this_00 = (FKSphylElem *)((longlong)(int)uVar1 * 0x68 + *(longlong *)(lVar2 + 0x20));
  pTVar9 = UE::Math::TRotator<double>::Quaternion(&this_00->Rotation,&local_1f8);
  lVar2 = *(longlong *)this;
  local_218 = pTVar9->X;
  dStack_210 = pTVar9->Y;
  local_208 = pTVar9->Z;
  dStack_200 = pTVar9->W;
  local_1d8.Translation.XY.m128d_f64[0] = (this_00->Center).field0_0x0._s_0.X;
  local_1d8.Translation.XY.m128d_f64[1] = (this_00->Center).field0_0x0._s_0.Y;
  local_1d8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_1d8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_1d8.Translation.ZW.m128d_f64[1] = 0.0;
  local_1d8.Translation.ZW.m128d_f64[0] = (this_00->Center).field0_0x0._s_0.Z;
  local_1d8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_1d8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_1d8.Rotation.XY.m128d_f64[0] = local_218;
  local_1d8.Rotation.XY.m128d_f64[1] = dStack_210;
  local_1d8.Rotation.ZW.m128d_f64[0] = local_208;
  local_1d8.Rotation.ZW.m128d_f64[1] = dStack_200;
  if ((*(longlong *)(lVar2 + 0x98) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar2 = *(longlong *)(lVar2 + 0x98);
  local_1d8.Translation.ZW.m128d_f64[0] =
       *(double *)(lVar2 + 0x28) * local_1d8.Translation.ZW.m128d_f64[0];
  dVar6 = local_1d8.Translation.ZW.m128d_f64[1] * 0.0;
  local_1d8.Translation.XY.m128d_f64[0] =
       local_1d8.Translation.XY.m128d_f64[0] * *(double *)(lVar2 + 0x18);
  local_1d8.Translation.XY.m128d_f64[1] =
       local_1d8.Translation.XY.m128d_f64[1] * *(double *)(lVar2 + 0x20);
  local_1d8.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar6,0);
  local_1d8.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
  if (*(char *)((longlong)this + 8) != '\0') {
    lVar2 = *(longlong *)((longlong)this + 0x18);
    *(double *)(lVar2 + 0x20) = local_1d8.Rotation.XY.m128d_f64[0];
    *(double *)(lVar2 + 0x28) = local_1d8.Rotation.XY.m128d_f64[1];
    *(double *)(lVar2 + 0x30) = local_1d8.Rotation.ZW.m128d_f64[0];
    *(double *)(lVar2 + 0x38) = local_1d8.Rotation.ZW.m128d_f64[1];
    *(double *)(lVar2 + 0x40) = local_1d8.Translation.XY.m128d_f64[0];
    *(double *)(lVar2 + 0x48) = local_1d8.Translation.XY.m128d_f64[1];
    *(double *)(lVar2 + 0x50) = local_1d8.Translation.ZW.m128d_f64[0];
    *(double *)(lVar2 + 0x58) = local_1d8.Translation.ZW.m128d_f64[1];
    *(double *)(lVar2 + 0x60) = local_1d8.Scale3D.XY.m128d_f64[0];
    *(double *)(lVar2 + 0x68) = local_1d8.Scale3D.XY.m128d_f64[1];
    *(double *)(lVar2 + 0x70) = local_1d8.Scale3D.ZW.m128d_f64[0];
    *(double *)(lVar2 + 0x78) = local_1d8.Scale3D.ZW.m128d_f64[1];
  }
  lVar2 = *(longlong *)this;
  if ((*(longlong *)(lVar2 + 0x98) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar13 = FKSphylElem::GetScaledCylinderLength
                     (this_00,(TVector<double> *)(*(longlong *)(lVar2 + 0x98) + 0x18));
  lVar2 = *(longlong *)this;
  fVar13 = fVar13 * __real_3f000000;
  if ((*(longlong *)(lVar2 + 0x98) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  fVar14 = FKSphylElem::GetScaledRadius
                     (this_00,(TVector<double> *)(*(longlong *)(lVar2 + 0x98) + 0x18));
  uVar10 = _UNK_150689648;
  uVar4 = ___xmm_3f800000000000000000000000000000;
  local_398 = *(undefined8 *)((longlong)this + 0x10);
  lVar2 = (longlong)this + 0x34;
  local_390 = *(undefined8 *)((longlong)this + 0x18);
  fVar16 = (float)((uint)fVar13 ^ __xmm_80000000800000008000000080000000);
  local_378 = *(undefined8 *)((longlong)this + 0x38);
  local_370 = &local_1d8;
  local_368 = *(undefined8 *)this;
  local_360 = *(undefined8 *)((longlong)this + 0x28);
  local_540 = &local_398;
  local_548 = UE::Core::Private::Function::
              TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l19::<lambda_5>::operator()'::__l2::<lambda_1>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
              ::Call;
  local_470 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_464 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_5d8._s_0.Z = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  local_5cc._s_0.Z = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  local_478 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_46c = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  local_5d8._0_8_ = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
  local_5f8._0_8_ = 0;
  local_5e8._0_8_ = 0;
  local_488._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_488._8_8_ = _UNK_150689648;
  local_5cc._0_8_ = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
  local_5f8._s_0.Z = fVar13;
  local_5e8._s_0.Z = fVar16;
  local_388 = param_2;
  local_380 = lVar2;
  UE::Geometry::GenerateCircleSegments<float>
            (*(int *)((longlong)this + 0x30),fVar14,(TVector<float> *)&local_5f8._s_0,
             (TVector<float> *)&local_5cc._s_0,(TVector<float> *)&local_5d8._s_0,
             (TTransformSRT3<float> *)&local_488._s_0,
             (TFunctionRef<void___cdecl(UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&)>
              *)&local_548);
  local_358 = *(undefined8 *)((longlong)this + 0x10);
  local_350 = *(undefined8 *)((longlong)this + 0x18);
  local_338 = *(undefined8 *)((longlong)this + 0x38);
  local_330 = &local_1d8;
  local_328 = *(undefined8 *)this;
  local_320 = *(undefined8 *)((longlong)this + 0x28);
  local_530 = &local_358;
  local_538 = UE::Core::Private::Function::
              TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l19::<lambda_5>::operator()'::__l2::<lambda_2>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
              ::Call;
  local_460._0_8_ = uVar4;
  local_460._8_8_ = uVar10;
  local_450 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_448 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_43c = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_5c0._s_0.Z = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  local_5b4._s_0.Z = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  local_444 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  local_5c0._0_8_ = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
  local_5b4._0_8_ = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
  local_348 = param_2;
  local_340 = lVar2;
  UE::Geometry::GenerateCircleSegments<float>
            (*(int *)((longlong)this + 0x30),fVar14,(TVector<float> *)&local_5e8._s_0,
             (TVector<float> *)&local_5b4._s_0,(TVector<float> *)&local_5c0._s_0,
             (TTransformSRT3<float> *)&local_460._s_0,
             (TFunctionRef<void___cdecl(UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&)>
              *)&local_538);
  fVar15 = __real_40490fdb;
  local_318 = *(undefined8 *)((longlong)this + 0x10);
  local_310 = *(undefined8 *)((longlong)this + 0x18);
  local_2f8 = *(undefined8 *)((longlong)this + 0x38);
  local_2f0 = &local_1d8;
  local_2e8 = *(undefined8 *)this;
  local_2e0 = *(undefined8 *)((longlong)this + 0x28);
  local_520 = &local_318;
  local_528 = UE::Core::Private::Function::
              TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l19::<lambda_5>::operator()'::__l2::<lambda_3>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
              ::Call;
  local_420 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_414 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_5a8._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  local_59c._s_0.Z = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  local_428 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_41c = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  local_5a8._0_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
  local_438._0_8_ = uVar4;
  local_438._8_8_ = uVar10;
  local_59c._0_8_ = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
  local_308 = param_2;
  local_300 = lVar2;
  UE::Geometry::GenerateArcSegments<float>
            (*(int *)((longlong)this + 0x30),fVar14,0.0,__real_40490fdb,
             (TVector<float> *)&local_5f8._s_0,(TVector<float> *)&local_59c._s_0,
             (TVector<float> *)&local_5a8._s_0,(TTransformSRT3<float> *)&local_438._s_0,
             (TFunctionRef<void___cdecl(UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&)>
              *)&local_528);
  local_2d8 = *(undefined8 *)((longlong)this + 0x10);
  local_2d0 = *(undefined8 *)((longlong)this + 0x18);
  local_2b8 = *(undefined8 *)((longlong)this + 0x38);
  local_2b0 = &local_1d8;
  local_2a8 = *(undefined8 *)this;
  local_2a0 = *(undefined8 *)((longlong)this + 0x28);
  local_510 = &local_2d8;
  local_518 = UE::Core::Private::Function::
              TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l19::<lambda_5>::operator()'::__l2::<lambda_4>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
              ::Call;
  local_3f8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_3ec = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_590._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  local_584._s_0.Z = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  local_400 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_3f4 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  local_590._0_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
  local_410._0_8_ = uVar4;
  local_410._8_8_ = uVar10;
  local_584._0_8_ = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
  local_2c8 = param_2;
  local_2c0 = lVar2;
  UE::Geometry::GenerateArcSegments<float>
            (*(int *)((longlong)this + 0x30),fVar14,0.0,fVar15,(TVector<float> *)&local_5f8._s_0,
             (TVector<float> *)&local_584._s_0,(TVector<float> *)&local_590._s_0,
             (TTransformSRT3<float> *)&local_410._s_0,
             (TFunctionRef<void___cdecl(UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&)>
              *)&local_518);
  fVar15 = __real_c0490fdb;
  local_298 = *(undefined8 *)((longlong)this + 0x10);
  local_290 = *(undefined8 *)((longlong)this + 0x18);
  local_278 = *(undefined8 *)((longlong)this + 0x38);
  local_270 = &local_1d8;
  local_268 = *(undefined8 *)this;
  local_260 = *(undefined8 *)((longlong)this + 0x28);
  local_500 = &local_298;
  local_508 = UE::Core::Private::Function::
              TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l19::<lambda_5>::operator()'::__l2::<lambda_5>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
              ::Call;
  local_3d0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_3d8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_3c4 = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_3cc = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  local_578._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  local_56c._s_0.Z = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
  local_578._0_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
  local_3e8._0_8_ = uVar4;
  local_3e8._8_8_ = uVar10;
  local_56c._0_8_ = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
  local_288 = param_2;
  local_280 = lVar2;
  UE::Geometry::GenerateArcSegments<float>
            (*(int *)((longlong)this + 0x30),fVar14,0.0,__real_c0490fdb,
             (TVector<float> *)&local_5e8._s_0,(TVector<float> *)&local_56c._s_0,
             (TVector<float> *)&local_578._s_0,(TTransformSRT3<float> *)&local_3e8._s_0,
             (TFunctionRef<void___cdecl(UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&)>
              *)&local_508);
  local_258 = *(undefined8 *)((longlong)this + 0x10);
  local_250 = *(undefined8 *)((longlong)this + 0x18);
  local_238 = *(undefined8 *)((longlong)this + 0x38);
  local_230 = &local_1d8;
  local_228 = *(undefined8 *)this;
  local_220 = *(undefined8 *)((longlong)this + 0x28);
  local_4f0 = &local_258;
  local_4f8 = UE::Core::Private::Function::
              TFunctionRefCaller<``UCollisionPrimitivesMechanic::RebuildDrawables'::__l19::<lambda_5>::operator()'::__l2::<lambda_6>,void,UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&>
              ::Call;
  local_3a8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  local_39c = UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
  local_560._s_0.Z = UE::Math::TVector<float>::ZAxisVector.field0_0x0._s_0.Z;
  local_554._s_0.Z = UE::Math::TVector<float>::XAxisVector.field0_0x0._s_0.Z;
  local_3b0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  local_3a4 = UE::Math::TVector<float>::OneVector.field0_0x0._0_8_;
  local_560._0_8_ = UE::Math::TVector<float>::ZAxisVector.field0_0x0._0_8_;
  local_3c0._0_8_ = uVar4;
  local_3c0._8_8_ = uVar10;
  local_554._0_8_ = UE::Math::TVector<float>::XAxisVector.field0_0x0._0_8_;
  local_248 = param_2;
  local_240 = lVar2;
  UE::Geometry::GenerateArcSegments<float>
            (*(int *)((longlong)this + 0x30),fVar14,0.0,fVar15,(TVector<float> *)&local_5e8._s_0,
             (TVector<float> *)&local_554._s_0,(TVector<float> *)&local_560._s_0,
             (TTransformSRT3<float> *)&local_3c0._s_0,
             (TFunctionRef<void___cdecl(UE::Math::TVector<float>_const_&,UE::Math::TVector<float>_const_&)>
              *)&local_4f8);
  fVar15 = (float)((uint)fVar14 ^ __xmm_80000000800000008000000080000000);
  dVar6 = (double)fVar16;
  do {
    fVar16 = fVar14;
    if (iVar12 == 0) {
      fVar16 = fVar15;
    }
    puVar3 = *(undefined8 **)((longlong)this + 0x10);
    local_4e8 = (double)fVar16;
    local_4e0 = 0;
    local_178.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_178.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_178.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_178.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_178.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_178.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_178.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_178.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_178.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_178.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_178.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_178.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_4c8 = 0;
    local_4d8 = dVar6;
    local_4d0 = local_4e8;
    local_4c0 = (double)fVar13;
    UE::Math::TTransform<double>::Multiply
              (&local_178,&local_1d8,(TTransform<double> *)(*(longlong *)this + 0xc0));
    **(int **)((longlong)this + 0x38) = **(int **)((longlong)this + 0x38) + 1;
    local_610[0] = *(undefined4 *)((longlong)this + 0x34);
    uVar4 = *(undefined8 *)((longlong)this + 0x18);
    UE::Core::Private::Function::CheckCallable((void *)*puVar3);
    pcVar5 = (code *)*puVar3;
    plVar11 = (longlong *)puVar3[5];
    if ((longlong *)puVar3[5] == (longlong *)0x0) {
      plVar11 = puVar3 + 2;
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    (*pcVar5)(uVar10,uVar4,param_2,local_610);
    fVar16 = fVar14;
    if (iVar12 == 0) {
      fVar16 = fVar15;
    }
    puVar3 = *(undefined8 **)((longlong)this + 0x10);
    local_4b0 = (double)fVar16;
    local_4b8 = 0;
    local_118.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_118.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_118.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_118.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_118.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_118.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_118.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_118.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_118.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_118.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_118.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_118.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_4a0 = 0;
    local_4a8 = dVar6;
    local_498 = local_4b0;
    local_490 = (double)fVar13;
    UE::Math::TTransform<double>::Multiply
              (&local_118,&local_1d8,(TTransform<double> *)(*(longlong *)this + 0xc0));
    local_608 = **(int **)((longlong)this + 0x38);
    **(int **)((longlong)this + 0x38) = local_608 + 1;
    local_600[0] = *(undefined4 *)((longlong)this + 0x34);
    uVar4 = *(undefined8 *)((longlong)this + 0x18);
    UE::Core::Private::Function::CheckCallable((void *)*puVar3);
    pcVar5 = (code *)*puVar3;
    plVar11 = (longlong *)puVar3[5];
    if ((longlong *)puVar3[5] == (longlong *)0x0) {
      plVar11 = puVar3 + 2;
    }
    uVar10 = (**(code **)(*plVar11 + 8))();
    (*pcVar5)(uVar10,uVar4,param_2,local_600);
    iVar12 = iVar12 + 1;
  } while (iVar12 < 2);
  return;
}

// operator() @ 14cadf040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UCollisionPrimitivesMechanic::RebuildDrawables'::__l24::<lambda_6>::operator()
          (void *this,int param_1,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint uVar22;
  longlong *plVar23;
  int iVar24;
  int *piVar25;
  longlong lVar26;
  uint uVar27;
  undefined1 auStack_358 [32];
  int *local_338;
  TTransform<double> *local_330;
  undefined8 *local_328;
  undefined8 *local_320;
  longlong local_318;
  int local_308 [2];
  undefined4 local_300 [2];
  int local_2f8 [2];
  undefined4 local_2f0 [2];
  int local_2e8 [2];
  undefined4 local_2e0 [2];
  longlong *local_2d8;
  TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *local_2d0;
  longlong local_2c8;
  longlong local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_358;
  uVar27 = *(uint *)((longlong)this + 0x40);
  lVar4 = *(longlong *)((longlong)this + 0x20);
  iVar24 = *(int *)(lVar4 + 0x38);
  uVar22 = 0;
  if ((int)uVar27 < iVar24) {
    uVar22 = ~uVar27 >> 0x1f;
  }
  local_2d8 = this;
  local_2d0 = param_2;
  if ((uVar22 == 0) &&
     (local_338 = (int *)(longlong)(int)uVar27, local_330 = (TTransform<double> *)(longlong)iVar24,
     bVar17 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar4 = *(longlong *)(lVar4 + 0x30);
  lVar5 = *(longlong *)this;
  lVar26 = (longlong)(int)uVar27 * 0x100;
  pdVar2 = (double *)(lVar26 + 0x90 + lVar4);
  local_228.Rotation.XY.m128d_f64[0] = *pdVar2;
  local_228.Rotation.XY.m128d_f64[1] = pdVar2[1];
  pdVar2 = (double *)(lVar26 + 0xa0 + lVar4);
  local_228.Rotation.ZW.m128d_f64[0] = *pdVar2;
  local_228.Rotation.ZW.m128d_f64[1] = pdVar2[1];
  pdVar2 = (double *)(lVar26 + 0xb0 + lVar4);
  local_228.Translation.XY.m128d_f64[0] = *pdVar2;
  local_228.Translation.XY.m128d_f64[1] = pdVar2[1];
  pdVar2 = (double *)(lVar26 + 0xc0 + lVar4);
  local_228.Translation.ZW.m128d_f64[0] = *pdVar2;
  local_228.Translation.ZW.m128d_f64[1] = pdVar2[1];
  local_228.Scale3D.XY.m128d_f64 = *(double (*) [2])(lVar26 + 0xd0 + lVar4);
  local_228.Scale3D.ZW.m128d_f64 = *(double (*) [2])(lVar26 + 0xe0 + lVar4);
  if ((*(longlong *)(lVar5 + 0x98) == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar5 = *(longlong *)(lVar5 + 0x98);
  lVar6 = *(longlong *)this;
  dVar10 = local_228.Translation.ZW.m128d_f64[1] * 0.0;
  dVar9 = local_228.Translation.XY.m128d_f64[1] * *(double *)(lVar5 + 0x20);
  local_228.Translation.ZW.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
  local_228.Translation.ZW.m128d_f64[0] =
       *(double *)(lVar5 + 0x28) * local_228.Translation.ZW.m128d_f64[0];
  local_228.Translation.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
  local_228.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
  local_228.Translation.XY.m128d_f64[0] =
       local_228.Translation.XY.m128d_f64[0] * *(double *)(lVar5 + 0x18);
  local_228.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
  if ((*(longlong *)(lVar6 + 0x98) == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar5 = *(longlong *)(lVar6 + 0x98);
  local_228.Scale3D.ZW.m128d_f64[0] = *(double *)(lVar5 + 0x28) * local_228.Scale3D.ZW.m128d_f64[0];
  dVar10 = local_228.Scale3D.ZW.m128d_f64[1] * 0.0;
  local_228.Scale3D.XY.m128d_f64[0] = local_228.Scale3D.XY.m128d_f64[0] * *(double *)(lVar5 + 0x18);
  dVar9 = local_228.Scale3D.XY.m128d_f64[1] * *(double *)(lVar5 + 0x20);
  local_228.Scale3D.ZW.m128d_f64[1]._0_4_ = SUB84(dVar10,0);
  local_228.Scale3D.ZW.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar10 >> 0x20);
  local_228.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84(dVar9,0);
  local_228.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
  if (*(char *)((longlong)this + 8) != '\0') {
    lVar5 = *(longlong *)((longlong)this + 0x18);
    *(double *)(lVar5 + 0x20) = local_228.Rotation.XY.m128d_f64[0];
    *(double *)(lVar5 + 0x28) = local_228.Rotation.XY.m128d_f64[1];
    *(double *)(lVar5 + 0x30) = local_228.Rotation.ZW.m128d_f64[0];
    *(double *)(lVar5 + 0x38) = local_228.Rotation.ZW.m128d_f64[1];
    *(double *)(lVar5 + 0x40) = local_228.Translation.XY.m128d_f64[0];
    *(double *)(lVar5 + 0x48) = local_228.Translation.XY.m128d_f64[1];
    *(double *)(lVar5 + 0x50) = local_228.Translation.ZW.m128d_f64[0];
    *(double *)(lVar5 + 0x58) = local_228.Translation.ZW.m128d_f64[1];
    *(double *)(lVar5 + 0x60) = local_228.Scale3D.XY.m128d_f64[0];
    *(double *)(lVar5 + 0x68) = local_228.Scale3D.XY.m128d_f64[1];
    *(double *)(lVar5 + 0x70) = local_228.Scale3D.ZW.m128d_f64[0];
    *(double *)(lVar5 + 0x78) = local_228.Scale3D.ZW.m128d_f64[1];
  }
  iVar24 = *(int *)(lVar26 + 0x48 + lVar4);
  iVar24 = iVar24 / 3 + (iVar24 >> 0x1f) +
           (int)(((longlong)iVar24 / 3 + ((longlong)iVar24 >> 0x3f) & 0xffffffffU) >> 0x1f);
  local_2c0 = (longlong)iVar24;
  if (0 < iVar24) {
    uVar27 = 2;
    local_2c8 = 0;
    do {
      lVar5 = local_2c8;
      iVar24 = *(int *)(lVar26 + 0x48 + lVar4);
      uVar22 = 0;
      if ((int)(uVar27 - 2) < iVar24) {
        uVar22 = ~(uVar27 - 2) >> 0x1f;
      }
      if (uVar22 == 0) {
        local_338 = (int *)(longlong)(int)(uVar27 - 2);
        local_330 = (TTransform<double> *)(longlong)iVar24;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar24 = *(int *)(lVar26 + 0x38 + lVar4);
      uVar22 = *(uint *)(lVar5 + *(longlong *)(lVar26 + 0x40 + lVar4));
      piVar25 = (int *)(longlong)(int)uVar22;
      uVar18 = 0;
      if ((int)uVar22 < iVar24) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (local_338 = piVar25, local_330 = (TTransform<double> *)(longlong)iVar24,
         bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = *(longlong *)(lVar26 + 0x30 + lVar4);
      iVar24 = *(int *)(lVar26 + 0x48 + lVar4);
      puVar1 = (undefined8 *)(lVar6 + (longlong)piVar25 * 0x18);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      uVar21 = *(undefined8 *)(lVar6 + 0x10 + (longlong)piVar25 * 0x18);
      uVar22 = 0;
      if ((int)(uVar27 - 1) < iVar24) {
        uVar22 = ~(uVar27 - 1) >> 0x1f;
      }
      if (uVar22 == 0) {
        local_338 = (int *)(longlong)(int)(uVar27 - 1);
        local_330 = (TTransform<double> *)(longlong)iVar24;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar24 = *(int *)(lVar26 + 0x38 + lVar4);
      uVar22 = *(uint *)(lVar5 + 4 + *(longlong *)(lVar26 + 0x40 + lVar4));
      piVar25 = (int *)(longlong)(int)uVar22;
      uVar18 = 0;
      if ((int)uVar22 < iVar24) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (local_338 = piVar25, local_330 = (TTransform<double> *)(longlong)iVar24,
         bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar6 = *(longlong *)(lVar26 + 0x30 + lVar4);
      iVar24 = *(int *)(lVar26 + 0x48 + lVar4);
      puVar1 = (undefined8 *)(lVar6 + (longlong)piVar25 * 0x18);
      uVar13 = *puVar1;
      uVar14 = puVar1[1];
      uVar20 = *(undefined8 *)(lVar6 + 0x10 + (longlong)piVar25 * 0x18);
      uVar22 = 0;
      if ((int)uVar27 < iVar24) {
        uVar22 = ~uVar27 >> 0x1f;
      }
      if (uVar22 == 0) {
        local_338 = (int *)(longlong)(int)uVar27;
        local_330 = (TTransform<double> *)(longlong)iVar24;
        bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar17) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar24 = *(int *)(lVar26 + 0x38 + lVar4);
      uVar22 = *(uint *)(lVar5 + 8 + *(longlong *)(lVar26 + 0x40 + lVar4));
      piVar25 = (int *)(longlong)(int)uVar22;
      uVar18 = 0;
      if ((int)uVar22 < iVar24) {
        uVar18 = ~uVar22 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (local_338 = piVar25, local_330 = (TTransform<double> *)(longlong)iVar24,
         bVar17 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      plVar23 = local_2d8;
      lVar5 = *(longlong *)(lVar26 + 0x30 + lVar4);
      puVar7 = (undefined8 *)local_2d8[2];
      lVar6 = local_2d8[5];
      puVar1 = (undefined8 *)(lVar5 + (longlong)piVar25 * 0x18);
      uVar15 = *puVar1;
      uVar16 = puVar1[1];
      uVar3 = *(undefined8 *)(lVar5 + 0x10 + (longlong)piVar25 * 0x18);
      local_1c8.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1c8.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_1c8.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1c8.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_1c8.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_1c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1c8.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_1c8.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_1c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1c8.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_1c8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1c8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_1c8.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1c8.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_2b8 = uVar13;
      uStack_2b0 = uVar14;
      local_2a8 = uVar20;
      local_2a0 = uVar11;
      uStack_298 = uVar12;
      local_290 = uVar21;
      UE::Math::TTransform<double>::Multiply
                (&local_1c8,&local_228,(TTransform<double> *)(*local_2d8 + 0xc0));
      local_308[0] = *(int *)plVar23[7];
      *(int *)plVar23[7] = local_308[0] + 1;
      local_300[0] = *(undefined4 *)((longlong)plVar23 + 0x34);
      lVar5 = plVar23[3];
      UE::Core::Private::Function::CheckCallable((void *)*puVar7);
      pcVar8 = (code *)*puVar7;
      plVar23 = (longlong *)puVar7[5];
      if ((longlong *)puVar7[5] == (longlong *)0x0) {
        plVar23 = puVar7 + 2;
      }
      uVar19 = (**(code **)(*plVar23 + 8))();
      local_320 = &local_2b8;
      local_328 = &local_2a0;
      local_330 = &local_1c8;
      local_338 = local_308;
      local_318 = lVar6;
      (*pcVar8)(uVar19,lVar5,local_2d0,local_300);
      plVar23 = local_2d8;
      puVar1 = (undefined8 *)local_2d8[2];
      lVar5 = local_2d8[5];
      local_168.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_168.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_168.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_168.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_168.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_168.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_168.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_168.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_168.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_168.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_168.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_168.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_168.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_168.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_288 = uVar15;
      uStack_280 = uVar16;
      local_278 = uVar3;
      local_270 = uVar13;
      uStack_268 = uVar14;
      local_260 = uVar20;
      UE::Math::TTransform<double>::Multiply
                (&local_168,&local_228,(TTransform<double> *)(*local_2d8 + 0xc0));
      local_2f8[0] = *(int *)plVar23[7];
      *(int *)plVar23[7] = local_2f8[0] + 1;
      local_2f0[0] = *(undefined4 *)((longlong)plVar23 + 0x34);
      lVar6 = plVar23[3];
      UE::Core::Private::Function::CheckCallable((void *)*puVar1);
      pcVar8 = (code *)*puVar1;
      plVar23 = (longlong *)puVar1[5];
      if ((longlong *)puVar1[5] == (longlong *)0x0) {
        plVar23 = puVar1 + 2;
      }
      uVar20 = (**(code **)(*plVar23 + 8))();
      local_320 = &local_288;
      local_328 = &local_270;
      local_330 = &local_168;
      local_338 = local_2f8;
      local_318 = lVar5;
      (*pcVar8)(uVar20,lVar6,local_2d0,local_2f0);
      plVar23 = local_2d8;
      puVar1 = (undefined8 *)local_2d8[2];
      lVar5 = local_2d8[5];
      local_108.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_108.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_108.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_108.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_108.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_108.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_108.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_108.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_108.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_108.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_108.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_108.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      local_108.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_108.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_258 = uVar11;
      uStack_250 = uVar12;
      local_248 = uVar21;
      local_240 = uVar15;
      uStack_238 = uVar16;
      local_230 = uVar3;
      UE::Math::TTransform<double>::Multiply
                (&local_108,&local_228,(TTransform<double> *)(*local_2d8 + 0xc0));
      local_2e8[0] = *(int *)plVar23[7];
      *(int *)plVar23[7] = local_2e8[0] + 1;
      local_2e0[0] = *(undefined4 *)((longlong)plVar23 + 0x34);
      lVar6 = plVar23[3];
      UE::Core::Private::Function::CheckCallable((void *)*puVar1);
      pcVar8 = (code *)*puVar1;
      plVar23 = (longlong *)puVar1[5];
      if ((longlong *)puVar1[5] == (longlong *)0x0) {
        plVar23 = puVar1 + 2;
      }
      uVar21 = (**(code **)(*plVar23 + 8))();
      local_328 = &local_240;
      local_330 = &local_108;
      local_338 = local_2e8;
      local_320 = &local_258;
      local_318 = lVar5;
      (*pcVar8)(uVar21,lVar6,local_2d0,local_2e0);
      uVar27 = uVar27 + 3;
      local_2c8 = local_2c8 + 0xc;
      local_2c0 = local_2c0 + -1;
    } while (local_2c0 != 0);
  }
  return;
}

// operator() @ 14cadf940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UCollisionPrimitivesMechanic::RebuildDrawables'::__l29::<lambda_7>::operator()
          (void *this,int param_1,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  bool bVar13;
  uint uVar14;
  ulonglong uVar15;
  FScriptContainerElement *pFVar16;
  FKLevelSetElem *this_00;
  FScriptContainerElement *pFVar17;
  undefined1 auStackY_2d8 [32];
  undefined1 local_298 [8];
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> local_290;
  TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *local_280;
  undefined8 local_278;
  undefined8 local_270;
  code *local_268;
  undefined8 *local_260;
  TVector<double>_u_0 local_258;
  TVector<double>_u_0 local_240;
  undefined8 local_228;
  undefined8 local_220;
  TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *local_218;
  longlong local_210;
  undefined8 local_208;
  double *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *local_1d8;
  longlong local_1d0;
  undefined8 local_1c8;
  double *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  TQuaternion<double>_u_0 local_1a8;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  TVector<double> local_158;
  TVector<double> local_140;
  TVector<double> local_128;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  TBox<double> local_a8;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  lVar3 = *(longlong *)((longlong)this + 0x20);
  uVar2 = *(uint *)((longlong)this + 0x40);
  uVar14 = 0;
  if ((int)uVar2 < *(int *)(lVar3 + 0x58)) {
    uVar14 = ~uVar2 >> 0x1f;
  }
  local_280 = param_2;
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  this_00 = (FKLevelSetElem *)((longlong)(int)uVar2 * 0xa0 + *(longlong *)(lVar3 + 0x50));
  lVar3 = *(longlong *)this;
  local_108 = (this_00->Transform).Rotation.XY.m128d_f64[0];
  dStack_100 = (this_00->Transform).Rotation.XY.m128d_f64[1];
  local_f8 = (this_00->Transform).Rotation.ZW.m128d_f64[0];
  dStack_f0 = (this_00->Transform).Rotation.ZW.m128d_f64[1];
  local_e8._0_8_ = (this_00->Transform).Translation.XY.m128d_f64[0];
  local_e8._8_8_ = (this_00->Transform).Translation.XY.m128d_f64[1];
  local_d8 = (this_00->Transform).Translation.ZW.m128d_f64[0];
  dStack_d0 = (this_00->Transform).Translation.ZW.m128d_f64[1];
  local_c8 = *(undefined1 (*) [16])(this_00->Transform).Scale3D.XY.m128d_f64;
  local_b8 = (this_00->Transform).Scale3D.ZW.m128d_f64[0];
  dStack_b0 = (this_00->Transform).Scale3D.ZW.m128d_f64[1];
  if (*(longlong *)(lVar3 + 0x98) == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x98);
  lVar4 = *(longlong *)this;
  local_d8 = *(double *)(lVar3 + 0x28) * local_d8;
  dStack_d0 = dStack_d0 * 0.0;
  dVar9 = (double)local_e8._8_8_ * *(double *)(lVar3 + 0x20);
  local_e8._8_4_ = SUB84(dVar9,0);
  local_e8._0_8_ = (double)local_e8._0_8_ * *(double *)(lVar3 + 0x18);
  local_e8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  if (*(longlong *)(lVar4 + 0x98) == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar3 = *(longlong *)(lVar4 + 0x98);
  local_b8 = *(double *)(lVar3 + 0x28) * local_b8;
  dStack_b0 = dStack_b0 * 0.0;
  dVar9 = (double)local_c8._0_8_ * *(double *)(lVar3 + 0x18);
  dVar10 = (double)local_c8._8_8_ * *(double *)(lVar3 + 0x20);
  local_c8._8_4_ = SUB84(dVar10,0);
  local_c8._0_8_ = dVar9;
  local_c8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  if (*(char *)((longlong)this + 8) != '\0') {
    lVar3 = *(longlong *)((longlong)this + 0x18);
    *(double *)(lVar3 + 0x20) = local_108;
    *(double *)(lVar3 + 0x28) = dStack_100;
    *(double *)(lVar3 + 0x30) = local_f8;
    *(double *)(lVar3 + 0x38) = dStack_f0;
    *(undefined8 *)(lVar3 + 0x40) = local_e8._0_8_;
    *(undefined8 *)(lVar3 + 0x48) = local_e8._8_8_;
    *(double *)(lVar3 + 0x50) = local_d8;
    *(double *)(lVar3 + 0x58) = dStack_d0;
    *(double *)(lVar3 + 0x60) = dVar9;
    *(undefined8 *)(lVar3 + 0x68) = local_c8._8_8_;
    *(double *)(lVar3 + 0x70) = local_b8;
    *(double *)(lVar3 + 0x78) = dStack_b0;
  }
  uVar5 = *(undefined8 *)((longlong)this + 0x10);
  local_200 = &local_108;
  uVar6 = *(undefined8 *)((longlong)this + 0x18);
  uVar7 = *(undefined8 *)((longlong)this + 0x38);
  local_278 = *(undefined8 *)this;
  local_270 = *(undefined8 *)((longlong)this + 0x28);
  local_228 = uVar5;
  local_220 = uVar6;
  local_218 = param_2;
  local_210 = (longlong)this + 0x34;
  local_208 = uVar7;
  local_1f8 = local_278;
  local_1f0 = local_270;
  FKLevelSetElem::UntransformedAABB(this_00,&local_a8);
  ``UCollisionPrimitivesMechanic::RebuildDrawables'::__l29::<lambda_7>::operator()'::__l2::
  <lambda_1>::operator()(&local_228,&local_a8);
  local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_290.ArrayNum = 0;
  local_290.ArrayMax = 0;
  FKLevelSetElem::GetInteriorGridCells(this_00,&local_290,__real_3f1a36e2e0000000);
  dVar11 = _UNK_15061cbc8;
  dVar10 = ___xmm_3ff00000000000000000000000000000;
  dVar9 = __real_3fe0000000000000;
  iVar12 = local_290.ArrayNum;
  uVar15 = (ulonglong)local_290.ArrayNum;
  pFVar16 = local_290.AllocatorInstance.Data + 0x20;
  pFVar17 = local_290.AllocatorInstance.Data + uVar15 * 0x38;
  while( true ) {
    if ((int)uVar15 != iVar12) {
      `TCheckedPointerIterator<UE::Math::TBox<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_298);
    }
    pFVar1 = pFVar16 + -0x20;
    if (pFVar1 == pFVar17) break;
    local_258._s_0.X = (*(double *)pFVar1 + *(double *)(pFVar16 + -8)) * dVar9;
    local_1d8 = local_280;
    local_1c0 = &local_108;
    local_1b8 = local_278;
    local_1b0 = local_270;
    local_258._s_0.Y = (*(double *)(pFVar16 + -0x18) + *(double *)pFVar16) * dVar9;
    local_260 = &local_1e8;
    local_258._s_0.Z = (*(double *)(pFVar16 + -0x10) + *(double *)(pFVar16 + 8)) * dVar9;
    local_240._s_0.X = (*(double *)(pFVar16 + -8) - *(double *)pFVar1) * dVar9;
    local_268 = UE::Core::Private::Function::
                TFunctionRefCaller<```UCollisionPrimitivesMechanic::RebuildDrawables'::__l29::<lambda_7>::operator()'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
                ::Call;
    local_240._s_0.Y = (*(double *)pFVar16 - *(double *)(pFVar16 + -0x18)) * dVar9;
    local_1a8._s_0.X = 0.0;
    local_1a8._s_0.Y = 0.0;
    local_240._s_0.Z = (*(double *)(pFVar16 + 8) - *(double *)(pFVar16 + -0x10)) * dVar9;
    local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_180 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_178 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_160 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    local_1a8._s_0.Z = dVar10;
    local_1a8._s_0.W = dVar11;
    local_170 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dStack_168 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_1e8 = uVar5;
    local_1e0 = uVar6;
    local_1d0 = (longlong)this + 0x34;
    local_1c8 = uVar7;
    UE::Geometry::GenerateBoxSegments<double>
              ((TVector<double> *)&local_240._s_0,(TVector<double> *)&local_258._s_0,&local_128,
               &local_140,&local_158,(TTransformSRT3<double> *)&local_1a8._s_0,
               (TFunctionRef<void___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                *)&local_268);
    uVar15 = local_290._8_8_ & 0xffffffff;
    pFVar16 = pFVar16 + 0x38;
  }
  if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.AllocatorInstance.Data);
  }
  return;
}

// AddBox @ 14cae4fe0

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

void __thiscall UCollisionPrimitivesMechanic::AddBox(UCollisionPrimitivesMechanic *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<FKBoxElem,TSizedDefaultAllocator<32>_> *pTVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  FPhysicsDataCollection *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  FKAggregateGeom *pFVar9;
  FKAggregateGeom *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  UTransformProxy *pUVar12;
  code *pcVar13;
  double dVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  TSharedRef<FKAggregateGeom,1> *pTVar18;
  UObject *pUVar19;
  longlong lVar20;
  FText *pFVar21;
  atomic<int> *paVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  ForElementType<FSetElementId> FVar28;
  undefined8 *puVar29;
  int iVar30;
  double dVar31;
  undefined1 auStackY_218 [32];
  undefined1 local_1b8 [25];
  FScriptContainerElement local_19f;
  undefined4 local_198;
  undefined1 *local_190;
  TVector<double>_u_0 local_188;
  double local_170;
  double dStack_168;
  double local_160;
  float local_158;
  float local_154;
  float local_150;
  undefined4 local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  FSparseArrayAllocationInfo local_128;
  TSharedRef<FKAggregateGeom,1> local_118;
  FText local_108;
  TSharedRef<FKAggregateGeom,1> local_f8;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
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
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if (((this->PhysicsData).Object == (FPhysicsDataCollection *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pFVar7 = (this->PhysicsData).Object;
  if ((pFVar7 == (FPhysicsDataCollection *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pTVar18 = MakeShared<FKAggregateGeom,1,FKAggregateGeom_&>
                      (&local_118,&((this->PhysicsData).Object)->AggGeom);
  pTVar8 = (pTVar18->SharedReferenceCount).ReferenceController;
  pFVar9 = pTVar18->Object;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  local_190 = local_1b8;
  iVar30 = 1;
  pTVar3 = &(pFVar7->AggGeom).BoxElems;
  local_1b8[0x18] = local_1b8[0x18] | 1;
  dVar31 = (this->MeshBounds).Max.field0_0x0._s_0.Z - (this->MeshBounds).Min.field0_0x0._s_0.Z;
  pFVar27 = (pTVar3->AllocatorInstance).Data;
  local_170 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_168 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_1b8._8_4_ = 0;
  local_1b8._12_4_ = 0;
  if (dVar31 <= 0.0) {
    dVar31 = 0.0;
  }
  local_1b8._16_4_ = 0;
  local_1b8._20_4_ = 1;
  local_19f = (FScriptContainerElement)0x3;
  local_198 = 6;
  local_1b8._0_8_ = &___7FKBoxElem__6B_;
  dVar14 = (this->MeshBounds).Max.field0_0x0._s_0.X - (this->MeshBounds).Min.field0_0x0._s_0.X;
  local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (dVar14 <= 0.0) {
    dVar14 = 0.0;
  }
  local_160 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_158 = (float)dVar14;
  dVar14 = (this->MeshBounds).Max.field0_0x0._s_0.Y - (this->MeshBounds).Min.field0_0x0._s_0.Y;
  if (dVar14 <= 0.0) {
    dVar14 = 0.0;
  }
  local_154 = (float)dVar14;
  local_150 = (float)dVar31;
  if (((pFVar27 <= (FScriptContainerElement *)local_1b8) &&
      ((FScriptContainerElement *)local_1b8 <
       pFVar27 + (longlong)(pFVar7->AggGeom).BoxElems.ArrayMax * 0x70)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  iVar16 = (pFVar7->AggGeom).BoxElems.ArrayNum;
  piVar1 = &(pFVar7->AggGeom).BoxElems.ArrayMax;
  if (iVar16 == *piVar1) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x870,&pTVar3->AllocatorInstance,piVar1);
  }
  (pFVar7->AggGeom).BoxElems.ArrayNum = iVar16 + 1;
  pFVar27 = (pTVar3->AllocatorInstance).Data + (longlong)iVar16 * 0x70;
  *(undefined ***)pFVar27 = &___7FKShapeElem__6B_;
  *(undefined4 *)(pFVar27 + 8) = local_1b8._8_4_;
  *(ulonglong *)(pFVar27 + 0xc) = CONCAT44(local_1b8._16_4_,local_1b8._12_4_);
  *(undefined4 *)(pFVar27 + 0x14) = local_1b8._20_4_;
  pFVar27[0x18] =
       (FScriptContainerElement)((byte)pFVar27[0x18] ^ ((byte)pFVar27[0x18] ^ local_1b8[0x18]) & 1);
  pFVar27[0x19] = local_19f;
  *(undefined4 *)(pFVar27 + 0x20) = 6;
  *(FScriptContainerElement **)(pFVar27 + 0x28) = pFVar27;
  *(undefined ***)pFVar27 = &___7FKBoxElem__6B_;
  *(double *)(pFVar27 + 0x30) = local_188._s_0.X;
  *(double *)(pFVar27 + 0x38) = local_188._s_0.Y;
  *(double *)(pFVar27 + 0x40) = local_188._s_0.Z;
  *(double *)(pFVar27 + 0x48) = local_170;
  *(double *)(pFVar27 + 0x50) = dStack_168;
  *(double *)(pFVar27 + 0x58) = local_160;
  *(float *)(pFVar27 + 0x60) = local_158;
  *(float *)(pFVar27 + 100) = local_154;
  *(float *)(pFVar27 + 0x68) = local_150;
  FKBoxElem::~FKBoxElem((FKBoxElem *)local_1b8);
  this_00 = &this->SelectedPrimitiveIDs;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8,this_00);
  bVar15 = 1 < (this->SelectedPrimitiveIDs).HashSize;
  if (!bVar15) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar2 = &(this->SelectedPrimitiveIDs).Elements.field_0xc;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x34 = 0;
  iVar16 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x2c;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x28 = 0;
  if ((iVar16 < 0) || (0x80 < iVar16)) {
    *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->SelectedPrimitiveIDs).Elements.field_0x10,0);
  }
  if (bVar15) {
    (this->SelectedPrimitiveIDs).HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  iVar4 = (pFVar7->AggGeom).BoxElems.ArrayNum;
  iVar5 = (pFVar7->AggGeom).SphereElems.ArrayNum;
  iVar16 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34;
  if (iVar16 == 0) {
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xc,4,1,(ForAnyElementType *)this_00,
                        (int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8,(int *)puVar2);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->SelectedPrimitiveIDs).Elements.field_0x10,false);
  }
  else {
    iVar17 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x30;
    iVar16 = iVar16 + -1;
    lVar20 = *(longlong *)&this_00->Elements;
    iVar6 = *(int *)(lVar20 + 4 + (longlong)iVar17 * 0xc);
    *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x30 = iVar6;
    *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34 = iVar16;
    if (iVar16 != 0) {
      *(undefined4 *)(lVar20 + (longlong)iVar6 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,&local_128,iVar17);
  if (local_128.Pointer != (uint *)0x0) {
    *(int *)local_128.Pointer = iVar5 + -1 + iVar4;
    *(uint *)((longlong)local_128.Pointer + 4) = 0xffffffff;
  }
  iVar16 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8;
  iVar4 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34;
  uVar26 = *(uint *)local_128.Pointer;
  if ((iVar16 - iVar4 != 1) && (iVar16 != iVar4)) {
    FVar28 = (this->SelectedPrimitiveIDs).Hash.SecondaryData;
    if (FVar28 == (ForElementType<FSetElementId>)0x0) {
      FVar28 = (ForElementType<FSetElementId>)&(this->SelectedPrimitiveIDs).Hash;
    }
    iVar16 = *(int *)((longlong)FVar28 +
                     (ulonglong)((this->SelectedPrimitiveIDs).HashSize - 1U & uVar26) * 4);
    if (iVar16 != -1) {
      lVar20 = *(longlong *)&this_00->Elements;
      do {
        if (*(uint *)(lVar20 + (longlong)iVar16 * 0xc) == uVar26) {
          if (iVar16 != -1) {
            *(uint *)(lVar20 + (longlong)iVar16 * 0xc) = uVar26;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this_00,local_128.Index,1);
            goto LAB_14cae5504;
          }
          break;
        }
        iVar16 = *(int *)(lVar20 + 4 + (longlong)iVar16 * 0xc);
      } while (iVar16 != -1);
    }
  }
  uVar25 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 -
           *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34;
  if (3 < uVar25) {
    uVar24 = (ulonglong)((uVar25 >> 1) + 7) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_148 = (undefined4)lVar20;
    iVar30 = 1 << ((byte)lVar20 & 0x1f);
  }
  if (((int)uVar25 < 1) || (iVar30 <= (this->SelectedPrimitiveIDs).HashSize)) {
    uVar26 = (this->SelectedPrimitiveIDs).HashSize - 1U & uVar26;
    *(uint *)((longlong)local_128.Pointer + 8) = uVar26;
    FVar28 = (this->SelectedPrimitiveIDs).Hash.SecondaryData;
    if (FVar28 == (ForElementType<FSetElementId>)0x0) {
      FVar28 = (ForElementType<FSetElementId>)&(this->SelectedPrimitiveIDs).Hash;
    }
    uVar24 = (longlong)(this->SelectedPrimitiveIDs).HashSize - 1U & (longlong)(int)uVar26;
    *(uint *)((longlong)local_128.Pointer + 4) = *(uint *)((longlong)FVar28 + uVar24 * 4);
    *(int *)((longlong)FVar28 + uVar24 * 4) = local_128.Index;
  }
  else {
    (this->SelectedPrimitiveIDs).HashSize = iVar30;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
LAB_14cae5504:
  pUVar19 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar20 = (**(code **)(*(longlong *)pUVar19 + 0x2d8))(pUVar19);
  pcVar13 = *(code **)(*(longlong *)(lVar20 + 0x28) + 0x10);
  pFVar21 = FText::AsLocalizable_Advanced_LocText
                      (&local_108,L"UCollisionPrimitivesMechanic",L"AddBoxUndo",
                       L"Add Box Collision Primitive");
  (*pcVar13)(lVar20 + 0x28,pFVar21);
  if (local_108.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
  }
  pUVar19 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar20 = (**(code **)(*(longlong *)pUVar19 + 0x2d8))(pUVar19);
  pcVar13 = *(code **)(*(longlong *)(lVar20 + 0x28) + 0x20);
  if (((this->PhysicsData).Object == (FPhysicsDataCollection *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pTVar18 = MakeShared<FKAggregateGeom,1,FKAggregateGeom_&>
                      (&local_f8,&((this->PhysicsData).Object)->AggGeom);
  local_140 = ::operator_new(0x30);
  if (local_140 == (undefined8 *)0x0) {
    local_140 = (undefined8 *)0x0;
  }
  else {
    pFVar10 = pTVar18->Object;
    pTVar11 = (pTVar18->SharedReferenceCount).ReferenceController;
    iVar30 = this->CurrentChangeStamp;
    if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
      paVar22 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar22 = &pTVar11->SharedReferenceCount;
      LOCK();
      *paVar22 = (atomic<int>)((int)*paVar22 + 1);
      UNLOCK();
    }
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      *local_140 = &___7FCollisionPrimitivesMechanicGeometryChange_UCollisionPrimitivesMechanic__6B_
      ;
      local_140[1] = pFVar9;
      local_140[2] = 0;
    }
    else {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      *local_140 = &___7FCollisionPrimitivesMechanicGeometryChange_UCollisionPrimitivesMechanic__6B_
      ;
      local_140[1] = pFVar9;
      local_140[2] = pTVar8;
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_140[3] = pFVar10;
    local_140[4] = pTVar11;
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar22 = (atomic<int>)((int)*paVar22 + 1);
      UNLOCK();
    }
    *(int *)(local_140 + 5) = iVar30;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  puVar29 = (undefined8 *)0x0;
  (*pcVar13)(lVar20 + 0x28,this,&local_140,
             &CollisionPrimitivesMechanicLocals::CollisionPrimitiveMovementTransactionText);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnCollisionGeometryChanged);
  pUVar12 = (this->CurrentActiveProxy).field0_0x0.DebugPtr;
  (**(code **)(pUVar12->_padding_ + 0x2c0))(pUVar12,&local_98);
  pUVar19 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar20 = (**(code **)(*(longlong *)pUVar19 + 0x2d8))(pUVar19);
  pcVar13 = *(code **)(*(longlong *)(lVar20 + 0x28) + 0x20);
  puVar23 = ::operator_new(0x130);
  local_138 = puVar29;
  if (puVar23 != (undefined8 *)0x0) {
    iVar30 = this->CurrentChangeStamp;
    *(undefined8 *)
     &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar23 + 1))->Elements = 0;
    puVar23[2] = 0;
    puVar23[5] = 0;
    *puVar23 = &___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_;
    *(undefined4 *)(puVar23 + 6) = 0;
    *(undefined4 *)((longlong)puVar23 + 0x34) = 0x80;
    *(undefined4 *)(puVar23 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar23 + 0x3c) = 0;
    puVar23[9] = 0;
    *(undefined4 *)(puVar23 + 10) = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar23 + 1),
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8);
    *(undefined1 *)(puVar23 + 0xb) = 0;
    puVar23[0xc] = local_98;
    puVar23[0xd] = uStack_90;
    puVar23[0xe] = local_88;
    puVar23[0xf] = uStack_80;
    puVar23[0x10] = local_78;
    puVar23[0x11] = uStack_70;
    puVar23[0x12] = local_68;
    puVar23[0x13] = uStack_60;
    puVar23[0x14] = CONCAT44(uStack_54,local_58);
    puVar23[0x15] = CONCAT44(uStack_4c,uStack_50);
    puVar23[0x16] = local_48;
    puVar23[0x17] = uStack_40;
    puVar23[0x18] = local_98;
    puVar23[0x19] = uStack_90;
    puVar23[0x1a] = local_88;
    puVar23[0x1b] = uStack_80;
    puVar23[0x1c] = local_78;
    puVar23[0x1d] = uStack_70;
    puVar23[0x1e] = local_68;
    puVar23[0x1f] = uStack_60;
    *(undefined4 *)(puVar23 + 0x20) = local_58;
    *(undefined4 *)((longlong)puVar23 + 0x104) = uStack_54;
    *(undefined4 *)(puVar23 + 0x21) = uStack_50;
    *(undefined4 *)((longlong)puVar23 + 0x10c) = uStack_4c;
    puVar23[0x22] = local_48;
    puVar23[0x23] = uStack_40;
    *(int *)(puVar23 + 0x24) = iVar30;
    local_138 = puVar23;
  }
  (*pcVar13)(lVar20 + 0x28,this,&local_138,
             &CollisionPrimitivesMechanicLocals::CollisionPrimitiveDeselectionTransactionText);
  pUVar19 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar20 = (**(code **)(*(longlong *)pUVar19 + 0x2d8))(pUVar19);
  pcVar13 = *(code **)(*(longlong *)(lVar20 + 0x28) + 0x20);
  puVar23 = ::operator_new(0x130);
  if (puVar23 != (undefined8 *)0x0) {
    iVar30 = this->CurrentChangeStamp;
    *(undefined8 *)
     &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar23 + 1))->Elements = 0;
    *puVar23 = &___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_;
    puVar23[2] = 0;
    puVar23[5] = 0;
    *(undefined4 *)(puVar23 + 6) = 0;
    *(undefined4 *)((longlong)puVar23 + 0x34) = 0x80;
    *(undefined4 *)(puVar23 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar23 + 0x3c) = 0;
    puVar23[9] = 0;
    *(undefined4 *)(puVar23 + 10) = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar23 + 1),
               &this->SelectedPrimitiveIDs);
    *(undefined1 *)(puVar23 + 0xb) = 1;
    puVar23[0xc] = local_98;
    puVar23[0xd] = uStack_90;
    puVar23[0xe] = local_88;
    puVar23[0xf] = uStack_80;
    puVar23[0x10] = local_78;
    puVar23[0x11] = uStack_70;
    puVar23[0x12] = local_68;
    puVar23[0x13] = uStack_60;
    puVar23[0x14] = CONCAT44(uStack_54,local_58);
    puVar23[0x15] = CONCAT44(uStack_4c,uStack_50);
    puVar23[0x16] = local_48;
    puVar23[0x17] = uStack_40;
    puVar23[0x18] = local_98;
    puVar23[0x19] = uStack_90;
    puVar23[0x1a] = local_88;
    puVar23[0x1b] = uStack_80;
    puVar23[0x1c] = local_78;
    puVar23[0x1d] = uStack_70;
    puVar23[0x1e] = local_68;
    puVar23[0x1f] = uStack_60;
    *(undefined4 *)(puVar23 + 0x20) = local_58;
    *(undefined4 *)((longlong)puVar23 + 0x104) = uStack_54;
    *(undefined4 *)(puVar23 + 0x21) = uStack_50;
    *(undefined4 *)((longlong)puVar23 + 0x10c) = uStack_4c;
    puVar23[0x22] = local_48;
    puVar23[0x23] = uStack_40;
    *(int *)(puVar23 + 0x24) = iVar30;
    puVar29 = puVar23;
  }
  local_130 = puVar29;
  (*pcVar13)(lVar20 + 0x28,this,&local_130,
             &CollisionPrimitivesMechanicLocals::CollisionPrimitiveSelectionTransactionText);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSelectionChanged);
  pUVar19 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar20 = (**(code **)(*(longlong *)pUVar19 + 0x2d8))(pUVar19);
  (**(code **)(*(longlong *)(lVar20 + 0x28) + 0x18))(lVar20 + 0x28);
  RebuildDrawables(this,true);
  UpdateGizmoLocation(this);
  UpdateGizmoVisibility(this);
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  bVar15 = local_e8._12_4_ != 0;
  local_e8._8_8_ = (ulonglong)(uint)local_e8._12_4_ << 0x20;
  if (bVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return;
}

// AddCapsule @ 14cae5a50

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

void __thiscall UCollisionPrimitivesMechanic::AddCapsule(UCollisionPrimitivesMechanic *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<FKSphylElem,TSizedDefaultAllocator<32>_> *pTVar3;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  FPhysicsDataCollection *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  FKAggregateGeom *pFVar10;
  FKAggregateGeom *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  UTransformProxy *pUVar13;
  code *pcVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  TSharedRef<FKAggregateGeom,1> *pTVar20;
  UObject *pUVar21;
  longlong lVar22;
  FText *pFVar23;
  atomic<int> *paVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  uint uVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  ForElementType<FSetElementId> FVar30;
  int iVar31;
  undefined8 *puVar32;
  undefined1 auStackY_218 [32];
  undefined1 local_1b8 [25];
  FScriptContainerElement local_19f;
  undefined4 local_198;
  undefined1 *local_190;
  TVector<double>_u_0 local_188;
  double local_170;
  double dStack_168;
  double local_160;
  float local_158;
  float local_154;
  undefined4 local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  FSparseArrayAllocationInfo local_130;
  TSharedRef<FKAggregateGeom,1> local_120;
  FText local_110;
  TSharedRef<FKAggregateGeom,1> local_100;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
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
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  if (((this->PhysicsData).Object == (FPhysicsDataCollection *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pFVar8 = (this->PhysicsData).Object;
  if ((pFVar8 == (FPhysicsDataCollection *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pTVar20 = MakeShared<FKAggregateGeom,1,FKAggregateGeom_&>
                      (&local_120,&((this->PhysicsData).Object)->AggGeom);
  pTVar9 = (pTVar20->SharedReferenceCount).ReferenceController;
  pFVar10 = pTVar20->Object;
  if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.SharedReferenceCount.ReferenceController);
  local_1b8[0x18] = local_1b8[0x18] | 1;
  local_190 = local_1b8;
  pTVar3 = &(pFVar8->AggGeom).SphylElems;
  pFVar29 = (pTVar3->AllocatorInstance).Data;
  local_170 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_168 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_1b8._8_4_ = 0;
  local_1b8._12_4_ = 0;
  local_1b8._16_4_ = 0;
  local_1b8._20_4_ = 2;
  local_19f = (FScriptContainerElement)0x3;
  local_198 = 6;
  local_1b8._0_8_ = &___7FKSphylElem__6B_;
  dVar16 = (this->MeshBounds).Max.field0_0x0._s_0.Y - (this->MeshBounds).Min.field0_0x0._s_0.Y;
  local_188._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_188._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_188._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (dVar16 <= 0.0) {
    dVar16 = 0.0;
  }
  local_160 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  dVar15 = (this->MeshBounds).Max.field0_0x0._s_0.X - (this->MeshBounds).Min.field0_0x0._s_0.X;
  if (dVar15 <= 0.0) {
    dVar15 = 0.0;
  }
  if (dVar16 <= dVar15) {
    dVar16 = dVar15;
  }
  local_158 = (float)(dVar16 * __real_3fe0000000000000);
  dVar16 = (this->MeshBounds).Max.field0_0x0._s_0.Z - (this->MeshBounds).Min.field0_0x0._s_0.Z;
  if (dVar16 <= 0.0) {
    dVar16 = 0.0;
  }
  local_154 = (float)dVar16;
  if (((pFVar29 <= (FScriptContainerElement *)local_1b8) &&
      ((FScriptContainerElement *)local_1b8 <
       pFVar29 + (longlong)(pFVar8->AggGeom).SphylElems.ArrayMax * 0x68)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  iVar18 = (pFVar8->AggGeom).SphylElems.ArrayNum;
  piVar1 = &(pFVar8->AggGeom).SphylElems.ArrayMax;
  if (iVar18 == *piVar1) {
    iVar18 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x868,&pTVar3->AllocatorInstance,piVar1);
  }
  (pFVar8->AggGeom).SphylElems.ArrayNum = iVar18 + 1;
  pFVar29 = (pTVar3->AllocatorInstance).Data + (longlong)iVar18 * 0x68;
  *(undefined ***)pFVar29 = &___7FKShapeElem__6B_;
  *(undefined4 *)(pFVar29 + 8) = local_1b8._8_4_;
  *(ulonglong *)(pFVar29 + 0xc) = CONCAT44(local_1b8._16_4_,local_1b8._12_4_);
  *(undefined4 *)(pFVar29 + 0x14) = local_1b8._20_4_;
  pFVar29[0x18] =
       (FScriptContainerElement)((byte)pFVar29[0x18] ^ ((byte)pFVar29[0x18] ^ local_1b8[0x18]) & 1);
  pFVar29[0x19] = local_19f;
  *(undefined4 *)(pFVar29 + 0x20) = 6;
  *(FScriptContainerElement **)(pFVar29 + 0x28) = pFVar29;
  *(undefined ***)pFVar29 = &___7FKSphylElem__6B_;
  *(double *)(pFVar29 + 0x30) = local_188._s_0.X;
  *(double *)(pFVar29 + 0x38) = local_188._s_0.Y;
  *(double *)(pFVar29 + 0x40) = local_188._s_0.Z;
  *(double *)(pFVar29 + 0x48) = local_170;
  *(double *)(pFVar29 + 0x50) = dStack_168;
  *(double *)(pFVar29 + 0x58) = local_160;
  *(float *)(pFVar29 + 0x60) = local_158;
  *(float *)(pFVar29 + 100) = local_154;
  FKSphylElem::~FKSphylElem((FKSphylElem *)local_1b8);
  this_00 = &this->SelectedPrimitiveIDs;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8,this_00);
  bVar17 = 1 < (this->SelectedPrimitiveIDs).HashSize;
  if (!bVar17) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar2 = &(this->SelectedPrimitiveIDs).Elements.field_0xc;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x34 = 0;
  iVar18 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x2c;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x28 = 0;
  if ((iVar18 < 0) || (0x80 < iVar18)) {
    *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->SelectedPrimitiveIDs).Elements.field_0x10,0);
  }
  iVar18 = 1;
  if (bVar17) {
    (this->SelectedPrimitiveIDs).HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  iVar4 = (pFVar8->AggGeom).SphylElems.ArrayNum;
  iVar5 = (pFVar8->AggGeom).BoxElems.ArrayNum;
  iVar6 = (pFVar8->AggGeom).SphereElems.ArrayNum;
  iVar31 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34;
  if (iVar31 == 0) {
    iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xc,4,1,(ForAnyElementType *)this_00,
                        (int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8,(int *)puVar2);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->SelectedPrimitiveIDs).Elements.field_0x10,false);
  }
  else {
    iVar19 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x30;
    iVar31 = iVar31 + -1;
    lVar22 = *(longlong *)&this_00->Elements;
    iVar7 = *(int *)(lVar22 + 4 + (longlong)iVar19 * 0xc);
    *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x30 = iVar7;
    *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34 = iVar31;
    if (iVar31 != 0) {
      *(undefined4 *)(lVar22 + (longlong)iVar7 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,&local_130,iVar19);
  if (local_130.Pointer != (uint *)0x0) {
    *(int *)local_130.Pointer = iVar6 + -1 + iVar4 + iVar5;
    *(uint *)((longlong)local_130.Pointer + 4) = 0xffffffff;
  }
  iVar31 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8;
  iVar4 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34;
  uVar28 = *(uint *)local_130.Pointer;
  if ((iVar31 - iVar4 != 1) && (iVar31 != iVar4)) {
    FVar30 = (this->SelectedPrimitiveIDs).Hash.SecondaryData;
    if (FVar30 == (ForElementType<FSetElementId>)0x0) {
      FVar30 = (ForElementType<FSetElementId>)&(this->SelectedPrimitiveIDs).Hash;
    }
    iVar31 = *(int *)((longlong)FVar30 +
                     (ulonglong)((this->SelectedPrimitiveIDs).HashSize - 1U & uVar28) * 4);
    if (iVar31 != -1) {
      lVar22 = *(longlong *)&this_00->Elements;
      do {
        if (*(uint *)(lVar22 + (longlong)iVar31 * 0xc) == uVar28) {
          if (iVar31 != -1) {
            *(uint *)(lVar22 + (longlong)iVar31 * 0xc) = uVar28;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this_00,local_130.Index,1);
            goto LAB_14cae5f81;
          }
          break;
        }
        iVar31 = *(int *)(lVar22 + 4 + (longlong)iVar31 * 0xc);
      } while (iVar31 != -1);
    }
  }
  uVar27 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 -
           *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34;
  if (3 < uVar27) {
    uVar26 = (ulonglong)((uVar27 >> 1) + 7) * 2 + 1;
    lVar22 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    local_150 = (undefined4)lVar22;
    iVar18 = 1 << ((byte)lVar22 & 0x1f);
  }
  if (((int)uVar27 < 1) || (iVar18 <= (this->SelectedPrimitiveIDs).HashSize)) {
    uVar28 = (this->SelectedPrimitiveIDs).HashSize - 1U & uVar28;
    *(uint *)((longlong)local_130.Pointer + 8) = uVar28;
    FVar30 = (this->SelectedPrimitiveIDs).Hash.SecondaryData;
    if (FVar30 == (ForElementType<FSetElementId>)0x0) {
      FVar30 = (ForElementType<FSetElementId>)&(this->SelectedPrimitiveIDs).Hash;
    }
    uVar26 = (longlong)(this->SelectedPrimitiveIDs).HashSize - 1U & (longlong)(int)uVar28;
    *(uint *)((longlong)local_130.Pointer + 4) = *(uint *)((longlong)FVar30 + uVar26 * 4);
    *(int *)((longlong)FVar30 + uVar26 * 4) = local_130.Index;
  }
  else {
    (this->SelectedPrimitiveIDs).HashSize = iVar18;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
LAB_14cae5f81:
  pUVar21 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar22 = (**(code **)(*(longlong *)pUVar21 + 0x2d8))(pUVar21);
  pcVar14 = *(code **)(*(longlong *)(lVar22 + 0x28) + 0x10);
  pFVar23 = FText::AsLocalizable_Advanced_LocText
                      (&local_110,L"UCollisionPrimitivesMechanic",L"AddCapsuleUndo",
                       L"Add Capsule Collision Primitive");
  (*pcVar14)(lVar22 + 0x28,pFVar23);
  if (local_110.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
  }
  pUVar21 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar22 = (**(code **)(*(longlong *)pUVar21 + 0x2d8))(pUVar21);
  pcVar14 = *(code **)(*(longlong *)(lVar22 + 0x28) + 0x20);
  if (((this->PhysicsData).Object == (FPhysicsDataCollection *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar17)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  pTVar20 = MakeShared<FKAggregateGeom,1,FKAggregateGeom_&>
                      (&local_100,&((this->PhysicsData).Object)->AggGeom);
  local_148 = ::operator_new(0x30);
  if (local_148 == (undefined8 *)0x0) {
    local_148 = (undefined8 *)0x0;
  }
  else {
    pFVar11 = pTVar20->Object;
    pTVar12 = (pTVar20->SharedReferenceCount).ReferenceController;
    iVar18 = this->CurrentChangeStamp;
    if (pTVar12 == (TReferenceControllerBase<1> *)0x0) {
      paVar24 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar24 = &pTVar12->SharedReferenceCount;
      LOCK();
      *paVar24 = (atomic<int>)((int)*paVar24 + 1);
      UNLOCK();
    }
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      *local_148 = &___7FCollisionPrimitivesMechanicGeometryChange_UCollisionPrimitivesMechanic__6B_
      ;
      local_148[1] = pFVar10;
      local_148[2] = 0;
    }
    else {
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      *local_148 = &___7FCollisionPrimitivesMechanicGeometryChange_UCollisionPrimitivesMechanic__6B_
      ;
      local_148[1] = pFVar10;
      local_148[2] = pTVar9;
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_148[3] = pFVar11;
    local_148[4] = pTVar12;
    if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar24 = (atomic<int>)((int)*paVar24 + 1);
      UNLOCK();
    }
    *(int *)(local_148 + 5) = iVar18;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
  }
  puVar32 = (undefined8 *)0x0;
  (*pcVar14)(lVar22 + 0x28,this,&local_148,
             &CollisionPrimitivesMechanicLocals::CollisionPrimitiveMovementTransactionText);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.SharedReferenceCount.ReferenceController);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnCollisionGeometryChanged);
  pUVar13 = (this->CurrentActiveProxy).field0_0x0.DebugPtr;
  (**(code **)(pUVar13->_padding_ + 0x2c0))(pUVar13,&local_98);
  pUVar21 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar22 = (**(code **)(*(longlong *)pUVar21 + 0x2d8))(pUVar21);
  pcVar14 = *(code **)(*(longlong *)(lVar22 + 0x28) + 0x20);
  puVar25 = ::operator_new(0x130);
  local_140 = puVar32;
  if (puVar25 != (undefined8 *)0x0) {
    iVar18 = this->CurrentChangeStamp;
    *(undefined8 *)
     &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar25 + 1))->Elements = 0;
    puVar25[2] = 0;
    puVar25[5] = 0;
    *puVar25 = &___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_;
    *(undefined4 *)(puVar25 + 6) = 0;
    *(undefined4 *)((longlong)puVar25 + 0x34) = 0x80;
    *(undefined4 *)(puVar25 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar25 + 0x3c) = 0;
    puVar25[9] = 0;
    *(undefined4 *)(puVar25 + 10) = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar25 + 1),
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8);
    *(undefined1 *)(puVar25 + 0xb) = 0;
    puVar25[0xc] = local_98;
    puVar25[0xd] = uStack_90;
    puVar25[0xe] = local_88;
    puVar25[0xf] = uStack_80;
    puVar25[0x10] = local_78;
    puVar25[0x11] = uStack_70;
    puVar25[0x12] = local_68;
    puVar25[0x13] = uStack_60;
    puVar25[0x14] = CONCAT44(uStack_54,local_58);
    puVar25[0x15] = CONCAT44(uStack_4c,uStack_50);
    puVar25[0x16] = local_48;
    puVar25[0x17] = uStack_40;
    puVar25[0x18] = local_98;
    puVar25[0x19] = uStack_90;
    puVar25[0x1a] = local_88;
    puVar25[0x1b] = uStack_80;
    puVar25[0x1c] = local_78;
    puVar25[0x1d] = uStack_70;
    puVar25[0x1e] = local_68;
    puVar25[0x1f] = uStack_60;
    *(undefined4 *)(puVar25 + 0x20) = local_58;
    *(undefined4 *)((longlong)puVar25 + 0x104) = uStack_54;
    *(undefined4 *)(puVar25 + 0x21) = uStack_50;
    *(undefined4 *)((longlong)puVar25 + 0x10c) = uStack_4c;
    puVar25[0x22] = local_48;
    puVar25[0x23] = uStack_40;
    *(int *)(puVar25 + 0x24) = iVar18;
    local_140 = puVar25;
  }
  (*pcVar14)(lVar22 + 0x28,this,&local_140,
             &CollisionPrimitivesMechanicLocals::CollisionPrimitiveDeselectionTransactionText);
  pUVar21 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar22 = (**(code **)(*(longlong *)pUVar21 + 0x2d8))(pUVar21);
  pcVar14 = *(code **)(*(longlong *)(lVar22 + 0x28) + 0x20);
  puVar25 = ::operator_new(0x130);
  if (puVar25 != (undefined8 *)0x0) {
    iVar18 = this->CurrentChangeStamp;
    *(undefined8 *)
     &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar25 + 1))->Elements = 0;
    *puVar25 = &___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_;
    puVar25[2] = 0;
    puVar25[5] = 0;
    *(undefined4 *)(puVar25 + 6) = 0;
    *(undefined4 *)((longlong)puVar25 + 0x34) = 0x80;
    *(undefined4 *)(puVar25 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar25 + 0x3c) = 0;
    puVar25[9] = 0;
    *(undefined4 *)(puVar25 + 10) = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar25 + 1),
               &this->SelectedPrimitiveIDs);
    *(undefined1 *)(puVar25 + 0xb) = 1;
    puVar25[0xc] = local_98;
    puVar25[0xd] = uStack_90;
    puVar25[0xe] = local_88;
    puVar25[0xf] = uStack_80;
    puVar25[0x10] = local_78;
    puVar25[0x11] = uStack_70;
    puVar25[0x12] = local_68;
    puVar25[0x13] = uStack_60;
    puVar25[0x14] = CONCAT44(uStack_54,local_58);
    puVar25[0x15] = CONCAT44(uStack_4c,uStack_50);
    puVar25[0x16] = local_48;
    puVar25[0x17] = uStack_40;
    puVar25[0x18] = local_98;
    puVar25[0x19] = uStack_90;
    puVar25[0x1a] = local_88;
    puVar25[0x1b] = uStack_80;
    puVar25[0x1c] = local_78;
    puVar25[0x1d] = uStack_70;
    puVar25[0x1e] = local_68;
    puVar25[0x1f] = uStack_60;
    *(undefined4 *)(puVar25 + 0x20) = local_58;
    *(undefined4 *)((longlong)puVar25 + 0x104) = uStack_54;
    *(undefined4 *)(puVar25 + 0x21) = uStack_50;
    *(undefined4 *)((longlong)puVar25 + 0x10c) = uStack_4c;
    puVar25[0x22] = local_48;
    puVar25[0x23] = uStack_40;
    *(int *)(puVar25 + 0x24) = iVar18;
    puVar32 = puVar25;
  }
  local_138 = puVar32;
  (*pcVar14)(lVar22 + 0x28,this,&local_138,
             &CollisionPrimitivesMechanicLocals::CollisionPrimitiveSelectionTransactionText);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSelectionChanged);
  pUVar21 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar22 = (**(code **)(*(longlong *)pUVar21 + 0x2d8))(pUVar21);
  (**(code **)(*(longlong *)(lVar22 + 0x28) + 0x18))(lVar22 + 0x28);
  RebuildDrawables(this,true);
  UpdateGizmoLocation(this);
  UpdateGizmoVisibility(this);
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  bVar17 = local_e8._12_4_ != 0;
  local_e8._8_8_ = (ulonglong)(uint)local_e8._12_4_ << 0x20;
  if (bVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return;
}

// AddSphere @ 14cae6f70

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

void __thiscall UCollisionPrimitivesMechanic::AddSphere(UCollisionPrimitivesMechanic *this)

{
  int *piVar1;
  undefined1 *puVar2;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  int iVar3;
  int iVar4;
  FPhysicsDataCollection *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  FKAggregateGeom *pFVar7;
  FKAggregateGeom *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  UTransformProxy *pUVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  int iVar16;
  TSharedRef<FKAggregateGeom,1> *pTVar17;
  UObject *pUVar18;
  longlong lVar19;
  FText *pFVar20;
  atomic<int> *paVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  ForElementType<FSetElementId> FVar27;
  int iVar28;
  undefined8 *puVar29;
  double dVar30;
  undefined1 auStackY_1f8 [32];
  undefined1 local_198 [25];
  FScriptContainerElement local_17f;
  undefined4 local_178;
  undefined1 *local_170;
  TVector<double>_u_0 local_168;
  float local_150;
  undefined4 local_148;
  undefined8 *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  FSparseArrayAllocationInfo local_128;
  TSharedRef<FKAggregateGeom,1> local_118;
  FText local_108;
  TSharedRef<FKAggregateGeom,1> local_f8;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
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
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if (((this->PhysicsData).Object == (FPhysicsDataCollection *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar5 = (this->PhysicsData).Object;
  pFVar8 = &pFVar5->AggGeom;
  if ((pFVar5 == (FPhysicsDataCollection *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pTVar17 = MakeShared<FKAggregateGeom,1,FKAggregateGeom_&>
                      (&local_118,&((this->PhysicsData).Object)->AggGeom);
  pTVar6 = (pTVar17->SharedReferenceCount).ReferenceController;
  pFVar7 = pTVar17->Object;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  local_170 = local_198;
  local_198[0x18] = local_198[0x18] | 1;
  dVar30 = (this->MeshBounds).Max.field0_0x0._s_0.Z - (this->MeshBounds).Min.field0_0x0._s_0.Z;
  dVar13 = (this->MeshBounds).Max.field0_0x0._s_0.X - (this->MeshBounds).Min.field0_0x0._s_0.X;
  pFVar26 = (pFVar8->SphereElems).AllocatorInstance.Data;
  local_168._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_168._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (dVar30 <= 0.0) {
    dVar30 = 0.0;
  }
  local_168._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (dVar13 <= 0.0) {
    dVar13 = 0.0;
  }
  local_198._8_4_ = 0;
  local_198._12_4_ = 0;
  local_198._16_4_ = 0;
  local_198._20_4_ = 0;
  local_17f = (FScriptContainerElement)0x3;
  local_178 = 6;
  local_198._0_8_ = &___7FKSphereElem__6B_;
  dVar12 = (this->MeshBounds).Max.field0_0x0._s_0.Y - (this->MeshBounds).Min.field0_0x0._s_0.Y;
  if (dVar12 <= 0.0) {
    dVar12 = 0.0;
  }
  if (dVar30 <= dVar12) {
    dVar30 = dVar12;
  }
  if (dVar30 <= dVar13) {
    dVar30 = dVar13;
  }
  local_150 = (float)(dVar30 * __real_3fe0000000000000);
  if (((pFVar26 <= (FScriptContainerElement *)local_198) &&
      ((FScriptContainerElement *)local_198 <
       pFVar26 + (longlong)(pFVar5->AggGeom).SphereElems.ArrayMax * 0x50)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar15 = (pFVar5->AggGeom).SphereElems.ArrayNum;
  piVar1 = &(pFVar5->AggGeom).SphereElems.ArrayMax;
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x850,(ForAnyElementType *)pFVar8,piVar1);
  }
  (pFVar5->AggGeom).SphereElems.ArrayNum = iVar15 + 1;
  pFVar26 = (pFVar8->SphereElems).AllocatorInstance.Data + (longlong)iVar15 * 0x50;
  *(undefined ***)pFVar26 = &___7FKShapeElem__6B_;
  *(undefined4 *)(pFVar26 + 8) = local_198._8_4_;
  *(ulonglong *)(pFVar26 + 0xc) = CONCAT44(local_198._16_4_,local_198._12_4_);
  *(undefined4 *)(pFVar26 + 0x14) = local_198._20_4_;
  pFVar26[0x18] =
       (FScriptContainerElement)((byte)pFVar26[0x18] ^ ((byte)pFVar26[0x18] ^ local_198[0x18]) & 1);
  pFVar26[0x19] = local_17f;
  *(undefined4 *)(pFVar26 + 0x20) = 6;
  *(FScriptContainerElement **)(pFVar26 + 0x28) = pFVar26;
  *(undefined ***)pFVar26 = &___7FKSphereElem__6B_;
  *(double *)(pFVar26 + 0x30) = local_168._s_0.X;
  *(double *)(pFVar26 + 0x38) = local_168._s_0.Y;
  *(double *)(pFVar26 + 0x40) = local_168._s_0.Z;
  *(float *)(pFVar26 + 0x48) = local_150;
  FKSphereElem::~FKSphereElem((FKSphereElem *)local_198);
  this_00 = &this->SelectedPrimitiveIDs;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8,this_00);
  bVar14 = 1 < (this->SelectedPrimitiveIDs).HashSize;
  if (!bVar14) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar2 = &(this->SelectedPrimitiveIDs).Elements.field_0xc;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x34 = 0;
  iVar15 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x2c;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x28 = 0;
  if ((iVar15 < 0) || (0x80 < iVar15)) {
    *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->SelectedPrimitiveIDs).Elements.field_0x10,0);
  }
  iVar15 = 1;
  if (bVar14) {
    (this->SelectedPrimitiveIDs).HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  iVar3 = (pFVar5->AggGeom).SphereElems.ArrayNum;
  iVar28 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34;
  if (iVar28 == 0) {
    iVar16 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0xc,4,1,(ForAnyElementType *)this_00,
                        (int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8,(int *)puVar2);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->SelectedPrimitiveIDs).Elements.field_0x10,false);
  }
  else {
    iVar16 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x30;
    iVar28 = iVar28 + -1;
    lVar19 = *(longlong *)&this_00->Elements;
    iVar4 = *(int *)(lVar19 + 4 + (longlong)iVar16 * 0xc);
    *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x30 = iVar4;
    *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34 = iVar28;
    if (iVar28 != 0) {
      *(undefined4 *)(lVar19 + (longlong)iVar4 * 0xc) = 0xffffffff;
    }
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this_00,&local_128,iVar16);
  if (local_128.Pointer != (uint *)0x0) {
    *(uint *)local_128.Pointer = iVar3 - 1;
    *(uint *)((longlong)local_128.Pointer + 4) = 0xffffffff;
  }
  iVar28 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8;
  iVar3 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34;
  uVar25 = *(uint *)local_128.Pointer;
  if ((iVar28 - iVar3 != 1) && (iVar28 != iVar3)) {
    FVar27 = (this->SelectedPrimitiveIDs).Hash.SecondaryData;
    if (FVar27 == (ForElementType<FSetElementId>)0x0) {
      FVar27 = (ForElementType<FSetElementId>)&(this->SelectedPrimitiveIDs).Hash;
    }
    iVar28 = *(int *)((longlong)FVar27 +
                     (ulonglong)((this->SelectedPrimitiveIDs).HashSize - 1U & uVar25) * 4);
    if (iVar28 != -1) {
      lVar19 = *(longlong *)&this_00->Elements;
      do {
        if (*(uint *)(lVar19 + (longlong)iVar28 * 0xc) == uVar25) {
          if (iVar28 != -1) {
            *(uint *)(lVar19 + (longlong)iVar28 * 0xc) = uVar25;
            TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::RemoveAtUninitialized
                      ((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)this_00,local_128.Index,1);
            goto LAB_14cae7451;
          }
          break;
        }
        iVar28 = *(int *)(lVar19 + 4 + (longlong)iVar28 * 0xc);
      } while (iVar28 != -1);
    }
  }
  uVar24 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 -
           *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34;
  if (3 < uVar24) {
    uVar23 = (ulonglong)((uVar24 >> 1) + 7) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    local_148 = (undefined4)lVar19;
    iVar15 = 1 << ((byte)lVar19 & 0x1f);
  }
  if (((int)uVar24 < 1) || (iVar15 <= (this->SelectedPrimitiveIDs).HashSize)) {
    uVar25 = (this->SelectedPrimitiveIDs).HashSize - 1U & uVar25;
    *(uint *)((longlong)local_128.Pointer + 8) = uVar25;
    FVar27 = (this->SelectedPrimitiveIDs).Hash.SecondaryData;
    if (FVar27 == (ForElementType<FSetElementId>)0x0) {
      FVar27 = (ForElementType<FSetElementId>)&(this->SelectedPrimitiveIDs).Hash;
    }
    uVar23 = (longlong)(this->SelectedPrimitiveIDs).HashSize - 1U & (longlong)(int)uVar25;
    *(uint *)((longlong)local_128.Pointer + 4) = *(uint *)((longlong)FVar27 + uVar23 * 4);
    *(int *)((longlong)FVar27 + uVar23 * 4) = local_128.Index;
  }
  else {
    (this->SelectedPrimitiveIDs).HashSize = iVar15;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
LAB_14cae7451:
  pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar19 = (**(code **)(*(longlong *)pUVar18 + 0x2d8))(pUVar18);
  pcVar11 = *(code **)(*(longlong *)(lVar19 + 0x28) + 0x10);
  pFVar20 = FText::AsLocalizable_Advanced_LocText
                      (&local_108,L"UCollisionPrimitivesMechanic",L"AddSphereUndo",
                       L"Add Sphere Collision Primitive");
  (*pcVar11)(lVar19 + 0x28,pFVar20);
  if (local_108.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
  }
  pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar19 = (**(code **)(*(longlong *)pUVar18 + 0x2d8))(pUVar18);
  pcVar11 = *(code **)(*(longlong *)(lVar19 + 0x28) + 0x20);
  if (((this->PhysicsData).Object == (FPhysicsDataCollection *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pTVar17 = MakeShared<FKAggregateGeom,1,FKAggregateGeom_&>
                      (&local_f8,&((this->PhysicsData).Object)->AggGeom);
  local_140 = ::operator_new(0x30);
  if (local_140 == (undefined8 *)0x0) {
    local_140 = (undefined8 *)0x0;
  }
  else {
    pFVar8 = pTVar17->Object;
    pTVar9 = (pTVar17->SharedReferenceCount).ReferenceController;
    iVar15 = this->CurrentChangeStamp;
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      paVar21 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar21 = &pTVar9->SharedReferenceCount;
      LOCK();
      *paVar21 = (atomic<int>)((int)*paVar21 + 1);
      UNLOCK();
    }
    if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
      *local_140 = &___7FCollisionPrimitivesMechanicGeometryChange_UCollisionPrimitivesMechanic__6B_
      ;
      local_140[1] = pFVar7;
      local_140[2] = 0;
    }
    else {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      *local_140 = &___7FCollisionPrimitivesMechanicGeometryChange_UCollisionPrimitivesMechanic__6B_
      ;
      local_140[1] = pFVar7;
      local_140[2] = pTVar6;
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_140[3] = pFVar8;
    local_140[4] = pTVar9;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar21 = (atomic<int>)((int)*paVar21 + 1);
      UNLOCK();
    }
    *(int *)(local_140 + 5) = iVar15;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  puVar29 = (undefined8 *)0x0;
  (*pcVar11)(lVar19 + 0x28,this,&local_140,
             &CollisionPrimitivesMechanicLocals::CollisionPrimitiveMovementTransactionText);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnCollisionGeometryChanged);
  pUVar10 = (this->CurrentActiveProxy).field0_0x0.DebugPtr;
  (**(code **)(pUVar10->_padding_ + 0x2c0))(pUVar10,&local_98);
  pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar19 = (**(code **)(*(longlong *)pUVar18 + 0x2d8))(pUVar18);
  pcVar11 = *(code **)(*(longlong *)(lVar19 + 0x28) + 0x20);
  puVar22 = ::operator_new(0x130);
  local_138 = puVar29;
  if (puVar22 != (undefined8 *)0x0) {
    iVar15 = this->CurrentChangeStamp;
    *(undefined8 *)
     &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar22 + 1))->Elements = 0;
    puVar22[2] = 0;
    puVar22[5] = 0;
    *puVar22 = &___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_;
    *(undefined4 *)(puVar22 + 6) = 0;
    *(undefined4 *)((longlong)puVar22 + 0x34) = 0x80;
    *(undefined4 *)(puVar22 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar22 + 0x3c) = 0;
    puVar22[9] = 0;
    *(undefined4 *)(puVar22 + 10) = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar22 + 1),
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8);
    *(undefined1 *)(puVar22 + 0xb) = 0;
    puVar22[0xc] = local_98;
    puVar22[0xd] = uStack_90;
    puVar22[0xe] = local_88;
    puVar22[0xf] = uStack_80;
    puVar22[0x10] = local_78;
    puVar22[0x11] = uStack_70;
    puVar22[0x12] = local_68;
    puVar22[0x13] = uStack_60;
    puVar22[0x14] = CONCAT44(uStack_54,local_58);
    puVar22[0x15] = CONCAT44(uStack_4c,uStack_50);
    puVar22[0x16] = local_48;
    puVar22[0x17] = uStack_40;
    puVar22[0x18] = local_98;
    puVar22[0x19] = uStack_90;
    puVar22[0x1a] = local_88;
    puVar22[0x1b] = uStack_80;
    puVar22[0x1c] = local_78;
    puVar22[0x1d] = uStack_70;
    puVar22[0x1e] = local_68;
    puVar22[0x1f] = uStack_60;
    *(undefined4 *)(puVar22 + 0x20) = local_58;
    *(undefined4 *)((longlong)puVar22 + 0x104) = uStack_54;
    *(undefined4 *)(puVar22 + 0x21) = uStack_50;
    *(undefined4 *)((longlong)puVar22 + 0x10c) = uStack_4c;
    puVar22[0x22] = local_48;
    puVar22[0x23] = uStack_40;
    *(int *)(puVar22 + 0x24) = iVar15;
    local_138 = puVar22;
  }
  (*pcVar11)(lVar19 + 0x28,this,&local_138,
             &CollisionPrimitivesMechanicLocals::CollisionPrimitiveDeselectionTransactionText);
  pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar19 = (**(code **)(*(longlong *)pUVar18 + 0x2d8))(pUVar18);
  pcVar11 = *(code **)(*(longlong *)(lVar19 + 0x28) + 0x20);
  puVar22 = ::operator_new(0x130);
  if (puVar22 != (undefined8 *)0x0) {
    iVar15 = this->CurrentChangeStamp;
    *(undefined8 *)
     &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar22 + 1))->Elements = 0;
    *puVar22 = &___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_;
    puVar22[2] = 0;
    puVar22[5] = 0;
    *(undefined4 *)(puVar22 + 6) = 0;
    *(undefined4 *)((longlong)puVar22 + 0x34) = 0x80;
    *(undefined4 *)(puVar22 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)puVar22 + 0x3c) = 0;
    puVar22[9] = 0;
    *(undefined4 *)(puVar22 + 10) = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar22 + 1),
               &this->SelectedPrimitiveIDs);
    *(undefined1 *)(puVar22 + 0xb) = 1;
    puVar22[0xc] = local_98;
    puVar22[0xd] = uStack_90;
    puVar22[0xe] = local_88;
    puVar22[0xf] = uStack_80;
    puVar22[0x10] = local_78;
    puVar22[0x11] = uStack_70;
    puVar22[0x12] = local_68;
    puVar22[0x13] = uStack_60;
    puVar22[0x14] = CONCAT44(uStack_54,local_58);
    puVar22[0x15] = CONCAT44(uStack_4c,uStack_50);
    puVar22[0x16] = local_48;
    puVar22[0x17] = uStack_40;
    puVar22[0x18] = local_98;
    puVar22[0x19] = uStack_90;
    puVar22[0x1a] = local_88;
    puVar22[0x1b] = uStack_80;
    puVar22[0x1c] = local_78;
    puVar22[0x1d] = uStack_70;
    puVar22[0x1e] = local_68;
    puVar22[0x1f] = uStack_60;
    *(undefined4 *)(puVar22 + 0x20) = local_58;
    *(undefined4 *)((longlong)puVar22 + 0x104) = uStack_54;
    *(undefined4 *)(puVar22 + 0x21) = uStack_50;
    *(undefined4 *)((longlong)puVar22 + 0x10c) = uStack_4c;
    puVar22[0x22] = local_48;
    puVar22[0x23] = uStack_40;
    *(int *)(puVar22 + 0x24) = iVar15;
    puVar29 = puVar22;
  }
  local_130 = puVar29;
  (*pcVar11)(lVar19 + 0x28,this,&local_130,
             &CollisionPrimitivesMechanicLocals::CollisionPrimitiveSelectionTransactionText);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSelectionChanged);
  pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar19 = (**(code **)(*(longlong *)pUVar18 + 0x2d8))(pUVar18);
  (**(code **)(*(longlong *)(lVar19 + 0x28) + 0x18))(lVar19 + 0x28);
  RebuildDrawables(this,true);
  UpdateGizmoLocation(this);
  UpdateGizmoVisibility(this);
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  bVar14 = local_e8._12_4_ != 0;
  local_e8._8_8_ = (ulonglong)(uint)local_e8._12_4_ << 0x20;
  if (bVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// BeginHoverSequenceHitTest @ 14caec3c0

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
UCollisionPrimitivesMechanic::BeginHoverSequenceHitTest
          (UCollisionPrimitivesMechanic *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  HitTest((UCollisionPrimitivesMechanic *)&this[-1].GizmoStartRotation.W,param_1,
          __return_storage_ptr__);
  return __return_storage_ptr__;
}

// ClearHover @ 14caf4500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCollisionPrimitivesMechanic::ClearHover(UCollisionPrimitivesMechanic *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = this->HoveredPrimitiveID;
  if (-1 < (int)uVar1) {
    uVar4 = 0;
    if ((int)uVar1 < (this->PrimitiveRenderData).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
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
    iVar5 = *(int *)((this->PrimitiveRenderData).AllocatorInstance.Data +
                    (longlong)(int)uVar1 * 0x80 + 8);
    while( true ) {
      uVar1 = this->HoveredPrimitiveID;
      uVar4 = 0;
      if ((int)uVar1 < (this->PrimitiveRenderData).ArrayNum) {
        uVar4 = ~uVar1 >> 0x1f;
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
      if (*(int *)((this->PrimitiveRenderData).AllocatorInstance.Data +
                  (longlong)(int)uVar1 * 0x80 + 0xc) <= iVar5) break;
      ULineSetComponent::SetLineColor
                ((this->DrawnPrimitiveEdges).field0_0x0.DebugPtr,iVar5,&this->PreHoverPrimitiveColor
                );
      iVar5 = iVar5 + 1;
    }
    this->HoveredPrimitiveID = -1;
  }
  return;
}

// DeleteAllPrimitives @ 14caff8f0

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
UCollisionPrimitivesMechanic::DeleteAllPrimitives(UCollisionPrimitivesMechanic *this)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  int iVar2;
  FPhysicsDataCollection *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  FKAggregateGeom *pFVar5;
  UTransformProxy *pUVar6;
  FKAggregateGeom *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  code *pcVar9;
  bool bVar10;
  TSharedRef<FKAggregateGeom,1> *pTVar11;
  UObject *pUVar12;
  longlong lVar13;
  FText *pFVar14;
  atomic<int> *paVar15;
  undefined1 auStackY_168 [32];
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  TSharedRef<FKAggregateGeom,1> local_118;
  FText local_108;
  TSharedRef<FKAggregateGeom,1> local_f8;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  ForElementType<FSetElementId> local_a8;
  int local_a0;
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
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (((this->PhysicsData).Object == (FPhysicsDataCollection *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar3 = (this->PhysicsData).Object;
  if ((pFVar3 == (FPhysicsDataCollection *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = MakeShared<FKAggregateGeom,1,FKAggregateGeom_&>
                      (&local_118,&((this->PhysicsData).Object)->AggGeom);
  pTVar4 = (pTVar11->SharedReferenceCount).ReferenceController;
  pFVar5 = pTVar11->Object;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_118.SharedReferenceCount.ReferenceController);
  FKAggregateGeom::EmptyElements(&pFVar3->AggGeom);
  pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar13 = (**(code **)(*(longlong *)pUVar12 + 0x2d8))(pUVar12);
  pcVar9 = *(code **)(*(longlong *)(lVar13 + 0x28) + 0x10);
  pFVar14 = FText::AsLocalizable_Advanced_LocText
                      (&local_108,L"UCollisionPrimitivesMechanic",L"DeleteAllUndo",
                       L"Delete All Collision Primitives");
  (*pcVar9)(lVar13 + 0x28,pFVar14);
  if (local_108.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_108.TextData.Reference + 0x10))();
  }
  local_bc = 0x80;
  this_00 = &this->SelectedPrimitiveIDs;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8,this_00);
  bVar10 = 1 < (this->SelectedPrimitiveIDs).HashSize;
  if (!bVar10) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar1 = &(this->SelectedPrimitiveIDs).Elements.field_0xc;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x2c;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->SelectedPrimitiveIDs).Elements.field_0x10,0);
  }
  if (bVar10) {
    (this->SelectedPrimitiveIDs).HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  pUVar6 = (this->CurrentActiveProxy).field0_0x0.DebugPtr;
  (**(code **)(pUVar6->_padding_ + 0x2c0))(pUVar6,&local_98);
  pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar13 = (**(code **)(*(longlong *)pUVar12 + 0x2d8))(pUVar12);
  pcVar9 = *(code **)(*(longlong *)(lVar13 + 0x28) + 0x20);
  local_130 = ::operator_new(0x130);
  if (local_130 != (undefined8 *)0x0) {
    iVar2 = this->CurrentChangeStamp;
    *local_130 = &___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_;
    *(undefined8 *)
     &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(local_130 + 1))->Elements = 0;
    local_130[2] = 0;
    local_130[5] = 0;
    *(undefined4 *)(local_130 + 6) = 0;
    *(undefined4 *)((longlong)local_130 + 0x34) = 0x80;
    *(undefined4 *)(local_130 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)local_130 + 0x3c) = 0;
    local_130[9] = 0;
    *(undefined4 *)(local_130 + 10) = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(local_130 + 1),
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_e8);
    *(undefined1 *)(local_130 + 0xb) = 0;
    local_130[0xc] = local_98;
    local_130[0xd] = uStack_90;
    local_130[0xe] = local_88;
    local_130[0xf] = uStack_80;
    local_130[0x10] = local_78;
    local_130[0x11] = uStack_70;
    local_130[0x12] = local_68;
    local_130[0x13] = uStack_60;
    local_130[0x14] = CONCAT44(uStack_54,local_58);
    local_130[0x15] = CONCAT44(uStack_4c,uStack_50);
    local_130[0x16] = local_48;
    local_130[0x17] = uStack_40;
    local_130[0x18] = local_98;
    local_130[0x19] = uStack_90;
    local_130[0x1a] = local_88;
    local_130[0x1b] = uStack_80;
    local_130[0x1c] = local_78;
    local_130[0x1d] = uStack_70;
    local_130[0x1e] = local_68;
    local_130[0x1f] = uStack_60;
    *(undefined4 *)(local_130 + 0x20) = local_58;
    *(undefined4 *)((longlong)local_130 + 0x104) = uStack_54;
    *(undefined4 *)(local_130 + 0x21) = uStack_50;
    *(undefined4 *)((longlong)local_130 + 0x10c) = uStack_4c;
    local_130[0x22] = local_48;
    local_130[0x23] = uStack_40;
    *(int *)(local_130 + 0x24) = iVar2;
  }
  (*pcVar9)(lVar13 + 0x28,this,&local_130,
            &CollisionPrimitivesMechanicLocals::CollisionPrimitiveDeselectionTransactionText);
  pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar13 = (**(code **)(*(longlong *)pUVar12 + 0x2d8))(pUVar12);
  pcVar9 = *(code **)(*(longlong *)(lVar13 + 0x28) + 0x20);
  local_128 = ::operator_new(0x130);
  if (local_128 == (undefined8 *)0x0) {
    local_128 = (undefined8 *)0x0;
  }
  else {
    iVar2 = this->CurrentChangeStamp;
    *local_128 = &___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_;
    *(undefined8 *)
     &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(local_128 + 1))->Elements = 0;
    local_128[2] = 0;
    local_128[5] = 0;
    *(undefined4 *)(local_128 + 6) = 0;
    *(undefined4 *)((longlong)local_128 + 0x34) = 0x80;
    *(undefined4 *)(local_128 + 7) = 0xffffffff;
    *(undefined4 *)((longlong)local_128 + 0x3c) = 0;
    local_128[9] = 0;
    *(undefined4 *)(local_128 + 10) = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(local_128 + 1),this_00);
    *(undefined1 *)(local_128 + 0xb) = 1;
    local_128[0xc] = local_98;
    local_128[0xd] = uStack_90;
    local_128[0xe] = local_88;
    local_128[0xf] = uStack_80;
    local_128[0x10] = local_78;
    local_128[0x11] = uStack_70;
    local_128[0x12] = local_68;
    local_128[0x13] = uStack_60;
    local_128[0x14] = CONCAT44(uStack_54,local_58);
    local_128[0x15] = CONCAT44(uStack_4c,uStack_50);
    local_128[0x16] = local_48;
    local_128[0x17] = uStack_40;
    local_128[0x18] = local_98;
    local_128[0x19] = uStack_90;
    local_128[0x1a] = local_88;
    local_128[0x1b] = uStack_80;
    local_128[0x1c] = local_78;
    local_128[0x1d] = uStack_70;
    local_128[0x1e] = local_68;
    local_128[0x1f] = uStack_60;
    *(undefined4 *)(local_128 + 0x20) = local_58;
    *(undefined4 *)((longlong)local_128 + 0x104) = uStack_54;
    *(undefined4 *)(local_128 + 0x21) = uStack_50;
    *(undefined4 *)((longlong)local_128 + 0x10c) = uStack_4c;
    local_128[0x22] = local_48;
    local_128[0x23] = uStack_40;
    *(int *)(local_128 + 0x24) = iVar2;
  }
  (*pcVar9)(lVar13 + 0x28,this,&local_128,
            &CollisionPrimitivesMechanicLocals::CollisionPrimitiveSelectionTransactionText);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSelectionChanged);
  pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar13 = (**(code **)(*(longlong *)pUVar12 + 0x2d8))(pUVar12);
  pcVar9 = *(code **)(*(longlong *)(lVar13 + 0x28) + 0x20);
  if (((this->PhysicsData).Object == (FPhysicsDataCollection *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar11 = MakeShared<FKAggregateGeom,1,FKAggregateGeom_&>
                      (&local_f8,&((this->PhysicsData).Object)->AggGeom);
  local_120 = ::operator_new(0x30);
  if (local_120 == (undefined8 *)0x0) {
    local_120 = (undefined8 *)0x0;
  }
  else {
    pFVar7 = pTVar11->Object;
    pTVar8 = (pTVar11->SharedReferenceCount).ReferenceController;
    iVar2 = this->CurrentChangeStamp;
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      paVar15 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar15 = &pTVar8->SharedReferenceCount;
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
    }
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      *local_120 = &___7FCollisionPrimitivesMechanicGeometryChange_UCollisionPrimitivesMechanic__6B_
      ;
      local_120[1] = pFVar5;
      local_120[2] = 0;
    }
    else {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      *local_120 = &___7FCollisionPrimitivesMechanicGeometryChange_UCollisionPrimitivesMechanic__6B_
      ;
      local_120[1] = pFVar5;
      local_120[2] = pTVar4;
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_120[3] = pFVar7;
    local_120[4] = pTVar8;
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
    }
    *(int *)(local_120 + 5) = iVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
  (*pcVar9)(lVar13 + 0x28,this,&local_120,
            &CollisionPrimitivesMechanicLocals::CollisionPrimitiveMovementTransactionText);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnCollisionGeometryChanged);
  pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar13 = (**(code **)(*(longlong *)pUVar12 + 0x2d8))(pUVar12);
  (**(code **)(*(longlong *)(lVar13 + 0x28) + 0x18))(lVar13 + 0x28);
  RebuildDrawables(this,true);
  UpdateGizmoLocation(this);
  UpdateGizmoVisibility(this);
  local_a0 = 0;
  if (local_a8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_a8);
  }
  iVar2 = SUB84(local_e8._8_8_,4);
  local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b8 = 0xffffffff;
  local_b4 = 0;
  local_c0 = 0;
  if (0x80 < local_bc) {
    local_bc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_e8._0_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// DeleteSelectedPrimitive @ 14cb005e0

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
UCollisionPrimitivesMechanic::DeleteSelectedPrimitive(UCollisionPrimitivesMechanic *this)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  FPhysicsDataCollection *pFVar2;
  undefined8 *puVar3;
  UTransformProxy *pUVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  FScriptContainerElement *pFVar7;
  UCollisionPrimitivesMechanic *this_01;
  bool bVar8;
  TSharedRef<FKAggregateGeom,1> *pTVar9;
  int *piVar10;
  UObject *pUVar11;
  longlong lVar12;
  FText *pFVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  FKSphereElem *this_02;
  FKBoxElem *this_03;
  FKSphylElem *this_04;
  FKConvexElem *this_05;
  FKTaperedCapsuleElem *this_06;
  FKShapeElem *pFVar18;
  FKAggregateGeom *pFVar19;
  atomic<int> *paVar20;
  int iVar21;
  ForAnyElementType FVar22;
  undefined1 auStackY_1a8 [32];
  undefined1 local_178;
  FIdentityFunctor local_177 [3];
  int local_174;
  uint local_170;
  TArray<int,TSizedDefaultAllocator<32>_> local_168;
  FKAggregateGeom *local_158;
  TReferenceControllerBase<1> *local_150;
  FScriptContainerElement *local_148;
  UCollisionPrimitivesMechanic *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  TSharedRef<FKAggregateGeom,1> local_120;
  FText local_110;
  TSharedRef<FKAggregateGeom,1> local_100;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_174 = 0;
  local_140 = this;
  if (((this->PhysicsData).Object == (FPhysicsDataCollection *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar2 = (this->PhysicsData).Object;
  if ((pFVar2 == (FPhysicsDataCollection *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar9 = MakeShared<FKAggregateGeom,1,FKAggregateGeom_&>
                     (&local_120,&((this->PhysicsData).Object)->AggGeom);
  local_158 = pTVar9->Object;
  local_150 = (pTVar9->SharedReferenceCount).ReferenceController;
  if (local_150 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_150->SharedReferenceCount = (atomic<int>)((int)local_150->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_120.SharedReferenceCount.ReferenceController);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
            (&this->SelectedPrimitiveIDs,&local_168);
  AlgoImpl::IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,TLess<void>_>_>
            ((int *)local_168.AllocatorInstance.Data,local_168.ArrayNum,local_177[0],
             (TLess<void> *)local_177);
  uVar15 = (ulonglong)local_168.ArrayNum;
  paVar20 = (atomic<int> *)&DAT_00000008;
  local_170 = local_168.ArrayNum;
  local_148 = local_168.AllocatorInstance.Data + uVar15 * 4;
  FVar22.Data = local_168.AllocatorInstance.Data;
  iVar21 = local_174;
  do {
    pFVar7 = local_148;
    if (local_168.ArrayNum != (uint)uVar15) {
      local_178 = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_178);
    }
    this_01 = local_140;
    if (FVar22.Data == pFVar7) {
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_140->field_0x28);
      lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x2d8))(pUVar11);
      pcVar6 = *(code **)(*(longlong *)(lVar12 + 0x28) + 0x10);
      pFVar13 = FText::AsLocalizable_Advanced_LocText
                          (&local_110,L"UCollisionPrimitivesMechanic",L"DeleteSelectionUndo",
                           L"Delete Selected Collision Primitives");
      (*pcVar6)(lVar12 + 0x28,pFVar13);
      if (local_110.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_110.TextData.Reference + 0x10))();
      }
      local_88.Elements._44_4_ = 0x80;
      this_00 = &this_01->SelectedPrimitiveIDs;
      local_88.Elements._0_8_ = 0;
      local_88.Elements._8_8_ = 0;
      local_88.Elements._32_8_ = 0;
      local_88.Elements._40_4_ = 0;
      local_88.Elements._48_4_ = 0xffffffff;
      local_88.Elements._52_4_ = 0;
      local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_88.HashSize = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=(&local_88,this_00);
      bVar8 = 1 < (this_01->SelectedPrimitiveIDs).HashSize;
      if (!bVar8) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
      }
      puVar1 = &(this_01->SelectedPrimitiveIDs).Elements.field_0xc;
      *(undefined4 *)&(this_01->SelectedPrimitiveIDs).Elements.field_0x8 = 0;
      if (*(int *)puVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
      }
      *(undefined4 *)&(this_01->SelectedPrimitiveIDs).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this_01->SelectedPrimitiveIDs).Elements.field_0x34 = 0;
      iVar21 = *(int *)&(this_01->SelectedPrimitiveIDs).Elements.field_0x2c;
      *(undefined4 *)&(this_01->SelectedPrimitiveIDs).Elements.field_0x28 = 0;
      if ((iVar21 < 0) || (0x80 < iVar21)) {
        *(undefined4 *)&(this_01->SelectedPrimitiveIDs).Elements.field_0x2c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)
                   &(this_01->SelectedPrimitiveIDs).Elements.field_0x10,0);
      }
      if (bVar8) {
        (this_01->SelectedPrimitiveIDs).HashSize = 1;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
      }
      pUVar4 = (this_01->CurrentActiveProxy).field0_0x0.DebugPtr;
      (**(code **)(pUVar4->_padding_ + 0x2c0))(pUVar4,&local_e8);
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_01->field_0x28);
      lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x2d8))(pUVar11);
      pcVar6 = *(code **)(*(longlong *)(lVar12 + 0x28) + 0x20);
      local_138 = ::operator_new(0x130);
      if (local_138 != (undefined8 *)0x0) {
        iVar21 = this_01->CurrentChangeStamp;
        *local_138 = &
                     ___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_
        ;
        *(undefined8 *)
         &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(local_138 + 1))->Elements = 0;
        local_138[2] = 0;
        local_138[5] = 0;
        *(undefined4 *)(local_138 + 6) = 0;
        *(undefined4 *)((longlong)local_138 + 0x34) = 0x80;
        *(undefined4 *)(local_138 + 7) = 0xffffffff;
        *(undefined4 *)((longlong)local_138 + 0x3c) = 0;
        local_138[9] = 0;
        *(undefined4 *)(local_138 + 10) = 0;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(local_138 + 1),
                   &local_88);
        *(undefined1 *)(local_138 + 0xb) = 0;
        local_138[0xc] = local_e8;
        local_138[0xd] = uStack_e0;
        local_138[0xe] = local_d8;
        local_138[0xf] = uStack_d0;
        local_138[0x10] = local_c8;
        local_138[0x11] = uStack_c0;
        local_138[0x12] = local_b8;
        local_138[0x13] = uStack_b0;
        local_138[0x14] = CONCAT44(uStack_a4,local_a8);
        local_138[0x15] = CONCAT44(uStack_9c,uStack_a0);
        local_138[0x16] = local_98;
        local_138[0x17] = uStack_90;
        local_138[0x18] = local_e8;
        local_138[0x19] = uStack_e0;
        local_138[0x1a] = local_d8;
        local_138[0x1b] = uStack_d0;
        local_138[0x1c] = local_c8;
        local_138[0x1d] = uStack_c0;
        local_138[0x1e] = local_b8;
        local_138[0x1f] = uStack_b0;
        *(undefined4 *)(local_138 + 0x20) = local_a8;
        *(undefined4 *)((longlong)local_138 + 0x104) = uStack_a4;
        *(undefined4 *)(local_138 + 0x21) = uStack_a0;
        *(undefined4 *)((longlong)local_138 + 0x10c) = uStack_9c;
        local_138[0x22] = local_98;
        local_138[0x23] = uStack_90;
        *(int *)(local_138 + 0x24) = iVar21;
      }
      (*pcVar6)(lVar12 + 0x28,this_01,&local_138,
                &CollisionPrimitivesMechanicLocals::CollisionPrimitiveDeselectionTransactionText);
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_01->field_0x28);
      lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x2d8))(pUVar11);
      pcVar6 = *(code **)(*(longlong *)(lVar12 + 0x28) + 0x20);
      local_130 = ::operator_new(0x130);
      if (local_130 == (undefined8 *)0x0) {
        local_130 = (undefined8 *)0x0;
      }
      else {
        iVar21 = this_01->CurrentChangeStamp;
        *local_130 = &
                     ___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_
        ;
        *(undefined8 *)
         &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(local_130 + 1))->Elements = 0;
        local_130[2] = 0;
        local_130[5] = 0;
        *(undefined4 *)(local_130 + 6) = 0;
        *(undefined4 *)((longlong)local_130 + 0x34) = 0x80;
        *(undefined4 *)(local_130 + 7) = 0xffffffff;
        *(undefined4 *)((longlong)local_130 + 0x3c) = 0;
        local_130[9] = 0;
        *(undefined4 *)(local_130 + 10) = 0;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(local_130 + 1),
                   &this_01->SelectedPrimitiveIDs);
        *(undefined1 *)(local_130 + 0xb) = 1;
        local_130[0xc] = local_e8;
        local_130[0xd] = uStack_e0;
        local_130[0xe] = local_d8;
        local_130[0xf] = uStack_d0;
        local_130[0x10] = local_c8;
        local_130[0x11] = uStack_c0;
        local_130[0x12] = local_b8;
        local_130[0x13] = uStack_b0;
        local_130[0x14] = CONCAT44(uStack_a4,local_a8);
        local_130[0x15] = CONCAT44(uStack_9c,uStack_a0);
        local_130[0x16] = local_98;
        local_130[0x17] = uStack_90;
        local_130[0x18] = local_e8;
        local_130[0x19] = uStack_e0;
        local_130[0x1a] = local_d8;
        local_130[0x1b] = uStack_d0;
        local_130[0x1c] = local_c8;
        local_130[0x1d] = uStack_c0;
        local_130[0x1e] = local_b8;
        local_130[0x1f] = uStack_b0;
        *(undefined4 *)(local_130 + 0x20) = local_a8;
        *(undefined4 *)((longlong)local_130 + 0x104) = uStack_a4;
        *(undefined4 *)(local_130 + 0x21) = uStack_a0;
        *(undefined4 *)((longlong)local_130 + 0x10c) = uStack_9c;
        local_130[0x22] = local_98;
        local_130[0x23] = uStack_90;
        *(int *)(local_130 + 0x24) = iVar21;
      }
      (*pcVar6)(lVar12 + 0x28,this_01,&local_130,
                &CollisionPrimitivesMechanicLocals::CollisionPrimitiveSelectionTransactionText);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this_01->OnSelectionChanged);
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_01->field_0x28);
      lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x2d8))(pUVar11);
      pcVar6 = *(code **)(*(longlong *)(lVar12 + 0x28) + 0x20);
      if (((this_01->PhysicsData).Object == (FPhysicsDataCollection *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar9 = MakeShared<FKAggregateGeom,1,FKAggregateGeom_&>
                         (&local_100,&((this_01->PhysicsData).Object)->AggGeom);
      local_128 = ::operator_new(0x30);
      if (local_128 == (undefined8 *)0x0) {
        local_128 = (undefined8 *)0x0;
      }
      else {
        pFVar19 = pTVar9->Object;
        pTVar5 = (pTVar9->SharedReferenceCount).ReferenceController;
        iVar21 = this_01->CurrentChangeStamp;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          paVar20 = &pTVar5->SharedReferenceCount;
          LOCK();
          *paVar20 = (atomic<int>)((int)*paVar20 + 1);
          UNLOCK();
        }
        if (local_150 == (TReferenceControllerBase<1> *)0x0) {
          *local_128 = &
                       ___7FCollisionPrimitivesMechanicGeometryChange_UCollisionPrimitivesMechanic__6B_
          ;
          local_128[1] = local_158;
          local_128[2] = 0;
        }
        else {
          LOCK();
          local_150->SharedReferenceCount = (atomic<int>)((int)local_150->SharedReferenceCount + 1);
          UNLOCK();
          *local_128 = &
                       ___7FCollisionPrimitivesMechanicGeometryChange_UCollisionPrimitivesMechanic__6B_
          ;
          local_128[1] = local_158;
          local_128[2] = local_150;
          LOCK();
          local_150->SharedReferenceCount = (atomic<int>)((int)local_150->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_128[3] = pFVar19;
        local_128[4] = pTVar5;
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar20 = (atomic<int>)((int)*paVar20 + 1);
          UNLOCK();
        }
        *(int *)(local_128 + 5) = iVar21;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_150);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      }
      (*pcVar6)(lVar12 + 0x28,this_01,&local_128,
                &CollisionPrimitivesMechanicLocals::CollisionPrimitiveMovementTransactionText);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_100.SharedReferenceCount.ReferenceController);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this_01->OnCollisionGeometryChanged);
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_01->field_0x28);
      lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x2d8))(pUVar11);
      (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x18))(lVar12 + 0x28);
      RebuildDrawables(this_01,true);
      UpdateGizmoLocation(this_01);
      UpdateGizmoVisibility(this_01);
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      if (local_168.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_150)
      ;
      return;
    }
    uVar17 = *(int *)FVar22.Data - iVar21;
    if (((pFVar2->AggGeom).SkinnedTriangleMeshElems.ArrayNum +
         (pFVar2->AggGeom).MLLevelSetElems.ArrayNum +
         (pFVar2->AggGeom).SkinnedLevelSetElems.ArrayNum + (pFVar2->AggGeom).SphylElems.ArrayNum +
         (pFVar2->AggGeom).LevelSetElems.ArrayNum + (pFVar2->AggGeom).BoxElems.ArrayNum +
         (pFVar2->AggGeom).TaperedCapsuleElems.ArrayNum + (pFVar2->AggGeom).SphereElems.ArrayNum +
         (pFVar2->AggGeom).ConvexElems.ArrayNum <= (int)uVar17) &&
       (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4021748204209961600>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\CollisionPrimitivesMechanic.cpp"
                           ,0x580,"Index < AggGeom.GetElementCount()"), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar14 = (pFVar2->AggGeom).SphereElems.ArrayNum;
    iVar21 = iVar21 + 1;
    if ((int)uVar17 < iVar14) {
      if (((int)uVar17 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_02 = (FKSphereElem *)
                ((pFVar2->AggGeom).SphereElems.AllocatorInstance.Data + (longlong)(int)uVar17 * 0x50
                );
      FKSphereElem::~FKSphereElem(this_02);
      iVar14 = (pFVar2->AggGeom).SphereElems.ArrayNum + ~uVar17;
      if (iVar14 != 0) {
        memmove(this_02,this_02 + 1,(longlong)iVar14 * 0x50);
      }
      piVar10 = &(pFVar2->AggGeom).SphereElems.ArrayNum;
      *piVar10 = *piVar10 + -1;
      piVar10 = &(pFVar2->AggGeom).SphereElems.ArrayMax;
      iVar14 = (pFVar2->AggGeom).SphereElems.ArrayNum;
      uVar17 = 0x50;
      pFVar19 = &pFVar2->AggGeom;
LAB_14cb00bd9:
      uVar16 = 8;
LAB_14cb00bdc:
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (uVar17,uVar16,(ForAnyElementType *)pFVar19,iVar14,piVar10);
    }
    else {
      uVar17 = uVar17 - iVar14;
      iVar14 = (pFVar2->AggGeom).BoxElems.ArrayNum;
      if ((int)uVar17 < iVar14) {
        if (((int)uVar17 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_03 = (FKBoxElem *)
                  ((pFVar2->AggGeom).BoxElems.AllocatorInstance.Data + (longlong)(int)uVar17 * 0x70)
        ;
        FKBoxElem::~FKBoxElem(this_03);
        iVar14 = (pFVar2->AggGeom).BoxElems.ArrayNum + ~uVar17;
        if (iVar14 != 0) {
          memmove(this_03,this_03 + 1,(longlong)iVar14 * 0x70);
        }
        piVar10 = &(pFVar2->AggGeom).BoxElems.ArrayNum;
        *piVar10 = *piVar10 + -1;
        piVar10 = &(pFVar2->AggGeom).BoxElems.ArrayMax;
        iVar14 = (pFVar2->AggGeom).BoxElems.ArrayNum;
        pFVar19 = (FKAggregateGeom *)&(pFVar2->AggGeom).BoxElems;
        uVar17 = 0x70;
        goto LAB_14cb00bd9;
      }
      uVar17 = uVar17 - iVar14;
      iVar14 = (pFVar2->AggGeom).SphylElems.ArrayNum;
      if ((int)uVar17 < iVar14) {
        if (((int)uVar17 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_04 = (FKSphylElem *)
                  ((pFVar2->AggGeom).SphylElems.AllocatorInstance.Data +
                  (longlong)(int)uVar17 * 0x68);
        FKSphylElem::~FKSphylElem(this_04);
        iVar14 = (pFVar2->AggGeom).SphylElems.ArrayNum + ~uVar17;
        if (iVar14 != 0) {
          memmove(this_04,this_04 + 1,(longlong)iVar14 * 0x68);
        }
        piVar10 = &(pFVar2->AggGeom).SphylElems.ArrayNum;
        *piVar10 = *piVar10 + -1;
        piVar10 = &(pFVar2->AggGeom).SphylElems.ArrayMax;
        iVar14 = (pFVar2->AggGeom).SphylElems.ArrayNum;
        pFVar19 = (FKAggregateGeom *)&(pFVar2->AggGeom).SphylElems;
        uVar17 = 0x68;
        goto LAB_14cb00bd9;
      }
      uVar17 = uVar17 - iVar14;
      iVar14 = (pFVar2->AggGeom).ConvexElems.ArrayNum;
      if ((int)uVar17 < iVar14) {
        if (((int)uVar17 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_05 = (FKConvexElem *)
                  ((pFVar2->AggGeom).ConvexElems.AllocatorInstance.Data +
                  (longlong)(int)uVar17 * 0x100);
        FKConvexElem::~FKConvexElem(this_05);
        iVar14 = (pFVar2->AggGeom).ConvexElems.ArrayNum + ~uVar17;
        if (iVar14 != 0) {
          memmove(this_05,this_05 + 1,(longlong)iVar14 << 8);
        }
        piVar10 = &(pFVar2->AggGeom).ConvexElems.ArrayNum;
        *piVar10 = *piVar10 + -1;
        piVar10 = &(pFVar2->AggGeom).ConvexElems.ArrayMax;
        iVar14 = (pFVar2->AggGeom).ConvexElems.ArrayNum;
        pFVar19 = (FKAggregateGeom *)&(pFVar2->AggGeom).ConvexElems;
        uVar16 = 0x10;
        uVar17 = 0x100;
        goto LAB_14cb00bdc;
      }
      uVar17 = uVar17 - iVar14;
      iVar14 = (pFVar2->AggGeom).TaperedCapsuleElems.ArrayNum;
      if ((int)uVar17 < iVar14) {
        if (((int)uVar17 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_06 = (FKTaperedCapsuleElem *)
                  ((pFVar2->AggGeom).TaperedCapsuleElems.AllocatorInstance.Data +
                  (longlong)(int)uVar17 * 0x70);
        FKTaperedCapsuleElem::~FKTaperedCapsuleElem(this_06);
        iVar14 = (pFVar2->AggGeom).TaperedCapsuleElems.ArrayNum + ~uVar17;
        if (iVar14 != 0) {
          memmove(this_06,this_06 + 1,(longlong)iVar14 * 0x70);
        }
        piVar10 = &(pFVar2->AggGeom).TaperedCapsuleElems.ArrayNum;
        *piVar10 = *piVar10 + -1;
        piVar10 = &(pFVar2->AggGeom).TaperedCapsuleElems.ArrayMax;
        iVar14 = (pFVar2->AggGeom).TaperedCapsuleElems.ArrayNum;
        pFVar19 = (FKAggregateGeom *)&(pFVar2->AggGeom).TaperedCapsuleElems;
        uVar17 = 0x70;
        goto LAB_14cb00bd9;
      }
      uVar17 = uVar17 - iVar14;
      iVar14 = (pFVar2->AggGeom).LevelSetElems.ArrayNum;
      if ((int)uVar17 < iVar14) {
        if (((int)uVar17 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar18 = (FKShapeElem *)
                  ((pFVar2->AggGeom).LevelSetElems.AllocatorInstance.Data +
                  (longlong)(int)uVar17 * 0xa0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)&pFVar18[3].RestOffset);
        FKShapeElem::~FKShapeElem(pFVar18);
        iVar14 = (pFVar2->AggGeom).LevelSetElems.ArrayNum + ~uVar17;
        if (iVar14 != 0) {
          memmove(pFVar18,&pFVar18[3].Name.Number,(longlong)iVar14 * 0xa0);
        }
        piVar10 = &(pFVar2->AggGeom).LevelSetElems.ArrayNum;
        *piVar10 = *piVar10 + -1;
        piVar10 = &(pFVar2->AggGeom).LevelSetElems.ArrayMax;
        iVar14 = (pFVar2->AggGeom).LevelSetElems.ArrayNum;
        pFVar19 = (FKAggregateGeom *)&(pFVar2->AggGeom).LevelSetElems;
        uVar16 = 0x10;
        uVar17 = 0xa0;
        goto LAB_14cb00bdc;
      }
      uVar17 = uVar17 - iVar14;
      if ((int)uVar17 < (pFVar2->AggGeom).SkinnedLevelSetElems.ArrayNum) {
        if (((int)uVar17 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar18 = (FKShapeElem *)
                  ((pFVar2->AggGeom).SkinnedLevelSetElems.AllocatorInstance.Data +
                  (longlong)(int)uVar17 * 0x38);
        puVar3 = (undefined8 *)pFVar18[1]._padding_;
        if (puVar3 != (undefined8 *)0x0) {
          LOCK();
          piVar10 = (int *)(puVar3 + 1);
          iVar14 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if ((iVar14 == 1) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
            (**(code **)*puVar3)(puVar3,1);
          }
        }
        FKShapeElem::~FKShapeElem(pFVar18);
        iVar14 = (pFVar2->AggGeom).SkinnedLevelSetElems.ArrayNum + ~uVar17;
        if (iVar14 != 0) {
          memmove(pFVar18,&pFVar18[1].RestOffset,(longlong)iVar14 * 0x38);
        }
        piVar10 = &(pFVar2->AggGeom).SkinnedLevelSetElems.ArrayNum;
        *piVar10 = *piVar10 + -1;
        piVar10 = &(pFVar2->AggGeom).SkinnedLevelSetElems.ArrayMax;
        iVar14 = (pFVar2->AggGeom).SkinnedLevelSetElems.ArrayNum;
        pFVar19 = (FKAggregateGeom *)&(pFVar2->AggGeom).SkinnedLevelSetElems;
        uVar17 = 0x38;
        goto LAB_14cb00bd9;
      }
    }
    uVar15 = (ulonglong)local_170;
    FVar22.Data = FVar22.Data + 4;
  } while( true );
}

// DeselectPrimitive @ 14cb01370

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
UCollisionPrimitivesMechanic::DeselectPrimitive(UCollisionPrimitivesMechanic *this,int param_1)

{
  int iVar1;
  int local_res10 [6];
  
  if (*(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 !=
      *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34) {
    local_res10[0] = param_1;
    iVar1 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                      (&this->SelectedPrimitiveIDs,param_1,local_res10);
    return iVar1 != 0;
  }
  return false;
}

// DrawHUD @ 14cb02780

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
UCollisionPrimitivesMechanic::DrawHUD
          (UCollisionPrimitivesMechanic *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb0278a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(this->MarqueeMechanic).field0_0x0.DebugPtr + 0x2e0))();
  return;
}

// DuplicateSelectedPrimitive @ 14cb02e20

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
UCollisionPrimitivesMechanic::DuplicateSelectedPrimitive(UCollisionPrimitivesMechanic *this)

{
  int *piVar1;
  TArray<FKBoxElem,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FKSphylElem,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FKConvexElem,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FKLevelSetElem,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  FPhysicsDataCollection *pFVar10;
  undefined1 *puVar11;
  FKAggregateGeom *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  UTransformProxy *pUVar14;
  code *pcVar15;
  UCollisionPrimitivesMechanic *this_00;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar16;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar17;
  bool bVar18;
  int iVar19;
  TSharedRef<FKAggregateGeom,1> *pTVar20;
  FKConvexElem *pFVar21;
  UObject *pUVar22;
  FText *pFVar23;
  longlong lVar24;
  FScriptContainerElement *pFVar25;
  int iVar26;
  uint uVar27;
  atomic<int> *paVar28;
  uint uVar29;
  int iVar30;
  undefined1 *puVar31;
  uint *puVar32;
  undefined1 auStackY_5c8 [32];
  undefined1 local_578 [8];
  ForAnyElementType local_570;
  undefined8 local_568;
  ForAnyElementType local_560;
  undefined8 local_558;
  ForAnyElementType local_550;
  undefined8 local_548;
  ForAnyElementType local_540;
  undefined8 local_538;
  ForAnyElementType local_530;
  undefined8 local_528;
  int local_520;
  int local_51c;
  int local_518;
  int local_514;
  int local_510 [2];
  TReferenceControllerBase<1> *local_508;
  FKAggregateGeom *local_500;
  undefined1 local_4f8 [32];
  undefined4 local_4d8;
  undefined1 *local_4d0;
  TVector<double>_u_0 local_4c8;
  float local_4b0;
  undefined1 local_4a8 [32];
  undefined4 local_488;
  undefined1 *local_480;
  TVector<double>_u_0 local_478;
  double local_460;
  double dStack_458;
  double local_450;
  float local_448;
  float local_444;
  undefined1 local_440 [32];
  undefined4 local_420;
  undefined1 *local_418;
  TVector<double>_u_0 local_410;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  float local_3e0;
  float local_3dc;
  float local_3d8;
  UCollisionPrimitivesMechanic *local_3d0;
  undefined8 *local_3c8;
  undefined8 *local_3c0;
  undefined8 *local_3b8;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  int local_3a4;
  int local_3a0 [2];
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_398;
  int iStack_390;
  uint uStack_38c;
  undefined1 *local_388;
  undefined4 uStack_380;
  int iStack_37c;
  int local_378;
  undefined4 uStack_374;
  int iStack_370;
  undefined4 uStack_36c;
  int local_368;
  int local_364;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_360;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_358;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_350;
  undefined8 uStack_330;
  TSharedRef<FKAggregateGeom,1> local_328;
  FText local_318;
  TSharedRef<FKAggregateGeom,1> local_308 [2];
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_278;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_228;
  undefined1 local_1d8 [32];
  Type local_1b8;
  undefined1 *local_1b0;
  __m128d local_1a8;
  __m128d local_198;
  __m128d local_188;
  __m128d local_178;
  __m128d local_168;
  __m128d local_158;
  FLevelSet *local_148;
  FSharedReferencer<1> FStack_140;
  FKConvexElem local_138;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  iVar30 = 0;
  local_530.Data = (FScriptContainerElement *)0x0;
  local_528 = 0;
  local_540.Data = (FScriptContainerElement *)0x0;
  local_538 = 0;
  local_550.Data = (FScriptContainerElement *)0x0;
  local_548 = 0;
  local_560.Data = (FScriptContainerElement *)0x0;
  local_558 = 0;
  local_570.Data = (FScriptContainerElement *)0x0;
  local_568 = 0;
  local_3d0 = this;
  if (((this->PhysicsData).Object == (FPhysicsDataCollection *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar18)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pFVar10 = (this->PhysicsData).Object;
  pFVar12 = &pFVar10->AggGeom;
  if ((pFVar10 == (FPhysicsDataCollection *)0x0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar18)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  pTVar20 = MakeShared<FKAggregateGeom,1,FKAggregateGeom_&>
                      (&local_328,&((this->PhysicsData).Object)->AggGeom);
  local_500 = pTVar20->Object;
  local_508 = (pTVar20->SharedReferenceCount).ReferenceController;
  if (local_508 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_508->SharedReferenceCount = (atomic<int>)((int)local_508->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_328.SharedReferenceCount.ReferenceController);
  local_360 = &this->SelectedPrimitiveIDs;
  iVar26 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34;
  iVar19 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8;
  if (iVar19 != iVar26) {
    local_378 = 0;
    puVar6 = &(this->SelectedPrimitiveIDs).Elements.field_0x10;
    uStack_38c = 1;
    iVar8 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x28;
    iStack_37c = iVar30;
    if (iVar8 != 0) {
      puVar32 = *(uint **)&(this->SelectedPrimitiveIDs).Elements.field_0x20;
      if (puVar32 == (uint *)0x0) {
        puVar32 = (uint *)puVar6;
      }
      uVar29 = *puVar32;
      iVar30 = 0;
      while (uVar29 == 0) {
        lVar24 = (longlong)iVar30;
        local_378 = local_378 + 0x20;
        iVar30 = iVar30 + 1;
        iStack_37c = iVar8;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar30) goto LAB_14cb02fe2;
        uVar29 = puVar32[lVar24 + 1];
      }
      uStack_38c = -uVar29 & uVar29;
      uVar7 = (ulonglong)uStack_38c * 2 + 1;
      lVar24 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_3b0 = (int)lVar24;
      iStack_37c = local_3b0 + -1 + local_378;
      if (iVar8 < iStack_37c) {
        iStack_37c = iVar8;
      }
    }
LAB_14cb02fe2:
    iStack_370 = iVar19 - iVar26;
    uVar29 = *(uint *)&(this->SelectedPrimitiveIDs).Elements.field_0x28;
    local_398 = &this->SelectedPrimitiveIDs;
    uStack_380 = 0xffffffff;
    uVar27 = uVar29 & 0xffffffe0;
    TStack_350._padding_ = CONCAT44(uStack_38c,iVar30);
    TStack_350.CurrentBitIndex = iStack_37c;
    TStack_350.UnvisitedBitMask = 0xffffffff;
    uStack_374 = local_2dc;
    TStack_350._28_4_ = local_2dc;
    TStack_350.BaseBitIndex = local_378;
    uStack_330 = CONCAT44(uStack_36c,iStack_370);
    iVar26 = (int)uVar29 >> 5;
    iStack_390 = iVar30;
    local_388 = puVar6;
    local_358 = local_398;
    TStack_350.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar6;
    if ((((int)uVar29 < 0) || (iVar8 < (int)uVar29)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar18)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pTVar16 = local_360;
    uVar9 = *(uint *)&(this->SelectedPrimitiveIDs).Elements.field_0x28;
    if (uVar29 != uVar9) {
      puVar11 = *(undefined1 **)&(this->SelectedPrimitiveIDs).Elements.field_0x20;
      puVar31 = puVar6;
      if (puVar11 != (undefined1 *)0x0) {
        puVar31 = puVar11;
      }
      uVar29 = -1 << ((byte)uVar29 & 0x1f) & *(uint *)(puVar31 + (longlong)iVar26 * 4);
      while (uVar29 == 0) {
        lVar24 = (longlong)iVar26;
        uVar27 = uVar27 + 0x20;
        iVar26 = iVar26 + 1;
        uVar29 = uVar9;
        if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar26)
        goto LAB_14cb03140;
        uVar29 = *(uint *)(puVar31 + lVar24 * 4 + 4);
      }
      uVar7 = (ulonglong)(-uVar29 & uVar29) * 2 + 1;
      lVar24 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      local_3ac = (int)lVar24;
      uVar29 = local_3ac + -1 + uVar27;
      if ((int)uVar9 < (int)uVar29) {
        uVar29 = uVar9;
      }
    }
LAB_14cb03140:
    while( true ) {
      pTVar17 = local_358;
      if (*(int *)&(local_358->Elements).field_0x8 - *(int *)&(local_358->Elements).field_0x34 !=
          (int)uStack_330) {
        local_578[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_578);
      }
      if (((TStack_350.CurrentBitIndex == uVar29) &&
          (TStack_350.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar6)) &&
         (pTVar17 == pTVar16)) break;
      pFVar21 = (FKConvexElem *)
                FKAggregateGeom::GetElement
                          (pFVar12,*(int *)(*(longlong *)&pTVar17->Elements +
                                           (longlong)TStack_350.CurrentBitIndex * 0xc));
      iVar30 = *(int *)&pFVar21->field_0x14;
      if (iVar30 == 0) {
        local_4f8._12_8_ = *(undefined8 *)&pFVar21->field_0xc;
        local_4f8._8_4_ = *(undefined4 *)&pFVar21->field_0x8;
        local_4c8._s_0.Z = (double)(pFVar21->IndexData).AllocatorInstance.Data;
        local_4c8._s_0.X = (double)(pFVar21->VertexData).AllocatorInstance.Data;
        local_4c8._s_0.Y = (double)*(undefined8 *)&(pFVar21->VertexData).ArrayNum;
        local_4f8[0x18] = pFVar21->field_0x18 & 1 | local_4f8[0x18] & 0xfe;
        local_4f8[0x19] = (FScriptContainerElement)pFVar21->field_0x19;
        local_4d0 = local_4f8;
        local_4b0 = (float)(pFVar21->IndexData).ArrayNum;
        local_4d8 = 6;
        local_4f8._0_8_ = &___7FKSphereElem__6B_;
        local_4f8._20_4_ = iVar30;
        if (((local_530.Data <= (FKSphereElem *)local_4f8) &&
            ((FScriptContainerElement *)local_4f8 <
             local_530.Data + (longlong)local_528._4_4_ * 0x50)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar30 = (int)local_528;
        if ((int)local_528 == local_528._4_4_) {
          iVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x850,&local_530,(int *)((longlong)&local_528 + 4));
        }
        local_528 = CONCAT44(local_528._4_4_,iVar30 + 1);
        pFVar25 = local_530.Data + (longlong)iVar30 * 0x50;
        *(undefined ***)&pFVar25->field_0x0 = &___7FKShapeElem__6B_;
        *(undefined4 *)(pFVar25 + 8) = local_4f8._8_4_;
        *(undefined8 *)(pFVar25 + 0xc) = local_4f8._12_8_;
        *(undefined4 *)(pFVar25 + 0x14) = local_4f8._20_4_;
        pFVar25[0x18] =
             (FScriptContainerElement)
             ((byte)pFVar25[0x18] ^ (local_4f8[0x18] ^ (byte)pFVar25[0x18]) & 1);
        pFVar25[0x19] = local_4f8[0x19];
        *(undefined4 *)(pFVar25 + 0x20) = 6;
        *(FScriptContainerElement **)(pFVar25 + 0x28) = pFVar25;
        *(undefined ***)&pFVar25->field_0x0 = &___7FKSphereElem__6B_;
        *(double *)(pFVar25 + 0x30) = local_4c8._s_0.X;
        *(double *)(pFVar25 + 0x38) = local_4c8._s_0.Y;
        *(double *)(pFVar25 + 0x40) = local_4c8._s_0.Z;
        *(float *)(pFVar25 + 0x48) = local_4b0;
        FKSphereElem::~FKSphereElem((FKSphereElem *)local_4f8);
      }
      else if (iVar30 == 1) {
        local_440._12_8_ = *(undefined8 *)&pFVar21->field_0xc;
        local_440._8_4_ = *(undefined4 *)&pFVar21->field_0x8;
        local_410._s_0.Z = (double)(pFVar21->IndexData).AllocatorInstance.Data;
        local_410._s_0.X = (double)(pFVar21->VertexData).AllocatorInstance.Data;
        local_410._s_0.Y = (double)*(undefined8 *)&(pFVar21->VertexData).ArrayNum;
        local_440[0x18] = pFVar21->field_0x18 & 1 | local_440[0x18] & 0xfe;
        local_440[0x19] = (FScriptContainerElement)pFVar21->field_0x19;
        local_3e8 = (pFVar21->ElemBox).Min.field0_0x0._s_0.Y;
        local_418 = local_440;
        local_3f8 = *(double *)&(pFVar21->IndexData).ArrayNum;
        dStack_3f0 = (pFVar21->ElemBox).Min.field0_0x0._s_0.X;
        local_3dc = *(float *)((longlong)&(pFVar21->ElemBox).Min.field0_0x0 + 0x14);
        local_3e0 = *(float *)((longlong)&(pFVar21->ElemBox).Min.field0_0x0 + 0x10);
        local_3d8 = *(float *)&(pFVar21->ElemBox).Max.field0_0x0;
        local_420 = 6;
        local_440._0_8_ = &___7FKBoxElem__6B_;
        local_440._20_4_ = iVar30;
        if (((local_540.Data <= (FKBoxElem *)local_440) &&
            ((FScriptContainerElement *)local_440 <
             local_540.Data + (longlong)local_538._4_4_ * 0x70)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar30 = (int)local_538;
        if ((int)local_538 == local_538._4_4_) {
          iVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x870,&local_540,(int *)((longlong)&local_538 + 4));
        }
        local_538 = CONCAT44(local_538._4_4_,iVar30 + 1);
        pFVar25 = local_540.Data + (longlong)iVar30 * 0x70;
        *(undefined ***)&pFVar25->field_0x0 = &___7FKShapeElem__6B_;
        *(undefined4 *)(pFVar25 + 8) = local_440._8_4_;
        *(undefined8 *)(pFVar25 + 0xc) = local_440._12_8_;
        *(undefined4 *)(pFVar25 + 0x14) = local_440._20_4_;
        pFVar25[0x18] =
             (FScriptContainerElement)
             ((byte)pFVar25[0x18] ^ (local_440[0x18] ^ (byte)pFVar25[0x18]) & 1);
        pFVar25[0x19] = local_440[0x19];
        *(undefined4 *)(pFVar25 + 0x20) = 6;
        *(FScriptContainerElement **)(pFVar25 + 0x28) = pFVar25;
        *(undefined ***)&pFVar25->field_0x0 = &___7FKBoxElem__6B_;
        *(double *)(pFVar25 + 0x30) = local_410._s_0.X;
        *(double *)(pFVar25 + 0x38) = local_410._s_0.Y;
        *(double *)(pFVar25 + 0x40) = local_410._s_0.Z;
        *(double *)(pFVar25 + 0x48) = local_3f8;
        *(double *)(pFVar25 + 0x50) = dStack_3f0;
        *(double *)(pFVar25 + 0x58) = local_3e8;
        *(float *)(pFVar25 + 0x60) = local_3e0;
        *(float *)(pFVar25 + 100) = local_3dc;
        *(float *)(pFVar25 + 0x68) = local_3d8;
        FKBoxElem::~FKBoxElem((FKBoxElem *)local_440);
      }
      else if (iVar30 == 2) {
        local_4a8._12_8_ = *(undefined8 *)&pFVar21->field_0xc;
        local_4a8._8_4_ = *(undefined4 *)&pFVar21->field_0x8;
        local_478._s_0.Z = (double)(pFVar21->IndexData).AllocatorInstance.Data;
        local_478._s_0.X = (double)(pFVar21->VertexData).AllocatorInstance.Data;
        local_478._s_0.Y = (double)*(undefined8 *)&(pFVar21->VertexData).ArrayNum;
        local_4a8[0x18] = pFVar21->field_0x18 & 1 | local_4a8[0x18] & 0xfe;
        local_4a8[0x19] = (FScriptContainerElement)pFVar21->field_0x19;
        local_450 = (pFVar21->ElemBox).Min.field0_0x0._s_0.Y;
        local_480 = local_4a8;
        local_460 = *(double *)&(pFVar21->IndexData).ArrayNum;
        dStack_458 = (pFVar21->ElemBox).Min.field0_0x0._s_0.X;
        local_444 = *(float *)((longlong)&(pFVar21->ElemBox).Min.field0_0x0 + 0x14);
        local_448 = *(float *)((longlong)&(pFVar21->ElemBox).Min.field0_0x0 + 0x10);
        local_488 = 6;
        local_4a8._0_8_ = &___7FKSphylElem__6B_;
        local_4a8._20_4_ = iVar30;
        if (((local_550.Data <= (FKSphylElem *)local_4a8) &&
            ((FScriptContainerElement *)local_4a8 <
             local_550.Data + (longlong)local_548._4_4_ * 0x68)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar30 = (int)local_548;
        if ((int)local_548 == local_548._4_4_) {
          iVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x868,&local_550,(int *)((longlong)&local_548 + 4));
        }
        local_548 = CONCAT44(local_548._4_4_,iVar30 + 1);
        pFVar25 = local_550.Data + (longlong)iVar30 * 0x68;
        *(undefined ***)&pFVar25->field_0x0 = &___7FKShapeElem__6B_;
        *(undefined4 *)(pFVar25 + 8) = local_4a8._8_4_;
        *(undefined8 *)(pFVar25 + 0xc) = local_4a8._12_8_;
        *(undefined4 *)(pFVar25 + 0x14) = local_4a8._20_4_;
        pFVar25[0x18] =
             (FScriptContainerElement)
             ((byte)pFVar25[0x18] ^ (local_4a8[0x18] ^ (byte)pFVar25[0x18]) & 1);
        pFVar25[0x19] = local_4a8[0x19];
        *(undefined4 *)(pFVar25 + 0x20) = 6;
        *(FScriptContainerElement **)(pFVar25 + 0x28) = pFVar25;
        *(undefined ***)&pFVar25->field_0x0 = &___7FKSphylElem__6B_;
        *(double *)(pFVar25 + 0x30) = local_478._s_0.X;
        *(double *)(pFVar25 + 0x38) = local_478._s_0.Y;
        *(double *)(pFVar25 + 0x40) = local_478._s_0.Z;
        *(double *)(pFVar25 + 0x48) = local_460;
        *(double *)(pFVar25 + 0x50) = dStack_458;
        *(double *)(pFVar25 + 0x58) = local_450;
        *(float *)(pFVar25 + 0x60) = local_448;
        *(float *)(pFVar25 + 100) = local_444;
        FKSphylElem::~FKSphylElem((FKSphylElem *)local_4a8);
      }
      else if (iVar30 == 3) {
        pFVar21 = FKConvexElem::FKConvexElem(&local_138,pFVar21);
        if (((local_560.Data <= pFVar21) &&
            (pFVar21 < (FKConvexElem *)(local_560.Data + (longlong)local_558._4_4_ * 0x100))) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar30 = (int)local_558;
        if ((int)local_558 == local_558._4_4_) {
          iVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x100,0x10,&local_560,(int *)((longlong)&local_558 + 4));
        }
        local_558 = CONCAT44(local_558._4_4_,iVar30 + 1);
        FKConvexElem::FKConvexElem
                  ((FKConvexElem *)(local_560.Data + (longlong)iVar30 * 0x100),pFVar21);
        FKConvexElem::~FKConvexElem(&local_138);
      }
      else if (iVar30 == 5) {
        local_1d8[0x18] = local_1d8[0x18] | 1;
        local_1d8._16_4_ = 0;
        local_1b0 = local_1d8;
        local_1d8._8_8_ = 0;
        local_1d8._20_4_ = Unknown;
        local_1d8[0x19] = '\x03';
        local_1a8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0)
        ;
        local_1a8.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_1a8.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_1b8 = AggShape;
        local_1d8._0_8_ = &___7FKLevelSetElem__6B_;
        local_198.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0)
        ;
        local_198.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_198.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_188.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0)
        ;
        local_188.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
        local_188.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_178.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0)
        ;
        local_178.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
        local_178.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_168.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0)
        ;
        local_168.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_168.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_158.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0)
        ;
        local_158.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_158.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        local_148 = (FLevelSet *)0x0;
        FStack_140.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        FKLevelSetElem::CloneElem((FKLevelSetElem *)local_1d8,(FKLevelSetElem *)pFVar21);
        if (((local_570.Data <= (FKLevelSetElem *)local_1d8) &&
            ((FScriptContainerElement *)local_1d8 <
             local_570.Data + (longlong)local_568._4_4_ * 0xa0)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
        iVar30 = (int)local_568;
        if ((int)local_568 == local_568._4_4_) {
          iVar30 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10a0,&local_570,(int *)((longlong)&local_568 + 4));
        }
        local_568 = CONCAT44(local_568._4_4_,iVar30 + 1);
        FKLevelSetElem::FKLevelSetElem
                  ((FKLevelSetElem *)(local_570.Data + (longlong)iVar30 * 0xa0),
                   (FKLevelSetElem *)local_1d8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_140.ReferenceController);
        FKShapeElem::~FKShapeElem((FKShapeElem *)local_1d8);
      }
      else {
        bVar18 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_4021748204209961683>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\CollisionPrimitivesMechanic.cpp"
                            ,0x52d,"false");
        if (bVar18) {
          pcVar15 = (code *)swi(3);
          (*pcVar15)();
          return;
        }
      }
      TStack_350.UnvisitedBitMask = TStack_350.UnvisitedBitMask & ~TStack_350._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_350);
    }
    local_278.Elements._44_4_ = 0x80;
    local_278.Elements._0_8_ = 0;
    local_278.Elements._8_8_ = 0;
    local_278.Elements._32_8_ = 0;
    local_278.Elements._40_4_ = 0;
    local_278.Elements._52_4_ = 0;
    local_278.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_278.HashSize = 0;
    local_228.Elements._0_8_ = 0;
    local_228.Elements._8_8_ = 0;
    local_228.Elements._32_8_ = 0;
    local_228.Elements._40_4_ = 0;
    local_228.Elements._52_4_ = 0;
    local_228.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_228.HashSize = 0;
    local_278.Elements._48_4_ = 0xffffffff;
    local_228.Elements._44_4_ = 0x80;
    local_228.Elements._48_4_ = 0xffffffff;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=(&local_228,pTVar16);
    this_00 = local_3d0;
    iVar30 = (pFVar10->AggGeom).SphereElems.ArrayNum;
    piVar1 = &(pFVar10->AggGeom).SphereElems.ArrayNum;
    local_520 = iVar30;
    if (iVar30 < (int)local_528 + iVar30) {
      do {
        local_520 = iVar30;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_278,&local_3a8,(bool *)&local_520);
        iVar30 = iVar30 + 1;
        local_520 = iVar30;
      } while (iVar30 < *piVar1 + (int)local_528);
    }
    if ((pFVar12 == (FKAggregateGeom *)&local_530) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar18)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    iVar30 = (int)local_528;
    paVar28 = (atomic<int> *)&DAT_00000008;
    if ((int)local_528 != 0) {
      iVar26 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x50,8,(int)local_528,(ForAnyElementType *)pFVar12,piVar1,
                          &(pFVar10->AggGeom).SphereElems.ArrayMax);
      ConstructItems<FKSphereElem,FKSphereElem,int>
                ((pFVar12->SphereElems).AllocatorInstance.Data + (longlong)iVar26 * 0x50,
                 (FKSphereElem *)local_530.Data,iVar30);
    }
    iVar26 = *piVar1;
    iVar19 = (pFVar10->AggGeom).BoxElems.ArrayNum;
    iVar30 = iVar19 + iVar26;
    local_51c = iVar30;
    if (iVar30 < iVar19 + (int)local_538 + iVar26) {
      do {
        local_51c = iVar30;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_278,&local_3a4,(bool *)&local_51c);
        iVar30 = iVar30 + 1;
        local_51c = iVar30;
      } while (iVar30 < (pFVar10->AggGeom).BoxElems.ArrayNum + (int)local_538 + iVar26);
    }
    pTVar2 = &(pFVar10->AggGeom).BoxElems;
    if ((pTVar2 == (TArray<FKBoxElem,TSizedDefaultAllocator<32>_> *)&local_540) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar18)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    iVar30 = (int)local_538;
    if ((int)local_538 != 0) {
      iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x70,8,(int)local_538,&pTVar2->AllocatorInstance,
                          &(pFVar10->AggGeom).BoxElems.ArrayNum,
                          &(pFVar10->AggGeom).BoxElems.ArrayMax);
      ConstructItems<FKBoxElem,FKBoxElem,int>
                ((pTVar2->AllocatorInstance).Data + (longlong)iVar19 * 0x70,
                 (FKBoxElem *)local_540.Data,iVar30);
    }
    iVar26 = iVar26 + (pFVar10->AggGeom).BoxElems.ArrayNum;
    iVar19 = (pFVar10->AggGeom).SphylElems.ArrayNum;
    iVar30 = iVar19 + iVar26;
    local_518 = iVar30;
    if (iVar30 < iVar19 + (int)local_548 + iVar26) {
      do {
        local_518 = iVar30;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_278,local_3a0,(bool *)&local_518);
        iVar30 = iVar30 + 1;
        local_518 = iVar30;
      } while (iVar30 < (int)local_548 + iVar26 + (pFVar10->AggGeom).SphylElems.ArrayNum);
    }
    pTVar3 = &(pFVar10->AggGeom).SphylElems;
    if ((pTVar3 == (TArray<FKSphylElem,TSizedDefaultAllocator<32>_> *)&local_550) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar18)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    iVar30 = (int)local_548;
    if ((int)local_548 != 0) {
      iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x68,8,(int)local_548,&pTVar3->AllocatorInstance,
                          &(pFVar10->AggGeom).SphylElems.ArrayNum,
                          &(pFVar10->AggGeom).SphylElems.ArrayMax);
      ConstructItems<FKSphylElem,FKSphylElem,int>
                ((pTVar3->AllocatorInstance).Data + (longlong)iVar19 * 0x68,
                 (FKSphylElem *)local_550.Data,iVar30);
    }
    iVar26 = iVar26 + (pFVar10->AggGeom).SphylElems.ArrayNum;
    iVar19 = (pFVar10->AggGeom).ConvexElems.ArrayNum;
    iVar30 = iVar19 + iVar26;
    local_514 = iVar30;
    if (iVar30 < iVar19 + (int)local_558 + iVar26) {
      do {
        local_514 = iVar30;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_278,&local_368,(bool *)&local_514);
        iVar30 = iVar30 + 1;
        local_514 = iVar30;
      } while (iVar30 < (int)local_558 + (pFVar10->AggGeom).ConvexElems.ArrayNum + iVar26);
    }
    pTVar4 = &(pFVar10->AggGeom).ConvexElems;
    if ((pTVar4 == (TArray<FKConvexElem,TSizedDefaultAllocator<32>_> *)&local_560) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar18)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    iVar30 = (int)local_558;
    if ((int)local_558 != 0) {
      iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x100,0x10,(int)local_558,&pTVar4->AllocatorInstance,
                          &(pFVar10->AggGeom).ConvexElems.ArrayNum,
                          &(pFVar10->AggGeom).ConvexElems.ArrayMax);
      ConstructItems<FKConvexElem,FKConvexElem,int>
                ((pTVar4->AllocatorInstance).Data + (longlong)iVar19 * 0x100,
                 (FKConvexElem *)local_560.Data,iVar30);
    }
    iVar26 = iVar26 + (pFVar10->AggGeom).ConvexElems.ArrayNum;
    iVar19 = (pFVar10->AggGeom).LevelSetElems.ArrayNum;
    iVar30 = iVar19 + iVar26;
    local_510[0] = iVar30;
    if (iVar30 < iVar19 + (int)local_568 + iVar26) {
      do {
        local_510[0] = iVar30;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&local_278,&local_364,(bool *)local_510);
        iVar30 = iVar30 + 1;
        local_510[0] = iVar30;
      } while (iVar30 < (pFVar10->AggGeom).LevelSetElems.ArrayNum + (int)local_568 + iVar26);
    }
    pTVar5 = &(pFVar10->AggGeom).LevelSetElems;
    if ((pTVar5 == (TArray<FKLevelSetElem,TSizedDefaultAllocator<32>_> *)&local_570) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x96e,L""), bVar18)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    iVar30 = (int)local_568;
    if ((int)local_568 != 0) {
      iVar26 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0xa0,0x10,(int)local_568,&pTVar5->AllocatorInstance,
                          &(pFVar10->AggGeom).LevelSetElems.ArrayNum,
                          &(pFVar10->AggGeom).LevelSetElems.ArrayMax);
      ConstructItems<FKLevelSetElem,FKLevelSetElem,int>
                ((pTVar5->AllocatorInstance).Data + (longlong)iVar26 * 0xa0,
                 (FKLevelSetElem *)local_570.Data,iVar30);
    }
    pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_00->field_0x28);
    lVar24 = (**(code **)(*(longlong *)pUVar22 + 0x2d8))(pUVar22);
    pcVar15 = *(code **)(*(longlong *)(lVar24 + 0x28) + 0x10);
    pFVar23 = FText::AsLocalizable_Advanced_LocText
                        (&local_318,L"UCollisionPrimitivesMechanic",L"DuplicateSelectionUndo",
                         L"Duplicate Selected Collision Primitives");
    (*pcVar15)(lVar24 + 0x28,pFVar23);
    if (local_318.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_318.TextData.Reference + 0x10))();
    }
    pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_00->field_0x28);
    lVar24 = (**(code **)(*(longlong *)pUVar22 + 0x2d8))(pUVar22);
    pcVar15 = *(code **)(*(longlong *)(lVar24 + 0x28) + 0x20);
    if (((this_00->PhysicsData).Object == (FPhysicsDataCollection *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
    pTVar20 = MakeShared<FKAggregateGeom,1,FKAggregateGeom_&>
                        (local_308,&((this_00->PhysicsData).Object)->AggGeom);
    local_3c8 = ::operator_new(0x30);
    if (local_3c8 == (undefined8 *)0x0) {
      local_3c8 = (undefined8 *)0x0;
    }
    else {
      pFVar12 = pTVar20->Object;
      pTVar13 = (pTVar20->SharedReferenceCount).ReferenceController;
      iVar30 = this_00->CurrentChangeStamp;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        paVar28 = &pTVar13->SharedReferenceCount;
        LOCK();
        *paVar28 = (atomic<int>)((int)*paVar28 + 1);
        UNLOCK();
      }
      if (local_508 == (TReferenceControllerBase<1> *)0x0) {
        *local_3c8 = &
                     ___7FCollisionPrimitivesMechanicGeometryChange_UCollisionPrimitivesMechanic__6B_
        ;
        local_3c8[1] = local_500;
        local_3c8[2] = 0;
      }
      else {
        LOCK();
        local_508->SharedReferenceCount = (atomic<int>)((int)local_508->SharedReferenceCount + 1);
        UNLOCK();
        *local_3c8 = &
                     ___7FCollisionPrimitivesMechanicGeometryChange_UCollisionPrimitivesMechanic__6B_
        ;
        local_3c8[1] = local_500;
        local_3c8[2] = local_508;
        LOCK();
        local_508->SharedReferenceCount = (atomic<int>)((int)local_508->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_3c8[3] = pFVar12;
      local_3c8[4] = pTVar13;
      if (pTVar13 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar28 = (atomic<int>)((int)*paVar28 + 1);
        UNLOCK();
      }
      *(int *)(local_3c8 + 5) = iVar30;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_508)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar13);
    }
    (*pcVar15)(lVar24 + 0x28,this_00,&local_3c8,
               &CollisionPrimitivesMechanicLocals::CollisionPrimitiveMovementTransactionText);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_308[0].SharedReferenceCount.ReferenceController);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this_00->OnCollisionGeometryChanged);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&this_00->SelectedPrimitiveIDs,&local_278);
    pUVar14 = (this_00->CurrentActiveProxy).field0_0x0.DebugPtr;
    (**(code **)(pUVar14->_padding_ + 0x2c0))(pUVar14,&local_2d8);
    pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_00->field_0x28);
    lVar24 = (**(code **)(*(longlong *)pUVar22 + 0x2d8))(pUVar22);
    pcVar15 = *(code **)(*(longlong *)(lVar24 + 0x28) + 0x20);
    local_3c0 = ::operator_new(0x130);
    if (local_3c0 != (undefined8 *)0x0) {
      iVar30 = this_00->CurrentChangeStamp;
      *local_3c0 = &
                   ___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_
      ;
      *(undefined8 *)
       &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(local_3c0 + 1))->Elements = 0;
      local_3c0[2] = 0;
      local_3c0[5] = 0;
      *(undefined4 *)(local_3c0 + 6) = 0;
      *(undefined4 *)((longlong)local_3c0 + 0x34) = 0x80;
      *(undefined4 *)(local_3c0 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)local_3c0 + 0x3c) = 0;
      local_3c0[9] = 0;
      *(undefined4 *)(local_3c0 + 10) = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(local_3c0 + 1),&local_228
                );
      *(undefined1 *)(local_3c0 + 0xb) = 0;
      local_3c0[0xc] = local_2d8;
      local_3c0[0xd] = uStack_2d0;
      local_3c0[0xe] = local_2c8;
      local_3c0[0xf] = uStack_2c0;
      local_3c0[0x10] = local_2b8;
      local_3c0[0x11] = uStack_2b0;
      local_3c0[0x12] = local_2a8;
      local_3c0[0x13] = uStack_2a0;
      local_3c0[0x14] = CONCAT44(uStack_294,local_298);
      local_3c0[0x15] = CONCAT44(uStack_28c,uStack_290);
      local_3c0[0x16] = local_288;
      local_3c0[0x17] = uStack_280;
      local_3c0[0x18] = local_2d8;
      local_3c0[0x19] = uStack_2d0;
      local_3c0[0x1a] = local_2c8;
      local_3c0[0x1b] = uStack_2c0;
      local_3c0[0x1c] = local_2b8;
      local_3c0[0x1d] = uStack_2b0;
      local_3c0[0x1e] = local_2a8;
      local_3c0[0x1f] = uStack_2a0;
      *(undefined4 *)(local_3c0 + 0x20) = local_298;
      *(undefined4 *)((longlong)local_3c0 + 0x104) = uStack_294;
      *(undefined4 *)(local_3c0 + 0x21) = uStack_290;
      *(undefined4 *)((longlong)local_3c0 + 0x10c) = uStack_28c;
      local_3c0[0x22] = local_288;
      local_3c0[0x23] = uStack_280;
      *(int *)(local_3c0 + 0x24) = iVar30;
    }
    (*pcVar15)(lVar24 + 0x28,this_00,&local_3c0,
               &CollisionPrimitivesMechanicLocals::CollisionPrimitiveDeselectionTransactionText);
    pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_00->field_0x28);
    lVar24 = (**(code **)(*(longlong *)pUVar22 + 0x2d8))(pUVar22);
    pcVar15 = *(code **)(*(longlong *)(lVar24 + 0x28) + 0x20);
    local_3b8 = ::operator_new(0x130);
    if (local_3b8 == (undefined8 *)0x0) {
      local_3b8 = (undefined8 *)0x0;
    }
    else {
      iVar30 = this_00->CurrentChangeStamp;
      *local_3b8 = &
                   ___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_
      ;
      *(undefined8 *)
       &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(local_3b8 + 1))->Elements = 0;
      local_3b8[2] = 0;
      local_3b8[5] = 0;
      *(undefined4 *)(local_3b8 + 6) = 0;
      *(undefined4 *)((longlong)local_3b8 + 0x34) = 0x80;
      *(undefined4 *)(local_3b8 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)local_3b8 + 0x3c) = 0;
      local_3b8[9] = 0;
      *(undefined4 *)(local_3b8 + 10) = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(local_3b8 + 1),
                 &this_00->SelectedPrimitiveIDs);
      *(undefined1 *)(local_3b8 + 0xb) = 1;
      local_3b8[0xc] = local_2d8;
      local_3b8[0xd] = uStack_2d0;
      local_3b8[0xe] = local_2c8;
      local_3b8[0xf] = uStack_2c0;
      local_3b8[0x10] = local_2b8;
      local_3b8[0x11] = uStack_2b0;
      local_3b8[0x12] = local_2a8;
      local_3b8[0x13] = uStack_2a0;
      local_3b8[0x14] = CONCAT44(uStack_294,local_298);
      local_3b8[0x15] = CONCAT44(uStack_28c,uStack_290);
      local_3b8[0x16] = local_288;
      local_3b8[0x17] = uStack_280;
      local_3b8[0x18] = local_2d8;
      local_3b8[0x19] = uStack_2d0;
      local_3b8[0x1a] = local_2c8;
      local_3b8[0x1b] = uStack_2c0;
      local_3b8[0x1c] = local_2b8;
      local_3b8[0x1d] = uStack_2b0;
      local_3b8[0x1e] = local_2a8;
      local_3b8[0x1f] = uStack_2a0;
      *(undefined4 *)(local_3b8 + 0x20) = local_298;
      *(undefined4 *)((longlong)local_3b8 + 0x104) = uStack_294;
      *(undefined4 *)(local_3b8 + 0x21) = uStack_290;
      *(undefined4 *)((longlong)local_3b8 + 0x10c) = uStack_28c;
      local_3b8[0x22] = local_288;
      local_3b8[0x23] = uStack_280;
      *(int *)(local_3b8 + 0x24) = iVar30;
    }
    (*pcVar15)(lVar24 + 0x28,this_00,&local_3b8,
               &CollisionPrimitivesMechanicLocals::CollisionPrimitiveSelectionTransactionText);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this_00->OnSelectionChanged);
    pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this_00->field_0x28);
    lVar24 = (**(code **)(*(longlong *)pUVar22 + 0x2d8))(pUVar22);
    (**(code **)(*(longlong *)(lVar24 + 0x28) + 0x18))(lVar24 + 0x28);
    RebuildDrawables(this_00,true);
    UpdateGizmoLocation(this_00);
    UpdateGizmoVisibility(this_00);
    local_228.HashSize = 0;
    if (local_228.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_228.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_228.Elements);
    local_278.HashSize = 0;
    if (local_278.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_278.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_278.Elements);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_508);
  DestructItems<FKLevelSetElem,int>((FKLevelSetElem *)local_570.Data,(int)local_568);
  if ((FKLevelSetElem *)local_570.Data != (FKLevelSetElem *)0x0) {
    FMemory::Free(local_570.Data);
  }
  DestructItems<FKConvexElem,int>((FKConvexElem *)local_560.Data,(int)local_558);
  if ((FKConvexElem *)local_560.Data != (FKConvexElem *)0x0) {
    FMemory::Free(local_560.Data);
  }
  DestructItems<FKSphylElem,int>((FKSphylElem *)local_550.Data,(int)local_548);
  if ((FKSphylElem *)local_550.Data != (FKSphylElem *)0x0) {
    FMemory::Free(local_550.Data);
  }
  DestructItems<FKBoxElem,int>((FKBoxElem *)local_540.Data,(int)local_538);
  if ((FKBoxElem *)local_540.Data != (FKBoxElem *)0x0) {
    FMemory::Free(local_540.Data);
  }
  DestructItems<FKSphereElem,int>((FKSphereElem *)local_530.Data,(int)local_528);
  if ((FKSphereElem *)local_530.Data != (FKSphereElem *)0x0) {
    FMemory::Free(local_530.Data);
  }
  return;
}

// GetPrivateStaticClass @ 14cb11f50

UClass * __cdecl UCollisionPrimitivesMechanic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCollisionPrimitivesMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"CollisionPrimitivesMechanic",
               &Z_Registration_Info_UClass_UCollisionPrimitivesMechanic.InnerSingleton,
               StaticRegisterNativesUCollisionPrimitivesMechanic,0x5b0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UCollisionPrimitivesMechanic>,
               InternalVTableHelperCtorCaller<UCollisionPrimitivesMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCollisionPrimitivesMechanic.InnerSingleton;
}

// GetSafeAbsScale @ 14cb13760

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector<double> * __thiscall
UCollisionPrimitivesMechanic::GetSafeAbsScale
          (UCollisionPrimitivesMechanic *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x10);
  dVar2 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar2 <= __real_3e45798ee2308c3a) {
    dVar2 = __real_3e45798ee2308c3a;
  }
  uVar1 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 8);
  uVar4 = (uint)*(undefined8 *)&param_1->field0_0x0 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)*(undefined8 *)&param_1->field0_0x0 >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar3 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if ((double)CONCAT44(uVar5,uVar4) <= __real_3e45798ee2308c3a) {
    uVar4 = SUB84(__real_3e45798ee2308c3a,0);
    uVar5 = (uint)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
  }
  if (dVar3 <= __real_3e45798ee2308c3a) {
    dVar3 = __real_3e45798ee2308c3a;
  }
  (param_1->field0_0x0)._s_0.Z = dVar2;
  uVar6 = (undefined4)((ulonglong)dVar3 >> 0x20);
  *(uint *)&param_1->field0_0x0 = uVar4;
  *(uint *)((longlong)&param_1->field0_0x0 + 4) = uVar5;
  *(int *)((longlong)&param_1->field0_0x0 + 8) = SUB84(dVar3,0);
  *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc) = uVar6;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  *(uint *)&__return_storage_ptr__->field0_0x0 = uVar4;
  *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar5;
  *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = SUB84(dVar3,0);
  *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// GizmoTransformChanged @ 14cb15ce0

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
UCollisionPrimitivesMechanic::GizmoTransformChanged
          (UCollisionPrimitivesMechanic *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  undefined4 uVar3;
  undefined1 auVar4 [16];
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  ulonglong uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  TBitArray<FDefaultBitArrayAllocator> *pTVar36;
  void *pvVar37;
  void *pvVar38;
  undefined8 uVar39;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar40;
  bool bVar41;
  int iVar42;
  TVector<double> *pTVar43;
  FPhysicsDataCollection *pFVar44;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar45;
  FKConvexElem *this_00;
  FKShapeElem *pFVar46;
  TQuat<double> *pTVar47;
  uint uVar48;
  uint uVar49;
  TTransform<double> *pTVar50;
  FKAggregateGeom *this_01;
  longlong lVar51;
  longlong lVar52;
  ulonglong uVar53;
  ulonglong uVar54;
  longlong lVar55;
  longlong lVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  double dVar84;
  double dVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  double dVar99;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  double dVar108;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined4 uVar117;
  double dVar121;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined4 uVar122;
  undefined4 uVar123;
  float fVar124;
  double dVar125;
  float fVar131;
  double dVar132;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  float fVar130;
  float fVar133;
  undefined1 auVar129 [16];
  undefined4 uVar134;
  double dVar135;
  double dVar136;
  double dVar137;
  double dVar138;
  undefined1 auVar139 [16];
  double dVar143;
  undefined1 auVar140 [16];
  double dVar144;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined4 uVar145;
  undefined4 uVar146;
  double dVar147;
  double dVar148;
  double dVar152;
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  double dVar153;
  undefined1 auStackY_678 [32];
  undefined1 local_648 [8];
  double local_640;
  double local_638;
  undefined1 local_628 [16];
  double local_618;
  double dStack_610;
  undefined1 local_608 [16];
  undefined1 local_5f8 [16];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_5e8;
  FKAggregateGeom *local_5c8;
  FKAggregateGeom *local_5c0;
  undefined1 local_5b8 [16];
  undefined8 local_5a8;
  double dStack_5a0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_598;
  longlong lStack_590;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_588;
  undefined1 auStack_580 [16];
  int local_570;
  undefined4 uStack_56c;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_568;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_560;
  undefined8 uStack_540;
  __m128 local_538;
  float local_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  undefined1 local_518 [16];
  double local_508;
  TVector<double>_u_0 local_500;
  undefined1 local_4e8 [16];
  double local_4d8;
  undefined1 local_4d0 [16];
  double local_4c0;
  __m128 local_4b8;
  __m128 local_4a8;
  __m128 local_498;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  uint local_468;
  uint uStack_464;
  uint uStack_460;
  uint uStack_45c;
  uint local_458;
  uint uStack_454;
  double local_450;
  double dStack_448;
  double local_440;
  double local_438;
  double dStack_430;
  double local_428;
  undefined1 local_420 [16];
  double local_410;
  TTransform<double> local_408;
  TTransform<double> local_3a8;
  TTransform<double> local_348;
  TTransform<double> local_2e8;
  TTransform<double> local_288;
  double local_228;
  double dStack_220;
  TBitArray<FDefaultBitArrayAllocator> *local_218;
  double dStack_210;
  TVector<double> local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1f0;
  TQuat<double> local_1c8;
  TTransform<double> local_1a8;
  TTransform<double> local_148;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_678;
  iVar42 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8;
  if (((iVar42 != *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34) &&
      (this->bGizmoBeingDragged != false)) && (param_1->bSetPivotMode == false)) {
    auVar127._0_8_ =
         (double)CONCAT44(*(uint *)((longlong)(this->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 4
                                   ) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          *(uint *)(this->LocalToWorldTransform).Scale3D.ZW.m128d_f64 &
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar127._8_4_ =
         *(uint *)((this->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 1) & _UNK_15061cc88;
    auVar127._12_4_ =
         *(uint *)((longlong)(this->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 0xc) &
         _UNK_15061cc8c;
    pTVar50 = &this->LocalToWorldTransform;
    auVar111._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[3] < auVar127._8_8_);
    auVar111._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[2] < auVar127._0_8_);
    uVar48 = movmskpd((int)this,auVar111);
    auVar90._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
          (double)CONCAT44(*(uint *)((longlong)(this->LocalToWorldTransform).Scale3D.XY.m128d_f64 +
                                    0xc) & _UNK_15061cc8c,
                           *(uint *)((this->LocalToWorldTransform).Scale3D.XY.m128d_f64 + 1) &
                           _UNK_15061cc88));
    auVar90._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
          (double)CONCAT44(*(uint *)((longlong)(this->LocalToWorldTransform).Scale3D.XY.m128d_f64 +
                                    4) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           *(uint *)(this->LocalToWorldTransform).Scale3D.XY.m128d_f64 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    iVar42 = movmskpd(iVar42,auVar90);
    if ((uVar48 & 0x3fffffff) == 0 && iVar42 == 0) {
      local_1a8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_1a8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_1a8.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_1a8.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_1a8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_1a8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast(pTVar50,&local_1a8);
    }
    local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_148.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_148.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_148.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
    local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_148.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
    local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    UE::Math::TTransform<double>::Multiply(&local_148,param_2,&local_1a8);
    auVar90 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
    dVar135 = auVar90._0_8_;
    dVar143 = (param_2->Rotation).XY.m128d_f64[0];
    dVar144 = (param_2->Rotation).XY.m128d_f64[1];
    dVar85 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar84 = (pTVar50->Rotation).XY.m128d_f64[0] * dVar85;
    dVar137 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar108 = (this->LocalToWorldTransform).Rotation.XY.m128d_f64[1] * dVar137;
    dVar59 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar17 = (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[0] * dVar59;
    dVar153 = GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar136 = (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[1] * dVar153;
    auVar109._8_4_ = SUB84(dVar136,0);
    auVar109._0_8_ = dVar17;
    auVar109._12_4_ = (int)((ulonglong)dVar136 >> 0x20);
    dVar147 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dVar121 = auVar90._8_8_;
    auVar139._8_4_ = auVar90._0_4_;
    auVar139._0_8_ = dVar121;
    auVar139._12_4_ = auVar90._4_4_;
    dVar138 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
    dVar99 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
    auVar60._8_4_ = SUB84(dVar17,0);
    auVar60._0_8_ = dVar17;
    auVar60._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    dVar23 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
    dVar25 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
    dVar31 = (this->GizmoStartRotation).Z;
    dVar32 = (this->GizmoStartRotation).W;
    dVar21 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
    dVar22 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
    dVar33 = (this->GizmoStartRotation).X;
    dVar34 = (this->GizmoStartRotation).Y;
    dVar152 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar125 = (pTVar50->Rotation).XY.m128d_f64[0] * dVar85;
    dVar132 = (this->LocalToWorldTransform).Rotation.XY.m128d_f64[1] * dVar137;
    dVar19 = dVar84 * dVar144 * dVar23 + dVar135 * auVar109._8_8_ + dVar143 * dVar108 * dVar21 +
             dVar17 * dVar121 * dVar147;
    dVar20 = dVar84 * dVar143 * dVar25 + dVar121 * dVar136 + dVar144 * dVar108 * dVar22 +
             dVar17 * dVar135 * dVar152;
    uVar117 = SUB84(dVar20,0);
    uVar122 = (undefined4)((ulonglong)dVar20 >> 0x20);
    dVar20 = (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[0] * dVar59;
    dVar148 = (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[1] * dVar153;
    dVar28 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
    dVar29 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
    dVar26 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar27 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    auVar18._8_4_ = uVar117;
    auVar18._0_8_ = dVar19;
    auVar18._12_4_ = uVar122;
    dVar135 = dVar121 * dVar84 * dVar138 + dVar143 * auVar109._8_8_ + dVar135 * dVar108 * dVar28 +
              dVar17 * dVar144 * dVar26;
    dVar143 = auVar139._8_8_ * dVar84 * dVar99 + dVar144 * dVar136 + dVar121 * dVar108 * dVar29 +
              auVar60._8_8_ * dVar143 * dVar27;
    auVar61._8_4_ = SUB84(dVar148,0);
    auVar61._0_8_ = dVar148;
    auVar61._12_4_ = (int)((ulonglong)dVar148 >> 0x20);
    auVar140._8_4_ = SUB84(dVar125,0);
    auVar140._0_8_ = dVar125;
    auVar140._12_4_ = (int)((ulonglong)dVar125 >> 0x20);
    auVar62._8_4_ = SUB84(dVar20,0);
    auVar62._0_8_ = dVar20;
    auVar62._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    auVar86._8_4_ = SUB84(dVar132,0);
    auVar86._0_8_ = dVar132;
    auVar86._12_4_ = (int)((ulonglong)dVar132 >> 0x20);
    dVar136 = (dVar125 * dVar32 * dVar138 + dVar148 * dVar33 + dVar132 * dVar31 * dVar28 +
              dVar20 * dVar34 * dVar26) * dVar85;
    dVar144 = (auVar140._8_8_ * dVar31 * dVar99 + auVar61._8_8_ * dVar34 +
               auVar86._8_8_ * dVar32 * dVar29 + auVar62._8_8_ * dVar33 * dVar27) * dVar137;
    dVar84 = auVar18._8_8_;
    auVar100._8_4_ = SUB84(dVar144,0);
    auVar100._0_8_ = dVar136;
    auVar100._12_4_ = (int)((ulonglong)dVar144 >> 0x20);
    auVar63._8_4_ = uVar117;
    auVar63._0_8_ = dVar84;
    auVar63._12_4_ = uVar122;
    dVar108 = (dVar125 * dVar34 * dVar23 + dVar148 * dVar31 + dVar132 * dVar33 * dVar21 +
              dVar20 * dVar32 * dVar147) * dVar59;
    dVar17 = (dVar125 * dVar33 * dVar25 + dVar148 * dVar32 + dVar132 * dVar34 * dVar22 +
             dVar20 * dVar31 * dVar152) * dVar153;
    auVar87._8_4_ = SUB84(dVar135,0);
    auVar87._0_8_ = dVar135;
    auVar87._12_4_ = (int)((ulonglong)dVar135 >> 0x20);
    auVar64._8_4_ = SUB84(dVar19,0);
    auVar64._0_8_ = dVar19;
    auVar64._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    auVar88._8_4_ = SUB84(dVar143,0);
    auVar88._0_8_ = dVar143;
    auVar88._12_4_ = (int)((ulonglong)dVar143 >> 0x20);
    local_440 = (param_2->Scale3D).ZW.m128d_f64[0];
    dStack_610 = (param_2->Scale3D).ZW.m128d_f64[1];
    dVar20 = auVar87._8_8_ * dVar108 * dVar99 + auVar63._8_8_ * dVar144 +
             auVar88._8_8_ * dVar17 * dVar29 + auVar64._8_8_ * dVar136 * dVar27;
    local_450 = (param_2->Scale3D).XY.m128d_f64[0];
    dStack_5a0 = (param_2->Scale3D).XY.m128d_f64[1];
    local_638 = local_450 / (this->GizmoStartScale).field0_0x0._s_0.X;
    local_618 = local_440 / (this->GizmoStartScale).field0_0x0._s_0.Z;
    local_5a8 = dStack_5a0 / (this->GizmoStartScale).field0_0x0._s_0.Y;
    dVar99 = dVar135 * dVar136 * dVar25 + dVar84 * dVar17 + dVar143 * dVar144 * dVar22 +
             dVar19 * dVar108 * dVar152;
    local_628._8_4_ = SUB84(dVar20,0);
    local_628._0_8_ =
         dVar135 * dVar17 * dVar138 + dVar84 * dVar136 + dVar143 * dVar108 * dVar28 +
         dVar19 * auVar100._8_8_ * dVar26;
    local_628._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
    local_5f8._8_4_ = SUB84(dVar99,0);
    local_5f8._0_8_ =
         dVar135 * auVar100._8_8_ * dVar23 + dVar84 * dVar108 + dVar143 * dVar136 * dVar21 +
         dVar19 * dVar17 * dVar147;
    local_5f8._12_4_ = (int)((ulonglong)dVar99 >> 0x20);
    local_428 = (param_2->Translation).ZW.m128d_f64[0];
    local_438 = (param_2->Translation).XY.m128d_f64[0];
    dStack_430 = (param_2->Translation).XY.m128d_f64[1];
    dVar85 = (pTVar50->Rotation).XY.m128d_f64[0] * dVar85;
    dVar137 = (this->LocalToWorldTransform).Rotation.XY.m128d_f64[1] * dVar137;
    uVar117 = (undefined4)((ulonglong)dVar137 >> 0x20);
    auVar118._0_8_ = (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[0] * dVar59;
    auVar118._8_8_ = (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[1] * dVar153;
    auVar101._8_4_ = SUB84(dVar137,0);
    auVar101._0_8_ = dVar85;
    auVar101._12_4_ = uVar117;
    auVar110._8_4_ = SUB84(dVar137,0);
    auVar110._0_8_ = dVar85;
    auVar110._12_4_ = uVar117;
    dVar108 = auVar101._8_8_;
    dVar84 = local_428 - (this->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
    auVar65._8_4_ = SUB84(auVar118._0_8_,0);
    auVar65._0_8_ = dVar108;
    auVar65._12_4_ = (int)((ulonglong)auVar118._0_8_ >> 0x20);
    auVar111 = blendpd(auVar110,auVar118,2);
    dVar153 = local_438 - (this->LocalToWorldTransform).Translation.XY.m128d_f64[0];
    dVar99 = dStack_430 - (this->LocalToWorldTransform).Translation.XY.m128d_f64[1];
    uVar117 = (undefined4)((ulonglong)dVar99 >> 0x20);
    auVar149._8_4_ = SUB84(dVar99,0);
    auVar149._0_8_ = dVar153;
    auVar149._12_4_ = uVar117;
    auVar89._8_4_ = SUB84(dVar99,0);
    auVar89._0_8_ = dVar153;
    auVar89._12_4_ = uVar117;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = dVar84;
    auVar90 = blendpd(auVar89,auVar24,2);
    auVar150._0_8_ = auVar149._8_8_ * dVar85 - dVar108 * dVar153;
    auVar150._8_8_ = dVar84 * dVar137 - auVar65._8_8_ * dVar99;
    auVar91._0_8_ = auVar90._0_8_ * auVar118._0_8_ - auVar111._0_8_ * dVar84;
    auVar91._8_8_ = auVar90._8_8_ * auVar118._8_8_ - auVar111._8_8_ * 0.0;
    dVar59 = auVar150._8_8_ + auVar150._8_8_;
    dVar138 = auVar91._0_8_ + auVar91._0_8_;
    uVar117 = SUB84(dVar138,0);
    uVar122 = (undefined4)((ulonglong)dVar138 >> 0x20);
    auVar90 = blendpd(auVar150,auVar91,2);
    auVar141._8_4_ = uVar117;
    auVar141._0_8_ = dVar59;
    auVar141._12_4_ = uVar122;
    auVar66._8_4_ = uVar117;
    auVar66._0_8_ = dVar59;
    auVar66._12_4_ = uVar122;
    auVar126._8_4_ = uVar117;
    auVar126._0_8_ = dVar59;
    auVar126._12_4_ = uVar122;
    auVar151._0_8_ = auVar90._0_8_ + auVar90._0_8_;
    auVar151._8_8_ = auVar90._8_8_ + auVar90._8_8_;
    auVar127 = blendpd(auVar126,auVar151,2);
    auVar142._0_8_ = auVar141._8_8_ * dVar85 - dVar59 * dVar108;
    auVar142._8_8_ = auVar151._0_8_ * dVar137 - auVar66._8_8_ * auVar118._0_8_;
    auVar67._8_4_ = SUB84(auVar151._8_8_,0);
    auVar67._0_8_ = auVar151._0_8_;
    auVar67._12_4_ = (int)((ulonglong)auVar151._8_8_ >> 0x20);
    auVar90 = *(undefined1 (*) [16])(this->LocalToWorldTransform).Scale3D.XY.m128d_f64;
    auVar128._0_8_ = auVar127._0_8_ * auVar118._0_8_ - auVar151._0_8_ * auVar111._0_8_;
    auVar128._8_8_ = auVar127._8_8_ * auVar118._8_8_ - auVar67._8_8_ * auVar111._8_8_;
    auVar111 = *(undefined1 (*) [16])(this->LocalToWorldTransform).Scale3D.ZW.m128d_f64;
    auVar119._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar111._4_4_,
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar111._0_4_);
    auVar119._8_4_ = _UNK_15061cc88 & GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar119._12_4_ = _UNK_15061cc8c & GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    lVar51 = -(ulonglong)(auVar119._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    lVar55 = -(ulonglong)(auVar119._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[3]);
    auVar102._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar90._4_4_,
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar90._0_4_);
    auVar102._8_4_ = _UNK_15061cc88 & auVar90._8_4_;
    auVar102._12_4_ = _UNK_15061cc8c & auVar90._12_4_;
    auVar90 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar90);
    lVar52 = -(ulonglong)(auVar102._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar56 = -(ulonglong)(auVar102._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    local_608._0_8_ =
         CONCAT44(~(uint)((ulonglong)lVar52 >> 0x20) & auVar90._4_4_,~(uint)lVar52 & auVar90._0_4_);
    local_608._8_4_ = ~(uint)lVar56 & auVar90._8_4_;
    local_608._12_4_ = ~(uint)((ulonglong)lVar56 >> 0x20) & auVar90._12_4_;
    auVar68._8_4_ = SUB84(auVar142._8_8_,0);
    auVar68._0_8_ = auVar142._0_8_;
    auVar68._12_4_ = (int)((ulonglong)auVar142._8_8_ >> 0x20);
    dVar59 = (double)local_608._0_8_ * (dVar59 * auVar118._8_8_ + dVar153 + auVar68._8_8_);
    dVar85 = (double)CONCAT44(local_608._12_4_,local_608._8_4_);
    dVar85 = dVar85 * (dVar138 * auVar118._8_8_ + dVar99 + auVar128._0_8_);
    uVar117 = (undefined4)((ulonglong)dVar85 >> 0x20);
    local_420._8_4_ = SUB84(dVar85,0);
    local_420._0_8_ = dVar59;
    local_420._12_4_ = uVar117;
    auVar92._0_12_ = ZEXT812(0);
    auVar92._12_4_ = 0;
    auVar94._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar94._0_8_ = auVar111._0_8_;
    auVar94._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar90 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar94);
    auVar111 = blendpd(auVar142,auVar128,2);
    auVar120._0_4_ = ~(uint)lVar51 & auVar90._0_4_;
    auVar120._4_4_ = ~(uint)((ulonglong)lVar51 >> 0x20) & auVar90._4_4_;
    auVar120._8_4_ = ~(uint)lVar55 & auVar90._8_4_;
    auVar120._12_4_ = ~(uint)((ulonglong)lVar55 >> 0x20) & auVar90._12_4_;
    local_5b8 = auVar92 | auVar120;
    dVar153 = local_5b8._8_8_;
    dVar137 = local_5b8._0_8_ * (auVar151._0_8_ * auVar118._8_8_ + dVar84 + auVar111._0_8_);
    dStack_448 = dStack_5a0;
    pTVar43 = UE::Math::TTransform<double>::InverseTransformPosition
                        (pTVar50,&local_208,&this->GizmoStartPosition);
    local_640 = dVar59 - (pTVar43->field0_0x0)._s_0.X;
    dVar138 = dVar137 - (pTVar43->field0_0x0)._s_0.Z;
    dVar59 = dVar85 - (pTVar43->field0_0x0)._s_0.Y;
    local_5b8._8_8_ = dVar153 * (auVar151._8_8_ * auVar118._8_8_ + 0.0 + auVar111._8_8_);
    local_5b8._0_8_ = dVar138;
    local_608._8_4_ = SUB84(dVar85,0);
    local_608._0_8_ = dVar59;
    local_608._12_4_ = uVar117;
    local_410 = dVar137;
    pFVar44 = TSharedPtr<FPhysicsDataCollection,1>::operator->(&this->PhysicsData);
    local_5c0 = &pFVar44->AggGeom;
    local_5c8 = TSharedPtr<FKAggregateGeom,1>::operator*<FKAggregateGeom>
                          (&this->PrimitivePreTransform);
    puVar1 = &(this->SelectedPrimitiveIDs).Elements.field_0x10;
    local_5e8._padding_._4_4_ = 1;
    pTVar2 = &this->SelectedPrimitiveIDs;
    local_5e8._padding_._0_4_ = 0;
    local_5e8.UnvisitedBitMask = 0xffffffff;
    local_5e8.CurrentBitIndex = 0;
    local_5e8.BaseBitIndex = 0;
    local_5e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if (*(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x28 != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_5e8);
    }
    lStack_590 = CONCAT44(local_5e8._padding_._4_4_,(undefined4)local_5e8._padding_);
    TStack_560.CurrentBitIndex = local_5e8.CurrentBitIndex;
    TStack_560.UnvisitedBitMask = local_5e8.UnvisitedBitMask;
    TStack_560._28_4_ = local_5e8._28_4_;
    TStack_560.BaseBitIndex = local_5e8.BaseBitIndex;
    local_570 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 -
                *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34;
    pTStack_588 = local_5e8.Array;
    auStack_580._8_8_ = TStack_560._24_8_;
    auStack_580._0_4_ = local_5e8.UnvisitedBitMask;
    auStack_580._4_4_ = local_5e8.CurrentBitIndex;
    uStack_540 = CONCAT44(uStack_56c,local_570);
    TStack_560.Array = local_5e8.Array;
    local_598 = pTVar2;
    local_568 = pTVar2;
    TStack_560._padding_ = lStack_590;
    pTVar45 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_1f0,(TBitArray<FDefaultBitArrayAllocator> *)puVar1,
                         *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x28);
    auVar111 = local_5f8;
    auVar90 = local_628;
    uVar117 = local_5f8._0_4_;
    uVar134 = local_5f8._4_4_;
    uVar122 = local_628._0_4_;
    uVar123 = local_628._4_4_;
    lStack_590 = pTVar45->_padding_;
    pTVar36 = pTVar45->Array;
    auVar4._0_4_ = pTVar45->UnvisitedBitMask;
    auVar4._4_4_ = pTVar45->CurrentBitIndex;
    auVar4._8_4_ = pTVar45->BaseBitIndex;
    auVar4._12_4_ = *(undefined4 *)&pTVar45->field_0x1c;
    local_528 = ___xmm_3f8000003f8000003f8000003f800000;
    fStack_524 = _UNK_15076b1f4;
    fStack_520 = _UNK_15076b1f8;
    fStack_51c = _UNK_15076b1fc;
    this_01 = &pFVar44->AggGeom;
    uVar145 = (undefined4)local_5a8;
    uVar146 = local_5a8._4_4_;
    fVar124 = ___xmm_3f8000003f8000003f8000003f800000;
    fVar130 = _UNK_15076b1f4;
    fVar131 = _UNK_15076b1f8;
    fVar133 = _UNK_15076b1fc;
    dVar85 = local_618;
    pTStack_588 = pTVar36;
    auStack_580 = auVar4;
    while( true ) {
      pTVar40 = local_568;
      if (*(int *)&(local_568->Elements).field_0x8 - *(int *)&(local_568->Elements).field_0x34 !=
          (int)uStack_540) {
        local_648[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_648);
      }
      if (((TStack_560.CurrentBitIndex == auVar4._4_4_) && (TStack_560.Array == pTVar36)) &&
         (pTVar40 == pTVar2)) break;
      uVar48 = *(uint *)(*(longlong *)&pTVar40->Elements +
                        (longlong)TStack_560.CurrentBitIndex * 0xc);
      this_00 = (FKConvexElem *)FKAggregateGeom::GetElement(this_01,uVar48);
      pFVar46 = FKAggregateGeom::GetElement(local_5c8,uVar48);
      uVar49 = 0;
      if ((int)uVar48 < (this->PrimitiveRenderData).ArrayNum) {
        uVar49 = ~uVar48 >> 0x1f;
      }
      if (uVar49 == 0) {
        bVar41 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar41) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      pTVar50 = (TTransform<double> *)
                ((this->PrimitiveRenderData).AllocatorInstance.Data +
                (longlong)(int)uVar48 * 0x80 + 0x20);
      iVar42 = *(int *)&this_00->field_0x14;
      dVar153 = auVar111._8_8_;
      dVar137 = auVar90._8_8_;
      if (iVar42 == 0) {
        fVar8 = GlobalVectorConstants::Float0001.m128_f32[1];
        fVar9 = GlobalVectorConstants::Float0001.m128_f32[2];
        fVar10 = GlobalVectorConstants::Float0001.m128_f32[3];
        dVar85 = *(double *)&pFVar46[1].Name.Number;
        uVar3 = pFVar46[1].Name.ComparisonIndex;
        lVar51 = pFVar46[1]._padding_;
        uVar122 = *(undefined4 *)((longlong)&pFVar46[1]._padding_ + 4);
        fVar35 = pFVar46[1].RestOffset;
        fVar7 = GlobalVectorConstants::Float1110.m128_f32[0];
        fVar130 = GlobalVectorConstants::Float1110.m128_f32[1];
        fVar124 = GlobalVectorConstants::Float1110.m128_f32[2];
        fVar6 = GlobalVectorConstants::Float1110.m128_f32[3];
        (pTVar50->Rotation).XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        (pTVar50->Rotation).XY.m128d_f64[1] = (double)fVar8;
        (pTVar50->Rotation).ZW.m128d_f64[0] = (double)fVar9;
        (pTVar50->Rotation).ZW.m128d_f64[1] = (double)fVar10;
        *(int *)(pTVar50->Translation).XY.m128d_f64 = (int)lVar51;
        *(undefined4 *)((longlong)(pTVar50->Translation).XY.m128d_f64 + 4) = uVar122;
        *(float *)((pTVar50->Translation).XY.m128d_f64 + 1) = fVar35;
        *(undefined4 *)((longlong)(pTVar50->Translation).XY.m128d_f64 + 0xc) = uVar3;
        (pTVar50->Translation).ZW.m128d_f64[0] = dVar85;
        (pTVar50->Translation).ZW.m128d_f64[1] = 0.0;
        (pTVar50->Scale3D).XY.m128d_f64[0] = (double)fVar7;
        (pTVar50->Scale3D).XY.m128d_f64[1] = (double)fVar130;
        (pTVar50->Scale3D).ZW.m128d_f64[0] = (double)fVar124;
        (pTVar50->Scale3D).ZW.m128d_f64[1] = (double)fVar6;
        pTStack_588 = (TBitArray<FDefaultBitArrayAllocator> *)(pTVar50->Rotation).ZW.m128d_f64[0];
        dStack_210 = (pTVar50->Rotation).ZW.m128d_f64[1];
        local_228 = (pTVar50->Rotation).XY.m128d_f64[0];
        dStack_220 = (pTVar50->Rotation).XY.m128d_f64[1];
        dVar20 = (double)fVar131;
        dVar136 = (double)fVar133;
        auStack_580._0_8_ = dStack_210;
        dVar148 = (double)CONCAT44(uVar134,uVar117) * dVar20;
        dVar153 = dVar153 * dVar136;
        dVar85 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
        dVar99 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
        auVar129._8_4_ = SUB84(dVar153,0);
        auVar129._0_8_ = dVar148;
        auVar129._12_4_ = (int)((ulonglong)dVar153 >> 0x20);
        dVar59 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
        dVar84 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
        dVar138 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar108 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        dVar17 = (double)pTStack_588 * (double)local_628._0_8_ *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 dStack_220 * dVar153 +
                 dStack_210 * dVar137 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                 local_228 * dVar148 *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        auVar16._8_4_ = SUB84(dVar17,0);
        auVar16._0_8_ =
             dStack_210 * (double)local_628._0_8_ *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             local_228 * auVar129._8_8_ +
             (double)pTStack_588 * dVar137 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dStack_220 * dVar148 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        auVar16._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        *(undefined1 (*) [16])(pTVar50->Rotation).XY.m128d_f64 = auVar16;
        (pTVar50->Rotation).ZW.m128d_f64[0] =
             dStack_220 * (double)local_628._0_8_ * dVar85 + (double)pTStack_588 * auVar129._8_8_ +
             local_228 * dVar137 * dVar59 + dStack_210 * dVar148 * dVar138;
        (pTVar50->Rotation).ZW.m128d_f64[1] =
             local_228 * (double)local_628._0_8_ * dVar99 + dStack_210 * dVar153 +
             dStack_220 * dVar137 * dVar84 + (double)pTStack_588 * dVar148 * dVar108;
        dVar138 = (double)local_5b8._0_8_;
        dVar85 = (pTVar50->Translation).XY.m128d_f64[1];
        (pTVar50->Translation).XY.m128d_f64[0] = local_640 + (pTVar50->Translation).XY.m128d_f64[0];
        (pTVar50->Translation).XY.m128d_f64[1] = (double)local_608._0_8_ + dVar85;
        dVar85 = (pTVar50->Translation).ZW.m128d_f64[1];
        (pTVar50->Translation).ZW.m128d_f64[0] =
             (double)local_5b8._0_8_ * dVar20 + (pTVar50->Translation).ZW.m128d_f64[0];
        (pTVar50->Translation).ZW.m128d_f64[1] = dVar136 * 0.0 + dVar85;
        dVar85 = (pTVar50->Scale3D).XY.m128d_f64[1];
        (pTVar50->Scale3D).XY.m128d_f64[0] = local_638 * (pTVar50->Scale3D).XY.m128d_f64[0];
        (pTVar50->Scale3D).XY.m128d_f64[1] = local_5a8 * dVar85;
        dVar85 = (pTVar50->Scale3D).ZW.m128d_f64[1];
        (pTVar50->Scale3D).ZW.m128d_f64[0] = local_618 * dVar20 * (pTVar50->Scale3D).ZW.m128d_f64[0]
        ;
        (pTVar50->Scale3D).ZW.m128d_f64[1] = dVar136 * 0.0 * dVar85;
        dVar85 = (pTVar50->Rotation).XY.m128d_f64[0];
        dVar59 = (pTVar50->Rotation).XY.m128d_f64[1];
        auVar127 = *(undefined1 (*) [16])(pTVar50->Rotation).ZW.m128d_f64;
        dVar153 = auVar127._0_8_;
        dVar137 = auVar127._8_8_;
        auVar98._0_8_ = dVar153 * dVar153 + dVar85 * dVar85;
        auVar98._8_8_ = dVar137 * dVar137 + dVar59 * dVar59;
        auVar81._8_4_ = SUB84(auVar98._8_8_,0);
        auVar81._0_8_ = auVar98._0_8_;
        auVar81._12_4_ = (int)((ulonglong)auVar98._8_8_ >> 0x20);
        auVar82._0_8_ = auVar81._8_8_ + auVar98._0_8_;
        auVar82._8_8_ = auVar98._0_8_ + auVar98._8_8_;
        uVar53 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                  auVar82._0_8_);
        uVar57 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                  auVar82._8_8_);
        auVar94 = sqrtpd(auVar98,auVar82);
        uVar54 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                  auVar82._0_8_);
        uVar58 = -(ulonglong)
                  (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                  auVar82._8_8_);
        auVar127 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar94);
        auVar94 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar94);
        auVar83._0_8_ = uVar54 & (ulonglong)(auVar127._0_8_ * dVar85);
        uVar30 = uVar58 & (ulonglong)(auVar127._8_8_ * dVar59);
        auVar83._8_4_ = (undefined4)uVar30;
        auVar83._12_4_ = (undefined4)(uVar30 >> 0x20);
        auVar15._4_4_ =
             ~(uint)(uVar54 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
        auVar15._0_4_ = ~(uint)uVar54 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
        auVar15._8_4_ = ~(uint)uVar58 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
        auVar15._12_4_ =
             ~(uint)(uVar58 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
        auVar116._0_8_ = uVar53 & (ulonglong)(auVar94._0_8_ * dVar153);
        uVar30 = uVar57 & (ulonglong)(auVar94._8_8_ * dVar137);
        auVar116._8_4_ = (undefined4)uVar30;
        auVar116._12_4_ = (undefined4)(uVar30 >> 0x20);
        auVar107._0_4_ = ~(uint)uVar53 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
        auVar107._4_4_ =
             ~(uint)(uVar53 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
        auVar107._8_4_ = ~(uint)uVar57 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
        auVar107._12_4_ =
             ~(uint)(uVar57 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
        *(undefined1 (*) [16])(pTVar50->Rotation).XY.m128d_f64 = auVar83 | auVar15;
        *(undefined1 (*) [16])(pTVar50->Rotation).ZW.m128d_f64 = auVar116 | auVar107;
        local_468 = *(uint *)(pTVar50->Scale3D).XY.m128d_f64;
        uStack_464 = *(uint *)((longlong)(pTVar50->Scale3D).XY.m128d_f64 + 4);
        uStack_460 = *(uint *)((pTVar50->Scale3D).XY.m128d_f64 + 1);
        uStack_45c = *(uint *)((longlong)(pTVar50->Scale3D).XY.m128d_f64 + 0xc);
        local_458 = *(uint *)(pTVar50->Scale3D).ZW.m128d_f64;
        uStack_454 = *(uint *)((longlong)(pTVar50->Scale3D).ZW.m128d_f64 + 4);
        dVar85 = (double)CONCAT44(uStack_464 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  local_468 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        dVar59 = (double)CONCAT44(uStack_45c & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  uStack_460 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        if (dVar85 <= dVar59) {
          dVar85 = dVar59;
        }
        dVar59 = (double)CONCAT44(uStack_454 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  local_458 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        if (dVar85 <= dVar59) {
          dVar85 = dVar59;
        }
        (this_00->IndexData).ArrayNum =
             (int)(float)(dVar85 * (double)*(float *)&pFVar46[1].field_0x18);
        uVar39 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_4c0 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
        local_4d0 = UE::Math::TVector<double>::OneVector.field0_0x0._0_16_;
        *(undefined1 (*) [16])(pTVar50->Scale3D).XY.m128d_f64 =
             UE::Math::TVector<double>::OneVector.field0_0x0._0_16_;
        (pTVar50->Scale3D).ZW.m128d_f64[0] = (double)uVar39;
        (pTVar50->Scale3D).ZW.m128d_f64[1] = 0.0;
        local_218 = pTStack_588;
        FKSphereElem::SetTransform((FKSphereElem *)this_00,pTVar50);
        uVar117 = local_5f8._0_4_;
        uVar134 = local_5f8._4_4_;
        uVar145 = (undefined4)local_5a8;
        uVar146 = local_5a8._4_4_;
        dVar59 = (double)local_608._0_8_;
        fVar124 = local_528;
        fVar130 = fStack_524;
        fVar131 = fStack_520;
        fVar133 = fStack_51c;
        dVar85 = local_618;
LAB_14cb16ec8:
        uVar122 = local_628._0_4_;
        uVar123 = local_628._4_4_;
      }
      else {
        if (iVar42 == 1) {
          local_500._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
          local_500._s_0.Y = _UNK_150689688;
          local_500._s_0.Z = __real_3ff0000000000000;
          UE::Math::TTransform<double>::TTransform<double>
                    (&local_2e8,(TRotator<double> *)&pFVar46[1].field_0x18,
                     (TVector<double> *)(pFVar46 + 1),(TVector<double> *)&local_500._s_0);
          (pTVar50->Rotation).XY.m128d_f64[0] = local_2e8.Rotation.XY.m128d_f64[0];
          (pTVar50->Rotation).XY.m128d_f64[1] = local_2e8.Rotation.XY.m128d_f64[1];
          (pTVar50->Rotation).ZW.m128d_f64[0] = local_2e8.Rotation.ZW.m128d_f64[0];
          (pTVar50->Rotation).ZW.m128d_f64[1] = local_2e8.Rotation.ZW.m128d_f64[1];
          (pTVar50->Translation).XY.m128d_f64[0] = local_2e8.Translation.XY.m128d_f64[0];
          (pTVar50->Translation).XY.m128d_f64[1] = local_2e8.Translation.XY.m128d_f64[1];
          (pTVar50->Translation).ZW.m128d_f64[0] = local_2e8.Translation.ZW.m128d_f64[0];
          (pTVar50->Translation).ZW.m128d_f64[1] = local_2e8.Translation.ZW.m128d_f64[1];
          (pTVar50->Scale3D).XY.m128d_f64[0] = local_2e8.Scale3D.XY.m128d_f64[0];
          (pTVar50->Scale3D).XY.m128d_f64[1] = local_2e8.Scale3D.XY.m128d_f64[1];
          local_288.Rotation.XY.m128d_f64[0] = (double)CONCAT44(uVar123,uVar122);
          (pTVar50->Scale3D).ZW.m128d_f64[0] = local_2e8.Scale3D.ZW.m128d_f64[0];
          (pTVar50->Scale3D).ZW.m128d_f64[1] = local_2e8.Scale3D.ZW.m128d_f64[1];
          local_288.Rotation.ZW.m128d_f64[0] = (double)CONCAT44(uVar134,uVar117);
          local_288.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(uVar146,uVar145);
          local_288.Translation.XY.m128d_f64[0] = local_640;
          local_288.Translation.ZW.m128d_f64[1] = 0.0;
          local_288.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_288.Scale3D.XY.m128d_f64[0] = local_638;
          local_538.m128_f32[0] = fVar124;
          local_538.m128_f32[1] = fVar130;
          local_538.m128_f32[2] = fVar131;
          local_538.m128_f32[3] = fVar133;
          local_288.Rotation.XY.m128d_f64[1] = dVar137;
          local_288.Rotation.ZW.m128d_f64[1] = dVar153;
          local_288.Translation.XY.m128d_f64[1] = dVar59;
          local_288.Translation.ZW.m128d_f64[0] = dVar138;
          local_288.Scale3D.ZW.m128d_f64[0] = dVar85;
          UE::Math::TTransform<double>::Accumulate(pTVar50,&local_288,(ScalarRegister *)&local_538);
          auVar127 = *(undefined1 (*) [16])(pTVar50->Rotation).ZW.m128d_f64;
          dVar84 = auVar127._0_8_;
          dVar137 = (pTVar50->Rotation).XY.m128d_f64[0];
          dVar153 = (pTVar50->Rotation).XY.m128d_f64[1];
          dVar99 = auVar127._8_8_;
          auVar97._0_8_ = dVar84 * dVar84 + dVar137 * dVar137;
          auVar97._8_8_ = dVar99 * dVar99 + dVar153 * dVar153;
          auVar78._8_4_ = SUB84(auVar97._8_8_,0);
          auVar78._0_8_ = auVar97._0_8_;
          auVar78._12_4_ = (int)((ulonglong)auVar97._8_8_ >> 0x20);
          auVar79._0_8_ = auVar78._8_8_ + auVar97._0_8_;
          auVar79._8_8_ = auVar97._0_8_ + auVar97._8_8_;
          auVar94 = sqrtpd(auVar97,auVar79);
          uVar53 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar79._0_8_);
          uVar57 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar79._8_8_);
          uVar54 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar79._0_8_);
          uVar58 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar79._8_8_);
          auVar127 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar94);
          auVar94 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar94);
          auVar80._0_8_ = uVar54 & (ulonglong)(auVar127._0_8_ * dVar137);
          uVar30 = uVar58 & (ulonglong)(auVar127._8_8_ * dVar153);
          auVar80._8_4_ = (undefined4)uVar30;
          auVar80._12_4_ = (undefined4)(uVar30 >> 0x20);
          auVar115._0_8_ = uVar53 & (ulonglong)(auVar94._0_8_ * dVar84);
          uVar30 = uVar57 & (ulonglong)(auVar94._8_8_ * dVar99);
          auVar115._8_4_ = (undefined4)uVar30;
          auVar115._12_4_ = (undefined4)(uVar30 >> 0x20);
          auVar14._4_4_ =
               ~(uint)(uVar54 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar14._0_4_ = ~(uint)uVar54 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar14._8_4_ = ~(uint)uVar58 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar14._12_4_ =
               ~(uint)(uVar58 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar106._0_4_ = ~(uint)uVar53 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar106._4_4_ =
               ~(uint)(uVar53 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar106._8_4_ = ~(uint)uVar57 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar106._12_4_ =
               ~(uint)(uVar57 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(pTVar50->Rotation).XY.m128d_f64 = auVar80 | auVar14;
          *(undefined1 (*) [16])(pTVar50->Rotation).ZW.m128d_f64 = auVar115 | auVar106;
          SetBoxShapeFromIntervals(this,(FKBoxElem *)this_00);
          uVar39 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          local_4d8 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          local_4e8 = UE::Math::TVector<double>::OneVector.field0_0x0._0_16_;
          *(undefined1 (*) [16])(pTVar50->Scale3D).XY.m128d_f64 =
               UE::Math::TVector<double>::OneVector.field0_0x0._0_16_;
          (pTVar50->Scale3D).ZW.m128d_f64[0] = (double)uVar39;
          (pTVar50->Scale3D).ZW.m128d_f64[1] = 0.0;
          FKBoxElem::SetTransform((FKBoxElem *)this_00,pTVar50);
          goto LAB_14cb16ec8;
        }
        if (iVar42 == 2) {
          pTVar47 = UE::Math::TRotator<double>::Quaternion
                              ((TRotator<double> *)&pFVar46[1].field_0x18,&local_1c8);
          dVar99 = (double)pFVar46[1]._padding_;
          dVar84 = *(double *)&pFVar46[1].Name.Number;
          local_478 = pTVar47->Z;
          dStack_470 = pTVar47->W;
          local_488 = pTVar47->X;
          dStack_480 = pTVar47->Y;
          dVar108 = *(double *)&pFVar46[1].RestOffset;
          (pTVar50->Rotation).XY.m128d_f64[0] = local_488;
          (pTVar50->Rotation).XY.m128d_f64[1] = dStack_480;
          (pTVar50->Rotation).ZW.m128d_f64[0] = local_478;
          (pTVar50->Rotation).ZW.m128d_f64[1] = dStack_470;
          (pTVar50->Translation).XY.m128d_f64[0] = dVar99;
          (pTVar50->Translation).XY.m128d_f64[1] = dVar108;
          (pTVar50->Translation).ZW.m128d_f64[0] = dVar84;
          (pTVar50->Translation).ZW.m128d_f64[1] = 0.0;
          dVar99 = _UNK_150689688;
          local_348.Rotation.ZW.m128d_f64[0] = (double)CONCAT44(uVar134,uVar117);
          (pTVar50->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
          (pTVar50->Scale3D).XY.m128d_f64[1] = dVar99;
          dVar99 = _UNK_150689518;
          (pTVar50->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
          (pTVar50->Scale3D).ZW.m128d_f64[1] = dVar99;
          local_348.Rotation.XY.m128d_f64[0] = (double)CONCAT44(uVar123,uVar122);
          local_348.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(uVar146,uVar145);
          local_348.Translation.XY.m128d_f64[0] = local_640;
          local_348.Translation.ZW.m128d_f64[1] = 0.0;
          local_348.Scale3D.ZW.m128d_f64[1] = 0.0;
          local_348.Scale3D.XY.m128d_f64[0] = local_638;
          local_498.m128_f32[0] = fVar124;
          local_498.m128_f32[1] = fVar130;
          local_498.m128_f32[2] = fVar131;
          local_498.m128_f32[3] = fVar133;
          local_348.Rotation.XY.m128d_f64[1] = dVar137;
          local_348.Rotation.ZW.m128d_f64[1] = dVar153;
          local_348.Translation.XY.m128d_f64[1] = dVar59;
          local_348.Translation.ZW.m128d_f64[0] = dVar138;
          local_348.Scale3D.ZW.m128d_f64[0] = dVar85;
          UE::Math::TTransform<double>::Accumulate(pTVar50,&local_348,(ScalarRegister *)&local_498);
          auVar127 = *(undefined1 (*) [16])(pTVar50->Rotation).ZW.m128d_f64;
          dVar84 = auVar127._0_8_;
          dVar137 = (pTVar50->Rotation).XY.m128d_f64[0];
          dVar153 = (pTVar50->Rotation).XY.m128d_f64[1];
          dVar99 = auVar127._8_8_;
          auVar96._0_8_ = dVar84 * dVar84 + dVar137 * dVar137;
          auVar96._8_8_ = dVar99 * dVar99 + dVar153 * dVar153;
          auVar75._8_4_ = SUB84(auVar96._8_8_,0);
          auVar75._0_8_ = auVar96._0_8_;
          auVar75._12_4_ = (int)((ulonglong)auVar96._8_8_ >> 0x20);
          auVar76._0_8_ = auVar75._8_8_ + auVar96._0_8_;
          auVar76._8_8_ = auVar96._0_8_ + auVar96._8_8_;
          auVar94 = sqrtpd(auVar96,auVar76);
          uVar53 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar76._0_8_);
          uVar57 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar76._8_8_);
          uVar54 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar76._0_8_);
          uVar58 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar76._8_8_);
          auVar127 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar94);
          auVar94 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar94);
          auVar77._0_8_ = uVar54 & (ulonglong)(auVar127._0_8_ * dVar137);
          uVar30 = uVar58 & (ulonglong)(auVar127._8_8_ * dVar153);
          auVar77._8_4_ = (undefined4)uVar30;
          auVar77._12_4_ = (undefined4)(uVar30 >> 0x20);
          auVar114._0_8_ = uVar53 & (ulonglong)(auVar94._0_8_ * dVar84);
          uVar30 = uVar57 & (ulonglong)(auVar94._8_8_ * dVar99);
          auVar114._8_4_ = (undefined4)uVar30;
          auVar114._12_4_ = (undefined4)(uVar30 >> 0x20);
          auVar13._4_4_ =
               ~(uint)(uVar54 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar13._0_4_ = ~(uint)uVar54 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar13._8_4_ = ~(uint)uVar58 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar13._12_4_ =
               ~(uint)(uVar58 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar105._0_4_ = ~(uint)uVar53 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar105._4_4_ =
               ~(uint)(uVar53 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar105._8_4_ = ~(uint)uVar57 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar105._12_4_ =
               ~(uint)(uVar57 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(pTVar50->Rotation).XY.m128d_f64 = auVar77 | auVar13;
          *(undefined1 (*) [16])(pTVar50->Rotation).ZW.m128d_f64 = auVar114 | auVar105;
          SetCapsuleShapeFromIntervals(this,(FKSphylElem *)this_00);
          uVar39 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          local_508 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          local_518 = UE::Math::TVector<double>::OneVector.field0_0x0._0_16_;
          *(undefined1 (*) [16])(pTVar50->Scale3D).XY.m128d_f64 =
               UE::Math::TVector<double>::OneVector.field0_0x0._0_16_;
          (pTVar50->Scale3D).ZW.m128d_f64[0] = (double)uVar39;
          (pTVar50->Scale3D).ZW.m128d_f64[1] = 0.0;
          FKSphylElem::SetTransform((FKSphylElem *)this_00,pTVar50);
          goto LAB_14cb16ec8;
        }
        if (iVar42 == 3) {
          dVar99 = *(double *)&pFVar46[3].RestOffset;
          dVar84 = *(double *)&pFVar46[3].Name.Number;
          dVar108 = *(double *)&pFVar46[3].field_0x18;
          dVar17 = *(double *)&pFVar46[3].UserData;
          pvVar37 = pFVar46[3].UserData.Payload;
          dVar20 = (double)pFVar46[4]._padding_;
          dVar136 = *(double *)&pFVar46[4].RestOffset;
          dVar148 = *(double *)&pFVar46[4].Name.Number;
          dVar19 = *(double *)&pFVar46[4].field_0x18;
          dVar21 = *(double *)&pFVar46[4].UserData;
          pvVar38 = pFVar46[4].UserData.Payload;
          (pTVar50->Rotation).XY.m128d_f64[0] = (double)pFVar46[3]._padding_;
          (pTVar50->Rotation).XY.m128d_f64[1] = dVar99;
          local_3a8.Rotation.XY.m128d_f64[0] = (double)CONCAT44(uVar123,uVar122);
          (pTVar50->Rotation).ZW.m128d_f64[0] = dVar84;
          (pTVar50->Rotation).ZW.m128d_f64[1] = dVar108;
          local_3a8.Rotation.ZW.m128d_f64[0] = (double)CONCAT44(uVar134,uVar117);
          (pTVar50->Translation).XY.m128d_f64[0] = dVar17;
          (pTVar50->Translation).XY.m128d_f64[1] = (double)pvVar37;
          local_3a8.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(uVar146,uVar145);
          local_3a8.Translation.XY.m128d_f64[0] = local_640;
          local_3a8.Translation.ZW.m128d_f64[1] = 0.0;
          (pTVar50->Translation).ZW.m128d_f64[0] = dVar20;
          (pTVar50->Translation).ZW.m128d_f64[1] = dVar136;
          (pTVar50->Scale3D).XY.m128d_f64[0] = dVar148;
          (pTVar50->Scale3D).XY.m128d_f64[1] = dVar19;
          local_3a8.Scale3D.ZW.m128d_f64[1] = 0.0;
          (pTVar50->Scale3D).ZW.m128d_f64[0] = dVar21;
          (pTVar50->Scale3D).ZW.m128d_f64[1] = (double)pvVar38;
          local_3a8.Scale3D.XY.m128d_f64[0] = local_638;
          local_4a8.m128_f32[0] = fVar124;
          local_4a8.m128_f32[1] = fVar130;
          local_4a8.m128_f32[2] = fVar131;
          local_4a8.m128_f32[3] = fVar133;
          local_3a8.Rotation.XY.m128d_f64[1] = dVar137;
          local_3a8.Rotation.ZW.m128d_f64[1] = dVar153;
          local_3a8.Translation.XY.m128d_f64[1] = dVar59;
          local_3a8.Translation.ZW.m128d_f64[0] = dVar138;
          local_3a8.Scale3D.ZW.m128d_f64[0] = dVar85;
          UE::Math::TTransform<double>::Accumulate(pTVar50,&local_3a8,(ScalarRegister *)&local_4a8);
          auVar127 = *(undefined1 (*) [16])(pTVar50->Rotation).ZW.m128d_f64;
          dVar84 = auVar127._0_8_;
          dVar137 = (pTVar50->Rotation).XY.m128d_f64[0];
          dVar153 = (pTVar50->Rotation).XY.m128d_f64[1];
          dVar99 = auVar127._8_8_;
          auVar95._0_8_ = dVar84 * dVar84 + dVar137 * dVar137;
          auVar95._8_8_ = dVar99 * dVar99 + dVar153 * dVar153;
          auVar72._8_4_ = SUB84(auVar95._8_8_,0);
          auVar72._0_8_ = auVar95._0_8_;
          auVar72._12_4_ = (int)((ulonglong)auVar95._8_8_ >> 0x20);
          auVar73._0_8_ = auVar72._8_8_ + auVar95._0_8_;
          auVar73._8_8_ = auVar95._0_8_ + auVar95._8_8_;
          auVar94 = sqrtpd(auVar95,auVar73);
          uVar53 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar73._0_8_);
          uVar57 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar73._8_8_);
          uVar54 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar73._0_8_);
          uVar58 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar73._8_8_);
          auVar127 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar94);
          auVar94 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar94);
          auVar74._0_8_ = uVar54 & (ulonglong)(auVar127._0_8_ * dVar137);
          uVar30 = uVar58 & (ulonglong)(auVar127._8_8_ * dVar153);
          auVar74._8_4_ = (undefined4)uVar30;
          auVar74._12_4_ = (undefined4)(uVar30 >> 0x20);
          auVar113._0_8_ = uVar53 & (ulonglong)(auVar94._0_8_ * dVar84);
          uVar30 = uVar57 & (ulonglong)(auVar94._8_8_ * dVar99);
          auVar113._8_4_ = (undefined4)uVar30;
          auVar113._12_4_ = (undefined4)(uVar30 >> 0x20);
          auVar12._4_4_ =
               ~(uint)(uVar54 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar12._0_4_ = ~(uint)uVar54 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar12._8_4_ = ~(uint)uVar58 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar12._12_4_ =
               ~(uint)(uVar58 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar104._0_4_ = ~(uint)uVar53 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar104._4_4_ =
               ~(uint)(uVar53 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar104._8_4_ = ~(uint)uVar57 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar104._12_4_ =
               ~(uint)(uVar57 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(pTVar50->Rotation).XY.m128d_f64 = auVar74 | auVar12;
          *(undefined1 (*) [16])(pTVar50->Rotation).ZW.m128d_f64 = auVar113 | auVar104;
          FKConvexElem::SetTransform(this_00,pTVar50);
          goto LAB_14cb16ec8;
        }
        if (iVar42 == 5) {
          dVar99 = *(double *)&pFVar46[1].RestOffset;
          dVar84 = *(double *)&pFVar46[1].Name.Number;
          dVar108 = *(double *)&pFVar46[1].field_0x18;
          dVar17 = *(double *)&pFVar46[1].UserData;
          pvVar37 = pFVar46[1].UserData.Payload;
          dVar20 = (double)pFVar46[2]._padding_;
          dVar136 = *(double *)&pFVar46[2].RestOffset;
          dVar148 = *(double *)&pFVar46[2].Name.Number;
          dVar19 = *(double *)&pFVar46[2].field_0x18;
          dVar21 = *(double *)&pFVar46[2].UserData;
          pvVar38 = pFVar46[2].UserData.Payload;
          (pTVar50->Rotation).XY.m128d_f64[0] = (double)pFVar46[1]._padding_;
          (pTVar50->Rotation).XY.m128d_f64[1] = dVar99;
          local_408.Rotation.XY.m128d_f64[0] = (double)CONCAT44(uVar123,uVar122);
          (pTVar50->Rotation).ZW.m128d_f64[0] = dVar84;
          (pTVar50->Rotation).ZW.m128d_f64[1] = dVar108;
          local_408.Rotation.ZW.m128d_f64[0] = (double)CONCAT44(uVar134,uVar117);
          (pTVar50->Translation).XY.m128d_f64[0] = dVar17;
          (pTVar50->Translation).XY.m128d_f64[1] = (double)pvVar37;
          local_408.Scale3D.XY.m128d_f64[1] = (double)CONCAT44(uVar146,uVar145);
          local_408.Translation.XY.m128d_f64[0] = local_640;
          local_408.Translation.ZW.m128d_f64[1] = 0.0;
          (pTVar50->Translation).ZW.m128d_f64[0] = dVar20;
          (pTVar50->Translation).ZW.m128d_f64[1] = dVar136;
          (pTVar50->Scale3D).XY.m128d_f64[0] = dVar148;
          (pTVar50->Scale3D).XY.m128d_f64[1] = dVar19;
          local_408.Scale3D.ZW.m128d_f64[1] = 0.0;
          (pTVar50->Scale3D).ZW.m128d_f64[0] = dVar21;
          (pTVar50->Scale3D).ZW.m128d_f64[1] = (double)pvVar38;
          local_408.Scale3D.XY.m128d_f64[0] = local_638;
          local_4b8.m128_f32[0] = fVar124;
          local_4b8.m128_f32[1] = fVar130;
          local_4b8.m128_f32[2] = fVar131;
          local_4b8.m128_f32[3] = fVar133;
          local_408.Rotation.XY.m128d_f64[1] = dVar137;
          local_408.Rotation.ZW.m128d_f64[1] = dVar153;
          local_408.Translation.XY.m128d_f64[1] = dVar59;
          local_408.Translation.ZW.m128d_f64[0] = dVar138;
          local_408.Scale3D.ZW.m128d_f64[0] = dVar85;
          UE::Math::TTransform<double>::Accumulate(pTVar50,&local_408,(ScalarRegister *)&local_4b8);
          auVar127 = *(undefined1 (*) [16])(pTVar50->Rotation).ZW.m128d_f64;
          dVar84 = auVar127._0_8_;
          dVar137 = (pTVar50->Rotation).XY.m128d_f64[0];
          dVar153 = (pTVar50->Rotation).XY.m128d_f64[1];
          dVar99 = auVar127._8_8_;
          auVar93._0_8_ = dVar84 * dVar84 + dVar137 * dVar137;
          auVar93._8_8_ = dVar99 * dVar99 + dVar153 * dVar153;
          auVar69._8_4_ = SUB84(auVar93._8_8_,0);
          auVar69._0_8_ = auVar93._0_8_;
          auVar69._12_4_ = (int)((ulonglong)auVar93._8_8_ >> 0x20);
          auVar70._0_8_ = auVar69._8_8_ + auVar93._0_8_;
          auVar70._8_8_ = auVar93._0_8_ + auVar93._8_8_;
          auVar94 = sqrtpd(auVar93,auVar70);
          uVar53 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar70._0_8_);
          uVar57 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar70._8_8_);
          uVar54 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar70._0_8_);
          uVar58 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar70._8_8_);
          auVar127 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar94);
          auVar94 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar94);
          auVar71._0_8_ = uVar54 & (ulonglong)(auVar127._0_8_ * dVar137);
          uVar30 = uVar58 & (ulonglong)(auVar127._8_8_ * dVar153);
          auVar71._8_4_ = (undefined4)uVar30;
          auVar71._12_4_ = (undefined4)(uVar30 >> 0x20);
          auVar112._0_8_ = uVar53 & (ulonglong)(auVar94._0_8_ * dVar84);
          uVar30 = uVar57 & (ulonglong)(auVar94._8_8_ * dVar99);
          auVar112._8_4_ = (undefined4)uVar30;
          auVar112._12_4_ = (undefined4)(uVar30 >> 0x20);
          auVar11._4_4_ =
               ~(uint)(uVar54 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar11._0_4_ = ~(uint)uVar54 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar11._8_4_ = ~(uint)uVar58 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar11._12_4_ =
               ~(uint)(uVar58 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar103._0_4_ = ~(uint)uVar53 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar103._4_4_ =
               ~(uint)(uVar53 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar103._8_4_ = ~(uint)uVar57 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar103._12_4_ =
               ~(uint)(uVar57 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(pTVar50->Rotation).XY.m128d_f64 = auVar71 | auVar11;
          *(undefined1 (*) [16])(pTVar50->Rotation).ZW.m128d_f64 = auVar112 | auVar103;
          FKLevelSetElem::SetTransform((FKLevelSetElem *)this_00,pTVar50);
          goto LAB_14cb16ec8;
        }
        bVar41 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_4021748204209962312>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\CollisionPrimitivesMechanic.cpp"
                            ,0x2b8,"false");
        if (bVar41) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TStack_560.UnvisitedBitMask = TStack_560.UnvisitedBitMask & ~TStack_560._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_560);
      this_01 = local_5c0;
    }
    RebuildDrawables(this,false);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnCollisionGeometryChanged);
  }
  return;
}

// GizmoTransformEnded @ 14cb18c30

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
UCollisionPrimitivesMechanic::GizmoTransformEnded
          (UCollisionPrimitivesMechanic *this,UTransformProxy *param_1)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  TSharedPtr<FKAggregateGeom,1> *pTVar3;
  ulonglong uVar4;
  int iVar5;
  FPhysicsDataCollection *pFVar6;
  FKAggregateGeom *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FKAggregateGeom *pFVar10;
  code *pcVar11;
  uint uVar12;
  uint uVar13;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar14;
  bool bVar15;
  FKConvexElem *this_00;
  UObject *pUVar16;
  TSharedRef<FKAggregateGeom,1> *pTVar17;
  atomic<int> *paVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  TTransform<double> *this_01;
  undefined1 *puVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  undefined1 local_res8 [8];
  undefined8 *local_120;
  undefined8 local_118;
  FSharedReferencer<1> FStack_110;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_108;
  int iStack_100;
  uint uStack_fc;
  undefined1 *local_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  int local_e8;
  undefined4 uStack_e4;
  int iStack_e0;
  undefined4 uStack_dc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TSharedRef<FKAggregateGeom,1> local_a8;
  FScriptContainerElement *local_98;
  double dStack_90;
  FScriptContainerElement *local_88;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint local_70;
  uint uStack_6c;
  undefined4 local_4c;
  
  if (((this->PhysicsData).Object == (FPhysicsDataCollection *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar6 = (this->PhysicsData).Object;
  puVar1 = &(this->SelectedPrimitiveIDs).Elements.field_0x10;
  iVar5 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x28;
  pTVar2 = &this->SelectedPrimitiveIDs;
  iStack_100 = 0;
  local_e8 = 0;
  uStack_fc = 1;
  iStack_ec = 0;
  if (iVar5 != 0) {
    puVar23 = *(uint **)&(this->SelectedPrimitiveIDs).Elements.field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar21 = *puVar23;
    while (uVar21 == 0) {
      lVar19 = (longlong)iStack_100;
      local_e8 = local_e8 + 0x20;
      iStack_100 = iStack_100 + 1;
      iStack_ec = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_100) goto LAB_14cb18d1d;
      uVar21 = puVar23[lVar19 + 1];
    }
    uStack_fc = -uVar21 & uVar21;
    uVar4 = (ulonglong)uStack_fc * 2 + 1;
    lVar19 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iStack_ec = local_e8 + -1 + (int)lVar19;
    if (iVar5 < iStack_ec) {
      iStack_ec = iVar5;
    }
  }
LAB_14cb18d1d:
  uVar21 = *(uint *)&(this->SelectedPrimitiveIDs).Elements.field_0x28;
  uStack_e4 = local_4c;
  uVar24 = uVar21 & 0xffffffe0;
  iStack_e0 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 -
              *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34;
  uStack_f0 = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_fc,iStack_100);
  TStack_d0.CurrentBitIndex = iStack_ec;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar20 = (int)uVar21 >> 5;
  TStack_d0._28_4_ = local_4c;
  TStack_d0.BaseBitIndex = local_e8;
  uStack_b0 = CONCAT44(uStack_dc,iStack_e0);
  local_108 = pTVar2;
  local_f8 = puVar1;
  local_d8 = pTVar2;
  TStack_d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar5 < (int)uVar21)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar15)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar25 = *(uint *)&(this->SelectedPrimitiveIDs).Elements.field_0x28;
  if (uVar21 != uVar25) {
    puVar22 = *(undefined1 **)&(this->SelectedPrimitiveIDs).Elements.field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar20 * 4);
    while (uVar21 == 0) {
      lVar19 = (longlong)iVar20;
      uVar24 = uVar24 + 0x20;
      iVar20 = iVar20 + 1;
      uVar21 = uVar25;
      if ((int)((uVar25 - 1) + ((int)(uVar25 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_14cb18e40;
      uVar21 = *(uint *)(puVar22 + lVar19 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar19 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar21 = (int)lVar19 + -1 + uVar24;
    if ((int)uVar25 < (int)uVar21) {
      uVar21 = uVar25;
    }
  }
LAB_14cb18e40:
  while( true ) {
    pTVar14 = local_d8;
    if (*(int *)&(local_d8->Elements).field_0x8 - *(int *)&(local_d8->Elements).field_0x34 !=
        (int)uStack_b0) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_d0.CurrentBitIndex == uVar21) &&
        (TStack_d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar14 == pTVar2))
    {
      pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
      lVar19 = (**(code **)(*(longlong *)pUVar16 + 0x2d8))(pUVar16);
      pcVar11 = *(code **)(*(longlong *)(lVar19 + 0x28) + 0x20);
      if (((this->PhysicsData).Object == (FPhysicsDataCollection *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pTVar17 = MakeShared<FKAggregateGeom,1,FKAggregateGeom_&>
                          (&local_a8,&((this->PhysicsData).Object)->AggGeom);
      pTVar3 = &this->PrimitivePreTransform;
      local_120 = ::operator_new(0x30);
      if (local_120 == (undefined8 *)0x0) {
        local_120 = (undefined8 *)0x0;
      }
      else {
        pFVar7 = pTVar17->Object;
        pTVar8 = (pTVar17->SharedReferenceCount).ReferenceController;
        iVar5 = this->CurrentChangeStamp;
        if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
          paVar18 = (atomic<int> *)&DAT_00000008;
        }
        else {
          paVar18 = &pTVar8->SharedReferenceCount;
          LOCK();
          *paVar18 = (atomic<int>)((int)*paVar18 + 1);
          UNLOCK();
        }
        pTVar9 = (this->PrimitivePreTransform).SharedReferenceCount.ReferenceController;
        pFVar10 = pTVar3->Object;
        if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
          *local_120 = &
                       ___7FCollisionPrimitivesMechanicGeometryChange_UCollisionPrimitivesMechanic__6B_
          ;
          local_120[1] = pFVar10;
          local_120[2] = 0;
        }
        else {
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
          *local_120 = &
                       ___7FCollisionPrimitivesMechanicGeometryChange_UCollisionPrimitivesMechanic__6B_
          ;
          local_120[1] = pFVar10;
          local_120[2] = pTVar9;
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_120[3] = pFVar7;
        local_120[4] = pTVar8;
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          *paVar18 = (atomic<int>)((int)*paVar18 + 1);
          UNLOCK();
        }
        *(int *)(local_120 + 5) = iVar5;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      }
      (*pcVar11)(lVar19 + 0x28,this,&local_120,
                 &CollisionPrimitivesMechanicLocals::CollisionPrimitiveMovementTransactionText);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&this->OnCollisionGeometryChanged);
      pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
      lVar19 = (**(code **)(*(longlong *)pUVar16 + 0x2d8))(pUVar16);
      (**(code **)(*(longlong *)(lVar19 + 0x28) + 0x18))(lVar19 + 0x28);
      RebuildDrawables(this,true);
      local_118 = 0;
      FStack_110.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar3 != (TSharedPtr<FKAggregateGeom,1> *)&local_118) {
        pTVar3->Object = (FKAggregateGeom *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->PrimitivePreTransform).SharedReferenceCount,&FStack_110);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_110.ReferenceController);
      this->bGizmoBeingDragged = false;
      return;
    }
    uVar24 = *(uint *)(*(longlong *)&pTVar14->Elements + (longlong)TStack_d0.CurrentBitIndex * 0xc);
    this_00 = (FKConvexElem *)FKAggregateGeom::GetElement(&pFVar6->AggGeom,uVar24);
    uVar25 = 0;
    if ((int)uVar24 < (this->PrimitiveRenderData).ArrayNum) {
      uVar25 = ~uVar24 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) break;
    this_01 = (TTransform<double> *)
              ((this->PrimitiveRenderData).AllocatorInstance.Data +
              (longlong)(int)uVar24 * 0x80 + 0x20);
    iVar5 = *(int *)&this_00->field_0x14;
    if (iVar5 == 0) {
      bVar15 = UE::Math::TTransform<double>::IsValid(this_01);
      if ((!bVar15) &&
         (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6159921750386671689>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\PhysicsEngine\\SphereElem.h"
                              ,0x49,"InTransform.IsValid()"), bVar15)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      local_98 = (FScriptContainerElement *)(this_01->Translation).XY.m128d_f64[0];
      dStack_90 = (this_01->Translation).XY.m128d_f64[1];
      local_88 = (FScriptContainerElement *)(this_01->Translation).ZW.m128d_f64[0];
      (this_00->VertexData).AllocatorInstance.Data = local_98;
      *(double *)&(this_00->VertexData).ArrayNum = dStack_90;
      (this_00->IndexData).AllocatorInstance.Data = local_88;
      local_70 = *(uint *)(this_01->Scale3D).ZW.m128d_f64;
      uStack_6c = *(uint *)((longlong)(this_01->Scale3D).ZW.m128d_f64 + 4);
      local_80 = *(uint *)(this_01->Scale3D).XY.m128d_f64;
      uStack_7c = *(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 + 4);
      uStack_78 = *(uint *)((this_01->Scale3D).XY.m128d_f64 + 1);
      uStack_74 = *(uint *)((longlong)(this_01->Scale3D).XY.m128d_f64 + 0xc);
      uVar24 = local_80 & uVar12;
      uVar25 = uStack_7c & uVar13;
      if ((double)CONCAT44(uStack_7c & uVar13,local_80 & uVar12) <=
          (double)CONCAT44(uStack_74 & uVar13,uStack_78 & uVar12)) {
        uVar24 = uStack_78 & uVar12;
        uVar25 = uStack_74 & uVar13;
      }
      if ((double)CONCAT44(uVar25,uVar24) <= (double)CONCAT44(uStack_6c & uVar13,local_70 & uVar12))
      {
        uVar24 = local_70 & uVar12;
        uVar25 = uStack_6c & uVar13;
      }
      (this_00->IndexData).ArrayNum =
           (int)(float)((double)CONCAT44(uVar25,uVar24) *
                       (double)(float)(this_00->IndexData).ArrayNum);
    }
    else if (iVar5 == 1) {
      FKBoxElem::SetTransform((FKBoxElem *)this_00,this_01);
      SetBoxShapeFromIntervals(this,(FKBoxElem *)this_00);
    }
    else if (iVar5 == 2) {
      FKSphylElem::SetTransform((FKSphylElem *)this_00,this_01);
      SetCapsuleShapeFromIntervals(this,(FKSphylElem *)this_00);
    }
    else if (iVar5 == 3) {
      FKConvexElem::SetTransform(this_00,this_01);
    }
    else if (iVar5 == 5) {
      FKLevelSetElem::SetTransform((FKLevelSetElem *)this_00,this_01);
    }
    else {
      bVar15 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4021748204209962251>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\CollisionPrimitivesMechanic.cpp"
                          ,0x2f5,"false");
      if (bVar15) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

// GizmoTransformStarted @ 14cb19c00

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
UCollisionPrimitivesMechanic::GizmoTransformStarted
          (UCollisionPrimitivesMechanic *this,UTransformProxy *param_1)

{
  double dVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  bool bVar11;
  UObject *pUVar12;
  longlong lVar13;
  TSharedRef<FKAggregateGeom,1> *pTVar14;
  undefined4 *puVar15;
  undefined1 auStack_178 [32];
  FKAggregateGeom *local_158;
  FSharedReferencer<1> local_150;
  TSharedRef<FKAggregateGeom,1> local_148;
  undefined1 local_138 [96];
  undefined1 local_d8 [96];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  pUVar12 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar13 = (**(code **)(*(longlong *)pUVar12 + 0x2d8))(pUVar12);
  (**(code **)(*(longlong *)(lVar13 + 0x28) + 0x10))
            (lVar13 + 0x28,
             &CollisionPrimitivesMechanicLocals::CollisionPrimitiveMovementTransactionText);
  if ((this->PhysicsData).Object == (FPhysicsDataCollection *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar11) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar14 = MakeShared<FKAggregateGeom,1,FKAggregateGeom_&>
                      (&local_148,&((this->PhysicsData).Object)->AggGeom);
  local_150.ReferenceController = (pTVar14->SharedReferenceCount).ReferenceController;
  local_158 = pTVar14->Object;
  if (local_150.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_150.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_150.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->PrimitivePreTransform != (TSharedPtr<FKAggregateGeom,1> *)&local_158) {
    (this->PrimitivePreTransform).Object = local_158;
    local_158 = (FKAggregateGeom *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->PrimitivePreTransform).SharedReferenceCount,&local_150);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_150.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.SharedReferenceCount.ReferenceController);
  lVar13 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,local_138);
  uVar3 = *(undefined4 *)(lVar13 + 0x24);
  uVar4 = *(undefined4 *)(lVar13 + 0x28);
  uVar5 = *(undefined4 *)(lVar13 + 0x2c);
  dVar1 = *(double *)(lVar13 + 0x30);
  *(undefined4 *)&(this->GizmoStartPosition).field0_0x0 = *(undefined4 *)(lVar13 + 0x20);
  *(undefined4 *)((longlong)&(this->GizmoStartPosition).field0_0x0 + 4) = uVar3;
  *(undefined4 *)((longlong)&(this->GizmoStartPosition).field0_0x0 + 8) = uVar4;
  *(undefined4 *)((longlong)&(this->GizmoStartPosition).field0_0x0 + 0xc) = uVar5;
  (this->GizmoStartPosition).field0_0x0._s_0.Z = dVar1;
  puVar15 = (undefined4 *)(**(code **)(param_1->_padding_ + 0x2c0))(param_1,local_d8);
  uVar3 = puVar15[1];
  uVar4 = puVar15[2];
  uVar5 = puVar15[3];
  uVar6 = puVar15[4];
  uVar7 = puVar15[5];
  uVar8 = puVar15[6];
  uVar9 = puVar15[7];
  *(undefined4 *)&(this->GizmoStartRotation).X = *puVar15;
  *(undefined4 *)((longlong)&(this->GizmoStartRotation).X + 4) = uVar3;
  *(undefined4 *)&(this->GizmoStartRotation).Y = uVar4;
  *(undefined4 *)((longlong)&(this->GizmoStartRotation).Y + 4) = uVar5;
  *(undefined4 *)&(this->GizmoStartRotation).Z = uVar6;
  *(undefined4 *)((longlong)&(this->GizmoStartRotation).Z + 4) = uVar7;
  *(undefined4 *)&(this->GizmoStartRotation).W = uVar8;
  *(undefined4 *)((longlong)&(this->GizmoStartRotation).W + 4) = uVar9;
  lVar13 = (**(code **)(param_1->_padding_ + 0x2c0))(param_1,local_78);
  dVar10 = *(double *)(lVar13 + 0x48);
  dVar1 = *(double *)(lVar13 + 0x50);
  (this->GizmoStartScale).field0_0x0._s_0.X = *(double *)(lVar13 + 0x40);
  (this->GizmoStartScale).field0_0x0._s_0.Y = dVar10;
  this->bGizmoBeingDragged = true;
  (this->GizmoStartScale).field0_0x0._s_0.Z = dVar1;
  return;
}

// HitTest @ 14cb1b210

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
UCollisionPrimitivesMechanic::HitTest
          (UCollisionPrimitivesMechanic *this,FInputDeviceRay *param_1,FInputRayHit *param_2)

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
  bVar4 = UE::Geometry::FGeometrySet3::FindNearestCurveToRay
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

// Initialize @ 14cb1bdd0

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
UCollisionPrimitivesMechanic::Initialize
          (UCollisionPrimitivesMechanic *this,TSharedPtr<FPhysicsDataCollection,1> *param_1,
          TAxisAlignedBox3<double> *param_2,TTransform<double> *param_3)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FPhysicsDataCollection *pFVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  double dVar7;
  
  dVar7 = (param_3->Rotation).XY.m128d_f64[1];
  (this->LocalToWorldTransform).Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
  (this->LocalToWorldTransform).Rotation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_3->Rotation).ZW.m128d_f64[1];
  (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
  (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_3->Translation).XY.m128d_f64[1];
  (this->LocalToWorldTransform).Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0]
  ;
  (this->LocalToWorldTransform).Translation.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_3->Translation).ZW.m128d_f64[1];
  (this->LocalToWorldTransform).Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0]
  ;
  (this->LocalToWorldTransform).Translation.ZW.m128d_f64[1] = dVar7;
  dVar7 = (param_3->Scale3D).XY.m128d_f64[1];
  (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
  (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[1] = dVar7;
  dVar7 = (param_3->Scale3D).ZW.m128d_f64[1];
  (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
  (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1] = dVar7;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (this->PhysicsData).SharedReferenceCount.ReferenceController;
  (this->PhysicsData).Object = pFVar4;
  (this->PhysicsData).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  dVar7 = (param_2->Min).field0_0x0._s_0.Y;
  (this->MeshBounds).Min.field0_0x0._s_0.X = (param_2->Min).field0_0x0._s_0.X;
  (this->MeshBounds).Min.field0_0x0._s_0.Y = dVar7;
  dVar7 = (param_2->Max).field0_0x0._s_0.X;
  (this->MeshBounds).Min.field0_0x0._s_0.Z = (param_2->Min).field0_0x0._s_0.Z;
  (this->MeshBounds).Max.field0_0x0._s_0.X = dVar7;
  dVar7 = (param_2->Max).field0_0x0._s_0.Z;
  this_00 = &this->SelectedPrimitiveIDs;
  (this->MeshBounds).Max.field0_0x0._s_0.Y = (param_2->Max).field0_0x0._s_0.Y;
  (this->MeshBounds).Max.field0_0x0._s_0.Z = dVar7;
  bVar5 = 1 < (this->SelectedPrimitiveIDs).HashSize;
  if (!bVar5) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar1 = &(this->SelectedPrimitiveIDs).Elements.field_0xc;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x2c;
  *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->SelectedPrimitiveIDs).Elements.field_0x10,0);
  }
  if (bVar5) {
    (this->SelectedPrimitiveIDs).HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  UpdateGizmoLocation(this);
  RebuildDrawables(this,true);
  this->CurrentChangeStamp = this->CurrentChangeStamp + 1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// IntervalGizmoValueChanged @ 14cb21710

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
UCollisionPrimitivesMechanic::IntervalGizmoValueChanged
          (UCollisionPrimitivesMechanic *this,UIntervalGizmo *param_1,TVector<double> *param_2,
          float param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FPhysicsDataCollection *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FKBoxElem *pFVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  undefined4 local_2c;
  
  if ((*(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 !=
       *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34) &&
     (this->bGizmoBeingDragged != false)) {
    if (((this->PhysicsData).Object == (FPhysicsDataCollection *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->PhysicsData).Object;
    puVar1 = &(this->SelectedPrimitiveIDs).Elements.field_0x10;
    iVar3 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x28;
    iVar12 = 0;
    uVar7 = 1;
    iVar14 = 0;
    iVar8 = 0;
    if (iVar3 != 0) {
      puVar15 = *(uint **)&(this->SelectedPrimitiveIDs).Elements.field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)puVar1;
      }
      uVar11 = *puVar15;
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar8 = iVar3;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cb2181d;
        uVar11 = puVar15[lVar10 + 1];
      }
      uVar7 = -uVar11 & uVar11;
      uVar2 = (ulonglong)uVar7 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = iVar14 + -1 + (int)lVar10;
      if (iVar3 < iVar8) {
        iVar8 = iVar3;
      }
    }
LAB_14cb2181d:
    uVar11 = *(uint *)&(this->SelectedPrimitiveIDs).Elements.field_0x28;
    uVar16 = uVar11 & 0xffffffe0;
    TStack_70._padding_ = CONCAT44(uVar7,iVar12);
    TStack_70.CurrentBitIndex = iVar8;
    TStack_70.UnvisitedBitMask = 0xffffffff;
    iVar12 = (int)uVar11 >> 5;
    TStack_70._28_4_ = local_2c;
    TStack_70.BaseBitIndex = iVar14;
    uStack_50 = CONCAT44(uStack_7c,
                         *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 -
                         *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34);
    TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar7 = *(uint *)&(this->SelectedPrimitiveIDs).Elements.field_0x28;
    if (uVar11 != uVar7) {
      puVar13 = *(undefined1 **)&(this->SelectedPrimitiveIDs).Elements.field_0x20;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = puVar1;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
      while (uVar11 == 0) {
        lVar10 = (longlong)iVar12;
        uVar16 = uVar16 + 0x20;
        iVar12 = iVar12 + 1;
        uVar11 = uVar7;
        if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12)
        goto LAB_14cb21930;
        uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
      }
      uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar11 = (int)lVar10 + -1 + uVar16;
      if ((int)uVar7 < (int)uVar11) {
        uVar11 = uVar7;
      }
    }
LAB_14cb21930:
    while( true ) {
      if (*(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 -
          *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34 != (int)uStack_50) {
        local_res8[0] = 0;
        `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if ((TStack_70.CurrentBitIndex == uVar11) &&
         (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
      pFVar9 = (FKBoxElem *)
               FKAggregateGeom::GetElement
                         (&pFVar4->AggGeom,
                          *(int *)(*(longlong *)&(this->SelectedPrimitiveIDs).Elements +
                                  (longlong)TStack_70.CurrentBitIndex * 0xc));
      iVar3 = *(int *)((longlong)&pFVar9->_padding_ + 4);
      if (iVar3 != 0) {
        if (iVar3 == 1) {
          SetBoxShapeFromIntervals(this,pFVar9);
        }
        else if (iVar3 == 2) {
          SetCapsuleShapeFromIntervals(this,(FKSphylElem *)pFVar9);
        }
        else if (((iVar3 != 3) && (iVar3 != 5)) &&
                (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_4021748204209962407>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\CollisionPrimitivesMechanic.cpp"
                                    ,0x259,"false"), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    }
    RebuildDrawables(this,false);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnCollisionGeometryChanged);
  }
  return;
}

// IsHitByClick @ 14cb22170

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
UCollisionPrimitivesMechanic::IsHitByClick
          (UCollisionPrimitivesMechanic *this,FInputRayHit *__return_storage_ptr__,
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
  bVar2 = HitTest((UCollisionPrimitivesMechanic *)&this[-1].GizmoStartScale,param_1,&local_58);
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

// OnBeginHover @ 14cb23c00

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
UCollisionPrimitivesMechanic::OnBeginHover
          (UCollisionPrimitivesMechanic *this,FInputDeviceRay *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014cb23c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x28))();
  return;
}

// OnClicked @ 14cb248b0

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
UCollisionPrimitivesMechanic::OnClicked(UCollisionPrimitivesMechanic *this,FInputDeviceRay *param_1)

{
  undefined1 *this_00;
  undefined1 *puVar1;
  double *pdVar2;
  undefined4 uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  UObject *pUVar10;
  longlong lVar11;
  undefined8 uVar12;
  int *piVar13;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar14;
  bool *pbVar15;
  uint *puVar16;
  undefined8 *puVar17;
  TObjectPtr<UGizmoLocalFloatParameterSource>_u_0 *pTVar18;
  FColor *pFVar19;
  longlong *plVar20;
  FWeakObjectPtr *this_01;
  undefined1 auStackY_1d8 [32];
  undefined8 local_1a8;
  initializer_list<int> local_198;
  FWeakObjectPtr *local_188;
  TObjectPtr<UGizmoLocalFloatParameterSource>_u_0 local_178 [2];
  undefined1 local_168 [24];
  undefined8 local_150;
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
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  this_01 = (FWeakObjectPtr *)&this[-1].field_0x5a8;
  local_188 = this_01;
  pUVar10 = FWeakObjectPtr::Get(this_01);
  lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x2d8))(pUVar10);
  (**(code **)(*(longlong *)(lVar11 + 0x28) + 0x10))
            (lVar11 + 0x28,
             &CollisionPrimitivesMechanicLocals::CollisionPrimitiveSelectionTransactionText);
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
  local_178[0] = (TObjectPtr<UGizmoLocalFloatParameterSource>_u_0)
                 (this->BoxZIntervalSource).field0_0x0.DebugPtr;
  local_150 = 0;
  if (local_178[0].DebugPtr != (UGizmoLocalFloatParameterSource *)0x0) {
    pTVar18 = &(this->CapsuleRadiusIntervalSource).field0_0x0;
    if (*(TObjectPtr<UGizmoLocalFloatParameterSource>_u_0 **)&this->field_0x448 !=
        (TObjectPtr<UGizmoLocalFloatParameterSource>_u_0 *)0x0) {
      pTVar18 = *(TObjectPtr<UGizmoLocalFloatParameterSource>_u_0 **)&this->field_0x448;
    }
    (**(code **)pTVar18->DebugPtr)(pTVar18,local_168);
  }
  local_f8._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  local_f8._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  local_f8._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  dStack_e0 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  local_d8 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  dStack_d0 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  bVar8 = UE::Geometry::FGeometrySet3::FindNearestCurveToRay
                    ((FGeometrySet3 *)&this->MeshBounds,(TRay<double> *)&local_f8._s_0,&local_148,
                     (TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                      *)&local_178[0].ObjectPtr);
  if (bVar8) {
    UE::Core::Private::Function::CheckCallable((this->PrimitiveRenderData).AllocatorInstance.Data);
    pFVar5 = (this->PrimitiveRenderData).AllocatorInstance.Data;
    pFVar19 = &this->NormalSegmentColor;
    if (*(FColor **)&this->bShiftToggle != (FColor *)0x0) {
      pFVar19 = *(FColor **)&this->bShiftToggle;
    }
    uVar12 = (**(code **)(*(longlong *)pFVar19 + 8))();
    cVar9 = (*(code *)pFVar5)(uVar12);
    plVar20 = (longlong *)&(this->ShouldAddToSelectionFunc).field_0x10;
    if (cVar9 == '\0') {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->ShouldAddToSelectionFunc);
      plVar6 = *(longlong **)&(this->ShouldAddToSelectionFunc).field_0x28;
      pcVar7 = *(code **)&this->ShouldAddToSelectionFunc;
      if (plVar6 != (longlong *)0x0) {
        plVar20 = plVar6;
      }
      uVar12 = (**(code **)(*plVar20 + 8))(plVar20);
      cVar9 = (*pcVar7)(uVar12);
      puVar1 = &(this->PrimitiveToCurveLookup).field_0x20;
      if (cVar9 != '\0') {
        puVar16 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                          ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                         *)puVar1,local_148.ID);
        local_1a8 = (code *)CONCAT44(local_1a8._4_4_,*puVar16);
        if (*(int *)&(this->GeometrySetToleranceTest).field_0x20 !=
            *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x4) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,*puVar16,
                     (int *)&local_1a8);
        }
        goto LAB_14cb24bf4;
      }
      piVar13 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                             *)puVar1,local_148.ID);
      local_198._First = (int *)&local_1a8;
      local_198._Last = (int *)((longlong)&local_1a8 + 4);
      local_1a8 = (code *)CONCAT44(local_1a8._4_4_,*piVar13);
      pTVar14 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&local_f8._s_0,
                           &local_198);
      if ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00 != pTVar14) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,pTVar14);
      }
    }
    else {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->ShouldAddToSelectionFunc);
      plVar6 = *(longlong **)&(this->ShouldAddToSelectionFunc).field_0x28;
      pcVar7 = *(code **)&this->ShouldAddToSelectionFunc;
      if (plVar6 != (longlong *)0x0) {
        plVar20 = plVar6;
      }
      uVar12 = (**(code **)(*plVar20 + 8))(plVar20);
      cVar9 = (*pcVar7)(uVar12);
      puVar1 = &(this->PrimitiveToCurveLookup).field_0x20;
      if (cVar9 == '\0') {
        pbVar15 = (bool *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                          ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                         *)puVar1,local_148.ID);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,
                   (int *)&local_1a8,pbVar15);
        goto LAB_14cb24bf4;
      }
      piVar13 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                             *)puVar1,local_148.ID);
      local_198._First = (int *)&local_1a8;
      local_198._Last = (int *)((longlong)&local_1a8 + 4);
      local_1a8 = (code *)CONCAT44(local_1a8._4_4_,*piVar13);
      pTVar14 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>
                          ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&local_f8._s_0,
                           &local_198);
      CollisionPrimitivesMechanicLocals::Toggle
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00,pTVar14);
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
    bVar8 = 1 < *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x18;
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
    *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x4 = 0;
    *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements = 0xffffffff;
    *(undefined4 *)&this->bIsDraggingRectangle = 0;
    if ((*(int *)&this->field_0x494 < 0) || (0x80 < *(int *)&this->field_0x494)) {
      *(undefined4 *)&this->field_0x494 = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->GeometrySetToleranceTest).field_0x28,0);
    }
    if (bVar8) {
      *(undefined4 *)&(this->SelectedPrimitiveIDs).Elements.field_0x18 = 1;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00);
    }
  }
LAB_14cb24bf4:
  UpdateDrawables((UCollisionPrimitivesMechanic *)&this[-1].GizmoStartScale);
  if ((local_98._8_4_ - local_64 !=
       *(int *)&(this->GeometrySetToleranceTest).field_0x20 -
       *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x4) ||
     (bVar8 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                        ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98,
                         (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00), !bVar8))
  {
    plVar20 = *(longlong **)&(this->ShouldRemoveFromSelectionFunc).field_0x28;
    (**(code **)(*plVar20 + 0x2c0))(plVar20,&local_f8);
    pUVar10 = FWeakObjectPtr::Get(this_01);
    lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x2d8))(pUVar10);
    local_198._First = *(int **)(*(longlong *)(lVar11 + 0x28) + 0x20);
    puVar17 = ::operator_new(0x130);
    pdVar2 = &(this->GizmoStartRotation).Y;
    if (puVar17 != (undefined8 *)0x0) {
      uVar3 = *(undefined4 *)pdVar2;
      *puVar17 = &___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_;
      *(undefined8 *)
       &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar17 + 1))->Elements = 0;
      puVar17[2] = 0;
      puVar17[5] = 0;
      *(undefined4 *)(puVar17 + 6) = 0;
      *(undefined4 *)((longlong)puVar17 + 0x34) = 0x80;
      *(undefined4 *)(puVar17 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)puVar17 + 0x3c) = 0;
      puVar17[9] = 0;
      *(undefined4 *)(puVar17 + 10) = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(puVar17 + 1),
                 (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_98);
      *(undefined1 *)(puVar17 + 0xb) = 0;
      puVar17[0xc] = local_f8._s_0.X;
      puVar17[0xd] = local_f8._s_0.Y;
      puVar17[0xe] = local_f8._s_0.Z;
      puVar17[0xf] = dStack_e0;
      puVar17[0x10] = local_d8;
      puVar17[0x11] = dStack_d0;
      puVar17[0x12] = local_c8;
      puVar17[0x13] = uStack_c0;
      puVar17[0x14] = CONCAT44(iStack_b4,local_b8);
      puVar17[0x15] = CONCAT44(iStack_ac,iStack_b0);
      puVar17[0x16] = local_a8;
      puVar17[0x17] = uStack_a0;
      puVar17[0x18] = local_f8._s_0.X;
      puVar17[0x19] = local_f8._s_0.Y;
      puVar17[0x1a] = local_f8._s_0.Z;
      puVar17[0x1b] = dStack_e0;
      puVar17[0x1c] = local_d8;
      puVar17[0x1d] = dStack_d0;
      puVar17[0x1e] = local_c8;
      puVar17[0x1f] = uStack_c0;
      *(int *)(puVar17 + 0x20) = local_b8;
      *(int *)((longlong)puVar17 + 0x104) = iStack_b4;
      *(int *)(puVar17 + 0x21) = iStack_b0;
      *(int *)((longlong)puVar17 + 0x10c) = iStack_ac;
      puVar17[0x22] = local_a8;
      puVar17[0x23] = uStack_a0;
      *(undefined4 *)(puVar17 + 0x24) = uVar3;
    }
    local_1a8 = (code *)puVar17;
    (*(code *)local_198._First)
              (lVar11 + 0x28,&this[-1].GizmoStartScale,&local_1a8,
               &CollisionPrimitivesMechanicLocals::CollisionPrimitiveDeselectionTransactionText);
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0x5a8);
    lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x2d8))(pUVar10);
    local_1a8 = *(code **)(*(longlong *)(lVar11 + 0x28) + 0x20);
    piVar13 = ::operator_new(0x130);
    if (piVar13 == (int *)0x0) {
      piVar13 = (int *)0x0;
    }
    else {
      iVar4 = *(int *)pdVar2;
      *(undefined ***)piVar13 =
           &___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_;
      *(undefined8 *)
       &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(piVar13 + 2))->Elements = 0;
      piVar13[4] = 0;
      piVar13[5] = 0;
      piVar13[10] = 0;
      piVar13[0xb] = 0;
      piVar13[0xc] = 0;
      piVar13[0xd] = 0x80;
      piVar13[0xe] = -1;
      piVar13[0xf] = 0;
      piVar13[0x12] = 0;
      piVar13[0x13] = 0;
      piVar13[0x14] = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(piVar13 + 2),
                 (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)this_00);
      *(undefined1 *)(piVar13 + 0x16) = 1;
      *(double *)(piVar13 + 0x18) = local_f8._s_0.X;
      *(double *)(piVar13 + 0x1a) = local_f8._s_0.Y;
      *(double *)(piVar13 + 0x1c) = local_f8._s_0.Z;
      *(double *)(piVar13 + 0x1e) = dStack_e0;
      *(double *)(piVar13 + 0x20) = local_d8;
      *(double *)(piVar13 + 0x22) = dStack_d0;
      *(undefined8 *)(piVar13 + 0x24) = local_c8;
      *(undefined8 *)(piVar13 + 0x26) = uStack_c0;
      *(ulonglong *)(piVar13 + 0x28) = CONCAT44(iStack_b4,local_b8);
      *(ulonglong *)(piVar13 + 0x2a) = CONCAT44(iStack_ac,iStack_b0);
      *(undefined8 *)(piVar13 + 0x2c) = local_a8;
      *(undefined8 *)(piVar13 + 0x2e) = uStack_a0;
      *(double *)(piVar13 + 0x30) = local_f8._s_0.X;
      *(double *)(piVar13 + 0x32) = local_f8._s_0.Y;
      *(double *)(piVar13 + 0x34) = local_f8._s_0.Z;
      *(double *)(piVar13 + 0x36) = dStack_e0;
      *(double *)(piVar13 + 0x38) = local_d8;
      *(double *)(piVar13 + 0x3a) = dStack_d0;
      *(undefined8 *)(piVar13 + 0x3c) = local_c8;
      *(undefined8 *)(piVar13 + 0x3e) = uStack_c0;
      piVar13[0x40] = local_b8;
      piVar13[0x41] = iStack_b4;
      piVar13[0x42] = iStack_b0;
      piVar13[0x43] = iStack_ac;
      *(undefined8 *)(piVar13 + 0x44) = local_a8;
      *(undefined8 *)(piVar13 + 0x46) = uStack_a0;
      piVar13[0x48] = iVar4;
    }
    local_198._First = piVar13;
    (*local_1a8)(lVar11 + 0x28,&this[-1].GizmoStartScale,&local_198,
                 &CollisionPrimitivesMechanicLocals::CollisionPrimitiveSelectionTransactionText);
    UpdateGizmoLocation((UCollisionPrimitivesMechanic *)&this[-1].GizmoStartScale);
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &this->field_0x30);
    this_01 = local_188;
  }
  pUVar10 = FWeakObjectPtr::Get(this_01);
  lVar11 = (**(code **)(*(longlong *)pUVar10 + 0x2d8))(pUVar10);
  (**(code **)(*(longlong *)(lVar11 + 0x28) + 0x18))(lVar11 + 0x28);
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
  local_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
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

// OnDragRectangleChanged @ 14cb26080

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
UCollisionPrimitivesMechanic::OnDragRectangleChanged
          (UCollisionPrimitivesMechanic *this,FCameraRectangle *param_1)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  uint *puVar1;
  code *pcVar2;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  bool *pbVar8;
  undefined8 uVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  byte bVar11;
  ForAnyElementType FVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  UCollisionPrimitivesMechanic *pUVar22;
  longlong *plVar23;
  uint uVar24;
  ulonglong uVar25;
  uint uVar26;
  undefined1 auStackY_2c8 [32];
  <lambda_1> local_288 [8];
  longlong local_280;
  UCollisionPrimitivesMechanic *local_278;
  longlong local_270;
  TArray<bool,TSizedDefaultAllocator<32>_> local_268;
  int local_258;
  uint uStack_254;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_250;
  undefined4 local_248;
  uint uStack_244;
  int iStack_240;
  undefined4 uStack_23c;
  undefined4 local_234;
  int local_230;
  int local_22c;
  int local_228 [2];
  FCameraRectangle *local_220;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_218;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_210;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1f0;
  uint uStack_1e8;
  uint uStack_1e4;
  TBitArray<FDefaultBitArrayAllocator> *local_1e0;
  undefined4 uStack_1d8;
  uint uStack_1d4;
  uint local_1d0;
  undefined4 uStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_1c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1b8;
  undefined8 uStack_198;
  TArrayView<std::nullptr_t,int> local_190;
  code *local_180;
  FGeometrySet3 **local_178;
  FSparseArrayAllocationInfo local_170;
  FGeometrySet3 *local_160;
  FCameraRectangle **local_158;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_150;
  undefined4 local_12c;
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_128;
  FScriptContainerElement local_f0 [8];
  ForAnyElementType local_e8;
  uint local_e0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  uVar26 = 0;
  local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Data.ArrayNum = 0;
  local_128.Data.ArrayMax = 0;
  local_128.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_128.AllocationFlags.NumBits = 0;
  local_128.AllocationFlags.MaxBits = 0x80;
  local_128.FirstFreeIndex = -1;
  local_128.NumFreeIndices = 0;
  local_e8.Data = (FScriptContainerElement *)0x0;
  local_e0 = 0;
  local_d8.Elements._0_8_ = 0;
  local_d8.Elements._8_8_ = 0;
  local_d8.Elements._32_8_ = 0;
  local_d8.Elements._40_4_ = 0;
  local_d8.Elements._44_4_ = 0x80;
  local_d8.Elements._48_4_ = 0xffffffff;
  local_d8.Elements._52_4_ = 0;
  local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8.HashSize = 0;
  local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_268.ArrayNum = 0;
  local_268.ArrayMax = 0;
  local_278 = this;
  local_220 = param_1;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&local_268,(this->GeometrySet).Curves.ArrayNum,Default);
  local_158 = &local_220;
  local_150 = &local_268;
  local_190.DataPtr = (void **)0x0;
  local_180 = UE::Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FGeometrySet3::ParallelFindAllCurvesSatisfying<`UCollisionPrimitivesMechanic::OnDragRectangleChanged'::__l2::<lambda_1>,TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>'::__l2::<lambda_1>,void,int>
              ::Call;
  local_178 = &local_160;
  local_190.ArrayNum = 0;
  local_160 = &this->GeometrySet;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(this->GeometrySet).Curves.ArrayNum,1,
             (TFunctionRef<void___cdecl(int)> *)&local_180,local_288[0],None,&local_190);
  uVar24 = local_128.AllocationFlags.NumBits;
  if (0 < (this->GeometrySet).Curves.ArrayNum) {
    local_280 = 0;
    local_270 = 0;
    pUVar22 = local_278;
    do {
      lVar13 = local_270;
      uVar15 = 0;
      if ((int)uVar26 < local_268.ArrayNum) {
        uVar15 = ~uVar26 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         uVar24 = local_128.AllocationFlags.NumBits, bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (local_268.AllocatorInstance.Data[lVar13] != (FScriptContainerElement)0x0) {
        uVar24 = 0;
        if ((int)uVar26 < (pUVar22->GeometrySet).Curves.ArrayNum) {
          uVar24 = ~uVar26 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar21 = (pUVar22->GeometrySet).Curves.AllocatorInstance.Data + local_280;
        if (local_128.NumFreeIndices == 0) {
          iVar20 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0xc,4,1,(ForAnyElementType *)&local_128,&local_128.Data.ArrayNum,
                              &local_128.Data.ArrayMax);
          iVar6 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            (&local_128.AllocationFlags,1);
          FVar16 = (ForElementType<unsigned_int>)&local_128.AllocationFlags;
          if (local_128.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar16 = local_128.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          bVar11 = (byte)iVar6 & 0x1f;
          if (iVar6 < 0) {
            iVar6 = iVar6 + 0x1f;
            bVar11 = bVar11 - 0x20;
          }
          puVar1 = (uint *)((longlong)FVar16 + (longlong)(iVar6 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << (bVar11 & 0x1f));
          iVar6 = local_128.FirstFreeIndex;
        }
        else {
          iVar6 = *(int *)(local_128.Data.AllocatorInstance.Data +
                          (longlong)local_128.FirstFreeIndex * 0xc + 4);
          local_128.NumFreeIndices = local_128.NumFreeIndices + -1;
          iVar20 = local_128.FirstFreeIndex;
          if (local_128.NumFreeIndices != 0) {
            *(undefined4 *)(local_128.Data.AllocatorInstance.Data + (longlong)iVar6 * 0xc) =
                 0xffffffff;
          }
        }
        local_128.FirstFreeIndex = iVar6;
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex(&local_128,&local_170,iVar20);
        if (local_170.Pointer != (uint *)0x0) {
          *(uint *)local_170.Pointer = *(uint *)pFVar21;
          *(uint *)((longlong)local_170.Pointer + 4) = 0xffffffff;
        }
        uVar24 = *(uint *)local_170.Pointer;
        if ((local_128.Data.ArrayNum - local_128.NumFreeIndices != 1) &&
           (local_128.Data.ArrayNum != local_128.NumFreeIndices)) {
          FVar12.Data = local_f0;
          if (local_e8.Data != (FScriptContainerElement *)0x0) {
            FVar12.Data = local_e8.Data;
          }
          for (iVar20 = *(int *)(FVar12.Data + (ulonglong)(local_e0 - 1 & uVar24) * 4); iVar20 != -1
              ; iVar20 = *(int *)(local_128.Data.AllocatorInstance.Data + (longlong)iVar20 * 0xc + 4
                                 )) {
            if (*(uint *)(local_128.Data.AllocatorInstance.Data + (longlong)iVar20 * 0xc) == uVar24)
            {
              lVar13 = local_270;
              if (iVar20 != -1) {
                *(uint *)(local_128.Data.AllocatorInstance.Data + (longlong)iVar20 * 0xc) = uVar24;
                TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::RemoveAtUninitialized(&local_128,local_170.Index,1);
                pUVar22 = local_278;
                lVar13 = local_270;
                uVar24 = local_128.AllocationFlags.NumBits;
                goto LAB_14cb266d8;
              }
              break;
            }
          }
        }
        uVar19 = 1;
        uVar15 = local_128.Data.ArrayNum - local_128.NumFreeIndices;
        if (3 < uVar15) {
          uVar17 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
          lVar18 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          local_234 = (undefined4)lVar18;
          uVar19 = 1 << ((byte)lVar18 & 0x1f);
        }
        if (((int)uVar15 < 1) || ((int)uVar19 <= (int)local_e0)) {
          uVar24 = local_e0 - 1 & uVar24;
          *(uint *)((longlong)local_170.Pointer + 8) = uVar24;
          FVar12.Data = local_f0;
          if (local_e8.Data != (FScriptContainerElement *)0x0) {
            FVar12.Data = local_e8.Data;
          }
          uVar17 = (longlong)(int)local_e0 - 1U & (longlong)(int)uVar24;
          *(uint *)((longlong)local_170.Pointer + 4) = *(uint *)(FVar12.Data + uVar17 * 4);
          *(int *)(FVar12.Data + uVar17 * 4) = local_170.Index;
          pUVar22 = local_278;
          uVar24 = local_128.AllocationFlags.NumBits;
        }
        else {
          local_e0 = uVar19;
          if (local_e8.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,4);
          }
          if (uVar19 != 0) {
            uVar24 = uVar19;
            if (uVar19 < 2) {
              if (local_e8.Data != (FScriptContainerElement *)0x0) {
                uVar24 = 0;
                goto LAB_14cb264cd;
              }
            }
            else {
LAB_14cb264cd:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_e8,0,uVar24,4);
            }
            if (0 < (int)uVar19) {
              uVar25 = (ulonglong)uVar19;
              uVar17 = 0;
              do {
                FVar12.Data = local_f0;
                if (local_e8.Data != (FScriptContainerElement *)0x0) {
                  FVar12.Data = local_e8.Data;
                }
                uVar7 = uVar17 & (longlong)(int)uVar19 - 1U;
                uVar17 = uVar17 + 1;
                *(undefined4 *)(FVar12.Data + uVar7 * 4) = 0xffffffff;
                uVar25 = uVar25 - 1;
              } while (uVar25 != 0);
            }
          }
          pUVar22 = local_278;
          uVar24 = local_128.AllocationFlags.NumBits;
          if (local_e0 != 0) {
            uStack_254 = 1;
            local_258 = 0;
            pTStack_250 = &local_128.AllocationFlags;
            uStack_244 = 0;
            iStack_240 = 0;
            if (local_128.AllocationFlags.NumBits != 0) {
              FVar16 = (ForElementType<unsigned_int>)&local_128.AllocationFlags;
              if (local_128.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar16 = local_128.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              uVar15 = *(uint *)FVar16;
              iStack_240 = 0;
              local_258 = 0;
              while (uVar15 == 0) {
                iStack_240 = iStack_240 + 0x20;
                lVar18 = (longlong)local_258;
                local_258 = local_258 + 1;
                if ((int)((local_128.AllocationFlags.NumBits - 1U) +
                         ((int)(local_128.AllocationFlags.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
                    local_258) goto LAB_14cb265dc;
                uVar15 = *(uint *)((uchar *)((longlong)FVar16 + 4) + lVar18 * 4);
              }
              uStack_254 = -uVar15 & uVar15;
              uVar17 = (ulonglong)uStack_254 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar17 != 0) {
                for (; uVar17 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              local_230 = (int)lVar18;
              uStack_244 = iStack_240 + -1 + local_230;
              if (local_128.AllocationFlags.NumBits < (int)uStack_244) {
LAB_14cb265dc:
                uStack_244 = local_128.AllocationFlags.NumBits;
              }
            }
            local_248 = 0xffffffff;
            local_218 = &local_128;
            local_210._padding_ = CONCAT44(uStack_254,local_258);
            local_210.CurrentBitIndex = uStack_244;
            local_210.UnvisitedBitMask = 0xffffffff;
            local_210._28_4_ = uStack_23c;
            local_210.BaseBitIndex = iStack_240;
            uVar15 = uStack_244;
            local_210.Array = pTStack_250;
            if ((int)uStack_244 < local_128.AllocationFlags.NumBits) {
              do {
                lVar18 = (longlong)(int)uVar15;
                pFVar21 = (local_218->Data).AllocatorInstance.Data;
                uVar24 = local_e0 - 1 & *(uint *)(pFVar21 + lVar18 * 0xc);
                *(uint *)(pFVar21 + lVar18 * 0xc + 8) = uVar24;
                FVar12.Data = local_f0;
                if (local_e8.Data != (FScriptContainerElement *)0x0) {
                  FVar12.Data = local_e8.Data;
                }
                uVar17 = (longlong)(int)local_e0 - 1U & (longlong)(int)uVar24;
                *(undefined4 *)(pFVar21 + lVar18 * 0xc + 4) =
                     *(undefined4 *)(FVar12.Data + uVar17 * 4);
                *(uint *)(FVar12.Data + uVar17 * 4) = uVar15;
                local_210.UnvisitedBitMask = local_210.UnvisitedBitMask & ~local_210._padding_._4_4_
                ;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_210);
                pUVar22 = local_278;
                uVar24 = local_128.AllocationFlags.NumBits;
                uVar15 = local_210.CurrentBitIndex;
              } while (local_210.CurrentBitIndex < (local_210.Array)->NumBits);
            }
          }
        }
      }
LAB_14cb266d8:
      local_270 = lVar13 + 1;
      local_280 = local_280 + 0x48;
      uVar26 = uVar26 + 1;
      this = local_278;
    } while ((int)uVar26 < (pUVar22->GeometrySet).Curves.ArrayNum);
  }
  uVar26 = 0;
  if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.AllocatorInstance.Data);
    uVar24 = local_128.AllocationFlags.NumBits;
  }
  uStack_1d4 = uVar26;
  local_1d0 = uVar26;
  uStack_1e4 = 1;
  if (uVar24 != 0) {
    FVar16 = (ForElementType<unsigned_int>)&local_128.AllocationFlags;
    if (local_128.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_128.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uVar15 = *(uint *)FVar16;
    uVar26 = 0;
    local_1d0 = 0;
    while (uVar15 == 0) {
      lVar13 = (longlong)(int)uVar26;
      local_1d0 = local_1d0 + 0x20;
      uVar26 = uVar26 + 1;
      uStack_1d4 = uVar24;
      if ((int)((uVar24 - 1) + ((int)(uVar24 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar26)
      goto LAB_14cb26791;
      uVar15 = *(uint *)((uchar *)((longlong)FVar16 + 4) + lVar13 * 4);
    }
    uStack_1e4 = -uVar15 & uVar15;
    uVar17 = (ulonglong)uStack_1e4 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_22c = (int)lVar13;
    uStack_1d4 = (local_1d0 - 1) + local_22c;
    if ((int)uVar24 < (int)uStack_1d4) {
      uStack_1d4 = uVar24;
    }
  }
LAB_14cb26791:
  local_1f0 = &local_128;
  uStack_1cc = local_12c;
  local_1e0 = &local_128.AllocationFlags;
  iStack_1c8 = local_128.Data.ArrayNum - local_128.NumFreeIndices;
  uVar15 = uVar24 & 0xffffffe0;
  uStack_1d8 = 0xffffffff;
  TStack_1b8.CurrentBitIndex = uStack_1d4;
  TStack_1b8.UnvisitedBitMask = 0xffffffff;
  TStack_1b8._padding_ = CONCAT44(uStack_1e4,uVar26);
  iVar20 = (int)uVar24 >> 5;
  TStack_1b8._28_4_ = local_12c;
  TStack_1b8.BaseBitIndex = local_1d0;
  uStack_198 = CONCAT44(uStack_1c4,iStack_1c8);
  uVar19 = uVar24;
  uStack_1e8 = uVar26;
  local_1c0 = local_1f0;
  TStack_1b8.Array = local_1e0;
  if (((int)uVar24 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), uVar19 = local_128.AllocationFlags.NumBits, bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar24 != uVar19) {
    FVar16 = (ForElementType<unsigned_int>)&local_128.AllocationFlags;
    if (local_128.AllocationFlags.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_128.AllocationFlags.AllocatorInstance.SecondaryData;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar20 * 4);
    while (uVar24 == 0) {
      lVar13 = (longlong)iVar20;
      uVar15 = uVar15 + 0x20;
      iVar20 = iVar20 + 1;
      uVar24 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
      goto LAB_14cb268b0;
      uVar24 = *(uint *)((uchar *)((longlong)FVar16 + 4) + lVar13 * 4);
    }
    uVar17 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar24 = (uVar15 - 1) + (int)lVar13;
    if ((int)uVar19 < (int)uVar24) {
      uVar24 = uVar19;
    }
  }
LAB_14cb268b0:
  while( true ) {
    pTVar3 = local_1c0;
    if ((local_1c0->Data).ArrayNum - local_1c0->NumFreeIndices != (int)uStack_198) {
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_288);
    }
    if (((TStack_1b8.CurrentBitIndex == uVar24) && (TStack_1b8.Array == &local_128.AllocationFlags))
       && (pTVar3 == &local_128)) break;
    pbVar8 = (bool *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                     ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                    *)&this->CurveToPrimitiveLookup,
                                   *(int *)((pTVar3->Data).AllocatorInstance.Data +
                                           (longlong)TStack_1b8.CurrentBitIndex * 0xc));
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              (&local_d8,local_228,pbVar8);
    TStack_1b8.UnvisitedBitMask = TStack_1b8.UnvisitedBitMask & ~TStack_1b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1b8);
  }
  UE::Core::Private::Function::CheckCallable(*(void **)&this->ShouldAddToSelectionFunc);
  pcVar2 = *(code **)&this->ShouldAddToSelectionFunc;
  plVar23 = *(longlong **)&(this->ShouldAddToSelectionFunc).field_0x28;
  plVar14 = (longlong *)&(this->ShouldAddToSelectionFunc).field_0x10;
  if (plVar23 != (longlong *)0x0) {
    plVar14 = plVar23;
  }
  uVar9 = (**(code **)(*plVar14 + 8))();
  plVar23 = (longlong *)&(this->ShouldRemoveFromSelectionFunc).field_0x10;
  this_00 = &this->SelectedPrimitiveIDs;
  cVar5 = (*pcVar2)(uVar9);
  if (cVar5 == '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->ShouldRemoveFromSelectionFunc);
    plVar14 = *(longlong **)&(this->ShouldRemoveFromSelectionFunc).field_0x28;
    pcVar2 = *(code **)&this->ShouldRemoveFromSelectionFunc;
    if (plVar14 != (longlong *)0x0) {
      plVar23 = plVar14;
    }
    uVar9 = (**(code **)(*plVar23 + 8))(plVar23);
    cVar5 = (*pcVar2)(uVar9);
    if (cVar5 == '\0') {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=(this_00,&local_d8);
    }
    else {
      pTVar10 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Difference
                          (&this->PreDragSelection,&local_88,&local_d8);
      if (this_00 != pTVar10) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
        Move<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>(this_00,pTVar10);
      }
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
    }
  }
  else {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (this_00,&this->PreDragSelection);
    UE::Core::Private::Function::CheckCallable(*(void **)&this->ShouldRemoveFromSelectionFunc);
    plVar14 = *(longlong **)&(this->ShouldRemoveFromSelectionFunc).field_0x28;
    pcVar2 = *(code **)&this->ShouldRemoveFromSelectionFunc;
    if (plVar14 != (longlong *)0x0) {
      plVar23 = plVar14;
    }
    uVar9 = (**(code **)(*plVar23 + 8))(plVar23);
    cVar5 = (*pcVar2)(uVar9);
    if (cVar5 == '\0') {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                (this_00,&local_d8);
    }
    else {
      CollisionPrimitivesMechanicLocals::Toggle(this_00,&local_d8);
    }
  }
  UpdateDrawables(this);
  local_d8.HashSize = 0;
  if (local_d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_d8.Elements);
  local_e0 = 0;
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_128);
  return;
}

// OnDragRectangleFinished @ 14cb27000

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
UCollisionPrimitivesMechanic::OnDragRectangleFinished
          (UCollisionPrimitivesMechanic *this,FCameraRectangle *param_1,bool param_2)

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
       *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 -
       *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34) ||
     (bVar3 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                        (&this->PreDragSelection,&this->SelectedPrimitiveIDs), !bVar3)) {
    pUVar2 = (this->CurrentActiveProxy).field0_0x0.DebugPtr;
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
      *(undefined ***)pcVar6 =
           &___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_;
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
    (*local_b8)(local_a8,this,&local_b0,
                &CollisionPrimitivesMechanicLocals::CollisionPrimitiveDeselectionTransactionText);
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    lVar5 = (**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
    pcVar6 = *(code **)(*(longlong *)(lVar5 + 0x28) + 0x20);
    pcVar7 = ::operator_new(0x130);
    if (pcVar7 != (code *)0x0) {
      iVar1 = this->CurrentChangeStamp;
      *(undefined8 *)
       &((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(pcVar7 + 8))->Elements = 0;
      *(undefined ***)pcVar7 =
           &___7FCollisionPrimitivesMechanicSelectionChange_UCollisionPrimitivesMechanic__6B_;
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
                 &this->SelectedPrimitiveIDs);
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
    (*pcVar6)(lVar5 + 0x28,this,&local_b8,
              &CollisionPrimitivesMechanicLocals::CollisionPrimitiveSelectionTransactionText);
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

// OnDragRectangleStarted @ 14cb27700

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
UCollisionPrimitivesMechanic::OnDragRectangleStarted(UCollisionPrimitivesMechanic *this)

{
  UInteractiveTool *pUVar1;
  UInteractiveToolManager *pUVar2;
  undefined1 local_res8 [8];
  FText local_18;
  
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&this->PreDragSelection,&this->SelectedPrimitiveIDs);
  this->bIsDraggingRectangle = true;
  UpdateGizmoVisibility(this);
  pUVar1 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar2 = (UInteractiveToolManager *)(**(code **)(pUVar1->_padding_ + 0x2d8))(pUVar1);
  local_18.TextData.Reference =
       CollisionPrimitivesMechanicLocals::CollisionPrimitiveSelectionTransactionText.TextData.
       Reference;
  if (CollisionPrimitivesMechanicLocals::CollisionPrimitiveSelectionTransactionText.TextData.
      Reference != (ITextData *)0x0) {
    (**(code **)((longlong)
                 *CollisionPrimitivesMechanicLocals::CollisionPrimitiveSelectionTransactionText.
                  TextData.Reference + 8))
              (CollisionPrimitivesMechanicLocals::CollisionPrimitiveSelectionTransactionText.
               TextData.Reference,local_res8);
  }
  local_18.Flags =
       CollisionPrimitivesMechanicLocals::CollisionPrimitiveSelectionTransactionText.Flags;
  UE::TransactionUtil::FLongTransactionTracker::Open(&this->LongTransactions,&local_18,pUVar2);
  return;
}

// OnEndHover @ 14cb27890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCollisionPrimitivesMechanic::OnEndHover(UCollisionPrimitivesMechanic *this)

{
  ClearHover((UCollisionPrimitivesMechanic *)&this[-1].GizmoStartRotation.W);
  return;
}

// OnUpdateHover @ 14cb27c30

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
UCollisionPrimitivesMechanic::OnUpdateHover
          (UCollisionPrimitivesMechanic *this,FInputDeviceRay *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  TObjectPtr<UIntervalGizmo>_u_0 *pTVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  int iVar11;
  undefined1 *puVar12;
  TObjectPtr<UGizmoLocalFloatParameterSource>_u_0 local_b8 [2];
  undefined1 local_a8 [24];
  undefined8 local_90;
  TVector<double>_u_0 local_88;
  double dStack_70;
  double local_68;
  double dStack_60;
  FNearest local_58;
  
  local_b8[0] = (TObjectPtr<UGizmoLocalFloatParameterSource>_u_0)
                (this->BoxYIntervalSource).field0_0x0.DebugPtr;
  local_90 = 0;
  if (local_b8[0].DebugPtr != (UGizmoLocalFloatParameterSource *)0x0) {
    pTVar9 = &(this->CapsuleIntervalGizmo).field0_0x0;
    if (*(TObjectPtr<UIntervalGizmo>_u_0 **)&this->bGizmoBeingDragged !=
        (TObjectPtr<UIntervalGizmo>_u_0 *)0x0) {
      pTVar9 = *(TObjectPtr<UIntervalGizmo>_u_0 **)&this->bGizmoBeingDragged;
    }
    (**(code **)pTVar9->DebugPtr)(pTVar9,local_a8);
  }
  local_88._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
  local_88._s_0.Y = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
  local_88._s_0.Z = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
  dStack_70 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
  local_68 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
  dStack_60 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
  bVar4 = UE::Geometry::FGeometrySet3::FindNearestCurveToRay
                    ((FGeometrySet3 *)((this->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 1),
                     (TRay<double> *)&local_88._s_0,&local_58,
                     (TFunction<bool___cdecl(UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&)>
                      *)&local_b8[0].ObjectPtr);
  if (bVar4) {
    if (local_58.ID != *(int *)&this->field_0x448) {
      ClearHover((UCollisionPrimitivesMechanic *)&this[-1].GizmoStartRotation.W);
      puVar8 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                       ::FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                      *)&(this->PrimitiveToCurveLookup).field_0x18,local_58.ID);
      uVar1 = *puVar8;
      *(uint *)&this->field_0x448 = uVar1;
      if (*(int *)&(this->GeometrySetToleranceTest).field_0x18 != *(int *)&this->field_0x494) {
        pTVar10 = *(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> **)
                   &(this->SelectedPrimitiveIDs).Elements.field_0x8;
        if (pTVar10 == (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
          pTVar10 = &this->SelectedPrimitiveIDs;
        }
        iVar11 = *(int *)((pTVar10->Hash).InlineData +
                         (ulonglong)
                         (*(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x10 - 1U & uVar1) *
                         4 + -0x38);
        if (iVar11 != -1) {
          lVar2 = *(longlong *)&(this->GeometrySetToleranceTest).field_0x10;
          do {
            if (*(uint *)(lVar2 + (longlong)iVar11 * 0xc) == uVar1) {
              if (iVar11 != -1) {
                uVar7 = *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x38;
                goto LAB_14cb27dcd;
              }
              break;
            }
            iVar11 = *(int *)(lVar2 + 4 + (longlong)iVar11 * 0xc);
          } while (iVar11 != -1);
        }
      }
      uVar6 = 0;
      if ((int)uVar1 < *(int *)&(this->CurveToPrimitiveLookup).field_0x20) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      uVar7 = *(undefined4 *)
               ((longlong)(int)uVar1 * 0x80 + 0x10 +
               *(longlong *)&(this->CurveToPrimitiveLookup).field_0x18);
LAB_14cb27dcd:
      puVar12 = &(this->CurveToPrimitiveLookup).field_0x18;
      *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x3c = uVar7;
      uVar1 = *(uint *)&this->field_0x448;
      uVar6 = 0;
      if ((int)uVar1 < *(int *)&(this->CurveToPrimitiveLookup).field_0x20) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
      iVar11 = *(int *)((longlong)(int)uVar1 * 0x80 + 8 + *(longlong *)puVar12);
      while( true ) {
        uVar1 = *(uint *)&this->field_0x448;
        uVar6 = 0;
        if ((int)uVar1 < *(int *)&(this->CurveToPrimitiveLookup).field_0x20) {
          uVar6 = ~uVar1 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        if (*(int *)((longlong)(int)uVar1 * 0x80 + 0xc + *(longlong *)puVar12) <= iVar11) break;
        ULineSetComponent::SetLineColor
                  ((ULineSetComponent *)(this->CachedCameraState).Orientation.Z,iVar11,
                   (FColor *)&(this->CurveToPrimitiveLookup).field_0x34);
        iVar11 = iVar11 + 1;
      }
    }
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}

// OnUpdateModifierState @ 14cb286e0

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
UCollisionPrimitivesMechanic::OnUpdateModifierState
          (UCollisionPrimitivesMechanic *this,int param_1,bool param_2)

{
  if (param_1 == 1) {
    (this->CurveToPrimitiveLookup).field_0x48 = param_2;
  }
  else if (param_1 == 2) {
    (this->CurveToPrimitiveLookup).field_0x49 = param_2;
    return;
  }
  return;
}

// OnUpdateModifierState`adjustor{8}' @ 14cb28700

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
   UCollisionPrimitivesMechanic::OnUpdateModifierState`adjustor{8}' (int,bool) __ptr64 */

void __thiscall
UCollisionPrimitivesMechanic::OnUpdateModifierState_adjustor_8__
          (UCollisionPrimitivesMechanic *this,int param_1,bool param_2)

{
  OnUpdateModifierState((UCollisionPrimitivesMechanic *)&this[-1].field_0x5a8,param_1,param_2);
  return;
}

// RebuildDrawables @ 14cb2b670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014cb2b95d) */
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
UCollisionPrimitivesMechanic::RebuildDrawables(UCollisionPrimitivesMechanic *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *this_01;
  TArray<UCollisionPrimitivesMechanic::FPrimitiveRenderData,TSizedDefaultAllocator<32>_> *pTVar3;
  FPhysicsDataCollection *pFVar4;
  ForElementType<FSetElementId> FVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ForElementType<FSetElementId> FVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  FKAggregateGeom *pFVar21;
  undefined1 auStackY_568 [32];
  uint local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  undefined4 local_504;
  code *local_500;
  UCollisionPrimitivesMechanic **local_4f8;
  code *local_4f0;
  UCollisionPrimitivesMechanic **local_4e8;
  code *local_4e0;
  UCollisionPrimitivesMechanic **local_4d8;
  code *local_4d0;
  UCollisionPrimitivesMechanic **local_4c8;
  code *local_4c0;
  UCollisionPrimitivesMechanic **local_4b8;
  UCollisionPrimitivesMechanic *local_4b0;
  undefined1 local_4a8;
  code **local_4a0;
  undefined4 *local_498;
  FKAggregateGeom *local_490;
  undefined4 *local_488;
  undefined4 local_480;
  int local_47c;
  uint *local_478;
  int local_470;
  UCollisionPrimitivesMechanic *local_468;
  undefined1 local_460;
  code **local_458;
  undefined4 *local_450;
  FKAggregateGeom *local_448;
  undefined4 *local_440;
  undefined4 local_438;
  int local_434;
  uint *local_430;
  int local_428;
  UCollisionPrimitivesMechanic *local_420;
  undefined1 local_418;
  code **local_410;
  undefined4 *local_408;
  FKAggregateGeom *local_400;
  undefined4 *local_3f8;
  undefined4 local_3f0;
  int local_3ec;
  uint *local_3e8;
  int local_3e0;
  UCollisionPrimitivesMechanic *local_3d8;
  undefined1 local_3d0;
  code **local_3c8;
  undefined4 *local_3c0;
  FKAggregateGeom *local_3b8;
  undefined4 *local_3b0;
  undefined4 local_3a8;
  int local_3a4;
  uint *local_3a0;
  int local_398;
  UCollisionPrimitivesMechanic *local_390;
  undefined1 local_388;
  code **local_380;
  undefined4 *local_378;
  FKAggregateGeom *local_370;
  undefined4 *local_368;
  undefined4 local_360;
  int local_35c;
  uint *local_358;
  int local_350;
  code *local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined4 uStack_334;
  UCollisionPrimitivesMechanic *pUStack_330;
  undefined4 local_328;
  undefined4 uStack_324;
  longlong *plStack_320;
  code *local_318;
  undefined8 uStack_310;
  longlong local_308 [2];
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  longlong *plStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  int iStack_2b4;
  undefined4 uStack_2b0;
  uint uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined8 uStack_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined4 local_238;
  int iStack_234;
  undefined4 uStack_230;
  uint uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined4 local_1b8;
  int iStack_1b4;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined4 local_138;
  int iStack_134;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined4 local_b8;
  int iStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_568;
  uVar18 = 0;
  local_348 = (code *)0x0;
  plStack_320 = (longlong *)0x0;
  pUStack_330 = this;
  if (param_1) {
    UE::Geometry::FGeometrySet3::Reset(&this->GeometrySet,true,true);
    ULineSetComponent::Clear((this->DrawnPrimitiveEdges).field0_0x0.DebugPtr);
    piVar1 = &(this->PrimitiveRenderData).ArrayMax;
    (this->PrimitiveRenderData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,0,&(this->PrimitiveRenderData).AllocatorInstance,0,piVar1);
    }
    this_00 = &this->PrimitiveToCurveLookup;
    bVar10 = 1 < *(int *)&(this->PrimitiveToCurveLookup).field_0x48;
    if (!bVar10) {
      TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this_00,0,*(int *)&(this->PrimitiveToCurveLookup).field_0x8);
    puVar2 = &(this->PrimitiveToCurveLookup).field_0xc;
    *(undefined4 *)&(this->PrimitiveToCurveLookup).field_0x8 = 0;
    if (*(int *)puVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
    }
    *(undefined4 *)&(this->PrimitiveToCurveLookup).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->PrimitiveToCurveLookup).field_0x34 = 0;
    iVar20 = *(int *)&(this->PrimitiveToCurveLookup).field_0x2c;
    *(undefined4 *)&(this->PrimitiveToCurveLookup).field_0x28 = 0;
    if ((iVar20 < 0) || (0x80 < iVar20)) {
      *(undefined4 *)&(this->PrimitiveToCurveLookup).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PrimitiveToCurveLookup).field_0x10,
                 0);
    }
    if (bVar10) {
      *(undefined4 *)&(this->PrimitiveToCurveLookup).field_0x48 = 1;
      TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                *)this_00);
    }
    this_01 = &this->CurveToPrimitiveLookup;
    bVar10 = 1 < *(int *)&(this->CurveToPrimitiveLookup).field_0x48;
    if (!bVar10) {
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
      UnhashElements((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)this_01);
    }
    puVar2 = &(this->CurveToPrimitiveLookup).field_0xc;
    *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x8 = 0;
    if (*(int *)puVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,(ForAnyElementType *)this_01,0,(int *)puVar2);
    }
    *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x34 = 0;
    iVar20 = *(int *)&(this->CurveToPrimitiveLookup).field_0x2c;
    *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x28 = 0;
    if ((iVar20 < 0) || (0x80 < iVar20)) {
      *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)&(this->CurveToPrimitiveLookup).field_0x10,
                 0);
    }
    if (bVar10) {
      *(undefined4 *)&(this->CurveToPrimitiveLookup).field_0x48 = 1;
      TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Rehash
                ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  *)this_01);
    }
    uVar9 = uStack_310;
    plStack_2f0 = plStack_320;
    uVar8 = uStack_340;
    local_318 = local_348;
    local_348 = UE::Core::Private::Function::
                TFunctionRefCaller<`UCollisionPrimitivesMechanic::RebuildDrawables'::__l5::<lambda_1>,void,UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&>
                ::Call;
    uStack_340 = uStack_310;
    local_328 = local_2f8;
    uStack_324 = uStack_2f4;
    plStack_320 = (longlong *)0x0;
    local_338 = 0x52911cf8;
    uStack_334 = 1;
    uStack_310 = uVar8;
    if (local_318 != (code *)0x0) {
      local_338 = 0x52911cf8;
      uStack_340 = uVar9;
      local_348 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UCollisionPrimitivesMechanic::RebuildDrawables'::__l5::<lambda_1>,void,UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&>
                  ::Call;
      plStack_320 = (longlong *)0x0;
      uStack_334 = 1;
      plVar15 = local_308;
      if (plStack_2f0 != (longlong *)0x0) {
        plVar15 = plStack_2f0;
      }
      (**(code **)(*plVar15 + 0x10))();
      pUStack_330 = pUStack_330;
    }
  }
  else {
    local_348 = UE::Core::Private::Function::
                TFunctionRefCaller<`UCollisionPrimitivesMechanic::RebuildDrawables'::__l7::<lambda_2>,void,UCollisionPrimitivesMechanic::FPrimitiveRenderData_&,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&,int,int,UE::Math::TTransform<double>_const_&,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,FColor_const_&>
                ::Call;
    uStack_340 = uStack_2e0;
    local_328 = local_2c8;
    uStack_324 = uStack_2c4;
    plStack_320 = (longlong *)0x0;
    local_338 = 0x52911d18;
    uStack_334 = 1;
    local_2e8 = 0;
    uStack_2c0 = 0;
  }
  if ((this->PhysicsData).Object == (FPhysicsDataCollection *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar4 = (this->PhysicsData).Object;
  pFVar21 = &pFVar4->AggGeom;
  local_518 = 0;
  uVar14 = uVar18;
  uVar17 = uVar18;
  if (0 < (pFVar4->AggGeom).SphereElems.ArrayNum) {
    do {
      uStack_2b0 = (undefined4)uVar14;
      iVar20 = (int)uVar17;
      local_298._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_298._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_298._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_288._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_288._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_288._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_278._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_278._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_278._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_268._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_268._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_268._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_258._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_258._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_258._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_248._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_248._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_248._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      if (*(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 !=
          *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34) {
        FVar5 = (this->SelectedPrimitiveIDs).Hash.SecondaryData;
        FVar16 = (ForElementType<FSetElementId>)&(this->SelectedPrimitiveIDs).Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = FVar5;
        }
        iVar11 = *(int *)((longlong)FVar16 +
                         ((this->SelectedPrimitiveIDs).HashSize - 1 & uVar17) * 4);
        if (iVar11 != -1) {
          lVar13 = *(longlong *)&(this->SelectedPrimitiveIDs).Elements;
          do {
            if (*(int *)(lVar13 + (longlong)iVar11 * 0xc) == iVar20) goto LAB_14cb2ba9e;
            iVar11 = *(int *)(lVar13 + 4 + (longlong)iVar11 * 0xc);
          } while (iVar11 != -1);
        }
      }
      iVar11 = -1;
LAB_14cb2ba9e:
      local_2b8 = 0;
      lVar13 = 0x340;
      if (iVar11 == -1) {
        lVar13 = 0x330;
      }
      local_480 = 0x18;
      local_514 = *(undefined4 *)(&this->field_0x0 + lVar13);
      local_4a0 = &local_348;
      local_498 = &local_2b8;
      local_488 = &local_514;
      local_478 = &local_518;
      local_4f8 = &local_4b0;
      local_500 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UCollisionPrimitivesMechanic::RebuildDrawables'::__l9::<lambda_3>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
      local_4b0 = this;
      local_4a8 = param_1;
      local_490 = pFVar21;
      local_47c = iVar20;
      local_470 = iVar20;
      iStack_2b4 = iVar20;
      local_2a8 = local_514;
      ULineSetComponent::AddLines
                ((this->DrawnPrimitiveEdges).field0_0x0.DebugPtr,1,
                 (TFunctionRef<void___cdecl(int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&)>
                  *)&local_500,-1,false);
      uStack_2ac = local_518;
      if (param_1) {
        pTVar3 = &this->PrimitiveRenderData;
        pFVar6 = (pTVar3->AllocatorInstance).Data;
        if ((pFVar6 <= (FScriptContainerElement *)&local_2b8) &&
           ((FScriptContainerElement *)&local_2b8 <
            pFVar6 + (longlong)(this->PrimitiveRenderData).ArrayMax * 0x80)) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar11 = (this->PrimitiveRenderData).ArrayNum;
        piVar1 = &(this->PrimitiveRenderData).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1080,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->PrimitiveRenderData).ArrayNum = iVar11 + 1;
        pFVar6 = (pTVar3->AllocatorInstance).Data;
        lVar13 = (longlong)iVar11 * 0x80;
        *(ulonglong *)(pFVar6 + lVar13) = CONCAT44(iStack_2b4,local_2b8);
        *(ulonglong *)(pFVar6 + lVar13 + 8) = CONCAT44(uStack_2ac,uStack_2b0);
        *(ulonglong *)(pFVar6 + lVar13 + 0x10) = CONCAT44(uStack_2a4,local_2a8);
        *(undefined8 *)(pFVar6 + lVar13 + 0x10 + 8) = uStack_2a0;
        *(undefined8 *)(pFVar6 + lVar13 + 0x20) = local_298._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x20 + 8) = local_298._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x30) = local_288._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x30 + 8) = local_288._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x40) = local_278._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x40 + 8) = local_278._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x50) = local_268._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x50 + 8) = local_268._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x60) = local_258._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x60 + 8) = local_258._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x70) = local_248._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x70 + 8) = local_248._8_8_;
      }
      uVar14 = (ulonglong)local_518;
      uVar17 = (ulonglong)(iVar20 + 1U);
    } while ((int)(iVar20 + 1U) < (pFVar4->AggGeom).SphereElems.ArrayNum);
  }
  if (0 < (pFVar4->AggGeom).BoxElems.ArrayNum) {
    do {
      uStack_230 = (undefined4)uVar14;
      iVar20 = (int)uVar17;
      local_218._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_218._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_218._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_208._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_208._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_208._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_1f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_1f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1f8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_1e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_1e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1e8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_1d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_1d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1d8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_1c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_1c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1c8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      if (*(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 !=
          *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34) {
        FVar5 = (this->SelectedPrimitiveIDs).Hash.SecondaryData;
        FVar16 = (ForElementType<FSetElementId>)&(this->SelectedPrimitiveIDs).Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = FVar5;
        }
        iVar11 = *(int *)((longlong)FVar16 +
                         ((this->SelectedPrimitiveIDs).HashSize - 1 & uVar17) * 4);
        if (iVar11 != -1) {
          lVar13 = *(longlong *)&(this->SelectedPrimitiveIDs).Elements;
          do {
            if (*(int *)(lVar13 + (longlong)iVar11 * 0xc) == iVar20) goto LAB_14cb2bd2e;
            iVar11 = *(int *)(lVar13 + 4 + (longlong)iVar11 * 0xc);
          } while (iVar11 != -1);
        }
      }
      iVar11 = -1;
LAB_14cb2bd2e:
      local_238 = 1;
      lVar13 = 0x340;
      if (iVar11 == -1) {
        lVar13 = 0x330;
      }
      local_438 = 0x18;
      local_510 = *(undefined4 *)(&this->field_0x0 + lVar13);
      local_458 = &local_348;
      local_450 = &local_238;
      local_440 = &local_510;
      local_430 = &local_518;
      local_4f0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UCollisionPrimitivesMechanic::RebuildDrawables'::__l14::<lambda_4>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
      local_4e8 = &local_468;
      local_468 = this;
      local_460 = param_1;
      local_448 = pFVar21;
      local_434 = iVar20;
      local_428 = (int)uVar18;
      iStack_234 = iVar20;
      local_228 = local_510;
      ULineSetComponent::AddLines
                ((this->DrawnPrimitiveEdges).field0_0x0.DebugPtr,1,
                 (TFunctionRef<void___cdecl(int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&)>
                  *)&local_4f0,-1,false);
      uStack_22c = local_518;
      if (param_1) {
        pTVar3 = &this->PrimitiveRenderData;
        pFVar6 = (pTVar3->AllocatorInstance).Data;
        if ((pFVar6 <= (FScriptContainerElement *)&local_238) &&
           ((FScriptContainerElement *)&local_238 <
            pFVar6 + (longlong)(this->PrimitiveRenderData).ArrayMax * 0x80)) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar11 = (this->PrimitiveRenderData).ArrayNum;
        piVar1 = &(this->PrimitiveRenderData).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1080,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->PrimitiveRenderData).ArrayNum = iVar11 + 1;
        pFVar6 = (pTVar3->AllocatorInstance).Data;
        lVar13 = (longlong)iVar11 * 0x80;
        *(ulonglong *)(pFVar6 + lVar13) = CONCAT44(iStack_234,local_238);
        *(ulonglong *)(pFVar6 + lVar13 + 8) = CONCAT44(uStack_22c,uStack_230);
        *(ulonglong *)(pFVar6 + lVar13 + 0x10) = CONCAT44(uStack_224,local_228);
        *(undefined8 *)(pFVar6 + lVar13 + 0x10 + 8) = uStack_220;
        *(undefined8 *)(pFVar6 + lVar13 + 0x20) = local_218._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x20 + 8) = local_218._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x30) = local_208._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x30 + 8) = local_208._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x40) = local_1f8._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x40 + 8) = local_1f8._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x50) = local_1e8._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x50 + 8) = local_1e8._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x60) = local_1d8._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x60 + 8) = local_1d8._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x70) = local_1c8._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x70 + 8) = local_1c8._8_8_;
      }
      uVar14 = (ulonglong)local_518;
      uVar17 = (ulonglong)(iVar20 + 1);
      uVar19 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar19;
    } while ((int)uVar19 < (pFVar4->AggGeom).BoxElems.ArrayNum);
  }
  iVar20 = 0;
  if (0 < (pFVar4->AggGeom).SphylElems.ArrayNum) {
    do {
      uStack_1b0 = (undefined4)uVar14;
      iVar11 = (int)uVar17;
      local_198._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_198._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_198._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_188._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_188._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_188._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_178._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_178._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_178._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_168._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_168._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_168._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_158._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_158._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_158._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_148._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_148._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_148._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      if (*(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 !=
          *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34) {
        FVar5 = (this->SelectedPrimitiveIDs).Hash.SecondaryData;
        FVar16 = (ForElementType<FSetElementId>)&(this->SelectedPrimitiveIDs).Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = FVar5;
        }
        iVar12 = *(int *)((longlong)FVar16 +
                         ((this->SelectedPrimitiveIDs).HashSize - 1 & uVar17) * 4);
        if (iVar12 != -1) {
          lVar13 = *(longlong *)&(this->SelectedPrimitiveIDs).Elements;
          do {
            if (*(int *)(lVar13 + (longlong)iVar12 * 0xc) == iVar11) goto LAB_14cb2bfce;
            iVar12 = *(int *)(lVar13 + 4 + (longlong)iVar12 * 0xc);
          } while (iVar12 != -1);
        }
      }
      iVar12 = -1;
LAB_14cb2bfce:
      local_1b8 = 2;
      lVar13 = 0x340;
      if (iVar12 == -1) {
        lVar13 = 0x330;
      }
      local_3f0 = 0x18;
      local_50c = *(undefined4 *)(&this->field_0x0 + lVar13);
      local_410 = &local_348;
      local_408 = &local_1b8;
      local_3f8 = &local_50c;
      local_3e8 = &local_518;
      local_4d8 = &local_420;
      local_4e0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UCollisionPrimitivesMechanic::RebuildDrawables'::__l19::<lambda_5>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
      local_420 = this;
      local_418 = param_1;
      local_400 = pFVar21;
      local_3ec = iVar11;
      local_3e0 = iVar20;
      iStack_1b4 = iVar11;
      local_1a8 = local_50c;
      ULineSetComponent::AddLines
                ((this->DrawnPrimitiveEdges).field0_0x0.DebugPtr,1,
                 (TFunctionRef<void___cdecl(int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&)>
                  *)&local_4e0,-1,false);
      uStack_1ac = local_518;
      if (param_1) {
        pTVar3 = &this->PrimitiveRenderData;
        pFVar6 = (pTVar3->AllocatorInstance).Data;
        if ((pFVar6 <= (FScriptContainerElement *)&local_1b8) &&
           ((FScriptContainerElement *)&local_1b8 <
            pFVar6 + (longlong)(this->PrimitiveRenderData).ArrayMax * 0x80)) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar12 = (this->PrimitiveRenderData).ArrayNum;
        piVar1 = &(this->PrimitiveRenderData).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1080,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->PrimitiveRenderData).ArrayNum = iVar12 + 1;
        pFVar6 = (pTVar3->AllocatorInstance).Data;
        lVar13 = (longlong)iVar12 * 0x80;
        *(ulonglong *)(pFVar6 + lVar13) = CONCAT44(iStack_1b4,local_1b8);
        *(ulonglong *)(pFVar6 + lVar13 + 8) = CONCAT44(uStack_1ac,uStack_1b0);
        *(ulonglong *)(pFVar6 + lVar13 + 0x10) = CONCAT44(uStack_1a4,local_1a8);
        *(undefined8 *)(pFVar6 + lVar13 + 0x10 + 8) = uStack_1a0;
        *(undefined8 *)(pFVar6 + lVar13 + 0x20) = local_198._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x20 + 8) = local_198._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x30) = local_188._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x30 + 8) = local_188._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x40) = local_178._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x40 + 8) = local_178._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x50) = local_168._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x50 + 8) = local_168._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x60) = local_158._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x60 + 8) = local_158._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x70) = local_148._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x70 + 8) = local_148._8_8_;
      }
      uVar14 = (ulonglong)local_518;
      uVar17 = (ulonglong)(iVar11 + 1);
      iVar20 = iVar20 + 1;
    } while (iVar20 < (pFVar4->AggGeom).SphylElems.ArrayNum);
  }
  iVar20 = 0;
  if (0 < (pFVar4->AggGeom).ConvexElems.ArrayNum) {
    do {
      uStack_130 = (undefined4)uVar14;
      iVar11 = (int)uVar17;
      local_118._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_118._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_118._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_108._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_108._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_108._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_f8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_f8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_f8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_e8._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_e8._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_e8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_d8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_d8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_d8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_c8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_c8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_c8._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      if (*(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 !=
          *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34) {
        FVar5 = (this->SelectedPrimitiveIDs).Hash.SecondaryData;
        FVar16 = (ForElementType<FSetElementId>)&(this->SelectedPrimitiveIDs).Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = FVar5;
        }
        iVar12 = *(int *)((longlong)FVar16 +
                         ((this->SelectedPrimitiveIDs).HashSize - 1 & uVar17) * 4);
        if (iVar12 != -1) {
          lVar13 = *(longlong *)&(this->SelectedPrimitiveIDs).Elements;
          do {
            if (*(int *)(lVar13 + (longlong)iVar12 * 0xc) == iVar11) goto LAB_14cb2c26e;
            iVar12 = *(int *)(lVar13 + 4 + (longlong)iVar12 * 0xc);
          } while (iVar12 != -1);
        }
      }
      iVar12 = -1;
LAB_14cb2c26e:
      local_138 = 3;
      lVar13 = 0x340;
      if (iVar12 == -1) {
        lVar13 = 0x330;
      }
      local_3a8 = 0x18;
      local_508 = *(undefined4 *)(&this->field_0x0 + lVar13);
      local_3c8 = &local_348;
      local_3c0 = &local_138;
      local_3b0 = &local_508;
      local_3a0 = &local_518;
      local_4c8 = &local_3d8;
      local_4d0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UCollisionPrimitivesMechanic::RebuildDrawables'::__l24::<lambda_6>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
      local_3d8 = this;
      local_3d0 = param_1;
      local_3b8 = pFVar21;
      local_3a4 = iVar11;
      local_398 = iVar20;
      iStack_134 = iVar11;
      local_128 = local_508;
      ULineSetComponent::AddLines
                ((this->DrawnPrimitiveEdges).field0_0x0.DebugPtr,1,
                 (TFunctionRef<void___cdecl(int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&)>
                  *)&local_4d0,-1,false);
      uStack_12c = local_518;
      if (param_1) {
        pTVar3 = &this->PrimitiveRenderData;
        pFVar6 = (pTVar3->AllocatorInstance).Data;
        if ((pFVar6 <= (FScriptContainerElement *)&local_138) &&
           ((FScriptContainerElement *)&local_138 <
            pFVar6 + (longlong)(this->PrimitiveRenderData).ArrayMax * 0x80)) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar12 = (this->PrimitiveRenderData).ArrayNum;
        piVar1 = &(this->PrimitiveRenderData).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1080,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->PrimitiveRenderData).ArrayNum = iVar12 + 1;
        pFVar6 = (pTVar3->AllocatorInstance).Data;
        lVar13 = (longlong)iVar12 * 0x80;
        *(ulonglong *)(pFVar6 + lVar13) = CONCAT44(iStack_134,local_138);
        *(ulonglong *)(pFVar6 + lVar13 + 8) = CONCAT44(uStack_12c,uStack_130);
        *(ulonglong *)(pFVar6 + lVar13 + 0x10) = CONCAT44(uStack_124,local_128);
        *(undefined8 *)(pFVar6 + lVar13 + 0x10 + 8) = uStack_120;
        *(undefined8 *)(pFVar6 + lVar13 + 0x20) = local_118._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x20 + 8) = local_118._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x30) = local_108._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x30 + 8) = local_108._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x40) = local_f8._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x40 + 8) = local_f8._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x50) = local_e8._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x50 + 8) = local_e8._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x60) = local_d8._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x60 + 8) = local_d8._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x70) = local_c8._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x70 + 8) = local_c8._8_8_;
      }
      uVar14 = (ulonglong)local_518;
      uVar17 = (ulonglong)(iVar11 + 1);
      iVar20 = iVar20 + 1;
    } while (iVar20 < (pFVar4->AggGeom).ConvexElems.ArrayNum);
  }
  iVar20 = 0;
  if (0 < (pFVar4->AggGeom).LevelSetElems.ArrayNum) {
    do {
      uStack_b0 = (undefined4)uVar14;
      iVar11 = (int)uVar17;
      local_98._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_98._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_98._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_88._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_88._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_88._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_78._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_78._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_78._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_68._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_68._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_68._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_58._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_58._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_58._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_48._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_48._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_48._12_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      if (*(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 !=
          *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34) {
        FVar5 = (this->SelectedPrimitiveIDs).Hash.SecondaryData;
        FVar16 = (ForElementType<FSetElementId>)&(this->SelectedPrimitiveIDs).Hash;
        if (FVar5 != (ForElementType<FSetElementId>)0x0) {
          FVar16 = FVar5;
        }
        iVar12 = *(int *)((longlong)FVar16 +
                         ((this->SelectedPrimitiveIDs).HashSize - 1 & uVar17) * 4);
        if (iVar12 != -1) {
          lVar13 = *(longlong *)&(this->SelectedPrimitiveIDs).Elements;
          do {
            if (*(int *)(lVar13 + (longlong)iVar12 * 0xc) == iVar11) goto LAB_14cb2c52e;
            iVar12 = *(int *)(lVar13 + 4 + (longlong)iVar12 * 0xc);
          } while (iVar12 != -1);
        }
      }
      iVar12 = -1;
LAB_14cb2c52e:
      local_b8 = 5;
      lVar13 = 0x340;
      if (iVar12 == -1) {
        lVar13 = 0x330;
      }
      local_360 = 0x18;
      local_504 = *(undefined4 *)(&this->field_0x0 + lVar13);
      local_380 = &local_348;
      local_378 = &local_b8;
      local_368 = &local_504;
      local_358 = &local_518;
      local_4b8 = &local_390;
      local_4c0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UCollisionPrimitivesMechanic::RebuildDrawables'::__l29::<lambda_7>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
                  ::Call;
      local_390 = this;
      local_388 = param_1;
      local_370 = pFVar21;
      local_35c = iVar11;
      local_350 = iVar20;
      iStack_b4 = iVar11;
      local_a8 = local_504;
      ULineSetComponent::AddLines
                ((this->DrawnPrimitiveEdges).field0_0x0.DebugPtr,1,
                 (TFunctionRef<void___cdecl(int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&)>
                  *)&local_4c0,-1,false);
      uStack_ac = local_518;
      if (param_1) {
        pTVar3 = &this->PrimitiveRenderData;
        pFVar6 = (pTVar3->AllocatorInstance).Data;
        if ((pFVar6 <= (FScriptContainerElement *)&local_b8) &&
           ((FScriptContainerElement *)&local_b8 <
            pFVar6 + (longlong)(this->PrimitiveRenderData).ArrayMax * 0x80)) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar10) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar12 = (this->PrimitiveRenderData).ArrayNum;
        piVar1 = &(this->PrimitiveRenderData).ArrayMax;
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x1080,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->PrimitiveRenderData).ArrayNum = iVar12 + 1;
        pFVar6 = (pTVar3->AllocatorInstance).Data;
        lVar13 = (longlong)iVar12 * 0x80;
        *(ulonglong *)(pFVar6 + lVar13) = CONCAT44(iStack_b4,local_b8);
        *(ulonglong *)(pFVar6 + lVar13 + 8) = CONCAT44(uStack_ac,uStack_b0);
        *(ulonglong *)(pFVar6 + lVar13 + 0x10) = CONCAT44(uStack_a4,local_a8);
        *(undefined8 *)(pFVar6 + lVar13 + 0x10 + 8) = uStack_a0;
        *(undefined8 *)(pFVar6 + lVar13 + 0x20) = local_98._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x20 + 8) = local_98._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x30) = local_88._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x30 + 8) = local_88._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x40) = local_78._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x40 + 8) = local_78._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x50) = local_68._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x50 + 8) = local_68._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x60) = local_58._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x60 + 8) = local_58._8_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x70) = local_48._0_8_;
        *(undefined8 *)(pFVar6 + lVar13 + 0x70 + 8) = local_48._8_8_;
      }
      uVar14 = (ulonglong)local_518;
      uVar17 = (ulonglong)(iVar11 + 1);
      iVar20 = iVar20 + 1;
    } while (iVar20 < (pFVar4->AggGeom).LevelSetElems.ArrayNum);
  }
  if ((pFVar4->AggGeom).TaperedCapsuleElems.ArrayNum != 0) {
    bVar10 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_4021748204209962457>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\CollisionPrimitivesMechanic.cpp"
                        ,0x227,"AggGeom.TaperedCapsuleElems.Num() == 0");
    if (bVar10) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (local_348 != (code *)0x0) {
    plVar15 = (longlong *)&local_338;
    if (plStack_320 != (longlong *)0x0) {
      plVar15 = plStack_320;
    }
    (**(code **)(*plVar15 + 0x10))();
  }
  return;
}

// Render @ 14cb2fbe0

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
UCollisionPrimitivesMechanic::Render
          (UCollisionPrimitivesMechanic *this,IToolsContextRenderAPI *param_1)

{
  URectangleMarqueeMechanic *pUVar1;
  UInteractiveTool *pUVar2;
  longlong *plVar3;
  
  pUVar2 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  plVar3 = (longlong *)(**(code **)(pUVar2->_padding_ + 0x2d8))(pUVar2);
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x398))(plVar3);
  (**(code **)(*plVar3 + 0x18))(plVar3,&this->CachedCameraState);
  pUVar1 = (this->MarqueeMechanic).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cb2fc3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1,param_1);
  return;
}

// SelectPrimitive @ 14cb33430

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
UCollisionPrimitivesMechanic::SelectPrimitive(UCollisionPrimitivesMechanic *this,int param_1)

{
  int local_res8 [2];
  int local_res10 [6];
  
  local_res10[0] = param_1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
            (&this->SelectedPrimitiveIDs,local_res8,(bool *)local_res10);
  return;
}

// SetBoxShapeFromIntervals @ 14cb35c50

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
UCollisionPrimitivesMechanic::SetBoxShapeFromIntervals
          (UCollisionPrimitivesMechanic *this,FKBoxElem *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *(uint *)(this->LocalToWorldTransform).Scale3D.XY.m128d_f64;
  uVar2 = *(uint *)((longlong)(this->LocalToWorldTransform).Scale3D.XY.m128d_f64 + 4);
  uVar7 = *(uint *)((this->LocalToWorldTransform).Scale3D.XY.m128d_f64 + 1);
  uVar8 = *(uint *)((longlong)(this->LocalToWorldTransform).Scale3D.XY.m128d_f64 + 0xc);
  uVar9 = *(uint *)(this->LocalToWorldTransform).Scale3D.ZW.m128d_f64;
  uVar10 = *(uint *)((longlong)(this->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 4);
  fVar5 = (float)(**(code **)(((this->BoxXIntervalSource).field0_0x0.DebugPtr)->_padding_ + 0x10))()
  ;
  uVar4 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar3 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  dVar6 = (double)CONCAT44(uVar2 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar6 <= __real_3e45798ee2308c3a) {
    dVar6 = __real_3e45798ee2308c3a;
  }
  dVar6 = (double)(fVar5 + fVar5) / dVar6;
  param_1->X = (float)(double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff
                                      );
  fVar5 = (float)(**(code **)(((this->BoxYIntervalSource).field0_0x0.DebugPtr)->_padding_ + 0x10))()
  ;
  uVar7 = uVar7 & uVar3;
  uVar8 = uVar8 & uVar4;
  if ((double)CONCAT44(uVar8,uVar7) <= __real_3e45798ee2308c3a) {
    uVar7 = SUB84(__real_3e45798ee2308c3a,0);
    uVar8 = (uint)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
  }
  dVar6 = (double)(fVar5 + fVar5) / (double)CONCAT44(uVar8,uVar7);
  param_1->Y = (float)(double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar4,
                                       SUB84(dVar6,0) & uVar3);
  fVar5 = (float)(**(code **)(((this->BoxZIntervalSource).field0_0x0.DebugPtr)->_padding_ + 0x10))()
  ;
  uVar9 = uVar9 & uVar3;
  uVar10 = uVar10 & uVar4;
  if ((double)CONCAT44(uVar10,uVar9) <= __real_3e45798ee2308c3a) {
    uVar9 = SUB84(__real_3e45798ee2308c3a,0);
    uVar10 = (uint)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
  }
  dVar6 = (double)(fVar5 + fVar5) / (double)CONCAT44(uVar10,uVar9);
  param_1->Z = (float)(double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) & uVar4,
                                       SUB84(dVar6,0) & uVar3);
  return;
}

// SetCapsuleShapeFromIntervals @ 14cb35d70

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
UCollisionPrimitivesMechanic::SetCapsuleShapeFromIntervals
          (UCollisionPrimitivesMechanic *this,FKSphylElem *param_1)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = *(uint *)(this->LocalToWorldTransform).Scale3D.XY.m128d_f64;
  uVar6 = *(uint *)((longlong)(this->LocalToWorldTransform).Scale3D.XY.m128d_f64 + 4);
  uVar1 = *(uint *)((this->LocalToWorldTransform).Scale3D.XY.m128d_f64 + 1);
  uVar2 = *(uint *)((longlong)(this->LocalToWorldTransform).Scale3D.XY.m128d_f64 + 0xc);
  uVar7 = *(uint *)(this->LocalToWorldTransform).Scale3D.ZW.m128d_f64;
  uVar8 = *(uint *)((longlong)(this->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 4);
  fVar3 = (float)(**(code **)(((this->CapsuleRadiusIntervalSource).field0_0x0.DebugPtr)->_padding_ +
                             0x10))();
  dVar4 = (double)CONCAT44(uVar2 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar5 = uVar5 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = uVar6 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (dVar4 <= __real_3e45798ee2308c3a) {
    dVar4 = __real_3e45798ee2308c3a;
  }
  if ((double)CONCAT44(uVar6,uVar5) <= __real_3e45798ee2308c3a) {
    uVar5 = SUB84(__real_3e45798ee2308c3a,0);
    uVar6 = (uint)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
  }
  if (dVar4 <= (double)CONCAT44(uVar6,uVar5)) {
    dVar4 = (double)CONCAT44(uVar6,uVar5);
  }
  param_1->Radius =
       (float)(double)CONCAT44((uint)((ulonglong)((double)fVar3 / dVar4) >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84((double)fVar3 / dVar4,0) &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  fVar3 = (float)(**(code **)(((this->CapsuleLengthIntervalSource).field0_0x0.DebugPtr)->_padding_ +
                             0x10))();
  uVar7 = uVar7 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = uVar8 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar8,uVar7) <= __real_3e45798ee2308c3a) {
    uVar7 = SUB84(__real_3e45798ee2308c3a,0);
    uVar8 = (uint)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
  }
  dVar4 = (double)(fVar3 + fVar3) / (double)CONCAT44(uVar8,uVar7);
  param_1->Length =
       (float)(double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar4,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  return;
}

// SetWorld @ 14cb386f0

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
UCollisionPrimitivesMechanic::SetWorld(UCollisionPrimitivesMechanic *this,UWorld *param_1)

{
  APreviewGeometryActor *this_00;
  UClass *pUVar1;
  UPreviewGeometry *pUVar2;
  ULineSetComponent *pUVar3;
  UInteractiveTool *pUVar4;
  UInteractiveToolManager *pUVar5;
  UMaterialInterface *pUVar6;
  longlong *plVar7;
  double *pdVar8;
  undefined1 auStack_138 [32];
  FString local_118;
  undefined1 local_108 [32];
  __m128d local_e8;
  FObjectInstancingGraph *local_d8;
  UPackage *pUStack_d0;
  __m128d local_c8;
  double local_b8;
  double dStack_b0;
  double *local_a0;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  pUVar2 = (this->PreviewGeometry).field0_0x0.DebugPtr;
  if (pUVar2 != (UPreviewGeometry *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x2b8))(pUVar2);
    this_00 = (pUVar2->ParentActor).field0_0x0.DebugPtr;
    if (this_00 != (APreviewGeometryActor *)0x0) {
      AActor::Destroy((AActor *)this_00,false,true);
      (pUVar2->ParentActor).field0_0x0.DebugPtr = (APreviewGeometryActor *)0x0;
    }
    (this->PreviewGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UPreviewGeometry::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_108,pUVar1);
  local_108._8_8_ = this;
  pUVar2 = (UPreviewGeometry *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_108);
  if (local_c8.m128d_f64[0] != 0.0) {
    pdVar8 = &local_b8;
    if (local_a0 != (double *)0x0) {
      pdVar8 = local_a0;
    }
    (**(code **)((longlong)*pdVar8 + 0x10))(pdVar8);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UPreviewGeometry *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->PreviewGeometry).field0_0x0.DebugPtr = pUVar2;
  local_108._0_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[0];
  local_108._8_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[1];
  local_108._16_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[2];
  local_108._24_8_ = (undefined8)GlobalVectorConstants::Float0001.m128_f32[3];
  local_d8 = (FObjectInstancingGraph *)(double)GlobalVectorConstants::FloatZero.m128_f32[2];
  pUStack_d0 = (UPackage *)(double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_e8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_e8.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_e8.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_b8 = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  dStack_b0 = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_c8.m128d_f64[1]._0_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_c8.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_c8.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  UPreviewGeometry::CreateInWorld(pUVar2,param_1,(TTransform<double> *)local_108);
  pUVar2 = (this->PreviewGeometry).field0_0x0.DebugPtr;
  ::FString::FString(&local_118,"CollisionPrimitives");
  pUVar3 = UPreviewGeometry::AddLineSet(pUVar2,&local_118);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (ULineSetComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->DrawnPrimitiveEdges).field0_0x0.DebugPtr = pUVar3;
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  pUVar3 = (this->DrawnPrimitiveEdges).field0_0x0.DebugPtr;
  pUVar4 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar5 = (UInteractiveToolManager *)(**(code **)(pUVar4->_padding_ + 0x2d8))(pUVar4);
  pUVar6 = ToolSetupUtil::GetDefaultLineComponentMaterial(pUVar5,false);
  ULineSetComponent::SetLineMaterial(pUVar3,pUVar6);
  if (local_88._64_8_ != 0) {
    plVar7 = (longlong *)(local_88 + 0x50);
    if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_88._104_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// Setup @ 14cb39020

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
UCollisionPrimitivesMechanic::Setup(UCollisionPrimitivesMechanic *this,UInteractiveTool *param_1)

{
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  URectangleMarqueeMechanic *pUVar7;
  UObject *pUVar8;
  USingleClickOrDragInputBehavior *pUVar9;
  UMouseHoverBehavior *pUVar10;
  UInteractiveTool *pUVar11;
  UInteractiveToolManager *this_00;
  UInteractiveGizmoManager *pUVar12;
  UTransformProxy *pUVar13;
  UCombinedTransformGizmo *pUVar14;
  UGizmoLocalFloatParameterSource *pUVar15;
  FKAggregateGeom *pFVar16;
  UClass *pUVar17;
  UIntervalGizmo *pUVar18;
  FString *pFVar19;
  undefined ***pppuVar20;
  longlong *plVar21;
  wchar_t *pwVar22;
  wchar_t *pwVar23;
  undefined1 *puVar24;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [16];
  FString local_178;
  TObjectPtr<UGizmoLocalFloatParameterSource>_u_0 local_168;
  undefined8 local_160;
  TObjectPtr<UGizmoLocalFloatParameterSource>_u_0 local_158;
  undefined8 local_150;
  TObjectPtr<UGizmoLocalFloatParameterSource>_u_0 local_148;
  undefined8 local_140;
  undefined4 local_138;
  FString local_130;
  TObjectPtr<UGizmoLocalFloatParameterSource>_u_0 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [80];
  longlong local_98 [3];
  longlong *local_80;
  undefined1 local_68 [16];
  undefined **local_58;
  code *apcStack_50 [3];
  ForAnyElementType local_38;
  
  local_38.Data = (FScriptContainerElement *)(__security_cookie.value ^ (ulonglong)auStack_1a8);
  UInteractionMechanic::Setup((UInteractionMechanic *)this,param_1);
  pUVar7 = NewObject<URectangleMarqueeMechanic>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (URectangleMarqueeMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->MarqueeMechanic).field0_0x0.DebugPtr = pUVar7;
  pUVar7->bUseExternalClickDragBehavior = true;
  pUVar7 = (this->MarqueeMechanic).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar7 + 0x2b0))(pUVar7,param_1);
  local_188._0_8_ = OnDragRectangleStarted;
  local_188._8_4_ = 0;
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnDragRectangleStarted;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = local_188._12_4_;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UCollisionPrimitivesMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &((this->MarqueeMechanic).field0_0x0.DebugPtr)->OnDragRectangleStarted,
             (UCollisionPrimitivesMechanic *)local_188,(pmf_65f799cf *)this);
  local_188._0_8_ = OnDragRectangleChanged;
  local_188._8_4_ = 0;
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnDragRectangleChanged;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = local_188._12_4_;
  TMulticastDelegateRegistration<void___cdecl(FCameraRectangle_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UCollisionPrimitivesMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(FCameraRectangle_const_&),FDefaultDelegateUserPolicy>
              *)&((this->MarqueeMechanic).field0_0x0.DebugPtr)->OnDragRectangleChanged,
             (UCollisionPrimitivesMechanic *)local_188,(pmf_4f3055ab *)this);
  local_188._0_8_ = OnDragRectangleFinished;
  local_188._8_8_ = (ulonglong)(uint)local_188._12_4_ << 0x20;
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnDragRectangleFinished;
  local_178.Data.ArrayNum = local_188._8_4_;
  local_178.Data.ArrayMax = local_188._12_4_;
  TMulticastDelegateRegistration<void___cdecl(FCameraRectangle_const_&,bool),FDefaultDelegateUserPolicy>
  ::AddUObject<UCollisionPrimitivesMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(FCameraRectangle_const_&,bool),FDefaultDelegateUserPolicy>
              *)&((this->MarqueeMechanic).field0_0x0.DebugPtr)->OnDragRectangleFinished,
             (UCollisionPrimitivesMechanic *)local_188,(pmf_3e7fef9b *)this);
  pUVar8 = GetTransientPackageAsObject();
  pUVar9 = NewObject<USingleClickOrDragInputBehavior>(pUVar8);
  pUVar7 = (this->MarqueeMechanic).field0_0x0.DebugPtr;
  puVar24 = &pUVar7->field_0x30;
  if (pUVar7 == (URectangleMarqueeMechanic *)0x0) {
    puVar24 = (undefined1 *)0x0;
  }
  (**(code **)(pUVar9->_padding_ + 0x378))(pUVar9,&this->field_0x30,puVar24);
  apcStack_50[2] = (code *)0x0;
  apcStack_50[0] = FInputDeviceState::IsShiftKeyDown;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
       ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&pUVar9->Modifiers,1,(TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar20 = &local_58;
    if ((undefined ***)apcStack_50[2] != (undefined ***)0x0) {
      pppuVar20 = (undefined ***)apcStack_50[2];
    }
    (*(code *)(*pppuVar20)[2])();
  }
  apcStack_50[2] = (code *)0x0;
  apcStack_50[0] = FInputDeviceState::IsCtrlKeyDown;
  local_58 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_68._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
       ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&pUVar9->Modifiers,2,(TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_68);
  if ((code *)local_68._0_8_ != (code *)0x0) {
    pppuVar20 = &local_58;
    if ((undefined ***)apcStack_50[2] != (undefined ***)0x0) {
      pppuVar20 = (undefined ***)apcStack_50[2];
    }
    (*(code *)(*pppuVar20)[2])();
  }
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  (**(code **)(*(longlong *)pUVar8 + 0x2f8))(pUVar8,pUVar9,0);
  pUVar8 = GetTransientPackageAsObject();
  pUVar10 = NewObject<UMouseHoverBehavior>(pUVar8);
  (**(code **)(*(longlong *)pUVar10 + 800))(pUVar10,&this->field_0x38);
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  (**(code **)(*(longlong *)pUVar8 + 0x2f8))(pUVar8,pUVar10,0);
  uVar6 = __real_40a00000;
  (this->NormalSegmentColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Red.field0_0x0;
  (this->HoverColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Green.field0_0x0;
  (this->SelectedColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Yellow.field0_0x0;
  this->SegmentsThickness = 1.0;
  local_68._0_8_ = *(undefined8 *)&this->GeometrySetToleranceTest;
  dVar3 = *(double *)&(this->GeometrySetToleranceTest).field_0x8;
  local_58 = *(undefined ***)&(this->GeometrySetToleranceTest).field_0x10;
  dVar5 = *(double *)&(this->GeometrySetToleranceTest).field_0x18;
  dVar4 = *(double *)&(this->GeometrySetToleranceTest).field_0x20;
  apcStack_50[2] = *(code **)&(this->GeometrySetToleranceTest).field_0x28;
  *(code **)&this->GeometrySetToleranceTest =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UCollisionPrimitivesMechanic::Setup'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&>
       ::Call;
  *(undefined8 *)&(this->GeometrySetToleranceTest).field_0x8 = local_68._8_8_;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x10 = 0x52911cd8;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x14 = 1;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x18 = uVar6;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x1c = apcStack_50[0]._4_4_;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x20 = apcStack_50[1]._0_4_;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x24 = apcStack_50[1]._4_4_;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x28 = 0;
  *(undefined4 *)&(this->GeometrySetToleranceTest).field_0x2c = 0;
  local_68._8_8_ = dVar3;
  apcStack_50[0] = (code *)dVar5;
  apcStack_50[1] = (code *)dVar4;
  if ((double)local_68._0_8_ != 0.0) {
    pppuVar20 = &local_58;
    if ((undefined ***)apcStack_50[2] != (undefined ***)0x0) {
      pppuVar20 = (undefined ***)apcStack_50[2];
    }
    (*(code *)(*pppuVar20)[2])();
  }
  pUVar11 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  this_00 = (UInteractiveToolManager *)(**(code **)(pUVar11->_padding_ + 0x2d8))(pUVar11);
  pUVar12 = UInteractiveToolManager::GetPairedGizmoManager(this_00);
  pUVar13 = NewObject<UTransformProxy>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->TranslateTransformProxy).field0_0x0.DebugPtr = pUVar13;
  pUVar13 = NewObject<UTransformProxy>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->SphereTransformProxy).field0_0x0.DebugPtr = pUVar13;
  pUVar13 = NewObject<UTransformProxy>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->BoxTransformProxy).field0_0x0.DebugPtr = pUVar13;
  pUVar13 = NewObject<UTransformProxy>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->CapsuleTransformProxy).field0_0x0.DebugPtr = pUVar13;
  pUVar13 = NewObject<UTransformProxy>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar13 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->FullTransformProxy).field0_0x0.DebugPtr = pUVar13;
  local_188._0_8_ = (FScriptContainerElement *)0x0;
  local_188._8_8_ = 0;
  pUVar14 = UE::TransformGizmoUtil::CreateCustomTransformGizmo
                      (pUVar12,TranslateAllPlanes|TranslateAllAxes,this,(FString *)local_188);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UCombinedTransformGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->TranslateTransformGizmo).field0_0x0.DebugPtr = pUVar14;
  if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  local_188._0_8_ = (FScriptContainerElement *)0x0;
  local_188._8_8_ = 0;
  pUVar14 = UE::TransformGizmoUtil::CreateCustomTransformGizmo
                      (pUVar12,ScaleUniform|TranslateAllPlanes|TranslateAllAxes,this,
                       (FString *)local_188);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UCombinedTransformGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->SphereTransformGizmo).field0_0x0.DebugPtr = pUVar14;
  if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  local_188._0_8_ = (FScriptContainerElement *)0x0;
  local_188._8_8_ = 0;
  pUVar14 = UE::TransformGizmoUtil::CreateCustomTransformGizmo
                      (pUVar12,RotateAllAxes|TranslateAllPlanes|TranslateAllAxes,this,
                       (FString *)local_188);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UCombinedTransformGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->BoxTransformGizmo).field0_0x0.DebugPtr = pUVar14;
  if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  pUVar15 = NewObject<UGizmoLocalFloatParameterSource>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UGizmoLocalFloatParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->BoxXIntervalSource).field0_0x0.DebugPtr = pUVar15;
  pUVar15 = NewObject<UGizmoLocalFloatParameterSource>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UGizmoLocalFloatParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->BoxYIntervalSource).field0_0x0.DebugPtr = pUVar15;
  pUVar15 = NewObject<UGizmoLocalFloatParameterSource>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UGizmoLocalFloatParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->BoxZIntervalSource).field0_0x0.DebugPtr = pUVar15;
  pUVar15 = NewObject<UGizmoLocalFloatParameterSource>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UGizmoLocalFloatParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->CapsuleRadiusIntervalSource).field0_0x0.DebugPtr = pUVar15;
  pUVar15 = NewObject<UGizmoLocalFloatParameterSource>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar15 != (UGizmoLocalFloatParameterSource *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar15);
  }
  (this->CapsuleLengthIntervalSource).field0_0x0.DebugPtr = pUVar15;
  pcVar2 = *(code **)(pUVar12->_padding_ + 0x2c0);
  pFVar16 = (FKAggregateGeom *)GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pFVar16,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar17 = Z_Construct_UClass_UIntervalGizmoBuilder_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_e8,pUVar17);
  local_e8._8_8_ = pFVar16;
  pUVar8 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_e8);
  if ((double)local_e8._64_8_ != 0.0) {
    plVar21 = local_98;
    if (local_80 != (longlong *)0x0) {
      plVar21 = local_80;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  (*pcVar2)(pUVar12,&UIntervalGizmo::GizmoName,pUVar8);
  ::FString::FString((FString *)local_188,L"BoxSizeInterval");
  pUVar18 = (UIntervalGizmo *)
            (**(code **)(pUVar12->_padding_ + 0x2d0))
                      (pUVar12,&UIntervalGizmo::GizmoName,local_188,this);
  if (pUVar18 == (UIntervalGizmo *)0x0) {
    pFVar19 = GetTypeName<UIntervalGizmo>(&local_178);
    if ((pFVar19->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar22);
  }
  pUVar17 = Z_Construct_UClass_UIntervalGizmo_NoRegister();
  iVar1 = (int)pUVar17->_padding_;
  if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar17->_padding_)) {
    pFVar19 = GetTypeName<UIntervalGizmo>(&local_130);
    pwVar22 = L"";
    if ((pFVar19->Data).ArrayNum == 0) {
      pwVar23 = L"";
    }
    else {
      pwVar23 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
    }
    pFVar19 = GetFullNameForCastLogError<UInteractiveGizmo>(&local_178,(UInteractiveGizmo *)pUVar18)
    ;
    if ((pFVar19->Data).ArrayNum != 0) {
      pwVar22 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar22,pwVar23);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar18);
  }
  (this->BoxIntervalGizmo).field0_0x0.DebugPtr = pUVar18;
  if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  local_168 = (this->BoxXIntervalSource).field0_0x0;
  pUVar18 = (this->BoxIntervalGizmo).field0_0x0.DebugPtr;
  local_158 = (this->BoxYIntervalSource).field0_0x0;
  local_148 = (this->BoxZIntervalSource).field0_0x0;
  local_160 = 0;
  local_150 = 0;
  local_140 = 0;
  local_138 = 2;
  (**(code **)(pUVar18->_padding_ + 0x308))
            (pUVar18,(this->BoxTransformProxy).field0_0x0.DebugPtr,&local_168,0);
  local_188._0_8_ = (FScriptContainerElement *)0x0;
  local_188._8_8_ = 0;
  pUVar14 = UE::TransformGizmoUtil::CreateCustomTransformGizmo
                      (pUVar12,RotateAllAxes|TranslateAllPlanes|TranslateAllAxes,this,
                       (FString *)local_188);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar14 != (UCombinedTransformGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar14);
  }
  (this->CapsuleTransformGizmo).field0_0x0.DebugPtr = pUVar14;
  if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_188._0_8_);
  }
  ::FString::FString((FString *)local_188,L"CapsuleSizeInterval");
  pUVar18 = (UIntervalGizmo *)
            (**(code **)(pUVar12->_padding_ + 0x2d0))
                      (pUVar12,&UIntervalGizmo::GizmoName,local_188,this);
  if (pUVar18 != (UIntervalGizmo *)0x0) {
    pUVar17 = Z_Construct_UClass_UIntervalGizmo_NoRegister();
    iVar1 = (int)pUVar17->_padding_;
    if ((iVar1 <= *(int *)(pUVar18->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar17->_padding_)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar18);
      }
      (this->CapsuleIntervalGizmo).field0_0x0.DebugPtr = pUVar18;
      if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_188._0_8_);
      }
      local_120 = (this->CapsuleRadiusIntervalSource).field0_0x0;
      pUVar18 = (this->CapsuleIntervalGizmo).field0_0x0.DebugPtr;
      local_108._8_8_ = (this->CapsuleLengthIntervalSource).field0_0x0;
      local_118 = 0;
      uStack_110 = 0;
      local_108._0_8_ = 0;
      local_f8 = 0;
      local_f0 = 2;
      (**(code **)(pUVar18->_padding_ + 0x308))
                (pUVar18,(this->CapsuleTransformProxy).field0_0x0.DebugPtr,&local_120,0);
      local_188._0_8_ = (FScriptContainerElement *)0x0;
      local_188._8_8_ = 0;
      pUVar14 = UE::TransformGizmoUtil::CreateCustomTransformGizmo
                          (pUVar12,FullTranslateRotateScale,this,(FString *)local_188);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar14 != (UCombinedTransformGizmo *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar14);
      }
      (this->FullTransformGizmo).field0_0x0.DebugPtr = pUVar14;
      if ((FScriptContainerElement *)local_188._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_188._0_8_);
      }
      local_188._0_8_ = GizmoTransformChanged;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)GizmoTransformChanged;
      local_178.Data.ArrayNum = local_188._8_4_;
      local_178.Data.ArrayMax = local_188._12_4_;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
      ::AddUObject<UCollisionPrimitivesMechanic>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
                  *)&((this->TranslateTransformProxy).field0_0x0.DebugPtr)->OnTransformChanged,
                 (UCollisionPrimitivesMechanic *)local_188,(pmf_3db41ec7 *)this);
      local_188._0_8_ = GizmoTransformStarted;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)GizmoTransformStarted;
      local_178.Data.ArrayNum = local_188._8_4_;
      local_178.Data.ArrayMax = local_188._12_4_;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
      AddUObject<UCollisionPrimitivesMechanic>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
                  *)&((this->TranslateTransformProxy).field0_0x0.DebugPtr)->OnBeginTransformEdit,
                 (UCollisionPrimitivesMechanic *)local_188,(pmf_01adc85c *)this);
      local_188._0_8_ = GizmoTransformEnded;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)GizmoTransformEnded;
      local_178.Data.ArrayNum = local_188._8_4_;
      local_178.Data.ArrayMax = local_188._12_4_;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
      AddUObject<UCollisionPrimitivesMechanic>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
                  *)&((this->TranslateTransformProxy).field0_0x0.DebugPtr)->OnEndTransformEdit,
                 (UCollisionPrimitivesMechanic *)local_188,(pmf_01adc85c *)this);
      pUVar14 = (this->TranslateTransformGizmo).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar14 + 0x330))
                (pUVar14,(this->TranslateTransformProxy).field0_0x0.DebugPtr,0);
      pUVar14 = (this->TranslateTransformGizmo).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar14 + 0x360))(pUVar14,0);
      local_188._0_8_ = GizmoTransformChanged;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      ((this->TranslateTransformGizmo).field0_0x0.DebugPtr)->bUseContextCoordinateSystem = true;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)GizmoTransformChanged;
      local_178.Data.ArrayNum = local_188._8_4_;
      local_178.Data.ArrayMax = local_188._12_4_;
      ((this->TranslateTransformGizmo).field0_0x0.DebugPtr)->CurrentCoordinateSystem = Local;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
      ::AddUObject<UCollisionPrimitivesMechanic>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
                  *)&((this->SphereTransformProxy).field0_0x0.DebugPtr)->OnTransformChanged,
                 (UCollisionPrimitivesMechanic *)local_188,(pmf_3db41ec7 *)this);
      local_188._0_8_ = GizmoTransformStarted;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)GizmoTransformStarted;
      local_178.Data.ArrayNum = local_188._8_4_;
      local_178.Data.ArrayMax = local_188._12_4_;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
      AddUObject<UCollisionPrimitivesMechanic>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
                  *)&((this->SphereTransformProxy).field0_0x0.DebugPtr)->OnBeginTransformEdit,
                 (UCollisionPrimitivesMechanic *)local_188,(pmf_01adc85c *)this);
      local_188._0_8_ = GizmoTransformEnded;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)GizmoTransformEnded;
      local_178.Data.ArrayNum = local_188._8_4_;
      local_178.Data.ArrayMax = local_188._12_4_;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
      AddUObject<UCollisionPrimitivesMechanic>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
                  *)&((this->SphereTransformProxy).field0_0x0.DebugPtr)->OnEndTransformEdit,
                 (UCollisionPrimitivesMechanic *)local_188,(pmf_01adc85c *)this);
      pUVar14 = (this->SphereTransformGizmo).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar14 + 0x330))
                (pUVar14,(this->SphereTransformProxy).field0_0x0.DebugPtr,0);
      pUVar14 = (this->SphereTransformGizmo).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar14 + 0x360))(pUVar14,0);
      local_188._0_8_ = GizmoTransformChanged;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      ((this->SphereTransformGizmo).field0_0x0.DebugPtr)->bUseContextCoordinateSystem = true;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)GizmoTransformChanged;
      local_178.Data.ArrayNum = local_188._8_4_;
      local_178.Data.ArrayMax = local_188._12_4_;
      ((this->SphereTransformGizmo).field0_0x0.DebugPtr)->CurrentCoordinateSystem = Local;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
      ::AddUObject<UCollisionPrimitivesMechanic>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
                  *)&((this->BoxTransformProxy).field0_0x0.DebugPtr)->OnTransformChanged,
                 (UCollisionPrimitivesMechanic *)local_188,(pmf_3db41ec7 *)this);
      local_188._0_8_ = GizmoTransformStarted;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)GizmoTransformStarted;
      local_178.Data.ArrayNum = local_188._8_4_;
      local_178.Data.ArrayMax = local_188._12_4_;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
      AddUObject<UCollisionPrimitivesMechanic>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
                  *)&((this->BoxTransformProxy).field0_0x0.DebugPtr)->OnBeginTransformEdit,
                 (UCollisionPrimitivesMechanic *)local_188,(pmf_01adc85c *)this);
      local_188._0_8_ = GizmoTransformEnded;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)GizmoTransformEnded;
      local_178.Data.ArrayNum = local_188._8_4_;
      local_178.Data.ArrayMax = local_188._12_4_;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
      AddUObject<UCollisionPrimitivesMechanic>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
                  *)&((this->BoxTransformProxy).field0_0x0.DebugPtr)->OnEndTransformEdit,
                 (UCollisionPrimitivesMechanic *)local_188,(pmf_01adc85c *)this);
      local_188._0_8_ = IntervalGizmoValueChanged;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)IntervalGizmoValueChanged;
      local_178.Data.ArrayNum = local_188._8_4_;
      local_178.Data.ArrayMax = local_188._12_4_;
      TMulticastDelegateRegistration<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy>
      ::AddUObject<UCollisionPrimitivesMechanic>
                ((TMulticastDelegateRegistration<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy>
                  *)&((this->BoxIntervalGizmo).field0_0x0.DebugPtr)->OnIntervalChanged,
                 (UCollisionPrimitivesMechanic *)local_188,(pmf_706e99d2 *)this);
      pUVar14 = (this->BoxTransformGizmo).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar14 + 0x330))
                (pUVar14,(this->BoxTransformProxy).field0_0x0.DebugPtr,0);
      pUVar14 = (this->BoxTransformGizmo).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar14 + 0x360))(pUVar14,0);
      ((this->BoxTransformGizmo).field0_0x0.DebugPtr)->bUseContextCoordinateSystem = true;
      ((this->BoxTransformGizmo).field0_0x0.DebugPtr)->CurrentCoordinateSystem = Local;
      pUVar18 = (this->BoxIntervalGizmo).field0_0x0.DebugPtr;
      (**(code **)(pUVar18->_padding_ + 0x348))(pUVar18,0);
      local_188._0_8_ = GizmoTransformChanged;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)GizmoTransformChanged;
      local_178.Data.ArrayNum = local_188._8_4_;
      local_178.Data.ArrayMax = local_188._12_4_;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
      ::AddUObject<UCollisionPrimitivesMechanic>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
                  *)&((this->CapsuleTransformProxy).field0_0x0.DebugPtr)->OnTransformChanged,
                 (UCollisionPrimitivesMechanic *)local_188,(pmf_3db41ec7 *)this);
      local_188._0_8_ = GizmoTransformStarted;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)GizmoTransformStarted;
      local_178.Data.ArrayNum = local_188._8_4_;
      local_178.Data.ArrayMax = local_188._12_4_;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
      AddUObject<UCollisionPrimitivesMechanic>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
                  *)&((this->CapsuleTransformProxy).field0_0x0.DebugPtr)->OnBeginTransformEdit,
                 (UCollisionPrimitivesMechanic *)local_188,(pmf_01adc85c *)this);
      local_188._0_8_ = GizmoTransformEnded;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)GizmoTransformEnded;
      local_178.Data.ArrayNum = local_188._8_4_;
      local_178.Data.ArrayMax = local_188._12_4_;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
      AddUObject<UCollisionPrimitivesMechanic>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
                  *)&((this->CapsuleTransformProxy).field0_0x0.DebugPtr)->OnEndTransformEdit,
                 (UCollisionPrimitivesMechanic *)local_188,(pmf_01adc85c *)this);
      local_188._0_8_ = IntervalGizmoValueChanged;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)IntervalGizmoValueChanged;
      local_178.Data.ArrayNum = local_188._8_4_;
      local_178.Data.ArrayMax = local_188._12_4_;
      TMulticastDelegateRegistration<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy>
      ::AddUObject<UCollisionPrimitivesMechanic>
                ((TMulticastDelegateRegistration<void___cdecl(UIntervalGizmo_*,UE::Math::TVector<double>_const_&,float),FDefaultDelegateUserPolicy>
                  *)&((this->CapsuleIntervalGizmo).field0_0x0.DebugPtr)->OnIntervalChanged,
                 (UCollisionPrimitivesMechanic *)local_188,(pmf_706e99d2 *)this);
      pUVar14 = (this->CapsuleTransformGizmo).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar14 + 0x330))
                (pUVar14,(this->CapsuleTransformProxy).field0_0x0.DebugPtr,0);
      pUVar14 = (this->CapsuleTransformGizmo).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar14 + 0x360))(pUVar14,0);
      ((this->CapsuleTransformGizmo).field0_0x0.DebugPtr)->bUseContextCoordinateSystem = true;
      ((this->CapsuleTransformGizmo).field0_0x0.DebugPtr)->CurrentCoordinateSystem = Local;
      pUVar18 = (this->CapsuleIntervalGizmo).field0_0x0.DebugPtr;
      (**(code **)(pUVar18->_padding_ + 0x348))(pUVar18,0);
      local_188._0_8_ = GizmoTransformChanged;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)GizmoTransformChanged;
      local_178.Data.ArrayNum = local_188._8_4_;
      local_178.Data.ArrayMax = local_188._12_4_;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
      ::AddUObject<UCollisionPrimitivesMechanic>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
                  *)&((this->FullTransformProxy).field0_0x0.DebugPtr)->OnTransformChanged,
                 (UCollisionPrimitivesMechanic *)local_188,(pmf_3db41ec7 *)this);
      local_188._0_8_ = GizmoTransformStarted;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)GizmoTransformStarted;
      local_178.Data.ArrayNum = local_188._8_4_;
      local_178.Data.ArrayMax = local_188._12_4_;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
      AddUObject<UCollisionPrimitivesMechanic>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
                  *)&((this->FullTransformProxy).field0_0x0.DebugPtr)->OnBeginTransformEdit,
                 (UCollisionPrimitivesMechanic *)local_188,(pmf_01adc85c *)this);
      local_188._0_8_ = GizmoTransformEnded;
      local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
      local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)GizmoTransformEnded;
      local_178.Data.ArrayNum = local_188._8_4_;
      local_178.Data.ArrayMax = local_188._12_4_;
      TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>::
      AddUObject<UCollisionPrimitivesMechanic>
                ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*),FDefaultDelegateUserPolicy>
                  *)&((this->FullTransformProxy).field0_0x0.DebugPtr)->OnEndTransformEdit,
                 (UCollisionPrimitivesMechanic *)local_188,(pmf_01adc85c *)this);
      pUVar14 = (this->FullTransformGizmo).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar14 + 0x330))
                (pUVar14,(this->FullTransformProxy).field0_0x0.DebugPtr,0);
      pUVar14 = (this->FullTransformGizmo).field0_0x0.DebugPtr;
      (**(code **)(*(longlong *)pUVar14 + 0x360))(pUVar14,0);
      ((this->FullTransformGizmo).field0_0x0.DebugPtr)->bUseContextCoordinateSystem = true;
      ((this->FullTransformGizmo).field0_0x0.DebugPtr)->CurrentCoordinateSystem = Local;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar13 = (this->TranslateTransformProxy).field0_0x0.DebugPtr,
         pUVar13 != (UTransformProxy *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar13);
      }
      (this->CurrentActiveProxy).field0_0x0 = (this->TranslateTransformProxy).field0_0x0;
      return;
    }
    pFVar19 = GetTypeName<UIntervalGizmo>(&local_178);
    pwVar22 = L"";
    if ((pFVar19->Data).ArrayNum == 0) {
      pwVar23 = L"";
    }
    else {
      pwVar23 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
    }
    pFVar19 = GetFullNameForCastLogError<UInteractiveGizmo>(&local_130,(UInteractiveGizmo *)pUVar18)
    ;
    if ((pFVar19->Data).ArrayNum != 0) {
      pwVar22 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar22,pwVar23);
  }
  pFVar19 = GetTypeName<UIntervalGizmo>(&local_178);
  if ((pFVar19->Data).ArrayNum == 0) {
    pwVar22 = L"";
  }
  else {
    pwVar22 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar22);
}

// Shutdown @ 14cb3bc70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCollisionPrimitivesMechanic::Shutdown(UCollisionPrimitivesMechanic *this)

{
  UPreviewGeometry *pUVar1;
  APreviewGeometryActor *this_00;
  code *UNRECOVERED_JUMPTABLE;
  UInteractiveTool *pUVar2;
  UInteractiveToolManager *pUVar3;
  UInteractiveGizmoManager *pUVar4;
  
  pUVar2 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar3 = (UInteractiveToolManager *)(**(code **)(pUVar2->_padding_ + 0x2d8))(pUVar2);
  UE::TransactionUtil::FLongTransactionTracker::CloseAll(&this->LongTransactions,pUVar3);
  pUVar1 = (this->PreviewGeometry).field0_0x0.DebugPtr;
  if (pUVar1 != (UPreviewGeometry *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2b8))(pUVar1);
    this_00 = (pUVar1->ParentActor).field0_0x0.DebugPtr;
    if (this_00 != (APreviewGeometryActor *)0x0) {
      AActor::Destroy((AActor *)this_00,false,true);
      (pUVar1->ParentActor).field0_0x0.DebugPtr = (APreviewGeometryActor *)0x0;
    }
    (this->PreviewGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  }
  pUVar2 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  pUVar3 = (UInteractiveToolManager *)(**(code **)(pUVar2->_padding_ + 0x2d8))(pUVar2);
  pUVar4 = UInteractiveToolManager::GetPairedGizmoManager(pUVar3);
  (**(code **)(pUVar4->_padding_ + 0x2e8))(pUVar4,this);
  UNRECOVERED_JUMPTABLE = *(code **)(pUVar4->_padding_ + 0x2c8);
                    /* WARNING: Could not recover jumptable at 0x00014cb3bd2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pUVar4,&UIntervalGizmo::GizmoName,UNRECOVERED_JUMPTABLE);
  return;
}

// StaticRegisterNativesUCollisionPrimitivesMechanic @ 14cb3ea70

void __cdecl UCollisionPrimitivesMechanic::StaticRegisterNativesUCollisionPrimitivesMechanic(void)

{
  return;
}

// UpdateCollisionGeometry @ 14cb44a80

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
UCollisionPrimitivesMechanic::UpdateCollisionGeometry
          (UCollisionPrimitivesMechanic *this,FKAggregateGeom *param_1)

{
  FPhysicsDataCollection *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->PhysicsData).Object == (FPhysicsDataCollection *)0x0) {
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
  pFVar1 = (this->PhysicsData).Object;
  FKAggregateGeom::FreeRenderInfo(&pFVar1->AggGeom);
  FKAggregateGeom::CloneAgg(&pFVar1->AggGeom,param_1);
  RebuildDrawables(this,true);
  UpdateGizmoLocation(this);
  UpdateGizmoVisibility(this);
  return;
}

// UpdateDrawables @ 14cb45a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UCollisionPrimitivesMechanic::UpdateDrawables(UCollisionPrimitivesMechanic *this)

{
  undefined4 uVar1;
  ForElementType<FSetElementId> FVar2;
  ULineSetComponent *this_00;
  code *pcVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  ulonglong uVar10;
  ForElementType<FSetElementId> FVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  uint local_res10;
  longlong local_res18;
  FScriptContainerElement *local_res20;
  
  UpdateGizmoLocation(this);
  UpdateGizmoVisibility(this);
  uVar14 = 0;
  if (0 < (this->PrimitiveRenderData).ArrayNum) {
    local_res18 = 0;
    do {
      lVar4 = local_res18;
      if (*(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 !=
          *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34) {
        FVar2 = (this->SelectedPrimitiveIDs).Hash.SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&(this->SelectedPrimitiveIDs).Hash;
        if (FVar2 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar2;
        }
        iVar7 = *(int *)((longlong)FVar11 +
                        (ulonglong)((this->SelectedPrimitiveIDs).HashSize - 1U & uVar14) * 4);
        if (iVar7 != -1) {
          lVar12 = *(longlong *)&(this->SelectedPrimitiveIDs).Elements;
          do {
            if (*(uint *)(lVar12 + (longlong)iVar7 * 0xc) == uVar14) goto LAB_14cb45aec;
            iVar7 = *(int *)(lVar12 + 4 + (longlong)iVar7 * 0xc);
          } while (iVar7 != -1);
        }
      }
      iVar7 = -1;
LAB_14cb45aec:
      lVar12 = 0x340;
      if (iVar7 == -1) {
        lVar12 = 0x330;
      }
      uVar1 = *(undefined4 *)(&this->field_0x0 + lVar12);
      uVar8 = 0;
      if ((int)uVar14 < (this->PrimitiveRenderData).ArrayNum) {
        uVar8 = ~uVar14 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined4 *)((this->PrimitiveRenderData).AllocatorInstance.Data + lVar4 + 0x10) = uVar1;
      pTVar9 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
               ::FindChecked((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                              *)&this->PrimitiveToCurveLookup,uVar14);
      pFVar13 = (pTVar9->AllocatorInstance).Data;
      local_res10 = pTVar9->ArrayNum;
      uVar10 = (ulonglong)(int)local_res10;
      local_res20 = pFVar13 + uVar10 * 4;
      while( true ) {
        pFVar5 = local_res20;
        if (pTVar9->ArrayNum != (int)uVar10) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (pFVar13 == pFVar5) break;
        iVar7 = *(int *)pFVar13;
        this_00 = (this->DrawnPrimitiveEdges).field0_0x0.DebugPtr;
        uVar8 = 0;
        if ((int)uVar14 < (this->PrimitiveRenderData).ArrayNum) {
          uVar8 = ~uVar14 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ULineSetComponent::SetLineColor
                  (this_00,iVar7,
                   (FColor *)
                   ((this->PrimitiveRenderData).AllocatorInstance.Data +
                   (longlong)(int)uVar14 * 0x80 + 0x10));
        uVar10 = (ulonglong)local_res10;
        pFVar13 = pFVar13 + 4;
      }
      local_res18 = local_res18 + 0x80;
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < (this->PrimitiveRenderData).ArrayNum);
  }
  return;
}

// UpdateGizmoLocation @ 14cb46530

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
UCollisionPrimitivesMechanic::UpdateGizmoLocation(UCollisionPrimitivesMechanic *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  undefined1 *puVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  undefined1 auVar8 [12];
  float fVar9;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  FPhysicsDataCollection *pFVar14;
  FKShapeElem *pFVar15;
  longlong *plVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  uint *puVar22;
  uint uVar23;
  int iVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined4 uVar38;
  double dVar37;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  uint uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined1 local_338 [8];
  UCollisionPrimitivesMechanic *local_330;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_328;
  uint uStack_320;
  uint uStack_31c;
  undefined1 *local_318;
  undefined4 uStack_310;
  uint uStack_30c;
  uint local_308;
  uint uStack_304;
  int iStack_300;
  undefined4 uStack_2fc;
  int local_2f8;
  int local_2f4;
  int local_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_2d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2c8;
  undefined8 uStack_2a8;
  code *local_298 [2];
  undefined **local_288;
  code *local_280;
  undefined8 local_270;
  code *local_268 [2];
  undefined **local_258;
  undefined4 *local_250;
  undefined8 local_240;
  code *local_238 [2];
  undefined **local_228;
  code *local_220;
  undefined8 local_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  TTransform<double> local_188;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_368;
  if (((((this->TranslateTransformGizmo).field0_0x0.DebugPtr != (UCombinedTransformGizmo *)0x0) &&
       ((this->SphereTransformGizmo).field0_0x0.DebugPtr != (UCombinedTransformGizmo *)0x0)) &&
      ((this->BoxTransformGizmo).field0_0x0.DebugPtr != (UCombinedTransformGizmo *)0x0)) &&
     (((this->CapsuleTransformGizmo).field0_0x0.DebugPtr != (UCombinedTransformGizmo *)0x0 &&
      ((this->FullTransformGizmo).field0_0x0.DebugPtr != (UCombinedTransformGizmo *)0x0)))) {
    dVar7 = 0.0;
    dVar43 = 0.0;
    dVar37 = 0.0;
    local_2d8 = 0.0;
    local_2e8 = 0.0;
    dStack_2e0 = 0.0;
    iVar24 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 -
             *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34;
    local_330 = this;
    if (iVar24 == 0) {
      local_288 = &
                  ___7__TFunction_OwnedObject_P6AXAEAVUCombinedTransformGizmo___Z_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_270 = 0;
      local_280 = `UCollisionPrimitivesMechanic::UpdateGizmoLocation'::__l8::<lambda_2>::
                  <lambda_invoker_cdecl>;
      local_298[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<void_(__cdecl*)(UCombinedTransformGizmo_&),void,UCombinedTransformGizmo_&>
                     ::Call;
      `UCollisionPrimitivesMechanic::UpdateGizmoLocation'::__l2::<lambda_1>::operator()
                (&local_330,(TFunction<void___cdecl(UCombinedTransformGizmo_&)> *)local_298);
    }
    else {
      uVar13 = 0;
      puVar1 = &(this->SelectedPrimitiveIDs).Elements.field_0x10;
      uVar19 = *(uint *)&(this->SelectedPrimitiveIDs).Elements.field_0x28;
      local_328 = &this->SelectedPrimitiveIDs;
      uStack_320 = 0;
      uStack_31c = 1;
      iVar17 = 0;
      uStack_30c = uStack_320;
      local_308 = uStack_320;
      if (uVar19 != 0) {
        puVar22 = *(uint **)&(this->SelectedPrimitiveIDs).Elements.field_0x20;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)puVar1;
        }
        uVar23 = *puVar22;
        local_308 = uVar13;
        uStack_320 = uVar13;
        while (uVar23 == 0) {
          lVar18 = (longlong)(int)uStack_320;
          local_308 = local_308 + 0x20;
          uStack_320 = uStack_320 + 1;
          if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_320) {
            iVar17 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x28;
            uStack_30c = uVar19;
            goto LAB_14cb466e5;
          }
          uVar23 = puVar22[lVar18 + 1];
        }
        iVar17 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x28;
        uStack_31c = -uVar23 & uVar23;
        uVar2 = (ulonglong)uStack_31c * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_2f8 = (int)lVar18;
        uStack_30c = (local_308 - 1) + local_2f8;
        if (iVar17 < (int)uStack_30c) {
          uStack_30c = uVar19;
        }
      }
LAB_14cb466e5:
      uVar19 = *(uint *)&(this->SelectedPrimitiveIDs).Elements.field_0x28;
      uStack_310 = 0xffffffff;
      uVar23 = uVar19 & 0xffffffe0;
      TStack_2c8._padding_ = CONCAT44(uStack_31c,uStack_320);
      TStack_2c8.CurrentBitIndex = uStack_30c;
      TStack_2c8.UnvisitedBitMask = 0xffffffff;
      TStack_2c8._28_4_ = uStack_30c;
      TStack_2c8.BaseBitIndex = local_308;
      uStack_2a8 = CONCAT44(uStack_2fc,iVar24);
      iVar20 = (int)uVar19 >> 5;
      local_318 = puVar1;
      uStack_304 = uStack_30c;
      iStack_300 = iVar24;
      local_2d0 = local_328;
      TStack_2c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar19 < 0) || (iVar17 < (int)uVar19)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar48 = *(uint *)&(this->SelectedPrimitiveIDs).Elements.field_0x28;
      dVar43 = local_2e8;
      dVar37 = dStack_2e0;
      if (uVar19 != uVar48) {
        puVar4 = *(undefined1 **)&(this->SelectedPrimitiveIDs).Elements.field_0x20;
        puVar21 = puVar1;
        if (puVar4 != (undefined1 *)0x0) {
          puVar21 = puVar4;
        }
        uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar20 * 4);
        while (uVar19 == 0) {
          lVar18 = (longlong)iVar20;
          uVar23 = uVar23 + 0x20;
          iVar20 = iVar20 + 1;
          uVar19 = uVar48;
          if ((int)((uVar48 - 1) + ((int)(uVar48 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_14cb46800;
          uVar19 = *(uint *)(puVar21 + lVar18 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_2f4 = (int)lVar18;
        uVar19 = local_2f4 + -1 + uVar23;
        if ((int)uVar48 < (int)uVar19) {
          uVar19 = uVar48;
        }
      }
LAB_14cb46800:
      while( true ) {
        pTVar10 = local_2d0;
        if (*(int *)&(local_2d0->Elements).field_0x8 - *(int *)&(local_2d0->Elements).field_0x34 !=
            (int)uStack_2a8) {
          local_338[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_338);
        }
        if (((TStack_2c8.CurrentBitIndex == uVar19) &&
            (TStack_2c8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar10 == &this->SelectedPrimitiveIDs)) break;
        iVar24 = (this->PrimitiveRenderData).ArrayNum;
        uVar23 = *(uint *)(*(longlong *)&pTVar10->Elements +
                          (longlong)TStack_2c8.CurrentBitIndex * 0xc);
        uVar48 = uVar13;
        if ((int)uVar23 < iVar24) {
          uVar48 = ~uVar23 >> 0x1f;
        }
        if ((uVar48 == 0) &&
           (local_348 = (longlong)(int)uVar23, local_340 = (longlong)iVar24,
           bVar11 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->PrimitiveRenderData).AllocatorInstance.Data;
        lVar18 = (longlong)(int)uVar23 * 0x80;
        pFVar3 = pFVar5 + lVar18 + 0x40;
        local_208 = *(double *)pFVar3;
        dStack_200 = *(double *)(pFVar3 + 8);
        local_1f8 = *(double *)(pFVar5 + lVar18 + 0x50);
        dVar43 = dVar43 + local_208;
        TStack_2c8.UnvisitedBitMask = TStack_2c8.UnvisitedBitMask & ~TStack_2c8._padding_._4_4_;
        dVar7 = dVar7 + local_1f8;
        dVar37 = dVar37 + dStack_200;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2c8);
      }
      local_2d8 = __real_3ff0000000000000 /
                  (double)(*(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 -
                          *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34);
      dVar43 = dVar43 * local_2d8;
      dVar37 = dVar37 * local_2d8;
      local_2d8 = dVar7 * local_2d8;
    }
    iVar24 = 0;
    uVar49 = *(undefined4 *)(this->LocalToWorldTransform).Rotation.XY.m128d_f64;
    uVar50 = *(undefined4 *)((longlong)(this->LocalToWorldTransform).Rotation.XY.m128d_f64 + 4);
    uVar51 = *(undefined4 *)((this->LocalToWorldTransform).Rotation.XY.m128d_f64 + 1);
    uVar52 = *(undefined4 *)((longlong)(this->LocalToWorldTransform).Rotation.XY.m128d_f64 + 0xc);
    uVar53 = *(undefined4 *)(this->LocalToWorldTransform).Rotation.ZW.m128d_f64;
    uVar54 = *(undefined4 *)((longlong)(this->LocalToWorldTransform).Rotation.ZW.m128d_f64 + 4);
    uVar55 = *(undefined4 *)((this->LocalToWorldTransform).Rotation.ZW.m128d_f64 + 1);
    uVar56 = *(undefined4 *)((longlong)(this->LocalToWorldTransform).Rotation.ZW.m128d_f64 + 0xc);
    if (*(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 -
        *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34 == 1) {
      iVar17 = *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x28;
      iVar20 = 0;
      iVar12 = iVar20;
      if (iVar17 != 0) {
        puVar22 = *(uint **)&(this->SelectedPrimitiveIDs).Elements.field_0x20;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)&(this->SelectedPrimitiveIDs).Elements.field_0x10;
        }
        uVar19 = *puVar22;
        while (uVar19 == 0) {
          lVar18 = (longlong)iVar24;
          iVar20 = iVar20 + 0x20;
          iVar24 = iVar24 + 1;
          iVar12 = iVar17;
          if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar24) goto LAB_14cb469dc;
          uVar19 = puVar22[lVar18 + 1];
        }
        uVar2 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar18 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        local_2f0 = (int)lVar18;
        iVar12 = iVar20 + -1 + local_2f0;
        if (iVar17 < iVar12) {
          iVar12 = iVar17;
        }
      }
LAB_14cb469dc:
      iVar24 = (this->PrimitiveRenderData).ArrayNum;
      uVar19 = *(uint *)(*(longlong *)&(this->SelectedPrimitiveIDs).Elements +
                        (longlong)iVar12 * 0xc);
      uVar13 = 0;
      if ((int)uVar19 < iVar24) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (local_348 = (longlong)(int)uVar19, local_340 = (longlong)iVar24,
         bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_188.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_188.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_188.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_188.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_188.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_188.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply
                (&local_188,
                 (TTransform<double> *)
                 ((this->PrimitiveRenderData).AllocatorInstance.Data +
                 (longlong)(int)uVar19 * 0x80 + 0x20),&this->LocalToWorldTransform);
      uVar49 = local_188.Rotation.XY.m128d_f64[0]._0_4_;
      uVar50 = local_188.Rotation.XY.m128d_f64[0]._4_4_;
      uVar51 = local_188.Rotation.XY.m128d_f64[1]._0_4_;
      uVar52 = local_188.Rotation.XY.m128d_f64[1]._4_4_;
      uVar53 = local_188.Rotation.ZW.m128d_f64[0]._0_4_;
      uVar54 = local_188.Rotation.ZW.m128d_f64[0]._4_4_;
      uVar55 = local_188.Rotation.ZW.m128d_f64[1]._0_4_;
      uVar56 = local_188.Rotation.ZW.m128d_f64[1]._4_4_;
      pFVar14 = TSharedPtr<FPhysicsDataCollection,1>::operator->(&this->PhysicsData);
      pFVar15 = FKAggregateGeom::GetElement(&pFVar14->AggGeom,uVar19);
      fVar9 = __real_3f000000;
      uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      dVar7 = __real_3e45798ee2308c3a;
      uVar23 = SUB84(__real_3e45798ee2308c3a,0);
      uVar48 = (uint)((ulonglong)__real_3e45798ee2308c3a >> 0x20);
      if (pFVar15->ShapeType == Box) {
        uVar39 = *(uint *)((this->LocalToWorldTransform).Scale3D.XY.m128d_f64 + 1);
        uVar40 = *(uint *)((longlong)(this->LocalToWorldTransform).Scale3D.XY.m128d_f64 + 0xc);
        uVar41 = *(uint *)(this->LocalToWorldTransform).Scale3D.ZW.m128d_f64;
        uVar42 = *(uint *)((longlong)(this->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 4);
        dVar35 = (double)CONCAT44(*(uint *)((longlong)
                                            (this->LocalToWorldTransform).Scale3D.XY.m128d_f64 + 4)
                                  & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  *(uint *)(this->LocalToWorldTransform).Scale3D.XY.m128d_f64 &
                                  (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        if (dVar35 <= __real_3e45798ee2308c3a) {
          dVar35 = __real_3e45798ee2308c3a;
        }
        plVar16 = &((this->BoxXIntervalSource).field0_0x0.DebugPtr)->_padding_;
        (**(code **)(*plVar16 + 0x20))
                  (plVar16,(float)(dVar35 * (double)(*(float *)&pFVar15[2]._padding_ *
                                                    __real_3f000000)));
        plVar16 = &((this->BoxYIntervalSource).field0_0x0.DebugPtr)->_padding_;
        uVar39 = uVar39 & uVar19;
        uVar40 = uVar40 & uVar13;
        if ((double)CONCAT44(uVar40,uVar39) <= dVar7) {
          uVar39 = uVar23;
          uVar40 = uVar48;
        }
        (**(code **)(*plVar16 + 0x20))
                  (plVar16,(float)((double)CONCAT44(uVar40,uVar39) *
                                  (double)(*(float *)((longlong)&pFVar15[2]._padding_ + 4) * fVar9))
                  );
        uVar41 = uVar41 & uVar19;
        uVar42 = uVar42 & uVar13;
        if ((double)CONCAT44(uVar42,uVar41) <= dVar7) {
          uVar41 = uVar23;
          uVar42 = uVar48;
        }
        plVar16 = &((this->BoxZIntervalSource).field0_0x0.DebugPtr)->_padding_;
        (**(code **)(*plVar16 + 0x20))
                  (plVar16,(float)((double)CONCAT44(uVar42,uVar41) *
                                  (double)(pFVar15[2].RestOffset * fVar9)));
      }
      if (pFVar15->ShapeType == Sphyl) {
        uVar39 = *(uint *)(this->LocalToWorldTransform).Scale3D.ZW.m128d_f64;
        uVar40 = *(uint *)((longlong)(this->LocalToWorldTransform).Scale3D.ZW.m128d_f64 + 4);
        plVar16 = &((this->CapsuleRadiusIntervalSource).field0_0x0.DebugPtr)->_padding_;
        dVar35 = (double)CONCAT44(*(uint *)((longlong)
                                            (this->LocalToWorldTransform).Scale3D.XY.m128d_f64 + 4)
                                  & uVar13,*(uint *)(this->LocalToWorldTransform).Scale3D.XY.
                                                    m128d_f64 & uVar19);
        if (dVar35 <= dVar7) {
          dVar35 = dVar7;
        }
        dVar25 = (double)CONCAT44(*(uint *)((longlong)
                                            (this->LocalToWorldTransform).Scale3D.XY.m128d_f64 + 0xc
                                           ) & uVar13,
                                  *(uint *)((this->LocalToWorldTransform).Scale3D.XY.m128d_f64 + 1)
                                  & uVar19);
        if (dVar25 <= dVar7) {
          dVar25 = dVar7;
        }
        if (dVar25 <= dVar35) {
          dVar25 = dVar35;
        }
        (**(code **)(*plVar16 + 0x20))(plVar16,(float)dVar25 * *(float *)&pFVar15[2]._padding_);
        uVar39 = uVar39 & uVar19;
        uVar40 = uVar40 & uVar13;
        if ((double)CONCAT44(uVar40,uVar39) <= dVar7) {
          uVar39 = uVar23;
          uVar40 = uVar48;
        }
        plVar16 = &((this->CapsuleLengthIntervalSource).field0_0x0.DebugPtr)->_padding_;
        (**(code **)(*plVar16 + 0x20))
                  (plVar16,(float)((double)CONCAT44(uVar40,uVar39) *
                                  (double)(*(float *)((longlong)&pFVar15[2]._padding_ + 4) * fVar9))
                  );
      }
    }
    UpdateGizmoVisibility(this);
    auVar34 = *(undefined1 (*) [16])(this->LocalToWorldTransform).Rotation.ZW.m128d_f64;
    dVar28 = auVar34._0_8_;
    dVar43 = dVar43 * (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[0];
    dVar37 = dVar37 * (this->LocalToWorldTransform).Scale3D.XY.m128d_f64[1];
    uVar38 = (undefined4)((ulonglong)dVar37 >> 0x20);
    local_258 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UCollisionPrimitivesMechanic::UpdateGizmoLocation'::`2'::<lambda_3>,0,0>
                 ::_vftable_;
    local_250 = &local_128;
    local_240 = 0;
    local_268[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UCollisionPrimitivesMechanic::UpdateGizmoLocation'::__l2::<lambda_3>,void,UCombinedTransformGizmo_&>
                   ::Call;
    auVar26 = *(undefined1 (*) [16])(this->LocalToWorldTransform).Rotation.XY.m128d_f64;
    dVar7 = local_2d8 * (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[0];
    dVar35 = (this->LocalToWorldTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar25 = (this->LocalToWorldTransform).Rotation.ZW.m128d_f64[1];
    auVar44._8_4_ = SUB84(dVar37,0);
    auVar44._0_8_ = dVar43;
    auVar44._12_4_ = uVar38;
    auVar29 = blendpd(auVar26,auVar34,2);
    auVar45._0_8_ = auVar44._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar43;
    auVar45._8_8_ = dVar7 * auVar26._8_8_ - dVar28 * dVar37;
    auVar46._8_4_ = SUB84(dVar37,0);
    auVar46._0_8_ = dVar43;
    auVar46._12_4_ = uVar38;
    auVar26._8_4_ = SUB84(dVar35,0);
    auVar26._0_8_ = dVar7;
    auVar26._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    auVar26 = blendpd(auVar46,auVar26,2);
    auVar27._0_8_ = auVar26._0_8_ * dVar28 - auVar29._0_8_ * dVar7;
    auVar27._8_8_ = auVar26._8_8_ * auVar34._8_8_ - auVar29._8_8_ * dVar35;
    auVar26 = *(undefined1 (*) [16])(this->LocalToWorldTransform).Rotation.XY.m128d_f64;
    auVar46 = blendpd(auVar45,auVar27,2);
    dVar35 = auVar45._8_8_ + auVar45._8_8_;
    dVar36 = auVar27._0_8_ + auVar27._0_8_;
    auVar47._0_8_ = auVar46._0_8_ + auVar46._0_8_;
    auVar47._8_8_ = auVar46._8_8_ + auVar46._8_8_;
    auVar32._8_4_ = SUB84(dVar36,0);
    auVar32._0_8_ = dVar35;
    uVar38 = (undefined4)((ulonglong)dVar36 >> 0x20);
    auVar32._12_4_ = uVar38;
    auVar30._8_4_ = SUB84(dVar36,0);
    auVar30._0_8_ = dVar35;
    auVar30._12_4_ = uVar38;
    auVar46 = blendpd(auVar26,auVar34,2);
    auVar33._0_8_ = auVar32._8_8_ * auVar26._0_8_ - auVar26._8_8_ * dVar35;
    auVar33._8_8_ = auVar47._0_8_ * auVar26._8_8_ - dVar28 * dVar36;
    auVar26 = blendpd(auVar30,auVar47,2);
    auVar31._0_8_ = auVar26._0_8_ * dVar28 - auVar46._0_8_ * auVar47._0_8_;
    auVar31._8_8_ = auVar26._8_8_ * auVar34._8_8_ - auVar46._8_8_ * auVar47._8_8_;
    auVar34._8_4_ = SUB84(auVar33._8_8_,0);
    auVar34._0_8_ = auVar33._0_8_;
    auVar34._12_4_ = (int)((ulonglong)auVar33._8_8_ >> 0x20);
    local_108 = dVar35 * dVar25 + dVar43 + auVar34._8_8_ +
                (this->LocalToWorldTransform).Translation.XY.m128d_f64[0];
    dVar37 = dVar36 * dVar25 + dVar37 + auVar31._0_8_ +
             (this->LocalToWorldTransform).Translation.XY.m128d_f64[1];
    auVar34 = blendpd(auVar33,auVar31,2);
    auVar8._4_8_ = auVar31._0_8_;
    auVar8._0_4_ = (int)((ulonglong)local_108 >> 0x20);
    auVar29._0_8_ = auVar8._0_8_ << 0x20;
    auVar29._8_4_ = SUB84(dVar37,0);
    auVar29._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    local_f8 = auVar47._0_8_ * dVar25 + dVar7 + auVar34._0_8_ +
               (this->LocalToWorldTransform).Translation.ZW.m128d_f64[0];
    uStack_100 = auVar29._8_8_;
    local_d8 = ___xmm_00000000000000003ff0000000000000;
    uStack_d0 = _UNK_150689518;
    uStack_f0 = 0;
    local_e8 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_e0 = _UNK_150689688;
    local_128 = uVar49;
    uStack_124 = uVar50;
    uStack_120 = uVar51;
    uStack_11c = uVar52;
    local_118 = uVar53;
    uStack_114 = uVar54;
    uStack_110 = uVar55;
    uStack_10c = uVar56;
    `UCollisionPrimitivesMechanic::UpdateGizmoLocation'::__l2::<lambda_1>::operator()
              (&local_330,(TFunction<void___cdecl(UCombinedTransformGizmo_&)> *)local_268);
    local_210 = 0;
    local_228 = &
                ___7__TFunction_OwnedObject_P6AXAEAVUCombinedTransformGizmo___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_220 = `UCollisionPrimitivesMechanic::UpdateGizmoLocation'::__l2::<lambda_4>::
                <lambda_invoker_cdecl>;
    local_238[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<void_(__cdecl*)(UCombinedTransformGizmo_&),void,UCombinedTransformGizmo_&>
                   ::Call;
    `UCollisionPrimitivesMechanic::UpdateGizmoLocation'::__l2::<lambda_1>::operator()
              (&local_330,(TFunction<void___cdecl(UCombinedTransformGizmo_&)> *)local_238);
  }
  return;
}

// UpdateGizmoVisibility @ 14cb47a40

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
UCollisionPrimitivesMechanic::UpdateGizmoVisibility(UCollisionPrimitivesMechanic *this)

{
  TObjectPtr<UTransformProxy> *this_00;
  ulonglong uVar1;
  uint uVar2;
  UIntervalGizmo *pUVar3;
  UCombinedTransformGizmo *pUVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined7 uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  UCollisionPrimitivesMechanic *local_res10;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined8 local_20;
  
  if (((((this->TranslateTransformGizmo).field0_0x0.DebugPtr != (UCombinedTransformGizmo *)0x0) &&
       ((this->SphereTransformGizmo).field0_0x0.DebugPtr != (UCombinedTransformGizmo *)0x0)) &&
      ((this->BoxTransformGizmo).field0_0x0.DebugPtr != (UCombinedTransformGizmo *)0x0)) &&
     (((this->CapsuleTransformGizmo).field0_0x0.DebugPtr != (UCombinedTransformGizmo *)0x0 &&
      ((this->FullTransformGizmo).field0_0x0.DebugPtr != (UCombinedTransformGizmo *)0x0)))) {
    local_38 = &
               ___7__TFunction_OwnedObject_P6AXAEAVUCombinedTransformGizmo___Z_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_30 = `UCollisionPrimitivesMechanic::UpdateGizmoVisibility'::__l2::<lambda_2>::
               <lambda_invoker_cdecl>;
    iVar8 = 0;
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(UCombinedTransformGizmo_&),void,UCombinedTransformGizmo_&>
                  ::Call;
    local_20 = 0;
    local_res10 = this;
    `UCollisionPrimitivesMechanic::UpdateGizmoVisibility'::__l2::<lambda_1>::operator()
              (&local_res10,(TFunction<void___cdecl(UCombinedTransformGizmo_&)> *)local_48);
    pUVar3 = (this->BoxIntervalGizmo).field0_0x0.DebugPtr;
    (**(code **)(pUVar3->_padding_ + 0x348))(pUVar3,0);
    pUVar3 = (this->CapsuleIntervalGizmo).field0_0x0.DebugPtr;
    (**(code **)(pUVar3->_padding_ + 0x348))(pUVar3,0);
    this_00 = &this->CurrentActiveProxy;
    TObjectPtr<UTransformProxy>::operator=(this_00,&this->TranslateTransformProxy);
    if (((this->bIsDraggingRectangle == false) &&
        (*(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 !=
         *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34)) &&
       ((bVar6 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                           ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ShouldHideGizmo),
        !bVar6 || (bVar6 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::Execute
                                     (&this->ShouldHideGizmo), !bVar6)))) {
      if (*(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x8 -
          *(int *)&(this->SelectedPrimitiveIDs).Elements.field_0x34 == 1) {
        uVar11 = 0;
        uVar2 = *(uint *)&(this->SelectedPrimitiveIDs).Elements.field_0x28;
        uVar7 = uVar11;
        if (uVar2 != 0) {
          puVar13 = *(uint **)&(this->SelectedPrimitiveIDs).Elements.field_0x20;
          if (puVar13 == (uint *)0x0) {
            puVar13 = (uint *)&(this->SelectedPrimitiveIDs).Elements.field_0x10;
          }
          uVar7 = *puVar13;
          uVar12 = uVar11;
          while (uVar7 == 0) {
            lVar9 = (longlong)iVar8;
            uVar12 = uVar12 + 0x20;
            iVar8 = iVar8 + 1;
            uVar7 = uVar2;
            if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8)
            goto LAB_14cb47be2;
            uVar7 = puVar13[lVar9 + 1];
          }
          uVar1 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
          lVar9 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          uVar7 = (uVar12 - 1) + (int)lVar9;
          if ((int)uVar2 < (int)uVar7) {
            uVar7 = uVar2;
          }
        }
LAB_14cb47be2:
        uVar2 = *(uint *)(*(longlong *)&(this->SelectedPrimitiveIDs).Elements +
                         (longlong)(int)uVar7 * 0xc);
        if ((int)uVar2 < (this->PrimitiveRenderData).ArrayNum) {
          uVar11 = ~uVar2 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = *(int *)((this->PrimitiveRenderData).AllocatorInstance.Data +
                        (longlong)(int)uVar2 * 0x80);
        uVar10 = (undefined7)((ulonglong)((longlong)(int)uVar2 * 0x80) >> 8);
        if (iVar8 == 0) {
          pUVar4 = (this->SphereTransformGizmo).field0_0x0.DebugPtr;
          (**(code **)(*(longlong *)pUVar4 + 0x360))(pUVar4,CONCAT71(uVar10,1));
          TObjectPtr<UTransformProxy>::operator=(this_00,&this->SphereTransformProxy);
        }
        else if (iVar8 == 1) {
          pUVar4 = (this->BoxTransformGizmo).field0_0x0.DebugPtr;
          (**(code **)(*(longlong *)pUVar4 + 0x360))(pUVar4,CONCAT71(uVar10,1));
          pUVar3 = (this->BoxIntervalGizmo).field0_0x0.DebugPtr;
          (**(code **)(pUVar3->_padding_ + 0x348))(pUVar3,1);
          TObjectPtr<UTransformProxy>::operator=(this_00,&this->BoxTransformProxy);
        }
        else if (iVar8 == 2) {
          pUVar4 = (this->CapsuleTransformGizmo).field0_0x0.DebugPtr;
          (**(code **)(*(longlong *)pUVar4 + 0x360))(pUVar4,CONCAT71(uVar10,1));
          pUVar3 = (this->CapsuleIntervalGizmo).field0_0x0.DebugPtr;
          (**(code **)(pUVar3->_padding_ + 0x348))(pUVar3,1);
          TObjectPtr<UTransformProxy>::operator=(this_00,&this->CapsuleTransformProxy);
        }
        else if ((iVar8 == 3) || (iVar8 == 5)) {
          pUVar4 = (this->FullTransformGizmo).field0_0x0.DebugPtr;
          (**(code **)(*(longlong *)pUVar4 + 0x360))(pUVar4,CONCAT71(uVar10,1));
          TObjectPtr<UTransformProxy>::operator=(this_00,&this->FullTransformProxy);
        }
        else {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_4021748204209962012>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Mechanics\\CollisionPrimitivesMechanic.cpp"
                             ,0x3e4,"false");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
      }
      else {
        pUVar4 = (this->TranslateTransformGizmo).field0_0x0.DebugPtr;
        (**(code **)(*(longlong *)pUVar4 + 0x360))(pUVar4,1);
      }
    }
  }
  return;
}

