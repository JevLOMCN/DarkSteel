// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 23

// StaticClass @ 1464cf210

UClass * __cdecl UAudioDeviceNotificationSubsystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioDeviceNotificationSubsystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"AudioDeviceNotificationSubsystem",
               &Z_Registration_Info_UClass_UAudioDeviceNotificationSubsystem.InnerSingleton,
               StaticRegisterNativesUAudioDeviceNotificationSubsystem,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioDeviceNotificationSubsystem>,
               InternalVTableHelperCtorCaller<UAudioDeviceNotificationSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioDeviceNotificationSubsystem.InnerSingleton;
}

// UAudioDeviceNotificationSubsystem @ 1464d9e40

UAudioDeviceNotificationSubsystem * __thiscall
UAudioDeviceNotificationSubsystem::UAudioDeviceNotificationSubsystem
          (UAudioDeviceNotificationSubsystem *this,FVTableHelper *param_1)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this,param_1);
  *(undefined8 *)&(this->DefaultCaptureDeviceChangedNative).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UEngineSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  *(undefined8 *)&this->DefaultCaptureDeviceChanged = 0;
  *(undefined8 *)&(this->DefaultCaptureDeviceChanged).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultCaptureDeviceChanged).field_0x10 = 0;
  *(undefined8 *)&this->DefaultCaptureDeviceChangedNative = 0;
  *(undefined8 *)&(this->DefaultCaptureDeviceChangedNative).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultCaptureDeviceChangedNative).field_0x10 = 0;
  *(undefined8 *)&this->DefaultRenderDeviceChanged = 0;
  *(undefined8 *)&(this->DefaultRenderDeviceChanged).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultRenderDeviceChanged).field_0x10 = 0;
  *(undefined8 *)&this->DefaultRenderDeviceChangedNative = 0;
  *(undefined8 *)&(this->DefaultRenderDeviceChangedNative).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultRenderDeviceChangedNative).field_0x10 = 0;
  *(undefined8 *)&this->DeviceAdded = 0;
  *(undefined8 *)&(this->DeviceAdded).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceAdded).field_0x10 = 0;
  *(undefined8 *)&this->DeviceAddedNative = 0;
  *(undefined8 *)&(this->DeviceAddedNative).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceAddedNative).field_0x10 = 0;
  *(undefined8 *)&this->DeviceRemoved = 0;
  *(undefined8 *)&(this->DeviceRemoved).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceRemoved).field_0x10 = 0;
  *(undefined8 *)&this->DeviceRemovedNative = 0;
  *(undefined8 *)&(this->DeviceRemovedNative).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceRemovedNative).field_0x10 = 0;
  *(undefined8 *)&this->DeviceStateChanged = 0;
  *(undefined8 *)&(this->DeviceStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->DeviceStateChangedNative = 0;
  *(undefined8 *)&(this->DeviceStateChangedNative).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceStateChangedNative).field_0x10 = 0;
  *(undefined8 *)&this->DeviceSwitched = 0;
  *(undefined8 *)&(this->DeviceSwitched).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceSwitched).field_0x10 = 0;
  *(undefined8 *)&this->DeviceSwitchedNative = 0;
  *(undefined8 *)&(this->DeviceSwitchedNative).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceSwitchedNative).field_0x10 = 0;
  *(undefined8 *)&(this->DefaultRenderDeviceChangedNative).field_0x18 = 2;
  *(undefined8 *)&(this->DeviceAddedNative).field_0x18 = 2;
  *(undefined8 *)&(this->DeviceRemovedNative).field_0x18 = 2;
  *(undefined8 *)&(this->DeviceStateChangedNative).field_0x18 = 2;
  *(undefined8 *)&(this->DeviceSwitchedNative).field_0x18 = 2;
  return this;
}

// UAudioDeviceNotificationSubsystem @ 1464d9fa0

