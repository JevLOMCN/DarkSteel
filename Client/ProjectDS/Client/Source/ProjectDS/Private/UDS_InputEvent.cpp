// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b4ab840

UClass * __cdecl UDS_InputEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InputEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InputEvent",
               &Z_Registration_Info_UClass_UDS_InputEvent.InnerSingleton,
               StaticRegisterNativesUDS_InputEvent,0x120,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InputEvent>,InternalVTableHelperCtorCaller<UDS_InputEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InputEvent.InnerSingleton;
}

// UDS_InputEvent @ 14b4b2a10

UDS_InputEvent * __thiscall
UDS_InputEvent::UDS_InputEvent(UDS_InputEvent *this,FVTableHelper *param_1)

{
  UDS_EventManager *this_00;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InputEvent__6B_;
  (this->OnInputEvent)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate___CBW4EDS_KeyActionType____CBW41___CBW4ETriggerEvent__AEBUFInputActionValue____6B_
  ;
  *(undefined8 *)&(this->OnInputEvent).Subscriptions = 0;
  *(undefined8 *)&(this->OnInputEvent).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnInputEvent).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnInputEvent).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnInputEvent).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnInputEvent).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnInputEvent).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnInputEvent).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnInputEvent).Subscriptions.field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnInputEvent);
  }
  *(undefined8 *)&(this->OnChangeInputDeviceType).Delegate = 0;
  *(undefined8 *)&(this->OnChangeInputDeviceType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeInputDeviceType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeInputKey).Delegate = 0;
  *(undefined8 *)&(this->OnChangeInputKey).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeInputKey).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnInputUIEvent).Delegate = 0;
  *(undefined8 *)&(this->OnInputUIEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnInputUIEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnInputKeyAddRemoveEvent).Delegate = 0;
  *(undefined8 *)&(this->OnInputKeyAddRemoveEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnInputKeyAddRemoveEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnInteractionSelectedIndex).Delegate = 0;
  *(undefined8 *)&(this->OnInteractionSelectedIndex).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnInteractionSelectedIndex).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeInputDeviceType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeInputKey).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnInputUIEvent).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnInputKeyAddRemoveEvent).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnInteractionSelectedIndex).Delegate.field_0x18 = 2;
  return this;
}

// UDS_InputEvent @ 14b4b2b40

UDS_InputEvent * __thiscall
UDS_InputEvent::UDS_InputEvent(UDS_InputEvent *this,FObjectInitializer *param_1)

{
  UDS_EventManager *this_00;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_InputEvent__6B_;
  (this->OnInputEvent)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate___CBW4EDS_KeyActionType____CBW41___CBW4ETriggerEvent__AEBUFInputActionValue____6B_
  ;
  *(undefined8 *)&(this->OnInputEvent).Subscriptions = 0;
  *(undefined8 *)&(this->OnInputEvent).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnInputEvent).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnInputEvent).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnInputEvent).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnInputEvent).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnInputEvent).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnInputEvent).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnInputEvent).Subscriptions.field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnInputEvent);
  }
  *(undefined8 *)&(this->OnChangeInputDeviceType).Delegate = 0;
  *(undefined8 *)&(this->OnChangeInputDeviceType).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeInputDeviceType).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeInputKey).Delegate = 0;
  *(undefined8 *)&(this->OnChangeInputKey).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangeInputKey).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnInputUIEvent).Delegate = 0;
  *(undefined8 *)&(this->OnInputUIEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnInputUIEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnInputKeyAddRemoveEvent).Delegate = 0;
  *(undefined8 *)&(this->OnInputKeyAddRemoveEvent).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnInputKeyAddRemoveEvent).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnInteractionSelectedIndex).Delegate = 0;
  *(undefined8 *)&(this->OnInteractionSelectedIndex).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnInteractionSelectedIndex).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangeInputDeviceType).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnChangeInputKey).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnInputUIEvent).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnInputKeyAddRemoveEvent).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnInteractionSelectedIndex).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_InputEvent @ 14b4b3ae0

void __thiscall UDS_InputEvent::~UDS_InputEvent(UDS_InputEvent *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7UDS_InputEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInteractionSelectedIndex).Delegate.field_0x8,
             *(int *)&(this->OnInteractionSelectedIndex).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnInteractionSelectedIndex).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInteractionSelectedIndex);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInputKeyAddRemoveEvent).Delegate.field_0x8,
             *(int *)&(this->OnInputKeyAddRemoveEvent).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnInputKeyAddRemoveEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputKeyAddRemoveEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnInputUIEvent).Delegate.field_0x8,
             *(int *)&(this->OnInputUIEvent).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnInputUIEvent).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnInputUIEvent);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeInputKey).Delegate.field_0x8,
             *(int *)&(this->OnChangeInputKey).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangeInputKey).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeInputKey);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangeInputDeviceType).Delegate.field_0x8,
             *(int *)&(this->OnChangeInputDeviceType).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangeInputDeviceType).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangeInputDeviceType);
  (this->OnInputEvent)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate___CBW4EDS_KeyActionType____CBW41___CBW4ETriggerEvent__AEBUFInputActionValue____6B_
  ;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnInputEvent);
  }
  TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset(&(this->OnInputEvent).Subscriptions);
  *(undefined4 *)&(this->OnInputEvent).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnInputEvent).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OnInputEvent).Subscriptions);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b7cc0

UClass * __cdecl UDS_InputEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InputEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InputEvent",
               &Z_Registration_Info_UClass_UDS_InputEvent.InnerSingleton,
               StaticRegisterNativesUDS_InputEvent,0x120,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_InputEvent>,InternalVTableHelperCtorCaller<UDS_InputEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InputEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_InputEvent @ 14b4b8680

void __cdecl UDS_InputEvent::StaticRegisterNativesUDS_InputEvent(void)

{
  return;
}

// GetEvent @ 14b7ab800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_InputEvent * __cdecl UDS_InputEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_InputEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_InputEvent>(this);
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
  return (UDS_InputEvent *)0x0;
}

