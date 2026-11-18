// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// SetIconID_WrapperImpl @ 14b6763a0

void __cdecl
UDS_VM_HUD_Notification_Message_Slot::SetIconID_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined4 *)((longlong)param_1 + 0xb8) = *(undefined4 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetMessageText_WrapperImpl @ 14b6763b0

void __cdecl
UDS_VM_HUD_Notification_Message_Slot::SetMessageText_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xc0),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::MessageText.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::MessageText.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetClickEventField_WrapperImpl @ 14b6763c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_HUD_Notification_Message_Slot::SetClickEventField_WrapperImpl(void *param_1,void *param_2)

{
  char cVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_NotificationManager *this;
  longlong *plVar4;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr FStack_168;
  UDS_NotificationManager *pUStack_160;
  FReadAccessScope FStack_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)param_1 + 0xa0),
             &FStack_158);
  if ((*(int *)((longlong)param_1 + 0xb0) != 0) &&
     (*(longlong **)((longlong)param_1 + 0xa8) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)((longlong)param_1 + 0xa8) + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_158);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 ((longlong)param_1 + 0xa0),&FStack_158);
      if (*(int *)((longlong)param_1 + 0xb0) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)((longlong)param_1 + 0xa8);
      }
      (**(code **)(*plVar4 + 0x60))();
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&FStack_158);
  pUStack_160 = UDS_NotificationManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_160 != (UDS_NotificationManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_160);
  }
  FStack_168.ObjectIndex = 0;
  FStack_168.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_160 != (UDS_NotificationManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_160);
  }
  FWeakObjectPtr::operator=(&FStack_168,(FObjectPtr)&pUStack_160);
  bVar2 = TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr> *)&FStack_168,
                     (void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_HUD_Notification_Message_Slot::OnClickEventField",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,TStack_138.Ptr,0x38,L"notificationManager is nullptr.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    this = (UDS_NotificationManager *)FWeakObjectPtr::Get(&FStack_168);
    UDS_NotificationManager::OnConfirmNotification
              (this,*(EDS_NotificationType *)((longlong)param_1 + 0x150));
  }
  return;
}

// SetCloseBtnClickEventField_WrapperImpl @ 14b6763d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_HUD_Notification_Message_Slot::SetCloseBtnClickEventField_WrapperImpl
          (void *param_1,void *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NotificationManager *pUVar3;
  undefined1 auStackY_178 [32];
  FWeakObjectPtr FStack_148;
  UDS_NotificationManager *pUStack_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUStack_140 = UDS_NotificationManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_140 != (UDS_NotificationManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_140);
  }
  FStack_148.ObjectIndex = 0;
  FStack_148.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUStack_140 != (UDS_NotificationManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUStack_140);
  }
  FWeakObjectPtr::operator=(&FStack_148,(FObjectPtr)&pUStack_140);
  bVar1 = TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr> *)&FStack_148,
                     (void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_HUD_Notification_Message_Slot::OnCloseBtnClickEventField",0x3f,
                 Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,TStack_138.Ptr,0x44,L"notificationManager is nullptr.");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    pUVar3 = (UDS_NotificationManager *)FWeakObjectPtr::Get(&FStack_148);
    UDS_NotificationManager::RemoveNotificationData
              (pUVar3,*(EDS_NotificationType *)((longlong)param_1 + 0x150));
    pUVar3 = (UDS_NotificationManager *)FWeakObjectPtr::Get(&FStack_148);
    UDS_NotificationManager::RefreshNotificationArray(pUVar3);
  }
  return;
}

// StaticClass @ 14b6763e0

UClass * __cdecl UDS_VM_HUD_Notification_Message_Slot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_Notification_Message_Slot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_Notification_Message_Slot",
               &Z_Registration_Info_UClass_UDS_VM_HUD_Notification_Message_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_Notification_Message_Slot,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_HUD_Notification_Message_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_Notification_Message_Slot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_Notification_Message_Slot.InnerSingleton;
}

// UDS_VM_HUD_Notification_Message_Slot @ 14b679670

UDS_VM_HUD_Notification_Message_Slot * __thiscall
UDS_VM_HUD_Notification_Message_Slot::UDS_VM_HUD_Notification_Message_Slot
          (UDS_VM_HUD_Notification_Message_Slot *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_Notification_Message_Slot__6B_;
  *(undefined8 *)&this->OnClickNotificationSlot = 0;
  *(undefined8 *)&(this->OnClickNotificationSlot).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickNotificationSlot).field_0x10 = 0;
  this->IconID = 0;
  (this->MessageText).StringTableType = None;
  (this->MessageText).StringTableID = 0;
  (this->MessageText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MessageText).StringEnumTableNameID.Number = 0;
  (this->MessageText).DateTime.Ticks = 0;
  (this->MessageText).TimeSpan.Ticks = 0;
  (this->MessageText).TimeExpressionType = None;
  (this->MessageText).IsExpression = false;
  (this->MessageText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MessageText).UniqueString.Data.ArrayNum = 0;
  (this->MessageText).UniqueString.Data.ArrayMax = 0;
  (this->MessageText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MessageText).FormatArgs.ArrayNum = 0;
  (this->MessageText).FormatArgs.ArrayMax = 0;
  (this->ClickEventField)._padding_ = '\0';
  (this->ClickEventField).bIsCustomSelected = false;
  (this->ClickEventField).bIsLacked = false;
  (this->ClickEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEventField).Delegate.field_0x10 = 0;
  (this->CloseBtnClickEventField)._padding_ = '\0';
  (this->CloseBtnClickEventField).bIsCustomSelected = false;
  (this->CloseBtnClickEventField).bIsLacked = false;
  (this->CloseBtnClickEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->CloseBtnClickEventField).Delegate = 0;
  *(undefined8 *)&(this->CloseBtnClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CloseBtnClickEventField).Delegate.field_0x10 = 0;
  return this;
}