UAudioDeviceNotificationSubsystem * __thiscall
UAudioDeviceNotificationSubsystem::UAudioDeviceNotificationSubsystem
          (UAudioDeviceNotificationSubsystem *this)

{
  UEngineSubsystem::UEngineSubsystem((UEngineSubsystem *)this);
  *(undefined8 *)&(this->DefaultCaptureDeviceChangedNative).field_0x18 = 2;
  this->_padding_ = (longlong)&_vftable__for__UEngineSubsystem__;
  this->_padding_ = (longlong)&_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
  *(undefined8 *)&this->DefaultCaptureDeviceChanged = 0;
  *(undefined8 *)&(this->DefaultCaptureDeviceChanged).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultCaptureDeviceChanged).field_0x10 = 0;
  *(undefined8 *)&this->DefaultCaptureDeviceChangedNative = 0;
  *(undefined8 *)&(this->DefaultCaptureDeviceChangedNative).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultCaptureDeviceChangedNative).field_0x10 = 0;
  *(undefined8 *)&this->DefaultRenderDeviceChanged = 0;
  *(undefined8 *)&(this->DefaultRenderDeviceChanged).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultRenderDeviceChanged).field_0x10 = 0;
  *(undefined8 *)&this->DefaultRenderDeviceChangedNative = 0;
  *(undefined8 *)&(this->DefaultRenderDeviceChangedNative).field_0x8 = 0;
  *(undefined8 *)&(this->DefaultRenderDeviceChangedNative).field_0x10 = 0;
  *(undefined8 *)&this->DeviceAdded = 0;
  *(undefined8 *)&(this->DeviceAdded).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceAdded).field_0x10 = 0;
  *(undefined8 *)&this->DeviceAddedNative = 0;
  *(undefined8 *)&(this->DeviceAddedNative).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceAddedNative).field_0x10 = 0;
  *(undefined8 *)&this->DeviceRemoved = 0;
  *(undefined8 *)&(this->DeviceRemoved).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceRemoved).field_0x10 = 0;
  *(undefined8 *)&this->DeviceRemovedNative = 0;
  *(undefined8 *)&(this->DeviceRemovedNative).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceRemovedNative).field_0x10 = 0;
  *(undefined8 *)&this->DeviceStateChanged = 0;
  *(undefined8 *)&(this->DeviceStateChanged).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceStateChanged).field_0x10 = 0;
  *(undefined8 *)&this->DeviceStateChangedNative = 0;
  *(undefined8 *)&(this->DeviceStateChangedNative).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceStateChangedNative).field_0x10 = 0;
  *(undefined8 *)&this->DeviceSwitched = 0;
  *(undefined8 *)&(this->DeviceSwitched).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceSwitched).field_0x10 = 0;
  *(undefined8 *)&this->DeviceSwitchedNative = 0;
  *(undefined8 *)&(this->DeviceSwitchedNative).field_0x8 = 0;
  *(undefined8 *)&(this->DeviceSwitchedNative).field_0x10 = 0;
  *(undefined8 *)&(this->DefaultRenderDeviceChangedNative).field_0x18 = 2;
  *(undefined8 *)&(this->DeviceAddedNative).field_0x18 = 2;
  *(undefined8 *)&(this->DeviceRemovedNative).field_0x18 = 2;
  *(undefined8 *)&(this->DeviceStateChangedNative).field_0x18 = 2;
  *(undefined8 *)&(this->DeviceSwitchedNative).field_0x18 = 2;
  return this;
}

// ~UAudioDeviceNotificationSubsystem @ 1464dcf80

