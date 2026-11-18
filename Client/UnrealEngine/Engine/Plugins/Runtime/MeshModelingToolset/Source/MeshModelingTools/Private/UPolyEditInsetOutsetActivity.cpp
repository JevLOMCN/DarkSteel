// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 24

// StaticClass @ 14cd40ef0

UClass * __cdecl UPolyEditInsetOutsetActivity::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditInsetOutsetActivity",
               &Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.InnerSingleton,
               StaticRegisterNativesUPolyEditInsetOutsetActivity,0x70,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditInsetOutsetActivity>,
               InternalVTableHelperCtorCaller<UPolyEditInsetOutsetActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.InnerSingleton;
}

// UPolyEditInsetOutsetActivity @ 14cd50d40

UPolyEditInsetOutsetActivity * __thiscall
UPolyEditInsetOutsetActivity::UPolyEditInsetOutsetActivity
          (UPolyEditInsetOutsetActivity *this,FVTableHelper *param_1)

{
  UInteractiveToolActivity::UInteractiveToolActivity((UInteractiveToolActivity *)this,param_1);
  this->UVScaleFactor = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  (this->Settings).field0_0x0.DebugPtr = (UPolyEditInsetOutsetProperties *)0x0;
  this->bIsRunning = false;
  this->bPreviewUpdatePending = false;
  (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  (this->CurveDistMechanic).field0_0x0.DebugPtr = (USpatialCurveDistanceMechanic *)0x0;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  return this;
}

// UPolyEditInsetOutsetActivity @ 14cd50da0

UPolyEditInsetOutsetActivity * __thiscall
UPolyEditInsetOutsetActivity::UPolyEditInsetOutsetActivity(UPolyEditInsetOutsetActivity *this)

{
  UInteractiveToolActivity::UInteractiveToolActivity((UInteractiveToolActivity *)this);
  this->UVScaleFactor = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UInteractiveToolActivity__;
  this->_padding_ = (longlong)&_vftable__for__IClickBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  (this->Settings).field0_0x0.DebugPtr = (UPolyEditInsetOutsetProperties *)0x0;
  this->bIsRunning = false;
  this->bPreviewUpdatePending = false;
  (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  (this->CurveDistMechanic).field0_0x0.DebugPtr = (USpatialCurveDistanceMechanic *)0x0;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  return this;
}

// ~UPolyEditInsetOutsetActivity @ 14cd53770

void __thiscall
UPolyEditInsetOutsetActivity::~UPolyEditInsetOutsetActivity(UPolyEditInsetOutsetActivity *this)

{
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7IModifierToggleBehaviorTarget__6B_;
  this->_padding_ = (longlong)&___7UInteractiveToolActivity__6B_;
  UInteractionMechanic::~UInteractionMechanic((UInteractionMechanic *)this);
  return;
}

// ApplyInset @ 14cd5dad0

void __thiscall UPolyEditInsetOutsetActivity::ApplyInset(UPolyEditInsetOutsetActivity *this)

{
  UPolyEditActivityContext *pUVar1;
  UPolygonSelectionMechanic *pUVar2;
  UPolyEditInsetOutsetProperties *pUVar3;
  FDynamicMesh3 *pFVar4;
  code *pcVar5;
  ForAnyElementType _Src;
  int iVar6;
  TUniquePtr<UE::Geometry::FDynamicMeshChangeTracker,TDefaultDelete<UE::Geometry::FDynamicMeshChangeTracker>_>
  this_00;
  bool bVar7;
  FDynamicMeshChangeTracker *this_01;
  FDynamicMeshChangeTracker *pFVar8;
  TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>
  TVar9;
  FText *pFVar10;
  longlong lVar11;
  TArray<int,TSizedDefaultAllocator<32>_> local_a8;
  FInsetMeshRegion local_98;
  FText local_28;
  
  if (((this->CurveDistMechanic).field0_0x0.DebugPtr == (USpatialCurveDistanceMechanic *)0x0) ||
     ((this->EditPreview).field0_0x0.DebugPtr == (UPolyEditPreviewMesh *)0x0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurveDistMechanic != nullptr && EditPreview != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\MeshModelingTools\\Private\\ToolActivities\\PolyEditInsetOutsetActivity.cpp"
                       ,0xac,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
  pFVar8 = (FDynamicMeshChangeTracker *)0x0;
  pUVar2 = (pUVar1->SelectionMechanic).field0_0x0.DebugPtr;
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  if ((pUVar1->CurrentTopology).Object == (FGroupTopology *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  UE::Geometry::FGroupTopology::GetSelectedTriangles
            ((pUVar1->CurrentTopology).Object,(FGroupTopologySelection *)&pUVar2->_padding_,
             &local_a8);
  UE::Geometry::FInsetMeshRegion::FInsetMeshRegion
            (&local_98,(((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh).Object);
  _Src.Data = local_a8.AllocatorInstance.Data;
  iVar6 = local_a8.ArrayNum;
  lVar11 = (longlong)local_a8.ArrayNum;
  local_98.UVScaleFactor = this->UVScaleFactor;
  local_98.Triangles.ArrayNum = local_a8.ArrayNum;
  if ((local_a8.ArrayNum == 0) && (local_98.Triangles.ArrayMax == 0)) {
    local_98.Triangles.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,local_a8.ArrayNum,local_98.Triangles.ArrayMax,
               &local_98.Triangles.AllocatorInstance,local_a8.ArrayNum,&local_98.Triangles.ArrayMax)
    ;
    if (iVar6 != 0) {
      memcpy(local_98.Triangles.AllocatorInstance.Data,_Src.Data,lVar11 << 2);
    }
  }
  pUVar3 = (this->Settings).field0_0x0.DebugPtr;
  local_98.InsetDistance = *(double *)((longlong)(this->CurveDistMechanic).field0_0x0 + 0x60);
  if (pUVar3->bOutset != false) {
    local_98.InsetDistance =
         (double)CONCAT44((uint)((ulonglong)local_98.InsetDistance >> 0x20) ^
                          __xmm_80000000000000008000000000000000._4_4_,
                          SUB84(local_98.InsetDistance,0) ^
                          (uint)__xmm_80000000000000008000000000000000);
  }
  if (pUVar3->bOutset == false) {
    local_98.bReproject = pUVar3->bReproject;
  }
  else {
    local_98.bReproject = false;
  }
  local_98.Softness = pUVar3->Softness;
  local_98.bSolveRegionInteriors = pUVar3->bBoundaryOnly == false;
  local_98.AreaCorrection = pUVar3->AreaScale;
  pFVar4 = (((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh).Object;
  this_01 = ::operator_new(0xa8);
  if (this_01 != (FDynamicMeshChangeTracker *)0x0) {
    pFVar8 = UE::Geometry::FDynamicMeshChangeTracker::FDynamicMeshChangeTracker(this_01,pFVar4);
  }
  this_00.Ptr = local_98.ChangeTracker.Ptr;
  bVar7 = local_98.ChangeTracker.Ptr != (FDynamicMeshChangeTracker *)0x0;
  local_98.ChangeTracker.Ptr = pFVar8;
  if (bVar7) {
    UE::Geometry::FDynamicMeshChangeTracker::~FDynamicMeshChangeTracker(this_00.Ptr);
    ::operator_delete(this_00.Ptr,0xa8);
  }
  UE::Geometry::FDynamicMeshChangeTracker::BeginChange(local_98.ChangeTracker.Ptr);
  UE::Geometry::FInsetMeshRegion::Apply(&local_98);
  pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
  if ((pUVar1->CurrentMesh).Object == (FDynamicMesh3 *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  UE::Geometry::FMeshNormals::QuickComputeVertexNormalsForTriangles
            ((pUVar1->CurrentMesh).Object,&local_98.AllModifiedTriangles,true,true,false);
  pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
  TVar9 = UE::Geometry::FDynamicMeshChangeTracker::EndChange(local_98.ChangeTracker.Ptr);
  pFVar10 = FText::AsLocalizable_Advanced_LocText
                      (&local_28,L"UPolyEditInsetOutsetActivity",L"PolyMeshInsetOutsetChange",
                       L"Inset/Outset");
  UE::Core::Private::Function::
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(FText_const_&,TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>,UE::Geometry::FGroupTopologySelection_const_&)>
  ::operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,void___cdecl(FText_const_&,TUniquePtr<UE::Geometry::FDynamicMeshChange,TDefaultDelete<UE::Geometry::FDynamicMeshChange>_>,UE::Geometry::FGroupTopologySelection_const_&)>
                *)&pUVar1->EmitCurrentMeshChangeAndUpdate,pFVar10,TVar9,
               (FGroupTopologySelection *)&pUVar2->_padding_);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  UE::Geometry::FInsetMeshRegion::~FInsetMeshRegion(&local_98);
  if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// BeginHoverSequenceHitTest @ 14cd5f810

FInputRayHit * __thiscall
UPolyEditInsetOutsetActivity::BeginHoverSequenceHitTest
          (UPolyEditInsetOutsetActivity *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  __return_storage_ptr__->bHit = SUB81(this->_padding_,0);
  return __return_storage_ptr__;
}

// BeginInset @ 14cd5f890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall UPolyEditInsetOutsetActivity::BeginInset(UPolyEditInsetOutsetActivity *this)

{
  undefined8 *puVar1;
  int iVar2;
  UPolyEditActivityContext *pUVar3;
  UPolygonSelectionMechanic *pUVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined1 uVar11;
  uint uVar12;
  int iVar13;
  UInteractiveTool *pUVar14;
  UPolyEditPreviewMesh *this_00;
  UClass *pUVar15;
  USpatialCurveDistanceMechanic *pUVar16;
  UObject *pUVar17;
  longlong *plVar18;
  FText *pFVar19;
  TAxisAlignedBox3<double> *pTVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  double dVar25;
  undefined1 auStack_628 [32];
  undefined8 *local_608;
  FScriptContainerElement *local_600;
  longlong local_5f8;
  longlong local_5f0;
  undefined8 local_5e8;
  ForAnyElementType local_5d8;
  undefined8 local_5d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_5c8;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  FText local_5a0;
  double local_590;
  double dStack_588;
  double local_580;
  TAxisAlignedBox3<double> local_578;
  FDynamicMesh3 local_548;
  undefined1 local_318 [128];
  longlong local_298;
  undefined8 uStack_290;
  longlong local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  longlong *plStack_270;
  undefined1 local_268 [104];
  longlong *local_200;
  ForAnyElementType local_1f8;
  undefined8 local_1f0;
  bool local_1e8;
  ForAnyElementType local_1e0;
  undefined8 local_1d8;
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_628;
  pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
  uVar21 = 0;
  pUVar4 = (pUVar3->SelectionMechanic).field0_0x0.DebugPtr;
  local_5c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5c8.ArrayNum = 0;
  local_5c8.ArrayMax = 0;
  if (((pUVar3->CurrentTopology).Object == (FGroupTopology *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return (bool)uVar11;
  }
  UE::Geometry::FGroupTopology::GetSelectedTriangles
            ((pUVar3->CurrentTopology).Object,(FGroupTopologySelection *)&pUVar4->_padding_,
             &local_5c8);
  UPreviewMesh::GetTransform
            ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
             PreviewMesh).field0_0x0.DebugPtr,&local_1c8);
  pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
  pUVar14 = (UInteractiveTool *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this_00 = UE::Geometry::PolyEditActivityUtil::CreatePolyEditPreviewMesh(pUVar14,pUVar3);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this_00 != (UPolyEditPreviewMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  (this->EditPreview).field0_0x0.DebugPtr = this_00;
  local_108.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_108.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_108.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_108.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_580 = local_1c8.Translation.ZW.m128d_f64[0];
  local_108.Translation.XY.m128d_f64[0] = local_1c8.Translation.XY.m128d_f64[0];
  local_108.Translation.XY.m128d_f64[1] = local_1c8.Translation.XY.m128d_f64[1];
  local_108.Translation.ZW.m128d_f64[0] = local_1c8.Translation.ZW.m128d_f64[0];
  local_108.Translation.ZW.m128d_f64[1] = 0.0;
  local_108.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_108.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_108.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_108.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_590 = local_1c8.Translation.XY.m128d_f64[0];
  dStack_588 = local_1c8.Translation.XY.m128d_f64[1];
  UPreviewMesh::SetTransform((UPreviewMesh *)this_00,&local_108);
  local_168.Rotation.XY.m128d_f64[0] = local_1c8.Rotation.XY.m128d_f64[0];
  local_168.Rotation.XY.m128d_f64[1] = local_1c8.Rotation.XY.m128d_f64[1];
  local_168.Rotation.ZW.m128d_f64[0] = local_1c8.Rotation.ZW.m128d_f64[0];
  local_168.Rotation.ZW.m128d_f64[1] = local_1c8.Rotation.ZW.m128d_f64[1];
  local_168.Scale3D.XY.m128d_f64[0] = local_1c8.Scale3D.XY.m128d_f64[0];
  local_168.Scale3D.XY.m128d_f64[1] = local_1c8.Scale3D.XY.m128d_f64[1];
  local_168.Scale3D.ZW.m128d_f64[0] = local_1c8.Scale3D.ZW.m128d_f64[0];
  local_168.Scale3D.ZW.m128d_f64[1] = local_1c8.Scale3D.ZW.m128d_f64[1];
  local_168.Translation.XY.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_168.Translation.XY.m128d_f64[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_168.Translation.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_168.Translation.ZW.m128d_f64[1] = 0.0;
  UPolyEditPreviewMesh::InitializeInsetType
            ((this->EditPreview).field0_0x0.DebugPtr,
             (((this->ActivityContext).field0_0x0.DebugPtr)->CurrentMesh).Object,&local_5c8,
             &local_168);
  UPreviewMesh::SetSecondaryBuffersVisibility
            ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
             PreviewMesh).field0_0x0.DebugPtr,false);
  UE::Geometry::FDynamicMesh3::FDynamicMesh3(&local_548);
  UPolyEditPreviewMesh::MakeInsetTypeTargetMesh((this->EditPreview).field0_0x0.DebugPtr,&local_548);
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar15 = Z_Construct_UClass_USpatialCurveDistanceMechanic_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_318,pUVar15);
  local_318._8_8_ = this;
  pUVar16 = (USpatialCurveDistanceMechanic *)
            StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_318);
  if (local_318._64_8_ != 0) {
    plVar18 = (longlong *)(local_318 + 0x50);
    if ((longlong *)local_318._104_8_ != (longlong *)0x0) {
      plVar18 = (longlong *)local_318._104_8_;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar16 != (USpatialCurveDistanceMechanic *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar16);
  }
  (this->CurveDistMechanic).field0_0x0.DebugPtr = pUVar16;
  pcVar5 = *(code **)(pUVar16->_padding_ + 0x2b0);
  pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar5)(pUVar16,pUVar17);
  pUVar16 = (this->CurveDistMechanic).field0_0x0.DebugPtr;
  local_298 = *(longlong *)&pUVar16->WorldPointSnapFunc;
  uVar9 = *(undefined8 *)&(pUVar16->WorldPointSnapFunc).field_0x8;
  local_288 = *(longlong *)&(pUVar16->WorldPointSnapFunc).field_0x10;
  uStack_280 = *(undefined8 *)&(pUVar16->WorldPointSnapFunc).field_0x18;
  uVar8 = *(undefined8 *)&(pUVar16->WorldPointSnapFunc).field_0x20;
  plStack_270 = *(longlong **)&(pUVar16->WorldPointSnapFunc).field_0x28;
  *(code **)&pUVar16->WorldPointSnapFunc =
       UE::Core::Private::Function::
       TFunctionRefCaller<`UPolyEditInsetOutsetActivity::BeginInset'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Math::TVector<double>_&>
       ::Call;
  *(undefined8 *)&(pUVar16->WorldPointSnapFunc).field_0x8 = uStack_290;
  *(undefined4 *)&(pUVar16->WorldPointSnapFunc).field_0x10 = 0x5298b140;
  *(undefined4 *)&(pUVar16->WorldPointSnapFunc).field_0x14 = 1;
  *(UPolyEditInsetOutsetActivity **)&(pUVar16->WorldPointSnapFunc).field_0x18 = this;
  *(undefined8 *)&(pUVar16->WorldPointSnapFunc).field_0x20 = local_278;
  *(undefined8 *)&(pUVar16->WorldPointSnapFunc).field_0x28 = 0;
  uStack_290 = uVar9;
  local_278 = uVar8;
  if (local_298 != 0) {
    plVar18 = &local_288;
    if (plStack_270 != (longlong *)0x0) {
      plVar18 = plStack_270;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  ((this->CurveDistMechanic).field0_0x0.DebugPtr)->CurrentDistance = 1.0;
  local_268._0_8_ = &local_548;
  local_268._8_8_ = (FEdgeLoop *)0x0;
  local_268._16_4_ = 0;
  local_268._20_4_ = 0;
  local_268._24_8_ = (FEdgeSpan *)0x0;
  local_268._32_4_ = 0;
  local_268._36_4_ = 0;
  local_268[0x28] = false;
  local_268[0x29] = false;
  local_268[0x2a] = false;
  local_268._44_4_ = Compute;
  local_268._48_4_ = ConvertToOpenSpan;
  local_268._64_8_ = 0;
  local_200 = (longlong *)0x0;
  local_1f8.Data = (FScriptContainerElement *)0x0;
  local_1f0._0_4_ = 0;
  local_1f0._4_4_ = 0;
  local_1e8 = false;
  local_1e0.Data = (FScriptContainerElement *)0x0;
  local_1d8._0_4_ = 0;
  local_1d8._4_4_ = 0;
  UE::Geometry::FMeshBoundaryLoops::Compute((FMeshBoundaryLoops *)local_268);
  if (local_268._16_4_ == 0) {
    pUVar17 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    plVar18 = (longlong *)(**(code **)(*(longlong *)pUVar17 + 0x2d8))(pUVar17);
    pcVar5 = *(code **)(*plVar18 + 0x360);
    pFVar19 = FText::AsLocalizable_Advanced_LocText
                        (&local_5a0,L"UPolyEditInsetOutsetActivity",L"InsetOutsetNoBorderMesssage",
                         L"Cannot inset or outset when selection has no border.");
    (*pcVar5)(plVar18,pFVar19,3);
    if (local_5a0.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_5a0.TextData.Reference + 0x10))();
    }
    bVar10 = false;
  }
  else {
    local_5d8.Data = (FScriptContainerElement *)0x0;
    local_5d0 = 0;
    if ((int)local_268._16_4_ < 1) {
      local_608 = (undefined8 *)0x0;
      local_600 = (FScriptContainerElement *)(longlong)(int)local_268._16_4_;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        uVar11 = (*pcVar5)();
        return (bool)uVar11;
      }
    }
    uVar8 = local_268._8_8_;
    iVar2 = *(int *)(local_268._8_8_ + 0x10);
    uVar24 = uVar21;
    if (0 < (longlong)iVar2) {
      do {
        uVar23 = (uint)uVar21;
        lVar22 = *(longlong *)uVar8;
        uVar12 = 0;
        if ((int)uVar23 < *(int *)(uVar8 + 0x10)) {
          uVar12 = ~uVar23 >> 0x1f;
        }
        if (uVar12 == 0) {
          local_608 = (undefined8 *)(longlong)(int)uVar23;
          local_600 = (FScriptContainerElement *)(longlong)*(int *)(uVar8 + 0x10);
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            uVar11 = (*pcVar5)();
            return (bool)uVar11;
          }
        }
        uVar12 = *(uint *)(*(longlong *)(uVar8 + 8) + uVar24 * 4);
        uVar21 = (ulonglong)(uVar12 & 0x1ff);
        lVar22 = *(longlong *)(*(longlong *)(lVar22 + 0x10) + (ulonglong)(uVar12 >> 9) * 8);
        puVar1 = (undefined8 *)(lVar22 + uVar21 * 0x18);
        local_5b8 = *puVar1;
        uStack_5b0 = puVar1[1];
        local_5a8 = *(undefined8 *)(lVar22 + 0x10 + uVar21 * 0x18);
        if (local_5d8.Data <= (FScriptContainerElement *)&local_5b8) {
          if ((FScriptContainerElement *)&local_5b8 <
              local_5d8.Data + (longlong)local_5d0._4_4_ * 0x18) {
            local_5f0 = (longlong)(int)local_5d0;
            local_5e8 = 0x18;
            local_608 = &local_5b8;
            local_600 = local_5d8.Data;
            local_5f8 = (longlong)local_5d0._4_4_;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar10) {
              pcVar5 = (code *)swi(3);
              uVar11 = (*pcVar5)();
              return (bool)uVar11;
            }
          }
        }
        if ((int)local_5d0 == local_5d0._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&local_5d8,(int *)((longlong)&local_5d0 + 4));
          local_5d0 = CONCAT44(local_5d0._4_4_,iVar13);
        }
        lVar22 = (longlong)(int)local_5d0;
        uVar21 = (ulonglong)(uVar23 + 1);
        uVar24 = uVar24 + 1;
        local_5d0 = CONCAT44(local_5d0._4_4_,(int)local_5d0 + 1);
        *(undefined8 *)(local_5d8.Data + lVar22 * 0x18) = local_5b8;
        *(undefined8 *)(local_5d8.Data + lVar22 * 0x18 + 8) = uStack_5b0;
        *(undefined8 *)(local_5d8.Data + lVar22 * 0x18 + 0x10) = local_5a8;
      } while ((longlong)uVar24 < (longlong)iVar2);
    }
    pUVar16 = (this->CurveDistMechanic).field0_0x0.DebugPtr;
    local_98 = ___xmm_3ff00000000000000000000000000000;
    uStack_90 = _UNK_15061cbc8;
    local_a8 = 0;
    uStack_a0 = 0;
    local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uStack_70 = 0;
    local_68 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    dStack_60 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    local_58 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    uStack_50 = 0;
    (**(code **)(pUVar16->_padding_ + 0x2e8))(pUVar16,&local_5d8,&local_a8);
    (**(code **)(this->_padding_ + 0x2d8))(this,(this->Settings).field0_0x0.DebugPtr);
    pUVar3 = (this->ActivityContext).field0_0x0.DebugPtr;
    if (((pUVar3->CurrentMesh).Object == (FDynamicMesh3 *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (bool)uVar11;
    }
    pTVar20 = UE::Geometry::FDynamicMesh3::GetBounds((pUVar3->CurrentMesh).Object,&local_578,false);
    dVar7 = (pTVar20->Max).field0_0x0._s_0.Z - (pTVar20->Min).field0_0x0._s_0.Z;
    dVar25 = (pTVar20->Max).field0_0x0._s_0.Y - (pTVar20->Min).field0_0x0._s_0.Y;
    dVar6 = (pTVar20->Max).field0_0x0._s_0.X - (pTVar20->Min).field0_0x0._s_0.X;
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
    }
    if (dVar25 <= 0.0) {
      dVar25 = 0.0;
    }
    if (dVar6 <= 0.0) {
      dVar6 = 0.0;
    }
    if (dVar7 <= dVar25) {
      dVar7 = dVar25;
    }
    if (dVar7 <= dVar6) {
      dVar7 = dVar6;
    }
    if (0.0 < (float)dVar7) {
      this->UVScaleFactor = __real_3f800000 / (float)dVar7;
    }
    bVar10 = true;
    this->bPreviewUpdatePending = true;
    if (local_5d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d8.Data);
    }
  }
  if (local_1e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data);
  }
  if (local_1f8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data);
  }
  if (local_268._64_8_ != 0) {
    plVar18 = (longlong *)(local_268 + 0x50);
    if (local_200 != (longlong *)0x0) {
      plVar18 = local_200;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  DestructItems<UE::Geometry::FEdgeSpan,int>((FEdgeSpan *)local_268._24_8_,local_268._32_4_);
  if ((FEdgeSpan *)local_268._24_8_ != (FEdgeSpan *)0x0) {
    FMemory::Free((void *)local_268._24_8_);
  }
  DestructItems<UE::Geometry::FEdgeLoop,int>((FEdgeLoop *)local_268._8_8_,local_268._16_4_);
  if ((FEdgeLoop *)local_268._8_8_ != (FEdgeLoop *)0x0) {
    FMemory::Free((void *)local_268._8_8_);
  }
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_548);
  if (local_5c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5c8.AllocatorInstance.Data);
  }
  return bVar10;
}

// CanAccept @ 14cd63000

bool __thiscall UPolyEditInsetOutsetActivity::CanAccept(UPolyEditInsetOutsetActivity *this)

{
  return true;
}

// CanStart @ 14cd63c70

bool __thiscall UPolyEditInsetOutsetActivity::CanStart(UPolyEditInsetOutsetActivity *this)

{
  UPolyEditActivityContext *pUVar1;
  UPolygonSelectionMechanic *pUVar2;
  
  pUVar1 = (this->ActivityContext).field0_0x0.DebugPtr;
  if (pUVar1 == (UPolyEditActivityContext *)0x0) {
    return false;
  }
  pUVar2 = (pUVar1->SelectionMechanic).field0_0x0.DebugPtr;
  return (int)pUVar2->_padding_ != *(int *)((longlong)&pUVar2->_padding_ + 4);
}

// Clear @ 14cd648e0

/* WARNING: Type propagation algorithm not settling */

void __thiscall UPolyEditInsetOutsetActivity::Clear(UPolyEditInsetOutsetActivity *this)

{
  UPolyEditPreviewMesh *this_00;
  
  this_00 = (this->EditPreview).field0_0x0.DebugPtr;
  if (this_00 != (UPolyEditPreviewMesh *)0x0) {
    UPreviewMesh::Disconnect((UPreviewMesh *)this_00);
    (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  }
  UPreviewMesh::SetSecondaryBuffersVisibility
            ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
             PreviewMesh).field0_0x0.DebugPtr,true);
  (this->CurveDistMechanic).field0_0x0.DebugPtr = (USpatialCurveDistanceMechanic *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00014cd6492c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->Settings).field0_0x0.DebugPtr,0);
  return;
}

// End @ 14cd68d20

/* WARNING: Type propagation algorithm not settling */

EToolActivityEndResult __thiscall
UPolyEditInsetOutsetActivity::End(UPolyEditInsetOutsetActivity *this,EToolShutdownType param_1)

{
  UPolyEditPreviewMesh *pUVar1;
  
  if (this->bIsRunning == false) {
    pUVar1 = (this->EditPreview).field0_0x0.DebugPtr;
    if (pUVar1 != (UPolyEditPreviewMesh *)0x0) {
      UPreviewMesh::Disconnect((UPreviewMesh *)pUVar1);
      (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
    }
    UPreviewMesh::SetSecondaryBuffersVisibility
              ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
               PreviewMesh).field0_0x0.DebugPtr,true);
    (this->CurveDistMechanic).field0_0x0.DebugPtr = (USpatialCurveDistanceMechanic *)0x0;
    (**(code **)(this->_padding_ + 0x2d8))(this,(this->Settings).field0_0x0.DebugPtr,0);
    return ErrorDuringEnd;
  }
  if (param_1 == Cancel) {
    pUVar1 = (this->EditPreview).field0_0x0.DebugPtr;
    if (pUVar1 != (UPolyEditPreviewMesh *)0x0) {
      UPreviewMesh::Disconnect((UPreviewMesh *)pUVar1);
      (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
    }
    UPreviewMesh::SetSecondaryBuffersVisibility
              ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
               PreviewMesh).field0_0x0.DebugPtr,true);
    (this->CurveDistMechanic).field0_0x0.DebugPtr = (USpatialCurveDistanceMechanic *)0x0;
    (**(code **)(this->_padding_ + 0x2d8))(this,(this->Settings).field0_0x0.DebugPtr,0);
    this->bIsRunning = false;
    return Cancelled;
  }
  ApplyInset(this);
  pUVar1 = (this->EditPreview).field0_0x0.DebugPtr;
  if (pUVar1 != (UPolyEditPreviewMesh *)0x0) {
    UPreviewMesh::Disconnect((UPreviewMesh *)pUVar1);
    (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  }
  UPreviewMesh::SetSecondaryBuffersVisibility
            ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
             PreviewMesh).field0_0x0.DebugPtr,true);
  (this->CurveDistMechanic).field0_0x0.DebugPtr = (USpatialCurveDistanceMechanic *)0x0;
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->Settings).field0_0x0.DebugPtr,0);
  this->bIsRunning = false;
  return Completed;
}

// GetPrivateStaticClass @ 14cd6e0a0

UClass * __cdecl UPolyEditInsetOutsetActivity::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"PolyEditInsetOutsetActivity",
               &Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.InnerSingleton,
               StaticRegisterNativesUPolyEditInsetOutsetActivity,0x70,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UPolyEditInsetOutsetActivity>,
               InternalVTableHelperCtorCaller<UPolyEditInsetOutsetActivity>,local_res8,
               UInteractiveToolActivity::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPolyEditInsetOutsetActivity.InnerSingleton;
}

// IsHitByClick @ 14cd71ab0

FInputRayHit * __thiscall
UPolyEditInsetOutsetActivity::IsHitByClick
          (UPolyEditInsetOutsetActivity *this,FInputRayHit *__return_storage_ptr__,
          FInputDeviceRay *param_1)

{
  FInputRayHit::FInputRayHit(__return_storage_ptr__);
  __return_storage_ptr__->bHit = SUB81(this->_padding_,0);
  return __return_storage_ptr__;
}

// IsRunning @ 14cd71bb0

bool __thiscall UPolyEditInsetOutsetActivity::IsRunning(UPolyEditInsetOutsetActivity *this)

{
  return this->bIsRunning;
}

// OnBeginHover @ 14cd74690

void __thiscall
UPolyEditInsetOutsetActivity::OnBeginHover
          (UPolyEditInsetOutsetActivity *this,FInputDeviceRay *param_1)

{
  return;
}

// OnClicked @ 14cd74c00

void __thiscall
UPolyEditInsetOutsetActivity::OnClicked(UPolyEditInsetOutsetActivity *this,FInputDeviceRay *param_1)

{
  TObjectPtr<UPolyEditInsetOutsetProperties> *this_00;
  UObject *this_01;
  UClass *pUVar1;
  longlong *plVar2;
  
  this_00 = &this[-1].Settings;
  if ((char)this->_padding_ != '\0') {
    ApplyInset((UPolyEditInsetOutsetActivity *)this_00);
    plVar2 = (longlong *)0x0;
    if ((UPreviewMesh *)this->_padding_ != (UPreviewMesh *)0x0) {
      UPreviewMesh::Disconnect((UPreviewMesh *)this->_padding_);
      this->_padding_ = 0;
    }
    UPreviewMesh::SetSecondaryBuffersVisibility
              (*(UPreviewMesh **)(*(longlong *)(this->_padding_ + 0x40) + 0x68),true);
    this->_padding_ = 0;
    (*(code *)(this_00->field0_0x0).DebugPtr[3]._padding_)(this_00,this->_padding_,0);
    *(undefined1 *)&this->_padding_ = 0;
    this_01 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this[-1].UVScaleFactor);
    if (this_01 != (UObject *)0x0) {
      pUVar1 = Z_Construct_UClass_UToolActivityHost_NoRegister();
      plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar1);
    }
    (**(code **)(*plVar2 + 0x10))(plVar2,this_00);
  }
  return;
}

// OnEndHover @ 14cd74e20

void __thiscall UPolyEditInsetOutsetActivity::OnEndHover(UPolyEditInsetOutsetActivity *this)

{
  return;
}

// OnUpdateHover @ 14cd76580

bool __thiscall
UPolyEditInsetOutsetActivity::OnUpdateHover
          (UPolyEditInsetOutsetActivity *this,FInputDeviceRay *param_1)

{
  longlong lVar1;
  
  (**(code **)(*(longlong *)this->_padding_ + 0x2f0))();
  lVar1 = this->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 1) = 1;
  return (bool)(char)lVar1;
}

// Render @ 14cd7acc0

void __thiscall
UPolyEditInsetOutsetActivity::Render
          (UPolyEditInsetOutsetActivity *this,IToolsContextRenderAPI *param_1)

{
  USpatialCurveDistanceMechanic *pUVar1;
  
  pUVar1 = (this->CurveDistMechanic).field0_0x0.DebugPtr;
  if (pUVar1 != (USpatialCurveDistanceMechanic *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014cd7accc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x2c0))();
    return;
  }
  return;
}

// Setup @ 14cd7cf20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UPolyEditInsetOutsetActivity::Setup(UPolyEditInsetOutsetActivity *this,UInteractiveTool *param_1)

{
  code *pcVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  UPolyEditInsetOutsetProperties *pUVar4;
  USingleClickInputBehavior *pUVar5;
  UMouseHoverBehavior *pUVar6;
  UInteractiveToolManager *this_00;
  UContextObjectStore *this_01;
  UPolyEditActivityContext *pUVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [32];
  FString local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  UInteractionMechanic::Setup((UInteractionMechanic *)this,param_1);
  pUVar2 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar2,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar3 = UPolyEditInsetOutsetProperties::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar3);
  local_a8._8_8_ = pUVar2;
  pUVar4 = (UPolyEditInsetOutsetProperties *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar8 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar8 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar4 != (UPolyEditInsetOutsetProperties *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->Settings).field0_0x0.DebugPtr = pUVar4;
  pcVar1 = *(code **)(pUVar4->_padding_ + 0x2b8);
  ::FString::FString(&local_b8,L"");
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar1)(pUVar4,pUVar2,&local_b8);
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  (**(code **)(this->_padding_ + 0x2d0))(this,(this->Settings).field0_0x0.DebugPtr);
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->Settings).field0_0x0.DebugPtr,0);
  pUVar2 = GetTransientPackageAsObject();
  pUVar5 = NewObject<USingleClickInputBehavior>(pUVar2);
  plVar8 = &this->_padding_;
  if (this == (UPolyEditInsetOutsetActivity *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  (**(code **)(pUVar5->_padding_ + 0x378))(pUVar5,plVar8);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar2 + 0x2f8))(pUVar2,pUVar5,0);
  pUVar2 = GetTransientPackageAsObject();
  pUVar6 = NewObject<UMouseHoverBehavior>(pUVar2);
  plVar8 = &this->_padding_;
  if (this == (UPolyEditInsetOutsetActivity *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  (**(code **)(*(longlong *)pUVar6 + 800))(pUVar6,plVar8);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar2 + 0x2f8))(pUVar2,pUVar6,0);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  this_00 = (UInteractiveToolManager *)(**(code **)(*(longlong *)pUVar2 + 0x2d8))(pUVar2);
  this_01 = UInteractiveToolManager::GetContextObjectStore(this_00);
  pUVar7 = UContextObjectStore::FindContext<UPolyEditActivityContext>(this_01);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar7 != (UPolyEditActivityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this->ActivityContext).field0_0x0.DebugPtr = pUVar7;
  return;
}

// Shutdown @ 14cd7f960

/* WARNING: Type propagation algorithm not settling */

void __thiscall
UPolyEditInsetOutsetActivity::Shutdown(UPolyEditInsetOutsetActivity *this,EToolShutdownType param_1)

{
  UPolyEditPreviewMesh *this_00;
  UPolyEditInsetOutsetProperties *pUVar1;
  code *pcVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  FString local_28;
  
  this_00 = (this->EditPreview).field0_0x0.DebugPtr;
  if (this_00 != (UPolyEditPreviewMesh *)0x0) {
    UPreviewMesh::Disconnect((UPreviewMesh *)this_00);
    (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
  }
  UPreviewMesh::SetSecondaryBuffersVisibility
            ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
             PreviewMesh).field0_0x0.DebugPtr,true);
  (this->CurveDistMechanic).field0_0x0.DebugPtr = (USpatialCurveDistanceMechanic *)0x0;
  (**(code **)(this->_padding_ + 0x2d8))(this,(this->Settings).field0_0x0.DebugPtr,0);
  pUVar1 = (this->Settings).field0_0x0.DebugPtr;
  pcVar2 = *(code **)(pUVar1->_padding_ + 0x2b0);
  ::FString::FString(&local_28,L"");
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (*pcVar2)(pUVar1,pUVar3,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  (this->Settings).field0_0x0.DebugPtr = (UPolyEditInsetOutsetProperties *)0x0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  this->_padding_ = (longlong)local_res8;
  (this->ActivityContext).field0_0x0.DebugPtr = (UPolyEditActivityContext *)0x0;
  return;
}

// Start @ 14cd81040

/* WARNING: Type propagation algorithm not settling */

EToolActivityStartResult __thiscall
UPolyEditInsetOutsetActivity::Start(UPolyEditInsetOutsetActivity *this)

{
  code *pcVar1;
  UPolyEditPreviewMesh *this_00;
  UPolyEditActivityContext *pUVar2;
  char cVar3;
  bool bVar4;
  UObject *pUVar5;
  longlong *plVar6;
  FText *pFVar7;
  undefined8 uVar8;
  longlong *plVar9;
  FText local_18;
  
  cVar3 = (**(code **)(this->_padding_ + 0x2e8))();
  if (cVar3 == '\0') {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    plVar6 = (longlong *)(**(code **)(*(longlong *)pUVar5 + 0x2d8))(pUVar5);
    pcVar1 = *(code **)(*plVar6 + 0x360);
    pFVar7 = FText::AsLocalizable_Advanced_LocText
                       (&local_18,L"UPolyEditInsetOutsetActivity",L"InsetOutsetNoSelectionMesssage",
                        L"Cannot inset or outset without face selection.");
    (*pcVar1)(plVar6,pFVar7,3);
    if (local_18.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      return FailedStart;
    }
  }
  else {
    this_00 = (this->EditPreview).field0_0x0.DebugPtr;
    if (this_00 != (UPolyEditPreviewMesh *)0x0) {
      UPreviewMesh::Disconnect((UPreviewMesh *)this_00);
      (this->EditPreview).field0_0x0.DebugPtr = (UPolyEditPreviewMesh *)0x0;
    }
    UPreviewMesh::SetSecondaryBuffersVisibility
              ((((((this->ActivityContext).field0_0x0.DebugPtr)->Preview).field0_0x0.DebugPtr)->
               PreviewMesh).field0_0x0.DebugPtr,true);
    (this->CurveDistMechanic).field0_0x0.DebugPtr = (USpatialCurveDistanceMechanic *)0x0;
    (**(code **)(this->_padding_ + 0x2d8))(this,(this->Settings).field0_0x0.DebugPtr,0);
    bVar4 = BeginInset(this);
    if (bVar4) {
      this->bIsRunning = true;
      pUVar2 = (this->ActivityContext).field0_0x0.DebugPtr;
      pFVar7 = FText::AsLocalizable_Advanced_LocText
                         (&local_18,L"UPolyEditInsetOutsetActivity",L"BeginInsetOutsetActivity",
                          L"Begin Inset/Outset");
      UE::Core::Private::Function::CheckCallable(*(void **)&pUVar2->EmitActivityStart);
      pcVar1 = *(code **)&pUVar2->EmitActivityStart;
      plVar6 = *(longlong **)&(pUVar2->EmitActivityStart).field_0x28;
      plVar9 = (longlong *)&(pUVar2->EmitActivityStart).field_0x10;
      if (plVar6 != (longlong *)0x0) {
        plVar9 = plVar6;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      (*pcVar1)(uVar8,pFVar7);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      return Running;
    }
  }
  return FailedStart;
}

// StaticRegisterNativesUPolyEditInsetOutsetActivity @ 14cd81470

void __cdecl UPolyEditInsetOutsetActivity::StaticRegisterNativesUPolyEditInsetOutsetActivity(void)

{
  return;
}

// Tick @ 14cd81db0

void __thiscall UPolyEditInsetOutsetActivity::Tick(UPolyEditInsetOutsetActivity *this,float param_1)

{
  UPolyEditPreviewMesh *this_00;
  UPolyEditInsetOutsetProperties *pUVar1;
  bool bVar2;
  double dVar3;
  
  this_00 = (this->EditPreview).field0_0x0.DebugPtr;
  if ((this_00 != (UPolyEditPreviewMesh *)0x0) && (this->bPreviewUpdatePending != false)) {
    pUVar1 = (this->Settings).field0_0x0.DebugPtr;
    if (pUVar1->bOutset == false) {
      bVar2 = pUVar1->bReproject;
      dVar3 = __real_3ff0000000000000;
    }
    else {
      bVar2 = false;
      dVar3 = __real_bff0000000000000;
    }
    UPolyEditPreviewMesh::UpdateInsetType
              (this_00,dVar3 * ((this->CurveDistMechanic).field0_0x0.DebugPtr)->CurrentDistance,
               bVar2,(double)pUVar1->Softness,(double)pUVar1->AreaScale,pUVar1->bBoundaryOnly);
    this->bPreviewUpdatePending = false;
  }
  return;
}

