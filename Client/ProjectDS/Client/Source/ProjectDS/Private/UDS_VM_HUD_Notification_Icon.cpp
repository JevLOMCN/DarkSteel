// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// SetNotificationCount_WrapperImpl @ 14b675ec0

void __cdecl
UDS_VM_HUD_Notification_Icon::SetNotificationCount_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0xb8) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::NotificationCount.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::NotificationCount.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetNotificationCountVisibility_WrapperImpl @ 14b675ed0

void __cdecl
UDS_VM_HUD_Notification_Icon::SetNotificationCountVisibility_WrapperImpl
          (void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0xbc) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::NotificationCountVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::NotificationCountVisibility.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetClickEventField_WrapperImpl @ 14b675ee0

void __cdecl
UDS_VM_HUD_Notification_Icon::SetClickEventField_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope FStack_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xa0),
             &FStack_28);
  if ((*(int *)((longlong)param_1 + 0xb0) != 0) &&
     (*(longlong **)((longlong)param_1 + 0xa8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)param_1 + 0xa8) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((longlong)param_1 + 0xa0),&FStack_28);
      if (*(int *)((longlong)param_1 + 0xb0) == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)((longlong)param_1 + 0xa8);
      }
      (**(code **)(*plVar2 + 0x60))();
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_28);
  return;
}

// StaticClass @ 14b675ef0

UClass * __cdecl UDS_VM_HUD_Notification_Icon::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_Notification_Icon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_Notification_Icon",
               &Z_Registration_Info_UClass_UDS_VM_HUD_Notification_Icon.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_Notification_Icon,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_HUD_Notification_Icon>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_Notification_Icon>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_Notification_Icon.InnerSingleton;
}

// UDS_VM_HUD_Notification_Icon @ 14b679590

UDS_VM_HUD_Notification_Icon * __thiscall
UDS_VM_HUD_Notification_Icon::UDS_VM_HUD_Notification_Icon
          (UDS_VM_HUD_Notification_Icon *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_Notification_Icon__6B_;
  *(undefined8 *)&this->OnClickNotificationIcon = 0;
  *(undefined8 *)&(this->OnClickNotificationIcon).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickNotificationIcon).field_0x10 = 0;
  (this->ClickEventField)._padding_ = '\0';
  (this->ClickEventField).bIsCustomSelected = false;
  (this->ClickEventField).bIsLacked = false;
  (this->ClickEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEventField).Delegate.field_0x10 = 0;
  return this;
}

// UDS_VM_HUD_Notification_Icon @ 14b679600

UDS_VM_HUD_Notification_Icon * __thiscall
UDS_VM_HUD_Notification_Icon::UDS_VM_HUD_Notification_Icon
          (UDS_VM_HUD_Notification_Icon *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_Notification_Icon__6B_;
  *(undefined8 *)&this->OnClickNotificationIcon = 0;
  *(undefined8 *)&(this->OnClickNotificationIcon).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickNotificationIcon).field_0x10 = 0;
  (this->ClickEventField)._padding_ = '\0';
  (this->ClickEventField).bIsCustomSelected = false;
  (this->ClickEventField).bIsLacked = false;
  (this->ClickEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEventField).Delegate.field_0x10 = 0;
  return this;
}

// ~UDS_VM_HUD_Notification_Icon @ 14b67b2a0

void __thiscall
UDS_VM_HUD_Notification_Icon::~UDS_VM_HUD_Notification_Icon(UDS_VM_HUD_Notification_Icon *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_Notification_Icon__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickEventField).Delegate);
  pvVar1 = *(void **)&(this->ClickEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickEventField).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickNotificationIcon);
  pvVar1 = *(void **)&(this->OnClickNotificationIcon).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickNotificationIcon);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b67db80

