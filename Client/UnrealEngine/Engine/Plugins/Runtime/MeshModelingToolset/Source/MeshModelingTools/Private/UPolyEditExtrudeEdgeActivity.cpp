// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 32

// StaticClass @ 14cd42da0

UClass * __cdecl UPolyEditExtrudeEdgeActivity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditExtrudeEdgeActivity",
               &Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivity.InnerSingleton,
               StaticRegisterNativesUPolyEditExtrudeEdgeActivity,0x2f0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditExtrudeEdgeActivity>,
               InternalVTableHelperCtorCaller<UPolyEditExtrudeEdgeActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivity.InnerSingleton;
}

// UPolyEditExtrudeEdgeActivity @ 14cd4ffe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPolyEditExtrudeEdgeActivity * __thiscall
UPolyEditExtrudeEdgeActivity::UPolyEditExtrudeEdgeActivity
          (UPolyEditExtrudeEdgeActivity *this,FVTableHelper *param_1)

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
  
  UInteractiveToolActivity::UInteractiveToolActivity((UInteractiveToolActivity *)this,param_1);
  *(undefined ***)this = &_vftable__for__UInteractiveToolActivity__;
  this->bIsRunning = false;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.X = 0.0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.W = 1.0;
  (this->Settings).field0_0x0.DebugPtr = (UPolyEditExtrudeEdgeActivityProperties *)0x0;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  (this->ExtrudeFrameProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->ExtrudeFrameGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->SingleDirectionProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->SingleDirectionGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->PreviewGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Origin.field0_0x0._s_0.Y = (double)uVar9;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.X = 0.0;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.W = 1.0;
  (this->ExtrudeFrameForGizmoMeshSpace).InFrameScaleDirection.bIsSet = false;
  (this->ExtrudeFrameForGizmoMeshSpace).Scaling = 1.0;
  (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.W = 1.0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.Y = (double)uVar9;
  (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.W = 1.0;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&this->ActiveSelection);
  (this->SelectedEids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedEids).ArrayNum = 0;
  (this->SelectedEids).ArrayMax = 0;
  (this->GroupsToSetPerEid).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupsToSetPerEid).ArrayNum = 0;
  (this->GroupsToSetPerEid).ArrayMax = 0;
  (this->EidsToRender).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EidsToRender).ArrayNum = 0;
  (this->EidsToRender).ArrayMax = 0;
  (this->NewSelectionEids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewSelectionEids).ArrayNum = 0;
  (this->NewSelectionEids).ArrayMax = 0;
  this->bRevertedSelection = false;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CurrentMeshTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->CurrentMeshTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CurrentMeshTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->CurrentMeshTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CurrentMeshTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->CurrentMeshTransform).Scale3D.ZW.m128d_f64 = auVar8;
  this->bExtrudeDistanceWasNegative = false;
  return this;
}

// UPolyEditExtrudeEdgeActivity @ 14cd501b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPolyEditExtrudeEdgeActivity * __thiscall
UPolyEditExtrudeEdgeActivity::UPolyEditExtrudeEdgeActivity(UPolyEditExtrudeEdgeActivity *this)

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
  
  UInteractiveToolActivity::UInteractiveToolActivity((UInteractiveToolActivity *)this);
  *(undefined ***)this = &_vftable__for__UInteractiveToolActivity__;
  this->bIsRunning = false;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.X = 0.0;
  *(undefined ***)&this->field_0x30 = &_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.W = 1.0;
  (this->Settings).field0_0x0.DebugPtr = (UPolyEditExtrudeEdgeActivityProperties *)0x0;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  (this->ExtrudeFrameProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->ExtrudeFrameGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->SingleDirectionProxy).field0_0x0.DebugPtr = (UTransformProxy *)0x0;
  (this->SingleDirectionGizmo).field0_0x0.DebugPtr = (UCombinedTransformGizmo *)0x0;
  (this->PreviewGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Origin.field0_0x0._s_0.Y = (double)uVar9;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.X = 0.0;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.W = 1.0;
  (this->ExtrudeFrameForGizmoMeshSpace).InFrameScaleDirection.bIsSet = false;
  (this->ExtrudeFrameForGizmoMeshSpace).Scaling = 1.0;
  (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.W = 1.0;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.Y = (double)uVar9;
  (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.W = 1.0;
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&this->ActiveSelection);
  (this->SelectedEids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SelectedEids).ArrayNum = 0;
  (this->SelectedEids).ArrayMax = 0;
  (this->GroupsToSetPerEid).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupsToSetPerEid).ArrayNum = 0;
  (this->GroupsToSetPerEid).ArrayMax = 0;
  (this->EidsToRender).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EidsToRender).ArrayNum = 0;
  (this->EidsToRender).ArrayMax = 0;
  (this->NewSelectionEids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewSelectionEids).ArrayNum = 0;
  (this->NewSelectionEids).ArrayMax = 0;
  this->bRevertedSelection = false;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CurrentMeshTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->CurrentMeshTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CurrentMeshTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->CurrentMeshTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->CurrentMeshTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->CurrentMeshTransform).Scale3D.ZW.m128d_f64 = auVar8;
  this->bExtrudeDistanceWasNegative = false;
  return this;
}

// ~UPolyEditExtrudeEdgeActivity @ 14cd534a0

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
UPolyEditExtrudeEdgeActivity::~UPolyEditExtrudeEdgeActivity(UPolyEditExtrudeEdgeActivity *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UInteractiveToolActivity__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  pFVar1 = (this->NewSelectionEids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EidsToRender).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GroupsToSetPerEid).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SelectedEids).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&this->ActiveSelection);
  *(undefined ***)&this->field_0x30 = &___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  *(undefined ***)this = &___7UInteractiveToolActivity__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// operator() @ 14cd547d0

void __thiscall
`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_1>::operator()
          (void *this,UTransformProxy *param_1,TTransform<double> *param_2)

{
  longlong lVar1;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  lVar1 = *(longlong *)this;
  if (((*(char *)(lVar1 + 0x70) != '\0') && (*(longlong *)(lVar1 + 0x40) != 0)) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x40) + 0x40) != 0)) {
    local_20._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
    local_38._s_0.X = (param_2->Translation).XY.m128d_f64[0] - *(double *)(lVar1 + 0xd8);
    local_38._s_0.Z = local_20._s_0.Z - *(double *)(lVar1 + 0xe8);
    local_38._s_0.Y = (param_2->Translation).XY.m128d_f64[1] - *(double *)(lVar1 + 0xe0);
    UE::Geometry::TQuaternion<double>::InverseMultiply
              ((TQuaternion<double> *)(lVar1 + 0xf0),(TVector<double> *)&local_20._s_0,
               (TVector<double> *)&local_38._s_0);
    *(double *)(lVar1 + 0x128) = local_20._s_0.X;
    *(double *)(lVar1 + 0x130) = local_20._s_0.Y;
    *(double *)(lVar1 + 0x138) = local_20._s_0.Z;
    UMeshOpPreviewWithBackgroundCompute::InvalidateResult
              (*(UMeshOpPreviewWithBackgroundCompute **)
                (*(longlong *)(*(longlong *)this + 0x40) + 0x40));
  }
  return;
}

// operator() @ 14cd55690

void __thiscall
`UPolyEditExtrudeEdgeActivity::UpdateDrawnPreviewEdges'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMesh3 *param_1)

