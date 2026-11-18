// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// FAudioDeviceHandle @ 14761c4f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAudioDeviceHandle * __thiscall
FAudioDeviceHandle::FAudioDeviceHandle
          (FAudioDeviceHandle *this,FAudioDevice *param_1,uint param_2,UWorld *param_3)

{
  UWorld *local_res8;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_3 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  this->Device = param_1;
  this->DeviceId = param_2;
  return this;
}

// FAudioDeviceHandle @ 14761c580

FAudioDeviceHandle * __thiscall
FAudioDeviceHandle::FAudioDeviceHandle(FAudioDeviceHandle *this,FAudioDeviceHandle *param_1)

{
  undefined8 local_res8;
  
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  this->Device = (FAudioDevice *)0x0;
  this->DeviceId = 0xffffffff;
  operator=(this,param_1);
  return this;
}

// FAudioDeviceHandle @ 14761c5e0

FAudioDeviceHandle * __thiscall
FAudioDeviceHandle::FAudioDeviceHandle(FAudioDeviceHandle *this,FAudioDeviceHandle *param_1)

{
  uint uVar1;
  FAudioDevice *pFVar2;
  undefined8 local_res8;
  
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  this->Device = (FAudioDevice *)0x0;
  this->DeviceId = 0xffffffff;
  FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  pFVar2 = param_1->Device;
  this->Device = pFVar2;
  uVar1 = param_1->DeviceId;
  this->DeviceId = uVar1;
  (this->World).WeakPtr = (param_1->World).WeakPtr;
  if (((FAudioDeviceManager::Singleton != (FAudioDeviceManager *)0x0) &&
      (FAudioDeviceManager::Singleton->InitPhase == Initialized)) && (pFVar2 != (FAudioDevice *)0x0)
     ) {
    FAudioDeviceManager::IncrementDevice(FAudioDeviceManager::Singleton,uVar1);
  }
  return this;
}

// FAudioDeviceHandle @ 14761c670

FAudioDeviceHandle * __thiscall FAudioDeviceHandle::FAudioDeviceHandle(FAudioDeviceHandle *this)

{
  undefined8 local_res8;
  
  (this->World).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)this,(FObjectPtr)&local_res8);
  this->Device = (FAudioDevice *)0x0;
  this->DeviceId = 0xffffffff;
  return this;
}

// ~FAudioDeviceHandle @ 147620e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAudioDeviceHandle::~FAudioDeviceHandle(FAudioDeviceHandle *this)

{
  code *pcVar1;
  FAudioDeviceManager *this_00;
  bool bVar2;
  UWorld *pUVar3;
  
  this_00 = FAudioDeviceManager::Singleton;
  if (this->Device != (FAudioDevice *)0x0) {
    if ((FAudioDeviceManager::Singleton != (FAudioDeviceManager *)0x0) &&
       (FAudioDeviceManager::Singleton->InitPhase == Initialized)) {
      pUVar3 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
      FAudioDeviceManager::DecrementDevice(this_00,this->DeviceId,pUVar3);
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6883895825940871781>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                       ,0x59b,"AudioDeviceManager");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// operator= @ 147621e40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAudioDeviceHandle * __thiscall
FAudioDeviceHandle::operator=(FAudioDeviceHandle *this,FAudioDeviceHandle *param_1)

{
  uint uVar1;
  FAudioDevice *pFVar2;
  UWorld *pUVar3;
  
  pFVar2 = this->Device;
  uVar1 = this->DeviceId;
  pUVar3 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  this->Device = param_1->Device;
  this->DeviceId = param_1->DeviceId;
  (this->World).WeakPtr = (param_1->World).WeakPtr;
  if (((FAudioDeviceManager::Singleton != (FAudioDeviceManager *)0x0) &&
      (FAudioDeviceManager::Singleton->InitPhase == Initialized)) && (pFVar2 != (FAudioDevice *)0x0)
     ) {
    FAudioDeviceManager::DecrementDevice(FAudioDeviceManager::Singleton,uVar1,pUVar3);
  }
  param_1->Device = (FAudioDevice *)0x0;
  (param_1->World).WeakPtr = (FWeakObjectPtr)0x0;
  param_1->DeviceId = 0xffffffff;
  return this;
}

// operator= @ 147621ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAudioDeviceHandle * __thiscall
FAudioDeviceHandle::operator=(FAudioDeviceHandle *this,FAudioDeviceHandle *param_1)

{
  uint uVar1;
  uint uVar2;
  FAudioDevice *pFVar3;
  FAudioDevice *pFVar4;
  FAudioDeviceManager *this_00;
  UWorld *pUVar5;
  
  pFVar3 = this->Device;
  uVar1 = this->DeviceId;
  pUVar5 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)this);
  pFVar4 = param_1->Device;
  this->Device = pFVar4;
  uVar2 = param_1->DeviceId;
  this->DeviceId = uVar2;
  (this->World).WeakPtr = (param_1->World).WeakPtr;
  this_00 = FAudioDeviceManager::Singleton;
  if ((FAudioDeviceManager::Singleton != (FAudioDeviceManager *)0x0) &&
     (FAudioDeviceManager::Singleton->InitPhase == Initialized)) {
    if (pFVar4 != (FAudioDevice *)0x0) {
      FAudioDeviceManager::IncrementDevice(FAudioDeviceManager::Singleton,uVar2);
    }
    if (pFVar3 != (FAudioDevice *)0x0) {
      FAudioDeviceManager::DecrementDevice(this_00,uVar1,pUVar5);
    }
  }
  return this;
}