IClassDescriptor * __thiscall
UDS_VM_HUD_Notification_Icon::GetFieldNotificationDescriptor(UDS_VM_HUD_Notification_Icon *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_Notification_Icon::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67e3b0

UClass * __cdecl UDS_VM_HUD_Notification_Icon::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_Notification_Icon.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_Notification_Icon",
               &Z_Registration_Info_UClass_UDS_VM_HUD_Notification_Icon.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_Notification_Icon,0xe0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_HUD_Notification_Icon>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_Notification_Icon>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_Notification_Icon.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_Notification_Icon @ 14b67f180

void __cdecl UDS_VM_HUD_Notification_Icon::StaticRegisterNativesUDS_VM_HUD_Notification_Icon(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_HUD_Notification_Icon_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnNotificationInfoChanged @ 14b680690

void __cdecl
UDS_VM_HUD_Notification_Icon::execOnNotificationInfoChanged
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pTVar2 = &local_18;
  if ((TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress
      != (TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar2 = (TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_> *)
             param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnNotificationInfoChanged((UDS_VM_HUD_Notification_Icon *)param_1,pTVar2);
  DestructItems<FDS_NotificationData,int>
            ((FDS_NotificationData *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((FDS_NotificationData *)local_18.AllocatorInstance.Data != (FDS_NotificationData *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// BindModel @ 14bf406d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_Notification_Icon::BindModel(UDS_VM_HUD_Notification_Icon *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NotificationManager *pUVar3;
  FName *pFVar4;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  FName local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_140 = (FName)UDS_NotificationManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_140 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_140 != (FName)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
  bVar1 = TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr> *)&local_148,
                     (void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_Notification_Icon::BindModel",0x27,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x1b,L"notificationManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar3 = (UDS_NotificationManager *)FWeakObjectPtr::Get(&local_148);
    UDS_NotificationManager::UnBindNotificationInfoDelegate(pUVar3,(UObject *)this);
    pUVar3 = (UDS_NotificationManager *)FWeakObjectPtr::Get(&local_148);
    pFVar4 = ::FName::FName(&local_140,"OnNotificationInfoChanged");
    UDS_NotificationManager::BindNotificationInfoDelegate(pUVar3,(UObject *)this,*pFVar4);
  }
  return;
}

// OnClickEventField @ 14bf62090

void __thiscall
UDS_VM_HUD_Notification_Icon::OnClickEventField
          (UDS_VM_HUD_Notification_Icon *this,FDS_ButtonEventField *param_1)

{
  char cVar1;
  longlong *plVar2;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnClickNotificationIcon,&local_28);
  if ((*(int *)&(this->OnClickNotificationIcon).field_0x10 != 0) &&
     (plVar2 = *(longlong **)&(this->OnClickNotificationIcon).field_0x8, plVar2 != (longlong *)0x0))
  {
    cVar1 = (**(code **)(*plVar2 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_28);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnClickNotificationIcon,&local_28);
      if (*(int *)&(this->OnClickNotificationIcon).field_0x10 == 0) {
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar2 = *(longlong **)&(this->OnClickNotificationIcon).field_0x8;
      }
      (**(code **)(*plVar2 + 0x60))();
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// OnNotificationInfoChanged @ 14bf65420

void __thiscall
UDS_VM_HUD_Notification_Icon::OnNotificationInfoChanged
          (UDS_VM_HUD_Notification_Icon *this,
          TArray<FDS_NotificationData,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  ESlateVisibility EVar2;
  FName local_18;
  int local_10;
  
  iVar1 = param_1->ArrayNum;
  EVar2 = Collapsed;
  if (0 < iVar1) {
    EVar2 = SelfHitTestInvisible;
  }
  this->NotificationCountVisibility = EVar2;
  local_10 = FFieldNotificationClassDescriptor::NotificationCountVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::NotificationCountVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  this->NotificationCount = iVar1;
  local_10 = FFieldNotificationClassDescriptor::NotificationCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::NotificationCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnSetViewModel @ 14bf68b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_Notification_Icon::OnSetViewModel
          (UDS_VM_HUD_Notification_Icon *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_LogManager *pUVar2;
  undefined1 auStackY_188 [32];
  TSharedPtr<FDS_ViewModelContext_NotificationInfo,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_148.Object = param_1->Object;
  local_148.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_NotificationInfo>(&local_158,&local_148);
  if (local_158.Object == (FDS_ViewModelContext_NotificationInfo *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_Notification_Icon::OnSetViewModel",0x2c,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xf,L"context is nullptr");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&this->OnClickNotificationIcon,&(local_158.Object)->OnClickNotificationSlot);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetNotificationCount @ 14bf7c6a0

void __thiscall
UDS_VM_HUD_Notification_Icon::SetNotificationCount(UDS_VM_HUD_Notification_Icon *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->NotificationCount = *param_1;
  local_10 = FFieldNotificationClassDescriptor::NotificationCount.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::NotificationCount.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetNotificationCountVisibility @ 14bf7c6e0

void __thiscall
UDS_VM_HUD_Notification_Icon::SetNotificationCountVisibility
          (UDS_VM_HUD_Notification_Icon *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->NotificationCountVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::NotificationCountVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::NotificationCountVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bf84a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_HUD_Notification_Icon::UnbindModel(UDS_VM_HUD_Notification_Icon *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NotificationManager *this_00;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr local_148;
  UDS_NotificationManager *local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_140 = UDS_NotificationManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UDS_NotificationManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  local_148.ObjectIndex = 0;
  local_148.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_140 != (UDS_NotificationManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_140);
  }
  FWeakObjectPtr::operator=(&local_148,(FObjectPtr)&local_140);
  bVar1 = TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr> *)&local_148,
                     (void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_Notification_Icon::UnbindModel",0x29,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x29,L"notificationManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_NotificationManager *)FWeakObjectPtr::Get(&local_148);
    UDS_NotificationManager::UnBindNotificationInfoDelegate(this_00,(UObject *)this);
  }
  return;
}

