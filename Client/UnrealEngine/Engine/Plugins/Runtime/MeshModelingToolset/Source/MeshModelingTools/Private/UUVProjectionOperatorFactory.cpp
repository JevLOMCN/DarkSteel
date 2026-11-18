// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MeshModelingTools
// Functions: 7

// StaticClass @ 14cd432a0

UClass * __cdecl UUVProjectionOperatorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVProjectionOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVProjectionOperatorFactory",
               &Z_Registration_Info_UClass_UUVProjectionOperatorFactory.InnerSingleton,
               StaticRegisterNativesUUVProjectionOperatorFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVProjectionOperatorFactory>,
               InternalVTableHelperCtorCaller<UUVProjectionOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVProjectionOperatorFactory.InnerSingleton;
}

// UUVProjectionOperatorFactory @ 14cd518d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UUVProjectionOperatorFactory * __thiscall
UUVProjectionOperatorFactory::UUVProjectionOperatorFactory
          (UUVProjectionOperatorFactory *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Tool).field0_0x0.DebugPtr = (UUVProjectionTool *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  return this;
}

// UUVProjectionOperatorFactory @ 14cd51910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UUVProjectionOperatorFactory * __thiscall
UUVProjectionOperatorFactory::UUVProjectionOperatorFactory
          (UUVProjectionOperatorFactory *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Tool).field0_0x0.DebugPtr = (UUVProjectionTool *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  return this;
}

// ~UUVProjectionOperatorFactory @ 14cd539c0

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
UUVProjectionOperatorFactory::~UUVProjectionOperatorFactory(UUVProjectionOperatorFactory *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14cd6e9a0

UClass * __cdecl UUVProjectionOperatorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVProjectionOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MeshModelingTools",L"UVProjectionOperatorFactory",
               &Z_Registration_Info_UClass_UUVProjectionOperatorFactory.InnerSingleton,
               StaticRegisterNativesUUVProjectionOperatorFactory,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVProjectionOperatorFactory>,
               InternalVTableHelperCtorCaller<UUVProjectionOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVProjectionOperatorFactory.InnerSingleton;
}

