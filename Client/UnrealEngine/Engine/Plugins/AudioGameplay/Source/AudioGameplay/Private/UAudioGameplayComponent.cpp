// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplay
// Functions: 12

// StaticClass @ 14d981ee0

UClass * __cdecl UAudioGameplayComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioGameplayComponent",
               &Z_Registration_Info_UClass_UAudioGameplayComponent.InnerSingleton,
               StaticRegisterNativesUAudioGameplayComponent,200,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAudioGameplayComponent>,
               InternalVTableHelperCtorCaller<UAudioGameplayComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayComponent.InnerSingleton;
}

// UAudioGameplayComponent @ 14d987bb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAudioGameplayComponent * __thiscall
UAudioGameplayComponent::UAudioGameplayComponent
          (UAudioGameplayComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->PayloadType = AGCP_None;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// UAudioGameplayComponent @ 14d987c00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UAudioGameplayComponent * __thiscall
UAudioGameplayComponent::UAudioGameplayComponent
          (UAudioGameplayComponent *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->PayloadType = AGCP_None;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(byte *)((longlong)&this->_padding_ + 2) = *(byte *)((longlong)&this->_padding_ + 2) & 0xf1;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,false);
  return this;
}

// ~UAudioGameplayComponent @ 14d988760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UAudioGameplayComponent::~UAudioGameplayComponent(UAudioGameplayComponent *this)

{
  this->_padding_ = (longlong)&UActorComponent::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UActorComponent::_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&UActorComponent::_vftable__for__IAsyncPhysicsStateProcessor__;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FTickFunction::~FTickFunction((FTickFunction *)&this->_padding_);
  this->_padding_ = (longlong)&___7IInterface_AssetUserData__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Activate @ 14d9896a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioGameplayComponent::Activate(UAudioGameplayComponent *this,bool param_1)

{
  longlong lVar1;
  ENetMode EVar2;
  
  lVar1 = this->_padding_;
  UActorComponent::Activate((UActorComponent *)this,param_1);
  if (((lVar1 & 0x100000) == 0) && ((this->_padding_ & 0x100000) != 0)) {
    EVar2 = UActorComponent::InternalGetNetMode((UActorComponent *)this);
    if (EVar2 != NM_DedicatedServer) {
      (**(code **)(this->_padding_ + 0x500))(this);
    }
  }
  return;
}

// Deactivate @ 14d98a9a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioGameplayComponent::Deactivate(UAudioGameplayComponent *this)

{
  longlong lVar1;
  ENetMode EVar2;
  
  lVar1 = this->_padding_;
  UActorComponent::Deactivate((UActorComponent *)this);
  if (((lVar1 & 0x100000) != 0) && ((this->_padding_ & 0x100000) == 0)) {
    EVar2 = UActorComponent::InternalGetNetMode((UActorComponent *)this);
    if (EVar2 != NM_DedicatedServer) {
      (**(code **)(this->_padding_ + 0x508))(this);
    }
  }
  return;
}

// Disable @ 14d98b690

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioGameplayComponent::Disable(UAudioGameplayComponent *this)

{
  FString local_18;
  
  if (6 < (byte)AudioGameplayLog._0_1_) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&AudioGameplayLog);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// Enable @ 14d98b8f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAudioGameplayComponent::Enable(UAudioGameplayComponent *this)

{
  FString local_18;
  
  if (6 < (byte)AudioGameplayLog._0_1_) {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_18,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&AudioGameplayLog);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EndPlay @ 14d98b980

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UAudioGameplayComponent::EndPlay(UAudioGameplayComponent *this,Type param_1)

{
  (**(code **)(this->_padding_ + 0x2c0))();
  UActorComponent::EndPlay((UActorComponent *)this,param_1);
  return;
}

// GetPrivateStaticClass @ 14d98dd20

UClass * __cdecl UAudioGameplayComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioGameplayComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioGameplay",L"AudioGameplayComponent",
               &Z_Registration_Info_UClass_UAudioGameplayComponent.InnerSingleton,
               StaticRegisterNativesUAudioGameplayComponent,200,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Game",InternalConstructor<UAudioGameplayComponent>,
               InternalVTableHelperCtorCaller<UAudioGameplayComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioGameplayComponent.InnerSingleton;
}

// HasPayloadType @ 14d98e2d0

bool __thiscall
UAudioGameplayComponent::HasPayloadType(UAudioGameplayComponent *this,EComponentPayload param_1)

{
  return (this->PayloadType & param_1) != AGCP_None;
}

// StaticRegisterNativesUAudioGameplayComponent @ 14d993680

void __cdecl UAudioGameplayComponent::StaticRegisterNativesUAudioGameplayComponent(void)

{
  return;
}

