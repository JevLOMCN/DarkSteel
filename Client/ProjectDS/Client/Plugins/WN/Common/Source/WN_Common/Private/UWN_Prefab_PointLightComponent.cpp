// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 9

// StaticClass @ 1494811f0

UClass * __cdecl UWN_Prefab_PointLightComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_PointLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_PointLightComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_PointLightComponent.InnerSingleton,
               StaticRegisterNativesUWN_Prefab_PointLightComponent,0x400,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_PointLightComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_PointLightComponent>,local_res8,
               UPointLightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_PointLightComponent.InnerSingleton;
}

// UWN_Prefab_PointLightComponent @ 14948eb00

UWN_Prefab_PointLightComponent * __thiscall
UWN_Prefab_PointLightComponent::UWN_Prefab_PointLightComponent
          (UWN_Prefab_PointLightComponent *this,FVTableHelper *param_1)

{
  UPointLightComponent::UPointLightComponent((UPointLightComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x3f8 = &___7UWN_Prefab_PointLightComponent__6B_;
  return this;
}

// UWN_Prefab_PointLightComponent @ 14948eb50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWN_Prefab_PointLightComponent * __thiscall
UWN_Prefab_PointLightComponent::UWN_Prefab_PointLightComponent
          (UWN_Prefab_PointLightComponent *this,FObjectInitializer *param_1)

{
  UPointLightComponent::UPointLightComponent((UPointLightComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x3f8 = &___7UWN_Prefab_PointLightComponent__6B_;
  this->field_0x42 = this->field_0x42 & 0xf9;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->field_0x38,false);
  USceneComponent::SetMobility((USceneComponent *)this,Static);
  if ((*(uint *)&this->field_0x8 & 0x30) != 0) {
    *(undefined4 *)&this->field_0x29c = 0x44fa0000;
  }
  return this;
}

// ~UWN_Prefab_PointLightComponent @ 149490ad0

void __thiscall
UWN_Prefab_PointLightComponent::~UWN_Prefab_PointLightComponent
          (UWN_Prefab_PointLightComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x3f8 = &___7IWN_PrefabComponent__6B_;
  UPointLightComponent::~UPointLightComponent((UPointLightComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1494a1f00

UClass * __cdecl UWN_Prefab_PointLightComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_PointLightComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_PointLightComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_PointLightComponent.InnerSingleton,
               StaticRegisterNativesUWN_Prefab_PointLightComponent,0x400,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_PointLightComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_PointLightComponent>,local_res8,
               UPointLightComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_PointLightComponent.InnerSingleton;
}

// OnUpdateTransform @ 1494a91c0

void __thiscall
UWN_Prefab_PointLightComponent::OnUpdateTransform
          (UWN_Prefab_PointLightComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

{
  return;
}

// StaticRegisterNativesUWN_Prefab_PointLightComponent @ 1494ae330

void __cdecl
UWN_Prefab_PointLightComponent::StaticRegisterNativesUWN_Prefab_PointLightComponent(void)

{
  return;
}

// _getUObject @ 1494b2d70

UObject * __thiscall
UWN_Prefab_PointLightComponent::_getUObject(UWN_Prefab_PointLightComponent *this)

{
  return (UObject *)&this[-1].field_0x3d8;
}

// _getUObject`adjustor{976}' @ 1494b2d7c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_Prefab_PointLightComponent::_getUObject`adjustor{976}' (void)const __ptr64 */

UObject * __thiscall
UWN_Prefab_PointLightComponent::_getUObject_adjustor_976__(UWN_Prefab_PointLightComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_Prefab_PointLightComponent *)&this[-1].field_0x30);
  return (UObject *)pUVar1;
}

