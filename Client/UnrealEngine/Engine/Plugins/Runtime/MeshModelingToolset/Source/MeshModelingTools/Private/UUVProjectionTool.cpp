// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 35

// StaticClass @ 14cd43350

UClass * __cdecl UUVProjectionTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVProjectionTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVProjectionTool",
               &Z_Registration_Info_UClass_UUVProjectionTool.InnerSingleton,
               StaticRegisterNativesUUVProjectionTool,0x520,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVProjectionTool>,
               InternalVTableHelperCtorCaller<UUVProjectionTool>,local_res8,
               USingleTargetWithSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVProjectionTool.InnerSingleton;
}

// UUVProjectionTool @ 14cd51950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UUVProjectionTool * __thiscall
UUVProjectionTool::UUVProjectionTool(UUVProjectionTool *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  USingleTargetWithSelectionTool::USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &___7UUVProjectionTool__6B_;
  (this->UVChannelProperties).field0_0x0.DebugPtr = (UMeshUVChannelProperties *)0x0;
  (this->BasicProperties).field0_0x0.DebugPtr = (UUVProjectionToolProperties *)0x0;
  (this->EditActions).field0_0x0.DebugPtr = (UUVProjectionToolEditActions *)0x0;
  (this->MaterialSettings).field0_0x0.DebugPtr = (UExistingMeshMaterialProperties *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->CheckerMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->TransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->TransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->OperatorFactory).field0_0x0.DebugPtr = (UUVProjectionOperatorFactory *)0x0;
  (this->EdgeRenderer).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  (this->InputMesh).Object = (FDynamicMesh3 *)0x0;
  (this->InputMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->TriangleROI).Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  (this->TriangleROI).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->VertexROI).Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  (this->VertexROI).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->InputMeshROISpatial).Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  (this->InputMeshROISpatial).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->TriangleROISet).Elements = 0;
  *(undefined8 *)&(this->TriangleROISet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TriangleROISet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TriangleROISet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TriangleROISet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleROISet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriangleROISet).Elements.field_0x34 = 0;
  (this->TriangleROISet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TriangleROISet).HashSize = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->WorldTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->WorldTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->WorldTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->WorldTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->WorldTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->WorldTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->WorldBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->WorldBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->WorldBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->WorldBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->WorldBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->WorldBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->InitialTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->InitialTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->InitialTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->InitialTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->InitialTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->InitialTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->DimensionsWatcher = -1;
  this->DimensionsModeWatcher = -1;
  this->bTransformModified = false;
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
  FToolDataVisualizer::FToolDataVisualizer(&this->ProjectionShapeVisualizer);
  (this->SetPlaneCtrlClickBehaviorTarget).Ptr = (FSelectClickedAction *)0x0;
  (this->ClickToSetPlaneBehavior).field0_0x0.DebugPtr = (USingleClickInputBehavior *)0x0;
  this->bHavePendingAction = false;
  return this;
}

// UUVProjectionTool @ 14cd51bf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UUVProjectionTool * __thiscall UUVProjectionTool::UUVProjectionTool(UUVProjectionTool *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  USingleTargetWithSelectionTool::USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &___7UUVProjectionTool__6B_;
  (this->UVChannelProperties).field0_0x0.DebugPtr = (UMeshUVChannelProperties *)0x0;
  (this->BasicProperties).field0_0x0.DebugPtr = (UUVProjectionToolProperties *)0x0;
  (this->EditActions).field0_0x0.DebugPtr = (UUVProjectionToolEditActions *)0x0;
  (this->MaterialSettings).field0_0x0.DebugPtr = (UExistingMeshMaterialProperties *)0x0;
  (this->Preview).field0_0x0.DebugPtr = (UMeshOpPreviewWithBackgroundCompute *)0x0;
  (this->CheckerMaterial).field0_0x0.DebugPtr = (UMaterialInstanceDynamic *)0x0;
  (this->TransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->TransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->OperatorFactory).field0_0x0.DebugPtr = (UUVProjectionOperatorFactory *)0x0;
  (this->EdgeRenderer).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  (this->InputMesh).Object = (FDynamicMesh3 *)0x0;
  (this->InputMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->TriangleROI).Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  (this->TriangleROI).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->VertexROI).Object = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  (this->VertexROI).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->InputMeshROISpatial).Object = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
  (this->InputMeshROISpatial).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->TriangleROISet).Elements = 0;
  *(undefined8 *)&(this->TriangleROISet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->TriangleROISet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->TriangleROISet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->TriangleROISet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->TriangleROISet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TriangleROISet).Elements.field_0x34 = 0;
  (this->TriangleROISet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->TriangleROISet).HashSize = 0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->WorldTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->WorldTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->WorldTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->WorldTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->WorldTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->WorldTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->WorldBounds).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->WorldBounds).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->WorldBounds).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->WorldBounds).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->WorldBounds).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->WorldBounds).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->InitialTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->InitialTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->InitialTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->InitialTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->InitialTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->InitialTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->InitialTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->InitialTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  this->DimensionsWatcher = -1;
  this->DimensionsModeWatcher = -1;
  this->bTransformModified = false;
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
  FToolDataVisualizer::FToolDataVisualizer(&this->ProjectionShapeVisualizer);
  (this->SetPlaneCtrlClickBehaviorTarget).Ptr = (FSelectClickedAction *)0x0;
  (this->ClickToSetPlaneBehavior).field0_0x0.DebugPtr = (USingleClickInputBehavior *)0x0;
  this->bHavePendingAction = false;
  return this;
}

// ~UUVProjectionTool @ 14cd539e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUVProjectionTool::~UUVProjectionTool(UUVProjectionTool *this)

{
  FSelectClickedAction *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInputBehaviorSource__;
  *(undefined ***)&this->field_0xc0 = &___7UUVProjectionTool__6B_;
  pFVar1 = (this->SetPlaneCtrlClickBehaviorTarget).Ptr;
  if (pFVar1 != (FSelectClickedAction *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  FToolDataVisualizer::~FToolDataVisualizer(&this->ProjectionShapeVisualizer);
  (this->TriangleROISet).HashSize = 0;
  FVar2 = (this->TriangleROISet).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->TriangleROISet).Elements);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputMeshROISpatial).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->VertexROI).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TriangleROI).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputMesh).SharedReferenceCount.ReferenceController);
  USingleTargetWithSelectionTool::~USingleTargetWithSelectionTool
            ((USingleTargetWithSelectionTool *)this);
  return;
}

// operator() @ 14cd54200

void __thiscall
`UUVProjectionTool::OnMeshUpdated'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  lVar9 = *(longlong *)(*(longlong *)this + 0x10);
  uVar2 = *(ulonglong *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)this + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8) +
           (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar8 = (ulonglong)((uint)uVar2 & 0x1ff);
  lVar3 = *(longlong *)(lVar9 + ((uVar2 & 0xffffffff) >> 9) * 8);
  puVar1 = (undefined8 *)(lVar3 + uVar8 * 0x18);
  local_48 = *puVar1;
  uStack_40 = puVar1[1];
  local_38 = *(undefined8 *)(lVar3 + 0x10 + uVar8 * 0x18);
  uVar8 = (ulonglong)((uint)(uVar2 >> 0x20) & 0x1ff);
  lVar9 = *(longlong *)(lVar9 + (uVar2 >> 0x29) * 8);
  pFVar4 = (param_2->AllocatorInstance).Data;
  puVar1 = (undefined8 *)(lVar9 + uVar8 * 0x18);
  uStack_30 = *puVar1;
  uStack_28 = puVar1[1];
  uStack_20 = *(undefined8 *)(lVar9 + 0x10 + uVar8 * 0x18);
  local_18 = *(undefined4 *)((longlong)this + 8);
  uStack_10 = *(undefined4 *)((longlong)this + 0x10);
  uStack_14 = *(undefined4 *)((longlong)this + 0xc);
  if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
     ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)param_2->ArrayMax * 0x40)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = param_2->ArrayNum;
  if (iVar7 == param_2->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar7 + 1;
  pFVar4 = (param_2->AllocatorInstance).Data;
  lVar9 = (longlong)iVar7 * 0x40;
  *(undefined8 *)(pFVar4 + lVar9) = local_48;
  *(undefined8 *)(pFVar4 + lVar9 + 8) = uStack_40;
  *(undefined8 *)(pFVar4 + lVar9 + 0x10) = local_38;
  *(undefined8 *)(pFVar4 + lVar9 + 0x10 + 8) = uStack_30;
  *(undefined8 *)(pFVar4 + lVar9 + 0x20) = uStack_28;
  *(undefined8 *)(pFVar4 + lVar9 + 0x20 + 8) = uStack_20;
  *(ulonglong *)(pFVar4 + lVar9 + 0x30) = CONCAT44(uStack_14,local_18);
  *(ulonglong *)(pFVar4 + lVar9 + 0x30 + 8) = CONCAT44(uStack_c,uStack_10);
  return;
}

// operator() @ 14cd55930

void __thiscall
`UUVProjectionTool::InitializeMesh'::__l5::<lambda_1>::operator()(void *this,int param_1)

