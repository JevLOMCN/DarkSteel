// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 7

// StaticClass @ 146302200

UClass * __cdecl UChaosEventListenerComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosEventListenerComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosEventListenerComponent",
               &Z_Registration_Info_UClass_UChaosEventListenerComponent.InnerSingleton,
               StaticRegisterNativesUChaosEventListenerComponent,200,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosEventListenerComponent>,
               InternalVTableHelperCtorCaller<UChaosEventListenerComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosEventListenerComponent.InnerSingleton;
}

// UChaosEventListenerComponent @ 146309f30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChaosEventListenerComponent * __thiscall
UChaosEventListenerComponent::UChaosEventListenerComponent
          (UChaosEventListenerComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// UChaosEventListenerComponent @ 146309f70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UChaosEventListenerComponent * __thiscall
UChaosEventListenerComponent::UChaosEventListenerComponent(UChaosEventListenerComponent *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UActorComponent::UActorComponent((UActorComponent *)this,pFVar1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(byte *)((longlong)&this->_padding_ + 2) = *(byte *)((longlong)&this->_padding_ + 2) | 2;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,true);
  *(undefined1 *)&this->_padding_ = 4;
  return this;
}

// ~UChaosEventListenerComponent @ 14630b2a0

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
UChaosEventListenerComponent::~UChaosEventListenerComponent(UChaosEventListenerComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// GetPrivateStaticClass @ 1463136f0

UClass * __cdecl UChaosEventListenerComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosEventListenerComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosSolverEngine",L"ChaosEventListenerComponent",
               &Z_Registration_Info_UClass_UChaosEventListenerComponent.InnerSingleton,
               StaticRegisterNativesUChaosEventListenerComponent,200,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UChaosEventListenerComponent>,
               InternalVTableHelperCtorCaller<UChaosEventListenerComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosEventListenerComponent.InnerSingleton;
}

// StaticRegisterNativesUChaosEventListenerComponent @ 1463202f0

void __cdecl UChaosEventListenerComponent::StaticRegisterNativesUChaosEventListenerComponent(void)

{
  return;
}

// TickComponent @ 146320e80

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
UChaosEventListenerComponent::TickComponent
          (UChaosEventListenerComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  UFunction *pUVar4;
  UWorld *this_00;
  FLatentActionManager *this_01;
  float afStackX_8 [2];
  
  if (((this->_padding_ & 1) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRegistered",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                         ,0x730,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar1 = *(uint *)(this->_padding_ + 0xd4);
  if (((uVar1 >> 0x12 & 1) != 0) || (-1 < (char)uVar1)) {
    afStackX_8[0] = param_1;
    pUVar4 = UObject::FindFunctionChecked((UObject *)this,NAME_UActorComponent_ReceiveTick);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar4,afStackX_8);
    if ((GTickComponentLatentActionsWithTheComponent != 0) &&
       (this_00 = UActorComponent::GetWorld((UActorComponent *)this), this_00 != (UWorld *)0x0)) {
      this_01 = UWorld::GetLatentActionManager(this_00);
      FLatentActionManager::ProcessLatentActions(this_01,(UObject *)this,this_00->DeltaTimeSeconds);
    }
  }
  return;
}

