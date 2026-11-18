// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 6

// StaticClass @ 14b4e68d0

UClass * __cdecl UDS_MailEvent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MailEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MailEvent",
               &Z_Registration_Info_UClass_UDS_MailEvent.InnerSingleton,
               StaticRegisterNativesUDS_MailEvent,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MailEvent>,InternalVTableHelperCtorCaller<UDS_MailEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MailEvent.InnerSingleton;
}

// UDS_MailEvent @ 14b4e8ab0

UDS_MailEvent * __thiscall UDS_MailEvent::UDS_MailEvent(UDS_MailEvent *this,FVTableHelper *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MailEvent__6B_;
  *(undefined8 *)&(this->OnMailUnreadNotification).Delegate = 0;
  *(undefined8 *)&(this->OnMailUnreadNotification).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnMailUnreadNotification).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnMailRewardNotification).Delegate = 0;
  *(undefined8 *)&(this->OnMailRewardNotification).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnMailRewardNotification).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnMailUnreadNotification).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnMailRewardNotification).Delegate.field_0x18 = 2;
  return this;
}

// UDS_MailEvent @ 14b4e8b10

UDS_MailEvent * __thiscall
UDS_MailEvent::UDS_MailEvent(UDS_MailEvent *this,FObjectInitializer *param_1)

{
  UDS_EventBase::UDS_EventBase((UDS_EventBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_MailEvent__6B_;
  *(undefined8 *)&(this->OnMailUnreadNotification).Delegate = 0;
  *(undefined8 *)&(this->OnMailUnreadNotification).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnMailUnreadNotification).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnMailRewardNotification).Delegate = 0;
  *(undefined8 *)&(this->OnMailRewardNotification).Delegate.field_0x8 = 0;
  *(undefined8 *)&(this->OnMailRewardNotification).Delegate.field_0x10 = 0;
  *(undefined8 *)&(this->OnMailUnreadNotification).Delegate.field_0x18 = 2;
  *(undefined8 *)&(this->OnMailRewardNotification).Delegate.field_0x18 = 2;
  return this;
}

// ~UDS_MailEvent @ 14b4e9aa0

void __thiscall UDS_MailEvent::~UDS_MailEvent(UDS_MailEvent *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_MailEvent__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMailRewardNotification).Delegate.field_0x8,
             *(int *)&(this->OnMailRewardNotification).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnMailRewardNotification).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMailRewardNotification);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMailUnreadNotification).Delegate.field_0x8,
             *(int *)&(this->OnMailUnreadNotification).Delegate.field_0x10);
  pvVar1 = *(void **)&(this->OnMailUnreadNotification).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMailUnreadNotification);
  UDS_EventBase::~UDS_EventBase((UDS_EventBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b4eb690

UClass * __cdecl UDS_MailEvent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MailEvent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MailEvent",
               &Z_Registration_Info_UClass_UDS_MailEvent.InnerSingleton,
               StaticRegisterNativesUDS_MailEvent,0x68,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_MailEvent>,InternalVTableHelperCtorCaller<UDS_MailEvent>,
               local_res8,UDS_EventBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MailEvent.InnerSingleton;
}

// StaticRegisterNativesUDS_MailEvent @ 14b4ec160

void __cdecl UDS_MailEvent::StaticRegisterNativesUDS_MailEvent(void)

{
  return;
}

