// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 30

// StaticClass @ 147d57020

UClass * __cdecl UPlatformGameInstance::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlatformGameInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UGameInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlatformGameInstance",
               &Z_Registration_Info_UClass_UPlatformGameInstance.InnerSingleton,
               StaticRegisterNativesUPlatformGameInstance,0x330,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Game",InternalConstructor<UPlatformGameInstance>,
               InternalVTableHelperCtorCaller<UPlatformGameInstance>,local_res8,
               UGameInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlatformGameInstance.InnerSingleton;
}

// UPlatformGameInstance @ 147d7a740

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPlatformGameInstance * __thiscall
UPlatformGameInstance::UPlatformGameInstance(UPlatformGameInstance *this,FVTableHelper *param_1)

{
  UGameInstance::UGameInstance((UGameInstance *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
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
  *(undefined8 *)&this->ApplicationRegisteredForRemoteNotificationsDelegate = 0;
  *(undefined8 *)&(this->ApplicationRegisteredForRemoteNotificationsDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationRegisteredForRemoteNotificationsDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationRegisteredForUserNotificationsDelegate = 0;
  *(undefined8 *)&(this->ApplicationRegisteredForUserNotificationsDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationRegisteredForUserNotificationsDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationFailedToRegisterForRemoteNotificationsDelegate = 0;
  *(undefined8 *)&(this->ApplicationFailedToRegisterForRemoteNotificationsDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationFailedToRegisterForRemoteNotificationsDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationReceivedRemoteNotificationDelegate = 0;
  *(undefined8 *)&(this->ApplicationReceivedRemoteNotificationDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationReceivedRemoteNotificationDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationReceivedLocalNotificationDelegate = 0;
  *(undefined8 *)&(this->ApplicationReceivedLocalNotificationDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationReceivedLocalNotificationDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationReceivedScreenOrientationChangedNotificationDelegate = 0;
  *(undefined8 *)&(this->ApplicationReceivedScreenOrientationChangedNotificationDelegate).field_0x8
       = 0;
  *(undefined8 *)&(this->ApplicationReceivedScreenOrientationChangedNotificationDelegate).field_0x10
       = 0;
  return this;
}

// UPlatformGameInstance @ 147d7a890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UPlatformGameInstance * __thiscall
UPlatformGameInstance::UPlatformGameInstance
          (UPlatformGameInstance *this,FObjectInitializer *param_1)

{
  UGameInstance::UGameInstance((UGameInstance *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
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
  *(undefined8 *)&this->ApplicationRegisteredForRemoteNotificationsDelegate = 0;
  *(undefined8 *)&(this->ApplicationRegisteredForRemoteNotificationsDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationRegisteredForRemoteNotificationsDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationRegisteredForUserNotificationsDelegate = 0;
  *(undefined8 *)&(this->ApplicationRegisteredForUserNotificationsDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationRegisteredForUserNotificationsDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationFailedToRegisterForRemoteNotificationsDelegate = 0;
  *(undefined8 *)&(this->ApplicationFailedToRegisterForRemoteNotificationsDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationFailedToRegisterForRemoteNotificationsDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationReceivedRemoteNotificationDelegate = 0;
  *(undefined8 *)&(this->ApplicationReceivedRemoteNotificationDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationReceivedRemoteNotificationDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationReceivedLocalNotificationDelegate = 0;
  *(undefined8 *)&(this->ApplicationReceivedLocalNotificationDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ApplicationReceivedLocalNotificationDelegate).field_0x10 = 0;
  *(undefined8 *)&this->ApplicationReceivedScreenOrientationChangedNotificationDelegate = 0;
  *(undefined8 *)&(this->ApplicationReceivedScreenOrientationChangedNotificationDelegate).field_0x8
       = 0;
  *(undefined8 *)&(this->ApplicationReceivedScreenOrientationChangedNotificationDelegate).field_0x10
       = 0;
  return this;
}

// ~UPlatformGameInstance @ 147d7bbb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UPlatformGameInstance::~UPlatformGameInstance(UPlatformGameInstance *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  pvVar1 = *(void **)&(this->ApplicationReceivedScreenOrientationChangedNotificationDelegate).
                      field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &this->ApplicationReceivedScreenOrientationChangedNotificationDelegate);
  pvVar1 = *(void **)&(this->ApplicationReceivedLocalNotificationDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ApplicationReceivedLocalNotificationDelegate);
  pvVar1 = *(void **)&(this->ApplicationReceivedRemoteNotificationDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ApplicationReceivedRemoteNotificationDelegate);
  pvVar1 = *(void **)&(this->ApplicationFailedToRegisterForRemoteNotificationsDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &this->ApplicationFailedToRegisterForRemoteNotificationsDelegate);
  pvVar1 = *(void **)&(this->ApplicationRegisteredForUserNotificationsDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &this->ApplicationRegisteredForUserNotificationsDelegate);
  pvVar1 = *(void **)&(this->ApplicationRegisteredForRemoteNotificationsDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)
             &this->ApplicationRegisteredForRemoteNotificationsDelegate);
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
  UGameInstance::~UGameInstance((UGameInstance *)this);
  return;
}

// ApplicationFailedToRegisterForRemoteNotificationsDelegate_Handler @ 147d84540

void __thiscall
UPlatformGameInstance::ApplicationFailedToRegisterForRemoteNotificationsDelegate_Handler
          (UPlatformGameInstance *this,FString *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
  pFVar3 = ::FString::FString(&local_18,param_1);
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if (&local_28 != pFVar3) {
    uVar1 = (pFVar3->Data).ArrayNum;
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    local_28.Data.ArrayMax = 0;
    local_28.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_28,uVar1,&local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,pFVar2,(longlong)(int)uVar1 * 2);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationFailedToRegisterForRemoteNotificationsDelegate,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// ApplicationHasEnteredForegroundDelegate_Handler @ 147d84640

void __thiscall
UPlatformGameInstance::ApplicationHasEnteredForegroundDelegate_Handler(UPlatformGameInstance *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationHasEnteredForegroundDelegate,(void *)0x0);
  return;
}

// ApplicationHasReactivatedDelegate_Handler @ 147d84660

void __thiscall
UPlatformGameInstance::ApplicationHasReactivatedDelegate_Handler(UPlatformGameInstance *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationHasReactivatedDelegate,(void *)0x0);
  return;
}

// ApplicationReceivedLocalNotificationDelegate_Handler @ 147d84680

void __thiscall
UPlatformGameInstance::ApplicationReceivedLocalNotificationDelegate_Handler
          (UPlatformGameInstance *this,FString *param_1,int param_2,int param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_48;
  FString local_38;
  int local_28;
  undefined1 local_24;
  
  pFVar3 = ::FString::FString(&local_48,param_1);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if (&local_38 != pFVar3) {
    uVar1 = (pFVar3->Data).ArrayNum;
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    local_38.Data.ArrayMax = 0;
    local_38.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_38,uVar1,&local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,pFVar2,(longlong)(int)uVar1 * 2);
    }
  }
  local_28 = param_2;
  local_24 = (char)param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationReceivedLocalNotificationDelegate,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ApplicationReceivedRemoteNotificationDelegate_Handler @ 147d847b0

void __thiscall
UPlatformGameInstance::ApplicationReceivedRemoteNotificationDelegate_Handler
          (UPlatformGameInstance *this,FString *param_1,int param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  FString local_48;
  FString local_38;
  undefined1 local_28;
  
  pFVar3 = ::FString::FString(&local_48,param_1);
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  if (&local_38 != pFVar3) {
    uVar1 = (pFVar3->Data).ArrayNum;
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    local_38.Data.ArrayMax = 0;
    local_38.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_38,uVar1,&local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,pFVar2,(longlong)(int)uVar1 * 2);
    }
  }
  local_28 = (char)param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationReceivedRemoteNotificationDelegate,&local_38);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// ApplicationReceivedScreenOrientationChangedNotificationDelegate_Handler @ 147d848d0

void __thiscall
UPlatformGameInstance::ApplicationReceivedScreenOrientationChangedNotificationDelegate_Handler
          (UPlatformGameInstance *this,int param_1)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = (undefined1)param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationReceivedScreenOrientationChangedNotificationDelegate,local_res10);
  return;
}

// ApplicationReceivedStartupArgumentsDelegate_Handler @ 147d84900

void __thiscall
UPlatformGameInstance::ApplicationReceivedStartupArgumentsDelegate_Handler
          (UPlatformGameInstance *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

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

// ApplicationRegisteredForRemoteNotificationsDelegate_Handler @ 147d849e0

void __thiscall
UPlatformGameInstance::ApplicationRegisteredForRemoteNotificationsDelegate_Handler
          (UPlatformGameInstance *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_1) {
    pFVar2 = (param_1->AllocatorInstance).Data;
    uVar1 = param_1->ArrayNum;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,pFVar2,(longlong)(int)uVar1);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationRegisteredForRemoteNotificationsDelegate,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  pFVar2 = (param_1->AllocatorInstance).Data;
  if (pFVar2 == (FScriptContainerElement *)0x0) {
    return;
  }
  FMemory::Free(pFVar2);
  return;
}

// ApplicationRegisteredForUserNotificationsDelegate_Handler @ 147d84ab0

void __thiscall
UPlatformGameInstance::ApplicationRegisteredForUserNotificationsDelegate_Handler
          (UPlatformGameInstance *this,int param_1)

{
  int local_res10 [6];
  
  local_res10[0] = param_1;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationRegisteredForUserNotificationsDelegate,local_res10);
  return;
}

// ApplicationShouldUnloadResourcesDelegate_Handler @ 147d84ae0

void __thiscall
UPlatformGameInstance::ApplicationShouldUnloadResourcesDelegate_Handler(UPlatformGameInstance *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationShouldUnloadResourcesDelegate,(void *)0x0);
  return;
}

// ApplicationWillDeactivateDelegate_Handler @ 147d84b00

void __thiscall
UPlatformGameInstance::ApplicationWillDeactivateDelegate_Handler(UPlatformGameInstance *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationWillDeactivateDelegate,(void *)0x0);
  return;
}

// ApplicationWillEnterBackgroundDelegate_Handler @ 147d84b20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UPlatformGameInstance::ApplicationWillEnterBackgroundDelegate_Handler(UPlatformGameInstance *this)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  FName *pFVar4;
  TStatIdData *pTVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar6;
  FNameEntryId FVar7;
  FName FVar8;
  FNameEntryId FVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  FVar9.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_UPlatformGameInstance::ApplicationWillEnterBackgroundDelegate_Handler(void)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_UPlatformGameInstance::ApplicationWillEnterBackgroundDelegate_Handler(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_UPlatformGameInstance::ApplicationWillEnterBackgroundDelegate_Handler(void)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_UPlatformGameInstance_ApplicationWillEnterBackground = (TStatIdData *)0x0;
    pFVar4 = ::FName::FName((FName *)&local_res8.s,
                            "STAT_UPlatformGameInstance_ApplicationWillEnterBackground");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_void___cdecl_UPlatformGameInstance::ApplicationWillEnterBackgroundDelegate_Handler(void)___ptr64'
                ::__l2::StatPtr_STAT_UPlatformGameInstance_ApplicationWillEnterBackground,*pFVar4,
               L"STAT_UPlatformGameInstance_ApplicationWillEnterBackground","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_void___cdecl_UPlatformGameInstance::ApplicationWillEnterBackgroundDelegate_Handler(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar5 = _StatPtr_STAT_UPlatformGameInstance_ApplicationWillEnterBackground;
  if (_StatPtr_STAT_UPlatformGameInstance_ApplicationWillEnterBackground == (TStatIdData *)0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_UPlatformGameInstance_ApplicationWillEnterBackground"
                           );
    pTVar5 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_void___cdecl_UPlatformGameInstance::ApplicationWillEnterBackgroundDelegate_Handler(void)___ptr64'
                         ::__l2::StatPtr_STAT_UPlatformGameInstance_ApplicationWillEnterBackground,
                        *pFVar4,L"STAT_UPlatformGameInstance_ApplicationWillEnterBackground",
                        "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar8 = *(FName *)&pTVar5->Name;
  bVar2 = false;
  bVar3 = false;
  FVar7 = FVar8.ComparisonIndex.Value;
  uVar6 = FVar8.Number;
  if ((FVar7.Value == 0) && (uVar6 == 0)) {
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->ApplicationWillEnterBackgroundDelegate,(void *)0x0);
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(pTVar5->StatDescriptionAnsi).Ptr);
      bVar2 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar7.Value;
        local_res8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(pTVar5->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Kismet\\BlueprintPlatformLibrary.h"
                   ,0xa1);
        bVar2 = true;
        bVar3 = true;
      }
    }
    bVar10 = FThreadStats::bPrimaryEnable == false;
    if (bVar10) {
      FVar8.ComparisonIndex.Value = 0;
      FVar8.Number = 0;
    }
    else {
      local_res8.s.LowPart = FVar7.Value;
      local_res8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      FVar9.Value = FVar7.Value;
    }
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->ApplicationWillEnterBackgroundDelegate,(void *)0x0);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar2) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((!bVar10) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
        local_28.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        local_28.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&local_res8);
        local_28.StatData.Pad[4] = '\0';
        local_28.StatData.Pad[5] = '\0';
        local_28.StatData.Pad[6] = '\0';
        local_28.StatData.Pad[7] = '\0';
        local_28.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
        local_28.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
        local_28.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
        local_28.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this_00,&local_28);
        piVar1 = &this_00->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this_00,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_00,false,false);
        }
      }
    }
  }
  return;
}

