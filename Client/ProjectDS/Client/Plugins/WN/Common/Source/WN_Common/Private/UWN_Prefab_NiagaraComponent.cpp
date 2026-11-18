// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_Common
// Functions: 13

// StaticClass @ 149485290

UClass * __cdecl UWN_Prefab_NiagaraComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_NiagaraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_NiagaraComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_NiagaraComponent.InnerSingleton,
               StaticRegisterNativesUWN_Prefab_NiagaraComponent,0x810,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_NiagaraComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_NiagaraComponent>,local_res8,
               UNiagaraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_NiagaraComponent.InnerSingleton;
}

// UWN_Prefab_NiagaraComponent @ 14948e9e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UWN_Prefab_NiagaraComponent * __thiscall
UWN_Prefab_NiagaraComponent::UWN_Prefab_NiagaraComponent
          (UWN_Prefab_NiagaraComponent *this,FVTableHelper *param_1)

{
  UNiagaraComponent::UNiagaraComponent((UNiagaraComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x800 = &___7UWN_Prefab_NiagaraComponent__6B_;
  return this;
}

// UWN_Prefab_NiagaraComponent @ 14948ea60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UWN_Prefab_NiagaraComponent * __thiscall
UWN_Prefab_NiagaraComponent::UWN_Prefab_NiagaraComponent
          (UWN_Prefab_NiagaraComponent *this,FObjectInitializer *param_1)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  UNiagaraComponent::UNiagaraComponent((UNiagaraComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x800 = &___7UWN_Prefab_NiagaraComponent__6B_;
  USceneComponent::SetMobility((USceneComponent *)this,Static);
  pFVar1 = ::FName::FName(local_res8,"NoCollision");
  UPrimitiveComponent::SetCollisionProfileName((UPrimitiveComponent *)this,*pFVar1,true);
  return this;
}

// ~UWN_Prefab_NiagaraComponent @ 149490a60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UWN_Prefab_NiagaraComponent::~UWN_Prefab_NiagaraComponent(UWN_Prefab_NiagaraComponent *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined ***)&this->field_0x250 = &_vftable__for__INavRelevantInterface__;
  *(undefined ***)&this->field_0x258 = &_vftable__for__IInterface_AsyncCompilation__;
  *(undefined ***)&this->field_0x260 = &_vftable__for__IPhysicsComponent__;
  *(undefined ***)&this->field_0x800 = &___7IWN_PrefabComponent__6B_;
  UNiagaraComponent::~UNiagaraComponent((UNiagaraComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1494a1e40

UClass * __cdecl UWN_Prefab_NiagaraComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_Prefab_NiagaraComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_Common",L"WN_Prefab_NiagaraComponent",
               &Z_Registration_Info_UClass_UWN_Prefab_NiagaraComponent.InnerSingleton,
               StaticRegisterNativesUWN_Prefab_NiagaraComponent,0x810,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UWN_Prefab_NiagaraComponent>,
               InternalVTableHelperCtorCaller<UWN_Prefab_NiagaraComponent>,local_res8,
               UNiagaraComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_Prefab_NiagaraComponent.InnerSingleton;
}

// OnRegister @ 1494a8470

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UWN_Prefab_NiagaraComponent::OnRegister(UWN_Prefab_NiagaraComponent *this)

{
  UNiagaraEffectType *pUVar1;
  FName local_res8;
  FString local_38;
  FString local_28;
  FString local_18;
  
  UNiagaraComponent::OnRegister((UNiagaraComponent *)this);
  if (((*(UNiagaraSystem **)&this->field_0x550 != (UNiagaraSystem *)0x0) &&
      (pUVar1 = UNiagaraSystem::GetEffectType(*(UNiagaraSystem **)&this->field_0x550),
      pUVar1 == (UNiagaraEffectType *)0x0)) && (2 < (byte)Common._0_1_)) {
    local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
    local_res8.Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(&local_res8,&local_18);
    if (*(longlong *)&this->field_0xa8 == 0) {
      local_res8.ComparisonIndex.Value = *(uint *)&this->field_0x18;
      local_res8.Number = *(uint *)&this->field_0x1c;
      ::FName::ToString(&local_res8,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&Common);
      local_38.Data.AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    }
    else {
      local_res8 = *(FName *)(*(longlong *)&this->field_0xa8 + 0x18);
      ::FName::ToString(&local_res8,&local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&Common);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnUpdateTransform @ 1494a91b0

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
UWN_Prefab_NiagaraComponent::OnUpdateTransform
          (UWN_Prefab_NiagaraComponent *this,EUpdateTransformFlags param_1,ETeleportType param_2)

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

// StaticRegisterNativesUWN_Prefab_NiagaraComponent @ 1494ae320

void __cdecl UWN_Prefab_NiagaraComponent::StaticRegisterNativesUWN_Prefab_NiagaraComponent(void)

{
  return;
}

// _getUObject @ 1494b2d10

UObject * __thiscall UWN_Prefab_NiagaraComponent::_getUObject(UWN_Prefab_NiagaraComponent *this)

{
  return (UObject *)&this[-1].field_0x7e8;
}

// _getUObject`adjustor{552}' @ 1494b2d1c

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_Prefab_NiagaraComponent::_getUObject`adjustor{552}' (void)const __ptr64 */

UObject * __thiscall
UWN_Prefab_NiagaraComponent::_getUObject_adjustor_552__(UWN_Prefab_NiagaraComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_Prefab_NiagaraComponent *)&this[-1].field_0x5e8);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{560}' @ 1494b2d30

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_Prefab_NiagaraComponent::_getUObject`adjustor{560}' (void)const __ptr64 */

UObject * __thiscall
UWN_Prefab_NiagaraComponent::_getUObject_adjustor_560__(UWN_Prefab_NiagaraComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_Prefab_NiagaraComponent *)&this[-1].field_0x5e0);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{568}' @ 1494b2d44

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_Prefab_NiagaraComponent::_getUObject`adjustor{568}' (void)const __ptr64 */

UObject * __thiscall
UWN_Prefab_NiagaraComponent::_getUObject_adjustor_568__(UWN_Prefab_NiagaraComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_Prefab_NiagaraComponent *)&this[-1].field_0x5d8);
  return (UObject *)pUVar1;
}

// _getUObject`adjustor{2008}' @ 1494b2d58

/* [thunk]:public: virtual class UObject * __ptr64 __cdecl
   UWN_Prefab_NiagaraComponent::_getUObject`adjustor{2008}' (void)const __ptr64 */

UObject * __thiscall
UWN_Prefab_NiagaraComponent::_getUObject_adjustor_2008__(UWN_Prefab_NiagaraComponent *this)

{
  UObject *pUVar1;
  
  pUVar1 = _getUObject((UWN_Prefab_NiagaraComponent *)&this[-1].field_0x38);
  return (UObject *)pUVar1;
}

