// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b46d7c0

UClass * __cdecl UDS_ContentEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ContentEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ContentEvent",
               &Z_Registration_Info_UClass_UDS_ContentEvent.InnerSingleton,
               StaticRegisterNativesUDS_ContentEvent,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_ContentEvent>,
               InternalVTableHelperCtorCaller<UDS_ContentEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ContentEvent.InnerSingleton;
}

// UDS_ContentEvent @ 14b4719e0

UDS_ContentEvent * __thiscall
UDS_ContentEvent::UDS_ContentEvent(UDS_ContentEvent *this,FVTableHelper *param_1)

{
  UDS_EventManager *this_00;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ContentEvent__6B_;
  (this->OnContentManualDelegate)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate___CBW4EDS_WindowWidget__PEAVUDS_UserWidget__AEBW4EDS_ContentsTabFrameType____6B_
  ;
  *(undefined8 *)&(this->OnContentManualDelegate).Subscriptions = 0;
  *(undefined8 *)&(this->OnContentManualDelegate).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnContentManualDelegate).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnContentManualDelegate).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnContentManualDelegate).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnContentManualDelegate).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnContentManualDelegate).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnContentManualDelegate).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnContentManualDelegate).Subscriptions.field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnContentManualDelegate);
  }
  *(undefined8 *)&(this->OnContentsBackgroundClickDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnContentsBackgroundClickDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnContentsBackgroundClickDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnContentsBackButttonClickDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnContentsBackButttonClickDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnContentsBackButttonClickDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnContentsBackButtonVisibilityChangedDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnContentsBackButtonVisibilityChangedDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnContentsBackButtonVisibilityChangedDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnContentsBackgroundClickDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnContentsBackButttonClickDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnContentsBackButtonVisibilityChangedDelegate).Delegate.field_0x18 = 2;
  return this;
}

// UDS_ContentEvent @ 14b471ad0

UDS_ContentEvent * __thiscall
UDS_ContentEvent::UDS_ContentEvent(UDS_ContentEvent *this,FObjectInitializer *param_1)

{
  UDS_EventManager *this_00;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ContentEvent__6B_;
  (this->OnContentManualDelegate)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate___CBW4EDS_WindowWidget__PEAVUDS_UserWidget__AEBW4EDS_ContentsTabFrameType____6B_
  ;
  *(undefined8 *)&(this->OnContentManualDelegate).Subscriptions = 0;
  *(undefined8 *)&(this->OnContentManualDelegate).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnContentManualDelegate).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnContentManualDelegate).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnContentManualDelegate).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnContentManualDelegate).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnContentManualDelegate).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnContentManualDelegate).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnContentManualDelegate).Subscriptions.field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnContentManualDelegate);
  }
  *(undefined8 *)&(this->OnContentsBackgroundClickDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnContentsBackgroundClickDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnContentsBackgroundClickDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnContentsBackButttonClickDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnContentsBackButttonClickDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnContentsBackButttonClickDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnContentsBackButtonVisibilityChangedDelegate).Delegate = 0;
  *(undefined8 *)&(this->OnContentsBackButtonVisibilityChangedDelegate).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnContentsBackButtonVisibilityChangedDelegate).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnContentsBackgroundClickDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnContentsBackButttonClickDelegate).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnContentsBackButtonVisibilityChangedDelegate).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_ContentEvent @ 14b472d70

void __thiscall UDS_ContentEvent::~UDS_ContentEvent(UDS_ContentEvent *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7UDS_ContentEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContentsBackButtonVisibilityChangedDelegate).Delegate.field_0x8,
             *(int *)&(this->OnContentsBackButtonVisibilityChangedDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnContentsBackButtonVisibilityChangedDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContentsBackButtonVisibilityChangedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContentsBackButttonClickDelegate).Delegate.field_0x8,
             *(int *)&(this->OnContentsBackButttonClickDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnContentsBackButttonClickDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContentsBackButttonClickDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnContentsBackgroundClickDelegate).Delegate.field_0x8,
             *(int *)&(this->OnContentsBackgroundClickDelegate).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnContentsBackgroundClickDelegate).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContentsBackgroundClickDelegate);
  (this->OnContentManualDelegate)._padding_ =
       (longlong)
       &
       ___7__FDS_FilteredEventDelegate___CBW4EDS_WindowWidget__PEAVUDS_UserWidget__AEBW4EDS_ContentsTabFrameType____6B_
  ;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnContentManualDelegate);
  }
  TSet<TTuple<enum_EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset(&(this->OnContentManualDelegate).Subscriptions);
  *(undefined4 *)&(this->OnContentManualDelegate).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnContentManualDelegate).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_WindowWidget_const_,TMulticastDelegate<void___cdecl(UDS_UserWidget_*,enum_EDS_ContentsTabFrameType_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OnContentManualDelegate).Subscriptions);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4766b0

UClass * __cdecl UDS_ContentEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ContentEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ContentEvent",
               &Z_Registration_Info_UClass_UDS_ContentEvent.InnerSingleton,
               StaticRegisterNativesUDS_ContentEvent,0xe0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_ContentEvent>,
               InternalVTableHelperCtorCaller<UDS_ContentEvent>,local_res8,
               UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ContentEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_ContentEvent @ 14b476f10

void __cdecl UDS_ContentEvent::StaticRegisterNativesUDS_ContentEvent(void)

{
  return;
}

// GetEvent @ 14bdc2fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_ContentEvent * __cdecl UDS_ContentEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_ContentEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_ContentEvent>(this);
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
  return (UDS_ContentEvent *)0x0;
}

