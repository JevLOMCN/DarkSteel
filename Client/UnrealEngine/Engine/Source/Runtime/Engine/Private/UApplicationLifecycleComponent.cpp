// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// StaticClass @ 14773c770

UClass * __cdecl UApplicationLifecycleComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UApplicationLifecycleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ApplicationLifecycleComponent",
               &Z_Registration_Info_UClass_UApplicationLifecycleComponent.InnerSingleton,
               StaticRegisterNativesUApplicationLifecycleComponent,0x198,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UApplicationLifecycleComponent>,
               InternalVTableHelperCtorCaller<UApplicationLifecycleComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UApplicationLifecycleComponent.InnerSingleton;
}

// UApplicationLifecycleComponent @ 1477ee9b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UApplicationLifecycleComponent * __thiscall
UApplicationLifecycleComponent::UApplicationLifecycleComponent
          (UApplicationLifecycleComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->ApplicationWillDeactivateDelegate = 0;
  *(undefined8 *)&(this->ApplicationWillDeactivateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationWillDeactivateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationHasReactivatedDelegate = 0;
  *(undefined8 *)&(this->ApplicationHasReactivatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationHasReactivatedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationWillEnterBackgroundDelegate = 0;
  *(undefined8 *)&(this->ApplicationWillEnterBackgroundDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationWillEnterBackgroundDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationHasEnteredForegroundDelegate = 0;
  *(undefined8 *)&(this->ApplicationHasEnteredForegroundDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationHasEnteredForegroundDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationWillTerminateDelegate = 0;
  *(undefined8 *)&(this->ApplicationWillTerminateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationWillTerminateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationShouldUnloadResourcesDelegate = 0;
  *(undefined8 *)&(this->ApplicationShouldUnloadResourcesDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationShouldUnloadResourcesDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationReceivedStartupArgumentsDelegate = 0;
  *(undefined8 *)&(this->ApplicationReceivedStartupArgumentsDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationReceivedStartupArgumentsDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnTemperatureChangeDelegate = 0;
  *(undefined8 *)&(this->OnTemperatureChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnTemperatureChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnLowPowerModeDelegate = 0;
  *(undefined8 *)&(this->OnLowPowerModeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnLowPowerModeDelegate).field_0x10 = 0;
  return this;
}

// UApplicationLifecycleComponent @ 1477eeab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UApplicationLifecycleComponent * __thiscall
UApplicationLifecycleComponent::UApplicationLifecycleComponent
          (UApplicationLifecycleComponent *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->ApplicationWillDeactivateDelegate = 0;
  *(undefined8 *)&(this->ApplicationWillDeactivateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationWillDeactivateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationHasReactivatedDelegate = 0;
  *(undefined8 *)&(this->ApplicationHasReactivatedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationHasReactivatedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationWillEnterBackgroundDelegate = 0;
  *(undefined8 *)&(this->ApplicationWillEnterBackgroundDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationWillEnterBackgroundDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationHasEnteredForegroundDelegate = 0;
  *(undefined8 *)&(this->ApplicationHasEnteredForegroundDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationHasEnteredForegroundDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationWillTerminateDelegate = 0;
  *(undefined8 *)&(this->ApplicationWillTerminateDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationWillTerminateDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationShouldUnloadResourcesDelegate = 0;
  *(undefined8 *)&(this->ApplicationShouldUnloadResourcesDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationShouldUnloadResourcesDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationReceivedStartupArgumentsDelegate = 0;
  *(undefined8 *)&(this->ApplicationReceivedStartupArgumentsDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationReceivedStartupArgumentsDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnTemperatureChangeDelegate = 0;
  *(undefined8 *)&(this->OnTemperatureChangeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnTemperatureChangeDelegate).field_0x10 = 0;
  *(undefined8 *)&this->OnLowPowerModeDelegate = 0;
  *(undefined8 *)&(this->OnLowPowerModeDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->OnLowPowerModeDelegate).field_0x10 = 0;
  return this;
}

// ~UApplicationLifecycleComponent @ 1477f3f20

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
UApplicationLifecycleComponent::~UApplicationLifecycleComponent
          (UApplicationLifecycleComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->OnLowPowerModeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLowPowerModeDelegate);
  pvVar1 = *(void **)&(this->OnTemperatureChangeDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTemperatureChangeDelegate);
  pvVar1 = *(void **)&(this->ApplicationReceivedStartupArgumentsDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ApplicationReceivedStartupArgumentsDelegate);
  pvVar1 = *(void **)&(this->ApplicationShouldUnloadResourcesDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ApplicationShouldUnloadResourcesDelegate);
  pvVar1 = *(void **)&(this->ApplicationWillTerminateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ApplicationWillTerminateDelegate);
  pvVar1 = *(void **)&(this->ApplicationHasEnteredForegroundDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ApplicationHasEnteredForegroundDelegate);
  pvVar1 = *(void **)&(this->ApplicationWillEnterBackgroundDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ApplicationWillEnterBackgroundDelegate);
  pvVar1 = *(void **)&(this->ApplicationHasReactivatedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ApplicationHasReactivatedDelegate);
  pvVar1 = *(void **)&(this->ApplicationWillDeactivateDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ApplicationWillDeactivateDelegate);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// ApplicationHasEnteredForegroundDelegate_Handler @ 1478068e0

void __thiscall
UApplicationLifecycleComponent::ApplicationHasEnteredForegroundDelegate_Handler
          (UApplicationLifecycleComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationHasEnteredForegroundDelegate,(void *)0x0);
  return;
}

// ApplicationHasReactivatedDelegate_Handler @ 147806900

void __thiscall
UApplicationLifecycleComponent::ApplicationHasReactivatedDelegate_Handler
          (UApplicationLifecycleComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationHasReactivatedDelegate,(void *)0x0);
  return;
}

// ApplicationReceivedStartupArgumentsDelegate_Handler @ 147806920

void __thiscall
UApplicationLifecycleComponent::ApplicationReceivedStartupArgumentsDelegate_Handler
          (UApplicationLifecycleComponent *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1
          )

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_1) {
    DestructItems<FString,int>((FString *)0x0,0);
    iVar1 = param_1->ArrayNum;
    pFVar2 = (param_1->AllocatorInstance).Data;
    local_18.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_18.ArrayMax == 0)) {
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,local_18.ArrayMax,&local_18.AllocatorInstance,iVar1,&local_18.ArrayMax
                );
      ConstructItems<FString,FString,int>(local_18.AllocatorInstance.Data,(FString *)pFVar2,iVar1);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationReceivedStartupArgumentsDelegate,&local_18);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// ApplicationShouldUnloadResourcesDelegate_Handler @ 147806a00

void __thiscall
UApplicationLifecycleComponent::ApplicationShouldUnloadResourcesDelegate_Handler
          (UApplicationLifecycleComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationShouldUnloadResourcesDelegate,(void *)0x0);
  return;
}

// ApplicationWillDeactivateDelegate_Handler @ 147806a20

void __thiscall
UApplicationLifecycleComponent::ApplicationWillDeactivateDelegate_Handler
          (UApplicationLifecycleComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationWillDeactivateDelegate,(void *)0x0);
  return;
}

// ApplicationWillEnterBackgroundDelegate_Handler @ 147806a40

void __thiscall
UApplicationLifecycleComponent::ApplicationWillEnterBackgroundDelegate_Handler
          (UApplicationLifecycleComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationWillEnterBackgroundDelegate,(void *)0x0);
  return;
}

// ApplicationWillTerminateDelegate_Handler @ 147806a60

void __thiscall
UApplicationLifecycleComponent::ApplicationWillTerminateDelegate_Handler
          (UApplicationLifecycleComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationWillTerminateDelegate,(void *)0x0);
  return;
}

// FApplicationLifetimeDelegate_DelegateWrapper @ 147820570

void __cdecl
UApplicationLifecycleComponent::FApplicationLifetimeDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FApplicationStartupArgumentsDelegate_DelegateWrapper @ 147820580

void __cdecl
UApplicationLifecycleComponent::FApplicationStartupArgumentsDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_2) {
    DestructItems<FString,int>((FString *)0x0,0);
    iVar1 = param_2->ArrayNum;
    pFVar2 = (param_2->AllocatorInstance).Data;
    local_18.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_18.ArrayMax == 0)) {
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar1,local_18.ArrayMax,&local_18.AllocatorInstance,iVar1,&local_18.ArrayMax
                );
      ConstructItems<FString,FString,int>(local_18.AllocatorInstance.Data,(FString *)pFVar2,iVar1);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FOnLowPowerModeDelegate_DelegateWrapper @ 147820760

void __cdecl
UApplicationLifecycleComponent::FOnLowPowerModeDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,bool param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FOnTemperatureChangeDelegate_DelegateWrapper @ 147820930

void __cdecl
UApplicationLifecycleComponent::FOnTemperatureChangeDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          ETemperatureSeverityType param_2)

{
  ETemperatureSeverityType local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// GetPrivateStaticClass @ 14783bea0

UClass * __cdecl UApplicationLifecycleComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UApplicationLifecycleComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"ApplicationLifecycleComponent",
               &Z_Registration_Info_UClass_UApplicationLifecycleComponent.InnerSingleton,
               StaticRegisterNativesUApplicationLifecycleComponent,0x198,8,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UApplicationLifecycleComponent>,
               InternalVTableHelperCtorCaller<UApplicationLifecycleComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UApplicationLifecycleComponent.InnerSingleton;
}

// OnLowPowerModeDelegate_Handler @ 147845d90

void __thiscall
UApplicationLifecycleComponent::OnLowPowerModeDelegate_Handler
          (UApplicationLifecycleComponent *this,bool param_1)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnLowPowerModeDelegate,
             local_res10);
  return;
}

// OnRegister @ 1478471e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UApplicationLifecycleComponent::OnRegister(UApplicationLifecycleComponent *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this_00;
  
  UActorComponent::OnRegister((UActorComponent *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UApplicationLifecycleComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationWillDeactivateDelegate,
             (UApplicationLifecycleComponent *)&stack0x00000010,(pmf_d638c64e *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UApplicationLifecycleComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationHasReactivatedDelegate,
             (UApplicationLifecycleComponent *)&stack0x00000010,(pmf_d638c64e *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UApplicationLifecycleComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationWillEnterBackgroundDelegate,
             (UApplicationLifecycleComponent *)&stack0x00000010,(pmf_d638c64e *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UApplicationLifecycleComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationHasEnteredForegroundDelegate,
             (UApplicationLifecycleComponent *)&stack0x00000010,(pmf_d638c64e *)this);
  this_00 = FCoreDelegates::GetApplicationWillTerminateDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
  AddUObject<UApplicationLifecycleComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             this_00,(UApplicationLifecycleComponent *)&stack0x00000010,(pmf_d638c64e *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UApplicationLifecycleComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationShouldUnloadResourcesDelegate,
             (UApplicationLifecycleComponent *)&stack0x00000010,(pmf_d638c64e *)this);
  TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UApplicationLifecycleComponent>
            ((TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::ApplicationReceivedStartupArgumentsDelegate,
             (UApplicationLifecycleComponent *)&stack0x00000010,(pmf_53ebc69b *)this);
  TMulticastDelegateRegistration<void___cdecl(enum_FCoreDelegates::ETemperatureSeverity),FDefaultDelegateUserPolicy>
  ::AddUObject<UApplicationLifecycleComponent>
            (&FCoreDelegates::OnTemperatureChange,(UApplicationLifecycleComponent *)&stack0x00000010
             ,(pmf_98f237b2 *)this);
  TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy>::
  AddUObject<UApplicationLifecycleComponent>
            ((TMulticastDelegateRegistration<void___cdecl(bool),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnLowPowerMode,(UApplicationLifecycleComponent *)&stack0x00000010,
             (pmf_98c3c232 *)this);
  return;
}

// OnTemperatureChangeDelegate_Handler @ 1478478a0

void __thiscall
UApplicationLifecycleComponent::OnTemperatureChangeDelegate_Handler
          (UApplicationLifecycleComponent *this,ETemperatureSeverity param_1)

{
  ETemperatureSeverity local_res10 [24];
  
  local_res10[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->OnTemperatureChangeDelegate,local_res10);
  return;
}

// OnUnregister @ 147847b20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UApplicationLifecycleComponent::OnUnregister(UApplicationLifecycleComponent *this)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  UWorld *this_00;
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_01;
  
  if ((this->_padding_ & 1) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bRegistered",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x62b,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(byte *)&this->_padding_ = (byte)this->_padding_ & 0xfe;
  if (*(int *)((longlong)&this->_padding_ + 4) == 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsPreRegistering()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x62e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)((longlong)&this->_padding_ + 4) == 3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsPreUnregistering()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\ActorComponent.cpp"
                       ,0x62f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lVar2 = this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  if ((lVar2 & 0x300000000) != 0) {
    this_00 = UActorComponent::GetWorld((UActorComponent *)this);
    if (this_00 != (UWorld *)0x0) {
      UWorld::ClearActorComponentEndOfFrameUpdate(this_00,(UActorComponent *)this);
    }
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationWillDeactivateDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationHasReactivatedDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationWillEnterBackgroundDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationHasEnteredForegroundDelegate,this);
  this_01 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
            FCoreDelegates::GetApplicationWillTerminateDelegate();
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_01,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationShouldUnloadResourcesDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationReceivedStartupArgumentsDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::OnTemperatureChange,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnLowPowerMode,
             this);
  return;
}

// StaticRegisterNativesUApplicationLifecycleComponent @ 1478758d0

void __cdecl
UApplicationLifecycleComponent::StaticRegisterNativesUApplicationLifecycleComponent(void)

{
  return;
}