{
  int iVar1;
  UPreviewGeometry *this_00;
  longlong local_38;
  FDynamicMesh3 *local_30;
  code *local_28;
  longlong *local_20;
  FString local_18;
  
  local_38 = *(longlong *)this;
  local_20 = &local_38;
  this_00 = *(UPreviewGeometry **)(local_38 + 0x68);
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<``UPolyEditExtrudeEdgeActivity::UpdateDrawnPreviewEdges'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&>
             ::Call;
  iVar1 = *(int *)(local_38 + 0x260);
  local_30 = param_1;
  ::FString::FString(&local_18,L"NewBoundaries");
  UPreviewGeometry::CreateOrUpdateLineSet
            (this_00,&local_18,iVar1,
             (TFunctionRef<void___cdecl(int,TArray<FRenderableLine,TSizedDefaultAllocator<32>_>_&)>
              *)&local_28,-1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14cd56980

void __thiscall
`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_4>::operator()(void *this,double param_1)

{
  TVector<double> *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double *pdVar7;
  double *pdVar8;
  uint uVar9;
  uint uVar10;
  longlong local_res8;
  
  lVar6 = *(longlong *)this;
  if (*(char *)(lVar6 + 0x70) != '\0') {
    local_res8 = lVar6;
    if (*(int *)(*(longlong *)(lVar6 + 0x38) + 0xb0) == 1) {
      this_00 = (TVector<double> *)(lVar6 + 0x110);
      if (*(char *)(lVar6 + 0x2e0) != '\0') {
        uVar1 = *(undefined8 *)(lVar6 + 0x120);
        uVar9 = (uint)__xmm_80000000000000008000000000000000;
        uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
        (this_00->field0_0x0)._s_0.X =
             (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&this_00->field0_0x0 >> 0x20) ^
                              uVar10,(uint)*(undefined8 *)&this_00->field0_0x0 ^ uVar9);
        uVar2 = *(undefined8 *)(lVar6 + 0x118);
        *(undefined8 *)(lVar6 + 0x120) =
             CONCAT44((uint)((ulonglong)uVar1 >> 0x20) ^ uVar10,(uint)uVar1 ^ uVar9);
        *(undefined8 *)(lVar6 + 0x118) =
             CONCAT44((uint)((ulonglong)uVar2 >> 0x20) ^ uVar10,(uint)uVar2 ^ uVar9);
      }
      pdVar8 = (double *)(lVar6 + 0x120);
      pdVar7 = (double *)(lVar6 + 0x118);
      UE::Math::TVector<double>::Normalize(this_00,__real_3e45798ee0000000);
      uVar1 = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
      if ((((this_00->field0_0x0)._s_0.X == 0.0) && (*pdVar7 == 0.0)) && (*pdVar8 == 0.0)) {
        (this_00->field0_0x0)._s_0.X = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
        *(undefined8 *)(lVar6 + 0x118) = uVar1;
        *(double *)(lVar6 + 0x120) = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
      }
      dVar3 = *(double *)(*(longlong *)(lVar6 + 0x38) + 0xb8);
      dVar4 = *pdVar7;
      dVar5 = *pdVar8;
      (this_00->field0_0x0)._s_0.X = dVar3 * (this_00->field0_0x0)._s_0.X;
      *pdVar7 = dVar3 * dVar4;
      *pdVar8 = dVar3 * dVar5;
    }
    else {
      ``UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_4>::operator()'::__l2::<lambda_1>::
      operator()(&local_res8,(TVector<double> *)(lVar6 + 0x128));
    }
    pdVar7 = (double *)(*(longlong *)(*(longlong *)this + 0x38) + 0xb8);
    *(bool *)(*(longlong *)this + 0x2e0) = *pdVar7 <= 0.0 && *pdVar7 != 0.0;
    if (*(char *)(*(longlong *)this + 0x70) != '\0') {
      UMeshOpPreviewWithBackgroundCompute::InvalidateResult
                (*(UMeshOpPreviewWithBackgroundCompute **)
                  (*(longlong *)(*(longlong *)this + 0x40) + 0x40));
    }
  }
  return;
}

// operator() @ 14cd56af0

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
`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_5>::operator()
          (void *this,EPolyEditExtrudeEdgeDistanceMode param_1)

{
  UPolyEditExtrudeEdgeActivity *this_00;
  UPolyEditExtrudeEdgeActivityProperties *pUVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  TVector<double>_u_0 local_28;
  
  this_00 = *(UPolyEditExtrudeEdgeActivity **)this;
  if (this_00->bIsRunning != false) {
    pUVar1 = (this_00->Settings).field0_0x0.DebugPtr;
    if (pUVar1->DistanceMode == Fixed) {
      if (pUVar1->DirectionMode == SingleDirection) {
        local_28._s_0.Z = (this_00->SingleDirectionVectorWorldSpace).field0_0x0._s_0.Z;
        local_28._s_0.X = (this_00->SingleDirectionVectorWorldSpace).field0_0x0._s_0.X;
        local_28._s_0.Y = (this_00->SingleDirectionVectorWorldSpace).field0_0x0._s_0.Y;
      }
      else {
        UE::Geometry::operator*<double>
                  ((TVector<double> *)&local_28._s_0,
                   &(this_00->ExtrudeFrameForGizmoWorldSpace).Rotation,
                   &this_00->ParamsInWorldExtrudeFrame);
      }
      auVar2._0_8_ = local_28._s_0.Y * local_28._s_0.Y;
      auVar2._8_8_ = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_28._s_0.X * local_28._s_0.X + auVar2._0_8_ +
                     local_28._s_0.Z * local_28._s_0.Z;
      auVar3 = sqrtpd(auVar2,auVar3);
      pUVar1->Distance = auVar3._0_8_;
      UPolyEditExtrudeEdgeActivity::UpdateGizmoVisibility(*(UPolyEditExtrudeEdgeActivity **)this);
      return;
    }
    UPolyEditExtrudeEdgeActivity::UpdateGizmosFromCurrentParams(this_00);
    UPolyEditExtrudeEdgeActivity::UpdateGizmoVisibility(*(UPolyEditExtrudeEdgeActivity **)this);
  }
  return;
}

// ApplyExtrude @ 14cd5d650

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

void __thiscall UPolyEditExtrudeEdgeActivity::ApplyExtrude(UPolyEditExtrudeEdgeActivity *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UPolyEditActivityContext *pUVar4;
  longlong *plVar5;
  FDynamicMeshChange *this_00;
  code *pcVar6;
  bool bVar7;
  FDynamicMesh3 *pFVar8;
  UObject *pUVar9;
  longlong lVar10;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar11;
  undefined8 uVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStackY_238 [32];
  undefined1 local_208 [4];
  int local_204;
  FMeshEdgesFromTriangleSubIndices local_200;
  int local_1f0 [6];
  FGroupTopologySelection local_1d8;
  FDynamicMeshChangeTracker local_e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_238;
  pFVar8 = UPreviewMesh::GetMesh
                     ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr
                       )->PreviewMesh).field0_0x0.DebugPtr);
  local_200.EdgeTriIndexPairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_200.EdgeTriIndexPairs.ArrayNum = 0;
  local_200.EdgeTriIndexPairs.ArrayMax = 0;
  UE::Geometry::FMeshEdgesFromTriangleSubIndices::
  InitializeFromEdgeIDs<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&local_200,pFVar8,&this->NewSelectionEids);
  UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker
            (&local_e8,(((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh).Object);
  UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_e8);
  pUVar4 = (this->ActivityContext).field0_0x0.DebugPtr;
  if ((pUVar4->CurrentMesh).Object == (FDynamicMesh3 *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  UE::Geometry::FDynamicMesh3::Copy((pUVar4->CurrentMesh).Object,pFVar8,true,true,true,true);
  if (this->bRevertedSelection == false) {
    UMeshTopologySelectionMechanic::SetSelection
              ((UMeshTopologySelectionMechanic *)
               (((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.
               DebugPtr,&this->ActiveSelection,false);
    this->bRevertedSelection = true;
  }
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
  (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x10))
            (lVar10 + 0x28,&PolyEditExtrudeEdgeActivityLocals::TransactionLabel);
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_1d8);
  pUVar4 = (this->ActivityContext).field0_0x0.DebugPtr;
  TVar11 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_e8);
  UE::Core::Private::Function::CheckCallable(*(void **)&pUVar4->EmitCurrentMeshChangeAndUpdate);
  pcVar6 = *(code **)&pUVar4->EmitCurrentMeshChangeAndUpdate;
  plVar5 = *(longlong **)&(pUVar4->EmitCurrentMeshChangeAndUpdate).field_0x28;
  plVar13 = (longlong *)&(pUVar4->EmitCurrentMeshChangeAndUpdate).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar13 = plVar5;
  }
  uVar12 = (**(code **)(*plVar13 + 8))();
  (*pcVar6)(uVar12,&PolyEditExtrudeEdgeActivityLocals::TransactionLabel,TVar11.Ptr,&local_1d8);
  this_00 = (FDynamicMeshChange *)((TVar11.Ptr)->OldVertices).AllocatorInstance.Data;
  if (this_00 != (FDynamicMeshChange *)0x0) {
    UE::Geometry::FDynamicMeshChange::~FDynamicMeshChange(this_00);
    ::operator_delete(this_00,0x48);
  }
  UMeshTopologySelectionMechanic::BeginChange
            ((UMeshTopologySelectionMechanic *)
             (((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.DebugPtr)
  ;
  pUVar4 = (this->ActivityContext).field0_0x0.DebugPtr;
  if ((pUVar4->CurrentMesh).Object == (FDynamicMesh3 *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  UE::Geometry::FMeshEdgesFromTriangleSubIndices::
  GetEdgeIDs<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&local_200,(pUVar4->CurrentMesh).Object,&this->NewSelectionEids);
  pFVar14 = (this->NewSelectionEids).AllocatorInstance.Data;
  iVar2 = (this->NewSelectionEids).ArrayNum;
  pFVar1 = pFVar14 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->NewSelectionEids).ArrayNum != iVar2) {
      local_208[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_208);
    }
    if (pFVar14 == pFVar1) break;
    pUVar4 = (this->ActivityContext).field0_0x0.DebugPtr;
    iVar3 = *(int *)pFVar14;
    if ((pUVar4->CurrentTopology).Object == (FGroupTopology *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_204 = UE::Geometry::FGroupTopology::FindGroupEdgeID
                          ((pUVar4->CurrentTopology).Object,iVar3);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int>
              (&local_1d8.SelectedEdgeIDs,local_1f0,(bool *)&local_204);
    pFVar14 = pFVar14 + 4;
  }
  UMeshTopologySelectionMechanic::SetSelection
            ((UMeshTopologySelectionMechanic *)
             (((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.DebugPtr,
             &local_1d8,true);
  UMeshTopologySelectionMechanic::EndChangeAndEmitIfModified
            ((UMeshTopologySelectionMechanic *)
             (((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.DebugPtr)
  ;
  pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  lVar10 = (**(code **)(*(longlong *)pUVar9 + 0x2d8))(pUVar9);
  (**(code **)(*(longlong *)(lVar10 + 0x28) + 0x18))(lVar10 + 0x28);
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
  if (local_200.EdgeTriIndexPairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_200.EdgeTriIndexPairs.AllocatorInstance.Data);
  }
  return;
}

// CanAccept @ 14cd62fb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPolyEditExtrudeEdgeActivity::CanAccept(UPolyEditExtrudeEdgeActivity *this)

{
  return true;
}

// CanStart @ 14cd639c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPolyEditExtrudeEdgeActivity::CanStart(UPolyEditExtrudeEdgeActivity *this)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  TObjectPtr<UPolyEditActivityContext>_u_0 TVar4;
  longlong lVar5;
  UPolyEditActivityContext *pUVar6;
  code *pcVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  int iVar18;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  longlong *local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  TVar4 = (this->ActivityContext).field0_0x0;
  if (TVar4.DebugPtr != (UPolyEditActivityContext *)0x0) {
    lVar5 = *(longlong *)((longlong)TVar4 + 0x70);
    if (*(int *)(lVar5 + 1000) != *(int *)(lVar5 + 0x414)) {
      local_res20 = (longlong *)(lVar5 + 0x3e0);
      uVar11 = 1;
      pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar5 + 0x3f0);
      iVar3 = *(int *)(lVar5 + 0x408);
      iVar16 = 0;
      iVar18 = 0;
      iVar12 = 0;
      if (iVar3 != 0) {
        pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x400);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x400) ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar17 = pTVar1;
        }
        uVar15 = *(uint *)(pTVar17->AllocatorInstance).InlineData;
        while (uVar15 == 0) {
          lVar13 = (longlong)iVar16;
          iVar18 = iVar18 + 0x20;
          iVar16 = iVar16 + 1;
          iVar12 = iVar3;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_14cd63a8e;
          uVar15 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uVar11 = -uVar15 & uVar15;
        uVar2 = (ulonglong)uVar11 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_res10 = (int)lVar13;
        iVar12 = iVar18 + -1 + local_res10;
        if (iVar3 < iVar12) {
          iVar12 = iVar3;
        }
      }
LAB_14cd63a8e:
      uVar15 = *(uint *)(lVar5 + 0x408);
      uVar14 = uVar15 & 0xffffffe0;
      TStack_70._padding_ = CONCAT44(uVar11,iVar16);
      TStack_70.CurrentBitIndex = iVar12;
      TStack_70.UnvisitedBitMask = 0xffffffff;
      TStack_70._28_4_ = iVar12;
      TStack_70.BaseBitIndex = iVar18;
      uStack_50 = CONCAT44(uStack_7c,*(int *)(lVar5 + 1000) - *(int *)(lVar5 + 0x414));
      iVar16 = (int)uVar15 >> 5;
      TStack_70.Array = pTVar1;
      if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        uVar10 = (*pcVar7)();
        return (bool)uVar10;
      }
      plVar8 = local_res20;
      uVar11 = *(uint *)(lVar5 + 0x408);
      if (uVar15 != uVar11) {
        pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x400);
        if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x400) ==
            (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
          pTVar17 = pTVar1;
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) &
                 *(uint *)((pTVar17->AllocatorInstance).InlineData + (longlong)iVar16 * 4);
        while (uVar15 == 0) {
          lVar13 = (longlong)iVar16;
          uVar14 = uVar14 + 0x20;
          iVar16 = iVar16 + 1;
          uVar15 = uVar11;
          if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16)
          goto LAB_14cd63b91;
          uVar15 = *(uint *)((pTVar17->AllocatorInstance).InlineData + lVar13 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        local_res18 = (int)lVar13;
        uVar15 = local_res18 + -1 + uVar14;
        if ((int)uVar11 < (int)uVar15) {
          uVar15 = uVar11;
        }
      }
LAB_14cd63b91:
      while( true ) {
        if (*(int *)(lVar5 + 1000) - *(int *)(lVar5 + 0x414) != (int)uStack_50) {
          local_res8[0] = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (((TStack_70.CurrentBitIndex == uVar15) && (TStack_70.Array == pTVar1)) &&
           ((longlong *)(lVar5 + 0x3e0) == plVar8)) break;
        pUVar6 = (this->ActivityContext).field0_0x0.DebugPtr;
        iVar3 = *(int *)(*(longlong *)(lVar5 + 0x3e0) + (longlong)TStack_70.CurrentBitIndex * 0xc);
        if (((pUVar6->CurrentTopology).Object == (FGroupTopology *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar9)) {
          pcVar7 = (code *)swi(3);
          uVar10 = (*pcVar7)();
          return (bool)uVar10;
        }
        bVar9 = UE::Geometry::FGroupTopology::IsBoundaryEdge((pUVar6->CurrentTopology).Object,iVar3)
        ;
        if (bVar9) {
          return true;
        }
        TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
      }
    }
  }
  return false;
}

// ConvertToNewDirectionMode @ 14cd659c0

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
UPolyEditExtrudeEdgeActivity::ConvertToNewDirectionMode
          (UPolyEditExtrudeEdgeActivity *this,bool param_1)

{
  TQuaternion<double> *this_00;
  double dVar1;
  double dVar2;
  double dVar3;
  UCombinedTransformGizmo *this_01;
  TVector<double> *pTVar4;
  TTransform<double> *pTVar5;
  undefined1 auStack_168 [32];
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  TTransform<double> local_118;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_168;
  this_00 = &(this->ExtrudeFrameForGizmoWorldSpace).Rotation;
  if (param_1) {
    pTVar4 = UE::Geometry::operator*<double>
                       ((TVector<double> *)&local_130._s_0,this_00,&this->ParamsInWorldExtrudeFrame)
    ;
    dVar1 = (pTVar4->field0_0x0)._s_0.Y;
    dVar2 = (pTVar4->field0_0x0)._s_0.Z;
    (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
    (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.Y = dVar1;
    (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.Z = dVar2;
    pTVar5 = UCombinedTransformGizmo::GetGizmoTransform
                       ((this->ExtrudeFrameGizmo).field0_0x0.DebugPtr,&local_b8);
    local_118.Rotation.XY.m128d_f64[0] = (this_00->field0_0x0)._s_0.X;
    local_118.Rotation.XY.m128d_f64[1] =
         (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Y;
    local_118.Rotation.ZW.m128d_f64[0] =
         (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Z;
    local_118.Rotation.ZW.m128d_f64[1] =
         (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.W;
    local_118.Translation.XY.m128d_f64 = *&(pTVar5->Translation).XY.m128d_f64;
    local_118.Translation.ZW.m128d_f64[0] = (pTVar5->Translation).ZW.m128d_f64[0];
    local_118.Translation.ZW.m128d_f64[1] = 0.0;
    local_118.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_118.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    local_118.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_118.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    UCombinedTransformGizmo::ReinitializeGizmoTransform
              ((this->SingleDirectionGizmo).field0_0x0.DebugPtr,&local_118,true);
  }
  else {
    local_148._s_0.X = (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.X;
    local_148._s_0.Y = (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.Y;
    local_148._s_0.Z = (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.Z;
    UE::Geometry::TQuaternion<double>::InverseMultiply
              (this_00,(TVector<double> *)&local_130._s_0,(TVector<double> *)&local_148._s_0);
    this_01 = (this->SingleDirectionGizmo).field0_0x0.DebugPtr;
    (this->ParamsInWorldExtrudeFrame).field0_0x0._s_0.X = local_130._s_0.X;
    (this->ParamsInWorldExtrudeFrame).field0_0x0._s_0.Y = local_130._s_0.Y;
    (this->ParamsInWorldExtrudeFrame).field0_0x0._s_0.Z = local_130._s_0.Z;
    (this->ParamsInWorldExtrudeFrame).field0_0x0._s_0.Y = 0.0;
    pTVar5 = UCombinedTransformGizmo::GetGizmoTransform(this_01,&local_b8);
    dVar1 = (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.X;
    dVar2 = (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.Y;
    dVar3 = (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.Z;
    local_130._s_0.Z = (pTVar5->Translation).ZW.m128d_f64[0];
    local_148._s_0.X = (pTVar5->Translation).XY.m128d_f64[0] - dVar1;
    local_148._s_0.Y = (pTVar5->Translation).XY.m128d_f64[1] - dVar2;
    local_148._s_0.Z = local_130._s_0.Z - dVar3;
    UE::Geometry::TQuaternion<double>::InverseMultiply
              (this_00,(TVector<double> *)&local_130._s_0,(TVector<double> *)&local_148._s_0);
    local_130._s_0.Y = 0.0;
    pTVar4 = UE::Geometry::operator*<double>
                       ((TVector<double> *)&local_148._s_0,this_00,
                        (TVector<double> *)&local_130._s_0);
    local_118.Rotation.XY.m128d_f64[0] = (this_00->field0_0x0)._s_0.X;
    local_118.Rotation.XY.m128d_f64[1] =
         (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Y;
    dVar2 = dVar2 + (pTVar4->field0_0x0)._s_0.Y;
    local_118.Translation.ZW.m128d_f64[0] = dVar3 + (pTVar4->field0_0x0)._s_0.Z;
    local_118.Rotation.ZW.m128d_f64[0] =
         (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Z;
    local_118.Rotation.ZW.m128d_f64[1] =
         (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.W;
    local_118.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar2,0);
    local_118.Translation.XY.m128d_f64[0] = dVar1 + (pTVar4->field0_0x0)._s_0.X;
    local_118.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
    local_118.Translation.ZW.m128d_f64[1] = 0.0;
    local_118.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    local_118.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
    local_118.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    local_118.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
    UCombinedTransformGizmo::ReinitializeGizmoTransform
              ((this->ExtrudeFrameGizmo).field0_0x0.DebugPtr,&local_118,true);
  }
  UpdateGizmoVisibility(this);
  if (this->bIsRunning != false) {
    UMeshOpPreviewWithBackgroundCompute::InvalidateResult
              ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
  }
  return;
}

// End @ 14cd689e0

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

EToolActivityEndResult __thiscall
UPolyEditExtrudeEdgeActivity::End(UPolyEditExtrudeEdgeActivity *this,EToolShutdownType param_1)

{
  UPolyEditActivityContext *pUVar1;
  code *pcVar2;
  bool bVar3;
  EToolActivityEndResult EVar4;
  
  if (this->bIsRunning != false) {
    if (param_1 == Cancel) {
      EndInternal(this);
      pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
      UPreviewMesh::UpdatePreview
                ((((pUVar1->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
                 (pUVar1->CurrentMesh).Object,FullUpdate,AllVertexAttribs);
      return Cancelled;
    }
    UMeshOpPreviewWithBackgroundCompute::CancelCompute
              ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
    ApplyExtrude(this);
    EndInternal(this);
    return Completed;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_8341837429644197511>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditExtrudeEdgeActivity.cpp"
                     ,0x179,"bIsRunning");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  EndInternal(this);
  return ErrorDuringEnd;
}

// EndInternal @ 14cd69040

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPolyEditExtrudeEdgeActivity::EndInternal(UPolyEditExtrudeEdgeActivity *this)

{
  UInteractiveTool *pUVar1;
  UInteractiveToolManager *this_00;
  UInteractiveGizmoManager *pUVar2;
  
  if (this->bRevertedSelection == false) {
    UMeshTopologySelectionMechanic::SetSelection
              ((UMeshTopologySelectionMechanic *)
               (((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.
               DebugPtr,&this->ActiveSelection,false);
    this->bRevertedSelection = true;
  }
  UMeshOpPreviewWithBackgroundCompute::ClearOpFactory
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
              OnOpCompleted,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
              OnMeshUpdated,this);
  (**(code **)(*(longlong *)this + 0x2d8))(this,(this->Settings).field0_0x0.DebugPtr,0);
  pUVar1 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
  this_00 = (UInteractiveToolManager *)(**(code **)(pUVar1->_padding_ + 0x2d8))(pUVar1);
  pUVar2 = UInteractiveToolManager::GetPairedGizmoManager(this_00);
  (**(code **)(pUVar2->_padding_ + 0x2e8))(pUVar2,this);
  UPreviewGeometry::Disconnect((this->PreviewGeometry).field0_0x0.DebugPtr);
  (this->PreviewGeometry).field0_0x0.DebugPtr = (UPreviewGeometry *)0x0;
  this->bIsRunning = false;
  return;
}

// GatherSelectedEids @ 14cd6a6a0

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

void __thiscall UPolyEditExtrudeEdgeActivity::GatherSelectedEids(UPolyEditExtrudeEdgeActivity *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  int *piVar5;
  uint uVar6;
  UPolyEditActivityContext *pUVar7;
  FGroupTopology *pFVar8;
  UPolyEditActivityContext *pUVar9;
  FDynamicMesh3 *pFVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  UPolyEditExtrudeEdgeActivity *pUVar13;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar18;
  byte bVar19;
  longlong lVar20;
  uint *puVar21;
  ForElementType<FSetElementId> FVar22;
  FScriptContainerElement *pFVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  int iVar26;
  undefined1 *puVar27;
  int iVar28;
  uint uVar29;
  undefined1 auStackY_1c8 [32];
  int local_178;
  undefined1 local_174;
  undefined1 local_173 [3];
  uint local_170;
  undefined4 local_16c;
  uint local_168;
  uint local_164;
  TPairInitializer<int_const_&,int_const_&> local_160;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_150;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  undefined4 uStack_13c;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_130;
  undefined8 uStack_128;
  TBitArray<FDefaultBitArrayAllocator> *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  int local_fc;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_f8;
  UPolyEditExtrudeEdgeActivity *local_f0;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  uint *local_b8;
  int *local_b0;
  undefined4 local_8c;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pTVar1 = &this->SelectedEids;
  iVar26 = 0;
  (this->SelectedEids).ArrayNum = 0;
  local_f0 = this;
  if ((this->SelectedEids).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,&(this->SelectedEids).ArrayMax);
  }
  pTVar2 = &this->GroupsToSetPerEid;
  (this->GroupsToSetPerEid).ArrayNum = 0;
  if ((this->GroupsToSetPerEid).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,&(this->GroupsToSetPerEid).ArrayMax);
  }
  pUVar7 = (this->ActivityContext).field0_0x0.DebugPtr;
  if (((pUVar7->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  local_f8 = &(this->ActiveSelection).SelectedEdgeIDs;
  puVar3 = &(this->ActiveSelection).SelectedEdgeIDs.Elements.field_0x10;
  local_178 = ((pUVar7->CurrentMesh).Object)->GroupIDCounter;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_110._0_4_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  iVar17 = *(int *)&(this->ActiveSelection).SelectedEdgeIDs.Elements.field_0x28;
  uStack_118._4_4_ = 0;
  uVar16 = 1;
  if (iVar17 != 0) {
    puVar21 = *(uint **)&(this->ActiveSelection).SelectedEdgeIDs.Elements.field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)puVar3;
    }
    uVar16 = *puVar21;
    iVar26 = 0;
    while (uVar16 == 0) {
      lVar20 = (longlong)iVar26;
      local_110._0_4_ = (int)local_110 + 0x20;
      iVar26 = iVar26 + 1;
      uStack_118._4_4_ = iVar17;
      uVar16 = 1;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar26) goto LAB_14cd6a83e;
      uVar16 = puVar21[lVar20 + 1];
    }
    uVar16 = -uVar16 & uVar16;
    uVar4 = (ulonglong)uVar16 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_100 = (int)lVar20;
    uStack_118._4_4_ = (int)local_110 + -1 + local_100;
    if (iVar17 < uStack_118._4_4_) {
      uStack_118._4_4_ = iVar17;
    }
  }
LAB_14cd6a83e:
  local_130 = &(this->ActiveSelection).SelectedEdgeIDs;
  iStack_108 = *(int *)&(this->ActiveSelection).SelectedEdgeIDs.Elements.field_0x8 -
               *(int *)&(this->ActiveSelection).SelectedEdgeIDs.Elements.field_0x34;
  uVar29 = *(uint *)&(this->ActiveSelection).SelectedEdgeIDs.Elements.field_0x28;
  iVar28 = (int)uVar29 >> 5;
  bVar19 = (byte)uVar29 & 0x1f;
  local_160.Value._4_4_ = 1 << bVar19;
  uVar25 = uVar29 & 0xffffffe0;
  uStack_128 = CONCAT44(uVar16,iVar26);
  uVar16 = -1 << bVar19;
  uStack_118._0_4_ = 0xffffffff;
  local_110._4_4_ = local_8c;
  TStack_e0._padding_ = uStack_128;
  uStack_c0 = CONCAT44(uStack_104,iStack_108);
  TStack_e0.UnvisitedBitMask = 0xffffffff;
  TStack_e0.CurrentBitIndex = uStack_118._4_4_;
  TStack_e0.BaseBitIndex = (int)local_110;
  TStack_e0._28_4_ = local_8c;
  local_160.Value._0_4_ = iVar28;
  pTStack_150 = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  local_148 = uVar16;
  uStack_144 = uVar29;
  uStack_140 = uVar25;
  local_e8 = local_130;
  TStack_e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar3;
  if ((((int)uVar29 < 0) || (iVar17 < (int)uVar29)) &&
     (local_168 = iVar28, local_120 = (TBitArray<FDefaultBitArrayAllocator> *)puVar3,
     bVar15 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar15)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar6 = *(uint *)&(this->ActiveSelection).SelectedEdgeIDs.Elements.field_0x28;
  if (uVar29 != uVar6) {
    puVar27 = *(undefined1 **)&(this->ActiveSelection).SelectedEdgeIDs.Elements.field_0x20;
    if (puVar27 == (undefined1 *)0x0) {
      puVar27 = puVar3;
    }
    uVar16 = uVar16 & *(uint *)(puVar27 + (longlong)iVar28 * 4);
    while (uVar16 == 0) {
      uStack_140 = uVar25 + 0x20;
      local_160.Value._0_4_ = iVar28 + 1;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_160.Value)
      goto LAB_14cd6a98a;
      uVar16 = *(uint *)(puVar27 + (longlong)iVar28 * 4 + 4);
      local_148 = 0xffffffff;
      iVar28 = (int)local_160.Value;
      uVar25 = uStack_140;
    }
    local_160.Value._4_4_ = -uVar16 & uVar16;
    uVar4 = (ulonglong)local_160.Value._4_4_ * 2 + 1;
    lVar20 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_fc = (int)lVar20;
    uStack_144 = local_fc + -1 + uVar25;
    if ((int)uVar6 < (int)uStack_144) {
LAB_14cd6a98a:
      uStack_144 = uVar6;
    }
  }
  uStack_128 = CONCAT44(local_160.Value._4_4_,(int)local_160.Value);
  uStack_118 = CONCAT44(uStack_144,local_148);
  local_110 = CONCAT44(uStack_13c,uStack_140);
  local_120 = pTStack_150;
  local_138 = pTStack_150;
  local_168 = uStack_144;
  do {
    pTVar14 = local_e8;
    uVar16 = local_168;
    if (*(int *)&(local_e8->Elements).field_0x8 - *(int *)&(local_e8->Elements).field_0x34 !=
        (int)uStack_c0) {
      local_174 = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_174);
    }
    pUVar13 = local_f0;
    if (((TStack_e0.CurrentBitIndex == uVar16) && (TStack_e0.Array == local_138)) &&
       (pTVar14 == local_f8)) {
      local_88.HashSize = 0;
      if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_88.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_88.Elements);
      return;
    }
    pUVar7 = (local_f0->ActivityContext).field0_0x0.DebugPtr;
    uVar16 = *(uint *)(*(longlong *)&pTVar14->Elements + (longlong)TStack_e0.CurrentBitIndex * 0xc);
    if (((pUVar7->CurrentTopology).Object == (FGroupTopology *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    bVar15 = UE::Geometry::FGroupTopology::IsBoundaryEdge((pUVar7->CurrentTopology).Object,uVar16);
    if (bVar15) {
      pUVar7 = (pUVar13->ActivityContext).field0_0x0.DebugPtr;
      pFVar8 = (pUVar7->CurrentTopology).Object;
      if (pUVar7->bTriangleMode == false) {
        if ((pFVar8 == (FGroupTopology *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pTVar18 = UE::Geometry::FGroupTopology::GetGroupEdgeEdges
                            ((pUVar7->CurrentTopology).Object,uVar16);
        pFVar24 = (pTVar18->AllocatorInstance).Data;
        iVar26 = pTVar18->ArrayNum;
        pFVar23 = pFVar24 + (longlong)iVar26 * 4;
        while( true ) {
          if (pTVar18->ArrayNum != iVar26) {
            local_173[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_173);
          }
          if (pFVar24 == pFVar23) break;
          local_16c = *(undefined4 *)pFVar24;
          pFVar11 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar11 <= (FScriptContainerElement *)&local_16c) &&
              ((FScriptContainerElement *)&local_16c <
               pFVar11 + (longlong)(this->SelectedEids).ArrayMax * 4)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar17 = (this->SelectedEids).ArrayNum;
          if (iVar17 == (this->SelectedEids).ArrayMax) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar1->AllocatorInstance,&(this->SelectedEids).ArrayMax);
          }
          (this->SelectedEids).ArrayNum = iVar17 + 1;
          *(undefined4 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_16c;
          pFVar11 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar11 <= (FScriptContainerElement *)&local_178) &&
              ((FScriptContainerElement *)&local_178 <
               pFVar11 + (longlong)(this->GroupsToSetPerEid).ArrayMax * 4)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          iVar17 = (this->GroupsToSetPerEid).ArrayNum;
          if (iVar17 == (this->GroupsToSetPerEid).ArrayMax) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar2->AllocatorInstance,&(this->GroupsToSetPerEid).ArrayMax
                               );
          }
          pFVar24 = pFVar24 + 4;
          (this->GroupsToSetPerEid).ArrayNum = iVar17 + 1;
          *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar17 * 4) = local_178;
        }
        local_178 = local_178 + 1;
      }
      else {
        if ((pFVar8 == (FGroupTopology *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar8 = (pUVar7->CurrentTopology).Object;
        uVar29 = 0;
        uVar25 = uVar29;
        if ((int)uVar16 < (pFVar8->Edges).ArrayNum) {
          uVar25 = ~uVar16 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar23 = (pFVar8->Edges).AllocatorInstance.Data;
        if ((*(int *)(pFVar23 + (longlong)(int)uVar16 * 0x50 + 0x28) < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        piVar5 = &(this->SelectedEids).ArrayMax;
        local_170 = **(uint **)(pFVar23 + (longlong)(int)uVar16 * 0x50 + 0x20);
        pFVar23 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar23 <= (FScriptContainerElement *)&local_170) &&
            ((FScriptContainerElement *)&local_170 < pFVar23 + (longlong)*piVar5 * 4)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar26 = (this->SelectedEids).ArrayNum;
        if (iVar26 == *piVar5) {
          iVar26 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar1->AllocatorInstance,piVar5);
        }
        (this->SelectedEids).ArrayNum = iVar26 + 1;
        *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar26 * 4) = local_170;
        pUVar7 = (pUVar13->ActivityContext).field0_0x0.DebugPtr;
        if (((pUVar7->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pUVar9 = (pUVar13->ActivityContext).field0_0x0.DebugPtr;
        uVar16 = *(uint *)(*(longlong *)
                            ((((pUVar7->CurrentMesh).Object)->Edges).Blocks.AllocatorInstance.Data +
                            (ulonglong)(local_170 >> 9) * 8) + 8 +
                          (ulonglong)(local_170 & 0x1ff) * 0x10);
        if (((pUVar9->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pFVar10 = (pUVar9->CurrentMesh).Object;
        if ((pFVar10->TriangleGroups).bIsSet == false) {
          uVar29 = 0xffffffff;
        }
        else if ((-1 < (int)uVar16) &&
                ((int)uVar16 <
                 (int)((pFVar10->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                      (pFVar10->TriangleRefCounts).RefCounts.CurBlockUsed))) {
          lVar20 = (ulonglong)(uVar16 >> 9) * 8;
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar10->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + lVar20) + (ulonglong)(uVar16 & 0x1ff) * 2) - 1U) < 0xfffe
             ) {
            uVar29 = *(uint *)(*(longlong *)
                                ((pFVar10->TriangleGroups).TypedValue.Blocks.AllocatorInstance.Data
                                + lVar20) + (ulonglong)(uVar16 & 0x1ff) * 4);
          }
        }
        local_164 = uVar29;
        if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
          FVar22 = (ForElementType<FSetElementId>)&local_88.Hash;
          if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar22 = local_88.Hash.SecondaryData;
          }
          uVar16 = *(uint *)((longlong)FVar22 + (ulonglong)(local_88.HashSize - 1U & uVar29) * 4);
          while (uVar16 != 0xffffffff) {
            puVar21 = (uint *)((longlong)(int)uVar16 * 0x10 + local_88.Elements._0_8_);
            if (*puVar21 == uVar29) {
              pFVar23 = (FScriptContainerElement *)(puVar21 + 1);
              if (puVar21 == (uint *)0x0) {
                pFVar23 = (FScriptContainerElement *)0x0;
              }
              if (pFVar23 != (FScriptContainerElement *)0x0) goto LAB_14cd6ad58;
              break;
            }
            uVar16 = puVar21[2];
          }
        }
        local_b8 = &local_164;
        local_b0 = &local_178;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_const_&>_>(&local_88,&local_160,(bool *)&local_b8);
        pFVar23 = (FScriptContainerElement *)
                  (local_88.Elements._0_8_ + 4 + (longlong)(int)local_160.Key * 0x10);
        local_178 = local_178 + 1;
LAB_14cd6ad58:
        pFVar24 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar24 <= pFVar23) &&
            (pFVar23 < pFVar24 + (longlong)(this->GroupsToSetPerEid).ArrayMax * 4)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar15)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar26 = (this->GroupsToSetPerEid).ArrayNum;
        if (iVar26 == (this->GroupsToSetPerEid).ArrayMax) {
          iVar26 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar2->AllocatorInstance,&(this->GroupsToSetPerEid).ArrayMax);
        }
        (this->GroupsToSetPerEid).ArrayNum = iVar26 + 1;
        *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar26 * 4) = *(int *)pFVar23;
      }
    }
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  } while( true );
}

// GetPrivateStaticClass @ 14cd6dce0

UClass * __cdecl UPolyEditExtrudeEdgeActivity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditExtrudeEdgeActivity",
               &Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivity.InnerSingleton,
               StaticRegisterNativesUPolyEditExtrudeEdgeActivity,0x2f0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditExtrudeEdgeActivity>,
               InternalVTableHelperCtorCaller<UPolyEditExtrudeEdgeActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditExtrudeEdgeActivity.InnerSingleton;
}

// HasAccept @ 14cd6fa40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPolyEditExtrudeEdgeActivity::HasAccept(UPolyEditExtrudeEdgeActivity *this)

{
  return true;
}

// IsRunning @ 14cd71b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UPolyEditExtrudeEdgeActivity::IsRunning(UPolyEditExtrudeEdgeActivity *this)

{
  return this->bIsRunning;
}

// MakeNewOperator @ 14cd729b0

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

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall UPolyEditExtrudeEdgeActivity::MakeNewOperator(UPolyEditExtrudeEdgeActivity *this)

{
  TObjectPtr<UCombinedTransformGizmo>_u_0 TVar1;
  TObjectPtr<UTransformProxy>_u_0 TVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [12];
  double dVar14;
  double dVar15;
  bool bVar16;
  FExtrudeEdgeOp *pFVar17;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TVar18;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar19;
  TTransform<double> *pTVar20;
  TVector<double> *pTVar21;
  FDynamicMeshOperator *in_RDX;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
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
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar53;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined4 uVar54;
  undefined4 uVar55;
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
  undefined1 auStack_1f8 [32];
  FDynamicMesh3 *local_1d8;
  FSharedReferencer<1> local_1d0;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_1c8;
  TVector<double>_u_0 local_1b8 [3];
  TVector<double> local_168 [2];
  TVector<double> local_138;
  TTransform<double> local_118;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  pFVar17 = ::operator_new(0x1e0);
  if (pFVar17 == (FExtrudeEdgeOp *)0x0) {
    pFVar17 = (FExtrudeEdgeOp *)0x0;
  }
  else {
    memset(pFVar17,0,0x1e0);
    pFVar17 = PolyEditExtrudeEdgeActivityLocals::FExtrudeEdgeOp::FExtrudeEdgeOp(pFVar17);
  }
  lVar22 = *(longlong *)&this->field_0x10;
  if ((*(longlong *)(lVar22 + 0x30) == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar16)) {
    pcVar3 = (code *)swi(3);
    TVar18.Ptr = (FDynamicMeshOperator *)(*pcVar3)();
    return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
            )TVar18.Ptr;
  }
  pTVar19 = MakeShared<UE::Geometry::FDynamicMesh3,1,UE::Geometry::FDynamicMesh3_&>
                      (&local_1c8,*(FDynamicMesh3 **)(lVar22 + 0x30));
  local_1d0.ReferenceController = (pTVar19->SharedReferenceCount).ReferenceController;
  local_1d8 = pTVar19->Object;
  if (local_1d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1d0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_1d0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&pFVar17->OriginalMesh != (TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *)&local_1d8) {
    (pFVar17->OriginalMesh).Object = local_1d8;
    local_1d8 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(pFVar17->OriginalMesh).SharedReferenceCount,&local_1d0);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1d0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.SharedReferenceCount.ReferenceController);
  pTVar20 = UPreviewMesh::GetTransform
                      (*(UPreviewMesh **)
                        (*(longlong *)(*(longlong *)&this->field_0x10 + 0x40) + 0x68),&local_118);
  dVar25 = (pTVar20->Rotation).XY.m128d_f64[1];
  dVar48 = (pTVar20->Rotation).ZW.m128d_f64[0];
  dVar53 = (pTVar20->Rotation).ZW.m128d_f64[1];
  dVar5 = (pTVar20->Translation).XY.m128d_f64[0];
  dVar6 = (pTVar20->Translation).XY.m128d_f64[1];
  dVar8 = (pTVar20->Translation).ZW.m128d_f64[0];
  dVar9 = (pTVar20->Translation).ZW.m128d_f64[1];
  dVar10 = (pTVar20->Scale3D).XY.m128d_f64[0];
  dVar11 = (pTVar20->Scale3D).XY.m128d_f64[1];
  dVar14 = (pTVar20->Scale3D).ZW.m128d_f64[0];
  dVar15 = (pTVar20->Scale3D).ZW.m128d_f64[1];
  (pFVar17->OriginalMeshTransform).Rotation.XY.m128d_f64[0] = (pTVar20->Rotation).XY.m128d_f64[0];
  (pFVar17->OriginalMeshTransform).Rotation.XY.m128d_f64[1] = dVar25;
  (pFVar17->OriginalMeshTransform).Rotation.ZW.m128d_f64[0] = dVar48;
  (pFVar17->OriginalMeshTransform).Rotation.ZW.m128d_f64[1] = dVar53;
  (pFVar17->OriginalMeshTransform).Translation.XY.m128d_f64[0] = dVar5;
  (pFVar17->OriginalMeshTransform).Translation.XY.m128d_f64[1] = dVar6;
  (pFVar17->OriginalMeshTransform).Translation.ZW.m128d_f64[0] = dVar8;
  (pFVar17->OriginalMeshTransform).Translation.ZW.m128d_f64[1] = dVar9;
  (pFVar17->OriginalMeshTransform).Scale3D.XY.m128d_f64[0] = dVar10;
  (pFVar17->OriginalMeshTransform).Scale3D.XY.m128d_f64[1] = dVar11;
  (pFVar17->OriginalMeshTransform).Scale3D.ZW.m128d_f64[0] = dVar14;
  (pFVar17->OriginalMeshTransform).Scale3D.ZW.m128d_f64[1] = dVar15;
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar17->SelectedEids,
             (TArray<int,TSizedDefaultAllocator<32>_> *)
             &(this->ActiveSelection).SelectedEdgeIDs.Elements.field_0x28);
  TArray<int,TSizedDefaultAllocator<32>_>::operator=
            (&pFVar17->GroupsToSetPerEid,
             (TArray<int,TSizedDefaultAllocator<32>_> *)
             &(this->ActiveSelection).SelectedEdgeIDs.Hash);
  dVar25 = __real_3ff0000000000000;
  if (*(char *)(*(longlong *)&this->field_0x8 + 0xc1) != '\0') {
    dVar25 = __real_4010000000000000;
  }
  pFVar17->ScalingAdjustmentLimit = dVar25;
  pFVar17->DirectionMode =
       *(EPolyEditExtrudeEdgeDirectionMode *)(*(longlong *)&this->field_0x8 + 0xb0);
  pFVar17->bGatherAllEdgesForRender = *(bool *)(*(longlong *)&this->field_0x10 + 0x68);
  pFVar17->bGatherGroupBoundariesForRender = true;
  pFVar17->bAssignAnyBoundaryNeighborToUnmatched = *(bool *)(*(longlong *)&this->field_0x8 + 0xc0);
  if (*(int *)(*(longlong *)&this->field_0x8 + 0xb0) == 1) {
    dVar25 = ((this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.X +
             (this->ExtrudeFrameForGizmoMeshSpace).InFrameScaleDirection.TypedValue.field0_0x0._s_0.
             Y) - (this->CurrentMeshTransform).Rotation.XY.m128d_f64[0];
    dVar48 = *(double *)&(this->GroupsToSetPerEid).ArrayNum *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar53 = (double)(this->EidsToRender).AllocatorInstance.Data *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    dVar5 = *(double *)&(this->EidsToRender).ArrayNum *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar6 = (double)(this->NewSelectionEids).AllocatorInstance.Data *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar40._8_4_ = SUB84(dVar53,0);
    auVar40._0_8_ = dVar48;
    auVar40._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
    dVar10 = ((this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.W +
             (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.Y) -
             *(double *)&(this->NewSelectionEids).ArrayNum;
    dVar11 = ((this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.Z +
             (this->ExtrudeFrameForGizmoMeshSpace).InFrameScaleDirection.TypedValue.field0_0x0._s_0.
             X) - *(double *)&this->field_0x278;
    uVar54 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar4._8_4_ = SUB84(dVar6,0);
    auVar4._0_8_ = dVar5;
    auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar41 = blendpd(auVar40,auVar4,2);
    auVar26._8_4_ = SUB84(dVar5,0);
    auVar26._0_8_ = dVar53;
    auVar26._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar60._8_4_ = SUB84(dVar11,0);
    auVar60._0_8_ = dVar10;
    auVar60._12_4_ = uVar54;
    auVar35._8_4_ = SUB84(dVar11,0);
    auVar35._0_8_ = dVar10;
    auVar35._12_4_ = uVar54;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = dVar25;
    auVar36 = blendpd(auVar35,auVar12,2);
    auVar61._0_8_ = auVar60._8_8_ * dVar48 - dVar53 * dVar10;
    auVar61._8_8_ = dVar25 * dVar53 - auVar26._8_8_ * dVar11;
    auVar37._0_8_ = auVar36._0_8_ * dVar5 - dVar25 * auVar41._0_8_;
    auVar37._8_8_ = auVar36._8_8_ * dVar6 - auVar41._8_8_ * 0.0;
    dVar8 = auVar61._8_8_ + auVar61._8_8_;
    dVar9 = auVar37._0_8_ + auVar37._0_8_;
    uVar54 = SUB84(dVar9,0);
    uVar55 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar36 = blendpd(auVar61,auVar37,2);
    auVar56._8_4_ = uVar54;
    auVar56._0_8_ = dVar8;
    auVar56._12_4_ = uVar55;
    auVar27._8_4_ = uVar54;
    auVar27._0_8_ = dVar8;
    auVar27._12_4_ = uVar55;
    auVar43._8_4_ = uVar54;
    auVar43._0_8_ = dVar8;
    auVar43._12_4_ = uVar55;
    auVar62._0_8_ = auVar36._0_8_ + auVar36._0_8_;
    auVar62._8_8_ = auVar36._8_8_ + auVar36._8_8_;
    auVar44 = blendpd(auVar43,auVar62,2);
    auVar57._0_8_ = auVar56._8_8_ * dVar48 - dVar8 * dVar53;
    auVar57._8_8_ = auVar62._0_8_ * dVar53 - auVar27._8_8_ * dVar5;
    auVar28._8_4_ = SUB84(auVar62._8_8_,0);
    auVar28._0_8_ = auVar62._0_8_;
    auVar28._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
    auVar36 = *(undefined1 (*) [16])(this->CurrentMeshTransform).Rotation.ZW.m128d_f64;
    auVar45._0_8_ = auVar44._0_8_ * dVar5 - auVar62._0_8_ * auVar41._0_8_;
    auVar45._8_8_ = auVar44._8_8_ * dVar6 - auVar28._8_8_ * auVar41._8_8_;
    auVar41 = *(undefined1 (*) [16])(this->CurrentMeshTransform).Translation.XY.m128d_f64;
    auVar49._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar36._4_4_,
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar36._0_4_);
    auVar49._8_4_ = _UNK_15061cc88 & auVar36._8_4_;
    auVar49._12_4_ = _UNK_15061cc8c & auVar36._12_4_;
    lVar22 = -(ulonglong)
              ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar41._4_4_,
                                (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar41._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    lVar23 = -(ulonglong)(auVar49._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar24 = -(ulonglong)(auVar49._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar36);
    auVar29._8_4_ = SUB84(auVar57._8_8_,0);
    auVar29._0_8_ = auVar57._0_8_;
    auVar29._12_4_ = (int)((ulonglong)auVar57._8_8_ >> 0x20);
    auVar50._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar23 >> 0x20) & auVar36._4_4_,
                          ~(uint)lVar23 & auVar36._0_4_);
    auVar50._8_4_ = ~(uint)lVar24 & auVar36._8_4_;
    auVar50._12_4_ = ~(uint)((ulonglong)lVar24 >> 0x20) & auVar36._12_4_;
    auVar7._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar7._0_8_ = auVar41._0_8_;
    auVar7._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar7);
    dVar48 = auVar50._0_8_ * (dVar8 * dVar6 + dVar10 + auVar29._8_8_);
    dVar53 = auVar50._8_8_ * (dVar9 * dVar6 + dVar11 + auVar45._0_8_);
    auVar13._4_8_ = auVar36._8_8_;
    auVar13._0_4_ = (int)((ulonglong)dVar48 >> 0x20);
    auVar30._0_8_ = auVar13._0_8_ << 0x20;
    auVar30._8_4_ = SUB84(dVar53,0);
    auVar30._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
    TVar1 = (this->ExtrudeFrameGizmo).field0_0x0;
    auVar41 = blendpd(auVar57,auVar45,2);
    TVar2 = (this->SingleDirectionProxy).field0_0x0;
    (pFVar17->SingleDirectionVector).field0_0x0._s_0.X =
         dVar48 - (double)(this->ExtrudeFrameProxy).field0_0x0;
    (pFVar17->SingleDirectionVector).field0_0x0._s_0.Y = auVar30._8_8_ - (double)TVar1;
    (pFVar17->SingleDirectionVector).field0_0x0._s_0.Z =
         (double)CONCAT44(~(uint)((ulonglong)lVar22 >> 0x20) & auVar36._4_4_,
                          ~(uint)lVar22 & auVar36._0_4_) *
         (auVar62._0_8_ * dVar6 + dVar25 + auVar41._0_8_) - (double)TVar2;
  }
  else {
    pTVar21 = UE::Geometry::operator*<double>
                        (local_168,
                         (TQuaternion<double> *)
                         ((longlong)
                          &(this->ExtrudeFrameForGizmoMeshSpace).InFrameScaleDirection.TypedValue.
                           field0_0x0 + 0x10),
                         (TVector<double> *)
                         ((longlong)&(this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0 + 8)
                        );
    dVar48 = *(double *)&(this->GroupsToSetPerEid).ArrayNum *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar53 = (double)(this->EidsToRender).AllocatorInstance.Data *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    auVar42._8_4_ = SUB84(dVar53,0);
    auVar42._0_8_ = dVar48;
    auVar42._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
    dVar5 = *(double *)&(this->EidsToRender).ArrayNum *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar6 = (double)(this->NewSelectionEids).AllocatorInstance.Data *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    dVar25 = ((pTVar21->field0_0x0)._s_0.Z +
             (this->ExtrudeFrameForGizmoMeshSpace).InFrameScaleDirection.TypedValue.field0_0x0._s_0.
             Y) - (this->CurrentMeshTransform).Rotation.XY.m128d_f64[0];
    dVar10 = ((this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.W +
             (pTVar21->field0_0x0)._s_0.X) - *(double *)&(this->NewSelectionEids).ArrayNum;
    dVar11 = ((pTVar21->field0_0x0)._s_0.Y +
             (this->ExtrudeFrameForGizmoMeshSpace).InFrameScaleDirection.TypedValue.field0_0x0._s_0.
             X) - *(double *)&this->field_0x278;
    uVar54 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar36._8_4_ = SUB84(dVar6,0);
    auVar36._0_8_ = dVar5;
    auVar36._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar44 = blendpd(auVar42,auVar36,2);
    auVar31._8_4_ = SUB84(dVar5,0);
    auVar31._0_8_ = dVar53;
    auVar31._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar63._8_4_ = SUB84(dVar11,0);
    auVar63._0_8_ = dVar10;
    auVar63._12_4_ = uVar54;
    auVar38._8_4_ = SUB84(dVar11,0);
    auVar38._0_8_ = dVar10;
    auVar38._12_4_ = uVar54;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = dVar25;
    auVar36 = blendpd(auVar38,auVar41,2);
    auVar64._0_8_ = auVar63._8_8_ * dVar48 - dVar53 * dVar10;
    auVar64._8_8_ = dVar25 * dVar53 - auVar31._8_8_ * dVar11;
    auVar39._0_8_ = auVar36._0_8_ * dVar5 - dVar25 * auVar44._0_8_;
    auVar39._8_8_ = auVar36._8_8_ * dVar6 - auVar44._8_8_ * 0.0;
    dVar8 = auVar64._8_8_ + auVar64._8_8_;
    dVar9 = auVar39._0_8_ + auVar39._0_8_;
    uVar54 = SUB84(dVar9,0);
    uVar55 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar36 = blendpd(auVar64,auVar39,2);
    auVar58._8_4_ = uVar54;
    auVar58._0_8_ = dVar8;
    auVar58._12_4_ = uVar55;
    auVar32._8_4_ = uVar54;
    auVar32._0_8_ = dVar8;
    auVar32._12_4_ = uVar55;
    auVar51._8_4_ = uVar54;
    auVar51._0_8_ = dVar8;
    auVar51._12_4_ = uVar55;
    auVar65._0_8_ = auVar36._0_8_ + auVar36._0_8_;
    auVar65._8_8_ = auVar36._8_8_ + auVar36._8_8_;
    auVar41 = blendpd(auVar51,auVar65,2);
    auVar59._0_8_ = auVar58._8_8_ * dVar48 - dVar8 * dVar53;
    auVar59._8_8_ = auVar65._0_8_ * dVar53 - auVar32._8_8_ * dVar5;
    auVar33._8_4_ = SUB84(auVar65._8_8_,0);
    auVar33._0_8_ = auVar65._0_8_;
    auVar33._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
    auVar36 = *(undefined1 (*) [16])(this->CurrentMeshTransform).Rotation.ZW.m128d_f64;
    auVar52._0_8_ = auVar41._0_8_ * dVar5 - auVar65._0_8_ * auVar44._0_8_;
    auVar52._8_8_ = auVar41._8_8_ * dVar6 - auVar33._8_8_ * auVar44._8_8_;
    auVar41 = *(undefined1 (*) [16])(this->CurrentMeshTransform).Translation.XY.m128d_f64;
    auVar46._0_8_ =
         (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar36._4_4_,
                          (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar36._0_4_);
    auVar46._8_4_ = _UNK_15061cc88 & auVar36._8_4_;
    auVar46._12_4_ = _UNK_15061cc8c & auVar36._12_4_;
    lVar22 = -(ulonglong)
              ((double)CONCAT44(auVar41._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                auVar41._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar36);
    lVar23 = -(ulonglong)(auVar46._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar24 = -(ulonglong)(auVar46._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar47._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar23 >> 0x20) & auVar36._4_4_,
                          ~(uint)lVar23 & auVar36._0_4_);
    auVar47._8_4_ = ~(uint)lVar24 & auVar36._8_4_;
    auVar47._12_4_ = ~(uint)((ulonglong)lVar24 >> 0x20) & auVar36._12_4_;
    auVar34._8_4_ = SUB84(auVar59._8_8_,0);
    auVar34._0_8_ = auVar59._0_8_;
    auVar34._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
    local_1b8[0]._0_8_ = auVar47._0_8_ * (dVar8 * dVar6 + dVar10 + auVar34._8_8_);
    local_1b8[0]._8_8_ = auVar47._8_8_ * (dVar9 * dVar6 + dVar11 + auVar52._0_8_);
    auVar44._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar44._0_8_ = auVar41._0_8_;
    auVar44._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar44);
    auVar41 = blendpd(auVar59,auVar52,2);
    local_1b8[0]._16_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar22 >> 0x20) & auVar36._4_4_,
                          ~(uint)lVar22 & auVar36._0_4_) *
         (auVar65._0_8_ * dVar6 + dVar25 + auVar41._0_8_);
    pTVar21 = UE::Geometry::FExtrudeBoundaryEdges::FExtrudeFrame::ToFramePoint
                        ((FExtrudeFrame *)&this->ExtrudeFrameProxy,&local_138,
                         (TVector<double> *)&local_1b8[0]._s_0);
    dVar48 = (pTVar21->field0_0x0)._s_0.Y;
    dVar25 = (pTVar21->field0_0x0)._s_0.Z;
    (pFVar17->LocalFrameParams).field0_0x0._s_0.X = (pTVar21->field0_0x0)._s_0.X;
    (pFVar17->LocalFrameParams).field0_0x0._s_0.Y = dVar48;
    (pFVar17->LocalFrameParams).field0_0x0._s_0.Z = dVar25;
  }
  in_RDX->_padding_ = (longlong)pFVar17;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// RecalculateGizmoExtrudeFrame @ 14cd772b0

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
UPolyEditExtrudeEdgeActivity::RecalculateGizmoExtrudeFrame(UPolyEditExtrudeEdgeActivity *this)

{
  TOptional<UE::Math::TVector<double>_> *pTVar1;
  int iVar2;
  int iVar3;
  UPolyEditActivityContext *pUVar4;
  code *pcVar5;
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
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [12];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  bool bVar30;
  bool bVar31;
  int iVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  double dVar40;
  undefined1 auVar39 [16];
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
  undefined1 auStackY_1f8 [32];
  TArray<UE::Geometry::FExtrudeBoundaryEdges::FNewVertSourceData,TSizedDefaultAllocator<32>_>
  local_1c8;
  TVector<double>_u_0 local_1b8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  TVector<double>_u_0 local_180;
  char local_168;
  double local_160;
  double local_148;
  double local_130;
  undefined1 local_e8 [32];
  void *local_c8;
  undefined4 local_c0;
  uint local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  void *local_a8;
  undefined4 local_a0;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  pUVar4 = (this->ActivityContext).field0_0x0.DebugPtr;
  local_bc = 0x80;
  local_b8 = 0xffffffff;
  local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c8.ArrayNum = 0;
  local_1c8.ArrayMax = 0;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_b4 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  bVar31 = ((this->Settings).field0_0x0.DebugPtr)->bUseUnselectedForFrames;
  if (((pUVar4->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
     (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x44d,L""), bVar30)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  UE::Geometry::FExtrudeBoundaryEdges::GetInputEdgePairings
            ((pUVar4->CurrentMesh).Object,&this->SelectedEids,bVar31,&local_1c8,
             (TMap<int,UE::Geometry::FIndex2i,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,UE::Geometry::FIndex2i,0>_>
              *)local_e8);
  if (local_1c8.ArrayNum == 0) {
    bVar31 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8341837429644197193>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditExtrudeEdgeActivity.cpp"
                        ,0x2b7,"!NewVertData.IsEmpty()");
    if (bVar31) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    local_1b8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_1b8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_1b8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dStack_1a0 = 0.0;
    uVar36 = SUB84(__real_3ff0000000000000,0);
    uVar37 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_198 = 0.0;
    dStack_190 = 0.0;
    local_188 = __real_3ff0000000000000;
    local_160 = __real_3ff0000000000000;
    local_168 = '\0';
    if (((this->Settings).field0_0x0.DebugPtr)->bAdjustToExtrudeEvenly != false) {
      uVar36 = (undefined4)__real_4010000000000000;
      uVar37 = (undefined4)((ulonglong)__real_4010000000000000 >> 0x20);
    }
    if (local_1c8.ArrayNum < 1) {
      bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar31) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar2 = *(int *)(local_1c8.AllocatorInstance.Data + 8);
    iVar32 = local_1c8.ArrayNum;
    if (local_1c8.ArrayNum < 1) {
      bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar31) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar32 = local_1c8.ArrayNum;
    }
    iVar3 = *(int *)(local_1c8.AllocatorInstance.Data + 4);
    if ((iVar32 < 1) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar31)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pUVar4 = (this->ActivityContext).field0_0x0.DebugPtr;
    iVar32 = *(int *)local_1c8.AllocatorInstance.Data;
    if (((pUVar4->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
       (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar31)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UE::Geometry::FExtrudeBoundaryEdges::GetExtrudeFrame
              ((pUVar4->CurrentMesh).Object,iVar32,iVar3,iVar2,(FExtrudeFrame *)&local_1b8._s_0,
               (double)CONCAT44(uVar37,uVar36));
    pTVar1 = &(this->ExtrudeFrameForGizmoMeshSpace).InFrameScaleDirection;
    (this->ExtrudeFrameForGizmoMeshSpace).Frame.Origin.field0_0x0._s_0.X = local_1b8._s_0.X;
    (this->ExtrudeFrameForGizmoMeshSpace).Frame.Origin.field0_0x0._s_0.Y = local_1b8._s_0.Y;
    (this->ExtrudeFrameForGizmoMeshSpace).Frame.Origin.field0_0x0._s_0.Z = local_1b8._s_0.Z;
    (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.X = dStack_1a0;
    (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.Y = local_198;
    (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.Z = dStack_190;
    (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.W = local_188;
    if (&local_180 != (TVector<double>_u_0 *)pTVar1) {
      if (local_168 == '\0') {
        if ((this->ExtrudeFrameForGizmoMeshSpace).InFrameScaleDirection.bIsSet != false) {
          (this->ExtrudeFrameForGizmoMeshSpace).InFrameScaleDirection.bIsSet = false;
        }
      }
      else {
        (pTVar1->TypedValue).field0_0x0._s_0.X = local_180._s_0.X;
        (this->ExtrudeFrameForGizmoMeshSpace).InFrameScaleDirection.TypedValue.field0_0x0._s_0.Y =
             local_180._s_0.Y;
        (this->ExtrudeFrameForGizmoMeshSpace).InFrameScaleDirection.TypedValue.field0_0x0._s_0.Z =
             local_180._s_0.Z;
        (this->ExtrudeFrameForGizmoMeshSpace).InFrameScaleDirection.bIsSet = true;
      }
    }
    (this->ExtrudeFrameForGizmoMeshSpace).Scaling = local_160;
    dVar23 = (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.Z;
    dVar24 = (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.W;
    dVar25 = (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.X;
    dVar26 = (this->ExtrudeFrameForGizmoMeshSpace).Frame.Rotation.field0_0x0._s_0.Y;
    dVar27 = (this->CurrentMeshTransform).Rotation.XY.m128d_f64[0];
    dVar28 = (this->CurrentMeshTransform).Rotation.XY.m128d_f64[1];
    auVar46 = *(undefined1 (*) [16])(this->CurrentMeshTransform).Rotation.ZW.m128d_f64;
    dVar18 = (this->ExtrudeFrameForGizmoMeshSpace).Frame.Origin.field0_0x0._s_0.Z *
             (this->CurrentMeshTransform).Scale3D.ZW.m128d_f64[0];
    dVar19 = (this->CurrentMeshTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar15 = auVar46._8_8_;
    dVar14 = auVar46._0_8_;
    dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0];
    dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
    dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
    dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
    auVar33._8_4_ = auVar46._0_4_;
    auVar33._0_8_ = dVar14;
    auVar33._12_4_ = auVar46._4_4_;
    dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    dVar29 = (this->CurrentMeshTransform).Rotation.ZW.m128d_f64[1];
    auVar46 = *(undefined1 (*) [16])(this->CurrentMeshTransform).Rotation.ZW.m128d_f64;
    auVar34 = *(undefined1 (*) [16])(this->CurrentMeshTransform).Rotation.XY.m128d_f64;
    auVar38 = blendpd(auVar34,auVar46,2);
    dVar20 = dVar27 * dVar26 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar15 * dVar23 +
             dVar25 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar14 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    uVar37 = (undefined4)((ulonglong)dVar20 >> 0x20);
    dVar21 = dVar27 * dVar25 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
             dVar15 * dVar24 +
             dVar26 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
             dVar14 * dVar23 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    dVar16 = (this->ExtrudeFrameForGizmoMeshSpace).Frame.Origin.field0_0x0._s_0.X *
             (this->CurrentMeshTransform).Scale3D.XY.m128d_f64[0];
    dVar17 = (this->ExtrudeFrameForGizmoMeshSpace).Frame.Origin.field0_0x0._s_0.Y *
             (this->CurrentMeshTransform).Scale3D.XY.m128d_f64[1];
    uVar36 = (undefined4)((ulonglong)dVar17 >> 0x20);
    auVar47._8_4_ = SUB84(dVar17,0);
    auVar47._0_8_ = dVar16;
    auVar47._12_4_ = uVar36;
    dVar13 = auVar46._0_8_;
    auVar48._0_8_ = auVar47._8_8_ * auVar34._0_8_ - auVar34._8_8_ * dVar16;
    auVar48._8_8_ = dVar18 * auVar34._8_8_ - dVar13 * dVar17;
    auVar42._8_4_ = SUB84(dVar17,0);
    auVar42._0_8_ = dVar16;
    auVar42._12_4_ = uVar36;
    auVar49._8_4_ = SUB84(dVar19,0);
    auVar49._0_8_ = dVar18;
    auVar49._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    auVar34 = blendpd(auVar42,auVar49,2);
    auVar35._0_8_ = auVar34._0_8_ * dVar13 - auVar38._0_8_ * dVar18;
    auVar35._8_8_ = auVar34._8_8_ * auVar46._8_8_ - auVar38._8_8_ * dVar19;
    auVar34 = *(undefined1 (*) [16])(this->CurrentMeshTransform).Rotation.XY.m128d_f64;
    dVar19 = auVar48._8_8_ + auVar48._8_8_;
    dVar12 = auVar35._0_8_ + auVar35._0_8_;
    uVar36 = (undefined4)((ulonglong)dVar12 >> 0x20);
    auVar49 = blendpd(auVar48,auVar35,2);
    auVar50._0_8_ = auVar49._0_8_ + auVar49._0_8_;
    auVar50._8_8_ = auVar49._8_8_ + auVar49._8_8_;
    auVar44._8_4_ = SUB84(dVar12,0);
    auVar44._0_8_ = dVar19;
    auVar44._12_4_ = uVar36;
    auVar41._8_4_ = SUB84(dVar12,0);
    auVar41._0_8_ = dVar19;
    auVar41._12_4_ = uVar36;
    auVar42 = blendpd(auVar41,auVar50,2);
    auVar49 = blendpd(auVar34,auVar46,2);
    dVar40 = auVar49._8_8_ * auVar50._8_8_;
    auVar45._0_8_ = auVar44._8_8_ * auVar34._0_8_ - auVar34._8_8_ * dVar19;
    auVar45._8_8_ = auVar50._0_8_ * auVar34._8_8_ - dVar13 * dVar12;
    auVar43._0_8_ = auVar42._0_8_ * dVar13 - auVar49._0_8_ * auVar50._0_8_;
    auVar43._8_8_ = auVar42._8_8_ * auVar46._8_8_ - dVar40;
    auVar38._8_4_ = SUB84(auVar45._8_8_,0);
    auVar38._0_8_ = auVar45._0_8_;
    auVar38._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
    auVar22._4_8_ = dVar40;
    auVar22._0_4_ = uVar37;
    auVar39._0_8_ = auVar22._0_8_ << 0x20;
    auVar39._8_4_ = SUB84(dVar21,0);
    auVar39._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    dVar13 = dVar12 * dVar29 + dVar17 + auVar43._0_8_ +
             (this->CurrentMeshTransform).Translation.XY.m128d_f64[1];
    auVar46 = blendpd(auVar45,auVar43,2);
    local_148 = auVar50._0_8_ * dVar29 + dVar18 + auVar46._0_8_ +
                (this->CurrentMeshTransform).Translation.ZW.m128d_f64[0];
    auVar34._8_4_ = SUB84(dVar13,0);
    auVar34._0_8_ =
         dVar19 * dVar29 + dVar16 + auVar38._8_8_ +
         (this->CurrentMeshTransform).Translation.XY.m128d_f64[0];
    auVar34._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])&(this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0 = auVar34;
    (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.Z = local_148;
    (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.X =
         dVar27 * dVar24 * dVar6 + dVar25 * dVar15 + dVar28 * dVar23 * dVar7 +
         dVar14 * dVar26 * dVar8;
    auVar46._8_4_ = SUB84(dVar20,0);
    auVar46._0_8_ =
         dVar27 * dVar23 * dVar9 + dVar26 * dVar15 + dVar28 * dVar24 * dVar10 +
         auVar33._8_8_ * dVar25 * dVar11;
    auVar46._12_4_ = uVar37;
    *(undefined1 (*) [16])
     ((longlong)&(this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0 + 8) = auVar46;
    (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.W = auVar39._8_8_;
    local_130 = local_148;
  }
  local_a0 = 0;
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  iVar2 = SUB84(local_e8._8_8_,4);
  local_e8._8_8_ = local_e8._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
  }
  local_b4 = 0;
  local_c0 = 0;
  local_b8 = 0xffffffff;
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
  if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c8.AllocatorInstance.Data);
  }
  return;
}

// Render @ 14cd79bf0

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
UPolyEditExtrudeEdgeActivity::Render
          (UPolyEditExtrudeEdgeActivity *this,IToolsContextRenderAPI *param_1)

{
  longlong *plVar1;
  TVector<double> *pTVar2;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  double local_58;
  double local_50;
  double local_48;
  TVector<double>_u_0 local_40;
  TVector<double> local_28;
  
  if (this->bIsRunning != false) {
    plVar1 = (longlong *)(**(code **)((longlong)*param_1 + 8))(param_1);
    local_68 = FLinearColor::sRGBToLinearTable
               [PolyEditExtrudeEdgeActivityLocals::ExtrudeFrameLineColor.field0_0x0._s_0.R];
    local_64 = FLinearColor::sRGBToLinearTable
               [PolyEditExtrudeEdgeActivityLocals::ExtrudeFrameLineColor.field0_0x0._s_0.G];
    local_60 = FLinearColor::sRGBToLinearTable
               [PolyEditExtrudeEdgeActivityLocals::ExtrudeFrameLineColor.field0_0x0._s_0.B];
    local_40._s_0.X = ___xmm_0000000000000000408f400000000000;
    local_40._s_0.Y = _UNK_15298b6f8;
    local_40._s_0.Z = 0.0;
    local_5c = (float)PolyEditExtrudeEdgeActivityLocals::ExtrudeFrameLineColor.field0_0x0._3_1_ *
               __real_3b808081;
    pTVar2 = UE::Geometry::operator*<double>
                       (&local_28,&(this->ExtrudeFrameForGizmoWorldSpace).Rotation,
                        (TVector<double> *)&local_40._s_0);
    local_58 = (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.X +
               (pTVar2->field0_0x0)._s_0.X;
    local_50 = (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.Y +
               (pTVar2->field0_0x0)._s_0.Y;
    local_48 = (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.Z +
               (pTVar2->field0_0x0)._s_0.Z;
    (**(code **)(*plVar1 + 0x30))
              (plVar1,&this->ExtrudeFrameForGizmoWorldSpace,&local_58,&local_68,1,__real_3f000000,
               __real_3f800000,1);
  }
  return;
}

// ResetParams @ 14cd7b1a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPolyEditExtrudeEdgeActivity::ResetParams(UPolyEditExtrudeEdgeActivity *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UPolyEditExtrudeEdgeActivityProperties *pUVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar1 = (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Z;
  dVar8 = (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Y;
  dVar2 = (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.W;
  dVar9 = dVar1 + dVar1;
  pUVar5 = (this->Settings).field0_0x0.DebugPtr;
  dVar3 = (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.X;
  dVar4 = pUVar5->Distance;
  dVar7 = dVar8 + dVar8;
  (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.X =
       (__real_3ff0000000000000 - (dVar9 * dVar1 + dVar7 * dVar8)) * dVar4;
  (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.Y =
       (dVar2 * dVar9 + dVar3 * dVar7) * dVar4;
  (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.Z =
       (dVar3 * dVar9 - dVar2 * dVar7) * dVar4;
  dVar1 = pUVar5->Distance;
  dVar8 = dVar1 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
  auVar6._8_4_ = SUB84(UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y * dVar1,0);
  auVar6._0_8_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X * dVar1;
  auVar6._12_4_ =
       (int)((ulonglong)(UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y * dVar1) >> 0x20);
  *(undefined1 (*) [16])&(this->ParamsInWorldExtrudeFrame).field0_0x0 = auVar6;
  (this->ParamsInWorldExtrudeFrame).field0_0x0._s_0.Z = dVar8;
  return;
}

// Setup @ 14cd7c480

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
UPolyEditExtrudeEdgeActivity::Setup(UPolyEditExtrudeEdgeActivity *this,UInteractiveTool *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  code *pcVar3;
  int iVar4;
  UObject *pUVar5;
  UInteractiveToolManager *this_00;
  UContextObjectStore *this_01;
  UPolyEditActivityContext *pUVar6;
  TObjectPtr<UCombinedTransformGizmo>_u_0 TVar7;
  UClass *pUVar8;
  UPolyEditExtrudeEdgeActivityProperties *pUVar9;
  UTransformProxy *pUVar10;
  void *pvVar11;
  TPropertyWatcher<EPolyEditExtrudeEdgeDistanceMode> *pTVar12;
  TPropertyWatcher<EPolyEditExtrudeEdgeDistanceMode> *pTVar13;
  longlong *plVar14;
  undefined ***pppuVar15;
  undefined8 *puVar16;
  undefined1 auStack_168 [32];
  undefined1 local_148 [16];
  code *local_138 [2];
  undefined **local_128;
  UPolyEditExtrudeEdgeActivity *local_120;
  undefined ***local_110;
  UPolyEditExtrudeEdgeActivity *local_108;
  undefined1 local_100 [24];
  undefined1 local_e8 [48];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_168;
  UInteractionMechanic::Setup((UInteractionMechanic *)this,param_1);
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  this_00 = (UInteractiveToolManager *)(**(code **)(*(longlong *)pUVar5 + 0x2d8))(pUVar5);
  this_01 = UInteractiveToolManager::GetContextObjectStore(this_00);
  pUVar6 = UContextObjectStore::FindContext<UPolyEditActivityContext>(this_01);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar6 != (UPolyEditActivityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  (this->ActivityContext).field0_0x0.DebugPtr = pUVar6;
  TVar7.DebugPtr = (UCombinedTransformGizmo *)GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)TVar7.DebugPtr,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar8 = UPolyEditExtrudeEdgeActivityProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_b8,pUVar8);
  local_b8._8_8_ = TVar7.DebugPtr;
  pUVar9 = (UPolyEditExtrudeEdgeActivityProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
  if ((double)local_b8._64_8_ != 0.0) {
    plVar14 = (longlong *)(local_b8 + 0x50);
    if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
      plVar14 = (longlong *)local_b8._104_8_;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UPolyEditExtrudeEdgeActivityProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar9;
  pcVar3 = *(code **)(pUVar9->_padding_ + 0x2b8);
  ::FString::FString((FString *)local_100,L"");
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  (*pcVar3)(pUVar9,pUVar5,local_100);
  if ((FScriptContainerElement *)local_100._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_100._0_8_);
  }
  (**(code **)(*(longlong *)this + 0x2d0))(this,(this->Settings).field0_0x0.DebugPtr);
  (**(code **)(*(longlong *)this + 0x2d8))(this,(this->Settings).field0_0x0.DebugPtr,0);
  pUVar10 = NewObject<UTransformProxy>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->ExtrudeFrameProxy).field0_0x0.DebugPtr = pUVar10;
  local_108 = this;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::
  AddWeakLambda<UPolyEditExtrudeEdgeActivity,_UPolyEditExtrudeEdgeActivity::Setup_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
              *)&pUVar10->OnTransformChanged,(UPolyEditExtrudeEdgeActivity *)local_100,
             (<lambda_1> *)this);
  pUVar10 = NewObject<UTransformProxy>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UTransformProxy *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->SingleDirectionProxy).field0_0x0.DebugPtr = pUVar10;
  local_108 = this;
  TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
  ::
  AddWeakLambda<UPolyEditExtrudeEdgeActivity,_UPolyEditExtrudeEdgeActivity::Setup_::__l2::<lambda_2>_>
            ((TMulticastDelegateRegistration<void___cdecl(UTransformProxy_*,UE::Math::TTransform<double>),FDefaultDelegateUserPolicy>
              *)&pUVar10->OnTransformChanged,(UPolyEditExtrudeEdgeActivity *)local_100,
             (<lambda_2> *)this);
  pUVar9 = (this->Settings).field0_0x0.DebugPtr;
  local_128 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_3>,0,0>::
               _vftable_;
  pTVar13 = (TPropertyWatcher<EPolyEditExtrudeEdgeDistanceMode> *)0x0;
  local_110 = (undefined ***)0x0;
  local_138[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_3>,void,enum_EPolyEditExtrudeEdgeDirectionMode_const_&>
                 ::Call;
  local_120 = this;
  pvVar11 = ::operator_new(0xa0);
  pTVar12 = pTVar13;
  if (pvVar11 != (void *)0x0) {
    local_e8._0_8_ = local_138[0];
    local_e8._40_8_ = (UPolyEditActivityContext *)0x0;
    if (local_138[0] != (code *)0x0) {
      pppuVar15 = &local_128;
      if (local_110 != (undefined ***)0x0) {
        pppuVar15 = local_110;
      }
      (*(code *)**pppuVar15)(pppuVar15,local_e8 + 0x10);
    }
    pTVar12 = (TPropertyWatcher<EPolyEditExtrudeEdgeDistanceMode> *)
              FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode>::
              TPropertyWatcher<enum_EPolyEditExtrudeEdgeDirectionMode><enum_EPolyEditExtrudeEdgeDirectionMode,void>
                        (pvVar11,&pUVar9->DirectionMode,
                         (TFunction<void___cdecl(EPolyEditExtrudeEdgeDirectionMode_const_&)> *)
                         (local_100 + 0x18));
  }
  iVar4 = (int)pUVar9->_padding_;
  piVar1 = (int *)((longlong)&pUVar9->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar9->_padding_,piVar1);
  }
  *(int *)&pUVar9->_padding_ = iVar4 + 1;
  *(TPropertyWatcher<EPolyEditExtrudeEdgeDistanceMode> **)(pUVar9->_padding_ + (longlong)iVar4 * 8)
       = pTVar12;
  if (local_138[0] != (code *)0x0) {
    pppuVar15 = &local_128;
    if (local_110 != (undefined ***)0x0) {
      pppuVar15 = local_110;
    }
    (*(code *)(*pppuVar15)[2])();
  }
  pUVar9 = (this->Settings).field0_0x0.DebugPtr;
  local_128 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_4>,0,0>::
               _vftable_;
  local_110 = (undefined ***)0x0;
  local_138[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_4>,void,double_const_&>
                 ::Call;
  local_120 = this;
  FWatchablePropertySet::WatchProperty<double>
            ((FWatchablePropertySet *)&pUVar9->_padding_,&pUVar9->Distance,
             (TFunction<void___cdecl(double_const_&)> *)local_138);
  pUVar9 = (this->Settings).field0_0x0.DebugPtr;
  local_128 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_5>,0,0>::
               _vftable_;
  local_110 = (undefined ***)0x0;
  local_138[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_5>,void,enum_EPolyEditExtrudeEdgeDistanceMode_const_&>
                 ::Call;
  local_120 = this;
  pvVar11 = ::operator_new(0xa0);
  if (pvVar11 != (void *)0x0) {
    local_e8._0_8_ = local_138[0];
    local_e8._40_8_ = (UPolyEditActivityContext *)0x0;
    if (local_138[0] != (code *)0x0) {
      pppuVar15 = &local_128;
      if (local_110 != (undefined ***)0x0) {
        pppuVar15 = local_110;
      }
      (*(code *)**pppuVar15)(pppuVar15,local_e8 + 0x10);
    }
    pTVar13 = FWatchablePropertySet::TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode>::
              TPropertyWatcher<enum_EPolyEditExtrudeEdgeDistanceMode><enum_EPolyEditExtrudeEdgeDistanceMode,void>
                        (pvVar11,&pUVar9->DistanceMode,
                         (TFunction<void___cdecl(EPolyEditExtrudeEdgeDistanceMode_const_&)> *)
                         (local_100 + 0x18));
  }
  iVar4 = (int)pUVar9->_padding_;
  piVar1 = (int *)((longlong)&pUVar9->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&pUVar9->_padding_,piVar1);
  }
  *(int *)&pUVar9->_padding_ = iVar4 + 1;
  *(TPropertyWatcher<EPolyEditExtrudeEdgeDistanceMode> **)(pUVar9->_padding_ + (longlong)iVar4 * 8)
       = pTVar13;
  if (local_138[0] != (code *)0x0) {
    pppuVar15 = &local_128;
    if (local_110 != (undefined ***)0x0) {
      pppuVar15 = local_110;
    }
    (*(code *)(*pppuVar15)[2])();
  }
  pUVar9 = (this->Settings).field0_0x0.DebugPtr;
  local_128 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_7>,0,0>::
               _vftable_;
  local_110 = (undefined ***)0x0;
  local_138[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_7>,void,bool_const_&>
                 ::Call;
  local_120 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar9->_padding_,&pUVar9->bUseUnselectedForFrames,
             (TFunction<void___cdecl(bool_const_&)> *)local_138);
  pUVar9 = (this->Settings).field0_0x0.DebugPtr;
  local_128 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UPolyEditExtrudeEdgeActivity::Setup'::`2'::<lambda_8>,0,0>::
               _vftable_;
  local_110 = (undefined ***)0x0;
  local_138[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`UPolyEditExtrudeEdgeActivity::Setup'::__l2::<lambda_8>,void,bool_const_&>
                 ::Call;
  local_120 = this;
  FWatchablePropertySet::WatchProperty<bool>
            ((FWatchablePropertySet *)&pUVar9->_padding_,&pUVar9->bAdjustToExtrudeEvenly,
             (TFunction<void___cdecl(bool_const_&)> *)local_138);
  pUVar9 = (this->Settings).field0_0x0.DebugPtr;
  puVar16 = (undefined8 *)pUVar9->_padding_;
  iVar4 = (int)pUVar9->_padding_;
  puVar2 = puVar16 + iVar4;
  while( true ) {
    if ((int)pUVar9->_padding_ != iVar4) {
      `TCheckedPointerIterator<TUniquePtr<FWatchablePropertySet::FPropertyWatcher,TDefaultDelete<FWatchablePropertySet::FPropertyWatcher>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_148);
    }
    if (puVar16 == puVar2) break;
    (**(code **)(*(longlong *)*puVar16 + 0x10))();
    puVar16 = puVar16 + 1;
  }
  return;
}

// Shutdown @ 14cd7f730

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
UPolyEditExtrudeEdgeActivity::Shutdown(UPolyEditExtrudeEdgeActivity *this,EToolShutdownType param_1)

{
  char cVar1;
  undefined7 in_register_00000011;
  
  cVar1 = (**(code **)(*(longlong *)this + 0x2f8))(this,CONCAT71(in_register_00000011,param_1));
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)this + 0x310))(this,param_1);
  }
  UInteractionMechanic::Shutdown((UInteractionMechanic *)this);
  return;
}

// Start @ 14cd80580

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

EToolActivityStartResult __thiscall
UPolyEditExtrudeEdgeActivity::Start(UPolyEditExtrudeEdgeActivity *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  UPolyEditActivityContext *pUVar7;
  UPolygonSelectionMechanic *pUVar8;
  UPolyEditExtrudeEdgeActivityProperties *pUVar9;
  undefined1 auVar10 [16];
  double dVar11;
  char cVar12;
  EToolActivityStartResult EVar13;
  UObject *pUVar14;
  longlong *plVar15;
  FText *pFVar16;
  TTransform<double> *pTVar17;
  UPreviewGeometry *this_00;
  UWorld *pUVar18;
  UInteractiveTool *pUVar19;
  UInteractiveToolManager *this_01;
  UInteractiveGizmoManager *pUVar20;
  UCombinedTransformGizmo *pUVar21;
  longlong lVar22;
  undefined8 uVar23;
  longlong *plVar24;
  IDynamicMeshOperatorFactory *pIVar25;
  double dVar26;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [32];
  TTransform<double> local_a8;
  undefined8 local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  cVar12 = (**(code **)(*(longlong *)this + 0x2e8))();
  if (cVar12 == '\0') {
    pUVar14 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    plVar15 = (longlong *)(**(code **)(*(longlong *)pUVar14 + 0x2d8))(pUVar14);
    pcVar6 = *(code **)(*plVar15 + 0x360);
    pFVar16 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)local_c8,L"PolyEditExtrudeEdgeActivity",L"OnExtrudeFailedMesssage"
                         ,L"Action requires boundary edge selection.");
    (*pcVar6)(plVar15,pFVar16,3);
    if ((ITextData *)local_c8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_c8._0_8_ + 0x10))();
    }
    EVar13 = FailedStart;
  }
  else {
    pTVar17 = UPreviewMesh::GetTransform
                        ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.
                          DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,&local_a8);
    pUVar7 = (this->ActivityContext).field0_0x0.DebugPtr;
    dVar1 = (pTVar17->Rotation).XY.m128d_f64[1];
    (this->CurrentMeshTransform).Rotation.XY.m128d_f64[0] = (pTVar17->Rotation).XY.m128d_f64[0];
    (this->CurrentMeshTransform).Rotation.XY.m128d_f64[1] = dVar1;
    pIVar25 = (IDynamicMeshOperatorFactory *)&this->field_0x30;
    if (this == (UPolyEditExtrudeEdgeActivity *)0x0) {
      pIVar25 = (IDynamicMeshOperatorFactory *)0x0;
    }
    dVar1 = (pTVar17->Rotation).ZW.m128d_f64[1];
    (this->CurrentMeshTransform).Rotation.ZW.m128d_f64[0] = (pTVar17->Rotation).ZW.m128d_f64[0];
    (this->CurrentMeshTransform).Rotation.ZW.m128d_f64[1] = dVar1;
    dVar1 = (pTVar17->Translation).XY.m128d_f64[1];
    (this->CurrentMeshTransform).Translation.XY.m128d_f64[0] =
         (pTVar17->Translation).XY.m128d_f64[0];
    (this->CurrentMeshTransform).Translation.XY.m128d_f64[1] = dVar1;
    dVar1 = (pTVar17->Translation).ZW.m128d_f64[1];
    (this->CurrentMeshTransform).Translation.ZW.m128d_f64[0] =
         (pTVar17->Translation).ZW.m128d_f64[0];
    (this->CurrentMeshTransform).Translation.ZW.m128d_f64[1] = dVar1;
    dVar1 = (pTVar17->Scale3D).XY.m128d_f64[1];
    (this->CurrentMeshTransform).Scale3D.XY.m128d_f64[0] = (pTVar17->Scale3D).XY.m128d_f64[0];
    (this->CurrentMeshTransform).Scale3D.XY.m128d_f64[1] = dVar1;
    dVar1 = (pTVar17->Scale3D).ZW.m128d_f64[1];
    (this->CurrentMeshTransform).Scale3D.ZW.m128d_f64[0] = (pTVar17->Scale3D).ZW.m128d_f64[0];
    (this->CurrentMeshTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
    UMeshOpPreviewWithBackgroundCompute::ChangeOpFactory
              ((pUVar7->Preview).field0_0x0.DebugPtr,pIVar25);
    local_c8._16_8_ = this;
    TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
    ::
    AddWeakLambda<UPolyEditExtrudeEdgeActivity,_UPolyEditExtrudeEdgeActivity::Start_::__l2::<lambda_1>_>
              ((TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
                *)&((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
                   OnOpCompleted,(UPolyEditExtrudeEdgeActivity *)local_c8,(<lambda_1> *)this);
    local_c8._16_8_ = this;
    TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
    ::
    AddWeakLambda<UPolyEditExtrudeEdgeActivity,_UPolyEditExtrudeEdgeActivity::Start_::__l2::<lambda_2>_>
              ((TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
                *)&((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
                   OnMeshUpdated,(UPolyEditExtrudeEdgeActivity *)local_c8,(<lambda_2> *)this);
    pUVar14 = GetTransientPackageAsObject();
    this_00 = NewObject<UPreviewGeometry>(pUVar14);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UPreviewGeometry *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)this_00);
    }
    (this->PreviewGeometry).field0_0x0.DebugPtr = this_00;
    pUVar18 = (UWorld *)
              (**(code **)(((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.
                           DebugPtr)->_padding_ + 0x180))();
    UPreviewGeometry::CreateInWorld(this_00,pUVar18,&UE::Math::TTransform<double>::Identity);
    UPreviewGeometry::SetTransform
              ((this->PreviewGeometry).field0_0x0.DebugPtr,&this->CurrentMeshTransform);
    (**(code **)(*(longlong *)this + 0x2d8))(this,(this->Settings).field0_0x0.DebugPtr,1);
    pUVar7 = (this->ActivityContext).field0_0x0.DebugPtr;
    this->bIsRunning = true;
    pUVar8 = (pUVar7->SelectionMechanic).field0_0x0.DebugPtr;
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&(this->ActiveSelection).SelectedGroupIDs,
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&pUVar8->_padding_);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&(this->ActiveSelection).SelectedCornerIDs,
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&pUVar8->_padding_);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=
              (&(this->ActiveSelection).SelectedEdgeIDs,
               (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)&pUVar8->_padding_);
    UMeshTopologySelectionMechanic::ClearSelection
              ((UMeshTopologySelectionMechanic *)
               (((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.
               DebugPtr);
    this->bRevertedSelection = false;
    GatherSelectedEids(this);
    pUVar19 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
    this_01 = (UInteractiveToolManager *)(**(code **)(pUVar19->_padding_ + 0x2d8))(pUVar19);
    pUVar20 = UInteractiveToolManager::GetPairedGizmoManager(this_01);
    local_c8._0_8_ = (ITextData *)0x0;
    local_c8._8_8_ = 0;
    pUVar21 = UE::TransformGizmoUtil::CreateCustomTransformGizmo
                        (pUVar20,TranslatePlaneXZ|TranslateAxisZ|TranslateAxisX,this,
                         (FString *)local_c8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar21 != (UCombinedTransformGizmo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar21);
    }
    (this->ExtrudeFrameGizmo).field0_0x0.DebugPtr = pUVar21;
    if ((ITextData *)local_c8._0_8_ != (ITextData *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    pUVar21 = (this->ExtrudeFrameGizmo).field0_0x0.DebugPtr;
    pcVar6 = *(code **)(*(longlong *)pUVar21 + 0x330);
    pUVar19 = UInteractionMechanic::GetParentTool((UInteractionMechanic *)this);
    lVar22 = (**(code **)(pUVar19->_padding_ + 0x2d8))(pUVar19);
    pIVar25 = (IDynamicMeshOperatorFactory *)(lVar22 + 0x28);
    if (lVar22 == 0) {
      pIVar25 = (IDynamicMeshOperatorFactory *)0x0;
    }
    (*pcVar6)(pUVar21,(this->ExtrudeFrameProxy).field0_0x0.DebugPtr,pIVar25);
    pUVar21 = (this->ExtrudeFrameGizmo).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar21 + 0x360))(pUVar21,0);
    local_c8._0_8_ = (ITextData *)0x0;
    local_c8._8_8_ = 0;
    ((this->ExtrudeFrameGizmo).field0_0x0.DebugPtr)->bUseContextCoordinateSystem = false;
    ((this->ExtrudeFrameGizmo).field0_0x0.DebugPtr)->CurrentCoordinateSystem = Local;
    pUVar21 = UE::TransformGizmoUtil::CreateCustomTransformGizmo
                        (pUVar20,TranslateAllPlanes|TranslateAllAxes,this,(FString *)local_c8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar21 != (UCombinedTransformGizmo *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar21);
    }
    (this->SingleDirectionGizmo).field0_0x0.DebugPtr = pUVar21;
    if ((ITextData *)local_c8._0_8_ != (ITextData *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
    pUVar21 = (this->SingleDirectionGizmo).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar21 + 0x330))
              (pUVar21,(this->SingleDirectionProxy).field0_0x0.DebugPtr,0);
    pUVar21 = (this->SingleDirectionGizmo).field0_0x0.DebugPtr;
    (**(code **)(*(longlong *)pUVar21 + 0x360))(pUVar21,0);
    RecalculateGizmoExtrudeFrame(this);
    dVar1 = (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Z;
    dVar2 = (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Y;
    dVar3 = (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.X;
    dVar26 = dVar1 + dVar1;
    dVar4 = (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.W;
    pUVar9 = (this->Settings).field0_0x0.DebugPtr;
    dVar11 = dVar2 + dVar2;
    dVar5 = pUVar9->Distance;
    (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.X =
         (__real_3ff0000000000000 - (dVar26 * dVar1 + dVar11 * dVar2)) * dVar5;
    (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.Y =
         (dVar4 * dVar26 + dVar3 * dVar11) * dVar5;
    (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.Z =
         (dVar3 * dVar26 - dVar4 * dVar11) * dVar5;
    dVar1 = pUVar9->Distance;
    dVar2 = dVar1 * UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    auVar10._8_4_ = SUB84(UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y * dVar1,0);
    auVar10._0_8_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X * dVar1;
    auVar10._12_4_ =
         (int)((ulonglong)(UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y * dVar1) >> 0x20
              );
    *(undefined1 (*) [16])&(this->ParamsInWorldExtrudeFrame).field0_0x0 = auVar10;
    (this->ParamsInWorldExtrudeFrame).field0_0x0._s_0.Z = dVar2;
    UpdateGizmosFromCurrentParams(this);
    UpdateGizmoVisibility(this);
    UMeshOpPreviewWithBackgroundCompute::InvalidateResult
              ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
    pUVar7 = (this->ActivityContext).field0_0x0.DebugPtr;
    pFVar16 = FText::AsLocalizable_Advanced_LocText
                        ((FText *)local_c8,L"PolyEditExtrudeEdgeActivity",
                         L"BeginExtrudeEdgeActivity",L"Begin Extrude Edges");
    UE::Core::Private::Function::CheckCallable(*(void **)&pUVar7->EmitActivityStart);
    pcVar6 = *(code **)&pUVar7->EmitActivityStart;
    plVar15 = *(longlong **)&(pUVar7->EmitActivityStart).field_0x28;
    plVar24 = (longlong *)&(pUVar7->EmitActivityStart).field_0x10;
    if (plVar15 != (longlong *)0x0) {
      plVar24 = plVar15;
    }
    uVar23 = (**(code **)(*plVar24 + 8))();
    (*pcVar6)(uVar23,pFVar16);
    if ((ITextData *)local_c8._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_c8._0_8_ + 0x10))();
    }
    EVar13 = Running;
  }
  return EVar13;
}

// StaticRegisterNativesUPolyEditExtrudeEdgeActivity @ 14cd81420

void __cdecl UPolyEditExtrudeEdgeActivity::StaticRegisterNativesUPolyEditExtrudeEdgeActivity(void)

{
  return;
}

// Tick @ 14cd816e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPolyEditExtrudeEdgeActivity::Tick(UPolyEditExtrudeEdgeActivity *this,float param_1)

{
  return;
}

// UpdateDistanceFromParams @ 14cd82a20

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
UPolyEditExtrudeEdgeActivity::UpdateDistanceFromParams(UPolyEditExtrudeEdgeActivity *this)

{
  UPolyEditExtrudeEdgeActivityProperties *pUVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  TVector<double>_u_0 local_28;
  
  pUVar1 = (this->Settings).field0_0x0.DebugPtr;
  if (pUVar1->DirectionMode == SingleDirection) {
    local_28._s_0.Z = (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.Z;
    local_28._s_0.Y = (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.X;
    local_28._s_0.X = (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.Y;
  }
  else {
    UE::Geometry::operator*<double>
              ((TVector<double> *)&local_28._s_0,&(this->ExtrudeFrameForGizmoWorldSpace).Rotation,
               &this->ParamsInWorldExtrudeFrame);
  }
  auVar2._0_8_ = local_28._s_0.Y * local_28._s_0.Y;
  auVar2._8_8_ = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_28._s_0.X * local_28._s_0.X + auVar2._0_8_ +
                 local_28._s_0.Z * local_28._s_0.Z;
  auVar3 = sqrtpd(auVar2,auVar3);
  pUVar1->Distance = auVar3._0_8_;
  return;
}

// UpdateDrawnPreviewEdges @ 14cd82ab0

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
UPolyEditExtrudeEdgeActivity::UpdateDrawnPreviewEdges(UPolyEditExtrudeEdgeActivity *this)

{
  UPolyEditActivityContext *pUVar1;
  UMeshOpPreviewWithBackgroundCompute *pUVar2;
  UPreviewMesh *pUVar3;
  UPolyEditExtrudeEdgeActivity *local_res8 [4];
  code *local_18;
  UPolyEditExtrudeEdgeActivity **local_10;
  
  if ((((this->bIsRunning != false) &&
       (pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr,
       pUVar1 != (UPolyEditActivityContext *)0x0)) &&
      (pUVar2 = (pUVar1->Preview).field0_0x0.DebugPtr,
      pUVar2 != (UMeshOpPreviewWithBackgroundCompute *)0x0)) &&
     ((pUVar3 = (pUVar2->PreviewMesh).field0_0x0.DebugPtr, pUVar3 != (UPreviewMesh *)0x0 &&
      ((this->PreviewGeometry).field0_0x0.DebugPtr != (UPreviewGeometry *)0x0)))) {
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UPolyEditExtrudeEdgeActivity::UpdateDrawnPreviewEdges'::__l2::<lambda_1>,void,UE::Geometry::FDynamicMesh3_const_&>
               ::Call;
    local_res8[0] = this;
    (**(code **)(*(longlong *)pUVar3 + 0x2b0))(pUVar3,&local_18);
  }
  return;
}

// UpdateGizmoVisibility @ 14cd82b20

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
UPolyEditExtrudeEdgeActivity::UpdateGizmoVisibility(UPolyEditExtrudeEdgeActivity *this)

{
  UCombinedTransformGizmo *pUVar1;
  UCombinedTransformGizmo *pUVar2;
  UPolyEditExtrudeEdgeActivityProperties *pUVar3;
  code *pcVar4;
  bool bVar5;
  
  if (this->bIsRunning != false) {
    pUVar1 = (this->SingleDirectionGizmo).field0_0x0.DebugPtr;
    if ((pUVar1 != (UCombinedTransformGizmo *)0x0) &&
       (pUVar2 = (this->ExtrudeFrameGizmo).field0_0x0.DebugPtr,
       pUVar2 != (UCombinedTransformGizmo *)0x0)) {
      pUVar3 = (this->Settings).field0_0x0.DebugPtr;
      if (pUVar3->DistanceMode == Fixed) {
        (**(code **)(*(longlong *)pUVar1 + 0x360))(pUVar1,0);
        pUVar1 = (this->ExtrudeFrameGizmo).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cd82b6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(longlong *)pUVar1 + 0x360))(pUVar1,0);
        return;
      }
      (**(code **)(*(longlong *)pUVar2 + 0x360))(pUVar2,pUVar3->DirectionMode == LocalExtrudeFrames)
      ;
      pUVar1 = (this->SingleDirectionGizmo).field0_0x0.DebugPtr;
                    /* WARNING: Could not recover jumptable at 0x00014cd82ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)pUVar1 + 0x360))
                (pUVar1,((this->Settings).field0_0x0.DebugPtr)->DirectionMode == SingleDirection);
      return;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8341837429644197376>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditExtrudeEdgeActivity.cpp"
                       ,0x200,"SingleDirectionGizmo && ExtrudeFrameGizmo");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}

// UpdateGizmosFromCurrentParams @ 14cd82bf0

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
UPolyEditExtrudeEdgeActivity::UpdateGizmosFromCurrentParams(UPolyEditExtrudeEdgeActivity *this)

{
  TQuaternion<double> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  TVector<double> *pTVar11;
  double dVar12;
  undefined1 auStack_128 [32];
  TVector<double> local_108;
  TOptional<UE::Math::TTransform<double>_> local_e8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_128;
  dVar2 = (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.X;
  pTVar1 = &(this->ExtrudeFrameForGizmoWorldSpace).Rotation;
  dVar3 = (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.Y;
  dVar4 = (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.Z;
  pTVar11 = UE::Geometry::operator*<double>(&local_108,pTVar1,&this->ParamsInWorldExtrudeFrame);
  dVar10 = _UNK_150689688;
  dVar9 = ___xmm_3ff00000000000003ff0000000000000;
  dVar8 = _UNK_150689518;
  dVar7 = ___xmm_00000000000000003ff0000000000000;
  local_e8.TypedValue.Rotation.XY.m128d_f64[0] = (pTVar1->field0_0x0)._s_0.X;
  local_e8.TypedValue.Rotation.XY.m128d_f64[1] =
       (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Y;
  local_e8.TypedValue.Rotation.ZW.m128d_f64[0] =
       (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Z;
  local_e8.TypedValue.Rotation.ZW.m128d_f64[1] =
       (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.W;
  dVar5 = (pTVar11->field0_0x0)._s_0.X;
  dVar12 = dVar3 + (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.Y;
  dVar3 = dVar3 + (pTVar11->field0_0x0)._s_0.Y;
  local_e8.TypedValue.Translation.ZW.m128d_f64[0] =
       dVar4 + (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.Z;
  dVar6 = (pTVar11->field0_0x0)._s_0.Z;
  local_e8.TypedValue.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_e8.TypedValue.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_e8.TypedValue.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar12,0);
  local_e8.TypedValue.Translation.XY.m128d_f64[0] =
       dVar2 + (this->SingleDirectionVectorWorldSpace).field0_0x0._s_0.X;
  local_e8.TypedValue.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar12 >> 0x20);
  local_e8.TypedValue.Translation.ZW.m128d_f64[1] = 0.0;
  local_e8.TypedValue.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_e8.TypedValue.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  UCombinedTransformGizmo::ReinitializeGizmoTransform
            ((this->SingleDirectionGizmo).field0_0x0.DebugPtr,&local_e8.TypedValue,true);
  local_e8.TypedValue.Rotation.XY.m128d_f64[0] = (pTVar1->field0_0x0)._s_0.X;
  local_e8.TypedValue.Rotation.XY.m128d_f64[1] =
       (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Y;
  local_e8.TypedValue.Rotation.ZW.m128d_f64[0] =
       (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Z;
  local_e8.TypedValue.Rotation.ZW.m128d_f64[1] =
       (double)CONCAT44((int)((ulonglong)
                              *(undefined8 *)
                               ((longlong)
                                &(this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0 + 0x18)
                             >> 0x20),
                        *(undefined4 *)
                         ((longlong)&(this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0 +
                         0x18));
  local_e8.TypedValue.Translation.ZW.m128d_f64[1] = 0.0;
  local_e8.TypedValue.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar3,0);
  local_e8.TypedValue.Translation.XY.m128d_f64[0] = dVar2 + dVar5;
  local_e8.TypedValue.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_e8.TypedValue.Scale3D.XY.m128d_f64[0] = dVar9;
  local_e8.TypedValue.Scale3D.XY.m128d_f64[1] = dVar10;
  local_e8.TypedValue.Scale3D.ZW.m128d_f64[0] = dVar7;
  local_e8.TypedValue.Scale3D.ZW.m128d_f64[1] = dVar8;
  local_e8.TypedValue.Translation.ZW.m128d_f64[0] = dVar4 + dVar6;
  UCombinedTransformGizmo::ReinitializeGizmoTransform
            ((this->ExtrudeFrameGizmo).field0_0x0.DebugPtr,&local_e8.TypedValue,true);
  local_e8.TypedValue.Translation.XY.m128d_f64 =
       *(double (*) [2])&(this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0;
  local_e8.TypedValue.Rotation.XY.m128d_f64[0] = (pTVar1->field0_0x0)._s_0.X;
  local_e8.TypedValue.Rotation.XY.m128d_f64[1] =
       (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Y;
  local_e8.bIsSet = true;
  local_e8.TypedValue.Rotation.ZW.m128d_f64[0] =
       (this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0._s_0.Z;
  local_e8.TypedValue.Translation.ZW.m128d_f64[0] =
       (this->ExtrudeFrameForGizmoWorldSpace).Origin.field0_0x0._s_0.Z;
  local_e8.TypedValue.Rotation.ZW.m128d_f64[1] =
       (double)CONCAT44((int)((ulonglong)
                              *(undefined8 *)
                               ((longlong)
                                &(this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0 + 0x18)
                             >> 0x20),
                        *(undefined4 *)
                         ((longlong)&(this->ExtrudeFrameForGizmoWorldSpace).Rotation.field0_0x0 +
                         0x18));
  local_e8.TypedValue.Scale3D.XY.m128d_f64[0] = dVar9;
  local_e8.TypedValue.Scale3D.XY.m128d_f64[1] = dVar10;
  local_e8.TypedValue.Translation.ZW.m128d_f64[1] = 0.0;
  local_e8.TypedValue.Scale3D.ZW.m128d_f64[0] = dVar7;
  local_e8.TypedValue.Scale3D.ZW.m128d_f64[1] = dVar8;
  UCombinedTransformGizmo::SetDisplaySpaceTransform
            ((this->ExtrudeFrameGizmo).field0_0x0.DebugPtr,&local_e8);
  return;
}

// __VTableCtorCaller @ 14cd86610

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UPolyEditExtrudeEdgeActivity::__VTableCtorCaller(FVTableHelper *param_1)

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
  UObject *pUVar10;
  UClass *pUVar11;
  UInteractiveToolActivity *this;
  
  pUVar10 = GetTransientPackageAsObject();
  pUVar11 = GetPrivateStaticClass();
  this = (UInteractiveToolActivity *)
         StaticAllocateObject
                   (pUVar11,pUVar10,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UInteractiveToolActivity *)0x0) {
    UInteractiveToolActivity::UInteractiveToolActivity(this,param_1);
    this[2].field_0x10 = 0;
    *(undefined ***)this = &_vftable__for__UInteractiveToolActivity__;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined ***)(this + 1) = &_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
    *(undefined8 *)&this[3].field_0x18 = 0x3ff0000000000000;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[2].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[2].field_0x20 = uVar9;
    *(double *)&this[2].field_0x28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0x3ff0000000000000;
    this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0x3ff0000000000000;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x18 = 0x3ff0000000000000;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    *(double *)&this[4].field_0x18 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    *(undefined8 *)&this[4].field_0x20 = uVar9;
    *(double *)&this[4].field_0x28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0x3ff0000000000000;
    UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
              ((FGroupTopologySelection *)&this[6].field_0x20);
    *(undefined8 *)&this[0xb].field_0x28 = 0;
    *(undefined8 *)(this + 0xc) = 0;
    *(undefined8 *)&this[0xc].field_0x8 = 0;
    *(undefined8 *)&this[0xc].field_0x10 = 0;
    *(undefined8 *)&this[0xc].field_0x18 = 0;
    *(undefined8 *)&this[0xc].field_0x20 = 0;
    *(undefined8 *)&this[0xc].field_0x28 = 0;
    *(undefined8 *)(this + 0xd) = 0;
    this[0xb].field_0x20 = 0;
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
    auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[0xd].field_0x10 = auVar3;
    auVar4._8_4_ = SUB84((double)fVar2,0);
    auVar4._0_8_ = (double)fVar1;
    auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])&this[0xd].field_0x20 = auVar4;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
    auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])(this + 0xe) = auVar5;
    auVar6._8_4_ = SUB84((double)fVar2,0);
    auVar6._0_8_ = (double)fVar1;
    auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])&this[0xe].field_0x10 = auVar6;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
    auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    *(undefined1 (*) [16])&this[0xe].field_0x20 = auVar7;
    auVar8._8_4_ = SUB84((double)fVar2,0);
    auVar8._0_8_ = (double)fVar1;
    auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
    *(undefined1 (*) [16])(this + 0xf) = auVar8;
    this[0xf].field_0x10 = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

