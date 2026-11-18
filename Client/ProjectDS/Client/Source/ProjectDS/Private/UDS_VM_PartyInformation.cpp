// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 29

// SetTitleText_WrapperImpl @ 14b6adb00

void __cdecl UDS_VM_PartyInformation::SetTitleText_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xa0),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetPartyInviteText_WrapperImpl @ 14b6adb10

void __cdecl UDS_VM_PartyInformation::SetPartyInviteText_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0xf0),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::PartyInviteText.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::PartyInviteText.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetPartyLinkText_WrapperImpl @ 14b6adb20

void __cdecl UDS_VM_PartyInformation::SetPartyLinkText_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  FDS_Text::operator=((FDS_Text *)((longlong)param_1 + 0x140),param_2);
  iStack_10 = FFieldNotificationClassDescriptor::PartyLinkText.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::PartyLinkText.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// SetClickInvite_WrapperImpl @ 14b6adb30

void __cdecl UDS_VM_PartyInformation::SetClickInvite_WrapperImpl(void *param_1,void *param_2)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> TStack_28;
  
  if (*(int *)((longlong)param_1 + 0x210) == 1) {
    FDS_PartyService::OpenPartyInvitePopup();
    return;
  }
  if (*(int *)((longlong)param_1 + 0x210) == 2) {
    TStack_28._0_8_ = 0;
    TStack_28._8_8_ = 0;
    TStack_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x347e6,Complete_System_01,&TStack_28);
  }
  return;
}

// SetClickPartyLink_WrapperImpl @ 14b6adb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UDS_VM_PartyInformation::SetClickPartyLink_WrapperImpl(void *param_1,void *param_2)

{
  long64 lVar1;
  UDS_ChattingManager *this;
  UDS_LogManager *pUVar2;
  FDS_PartyRepo *pFVar3;
  FDS_PartyMemberInfo *pFVar4;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  if (*(int *)((longlong)param_1 + 0x210) != 1) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this = UDS_ChattingManager::GetInst();
  if (this == (UDS_ChattingManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"FDS_PartyService::SendPartyInviteLink",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,0x203,L"chattingManager == nullptr");
      if ((UDS_ChattingManager *)TStack_138._padding_ != (UDS_ChattingManager *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    pFVar3 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    lVar1 = (pFVar3->PartyInfo).PartyUID;
    pFVar4 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar3->PartyInfo,(pFVar3->PartyInfo).MySlotIndex);
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"FDS_PartyService::SendPartyInviteLink",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Display,TStack_138.Ptr,0x20c,
                 L"[Party] FDS_PartyService::SendPartyInviteLink() - PartyUID : %lld");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
    UDS_ChattingManager::SendPartyChatLink(this,lVar1,pFVar4->PlayerUID,&pFVar4->Nickname);
  }
  return;
}

// SetClickClose_WrapperImpl @ 14b6adb50

void __cdecl UDS_VM_PartyInformation::SetClickClose_WrapperImpl(void *param_1,void *param_2)

{
  FName FStack_18;
  int iStack_10;
  
  *(undefined1 *)((longlong)param_1 + 0x200) = 1;
  iStack_10 = FFieldNotificationClassDescriptor::CloseMyselfEvent.BitNumber;
  FStack_18 = FFieldNotificationClassDescriptor::CloseMyselfEvent.FieldName;
  (**(code **)(*(longlong *)((longlong)param_1 + 0x28) + 0x38))
            ((longlong *)((longlong)param_1 + 0x28),&FStack_18);
  return;
}

// StaticClass @ 14b6adb60

UClass * __cdecl UDS_VM_PartyInformation::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PartyInformation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PartyInformation",
               &Z_Registration_Info_UClass_UDS_VM_PartyInformation.InnerSingleton,
               StaticRegisterNativesUDS_VM_PartyInformation,0x218,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PartyInformation>,
               InternalVTableHelperCtorCaller<UDS_VM_PartyInformation>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PartyInformation.InnerSingleton;
}

// UDS_VM_PartyInformation @ 14b6b2d80

