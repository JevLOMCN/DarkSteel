// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 32

// StaticClass @ 14cd41cf0

UClass * __cdecl UPolyEditInsertEdgeActivity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditInsertEdgeActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditInsertEdgeActivity",
               &Z_Registration_Info_UClass_UPolyEditInsertEdgeActivity.InnerSingleton,
               StaticRegisterNativesUPolyEditInsertEdgeActivity,0x4a0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditInsertEdgeActivity>,
               InternalVTableHelperCtorCaller<UPolyEditInsertEdgeActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditInsertEdgeActivity.InnerSingleton;
}

// UPolyEditInsertEdgeActivity @ 14cd50520

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPolyEditInsertEdgeActivity * __thiscall
UPolyEditInsertEdgeActivity::UPolyEditInsertEdgeActivity
          (UPolyEditInsertEdgeActivity *this,FVTableHelper *param_1)

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
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->bIsRunning = false;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->Settings).field0_0x0.DebugPtr = (UGroupEdgeInsertionProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Scale3D.ZW.m128d_f64 = auVar8;
  (this->PreviewEdges).ArrayNum = 0;
  (this->PreviewEdges).ArrayMax = 0;
  (this->PreviewPoints).ArrayNum = 0;
  (this->PreviewPoints).ArrayMax = 0;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->TopologySelector).Object = (FMeshTopologySelector *)0x0;
  (this->TopologySelector).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PreviewEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviewPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  FToolDataVisualizer::FToolDataVisualizer(&this->ExistingEdgesRenderer);
  FToolDataVisualizer::FToolDataVisualizer(&this->PreviewEdgeRenderer);
  (this->TopologySelectorSettings).bEnableFaceHits = true;
  (this->TopologySelectorSettings).bEnableEdgeHits = true;
  (this->TopologySelectorSettings).bEnableCornerHits = true;
  (this->TopologySelectorSettings).bHitBackFaces = true;
  (this->TopologySelectorSettings).bPreferProjectedElement = false;
  (this->TopologySelectorSettings).bSelectDownRay = false;
  (this->TopologySelectorSettings).bIgnoreOcclusion = false;
  this->StartTopologyID = -1;
  this->bStartIsCorner = false;
  this->EndTopologyID = -1;
  this->bEndIsCorner = false;
  this->CommonGroupID = -1;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->CommonBoundaryIndex = -1;
  (this->LastEndPointWorldRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastEndPointWorldRay).Origin.field0_0x0._s_0.Y = (double)uVar9;
  (this->LastEndPointWorldRay).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastEndPointWorldRay).Direction.field0_0x0._s_0.X = 0.0;
  (this->LastEndPointWorldRay).Direction.field0_0x0._s_0.Y = 0.0;
  (this->LastEndPointWorldRay).Direction.field0_0x0._s_0.Z = 1.0;
  this->ToolState = GettingStart;
  this->bShowingBaseMesh = false;
  this->bLastComputeSucceeded = false;
  (this->LatestOpTopologyResult).Object = (FGroupTopology *)0x0;
  (this->LatestOpTopologyResult).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LatestOpChangedTids).Object = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  (this->LatestOpChangedTids).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->CurrentChangeStamp = 0;
  (this->ComputeStartMesh).Object = (FDynamicMesh3 *)0x0;
  (this->ComputeStartMesh).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ComputeStartTopology).Object = (FGroupTopology *)0x0;
  (this->ComputeStartTopology).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UPolyEditInsertEdgeActivity @ 14cd50750

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPolyEditInsertEdgeActivity * __thiscall
UPolyEditInsertEdgeActivity::UPolyEditInsertEdgeActivity(UPolyEditInsertEdgeActivity *this)

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
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->bIsRunning = false;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->Settings).field0_0x0.DebugPtr = (UGroupEdgeInsertionProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(this->TargetTransform).Scale3D.ZW.m128d_f64 = auVar8;
  (this->PreviewEdges).ArrayNum = 0;
  (this->PreviewEdges).ArrayMax = 0;
  (this->PreviewPoints).ArrayNum = 0;
  (this->PreviewPoints).ArrayMax = 0;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->TopologySelector).Object = (FMeshTopologySelector *)0x0;
  (this->TopologySelector).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PreviewEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PreviewPoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  FToolDataVisualizer::FToolDataVisualizer(&this->ExistingEdgesRenderer);
  FToolDataVisualizer::FToolDataVisualizer(&this->PreviewEdgeRenderer);
  (this->TopologySelectorSettings).bEnableFaceHits = true;
  (this->TopologySelectorSettings).bEnableEdgeHits = true;
  (this->TopologySelectorSettings).bEnableCornerHits = true;
  (this->TopologySelectorSettings).bHitBackFaces = true;
  (this->TopologySelectorSettings).bPreferProjectedElement = false;
  (this->TopologySelectorSettings).bSelectDownRay = false;
  (this->TopologySelectorSettings).bIgnoreOcclusion = false;
  this->StartTopologyID = -1;
  this->bStartIsCorner = false;
  this->EndTopologyID = -1;
  this->bEndIsCorner = false;
  this->CommonGroupID = -1;
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->CommonBoundaryIndex = -1;
  (this->LastEndPointWorldRay).Origin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->LastEndPointWorldRay).Origin.field0_0x0._s_0.Y = (double)uVar9;
  (this->LastEndPointWorldRay).Origin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->LastEndPointWorldRay).Direction.field0_0x0._s_0.X = 0.0;
  (this->LastEndPointWorldRay).Direction.field0_0x0._s_0.Y = 0.0;
  (this->LastEndPointWorldRay).Direction.field0_0x0._s_0.Z = 1.0;
  this->ToolState = GettingStart;
  this->bShowingBaseMesh = false;
  this->bLastComputeSucceeded = false;
  (this->LatestOpTopologyResult).Object = (FGroupTopology *)0x0;
  (this->LatestOpTopologyResult).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LatestOpChangedTids).Object = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  (this->LatestOpChangedTids).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->CurrentChangeStamp = 0;
  (this->ComputeStartMesh).Object = (FDynamicMesh3 *)0x0;
  (this->ComputeStartMesh).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ComputeStartTopology).Object = (FGroupTopology *)0x0;
  (this->ComputeStartTopology).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UPolyEditInsertEdgeActivity @ 14cd53580

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
UPolyEditInsertEdgeActivity::~UPolyEditInsertEdgeActivity(UPolyEditInsertEdgeActivity *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComputeStartTopology).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComputeStartMesh).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LatestOpChangedTids).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LatestOpTopologyResult).SharedReferenceCount.ReferenceController);
  FToolDataVisualizer::~FToolDataVisualizer(&this->PreviewEdgeRenderer);
  FToolDataVisualizer::~FToolDataVisualizer(&this->ExistingEdgesRenderer);
  pFVar1 = (this->PreviewPoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviewEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TopologySelector).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  this->_padding_ = (longlong)&___7UInteractiveToolActivity__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// operator() @ 14cd548a0

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
`UPolyEditInsertEdgeActivity::Setup'::__l2::<lambda_1>::operator()(void *this,bool param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  UPolyEditInsertEdgeActivity::UpdateComputeInputs(*(UPolyEditInsertEdgeActivity **)this);
  *(undefined4 *)(*(longlong *)this + 0x450) = 0;
  lVar1 = *(longlong *)this;
  UMeshOpPreviewWithBackgroundCompute::CancelCompute
            (*(UMeshOpPreviewWithBackgroundCompute **)(*(longlong *)(lVar1 + 0x50) + 0x40));
  UPreviewMesh::UpdatePreview
            (*(UPreviewMesh **)(*(longlong *)(*(longlong *)(lVar1 + 0x50) + 0x40) + 0x68),
             *(FDynamicMesh3 **)(*(longlong *)(lVar1 + 0x50) + 0x30),FullUpdate,AllVertexAttribs);
  *(undefined1 *)(lVar1 + 0x454) = 1;
  *(undefined4 *)(lVar1 + 0xd8) = 0;
  if (*(int *)(lVar1 + 0xdc) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)(lVar1 + 0xd0),0,(int *)(lVar1 + 0xdc));
  }
  *(undefined4 *)(lVar1 + 0xe8) = 0;
  if (*(int *)(lVar1 + 0xec) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)(lVar1 + 0xe0),0,(int *)(lVar1 + 0xec));
  }
  if (*(int *)(lVar1 + 0x450) == 1) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8292026993105436315>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditInsertEdgeActivity.cpp"
                       ,0x165,"ToolState != EState::GettingEnd");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined4 *)(lVar1 + 0x450) = 0;
  }
  return;
}

// operator() @ 14cd549b0

void __thiscall
`UPolyEditInsertEdgeActivity::SetupPreview'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMeshOperator *param_1)

{
  longlong lVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  TReferenceControllerBase<1> *pTVar5;
  undefined8 *puVar6;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  lVar1 = *(longlong *)this;
  puVar6 = (undefined8 *)(lVar1 + 0x458);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar6 != &local_28) {
    *puVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x460),&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  lVar1 = *(longlong *)this;
  puVar6 = (undefined8 *)(lVar1 + 0x468);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar6 != &local_18) {
    *puVar6 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar1 + 0x470),&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  lVar1 = *(longlong *)this;
  *(undefined4 *)(lVar1 + 0xd8) = 0;
  if (*(int *)(lVar1 + 0xdc) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)(lVar1 + 0xd0),0,(int *)(lVar1 + 0xdc));
  }
  lVar1 = *(longlong *)this;
  if (param_1[1]._padding_ != *(longlong *)(lVar1 + 0x480)) {
    *(undefined1 *)(lVar1 + 0x455) = 0;
    return;
  }
  *(undefined1 *)(lVar1 + 0x455) =
       *(undefined1 *)&param_1[2].ResultInfo.Warnings.AllocatorInstance.Data;
  if (*(char *)(*(longlong *)this + 0x455) != '\0') {
    UE::Geometry::FGroupEdgeInsertionOp::GetEdgeLocations
              ((FGroupEdgeInsertionOp *)param_1,
               (TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
                *)(*(longlong *)this + 0xd0));
    lVar1 = *(longlong *)&param_1[2].ResultInfo.Errors.ArrayNum;
    lVar2 = *(longlong *)this;
    pFVar3 = param_1[2].ResultInfo.Errors.AllocatorInstance.Data;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar5 = *(TReferenceControllerBase<1> **)(lVar2 + 0x460);
    *(FScriptContainerElement **)(lVar2 + 0x458) = pFVar3;
    *(longlong *)(lVar2 + 0x460) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    lVar1 = *(longlong *)&param_1[2].ResultInfo;
    lVar2 = *(longlong *)this;
    dVar4 = param_1[2].ResultTransform.Scale3D.field0_0x0._s_0.Z;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    pTVar5 = *(TReferenceControllerBase<1> **)(lVar2 + 0x470);
    *(double *)(lVar2 + 0x468) = dVar4;
    *(longlong *)(lVar2 + 0x470) = lVar1;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return;
}

// BeginHoverSequenceHitTest @ 14cd5f470

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
UPolyEditInsertEdgeActivity::BeginHoverSequenceHitTest
          (UPolyEditInsertEdgeActivity *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  char cVar10;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar11;
  longlong *plVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStackY_158 [32];
  FWeakObjectPtr local_128;
  FWeakObjectPtr local_120;
  undefined8 local_118;
  undefined8 local_110;
  TVector<double>_u_0 local_108;
  TVector<double>_u_0 local_f0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  longlong local_a8;
  longlong local_98;
  uint uStack_90;
  int iStack_8c;
  void *local_88;
  longlong *plStack_80;
  undefined1 local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  if ((char)this->_padding_ == '\0') {
    return __return_storage_ptr__;
  }
  if (this->CommonGroupID == 0) {
    iVar7 = *(int *)((longlong)(this->TargetTransform).Scale3D.ZW.m128d_f64 + 4);
    *(undefined4 *)(this->TargetTransform).Scale3D.ZW.m128d_f64 = 0;
    if (iVar7 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)((this->TargetTransform).Scale3D.XY.m128d_f64 + 1),0,
                 (int *)((longlong)(this->TargetTransform).Scale3D.ZW.m128d_f64 + 4));
    }
    bVar9 = TopologyHitTest((UPolyEditInsertEdgeActivity *)&this[-1].LatestOpChangedTids,
                            &param_1->WorldRay,(TVector<double> *)&local_108._s_0,
                            (TRay<double> *)0x0);
    if (!bVar9) {
      return __return_storage_ptr__;
    }
    dVar1 = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
    dVar2 = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
    dVar3 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
    dVar4 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
    local_b8 = CONCAT71(local_b8._1_7_,1);
    dVar5 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
    uStack_90 = uStack_90 & 0xffffff00;
    dVar6 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
    iStack_8c = 0;
    uVar13 = (undefined4)__real_3ff0000000000000;
    uVar14 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_88 = (void *)0x0;
    local_128.ObjectIndex = 0;
    local_128.ObjectSerialNumber = 0;
    local_110 = 0;
    FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_110);
    *(undefined4 *)__return_storage_ptr__ = (undefined4)local_b8;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = local_b8._4_4_;
    __return_storage_ptr__->HitDepth =
         (local_108._s_0.Y - dVar3) * dVar6 + (local_108._s_0.X - dVar1) * dVar4 +
         (local_108._s_0.Z - dVar2) * dVar5;
  }
  else {
    if (this->CommonGroupID != 1) {
      return __return_storage_ptr__;
    }
    uVar13 = (undefined4)__real_3ff0000000000000;
    uVar14 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_f0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_f0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_f0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_c8 = __real_3ff0000000000000;
    local_d8 = 0;
    uStack_d0 = 0;
    bVar9 = TopologyHitTest((UPolyEditInsertEdgeActivity *)&this[-1].LatestOpChangedTids,
                            &param_1->WorldRay,(TVector<double> *)&local_108._s_0,
                            (TRay<double> *)&local_f0._s_0);
    if (!bVar9) {
      local_118 = 0;
      local_120.ObjectIndex = -1;
      pTVar11 = TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>::operator->
                          ((TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>
                            *)(this->_padding_ + 0x58));
      local_b8 = __real_7fefffffffffffff;
      local_a8 = 0;
      plStack_80 = (longlong *)0x0;
      local_78 = 0;
      cVar10 = (**(code **)(pTVar11->_padding_ + 0x38))(pTVar11,&local_f0,&local_118,&local_120);
      if (local_a8 != 0) {
        plVar12 = &local_98;
        if (plStack_80 != (longlong *)0x0) {
          plVar12 = plStack_80;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      if (cVar10 == '\0') {
        return __return_storage_ptr__;
      }
      uVar15 = (undefined4)local_118;
      uVar8 = (ulonglong)local_118 >> 0x20;
      local_b8 = CONCAT71(local_b8._1_7_,1);
      uStack_90 = uStack_90 & 0xffffff00;
      iStack_8c = 0;
      local_88 = (void *)0x0;
      local_128.ObjectIndex = 0;
      local_128.ObjectSerialNumber = 0;
      local_110 = 0;
      FWeakObjectPtr::operator=(&local_128,(FObjectPtr)&local_110);
      *(undefined4 *)__return_storage_ptr__ = (undefined4)local_b8;
      *(undefined4 *)&__return_storage_ptr__->field_0x4 = local_b8._4_4_;
      *(undefined4 *)&__return_storage_ptr__->HitDepth = uVar15;
      *(int *)((longlong)&__return_storage_ptr__->HitDepth + 4) = (int)uVar8;
      (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = 0.0;
      (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = 0.0;
      goto LAB_14cd5f762;
    }
    dVar1 = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
    dVar2 = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
    dVar3 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
    dVar4 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
    local_b8 = CONCAT71(local_b8._1_7_,1);
    dVar5 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
    uStack_90 = uStack_90 & 0xffffff00;
    dVar6 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
    iStack_8c = 0;
    local_88 = (void *)0x0;
    local_120.ObjectIndex = 0;
    local_120.ObjectSerialNumber = 0;
    local_118 = 0;
    FWeakObjectPtr::operator=(&local_120,(FObjectPtr)&local_118);
    *(undefined4 *)__return_storage_ptr__ = (undefined4)local_b8;
    *(undefined4 *)&__return_storage_ptr__->field_0x4 = local_b8._4_4_;
    __return_storage_ptr__->HitDepth =
         (local_108._s_0.Y - dVar3) * dVar6 + (local_108._s_0.X - dVar1) * dVar4 +
         (local_108._s_0.Z - dVar2) * dVar5;
    local_128 = local_120;
  }
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = 0.0;
LAB_14cd5f762:
  *(undefined4 *)((longlong)&(__return_storage_ptr__->HitNormal).field0_0x0 + 0x10) = uVar13;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->HitNormal).field0_0x0 + 0x14) = uVar14;
  *(uint *)&__return_storage_ptr__->bHasHitNormal = uStack_90;
  __return_storage_ptr__->HitIdentifier = iStack_8c;
  __return_storage_ptr__->HitOwner = local_88;
  (__return_storage_ptr__->HitObject).WeakPtr = local_128;
  return __return_storage_ptr__;
}

// CanAccept @ 14cd62fc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPolyEditInsertEdgeActivity::CanAccept(UPolyEditInsertEdgeActivity *this)

{
  return this->ToolState != WaitingForInsertComplete;
}

// CanStart @ 14cd63c50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPolyEditInsertEdgeActivity::CanStart(UPolyEditInsertEdgeActivity *this)

{
  return true;
}

// ClearPreview @ 14cd649a0

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
UPolyEditInsertEdgeActivity::ClearPreview(UPolyEditInsertEdgeActivity *this,bool param_1)

{
  UPolyEditActivityContext *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  UMeshOpPreviewWithBackgroundCompute::CancelCompute
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
  pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
  UPreviewMesh::UpdatePreview
            ((((pUVar1->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (pUVar1->CurrentMesh).Object,FullUpdate,AllVertexAttribs);
  this->bShowingBaseMesh = true;
  if (param_1) {
    (this->PreviewEdges).ArrayNum = 0;
    if ((this->PreviewEdges).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->PreviewEdges).AllocatorInstance,0,&(this->PreviewEdges).ArrayMax);
    }
    (this->PreviewPoints).ArrayNum = 0;
    if ((this->PreviewPoints).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->PreviewPoints).AllocatorInstance,0,&(this->PreviewPoints).ArrayMax
                );
    }
    if (this->ToolState == GettingEnd) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8292026993105436315>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditInsertEdgeActivity.cpp"
                         ,0x165,"ToolState != EState::GettingEnd");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this->ToolState = GettingStart;
    }
  }
  return;
}

// ConditionallyUpdatePreview @ 14cd657b0

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
UPolyEditInsertEdgeActivity::ConditionallyUpdatePreview
          (UPolyEditInsertEdgeActivity *this,FGroupEdgeSplitPoint *param_1,int param_2,bool param_3,
          int param_4,int param_5)

{
  bool bVar1;
  double dVar2;
  bool bVar3;
  undefined3 uVar4;
  
  if ((((((this->bShowingBaseMesh == false) && (this->bEndIsCorner == param_3)) &&
        (this->EndTopologyID == param_2)) &&
       (((this->EndPoint).bIsVertex == param_1->bIsVertex &&
        ((this->EndPoint).ElementID == param_1->ElementID)))) &&
      ((param_1->bIsVertex != false || ((this->EndPoint).EdgeTValue == param_1->EdgeTValue)))) &&
     ((this->CommonGroupID == param_4 && (this->CommonBoundaryIndex == param_5)))) {
    return;
  }
  bVar1 = this->bStartIsCorner;
  bVar3 = param_1->bIsVertex;
  uVar4 = *(undefined3 *)&param_1->field_0x5;
  dVar2 = (param_1->Tangent).field0_0x0._s_0.X;
  (this->EndPoint).ElementID = param_1->ElementID;
  (this->EndPoint).bIsVertex = bVar3;
  *(undefined3 *)&(this->EndPoint).field_0x5 = uVar4;
  (this->EndPoint).Tangent.field0_0x0._s_0.X = dVar2;
  dVar2 = (param_1->Tangent).field0_0x0._s_0.Z;
  (this->EndPoint).Tangent.field0_0x0._s_0.Y = (param_1->Tangent).field0_0x0._s_0.Y;
  (this->EndPoint).Tangent.field0_0x0._s_0.Z = dVar2;
  (this->EndPoint).EdgeTValue = param_1->EdgeTValue;
  this->EndTopologyID = param_2;
  this->bEndIsCorner = param_3;
  this->CommonGroupID = param_4;
  this->CommonBoundaryIndex = param_5;
  if (bVar1 != false) {
    GetCornerTangent(this,this->StartTopologyID,param_4,param_5,&(this->StartPoint).Tangent);
  }
  if (this->bEndIsCorner != false) {
    GetCornerTangent(this,this->EndTopologyID,this->CommonGroupID,this->CommonBoundaryIndex,
                     &(this->EndPoint).Tangent);
  }
  this->bShowingBaseMesh = false;
  (this->PreviewEdges).ArrayNum = 0;
  if ((this->PreviewEdges).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->PreviewEdges).AllocatorInstance,0,&(this->PreviewEdges).ArrayMax);
  }
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
  return;
}

