// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 9

// StaticClass @ 14c940920

UClass * __cdecl UUVTexelDensityOperatorFactory::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVTexelDensityOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingOperators",L"UVTexelDensityOperatorFactory",
               &Z_Registration_Info_UClass_UUVTexelDensityOperatorFactory.InnerSingleton,
               StaticRegisterNativesUUVTexelDensityOperatorFactory,0x180,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVTexelDensityOperatorFactory>,
               InternalVTableHelperCtorCaller<UUVTexelDensityOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVTexelDensityOperatorFactory.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 14c940f00

int __cdecl UUVTexelDensityOperatorFactory::<lambda_38_>::<lambda_invoker_cdecl>(void)

{
  return 0;
}

// UUVTexelDensityOperatorFactory @ 14c948a50

UUVTexelDensityOperatorFactory * __thiscall
UUVTexelDensityOperatorFactory::UUVTexelDensityOperatorFactory
          (UUVTexelDensityOperatorFactory *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0xc) = 0xffffffff;
  (this->Settings).field0_0x0.DebugPtr = (UUVEditorTexelDensitySettings *)0x0;
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
  *(code **)puVar1 = <lambda_38_>::<lambda_invoker_cdecl>;
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

// UUVTexelDensityOperatorFactory @ 14c948bb0

UUVTexelDensityOperatorFactory * __thiscall
UUVTexelDensityOperatorFactory::UUVTexelDensityOperatorFactory
          (UUVTexelDensityOperatorFactory *this,FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  UObject::UObject((UObject *)this,param_1);
  *(undefined4 *)((longlong)&(this->Selection).field0_0x0 + 0xc) = 0xffffffff;
  (this->Settings).field0_0x0.DebugPtr = (UUVEditorTexelDensitySettings *)0x0;
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
  *(code **)puVar1 = <lambda_38_>::<lambda_invoker_cdecl>;
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

// ~UUVTexelDensityOperatorFactory @ 14c949c90

void __thiscall
UUVTexelDensityOperatorFactory::~UUVTexelDensityOperatorFactory
          (UUVTexelDensityOperatorFactory *this)

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

// GetPrivateStaticClass @ 14c980200

UClass * __cdecl UUVTexelDensityOperatorFactory::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UUVTexelDensityOperatorFactory.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingOperators",L"UVTexelDensityOperatorFactory",
               &Z_Registration_Info_UClass_UUVTexelDensityOperatorFactory.InnerSingleton,
               StaticRegisterNativesUUVTexelDensityOperatorFactory,0x180,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UUVTexelDensityOperatorFactory>,
               InternalVTableHelperCtorCaller<UUVTexelDensityOperatorFactory>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UUVTexelDensityOperatorFactory.InnerSingleton;
}

// MakeNewOperator @ 14c9827d0

TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
__thiscall UUVTexelDensityOperatorFactory::MakeNewOperator(UUVTexelDensityOperatorFactory *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FDynamicMesh3 *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  FUVEditorTexelDensityOp *pFVar16;
  TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
  TVar17;
  undefined8 uVar18;
  TSharedPtr<UE::Geometry::FDynamicMesh3,1> *pTVar19;
  FDynamicMeshOperator *in_RDX;
  
  pFVar16 = ::operator_new(0x158);
  if (pFVar16 == (FUVEditorTexelDensityOp *)0x0) {
    pFVar16 = (FUVEditorTexelDensityOp *)0x0;
  }
  else {
    memset(pFVar16,0,0x158);
    pFVar16 = UE::Geometry::FUVEditorTexelDensityOp::FUVEditorTexelDensityOp(pFVar16);
  }
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)&(this->Selection).field0_0x0 + 0x30);
  pFVar2 = *(FDynamicMesh3 **)((longlong)&(this->Selection).field0_0x0 + 0x28);
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = (pFVar16->OriginalMesh).SharedReferenceCount.ReferenceController;
  (pFVar16->OriginalMesh).Object = pFVar2;
  (pFVar16->OriginalMesh).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  iVar15 = *(int *)(this->_padding_ + 0xb0);
  if (iVar15 == 0) {
    pFVar16->TexelDensityMode = ScaleIslands;
  }
  else if (iVar15 == 1) {
    pFVar16->TexelDensityMode = ScaleGlobal;
  }
  else if (iVar15 == 2) {
    pFVar16->TexelDensityMode = Normalize;
  }
  else {
    bVar14 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<7629649315580871005>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\MeshModelingToolset\\Source\\ModelingOperators\\Private\\ParameterizationOps\\TexelDensityOp.cpp"
                        ,0x15d,"false");
    if (bVar14) {
      pcVar3 = (code *)swi(3);
      TVar17.Ptr = (FDynamicMeshOperator *)(*pcVar3)();
      return (TUniquePtr<UE::Geometry::FDynamicMeshOperator,TDefaultDelete<UE::Geometry::FDynamicMeshOperator>_>
              )TVar17.Ptr;
    }
  }
  pFVar16->TextureResolution = (int)*(float *)(this->_padding_ + 0xbc);
  pFVar16->TargetWorldSpaceMeasurement = (int)*(float *)(this->_padding_ + 0xb4);
  pFVar16->TargetPixelCountMeasurement = (int)*(float *)(this->_padding_ + 0xb8);
  UE::Core::Private::Function::CheckCallable
            (*(void **)((longlong)&(this->Selection).field0_0x0 + 0x40));
  pcVar3 = *(code **)((longlong)&(this->Selection).field0_0x0 + 0x40);
  pTVar19 = &this->OriginalMesh;
  if (*(TSharedPtr<UE::Geometry::FDynamicMesh3,1> **)&this->GetSelectedUVChannel !=
      (TSharedPtr<UE::Geometry::FDynamicMesh3,1> *)0x0) {
    pTVar19 = *(TSharedPtr<UE::Geometry::FDynamicMesh3,1> **)&this->GetSelectedUVChannel;
  }
  uVar18 = (**(code **)&pTVar19->Object->Vertices)();
  iVar15 = (*pcVar3)(uVar18);
  pFVar16->UVLayerIndex = iVar15;
  pFVar16->TextureResolution = (int)*(float *)(this->_padding_ + 0xbc);
  lVar7 = *(longlong *)&(this->GetSelectedUVChannel).field_0x10;
  lVar8 = *(longlong *)&(this->GetSelectedUVChannel).field_0x18;
  lVar9 = *(longlong *)&(this->GetSelectedUVChannel).field_0x20;
  dVar4 = (this->TargetTransform).Rotation.XY.m128d_f64[1];
  dVar10 = (this->TargetTransform).Rotation.ZW.m128d_f64[1];
  dVar11 = (this->TargetTransform).Translation.XY.m128d_f64[0];
  lVar12 = *(longlong *)&(this->GetSelectedUVChannel).field_0x28;
  dVar13 = (this->TargetTransform).Rotation.XY.m128d_f64[0];
  dVar5 = (this->TargetTransform).Translation.XY.m128d_f64[1];
  pFVar16->_padding_ = *(longlong *)&(this->GetSelectedUVChannel).field_0x8;
  pFVar16->_padding_ = lVar7;
  pFVar16->_padding_ = lVar8;
  pFVar16->_padding_ = lVar9;
  pFVar16->_padding_ = lVar12;
  pFVar16->_padding_ = (longlong)dVar13;
  pFVar16->_padding_ = (longlong)dVar4;
  pFVar16->_padding_ = (longlong)dVar10;
  pFVar16->_padding_ = (longlong)dVar11;
  pFVar16->_padding_ = (longlong)dVar5;
  pFVar16->bMaintainOriginatingUDIM = *(bool *)(this->_padding_ + 0xc0);
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

// StaticRegisterNativesUUVTexelDensityOperatorFactory @ 14c986c00

void __cdecl
UUVTexelDensityOperatorFactory::StaticRegisterNativesUUVTexelDensityOperatorFactory(void)

{
  return;
}

// __VTableCtorCaller @ 14c988810

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UUVTexelDensityOperatorFactory::__VTableCtorCaller(FVTableHelper *param_1)

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
    *(code **)&pUVar4[4].field_0x18 = <lambda_38_>::<lambda_invoker_cdecl>;
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

