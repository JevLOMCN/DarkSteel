// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 30

// StaticClass @ 14cd44200

UClass * __cdecl UPolyEditInsertEdgeLoopActivity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditInsertEdgeLoopActivity",
               &Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.InnerSingleton,
               StaticRegisterNativesUPolyEditInsertEdgeLoopActivity,0x430,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditInsertEdgeLoopActivity>,
               InternalVTableHelperCtorCaller<UPolyEditInsertEdgeLoopActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.InnerSingleton;
}

// UPolyEditInsertEdgeLoopActivity @ 14cd50980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPolyEditInsertEdgeLoopActivity * __thiscall
UPolyEditInsertEdgeLoopActivity::UPolyEditInsertEdgeLoopActivity
          (UPolyEditInsertEdgeLoopActivity *this,FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UInteractiveToolActivity::UInteractiveToolActivity((UInteractiveToolActivity *)this,param_1);
  *(undefined ***)this = &_vftable__for__UInteractiveToolActivity__;
  this->bIsRunning = false;
  *(undefined ***)&this->field_0x30 = &_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__IClickBehaviorTarget__;
  (this->Settings).field0_0x0.DebugPtr = (UEdgeLoopInsertionProperties *)0x0;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TargetTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TargetTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->TargetTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TargetTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TargetTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TargetTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->TargetTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TargetTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TargetTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TargetTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->PreviewEdges).ArrayNum = 0;
  (this->PreviewEdges).ArrayMax = 0;
  (this->ProblemTopologyEdges).ArrayNum = 0;
  (this->ProblemTopologyEdges).ArrayMax = 0;
  (this->ProblemTopologyVerts).ArrayNum = 0;
  (this->ProblemTopologyVerts).ArrayMax = 0;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->TopologySelector).Object = (FMeshTopologySelector *)0x0;
  (this->TopologySelector).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PreviewEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProblemTopologyEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProblemTopologyVerts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  FToolDataVisualizer::FToolDataVisualizer(&this->PreviewEdgeRenderer);
  FToolDataVisualizer::FToolDataVisualizer(&this->ProblemTopologyRenderer);
  (this->TopologySelectorSettings).bEnableFaceHits = true;
  (this->TopologySelectorSettings).bEnableEdgeHits = true;
  (this->TopologySelectorSettings).bEnableCornerHits = true;
  (this->TopologySelectorSettings).bHitBackFaces = true;
  (this->TopologySelectorSettings).bPreferProjectedElement = false;
  (this->TopologySelectorSettings).bSelectDownRay = false;
  (this->TopologySelectorSettings).bIgnoreOcclusion = false;
  this->ProblemVertTickWidth = 8.0;
  (this->ComputeStartMesh).Object = (FDynamicMesh3 *)0x0;
  (this->ComputeStartMesh).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ComputeStartTopology).Object = (FGroupTopology *)0x0;
  (this->ComputeStartTopology).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->InputGroupEdgeID = -1;
  this->InteractiveInputLength = 0.0;
  this->bWaitingForInsertionCompletion = false;
  this->bLastComputeSucceeded = false;
  (this->LatestOpTopologyResult).Object = (FGroupTopology *)0x0;
  (this->LatestOpTopologyResult).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LatestOpChangedTids).Object = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  (this->LatestOpChangedTids).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UPolyEditInsertEdgeLoopActivity @ 14cd50b60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UPolyEditInsertEdgeLoopActivity * __thiscall
UPolyEditInsertEdgeLoopActivity::UPolyEditInsertEdgeLoopActivity
          (UPolyEditInsertEdgeLoopActivity *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  UInteractiveToolActivity::UInteractiveToolActivity((UInteractiveToolActivity *)this);
  *(undefined ***)this = &_vftable__for__UInteractiveToolActivity__;
  this->bIsRunning = false;
  *(undefined ***)&this->field_0x30 = &_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__IClickBehaviorTarget__;
  (this->Settings).field0_0x0.DebugPtr = (UEdgeLoopInsertionProperties *)0x0;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TargetTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TargetTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (this->TargetTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TargetTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TargetTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TargetTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (this->TargetTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (this->TargetTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TargetTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TargetTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (this->PreviewEdges).ArrayNum = 0;
  (this->PreviewEdges).ArrayMax = 0;
  (this->ProblemTopologyEdges).ArrayNum = 0;
  (this->ProblemTopologyEdges).ArrayMax = 0;
  (this->ProblemTopologyVerts).ArrayNum = 0;
  (this->ProblemTopologyVerts).ArrayMax = 0;
  (this->CameraState).Position.field0_0x0._s_0.X = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Y = 0.0;
  (this->CameraState).Position.field0_0x0._s_0.Z = 0.0;
  (this->CameraState).Orientation.W = 1.0;
  (this->TopologySelector).Object = (FMeshTopologySelector *)0x0;
  (this->TopologySelector).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->PreviewEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProblemTopologyEdges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProblemTopologyVerts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraState).Orientation.X = 0.0;
  (this->CameraState).Orientation.Y = 0.0;
  (this->CameraState).Orientation.Z = 0.0;
  (this->CameraState).HorizontalFOVDegrees = 90.0;
  (this->CameraState).OrthoWorldCoordinateWidth = 100.0;
  (this->CameraState).AspectRatio = 1.0;
  (this->CameraState).bIsOrthographic = false;
  (this->CameraState).bIsVR = false;
  (this->CameraState).DPIScale = 1.0;
  FToolDataVisualizer::FToolDataVisualizer(&this->PreviewEdgeRenderer);
  FToolDataVisualizer::FToolDataVisualizer(&this->ProblemTopologyRenderer);
  (this->TopologySelectorSettings).bEnableFaceHits = true;
  (this->TopologySelectorSettings).bEnableEdgeHits = true;
  (this->TopologySelectorSettings).bEnableCornerHits = true;
  (this->TopologySelectorSettings).bHitBackFaces = true;
  (this->TopologySelectorSettings).bPreferProjectedElement = false;
  (this->TopologySelectorSettings).bSelectDownRay = false;
  (this->TopologySelectorSettings).bIgnoreOcclusion = false;
  this->ProblemVertTickWidth = 8.0;
  (this->ComputeStartMesh).Object = (FDynamicMesh3 *)0x0;
  (this->ComputeStartMesh).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ComputeStartTopology).Object = (FGroupTopology *)0x0;
  (this->ComputeStartTopology).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->InputGroupEdgeID = -1;
  this->InteractiveInputLength = 0.0;
  this->bWaitingForInsertionCompletion = false;
  this->bLastComputeSucceeded = false;
  (this->LatestOpTopologyResult).Object = (FGroupTopology *)0x0;
  (this->LatestOpTopologyResult).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->LatestOpChangedTids).Object = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)0x0;
  (this->LatestOpChangedTids).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~UPolyEditInsertEdgeLoopActivity @ 14cd53670

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
UPolyEditInsertEdgeLoopActivity::~UPolyEditInsertEdgeLoopActivity
          (UPolyEditInsertEdgeLoopActivity *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UInteractiveToolActivity__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  *(undefined ***)&this->field_0x38 = &_vftable__for__IHoverBehaviorTarget__;
  *(undefined ***)&this->field_0x40 = &_vftable__for__IClickBehaviorTarget__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LatestOpChangedTids).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LatestOpTopologyResult).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComputeStartTopology).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ComputeStartMesh).SharedReferenceCount.ReferenceController);
  FToolDataVisualizer::~FToolDataVisualizer(&this->ProblemTopologyRenderer);
  FToolDataVisualizer::~FToolDataVisualizer(&this->PreviewEdgeRenderer);
  pFVar1 = (this->ProblemTopologyVerts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProblemTopologyEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PreviewEdges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TopologySelector).SharedReferenceCount.ReferenceController);
  *(undefined ***)&this->field_0x40 = &___7IModifierToggleBehaviorTarget__6B_;
  *(undefined ***)&this->field_0x38 = &___7IModifierToggleBehaviorTarget__6B_;
  *(undefined ***)&this->field_0x30 = &___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  *(undefined ***)this = &___7UInteractiveToolActivity__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// operator() @ 14cd54b60

