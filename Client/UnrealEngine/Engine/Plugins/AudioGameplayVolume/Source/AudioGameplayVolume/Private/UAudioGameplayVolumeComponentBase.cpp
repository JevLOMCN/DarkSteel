// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 8

// StaticClass @ 14d999130

UClass * __cdecl UAudioGameplayVolumeComponentBase::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeComponentBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolumeComponentBase",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeComponentBase.InnerSingleton,
               StaticRegisterNativesUAudioGameplayVolumeComponentBase,0xd0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAudioGameplayVolumeComponentBase>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeComponentBase>,local_res8,
               UAudioGameplayComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeComponentBase.InnerSingleton;
}

// UAudioGameplayVolumeComponentBase @ 14d99f610

UAudioGameplayVolumeComponentBase * __thiscall
UAudioGameplayVolumeComponentBase::UAudioGameplayVolumeComponentBase
          (UAudioGameplayVolumeComponentBase *this,FVTableHelper *param_1)

{
  UAudioGameplayComponent::UAudioGameplayComponent((UAudioGameplayComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0xc8 = &___7UAudioGameplayVolumeComponentBase__6B_;
  return this;
}

// UAudioGameplayVolumeComponentBase @ 14d99f660

UAudioGameplayVolumeComponentBase * __thiscall
UAudioGameplayVolumeComponentBase::UAudioGameplayVolumeComponentBase
          (UAudioGameplayVolumeComponentBase *this,FObjectInitializer *param_1)

{
  UAudioGameplayComponent::UAudioGameplayComponent((UAudioGameplayComponent *)this,param_1);
  this->field_0x9a = this->field_0x9a | 8;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0xc8 = &___7UAudioGameplayVolumeComponentBase__6B_;
  return this;
}

// ~UAudioGameplayVolumeComponentBase @ 14d9a0400

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
UAudioGameplayVolumeComponentBase::~UAudioGameplayVolumeComponentBase
          (UAudioGameplayVolumeComponentBase *this)

{
  *(undefined ***)&this->field_0xc8 = &___7IAudioGameplayVolumeInteraction__6B_;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 14d9a6750

UClass * __cdecl UAudioGameplayVolumeComponentBase::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayVolumeComponentBase.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplayVolume",L"AudioGameplayVolumeComponentBase",
               &Z_Registration_Info_UClass_UAudioGameplayVolumeComponentBase.InnerSingleton,
               StaticRegisterNativesUAudioGameplayVolumeComponentBase,0xd0,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Game",
               InternalConstructor<UAudioGameplayVolumeComponentBase>,
               InternalVTableHelperCtorCaller<UAudioGameplayVolumeComponentBase>,local_res8,
               UAudioGameplayComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayVolumeComponentBase.InnerSingleton;
}

// StaticRegisterNativesUAudioGameplayVolumeComponentBase @ 14d9a9af0

void __cdecl
UAudioGameplayVolumeComponentBase::StaticRegisterNativesUAudioGameplayVolumeComponentBase(void)

{
  return;
}

// _getUObject @ 14d9ad080

UObject * __thiscall
UAudioGameplayVolumeComponentBase::_getUObject(UAudioGameplayVolumeComponentBase *this)

{
  return (UObject *)&this[-1].field_0xa8;
}

// _getUObject`adjustor{160}' @ 14d9ad08c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UAudioGameplayVolumeComponentBase::_getUObject`adjustor{160}' (void)const __ptr64 */

UObject * __thiscall
UAudioGameplayVolumeComponentBase::_getUObject_adjustor_160__
          (UAudioGameplayVolumeComponentBase *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UAudioGameplayVolumeComponentBase *)&this[-1].field_0x30);
  return (UObject *)pUVar1;
}