// ApplicationWillTerminateDelegate_Handler @ 147d84e60

void __thiscall
UPlatformGameInstance::ApplicationWillTerminateDelegate_Handler(UPlatformGameInstance *this)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
             &this->ApplicationWillTerminateDelegate,(void *)0x0);
  return;
}

// BeginDestroy @ 147d85c30

void __thiscall UPlatformGameInstance::BeginDestroy(UPlatformGameInstance *this)

{
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *this_00;
  
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
  this_00 = (TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
            FCoreDelegates::GetApplicationWillTerminateDelegate();
  TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll(this_00,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationShouldUnloadResourcesDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationReceivedStartupArgumentsDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationRegisteredForRemoteNotificationsDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationRegisteredForUserNotificationsDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationFailedToRegisterForRemoteNotificationsDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationReceivedRemoteNotificationDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationReceivedLocalNotificationDelegate,this);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationReceivedScreenOrientationChangedNotificationDelegate,this);
  UObject::BeginDestroy((UObject *)this);
  return;
}

// FPlatformDelegate_DelegateWrapper @ 147d9bde0

void __cdecl
UPlatformGameInstance::FPlatformDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1)

{
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,(void *)0x0);
  return;
}

// FPlatformFailedToRegisterForRemoteNotificationsDelegate_DelegateWrapper @ 147d9bdf0