// UDS_VM_HUD_Notification_Message_Slot @ 14b679750

UDS_VM_HUD_Notification_Message_Slot * __thiscall
UDS_VM_HUD_Notification_Message_Slot::UDS_VM_HUD_Notification_Message_Slot
          (UDS_VM_HUD_Notification_Message_Slot *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_Notification_Message_Slot__6B_;
  *(undefined8 *)&this->OnClickNotificationSlot = 0;
  *(undefined8 *)&(this->OnClickNotificationSlot).field_0x8 = 0;
  *(undefined4 *)&(this->OnClickNotificationSlot).field_0x10 = 0;
  this->IconID = 0;
  (this->MessageText).StringTableType = None;
  (this->MessageText).StringTableID = 0;
  (this->MessageText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->MessageText).StringEnumTableNameID.Number = 0;
  (this->MessageText).DateTime.Ticks = 0;
  (this->MessageText).TimeSpan.Ticks = 0;
  (this->MessageText).TimeExpressionType = None;
  (this->MessageText).IsExpression = false;
  (this->MessageText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MessageText).UniqueString.Data.ArrayNum = 0;
  (this->MessageText).UniqueString.Data.ArrayMax = 0;
  (this->MessageText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MessageText).FormatArgs.ArrayNum = 0;
  (this->MessageText).FormatArgs.ArrayMax = 0;
  (this->ClickEventField)._padding_ = '\0';
  (this->ClickEventField).bIsCustomSelected = false;
  (this->ClickEventField).bIsLacked = false;
  (this->ClickEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickEventField).Delegate = 0;
  *(undefined8 *)&(this->ClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickEventField).Delegate.field_0x10 = 0;
  (this->CloseBtnClickEventField)._padding_ = '\0';
  (this->CloseBtnClickEventField).bIsCustomSelected = false;
  (this->CloseBtnClickEventField).bIsLacked = false;
  (this->CloseBtnClickEventField).bIsCustomDisabled = false;
  *(undefined8 *)&(this->CloseBtnClickEventField).Delegate = 0;
  *(undefined8 *)&(this->CloseBtnClickEventField).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->CloseBtnClickEventField).Delegate.field_0x10 = 0;
  return this;
}

// ~UDS_VM_HUD_Notification_Message_Slot @ 14b67b340

void __thiscall
UDS_VM_HUD_Notification_Message_Slot::~UDS_VM_HUD_Notification_Message_Slot
          (UDS_VM_HUD_Notification_Message_Slot *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_HUD_Notification_Message_Slot__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CloseBtnClickEventField).Delegate)
  ;
  pvVar1 = *(void **)&(this->CloseBtnClickEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CloseBtnClickEventField).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickEventField).Delegate);
  pvVar1 = *(void **)&(this->ClickEventField).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickEventField).Delegate);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->MessageText).FormatArgs.AllocatorInstance.Data,
             (this->MessageText).FormatArgs.ArrayNum);
  pFVar2 = (this->MessageText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->MessageText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnClickNotificationSlot);
  pvVar1 = *(void **)&(this->OnClickNotificationSlot).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnClickNotificationSlot);
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b67dbf0