void __thiscall
UAudioDeviceNotificationSubsystem::~UAudioDeviceNotificationSubsystem
          (UAudioDeviceNotificationSubsystem *this)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->DeviceSwitchedNative).field_0x8,
             *(int *)&(this->DeviceSwitchedNative).field_0x10);
  pvVar1 = *(void **)&(this->DeviceSwitchedNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DeviceSwitchedNative);
  pvVar1 = *(void **)&(this->DeviceSwitched).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DeviceSwitched);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->DeviceStateChangedNative).field_0x8,
             *(int *)&(this->DeviceStateChangedNative).field_0x10);
  pvVar1 = *(void **)&(this->DeviceStateChangedNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DeviceStateChangedNative);
  pvVar1 = *(void **)&(this->DeviceStateChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DeviceStateChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->DeviceRemovedNative).field_0x8,*(int *)&(this->DeviceRemovedNative).field_0x10
            );
  pvVar1 = *(void **)&(this->DeviceRemovedNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DeviceRemovedNative);
  pvVar1 = *(void **)&(this->DeviceRemoved).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DeviceRemoved);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->DeviceAddedNative).field_0x8,*(int *)&(this->DeviceAddedNative).field_0x10);
  pvVar1 = *(void **)&(this->DeviceAddedNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DeviceAddedNative);
  pvVar1 = *(void **)&(this->DeviceAdded).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DeviceAdded);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->DefaultRenderDeviceChangedNative).field_0x8,
             *(int *)&(this->DefaultRenderDeviceChangedNative).field_0x10);
  pvVar1 = *(void **)&(this->DefaultRenderDeviceChangedNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DefaultRenderDeviceChangedNative);
  pvVar1 = *(void **)&(this->DefaultRenderDeviceChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DefaultRenderDeviceChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->DefaultCaptureDeviceChangedNative).field_0x8,
             *(int *)&(this->DefaultCaptureDeviceChangedNative).field_0x10);
  pvVar1 = *(void **)&(this->DefaultCaptureDeviceChangedNative).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DefaultCaptureDeviceChangedNative);
  pvVar1 = *(void **)&(this->DefaultCaptureDeviceChanged).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->DefaultCaptureDeviceChanged);
  UEngineSubsystem::~UEngineSubsystem((UEngineSubsystem *)this);
  return;
}

// operator() @ 1464dfb90

void __thiscall
`UAudioDeviceNotificationSubsystem::OnDefaultCaptureDeviceChanged'::__l2::<lambda_1>::operator()
          (void *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  UObject *pUVar4;
  FString *pFVar5;
  FString *pFVar6;
  EAudioDeviceChangedRole EVar7;
  FString local_28;
  FString local_18;
  
  bVar3 = FWeakObjectPtr::IsValid(this);
  if (bVar3) {
    FWeakObjectPtr::Get(this);
    iVar1 = *(int *)((longlong)this + 8);
    if (iVar1 == 0) {
      EVar7 = Console;
    }
    else if (iVar1 == 1) {
      EVar7 = Multimedia;
    }
    else if (iVar1 == 2) {
      EVar7 = Communications;
    }
    else {
      EVar7 = Invalid;
    }
    pUVar4 = FWeakObjectPtr::Get(this);
    pFVar5 = ::FString::FString(&local_28,(FString *)((longlong)this + 0x10));
    FOnAudioDefaultDeviceChanged::Broadcast
              ((FOnAudioDefaultDeviceChanged *)&pUVar4[1].field_0x10,EVar7,pFVar5);
    pUVar4 = FWeakObjectPtr::Get(this);
    pFVar5 = ::FString::FString(&local_28,(FString *)((longlong)this + 0x10));
    pFVar6 = ::FString::FString(&local_18,pFVar5);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(enum_EAudioDeviceChangedRole,FString),FDefaultDelegateUserPolicy>,enum_EAudioDeviceChangedRole,FString>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar4 + 2),EVar7,pFVar6);
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  return;
}

// operator() @ 1464dfc70

void __thiscall
`UAudioDeviceNotificationSubsystem::OnDefaultRenderDeviceChanged'::__l2::<lambda_1>::operator()
          (void *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  UObject *pUVar4;
  FString *pFVar5;
  FString *pFVar6;
  EAudioDeviceChangedRole EVar7;
  FString local_28;
  FString local_18;
  
  bVar3 = FWeakObjectPtr::IsValid(this);
  if (bVar3) {
    FWeakObjectPtr::Get(this);
    iVar1 = *(int *)((longlong)this + 8);
    if (iVar1 == 0) {
      EVar7 = Console;
    }
    else if (iVar1 == 1) {
      EVar7 = Multimedia;
    }
    else if (iVar1 == 2) {
      EVar7 = Communications;
    }
    else {
      EVar7 = Invalid;
    }
    pUVar4 = FWeakObjectPtr::Get(this);
    pFVar5 = ::FString::FString(&local_28,(FString *)((longlong)this + 0x10));
    FOnAudioDefaultDeviceChanged::Broadcast
              ((FOnAudioDefaultDeviceChanged *)&pUVar4[2].field_0x20,EVar7,pFVar5);
    pUVar4 = FWeakObjectPtr::Get(this);
    pFVar5 = ::FString::FString(&local_28,(FString *)((longlong)this + 0x10));
    pFVar6 = ::FString::FString(&local_18,pFVar5);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(enum_EAudioDeviceChangedRole,FString),FDefaultDelegateUserPolicy>,enum_EAudioDeviceChangedRole,FString>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[3].field_0x10,EVar7,
               pFVar6);
    pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  }
  return;
}

