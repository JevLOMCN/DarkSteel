// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 9

// StaticClass @ 14c93fd30

UClass * __cdecl UUVLayoutOperatorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVLayoutOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingOperators",L"UVLayoutOperatorFactory",
               &Z_Registration_Info_UClass_UUVLayoutOperatorFactory.InnerSingleton,
               StaticRegisterNativesUUVLayoutOperatorFactory,0x180,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVLayoutOperatorFactory>,
               InternalVTableHelperCtorCaller<UUVLayoutOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVLayoutOperatorFactory.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14c940f10

int __cdecl UUVLayoutOperatorFactory::<lambda_39_>::<lambda_invoker_cdecl>(void)

{
  return 0;
}

// UUVLayoutOperatorFactory @ 14c9486b0

UUVLayoutOperatorFactory * __thiscall
UUVLayoutOperatorFactory::UUVLayoutOperatorFactory
          (UUVLayoutOperatorFactory *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0xc) = 0xffffffff;
  (this->Settings).field0_0x0.DebugPtr = (UUVLayoutProperties *)0x0;
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
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  *(undefined8 *)&this->GetSelectedUVChannel = 0;
  *(undefined8 *)&(this->GetSelectedUVChannel).field_0x28 = 0;
  *(undefined ***)&(this->GetSelectedUVChannel).field_0x10 =
       &___7__TFunction_OwnedObject_P6AHXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->GetSelectedUVChannel).field_0x18;
  *(code **)puVar1 = <lambda_39_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetSelectedUVChannel =
         UE::Core::Private::Function::TFunctionRefCaller<int_(__cdecl*)(void),int>::Call;
  }
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TargetTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TargetTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TargetTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TargetTransform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetTransform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetTransform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TargetTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TargetTransform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  *(undefined8 *)&(this->TextureResolutionPerUDIM).field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x40) = 0;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x48) = 0;
  return this;
}

// UUVLayoutOperatorFactory @ 14c948810

UUVLayoutOperatorFactory * __thiscall
UUVLayoutOperatorFactory::UUVLayoutOperatorFactory
          (UUVLayoutOperatorFactory *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0xc) = 0xffffffff;
  (this->Settings).field0_0x0.DebugPtr = (UUVLayoutProperties *)0x0;
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
  (this->OriginalMesh).Object = (FDynamicMesh3 *)0x0;
  (this->OriginalMesh).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  *(undefined8 *)&this->GetSelectedUVChannel = 0;
  *(undefined8 *)&(this->GetSelectedUVChannel).field_0x28 = 0;
  *(undefined ***)&(this->GetSelectedUVChannel).field_0x10 =
       &___7__TFunction_OwnedObject_P6AHXZ_00_0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->GetSelectedUVChannel).field_0x18;
  *(code **)puVar1 = <lambda_39_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->GetSelectedUVChannel =
         UE::Core::Private::Function::TFunctionRefCaller<int_(__cdecl*)(void),int>::Call;
  }
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  (this->TargetTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (this->TargetTransform).Rotation.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetTransform).Rotation.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetTransform).Rotation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (this->TargetTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (this->TargetTransform).Translation.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetTransform).Translation.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetTransform).Translation.ZW.m128d_f64[1] = (double)fVar4;
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
  (this->TargetTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (this->TargetTransform).Scale3D.XY.m128d_f64[1] = (double)fVar2;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar3;
  (this->TargetTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar4;
  *(undefined8 *)&(this->TextureResolutionPerUDIM).field0_0x0 = 0;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 8) = 0;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0xc) = 0xffffffff;
  *(undefined8 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x20) = 0;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x28) = 0;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x34) = 0;
  *(undefined8 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x40) = 0;
  *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x48) = 0;
  return this;
}

// ~UUVLayoutOperatorFactory @ 14c949ba0

void __thiscall UUVLayoutOperatorFactory::~UUVLayoutOperatorFactory(UUVLayoutOperatorFactory *this)