// End @ 14cd68a90

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

EToolActivityEndResult __thiscall
UPolyEditInsertEdgeActivity::End(UPolyEditInsertEdgeActivity *this,EToolShutdownType param_1)

{
  UPolyEditActivityContext *pUVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  EToolActivityEndResult EVar5;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (this->bIsRunning == false) {
    return ErrorDuringEnd;
  }
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->Settings).field0_0x0.DebugPtr,0);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((this->Settings).field0_0x0.DebugPtr)->_padding_);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
              OnOpCompleted,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
              OnMeshUpdated,this);
  pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
  this->ToolState = GettingStart;
  UMeshOpPreviewWithBackgroundCompute::CancelCompute((pUVar1->Preview).field0_0x0.DebugPtr);
  pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
  UPreviewMesh::UpdatePreview
            ((((pUVar1->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (pUVar1->CurrentMesh).Object,FullUpdate,AllVertexAttribs);
  this->bShowingBaseMesh = true;
  (this->PreviewEdges).ArrayNum = 0;
  if ((this->PreviewEdges).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->PreviewEdges).AllocatorInstance,0,&(this->PreviewEdges).ArrayMax);
  }
  (this->PreviewPoints).ArrayNum = 0;
  if ((this->PreviewPoints).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->PreviewPoints).AllocatorInstance,0,&(this->PreviewPoints).ArrayMax);
  }
  if (this->ToolState == GettingEnd) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8292026993105436315>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditInsertEdgeActivity.cpp"
                       ,0x165,"ToolState != EState::GettingEnd");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    this->ToolState = GettingStart;
  }
  UMeshOpPreviewWithBackgroundCompute::ClearOpFactory
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LatestOpTopologyResult != (TSharedPtr<UE::Geometry::FGroupTopology,1> *)&local_28) {
    (this->LatestOpTopologyResult).Object = (FGroupTopology *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LatestOpTopologyResult).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->LatestOpChangedTids !=
      (TSharedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,1> *)&local_18) {
    (this->LatestOpChangedTids).Object =
         (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->LatestOpChangedTids).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this->bIsRunning = false;
  cVar4 = (**(code **)(this->_padding_ + 0x308))(this);
  return (EToolActivityEndResult)(cVar4 == '\0');
}

// GetCornerTangent @ 14cd6b8d0

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
UPolyEditInsertEdgeActivity::GetCornerTangent
          (UPolyEditInsertEdgeActivity *this,int param_1,int param_2,int param_3,
          TVector<double> *param_4)