UDS_VM_PartyInformation * __thiscall
UDS_VM_PartyInformation::UDS_VM_PartyInformation
          (UDS_VM_PartyInformation *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PartyInformation__6B_;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->PartyInviteText).StringTableType = None;
  (this->PartyInviteText).StringTableID = 0;
  (this->PartyInviteText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PartyInviteText).StringEnumTableNameID.Number = 0;
  (this->PartyInviteText).DateTime.Ticks = 0;
  (this->PartyInviteText).TimeSpan.Ticks = 0;
  (this->PartyInviteText).TimeExpressionType = None;
  (this->PartyInviteText).IsExpression = false;
  (this->PartyInviteText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyInviteText).UniqueString.Data.ArrayNum = 0;
  (this->PartyInviteText).UniqueString.Data.ArrayMax = 0;
  (this->PartyInviteText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyInviteText).FormatArgs.ArrayNum = 0;
  (this->PartyInviteText).FormatArgs.ArrayMax = 0;
  (this->PartyLinkText).StringTableType = None;
  (this->PartyLinkText).StringTableID = 0;
  (this->PartyLinkText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PartyLinkText).StringEnumTableNameID.Number = 0;
  (this->PartyLinkText).DateTime.Ticks = 0;
  (this->PartyLinkText).TimeSpan.Ticks = 0;
  (this->PartyLinkText).TimeExpressionType = None;
  (this->PartyLinkText).IsExpression = false;
  (this->PartyLinkText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyLinkText).UniqueString.Data.ArrayNum = 0;
  (this->PartyLinkText).UniqueString.Data.ArrayMax = 0;
  (this->PartyLinkText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyLinkText).FormatArgs.ArrayNum = 0;
  (this->PartyLinkText).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ClickInvite)._padding_ = '\0';
  (this->ClickInvite).bIsCustomSelected = false;
  (this->ClickInvite).bIsLacked = false;
  (this->ClickInvite).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickInvite).Delegate = 0;
  *(undefined8 *)&(this->ClickInvite).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickInvite).Delegate.field_0x10 = 0;
  (this->ClickPartyLink)._padding_ = '\0';
  (this->ClickPartyLink).bIsCustomSelected = false;
  (this->ClickPartyLink).bIsLacked = false;
  (this->ClickPartyLink).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyLink).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyLink).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyLink).Delegate.field_0x10 = 0;
  (this->ClickClose)._padding_ = '\0';
  (this->ClickClose).bIsCustomSelected = false;
  (this->ClickClose).bIsLacked = false;
  (this->ClickClose).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickClose).Delegate = 0;
  *(undefined8 *)&(this->ClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClose).Delegate.field_0x10 = 0;
  (this->CloseMyselfEvent).bIsActivate = false;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  this->PartyType = None;
  (this->TitleText).StringTableType = None;
  return this;
}

// UDS_VM_PartyInformation @ 14b6b2f10