// operator() @ 1464dfd50

void __thiscall
`UAudioDeviceNotificationSubsystem::OnDeviceAdded'::__l2::<lambda_1>::operator()(void *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UObject *pUVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  bVar2 = FWeakObjectPtr::IsValid(this);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(this);
    pFVar4 = ::FString::FString(&local_28,(FString *)((longlong)this + 8));
    FOnAudioDeviceChange::Broadcast((FOnAudioDeviceChange *)&pUVar3[4].field_0x8,pFVar4);
    pUVar3 = FWeakObjectPtr::Get(this);
    pFVar4 = ::FString::FString(&local_28,(FString *)((longlong)this + 8));
    pFVar5 = ::FString::FString(&local_18,pFVar4);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(FString),FDefaultDelegateUserPolicy>,FString>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[4].field_0x20,pFVar5);
    pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  return;
}

// operator() @ 1464dfe00

void __thiscall
`UAudioDeviceNotificationSubsystem::OnDeviceRemoved'::__l2::<lambda_1>::operator()(void *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UObject *pUVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  bVar2 = FWeakObjectPtr::IsValid(this);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(this);
    pFVar4 = ::FString::FString(&local_28,(FString *)((longlong)this + 8));
    FOnAudioDeviceChange::Broadcast((FOnAudioDeviceChange *)&pUVar3[5].field_0x18,pFVar4);
    pUVar3 = FWeakObjectPtr::Get(this);
    pFVar4 = ::FString::FString(&local_28,(FString *)((longlong)this + 8));
    pFVar5 = ::FString::FString(&local_18,pFVar4);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(FString),FDefaultDelegateUserPolicy>,FString>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[6].field_0x8,pFVar5);
    pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  return;
}

// operator() @ 1464dfeb0

