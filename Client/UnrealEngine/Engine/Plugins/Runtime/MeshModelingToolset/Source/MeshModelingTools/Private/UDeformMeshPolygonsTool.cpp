// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 40

// StaticClass @ 14cc05100

UClass * __cdecl UDeformMeshPolygonsTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeformMeshPolygonsTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DeformMeshPolygonsTool",
               &Z_Registration_Info_UClass_UDeformMeshPolygonsTool.InnerSingleton,
               StaticRegisterNativesUDeformMeshPolygonsTool,0x1840,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDeformMeshPolygonsTool>,
               InternalVTableHelperCtorCaller<UDeformMeshPolygonsTool>,local_res8,
               UMeshSurfacePointTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeformMeshPolygonsTool.InnerSingleton;
}

// UDeformMeshPolygonsTool @ 14cc1c600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDeformMeshPolygonsTool * __thiscall
UDeformMeshPolygonsTool::UDeformMeshPolygonsTool
          (UDeformMeshPolygonsTool *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  
  UMeshSurfacePointTool::UMeshSurfacePointTool((UMeshSurfacePointTool *)this,param_1);
  this->VisualAngleSnapThreshold = 0.5;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  (this->OnDynamicMeshComponentChangedHandle).ID = 0;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  this->_padding_ = (longlong)&___7UDeformMeshPolygonsTool__6B_;
  (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  (this->TransformProps).field0_0x0.DebugPtr = (UDeformMeshPolygonsTransformProperties *)0x0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Scale3D.ZW.m128d_f64 = auVar8;
  FToolDataVisualizer::FToolDataVisualizer(&this->PolyEdgesRenderer);
  (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveSurfaceFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveSurfaceFrame).Origin.field0_0x0._s_0.Y = (double)uVar9;
  (this->ActiveSurfaceFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->UpdateRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->UpdateRay).Origin.field0_0x0._s_0.Y = (double)uVar9;
  (this->UpdateRay).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->UpdateRay).Direction.field0_0x0._s_0.X = 0.0;
  (this->UpdateRay).Direction.field0_0x0._s_0.Y = 0.0;
  (this->UpdateRay).Direction.field0_0x0._s_0.Z = 1.0;
  this->bUpdatePending = false;
  UE::Geometry::FQuickAxisTranslater::FQuickAxisTranslater(&this->QuickAxisTranslater);
  UE::Geometry::FQuickAxisRotator::FQuickAxisRotator(&this->QuickAxisRotator);
  (this->RotationStartFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->RotationStartFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->RotationStartFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->RotationStartFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RotationStartFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RotationStartFrame).Origin.field0_0x0._s_0.Y = (double)uVar9;
  (this->RotationStartFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->RotationStartFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->RotationStartFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->RotationStartFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->RotationStartFrame).Rotation.field0_0x0._s_0.W = 1.0;
  UE::Geometry::FGroupTopology::FGroupTopology(&this->Topology);
  FMeshTopologySelector::FMeshTopologySelector((FMeshTopologySelector *)&this->TopoSelector);
  (this->TopoSelector)._padding_ = (longlong)&___7FGroupTopologySelector__6B_;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&this->HilightSelection);
  FToolDataVisualizer::FToolDataVisualizer(&this->HilightRenderer);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->MeshSpatial);
  UE::Geometry::FGroupTopologyDeformer::FGroupTopologyDeformer(&this->LinearDeformer);
  (this->LaplacianDeformer).Ptr = (FGroupTopologyLaplacianDeformer *)0x0;
  (this->LongTransactions).OpenCount = 0;
  (this->LongTransactions).MaxOpen = 1;
  return this;
}

// UDeformMeshPolygonsTool @ 14cc1c8e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UDeformMeshPolygonsTool * __thiscall
UDeformMeshPolygonsTool::UDeformMeshPolygonsTool(UDeformMeshPolygonsTool *this)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  FText *pFVar12;
  undefined1 local_res8 [8];
  FText local_18;
  
  UMeshSurfacePointTool::UMeshSurfacePointTool((UMeshSurfacePointTool *)this);
  this->VisualAngleSnapThreshold = 0.5;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  (this->OnDynamicMeshComponentChangedHandle).ID = 0;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  this->_padding_ = (longlong)&___7UDeformMeshPolygonsTool__6B_;
  (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  (this->TransformProps).field0_0x0.DebugPtr = (UDeformMeshPolygonsTransformProperties *)0x0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Rotation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar4,0);
  auVar6._0_8_ = (double)fVar3;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Rotation.ZW.m128d_f64 = auVar6;
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Translation.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar4,0);
  auVar8._0_8_ = (double)fVar3;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Translation.ZW.m128d_f64 = auVar8;
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar9._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar9._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar9._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Scale3D.XY.m128d_f64 = auVar9;
  auVar10._8_4_ = SUB84((double)fVar4,0);
  auVar10._0_8_ = (double)fVar3;
  auVar10._12_4_ = (int)((ulonglong)(double)fVar4 >> 0x20);
  *(undefined1 (*) [16])(this->WorldTransform).Scale3D.ZW.m128d_f64 = auVar10;
  FToolDataVisualizer::FToolDataVisualizer(&this->PolyEdgesRenderer);
  (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActiveSurfaceFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActiveSurfaceFrame).Origin.field0_0x0._s_0.Y = (double)uVar11;
  (this->ActiveSurfaceFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->UpdateRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->UpdateRay).Origin.field0_0x0._s_0.Y = (double)uVar11;
  (this->UpdateRay).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->UpdateRay).Direction.field0_0x0._s_0.X = 0.0;
  (this->UpdateRay).Direction.field0_0x0._s_0.Y = 0.0;
  (this->UpdateRay).Direction.field0_0x0._s_0.Z = 1.0;
  this->bUpdatePending = false;
  UE::Geometry::FQuickAxisTranslater::FQuickAxisTranslater(&this->QuickAxisTranslater);
  UE::Geometry::FQuickAxisRotator::FQuickAxisRotator(&this->QuickAxisRotator);
  (this->RotationStartFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->RotationStartFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->RotationStartFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->RotationStartFrame).Rotation.field0_0x0._s_0.W = 1.0;
  uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->RotationStartFrame).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->RotationStartFrame).Origin.field0_0x0._s_0.Y = (double)uVar11;
  (this->RotationStartFrame).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->RotationStartFrame).Rotation.field0_0x0._s_0.X = 0.0;
  (this->RotationStartFrame).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->RotationStartFrame).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->RotationStartFrame).Rotation.field0_0x0._s_0.W = 1.0;
  UE::Geometry::FGroupTopology::FGroupTopology(&this->Topology);
  FMeshTopologySelector::FMeshTopologySelector((FMeshTopologySelector *)&this->TopoSelector);
  (this->TopoSelector)._padding_ = (longlong)&___7FGroupTopologySelector__6B_;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&this->HilightSelection);
  FToolDataVisualizer::FToolDataVisualizer(&this->HilightRenderer);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->MeshSpatial);
  UE::Geometry::FGroupTopologyDeformer::FGroupTopologyDeformer(&this->LinearDeformer);
  (this->LaplacianDeformer).Ptr = (FGroupTopologyLaplacianDeformer *)0x0;
  (this->LongTransactions).OpenCount = 0;
  (this->LongTransactions).MaxOpen = 1;
  pFVar12 = FText::AsLocalizable_Advanced_LocText
                      (&local_18,L"UDeformMeshPolygonsTool",L"DeformPolygroupsToolName",
                       L"PolyGroup Deform");
  pIVar1 = (ITextData *)this->_padding_;
  pIVar2 = (pFVar12->TextData).Reference;
  if (pIVar1 != pIVar2) {
    this->_padding_ = (longlong)pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  *(uint *)&this->_padding_ = pFVar12->Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return this;
}

// ~UDeformMeshPolygonsTool @ 14cc22670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDeformMeshPolygonsTool::~UDeformMeshPolygonsTool(UDeformMeshPolygonsTool *this)