{
  double *pdVar1;
  undefined8 *puVar2;
  UPolyEditActivityContext *pUVar3;
  FGroupTopology *pFVar4;
  FScriptContainerElement *pFVar5;
  void *_Src;
  FDynamicMesh3 *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  uint *puVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  FGroup *pFVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  uint *puVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar26;
  double dVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 local_res20 [8];
  ForAnyElementType local_128;
  int local_120;
  int iStack_11c;
  ForAnyElementType local_118;
  int local_110;
  int local_10c;
  double local_108;
  double dStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  FScriptContainerElement *local_d8;
  uint *local_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double local_a0;
  
  uVar26 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (double)uVar26;
  lVar19 = (longlong)param_3;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
  if (((pUVar3->CurrentTopology).Object == (FGroupTopology *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar14 = UE::Geometry::FGroupTopology::GetCornerVertexID((pUVar3->CurrentTopology).Object,param_1)
  ;
  if ((uVar14 == 0xffffffff) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("CornerVid != FDynamicMesh3::InvalidID",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditInsertEdgeActivity.cpp"
                          ,0x30a,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
  if (((pUVar3->CurrentTopology).Object == (FGroupTopology *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar16 = UE::Geometry::FGroupTopology::FindGroupByID((pUVar3->CurrentTopology).Object,param_2);
  if ((((pFVar16 == (FGroup *)0x0) || (param_3 < 0)) || ((pFVar16->Boundaries).ArrayNum <= param_3))
     && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                            ("Group && BoundaryIndex >= 0 && BoundaryIndex < Group->Boundaries.Num()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditInsertEdgeActivity.cpp"
                             ,0x30d,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar17 = 0;
  if (param_3 < (pFVar16->Boundaries).ArrayNum) {
    uVar17 = (uint)~param_3 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_d8 = (pFVar16->Boundaries).AllocatorInstance.Data;
  local_128.Data = (FScriptContainerElement *)0x0;
  local_120 = 0;
  iStack_11c = 0;
  uVar17 = *(uint *)(local_d8 + lVar19 * 0x28 + 8);
  uVar18 = (ulonglong)(int)uVar17;
  puVar22 = *(uint **)(local_d8 + lVar19 * 0x28);
  local_d0 = puVar22 + uVar18;
  do {
    puVar12 = local_d0;
    if (*(int *)(local_d8 + lVar19 * 0x28 + 8) != (int)uVar18) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (puVar22 == puVar12) {
      if ((local_120 != 2) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("AdjacentPoints.Num() == 2",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditInsertEdgeActivity.cpp"
                              ,0x31d,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
      if (((pUVar3->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar19 = *(longlong *)
                ((((pUVar3->CurrentMesh).Object)->Vertices).Blocks.AllocatorInstance.Data +
                (ulonglong)(uVar14 >> 9) * 8);
      local_a0 = *(double *)(lVar19 + 0x10 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
      pdVar1 = (double *)(lVar19 + (ulonglong)(uVar14 & 0x1ff) * 0x18);
      dVar11 = *pdVar1;
      dVar30 = pdVar1[1];
      if ((local_120 < 1) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar31 = local_a0;
      dVar10 = __real_3ff0000000000000;
      dVar27 = dVar11 - *(double *)local_128.Data;
      dVar32 = local_a0 - *(double *)(local_128.Data + 0x10);
      dVar29 = dVar30 - *(double *)(local_128.Data + 8);
      local_b8 = SQRT(dVar29 * dVar29 + dVar27 * dVar27 + dVar32 * dVar32);
      if (local_b8 <= 0.0) {
        local_b8 = 0.0;
        dVar27 = 0.0;
        dVar29 = 0.0;
      }
      else {
        local_b8 = __real_3ff0000000000000 / local_b8;
        dVar27 = local_b8 * dVar27;
        dVar29 = local_b8 * dVar29;
        local_b8 = local_b8 * dVar32;
      }
      uVar28 = (undefined4)((ulonglong)dVar29 >> 0x20);
      auVar24._8_4_ = SUB84(dVar29,0);
      auVar24._0_8_ = dVar27;
      auVar24._12_4_ = uVar28;
      *(undefined1 (*) [16])&param_4->field0_0x0 = auVar24;
      (param_4->field0_0x0)._s_0.Z = local_b8;
      local_c8._8_4_ = SUB84(dVar29,0);
      local_c8._0_8_ = dVar27;
      local_c8._12_4_ = uVar28;
      if ((local_120 < 2) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      dVar11 = *(double *)(local_128.Data + 0x18) - dVar11;
      dVar30 = *(double *)(local_128.Data + 0x20) - dVar30;
      dVar31 = *(double *)(local_128.Data + 0x28) - dVar31;
      auVar23._0_8_ = dVar11 * dVar11;
      auVar23._8_8_ = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar30 * dVar30 + auVar23._0_8_ + dVar31 * dVar31;
      auVar24 = sqrtpd(auVar23,auVar8);
      if (auVar24._0_8_ <= 0.0) {
        dVar30 = 0.0;
        dVar31 = 0.0;
        dVar27 = 0.0;
      }
      else {
        dVar27 = dVar10 / auVar24._0_8_;
        dVar30 = dVar27 * dVar30;
        dVar31 = dVar27 * dVar31;
        dVar27 = dVar27 * dVar11;
      }
      dVar27 = dVar27 + (param_4->field0_0x0)._s_0.X;
      dVar30 = dVar30 + (param_4->field0_0x0)._s_0.Y;
      dVar31 = dVar31 + (param_4->field0_0x0)._s_0.Z;
      auVar25._0_8_ = dVar27 * dVar27;
      auVar25._8_8_ = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar30 * dVar30 + auVar25._0_8_ + dVar31 * dVar31;
      auVar24 = sqrtpd(auVar25,auVar9);
      if (auVar24._0_8_ <= 0.0) {
        dVar31 = 0.0;
        dVar30 = 0.0;
        dVar10 = 0.0;
      }
      else {
        dVar10 = dVar10 / auVar24._0_8_;
        dVar31 = dVar31 * dVar10;
        dVar30 = dVar30 * dVar10;
        dVar10 = dVar10 * dVar27;
      }
      (param_4->field0_0x0)._s_0.X = dVar10;
      (param_4->field0_0x0)._s_0.Y = dVar30;
      (param_4->field0_0x0)._s_0.Z = dVar31;
      if (local_128.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data);
      }
      return;
    }
    pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
    uVar15 = *puVar22;
    if (((pUVar3->CurrentTopology).Object == (FGroupTopology *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar4 = (pUVar3->CurrentTopology).Object;
    uVar21 = 0;
    if ((int)uVar15 < (pFVar4->Edges).ArrayNum) {
      uVar21 = ~uVar15 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = (pFVar4->Edges).AllocatorInstance.Data;
    local_118.Data = (FScriptContainerElement *)0x0;
    local_110 = *(int *)(pFVar5 + (longlong)(int)uVar15 * 0x50 + 0x18);
    lVar20 = (longlong)local_110;
    _Src = *(void **)(pFVar5 + (longlong)(int)uVar15 * 0x50 + 0x10);
    if (local_110 == 0) {
      local_10c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_110,0,&local_118,local_110,&local_10c);
      memcpy(local_118.Data,_Src,lVar20 << 2);
    }
    if ((local_110 < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(uint *)local_118.Data == uVar14) {
      pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
      if (((pUVar3->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (pUVar3->CurrentMesh).Object;
      if ((local_110 < 2) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar18 = (ulonglong)(*(uint *)(local_118.Data + 4) & 0x1ff);
      lVar20 = *(longlong *)
                ((pFVar6->Vertices).Blocks.AllocatorInstance.Data +
                (ulonglong)(*(uint *)(local_118.Data + 4) >> 9) * 8);
      pdVar1 = (double *)(lVar20 + uVar18 * 0x18);
      local_108 = *pdVar1;
      dStack_100 = pdVar1[1];
      local_f8 = *(undefined8 *)(lVar20 + 0x10 + uVar18 * 0x18);
      if (((local_128.Data <= (FScriptContainerElement *)&local_108) &&
          ((FScriptContainerElement *)&local_108 < local_128.Data + (longlong)iStack_11c * 0x18)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (local_120 == iStack_11c) {
        local_120 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&local_128,&iStack_11c);
      }
      lVar20 = (longlong)local_120;
      *(double *)(local_128.Data + lVar20 * 0x18) = local_108;
      *(double *)(local_128.Data + lVar20 * 0x18 + 8) = dStack_100;
      uVar26 = local_f8;
LAB_14cd6bf21:
      local_120 = local_120 + 1;
      *(undefined8 *)(local_128.Data + lVar20 * 0x18 + 0x10) = uVar26;
    }
    else {
      uVar15 = 0;
      if ((int)(local_110 - 1U) < local_110) {
        uVar15 = ~(local_110 - 1U) >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(uint *)(local_118.Data + (longlong)(local_110 + -1) * 4) == uVar14) {
        pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
        if (((pUVar3->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar6 = (pUVar3->CurrentMesh).Object;
        uVar21 = local_110 - 2;
        uVar15 = 0;
        if ((int)uVar21 < local_110) {
          uVar15 = ~uVar21 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar18 = (ulonglong)(*(uint *)(local_118.Data + (longlong)(int)uVar21 * 4) & 0x1ff);
        lVar20 = *(longlong *)
                  ((pFVar6->Vertices).Blocks.AllocatorInstance.Data +
                  (ulonglong)(*(uint *)(local_118.Data + (longlong)(int)uVar21 * 4) >> 9) * 8);
        puVar2 = (undefined8 *)(lVar20 + uVar18 * 0x18);
        local_f0 = *puVar2;
        uStack_e8 = puVar2[1];
        local_e0 = *(undefined8 *)(lVar20 + 0x10 + uVar18 * 0x18);
        if (((local_128.Data <= (FScriptContainerElement *)&local_f0) &&
            ((FScriptContainerElement *)&local_f0 < local_128.Data + (longlong)iStack_11c * 0x18))
           && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (local_120 == iStack_11c) {
          local_120 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x818,&local_128,&iStack_11c);
        }
        lVar20 = (longlong)local_120;
        *(undefined8 *)(local_128.Data + lVar20 * 0x18) = local_f0;
        *(undefined8 *)(local_128.Data + lVar20 * 0x18 + 8) = uStack_e8;
        uVar26 = local_e0;
        goto LAB_14cd6bf21;
      }
    }
    if (local_118.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data);
    }
    puVar22 = puVar22 + 1;
    uVar18 = (ulonglong)uVar17;
  } while( true );
}

// GetHoveredItem @ 14cd6c670

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

bool __thiscall
UPolyEditInsertEdgeActivity::GetHoveredItem
          (UPolyEditInsertEdgeActivity *this,TRay<double> *param_1,FGroupEdgeSplitPoint *param_2,
          int *param_3,bool *param_4,TVector<double> *param_5,TRay<double> *param_6)

{
  TVector<double> *pTVar1;
  double *pdVar2;
  UPolyEditActivityContext *pUVar3;
  FGroupTopology *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  bool bVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  FDynamicMesh3 *pFVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uVar33;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar32 [16];
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
  double dVar45;
  double dVar50;
  undefined4 uVar52;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar62;
  undefined4 uVar63;
  double dVar64;
  undefined1 auVar65 [16];
  double dVar68;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar69;
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
  undefined1 auStackY_358 [32];
  uint local_318;
  uint local_314;
  double local_308;
  undefined8 uStack_300;
  double local_2f8;
  int local_2e8;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  TVector<double>_u_0 local_2b8;
  TVector<double>_u_0 TStack_2a0;
  TVector<double>_u_0 local_288;
  double local_270;
  double dStack_268;
  double local_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined1 local_228 [16];
  double local_218;
  TVector<double> local_210 [2];
  undefined1 local_1d8 [120];
  int local_160;
  int local_154;
  ForElementType<FSetElementId> local_148;
  int local_140;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_138;
  ForElementType<FSetElementId> local_f8;
  int local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_358;
  *param_3 = -1;
  param_2->ElementID = -1;
  dVar45 = (this->TargetTransform).Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar50 = (this->TargetTransform).Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar53._0_8_ =
       (this->TargetTransform).Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar53._8_8_ =
       (this->TargetTransform).Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar38._8_4_ = SUB84(dVar50,0);
  auVar38._0_8_ = dVar45;
  uVar52 = (undefined4)((ulonglong)dVar50 >> 0x20);
  auVar38._12_4_ = uVar52;
  auVar26 = *(undefined1 (*) [16])&(param_1->Direction).field0_0x0;
  auVar40._8_4_ = SUB84(dVar50,0);
  auVar40._0_8_ = dVar45;
  auVar40._12_4_ = uVar52;
  auVar41 = blendpd(auVar40,auVar53,2);
  dVar69 = (param_1->Direction).field0_0x0._s_0.Z;
  auVar34._8_8_ = 0;
  auVar34._0_8_ = dVar69;
  auVar34 = blendpd(auVar26,auVar34,2);
  dVar25 = auVar26._8_8_;
  auVar78._0_8_ = dVar25 * dVar45 - auVar26._0_8_ * auVar38._8_8_;
  auVar78._8_8_ = dVar69 * dVar50 - dVar25 * auVar53._0_8_;
  auVar65._8_4_ = SUB84(auVar78._8_8_,0);
  auVar65._0_8_ = auVar78._0_8_;
  auVar65._12_4_ = (int)((ulonglong)auVar78._8_8_ >> 0x20);
  auVar35._0_8_ = auVar34._0_8_ * auVar53._0_8_ - dVar69 * auVar41._0_8_;
  auVar35._8_8_ = auVar34._8_8_ * auVar53._8_8_ - auVar41._8_8_ * 0.0;
  auVar34 = blendpd(auVar78,auVar35,2);
  dVar64 = auVar65._8_8_ + auVar65._8_8_;
  dVar68 = auVar35._0_8_ + auVar35._0_8_;
  auVar79._0_8_ = auVar34._0_8_ + auVar34._0_8_;
  auVar79._8_8_ = auVar34._8_8_ + auVar34._8_8_;
  uVar52 = SUB84(dVar68,0);
  auVar70._8_4_ = uVar52;
  auVar70._0_8_ = dVar64;
  uVar63 = (undefined4)((ulonglong)dVar68 >> 0x20);
  auVar70._12_4_ = uVar63;
  auVar59._8_4_ = uVar52;
  auVar59._0_8_ = dVar64;
  auVar59._12_4_ = uVar63;
  auVar34 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.XY.m128d_f64;
  auVar58._8_4_ = uVar52;
  auVar58._0_8_ = dVar64;
  auVar58._12_4_ = uVar63;
  auVar7._4_8_ = dVar50;
  auVar7._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar46._0_8_ = auVar7._0_8_ << 0x20;
  auVar46._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar46._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar71._0_8_ = auVar70._8_8_ * dVar45 - dVar64 * auVar38._8_8_;
  auVar71._8_8_ = auVar79._0_8_ * dVar50 - auVar59._8_8_ * auVar53._0_8_;
  auVar59 = blendpd(auVar58,auVar79,2);
  local_2d8 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
  dStack_2d0 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
  auVar72._8_4_ = SUB84(auVar79._8_8_,0);
  auVar72._0_8_ = auVar79._0_8_;
  auVar72._12_4_ = (int)((ulonglong)auVar79._8_8_ >> 0x20);
  auVar60._0_8_ = auVar59._0_8_ * auVar53._0_8_ - auVar79._0_8_ * auVar41._0_8_;
  auVar60._8_8_ = auVar59._8_8_ * auVar53._8_8_ - auVar72._8_8_ * auVar41._8_8_;
  auVar59 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.ZW.m128d_f64;
  auVar47._8_8_ = auVar46._8_8_;
  auVar47._0_8_ = auVar59._0_8_;
  lVar23 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar59._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar59._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  local_308 = 0.0;
  uStack_300 = 0;
  auVar81._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar34._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar34._0_4_);
  auVar81._8_4_ = _UNK_15061cc88 & auVar34._8_4_;
  auVar81._12_4_ = _UNK_15061cc8c & auVar34._12_4_;
  lVar24 = -(ulonglong)(auVar81._8_8_ <= dStack_2d0);
  auVar54._0_8_ =
       (this->TargetTransform).Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar54._8_8_ =
       (this->TargetTransform).Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar34);
  auVar82._0_8_ =
       (double)CONCAT44(~(uint)(-(ulonglong)(auVar81._0_8_ <= local_2d8) >> 0x20) & auVar34._4_4_,
                        ~(uint)-(ulonglong)(auVar81._0_8_ <= local_2d8) & auVar34._0_4_);
  auVar82._8_4_ = ~(uint)lVar24 & auVar34._8_4_;
  auVar82._12_4_ = ~(uint)((ulonglong)lVar24 >> 0x20) & auVar34._12_4_;
  dVar45 = (param_1->Origin).field0_0x0._s_0.X - (this->TargetTransform).Translation.XY.m128d_f64[0]
  ;
  dVar50 = (param_1->Origin).field0_0x0._s_0.Y - (this->TargetTransform).Translation.XY.m128d_f64[1]
  ;
  uVar63 = (undefined4)((ulonglong)dVar50 >> 0x20);
  auVar41._8_4_ = SUB84(auVar71._8_8_,0);
  auVar41._0_8_ = auVar71._0_8_;
  auVar41._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
  auVar74._8_4_ = SUB84(dVar50,0);
  auVar74._0_8_ = dVar45;
  auVar74._12_4_ = uVar63;
  auVar72 = blendpd(auVar71,auVar60,2);
  local_2c8 = auVar82._0_8_ * (dVar64 * auVar53._8_8_ + auVar26._0_8_ + auVar41._8_8_);
  dStack_2c0 = auVar82._8_8_ * (dVar68 * auVar53._8_8_ + dVar25 + auVar60._0_8_);
  auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar47);
  dVar68 = (this->TargetTransform).Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar51 = (this->TargetTransform).Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar25 = (param_1->Origin).field0_0x0._s_0.Z - (this->TargetTransform).Translation.ZW.m128d_f64[0]
  ;
  auVar42._8_4_ = SUB84(dVar51,0);
  auVar42._0_8_ = dVar68;
  uVar52 = (undefined4)((ulonglong)dVar51 >> 0x20);
  auVar42._12_4_ = uVar52;
  auVar80._8_8_ = 0;
  auVar80._0_8_ = dVar25;
  auVar36._8_4_ = SUB84(dVar50,0);
  auVar36._0_8_ = dVar45;
  auVar36._12_4_ = uVar63;
  auVar59 = blendpd(auVar42,auVar54,2);
  auVar34 = blendpd(auVar36,auVar80,2);
  TStack_2a0._s_0.Z =
       (dVar69 + auVar79._0_8_ * auVar53._8_8_ + auVar72._0_8_) *
       (double)CONCAT44(~(uint)((ulonglong)lVar23 >> 0x20) & auVar26._4_4_,
                        ~(uint)lVar23 & auVar26._0_4_);
  auVar39._8_4_ = SUB84(dVar51,0);
  auVar39._0_8_ = dVar68;
  auVar39._12_4_ = uVar52;
  auVar73._8_4_ = SUB84(auVar54._8_8_,0);
  auVar73._0_8_ = auVar54._0_8_;
  auVar73._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
  dVar69 = auVar39._8_8_;
  auVar26._8_4_ = SUB84(auVar54._0_8_,0);
  auVar26._0_8_ = dVar69;
  auVar26._12_4_ = (int)((ulonglong)auVar54._0_8_ >> 0x20);
  auVar75._0_8_ = auVar74._8_8_ * dVar68 - dVar69 * dVar45;
  auVar75._8_8_ = dVar25 * dVar51 - auVar26._8_8_ * dVar50;
  dVar64 = auVar59._8_8_;
  auVar61._8_4_ = SUB84(auVar75._8_8_,0);
  auVar61._0_8_ = auVar75._0_8_;
  auVar61._12_4_ = (int)((ulonglong)auVar75._8_8_ >> 0x20);
  auVar37._0_8_ = auVar34._0_8_ * auVar54._0_8_ - dVar25 * auVar59._0_8_;
  auVar37._8_8_ = auVar34._8_8_ * auVar54._8_8_ - dVar64 * 0.0;
  dVar57 = auVar61._8_8_ + auVar61._8_8_;
  dVar62 = auVar37._0_8_ + auVar37._0_8_;
  auVar34 = blendpd(auVar75,auVar37,2);
  auVar26 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.XY.m128d_f64;
  uVar52 = SUB84(dVar62,0);
  auVar66._8_4_ = uVar52;
  auVar66._0_8_ = dVar57;
  uVar63 = (undefined4)((ulonglong)dVar62 >> 0x20);
  auVar66._12_4_ = uVar63;
  auVar76._0_8_ = auVar34._0_8_ + auVar34._0_8_;
  auVar76._8_8_ = auVar34._8_8_ + auVar34._8_8_;
  auVar27._8_4_ = uVar52;
  auVar27._0_8_ = dVar57;
  auVar27._12_4_ = uVar63;
  auVar48._8_4_ = uVar52;
  auVar48._0_8_ = dVar57;
  auVar48._12_4_ = uVar63;
  auVar67._0_8_ = auVar66._8_8_ * dVar68 - dVar57 * dVar69;
  auVar67._8_8_ = auVar76._0_8_ * dVar51 - auVar27._8_8_ * auVar54._0_8_;
  auVar34 = blendpd(auVar48,auVar76,2);
  auVar28._8_4_ = SUB84(auVar76._8_8_,0);
  auVar28._0_8_ = auVar76._0_8_;
  auVar28._12_4_ = (int)((ulonglong)auVar76._8_8_ >> 0x20);
  auVar8._4_8_ = dVar64;
  auVar8._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar43._0_8_ = auVar8._0_8_ << 0x20;
  auVar43._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar43._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar49._0_8_ = auVar34._0_8_ * auVar54._0_8_ - auVar76._0_8_ * auVar59._0_8_;
  auVar49._8_8_ = auVar34._8_8_ * auVar54._8_8_ - auVar28._8_8_ * dVar64;
  auVar34 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.ZW.m128d_f64;
  auVar44._8_8_ = auVar43._8_8_;
  auVar44._0_8_ = auVar34._0_8_;
  auVar55._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar26._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar26._0_4_);
  auVar55._8_4_ = _UNK_15061cc88 & auVar26._8_4_;
  auVar55._12_4_ = _UNK_15061cc8c & auVar26._12_4_;
  lVar23 = -(ulonglong)
            ((double)CONCAT44(auVar34._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar34._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  lVar24 = -(ulonglong)(auVar55._8_8_ <= dStack_2d0);
  auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar26);
  auVar29._8_4_ = SUB84(auVar67._8_8_,0);
  auVar29._0_8_ = auVar67._0_8_;
  auVar29._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
  auVar56._0_8_ =
       (double)CONCAT44(~(uint)(-(ulonglong)(auVar55._0_8_ <= local_2d8) >> 0x20) & auVar26._4_4_,
                        ~(uint)-(ulonglong)(auVar55._0_8_ <= local_2d8) & auVar26._0_4_);
  auVar56._8_4_ = ~(uint)lVar24 & auVar26._8_4_;
  auVar56._12_4_ = ~(uint)((ulonglong)lVar24 >> 0x20) & auVar26._12_4_;
  auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar44);
  local_2b8._s_0.X = auVar56._0_8_ * (dVar57 * auVar73._8_8_ + dVar45 + auVar29._8_8_);
  local_2b8._s_0.Y = auVar56._8_8_ * (dVar62 * auVar54._8_8_ + dVar50 + auVar49._0_8_);
  auVar26 = blendpd(auVar67,auVar49,2);
  local_2b8._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar23 >> 0x20) & auVar34._4_4_,
                        ~(uint)lVar23 & auVar34._0_4_) *
       (auVar76._0_8_ * auVar73._8_8_ + dVar25 + auVar26._0_8_);
  TStack_2a0._s_0.X = local_2c8;
  TStack_2a0._s_0.Y = dStack_2c0;
  local_270 = local_2b8._s_0.X;
  dStack_268 = local_2b8._s_0.Y;
  local_260 = local_2b8._s_0.Z;
  local_258 = local_2c8;
  dStack_250 = dStack_2c0;
  local_248 = TStack_2a0._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&TStack_2a0._s_0,__real_3e45798ee0000000);
  if (param_6 != (TRay<double> *)0x0) {
    (param_6->Origin).field0_0x0._s_0.X = local_2b8._s_0.X;
    (param_6->Origin).field0_0x0._s_0.Y = local_2b8._s_0.Y;
    (param_6->Origin).field0_0x0._s_0.Z = local_2b8._s_0.Z;
    (param_6->Direction).field0_0x0._s_0.X = TStack_2a0._s_0.X;
    (param_6->Direction).field0_0x0._s_0.Y = TStack_2a0._s_0.Y;
    (param_6->Direction).field0_0x0._s_0.Z = TStack_2a0._s_0.Z;
  }
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection
            ((FGroupTopologySelection *)local_1d8);
  (this->TopologySelectorSettings).bHitBackFaces =
       *(bool *)(((((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.
                 DebugPtr)->_padding_ + 0xb5);
  if (((this->TopologySelector).Object == (FMeshTopologySelector *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    uVar13 = (*pcVar6)();
    return (bool)uVar13;
  }
  bVar12 = FMeshTopologySelector::FindSelectedElement
                     ((this->TopologySelector).Object,&this->TopologySelectorSettings,
                      (TRay<double> *)&local_2b8._s_0,(FGroupTopologySelection *)local_1d8,
                      (TVector<double> *)&local_288._s_0,local_210,(int *)&local_318);
  if (!bVar12) {
    bVar12 = false;
    goto LAB_14cd6d2ee;
  }
  if (local_1d8._88_4_ - local_154 < 1) {
    if (((int)(local_138._8_4_ - local_138._52_4_) < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Selection.SelectedEdgeIDs.Num() > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditInsertEdgeActivity.cpp"
                            ,0x2c7,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    iVar17 = UE::Geometry::FGroupTopologySelection::GetASelectedEdgeID
                       ((FGroupTopologySelection *)local_1d8);
    *param_3 = iVar17;
    *param_4 = false;
    pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
    if (((pUVar3->CurrentTopology).Object == (FGroupTopology *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    uVar15 = *param_3;
    lVar23 = (longlong)(int)uVar15;
    pFVar4 = (pUVar3->CurrentTopology).Object;
    uVar18 = 0;
    if ((int)uVar15 < (pFVar4->Edges).ArrayNum) {
      uVar18 = ~uVar15 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    pFVar5 = (pFVar4->Edges).AllocatorInstance.Data;
    lVar24 = (longlong)(int)local_318;
    uVar15 = 0;
    if ((int)local_318 < *(int *)(pFVar5 + lVar23 * 0x50 + 0x28)) {
      uVar15 = ~local_318 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    local_314 = *(uint *)(*(longlong *)(pFVar5 + lVar23 * 0x50 + 0x20) + lVar24 * 4);
    lVar24 = (longlong)(int)local_318;
    uVar15 = 0;
    if ((int)local_318 < *(int *)(pFVar5 + lVar23 * 0x50 + 0x18)) {
      uVar15 = ~local_318 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    uVar15 = *(uint *)(*(longlong *)(pFVar5 + lVar23 * 0x50 + 0x10) + lVar24 * 4);
    uVar20 = local_318 + 1;
    uVar18 = 0;
    if ((int)uVar20 < *(int *)(pFVar5 + lVar23 * 0x50 + 0x18)) {
      uVar18 = ~uVar20 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    uVar18 = *(uint *)(*(longlong *)(pFVar5 + lVar23 * 0x50 + 0x10) + (longlong)(int)uVar20 * 4);
    local_2d8 = (double)(ulonglong)uVar18;
    pFVar16 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->
                        (&((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh);
    lVar24 = *(longlong *)
              ((pFVar16->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8);
    auVar34 = *(undefined1 (*) [16])(lVar24 + (ulonglong)(uVar15 & 0x1ff) * 0x18);
    dVar64 = auVar34._0_8_;
    dVar69 = *(double *)(lVar24 + 0x10 + (ulonglong)(uVar15 & 0x1ff) * 0x18);
    pFVar16 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->
                        (&((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh);
    auVar9._4_8_ = auVar76._8_8_ * auVar54._8_8_ + 0.0 + auVar26._8_8_;
    auVar9._0_4_ = auVar34._4_4_;
    auVar77._0_8_ = auVar9._0_8_ << 0x20;
    auVar77._8_4_ = auVar34._8_4_;
    auVar77._12_4_ = auVar34._12_4_;
    dVar25 = auVar77._8_8_;
    lVar24 = *(longlong *)
              ((pFVar16->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8);
    auVar26 = *(undefined1 (*) [16])(lVar24 + (ulonglong)(uVar18 & 0x1ff) * 0x18);
    dVar45 = *(double *)(lVar24 + 0x10 + (ulonglong)(uVar18 & 0x1ff) * 0x18);
    dVar68 = auVar26._0_8_ - dVar64;
    auVar10._4_8_ = extraout_XMM0_Qb;
    auVar10._0_4_ = auVar26._4_4_;
    auVar30._0_8_ = auVar10._0_8_ << 0x20;
    auVar30._8_4_ = auVar26._8_4_;
    auVar30._12_4_ = auVar26._12_4_;
    local_2c8 = auVar30._8_8_;
    dStack_2c0 = auVar26._8_8_;
    dVar51 = dVar45 - dVar69;
    dVar50 = local_2c8 - dVar25;
    auVar31._8_4_ = auVar26._8_4_;
    auVar31._0_8_ = dVar68;
    auVar31._12_4_ = auVar26._12_4_;
    uVar33 = auVar31._8_8_;
    local_308 = SQRT(dVar50 * dVar50 + dVar68 * dVar68 + dVar51 * dVar51);
    local_2f8 = dVar69;
    if ((local_308 <= 0.0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("EdgeLength > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditInsertEdgeActivity.cpp"
                            ,0x2d5,L""), uVar33 = extraout_XMM0_Qb_00, bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    uVar18 = local_314;
    dVar57 = __real_3ff0000000000000;
    pTVar1 = &param_2->Tangent;
    dVar62 = __real_3ff0000000000000 / local_308;
    (pTVar1->field0_0x0)._s_0.X = dVar68 * dVar62;
    (param_2->Tangent).field0_0x0._s_0.Y = dVar50 * dVar62;
    (param_2->Tangent).field0_0x0._s_0.Z = dVar51 * dVar62;
    local_228 = *(undefined1 (*) [16])&pTVar1->field0_0x0;
    local_218 = (param_2->Tangent).field0_0x0._s_0.Z;
    auVar11._4_8_ = uVar33;
    auVar11._0_4_ = local_228._4_4_;
    auVar32._0_8_ = auVar11._0_8_ << 0x20;
    auVar32._8_4_ = local_228._8_4_;
    auVar32._12_4_ = local_228._12_4_;
    dVar50 = ((this->Settings).field0_0x0.DebugPtr)->VertexTolerance;
    dVar68 = (double)(float)((local_288._s_0.Y - dVar25) * auVar32._8_8_ +
                             (local_288._s_0.X - dVar64) * local_228._0_8_ +
                            (local_288._s_0.Z - dVar69) * local_218);
    if (dVar50 < dVar68) {
      if (dVar50 < (double)CONCAT44((uint)((ulonglong)(dVar68 - local_308) >> 0x20) &
                                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                    SUB84(dVar68 - local_308,0) &
                                    (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
        param_2->bIsVertex = false;
        param_2->ElementID = local_314;
        param_2->EdgeTValue = dVar68 * dVar62;
        (param_5->field0_0x0)._s_0.X = local_228._0_8_ * dVar68 + dVar64;
        (param_5->field0_0x0)._s_0.Y = (double)local_228._8_8_ * dVar68 + dVar25;
        (param_5->field0_0x0)._s_0.Z = local_218 * dVar68 + dVar69;
        pFVar16 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->
                            (&((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh);
        if (*(uint *)(*(longlong *)
                       ((pFVar16->Edges).Blocks.AllocatorInstance.Data +
                       (ulonglong)(uVar18 >> 9) * 8) + (ulonglong)(uVar18 & 0x1ff) * 0x10) != uVar15
           ) {
          param_2->EdgeTValue = dVar57 - param_2->EdgeTValue;
        }
      }
      else {
        param_2->ElementID = SUB84(local_2d8,0);
        param_2->bIsVertex = true;
        *(undefined1 (*) [16])&param_5->field0_0x0 = auVar26;
        (param_5->field0_0x0)._s_0.Z = dVar45;
        if ((int)(local_318 + 2) < *(int *)(pFVar5 + lVar23 * 0x50 + 0x18)) {
          pFVar16 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->
                              (&((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh);
          local_318 = local_318 + 2;
          uVar15 = 0;
          if ((int)local_318 < *(int *)(pFVar5 + lVar23 * 0x50 + 0x18)) {
            uVar15 = ~local_318 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            uVar13 = (*pcVar6)();
            return (bool)uVar13;
          }
          uVar15 = *(uint *)(*(longlong *)(pFVar5 + lVar23 * 0x50 + 0x10) +
                            (longlong)(int)local_318 * 4);
          uVar19 = (ulonglong)(uVar15 & 0x1ff);
          lVar23 = *(longlong *)
                    ((pFVar16->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)(uVar15 >> 9) * 8);
          pdVar2 = (double *)(lVar23 + uVar19 * 0x18);
          dVar45 = *(double *)(lVar23 + 0x10 + uVar19 * 0x18) - dVar45;
          dVar50 = *pdVar2 - auVar26._0_8_;
          dVar25 = pdVar2[1] - local_2c8;
          dVar69 = SQRT(dVar25 * dVar25 + dVar50 * dVar50 + dVar45 * dVar45);
          if (dVar69 <= 0.0) {
            dVar25 = 0.0;
            dVar69 = 0.0;
            dVar50 = 0.0;
          }
          else {
            dVar57 = dVar57 / dVar69;
            dVar25 = dVar25 * dVar57;
            dVar69 = dVar45 * dVar57;
            dVar50 = dVar50 * dVar57;
          }
          (pTVar1->field0_0x0)._s_0.X = dVar50 + (pTVar1->field0_0x0)._s_0.X;
          goto LAB_14cd6d241;
        }
      }
    }
    else {
      param_2->bIsVertex = true;
      param_2->ElementID = uVar15;
      *(undefined1 (*) [16])&param_5->field0_0x0 = auVar34;
      (param_5->field0_0x0)._s_0.Z = dVar69;
      if (0 < (int)local_318) {
        pFVar16 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->
                            (&((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh);
        local_318 = local_318 - 1;
        uVar15 = 0;
        if ((int)local_318 < *(int *)(pFVar5 + lVar23 * 0x50 + 0x18)) {
          uVar15 = ~local_318 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          uVar13 = (*pcVar6)();
          return (bool)uVar13;
        }
        uVar15 = *(uint *)(*(longlong *)(pFVar5 + lVar23 * 0x50 + 0x10) +
                          (longlong)(int)local_318 * 4);
        uVar19 = (ulonglong)(uVar15 & 0x1ff);
        lVar23 = *(longlong *)
                  ((pFVar16->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar15 >> 9) * 8)
        ;
        pdVar2 = (double *)(lVar23 + uVar19 * 0x18);
        dVar69 = dVar69 - *(double *)(lVar23 + 0x10 + uVar19 * 0x18);
        dVar64 = dVar64 - *pdVar2;
        dVar25 = dVar25 - pdVar2[1];
        dVar45 = SQRT(dVar25 * dVar25 + dVar64 * dVar64 + dVar69 * dVar69);
        if (dVar45 <= 0.0) {
          dVar25 = 0.0;
          dVar69 = 0.0;
          (pTVar1->field0_0x0)._s_0.X = (pTVar1->field0_0x0)._s_0.X + 0.0;
        }
        else {
          dVar57 = dVar57 / dVar45;
          dVar25 = dVar25 * dVar57;
          dVar69 = dVar69 * dVar57;
          (pTVar1->field0_0x0)._s_0.X = dVar64 * dVar57 + (pTVar1->field0_0x0)._s_0.X;
        }
LAB_14cd6d241:
        dVar45 = (param_2->Tangent).field0_0x0._s_0.Z;
        (param_2->Tangent).field0_0x0._s_0.Y = dVar25 + (param_2->Tangent).field0_0x0._s_0.Y;
        (param_2->Tangent).field0_0x0._s_0.Z = dVar69 + dVar45;
        UE::Geometry::Normalize<double>(pTVar1,0.0);
      }
    }
  }
  else {
    iVar17 = 0;
    iVar21 = 0;
    iVar14 = 0;
    if (local_160 != 0) {
      puVar22 = (uint *)(local_1d8 + 0x60);
      if ((uint *)local_1d8._112_8_ != (uint *)0x0) {
        puVar22 = (uint *)local_1d8._112_8_;
      }
      uVar15 = *puVar22;
      while (uVar15 == 0) {
        lVar23 = (longlong)iVar17;
        iVar21 = iVar21 + 0x20;
        iVar17 = iVar17 + 1;
        if ((int)(local_160 + -1 + (local_160 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17)
        goto LAB_14cd6cb8a;
        uVar15 = puVar22[lVar23 + 1];
      }
      uVar19 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
      lVar23 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      local_2e8 = (int)lVar23;
      iVar14 = local_2e8 + -1 + iVar21;
      if (local_160 < iVar14) {
LAB_14cd6cb8a:
        iVar14 = local_160;
      }
    }
    *param_3 = *(int *)(local_1d8._80_8_ + (longlong)iVar14 * 0xc);
    *param_4 = true;
    param_2->bIsVertex = true;
    pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
    if (((pUVar3->CurrentTopology).Object == (FGroupTopology *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    iVar17 = UE::Geometry::FGroupTopology::GetCornerVertexID
                       ((pUVar3->CurrentTopology).Object,*param_3);
    param_2->ElementID = iVar17;
    pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
    if (((pUVar3->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      uVar13 = (*pcVar6)();
      return (bool)uVar13;
    }
    uVar19 = (ulonglong)(param_2->ElementID & 0x1ff);
    lVar23 = *(longlong *)
              ((((pUVar3->CurrentMesh).Object)->Vertices).Blocks.AllocatorInstance.Data +
              (ulonglong)((uint)param_2->ElementID >> 9) * 8);
    pdVar2 = (double *)(lVar23 + uVar19 * 0x18);
    dVar45 = pdVar2[1];
    dVar69 = *(double *)(lVar23 + 0x10 + uVar19 * 0x18);
    (param_5->field0_0x0)._s_0.X = *pdVar2;
    (param_5->field0_0x0)._s_0.Y = dVar45;
    (param_5->field0_0x0)._s_0.Z = dVar69;
  }
  bVar12 = true;
LAB_14cd6d2ee:
  local_f0 = 0;
  if (local_f8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_f8);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_138);
  local_140 = 0;
  if (local_148 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_148);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_1d8 + 0x50));
  local_1d8._72_4_ = 0;
  if ((ForElementType<FSetElementId>)local_1d8._64_8_ != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1d8._64_8_);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_1d8);
  return bVar12;
}

// GetPrivateStaticClass @ 14cd6df20

UClass * __cdecl UPolyEditInsertEdgeActivity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditInsertEdgeActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditInsertEdgeActivity",
               &Z_Registration_Info_UClass_UPolyEditInsertEdgeActivity.InnerSingleton,
               StaticRegisterNativesUPolyEditInsertEdgeActivity,0x4a0,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditInsertEdgeActivity>,
               InternalVTableHelperCtorCaller<UPolyEditInsertEdgeActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditInsertEdgeActivity.InnerSingleton;
}

// IsHitByClick @ 14cd71860

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
UPolyEditInsertEdgeActivity::IsHitByClick
          (UPolyEditInsertEdgeActivity *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  FWeakObjectPtr local_res8;
  undefined8 local_res20;
  TVector<double>_u_0 local_98;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint uStack_58;
  int iStack_54;
  void *local_50;
  
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  if (((char)this->_padding_ != '\0') && ((this->EndTopologyID == 0 || (this->EndTopologyID == 1))))
  {
    bVar9 = TopologyHitTest((UPolyEditInsertEdgeActivity *)
                            &this[-1].LatestOpTopologyResult.SharedReferenceCount,&param_1->WorldRay
                            ,(TVector<double> *)&local_98._s_0,(TRay<double> *)0x0);
    uVar8 = __real_3ff0000000000000._4_4_;
    uVar7 = (undefined4)__real_3ff0000000000000;
    if (bVar9) {
      dVar1 = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
      dVar2 = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
      dVar3 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
      local_80 = CONCAT31(local_80._1_3_,1);
      dVar4 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
      uStack_58 = uStack_58 & 0xffffff00;
      dVar5 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
      iStack_54 = 0;
      local_50 = (void *)0x0;
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = 0;
      dVar6 = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      *(undefined4 *)__return_storage_ptr__ = local_80;
      *(undefined4 *)&__return_storage_ptr__->field_0x4 = uStack_7c;
      __return_storage_ptr__->HitDepth =
           (local_98._s_0.Y - dVar5) * dVar6 + (local_98._s_0.X - dVar1) * dVar3 +
           (local_98._s_0.Z - dVar2) * dVar4;
      (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = 0.0;
      (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = 0.0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->HitNormal).field0_0x0 + 0x10) = uVar7;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->HitNormal).field0_0x0 + 0x14) = uVar8;
      *(uint *)&__return_storage_ptr__->bHasHitNormal = uStack_58;
      __return_storage_ptr__->HitIdentifier = iStack_54;
      __return_storage_ptr__->HitOwner = local_50;
      (__return_storage_ptr__->HitObject).WeakPtr = local_res8;
    }
  }
  return __return_storage_ptr__;
}

// IsRunning @ 14cd71b90

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPolyEditInsertEdgeActivity::IsRunning(UPolyEditInsertEdgeActivity *this)

{
  return this->bIsRunning;
}

// MakeNewOperator @ 14cd73070

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

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall UPolyEditInsertEdgeActivity::MakeNewOperator(UPolyEditInsertEdgeActivity *this)

{
  undefined1 *puVar1;
  double dVar2;
  FGroupTopology *pFVar3;
  FDynamicMesh3 *pFVar4;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined3 uVar12;
  FGroupEdgeInsertionOp *this_00;
  FGroupEdgeInsertionOp *this_01;
  FDynamicMeshOperator *in_RDX;
  TQuaternion<double>_u_0 local_60;
  TObjectPtr<UPolyEditActivityContext>_u_0 local_40;
  undefined8 uStack_38;
  double local_30;
  double local_28;
  double dStack_20;
  double local_18;
  
  this_00 = ::operator_new(400);
  this_01 = (FGroupEdgeInsertionOp *)0x0;
  if (this_00 != (FGroupEdgeInsertionOp *)0x0) {
    memset(this_00,0,400);
    this_01 = UE::Geometry::FGroupEdgeInsertionOp::FGroupEdgeInsertionOp(this_00);
  }
  pFVar3 = (this->LatestOpTopologyResult).Object;
  pFVar4 = *(FDynamicMesh3 **)&this->ToolState;
  if (pFVar3 != (FGroupTopology *)0x0) {
    LOCK();
    *(int *)&pFVar3->_padding_ = (int)pFVar3->_padding_ + 1;
    UNLOCK();
  }
  pTVar7 = (this_01->OriginalMesh).SharedReferenceCount.ReferenceController;
  (this_01->OriginalMesh).Object = pFVar4;
  (this_01->OriginalMesh).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pFVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  pTVar5 = (this->LatestOpChangedTids).Object;
  pFVar3 = (FGroupTopology *)(this->LatestOpTopologyResult).SharedReferenceCount.ReferenceController
  ;
  if (pTVar5 != (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0) {
    LOCK();
    puVar1 = &(pTVar5->Elements).field_0x8;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    UNLOCK();
  }
  pTVar7 = (this_01->OriginalTopology).SharedReferenceCount.ReferenceController;
  (this_01->OriginalTopology).Object = pFVar3;
  (this_01->OriginalTopology).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)pTVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  local_60._s_0.X = (double)this->_padding_;
  local_60._s_0.Y = (double)this->_padding_;
  local_60._s_0.Z = (double)this->_padding_;
  local_60._s_0.W = (double)(this->Settings).field0_0x0;
  local_30 = (this->TargetTransform).Rotation.XY.m128d_f64[0];
  local_18 = (this->TargetTransform).Translation.XY.m128d_f64[0];
  local_40 = (this->ActivityContext).field0_0x0;
  uStack_38 = *(undefined8 *)&this->bIsRunning;
  local_28 = (this->TargetTransform).Rotation.ZW.m128d_f64[0];
  dStack_20 = (this->TargetTransform).Rotation.ZW.m128d_f64[1];
  UE::Geometry::FGroupEdgeInsertionOp::SetTransform
            (this_01,(TTransformSRT3<double> *)&local_60._s_0);
  this_01->Mode = (uint)(*(int *)(this->_padding_ + 0xb0) == 1);
  lVar6 = this->_padding_;
  in_RDX->_padding_ = (longlong)this_01;
  this_01->VertexTolerance = *(double *)(lVar6 + 0xb8);
  dVar8 = (this->PreviewEdgeRenderer).TotalTransform.Scale3D.XY.m128d_f64[0];
  dVar9 = (this->PreviewEdgeRenderer).TotalTransform.Scale3D.XY.m128d_f64[1];
  dVar10 = (this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
  dVar2 = (this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1];
  *(double *)&this_01->StartPoint =
       (this->PreviewEdgeRenderer).TotalTransform.Translation.ZW.m128d_f64[1];
  (this_01->StartPoint).Tangent.field0_0x0._s_0.X = dVar8;
  (this_01->StartPoint).Tangent.field0_0x0._s_0.Y = dVar9;
  (this_01->StartPoint).Tangent.field0_0x0._s_0.Z = dVar10;
  (this_01->StartPoint).EdgeTValue = dVar2;
  bVar11 = (this->StartPoint).bIsVertex;
  uVar12 = *(undefined3 *)&(this->StartPoint).field_0x5;
  dVar8 = (this->StartPoint).Tangent.field0_0x0._s_0.X;
  dVar9 = (this->StartPoint).Tangent.field0_0x0._s_0.Y;
  dVar10 = (this->StartPoint).Tangent.field0_0x0._s_0.Z;
  dVar2 = (this->StartPoint).EdgeTValue;
  (this_01->EndPoint).ElementID = (this->StartPoint).ElementID;
  (this_01->EndPoint).bIsVertex = bVar11;
  *(undefined3 *)&(this_01->EndPoint).field_0x5 = uVar12;
  (this_01->EndPoint).Tangent.field0_0x0._s_0.X = dVar8;
  (this_01->EndPoint).Tangent.field0_0x0._s_0.Y = dVar9;
  (this_01->EndPoint).Tangent.field0_0x0._s_0.Z = dVar10;
  (this_01->EndPoint).EdgeTValue = dVar2;
  this_01->CommonGroupID = (this->EndPoint).ElementID;
  this_01->CommonBoundaryIndex = *(int *)&(this->EndPoint).bIsVertex;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// OnBeginHover @ 14cd74670

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
UPolyEditInsertEdgeActivity::OnBeginHover
          (UPolyEditInsertEdgeActivity *this,FInputDeviceRay *param_1)

{
  return;
}

// OnClicked @ 14cd74810

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
UPolyEditInsertEdgeActivity::OnClicked(UPolyEditInsertEdgeActivity *this,FInputDeviceRay *param_1)

{
  int *piVar1;
  VectorRegister4Double *pVVar2;
  double *pdVar3;
  undefined4 uVar4;
  TVector<double>_u_0 *pTVar5;
  double dVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FGroupTopology *pFVar10;
  UObject *pUVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  bool local_res8 [8];
  int local_res18 [2];
  int local_res20 [2];
  int local_a8 [2];
  undefined8 *local_a0;
  TVector<double>_u_0 local_98;
  FGroupEdgeSplitPoint local_80;
  TVector<double> local_58;
  
  if (this->EndTopologyID == 0) {
    puVar14 = (undefined8 *)0x0;
    bVar8 = GetHoveredItem((UPolyEditInsertEdgeActivity *)
                           &this[-1].LatestOpTopologyResult.SharedReferenceCount,&param_1->WorldRay,
                           (FGroupEdgeSplitPoint *)
                           ((this->PreviewEdgeRenderer).TotalTransform.Translation.XY.m128d_f64 + 1)
                           ,(int *)&(this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW,
                           (bool *)((longlong)
                                    (this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64
                                   + 4),(TVector<double> *)&local_98._s_0,(TRay<double> *)0x0);
    if (bVar8) {
      pVVar2 = &(this->TargetTransform).Scale3D;
      iVar9 = *(int *)((longlong)(this->TargetTransform).Scale3D.XY.m128d_f64 + 0xc);
      piVar1 = (int *)((longlong)(this->TargetTransform).Scale3D.XY.m128d_f64 + 0xc);
      *(undefined4 *)((this->TargetTransform).Scale3D.XY.m128d_f64 + 1) = 0;
      if (iVar9 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,(ForAnyElementType *)pVVar2,0,piVar1);
      }
      pTVar5 = (TVector<double>_u_0 *)(pVVar2->XY).m128d_f64[0];
      if (((pTVar5 <= &local_98) && (&local_98 < pTVar5 + *piVar1)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar9 = *(int *)((this->TargetTransform).Scale3D.XY.m128d_f64 + 1);
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)pVVar2,piVar1);
      }
      *(int *)((this->TargetTransform).Scale3D.XY.m128d_f64 + 1) = iVar9 + 1;
      dVar6 = (pVVar2->XY).m128d_f64[0];
      pdVar3 = (double *)((longlong)dVar6 + (longlong)iVar9 * 0x18);
      *pdVar3 = local_98._s_0.X;
      pdVar3[1] = local_98._s_0.Y;
      *(double *)((longlong)dVar6 + (longlong)iVar9 * 0x18 + 0x10) = local_98._s_0.Z;
      this->EndTopologyID = 1;
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    &this[-1].ComputeStartMesh.SharedReferenceCount);
      lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x2d8))(pUVar11);
      (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x10))
                (lVar12 + 0x28,&PolyEditInsertEdgeActivityLocals::GroupEdgeStartTransactionName);
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    &this[-1].ComputeStartMesh.SharedReferenceCount);
      lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x2d8))(pUVar11);
      pcVar7 = *(code **)(*(longlong *)(lVar12 + 0x28) + 0x20);
      puVar13 = ::operator_new(0x10);
      if (puVar13 != (undefined8 *)0x0) {
        uVar4 = *(undefined4 *)&(this->LastEndPointWorldRay).Direction.field0_0x0;
        *puVar13 = &___7FGroupEdgeInsertionFirstPointChange__6B_;
        *(undefined4 *)(puVar13 + 1) = uVar4;
        *(undefined1 *)((longlong)puVar13 + 0xc) = 0;
        puVar14 = puVar13;
      }
      local_a0 = puVar14;
      (*pcVar7)(lVar12 + 0x28,&this[-1].LatestOpTopologyResult.SharedReferenceCount,&local_a0,
                &PolyEditInsertEdgeActivityLocals::GroupEdgeStartTransactionName);
      pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    &this[-1].ComputeStartMesh.SharedReferenceCount);
      lVar12 = (**(code **)(*(longlong *)pUVar11 + 0x2d8))(pUVar11);
      (**(code **)(*(longlong *)(lVar12 + 0x28) + 0x18))(lVar12 + 0x28);
    }
  }
  else if (this->EndTopologyID == 1) {
    bVar8 = GetHoveredItem((UPolyEditInsertEdgeActivity *)
                           &this[-1].LatestOpTopologyResult.SharedReferenceCount,&param_1->WorldRay,
                           &local_80,local_res18,local_res8,&local_58,(TRay<double> *)0x0);
    if (bVar8) {
      if ((local_80.bIsVertex !=
           (bool)*(char *)((longlong)
                           (this->PreviewEdgeRenderer).TotalTransform.Translation.XY.m128d_f64 + 0xc
                          )) ||
         (local_80.ElementID !=
          *(int *)((this->PreviewEdgeRenderer).TotalTransform.Translation.XY.m128d_f64 + 1))) {
        bVar8 = *(bool *)((longlong)(this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64
                         + 4);
        iVar9 = *(int *)(this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64;
        pFVar10 = TSharedPtr<UE::Geometry::FGroupTopology,1>::
                  operator*<UE::Geometry::FGroupTopology>
                            ((TSharedPtr<UE::Geometry::FGroupTopology,1> *)(this->_padding_ + 0x48))
        ;
        bVar8 = PolyEditInsertEdgeActivityLocals::GetSharedBoundary
                          (pFVar10,(FGroupEdgeSplitPoint *)
                                   ((this->PreviewEdgeRenderer).TotalTransform.Translation.XY.
                                    m128d_f64 + 1),iVar9,bVar8,&local_80,local_res18[0],
                           local_res8[0],local_a8,local_res20);
        if (bVar8) {
          ConditionallyUpdatePreview
                    ((UPolyEditInsertEdgeActivity *)
                     &this[-1].LatestOpTopologyResult.SharedReferenceCount,&local_80,local_res18[0],
                     local_res8[0],local_a8[0],local_res20[0]);
          this->EndTopologyID = 2;
          goto LAB_14cd748de;
        }
      }
      UMeshOpPreviewWithBackgroundCompute::CancelCompute
                (*(UMeshOpPreviewWithBackgroundCompute **)(this->_padding_ + 0x40));
      lVar12 = this->_padding_;
      UPreviewMesh::UpdatePreview
                (*(UPreviewMesh **)(*(longlong *)(lVar12 + 0x40) + 0x68),
                 *(FDynamicMesh3 **)(lVar12 + 0x30),FullUpdate,AllVertexAttribs);
      this->bEndIsCorner = true;
    }
LAB_14cd748de:
    dVar6 = (param_1->WorldRay).Origin.field0_0x0._s_0.Y;
    *(double *)&this->StartTopologyID = (param_1->WorldRay).Origin.field0_0x0._s_0.X;
    *(double *)&this->EndPoint = dVar6;
    dVar6 = (param_1->WorldRay).Direction.field0_0x0._s_0.X;
    (this->EndPoint).Tangent.field0_0x0._s_0.X = (param_1->WorldRay).Origin.field0_0x0._s_0.Z;
    (this->EndPoint).Tangent.field0_0x0._s_0.Y = dVar6;
    dVar6 = (param_1->WorldRay).Direction.field0_0x0._s_0.Z;
    (this->EndPoint).Tangent.field0_0x0._s_0.Z = (param_1->WorldRay).Direction.field0_0x0._s_0.Y;
    (this->EndPoint).EdgeTValue = dVar6;
    return;
  }
  return;
}

// OnEndHover @ 14cd74d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UPolyEditInsertEdgeActivity::OnEndHover(UPolyEditInsertEdgeActivity *this)

{
  int iVar1;
  
  if ((char)this->_padding_ != '\0') {
    iVar1 = this->CommonGroupID;
    if (iVar1 == 0) {
LAB_14cd74d67:
      ClearPreview((UPolyEditInsertEdgeActivity *)&this[-1].LatestOpChangedTids,true);
      return;
    }
    if (iVar1 == 1) {
      UMeshOpPreviewWithBackgroundCompute::CancelCompute
                (*(UMeshOpPreviewWithBackgroundCompute **)(this->_padding_ + 0x40));
      UPreviewMesh::UpdatePreview
                (*(UPreviewMesh **)(*(longlong *)(this->_padding_ + 0x40) + 0x68),
                 *(FDynamicMesh3 **)(this->_padding_ + 0x30),FullUpdate,AllVertexAttribs);
      *(undefined1 *)&this->CommonBoundaryIndex = 1;
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
                ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                 ((this->TargetTransform).Scale3D.XY.m128d_f64 + 1),1,Default);
      iVar1 = *(int *)((longlong)(this->TargetTransform).Scale3D.XY.m128d_f64 + 4);
      *(undefined4 *)(this->TargetTransform).Scale3D.XY.m128d_f64 = 0;
      if (iVar1 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,(ForAnyElementType *)
                            ((this->TargetTransform).Translation.ZW.m128d_f64 + 1),0,
                   (int *)((longlong)(this->TargetTransform).Scale3D.XY.m128d_f64 + 4));
        return;
      }
    }
    else if (iVar1 == 2) goto LAB_14cd74d67;
  }
  return;
}

// OnPropertyModified @ 14cd75200

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
UPolyEditInsertEdgeActivity::OnPropertyModified
          (UPolyEditInsertEdgeActivity *this,UObject *param_1,FProperty *param_2)

{
  UPolyEditActivityContext *pUVar1;
  
  (this->PreviewEdges).ArrayNum = 0;
  if ((this->PreviewEdges).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->PreviewEdges).AllocatorInstance,0,&(this->PreviewEdges).ArrayMax);
  }
  UMeshOpPreviewWithBackgroundCompute::CancelCompute
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
  pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
  UPreviewMesh::UpdatePreview
            ((((pUVar1->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (pUVar1->CurrentMesh).Object,FullUpdate,AllVertexAttribs);
  this->bShowingBaseMesh = true;
  return;
}

// OnUpdateHover @ 14cd75f30

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UPolyEditInsertEdgeActivity::OnUpdateHover
          (UPolyEditInsertEdgeActivity *this,FInputDeviceRay *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  double dVar4;
  undefined8 *puVar5;
  double dVar6;
  ForAnyElementType FVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 uVar13;
  char cVar14;
  int iVar15;
  FGroupTopology *pFVar16;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar17;
  longlong lVar18;
  longlong *plVar19;
  double *pdVar20;
  undefined1 auStackY_1b8 [32];
  bool local_168 [4];
  int local_164;
  int local_160;
  int local_15c [3];
  double local_150;
  TVector<double>_u_0 local_148;
  TVector<double>_u_0 local_130;
  TVector<double>_u_0 local_118;
  double local_100;
  double dStack_f8;
  double local_f0;
  FGroupEdgeSplitPoint local_e8;
  undefined8 local_b8;
  longlong local_a8;
  longlong local_98 [3];
  longlong *local_80;
  undefined1 local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  if ((char)this->_padding_ == '\0') {
    return false;
  }
  iVar15 = this->CommonGroupID;
  if (iVar15 == 0) {
    pdVar20 = (this->TargetTransform).Scale3D.XY.m128d_f64 + 1;
    iVar15 = *(int *)((longlong)(this->TargetTransform).Scale3D.ZW.m128d_f64 + 4);
    piVar1 = (int *)((longlong)(this->TargetTransform).Scale3D.ZW.m128d_f64 + 4);
    *(undefined4 *)(this->TargetTransform).Scale3D.ZW.m128d_f64 = 0;
    if (iVar15 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)pdVar20,0,piVar1);
    }
    bVar12 = GetHoveredItem((UPolyEditInsertEdgeActivity *)&this[-1].LatestOpChangedTids,
                            &param_1->WorldRay,
                            (FGroupEdgeSplitPoint *)
                            &(this->PreviewEdgeRenderer).TotalTransform.Translation.ZW,
                            (int *)((this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64
                                   + 1),
                            (bool *)((longlong)
                                     (this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64
                                    + 0xc),(TVector<double> *)&local_130._s_0,(TRay<double> *)0x0);
    if (!bVar12) {
      return false;
    }
    if ((((FScriptContainerElement *)*pdVar20 <= &local_130) &&
        (&local_130 <
         (TVector<double>_u_0 *)((FScriptContainerElement *)*pdVar20 + (longlong)*piVar1 * 0x18)))
       && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return (bool)uVar13;
    }
    iVar15 = *(int *)(this->TargetTransform).Scale3D.ZW.m128d_f64;
    if (iVar15 == *(int *)((longlong)(this->TargetTransform).Scale3D.ZW.m128d_f64 + 4)) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)pdVar20,piVar1);
    }
    *(int *)(this->TargetTransform).Scale3D.ZW.m128d_f64 = iVar15 + 1;
    FVar7.Data = (FScriptContainerElement *)*pdVar20;
    pFVar3 = FVar7.Data + (longlong)iVar15 * 0x18;
    *(double *)pFVar3 = local_130._s_0.X;
    *(double *)(pFVar3 + 8) = local_130._s_0.Y;
    *(double *)(FVar7.Data + (longlong)iVar15 * 0x18 + 0x10) = local_130._s_0.Z;
    return true;
  }
  if (iVar15 != 1) {
    if (iVar15 == 2) {
      return false;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditInsertEdgeActivity.cpp"
                        ,0x21a,L"");
    if (!bVar12) {
      return false;
    }
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  if (*(int *)(this->TargetTransform).Scale3D.ZW.m128d_f64 < 1) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_8292026993105436186>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditInsertEdgeActivity.cpp"
                        ,0x1e6,"PreviewPoints.Num() > 0");
    if (!bVar12) {
      this->CommonGroupID = 0;
      ClearPreview((UPolyEditInsertEdgeActivity *)&this[-1].LatestOpChangedTids,true);
      return false;
    }
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
             ((this->TargetTransform).Scale3D.XY.m128d_f64 + 1),1,Default);
  local_118._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_118._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_118._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_f0 = __real_3ff0000000000000;
  local_100 = 0.0;
  dStack_f8 = 0.0;
  bVar12 = GetHoveredItem((UPolyEditInsertEdgeActivity *)&this[-1].LatestOpChangedTids,
                          &param_1->WorldRay,&local_e8,&local_164,local_168,
                          (TVector<double> *)&local_148._s_0,(TRay<double> *)&local_118._s_0);
  if (!bVar12) {
    if ((char)this->CommonBoundaryIndex == '\0') {
      UMeshOpPreviewWithBackgroundCompute::CancelCompute
                (*(UMeshOpPreviewWithBackgroundCompute **)(this->_padding_ + 0x40));
      UPreviewMesh::UpdatePreview
                (*(UPreviewMesh **)(*(longlong *)(this->_padding_ + 0x40) + 0x68),
                 *(FDynamicMesh3 **)(this->_padding_ + 0x30),FullUpdate,AllVertexAttribs);
      *(undefined1 *)&this->CommonBoundaryIndex = 1;
    }
    iVar15 = *(int *)((longlong)(this->TargetTransform).Scale3D.XY.m128d_f64 + 4);
    piVar1 = (int *)((longlong)(this->TargetTransform).Scale3D.XY.m128d_f64 + 4);
    *(undefined4 *)(this->TargetTransform).Scale3D.XY.m128d_f64 = 0;
    if (iVar15 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,(ForAnyElementType *)
                          ((this->TargetTransform).Translation.ZW.m128d_f64 + 1),0,piVar1);
    }
    local_150 = 0.0;
    local_15c[1] = 0xffffffff;
    pTVar17 = TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1>::operator->
                        ((TSharedPtr<UE::Geometry::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>,1> *)
                         (this->_padding_ + 0x58));
    local_b8 = __real_7fefffffffffffff;
    local_a8 = 0;
    local_80 = (longlong *)0x0;
    local_78 = 0;
    cVar14 = (**(code **)(pTVar17->_padding_ + 0x38))(pTVar17,&local_118,&local_150,local_15c + 1);
    if (local_a8 != 0) {
      plVar19 = local_98;
      if (local_80 != (longlong *)0x0) {
        plVar19 = local_80;
      }
      (**(code **)(*plVar19 + 0x10))();
    }
    if (cVar14 == '\0') {
      return false;
    }
    dVar10 = local_f0 * local_150 + local_118._s_0.Z;
    dVar4 = local_100 * local_150 + local_118._s_0.X;
    dVar9 = dStack_f8 * local_150 + local_118._s_0.Y;
    if ((*(int *)(this->TargetTransform).Scale3D.ZW.m128d_f64 < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar8 = (code *)swi(3);
      uVar13 = (*pcVar8)();
      return (bool)uVar13;
    }
    iVar15 = *(int *)(this->TargetTransform).Scale3D.XY.m128d_f64;
    puVar5 = (undefined8 *)(this->TargetTransform).Scale3D.XY.m128d_f64[1];
    if (iVar15 == *(int *)((longlong)(this->TargetTransform).Scale3D.XY.m128d_f64 + 4)) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x830,(ForAnyElementType *)
                                ((this->TargetTransform).Translation.ZW.m128d_f64 + 1),piVar1);
    }
    lVar18 = (longlong)iVar15;
    *(int *)(this->TargetTransform).Scale3D.XY.m128d_f64 = iVar15 + 1;
    uVar11 = puVar5[1];
    dVar6 = (this->TargetTransform).Translation.ZW.m128d_f64[1];
    puVar2 = (undefined8 *)((longlong)dVar6 + lVar18 * 0x30);
    *puVar2 = *puVar5;
    puVar2[1] = uVar11;
    *(undefined8 *)((longlong)dVar6 + 0x10 + lVar18 * 0x30) = puVar5[2];
    *(double *)((longlong)dVar6 + 0x18 + lVar18 * 0x30) = dVar4;
    *(double *)((longlong)dVar6 + 0x20 + lVar18 * 0x30) = dVar9;
    *(double *)((longlong)dVar6 + 0x28 + lVar18 * 0x30) = dVar10;
    return true;
  }
  if ((local_e8.bIsVertex !=
       (bool)*(char *)((longlong)(this->PreviewEdgeRenderer).TotalTransform.Translation.ZW.m128d_f64
                      + 4)) ||
     (local_e8.ElementID !=
      *(int *)(this->PreviewEdgeRenderer).TotalTransform.Translation.ZW.m128d_f64)) {
    bVar12 = *(bool *)((longlong)(this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64 +
                      0xc);
    iVar15 = *(int *)((this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64 + 1);
    pFVar16 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator*<UE::Geometry::FGroupTopology>
                        ((TSharedPtr<UE::Geometry::FGroupTopology,1> *)(this->_padding_ + 0x48));
    bVar12 = PolyEditInsertEdgeActivityLocals::GetSharedBoundary
                       (pFVar16,(FGroupEdgeSplitPoint *)
                                &(this->PreviewEdgeRenderer).TotalTransform.Translation.ZW,iVar15,
                        bVar12,&local_e8,local_164,local_168[0],local_15c,&local_160);
    if (bVar12) {
      ConditionallyUpdatePreview
                ((UPolyEditInsertEdgeActivity *)&this[-1].LatestOpChangedTids,&local_e8,local_164,
                 local_168[0],local_15c[0],local_160);
      goto LAB_14cd76173;
    }
  }
  iVar15 = *(int *)((longlong)(this->TargetTransform).Scale3D.XY.m128d_f64 + 4);
  *(undefined4 *)(this->TargetTransform).Scale3D.XY.m128d_f64 = 0;
  if (iVar15 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)((this->TargetTransform).Translation.ZW.m128d_f64 + 1),
               0,(int *)((longlong)(this->TargetTransform).Scale3D.XY.m128d_f64 + 4));
  }
LAB_14cd76173:
  pdVar20 = (this->TargetTransform).Scale3D.XY.m128d_f64 + 1;
  if ((((TVector<double>_u_0 *)*pdVar20 <= &local_148) &&
      (&local_148 <
       (TVector<double>_u_0 *)
       (((TVector<double>_u_0 *)*pdVar20)->XYZ +
       (longlong)*(int *)((longlong)(this->TargetTransform).Scale3D.ZW.m128d_f64 + 4) * 3))) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar8 = (code *)swi(3);
    uVar13 = (*pcVar8)();
    return (bool)uVar13;
  }
  iVar15 = *(int *)(this->TargetTransform).Scale3D.ZW.m128d_f64;
  piVar1 = (int *)((longlong)(this->TargetTransform).Scale3D.ZW.m128d_f64 + 4);
  if (iVar15 == *piVar1) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,(ForAnyElementType *)pdVar20,piVar1);
  }
  *(int *)(this->TargetTransform).Scale3D.ZW.m128d_f64 = iVar15 + 1;
  dVar4 = *pdVar20;
  pdVar20 = (double *)((longlong)dVar4 + (longlong)iVar15 * 0x18);
  *pdVar20 = local_148._s_0.X;
  pdVar20[1] = local_148._s_0.Y;
  *(double *)((longlong)dVar4 + 0x10 + (longlong)iVar15 * 0x18) = local_148._s_0.Z;
  return true;
}

// Render @ 14cd79d40

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
UPolyEditInsertEdgeActivity::Render
          (UPolyEditInsertEdgeActivity *this,IToolsContextRenderAPI *param_1)

{
  FToolDataVisualizer *this_00;
  uint *puVar1;
  double *pdVar2;
  int iVar3;
  uint uVar4;
  UPolyEditActivityContext *pUVar5;
  FDynamicMesh3 *pFVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  bool bVar24;
  UObject *pUVar25;
  longlong *plVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  uint *puVar29;
  FScriptContainerElement *pFVar30;
  FScriptContainerElement *pFVar31;
  FScriptContainerElement *pFVar32;
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
  undefined1 auVar55 [16];
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
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined4 uVar69;
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
  undefined1 auVar84 [16];
  undefined1 local_res8 [8];
  IToolsContextRenderAPI *local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_1d8 [4];
  uint local_1d4;
  FScriptContainerElement *local_1d0;
  FGroupTopology *local_1c8;
  undefined1 local_1b8 [16];
  undefined1 local_198 [16];
  double local_188;
  undefined1 local_180 [16];
  double local_170;
  undefined1 local_168 [16];
  double local_158;
  undefined1 local_150 [16];
  double local_140;
  undefined1 local_138 [16];
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  FViewCameraState local_e8;
  
  local_res10 = param_1;
  pUVar25 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  plVar26 = (longlong *)(**(code **)(*(longlong *)pUVar25 + 0x2d8))(pUVar25);
  plVar26 = (longlong *)(**(code **)(*plVar26 + 0x398))(plVar26);
  (**(code **)(*plVar26 + 0x18))(plVar26,&this->CameraState);
  (**(code **)((longlong)*param_1 + 0x18))(param_1,&local_e8);
  FToolDataVisualizer::BeginFrame(&this->ExistingEdgesRenderer,param_1,&local_e8);
  FToolDataVisualizer::SetTransform(&this->ExistingEdgesRenderer,&this->TargetTransform);
  local_1c8 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator->
                        (&((this->ActivityContext).field0_0x0.DebugPtr)->CurrentTopology);
  local_1d4 = (local_1c8->Edges).ArrayNum;
  uVar28 = (ulonglong)(int)local_1d4;
  pFVar31 = (local_1c8->Edges).AllocatorInstance.Data;
  local_1d0 = pFVar31 + uVar28 * 0x50;
  while( true ) {
    pFVar32 = local_1d0;
    if ((local_1c8->Edges).ArrayNum != (int)uVar28) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Geometry::FGroupTopology::FGroupEdge,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar31 == pFVar32) break;
    puVar29 = *(uint **)(pFVar31 + 0x20);
    iVar3 = *(int *)(pFVar31 + 0x28);
    puVar1 = puVar29 + iVar3;
    while( true ) {
      if (*(int *)(pFVar31 + 0x28) != iVar3) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (puVar29 == puVar1) break;
      pUVar5 = (this->ActivityContext).field0_0x0.DebugPtr;
      uVar4 = *puVar29;
      if ((pUVar5->CurrentMesh).Object == (FDynamicMesh3 *)0x0) {
        bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar24) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      pFVar6 = (pUVar5->CurrentMesh).Object;
      auVar58 = *(undefined1 (*) [16])
                 (this->ExistingEdgesRenderer).TotalTransform.Rotation.XY.m128d_f64;
      dVar13 = (this->ExistingEdgesRenderer).TotalTransform.Rotation.ZW.m128d_f64[1];
      pFVar32 = (pFVar6->Vertices).Blocks.AllocatorInstance.Data;
      uVar28 = *(ulonglong *)
                (*(longlong *)
                  ((pFVar6->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8) +
                (ulonglong)(uVar4 & 0x1ff) * 0x10);
      uVar27 = (ulonglong)((uint)(uVar28 >> 0x20) & 0x1ff);
      lVar7 = *(longlong *)(pFVar32 + (uVar28 >> 0x29) * 8);
      pdVar2 = (double *)(lVar7 + uVar27 * 0x18);
      local_120 = *pdVar2;
      dStack_118 = pdVar2[1];
      local_110 = *(double *)(lVar7 + 0x10 + uVar27 * 0x18);
      dVar18 = local_110 * (this->ExistingEdgesRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
      dVar21 = (this->ExistingEdgesRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
      uVar27 = (ulonglong)((uint)uVar28 & 0x1ff);
      lVar7 = *(longlong *)(pFVar32 + ((uVar28 & 0xffffffff) >> 9) * 8);
      auVar34 = *(undefined1 (*) [16])
                 (this->ExistingEdgesRenderer).TotalTransform.Rotation.XY.m128d_f64;
      dVar11 = (this->ExistingEdgesRenderer).TotalTransform.Scale3D.XY.m128d_f64[0] * local_120;
      dVar12 = (this->ExistingEdgesRenderer).TotalTransform.Scale3D.XY.m128d_f64[1] * dStack_118;
      uVar69 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar38 = *(undefined1 (*) [16])
                 (this->ExistingEdgesRenderer).TotalTransform.Rotation.ZW.m128d_f64;
      auVar70._8_4_ = SUB84(dVar12,0);
      auVar70._0_8_ = dVar11;
      auVar70._12_4_ = uVar69;
      dVar10 = auVar38._0_8_;
      auVar48 = blendpd(auVar34,auVar38,2);
      auVar71._0_8_ = auVar70._8_8_ * auVar34._0_8_ - auVar34._8_8_ * dVar11;
      auVar71._8_8_ = dVar18 * auVar34._8_8_ - dVar10 * dVar12;
      auVar33._8_4_ = SUB84(dVar12,0);
      auVar33._0_8_ = dVar11;
      auVar33._12_4_ = uVar69;
      auVar14._8_4_ = SUB84(dVar21,0);
      auVar14._0_8_ = dVar18;
      auVar14._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      auVar34 = blendpd(auVar33,auVar14,2);
      auVar35._0_8_ = auVar34._0_8_ * dVar10 - auVar48._0_8_ * dVar18;
      auVar35._8_8_ = auVar34._8_8_ * auVar38._8_8_ - auVar48._8_8_ * dVar21;
      auVar34 = blendpd(auVar71,auVar35,2);
      dVar21 = auVar71._8_8_ + auVar71._8_8_;
      dVar9 = auVar35._0_8_ + auVar35._0_8_;
      uVar69 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar72._0_8_ = auVar34._0_8_ + auVar34._0_8_;
      auVar72._8_8_ = auVar34._8_8_ + auVar34._8_8_;
      auVar59._8_4_ = SUB84(dVar9,0);
      auVar59._0_8_ = dVar21;
      auVar59._12_4_ = uVar69;
      auVar49._8_4_ = SUB84(dVar9,0);
      auVar49._0_8_ = dVar21;
      auVar49._12_4_ = uVar69;
      auVar34 = blendpd(auVar49,auVar72,2);
      auVar60._0_8_ = auVar59._8_8_ * auVar58._0_8_ - auVar58._8_8_ * dVar21;
      auVar60._8_8_ = auVar72._0_8_ * auVar58._8_8_ - dVar10 * dVar9;
      auVar36._8_4_ = SUB84(auVar60._8_8_,0);
      auVar36._0_8_ = auVar60._0_8_;
      auVar36._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
      auVar58 = blendpd(auVar58,auVar38,2);
      auVar50._0_8_ = auVar34._0_8_ * dVar10 - auVar58._0_8_ * auVar72._0_8_;
      auVar50._8_8_ = auVar34._8_8_ * auVar38._8_8_ - auVar58._8_8_ * auVar72._8_8_;
      auVar58 = blendpd(auVar60,auVar50,2);
      dVar10 = dVar9 * dVar13 + dVar12 + auVar50._0_8_ +
               (this->ExistingEdgesRenderer).TotalTransform.Translation.XY.m128d_f64[1];
      local_188 = auVar72._0_8_ * dVar13 + dVar18 + auVar58._0_8_ +
                  (this->ExistingEdgesRenderer).TotalTransform.Translation.ZW.m128d_f64[0];
      local_198._8_4_ = SUB84(dVar10,0);
      local_198._0_8_ =
           dVar21 * dVar13 + dVar11 + auVar36._8_8_ +
           (this->ExistingEdgesRenderer).TotalTransform.Translation.XY.m128d_f64[0];
      local_198._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      pdVar2 = (double *)(lVar7 + uVar27 * 0x18);
      local_108 = *pdVar2;
      dStack_100 = pdVar2[1];
      local_f8 = *(double *)(lVar7 + 0x10 + uVar27 * 0x18);
      auVar58 = *(undefined1 (*) [16])
                 (this->ExistingEdgesRenderer).TotalTransform.Rotation.XY.m128d_f64;
      dVar18 = local_f8 * (this->ExistingEdgesRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
      dVar21 = (this->ExistingEdgesRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar13 = (this->ExistingEdgesRenderer).TotalTransform.Rotation.ZW.m128d_f64[1];
      local_1b8 = *(undefined1 (*) [16])
                   (this->ExistingEdgesRenderer).TotalTransform.Rotation.XY.m128d_f64;
      dVar11 = (this->ExistingEdgesRenderer).TotalTransform.Scale3D.XY.m128d_f64[0] * local_108;
      dVar12 = (this->ExistingEdgesRenderer).TotalTransform.Scale3D.XY.m128d_f64[1] * dStack_100;
      uVar69 = (undefined4)((ulonglong)dVar12 >> 0x20);
      auVar34 = *(undefined1 (*) [16])
                 (this->ExistingEdgesRenderer).TotalTransform.Rotation.ZW.m128d_f64;
      auVar73._8_4_ = SUB84(dVar12,0);
      auVar73._0_8_ = dVar11;
      auVar73._12_4_ = uVar69;
      dVar10 = auVar34._0_8_;
      auVar48 = blendpd(local_1b8,auVar34,2);
      auVar74._0_8_ = auVar73._8_8_ * local_1b8._0_8_ - local_1b8._8_8_ * dVar11;
      auVar74._8_8_ = dVar18 * local_1b8._8_8_ - dVar10 * dVar12;
      auVar37._8_4_ = SUB84(dVar12,0);
      auVar37._0_8_ = dVar11;
      auVar37._12_4_ = uVar69;
      auVar15._8_4_ = SUB84(dVar21,0);
      auVar15._0_8_ = dVar18;
      auVar15._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
      auVar38 = blendpd(auVar37,auVar15,2);
      auVar39._0_8_ = auVar38._0_8_ * dVar10 - auVar48._0_8_ * dVar18;
      auVar39._8_8_ = auVar38._8_8_ * auVar34._8_8_ - auVar48._8_8_ * dVar21;
      auVar38 = blendpd(auVar74,auVar39,2);
      dVar21 = auVar74._8_8_ + auVar74._8_8_;
      dVar9 = auVar39._0_8_ + auVar39._0_8_;
      uVar69 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar75._0_8_ = auVar38._0_8_ + auVar38._0_8_;
      auVar75._8_8_ = auVar38._8_8_ + auVar38._8_8_;
      auVar61._8_4_ = SUB84(dVar9,0);
      auVar61._0_8_ = dVar21;
      auVar61._12_4_ = uVar69;
      auVar51._8_4_ = SUB84(dVar9,0);
      auVar51._0_8_ = dVar21;
      auVar51._12_4_ = uVar69;
      auVar38 = blendpd(auVar51,auVar75,2);
      auVar62._0_8_ = auVar61._8_8_ * auVar58._0_8_ - auVar58._8_8_ * dVar21;
      auVar62._8_8_ = auVar75._0_8_ * auVar58._8_8_ - dVar10 * dVar9;
      auVar40._8_4_ = SUB84(auVar62._8_8_,0);
      auVar40._0_8_ = auVar62._0_8_;
      auVar40._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
      auVar58 = blendpd(auVar58,auVar34,2);
      auVar52._0_8_ = auVar38._0_8_ * dVar10 - auVar58._0_8_ * auVar75._0_8_;
      auVar52._8_8_ = auVar38._8_8_ * auVar34._8_8_ - auVar58._8_8_ * auVar75._8_8_;
      dVar10 = dVar9 * dVar13 + dVar12 + auVar52._0_8_ +
               (this->ExistingEdgesRenderer).TotalTransform.Translation.XY.m128d_f64[1];
      auVar58 = blendpd(auVar62,auVar52,2);
      local_180._8_4_ = SUB84(dVar10,0);
      local_180._0_8_ =
           dVar21 * dVar13 + dVar11 + auVar40._8_8_ +
           (this->ExistingEdgesRenderer).TotalTransform.Translation.XY.m128d_f64[0];
      local_180._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      local_170 = auVar75._0_8_ * dVar13 + dVar18 + auVar58._0_8_ +
                  (this->ExistingEdgesRenderer).TotalTransform.Translation.ZW.m128d_f64[0];
      (**(code **)((this->ExistingEdgesRenderer)._padding_ + 8))
                (&this->ExistingEdgesRenderer,local_180,local_198,
                 &(this->ExistingEdgesRenderer).LineColor,
                 (this->ExistingEdgesRenderer).LineThickness,
                 (this->ExistingEdgesRenderer).bDepthTested);
      puVar29 = puVar29 + 1;
    }
    pFVar31 = pFVar31 + 0x50;
    uVar28 = (ulonglong)local_1d4;
  }
  FToolDataVisualizer::EndFrame(&this->ExistingEdgesRenderer);
  this_00 = &this->PreviewEdgeRenderer;
  FToolDataVisualizer::BeginFrame(this_00,local_res10,&local_e8);
  FToolDataVisualizer::SetTransform(this_00,&this->TargetTransform);
  pFVar32 = (this->PreviewEdges).AllocatorInstance.Data;
  iVar3 = (this->PreviewEdges).ArrayNum;
  pFVar31 = pFVar32 + 0x18;
  pFVar30 = pFVar32 + (longlong)iVar3 * 0x30;
  while( true ) {
    if ((this->PreviewEdges).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar32 == pFVar30) break;
    auVar58 = *(undefined1 (*) [16])(this->PreviewEdgeRenderer).TotalTransform.Rotation.ZW.m128d_f64
    ;
    auVar34 = *(undefined1 (*) [16])(this->PreviewEdgeRenderer).TotalTransform.Rotation.XY.m128d_f64
    ;
    dVar19 = *(double *)(pFVar31 + 0x10) *
             (this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
    dVar9 = (this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar23 = (this->PreviewEdgeRenderer).TotalTransform.Rotation.ZW.m128d_f64[1];
    dVar12 = (this->PreviewEdgeRenderer).TotalTransform.Scale3D.XY.m128d_f64[0] * *(double *)pFVar31
    ;
    dVar18 = (this->PreviewEdgeRenderer).TotalTransform.Scale3D.XY.m128d_f64[1] *
             *(double *)(pFVar31 + 8);
    uVar69 = (undefined4)((ulonglong)dVar18 >> 0x20);
    auVar38 = *(undefined1 (*) [16])(this->PreviewEdgeRenderer).TotalTransform.Rotation.XY.m128d_f64
    ;
    auVar48 = blendpd(auVar38,auVar58,2);
    auVar76._8_4_ = SUB84(dVar18,0);
    auVar76._0_8_ = dVar12;
    auVar76._12_4_ = uVar69;
    dVar10 = auVar58._0_8_;
    auVar77._0_8_ = auVar76._8_8_ * auVar38._0_8_ - auVar38._8_8_ * dVar12;
    auVar77._8_8_ = dVar19 * auVar38._8_8_ - dVar10 * dVar18;
    auVar41._8_4_ = SUB84(dVar18,0);
    auVar41._0_8_ = dVar12;
    auVar41._12_4_ = uVar69;
    auVar16._8_4_ = SUB84(dVar9,0);
    auVar16._0_8_ = dVar19;
    auVar16._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    auVar38 = blendpd(auVar41,auVar16,2);
    dVar21 = auVar58._8_8_;
    auVar42._0_8_ = auVar38._0_8_ * dVar10 - auVar48._0_8_ * dVar19;
    auVar42._8_8_ = auVar38._8_8_ * dVar21 - auVar48._8_8_ * dVar9;
    auVar38 = blendpd(auVar77,auVar42,2);
    auVar78._0_8_ = auVar38._0_8_ + auVar38._0_8_;
    auVar78._8_8_ = auVar38._8_8_ + auVar38._8_8_;
    dVar9 = auVar77._8_8_ + auVar77._8_8_;
    dVar11 = auVar42._0_8_ + auVar42._0_8_;
    uVar69 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar63._8_4_ = SUB84(dVar11,0);
    auVar63._0_8_ = dVar9;
    auVar63._12_4_ = uVar69;
    auVar53._8_4_ = SUB84(dVar11,0);
    auVar53._0_8_ = dVar9;
    auVar53._12_4_ = uVar69;
    auVar38 = blendpd(auVar53,auVar78,2);
    auVar64._0_8_ = auVar63._8_8_ * auVar34._0_8_ - auVar34._8_8_ * dVar9;
    auVar64._8_8_ = auVar78._0_8_ * auVar34._8_8_ - dVar10 * dVar11;
    auVar34 = blendpd(auVar34,auVar58,2);
    auVar54._0_8_ = auVar38._0_8_ * dVar10 - auVar34._0_8_ * auVar78._0_8_;
    auVar54._8_8_ = auVar38._8_8_ * dVar21 - auVar34._8_8_ * auVar78._8_8_;
    auVar34 = *(undefined1 (*) [16])(this->PreviewEdgeRenderer).TotalTransform.Rotation.XY.m128d_f64
    ;
    auVar43._8_4_ = SUB84(auVar64._8_8_,0);
    auVar43._0_8_ = auVar64._0_8_;
    auVar43._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
    dVar11 = dVar11 * dVar23 + dVar18 + auVar54._0_8_ +
             (this->PreviewEdgeRenderer).TotalTransform.Translation.XY.m128d_f64[1];
    dVar20 = *(double *)(pFVar32 + 0x10) *
             (this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
    dVar22 = (this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar18 = (this->PreviewEdgeRenderer).TotalTransform.Scale3D.XY.m128d_f64[0] * *(double *)pFVar32
    ;
    dVar13 = (this->PreviewEdgeRenderer).TotalTransform.Scale3D.XY.m128d_f64[1] *
             *(double *)(pFVar32 + 8);
    uVar69 = (undefined4)((ulonglong)dVar13 >> 0x20);
    auVar38 = *(undefined1 (*) [16])(this->PreviewEdgeRenderer).TotalTransform.Rotation.XY.m128d_f64
    ;
    auVar48 = blendpd(auVar64,auVar54,2);
    local_158 = auVar78._0_8_ * dVar23 + dVar19 + auVar48._0_8_ +
                (this->PreviewEdgeRenderer).TotalTransform.Translation.ZW.m128d_f64[0];
    local_168._8_4_ = SUB84(dVar11,0);
    local_168._0_8_ =
         dVar9 * dVar23 + dVar12 + auVar43._8_8_ +
         (this->PreviewEdgeRenderer).TotalTransform.Translation.XY.m128d_f64[0];
    local_168._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar79._8_4_ = SUB84(dVar13,0);
    auVar79._0_8_ = dVar18;
    auVar79._12_4_ = uVar69;
    auVar48 = blendpd(auVar38,auVar58,2);
    auVar80._0_8_ = auVar79._8_8_ * auVar38._0_8_ - auVar38._8_8_ * dVar18;
    auVar80._8_8_ = dVar20 * auVar38._8_8_ - dVar10 * dVar13;
    auVar44._8_4_ = SUB84(dVar13,0);
    auVar44._0_8_ = dVar18;
    auVar44._12_4_ = uVar69;
    auVar17._8_4_ = SUB84(dVar22,0);
    auVar17._0_8_ = dVar20;
    auVar17._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    auVar38 = blendpd(auVar44,auVar17,2);
    auVar45._0_8_ = auVar38._0_8_ * dVar10 - auVar48._0_8_ * dVar20;
    auVar45._8_8_ = auVar38._8_8_ * dVar21 - auVar48._8_8_ * dVar22;
    auVar38 = blendpd(auVar80,auVar45,2);
    dVar9 = auVar80._8_8_ + auVar80._8_8_;
    dVar11 = auVar45._0_8_ + auVar45._0_8_;
    uVar69 = (undefined4)((ulonglong)dVar11 >> 0x20);
    auVar81._0_8_ = auVar38._0_8_ + auVar38._0_8_;
    auVar81._8_8_ = auVar38._8_8_ + auVar38._8_8_;
    auVar65._8_4_ = SUB84(dVar11,0);
    auVar65._0_8_ = dVar9;
    auVar65._12_4_ = uVar69;
    auVar55._8_4_ = SUB84(dVar11,0);
    auVar55._0_8_ = dVar9;
    auVar55._12_4_ = uVar69;
    auVar38 = blendpd(auVar55,auVar81,2);
    auVar66._0_8_ = auVar65._8_8_ * auVar34._0_8_ - auVar34._8_8_ * dVar9;
    auVar66._8_8_ = auVar81._0_8_ * auVar34._8_8_ - dVar10 * dVar11;
    auVar46._8_4_ = SUB84(auVar66._8_8_,0);
    auVar46._0_8_ = auVar66._0_8_;
    auVar46._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
    auVar34 = blendpd(auVar34,auVar58,2);
    auVar58._0_8_ = auVar38._0_8_ * dVar10 - auVar34._0_8_ * auVar81._0_8_;
    auVar58._8_8_ = auVar38._8_8_ * dVar21 - auVar34._8_8_ * auVar81._8_8_;
    dVar10 = dVar11 * dVar21 + dVar13 + auVar58._0_8_ +
             (this->PreviewEdgeRenderer).TotalTransform.Translation.XY.m128d_f64[1];
    auVar58 = blendpd(auVar66,auVar58,2);
    local_150._8_4_ = SUB84(dVar10,0);
    local_150._0_8_ =
         dVar9 * dVar21 + dVar18 + auVar46._8_8_ +
         (this->PreviewEdgeRenderer).TotalTransform.Translation.XY.m128d_f64[0];
    local_150._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    local_140 = auVar81._0_8_ * dVar21 + dVar20 + auVar58._0_8_ +
                (this->PreviewEdgeRenderer).TotalTransform.Translation.ZW.m128d_f64[0];
    (**(code **)(this_00->_padding_ + 8))
              (this_00,local_150,local_168,&(this->PreviewEdgeRenderer).LineColor,
               (this->PreviewEdgeRenderer).LineThickness,(this->PreviewEdgeRenderer).bDepthTested);
    pFVar32 = pFVar32 + 0x30;
    pFVar31 = pFVar31 + 0x30;
  }
  iVar3 = (this->PreviewPoints).ArrayNum;
  pFVar32 = (this->PreviewPoints).AllocatorInstance.Data;
  pFVar31 = pFVar32 + (longlong)iVar3 * 0x18;
  while( true ) {
    if ((this->PreviewPoints).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1d8);
    }
    if (pFVar32 == pFVar31) break;
    auVar58 = *(undefined1 (*) [16])(this->PreviewEdgeRenderer).TotalTransform.Rotation.ZW.m128d_f64
    ;
    auVar34 = *(undefined1 (*) [16])(this->PreviewEdgeRenderer).TotalTransform.Rotation.XY.m128d_f64
    ;
    dVar18 = *(double *)(pFVar32 + 0x10) *
             (this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
    dVar21 = (this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
    pcVar8 = *(code **)(this_00->_padding_ + 0x18);
    dVar13 = (this->PreviewEdgeRenderer).TotalTransform.Rotation.ZW.m128d_f64[1];
    dVar11 = (this->PreviewEdgeRenderer).TotalTransform.Scale3D.XY.m128d_f64[0] * *(double *)pFVar32
    ;
    dVar12 = (this->PreviewEdgeRenderer).TotalTransform.Scale3D.XY.m128d_f64[1] *
             *(double *)(pFVar32 + 8);
    uVar69 = (undefined4)((ulonglong)dVar12 >> 0x20);
    auVar38 = *(undefined1 (*) [16])(this->PreviewEdgeRenderer).TotalTransform.Rotation.XY.m128d_f64
    ;
    auVar56 = blendpd(auVar38,auVar58,2);
    auVar82._8_4_ = SUB84(dVar12,0);
    auVar82._0_8_ = dVar11;
    auVar82._12_4_ = uVar69;
    dVar10 = auVar58._0_8_;
    auVar83._0_8_ = auVar82._8_8_ * auVar38._0_8_ - auVar38._8_8_ * dVar11;
    auVar83._8_8_ = dVar18 * auVar38._8_8_ - dVar10 * dVar12;
    auVar48._8_4_ = SUB84(dVar12,0);
    auVar48._0_8_ = dVar11;
    auVar48._12_4_ = uVar69;
    auVar38._8_4_ = SUB84(dVar21,0);
    auVar38._0_8_ = dVar18;
    auVar38._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    auVar38 = blendpd(auVar48,auVar38,2);
    auVar47._0_8_ = auVar38._0_8_ * dVar10 - auVar56._0_8_ * dVar18;
    auVar47._8_8_ = auVar38._8_8_ * auVar58._8_8_ - auVar56._8_8_ * dVar21;
    auVar38 = blendpd(auVar83,auVar47,2);
    dVar21 = auVar83._8_8_ + auVar83._8_8_;
    dVar9 = auVar47._0_8_ + auVar47._0_8_;
    uVar69 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar84._0_8_ = auVar38._0_8_ + auVar38._0_8_;
    auVar84._8_8_ = auVar38._8_8_ + auVar38._8_8_;
    auVar67._8_4_ = SUB84(dVar9,0);
    auVar67._0_8_ = dVar21;
    auVar67._12_4_ = uVar69;
    auVar56._8_4_ = SUB84(dVar9,0);
    auVar56._0_8_ = dVar21;
    auVar56._12_4_ = uVar69;
    auVar38 = blendpd(auVar56,auVar84,2);
    auVar68._0_8_ = auVar67._8_8_ * auVar34._0_8_ - auVar34._8_8_ * dVar21;
    auVar68._8_8_ = auVar84._0_8_ * auVar34._8_8_ - dVar10 * dVar9;
    auVar48 = blendpd(auVar34,auVar58,2);
    auVar34._8_4_ = SUB84(auVar68._8_8_,0);
    auVar34._0_8_ = auVar68._0_8_;
    auVar34._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
    auVar57._0_8_ = auVar38._0_8_ * dVar10 - auVar48._0_8_ * auVar84._0_8_;
    auVar57._8_8_ = auVar38._8_8_ * auVar58._8_8_ - auVar48._8_8_ * auVar84._8_8_;
    auVar58 = blendpd(auVar68,auVar57,2);
    dVar10 = dVar9 * dVar13 + dVar12 + auVar57._0_8_ +
             (this->PreviewEdgeRenderer).TotalTransform.Translation.XY.m128d_f64[1];
    local_128 = auVar84._0_8_ * dVar13 + dVar18 + auVar58._0_8_ +
                (this->PreviewEdgeRenderer).TotalTransform.Translation.ZW.m128d_f64[0];
    local_138._8_4_ = SUB84(dVar10,0);
    local_138._0_8_ =
         dVar21 * dVar13 + dVar11 + auVar34._8_8_ +
         (this->PreviewEdgeRenderer).TotalTransform.Translation.XY.m128d_f64[0];
    local_138._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    (*pcVar8)(this_00,local_138,&(this->PreviewEdgeRenderer).PointColor,pcVar8,
              (this->PreviewEdgeRenderer).bDepthTested);
    pFVar32 = pFVar32 + 0x18;
  }
  FToolDataVisualizer::EndFrame(this_00);
  return;
}

// Setup @ 14cd7c8f0

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
UPolyEditInsertEdgeActivity::Setup(UPolyEditInsertEdgeActivity *this,UInteractiveTool *param_1)

{
  code *pcVar1;
  UPolygonSelectionMechanic *pUVar2;
  FLinearColor FVar3;
  UClass *pUVar4;
  UGroupEdgeInsertionProperties *pUVar5;
  UObject *pUVar6;
  USingleClickInputBehavior *pUVar7;
  UMouseHoverBehavior *pUVar8;
  UInteractiveToolManager *this_00;
  UContextObjectStore *this_01;
  UPolyEditActivityContext *pUVar9;
  longlong *plVar10;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [24];
  FMeshTopologySelector *local_c0;
  FSharedReferencer<1> local_b8 [2];
  undefined1 local_a8 [80];
  longlong local_58 [3];
  longlong *local_40;
  double local_28;
  
  local_28 = (double)(__security_cookie.value ^ (ulonglong)auStack_f8);
  UInteractionMechanic::Setup((UInteractionMechanic *)this,param_1);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar4 = UGroupEdgeInsertionProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = this;
  pUVar5 = (UGroupEdgeInsertionProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if ((double)local_a8._64_8_ != 0.0) {
    plVar10 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar10 = local_40;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UGroupEdgeInsertionProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar5;
  pcVar1 = *(code **)(pUVar5->_padding_ + 0x2b8);
  ::FString::FString((FString *)local_d8,L"");
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar1)(pUVar5,pUVar6,local_d8);
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  (**(code **)(this->_padding_ + 0x2d0))(this,(this->Settings).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->Settings).field0_0x0.DebugPtr,0);
  local_d8._8_8_ = (ulonglong)(uint)local_d8._12_4_ << 0x20;
  local_d8._0_8_ = _vcall__792__flat______;
  TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>::
  AddUObject<UPolyEditInsertEdgeActivity>
            ((TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>
              *)&((this->Settings).field0_0x0.DebugPtr)->_padding_,
             (UPolyEditInsertEdgeActivity *)(local_d8 + 0x10),(pmf_d9504059 *)this);
  FVar3 = FLinearColor::Red;
  (this->ExistingEdgesRenderer).LineThickness = 2.0;
  (this->ExistingEdgesRenderer).LineColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  FVar3 = FLinearColor::Green;
  (this->PreviewEdgeRenderer).LineThickness = 4.0;
  (this->PreviewEdgeRenderer).LineColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  FVar3 = FLinearColor::Green;
  (this->PreviewEdgeRenderer).PointSize = 8.0;
  (this->PreviewEdgeRenderer).bDepthTested = false;
  (this->PreviewEdgeRenderer).PointColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  (this->TopologySelectorSettings).bEnableEdgeHits = true;
  (this->TopologySelectorSettings).bEnableCornerHits = true;
  (this->TopologySelectorSettings).bEnableFaceHits = false;
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = NewObject<USingleClickInputBehavior>(pUVar6);
  plVar10 = &this->_padding_;
  if (this == (UPolyEditInsertEdgeActivity *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  (**(code **)(pUVar7->_padding_ + 0x378))(pUVar7,plVar10);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar6 + 0x2f8))(pUVar6,pUVar7,0);
  pUVar6 = GetTransientPackageAsObject();
  pUVar8 = NewObject<UMouseHoverBehavior>(pUVar6);
  plVar10 = &this->_padding_;
  if (this == (UPolyEditInsertEdgeActivity *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  (**(code **)(*(longlong *)pUVar8 + 800))(pUVar8,plVar10);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar6 + 0x2f8))(pUVar6,pUVar8,0);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this_00 = (UInteractiveToolManager *)(**(code **)(*(longlong *)pUVar6 + 0x2d8))(pUVar6);
  this_01 = UInteractiveToolManager::GetContextObjectStore(this_00);
  pUVar9 = UContextObjectStore::FindContext<UPolyEditActivityContext>(this_01);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar9 != (UPolyEditActivityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->ActivityContext).field0_0x0.DebugPtr = pUVar9;
  pUVar2 = (pUVar9->SelectionMechanic).field0_0x0.DebugPtr;
  local_b8[0].ReferenceController = (TReferenceControllerBase<1> *)pUVar2->_padding_;
  local_c0 = (FMeshTopologySelector *)pUVar2->_padding_;
  if (local_b8[0].ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_b8[0].ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_b8[0].ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (&this->TopologySelector != (TSharedPtr<FMeshTopologySelector,1> *)&local_c0) {
    (this->TopologySelector).Object = local_c0;
    local_c0 = (FMeshTopologySelector *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TopologySelector).SharedReferenceCount,local_b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8[0].ReferenceController);
  local_d8._16_8_ = this;
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  AddWeakLambda<UPolyEditInsertEdgeActivity,_UPolyEditInsertEdgeActivity::Setup_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &((this->ActivityContext).field0_0x0.DebugPtr)->OnUndoRedo,
             (UPolyEditInsertEdgeActivity *)local_d8,(<lambda_1> *)this);
  return;
}

// SetupPreview @ 14cd7f370

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPolyEditInsertEdgeActivity::SetupPreview(UPolyEditInsertEdgeActivity *this)

{
  IDynamicMeshOperatorFactory *pIVar1;
  
  pIVar1 = (IDynamicMeshOperatorFactory *)&this->_padding_;
  if (this == (UPolyEditInsertEdgeActivity *)0x0) {
    pIVar1 = (IDynamicMeshOperatorFactory *)0x0;
  }
  UMeshOpPreviewWithBackgroundCompute::ChangeOpFactory
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr,pIVar1);
  TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
  ::
  AddWeakLambda<UPolyEditInsertEdgeActivity,_UPolyEditInsertEdgeActivity::SetupPreview_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
              *)&((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
                 OnOpCompleted,(UPolyEditInsertEdgeActivity *)&stack0x00000010,(<lambda_1> *)this);
  TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
  ::
  AddWeakLambda<UPolyEditInsertEdgeActivity,_UPolyEditInsertEdgeActivity::SetupPreview_::__l2::<lambda_2>_>
            ((TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
              *)&((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
                 OnMeshUpdated,(UPolyEditInsertEdgeActivity *)&stack0x00000010,(<lambda_2> *)this);
  return;
}

// Shutdown @ 14cd7f780

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
UPolyEditInsertEdgeActivity::Shutdown(UPolyEditInsertEdgeActivity *this,EToolShutdownType param_1)

{
  UGroupEdgeInsertionProperties *pUVar1;
  code *pcVar2;
  UObject *pUVar3;
  undefined7 in_register_00000011;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  FString local_18;
  
  if (this->bIsRunning != false) {
    (**(code **)(this->_padding_ + 0x310))(this,CONCAT71(in_register_00000011,param_1));
  }
  pUVar1 = (this->Settings).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_18,L"");
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar2)(pUVar1,pUVar3,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((this->Settings).field0_0x0.DebugPtr)->_padding_);
  local_28 = 0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->TopologySelector != (TSharedPtr<FMeshTopologySelector,1> *)&local_28) {
    (this->TopologySelector).Object = (FMeshTopologySelector *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TopologySelector).SharedReferenceCount,&FStack_20);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  (this->Settings).field0_0x0.DebugPtr = (UGroupEdgeInsertionProperties *)0x0;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((this->ActivityContext).field0_0x0.DebugPtr)->OnUndoRedo,this);
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  UInteractionMechanic::Shutdown((UInteractionMechanic *)this);
  return;
}

// Start @ 14cd80a90

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

EToolActivityStartResult __thiscall
UPolyEditInsertEdgeActivity::Start(UPolyEditInsertEdgeActivity *this)

{
  code *pcVar1;
  UMeshTopologySelectionMechanic *this_00;
  UPolyEditActivityContext *pUVar2;
  double dVar3;
  UObject *pUVar4;
  longlong *plVar5;
  FText *pFVar6;
  longlong lVar7;
  TUniquePtr<FToolCommandChange,TDefaultDelete<FToolCommandChange>_> TVar8;
  TTransform<double> *pTVar9;
  undefined8 uVar10;
  longlong *plVar11;
  IDynamicMeshOperatorFactory *pIVar12;
  undefined1 auStack_b8 [32];
  UPolyEditInsertEdgeActivity *local_98;
  undefined1 local_90 [120];
  double local_18;
  
  local_18 = (double)(__security_cookie.value ^ (ulonglong)auStack_b8);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  plVar5 = (longlong *)(**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
  pcVar1 = *(code **)(*plVar5 + 0x360);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_90,L"UPolyEditInsertEdgeActivity",
                      L"InsertEdgeActivityDescription",
                      L"Click two points on the boundary of a face to insert a new edge between the points and split the face."
                     );
  (*pcVar1)(plVar5,pFVar6,2);
  if ((ITextData *)local_90._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_90._0_8_ + 0x10))();
  }
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->Settings).field0_0x0.DebugPtr,1);
  this_00 = *(UMeshTopologySelectionMechanic **)
             ((longlong)(this->ActivityContext).field0_0x0 + 0x70);
  if (((*(int *)&(this_00->PersistentSelection).SelectedCornerIDs.Elements.field_0x8 !=
        *(int *)&(this_00->PersistentSelection).SelectedCornerIDs.Elements.field_0x34) ||
      (*(int *)&(this_00->PersistentSelection).SelectedEdgeIDs.Elements.field_0x8 !=
       *(int *)&(this_00->PersistentSelection).SelectedEdgeIDs.Elements.field_0x34)) ||
     (*(int *)&(this_00->PersistentSelection).SelectedGroupIDs.Elements.field_0x8 !=
      *(int *)&(this_00->PersistentSelection).SelectedGroupIDs.Elements.field_0x34)) {
    UMeshTopologySelectionMechanic::BeginChange(this_00);
    UMeshTopologySelectionMechanic::ClearSelection
              ((UMeshTopologySelectionMechanic *)
               (((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.
               DebugPtr);
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    lVar7 = (**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
    pcVar1 = *(code **)(*(longlong *)(lVar7 + 0x28) + 0x20);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_90,L"UPolyEditInsertEdgeActivity",L"ClearSelection",
                        L"Clear Selection");
    TVar8 = UMeshTopologySelectionMechanic::EndChange
                      ((UMeshTopologySelectionMechanic *)
                       (((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0
                       .DebugPtr);
    (*pcVar1)(lVar7 + 0x28,
              (((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.DebugPtr
              ,TVar8.Ptr,pFVar6);
    if ((ITextData *)local_90._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_90._0_8_ + 0x10))();
    }
  }
  pTVar9 = UPreviewMesh::GetTransform
                     ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr
                       )->PreviewMesh).field0_0x0.DebugPtr,(TTransform<double> *)(local_90 + 0x18));
  dVar3 = (pTVar9->Rotation).XY.m128d_f64[1];
  (this->TargetTransform).Rotation.XY.m128d_f64[0] = (pTVar9->Rotation).XY.m128d_f64[0];
  (this->TargetTransform).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar9->Rotation).ZW.m128d_f64[1];
  (this->TargetTransform).Rotation.ZW.m128d_f64[0] = (pTVar9->Rotation).ZW.m128d_f64[0];
  (this->TargetTransform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar9->Translation).XY.m128d_f64[1];
  (this->TargetTransform).Translation.XY.m128d_f64[0] = (pTVar9->Translation).XY.m128d_f64[0];
  (this->TargetTransform).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar9->Translation).ZW.m128d_f64[1];
  (this->TargetTransform).Translation.ZW.m128d_f64[0] = (pTVar9->Translation).ZW.m128d_f64[0];
  (this->TargetTransform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar9->Scale3D).XY.m128d_f64[1];
  (this->TargetTransform).Scale3D.XY.m128d_f64[0] = (pTVar9->Scale3D).XY.m128d_f64[0];
  (this->TargetTransform).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar9->Scale3D).ZW.m128d_f64[1];
  (this->TargetTransform).Scale3D.ZW.m128d_f64[0] = (pTVar9->Scale3D).ZW.m128d_f64[0];
  (this->TargetTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
  UpdateComputeInputs(this);
  pIVar12 = (IDynamicMeshOperatorFactory *)&this->_padding_;
  if (this == (UPolyEditInsertEdgeActivity *)0x0) {
    pIVar12 = (IDynamicMeshOperatorFactory *)0x0;
  }
  UMeshOpPreviewWithBackgroundCompute::ChangeOpFactory
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr,pIVar12);
  local_98 = this;
  TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
  ::
  AddWeakLambda<UPolyEditInsertEdgeActivity,_UPolyEditInsertEdgeActivity::SetupPreview_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
              *)&((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
                 OnOpCompleted,(UPolyEditInsertEdgeActivity *)local_90,(<lambda_1> *)this);
  local_98 = this;
  TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
  ::
  AddWeakLambda<UPolyEditInsertEdgeActivity,_UPolyEditInsertEdgeActivity::SetupPreview_::__l2::<lambda_2>_>
            ((TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
              *)&((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
                 OnMeshUpdated,(UPolyEditInsertEdgeActivity *)local_90,(<lambda_2> *)this);
  this->ToolState = GettingStart;
  this->bLastComputeSucceeded = false;
  pUVar2 = (this->ActivityContext).field0_0x0.DebugPtr;
  this->bIsRunning = true;
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_90,L"UPolyEditInsertEdgeActivity",L"BeginInsertEdgeActivity",
                      L"Begin Insert Edge");
  UE::Core::Private::Function::CheckCallable(*(void **)&pUVar2->EmitActivityStart);
  pcVar1 = *(code **)&pUVar2->EmitActivityStart;
  plVar5 = *(longlong **)&(pUVar2->EmitActivityStart).field_0x28;
  plVar11 = (longlong *)&(pUVar2->EmitActivityStart).field_0x10;
  if (plVar5 != (longlong *)0x0) {
    plVar11 = plVar5;
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar1)(uVar10,pFVar6);
  if ((ITextData *)local_90._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_90._0_8_ + 0x10))();
  }
  return Running;
}

// StaticRegisterNativesUPolyEditInsertEdgeActivity @ 14cd81450

void __cdecl UPolyEditInsertEdgeActivity::StaticRegisterNativesUPolyEditInsertEdgeActivity(void)

{
  return;
}

// Tick @ 14cd816f0

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

void __thiscall UPolyEditInsertEdgeActivity::Tick(UPolyEditInsertEdgeActivity *this,float param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  UPolyEditActivityContext *pUVar4;
  UGroupEdgeInsertionProperties *pUVar5;
  TVector<double>_u_0 *pTVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar11;
  FDynamicMesh3 *this_00;
  FDynamicMesh3 *pFVar12;
  FGroupTopology *pFVar13;
  FGroupTopology *this_01;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar14;
  FText *pFVar15;
  UObject *pUVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 auStackY_2a8 [32];
  undefined8 *local_258;
  TVector<double>_u_0 local_250;
  FText local_230;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_220;
  FDynamicMeshChangeTracker local_1c8;
  FGroupTopologySelection local_118;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  if ((this->ToolState == WaitingForInsertComplete) &&
     (pUVar4 = (this->ActivityContext).field0_0x0.DebugPtr,
     ((pUVar4->Preview).field0_0x0.DebugPtr)->bResultValid != false)) {
    if (this->bLastComputeSucceeded == false) {
      this->ToolState = (uint)(0 < (this->PreviewPoints).ArrayNum);
    }
    else {
      UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker
                (&local_1c8,(pUVar4->CurrentMesh).Object);
      UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_1c8);
      pTVar11 = TSharedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,1>::
                operator*<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                          (&this->LatestOpChangedTids);
      puVar19 = (undefined8 *)0x0;
      local_220.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_220.Elements._48_8_ = _UNK_150631d98;
      local_220.Elements._0_8_ = 0;
      local_220.Elements._8_8_ = 0;
      local_220.Elements._32_8_ = 0;
      local_220.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_220.HashSize = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=(&local_220,pTVar11);
      UE::Geometry::FDynamicMeshChangeTracker::
      SaveTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                (&local_1c8,&local_220,true);
      this_00 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->
                          (&((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh);
      pFVar12 = UPreviewMesh::GetMesh
                          ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.
                            DebugPtr)->PreviewMesh).field0_0x0.DebugPtr);
      UE::Geometry::FDynamicMesh3::Copy(this_00,pFVar12,true,true,true,true);
      pFVar13 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator*<UE::Geometry::FGroupTopology>
                          (&this->LatestOpTopologyResult);
      this_01 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator*<UE::Geometry::FGroupTopology>
                          (&((this->ActivityContext).field0_0x0.DebugPtr)->CurrentTopology);
      UE::Geometry::FGroupTopology::operator=(this_01,pFVar13);
      pFVar13 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator->
                          (&((this->ActivityContext).field0_0x0.DebugPtr)->CurrentTopology);
      UE::Geometry::FGroupTopology::RetargetOnClonedMesh
                (pFVar13,(((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh).Object);
      UpdateComputeInputs(this);
      UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_118);
      pUVar4 = (this->ActivityContext).field0_0x0.DebugPtr;
      TVar14 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_1c8);
      pFVar15 = FText::AsLocalizable_Advanced_LocText
                          (&local_230,L"UPolyEditInsertEdgeActivity",L"EdgeInsertionTransactionName"
                           ,L"Edge Insertion");
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(FText_const_&,TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>,UE::Geometry::FGroupTopologySelection_const_&)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(FText_const_&,TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>,UE::Geometry::FGroupTopologySelection_const_&)>
                    *)&pUVar4->EmitCurrentMeshChangeAndUpdate,pFVar15,TVar14,&local_118);
      if (local_230.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_230.TextData.Reference + 0x10))();
      }
      pUVar5 = (this->Settings).field0_0x0.DebugPtr;
      this->ToolState = GettingStart;
      if ((pUVar5->bContinuousInsertion != false) &&
         (bVar9 = GetHoveredItem(this,&this->LastEndPointWorldRay,&this->StartPoint,
                                 &this->StartTopologyID,&this->bStartIsCorner,
                                 (TVector<double> *)&local_250._s_0,(TRay<double> *)0x0), bVar9)) {
        pTVar2 = &this->PreviewPoints;
        piVar1 = &(this->PreviewPoints).ArrayMax;
        (this->PreviewPoints).ArrayNum = 0;
        if ((this->PreviewPoints).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,&pTVar2->AllocatorInstance,0,piVar1);
        }
        pTVar6 = (TVector<double>_u_0 *)(pTVar2->AllocatorInstance).Data;
        if (((pTVar6 <= &local_250) && (&local_250 < pTVar6 + *piVar1)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        iVar10 = (this->PreviewPoints).ArrayNum;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->PreviewPoints).ArrayNum = iVar10 + 1;
        pFVar7 = (pTVar2->AllocatorInstance).Data;
        pFVar3 = pFVar7 + (longlong)iVar10 * 0x18;
        *(double *)pFVar3 = local_250._s_0.X;
        *(double *)(pFVar3 + 8) = local_250._s_0.Y;
        *(double *)(pFVar7 + (longlong)iVar10 * 0x18 + 0x10) = local_250._s_0.Z;
        this->ToolState = GettingEnd;
        pUVar16 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        lVar17 = (**(code **)(*(longlong *)pUVar16 + 0x2d8))(pUVar16);
        pcVar8 = *(code **)(*(longlong *)(lVar17 + 0x28) + 0x20);
        puVar18 = ::operator_new(0x10);
        if (puVar18 != (undefined8 *)0x0) {
          iVar10 = this->CurrentChangeStamp;
          *puVar18 = &___7FGroupEdgeInsertionFirstPointChange__6B_;
          *(int *)(puVar18 + 1) = iVar10;
          *(undefined1 *)((longlong)puVar18 + 0xc) = 0;
          puVar19 = puVar18;
        }
        local_258 = puVar19;
        (*pcVar8)(lVar17 + 0x28,this,&local_258,
                  &PolyEditInsertEdgeActivityLocals::GroupEdgeStartTransactionName);
      }
      UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&local_118);
      UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_1c8);
    }
    (this->PreviewEdges).ArrayNum = 0;
    if ((this->PreviewEdges).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->PreviewEdges).AllocatorInstance,0,&(this->PreviewEdges).ArrayMax);
    }
  }
  return;
}

// TopologyHitTest @ 14cd81f30

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

bool __thiscall
UPolyEditInsertEdgeActivity::TopologyHitTest
          (UPolyEditInsertEdgeActivity *this,TRay<double> *param_1,TVector<double> *param_2,
          TRay<double> *param_3)

{
  code *pcVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  bool bVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar16;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
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
  double dVar31;
  double dVar38;
  undefined4 uVar40;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar39;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  undefined4 uVar52;
  double dVar53;
  undefined1 auVar54 [16];
  double dVar57;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
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
  undefined1 auStackY_2a8 [32];
  TVector<double>_u_0 local_248;
  TVector<double>_u_0 local_230;
  TVector<double>_u_0 TStack_218;
  TVector<double>_u_0 local_1f8;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  FGroupTopologySelection local_1b8;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  auVar9 = *(undefined1 (*) [16])&(param_1->Direction).field0_0x0;
  dVar17 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar31 = (this->TargetTransform).Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar38 = (this->TargetTransform).Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar41._0_8_ =
       (this->TargetTransform).Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar41._8_8_ =
       (this->TargetTransform).Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar22._8_4_ = SUB84(dVar38,0);
  auVar22._0_8_ = dVar31;
  uVar40 = (undefined4)((ulonglong)dVar38 >> 0x20);
  auVar22._12_4_ = uVar40;
  auVar24._8_4_ = SUB84(dVar38,0);
  auVar24._0_8_ = dVar31;
  auVar24._12_4_ = uVar40;
  dVar16 = auVar9._8_8_;
  auVar25 = blendpd(auVar24,auVar41,2);
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar17;
  auVar18 = blendpd(auVar9,auVar18,2);
  auVar68._0_8_ = dVar16 * dVar31 - auVar9._0_8_ * auVar22._8_8_;
  auVar68._8_8_ = dVar17 * dVar38 - dVar16 * auVar41._0_8_;
  auVar54._8_4_ = SUB84(auVar68._8_8_,0);
  auVar54._0_8_ = auVar68._0_8_;
  auVar54._12_4_ = (int)((ulonglong)auVar68._8_8_ >> 0x20);
  auVar19._0_8_ = auVar18._0_8_ * auVar41._0_8_ - dVar17 * auVar25._0_8_;
  auVar19._8_8_ = auVar18._8_8_ * auVar41._8_8_ - auVar25._8_8_ * 0.0;
  dVar53 = auVar54._8_8_ + auVar54._8_8_;
  dVar57 = auVar19._0_8_ + auVar19._0_8_;
  auVar69 = blendpd(auVar68,auVar19,2);
  uVar40 = SUB84(dVar57,0);
  auVar58._8_4_ = uVar40;
  auVar58._0_8_ = dVar53;
  uVar52 = (undefined4)((ulonglong)dVar57 >> 0x20);
  auVar58._12_4_ = uVar52;
  auVar48._8_4_ = uVar40;
  auVar48._0_8_ = dVar53;
  auVar48._12_4_ = uVar52;
  auVar47._8_4_ = uVar40;
  auVar47._0_8_ = dVar53;
  auVar47._12_4_ = uVar52;
  auVar18 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.XY.m128d_f64;
  auVar70._0_8_ = auVar69._0_8_ + auVar69._0_8_;
  auVar70._8_8_ = auVar69._8_8_ + auVar69._8_8_;
  auVar2._4_8_ = dVar38;
  auVar2._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar32._0_8_ = auVar2._0_8_ << 0x20;
  auVar32._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar32._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar59._0_8_ = auVar58._8_8_ * dVar31 - dVar53 * auVar22._8_8_;
  auVar59._8_8_ = auVar70._0_8_ * dVar38 - auVar48._8_8_ * auVar41._0_8_;
  auVar48 = blendpd(auVar47,auVar70,2);
  auVar69._8_4_ = SUB84(auVar70._8_8_,0);
  auVar69._0_8_ = auVar70._0_8_;
  auVar69._12_4_ = (int)((ulonglong)auVar70._8_8_ >> 0x20);
  auVar49._0_8_ = auVar48._0_8_ * auVar41._0_8_ - auVar70._0_8_ * auVar25._0_8_;
  auVar49._8_8_ = auVar48._8_8_ * auVar41._8_8_ - auVar69._8_8_ * auVar25._8_8_;
  auVar48 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.ZW.m128d_f64;
  auVar33._8_8_ = auVar32._8_8_;
  auVar33._0_8_ = auVar48._0_8_;
  auVar72._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar18._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar18._0_4_);
  auVar72._8_4_ = _UNK_15061cc88 & auVar18._8_4_;
  auVar72._12_4_ = _UNK_15061cc8c & auVar18._12_4_;
  auVar18 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar18);
  lVar6 = -(ulonglong)(auVar72._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar7 = -(ulonglong)(auVar72._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar73._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar6 >> 0x20) & auVar18._4_4_,
                        ~(uint)lVar6 & auVar18._0_4_);
  auVar73._8_4_ = ~(uint)lVar7 & auVar18._8_4_;
  auVar73._12_4_ = ~(uint)((ulonglong)lVar7 >> 0x20) & auVar18._12_4_;
  local_1f8._s_0.X = 0.0;
  local_1f8._s_0.Y = 0.0;
  auVar25._8_4_ = SUB84(auVar59._8_8_,0);
  auVar25._0_8_ = auVar59._0_8_;
  auVar25._12_4_ = (int)((ulonglong)auVar59._8_8_ >> 0x20);
  lVar6 = -(ulonglong)
           ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar48._4_4_,
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar48._0_4_) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  local_248._s_0.X = auVar73._0_8_ * (dVar53 * auVar41._8_8_ + auVar9._0_8_ + auVar25._8_8_);
  local_248._s_0.Y = auVar73._8_8_ * (dVar57 * auVar41._8_8_ + dVar16 + auVar49._0_8_);
  auVar9 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar33);
  dVar57 = (this->TargetTransform).Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar39 = (this->TargetTransform).Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar42._0_8_ =
       (this->TargetTransform).Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar42._8_8_ =
       (this->TargetTransform).Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar26._8_4_ = SUB84(dVar39,0);
  auVar26._0_8_ = dVar57;
  uVar40 = (undefined4)((ulonglong)dVar39 >> 0x20);
  auVar26._12_4_ = uVar40;
  dVar38 = (param_1->Origin).field0_0x0._s_0.Z - (this->TargetTransform).Translation.ZW.m128d_f64[0]
  ;
  auVar18 = blendpd(auVar59,auVar49,2);
  auVar48 = blendpd(auVar26,auVar42,2);
  dVar16 = (param_1->Origin).field0_0x0._s_0.X - (this->TargetTransform).Translation.XY.m128d_f64[0]
  ;
  dVar31 = (param_1->Origin).field0_0x0._s_0.Y - (this->TargetTransform).Translation.XY.m128d_f64[1]
  ;
  uVar52 = (undefined4)((ulonglong)dVar31 >> 0x20);
  auVar64._8_4_ = SUB84(dVar31,0);
  auVar64._0_8_ = dVar16;
  auVar64._12_4_ = uVar52;
  auVar71._8_8_ = 0;
  auVar71._0_8_ = dVar38;
  auVar60._8_4_ = SUB84(auVar42._8_8_,0);
  auVar60._0_8_ = auVar42._0_8_;
  auVar60._12_4_ = (int)((ulonglong)auVar42._8_8_ >> 0x20);
  TStack_218._s_0.Z =
       (dVar17 + auVar70._0_8_ * auVar41._8_8_ + auVar18._0_8_) *
       (double)CONCAT44(~(uint)((ulonglong)lVar6 >> 0x20) & auVar9._4_4_,~(uint)lVar6 & auVar9._0_4_
                       );
  auVar23._8_4_ = SUB84(dVar39,0);
  auVar23._0_8_ = dVar57;
  auVar23._12_4_ = uVar40;
  dVar17 = auVar23._8_8_;
  auVar20._8_4_ = SUB84(dVar31,0);
  auVar20._0_8_ = dVar16;
  auVar20._12_4_ = uVar52;
  auVar9._8_4_ = SUB84(auVar42._0_8_,0);
  auVar9._0_8_ = dVar17;
  auVar9._12_4_ = (int)((ulonglong)auVar42._0_8_ >> 0x20);
  auVar18 = blendpd(auVar20,auVar71,2);
  auVar65._0_8_ = auVar64._8_8_ * dVar57 - dVar17 * dVar16;
  auVar65._8_8_ = dVar38 * dVar39 - auVar9._8_8_ * dVar31;
  auVar50._8_4_ = SUB84(auVar65._8_8_,0);
  auVar50._0_8_ = auVar65._0_8_;
  auVar50._12_4_ = (int)((ulonglong)auVar65._8_8_ >> 0x20);
  dVar53 = auVar48._8_8_;
  auVar21._0_8_ = auVar18._0_8_ * auVar42._0_8_ - dVar38 * auVar48._0_8_;
  auVar21._8_8_ = auVar18._8_8_ * auVar42._8_8_ - dVar53 * 0.0;
  dVar46 = auVar50._8_8_ + auVar50._8_8_;
  dVar51 = auVar21._0_8_ + auVar21._0_8_;
  auVar18 = blendpd(auVar65,auVar21,2);
  auVar9 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.XY.m128d_f64;
  uVar40 = SUB84(dVar51,0);
  auVar55._8_4_ = uVar40;
  auVar55._0_8_ = dVar46;
  uVar52 = (undefined4)((ulonglong)dVar51 >> 0x20);
  auVar55._12_4_ = uVar52;
  auVar66._0_8_ = auVar18._0_8_ + auVar18._0_8_;
  auVar66._8_8_ = auVar18._8_8_ + auVar18._8_8_;
  auVar10._8_4_ = uVar40;
  auVar10._0_8_ = dVar46;
  auVar10._12_4_ = uVar52;
  auVar34._8_4_ = uVar40;
  auVar34._0_8_ = dVar46;
  auVar34._12_4_ = uVar52;
  auVar56._0_8_ = auVar55._8_8_ * dVar57 - dVar46 * dVar17;
  auVar56._8_8_ = auVar66._0_8_ * dVar39 - auVar10._8_8_ * auVar42._0_8_;
  auVar18 = blendpd(auVar34,auVar66,2);
  auVar11._8_4_ = SUB84(auVar66._8_8_,0);
  auVar11._0_8_ = auVar66._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar66._8_8_ >> 0x20);
  auVar3._4_8_ = dVar53;
  auVar3._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar27._0_8_ = auVar3._0_8_ << 0x20;
  auVar27._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar27._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar35._0_8_ = auVar18._0_8_ * auVar42._0_8_ - auVar66._0_8_ * auVar48._0_8_;
  auVar35._8_8_ = auVar18._8_8_ * auVar42._8_8_ - auVar11._8_8_ * dVar53;
  auVar18 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.ZW.m128d_f64;
  auVar43._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar9._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar9._0_4_);
  auVar43._8_4_ = _UNK_15061cc88 & auVar9._8_4_;
  auVar43._12_4_ = _UNK_15061cc8c & auVar9._12_4_;
  lVar6 = -(ulonglong)(auVar43._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar8 = -(ulonglong)(auVar43._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar28._8_8_ = auVar27._8_8_;
  auVar28._0_8_ = auVar18._0_8_;
  auVar12._8_4_ = SUB84(auVar56._8_8_,0);
  auVar12._0_8_ = auVar56._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
  auVar9 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar9);
  auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar28);
  lVar7 = -(ulonglong)
           ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar18._4_4_,
                             (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar18._0_4_) <=
           (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar44._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar6 >> 0x20) & auVar9._4_4_,~(uint)lVar6 & auVar9._0_4_
                       );
  auVar44._8_4_ = ~(uint)lVar8 & auVar9._8_4_;
  auVar44._12_4_ = ~(uint)((ulonglong)lVar8 >> 0x20) & auVar9._12_4_;
  local_230._s_0.X = auVar44._0_8_ * (dVar46 * auVar60._8_8_ + dVar16 + auVar12._8_8_);
  local_230._s_0.Y = auVar44._8_8_ * (dVar51 * auVar42._8_8_ + dVar31 + auVar35._0_8_);
  auVar9 = blendpd(auVar56,auVar35,2);
  local_230._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar7 >> 0x20) & auVar48._4_4_,
                        ~(uint)lVar7 & auVar48._0_4_) *
       (auVar66._0_8_ * auVar60._8_8_ + dVar38 + auVar9._0_8_);
  TStack_218._s_0.X = local_248._s_0.X;
  TStack_218._s_0.Y = local_248._s_0.Y;
  local_1d8 = local_248._s_0.X;
  dStack_1d0 = local_248._s_0.Y;
  local_1c8 = TStack_218._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&TStack_218._s_0,__real_3e45798ee0000000);
  if (param_3 != (TRay<double> *)0x0) {
    (param_3->Origin).field0_0x0._s_0.X = local_230._s_0.X;
    (param_3->Origin).field0_0x0._s_0.Y = local_230._s_0.Y;
    (param_3->Origin).field0_0x0._s_0.Z = local_230._s_0.Z;
    (param_3->Direction).field0_0x0._s_0.X = TStack_218._s_0.X;
    (param_3->Direction).field0_0x0._s_0.Y = TStack_218._s_0.Y;
    (param_3->Direction).field0_0x0._s_0.Z = TStack_218._s_0.Z;
  }
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_1b8);
  (this->TopologySelectorSettings).bHitBackFaces =
       *(bool *)(((((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.
                 DebugPtr)->_padding_ + 0xb5);
  if (((this->TopologySelector).Object == (FMeshTopologySelector *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  bVar4 = FMeshTopologySelector::FindSelectedElement
                    ((this->TopologySelector).Object,&this->TopologySelectorSettings,
                     (TRay<double> *)&local_230._s_0,&local_1b8,(TVector<double> *)&local_248._s_0,
                     (TVector<double> *)&local_1f8._s_0,(int *)0x0);
  if (bVar4) {
    auVar9 = *(undefined1 (*) [16])(this->TargetTransform).Rotation.ZW.m128d_f64;
    dVar17 = auVar9._0_8_;
    auVar18 = *(undefined1 (*) [16])(this->TargetTransform).Rotation.XY.m128d_f64;
    dVar31 = (this->TargetTransform).Rotation.ZW.m128d_f64[1];
    dVar57 = local_248._s_0.X * (this->TargetTransform).Scale3D.XY.m128d_f64[0];
    dVar39 = local_248._s_0.Y * (this->TargetTransform).Scale3D.XY.m128d_f64[1];
    auVar67._0_8_ = local_248._s_0.Z * (this->TargetTransform).Scale3D.ZW.m128d_f64[0];
    auVar67._8_8_ = (this->TargetTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar48 = blendpd(auVar18,auVar9,2);
    auVar61._8_4_ = SUB84(dVar39,0);
    auVar61._0_8_ = dVar57;
    uVar40 = (undefined4)((ulonglong)dVar39 >> 0x20);
    auVar61._12_4_ = uVar40;
    auVar62._0_8_ = auVar61._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar57;
    auVar62._8_8_ = auVar67._0_8_ * auVar18._8_8_ - dVar17 * dVar39;
    auVar13._8_4_ = SUB84(dVar39,0);
    auVar13._0_8_ = dVar57;
    auVar13._12_4_ = uVar40;
    auVar18 = blendpd(auVar13,auVar67,2);
    auVar45._8_4_ = SUB84(auVar62._8_8_,0);
    auVar45._0_8_ = auVar62._0_8_;
    auVar45._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
    auVar14._0_8_ = auVar18._0_8_ * dVar17 - auVar48._0_8_ * auVar67._0_8_;
    auVar14._8_8_ = auVar18._8_8_ * auVar9._8_8_ - auVar48._8_8_ * auVar67._8_8_;
    auVar18 = *(undefined1 (*) [16])(this->TargetTransform).Rotation.XY.m128d_f64;
    auVar48 = blendpd(auVar62,auVar14,2);
    dVar38 = auVar45._8_8_ + auVar45._8_8_;
    dVar53 = auVar14._0_8_ + auVar14._0_8_;
    auVar63._0_8_ = auVar48._0_8_ + auVar48._0_8_;
    auVar63._8_8_ = auVar48._8_8_ + auVar48._8_8_;
    auVar36._8_4_ = SUB84(dVar53,0);
    auVar36._0_8_ = dVar38;
    uVar40 = (undefined4)((ulonglong)dVar53 >> 0x20);
    auVar36._12_4_ = uVar40;
    auVar29._8_4_ = SUB84(dVar53,0);
    auVar29._0_8_ = dVar38;
    auVar29._12_4_ = uVar40;
    auVar48 = blendpd(auVar29,auVar63,2);
    auVar37._0_8_ = auVar36._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar38;
    auVar37._8_8_ = auVar63._0_8_ * auVar18._8_8_ - dVar17 * dVar53;
    auVar15._8_4_ = SUB84(auVar37._8_8_,0);
    auVar15._0_8_ = auVar37._0_8_;
    auVar15._12_4_ = (int)((ulonglong)auVar37._8_8_ >> 0x20);
    auVar18 = blendpd(auVar18,auVar9,2);
    auVar30._0_8_ = auVar48._0_8_ * dVar17 - auVar18._0_8_ * auVar63._0_8_;
    auVar30._8_8_ = auVar48._8_8_ * auVar9._8_8_ - auVar18._8_8_ * auVar63._8_8_;
    auVar9 = blendpd(auVar37,auVar30,2);
    dVar16 = (this->TargetTransform).Translation.XY.m128d_f64[1];
    dVar17 = (this->TargetTransform).Translation.ZW.m128d_f64[0];
    (param_2->field0_0x0)._s_0.X =
         dVar38 * dVar31 + dVar57 + auVar15._8_8_ +
         (this->TargetTransform).Translation.XY.m128d_f64[0];
    (param_2->field0_0x0)._s_0.Y = dVar53 * dVar31 + dVar39 + auVar30._0_8_ + dVar16;
    (param_2->field0_0x0)._s_0.Z = auVar63._0_8_ * dVar31 + auVar67._0_8_ + auVar9._0_8_ + dVar17;
  }
  UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&local_1b8);
  return bVar4;
}

// UpdateComputeInputs @ 14cd826a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPolyEditInsertEdgeActivity::UpdateComputeInputs(UPolyEditInsertEdgeActivity *this)

{
  TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *pTVar1;
  UPolyEditActivityContext *pUVar2;
  TReferenceControllerBase<1> *pTVar3;
  FGroupTopology *this_00;
  code *pcVar4;
  bool bVar5;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> *pTVar6;
  TSharedRef<UE::Geometry::FGroupTopology,1> *pTVar7;
  FDynamicMesh3 *local_48;
  FSharedReferencer<1> local_40;
  FGroupTopology *local_38;
  FSharedReferencer<1> local_30;
  TSharedRef<UE::Geometry::FDynamicMesh3,1> local_28;
  TSharedRef<UE::Geometry::FGroupTopology,1> local_18;
  
  pUVar2 = (this->ActivityContext).field0_0x0.DebugPtr;
  if ((pUVar2->CurrentMesh).Object == (FDynamicMesh3 *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar6 = MakeShared<UE::Geometry::FDynamicMesh3,1,UE::Geometry::FDynamicMesh3_&>
                     (&local_28,(pUVar2->CurrentMesh).Object);
  local_40.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
  local_48 = pTVar6->Object;
  if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_40.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->ComputeStartMesh;
  if (pTVar1 != (TSharedPtr<UE::Geometry::FDynamicMesh3_const_,1> *)&local_48) {
    pTVar1->Object = local_48;
    local_48 = (FDynamicMesh3 *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ComputeStartMesh).SharedReferenceCount,&local_40);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_40.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  pUVar2 = (this->ActivityContext).field0_0x0.DebugPtr;
  if ((pUVar2->CurrentTopology).Object == (FGroupTopology *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar7 = MakeShared<UE::Geometry::FGroupTopology,1,UE::Geometry::FGroupTopology_&>
                     (&local_18,(pUVar2->CurrentTopology).Object);
  pTVar3 = (pTVar7->SharedReferenceCount).ReferenceController;
  this_00 = pTVar7->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (this_00 == (FGroupTopology *)0x0) {
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
  UE::Geometry::FGroupTopology::RetargetOnClonedMesh(this_00,pTVar1->Object);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = this_00;
  local_30.ReferenceController = pTVar3;
  if (&this->ComputeStartTopology != (TSharedPtr<UE::Geometry::FGroupTopology_const_,1> *)&local_38)
  {
    (this->ComputeStartTopology).Object = this_00;
    local_38 = (FGroupTopology *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->ComputeStartTopology).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

