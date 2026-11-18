// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b55fde0

UClass * __cdecl UDS_PlayerEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerEvent",
               &Z_Registration_Info_UClass_UDS_PlayerEvent.InnerSingleton,
               StaticRegisterNativesUDS_PlayerEvent,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_PlayerEvent>,InternalVTableHelperCtorCaller<UDS_PlayerEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerEvent.InnerSingleton;
}

// UDS_PlayerEvent @ 14b564060

UDS_PlayerEvent * __thiscall
UDS_PlayerEvent::UDS_PlayerEvent(UDS_PlayerEvent *this,FVTableHelper *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PlayerEvent__6B_;
  *(undefined8 *)&(this->OnSelectPlayerIcon).Delegate = 0;
  *(undefined8 *)&(this->OnSelectPlayerIcon).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectPlayerIcon).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnPlayerIconUpdate).Delegate = 0;
  *(undefined8 *)&(this->OnPlayerIconUpdate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnPlayerIconUpdate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdateSearchPlayerNames).Delegate = 0;
  *(undefined8 *)&(this->OnUpdateSearchPlayerNames).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateSearchPlayerNames).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickSearchedNameEntry).Delegate = 0;
  *(undefined8 *)&(this->OnClickSearchedNameEntry).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickSearchedNameEntry).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectPlayerIcon).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnPlayerIconUpdate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnUpdateSearchPlayerNames).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickSearchedNameEntry).Delegate.field_0x18 = 2;
  return this;
}

// UDS_PlayerEvent @ 14b5640f0

UDS_PlayerEvent * __thiscall
UDS_PlayerEvent::UDS_PlayerEvent(UDS_PlayerEvent *this,FObjectInitializer *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_PlayerEvent__6B_;
  *(undefined8 *)&(this->OnSelectPlayerIcon).Delegate = 0;
  *(undefined8 *)&(this->OnSelectPlayerIcon).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnSelectPlayerIcon).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnPlayerIconUpdate).Delegate = 0;
  *(undefined8 *)&(this->OnPlayerIconUpdate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnPlayerIconUpdate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnUpdateSearchPlayerNames).Delegate = 0;
  *(undefined8 *)&(this->OnUpdateSearchPlayerNames).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnUpdateSearchPlayerNames).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnClickSearchedNameEntry).Delegate = 0;
  *(undefined8 *)&(this->OnClickSearchedNameEntry).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnClickSearchedNameEntry).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnSelectPlayerIcon).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnPlayerIconUpdate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnUpdateSearchPlayerNames).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnClickSearchedNameEntry).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_PlayerEvent @ 14b565030

void __thiscall UDS_PlayerEvent::~UDS_PlayerEvent(UDS_PlayerEvent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_PlayerEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnClickSearchedNameEntry).Delegate.field_0x8,
             *(int *)&(this->OnClickSearchedNameEntry).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnClickSearchedNameEntry).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickSearchedNameEntry);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnUpdateSearchPlayerNames).Delegate.field_0x8,
             *(int *)&(this->OnUpdateSearchPlayerNames).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnUpdateSearchPlayerNames).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnUpdateSearchPlayerNames);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnPlayerIconUpdate).Delegate.field_0x8,
             *(int *)&(this->OnPlayerIconUpdate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnPlayerIconUpdate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnPlayerIconUpdate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnSelectPlayerIcon).Delegate.field_0x8,
             *(int *)&(this->OnSelectPlayerIcon).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnSelectPlayerIcon).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnSelectPlayerIcon);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5671b0

UClass * __cdecl UDS_PlayerEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_PlayerEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_PlayerEvent",
               &Z_Registration_Info_UClass_UDS_PlayerEvent.InnerSingleton,
               StaticRegisterNativesUDS_PlayerEvent,0xa8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_PlayerEvent>,InternalVTableHelperCtorCaller<UDS_PlayerEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_PlayerEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_PlayerEvent @ 14b568050

void __cdecl UDS_PlayerEvent::StaticRegisterNativesUDS_PlayerEvent(void)

{
  return;
}

// GetEvent @ 14b8c5010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_PlayerEvent * __cdecl UDS_PlayerEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_PlayerEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_PlayerEvent>(this);
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
  return (UDS_PlayerEvent *)0x0;
}

