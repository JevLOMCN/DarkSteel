// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 12

// StaticClass @ 14cc01740

UClass * __cdecl UDynamicMeshBrushTool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshBrushTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DynamicMeshBrushTool",
               &Z_Registration_Info_UClass_UDynamicMeshBrushTool.InnerSingleton,
               StaticRegisterNativesUDynamicMeshBrushTool,0x3c8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDynamicMeshBrushTool>,
               InternalVTableHelperCtorCaller<UDynamicMeshBrushTool>,local_res8,
               UBaseBrushTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshBrushTool.InnerSingleton;
}

// UDynamicMeshBrushTool @ 14cc1df30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UDynamicMeshBrushTool * __thiscall
UDynamicMeshBrushTool::UDynamicMeshBrushTool(UDynamicMeshBrushTool *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UBaseBrushTool::UBaseBrushTool((UBaseBrushTool *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  (this->OnBaseMeshComponentChangedHandle).ID = 0;
  (this->PreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->InputMeshBoundsLocal).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->InputMeshBoundsLocal).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->InputMeshBoundsLocal).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->InputMeshBoundsLocal).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->InputMeshBoundsLocal).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->InputMeshBoundsLocal).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  (this->BakedTargetTransform).Rotation.field0_0x0._s_0.W = 1.0;
  this->bBakeRotateScale = false;
  (this->BakedTargetTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->BakedTargetTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->BakedTargetTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BakedTargetTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BakedTargetTransform).Translation.field0_0x0._s_0.Y = (double)uVar1;
  (this->BakedTargetTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->BakedTargetTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->BakedTargetTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar1;
  (this->BakedTargetTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.W = 1.0;
  (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CurrentTargetTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CurrentTargetTransform).Translation.field0_0x0._s_0.Y = (double)uVar1;
  (this->CurrentTargetTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->CurrentTargetTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->CurrentTargetTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar1;
  (this->CurrentTargetTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->LongTransactions).OpenCount = 0;
  (this->LongTransactions).MaxOpen = 1;
  return this;
}

// UDynamicMeshBrushTool @ 14cc1e0b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UDynamicMeshBrushTool * __thiscall
UDynamicMeshBrushTool::UDynamicMeshBrushTool(UDynamicMeshBrushTool *this)

{
  undefined8 uVar1;
  
  UBaseBrushTool::UBaseBrushTool((UBaseBrushTool *)this);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  (this->OnBaseMeshComponentChangedHandle).ID = 0;
  (this->PreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  (this->InputMeshBoundsLocal).Min.field0_0x0._s_0.X = 1.7976931348623157e+308;
  (this->InputMeshBoundsLocal).Min.field0_0x0._s_0.Y = 1.7976931348623157e+308;
  (this->InputMeshBoundsLocal).Min.field0_0x0._s_0.Z = 1.7976931348623157e+308;
  (this->InputMeshBoundsLocal).Max.field0_0x0._s_0.X = -1.7976931348623157e+308;
  (this->InputMeshBoundsLocal).Max.field0_0x0._s_0.Y = -1.7976931348623157e+308;
  (this->InputMeshBoundsLocal).Max.field0_0x0._s_0.Z = -1.7976931348623157e+308;
  (this->BakedTargetTransform).Rotation.field0_0x0._s_0.W = 1.0;
  this->bBakeRotateScale = false;
  (this->BakedTargetTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->BakedTargetTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->BakedTargetTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->BakedTargetTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->BakedTargetTransform).Translation.field0_0x0._s_0.Y = (double)uVar1;
  (this->BakedTargetTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->BakedTargetTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->BakedTargetTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar1;
  (this->BakedTargetTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.W = 1.0;
  (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CurrentTargetTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CurrentTargetTransform).Translation.field0_0x0._s_0.Y = (double)uVar1;
  (this->CurrentTargetTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->CurrentTargetTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->CurrentTargetTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar1;
  (this->CurrentTargetTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->LongTransactions).OpenCount = 0;
  (this->LongTransactions).MaxOpen = 1;
  return this;
}

// ~UDynamicMeshBrushTool @ 14cc22b30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UDynamicMeshBrushTool::~UDynamicMeshBrushTool(UDynamicMeshBrushTool *this)

{
  FLongTransactionTracker *local_res8 [4];
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInputBehaviorSource__;
  this->_padding_ = (longlong)&_vftable__for__USingleSelectionTool__;
  this->_padding_ = (longlong)&_vftable__for__IClickDragBehaviorTarget__;
  this->_padding_ = (longlong)&_vftable__for__IHoverBehaviorTarget__;
  if ((this->LongTransactions).OpenCount != 0) {
    local_res8[0] = &this->LongTransactions;
    `UE::TransactionUtil::FLongTransactionTracker::~FLongTransactionTracker'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  UBaseBrushTool::~UBaseBrushTool((UBaseBrushTool *)this);
  return;
}

// EstimateMaximumTargetDimension @ 14cc55190

double __thiscall UDynamicMeshBrushTool::EstimateMaximumTargetDimension(UDynamicMeshBrushTool *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this->InputMeshBoundsLocal).Max.field0_0x0._s_0.Z -
          (this->InputMeshBoundsLocal).Min.field0_0x0._s_0.Z;
  dVar2 = (this->InputMeshBoundsLocal).Max.field0_0x0._s_0.Y -
          (this->InputMeshBoundsLocal).Min.field0_0x0._s_0.Y;
  dVar3 = (this->InputMeshBoundsLocal).Max.field0_0x0._s_0.X -
          (this->InputMeshBoundsLocal).Min.field0_0x0._s_0.X;
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (dVar1 <= dVar2) {
    dVar1 = dVar2;
  }
  if (dVar1 <= dVar3) {
    dVar1 = dVar3;
  }
  return dVar1;
}

// GetPrivateStaticClass @ 14cc5cb30

UClass * __cdecl UDynamicMeshBrushTool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshBrushTool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"DynamicMeshBrushTool",
               &Z_Registration_Info_UClass_UDynamicMeshBrushTool.InnerSingleton,
               StaticRegisterNativesUDynamicMeshBrushTool,0x3c8,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDynamicMeshBrushTool>,
               InternalVTableHelperCtorCaller<UDynamicMeshBrushTool>,local_res8,
               UBaseBrushTool::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshBrushTool.InnerSingleton;
}

// HitTest @ 14cc5f990

bool __thiscall
UDynamicMeshBrushTool::HitTest
          (UDynamicMeshBrushTool *this,TRay<double> *param_1,FHitResult *param_2)

{
  bool bVar1;
  TVector<double>_u_0 local_68;
  double dStack_50;
  double local_48;
  double dStack_40;
  TFunction<bool___cdecl(int)> local_38;
  
  local_68._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  local_68._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y;
  local_68._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z;
  dStack_50 = (param_1->Direction).field0_0x0._s_0.X;
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  local_48 = (param_1->Direction).field0_0x0._s_0.Y;
  dStack_40 = (param_1->Direction).field0_0x0._s_0.Z;
  bVar1 = UPreviewMesh::FindRayIntersection
                    ((this->PreviewMesh).field0_0x0.DebugPtr,(TRay<double> *)&local_68._s_0,param_2,
                     &local_38);
  return bVar1;
}

// OnBaseMeshComponentChanged @ 14cc65640

void __thiscall UDynamicMeshBrushTool::OnBaseMeshComponentChanged(UDynamicMeshBrushTool *this)

{
  return;
}

// OnShutdown @ 14cc69180

void __thiscall
UDynamicMeshBrushTool::OnShutdown(UDynamicMeshBrushTool *this,EToolShutdownType param_1)

{
  return;
}

// Setup @ 14cc79620

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

void __thiscall UDynamicMeshBrushTool::Setup(UDynamicMeshBrushTool *this)

{
  TTransformSRT3<double> *this_00;
  int iVar1;
  UDynamicMeshComponent *pUVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  UPreviewMesh *pUVar18;
  UWorld *pUVar19;
  TTransform<double> *pTVar20;
  FDynamicMesh3 *pFVar21;
  UClass *pUVar22;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_01;
  undefined8 *puVar23;
  ulong64 uVar24;
  TAxisAlignedBox3<double> *pTVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auStack_3c8 [32];
  undefined1 local_3a8 [8];
  FDelegateAllocation local_3a0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_390;
  code *local_378 [4];
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_358;
  FDynamicMesh3 local_348;
  TVector<double>_u_0 local_118;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  double dStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  TTransform<double> local_b8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_3c8;
  pUVar18 = NewObject<UPreviewMesh>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar18 != (UPreviewMesh *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar18);
  }
  (this->PreviewMesh).field0_0x0.DebugPtr = pUVar18;
  pUVar18->bBuildSpatialDataStructure = true;
  pUVar18 = (this->PreviewMesh).field0_0x0.DebugPtr;
  pUVar19 = UMeshSurfacePointTool::GetTargetWorld((UMeshSurfacePointTool *)this);
  UPreviewMesh::CreateInWorld(pUVar18,pUVar19,&UE::Math::TTransform<double>::Identity);
  pTVar20 = UE::ToolTarget::GetLocalToWorldTransform(&local_b8,(UToolTarget *)this->_padding_);
  this_00 = &this->BakedTargetTransform;
  dVar6 = (pTVar20->Rotation).ZW.m128d_f64[0];
  dVar7 = (pTVar20->Rotation).ZW.m128d_f64[1];
  dVar8 = (pTVar20->Rotation).XY.m128d_f64[0];
  dVar9 = (pTVar20->Rotation).XY.m128d_f64[1];
  dVar26 = (pTVar20->Translation).ZW.m128d_f64[0];
  dVar10 = (pTVar20->Translation).XY.m128d_f64[0];
  dVar11 = (pTVar20->Translation).XY.m128d_f64[1];
  dVar12 = (pTVar20->Scale3D).XY.m128d_f64[0];
  dVar13 = (pTVar20->Scale3D).XY.m128d_f64[1];
  dVar3 = (pTVar20->Scale3D).ZW.m128d_f64[0];
  pUVar18 = (this->PreviewMesh).field0_0x0.DebugPtr;
  (this_00->Rotation).field0_0x0._s_0.X = dVar8;
  (this->BakedTargetTransform).Rotation.field0_0x0._s_0.Y = dVar9;
  (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.X = dVar8;
  (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.Y = dVar9;
  (this->BakedTargetTransform).Rotation.field0_0x0._s_0.Z = dVar6;
  (this->BakedTargetTransform).Rotation.field0_0x0._s_0.W = dVar7;
  (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.Z = dVar6;
  (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.W = dVar7;
  (this->BakedTargetTransform).Translation.field0_0x0._s_0.X = dVar10;
  (this->BakedTargetTransform).Translation.field0_0x0._s_0.Y = dVar11;
  (this->BakedTargetTransform).Translation.field0_0x0._s_0.Z = dVar26;
  (this->BakedTargetTransform).Scale3D.field0_0x0._s_0.X = dVar12;
  (this->BakedTargetTransform).Scale3D.field0_0x0._s_0.Y = dVar13;
  (this->BakedTargetTransform).Scale3D.field0_0x0._s_0.Z = dVar3;
  (this->CurrentTargetTransform).Translation.field0_0x0._s_0.X = dVar10;
  (this->CurrentTargetTransform).Translation.field0_0x0._s_0.Y = dVar11;
  (this->CurrentTargetTransform).Translation.field0_0x0._s_0.Z = dVar26;
  (this->CurrentTargetTransform).Scale3D.field0_0x0._s_0.X = dVar12;
  (this->CurrentTargetTransform).Scale3D.field0_0x0._s_0.Y = dVar13;
  (this->CurrentTargetTransform).Scale3D.field0_0x0._s_0.Z = dVar3;
  local_f8 = (this->BakedTargetTransform).Translation.field0_0x0._s_0.X;
  dStack_f0 = (this->BakedTargetTransform).Translation.field0_0x0._s_0.Y;
  dStack_d8 = (this->BakedTargetTransform).Scale3D.field0_0x0._s_0.X;
  dStack_d0 = (this->BakedTargetTransform).Scale3D.field0_0x0._s_0.Y;
  local_118._s_0.X = (this_00->Rotation).field0_0x0._s_0.X;
  local_118._s_0.Y = (this->BakedTargetTransform).Rotation.field0_0x0._s_0.Y;
  local_e8 = (this->BakedTargetTransform).Translation.field0_0x0._s_0.Z;
  local_3a0._8_8_ = (this->BakedTargetTransform).Scale3D.field0_0x0._s_0.Z;
  local_118._16_4_ =
       *(undefined4 *)((longlong)&(this->BakedTargetTransform).Rotation.field0_0x0 + 0x10);
  local_118._20_4_ =
       *(undefined4 *)((longlong)&(this->BakedTargetTransform).Rotation.field0_0x0 + 0x14);
  uStack_100 = (undefined1 *)
               CONCAT44((int)((ulonglong)
                              *(undefined8 *)
                               ((longlong)&(this->BakedTargetTransform).Rotation.field0_0x0 + 0x18)
                             >> 0x20),
                        *(undefined4 *)
                         ((longlong)&(this->BakedTargetTransform).Rotation.field0_0x0 + 0x18));
  uStack_e0 = 0;
  uStack_c0 = 0;
  local_c8 = (double)local_3a0._8_8_;
  UPreviewMesh::SetTransform(pUVar18,(TTransform<double> *)&local_118._s_0);
  ToolSetupUtil::ApplyRenderingConfigurationToPreview
            ((this->PreviewMesh).field0_0x0.DebugPtr,(UToolTarget *)this->_padding_);
  UE::ToolTarget::GetMaterialSet
            ((FComponentMaterialSet *)&local_358,(UToolTarget *)this->_padding_,false);
  UPreviewMesh::SetMaterials((this->PreviewMesh).field0_0x0.DebugPtr,&local_358);
  pUVar18 = (this->PreviewMesh).field0_0x0.DebugPtr;
  local_390._0_4_ = 0;
  local_390._4_4_ = 1000;
  local_390._8_4_ = 0;
  pFVar21 = UE::ToolTarget::GetDynamicMeshCopy
                      (&local_348,(UToolTarget *)this->_padding_,(FGetMeshParameters *)&local_390);
  UPreviewMesh::ReplaceMesh(pUVar18,pFVar21);
  UE::Geometry::FDynamicMesh3::~FDynamicMesh3(&local_348);
  if ((this->bBakeRotateScale != false) &&
     (pUVar2 = (((this->PreviewMesh).field0_0x0.DebugPtr)->DynamicMeshComponent).field0_0x0.DebugPtr
     , pUVar2 != (UDynamicMeshComponent *)0x0)) {
    pUVar22 = Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
    iVar1 = (int)pUVar22->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar22->_padding_)) {
      UE::Geometry::TTransformSRT3<double>::ClampMinimumScale(this_00,__real_3f847ae147ae147b);
      uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      dVar26 = (this->BakedTargetTransform).Translation.field0_0x0._s_0.X;
      dVar3 = (this->BakedTargetTransform).Translation.field0_0x0._s_0.Y;
      uVar4 = *(undefined4 *)((longlong)&(this->BakedTargetTransform).Translation.field0_0x0 + 0x10)
      ;
      uVar5 = *(undefined4 *)((longlong)&(this->BakedTargetTransform).Translation.field0_0x0 + 0x14)
      ;
      (this->BakedTargetTransform).Translation.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      (this->BakedTargetTransform).Translation.field0_0x0._s_0.Y = (double)uVar14;
      (this->BakedTargetTransform).Translation.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_f8 = (this->BakedTargetTransform).Translation.field0_0x0._s_0.X;
      dStack_f0 = (this->BakedTargetTransform).Translation.field0_0x0._s_0.Y;
      dStack_d8 = (this->BakedTargetTransform).Scale3D.field0_0x0._s_0.X;
      dStack_d0 = (this->BakedTargetTransform).Scale3D.field0_0x0._s_0.Y;
      local_118._s_0.X = (this_00->Rotation).field0_0x0._s_0.X;
      local_118._s_0.Y = (this->BakedTargetTransform).Rotation.field0_0x0._s_0.Y;
      local_e8 = (this->BakedTargetTransform).Translation.field0_0x0._s_0.Z;
      local_3a0._8_8_ = (this->BakedTargetTransform).Scale3D.field0_0x0._s_0.Z;
      local_118._16_4_ =
           *(undefined4 *)((longlong)&(this->BakedTargetTransform).Rotation.field0_0x0 + 0x10);
      local_118._20_4_ =
           *(undefined4 *)((longlong)&(this->BakedTargetTransform).Rotation.field0_0x0 + 0x14);
      uStack_100 = (undefined1 *)
                   CONCAT44((int)((ulonglong)
                                  *(undefined8 *)
                                   ((longlong)&(this->BakedTargetTransform).Rotation.field0_0x0 +
                                   0x18) >> 0x20),
                            *(undefined4 *)
                             ((longlong)&(this->BakedTargetTransform).Rotation.field0_0x0 + 0x18));
      uStack_e0 = 0;
      uStack_c0 = 0;
      local_c8 = (double)local_3a0._8_8_;
      (**(code **)(pUVar2->_padding_ + 0xb58))(pUVar2,&local_118,0);
      uVar17 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uVar16 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
      uVar15 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
      uVar14 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      dVar7 = _UNK_15061cbc8;
      dVar6 = ___xmm_3ff00000000000000000000000000000;
      (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.X = 0.0;
      (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.Y = 0.0;
      (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.Z = dVar6;
      (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.W = dVar7;
      (this->CurrentTargetTransform).Translation.field0_0x0._s_0.X = dVar26;
      (this->CurrentTargetTransform).Translation.field0_0x0._s_0.Y = dVar3;
      *(undefined4 *)((longlong)&(this->CurrentTargetTransform).Translation.field0_0x0 + 0x10) =
           uVar4;
      *(undefined4 *)((longlong)&(this->CurrentTargetTransform).Translation.field0_0x0 + 0x14) =
           uVar5;
      *(int *)&(this->CurrentTargetTransform).Scale3D.field0_0x0 = (int)uVar14;
      *(int *)((longlong)&(this->CurrentTargetTransform).Scale3D.field0_0x0 + 4) =
           (int)((ulonglong)uVar14 >> 0x20);
      *(undefined4 *)((longlong)&(this->CurrentTargetTransform).Scale3D.field0_0x0 + 8) = uVar15;
      *(undefined4 *)((longlong)&(this->CurrentTargetTransform).Scale3D.field0_0x0 + 0xc) = uVar16;
      *(int *)((longlong)&(this->CurrentTargetTransform).Scale3D.field0_0x0 + 0x10) = (int)uVar17;
      *(int *)((longlong)&(this->CurrentTargetTransform).Scale3D.field0_0x0 + 0x14) =
           (int)((ulonglong)uVar17 >> 0x20);
      local_f8 = (this->CurrentTargetTransform).Translation.field0_0x0._s_0.X;
      dStack_f0 = (this->CurrentTargetTransform).Translation.field0_0x0._s_0.Y;
      dStack_d8 = (this->CurrentTargetTransform).Scale3D.field0_0x0._s_0.X;
      dStack_d0 = (this->CurrentTargetTransform).Scale3D.field0_0x0._s_0.Y;
      local_118._s_0.X = (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.X;
      local_118._s_0.Y = (this->CurrentTargetTransform).Rotation.field0_0x0._s_0.Y;
      local_e8 = (this->CurrentTargetTransform).Translation.field0_0x0._s_0.Z;
      local_118._16_4_ =
           *(undefined4 *)((longlong)&(this->CurrentTargetTransform).Rotation.field0_0x0 + 0x10);
      local_118._20_4_ =
           *(undefined4 *)((longlong)&(this->CurrentTargetTransform).Rotation.field0_0x0 + 0x14);
      local_3a0._8_8_ = (this->CurrentTargetTransform).Scale3D.field0_0x0._s_0.Z;
      uStack_100 = (undefined1 *)
                   CONCAT44((int)((ulonglong)
                                  *(undefined8 *)
                                   ((longlong)&(this->CurrentTargetTransform).Rotation.field0_0x0 +
                                   0x18) >> 0x20),
                            *(undefined4 *)
                             ((longlong)&(this->CurrentTargetTransform).Rotation.field0_0x0 + 0x18))
      ;
      uStack_e0 = 0;
      uStack_c0 = 0;
      local_c8 = (double)local_3a0._8_8_;
      UPreviewMesh::SetTransform
                ((this->PreviewMesh).field0_0x0.DebugPtr,(TTransform<double> *)&local_118._s_0);
    }
  }
  this_01 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            UPreviewMesh::GetOnMeshChanged((this->PreviewMesh).field0_0x0.DebugPtr);
  local_378[1]._4_4_ = local_358.ArrayMax;
  local_378[1]._0_4_ = 0;
  local_3a8 = (undefined1  [8])0x0;
  local_378[0] = _vcall__1160__flat______;
  local_3a0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_3a0._8_8_ = local_3a0._8_8_ & 0xffffffff00000000;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a8,
             (FWriteAccessScope *)&local_118._s_0);
  uStack_100 = local_3a8 + 8;
  puVar23 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)(local_3a8 + 8));
  if (puVar23 != (undefined8 *)0x0) {
    *puVar23 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar24 = FDelegateHandle::GenerateNewID();
    puVar23[2] = uVar24;
    *puVar23 = &
               ___7__TBaseUObjectMethodDelegateInstance__0A_VUDynamicMeshBrushTool____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar23[3] = 0;
    local_390._0_8_ = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar23 + 3),(FObjectPtr)&local_390);
    puVar23[4] = local_378[0];
    puVar23[5] = CONCAT44(local_378[1]._4_4_,local_378[1]._0_4_);
  }
  if (local_118._16_1_ == '\0') {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_118._s_0.Y,
               (FDestructionSentinel *)&local_118._s_0);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
  AddDelegateInstance<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>_>(this_01,&local_390)
  ;
  (this->OnBaseMeshComponentChangedHandle).ID = local_390._0_8_;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_3a8,
             (FWriteAccessScope *)local_378);
  if ((local_3a0.DelegateSize != 0) &&
     (local_3a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_3a0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_3a8 + 8),0,0,0x10);
    local_3a0._8_8_ = local_3a0._8_8_ & 0xffffffff00000000;
  }
  if ((bool)local_378[2]._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(local_378[1]._4_4_,local_378[1]._0_4_),
               (FDestructionSentinel *)local_378);
  }
  if (local_3a0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_3a0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_3a8);
  pFVar21 = UPreviewMesh::GetMesh((this->PreviewMesh).field0_0x0.DebugPtr);
  pTVar25 = UE::Geometry::FDynamicMesh3::GetBounds
                      (pFVar21,(TAxisAlignedBox3<double> *)&local_118._s_0,false);
  dVar26 = (pTVar25->Min).field0_0x0._s_0.Y;
  (this->InputMeshBoundsLocal).Min.field0_0x0._s_0.X = (pTVar25->Min).field0_0x0._s_0.X;
  (this->InputMeshBoundsLocal).Min.field0_0x0._s_0.Y = dVar26;
  dVar26 = (pTVar25->Max).field0_0x0._s_0.X;
  (this->InputMeshBoundsLocal).Min.field0_0x0._s_0.Z = (pTVar25->Min).field0_0x0._s_0.Z;
  (this->InputMeshBoundsLocal).Max.field0_0x0._s_0.X = dVar26;
  dVar26 = (pTVar25->Max).field0_0x0._s_0.Z;
  (this->InputMeshBoundsLocal).Max.field0_0x0._s_0.Y = (pTVar25->Max).field0_0x0._s_0.Y;
  (this->InputMeshBoundsLocal).Max.field0_0x0._s_0.Z = dVar26;
  local_3a8 = (undefined1  [8])
              (UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X *
              (this->CurrentTargetTransform).Scale3D.field0_0x0._s_0.X);
  local_3a0.DelegateAllocator =
       (ForElementType<TAlignedBytes<16,16>_>)
       ((double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._12_4_,
                         UE::Math::TVector<double>::OneVector.field0_0x0._8_4_) *
       (this->CurrentTargetTransform).Scale3D.field0_0x0._s_0.Y);
  local_3a0._8_8_ =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z *
       (this->CurrentTargetTransform).Scale3D.field0_0x0._s_0.Z;
  UE::Geometry::operator*<double>
            ((TVector<double> *)local_378,&(this->CurrentTargetTransform).Rotation,
             (TVector<double> *)local_3a8);
  auVar27._0_8_ =
       (double)local_378[0] * (double)local_378[0] +
       (double)CONCAT44(local_378[1]._4_4_,local_378[1]._0_4_) *
       (double)CONCAT44(local_378[1]._4_4_,local_378[1]._0_4_) +
       (double)CONCAT71(local_378[2]._1_7_,local_378[2]._0_1_) *
       (double)CONCAT71(local_378[2]._1_7_,local_378[2]._0_1_);
  auVar27._8_8_ = 0;
  auVar27 = sqrtpd(auVar27,auVar27);
  dVar26 = auVar27._0_8_;
  if (auVar27._0_8_ <= __real_3eb0c6f7a0000000) {
    dVar26 = __real_3eb0c6f7a0000000;
  }
  *(float *)((longlong)&this->_padding_ + 4) = (float)(__real_3ffbb67ae8584caa / dVar26);
  UBaseBrushTool::Setup((UBaseBrushTool *)this);
  UE::ToolTarget::HideSourceObject((UToolTarget *)this->_padding_);
  if (local_358.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_358.AllocatorInstance.Data);
  }
  return;
}

// Shutdown @ 14cc80190

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UDynamicMeshBrushTool::Shutdown(UDynamicMeshBrushTool *this,EToolShutdownType param_1)

{
  UPreviewMesh *this_00;
  UInteractiveToolManager *pUVar1;
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_01;
  
  UBaseBrushTool::Shutdown((UBaseBrushTool *)this,param_1);
  pUVar1 = (UInteractiveToolManager *)(**(code **)(this->_padding_ + 0x2d8))(this);
  UE::TransactionUtil::FLongTransactionTracker::CloseAll(&this->LongTransactions,pUVar1);
  UE::ToolTarget::ShowSourceObject((UToolTarget *)this->_padding_);
  this_00 = (this->PreviewMesh).field0_0x0.DebugPtr;
  if (this_00 != (UPreviewMesh *)0x0) {
    this_01 = UPreviewMesh::GetOnMeshChanged(this_00);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               this_01,(FDelegateHandle)(this->OnBaseMeshComponentChangedHandle).ID);
    (**(code **)(this->_padding_ + 0x480))(this);
    UPreviewMesh::SetVisible((this->PreviewMesh).field0_0x0.DebugPtr,false);
    UPreviewMesh::Disconnect((this->PreviewMesh).field0_0x0.DebugPtr);
    (this->PreviewMesh).field0_0x0.DebugPtr = (UPreviewMesh *)0x0;
  }
  return;
}

// StaticRegisterNativesUDynamicMeshBrushTool @ 14cc82440

void __cdecl UDynamicMeshBrushTool::StaticRegisterNativesUDynamicMeshBrushTool(void)

{
  return;
}

