// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 54

// StaticClass @ 14cb58ec0

UClass * __cdecl UMeshTopologySelectionMechanic::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshTopologySelectionMechanic",
               &Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.InnerSingleton,
               StaticRegisterNativesUMeshTopologySelectionMechanic,0xb30,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshTopologySelectionMechanic>,
               InternalVTableHelperCtorCaller<UMeshTopologySelectionMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14cb595d0

bool __cdecl UMeshTopologySelectionMechanic::<lambda_27_>::<lambda_invoker_cdecl>(void)

{
  return true;
}

// <lambda_invoker_cdecl> @ 14cb595e0

bool __cdecl UMeshTopologySelectionMechanic::<lambda_28_>::<lambda_invoker_cdecl>(void)

{
  return true;
}

// UMeshTopologySelectionMechanic @ 14cb62f80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMeshTopologySelectionMechanic * __thiscall
UMeshTopologySelectionMechanic::UMeshTopologySelectionMechanic
          (UMeshTopologySelectionMechanic *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this,param_1);
  this->bAddSelectionFilterPropertiesToParentTool = true;
  *(undefined8 *)&this->OnSelectionChanged = 0;
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x8 = 0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickBehaviorTarget__;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x10 = 0;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x18 = 2;
  puVar1 = &(this->ShouldSelectEdgeLoopsFunc).field_0x18;
  *(undefined8 *)&this->OnFaceSelectionPreviewChanged = 0;
  *(undefined8 *)&(this->OnFaceSelectionPreviewChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnFaceSelectionPreviewChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnFaceSelectionPreviewChanged).field_0x18 = 2;
  (this->Properties).field0_0x0.DebugPtr = (UMeshTopologySelectionMechanicProperties *)0x0;
  (this->TopoSelector).Object = (FMeshTopologySelector *)0x0;
  (this->TopoSelector).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->bIsEnabled = true;
  *(undefined8 *)&this->GetSpatialFunc = 0;
  *(undefined8 *)&(this->GetSpatialFunc).field_0x28 = 0;
  (this->HoverBehavior).field0_0x0.DebugPtr = (UMouseHoverBehavior *)0x0;
  (this->ClickOrDragBehavior).field0_0x0.DebugPtr = (USingleClickOrDragInputBehavior *)0x0;
  (this->MarqueeMechanic).field0_0x0.DebugPtr = (URectangleMarqueeMechanic *)0x0;
  this->MarqueeSelectionUpdateType = OnDrag;
  (this->BasePriority).Priority = 100;
  *(undefined8 *)&this->ShouldSelectEdgeLoopsFunc = 0;
  *(undefined8 *)&(this->ShouldSelectEdgeLoopsFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldSelectEdgeLoopsFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  *(code **)puVar1 = <lambda_27_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldSelectEdgeLoopsFunc =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(undefined8 *)&this->ShouldSelectEdgeRingsFunc = 0;
  puVar1 = &(this->ShouldSelectEdgeRingsFunc).field_0x18;
  *(undefined8 *)&(this->ShouldSelectEdgeRingsFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldSelectEdgeRingsFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  *(code **)puVar1 = <lambda_28_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldSelectEdgeRingsFunc =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(undefined8 *)&this->ShouldAddToSelectionFunc = 0;
  *(undefined8 *)&(this->ShouldAddToSelectionFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldAddToSelectionFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_29_>_UMeshTopologySelectionMechanic___0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ShouldAddToSelectionFunc).field_0x18;
  *(UMeshTopologySelectionMechanic **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldAddToSelectionFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<UMeshTopologySelectionMechanic::<lambda_29_>,bool>::Call;
  }
  *(undefined8 *)&this->ShouldRemoveFromSelectionFunc = 0;
  *(undefined8 *)&(this->ShouldRemoveFromSelectionFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldRemoveFromSelectionFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_30_>_UMeshTopologySelectionMechanic___0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ShouldRemoveFromSelectionFunc).field_0x18;
  *(UMeshTopologySelectionMechanic **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldRemoveFromSelectionFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<UMeshTopologySelectionMechanic::<lambda_30_>,bool>::Call;
  }
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TargetTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TargetTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TargetTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TargetTransform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetTransform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetTransform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TargetTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TargetTransform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  *(undefined8 *)&this->PendingSelectionFunction = 0;
  *(undefined8 *)&(this->PendingSelectionFunction).field_0x28 = 0;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&this->HilightSelection);
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&this->PersistentSelection);
  this->SelectionTimestamp = 0;
  (this->ActiveChange).Ptr = (FMeshTopologySelectionMechanicSelectionChange *)0x0;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&this->PreDragPersistentSelection);
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
            (&this->LastUpdateRectangleSelection);
  (this->PreDragTopoSelectorSettings).bEnableFaceHits = true;
  (this->PreDragTopoSelectorSettings).bEnableEdgeHits = true;
  (this->PreDragTopoSelectorSettings).bEnableCornerHits = true;
  (this->PreDragTopoSelectorSettings).bHitBackFaces = true;
  (this->PreDragTopoSelectorSettings).bPreferProjectedElement = false;
  (this->PreDragTopoSelectorSettings).bSelectDownRay = false;
  (this->PreDragTopoSelectorSettings).bIgnoreOcclusion = false;
  *(undefined8 *)&(this->TriIsOccludedCache).field_0x8 = 0;
  *(undefined8 *)&this->TriIsOccludedCache = 0;
  *(undefined8 *)&(this->TriIsOccludedCache).field_0x20 = 0;
  *(undefined4 *)&(this->TriIsOccludedCache).field_0x28 = 0;
  *(undefined4 *)&(this->TriIsOccludedCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->TriIsOccludedCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriIsOccludedCache).field_0x34 = 0;
  *(undefined8 *)&(this->TriIsOccludedCache).field_0x40 = 0;
  *(undefined4 *)&(this->TriIsOccludedCache).field_0x48 = 0;
  *(undefined8 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x8 = 0;
  this->bCurrentlyMarqueeDragging = false;
  (this->PreviewGeometryActor).field0_0x0.DebugPtr = (APreviewGeometryActor *)0x0;
  (this->DrawnTriangleSetComponent).field0_0x0.DebugPtr = (UTriangleSetComponent *)0x0;
  *(undefined8 *)&(this->CurrentlyHighlightedGroups).Elements = 0;
  *(undefined8 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x34 = 0;
  (this->CurrentlyHighlightedGroups).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CurrentlyHighlightedGroups).HashSize = 0;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->HighlightedFaceMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  this->bShiftToggle = false;
  this->bCtrlToggle = false;
  this->bShowSelectableCorners = true;
  this->bShowEdges = true;
  FToolDataVisualizer::FToolDataVisualizer(&this->PolyEdgesRenderer);
  FToolDataVisualizer::FToolDataVisualizer(&this->HilightRenderer);
  FToolDataVisualizer::FToolDataVisualizer(&this->SelectionRenderer);
  this->bRenderTopology = true;
  return this;
}

// UMeshTopologySelectionMechanic @ 14cb63330

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMeshTopologySelectionMechanic * __thiscall
UMeshTopologySelectionMechanic::UMeshTopologySelectionMechanic(UMeshTopologySelectionMechanic *this)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  UInteractionMechanic::UInteractionMechanic((UInteractionMechanic *)this);
  this->bAddSelectionFilterPropertiesToParentTool = true;
  *(undefined8 *)&this->OnSelectionChanged = 0;
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x8 = 0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickBehaviorTarget__;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x10 = 0;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined8 *)&(this->OnSelectionChanged).field_0x18 = 2;
  puVar1 = &(this->ShouldSelectEdgeLoopsFunc).field_0x18;
  *(undefined8 *)&this->OnFaceSelectionPreviewChanged = 0;
  *(undefined8 *)&(this->OnFaceSelectionPreviewChanged).field_0x8 = 0;
  *(undefined8 *)&(this->OnFaceSelectionPreviewChanged).field_0x10 = 0;
  *(undefined8 *)&(this->OnFaceSelectionPreviewChanged).field_0x18 = 2;
  (this->Properties).field0_0x0.DebugPtr = (UMeshTopologySelectionMechanicProperties *)0x0;
  (this->TopoSelector).Object = (FMeshTopologySelector *)0x0;
  (this->TopoSelector).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  this->bIsEnabled = true;
  *(undefined8 *)&this->GetSpatialFunc = 0;
  *(undefined8 *)&(this->GetSpatialFunc).field_0x28 = 0;
  (this->HoverBehavior).field0_0x0.DebugPtr = (UMouseHoverBehavior *)0x0;
  (this->ClickOrDragBehavior).field0_0x0.DebugPtr = (USingleClickOrDragInputBehavior *)0x0;
  (this->MarqueeMechanic).field0_0x0.DebugPtr = (URectangleMarqueeMechanic *)0x0;
  this->MarqueeSelectionUpdateType = OnDrag;
  (this->BasePriority).Priority = 100;
  *(undefined8 *)&this->ShouldSelectEdgeLoopsFunc = 0;
  *(undefined8 *)&(this->ShouldSelectEdgeLoopsFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldSelectEdgeLoopsFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  *(code **)puVar1 = <lambda_27_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldSelectEdgeLoopsFunc =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(undefined8 *)&this->ShouldSelectEdgeRingsFunc = 0;
  puVar1 = &(this->ShouldSelectEdgeRingsFunc).field_0x18;
  *(undefined8 *)&(this->ShouldSelectEdgeRingsFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldSelectEdgeRingsFunc).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  *(code **)puVar1 = <lambda_28_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldSelectEdgeRingsFunc =
         UE::Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  *(undefined8 *)&this->ShouldAddToSelectionFunc = 0;
  *(undefined8 *)&(this->ShouldAddToSelectionFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldAddToSelectionFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_29_>_UMeshTopologySelectionMechanic___0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ShouldAddToSelectionFunc).field_0x18;
  *(UMeshTopologySelectionMechanic **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldAddToSelectionFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<UMeshTopologySelectionMechanic::<lambda_29_>,bool>::Call;
  }
  *(undefined8 *)&this->ShouldRemoveFromSelectionFunc = 0;
  *(undefined8 *)&(this->ShouldRemoveFromSelectionFunc).field_0x28 = 0;
  *(undefined ***)&(this->ShouldRemoveFromSelectionFunc).field_0x10 =
       &
       ___7__TFunction_OwnedObject_V<lambda_30_>_UMeshTopologySelectionMechanic___0A__0A__Function_Private_Core_UE__6B_
  ;
  puVar1 = &(this->ShouldRemoveFromSelectionFunc).field_0x18;
  *(UMeshTopologySelectionMechanic **)puVar1 = this;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->ShouldRemoveFromSelectionFunc =
         UE::Core::Private::Function::
         TFunctionRefCaller<UMeshTopologySelectionMechanic::<lambda_30_>,bool>::Call;
  }
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TargetTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TargetTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TargetTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TargetTransform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetTransform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetTransform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TargetTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TargetTransform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  *(undefined8 *)&this->PendingSelectionFunction = 0;
  *(undefined8 *)&(this->PendingSelectionFunction).field_0x28 = 0;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&this->HilightSelection);
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&this->PersistentSelection);
  this->SelectionTimestamp = 0;
  (this->ActiveChange).Ptr = (FMeshTopologySelectionMechanicSelectionChange *)0x0;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&this->PreDragPersistentSelection);
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
            (&this->LastUpdateRectangleSelection);
  (this->PreDragTopoSelectorSettings).bEnableFaceHits = true;
  (this->PreDragTopoSelectorSettings).bEnableEdgeHits = true;
  (this->PreDragTopoSelectorSettings).bEnableCornerHits = true;
  (this->PreDragTopoSelectorSettings).bHitBackFaces = true;
  (this->PreDragTopoSelectorSettings).bPreferProjectedElement = false;
  (this->PreDragTopoSelectorSettings).bSelectDownRay = false;
  (this->PreDragTopoSelectorSettings).bIgnoreOcclusion = false;
  *(undefined8 *)&(this->TriIsOccludedCache).field_0x8 = 0;
  *(undefined8 *)&this->TriIsOccludedCache = 0;
  *(undefined8 *)&(this->TriIsOccludedCache).field_0x20 = 0;
  *(undefined4 *)&(this->TriIsOccludedCache).field_0x28 = 0;
  *(undefined4 *)&(this->TriIsOccludedCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->TriIsOccludedCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriIsOccludedCache).field_0x34 = 0;
  *(undefined8 *)&(this->TriIsOccludedCache).field_0x40 = 0;
  *(undefined4 *)&(this->TriIsOccludedCache).field_0x48 = 0;
  *(undefined8 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x8 = 0;
  this->bCurrentlyMarqueeDragging = false;
  (this->PreviewGeometryActor).field0_0x0.DebugPtr = (APreviewGeometryActor *)0x0;
  (this->DrawnTriangleSetComponent).field0_0x0.DebugPtr = (UTriangleSetComponent *)0x0;
  *(undefined8 *)&(this->CurrentlyHighlightedGroups).Elements = 0;
  *(undefined8 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x34 = 0;
  (this->CurrentlyHighlightedGroups).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CurrentlyHighlightedGroups).HashSize = 0;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->HighlightedFaceMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  this->bShiftToggle = false;
  this->bCtrlToggle = false;
  this->bShowSelectableCorners = true;
  this->bShowEdges = true;
  FToolDataVisualizer::FToolDataVisualizer(&this->PolyEdgesRenderer);
  FToolDataVisualizer::FToolDataVisualizer(&this->HilightRenderer);
  FToolDataVisualizer::FToolDataVisualizer(&this->SelectionRenderer);
  this->bRenderTopology = true;
  return this;
}

// ~UMeshTopologySelectionMechanic @ 14cb65050

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
UMeshTopologySelectionMechanic::~UMeshTopologySelectionMechanic
          (UMeshTopologySelectionMechanic *this)

{
  APreviewGeometryActor *pAVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  FMeshTopologySelectionMechanicSelectionChange *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  longlong *plVar8;
  
  pAVar1 = (this->PreviewGeometryActor).field0_0x0.DebugPtr;
  *(undefined ***)this = &_vftable__for__UInteractionMechanic__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IClickBehaviorTarget__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  if (pAVar1 != (APreviewGeometryActor *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("PreviewGeometryActor == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\MeshTopologySelectionMechanic.cpp"
                       ,0x26,
                       L"Shutdown() should be called before UMeshTopologySelectionMechanic is destroyed."
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FToolDataVisualizer::~FToolDataVisualizer(&this->SelectionRenderer);
  FToolDataVisualizer::~FToolDataVisualizer(&this->HilightRenderer);
  FToolDataVisualizer::~FToolDataVisualizer(&this->PolyEdgesRenderer);
  (this->CurrentlyHighlightedGroups).HashSize = 0;
  FVar2 = (this->CurrentlyHighlightedGroups).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CurrentlyHighlightedGroups).Elements);
  *(undefined4 *)&(this->TriIsOccludedCache).field_0x48 = 0;
  pvVar3 = *(void **)&(this->TriIsOccludedCache).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TriIsOccludedCache);
  UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection
            (&this->LastUpdateRectangleSelection);
  UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&this->PreDragPersistentSelection)
  ;
  pFVar4 = (this->ActiveChange).Ptr;
  if (pFVar4 != (FMeshTopologySelectionMechanicSelectionChange *)0x0) {
    (**(code **)(pFVar4->_padding_ + 0x48))(pFVar4,1);
  }
  UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&this->PersistentSelection);
  UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&this->HilightSelection);
  if (*(longlong *)&this->PendingSelectionFunction != 0) {
    plVar5 = *(longlong **)&(this->PendingSelectionFunction).field_0x28;
    plVar8 = (longlong *)&(this->PendingSelectionFunction).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar8 = plVar5;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)&this->ShouldRemoveFromSelectionFunc != 0) {
    plVar5 = *(longlong **)&(this->ShouldRemoveFromSelectionFunc).field_0x28;
    plVar8 = (longlong *)&(this->ShouldRemoveFromSelectionFunc).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar8 = plVar5;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)&this->ShouldAddToSelectionFunc != 0) {
    plVar5 = *(longlong **)&(this->ShouldAddToSelectionFunc).field_0x28;
    plVar8 = (longlong *)&(this->ShouldAddToSelectionFunc).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar8 = plVar5;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)&this->ShouldSelectEdgeRingsFunc != 0) {
    plVar5 = *(longlong **)&(this->ShouldSelectEdgeRingsFunc).field_0x28;
    plVar8 = (longlong *)&(this->ShouldSelectEdgeRingsFunc).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar8 = plVar5;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)&this->ShouldSelectEdgeLoopsFunc != 0) {
    plVar5 = *(longlong **)&(this->ShouldSelectEdgeLoopsFunc).field_0x28;
    plVar8 = (longlong *)&(this->ShouldSelectEdgeLoopsFunc).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar8 = plVar5;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if (*(longlong *)&this->GetSpatialFunc != 0) {
    plVar5 = *(longlong **)&(this->GetSpatialFunc).field_0x28;
    plVar8 = (longlong *)&(this->GetSpatialFunc).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar8 = plVar5;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TopoSelector).SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnFaceSelectionPreviewChanged).field_0x8,
             *(int *)&(this->OnFaceSelectionPreviewChanged).field_0x10);
  pvVar3 = *(void **)&(this->OnFaceSelectionPreviewChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFaceSelectionPreviewChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectionChanged).field_0x8,*(int *)&(this->OnSelectionChanged).field_0x10);
  pvVar3 = *(void **)&(this->OnSelectionChanged).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectionChanged);
  *(undefined ***)&this->field_0x38 = &___7IModifierToggleBehaviorTarget__6B_;
  *(undefined ***)&this->field_0x30 = &___7IModifierToggleBehaviorTarget__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// operator() @ 14cb69880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UMeshTopologySelectionMechanic::Initialize'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *param_1,TVector<double> *param_2,double param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar60;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_98 [6];
  
  lVar1 = *(longlong *)this;
  if (*(char *)(lVar1 + 0x76c) == '\0') {
    auVar15 = *(undefined1 (*) [16])(lVar1 + 0x1d0);
    auVar21 = *(undefined1 (*) [16])(lVar1 + 0x1c0);
    dVar3 = (param_2->field0_0x0)._s_0.X * *(double *)(lVar1 + 0x200);
    dVar5 = (param_2->field0_0x0)._s_0.Y * *(double *)(lVar1 + 0x208);
    uVar43 = (undefined4)((ulonglong)dVar5 >> 0x20);
    auVar54._0_8_ = (param_2->field0_0x0)._s_0.Z * *(double *)(lVar1 + 0x210);
    auVar54._8_8_ = *(double *)(lVar1 + 0x218) * 0.0;
    dVar7 = *(double *)(lVar1 + 0x1d8);
    auVar45._8_4_ = SUB84(dVar5,0);
    auVar45._0_8_ = dVar3;
    auVar45._12_4_ = uVar43;
    dVar9 = auVar15._0_8_;
    auVar36 = blendpd(auVar21,auVar15,2);
    auVar46._0_8_ = auVar45._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar3;
    auVar46._8_8_ = auVar54._0_8_ * auVar21._8_8_ - dVar9 * dVar5;
    auVar21._8_4_ = SUB84(dVar5,0);
    auVar21._0_8_ = dVar3;
    auVar21._12_4_ = uVar43;
    auVar21 = blendpd(auVar21,auVar54,2);
    dVar56 = auVar15._8_8_;
    auVar25._0_8_ = auVar21._0_8_ * dVar9 - auVar36._0_8_ * auVar54._0_8_;
    auVar25._8_8_ = auVar21._8_8_ * dVar56 - auVar36._8_8_ * auVar54._8_8_;
    auVar21 = *(undefined1 (*) [16])(lVar1 + 0x1c0);
    auVar36 = blendpd(auVar46,auVar25,2);
    auVar47._0_8_ = auVar36._0_8_ + auVar36._0_8_;
    auVar47._8_8_ = auVar36._8_8_ + auVar36._8_8_;
    dVar13 = auVar46._8_8_ + auVar46._8_8_;
    dVar2 = auVar25._0_8_ + auVar25._0_8_;
    uVar43 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar39._8_4_ = SUB84(dVar2,0);
    auVar39._0_8_ = dVar13;
    auVar39._12_4_ = uVar43;
    auVar30._8_4_ = SUB84(dVar2,0);
    auVar30._0_8_ = dVar13;
    auVar30._12_4_ = uVar43;
    auVar25 = blendpd(auVar30,auVar47,2);
    auVar40._0_8_ = auVar39._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar13;
    auVar40._8_8_ = auVar47._0_8_ * auVar21._8_8_ - dVar9 * dVar2;
    auVar21 = blendpd(auVar21,auVar15,2);
    dVar4 = (param_1->field0_0x0)._s_0.X * *(double *)(lVar1 + 0x200);
    dVar6 = (param_1->field0_0x0)._s_0.Y * *(double *)(lVar1 + 0x208);
    uVar43 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar36._8_4_ = SUB84(auVar40._8_8_,0);
    auVar36._0_8_ = auVar40._0_8_;
    auVar36._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
    auVar55._0_8_ = (param_1->field0_0x0)._s_0.Z * *(double *)(lVar1 + 0x210);
    auVar55._8_8_ = *(double *)(lVar1 + 0x218) * 0.0;
    auVar31._0_8_ = auVar25._0_8_ * dVar9 - auVar21._0_8_ * auVar47._0_8_;
    auVar31._8_8_ = auVar25._8_8_ * dVar56 - auVar21._8_8_ * auVar47._8_8_;
    auVar21 = *(undefined1 (*) [16])(lVar1 + 0x1c0);
    dVar2 = dVar2 * dVar7 + dVar5 + auVar31._0_8_ + *(double *)(lVar1 + 0x1e8);
    local_b8._8_4_ = SUB84(dVar2,0);
    local_b8._0_8_ = dVar13 * dVar7 + dVar3 + auVar36._8_8_ + *(double *)(lVar1 + 0x1e0);
    local_b8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    auVar36 = blendpd(auVar40,auVar31,2);
    auVar25 = blendpd(auVar21,auVar15,2);
    local_b8._s_0.Z =
         auVar47._0_8_ * dVar7 + auVar54._0_8_ + auVar36._0_8_ + *(double *)(lVar1 + 0x1f0);
    auVar48._8_4_ = SUB84(dVar6,0);
    auVar48._0_8_ = dVar4;
    auVar48._12_4_ = uVar43;
    auVar49._0_8_ = auVar48._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar4;
    auVar49._8_8_ = auVar55._0_8_ * auVar21._8_8_ - dVar9 * dVar6;
    auVar22._8_4_ = SUB84(dVar6,0);
    auVar22._0_8_ = dVar4;
    auVar22._12_4_ = uVar43;
    auVar21 = blendpd(auVar22,auVar55,2);
    auVar23._0_8_ = auVar21._0_8_ * dVar9 - auVar25._0_8_ * auVar55._0_8_;
    auVar23._8_8_ = auVar21._8_8_ * dVar56 - auVar25._8_8_ * auVar55._8_8_;
    auVar21 = *(undefined1 (*) [16])(lVar1 + 0x1c0);
    auVar25 = blendpd(auVar49,auVar23,2);
    dVar13 = auVar49._8_8_ + auVar49._8_8_;
    dVar2 = auVar23._0_8_ + auVar23._0_8_;
    uVar43 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar50._0_8_ = auVar25._0_8_ + auVar25._0_8_;
    auVar50._8_8_ = auVar25._8_8_ + auVar25._8_8_;
    auVar41._8_4_ = SUB84(dVar2,0);
    auVar41._0_8_ = dVar13;
    auVar41._12_4_ = uVar43;
    auVar32._8_4_ = SUB84(dVar2,0);
    auVar32._0_8_ = dVar13;
    auVar32._12_4_ = uVar43;
    auVar25 = blendpd(auVar32,auVar50,2);
    auVar42._0_8_ = auVar41._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar13;
    auVar42._8_8_ = auVar50._0_8_ * auVar21._8_8_ - dVar9 * dVar2;
    auVar24._8_4_ = SUB84(auVar42._8_8_,0);
    auVar24._0_8_ = auVar42._0_8_;
    auVar24._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
    auVar15 = blendpd(auVar21,auVar15,2);
    auVar33._0_8_ = auVar25._0_8_ * dVar9 - auVar15._0_8_ * auVar50._0_8_;
    auVar33._8_8_ = auVar25._8_8_ * dVar56 - auVar15._8_8_ * auVar50._8_8_;
    auVar15 = blendpd(auVar42,auVar33,2);
    dVar9 = dVar2 * dVar56 + dVar6 + auVar33._0_8_ + *(double *)(lVar1 + 0x1e8);
    local_98[0]._16_8_ =
         auVar50._0_8_ * dVar56 + auVar55._0_8_ + auVar15._0_8_ + *(double *)(lVar1 + 0x1f0);
    local_98[0]._8_4_ = SUB84(dVar9,0);
    local_98[0]._0_8_ = dVar13 * dVar56 + dVar4 + auVar24._8_8_ + *(double *)(lVar1 + 0x1e0);
    local_98[0]._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    bVar12 = ToolSceneQueriesUtil::PointSnapQuery
                       ((FViewCameraState *)(lVar1 + 0x720),(TVector<double> *)&local_98[0]._s_0,
                        (TVector<double> *)&local_b8._s_0,VISUAL_ANGLE_SNAP_THRESHOLD_DEG * param_3)
    ;
  }
  else {
    dVar3 = (param_2->field0_0x0)._s_0.X * *(double *)(lVar1 + 0x200);
    dVar4 = (param_2->field0_0x0)._s_0.Y * *(double *)(lVar1 + 0x208);
    uVar43 = (undefined4)((ulonglong)dVar4 >> 0x20);
    dVar5 = (param_2->field0_0x0)._s_0.Z * *(double *)(lVar1 + 0x210);
    dVar13 = *(double *)(lVar1 + 0x218) * 0.0;
    dVar11 = *(double *)(lVar1 + 0x1d8);
    auVar44._0_8_ = (param_1->field0_0x0)._s_0.Z * *(double *)(lVar1 + 0x210);
    auVar44._8_8_ = *(double *)(lVar1 + 0x218) * 0.0;
    auVar57._8_4_ = SUB84(dVar4,0);
    auVar57._0_8_ = dVar3;
    auVar57._12_4_ = uVar43;
    auVar15 = *(undefined1 (*) [16])(lVar1 + 0x1c0);
    fVar60 = (float)((double)(float)((double)*(float *)(lVar1 + 0x764) *
                                     VISUAL_ANGLE_SNAP_THRESHOLD_DEG * ___real_3f86c16c16c16c17) *
                    param_3);
    auVar21 = *(undefined1 (*) [16])(lVar1 + 0x1d0);
    dVar9 = auVar21._0_8_;
    auVar25 = blendpd(auVar15,auVar21,2);
    auVar58._0_8_ = auVar57._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar3;
    auVar58._8_8_ = dVar5 * auVar15._8_8_ - dVar9 * dVar4;
    auVar14._8_4_ = SUB84(dVar4,0);
    auVar14._0_8_ = dVar3;
    auVar14._12_4_ = uVar43;
    auVar15._8_4_ = SUB84(dVar13,0);
    auVar15._0_8_ = dVar5;
    auVar15._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    auVar15 = blendpd(auVar14,auVar15,2);
    dVar56 = auVar21._8_8_;
    auVar16._0_8_ = auVar15._0_8_ * dVar9 - auVar25._0_8_ * dVar5;
    auVar16._8_8_ = auVar15._8_8_ * dVar56 - auVar25._8_8_ * dVar13;
    auVar15 = *(undefined1 (*) [16])(lVar1 + 0x1c0);
    auVar25 = blendpd(auVar58,auVar16,2);
    dVar8 = auVar58._8_8_ + auVar58._8_8_;
    dVar10 = auVar16._0_8_ + auVar16._0_8_;
    uVar43 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar59._0_8_ = auVar25._0_8_ + auVar25._0_8_;
    auVar59._8_8_ = auVar25._8_8_ + auVar25._8_8_;
    auVar34._8_4_ = SUB84(dVar10,0);
    auVar34._0_8_ = dVar8;
    auVar34._12_4_ = uVar43;
    auVar26._8_4_ = SUB84(dVar10,0);
    auVar26._0_8_ = dVar8;
    auVar26._12_4_ = uVar43;
    auVar25 = blendpd(auVar26,auVar59,2);
    auVar35._0_8_ = auVar34._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar8;
    auVar35._8_8_ = auVar59._0_8_ * auVar15._8_8_ - dVar9 * dVar10;
    auVar15 = blendpd(auVar15,auVar21,2);
    dVar6 = (param_1->field0_0x0)._s_0.X * *(double *)(lVar1 + 0x200);
    dVar7 = (param_1->field0_0x0)._s_0.Y * *(double *)(lVar1 + 0x208);
    uVar43 = (undefined4)((ulonglong)dVar7 >> 0x20);
    auVar17._8_4_ = SUB84(auVar35._8_8_,0);
    auVar17._0_8_ = auVar35._0_8_;
    auVar17._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
    auVar51._8_4_ = SUB84(dVar7,0);
    auVar51._0_8_ = dVar6;
    auVar51._12_4_ = uVar43;
    auVar27._0_8_ = auVar25._0_8_ * dVar9 - auVar15._0_8_ * auVar59._0_8_;
    auVar27._8_8_ = auVar25._8_8_ * dVar56 - auVar15._8_8_ * auVar59._8_8_;
    auVar15 = *(undefined1 (*) [16])(lVar1 + 0x1c0);
    auVar25 = blendpd(auVar15,auVar21,2);
    auVar52._0_8_ = auVar51._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar6;
    auVar52._8_8_ = auVar44._0_8_ * auVar15._8_8_ - dVar9 * dVar7;
    auVar18._8_4_ = SUB84(dVar7,0);
    auVar18._0_8_ = dVar6;
    auVar18._12_4_ = uVar43;
    auVar15 = blendpd(auVar18,auVar44,2);
    auVar36 = blendpd(auVar35,auVar27,2);
    auVar19._0_8_ = auVar15._0_8_ * dVar9 - auVar25._0_8_ * auVar44._0_8_;
    auVar19._8_8_ = auVar15._8_8_ * dVar56 - auVar25._8_8_ * auVar44._8_8_;
    auVar15 = *(undefined1 (*) [16])(lVar1 + 0x1c0);
    auVar25 = blendpd(auVar52,auVar19,2);
    dVar13 = auVar52._8_8_ + auVar52._8_8_;
    dVar2 = auVar19._0_8_ + auVar19._0_8_;
    uVar43 = (undefined4)((ulonglong)dVar2 >> 0x20);
    auVar53._0_8_ = auVar25._0_8_ + auVar25._0_8_;
    auVar53._8_8_ = auVar25._8_8_ + auVar25._8_8_;
    auVar37._8_4_ = SUB84(dVar2,0);
    auVar37._0_8_ = dVar13;
    auVar37._12_4_ = uVar43;
    auVar28._8_4_ = SUB84(dVar2,0);
    auVar28._0_8_ = dVar13;
    auVar28._12_4_ = uVar43;
    auVar25 = blendpd(auVar28,auVar53,2);
    auVar38._0_8_ = auVar37._8_8_ * auVar15._0_8_ - auVar15._8_8_ * dVar13;
    auVar38._8_8_ = auVar53._0_8_ * auVar15._8_8_ - dVar9 * dVar2;
    auVar20._8_4_ = SUB84(auVar38._8_8_,0);
    auVar20._0_8_ = auVar38._0_8_;
    auVar20._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
    auVar15 = blendpd(auVar15,auVar21,2);
    auVar29._0_8_ = auVar25._0_8_ * dVar9 - auVar15._0_8_ * auVar53._0_8_;
    auVar29._8_8_ = auVar25._8_8_ * dVar56 - auVar15._8_8_ * auVar53._8_8_;
    auVar15 = blendpd(auVar38,auVar29,2);
    dVar13 = (dVar8 * dVar11 + dVar3 + auVar17._8_8_ + *(double *)(lVar1 + 0x1e0)) -
             (dVar13 * dVar56 + dVar6 + auVar20._8_8_ + *(double *)(lVar1 + 0x1e0));
    dVar9 = (dVar10 * dVar11 + dVar4 + auVar27._0_8_ + *(double *)(lVar1 + 0x1e8)) -
            (dVar2 * dVar56 + dVar7 + auVar29._0_8_ + *(double *)(lVar1 + 0x1e8));
    dVar56 = (auVar59._0_8_ * dVar11 + dVar5 + auVar36._0_8_ + *(double *)(lVar1 + 0x1f0)) -
             (auVar53._0_8_ * dVar56 + auVar44._0_8_ + auVar15._0_8_ + *(double *)(lVar1 + 0x1f0));
    bVar12 = dVar9 * dVar9 + dVar13 * dVar13 + dVar56 * dVar56 < (double)(fVar60 * fVar60);
  }
  return bVar12;
}