IClassDescriptor * __thiscall
UDS_VM_HUD_Notification_Message_Slot::GetFieldNotificationDescriptor
          (UDS_VM_HUD_Notification_Message_Slot *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_HUD_Notification_Message_Slot::FFieldNotificationClassDescriptor::
             GetDescriptor'::__l2::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b67e470

UClass * __cdecl UDS_VM_HUD_Notification_Message_Slot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_HUD_Notification_Message_Slot.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_HUD_Notification_Message_Slot",
               &Z_Registration_Info_UClass_UDS_VM_HUD_Notification_Message_Slot.InnerSingleton,
               StaticRegisterNativesUDS_VM_HUD_Notification_Message_Slot,0x158,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_HUD_Notification_Message_Slot>,
               InternalVTableHelperCtorCaller<UDS_VM_HUD_Notification_Message_Slot>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_HUD_Notification_Message_Slot.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_HUD_Notification_Message_Slot @ 14b67f1c0

void __cdecl
UDS_VM_HUD_Notification_Message_Slot::StaticRegisterNativesUDS_VM_HUD_Notification_Message_Slot
          (void)

{
  return;
}

// OnClickEventField @ 14bf62110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_Notification_Message_Slot::OnClickEventField
          (UDS_VM_HUD_Notification_Message_Slot *this,FDS_ButtonEventField *param_1)

{
  char cVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_NotificationManager *this_00;
  longlong *plVar4;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168;
  UDS_NotificationManager *local_160;
  FReadAccessScope local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnClickNotificationSlot,&local_158);
  if ((*(int *)&(this->OnClickNotificationSlot).field_0x10 != 0) &&
     (plVar4 = *(longlong **)&(this->OnClickNotificationSlot).field_0x8, plVar4 != (longlong *)0x0))
  {
    cVar1 = (**(code **)(*plVar4 + 0x38))();
    if (cVar1 != '\0') {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_158);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnClickNotificationSlot,&local_158);
      if (*(int *)&(this->OnClickNotificationSlot).field_0x10 == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)&(this->OnClickNotificationSlot).field_0x8;
      }
      (**(code **)(*plVar4 + 0x60))();
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_158);
  local_160 = UDS_NotificationManager::GetInst();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_160 != (UDS_NotificationManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_160);
  }
  local_168.ObjectIndex = 0;
  local_168.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_160 != (UDS_NotificationManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_160);
  }
  FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_160);
  bVar2 = TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_NotificationManager,FWeakObjectPtr> *)&local_168,
                     (void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_HUD_Notification_Message_Slot::OnClickEventField",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x38,L"notificationManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_NotificationManager *)FWeakObjectPtr::Get(&local_168);
    UDS_NotificationManager::OnConfirmNotification(this_00,this->NotificationType);
  }
  return;
}

// OnCloseBtnClickEventField @ 14bf63100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_Notification_Message_Slot::OnCloseBtnClickEventField
          (UDS_VM_HUD_Notification_Message_Slot *this,FDS_ButtonEventField *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_NotificationManager *pUVar3;
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
                (&local_138,"UDS_VM_HUD_Notification_Message_Slot::OnCloseBtnClickEventField",0x3f,
                 Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x44,L"notificationManager is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar3 = (UDS_NotificationManager *)FWeakObjectPtr::Get(&local_148);
    UDS_NotificationManager::RemoveNotificationData(pUVar3,this->NotificationType);
    pUVar3 = (UDS_NotificationManager *)FWeakObjectPtr::Get(&local_148);
    UDS_NotificationManager::RefreshNotificationArray(pUVar3);
  }
  return;
}

// OnSetViewModel @ 14bf68c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_HUD_Notification_Message_Slot::OnSetViewModel
          (UDS_VM_HUD_Notification_Message_Slot *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  UDS_LogManager *pUVar2;
  FDS_NotificationBaseTableRow *pFVar3;
  FDS_ContentsTabFrameTableRow *this_00;
  FDS_ContentsBaseTableRow *pFVar4;
  undefined1 auStackY_1a8 [32];
  FName local_178;
  int local_170;
  FName local_168;
  int local_160;
  TSharedPtr<FDS_ViewModelContext_NotificationInfo,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
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
                (&local_138,"UDS_VM_HUD_Notification_Message_Slot::OnSetViewModel",0x34,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x14,L"context is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this->NotificationType = (local_158.Object)->NotificationType;
    TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
              (&this->OnClickNotificationSlot,&(local_158.Object)->OnClickNotificationSlot);
    FDS_Text::operator=(&this->MessageText,&(local_158.Object)->NotificationMessageText);
    local_170 = FFieldNotificationClassDescriptor::MessageText.BitNumber;
    local_178 = FFieldNotificationClassDescriptor::MessageText.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_178);
    pFVar3 = FDS_NotificationBaseTableRow::GetRef((ulonglong)this->NotificationType,true);
    this_00 = FDS_ContentsTabFrameTableRow::GetRef((longlong)(int)pFVar3->ID_ContentsTab,true);
    pFVar4 = FDS_ContentsTabFrameTableRow::ID_ContentsBaseTable(this_00);
    this->IconID = pFVar4->ID_OpenIcon;
    local_160 = FFieldNotificationClassDescriptor::IconID.BitNumber;
    local_168 = FFieldNotificationClassDescriptor::IconID.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_168);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetIconID @ 14bf7b190

void __thiscall
UDS_VM_HUD_Notification_Message_Slot::SetIconID
          (UDS_VM_HUD_Notification_Message_Slot *this,int *param_1)

{
  FName local_18;
  int local_10;
  
  this->IconID = *param_1;
  local_10 = FFieldNotificationClassDescriptor::IconID.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IconID.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetMessageText @ 14bf7c550

void __thiscall
UDS_VM_HUD_Notification_Message_Slot::SetMessageText
          (UDS_VM_HUD_Notification_Message_Slot *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->MessageText,param_1);
  local_10 = FFieldNotificationClassDescriptor::MessageText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::MessageText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

