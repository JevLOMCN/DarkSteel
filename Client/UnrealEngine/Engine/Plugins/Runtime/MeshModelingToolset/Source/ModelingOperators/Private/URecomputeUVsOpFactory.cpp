// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 8

// StaticClass @ 14c9407f0

UClass * __cdecl URecomputeUVsOpFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URecomputeUVsOpFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingOperators",L"RecomputeUVsOpFactory",
               &Z_Registration_Info_UClass_URecomputeUVsOpFactory.InnerSingleton,
               StaticRegisterNativesURecomputeUVsOpFactory,0x130,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<URecomputeUVsOpFactory>,
               InternalVTableHelperCtorCaller<URecomputeUVsOpFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URecomputeUVsOpFactory.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14c940ef0

int __cdecl URecomputeUVsOpFactory::<lambda_37_>::<lambda_invoker_cdecl>(void)

{
  return 0;
}

// URecomputeUVsOpFactory @ 14c948230

URecomputeUVsOpFactory * __thiscall
URecomputeUVsOpFactory::URecomputeUVsOpFactory(URecomputeUVsOpFactory *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0xc) = 0xffffffff;
  (this->Settings).field0_0x0.DebugPtr = (URecomputeUVsToolProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&(this->Selection).field0_0x0 = 0;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->Selection).field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->Selection).field0_0x0 + 0x40) = 0;
  (this->Selection).field0_0x0.TypedValue.HashSize = 0;
  (this->InputGroups).Object = (FPolygroupSet *)0x0;
  (this->InputGroups).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  *(undefined8 *)&this->GetSelectedUVChannel = 0;
  *(undefined8 *)&(this->GetSelectedUVChannel).field_0x28 = 0;
  *(undefined ***)&(this->GetSelectedUVChannel).field_0x10 =
       &___7__TFunction_OwnedObject_P6AHXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->GetSelectedUVChannel).field_0x18;
  *(code **)puVar1 = <lambda_37_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetSelectedUVChannel =
         UE::Core::Private::Function::TFunctionRefCaller<int_(__cdecl*)(void),int>::Call;
  }
  (this->TargetTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->TargetTransform).Rotation.field0_0x0._s_0.W = 1.0;
  (this->TargetTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->TargetTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetTransform).Translation.field0_0x0._s_0.Y = (double)uVar2;
  (this->TargetTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->TargetTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->TargetTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar2;
  (this->TargetTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  return this;
}

// URecomputeUVsOpFactory @ 14c948360

URecomputeUVsOpFactory * __thiscall
URecomputeUVsOpFactory::URecomputeUVsOpFactory
          (URecomputeUVsOpFactory *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0xc) = 0xffffffff;
  (this->Settings).field0_0x0.DebugPtr = (URecomputeUVsToolProperties *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  *(undefined8 *)&(this->Selection).field0_0x0 = 0;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 8) = 0;
  *(undefined8 *)((longlong)&(this->Selection).field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->Selection).field0_0x0 + 0x40) = 0;
  (this->Selection).field0_0x0.TypedValue.HashSize = 0;
  (this->InputGroups).Object = (FPolygroupSet *)0x0;
  (this->InputGroups).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  *(undefined8 *)&this->GetSelectedUVChannel = 0;
  *(undefined8 *)&(this->GetSelectedUVChannel).field_0x28 = 0;
  *(undefined ***)&(this->GetSelectedUVChannel).field_0x10 =
       &___7__TFunction_OwnedObject_P6AHXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->GetSelectedUVChannel).field_0x18;
  *(code **)puVar1 = <lambda_37_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetSelectedUVChannel =
         UE::Core::Private::Function::TFunctionRefCaller<int_(__cdecl*)(void),int>::Call;
  }
  (this->TargetTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->TargetTransform).Rotation.field0_0x0._s_0.W = 1.0;
  (this->TargetTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->TargetTransform).Rotation.field0_0x0._s_0.Z = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->TargetTransform).Translation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->TargetTransform).Translation.field0_0x0._s_0.Y = (double)uVar2;
  (this->TargetTransform).Translation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->TargetTransform).Scale3D.field0_0x0._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->TargetTransform).Scale3D.field0_0x0._s_0.Y = (double)uVar2;
  (this->TargetTransform).Scale3D.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  return this;
}

// ~URecomputeUVsOpFactory @ 14c949ab0

