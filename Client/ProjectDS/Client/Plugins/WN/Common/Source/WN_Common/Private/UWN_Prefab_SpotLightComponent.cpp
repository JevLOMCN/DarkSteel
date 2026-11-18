// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 9

// StaticClass @ 149481330

UClass * __cdecl UWN_Prefab_SpotLightComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_SpotLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_SpotLightComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_SpotLightComponent.InnerSingleton,
               StaticRegisterNativesUWN_Prefab_SpotLightComponent,0x410,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_SpotLightComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_SpotLightComponent>,local_res8,
               USpotLightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_SpotLightComponent.InnerSingleton;
}

// UWN_Prefab_SpotLightComponent @ 14948eca0

UWN_Prefab_SpotLightComponent * __thiscall
UWN_Prefab_SpotLightComponent::UWN_Prefab_SpotLightComponent
          (UWN_Prefab_SpotLightComponent *this,FVTableHelper *param_1)

{
  USpotLightComponent::USpotLightComponent((USpotLightComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x400 = &___7UWN_Prefab_SpotLightComponent__6B_;
  return this;
}

// UWN_Prefab_SpotLightComponent @ 14948ecf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWN_Prefab_SpotLightComponent * __thiscall
UWN_Prefab_SpotLightComponent::UWN_Prefab_SpotLightComponent
          (UWN_Prefab_SpotLightComponent *this,FObjectInitializer *param_1)

{
  USpotLightComponent::USpotLightComponent((USpotLightComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x400 = &___7UWN_Prefab_SpotLightComponent__6B_;
  this->field_0x42 = this->field_0x42 & 0xf9;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->field_0x38,false);
  USceneComponent::SetMobility((USceneComponent *)this,Static);
  if ((*(uint *)&this->field_0x8 & 0x30) != 0) {
    *(undefined4 *)&this->field_0x29c = 0x44fa0000;
  }
  return this;
}

// ~UWN_Prefab_SpotLightComponent @ 149490b50

void __thiscall
UWN_Prefab_SpotLightComponent::~UWN_Prefab_SpotLightComponent(UWN_Prefab_SpotLightComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x400 = &___7IWN_PrefabComponent__6B_;
  USpotLightComponent::~USpotLightComponent((USpotLightComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1494a2080

UClass * __cdecl UWN_Prefab_SpotLightComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_SpotLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_SpotLightComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_SpotLightComponent.InnerSingleton,
               StaticRegisterNativesUWN_Prefab_SpotLightComponent,0x410,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_SpotLightComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_SpotLightComponent>,local_res8,
               USpotLightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_SpotLightComponent.InnerSingleton;
}

// OnUpdateTransform @ 1494a91e0

void __thiscall
UWN_Prefab_SpotLightComponent::OnUpdateTransform
          (UWN_Prefab_SpotLightComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

{
  return;
}

// StaticRegisterNativesUWN_Prefab_SpotLightComponent @ 1494ae350

void __cdecl UWN_Prefab_SpotLightComponent::StaticRegisterNativesUWN_Prefab_SpotLightComponent(void)

{
  return;
}

// _getUObject @ 1494b2db0

UObject * __thiscall UWN_Prefab_SpotLightComponent::_getUObject(UWN_Prefab_SpotLightComponent *this)

{
  return (UObject *)&this[-1].field_0x3e8;
}

// _getUObject`adjustor{984}' @ 1494b2dbc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_Prefab_SpotLightComponent::_getUObject`adjustor{984}' (void)const __ptr64 */

UObject * __thiscall
UWN_Prefab_SpotLightComponent::_getUObject_adjustor_984__(UWN_Prefab_SpotLightComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_Prefab_SpotLightComponent *)&this[-1].field_0x38);
  return (UObject *)pUVar1;
}

