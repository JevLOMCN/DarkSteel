// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b585310

UClass * __cdecl UDS_RingCommandUIEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RingCommandUIEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RingCommandUIEvent",
               &Z_Registration_Info_UClass_UDS_RingCommandUIEvent.InnerSingleton,
               StaticRegisterNativesUDS_RingCommandUIEvent,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RingCommandUIEvent>,
               InternalVTableHelperCtorCaller<UDS_RingCommandUIEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RingCommandUIEvent.InnerSingleton;
}

// UDS_RingCommandUIEvent @ 14b5870a0

UDS_RingCommandUIEvent * __thiscall
UDS_RingCommandUIEvent::UDS_RingCommandUIEvent(UDS_RingCommandUIEvent *this,FVTableHelper *param_1)

{
  UDS_EventManager *this_00;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RingCommandUIEvent__6B_;
  (this->OnRingCmdExecuted)._padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CBH__V__6B_;
  *(undefined8 *)&(this->OnRingCmdSlotStateChanged).Delegate = 0;
  *(undefined8 *)&(this->OnRingCmdSlotStateChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRingCmdSlotStateChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRingCmdSlotStateChanged).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRingCmdDragStateChanged).Delegate = 0;
  *(undefined8 *)&(this->OnRingCmdDragStateChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRingCmdDragStateChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRingCmdDragStateChanged).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRingCmdQuickSlotPrevDeck).Delegate = 0;
  *(undefined8 *)&(this->OnRingCmdQuickSlotPrevDeck).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRingCmdQuickSlotPrevDeck).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRingCmdQuickSlotPrevDeck).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRingCmdQuickSlotNextDeck).Delegate = 0;
  *(undefined8 *)&(this->OnRingCmdQuickSlotNextDeck).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRingCmdQuickSlotNextDeck).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRingCmdQuickSlotNextDeck).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRingCmdExecuted).Subscriptions = 0;
  *(undefined8 *)&(this->OnRingCmdExecuted).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnRingCmdExecuted).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnRingCmdExecuted).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnRingCmdExecuted).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnRingCmdExecuted).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnRingCmdExecuted).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnRingCmdExecuted).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnRingCmdExecuted).Subscriptions.field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnRingCmdExecuted);
  }
  return this;
}

// UDS_RingCommandUIEvent @ 14b587180

UDS_RingCommandUIEvent * __thiscall
UDS_RingCommandUIEvent::UDS_RingCommandUIEvent
          (UDS_RingCommandUIEvent *this,FObjectInitializer *param_1)

{
  UDS_EventManager *this_00;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_RingCommandUIEvent__6B_;
  (this->OnRingCmdExecuted)._padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CBH__V__6B_;
  *(undefined8 *)&(this->OnRingCmdSlotStateChanged).Delegate = 0;
  *(undefined8 *)&(this->OnRingCmdSlotStateChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRingCmdSlotStateChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRingCmdSlotStateChanged).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRingCmdDragStateChanged).Delegate = 0;
  *(undefined8 *)&(this->OnRingCmdDragStateChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRingCmdDragStateChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRingCmdDragStateChanged).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRingCmdQuickSlotPrevDeck).Delegate = 0;
  *(undefined8 *)&(this->OnRingCmdQuickSlotPrevDeck).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRingCmdQuickSlotPrevDeck).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRingCmdQuickSlotPrevDeck).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRingCmdQuickSlotNextDeck).Delegate = 0;
  *(undefined8 *)&(this->OnRingCmdQuickSlotNextDeck).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnRingCmdQuickSlotNextDeck).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnRingCmdQuickSlotNextDeck).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnRingCmdExecuted).Subscriptions = 0;
  *(undefined8 *)&(this->OnRingCmdExecuted).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnRingCmdExecuted).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnRingCmdExecuted).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnRingCmdExecuted).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnRingCmdExecuted).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnRingCmdExecuted).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnRingCmdExecuted).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnRingCmdExecuted).Subscriptions.field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnRingCmdExecuted);
  }
  return this;
}

// ~UDS_RingCommandUIEvent @ 14b587a40

void __thiscall UDS_RingCommandUIEvent::~UDS_RingCommandUIEvent(UDS_RingCommandUIEvent *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7UDS_RingCommandUIEvent__6B_;
  (this->OnRingCmdExecuted)._padding_ = (longlong)&___7__FDS_FilteredEventDelegate___CBH__V__6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnRingCmdExecuted);
  }
  TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
           *)&(this->OnRingCmdExecuted).Subscriptions);
  *(undefined4 *)&(this->OnRingCmdExecuted).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnRingCmdExecuted).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int_const_,TMulticastDelegate<void___cdecl(void),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->OnRingCmdExecuted).Subscriptions);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRingCmdQuickSlotNextDeck).Delegate.field_0x8,
             *(int *)&(this->OnRingCmdQuickSlotNextDeck).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnRingCmdQuickSlotNextDeck).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRingCmdQuickSlotNextDeck);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRingCmdQuickSlotPrevDeck).Delegate.field_0x8,
             *(int *)&(this->OnRingCmdQuickSlotPrevDeck).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnRingCmdQuickSlotPrevDeck).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRingCmdQuickSlotPrevDeck);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRingCmdDragStateChanged).Delegate.field_0x8,
             *(int *)&(this->OnRingCmdDragStateChanged).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnRingCmdDragStateChanged).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRingCmdDragStateChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnRingCmdSlotStateChanged).Delegate.field_0x8,
             *(int *)&(this->OnRingCmdSlotStateChanged).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnRingCmdSlotStateChanged).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnRingCmdSlotStateChanged);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5891f0

UClass * __cdecl UDS_RingCommandUIEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RingCommandUIEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RingCommandUIEvent",
               &Z_Registration_Info_UClass_UDS_RingCommandUIEvent.InnerSingleton,
               StaticRegisterNativesUDS_RingCommandUIEvent,0x100,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_RingCommandUIEvent>,
               InternalVTableHelperCtorCaller<UDS_RingCommandUIEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RingCommandUIEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_RingCommandUIEvent @ 14b589bc0

void __cdecl UDS_RingCommandUIEvent::StaticRegisterNativesUDS_RingCommandUIEvent(void)

{
  return;
}

// GetEvent @ 14b8c5120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_RingCommandUIEvent * __cdecl UDS_RingCommandUIEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_RingCommandUIEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_RingCommandUIEvent>(this);
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
  return (UDS_RingCommandUIEvent *)0x0;
}