void __cdecl
UPlatformGameInstance::FPlatformFailedToRegisterForRemoteNotificationsDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FString *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_18.Data.ArrayMax = 0;
    local_18.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_18,uVar1,&local_18.Data.ArrayMax);
      memcpy(local_18.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// FPlatformReceivedLocalNotificationDelegate_DelegateWrapper @ 147d9bea0

void __cdecl
UPlatformGameInstance::FPlatformReceivedLocalNotificationDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FString *param_2,
          int param_3,Type param_4)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  FString local_28;
  int local_18;
  undefined1 local_14;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if (&local_28 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_28.Data.ArrayMax = 0;
    local_28.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_28,uVar1,&local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  local_18 = param_3;
  local_14 = (char)param_4;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// FPlatformReceivedRemoteNotificationDelegate_DelegateWrapper @ 147d9bf70

void __cdecl
UPlatformGameInstance::FPlatformReceivedRemoteNotificationDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,FString *param_2,
          Type param_3)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  FString local_28;
  undefined1 local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  if (&local_28 != param_2) {
    uVar1 = (param_2->Data).ArrayNum;
    _Src = (param_2->Data).AllocatorInstance.Data;
    local_28.Data.ArrayMax = 0;
    local_28.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_28,uVar1,&local_28.Data.ArrayMax);
      memcpy(local_28.Data.AllocatorInstance.Data,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  local_18 = (char)param_3;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// FPlatformRegisteredForRemoteNotificationsDelegate_DelegateWrapper @ 147d9c030

void __cdecl
UPlatformGameInstance::FPlatformRegisteredForRemoteNotificationsDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  if (&local_18 != param_2) {
    uVar1 = param_2->ArrayNum;
    _Src = (param_2->AllocatorInstance).Data;
    local_18.ArrayMax = 0;
    local_18.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar1,0,&local_18.AllocatorInstance,uVar1,&local_18.ArrayMax);
      memcpy(local_18.AllocatorInstance.Data,_Src,(longlong)(int)uVar1);
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,&local_18);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// FPlatformRegisteredForUserNotificationsDelegate_DelegateWrapper @ 147d9c0e0