{
  void *pvVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
  if (*(int *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0xc) != -1) {
    *(undefined4 *)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x48) = 0;
    pvVar1 = *(void **)((longlong)&(this->TextureResolutionPerUDIM).field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&this->TextureResolutionPerUDIM);
  }
  if (*(longlong *)&this->GetSelectedUVChannel != 0) {
    plVar2 = *(longlong **)&(this->GetSelectedUVChannel).field_0x28;
    plVar3 = (longlong *)&(this->GetSelectedUVChannel).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->OriginalMesh).SharedReferenceCount.ReferenceController);
  if (*(int *)((longlong)&(this->Selection).field0_0x0 + 0xc) != -1) {
    (this->Selection).field0_0x0.TypedValue.HashSize = 0;
    pvVar1 = *(void **)((longlong)&(this->Selection).field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
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

// GetPrivateStaticClass @ 14c980090

UClass * __cdecl UUVLayoutOperatorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVLayoutOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingOperators",L"UVLayoutOperatorFactory",
               &Z_Registration_Info_UClass_UUVLayoutOperatorFactory.InnerSingleton,
               StaticRegisterNativesUUVLayoutOperatorFactory,0x180,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVLayoutOperatorFactory>,
               InternalVTableHelperCtorCaller<UUVLayoutOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVLayoutOperatorFactory.InnerSingleton;
}

// MakeNewOperator @ 14c982550

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall UUVLayoutOperatorFactory::MakeNewOperator(UUVLayoutOperatorFactory *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDynamicMesh3 *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  double dVar13;
  TVector2<float>_u_0 TVar14;
  int iVar15;
  FUVLayoutOp *pFVar16;
  undefined8 uVar17;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *pTVar18;
  FDynamicMeshOperator *in_RDX;
  
  pFVar16 = ::operator_new(0x160);
  if (pFVar16 == (FUVLayoutOp *)0x0) {
    pFVar16 = (FUVLayoutOp *)0x0;
  }
  else {
    memset(pFVar16,0,0x160);
    pFVar16 = UE::Geometry::FUVLayoutOp::FUVLayoutOp(pFVar16);
  }
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)&(this->Selection).field0_0x0 + 0x30);
  pFVar2 = *(FDynamicMesh3 **)((longlong)&(this->Selection).field0_0x0 + 0x28);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (pFVar16->OriginalMesh).SharedReferenceCount.ReferenceController;
  (pFVar16->OriginalMesh).Object = pFVar2;
  (pFVar16->OriginalMesh).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar15 = *(int *)(this->_padding_ + 0xb0);
  if (iVar15 == 0) {
    pFVar16->UVLayoutMode = TransformOnly;
  }
  else if (iVar15 == 1) {
    pFVar16->UVLayoutMode = StackInUnitRect;
  }
  else if (iVar15 == 2) {
    pFVar16->UVLayoutMode = RepackToUnitRect;
  }
  else if (iVar15 == 3) {
    pFVar16->UVLayoutMode = Normalize;
  }
  UE::Core::Private::Function::CheckCallable
            (*(void **)((longlong)&(this->Selection).field0_0x0 + 0x40));
  pcVar3 = *(code **)((longlong)&(this->Selection).field0_0x0 + 0x40);
  pTVar18 = &this->OriginalMesh;
  if (*(TSharedPtr<UE::Geometry::FDynamicMesh3,1> **)&this->GetSelectedUVChannel !=
      (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)0x0) {
    pTVar18 = *(TSharedPtr<UE::Geometry::FDynamicMesh3,1> **)&this->GetSelectedUVChannel;
  }
  uVar17 = (**(code **)&pTVar18->Object->Vertices)();
  iVar15 = (*pcVar3)(uVar17);
  pFVar16->UVLayerIndex = iVar15;
  pFVar16->TextureResolution = *(int *)(this->_padding_ + 0xb4);
  pFVar16->bPreserveScale = *(bool *)(this->_padding_ + 0xd0);
  pFVar16->bPreserveRotation = *(bool *)(this->_padding_ + 0xd1);
  pFVar16->bAllowFlips = *(bool *)(this->_padding_ + 0xd2);
  pFVar16->UVScaleFactor = *(float *)(this->_padding_ + 0xb8);
  TVar14._s_0.Y = (float)*(double *)(this->_padding_ + 200);
  TVar14._s_0.X = (float)*(double *)(this->_padding_ + 0xc0);
  (pFVar16->UVTranslation).field0_0x0 = TVar14;
  lVar7 = *(longlong *)&(this->GetSelectedUVChannel).field_0x10;
  lVar8 = *(longlong *)&(this->GetSelectedUVChannel).field_0x18;
  lVar9 = *(longlong *)&(this->GetSelectedUVChannel).field_0x20;
  dVar5 = (this->TargetTransform).Rotation.XY.m128d_f64[1];
  dVar10 = (this->TargetTransform).Rotation.ZW.m128d_f64[1];
  dVar11 = (this->TargetTransform).Translation.XY.m128d_f64[0];
  lVar12 = *(longlong *)&(this->GetSelectedUVChannel).field_0x28;
  dVar13 = (this->TargetTransform).Rotation.XY.m128d_f64[0];
  dVar6 = (this->TargetTransform).Translation.XY.m128d_f64[1];
  pFVar16->_padding_ = *(longlong *)&(this->GetSelectedUVChannel).field_0x8;
  pFVar16->_padding_ = lVar7;
  pFVar16->_padding_ = lVar8;
  pFVar16->_padding_ = lVar9;
  pFVar16->_padding_ = lVar12;
  pFVar16->_padding_ = (longlong)dVar13;
  pFVar16->_padding_ = (longlong)dVar5;
  pFVar16->_padding_ = (longlong)dVar10;
  pFVar16->_padding_ = (longlong)dVar11;
  pFVar16->_padding_ = (longlong)dVar6;
  pFVar16->bMaintainOriginatingUDIM = *(bool *)(this->_padding_ + 0xd3);
  TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_>::operator=
            (&pFVar16->Selection,
             (TOptional<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>_> *)&this->_padding_);
  TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>::operator=
            (&pFVar16->TextureResolutionPerUDIM,
             (TOptional<TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>_>
              *)((this->TargetTransform).Translation.ZW.m128d_f64 + 1));
  in_RDX->_padding_ = (longlong)pFVar16;
  return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
          )in_RDX;
}

