// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 12

// StaticClass @ 146d62c10

UClass * __cdecl UNavigationInvokerComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationInvokerComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationInvokerComponent",
               &Z_Registration_Info_UClass_UNavigationInvokerComponent.InnerSingleton,
               StaticRegisterNativesUNavigationInvokerComponent,0xd0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavigationInvokerComponent>,
               InternalVTableHelperCtorCaller<UNavigationInvokerComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationInvokerComponent.InnerSingleton;
}

// UNavigationInvokerComponent @ 146d763b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNavigationInvokerComponent * __thiscall
UNavigationInvokerComponent::UNavigationInvokerComponent
          (UNavigationInvokerComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FNavAgentSelector::FNavAgentSelector(&this->SupportedAgents,0x7fffffff);
  return this;
}

// UNavigationInvokerComponent @ 146d76400

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UNavigationInvokerComponent * __thiscall
UNavigationInvokerComponent::UNavigationInvokerComponent
          (UNavigationInvokerComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->TileGenerationRadius = 3000.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->TileRemovalRadius = 5000.0;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  FNavAgentSelector::FNavAgentSelector(&this->SupportedAgents,0x7fffffff);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  (this->SupportedAgents).field0_0x0.PackedBits =
       (this->SupportedAgents).field0_0x0.PackedBits | 0x80000000;
  this->Priority = Default;
  return this;
}

// ~UNavigationInvokerComponent @ 146d78d90

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
UNavigationInvokerComponent::~UNavigationInvokerComponent(UNavigationInvokerComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// Activate @ 146d7ec50

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
UNavigationInvokerComponent::Activate(UNavigationInvokerComponent *this,bool param_1)

{
  TMulticastDelegate<void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  
  UActorComponent::Activate((UActorComponent *)this,param_1);
  this_00 = UNavigationSystemBase::OnNavigationInitStartStaticDelegate();
  TMulticastDelegateRegistration<void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UNavigationInvokerComponent>
            ((TMulticastDelegateRegistration<void___cdecl(UNavigationSystemBase_const_&),FDefaultDelegateUserPolicy>
              *)this_00,(UNavigationInvokerComponent *)&stack0x00000008,(pmf_e302682c *)this);
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    UNavigationSystemV1::RegisterNavigationInvoker
              ((AActor *)this->_padding_,this->TileGenerationRadius,this->TileRemovalRadius,
               &this->SupportedAgents,this->Priority);
  }
  return;
}

// Deactivate @ 146d8e630

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavigationInvokerComponent::Deactivate(UNavigationInvokerComponent *this)

{
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  
  UActorComponent::Deactivate((UActorComponent *)this);
  if ((AActor *)this->_padding_ != (AActor *)0x0) {
    UNavigationSystemV1::UnregisterNavigationInvoker((AActor *)this->_padding_);
  }
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            UNavigationSystemBase::OnNavigationInitStartStaticDelegate();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(this_00,this);
  return;
}

// GetPrivateStaticClass @ 146da0a30

UClass * __cdecl UNavigationInvokerComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNavigationInvokerComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NavigationSystem",L"NavigationInvokerComponent",
               &Z_Registration_Info_UClass_UNavigationInvokerComponent.InnerSingleton,
               StaticRegisterNativesUNavigationInvokerComponent,0xd0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UNavigationInvokerComponent>,
               InternalVTableHelperCtorCaller<UNavigationInvokerComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNavigationInvokerComponent.InnerSingleton;
}

// OnNavigationInitStart @ 146da99d0

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
UNavigationInvokerComponent::OnNavigationInitStart
          (UNavigationInvokerComponent *this,UNavigationSystemBase *param_1)

{
  AActor *pAVar1;
  UWorld *pUVar2;
  UWorld *pUVar3;
  
  pUVar2 = (UWorld *)this->_padding_;
  if (pUVar2 == (UWorld *)0x0) {
    pUVar2 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  pUVar3 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
  if ((pUVar3 == pUVar2) && (pAVar1 = (AActor *)this->_padding_, pAVar1 != (AActor *)0x0)) {
    UNavigationSystemV1::UnregisterNavigationInvoker(pAVar1);
    UNavigationSystemV1::RegisterNavigationInvoker
              (pAVar1,this->TileGenerationRadius,this->TileRemovalRadius,&this->SupportedAgents,
               this->Priority);
  }
  return;
}

// PostInitProperties @ 146dabdd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNavigationInvokerComponent::PostInitProperties(UNavigationInvokerComponent *this)

{
  UActorComponent::PostInitProperties((UActorComponent *)this);
  (this->SupportedAgents).field0_0x0.PackedBits =
       (this->SupportedAgents).field0_0x0.PackedBits | 0x80000000;
  return;
}

// RegisterWithNavigationSystem @ 146db1fc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UNavigationInvokerComponent::RegisterWithNavigationSystem
          (UNavigationInvokerComponent *this,UNavigationSystemV1 *param_1)

{
  if (((this->_padding_ & 0x100000) != 0) && (this->_padding_ != 0)) {
    (**(code **)(*(longlong *)param_1 + 0x398))
              (param_1,this->_padding_,this->TileGenerationRadius,this->TileRemovalRadius,
               &this->SupportedAgents,this->Priority);
  }
  return;
}

// SetGenerationRadii @ 146db8b40

void __thiscall
UNavigationInvokerComponent::SetGenerationRadii
          (UNavigationInvokerComponent *this,float param_1,float param_2)

{
  this->TileGenerationRadius = param_1;
  this->TileRemovalRadius = param_2;
  return;
}

// StaticRegisterNativesUNavigationInvokerComponent @ 146dba9e0

void __cdecl UNavigationInvokerComponent::StaticRegisterNativesUNavigationInvokerComponent(void)

{
  return;
}