{
  FGroupTopologyLaplacianDeformer *pFVar1;
  FLongTransactionTracker *local_res8 [4];
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  this->_padding_ = (longlong)&___7UDeformMeshPolygonsTool__6B_;
  if ((this->LongTransactions).OpenCount != 0) {
    local_res8[0] = &this->LongTransactions;
    `UE::TransactionUtil::FLongTransactionTracker::~FLongTransactionTracker'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  pFVar1 = (this->LaplacianDeformer).Ptr;
  if (pFVar1 != (FGroupTopologyLaplacianDeformer *)0x0) {
    (*(code *)pFVar1[-1].HandleWeights)(&pFVar1[-1].HandleWeights);
  }
  UE::Geometry::FGroupTopologyDeformer::~FGroupTopologyDeformer(&this->LinearDeformer);
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::
  ~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>(&this->MeshSpatial);
  FToolDataVisualizer::~FToolDataVisualizer(&this->HilightRenderer);
  UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&this->HilightSelection);
  FMeshTopologySelector::~FMeshTopologySelector((FMeshTopologySelector *)&this->TopoSelector);
  UE::Geometry::FGroupTopology::~FGroupTopology(&this->Topology);
  UE::Geometry::FQuickAxisRotator::~FQuickAxisRotator(&this->QuickAxisRotator);
  UE::Geometry::FQuickAxisTranslater::~FQuickAxisTranslater(&this->QuickAxisTranslater);
  FToolDataVisualizer::~FToolDataVisualizer(&this->PolyEdgesRenderer);
  this->_padding_ = (longlong)&___7IInteractiveToolManageGeometrySelectionAPI__6B_;
  UMeshSurfacePointTool::~UMeshSurfacePointTool((UMeshSurfacePointTool *)this);
  return;
}

// operator() @ 14cc2a150

TVector<double> * __thiscall
`UDeformMeshPolygonsTool::ComputeUpdate_Rotate'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  TVector<double> *pTVar4;
  TVector<double> local_28;
  
  lVar2 = *(longlong *)
           ((param_1->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_2 >> 9) * 8)
  ;
  pdVar1 = (double *)(lVar2 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  dVar3 = pdVar1[1];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       *(double *)(lVar2 + 0x10 + (ulonglong)(param_2 & 0x1ff) * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (__return_storage_ptr__->field0_0x0)._s_0.X - *(double *)((longlong)this + 8);
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       (__return_storage_ptr__->field0_0x0)._s_0.Y - *(double *)((longlong)this + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       (__return_storage_ptr__->field0_0x0)._s_0.Z - *(double *)((longlong)this + 0x18);
  pTVar4 = UE::Geometry::operator*<double>
                     (&local_28,(TQuaternion<double> *)((longlong)this + 0x20),
                      __return_storage_ptr__);
  dVar3 = (pTVar4->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (pTVar4->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       *(double *)((longlong)this + 8) + (__return_storage_ptr__->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       *(double *)((longlong)this + 0x10) + (__return_storage_ptr__->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       *(double *)((longlong)this + 0x18) + (__return_storage_ptr__->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// operator() @ 14cc2d080

bool __thiscall
`UDeformMeshPolygonsTool::Setup'::__l2::<lambda_2>::operator()
          (void *this,TVector<double> *param_1,TVector<double> *param_2,double param_3)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  double dVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_90 [5];
  
  dVar8 = ToolSceneQueriesUtil::GetDefaultVisualAngleSnapThreshD();
  lVar1 = *(longlong *)this;
  auVar23 = *(undefined1 (*) [16])(lVar1 + 0x1d0);
  dVar3 = (param_2->field0_0x0)._s_0.X * *(double *)(lVar1 + 0x200);
  dVar4 = (param_2->field0_0x0)._s_0.Y * *(double *)(lVar1 + 0x208);
  uVar20 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar5 = (param_2->field0_0x0)._s_0.Z * *(double *)(lVar1 + 0x210);
  dVar26 = *(double *)(lVar1 + 0x218) * 0.0;
  auVar9 = *(undefined1 (*) [16])(lVar1 + 0x1c0);
  auVar31._8_4_ = SUB84(dVar4,0);
  auVar31._0_8_ = dVar3;
  auVar31._12_4_ = uVar20;
  dVar2 = auVar23._0_8_;
  auVar15 = blendpd(auVar9,auVar23,2);
  auVar32._0_8_ = auVar31._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar3;
  auVar32._8_8_ = dVar5 * auVar9._8_8_ - dVar2 * dVar4;
  auVar27._8_4_ = SUB84(auVar32._8_8_,0);
  auVar27._0_8_ = auVar32._0_8_;
  auVar27._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
  dVar6 = *(double *)(lVar1 + 0x1d8);
  auVar16._8_4_ = SUB84(dVar4,0);
  auVar16._0_8_ = dVar3;
  auVar16._12_4_ = uVar20;
  auVar9._8_4_ = SUB84(dVar26,0);
  auVar9._0_8_ = dVar5;
  auVar9._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  auVar9 = blendpd(auVar16,auVar9,2);
  auVar10._0_8_ = auVar9._0_8_ * dVar2 - auVar15._0_8_ * dVar5;
  auVar10._8_8_ = auVar9._8_8_ * auVar23._8_8_ - auVar15._8_8_ * dVar26;
  auVar9 = *(undefined1 (*) [16])(lVar1 + 0x1c0);
  auVar15 = blendpd(auVar32,auVar10,2);
  auVar33._0_8_ = auVar15._0_8_ + auVar15._0_8_;
  auVar33._8_8_ = auVar15._8_8_ + auVar15._8_8_;
  dVar26 = auVar27._8_8_ + auVar27._8_8_;
  dVar30 = auVar10._0_8_ + auVar10._0_8_;
  auVar21._8_4_ = SUB84(dVar30,0);
  auVar21._0_8_ = dVar26;
  uVar20 = (undefined4)((ulonglong)dVar30 >> 0x20);
  auVar21._12_4_ = uVar20;
  auVar17._8_4_ = SUB84(dVar30,0);
  auVar17._0_8_ = dVar26;
  auVar17._12_4_ = uVar20;
  auVar15 = blendpd(auVar17,auVar33,2);
  auVar22._0_8_ = auVar21._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar26;
  auVar22._8_8_ = auVar33._0_8_ * auVar9._8_8_ - dVar2 * dVar30;
  auVar9 = blendpd(auVar9,auVar23,2);
  auVar11._8_4_ = SUB84(auVar22._8_8_,0);
  auVar11._0_8_ = auVar22._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
  auVar18._0_8_ = auVar15._0_8_ * dVar2 - auVar9._0_8_ * auVar33._0_8_;
  auVar18._8_8_ = auVar15._8_8_ * auVar23._8_8_ - auVar9._8_8_ * auVar33._8_8_;
  local_a8._s_0.X = dVar26 * dVar6 + dVar3 + auVar11._8_8_ + *(double *)(lVar1 + 0x1e0);
  local_a8._s_0.Y = dVar30 * dVar6 + dVar4 + auVar18._0_8_ + *(double *)(lVar1 + 0x1e8);
  auVar23 = blendpd(auVar22,auVar18,2);
  local_a8._s_0.Z = auVar33._0_8_ * dVar6 + dVar5 + auVar23._0_8_ + *(double *)(lVar1 + 0x1f0);
  dVar5 = (param_1->field0_0x0)._s_0.Z * *(double *)(lVar1 + 0x210);
  dVar26 = *(double *)(lVar1 + 0x218) * 0.0;
  dVar6 = *(double *)(lVar1 + 0x1d8);
  auVar23 = *(undefined1 (*) [16])(lVar1 + 0x1d0);
  dVar3 = *(double *)(lVar1 + 0x200) * (param_1->field0_0x0)._s_0.X;
  dVar4 = *(double *)(lVar1 + 0x208) * (param_1->field0_0x0)._s_0.Y;
  uVar20 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar9 = *(undefined1 (*) [16])(lVar1 + 0x1c0);
  auVar34._8_4_ = SUB84(dVar4,0);
  auVar34._0_8_ = dVar3;
  auVar34._12_4_ = uVar20;
  dVar2 = auVar23._0_8_;
  auVar16 = blendpd(auVar9,auVar23,2);
  auVar35._0_8_ = auVar34._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar3;
  auVar35._8_8_ = dVar5 * auVar9._8_8_ - dVar2 * dVar4;
  auVar19._8_4_ = SUB84(auVar35._8_8_,0);
  auVar19._0_8_ = auVar35._0_8_;
  auVar19._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
  auVar12._8_4_ = SUB84(dVar4,0);
  auVar12._0_8_ = dVar3;
  auVar12._12_4_ = uVar20;
  auVar15._8_4_ = SUB84(dVar26,0);
  auVar15._0_8_ = dVar5;
  auVar15._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  auVar9 = blendpd(auVar12,auVar15,2);
  auVar13._0_8_ = auVar9._0_8_ * dVar2 - auVar16._0_8_ * dVar5;
  auVar13._8_8_ = auVar9._8_8_ * auVar23._8_8_ - auVar16._8_8_ * dVar26;
  auVar9 = *(undefined1 (*) [16])(lVar1 + 0x1c0);
  auVar15 = blendpd(auVar35,auVar13,2);
  dVar26 = auVar19._8_8_ + auVar19._8_8_;
  dVar30 = auVar13._0_8_ + auVar13._0_8_;
  auVar36._0_8_ = auVar15._0_8_ + auVar15._0_8_;
  auVar36._8_8_ = auVar15._8_8_ + auVar15._8_8_;
  auVar28._8_4_ = SUB84(dVar30,0);
  auVar28._0_8_ = dVar26;
  uVar20 = (undefined4)((ulonglong)dVar30 >> 0x20);
  auVar28._12_4_ = uVar20;
  auVar24._8_4_ = SUB84(dVar30,0);
  auVar24._0_8_ = dVar26;
  auVar24._12_4_ = uVar20;
  auVar15 = blendpd(auVar24,auVar36,2);
  auVar29._0_8_ = auVar28._8_8_ * auVar9._0_8_ - auVar9._8_8_ * dVar26;
  auVar29._8_8_ = auVar36._0_8_ * auVar9._8_8_ - dVar2 * dVar30;
  auVar9 = blendpd(auVar9,auVar23,2);
  auVar14._8_4_ = SUB84(auVar29._8_8_,0);
  auVar14._0_8_ = auVar29._0_8_;
  auVar14._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
  auVar25._0_8_ = auVar15._0_8_ * dVar2 - auVar9._0_8_ * auVar36._0_8_;
  auVar25._8_8_ = auVar15._8_8_ * auVar23._8_8_ - auVar9._8_8_ * auVar36._8_8_;
  auVar23 = blendpd(auVar29,auVar25,2);
  local_90[0]._0_8_ = dVar26 * dVar6 + dVar3 + auVar14._8_8_ + *(double *)(lVar1 + 0x1e0);
  local_90[0]._8_8_ = dVar30 * dVar6 + dVar4 + auVar25._0_8_ + *(double *)(lVar1 + 0x1e8);
  local_90[0]._16_8_ = auVar36._0_8_ * dVar6 + dVar5 + auVar23._0_8_ + *(double *)(lVar1 + 0x1f0);
  bVar7 = ToolSceneQueriesUtil::PointSnapQuery
                    ((FViewCameraState *)(lVar1 + 0x160),(TVector<double> *)&local_90[0]._s_0,
                     (TVector<double> *)&local_a8._s_0,dVar8 * param_3);
  return bVar7;
}

// BeginChange @ 14cc42b10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDeformMeshPolygonsTool::BeginChange(UDeformMeshPolygonsTool *this)

{
  FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *this_00;
  FMeshVertexChangeBuilder *this_01;
  FMeshVertexChangeBuilder *pFVar1;
  UInteractiveToolManager *pUVar2;
  FText *pFVar3;
  FText local_18;
  
  if ((this->DeformationStrategy == Laplacian) &&
     (this_00 = ((this->LaplacianDeformer).Ptr)->AsyncMeshDeformTask,
     this_00 != (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0)) {
    if (((FThreadSafeCounter *)&this_00->_padding_)->Counter != 0) {
      return;
    }
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
  }
  if (this->ActiveVertexChange == (FMeshVertexChangeBuilder *)0x0) {
    this_01 = ::operator_new(0x140);
    pFVar1 = (FMeshVertexChangeBuilder *)0x0;
    if (this_01 != (FMeshVertexChangeBuilder *)0x0) {
      pFVar1 = FMeshVertexChangeBuilder::FMeshVertexChangeBuilder
                         (this_01,OverlayNormals|VertexPositions);
    }
    this->ActiveVertexChange = pFVar1;
    UpdateChangeFromROI(this,false);
    pUVar2 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UDeformMeshPolygonsTool",L"PolyMeshDeformationChange",
                        L"PolyMesh Edit");
    UE::TransactionUtil::FLongTransactionTracker::Open(&this->LongTransactions,pFVar3,pUVar2);
  }
  return;
}

// ComputeUpdate @ 14cc4bc10

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDeformMeshPolygonsTool::ComputeUpdate(UDeformMeshPolygonsTool *this)

{
  bool bVar1;
  EWeightScheme EVar2;
  FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *pFVar3;
  FGroupTopologyLaplacianDeformer *pFVar4;
  FDynamicMesh3 *pFVar5;
  longlong *plVar6;
  
  if (this->bUpdatePending == true) {
    if (((this->TransformProps).field0_0x0.DebugPtr)->TransformMode == AxisRotation) {
      ComputeUpdate_Rotate(this);
    }
    else {
      ComputeUpdate_Translate(this);
    }
  }
  if (this->DeformationStrategy != Laplacian) {
    return;
  }
  pFVar3 = ((this->LaplacianDeformer).Ptr)->AsyncMeshDeformTask;
  if (pFVar3 != (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0) {
    if (((FThreadSafeCounter *)&pFVar3->_padding_)->Counter != 0) {
      return;
    }
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar3,false);
  }
  pFVar4 = (this->LaplacianDeformer).Ptr;
  if (pFVar4->bVertexPositionsNeedSync == false) goto LAB_14cc4bd3a;
  pFVar5 = (FDynamicMesh3 *)
           (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  pFVar3 = pFVar4->AsyncMeshDeformTask;
  if (pFVar3 == (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0) {
LAB_14cc4bcbf:
    bVar1 = false;
  }
  else {
    if (((FThreadSafeCounter *)&pFVar3->_padding_)->Counter == 0) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar3,false);
      goto LAB_14cc4bcbf;
    }
    bVar1 = true;
  }
  pFVar3 = pFVar4->AsyncMeshDeformTask;
  if ((pFVar3 != (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0) && (!bVar1)) {
    FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar3);
    FConstrainedMeshDeformerTask::ExportResults
              ((FConstrainedMeshDeformerTask *)&pFVar3->_padding_,pFVar5);
  }
  ((this->LaplacianDeformer).Ptr)->bVertexPositionsNeedSync = false;
  UDynamicMeshComponent::FastNotifyPositionsUpdated
            ((this->DynamicMeshComponent).field0_0x0.DebugPtr,true,false,false);
  plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  (**(code **)(*plVar6 + 0x368))(plVar6);
  this->bSpatialDirty = true;
  FMeshTopologySelector::Invalidate((FMeshTopologySelector *)&this->TopoSelector,true,false);
LAB_14cc4bd3a:
  if ((((this->LaplacianDeformer).Ptr)->bDeformerNeedsToRun == false) && (this->bInDrag == false)) {
    EndChange(this);
  }
  pFVar4 = (this->LaplacianDeformer).Ptr;
  if (pFVar4->bDeformerNeedsToRun != false) {
    EVar2 = ((this->TransformProps).field0_0x0.DebugPtr)->SelectedWeightScheme;
    if (pFVar4->AsyncMeshDeformTask ==
        (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0) {
      FGroupTopologyLaplacianDeformer::InitBackgroundWorker(pFVar4,EVar2);
    }
    if ((pFVar4->bDeformerNeedsToRun != false) && ((int)pFVar4->AsyncMeshDeformTask->_padding_ == 0)
       ) {
      FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)pFVar4->AsyncMeshDeformTask,false);
      pFVar3 = pFVar4->AsyncMeshDeformTask;
      bVar1 = pFVar4->bTaskSubmeshIsDirty;
      FAsyncTaskBase::CheckIdle((FAsyncTaskBase *)pFVar3);
      FConstrainedMeshDeformerTask::UpdateDeformer
                ((FConstrainedMeshDeformerTask *)&pFVar3->_padding_,EVar2,
                 (FDynamicMesh3 *)pFVar4->_padding_,&pFVar4->SrcMeshConstraintBuffer,
                 &pFVar4->SubsetIDBuffer,bVar1,(FRichCurve *)0x0);
      pFVar4->bTaskSubmeshIsDirty = false;
      FAsyncTaskBase::Start
                ((FAsyncTaskBase *)pFVar4->AsyncMeshDeformTask,false,GThreadPool,Normal,None,-1,
                 (wchar_t *)0x0);
      pFVar4->bDeformerNeedsToRun = false;
      pFVar4->bVertexPositionsNeedSync = true;
    }
  }
  return;
}

// ComputeUpdate_Rotate @ 14cc4c2e0

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

void __thiscall UDeformMeshPolygonsTool::ComputeUpdate_Rotate(UDeformMeshPolygonsTool *this)

{
  FQuickAxisRotator *this_00;
  TFrame3<double> *this_01;
  EGroupTopologyDeformationStrategy EVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  undefined8 uVar6;
  double *pdVar7;
  TVector<double> *pTVar8;
  longlong *plVar9;
  FGroupTopologyLaplacianDeformer *pFVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 extraout_XMM0 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar64;
  undefined1 auStack_1b8 [32];
  double local_198;
  double dStack_190;
  double local_188;
  double local_180;
  double dStack_178;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  UDeformMeshPolygonsTool *local_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  undefined1 local_108 [24];
  double dStack_f0;
  double local_e8;
  double *pdStack_e0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  EVar1 = this->DeformationStrategy;
  if (EVar1 == Laplacian) {
    pFVar10 = (this->LaplacianDeformer).Ptr;
  }
  else {
    pFVar10 = (FGroupTopologyLaplacianDeformer *)&this->LinearDeformer;
  }
  uVar6 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  local_108._0_8_ = (this->UpdateRay).Origin.field0_0x0._s_0.X;
  local_108._8_8_ = (this->UpdateRay).Origin.field0_0x0._s_0.Y;
  this_00 = &this->QuickAxisRotator;
  local_108._16_8_ = (this->UpdateRay).Origin.field0_0x0._s_0.Z;
  dStack_f0 = (this->UpdateRay).Direction.field0_0x0._s_0.X;
  local_e8 = (this->UpdateRay).Direction.field0_0x0._s_0.Y;
  pdStack_e0 = (double *)(this->UpdateRay).Direction.field0_0x0._s_0.Z;
  cVar5 = (**(code **)(this_00->_padding_ + 0x50))(this_00,(TVector<double>_u_0 *)local_108);
  dVar47 = dStack_190;
  dVar42 = local_198;
  if (cVar5 == '\0') {
    return;
  }
  dVar53 = (this->QuickAxisRotator).AxisFrameWorld.Origin.field0_0x0._s_0.X;
  dVar43 = (this->QuickAxisRotator).AxisFrameWorld.Origin.field0_0x0._s_0.Y;
  local_170 = local_188;
  local_158 = (this->QuickAxisRotator).AxisFrameWorld.Origin.field0_0x0._s_0.Z;
  cVar5 = (**(code **)(this_00->_padding_ + 0x60))(this_00);
  if ((cVar5 != '\0') && ((this->QuickAxisRotator).bHaveLockedToAxis == false)) {
    local_108._16_8_ = (this->CameraState).Position.field0_0x0._s_0.Z;
    in_XMM2._0_8_ =
         (dStack_190 - (this->CameraState).Position.field0_0x0._s_0.Y) * (dStack_190 - dVar43);
    in_XMM2._8_8_ = 0;
    if (0.0 < (local_198 - (this->CameraState).Position.field0_0x0._s_0.X) * (local_198 - dVar53) +
              in_XMM2._0_8_ + (local_188 - (double)local_108._16_8_) * (local_188 - local_158)) {
      return;
    }
  }
  cVar5 = (**(code **)(this_00->_padding_ + 0x60))(this_00);
  if (cVar5 == '\0') {
    UE::Geometry::FQuickAxisRotator::ClearAxisLock(this_00);
    (**(code **)(pFVar10->_padding_ + 0x30))(pFVar10,uVar6);
    if (this->DeformationStrategy != Linear) goto LAB_14cc4cb9b;
  }
  else {
    if ((this->QuickAxisRotator).bHaveLockedToAxis == false) {
      UE::Geometry::FQuickAxisRotator::SetAxisLock(this_00);
      lVar11 = this_00->_padding_;
      (this->RotationStartPointWorld).field0_0x0._s_0.X = local_198;
      (this->RotationStartPointWorld).field0_0x0._s_0.Y = dStack_190;
      (this->RotationStartPointWorld).field0_0x0._s_0.Z = local_188;
      pdVar7 = (double *)(**(code **)(lVar11 + 0x68))(this_00,(TVector<double>_u_0 *)local_108);
      dVar53 = pdVar7[1];
      (this->RotationStartFrame).Origin.field0_0x0._s_0.X = *pdVar7;
      (this->RotationStartFrame).Origin.field0_0x0._s_0.Y = dVar53;
      dVar53 = pdVar7[3];
      (this->RotationStartFrame).Origin.field0_0x0._s_0.Z = pdVar7[2];
      (this->RotationStartFrame).Rotation.field0_0x0._s_0.X = dVar53;
      dVar53 = pdVar7[5];
      (this->RotationStartFrame).Rotation.field0_0x0._s_0.Y = pdVar7[4];
      (this->RotationStartFrame).Rotation.field0_0x0._s_0.Z = dVar53;
      (this->RotationStartFrame).Rotation.field0_0x0._s_0.W = pdVar7[6];
    }
    this_01 = &this->RotationStartFrame;
    dVar41 = (this->RotationStartPointWorld).field0_0x0._s_0.X - (this_01->Origin).field0_0x0._s_0.X
    ;
    dVar52 = (this->RotationStartPointWorld).field0_0x0._s_0.Y -
             (this->RotationStartFrame).Origin.field0_0x0._s_0.Y;
    dVar53 = (this->RotationStartPointWorld).field0_0x0._s_0.Z -
             (this->RotationStartFrame).Origin.field0_0x0._s_0.Z;
    pTVar8 = UE::Geometry::TFrame3<double>::GetAxis
                       (this_01,(TVector<double> *)&((TVector<double>_u_0 *)local_108)->_s_0,0);
    dVar43 = dVar52 * (pTVar8->field0_0x0)._s_0.Y + dVar41 * (pTVar8->field0_0x0)._s_0.X +
             dVar53 * (pTVar8->field0_0x0)._s_0.Z;
    pTVar8 = UE::Geometry::TFrame3<double>::GetAxis
                       (this_01,(TVector<double> *)&((TVector<double>_u_0 *)local_108)->_s_0,1);
    dVar22 = __real_3ff0000000000000;
    dVar53 = dVar52 * (pTVar8->field0_0x0)._s_0.Y + dVar41 * (pTVar8->field0_0x0)._s_0.X +
             dVar53 * (pTVar8->field0_0x0)._s_0.Z;
    auVar29._0_8_ = dVar53 * dVar53 + dVar43 * dVar43;
    auVar29._8_8_ = 0;
    auVar29 = sqrtpd(in_XMM2,auVar29);
    if (auVar29._0_8_ <= 0.0) {
      dVar53 = 0.0;
      dVar41 = 0.0;
    }
    else {
      dVar41 = __real_3ff0000000000000 / auVar29._0_8_;
      dVar53 = dVar41 * dVar53;
      dVar41 = dVar41 * dVar43;
    }
    dVar43 = local_170 - (this->RotationStartFrame).Origin.field0_0x0._s_0.Z;
    dVar42 = dVar42 - (this_01->Origin).field0_0x0._s_0.X;
    dVar47 = dVar47 - (this->RotationStartFrame).Origin.field0_0x0._s_0.Y;
    pTVar8 = UE::Geometry::TFrame3<double>::GetAxis
                       (this_01,(TVector<double> *)&((TVector<double>_u_0 *)local_108)->_s_0,0);
    dVar52 = dVar47 * (pTVar8->field0_0x0)._s_0.Y + dVar42 * (pTVar8->field0_0x0)._s_0.X +
             dVar43 * (pTVar8->field0_0x0)._s_0.Z;
    pTVar8 = UE::Geometry::TFrame3<double>::GetAxis
                       (this_01,(TVector<double> *)&((TVector<double>_u_0 *)local_108)->_s_0,1);
    dVar47 = dVar47 * (pTVar8->field0_0x0)._s_0.Y + dVar42 * (pTVar8->field0_0x0)._s_0.X +
             dVar43 * (pTVar8->field0_0x0)._s_0.Z;
    dVar42 = SQRT(dVar52 * dVar52 + dVar47 * dVar47);
    if (dVar42 <= 0.0) {
      dVar47 = 0.0;
      dVar42 = 0.0;
    }
    else {
      dVar42 = dVar22 / dVar42;
      dVar47 = dVar42 * dVar47;
      dVar42 = dVar42 * dVar52;
    }
    dVar52 = dVar41 * dVar42 + dVar47 * dVar53;
    dVar43 = __real_bff0000000000000;
    if ((__real_bff0000000000000 <= dVar52) && (dVar43 = dVar52, dVar22 <= dVar52)) {
      dVar43 = dVar22;
    }
    dVar42 = dVar41 * dVar47 - dVar42 * dVar53;
    if (__real_3e45798ee2308c3a <= dVar42 * dVar42) {
      acos(dVar43);
    }
    dVar42 = (this->RotationStartFrame).Rotation.field0_0x0._s_0.X;
    dVar47 = (this->RotationStartFrame).Rotation.field0_0x0._s_0.Y;
    dVar53 = (this->RotationStartFrame).Rotation.field0_0x0._s_0.W;
    dVar43 = (this->RotationStartFrame).Rotation.field0_0x0._s_0.Z;
    dVar43 = dVar43 + dVar43;
    auVar48._0_8_ =
         (this->WorldTransform).Rotation.ZW.m128d_f64[0] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    auVar48._8_8_ =
         (this->WorldTransform).Rotation.ZW.m128d_f64[1] *
         GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar52 = dVar43 * dVar47 - dVar53 * (dVar42 + dVar42);
    dVar41 = dVar53 * (dVar47 + dVar47) + dVar43 * dVar42;
    dVar53 = (this->WorldTransform).Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar43 = (this->WorldTransform).Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    uVar38 = (undefined4)((ulonglong)dVar43 >> 0x20);
    local_108._16_8_ = dVar22 - ((dVar47 + dVar47) * dVar47 + (dVar42 + dVar42) * dVar42);
    uVar39 = SUB84(dVar52,0);
    uVar40 = (undefined4)((ulonglong)dVar52 >> 0x20);
    auVar33._8_4_ = SUB84(dVar43,0);
    auVar33._0_8_ = dVar53;
    auVar33._12_4_ = uVar38;
    auVar14._8_4_ = uVar39;
    auVar14._0_8_ = dVar41;
    auVar14._12_4_ = uVar40;
    auVar35._8_4_ = SUB84(dVar43,0);
    auVar35._0_8_ = dVar53;
    auVar35._12_4_ = uVar38;
    auVar54._8_8_ = 0;
    auVar54._0_8_ = local_108._16_8_;
    auVar36 = blendpd(auVar35,auVar48,2);
    auVar61._8_4_ = uVar39;
    auVar61._0_8_ = dVar41;
    auVar61._12_4_ = uVar40;
    auVar23._8_4_ = uVar39;
    auVar23._0_8_ = dVar41;
    auVar23._12_4_ = uVar40;
    auVar29 = blendpd(auVar23,auVar54,2);
    auVar62._0_8_ = auVar61._8_8_ * dVar53 - dVar41 * auVar33._8_8_;
    auVar62._8_8_ = (double)local_108._16_8_ * dVar43 - auVar14._8_8_ * auVar48._0_8_;
    auVar44._8_4_ = SUB84(auVar62._8_8_,0);
    auVar44._0_8_ = auVar62._0_8_;
    auVar44._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
    auVar24._0_8_ = auVar29._0_8_ * auVar48._0_8_ - (double)local_108._16_8_ * auVar36._0_8_;
    auVar24._8_8_ = auVar29._8_8_ * auVar48._8_8_ - auVar36._8_8_ * 0.0;
    auVar29 = blendpd(auVar62,auVar24,2);
    dVar42 = auVar44._8_8_ + auVar44._8_8_;
    dVar47 = auVar24._0_8_ + auVar24._0_8_;
    auVar63._0_8_ = auVar29._0_8_ + auVar29._0_8_;
    auVar63._8_8_ = auVar29._8_8_ + auVar29._8_8_;
    uVar38 = SUB84(dVar47,0);
    auVar30._8_4_ = uVar38;
    auVar30._0_8_ = dVar42;
    uVar39 = (undefined4)((ulonglong)dVar47 >> 0x20);
    auVar30._12_4_ = uVar39;
    auVar15._8_4_ = uVar38;
    auVar15._0_8_ = dVar42;
    auVar15._12_4_ = uVar39;
    auVar25._8_4_ = uVar38;
    auVar25._0_8_ = dVar42;
    auVar25._12_4_ = uVar39;
    auVar29 = blendpd(auVar25,auVar63,2);
    auVar31._0_8_ = auVar30._8_8_ * dVar53 - dVar42 * auVar33._8_8_;
    auVar31._8_8_ = auVar63._0_8_ * dVar43 - auVar15._8_8_ * auVar48._0_8_;
    auVar16._8_4_ = SUB84(auVar63._8_8_,0);
    auVar16._0_8_ = auVar63._0_8_;
    auVar16._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
    auVar26._0_8_ = auVar29._0_8_ * auVar48._0_8_ - auVar63._0_8_ * auVar36._0_8_;
    auVar26._8_8_ = auVar29._8_8_ * auVar48._8_8_ - auVar16._8_8_ * auVar36._8_8_;
    auVar17._8_4_ = SUB84(auVar31._8_8_,0);
    auVar17._0_8_ = auVar31._0_8_;
    auVar17._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
    local_180 = dVar42 * auVar48._8_8_ + dVar41 + auVar17._8_8_;
    dStack_178 = dVar47 * auVar48._8_8_ + dVar52 + auVar26._0_8_;
    auVar29 = blendpd(auVar31,auVar26,2);
    local_168 = auVar63._0_8_ * auVar48._8_8_ + (double)local_108._16_8_ + auVar29._0_8_;
    dStack_160 = auVar63._8_8_ * auVar48._8_8_ + 0.0 + auVar29._8_8_;
    __libm_sse2_sincos_();
    dVar60 = (this->RotationStartFrame).Origin.field0_0x0._s_0.X -
             (this->WorldTransform).Translation.XY.m128d_f64[0];
    dVar64 = (this->RotationStartFrame).Origin.field0_0x0._s_0.Y -
             (this->WorldTransform).Translation.XY.m128d_f64[1];
    dVar52 = (this->WorldTransform).Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar37 = (this->WorldTransform).Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar57._8_4_ = SUB84(dVar64,0);
    auVar57._0_8_ = dVar60;
    uVar39 = (undefined4)((ulonglong)dVar64 >> 0x20);
    auVar57._12_4_ = uVar39;
    dVar42 = (this->WorldTransform).Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar47 = (this->WorldTransform).Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar32._8_4_ = SUB84(dVar37,0);
    auVar32._0_8_ = dVar52;
    uVar38 = (undefined4)((ulonglong)dVar37 >> 0x20);
    auVar32._12_4_ = uVar38;
    dVar22 = (this->RotationStartFrame).Origin.field0_0x0._s_0.Z -
             (this->WorldTransform).Translation.ZW.m128d_f64[0];
    dVar41 = auVar32._8_8_;
    auVar34._8_4_ = SUB84(dVar37,0);
    auVar34._0_8_ = dVar52;
    auVar34._12_4_ = uVar38;
    auVar18._8_4_ = SUB84(dVar42,0);
    auVar18._0_8_ = dVar41;
    auVar18._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    auVar36._8_4_ = SUB84(dVar47,0);
    auVar36._0_8_ = dVar42;
    auVar36._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
    auVar36 = blendpd(auVar34,auVar36,2);
    auVar58._0_8_ = auVar57._8_8_ * dVar52 - dVar41 * dVar60;
    auVar58._8_8_ = dVar22 * dVar37 - auVar18._8_8_ * dVar64;
    auVar27._8_4_ = SUB84(dVar64,0);
    auVar27._0_8_ = dVar60;
    auVar27._12_4_ = uVar39;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar22;
    auVar29 = blendpd(auVar27,auVar4,2);
    auVar28._0_8_ = auVar29._0_8_ * dVar42 - dVar22 * auVar36._0_8_;
    auVar28._8_8_ = auVar29._8_8_ * dVar47 - auVar36._8_8_ * 0.0;
    auVar29 = blendpd(auVar58,auVar28,2);
    dVar53 = auVar58._8_8_ + auVar58._8_8_;
    dVar43 = auVar28._0_8_ + auVar28._0_8_;
    uVar38 = SUB84(dVar43,0);
    uVar39 = (undefined4)((ulonglong)dVar43 >> 0x20);
    auVar59._0_8_ = auVar29._0_8_ + auVar29._0_8_;
    auVar59._8_8_ = auVar29._8_8_ + auVar29._8_8_;
    auVar55._8_4_ = uVar38;
    auVar55._0_8_ = dVar53;
    auVar55._12_4_ = uVar39;
    auVar19._8_4_ = uVar38;
    auVar19._0_8_ = dVar53;
    auVar19._12_4_ = uVar39;
    auVar49._8_4_ = uVar38;
    auVar49._0_8_ = dVar53;
    auVar49._12_4_ = uVar39;
    auVar50 = blendpd(auVar49,auVar59,2);
    auVar56._0_8_ = auVar55._8_8_ * dVar52 - dVar53 * dVar41;
    auVar56._8_8_ = auVar59._0_8_ * dVar37 - auVar19._8_8_ * dVar42;
    auVar20._8_4_ = SUB84(auVar59._8_8_,0);
    auVar20._0_8_ = auVar59._0_8_;
    auVar20._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
    auVar29 = *(undefined1 (*) [16])(this->WorldTransform).Scale3D.XY.m128d_f64;
    auVar51._0_8_ = auVar50._0_8_ * dVar42 - auVar59._0_8_ * auVar36._0_8_;
    auVar51._8_8_ = auVar50._8_8_ * dVar47 - auVar20._8_8_ * auVar36._8_8_;
    auVar36 = *(undefined1 (*) [16])(this->WorldTransform).Scale3D.ZW.m128d_f64;
    auVar45._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar29._4_4_,
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar29._0_4_);
    auVar45._8_4_ = _UNK_15061cc88 & auVar29._8_4_;
    auVar45._12_4_ = _UNK_15061cc8c & auVar29._12_4_;
    lVar11 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar36._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar36._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar29);
    lVar12 = -(ulonglong)(auVar45._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar13 = -(ulonglong)(auVar45._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar21._8_4_ = SUB84(auVar56._8_8_,0);
    auVar21._0_8_ = auVar56._0_8_;
    auVar21._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
    auVar46._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar29._4_4_,
                          ~(uint)lVar12 & auVar29._0_4_);
    auVar46._8_4_ = ~(uint)lVar13 & auVar29._8_4_;
    auVar46._12_4_ = ~(uint)((ulonglong)lVar13 >> 0x20) & auVar29._12_4_;
    auVar50._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar50._0_8_ = auVar36._0_8_;
    auVar50._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar50);
    auVar36 = blendpd(auVar56,auVar51,2);
    dStack_130 = (double)CONCAT44(~(uint)((ulonglong)lVar11 >> 0x20) & auVar29._4_4_,
                                  ~(uint)lVar11 & auVar29._0_4_) *
                 (auVar59._0_8_ * dVar47 + dVar22 + auVar36._0_8_);
    dStack_140 = auVar46._0_8_ * (dVar53 * dVar47 + dVar60 + auVar21._8_8_);
    dStack_138 = auVar46._8_8_ * (dVar43 * dVar47 + dVar64 + auVar51._0_8_);
    dVar42 = extraout_XMM0._0_8_;
    dVar53 = dVar42 * local_180;
    local_108._0_8_ = (code *)0x0;
    pcVar2 = *(code **)(pFVar10->_padding_ + 0x28);
    dVar47 = dVar42 * dStack_178;
    local_108._16_8_ = local_168;
    dVar42 = dVar42 * local_168;
    local_148 = this;
    pdStack_e0 = FMemory::Malloc(0x48,8);
    *pdStack_e0 = (double)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UDeformMeshPolygonsTool::ComputeUpdate_Rotate'::`2'::<lambda_1>,0,1>
                           ::_vftable_;
    pdStack_e0[1] = (double)local_148;
    pdStack_e0[2] = dStack_140;
    pdStack_e0[3] = dStack_138;
    pdStack_e0[4] = dStack_130;
    pdStack_e0[5] = dVar53;
    pdStack_e0[6] = dVar47;
    auVar3._8_4_ = extraout_XMM0._8_4_;
    auVar3._0_8_ = dVar42;
    auVar3._12_4_ = extraout_XMM0._12_4_;
    *(undefined1 (*) [16])(pdStack_e0 + 7) = auVar3;
    if (pdStack_e0 + 1 != (double *)0x0) {
      local_108._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UDeformMeshPolygonsTool::ComputeUpdate_Rotate'::__l2::<lambda_1>,UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_*,int>
           ::Call;
    }
    (*pcVar2)(pFVar10,uVar6);
    if ((code *)local_108._0_8_ != (code *)0x0) {
      pdVar7 = &(((TVector<double>_u_0 *)local_108)->_s_0).Z;
      if (pdStack_e0 != (double *)0x0) {
        pdVar7 = pdStack_e0;
      }
      (**(code **)((longlong)*pdVar7 + 0x10))();
    }
    if (EVar1 == Laplacian) goto LAB_14cc4cb9b;
  }
  UDynamicMeshComponent::FastNotifyPositionsUpdated
            ((this->DynamicMeshComponent).field0_0x0.DebugPtr,true,false,false);
  plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  (**(code **)(*plVar9 + 0x368))(plVar9);
LAB_14cc4cb9b:
  this->bUpdatePending = false;
  return;
}

// ComputeUpdate_Translate @ 14cc4cbf0

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

void __thiscall UDeformMeshPolygonsTool::ComputeUpdate_Translate(UDeformMeshPolygonsTool *this)

{
  EGroupTopologyDeformationStrategy EVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined8 uVar7;
  char cVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined ***pppuVar11;
  undefined ***pppuVar12;
  FGroupTopologyLaplacianDeformer *pFVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined **ppuVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined4 uVar39;
  undefined1 auVar38 [16];
  double dVar40;
  undefined4 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auStack_1a8 [32];
  double local_188;
  double dStack_180;
  double local_178;
  code *local_168;
  double dStack_160;
  undefined **local_158;
  double dStack_150;
  double local_148;
  undefined ***pppuStack_140;
  code *local_138;
  undefined8 uStack_130;
  undefined **local_128;
  UDeformMeshPolygonsTool *pUStack_120;
  undefined8 local_118;
  undefined ***pppuStack_110;
  code *local_108;
  longlong local_f8 [3];
  longlong *local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  EVar1 = this->DeformationStrategy;
  if (EVar1 == Laplacian) {
    pFVar13 = (this->LaplacianDeformer).Ptr;
  }
  else {
    pFVar13 = (FGroupTopologyLaplacianDeformer *)&this->LinearDeformer;
  }
  local_138 = (code *)0x0;
  pppuStack_110 = (undefined ***)0x0;
  plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
  plVar9 = (longlong *)(**(code **)(*plVar9 + 0x398))(plVar9);
  cVar8 = (**(code **)(*plVar9 + 0x20))(plVar9);
  pppuVar12 = pppuStack_110;
  uVar7 = local_118;
  uVar10 = uStack_130;
  pcVar2 = local_138;
  if (cVar8 == '\0') {
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`UDeformMeshPolygonsTool::ComputeUpdate_Translate'::__l5::<lambda_1>,UE::Math::TVector<double>,UE::Math::TVector<double>_const_&>
                ::Call;
    uStack_130 = dStack_160;
    local_118 = local_148;
    pppuStack_110 = (undefined ***)0x0;
    local_128 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UDeformMeshPolygonsTool::ComputeUpdate_Translate'::`5'::<lambda_1>,0,0>
                 ::_vftable_;
    pUStack_120 = this;
    local_168 = pcVar2;
    dStack_160 = (double)uVar10;
    local_148 = (double)uVar7;
    pppuStack_140 = pppuVar12;
    if (pcVar2 != (code *)0x0) {
      pppuVar11 = &local_158;
      if (pppuVar12 != (undefined ***)0x0) {
        pppuVar11 = pppuVar12;
      }
      (*(code *)(*pppuVar11)[2])();
    }
  }
  local_e0 = (longlong *)0x0;
  pcVar2 = *(code **)((this->QuickAxisTranslater)._padding_ + 0x50);
  local_108 = local_138;
  if (local_138 != (code *)0x0) {
    pppuVar12 = &local_128;
    if (pppuStack_110 != (undefined ***)0x0) {
      pppuVar12 = pppuStack_110;
    }
    (*(code *)**pppuVar12)(pppuVar12,local_f8);
  }
  local_168 = (code *)(this->UpdateRay).Origin.field0_0x0._s_0.X;
  dStack_160 = (this->UpdateRay).Origin.field0_0x0._s_0.Y;
  local_158 = (undefined **)(this->UpdateRay).Origin.field0_0x0._s_0.Z;
  dStack_150 = (this->UpdateRay).Direction.field0_0x0._s_0.X;
  local_148 = (this->UpdateRay).Direction.field0_0x0._s_0.Y;
  pppuStack_140 = (undefined ***)(this->UpdateRay).Direction.field0_0x0._s_0.Z;
  cVar8 = (*pcVar2)(&this->QuickAxisTranslater,&local_168);
  if (cVar8 != '\0') {
    dVar27 = (this->WorldTransform).Rotation.XY.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar28 = (this->WorldTransform).Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar3 = (this->WorldTransform).Rotation.ZW.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar4 = (this->WorldTransform).Rotation.ZW.m128d_f64[1] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    local_178 = local_178 - (this->WorldTransform).Translation.ZW.m128d_f64[0];
    auVar25._8_4_ = SUB84(dVar28,0);
    auVar25._0_8_ = dVar27;
    auVar25._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
    auVar23._8_4_ = SUB84(dVar4,0);
    auVar23._0_8_ = dVar3;
    auVar23._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar26 = blendpd(auVar25,auVar23,2);
    local_188 = local_188 - (this->WorldTransform).Translation.XY.m128d_f64[0];
    dStack_180 = dStack_180 - (this->WorldTransform).Translation.XY.m128d_f64[1];
    uVar39 = SUB84(dStack_180,0);
    uVar41 = (undefined4)((ulonglong)dStack_180 >> 0x20);
    auVar44._8_4_ = uVar39;
    auVar44._0_8_ = local_188;
    auVar44._12_4_ = uVar41;
    auVar18._8_4_ = uVar39;
    auVar18._0_8_ = local_188;
    auVar18._12_4_ = uVar41;
    auVar22._8_4_ = uVar39;
    auVar22._0_8_ = local_188;
    auVar22._12_4_ = uVar41;
    auVar45._0_8_ = auVar44._8_8_ * dVar27 - local_188 * dVar28;
    auVar45._8_8_ = local_178 * dVar28 - auVar18._8_8_ * dVar3;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = local_178;
    auVar23 = blendpd(auVar22,auVar34,2);
    auVar38._8_4_ = SUB84(auVar45._8_8_,0);
    auVar38._0_8_ = auVar45._0_8_;
    auVar38._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
    auVar24._0_8_ = auVar23._0_8_ * dVar3 - local_178 * auVar26._0_8_;
    auVar24._8_8_ = auVar23._8_8_ * dVar4 - auVar26._8_8_ * 0.0;
    dVar36 = auVar38._8_8_ + auVar38._8_8_;
    dVar40 = auVar24._0_8_ + auVar24._0_8_;
    auVar23 = blendpd(auVar45,auVar24,2);
    uVar39 = SUB84(dVar40,0);
    auVar42._8_4_ = uVar39;
    auVar42._0_8_ = dVar36;
    uVar41 = (undefined4)((ulonglong)dVar40 >> 0x20);
    auVar42._12_4_ = uVar41;
    auVar19._8_4_ = uVar39;
    auVar19._0_8_ = dVar36;
    auVar19._12_4_ = uVar41;
    auVar33._8_4_ = uVar39;
    auVar33._0_8_ = dVar36;
    auVar33._12_4_ = uVar41;
    auVar46._0_8_ = auVar23._0_8_ + auVar23._0_8_;
    auVar46._8_8_ = auVar23._8_8_ + auVar23._8_8_;
    auVar23 = *(undefined1 (*) [16])(this->WorldTransform).Scale3D.XY.m128d_f64;
    auVar43._0_8_ = auVar42._8_8_ * dVar27 - dVar36 * dVar28;
    auVar43._8_8_ = auVar46._0_8_ * dVar28 - auVar19._8_8_ * dVar3;
    auVar34 = blendpd(auVar33,auVar46,2);
    auVar20._8_4_ = SUB84(auVar46._8_8_,0);
    auVar20._0_8_ = auVar46._0_8_;
    auVar20._12_4_ = (int)((ulonglong)auVar46._8_8_ >> 0x20);
    auVar35._0_8_ = auVar34._0_8_ * dVar3 - auVar46._0_8_ * auVar26._0_8_;
    auVar35._8_8_ = auVar34._8_8_ * dVar4 - auVar20._8_8_ * auVar26._8_8_;
    auVar34 = *(undefined1 (*) [16])(this->WorldTransform).Scale3D.ZW.m128d_f64;
    auVar29._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar34._4_4_,
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar34._0_4_);
    auVar29._8_4_ = _UNK_15061cc88 & GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar29._12_4_ = _UNK_15061cc8c & GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    lVar14 = -(ulonglong)(auVar29._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    lVar16 = -(ulonglong)(auVar29._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[3]);
    auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar23);
    lVar15 = -(ulonglong)
              ((double)CONCAT44(auVar23._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                auVar23._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar17 = -(ulonglong)
              ((double)CONCAT44(auVar23._12_4_ & _UNK_15061cc8c,auVar23._8_4_ & _UNK_15061cc88) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar21._8_4_ = SUB84(auVar43._8_8_,0);
    auVar21._0_8_ = auVar43._0_8_;
    auVar21._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
    dVar36 = (double)CONCAT44(~(uint)((ulonglong)lVar15 >> 0x20) & auVar26._4_4_,
                              ~(uint)lVar15 & auVar26._0_4_) *
             (dVar36 * dVar4 + local_188 + auVar21._8_8_);
    dVar3 = (double)CONCAT44(~(uint)((ulonglong)lVar17 >> 0x20) & auVar26._12_4_,
                             ~(uint)lVar17 & auVar26._8_4_) *
            (dVar40 * dVar4 + dStack_180 + auVar35._0_8_);
    uVar39 = SUB84(dVar3,0);
    uVar41 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar26._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar26._0_8_ = auVar34._0_8_;
    auVar26._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar23 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar26);
    auVar34 = blendpd(auVar43,auVar35,2);
    auVar30._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar23._4_4_,
                          ~(uint)lVar14 & auVar23._0_4_);
    auVar30._8_4_ = ~(uint)lVar16 & auVar23._8_4_;
    auVar30._12_4_ = ~(uint)((ulonglong)lVar16 >> 0x20) & auVar23._12_4_;
    auVar6._4_8_ = auVar30._8_8_;
    auVar6._0_4_ = (int)((ulonglong)dVar36 >> 0x20);
    auVar31._0_8_ = auVar6._0_8_ << 0x20;
    auVar31._8_4_ = uVar39;
    auVar31._12_4_ = uVar41;
    dVar28 = dVar36 - (this->StartBrushPosLocal).field0_0x0._s_0.X;
    dVar37 = auVar30._0_8_ * (auVar46._0_8_ * dVar4 + local_178 + auVar34._0_8_);
    ppuVar32 = (undefined **)(dVar37 - (this->StartBrushPosLocal).field0_0x0._s_0.Z);
    dVar40 = auVar31._8_8_ - (this->StartBrushPosLocal).field0_0x0._s_0.Y;
    local_158 = ppuVar32;
    uVar10 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
    dVar3 = (this->LastMoveDelta).field0_0x0._s_0.X;
    dVar4 = (this->LastMoveDelta).field0_0x0._s_0.Y;
    dVar27 = (this->LastMoveDelta).field0_0x0._s_0.Z;
    if (0.0 < dVar4 * dVar4 + dVar3 * dVar3 + dVar27 * dVar27) {
      if (dVar28 * dVar28 + dVar40 * dVar40 + (double)ppuVar32 * (double)ppuVar32 <= 0.0) {
        (**(code **)(pFVar13->_padding_ + 0x30))(pFVar13,uVar10);
      }
      else {
        pcVar2 = *(code **)(pFVar13->_padding_ + 0x28);
        local_108 = (code *)0x0;
        local_e0 = FMemory::Malloc(0x28,8);
        *local_e0 = (longlong)
                    &UE::Core::Private::Function::
                     TFunction_OwnedObject<`UDeformMeshPolygonsTool::ComputeUpdate_Translate'::`16'::<lambda_2>,0,1>
                     ::_vftable_;
        local_e0[1] = (longlong)this;
        local_e0[2] = (longlong)dVar28;
        local_e0[3] = (longlong)dVar40;
        local_e0[4] = (longlong)ppuVar32;
        if (local_e0 + 1 != (longlong *)0x0) {
          local_108 = UE::Core::Private::Function::
                      TFunctionRefCaller<`UDeformMeshPolygonsTool::ComputeUpdate_Translate'::__l16::<lambda_2>,UE::Math::TVector<double>,UE::Geometry::FDynamicMesh3_*,int>
                      ::Call;
        }
        (*pcVar2)(pFVar13,uVar10);
        if (local_108 != (code *)0x0) {
          plVar9 = local_f8;
          if (local_e0 != (longlong *)0x0) {
            plVar9 = local_e0;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
      }
      if (EVar1 != Laplacian) {
        UDynamicMeshComponent::FastNotifyPositionsUpdated
                  ((this->DynamicMeshComponent).field0_0x0.DebugPtr,true,false,false);
        plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
        (**(code **)(*plVar9 + 0x368))(plVar9);
      }
    }
    (this->LastMoveDelta).field0_0x0._s_0.X = dVar28;
    (this->LastMoveDelta).field0_0x0._s_0.Y = dVar40;
    this->bUpdatePending = false;
    auVar5._8_4_ = uVar39;
    auVar5._0_8_ = dVar36;
    auVar5._12_4_ = uVar41;
    *(undefined1 (*) [16])&(this->LastBrushPosLocal).field0_0x0 = auVar5;
    (this->LastBrushPosLocal).field0_0x0._s_0.Z = dVar37;
    (this->LastMoveDelta).field0_0x0._s_0.Z = (double)local_158;
  }
  if (local_138 != (code *)0x0) {
    pppuVar12 = &local_128;
    if (pppuStack_110 != (undefined ***)0x0) {
      pppuVar12 = pppuStack_110;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  return;
}

// EndChange @ 14cc54aa0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDeformMeshPolygonsTool::EndChange(UDeformMeshPolygonsTool *this)

{
  code *pcVar1;
  longlong lVar2;
  FText *pFVar3;
  UInteractiveToolManager *pUVar4;
  FMeshVertexChange *local_res8;
  FText local_18;
  
  if (this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) {
    UpdateChangeFromROI(this,true);
    lVar2 = (**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar1 = *(code **)(*(longlong *)(lVar2 + 0x28) + 0x20);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UDeformMeshPolygonsTool",L"PolyMeshDeformationChange",
                        L"PolyMesh Edit");
    local_res8 = (this->ActiveVertexChange->Change).Ptr;
    (this->ActiveVertexChange->Change).Ptr = (FMeshVertexChange *)0x0;
    (*pcVar1)(lVar2 + 0x28,(this->DynamicMeshComponent).field0_0x0.DebugPtr,&local_res8,pFVar3);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
    }
    pUVar4 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
    UE::TransactionUtil::FLongTransactionTracker::Close(&this->LongTransactions,pUVar4);
  }
  if (this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) {
    FMeshVertexChangeBuilder::_scalar_deleting_destructor_(this->ActiveVertexChange,1);
  }
  this->ActiveVertexChange = (FMeshVertexChangeBuilder *)0x0;
  return;
}

// GetActiveQuickTransformer @ 14cc5a860

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FQuickTransformer * __thiscall
UDeformMeshPolygonsTool::GetActiveQuickTransformer(UDeformMeshPolygonsTool *this)

{
  FQuickTransformer *pFVar1;
  
  pFVar1 = (FQuickTransformer *)&this->QuickAxisTranslater;
  if (((this->TransformProps).field0_0x0.DebugPtr)->TransformMode == AxisRotation) {
    pFVar1 = (FQuickTransformer *)&this->QuickAxisRotator;
  }
  return pFVar1;
}

// GetPrivateStaticClass @ 14cc5bdb0

UClass * __cdecl UDeformMeshPolygonsTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDeformMeshPolygonsTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DeformMeshPolygonsTool",
               &Z_Registration_Info_UClass_UDeformMeshPolygonsTool.InnerSingleton,
               StaticRegisterNativesUDeformMeshPolygonsTool,0x1840,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UDeformMeshPolygonsTool>,
               InternalVTableHelperCtorCaller<UDeformMeshPolygonsTool>,local_res8,
               UMeshSurfacePointTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDeformMeshPolygonsTool.InnerSingleton;
}

// GetSpatial @ 14cc5db20

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
UDeformMeshPolygonsTool::GetSpatial(UDeformMeshPolygonsTool *this)

{
  ulong64 uVar1;
  
  if (this->bSpatialDirty != false) {
    UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown
              (&this->MeshSpatial,false);
    uVar1 = UE::Geometry::FDynamicMesh3::GetChangeStamp((this->MeshSpatial).Mesh);
    (this->MeshSpatial).MeshChangeStamp = uVar1;
    this->bSpatialDirty = false;
    return &this->MeshSpatial;
  }
  return &this->MeshSpatial;
}

// GetTopoSelectorSettings @ 14cc5e290

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
UDeformMeshPolygonsTool::GetTopoSelectorSettings(UDeformMeshPolygonsTool *this)

{
  UDeformMeshPolygonsTransformProperties *pUVar1;
  undefined1 *in_RDX;
  
  pUVar1 = (this->TransformProps).field0_0x0.DebugPtr;
  *(undefined4 *)(in_RDX + 3) = 1;
  *in_RDX = pUVar1->bSelectFaces;
  in_RDX[1] = pUVar1->bSelectEdges;
  in_RDX[2] = pUVar1->bSelectVertices;
  return SUB87(in_RDX,0);
}

// HasAccept @ 14cc5ea30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UDeformMeshPolygonsTool::HasAccept(UDeformMeshPolygonsTool *this)

{
  return true;
}

// HasCancel @ 14cc5ea90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UDeformMeshPolygonsTool::HasCancel(UDeformMeshPolygonsTool *this)

{
  return true;
}

// HitTest @ 14cc5ee50

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
UDeformMeshPolygonsTool::HitTest
          (UDeformMeshPolygonsTool *this,TRay<double> *param_1,FHitResult *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  UDeformMeshPolygonsTransformProperties *pUVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  bool bVar6;
  int iVar7;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar8;
  TVector<double> *pTVar9;
  int iVar10;
  undefined8 uVar11;
  int iVar12;
  uint *puVar13;
  longlong lVar14;
  float fVar15;
  double dVar16;
  double dVar17;
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
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  double dVar61;
  undefined4 uVar62;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
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
  double dVar74;
  undefined4 uVar75;
  double dVar76;
  undefined1 auVar77 [16];
  double dVar86;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
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
  undefined1 auVar98 [16];
  double dVar99;
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  double dVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auStackY_378 [32];
  FSelectionSettings local_338;
  TVector<double>_u_0 local_330;
  TVector<double>_u_0 TStack_318;
  TVector<double>_u_0 local_300;
  TVector<double>_u_0 local_2e8;
  TVector<double>_u_0 local_2c8;
  TVector<double>_u_0 local_2a8;
  double dStack_290;
  double local_288;
  double dStack_280;
  TVector<double>_u_0 local_278;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double *pdStack_240;
  undefined8 local_238;
  double local_230;
  TVector<double> local_228;
  EIntersectionType local_210 [2];
  TVector<double>_u_0 local_208;
  undefined1 auStack_1f0 [24];
  TVector<double>_u_0 local_1d8;
  undefined1 local_1b8 [120];
  int local_140;
  int local_134;
  ForElementType<FSetElementId> local_128;
  int local_120;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_118;
  ForElementType<FSetElementId> local_d8;
  int local_d0;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_378;
  dVar50 = (this->WorldTransform).Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar61 = (this->WorldTransform).Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar63._0_8_ =
       (this->WorldTransform).Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar63._8_8_ =
       (this->WorldTransform).Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar36._8_4_ = SUB84(dVar61,0);
  auVar36._0_8_ = dVar50;
  uVar62 = (undefined4)((ulonglong)dVar61 >> 0x20);
  auVar36._12_4_ = uVar62;
  auVar39._8_4_ = SUB84(dVar61,0);
  auVar39._0_8_ = dVar50;
  auVar39._12_4_ = uVar62;
  auVar93._8_4_ = SUB84(auVar63._8_8_,0);
  auVar93._0_8_ = auVar63._0_8_;
  auVar93._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
  auVar40 = blendpd(auVar39,auVar63,2);
  auVar18 = *(undefined1 (*) [16])&(param_1->Direction).field0_0x0;
  dVar17 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar16 = auVar18._8_8_;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = dVar17;
  auVar31 = blendpd(auVar18,auVar31,2);
  auVar100._0_8_ = dVar16 * dVar50 - auVar18._0_8_ * auVar36._8_8_;
  auVar100._8_8_ = dVar17 * dVar61 - dVar16 * auVar63._0_8_;
  auVar77._8_4_ = SUB84(auVar100._8_8_,0);
  auVar77._0_8_ = auVar100._0_8_;
  auVar77._12_4_ = (int)((ulonglong)auVar100._8_8_ >> 0x20);
  auVar32._0_8_ = auVar31._0_8_ * auVar63._0_8_ - dVar17 * auVar40._0_8_;
  auVar32._8_8_ = auVar31._8_8_ * auVar63._8_8_ - auVar40._8_8_ * 0.0;
  dVar76 = auVar77._8_8_ + auVar77._8_8_;
  dVar86 = auVar32._0_8_ + auVar32._0_8_;
  auVar31 = blendpd(auVar100,auVar32,2);
  uVar62 = SUB84(dVar86,0);
  auVar87._8_4_ = uVar62;
  auVar87._0_8_ = dVar76;
  uVar75 = (undefined4)((ulonglong)dVar86 >> 0x20);
  auVar87._12_4_ = uVar75;
  auVar101._0_8_ = auVar31._0_8_ + auVar31._0_8_;
  auVar101._8_8_ = auVar31._8_8_ + auVar31._8_8_;
  auVar71._8_4_ = uVar62;
  auVar71._0_8_ = dVar76;
  auVar71._12_4_ = uVar75;
  auVar31 = *(undefined1 (*) [16])(this->WorldTransform).Scale3D.XY.m128d_f64;
  auVar70._8_4_ = uVar62;
  auVar70._0_8_ = dVar76;
  auVar70._12_4_ = uVar75;
  auVar4._4_8_ = dVar61;
  auVar4._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar51._0_8_ = auVar4._0_8_ << 0x20;
  auVar51._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar51._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar88._0_8_ = auVar87._8_8_ * dVar50 - dVar76 * auVar36._8_8_;
  auVar88._8_8_ = auVar101._0_8_ * dVar61 - auVar71._8_8_ * auVar63._0_8_;
  auVar71 = blendpd(auVar70,auVar101,2);
  local_2e8._s_0.X = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
  local_2e8._s_0.Y = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
  auVar105._8_4_ = SUB84(auVar101._8_8_,0);
  auVar105._0_8_ = auVar101._0_8_;
  auVar105._12_4_ = (int)((ulonglong)auVar101._8_8_ >> 0x20);
  auVar72._0_8_ = auVar71._0_8_ * auVar63._0_8_ - auVar101._0_8_ * auVar40._0_8_;
  auVar72._8_8_ = auVar71._8_8_ * auVar63._8_8_ - auVar105._8_8_ * auVar40._8_8_;
  auVar71 = *(undefined1 (*) [16])(this->WorldTransform).Scale3D.ZW.m128d_f64;
  auVar52._8_8_ = auVar51._8_8_;
  auVar52._0_8_ = auVar71._0_8_;
  auVar103._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar31._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar31._0_4_);
  auVar103._8_4_ = _UNK_15061cc88 & auVar31._8_4_;
  auVar103._12_4_ = _UNK_15061cc8c & auVar31._12_4_;
  auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar31);
  lVar14 = -(ulonglong)(auVar103._8_8_ <= local_2e8._s_0.Y);
  auVar104._0_8_ =
       (double)CONCAT44(~(uint)(-(ulonglong)(auVar103._0_8_ <= local_2e8._s_0.X) >> 0x20) &
                        auVar31._4_4_,
                        ~(uint)-(ulonglong)(auVar103._0_8_ <= local_2e8._s_0.X) & auVar31._0_4_);
  auVar104._8_4_ = ~(uint)lVar14 & auVar31._8_4_;
  auVar104._12_4_ = ~(uint)((ulonglong)lVar14 >> 0x20) & auVar31._12_4_;
  local_2c8._s_0.X = 0.0;
  local_2c8._s_0.Y = 0.0;
  auVar40._8_4_ = SUB84(auVar88._8_8_,0);
  auVar40._0_8_ = auVar88._0_8_;
  auVar40._12_4_ = (int)((ulonglong)auVar88._8_8_ >> 0x20);
  lVar14 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar71._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar71._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar64._0_8_ =
       (this->WorldTransform).Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar64._8_8_ =
       (this->WorldTransform).Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  TStack_318._s_0.X = auVar104._0_8_ * (dVar76 * auVar93._8_8_ + auVar18._0_8_ + auVar40._8_8_);
  TStack_318._s_0.Y = auVar104._8_8_ * (dVar86 * auVar63._8_8_ + dVar16 + auVar72._0_8_);
  auVar71 = blendpd(auVar88,auVar72,2);
  auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar52);
  dVar61 = (this->WorldTransform).Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar76 = (this->WorldTransform).Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar16 = (param_1->Origin).field0_0x0._s_0.Z - (this->WorldTransform).Translation.ZW.m128d_f64[0];
  auVar41._8_4_ = SUB84(dVar76,0);
  auVar41._0_8_ = dVar61;
  uVar62 = (undefined4)((ulonglong)dVar76 >> 0x20);
  auVar41._12_4_ = uVar62;
  auVar31 = blendpd(auVar41,auVar64,2);
  dVar99 = (param_1->Origin).field0_0x0._s_0.X - (this->WorldTransform).Translation.XY.m128d_f64[0];
  dVar102 = (param_1->Origin).field0_0x0._s_0.Y - (this->WorldTransform).Translation.XY.m128d_f64[1]
  ;
  TStack_318._s_0.Z =
       (dVar17 + auVar101._0_8_ * auVar93._8_8_ + auVar71._0_8_) *
       (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar18._4_4_,
                        ~(uint)lVar14 & auVar18._0_4_);
  auVar37._8_4_ = SUB84(dVar76,0);
  auVar37._0_8_ = dVar61;
  auVar37._12_4_ = uVar62;
  auVar89._8_4_ = SUB84(auVar64._8_8_,0);
  auVar89._0_8_ = auVar64._0_8_;
  auVar89._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
  dVar17 = auVar37._8_8_;
  auVar94._8_4_ = SUB84(dVar102,0);
  auVar94._0_8_ = dVar99;
  uVar62 = (undefined4)((ulonglong)dVar102 >> 0x20);
  auVar94._12_4_ = uVar62;
  auVar19._8_4_ = SUB84(auVar64._0_8_,0);
  auVar19._0_8_ = dVar17;
  auVar19._12_4_ = (int)((ulonglong)auVar64._0_8_ >> 0x20);
  auVar33._8_4_ = SUB84(dVar102,0);
  auVar33._0_8_ = dVar99;
  auVar33._12_4_ = uVar62;
  auVar95._0_8_ = auVar94._8_8_ * dVar61 - dVar17 * dVar99;
  auVar95._8_8_ = dVar16 * dVar76 - auVar19._8_8_ * dVar102;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar16;
  auVar18 = blendpd(auVar33,auVar18,2);
  auVar73._8_4_ = SUB84(auVar95._8_8_,0);
  auVar73._0_8_ = auVar95._0_8_;
  auVar73._12_4_ = (int)((ulonglong)auVar95._8_8_ >> 0x20);
  dVar50 = auVar31._8_8_;
  auVar34._0_8_ = auVar18._0_8_ * auVar64._0_8_ - dVar16 * auVar31._0_8_;
  auVar34._8_8_ = auVar18._8_8_ * auVar64._8_8_ - dVar50 * 0.0;
  dVar86 = auVar73._8_8_ + auVar73._8_8_;
  dVar74 = auVar34._0_8_ + auVar34._0_8_;
  auVar71 = blendpd(auVar95,auVar34,2);
  auVar18 = *(undefined1 (*) [16])(this->WorldTransform).Scale3D.XY.m128d_f64;
  uVar62 = SUB84(dVar74,0);
  auVar78._8_4_ = uVar62;
  auVar78._0_8_ = dVar86;
  uVar75 = (undefined4)((ulonglong)dVar74 >> 0x20);
  auVar78._12_4_ = uVar75;
  auVar20._8_4_ = uVar62;
  auVar20._0_8_ = dVar86;
  auVar20._12_4_ = uVar75;
  auVar105 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18);
  auVar96._0_8_ = auVar71._0_8_ + auVar71._0_8_;
  auVar96._8_8_ = auVar71._8_8_ + auVar71._8_8_;
  auVar53._8_4_ = uVar62;
  auVar53._0_8_ = dVar86;
  auVar53._12_4_ = uVar75;
  auVar79._0_8_ = auVar78._8_8_ * dVar61 - dVar86 * dVar17;
  auVar79._8_8_ = auVar96._0_8_ * dVar76 - auVar20._8_8_ * auVar64._0_8_;
  auVar71 = blendpd(auVar53,auVar96,2);
  auVar21._8_4_ = SUB84(auVar96._8_8_,0);
  auVar21._0_8_ = auVar96._0_8_;
  auVar21._12_4_ = (int)((ulonglong)auVar96._8_8_ >> 0x20);
  auVar5._4_8_ = dVar50;
  auVar5._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar42._0_8_ = auVar5._0_8_ << 0x20;
  auVar42._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar42._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar54._0_8_ = auVar71._0_8_ * auVar64._0_8_ - auVar96._0_8_ * auVar31._0_8_;
  auVar54._8_8_ = auVar71._8_8_ * auVar64._8_8_ - auVar21._8_8_ * dVar50;
  auVar31 = *(undefined1 (*) [16])(this->WorldTransform).Scale3D.ZW.m128d_f64;
  auVar43._8_8_ = auVar42._8_8_;
  auVar43._0_8_ = auVar31._0_8_;
  auVar22._8_4_ = SUB84(auVar79._8_8_,0);
  auVar22._0_8_ = auVar79._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar79._8_8_ >> 0x20);
  auVar65._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar18._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar18._0_4_);
  auVar65._8_4_ = _UNK_15061cc88 & auVar18._8_4_;
  auVar65._12_4_ = _UNK_15061cc8c & auVar18._12_4_;
  lVar14 = -(ulonglong)(auVar65._8_8_ <= local_2e8._s_0.Y);
  auVar66._0_8_ =
       (double)CONCAT44(~(uint)(-(ulonglong)(auVar65._0_8_ <= local_2e8._s_0.X) >> 0x20) &
                        auVar105._4_4_,
                        ~(uint)-(ulonglong)(auVar65._0_8_ <= local_2e8._s_0.X) & auVar105._0_4_);
  auVar66._8_4_ = ~(uint)lVar14 & auVar105._8_4_;
  auVar66._12_4_ = ~(uint)((ulonglong)lVar14 >> 0x20) & auVar105._12_4_;
  lVar14 = -(ulonglong)
            ((double)CONCAT44(auVar31._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar31._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  local_330._s_0.X = auVar66._0_8_ * (dVar86 * auVar89._8_8_ + dVar99 + auVar22._8_8_);
  local_330._s_0.Y = auVar66._8_8_ * (dVar74 * auVar64._8_8_ + dVar102 + auVar54._0_8_);
  auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar43);
  auVar18 = blendpd(auVar79,auVar54,2);
  local_330._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar14 >> 0x20) & auVar31._4_4_,
                        ~(uint)lVar14 & auVar31._0_4_) *
       (auVar96._0_8_ * auVar89._8_8_ + dVar16 + auVar18._0_8_);
  local_300._s_0.X = TStack_318._s_0.X;
  local_300._s_0.Y = TStack_318._s_0.Y;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&TStack_318._s_0,__real_3e45798ee0000000);
  auVar35._0_8_ = TStack_318._s_0.Z * TStack_318._s_0.Z;
  auVar35._8_8_ = 0;
  auVar38._0_8_ =
       TStack_318._s_0.X * TStack_318._s_0.X + TStack_318._s_0.Y * TStack_318._s_0.Y + auVar35._0_8_
  ;
  auVar38._8_8_ = 0;
  auVar18 = sqrtpd(auVar35,auVar38);
  if (auVar18._0_8_ <= 0.0) {
    TStack_318._s_0.X = 0.0;
    TStack_318._s_0.Y = 0.0;
    TStack_318._s_0.Z = 0.0;
  }
  else {
    dVar17 = __real_3ff0000000000000 / auVar18._0_8_;
    TStack_318._s_0.X = TStack_318._s_0.X * dVar17;
    TStack_318._s_0.Y = TStack_318._s_0.Y * dVar17;
    TStack_318._s_0.Z = TStack_318._s_0.Z * dVar17;
  }
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
            ((FGroupTopologySelection *)local_1b8);
  pUVar3 = (this->TransformProps).field0_0x0.DebugPtr;
  local_338.bHitBackFaces = true;
  local_338.bPreferProjectedElement = false;
  local_338.bSelectDownRay = false;
  local_338.bIgnoreOcclusion = false;
  iVar10 = 0;
  local_338.bEnableFaceHits = pUVar3->bSelectFaces;
  local_338.bEnableEdgeHits = pUVar3->bSelectEdges;
  local_338.bEnableCornerHits = pUVar3->bSelectVertices;
  bVar6 = FMeshTopologySelector::FindSelectedElement
                    ((FMeshTopologySelector *)&this->TopoSelector,&local_338,
                     (TRay<double> *)&local_330._s_0,(FGroupTopologySelection *)local_1b8,
                     (TVector<double> *)&local_300._s_0,(TVector<double> *)&local_2c8._s_0,
                     (int *)0x0);
  iVar12 = 0;
  if (!bVar6) {
    bVar6 = false;
    goto LAB_14cc5f8c7;
  }
  if (local_1b8._88_4_ - local_134 < 1) {
    if (0 < (int)(local_118._8_4_ - local_118._52_4_)) {
      iVar12 = UE::Geometry::FGroupTopologySelection::GetASelectedEdgeID
                         ((FGroupTopologySelection *)local_1b8);
      param_2->FaceIndex = iVar12;
      goto LAB_14cc5f3d3;
    }
    pTVar8 = GetSpatial(this);
    local_208._s_0.X = __real_7fefffffffffffff;
    local_208._s_0.Z = 0.0;
    local_1d8._s_0.Y = 0.0;
    local_1d8._16_1_ = 0;
    iVar12 = (**(code **)(pTVar8->_padding_ + 0x40))(pTVar8,&local_330,&local_208);
    if (local_208._s_0.Z != 0.0) {
      uVar11 = &(((TVector<double>_u_0 *)auStack_1f0)->_s_0).Y;
      if ((double *)local_1d8._s_0.Y != (double *)0x0) {
        uVar11 = local_1d8._s_0.Y;
      }
      (**(code **)((longlong)*(double *)uVar11 + 0x10))();
    }
    if (iVar12 != -1) {
      pTVar8 = GetSpatial(this);
      UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (pTVar8->Mesh,iVar12,(TVector<double> *)&local_208._s_0,
                 (TVector<double> *)&((TVector<double>_u_0 *)auStack_1f0)->_s_0,
                 (TVector<double> *)&local_1d8._s_0);
      local_2a8._s_0.X = local_330._s_0.X;
      local_2a8._s_0.Y = local_330._s_0.Y;
      local_2a8._s_0.Z = local_330._s_0.Z;
      dStack_290 = TStack_318._s_0.X;
      local_288 = TStack_318._s_0.Y;
      dStack_280 = TStack_318._s_0.Z;
      local_278._s_0.X = local_208._s_0.X;
      local_278._s_0.Y = local_208._s_0.Y;
      local_278._s_0.Z = local_208._s_0.Z;
      dStack_260 = (double)auStack_1f0._0_8_;
      local_258 = (double)auStack_1f0._8_8_;
      dStack_250 = (double)auStack_1f0._16_8_;
      local_238 = CONCAT71(local_1d8._17_7_,local_1d8._16_1_);
      local_248 = local_1d8._s_0.X;
      pdStack_240 = (double *)local_1d8._s_0.Y;
      UE::Geometry::TIntrRay3Triangle3<double,UE::Math::TRay<double>_>::FindIntersection
                ((TRay<double> *)&local_2a8._s_0,(TTriangle3<double> *)&local_278._s_0,&local_230,
                 &local_228,local_210);
      param_2->FaceIndex = iVar12;
      param_2->Distance = (float)local_230;
      pTVar8 = GetSpatial(this);
      pTVar9 = UE::Geometry::FDynamicMesh3::GetTriNormal
                         (pTVar8->Mesh,(TVector<double> *)&local_2e8._s_0,iVar12);
      auVar18 = *(undefined1 (*) [16])(this->WorldTransform).Rotation.ZW.m128d_f64;
      dVar50 = auVar18._0_8_;
      auVar31 = *(undefined1 (*) [16])(this->WorldTransform).Rotation.XY.m128d_f64;
      dVar16 = (this->WorldTransform).Rotation.ZW.m128d_f64[1];
      auVar71 = *(undefined1 (*) [16])&pTVar9->field0_0x0;
      dVar17 = (pTVar9->field0_0x0)._s_0.Z;
      auVar97._8_8_ = 0;
      auVar97._0_8_ = dVar17;
      auVar105 = blendpd(auVar31,auVar18,2);
      dVar86 = auVar71._8_8_;
      auVar91._0_8_ = dVar86 * auVar31._0_8_ - auVar31._8_8_ * auVar71._0_8_;
      auVar91._8_8_ = dVar17 * auVar31._8_8_ - dVar50 * dVar86;
      auVar31 = blendpd(auVar71,auVar97,2);
      auVar68._8_4_ = SUB84(auVar91._8_8_,0);
      auVar68._0_8_ = auVar91._0_8_;
      auVar68._12_4_ = (int)((ulonglong)auVar91._8_8_ >> 0x20);
      auVar26._0_8_ = auVar31._0_8_ * dVar50 - auVar105._0_8_ * dVar17;
      auVar26._8_8_ = auVar31._8_8_ * auVar18._8_8_ - auVar105._8_8_ * 0.0;
      auVar31 = *(undefined1 (*) [16])(this->WorldTransform).Rotation.XY.m128d_f64;
      dVar61 = auVar68._8_8_ + auVar68._8_8_;
      dVar76 = auVar26._0_8_ + auVar26._0_8_;
      auVar105 = blendpd(auVar91,auVar26,2);
      auVar92._0_8_ = auVar105._0_8_ + auVar105._0_8_;
      auVar92._8_8_ = auVar105._8_8_ + auVar105._8_8_;
      auVar57._8_4_ = SUB84(dVar76,0);
      auVar57._0_8_ = dVar61;
      uVar62 = (undefined4)((ulonglong)dVar76 >> 0x20);
      auVar57._12_4_ = uVar62;
      auVar46._8_4_ = SUB84(dVar76,0);
      auVar46._0_8_ = dVar61;
      auVar46._12_4_ = uVar62;
      auVar40 = blendpd(auVar46,auVar92,2);
      auVar105 = blendpd(auVar31,auVar18,2);
      auVar58._0_8_ = auVar57._8_8_ * auVar31._0_8_ - auVar31._8_8_ * dVar61;
      auVar58._8_8_ = auVar92._0_8_ * auVar31._8_8_ - dVar50 * dVar76;
      auVar47._0_8_ = auVar40._0_8_ * dVar50 - auVar105._0_8_ * auVar92._0_8_;
      auVar47._8_8_ = auVar40._8_8_ * auVar18._8_8_ - auVar105._8_8_ * auVar92._8_8_;
      auVar27._8_4_ = SUB84(auVar58._8_8_,0);
      auVar27._0_8_ = auVar58._0_8_;
      auVar27._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
      auVar18 = blendpd(auVar58,auVar47,2);
      *(double *)&param_2->Normal = dVar61 * dVar16 + auVar71._0_8_ + auVar27._8_8_;
      *(double *)&(param_2->Normal).field_0x8 = dVar76 * dVar16 + dVar86 + auVar47._0_8_;
      *(double *)&(param_2->Normal).field_0x10 = auVar92._0_8_ * dVar16 + dVar17 + auVar18._0_8_;
      auVar98._0_8_ =
           (TStack_318._s_0.Z * local_230 + local_330._s_0.Z) *
           (this->WorldTransform).Scale3D.ZW.m128d_f64[0];
      auVar98._8_8_ = (this->WorldTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar50 = (this->WorldTransform).Rotation.ZW.m128d_f64[1];
      auVar18 = *(undefined1 (*) [16])(this->WorldTransform).Rotation.ZW.m128d_f64;
      dVar17 = auVar18._0_8_;
      dVar86 = (this->WorldTransform).Scale3D.XY.m128d_f64[0] *
               (TStack_318._s_0.X * local_230 + local_330._s_0.X);
      dVar74 = (this->WorldTransform).Scale3D.XY.m128d_f64[1] *
               (TStack_318._s_0.Y * local_230 + local_330._s_0.Y);
      auVar31 = *(undefined1 (*) [16])(this->WorldTransform).Rotation.XY.m128d_f64;
      auVar71 = blendpd(auVar31,auVar18,2);
      auVar83._8_4_ = SUB84(dVar74,0);
      auVar83._0_8_ = dVar86;
      uVar62 = (undefined4)((ulonglong)dVar74 >> 0x20);
      auVar83._12_4_ = uVar62;
      auVar84._0_8_ = auVar83._8_8_ * auVar31._0_8_ - auVar31._8_8_ * dVar86;
      auVar84._8_8_ = auVar98._0_8_ * auVar31._8_8_ - dVar17 * dVar74;
      auVar28._8_4_ = SUB84(dVar74,0);
      auVar28._0_8_ = dVar86;
      auVar28._12_4_ = uVar62;
      auVar31 = blendpd(auVar28,auVar98,2);
      auVar69._8_4_ = SUB84(auVar84._8_8_,0);
      auVar69._0_8_ = auVar84._0_8_;
      auVar69._12_4_ = (int)((ulonglong)auVar84._8_8_ >> 0x20);
      auVar29._0_8_ = auVar31._0_8_ * dVar17 - auVar71._0_8_ * auVar98._0_8_;
      auVar29._8_8_ = auVar31._8_8_ * auVar18._8_8_ - auVar71._8_8_ * auVar98._8_8_;
      auVar31 = *(undefined1 (*) [16])(this->WorldTransform).Rotation.XY.m128d_f64;
      auVar71 = blendpd(auVar84,auVar29,2);
      dVar61 = auVar69._8_8_ + auVar69._8_8_;
      dVar76 = auVar29._0_8_ + auVar29._0_8_;
      auVar85._0_8_ = auVar71._0_8_ + auVar71._0_8_;
      auVar85._8_8_ = auVar71._8_8_ + auVar71._8_8_;
      auVar59._8_4_ = SUB84(dVar76,0);
      auVar59._0_8_ = dVar61;
      uVar62 = (undefined4)((ulonglong)dVar76 >> 0x20);
      auVar59._12_4_ = uVar62;
      auVar48._8_4_ = SUB84(dVar76,0);
      auVar48._0_8_ = dVar61;
      auVar48._12_4_ = uVar62;
      auVar71 = blendpd(auVar48,auVar85,2);
      auVar60._0_8_ = auVar59._8_8_ * auVar31._0_8_ - auVar31._8_8_ * dVar61;
      auVar60._8_8_ = auVar85._0_8_ * auVar31._8_8_ - dVar17 * dVar76;
      auVar30._8_4_ = SUB84(auVar60._8_8_,0);
      auVar30._0_8_ = auVar60._0_8_;
      auVar30._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
      auVar31 = blendpd(auVar31,auVar18,2);
      auVar49._0_8_ = auVar71._0_8_ * dVar17 - auVar31._0_8_ * auVar85._0_8_;
      auVar49._8_8_ = auVar71._8_8_ * auVar18._8_8_ - auVar31._8_8_ * auVar85._8_8_;
      auVar18 = blendpd(auVar60,auVar49,2);
      dVar16 = (this->WorldTransform).Translation.XY.m128d_f64[1];
      dVar17 = (this->WorldTransform).Translation.ZW.m128d_f64[0];
      *(double *)&param_2->ImpactPoint =
           dVar61 * dVar50 + dVar86 + auVar30._8_8_ +
           (this->WorldTransform).Translation.XY.m128d_f64[0];
      *(double *)&(param_2->ImpactPoint).field_0x8 =
           dVar76 * dVar50 + dVar74 + auVar49._0_8_ + dVar16;
      *(double *)&(param_2->ImpactPoint).field_0x10 =
           auVar85._0_8_ * dVar50 + auVar98._0_8_ + auVar18._0_8_ + dVar17;
    }
  }
  else {
    iVar7 = iVar12;
    if (local_140 != 0) {
      puVar13 = (uint *)(local_1b8 + 0x60);
      if ((uint *)local_1b8._112_8_ != (uint *)0x0) {
        puVar13 = (uint *)local_1b8._112_8_;
      }
      uVar2 = *puVar13;
      while (uVar2 == 0) {
        lVar14 = (longlong)iVar10;
        iVar12 = iVar12 + 0x20;
        iVar10 = iVar10 + 1;
        iVar7 = local_140;
        if ((int)(local_140 + -1 + (local_140 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_14cc5f398;
        uVar2 = puVar13[lVar14 + 1];
      }
      uVar1 = (ulonglong)(-uVar2 & uVar2) * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = iVar12 + -1 + (int)lVar14;
      if (local_140 < iVar7) {
        iVar7 = local_140;
      }
    }
LAB_14cc5f398:
    param_2->FaceIndex = *(int *)(local_1b8._80_8_ + (longlong)iVar7 * 0xc);
LAB_14cc5f3d3:
    fVar15 = (float)((local_300._s_0.Y - local_330._s_0.Y) * TStack_318._s_0.Y +
                     (local_300._s_0.X - local_330._s_0.X) * TStack_318._s_0.X +
                    (local_300._s_0.Z - local_330._s_0.Z) * TStack_318._s_0.Z);
    param_2->Distance = fVar15;
    dVar17 = (double)fVar15;
    auVar18 = *(undefined1 (*) [16])(this->WorldTransform).Rotation.XY.m128d_f64;
    auVar31 = *(undefined1 (*) [16])(this->WorldTransform).Rotation.ZW.m128d_f64;
    dVar16 = auVar31._0_8_;
    auVar71 = blendpd(auVar18,auVar31,2);
    auVar90._0_8_ =
         (TStack_318._s_0.Z * dVar17 + local_330._s_0.Z) *
         (this->WorldTransform).Scale3D.ZW.m128d_f64[0];
    auVar90._8_8_ = (this->WorldTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar86 = (this->WorldTransform).Scale3D.XY.m128d_f64[0] *
             (TStack_318._s_0.X * dVar17 + local_330._s_0.X);
    dVar74 = (this->WorldTransform).Scale3D.XY.m128d_f64[1] *
             (TStack_318._s_0.Y * dVar17 + local_330._s_0.Y);
    dVar50 = (this->WorldTransform).Rotation.ZW.m128d_f64[1];
    auVar80._8_4_ = SUB84(dVar74,0);
    auVar80._0_8_ = dVar86;
    uVar62 = (undefined4)((ulonglong)dVar74 >> 0x20);
    auVar80._12_4_ = uVar62;
    auVar81._0_8_ = auVar80._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar86;
    auVar81._8_8_ = auVar90._0_8_ * auVar18._8_8_ - dVar16 * dVar74;
    auVar23._8_4_ = SUB84(dVar74,0);
    auVar23._0_8_ = dVar86;
    auVar23._12_4_ = uVar62;
    auVar18 = blendpd(auVar23,auVar90,2);
    auVar67._8_4_ = SUB84(auVar81._8_8_,0);
    auVar67._0_8_ = auVar81._0_8_;
    auVar67._12_4_ = (int)((ulonglong)auVar81._8_8_ >> 0x20);
    auVar24._0_8_ = auVar18._0_8_ * dVar16 - auVar71._0_8_ * auVar90._0_8_;
    auVar24._8_8_ = auVar18._8_8_ * auVar31._8_8_ - auVar71._8_8_ * auVar90._8_8_;
    auVar18 = *(undefined1 (*) [16])(this->WorldTransform).Rotation.XY.m128d_f64;
    auVar71 = blendpd(auVar81,auVar24,2);
    dVar61 = auVar67._8_8_ + auVar67._8_8_;
    dVar76 = auVar24._0_8_ + auVar24._0_8_;
    auVar82._0_8_ = auVar71._0_8_ + auVar71._0_8_;
    auVar82._8_8_ = auVar71._8_8_ + auVar71._8_8_;
    auVar55._8_4_ = SUB84(dVar76,0);
    auVar55._0_8_ = dVar61;
    uVar62 = (undefined4)((ulonglong)dVar76 >> 0x20);
    auVar55._12_4_ = uVar62;
    auVar44._8_4_ = SUB84(dVar76,0);
    auVar44._0_8_ = dVar61;
    auVar44._12_4_ = uVar62;
    auVar71 = blendpd(auVar44,auVar82,2);
    auVar56._0_8_ = auVar55._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar61;
    auVar56._8_8_ = auVar82._0_8_ * auVar18._8_8_ - dVar16 * dVar76;
    auVar25._8_4_ = SUB84(auVar56._8_8_,0);
    auVar25._0_8_ = auVar56._0_8_;
    auVar25._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
    auVar18 = blendpd(auVar18,auVar31,2);
    auVar45._0_8_ = auVar71._0_8_ * dVar16 - auVar18._0_8_ * auVar82._0_8_;
    auVar45._8_8_ = auVar71._8_8_ * auVar31._8_8_ - auVar18._8_8_ * auVar82._8_8_;
    auVar18 = blendpd(auVar56,auVar45,2);
    dVar16 = (this->WorldTransform).Translation.XY.m128d_f64[1];
    dVar17 = (this->WorldTransform).Translation.ZW.m128d_f64[0];
    *(double *)&param_2->ImpactPoint =
         dVar61 * dVar50 + dVar86 + auVar25._8_8_ +
         (this->WorldTransform).Translation.XY.m128d_f64[0];
    *(double *)&(param_2->ImpactPoint).field_0x8 = dVar76 * dVar50 + dVar74 + auVar45._0_8_ + dVar16
    ;
    *(double *)&(param_2->ImpactPoint).field_0x10 =
         auVar82._0_8_ * dVar50 + auVar90._0_8_ + auVar18._0_8_ + dVar17;
  }
  bVar6 = true;
LAB_14cc5f8c7:
  local_d0 = 0;
  if (local_d8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_118);
  local_120 = 0;
  if (local_128 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_1b8 + 0x50));
  local_1b8._72_4_ = 0;
  if ((ForElementType<FSetElementId>)local_1b8._64_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1b8._64_8_);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1b8);
  return bVar6;
}

// IsInputSelectionValidOnOutput @ 14cc62480

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
UDeformMeshPolygonsTool::IsInputSelectionValidOnOutput(UDeformMeshPolygonsTool *this)

{
  return true;
}

// NextTransformTypeAction @ 14cc655f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDeformMeshPolygonsTool::NextTransformTypeAction(UDeformMeshPolygonsTool *this)

{
  UDeformMeshPolygonsTransformProperties *pUVar1;
  
  if (this->bInDrag == false) {
    pUVar1 = (this->TransformProps).field0_0x0.DebugPtr;
    pUVar1->TransformMode = pUVar1->TransformMode != AxisRotation;
    UpdateQuickTransformer(this);
    return;
  }
  return;
}

// OnBeginDrag @ 14cc65740

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
UDeformMeshPolygonsTool::OnBeginDrag(UDeformMeshPolygonsTool *this,TRay<double> *param_1)

{
  TTransform<double> *this_00;
  EGroupTopologyDeformationStrategy EVar1;
  int iVar2;
  UDeformMeshPolygonsTransformProperties *pUVar3;
  FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *this_01;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  bool bVar9;
  TVector<double> *pTVar10;
  FMeshVertexChangeBuilder *this_02;
  FMeshVertexChangeBuilder *pFVar11;
  UInteractiveToolManager *pUVar12;
  FText *pFVar13;
  FGroupTopologySelection *pFVar14;
  code *pcVar15;
  FGroupTopologyLaplacianDeformer *pFVar16;
  longlong lVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
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
  double dVar64;
  undefined4 uVar65;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined4 uVar66;
  double dVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  double dVar75;
  undefined1 auVar76 [16];
  double dVar82;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  double dVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  double dVar96;
  undefined4 uVar97;
  undefined1 auStackY_2c8 [32];
  FSelectionSettings local_288;
  undefined1 local_280 [8];
  TVector<double>_u_0 local_278;
  TVector<double>_u_0 local_258;
  TVector<double>_u_0 local_240;
  TVector<double>_u_0 local_228;
  TVector<double>_u_0 local_208;
  TVector<double>_u_0 local_1e8;
  undefined1 local_1c8 [88];
  int local_170;
  int local_144;
  ForElementType<FSetElementId> local_138;
  int local_130;
  FGroupTopologySelection local_128;
  
  local_128.SelectedCornerIDs.Elements._0_8_ = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  this_00 = &this->WorldTransform;
  dVar55 = (this_00->Rotation).XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar64 = (this->WorldTransform).Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar5 = (this->WorldTransform).Rotation.ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar19 = (this->WorldTransform).Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar66 = (undefined4)((ulonglong)dVar19 >> 0x20);
  auVar42._8_4_ = SUB84(dVar64,0);
  auVar42._0_8_ = dVar55;
  uVar65 = (undefined4)((ulonglong)dVar64 >> 0x20);
  auVar42._12_4_ = uVar65;
  auVar46._8_4_ = SUB84(dVar64,0);
  auVar46._0_8_ = dVar55;
  auVar46._12_4_ = uVar65;
  auVar88._8_4_ = SUB84(dVar19,0);
  auVar88._0_8_ = dVar5;
  auVar88._12_4_ = uVar66;
  auVar39 = *(undefined1 (*) [16])&(param_1->Direction).field0_0x0;
  auVar36._8_4_ = SUB84(dVar19,0);
  auVar36._0_8_ = dVar5;
  auVar36._12_4_ = uVar66;
  auVar47 = blendpd(auVar46,auVar36,2);
  dVar20 = (param_1->Direction).field0_0x0._s_0.Z;
  auVar85._8_8_ = 0;
  auVar85._0_8_ = dVar20;
  auVar36 = blendpd(auVar39,auVar85,2);
  dVar93 = auVar39._8_8_;
  dVar67 = auVar42._8_8_;
  auVar21._8_4_ = SUB84(dVar5,0);
  auVar21._0_8_ = dVar67;
  auVar21._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar94._0_8_ = dVar93 * dVar55 - dVar67 * auVar39._0_8_;
  auVar94._8_8_ = dVar20 * dVar64 - auVar21._8_8_ * dVar93;
  auVar76._8_4_ = SUB84(auVar94._8_8_,0);
  auVar76._0_8_ = auVar94._0_8_;
  auVar76._12_4_ = (int)((ulonglong)auVar94._8_8_ >> 0x20);
  auVar37._0_8_ = auVar36._0_8_ * dVar5 - auVar47._0_8_ * dVar20;
  auVar37._8_8_ = auVar36._8_8_ * dVar19 - auVar47._8_8_ * 0.0;
  auVar36 = blendpd(auVar94,auVar37,2);
  dVar75 = auVar76._8_8_ + auVar76._8_8_;
  dVar82 = auVar37._0_8_ + auVar37._0_8_;
  auVar95._0_8_ = auVar36._0_8_ + auVar36._0_8_;
  auVar95._8_8_ = auVar36._8_8_ + auVar36._8_8_;
  local_208._s_0.X = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
  local_208._s_0.Y = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
  uVar65 = SUB84(dVar82,0);
  auVar83._8_4_ = uVar65;
  auVar83._0_8_ = dVar75;
  uVar66 = (undefined4)((ulonglong)dVar82 >> 0x20);
  auVar83._12_4_ = uVar66;
  auVar22._8_4_ = uVar65;
  auVar22._0_8_ = dVar75;
  auVar22._12_4_ = uVar66;
  auVar36 = *(undefined1 (*) [16])(this->WorldTransform).Scale3D.XY.m128d_f64;
  auVar68._8_4_ = uVar65;
  auVar68._0_8_ = dVar75;
  auVar68._12_4_ = uVar66;
  auVar8._4_8_ = dVar64;
  auVar8._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar56._0_8_ = auVar8._0_8_ << 0x20;
  auVar56._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar56._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar84._0_8_ = auVar83._8_8_ * dVar55 - dVar75 * dVar67;
  auVar84._8_8_ = auVar95._0_8_ * dVar64 - auVar22._8_8_ * dVar5;
  auVar69 = blendpd(auVar68,auVar95,2);
  auVar23._8_4_ = SUB84(auVar95._8_8_,0);
  auVar23._0_8_ = auVar95._0_8_;
  auVar23._12_4_ = (int)((ulonglong)auVar95._8_8_ >> 0x20);
  auVar70._0_8_ = auVar69._0_8_ * dVar5 - auVar95._0_8_ * auVar47._0_8_;
  auVar70._8_8_ = auVar69._8_8_ * dVar19 - auVar23._8_8_ * auVar47._8_8_;
  auVar47 = *(undefined1 (*) [16])(this->WorldTransform).Scale3D.ZW.m128d_f64;
  auVar57._8_8_ = auVar56._8_8_;
  auVar57._0_8_ = auVar47._0_8_;
  auVar24._0_8_ =
       (double)CONCAT44(auVar36._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar36._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar24._8_4_ = auVar36._8_4_ & _UNK_15061cc88;
  auVar24._12_4_ = auVar36._12_4_ & _UNK_15061cc8c;
  lVar18 = -(ulonglong)(auVar24._8_8_ <= local_208._s_0.Y);
  local_278._s_0.X = 0.0;
  local_278._s_0.Y = 0.0;
  lVar17 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar47._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar47._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar36);
  local_228._0_4_ = (undefined4)-(ulonglong)(auVar24._0_8_ <= local_208._s_0.X);
  local_228._4_4_ = (undefined4)(-(ulonglong)(auVar24._0_8_ <= local_208._s_0.X) >> 0x20);
  local_228._8_4_ = (undefined4)lVar18;
  local_228._12_4_ = (undefined4)((ulonglong)lVar18 >> 0x20);
  dVar5 = (this->WorldTransform).Rotation.ZW.m128d_f64[0] *
          GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar67 = (this->WorldTransform).Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar66 = (undefined4)((ulonglong)dVar67 >> 0x20);
  auVar43._0_8_ =
       (double)CONCAT44(~local_228._4_4_ & auVar36._4_4_,~local_228._0_4_ & auVar36._0_4_);
  auVar43._8_4_ = ~local_228._8_4_ & auVar36._8_4_;
  auVar43._12_4_ = ~local_228._12_4_ & auVar36._12_4_;
  auVar25._8_4_ = SUB84(auVar84._8_8_,0);
  auVar25._0_8_ = auVar84._0_8_;
  auVar25._12_4_ = (int)((ulonglong)auVar84._8_8_ >> 0x20);
  auVar85 = blendpd(auVar84,auVar70,2);
  auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar57);
  dVar55 = (this_00->Rotation).XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar64 = (this->WorldTransform).Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  local_240._s_0.X = auVar43._0_8_ * (dVar75 * auVar88._8_8_ + auVar39._0_8_ + auVar25._8_8_);
  local_240._s_0.Y = auVar43._8_8_ * (dVar82 * dVar19 + dVar93 + auVar70._0_8_);
  dVar93 = (param_1->Origin).field0_0x0._s_0.X - (this->WorldTransform).Translation.XY.m128d_f64[0];
  dVar96 = (param_1->Origin).field0_0x0._s_0.Y - (this->WorldTransform).Translation.XY.m128d_f64[1];
  auVar48._8_4_ = SUB84(dVar64,0);
  auVar48._0_8_ = dVar55;
  uVar65 = (undefined4)((ulonglong)dVar64 >> 0x20);
  auVar48._12_4_ = uVar65;
  auVar89._8_4_ = SUB84(dVar96,0);
  auVar89._0_8_ = dVar93;
  uVar97 = (undefined4)((ulonglong)dVar96 >> 0x20);
  auVar89._12_4_ = uVar97;
  dVar19 = (param_1->Origin).field0_0x0._s_0.Z - (this->WorldTransform).Translation.ZW.m128d_f64[0];
  auVar39._8_4_ = SUB84(dVar67,0);
  auVar39._0_8_ = dVar5;
  auVar39._12_4_ = uVar66;
  auVar47 = blendpd(auVar48,auVar39,2);
  auVar38._8_4_ = SUB84(dVar96,0);
  auVar38._0_8_ = dVar93;
  auVar38._12_4_ = uVar97;
  auVar69._8_8_ = 0;
  auVar69._0_8_ = dVar19;
  auVar39 = blendpd(auVar38,auVar69,2);
  local_240._s_0.Z =
       (dVar20 + auVar95._0_8_ * auVar88._8_8_ + auVar85._0_8_) *
       (double)CONCAT44(~(uint)((ulonglong)lVar17 >> 0x20) & auVar36._4_4_,
                        ~(uint)lVar17 & auVar36._0_4_);
  auVar44._8_4_ = SUB84(dVar64,0);
  auVar44._0_8_ = dVar55;
  auVar44._12_4_ = uVar65;
  auVar86._8_4_ = SUB84(dVar67,0);
  auVar86._0_8_ = dVar5;
  auVar86._12_4_ = uVar66;
  dVar20 = auVar44._8_8_;
  auVar26._8_4_ = SUB84(dVar5,0);
  auVar26._0_8_ = dVar20;
  auVar26._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar90._0_8_ = auVar89._8_8_ * dVar55 - dVar20 * dVar93;
  auVar90._8_8_ = dVar19 * dVar64 - auVar26._8_8_ * dVar96;
  auVar71._8_4_ = SUB84(auVar90._8_8_,0);
  auVar71._0_8_ = auVar90._0_8_;
  auVar71._12_4_ = (int)((ulonglong)auVar90._8_8_ >> 0x20);
  auVar40._0_8_ = auVar39._0_8_ * dVar5 - dVar19 * auVar47._0_8_;
  auVar40._8_8_ = auVar39._8_8_ * dVar67 - auVar47._8_8_ * 0.0;
  dVar75 = auVar71._8_8_ + auVar71._8_8_;
  dVar82 = auVar40._0_8_ + auVar40._0_8_;
  auVar36 = blendpd(auVar90,auVar40,2);
  auVar39 = *(undefined1 (*) [16])(this->WorldTransform).Scale3D.XY.m128d_f64;
  uVar65 = SUB84(dVar82,0);
  auVar77._8_4_ = uVar65;
  auVar77._0_8_ = dVar75;
  uVar66 = (undefined4)((ulonglong)dVar82 >> 0x20);
  auVar77._12_4_ = uVar66;
  auVar69 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar39);
  auVar91._0_8_ = auVar36._0_8_ + auVar36._0_8_;
  auVar91._8_8_ = auVar36._8_8_ + auVar36._8_8_;
  auVar27._8_4_ = uVar65;
  auVar27._0_8_ = dVar75;
  auVar27._12_4_ = uVar66;
  auVar58._8_4_ = uVar65;
  auVar58._0_8_ = dVar75;
  auVar58._12_4_ = uVar66;
  auVar78._0_8_ = auVar77._8_8_ * dVar55 - dVar75 * dVar20;
  auVar78._8_8_ = auVar91._0_8_ * dVar64 - auVar27._8_8_ * dVar5;
  auVar36 = blendpd(auVar58,auVar91,2);
  auVar28._8_4_ = SUB84(auVar91._8_8_,0);
  auVar28._0_8_ = auVar91._0_8_;
  auVar28._12_4_ = (int)((ulonglong)auVar91._8_8_ >> 0x20);
  auVar59._0_8_ = auVar36._0_8_ * dVar5 - auVar91._0_8_ * auVar47._0_8_;
  auVar59._8_8_ = auVar36._8_8_ * dVar67 - auVar28._8_8_ * auVar47._8_8_;
  auVar36 = *(undefined1 (*) [16])(this->WorldTransform).Scale3D.ZW.m128d_f64;
  auVar49._0_8_ =
       (double)CONCAT44(auVar39._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar39._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar49._8_4_ = auVar39._8_4_ & _UNK_15061cc88;
  auVar49._12_4_ = auVar39._12_4_ & _UNK_15061cc8c;
  lVar17 = -(ulonglong)(auVar49._8_8_ <= local_208._s_0.Y);
  auVar50._0_8_ =
       (double)CONCAT44(~(uint)(-(ulonglong)(auVar49._0_8_ <= local_208._s_0.X) >> 0x20) &
                        auVar69._4_4_,
                        ~(uint)-(ulonglong)(auVar49._0_8_ <= local_208._s_0.X) & auVar69._0_4_);
  auVar50._8_4_ = ~(uint)lVar17 & auVar69._8_4_;
  auVar50._12_4_ = ~(uint)((ulonglong)lVar17 >> 0x20) & auVar69._12_4_;
  lVar17 = -(ulonglong)
            ((double)CONCAT44(auVar36._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar36._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar47._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar47._0_8_ = auVar36._0_8_;
  auVar47._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar47);
  auVar29._8_4_ = SUB84(auVar78._8_8_,0);
  auVar29._0_8_ = auVar78._0_8_;
  auVar29._12_4_ = (int)((ulonglong)auVar78._8_8_ >> 0x20);
  auVar39 = blendpd(auVar78,auVar59,2);
  local_258._s_0.X = auVar50._0_8_ * (dVar75 * auVar86._8_8_ + dVar93 + auVar29._8_8_);
  local_258._s_0.Y = auVar50._8_8_ * (dVar82 * dVar67 + dVar96 + auVar59._0_8_);
  local_278._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar17 >> 0x20) & auVar36._4_4_,
                        ~(uint)lVar17 & auVar36._0_4_) *
       (auVar91._0_8_ * auVar86._8_8_ + dVar19 + auVar39._0_8_);
  local_258._s_0.Z = local_278._s_0.Z;
  local_228._s_0.X = local_240._s_0.X;
  local_228._s_0.Y = local_240._s_0.Y;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_240._s_0,__real_3e45798ee0000000);
  auVar41._0_8_ = local_240._s_0.Z * local_240._s_0.Z;
  auVar41._8_8_ = 0;
  auVar45._0_8_ =
       local_240._s_0.X * local_240._s_0.X + local_240._s_0.Y * local_240._s_0.Y + auVar41._0_8_;
  auVar45._8_8_ = 0;
  auVar39 = sqrtpd(auVar41,auVar45);
  if (auVar39._0_8_ <= 0.0) {
    local_240._s_0.X = 0.0;
    local_240._s_0.Y = 0.0;
    local_240._s_0.Z = 0.0;
  }
  else {
    dVar20 = __real_3ff0000000000000 / auVar39._0_8_;
    local_240._s_0.X = local_240._s_0.X * dVar20;
    local_240._s_0.Y = local_240._s_0.Y * dVar20;
    local_240._s_0.Z = local_240._s_0.Z * dVar20;
  }
  pFVar14 = &this->HilightSelection;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset(&pFVar14->SelectedGroupIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (&(this->HilightSelection).SelectedCornerIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (&(this->HilightSelection).SelectedEdgeIDs);
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
            ((FGroupTopologySelection *)local_1c8);
  pUVar3 = (this->TransformProps).field0_0x0.DebugPtr;
  local_288.bHitBackFaces = true;
  local_288.bPreferProjectedElement = false;
  local_288.bSelectDownRay = false;
  local_288.bIgnoreOcclusion = false;
  pFVar11 = (FMeshVertexChangeBuilder *)0x0;
  local_288.bEnableFaceHits = pUVar3->bSelectFaces;
  local_288.bEnableEdgeHits = pUVar3->bSelectEdges;
  local_288.bEnableCornerHits = pUVar3->bSelectVertices;
  bVar9 = FMeshTopologySelector::FindSelectedElement
                    ((FMeshTopologySelector *)&this->TopoSelector,&local_288,
                     (TRay<double> *)&local_258._s_0,(FGroupTopologySelection *)local_1c8,
                     (TVector<double> *)&local_208._s_0,(TVector<double> *)&local_228._s_0,
                     (int *)0x0);
  if (!bVar9) {
    this->bInDrag = false;
    goto LAB_14cc6613f;
  }
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&pFVar14->SelectedGroupIDs,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_1c8);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->HilightSelection).SelectedCornerIDs,
             (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(local_1c8 + 0x50));
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
            (&(this->HilightSelection).SelectedEdgeIDs,&local_128.SelectedGroupIDs);
  auVar39 = *(undefined1 (*) [16])(this->WorldTransform).Rotation.ZW.m128d_f64;
  dVar55 = auVar39._0_8_;
  auVar87._0_8_ = local_208._s_0.Z * (this->WorldTransform).Scale3D.ZW.m128d_f64[0];
  auVar87._8_8_ = (this->WorldTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar67 = (this->WorldTransform).Rotation.ZW.m128d_f64[1];
  auVar92._0_8_ = local_228._s_0.Z * (this->WorldTransform).Scale3D.ZW.m128d_f64[0];
  auVar92._8_8_ = (this->WorldTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar19 = (this->WorldTransform).Scale3D.XY.m128d_f64[0] * local_208._s_0.X;
  dVar75 = (this->WorldTransform).Scale3D.XY.m128d_f64[1] * local_208._s_0.Y;
  auVar36 = *(undefined1 (*) [16])(this_00->Rotation).XY.m128d_f64;
  auVar72._8_4_ = SUB84(dVar75,0);
  auVar72._0_8_ = dVar19;
  uVar65 = (undefined4)((ulonglong)dVar75 >> 0x20);
  auVar72._12_4_ = uVar65;
  dVar64 = auVar39._8_8_;
  auVar47 = blendpd(auVar36,auVar39,2);
  auVar73._0_8_ = auVar72._8_8_ * auVar36._0_8_ - auVar36._8_8_ * dVar19;
  auVar73._8_8_ = auVar87._0_8_ * auVar36._8_8_ - dVar55 * dVar75;
  auVar30._8_4_ = SUB84(dVar75,0);
  auVar30._0_8_ = dVar19;
  auVar30._12_4_ = uVar65;
  auVar36 = blendpd(auVar30,auVar87,2);
  auVar31._0_8_ = auVar36._0_8_ * dVar55 - auVar47._0_8_ * auVar87._0_8_;
  auVar31._8_8_ = auVar36._8_8_ * dVar64 - auVar47._8_8_ * auVar87._8_8_;
  auVar36 = *(undefined1 (*) [16])(this_00->Rotation).XY.m128d_f64;
  auVar47 = blendpd(auVar73,auVar31,2);
  auVar74._0_8_ = auVar47._0_8_ + auVar47._0_8_;
  auVar74._8_8_ = auVar47._8_8_ + auVar47._8_8_;
  dVar20 = auVar73._8_8_ + auVar73._8_8_;
  dVar5 = auVar31._0_8_ + auVar31._0_8_;
  uVar65 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar60._8_4_ = SUB84(dVar5,0);
  auVar60._0_8_ = dVar20;
  auVar60._12_4_ = uVar65;
  auVar51._8_4_ = SUB84(dVar5,0);
  auVar51._0_8_ = dVar20;
  auVar51._12_4_ = uVar65;
  auVar47 = blendpd(auVar51,auVar74,2);
  auVar61._0_8_ = auVar60._8_8_ * auVar36._0_8_ - auVar36._8_8_ * dVar20;
  auVar61._8_8_ = auVar74._0_8_ * auVar36._8_8_ - dVar55 * dVar5;
  auVar36 = blendpd(auVar36,auVar39,2);
  auVar32._8_4_ = SUB84(auVar61._8_8_,0);
  auVar32._0_8_ = auVar61._0_8_;
  auVar32._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
  auVar52._0_8_ = auVar47._0_8_ * dVar55 - auVar36._0_8_ * auVar74._0_8_;
  auVar52._8_8_ = auVar47._8_8_ * dVar64 - auVar36._8_8_ * auVar74._8_8_;
  dVar19 = dVar20 * dVar67 + dVar19 + auVar32._8_8_ +
           (this->WorldTransform).Translation.XY.m128d_f64[0];
  dVar20 = dVar5 * dVar67 + dVar75 + auVar52._0_8_ +
           (this->WorldTransform).Translation.XY.m128d_f64[1];
  uVar66 = SUB84(dVar20,0);
  uVar97 = (undefined4)((ulonglong)dVar20 >> 0x20);
  dVar75 = (this->WorldTransform).Scale3D.XY.m128d_f64[0] * local_228._s_0.X;
  dVar82 = (this->WorldTransform).Scale3D.XY.m128d_f64[1] * local_228._s_0.Y;
  local_1e8._0_16_ = *(undefined1 (*) [16])(this_00->Rotation).XY.m128d_f64;
  auVar79._8_4_ = SUB84(dVar82,0);
  auVar79._0_8_ = dVar75;
  uVar65 = (undefined4)((ulonglong)dVar82 >> 0x20);
  auVar79._12_4_ = uVar65;
  auVar36 = blendpd(auVar61,auVar52,2);
  auVar80._0_8_ = auVar79._8_8_ * local_1e8._0_8_ - local_1e8._8_8_ * dVar75;
  auVar80._8_8_ = auVar92._0_8_ * local_1e8._8_8_ - dVar55 * dVar82;
  dVar67 = auVar74._0_8_ * dVar67 + auVar87._0_8_ + auVar36._0_8_ +
           (this->WorldTransform).Translation.ZW.m128d_f64[0];
  auVar33._8_4_ = SUB84(dVar82,0);
  auVar33._0_8_ = dVar75;
  auVar33._12_4_ = uVar65;
  auVar36 = blendpd(auVar33,auVar92,2);
  auVar47 = blendpd(local_1e8._0_16_,auVar39,2);
  auVar34._0_8_ = auVar36._0_8_ * dVar55 - auVar47._0_8_ * auVar92._0_8_;
  auVar34._8_8_ = auVar36._8_8_ * dVar64 - auVar47._8_8_ * auVar92._8_8_;
  auVar36 = *(undefined1 (*) [16])(this_00->Rotation).XY.m128d_f64;
  auVar47 = blendpd(auVar80,auVar34,2);
  dVar20 = auVar80._8_8_ + auVar80._8_8_;
  dVar5 = auVar34._0_8_ + auVar34._0_8_;
  uVar65 = (undefined4)((ulonglong)dVar5 >> 0x20);
  this->bInDrag = true;
  auVar81._0_8_ = auVar47._0_8_ + auVar47._0_8_;
  auVar81._8_8_ = auVar47._8_8_ + auVar47._8_8_;
  auVar62._8_4_ = SUB84(dVar5,0);
  auVar62._0_8_ = dVar20;
  auVar62._12_4_ = uVar65;
  auVar53._8_4_ = SUB84(dVar5,0);
  auVar53._0_8_ = dVar20;
  auVar53._12_4_ = uVar65;
  auVar47 = blendpd(auVar53,auVar81,2);
  auVar63._0_8_ = auVar62._8_8_ * auVar36._0_8_ - auVar36._8_8_ * dVar20;
  auVar63._8_8_ = auVar81._0_8_ * auVar36._8_8_ - dVar55 * dVar5;
  auVar39 = blendpd(auVar36,auVar39,2);
  auVar35._8_4_ = SUB84(auVar63._8_8_,0);
  auVar35._0_8_ = auVar63._0_8_;
  auVar35._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
  auVar54._0_8_ = auVar47._0_8_ * dVar55 - auVar39._0_8_ * auVar81._0_8_;
  auVar54._8_8_ = auVar47._8_8_ * dVar64 - auVar39._8_8_ * auVar81._8_8_;
  auVar39 = blendpd(auVar63,auVar54,2);
  dVar5 = dVar5 * dVar64 + dVar82 + auVar54._0_8_;
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = dVar20 * dVar64 + dVar75 + auVar35._8_8_;
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&(this->StartHitNormalWorld).field0_0x0 = auVar4;
  auVar6._8_4_ = uVar66;
  auVar6._0_8_ = dVar19;
  auVar6._12_4_ = uVar97;
  *(undefined1 (*) [16])&(this->StartHitPosWorld).field0_0x0 = auVar6;
  auVar7._8_4_ = uVar66;
  auVar7._0_8_ = dVar19;
  auVar7._12_4_ = uVar97;
  *(undefined1 (*) [16])&(this->LastHitPosWorld).field0_0x0 = auVar7;
  (this->StartHitNormalWorld).field0_0x0._s_0.Z =
       auVar81._0_8_ * dVar64 + auVar92._0_8_ + auVar39._0_8_;
  (this->StartHitPosWorld).field0_0x0._s_0.Z = dVar67;
  (this->LastHitPosWorld).field0_0x0._s_0.Z = dVar67;
  UE::Geometry::FQuickAxisRotator::ClearAxisLock(&this->QuickAxisRotator);
  UpdateActiveSurfaceFrame(this,pFVar14);
  UpdateQuickTransformer(this);
  local_278._s_0.X = (double)*(undefined8 *)&(this->LastHitPosWorld).field0_0x0;
  local_278._s_0.Y = (this->LastHitPosWorld).field0_0x0._s_0.Y;
  local_278._s_0.Z = (this->LastHitPosWorld).field0_0x0._s_0.Z;
  pTVar10 = UE::Math::TTransform<double>::InverseTransformPosition
                      (this_00,(TVector<double> *)&local_1e8._s_0,(TVector<double> *)&local_278._s_0
                      );
  dVar20 = (pTVar10->field0_0x0)._s_0.Y;
  (this->LastBrushPosLocal).field0_0x0._s_0.X = (pTVar10->field0_0x0)._s_0.X;
  (this->LastBrushPosLocal).field0_0x0._s_0.Y = dVar20;
  dVar20 = (pTVar10->field0_0x0)._s_0.Z;
  pUVar3 = (this->TransformProps).field0_0x0.DebugPtr;
  (this->LastBrushPosLocal).field0_0x0._s_0.Z = dVar20;
  dVar5 = (this->LastBrushPosLocal).field0_0x0._s_0.Y;
  (this->StartBrushPosLocal).field0_0x0._s_0.X = (this->LastBrushPosLocal).field0_0x0._s_0.X;
  (this->StartBrushPosLocal).field0_0x0._s_0.Y = dVar5;
  (this->StartBrushPosLocal).field0_0x0._s_0.Z = dVar20;
  EVar1 = pUVar3->DeformationStrategy;
  this->DeformationStrategy = EVar1;
  if (EVar1 == Laplacian) {
    ((this->LaplacianDeformer).Ptr)->bLocalize = true;
    if (local_170 - local_144 < 1) {
      if (0 < (int)(local_128.SelectedGroupIDs.Elements._8_4_ -
                   local_128.SelectedGroupIDs.Elements._52_4_)) {
        pFVar16 = (this->LaplacianDeformer).Ptr;
        pcVar15 = *(code **)(pFVar16->_padding_ + 0x18);
        pFVar14 = &local_128;
        goto LAB_14cc65f72;
      }
      if (0 < (int)(local_1c8._8_4_ - local_1c8._52_4_)) {
        pFVar16 = (this->LaplacianDeformer).Ptr;
        pcVar15 = *(code **)(pFVar16->_padding_ + 8);
        pFVar14 = (FGroupTopologySelection *)local_1c8;
        goto LAB_14cc65f72;
      }
    }
    else {
      pFVar16 = (this->LaplacianDeformer).Ptr;
      pcVar15 = *(code **)(pFVar16->_padding_ + 0x10);
      pFVar14 = (FGroupTopologySelection *)(local_1c8 + 0x50);
LAB_14cc65f72:
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
                (&pFVar14->SelectedGroupIDs,
                 (TArray<int,TSizedDefaultAllocator<32>_> *)&local_278._s_0);
      (*pcVar15)(pFVar16);
      if ((void *)local_278._s_0.X != (void *)0x0) {
        FMemory::Free((void *)local_278._s_0.X);
      }
    }
    pFVar16 = (this->LaplacianDeformer).Ptr;
    bVar9 = false;
    iVar2 = (int)pFVar16->_padding_;
    lVar17 = pFVar16->_padding_;
    lVar18 = (longlong)iVar2 * 0x20 + lVar17;
    while( true ) {
      if ((int)pFVar16->_padding_ != iVar2) {
        `TCheckedPointerIterator<UE::Geometry::FGroupTopologyDeformer::FROIFace_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_280);
      }
      if (lVar17 == lVar18) break;
      if ((bVar9) || (*(int *)(lVar17 + 0x18) != 0)) {
        bVar9 = true;
        lVar17 = lVar17 + 0x20;
      }
      else {
        lVar17 = lVar17 + 0x20;
      }
    }
    if (bVar9) {
      ((this->LaplacianDeformer).Ptr)->bTaskSubmeshIsDirty = true;
    }
    else {
      this->DeformationStrategy = Linear;
    }
  }
  if (this->DeformationStrategy == Linear) {
    if (local_170 - local_144 < 1) {
      if ((int)(local_128.SelectedGroupIDs.Elements._8_4_ -
               local_128.SelectedGroupIDs.Elements._52_4_) < 1) {
        if ((int)(local_1c8._8_4_ - local_1c8._52_4_) < 1) goto LAB_14cc66098;
        pcVar15 = *(code **)((this->LinearDeformer)._padding_ + 8);
        pFVar14 = (FGroupTopologySelection *)local_1c8;
      }
      else {
        pcVar15 = *(code **)((this->LinearDeformer)._padding_ + 0x18);
        pFVar14 = &local_128;
      }
    }
    else {
      pcVar15 = *(code **)((this->LinearDeformer)._padding_ + 0x10);
      pFVar14 = (FGroupTopologySelection *)(local_1c8 + 0x50);
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array
              (&pFVar14->SelectedGroupIDs,(TArray<int,TSizedDefaultAllocator<32>_> *)&local_278._s_0
              );
    (*pcVar15)(&this->LinearDeformer);
    if ((void *)local_278._s_0.X != (void *)0x0) {
      FMemory::Free((void *)local_278._s_0.X);
    }
  }
LAB_14cc66098:
  if ((this->DeformationStrategy == Laplacian) &&
     (this_01 = ((this->LaplacianDeformer).Ptr)->AsyncMeshDeformTask,
     this_01 != (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0)) {
    if (((FThreadSafeCounter *)&this_01->_padding_)->Counter != 0) goto LAB_14cc6613f;
    FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_01,false);
  }
  if (this->ActiveVertexChange == (FMeshVertexChangeBuilder *)0x0) {
    this_02 = ::operator_new(0x140);
    if (this_02 != (FMeshVertexChangeBuilder *)0x0) {
      pFVar11 = FMeshVertexChangeBuilder::FMeshVertexChangeBuilder
                          (this_02,OverlayNormals|VertexPositions);
    }
    this->ActiveVertexChange = pFVar11;
    UpdateChangeFromROI(this,false);
    pUVar12 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pFVar13 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)&local_278._s_0,L"UDeformMeshPolygonsTool",
                         L"PolyMeshDeformationChange",L"PolyMesh Edit");
    UE::TransactionUtil::FLongTransactionTracker::Open(&this->LongTransactions,pFVar13,pUVar12);
  }
LAB_14cc6613f:
  local_128.SelectedGroupIDs.HashSize = 0;
  if (local_128.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_128.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_128);
  local_130 = 0;
  if (local_138 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_138);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_1c8 + 0x50));
  local_1c8._72_4_ = 0;
  if ((ForElementType<FSetElementId>)local_1c8._64_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1c8._64_8_);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1c8);
  return;
}

// OnCancelDrag @ 14cc669d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDeformMeshPolygonsTool::OnCancelDrag(UDeformMeshPolygonsTool *this)

{
  UInteractiveToolManager *pUVar1;
  
  this->bInDrag = false;
  this->bUpdatePending = false;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (&(this->HilightSelection).SelectedGroupIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (&(this->HilightSelection).SelectedCornerIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (&(this->HilightSelection).SelectedEdgeIDs);
  FMeshTopologySelector::Invalidate((FMeshTopologySelector *)&this->TopoSelector,true,false);
  (**(code **)((this->QuickAxisRotator)._padding_ + 0x28))();
  (**(code **)((this->QuickAxisTranslater)._padding_ + 0x28))();
  if (this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) {
    pUVar1 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
    UE::TransactionUtil::FLongTransactionTracker::Close(&this->LongTransactions,pUVar1);
    if (this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) {
      FMeshVertexChangeBuilder::_scalar_deleting_destructor_(this->ActiveVertexChange,1);
    }
    this->ActiveVertexChange = (FMeshVertexChangeBuilder *)0x0;
  }
  return;
}

// OnDynamicMeshComponentChanged @ 14cc66b70

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
UDeformMeshPolygonsTool::OnDynamicMeshComponentChanged(UDeformMeshPolygonsTool *this)

{
  undefined4 *puVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  FGroupTopologyLaplacianDeformer *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *this_00;
  code *pcVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  bool bVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  
  this->bSpatialDirty = true;
  FMeshTopologySelector::Invalidate((FMeshTopologySelector *)&this->TopoSelector,true,false);
  lVar15 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  uVar18 = 0;
  uVar19 = *(int *)(lVar15 + 0x24) + *(int *)(lVar15 + 0x20) * 0x200;
  if ((uVar19 != 0) &&
     (puVar4 = *(undefined8 **)(lVar15 + 0x28), 0xfffd < (ushort)(*(short *)*puVar4 - 1U))) {
    uVar18 = 1;
    uVar16 = 1;
    if ((int)uVar19 < 2) goto joined_r0x00014cc66c27;
    do {
      lVar6 = (ulonglong)((uint)uVar18 & 0x1ff) * 2;
      if ((*(short *)(lVar6 + puVar4[uVar18 >> 9]) != 0) &&
         (*(short *)(lVar6 + puVar4[uVar18 >> 9]) != -1)) break;
      uVar16 = (uint)uVar18 + 1;
      uVar18 = (ulonglong)uVar16;
    } while ((int)uVar16 < (int)uVar19);
  }
  uVar16 = (uint)uVar18;
joined_r0x00014cc66c27:
  do {
    if (uVar16 == uVar19) {
      this_00 = ((this->LaplacianDeformer).Ptr)->AsyncMeshDeformTask;
      if (this_00 != (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0) {
        UE::Geometry::FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask>::CancelAndDelete
                  (this_00);
        ((this->LaplacianDeformer).Ptr)->AsyncMeshDeformTask =
             (FAsyncTaskExecuterWithAbort<FConstrainedMeshDeformerTask> *)0x0;
        ((this->LaplacianDeformer).Ptr)->bTaskSubmeshIsDirty = true;
      }
      return;
    }
    while( true ) {
      pFVar5 = (this->LaplacianDeformer).Ptr;
      uVar17 = (uint)uVar18;
      lVar6 = *(longlong *)(*(longlong *)(lVar15 + 0x10) + (uVar18 >> 9) * 8);
      puVar1 = (undefined4 *)(lVar6 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
      uVar10 = *puVar1;
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];
      uVar3 = *(undefined8 *)(lVar6 + 0x10 + (ulonglong)(uVar17 & 0x1ff) * 0x18);
      uVar16 = 0;
      if ((int)uVar17 < (pFVar5->SrcMeshConstraintBuffer).ArrayNum) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar7 = (pFVar5->SrcMeshConstraintBuffer).AllocatorInstance.Data;
      uVar16 = uVar17 + 1;
      uVar18 = (ulonglong)uVar16;
      pFVar2 = pFVar7 + (longlong)(int)uVar17 * 0x28;
      *(undefined4 *)pFVar2 = uVar10;
      *(undefined4 *)(pFVar2 + 4) = uVar11;
      *(undefined4 *)(pFVar2 + 8) = uVar12;
      *(undefined4 *)(pFVar2 + 0xc) = uVar13;
      *(undefined8 *)(pFVar7 + (longlong)(int)uVar17 * 0x28 + 0x10) = uVar3;
      if ((int)uVar19 <= (int)uVar16) break;
      while( true ) {
        lVar9 = (ulonglong)((uint)uVar18 & 0x1ff) * 2;
        lVar6 = *(longlong *)(*(longlong *)(lVar15 + 0x28) + (uVar18 >> 9) * 8);
        if ((*(short *)(lVar9 + lVar6) != 0) && (*(short *)(lVar9 + lVar6) != -1)) break;
        uVar16 = (uint)uVar18 + 1;
        uVar18 = (ulonglong)uVar16;
        if ((int)uVar19 <= (int)uVar16) goto joined_r0x00014cc66c27;
      }
    }
  } while( true );
}

// OnEndDrag @ 14cc66db0

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
UDeformMeshPolygonsTool::OnEndDrag(UDeformMeshPolygonsTool *this,TRay<double> *param_1)

{
  this->bInDrag = false;
  this->bUpdatePending = false;
  this->bSpatialDirty = true;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (&(this->HilightSelection).SelectedGroupIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (&(this->HilightSelection).SelectedCornerIDs);
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
            (&(this->HilightSelection).SelectedEdgeIDs);
  FMeshTopologySelector::Invalidate((FMeshTopologySelector *)&this->TopoSelector,true,false);
  (**(code **)((this->QuickAxisRotator)._padding_ + 0x28))();
  (**(code **)((this->QuickAxisTranslater)._padding_ + 0x28))();
  if (this->DeformationStrategy == Linear) {
    EndChange(this);
  }
  return;
}

// OnPropertyModified @ 14cc680b0

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
UDeformMeshPolygonsTool::OnPropertyModified
          (UDeformMeshPolygonsTool *this,UObject *param_1,FProperty *param_2)

{
  return;
}

// OnTick @ 14cc699a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDeformMeshPolygonsTool::OnTick(UDeformMeshPolygonsTool *this,float param_1)

{
  ((this->LaplacianDeformer).Ptr)->HandleWeights =
       ((this->TransformProps).field0_0x0.DebugPtr)->HandleWeight;
  ((this->LaplacianDeformer).Ptr)->bPostfixHandles =
       ((this->TransformProps).field0_0x0.DebugPtr)->bPostFixHandles;
  return;
}

// OnUpdateDrag @ 14cc6ba70

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
UDeformMeshPolygonsTool::OnUpdateDrag(UDeformMeshPolygonsTool *this,TRay<double> *param_1)

{
  double dVar1;
  
  if (this->bInDrag != false) {
    this->bUpdatePending = true;
    dVar1 = (param_1->Origin).field0_0x0._s_0.Y;
    (this->UpdateRay).Origin.field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
    (this->UpdateRay).Origin.field0_0x0._s_0.Y = dVar1;
    dVar1 = (param_1->Direction).field0_0x0._s_0.X;
    (this->UpdateRay).Origin.field0_0x0._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
    (this->UpdateRay).Direction.field0_0x0._s_0.X = dVar1;
    dVar1 = (param_1->Direction).field0_0x0._s_0.Z;
    (this->UpdateRay).Direction.field0_0x0._s_0.Y = (param_1->Direction).field0_0x0._s_0.Y;
    (this->UpdateRay).Direction.field0_0x0._s_0.Z = dVar1;
  }
  return;
}

// OnUpdateHover @ 14cc6baf0

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
UDeformMeshPolygonsTool::OnUpdateHover(UDeformMeshPolygonsTool *this,FInputDeviceRay *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
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
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  double dVar56;
  undefined4 uVar57;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  undefined4 uVar68;
  double dVar69;
  undefined1 auVar70 [16];
  double dVar79;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  double dVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  double dVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  FSelectionSettings local_148;
  TVector<double>_u_0 local_140;
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_e8;
  double local_c8;
  double dStack_c0;
  
  if ((this->HilightRenderer).TotalTransform.Scale3D.XY.m128d_f64[1] == 0.0) {
    dVar47 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar56 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar58._0_8_ =
         (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    auVar58._8_8_ =
         (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar35._8_4_ = SUB84(dVar56,0);
    auVar35._0_8_ = dVar47;
    uVar57 = (undefined4)((ulonglong)dVar56 >> 0x20);
    auVar35._12_4_ = uVar57;
    auVar38._8_4_ = SUB84(dVar56,0);
    auVar38._0_8_ = dVar47;
    auVar38._12_4_ = uVar57;
    auVar83._8_4_ = SUB84(auVar58._8_8_,0);
    auVar83._0_8_ = auVar58._0_8_;
    auVar83._12_4_ = (int)((ulonglong)auVar58._8_8_ >> 0x20);
    auVar39 = blendpd(auVar38,auVar58,2);
    auVar19 = *(undefined1 (*) [16])&(param_1->WorldRay).Direction.field0_0x0;
    dVar15 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
    auVar91._8_8_ = 0;
    auVar91._0_8_ = dVar15;
    auVar30 = blendpd(auVar19,auVar91,2);
    dVar14 = auVar19._8_8_;
    auVar90._0_8_ = dVar14 * dVar47 - auVar19._0_8_ * auVar35._8_8_;
    auVar90._8_8_ = dVar15 * dVar56 - dVar14 * auVar58._0_8_;
    auVar70._8_4_ = SUB84(auVar90._8_8_,0);
    auVar70._0_8_ = auVar90._0_8_;
    auVar70._12_4_ = (int)((ulonglong)auVar90._8_8_ >> 0x20);
    auVar31._0_8_ = auVar30._0_8_ * auVar58._0_8_ - dVar15 * auVar39._0_8_;
    auVar31._8_8_ = auVar30._8_8_ * auVar58._8_8_ - auVar39._8_8_ * 0.0;
    dVar69 = auVar70._8_8_ + auVar70._8_8_;
    dVar79 = auVar31._0_8_ + auVar31._0_8_;
    auVar91 = blendpd(auVar90,auVar31,2);
    uVar57 = SUB84(dVar79,0);
    auVar80._8_4_ = uVar57;
    auVar80._0_8_ = dVar69;
    uVar68 = (undefined4)((ulonglong)dVar79 >> 0x20);
    auVar80._12_4_ = uVar68;
    auVar16._8_4_ = uVar57;
    auVar16._0_8_ = dVar69;
    auVar16._12_4_ = uVar68;
    auVar64._8_4_ = uVar57;
    auVar64._0_8_ = dVar69;
    auVar64._12_4_ = uVar68;
    auVar30._0_8_ = this->_padding_;
    auVar30._8_4_ = this->VisualAngleSnapThreshold;
    auVar30._12_4_ = *(undefined4 *)&this->field_0x134;
    auVar92._0_8_ = auVar91._0_8_ + auVar91._0_8_;
    auVar92._8_8_ = auVar91._8_8_ + auVar91._8_8_;
    auVar9._4_8_ = dVar56;
    auVar9._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
    auVar48._0_8_ = auVar9._0_8_ << 0x20;
    auVar48._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar48._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar81._0_8_ = auVar80._8_8_ * dVar47 - dVar69 * auVar35._8_8_;
    auVar81._8_8_ = auVar92._0_8_ * dVar56 - auVar16._8_8_ * auVar58._0_8_;
    auVar91 = blendpd(auVar64,auVar92,2);
    local_c8 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
    dStack_c0 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
    auVar17._8_4_ = SUB84(auVar92._8_8_,0);
    auVar17._0_8_ = auVar92._0_8_;
    auVar17._12_4_ = (int)((ulonglong)auVar92._8_8_ >> 0x20);
    auVar65._0_8_ = auVar91._0_8_ * auVar58._0_8_ - auVar92._0_8_ * auVar39._0_8_;
    auVar65._8_8_ = auVar91._8_8_ * auVar58._8_8_ - auVar17._8_8_ * auVar39._8_8_;
    uVar1 = this->PreviewMeshActor;
    auVar49._8_8_ = auVar48._8_8_;
    auVar49._0_8_ = uVar1;
    auVar94._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          (uint)((ulonglong)auVar30._0_8_ >> 0x20),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)auVar30._0_8_);
    auVar94._8_4_ = _UNK_15061cc88 & auVar30._8_4_;
    auVar94._12_4_ = _UNK_15061cc8c & auVar30._12_4_;
    auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar30);
    lVar12 = -(ulonglong)(auVar94._8_8_ <= dStack_c0);
    auVar95._0_8_ =
         (double)CONCAT44(~(uint)(-(ulonglong)(auVar94._0_8_ <= local_c8) >> 0x20) & auVar30._4_4_,
                          ~(uint)-(ulonglong)(auVar94._0_8_ <= local_c8) & auVar30._0_4_);
    auVar95._8_4_ = ~(uint)lVar12 & auVar30._8_4_;
    auVar95._12_4_ = ~(uint)((ulonglong)lVar12 >> 0x20) & auVar30._12_4_;
    local_108._s_0.X = 0.0;
    local_108._s_0.Y = 0.0;
    auVar18._8_4_ = SUB84(auVar81._8_8_,0);
    auVar18._0_8_ = auVar81._0_8_;
    auVar18._12_4_ = (int)((ulonglong)auVar81._8_8_ >> 0x20);
    lVar12 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                                (uint)((ulonglong)uVar1 >> 0x20),
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)uVar1) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    local_128._s_0.X = auVar95._0_8_ * (dVar69 * auVar83._8_8_ + auVar19._0_8_ + auVar18._8_8_);
    local_128._s_0.Y = auVar95._8_8_ * (dVar79 * auVar58._8_8_ + dVar14 + auVar65._0_8_);
    auVar59._0_8_ =
         (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    auVar59._8_8_ =
         (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar39 = blendpd(auVar81,auVar65,2);
    auVar19 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar49);
    dVar56 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar69 = (double)this->_padding_ * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar14 = (param_1->WorldRay).Origin.field0_0x0._s_0.Z - (double)this->_padding_;
    auVar40._8_4_ = SUB84(dVar69,0);
    auVar40._0_8_ = dVar56;
    uVar57 = (undefined4)((ulonglong)dVar69 >> 0x20);
    auVar40._12_4_ = uVar57;
    auVar30 = blendpd(auVar40,auVar59,2);
    dVar89 = (param_1->WorldRay).Origin.field0_0x0._s_0.X - (double)this->_padding_;
    dVar93 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y - (double)this->_padding_;
    local_128._s_0.Z =
         (dVar15 + auVar92._0_8_ * auVar83._8_8_ + auVar39._0_8_) *
         (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar19._4_4_,
                          ~(uint)lVar12 & auVar19._0_4_);
    auVar36._8_4_ = SUB84(dVar69,0);
    auVar36._0_8_ = dVar56;
    auVar36._12_4_ = uVar57;
    auVar84._8_4_ = SUB84(dVar93,0);
    auVar84._0_8_ = dVar89;
    uVar57 = (undefined4)((ulonglong)dVar93 >> 0x20);
    auVar84._12_4_ = uVar57;
    dVar15 = auVar36._8_8_;
    auVar32._8_4_ = SUB84(dVar93,0);
    auVar32._0_8_ = dVar89;
    auVar32._12_4_ = uVar57;
    auVar20._8_4_ = SUB84(auVar59._0_8_,0);
    auVar20._0_8_ = dVar15;
    auVar20._12_4_ = (int)((ulonglong)auVar59._0_8_ >> 0x20);
    auVar39._8_8_ = 0;
    auVar39._0_8_ = dVar14;
    auVar19 = blendpd(auVar32,auVar39,2);
    auVar85._0_8_ = auVar84._8_8_ * dVar56 - dVar15 * dVar89;
    auVar85._8_8_ = dVar14 * dVar69 - auVar20._8_8_ * dVar93;
    auVar66._8_4_ = SUB84(auVar85._8_8_,0);
    auVar66._0_8_ = auVar85._0_8_;
    auVar66._12_4_ = (int)((ulonglong)auVar85._8_8_ >> 0x20);
    dVar47 = auVar30._8_8_;
    auVar82._8_4_ = SUB84(auVar59._8_8_,0);
    auVar82._0_8_ = auVar59._0_8_;
    auVar82._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
    auVar33._0_8_ = auVar19._0_8_ * auVar59._0_8_ - dVar14 * auVar30._0_8_;
    auVar33._8_8_ = auVar19._8_8_ * auVar59._8_8_ - dVar47 * 0.0;
    dVar79 = auVar66._8_8_ + auVar66._8_8_;
    dVar67 = auVar33._0_8_ + auVar33._0_8_;
    auVar39 = blendpd(auVar85,auVar33,2);
    auVar19._0_8_ = this->_padding_;
    auVar19._8_4_ = this->VisualAngleSnapThreshold;
    auVar19._12_4_ = *(undefined4 *)&this->field_0x134;
    uVar57 = SUB84(dVar67,0);
    auVar71._8_4_ = uVar57;
    auVar71._0_8_ = dVar79;
    uVar68 = (undefined4)((ulonglong)dVar67 >> 0x20);
    auVar71._12_4_ = uVar68;
    auVar21._8_4_ = uVar57;
    auVar21._0_8_ = dVar79;
    auVar21._12_4_ = uVar68;
    auVar86._0_8_ = auVar39._0_8_ + auVar39._0_8_;
    auVar86._8_8_ = auVar39._8_8_ + auVar39._8_8_;
    auVar91 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar19);
    auVar50._8_4_ = uVar57;
    auVar50._0_8_ = dVar79;
    auVar50._12_4_ = uVar68;
    auVar72._0_8_ = auVar71._8_8_ * dVar56 - dVar79 * dVar15;
    auVar72._8_8_ = auVar86._0_8_ * dVar69 - auVar21._8_8_ * auVar59._0_8_;
    auVar39 = blendpd(auVar50,auVar86,2);
    auVar22._8_4_ = SUB84(auVar86._8_8_,0);
    auVar22._0_8_ = auVar86._0_8_;
    auVar22._12_4_ = (int)((ulonglong)auVar86._8_8_ >> 0x20);
    auVar10._4_8_ = dVar47;
    auVar10._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
    auVar41._0_8_ = auVar10._0_8_ << 0x20;
    auVar41._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar41._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar51._0_8_ = auVar39._0_8_ * auVar59._0_8_ - auVar86._0_8_ * auVar30._0_8_;
    auVar51._8_8_ = auVar39._8_8_ * auVar59._8_8_ - auVar22._8_8_ * dVar47;
    uVar2 = this->PreviewMeshActor;
    auVar42._8_8_ = auVar41._8_8_;
    auVar42._0_8_ = uVar2;
    auVar23._8_4_ = SUB84(auVar72._8_8_,0);
    auVar23._0_8_ = auVar72._0_8_;
    auVar23._12_4_ = (int)((ulonglong)auVar72._8_8_ >> 0x20);
    auVar30 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar42);
    auVar60._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                          (uint)((ulonglong)auVar19._0_8_ >> 0x20),
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff & (uint)auVar19._0_8_);
    auVar60._8_4_ = _UNK_15061cc88 & auVar19._8_4_;
    auVar60._12_4_ = _UNK_15061cc8c & auVar19._12_4_;
    lVar13 = -(ulonglong)(auVar60._8_8_ <= dStack_c0);
    lVar12 = -(ulonglong)
              ((double)CONCAT44((uint)((ulonglong)uVar2 >> 0x20) &
                                __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                (uint)uVar2 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar61._0_8_ =
         (double)CONCAT44(~(uint)(-(ulonglong)(auVar60._0_8_ <= local_c8) >> 0x20) & auVar91._4_4_,
                          ~(uint)-(ulonglong)(auVar60._0_8_ <= local_c8) & auVar91._0_4_);
    auVar61._8_4_ = ~(uint)lVar13 & auVar91._8_4_;
    auVar61._12_4_ = ~(uint)((ulonglong)lVar13 >> 0x20) & auVar91._12_4_;
    local_140._s_0.X = auVar61._0_8_ * (dVar79 * auVar82._8_8_ + dVar89 + auVar23._8_8_);
    local_140._s_0.Y = auVar61._8_8_ * (dVar67 * auVar59._8_8_ + dVar93 + auVar51._0_8_);
    auVar19 = blendpd(auVar72,auVar51,2);
    local_140._s_0.Z =
         (double)CONCAT44(~(uint)((ulonglong)lVar12 >> 0x20) & auVar30._4_4_,
                          ~(uint)lVar12 & auVar30._0_4_) *
         (auVar86._0_8_ * auVar82._8_8_ + dVar14 + auVar19._0_8_);
    local_108._s_0.Z = local_140._s_0.Z;
    local_e8._s_0.X = local_128._s_0.X;
    local_e8._s_0.Y = local_128._s_0.Y;
    UE::Math::TVector<double>::Normalize((TVector<double> *)&local_128._s_0,__real_3e45798ee0000000)
    ;
    auVar34._0_8_ = local_128._s_0.Z * local_128._s_0.Z;
    auVar34._8_8_ = 0;
    auVar37._0_8_ =
         local_128._s_0.X * local_128._s_0.X + local_128._s_0.Y * local_128._s_0.Y + auVar34._0_8_;
    auVar37._8_8_ = 0;
    auVar19 = sqrtpd(auVar34,auVar37);
    if (auVar19._0_8_ <= 0.0) {
      local_128._s_0.X = 0.0;
      local_128._s_0.Y = 0.0;
      local_128._s_0.Z = 0.0;
    }
    else {
      dVar15 = __real_3ff0000000000000 / auVar19._0_8_;
      local_128._s_0.X = local_128._s_0.X * dVar15;
      local_128._s_0.Y = local_128._s_0.Y * dVar15;
      local_128._s_0.Z = local_128._s_0.Z * dVar15;
    }
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               &(this->TopoSelector)._padding_);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               &(this->TopoSelector)._padding_);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Reset
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)
               &(this->TopoSelector)._padding_);
    lVar12 = this->_padding_;
    local_148.bHitBackFaces = true;
    local_148.bPreferProjectedElement = false;
    local_148.bSelectDownRay = false;
    local_148.bIgnoreOcclusion = false;
    local_148.bEnableFaceHits = *(bool *)(lVar12 + 0xb2);
    local_148.bEnableEdgeHits = *(bool *)(lVar12 + 0xb3);
    local_148.bEnableCornerHits = *(bool *)(lVar12 + 0xb4);
    bVar11 = FMeshTopologySelector::FindSelectedElement
                       ((FMeshTopologySelector *)&(this->Topology).GroupIDToGroupIndexMap.ArrayNum,
                        &local_148,(TRay<double> *)&local_140._s_0,
                        (FGroupTopologySelection *)&(this->TopoSelector)._padding_,
                        (TVector<double> *)&local_e8._s_0,(TVector<double> *)&local_108._s_0,
                        (int *)0x0);
    if (bVar11) {
      auVar3._0_8_ = this->_padding_;
      auVar3._8_8_ = this->_padding_;
      auVar87._0_8_ = local_e8._s_0.Z * (double)(this->PreviewMeshActor).field0_0x0;
      auVar87._8_8_ = (double)(this->DynamicMeshComponent).field0_0x0 * 0.0;
      dVar47 = (double)this->_padding_;
      dVar79 = (double)this->_padding_ * local_e8._s_0.X;
      dVar67 = *(double *)&this->VisualAngleSnapThreshold * local_e8._s_0.Y;
      auVar4._0_8_ = this->_padding_;
      auVar4._8_8_ = this->_padding_;
      auVar30 = blendpd(auVar4,auVar3,2);
      auVar73._8_4_ = SUB84(dVar67,0);
      auVar73._0_8_ = dVar79;
      uVar57 = (undefined4)((ulonglong)dVar67 >> 0x20);
      auVar73._12_4_ = uVar57;
      auVar74._0_8_ = auVar73._8_8_ * (double)auVar4._0_8_ - (double)auVar4._8_8_ * dVar79;
      auVar74._8_8_ = auVar87._0_8_ * (double)auVar4._8_8_ - (double)auVar3._0_8_ * dVar67;
      auVar24._8_4_ = SUB84(dVar67,0);
      auVar24._0_8_ = dVar79;
      auVar24._12_4_ = uVar57;
      auVar19 = blendpd(auVar24,auVar87,2);
      auVar62._8_4_ = SUB84(auVar74._8_8_,0);
      auVar62._0_8_ = auVar74._0_8_;
      auVar62._12_4_ = (int)((ulonglong)auVar74._8_8_ >> 0x20);
      auVar25._0_8_ = auVar19._0_8_ * (double)auVar3._0_8_ - auVar30._0_8_ * auVar87._0_8_;
      auVar25._8_8_ = auVar19._8_8_ * (double)auVar3._8_8_ - auVar30._8_8_ * auVar87._8_8_;
      auVar5._0_8_ = this->_padding_;
      auVar5._8_8_ = this->_padding_;
      auVar19 = blendpd(auVar74,auVar25,2);
      auVar75._0_8_ = auVar19._0_8_ + auVar19._0_8_;
      auVar75._8_8_ = auVar19._8_8_ + auVar19._8_8_;
      dVar56 = auVar62._8_8_ + auVar62._8_8_;
      dVar69 = auVar25._0_8_ + auVar25._0_8_;
      auVar52._8_4_ = SUB84(dVar69,0);
      auVar52._0_8_ = dVar56;
      uVar57 = (undefined4)((ulonglong)dVar69 >> 0x20);
      auVar52._12_4_ = uVar57;
      auVar43._8_4_ = SUB84(dVar69,0);
      auVar43._0_8_ = dVar56;
      auVar43._12_4_ = uVar57;
      auVar30 = blendpd(auVar43,auVar75,2);
      auVar53._0_8_ = auVar52._8_8_ * (double)auVar5._0_8_ - (double)auVar5._8_8_ * dVar56;
      auVar53._8_8_ = auVar75._0_8_ * (double)auVar5._8_8_ - (double)auVar3._0_8_ * dVar69;
      auVar19 = blendpd(auVar5,auVar3,2);
      auVar26._8_4_ = SUB84(auVar53._8_8_,0);
      auVar26._0_8_ = auVar53._0_8_;
      auVar26._12_4_ = (int)((ulonglong)auVar53._8_8_ >> 0x20);
      auVar44._0_8_ = auVar30._0_8_ * (double)auVar3._0_8_ - auVar19._0_8_ * auVar75._0_8_;
      auVar44._8_8_ = auVar30._8_8_ * (double)auVar3._8_8_ - auVar19._8_8_ * auVar75._8_8_;
      dVar14 = (double)this->_padding_;
      auVar19 = blendpd(auVar53,auVar44,2);
      dVar15 = (double)this->_padding_;
      (this->PolyEdgesRenderer).CameraState.Orientation.W =
           dVar56 * dVar47 + dVar79 + auVar26._8_8_ + (double)this->_padding_;
      *(double *)&(this->PolyEdgesRenderer).CameraState.HorizontalFOVDegrees =
           dVar69 * dVar47 + dVar67 + auVar44._0_8_ + dVar14;
      *(double *)&(this->PolyEdgesRenderer).CameraState.AspectRatio =
           auVar75._0_8_ * dVar47 + auVar87._0_8_ + auVar19._0_8_ + dVar15;
      auVar88._0_8_ = local_108._s_0.Z * (double)(this->PreviewMeshActor).field0_0x0;
      auVar88._8_8_ = (double)(this->DynamicMeshComponent).field0_0x0 * 0.0;
      auVar6._0_8_ = this->_padding_;
      auVar6._8_8_ = this->_padding_;
      dVar15 = (double)this->_padding_;
      dVar56 = (double)this->_padding_ * local_108._s_0.X;
      dVar69 = *(double *)&this->VisualAngleSnapThreshold * local_108._s_0.Y;
      auVar7._0_8_ = this->_padding_;
      auVar7._8_8_ = this->_padding_;
      auVar76._8_4_ = SUB84(dVar69,0);
      auVar76._0_8_ = dVar56;
      uVar57 = (undefined4)((ulonglong)dVar69 >> 0x20);
      auVar76._12_4_ = uVar57;
      auVar30 = blendpd(auVar7,auVar6,2);
      auVar77._0_8_ = auVar76._8_8_ * (double)auVar7._0_8_ - (double)auVar7._8_8_ * dVar56;
      auVar77._8_8_ = auVar88._0_8_ * (double)auVar7._8_8_ - (double)auVar6._0_8_ * dVar69;
      auVar27._8_4_ = SUB84(dVar69,0);
      auVar27._0_8_ = dVar56;
      auVar27._12_4_ = uVar57;
      auVar63._8_4_ = SUB84(auVar77._8_8_,0);
      auVar63._0_8_ = auVar77._0_8_;
      auVar63._12_4_ = (int)((ulonglong)auVar77._8_8_ >> 0x20);
      auVar19 = blendpd(auVar27,auVar88,2);
      auVar28._0_8_ = auVar19._0_8_ * (double)auVar6._0_8_ - auVar30._0_8_ * auVar88._0_8_;
      auVar28._8_8_ = auVar19._8_8_ * (double)auVar6._8_8_ - auVar30._8_8_ * auVar88._8_8_;
      auVar19 = blendpd(auVar77,auVar28,2);
      dVar14 = auVar63._8_8_ + auVar63._8_8_;
      dVar47 = auVar28._0_8_ + auVar28._0_8_;
      auVar78._0_8_ = auVar19._0_8_ + auVar19._0_8_;
      auVar78._8_8_ = auVar19._8_8_ + auVar19._8_8_;
      auVar8._0_8_ = this->_padding_;
      auVar8._8_8_ = this->_padding_;
      auVar54._8_4_ = SUB84(dVar47,0);
      auVar54._0_8_ = dVar14;
      uVar57 = (undefined4)((ulonglong)dVar47 >> 0x20);
      auVar54._12_4_ = uVar57;
      auVar45._8_4_ = SUB84(dVar47,0);
      auVar45._0_8_ = dVar14;
      auVar45._12_4_ = uVar57;
      auVar30 = blendpd(auVar45,auVar78,2);
      auVar55._0_8_ = auVar54._8_8_ * (double)auVar8._0_8_ - (double)auVar8._8_8_ * dVar14;
      auVar55._8_8_ = auVar78._0_8_ * (double)auVar8._8_8_ - (double)auVar6._0_8_ * dVar47;
      auVar19 = blendpd(auVar8,auVar6,2);
      auVar29._8_4_ = SUB84(auVar55._8_8_,0);
      auVar29._0_8_ = auVar55._0_8_;
      auVar29._12_4_ = (int)((ulonglong)auVar55._8_8_ >> 0x20);
      auVar46._0_8_ = auVar30._0_8_ * (double)auVar6._0_8_ - auVar19._0_8_ * auVar78._0_8_;
      auVar46._8_8_ = auVar30._8_8_ * (double)auVar6._8_8_ - auVar19._8_8_ * auVar78._8_8_;
      auVar19 = blendpd(auVar55,auVar46,2);
      (this->PolyEdgesRenderer).CameraState.DPIScale = dVar14 * dVar15 + dVar56 + auVar29._8_8_;
      *(double *)&(this->PolyEdgesRenderer).CameraState.field_0x58 =
           dVar47 * dVar15 + dVar69 + auVar46._0_8_;
      *(double *)&(this->PolyEdgesRenderer).bHaveCameraState =
           auVar78._0_8_ * dVar15 + auVar88._0_8_ + auVar19._0_8_;
      UpdateActiveSurfaceFrame
                ((UDeformMeshPolygonsTool *)
                 &this[-1].LinearDeformer.FaceBoundaryVertsTemp.Elements.field_0x20,
                 (FGroupTopologySelection *)&(this->TopoSelector)._padding_);
      UpdateQuickTransformer
                ((UDeformMeshPolygonsTool *)
                 &this[-1].LinearDeformer.FaceBoundaryVertsTemp.Elements.field_0x20);
    }
  }
  return true;
}

// PrecomputeTopology @ 14cc6c920

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

void __thiscall UDeformMeshPolygonsTool::PrecomputeTopology(UDeformMeshPolygonsTool *this)

{
  FDynamicMesh3 *pFVar1;
  FGroupTopology *pFVar2;
  undefined1 auStack_198 [32];
  FGroupTopology local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  pFVar1 = (FDynamicMesh3 *)
           (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  pFVar2 = UE::Geometry::FGroupTopology::FGroupTopology(&local_178,pFVar1,true);
  UE::Geometry::FGroupTopology::operator=(&this->Topology,pFVar2);
  UE::Geometry::FGroupTopology::~FGroupTopology(&local_178);
  UE::Geometry::FGroupTopologyDeformer::Initialize(&this->LinearDeformer,pFVar1,&this->Topology);
  UE::Geometry::FGroupTopologyDeformer::Initialize
            ((FGroupTopologyDeformer *)(this->LaplacianDeformer).Ptr,pFVar1,&this->Topology);
  FGroupTopologyLaplacianDeformer::InitializeConstraintBuffer((this->LaplacianDeformer).Ptr);
  return;
}

// RegisterActions @ 14cc6db40

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
UDeformMeshPolygonsTool::RegisterActions
          (UDeformMeshPolygonsTool *this,FInteractiveToolActionSet *param_1)

{
  FText *pFVar1;
  FText *pFVar2;
  FString local_68;
  FText local_58;
  FText local_48;
  code *local_38 [2];
  undefined **local_28;
  UDeformMeshPolygonsTool *local_20;
  undefined8 local_10;
  
  local_28 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UDeformMeshPolygonsTool::RegisterActions'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_10 = 0;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UDeformMeshPolygonsTool::RegisterActions'::__l2::<lambda_1>,void>
                ::Call;
  local_20 = this;
  pFVar1 = FText::AsLocalizable_Advanced_LocText
                     (&local_48,L"UDeformMeshPolygonsTool",L"DeformNextTransformTypeTooltip",
                      L"Cycle to next transform type");
  pFVar2 = FText::AsLocalizable_Advanced_LocText
                     (&local_58,L"UDeformMeshPolygonsTool",L"DeformNextTransformType",
                      L"Next Transform Type");
  ::FString::FString(&local_68,L"DeformNextTransformType");
  FInteractiveToolActionSet::RegisterAction
            (param_1,(UInteractiveTool *)this,0x2712,&local_68,pFVar2,pFVar1,'\0',&EKeys::Q,
             (TFunction<void___cdecl(void)> *)local_38);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  return;
}

// Render @ 14cc70620

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
UDeformMeshPolygonsTool::Render(UDeformMeshPolygonsTool *this,IToolsContextRenderAPI *param_1)

{
  FToolDataVisualizer *this_00;
  uint *puVar1;
  double *pdVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  UDeformMeshPolygonsTransformProperties *pUVar6;
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
  IToolsContextRenderAPI *pIVar18;
  longlong *plVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  FScriptContainerElement *pFVar23;
  uint *puVar24;
  UDeformMeshPolygonsTool *pUVar25;
  FScriptContainerElement *pFVar26;
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
  undefined1 auStack_188 [32];
  float local_168;
  undefined1 local_160;
  undefined1 local_158 [4];
  uint local_154;
  longlong local_150;
  UDeformMeshPolygonsTool *local_148;
  IToolsContextRenderAPI *local_140;
  undefined1 local_138 [16];
  double local_128;
  undefined1 local_120 [16];
  double local_110;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_148 = this;
  local_140 = param_1;
  ComputeUpdate(this);
  plVar19 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  plVar19 = (longlong *)(**(code **)(*plVar19 + 0x398))(plVar19);
  (**(code **)(*plVar19 + 0x18))(plVar19,&this->CameraState);
  lVar21 = 0x9d0;
  if (((this->TransformProps).field0_0x0.DebugPtr)->TransformMode != AxisRotation) {
    lVar21 = 0x480;
  }
  plVar19 = (longlong *)((longlong)&this->_padding_ + lVar21);
  (**(code **)(*plVar19 + 0x30))(plVar19,&this->CameraState);
  *(bool *)&((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ =
       ((this->TransformProps).field0_0x0.DebugPtr)->bShowWireframe;
  local_150 = (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))()
  ;
  this_00 = &this->PolyEdgesRenderer;
  FToolDataVisualizer::BeginFrame(this_00,param_1,&this->CameraState);
  local_e8.Rotation.XY.m128d_f64[0] = (this->WorldTransform).Rotation.XY.m128d_f64[0];
  local_e8.Rotation.XY.m128d_f64[1] = (this->WorldTransform).Rotation.XY.m128d_f64[1];
  local_e8.Rotation.ZW.m128d_f64[0] = (this->WorldTransform).Rotation.ZW.m128d_f64[0];
  local_e8.Rotation.ZW.m128d_f64[1] = (this->WorldTransform).Rotation.ZW.m128d_f64[1];
  local_e8.Translation.XY.m128d_f64[0] = (this->WorldTransform).Translation.XY.m128d_f64[0];
  local_e8.Translation.XY.m128d_f64[1] = (this->WorldTransform).Translation.XY.m128d_f64[1];
  local_e8.Translation.ZW.m128d_f64[0] = (this->WorldTransform).Translation.ZW.m128d_f64[0];
  local_e8.Translation.ZW.m128d_f64[1] = (this->WorldTransform).Translation.ZW.m128d_f64[1];
  local_e8.Scale3D.XY.m128d_f64[0] = (this->WorldTransform).Scale3D.XY.m128d_f64[0];
  local_e8.Scale3D.XY.m128d_f64[1] = (this->WorldTransform).Scale3D.XY.m128d_f64[1];
  local_e8.Scale3D.ZW.m128d_f64[0] = (this->WorldTransform).Scale3D.ZW.m128d_f64[0];
  local_e8.Scale3D.ZW.m128d_f64[1] = (this->WorldTransform).Scale3D.ZW.m128d_f64[1];
  FToolDataVisualizer::SetTransform(this_00,&local_e8);
  local_154 = (this->Topology).Edges.ArrayNum;
  uVar22 = (ulonglong)(int)local_154;
  pFVar23 = (this->Topology).Edges.AllocatorInstance.Data;
  pFVar26 = pFVar23 + uVar22 * 0x50;
  pUVar25 = this;
  while( true ) {
    if ((pUVar25->Topology).Edges.ArrayNum != (int)uVar22) {
      `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupEdge,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_158);
    }
    lVar21 = local_150;
    if (pFVar23 == pFVar26) break;
    puVar24 = *(uint **)(pFVar23 + 0x20);
    iVar3 = *(int *)(pFVar23 + 0x28);
    puVar1 = puVar24 + iVar3;
    while( true ) {
      if (*(int *)(pFVar23 + 0x28) != iVar3) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_158);
      }
      if (puVar24 == puVar1) break;
      auVar42 = *(undefined1 (*) [16])(this->PolyEdgesRenderer).TotalTransform.Rotation.ZW.m128d_f64
      ;
      lVar4 = *(longlong *)(lVar21 + 0x10);
      auVar37 = *(undefined1 (*) [16])(this->PolyEdgesRenderer).TotalTransform.Rotation.XY.m128d_f64
      ;
      dVar17 = (this->PolyEdgesRenderer).TotalTransform.Rotation.ZW.m128d_f64[1];
      uVar22 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(lVar21 + 0x1c0) + (ulonglong)(*puVar24 >> 9) * 8) +
                (ulonglong)(*puVar24 & 0x1ff) * 0x10);
      uVar20 = (ulonglong)((uint)(uVar22 >> 0x20) & 0x1ff);
      lVar5 = *(longlong *)(lVar4 + (uVar22 >> 0x29) * 8);
      pdVar2 = (double *)(lVar5 + uVar20 * 0x18);
      dVar13 = *(double *)(lVar5 + 0x10 + uVar20 * 0x18) *
               (this->PolyEdgesRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
      dVar15 = (this->PolyEdgesRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
      uVar20 = (ulonglong)((uint)uVar22 & 0x1ff);
      lVar4 = *(longlong *)(lVar4 + ((uVar22 & 0xffffffff) >> 9) * 8);
      dVar10 = (this->PolyEdgesRenderer).TotalTransform.Scale3D.XY.m128d_f64[0] * *pdVar2;
      dVar11 = (this->PolyEdgesRenderer).TotalTransform.Scale3D.XY.m128d_f64[1] * pdVar2[1];
      uVar43 = (undefined4)((ulonglong)dVar11 >> 0x20);
      auVar27 = *(undefined1 (*) [16])(this->PolyEdgesRenderer).TotalTransform.Rotation.XY.m128d_f64
      ;
      auVar44._8_4_ = SUB84(dVar11,0);
      auVar44._0_8_ = dVar10;
      auVar44._12_4_ = uVar43;
      dVar9 = auVar42._0_8_;
      auVar32 = blendpd(auVar27,auVar42,2);
      auVar45._0_8_ = auVar44._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar10;
      auVar45._8_8_ = dVar13 * auVar27._8_8_ - dVar9 * dVar11;
      auVar35._8_4_ = SUB84(dVar11,0);
      auVar35._0_8_ = dVar10;
      auVar35._12_4_ = uVar43;
      auVar27._8_4_ = SUB84(dVar15,0);
      auVar27._0_8_ = dVar13;
      auVar27._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      auVar27 = blendpd(auVar35,auVar27,2);
      dVar7 = auVar42._8_8_;
      auVar28._0_8_ = auVar27._0_8_ * dVar9 - auVar32._0_8_ * dVar13;
      auVar28._8_8_ = auVar27._8_8_ * dVar7 - auVar32._8_8_ * dVar15;
      auVar27 = blendpd(auVar45,auVar28,2);
      dVar15 = auVar45._8_8_ + auVar45._8_8_;
      dVar8 = auVar28._0_8_ + auVar28._0_8_;
      uVar43 = (undefined4)((ulonglong)dVar8 >> 0x20);
      auVar46._0_8_ = auVar27._0_8_ + auVar27._0_8_;
      auVar46._8_8_ = auVar27._8_8_ + auVar27._8_8_;
      auVar38._8_4_ = SUB84(dVar8,0);
      auVar38._0_8_ = dVar15;
      auVar38._12_4_ = uVar43;
      auVar33._8_4_ = SUB84(dVar8,0);
      auVar33._0_8_ = dVar15;
      auVar33._12_4_ = uVar43;
      auVar27 = blendpd(auVar33,auVar46,2);
      auVar39._0_8_ = auVar38._8_8_ * auVar37._0_8_ - auVar37._8_8_ * dVar15;
      auVar39._8_8_ = auVar46._0_8_ * auVar37._8_8_ - dVar9 * dVar8;
      auVar32._8_4_ = SUB84(auVar39._8_8_,0);
      auVar32._0_8_ = auVar39._0_8_;
      auVar32._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
      auVar37 = blendpd(auVar37,auVar42,2);
      dVar14 = *(double *)(lVar4 + 0x10 + uVar20 * 0x18) *
               (this->PolyEdgesRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
      dVar16 = (this->PolyEdgesRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
      auVar34._0_8_ = auVar27._0_8_ * dVar9 - auVar37._0_8_ * auVar46._0_8_;
      auVar34._8_8_ = auVar27._8_8_ * dVar7 - auVar37._8_8_ * auVar46._8_8_;
      pdVar2 = (double *)(lVar4 + uVar20 * 0x18);
      dVar8 = dVar8 * dVar17 + dVar11 + auVar34._0_8_ +
              (this->PolyEdgesRenderer).TotalTransform.Translation.XY.m128d_f64[1];
      auVar37 = blendpd(auVar39,auVar34,2);
      dVar11 = (this->PolyEdgesRenderer).TotalTransform.Scale3D.XY.m128d_f64[0] * *pdVar2;
      dVar12 = (this->PolyEdgesRenderer).TotalTransform.Scale3D.XY.m128d_f64[1] * pdVar2[1];
      uVar43 = (undefined4)((ulonglong)dVar12 >> 0x20);
      local_128 = auVar46._0_8_ * dVar17 + dVar13 + auVar37._0_8_ +
                  (this->PolyEdgesRenderer).TotalTransform.Translation.ZW.m128d_f64[0];
      auVar37 = *(undefined1 (*) [16])(this->PolyEdgesRenderer).TotalTransform.Rotation.XY.m128d_f64
      ;
      local_138._8_4_ = SUB84(dVar8,0);
      local_138._0_8_ =
           dVar15 * dVar17 + dVar10 + auVar32._8_8_ +
           (this->PolyEdgesRenderer).TotalTransform.Translation.XY.m128d_f64[0];
      local_138._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar27 = *(undefined1 (*) [16])(this->PolyEdgesRenderer).TotalTransform.Rotation.XY.m128d_f64
      ;
      auVar35 = blendpd(auVar37,auVar42,2);
      local_160 = (this->PolyEdgesRenderer).bDepthTested;
      auVar47._8_4_ = SUB84(dVar12,0);
      auVar47._0_8_ = dVar11;
      auVar47._12_4_ = uVar43;
      auVar48._0_8_ = auVar47._8_8_ * auVar37._0_8_ - auVar37._8_8_ * dVar11;
      auVar48._8_8_ = dVar14 * auVar37._8_8_ - dVar9 * dVar12;
      auVar29._8_4_ = SUB84(dVar12,0);
      auVar29._0_8_ = dVar11;
      auVar29._12_4_ = uVar43;
      auVar37._8_4_ = SUB84(dVar16,0);
      auVar37._0_8_ = dVar14;
      auVar37._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      auVar37 = blendpd(auVar29,auVar37,2);
      auVar30._0_8_ = auVar37._0_8_ * dVar9 - auVar35._0_8_ * dVar14;
      auVar30._8_8_ = auVar37._8_8_ * dVar7 - auVar35._8_8_ * dVar16;
      auVar37 = blendpd(auVar48,auVar30,2);
      dVar15 = auVar48._8_8_ + auVar48._8_8_;
      dVar8 = auVar30._0_8_ + auVar30._0_8_;
      uVar43 = (undefined4)((ulonglong)dVar8 >> 0x20);
      auVar49._0_8_ = auVar37._0_8_ + auVar37._0_8_;
      auVar49._8_8_ = auVar37._8_8_ + auVar37._8_8_;
      auVar40._8_4_ = SUB84(dVar8,0);
      auVar40._0_8_ = dVar15;
      auVar40._12_4_ = uVar43;
      auVar36._8_4_ = SUB84(dVar8,0);
      auVar36._0_8_ = dVar15;
      auVar36._12_4_ = uVar43;
      auVar37 = blendpd(auVar36,auVar49,2);
      auVar41._0_8_ = auVar40._8_8_ * auVar27._0_8_ - auVar27._8_8_ * dVar15;
      auVar41._8_8_ = auVar49._0_8_ * auVar27._8_8_ - dVar9 * dVar8;
      auVar31._8_4_ = SUB84(auVar41._8_8_,0);
      auVar31._0_8_ = auVar41._0_8_;
      auVar31._12_4_ = (int)((ulonglong)auVar41._8_8_ >> 0x20);
      auVar27 = blendpd(auVar27,auVar42,2);
      auVar42._0_8_ = auVar37._0_8_ * dVar9 - auVar27._0_8_ * auVar49._0_8_;
      auVar42._8_8_ = auVar37._8_8_ * dVar7 - auVar27._8_8_ * auVar49._8_8_;
      local_168 = (this->PolyEdgesRenderer).LineThickness;
      dVar9 = dVar8 * dVar7 + dVar12 + auVar42._0_8_ +
              (this->PolyEdgesRenderer).TotalTransform.Translation.XY.m128d_f64[1];
      auVar42 = blendpd(auVar41,auVar42,2);
      local_120._8_4_ = SUB84(dVar9,0);
      local_120._0_8_ =
           dVar15 * dVar7 + dVar11 + auVar31._8_8_ +
           (this->PolyEdgesRenderer).TotalTransform.Translation.XY.m128d_f64[0];
      local_120._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      local_110 = auVar49._0_8_ * dVar7 + dVar14 + auVar42._0_8_ +
                  (this->PolyEdgesRenderer).TotalTransform.Translation.ZW.m128d_f64[0];
      (**(code **)(this_00->_padding_ + 8))
                (this_00,local_120,local_138,&(this->PolyEdgesRenderer).LineColor);
      puVar24 = puVar24 + 1;
    }
    pFVar23 = pFVar23 + 0x50;
    uVar22 = (ulonglong)local_154;
    pUVar25 = local_148;
  }
  FToolDataVisualizer::EndFrame(this_00);
  pIVar18 = local_140;
  FToolDataVisualizer::BeginFrame(&pUVar25->HilightRenderer,local_140,&pUVar25->CameraState);
  local_e8.Rotation.XY.m128d_f64[0] = (pUVar25->WorldTransform).Rotation.XY.m128d_f64[0];
  local_e8.Rotation.XY.m128d_f64[1] = (pUVar25->WorldTransform).Rotation.XY.m128d_f64[1];
  local_e8.Rotation.ZW.m128d_f64[0] = (pUVar25->WorldTransform).Rotation.ZW.m128d_f64[0];
  local_e8.Rotation.ZW.m128d_f64[1] = (pUVar25->WorldTransform).Rotation.ZW.m128d_f64[1];
  local_e8.Translation.XY.m128d_f64[0] = (pUVar25->WorldTransform).Translation.XY.m128d_f64[0];
  local_e8.Translation.XY.m128d_f64[1] = (pUVar25->WorldTransform).Translation.XY.m128d_f64[1];
  local_e8.Translation.ZW.m128d_f64[0] = (pUVar25->WorldTransform).Translation.ZW.m128d_f64[0];
  local_e8.Translation.ZW.m128d_f64[1] = (pUVar25->WorldTransform).Translation.ZW.m128d_f64[1];
  local_e8.Scale3D.XY.m128d_f64[0] = (pUVar25->WorldTransform).Scale3D.XY.m128d_f64[0];
  local_e8.Scale3D.XY.m128d_f64[1] = (pUVar25->WorldTransform).Scale3D.XY.m128d_f64[1];
  local_e8.Scale3D.ZW.m128d_f64[0] = (pUVar25->WorldTransform).Scale3D.ZW.m128d_f64[0];
  local_e8.Scale3D.ZW.m128d_f64[1] = (pUVar25->WorldTransform).Scale3D.ZW.m128d_f64[1];
  FToolDataVisualizer::SetTransform(&pUVar25->HilightRenderer,&local_e8);
  *(float *)&(pUVar25->TopoSelector)._padding_ = pUVar25->VisualAngleSnapThreshold;
  local_168 = 1.4013e-45;
  (**(code **)((pUVar25->TopoSelector)._padding_ + 8))
            (&pUVar25->TopoSelector,&pUVar25->HilightSelection,&pUVar25->HilightRenderer,
             &pUVar25->CameraState);
  FToolDataVisualizer::EndFrame(&pUVar25->HilightRenderer);
  lVar21 = 0x9d0;
  pUVar6 = (pUVar25->TransformProps).field0_0x0.DebugPtr;
  if (pUVar25->bInDrag == false) {
    if (pUVar6->TransformMode != AxisRotation) {
      lVar21 = 0x480;
    }
    plVar19 = (longlong *)((longlong)&pUVar25->_padding_ + lVar21);
    (**(code **)(*plVar19 + 0x40))(plVar19,pIVar18);
  }
  else {
    lVar21 = 0x9d0;
    if (pUVar6->TransformMode != AxisRotation) {
      lVar21 = 0x480;
    }
    (**(code **)(*(longlong *)((longlong)&pUVar25->_padding_ + lVar21) + 0x38))();
  }
  return;
}

// Setup @ 14cc75fd0

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

void __thiscall UDeformMeshPolygonsTool::Setup(UDeformMeshPolygonsTool *this)

{
  TPimplPtr<FGroupTopologyLaplacianDeformer,0> *pTVar1;
  int iVar2;
  FGroupTopologyLaplacianDeformer *pFVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  FFunctionStorage *pFVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  FLinearColor FVar13;
  bool bVar14;
  uint uVar15;
  AInternalToolFrameworkActor *pAVar16;
  code *pcVar17;
  UWorld *this_00;
  UClass *pUVar18;
  FString *pFVar19;
  UDynamicMeshComponent *pUVar20;
  TTransform<double> *pTVar21;
  FDynamicMesh3 *pFVar22;
  undefined8 *puVar23;
  ulong64 uVar24;
  UDeformMeshPolygonsTransformProperties *pUVar25;
  FGroupTopology *pFVar26;
  longlong *plVar27;
  FText *pFVar28;
  AInternalToolFrameworkActor *pAVar29;
  FFunctionStorage *pFVar30;
  undefined ***pppuVar31;
  uint uVar32;
  AInternalToolFrameworkActor *pAVar33;
  wchar_t *pwVar34;
  wchar_t *pwVar35;
  undefined1 auStackY_718 [32];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_6e8;
  FDelegateAllocation local_6e0;
  FGetMeshParameters local_6c8;
  int iStack_6bc;
  undefined8 local_6b8;
  FComponentMaterialSet local_6b0;
  UDeformMeshPolygonsTool *local_6a0;
  undefined1 local_698 [16];
  FMRSWRecursiveAccessDetector *local_688;
  char local_680;
  code *local_678;
  undefined **local_668;
  UDeformMeshPolygonsTool *local_660;
  undefined ***local_650;
  FDestructionSentinel local_648;
  FDelegateAllocation *local_630;
  longlong local_628;
  FText local_620;
  FText local_610;
  FString local_600;
  FString local_5f0;
  FDynamicMesh3 local_5d8;
  undefined1 local_3a8 [128];
  longlong local_328;
  longlong lStack_320;
  longlong local_318;
  longlong lStack_310;
  undefined8 local_308;
  longlong *plStack_300;
  code *local_2f8;
  longlong lStack_2f0;
  FFunctionStorage local_2e8;
  TTransform<double> local_2c8;
  undefined1 local_268 [112];
  TTransform<double> local_1f8;
  FGroupTopology local_198;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_718;
  UMeshSurfacePointTool::Setup((UMeshSurfacePointTool *)this);
  pAVar16 = ::operator_new(0x350);
  pAVar33 = (AInternalToolFrameworkActor *)0x0;
  pAVar29 = pAVar33;
  if (pAVar16 != (AInternalToolFrameworkActor *)0x0) {
    pAVar16->_padding_ = 0;
    pAVar16->_padding_ =
         (longlong)UE::Core::Private::PimplPtr::DeleterFunc<FGroupTopologyLaplacianDeformer>;
    memset(&pAVar16->_padding_,0,0x338);
    UE::Geometry::FGroupTopologyDeformer::FGroupTopologyDeformer
              ((FGroupTopologyDeformer *)&pAVar16->_padding_);
    *(undefined1 *)&pAVar16[1]._padding_ = 1;
    pAVar16->_padding_ = (longlong)&___7FGroupTopologyLaplacianDeformer__6B_;
    *(undefined8 *)&pAVar16[1]._padding_ = 0x3ff0000000000000;
    pAVar16[1]._padding_ = 0;
    pAVar16[1]._padding_ = 0;
    pAVar16[1]._padding_ = 0;
    *(undefined8 *)&pAVar16[1]._padding_ = 0;
    (((FRepAttachment *)&pAVar16[1]._padding_)->AttachParent).field0_0x0.DebugPtr = (AActor *)0x0;
    *(undefined4 *)&pAVar16[1]._padding_ = 0x1000000;
    pAVar29 = pAVar16;
  }
  pTVar1 = &this->LaplacianDeformer;
  if ((TPimplPtr<FGroupTopologyLaplacianDeformer,0> *)&local_628 == pTVar1) {
    if (&pAVar29->_padding_ == (longlong *)0x0) goto LAB_14cc760ce;
    pcVar17 = (code *)pAVar29->_padding_;
  }
  else {
    pFVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (FGroupTopologyLaplacianDeformer *)&pAVar29->_padding_;
    if (pFVar3 == (FGroupTopologyLaplacianDeformer *)0x0) goto LAB_14cc760ce;
    pcVar17 = (code *)pFVar3[-1].HandleWeights;
    pAVar29 = (AInternalToolFrameworkActor *)&pFVar3[-1].HandleWeights;
  }
  (*pcVar17)(pAVar29);
LAB_14cc760ce:
  bVar14 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  pwVar35 = L"";
  if ((!bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("TargetWorld.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\DeformMeshPolygonsTool.cpp"
                          ,0x34e,L""), bVar14)) {
    pcVar17 = (code *)swi(3);
    (*pcVar17)();
    return;
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_268);
  this_00 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pUVar18 = Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
  pAVar16 = (AInternalToolFrameworkActor *)
            UWorld::SpawnActor(this_00,pUVar18,&UE::Math::TVector<double>::ZeroVector,
                               &UE::Math::TRotator<double>::ZeroRotator,
                               (FActorSpawnParameters *)local_268);
  pAVar29 = pAVar33;
  if (pAVar16 != (AInternalToolFrameworkActor *)0x0) {
    pUVar18 = Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
    iVar2 = (int)pUVar18->_padding_;
    if ((*(int *)(pAVar16->_padding_ + 0x38) < iVar2) ||
       (pAVar29 = pAVar16,
       (longlong *)*(undefined1 **)(*(longlong *)(pAVar16->_padding_ + 0x30) + (longlong)iVar2 * 8)
       != &pUVar18->_padding_)) {
      pFVar19 = GetTypeName<AInternalToolFrameworkActor>(&local_5f0);
      if ((pFVar19->Data).ArrayNum == 0) {
        pwVar34 = L"";
      }
      else {
        pwVar34 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
      }
      pFVar19 = GetFullNameForCastLogError<AActor>(&local_600,(AActor *)pAVar16);
      if ((pFVar19->Data).ArrayNum != 0) {
        pwVar35 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar35,pwVar34);
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar29 != (AInternalToolFrameworkActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar29);
  }
  (this->PreviewMeshActor).field0_0x0.DebugPtr = pAVar29;
  pUVar20 = NewObject<UDynamicMeshComponent>((UObject *)pAVar29);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar20 != (UDynamicMeshComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  (this->DynamicMeshComponent).field0_0x0.DebugPtr = pUVar20;
  local_6b8 = 0;
  USceneComponent::SetupAttachment
            ((USceneComponent *)pUVar20,
             (USceneComponent *)((this->PreviewMeshActor).field0_0x0.DebugPtr)->_padding_,(FName)0x0
            );
  UActorComponent::RegisterComponent
            ((UActorComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr);
  pTVar21 = UE::ToolTarget::GetLocalToWorldTransform(&local_1f8,(UToolTarget *)this->_padding_);
  pUVar20 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  dVar12 = (pTVar21->Rotation).XY.m128d_f64[1];
  (this->WorldTransform).Rotation.XY.m128d_f64[0] = (pTVar21->Rotation).XY.m128d_f64[0];
  (this->WorldTransform).Rotation.XY.m128d_f64[1] = dVar12;
  dVar12 = (pTVar21->Rotation).ZW.m128d_f64[1];
  (this->WorldTransform).Rotation.ZW.m128d_f64[0] = (pTVar21->Rotation).ZW.m128d_f64[0];
  (this->WorldTransform).Rotation.ZW.m128d_f64[1] = dVar12;
  dVar12 = (pTVar21->Translation).XY.m128d_f64[1];
  (this->WorldTransform).Translation.XY.m128d_f64[0] = (pTVar21->Translation).XY.m128d_f64[0];
  (this->WorldTransform).Translation.XY.m128d_f64[1] = dVar12;
  dVar12 = (pTVar21->Translation).ZW.m128d_f64[1];
  (this->WorldTransform).Translation.ZW.m128d_f64[0] = (pTVar21->Translation).ZW.m128d_f64[0];
  (this->WorldTransform).Translation.ZW.m128d_f64[1] = dVar12;
  dVar12 = (pTVar21->Scale3D).XY.m128d_f64[1];
  (this->WorldTransform).Scale3D.XY.m128d_f64[0] = (pTVar21->Scale3D).XY.m128d_f64[0];
  (this->WorldTransform).Scale3D.XY.m128d_f64[1] = dVar12;
  dVar12 = (pTVar21->Scale3D).ZW.m128d_f64[1];
  (this->WorldTransform).Scale3D.ZW.m128d_f64[0] = (pTVar21->Scale3D).ZW.m128d_f64[0];
  (this->WorldTransform).Scale3D.ZW.m128d_f64[1] = dVar12;
  local_2c8.Rotation.XY.m128d_f64[0] = (pTVar21->Rotation).XY.m128d_f64[0];
  local_2c8.Rotation.XY.m128d_f64[1] = (pTVar21->Rotation).XY.m128d_f64[1];
  local_2c8.Rotation.ZW.m128d_f64[0] = (pTVar21->Rotation).ZW.m128d_f64[0];
  local_2c8.Rotation.ZW.m128d_f64[1] = (pTVar21->Rotation).ZW.m128d_f64[1];
  local_2c8.Translation.XY.m128d_f64[0] = (pTVar21->Translation).XY.m128d_f64[0];
  local_2c8.Translation.XY.m128d_f64[1] = (pTVar21->Translation).XY.m128d_f64[1];
  local_2c8.Translation.ZW.m128d_f64[0] = (pTVar21->Translation).ZW.m128d_f64[0];
  local_2c8.Translation.ZW.m128d_f64[1] = (pTVar21->Translation).ZW.m128d_f64[1];
  local_2c8.Scale3D.XY.m128d_f64[0] = (pTVar21->Scale3D).XY.m128d_f64[0];
  local_2c8.Scale3D.XY.m128d_f64[1] = (pTVar21->Scale3D).XY.m128d_f64[1];
  local_2c8.Scale3D.ZW.m128d_f64[0] = (pTVar21->Scale3D).ZW.m128d_f64[0];
  local_2c8.Scale3D.ZW.m128d_f64[1] = (pTVar21->Scale3D).ZW.m128d_f64[1];
  USceneComponent::SetWorldTransform
            ((USceneComponent *)pUVar20,&local_2c8,false,(FHitResult *)0x0,None);
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((UBaseDynamicMeshComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr,
             (UToolTarget *)this->_padding_);
  UE::ToolTarget::GetMaterialSet(&local_6b0,(UToolTarget *)this->_padding_,false);
  pAVar29 = pAVar33;
  if (0 < local_6b0.Materials.ArrayNum) {
    do {
      pUVar20 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
      uVar32 = (uint)pAVar33;
      pcVar17 = *(code **)(pUVar20->_padding_ + 0x6b8);
      uVar15 = 0;
      if ((int)uVar32 < local_6b0.Materials.ArrayNum) {
        uVar15 = ~uVar32 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      (*pcVar17)(pUVar20,pAVar33,
                 *(undefined8 *)
                  (local_6b0.Materials.AllocatorInstance.Data + (longlong)&pAVar29->_padding_));
      pAVar33 = (AInternalToolFrameworkActor *)(ulonglong)(uVar32 + 1);
      pAVar29 = (AInternalToolFrameworkActor *)&pAVar29->_padding_;
    } while ((int)(uVar32 + 1) < local_6b0.Materials.ArrayNum);
  }
  UDynamicMeshComponent::SetTangentsType
            ((this->DynamicMeshComponent).field0_0x0.DebugPtr,AutoCalculated);
  pUVar20 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  pcVar17 = *(code **)(pUVar20->_padding_ + 0xb28);
  local_6c8.bHaveRequestLOD = false;
  local_6c8._1_3_ = 0;
  local_6c8.RequestLOD = Default;
  local_6c8.bWantMeshTangents = false;
  local_6c8._9_3_ = 0;
  pFVar22 = UE::ToolTarget::GetDynamicMeshCopy(&local_5d8,(UToolTarget *)this->_padding_,&local_6c8)
  ;
  (*pcVar17)(pUVar20,pFVar22);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_5d8);
  pUVar20 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  local_6c8.bHaveRequestLOD = true;
  local_6c8._1_3_ = 0x4cc66b;
  local_6c8.RequestLOD = LOD1;
  iStack_6bc = local_600.Data.ArrayMax;
  local_6c8.bWantMeshTangents = false;
  local_6c8._9_3_ = 0;
  local_6e8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_6e0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_6e0.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_6e8,(FWriteAccessScope *)&local_648);
  local_630 = &local_6e0;
  puVar23 = UE::Core::Private::DelegateAllocate(0x30,&local_6e0);
  if (puVar23 != (undefined8 *)0x0) {
    *puVar23 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar24;
    *puVar23 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDeformMeshPolygonsTool____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar23[3] = 0;
    local_6a0 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar23 + 3),(FObjectPtr)&local_6a0);
    puVar23[4] = CONCAT44(local_6c8.RequestLOD,local_6c8._0_4_);
    puVar23[5] = CONCAT44(iStack_6bc,local_6c8._8_4_);
  }
  if (local_648.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_648.Accessor,&local_648);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  AddDelegateInstance<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar20->OnMeshChanged,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_698);
  (this->OnDynamicMeshComponentChangedHandle).ID = local_698._0_8_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_6e8,(FWriteAccessScope *)(local_698 + 8));
  if ((local_6e0.DelegateSize != 0) &&
     (local_6e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_6e0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_6e0,0,0,0x10);
    local_6e0.DelegateSize = 0;
  }
  if (local_680 == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              (local_688,(FDestructionSentinel *)(local_698 + 8));
  }
  if (local_6e0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_6e0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_6e8.AccessDetector);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar18 = UDeformMeshPolygonsTransformProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_3a8,pUVar18);
  local_3a8._8_8_ = this;
  pUVar25 = (UDeformMeshPolygonsTransformProperties *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_3a8);
  if (local_3a8._64_8_ != 0) {
    plVar27 = (longlong *)(local_3a8 + 0x50);
    if ((longlong *)local_3a8._104_8_ != (longlong *)0x0) {
      plVar27 = (longlong *)local_3a8._104_8_;
    }
    (**(code **)(*plVar27 + 0x10))(plVar27);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar25 != (UDeformMeshPolygonsTransformProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar25);
  }
  (this->TransformProps).field0_0x0.DebugPtr = pUVar25;
  (**(code **)(this->_padding_ + 0x318))(this);
  pFVar22 = (FDynamicMesh3 *)
            (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  (this->MeshSpatial).MeshChangeStamp = 0;
  (this->MeshSpatial).Mesh = pFVar22;
  UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(&this->MeshSpatial,false);
  uVar24 = UE::Geometry::FDynamicMesh3::GetChangeStamp((this->MeshSpatial).Mesh);
  (this->MeshSpatial).MeshChangeStamp = uVar24;
  pFVar22 = (FDynamicMesh3 *)
            (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  pFVar26 = UE::Geometry::FGroupTopology::FGroupTopology(&local_198,pFVar22,true);
  UE::Geometry::FGroupTopology::operator=(&this->Topology,pFVar26);
  UE::Geometry::FGroupTopology::~FGroupTopology(&local_198);
  UE::Geometry::FGroupTopologyDeformer::Initialize(&this->LinearDeformer,pFVar22,&this->Topology);
  UE::Geometry::FGroupTopologyDeformer::Initialize
            ((FGroupTopologyDeformer *)pTVar1->Ptr,pFVar22,&this->Topology);
  FGroupTopologyLaplacianDeformer::InitializeConstraintBuffer(pTVar1->Ptr);
  pFVar22 = (FDynamicMesh3 *)
            (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
  FGroupTopologySelector::Initialize(&this->TopoSelector,pFVar22,&this->Topology);
  local_650 = (undefined ***)0x0;
  local_668 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UDeformMeshPolygonsTool::Setup'::`2'::<lambda_1>,0,0>::
               _vftable_;
  local_678 = UE::Core::Private::Function::
              TFunctionRefCaller<`UDeformMeshPolygonsTool::Setup'::__l2::<lambda_1>,UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*>
              ::Call;
  local_2f8 = UE::Core::Private::Function::
              TFunctionRefCaller<`UDeformMeshPolygonsTool::Setup'::__l2::<lambda_1>,UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>_*>
              ::Call;
  local_2e8.HeapAllocation = (void *)0x0;
  local_660 = this;
  UE::Core::Private::Function::
  TFunction_OwnedObject<`UDeformMeshPolygonsTool::Setup'::__l2::<lambda_1>,0,0>::CloneToEmptyStorage
            (&local_668,&local_2e8);
  lVar10 = (this->TopoSelector)._padding_;
  lVar11 = (this->TopoSelector)._padding_;
  uVar4 = *(undefined4 *)&(this->TopoSelector)._padding_;
  uVar5 = *(undefined4 *)((longlong)&(this->TopoSelector)._padding_ + 4);
  uVar6 = *(undefined4 *)&(this->TopoSelector)._padding_;
  uVar7 = *(undefined4 *)((longlong)&(this->TopoSelector)._padding_ + 4);
  lVar8 = (this->TopoSelector)._padding_;
  pFVar9 = (FFunctionStorage *)(this->TopoSelector)._padding_;
  (this->TopoSelector)._padding_ = (longlong)local_2f8;
  (this->TopoSelector)._padding_ = lStack_2f0;
  *(undefined4 *)&(this->TopoSelector)._padding_ = local_2e8.InlineAllocation._0_4_;
  *(undefined4 *)((longlong)&(this->TopoSelector)._padding_ + 4) = local_2e8.InlineAllocation._4_4_;
  *(undefined4 *)&(this->TopoSelector)._padding_ = local_2e8.InlineAllocation._8_4_;
  *(undefined4 *)((longlong)&(this->TopoSelector)._padding_ + 4) = local_2e8.InlineAllocation._12_4_
  ;
  *(undefined4 *)&(this->TopoSelector)._padding_ = local_2e8.InlineAllocation._16_4_;
  *(undefined4 *)((longlong)&(this->TopoSelector)._padding_ + 4) = local_2e8.InlineAllocation._20_4_
  ;
  *(undefined4 *)&(this->TopoSelector)._padding_ = local_2e8.HeapAllocation._0_4_;
  *(undefined4 *)((longlong)&(this->TopoSelector)._padding_ + 4) = local_2e8.HeapAllocation._4_4_;
  local_2f8 = (code *)lVar10;
  lStack_2f0 = lVar11;
  local_2e8.InlineAllocation._0_4_ = uVar4;
  local_2e8.InlineAllocation._4_4_ = uVar5;
  local_2e8.InlineAllocation._8_4_ = uVar6;
  local_2e8.InlineAllocation._12_4_ = uVar7;
  local_2e8.InlineAllocation._16_8_ = lVar8;
  local_2e8.HeapAllocation = pFVar9;
  if (lVar10 != 0) {
    pFVar30 = &local_2e8;
    if (pFVar9 != (FFunctionStorage *)0x0) {
      pFVar30 = pFVar9;
    }
    (**(code **)(*(longlong *)pFVar30->InlineAllocation + 0x10))();
  }
  if (local_678 != (code *)0x0) {
    pppuVar31 = &local_668;
    if (local_650 != (undefined ***)0x0) {
      pppuVar31 = local_650;
    }
    (*(code *)(*pppuVar31)[2])();
  }
  local_328 = (this->TopoSelector)._padding_;
  lVar10 = (this->TopoSelector)._padding_;
  local_318 = (this->TopoSelector)._padding_;
  lStack_310 = (this->TopoSelector)._padding_;
  lVar8 = (this->TopoSelector)._padding_;
  plStack_300 = (longlong *)(this->TopoSelector)._padding_;
  (this->TopoSelector)._padding_ =
       (longlong)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UDeformMeshPolygonsTool::Setup'::__l2::<lambda_2>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_const_&,double>
       ::Call;
  (this->TopoSelector)._padding_ = lStack_320;
  *(undefined4 *)&(this->TopoSelector)._padding_ = 0x52952540;
  *(undefined4 *)((longlong)&(this->TopoSelector)._padding_ + 4) = 1;
  (this->TopoSelector)._padding_ = (longlong)this;
  *(undefined4 *)&(this->TopoSelector)._padding_ = (undefined4)local_308;
  *(undefined4 *)((longlong)&(this->TopoSelector)._padding_ + 4) = local_308._4_4_;
  *(undefined4 *)&(this->TopoSelector)._padding_ = 0;
  *(undefined4 *)((longlong)&(this->TopoSelector)._padding_ + 4) = 0;
  lStack_320 = lVar10;
  local_308 = lVar8;
  if (local_328 != 0) {
    plVar27 = &local_318;
    if (plStack_300 != (longlong *)0x0) {
      plVar27 = plStack_300;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  UE::ToolTarget::HideSourceObject((UToolTarget *)this->_padding_);
  this->bInDrag = false;
  (**(code **)((this->QuickAxisTranslater)._padding_ + 8))();
  (**(code **)((this->QuickAxisRotator)._padding_ + 8))();
  pUVar25 = (this->TransformProps).field0_0x0.DebugPtr;
  pFVar3 = pTVar1->Ptr;
  (this->PolyEdgesRenderer).LineColor.field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  (this->PolyEdgesRenderer).LineThickness = 2.0;
  FVar13 = FLinearColor::Green;
  (this->HilightRenderer).LineThickness = 4.0;
  (this->HilightRenderer).LineColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar13.field0_0x0;
  FGroupTopologyLaplacianDeformer::InitBackgroundWorker(pFVar3,pUVar25->SelectedWeightScheme);
  if ((this->Topology).Groups.ArrayNum < 2) {
    plVar27 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
    pcVar17 = *(code **)(*plVar27 + 0x360);
    pFVar28 = FText::AsLocalizable_Advanced_LocText
                        (&local_620,L"UDeformMeshPolygonsTool",L"NoGroupsWarning",
                         L"This object has only a single PolyGroup. Use the GrpGen, GrpPnt or TriSel (Create PolyGroup) tools to modify PolyGroups."
                        );
    (*pcVar17)(plVar27,pFVar28,3);
    if (local_620.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_620.TextData.Reference + 0x10))();
    }
  }
  plVar27 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))(this);
  pcVar17 = *(code **)(*plVar27 + 0x360);
  pFVar28 = FText::AsLocalizable_Advanced_LocText
                      (&local_610,L"UDeformMeshPolygonsTool",L"DeformMeshPolygonsToolDescription",
                       L"Deform the mesh by directly manipulating (i.e. click-and-drag) the PolyGroup edges, faces, and vertices."
                      );
  (*pcVar17)(plVar27,pFVar28,2);
  if (local_610.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_610.TextData.Reference + 0x10))();
  }
  if (local_6b0.Materials.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6b0.Materials.AllocatorInstance.Data);
  }
  if (local_268._64_8_ != 0) {
    plVar27 = (longlong *)(local_268 + 0x50);
    if ((longlong *)local_268._104_8_ != (longlong *)0x0) {
      plVar27 = (longlong *)local_268._104_8_;
    }
    (**(code **)(*plVar27 + 0x10))();
  }
  return;
}

// Shutdown @ 14cc7fce0

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
UDeformMeshPolygonsTool::Shutdown(UDeformMeshPolygonsTool *this,EToolShutdownType param_1)

{
  FGroupTopologyLaplacianDeformer *pFVar1;
  UDynamicMeshComponent *pUVar2;
  code *pcVar3;
  AInternalToolFrameworkActor *this_00;
  UInteractiveToolManager *pUVar4;
  longlong lVar5;
  FText *pFVar6;
  UDeformMeshPolygonsTool *local_res8;
  undefined1 local_18 [16];
  
  pUVar4 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))();
  UE::TransactionUtil::FLongTransactionTracker::CloseAll(&this->LongTransactions,pUVar4);
  pFVar1 = (this->LaplacianDeformer).Ptr;
  if (pFVar1 != (FGroupTopologyLaplacianDeformer *)0x0) {
    (this->LaplacianDeformer).Ptr = (FGroupTopologyLaplacianDeformer *)0x0;
    (*(code *)pFVar1[-1].HandleWeights)();
  }
  pUVar2 = (this->DynamicMeshComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (UDynamicMeshComponent *)0x0) {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar2->OnMeshChanged,
               (FDelegateHandle)(this->OnDynamicMeshComponentChangedHandle).ID);
    UE::ToolTarget::ShowSourceObject((UToolTarget *)this->_padding_);
    if (param_1 == Accept) {
      lVar5 = (**(code **)(this->_padding_ + 0x2d8))(this);
      pcVar3 = *(code **)(*(longlong *)(lVar5 + 0x28) + 0x10);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         ((FText *)local_18,L"UDeformMeshPolygonsTool",
                          L"DeformMeshPolygonsToolTransactionName",L"PolyGroup Deform");
      (*pcVar3)(lVar5 + 0x28,pFVar6);
      if ((ITextData *)local_18._0_8_ != (ITextData *)0x0) {
        (**(code **)((longlong)*(ITextData *)local_18._0_8_ + 0x10))();
      }
      local_18._8_8_ = &local_res8;
      local_18._0_8_ =
           UE::Core::Private::Function::
           TFunctionRefCaller<`UDeformMeshPolygonsTool::Shutdown'::__l8::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
           ::Call;
      local_res8 = this;
      (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb40))();
      lVar5 = (**(code **)(this->_padding_ + 0x2d8))(this);
      (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x18))(lVar5 + 0x28);
    }
    UActorComponent::UnregisterComponent
              ((UActorComponent *)(this->DynamicMeshComponent).field0_0x0.DebugPtr);
    (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0x4a0))();
    (this->DynamicMeshComponent).field0_0x0.DebugPtr = (UDynamicMeshComponent *)0x0;
  }
  this_00 = (this->PreviewMeshActor).field0_0x0.DebugPtr;
  if (this_00 != (AInternalToolFrameworkActor *)0x0) {
    AActor::Destroy((AActor *)this_00,false,true);
    (this->PreviewMeshActor).field0_0x0.DebugPtr = (AInternalToolFrameworkActor *)0x0;
  }
  return;
}