void __thiscall URecomputeUVsOpFactory::~URecomputeUVsOpFactory(URecomputeUVsOpFactory *this)

{
  longlong *plVar1;
  void *pvVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  if (*(longlong *)&this->GetSelectedUVChannel != 0) {
    plVar1 = *(longlong **)&(this->GetSelectedUVChannel).field_0x28;
    plVar3 = (longlong *)&(this->GetSelectedUVChannel).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->InputGroups).SharedReferenceCount.ReferenceController);
  if (*(int *)((longlong)&(this->Selection).field0_0x0 + 0xc) != -1) {
    (this->Selection).field0_0x0.TypedValue.HashSize = 0;
    pvVar2 = *(void **)((longlong)&(this->Selection).field0_0x0 + 0x40);
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->Selection);
  }
  this->_padding_ = (longlong)&___7IDynamicMeshOperatorFactory_Geometry_UE__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 14c97fe60

UClass * __cdecl URecomputeUVsOpFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URecomputeUVsOpFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingOperators",L"RecomputeUVsOpFactory",
               &Z_Registration_Info_UClass_URecomputeUVsOpFactory.InnerSingleton,
               StaticRegisterNativesURecomputeUVsOpFactory,0x130,0x10,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<URecomputeUVsOpFactory>,
               InternalVTableHelperCtorCaller<URecomputeUVsOpFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URecomputeUVsOpFactory.InnerSingleton;
}

// MakeNewOperator @ 14c982210

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall URecomputeUVsOpFactory::MakeNewOperator(URecomputeUVsOpFactory *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FPolygroupSet *pFVar2;
  double dVar3;
  TReferenceControllerBase<1> *pTVar4;
  longlong lVar5;
  int iVar6;
  FRecomputeUVsOp *pFVar7;
  undefined8 uVar8;
  FDynamicMesh3 *pFVar9;
  TAxisAlignedBox3<double> *pTVar10;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *pTVar11;
  FDynamicMeshOperator *in_RDX;
  double dVar12;
  double dVar13;
  TAxisAlignedBox3<double> local_38;
  
  pFVar7 = ::operator_new(0x178);
  if (pFVar7 == (FRecomputeUVsOp *)0x0) {
    pFVar7 = (FRecomputeUVsOp *)0x0;
  }
  else {
    memset(pFVar7,0,0x178);
    pFVar7 = UE::Geometry::FRecomputeUVsOp::FRecomputeUVsOp(pFVar7);
  }
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)&(this->Selection).field0_0x0 + 0x40);
  pFVar9 = *(FDynamicMesh3 **)((longlong)&(this->Selection).field0_0x0 + 0x38);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar7->InputMesh).SharedReferenceCount.ReferenceController;
  (pFVar7->InputMesh).Object = pFVar9;
  (pFVar7->InputMesh).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)&(this->Selection).field0_0x0 + 0x30);
  pFVar2 = *(FPolygroupSet **)((longlong)&(this->Selection).field0_0x0 + 0x28);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar7->InputGroups).SharedReferenceCount.ReferenceController;
  (pFVar7->InputGroups).Object = pFVar2;
  (pFVar7->InputGroups).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  UE::Core::Private::Function::CheckCallable((this->InputGroups).Object);
  pFVar2 = (this->InputGroups).Object;
  pTVar11 = *(TSharedPtr<UE::Geometry::FDynamicMesh3,1> **)&this->GetSelectedUVChannel;
  if (*(TSharedPtr<UE::Geometry::FDynamicMesh3,1> **)&this->GetSelectedUVChannel ==
      (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)0x0) {
    pTVar11 = &this->OriginalMesh;
  }
  uVar8 = (**(code **)&pTVar11->Object->Vertices)();
  iVar6 = (*(code *)pFVar2)(uVar8);
  pFVar7->UVLayer = iVar6;
  pFVar7->IslandMode = *(ERecomputeUVsIslandMode *)(this->_padding_ + 0xb4);
  iVar6 = *(int *)(this->_padding_ + 0xb8);
  if (iVar6 == 0) {
    pFVar7->UnwrapType = ExpMap;
  }
  else if (iVar6 == 1) {
    pFVar7->UnwrapType = ConformalFreeBoundary;
  }
  else {
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        pFVar7->UnwrapType = ExpMap;
        pFVar7->bMergingOptimization = true;
      }
      goto LAB_14c982369;
    }
    pFVar7->UnwrapType = SpectralConformal;
  }
  pFVar7->bMergingOptimization = false;