void __cdecl
UPlatformGameInstance::FPlatformRegisteredForUserNotificationsDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,int param_2)

{
  int local_res10 [6];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FPlatformScreenOrientationChangedDelegate_DelegateWrapper @ 147d9c100

void __cdecl
UPlatformGameInstance::FPlatformScreenOrientationChangedDelegate_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,Type param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = (undefined1)param_2;
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_res10);
  return;
}

// FPlatformStartupArgumentsDelegate_DelegateWrapper @ 147d9c120

void __cdecl
UPlatformGameInstance::FPlatformStartupArgumentsDelegate_DelegateWrapper
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

// GetPrivateStaticClass @ 147da85f0

UClass * __cdecl UPlatformGameInstance::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UPlatformGameInstance.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UGameInstance::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlatformGameInstance",
               &Z_Registration_Info_UClass_UPlatformGameInstance.InnerSingleton,
               StaticRegisterNativesUPlatformGameInstance,0x330,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Game",InternalConstructor<UPlatformGameInstance>,
               InternalVTableHelperCtorCaller<UPlatformGameInstance>,local_res8,
               UGameInstance::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UPlatformGameInstance.InnerSingleton;
}

// PostInitProperties @ 147db8eb0

void __thiscall UPlatformGameInstance::PostInitProperties(UPlatformGameInstance *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy> *this_00;
  
  UObject::PostInitProperties((UObject *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UPlatformGameInstance>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationWillDeactivateDelegate,
             (UPlatformGameInstance *)&stack0x00000010,(pmf_b8a5875b *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UPlatformGameInstance>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationHasReactivatedDelegate,
             (UPlatformGameInstance *)&stack0x00000010,(pmf_b8a5875b *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UPlatformGameInstance>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationWillEnterBackgroundDelegate,
             (UPlatformGameInstance *)&stack0x00000010,(pmf_b8a5875b *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UPlatformGameInstance>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationHasEnteredForegroundDelegate,
             (UPlatformGameInstance *)&stack0x00000010,(pmf_b8a5875b *)this);
  this_00 = FCoreDelegates::GetApplicationWillTerminateDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy>::
  AddUObject<UPlatformGameInstance>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultTSDelegateUserPolicy> *)
             this_00,(UPlatformGameInstance *)&stack0x00000010,(pmf_b8a5875b *)this);
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UPlatformGameInstance>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationShouldUnloadResourcesDelegate,
             (UPlatformGameInstance *)&stack0x00000010,(pmf_b8a5875b *)this);
  TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UPlatformGameInstance>
            ((TMulticastDelegateRegistration<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::ApplicationReceivedStartupArgumentsDelegate,
             (UPlatformGameInstance *)&stack0x00000010,(pmf_17385cc0 *)this);
  TMulticastDelegateRegistration<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
  ::AddUObject<UPlatformGameInstance>
            ((TMulticastDelegateRegistration<void___cdecl(TArray<unsigned_char,TSizedDefaultAllocator<32>_>),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::ApplicationRegisteredForRemoteNotificationsDelegate,
             (UPlatformGameInstance *)&stack0x00000010,(pmf_f30a52d6 *)this);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddUObject<UPlatformGameInstance>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationRegisteredForUserNotificationsDelegate,
             (UPlatformGameInstance *)&stack0x00000010,(pmf_6e52d0ab *)this);
  TMulticastDelegateRegistration<void___cdecl(FString),FDefaultDelegateUserPolicy>::
  AddUObject<UPlatformGameInstance>
            ((TMulticastDelegateRegistration<void___cdecl(FString),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationFailedToRegisterForRemoteNotificationsDelegate,
             (UPlatformGameInstance *)&stack0x00000010,(pmf_45944fbb *)this);
  TMulticastDelegateRegistration<void___cdecl(FString,int),FDefaultDelegateUserPolicy>::
  AddUObject<UPlatformGameInstance>
            ((TMulticastDelegateRegistration<void___cdecl(FString,int),FDefaultDelegateUserPolicy> *
             )&FCoreDelegates::ApplicationReceivedRemoteNotificationDelegate,
             (UPlatformGameInstance *)&stack0x00000010,(pmf_7154a639 *)this);
  TMulticastDelegateRegistration<void___cdecl(FString,int,int),FDefaultDelegateUserPolicy>::
  AddUObject<UPlatformGameInstance>
            ((TMulticastDelegateRegistration<void___cdecl(FString,int,int),FDefaultDelegateUserPolicy>
              *)&FCoreDelegates::ApplicationReceivedLocalNotificationDelegate,
             (UPlatformGameInstance *)&stack0x00000010,(pmf_cd7b855d *)this);
  TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
  AddUObject<UPlatformGameInstance>
            ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy> *)
             &FCoreDelegates::ApplicationReceivedScreenOrientationChangedNotificationDelegate,
             (UPlatformGameInstance *)&stack0x00000010,(pmf_6e52d0ab *)this);
  return;
}

// StaticRegisterNativesUPlatformGameInstance @ 147dc4390

void __cdecl UPlatformGameInstance::StaticRegisterNativesUPlatformGameInstance(void)

{
  return;
}

// __VTableCtorCaller @ 147dc9fb0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UObject * __cdecl UPlatformGameInstance::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UGameInstance *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UGameInstance *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UGameInstance *)0x0) {
    UGameInstance::UGameInstance(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__FExec__;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].WorldContext = (FWorldContext *)0x0;
    this[1].LocalPlayers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].LocalPlayers.ArrayNum = 0;
    this[1].LocalPlayers.ArrayMax = 0;
    this[1].OnlineSession.field0_0x0.DebugPtr = (UOnlineSession *)0x0;
    this[1].ReferencedObjects.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].ReferencedObjects.ArrayNum = 0;
    this[1].ReferencedObjects.ArrayMax = 0;
    *(undefined8 *)&this[1].NotifyPreClientTravelDelegates = 0;
    *(undefined8 *)&this[1].NotifyPreClientTravelDelegates.field_0x8 = 0;
    *(undefined8 *)&this[1].NotifyPreClientTravelDelegates.field_0x10 = 0;
    *(undefined8 *)&this[1].NotifyPreClientTravelDelegates.field_0x18 = 0;
    *(undefined8 *)&this[1].OnPawnControllerChangedDelegates = 0;
    *(undefined8 *)&this[1].OnPawnControllerChangedDelegates.field_0x8 = 0;
    *(undefined8 *)&this[1].OnPawnControllerChangedDelegates.field_0x10 = 0;
    this[1].OnPlayTogetherEventReceivedDelegateHandle.ID = 0;
    this[1].PIEMapName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].PIEMapName.Data.ArrayNum = 0;
    this[1].PIEMapName.Data.ArrayMax = 0;
    *(undefined8 *)&this[1].OnInputDeviceConnectionChange = 0;
    *(undefined8 *)&this[1].OnInputDeviceConnectionChange.field_0x8 = 0;
    *(undefined8 *)&this[1].OnInputDeviceConnectionChange.field_0x10 = 0;
    *(undefined8 *)&this[1].OnUserInputDevicePairingChange = 0;
    *(undefined8 *)&this[1].OnUserInputDevicePairingChange.field_0x8 = 0;
    *(undefined8 *)&this[1].OnUserInputDevicePairingChange.field_0x10 = 0;
    *(undefined8 *)&this[1].OnLocalPlayerAddedEvent = 0;
    *(undefined8 *)&this[1].OnLocalPlayerAddedEvent.field_0x8 = 0;
    *(undefined8 *)&this[1].OnLocalPlayerAddedEvent.field_0x10 = 0;
    *(undefined8 *)&this[1].OnLocalPlayerAddedEvent.field_0x18 = 0;
    *(undefined8 *)&this[1].OnLocalPlayerRemovedEvent = 0;
    *(undefined8 *)&this[1].OnLocalPlayerRemovedEvent.field_0x8 = 0;
    *(undefined8 *)&this[1].OnLocalPlayerRemovedEvent.field_0x10 = 0;
    *(undefined8 *)&this[1].OnLocalPlayerRemovedEvent.field_0x18 = 0;
    this[1].TimerManager = (FTimerManager *)0x0;
    this[1].LatentActionManager = (FLatentActionManager *)0x0;
    *(undefined8 *)&this[1].SubsystemCollection = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

