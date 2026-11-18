// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticClass @ 14788d230

UClass * __cdecl UDrawSphereComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawSphereComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DrawSphereComponent",
               &Z_Registration_Info_UClass_UDrawSphereComponent.InnerSingleton,
               StaticRegisterNativesUDrawSphereComponent,0x570,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDrawSphereComponent>,
               InternalVTableHelperCtorCaller<UDrawSphereComponent>,local_res8,
               USphereComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawSphereComponent.InnerSingleton;
}

// UDrawSphereComponent @ 1478a8ae0

UDrawSphereComponent * __thiscall
UDrawSphereComponent::UDrawSphereComponent(UDrawSphereComponent *this,FVTableHelper *param_1)

{
  USphereComponent::USphereComponent((USphereComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// UDrawSphereComponent @ 1478a8b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UDrawSphereComponent * __thiscall
UDrawSphereComponent::UDrawSphereComponent(UDrawSphereComponent *this,FObjectInitializer *param_1)

{
  USphereComponent::USphereComponent((USphereComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
  this->field_0x1a9 = this->field_0x1a9 | 8;
  this->field_0x281 = this->field_0x281 | 0x10;
  if ((this->field_0x27b & 8) != 0) {
    this->field_0x27b = this->field_0x27b & 0xf7;
    if (*(code **)(*(longlong *)this + 0xa10) == UPrimitiveComponent::OnGenerateOverlapEventsChanged
       ) {
      USceneComponent::ClearSkipUpdateOverlaps((USceneComponent *)this);
      return this;
    }
    (**(code **)(*(longlong *)this + 0xa10))();
  }
  return this;
}

// ~UDrawSphereComponent @ 1478abba0

void __thiscall UDrawSphereComponent::~UDrawSphereComponent(UDrawSphereComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  USphereComponent::~USphereComponent((USphereComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1478d8ff0

UClass * __cdecl UDrawSphereComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDrawSphereComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"DrawSphereComponent",
               &Z_Registration_Info_UClass_UDrawSphereComponent.InnerSingleton,
               StaticRegisterNativesUDrawSphereComponent,0x570,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UDrawSphereComponent>,
               InternalVTableHelperCtorCaller<UDrawSphereComponent>,local_res8,
               USphereComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDrawSphereComponent.InnerSingleton;
}

// StaticRegisterNativesUDrawSphereComponent @ 1478f7e00

void __cdecl UDrawSphereComponent::StaticRegisterNativesUDrawSphereComponent(void)

{
  return;
}

