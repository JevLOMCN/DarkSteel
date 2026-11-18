// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 12

// StaticClass @ 149484fe0

UClass * __cdecl UWN_Prefab_StaticMeshComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_StaticMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_StaticMeshComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_StaticMeshComponent.InnerSingleton,
               StaticRegisterNativesUWN_Prefab_StaticMeshComponent,0x660,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_StaticMeshComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_StaticMeshComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_StaticMeshComponent.InnerSingleton;
}

// UWN_Prefab_StaticMeshComponent @ 14948ed70

UWN_Prefab_StaticMeshComponent * __thiscall
UWN_Prefab_StaticMeshComponent::UWN_Prefab_StaticMeshComponent
          (UWN_Prefab_StaticMeshComponent *this,FVTableHelper *param_1)

{
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UWN_Prefab_StaticMeshComponent__6B_;
  return this;
}

// UWN_Prefab_StaticMeshComponent @ 14948edf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWN_Prefab_StaticMeshComponent * __thiscall
UWN_Prefab_StaticMeshComponent::UWN_Prefab_StaticMeshComponent
          (UWN_Prefab_StaticMeshComponent *this,FObjectInitializer *param_1)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  UStaticMeshComponent::UStaticMeshComponent((UStaticMeshComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7UWN_Prefab_StaticMeshComponent__6B_;
  this->field_0x42 = this->field_0x42 & 0xf9;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->field_0x38,false);
  UPrimitiveComponent::SetCollisionObjectType((UPrimitiveComponent *)this,ECC_WorldStatic);
  USceneComponent::SetMobility((USceneComponent *)this,Static);
  pFVar1 = ::FName::FName(local_res8,"BlockAll");
  UStaticMeshComponent::SetCollisionProfileName((UStaticMeshComponent *)this,*pFVar1,true);
  if ((*(uint *)&this->field_0x8 & 0x30) != 0) {
    *(undefined4 *)&this->field_0x5a8 = 0xc80;
  }
  return this;
}

// ~UWN_Prefab_StaticMeshComponent @ 149490b90

void __thiscall
UWN_Prefab_StaticMeshComponent::~UWN_Prefab_StaticMeshComponent
          (UWN_Prefab_StaticMeshComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x650 = &___7IWN_PrefabComponent__6B_;
  UStaticMeshComponent::~UStaticMeshComponent((UStaticMeshComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1494a2140

UClass * __cdecl UWN_Prefab_StaticMeshComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_StaticMeshComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UStaticMeshComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_StaticMeshComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_StaticMeshComponent.InnerSingleton,
               StaticRegisterNativesUWN_Prefab_StaticMeshComponent,0x660,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_StaticMeshComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_StaticMeshComponent>,local_res8,
               UStaticMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_StaticMeshComponent.InnerSingleton;
}

// OnUpdateTransform @ 1494a91f0

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
UWN_Prefab_StaticMeshComponent::OnUpdateTransform
          (UWN_Prefab_StaticMeshComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

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

// StaticRegisterNativesUWN_Prefab_StaticMeshComponent @ 1494ae360

void __cdecl
UWN_Prefab_StaticMeshComponent::StaticRegisterNativesUWN_Prefab_StaticMeshComponent(void)

{
  return;
}

// _getUObject @ 1494b2dd0

UObject * __thiscall
UWN_Prefab_StaticMeshComponent::_getUObject(UWN_Prefab_StaticMeshComponent *this)

{
  return (UObject *)&this[-1].field_0x638;
}

// _getUObject`adjustor{552}' @ 1494b2ddc

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_Prefab_StaticMeshComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall
UWN_Prefab_StaticMeshComponent::_getUObject_adjustor_552__(UWN_Prefab_StaticMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_Prefab_StaticMeshComponent *)&this[-1].field_0x438);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{560}' @ 1494b2df0

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_Prefab_StaticMeshComponent::_getUObject`adjustor{560}' (void)const __ptr64 */

UObject * __thiscall
UWN_Prefab_StaticMeshComponent::_getUObject_adjustor_560__(UWN_Prefab_StaticMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_Prefab_StaticMeshComponent *)&this[-1].field_0x430);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{568}' @ 1494b2e04

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_Prefab_StaticMeshComponent::_getUObject`adjustor{568}' (void)const __ptr64 */

UObject * __thiscall
UWN_Prefab_StaticMeshComponent::_getUObject_adjustor_568__(UWN_Prefab_StaticMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_Prefab_StaticMeshComponent *)&this[-1].field_0x428);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{1576}' @ 1494b2e18

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_Prefab_StaticMeshComponent::_getUObject`adjustor{1576}' (void)const __ptr64 */

UObject * __thiscall
UWN_Prefab_StaticMeshComponent::_getUObject_adjustor_1576__(UWN_Prefab_StaticMeshComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_Prefab_StaticMeshComponent *)&this[-1].field_0x38);
  return (UObject *)pUVar1;
}

