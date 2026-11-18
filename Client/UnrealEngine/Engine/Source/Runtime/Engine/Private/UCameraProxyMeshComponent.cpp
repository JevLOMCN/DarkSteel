// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticClass @ 147673120

UClass * __cdecl UCameraProxyMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraProxyMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraProxyMeshComponent",
               &Z_Registration_Info_UClass_UCameraProxyMeshComponent.InnerSingleton,
               StaticRegisterNativesUCameraProxyMeshComponent,0x650,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraProxyMeshComponent>,
               InternalVTableHelperCtorCaller<UCameraProxyMeshComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraProxyMeshComponent.InnerSingleton;
}

// UCameraProxyMeshComponent @ 147688f70

UCameraProxyMeshComponent * __thiscall
UCameraProxyMeshComponent::UCameraProxyMeshComponent
          (UCameraProxyMeshComponent *this,FVTableHelper *param_1)

{
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// UCameraProxyMeshComponent @ 147688fe0

UCameraProxyMeshComponent * __thiscall
UCameraProxyMeshComponent::UCameraProxyMeshComponent
          (UCameraProxyMeshComponent *this,FObjectInitializer *param_1)

{
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// ~UCameraProxyMeshComponent @ 14768ab80

void __thiscall
UCameraProxyMeshComponent::~UCameraProxyMeshComponent(UCameraProxyMeshComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  return;
}

// CreateSceneProxy @ 14769a1f0

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
UCameraProxyMeshComponent::CreateSceneProxy(UCameraProxyMeshComponent *this)

{
  FStaticMeshSceneProxy *this_00;
  
  this_00 = ::operator_new(0xb90);
  if (this_00 != (FStaticMeshSceneProxy *)0x0) {
    FStaticMeshSceneProxy::FStaticMeshSceneProxy(this_00,(UStaticMeshComponent *)this,false);
    *(undefined ***)this_00 =
         &`UCameraProxyMeshComponent::CreateSceneProxy'::`2'::FCameraProxyMeshProxy::_vftable_;
    return (FPrimitiveSceneProxy *)this_00;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetPrivateStaticClass @ 1476b4760

UClass * __cdecl UCameraProxyMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCameraProxyMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"CameraProxyMeshComponent",
               &Z_Registration_Info_UClass_UCameraProxyMeshComponent.InnerSingleton,
               StaticRegisterNativesUCameraProxyMeshComponent,0x650,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCameraProxyMeshComponent>,
               InternalVTableHelperCtorCaller<UCameraProxyMeshComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCameraProxyMeshComponent.InnerSingleton;
}

// StaticRegisterNativesUCameraProxyMeshComponent @ 1476ca450

void __cdecl UCameraProxyMeshComponent::StaticRegisterNativesUCameraProxyMeshComponent(void)

{
  return;
}

