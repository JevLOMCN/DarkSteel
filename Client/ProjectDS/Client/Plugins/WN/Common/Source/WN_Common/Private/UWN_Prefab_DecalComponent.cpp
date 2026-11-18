// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 9

// StaticClass @ 149481650

UClass * __cdecl UWN_Prefab_DecalComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_DecalComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_DecalComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_DecalComponent.InnerSingleton,
               StaticRegisterNativesUWN_Prefab_DecalComponent,0x2c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_DecalComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_DecalComponent>,local_res8,
               UDecalComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_DecalComponent.InnerSingleton;
}

// UWN_Prefab_DecalComponent @ 14948e940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWN_Prefab_DecalComponent * __thiscall
UWN_Prefab_DecalComponent::UWN_Prefab_DecalComponent
          (UWN_Prefab_DecalComponent *this,FVTableHelper *param_1)

{
  UDecalComponent::UDecalComponent((UDecalComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x2b8 = &___7UWN_Prefab_DecalComponent__6B_;
  return this;
}

// UWN_Prefab_DecalComponent @ 14948e990

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UWN_Prefab_DecalComponent * __thiscall
UWN_Prefab_DecalComponent::UWN_Prefab_DecalComponent
          (UWN_Prefab_DecalComponent *this,FObjectInitializer *param_1)

{
  UDecalComponent::UDecalComponent((UDecalComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x2b8 = &___7UWN_Prefab_DecalComponent__6B_;
  return this;
}

// ~UWN_Prefab_DecalComponent @ 149490a20

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
UWN_Prefab_DecalComponent::~UWN_Prefab_DecalComponent(UWN_Prefab_DecalComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x2b8 = &___7IWN_PrefabComponent__6B_;
  UDecalComponent::~UDecalComponent((UDecalComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1494a1d80

UClass * __cdecl UWN_Prefab_DecalComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_DecalComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_DecalComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_DecalComponent.InnerSingleton,
               StaticRegisterNativesUWN_Prefab_DecalComponent,0x2c0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_DecalComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_DecalComponent>,local_res8,
               UDecalComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_DecalComponent.InnerSingleton;
}

// OnUpdateTransform @ 1494a91a0

void __thiscall
UWN_Prefab_DecalComponent::OnUpdateTransform
          (UWN_Prefab_DecalComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

{
  return;
}

// StaticRegisterNativesUWN_Prefab_DecalComponent @ 1494ae310

void __cdecl UWN_Prefab_DecalComponent::StaticRegisterNativesUWN_Prefab_DecalComponent(void)

{
  return;
}

// _getUObject @ 1494b2cf0

UObject * __thiscall UWN_Prefab_DecalComponent::_getUObject(UWN_Prefab_DecalComponent *this)

{
  return (UObject *)&this[-1].field_0x298;
}

// _getUObject`adjustor{656}' @ 1494b2cfc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_Prefab_DecalComponent::_getUObject`adjustor{656}' (void)const __ptr64 */

UObject * __thiscall
UWN_Prefab_DecalComponent::_getUObject_adjustor_656__(UWN_Prefab_DecalComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_Prefab_DecalComponent *)&this[-1].field_0x30);
  return (UObject *)pUVar1;
}

