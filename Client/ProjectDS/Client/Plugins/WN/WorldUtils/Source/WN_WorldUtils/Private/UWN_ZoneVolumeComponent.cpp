// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 6

// StaticClass @ 14a0250b0

UClass * __cdecl UWN_ZoneVolumeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_ZoneVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_ZoneVolumeComponent",
               &Z_Registration_Info_UClass_UWN_ZoneVolumeComponent.InnerSingleton,
               StaticRegisterNativesUWN_ZoneVolumeComponent,0x6a0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_ZoneVolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_ZoneVolumeComponent>,local_res8,
               UWN_VolumeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_ZoneVolumeComponent.InnerSingleton;
}

// UWN_ZoneVolumeComponent @ 14a02e350

UWN_ZoneVolumeComponent * __thiscall
UWN_ZoneVolumeComponent::UWN_ZoneVolumeComponent
          (UWN_ZoneVolumeComponent *this,FVTableHelper *param_1)

{
  UWN_VolumeComponent::UWN_VolumeComponent((UWN_VolumeComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// UWN_ZoneVolumeComponent @ 14a02e3c0

UWN_ZoneVolumeComponent * __thiscall
UWN_ZoneVolumeComponent::UWN_ZoneVolumeComponent
          (UWN_ZoneVolumeComponent *this,FObjectInitializer *param_1)

{
  UWN_VolumeComponent::UWN_VolumeComponent((UWN_VolumeComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  return this;
}

// ~UWN_ZoneVolumeComponent @ 14a02ef20

void __thiscall UWN_ZoneVolumeComponent::~UWN_ZoneVolumeComponent(UWN_ZoneVolumeComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  UWN_VolumeComponent::~UWN_VolumeComponent((UWN_VolumeComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14a034f00

UClass * __cdecl UWN_ZoneVolumeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_ZoneVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_ZoneVolumeComponent",
               &Z_Registration_Info_UClass_UWN_ZoneVolumeComponent.InnerSingleton,
               StaticRegisterNativesUWN_ZoneVolumeComponent,0x6a0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_ZoneVolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_ZoneVolumeComponent>,local_res8,
               UWN_VolumeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_ZoneVolumeComponent.InnerSingleton;
}

// StaticRegisterNativesUWN_ZoneVolumeComponent @ 14a03a870

void __cdecl UWN_ZoneVolumeComponent::StaticRegisterNativesUWN_ZoneVolumeComponent(void)

{
  return;
}

