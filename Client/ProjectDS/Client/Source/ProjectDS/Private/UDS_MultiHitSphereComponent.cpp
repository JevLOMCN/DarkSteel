// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b4fe180

UClass * __cdecl UDS_MultiHitSphereComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MultiHitSphereComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MultiHitSphereComponent",
               &Z_Registration_Info_UClass_UDS_MultiHitSphereComponent.InnerSingleton,
               StaticRegisterNativesUDS_MultiHitSphereComponent,0x570,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MultiHitSphereComponent>,
               InternalVTableHelperCtorCaller<UDS_MultiHitSphereComponent>,local_res8,
               USphereComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MultiHitSphereComponent.InnerSingleton;
}

// UDS_MultiHitSphereComponent @ 14b501c40

UDS_MultiHitSphereComponent * __thiscall
UDS_MultiHitSphereComponent::UDS_MultiHitSphereComponent
          (UDS_MultiHitSphereComponent *this,FVTableHelper *param_1)

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

// UDS_MultiHitSphereComponent @ 14b501cb0

UDS_MultiHitSphereComponent * __thiscall
UDS_MultiHitSphereComponent::UDS_MultiHitSphereComponent
          (UDS_MultiHitSphereComponent *this,FObjectInitializer *param_1)

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

// ~UDS_MultiHitSphereComponent @ 14b502980

void __thiscall
UDS_MultiHitSphereComponent::~UDS_MultiHitSphereComponent(UDS_MultiHitSphereComponent *this)

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

// GetPrivateStaticClass @ 14b504f50

UClass * __cdecl UDS_MultiHitSphereComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MultiHitSphereComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MultiHitSphereComponent",
               &Z_Registration_Info_UClass_UDS_MultiHitSphereComponent.InnerSingleton,
               StaticRegisterNativesUDS_MultiHitSphereComponent,0x570,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MultiHitSphereComponent>,
               InternalVTableHelperCtorCaller<UDS_MultiHitSphereComponent>,local_res8,
               USphereComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MultiHitSphereComponent.InnerSingleton;
}

// StaticRegisterNativesUDS_MultiHitSphereComponent @ 14b505be0

void __cdecl UDS_MultiHitSphereComponent::StaticRegisterNativesUDS_MultiHitSphereComponent(void)

{
  return;
}