void __thiscall
`UPolyEditInsertEdgeLoopActivity::SetupPreview'::__l2::<lambda_1>::operator()
          (void *this,FDynamicMeshOperator *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  double *pdVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  ForAnyElementType *pFVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  TBitArray<FDefaultBitArrayAllocator> *pTVar22;
  ulonglong uVar23;
  double *pdVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  uint uVar26;
  longlong lVar27;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  uint local_res20;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  int local_158;
  int local_154;
  TBitArray<FDefaultBitArrayAllocator> *local_150;
  double *local_148;
  undefined8 local_140;
  FSharedReferencer<1> FStack_138;
  undefined8 local_130;
  FSharedReferencer<1> FStack_128;
  double *local_120;
  uint uStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  uint uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  double *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  undefined8 local_c0;
  TReferenceControllerBase<1> *pTStack_b8;
  undefined8 local_b0;
  TReferenceControllerBase<1> *pTStack_a8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88 [2];
  undefined4 local_54;
  
  lVar16 = *(longlong *)this;
  puVar15 = (undefined8 *)(lVar16 + 0x408);
  local_140 = 0;
  FStack_138.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar15 != &local_140) {
    *puVar15 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar16 + 0x410),&FStack_138);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_138.ReferenceController);
  lVar16 = *(longlong *)this;
  uVar21 = 0;
  *(undefined4 *)(lVar16 + 0xd8) = 0;
  if (*(int *)(lVar16 + 0xdc) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)(lVar16 + 0xd0),0,(int *)(lVar16 + 0xdc));
  }
  lVar16 = *(longlong *)this;
  puVar15 = (undefined8 *)(lVar16 + 0x418);
  local_130 = 0;
  FStack_128.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (puVar15 != &local_130) {
    *puVar15 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(lVar16 + 0x420),&FStack_128);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_128.ReferenceController);
  lVar16 = *(longlong *)this;
  if (param_1[1]._padding_ != *(longlong *)(lVar16 + 0x3d0)) {
    *(undefined1 *)(lVar16 + 0x401) = 0;
    return;
  }
  *(char *)(lVar16 + 0x401) = (char)param_1[3]._padding_;
  if (*(char *)(*(longlong *)this + 0x401) != '\0') {
    UE::Geometry::FEdgeLoopInsertionOp::GetLoopEdgeLocations
              ((FEdgeLoopInsertionOp *)param_1,
               (TArray<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>
                *)(*(longlong *)this + 0xd0));
    lVar16 = *(longlong *)&param_1[2].ResultInfo.Warnings.ArrayNum;
    lVar27 = *(longlong *)this;
    pFVar2 = param_1[2].ResultInfo.Warnings.AllocatorInstance.Data;
    if (lVar16 != 0) {
      LOCK();
      *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
      UNLOCK();
    }
    local_c0 = *(undefined8 *)(lVar27 + 0x408);
    pTStack_b8 = *(TReferenceControllerBase<1> **)(lVar27 + 0x410);
    *(FScriptContainerElement **)(lVar27 + 0x408) = pFVar2;
    *(longlong *)(lVar27 + 0x410) = lVar16;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_b8);
    dVar3 = param_1[2].ResultTransform.Rotation.field0_0x0._s_0.Z;
    lVar16 = *(longlong *)this;
    dVar4 = param_1[2].ResultTransform.Rotation.field0_0x0._s_0.Y;
    if (dVar3 != 0.0) {
      LOCK();
      *(int *)((longlong)dVar3 + 8) = *(int *)((longlong)dVar3 + 8) + 1;
      UNLOCK();
    }
    local_b0 = *(undefined8 *)(lVar16 + 0x418);
    pTStack_a8 = *(TReferenceControllerBase<1> **)(lVar16 + 0x420);
    *(double *)(lVar16 + 0x418) = dVar4;
    *(double *)(lVar16 + 0x420) = dVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_a8);
  }
  lVar16 = *(longlong *)this;
  *(undefined4 *)(lVar16 + 0xe8) = 0;
  if (*(int *)(lVar16 + 0xec) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)(lVar16 + 0xe0),0,(int *)(lVar16 + 0xec));
  }
  lVar16 = *(longlong *)this;
  *(undefined4 *)(lVar16 + 0xf8) = 0;
  if (*(int *)(lVar16 + 0xfc) < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)(lVar16 + 0xf0),0,(int *)(lVar16 + 0xfc));
  }
  pTVar25 = (TBitArray<FDefaultBitArrayAllocator> *)
            ((longlong)&param_1[2].ResultTransform.Translation.field0_0x0 + 8);
  uVar19 = *(uint *)((longlong)&param_1[2].ResultTransform.Scale3D.field0_0x0 + 8);
  pdVar24 = &param_1[2].ResultTransform.Rotation.field0_0x0._s_0.W;
  uStack_114 = 1;
  local_100 = 0;
  uStack_104 = local_100;
  if (uVar19 != 0) {
    pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)
               &param_1[2].ResultTransform.Scale3D.field0_0x0;
    if (pTVar22 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = pTVar25;
    }
    uVar11 = *(uint *)(pTVar22->AllocatorInstance).InlineData;
    local_100 = 0;
    uVar21 = 0;
    while (uVar11 == 0) {
      lVar16 = (longlong)(int)uVar21;
      local_100 = local_100 + 0x20;
      uVar21 = uVar21 + 1;
      uStack_104 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
      goto LAB_14cd54e0f;
      uVar11 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar16 * 4 + 4);
    }
    uStack_114 = -uVar11 & uVar11;
    uVar23 = (ulonglong)uStack_114 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_158 = (int)lVar16;
    uStack_104 = local_158 + -1 + local_100;
    if ((int)uVar19 < (int)uStack_104) {
      uStack_104 = uVar19;
    }
  }
LAB_14cd54e0f:
  uVar11 = *(uint *)((longlong)&param_1[2].ResultTransform.Scale3D.field0_0x0 + 8);
  uStack_fc = local_54;
  iStack_f8 = *(int *)&param_1[2].ResultTransform.Translation.field0_0x0 -
              *(int *)((longlong)&param_1[2].ResultTransform.Scale3D.field0_0x0 + 0x14);
  uStack_108 = 0xffffffff;
  uVar26 = uVar11 & 0xffffffe0;
  TStack_e8._padding_ = CONCAT44(uStack_114,uVar21);
  iVar17 = (int)uVar11 >> 5;
  TStack_e8._28_4_ = local_54;
  TStack_e8.BaseBitIndex = local_100;
  uStack_c8 = CONCAT44(uStack_f4,iStack_f8);
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  local_res18 = uVar11;
  local_150 = pTVar25;
  local_148 = pdVar24;
  local_120 = pdVar24;
  uStack_118 = uVar21;
  local_110 = pTVar25;
  local_f0 = pdVar24;
  TStack_e8.CurrentBitIndex = uStack_104;
  TStack_e8.Array = pTVar25;
  if (((int)uVar11 < 0) || ((int)uVar19 < (int)uVar11)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar21 = *(uint *)((longlong)&param_1[2].ResultTransform.Scale3D.field0_0x0 + 8);
  if (uVar11 != uVar21) {
    pTVar22 = *(TBitArray<FDefaultBitArrayAllocator> **)
               &param_1[2].ResultTransform.Scale3D.field0_0x0;
    if (pTVar22 == (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar22 = pTVar25;
    }
    uVar19 = -1 << ((byte)uVar11 & 0x1f) &
             *(uint *)((pTVar22->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
    while (uVar19 == 0) {
      lVar16 = (longlong)iVar17;
      uVar26 = uVar26 + 0x20;
      iVar17 = iVar17 + 1;
      uVar11 = uVar21;
      local_res18 = uVar21;
      if ((int)((uVar21 - 1) + ((int)(uVar21 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
      goto LAB_14cd54f30;
      uVar19 = *(uint *)((pTVar22->AllocatorInstance).InlineData + lVar16 * 4 + 4);
    }
    uVar23 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_154 = (int)lVar16;
    uVar11 = local_154 + -1 + uVar26;
    local_res18 = uVar11;
    if ((int)uVar21 < (int)uVar11) {
      uVar11 = uVar21;
      local_res18 = uVar21;
    }
  }
LAB_14cd54f30:
  while( true ) {
    pdVar9 = local_f0;
    if (SUB84(local_f0[1],0) - *(int *)((longlong)local_f0 + 0x34) != (int)uStack_c8) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_e8.CurrentBitIndex == uVar11) && (TStack_e8.Array == pTVar25)) &&
       (pdVar9 == pdVar24)) break;
    uVar21 = *(uint *)((longlong)*pdVar9 + (longlong)TStack_e8.CurrentBitIndex * 0xc);
    lVar16 = *(longlong *)(*(longlong *)this + 0x50);
    local_res20 = uVar21;
    if (*(longlong *)(lVar16 + 0x48) == 0) {
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
    pTVar13 = UE::Geometry::FGroupTopology::GetGroupEdgeEdges
                        (*(FGroupTopology **)(lVar16 + 0x48),uVar21);
    pFVar20 = (pTVar13->AllocatorInstance).Data;
    iVar17 = pTVar13->ArrayNum;
    pFVar2 = pFVar20 + (longlong)iVar17 * 4;
    while( true ) {
      if (pTVar13->ArrayNum != iVar17) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar20 == pFVar2) break;
      uVar21 = *(uint *)pFVar20;
      local_178 = 0;
      uStack_160 = 0;
      local_188 = 0;
      uStack_180 = 0;
      uStack_170 = 0;
      uStack_168 = 0;
      lVar16 = *(longlong *)(*(longlong *)this + 0x50);
      if (*(longlong *)(lVar16 + 0x30) == 0) {
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
      lVar16 = *(longlong *)(lVar16 + 0x30);
      lVar27 = *(longlong *)this;
      pFVar18 = (ForAnyElementType *)(lVar27 + 0xe0);
      uVar23 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(lVar16 + 0x1c0) + (ulonglong)(uVar21 >> 9) * 8) +
                (ulonglong)(uVar21 & 0x1ff) * 0x10);
      uVar14 = (ulonglong)((uint)uVar23 & 0x1ff);
      lVar5 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + ((uVar23 & 0xffffffff) >> 9) * 8);
      puVar15 = (undefined8 *)(lVar5 + uVar14 * 0x18);
      local_188 = *puVar15;
      uStack_180 = puVar15[1];
      local_178 = *(undefined8 *)(lVar5 + 0x10 + uVar14 * 0x18);
      uVar14 = (ulonglong)((uint)(uVar23 >> 0x20) & 0x1ff);
      lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + (uVar23 >> 0x29) * 8);
      puVar15 = (undefined8 *)(lVar16 + uVar14 * 0x18);
      uStack_170 = *puVar15;
      uStack_168 = puVar15[1];
      uStack_160 = *(undefined8 *)(lVar16 + 0x10 + uVar14 * 0x18);
      if ((pFVar18->Data <= (FScriptContainerElement *)&local_188) &&
         ((FScriptContainerElement *)&local_188 <
          pFVar18->Data + (longlong)*(int *)(lVar27 + 0xec) * 0x30)) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      iVar12 = *(int *)(lVar27 + 0xe8);
      if (iVar12 == *(int *)(lVar27 + 0xec)) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,pFVar18,(int *)(lVar27 + 0xec));
      }
      lVar16 = (longlong)iVar12;
      *(int *)(lVar27 + 0xe8) = iVar12 + 1;
      pFVar6 = pFVar18->Data;
      pFVar20 = pFVar20 + 4;
      *(undefined8 *)(pFVar6 + lVar16 * 0x30) = local_188;
      *(undefined8 *)(pFVar6 + lVar16 * 0x30 + 8) = uStack_180;
      pFVar1 = pFVar6 + lVar16 * 0x30 + 0x10;
      *(undefined4 *)pFVar1 = (undefined4)local_178;
      *(undefined4 *)(pFVar1 + 4) = local_178._4_4_;
      *(undefined4 *)(pFVar1 + 8) = (undefined4)uStack_170;
      *(undefined4 *)(pFVar1 + 0xc) = uStack_170._4_4_;
      *(undefined8 *)(pFVar6 + lVar16 * 0x30 + 0x20) = uStack_168;
      *(undefined8 *)(pFVar6 + lVar16 * 0x30 + 0x20 + 8) = uStack_160;
    }
    lVar16 = *(longlong *)(*(longlong *)this + 0x50);
    if (*(longlong *)(lVar16 + 0x48) == 0) {
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
    lVar27 = (longlong)(int)local_res20;
    lVar16 = *(longlong *)(lVar16 + 0x48);
    uVar21 = 0;
    if ((int)local_res20 < *(int *)(lVar16 + 0x68)) {
      uVar21 = ~local_res20 >> 0x1f;
    }
    if (uVar21 == 0) {
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
    lVar16 = lVar27 * 0x50 + *(longlong *)(lVar16 + 0x60);
    if (*(int *)(lVar16 + 0x48) != -1) {
      lVar27 = *(longlong *)this;
      lVar5 = *(longlong *)(lVar27 + 0x50);
      if (*(longlong *)(lVar5 + 0x30) == 0) {
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
      lVar5 = *(longlong *)(lVar5 + 0x30);
      lVar7 = *(longlong *)(*(longlong *)this + 0x50);
      if (*(longlong *)(lVar7 + 0x48) == 0) {
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
      lVar7 = *(longlong *)(lVar7 + 0x48);
      uVar21 = *(uint *)(lVar16 + 0x48);
      uVar19 = 0;
      if ((int)uVar21 < *(int *)(lVar7 + 0x48)) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if (uVar19 == 0) {
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
      uVar21 = *(uint *)(*(longlong *)(lVar7 + 0x40) + (longlong)(int)uVar21 * 0x18);
      uVar23 = (ulonglong)(uVar21 & 0x1ff);
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar21 >> 9) * 8);
      pdVar24 = (double *)(lVar5 + uVar23 * 0x18);
      local_a0._s_0.X = *pdVar24;
      local_a0._s_0.Y = pdVar24[1];
      local_a0._s_0.Z = *(double *)(lVar5 + 0x10 + uVar23 * 0x18);
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<UE::Math::TVector<double>_>
                ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(lVar27 + 0xf0),
                 (TVector<double> *)&local_a0._s_0);
      lVar27 = *(longlong *)this;
      lVar5 = *(longlong *)(lVar27 + 0x50);
      if (*(longlong *)(lVar5 + 0x30) == 0) {
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
      lVar5 = *(longlong *)(lVar5 + 0x30);
      lVar7 = *(longlong *)(*(longlong *)this + 0x50);
      if (*(longlong *)(lVar7 + 0x48) == 0) {
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
      lVar7 = *(longlong *)(lVar7 + 0x48);
      uVar21 = *(uint *)(lVar16 + 0x4c);
      uVar19 = 0;
      if ((int)uVar21 < *(int *)(lVar7 + 0x48)) {
        uVar19 = ~uVar21 >> 0x1f;
      }
      if (uVar19 == 0) {
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
      uVar21 = *(uint *)(*(longlong *)(lVar7 + 0x40) + (longlong)(int)uVar21 * 0x18);
      uVar23 = (ulonglong)(uVar21 & 0x1ff);
      lVar16 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (ulonglong)(uVar21 >> 9) * 8);
      pdVar24 = (double *)(lVar16 + uVar23 * 0x18);
      local_88[0]._0_8_ = *pdVar24;
      local_88[0]._8_8_ = pdVar24[1];
      local_88[0]._16_8_ = *(double *)(lVar16 + 0x10 + uVar23 * 0x18);
      TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<UE::Math::TVector<double>_>
                ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(lVar27 + 0xf0),
                 (TVector<double> *)&local_88[0]._s_0);
    }
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
    pdVar24 = local_148;
    pTVar25 = local_150;
    uVar11 = local_res18;
  }
  return;
}

// BeginHoverSequenceHitTest @ 14cd5f7c0

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
UPolyEditInsertEdgeLoopActivity::BeginHoverSequenceHitTest
          (UPolyEditInsertEdgeLoopActivity *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  if ((*(char *)&this->ProblemVertTickWidth == '\0') && (this->field_0x20 != '\0')) {
    HitTest((UPolyEditInsertEdgeLoopActivity *)&this[-1].InteractiveInputLength,
            __return_storage_ptr__,&param_1->WorldRay);
    return __return_storage_ptr__;
  }
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// CanAccept @ 14cd62fe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPolyEditInsertEdgeLoopActivity::CanAccept(UPolyEditInsertEdgeLoopActivity *this)

{
  return this->bWaitingForInsertionCompletion == false;
}

// CanStart @ 14cd63c60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPolyEditInsertEdgeLoopActivity::CanStart(UPolyEditInsertEdgeLoopActivity *this)

{
  return true;
}

// ClearPreview @ 14cd64aa0

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

void __thiscall UPolyEditInsertEdgeLoopActivity::ClearPreview(UPolyEditInsertEdgeLoopActivity *this)

{
  UPolyEditActivityContext *pUVar1;
  
  UMeshOpPreviewWithBackgroundCompute::CancelCompute
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
  pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
  UPreviewMesh::UpdatePreview
            ((((pUVar1->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (pUVar1->CurrentMesh).Object,FullUpdate,AllVertexAttribs);
  this->InputGroupEdgeID = -1;
  (this->PreviewEdges).ArrayNum = 0;
  if ((this->PreviewEdges).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->PreviewEdges).AllocatorInstance,0,&(this->PreviewEdges).ArrayMax);
  }
  (this->ProblemTopologyEdges).ArrayNum = 0;
  if ((this->ProblemTopologyEdges).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->ProblemTopologyEdges).AllocatorInstance,0,
               &(this->ProblemTopologyEdges).ArrayMax);
  }
  (this->ProblemTopologyVerts).ArrayNum = 0;
  if ((this->ProblemTopologyVerts).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->ProblemTopologyVerts).AllocatorInstance,0,
               &(this->ProblemTopologyVerts).ArrayMax);
  }
  return;
}

// ConditionallyUpdatePreview @ 14cd65910

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
UPolyEditInsertEdgeLoopActivity::ConditionallyUpdatePreview
          (UPolyEditInsertEdgeLoopActivity *this,int param_1,double *param_2)

{
  if (this->InputGroupEdgeID == param_1) {
    if (((param_2 == (double *)0x0) ||
        (((this->Settings).field0_0x0.DebugPtr)->PositionMode == Even)) ||
       (this->InteractiveInputLength == *param_2)) {
      return;
    }
    this->InputGroupEdgeID = param_1;
  }
  else {
    this->InputGroupEdgeID = param_1;
    if (param_2 == (double *)0x0) goto LAB_14cd6595f;
  }
  this->InteractiveInputLength = *param_2;
LAB_14cd6595f:
  (this->PreviewEdges).ArrayNum = 0;
  if ((this->PreviewEdges).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->PreviewEdges).AllocatorInstance,0,&(this->PreviewEdges).ArrayMax);
  }
  UMeshOpPreviewWithBackgroundCompute::InvalidateResult
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
  return;
}

// End @ 14cd68c80

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
UPolyEditInsertEdgeLoopActivity::End
          (UPolyEditInsertEdgeLoopActivity *this,EToolShutdownType param_1)

{
  char cVar1;
  
  if (this->bIsRunning == false) {
    return ErrorDuringEnd;
  }
  (**(code **)(*(longlong *)this + 0x2d8))(this,(this->Settings).field0_0x0.DebugPtr,0);
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
  ClearPreview(this);
  UMeshOpPreviewWithBackgroundCompute::ClearOpFactory
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
  this->bIsRunning = false;
  cVar1 = (**(code **)(*(longlong *)this + 0x308))(this);
  return (EToolActivityEndResult)(cVar1 == '\0');
}

// GetPrivateStaticClass @ 14cd6dfe0

UClass * __cdecl UPolyEditInsertEdgeLoopActivity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditInsertEdgeLoopActivity",
               &Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.InnerSingleton,
               StaticRegisterNativesUPolyEditInsertEdgeLoopActivity,0x430,0x10,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditInsertEdgeLoopActivity>,
               InternalVTableHelperCtorCaller<UPolyEditInsertEdgeLoopActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditInsertEdgeLoopActivity.InnerSingleton;
}

// HitTest @ 14cd6ff00

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

FInputRayHit * __thiscall
UPolyEditInsertEdgeLoopActivity::HitTest
          (UPolyEditInsertEdgeLoopActivity *this,FInputRayHit *__return_storage_ptr__,
          TRay<double> *param_1)

{
  UPolyEditActivityContext *pUVar1;
  FGroupTopology *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FInputRayHit *pFVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar19;
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
  double dVar36;
  undefined4 uVar38;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  undefined4 uVar48;
  double dVar49;
  undefined1 auVar50 [16];
  double dVar53;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar54;
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
  undefined1 auStackY_2f8 [32];
  FWeakObjectPtr local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  double dStack_2a0;
  TVector<double>_u_0 local_298;
  TVector<double>_u_0 local_280;
  TVector<double>_u_0 local_268;
  undefined1 local_250;
  undefined7 uStack_24f;
  undefined4 uStack_22c;
  uint uStack_228;
  undefined4 uStack_224;
  void *local_220;
  FWeakObjectPtr FStack_218;
  double local_210;
  double dStack_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  TVector<double> local_1d0;
  FGroupTopologySelection local_1b8;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  auVar13 = *(undefined1 (*) [16])&(param_1->Direction).field0_0x0;
  dVar18 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar31 = (this->TargetTransform).Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar36 = (this->TargetTransform).Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar39._0_8_ =
       (this->TargetTransform).Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar39._8_8_ =
       (this->TargetTransform).Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar24._8_4_ = SUB84(dVar36,0);
  auVar24._0_8_ = dVar31;
  uVar38 = (undefined4)((ulonglong)dVar36 >> 0x20);
  auVar24._12_4_ = uVar38;
  auVar26._8_4_ = SUB84(dVar36,0);
  auVar26._0_8_ = dVar31;
  auVar26._12_4_ = uVar38;
  auVar27 = blendpd(auVar26,auVar39,2);
  dVar54 = auVar24._8_8_;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = dVar18;
  auVar20 = blendpd(auVar13,auVar20,2);
  dVar37 = auVar13._8_8_;
  auVar63._8_4_ = SUB84(auVar39._0_8_,0);
  auVar63._0_8_ = dVar54;
  auVar63._12_4_ = (int)((ulonglong)auVar39._0_8_ >> 0x20);
  auVar62._0_8_ = dVar37 * dVar31 - dVar54 * auVar13._0_8_;
  auVar62._8_8_ = dVar18 * dVar36 - auVar63._8_8_ * dVar37;
  auVar50._8_4_ = SUB84(auVar62._8_8_,0);
  auVar50._0_8_ = auVar62._0_8_;
  auVar50._12_4_ = (int)((ulonglong)auVar62._8_8_ >> 0x20);
  auVar21._0_8_ = auVar20._0_8_ * auVar39._0_8_ - auVar27._0_8_ * dVar18;
  auVar21._8_8_ = auVar20._8_8_ * auVar39._8_8_ - auVar27._8_8_ * 0.0;
  dVar49 = auVar50._8_8_ + auVar50._8_8_;
  dVar53 = auVar21._0_8_ + auVar21._0_8_;
  auVar63 = blendpd(auVar62,auVar21,2);
  uVar38 = SUB84(dVar53,0);
  auVar55._8_4_ = uVar38;
  auVar55._0_8_ = dVar49;
  uVar48 = (undefined4)((ulonglong)dVar53 >> 0x20);
  auVar55._12_4_ = uVar48;
  auVar57._8_4_ = uVar38;
  auVar57._0_8_ = dVar49;
  auVar57._12_4_ = uVar48;
  auVar44._8_4_ = uVar38;
  auVar44._0_8_ = dVar49;
  auVar44._12_4_ = uVar48;
  auVar20 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.XY.m128d_f64;
  auVar64._0_8_ = auVar63._0_8_ + auVar63._0_8_;
  auVar64._8_8_ = auVar63._8_8_ + auVar63._8_8_;
  auVar4._4_8_ = dVar36;
  auVar4._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar32._0_8_ = auVar4._0_8_ << 0x20;
  auVar32._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar32._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar56._0_8_ = auVar55._8_8_ * dVar31 - dVar49 * dVar54;
  auVar56._8_8_ = auVar64._0_8_ * dVar36 - auVar57._8_8_ * auVar39._0_8_;
  auVar63 = blendpd(auVar44,auVar64,2);
  local_2a8 = (double)GlobalVectorConstants::SmallNumber.m128_f32[0];
  dStack_2a0 = (double)GlobalVectorConstants::SmallNumber.m128_f32[1];
  auVar12._8_4_ = SUB84(auVar64._8_8_,0);
  auVar12._0_8_ = auVar64._0_8_;
  auVar12._12_4_ = (int)((ulonglong)auVar64._8_8_ >> 0x20);
  auVar45._0_8_ = auVar63._0_8_ * auVar39._0_8_ - auVar64._0_8_ * auVar27._0_8_;
  auVar45._8_8_ = auVar63._8_8_ * auVar39._8_8_ - auVar12._8_8_ * auVar27._8_8_;
  auVar63 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.ZW.m128d_f64;
  auVar66._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar20._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar20._0_4_);
  auVar66._8_4_ = _UNK_15061cc88 & auVar20._8_4_;
  auVar66._12_4_ = _UNK_15061cc8c & auVar20._12_4_;
  auVar33._8_8_ = auVar32._8_8_;
  auVar33._0_8_ = auVar63._0_8_;
  auVar20 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar20);
  lVar11 = -(ulonglong)(auVar66._8_8_ <= dStack_2a0);
  auVar67._0_8_ =
       (double)CONCAT44(~(uint)(-(ulonglong)(auVar66._0_8_ <= local_2a8) >> 0x20) & auVar20._4_4_,
                        ~(uint)-(ulonglong)(auVar66._0_8_ <= local_2a8) & auVar20._0_4_);
  auVar67._8_4_ = ~(uint)lVar11 & auVar20._8_4_;
  auVar67._12_4_ = ~(uint)((ulonglong)lVar11 >> 0x20) & auVar20._12_4_;
  local_2b8.ObjectIndex = 0;
  local_2b8.ObjectSerialNumber = 0;
  uStack_2b0 = 0;
  auVar27._8_4_ = SUB84(auVar56._8_8_,0);
  auVar27._0_8_ = auVar56._0_8_;
  auVar27._12_4_ = (int)((ulonglong)auVar56._8_8_ >> 0x20);
  lVar11 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar63._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar63._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  local_280._s_0.X = auVar67._0_8_ * (dVar49 * auVar39._8_8_ + auVar13._0_8_ + auVar27._8_8_);
  local_280._s_0.Y = auVar67._8_8_ * (dVar53 * auVar39._8_8_ + dVar37 + auVar45._0_8_);
  auVar13 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar33);
  dVar53 = (this->TargetTransform).Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar37 = (this->TargetTransform).Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar40._0_8_ =
       (this->TargetTransform).Rotation.ZW.m128d_f64[0] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  auVar40._8_8_ =
       (this->TargetTransform).Rotation.ZW.m128d_f64[1] *
       GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  dVar36 = (param_1->Origin).field0_0x0._s_0.Z - (this->TargetTransform).Translation.ZW.m128d_f64[0]
  ;
  auVar57 = blendpd(auVar56,auVar45,2);
  auVar28._8_4_ = SUB84(dVar37,0);
  auVar28._0_8_ = dVar53;
  uVar38 = (undefined4)((ulonglong)dVar37 >> 0x20);
  auVar28._12_4_ = uVar38;
  dVar54 = (param_1->Origin).field0_0x0._s_0.X - (this->TargetTransform).Translation.XY.m128d_f64[0]
  ;
  dVar31 = (param_1->Origin).field0_0x0._s_0.Y - (this->TargetTransform).Translation.XY.m128d_f64[1]
  ;
  uVar48 = (undefined4)((ulonglong)dVar31 >> 0x20);
  auVar63 = blendpd(auVar28,auVar40,2);
  auVar59._8_4_ = SUB84(dVar31,0);
  auVar59._0_8_ = dVar54;
  auVar59._12_4_ = uVar48;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = dVar36;
  auVar22._8_4_ = SUB84(dVar31,0);
  auVar22._0_8_ = dVar54;
  auVar22._12_4_ = uVar48;
  auVar20 = blendpd(auVar22,auVar65,2);
  auVar58._8_4_ = SUB84(auVar40._8_8_,0);
  auVar58._0_8_ = auVar40._0_8_;
  auVar58._12_4_ = (int)((ulonglong)auVar40._8_8_ >> 0x20);
  local_280._s_0.Z =
       (dVar18 + auVar64._0_8_ * auVar39._8_8_ + auVar57._0_8_) *
       (double)CONCAT44(~(uint)((ulonglong)lVar11 >> 0x20) & auVar13._4_4_,
                        ~(uint)lVar11 & auVar13._0_4_);
  auVar25._8_4_ = SUB84(dVar37,0);
  auVar25._0_8_ = dVar53;
  auVar25._12_4_ = uVar38;
  dVar49 = auVar25._8_8_;
  auVar13._8_4_ = SUB84(auVar40._0_8_,0);
  auVar13._0_8_ = dVar49;
  auVar13._12_4_ = (int)((ulonglong)auVar40._0_8_ >> 0x20);
  auVar60._0_8_ = auVar59._8_8_ * dVar53 - dVar49 * dVar54;
  auVar60._8_8_ = dVar36 * dVar37 - auVar13._8_8_ * dVar31;
  dVar18 = auVar63._8_8_;
  auVar46._8_4_ = SUB84(auVar60._8_8_,0);
  auVar46._0_8_ = auVar60._0_8_;
  auVar46._12_4_ = (int)((ulonglong)auVar60._8_8_ >> 0x20);
  auVar23._0_8_ = auVar20._0_8_ * auVar40._0_8_ - auVar63._0_8_ * dVar36;
  auVar23._8_8_ = auVar20._8_8_ * auVar40._8_8_ - dVar18 * 0.0;
  dVar43 = auVar46._8_8_ + auVar46._8_8_;
  dVar47 = auVar23._0_8_ + auVar23._0_8_;
  auVar20 = blendpd(auVar60,auVar23,2);
  auVar13 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.XY.m128d_f64;
  uVar38 = SUB84(dVar47,0);
  auVar51._8_4_ = uVar38;
  auVar51._0_8_ = dVar43;
  uVar48 = (undefined4)((ulonglong)dVar47 >> 0x20);
  auVar51._12_4_ = uVar48;
  auVar61._0_8_ = auVar20._0_8_ + auVar20._0_8_;
  auVar61._8_8_ = auVar20._8_8_ + auVar20._8_8_;
  auVar14._8_4_ = uVar38;
  auVar14._0_8_ = dVar43;
  auVar14._12_4_ = uVar48;
  auVar34._8_4_ = uVar38;
  auVar34._0_8_ = dVar43;
  auVar34._12_4_ = uVar48;
  auVar52._0_8_ = auVar51._8_8_ * dVar53 - dVar43 * dVar49;
  auVar52._8_8_ = auVar61._0_8_ * dVar37 - auVar14._8_8_ * auVar40._0_8_;
  auVar20 = blendpd(auVar34,auVar61,2);
  auVar15._8_4_ = SUB84(auVar61._8_8_,0);
  auVar15._0_8_ = auVar61._0_8_;
  auVar15._12_4_ = (int)((ulonglong)auVar61._8_8_ >> 0x20);
  auVar5._4_8_ = dVar18;
  auVar5._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar29._0_8_ = auVar5._0_8_ << 0x20;
  auVar29._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar29._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar35._0_8_ = auVar20._0_8_ * auVar40._0_8_ - auVar61._0_8_ * auVar63._0_8_;
  auVar35._8_8_ = auVar20._8_8_ * auVar40._8_8_ - auVar15._8_8_ * dVar18;
  auVar20 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.ZW.m128d_f64;
  auVar30._8_8_ = auVar29._8_8_;
  auVar30._0_8_ = auVar20._0_8_;
  auVar16._8_4_ = SUB84(auVar52._8_8_,0);
  auVar16._0_8_ = auVar52._0_8_;
  auVar16._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
  auVar57 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar13);
  auVar63 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar30);
  auVar41._0_8_ =
       (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar13._4_4_,
                        (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar13._0_4_);
  auVar41._8_4_ = _UNK_15061cc88 & auVar13._8_4_;
  auVar41._12_4_ = _UNK_15061cc8c & auVar13._12_4_;
  lVar11 = -(ulonglong)(auVar41._8_8_ <= dStack_2a0);
  auVar42._0_8_ =
       (double)CONCAT44(~(uint)(-(ulonglong)(auVar41._0_8_ <= local_2a8) >> 0x20) & auVar57._4_4_,
                        ~(uint)-(ulonglong)(auVar41._0_8_ <= local_2a8) & auVar57._0_4_);
  auVar42._8_4_ = ~(uint)lVar11 & auVar57._8_4_;
  auVar42._12_4_ = ~(uint)((ulonglong)lVar11 >> 0x20) & auVar57._12_4_;
  lVar11 = -(ulonglong)
            ((double)CONCAT44(auVar20._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar20._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  local_298._s_0.X = auVar42._0_8_ * (dVar43 * auVar58._8_8_ + dVar54 + auVar16._8_8_);
  local_298._s_0.Y = auVar42._8_8_ * (dVar47 * auVar40._8_8_ + dVar31 + auVar35._0_8_);
  auVar13 = blendpd(auVar52,auVar35,2);
  local_298._s_0.Z =
       (double)CONCAT44(~(uint)((ulonglong)lVar11 >> 0x20) & auVar63._4_4_,
                        ~(uint)lVar11 & auVar63._0_4_) *
       (auVar61._0_8_ * auVar58._8_8_ + dVar36 + auVar13._0_8_);
  local_210 = local_280._s_0.X;
  dStack_208 = local_280._s_0.Y;
  local_200 = local_280._s_0.X;
  dStack_1f8 = local_280._s_0.Y;
  local_1f0 = local_280._s_0.Z;
  local_1e8 = local_298._s_0.X;
  dStack_1e0 = local_298._s_0.Y;
  local_1d8 = local_298._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_280._s_0,__real_3e45798ee0000000);
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_1b8);
  (this->TopologySelectorSettings).bHitBackFaces =
       *(bool *)(((((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.
                 DebugPtr)->_padding_ + 0xb5);
  if ((this->TopologySelector).Object == (FMeshTopologySelector *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FInputRayHit *)(*pcVar3)();
      return pFVar10;
    }
  }
  bVar7 = FMeshTopologySelector::FindSelectedElement
                    ((this->TopologySelector).Object,&this->TopologySelectorSettings,
                     (TRay<double> *)&local_298._s_0,&local_1b8,(TVector<double> *)&local_268._s_0,
                     &local_1d0,(int *)0x0);
  if (bVar7) {
    uVar8 = UE::Geometry::FGroupTopologySelection::GetASelectedEdgeID(&local_1b8);
    pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
    if ((pUVar1->CurrentTopology).Object == (FGroupTopology *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FInputRayHit *)(*pcVar3)();
        return pFVar10;
      }
    }
    pFVar2 = (pUVar1->CurrentTopology).Object;
    uVar9 = 0;
    if ((int)uVar8 < (pFVar2->Edges).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        pFVar10 = (FInputRayHit *)(*pcVar3)();
        return pFVar10;
      }
    }
    dVar18 = __real_3ff0000000000000;
    if (*(int *)((pFVar2->Edges).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x50 + 0x48) != -1)
    {
      local_250 = 1;
      uStack_228 = uStack_228 & 0xffffff00;
      uStack_224 = 0;
      local_220 = (void *)0x0;
      local_2b8.ObjectIndex = 0;
      local_2b8.ObjectSerialNumber = 0;
      local_2a8 = 0.0;
      dVar54 = (local_268._s_0.Y - local_298._s_0.Y) * local_280._s_0.Y +
               (local_268._s_0.X - local_298._s_0.X) * local_280._s_0.X +
               (local_268._s_0.Z - local_298._s_0.Z) * local_280._s_0.Z;
      FWeakObjectPtr::operator=(&local_2b8,(FObjectPtr)&local_2a8);
      FStack_218 = local_2b8;
      *(ulonglong *)__return_storage_ptr__ = CONCAT71(uStack_24f,local_250);
      __return_storage_ptr__->HitDepth = dVar54;
      auVar6._4_8_ = dVar54;
      auVar6._0_4_ = uStack_22c;
      auVar17._0_8_ = auVar6._0_8_ << 0x20;
      auVar17._8_4_ = uStack_228;
      auVar17._12_4_ = uStack_224;
      (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = 0.0;
      (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = 0.0;
      uVar19 = auVar17._8_8_;
      (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = dVar18;
      __return_storage_ptr__->bHasHitNormal = (bool)(char)uVar19;
      *(int3 *)&__return_storage_ptr__->field_0x29 = (int3)((ulonglong)uVar19 >> 8);
      __return_storage_ptr__->HitIdentifier = (int)((ulonglong)uVar19 >> 0x20);
      __return_storage_ptr__->HitOwner = local_220;
      (__return_storage_ptr__->HitObject).WeakPtr = local_2b8;
    }
  }
  local_1b8.SelectedEdgeIDs.HashSize = 0;
  if (local_1b8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1b8.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1b8.SelectedEdgeIDs.Elements);
  local_1b8.SelectedCornerIDs.HashSize = 0;
  if (local_1b8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1b8.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1b8.SelectedCornerIDs.Elements);
  local_1b8.SelectedGroupIDs.HashSize = 0;
  if (local_1b8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1b8.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_1b8);
  return __return_storage_ptr__;
}

// IsHitByClick @ 14cd719d0

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
UPolyEditInsertEdgeLoopActivity::IsHitByClick
          (UPolyEditInsertEdgeLoopActivity *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res20;
  uint7 uStack_57;
  uint uStack_30;
  
  dVar3 = __real_47efffffe0000000;
  dVar2 = __real_3ff0000000000000;
  uStack_30 = uStack_30 & 0xffffff00;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  if (((this->TopologySelectorSettings).bEnableFaceHits == false) && (this->field_0x18 != '\0')) {
    HitTest((UPolyEditInsertEdgeLoopActivity *)&this[-1].InputGroupEdgeID,__return_storage_ptr__,
            &param_1->WorldRay);
  }
  else {
    *(ulonglong *)__return_storage_ptr__ = (ulonglong)uStack_57 << 8;
    __return_storage_ptr__->HitDepth = dVar3;
    uVar1 = (ulonglong)uStack_30;
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->HitNormal).field0_0x0._s_0.Z = dVar2;
    __return_storage_ptr__->bHasHitNormal = (bool)(char)uVar1;
    *(int3 *)&__return_storage_ptr__->field_0x29 = (int3)(uVar1 >> 8);
    __return_storage_ptr__->HitIdentifier = (int)(uVar1 >> 0x20);
    __return_storage_ptr__->HitOwner = (void *)0x0;
    (__return_storage_ptr__->HitObject).WeakPtr = local_res8;
  }
  return __return_storage_ptr__;
}

// IsRunning @ 14cd71ba0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UPolyEditInsertEdgeLoopActivity::IsRunning(UPolyEditInsertEdgeLoopActivity *this)

{
  return this->bIsRunning;
}

// MakeNewOperator @ 14cd73270

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
__thiscall UPolyEditInsertEdgeLoopActivity::MakeNewOperator(UPolyEditInsertEdgeLoopActivity *this)

{
  int *piVar1;
  TArray<double,TSizedDefaultAllocator<32>_> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FDynamicMesh3 *pFVar4;
  FGroupTopology *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  FEdgeLoopInsertionOp *this_00;
  FEdgeLoopInsertionOp *this_01;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TVar15;
  FDynamicMeshOperator *in_RDX;
  uint uVar16;
  FEdgeLoopInsertionOp *pFVar17;
  FScriptContainerElement *pFVar18;
  double local_f8;
  FDynamicMesh3 *local_f0;
  TReferenceControllerBase<1> *pTStack_e8;
  FGroupTopology *local_e0;
  TReferenceControllerBase<1> *pTStack_d8;
  TObjectPtr<UPolyEditActivityContext>_u_0 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  TQuaternion<double>_u_0 local_a0;
  TObjectPtr<UPolyEditActivityContext>_u_0 local_80;
  undefined8 uStack_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  
  this_00 = ::operator_new(0x1a0);
  pFVar17 = (FEdgeLoopInsertionOp *)0x0;
  this_01 = pFVar17;
  if (this_00 != (FEdgeLoopInsertionOp *)0x0) {
    memset(this_00,0,0x1a0);
    this_01 = UE::Geometry::FEdgeLoopInsertionOp::FEdgeLoopInsertionOp(this_00);
  }
  pTVar3 = (TReferenceControllerBase<1> *)
           (this->ProblemTopologyRenderer).TotalTransform.Scale3D.XY.m128d_f64[1];
  pFVar4 = (FDynamicMesh3 *)(this->ProblemTopologyRenderer).TotalTransform.Scale3D.XY.m128d_f64[0];
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f0 = (this_01->OriginalMesh).Object;
  pTStack_e8 = (this_01->OriginalMesh).SharedReferenceCount.ReferenceController;
  (this_01->OriginalMesh).Object = pFVar4;
  (this_01->OriginalMesh).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_e8);
  pTVar3 = (TReferenceControllerBase<1> *)
           (this->ProblemTopologyRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1];
  pFVar5 = (FGroupTopology *)(this->ProblemTopologyRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e0 = (this_01->OriginalTopology).Object;
  pTStack_d8 = (this_01->OriginalTopology).SharedReferenceCount.ReferenceController;
  (this_01->OriginalTopology).Object = pFVar5;
  (this_01->OriginalTopology).SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_d8);
  local_a0._s_0.X = (double)*(undefined8 *)&this->field_0x30;
  local_a0._s_0.Y = (double)*(undefined8 *)&this->field_0x38;
  local_a0._s_0.Z = (double)*(undefined8 *)&this->field_0x40;
  local_a0._s_0.W = (double)(this->Settings).field0_0x0;
  local_c0 = (this->TargetTransform).Rotation.XY.m128d_f64[0];
  local_a8 = (this->TargetTransform).Translation.XY.m128d_f64[0];
  local_d0 = (this->ActivityContext).field0_0x0;
  uStack_c8 = *(undefined8 *)&this->bIsRunning;
  local_b8 = (this->TargetTransform).Rotation.ZW.m128d_f64[0];
  dStack_b0 = (this->TargetTransform).Rotation.ZW.m128d_f64[1];
  local_80 = local_d0;
  uStack_78 = uStack_c8;
  local_70 = local_c0;
  local_68 = local_b8;
  dStack_60 = dStack_b0;
  local_58 = local_a8;
  UE::Geometry::FEdgeLoopInsertionOp::SetTransform(this_01,(TTransformSRT3<double> *)&local_a0._s_0)
  ;
  this_01->Mode = (uint)(*(int *)(*(longlong *)&this->field_0x18 + 0xb4) == 1);
  this_01->VertexTolerance = *(double *)(*(longlong *)&this->field_0x18 + 0xd8);
  iVar14._0_1_ = (this->TopologySelectorSettings).bEnableFaceHits;
  iVar14._1_1_ = (this->TopologySelectorSettings).bEnableEdgeHits;
  iVar14._2_1_ = (this->TopologySelectorSettings).bEnableCornerHits;
  iVar14._3_1_ = (this->TopologySelectorSettings).bHitBackFaces;
  if (iVar14 < 0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_7453270346062364630>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditInsertEdgeLoopActivity.cpp"
                        ,0x2a,"InputGroupEdgeID >= 0");
    if (bVar11) {
      pcVar8 = (code *)swi(3);
      TVar15.Ptr = (FDynamicMeshOperator *)(*pcVar8)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar15.Ptr;
    }
  }
  else {
    this_01->GroupEdgeID = iVar14;
    pFVar5 = (this_01->OriginalTopology).Object;
    if (*(char *)(*(longlong *)&this->field_0x18 + 0xd1) == '\0') {
      if ((pFVar5 == (FGroupTopology *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        TVar15.Ptr = (FDynamicMeshOperator *)(*pcVar8)();
        return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                )TVar15.Ptr;
      }
      uVar16 = this_01->GroupEdgeID;
      pFVar5 = (this_01->OriginalTopology).Object;
      uVar12 = 0;
      if ((int)uVar16 < (pFVar5->Edges).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        TVar15.Ptr = (FDynamicMeshOperator *)(*pcVar8)();
        return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                )TVar15.Ptr;
      }
      iVar14 = *(int *)((pFVar5->Edges).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x50 + 0x48
                       );
    }
    else {
      if ((pFVar5 == (FGroupTopology *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        TVar15.Ptr = (FDynamicMeshOperator *)(*pcVar8)();
        return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                )TVar15.Ptr;
      }
      uVar16 = this_01->GroupEdgeID;
      pFVar5 = (this_01->OriginalTopology).Object;
      uVar12 = 0;
      if ((int)uVar16 < (pFVar5->Edges).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        TVar15.Ptr = (FDynamicMeshOperator *)(*pcVar8)();
        return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                )TVar15.Ptr;
      }
      iVar14 = *(int *)((pFVar5->Edges).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x50 + 0x4c
                       );
    }
    this_01->StartCornerID = iVar14;
    dVar10 = __real_3ff0000000000000;
    lVar6 = *(longlong *)&this->field_0x18;
    if (*(int *)(lVar6 + 0xb0) == 0) {
      iVar14 = *(int *)(lVar6 + 0xb8);
      if (0 < iVar14) {
        pTVar2 = &this_01->InputLengths;
        dVar9 = __real_3ff0000000000000 / ((double)iVar14 + __real_3ff0000000000000);
        do {
          local_f8 = ((double)(int)pFVar17 + dVar10) * dVar9;
          pFVar7 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar7 <= (FScriptContainerElement *)&local_f8) &&
              ((FScriptContainerElement *)&local_f8 <
               pFVar7 + (longlong)(this_01->InputLengths).ArrayMax * 8)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar8 = (code *)swi(3);
            TVar15.Ptr = (FDynamicMeshOperator *)(*pcVar8)();
            return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                    )TVar15.Ptr;
          }
          iVar13 = (this_01->InputLengths).ArrayNum;
          if (iVar13 == (this_01->InputLengths).ArrayMax) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar2->AllocatorInstance,&(this_01->InputLengths).ArrayMax);
          }
          uVar16 = (int)pFVar17 + 1;
          pFVar17 = (FEdgeLoopInsertionOp *)(ulonglong)uVar16;
          (this_01->InputLengths).ArrayNum = iVar13 + 1;
          *(double *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_f8;
        } while ((int)uVar16 < iVar14);
      }
    }
    else {
      pTVar2 = &this_01->InputLengths;
      pFVar7 = (pTVar2->AllocatorInstance).Data;
      if (*(char *)(lVar6 + 0xd0) == '\0') {
        pFVar18 = (FScriptContainerElement *)(lVar6 + 0xc0);
        if (*(int *)(lVar6 + 0xb0) != 1) {
          pFVar18 = (FScriptContainerElement *)(lVar6 + 200);
        }
      }
      else {
        pFVar18 = (FScriptContainerElement *)&this->ProblemVertTickWidth;
      }
      if (((pFVar7 <= pFVar18) &&
          (pFVar18 < pFVar7 + (longlong)(this_01->InputLengths).ArrayMax * 8)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        TVar15.Ptr = (FDynamicMeshOperator *)(*pcVar8)();
        return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
                )TVar15.Ptr;
      }
      iVar14 = (this_01->InputLengths).ArrayNum;
      piVar1 = &(this_01->InputLengths).ArrayMax;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this_01->InputLengths).ArrayNum = iVar14 + 1;
      *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 8) =
           *(undefined8 *)pFVar18;
    }
    iVar14 = *(int *)(*(longlong *)&this->field_0x18 + 0xb0);
    if ((iVar14 == 0) || (iVar14 == 1)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    this_01->bInputsAreProportions = bVar11;
  }
  in_RDX->_padding_ = (longlong)this_01;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// OnBeginHover @ 14cd74680

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
UPolyEditInsertEdgeLoopActivity::OnBeginHover
          (UPolyEditInsertEdgeLoopActivity *this,FInputDeviceRay *param_1)

{
  return;
}

// OnClicked @ 14cd74bc0

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
UPolyEditInsertEdgeLoopActivity::OnClicked
          (UPolyEditInsertEdgeLoopActivity *this,FInputDeviceRay *param_1)

{
  bool bVar1;
  
  if ((this->TopologySelectorSettings).bEnableFaceHits == false) {
    bVar1 = UpdateHoveredItem((UPolyEditInsertEdgeLoopActivity *)&this[-1].InputGroupEdgeID,
                              &param_1->WorldRay);
    if (bVar1) {
      (this->TopologySelectorSettings).bEnableFaceHits = true;
    }
  }
  return;
}

// OnEndHover @ 14cd74e00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPolyEditInsertEdgeLoopActivity::OnEndHover(UPolyEditInsertEdgeLoopActivity *this)

{
  if ((this->field_0x20 != '\0') && (*(char *)&this->ProblemVertTickWidth == '\0')) {
    ClearPreview((UPolyEditInsertEdgeLoopActivity *)&this[-1].InteractiveInputLength);
    return;
  }
  return;
}

// OnPropertyModified @ 14cd75280

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
UPolyEditInsertEdgeLoopActivity::OnPropertyModified
          (UPolyEditInsertEdgeLoopActivity *this,UObject *param_1,FProperty *param_2)

{
  UPolyEditActivityContext *pUVar1;
  
  UMeshOpPreviewWithBackgroundCompute::CancelCompute
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
  pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
  UPreviewMesh::UpdatePreview
            ((((pUVar1->Preview).field0_0x0.DebugPtr)->PreviewMesh).field0_0x0.DebugPtr,
             (pUVar1->CurrentMesh).Object,FullUpdate,AllVertexAttribs);
  this->InputGroupEdgeID = -1;
  (this->PreviewEdges).ArrayNum = 0;
  if ((this->PreviewEdges).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->PreviewEdges).AllocatorInstance,0,&(this->PreviewEdges).ArrayMax);
  }
  (this->ProblemTopologyEdges).ArrayNum = 0;
  if ((this->ProblemTopologyEdges).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,&(this->ProblemTopologyEdges).AllocatorInstance,0,
               &(this->ProblemTopologyEdges).ArrayMax);
  }
  (this->ProblemTopologyVerts).ArrayNum = 0;
  if ((this->ProblemTopologyVerts).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->ProblemTopologyVerts).AllocatorInstance,0,
               &(this->ProblemTopologyVerts).ArrayMax);
  }
  return;
}

// OnUpdateHover @ 14cd76550

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
UPolyEditInsertEdgeLoopActivity::OnUpdateHover
          (UPolyEditInsertEdgeLoopActivity *this,FInputDeviceRay *param_1)

{
  bool bVar1;
  
  if ((*(char *)&this->ProblemVertTickWidth == '\0') && (this->field_0x20 != '\0')) {
    bVar1 = UpdateHoveredItem((UPolyEditInsertEdgeLoopActivity *)&this[-1].InteractiveInputLength,
                              &param_1->WorldRay);
    return bVar1;
  }
  return false;
}

// Render @ 14cd7a5e0

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
UPolyEditInsertEdgeLoopActivity::Render
          (UPolyEditInsertEdgeLoopActivity *this,IToolsContextRenderAPI *param_1)

{
  FToolDataVisualizer *pFVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  UObject *pUVar17;
  longlong *plVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
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
  undefined4 uVar52;
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
  undefined1 local_res8 [8];
  undefined1 local_b8 [16];
  double local_a8;
  undefined1 local_a0 [16];
  double local_90;
  
  pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  plVar18 = (longlong *)(**(code **)(*(longlong *)pUVar17 + 0x2d8))(pUVar17);
  plVar18 = (longlong *)(**(code **)(*plVar18 + 0x398))(plVar18);
  (**(code **)(*plVar18 + 0x18))(plVar18,&this->CameraState);
  pFVar1 = &this->PreviewEdgeRenderer;
  FToolDataVisualizer::BeginFrame(pFVar1,param_1,&this->CameraState);
  FToolDataVisualizer::SetTransform(pFVar1,&this->TargetTransform);
  iVar2 = (this->PreviewEdges).ArrayNum;
  pFVar19 = (this->PreviewEdges).AllocatorInstance.Data;
  pFVar21 = pFVar19 + 0x18;
  pFVar20 = pFVar19 + (longlong)iVar2 * 0x30;
  while( true ) {
    if ((this->PreviewEdges).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar19 == pFVar20) break;
    auVar37 = *(undefined1 (*) [16])(this->PreviewEdgeRenderer).TotalTransform.Rotation.ZW.m128d_f64
    ;
    auVar43 = *(undefined1 (*) [16])(this->PreviewEdgeRenderer).TotalTransform.Rotation.XY.m128d_f64
    ;
    dVar13 = *(double *)(pFVar21 + 0x10) *
             (this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
    dVar14 = (this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
    dVar16 = (this->PreviewEdgeRenderer).TotalTransform.Rotation.ZW.m128d_f64[1];
    dVar8 = (this->PreviewEdgeRenderer).TotalTransform.Scale3D.XY.m128d_f64[0] * *(double *)pFVar21;
    dVar10 = (this->PreviewEdgeRenderer).TotalTransform.Scale3D.XY.m128d_f64[1] *
             *(double *)(pFVar21 + 8);
    uVar52 = (undefined4)((ulonglong)dVar10 >> 0x20);
    auVar23 = *(undefined1 (*) [16])(this->PreviewEdgeRenderer).TotalTransform.Rotation.XY.m128d_f64
    ;
    auVar33 = blendpd(auVar23,auVar37,2);
    auVar53._8_4_ = SUB84(dVar10,0);
    auVar53._0_8_ = dVar8;
    auVar53._12_4_ = uVar52;
    dVar5 = auVar37._0_8_;
    auVar54._0_8_ = auVar53._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar8;
    auVar54._8_8_ = dVar13 * auVar23._8_8_ - dVar5 * dVar10;
    auVar22._8_4_ = SUB84(dVar10,0);
    auVar22._0_8_ = dVar8;
    auVar22._12_4_ = uVar52;
    auVar12._8_4_ = SUB84(dVar14,0);
    auVar12._0_8_ = dVar13;
    auVar12._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    auVar23 = blendpd(auVar22,auVar12,2);
    dVar4 = auVar37._8_8_;
    auVar24._0_8_ = auVar23._0_8_ * dVar5 - auVar33._0_8_ * dVar13;
    auVar24._8_8_ = auVar23._8_8_ * dVar4 - auVar33._8_8_ * dVar14;
    auVar23 = blendpd(auVar54,auVar24,2);
    auVar55._0_8_ = auVar23._0_8_ + auVar23._0_8_;
    auVar55._8_8_ = auVar23._8_8_ + auVar23._8_8_;
    dVar14 = auVar54._8_8_ + auVar54._8_8_;
    dVar6 = auVar24._0_8_ + auVar24._0_8_;
    uVar52 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar44._8_4_ = SUB84(dVar6,0);
    auVar44._0_8_ = dVar14;
    auVar44._12_4_ = uVar52;
    auVar34._8_4_ = SUB84(dVar6,0);
    auVar34._0_8_ = dVar14;
    auVar34._12_4_ = uVar52;
    auVar23 = blendpd(auVar34,auVar55,2);
    dVar9 = *(double *)(pFVar19 + 0x10) *
            (this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
    dVar11 = (this->PreviewEdgeRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar45._0_8_ = auVar44._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar14;
    auVar45._8_8_ = auVar55._0_8_ * auVar43._8_8_ - dVar5 * dVar6;
    auVar25._8_4_ = SUB84(auVar45._8_8_,0);
    auVar25._0_8_ = auVar45._0_8_;
    auVar25._12_4_ = (int)((ulonglong)auVar45._8_8_ >> 0x20);
    auVar43 = blendpd(auVar43,auVar37,2);
    auVar35._0_8_ = auVar23._0_8_ * dVar5 - auVar43._0_8_ * auVar55._0_8_;
    auVar35._8_8_ = auVar23._8_8_ * dVar4 - auVar43._8_8_ * auVar55._8_8_;
    auVar43 = *(undefined1 (*) [16])(this->PreviewEdgeRenderer).TotalTransform.Rotation.XY.m128d_f64
    ;
    auVar23 = *(undefined1 (*) [16])(this->PreviewEdgeRenderer).TotalTransform.Rotation.XY.m128d_f64
    ;
    dVar6 = dVar6 * dVar16 + dVar10 + auVar35._0_8_ +
            (this->PreviewEdgeRenderer).TotalTransform.Translation.XY.m128d_f64[1];
    auVar33 = blendpd(auVar45,auVar35,2);
    dVar10 = *(double *)pFVar19 * (this->PreviewEdgeRenderer).TotalTransform.Scale3D.XY.m128d_f64[0]
    ;
    dVar15 = *(double *)(pFVar19 + 8) *
             (this->PreviewEdgeRenderer).TotalTransform.Scale3D.XY.m128d_f64[1];
    uVar52 = (undefined4)((ulonglong)dVar15 >> 0x20);
    local_a8 = auVar55._0_8_ * dVar16 + dVar13 + auVar33._0_8_ +
               (this->PreviewEdgeRenderer).TotalTransform.Translation.ZW.m128d_f64[0];
    local_b8._8_4_ = SUB84(dVar6,0);
    local_b8._0_8_ =
         dVar14 * dVar16 + dVar8 + auVar25._8_8_ +
         (this->PreviewEdgeRenderer).TotalTransform.Translation.XY.m128d_f64[0];
    local_b8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    auVar56._8_4_ = SUB84(dVar15,0);
    auVar56._0_8_ = dVar10;
    auVar56._12_4_ = uVar52;
    auVar33 = blendpd(auVar23,auVar37,2);
    auVar57._0_8_ = auVar56._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar10;
    auVar57._8_8_ = dVar9 * auVar23._8_8_ - dVar5 * dVar15;
    auVar26._8_4_ = SUB84(dVar15,0);
    auVar26._0_8_ = dVar10;
    auVar26._12_4_ = uVar52;
    auVar7._8_4_ = SUB84(dVar11,0);
    auVar7._0_8_ = dVar9;
    auVar7._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar23 = blendpd(auVar26,auVar7,2);
    auVar27._0_8_ = auVar23._0_8_ * dVar5 - auVar33._0_8_ * dVar9;
    auVar27._8_8_ = auVar23._8_8_ * dVar4 - auVar33._8_8_ * dVar11;
    dVar14 = auVar57._8_8_ + auVar57._8_8_;
    dVar6 = auVar27._0_8_ + auVar27._0_8_;
    uVar52 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar23 = blendpd(auVar57,auVar27,2);
    auVar46._8_4_ = SUB84(dVar6,0);
    auVar46._0_8_ = dVar14;
    auVar46._12_4_ = uVar52;
    auVar58._0_8_ = auVar23._0_8_ + auVar23._0_8_;
    auVar58._8_8_ = auVar23._8_8_ + auVar23._8_8_;
    auVar36._8_4_ = SUB84(dVar6,0);
    auVar36._0_8_ = dVar14;
    auVar36._12_4_ = uVar52;
    auVar23 = blendpd(auVar43,auVar37,2);
    auVar37 = blendpd(auVar36,auVar58,2);
    auVar47._0_8_ = auVar46._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar14;
    auVar47._8_8_ = auVar58._0_8_ * auVar43._8_8_ - dVar5 * dVar6;
    auVar43._8_4_ = SUB84(auVar47._8_8_,0);
    auVar43._0_8_ = auVar47._0_8_;
    auVar43._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
    auVar38._0_8_ = auVar37._0_8_ * dVar5 - auVar23._0_8_ * auVar58._0_8_;
    auVar38._8_8_ = auVar37._8_8_ * dVar4 - auVar23._8_8_ * auVar58._8_8_;
    dVar5 = dVar4 * dVar6 + dVar15 + auVar38._0_8_ +
            (this->PreviewEdgeRenderer).TotalTransform.Translation.XY.m128d_f64[1];
    auVar37 = blendpd(auVar47,auVar38,2);
    local_a0._8_4_ = SUB84(dVar5,0);
    local_a0._0_8_ =
         dVar4 * dVar14 + dVar10 + auVar43._8_8_ +
         (this->PreviewEdgeRenderer).TotalTransform.Translation.XY.m128d_f64[0];
    local_a0._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_90 = dVar4 * auVar58._0_8_ + dVar9 + auVar37._0_8_ +
               (this->PreviewEdgeRenderer).TotalTransform.Translation.ZW.m128d_f64[0];
    (**(code **)(pFVar1->_padding_ + 8))
              (pFVar1,local_a0,local_b8,&(this->PreviewEdgeRenderer).LineColor,
               (this->PreviewEdgeRenderer).LineThickness,(this->PreviewEdgeRenderer).bDepthTested);
    pFVar19 = pFVar19 + 0x30;
    pFVar21 = pFVar21 + 0x30;
  }
  FToolDataVisualizer::EndFrame(pFVar1);
  if (((this->Settings).field0_0x0.DebugPtr)->bHighlightProblemGroups != false) {
    pFVar1 = &this->ProblemTopologyRenderer;
    FToolDataVisualizer::BeginFrame(pFVar1,param_1,&this->CameraState);
    FToolDataVisualizer::SetTransform(pFVar1,&this->TargetTransform);
    pFVar19 = (this->ProblemTopologyEdges).AllocatorInstance.Data;
    iVar2 = (this->ProblemTopologyEdges).ArrayNum;
    pFVar21 = pFVar19 + 0x18;
    pFVar20 = pFVar19 + (longlong)iVar2 * 0x30;
    while( true ) {
      if ((this->ProblemTopologyEdges).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TTuple<UE::Math::TVector<double>,UE::Math::TVector<double>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar19 == pFVar20) break;
      auVar37 = *(undefined1 (*) [16])
                 (this->ProblemTopologyRenderer).TotalTransform.Rotation.ZW.m128d_f64;
      auVar43 = *(undefined1 (*) [16])
                 (this->ProblemTopologyRenderer).TotalTransform.Rotation.XY.m128d_f64;
      dVar11 = *(double *)(pFVar21 + 0x10) *
               (this->ProblemTopologyRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
      dVar14 = (this->ProblemTopologyRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar16 = (this->ProblemTopologyRenderer).TotalTransform.Rotation.ZW.m128d_f64[1];
      dVar8 = (this->ProblemTopologyRenderer).TotalTransform.Scale3D.XY.m128d_f64[0] *
              *(double *)pFVar21;
      dVar9 = (this->ProblemTopologyRenderer).TotalTransform.Scale3D.XY.m128d_f64[1] *
              *(double *)(pFVar21 + 8);
      uVar52 = (undefined4)((ulonglong)dVar9 >> 0x20);
      auVar23 = *(undefined1 (*) [16])
                 (this->ProblemTopologyRenderer).TotalTransform.Rotation.XY.m128d_f64;
      auVar33 = blendpd(auVar23,auVar37,2);
      auVar59._8_4_ = SUB84(dVar9,0);
      auVar59._0_8_ = dVar8;
      auVar59._12_4_ = uVar52;
      dVar5 = auVar37._0_8_;
      auVar60._0_8_ = auVar59._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar8;
      auVar60._8_8_ = dVar11 * auVar23._8_8_ - dVar5 * dVar9;
      auVar41._8_4_ = SUB84(dVar9,0);
      auVar41._0_8_ = dVar8;
      auVar41._12_4_ = uVar52;
      auVar23._8_4_ = SUB84(dVar14,0);
      auVar23._0_8_ = dVar11;
      auVar23._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      auVar23 = blendpd(auVar41,auVar23,2);
      dVar4 = auVar37._8_8_;
      auVar28._0_8_ = auVar23._0_8_ * dVar5 - auVar33._0_8_ * dVar11;
      auVar28._8_8_ = auVar23._8_8_ * dVar4 - auVar33._8_8_ * dVar14;
      auVar23 = blendpd(auVar60,auVar28,2);
      auVar61._0_8_ = auVar23._0_8_ + auVar23._0_8_;
      auVar61._8_8_ = auVar23._8_8_ + auVar23._8_8_;
      dVar14 = auVar60._8_8_ + auVar60._8_8_;
      dVar6 = auVar28._0_8_ + auVar28._0_8_;
      uVar52 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar48._8_4_ = SUB84(dVar6,0);
      auVar48._0_8_ = dVar14;
      auVar48._12_4_ = uVar52;
      auVar39._8_4_ = SUB84(dVar6,0);
      auVar39._0_8_ = dVar14;
      auVar39._12_4_ = uVar52;
      auVar23 = blendpd(auVar39,auVar61,2);
      auVar49._0_8_ = auVar48._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar14;
      auVar49._8_8_ = auVar61._0_8_ * auVar43._8_8_ - dVar5 * dVar6;
      auVar43 = blendpd(auVar43,auVar37,2);
      auVar40._0_8_ = auVar23._0_8_ * dVar5 - auVar43._0_8_ * auVar61._0_8_;
      auVar40._8_8_ = auVar23._8_8_ * dVar4 - auVar43._8_8_ * auVar61._8_8_;
      auVar43 = *(undefined1 (*) [16])
                 (this->ProblemTopologyRenderer).TotalTransform.Rotation.XY.m128d_f64;
      auVar29._8_4_ = SUB84(auVar49._8_8_,0);
      auVar29._0_8_ = auVar49._0_8_;
      auVar29._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
      dVar6 = dVar6 * dVar16 + dVar9 + auVar40._0_8_ +
              (this->ProblemTopologyRenderer).TotalTransform.Translation.XY.m128d_f64[1];
      dVar13 = *(double *)(pFVar19 + 0x10) *
               (this->ProblemTopologyRenderer).TotalTransform.Scale3D.ZW.m128d_f64[0];
      dVar15 = (this->ProblemTopologyRenderer).TotalTransform.Scale3D.ZW.m128d_f64[1] * 0.0;
      dVar9 = (this->ProblemTopologyRenderer).TotalTransform.Scale3D.XY.m128d_f64[0] *
              *(double *)pFVar19;
      dVar10 = (this->ProblemTopologyRenderer).TotalTransform.Scale3D.XY.m128d_f64[1] *
               *(double *)(pFVar19 + 8);
      uVar52 = (undefined4)((ulonglong)dVar10 >> 0x20);
      auVar23 = *(undefined1 (*) [16])
                 (this->ProblemTopologyRenderer).TotalTransform.Rotation.XY.m128d_f64;
      auVar33 = blendpd(auVar49,auVar40,2);
      local_90 = auVar61._0_8_ * dVar16 + dVar11 + auVar33._0_8_ +
                 (this->ProblemTopologyRenderer).TotalTransform.Translation.ZW.m128d_f64[0];
      local_a0._8_4_ = SUB84(dVar6,0);
      local_a0._0_8_ =
           dVar14 * dVar16 + dVar8 + auVar29._8_8_ +
           (this->ProblemTopologyRenderer).TotalTransform.Translation.XY.m128d_f64[0];
      local_a0._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar62._8_4_ = SUB84(dVar10,0);
      auVar62._0_8_ = dVar9;
      auVar62._12_4_ = uVar52;
      auVar41 = blendpd(auVar23,auVar37,2);
      auVar63._0_8_ = auVar62._8_8_ * auVar23._0_8_ - auVar23._8_8_ * dVar9;
      auVar63._8_8_ = dVar13 * auVar23._8_8_ - dVar5 * dVar10;
      auVar30._8_4_ = SUB84(dVar10,0);
      auVar30._0_8_ = dVar9;
      auVar30._12_4_ = uVar52;
      auVar33._8_4_ = SUB84(dVar15,0);
      auVar33._0_8_ = dVar13;
      auVar33._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      auVar23 = blendpd(auVar30,auVar33,2);
      auVar31._0_8_ = auVar23._0_8_ * dVar5 - auVar41._0_8_ * dVar13;
      auVar31._8_8_ = auVar23._8_8_ * dVar4 - auVar41._8_8_ * dVar15;
      auVar23 = blendpd(auVar63,auVar31,2);
      dVar14 = auVar63._8_8_ + auVar63._8_8_;
      dVar6 = auVar31._0_8_ + auVar31._0_8_;
      uVar52 = (undefined4)((ulonglong)dVar6 >> 0x20);
      auVar64._0_8_ = auVar23._0_8_ + auVar23._0_8_;
      auVar64._8_8_ = auVar23._8_8_ + auVar23._8_8_;
      auVar50._8_4_ = SUB84(dVar6,0);
      auVar50._0_8_ = dVar14;
      auVar50._12_4_ = uVar52;
      auVar42._8_4_ = SUB84(dVar6,0);
      auVar42._0_8_ = dVar14;
      auVar42._12_4_ = uVar52;
      auVar23 = blendpd(auVar42,auVar64,2);
      auVar51._0_8_ = auVar50._8_8_ * auVar43._0_8_ - auVar43._8_8_ * dVar14;
      auVar51._8_8_ = auVar64._0_8_ * auVar43._8_8_ - dVar5 * dVar6;
      auVar32._8_4_ = SUB84(auVar51._8_8_,0);
      auVar32._0_8_ = auVar51._0_8_;
      auVar32._12_4_ = (int)((ulonglong)auVar51._8_8_ >> 0x20);
      auVar43 = blendpd(auVar43,auVar37,2);
      auVar37._0_8_ = auVar23._0_8_ * dVar5 - auVar43._0_8_ * auVar64._0_8_;
      auVar37._8_8_ = auVar23._8_8_ * dVar4 - auVar43._8_8_ * auVar64._8_8_;
      dVar5 = dVar6 * dVar4 + dVar10 + auVar37._0_8_ +
              (this->ProblemTopologyRenderer).TotalTransform.Translation.XY.m128d_f64[1];
      auVar37 = blendpd(auVar51,auVar37,2);
      local_b8._8_4_ = SUB84(dVar5,0);
      local_b8._0_8_ =
           dVar14 * dVar4 + dVar9 + auVar32._8_8_ +
           (this->ProblemTopologyRenderer).TotalTransform.Translation.XY.m128d_f64[0];
      local_b8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      local_a8 = auVar64._0_8_ * dVar4 + dVar13 + auVar37._0_8_ +
                 (this->ProblemTopologyRenderer).TotalTransform.Translation.ZW.m128d_f64[0];
      (**(code **)(pFVar1->_padding_ + 8))
                (pFVar1,local_b8,local_a0,&(this->ProblemTopologyRenderer).LineColor,
                 (this->ProblemTopologyRenderer).LineThickness,
                 (this->ProblemTopologyRenderer).bDepthTested);
      pFVar19 = pFVar19 + 0x30;
      pFVar21 = pFVar21 + 0x30;
    }
    iVar2 = (this->ProblemTopologyVerts).ArrayNum;
    pFVar19 = (this->ProblemTopologyVerts).AllocatorInstance.Data;
    pFVar21 = pFVar19 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((this->ProblemTopologyVerts).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar19 == pFVar21) break;
      local_a0 = *(undefined1 (*) [16])pFVar19;
      local_90 = *(double *)&pFVar19[0x10].field_0x0;
      pcVar3 = *(code **)(pFVar1->_padding_ + 0x68);
      (*pcVar3)(pFVar1,local_a0,pcVar3,&(this->ProblemTopologyRenderer).LineColor,
                (this->ProblemTopologyRenderer).LineThickness,
                (this->ProblemTopologyRenderer).bDepthTested);
      pFVar19 = pFVar19 + 0x18;
    }
    FToolDataVisualizer::EndFrame(pFVar1);
  }
  return;
}

// Setup @ 14cd7cc10

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
UPolyEditInsertEdgeLoopActivity::Setup
          (UPolyEditInsertEdgeLoopActivity *this,UInteractiveTool *param_1)

{
  code *pcVar1;
  UPolygonSelectionMechanic *pUVar2;
  FLinearColor FVar3;
  UClass *pUVar4;
  UEdgeLoopInsertionProperties *pUVar5;
  UObject *pUVar6;
  USingleClickInputBehavior *pUVar7;
  UMouseHoverBehavior *pUVar8;
  UInteractiveToolManager *this_00;
  UContextObjectStore *this_01;
  UPolyEditActivityContext *pUVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
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
  pUVar4 = UEdgeLoopInsertionProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar4);
  local_a8._8_8_ = this;
  pUVar5 = (UEdgeLoopInsertionProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if ((double)local_a8._64_8_ != 0.0) {
    plVar10 = local_58;
    if (local_40 != (longlong *)0x0) {
      plVar10 = local_40;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar5 != (UEdgeLoopInsertionProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar5;
  pcVar1 = *(code **)(pUVar5->_padding_ + 0x2b8);
  ::FString::FString((FString *)local_d8,L"");
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  (*pcVar1)(pUVar5,pUVar6,local_d8);
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  (**(code **)(*(longlong *)this + 0x2d0))(this,(this->Settings).field0_0x0.DebugPtr);
  (**(code **)(*(longlong *)this + 0x2d8))(this,(this->Settings).field0_0x0.DebugPtr,0);
  local_d8._8_8_ = (ulonglong)(uint)local_d8._12_4_ << 0x20;
  local_d8._0_8_ = _vcall__792__flat______;
  TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>::
  AddUObject<UPolyEditInsertEdgeLoopActivity>
            ((TMulticastDelegateRegistration<void___cdecl(UObject_*,FProperty_*),FDefaultDelegateUserPolicy>
              *)&((this->Settings).field0_0x0.DebugPtr)->_padding_,
             (UPolyEditInsertEdgeLoopActivity *)local_c8,(pmf_09a5109d *)this);
  FVar3 = FLinearColor::Green;
  (this->PreviewEdgeRenderer).LineThickness = 2.0;
  (this->PreviewEdgeRenderer).bDepthTested = false;
  (this->PreviewEdgeRenderer).LineColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0;
  FVar3 = FLinearColor::Red;
  (this->ProblemTopologyRenderer).LineThickness = 3.0;
  (this->ProblemTopologyRenderer).DepthBias = 1.0;
  (this->ProblemTopologyRenderer).LineColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar3.field0_0x0
  ;
  (this->ProblemTopologyRenderer).bDepthTested = false;
  (this->TopologySelectorSettings).bEnableFaceHits = false;
  (this->TopologySelectorSettings).bEnableEdgeHits = true;
  (this->TopologySelectorSettings).bEnableCornerHits = false;
  pUVar6 = GetTransientPackageAsObject();
  pUVar7 = NewObject<USingleClickInputBehavior>(pUVar6);
  puVar11 = &this->field_0x40;
  if (this == (UPolyEditInsertEdgeLoopActivity *)0x0) {
    puVar11 = (undefined1 *)0x0;
  }
  (**(code **)(pUVar7->_padding_ + 0x378))(pUVar7,puVar11);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  (**(code **)(*(longlong *)pUVar6 + 0x2f8))(pUVar6,pUVar7,this);
  pUVar6 = GetTransientPackageAsObject();
  pUVar8 = NewObject<UMouseHoverBehavior>(pUVar6);
  puVar11 = &this->field_0x38;
  if (this == (UPolyEditInsertEdgeLoopActivity *)0x0) {
    puVar11 = (undefined1 *)0x0;
  }
  (**(code **)(*(longlong *)pUVar8 + 800))(pUVar8,puVar11);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  (**(code **)(*(longlong *)pUVar6 + 0x2f8))(pUVar6,pUVar8,this);
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
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
  if (&this->TopologySelector != (TSharedPtr<FMeshTopologySelector,1> *)(local_c8 + 8)) {
    (this->TopologySelector).Object = local_c0;
    local_c0 = (FMeshTopologySelector *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->TopologySelector).SharedReferenceCount,local_b8);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8[0].ReferenceController);
  local_c8 = (undefined1  [8])this;
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  AddWeakLambda<UPolyEditInsertEdgeLoopActivity,_UPolyEditInsertEdgeLoopActivity::Setup_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &((this->ActivityContext).field0_0x0.DebugPtr)->OnUndoRedo,
             (UPolyEditInsertEdgeLoopActivity *)local_d8,(<lambda_1> *)this);
  return;
}

// SetupPreview @ 14cd7f3f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UPolyEditInsertEdgeLoopActivity::SetupPreview(UPolyEditInsertEdgeLoopActivity *this)

{
  IDynamicMeshOperatorFactory *pIVar1;
  
  pIVar1 = (IDynamicMeshOperatorFactory *)&this->field_0x30;
  if (this == (UPolyEditInsertEdgeLoopActivity *)0x0) {
    pIVar1 = (IDynamicMeshOperatorFactory *)0x0;
  }
  UMeshOpPreviewWithBackgroundCompute::ChangeOpFactory
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr,pIVar1);
  TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
  ::
  AddWeakLambda<UPolyEditInsertEdgeLoopActivity,_UPolyEditInsertEdgeLoopActivity::SetupPreview_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
              *)&((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
                 OnOpCompleted,(UPolyEditInsertEdgeLoopActivity *)&stack0x00000010,
             (<lambda_1> *)this);
  TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
  ::
  AddWeakLambda<UPolyEditInsertEdgeLoopActivity,_UPolyEditInsertEdgeLoopActivity::SetupPreview_::__l2::<lambda_2>_>
            ((TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
              *)&((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
                 OnMeshUpdated,(UPolyEditInsertEdgeLoopActivity *)&stack0x00000010,
             (<lambda_2> *)this);
  return;
}

// Shutdown @ 14cd7f870

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
UPolyEditInsertEdgeLoopActivity::Shutdown
          (UPolyEditInsertEdgeLoopActivity *this,EToolShutdownType param_1)

{
  UEdgeLoopInsertionProperties *pUVar1;
  code *pcVar2;
  UObject *pUVar3;
  undefined7 in_register_00000011;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  FString local_18;
  
  if (this->bIsRunning != false) {
    (**(code **)(*(longlong *)this + 0x310))(this,CONCAT71(in_register_00000011,param_1));
  }
  pUVar1 = (this->Settings).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_18,L"");
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
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
  (this->Settings).field0_0x0.DebugPtr = (UEdgeLoopInsertionProperties *)0x0;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((this->ActivityContext).field0_0x0.DebugPtr)->OnUndoRedo,this);
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  UInteractionMechanic::Shutdown((UInteractionMechanic *)this);
  return;
}

// Start @ 14cd80d60

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
UPolyEditInsertEdgeLoopActivity::Start(UPolyEditInsertEdgeLoopActivity *this)

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
  UPolyEditInsertEdgeLoopActivity *local_98;
  undefined1 local_90 [120];
  double local_18;
  
  local_18 = (double)(__security_cookie.value ^ (ulonglong)auStack_b8);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
  plVar5 = (longlong *)(**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
  pcVar1 = *(code **)(*plVar5 + 0x360);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_90,L"UPolyEditInsertEdgeLoopActivity",
                      L"InsertEdgeLoopActivityDescription",
                      L"Click an edge to insert an edge loop passing across that edge. Edge loops follow a sequence of quad-like polygroups."
                     );
  (*pcVar1)(plVar5,pFVar6,2);
  if ((ITextData *)local_90._0_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_90._0_8_ + 0x10))();
  }
  (**(code **)(*(longlong *)this + 0x2d8))(this,(this->Settings).field0_0x0.DebugPtr,1);
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
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x28);
    lVar7 = (**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
    pcVar1 = *(code **)(*(longlong *)(lVar7 + 0x28) + 0x20);
    pFVar6 = FText::AsLocalizable_Advanced_LocText
                       ((FText *)local_90,L"UPolyEditInsertEdgeLoopActivity",L"ClearSelection",
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
  pIVar12 = (IDynamicMeshOperatorFactory *)&this->field_0x30;
  if (this == (UPolyEditInsertEdgeLoopActivity *)0x0) {
    pIVar12 = (IDynamicMeshOperatorFactory *)0x0;
  }
  UMeshOpPreviewWithBackgroundCompute::ChangeOpFactory
            ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr,pIVar12);
  local_98 = this;
  TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
  ::
  AddWeakLambda<UPolyEditInsertEdgeLoopActivity,_UPolyEditInsertEdgeLoopActivity::SetupPreview_::__l2::<lambda_1>_>
            ((TMulticastDelegateRegistration<void___cdecl(UE::Geometry::FDynamicMeshOperator_const_*),FDefaultDelegateUserPolicy>
              *)&((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
                 OnOpCompleted,(UPolyEditInsertEdgeLoopActivity *)local_90,(<lambda_1> *)this);
  local_98 = this;
  TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
  ::
  AddWeakLambda<UPolyEditInsertEdgeLoopActivity,_UPolyEditInsertEdgeLoopActivity::SetupPreview_::__l2::<lambda_2>_>
            ((TMulticastDelegateRegistration<void___cdecl(UMeshOpPreviewWithBackgroundCompute_*),FDefaultDelegateUserPolicy>
              *)&((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
                 OnMeshUpdated,(UPolyEditInsertEdgeLoopActivity *)local_90,(<lambda_2> *)this);
  pUVar2 = (this->ActivityContext).field0_0x0.DebugPtr;
  this->bWaitingForInsertionCompletion = false;
  this->bLastComputeSucceeded = false;
  this->InputGroupEdgeID = -1;
  this->bIsRunning = true;
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     ((FText *)local_90,L"UPolyEditInsertEdgeLoopActivity",
                      L"BeginInsertEdgeLoopActivity",L"Begin Insert Edge Loop");
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

// StaticRegisterNativesUPolyEditInsertEdgeLoopActivity @ 14cd81460

void __cdecl
UPolyEditInsertEdgeLoopActivity::StaticRegisterNativesUPolyEditInsertEdgeLoopActivity(void)

{
  return;
}

// Tick @ 14cd81af0

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

void __thiscall
UPolyEditInsertEdgeLoopActivity::Tick(UPolyEditInsertEdgeLoopActivity *this,float param_1)

{
  UPolyEditActivityContext *pUVar1;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *pTVar2;
  FDynamicMesh3 *this_00;
  FDynamicMesh3 *pFVar3;
  FGroupTopology *pFVar4;
  FGroupTopology *this_01;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar5;
  FText *pFVar6;
  undefined1 auStackY_258 [32];
  FText local_220;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_210;
  FDynamicMeshChangeTracker local_1b8;
  FGroupTopologySelection local_108;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_258;
  if ((this->bWaitingForInsertionCompletion != false) &&
     (pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr,
     ((pUVar1->Preview).field0_0x0.DebugPtr)->bResultValid != false)) {
    if (this->bLastComputeSucceeded != false) {
      UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker
                (&local_1b8,(pUVar1->CurrentMesh).Object);
      UE::Geometry::FDynamicMeshChangeTracker::BeginChange(&local_1b8);
      pTVar2 = TSharedPtr<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>,1>::
               operator*<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                         (&this->LatestOpChangedTids);
      local_210.Elements._0_8_ = 0;
      local_210.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_210.Elements._48_8_ = _UNK_150631d98;
      local_210.Elements._8_8_ = 0;
      local_210.Elements._32_8_ = 0;
      local_210.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_210.HashSize = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::operator=(&local_210,pTVar2);
      UE::Geometry::FDynamicMeshChangeTracker::
      SaveTriangles<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>
                (&local_1b8,&local_210,true);
      this_00 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->
                          (&((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh);
      pFVar3 = UPreviewMesh::GetMesh
                         ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.
                           DebugPtr)->PreviewMesh).field0_0x0.DebugPtr);
      UE::Geometry::FDynamicMesh3::Copy(this_00,pFVar3,true,true,true,true);
      pFVar4 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator*<UE::Geometry::FGroupTopology>
                         (&this->LatestOpTopologyResult);
      this_01 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator*<UE::Geometry::FGroupTopology>
                          (&((this->ActivityContext).field0_0x0.DebugPtr)->CurrentTopology);
      UE::Geometry::FGroupTopology::operator=(this_01,pFVar4);
      pFVar4 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator->
                         (&((this->ActivityContext).field0_0x0.DebugPtr)->CurrentTopology);
      UE::Geometry::FGroupTopology::RetargetOnClonedMesh
                (pFVar4,(((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh).Object);
      UpdateComputeInputs(this);
      UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_108);
      pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
      TVar5 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(&local_1b8);
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_220,L"UPolyEditInsertEdgeLoopActivity",
                          L"EdgeLoopInsertionTransactionName",L"Edge Loop Insertion");
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(FText_const_&,TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>,UE::Geometry::FGroupTopologySelection_const_&)>
      ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(FText_const_&,TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>,UE::Geometry::FGroupTopologySelection_const_&)>
                    *)&pUVar1->EmitCurrentMeshChangeAndUpdate,pFVar6,TVar5,&local_108);
      if (local_220.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_220.TextData.Reference + 0x10))();
      }
      UE::Geometry::FGroupTopologySelection::~FGroupTopologySelection(&local_108);
      UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(&local_1b8);
    }
    (this->PreviewEdges).ArrayNum = 0;
    if ((this->PreviewEdges).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->PreviewEdges).AllocatorInstance,0,&(this->PreviewEdges).ArrayMax);
    }
    (this->ProblemTopologyEdges).ArrayNum = 0;
    if ((this->ProblemTopologyEdges).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->ProblemTopologyEdges).AllocatorInstance,0,
                 &(this->ProblemTopologyEdges).ArrayMax);
    }
    (this->ProblemTopologyVerts).ArrayNum = 0;
    if ((this->ProblemTopologyVerts).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,&(this->ProblemTopologyVerts).AllocatorInstance,0,
                 &(this->ProblemTopologyVerts).ArrayMax);
    }
    this->bWaitingForInsertionCompletion = false;
  }
  return;
}

// UpdateComputeInputs @ 14cd82860

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
UPolyEditInsertEdgeLoopActivity::UpdateComputeInputs(UPolyEditInsertEdgeLoopActivity *this)

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

// UpdateHoveredItem @ 14cd82e00

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
UPolyEditInsertEdgeLoopActivity::UpdateHoveredItem
          (UPolyEditInsertEdgeLoopActivity *this,TRay<double> *param_1)

{
  int *piVar1;
  double *pdVar2;
  EEdgeLoopPositioningMode EVar3;
  UPolyEditActivityContext *pUVar4;
  UEdgeLoopInsertionProperties *pUVar5;
  code *pcVar6;
  undefined1 auVar7 [12];
  double dVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  FGroupTopology *pFVar13;
  FDynamicMesh3 *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  bool bVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  double dVar23;
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
  double dVar43;
  double dVar48;
  undefined4 uVar50;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar49;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar51;
  int iVar52;
  double dVar53;
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar59;
  double dVar60;
  undefined1 auVar61 [16];
  double dVar64;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined4 uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auStackY_378 [32];
  uint local_338 [2];
  undefined1 local_330 [16];
  double local_320;
  double dStack_318;
  double local_310;
  TVector<double>_u_0 local_308;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_290;
  TVector<double>_u_0 local_278;
  FGroupEdge local_258;
  undefined1 local_208 [16];
  double local_1f8;
  TVector<double> local_1f0;
  double local_1c8;
  FGroupTopologySelection local_1b8;
  ulonglong local_c8;
  
  dVar8 = __real_3e45798ee0000000;
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_378;
  dVar43 = (this->TargetTransform).Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar48 = (this->TargetTransform).Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar54 = (this->TargetTransform).Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar53 = (this->TargetTransform).Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  auVar36._8_4_ = SUB84(dVar48,0);
  auVar36._0_8_ = dVar43;
  uVar50 = (undefined4)((ulonglong)dVar48 >> 0x20);
  auVar36._12_4_ = uVar50;
  auVar38._8_4_ = SUB84(dVar48,0);
  auVar38._0_8_ = dVar43;
  auVar38._12_4_ = uVar50;
  auVar27._8_4_ = SUB84(dVar53,0);
  auVar27._0_8_ = dVar54;
  auVar27._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
  auVar39 = blendpd(auVar38,auVar27,2);
  auVar27 = *(undefined1 (*) [16])&(param_1->Direction).field0_0x0;
  dVar65 = auVar36._8_8_;
  auVar68._8_4_ = SUB84(dVar54,0);
  auVar68._0_8_ = dVar65;
  auVar68._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
  dVar23 = (param_1->Direction).field0_0x0._s_0.Z;
  dVar49 = auVar27._8_8_;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = dVar23;
  auVar32 = blendpd(auVar27,auVar56,2);
  auVar74._0_8_ = dVar49 * dVar43 - dVar65 * auVar27._0_8_;
  auVar74._8_8_ = dVar23 * dVar48 - auVar68._8_8_ * dVar49;
  auVar61._8_4_ = SUB84(auVar74._8_8_,0);
  auVar61._0_8_ = auVar74._0_8_;
  auVar61._12_4_ = (int)((ulonglong)auVar74._8_8_ >> 0x20);
  auVar33._0_8_ = auVar32._0_8_ * dVar54 - auVar39._0_8_ * dVar23;
  auVar33._8_8_ = auVar32._8_8_ * dVar53 - auVar39._8_8_ * 0.0;
  dVar60 = auVar61._8_8_ + auVar61._8_8_;
  dVar64 = auVar33._0_8_ + auVar33._0_8_;
  auVar32 = blendpd(auVar74,auVar33,2);
  uVar50 = SUB84(dVar64,0);
  auVar66._8_4_ = uVar50;
  auVar66._0_8_ = dVar60;
  uVar51 = (undefined4)((ulonglong)dVar64 >> 0x20);
  auVar66._12_4_ = uVar51;
  auVar75._0_8_ = auVar32._0_8_ + auVar32._0_8_;
  auVar75._8_8_ = auVar32._8_8_ + auVar32._8_8_;
  auVar24._8_4_ = uVar50;
  auVar24._0_8_ = dVar60;
  auVar24._12_4_ = uVar51;
  auVar32 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.XY.m128d_f64;
  auVar55._8_4_ = uVar50;
  auVar55._0_8_ = dVar60;
  auVar55._12_4_ = uVar51;
  auVar7._4_8_ = dVar48;
  auVar7._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
  auVar44._0_8_ = auVar7._0_8_ << 0x20;
  auVar44._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar44._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar67._0_8_ = auVar66._8_8_ * dVar43 - dVar60 * dVar65;
  auVar67._8_8_ = auVar75._0_8_ * dVar48 - auVar24._8_8_ * dVar54;
  auVar56 = blendpd(auVar55,auVar75,2);
  auVar25._8_4_ = SUB84(auVar75._8_8_,0);
  auVar25._0_8_ = auVar75._0_8_;
  auVar25._12_4_ = (int)((ulonglong)auVar75._8_8_ >> 0x20);
  auVar57._0_8_ = auVar56._0_8_ * dVar54 - auVar75._0_8_ * auVar39._0_8_;
  auVar57._8_8_ = auVar56._8_8_ * dVar53 - auVar25._8_8_ * auVar39._8_8_;
  auVar39 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.ZW.m128d_f64;
  auVar45._8_8_ = auVar44._8_8_;
  auVar45._0_8_ = auVar39._0_8_;
  local_2c8 = 0;
  uStack_2c0 = 0;
  auVar56 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar32);
  lVar20 = -(ulonglong)
            ((double)CONCAT44(auVar32._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar32._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar22 = -(ulonglong)
            ((double)CONCAT44(auVar32._12_4_ & _UNK_15061cc8c,auVar32._8_4_ & _UNK_15061cc88) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  lVar21 = -(ulonglong)
            ((double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ & auVar39._4_4_,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff & auVar39._0_4_) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar26._8_4_ = SUB84(auVar67._8_8_,0);
  auVar26._0_8_ = auVar67._0_8_;
  auVar26._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
  auVar68 = blendpd(auVar67,auVar57,2);
  local_278._s_0.X =
       (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar56._4_4_,
                        ~(uint)lVar20 & auVar56._0_4_) *
       (dVar60 * dVar53 + auVar27._0_8_ + auVar26._8_8_);
  dVar54 = (double)CONCAT44(~(uint)((ulonglong)lVar22 >> 0x20) & auVar56._12_4_,
                            ~(uint)lVar22 & auVar56._8_4_) *
           (dVar64 * dVar53 + dVar49 + auVar57._0_8_);
  uVar51 = SUB84(dVar54,0);
  iVar52 = (int)((ulonglong)dVar54 >> 0x20);
  dVar43 = (param_1->Origin).field0_0x0._s_0.X - (this->TargetTransform).Translation.XY.m128d_f64[0]
  ;
  dVar48 = (param_1->Origin).field0_0x0._s_0.Y - (this->TargetTransform).Translation.XY.m128d_f64[1]
  ;
  uVar73 = (undefined4)((ulonglong)dVar48 >> 0x20);
  auVar27 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar45);
  auVar70._8_4_ = SUB84(dVar48,0);
  auVar70._0_8_ = dVar43;
  auVar70._12_4_ = uVar73;
  dVar64 = (this->TargetTransform).Rotation.XY.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  dVar49 = (this->TargetTransform).Rotation.XY.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  dVar60 = (param_1->Origin).field0_0x0._s_0.Z - (this->TargetTransform).Translation.ZW.m128d_f64[0]
  ;
  auVar40._8_4_ = SUB84(dVar49,0);
  auVar40._0_8_ = dVar64;
  uVar50 = (undefined4)((ulonglong)dVar49 >> 0x20);
  auVar40._12_4_ = uVar50;
  local_330._8_4_ = uVar51;
  local_330._0_8_ = local_278._s_0.X;
  local_330._12_4_ = iVar52;
  local_208._8_4_ = uVar51;
  local_208._0_8_ = local_278._s_0.X;
  local_208._12_4_ = iVar52;
  dVar54 = (this->TargetTransform).Rotation.ZW.m128d_f64[0] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  dVar65 = (this->TargetTransform).Rotation.ZW.m128d_f64[1] *
           GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  uVar51 = (undefined4)((ulonglong)dVar65 >> 0x20);
  auVar76._8_8_ = 0;
  auVar76._0_8_ = dVar60;
  auVar34._8_4_ = SUB84(dVar48,0);
  auVar34._0_8_ = dVar43;
  auVar34._12_4_ = uVar73;
  auVar32._8_4_ = SUB84(dVar65,0);
  auVar32._0_8_ = dVar54;
  auVar32._12_4_ = uVar51;
  auVar39 = blendpd(auVar40,auVar32,2);
  auVar32 = blendpd(auVar34,auVar76,2);
  local_278._s_0.Z =
       (dVar23 + auVar75._0_8_ * dVar53 + auVar68._0_8_) *
       (double)CONCAT44(~(uint)((ulonglong)lVar21 >> 0x20) & auVar27._4_4_,
                        ~(uint)lVar21 & auVar27._0_4_);
  auVar37._8_4_ = SUB84(dVar49,0);
  auVar37._0_8_ = dVar64;
  auVar37._12_4_ = uVar50;
  auVar69._8_4_ = SUB84(dVar65,0);
  auVar69._0_8_ = dVar54;
  auVar69._12_4_ = uVar51;
  dVar23 = auVar37._8_8_;
  auVar28._8_4_ = SUB84(dVar54,0);
  auVar28._0_8_ = dVar23;
  auVar28._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
  auVar71._0_8_ = auVar70._8_8_ * dVar64 - dVar23 * dVar43;
  auVar71._8_8_ = dVar60 * dVar49 - auVar28._8_8_ * dVar48;
  auVar58._8_4_ = SUB84(auVar71._8_8_,0);
  auVar58._0_8_ = auVar71._0_8_;
  auVar58._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
  auVar35._0_8_ = auVar32._0_8_ * dVar54 - auVar39._0_8_ * dVar60;
  auVar35._8_8_ = auVar32._8_8_ * dVar65 - auVar39._8_8_ * 0.0;
  dVar53 = auVar58._8_8_ + auVar58._8_8_;
  dVar59 = auVar35._0_8_ + auVar35._0_8_;
  auVar32 = blendpd(auVar71,auVar35,2);
  auVar27 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.XY.m128d_f64;
  uVar50 = SUB84(dVar59,0);
  auVar62._8_4_ = uVar50;
  auVar62._0_8_ = dVar53;
  uVar51 = (undefined4)((ulonglong)dVar59 >> 0x20);
  auVar62._12_4_ = uVar51;
  auVar29._8_4_ = uVar50;
  auVar29._0_8_ = dVar53;
  auVar29._12_4_ = uVar51;
  auVar56 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar27);
  auVar72._0_8_ = auVar32._0_8_ + auVar32._0_8_;
  auVar72._8_8_ = auVar32._8_8_ + auVar32._8_8_;
  auVar46._8_4_ = uVar50;
  auVar46._0_8_ = dVar53;
  auVar46._12_4_ = uVar51;
  auVar63._0_8_ = auVar62._8_8_ * dVar64 - dVar53 * dVar23;
  auVar63._8_8_ = auVar72._0_8_ * dVar49 - auVar29._8_8_ * dVar54;
  auVar32 = blendpd(auVar46,auVar72,2);
  auVar30._8_4_ = SUB84(auVar72._8_8_,0);
  auVar30._0_8_ = auVar72._0_8_;
  auVar30._12_4_ = (int)((ulonglong)auVar72._8_8_ >> 0x20);
  auVar47._0_8_ = auVar32._0_8_ * dVar54 - auVar72._0_8_ * auVar39._0_8_;
  auVar47._8_8_ = auVar32._8_8_ * dVar65 - auVar30._8_8_ * auVar39._8_8_;
  auVar32 = *(undefined1 (*) [16])(this->TargetTransform).Scale3D.ZW.m128d_f64;
  auVar41._0_8_ =
       (double)CONCAT44(auVar27._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        auVar27._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  auVar41._8_4_ = auVar27._8_4_ & _UNK_15061cc88;
  auVar41._12_4_ = auVar27._12_4_ & _UNK_15061cc8c;
  lVar20 = -(ulonglong)(auVar41._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
  lVar21 = -(ulonglong)(auVar41._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
  auVar31._8_4_ = SUB84(auVar63._8_8_,0);
  auVar31._0_8_ = auVar63._0_8_;
  auVar31._12_4_ = (int)((ulonglong)auVar63._8_8_ >> 0x20);
  auVar42._0_8_ =
       (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar56._4_4_,
                        ~(uint)lVar20 & auVar56._0_4_);
  auVar42._8_4_ = ~(uint)lVar21 & auVar56._8_4_;
  auVar42._12_4_ = ~(uint)((ulonglong)lVar21 >> 0x20) & auVar56._12_4_;
  lVar20 = -(ulonglong)
            ((double)CONCAT44(auVar32._4_4_ & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              auVar32._0_4_ & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
            (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
  auVar39._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
  auVar39._0_8_ = auVar32._0_8_;
  auVar39._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
  auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar39);
  local_2e8 = auVar42._0_8_ * (dVar53 * auVar69._8_8_ + dVar43 + auVar31._8_8_);
  dStack_2e0 = auVar42._8_8_ * (dVar59 * dVar65 + dVar48 + auVar47._0_8_);
  auVar27 = blendpd(auVar63,auVar47,2);
  local_2d8 = (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar32._4_4_,
                               ~(uint)lVar20 & auVar32._0_4_) *
              (auVar72._0_8_ * auVar69._8_8_ + dVar60 + auVar27._0_8_);
  local_278._s_0.Y = (double)local_330._8_8_;
  local_290._s_0.X = local_2e8;
  local_290._s_0.Y = dStack_2e0;
  local_290._s_0.Z = local_2d8;
  local_1f8 = local_278._s_0.Z;
  UE::Math::TVector<double>::Normalize((TVector<double> *)&local_278._s_0,__real_3e45798ee0000000);
  UE::Geometry::FGroupTopologySelection::FGroupTopologySelection(&local_1b8);
  (this->TopologySelectorSettings).bHitBackFaces =
       *(bool *)(((((this->ActivityContext).field0_0x0.DebugPtr)->SelectionMechanic).field0_0x0.
                 DebugPtr)->_padding_ + 0xb5);
  if (((this->TopologySelector).Object == (FMeshTopologySelector *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  bVar9 = FMeshTopologySelector::FindSelectedElement
                    ((this->TopologySelector).Object,&this->TopologySelectorSettings,
                     (TRay<double> *)&local_290._s_0,&local_1b8,(TVector<double> *)&local_2a8._s_0,
                     &local_1f0,(int *)local_338);
  if (!bVar9) {
    ClearPreview(this);
    bVar9 = false;
    goto LAB_14cd83769;
  }
  uVar11 = UE::Geometry::FGroupTopologySelection::GetASelectedEdgeID(&local_1b8);
  pUVar4 = (this->ActivityContext).field0_0x0.DebugPtr;
  if (((pUVar4->CurrentTopology).Object == (FGroupTopology *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  pFVar13 = (pUVar4->CurrentTopology).Object;
  uVar16 = 0;
  if ((int)uVar11 < (pFVar13->Edges).ArrayNum) {
    uVar16 = ~uVar11 >> 0x1f;
  }
  if ((uVar16 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar6 = (code *)swi(3);
    uVar10 = (*pcVar6)();
    return (bool)uVar10;
  }
  UE::Geometry::FGroupTopology::FGroupEdge::FGroupEdge
            (&local_258,
             (FGroupEdge *)((pFVar13->Edges).AllocatorInstance.Data + (longlong)(int)uVar11 * 0x50))
  ;
  if (local_258.EndpointCorners.field0_0x0._s_0.A == -1) {
LAB_14cd833be:
    ClearPreview(this);
    bVar9 = false;
  }
  else {
    pUVar5 = (this->Settings).field0_0x0.DebugPtr;
    if (pUVar5->PositionMode != Even) {
      if (pUVar5->bInteractive != false) {
        lVar20 = (longlong)(int)local_338[0];
        uVar16 = 0;
        if ((int)local_338[0] < local_258.Span.Vertices.ArrayNum) {
          uVar16 = ~local_338[0] >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        uVar16 = *(uint *)(local_258.Span.Vertices.AllocatorInstance.Data + lVar20 * 4);
        uVar18 = local_338[0] + 1;
        uVar12 = 0;
        if ((int)uVar18 < local_258.Span.Vertices.ArrayNum) {
          uVar12 = ~uVar18 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        uVar12 = *(uint *)(local_258.Span.Vertices.AllocatorInstance.Data +
                          (longlong)(int)uVar18 * 4);
        pFVar14 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->
                            (&((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh);
        uVar15 = (ulonglong)(uVar16 & 0x1ff);
        lVar20 = *(longlong *)
                  ((pFVar14->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar16 >> 9) * 8)
        ;
        dVar23 = *(double *)(lVar20 + 0x10 + uVar15 * 0x18);
        pdVar2 = (double *)(lVar20 + uVar15 * 0x18);
        dVar54 = *pdVar2;
        dVar53 = pdVar2[1];
        local_2b8 = dVar23;
        pFVar14 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->
                            (&((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh);
        uVar15 = (ulonglong)(uVar12 & 0x1ff);
        lVar20 = *(longlong *)
                  ((pFVar14->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8)
        ;
        pdVar2 = (double *)(lVar20 + uVar15 * 0x18);
        local_1c8 = *(double *)(lVar20 + 0x10 + uVar15 * 0x18);
        local_308._s_0.Z = local_1c8 - local_2b8;
        local_308._s_0.X = *pdVar2 - dVar54;
        local_308._s_0.Y = pdVar2[1] - dVar53;
        local_320 = dVar54;
        dStack_318 = dVar53;
        local_310 = dVar23;
        UE::Math::TVector<double>::Normalize((TVector<double> *)&local_308._s_0,dVar8);
        dVar54 = (local_2a8._s_0.Z - local_310) * local_308._s_0.Z;
        local_330 = ZEXT816(0);
        dVar65 = (local_2a8._s_0.X - local_320) * local_308._s_0.X;
        dVar53 = (local_2a8._s_0.Y - dStack_318) * local_308._s_0.Y;
        pFVar13 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator->
                            (&((this->ActivityContext).field0_0x0.DebugPtr)->CurrentTopology);
        dVar23 = UE::Geometry::FGroupTopology::GetEdgeArcLength
                           (pFVar13,uVar11,(TArray<double,TSizedDefaultAllocator<32>_> *)local_330);
        uVar16 = 0;
        if ((int)local_338[0] < (int)local_330._8_4_) {
          uVar16 = ~local_338[0] >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          uVar10 = (*pcVar6)();
          return (bool)uVar10;
        }
        pUVar5 = (this->Settings).field0_0x0.DebugPtr;
        dVar54 = dVar54 + *(double *)(local_330._0_8_ + (longlong)(int)local_338[0] * 8) +
                 dVar53 + dVar65;
        if (pUVar5->bFlipOffsetDirection != false) {
          dVar54 = dVar23 - dVar54;
        }
        if ((dVar54 <= pUVar5->VertexTolerance) ||
           ((EVar3 = pUVar5->PositionMode, EVar3 == ProportionOffset &&
            ((double)CONCAT44((uint)((ulonglong)(dVar54 - dVar23) >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar54 - dVar23,0) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             pUVar5->VertexTolerance)))) {
          ClearPreview(this);
          bVar9 = false;
          pFVar17 = (FScriptContainerElement *)local_330._0_8_;
        }
        else {
          if (EVar3 == ProportionOffset) {
            dVar54 = dVar54 / dVar23;
          }
          if ((this->InputGroupEdgeID != uVar11) ||
             ((EVar3 != Even && (dVar54 != this->InteractiveInputLength)))) {
            this->InteractiveInputLength = dVar54;
            this->InputGroupEdgeID = uVar11;
            piVar1 = &(this->PreviewEdges).ArrayMax;
            (this->PreviewEdges).ArrayNum = 0;
            if (*piVar1 < 0) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x30,8,0,&(this->PreviewEdges).AllocatorInstance,0,piVar1);
            }
            UMeshOpPreviewWithBackgroundCompute::InvalidateResult
                      ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)
            ;
          }
          bVar9 = true;
          pFVar17 = (FScriptContainerElement *)local_330._0_8_;
        }
        if (pFVar17 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar17);
        }
        goto LAB_14cd83737;
      }
      pFVar13 = TSharedPtr<UE::Geometry::FGroupTopology,1>::operator->
                          (&((this->ActivityContext).field0_0x0.DebugPtr)->CurrentTopology);
      dVar23 = UE::Geometry::FGroupTopology::GetEdgeArcLength
                         (pFVar13,uVar11,(TArray<double,TSizedDefaultAllocator<32>_> *)0x0);
      pUVar5 = (this->Settings).field0_0x0.DebugPtr;
      if (pUVar5->PositionMode == DistanceOffset) {
        dVar54 = pUVar5->DistanceOffset;
        if (dVar23 < dVar54) goto LAB_14cd833be;
        bVar9 = dVar54 == pUVar5->VertexTolerance;
        bVar19 = dVar54 < pUVar5->VertexTolerance;
      }
      else {
        if (pUVar5->PositionMode != ProportionOffset) goto LAB_14cd833cd;
        dVar23 = dVar23 * pUVar5->ProportionOffset - dVar23;
        dVar23 = (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        bVar9 = dVar23 == pUVar5->VertexTolerance;
        bVar19 = dVar23 < pUVar5->VertexTolerance;
      }
      if (bVar19 || bVar9) goto LAB_14cd833be;
    }
LAB_14cd833cd:
    if (this->InputGroupEdgeID != uVar11) {
      this->InputGroupEdgeID = uVar11;
      (this->PreviewEdges).ArrayNum = 0;
      if ((this->PreviewEdges).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&(this->PreviewEdges).AllocatorInstance,0,&(this->PreviewEdges).ArrayMax
                  );
      }
      UMeshOpPreviewWithBackgroundCompute::InvalidateResult
                ((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr);
    }
    bVar9 = true;
  }
LAB_14cd83737:
  if (local_258.Span.BowtieVertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Span.BowtieVertices.AllocatorInstance.Data);
  }
  if (local_258.Span.Edges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Span.Edges.AllocatorInstance.Data);
  }
  if (local_258.Span.Vertices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Span.Vertices.AllocatorInstance.Data);
  }
LAB_14cd83769:
  local_1b8.SelectedEdgeIDs.HashSize = 0;
  if (local_1b8.SelectedEdgeIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1b8.SelectedEdgeIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1b8.SelectedEdgeIDs.Elements);
  local_1b8.SelectedCornerIDs.HashSize = 0;
  if (local_1b8.SelectedCornerIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1b8.SelectedCornerIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1b8.SelectedCornerIDs.Elements);
  local_1b8.SelectedGroupIDs.HashSize = 0;
  if (local_1b8.SelectedGroupIDs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1b8.SelectedGroupIDs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_1b8);
  return bVar9;
}

