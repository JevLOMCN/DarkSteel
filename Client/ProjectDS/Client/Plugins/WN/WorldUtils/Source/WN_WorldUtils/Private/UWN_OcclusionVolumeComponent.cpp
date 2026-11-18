// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 6

// StaticClass @ 14a025310

UClass * __cdecl UWN_OcclusionVolumeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_OcclusionVolumeComponent",
               &Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.InnerSingleton,
               StaticRegisterNativesUWN_OcclusionVolumeComponent,0x6a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_OcclusionVolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_OcclusionVolumeComponent>,local_res8,
               UWN_VolumeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.InnerSingleton;
}

// UWN_OcclusionVolumeComponent @ 14a02dbf0

UWN_OcclusionVolumeComponent * __thiscall
UWN_OcclusionVolumeComponent::UWN_OcclusionVolumeComponent
          (UWN_OcclusionVolumeComponent *this,FVTableHelper *param_1)

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

// UWN_OcclusionVolumeComponent @ 14a02dc60

UWN_OcclusionVolumeComponent * __thiscall
UWN_OcclusionVolumeComponent::UWN_OcclusionVolumeComponent
          (UWN_OcclusionVolumeComponent *this,FObjectInitializer *param_1)

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

// ~UWN_OcclusionVolumeComponent @ 14a02ec60

void __thiscall
UWN_OcclusionVolumeComponent::~UWN_OcclusionVolumeComponent(UWN_OcclusionVolumeComponent *this)

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

// GetPrivateStaticClass @ 14a034c20

UClass * __cdecl UWN_OcclusionVolumeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_WorldUtils",L"WN_OcclusionVolumeComponent",
               &Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.InnerSingleton,
               StaticRegisterNativesUWN_OcclusionVolumeComponent,0x6a0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_OcclusionVolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_OcclusionVolumeComponent>,local_res8,
               UWN_VolumeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_OcclusionVolumeComponent.InnerSingleton;
}

// StaticRegisterNativesUWN_OcclusionVolumeComponent @ 14a03a800

void __cdecl UWN_OcclusionVolumeComponent::StaticRegisterNativesUWN_OcclusionVolumeComponent(void)

{
  return;
}