{
  int *piVar1;
  longlong lVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int local_res10 [6];
  
  lVar2 = *(longlong *)this;
  local_res10[0] = param_1;
  if (*(longlong *)(lVar2 + 0x1a8) == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = *(ForAnyElementType **)(lVar2 + 0x1a8);
  if ((pFVar3->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 4)) {
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
  iVar6 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar6 + 1;
  *(int *)(pFVar3->Data + (longlong)iVar6 * 4) = local_res10[0];
  return;
}

// operator() @ 14cd55ce0

TVector<double> * __thiscall
`UUVProjectionTool::ApplyAction_AutoFit'::__l13::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  TVector<double> *pTVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  
  plVar3 = *(longlong **)((longlong)this + 8);
  lVar4 = *(longlong *)this;
  uVar14 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar14 = (uint)~param_1 >> 0x1f;
  }
  if (uVar14 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      pTVar15 = (TVector<double> *)(*pcVar6)();
      return pTVar15;
    }
  }
  auVar2 = *(undefined1 (*) [16])(lVar4 + 0x240);
  auVar16 = *(undefined1 (*) [16])(lVar4 + 0x230);
  lVar5 = *plVar3;
  dVar12 = *(double *)(lVar4 + 0x248);
  auVar17 = blendpd(auVar16,auVar2,2);
  pdVar1 = (double *)(lVar5 + (longlong)param_1 * 0x18);
  dVar8 = *pdVar1 * *(double *)(lVar4 + 0x270);
  dVar9 = pdVar1[1] * *(double *)(lVar4 + 0x278);
  uVar23 = (undefined4)((ulonglong)dVar9 >> 0x20);
  dVar10 = *(double *)(lVar5 + 0x10 + (longlong)param_1 * 0x18) * *(double *)(lVar4 + 0x280);
  dVar11 = *(double *)(lVar4 + 0x288) * 0.0;
  auVar26._8_4_ = SUB84(dVar9,0);
  auVar26._0_8_ = dVar8;
  auVar26._12_4_ = uVar23;
  dVar7 = auVar2._0_8_;
  auVar27._0_8_ = auVar26._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar8;
  auVar27._8_8_ = dVar10 * auVar16._8_8_ - dVar7 * dVar9;
  auVar28._8_4_ = SUB84(dVar9,0);
  auVar28._0_8_ = dVar8;
  auVar28._12_4_ = uVar23;
  auVar16._8_4_ = SUB84(dVar11,0);
  auVar16._0_8_ = dVar10;
  auVar16._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar16 = blendpd(auVar28,auVar16,2);
  auVar19._0_8_ = auVar16._0_8_ * dVar7 - auVar17._0_8_ * dVar10;
  auVar19._8_8_ = auVar16._8_8_ * auVar2._8_8_ - auVar17._8_8_ * dVar11;
  auVar16 = *(undefined1 (*) [16])(lVar4 + 0x230);
  auVar28 = blendpd(auVar27,auVar19,2);
  auVar29._0_8_ = auVar28._0_8_ + auVar28._0_8_;
  auVar29._8_8_ = auVar28._8_8_ + auVar28._8_8_;
  dVar21 = auVar27._8_8_ + auVar27._8_8_;
  dVar22 = auVar19._0_8_ + auVar19._0_8_;
  auVar24._8_4_ = SUB84(dVar22,0);
  auVar24._0_8_ = dVar21;
  uVar23 = (undefined4)((ulonglong)dVar22 >> 0x20);
  auVar24._12_4_ = uVar23;
  auVar18._8_4_ = SUB84(dVar22,0);
  auVar18._0_8_ = dVar21;
  auVar18._12_4_ = uVar23;
  auVar28 = blendpd(auVar16,auVar2,2);
  auVar19 = blendpd(auVar18,auVar29,2);
  auVar25._0_8_ = auVar24._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar21;
  auVar25._8_8_ = auVar29._0_8_ * auVar16._8_8_ - dVar7 * dVar22;
  auVar20._0_8_ = auVar19._0_8_ * dVar7 - auVar28._0_8_ * auVar29._0_8_;
  auVar20._8_8_ = auVar19._8_8_ * auVar2._8_8_ - auVar28._8_8_ * auVar29._8_8_;
  dVar11 = *(double *)(lVar4 + 0x260);
  auVar17._8_4_ = SUB84(auVar25._8_8_,0);
  auVar17._0_8_ = auVar25._0_8_;
  auVar17._12_4_ = (int)((ulonglong)auVar25._8_8_ >> 0x20);
  auVar16 = blendpd(auVar25,auVar20,2);
  dVar7 = dVar12 * dVar22 + dVar9 + auVar20._0_8_ + *(double *)(lVar4 + 600);
  auVar2._8_4_ = SUB84(dVar7,0);
  auVar2._0_8_ = dVar12 * dVar21 + dVar8 + auVar17._8_8_ + *(double *)(lVar4 + 0x250);
  auVar2._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar12 * auVar29._0_8_ + dVar10 + auVar16._0_8_ + dVar11;
  return __return_storage_ptr__;
}

// operator() @ 14cd55eb0

void __thiscall
`UUVProjectionTool::Setup'::__l2::<lambda_2>::operator()(void *this,FString *param_1)

{
  TArray<FString,TSizedDefaultAllocator<32>_> *this_00;
  longlong lVar1;
  UExistingMeshMaterialProperties *this_01;
  int iVar2;
  UMaterialInterface *pUVar3;
  
  lVar1 = *(longlong *)(*(longlong *)this + 0x148);
  this_01 = *(UExistingMeshMaterialProperties **)(*(longlong *)this + 0x160);
  this_00 = (TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar1 + 0xc0);
  iVar2 = TArray<FString,TSizedDefaultAllocator<32>_>::IndexOfByKey<FString>
                    (this_00,(FString *)(lVar1 + 0xb0));
  UExistingMeshMaterialProperties::UpdateUVChannels(this_01,iVar2,this_00,true);
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult
            (*(UMeshOpPreviewWithBackgroundCompute **)(*(longlong *)this + 0x168));
  lVar1 = *(longlong *)this;
  UExistingMeshMaterialProperties::UpdateMaterials
            (*(UExistingMeshMaterialProperties **)(lVar1 + 0x160));
  pUVar3 = UExistingMeshMaterialProperties::GetActiveOverrideMaterial
                     (*(UExistingMeshMaterialProperties **)(lVar1 + 0x160));
  lVar1 = *(longlong *)(lVar1 + 0x168);
  if (pUVar3 != (UMaterialInterface *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    *(UMaterialInterface **)(lVar1 + 0x80) = pUVar3;
    return;
  }
  *(undefined8 *)(lVar1 + 0x80) = 0;
  return;
}

// operator() @ 14cd55f80

void __thiscall
`UUVProjectionTool::OnMeshUpdated'::__l5::<lambda_2>::operator()
          (void *this,int param_1,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uStackX_c;
  
  lVar1 = (ulonglong)((uint)param_1 >> 9) * 8;
  lVar5 = **(longlong **)this;
  uVar2 = *(ulonglong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x1c0) + lVar1) + 8 +
           (ulonglong)(param_1 & 0x1ff) * 0x10);
  if ((((-1 < param_1) && (param_1 < *(int *)(lVar5 + 0x1d0) * 0x200 + *(int *)(lVar5 + 0x1d4))) &&
      ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar5 + 0x1d8) + lVar1) +
                          (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
     (lVar1 = *(longlong *)((longlong)this + 8), *(int *)(lVar1 + 0x1e0) != *(int *)(lVar1 + 0x20c))
     ) {
    uVar6 = *(int *)(lVar1 + 0x220) - 1;
    lVar5 = *(longlong *)(lVar1 + 0x218);
    if (*(longlong *)(lVar1 + 0x218) == 0) {
      lVar5 = lVar1 + 0x210;
    }
    iVar4 = *(int *)(lVar5 + (uVar2 & 0xffffffff & (ulonglong)uVar6) * 4);
    if (iVar4 != -1) {
      lVar1 = *(longlong *)(lVar1 + 0x1d8);
      while (*(int *)(lVar1 + (longlong)iVar4 * 0xc) != (int)uVar2) {
        iVar4 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0xc);
        if (iVar4 == -1) {
          return;
        }
      }
      uStackX_c = (uint)(uVar2 >> 0x20);
      iVar4 = *(int *)(lVar5 + (ulonglong)(uStackX_c & uVar6) * 4);
      if (iVar4 != -1) {
        while (*(uint *)(lVar1 + (longlong)iVar4 * 0xc) != uStackX_c) {
          iVar4 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0xc);
          if (iVar4 == -1) {
            return;
          }
        }
        bVar3 = UE::Geometry::TDynamicMeshOverlay<float,2>::IsSeamEdge
                          ((TDynamicMeshOverlay<float,2> *)**(undefined8 **)((longlong)this + 0x10),
                           param_1,(bool *)0x0);
        if (bVar3) {
          OnMeshUpdated'::__l2::<lambda_1>::operator()
                    (*(void **)((longlong)this + 0x18),param_1,param_2);
        }
      }
    }
  }
  return;
}

// operator() @ 14cd56830

void __thiscall
`UUVProjectionTool::OnMeshUpdated'::__l7::<lambda_3>::operator()
          (void *this,int param_1,TArray<FRenderableLine,TSizedDefaultAllocator<32>_> *param_2)

{
  longlong lVar1;
  bool bVar2;
  
  if ((((-1 < param_1) &&
       (lVar1 = **(longlong **)this,
       param_1 < *(int *)(lVar1 + 0x1d0) * 0x200 + *(int *)(lVar1 + 0x1d4))) &&
      ((ushort)(*(short *)(*(longlong *)
                            (*(longlong *)(lVar1 + 0x1d8) + (ulonglong)((uint)param_1 >> 9) * 8) +
                          (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
     (bVar2 = UE::Geometry::TDynamicMeshOverlay<float,2>::IsSeamEdge
                        ((TDynamicMeshOverlay<float,2> *)**(undefined8 **)((longlong)this + 8),
                         param_1,(bool *)0x0), bVar2)) {
    OnMeshUpdated'::__l2::<lambda_1>::operator()(*(void **)((longlong)this + 0x10),param_1,param_2);
  }
  return;
}

// operator() @ 14cd56bc0

void __thiscall
`UUVProjectionTool::Setup'::__l2::<lambda_6>::operator()(void *this,TVector<double> *param_1)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  undefined1 local_38 [16];
  double local_28;
  
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)(lVar1 + 0x150);
  if (*(char *)(lVar2 + 0xd0) == '\0') {
    *(undefined1 *)(lVar1 + 0x368) = 1;
    return;
  }
  dVar9 = *(double *)(lVar2 + 0xb8) - *(double *)(lVar1 + 0x2c0);
  dVar10 = *(double *)(lVar2 + 0xc0) - *(double *)(lVar1 + 0x2c8);
  dVar3 = *(double *)(lVar2 + 200) - *(double *)(lVar1 + 0x2d0);
  dVar9 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar7 = SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar8 = (uint)((ulonglong)dVar10 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar5 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (dVar9 < (double)CONCAT44(uVar8,uVar7)) {
    uVar4 = (ulonglong)(((double)CONCAT44(uVar8,uVar7) < (double)CONCAT44(uVar6,uVar5)) + 1);
  }
  else {
    uVar4 = 2;
    if ((double)CONCAT44(uVar6,uVar5) <= dVar9) {
      uVar4 = 0;
    }
  }
  dVar3 = *(double *)(lVar1 + 0x2c0 + uVar4 * 8);
  local_28 = *(double *)(lVar2 + 0xb8 + uVar4 * 8);
  dVar10 = local_28 / dVar3;
  if (__real_3f1a36e2e0000000 <=
      (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    local_28 = *(double *)(lVar1 + 0x2d0) * dVar10;
    local_38._8_8_ = *(double *)(lVar1 + 0x2c8) * dVar10;
    local_38._0_8_ = *(double *)(lVar1 + 0x2c0) * dVar10;
  }
  else {
    local_38._8_4_ = SUB84(local_28,0);
    local_38._0_8_ = local_28;
    local_38._12_4_ = (int)((ulonglong)local_28 >> 0x20);
  }
  *(undefined8 *)(lVar2 + 0xb8) = local_38._0_8_;
  *(undefined8 *)(lVar2 + 0xc0) = local_38._8_8_;
  *(double *)(lVar2 + 200) = local_28;
  *(undefined8 *)(lVar1 + 0x2c0) = local_38._0_8_;
  *(undefined8 *)(lVar1 + 0x2c8) = local_38._8_8_;
  *(double *)(lVar1 + 0x2d0) = local_28;
  FWatchablePropertySet::SilentUpdateWatcherAtIndex
            ((FWatchablePropertySet *)(*(longlong *)(*(longlong *)this + 0x150) + 0x28),
             *(int *)(*(longlong *)this + 0x360));
  *(undefined1 *)(*(longlong *)this + 0x368) = 1;
  return;
}

// operator() @ 14cd56d20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UUVProjectionTool::Setup'::__l2::<lambda_8>::operator()(void *this,FHitResult *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auStack_168 [32];
  TVector<double>_u_0 local_148;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  TQuaternion<double>_u_0 local_110;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_168;
  lVar5 = *(longlong *)this;
  local_d8._s_0.X = (double)*(undefined8 *)&param_1->ImpactNormal;
  local_d8._s_0.Y = (double)*(undefined8 *)&(param_1->ImpactNormal).field_0x8;
  local_d8._s_0.Z = (double)*(undefined8 *)&(param_1->ImpactNormal).field_0x10;
  dVar6 = *(double *)&param_1->ImpactPoint;
  dVar7 = *(double *)&(param_1->ImpactPoint).field_0x8;
  dVar1 = *(double *)&(param_1->ImpactPoint).field_0x10;
  cVar4 = *(char *)(*(longlong *)(lVar5 + 0x500) + 0xa0);
  pauVar8 = (undefined1 (*) [16])
            (**(code **)(**(longlong **)(lVar5 + 0x180) + 0x2c0))
                      (*(longlong **)(lVar5 + 0x180),&local_b8);
  auVar2 = *pauVar8;
  local_b8 = auVar2._0_4_;
  uStack_b4 = auVar2._4_4_;
  uStack_b0 = auVar2._8_4_;
  uStack_ac = auVar2._12_4_;
  auVar3 = pauVar8[1];
  local_a8 = auVar3._0_4_;
  uStack_a4 = auVar3._4_4_;
  uStack_a0 = auVar3._8_4_;
  uStack_9c = auVar3._12_4_;
  local_128 = auVar2._8_8_;
  local_118 = auVar3._8_8_;
  local_130 = auVar2._0_8_;
  local_120 = auVar3._0_8_;
  local_148._s_0.X = dVar6;
  local_148._s_0.Y = dVar7;
  local_148._s_0.Z = dVar1;
  if (cVar4 == '\0') {
    local_110._s_0.X = 0.0;
    local_110._s_0.Y = 0.0;
    local_110._s_0.Z = 0.0;
    local_f0._s_0.X = (local_128 + local_128) * local_118 + (local_120 + local_120) * local_130;
    local_f0._s_0.Y = (local_120 + local_120) * local_128 - (local_130 + local_130) * local_118;
    local_110._s_0.W = __real_3ff0000000000000;
    local_f0._s_0.Z =
         __real_3ff0000000000000 -
         ((local_130 + local_130) * local_130 + (local_128 + local_128) * local_128);
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_110._s_0,(TVector<double> *)&local_f0._s_0,
               (TVector<double> *)&local_d8._s_0);
    UE::Geometry::TFrame3<double>::Rotate
              ((TFrame3<double> *)&local_148._s_0,(TQuaternion<double> *)&local_110._s_0);
    local_a8 = SUB84(local_120,0);
    uStack_a4 = (undefined4)((ulonglong)local_120 >> 0x20);
    local_b8 = SUB84(local_130,0);
    uStack_b4 = (undefined4)((ulonglong)local_130 >> 0x20);
    uStack_a0 = SUB84(local_118,0);
    uStack_9c = (undefined4)((ulonglong)local_118 >> 0x20);
    uStack_b0 = SUB84(local_128,0);
    uStack_ac = (undefined4)((ulonglong)local_128 >> 0x20);
  }
  local_88 = local_148._s_0.Z;
  uStack_80 = 0;
  local_68 = ___xmm_00000000000000003ff0000000000000;
  uStack_60 = _UNK_150689518;
  local_98 = local_148._0_4_;
  uStack_94 = local_148._4_4_;
  uStack_90 = local_148._8_4_;
  uStack_8c = local_148._12_4_;
  local_78 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_70 = _UNK_150689688;
  (**(code **)(**(longlong **)(lVar5 + 0x178) + 0x340))(*(longlong **)(lVar5 + 0x178),&local_b8,1);
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult
            (*(UMeshOpPreviewWithBackgroundCompute **)(lVar5 + 0x168));
  *(undefined1 *)(lVar5 + 0x368) = 1;
  return;
}

// ApplyAction @ 14cd5a820

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
UUVProjectionTool::ApplyAction(UUVProjectionTool *this,EUVProjectionToolActions param_1)

{
  bool bVar1;
  
  if (param_1 == AutoFit) {
    ApplyAction_AutoFit(this,false);
    return;
  }
  if (param_1 != AutoFitAlign) {
    if (param_1 == Reset) {
      bVar1 = this->bTransformModified;
      ApplyInitializationMode(this);
      this->bTransformModified = bVar1;
      return;
    }
    return;
  }
  ApplyAction_AutoFit(this,true);
  return;
}

// ApplyAction_AutoFit @ 14cd5a880

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

void __thiscall UUVProjectionTool::ApplyAction_AutoFit(UUVProjectionTool *this,bool param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  EUVProjectionMethod EVar7;
  FScriptContainerElement *_Src;
  UUVProjectionToolProperties *pUVar8;
  UCombinedTransformGizmo *pUVar9;
  code *pcVar10;
  double dVar11;
  bool bVar12;
  TTransform<double> *pTVar13;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar14;
  FDynamicMesh3 *pFVar15;
  TVector<double> *pTVar16;
  longlong lVar17;
  undefined1 auStackY_2f8 [32];
  TMinVolumeBox3<double> local_2b8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_2b0;
  TVector<double>_u_0 local_2a0;
  TQuaternion<double>_u_0 TStack_288;
  int local_268 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_260;
  TVector<double>_u_0 local_248;
  double dStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  TVector<double>_u_0 local_1f8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  UUVProjectionTool *local_1c8;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_1c0;
  code *local_1b8;
  UUVProjectionTool **local_1b0;
  <lambda_2> local_1a8;
  TVector<double>_u_0 local_188;
  double local_170;
  double dStack_168;
  double local_160;
  TVector<double> local_158;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  TTransform<double> local_d8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  pTVar13 = UCombinedTransformGizmo::GetGizmoTransform
                      ((this->TransformGizmo).field0_0x0.DebugPtr,&local_d8);
  local_2a0._s_0.X = (pTVar13->Translation).XY.m128d_f64[0];
  local_2a0._s_0.Y = (pTVar13->Translation).XY.m128d_f64[1];
  local_2a0._s_0.Z = (pTVar13->Translation).ZW.m128d_f64[0];
  TStack_288._s_0.Z = (pTVar13->Rotation).ZW.m128d_f64[0];
  TStack_288._s_0.W = (pTVar13->Rotation).ZW.m128d_f64[1];
  TStack_288._s_0.X = (pTVar13->Rotation).XY.m128d_f64[0];
  TStack_288._s_0.Y = (pTVar13->Rotation).XY.m128d_f64[1];
  local_2b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.ArrayNum = 0;
  local_2b0.ArrayMax = 0;
  local_170 = local_2a0._s_0.X;
  dStack_168 = local_2a0._s_0.Y;
  local_160 = local_2a0._s_0.Z;
  if ((this->VertexROI).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar12) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  pTVar14 = (this->VertexROI).Object;
  if (pTVar14->ArrayNum < 1) {
    if ((this->InputMesh).Object == (FDynamicMesh3 *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pFVar15 = (this->InputMesh).Object;
    if (pFVar15 == (FDynamicMesh3 *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    UE::Geometry::
    CollectVertexPositions<UE::Geometry::FRefCountVector::IndexEnumerable,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
              ((this->InputMesh).Object,(IndexEnumerable)&pFVar15->VertexRefCounts,&local_2b0);
  }
  else {
    if (pTVar14 == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    pTVar14 = (this->VertexROI).Object;
    local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_260.ArrayNum = pTVar14->ArrayNum;
    lVar17 = (longlong)local_260.ArrayNum;
    _Src = (pTVar14->AllocatorInstance).Data;
    if (local_260.ArrayNum == 0) {
      local_260.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_260.ArrayNum,0,&local_260.AllocatorInstance,local_260.ArrayNum,
                 &local_260.ArrayMax);
      memcpy(local_260.AllocatorInstance.Data,_Src,lVar17 << 2);
    }
    if ((this->InputMesh).Object == (FDynamicMesh3 *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L"");
      if (bVar12) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    UE::Geometry::
    CollectVertexPositions<TArray<int,TSizedDefaultAllocator<32>_>,TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
              ((this->InputMesh).Object,&local_260,&local_2b0);
  }
  dVar11 = __real_3fe0000000000000;
  if (!param_1) goto LAB_14cd5ad05;
  EVar7 = ((this->BasicProperties).field0_0x0.DebugPtr)->ProjectionType;
  if ((EVar7 != Plane) && (Cylinder < EVar7)) {
    if (EVar7 == ExpMap) {
      pTVar14 = TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1>::operator->
                          (&this->TriangleROI);
      if (pTVar14->ArrayNum < 1) {
        pFVar15 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator*<UE::Geometry::FDynamicMesh3>
                            (&this->InputMesh);
        UE::Geometry::FDynamicMeshUVEditor::EstimateGeodesicCenterFrameVertex
                  (pFVar15,(TFrame3<double> *)&local_2a0._s_0,local_268,true);
      }
      else {
        pTVar14 = TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1>::
                  operator*<TArray<int,TSizedDefaultAllocator<32>_>_>(&this->TriangleROI);
        pFVar15 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator*<UE::Geometry::FDynamicMesh3>
                            (&this->InputMesh);
        UE::Geometry::FDynamicMeshUVEditor::EstimateGeodesicCenterFrameVertex
                  (pFVar15,pTVar14,(TFrame3<double> *)&local_2a0._s_0,local_268,true);
      }
      UE::Geometry::TFrame3<double>::Transform
                ((TFrame3<double> *)&local_2a0._s_0,&this->WorldTransform);
    }
    goto LAB_14cd5ad05;
  }
  local_1c0 = &local_2b0;
  local_248._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_248._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1b0 = &local_1c8;
  local_248._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_218 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_210 = _UNK_150689688;
  local_208 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_200 = _UNK_150689688;
  dStack_230 = 0.0;
  local_228 = 0;
  uStack_220 = 0;
  local_2b8.Internal.Ptr =
       (TPimplPtr<UE::Geometry::TMinVolumeBox3Internal<double>,0>)
       (TMinVolumeBox3Internal<double> *)0x0;
  local_1b8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UUVProjectionTool::ApplyAction_AutoFit'::__l13::<lambda_1>,UE::Math::TVector<double>,int>
              ::Call;
  local_1c8 = this;
  bVar12 = UE::Geometry::TMinVolumeBox3<double>::SolveSubsample
                     (&local_2b8,local_2b0.ArrayNum,1000,
                      (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_1b8,false,
                      (FProgressCancel *)0x0);
  if (bVar12) {
    bVar12 = UE::Geometry::TMinVolumeBox3<double>::IsSolutionAvailable(&local_2b8);
    if (!bVar12) goto LAB_14cd5ac27;
    UE::Geometry::TMinVolumeBox3<double>::GetResult
              (&local_2b8,(TOrientedBox3<double> *)&local_248._s_0);
  }
  else {
LAB_14cd5ac27:
    dVar1 = (this->WorldBounds).Max.field0_0x0._s_0.X;
    local_228._0_4_ = 0;
    local_228._4_4_ = 0;
    uStack_220._0_4_ = 0;
    uStack_220._4_4_ = 0;
    dVar2 = (this->WorldBounds).Min.field0_0x0._s_0.X;
    dVar3 = (this->WorldBounds).Max.field0_0x0._s_0.Y;
    dVar4 = (this->WorldBounds).Max.field0_0x0._s_0.Z;
    dVar5 = (this->WorldBounds).Min.field0_0x0._s_0.Y;
    dVar6 = (this->WorldBounds).Min.field0_0x0._s_0.Z;
    dStack_230 = 0.0;
    local_248._s_0.X = (dVar1 + dVar2) * dVar11;
    local_218 = 1.0;
    dStack_210 = (dVar1 - dVar2) * dVar11;
    local_248._s_0.Y = (dVar3 + dVar5) * dVar11;
    local_208 = (dVar3 - dVar5) * dVar11;
    local_228 = 0;
    uStack_220 = 0;
    local_248._s_0.Z = (dVar4 + dVar6) * dVar11;
    dStack_200 = (dVar4 - dVar6) * dVar11;
  }
  local_2a0._s_0.X = local_248._s_0.X;
  local_2a0._s_0.Y = local_248._s_0.Y;
  TStack_288._s_0.W = local_218;
  local_2a0._s_0.Z = local_248._s_0.Z;
  TStack_288._s_0.X = dStack_230;
  TStack_288._12_4_ = local_228._4_4_;
  TStack_288._8_4_ = (undefined4)local_228;
  TStack_288._20_4_ = uStack_220._4_4_;
  TStack_288._16_4_ = (undefined4)uStack_220;
  if (local_2b8.Internal.Ptr != (TMinVolumeBox3Internal<double> *)0x0) {
    (**(code **)((longlong)local_2b8.Internal.Ptr + -0x10))
              ((int *)((longlong)local_2b8.Internal.Ptr + -0x10));
  }
LAB_14cd5ad05:
  local_1a8.Points = &local_2b0;
  local_1a8.AlignFrame = (TFrame3<double> *)&local_2a0;
  local_1a8.__this = this;
  UE::Geometry::TAxisAlignedBox3<double>::
  MakeBoundsFromIndices<_UUVProjectionTool::ApplyAction_AutoFit_::__l2::<lambda_2>_>
            ((TAxisAlignedBox3<double> *)&local_1f8._s_0,local_2b0.ArrayNum,&local_1a8);
  pUVar8 = (this->BasicProperties).field0_0x0.DebugPtr;
  if ((pUVar8->ProjectionType == Plane) || (pUVar8->ProjectionType < Plane)) {
    local_188._s_0.X = (local_1f8._s_0.X + local_1e0) * dVar11;
    local_188._s_0.Y = (local_1f8._s_0.Y + local_1d8) * dVar11;
    local_188._s_0.Z = (local_1f8._s_0.Z + local_1d0) * dVar11;
    pTVar16 = UE::Geometry::operator*<double>
                        (&local_158,(TQuaternion<double> *)&TStack_288._s_0,
                         (TVector<double> *)&local_188._s_0);
    local_2a0._s_0.Y = local_2a0._s_0.Y + (pTVar16->field0_0x0)._s_0.Y;
    local_2a0._s_0.Z = local_2a0._s_0.Z + (pTVar16->field0_0x0)._s_0.Z;
    local_2a0._s_0.X = local_2a0._s_0.X + (pTVar16->field0_0x0)._s_0.X;
  }
  (pUVar8->Dimensions).field0_0x0._s_0.X = local_1e0 - local_1f8._s_0.X;
  (pUVar8->Dimensions).field0_0x0._s_0.Y = local_1d8 - local_1f8._s_0.Y;
  (pUVar8->Dimensions).field0_0x0._s_0.Z = local_1d0 - local_1f8._s_0.Z;
  if (-1 < this->DimensionsWatcher) {
    FWatchablePropertySet::SilentUpdateWatcherAtIndex
              ((FWatchablePropertySet *)&((this->BasicProperties).field0_0x0.DebugPtr)->_padding_,
               this->DimensionsWatcher);
  }
  if (-1 < this->DimensionsModeWatcher) {
    FWatchablePropertySet::SilentUpdateWatcherAtIndex
              ((FWatchablePropertySet *)&((this->BasicProperties).field0_0x0.DebugPtr)->_padding_,
               this->DimensionsModeWatcher);
  }
  pUVar9 = (this->TransformGizmo).field0_0x0.DebugPtr;
  local_128 = TStack_288._s_0.Z;
  dStack_120 = TStack_288._s_0.W;
  local_108 = local_2a0._s_0.Z;
  uStack_100 = 0;
  local_138 = TStack_288._s_0.X;
  dStack_130 = TStack_288._s_0.Y;
  local_e8 = ___xmm_00000000000000003ff0000000000000;
  uStack_e0 = _UNK_150689518;
  local_118 = local_2a0._s_0.X;
  dStack_110 = local_2a0._s_0.Y;
  local_f8 = ___xmm_3ff00000000000003ff0000000000000;
  dStack_f0 = _UNK_150689688;
  (**(code **)(*(longlong *)pUVar9 + 0x340))(pUVar9,&local_138,1);
  if (local_2b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.AllocatorInstance.Data);
  }
  return;
}

// ApplyAction_Reset @ 14cd5af30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUVProjectionTool::ApplyAction_Reset(UUVProjectionTool *this)

{
  bool bVar1;
  
  bVar1 = this->bTransformModified;
  ApplyInitializationMode(this);
  this->bTransformModified = bVar1;
  return;
}

// ApplyInitializationMode @ 14cd5d9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUVProjectionTool::ApplyInitializationMode(UUVProjectionTool *this)

{
  double dVar1;
  EUVProjectionToolInitializationMode EVar2;
  UUVProjectionToolProperties *pUVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  longlong lVar8;
  UCombinedTransformGizmo *pUVar9;
  TVector<double> *pTVar10;
  
  pUVar3 = (this->BasicProperties).field0_0x0.DebugPtr;
  EVar2 = pUVar3->Initialization;
  if (EVar2 == Default) {
    uVar4 = *(undefined4 *)((longlong)&(this->InitialDimensions).field0_0x0 + 4);
    uVar5 = *(undefined4 *)((longlong)&(this->InitialDimensions).field0_0x0 + 8);
    uVar6 = *(undefined4 *)((longlong)&(this->InitialDimensions).field0_0x0 + 0xc);
    dVar1 = (this->InitialDimensions).field0_0x0._s_0.Z;
    *(undefined4 *)&(pUVar3->Dimensions).field0_0x0 =
         *(undefined4 *)&(this->InitialDimensions).field0_0x0;
    *(undefined4 *)((longlong)&(pUVar3->Dimensions).field0_0x0 + 4) = uVar4;
    *(undefined4 *)((longlong)&(pUVar3->Dimensions).field0_0x0 + 8) = uVar5;
    *(undefined4 *)((longlong)&(pUVar3->Dimensions).field0_0x0 + 0xc) = uVar6;
    (pUVar3->Dimensions).field0_0x0._s_0.Z = dVar1;
    pUVar9 = (this->TransformGizmo).field0_0x0.DebugPtr;
    lVar8 = *(longlong *)pUVar9;
  }
  else {
    if (EVar2 != UsePrevious) {
      if (EVar2 == AutoFit) {
        ApplyAction_AutoFit(this,false);
        return;
      }
      if (EVar2 == AutoFitAlign) {
        ApplyAction_AutoFit(this,true);
        return;
      }
      return;
    }
    if (((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X ==
          (pUVar3->SavedDimensions).field0_0x0._s_0.X) &&
        (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y ==
         (pUVar3->SavedDimensions).field0_0x0._s_0.Y)) &&
       (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z ==
        (pUVar3->SavedDimensions).field0_0x0._s_0.Z)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    pTVar10 = &pUVar3->SavedDimensions;
    if (!bVar7) {
      pTVar10 = &this->InitialDimensions;
    }
    uVar4 = *(undefined4 *)((longlong)&pTVar10->field0_0x0 + 4);
    uVar5 = *(undefined4 *)((longlong)&pTVar10->field0_0x0 + 8);
    uVar6 = *(undefined4 *)((longlong)&pTVar10->field0_0x0 + 0xc);
    dVar1 = (pTVar10->field0_0x0)._s_0.Z;
    *(undefined4 *)&(pUVar3->Dimensions).field0_0x0 = *(undefined4 *)&pTVar10->field0_0x0;
    *(undefined4 *)((longlong)&(pUVar3->Dimensions).field0_0x0 + 4) = uVar4;
    *(undefined4 *)((longlong)&(pUVar3->Dimensions).field0_0x0 + 8) = uVar5;
    *(undefined4 *)((longlong)&(pUVar3->Dimensions).field0_0x0 + 0xc) = uVar6;
    (pUVar3->Dimensions).field0_0x0._s_0.Z = dVar1;
    pUVar9 = (this->TransformGizmo).field0_0x0.DebugPtr;
    lVar8 = *(longlong *)pUVar9;
    if (bVar7) {
                    /* WARNING: Could not recover jumptable at 0x00014cd5da80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar8 + 0x340))
                (pUVar9,&((this->BasicProperties).field0_0x0.DebugPtr)->SavedTransform,1);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014cd5dabb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 0x340))(pUVar9,&this->InitialTransform,1);
  return;
}

// CanAccept @ 14cd630b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UUVProjectionTool::CanAccept(UUVProjectionTool *this)

{
  undefined1 uVar1;
  
  if (((this->Preview).field0_0x0.DebugPtr)->bResultValid == false) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x00014cd630c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this + 0x3a8))();
  return (bool)uVar1;
}

// GetPrivateStaticClass @ 14cd6ea50

UClass * __cdecl UUVProjectionTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVProjectionTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVProjectionTool",
               &Z_Registration_Info_UClass_UUVProjectionTool.InnerSingleton,
               StaticRegisterNativesUUVProjectionTool,0x520,0x10,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVProjectionTool>,
               InternalVTableHelperCtorCaller<UUVProjectionTool>,local_res8,
               USingleTargetWithSelectionTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVProjectionTool.InnerSingleton;
}

// GetProjectionBox @ 14cd6f040

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

TOrientedBox3<double> * __thiscall
UUVProjectionTool::GetProjectionBox
          (UUVProjectionTool *this,TOrientedBox3<double> *__return_storage_ptr__)

{
  UTransformProxy *pUVar1;
  UUVProjectionToolProperties *pUVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double *pdVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_108 [112];
  undefined1 local_98 [96];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  pUVar1 = (this->TransformProxy).field0_0x0.DebugPtr;
  pdVar13 = (double *)(**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,local_98);
  dVar3 = pdVar13[6];
  dVar12 = pdVar13[5];
  dVar4 = *pdVar13;
  uVar10 = *(undefined4 *)(pdVar13 + 1);
  uVar11 = *(undefined4 *)((longlong)pdVar13 + 0xc);
  uVar5 = *(undefined4 *)(pdVar13 + 2);
  uVar6 = *(undefined4 *)((longlong)pdVar13 + 0x14);
  uVar7 = *(undefined4 *)(pdVar13 + 3);
  uVar8 = *(undefined4 *)((longlong)pdVar13 + 0x1c);
  pUVar2 = (this->BasicProperties).field0_0x0.DebugPtr;
  dVar9 = (pUVar2->Dimensions).field0_0x0._s_0.Y;
  dVar14 = (pUVar2->Dimensions).field0_0x0._s_0.Z;
  dVar15 = (pUVar2->Dimensions).field0_0x0._s_0.X * __real_3fe0000000000000;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.X = pdVar13[4];
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Y = dVar12;
  (__return_storage_ptr__->Frame).Origin.field0_0x0._s_0.Z = dVar3;
  (__return_storage_ptr__->Frame).Rotation.field0_0x0._s_0.X = dVar4;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 + 8) = uVar10;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 + 0xc) = uVar11;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 + 0x10) = uVar5;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 + 0x14) = uVar6;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 + 0x18) = uVar7;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Frame).Rotation.field0_0x0 + 0x1c) = uVar8;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.X = dVar15;
  dVar14 = _UNK_150689678 * dVar14;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Y =
       ___xmm_3fe00000000000003fe0000000000000 * dVar9;
  (__return_storage_ptr__->Extents).field0_0x0._s_0.Z = dVar14;
  return __return_storage_ptr__;
}

// HasAccept @ 14cd6fa60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UUVProjectionTool::HasAccept(UUVProjectionTool *this)

{
  return true;
}

// HasCancel @ 14cd6fa90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UUVProjectionTool::HasCancel(UUVProjectionTool *this)

{
  return true;
}

// InitializeMesh @ 14cd70550

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

void __thiscall UUVProjectionTool::InitializeMesh(UUVProjectionTool *this)

{
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *pTVar1;
  TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1> *pTVar2;
  TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1> *pTVar3;
  TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *pTVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  UUVProjectionToolProperties *pUVar11;
  code *pcVar12;
  double dVar13;
  bool bVar14;
  char cVar15;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar16;
  FDynamicMesh3 *pFVar17;
  TTransform<double> *pTVar18;
  FGeometrySelection *pFVar19;
  TArrayView<int_const_,int> *pTVar20;
  TReferenceControllerBase<1> *pTVar21;
  ulong64 uVar22;
  TAxisAlignedBox3<double> *pTVar23;
  longlong lVar24;
  TReferenceControllerBase<1> *pTVar25;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar26;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar27;
  undefined1 auStackY_448 [32];
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_408;
  FSharedReferencer<1> FStack_400;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_3f8;
  FSharedReferencer<1> FStack_3f0;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_3e8;
  FSharedReferencer<1> FStack_3e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_3d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_3c8;
  FGetMeshParameters local_3b8;
  FDynamicMesh3 *local_3a8;
  FSharedReferencer<1> local_3a0;
  UUVProjectionTool *local_398;
  code *local_390;
  UUVProjectionTool **local_388;
  FScriptContainerElement *local_378;
  int iStack_370;
  undefined4 uStack_36c;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_368;
  TArrayView<int_const_,int> local_358;
  TArrayView<int_const_,int> local_348;
  TArrayView<int_const_,int> local_338;
  TAxisAlignedBox3<double> local_328;
  TAxisAlignedBox3<double> local_2f8;
  FDynamicMesh3 local_2c8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_448;
  pTVar16 = MakeShared<UE::Geometry::FDynamicMesh3,1>(&local_368);
  local_3a0.ReferenceController = (pTVar16->SharedReferenceCount).ReferenceController;
  local_3a8 = pTVar16->Object;
  if (local_3a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3a0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_3a0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->InputMesh;
  pTVar21 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar1 != (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)&local_3a8) {
    pTVar1->Object = local_3a8;
    local_3a8 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InputMesh).SharedReferenceCount,&local_3a0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3a0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_368.SharedReferenceCount.ReferenceController);
  local_3b8.bHaveRequestLOD = false;
  local_3b8._1_3_ = 0;
  local_3b8.RequestLOD = Default;
  local_3b8.bWantMeshTangents = false;
  local_3b8._9_3_ = 0;
  pFVar17 = UE::ToolTarget::GetDynamicMeshCopy
                      (&local_2c8,*(UToolTarget **)&this->field_0xc8,&local_3b8);
  if ((pTVar1->Object == (FDynamicMesh3 *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  UE::Geometry::FDynamicMesh3::operator=(pTVar1->Object,pFVar17);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_2c8);
  pTVar18 = UE::ToolTarget::GetLocalToWorldTransform(&local_98,*(UToolTarget **)&this->field_0xc8);
  dVar5 = (pTVar18->Rotation).XY.m128d_f64[1];
  (this->WorldTransform).Rotation.XY.m128d_f64[0] = (pTVar18->Rotation).XY.m128d_f64[0];
  (this->WorldTransform).Rotation.XY.m128d_f64[1] = dVar5;
  dVar5 = (pTVar18->Rotation).ZW.m128d_f64[1];
  (this->WorldTransform).Rotation.ZW.m128d_f64[0] = (pTVar18->Rotation).ZW.m128d_f64[0];
  (this->WorldTransform).Rotation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (pTVar18->Translation).XY.m128d_f64[1];
  (this->WorldTransform).Translation.XY.m128d_f64[0] = (pTVar18->Translation).XY.m128d_f64[0];
  (this->WorldTransform).Translation.XY.m128d_f64[1] = dVar5;
  dVar5 = (pTVar18->Translation).ZW.m128d_f64[1];
  (this->WorldTransform).Translation.ZW.m128d_f64[0] = (pTVar18->Translation).ZW.m128d_f64[0];
  (this->WorldTransform).Translation.ZW.m128d_f64[1] = dVar5;
  dVar5 = (pTVar18->Scale3D).XY.m128d_f64[1];
  (this->WorldTransform).Scale3D.XY.m128d_f64[0] = (pTVar18->Scale3D).XY.m128d_f64[0];
  (this->WorldTransform).Scale3D.XY.m128d_f64[1] = dVar5;
  dVar5 = (pTVar18->Scale3D).ZW.m128d_f64[1];
  (this->WorldTransform).Scale3D.ZW.m128d_f64[0] = (pTVar18->Scale3D).ZW.m128d_f64[0];
  (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = dVar5;
  FStack_400.ReferenceController = ::operator_new(0x20);
  pTVar27 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&DAT_00000010;
  if (FStack_400.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    pTVar26 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&DAT_00000010;
    local_408 = ___xmm_00000000000000000000000000000010;
    FStack_400.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar26 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(FStack_400.ReferenceController + 1);
    FStack_400.ReferenceController[1]._padding_ = 0;
    FStack_400.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    FStack_400.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    (FStack_400.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (FStack_400.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_400.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_HV__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    if ((pTVar26 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    LOCK();
    (FStack_400.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_400.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar21 = FStack_400.ReferenceController;
    local_408 = pTVar26;
  }
  pTVar2 = &this->TriangleROI;
  if (pTVar2 != (TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1> *)&local_408) {
    pTVar2->Object = (TArray<int,TSizedDefaultAllocator<32>_> *)pTVar26;
    local_408 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TriangleROI).SharedReferenceCount,&FStack_400);
  }
  pTVar25 = (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_400.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  cVar15 = (**(code **)(*(longlong *)this + 0x3d8))(this);
  if (cVar15 != '\0') {
    pFVar19 = (FGeometrySelection *)(**(code **)(*(longlong *)this + 0x3e0))(this);
    local_388 = &local_398;
    local_390 = UE::Core::Private::Function::
                TFunctionRefCaller<`UUVProjectionTool::InitializeMesh'::__l5::<lambda_1>,void,int>::
                Call;
    local_398 = this;
    if ((pTVar1->Object == (FDynamicMesh3 *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    UE::Geometry::EnumerateSelectionTriangles
              (pFVar19,pTVar1->Object,(TFunctionRef<void___cdecl(int)> *)&local_390,
               (FPolygroupSet *)0x0);
    if ((pTVar2->Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pTVar20 = TArrayView<int_const_,int>::
              TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                        (&local_338,pTVar2->Object);
    local_358.DataPtr = pTVar20->DataPtr;
    local_358.ArrayNum = pTVar20->ArrayNum;
    local_358._12_4_ = *(undefined4 *)&pTVar20->field_0xc;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append(&this->TriangleROISet,&local_358);
  }
  FStack_3f0.ReferenceController = ::operator_new(0x20);
  if (FStack_3f0.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_3f8 = ___xmm_00000000000000000000000000000010;
    FStack_3f0.ReferenceController = _UNK_150651568;
  }
  else {
    (FStack_3f0.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    pTVar27 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(FStack_3f0.ReferenceController + 1);
    (FStack_3f0.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    (FStack_3f0.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TArray_HV__TSizedDefaultAllocator__0CA______00_SharedPointerInternals__6B_
    ;
    FStack_3f0.ReferenceController[1]._padding_ = 0;
    FStack_3f0.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
    FStack_3f0.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
    if ((pTVar27 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    LOCK();
    (FStack_3f0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_3f0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    pTVar25 = FStack_3f0.ReferenceController;
    local_3f8 = pTVar27;
  }
  pTVar3 = &this->VertexROI;
  if (pTVar3 != (TSharedPtr<TArray<int,TSizedDefaultAllocator<32>_>,1> *)&local_3f8) {
    pTVar3->Object = (TArray<int,TSizedDefaultAllocator<32>_> *)pTVar27;
    local_3f8 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->VertexROI).SharedReferenceCount,&FStack_3f0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_3f0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  if ((pTVar3->Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pTVar9 = pTVar3->Object;
  if ((pTVar2->Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_378 = (pTVar2->Object->AllocatorInstance).Data;
  iVar8 = pTVar2->Object->ArrayNum;
  if ((iVar8 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_348._12_4_ = uStack_36c;
  local_348.ArrayNum = iVar8;
  local_348.DataPtr = (int *)local_378;
  iStack_370 = iVar8;
  UE::Geometry::TriangleToVertexIDs(pTVar1->Object,&local_348,pTVar9);
  pFVar17 = pTVar1->Object;
  pTVar21 = ::operator_new(0xd0);
  if (pTVar21 == (TReferenceControllerBase<1> *)0x0) {
    pTVar21 = (TReferenceControllerBase<1> *)0x0;
    local_3e8 = ___xmm_00000000000000000000000000000010;
    pTVar27 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)&DAT_00000010;
    FStack_3e0.ReferenceController = _UNK_150651568;
  }
  else {
    pTVar21->SharedReferenceCount = (atomic<int>)0x1;
    pTVar21->WeakReferenceCount = (atomic<int>)0x1;
    pTVar21->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TMeshAABBTree3_VFDynamicMesh3_Geometry_UE___Geometry_UE___00_SharedPointerInternals__6B_
    ;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(pTVar21 + 1),pFVar17,false);
    pTVar27 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(pTVar21 + 1);
    if ((pTVar27 == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    LOCK();
    pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
    UNLOCK();
    FStack_3e0.ReferenceController = pTVar21;
    local_3e8 = pTVar27;
  }
  pTVar4 = &this->InputMeshROISpatial;
  if (pTVar4 != (TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *)
                &local_3e8) {
    pTVar4->Object = pTVar27;
    local_3e8 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InputMeshROISpatial).SharedReferenceCount,&FStack_3e0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_3e0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
  if ((pTVar2->Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (pTVar2->Object->ArrayNum < 1) {
    if ((pTVar4->Object == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pTVar27 = pTVar4->Object;
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(pTVar27,false);
    uVar22 = UE::Geometry::FDynamicMesh3::GetChangeStamp(pTVar27->Mesh);
    pTVar27->MeshChangeStamp = uVar22;
  }
  else {
    if ((pTVar4->Object == (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pTVar27 = pTVar4->Object;
    if ((pTVar2->Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_3d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar8 = pTVar2->Object->ArrayNum;
    pFVar10 = (pTVar2->Object->AllocatorInstance).Data;
    local_3d8.ArrayNum = iVar8;
    if (iVar8 == 0) {
      local_3d8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar8,0,&local_3d8.AllocatorInstance,iVar8,&local_3d8.ArrayMax);
      memcpy(local_3d8.AllocatorInstance.Data,pFVar10,(longlong)iVar8 << 2);
    }
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
    BuildTopDown<TArray<int,TSizedDefaultAllocator<32>_>_>(pTVar27,false,&local_3d8,iVar8);
    uVar22 = UE::Geometry::FDynamicMesh3::GetChangeStamp(pTVar27->Mesh);
    pTVar27->MeshChangeStamp = uVar22;
  }
  if ((pTVar3->Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (pTVar3->Object->ArrayNum < 1) {
    if ((pTVar1->Object == (FDynamicMesh3 *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pTVar23 = UE::Geometry::TAxisAlignedBox3<double>::
              MakeBoundsFromIndices<UE::Geometry::FRefCountVector::IndexEnumerable,_UUVProjectionTool::InitializeMesh_::__l2::<lambda_3>_>
                        (&local_2f8,(IndexEnumerable)&pTVar1->Object->VertexRefCounts,
                         (<lambda_3>)this);
  }
  else {
    if ((pTVar3->Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar14)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_3c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_3c8.ArrayNum = pTVar3->Object->ArrayNum;
    lVar24 = (longlong)local_3c8.ArrayNum;
    pFVar10 = (pTVar3->Object->AllocatorInstance).Data;
    if (local_3c8.ArrayNum == 0) {
      local_3c8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_3c8.ArrayNum,0,&local_3c8.AllocatorInstance,local_3c8.ArrayNum,
                 &local_3c8.ArrayMax);
      memcpy(local_3c8.AllocatorInstance.Data,pFVar10,lVar24 << 2);
    }
    pTVar23 = UE::Geometry::TAxisAlignedBox3<double>::
              MakeBoundsFromIndices<TArray<int,TSizedDefaultAllocator<32>_>,_UUVProjectionTool::InitializeMesh_::__l2::<lambda_2>_>
                        (&local_328,&local_3c8,(<lambda_2>)this);
  }
  dVar5 = (pTVar23->Min).field0_0x0._s_0.Y;
  (this->WorldBounds).Min.field0_0x0._s_0.X = (pTVar23->Min).field0_0x0._s_0.X;
  (this->WorldBounds).Min.field0_0x0._s_0.Y = dVar5;
  dVar5 = (pTVar23->Max).field0_0x0._s_0.X;
  (this->WorldBounds).Min.field0_0x0._s_0.Z = (pTVar23->Min).field0_0x0._s_0.Z;
  (this->WorldBounds).Max.field0_0x0._s_0.X = dVar5;
  dVar13 = (pTVar23->Max).field0_0x0._s_0.Y;
  dVar5 = (pTVar23->Max).field0_0x0._s_0.Z;
  pUVar11 = (this->BasicProperties).field0_0x0.DebugPtr;
  (this->WorldBounds).Max.field0_0x0._s_0.Y = dVar13;
  (this->WorldBounds).Max.field0_0x0._s_0.Z = dVar5;
  dVar5 = (this->WorldBounds).Max.field0_0x0._s_0.Z;
  dVar6 = (this->WorldBounds).Min.field0_0x0._s_0.Y;
  dVar7 = (this->WorldBounds).Min.field0_0x0._s_0.Z;
  (pUVar11->Dimensions).field0_0x0._s_0.X =
       (this->WorldBounds).Max.field0_0x0._s_0.X - (this->WorldBounds).Min.field0_0x0._s_0.X;
  (pUVar11->Dimensions).field0_0x0._s_0.Y = dVar13 - dVar6;
  (pUVar11->Dimensions).field0_0x0._s_0.Z = dVar5 - dVar7;
  return;
}

// OnInitializationModeChanged @ 14cd74e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUVProjectionTool::OnInitializationModeChanged(UUVProjectionTool *this)

{
  if (this->bTransformModified == false) {
    ApplyInitializationMode(this);
    this->bTransformModified = false;
  }
  return;
}

// OnMaterialSettingsChanged @ 14cd74e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUVProjectionTool::OnMaterialSettingsChanged(UUVProjectionTool *this)

{
  UMeshOpPreviewWithBackgroundCompute *pUVar1;
  UMaterialInterface *pUVar2;
  
  UExistingMeshMaterialProperties::UpdateMaterials((this->MaterialSettings).field0_0x0.DebugPtr);
  pUVar2 = UExistingMeshMaterialProperties::GetActiveOverrideMaterial
                     ((this->MaterialSettings).field0_0x0.DebugPtr);
  pUVar1 = (this->Preview).field0_0x0.DebugPtr;
  if (pUVar2 != (UMaterialInterface *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    (pUVar1->OverrideMaterial).field0_0x0.DebugPtr = pUVar2;
    return;
  }
  (pUVar1->OverrideMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  return;
}

// OnMeshUpdated @ 14cd74ef0

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
UUVProjectionTool::OnMeshUpdated
          (UUVProjectionTool *this,UMeshOpPreviewWithBackgroundCompute *param_1)

{
  uint uVar1;
  uint uVar2;
  FDynamicMeshAttributeSet *pFVar3;
  UPreviewGeometry *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FDynamicMeshAttributeSet *pFVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  float fVar13;
  FDynamicMesh3 *local_res8;
  FDynamicMeshAttributeSet *local_res18;
  FDynamicMesh3 *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  float local_a8;
  code *local_a0;
  FDynamicMesh3 ***local_98;
  FString local_90;
  code *local_80;
  FDynamicMesh3 ***local_78;
  FString local_70;
  FDynamicMesh3 **local_60;
  FDynamicMeshAttributeSet **local_58;
  FDynamicMesh3 **local_50;
  FDynamicMesh3 **local_48;
  UUVProjectionTool *local_40;
  FDynamicMeshAttributeSet **local_38;
  FDynamicMesh3 **local_30;
  
  dVar8 = (this->WorldBounds).Max.field0_0x0._s_0.X - (this->WorldBounds).Min.field0_0x0._s_0.X;
  dVar11 = (this->WorldBounds).Max.field0_0x0._s_0.Y - (this->WorldBounds).Min.field0_0x0._s_0.Y;
  dVar12 = (this->WorldBounds).Max.field0_0x0._s_0.Z - (this->WorldBounds).Min.field0_0x0._s_0.Z;
  auVar9._0_8_ = dVar8 * dVar8;
  auVar9._8_8_ = 0;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar11 * dVar11 + auVar9._0_8_ + dVar12 * dVar12;
  auVar10 = sqrtpd(auVar9,auVar10);
  fVar13 = (float)(auVar10._0_8_ * __real_3f847ae147ae147b) * __real_3dcccccd;
  local_res8 = UPreviewMesh::GetMesh
                         ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr);
  local_res18 = (FDynamicMeshAttributeSet *)0x0;
  pFVar3 = (local_res8->AttributeSet).Ptr;
  pFVar7 = local_res18;
  if (pFVar3 != (FDynamicMeshAttributeSet *)0x0) {
    pFVar7 = pFVar3;
  }
  iVar6 = UMeshUVChannelProperties::GetSelectedChannelIndex
                    ((this->UVChannelProperties).field0_0x0.DebugPtr,true);
  if ((iVar6 < (pFVar7->UVLayers).Array.ArrayNum) && (-1 < iVar6)) {
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_res18 = *(FDynamicMeshAttributeSet **)
                   ((pFVar7->UVLayers).Array.AllocatorInstance.Data + (longlong)iVar6 * 8);
  }
  local_b8 = local_res8;
  local_b0 = 0xff0ff00f;
  local_ac = 0x40000000;
  local_a8 = fVar13;
  if (((this->TriangleROI).Object == (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = (this->EdgeRenderer).field0_0x0.DebugPtr;
  if (((this->TriangleROI).Object)->ArrayNum < 1) {
    local_58 = &local_res18;
    local_50 = &local_b8;
    local_78 = &local_60;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<`UUVProjectionTool::OnMeshUpdated'::__l7::<lambda_3>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
               ::Call;
    uVar1 = (local_res8->EdgeRefCounts).RefCounts.CurBlock;
    uVar2 = (local_res8->EdgeRefCounts).RefCounts.CurBlockUsed;
    local_60 = &local_res8;
    ::FString::FString(&local_70,L"UVSeams");
    UPreviewGeometry::CreateOrUpdateLineSet
              (this_00,&local_70,uVar2 + uVar1 * 0x200,
               (TFunctionRef<void___cdecl(int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&)>
                *)&local_80,1);
    local_90.Data.AllocatorInstance.Data = local_70.Data.AllocatorInstance.Data;
  }
  else {
    local_38 = &local_res18;
    local_30 = &local_b8;
    local_98 = &local_48;
    local_a0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UUVProjectionTool::OnMeshUpdated'::__l5::<lambda_2>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
               ::Call;
    uVar1 = (local_res8->EdgeRefCounts).RefCounts.CurBlock;
    uVar2 = (local_res8->EdgeRefCounts).RefCounts.CurBlockUsed;
    local_48 = &local_res8;
    local_40 = this;
    ::FString::FString(&local_90,L"UVSeams");
    UPreviewGeometry::CreateOrUpdateLineSet
              (this_00,&local_90,uVar2 + uVar1 * 0x200,
               (TFunctionRef<void___cdecl(int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&)>
                *)&local_a0,1);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  return;
}

// OnPropertyModified @ 14cd75360

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
UUVProjectionTool::OnPropertyModified(UUVProjectionTool *this,UObject *param_1,FProperty *param_2)

{
  UUVProjectionToolProperties *pUVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  bool bVar6;
  bool bVar7;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  pUVar1 = (this->BasicProperties).field0_0x0.DebugPtr;
  if (pUVar1 == (UUVProjectionToolProperties *)0x0) {
    bVar6 = param_1 == (UObject *)0x0;
  }
  else {
    bVar6 = pUVar1 == (UUVProjectionToolProperties *)param_1;
  }
  if (!bVar6) {
    return;
  }
  if (pUVar1->bProportionalDimensions == false) {
    return;
  }
  bVar6 = false;
  bVar3 = false;
  if ((param_2 == (FProperty *)0x0) ||
     (bVar6 = false, bVar3 = false, (*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
LAB_14cd75428:
    bVar7 = false;
  }
  else {
    pFVar5 = ::FString::FString(&local_18,"Vector");
    local_res8 = *(FName *)(param_2[1]._padding_ + 0x18);
    ::FName::ToString(&local_res8,&local_28);
    bVar3 = true;
    bVar6 = true;
    iVar4 = (pFVar5->Data).ArrayNum;
    if (local_28.Data.ArrayNum == iVar4) {
      if (1 < local_28.Data.ArrayNum) {
        iVar4 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_28.Data.AllocatorInstance.Data,
                           (wchar_t *)(pFVar5->Data).AllocatorInstance.Data);
        bVar7 = iVar4 == 0;
        goto LAB_14cd7541c;
      }
    }
    else {
      bVar7 = local_28.Data.ArrayNum + iVar4 == 1;
LAB_14cd7541c:
      if (!bVar7) goto LAB_14cd75428;
    }
    bVar7 = true;
  }
  if ((bVar6) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar7) {
    pUVar1 = (this->BasicProperties).field0_0x0.DebugPtr;
    iVar4 = this->DimensionsWatcher;
    dVar2 = (pUVar1->Dimensions).field0_0x0._s_0.Y;
    (this->CachedDimensions).field0_0x0._s_0.X = (pUVar1->Dimensions).field0_0x0._s_0.X;
    (this->CachedDimensions).field0_0x0._s_0.Y = dVar2;
    (this->CachedDimensions).field0_0x0._s_0.Z = (pUVar1->Dimensions).field0_0x0._s_0.Z;
    FWatchablePropertySet::SilentUpdateWatcherAtIndex
              ((FWatchablePropertySet *)&pUVar1->_padding_,iVar4);
  }
  return;
}

// OnShutdown @ 14cd75830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall UUVProjectionTool::OnShutdown(UUVProjectionTool *this,EToolShutdownType param_1)

{
  double dVar1;
  UMeshUVChannelProperties *pUVar2;
  code *pcVar3;
  UUVProjectionToolProperties *pUVar4;
  UExistingMeshMaterialProperties *pUVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  char cVar17;
  TTransform<double> *pTVar18;
  longlong lVar19;
  FText *pFVar20;
  FGeometrySelection *pFVar21;
  UInteractiveToolManager *this_00;
  UInteractiveGizmoManager *pUVar22;
  undefined1 auStackY_158 [32];
  FString local_128;
  FString local_118;
  FString local_108;
  FText local_f8;
  FDynamicMeshOpResult local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pUVar2 = (this->UVChannelProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar2->_padding_ + 0x2b0);
  ::FString::FString(&local_128,L"");
  (*pcVar3)(pUVar2,this,&local_128);
  if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Data.AllocatorInstance.Data);
  }
  pUVar4 = (this->BasicProperties).field0_0x0.DebugPtr;
  dVar6 = (pUVar4->Dimensions).field0_0x0._s_0.Y;
  dVar1 = (pUVar4->Dimensions).field0_0x0._s_0.Z;
  (pUVar4->SavedDimensions).field0_0x0._s_0.X = (pUVar4->Dimensions).field0_0x0._s_0.X;
  (pUVar4->SavedDimensions).field0_0x0._s_0.Y = dVar6;
  (pUVar4->SavedDimensions).field0_0x0._s_0.Z = dVar1;
  pUVar4 = (this->BasicProperties).field0_0x0.DebugPtr;
  pUVar4->bSavedProportionalDimensions = pUVar4->bProportionalDimensions;
  pTVar18 = UCombinedTransformGizmo::GetGizmoTransform
                      ((this->TransformGizmo).field0_0x0.DebugPtr,&local_88);
  dVar1 = (pTVar18->Rotation).XY.m128d_f64[1];
  dVar6 = (pTVar18->Rotation).ZW.m128d_f64[0];
  dVar7 = (pTVar18->Rotation).ZW.m128d_f64[1];
  dVar8 = (pTVar18->Translation).XY.m128d_f64[0];
  dVar9 = (pTVar18->Translation).XY.m128d_f64[1];
  dVar10 = (pTVar18->Translation).ZW.m128d_f64[0];
  dVar11 = (pTVar18->Translation).ZW.m128d_f64[1];
  dVar12 = (pTVar18->Scale3D).XY.m128d_f64[0];
  dVar13 = (pTVar18->Scale3D).XY.m128d_f64[1];
  dVar14 = (pTVar18->Scale3D).ZW.m128d_f64[0];
  dVar15 = (pTVar18->Scale3D).ZW.m128d_f64[1];
  pUVar4 = (this->BasicProperties).field0_0x0.DebugPtr;
  (pUVar4->SavedTransform).Rotation.XY.m128d_f64[0] = (pTVar18->Rotation).XY.m128d_f64[0];
  (pUVar4->SavedTransform).Rotation.XY.m128d_f64[1] = dVar1;
  (pUVar4->SavedTransform).Rotation.ZW.m128d_f64[0] = dVar6;
  (pUVar4->SavedTransform).Rotation.ZW.m128d_f64[1] = dVar7;
  (pUVar4->SavedTransform).Translation.XY.m128d_f64[0] = dVar8;
  (pUVar4->SavedTransform).Translation.XY.m128d_f64[1] = dVar9;
  (pUVar4->SavedTransform).Translation.ZW.m128d_f64[0] = dVar10;
  (pUVar4->SavedTransform).Translation.ZW.m128d_f64[1] = dVar11;
  (pUVar4->SavedTransform).Scale3D.XY.m128d_f64[0] = dVar12;
  (pUVar4->SavedTransform).Scale3D.XY.m128d_f64[1] = dVar13;
  (pUVar4->SavedTransform).Scale3D.ZW.m128d_f64[0] = dVar14;
  (pUVar4->SavedTransform).Scale3D.ZW.m128d_f64[1] = dVar15;
  pUVar4 = (this->BasicProperties).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar4->_padding_ + 0x2b0);
  ::FString::FString(&local_118,L"");
  (*pcVar3)(pUVar4,this,&local_118);
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  pUVar5 = (this->MaterialSettings).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(pUVar5->_padding_ + 0x2b0);
  ::FString::FString(&local_108,L"");
  (*pcVar3)(pUVar5,this,&local_108);
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  UPreviewGeometry::Disconnect((this->EdgeRenderer).field0_0x0.DebugPtr);
  UE::ToolTarget::ShowSourceObject(*(UToolTarget **)&this->field_0xc8);
  UMeshOpPreviewWithBackgroundCompute::Shutdown((this->Preview).field0_0x0.DebugPtr,&local_e8);
  if (param_1 == Accept) {
    lVar19 = (**(code **)(*(longlong *)this + 0x2d8))(this);
    pcVar3 = *(code **)(*(longlong *)(lVar19 + 0x28) + 0x10);
    pFVar20 = FText::AsLocalizable_Advanced_LocText
                        (&local_f8,L"UUVProjectionTool",L"UVProjectionToolTransactionName",
                         L"Project UVs");
    (*pcVar3)(lVar19 + 0x28,pFVar20);
    if (local_f8.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_f8.TextData.Reference + 0x10))();
    }
    if (local_e8.Mesh.Ptr == (FDynamicMesh3 *)0x0) {
      bVar16 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7217535688722350350>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\UVProjectionTool.cpp"
                          ,0x10e,"NewDynamicMesh");
      if (bVar16) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      UE::ToolTarget::CommitDynamicMeshUVUpdate
                (*(UToolTarget **)&this->field_0xc8,local_e8.Mesh.Ptr);
    }
    cVar17 = (**(code **)(*(longlong *)this + 0x3d8))(this);
    if (cVar17 != '\0') {
      pFVar21 = (FGeometrySelection *)(**(code **)(*(longlong *)this + 0x3e0))(this);
      UE::Geometry::SetToolOutputGeometrySelectionForTarget
                ((UInteractiveTool *)this,*(UToolTarget **)&this->field_0xc8,pFVar21);
    }
    lVar19 = (**(code **)(*(longlong *)this + 0x2d8))(this);
    (**(code **)(*(longlong *)(lVar19 + 0x28) + 0x18))(lVar19 + 0x28);
  }
  this_00 = (UInteractiveToolManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  pUVar22 = UInteractiveToolManager::GetPairedGizmoManager(this_00);
  (**(code **)(pUVar22->_padding_ + 0x2e8))(pUVar22,this);
  (this->TransformGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->TransformProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  USingleTargetWithSelectionTool::OnShutdown((USingleTargetWithSelectionTool *)this,param_1);
  if (local_e8.Mesh.Ptr != (FDynamicMesh3 *)0x0) {
    (**(code **)(local_e8.Mesh.Ptr)->_padding_)(local_e8.Mesh.Ptr,1);
  }
  return;
}

// OnTick @ 14cd75de0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UUVProjectionTool::OnTick(UUVProjectionTool *this,float param_1)

{
  USingleTargetWithSelectionTool::OnTick((USingleTargetWithSelectionTool *)this,param_1);
  if (this->bHavePendingAction != false) {
    (**(code **)(*(longlong *)this + 0x3f0))(this,this->PendingAction);
    this->bHavePendingAction = false;
    this->PendingAction = NoAction;
  }
  UMeshOpPreviewWithBackgroundCompute::Tick((this->Preview).field0_0x0.DebugPtr,param_1);
  return;
}

// Render @ 14cd7adb0

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

void __thiscall UUVProjectionTool::Render(UUVProjectionTool *this,IToolsContextRenderAPI *param_1)

{
  FToolDataVisualizer *this_00;
  EUVProjectionMethod EVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_238 [32];
  FLinearColor *local_218;
  float local_210;
  FLinearColor *local_208;
  float local_200;
  undefined1 local_1f8;
  double local_1e8 [8];
  undefined8 local_1a8;
  double local_1a0;
  TVector<double>_u_0 local_198;
  double local_180;
  double dStack_178;
  double local_170;
  double dStack_168;
  double local_160;
  double local_158;
  double local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  double local_130;
  double dStack_128;
  double local_120;
  undefined1 local_118;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStack_238;
  this_00 = &this->ProjectionShapeVisualizer;
  (this->ProjectionShapeVisualizer).bDepthTested = false;
  FToolDataVisualizer::BeginFrame(this_00,param_1,&this->CameraState);
  GetProjectionBox(this,(TOrientedBox3<double> *)&local_198._s_0);
  dVar4 = __real_3ff0000000000000;
  uVar9 = (uint)__xmm_80000000000000008000000000000000;
  uVar7 = SUB84(local_158,0) ^ uVar9;
  uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  uVar8 = (uint)((ulonglong)local_158 >> 0x20) ^ uVar10;
  uVar5 = SUB84(local_160,0) ^ uVar9;
  uVar6 = (uint)((ulonglong)local_160 >> 0x20) ^ uVar10;
  local_108.Translation.XY.m128d_f64[0] = local_198._s_0.X;
  local_108.Translation.XY.m128d_f64[1] = local_198._s_0.Y;
  uVar9 = SUB84(local_150,0) ^ uVar9;
  uVar10 = (uint)((ulonglong)local_150 >> 0x20) ^ uVar10;
  local_108.Rotation.ZW.m128d_f64[0] = local_170;
  local_108.Rotation.ZW.m128d_f64[1] = dStack_168;
  local_1a0 = local_150 - (double)CONCAT44(uVar10,uVar9);
  local_108.Translation.ZW.m128d_f64[0] = local_198._s_0.Z;
  local_108.Translation.ZW.m128d_f64[1] = 0.0;
  local_108.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_108.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  dVar3 = (double)(float)(local_160 - (double)CONCAT44(uVar6,uVar5));
  dVar2 = (double)(float)(local_158 - (double)CONCAT44(uVar8,uVar7));
  local_108.Rotation.XY.m128d_f64[0] = local_180;
  local_108.Rotation.XY.m128d_f64[1] = dStack_178;
  local_108.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_108.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  if (((this->BasicProperties).field0_0x0.DebugPtr)->ProjectionType == Cylinder) {
    local_1e8[2] = __real_3ff0000000000000;
    local_108.Scale3D.ZW.m128d_f64[0] = __real_3ff0000000000000;
    local_108.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_108.Scale3D.XY.m128d_f64[0] = dVar3;
    local_108.Scale3D.XY.m128d_f64[1] = dVar2;
  }
  FToolDataVisualizer::SetTransform(this_00,&local_108);
  EVar1 = ((this->BasicProperties).field0_0x0.DebugPtr)->ProjectionType;
  if (EVar1 == Box) {
    local_218 = (FLinearColor *)
                CONCAT71(local_218._1_7_,(this->ProjectionShapeVisualizer).bDepthTested);
    local_148 = CONCAT44(uVar6,uVar5);
    local_140 = CONCAT44(uVar8,uVar7);
    local_138 = CONCAT44(uVar10,uVar9);
    local_130 = local_160;
    dStack_128 = local_158;
    local_118 = 1;
    local_120 = local_150;
    (**(code **)(this_00->_padding_ + 0x48))
              (this_00,&local_148,&(this->ProjectionShapeVisualizer).LineColor,
               (this->ProjectionShapeVisualizer).LineThickness);
  }
  else if (EVar1 == Cylinder) {
    local_208 = &(this->ProjectionShapeVisualizer).LineColor;
    local_1e8[2] = dVar4;
    local_1f8 = (this->ProjectionShapeVisualizer).bDepthTested;
    local_1e8[0] = 0.0;
    local_1e8[1] = 0.0;
    local_1e8[3] = 0.0;
    local_1e8[4] = 0.0;
    local_1e8[5] = (double)((float)local_1a0 * __real_bf000000);
    local_200 = (this->ProjectionShapeVisualizer).LineThickness;
    local_210 = 2.24208e-44;
    local_218 = (FLinearColor *)CONCAT44(local_218._4_4_,(float)local_1a0);
    (**(code **)(this_00->_padding_ + 0x40))(this_00,local_1e8 + 3,local_1e8,__real_3f000000);
  }
  else if (EVar1 == Plane) {
    local_218 = &(this->ProjectionShapeVisualizer).LineColor;
    local_1e8[6] = 0.0;
    local_1e8[1] = 0.0;
    local_1e8[2] = 0.0;
    local_210 = (this->ProjectionShapeVisualizer).LineThickness;
    local_208 = (FLinearColor *)
                CONCAT71(local_208._1_7_,(this->ProjectionShapeVisualizer).bDepthTested);
    local_1a8 = 0;
    local_1e8[5] = 0.0;
    local_1e8[3] = 0.0;
    local_1e8[4] = 0.0;
    local_1e8[0] = dVar3;
    local_1e8[7] = dVar2;
    (**(code **)(this_00->_padding_ + 0x50))(this_00,local_1e8 + 3,local_1e8,local_1e8 + 6);
  }
  else if (EVar1 == ExpMap) {
    local_218 = &(this->ProjectionShapeVisualizer).LineColor;
    local_1e8[6] = 0.0;
    local_1e8[4] = 0.0;
    local_1e8[5] = 0.0;
    local_210 = (this->ProjectionShapeVisualizer).LineThickness;
    local_208 = (FLinearColor *)
                CONCAT71(local_208._1_7_,(this->ProjectionShapeVisualizer).bDepthTested);
    local_1a8 = 0;
    local_1e8[2] = 0.0;
    local_1e8[0] = 0.0;
    local_1e8[1] = 0.0;
    local_1e8[3] = dVar3;
    local_1e8[7] = dVar2;
    (**(code **)(this_00->_padding_ + 0x50))(this_00,local_1e8,local_1e8 + 3,local_1e8 + 6);
  }
  FToolDataVisualizer::EndFrame(this_00);
  return;
}

// RequestAction @ 14cd7b150

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
UUVProjectionTool::RequestAction(UUVProjectionTool *this,EUVProjectionToolActions param_1)

{
  if (this->bHavePendingAction == false) {
    this->PendingAction = param_1;
    this->bHavePendingAction = true;
  }
  return;
}

// Setup @ 14cd7d9f0

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

void __thiscall UUVProjectionTool::Setup(UUVProjectionTool *this)

{
  int *piVar1;
  TUniquePtr<FSelectClickedAction,TDefaultDelete<FSelectClickedAction>_> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  code *pcVar7;
  FSelectClickedAction *pFVar8;
  FScriptContainerElement *pFVar9;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  FLinearColor FVar21;
  bool bVar22;
  char cVar23;
  int iVar24;
  UClass *pUVar25;
  UUVProjectionToolProperties *pUVar26;
  UMeshUVChannelProperties *pUVar27;
  UExistingMeshMaterialProperties *pUVar28;
  UUVProjectionToolEditActions *pUVar29;
  UTransformProxy *pUVar30;
  UInteractiveToolManager *pUVar31;
  UCombinedTransformGizmo *pUVar32;
  longlong lVar33;
  TTransform<double> *pTVar34;
  TPropertyWatcher<UE::Math::TVector<double>_> *this_00;
  TPropertyWatcher<UE::Math::TVector<double>_> *pTVar35;
  void *this_01;
  undefined8 *puVar36;
  USceneSnappingManager *pUVar37;
  UObject *pUVar38;
  USingleClickInputBehavior *pUVar39;
  UPreviewGeometry *this_02;
  UWorld *pUVar40;
  FText *pFVar41;
  longlong *plVar42;
  undefined ***pppuVar43;
  TPropertyWatcher<UE::Math::TVector<double>_> *pTVar44;
  double *pdVar45;
  FScriptContainerElement *pFVar46;
  undefined8 uVar47;
  undefined8 *puVar48;
  TArray<UPrimitiveComponent_const_*,TSizedDefaultAllocator<32>_> *pTVar49;
  FInputBehaviorModifierStates *pFVar50;
  FSharedReferencer<1> FVar51;
  undefined1 auStackY_5d8 [32];
  undefined1 local_588 [8];
  undefined4 local_580 [2];
  UPrimitiveComponent *local_578 [2];
  FString local_568;
  TPairInitializer<int_const_&,TFunction<bool___cdecl(FInputDeviceState_const_&)>_const_&> local_558
  ;
  UUVProjectionTool *local_548;
  UUVProjectionTool *local_540;
  UUVProjectionTool *local_538 [2];
  code *local_528;
  undefined **local_518;
  UUVProjectionTool *local_510;
  UUVProjectionTool **local_508;
  undefined ***local_500;
  code *local_4f8;
  undefined **local_4e8;
  UUVProjectionTool *local_4e0;
  undefined ***local_4d0;
  undefined4 *local_4c8;
  undefined1 *local_4c0;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  <lambda_1> local_478;
  <lambda_3> local_470;
  code *local_468;
  longlong lStack_460;
  FText local_458;
  FText local_448;
  longlong local_438;
  undefined1 local_430 [8];
  undefined1 local_428 [24];
  UUVProjectionTool *local_410;
  undefined8 local_400;
  code *local_3f8 [2];
  undefined **local_3e8;
  UUVProjectionTool *local_3e0;
  undefined8 local_3d0;
  code *local_3c8 [2];
  code *local_3b8 [3];
  undefined8 local_3a0;
  code *local_398 [2];
  code *local_388 [3];
  undefined8 local_370;
  undefined1 local_368 [128];
  undefined1 local_2e8 [80];
  TReferenceControllerBase<1> local_298;
  FSharedReferencer<1> local_280;
  undefined1 local_268 [128];
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined8 local_1c8;
  double *pdStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  TVector<double>_u_0 TStack_1a0;
  undefined1 local_188 [16];
  undefined **local_178;
  code *local_170;
  undefined8 local_160;
  undefined1 local_158 [32];
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  TTransform<double> local_f8;
  double local_98;
  
  local_98 = (double)(__security_cookie.value ^ (ulonglong)auStackY_5d8);
  UInteractiveTool::Setup((UInteractiveTool *)this);
  UE::ToolTarget::HideSourceObject(*(UToolTarget **)&this->field_0xc8);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar25 = UUVProjectionToolProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_368,pUVar25);
  local_368._8_8_ = this;
  pUVar26 = (UUVProjectionToolProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_368);
  if (local_368._64_8_ != 0) {
    plVar42 = (longlong *)(local_368 + 0x50);
    if ((longlong *)local_368._104_8_ != (longlong *)0x0) {
      plVar42 = (longlong *)local_368._104_8_;
    }
    (**(code **)(*plVar42 + 0x10))(plVar42);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar26 != (UUVProjectionToolProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar26);
  }
  (this->BasicProperties).field0_0x0.DebugPtr = pUVar26;
  pcVar7 = *(code **)(pUVar26->_padding_ + 0x2b8);
  ::FString::FString(&local_4a8,L"");
  (*pcVar7)(pUVar26,this,&local_4a8);
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  local_558.Value = (TFunction<bool___cdecl(FInputDeviceState_const_&)> *)this;
  TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>::
  AddLambda<_UUVProjectionTool::Setup_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>
              *)&((this->BasicProperties).field0_0x0.DebugPtr)->_padding_,&local_478);
  InitializeMesh(this);
  UpdateNumPreviews(this);
  pUVar27 = NewObject<UMeshUVChannelProperties>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar27 != (UMeshUVChannelProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar27);
  }
  (this->UVChannelProperties).field0_0x0.DebugPtr = pUVar27;
  pcVar7 = *(code **)(pUVar27->_padding_ + 0x2b8);
  ::FString::FString(&local_498,L"");
  (*pcVar7)(pUVar27,this);
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  UMeshUVChannelProperties::Initialize
            ((this->UVChannelProperties).field0_0x0.DebugPtr,(this->InputMesh).Object,false);
  UMeshUVChannelProperties::ValidateSelection((this->UVChannelProperties).field0_0x0.DebugPtr,true);
  pUVar27 = (this->UVChannelProperties).field0_0x0.DebugPtr;
  local_428._16_8_ =
       &UE::Core::Private::Function::
        TFunction_OwnedObject<`UUVProjectionTool::Setup'::`2'::<lambda_2>,0,0>::_vftable_;
  pTVar44 = (TPropertyWatcher<UE::Math::TVector<double>_> *)0x0;
  local_428._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UUVProjectionTool::Setup'::__l2::<lambda_2>,void,FString_const_&>::Call;
  local_400 = 0;
  local_410 = this;
  FWatchablePropertySet::WatchProperty<FString>
            ((FWatchablePropertySet *)&pUVar27->_padding_,&pUVar27->UVChannel,
             (TFunction<void___cdecl(FString_const_&)> *)local_428);
  pUVar28 = NewObject<UExistingMeshMaterialProperties>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar28 != (UExistingMeshMaterialProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar28);
  }
  (this->MaterialSettings).field0_0x0.DebugPtr = pUVar28;
  pcVar7 = *(code **)(pUVar28->_padding_ + 0x2b8);
  ::FString::FString(&local_488,L"");
  (*pcVar7)(pUVar28,this,&local_488);
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  local_548 = this;
  TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>::
  AddLambda<_UUVProjectionTool::Setup_::__l2::<lambda_3>_>
            ((TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>
              *)&((this->MaterialSettings).field0_0x0.DebugPtr)->_padding_,&local_470);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar25 = UUVProjectionToolEditActions::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_2e8,pUVar25);
  local_2e8._8_8_ = this;
  pUVar29 = (UUVProjectionToolEditActions *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_2e8);
  if ((UUVProjectionOperatorFactory *)local_2e8._64_8_ != (UUVProjectionOperatorFactory *)0x0) {
    FVar51.ReferenceController = &local_298;
    if (local_280.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      FVar51.ReferenceController = local_280.ReferenceController;
    }
    (**(code **)((FVar51.ReferenceController)->_padding_ + 0x10))(FVar51.ReferenceController);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar29 != (UUVProjectionToolEditActions *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar29);
  }
  (this->EditActions).field0_0x0.DebugPtr = pUVar29;
  local_540 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&(pUVar29->ParentTool).WeakPtr,(FObjectPtr)&local_540);
  (**(code **)(*(longlong *)this + 0x318))(this,(this->UVChannelProperties).field0_0x0.DebugPtr);
  (**(code **)(*(longlong *)this + 0x318))(this,(this->BasicProperties).field0_0x0.DebugPtr);
  (**(code **)(*(longlong *)this + 0x318))(this,(this->EditActions).field0_0x0.DebugPtr);
  (**(code **)(*(longlong *)this + 0x318))(this,(this->MaterialSettings).field0_0x0.DebugPtr);
  OnMaterialSettingsChanged(this);
  FVar21 = FLinearColor::Red;
  (this->ProjectionShapeVisualizer).LineThickness = 2.0;
  dVar20 = __real_3fe0000000000000;
  (this->ProjectionShapeVisualizer).LineColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FVar21.field0_0x0;
  fVar11 = GlobalVectorConstants::Float0001.m128_f32[0];
  fVar13 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar15 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar17 = GlobalVectorConstants::Float0001.m128_f32[3];
  dVar3 = (this->WorldBounds).Max.field0_0x0._s_0.X;
  dVar4 = (this->WorldBounds).Min.field0_0x0._s_0.X;
  dVar5 = (this->WorldBounds).Max.field0_0x0._s_0.Z;
  dVar6 = (this->WorldBounds).Min.field0_0x0._s_0.Z;
  dVar19 = ((this->WorldBounds).Max.field0_0x0._s_0.Y + (this->WorldBounds).Min.field0_0x0._s_0.Y) *
           dVar20;
  fVar12 = GlobalVectorConstants::Float1110.m128_f32[0];
  fVar14 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar16 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar18 = GlobalVectorConstants::Float1110.m128_f32[3];
  pUVar30 = NewObject<UTransformProxy>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar30 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar30);
  }
  (this->TransformProxy).field0_0x0.DebugPtr = pUVar30;
  local_158._8_4_ = SUB84((double)fVar13,0);
  local_158._0_8_ = (double)fVar11;
  local_158._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
  local_158._24_4_ = SUB84((double)fVar17,0);
  local_158._16_8_ = (double)fVar15;
  local_158._28_4_ = (int)((ulonglong)(double)fVar17 >> 0x20);
  local_138._8_4_ = SUB84(dVar19,0);
  local_138._0_8_ = (dVar3 + dVar4) * dVar20;
  local_138._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  dStack_120 = 0.0;
  local_118._8_4_ = SUB84((double)fVar14,0);
  local_118._0_8_ = (double)fVar12;
  local_118._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
  local_108._8_4_ = SUB84((double)fVar18,0);
  local_108._0_8_ = (double)fVar16;
  local_108._12_4_ = (int)((ulonglong)(double)fVar18 >> 0x20);
  local_128 = (dVar5 + dVar6) * dVar20;
  (**(code **)(pUVar30->_padding_ + 0x2c8))(pUVar30,local_158);
  local_568.Data.AllocatorInstance.Data = (FScriptContainerElement *)TransformChanged;
  local_568.Data._8_8_ = (ulonglong)(uint)local_568.Data.ArrayMax << 0x20;
  local_468 = TransformChanged;
  lStack_460._0_4_ = local_568.Data.ArrayNum;
  lStack_460._4_4_ = local_568.Data.ArrayMax;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::AddUObject<UUVProjectionTool>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
              *)&((this->TransformProxy).field0_0x0.DebugPtr)->OnTransformChanged,
             (UUVProjectionTool *)local_430,(pmf_38722715 *)this);
  local_568.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_568.Data.ArrayNum = 0;
  local_568.Data.ArrayMax = 0;
  pUVar31 = (UInteractiveToolManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  pUVar32 = UE::TransformGizmoUtil::CreateCustomTransformGizmo
                      (pUVar31,StandardTranslateRotate,this,&local_568);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar32 != (UCombinedTransformGizmo *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar32);
  }
  (this->TransformGizmo).field0_0x0.DebugPtr = pUVar32;
  if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_568.Data.AllocatorInstance.Data);
  }
  pUVar32 = (this->TransformGizmo).field0_0x0.DebugPtr;
  pcVar7 = *(code **)(*(longlong *)pUVar32 + 0x330);
  lVar33 = (**(code **)(*(longlong *)this + 0x2d8))(this);
  pTVar35 = (TPropertyWatcher<UE::Math::TVector<double>_> *)(lVar33 + 0x28);
  if (lVar33 == 0) {
    pTVar35 = pTVar44;
  }
  (*pcVar7)(pUVar32,(this->TransformProxy).field0_0x0.DebugPtr,pTVar35);
  pUVar26 = (this->BasicProperties).field0_0x0.DebugPtr;
  pUVar32 = (this->TransformGizmo).field0_0x0.DebugPtr;
  dVar3 = (pUVar26->Dimensions).field0_0x0._s_0.Y;
  (this->InitialDimensions).field0_0x0._s_0.X = (pUVar26->Dimensions).field0_0x0._s_0.X;
  (this->InitialDimensions).field0_0x0._s_0.Y = dVar3;
  (this->InitialDimensions).field0_0x0._s_0.Z = (pUVar26->Dimensions).field0_0x0._s_0.Z;
  this->bInitialProportionalDimensions = pUVar26->bProportionalDimensions;
  pTVar34 = UCombinedTransformGizmo::GetGizmoTransform(pUVar32,&local_f8);
  dVar3 = (pTVar34->Rotation).XY.m128d_f64[1];
  (this->InitialTransform).Rotation.XY.m128d_f64[0] = (pTVar34->Rotation).XY.m128d_f64[0];
  (this->InitialTransform).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar34->Rotation).ZW.m128d_f64[1];
  (this->InitialTransform).Rotation.ZW.m128d_f64[0] = (pTVar34->Rotation).ZW.m128d_f64[0];
  (this->InitialTransform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar34->Translation).XY.m128d_f64[1];
  (this->InitialTransform).Translation.XY.m128d_f64[0] = (pTVar34->Translation).XY.m128d_f64[0];
  (this->InitialTransform).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar34->Translation).ZW.m128d_f64[1];
  (this->InitialTransform).Translation.ZW.m128d_f64[0] = (pTVar34->Translation).ZW.m128d_f64[0];
  (this->InitialTransform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar34->Scale3D).XY.m128d_f64[1];
  (this->InitialTransform).Scale3D.XY.m128d_f64[0] = (pTVar34->Scale3D).XY.m128d_f64[0];
  (this->InitialTransform).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar34->Scale3D).ZW.m128d_f64[1];
  (this->InitialTransform).Scale3D.ZW.m128d_f64[0] = (pTVar34->Scale3D).ZW.m128d_f64[0];
  (this->InitialTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
  ApplyInitializationMode(this);
  pUVar26 = (this->BasicProperties).field0_0x0.DebugPtr;
  local_518 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UUVProjectionTool::Setup'::`2'::<lambda_6>,0,0>::_vftable_;
  local_508 = local_538;
  local_528 = UE::Core::Private::Function::
              TFunctionRefCaller<`UUVProjectionTool::Setup'::__l2::<lambda_6>,void,UE::Math::TVector<double>_const_&>
              ::Call;
  local_500 = (undefined ***)0x0;
  local_538[0] = this;
  local_510 = this;
  this_00 = ::operator_new(0xc0);
  pTVar35 = pTVar44;
  if (this_00 != (TPropertyWatcher<UE::Math::TVector<double>_> *)0x0) {
    local_3c8[0] = local_528;
    local_3a0 = 0;
    if (local_528 != (code *)0x0) {
      pppuVar43 = &local_518;
      if (local_500 != (undefined ***)0x0) {
        pppuVar43 = local_500;
      }
      (*(code *)**pppuVar43)(pppuVar43,local_3c8 + 2);
    }
    pTVar35 = FWatchablePropertySet::TPropertyWatcher<UE::Math::TVector<double>_>::
              TPropertyWatcher<UE::Math::TVector<double>_><UE::Math::TVector<double>,void>
                        (this_00,&pUVar26->Dimensions,
                         (TFunction<void___cdecl(UE::Math::TVector<double>_const_&)> *)local_3c8);
  }
  iVar24 = (int)pUVar26->_padding_;
  piVar1 = (int *)((longlong)&pUVar26->_padding_ + 4);
  if (iVar24 == *piVar1) {
    iVar24 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pUVar26->_padding_,piVar1);
  }
  *(int *)&pUVar26->_padding_ = iVar24 + 1;
  *(TPropertyWatcher<UE::Math::TVector<double>_> **)(pUVar26->_padding_ + (longlong)iVar24 * 8) =
       pTVar35;
  if (local_528 != (code *)0x0) {
    pppuVar43 = &local_518;
    if (local_500 != (undefined ***)0x0) {
      pppuVar43 = local_500;
    }
    (*(code *)(*pppuVar43)[2])(pppuVar43);
  }
  pUVar26 = (this->BasicProperties).field0_0x0.DebugPtr;
  local_3e8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UUVProjectionTool::Setup'::`2'::<lambda_4>,0,0>::_vftable_;
  this->DimensionsWatcher = iVar24;
  local_3d0 = 0;
  local_3f8[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UUVProjectionTool::Setup'::__l2::<lambda_4>,void,bool_const_&>
                 ::Call;
  local_3e0 = this;
  iVar24 = FWatchablePropertySet::WatchProperty<bool>
                     ((FWatchablePropertySet *)&pUVar26->_padding_,&pUVar26->bProportionalDimensions
                      ,(TFunction<void___cdecl(bool_const_&)> *)local_3f8);
  pUVar26 = (this->BasicProperties).field0_0x0.DebugPtr;
  this->DimensionsModeWatcher = iVar24;
  local_4e8 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UUVProjectionTool::Setup'::`2'::<lambda_7>,0,0>::_vftable_;
  local_4f8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UUVProjectionTool::Setup'::__l2::<lambda_7>,void,enum_EUVProjectionToolInitializationMode_const_&>
              ::Call;
  local_4d0 = (undefined ***)0x0;
  local_4e0 = this;
  this_01 = ::operator_new(0xa0);
  pTVar35 = pTVar44;
  if (this_01 != (void *)0x0) {
    local_398[0] = local_4f8;
    local_370 = 0;
    if (local_4f8 != (code *)0x0) {
      pppuVar43 = &local_4e8;
      if (local_4d0 != (undefined ***)0x0) {
        pppuVar43 = local_4d0;
      }
      (*(code *)**pppuVar43)(pppuVar43,local_398 + 2);
    }
    pTVar35 = (TPropertyWatcher<UE::Math::TVector<double>_> *)
              FWatchablePropertySet::TPropertyWatcher<enum_EUVProjectionToolInitializationMode>::
              TPropertyWatcher<enum_EUVProjectionToolInitializationMode><enum_EUVProjectionToolInitializationMode,void>
                        (this_01,&pUVar26->Initialization,
                         (TFunction<void___cdecl(EUVProjectionToolInitializationMode_const_&)> *)
                         local_398);
  }
  iVar24 = (int)pUVar26->_padding_;
  piVar1 = (int *)((longlong)&pUVar26->_padding_ + 4);
  if (iVar24 == *piVar1) {
    iVar24 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&pUVar26->_padding_,piVar1);
  }
  *(int *)&pUVar26->_padding_ = iVar24 + 1;
  *(TPropertyWatcher<UE::Math::TVector<double>_> **)(pUVar26->_padding_ + (longlong)iVar24 * 8) =
       pTVar35;
  if (local_4f8 != (code *)0x0) {
    pppuVar43 = &local_4e8;
    if (local_4d0 != (undefined ***)0x0) {
      pppuVar43 = local_4d0;
    }
    (*(code *)(*pppuVar43)[2])();
  }
  pUVar26 = (this->BasicProperties).field0_0x0.DebugPtr;
  puVar48 = (undefined8 *)pUVar26->_padding_;
  iVar24 = (int)pUVar26->_padding_;
  puVar36 = puVar48 + iVar24;
  while( true ) {
    if ((int)pUVar26->_padding_ != iVar24) {
      local_588[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FWatchablePropertySet::FPropertyWatcher,TDefaultDelete<FWatchablePropertySet::FPropertyWatcher>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_588);
    }
    if (puVar48 == puVar36) break;
    (**(code **)(*(longlong *)*puVar48 + 0x10))();
    puVar48 = puVar48 + 1;
  }
  pUVar26 = (this->BasicProperties).field0_0x0.DebugPtr;
  dVar4 = (pUVar26->Dimensions).field0_0x0._s_0.Y;
  dVar3 = (pUVar26->Dimensions).field0_0x0._s_0.Z;
  (this->CachedDimensions).field0_0x0._s_0.X = (pUVar26->Dimensions).field0_0x0._s_0.X;
  (this->CachedDimensions).field0_0x0._s_0.Y = dVar4;
  this->bTransformModified = false;
  (this->CachedDimensions).field0_0x0._s_0.Z = dVar3;
  pTVar35 = ::operator_new(0xb0);
  if (pTVar35 != (TPropertyWatcher<UE::Math::TVector<double>_> *)0x0) {
    memset(pTVar35,0,0xb0);
    pTVar35->_padding_ = (longlong)&___7FSelectClickedAction__6B_;
    pTVar44 = pTVar35;
  }
  pTVar2 = &this->SetPlaneCtrlClickBehaviorTarget;
  if (pTVar2 == (TUniquePtr<FSelectClickedAction,TDefaultDelete<FSelectClickedAction>_> *)&local_438
     ) {
    if (pTVar44 == (TPropertyWatcher<UE::Math::TVector<double>_> *)0x0) goto LAB_14cd7e29b;
    puVar36 = (undefined8 *)pTVar44->_padding_;
  }
  else {
    pTVar35 = (TPropertyWatcher<UE::Math::TVector<double>_> *)pTVar2->Ptr;
    pTVar2->Ptr = (FSelectClickedAction *)pTVar44;
    if (pTVar35 == (TPropertyWatcher<UE::Math::TVector<double>_> *)0x0) goto LAB_14cd7e29b;
    puVar36 = (undefined8 *)pTVar35->_padding_;
    pTVar44 = pTVar35;
  }
  (*(code *)*puVar36)(pTVar44,1);
LAB_14cd7e29b:
  pUVar31 = (UInteractiveToolManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  pUVar37 = USceneSnappingManager::Find(pUVar31);
  pTVar2->Ptr->SnapManager = pUVar37;
  pFVar8 = pTVar2->Ptr;
  local_1e8 = *(double *)&pFVar8->OnClickedPositionFunc;
  dVar4 = *(double *)&(pFVar8->OnClickedPositionFunc).field_0x8;
  local_1d8 = *(double *)&(pFVar8->OnClickedPositionFunc).field_0x10;
  dStack_1d0 = *(double *)&(pFVar8->OnClickedPositionFunc).field_0x18;
  dVar3 = *(double *)&(pFVar8->OnClickedPositionFunc).field_0x20;
  pdStack_1c0 = *(double **)&(pFVar8->OnClickedPositionFunc).field_0x28;
  *(code **)&pFVar8->OnClickedPositionFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UUVProjectionTool::Setup'::__l2::<lambda_8>,void,FHitResult_const_&>::
       Call;
  *(double *)&(pFVar8->OnClickedPositionFunc).field_0x8 = dStack_1e0;
  *(undefined4 *)&(pFVar8->OnClickedPositionFunc).field_0x10 = 0x5298b240;
  *(undefined4 *)&(pFVar8->OnClickedPositionFunc).field_0x14 = 1;
  *(UUVProjectionTool **)&(pFVar8->OnClickedPositionFunc).field_0x18 = this;
  *(undefined4 *)&(pFVar8->OnClickedPositionFunc).field_0x20 = (undefined4)local_1c8;
  *(undefined4 *)&(pFVar8->OnClickedPositionFunc).field_0x24 = local_1c8._4_4_;
  *(undefined4 *)&(pFVar8->OnClickedPositionFunc).field_0x28 = 0;
  *(undefined4 *)&(pFVar8->OnClickedPositionFunc).field_0x2c = 0;
  dStack_1e0 = dVar4;
  local_1c8 = dVar3;
  if (local_1e8 != 0.0) {
    pdVar45 = &local_1d8;
    if (pdStack_1c0 != (double *)0x0) {
      pdVar45 = pdStack_1c0;
    }
    (**(code **)((longlong)*pdVar45 + 0x10))();
  }
  pFVar8 = pTVar2->Ptr;
  pTVar49 = &pFVar8->InvisibleComponentsToHitTest;
  local_578[0] = UE::ToolTarget::GetTargetComponent(*(UToolTarget **)&this->field_0xc8);
  pFVar9 = (pTVar49->AllocatorInstance).Data;
  if (((pFVar9 <= (FScriptContainerElement *)local_578) &&
      ((FScriptContainerElement *)local_578 <
       pFVar9 + (longlong)(pFVar8->InvisibleComponentsToHitTest).ArrayMax * 8)) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar22)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar24 = (pFVar8->InvisibleComponentsToHitTest).ArrayNum;
  piVar1 = &(pFVar8->InvisibleComponentsToHitTest).ArrayMax;
  if (iVar24 == *piVar1) {
    iVar24 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar49->AllocatorInstance,piVar1);
  }
  (pFVar8->InvisibleComponentsToHitTest).ArrayNum = iVar24 + 1;
  *(UPrimitiveComponent **)((pTVar49->AllocatorInstance).Data + (longlong)iVar24 * 8) = local_578[0]
  ;
  pUVar38 = GetTransientPackageAsObject();
  pUVar39 = NewObject<USingleClickInputBehavior>(pUVar38);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar39 != (USingleClickInputBehavior *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar39);
  }
  (this->ClickToSetPlaneBehavior).field0_0x0.DebugPtr = pUVar39;
  local_1b8 = *(double *)&pUVar39->ModifierCheckFunc;
  dVar4 = *(double *)&(pUVar39->ModifierCheckFunc).field_0x8;
  local_1a8 = *(double *)&(pUVar39->ModifierCheckFunc).field_0x10;
  TStack_1a0._s_0.X = (double)*(undefined8 *)&(pUVar39->ModifierCheckFunc).field_0x18;
  dVar3 = *(double *)&(pUVar39->ModifierCheckFunc).field_0x20;
  TStack_1a0._s_0.Z = (double)*(undefined8 *)&(pUVar39->ModifierCheckFunc).field_0x28;
  *(code **)&pUVar39->ModifierCheckFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
       ::Call;
  *(double *)&(pUVar39->ModifierCheckFunc).field_0x8 = dStack_1b0;
  *(undefined4 *)&(pUVar39->ModifierCheckFunc).field_0x10 = 0x51e9f448;
  *(undefined4 *)&(pUVar39->ModifierCheckFunc).field_0x14 = 1;
  *(undefined4 *)&(pUVar39->ModifierCheckFunc).field_0x18 = 0x496ad370;
  *(undefined4 *)&(pUVar39->ModifierCheckFunc).field_0x1c = 1;
  *(undefined4 *)&(pUVar39->ModifierCheckFunc).field_0x20 = TStack_1a0._8_4_;
  *(undefined4 *)&(pUVar39->ModifierCheckFunc).field_0x24 = TStack_1a0._12_4_;
  *(undefined4 *)&(pUVar39->ModifierCheckFunc).field_0x28 = 0;
  *(undefined4 *)&(pUVar39->ModifierCheckFunc).field_0x2c = 0;
  dStack_1b0 = dVar4;
  TStack_1a0._s_0.Y = dVar3;
  if (local_1b8 != 0.0) {
    pdVar45 = &local_1a8;
    if ((double *)TStack_1a0._s_0.Z != (double *)0x0) {
      pdVar45 = (double *)TStack_1a0._s_0.Z;
    }
    (**(code **)((longlong)*pdVar45 + 0x10))();
  }
  pUVar39 = (this->ClickToSetPlaneBehavior).field0_0x0.DebugPtr;
  pFVar50 = &pUVar39->Modifiers;
  local_160 = (undefined ***)0x0;
  local_178 = &
              ___7__TFunction_OwnedObject_P6A_NAEBUFInputDeviceState___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_170 = FInputDeviceState::IsShiftKeyDown;
  local_188._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<bool_(__cdecl*)(FInputDeviceState_const_&),bool,FInputDeviceState_const_&>
       ::Call;
  pFVar46 = (pFVar50->ModifierIDs).AllocatorInstance.Data;
  local_580[0] = 1;
  pFVar9 = pFVar46 + (longlong)(pUVar39->Modifiers).ModifierIDs.ArrayNum * 4;
  do {
    if (pFVar46 == pFVar9) {
LAB_14cd7e55a:
      pFVar9 = (pFVar50->ModifierIDs).AllocatorInstance.Data;
      if (((pFVar9 <= (FScriptContainerElement *)local_580) &&
          ((FScriptContainerElement *)local_580 <
           pFVar9 + (longlong)(pUVar39->Modifiers).ModifierIDs.ArrayMax * 4)) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar22)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar24 = (pUVar39->Modifiers).ModifierIDs.ArrayNum;
      piVar1 = &(pUVar39->Modifiers).ModifierIDs.ArrayMax;
      if (iVar24 == *piVar1) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pFVar50,piVar1);
      }
      (pUVar39->Modifiers).ModifierIDs.ArrayNum = iVar24 + 1;
      *(undefined4 *)((pFVar50->ModifierIDs).AllocatorInstance.Data + (longlong)iVar24 * 4) =
           local_580[0];
      local_4c8 = local_580;
      local_4c0 = local_188;
      TSet<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>,TDefaultMapHashableKeyFuncs<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<int_const_&,TFunction<bool___cdecl(FInputDeviceState_const_&)>_const_&>_>
                ((TSet<TTuple<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>_>,TDefaultMapHashableKeyFuncs<int,TFunction<bool___cdecl(FInputDeviceState_const_&)>,0>,FDefaultSetAllocator>
                  *)&(pUVar39->Modifiers).ModifierTests,&local_558,(bool *)&local_4c8);
      if ((code *)local_188._0_8_ != (code *)0x0) {
        uVar47 = &local_178;
        if ((undefined ***)local_160 != (undefined ***)0x0) {
          uVar47 = local_160;
        }
        (*(code *)(*(undefined ***)uVar47)[2])();
      }
      pUVar39 = (this->ClickToSetPlaneBehavior).field0_0x0.DebugPtr;
      (**(code **)(pUVar39->_padding_ + 0x378))(pUVar39,pTVar2->Ptr);
      (**(code **)(*(longlong *)this + 0x2f8))
                (this,(this->ClickToSetPlaneBehavior).field0_0x0.DebugPtr,0);
      cVar23 = (**(code **)(*(longlong *)this + 0x3d8))(this);
      if (cVar23 != '\0') {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)this,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar25 = Z_Construct_UClass_UGeometrySelectionVisualizationProperties_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_268,pUVar25);
        local_268._8_8_ = this;
        pUVar38 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_268);
        if (local_268._64_8_ != 0) {
          plVar42 = (longlong *)(local_268 + 0x50);
          if ((longlong *)local_268._104_8_ != (longlong *)0x0) {
            plVar42 = (longlong *)local_268._104_8_;
          }
          (**(code **)(*plVar42 + 0x10))(plVar42);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar38 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar38);
        }
        *(UObject **)&this->field_0x138 = pUVar38;
        pcVar7 = *(code **)(*(longlong *)pUVar38 + 0x2b8);
        ::FString::FString(&local_4b8,L"");
        (*pcVar7)(pUVar38,this,&local_4b8);
        if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
        }
        (**(code **)(*(longlong *)this + 0x318))(this,*(undefined8 *)&this->field_0x138);
        UGeometrySelectionVisualizationProperties::Initialize
                  (*(UGeometrySelectionVisualizationProperties **)&this->field_0x138,
                   (UInteractiveTool *)this);
        *(undefined1 *)(*(longlong *)&this->field_0x138 + 0xb0) = 1;
        *(undefined1 *)(*(longlong *)&this->field_0x138 + 0xb2) = this->field_0xd8;
        *(undefined1 *)(*(longlong *)&this->field_0x138 + 0xb3) = this->field_0xdc;
        this_02 = NewObject<UPreviewGeometry>((UObject *)this);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this_02 != (UPreviewGeometry *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this_02);
        }
        *(UPreviewGeometry **)&this->field_0x140 = this_02;
        pUVar40 = (UWorld *)(**(code **)(*(longlong *)this + 0x3c0))(this);
        UPreviewGeometry::CreateInWorld(this_02,pUVar40,&this->WorldTransform);
        pTVar10 = (this->TriangleROI).Object;
        if (((this->InputMesh).Object == (FDynamicMesh3 *)0x0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x44d,L""), bVar22)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        UE::Geometry::InitializeGeometrySelectionVisualization
                  (*(UPreviewGeometry **)&this->field_0x140,
                   *(UGeometrySelectionVisualizationProperties **)&this->field_0x138,
                   (this->InputMesh).Object,(FGeometrySelection *)&this->field_0xd8,
                   (FGroupTopology *)0x0,(FGeometrySelection *)0x0,pTVar10,(TTransform<double> *)0x0
                  );
      }
      UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
      pcVar7 = *(code **)(*(longlong *)this + 0x380);
      pFVar41 = FText::AsLocalizable_Advanced_LocText
                          (&local_458,L"UUVProjectionTool",L"ToolName",L"UV Projection");
      (*pcVar7)(this,pFVar41);
      if (local_458.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_458.TextData.Reference + 0x10))();
      }
      plVar42 = (longlong *)(**(code **)(*(longlong *)this + 0x2d8))(this);
      pcVar7 = *(code **)(*plVar42 + 0x360);
      pFVar41 = FText::AsLocalizable_Advanced_LocText
                          (&local_448,L"UUVProjectionTool",L"UVProjectionToolDescription",
                           L"Generate UVs for a Mesh by projecting onto simple geometric shapes. Ctrl+click to reposition shape. Shift+Ctrl+click to reposition shape without reorienting. Face selections can be made in the PolyEdit and TriEdit Tools. "
                          );
      (*pcVar7)(plVar42,pFVar41,2);
      if (local_448.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_448.TextData.Reference + 0x10))();
      }
      return;
    }
    if (*(int *)pFVar46 == 1) {
      bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("ModifierIDs.Contains(ModifierID) == false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\InteractiveToolsFramework\\Public\\BaseBehaviors\\InputBehaviorModifierStates.h"
                          ,0x26,L"");
      if (bVar22) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      goto LAB_14cd7e55a;
    }
    pFVar46 = pFVar46 + 4;
  } while( true );
}

// StaticRegisterNativesUUVProjectionTool @ 14cd81540

void __cdecl UUVProjectionTool::StaticRegisterNativesUUVProjectionTool(void)

{
  return;
}

// TransformChanged @ 14cd82520

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
UUVProjectionTool::TransformChanged
          (UUVProjectionTool *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
  this->bTransformModified = true;
  return;
}

// UpdateNumPreviews @ 14cd84620

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

void __thiscall UUVProjectionTool::UpdateNumPreviews(UUVProjectionTool *this)

{
  ForAnyElementType _Src;
  UObject *pUVar1;
  UClass *pUVar2;
  UUVProjectionOperatorFactory *pUVar3;
  UMeshOpPreviewWithBackgroundCompute *pUVar4;
  UWorld *pUVar5;
  UInteractiveToolManager *pUVar6;
  UMaterialInterface *pUVar7;
  UPreviewGeometry *this_00;
  double *pdVar8;
  IDynamicMeshOperatorFactory *pIVar9;
  undefined1 auStackY_128 [32];
  undefined1 local_e8 [16];
  FComponentMaterialSet local_d8;
  code *local_c8;
  longlong lStack_c0;
  undefined1 local_b8 [32];
  double local_98;
  UObject *pUStack_90;
  FObjectInstancingGraph *local_88;
  UPackage *pUStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double *local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UUVProjectionOperatorFactory::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar2);
  local_b8._8_8_ = pUVar1;
  pUVar3 = (UUVProjectionOperatorFactory *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if (local_78 != 0.0) {
    pdVar8 = &local_68;
    if (local_50 != (double *)0x0) {
      pdVar8 = local_50;
    }
    (**(code **)((longlong)*pdVar8 + 0x10))(pdVar8);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UUVProjectionOperatorFactory *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->OperatorFactory).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UUVProjectionTool *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  (pUVar3->Tool).field0_0x0.DebugPtr = this;
  pUVar4 = NewObject<UMeshOpPreviewWithBackgroundCompute>
                     ((UObject *)(this->OperatorFactory).field0_0x0.DebugPtr);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UMeshOpPreviewWithBackgroundCompute *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Preview).field0_0x0.DebugPtr = pUVar4;
  pUVar3 = (this->OperatorFactory).field0_0x0.DebugPtr;
  pUVar5 = (UWorld *)(**(code **)(*(longlong *)this + 0x3c0))(this);
  pIVar9 = (IDynamicMeshOperatorFactory *)&pUVar3->_padding_;
  if (pUVar3 == (UUVProjectionOperatorFactory *)0x0) {
    pIVar9 = (IDynamicMeshOperatorFactory *)0x0;
  }
  UMeshOpPreviewWithBackgroundCompute::Setup(pUVar4,pUVar5,pIVar9);
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             *(UToolTarget **)&this->field_0xc8);
  local_e8._0_8_ = OnMeshUpdated;
  local_e8._8_4_ = 0;
  lStack_c0 = (ulonglong)(uint)local_e8._12_4_ << 0x20;
  local_c8 = OnMeshUpdated;
  TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UUVProjectionTool>
            ((TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
              *)&((this->Preview).field0_0x0.DebugPtr)->OnMeshUpdated,(UUVProjectionTool *)local_e8,
             (pmf_29518497 *)this);
  UPreviewMesh::SetTangentsMode
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,AutoCalculated
            );
  UE::ToolTarget::GetMaterialSet(&local_d8,*(UToolTarget **)&this->field_0xc8,false);
  pUVar4 = (this->Preview).field0_0x0.DebugPtr;
  pUVar6 = (UInteractiveToolManager *)(**(code **)(*(longlong *)this + 0x2d8))(this);
  pUVar7 = ToolSetupUtil::GetDefaultWorkingMaterial(pUVar6);
  _Src.Data = local_d8.Materials.AllocatorInstance.Data;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  if (local_d8.Materials.ArrayNum == 0) {
    local_e8._12_4_ = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,local_d8.Materials.ArrayNum,0,(ForAnyElementType *)local_e8,
               local_d8.Materials.ArrayNum,(int *)(local_e8 + 0xc));
    memcpy((void *)local_e8._0_8_,_Src.Data,(longlong)local_d8.Materials.ArrayNum << 3);
  }
  UMeshOpPreviewWithBackgroundCompute::ConfigureMaterials
            (pUVar4,(TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *)local_e8,pUVar7,
             (UMaterialInterface *)0x0);
  UPreviewMesh::UpdatePreview
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (this->InputMesh).Object,FullUpdate,AllVertexAttribs);
  local_b8._0_8_ = (this->WorldTransform).Rotation.XY.m128d_f64[0];
  local_b8._8_8_ = (this->WorldTransform).Rotation.XY.m128d_f64[1];
  local_b8._16_8_ = (this->WorldTransform).Rotation.ZW.m128d_f64[0];
  local_b8._24_8_ = (this->WorldTransform).Rotation.ZW.m128d_f64[1];
  local_98 = (this->WorldTransform).Translation.XY.m128d_f64[0];
  pUStack_90 = (UObject *)(this->WorldTransform).Translation.XY.m128d_f64[1];
  local_88 = (FObjectInstancingGraph *)(this->WorldTransform).Translation.ZW.m128d_f64[0];
  pUStack_80 = (UPackage *)(this->WorldTransform).Translation.ZW.m128d_f64[1];
  local_78 = (this->WorldTransform).Scale3D.XY.m128d_f64[0];
  dStack_70 = (this->WorldTransform).Scale3D.XY.m128d_f64[1];
  local_68 = (this->WorldTransform).Scale3D.ZW.m128d_f64[0];
  dStack_60 = (this->WorldTransform).Scale3D.ZW.m128d_f64[1];
  UPreviewMesh::SetTransform
            ((((this->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (TTransform<double> *)local_b8);
  UMeshOpPreviewWithBackgroundCompute::SetVisibility((this->Preview).field0_0x0.DebugPtr,true);
  this_00 = NewObject<UPreviewGeometry>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UPreviewGeometry *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->EdgeRenderer).field0_0x0.DebugPtr = this_00;
  local_b8._0_8_ = (this->WorldTransform).Rotation.XY.m128d_f64[0];
  local_b8._8_8_ = (this->WorldTransform).Rotation.XY.m128d_f64[1];
  local_b8._16_8_ = (this->WorldTransform).Rotation.ZW.m128d_f64[0];
  local_b8._24_8_ = (this->WorldTransform).Rotation.ZW.m128d_f64[1];
  local_98 = (this->WorldTransform).Translation.XY.m128d_f64[0];
  pUStack_90 = (UObject *)(this->WorldTransform).Translation.XY.m128d_f64[1];
  local_88 = (FObjectInstancingGraph *)(this->WorldTransform).Translation.ZW.m128d_f64[0];
  pUStack_80 = (UPackage *)(this->WorldTransform).Translation.ZW.m128d_f64[1];
  local_78 = (this->WorldTransform).Scale3D.XY.m128d_f64[0];
  dStack_70 = (this->WorldTransform).Scale3D.XY.m128d_f64[1];
  local_68 = (this->WorldTransform).Scale3D.ZW.m128d_f64[0];
  dStack_60 = (this->WorldTransform).Scale3D.ZW.m128d_f64[1];
  pUVar5 = (UWorld *)(**(code **)(*(longlong *)this + 0x3c0))(this);
  UPreviewGeometry::CreateInWorld(this_00,pUVar5,(TTransform<double> *)local_b8);
  if (local_d8.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Materials.AllocatorInstance.Data);
  }
  return;
}

// UpdatePlaneFromClick @ 14cd84ba0

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
UUVProjectionTool::UpdatePlaneFromClick
          (UUVProjectionTool *this,TVector<double> *param_1,TVector<double> *param_2,bool param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  UTransformProxy *pUVar3;
  UCombinedTransformGizmo *pUVar4;
  undefined1 (*pauVar5) [16];
  undefined1 auStack_148 [32];
  TVector<double>_u_0 local_128;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  TQuaternion<double>_u_0 local_f0;
  TVector<double>_u_0 local_d0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_148;
  pUVar3 = (this->TransformProxy).field0_0x0.DebugPtr;
  pauVar5 = (undefined1 (*) [16])(**(code **)(pUVar3->_padding_ + 0x2c0))(pUVar3,&local_b8);
  local_128._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  local_128._s_0.X = (double)*(undefined8 *)&param_1->field0_0x0;
  local_128._s_0.Y = *(double *)((longlong)&param_1->field0_0x0 + 8);
  auVar1 = *pauVar5;
  local_b8 = auVar1._0_4_;
  uStack_b4 = auVar1._4_4_;
  uStack_b0 = auVar1._8_4_;
  uStack_ac = auVar1._12_4_;
  auVar2 = pauVar5[1];
  local_a8 = auVar2._0_4_;
  uStack_a4 = auVar2._4_4_;
  uStack_a0 = auVar2._8_4_;
  uStack_9c = auVar2._12_4_;
  local_108 = auVar1._8_8_;
  local_f8 = auVar2._8_8_;
  local_110 = auVar1._0_8_;
  local_100 = auVar2._0_8_;
  if (!param_3) {
    local_f0._s_0.X = 0.0;
    local_f0._s_0.Y = 0.0;
    local_f0._s_0.Z = 0.0;
    local_d0._s_0.X = (local_108 + local_108) * local_f8 + (local_100 + local_100) * local_110;
    local_d0._s_0.Y = (local_100 + local_100) * local_108 - (local_110 + local_110) * local_f8;
    local_f0._s_0.W = __real_3ff0000000000000;
    local_d0._s_0.Z =
         __real_3ff0000000000000 -
         ((local_108 + local_108) * local_108 + (local_110 + local_110) * local_110);
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_f0._s_0,(TVector<double> *)&local_d0._s_0,param_2);
    UE::Geometry::TFrame3<double>::Rotate
              ((TFrame3<double> *)&local_128._s_0,(TQuaternion<double> *)&local_f0._s_0);
    local_a8 = SUB84(local_100,0);
    uStack_a4 = (undefined4)((ulonglong)local_100 >> 0x20);
    local_b8 = SUB84(local_110,0);
    uStack_b4 = (undefined4)((ulonglong)local_110 >> 0x20);
    uStack_a0 = SUB84(local_f8,0);
    uStack_9c = (undefined4)((ulonglong)local_f8 >> 0x20);
    uStack_b0 = SUB84(local_108,0);
    uStack_ac = (undefined4)((ulonglong)local_108 >> 0x20);
  }
  pUVar4 = (this->TransformGizmo).field0_0x0.DebugPtr;
  local_88 = local_128._s_0.Z;
  uStack_80 = 0;
  local_68 = ___xmm_00000000000000003ff0000000000000;
  uStack_60 = _UNK_150689518;
  local_98 = local_128._0_4_;
  uStack_94 = local_128._4_4_;
  uStack_90 = local_128._8_4_;
  uStack_8c = local_128._12_4_;
  local_78 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_70 = _UNK_150689688;
  (**(code **)(*(longlong *)pUVar4 + 0x340))(pUVar4,&local_b8,1);
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult((this->Preview).field0_0x0.DebugPtr);
  this->bTransformModified = true;
  return;
}

