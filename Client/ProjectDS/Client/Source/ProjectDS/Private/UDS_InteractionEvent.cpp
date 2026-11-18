// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4c81b0

UClass * __cdecl UDS_InteractionEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionEvent",
               &Z_Registration_Info_UClass_UDS_InteractionEvent.InnerSingleton,
               StaticRegisterNativesUDS_InteractionEvent,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_InteractionEvent>,
               InternalVTableHelperCtorCaller<UDS_InteractionEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionEvent.InnerSingleton;
}

// UDS_InteractionEvent @ 14b4cb7c0

UDS_InteractionEvent * __thiscall
UDS_InteractionEvent::UDS_InteractionEvent(UDS_InteractionEvent *this,FVTableHelper *param_1)

{
  UDS_EventManager *this_00;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InteractionEvent__6B_;
  (this->InteractionNpcTamingStateDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_K__CBW4EDS_TamingState____6B_;
  *(undefined8 *)&(this->OnInteractionProcess).Delegate = 0;
  *(undefined8 *)&(this->OnInteractionProcess).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnInteractionProcess).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnInteractionProcess).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->InteractionNpcTalkStartDelegate).Delegate = 0;
  *(undefined8 *)&(this->InteractionNpcTalkStartDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->InteractionNpcTalkStartDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->InteractionNpcTalkStartDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->InteractionNpcTalkEndDelegate).Delegate = 0;
  *(undefined8 *)&(this->InteractionNpcTalkEndDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->InteractionNpcTalkEndDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->InteractionNpcTalkEndDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->InteractionNpcTalkCancelDelegate).Delegate = 0;
  *(undefined8 *)&(this->InteractionNpcTalkCancelDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->InteractionNpcTalkCancelDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->InteractionNpcTalkCancelDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions = 0;
  *(undefined8 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->InteractionNpcTamingStateDelegate);
  }
  return this;
}

// UDS_InteractionEvent @ 14b4cb8a0

UDS_InteractionEvent * __thiscall
UDS_InteractionEvent::UDS_InteractionEvent(UDS_InteractionEvent *this,FObjectInitializer *param_1)

{
  UDS_EventManager *this_00;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InteractionEvent__6B_;
  (this->InteractionNpcTamingStateDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_K__CBW4EDS_TamingState____6B_;
  *(undefined8 *)&(this->OnInteractionProcess).Delegate = 0;
  *(undefined8 *)&(this->OnInteractionProcess).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnInteractionProcess).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnInteractionProcess).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->InteractionNpcTalkStartDelegate).Delegate = 0;
  *(undefined8 *)&(this->InteractionNpcTalkStartDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->InteractionNpcTalkStartDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->InteractionNpcTalkStartDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->InteractionNpcTalkEndDelegate).Delegate = 0;
  *(undefined8 *)&(this->InteractionNpcTalkEndDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->InteractionNpcTalkEndDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->InteractionNpcTalkEndDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->InteractionNpcTalkCancelDelegate).Delegate = 0;
  *(undefined8 *)&(this->InteractionNpcTalkCancelDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->InteractionNpcTalkCancelDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->InteractionNpcTalkCancelDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions = 0;
  *(undefined8 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->InteractionNpcTamingStateDelegate);
  }
  return this;
}

// ~UDS_InteractionEvent @ 14b4cc060

void __thiscall UDS_InteractionEvent::~UDS_InteractionEvent(UDS_InteractionEvent *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7UDS_InteractionEvent__6B_;
  (this->InteractionNpcTamingStateDelegate)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CB_K__CBW4EDS_TamingState____6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->InteractionNpcTamingStateDelegate);
  }
  TSet<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset(&(this->InteractionNpcTamingStateDelegate).Subscriptions);
  *(undefined4 *)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->InteractionNpcTamingStateDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64_const_,TMulticastDelegate<void___cdecl(enum_EDS_TamingState),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->InteractionNpcTamingStateDelegate).Subscriptions);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InteractionNpcTalkCancelDelegate).Delegate.field_0x8,
             *(int *)&(this->InteractionNpcTalkCancelDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->InteractionNpcTalkCancelDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InteractionNpcTalkCancelDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InteractionNpcTalkEndDelegate).Delegate.field_0x8,
             *(int *)&(this->InteractionNpcTalkEndDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->InteractionNpcTalkEndDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InteractionNpcTalkEndDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->InteractionNpcTalkStartDelegate).Delegate.field_0x8,
             *(int *)&(this->InteractionNpcTalkStartDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->InteractionNpcTalkStartDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->InteractionNpcTalkStartDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInteractionProcess).Delegate.field_0x8,
             *(int *)&(this->OnInteractionProcess).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnInteractionProcess).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInteractionProcess);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4cd1a0

UClass * __cdecl UDS_InteractionEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionEvent",
               &Z_Registration_Info_UClass_UDS_InteractionEvent.InnerSingleton,
               StaticRegisterNativesUDS_InteractionEvent,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_InteractionEvent>,
               InternalVTableHelperCtorCaller<UDS_InteractionEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_InteractionEvent @ 14b4cdc20

void __cdecl UDS_InteractionEvent::StaticRegisterNativesUDS_InteractionEvent(void)

{
  return;
}

// GetEvent @ 14b7eb6b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_InteractionEvent * __cdecl UDS_InteractionEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_InteractionEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_InteractionEvent>(this);
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
  return (UDS_InteractionEvent *)0x0;
}