// GetAudioDevice @ 14763a9f0

FAudioDevice * __thiscall FAudioDeviceHandle::GetAudioDevice(FAudioDeviceHandle *this)

{
  return this->Device;
}

// GetDeviceID @ 14763d1e0

uint __thiscall FAudioDeviceHandle::GetDeviceID(FAudioDeviceHandle *this)

{
  return this->DeviceId;
}

// GetWorld @ 147640e10

TWeakObjectPtr<UWorld,FWeakObjectPtr> __thiscall
FAudioDeviceHandle::GetWorld(FAudioDeviceHandle *this)

{
  FWeakObjectPtr in_RDX;
  
  *(FWeakObjectPtr *)in_RDX = (this->World).WeakPtr;
  return (TWeakObjectPtr<UWorld,FWeakObjectPtr>)in_RDX;
}

// IsValid @ 1476493f0

bool __thiscall FAudioDeviceHandle::IsValid(FAudioDeviceHandle *this)

{
  return this->Device != (FAudioDevice *)0x0;
}

// Reset @ 147659700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FAudioDeviceHandle::Reset(FAudioDeviceHandle *this)

{
  code *pcVar1;
  FAudioDeviceManager *this_00;
  bool bVar2;
  UWorld *pUVar3;
  undefined8 local_res10 [3];
  FAudioDeviceHandle local_28;
  
  local_28.World.WeakPtr.ObjectIndex = 0;
  local_28.World.WeakPtr.ObjectSerialNumber = 0;
  local_res10[0] = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_28,(FObjectPtr)local_res10);
  local_28.Device = (FAudioDevice *)0x0;
  local_28.DeviceId = 0xffffffff;
  operator=(this,&local_28);
  this_00 = FAudioDeviceManager::Singleton;
  if (local_28.Device != (FAudioDevice *)0x0) {
    if ((FAudioDeviceManager::Singleton != (FAudioDeviceManager *)0x0) &&
       (FAudioDeviceManager::Singleton->InitPhase == Initialized)) {
      pUVar3 = (UWorld *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_28);
      FAudioDeviceManager::DecrementDevice(this_00,local_28.DeviceId,pUVar3);
      return;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6883895825940871781>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\AudioDeviceManager.cpp"
                       ,0x59b,"AudioDeviceManager");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// operator-> @ 14869da30

FAudioDevice * __thiscall FAudioDeviceHandle::operator->(FAudioDeviceHandle *this)

{
  code *pcVar1;
  bool bVar2;
  FAudioDevice *pFVar3;
  
  bVar2 = IsValid(this);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                       ,0x60,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FAudioDevice *)(*pcVar1)();
      return pFVar3;
    }
  }
  return this->Device;
}

