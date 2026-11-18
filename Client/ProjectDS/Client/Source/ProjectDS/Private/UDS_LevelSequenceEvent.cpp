// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4dd660

UClass * __cdecl UDS_LevelSequenceEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LevelSequenceEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelSequenceEvent",
               &Z_Registration_Info_UClass_UDS_LevelSequenceEvent.InnerSingleton,
               StaticRegisterNativesUDS_LevelSequenceEvent,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_LevelSequenceEvent>,
               InternalVTableHelperCtorCaller<UDS_LevelSequenceEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LevelSequenceEvent.InnerSingleton;
}

// UDS_LevelSequenceEvent @ 14b4df950

UDS_LevelSequenceEvent * __thiscall
UDS_LevelSequenceEvent::UDS_LevelSequenceEvent(UDS_LevelSequenceEvent *this,FVTableHelper *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LevelSequenceEvent__6B_;
  *(undefined8 *)&(this->LevelSequenceChangeStateDelegate).Delegate = 0;
  *(undefined8 *)&(this->LevelSequenceChangeStateDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->LevelSequenceChangeStateDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->LevelSequencePlayDelegate).Delegate = 0;
  *(undefined8 *)&(this->LevelSequencePlayDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->LevelSequencePlayDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->LevelSequencePauseDelegate).Delegate = 0;
  *(undefined8 *)&(this->LevelSequencePauseDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->LevelSequencePauseDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->LevelSequenceSkipDelegate).Delegate = 0;
  *(undefined8 *)&(this->LevelSequenceSkipDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->LevelSequenceSkipDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->LevelSequenceJumpDelegate).Delegate = 0;
  *(undefined8 *)&(this->LevelSequenceJumpDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->LevelSequenceJumpDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->LevelSequenceChangeStateDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->LevelSequencePlayDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->LevelSequencePauseDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->LevelSequenceSkipDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->LevelSequenceJumpDelegate).Delegate.field_0x18 = 2;
  return this;
}

// UDS_LevelSequenceEvent @ 14b4dfa00

UDS_LevelSequenceEvent * __thiscall
UDS_LevelSequenceEvent::UDS_LevelSequenceEvent
          (UDS_LevelSequenceEvent *this,FObjectInitializer *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_LevelSequenceEvent__6B_;
  *(undefined8 *)&(this->LevelSequenceChangeStateDelegate).Delegate = 0;
  *(undefined8 *)&(this->LevelSequenceChangeStateDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->LevelSequenceChangeStateDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->LevelSequencePlayDelegate).Delegate = 0;
  *(undefined8 *)&(this->LevelSequencePlayDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->LevelSequencePlayDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->LevelSequencePauseDelegate).Delegate = 0;
  *(undefined8 *)&(this->LevelSequencePauseDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->LevelSequencePauseDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->LevelSequenceSkipDelegate).Delegate = 0;
  *(undefined8 *)&(this->LevelSequenceSkipDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->LevelSequenceSkipDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->LevelSequenceJumpDelegate).Delegate = 0;
  *(undefined8 *)&(this->LevelSequenceJumpDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->LevelSequenceJumpDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->LevelSequenceChangeStateDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->LevelSequencePlayDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->LevelSequencePauseDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->LevelSequenceSkipDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->LevelSequenceJumpDelegate).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_LevelSequenceEvent @ 14b4e0230

void __thiscall UDS_LevelSequenceEvent::~UDS_LevelSequenceEvent(UDS_LevelSequenceEvent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_LevelSequenceEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->LevelSequenceJumpDelegate).Delegate.field_0x8,
             *(int *)&(this->LevelSequenceJumpDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->LevelSequenceJumpDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LevelSequenceJumpDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->LevelSequenceSkipDelegate).Delegate.field_0x8,
             *(int *)&(this->LevelSequenceSkipDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->LevelSequenceSkipDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LevelSequenceSkipDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->LevelSequencePauseDelegate).Delegate.field_0x8,
             *(int *)&(this->LevelSequencePauseDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->LevelSequencePauseDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LevelSequencePauseDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->LevelSequencePlayDelegate).Delegate.field_0x8,
             *(int *)&(this->LevelSequencePlayDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->LevelSequencePlayDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LevelSequencePlayDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->LevelSequenceChangeStateDelegate).Delegate.field_0x8,
             *(int *)&(this->LevelSequenceChangeStateDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->LevelSequenceChangeStateDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->LevelSequenceChangeStateDelegate);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4e1d90

UClass * __cdecl UDS_LevelSequenceEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LevelSequenceEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LevelSequenceEvent",
               &Z_Registration_Info_UClass_UDS_LevelSequenceEvent.InnerSingleton,
               StaticRegisterNativesUDS_LevelSequenceEvent,200,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_LevelSequenceEvent>,
               InternalVTableHelperCtorCaller<UDS_LevelSequenceEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LevelSequenceEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_LevelSequenceEvent @ 14b4e27f0

void __cdecl UDS_LevelSequenceEvent::StaticRegisterNativesUDS_LevelSequenceEvent(void)

{
  return;
}

// GetEvent @ 14b7eb7c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_LevelSequenceEvent * __cdecl UDS_LevelSequenceEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_LevelSequenceEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_LevelSequenceEvent>(this);
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
  return (UDS_LevelSequenceEvent *)0x0;
}