// BeginChange @ 14cb74800

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMeshTopologySelectionMechanic::BeginChange(UMeshTopologySelectionMechanic *this)

{
  TUniquePtr<FMeshTopologySelectionMechanicSelectionChange,TDefaultDelete<FMeshTopologySelectionMechanicSelectionChange>_>
  *pTVar1;
  FMeshTopologySelectionMechanicSelectionChange *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMeshTopologySelectionMechanicSelectionChange *pFVar5;
  longlong lVar6;
  longlong local_18 [2];
  
  pTVar1 = &this->ActiveChange;
  if (pTVar1->Ptr != (FMeshTopologySelectionMechanicSelectionChange *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6328438030650572106>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\MeshTopologySelectionMechanic.cpp"
                       ,0x2b6,"ActiveChange.IsValid() == false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = ::operator_new(0x1f0);
  if (pFVar5 == (FMeshTopologySelectionMechanicSelectionChange *)0x0) {
    pFVar5 = (FMeshTopologySelectionMechanicSelectionChange *)0x0;
  }
  else {
    memset(&pFVar5->Before,0,0x1e8);
    pFVar5->_padding_ = (longlong)&___7FMeshTopologySelectionMechanicSelectionChange__6B_;
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&pFVar5->Before);
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&pFVar5->After);
    pFVar5->Timestamp = 0;
  }
  if (pTVar1 == (TUniquePtr<FMeshTopologySelectionMechanicSelectionChange,TDefaultDelete<FMeshTopologySelectionMechanicSelectionChange>_>
                 *)local_18) {
    if (pFVar5 == (FMeshTopologySelectionMechanicSelectionChange *)0x0) goto LAB_14cb748ce;
    lVar6 = pFVar5->_padding_;
  }
  else {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar5;
    if (pFVar2 == (FMeshTopologySelectionMechanicSelectionChange *)0x0) goto LAB_14cb748ce;
    lVar6 = pFVar2->_padding_;
    pFVar5 = pFVar2;
  }
  (**(code **)(lVar6 + 0x48))(pFVar5,1);
LAB_14cb748ce:
  pFVar5 = pTVar1->Ptr;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(pFVar5->Before).SelectedGroupIDs,&(this->PersistentSelection).SelectedGroupIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(pFVar5->Before).SelectedCornerIDs,&(this->PersistentSelection).SelectedCornerIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(pFVar5->Before).SelectedEdgeIDs,&(this->PersistentSelection).SelectedEdgeIDs);
  pTVar1->Ptr->Timestamp = this->SelectionTimestamp;
  return;
}

// BeginHoverSequenceHitTest @ 14cb74930

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

FInputRayHit * __thiscall
UMeshTopologySelectionMechanic::BeginHoverSequenceHitTest
          (UMeshTopologySelectionMechanic *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  bool bVar1;
  undefined1 auStack_278 [32];
  FHitResult local_228;
  FGroupTopologySelection local_128;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_278;
  memset(&local_228,0,0x100);
  local_228.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
  local_228.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
  local_228.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
  local_228.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
  local_228.HitObjectHandle.InstanceIndex = -1;
  local_228.HitObjectHandle.ResolutionStatus = Invalid;
  local_228.HitObjectHandle._29_3_ = 0;
  local_228.Time = 1.0;
  local_228.MyItem = -1;
  local_228.HitObjectHandle.ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  if (*(char *)&this->OnFaceSelectionPreviewChanged != '\0') {
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_128);
    bVar1 = TopologyHitTest((UMeshTopologySelectionMechanic *)
                            (this[-1].SelectionRenderer.TotalTransform.Translation.ZW.m128d_f64 + 1)
                            ,&param_1->WorldRay,&local_228,&local_128,false);
    local_128.SelectedEdgeIDs.HashSize = 0;
    if (local_128.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_128.SelectedEdgeIDs.Elements);
    local_128.SelectedCornerIDs.HashSize = 0;
    if (local_128.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_128.SelectedCornerIDs.Elements);
    local_128.SelectedGroupIDs.HashSize = 0;
    if (local_128.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_128);
    if (bVar1) {
      FInputRayHit::FInputRayHit(__return_storage_ptr__,(double)local_228.Distance);
      return __return_storage_ptr__;
    }
  }
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ClearHighlight @ 14cb79f30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMeshTopologySelectionMechanic::ClearHighlight(UMeshTopologySelectionMechanic *this)

{
  undefined1 *puVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  
  if (((this->DrawnTriangleSetComponent).field0_0x0.DebugPtr == (UTriangleSetComponent *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("DrawnTriangleSetComponent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\MeshTopologySelectionMechanic.cpp"
                         ,0xff,L"Initialize() not called on UMeshTopologySelectionMechanic."), bVar4
     )) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (&(this->HilightSelection).SelectedGroupIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (&(this->HilightSelection).SelectedCornerIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (&(this->HilightSelection).SelectedEdgeIDs);
  UTriangleSetComponent::Clear((this->DrawnTriangleSetComponent).field0_0x0.DebugPtr);
  this_00 = &this->CurrentlyHighlightedGroups;
  bVar4 = 1 < (this->CurrentlyHighlightedGroups).HashSize;
  if (!bVar4) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar1 = &(this->CurrentlyHighlightedGroups).Elements.field_0xc;
  *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->CurrentlyHighlightedGroups).Elements.field_0x2c;
  *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->CurrentlyHighlightedGroups).Elements.field_0x10,0);
  }
  if (bVar4) {
    (this->CurrentlyHighlightedGroups).HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  return;
}

// ClearSelection @ 14cb7a310

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMeshTopologySelectionMechanic::ClearSelection(UMeshTopologySelectionMechanic *this)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (&(this->PersistentSelection).SelectedGroupIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (&(this->PersistentSelection).SelectedCornerIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (&(this->PersistentSelection).SelectedEdgeIDs);
  this->SelectionTimestamp = this->SelectionTimestamp + 1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSelectionChanged);
  return;
}

// DisableBehaviors @ 14cb82330

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
UMeshTopologySelectionMechanic::DisableBehaviors
          (UMeshTopologySelectionMechanic *this,UInteractiveTool *param_1)

