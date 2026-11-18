// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// SetClickAcceptEvent_WrapperImpl @ 14b730560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_Common_RequestPopup::SetClickAcceptEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_UIMessageManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (*(UDS_VM_Progress **)((longlong)param_1 + 0x1c8) != (UDS_VM_Progress *)0x0) {
    UDS_VM_Progress::SetIncreaseType(*(UDS_VM_Progress **)((longlong)param_1 + 0x1c8),None);
    UDS_VM_Progress::SetCurrentValue(*(UDS_VM_Progress **)((longlong)param_1 + 0x1c8),0.0);
  }
  UDS_VM_CommonMessage::ClearMsgString(param_1);
  this = UDS_UIMessageManager::GetInst();
  if (this == (UDS_UIMessageManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_W_Common_RequestPopup::OnClickAcceptEvent",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0xaf,L"msgMng is nullptr.");
      if ((UDS_UIMessageManager *)TStack_138._padding_ != (UDS_UIMessageManager *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    UDS_UIMessageManager::SendMessageResponse
              (this,*(EDS_MessageType *)((longlong)param_1 + 0x181),Yes);
    UDS_UIMessageManager::EndMsgQueueing
              (this,*(EDS_MessageType *)((longlong)param_1 + 0x181),0,false);
    EndMessage(param_1);
  }
  return;
}

// SetClickIgnoreEvent_WrapperImpl @ 14b730570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDS_VM_W_Common_RequestPopup::SetClickIgnoreEvent_WrapperImpl(void *param_1,void *param_2)

{
  UDS_UIMessageManager *this;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (*(UDS_VM_Progress **)((longlong)param_1 + 0x1c8) != (UDS_VM_Progress *)0x0) {
    UDS_VM_Progress::SetIncreaseType(*(UDS_VM_Progress **)((longlong)param_1 + 0x1c8),None);
    UDS_VM_Progress::SetCurrentValue(*(UDS_VM_Progress **)((longlong)param_1 + 0x1c8),0.0);
  }
  UDS_VM_CommonMessage::ClearMsgString(param_1);
  this = UDS_UIMessageManager::GetInst();
  if (this == (UDS_UIMessageManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      TStack_138._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"UDS_VM_W_Common_RequestPopup::OnClickIgnoreEvent",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,TStack_138.Ptr,0xc0,L"msgMng is nullptr.");
      if ((UDS_UIMessageManager *)TStack_138._padding_ != (UDS_UIMessageManager *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    UDS_UIMessageManager::SendMessageResponse
              (this,*(EDS_MessageType *)((longlong)param_1 + 0x181),No);
    UDS_UIMessageManager::EndMsgQueueing
              (this,*(EDS_MessageType *)((longlong)param_1 + 0x181),0,false);
    EndMessage(param_1);
  }
  return;
}

// SetNotificationIconVisibility_WrapperImpl @ 14b730580

void __cdecl
UDS_VM_W_Common_RequestPopup::SetNotificationIconVisibility_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x1d0) = *(undefined1 *)param_2;
  iStack_10 = FFieldNotificationClassDescriptor::NotificationIconVisibility.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::NotificationIconVisibility.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b730590

UClass * __cdecl UDS_VM_W_Common_RequestPopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_RequestPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_RequestPopup",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_RequestPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_RequestPopup,0x280,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_RequestPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_RequestPopup>,local_res8,
               UDS_VM_CommonMessage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_RequestPopup.InnerSingleton;
}

// UDS_VM_W_Common_RequestPopup @ 14b7341d0

UDS_VM_W_Common_RequestPopup * __thiscall
UDS_VM_W_Common_RequestPopup::UDS_VM_W_Common_RequestPopup
          (UDS_VM_W_Common_RequestPopup *this,FVTableHelper *param_1)

{
  UDS_VM_CommonMessage::UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this,param_1);
  this->NotificationIconVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_RequestPopup__6B_;
  *(undefined8 *)&(this->ClickAcceptEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickAcceptEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAcceptEvent).Delegate.field_0x10 = 0;
  (this->ClickIgnoreEvent)._padding_ = '\0';
  (this->ClickIgnoreEvent).bIsCustomSelected = false;
  (this->ClickIgnoreEvent).bIsLacked = false;
  (this->ClickIgnoreEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickIgnoreEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickIgnoreEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickIgnoreEvent).Delegate.field_0x10 = 0;
  (this->VM_Progress).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->FixedText_Btn_Accept).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Accept).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Accept).DateTime.Ticks = 0;
  (this->FixedText_Btn_Accept).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Accept).TimeExpressionType = None;
  (this->FixedText_Btn_Accept).IsExpression = false;
  (this->FixedText_Btn_Accept).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accept).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Accept).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Accept).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accept).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Accept).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Ignore).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Ignore).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Ignore).DateTime.Ticks = 0;
  (this->FixedText_Btn_Ignore).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Ignore).TimeExpressionType = None;
  (this->FixedText_Btn_Ignore).IsExpression = false;
  (this->FixedText_Btn_Ignore).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Ignore).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Ignore).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Ignore).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Ignore).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Ignore).FormatArgs.ArrayMax = 0;
  this->RemainTime = 0.0;
  (this->ClickAcceptEvent)._padding_ = '\0';
  (this->ClickAcceptEvent).bIsCustomSelected = false;
  (this->ClickAcceptEvent).bIsLacked = false;
  (this->ClickAcceptEvent).bIsCustomDisabled = false;
  (this->FixedText_Btn_Accept).StringTableType = StringUi;
  (this->FixedText_Btn_Accept).StringTableID = 0x2381;
  (this->FixedText_Btn_Ignore).StringTableType = StringUi;
  (this->FixedText_Btn_Ignore).StringTableID = 0x2382;
  return this;
}

