// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 7

// StaticClass @ 14c9400e0

UClass * __cdecl UGenerateCrossSectionOpFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGenerateCrossSectionOpFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingOperators",L"GenerateCrossSectionOpFactory",
               &Z_Registration_Info_UClass_UGenerateCrossSectionOpFactory.InnerSingleton,
               StaticRegisterNativesUGenerateCrossSectionOpFactory,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGenerateCrossSectionOpFactory>,
               InternalVTableHelperCtorCaller<UGenerateCrossSectionOpFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGenerateCrossSectionOpFactory.InnerSingleton;
}

// UGenerateCrossSectionOpFactory @ 14c9480f0

UGenerateCrossSectionOpFactory * __thiscall
UGenerateCrossSectionOpFactory::UGenerateCrossSectionOpFactory
          (UGenerateCrossSectionOpFactory *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->bSimplifyAlongNewEdges = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->TargetTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->TargetTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->TargetTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->TargetTransform).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetTransform).Translation.field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->TargetTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->TargetTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  return this;
}

// UGenerateCrossSectionOpFactory @ 14c948190

UGenerateCrossSectionOpFactory * __thiscall
UGenerateCrossSectionOpFactory::UGenerateCrossSectionOpFactory
          (UGenerateCrossSectionOpFactory *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UObject::UObject((UObject *)this,param_1);
  this->bSimplifyAlongNewEdges = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->TargetTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->TargetTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->TargetTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  (this->TargetTransform).Rotation.field0_0x0._s_0.W = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetTransform).Translation.field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->TargetTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->TargetTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar1;
  (this->TargetTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  return this;
}

// ~UGenerateCrossSectionOpFactory @ 14c949a60

void __thiscall
UGenerateCrossSectionOpFactory::~UGenerateCrossSectionOpFactory
          (UGenerateCrossSectionOpFactory *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14c97fdb0

UClass * __cdecl UGenerateCrossSectionOpFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UGenerateCrossSectionOpFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingOperators",L"GenerateCrossSectionOpFactory",
               &Z_Registration_Info_UClass_UGenerateCrossSectionOpFactory.InnerSingleton,
               StaticRegisterNativesUGenerateCrossSectionOpFactory,200,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UGenerateCrossSectionOpFactory>,
               InternalVTableHelperCtorCaller<UGenerateCrossSectionOpFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGenerateCrossSectionOpFactory.InnerSingleton;
}

// MakeNewOperator @ 14c9820d0

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall UGenerateCrossSectionOpFactory::MakeNewOperator(UGenerateCrossSectionOpFactory *this)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  FDynamicMesh3 *pFVar4;
  double dVar5;
  FDynamicMeshOperator *this_00;
  FDynamicMeshOperator *in_RDX;
  double local_18;
  FSharedReferencer<1> local_10;
  
  this_00 = ::operator_new(0xd8);
  if (this_00 != (FDynamicMeshOperator *)0x0) {
    memset(this_00,0,0xd8);
    UE::Geometry::FDynamicMeshOperator::FDynamicMeshOperator(this_00);
    *(undefined1 *)&this_00[1].ResultTransform.Translation.field0_0x0 = 1;
    this_00->_padding_ = (longlong)&___7FGenerateCrossSectionOp_Geometry_UE__6B_;
    this_00[1].ResultTransform.Translation.field0_0x0._s_0.Y = 0.0;
    this_00[1].ResultTransform.Translation.field0_0x0._s_0.Z = 0.0;
    this_00[1].ResultTransform.Scale3D.field0_0x0._s_0.X = 0.0;
  }
  local_18 = 0.0;
  local_10.ReferenceController =
       *(TReferenceControllerBase<1> **)&(this->LocalPlaneNormal).field0_0x0;
  dVar2 = (this->LocalPlaneOrigin).field0_0x0._s_0.Z;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pdVar1 = &this_00[1].ResultTransform.Translation.field0_0x0._s_0.Y;
  if (pdVar1 != &local_18) {
    *pdVar1 = dVar2;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this_00[1].ResultTransform.Translation.field0_0x0._s_0.Z,
               &local_10);
    dVar2 = local_18;
  }
  local_18 = dVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  lVar3 = this->_padding_;
  pFVar4 = (FDynamicMesh3 *)this->_padding_;
  in_RDX->_padding_ = (longlong)this_00;
  dVar2 = (double)this->_padding_;
  this_00[1]._padding_ = lVar3;
  this_00[1].ResultMesh.Ptr = pFVar4;
  this_00[1].ResultTransform.Rotation.field0_0x0._s_0.X = dVar2;
  dVar5 = (double)this->_padding_;
  dVar2 = (this->LocalPlaneOrigin).field0_0x0._s_0.X;
  this_00[1].ResultTransform.Rotation.field0_0x0._s_0.Y = (double)this->_padding_;
  this_00[1].ResultTransform.Rotation.field0_0x0._s_0.Z = dVar5;
  this_00[1].ResultTransform.Rotation.field0_0x0._s_0.W = dVar2;
  *(undefined1 *)&this_00[1].ResultTransform.Translation.field0_0x0 =
       *(undefined1 *)((longlong)&(this->LocalPlaneOrigin).field0_0x0 + 8);
  dVar2 = (this->LocalPlaneNormal).field0_0x0._s_0.Z;
  (this_00->ResultTransform).Rotation.field0_0x0._s_0.X = (this->LocalPlaneNormal).field0_0x0._s_0.Y
  ;
  (this_00->ResultTransform).Rotation.field0_0x0._s_0.Y = dVar2;
  pFVar4 = (this->OriginalMesh).Object;
  (this_00->ResultTransform).Rotation.field0_0x0._s_0.Z = *(double *)&this->bSimplifyAlongNewEdges;
  (this_00->ResultTransform).Rotation.field0_0x0._s_0.W = (double)pFVar4;
  dVar2 = (this->TargetTransform).Rotation.field0_0x0._s_0.X;
  (this_00->ResultTransform).Translation.field0_0x0._s_0.X =
       (double)(this->OriginalMesh).SharedReferenceCount.ReferenceController;
  (this_00->ResultTransform).Translation.field0_0x0._s_0.Y = dVar2;
  dVar2 = (this->TargetTransform).Rotation.field0_0x0._s_0.Z;
  (this_00->ResultTransform).Translation.field0_0x0._s_0.Z =
       (this->TargetTransform).Rotation.field0_0x0._s_0.Y;
  (this_00->ResultTransform).Scale3D.field0_0x0._s_0.X = dVar2;
  dVar2 = (this->TargetTransform).Translation.field0_0x0._s_0.X;
  (this_00->ResultTransform).Scale3D.field0_0x0._s_0.Y =
       (this->TargetTransform).Rotation.field0_0x0._s_0.W;
  (this_00->ResultTransform).Scale3D.field0_0x0._s_0.Z = dVar2;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// StaticRegisterNativesUGenerateCrossSectionOpFactory @ 14c986b70

void __cdecl
UGenerateCrossSectionOpFactory::StaticRegisterNativesUGenerateCrossSectionOpFactory(void)

{
  return;
}

