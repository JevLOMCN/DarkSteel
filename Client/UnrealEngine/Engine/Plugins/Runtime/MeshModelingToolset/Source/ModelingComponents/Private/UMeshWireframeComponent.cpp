// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 12

// StaticClass @ 14ca3ff50

UClass * __cdecl UMeshWireframeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshWireframeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshWireframeComponent",
               &Z_Registration_Info_UClass_UMeshWireframeComponent.InnerSingleton,
               StaticRegisterNativesUMeshWireframeComponent,0x640,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshWireframeComponent>,
               InternalVTableHelperCtorCaller<UMeshWireframeComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshWireframeComponent.InnerSingleton;
}

// UMeshWireframeComponent @ 14ca68090

UMeshWireframeComponent * __thiscall
UMeshWireframeComponent::UMeshWireframeComponent
          (UMeshWireframeComponent *this,FVTableHelper *param_1)

{
  UMeshComponent::UMeshComponent((UMeshComponent *)this,param_1);
  this->LineDepthBias = 0.1;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->LineMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SourceProvider).Object = (IMeshWireframeSourceProvider *)0x0;
  (this->SourceProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->LineDepthBiasSizeScale = 1.0;
  this->ThicknessScale = 1.0;
  this->bEnableWireframe = true;
  (this->WireframeColor).field0_0x0.Bits = 0xff808080;
  this->WireframeThickness = 1.0;
  this->bEnableBoundaryEdges = true;
  (this->BoundaryEdgeColor).field0_0x0.Bits = 0xfff50f0f;
  this->BoundaryEdgeThickness = 4.0;
  this->bEnableUVSeams = true;
  (this->UVSeamColor).field0_0x0.Bits = 0xfff0a00f;
  this->UVSeamThickness = 2.0;
  this->bEnableNormalSeams = true;
  (this->NormalSeamColor).field0_0x0.Bits = 0xff8080f0;
  this->NormalSeamThickness = 2.0;
  this->bEnableTangentSeams = true;
  (this->TangentSeamColor).field0_0x0.Bits = 0xff40f0f0;
  this->TangentSeamThickness = 2.0;
  this->bEnableColorSeams = true;
  (this->ColorSeamColor).field0_0x0.Bits = 0xff2ecc71;
  this->ColorSeamThickness = 2.0;
  return this;
}

// UMeshWireframeComponent @ 14ca681d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UMeshWireframeComponent * __thiscall
UMeshWireframeComponent::UMeshWireframeComponent(UMeshWireframeComponent *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UMeshComponent::UMeshComponent((UMeshComponent *)this,pFVar1);
  this->field_0x27e = this->field_0x27e & 0xfe;
  this->field_0x27d = this->field_0x27d & 0xef;
  this->field_0x42 = this->field_0x42 & 0xfd;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  (this->LineMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->SourceProvider).Object = (IMeshWireframeSourceProvider *)0x0;
  (this->SourceProvider).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->LineDepthBias = 0.1;
  this->LineDepthBiasSizeScale = 1.0;
  this->ThicknessScale = 1.0;
  this->bEnableWireframe = true;
  (this->WireframeColor).field0_0x0.Bits = 0xff808080;
  this->WireframeThickness = 1.0;
  this->bEnableBoundaryEdges = true;
  (this->BoundaryEdgeColor).field0_0x0.Bits = 0xfff50f0f;
  this->BoundaryEdgeThickness = 4.0;
  this->bEnableUVSeams = true;
  (this->UVSeamColor).field0_0x0.Bits = 0xfff0a00f;
  this->UVSeamThickness = 2.0;
  this->bEnableNormalSeams = true;
  (this->NormalSeamColor).field0_0x0.Bits = 0xff8080f0;
  this->NormalSeamThickness = 2.0;
  this->bEnableTangentSeams = true;
  (this->TangentSeamColor).field0_0x0.Bits = 0xff40f0f0;
  this->TangentSeamThickness = 2.0;
  this->bEnableColorSeams = true;
  (this->ColorSeamColor).field0_0x0.Bits = 0xff2ecc71;
  this->ColorSeamThickness = 2.0;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
  return this;
}

// ~UMeshWireframeComponent @ 14ca6b7a0

void __thiscall UMeshWireframeComponent::~UMeshWireframeComponent(UMeshWireframeComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SourceProvider).SharedReferenceCount.ReferenceController);
  UMeshComponent::~UMeshComponent((UMeshComponent *)this);
  return;
}

