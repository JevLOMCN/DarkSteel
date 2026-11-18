// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4e5700

UClass * __cdecl UDS_LoginEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LoginEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LoginEvent",
               &Z_Registration_Info_UClass_UDS_LoginEvent.InnerSingleton,
               StaticRegisterNativesUDS_LoginEvent,0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_LoginEvent>,InternalVTableHelperCtorCaller<UDS_LoginEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LoginEvent.InnerSingleton;
}

// UDS_LoginEvent @ 14b4e8430

UDS_LoginEvent * __thiscall
UDS_LoginEvent::UDS_LoginEvent(UDS_LoginEvent *this,FVTableHelper *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LoginEvent__6B_;
  *(undefined8 *)&(this->OnRequestLogin).Delegate = 0;
  *(undefined8 *)&(this->OnRequestLogin).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRequestLogin).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnLoginCompleted).Delegate = 0;
  *(undefined8 *)&(this->OnLoginCompleted).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnLoginCompleted).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRequestInGameLevelLoad).Delegate = 0;
  *(undefined8 *)&(this->OnRequestInGameLevelLoad).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRequestInGameLevelLoad).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnInGameLevelLoadCompleted).Delegate = 0;
  *(undefined8 *)&(this->OnInGameLevelLoadCompleted).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnInGameLevelLoadCompleted).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnServerInfoChanged).Delegate = 0;
  *(undefined8 *)&(this->OnServerInfoChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnServerInfoChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnReceiveJoinMapResponse).Delegate = 0;
  *(undefined8 *)&(this->OnReceiveJoinMapResponse).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnReceiveJoinMapResponse).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnReceiveMyCharacterInfoResponseComplete).Delegate = 0;
  *(undefined8 *)&(this->OnReceiveMyCharacterInfoResponseComplete).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnReceiveMyCharacterInfoResponseComplete).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnErrorEvent).Delegate = 0;
  *(undefined8 *)&(this->OnErrorEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnErrorEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRequestLogin).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnLoginCompleted).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRequestInGameLevelLoad).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnInGameLevelLoadCompleted).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnServerInfoChanged).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnReceiveJoinMapResponse).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnReceiveMyCharacterInfoResponseComplete).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnErrorEvent).Delegate.field_0x18 = 2;
  return this;
}

// UDS_LoginEvent @ 14b4e8540

UDS_LoginEvent * __thiscall
UDS_LoginEvent::UDS_LoginEvent(UDS_LoginEvent *this,FObjectInitializer *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LoginEvent__6B_;
  *(undefined8 *)&(this->OnRequestLogin).Delegate = 0;
  *(undefined8 *)&(this->OnRequestLogin).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRequestLogin).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnLoginCompleted).Delegate = 0;
  *(undefined8 *)&(this->OnLoginCompleted).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnLoginCompleted).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRequestInGameLevelLoad).Delegate = 0;
  *(undefined8 *)&(this->OnRequestInGameLevelLoad).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRequestInGameLevelLoad).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnInGameLevelLoadCompleted).Delegate = 0;
  *(undefined8 *)&(this->OnInGameLevelLoadCompleted).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnInGameLevelLoadCompleted).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnServerInfoChanged).Delegate = 0;
  *(undefined8 *)&(this->OnServerInfoChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnServerInfoChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnReceiveJoinMapResponse).Delegate = 0;
  *(undefined8 *)&(this->OnReceiveJoinMapResponse).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnReceiveJoinMapResponse).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnReceiveMyCharacterInfoResponseComplete).Delegate = 0;
  *(undefined8 *)&(this->OnReceiveMyCharacterInfoResponseComplete).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnReceiveMyCharacterInfoResponseComplete).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnErrorEvent).Delegate = 0;
  *(undefined8 *)&(this->OnErrorEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnErrorEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRequestLogin).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnLoginCompleted).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRequestInGameLevelLoad).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnInGameLevelLoadCompleted).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnServerInfoChanged).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnReceiveJoinMapResponse).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnReceiveMyCharacterInfoResponseComplete).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnErrorEvent).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_LoginEvent @ 14b4e9710

void __thiscall UDS_LoginEvent::~UDS_LoginEvent(UDS_LoginEvent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_LoginEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnErrorEvent).Delegate.field_0x8,
             *(int *)&(this->OnErrorEvent).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnErrorEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnErrorEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnReceiveMyCharacterInfoResponseComplete).Delegate.field_0x8,
             *(int *)&(this->OnReceiveMyCharacterInfoResponseComplete).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnReceiveMyCharacterInfoResponseComplete).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReceiveMyCharacterInfoResponseComplete);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnReceiveJoinMapResponse).Delegate.field_0x8,
             *(int *)&(this->OnReceiveJoinMapResponse).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnReceiveJoinMapResponse).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnReceiveJoinMapResponse);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnServerInfoChanged).Delegate.field_0x8,
             *(int *)&(this->OnServerInfoChanged).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnServerInfoChanged).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnServerInfoChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInGameLevelLoadCompleted).Delegate.field_0x8,
             *(int *)&(this->OnInGameLevelLoadCompleted).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnInGameLevelLoadCompleted).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInGameLevelLoadCompleted);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRequestInGameLevelLoad).Delegate.field_0x8,
             *(int *)&(this->OnRequestInGameLevelLoad).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnRequestInGameLevelLoad).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRequestInGameLevelLoad);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnLoginCompleted).Delegate.field_0x8,
             *(int *)&(this->OnLoginCompleted).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnLoginCompleted).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnLoginCompleted);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRequestLogin).Delegate.field_0x8,
             *(int *)&(this->OnRequestLogin).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnRequestLogin).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRequestLogin);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4eb170

UClass * __cdecl UDS_LoginEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LoginEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LoginEvent",
               &Z_Registration_Info_UClass_UDS_LoginEvent.InnerSingleton,
               StaticRegisterNativesUDS_LoginEvent,0x128,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_LoginEvent>,InternalVTableHelperCtorCaller<UDS_LoginEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LoginEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_LoginEvent @ 14b4ec0c0

void __cdecl UDS_LoginEvent::StaticRegisterNativesUDS_LoginEvent(void)

{
  return;
}

// GetEvent @ 14bb0a930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_LoginEvent * __cdecl UDS_LoginEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_LoginEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_LoginEvent>(this);
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
  return (UDS_LoginEvent *)0x0;
}