{
  (**(code **)(param_1->_padding_ + 0x300))(param_1,this);
                    /* WARNING: Could not recover jumptable at 0x00014cb82366. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x300))(param_1,(this->MarqueeMechanic).field0_0x0.DebugPtr);
  return;
}

// DrawHUD @ 14cb850f0

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
UMeshTopologySelectionMechanic::DrawHUD
          (UMeshTopologySelectionMechanic *this,FCanvas *param_1,IToolsContextRenderAPI *param_2)

{
  if (this->bIsEnabled != false) {
                    /* WARNING: Could not recover jumptable at 0x00014cb85103. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(this->MarqueeMechanic).field0_0x0.DebugPtr + 0x2e0))();
    return;
  }
  return;
}

// EndChange @ 14cb88e40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_> __thiscall
UMeshTopologySelectionMechanic::EndChange(UMeshTopologySelectionMechanic *this)

{
  TUniquePtr<FMeshTopologySelectionMechanicSelectionChange,TDefaultDelete<FMeshTopologySelectionMechanicSelectionChange>_>
  *pTVar1;
  FMeshTopologySelectionMechanicSelectionChange *pFVar2;
  code *pcVar3;
  bool bVar4;
  TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_> TVar5;
  FToolCommandChange *in_RDX;
  FToolCommandChange local_18 [2];
  
  pTVar1 = &this->ActiveChange;
  pFVar2 = pTVar1->Ptr;
  if (pFVar2 == (FMeshTopologySelectionMechanicSelectionChange *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6328438030650572098>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\MeshTopologySelectionMechanic.cpp"
                       ,0x2be,"ActiveChange.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5.Ptr = (FToolCommandChange *)(*pcVar3)();
      return (TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_>)TVar5.Ptr;
    }
  }
  else if (this->SelectionTimestamp != pFVar2->Timestamp) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&(pFVar2->After).SelectedGroupIDs,&(this->PersistentSelection).SelectedGroupIDs);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&(pFVar2->After).SelectedCornerIDs,&(this->PersistentSelection).SelectedCornerIDs);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&(pFVar2->After).SelectedEdgeIDs,&(this->PersistentSelection).SelectedEdgeIDs);
    *in_RDX = (FToolCommandChange)pTVar1->Ptr;
    pTVar1->Ptr = (FMeshTopologySelectionMechanicSelectionChange *)0x0;
    return (TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_>)in_RDX;
  }
  if ((FToolCommandChange *)pTVar1 != local_18) {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = (FMeshTopologySelectionMechanicSelectionChange *)0x0;
    if (pFVar2 != (FMeshTopologySelectionMechanicSelectionChange *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x48))(pFVar2,1);
    }
  }
  *in_RDX = (FToolCommandChange)0x0;
  return (TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_>)in_RDX;
}

// EndChangeAndEmitIfModified @ 14cb88f30

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
UMeshTopologySelectionMechanic::EndChangeAndEmitIfModified(UMeshTopologySelectionMechanic *this)

{
  TUniquePtr<FMeshTopologySelectionMechanicSelectionChange,TDefaultDelete<FMeshTopologySelectionMechanicSelectionChange>_>
  *pTVar1;
  FMeshTopologySelectionMechanicSelectionChange *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  UInteractiveTool *pUVar6;
  longlong lVar7;
  FText *pFVar8;
  FMeshTopologySelectionMechanicSelectionChange *local_res8;
  longlong local_28;
  FText local_20;
  
  pTVar1 = &this->ActiveChange;
  pFVar2 = pTVar1->Ptr;
  if (pFVar2 == (FMeshTopologySelectionMechanicSelectionChange *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6328438030650572087>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\MeshTopologySelectionMechanic.cpp"
                       ,0x2c9,"ActiveChange.IsValid()");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  else if (this->SelectionTimestamp != pFVar2->Timestamp) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&(pFVar2->After).SelectedGroupIDs,&(this->PersistentSelection).SelectedGroupIDs);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&(pFVar2->After).SelectedCornerIDs,&(this->PersistentSelection).SelectedCornerIDs);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&(pFVar2->After).SelectedEdgeIDs,&(this->PersistentSelection).SelectedEdgeIDs);
    pUVar6 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
    lVar7 = (**(code **)(pUVar6->_padding_ + 0x2d8))(pUVar6);
    pcVar3 = *(code **)(*(longlong *)(lVar7 + 0x28) + 0x20);
    pFVar8 = FText::AsLocalizable_Advanced_LocText
                       (&local_20,L"UMeshTopologySelectionMechanic",L"SelectionChangeMessage",
                        L"Selection Change");
    local_res8 = pTVar1->Ptr;
    pTVar1->Ptr = (FMeshTopologySelectionMechanicSelectionChange *)0x0;
    (*pcVar3)(lVar7 + 0x28,this,&local_res8,pFVar8);
    if (local_20.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_20.TextData.Reference + 0x10))();
    }
    return true;
  }
  if (pTVar1 != (TUniquePtr<FMeshTopologySelectionMechanicSelectionChange,TDefaultDelete<FMeshTopologySelectionMechanicSelectionChange>_>
                 *)&local_28) {
    pFVar2 = pTVar1->Ptr;
    pTVar1->Ptr = (FMeshTopologySelectionMechanicSelectionChange *)0x0;
    if (pFVar2 != (FMeshTopologySelectionMechanicSelectionChange *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x48))(pFVar2,1);
    }
  }
  return false;
}

// GetClickedHitPosition @ 14cb95200

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
UMeshTopologySelectionMechanic::GetClickedHitPosition
          (UMeshTopologySelectionMechanic *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  
  dVar1 = (this->LastClickedHitPosition).field0_0x0._s_0.Y;
  (param_1->field0_0x0)._s_0.X = (this->LastClickedHitPosition).field0_0x0._s_0.X;
  (param_1->field0_0x0)._s_0.Y = dVar1;
  (param_1->field0_0x0)._s_0.Z = (this->LastClickedHitPosition).field0_0x0._s_0.Z;
  dVar1 = (this->LastClickedHitNormal).field0_0x0._s_0.Y;
  (param_2->field0_0x0)._s_0.X = (this->LastClickedHitNormal).field0_0x0._s_0.X;
  (param_2->field0_0x0)._s_0.Y = dVar1;
  (param_2->field0_0x0)._s_0.Z = (this->LastClickedHitNormal).field0_0x0._s_0.Z;
  return;
}

// GetPriorityRange @ 14cb98dc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTuple<FInputCapturePriority,FInputCapturePriority> __thiscall
UMeshTopologySelectionMechanic::GetPriorityRange(UMeshTopologySelectionMechanic *this)

{
  TTuple<FInputCapturePriority,FInputCapturePriority> TVar1;
  TTuple<FInputCapturePriority,FInputCapturePriority> in_RDX;
  
  *(undefined4 *)in_RDX = 100;
  *(undefined4 *)((longlong)in_RDX + 4) = 100;
  *(int *)in_RDX = (this->BasePriority).Priority;
  TVar1 = URectangleMarqueeMechanic::GetPriorityRange((this->MarqueeMechanic).field0_0x0.DebugPtr);
  *(undefined4 *)((longlong)in_RDX + 4) = *(undefined4 *)((longlong)TVar1 + 4);
  return in_RDX;
}

// GetPrivateStaticClass @ 14cb99100

UClass * __cdecl UMeshTopologySelectionMechanic::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshTopologySelectionMechanic",
               &Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.InnerSingleton,
               StaticRegisterNativesUMeshTopologySelectionMechanic,0xb30,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMeshTopologySelectionMechanic>,
               InternalVTableHelperCtorCaller<UMeshTopologySelectionMechanic>,local_res8,
               UInteractionMechanic::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshTopologySelectionMechanic.InnerSingleton;
}

// GetSelectionBounds @ 14cb9bc90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TAxisAlignedBox3<double> * __thiscall
UMeshTopologySelectionMechanic::GetSelectionBounds
          (UMeshTopologySelectionMechanic *this,TAxisAlignedBox3<double> *__return_storage_ptr__,
          bool param_1)

{
  FTopologyProvider *pFVar1;
  code *pcVar2;
  bool bVar3;
  TAxisAlignedBox3<double> *pTVar4;
  code **ppcVar5;
  UMeshTopologySelectionMechanic *local_res8;
  UMeshTopologySelectionMechanic *local_res20;
  code *local_e8;
  UMeshTopologySelectionMechanic **local_e0;
  code *local_d8;
  UMeshTopologySelectionMechanic **local_d0;
  TQuaternion<double>_u_0 local_c8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_90;
  double dStack_88;
  double local_80;
  double local_68;
  double local_50;
  TAxisAlignedBox3<double> local_48;
  
  if (((*(int *)&(this->PersistentSelection).SelectedCornerIDs.Elements.field_0x8 ==
        *(int *)&(this->PersistentSelection).SelectedCornerIDs.Elements.field_0x34) &&
      (*(int *)&(this->PersistentSelection).SelectedEdgeIDs.Elements.field_0x8 ==
       *(int *)&(this->PersistentSelection).SelectedEdgeIDs.Elements.field_0x34)) &&
     (*(int *)&(this->PersistentSelection).SelectedGroupIDs.Elements.field_0x8 ==
      *(int *)&(this->PersistentSelection).SelectedGroupIDs.Elements.field_0x34)) {
    if (param_1) {
      local_c8._s_0.X = (this->TargetTransform).Rotation.XY.m128d_f64[0];
      local_c8._s_0.Y = (this->TargetTransform).Rotation.XY.m128d_f64[1];
      local_c8._s_0.Z = (this->TargetTransform).Rotation.ZW.m128d_f64[0];
      local_c8._s_0.W = (this->TargetTransform).Rotation.ZW.m128d_f64[1];
      local_98 = (this->TargetTransform).Translation.ZW.m128d_f64[0];
      local_80 = (this->TargetTransform).Scale3D.ZW.m128d_f64[0];
      local_a8 = (this->TargetTransform).Translation.XY.m128d_f64[0];
      dStack_a0 = (this->TargetTransform).Translation.XY.m128d_f64[1];
      local_90 = (this->TargetTransform).Scale3D.XY.m128d_f64[0];
      dStack_88 = (this->TargetTransform).Scale3D.XY.m128d_f64[1];
      local_68 = local_98;
      local_50 = local_80;
      pTVar4 = UE::Geometry::FDynamicMesh3::GetBounds(this->Mesh,&local_48,false);
      UE::Geometry::TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
                (__return_storage_ptr__,pTVar4,(TTransformSRT3<double> *)&local_c8._s_0);
    }
    else {
      UE::Geometry::FDynamicMesh3::GetBounds(this->Mesh,__return_storage_ptr__,false);
    }
  }
  else {
    if ((this->TopoSelector).Object == (FMeshTopologySelector *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TAxisAlignedBox3<double> *)(*pcVar2)();
        return pTVar4;
      }
    }
    pFVar1 = (((this->TopoSelector).Object)->TopologyProvider).Ptr;
    if (param_1) {
      local_e0 = &local_res8;
      ppcVar5 = &local_e8;
      local_e8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshTopologySelectionMechanic::GetSelectionBounds'::__l8::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                 ::Call;
      local_res8 = this;
    }
    else {
      local_d0 = &local_res20;
      ppcVar5 = &local_d8;
      local_d8 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshTopologySelectionMechanic::GetSelectionBounds'::__l10::<lambda_2>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                 ::Call;
      local_res20 = this;
    }
    (**(code **)((longlong)*pFVar1 + 0x68))
              (pFVar1,__return_storage_ptr__,&this->PersistentSelection,ppcVar5);
  }
  return __return_storage_ptr__;
}

// GetSelectionFrame @ 14cb9d4d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TFrame3<double> * __thiscall
UMeshTopologySelectionMechanic::GetSelectionFrame
          (UMeshTopologySelectionMechanic *this,TFrame3<double> *__return_storage_ptr__,bool param_1
          ,TFrame3<double> *param_2)

{
  FTopologyProvider *pFVar1;
  code *pcVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  TFrame3<double> *pTVar6;
  double *pdVar7;
  undefined1 local_48 [64];
  
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = 1.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = 0.0;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = (double)uVar4;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = 1.0;
  if (((*(int *)&(this->PersistentSelection).SelectedCornerIDs.Elements.field_0x8 !=
        *(int *)&(this->PersistentSelection).SelectedCornerIDs.Elements.field_0x34) ||
      (*(int *)&(this->PersistentSelection).SelectedEdgeIDs.Elements.field_0x8 !=
       *(int *)&(this->PersistentSelection).SelectedEdgeIDs.Elements.field_0x34)) ||
     (*(int *)&(this->PersistentSelection).SelectedGroupIDs.Elements.field_0x8 !=
      *(int *)&(this->PersistentSelection).SelectedGroupIDs.Elements.field_0x34)) {
    if ((this->TopoSelector).Object == (FMeshTopologySelector *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TFrame3<double> *)(*pcVar2)();
        return pTVar6;
      }
    }
    pFVar1 = (((this->TopoSelector).Object)->TopologyProvider).Ptr;
    pdVar7 = (double *)
             (**(code **)((longlong)*pFVar1 + 0x60))
                       (pFVar1,local_48,&this->PersistentSelection,param_2);
    dVar3 = pdVar7[1];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = *pdVar7;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar3;
    dVar3 = pdVar7[3];
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = pdVar7[2];
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = dVar3;
    dVar3 = pdVar7[5];
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = pdVar7[4];
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = dVar3;
    (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = pdVar7[6];
  }
  if (param_1) {
    UE::Geometry::TFrame3<double>::Transform(__return_storage_ptr__,&this->TargetTransform);
  }
  return __return_storage_ptr__;
}

// GetTopoSelectorSettings @ 14cba0180

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSelectionSettings __thiscall
UMeshTopologySelectionMechanic::GetTopoSelectorSettings
          (UMeshTopologySelectionMechanic *this,bool param_1)

{
  bool bVar1;
  UMeshTopologySelectionMechanicProperties *pUVar2;
  code *pcVar3;
  longlong *plVar4;
  char *pcVar5;
  undefined1 uVar6;
  char cVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined7 in_register_00000011;
  char in_R8B;
  
  pUVar2 = (this->Properties).field0_0x0.DebugPtr;
  pcVar5 = (char *)CONCAT71(in_register_00000011,param_1);
  *(undefined2 *)(CONCAT71(in_register_00000011,param_1) + 4) = 0;
  *(undefined1 *)(CONCAT71(in_register_00000011,param_1) + 6) = 0;
  bVar1 = pUVar2->bSelectEdges;
  *(bool *)CONCAT71(in_register_00000011,param_1) = pUVar2->bSelectFaces;
  if (((bVar1 == false) && (pUVar2->bSelectEdgeLoops == false)) &&
     (pUVar2->bSelectEdgeRings == false)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  *(undefined1 *)(CONCAT71(in_register_00000011,param_1) + 1) = uVar6;
  *(bool *)(CONCAT71(in_register_00000011,param_1) + 2) = pUVar2->bSelectVertices;
  *(bool *)(CONCAT71(in_register_00000011,param_1) + 3) = pUVar2->bHitBackFaces;
  if (((*(int *)&(this->PersistentSelection).SelectedCornerIDs.Elements.field_0x8 !=
        *(int *)&(this->PersistentSelection).SelectedCornerIDs.Elements.field_0x34) ||
      (*(int *)&(this->PersistentSelection).SelectedEdgeIDs.Elements.field_0x8 !=
       *(int *)&(this->PersistentSelection).SelectedEdgeIDs.Elements.field_0x34)) ||
     (*(int *)&(this->PersistentSelection).SelectedGroupIDs.Elements.field_0x8 !=
      *(int *)&(this->PersistentSelection).SelectedGroupIDs.Elements.field_0x34)) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->ShouldAddToSelectionFunc);
    pcVar3 = *(code **)&this->ShouldAddToSelectionFunc;
    plVar4 = *(longlong **)&(this->ShouldAddToSelectionFunc).field_0x28;
    plVar9 = (longlong *)&(this->ShouldAddToSelectionFunc).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar9 = plVar4;
    }
    uVar8 = (**(code **)(*plVar9 + 8))();
    cVar7 = (*pcVar3)(uVar8);
    if (cVar7 == '\0') {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->ShouldRemoveFromSelectionFunc);
      pcVar3 = *(code **)&this->ShouldRemoveFromSelectionFunc;
      plVar4 = *(longlong **)&(this->ShouldRemoveFromSelectionFunc).field_0x28;
      plVar9 = (longlong *)&(this->ShouldRemoveFromSelectionFunc).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar9 = plVar4;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      cVar7 = (*pcVar3)(uVar8);
      if (cVar7 == '\0') goto LAB_14cba02e6;
    }
    if ((*pcVar5 == '\0') ||
       (*(int *)&(this->PersistentSelection).SelectedGroupIDs.Elements.field_0x8 -
        *(int *)&(this->PersistentSelection).SelectedGroupIDs.Elements.field_0x34 < 1)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
    *pcVar5 = cVar7;
    if ((pcVar5[1] == '\0') ||
       (*(int *)&(this->PersistentSelection).SelectedEdgeIDs.Elements.field_0x8 -
        *(int *)&(this->PersistentSelection).SelectedEdgeIDs.Elements.field_0x34 < 1)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
    pcVar5[1] = cVar7;
    if ((pcVar5[2] == '\0') ||
       (*(int *)&(this->PersistentSelection).SelectedCornerIDs.Elements.field_0x8 -
        *(int *)&(this->PersistentSelection).SelectedCornerIDs.Elements.field_0x34 < 1)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
    pcVar5[2] = cVar7;
  }
LAB_14cba02e6:
  if (in_R8B != '\0') {
    pUVar2 = (this->Properties).field0_0x0.DebugPtr;
    pcVar5[4] = pUVar2->bPreferProjectedElement;
    pcVar5[5] = pUVar2->bSelectDownRay;
    pcVar5[6] = pUVar2->bIgnoreOcclusion;
  }
  return SUB87(pcVar5,0);
}

// HandleRectangleChanged @ 14cba0ae0

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
UMeshTopologySelectionMechanic::HandleRectangleChanged
          (UMeshTopologySelectionMechanic *this,FCameraRectangle *param_1)

{
  FGroupTopologySelection *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStackY_1b8 [32];
  TTransform<double> local_188;
  FGroupTopologySelection local_128;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if (this->bIsEnabled != false) {
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_128);
    if ((this->TopoSelector).Object == (FMeshTopologySelector *)0x0) {
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
    local_188.Rotation.XY.m128d_f64[0] = (this->TargetTransform).Rotation.XY.m128d_f64[0];
    local_188.Rotation.XY.m128d_f64[1] = (this->TargetTransform).Rotation.XY.m128d_f64[1];
    local_188.Rotation.ZW.m128d_f64[0] = (this->TargetTransform).Rotation.ZW.m128d_f64[0];
    local_188.Rotation.ZW.m128d_f64[1] = (this->TargetTransform).Rotation.ZW.m128d_f64[1];
    local_188.Translation.XY.m128d_f64[0] = (this->TargetTransform).Translation.XY.m128d_f64[0];
    local_188.Translation.XY.m128d_f64[1] = (this->TargetTransform).Translation.XY.m128d_f64[1];
    local_188.Translation.ZW.m128d_f64[0] = (this->TargetTransform).Translation.ZW.m128d_f64[0];
    local_188.Translation.ZW.m128d_f64[1] = (this->TargetTransform).Translation.ZW.m128d_f64[1];
    local_188.Scale3D.XY.m128d_f64[0] = (this->TargetTransform).Scale3D.XY.m128d_f64[0];
    local_188.Scale3D.XY.m128d_f64[1] = (this->TargetTransform).Scale3D.XY.m128d_f64[1];
    local_188.Scale3D.ZW.m128d_f64[0] = (this->TargetTransform).Scale3D.ZW.m128d_f64[0];
    local_188.Scale3D.ZW.m128d_f64[1] = (this->TargetTransform).Scale3D.ZW.m128d_f64[1];
    FMeshTopologySelector::FindSelectedElement
              ((this->TopoSelector).Object,&this->PreDragTopoSelectorSettings,param_1,&local_188,
               &local_128,&this->TriIsOccludedCache);
    UE::Core::Private::Function::CheckCallable(*(void **)&this->ShouldAddToSelectionFunc);
    pcVar2 = *(code **)&this->ShouldAddToSelectionFunc;
    plVar1 = *(longlong **)&(this->ShouldAddToSelectionFunc).field_0x28;
    plVar6 = (longlong *)&(this->ShouldAddToSelectionFunc).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar6 = plVar1;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    this_00 = &this->PersistentSelection;
    cVar4 = (*pcVar2)(uVar5);
    if (cVar4 == '\0') {
      UE::Core::Private::Function::CheckCallable(*(void **)&this->ShouldRemoveFromSelectionFunc);
      pcVar2 = *(code **)&this->ShouldRemoveFromSelectionFunc;
      plVar1 = *(longlong **)&(this->ShouldRemoveFromSelectionFunc).field_0x28;
      plVar6 = (longlong *)&(this->ShouldRemoveFromSelectionFunc).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar6 = plVar1;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      cVar4 = (*pcVar2)(uVar5);
      if (cVar4 == '\0') {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                  (&this_00->SelectedGroupIDs,&local_128.SelectedGroupIDs);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                  (&(this->PersistentSelection).SelectedCornerIDs,&local_128.SelectedCornerIDs);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                  (&(this->PersistentSelection).SelectedEdgeIDs,&local_128.SelectedEdgeIDs);
      }
      else {
        UE::Geometry::FGroupTopologySelection::operator=(this_00,&this->PreDragPersistentSelection);
        UE::Geometry::FGroupTopologySelection::Remove(this_00,&local_128);
      }
    }
    else {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                (&this_00->SelectedGroupIDs,&(this->PreDragPersistentSelection).SelectedGroupIDs);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                (&(this->PersistentSelection).SelectedCornerIDs,
                 &(this->PreDragPersistentSelection).SelectedCornerIDs);
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                (&(this->PersistentSelection).SelectedEdgeIDs,
                 &(this->PreDragPersistentSelection).SelectedEdgeIDs);
      UE::Core::Private::Function::CheckCallable(*(void **)&this->ShouldRemoveFromSelectionFunc);
      pcVar2 = *(code **)&this->ShouldRemoveFromSelectionFunc;
      plVar1 = *(longlong **)&(this->ShouldRemoveFromSelectionFunc).field_0x28;
      plVar6 = (longlong *)&(this->ShouldRemoveFromSelectionFunc).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar6 = plVar1;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      cVar4 = (*pcVar2)(uVar5);
      if (cVar4 == '\0') {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                  (&(this->PersistentSelection).SelectedCornerIDs,&local_128.SelectedCornerIDs);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                  (&(this->PersistentSelection).SelectedEdgeIDs,&local_128.SelectedEdgeIDs);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
                  (&this_00->SelectedGroupIDs,&local_128.SelectedGroupIDs);
      }
      else {
        UE::Geometry::FGroupTopologySelection::Toggle(this_00,&local_128);
      }
    }
    if ((*(int *)&(this->PersistentSelection).SelectedGroupIDs.Elements.field_0x8 !=
         *(int *)&(this->PersistentSelection).SelectedGroupIDs.Elements.field_0x34) ||
       (*(int *)&(this->LastUpdateRectangleSelection).SelectedGroupIDs.Elements.field_0x8 !=
        *(int *)&(this->LastUpdateRectangleSelection).SelectedGroupIDs.Elements.field_0x34)) {
      bVar3 = UE::Geometry::FGroupTopologySelection::operator!=
                        (this_00,&this->LastUpdateRectangleSelection);
      if (bVar3) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                  (&(this->LastUpdateRectangleSelection).SelectedGroupIDs,&this_00->SelectedGroupIDs
                  );
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                  (&(this->LastUpdateRectangleSelection).SelectedCornerIDs,
                   &(this->PersistentSelection).SelectedCornerIDs);
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
                  (&(this->LastUpdateRectangleSelection).SelectedEdgeIDs,
                   &(this->PersistentSelection).SelectedEdgeIDs);
        TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                  (&this->OnFaceSelectionPreviewChanged);
      }
    }
    local_128.SelectedEdgeIDs.HashSize = 0;
    if (local_128.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_128.SelectedEdgeIDs.Elements);
    local_128.SelectedCornerIDs.HashSize = 0;
    if (local_128.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_128.SelectedCornerIDs.Elements);
    local_128.SelectedGroupIDs.HashSize = 0;
    if (local_128.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_128);
  }
  return;
}

// HasSelection @ 14cba1260

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UMeshTopologySelectionMechanic::HasSelection(UMeshTopologySelectionMechanic *this)

{
  if (((*(int *)&(this->PersistentSelection).SelectedCornerIDs.Elements.field_0x8 ==
        *(int *)&(this->PersistentSelection).SelectedCornerIDs.Elements.field_0x34) &&
      (*(int *)&(this->PersistentSelection).SelectedEdgeIDs.Elements.field_0x8 ==
       *(int *)&(this->PersistentSelection).SelectedEdgeIDs.Elements.field_0x34)) &&
     (*(int *)&(this->PersistentSelection).SelectedGroupIDs.Elements.field_0x8 ==
      *(int *)&(this->PersistentSelection).SelectedGroupIDs.Elements.field_0x34)) {
    return false;
  }
  return true;
}

// Initialize @ 14cba1ba0

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UMeshTopologySelectionMechanic::Initialize
          (UMeshTopologySelectionMechanic *this,FDynamicMesh3 *param_1,TTransform<double> *param_2,
          UWorld *param_3,
          TFunction<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)>
          *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  FMeshTopologySelector *pFVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  UClass *pUVar16;
  APreviewGeometryActor *pAVar17;
  FString *pFVar18;
  UTriangleSetComponent *pUVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  longlong *plVar22;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_00;
  wchar_t *pwVar23;
  wchar_t *pwVar24;
  APreviewGeometryActor *pAVar25;
  undefined1 auStackY_268 [32];
  undefined1 local_238 [40];
  longlong *local_210;
  TRotator<double> local_208;
  FString local_1f0;
  FString local_1e0;
  undefined1 local_1c8 [128];
  code *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  TTransform<double> local_118;
  undefined1 local_b8 [112];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  dVar9 = (param_2->Rotation).XY.m128d_f64[1];
  dVar10 = (param_2->Rotation).ZW.m128d_f64[0];
  dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
  (this->TargetTransform).Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  (this->TargetTransform).Rotation.XY.m128d_f64[1] = dVar9;
  this->Mesh = param_1;
  dVar9 = (param_2->Translation).XY.m128d_f64[0];
  dVar12 = (param_2->Translation).XY.m128d_f64[1];
  (this->TargetTransform).Rotation.ZW.m128d_f64[0] = dVar10;
  (this->TargetTransform).Rotation.ZW.m128d_f64[1] = dVar11;
  dVar10 = (param_2->Translation).ZW.m128d_f64[0];
  dVar11 = (param_2->Translation).ZW.m128d_f64[1];
  (this->TargetTransform).Translation.XY.m128d_f64[0] = dVar9;
  (this->TargetTransform).Translation.XY.m128d_f64[1] = dVar12;
  dVar9 = (param_2->Scale3D).XY.m128d_f64[0];
  dVar12 = (param_2->Scale3D).XY.m128d_f64[1];
  (this->TargetTransform).Translation.ZW.m128d_f64[0] = dVar10;
  (this->TargetTransform).Translation.ZW.m128d_f64[1] = dVar11;
  dVar10 = (param_2->Scale3D).ZW.m128d_f64[0];
  dVar11 = (param_2->Scale3D).ZW.m128d_f64[1];
  (this->TargetTransform).Scale3D.XY.m128d_f64[0] = dVar9;
  (this->TargetTransform).Scale3D.XY.m128d_f64[1] = dVar12;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[0] = dVar10;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[1] = dVar11;
  TFunction<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)>::operator=
            (&this->GetSpatialFunc,param_4);
  pwVar24 = L"";
  if (((this->TopoSelector).Object == (FMeshTopologySelector *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_238._0_8_ = *(undefined8 *)&this->GetSpatialFunc;
  pFVar3 = (this->TopoSelector).Object;
  local_210 = (longlong *)0x0;
  if (local_238._0_8_ != 0) {
    puVar4 = *(undefined8 **)&(this->GetSpatialFunc).field_0x28;
    puVar20 = (undefined8 *)&(this->GetSpatialFunc).field_0x10;
    if (puVar4 != (undefined8 *)0x0) {
      puVar20 = puVar4;
    }
    (**(code **)*puVar20)(puVar20,local_238 + 0x10);
  }
  TFunction<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)>::operator=
            (&pFVar3->GetSpatial,
             (TFunction<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)> *
             )local_238);
  if (local_238._0_8_ != 0) {
    plVar22 = (longlong *)(local_238 + 0x10);
    if (local_210 != (longlong *)0x0) {
      plVar22 = local_210;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  pAVar25 = (APreviewGeometryActor *)0x0;
  local_138 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Initialize'::`2'::<lambda_1>,0,0>
               ::_vftable_;
  uStack_120 = (longlong *)0x0;
  local_148 = UE::Core::Private::Function::
              TFunctionRefCaller<`UMeshTopologySelectionMechanic::Initialize'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,double>
              ::Call;
  uStack_130 = this;
  if (((this->TopoSelector).Object == (FMeshTopologySelector *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->TopoSelector).Object;
  lVar7 = *(longlong *)&pFVar3->PointsWithinToleranceTest;
  uVar8 = *(undefined8 *)&(pFVar3->PointsWithinToleranceTest).field_0x8;
  lVar13 = *(longlong *)&(pFVar3->PointsWithinToleranceTest).field_0x10;
  uVar14 = *(undefined8 *)&(pFVar3->PointsWithinToleranceTest).field_0x18;
  uVar6 = *(undefined8 *)&(pFVar3->PointsWithinToleranceTest).field_0x20;
  plVar22 = *(longlong **)&(pFVar3->PointsWithinToleranceTest).field_0x28;
  *(code **)&pFVar3->PointsWithinToleranceTest = local_148;
  *(undefined8 *)&(pFVar3->PointsWithinToleranceTest).field_0x8 = uStack_140;
  *(undefined4 *)&(pFVar3->PointsWithinToleranceTest).field_0x10 = (undefined4)local_138;
  *(undefined4 *)&(pFVar3->PointsWithinToleranceTest).field_0x14 = local_138._4_4_;
  *(undefined4 *)&(pFVar3->PointsWithinToleranceTest).field_0x18 = (undefined4)uStack_130;
  *(undefined4 *)&(pFVar3->PointsWithinToleranceTest).field_0x1c = uStack_130._4_4_;
  *(undefined4 *)&(pFVar3->PointsWithinToleranceTest).field_0x20 = (undefined4)local_128;
  *(undefined4 *)&(pFVar3->PointsWithinToleranceTest).field_0x24 = local_128._4_4_;
  *(undefined4 *)&(pFVar3->PointsWithinToleranceTest).field_0x28 = (undefined4)uStack_120;
  *(undefined4 *)&(pFVar3->PointsWithinToleranceTest).field_0x2c = uStack_120._4_4_;
  local_148 = (code *)lVar7;
  uStack_140 = uVar8;
  local_138 = (undefined **)lVar13;
  uStack_130 = (UMeshTopologySelectionMechanic *)uVar14;
  local_128 = uVar6;
  uStack_120 = plVar22;
  if (lVar7 != 0) {
    plVar21 = &local_138;
    if (plVar22 != (longlong *)0x0) {
      plVar21 = plVar22;
    }
    (**(code **)(*plVar21 + 0x10))();
  }
  if ((this->PreviewGeometryActor).field0_0x0.DebugPtr == (APreviewGeometryActor *)0x0) {
    local_208.Roll = 0.0;
    local_208.Pitch = 0.0;
    local_208.Yaw = 0.0;
    FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_b8);
    pUVar16 = Z_Construct_UClass_APreviewGeometryActor_NoRegister();
    pAVar17 = (APreviewGeometryActor *)
              UWorld::SpawnActor(param_3,pUVar16,&UE::Math::TVector<double>::ZeroVector,&local_208,
                                 (FActorSpawnParameters *)local_b8);
    if (pAVar17 != (APreviewGeometryActor *)0x0) {
      pUVar16 = Z_Construct_UClass_APreviewGeometryActor_NoRegister();
      iVar2 = (int)pUVar16->_padding_;
      if ((*(int *)(*(longlong *)&pAVar17->field_0x10 + 0x38) < iVar2) ||
         (pAVar25 = pAVar17,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pAVar17->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
         &pUVar16->_padding_)) {
        pFVar18 = GetTypeName<APreviewGeometryActor>(&local_1f0);
        if ((pFVar18->Data).ArrayNum == 0) {
          pwVar23 = L"";
        }
        else {
          pwVar23 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
        }
        pFVar18 = GetFullNameForCastLogError<AActor>(&local_1e0,(AActor *)pAVar17);
        if ((pFVar18->Data).ArrayNum != 0) {
          pwVar24 = (wchar_t *)(pFVar18->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar24,pwVar23);
      }
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar25 != (APreviewGeometryActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar25);
    }
    (this->PreviewGeometryActor).field0_0x0.DebugPtr = pAVar25;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pAVar25,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar16 = Z_Construct_UClass_UTriangleSetComponent_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_1c8,pUVar16);
    local_1c8._8_8_ = pAVar25;
    pUVar19 = (UTriangleSetComponent *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1c8);
    if (local_1c8._64_8_ != 0) {
      plVar22 = (longlong *)(local_1c8 + 0x50);
      if ((longlong *)local_1c8._104_8_ != (longlong *)0x0) {
        plVar22 = (longlong *)local_1c8._104_8_;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar19 != (UTriangleSetComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar19);
    }
    (this->DrawnTriangleSetComponent).field0_0x0.DebugPtr = pUVar19;
    AActor::SetRootComponent
              ((AActor *)(this->PreviewGeometryActor).field0_0x0.DebugPtr,(USceneComponent *)pUVar19
              );
    UActorComponent::RegisterComponent
              ((UActorComponent *)(this->DrawnTriangleSetComponent).field0_0x0.DebugPtr);
    if (local_b8._64_8_ != 0) {
      plVar22 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar22 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
  }
  local_118.Rotation.XY.m128d_f64[0] = (param_2->Rotation).XY.m128d_f64[0];
  local_118.Rotation.XY.m128d_f64[1] = (param_2->Rotation).XY.m128d_f64[1];
  local_118.Rotation.ZW.m128d_f64[0] = (param_2->Rotation).ZW.m128d_f64[0];
  local_118.Rotation.ZW.m128d_f64[1] = (param_2->Rotation).ZW.m128d_f64[1];
  local_118.Translation.XY.m128d_f64[0] = (param_2->Translation).XY.m128d_f64[0];
  local_118.Translation.XY.m128d_f64[1] = (param_2->Translation).XY.m128d_f64[1];
  local_118.Translation.ZW.m128d_f64[0] = (param_2->Translation).ZW.m128d_f64[0];
  local_118.Translation.ZW.m128d_f64[1] = (param_2->Translation).ZW.m128d_f64[1];
  local_118.Scale3D.XY.m128d_f64[0] = (param_2->Scale3D).XY.m128d_f64[0];
  local_118.Scale3D.XY.m128d_f64[1] = (param_2->Scale3D).XY.m128d_f64[1];
  local_118.Scale3D.ZW.m128d_f64[0] = (param_2->Scale3D).ZW.m128d_f64[0];
  local_118.Scale3D.ZW.m128d_f64[1] = (param_2->Scale3D).ZW.m128d_f64[1];
  AActor::SetActorTransform
            ((AActor *)(this->PreviewGeometryActor).field0_0x0.DebugPtr,&local_118,false,
             (FHitResult *)0x0,None);
  UTriangleSetComponent::Clear((this->DrawnTriangleSetComponent).field0_0x0.DebugPtr);
  this_00 = &this->CurrentlyHighlightedGroups;
  bVar15 = 1 < (this->CurrentlyHighlightedGroups).HashSize;
  if (!bVar15) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements(this_00);
  }
  puVar1 = &(this->CurrentlyHighlightedGroups).Elements.field_0xc;
  *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->CurrentlyHighlightedGroups).Elements.field_0x2c;
  *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->CurrentlyHighlightedGroups).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->CurrentlyHighlightedGroups).Elements.field_0x10,0);
  }
  if (bVar15) {
    (this->CurrentlyHighlightedGroups).HashSize = 1;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  if (*(longlong *)param_4 != 0) {
    plVar22 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar22 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar22 + 0x10))();
  }
  return;
}

// InvertSelection @ 14cba3a80

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
UMeshTopologySelectionMechanic::InvertSelection(UMeshTopologySelectionMechanic *this)

{
  FGroupTopologySelection *this_00;
  code *pcVar1;
  FTopologyProvider *pFVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  longlong lVar6;
  FText *pFVar7;
  ForElementType<FSetElementId> FVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_178 [32];
  uint local_158;
  uint local_154;
  uint local_150;
  int local_14c;
  int local_148;
  int local_144;
  FText local_140;
  FGroupTopologySelection local_128;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  this_00 = &this->PersistentSelection;
  if (((*(int *)&(this->PersistentSelection).SelectedCornerIDs.Elements.field_0x8 ==
        *(int *)&(this->PersistentSelection).SelectedCornerIDs.Elements.field_0x34) &&
      (*(int *)&(this->PersistentSelection).SelectedEdgeIDs.Elements.field_0x8 ==
       *(int *)&(this->PersistentSelection).SelectedEdgeIDs.Elements.field_0x34)) &&
     (*(int *)&(this->PersistentSelection).SelectedGroupIDs.Elements.field_0x8 ==
      *(int *)&(this->PersistentSelection).SelectedGroupIDs.Elements.field_0x34)) {
    SelectAll(this);
  }
  else {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    lVar6 = (**(code **)(*(longlong *)pUVar5 + 0x2d8))(pUVar5);
    pcVar1 = *(code **)(*(longlong *)(lVar6 + 0x28) + 0x10);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_140,L"UMeshTopologySelectionMechanic",L"SelectionChange",L"Selection"
                       );
    (*pcVar1)(lVar6 + 0x28,pFVar7);
    if (local_140.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
    }
    BeginChange(this);
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_128,this_00);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this_00->SelectedGroupIDs);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              (&(this->PersistentSelection).SelectedCornerIDs);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              (&(this->PersistentSelection).SelectedEdgeIDs);
    if (((this->TopoSelector).Object == (FMeshTopologySelector *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar2 = (((this->TopoSelector).Object)->TopologyProvider).Ptr;
    if (local_128.SelectedCornerIDs.Elements._8_4_ == local_128.SelectedCornerIDs.Elements._52_4_) {
      if (local_128.SelectedEdgeIDs.Elements._8_4_ == local_128.SelectedEdgeIDs.Elements._52_4_) {
        if (local_128.SelectedGroupIDs.Elements._8_4_ != local_128.SelectedGroupIDs.Elements._52_4_)
        {
          iVar10 = 0;
          iVar4 = (**(code **)((longlong)*pFVar2 + 0x40))(pFVar2);
          if (0 < iVar4) {
            do {
              local_150 = (**(code **)((longlong)*pFVar2 + 0x48))(pFVar2,iVar10);
              if (local_128.SelectedGroupIDs.Elements._8_4_ !=
                  local_128.SelectedGroupIDs.Elements._52_4_) {
                FVar8 = (ForElementType<FSetElementId>)&local_128.SelectedGroupIDs.Hash;
                if (local_128.SelectedGroupIDs.Hash.SecondaryData !=
                    (ForElementType<FSetElementId>)0x0) {
                  FVar8 = local_128.SelectedGroupIDs.Hash.SecondaryData;
                }
                for (iVar4 = *(int *)((longlong)FVar8 +
                                     (ulonglong)
                                     (local_128.SelectedGroupIDs.HashSize - 1U & local_150) * 4);
                    iVar4 != -1;
                    iVar4 = *(int *)(local_128.SelectedGroupIDs.Elements._0_8_ + 4 +
                                    (longlong)iVar4 * 0xc)) {
                  if (*(uint *)(local_128.SelectedGroupIDs.Elements._0_8_ + (longlong)iVar4 * 0xc)
                      == local_150) goto LAB_14cba3d8c;
                }
              }
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (&this_00->SelectedGroupIDs,&local_144,(bool *)&local_150);
LAB_14cba3d8c:
              iVar10 = iVar10 + 1;
              iVar4 = (**(code **)((longlong)*pFVar2 + 0x40))(pFVar2);
            } while (iVar10 < iVar4);
          }
        }
      }
      else {
        local_154 = 0;
        iVar4 = (**(code **)((longlong)*pFVar2 + 0x18))(pFVar2);
        if (0 < iVar4) {
          uVar9 = 0;
          do {
            if (local_128.SelectedEdgeIDs.Elements._8_4_ !=
                local_128.SelectedEdgeIDs.Elements._52_4_) {
              FVar8 = (ForElementType<FSetElementId>)&local_128.SelectedEdgeIDs.Hash;
              if (local_128.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0
                 ) {
                FVar8 = local_128.SelectedEdgeIDs.Hash.SecondaryData;
              }
              for (iVar4 = *(int *)((longlong)FVar8 +
                                   (ulonglong)(local_128.SelectedEdgeIDs.HashSize - 1U & uVar9) * 4)
                  ; iVar4 != -1;
                  iVar4 = *(int *)(local_128.SelectedEdgeIDs.Elements._0_8_ + 4 +
                                  (longlong)iVar4 * 0xc)) {
                if (*(uint *)(local_128.SelectedEdgeIDs.Elements._0_8_ + (longlong)iVar4 * 0xc) ==
                    uVar9) goto LAB_14cba3cdd;
              }
            }
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&(this->PersistentSelection).SelectedEdgeIDs,&local_148,(bool *)&local_154);
LAB_14cba3cdd:
            uVar9 = uVar9 + 1;
            local_154 = uVar9;
            iVar4 = (**(code **)((longlong)*pFVar2 + 0x18))(pFVar2);
          } while ((int)uVar9 < iVar4);
        }
      }
    }
    else {
      uVar9 = 0;
      local_158 = 0;
      iVar4 = (**(code **)((longlong)*pFVar2 + 8))(pFVar2);
      if (0 < iVar4) {
        uVar11 = 0;
        do {
          if (local_128.SelectedCornerIDs.Elements._8_4_ !=
              local_128.SelectedCornerIDs.Elements._52_4_) {
            FVar8 = (ForElementType<FSetElementId>)&local_128.SelectedCornerIDs.Hash;
            if (local_128.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0
               ) {
              FVar8 = local_128.SelectedCornerIDs.Hash.SecondaryData;
            }
            for (iVar4 = *(int *)((longlong)FVar8 +
                                 (local_128.SelectedCornerIDs.HashSize - 1 & uVar11) * 4);
                iVar4 != -1;
                iVar4 = *(int *)(local_128.SelectedCornerIDs.Elements._0_8_ + 4 +
                                (longlong)iVar4 * 0xc)) {
              if (*(int *)(local_128.SelectedCornerIDs.Elements._0_8_ + (longlong)iVar4 * 0xc) ==
                  (int)uVar11) goto LAB_14cba3c3d;
            }
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&(this->PersistentSelection).SelectedCornerIDs,&local_14c,(bool *)&local_158);
LAB_14cba3c3d:
          uVar9 = uVar9 + 1;
          uVar11 = (ulonglong)uVar9;
          local_158 = uVar9;
          iVar4 = (**(code **)((longlong)*pFVar2 + 8))(pFVar2);
        } while ((int)uVar9 < iVar4);
      }
    }
    this->SelectionTimestamp = this->SelectionTimestamp + 1;
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSelectionChanged);
    EndChangeAndEmitIfModified(this);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    lVar6 = (**(code **)(*(longlong *)pUVar5 + 0x2d8))(pUVar5);
    (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x18))(lVar6 + 0x28);
    local_128.SelectedEdgeIDs.HashSize = 0;
    if (local_128.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_128.SelectedEdgeIDs.Elements);
    local_128.SelectedCornerIDs.HashSize = 0;
    if (local_128.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_128.SelectedCornerIDs.Elements);
    local_128.SelectedGroupIDs.HashSize = 0;
    if (local_128.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_128);
  }
  return;
}

// IsHitByClick @ 14cba4020

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

FInputRayHit * __thiscall
UMeshTopologySelectionMechanic::IsHitByClick
          (UMeshTopologySelectionMechanic *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  bool bVar1;
  double dVar2;
  undefined1 auStack_278 [32];
  FHitResult local_228;
  FGroupTopologySelection local_128;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_278;
  if ((this->OnFaceSelectionPreviewChanged).field_0x8 == '\0') {
    FInputRayHit::FInputRayHit(__return_storage_ptr__);
  }
  else {
    memset(&local_228,0,0x100);
    local_228.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_228.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_228.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_228.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    local_228.HitObjectHandle.InstanceIndex = -1;
    local_228.HitObjectHandle.ResolutionStatus = Invalid;
    local_228.HitObjectHandle._29_3_ = 0;
    local_228.Time = 1.0;
    local_228.MyItem = -1;
    local_228.HitObjectHandle.ManagerInterface.InterfaceInstance =
         (IActorInstanceManagerInterface *)0x0;
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_128);
    bVar1 = TopologyHitTest((UMeshTopologySelectionMechanic *)
                            &this[-1].SelectionRenderer.TotalTransform.Scale3D,&param_1->WorldRay,
                            &local_228,&local_128,(bool)(this->CameraState).field_0x1c);
    dVar2 = __real_47efffffe0000000;
    if (bVar1) {
      dVar2 = (double)local_228.Distance;
    }
    FInputRayHit::FInputRayHit(__return_storage_ptr__,dVar2);
    local_128.SelectedEdgeIDs.HashSize = 0;
    if (local_128.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128.SelectedEdgeIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_128.SelectedEdgeIDs.Elements);
    local_128.SelectedCornerIDs.HashSize = 0;
    if (local_128.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128.SelectedCornerIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_128.SelectedCornerIDs.Elements);
    local_128.SelectedGroupIDs.HashSize = 0;
    if (local_128.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_128.SelectedGroupIDs.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&local_128);
  }
  return __return_storage_ptr__;
}

// NotifyMeshChanged @ 14cba5240

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
UMeshTopologySelectionMechanic::NotifyMeshChanged(UMeshTopologySelectionMechanic *this,bool param_1)

{
  FMeshTopologySelector *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  ClearHighlight(this);
  if ((this->TopoSelector).Object == (FMeshTopologySelector *)0x0) {
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
  pFVar1 = (this->TopoSelector).Object;
  pFVar1->bGeometryUpToDate = false;
  if (param_1) {
    pFVar1->bGeometryInitialized = false;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              (&(this->PersistentSelection).SelectedGroupIDs);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              (&(this->PersistentSelection).SelectedCornerIDs);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              (&(this->PersistentSelection).SelectedEdgeIDs);
    this->SelectionTimestamp = this->SelectionTimestamp + 1;
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSelectionChanged);
  }
  return;
}

// OnBeginHover @ 14cba5b30

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
UMeshTopologySelectionMechanic::OnBeginHover
          (UMeshTopologySelectionMechanic *this,FInputDeviceRay *param_1)

{
  return;
}

// OnClicked @ 14cba5b40

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
UMeshTopologySelectionMechanic::OnClicked
          (UMeshTopologySelectionMechanic *this,FInputDeviceRay *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  longlong lVar4;
  FText *pFVar5;
  FText local_28;
  
  if ((this->OnFaceSelectionPreviewChanged).field_0x8 == '\0') {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6328438030650572241>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Private\\Selection\\MeshTopologySelectionMechanic.cpp"
                       ,0x22f,"bIsEnabled");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0xb28);
    lVar4 = (**(code **)(*(longlong *)pUVar3 + 0x2d8))(pUVar3);
    pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x28) + 0x10);
    pFVar5 = FText::AsLocalizable_Advanced_LocText
                       (&local_28,L"UMeshTopologySelectionMechanic",L"SelectionChange",L"Selection")
    ;
    (*pcVar1)(lVar4 + 0x28,pFVar5);
    if (local_28.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
    }
    BeginChange((UMeshTopologySelectionMechanic *)&this[-1].SelectionRenderer.TotalTransform.Scale3D
               );
    (**(code **)((longlong)this[-1].SelectionRenderer.TotalTransform.Scale3D.XY.m128d_f64[0] + 0x2f0
                ))(&this[-1].SelectionRenderer.TotalTransform.Scale3D,param_1,
                   &(this->TriIsOccludedCache).field_0x28,&(this->TriIsOccludedCache).field_0x40);
    EndChangeAndEmitIfModified
              ((UMeshTopologySelectionMechanic *)&this[-1].SelectionRenderer.TotalTransform.Scale3D)
    ;
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].field_0xb28);
    lVar4 = (**(code **)(*(longlong *)pUVar3 + 0x2d8))(pUVar3);
    (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x18))(lVar4 + 0x28);
  }
  return;
}

// OnDragRectangleChanged @ 14cba6030

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
UMeshTopologySelectionMechanic::OnDragRectangleChanged
          (UMeshTopologySelectionMechanic *this,FCameraRectangle *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  UMeshTopologySelectionMechanic *pUVar12;
  UMeshTopologySelectionMechanic *pUVar13;
  UMeshTopologySelectionMechanic *pUVar14;
  UMeshTopologySelectionMechanic *pUVar15;
  undefined8 *puVar16;
  double *pdVar17;
  UMeshTopologySelectionMechanic **ppUVar18;
  double *pdVar19;
  undefined8 *puVar20;
  code *pcVar21;
  UMeshTopologySelectionMechanic **ppUVar22;
  longlong *plVar23;
  FCameraRectangle *pFVar24;
  longlong lVar25;
  undefined1 auStack_1b8 [32];
  UMeshTopologySelectionMechanic *local_198 [2];
  double local_188 [40];
  code *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  if (this->MarqueeSelectionUpdateType == OnDrag) {
    HandleRectangleChanged(this,param_1);
  }
  else {
    lVar25 = 2;
    pcVar21 = (code *)0x2;
    pdVar17 = local_188;
    do {
      pFVar24 = param_1;
      pdVar19 = pdVar17;
      dVar8 = (pFVar24->CameraState).Position.field0_0x0._s_0.Y;
      dVar9 = (pFVar24->CameraState).Position.field0_0x0._s_0.Z;
      dVar10 = *(double *)&(pFVar24->CameraState).field_0x18;
      param_1 = (FCameraRectangle *)
                ((pFVar24->RectangleStartRay).WorldRay.Direction.field0_0x0.XYZ + 1);
      *pdVar19 = (pFVar24->CameraState).Position.field0_0x0._s_0.X;
      pdVar19[1] = dVar8;
      dVar8 = (pFVar24->CameraState).Orientation.X;
      dVar11 = (pFVar24->CameraState).Orientation.Y;
      pdVar19[2] = dVar9;
      pdVar19[3] = dVar10;
      dVar9 = (pFVar24->CameraState).Orientation.Z;
      dVar10 = (pFVar24->CameraState).Orientation.W;
      pdVar19[4] = dVar8;
      pdVar19[5] = dVar11;
      dVar8 = *(double *)&(pFVar24->CameraState).HorizontalFOVDegrees;
      dVar11 = *(double *)&(pFVar24->CameraState).AspectRatio;
      pdVar19[6] = dVar9;
      pdVar19[7] = dVar10;
      dVar9 = (pFVar24->CameraState).DPIScale;
      dVar10 = *(double *)&(pFVar24->CameraState).field_0x58;
      pdVar19[8] = dVar8;
      pdVar19[9] = dVar11;
      dVar8 = (pFVar24->RectangleStartRay).WorldRay.Origin.field0_0x0._s_0.X;
      dVar11 = (pFVar24->RectangleStartRay).WorldRay.Origin.field0_0x0._s_0.Y;
      pdVar19[10] = dVar9;
      pdVar19[0xb] = dVar10;
      dVar9 = (pFVar24->RectangleStartRay).WorldRay.Origin.field0_0x0._s_0.Z;
      dVar10 = (pFVar24->RectangleStartRay).WorldRay.Direction.field0_0x0._s_0.X;
      pdVar19[0xc] = dVar8;
      pdVar19[0xd] = dVar11;
      pdVar19[0xe] = dVar9;
      pdVar19[0xf] = dVar10;
      pcVar21 = pcVar21 + -1;
      pdVar17 = pdVar19 + 0x10;
    } while (pcVar21 != (code *)0x0);
    dVar8 = (pFVar24->RectangleStartRay).WorldRay.Direction.field0_0x0._s_0.Z;
    dVar9 = *(double *)&(pFVar24->RectangleStartRay).bHas2D;
    dVar10 = (pFVar24->RectangleStartRay).ScreenPosition.field0_0x0._s_0.X;
    local_48 = pcVar21;
    pdVar19[0x10] = (param_1->CameraState).Position.field0_0x0._s_0.X;
    pdVar19[0x11] = dVar8;
    dVar8 = (pFVar24->RectangleStartRay).ScreenPosition.field0_0x0._s_0.Y;
    dVar11 = (pFVar24->RectangleEndRay).WorldRay.Origin.field0_0x0._s_0.X;
    pdVar19[0x12] = dVar9;
    pdVar19[0x13] = dVar10;
    dVar9 = (pFVar24->RectangleEndRay).WorldRay.Origin.field0_0x0._s_0.Y;
    dVar10 = (pFVar24->RectangleEndRay).WorldRay.Origin.field0_0x0._s_0.Z;
    pdVar19[0x14] = dVar8;
    pdVar19[0x15] = dVar11;
    pdVar19[0x16] = dVar9;
    pdVar19[0x17] = dVar10;
    local_198[0] = this;
    uStack_20 = FMemory::Malloc(0x160,0x10);
    *uStack_20 = (longlong)
                 &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UMeshTopologySelectionMechanic::OnDragRectangleChanged'::`7'::<lambda_1>,0,1>
                  ::_vftable_;
    puVar16 = uStack_20 + 2;
    ppUVar18 = local_198;
    do {
      ppUVar22 = ppUVar18;
      puVar20 = puVar16;
      pUVar12 = ppUVar22[1];
      pUVar13 = ppUVar22[2];
      pUVar14 = ppUVar22[3];
      *puVar20 = *ppUVar22;
      puVar20[1] = pUVar12;
      pUVar12 = ppUVar22[4];
      pUVar15 = ppUVar22[5];
      puVar20[2] = pUVar13;
      puVar20[3] = pUVar14;
      pUVar13 = ppUVar22[6];
      pUVar14 = ppUVar22[7];
      puVar20[4] = pUVar12;
      puVar20[5] = pUVar15;
      pUVar12 = ppUVar22[8];
      pUVar15 = ppUVar22[9];
      puVar20[6] = pUVar13;
      puVar20[7] = pUVar14;
      pUVar13 = ppUVar22[10];
      pUVar14 = ppUVar22[0xb];
      puVar20[8] = pUVar12;
      puVar20[9] = pUVar15;
      pUVar12 = ppUVar22[0xc];
      pUVar15 = ppUVar22[0xd];
      puVar20[10] = pUVar13;
      puVar20[0xb] = pUVar14;
      pUVar13 = ppUVar22[0xe];
      pUVar14 = ppUVar22[0xf];
      puVar20[0xc] = pUVar12;
      puVar20[0xd] = pUVar15;
      puVar20[0xe] = pUVar13;
      puVar20[0xf] = pUVar14;
      lVar25 = lVar25 + -1;
      puVar16 = puVar20 + 0x10;
      ppUVar18 = ppUVar22 + 0x10;
    } while (lVar25 != 0);
    pUVar12 = ppUVar22[0x11];
    pUVar13 = ppUVar22[0x12];
    pUVar14 = ppUVar22[0x13];
    puVar20[0x10] = ppUVar22[0x10];
    puVar20[0x11] = pUVar12;
    pUVar12 = ppUVar22[0x14];
    pUVar15 = ppUVar22[0x15];
    puVar20[0x12] = pUVar13;
    puVar20[0x13] = pUVar14;
    pUVar13 = ppUVar22[0x16];
    pUVar14 = ppUVar22[0x17];
    puVar20[0x14] = pUVar12;
    puVar20[0x15] = pUVar15;
    pUVar12 = ppUVar22[0x18];
    pUVar15 = ppUVar22[0x19];
    puVar20[0x16] = pUVar13;
    puVar20[0x17] = pUVar14;
    puVar20[0x18] = pUVar12;
    puVar20[0x19] = pUVar15;
    lVar25 = *(longlong *)&this->PendingSelectionFunction;
    uVar7 = *(undefined8 *)&(this->PendingSelectionFunction).field_0x8;
    if (uStack_20 + 2 != (undefined8 *)0x0) {
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UMeshTopologySelectionMechanic::OnDragRectangleChanged'::__l7::<lambda_1>,void>
                 ::Call;
    }
    uVar1 = *(undefined4 *)&(this->PendingSelectionFunction).field_0x10;
    uVar2 = *(undefined4 *)&(this->PendingSelectionFunction).field_0x14;
    uVar3 = *(undefined4 *)&(this->PendingSelectionFunction).field_0x18;
    uVar4 = *(undefined4 *)&(this->PendingSelectionFunction).field_0x1c;
    uVar5 = *(undefined8 *)&(this->PendingSelectionFunction).field_0x20;
    plVar6 = *(longlong **)&(this->PendingSelectionFunction).field_0x28;
    *(code **)&this->PendingSelectionFunction = local_48;
    *(undefined8 *)&(this->PendingSelectionFunction).field_0x8 = uStack_40;
    uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
    *(undefined4 *)&(this->PendingSelectionFunction).field_0x10 = local_38;
    *(undefined4 *)&(this->PendingSelectionFunction).field_0x14 = uStack_34;
    *(undefined4 *)&(this->PendingSelectionFunction).field_0x18 = uStack_30;
    *(undefined4 *)&(this->PendingSelectionFunction).field_0x1c = uStack_2c;
    *(undefined4 *)&(this->PendingSelectionFunction).field_0x20 = (undefined4)local_28;
    *(undefined4 *)&(this->PendingSelectionFunction).field_0x24 = local_28._4_4_;
    *(undefined4 *)&(this->PendingSelectionFunction).field_0x28 = (undefined4)uStack_20;
    *(undefined4 *)&(this->PendingSelectionFunction).field_0x2c = uStack_20._4_4_;
    local_48 = (code *)lVar25;
    uStack_40 = uVar7;
    local_38 = uVar1;
    uStack_34 = uVar2;
    uStack_30 = uVar3;
    uStack_2c = uVar4;
    local_28 = uVar5;
    uStack_20 = plVar6;
    if (lVar25 != 0) {
      plVar23 = (longlong *)&local_38;
      if (plVar6 != (longlong *)0x0) {
        plVar23 = plVar6;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
  }
  return;
}

// OnDragRectangleFinished @ 14cba6280

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
UMeshTopologySelectionMechanic::OnDragRectangleFinished
          (UMeshTopologySelectionMechanic *this,FCameraRectangle *param_1,bool param_2)

{
  code *pcVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 uVar4;
  UObject *pUVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(void **)&this->PendingSelectionFunction != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->PendingSelectionFunction);
    pcVar1 = *(code **)&this->PendingSelectionFunction;
    plVar8 = (longlong *)&(this->PendingSelectionFunction).field_0x10;
    plVar2 = *(longlong **)&(this->PendingSelectionFunction).field_0x28;
    plVar7 = plVar8;
    if (plVar2 != (longlong *)0x0) {
      plVar7 = plVar2;
    }
    uVar4 = (**(code **)(*plVar7 + 8))();
    (*pcVar1)(uVar4);
    if (*(longlong *)&this->PendingSelectionFunction != 0) {
      plVar2 = *(longlong **)&(this->PendingSelectionFunction).field_0x28;
      if (plVar2 != (longlong *)0x0) {
        plVar8 = plVar2;
      }
      (**(code **)(*plVar8 + 0x10))(plVar8);
      *(undefined8 *)&this->PendingSelectionFunction = 0;
    }
  }
  this->bCurrentlyMarqueeDragging = false;
  TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator>::Reset
            ((TSet<TTuple<int,bool>,TDefaultMapHashableKeyFuncs<int,bool,0>,FDefaultSetAllocator> *)
             &this->TriIsOccludedCache);
  bVar3 = UE::Geometry::FGroupTopologySelection::operator!=
                    (&this->PersistentSelection,&this->PreDragPersistentSelection);
  if (bVar3) {
    this->SelectionTimestamp = this->SelectionTimestamp + 1;
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSelectionChanged);
  }
  EndChangeAndEmitIfModified(this);
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar6 = (**(code **)(*(longlong *)pUVar5 + 0x2d8))(pUVar5);
                    /* WARNING: Could not recover jumptable at 0x00014cba6364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(lVar6 + 0x28) + 0x18))(lVar6 + 0x28);
  return;
}

// OnDragRectangleStarted @ 14cba6370

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
UMeshTopologySelectionMechanic::OnDragRectangleStarted(UMeshTopologySelectionMechanic *this)

{
  undefined2 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  code *pcVar4;
  FSelectionSettings FVar5;
  UObject *pUVar6;
  longlong lVar7;
  FText *pFVar8;
  undefined1 extraout_var;
  longlong *plVar10;
  undefined1 local_res8 [8];
  FText local_28;
  undefined4 *puVar9;
  
  this->bCurrentlyMarqueeDragging = true;
  if (*(longlong *)&this->PendingSelectionFunction != 0) {
    plVar3 = *(longlong **)&(this->PendingSelectionFunction).field_0x28;
    plVar10 = (longlong *)&(this->PendingSelectionFunction).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar10 = plVar3;
    }
    (**(code **)(*plVar10 + 0x10))();
    *(undefined8 *)&this->PendingSelectionFunction = 0;
  }
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar7 = (**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6);
  pcVar4 = *(code **)(*(longlong *)(lVar7 + 0x28) + 0x10);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"UMeshTopologySelectionMechanic",L"SelectionChange",L"Selection");
  (*pcVar4)(lVar7 + 0x28,pFVar8);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  BeginChange(this);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->PreDragPersistentSelection).SelectedGroupIDs,
             &(this->PersistentSelection).SelectedGroupIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->PreDragPersistentSelection).SelectedCornerIDs,
             &(this->PersistentSelection).SelectedCornerIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->PreDragPersistentSelection).SelectedEdgeIDs,
             &(this->PersistentSelection).SelectedEdgeIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->LastUpdateRectangleSelection).SelectedGroupIDs,
             &(this->PersistentSelection).SelectedGroupIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->LastUpdateRectangleSelection).SelectedCornerIDs,
             &(this->PersistentSelection).SelectedCornerIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->LastUpdateRectangleSelection).SelectedEdgeIDs,
             &(this->PersistentSelection).SelectedEdgeIDs);
  FVar5 = GetTopoSelectorSettings(this,SUB81(local_res8,0));
  puVar9 = (undefined4 *)CONCAT17(extraout_var,FVar5);
  uVar2 = *puVar9;
  (this->PreDragTopoSelectorSettings).bEnableFaceHits = (bool)(char)uVar2;
  (this->PreDragTopoSelectorSettings).bEnableEdgeHits = (bool)(char)((uint)uVar2 >> 8);
  (this->PreDragTopoSelectorSettings).bEnableCornerHits = (bool)(char)((uint)uVar2 >> 0x10);
  (this->PreDragTopoSelectorSettings).bHitBackFaces = (bool)(char)((uint)uVar2 >> 0x18);
  uVar1 = *(undefined2 *)(puVar9 + 1);
  (this->PreDragTopoSelectorSettings).bPreferProjectedElement = (bool)(char)uVar1;
  (this->PreDragTopoSelectorSettings).bSelectDownRay = (bool)(char)((ushort)uVar1 >> 8);
  (this->PreDragTopoSelectorSettings).bIgnoreOcclusion = *(bool *)((longlong)puVar9 + 6);
  (this->PreDragTopoSelectorSettings).bIgnoreOcclusion =
       ((this->Properties).field0_0x0.DebugPtr)->bMarqueeIgnoreOcclusion;
  return;
}

// OnEndHover @ 14cba64f0

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

void __thiscall UMeshTopologySelectionMechanic::OnEndHover(UMeshTopologySelectionMechanic *this)

{
  ClearHighlight((UMeshTopologySelectionMechanic *)
                 (this[-1].SelectionRenderer.TotalTransform.Translation.ZW.m128d_f64 + 1));
  return;
}

// OnUpdateHover @ 14cba6b90

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

bool __thiscall
UMeshTopologySelectionMechanic::OnUpdateHover
          (UMeshTopologySelectionMechanic *this,FInputDeviceRay *param_1)

{
  if (*(char *)&this->OnFaceSelectionPreviewChanged == '\0') {
    return false;
  }
  (**(code **)((longlong)this[-1].SelectionRenderer.TotalTransform.Translation.ZW.m128d_f64[1] +
              0x2e8))();
  return true;
}

// OnUpdateModifierState @ 14cba6bc0

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
UMeshTopologySelectionMechanic::OnUpdateModifierState
          (UMeshTopologySelectionMechanic *this,int param_1,bool param_2)

{
  if (param_1 == 1) {
    *(bool *)&(this->CameraState).Orientation.Z = param_2;
  }
  else if (param_1 == 2) {
    *(bool *)((longlong)&(this->CameraState).Orientation.Z + 1) = param_2;
    return;
  }
  return;
}

// OnUpdateModifierState`adjustor{8}' @ 14cba6be0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* [thunk]:public: virtual void __cdecl
   UMeshTopologySelectionMechanic::OnUpdateModifierState`adjustor{8}' (int,bool) __ptr64 */

void __thiscall
UMeshTopologySelectionMechanic::OnUpdateModifierState_adjustor_8__
          (UMeshTopologySelectionMechanic *this,int param_1,bool param_2)

{
  OnUpdateModifierState((UMeshTopologySelectionMechanic *)&this[-1].field_0xb28,param_1,param_2);
  return;
}

// Render @ 14cbac4e0

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

void __thiscall
UMeshTopologySelectionMechanic::Render
          (UMeshTopologySelectionMechanic *this,IToolsContextRenderAPI *param_1)

{
  FToolDataVisualizer *this_00;
  uint *puVar1;
  double *pdVar2;
  undefined1 (*pauVar3) [16];
  URectangleMarqueeMechanic *pUVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  UInteractiveTool *pUVar21;
  longlong *plVar22;
  FMeshTopologySelector *pFVar23;
  undefined8 *puVar24;
  ulonglong uVar25;
  FTopologyProvider *pFVar26;
  FDynamicMesh3 *pFVar27;
  int iVar28;
  UMeshTopologySelectionMechanic *pUVar29;
  uint *puVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auStack_258 [32];
  float local_238;
  undefined1 local_230;
  undefined1 local_228 [4];
  int local_224;
  FDynamicMesh3 *local_220;
  FTopologyProvider *local_218;
  UMeshTopologySelectionMechanic *local_210;
  IToolsContextRenderAPI *local_208;
  undefined1 local_200 [16];
  double local_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined1 local_1d0 [16];
  double local_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  FViewCameraState local_168;
  undefined1 local_108 [16];
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_258;
  local_210 = this;
  local_208 = param_1;
  pUVar21 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  plVar22 = (longlong *)(**(code **)(pUVar21->_padding_ + 0x2d8))(pUVar21);
  plVar22 = (longlong *)(**(code **)(*plVar22 + 0x398))(plVar22);
  (**(code **)(*plVar22 + 0x18))(plVar22,&this->CameraState);
  if (this->bIsEnabled != false) {
    pUVar4 = (this->MarqueeMechanic).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar4 + 0x2c0))(pUVar4,param_1);
  }
  if (this->bRenderTopology != false) {
    (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_168);
    local_e8.Rotation.XY.m128d_f64[0] = (this->TargetTransform).Rotation.XY.m128d_f64[0];
    local_e8.Rotation.XY.m128d_f64[1] = (this->TargetTransform).Rotation.XY.m128d_f64[1];
    pFVar27 = this->Mesh;
    local_e8.Rotation.ZW.m128d_f64[0] = (this->TargetTransform).Rotation.ZW.m128d_f64[0];
    local_e8.Rotation.ZW.m128d_f64[1] = (this->TargetTransform).Rotation.ZW.m128d_f64[1];
    local_e8.Translation.XY.m128d_f64[0] = (this->TargetTransform).Translation.XY.m128d_f64[0];
    local_e8.Translation.XY.m128d_f64[1] = (this->TargetTransform).Translation.XY.m128d_f64[1];
    local_e8.Translation.ZW.m128d_f64[0] = (this->TargetTransform).Translation.ZW.m128d_f64[0];
    local_e8.Translation.ZW.m128d_f64[1] = (this->TargetTransform).Translation.ZW.m128d_f64[1];
    local_e8.Scale3D.XY.m128d_f64[0] = (this->TargetTransform).Scale3D.XY.m128d_f64[0];
    local_e8.Scale3D.XY.m128d_f64[1] = (this->TargetTransform).Scale3D.XY.m128d_f64[1];
    local_e8.Scale3D.ZW.m128d_f64[0] = (this->TargetTransform).Scale3D.ZW.m128d_f64[0];
    local_e8.Scale3D.ZW.m128d_f64[1] = (this->TargetTransform).Scale3D.ZW.m128d_f64[1];
    local_220 = pFVar27;
    pFVar23 = TSharedPtr<FMeshTopologySelector,1>::operator->(&this->TopoSelector);
    this_00 = &this->PolyEdgesRenderer;
    pFVar26 = (pFVar23->TopologyProvider).Ptr;
    local_218 = pFVar26;
    FToolDataVisualizer::BeginFrame(this_00,param_1,&local_168);
    FToolDataVisualizer::SetTransform(this_00,&local_e8);
    pUVar29 = this;
    if (this->bShowEdges != false) {
      local_224 = 0;
      iVar19 = (**(code **)((longlong)*pFVar26 + 0x18))(pFVar26);
      iVar28 = local_224;
      if (0 < iVar19) {
        do {
          puVar24 = (undefined8 *)(**(code **)((longlong)*pFVar26 + 0x30))(pFVar26,iVar28);
          pFVar27 = local_220;
          puVar30 = (uint *)*puVar24;
          iVar19 = *(int *)(puVar24 + 1);
          puVar1 = puVar30 + iVar19;
          while( true ) {
            if (*(int *)(puVar24 + 1) != iVar19) {
              local_228[0] = 0;
              `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_228);
            }
            pFVar26 = local_218;
            if (puVar30 == puVar1) break;
            auVar51 = *(undefined1 (*) [16])
                       (this->PolyEdgesRenderer).TotalTransform.Rotation.ZW.m128d_f64;
            pFVar5 = (pFVar27->Vertices).Blocks.AllocatorInstance.Data;
            auVar48 = *(undefined1 (*) [16])
                       (this->PolyEdgesRenderer).TotalTransform.Rotation.XY.m128d_f64;
            dVar17 = (this->PolyEdgesRenderer).TotalTransform.Rotation.ZW.m128d_f64[1];
            uVar6 = *(ulonglong *)
                     (*(longlong *)
                       ((pFVar27->Edges).Blocks.AllocatorInstance.Data +
                       (ulonglong)(*puVar30 >> 9) * 8) + (ulonglong)(*puVar30 & 0x1ff) * 0x10);
            uVar25 = (ulonglong)((uint)(uVar6 >> 0x20) & 0x1ff);
            lVar7 = *(longlong *)(pFVar5 + (uVar6 >> 0x29) * 8);
            local_188 = *(double *)(lVar7 + 0x10 + uVar25 * 0x18);
            pdVar2 = (double *)(lVar7 + uVar25 * 0x18);
            local_198 = *pdVar2;
            dStack_190 = pdVar2[1];
            dVar11 = local_188 * (this->PolyEdgesRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
            dVar12 = (this->PolyEdgesRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
            uVar25 = (ulonglong)((uint)uVar6 & 0x1ff);
            lVar7 = *(longlong *)(pFVar5 + ((uVar6 & 0xffffffff) >> 9) * 8);
            auVar31 = *(undefined1 (*) [16])
                       (this->PolyEdgesRenderer).TotalTransform.Rotation.XY.m128d_f64;
            auVar40 = blendpd(auVar31,auVar51,2);
            dVar14 = local_198 * (this->PolyEdgesRenderer).TotalTransform.Scale3D.XY.m128d_f64[0];
            dVar15 = dStack_190 * (this->PolyEdgesRenderer).TotalTransform.Scale3D.XY.m128d_f64[1];
            uVar54 = (undefined4)((ulonglong)dVar15 >> 0x20);
            auVar55._8_4_ = SUB84(dVar15,0);
            auVar55._0_8_ = dVar14;
            auVar55._12_4_ = uVar54;
            dVar10 = auVar51._0_8_;
            auVar56._0_8_ = auVar55._8_8_ * auVar31._0_8_ - auVar31._8_8_ * dVar14;
            auVar56._8_8_ = dVar11 * auVar31._8_8_ - dVar10 * dVar15;
            auVar42._8_4_ = SUB84(dVar15,0);
            auVar42._0_8_ = dVar14;
            auVar42._12_4_ = uVar54;
            auVar31._8_4_ = SUB84(dVar12,0);
            auVar31._0_8_ = dVar11;
            auVar31._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            auVar31 = blendpd(auVar42,auVar31,2);
            dVar16 = auVar51._8_8_;
            auVar32._0_8_ = auVar31._0_8_ * dVar10 - auVar40._0_8_ * dVar11;
            auVar32._8_8_ = auVar31._8_8_ * dVar16 - auVar40._8_8_ * dVar12;
            auVar31 = blendpd(auVar56,auVar32,2);
            dVar12 = auVar56._8_8_ + auVar56._8_8_;
            dVar9 = auVar32._0_8_ + auVar32._0_8_;
            uVar54 = (undefined4)((ulonglong)dVar9 >> 0x20);
            auVar57._0_8_ = auVar31._0_8_ + auVar31._0_8_;
            auVar57._8_8_ = auVar31._8_8_ + auVar31._8_8_;
            auVar46._8_4_ = SUB84(dVar9,0);
            auVar46._0_8_ = dVar12;
            auVar46._12_4_ = uVar54;
            auVar41._8_4_ = SUB84(dVar9,0);
            auVar41._0_8_ = dVar12;
            auVar41._12_4_ = uVar54;
            auVar31 = blendpd(auVar41,auVar57,2);
            auVar47._0_8_ = auVar46._8_8_ * auVar48._0_8_ - auVar48._8_8_ * dVar12;
            auVar47._8_8_ = auVar57._0_8_ * auVar48._8_8_ - dVar10 * dVar9;
            pdVar2 = (double *)(lVar7 + uVar25 * 0x18);
            local_180 = *pdVar2;
            dStack_178 = pdVar2[1];
            auVar33._8_4_ = SUB84(auVar47._8_8_,0);
            auVar33._0_8_ = auVar47._0_8_;
            auVar33._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
            auVar40 = blendpd(auVar48,auVar51,2);
            auVar48._0_8_ = auVar31._0_8_ * dVar10 - auVar40._0_8_ * auVar57._0_8_;
            auVar48._8_8_ = auVar31._8_8_ * dVar16 - auVar40._8_8_ * auVar57._8_8_;
            local_170 = *(double *)(lVar7 + 0x10 + uVar25 * 0x18);
            dVar9 = dVar9 * dVar17 + dVar15 + auVar48._0_8_ +
                    (this->PolyEdgesRenderer).TotalTransform.Translation.XY.m128d_f64[1];
            auVar48 = blendpd(auVar47,auVar48,2);
            local_200._8_4_ = SUB84(dVar9,0);
            local_200._0_8_ =
                 dVar12 * dVar17 + dVar14 + auVar33._8_8_ +
                 (this->PolyEdgesRenderer).TotalTransform.Translation.XY.m128d_f64[0];
            local_200._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
            local_1f0 = auVar57._0_8_ * dVar17 + dVar11 + auVar48._0_8_ +
                        (this->PolyEdgesRenderer).TotalTransform.Translation.ZW.m128d_f64[0];
            dVar14 = local_180 * (this->PolyEdgesRenderer).TotalTransform.Scale3D.XY.m128d_f64[0];
            dVar15 = dStack_178 * (this->PolyEdgesRenderer).TotalTransform.Scale3D.XY.m128d_f64[1];
            uVar54 = (undefined4)((ulonglong)dVar15 >> 0x20);
            local_230 = (this->PolyEdgesRenderer).bDepthTested;
            auVar48 = *(undefined1 (*) [16])
                       (this->PolyEdgesRenderer).TotalTransform.Rotation.XY.m128d_f64;
            dVar11 = local_170 * (this->PolyEdgesRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
            dVar12 = (this->PolyEdgesRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
            auVar58._8_4_ = SUB84(dVar15,0);
            auVar58._0_8_ = dVar14;
            auVar58._12_4_ = uVar54;
            local_1b8 = *(undefined1 (*) [16])
                         (this->PolyEdgesRenderer).TotalTransform.Rotation.XY.m128d_f64;
            auVar42 = blendpd(local_1b8,auVar51,2);
            auVar59._0_8_ = auVar58._8_8_ * local_1b8._0_8_ - local_1b8._8_8_ * dVar14;
            auVar59._8_8_ = dVar11 * local_1b8._8_8_ - dVar10 * dVar15;
            auVar34._8_4_ = SUB84(dVar15,0);
            auVar34._0_8_ = dVar14;
            auVar34._12_4_ = uVar54;
            auVar40._8_4_ = SUB84(dVar12,0);
            auVar40._0_8_ = dVar11;
            auVar40._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
            auVar31 = blendpd(auVar34,auVar40,2);
            auVar35._0_8_ = auVar31._0_8_ * dVar10 - auVar42._0_8_ * dVar11;
            auVar35._8_8_ = auVar31._8_8_ * dVar16 - auVar42._8_8_ * dVar12;
            auVar31 = blendpd(auVar59,auVar35,2);
            dVar12 = auVar59._8_8_ + auVar59._8_8_;
            dVar9 = auVar35._0_8_ + auVar35._0_8_;
            uVar54 = (undefined4)((ulonglong)dVar9 >> 0x20);
            auVar60._0_8_ = auVar31._0_8_ + auVar31._0_8_;
            auVar60._8_8_ = auVar31._8_8_ + auVar31._8_8_;
            auVar49._8_4_ = SUB84(dVar9,0);
            auVar49._0_8_ = dVar12;
            auVar49._12_4_ = uVar54;
            auVar43._8_4_ = SUB84(dVar9,0);
            auVar43._0_8_ = dVar12;
            auVar43._12_4_ = uVar54;
            auVar31 = blendpd(auVar43,auVar60,2);
            auVar50._0_8_ = auVar49._8_8_ * auVar48._0_8_ - auVar48._8_8_ * dVar12;
            auVar50._8_8_ = auVar60._0_8_ * auVar48._8_8_ - dVar10 * dVar9;
            auVar36._8_4_ = SUB84(auVar50._8_8_,0);
            auVar36._0_8_ = auVar50._0_8_;
            auVar36._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
            auVar48 = blendpd(auVar48,auVar51,2);
            auVar51._0_8_ = auVar31._0_8_ * dVar10 - auVar48._0_8_ * auVar60._0_8_;
            auVar51._8_8_ = auVar31._8_8_ * dVar16 - auVar48._8_8_ * auVar60._8_8_;
            local_238 = (this->PolyEdgesRenderer).LineThickness;
            dVar10 = dVar9 * dVar16 + dVar15 + auVar51._0_8_ +
                     (this->PolyEdgesRenderer).TotalTransform.Translation.XY.m128d_f64[1];
            auVar51 = blendpd(auVar50,auVar51,2);
            local_1e8._8_4_ = SUB84(dVar10,0);
            local_1e8._0_8_ =
                 dVar12 * dVar16 + dVar14 + auVar36._8_8_ +
                 (this->PolyEdgesRenderer).TotalTransform.Translation.XY.m128d_f64[0];
            local_1e8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
            local_1d8 = auVar60._0_8_ * dVar16 + dVar11 + auVar51._0_8_ +
                        (this->PolyEdgesRenderer).TotalTransform.Translation.ZW.m128d_f64[0];
            (**(code **)(this_00->_padding_ + 8))
                      (this_00,local_1e8,local_200,&(this->PolyEdgesRenderer).LineColor);
            puVar30 = puVar30 + 1;
          }
          iVar28 = iVar28 + 1;
          iVar19 = (**(code **)((longlong)*local_218 + 0x18))(local_218);
          pFVar27 = local_220;
          pUVar29 = local_210;
          param_1 = local_208;
        } while (iVar28 < iVar19);
      }
    }
    if (pUVar29->bShowSelectableCorners != false) {
      iVar19 = 0;
      iVar28 = (**(code **)((longlong)*pFVar26 + 8))(pFVar26);
      if (0 < iVar28) {
        do {
          uVar20 = (**(code **)((longlong)*pFVar26 + 0x10))(pFVar26,iVar19);
          auVar51 = *(undefined1 (*) [16])
                     (this->PolyEdgesRenderer).TotalTransform.Rotation.XY.m128d_f64;
          dVar15 = (this->PolyEdgesRenderer).TotalTransform.Rotation.ZW.m128d_f64[1];
          lVar7 = *(longlong *)
                   ((pFVar27->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar20 >> 9) * 8
                   );
          pauVar3 = (undefined1 (*) [16])(lVar7 + (ulonglong)(uVar20 & 0x1ff) * 0x18);
          local_1b8 = *pauVar3;
          local_1a8 = *(double *)(lVar7 + 0x10 + (ulonglong)(uVar20 & 0x1ff) * 0x18);
          dVar14 = local_1a8 * (this->PolyEdgesRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
          dVar16 = (this->PolyEdgesRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
          local_238 = (float)CONCAT31(local_238._1_3_,(this->PolyEdgesRenderer).bDepthTested);
          local_108 = *(undefined1 (*) [16])
                       (this->PolyEdgesRenderer).TotalTransform.Rotation.XY.m128d_f64;
          dVar9 = (this->PolyEdgesRenderer).TotalTransform.Scale3D.XY.m128d_f64[0] *
                  *(double *)*pauVar3;
          dVar11 = (this->PolyEdgesRenderer).TotalTransform.Scale3D.XY.m128d_f64[1] *
                   *(double *)(*pauVar3 + 8);
          uVar54 = (undefined4)((ulonglong)dVar11 >> 0x20);
          auVar48 = *(undefined1 (*) [16])
                     (this->PolyEdgesRenderer).TotalTransform.Rotation.ZW.m128d_f64;
          auVar61._8_4_ = SUB84(dVar11,0);
          auVar61._0_8_ = dVar9;
          auVar61._12_4_ = uVar54;
          dVar10 = auVar48._0_8_;
          auVar40 = blendpd(local_108,auVar48,2);
          auVar62._0_8_ = auVar61._8_8_ * local_108._0_8_ - local_108._8_8_ * dVar9;
          auVar62._8_8_ = dVar14 * local_108._8_8_ - dVar10 * dVar11;
          auVar37._8_4_ = SUB84(dVar11,0);
          auVar37._0_8_ = dVar9;
          auVar37._12_4_ = uVar54;
          auVar13._8_4_ = SUB84(dVar16,0);
          auVar13._0_8_ = dVar14;
          auVar13._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          auVar31 = blendpd(auVar37,auVar13,2);
          auVar38._0_8_ = auVar31._0_8_ * dVar10 - auVar40._0_8_ * dVar14;
          auVar38._8_8_ = auVar31._8_8_ * auVar48._8_8_ - auVar40._8_8_ * dVar16;
          auVar31 = blendpd(auVar62,auVar38,2);
          dVar16 = auVar62._8_8_ + auVar62._8_8_;
          dVar12 = auVar38._0_8_ + auVar38._0_8_;
          uVar54 = (undefined4)((ulonglong)dVar12 >> 0x20);
          auVar63._0_8_ = auVar31._0_8_ + auVar31._0_8_;
          auVar63._8_8_ = auVar31._8_8_ + auVar31._8_8_;
          auVar52._8_4_ = SUB84(dVar12,0);
          auVar52._0_8_ = dVar16;
          auVar52._12_4_ = uVar54;
          auVar44._8_4_ = SUB84(dVar12,0);
          auVar44._0_8_ = dVar16;
          auVar44._12_4_ = uVar54;
          auVar31 = blendpd(auVar44,auVar63,2);
          auVar53._0_8_ = auVar52._8_8_ * auVar51._0_8_ - auVar51._8_8_ * dVar16;
          auVar53._8_8_ = auVar63._0_8_ * auVar51._8_8_ - dVar10 * dVar12;
          auVar51 = blendpd(auVar51,auVar48,2);
          auVar39._8_4_ = SUB84(auVar53._8_8_,0);
          auVar39._0_8_ = auVar53._0_8_;
          auVar39._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
          auVar45._0_8_ = auVar31._0_8_ * dVar10 - auVar51._0_8_ * auVar63._0_8_;
          auVar45._8_8_ = auVar31._8_8_ * auVar48._8_8_ - auVar51._8_8_ * auVar63._8_8_;
          auVar51 = blendpd(auVar53,auVar45,2);
          dVar10 = dVar12 * dVar15 + dVar11 + auVar45._0_8_ +
                   (this->PolyEdgesRenderer).TotalTransform.Translation.XY.m128d_f64[1];
          local_1c0 = auVar63._0_8_ * dVar15 + dVar14 + auVar51._0_8_ +
                      (this->PolyEdgesRenderer).TotalTransform.Translation.ZW.m128d_f64[0];
          local_1d0._8_4_ = SUB84(dVar10,0);
          local_1d0._0_8_ =
               dVar16 * dVar15 + dVar9 + auVar39._8_8_ +
               (this->PolyEdgesRenderer).TotalTransform.Translation.XY.m128d_f64[0];
          local_1d0._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
          (**(code **)(this_00->_padding_ + 0x18))
                    (this_00,local_1d0,&(this->PolyEdgesRenderer).PointColor);
          iVar19 = iVar19 + 1;
          iVar28 = (**(code **)((longlong)*pFVar26 + 8))(pFVar26);
        } while (iVar19 < iVar28);
      }
    }
    FToolDataVisualizer::EndFrame(this_00);
    if (((*(int *)&(pUVar29->PersistentSelection).SelectedCornerIDs.Elements.field_0x8 !=
          *(int *)&(pUVar29->PersistentSelection).SelectedCornerIDs.Elements.field_0x34) ||
        (*(int *)&(pUVar29->PersistentSelection).SelectedEdgeIDs.Elements.field_0x8 !=
         *(int *)&(pUVar29->PersistentSelection).SelectedEdgeIDs.Elements.field_0x34)) ||
       (*(int *)&(pUVar29->PersistentSelection).SelectedGroupIDs.Elements.field_0x8 !=
        *(int *)&(pUVar29->PersistentSelection).SelectedGroupIDs.Elements.field_0x34)) {
      FToolDataVisualizer::BeginFrame(&pUVar29->SelectionRenderer,param_1,&local_168);
      FToolDataVisualizer::SetTransform(&pUVar29->SelectionRenderer,&local_e8);
      pFVar23 = TSharedPtr<FMeshTopologySelector,1>::operator->(&pUVar29->TopoSelector);
      local_238 = 1.4013e-45;
      (**(code **)(*(longlong *)pFVar23 + 8))
                (pFVar23,&pUVar29->PersistentSelection,&pUVar29->SelectionRenderer,&local_168);
      FToolDataVisualizer::EndFrame(&pUVar29->SelectionRenderer);
    }
    FToolDataVisualizer::BeginFrame(&pUVar29->HilightRenderer,param_1,&local_168);
    FToolDataVisualizer::SetTransform(&pUVar29->HilightRenderer,&local_e8);
    if (((pUVar29->TopoSelector).Object == (FMeshTopologySelector *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar18)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar23 = (pUVar29->TopoSelector).Object;
    local_238 = 0.0;
    (**(code **)(*(longlong *)pFVar23 + 8))
              (pFVar23,&pUVar29->HilightSelection,&pUVar29->HilightRenderer,&local_168);
    FToolDataVisualizer::EndFrame(&pUVar29->HilightRenderer);
  }
  return;
}

// RenderMarquee @ 14cbaccd0

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
UMeshTopologySelectionMechanic::RenderMarquee
          (UMeshTopologySelectionMechanic *this,IToolsContextRenderAPI *param_1)

{
  URectangleMarqueeMechanic *pUVar1;
  
  pUVar1 = (this->MarqueeMechanic).field0_0x0.DebugPtr;
  if (pUVar1 != (URectangleMarqueeMechanic *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cbaccdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x2c0))();
    return;
  }
  return;
}

// SelectAll @ 14cbae450

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

void __thiscall UMeshTopologySelectionMechanic::SelectAll(UMeshTopologySelectionMechanic *this)

{
  FGroupTopologySelection *this_00;
  code *pcVar1;
  FTopologyProvider *pFVar2;
  UMeshTopologySelectionMechanicProperties *pUVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  longlong lVar7;
  FText *pFVar8;
  int iVar9;
  undefined1 auStack_178 [32];
  int local_158;
  int local_154;
  undefined4 local_150;
  int local_14c;
  int local_148;
  int local_144;
  FText local_140;
  FGroupTopologySelection local_128;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  this_00 = &this->PersistentSelection;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_128,this_00);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar7 = (**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6);
  pcVar1 = *(code **)(*(longlong *)(lVar7 + 0x28) + 0x10);
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_140,L"UMeshTopologySelectionMechanic",L"SelectionChange",L"Selection");
  (*pcVar1)(lVar7 + 0x28,pFVar8);
  if (local_140.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_140.TextData.Reference + 0x10))();
  }
  BeginChange(this);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&this_00->SelectedGroupIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (&(this->PersistentSelection).SelectedCornerIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (&(this->PersistentSelection).SelectedEdgeIDs);
  if (((this->TopoSelector).Object == (FMeshTopologySelector *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar2 = (((this->TopoSelector).Object)->TopologyProvider).Ptr;
  pUVar3 = (this->Properties).field0_0x0.DebugPtr;
  if (pUVar3->bSelectVertices == false) {
    if (((pUVar3->bSelectEdges == false) && (pUVar3->bSelectEdgeLoops == false)) &&
       (pUVar3->bSelectEdgeRings == false)) {
      if (pUVar3->bSelectFaces != false) {
        iVar9 = 0;
        iVar5 = (**(code **)((longlong)*pFVar2 + 0x40))(pFVar2);
        if (0 < iVar5) {
          do {
            local_150 = (**(code **)((longlong)*pFVar2 + 0x48))(pFVar2,iVar9);
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&this_00->SelectedGroupIDs,&local_148,(bool *)&local_150);
            iVar9 = iVar9 + 1;
            iVar5 = (**(code **)((longlong)*pFVar2 + 0x40))(pFVar2);
          } while (iVar9 < iVar5);
        }
      }
    }
    else {
      iVar5 = (**(code **)((longlong)*pFVar2 + 0x18))(pFVar2);
      local_154 = 0;
      if (0 < iVar5) {
        do {
          iVar9 = local_154;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&(this->PersistentSelection).SelectedEdgeIDs,&local_144,(bool *)&local_154);
          local_154 = iVar9 + 1;
        } while (local_154 < iVar5);
      }
    }
  }
  else {
    iVar5 = (**(code **)((longlong)*pFVar2 + 8))(pFVar2);
    local_158 = 0;
    if (0 < iVar5) {
      do {
        iVar9 = local_158;
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  (&(this->PersistentSelection).SelectedCornerIDs,&local_14c,(bool *)&local_158);
        local_158 = iVar9 + 1;
      } while (local_158 < iVar5);
    }
  }
  this->SelectionTimestamp = this->SelectionTimestamp + 1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
            (&this->OnSelectionChanged);
  if ((((local_128.SelectedCornerIDs.Elements._8_4_ - local_128.SelectedCornerIDs.Elements._52_4_ !=
         *(int *)&(this->PersistentSelection).SelectedCornerIDs.Elements.field_0x8 -
         *(int *)&(this->PersistentSelection).SelectedCornerIDs.Elements.field_0x34) ||
       (local_128.SelectedEdgeIDs.Elements._8_4_ - local_128.SelectedEdgeIDs.Elements._52_4_ !=
        *(int *)&(this->PersistentSelection).SelectedEdgeIDs.Elements.field_0x8 -
        *(int *)&(this->PersistentSelection).SelectedEdgeIDs.Elements.field_0x34)) ||
      ((local_128.SelectedGroupIDs.Elements._8_4_ - local_128.SelectedGroupIDs.Elements._52_4_ !=
        *(int *)&(this->PersistentSelection).SelectedGroupIDs.Elements.field_0x8 -
        *(int *)&(this->PersistentSelection).SelectedGroupIDs.Elements.field_0x34 ||
       ((bVar4 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                           (&local_128.SelectedCornerIDs,
                            &(this->PersistentSelection).SelectedCornerIDs), !bVar4 ||
        (bVar4 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                           (&local_128.SelectedEdgeIDs,&(this->PersistentSelection).SelectedEdgeIDs)
        , !bVar4)))))) ||
     (bVar4 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Includes
                        (&local_128.SelectedGroupIDs,&this_00->SelectedGroupIDs), !bVar4)) {
    this->SelectionTimestamp = this->SelectionTimestamp + 1;
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSelectionChanged);
  }
  EndChangeAndEmitIfModified(this);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar7 = (**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6);
  (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x18))(lVar7 + 0x28);
  local_128.SelectedEdgeIDs.HashSize = 0;
  if (local_128.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.SelectedEdgeIDs.Elements);
  local_128.SelectedCornerIDs.HashSize = 0;
  if (local_128.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_128.SelectedCornerIDs.Elements);
  local_128.SelectedGroupIDs.HashSize = 0;
  if (local_128.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_128);
  return;
}

// SetBasePriority @ 14cbae8b0

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
UMeshTopologySelectionMechanic::SetBasePriority
          (UMeshTopologySelectionMechanic *this,FInputCapturePriority *param_1)

{
  USingleClickOrDragInputBehavior *pUVar1;
  UMouseHoverBehavior *pUVar2;
  URectangleMarqueeMechanic *this_00;
  FInputCapturePriority local_res8 [2];
  
  (this->BasePriority).Priority = param_1->Priority;
  pUVar1 = (this->ClickOrDragBehavior).field0_0x0.DebugPtr;
  if (pUVar1 != (USingleClickOrDragInputBehavior *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x2b8))();
  }
  pUVar2 = (this->HoverBehavior).field0_0x0.DebugPtr;
  if (pUVar2 != (UMouseHoverBehavior *)0x0) {
    (**(code **)(*(longlong *)pUVar2 + 0x2b8))(pUVar2,param_1);
  }
  this_00 = (this->MarqueeMechanic).field0_0x0.DebugPtr;
  if (this_00 != (URectangleMarqueeMechanic *)0x0) {
    local_res8[0].Priority = param_1->Priority + 1;
    URectangleMarqueeMechanic::SetBasePriority(this_00,local_res8);
  }
  return;
}

// SetIsEnabled @ 14cbaf5f0

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
UMeshTopologySelectionMechanic::SetIsEnabled
          (UMeshTopologySelectionMechanic *this,bool param_1,bool param_2)

{
  this->bIsEnabled = param_1;
  this->bRenderTopology = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014cbaf600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x310))();
  return;
}

// SetMarqueeSelectionUpdateType @ 14cbaf620

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
UMeshTopologySelectionMechanic::SetMarqueeSelectionUpdateType
          (UMeshTopologySelectionMechanic *this,EMarqueeSelectionUpdateType param_1)

{
  this->MarqueeSelectionUpdateType = param_1;
  return;
}

// SetSelection @ 14cbb03c0

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
UMeshTopologySelectionMechanic::SetSelection
          (UMeshTopologySelectionMechanic *this,FGroupTopologySelection *param_1,bool param_2)

{
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->PersistentSelection).SelectedGroupIDs,&param_1->SelectedGroupIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->PersistentSelection).SelectedCornerIDs,&param_1->SelectedCornerIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->PersistentSelection).SelectedEdgeIDs,&param_1->SelectedEdgeIDs);
  this->SelectionTimestamp = this->SelectionTimestamp + 1;
  if (param_2) {
    TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
              (&this->OnSelectionChanged);
  }
  return;
}

// SetShowSelectableCorners @ 14cbb1e50

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
UMeshTopologySelectionMechanic::SetShowSelectableCorners
          (UMeshTopologySelectionMechanic *this,bool param_1)

{
  this->bShowSelectableCorners = param_1;
  return;
}

// SetTransform @ 14cbb2210

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
UMeshTopologySelectionMechanic::SetTransform
          (UMeshTopologySelectionMechanic *this,TTransform<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->Rotation).XY.m128d_f64[1];
  (this->TargetTransform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
  (this->TargetTransform).Rotation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
  (this->TargetTransform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
  (this->TargetTransform).Rotation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Translation).XY.m128d_f64[1];
  (this->TargetTransform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0];
  (this->TargetTransform).Translation.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Translation).ZW.m128d_f64[1];
  (this->TargetTransform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0];
  (this->TargetTransform).Translation.ZW.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).XY.m128d_f64[1];
  (this->TargetTransform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
  (this->TargetTransform).Scale3D.XY.m128d_f64[1] = dVar1;
  dVar1 = (param_1->Scale3D).ZW.m128d_f64[1];
  (this->TargetTransform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
  (this->TargetTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
  return;
}

// Setup @ 14cbb2720

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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UMeshTopologySelectionMechanic::Setup
          (UMeshTopologySelectionMechanic *this,UInteractiveTool *param_1)

{
  FLinearColor FVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UMouseHoverBehavior *pUVar4;
  URectangleMarqueeMechanic *pUVar5;
  USingleClickOrDragInputBehavior *pUVar6;
  UMeshTopologySelectionMechanicProperties *pUVar7;
  UInteractiveToolManager *pUVar8;
  UMaterialInterface *pUVar9;
  undefined ***pppuVar10;
  TObjectPtr<UMeshTopologySelectionMechanicProperties>_u_0 TVar11;
  undefined1 *puVar12;
  undefined1 auStack_138 [32];
  undefined1 local_118 [24];
  longlong lStack_100;
  undefined1 local_f8 [128];
  code *local_78 [2];
  undefined **local_68;
  UMeshTopologySelectionMechanic *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_138;
  UInteractionMechanic::Setup((UInteractionMechanic *)this,param_1);
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_UMouseHoverBehavior_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_f8,pUVar3);
  local_f8._8_8_ = pUVar2;
  pUVar4 = (UMouseHoverBehavior *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_f8);
  if (local_f8._64_8_ != 0) {
    TVar11.DebugPtr = (UMeshTopologySelectionMechanicProperties *)(local_f8 + 0x50);
    if ((UMeshTopologySelectionMechanicProperties *)local_f8._104_8_ !=
        (UMeshTopologySelectionMechanicProperties *)0x0) {
      TVar11 = (TObjectPtr<UMeshTopologySelectionMechanicProperties>_u_0)local_f8._104_8_;
    }
    (**(code **)((TVar11.DebugPtr)->_padding_ + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMouseHoverBehavior *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->HoverBehavior).field0_0x0.DebugPtr = pUVar4;
  local_60 = (UMeshTopologySelectionMechanic *)FInputDeviceState::IsShiftKeyDown;
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
                ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&pUVar4->Modifiers,1,(TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar10 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar10 = local_50;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_60 = (UMeshTopologySelectionMechanic *)FInputDeviceState::IsCtrlKeyDown;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
                ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&((this->HoverBehavior).field0_0x0.DebugPtr)->Modifiers,2,
             (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar10 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar10 = local_50;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  pUVar4 = (this->HoverBehavior).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar4 + 800))(pUVar4,&this->field_0x38);
  pUVar4 = (this->HoverBehavior).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar4 + 0x2b8))(pUVar4,&this->BasePriority);
  (**(code **)(param_1->_padding_ + 0x2f8))(param_1,(this->HoverBehavior).field0_0x0.DebugPtr,this);
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_URectangleMarqueeMechanic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_f8,pUVar3);
  local_f8._8_8_ = pUVar2;
  pUVar5 = (URectangleMarqueeMechanic *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_f8);
  if (local_f8._64_8_ != 0) {
    TVar11.DebugPtr = (UMeshTopologySelectionMechanicProperties *)(local_f8 + 0x50);
    if ((UMeshTopologySelectionMechanicProperties *)local_f8._104_8_ !=
        (UMeshTopologySelectionMechanicProperties *)0x0) {
      TVar11 = (TObjectPtr<UMeshTopologySelectionMechanicProperties>_u_0)local_f8._104_8_;
    }
    (**(code **)((TVar11.DebugPtr)->_padding_ + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (URectangleMarqueeMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->MarqueeMechanic).field0_0x0.DebugPtr = pUVar5;
  pUVar5->bUseExternalClickDragBehavior = true;
  pUVar5 = (this->MarqueeMechanic).field0_0x0.DebugPtr;
  (**(code **)(*(longlong *)pUVar5 + 0x2b0))(pUVar5,param_1);
  local_118._0_8_ = _vcall__760__flat______;
  local_118._8_4_ = 0;
  lStack_100 = (ulonglong)(uint)local_118._12_4_ << 0x20;
  local_118._16_8_ = _vcall__760__flat______;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UMeshTopologySelectionMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &((this->MarqueeMechanic).field0_0x0.DebugPtr)->OnDragRectangleStarted,
             (UMeshTopologySelectionMechanic *)local_118,(pmf_3f5ec61d *)this);
  local_118._0_8_ = _vcall__768__flat______;
  local_118._8_4_ = 0;
  lStack_100 = (ulonglong)(uint)local_118._12_4_ << 0x20;
  local_118._16_8_ = _vcall__768__flat______;
  TMulticastDelegateRegistration<void___cdecl(FCameraRectangle_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UMeshTopologySelectionMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(FCameraRectangle_const_&),FDefaultDelegateUserPolicy>
              *)&((this->MarqueeMechanic).field0_0x0.DebugPtr)->OnDragRectangleChanged,
             (UMeshTopologySelectionMechanic *)local_118,(pmf_0b6953b9 *)this);
  local_118._0_8_ = _vcall__776__flat______;
  local_118._8_4_ = 0;
  lStack_100 = (ulonglong)(uint)local_118._12_4_ << 0x20;
  local_118._16_8_ = _vcall__776__flat______;
  TMulticastDelegateRegistration<void___cdecl(FCameraRectangle_const_&,bool),FDefaultDelegateUserPolicy>
  ::AddUObject<UMeshTopologySelectionMechanic>
            ((TMulticastDelegateRegistration<void___cdecl(FCameraRectangle_const_&,bool),FDefaultDelegateUserPolicy>
              *)&((this->MarqueeMechanic).field0_0x0.DebugPtr)->OnDragRectangleFinished,
             (UMeshTopologySelectionMechanic *)local_118,(pmf_01aa4de9 *)this);
  local_118._0_4_ = (this->BasePriority).Priority + 1;
  URectangleMarqueeMechanic::SetBasePriority
            ((this->MarqueeMechanic).field0_0x0.DebugPtr,(FInputCapturePriority *)local_118);
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = Z_Construct_UClass_USingleClickOrDragInputBehavior_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_f8,pUVar3);
  local_f8._8_8_ = pUVar2;
  pUVar6 = (USingleClickOrDragInputBehavior *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_f8);
  if (local_f8._64_8_ != 0) {
    TVar11.DebugPtr = (UMeshTopologySelectionMechanicProperties *)(local_f8 + 0x50);
    if ((UMeshTopologySelectionMechanicProperties *)local_f8._104_8_ !=
        (UMeshTopologySelectionMechanicProperties *)0x0) {
      TVar11 = (TObjectPtr<UMeshTopologySelectionMechanicProperties>_u_0)local_f8._104_8_;
    }
    (**(code **)((TVar11.DebugPtr)->_padding_ + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (USingleClickOrDragInputBehavior *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->ClickOrDragBehavior).field0_0x0.DebugPtr = pUVar6;
  pUVar5 = (this->MarqueeMechanic).field0_0x0.DebugPtr;
  puVar12 = &pUVar5->field_0x30;
  if (pUVar5 == (URectangleMarqueeMechanic *)0x0) {
    puVar12 = (undefined1 *)0x0;
  }
  (**(code **)(pUVar6->_padding_ + 0x378))(pUVar6,&this->field_0x30,puVar12);
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_60 = (UMeshTopologySelectionMechanic *)FInputDeviceState::IsShiftKeyDown;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
                ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&((this->ClickOrDragBehavior).field0_0x0.DebugPtr)->Modifiers,1,
             (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar10 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar10 = local_50;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  local_50 = (undefined ***)0x0;
  local_68 = &
             ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_60 = (UMeshTopologySelectionMechanic *)FInputDeviceState::IsCtrlKeyDown;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
                ::Call;
  FInputBehaviorModifierStates::RegisterModifier
            (&((this->ClickOrDragBehavior).field0_0x0.DebugPtr)->Modifiers,2,
             (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar10 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar10 = local_50;
    }
    (*(code *)(*pppuVar10)[2])();
  }
  pUVar6 = (this->ClickOrDragBehavior).field0_0x0.DebugPtr;
  (**(code **)(pUVar6->_padding_ + 0x2b8))(pUVar6,&this->BasePriority);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  (**(code **)(*(longlong *)pUVar2 + 0x2f8))
            (pUVar2,(this->ClickOrDragBehavior).field0_0x0.DebugPtr,this);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = UMeshTopologySelectionMechanicProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_f8,pUVar3);
  local_f8._8_8_ = this;
  pUVar7 = (UMeshTopologySelectionMechanicProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_f8);
  if (local_f8._64_8_ != 0) {
    TVar11.DebugPtr = (UMeshTopologySelectionMechanicProperties *)(local_f8 + 0x50);
    if ((UMeshTopologySelectionMechanicProperties *)local_f8._104_8_ !=
        (UMeshTopologySelectionMechanicProperties *)0x0) {
      TVar11 = (TObjectPtr<UMeshTopologySelectionMechanicProperties>_u_0)local_f8._104_8_;
    }
    (**(code **)((TVar11.DebugPtr)->_padding_ + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UMeshTopologySelectionMechanicProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->Properties).field0_0x0.DebugPtr = pUVar7;
  local_118._0_8_ = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&(pUVar7->Mechanic).WeakPtr,(FObjectPtr)local_118);
  if (this->bAddSelectionFilterPropertiesToParentTool != false) {
    (**(code **)(*(longlong *)this + 0x2d0))(this,(this->Properties).field0_0x0.DebugPtr);
  }
  pUVar7 = (this->Properties).field0_0x0.DebugPtr;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_50 = (undefined ***)0x0;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_1>,void,bool_const_&>
                ::Call;
  local_60 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar7->_padding_,&pUVar7->bSelectVertices,
             (TFunction<void___cdecl(bool_const_&)> *)local_78);
  pUVar7 = (this->Properties).field0_0x0.DebugPtr;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_2>,0,0>::
              _vftable_;
  local_50 = (undefined ***)0x0;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_2>,void,bool_const_&>
                ::Call;
  local_60 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar7->_padding_,&pUVar7->bSelectEdges,
             (TFunction<void___cdecl(bool_const_&)> *)local_78);
  pUVar7 = (this->Properties).field0_0x0.DebugPtr;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_3>,0,0>::
              _vftable_;
  local_50 = (undefined ***)0x0;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_3>,void,bool_const_&>
                ::Call;
  local_60 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar7->_padding_,&pUVar7->bSelectFaces,
             (TFunction<void___cdecl(bool_const_&)> *)local_78);
  pUVar7 = (this->Properties).field0_0x0.DebugPtr;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_4>,0,0>::
              _vftable_;
  local_50 = (undefined ***)0x0;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_4>,void,bool_const_&>
                ::Call;
  local_60 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar7->_padding_,&pUVar7->bSelectEdgeLoops,
             (TFunction<void___cdecl(bool_const_&)> *)local_78);
  pUVar7 = (this->Properties).field0_0x0.DebugPtr;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_5>,0,0>::
              _vftable_;
  local_50 = (undefined ***)0x0;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_5>,void,bool_const_&>
                ::Call;
  local_60 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar7->_padding_,&pUVar7->bSelectEdgeRings,
             (TFunction<void___cdecl(bool_const_&)> *)local_78);
  pUVar7 = (this->Properties).field0_0x0.DebugPtr;
  local_68 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UMeshTopologySelectionMechanic::Setup'::`2'::<lambda_6>,0,0>::
              _vftable_;
  local_50 = (undefined ***)0x0;
  local_78[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UMeshTopologySelectionMechanic::Setup'::__l2::<lambda_6>,void,bool_const_&>
                ::Call;
  local_60 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar7->_padding_,&pUVar7->bEnableMarquee,
             (TFunction<void___cdecl(bool_const_&)> *)local_78);
  FVar1 = FLinearColor::Red;
  (this->PolyEdgesRenderer).LineThickness = 2.0;
  (this->PolyEdgesRenderer).LineColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FLinearColor::Red;
  (this->PolyEdgesRenderer).PointSize = 8.0;
  (this->PolyEdgesRenderer).PointColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FLinearColor::Green;
  (this->HilightRenderer).LineThickness = 4.0;
  (this->HilightRenderer).LineColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  FVar1 = FLinearColor::Green;
  (this->HilightRenderer).PointSize = 10.0;
  (this->HilightRenderer).PointColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->SelectionRenderer).LineColor.field0_0x0._s_0.R = 1.0;
  *(undefined8 *)((longlong)&(this->SelectionRenderer).LineColor.field0_0x0 + 4) = 0x3f57d7d8;
  (this->SelectionRenderer).LineColor.field0_0x0._s_0.A = 1.0;
  (this->SelectionRenderer).LineThickness = 4.0;
  (this->SelectionRenderer).PointColor.field0_0x0._s_0.R = 1.0;
  *(undefined8 *)((longlong)&(this->SelectionRenderer).PointColor.field0_0x0 + 4) = 0x3f57d7d8;
  (this->SelectionRenderer).PointColor.field0_0x0._s_0.A = 1.0;
  (this->SelectionRenderer).PointSize = 10.0;
  pUVar8 = (UInteractiveToolManager *)(**(code **)(param_1->_padding_ + 0x2d8))(param_1);
  pUVar9 = ToolSetupUtil::GetSelectionMaterial(&FLinearColor::Green,pUVar8,__real_3f000000);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UMaterialInterface *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->HighlightedFaceMaterial).field0_0x0.DebugPtr = pUVar9;
  return;
}

// Shutdown @ 14cbb31d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMeshTopologySelectionMechanic::Shutdown(UMeshTopologySelectionMechanic *this)

{
  APreviewGeometryActor *this_00;
  
  this_00 = (this->PreviewGeometryActor).field0_0x0.DebugPtr;
  if (this_00 != (APreviewGeometryActor *)0x0) {
    AActor::Destroy((AActor *)this_00,false,true);
    (this->PreviewGeometryActor).field0_0x0.DebugPtr = (APreviewGeometryActor *)0x0;
    (this->DrawnTriangleSetComponent).field0_0x0.DebugPtr = (UTriangleSetComponent *)0x0;
  }
  return;
}

// StaticRegisterNativesUMeshTopologySelectionMechanic @ 14cbb45c0

void __cdecl
UMeshTopologySelectionMechanic::StaticRegisterNativesUMeshTopologySelectionMechanic(void)

{
  return;
}

// Tick @ 14cbb4a00

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
UMeshTopologySelectionMechanic::Tick(UMeshTopologySelectionMechanic *this,float param_1)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  UInteractionMechanic::Tick((UInteractionMechanic *)this,param_1);
  if ((this->MarqueeSelectionUpdateType == OnTickAndRelease) &&
     (*(void **)&this->PendingSelectionFunction != (void *)0x0)) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->PendingSelectionFunction);
    pcVar1 = *(code **)&this->PendingSelectionFunction;
    plVar5 = (longlong *)&(this->PendingSelectionFunction).field_0x10;
    plVar2 = *(longlong **)&(this->PendingSelectionFunction).field_0x28;
    plVar4 = plVar5;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3);
    if (*(longlong *)&this->PendingSelectionFunction != 0) {
      plVar2 = *(longlong **)&(this->PendingSelectionFunction).field_0x28;
      if (plVar2 != (longlong *)0x0) {
        plVar5 = plVar2;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
      *(undefined8 *)&this->PendingSelectionFunction = 0;
    }
  }
  return;
}

