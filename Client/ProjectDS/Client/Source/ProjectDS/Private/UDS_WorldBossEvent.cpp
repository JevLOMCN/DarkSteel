// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b76a2c0

UClass * __cdecl UDS_WorldBossEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WorldBossEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WorldBossEvent",
               &Z_Registration_Info_UClass_UDS_WorldBossEvent.InnerSingleton,
               StaticRegisterNativesUDS_WorldBossEvent,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WorldBossEvent>,
               InternalVTableHelperCtorCaller<UDS_WorldBossEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WorldBossEvent.InnerSingleton;
}

// UDS_WorldBossEvent @ 14b76deb0

UDS_WorldBossEvent * __thiscall
UDS_WorldBossEvent::UDS_WorldBossEvent(UDS_WorldBossEvent *this,FVTableHelper *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WorldBossEvent__6B_;
  *(undefined8 *)&(this->OnSelectedWorldBoss).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedWorldBoss).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedWorldBoss).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedWorldBossNotify).Delegate = 0;
  *(undefined8 *)&(this->OnChangedWorldBossNotify).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedWorldBossNotify).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedWorldBossStatus).Delegate = 0;
  *(undefined8 *)&(this->OnChangedWorldBossStatus).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedWorldBossStatus).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedWorldBoss).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedWorldBossNotify).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedWorldBossStatus).Delegate.field_0x18 = 2;
  return this;
}

// UDS_WorldBossEvent @ 14b76df20

UDS_WorldBossEvent * __thiscall
UDS_WorldBossEvent::UDS_WorldBossEvent(UDS_WorldBossEvent *this,FObjectInitializer *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_WorldBossEvent__6B_;
  *(undefined8 *)&(this->OnSelectedWorldBoss).Delegate = 0;
  *(undefined8 *)&(this->OnSelectedWorldBoss).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectedWorldBoss).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedWorldBossNotify).Delegate = 0;
  *(undefined8 *)&(this->OnChangedWorldBossNotify).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedWorldBossNotify).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedWorldBossStatus).Delegate = 0;
  *(undefined8 *)&(this->OnChangedWorldBossStatus).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedWorldBossStatus).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectedWorldBoss).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedWorldBossNotify).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangedWorldBossStatus).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_WorldBossEvent @ 14b770e90

void __thiscall UDS_WorldBossEvent::~UDS_WorldBossEvent(UDS_WorldBossEvent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_WorldBossEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedWorldBossStatus).Delegate.field_0x8,
             *(int *)&(this->OnChangedWorldBossStatus).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedWorldBossStatus).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedWorldBossStatus);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedWorldBossNotify).Delegate.field_0x8,
             *(int *)&(this->OnChangedWorldBossNotify).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedWorldBossNotify).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedWorldBossNotify);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectedWorldBoss).Delegate.field_0x8,
             *(int *)&(this->OnSelectedWorldBoss).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectedWorldBoss).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectedWorldBoss);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b775760

UClass * __cdecl UDS_WorldBossEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_WorldBossEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_WorldBossEvent",
               &Z_Registration_Info_UClass_UDS_WorldBossEvent.InnerSingleton,
               StaticRegisterNativesUDS_WorldBossEvent,0x88,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_WorldBossEvent>,
               InternalVTableHelperCtorCaller<UDS_WorldBossEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_WorldBossEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_WorldBossEvent @ 14b777c20

void __cdecl UDS_WorldBossEvent::StaticRegisterNativesUDS_WorldBossEvent(void)

{
  return;
}

// GetEvent @ 14bb654e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_WorldBossEvent * __cdecl UDS_WorldBossEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_WorldBossEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_WorldBossEvent>(this);
      return pUVar2;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_EventManager::GetEvent",0x1a,Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x31,
                 L"Cannot access event during UDS_EventManager destruction.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return (UDS_WorldBossEvent *)0x0;
}