UDS_VM_PartyInformation * __thiscall
UDS_VM_PartyInformation::UDS_VM_PartyInformation
          (UDS_VM_PartyInformation *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PartyInformation__6B_;
  (this->TitleText).StringTableID = 0;
  (this->TitleText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->TitleText).StringEnumTableNameID.Number = 0;
  (this->TitleText).DateTime.Ticks = 0;
  (this->TitleText).TimeSpan.Ticks = 0;
  (this->TitleText).TimeExpressionType = None;
  (this->TitleText).IsExpression = false;
  (this->TitleText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).UniqueString.Data.ArrayNum = 0;
  (this->TitleText).UniqueString.Data.ArrayMax = 0;
  (this->TitleText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TitleText).FormatArgs.ArrayNum = 0;
  (this->TitleText).FormatArgs.ArrayMax = 0;
  (this->PartyInviteText).StringTableType = None;
  (this->PartyInviteText).StringTableID = 0;
  (this->PartyInviteText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PartyInviteText).StringEnumTableNameID.Number = 0;
  (this->PartyInviteText).DateTime.Ticks = 0;
  (this->PartyInviteText).TimeSpan.Ticks = 0;
  (this->PartyInviteText).TimeExpressionType = None;
  (this->PartyInviteText).IsExpression = false;
  (this->PartyInviteText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyInviteText).UniqueString.Data.ArrayNum = 0;
  (this->PartyInviteText).UniqueString.Data.ArrayMax = 0;
  (this->PartyInviteText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyInviteText).FormatArgs.ArrayNum = 0;
  (this->PartyInviteText).FormatArgs.ArrayMax = 0;
  (this->PartyLinkText).StringTableType = None;
  (this->PartyLinkText).StringTableID = 0;
  (this->PartyLinkText).StringEnumTableNameID.ComparisonIndex = 0;
  (this->PartyLinkText).StringEnumTableNameID.Number = 0;
  (this->PartyLinkText).DateTime.Ticks = 0;
  (this->PartyLinkText).TimeSpan.Ticks = 0;
  (this->PartyLinkText).TimeExpressionType = None;
  (this->PartyLinkText).IsExpression = false;
  (this->PartyLinkText).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyLinkText).UniqueString.Data.ArrayNum = 0;
  (this->PartyLinkText).UniqueString.Data.ArrayMax = 0;
  (this->PartyLinkText).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartyLinkText).FormatArgs.ArrayNum = 0;
  (this->PartyLinkText).FormatArgs.ArrayMax = 0;
  (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->EntryBindingEventField).UserObjectList.ArrayNum = 0;
  (this->EntryBindingEventField).UserObjectList.ArrayMax = 0;
  (this->ClickInvite)._padding_ = '\0';
  (this->ClickInvite).bIsCustomSelected = false;
  (this->ClickInvite).bIsLacked = false;
  (this->ClickInvite).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickInvite).Delegate = 0;
  *(undefined8 *)&(this->ClickInvite).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickInvite).Delegate.field_0x10 = 0;
  (this->ClickPartyLink)._padding_ = '\0';
  (this->ClickPartyLink).bIsCustomSelected = false;
  (this->ClickPartyLink).bIsLacked = false;
  (this->ClickPartyLink).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickPartyLink).Delegate = 0;
  *(undefined8 *)&(this->ClickPartyLink).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickPartyLink).Delegate.field_0x10 = 0;
  (this->ClickClose)._padding_ = '\0';
  (this->ClickClose).bIsCustomSelected = false;
  (this->ClickClose).bIsLacked = false;
  (this->ClickClose).bIsCustomDisabled = false;
  *(undefined8 *)&(this->ClickClose).Delegate = 0;
  *(undefined8 *)&(this->ClickClose).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->ClickClose).Delegate.field_0x10 = 0;
  (this->CloseMyselfEvent).bIsActivate = false;
  (this->VM_InputKey).field0_0x0.DebugPtr = (UDS_VM_InputKey *)0x0;
  this->PartyType = None;
  (this->TitleText).StringTableType = None;
  return this;
}

// ~UDS_VM_PartyInformation @ 14b6b43e0

void __thiscall UDS_VM_PartyInformation::~UDS_VM_PartyInformation(UDS_VM_PartyInformation *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_PartyInformation__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickClose).Delegate);
  pvVar1 = *(void **)&(this->ClickClose).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickClose).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickPartyLink).Delegate);
  pvVar1 = *(void **)&(this->ClickPartyLink).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickPartyLink).Delegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ClickInvite).Delegate);
  pvVar1 = *(void **)&(this->ClickInvite).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ClickInvite).Delegate);
  pFVar2 = (this->EntryBindingEventField).UserObjectList.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->PartyLinkText).FormatArgs.AllocatorInstance.Data,
             (this->PartyLinkText).FormatArgs.ArrayNum);
  pFVar2 = (this->PartyLinkText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PartyLinkText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->PartyInviteText).FormatArgs.AllocatorInstance.Data,
             (this->PartyInviteText).FormatArgs.ArrayNum);
  pFVar2 = (this->PartyInviteText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PartyInviteText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->TitleText).FormatArgs.AllocatorInstance.Data,
             (this->TitleText).FormatArgs.ArrayNum);
  pFVar2 = (this->TitleText).FormatArgs.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->TitleText).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b6b6be0

