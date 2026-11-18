// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 7

// StaticClass @ 14b5ac360

UClass * __cdecl UDS_SwimEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimEvent",
               &Z_Registration_Info_UClass_UDS_SwimEvent.InnerSingleton,
               StaticRegisterNativesUDS_SwimEvent,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_SwimEvent>,InternalVTableHelperCtorCaller<UDS_SwimEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimEvent.InnerSingleton;
}

// UDS_SwimEvent @ 14b5b18a0

UDS_SwimEvent * __thiscall UDS_SwimEvent::UDS_SwimEvent(UDS_SwimEvent *this,FVTableHelper *param_1)

{
  UDS_EventManager *this_00;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SwimEvent__6B_;
  (this->OnChangedSwimStep_Filtered)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBW4EDS_SwimStep__AEBVFDS_SwimStepInfo____6B_;
  *(undefined8 *)&(this->OnChangedSwimStep_Filtered).Subscriptions = 0;
  *(undefined8 *)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnChangedSwimStep_Filtered);
  }
  *(undefined8 *)&(this->OnChangedSwimStep).Delegate = 0;
  *(undefined8 *)&(this->OnChangedSwimStep).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedSwimStep).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnWaterVolumeChanged).Delegate = 0;
  *(undefined8 *)&(this->OnWaterVolumeChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnWaterVolumeChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedSwimStep).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnWaterVolumeChanged).Delegate.field_0x18 = 2;
  return this;
}

// UDS_SwimEvent @ 14b5b1970

UDS_SwimEvent * __thiscall
UDS_SwimEvent::UDS_SwimEvent(UDS_SwimEvent *this,FObjectInitializer *param_1)

{
  UDS_EventManager *this_00;
  
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_SwimEvent__6B_;
  (this->OnChangedSwimStep_Filtered)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBW4EDS_SwimStep__AEBVFDS_SwimStepInfo____6B_;
  *(undefined8 *)&(this->OnChangedSwimStep_Filtered).Subscriptions = 0;
  *(undefined8 *)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x20 = 0;
  *(undefined4 *)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x28 = 0;
  *(undefined4 *)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x2c = 0x80;
  *(undefined4 *)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x34 = 0;
  *(undefined8 *)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x40 = 0;
  *(undefined4 *)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x48 = 0;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::RegisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnChangedSwimStep_Filtered);
  }
  *(undefined8 *)&(this->OnChangedSwimStep).Delegate = 0;
  *(undefined8 *)&(this->OnChangedSwimStep).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnChangedSwimStep).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnWaterVolumeChanged).Delegate = 0;
  *(undefined8 *)&(this->OnWaterVolumeChanged).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnWaterVolumeChanged).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnChangedSwimStep).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnWaterVolumeChanged).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_SwimEvent @ 14b5b26d0

void __thiscall UDS_SwimEvent::~UDS_SwimEvent(UDS_SwimEvent *this)

{
  void *pvVar1;
  UDS_EventManager *this_00;
  
  this->_padding_ = (longlong)&___7UDS_SwimEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnWaterVolumeChanged).Delegate.field_0x8,
             *(int *)&(this->OnWaterVolumeChanged).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnWaterVolumeChanged).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWaterVolumeChanged);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnChangedSwimStep).Delegate.field_0x8,
             *(int *)&(this->OnChangedSwimStep).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnChangedSwimStep).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChangedSwimStep);
  (this->OnChangedSwimStep_Filtered)._padding_ =
       (longlong)&___7__FDS_FilteredEventDelegate___CBW4EDS_SwimStep__AEBVFDS_SwimStepInfo____6B_;
  this_00 = UDS_EventManager::GetInst();
  if (this_00 != (UDS_EventManager *)0x0) {
    UDS_EventManager::UnregisterCleanableDelegate
              (this_00,(FDS_IDelegateCleanable *)&this->OnChangedSwimStep_Filtered);
  }
  TSet<TTuple<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
  ::Reset(&(this->OnChangedSwimStep_Filtered).Subscriptions);
  *(undefined4 *)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x48 = 0;
  pvVar1 = *(void **)&(this->OnChangedSwimStep_Filtered).Subscriptions.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_SwimStep_const_,TMulticastDelegate<void___cdecl(FDS_SwimStepInfo_const_&),FDefaultTSDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->OnChangedSwimStep_Filtered).Subscriptions);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b42d0

UClass * __cdecl UDS_SwimEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimEvent",
               &Z_Registration_Info_UClass_UDS_SwimEvent.InnerSingleton,
               StaticRegisterNativesUDS_SwimEvent,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_SwimEvent>,InternalVTableHelperCtorCaller<UDS_SwimEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_SwimEvent @ 14b5b58a0

void __cdecl UDS_SwimEvent::StaticRegisterNativesUDS_SwimEvent(void)

{
  return;
}

// GetEvent @ 14b831ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

UDS_SwimEvent * __cdecl UDS_SwimEvent::GetEvent(void)

{
  UDS_EventManager *this;
  UDS_LogManager *pUVar1;
  UDS_SwimEvent *pUVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this = UDS_EventManager::GetInst();
  if (this != (UDS_EventManager *)0x0) {
    if ((char)this->_padding_ != '\x01') {
      pUVar2 = UDS_EventManager::GetEventInternal<UDS_SwimEvent>(this);
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
  return (UDS_SwimEvent *)0x0;
}