void __thiscall
`UAudioDeviceNotificationSubsystem::OnDeviceStateChanged'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UObject *pUVar5;
  FString *pFVar6;
  FString *pFVar7;
  EAudioDeviceChangedState EVar8;
  FString local_58;
  FString local_48;
  FString local_38;
  EAudioDeviceChangedState local_28;
  
  bVar4 = FWeakObjectPtr::IsValid(this);
  if (bVar4) {
    FWeakObjectPtr::Get(this);
    iVar1 = *(int *)((longlong)this + 0x18);
    if (iVar1 == 0) {
      EVar8 = Active;
    }
    else if (iVar1 == 1) {
      EVar8 = Disabled;
    }
    else if (iVar1 == 2) {
      EVar8 = NotPresent;
    }
    else if (iVar1 == 3) {
      EVar8 = Unplugged;
    }
    else {
      EVar8 = Invalid;
    }
    pUVar5 = FWeakObjectPtr::Get(this);
    pFVar6 = ::FString::FString(&local_58,(FString *)((longlong)this + 8));
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
    if (&local_38 != pFVar6) {
      uVar2 = (pFVar6->Data).ArrayNum;
      pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
      local_38.Data.ArrayMax = 0;
      local_38.Data.ArrayNum = uVar2;
      if (uVar2 != 0) {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar2,0,(ForAnyElementType *)&local_38,uVar2,&local_38.Data.ArrayMax);
        memcpy(local_38.Data.AllocatorInstance.Data,pFVar3,(longlong)(int)uVar2 * 2);
      }
    }
    local_28 = EVar8;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(pUVar5 + 7),&local_38);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    pUVar5 = FWeakObjectPtr::Get(this);
    pFVar6 = ::FString::FString(&local_58,(FString *)((longlong)this + 8));
    pFVar7 = ::FString::FString(&local_48,pFVar6);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(FString,enum_EAudioDeviceChangedState),FDefaultDelegateUserPolicy>,FString,enum_EAudioDeviceChangedState>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar5[7].field_0x18,pFVar7,
               EVar8);
    pFVar3 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
  }
  return;
}

// operator() @ 1464e0070

void __thiscall
`UAudioDeviceNotificationSubsystem::OnDeviceSwitched'::__l2::<lambda_1>::operator()(void *this)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UObject *pUVar3;
  FString *pFVar4;
  FString *pFVar5;
  FString local_28;
  FString local_18;
  
  bVar2 = FWeakObjectPtr::IsValid(this);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(this);
    pFVar4 = ::FString::FString(&local_28,(FString *)((longlong)this + 8));
    FOnAudioDeviceChange::Broadcast((FOnAudioDeviceChange *)&pUVar3[8].field_0x10,pFVar4);
    pUVar3 = FWeakObjectPtr::Get(this);
    pFVar4 = ::FString::FString(&local_28,(FString *)((longlong)this + 8));
    pFVar5 = ::FString::FString(&local_18,pFVar4);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::
    Broadcast<IBaseDelegateInstance<void___cdecl(FString),FDefaultDelegateUserPolicy>,FString>
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar3 + 9),pFVar5);
    pFVar1 = (pFVar4->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  return;
}

// Deinitialize @ 1464f9400

void __thiscall
UAudioDeviceNotificationSubsystem::Deinitialize(UAudioDeviceNotificationSubsystem *this)

{
  undefined1 *puVar1;
  FDestructionSentinel local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->DefaultCaptureDeviceChanged,(FWriteAccessScope *)&local_28);
  puVar1 = &(this->DefaultCaptureDeviceChanged).field_0x14;
  *(undefined4 *)&(this->DefaultCaptureDeviceChanged).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&(this->DefaultCaptureDeviceChanged).field_0x8,0,
               (int *)puVar1);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->DefaultRenderDeviceChanged,(FWriteAccessScope *)&local_28);
  puVar1 = &(this->DefaultRenderDeviceChanged).field_0x14;
  *(undefined4 *)&(this->DefaultRenderDeviceChanged).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&(this->DefaultRenderDeviceChanged).field_0x8,0,
               (int *)puVar1);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->DeviceAdded,
             (FWriteAccessScope *)&local_28);
  puVar1 = &(this->DeviceAdded).field_0x14;
  *(undefined4 *)&(this->DeviceAdded).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&(this->DeviceAdded).field_0x8,0,(int *)puVar1);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->DeviceRemoved,
             (FWriteAccessScope *)&local_28);
  puVar1 = &(this->DeviceRemoved).field_0x14;
  *(undefined4 *)&(this->DeviceRemoved).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&(this->DeviceRemoved).field_0x8,0,(int *)puVar1);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->DeviceStateChanged,
             (FWriteAccessScope *)&local_28);
  puVar1 = &(this->DeviceStateChanged).field_0x14;
  *(undefined4 *)&(this->DeviceStateChanged).field_0x10 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)&(this->DeviceStateChanged).field_0x8,0,(int *)puVar1);
  }
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->DefaultCaptureDeviceChangedNative);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &this->DefaultRenderDeviceChangedNative);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->DeviceAddedNative);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->DeviceRemovedNative);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::Clear
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->DeviceStateChangedNative);
  return;
}

