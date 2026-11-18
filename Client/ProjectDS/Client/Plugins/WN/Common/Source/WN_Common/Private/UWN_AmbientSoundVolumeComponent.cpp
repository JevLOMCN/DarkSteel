// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 12

// StaticClass @ 149481510

UClass * __cdecl UWN_AmbientSoundVolumeComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_AmbientSoundVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_AmbientSoundVolumeComponent",
               &Z_Registration_Info_UClass_UWN_AmbientSoundVolumeComponent.InnerSingleton,
               StaticRegisterNativesUWN_AmbientSoundVolumeComponent,0x700,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_AmbientSoundVolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_AmbientSoundVolumeComponent>,local_res8,
               UWN_VolumeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_AmbientSoundVolumeComponent.InnerSingleton;
}

// UWN_AmbientSoundVolumeComponent @ 14948dd90

UWN_AmbientSoundVolumeComponent * __thiscall
UWN_AmbientSoundVolumeComponent::UWN_AmbientSoundVolumeComponent
          (UWN_AmbientSoundVolumeComponent *this,FVTableHelper *param_1)

{
  UWN_VolumeComponent::UWN_VolumeComponent((UWN_VolumeComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x6a0 = &___7UWN_AmbientSoundVolumeComponent__6B_;
  FWN_AmbientSoundInfo::FWN_AmbientSoundInfo(&this->AmbientSoundInfo);
  return this;
}

// UWN_AmbientSoundVolumeComponent @ 14948de20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWN_AmbientSoundVolumeComponent * __thiscall
UWN_AmbientSoundVolumeComponent::UWN_AmbientSoundVolumeComponent
          (UWN_AmbientSoundVolumeComponent *this,FObjectInitializer *param_1)

{
  UWN_VolumeComponent::UWN_VolumeComponent((UWN_VolumeComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x6a0 = &___7UWN_AmbientSoundVolumeComponent__6B_;
  FWN_AmbientSoundInfo::FWN_AmbientSoundInfo(&this->AmbientSoundInfo);
  USceneComponent::SetMobility((USceneComponent *)this,Static);
  return this;
}

// ~UWN_AmbientSoundVolumeComponent @ 149490450

void __thiscall
UWN_AmbientSoundVolumeComponent::~UWN_AmbientSoundVolumeComponent
          (UWN_AmbientSoundVolumeComponent *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x6a0 = &___7UWN_AmbientSoundVolumeComponent__6B_;
  pvVar1 = *(void **)&(this->AmbientSoundInfo).AmbientSound.SoftObjectPtr.field_0x18;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)&this->field_0x6a0 = &___7IWN_PrefabComponent__6B_;
  UWN_VolumeComponent::~UWN_VolumeComponent((UWN_VolumeComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1494a1790

UClass * __cdecl UWN_AmbientSoundVolumeComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_AmbientSoundVolumeComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_AmbientSoundVolumeComponent",
               &Z_Registration_Info_UClass_UWN_AmbientSoundVolumeComponent.InnerSingleton,
               StaticRegisterNativesUWN_AmbientSoundVolumeComponent,0x700,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_AmbientSoundVolumeComponent>,
               InternalVTableHelperCtorCaller<UWN_AmbientSoundVolumeComponent>,local_res8,
               UWN_VolumeComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_AmbientSoundVolumeComponent.InnerSingleton;
}

// OnUpdateTransform @ 1494a9180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UWN_AmbientSoundVolumeComponent::OnUpdateTransform
          (UWN_AmbientSoundVolumeComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2
          )

{
  TVector<double>_u_0 TStack_28;
  
  USceneComponent::OnUpdateTransform((USceneComponent *)this,param_1,param_2);
  if ((((this->field_0x98 & 8) != 0) && ((param_1 & SkipPhysicsUpdate) == None)) &&
     (((~(byte)(param_1 >> 1) & 1) != 0 || (*(longlong *)&this->field_0x498 == 0)))) {
    FBodyInstance::SetBodyTransform
              ((FBodyInstance *)&this->field_0x390,(TTransform<double> *)&this->field_0x1f0,param_2,
               true);
    TStack_28._s_0.X = (double)*(undefined8 *)&this->field_0x230;
    TStack_28._s_0.Y = (double)*(undefined8 *)&this->field_0x238;
    TStack_28._s_0.Z = (double)*(undefined8 *)&this->field_0x240;
    FBodyInstance::UpdateBodyScale
              ((FBodyInstance *)&this->field_0x390,(TVector<double> *)&TStack_28._s_0,false);
  }
  return;
}

// StaticRegisterNativesUWN_AmbientSoundVolumeComponent @ 1494ae200

void __cdecl
UWN_AmbientSoundVolumeComponent::StaticRegisterNativesUWN_AmbientSoundVolumeComponent(void)

{
  return;
}

// _getUObject @ 1494b2c50

UObject * __thiscall
UWN_AmbientSoundVolumeComponent::_getUObject(UWN_AmbientSoundVolumeComponent *this)

{
  return (UObject *)&this[-1].AmbientSoundInfo.SoundFadeInTime;
}

// _getUObject`adjustor{552}' @ 1494b2c5c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_AmbientSoundVolumeComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall
UWN_AmbientSoundVolumeComponent::_getUObject_adjustor_552__(UWN_AmbientSoundVolumeComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_AmbientSoundVolumeComponent *)&this[-1].field_0x4d8);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{560}' @ 1494b2c70

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_AmbientSoundVolumeComponent::_getUObject`adjustor{560}' (void)const __ptr64 */

UObject * __thiscall
UWN_AmbientSoundVolumeComponent::_getUObject_adjustor_560__(UWN_AmbientSoundVolumeComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_AmbientSoundVolumeComponent *)&this[-1].field_0x4d0);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{568}' @ 1494b2c84

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_AmbientSoundVolumeComponent::_getUObject`adjustor{568}' (void)const __ptr64 */

UObject * __thiscall
UWN_AmbientSoundVolumeComponent::_getUObject_adjustor_568__(UWN_AmbientSoundVolumeComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_AmbientSoundVolumeComponent *)&this[-1].field_0x4c8);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1656}' @ 1494b2c98

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_AmbientSoundVolumeComponent::_getUObject`adjustor{1656}' (void)const __ptr64 */

UObject * __thiscall
UWN_AmbientSoundVolumeComponent::_getUObject_adjustor_1656__(UWN_AmbientSoundVolumeComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_AmbientSoundVolumeComponent *)&this[-1].field_0x88);
  return (UObject *)pUVar1;
}