IClassDescriptor * __thiscall
UDS_VM_PartyInformation::GetFieldNotificationDescriptor(UDS_VM_PartyInformation *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_PartyInformation::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6b79a0

UClass * __cdecl UDS_VM_PartyInformation::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_PartyInformation.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_PartyInformation",
               &Z_Registration_Info_UClass_UDS_VM_PartyInformation.InnerSingleton,
               StaticRegisterNativesUDS_VM_PartyInformation,0x218,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_PartyInformation>,
               InternalVTableHelperCtorCaller<UDS_VM_PartyInformation>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_PartyInformation.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_PartyInformation @ 14b6b7ea0

void __cdecl UDS_VM_PartyInformation::StaticRegisterNativesUDS_VM_PartyInformation(void)

{
  return;
}

// __DefaultConstructor @ 14b6b8ae0

void __cdecl UDS_VM_PartyInformation::__DefaultConstructor(FObjectInitializer *param_1)

{
  UDS_ViewModelBase *this;
  
  this = (UDS_ViewModelBase *)param_1->Obj;
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_PartyInformation__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    *(undefined1 *)
     ((longlong)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController + 4) = 0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[2].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    *(undefined4 *)&this[2].Visibility = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined1 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
  }
  return;
}

// __VTableCtorCaller @ 14b6b9290

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_PartyInformation::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    *(undefined4 *)&this[3]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_PartyInformation__6B_;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    *(undefined1 *)
     ((longlong)&this[1].ViewModelContext.SharedReferenceCount.ReferenceController + 4) = 0;
    this[1].Visibility = Visible;
    *(undefined3 *)&this[1].field_0x81 = 0;
    this[1].VMName.ComparisonIndex = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined4 *)&this[2].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    *(undefined4 *)&this[2].Visibility = 0;
    *(undefined8 *)&this[2].VMName.Number = 0;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined1 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// BindModel @ 14bed96e0

void __thiscall UDS_VM_PartyInformation::BindModel(UDS_VM_PartyInformation *this)

{
  UDS_PartyEvent *pUVar1;
  
  UDS_ViewModelBase::BindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_PartyEvent::GetEvent();
  if (pUVar1 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftParty,this);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_PartyInformation>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnLeftParty,(UDS_VM_PartyInformation *)&stack0x00000010,(pmf_4d26d55f *)this
              );
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnPartyLeaderChanged,
               this);
    TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy>::
    AddUObject<UDS_VM_PartyInformation>
              ((TMulticastDelegateRegistration<void___cdecl(__int64),FDefaultDelegateUserPolicy> *)
               &pUVar1->OnPartyLeaderChanged,(UDS_VM_PartyInformation *)&stack0x00000010,
               (pmf_77182272 *)this);
  }
  return;
}

// GetMaxPartyMember @ 14beee5c0

int __thiscall UDS_VM_PartyInformation::GetMaxPartyMember(UDS_VM_PartyInformation *this)

{
  bool bVar1;
  int iVar2;
  FDS_RaidPartyRepo *pFVar3;
  FDS_DungeonBaseTableRow *pFVar4;
  
  iVar2 = DS_CommonDataHelper::PartyMemberMax();
  pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar1 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar3);
  if (bVar1) {
    pFVar3 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar4 = FDS_DungeonBaseTableRow::Get((longlong)(pFVar3->RaidPartyInfo).DungeonId,true);
    if (pFVar4 != (FDS_DungeonBaseTableRow *)0x0) {
      iVar2 = DS_CommonDataHelper::GetMaxRaidPartyMember((uint)pFVar4->DungeonType);
      return iVar2;
    }
  }
  return iVar2;
}

// InitViewModel @ 14bef3950

void __thiscall UDS_VM_PartyInformation::InitViewModel(UDS_VM_PartyInformation *this)