// CalcBounds @ 14ca7b060

TBoxSphereBounds<double,double> * __thiscall
UMeshWireframeComponent::CalcBounds
          (UMeshWireframeComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  TMatrix<double> local_88;
  
  UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_88);
  UE::Math::TBoxSphereBounds<double,double>::TransformBy
            (&this->LocalBounds,__return_storage_ptr__,&local_88);
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 14ca85670

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall
UMeshWireframeComponent::CreateSceneProxy(UMeshWireframeComponent *this)

{
  IMeshWireframeSourceProvider *pIVar1;
  FPrimitiveSceneProxy *local_res8 [4];
  UMeshWireframeComponent *local_28;
  FPrimitiveSceneProxy **local_20;
  code *local_18;
  UMeshWireframeComponent **local_10;
  
  pIVar1 = (this->SourceProvider).Object;
  if (pIVar1 != (IMeshWireframeSourceProvider *)0x0) {
    local_res8[0] = (FPrimitiveSceneProxy *)0x0;
    local_20 = local_res8;
    local_10 = &local_28;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshWireframeComponent::CreateSceneProxy'::__l5::<lambda_1>,void,IMeshWireframeSource_const_&>
               ::Call;
    local_28 = this;
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_18);
    return local_res8[0];
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetNumMaterials @ 14ca90880

int __thiscall UMeshWireframeComponent::GetNumMaterials(UMeshWireframeComponent *this)

{
  return 1;
}

// GetPrivateStaticClass @ 14ca91970

UClass * __cdecl UMeshWireframeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMeshWireframeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"MeshWireframeComponent",
               &Z_Registration_Info_UClass_UMeshWireframeComponent.InnerSingleton,
               StaticRegisterNativesUMeshWireframeComponent,0x640,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UMeshWireframeComponent>,
               InternalVTableHelperCtorCaller<UMeshWireframeComponent>,local_res8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMeshWireframeComponent.InnerSingleton;
}

// SetLineMaterial @ 14caa3950

void __thiscall
UMeshWireframeComponent::SetLineMaterial(UMeshWireframeComponent *this,UMaterialInterface *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->LineMaterial).field0_0x0.DebugPtr = param_1;
                    /* WARNING: Could not recover jumptable at 0x00014caa3992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x6b8))(this,0,param_1);
  return;
}

// SetWireframeSourceProvider @ 14caa4a10

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
UMeshWireframeComponent::SetWireframeSourceProvider
          (UMeshWireframeComponent *this,TSharedPtr<IMeshWireframeSourceProvider,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  IMeshWireframeSourceProvider *pIVar2;
  UMeshWireframeComponent *local_res8;
  code *local_28;
  UMeshWireframeComponent **local_20;
  IMeshWireframeSourceProvider *local_18;
  TReferenceControllerBase<1> *pTStack_10;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  pIVar2 = param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18 = (this->SourceProvider).Object;
  pTStack_10 = (this->SourceProvider).SharedReferenceCount.ReferenceController;
  (this->SourceProvider).Object = pIVar2;
  (this->SourceProvider).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
  pIVar2 = (this->SourceProvider).Object;
  if (pIVar2 != (IMeshWireframeSourceProvider *)0x0) {
    local_20 = &local_res8;
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshWireframeComponent::UpdateWireframe'::__l5::<lambda_1>,void,IMeshWireframeSource_const_&>
               ::Call;
    local_res8 = this;
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_28);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// StaticRegisterNativesUMeshWireframeComponent @ 14caa71e0

void __cdecl UMeshWireframeComponent::StaticRegisterNativesUMeshWireframeComponent(void)

{
  return;
}

// UpdateWireframe @ 14caa9020

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMeshWireframeComponent::UpdateWireframe(UMeshWireframeComponent *this)

{
  IMeshWireframeSourceProvider *pIVar1;
  UMeshWireframeComponent *local_res8 [4];
  code *local_18;
  UMeshWireframeComponent **local_10;
  
  pIVar1 = (this->SourceProvider).Object;
  if (pIVar1 != (IMeshWireframeSourceProvider *)0x0) {
    local_10 = local_res8;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`UMeshWireframeComponent::UpdateWireframe'::__l5::<lambda_1>,void,IMeshWireframeSource_const_&>
               ::Call;
    local_res8[0] = this;
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,&local_18);
  }
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