// StaticRegisterNativesUUVLayoutOperatorFactory @ 14c986be0

void __cdecl UUVLayoutOperatorFactory::StaticRegisterNativesUUVLayoutOperatorFactory(void)

{
  return;
}

// __VTableCtorCaller @ 14c988630

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UUVLayoutOperatorFactory::__VTableCtorCaller(FVTableHelper *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  
  pUVar4 = GetTransientPackageAsObject();
  pUVar5 = GetPrivateStaticClass();
  pUVar4 = StaticAllocateObject
                     (pUVar5,pUVar4,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar4 != (UObject *)0x0) {
    UObject::UObject(pUVar4,param_1);
    *(undefined8 *)&pUVar4[1].field_0x8 = 0;
    *(undefined ***)pUVar4 = &_vftable__for__UObject__;
    *(undefined8 *)&pUVar4[1].field_0x10 = 0;
    *(undefined ***)(pUVar4 + 1) = &_vftable__for__UE__Geometry__IDynamicMeshOperatorFactory__;
    *(undefined4 *)&pUVar4[1].field_0x18 = 0;
    *(undefined4 *)&pUVar4[1].field_0x1c = 0xffffffff;
    *(undefined8 *)&pUVar4[2].field_0x8 = 0;
    *(undefined4 *)&pUVar4[2].field_0x10 = 0;
    *(undefined4 *)&pUVar4[2].field_0x14 = 0x80;
    *(undefined4 *)&pUVar4[2].field_0x18 = 0xffffffff;
    *(undefined4 *)&pUVar4[2].field_0x1c = 0;
    *(undefined8 *)(pUVar4 + 3) = 0;
    *(undefined4 *)&pUVar4[3].field_0x8 = 0;
    *(undefined8 *)&pUVar4[3].field_0x10 = 0;
    *(undefined8 *)&pUVar4[3].field_0x18 = 0;
    *(undefined8 *)(pUVar4 + 4) = 0;
    *(undefined8 *)(pUVar4 + 5) = 0;
    *(undefined ***)&pUVar4[4].field_0x10 =
         &___7__TFunction_OwnedObject_P6AHXZ_00_0A__Function_Private_Core_UE__6B_;
    *(code **)&pUVar4[4].field_0x18 = <lambda_39_>::<lambda_invoker_cdecl>;
    if (&pUVar4[4].field_0x18 != (undefined1 *)0x0) {
      *(code **)(pUVar4 + 4) =
           UE::Core::Private::Function::TFunctionRefCaller<int_(__cdecl*)(void),int>::Call;
    }
    fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
    *(double *)&pUVar4[5].field_0x8 = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    *(double *)&pUVar4[5].field_0x10 = (double)fVar1;
    *(double *)&pUVar4[5].field_0x18 = (double)fVar2;
    *(double *)&pUVar4[5].field_0x20 = (double)fVar3;
    fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
    *(double *)(pUVar4 + 6) = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    *(double *)&pUVar4[6].field_0x8 = (double)fVar1;
    *(double *)&pUVar4[6].field_0x10 = (double)fVar2;
    *(double *)&pUVar4[6].field_0x18 = (double)fVar3;
    fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
    *(double *)&pUVar4[6].field_0x20 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    *(double *)(pUVar4 + 7) = (double)fVar1;
    *(double *)&pUVar4[7].field_0x8 = (double)fVar2;
    *(double *)&pUVar4[7].field_0x10 = (double)fVar3;
    *(undefined8 *)&pUVar4[7].field_0x18 = 0;
    *(undefined4 *)&pUVar4[7].field_0x20 = 0;
    *(undefined4 *)&pUVar4[7].field_0x24 = 0xffffffff;
    *(undefined8 *)&pUVar4[8].field_0x10 = 0;
    *(undefined4 *)&pUVar4[8].field_0x18 = 0;
    *(undefined4 *)&pUVar4[8].field_0x1c = 0x80;
    *(undefined4 *)&pUVar4[8].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar4[8].field_0x24 = 0;
    *(undefined8 *)&pUVar4[9].field_0x8 = 0;
    *(undefined4 *)&pUVar4[9].field_0x10 = 0;
    return pUVar4;
  }
  return (UObject *)0x0;
}