{
  code *pcVar1;
  FDS_ViewModelContext_InputKey *pFVar2;
  bool bVar3;
  UDS_VM_InputKey *pUVar4;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  TSharedPtr<FDS_ViewModelContext_InputKey,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  if ((this->VM_InputKey).field0_0x0.DebugPtr == (UDS_VM_InputKey *)0x0) {
    MakeContext<FDS_ViewModelContext_InputKey>(&local_28);
    pFVar2 = local_28.Object;
    if (local_28.Object == (FDS_ViewModelContext_InputKey *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x15d;
    local_18.Object = (FDS_ViewModelContext *)local_28.Object;
    local_18.SharedReferenceCount.ReferenceController =
         local_28.SharedReferenceCount.ReferenceController;
    pFVar2->KeyActionType = IA_UI_Escape;
    if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar4 = UDS_ViewModelBase::CreateViewModel<UDS_VM_InputKey>((UObject *)this,&local_18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UDS_VM_InputKey *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)pUVar4);
    }
    (this->VM_InputKey).field0_0x0.DebugPtr = pUVar4;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
  }
  FDS_Text::SetTextFromStringTable(&this->TitleText,StringUi,0x41eea);
  FDS_Text::SetTextFromStringTable(&this->PartyInviteText,StringUi,0x41eec);
  FDS_Text::SetTextFromStringTable(&this->PartyLinkText,StringUi,0x41eeb);
  local_50 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  local_40 = FFieldNotificationClassDescriptor::PartyInviteText.BitNumber;
  local_48 = FFieldNotificationClassDescriptor::PartyInviteText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  local_30 = FFieldNotificationClassDescriptor::PartyLinkText.BitNumber;
  local_38 = FFieldNotificationClassDescriptor::PartyLinkText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
  return;
}

// OnClickClose @ 14bef8e20

void __thiscall
UDS_VM_PartyInformation::OnClickClose(UDS_VM_PartyInformation *this,FDS_ButtonEventField *param_1)

{
  FName local_18;
  int local_10;
  
  (this->CloseMyselfEvent).bIsActivate = true;
  local_10 = FFieldNotificationClassDescriptor::CloseMyselfEvent.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::CloseMyselfEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// OnClickInvite @ 14bef9940

void __thiscall
UDS_VM_PartyInformation::OnClickInvite(UDS_VM_PartyInformation *this,FDS_ButtonEventField *param_1)

{
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  if (this->PartyType == Party) {
    FDS_PartyService::OpenPartyInvitePopup();
    return;
  }
  if (this->PartyType == RaidParty) {
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x347e6,Complete_System_01,&local_28);
  }
  return;
}

// OnClickPartyLink @ 14befa4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_PartyInformation::OnClickPartyLink
          (UDS_VM_PartyInformation *this,FDS_ButtonEventField *param_1)

{
  long64 lVar1;
  UDS_ChattingManager *this_00;
  UDS_LogManager *pUVar2;
  FDS_PartyRepo *pFVar3;
  FDS_PartyMemberInfo *pFVar4;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_138;
  ulonglong uStack_18;
  
  if (this->PartyType != Party) {
    return;
  }
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_ChattingManager::GetInst();
  if (this_00 == (UDS_ChattingManager *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = (longlong)this_00;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"FDS_PartyService::SendPartyInviteLink",0x25,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,TStack_138.Ptr,0x203,L"chattingManager == nullptr");
      if ((UDS_ChattingManager *)TStack_138._padding_ != (UDS_ChattingManager *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
  }
  else {
    pFVar3 = TDS_Singleton<FDS_PartyRepo>::GetInst();
    lVar1 = (pFVar3->PartyInfo).PartyUID;
    pFVar4 = FDS_PartyInfo::GetPartyMemberInfo(&pFVar3->PartyInfo,(pFVar3->PartyInfo).MySlotIndex);
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      TStack_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_138,"FDS_PartyService::SendPartyInviteLink",0x25,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Display,TStack_138.Ptr,0x20c,
                 L"[Party] FDS_PartyService::SendPartyInviteLink() - PartyUID : %lld");
      if ((void *)TStack_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)TStack_138._padding_);
      }
    }
    UDS_ChattingManager::SendPartyChatLink(this_00,lVar1,pFVar4->PlayerUID,&pFVar4->Nickname);
  }
  return;
}

// OnLeftParty @ 14befeb30

void __thiscall UDS_VM_PartyInformation::OnLeftParty(UDS_VM_PartyInformation *this)

