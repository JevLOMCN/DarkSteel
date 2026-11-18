// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 9

// StaticClass @ 149481410

UClass * __cdecl UWN_Prefab_RectLightComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_RectLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_RectLightComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_RectLightComponent.InnerSingleton,
               StaticRegisterNativesUWN_Prefab_RectLightComponent,0x420,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_RectLightComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_RectLightComponent>,local_res8,
               URectLightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_RectLightComponent.InnerSingleton;
}

// UWN_Prefab_RectLightComponent @ 14948ebd0

UWN_Prefab_RectLightComponent * __thiscall
UWN_Prefab_RectLightComponent::UWN_Prefab_RectLightComponent
          (UWN_Prefab_RectLightComponent *this,FVTableHelper *param_1)

{
  URectLightComponent::URectLightComponent((URectLightComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x418 = &___7UWN_Prefab_RectLightComponent__6B_;
  return this;
}

// UWN_Prefab_RectLightComponent @ 14948ec20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWN_Prefab_RectLightComponent * __thiscall
UWN_Prefab_RectLightComponent::UWN_Prefab_RectLightComponent
          (UWN_Prefab_RectLightComponent *this,FObjectInitializer *param_1)

{
  URectLightComponent::URectLightComponent((URectLightComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x418 = &___7UWN_Prefab_RectLightComponent__6B_;
  this->field_0x42 = this->field_0x42 & 0xf9;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->field_0x38,false);
  USceneComponent::SetMobility((USceneComponent *)this,Static);
  if ((*(uint *)&this->field_0x8 & 0x30) != 0) {
    *(undefined4 *)&this->field_0x29c = 0x44fa0000;
  }
  return this;
}

// ~UWN_Prefab_RectLightComponent @ 149490b10

void __thiscall
UWN_Prefab_RectLightComponent::~UWN_Prefab_RectLightComponent(UWN_Prefab_RectLightComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x418 = &___7IWN_PrefabComponent__6B_;
  URectLightComponent::~URectLightComponent((URectLightComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1494a1fc0

UClass * __cdecl UWN_Prefab_RectLightComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_RectLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_RectLightComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_RectLightComponent.InnerSingleton,
               StaticRegisterNativesUWN_Prefab_RectLightComponent,0x420,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_RectLightComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_RectLightComponent>,local_res8,
               URectLightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_RectLightComponent.InnerSingleton;
}

// OnUpdateTransform @ 1494a91d0

void __thiscall
UWN_Prefab_RectLightComponent::OnUpdateTransform
          (UWN_Prefab_RectLightComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

{
  return;
}

// StaticRegisterNativesUWN_Prefab_RectLightComponent @ 1494ae340

void __cdecl UWN_Prefab_RectLightComponent::StaticRegisterNativesUWN_Prefab_RectLightComponent(void)

{
  return;
}

// _getUObject @ 1494b2d90

UObject * __thiscall UWN_Prefab_RectLightComponent::_getUObject(UWN_Prefab_RectLightComponent *this)

{
  return (UObject *)&this[-1].field_0x3f8;
}

// _getUObject`adjustor{1008}' @ 1494b2d9c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_Prefab_RectLightComponent::_getUObject`adjustor{1008}' (void)const __ptr64 */

UObject * __thiscall
UWN_Prefab_RectLightComponent::_getUObject_adjustor_1008__(UWN_Prefab_RectLightComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_Prefab_RectLightComponent *)&this[-1].field_0x30);
  return (UObject *)pUVar1;
}