// GetDeviceChangedRole @ 146502120

EAudioDeviceChangedRole __thiscall
UAudioDeviceNotificationSubsystem::GetDeviceChangedRole
          (UAudioDeviceNotificationSubsystem *this,EAudioDeviceRole param_1)

{
  if (param_1 == Console) {
    return Console;
  }
  if (param_1 != Multimedia) {
    if (param_1 != Communications) {
      return Invalid;
    }
    return Communications;
  }
  return Multimedia;
}

// GetDeviceChangedState @ 146502140

EAudioDeviceChangedState __thiscall
UAudioDeviceNotificationSubsystem::GetDeviceChangedState
          (UAudioDeviceNotificationSubsystem *this,EAudioDeviceState param_1)

{
  if (param_1 == Active) {
    return Active;
  }
  if (param_1 == Disabled) {
    return Disabled;
  }
  if (param_1 == NotPresent) {
    return NotPresent;
  }
  if (param_1 != Unplugged) {
    return Invalid;
  }
  return Unplugged;
}

// GetPrivateStaticClass @ 146505020

UClass * __cdecl UAudioDeviceNotificationSubsystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAudioDeviceNotificationSubsystem.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/AudioMixer",L"AudioDeviceNotificationSubsystem",
               &Z_Registration_Info_UClass_UAudioDeviceNotificationSubsystem.InnerSingleton,
               StaticRegisterNativesUAudioDeviceNotificationSubsystem,0x188,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAudioDeviceNotificationSubsystem>,
               InternalVTableHelperCtorCaller<UAudioDeviceNotificationSubsystem>,local_res8,
               UEngineSubsystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAudioDeviceNotificationSubsystem.InnerSingleton;
}

// Initialize @ 14650cda0

void __thiscall
UAudioDeviceNotificationSubsystem::Initialize
          (UAudioDeviceNotificationSubsystem *this,FSubsystemCollectionBase *param_1)

{
  return;
}

// OnDefaultCaptureDeviceChanged @ 146512530

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioDeviceNotificationSubsystem::OnDefaultCaptureDeviceChanged
          (UAudioDeviceNotificationSubsystem *this,EAudioDeviceRole param_1,FString *param_2)

