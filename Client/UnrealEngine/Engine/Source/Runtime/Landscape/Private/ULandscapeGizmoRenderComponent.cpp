// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 9

// StaticClass @ 145ef14d0

UClass * __cdecl ULandscapeGizmoRenderComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeGizmoRenderComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeGizmoRenderComponent",
               &Z_Registration_Info_UClass_ULandscapeGizmoRenderComponent.InnerSingleton,
               StaticRegisterNativesULandscapeGizmoRenderComponent,0x550,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeGizmoRenderComponent>,
               InternalVTableHelperCtorCaller<ULandscapeGizmoRenderComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeGizmoRenderComponent.InnerSingleton;
}

// ULandscapeGizmoRenderComponent @ 145ef3b00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ULandscapeGizmoRenderComponent * __thiscall
ULandscapeGizmoRenderComponent::ULandscapeGizmoRenderComponent
          (ULandscapeGizmoRenderComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// ~ULandscapeGizmoRenderComponent @ 145ef4280

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
ULandscapeGizmoRenderComponent::~ULandscapeGizmoRenderComponent
          (ULandscapeGizmoRenderComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// GetPrivateStaticClass @ 145ef5720

UClass * __cdecl ULandscapeGizmoRenderComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ULandscapeGizmoRenderComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"LandscapeGizmoRenderComponent",
               &Z_Registration_Info_UClass_ULandscapeGizmoRenderComponent.InnerSingleton,
               StaticRegisterNativesULandscapeGizmoRenderComponent,0x550,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ULandscapeGizmoRenderComponent>,
               InternalVTableHelperCtorCaller<ULandscapeGizmoRenderComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ULandscapeGizmoRenderComponent.InnerSingleton;
}

// StaticRegisterNativesULandscapeGizmoRenderComponent @ 145ef6020

void __cdecl
ULandscapeGizmoRenderComponent::StaticRegisterNativesULandscapeGizmoRenderComponent(void)

{
  return;
}

// ULandscapeGizmoRenderComponent @ 145f42980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ULandscapeGizmoRenderComponent * __thiscall
ULandscapeGizmoRenderComponent::ULandscapeGizmoRenderComponent
          (ULandscapeGizmoRenderComponent *this,FObjectInitializer *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->field_0x1a9 = this->field_0x1a9 | 8;
  this->field_0x9b = this->field_0x9b | 2;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::BlockAll_ProfileName,true);
  return this;
}

// CalcBounds @ 145f4da20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TBoxSphereBounds<double,double> * __thiscall
ULandscapeGizmoRenderComponent::CalcBounds
          (ULandscapeGizmoRenderComponent *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TTransform<double> *param_1)

{
  USceneComponent::CalcBounds((USceneComponent *)this,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// CreateSceneProxy @ 145f4f860

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
ULandscapeGizmoRenderComponent::CreateSceneProxy(ULandscapeGizmoRenderComponent *this)

{
  FPrimitiveSceneProxy *this_00;
  
  this_00 = ::operator_new(0x450);
  if (this_00 != (FPrimitiveSceneProxy *)0x0) {
    FPrimitiveSceneProxy::FPrimitiveSceneProxy(this_00,(UPrimitiveComponent *)this,(FName)0x0);
    *(undefined8 *)((longlong)&this_00[1].PrimitiveColor.field0_0x0 + 8) = 0;
    this_00->_padding_ = (longlong)&___7FLandscapeGizmoRenderSceneProxy__6B_;
    this_00[1].Bounds.Origin.field0_0x0._s_0.Z = 0.0;
    this_00[1].Bounds.BoxExtent.field0_0x0._s_0.X = 0.0;
    this_00[1].Bounds.BoxExtent.field0_0x0._s_0.Y = 0.0;
    this_00[1].Bounds.BoxExtent.field0_0x0._s_0.Z = 0.0;
    *(undefined2 *)&this_00[1].CustomPrimitiveData.Data.AllocatorInstance.Data = 0;
    this_00[1].CustomPrimitiveData.Data.ArrayNum = 0;
    this_00[1].CustomPrimitiveData.Data.ArrayMax = 0;
    this_00[1].Bounds.SphereRadius = 0.0;
    this_00[1].LocalBounds.Origin.field0_0x0._s_0.X = 0.0;
    return this_00;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetUsedMaterials @ 145f57020

void __thiscall
ULandscapeGizmoRenderComponent::GetUsedMaterials
          (ULandscapeGizmoRenderComponent *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  return;
}