// TopologyHitTest @ 14cbb5310

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

bool __thiscall
UMeshTopologySelectionMechanic::TopologyHitTest
          (UMeshTopologySelectionMechanic *this,TRay<double> *param_1,FHitResult *param_2,
          FGroupTopologySelection *param_3,bool param_4)

{
  ulonglong uVar1;
  uint uVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar10;
  TVector<double> *pTVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  uint *puVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  undefined1 auVar19 [16];
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
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  double dVar67;
  undefined4 uVar68;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar77;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  double dVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar82;
  undefined4 uVar83;
  double dVar84;
  double dVar85;
  undefined1 auVar86 [16];
  double dVar98;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  double dVar113;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  double dVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  double dVar118;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auStackY_3a8 [32];
  TVector<double>_u_0 local_368;
  TVector<double>_u_0 TStack_350;
  int local_338 [2];
  TVector<double>_u_0 local_330;
  FSelectionSettings local_318 [2];
  double local_308;
  double dStack_300;
  double local_2f8;
  TVector<double>_u_0 local_2c8;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 TStack_290;
  TVector<double>_u_0 local_278;
  undefined1 local_258 [16];
  double local_248;
  double local_240;
  double dStack_238;
  double local_230;
  double local_228;
  double dStack_220;
  double local_218;
  TVector<double> local_1e0;
  TVector<double>_u_0 local_1c8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  TVector<double>_u_0 local_198;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  TVector<double> local_148;
  EIntersectionType local_130 [2];
  undefined8 local_128 [2];
  longlong local_118;
  longlong local_108 [3];
  longlong *local_f0;
  undefined1 local_e8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  local_248 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar55 = (this->TargetTransform).Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar67 = (this->TargetTransform).Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar69._0_8_ =
       (this->TargetTransform).Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar69._8_8_ =
       (this->TargetTransform).Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar40._8_4_ = SUB84(dVar67,0);
  auVar40._0_8_ = dVar55;
  uVar68 = (undefined4)((ulonglong)dVar67 >> 0x20);
  auVar40._12_4_ = uVar68;
  auVar43._8_4_ = SUB84(dVar67,0);
  auVar43._0_8_ = dVar55;
  auVar43._12_4_ = uVar68;
  local_258 = *(undefined1 (*) [16])&(param_1->Direction).field0_0x0;
  auVar44 = blendpd(auVar43,auVar69,2);
  dVar34 = auVar40._8_8_;
  dVar78 = local_258._8_8_;
  auVar101._8_4_ = SUB84(auVar69._0_8_,0);
  auVar101._0_8_ = dVar34;
  auVar101._12_4_ = (int)((ulonglong)auVar69._0_8_ >> 0x20);
  auVar107._8_4_ = SUB84(auVar69._8_8_,0);
  auVar107._0_8_ = auVar69._0_8_;
  auVar107._12_4_ = (int)((ulonglong)auVar69._8_8_ >> 0x20);
  auVar115._0_8_ = dVar78 * dVar55 - dVar34 * local_258._0_8_;
  auVar115._8_8_ = local_248 * dVar67 - auVar101._8_8_ * dVar78;
  auVar86._8_4_ = SUB84(auVar115._8_8_,0);
  auVar86._0_8_ = auVar115._0_8_;
  auVar86._12_4_ = (int)((ulonglong)auVar115._8_8_ >> 0x20);
  auVar116._8_8_ = 0;
  auVar116._0_8_ = local_248;
  auVar35 = blendpd(local_258,auVar116,2);
  auVar36._0_8_ = auVar35._0_8_ * auVar69._0_8_ - local_248 * auVar44._0_8_;
  auVar36._8_8_ = auVar35._8_8_ * auVar69._8_8_ - auVar44._8_8_ * 0.0;
  dVar84 = auVar86._8_8_ + auVar86._8_8_;
  dVar98 = auVar36._0_8_ + auVar36._0_8_;
  auVar116 = blendpd(auVar115,auVar36,2);
  uVar68 = SUB84(dVar98,0);
  auVar99._8_4_ = uVar68;
  auVar99._0_8_ = dVar84;
  uVar83 = (undefined4)((ulonglong)dVar98 >> 0x20);
  auVar99._12_4_ = uVar83;
  auVar121._8_4_ = uVar68;
  auVar121._0_8_ = dVar84;
  auVar121._12_4_ = uVar83;
  auVar79._8_4_ = uVar68;
  auVar79._0_8_ = dVar84;
  auVar79._12_4_ = uVar83;
  auVar35 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.XY.m128d_f64;
  auVar117._0_8_ = auVar116._0_8_ + auVar116._0_8_;
  auVar117._8_8_ = auVar116._8_8_ + auVar116._8_8_;
  auVar4._4_8_ = dVar67;
  auVar4._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar56._0_8_ = auVar4._0_8_ << 0x20;
  auVar56._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar56._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar100._0_8_ = auVar99._8_8_ * dVar55 - dVar84 * dVar34;
  auVar100._8_8_ = auVar117._0_8_ * dVar67 - auVar121._8_8_ * auVar69._0_8_;
  auVar116 = blendpd(auVar79,auVar117,2);
  auVar19._8_4_ = SUB84(auVar117._8_8_,0);
  auVar19._0_8_ = auVar117._0_8_;
  auVar19._12_4_ = (int)((ulonglong)auVar117._8_8_ >> 0x20);
  auVar80._0_8_ = auVar116._0_8_ * auVar69._0_8_ - auVar117._0_8_ * auVar44._0_8_;
  auVar80._8_8_ = auVar116._8_8_ * auVar69._8_8_ - auVar19._8_8_ * auVar44._8_8_;
  auVar116 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.ZW.m128d_f64;
  auVar57._8_8_ = auVar56._8_8_;
  auVar57._0_8_ = auVar116._0_8_;
  auVar119._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar35._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar35._0_4_);
  auVar119._8_4_ = _UNK_15061cc88 & auVar35._8_4_;
  auVar119._12_4_ = _UNK_15061cc8c & auVar35._12_4_;
  auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar35);
  lVar16 = -(ulonglong)(auVar119._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar17 = -(ulonglong)(auVar119._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar120._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar16 >> 0x20) & auVar35._4_4_,
                        ~(uint)lVar16 & auVar35._0_4_);
  auVar120._8_4_ = ~(uint)lVar17 & auVar35._8_4_;
  auVar120._12_4_ = ~(uint)((ulonglong)lVar17 >> 0x20) & auVar35._12_4_;
  local_2c8._s_0.X = 0.0;
  local_2c8._s_0.Y = 0.0;
  auVar44._8_4_ = SUB84(auVar100._8_8_,0);
  auVar44._0_8_ = auVar100._0_8_;
  auVar44._12_4_ = (int)((ulonglong)auVar100._8_8_ >> 0x20);
  lVar16 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar116._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar116._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar70._0_8_ =
       (this->TargetTransform).Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar70._8_8_ =
       (this->TargetTransform).Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  TStack_350._s_0.X = auVar120._0_8_ * (dVar84 * auVar107._8_8_ + local_258._0_8_ + auVar44._8_8_);
  TStack_350._s_0.Y = auVar120._8_8_ * (dVar98 * auVar69._8_8_ + dVar78 + auVar80._0_8_);
  auVar101 = blendpd(auVar100,auVar80,2);
  auVar35 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar57);
  dVar84 = (this->TargetTransform).Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar98 = (this->TargetTransform).Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_218 = (param_1->Origin).field0_0x0._s_0.Z;
  auVar45._8_4_ = SUB84(dVar98,0);
  auVar45._0_8_ = dVar84;
  uVar68 = (undefined4)((ulonglong)dVar98 >> 0x20);
  auVar45._12_4_ = uVar68;
  dVar34 = local_218 - (this->TargetTransform).Translation.ZW.m128d_f64[0];
  auVar116 = blendpd(auVar45,auVar70,2);
  local_228 = (param_1->Origin).field0_0x0._s_0.X;
  dStack_220 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar114 = local_228 - (this->TargetTransform).Translation.XY.m128d_f64[0];
  dVar118 = dStack_220 - (this->TargetTransform).Translation.XY.m128d_f64[1];
  TStack_350._s_0.Z =
       (local_248 + auVar117._0_8_ * auVar107._8_8_ + auVar101._0_8_) *
       (double)CONCAT44(~(uint)((ulonglong)lVar16 >> 0x20) & auVar35._4_4_,
                        ~(uint)lVar16 & auVar35._0_4_);
  auVar41._8_4_ = SUB84(dVar98,0);
  auVar41._0_8_ = dVar84;
  auVar41._12_4_ = uVar68;
  auVar108._8_4_ = SUB84(dVar118,0);
  auVar108._0_8_ = dVar114;
  uVar68 = (undefined4)((ulonglong)dVar118 >> 0x20);
  auVar108._12_4_ = uVar68;
  dVar55 = auVar41._8_8_;
  auVar37._8_4_ = SUB84(dVar118,0);
  auVar37._0_8_ = dVar114;
  auVar37._12_4_ = uVar68;
  auVar20._8_4_ = SUB84(auVar70._0_8_,0);
  auVar20._0_8_ = dVar55;
  auVar20._12_4_ = (int)((ulonglong)auVar70._0_8_ >> 0x20);
  auVar35._8_8_ = 0;
  auVar35._0_8_ = dVar34;
  auVar35 = blendpd(auVar37,auVar35,2);
  auVar109._0_8_ = auVar108._8_8_ * dVar84 - dVar55 * dVar114;
  auVar109._8_8_ = dVar34 * dVar98 - auVar20._8_8_ * dVar118;
  auVar81._8_4_ = SUB84(auVar109._8_8_,0);
  auVar81._0_8_ = auVar109._0_8_;
  auVar81._12_4_ = (int)((ulonglong)auVar109._8_8_ >> 0x20);
  auVar102._8_4_ = SUB84(auVar70._8_8_,0);
  auVar102._0_8_ = auVar70._0_8_;
  auVar102._12_4_ = (int)((ulonglong)auVar70._8_8_ >> 0x20);
  dVar67 = auVar116._8_8_;
  auVar38._0_8_ = auVar35._0_8_ * auVar70._0_8_ - dVar34 * auVar116._0_8_;
  auVar38._8_8_ = auVar35._8_8_ * auVar70._8_8_ - dVar67 * 0.0;
  dVar78 = auVar81._8_8_ + auVar81._8_8_;
  dVar82 = auVar38._0_8_ + auVar38._0_8_;
  auVar101 = blendpd(auVar109,auVar38,2);
  auVar35 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.XY.m128d_f64;
  uVar68 = SUB84(dVar82,0);
  auVar87._8_4_ = uVar68;
  auVar87._0_8_ = dVar78;
  uVar83 = (undefined4)((ulonglong)dVar82 >> 0x20);
  auVar87._12_4_ = uVar83;
  auVar21._8_4_ = uVar68;
  auVar21._0_8_ = dVar78;
  auVar21._12_4_ = uVar83;
  auVar121 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar35);
  auVar110._0_8_ = auVar101._0_8_ + auVar101._0_8_;
  auVar110._8_8_ = auVar101._8_8_ + auVar101._8_8_;
  auVar58._8_4_ = uVar68;
  auVar58._0_8_ = dVar78;
  auVar58._12_4_ = uVar83;
  auVar88._0_8_ = auVar87._8_8_ * dVar84 - dVar78 * dVar55;
  auVar88._8_8_ = auVar110._0_8_ * dVar98 - auVar21._8_8_ * auVar70._0_8_;
  auVar101 = blendpd(auVar58,auVar110,2);
  auVar22._8_4_ = SUB84(auVar110._8_8_,0);
  auVar22._0_8_ = auVar110._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar110._8_8_ >> 0x20);
  auVar5._4_8_ = dVar67;
  auVar5._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar46._0_8_ = auVar5._0_8_ << 0x20;
  auVar46._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar46._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar59._0_8_ = auVar101._0_8_ * auVar70._0_8_ - auVar110._0_8_ * auVar116._0_8_;
  auVar59._8_8_ = auVar101._8_8_ * auVar70._8_8_ - auVar22._8_8_ * dVar67;
  auVar116 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.ZW.m128d_f64;
  auVar47._8_8_ = auVar46._8_8_;
  auVar47._0_8_ = auVar116._0_8_;
  auVar23._8_4_ = SUB84(auVar88._8_8_,0);
  auVar23._0_8_ = auVar88._0_8_;
  auVar23._12_4_ = (int)((ulonglong)auVar88._8_8_ >> 0x20);
  auVar71._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar35._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar35._0_4_);
  auVar71._8_4_ = _UNK_15061cc88 & auVar35._8_4_;
  auVar71._12_4_ = _UNK_15061cc8c & auVar35._12_4_;
  lVar16 = -(ulonglong)(auVar71._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar17 = -(ulonglong)(auVar71._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar72._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar16 >> 0x20) & auVar121._4_4_,
                        ~(uint)lVar16 & auVar121._0_4_);
  auVar72._8_4_ = ~(uint)lVar17 & auVar121._8_4_;
  auVar72._12_4_ = ~(uint)((ulonglong)lVar17 >> 0x20) & auVar121._12_4_;
  lVar16 = -(ulonglong)
            ((double)CONCAT44(auVar116._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar116._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar116 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar47);
  local_368._s_0.X = auVar72._0_8_ * (dVar78 * auVar102._8_8_ + dVar114 + auVar23._8_8_);
  local_368._s_0.Y = auVar72._8_8_ * (dVar82 * auVar70._8_8_ + dVar118 + auVar59._0_8_);
  auVar35 = blendpd(auVar88,auVar59,2);
  local_368._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar16 >> 0x20) & auVar116._4_4_,
                        ~(uint)lVar16 & auVar116._0_4_) *
       (auVar110._0_8_ * auVar102._8_8_ + dVar34 + auVar35._0_8_);
  local_330._s_0.X = TStack_350._s_0.X;
  local_330._s_0.Y = TStack_350._s_0.Y;
  local_308 = local_368._s_0.X;
  dStack_300 = local_368._s_0.Y;
  local_2f8 = local_368._s_0.Z;
  local_240 = TStack_350._s_0.X;
  dStack_238 = TStack_350._s_0.Y;
  local_230 = TStack_350._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&TStack_350._s_0,__real_3e45798ee0000000);
  auVar39._0_8_ = TStack_350._s_0.Z * TStack_350._s_0.Z;
  auVar39._8_8_ = 0;
  auVar42._0_8_ =
       TStack_350._s_0.X * TStack_350._s_0.X + TStack_350._s_0.Y * TStack_350._s_0.Y + auVar39._0_8_
  ;
  auVar42._8_8_ = 0;
  auVar35 = sqrtpd(auVar39,auVar42);
  if (auVar35._0_8_ <= 0.0) {
    TStack_350._s_0.X = 0.0;
    TStack_350._s_0.Y = 0.0;
    TStack_350._s_0.Z = 0.0;
  }
  else {
    dVar34 = __real_3ff0000000000000 / auVar35._0_8_;
    TStack_350._s_0.X = TStack_350._s_0.X * dVar34;
    TStack_350._s_0.Y = TStack_350._s_0.Y * dVar34;
    TStack_350._s_0.Z = TStack_350._s_0.Z * dVar34;
  }
  GetTopoSelectorSettings(this,SUB81(local_318,0));
  if (((this->TopoSelector).Object == (FMeshTopologySelector *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    uVar7 = (*pcVar3)();
    return (bool)uVar7;
  }
  bVar6 = FMeshTopologySelector::FindSelectedElement
                    ((this->TopoSelector).Object,local_318,(TRay<double> *)&local_368._s_0,param_3,
                     (TVector<double> *)&local_330._s_0,(TVector<double> *)&local_2c8._s_0,local_338
                    );
  if (!bVar6) {
    return false;
  }
  if (*(int *)&(param_3->SelectedCornerIDs).Elements.field_0x8 -
      *(int *)&(param_3->SelectedCornerIDs).Elements.field_0x34 < 1) {
    if (0 < *(int *)&(param_3->SelectedEdgeIDs).Elements.field_0x8 -
            *(int *)&(param_3->SelectedEdgeIDs).Elements.field_0x34) {
      iVar9 = UE::Geometry::FGroupTopologySelection::GetASelectedEdgeID(param_3);
      param_2->FaceIndex = iVar9;
      fVar18 = (float)((local_330._s_0.Y - local_368._s_0.Y) * TStack_350._s_0.Y +
                       (local_330._s_0.X - local_368._s_0.X) * TStack_350._s_0.X +
                      (local_330._s_0.Z - local_368._s_0.Z) * TStack_350._s_0.Z);
      param_2->Distance = fVar18;
      dVar34 = (double)fVar18;
      auVar35 = *(undefined1 (*) [16])(this->TargetTransform).Rotation.XY.m128d_f64;
      auVar116 = *(undefined1 (*) [16])(this->TargetTransform).Rotation.ZW.m128d_f64;
      dVar55 = auVar116._0_8_;
      auVar101 = blendpd(auVar35,auVar116,2);
      auVar104._0_8_ =
           (TStack_350._s_0.Z * dVar34 + local_368._s_0.Z) *
           (this->TargetTransform).Scale3D.ZW.m128d_f64[0];
      auVar104._8_8_ = (this->TargetTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar82 = (this->TargetTransform).Scale3D.XY.m128d_f64[0] *
               (TStack_350._s_0.X * dVar34 + local_368._s_0.X);
      dVar114 = (this->TargetTransform).Scale3D.XY.m128d_f64[1] *
                (TStack_350._s_0.Y * dVar34 + local_368._s_0.Y);
      dVar84 = (this->TargetTransform).Rotation.ZW.m128d_f64[1];
      auVar92._8_4_ = SUB84(dVar114,0);
      auVar92._0_8_ = dVar82;
      uVar68 = (undefined4)((ulonglong)dVar114 >> 0x20);
      auVar92._12_4_ = uVar68;
      auVar93._0_8_ = auVar92._8_8_ * auVar35._0_8_ - auVar35._8_8_ * dVar82;
      auVar93._8_8_ = auVar104._0_8_ * auVar35._8_8_ - dVar55 * dVar114;
      auVar26._8_4_ = SUB84(dVar114,0);
      auVar26._0_8_ = dVar82;
      auVar26._12_4_ = uVar68;
      auVar35 = blendpd(auVar26,auVar104,2);
      auVar74._8_4_ = SUB84(auVar93._8_8_,0);
      auVar74._0_8_ = auVar93._0_8_;
      auVar74._12_4_ = (int)((ulonglong)auVar93._8_8_ >> 0x20);
      auVar27._0_8_ = auVar35._0_8_ * dVar55 - auVar101._0_8_ * auVar104._0_8_;
      auVar27._8_8_ = auVar35._8_8_ * auVar116._8_8_ - auVar101._8_8_ * auVar104._8_8_;
      auVar35 = *(undefined1 (*) [16])(this->TargetTransform).Rotation.XY.m128d_f64;
      auVar101 = blendpd(auVar93,auVar27,2);
      dVar98 = auVar74._8_8_ + auVar74._8_8_;
      dVar78 = auVar27._0_8_ + auVar27._0_8_;
      auVar94._0_8_ = auVar101._0_8_ + auVar101._0_8_;
      auVar94._8_8_ = auVar101._8_8_ + auVar101._8_8_;
      auVar61._8_4_ = SUB84(dVar78,0);
      auVar61._0_8_ = dVar98;
      uVar68 = (undefined4)((ulonglong)dVar78 >> 0x20);
      auVar61._12_4_ = uVar68;
      auVar49._8_4_ = SUB84(dVar78,0);
      auVar49._0_8_ = dVar98;
      auVar49._12_4_ = uVar68;
      auVar101 = blendpd(auVar49,auVar94,2);
      auVar62._0_8_ = auVar61._8_8_ * auVar35._0_8_ - auVar35._8_8_ * dVar98;
      auVar62._8_8_ = auVar94._0_8_ * auVar35._8_8_ - dVar55 * dVar78;
      auVar28._8_4_ = SUB84(auVar62._8_8_,0);
      auVar28._0_8_ = auVar62._0_8_;
      auVar28._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
      auVar35 = blendpd(auVar35,auVar116,2);
      auVar50._0_8_ = auVar101._0_8_ * dVar55 - auVar35._0_8_ * auVar94._0_8_;
      auVar50._8_8_ = auVar101._8_8_ * auVar116._8_8_ - auVar35._8_8_ * auVar94._8_8_;
      auVar35 = blendpd(auVar62,auVar50,2);
      dVar34 = (this->TargetTransform).Translation.XY.m128d_f64[0];
      dVar67 = (this->TargetTransform).Translation.XY.m128d_f64[1];
      dVar55 = (this->TargetTransform).Translation.ZW.m128d_f64[0];
      param_2->Item = local_338[0];
      *(double *)&param_2->ImpactPoint = dVar98 * dVar84 + dVar82 + auVar28._8_8_ + dVar34;
      *(double *)&(param_2->ImpactPoint).field_0x8 =
           dVar78 * dVar84 + dVar114 + auVar50._0_8_ + dVar67;
      *(double *)&(param_2->ImpactPoint).field_0x10 =
           auVar94._0_8_ * dVar84 + auVar104._0_8_ + auVar35._0_8_ + dVar55;
      return true;
    }
    pTVar10 = UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)>
              ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*___cdecl(void)>
                            *)&this->GetSpatialFunc);
    local_128[0] = __real_7fefffffffffffff;
    local_118 = 0;
    local_f0 = (longlong *)0x0;
    local_e8 = 0;
    iVar9 = (**(code **)(pTVar10->_padding_ + 0x40))(pTVar10,&local_368,local_128);
    if (local_118 != 0) {
      plVar13 = local_108;
      if (local_f0 != (longlong *)0x0) {
        plVar13 = local_f0;
      }
      (**(code **)(*plVar13 + 0x10))();
    }
    if (iVar9 == -1) {
      return true;
    }
    UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
              (pTVar10->Mesh,iVar9,(TVector<double> *)&local_2a8._s_0,
               (TVector<double> *)&TStack_290._s_0,(TVector<double> *)&local_278._s_0);
    local_1c8._s_0.X = local_368._s_0.X;
    local_1c8._s_0.Y = local_368._s_0.Y;
    local_1c8._s_0.Z = local_368._s_0.Z;
    dStack_1b0 = TStack_350._s_0.X;
    local_1a8 = TStack_350._s_0.Y;
    dStack_1a0 = TStack_350._s_0.Z;
    local_198._s_0.X = local_2a8._s_0.X;
    local_198._s_0.Y = local_2a8._s_0.Y;
    local_198._s_0.Z = local_2a8._s_0.Z;
    dStack_180 = TStack_290._s_0.X;
    local_178 = TStack_290._s_0.Y;
    dStack_170 = TStack_290._s_0.Z;
    local_168 = local_278._s_0.X;
    dStack_160 = local_278._s_0.Y;
    local_158 = local_278._s_0.Z;
    bVar6 = UE::Geometry::TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                      ((TRay<double> *)&local_1c8._s_0,(TTriangle3<double> *)&local_198._s_0,
                       &local_150,&local_148,local_130);
    if (!bVar6) {
      return false;
    }
    param_2->FaceIndex = iVar9;
    param_2->Distance = (float)local_150;
    pTVar11 = UE::Geometry::FDynamicMesh3::GetTriNormal(pTVar10->Mesh,&local_1e0,iVar9);
    auVar35 = *(undefined1 (*) [16])(this->TargetTransform).Rotation.ZW.m128d_f64;
    dVar67 = auVar35._0_8_;
    auVar116 = *(undefined1 (*) [16])(this->TargetTransform).Rotation.XY.m128d_f64;
    dVar55 = (this->TargetTransform).Rotation.ZW.m128d_f64[1];
    auVar101 = *(undefined1 (*) [16])&pTVar11->field0_0x0;
    dVar34 = (pTVar11->field0_0x0)._s_0.Z;
    auVar111._8_8_ = 0;
    auVar111._0_8_ = dVar34;
    auVar121 = blendpd(auVar116,auVar35,2);
    dVar78 = auVar101._8_8_;
    auVar105._0_8_ = dVar78 * auVar116._0_8_ - auVar116._8_8_ * auVar101._0_8_;
    auVar105._8_8_ = dVar34 * auVar116._8_8_ - dVar67 * dVar78;
    auVar116 = blendpd(auVar101,auVar111,2);
    auVar75._8_4_ = SUB84(auVar105._8_8_,0);
    auVar75._0_8_ = auVar105._0_8_;
    auVar75._12_4_ = (int)((ulonglong)auVar105._8_8_ >> 0x20);
    auVar29._0_8_ = auVar116._0_8_ * dVar67 - auVar121._0_8_ * dVar34;
    auVar29._8_8_ = auVar116._8_8_ * auVar35._8_8_ - auVar121._8_8_ * 0.0;
    auVar116 = *(undefined1 (*) [16])(this->TargetTransform).Rotation.XY.m128d_f64;
    auVar121 = blendpd(auVar105,auVar29,2);
    auVar106._0_8_ = auVar121._0_8_ + auVar121._0_8_;
    auVar106._8_8_ = auVar121._8_8_ + auVar121._8_8_;
    dVar84 = auVar75._8_8_ + auVar75._8_8_;
    dVar98 = auVar29._0_8_ + auVar29._0_8_;
    auVar63._8_4_ = SUB84(dVar98,0);
    auVar63._0_8_ = dVar84;
    uVar68 = (undefined4)((ulonglong)dVar98 >> 0x20);
    auVar63._12_4_ = uVar68;
    auVar51._8_4_ = SUB84(dVar98,0);
    auVar51._0_8_ = dVar84;
    auVar51._12_4_ = uVar68;
    auVar121 = blendpd(auVar116,auVar35,2);
    auVar64._0_8_ = auVar63._8_8_ * auVar116._0_8_ - auVar116._8_8_ * dVar84;
    auVar64._8_8_ = auVar106._0_8_ * auVar116._8_8_ - dVar67 * dVar98;
    auVar116 = blendpd(auVar51,auVar106,2);
    auVar30._8_4_ = SUB84(auVar64._8_8_,0);
    auVar30._0_8_ = auVar64._0_8_;
    auVar30._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
    auVar52._0_8_ = auVar116._0_8_ * dVar67 - auVar121._0_8_ * auVar106._0_8_;
    auVar52._8_8_ = auVar116._8_8_ * auVar35._8_8_ - auVar121._8_8_ * auVar106._8_8_;
    *(double *)&param_2->Normal = dVar84 * dVar55 + auVar101._0_8_ + auVar30._8_8_;
    *(double *)&(param_2->Normal).field_0x8 = dVar98 * dVar55 + dVar78 + auVar52._0_8_;
    auVar35 = blendpd(auVar64,auVar52,2);
    *(double *)&(param_2->Normal).field_0x10 = auVar106._0_8_ * dVar55 + dVar34 + auVar35._0_8_;
    auVar112._0_8_ =
         (TStack_350._s_0.Z * local_150 + local_368._s_0.Z) *
         (this->TargetTransform).Scale3D.ZW.m128d_f64[0];
    auVar112._8_8_ = (this->TargetTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar34 = (this->TargetTransform).Rotation.ZW.m128d_f64[1];
    auVar35 = *(undefined1 (*) [16])(this->TargetTransform).Rotation.ZW.m128d_f64;
    dVar67 = auVar35._0_8_;
    dVar118 = (this->TargetTransform).Scale3D.XY.m128d_f64[0] *
              (TStack_350._s_0.X * local_150 + local_368._s_0.X);
    dVar113 = (this->TargetTransform).Scale3D.XY.m128d_f64[1] *
              (TStack_350._s_0.Y * local_150 + local_368._s_0.Y);
    auVar116 = *(undefined1 (*) [16])(this->TargetTransform).Rotation.XY.m128d_f64;
    auVar95._8_4_ = SUB84(dVar113,0);
    auVar95._0_8_ = dVar118;
    uVar68 = (undefined4)((ulonglong)dVar113 >> 0x20);
    auVar95._12_4_ = uVar68;
    auVar96._0_8_ = auVar95._8_8_ * auVar116._0_8_ - auVar116._8_8_ * dVar118;
    auVar96._8_8_ = auVar112._0_8_ * auVar116._8_8_ - dVar67 * dVar113;
    auVar101 = blendpd(auVar116,auVar35,2);
    auVar76._8_4_ = SUB84(auVar96._8_8_,0);
    auVar76._0_8_ = auVar96._0_8_;
    auVar76._12_4_ = (int)((ulonglong)auVar96._8_8_ >> 0x20);
    auVar31._8_4_ = SUB84(dVar113,0);
    auVar31._0_8_ = dVar118;
    auVar31._12_4_ = uVar68;
    auVar116 = blendpd(auVar31,auVar112,2);
    auVar32._0_8_ = auVar116._0_8_ * dVar67 - auVar101._0_8_ * auVar112._0_8_;
    auVar32._8_8_ = auVar116._8_8_ * auVar35._8_8_ - auVar101._8_8_ * auVar112._8_8_;
    auVar116 = *(undefined1 (*) [16])(this->TargetTransform).Rotation.XY.m128d_f64;
    auVar101 = blendpd(auVar96,auVar32,2);
    dVar114 = auVar76._8_8_ + auVar76._8_8_;
    dVar77 = auVar32._0_8_ + auVar32._0_8_;
    auVar97._0_8_ = auVar101._0_8_ + auVar101._0_8_;
    auVar97._8_8_ = auVar101._8_8_ + auVar101._8_8_;
    auVar65._8_4_ = SUB84(dVar77,0);
    auVar65._0_8_ = dVar114;
    uVar68 = (undefined4)((ulonglong)dVar77 >> 0x20);
    auVar65._12_4_ = uVar68;
    auVar53._8_4_ = SUB84(dVar77,0);
    auVar53._0_8_ = dVar114;
    auVar53._12_4_ = uVar68;
    dVar78 = auVar65._8_8_ * auVar116._0_8_;
    dVar82 = auVar97._0_8_ * auVar116._8_8_;
    auVar121 = blendpd(auVar53,auVar97,2);
    auVar101 = blendpd(auVar116,auVar35,2);
    dVar84 = auVar101._0_8_ * auVar97._0_8_;
    dVar98 = auVar101._8_8_ * auVar97._8_8_;
    dVar55 = auVar116._8_8_ * dVar114;
    dVar67 = dVar67 * dVar77;
    dVar85 = auVar97._0_8_ * dVar34 + auVar112._0_8_;
    dVar118 = dVar114 * dVar34 + dVar118;
    dVar113 = dVar77 * dVar34 + dVar113;
  }
  else {
    iVar9 = *(int *)&(param_3->SelectedCornerIDs).Elements.field_0x28;
    iVar12 = 0;
    iVar14 = 0;
    iVar8 = iVar12;
    if (iVar9 != 0) {
      puVar15 = *(uint **)&(param_3->SelectedCornerIDs).Elements.field_0x20;
      if (puVar15 == (uint *)0x0) {
        puVar15 = (uint *)&(param_3->SelectedCornerIDs).Elements.field_0x10;
      }
      uVar2 = *puVar15;
      while (uVar2 == 0) {
        lVar16 = (longlong)iVar12;
        iVar14 = iVar14 + 0x20;
        iVar12 = iVar12 + 1;
        iVar8 = iVar9;
        if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14cbb5882;
        uVar2 = puVar15[lVar16 + 1];
      }
      uVar1 = (ulonglong)(-uVar2 & uVar2) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar8 = (int)lVar16 + -1 + iVar14;
      if (iVar9 < iVar8) {
        iVar8 = iVar9;
      }
    }
LAB_14cbb5882:
    param_2->FaceIndex =
         *(int *)(*(longlong *)&(param_3->SelectedCornerIDs).Elements + (longlong)iVar8 * 0xc);
    fVar18 = (float)((local_330._s_0.Y - local_368._s_0.Y) * TStack_350._s_0.Y +
                     (local_330._s_0.X - local_368._s_0.X) * TStack_350._s_0.X +
                    (local_330._s_0.Z - local_368._s_0.Z) * TStack_350._s_0.Z);
    param_2->Distance = fVar18;
    dVar34 = (double)fVar18;
    auVar116 = *(undefined1 (*) [16])(this->TargetTransform).Rotation.XY.m128d_f64;
    auVar35 = *(undefined1 (*) [16])(this->TargetTransform).Rotation.ZW.m128d_f64;
    dVar67 = auVar35._0_8_;
    auVar101 = blendpd(auVar116,auVar35,2);
    auVar103._0_8_ =
         (TStack_350._s_0.Z * dVar34 + local_368._s_0.Z) *
         (this->TargetTransform).Scale3D.ZW.m128d_f64[0];
    auVar103._8_8_ = (this->TargetTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar118 = (this->TargetTransform).Scale3D.XY.m128d_f64[0] *
              (TStack_350._s_0.X * dVar34 + local_368._s_0.X);
    dVar113 = (this->TargetTransform).Scale3D.XY.m128d_f64[1] *
              (TStack_350._s_0.Y * dVar34 + local_368._s_0.Y);
    dVar34 = (this->TargetTransform).Rotation.ZW.m128d_f64[1];
    auVar89._8_4_ = SUB84(dVar113,0);
    auVar89._0_8_ = dVar118;
    uVar68 = (undefined4)((ulonglong)dVar113 >> 0x20);
    auVar89._12_4_ = uVar68;
    auVar90._0_8_ = auVar89._8_8_ * auVar116._0_8_ - auVar116._8_8_ * dVar118;
    auVar90._8_8_ = auVar103._0_8_ * auVar116._8_8_ - dVar67 * dVar113;
    auVar24._8_4_ = SUB84(dVar113,0);
    auVar24._0_8_ = dVar118;
    auVar24._12_4_ = uVar68;
    auVar116 = blendpd(auVar24,auVar103,2);
    auVar73._8_4_ = SUB84(auVar90._8_8_,0);
    auVar73._0_8_ = auVar90._0_8_;
    auVar73._12_4_ = (int)((ulonglong)auVar90._8_8_ >> 0x20);
    auVar25._0_8_ = auVar116._0_8_ * dVar67 - auVar101._0_8_ * auVar103._0_8_;
    auVar25._8_8_ = auVar116._8_8_ * auVar35._8_8_ - auVar101._8_8_ * auVar103._8_8_;
    auVar116 = *(undefined1 (*) [16])(this->TargetTransform).Rotation.XY.m128d_f64;
    auVar101 = blendpd(auVar90,auVar25,2);
    dVar114 = auVar73._8_8_ + auVar73._8_8_;
    dVar77 = auVar25._0_8_ + auVar25._0_8_;
    auVar91._0_8_ = auVar101._0_8_ + auVar101._0_8_;
    auVar91._8_8_ = auVar101._8_8_ + auVar101._8_8_;
    auVar60._8_4_ = SUB84(dVar77,0);
    auVar60._0_8_ = dVar114;
    uVar68 = (undefined4)((ulonglong)dVar77 >> 0x20);
    auVar60._12_4_ = uVar68;
    auVar48._8_4_ = SUB84(dVar77,0);
    auVar48._0_8_ = dVar114;
    auVar48._12_4_ = uVar68;
    dVar78 = auVar60._8_8_ * auVar116._0_8_;
    dVar82 = auVar91._0_8_ * auVar116._8_8_;
    auVar121 = blendpd(auVar48,auVar91,2);
    auVar101 = blendpd(auVar116,auVar35,2);
    dVar84 = auVar101._0_8_ * auVar91._0_8_;
    dVar98 = auVar101._8_8_ * auVar91._8_8_;
    dVar55 = auVar116._8_8_ * dVar114;
    dVar67 = dVar67 * dVar77;
    dVar85 = auVar91._0_8_ * dVar34 + auVar103._0_8_;
    dVar118 = dVar114 * dVar34 + dVar118;
    dVar113 = dVar77 * dVar34 + dVar113;
  }
  auVar66._0_8_ = dVar78 - dVar55;
  auVar66._8_8_ = dVar82 - dVar67;
  auVar33._8_4_ = SUB84(auVar66._8_8_,0);
  auVar33._0_8_ = auVar66._0_8_;
  auVar33._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
  auVar54._0_8_ = auVar121._0_8_ * auVar35._0_8_ - dVar84;
  auVar54._8_8_ = auVar121._8_8_ * auVar35._8_8_ - dVar98;
  auVar35 = blendpd(auVar66,auVar54,2);
  dVar55 = (this->TargetTransform).Translation.XY.m128d_f64[1];
  dVar34 = (this->TargetTransform).Translation.ZW.m128d_f64[0];
  *(double *)&param_2->ImpactPoint =
       dVar118 + auVar33._8_8_ + (this->TargetTransform).Translation.XY.m128d_f64[0];
  *(double *)&(param_2->ImpactPoint).field_0x8 = dVar113 + auVar54._0_8_ + dVar55;
  *(double *)&(param_2->ImpactPoint).field_0x10 = dVar85 + auVar35._0_8_ + dVar34;
  return true;
}

// TopologyHitTest @ 14cbb5f70

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
UMeshTopologySelectionMechanic::TopologyHitTest
          (UMeshTopologySelectionMechanic *this,TRay<double> *param_1,FHitResult *param_2,
          bool param_3)

{
  bool bVar1;
  undefined1 auStack_148 [32];
  FGroupTopologySelection local_118;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_118);
  bVar1 = TopologyHitTest(this,param_1,param_2,&local_118,param_3);
  local_118.SelectedEdgeIDs.HashSize = 0;
  if (local_118.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_118.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_118.SelectedEdgeIDs.Elements);
  local_118.SelectedCornerIDs.HashSize = 0;
  if (local_118.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_118.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_118.SelectedCornerIDs.Elements);
  local_118.SelectedGroupIDs.HashSize = 0;
  if (local_118.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_118.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_118);
  return bVar1;
}