// UDS_VM_W_Common_RequestPopup @ 14b734300

UDS_VM_W_Common_RequestPopup * __thiscall
UDS_VM_W_Common_RequestPopup::UDS_VM_W_Common_RequestPopup
          (UDS_VM_W_Common_RequestPopup *this,FObjectInitializer *param_1)

{
  UDS_VM_CommonMessage::UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this,param_1);
  this->NotificationIconVisibility = Collapsed;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_RequestPopup__6B_;
  *(undefined8 *)&(this->ClickAcceptEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickAcceptEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickAcceptEvent).Delegate.field_0x10 = 0;
  (this->ClickIgnoreEvent)._padding_ = '\0';
  (this->ClickIgnoreEvent).bIsCustomSelected = false;
  (this->ClickIgnoreEvent).bIsLacked = false;
  (this->ClickIgnoreEvent).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickIgnoreEvent).Delegate = 0;
  *(undefined8 *)&(this->ClickIgnoreEvent).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickIgnoreEvent).Delegate.field_0x10 = 0;
  (this->VM_Progress).field0_0x0.DebugPtr = (UDS_VM_Progress *)0x0;
  (this->FixedText_Btn_Accept).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Accept).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Accept).DateTime.Ticks = 0;
  (this->FixedText_Btn_Accept).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Accept).TimeExpressionType = None;
  (this->FixedText_Btn_Accept).IsExpression = false;
  (this->FixedText_Btn_Accept).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accept).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Accept).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Accept).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Accept).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Accept).FormatArgs.ArrayMax = 0;
  (this->FixedText_Btn_Ignore).StringEnumTableNameID.ComparisonIndex = 0;
  (this->FixedText_Btn_Ignore).StringEnumTableNameID.Number = 0;
  (this->FixedText_Btn_Ignore).DateTime.Ticks = 0;
  (this->FixedText_Btn_Ignore).TimeSpan.Ticks = 0;
  (this->FixedText_Btn_Ignore).TimeExpressionType = None;
  (this->FixedText_Btn_Ignore).IsExpression = false;
  (this->FixedText_Btn_Ignore).UniqueString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Ignore).UniqueString.Data.ArrayNum = 0;
  (this->FixedText_Btn_Ignore).UniqueString.Data.ArrayMax = 0;
  (this->FixedText_Btn_Ignore).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FixedText_Btn_Ignore).FormatArgs.ArrayNum = 0;
  (this->FixedText_Btn_Ignore).FormatArgs.ArrayMax = 0;
  this->RemainTime = 0.0;
  (this->ClickAcceptEvent)._padding_ = '\0';
  (this->ClickAcceptEvent).bIsCustomSelected = false;
  (this->ClickAcceptEvent).bIsLacked = false;
  (this->ClickAcceptEvent).bIsCustomDisabled = false;
  (this->FixedText_Btn_Accept).StringTableType = StringUi;
  (this->FixedText_Btn_Accept).StringTableID = 0x2381;
  (this->FixedText_Btn_Ignore).StringTableType = StringUi;
  (this->FixedText_Btn_Ignore).StringTableID = 0x2382;
  return this;
}

