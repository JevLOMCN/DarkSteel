// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XRBase
// Functions: 22

// StaticClass @ 14cf76570

UClass * __cdecl UVRNotificationsComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVRNotificationsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"VRNotificationsComponent",
               &Z_Registration_Info_UClass_UVRNotificationsComponent.InnerSingleton,
               StaticRegisterNativesUVRNotificationsComponent,0x1e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UVRNotificationsComponent>,
               InternalVTableHelperCtorCaller<UVRNotificationsComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVRNotificationsComponent.InnerSingleton;
}

// UVRNotificationsComponent @ 14cf7e3f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UVRNotificationsComponent * __thiscall
UVRNotificationsComponent::UVRNotificationsComponent
          (UVRNotificationsComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate = 0;
  *(undefined8 *)&(this->HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->HMDTrackingInitializedDelegate = 0;
  *(undefined8 *)&(this->HMDTrackingInitializedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HMDTrackingInitializedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->HMDRecenteredDelegate = 0;
  *(undefined8 *)&(this->HMDRecenteredDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HMDRecenteredDelegate).field_0x10 = 0;
  *(undefined8 *)&this->HMDLostDelegate = 0;
  *(undefined8 *)&(this->HMDLostDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HMDLostDelegate).field_0x10 = 0;
  *(undefined8 *)&this->HMDReconnectedDelegate = 0;
  *(undefined8 *)&(this->HMDReconnectedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HMDReconnectedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->HMDConnectCanceledDelegate = 0;
  *(undefined8 *)&(this->HMDConnectCanceledDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HMDConnectCanceledDelegate).field_0x10 = 0;
  *(undefined8 *)&this->HMDPutOnHeadDelegate = 0;
  *(undefined8 *)&(this->HMDPutOnHeadDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HMDPutOnHeadDelegate).field_0x10 = 0;
  *(undefined8 *)&this->HMDRemovedFromHeadDelegate = 0;
  *(undefined8 *)&(this->HMDRemovedFromHeadDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HMDRemovedFromHeadDelegate).field_0x10 = 0;
  *(undefined8 *)&this->VRControllerRecenteredDelegate = 0;
  *(undefined8 *)&(this->VRControllerRecenteredDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->VRControllerRecenteredDelegate).field_0x10 = 0;
  *(undefined8 *)&this->XRTrackingOriginChangedDelegate = 0;
  *(undefined8 *)&(this->XRTrackingOriginChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->XRTrackingOriginChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->XRPlayAreaChangedDelegate = 0;
  *(undefined8 *)&(this->XRPlayAreaChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->XRPlayAreaChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->XRInteractionProfileChangedDelegate = 0;
  *(undefined8 *)&(this->XRInteractionProfileChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->XRInteractionProfileChangedDelegate).field_0x10 = 0;
  return this;
}

// UVRNotificationsComponent @ 14cf7e530

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UVRNotificationsComponent * __thiscall
UVRNotificationsComponent::UVRNotificationsComponent
          (UVRNotificationsComponent *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate = 0;
  *(undefined8 *)&(this->HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->HMDTrackingInitializedDelegate = 0;
  *(undefined8 *)&(this->HMDTrackingInitializedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HMDTrackingInitializedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->HMDRecenteredDelegate = 0;
  *(undefined8 *)&(this->HMDRecenteredDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HMDRecenteredDelegate).field_0x10 = 0;
  *(undefined8 *)&this->HMDLostDelegate = 0;
  *(undefined8 *)&(this->HMDLostDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HMDLostDelegate).field_0x10 = 0;
  *(undefined8 *)&this->HMDReconnectedDelegate = 0;
  *(undefined8 *)&(this->HMDReconnectedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HMDReconnectedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->HMDConnectCanceledDelegate = 0;
  *(undefined8 *)&(this->HMDConnectCanceledDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HMDConnectCanceledDelegate).field_0x10 = 0;
  *(undefined8 *)&this->HMDPutOnHeadDelegate = 0;
  *(undefined8 *)&(this->HMDPutOnHeadDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HMDPutOnHeadDelegate).field_0x10 = 0;
  *(undefined8 *)&this->HMDRemovedFromHeadDelegate = 0;
  *(undefined8 *)&(this->HMDRemovedFromHeadDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->HMDRemovedFromHeadDelegate).field_0x10 = 0;
  *(undefined8 *)&this->VRControllerRecenteredDelegate = 0;
  *(undefined8 *)&(this->VRControllerRecenteredDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->VRControllerRecenteredDelegate).field_0x10 = 0;
  *(undefined8 *)&this->XRTrackingOriginChangedDelegate = 0;
  *(undefined8 *)&(this->XRTrackingOriginChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->XRTrackingOriginChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->XRPlayAreaChangedDelegate = 0;
  *(undefined8 *)&(this->XRPlayAreaChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->XRPlayAreaChangedDelegate).field_0x10 = 0;
  *(undefined8 *)&this->XRInteractionProfileChangedDelegate = 0;
  *(undefined8 *)&(this->XRInteractionProfileChangedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->XRInteractionProfileChangedDelegate).field_0x10 = 0;
  return this;
}

// ~UVRNotificationsComponent @ 14cf7f0d0

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
UVRNotificationsComponent::~UVRNotificationsComponent(UVRNotificationsComponent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  pvVar1 = *(void **)&(this->XRInteractionProfileChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->XRInteractionProfileChangedDelegate);
  pvVar1 = *(void **)&(this->XRPlayAreaChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->XRPlayAreaChangedDelegate);
  pvVar1 = *(void **)&(this->XRTrackingOriginChangedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->XRTrackingOriginChangedDelegate);
  pvVar1 = *(void **)&(this->VRControllerRecenteredDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->VRControllerRecenteredDelegate);
  pvVar1 = *(void **)&(this->HMDRemovedFromHeadDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HMDRemovedFromHeadDelegate);
  pvVar1 = *(void **)&(this->HMDPutOnHeadDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HMDPutOnHeadDelegate);
  pvVar1 = *(void **)&(this->HMDConnectCanceledDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HMDConnectCanceledDelegate);
  pvVar1 = *(void **)&(this->HMDReconnectedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HMDReconnectedDelegate);
  pvVar1 = *(void **)&(this->HMDLostDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HMDLostDelegate);
  pvVar1 = *(void **)&(this->HMDRecenteredDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HMDRecenteredDelegate);
  pvVar1 = *(void **)&(this->HMDTrackingInitializedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->HMDTrackingInitializedDelegate);
  pvVar1 = *(void **)&(this->HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &this->HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate);
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// FVRNotificationsDelegate_DelegateWrapper @ 14cf8c410

void __cdecl
UVRNotificationsComponent::FVRNotificationsDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// GetPrivateStaticClass @ 14cf90780

UClass * __cdecl UVRNotificationsComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UVRNotificationsComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/XRBase",L"VRNotificationsComponent",
               &Z_Registration_Info_UClass_UVRNotificationsComponent.InnerSingleton,
               StaticRegisterNativesUVRNotificationsComponent,0x1e0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UVRNotificationsComponent>,
               InternalVTableHelperCtorCaller<UVRNotificationsComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UVRNotificationsComponent.InnerSingleton;
}

// HMDConnectCanceledDelegate_Handler @ 14cf91f90

void __thiscall
UVRNotificationsComponent::HMDConnectCanceledDelegate_Handler(UVRNotificationsComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->HMDConnectCanceledDelegate,(void *)0x0);
  return;
}

// HMDLostDelegate_Handler @ 14cf91fb0

void __thiscall UVRNotificationsComponent::HMDLostDelegate_Handler(UVRNotificationsComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->HMDLostDelegate,
             (void *)0x0);
  return;
}

// HMDPutOnHeadDelegate_Handler @ 14cf91fd0

void __thiscall
UVRNotificationsComponent::HMDPutOnHeadDelegate_Handler(UVRNotificationsComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->HMDPutOnHeadDelegate,
             (void *)0x0);
  return;
}

// HMDRecenteredDelegate_Handler @ 14cf91ff0

void __thiscall
UVRNotificationsComponent::HMDRecenteredDelegate_Handler(UVRNotificationsComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->HMDRecenteredDelegate,
             (void *)0x0);
  return;
}

// HMDReconnectedDelegate_Handler @ 14cf92010

void __thiscall
UVRNotificationsComponent::HMDReconnectedDelegate_Handler(UVRNotificationsComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->HMDReconnectedDelegate,
             (void *)0x0);
  return;
}

// HMDRemovedFromHeadDelegate_Handler @ 14cf92030

void __thiscall
UVRNotificationsComponent::HMDRemovedFromHeadDelegate_Handler(UVRNotificationsComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->HMDRemovedFromHeadDelegate,(void *)0x0);
  return;
}

// HMDTrackingInitializedDelegate_Handler @ 14cf922f0

void __thiscall
UVRNotificationsComponent::HMDTrackingInitializedDelegate_Handler(UVRNotificationsComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->HMDTrackingInitializedDelegate,(void *)0x0);
  return;
}

// HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate_Handler @ 14cf92310

void __thiscall
UVRNotificationsComponent::HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate_Handler
          (UVRNotificationsComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate,(void *)0x0);
  return;
}

// OnRegister @ 14cf938d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UVRNotificationsComponent::OnRegister(UVRNotificationsComponent *this)

{
  UActorComponent::OnRegister((UActorComponent *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UVRNotificationsComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::VRHeadsetTrackingInitializingAndNeedsHMDToBeTrackedDelegate,
             (UVRNotificationsComponent *)&stack0x00000010,(pmf_bdfb59f2 *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UVRNotificationsComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::VRHeadsetTrackingInitializedDelegate,
             (UVRNotificationsComponent *)&stack0x00000010,(pmf_bdfb59f2 *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UVRNotificationsComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::VRHeadsetRecenter,(UVRNotificationsComponent *)&stack0x00000010,
             (pmf_bdfb59f2 *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UVRNotificationsComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::VRHeadsetLost,(UVRNotificationsComponent *)&stack0x00000010,
             (pmf_bdfb59f2 *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UVRNotificationsComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::VRHeadsetReconnected,(UVRNotificationsComponent *)&stack0x00000010,
             (pmf_bdfb59f2 *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UVRNotificationsComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::VRHeadsetConnectCanceled,(UVRNotificationsComponent *)&stack0x00000010
             ,(pmf_bdfb59f2 *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UVRNotificationsComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::VRHeadsetPutOnHead,(UVRNotificationsComponent *)&stack0x00000010,
             (pmf_bdfb59f2 *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UVRNotificationsComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::VRHeadsetRemovedFromHead,(UVRNotificationsComponent *)&stack0x00000010
             ,(pmf_bdfb59f2 *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UVRNotificationsComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::VRControllerRecentered,(UVRNotificationsComponent *)&stack0x00000010,
             (pmf_bdfb59f2 *)this);
  TMulticastDelegateRegistration<void___cdecl(IXRTrackingSystem_const_*),FDefaultDelegateUserPolicy>
  ::AddUObject<UVRNotificationsComponent>
            ((TMulticastDelegateRegistration<void___cdecl(IXRTrackingSystem_const_*),FDefaultDelegateUserPolicy>
              *)&FXRTrackingSystemDelegates::OnXRTrackingOriginChanged,
             (UVRNotificationsComponent *)&stack0x00000010,(pmf_cf5f9ac2 *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UVRNotificationsComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FXRTrackingSystemDelegates::OnXRPlayAreaChanged,
             (UVRNotificationsComponent *)&stack0x00000010,(pmf_bdfb59f2 *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UVRNotificationsComponent>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FXRTrackingSystemDelegates::OnXRInteractionProfileChanged,
             (UVRNotificationsComponent *)&stack0x00000010,(pmf_bdfb59f2 *)this);
  return;
}

// OnUnregister @ 14cf93df0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UVRNotificationsComponent::OnUnregister(UVRNotificationsComponent *this)

{
  UActorComponent::OnUnregister((UActorComponent *)this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::VRHeadsetTrackingInitializingAndNeedsHMDToBeTrackedDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::VRHeadsetTrackingInitializedDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::VRHeadsetRecenter,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::VRHeadsetLost,
             this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::VRHeadsetReconnected,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::VRHeadsetConnectCanceled,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::VRHeadsetPutOnHead,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::VRHeadsetRemovedFromHead,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::VRControllerRecentered,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FXRTrackingSystemDelegates::OnXRTrackingOriginChanged,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FXRTrackingSystemDelegates::OnXRPlayAreaChanged,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FXRTrackingSystemDelegates::OnXRInteractionProfileChanged,this);
  return;
}

// StaticRegisterNativesUVRNotificationsComponent @ 14cf9c9f0

void __cdecl UVRNotificationsComponent::StaticRegisterNativesUVRNotificationsComponent(void)

{
  return;
}

// VRControllerRecentered_Handler @ 14cf9e360

void __thiscall
UVRNotificationsComponent::VRControllerRecentered_Handler(UVRNotificationsComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->VRControllerRecenteredDelegate,(void *)0x0);
  return;
}

// XRInteractionProfileChanged_Handler @ 14cf9f3f0

void __thiscall
UVRNotificationsComponent::XRInteractionProfileChanged_Handler(UVRNotificationsComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->XRInteractionProfileChangedDelegate,(void *)0x0);
  return;
}

// XRPlayAreaChanged_Handler @ 14cf9f410

void __thiscall
UVRNotificationsComponent::XRPlayAreaChanged_Handler(UVRNotificationsComponent *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->XRPlayAreaChangedDelegate,(void *)0x0);
  return;
}

// XRTrackingOriginChanged_Handler @ 14cf9f430

void __thiscall
UVRNotificationsComponent::XRTrackingOriginChanged_Handler
          (UVRNotificationsComponent *this,IXRTrackingSystem *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->XRTrackingOriginChangedDelegate,(void *)0x0);
  return;
}

// __VTableCtorCaller @ 14cf9fb60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl UVRNotificationsComponent::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UActorComponent *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UActorComponent *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UActorComponent *)0x0) {
    UActorComponent::UActorComponent(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
    this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick._padding_ = 0;
    this[1].PrimaryComponentTick.Target = (UActorComponent *)0x0;
    this[1].ComponentTags.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ComponentTags.ArrayNum = 0;
    this[1].ComponentTags.ArrayMax = 0;
    this[1].AssetUserData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].AssetUserData.ArrayNum = 0;
    this[1].AssetUserData.ArrayMax = 0;
    *(undefined8 *)&this[1].field_0x88 = 0;
    this[1].UCSSerializationIndex = 0;
    this[1].RegistrationState = None;
    *(undefined8 *)&this[1].field_0x98 = 0;
    this[1].PhysicsStateAsyncCreationScene = (FPhysScene_Chaos *)0x0;
    this[1].OwnerPrivate = (AActor *)0x0;
    this[1].WorldPrivate = (UWorld *)0x0;
    *(undefined8 *)&this[1].field_0xb8 = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    this[2].PrimaryComponentTick._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

