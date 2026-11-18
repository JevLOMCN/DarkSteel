// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 6

// StaticClass @ 14a0258a0

UClass * __cdecl UWN_BGMVolumeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_BGMVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_BGMVolumeComponent",
               &Z_Registration_Info_UClass_UWN_BGMVolumeComponent.InnerSingleton,
               StaticRegisterNativesUWN_BGMVolumeComponent,0x6a0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_BGMVolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_BGMVolumeComponent>,local_res8,
               UWN_VolumeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_BGMVolumeComponent.InnerSingleton;
}

// UWN_BGMVolumeComponent @ 14a02d990

UWN_BGMVolumeComponent * __thiscall
UWN_BGMVolumeComponent::UWN_BGMVolumeComponent(UWN_BGMVolumeComponent *this,FVTableHelper *param_1)

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

// UWN_BGMVolumeComponent @ 14a02da00

UWN_BGMVolumeComponent * __thiscall
UWN_BGMVolumeComponent::UWN_BGMVolumeComponent
          (UWN_BGMVolumeComponent *this,FObjectInitializer *param_1)

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

// ~UWN_BGMVolumeComponent @ 14a02eb50

void __thiscall UWN_BGMVolumeComponent::~UWN_BGMVolumeComponent(UWN_BGMVolumeComponent *this)

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

// GetPrivateStaticClass @ 14a0349f0

UClass * __cdecl UWN_BGMVolumeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_BGMVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_BGMVolumeComponent",
               &Z_Registration_Info_UClass_UWN_BGMVolumeComponent.InnerSingleton,
               StaticRegisterNativesUWN_BGMVolumeComponent,0x6a0,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UWN_BGMVolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_BGMVolumeComponent>,local_res8,
               UWN_VolumeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_BGMVolumeComponent.InnerSingleton;
}

// StaticRegisterNativesUWN_BGMVolumeComponent @ 14a03a7d0

void __cdecl UWN_BGMVolumeComponent::StaticRegisterNativesUWN_BGMVolumeComponent(void)

{
  return;
}