LAB_14c982369:
  pFVar7->bAutoRotate = *(int *)(this->_padding_ + 0xbc) == 1;
  pFVar7->NormalSmoothingRounds = *(int *)(this->_padding_ + 0xc4);
  pFVar7->NormalSmoothingAlpha = (double)*(float *)(this->_padding_ + 200);
  pFVar7->bPreserveIrregularity = *(bool *)(this->_padding_ + 0xc0);
  pFVar7->MergingThreshold = (double)*(float *)(this->_padding_ + 0xcc);
  pFVar7->MaxNormalDeviationDeg = (double)*(float *)(this->_padding_ + 0xd0);
  pFVar7->bPackUVs = false;
  pFVar7->bNormalizeAreas = false;
  pFVar7->bUDIMsEnabled = *(bool *)(this->_padding_ + 0xe0);
  iVar6 = *(int *)(this->_padding_ + 0xd4);
  if (iVar6 == 1) {
    pFVar7->bPackUVs = true;
    pFVar7->PackingTextureResolution = *(int *)(this->_padding_ + 0xd8);
  }
  else if (iVar6 == 2) {
    pFVar7->bPackToOriginalBounds = true;
  }
  else if (iVar6 == 3) {
    pFVar7->bNormalizeAreas = true;
    pFVar9 = TSharedPtr<UE::Geometry::FDynamicMesh3,1>::operator->
                       ((TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)
                        &(this->Selection).field0_0x0.TypedValue.Hash);
    pTVar10 = UE::Geometry::FDynamicMesh3::GetBounds(pFVar9,&local_38,false);
    dVar13 = (pTVar10->Max).field0_0x0._s_0.Z - (pTVar10->Min).field0_0x0._s_0.Z;
    dVar12 = (pTVar10->Max).field0_0x0._s_0.Y - (pTVar10->Min).field0_0x0._s_0.Y;
    dVar3 = (pTVar10->Max).field0_0x0._s_0.X - (pTVar10->Min).field0_0x0._s_0.X;
    if (dVar13 <= 0.0) {
      dVar13 = 0.0;
    }
    if (dVar12 <= 0.0) {
      dVar12 = 0.0;
    }
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    if (dVar13 <= dVar12) {
      dVar13 = dVar12;
    }
    if (dVar13 <= dVar3) {
      dVar13 = dVar3;
    }
    pFVar7->AreaScaling = *(float *)(this->_padding_ + 0xdc) / (float)dVar13;
  }
  else if (iVar6 == 4) {
    pFVar7->bNormalizeAreas = true;
    pFVar7->AreaScaling = *(float *)(this->_padding_ + 0xdc);
  }
  lVar5 = *(longlong *)&(this->GetSelectedUVChannel).field_0x10;
  pFVar7->_padding_ = *(longlong *)&(this->GetSelectedUVChannel).field_0x8;
  pFVar7->_padding_ = lVar5;
  lVar5 = *(longlong *)&(this->GetSelectedUVChannel).field_0x20;
  pFVar7->_padding_ = *(longlong *)&(this->GetSelectedUVChannel).field_0x18;
  pFVar7->_padding_ = lVar5;
  dVar3 = (this->TargetTransform).Rotation.field0_0x0._s_0.X;
  pFVar7->_padding_ = *(longlong *)&(this->GetSelectedUVChannel).field_0x28;
  pFVar7->_padding_ = (longlong)dVar3;
  dVar3 = (this->TargetTransform).Rotation.field0_0x0._s_0.Z;
  pFVar7->_padding_ = (longlong)(this->TargetTransform).Rotation.field0_0x0._s_0.Y;
  pFVar7->_padding_ = (longlong)dVar3;
  dVar3 = (this->TargetTransform).Translation.field0_0x0._s_0.X;
  pFVar7->_padding_ = (longlong)(this->TargetTransform).Rotation.field0_0x0._s_0.W;
  pFVar7->_padding_ = (longlong)dVar3;
  TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::operator=
            (&pFVar7->Selection,
             (TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)&this->_padding_);
  in_RDX->_padding_ = (longlong)pFVar7;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// StaticRegisterNativesURecomputeUVsOpFactory @ 14c986b80

void __cdecl URecomputeUVsOpFactory::StaticRegisterNativesURecomputeUVsOpFactory(void)

{
  return;
}