// UpdateHighlight @ 14cbb7c30

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
UMeshTopologySelectionMechanic::UpdateHighlight
          (UMeshTopologySelectionMechanic *this,TRay<double> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Selection\\MeshTopologySelectionMechanic.h"
             ,0xff,L"Pure virtual not implemented (%s)");
  return false;
}

// UpdateMarqueeEnabled @ 14cbb8a40

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
UMeshTopologySelectionMechanic::UpdateMarqueeEnabled(UMeshTopologySelectionMechanic *this)

{
  UMeshTopologySelectionMechanicProperties *pUVar1;
  
  if (((this->bIsEnabled != false) &&
      (pUVar1 = (this->Properties).field0_0x0.DebugPtr, pUVar1->bEnableMarquee != false)) &&
     (((pUVar1->bSelectVertices != false ||
       (((pUVar1->bSelectEdges != false || (pUVar1->bSelectFaces != false)) ||
        (pUVar1->bSelectEdgeLoops != false)))) || (pUVar1->bSelectEdgeRings != false)))) {
    URectangleMarqueeMechanic::SetIsEnabled((this->MarqueeMechanic).field0_0x0.DebugPtr,true);
    return;
  }
  URectangleMarqueeMechanic::SetIsEnabled((this->MarqueeMechanic).field0_0x0.DebugPtr,false);
  return;
}

// UpdateSelection @ 14cbb9500

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
UMeshTopologySelectionMechanic::UpdateSelection
          (UMeshTopologySelectionMechanic *this,TRay<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingComponents\\Public\\Selection\\MeshTopologySelectionMechanic.h"
             ,0x10f,L"Pure virtual not implemented (%s)");
  return false;
}