// StaticRegisterNativesUDeformMeshPolygonsTool @ 14cc822f0

void __cdecl UDeformMeshPolygonsTool::StaticRegisterNativesUDeformMeshPolygonsTool(void)

{
  return;
}

// UpdateActiveSurfaceFrame @ 14cc82ef0

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
UDeformMeshPolygonsTool::UpdateActiveSurfaceFrame
          (UDeformMeshPolygonsTool *this,FGroupTopologySelection *param_1)

{
  TFrame3<double> *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  int iVar11;
  double extraout_XMM0_Qa;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  TVector<double>_u_0 local_f8;
  TQuaternion<double>_u_0 local_e0;
  undefined1 local_b8 [176];
  
  dVar2 = (this->StartHitPosWorld).field0_0x0._s_0.Y;
  this_00 = &this->ActiveSurfaceFrame;
  dVar1 = (this->StartHitPosWorld).field0_0x0._s_0.Z;
  (this_00->Origin).field0_0x0._s_0.X = (this->StartHitPosWorld).field0_0x0._s_0.X;
  (this->ActiveSurfaceFrame).Origin.field0_0x0._s_0.Y = dVar2;
  (this->ActiveSurfaceFrame).Origin.field0_0x0._s_0.Z = dVar1;
  dVar1 = __real_3ff0000000000000;
  if (*(int *)&(this->HilightSelection).SelectedCornerIDs.Elements.field_0x8 -
      *(int *)&(this->HilightSelection).SelectedCornerIDs.Elements.field_0x34 != 1) {
    dVar2 = (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.X;
    dVar3 = (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.Y;
    local_b8._16_8_ = (this->StartHitNormalWorld).field0_0x0._s_0.Z;
    local_b8._0_16_ = *(undefined1 (*) [16])&(this->StartHitNormalWorld).field0_0x0;
    dVar15 = (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.Z;
    dVar4 = (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.W;
    dVar15 = dVar15 + dVar15;
    local_f8._s_0.X = dVar4 * (dVar3 + dVar3) + dVar15 * dVar2;
    local_e0._s_0.W = __real_3ff0000000000000;
    local_f8._s_0.Y = dVar15 * dVar3 - dVar4 * (dVar2 + dVar2);
    local_e0._s_0.X = 0.0;
    local_e0._s_0.Y = 0.0;
    local_e0._s_0.Z = 0.0;
    local_f8._s_0.Z = __real_3ff0000000000000 - ((dVar3 + dVar3) * dVar3 + (dVar2 + dVar2) * dVar2);
    UE::Geometry::TQuaternion<double>::SetFromTo
              ((TQuaternion<double> *)&local_e0._s_0,(TVector<double> *)&local_f8._s_0,
               (TVector<double> *)local_b8);
    UE::Geometry::TFrame3<double>::Rotate(this_00,(TQuaternion<double> *)&local_e0._s_0);
    if (*(int *)&(this->HilightSelection).SelectedEdgeIDs.Elements.field_0x8 -
        *(int *)&(this->HilightSelection).SelectedEdgeIDs.Elements.field_0x34 == 1) {
      iVar11 = UE::Geometry::FGroupTopologySelection::GetASelectedEdgeID(&this->HilightSelection);
      bVar10 = UE::Geometry::FGroupTopology::GetGroupEdgeTangent
                         (&this->Topology,iVar11,(TVector<double> *)&local_f8._s_0);
      if (bVar10) {
        auVar20 = *(undefined1 (*) [16])(this->WorldTransform).Rotation.ZW.m128d_f64;
        dVar9 = (this->WorldTransform).Rotation.ZW.m128d_f64[1];
        dVar5 = (this->WorldTransform).Scale3D.XY.m128d_f64[0] * local_f8._s_0.X;
        dVar6 = (this->WorldTransform).Scale3D.XY.m128d_f64[1] * local_f8._s_0.Y;
        uVar21 = (undefined4)((ulonglong)dVar6 >> 0x20);
        auVar12 = *(undefined1 (*) [16])(this->WorldTransform).Rotation.XY.m128d_f64;
        auVar22._8_4_ = SUB84(dVar6,0);
        auVar22._0_8_ = dVar5;
        auVar22._12_4_ = uVar21;
        dVar7 = local_f8._s_0.Z * (this->WorldTransform).Scale3D.ZW.m128d_f64[0];
        dVar2 = (this->WorldTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
        auVar14 = blendpd(auVar12,auVar20,2);
        dVar3 = auVar20._0_8_;
        auVar23._0_8_ = auVar22._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar5;
        auVar23._8_8_ = dVar7 * auVar12._8_8_ - dVar3 * dVar6;
        auVar24._8_4_ = SUB84(dVar6,0);
        auVar24._0_8_ = dVar5;
        auVar24._12_4_ = uVar21;
        auVar12._8_4_ = SUB84(dVar2,0);
        auVar12._0_8_ = dVar7;
        auVar12._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        auVar12 = blendpd(auVar24,auVar12,2);
        auVar13._0_8_ = auVar12._0_8_ * dVar3 - auVar14._0_8_ * dVar7;
        auVar13._8_8_ = auVar12._8_8_ * auVar20._8_8_ - auVar14._8_8_ * dVar2;
        auVar12 = *(undefined1 (*) [16])(this->WorldTransform).Rotation.XY.m128d_f64;
        auVar24 = blendpd(auVar23,auVar13,2);
        dVar4 = auVar23._8_8_ + auVar23._8_8_;
        dVar15 = auVar13._0_8_ + auVar13._0_8_;
        uVar21 = (undefined4)((ulonglong)dVar15 >> 0x20);
        auVar25._0_8_ = auVar24._0_8_ + auVar24._0_8_;
        auVar25._8_8_ = auVar24._8_8_ + auVar24._8_8_;
        auVar18._8_4_ = SUB84(dVar15,0);
        auVar18._0_8_ = dVar4;
        auVar18._12_4_ = uVar21;
        dVar2 = (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.X;
        auVar16._8_4_ = SUB84(dVar15,0);
        auVar16._0_8_ = dVar4;
        auVar16._12_4_ = uVar21;
        auVar24 = blendpd(auVar16,auVar25,2);
        auVar19._0_8_ = auVar18._8_8_ * auVar12._0_8_ - auVar12._8_8_ * dVar4;
        auVar19._8_8_ = auVar25._0_8_ * auVar12._8_8_ - dVar3 * dVar15;
        auVar14._8_4_ = SUB84(auVar19._8_8_,0);
        auVar14._0_8_ = auVar19._0_8_;
        auVar14._12_4_ = (int)((ulonglong)auVar19._8_8_ >> 0x20);
        auVar12 = blendpd(auVar12,auVar20,2);
        auVar17._0_8_ = auVar24._0_8_ * dVar3 - auVar12._0_8_ * auVar25._0_8_;
        auVar17._8_8_ = auVar24._8_8_ * auVar20._8_8_ - auVar12._8_8_ * auVar25._8_8_;
        dVar3 = (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.Y;
        dVar6 = dVar15 * dVar9 + dVar6 + auVar17._0_8_;
        auVar20 = blendpd(auVar19,auVar17,2);
        dVar15 = (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.Z;
        dVar8 = dVar3 + dVar3;
        local_f8._s_0.Z = auVar25._0_8_ * dVar9 + dVar7 + auVar20._0_8_;
        local_f8._8_4_ = SUB84(dVar6,0);
        local_f8._s_0.X = dVar4 * dVar9 + dVar5 + auVar14._8_8_;
        local_f8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        dVar6 = dVar15 + dVar15;
        dVar4 = (this->ActiveSurfaceFrame).Rotation.field0_0x0._s_0.W;
        dVar9 = dVar6 * dVar2 + dVar4 * dVar8;
        dVar7 = dVar6 * dVar3 - dVar4 * (dVar2 + dVar2);
        local_b8._16_8_ = dVar6 * dVar2 - dVar4 * dVar8;
        dVar5 = dVar1 - ((dVar2 + dVar2) * dVar2 + dVar8 * dVar3);
        local_b8._8_8_ = dVar4 * dVar6 + dVar8 * dVar2;
        local_b8._0_8_ = dVar1 - (dVar6 * dVar15 + dVar8 * dVar3);
        local_e0._s_0.X = dVar9;
        local_e0._s_0.Y = dVar7;
        local_e0._s_0.Z = dVar5;
        UE::Geometry::VectorUtil::PlaneAngleSignedD<double>
                  ((TVector<double> *)local_b8,(TVector<double> *)&local_f8._s_0,
                   (TVector<double> *)&local_e0._s_0);
        __libm_sse2_sincos_();
        local_b8._16_8_ = extraout_XMM0_Qa * dVar5;
        local_b8._8_8_ = extraout_XMM0_Qa * dVar7;
        local_b8._0_8_ = extraout_XMM0_Qa * dVar9;
        UE::Geometry::TFrame3<double>::Rotate(this_00,(TQuaternion<double> *)local_b8);
      }
    }
  }
  return;
}

// UpdateChangeFromROI @ 14cc847b0

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
UDeformMeshPolygonsTool::UpdateChangeFromROI(UDeformMeshPolygonsTool *this,bool param_1)

{
  EGroupTopologyDeformationStrategy EVar1;
  FGroupTopologyLaplacianDeformer *pFVar2;
  FMeshVertexChangeBuilder *this_00;
  FDynamicMesh3 *pFVar3;
  FGroupTopologyLaplacianDeformer *pFVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_68;
  
  if (this->ActiveVertexChange != (FMeshVertexChangeBuilder *)0x0) {
    EVar1 = this->DeformationStrategy;
    pFVar3 = (FDynamicMesh3 *)
             (**(code **)(((this->DynamicMeshComponent).field0_0x0.DebugPtr)->_padding_ + 0xb38))();
    if (EVar1 == Laplacian) {
      pFVar2 = (this->LaplacianDeformer).Ptr;
    }
    else {
      pFVar2 = (FGroupTopologyLaplacianDeformer *)&this->LinearDeformer;
    }
    this_00 = this->ActiveVertexChange;
    pFVar4 = (FGroupTopologyLaplacianDeformer *)&this->LinearDeformer;
    local_68.Elements._0_8_ = 0;
    local_68.Elements._8_8_ = 0;
    local_68.Elements._32_8_ = 0;
    local_68.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
    local_68.Elements._48_8_ = _UNK_150631d98;
    local_68.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_68.HashSize = 0;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&local_68,(TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&pFVar2->_padding_
              );
    FMeshVertexChangeBuilder::SaveVertices<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
              (this_00,pFVar3,&local_68,!param_1);
    if (EVar1 == Laplacian) {
      pFVar4 = (this->LaplacianDeformer).Ptr;
    }
    FMeshVertexChangeBuilder::SaveOverlayNormals
              (this->ActiveVertexChange,pFVar3,
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&pFVar4->_padding_,!param_1)
    ;
  }
  return;
}

// UpdateQuickTransformer @ 14cc86300

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDeformMeshPolygonsTool::UpdateQuickTransformer(UDeformMeshPolygonsTool *this)

{
  UDeformMeshPolygonsTransformProperties *pUVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x2d8))();
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x398))(plVar3);
  cVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
  pUVar1 = (this->TransformProps).field0_0x0.DebugPtr;
  lVar4 = 0x9d0;
  if (cVar2 == '\x01') {
    lVar4 = 0x9d0;
    if (pUVar1->TransformMode != AxisRotation) {
      lVar4 = 0x480;
    }
                    /* WARNING: Could not recover jumptable at 0x00014cc8635a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)((longlong)&this->_padding_ + lVar4) + 0x18))
              ((longlong)&this->_padding_ + lVar4,&this->ActiveSurfaceFrame);
    return;
  }
  local_28 = *(undefined4 *)&(this->StartHitPosWorld).field0_0x0;
  uStack_24 = *(undefined4 *)((longlong)&(this->StartHitPosWorld).field0_0x0 + 4);
  uStack_20 = *(undefined4 *)((longlong)&(this->StartHitPosWorld).field0_0x0 + 8);
  uStack_1c = *(undefined4 *)((longlong)&(this->StartHitPosWorld).field0_0x0 + 0xc);
  if (pUVar1->TransformMode != AxisRotation) {
    lVar4 = 0x480;
  }
  local_18 = (this->StartHitPosWorld).field0_0x0._s_0.Z;
  plVar3 = (longlong *)((longlong)&this->_padding_ + lVar4);
  (**(code **)(*plVar3 + 0x10))(plVar3,&local_28);
  return;
}

// _getUObject @ 14cc8a450

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __thiscall UDeformMeshPolygonsTool::_getUObject(UDeformMeshPolygonsTool *this)

{
  return (UObject *)&this[-1].LinearDeformer.FaceEncodings;
}

// _getUObject`adjustor{256}' @ 14cc8a45c

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
   UDeformMeshPolygonsTool::_getUObject`adjustor{256}' (void)const __ptr64 */

UObject * __thiscall
UDeformMeshPolygonsTool::_getUObject_adjustor_256__(UDeformMeshPolygonsTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UDeformMeshPolygonsTool *)&this[-1].LinearDeformer.FaceVertsTemp.HashSize);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{152}' @ 14cc8a470

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
   UDeformMeshPolygonsTool::_getUObject`adjustor{152}' (void)const __ptr64 */

UObject * __thiscall
UDeformMeshPolygonsTool::_getUObject_adjustor_152__(UDeformMeshPolygonsTool *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UDeformMeshPolygonsTool *)
                       &this[-1].LinearDeformer.ModifiedOverlayNormals.Elements.field_0x10);
  return (UObject *)pUVar1;
}