// ~UDS_VM_W_Common_RequestPopup @ 14b735f50

void __thiscall
UDS_VM_W_Common_RequestPopup::~UDS_VM_W_Common_RequestPopup(UDS_VM_W_Common_RequestPopup *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_Common_RequestPopup__6B_;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Ignore).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Ignore).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Ignore).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Ignore).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->FixedText_Btn_Accept).FormatArgs.AllocatorInstance.Data,
             (this->FixedText_Btn_Accept).FormatArgs.ArrayNum);
  pFVar1 = (this->FixedText_Btn_Accept).FormatArgs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FixedText_Btn_Accept).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickIgnoreEvent).Delegate);
  pvVar2 = *(void **)&(this->ClickIgnoreEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickIgnoreEvent).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickAcceptEvent).Delegate);
  pvVar2 = *(void **)&(this->ClickAcceptEvent).Delegate.field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickAcceptEvent).Delegate);
  UDS_VM_CommonMessage::~UDS_VM_CommonMessage((UDS_VM_CommonMessage *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b7391a0

IClassDescriptor * __thiscall
UDS_VM_W_Common_RequestPopup::GetFieldNotificationDescriptor(UDS_VM_W_Common_RequestPopup *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_Common_RequestPopup::FFieldNotificationClassDescriptor::GetDescriptor'::__l2
             ::_dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b739d80

UClass * __cdecl UDS_VM_W_Common_RequestPopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_Common_RequestPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_Common_RequestPopup",
               &Z_Registration_Info_UClass_UDS_VM_W_Common_RequestPopup.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_Common_RequestPopup,0x280,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_VM_W_Common_RequestPopup>,
               InternalVTableHelperCtorCaller<UDS_VM_W_Common_RequestPopup>,local_res8,
               UDS_VM_CommonMessage::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_Common_RequestPopup.InnerSingleton;
}

// GetTickableTickType @ 14b73ae10

ETickableTickType __thiscall
UDS_VM_W_Common_RequestPopup::GetTickableTickType(UDS_VM_W_Common_RequestPopup *this)

{
  return Conditional;
}

// IsUpdate @ 14b73ae50

bool __thiscall UDS_VM_W_Common_RequestPopup::IsUpdate(UDS_VM_W_Common_RequestPopup *this)

{
  return true;
}

// StaticRegisterNativesUDS_VM_W_Common_RequestPopup @ 14b73aed0

void __cdecl UDS_VM_W_Common_RequestPopup::StaticRegisterNativesUDS_VM_W_Common_RequestPopup(void)

{
  return;
}

// CheckNextMessage @ 14bf9df50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Common_RequestPopup::CheckNextMessage(UDS_VM_W_Common_RequestPopup *this)

{
  char cVar1;
  bool bVar2;
  UDS_UIMessageManager *this_00;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_248 [32];
  ESlateVisibility local_218 [8];
  FDS_UIMessageInfo local_210;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_248;
  cVar1 = (**(code **)(this->_padding_ + 0x338))();
  if ((cVar1 != '\0') &&
     (bVar2 = UDS_VM_CommonMessage::IsEmptyMsgString((UDS_VM_CommonMessage *)this), bVar2)) {
    this_00 = UDS_UIMessageManager::GetInst();
    if (this_00 == (UDS_UIMessageManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = (longlong)this_00;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_VM_W_Common_RequestPopup::CheckNextMessage",0x2e,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x8b,L"msgMng is nullptr.");
        if ((UDS_UIMessageManager *)local_138._padding_ != (UDS_UIMessageManager *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      FDS_UIMessageInfo::FDS_UIMessageInfo
                (&local_210,*(EDS_MessageType *)((longlong)&this->_padding_ + 1));
      bVar2 = UDS_UIMessageManager::DequeueMsg(this_00,&local_210);
      if (bVar2) {
        UDS_VM_CommonMessage::SetMsgText((UDS_VM_CommonMessage *)this,&local_210.MsgText);
        local_218[0] = HitTestInvisible;
        UDS_VM_CommonMessage::SetMessageVisibility((UDS_VM_CommonMessage *)this,local_218);
        (**(code **)(this->_padding_ + 0x350))(this,&local_210.MsgArgs);
        UDS_VM_CommonMessage::PlayAni((UDS_VM_CommonMessage *)this);
      }
      else {
        ResetProgress(this);
        UDS_VM_CommonMessage::ClearMsgString((UDS_VM_CommonMessage *)this);
        UDS_UIMessageManager::EndMsgQueueing
                  (this_00,*(EDS_MessageType *)((longlong)&this->_padding_ + 1),0,false);
        EndMessage(this);
      }
      FDS_UIMessageInfo::~FDS_UIMessageInfo(&local_210);
    }
  }
  return;
}

// EndMessage @ 14bfa55d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_VM_W_Common_RequestPopup::EndMessage(UDS_VM_W_Common_RequestPopup *this)

{
  UDS_NotificationManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  ESlateVisibility local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_148[0] = Collapsed;
  UDS_VM_CommonMessage::SetMessageVisibility((UDS_VM_CommonMessage *)this,local_148);
  this_00 = UDS_NotificationManager::GetInst();
  if (this_00 == (UDS_NotificationManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_Common_RequestPopup::EndMessage",0x28,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0xdf,L"notiMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    UDS_NotificationManager::RefreshNotificationArray(this_00);
  }
  return;
}

// InitViewModel @ 14bfb0de0

void __thiscall UDS_VM_W_Common_RequestPopup::InitViewModel(UDS_VM_W_Common_RequestPopup *this)

{
  UDS_VM_Progress *this_00;
  ESlateVisibility local_res8 [8];
  
  if ((this->VM_Progress).field0_0x0.DebugPtr == (UDS_VM_Progress *)0x0) {
    this_00 = UDS_ViewModelBase::CreateViewModel<UDS_VM_Progress>((UObject *)this);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (this_00 == (UDS_VM_Progress *)0x0))
    {
      (this->VM_Progress).field0_0x0.DebugPtr = this_00;
      if (this_00 == (UDS_VM_Progress *)0x0) goto LAB_14bfb0e49;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)this_00);
      (this->VM_Progress).field0_0x0.DebugPtr = this_00;
    }
    UDS_VM_Progress::SetIncreaseType(this_00,None);
    UDS_VM_Progress::SetCurrentValue((this->VM_Progress).field0_0x0.DebugPtr,0.0);
  }
LAB_14bfb0e49:
  local_res8[0] = Collapsed;
  UDS_VM_CommonMessage::SetMessageVisibility((UDS_VM_CommonMessage *)this,local_res8);
  return;
}

// IsPlayableNextMessage @ 14bfb3030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_VM_W_Common_RequestPopup::IsPlayableNextMessage(UDS_VM_W_Common_RequestPopup *this)

{
  UDS_VM_Progress *this_00;
  UDS_LogManager *pUVar1;
  float fVar2;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = (this->VM_Progress).field0_0x0.DebugPtr;
  if (this_00 == (UDS_VM_Progress *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_Common_RequestPopup::IsPlayableNextMessage",0x33,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x70,L"VM_Progress is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    fVar2 = UDS_VM_Progress::GetCurrentValue(this_00);
    if (fVar2 <= 0.0) {
      return ((this->VM_Progress).field0_0x0.DebugPtr)->IncreaseType == None;
    }
  }
  return false;
}

// OnClickAcceptEvent @ 14bfb84d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Common_RequestPopup::OnClickAcceptEvent
          (UDS_VM_W_Common_RequestPopup *this,FDS_ButtonEventField *param_1)

{
  UDS_VM_Progress *this_00;
  UDS_UIMessageManager *this_01;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = (this->VM_Progress).field0_0x0.DebugPtr;
  if (this_00 != (UDS_VM_Progress *)0x0) {
    UDS_VM_Progress::SetIncreaseType(this_00,None);
    UDS_VM_Progress::SetCurrentValue((this->VM_Progress).field0_0x0.DebugPtr,0.0);
  }
  UDS_VM_CommonMessage::ClearMsgString((UDS_VM_CommonMessage *)this);
  this_01 = UDS_UIMessageManager::GetInst();
  if (this_01 == (UDS_UIMessageManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this_01;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_Common_RequestPopup::OnClickAcceptEvent",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0xaf,L"msgMng is nullptr.");
      if ((UDS_UIMessageManager *)local_138._padding_ != (UDS_UIMessageManager *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_UIMessageManager::SendMessageResponse
              (this_01,*(EDS_MessageType *)((longlong)&this->_padding_ + 1),Yes);
    UDS_UIMessageManager::EndMsgQueueing
              (this_01,*(EDS_MessageType *)((longlong)&this->_padding_ + 1),0,false);
    EndMessage(this);
  }
  return;
}

// OnClickIgnoreEvent @ 14bfb9f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Common_RequestPopup::OnClickIgnoreEvent
          (UDS_VM_W_Common_RequestPopup *this,FDS_ButtonEventField *param_1)

{
  UDS_VM_Progress *this_00;
  UDS_UIMessageManager *this_01;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = (this->VM_Progress).field0_0x0.DebugPtr;
  if (this_00 != (UDS_VM_Progress *)0x0) {
    UDS_VM_Progress::SetIncreaseType(this_00,None);
    UDS_VM_Progress::SetCurrentValue((this->VM_Progress).field0_0x0.DebugPtr,0.0);
  }
  UDS_VM_CommonMessage::ClearMsgString((UDS_VM_CommonMessage *)this);
  this_01 = UDS_UIMessageManager::GetInst();
  if (this_01 == (UDS_UIMessageManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this_01;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_VM_W_Common_RequestPopup::OnClickIgnoreEvent",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0xc0,L"msgMng is nullptr.");
      if ((UDS_UIMessageManager *)local_138._padding_ != (UDS_UIMessageManager *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    UDS_UIMessageManager::SendMessageResponse
              (this_01,*(EDS_MessageType *)((longlong)&this->_padding_ + 1),No);
    UDS_UIMessageManager::EndMsgQueueing
              (this_01,*(EDS_MessageType *)((longlong)&this->_padding_ + 1),0,false);
    EndMessage(this);
  }
  return;
}

// OnCloseInit @ 14bfbbf70

void __thiscall UDS_VM_W_Common_RequestPopup::OnCloseInit(UDS_VM_W_Common_RequestPopup *this)

{
  longlong lVar1;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    uStack_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (&this->_padding_ != &uStack_18) {
      this->_padding_ = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&this->_padding_,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    lVar1 = this->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x00014bdcdcaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x2f8))(this);
    return;
  }
  return;
}

// OnSetViewModel @ 14bfcb4a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UDS_VM_W_Common_RequestPopup::OnSetViewModel
          (UDS_VM_W_Common_RequestPopup *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  FDS_ViewModelContext *pFVar1;
  char cVar2;
  UDS_LogManager *pUVar3;
  FTimerManager *this_00;
  undefined1 auStackY_1c8 [32];
  ESlateVisibility local_198 [16];
  code *local_188;
  undefined8 uStack_180;
  TSharedPtr<FDS_ViewModelContext_Common_RequestPopup,1> local_178;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  undefined1 local_148 [272];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_168.Object = param_1->Object;
  local_168.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_CommonMessage::OnSetViewModel((UDS_VM_CommonMessage *)this,&local_168);
  cVar2 = (**(code **)(this->_padding_ + 0x338))(this);
  if (cVar2 != '\0') {
    pFVar1 = param_1->Object;
    if (pFVar1 == (FDS_ViewModelContext *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_38 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
                   "UDS_VM_W_Common_RequestPopup::OnSetViewModel",0x2c,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_30,0x29,L"InViewModelContext is nullptr.");
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
      }
    }
    else {
      local_158.SharedReferenceCount.ReferenceController =
           (param_1->SharedReferenceCount).ReferenceController;
      if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_158.Object = pFVar1;
      SafeCast<FDS_ViewModelContext_Common_RequestPopup>(&local_178,&local_158);
      if (local_178.Object != (FDS_ViewModelContext_Common_RequestPopup *)0x0) {
        *(char *)((longlong)&this->_padding_ + 1) = (char)(local_178.Object)->_padding_;
        this->RemainTime = (local_178.Object)->RemainTime;
        local_198[0] = Collapsed;
        UDS_VM_CommonMessage::SetMessageVisibility((UDS_VM_CommonMessage *)this,local_198);
        this_00 = FDS_TimerManager::Get((UObject *)0x0);
        uStack_180 = (ulonglong)uStack_180._4_4_ << 0x20;
        local_188 = _vcall__816__flat______;
        FTimerManager::SetTimerForNextTick<UDS_VM_W_Common_RequestPopup>
                  (this_00,(UDS_VM_W_Common_RequestPopup *)local_148,(pmf_60489e20 *)this);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnUpdate @ 14bfd0fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_W_Common_RequestPopup::OnUpdate(UDS_VM_W_Common_RequestPopup *this,float param_1)

{
  UDS_VM_Progress *pUVar1;
  UDS_UIMessageManager *this_00;
  UDS_LogManager *pUVar2;
  float fVar3;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pUVar1 = (this->VM_Progress).field0_0x0.DebugPtr;
  if (((pUVar1 != (UDS_VM_Progress *)0x0) &&
      (fVar3 = UDS_VM_Progress::GetCurrentValue(pUVar1), fVar3 <= 0.0)) &&
     (pUVar1 = (this->VM_Progress).field0_0x0.DebugPtr, pUVar1->IncreaseType == DeltaTime)) {
    if (pUVar1 != (UDS_VM_Progress *)0x0) {
      UDS_VM_Progress::SetIncreaseType(pUVar1,None);
      UDS_VM_Progress::SetCurrentValue((this->VM_Progress).field0_0x0.DebugPtr,0.0);
    }
    UDS_VM_CommonMessage::ClearMsgString((UDS_VM_CommonMessage *)this);
    this_00 = UDS_UIMessageManager::GetInst();
    if (this_00 == (UDS_UIMessageManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_VM_W_Common_RequestPopup::OnUpdate",0x26,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_148.Ptr,0x4c,L"msgMng is nullptr.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      UDS_UIMessageManager::EndMsgQueueing
                (this_00,*(EDS_MessageType *)((longlong)&this->_padding_ + 1),0,false);
      EndMessage(this);
    }
  }
  return;
}

// ResetProgress @ 14bfd5810

void __thiscall UDS_VM_W_Common_RequestPopup::ResetProgress(UDS_VM_W_Common_RequestPopup *this)

{
  UDS_VM_Progress *this_00;
  
  this_00 = (this->VM_Progress).field0_0x0.DebugPtr;
  if (this_00 != (UDS_VM_Progress *)0x0) {
    UDS_VM_Progress::SetIncreaseType(this_00,None);
    UDS_VM_Progress::SetCurrentValue((this->VM_Progress).field0_0x0.DebugPtr,0.0);
    return;
  }
  return;
}

// SetMsgArgs @ 14bfdc110

void __thiscall
UDS_VM_W_Common_RequestPopup::SetMsgArgs
          (UDS_VM_W_Common_RequestPopup *this,
          TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
          *param_1)

{
  UDS_VM_Progress *this_00;
  ESlateVisibility local_res8 [32];
  FName local_18;
  int local_10;
  
  this_00 = (this->VM_Progress).field0_0x0.DebugPtr;
  if (this_00 != (UDS_VM_Progress *)0x0) {
    UDS_VM_Progress::SetMaxValue(this_00,this->RemainTime);
    UDS_VM_Progress::SetMinValue((this->VM_Progress).field0_0x0.DebugPtr,0.0);
    UDS_VM_Progress::SetTargetValue((this->VM_Progress).field0_0x0.DebugPtr,0.0);
    UDS_VM_Progress::SetCurrentValue((this->VM_Progress).field0_0x0.DebugPtr,this->RemainTime);
    UDS_VM_Progress::SetIncreaseType((this->VM_Progress).field0_0x0.DebugPtr,DeltaTime);
  }
  local_res8[0] = Visible;
  UDS_VM_CommonMessage::SetMessageVisibility((UDS_VM_CommonMessage *)this,local_res8);
  this->NotificationIconVisibility = SelfHitTestInvisible;
  local_10 = FFieldNotificationClassDescriptor::NotificationIconVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::NotificationIconVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetNotificationIconVisibility @ 14bfdc560

void __thiscall
UDS_VM_W_Common_RequestPopup::SetNotificationIconVisibility
          (UDS_VM_W_Common_RequestPopup *this,ESlateVisibility *param_1)

{
  FName local_18;
  int local_10;
  
  this->NotificationIconVisibility = *param_1;
  local_10 = FFieldNotificationClassDescriptor::NotificationIconVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::NotificationIconVisibility.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bfdff00

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall UDS_VM_W_Common_RequestPopup::UnbindModel(UDS_VM_W_Common_RequestPopup *this)

{
  UDS_LanguageManager *pUVar1;
  
  pUVar1 = UDS_LanguageManager::GetInst();
  if (pUVar1 != (UDS_LanguageManager *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLanguageChanged,this
              );
  }
  return;
}