// MakeNewOperator @ 14cd74040

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
__thiscall UUVProjectionOperatorFactory::MakeNewOperator(UUVProjectionOperatorFactory *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  FDynamicMesh3 *pFVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  TVector2<float>_u_0 TVar15;
  TVector2<float>_u_0 TVar16;
  int iVar17;
  FUVProjectionOp *pFVar18;
  TOrientedBox3<double> *pTVar19;
  FDynamicMeshOperator *in_RDX;
  TVector<double>_u_0 local_70;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  double local_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  pFVar18 = ::operator_new(0x198);
  if (pFVar18 == (FUVProjectionOp *)0x0) {
    pFVar18 = (FUVProjectionOp *)0x0;
  }
  else {
    memset(pFVar18,0,0x198);
    pFVar18 = UE::Geometry::FUVProjectionOp::FUVProjectionOp(pFVar18);
  }
  pFVar18->ProjectionMethod =
       *(EUVProjectionMethod *)(*(longlong *)(this->_padding_ + 0x150) + 0xb0);
  lVar1 = this->_padding_;
  dVar6 = *(double *)(lVar1 + 0x238);
  dVar7 = *(double *)(lVar1 + 0x240);
  dVar8 = *(double *)(lVar1 + 0x248);
  local_40 = *(double *)(lVar1 + 0x260);
  dStack_38 = *(double *)(lVar1 + 0x270);
  dStack_30 = *(double *)(lVar1 + 0x278);
  dVar9 = *(double *)(lVar1 + 0x250);
  dVar10 = *(double *)(lVar1 + 600);
  dStack_28 = *(double *)(lVar1 + 0x280);
  (pFVar18->MeshToProjectionSpace).Rotation.field0_0x0._s_0.X = *(double *)(lVar1 + 0x230);
  (pFVar18->MeshToProjectionSpace).Rotation.field0_0x0._s_0.Y = dVar6;
  (pFVar18->MeshToProjectionSpace).Rotation.field0_0x0._s_0.Z = dVar7;
  (pFVar18->MeshToProjectionSpace).Rotation.field0_0x0._s_0.W = dVar8;
  (pFVar18->MeshToProjectionSpace).Translation.field0_0x0._s_0.X = dVar9;
  (pFVar18->MeshToProjectionSpace).Translation.field0_0x0._s_0.Y = dVar10;
  (pFVar18->MeshToProjectionSpace).Translation.field0_0x0._s_0.Z = local_40;
  (pFVar18->MeshToProjectionSpace).Scale3D.field0_0x0._s_0.X = dStack_38;
  (pFVar18->MeshToProjectionSpace).Scale3D.field0_0x0._s_0.Y = dStack_30;
  (pFVar18->MeshToProjectionSpace).Scale3D.field0_0x0._s_0.Z = dStack_28;
  pTVar19 = UUVProjectionTool::GetProjectionBox
                      ((UUVProjectionTool *)this->_padding_,(TOrientedBox3<double> *)&local_70._s_0)
  ;
  dVar6 = (pTVar19->Frame).Origin.field0_0x0._s_0.Y;
  dVar7 = (pTVar19->Frame).Origin.field0_0x0._s_0.Z;
  dVar8 = (pTVar19->Frame).Rotation.field0_0x0._s_0.X;
  dVar9 = (pTVar19->Frame).Rotation.field0_0x0._s_0.Y;
  dVar10 = (pTVar19->Frame).Rotation.field0_0x0._s_0.Z;
  dVar11 = (pTVar19->Frame).Rotation.field0_0x0._s_0.W;
  dVar12 = (pTVar19->Extents).field0_0x0._s_0.X;
  dVar13 = (pTVar19->Extents).field0_0x0._s_0.Y;
  dVar14 = (pTVar19->Extents).field0_0x0._s_0.Z;
  (pFVar18->ProjectionBox).Frame.Origin.field0_0x0._s_0.X =
       (pTVar19->Frame).Origin.field0_0x0._s_0.X;
  (pFVar18->ProjectionBox).Frame.Origin.field0_0x0._s_0.Y = dVar6;
  (pFVar18->ProjectionBox).Frame.Origin.field0_0x0._s_0.Z = dVar7;
  (pFVar18->ProjectionBox).Frame.Rotation.field0_0x0._s_0.X = dVar8;
  (pFVar18->ProjectionBox).Frame.Rotation.field0_0x0._s_0.Y = dVar9;
  (pFVar18->ProjectionBox).Frame.Rotation.field0_0x0._s_0.Z = dVar10;
  (pFVar18->ProjectionBox).Frame.Rotation.field0_0x0._s_0.W = dVar11;
  (pFVar18->ProjectionBox).Extents.field0_0x0._s_0.X = dVar12;
  (pFVar18->ProjectionBox).Extents.field0_0x0._s_0.Y = dVar13;
  (pFVar18->ProjectionBox).Extents.field0_0x0._s_0.Z = dVar14;
  pFVar18->CylinderSplitAngle = *(float *)(*(longlong *)(this->_padding_ + 0x150) + 0xd8);
  pFVar18->BlendWeight = (double)*(float *)(*(longlong *)(this->_padding_ + 0x150) + 0xdc);
  pFVar18->SmoothingRounds = *(int *)(*(longlong *)(this->_padding_ + 0x150) + 0xe0);
  pFVar18->SmoothingAlpha = (double)*(float *)(*(longlong *)(this->_padding_ + 0x150) + 0xe4);
  pFVar18->UVRotationAngleDeg = *(float *)(*(longlong *)(this->_padding_ + 0x150) + 0xe8);
  lVar1 = *(longlong *)(this->_padding_ + 0x150);
  TVar15._s_0.Y = (float)*(double *)(lVar1 + 0xf8);
  TVar15._s_0.X = (float)*(double *)(lVar1 + 0xf0);
  (pFVar18->UVScale).field0_0x0 = TVar15;
  lVar1 = *(longlong *)(this->_padding_ + 0x150);
  TVar16._s_0.Y = (float)*(double *)(lVar1 + 0x108);
  TVar16._s_0.X = (float)*(double *)(lVar1 + 0x100);
  (pFVar18->UVTranslate).field0_0x0 = TVar16;
  pTVar2 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x1a0);
  pFVar3 = *(FDynamicMesh3 **)(this->_padding_ + 0x198);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar18->OriginalMesh).SharedReferenceCount.ReferenceController;
  (pFVar18->OriginalMesh).Object = pFVar3;
  (pFVar18->OriginalMesh).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar2 = *(TReferenceControllerBase<1> **)(this->_padding_ + 0x1b0);
  pTVar4 = *(TArray<int,TSizedDefaultAllocator<32>_> **)(this->_padding_ + 0x1a8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar5 = (pFVar18->TriangleROI).SharedReferenceCount.ReferenceController;
  (pFVar18->TriangleROI).Object = pTVar4;
  (pFVar18->TriangleROI).SharedReferenceCount.ReferenceController = pTVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  iVar17 = UMeshUVChannelProperties::GetSelectedChannelIndex
                     (*(UMeshUVChannelProperties **)(this->_padding_ + 0x148),true);
  pFVar18->UseUVLayer = iVar17;
  lVar1 = this->_padding_;
  local_70._s_0.X = *(double *)(lVar1 + 0x230);
  local_70._s_0.Y = *(double *)(lVar1 + 0x238);
  local_70._s_0.Z = *(double *)(lVar1 + 0x240);
  local_58 = *(undefined8 *)(lVar1 + 0x248);
  local_40 = *(double *)(lVar1 + 0x260);
  local_50 = *(undefined8 *)(lVar1 + 0x250);
  uStack_48 = *(undefined8 *)(lVar1 + 600);
  dStack_28 = *(double *)(lVar1 + 0x280);
  dStack_38 = *(double *)(lVar1 + 0x270);
  dStack_30 = *(double *)(lVar1 + 0x278);
  (**(code **)(pFVar18->_padding_ + 8))(pFVar18,&local_70);
  in_RDX->_padding_ = (longlong)pFVar18;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// StaticRegisterNativesUUVProjectionOperatorFactory @ 14cd81530

void __cdecl UUVProjectionOperatorFactory::StaticRegisterNativesUUVProjectionOperatorFactory(void)

{
  return;
}