{
  FName local_48;
  int local_40;
  undefined4 uStack_3c;
  bool local_38;
  undefined4 local_28;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_20;
  ForAnyElementType FStack_18;
  int local_10;
  
  (this->CloseMyselfEvent).bIsActivate = true;
  local_40 = FFieldNotificationClassDescriptor::CloseMyselfEvent.BitNumber;
  local_20.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_18.Data = (FScriptContainerElement *)0x0;
  local_28 = 0;
  local_10 = 0;
  local_48 = FFieldNotificationClassDescriptor::CloseMyselfEvent.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_20,(FWriteAccessScope *)&local_48);
  if ((local_10 != 0) && (FStack_18.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_18.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_18,0,0,0x10);
    local_10 = 0;
  }
  if (local_38 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_3c,local_40),
               (FDestructionSentinel *)&local_48);
  }
  if (FStack_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_18.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_20.AccessDetector);
  return;
}

// OnPartyLeaderChanged @ 14bf02b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_VM_PartyInformation::OnPartyLeaderChanged(UDS_VM_PartyInformation *this,long64 param_1)

{
  UDS_LogManager *pUVar1;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  pUVar1 = UDS_LogManager::GetInst();
  if (pUVar1 != (UDS_LogManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_VM_PartyInformation::OnPartyLeaderChanged",0x2d,Yes);
    UDS_LogManager::PrintLog
              (pUVar1,1,Display,local_138.Ptr,0xaf,
               L"UDS_VM_PartyInformation::OnPartyLeaderChanged()");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return;
}

// OnSetViewModel @ 14bf09610

void __thiscall
UDS_VM_PartyInformation::OnSetViewModel
          (UDS_VM_PartyInformation *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedPtr<FDS_ViewModelContext_PartyInformation,1> local_28;
  TSharedPtr<FDS_ViewModelContext,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_PartyInformation>(&local_28,&local_18);
  if (local_28.Object == (FDS_ViewModelContext_PartyInformation *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->PartyType = (local_28.Object)->PartyType;
  UpdatePartyMemberList(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SetPartyInviteText @ 14bf18800

void __thiscall
UDS_VM_PartyInformation::SetPartyInviteText(UDS_VM_PartyInformation *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->PartyInviteText,param_1);
  local_10 = FFieldNotificationClassDescriptor::PartyInviteText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PartyInviteText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetPartyLinkText @ 14bf18850

void __thiscall
UDS_VM_PartyInformation::SetPartyLinkText(UDS_VM_PartyInformation *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->PartyLinkText,param_1);
  local_10 = FFieldNotificationClassDescriptor::PartyLinkText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::PartyLinkText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// SetTitleText @ 14bf19290

void __thiscall
UDS_VM_PartyInformation::SetTitleText(UDS_VM_PartyInformation *this,FDS_Text *param_1)

{
  FName local_18;
  int local_10;
  
  FDS_Text::operator=(&this->TitleText,param_1);
  local_10 = FFieldNotificationClassDescriptor::TitleText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::TitleText.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// UnbindModel @ 14bf1e710

void __thiscall UDS_VM_PartyInformation::UnbindModel(UDS_VM_PartyInformation *this)

{
  UDS_PartyEvent *pUVar1;
  
  UDS_ViewModelBase::UnbindModel((UDS_ViewModelBase *)this);
  pUVar1 = UDS_PartyEvent::GetEvent();
  if (pUVar1 != (UDS_PartyEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnLeftParty,this);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar1->OnPartyLeaderChanged,
               this);
  }
  return;
}

// UpdatePartyMemberList @ 14bf224c0

void __thiscall UDS_VM_PartyInformation::UpdatePartyMemberList(UDS_VM_PartyInformation *this)

{
  EDS_PartyType EVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FDS_RaidPartyRepo *pFVar5;
  FDS_DungeonBaseTableRow *pFVar6;
  UObject *pUVar7;
  UDS_UserObjectListItem *this_00;
  FDS_ViewModelContext *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  UScriptStruct *pUVar10;
  UDS_ViewModelContextManager *this_01;
  FDS_ViewModelContext *pFVar11;
  int iVar12;
  UDS_UserObjectListItem *local_res8;
  FName local_58;
  int local_50;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
  FDS_EntryBindingEventField::Reset(&this->EntryBindingEventField);
  iVar4 = DS_CommonDataHelper::PartyMemberMax();
  pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
  bVar3 = FDS_RaidPartyRepo::IsValidRaidPartyInfo(pFVar5);
  if (bVar3) {
    pFVar5 = TDS_Singleton<FDS_RaidPartyRepo>::GetInst();
    pFVar6 = FDS_DungeonBaseTableRow::Get((longlong)(pFVar5->RaidPartyInfo).DungeonId,true);
    if (pFVar6 != (FDS_DungeonBaseTableRow *)0x0) {
      iVar4 = DS_CommonDataHelper::GetMaxRaidPartyMember((uint)pFVar6->DungeonType);
    }
  }
  iVar12 = 0;
  EVar1 = this->PartyType;
  if (0 < iVar4) {
    do {
      pFVar11 = (FDS_ViewModelContext *)0x0;
      pUVar7 = GetTransientPackageAsObject();
      this_00 = NewObject<UDS_UserObjectListItem>(pUVar7);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      pFVar8 = ::operator_new(0x40);
      if (pFVar8 != (FDS_ViewModelContext *)0x0) {
        *(undefined8 *)&pFVar8->ViewModelTemplateKey = 0;
        *(undefined4 *)((longlong)&pFVar8[1]._padding_ + 4) = 0;
        pFVar8->DerivedStaticStruct = (UStruct *)0x0;
        (pFVar8->ViewModelName).ComparisonIndex = 0;
        (pFVar8->ViewModelName).Number = 0;
        pFVar8->_padding_ = (longlong)&___7FDS_ViewModelContext_PartyMember__6B_;
        *(undefined4 *)&pFVar8[1]._padding_ = 0;
        pFVar8[1].DerivedStaticStruct = (UStruct *)0x0;
        pFVar8[1].ViewModelName.ComparisonIndex = 0;
        pFVar8[1].ViewModelName.Number = 0;
        *(undefined8 *)&pFVar8[1].ViewModelTemplateKey = 0;
        pFVar11 = pFVar8;
      }
      pTVar9 = ::operator_new(0x20);
      if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar9->SharedReferenceCount = (atomic<int>)0x1;
        pTVar9[1]._padding_ = (longlong)ViewModelContextDeleter;
        pTVar9->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_PartyMember__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        pTVar9->WeakReferenceCount = (atomic<int>)0x1;
        *(FDS_ViewModelContext **)&pTVar9[1].SharedReferenceCount = pFVar11;
      }
      if ((pFVar11 == (FDS_ViewModelContext *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar10 = FDS_ViewModelContext_PartyMember::StaticStruct();
      pFVar11->DerivedStaticStruct = (UStruct *)pUVar10;
      this_01 = UDS_ViewModelContextManager::GetInst();
      if (this_01 != (UDS_ViewModelContextManager *)0x0) {
        if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_48.Object = pFVar11;
        local_48.SharedReferenceCount.ReferenceController = pTVar9;
        UDS_ViewModelContextManager::RegisterContext(this_01,&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
      }
      pFVar11->ViewModelTemplateKey = PartyMemberSlot;
      *(EDS_PartyType *)&pFVar11[1]._padding_ = this->PartyType;
      pFVar11[1].ViewModelTemplateKey = iVar12 + (uint)(EVar1 == RaidParty);
      if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38.Object = pFVar11;
      local_38.SharedReferenceCount.ReferenceController = pTVar9;
      UDS_UserObjectListItem::AddContext(this_00,&local_38);
      local_res8 = this_00;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this_00 != (UDS_UserObjectListItem *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      FDS_EntryBindingEventField::Add
                (&this->EntryBindingEventField,(TObjectPtr<UDS_UserObjectListItem>)&local_res8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar4);
  }
  local_50 = FFieldNotificationClassDescriptor::EntryBindingEventField.BitNumber;
  local_58 = FFieldNotificationClassDescriptor::EntryBindingEventField.FieldName;
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_58);
  return;
}