{
  undefined1 *puVar1;
  FWeakObjectPtr *pFVar2;
  FWeakObjectPtr FVar3;
  FWeakObjectPtr local_res8;
  undefined1 *local_res20;
  FString local_48;
  code *local_38 [5];
  undefined8 *local_10;
  
  puVar1 = &this[-1].DeviceSwitched.field_0x8;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (puVar1 != (undefined1 *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)puVar1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = puVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (puVar1 != (undefined1 *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)puVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  FVar3 = local_res8;
  ::FString::FString(&local_48,param_2);
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x28,8);
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultCaptureDeviceChanged'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  pFVar2 = (FWeakObjectPtr *)(local_10 + 1);
  *pFVar2 = FVar3;
  *(EAudioDeviceRole *)(local_10 + 2) = param_1;
  ::FString::FString((FString *)(local_10 + 3),&local_48);
  if (pFVar2 != (FWeakObjectPtr *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioDeviceNotificationSubsystem::OnDefaultCaptureDeviceChanged'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// OnDefaultRenderDeviceChanged @ 146512650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioDeviceNotificationSubsystem::OnDefaultRenderDeviceChanged
          (UAudioDeviceNotificationSubsystem *this,EAudioDeviceRole param_1,FString *param_2)

{
  undefined1 *puVar1;
  FWeakObjectPtr *pFVar2;
  FWeakObjectPtr FVar3;
  FWeakObjectPtr local_res8;
  undefined1 *local_res20;
  FString local_48;
  code *local_38 [5];
  undefined8 *local_10;
  
  puVar1 = &this[-1].DeviceSwitched.field_0x8;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (puVar1 != (undefined1 *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)puVar1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res20 = puVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (puVar1 != (undefined1 *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)puVar1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
  FVar3 = local_res8;
  ::FString::FString(&local_48,param_2);
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x28,8);
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDefaultRenderDeviceChanged'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  pFVar2 = (FWeakObjectPtr *)(local_10 + 1);
  *pFVar2 = FVar3;
  *(EAudioDeviceRole *)(local_10 + 2) = param_1;
  ::FString::FString((FString *)(local_10 + 3),&local_48);
  if (pFVar2 != (FWeakObjectPtr *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioDeviceNotificationSubsystem::OnDefaultRenderDeviceChanged'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return;
}

// OnDeviceAdded @ 146512770

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioDeviceNotificationSubsystem::OnDeviceAdded
          (UAudioDeviceNotificationSubsystem *this,FString *param_1,bool param_2)

{
  undefined1 *puVar1;
  FWeakObjectPtr *pFVar2;
  FWeakObjectPtr local_res20;
  undefined1 *local_58;
  FWeakObjectPtr local_50;
  FString local_48;
  code *local_38 [5];
  undefined8 *local_10;
  
  if (param_2) {
    puVar1 = &this[-1].DeviceSwitched.field_0x8;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (puVar1 != (undefined1 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)puVar1);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_58 = puVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (puVar1 != (undefined1 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)puVar1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
    local_50 = local_res20;
    ::FString::FString(&local_48,param_1);
    local_38[0] = (code *)0x0;
    local_10 = FMemory::Malloc(0x20,8);
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceAdded'::`2'::<lambda_1>,1,1>
                 ::_vftable_;
    pFVar2 = (FWeakObjectPtr *)(local_10 + 1);
    *pFVar2 = local_50;
    ::FString::FString((FString *)(local_10 + 2),&local_48);
    if (pFVar2 != (FWeakObjectPtr *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UAudioDeviceNotificationSubsystem::OnDeviceAdded'::__l2::<lambda_1>,void>
                    ::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnDeviceRemoved @ 146512880

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioDeviceNotificationSubsystem::OnDeviceRemoved
          (UAudioDeviceNotificationSubsystem *this,FString *param_1,bool param_2)

{
  undefined1 *puVar1;
  FWeakObjectPtr *pFVar2;
  FWeakObjectPtr local_res20;
  undefined1 *local_58;
  FWeakObjectPtr local_50;
  FString local_48;
  code *local_38 [5];
  undefined8 *local_10;
  
  if (param_2) {
    puVar1 = &this[-1].DeviceSwitched.field_0x8;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (puVar1 != (undefined1 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)puVar1);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_58 = puVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (puVar1 != (undefined1 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)puVar1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
    local_50 = local_res20;
    ::FString::FString(&local_48,param_1);
    local_38[0] = (code *)0x0;
    local_10 = FMemory::Malloc(0x20,8);
    *local_10 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceRemoved'::`2'::<lambda_1>,1,1>
                 ::_vftable_;
    pFVar2 = (FWeakObjectPtr *)(local_10 + 1);
    *pFVar2 = local_50;
    ::FString::FString((FString *)(local_10 + 2),&local_48);
    if (pFVar2 != (FWeakObjectPtr *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UAudioDeviceNotificationSubsystem::OnDeviceRemoved'::__l2::<lambda_1>,void>
                    ::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnDeviceStateChanged @ 146512990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioDeviceNotificationSubsystem::OnDeviceStateChanged
          (UAudioDeviceNotificationSubsystem *this,FString *param_1,EAudioDeviceState param_2,
          bool param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  FWeakObjectPtr local_68;
  undefined1 *local_60;
  FWeakObjectPtr local_58;
  FString local_50;
  EAudioDeviceState local_40;
  code *local_38 [5];
  undefined8 *local_10;
  
  if (param_3) {
    puVar1 = &this[-1].DeviceSwitched.field_0x8;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (puVar1 != (undefined1 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)puVar1);
    }
    local_68.ObjectIndex = 0;
    local_68.ObjectSerialNumber = 0;
    local_60 = puVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (puVar1 != (undefined1 *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)puVar1);
    }
    FWeakObjectPtr::operator=(&local_68,(FObjectPtr)&local_60);
    local_58 = local_68;
    ::FString::FString(&local_50,param_1);
    local_38[0] = (code *)0x0;
    local_40 = param_2;
    puVar2 = FMemory::Malloc(0x28,8);
    *puVar2 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceStateChanged'::`2'::<lambda_1>,1,1>
               ::_vftable_;
    *(FWeakObjectPtr *)(puVar2 + 1) = local_58;
    local_10 = puVar2;
    ::FString::FString((FString *)(puVar2 + 2),&local_50);
    *(EAudioDeviceState *)(puVar2 + 4) = local_40;
    if ((FWeakObjectPtr *)(puVar2 + 1) != (FWeakObjectPtr *)0x0) {
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UAudioDeviceNotificationSubsystem::OnDeviceStateChanged'::__l2::<lambda_1>,void>
                    ::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnDeviceSwitched @ 146512ac0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAudioDeviceNotificationSubsystem::OnDeviceSwitched
          (UAudioDeviceNotificationSubsystem *this,FString *param_1)

{
  FWeakObjectPtr *pFVar1;
  FWeakObjectPtr FVar2;
  FWeakObjectPtr local_res8;
  UAudioDeviceNotificationSubsystem *local_res18 [2];
  FString local_50;
  code *local_38 [5];
  undefined8 *local_10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (this != (UAudioDeviceNotificationSubsystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (this != (UAudioDeviceNotificationSubsystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  FVar2 = local_res8;
  ::FString::FString(&local_50,param_1);
  local_38[0] = (code *)0x0;
  local_10 = FMemory::Malloc(0x20,8);
  *local_10 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UAudioDeviceNotificationSubsystem::OnDeviceSwitched'::`2'::<lambda_1>,1,1>
               ::_vftable_;
  pFVar1 = (FWeakObjectPtr *)(local_10 + 1);
  *pFVar1 = FVar2;
  ::FString::FString((FString *)(local_10 + 2),&local_50);
  if (pFVar1 != (FWeakObjectPtr *)0x0) {
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UAudioDeviceNotificationSubsystem::OnDeviceSwitched'::__l2::<lambda_1>,void>
                  ::Call;
  }
  AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUAudioDeviceNotificationSubsystem @ 146524d70

void __cdecl
UAudioDeviceNotificationSubsystem::StaticRegisterNativesUAudioDeviceNotificationSubsystem(void)

{
  return;
}

// __VTableCtorCaller @ 14652ef40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UAudioDeviceNotificationSubsystem::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UEngineSubsystem *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UEngineSubsystem *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UEngineSubsystem *)0x0) {
    UEngineSubsystem::UEngineSubsystem(this,param_1);
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined ***)this = &_vftable__for__UEngineSubsystem__;
    *(undefined ***)(this + 1) = &_vftable__for__Audio__IAudioMixerDeviceChangedListener__;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[1].field_0x28 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 2;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x28 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined8 *)&this[3].field_0x10 = 2;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[3].field_0x28 = 0;
    *(undefined8 *)(this + 4) = 0;
    *(undefined8 *)&this[4].field_0x8 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined8 *)&this[4].field_0x18 = 2;
    *(undefined8 *)&this[4].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x28 = 0;
    *(undefined8 *)(this + 5) = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined8 *)&this[5].field_0x10 = 0;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 2;
    *(undefined8 *)&this[5].field_0x28 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined8 *)&this[6].field_0x28 = 2;
    *(undefined8 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined8 *)&this[7].field_0x18 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
    *(undefined8 *)&this[7].field_0x28 = 0;
    *(undefined8 *)(this + 8) = 2;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

